import json
import subprocess
import os
import sys

def parse_jsondata(data):
    """Recursively parses the jsondata from PVS JSON output into a readable string."""
    if not isinstance(data, dict):
        return str(data)

    constructor = data.get('constructor')
    value = data.get('value', {})

    # 0: jstr
    if constructor == 0:
        seq = value.get('strval', {}).get('seq', [])
        # Convert ASCII codes to string, escaping double quotes
        s = "".join(map(chr, seq)).replace('"', '\\"')
        return f'jstr("{s}")'

    # 1: jbool
    elif constructor == 1:
        bool_val = value.get('boolval', False)
        return f'jbool({bool_val})'

    # 2: jnull
    elif constructor == 2:
        return 'jnull'

    # 3: jpair
    elif constructor == 3:
        key_seq = value.get('key', {}).get('seq', [])
        key_str = "".join(map(chr, key_seq))

        val_data = value.get('value')
        parsed_value = parse_jsondata(val_data)

        return f'jpair("{key_str}", {parsed_value})'

    # 4: jdict
    elif constructor == 4:
        contents_seq = value.get('contents', {}).get('seq', [])
        # Process items in the order they appear
        parsed_pairs = [parse_jsondata(p) for p in contents_seq]
        return f'jdict([{", ".join(parsed_pairs)}])'

    # 5: jnumeral
    elif constructor == 5:
        val = value.get('val')
        exp = value.get('exp')
        return f'jnumeral({val}, {exp})'

    # 6: jarray
    elif constructor == 6:
        arr_seq = value.get('arrval', {}).get('seq', [])
        # Process items in the order they appear
        parsed_elements = [parse_jsondata(e) for e in arr_seq]
        return f'jarray([{", ".join(parsed_elements)}])'

    else:
        return "junknown"


def main(filename):
    subprocess.run(["make", "-j8", "jsondata_debug"], capture_output=True)

    result = subprocess.run(["./jsondata_debug", filename], capture_output=True,
                            env={
                                "MallocNanoZone": "0",
                                "DYLD_LIBRARY_PATH": os.environ.get("DYLD_LIBRARY_PATH", "")
                            })
    result_txt = result.stdout.decode("utf-8")

    data = json.loads(result_txt)
    if data["constructor"] == 0:
        reason_bytes = data['value']['reason']['seq']
        reason_str = "".join(map(chr, reason_bytes))
        print(f"Parse failed: {reason_str}")
        return
    readable_output = parse_jsondata(data["value"]["json"])
    print(readable_output)

if __name__ == "__main__":
    main(sys.argv[1])
