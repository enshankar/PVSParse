from pathlib import Path
import json
import subprocess
from parsetree import ParseTreeADT

class JSONNull:
    def __eq__(self, other):
        return isinstance(other, JSONNull)

    def __repr__(self):
        return "null"

def build_object(node):
    nt = node.get('nt_label')
    if node['type'] != "good":
        return None

    # Terminal values
    if nt == 'token':
        # A token is a string, remove the surrounding quotes.
        return node['chars'].strip()[1:-1]
    elif nt == 'digit':
        # A digit is a number, convert it to an integer.
        return int(node['chars'])
    elif nt == 'keyword':
        if node['chars'] == 'true':
            return True
        elif node['chars'] == 'false':
            return False
        elif node['chars'] == 'null':
            return JSONNull()
        else:
            return None
    # Structure nodes
    elif nt in ['data', 'adata', 'dictdata', 'digitkeywordtoken', 'keywordtoken', "wdictail", "wndictail"]:
        # These rules are choices. We find the successful branch and recurse.
        res1 = build_object(node['subone'])
        if res1 is not None:
            return res1
        return build_object(node['subtwo'])
    # Dictionaries
    elif nt == 'dictail':
        return build_object(node['subtwo']) or {}
    elif nt in ['ndictail']:
        entry = build_object(node['subone'])
        # Rest: ndictail 2-> dictail* 2-> ndictail
        rest = build_object(node['subtwo']['subtwo']) or {}
        return {**entry, **rest}
    elif nt == 'dictentry':
        # key:   dictentry 1-> tokencolon 1-> token is the key
        key = build_object(node['subone']['subone'])

        # value: dictentry 2-> dictdata 2-> thing
        value = build_object(node['subtwo'])

        return {key: value}
    # Arrays
    elif nt in ['arraydata*', 'commaarraydata*']:
        return build_object(node['subtwo']) or []
    elif nt == 'arraydatadata*':
        # car: arraydatadata* 1-> data
        car = build_object(node['subone'])
        # cdr: arraydatadata* 2-> commaarraydata*
        cdr = build_object(node['subtwo']) or []

        return [car, *cdr]

    return None

def test_object(expected_object, result_override=None, test_file=None):
    if test_file is None:
        Path("test.json").write_text(json.dumps(expected_object))
        test_file = "test.json"
    else:
        test_file = f"test_files/{test_file}"

    result = subprocess.run(["./lte", test_file], capture_output=True)
    decoded = result.stderr.decode('utf-8')
    parsetree_raw = json.loads(decoded)
    Path("parsed_tree_raw.json").write_text(json.dumps(parsetree_raw, indent=2))
    parsetree_processed = ParseTreeADT(parsetree_raw).json()
    Path("parsed_tree.json").write_text(json.dumps(parsetree_processed, indent=2))
    reconstructed_object = build_object(parsetree_processed)

    if result_override is not None:
        expected_object = result_override

    # Print the results for verification
    if test_file != "test.json":
        print(f"Expected Object (from {test_file}):")
    else:
        print("Expected Object:")
    print(expected_object)
    print("Reconstructed Object:")
    print(reconstructed_object)
    print()

    assert expected_object == reconstructed_object


subprocess.run(["make", "-j8", "lte"], capture_output=True)

test_object({"foo": [3, {"baz": ["quux", 5, 6]}]})
test_object([1, "two", {"three": 3}, [1, 2, 3, 4]])

test_object(dict(), test_file="trivial.json")
test_object([], test_file="trivial_array.json")
test_object("foo", test_file="trivial_string.json")
test_object(3, test_file="trivial_num.json")
test_object({"foo": 1, "bar": "bar", "quux": {"bar1": "bar1", "foo1": 1}}, test_file="test.json")
test_object({"foo": 1, "bar": "bar", "quux": {"bar1": "bar1", "foo1": 1}}, test_file="test_ws_min.json")
# test_object({"foo": 1, "bar": "bar", "quux": {"bar1": "bar1", "foo1": 1}}, test_file="test_ws_max.json")
test_object({"foo": "bar"}, test_file="test1.json")
test_object({"foo": "bar", "baz": "quux"}, test_file="test2.json")
test_object({"foo": "bar", "baz": "quux", "ping": "pong"}, test_file="test3.json")
test_object({"foo": "bar", "baz": "quux", "ping": "pong", "wing": "ding"}, test_file="test4.json")
test_object([1, 2, 3, 4], test_file="test5.json")
test_object({"foo": 3}, test_file="test6.json")
test_object(False, test_file="test7.json")
test_object({f"null": JSONNull(), "false": False, "true": True}, test_file="test8.json")

print("\n✅ Verification successful!")
