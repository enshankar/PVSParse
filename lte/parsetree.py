from __future__ import annotations
import sys
from typing import Optional
import json
import subprocess
from pathlib import Path

# Defined in ltedfapeg.pvs:15
class Entry:
    mode: int # 0 = fail(dep), 3 = good(dep, span), 4 = push(pos, nt)
    dep: Optional[int]
    span: Optional[int]
    nt: Optional[str]
    chars = []

    def __init__(self, d: dict):
        self.mode = d["constructor"]
        obj = d["value"]
        if self.mode == 0:
            self.dep = obj["dep"]
        elif self.mode == 3:
            self.dep = obj["dep"]
            self.span = obj["span"]
            self.chars = (obj["chars"]["seq"])
        elif self.mode == 4:
            self.pos = obj["pos"]
            self.nt = obj["nt"]

    def json(self):
        if self.mode == 0:
            return { "type": "fail", "dep": self.dep}
        elif self.mode == 3:
            chars_str = bytes(self.chars).decode("utf-8")
            return {"type": "good", "chars": chars_str}
            # return f"good({self.dep}, {self.span}, '{chars_str}')"
        elif self.mode == 4:
            return {"type": "push", "pos": self.pos, "label": nt_labels_ejson[self.nt]}
            # return f"push({self.pos}, {nt_labels[self.nt]})"
        else:
            return {"type": "unknown"}

# # Defined in ltadfapegproof.pvs:20
# class ParseTree:
#     nt: str
#     entry: Entry
#     subone: Optional[ParseTree]
#     subtwo: Optional[ParseTree]

#     def __init__(self, d: dict):
#         obj = d["obj"]
#         self.nt = obj["nt"]
#         self.entry = Entry(obj["entry"])
#         self.subone = None
#         self.subtwo = None
#         if "subone" in obj:
#             self.subone = ParseTree(obj["subone"])
#         if "subtwo" in obj:
#             self.subtwo = ParseTree(obj["subtwo"])

#     def json(self):
#         j = {
#             "nt": nt_labels[self.nt],
#             "entry": self.entry.json(),
#             #"size": "zero",
#         }
#         if self.subone:
#             #j["size"] = "one"
#             j["subone"] = self.subone.json()
#         if self.subtwo:
#             #j["size"] = "two"
#             j["subtwo"] = self.subtwo.json()
#         return j

class ParseTreeADT:
    
    constructor: int
    nt: int
    entry: Entry
    subone: Optional[ParseTree]
    subtwo: Optional[ParseTree]


    def __init__(self, d: dict):
        self.constructor = constructor_map[d["constructor"]]
        obj = d["value"]
        self.nt = obj["nt"]
        self.entry = Entry(obj["entry"])
        self.subone = None
        self.subtwo = None
        if "subone" in obj:
            self.subone = ParseTreeADT(obj["subone"])
        if "subtwo" in obj:
            self.subtwo = ParseTreeADT(obj["subtwo"])

    def json(self):
        j = {
            # "con": self.constructor,
            "nt": self.nt,
            "nt_label": f"{nt_labels_ejson[self.nt]}",
            **self.entry.json()
        }

        if self.subone:
            j["subone"] = self.subone.json()
        if self.subtwo:
            j["subtwo"] = self.subtwo.json()

        return j

constructor_map: dict = {
    0: "zero",
    1: "one",
    2: "two"
}

nt_labels_djson = {
    0: "data",
    1: "data$",
    2: "adata",
    3: "wspace",
    4: "whitespace",
    5: "dictail",
    6: "dictentry*",
    7: "stringarray",
    8: "token",
    9: "array",
    10: "rhsdata*",
    11: "rhsdatatail",
    12: "commadictail",
    13: "arraydata*",
    14: "commaarraydata*",
    15: "arraydatadata*",
    16: "digit",
    17: "obracechar",
    18: "cbracechar",
    19: "obrackchar",
    20: "cbrackchar",
    21: "quote",
    22: "commachar",
    23: "colonchar",
    24: "obrace",
    25: "cbrace",
    26: "obrack",
    27: "cbrack",
    28: "comma",
    29: "colon",
    30: "fail",
    31: "epsilon",
    33: "unknown",
}

nt_labels_ejson ={
  0: "data",
  1: "dictdata",
  2: "adata",
  3: "wspace",
  4: "whitespace",
  5: "dictail",
  6: "ndictail",
  7: "dictentry",
  8: "token",
  9: "array",
  10: "tokencolon",
  11: "dictail*",
  12: "digitkeywordtoken",
  13: "arraydata*",
  14: "commaarraydata*",
  15: "arraydatadata*",
  16: "digit",
  17: "obracechar",
  18: "cbracechar",
  19: "obrackchar",
  20: "cbrackchar",
  21: "quote",
  22: "commachar",
  23: "colonchar",
  24: "obrace",
  25: "cbrace",
  26: "obrack",
  27: "cbrack",
  28: "comma",
  29: "colon",
  30: "fail",
  31: "epsilon",
  32: "keywordtoken",
  33: "keyword",
  34: "wdictail",
  35: "wndictail"
}


def main(filename):
    subprocess.run(["make", "-j8", "lte"], capture_output=True)

    result = subprocess.run(["./lte", filename], capture_output=True)
    parsetree_raw = json.loads(result.stdout.decode('utf-8'))
    ast_raw = json.loads(result.stderr.decode('utf-8'))
    Path("parsed_tree_raw.json").write_text(json.dumps(parsetree_raw, indent=2))
    parsetree_processed = ParseTreeADT(parsetree_raw).json()
    Path("parsed_tree.json").write_text(json.dumps(parsetree_processed, indent=2))

    ast_processed = ParseTreeADT(ast_raw).json()
    Path("parsed_ast.json").write_text(json.dumps(ast_processed, indent=2))

    print(json.dumps(ast_processed, indent=2))


if __name__ == "__main__":
    main(sys.argv[1])
