# * Prelude
# ** Imports
import ctypes
import os
import platform
import json

# ** Hack Around OS X Memory Management
if os.environ.get("MallocNanoZone") != "0":
    import sys
    os.environ["MallocNanoZone"] = "0"
    os.execv(sys.executable, [sys.executable] + sys.argv)


# * CTypes
# ** CTypes Preamble
lib_name = "libpvsjson.so"
if platform.system() == "Darwin":
    lib_name = "libpvsjson.dylib"

lib_path = os.path.join(os.path.dirname(os.path.abspath(__file__)), lib_name)

try:
    lib = ctypes.CDLL(lib_path)
except OSError as e:
    print(f"Error loading shared library: {e}")
    print("Please compile the C code first by running 'make'.")
    exit(1)

# ** Ctypes type signatures
c_void_p = ctypes.c_void_p
c_char_p = ctypes.c_char_p
c_bool = ctypes.c_bool
c_uint64 = ctypes.c_uint64

# ** Core jsondata prototypes
# void *parse_jsondata(char *s)
lib.parse_jsondata.argtypes = [c_char_p]
lib.parse_jsondata.restype = c_void_p

# void free_jsondata(void *j)
lib.free_jsondata.argtypes = [c_void_p]
lib.free_jsondata.restype = None

# void retain_jsondata(void *j)
lib.retain_jsondata.argtypes = [c_void_p]
lib.retain_jsondata.restype = None

# char *jsondata_to_string(void *j)
lib.jsondata_to_string.argtypes = [c_void_p]
lib.jsondata_to_string.restype = c_void_p

# void free_string(char* str)
lib.free_string.argtypes = [c_void_p]
lib.free_string.restype = None

lib.example__toy_transform1.argtypes = [c_void_p]
lib.example__toy_transform1.restype = c_void_p

lib.example__transform.argtypes = [c_void_p]
lib.example__transform.restype = c_void_p

# ** jslt_helpers prototypes

# jsondata__jsondata_adt_t jslt_helpers__json_get_field(jsondata__jsondata_adt_t, char*)
lib.jslt_helpers__json_get_key.argtypes = [c_void_p, c_char_p]
lib.jslt_helpers__json_get_key.restype = c_void_p

# # jsondata__jsondata_adt_t jslt_helpers__json_get_index(jsondata__jsondata_adt_t, jsondata__jsondata_adt_t)
# lib.jslt_helpers__json_get_index.argtypes = [c_void_p, c_void_p]
# lib.jslt_helpers__json_get_index.restype = c_void_p

# # jsondata__jsondata_adt_t jslt_helpers__json_slice(jsondata__jsondata_adt_t, jsondata__jsondata_adt_t, jsondata__jsondata_adt_t)
# lib.jslt_helpers__json_slice.argtypes = [c_void_p, c_void_p, c_void_p]
# lib.jslt_helpers__json_slice.restype = c_void_p

# # jsondata__jsondata_adt_t jslt_helpers__json_slice_from(jsondata__jsondata_adt_t, jsondata__jsondata_adt_t)
# lib.jslt_helpers__json_slice_from.argtypes = [c_void_p, c_void_p]
# lib.jslt_helpers__json_slice_from.restype = c_void_p

# # jsondata__jsondata_adt_t jslt_helpers__json_slice_to(jsondata__jsondata_adt_t, jsondata__jsondata_adt_t)
# lib.jslt_helpers__json_slice_to.argtypes = [c_void_p, c_void_p]
# lib.jslt_helpers__json_slice_to.restype = c_void_p

# # bool jslt_helpers__json_is_truthy(jsondata__jsondata_adt_t)
# lib.jslt_helpers__json_is_truthy.argtypes = [c_void_p]
# lib.jslt_helpers__json_is_truthy.restype = c_bool

# # uint64_t jslt_helpers__json_to_number(jsondata__jsondata_adt_t)
# lib.jslt_helpers__json_to_number.argtypes = [c_void_p]
# lib.jslt_helpers__json_to_number.restype = c_uint64

# # jsondata__jsondata_adt_t jslt_helpers__json_numeric_op(char*, jsondata__jsondata_adt_t, jsondata__jsondata_adt_t)
# lib.jslt_helpers__json_numeric_op.argtypes = [c_char_p, c_void_p, c_void_p]
# lib.jslt_helpers__json_numeric_op.restype = c_void_p

# # bool jslt_helpers__json_numeric_compare(char*, jsondata__jsondata_adt_t, jsondata__jsondata_adt_t)
# lib.jslt_helpers__json_numeric_compare.argtypes = [c_char_p, c_void_p, c_void_p]
# lib.jslt_helpers__json_numeric_compare.restype = c_bool

# # jsondata__jsondata_adt_t jslt_helpers__json_concat(jsondata__jsondata_adt_t, jsondata__jsondata_adt_t)
# lib.jslt_helpers__json_concat.argtypes = [c_void_p, c_void_p]
# lib.jslt_helpers__json_concat.restype = c_void_p

# # jsondata__jsondata_adt_t jslt_helpers__json_size(jsondata__jsondata_adt_t)
# lib.jslt_helpers__json_size.argtypes = [c_void_p]
# lib.jslt_helpers__json_size.restype = c_void_p

# # bool jslt_helpers__json_equals(jsondata__jsondata_adt_t, jsondata__jsondata_adt_t)
# lib.jslt_helpers__json_equals.argtypes = [c_void_p, c_void_p]
# lib.jslt_helpers__json_equals.restype = c_bool

# # jsondata__jsondata_adt_t jslt_helpers__json_type(jsondata__jsondata_adt_t)
# lib.jslt_helpers__json_type.argtypes = [c_void_p]
# lib.jslt_helpers__json_type.restype = c_void_p

# # jsondata__jsondata_adt_t jslt_helpers__json_empty(jsondata__jsondata_adt_t)
# lib.jslt_helpers__json_empty.argtypes = [c_void_p]
# lib.jslt_helpers__json_empty.restype = c_void_p

# # jsondata__jsondata_adt_t jslt_helpers__json_substring(jsondata__jsondata_adt_t, jsondata__jsondata_adt_t, jsondata__jsondata_adt_t)
# lib.jslt_helpers__json_substring.argtypes = [c_void_p, c_void_p, c_void_p]
# lib.jslt_helpers__json_substring.restype = c_void_p

# ** DJSONSchema C Prototypes
# # djsondata__djsonschematype_adt_t djsondata__jsondata_to_schema(jsondata__jsondata_adt_t)
# lib.djsondata___jsondata_to_schema.argtypes = [c_void_p]
# lib.djsondata___jsondata_to_schema.restype = c_void_p

# # bool djsondata__check(djsonschema__djsonschematype)
# lib.djsondata__check.argtypes = [c_void_p]
# lib.djsondata__check.restype = c_bool

# * JSONData Wrapper
class JSONData:
    """A Python wrapper for the C jsondata__jsondata_adt_t."""

    def __init__(self, initial_string: str):
        encoded_str = initial_string.encode('utf-8')
        self._ptr = lib.parse_jsondata(encoded_str)

        if not self._ptr:
            raise MemoryError("The C function failed to allocate memory.")

    @classmethod
    def _from_ptr(cls, ptr: int) -> 'JSONData':
        """Creates a JSONData instance from an existing C pointer."""
        if not ptr:
            return JSONData('null')

        lib.retain_jsondata(ptr)
        instance = cls.__new__(cls)
        instance._ptr = ptr
        return instance

    def __del__(self):
        if self._ptr:
            # lib.free_jsondata(self._ptr)
            self._ptr = None

    def __str__(self):
        lib.retain_jsondata(self._ptr)
        c_res_ptr = lib.jsondata_to_string(self._ptr)
        if not c_res_ptr:
            return "Error: C function returned NULL string."

        try:
          c_string_ptr = ctypes.cast(c_res_ptr, ctypes.c_char_p)
          python_string = c_string_ptr.value.decode('utf-8')
        finally:
            lib.free_string(c_res_ptr)
        return python_string

    def toy_transform1(self) -> 'JSONData':
        result_ptr = lib.example__toy_transform1(self._ptr)
        if not result_ptr:
            return "Error: C function returned NULL"

        return JSONData._from_ptr(result_ptr)
    
    def transform(self) -> 'JSONData':
        result_ptr = lib.example__transform(self._ptr)
        if not result_ptr:
            return "Error: C function returned NULL"
        return JSONData._from_ptr(result_ptr)

    def __repr__(self):
        return f"<JSONData managing C pointer at {self._ptr}>"

    def get_key(self, key: str) -> 'JSONData':
        """Gets a field from a JSON object."""
        result_ptr = lib.jslt_helpers__json_get_key(self._ptr, key.encode('utf-8'))
        return JSONData._from_ptr(result_ptr)

    def get_index(self, index: 'JSONData') -> 'JSONData':
        """Gets an element from a JSON array by its index."""
        result_ptr = lib.jslt_helpers__json_get_index(self._ptr, index._ptr)
        return JSONData._from_ptr(result_ptr)

    def slice(self, start: 'JSONData', ed: 'JSONData') -> 'JSONData':
        """Slices a JSON array or string from a start to an end index."""
        result_ptr = lib.jslt_helpers__json_slice(self._ptr, start._ptr, ed._ptr)
        return JSONData._from_ptr(result_ptr)

    def slice_from(self, start: 'JSONData') -> 'JSONData':
        """Slices a JSON array or string from a start index to the end."""
        result_ptr = lib.jslt_helpers__json_slice_from(self._ptr, start._ptr)
        return JSONData._from_ptr(result_ptr)

    def slice_to(self, ed: 'JSONData') -> 'JSONData':
        """Slices a JSON array or string from the beginning to an end index."""
        result_ptr = lib.jslt_helpers__json_slice_to(self._ptr, ed._ptr)
        return JSONData._from_ptr(result_ptr)

    def is_truthy(self) -> bool:
        """Checks if the JSON value is truthy according to JSLT rules."""
        return lib.jslt_helpers__json_is_truthy(self._ptr)

    def to_uint(self) -> int:
        """Converts a JSON value to a 64-bit unsigned integer."""
        return lib.jslt_helpers__json_to_number(self._ptr)

    def numeric_op(self, op: str, right: 'JSONData') -> 'JSONData':
        """Performs a numeric operation (+, -, *, /, %) on two JSON values."""
        op_encoded = op.encode('utf-8')
        result_ptr = lib.jslt_helpers__json_numeric_op(op_encoded, self._ptr, right._ptr)
        return JSONData._from_ptr(result_ptr)

    def numeric_compare(self, op: str, right: 'JSONData') -> bool:
        """Performs a numeric comparison (==, !=, <, <=, >, >=) on two JSON values."""
        op_encoded = op.encode('utf-8')
        return lib.jslt_helpers__json_numeric_compare(op_encoded, self._ptr, right._ptr)

    def concat(self, right: 'JSONData') -> 'JSONData':
        """Concatenates two JSON values (arrays, strings, or objects)."""
        result_ptr = lib.jslt_helpers__json_concat(self._ptr, right._ptr)
        return JSONData._from_ptr(result_ptr)

    def size(self) -> 'JSONData':
        """Returns the size of a JSON string, array, or object as a JSON number."""
        result_ptr = lib.jslt_helpers__json_size(self._ptr)
        return JSONData._from_ptr(result_ptr)

    def equals(self, right: 'JSONData') -> bool:
        """Checks for equality between two JSON values."""
        return lib.jslt_helpers__json_equals(self._ptr, right._ptr)

    def type(self) -> 'JSONData':
        """Returns the type of the JSON value as a JSON string."""
        result_ptr = lib.jslt_helpers__json_type(self._ptr)
        return JSONData._from_ptr(result_ptr)

    def empty(self) -> 'JSONData':
        """Returns an empty version of the JSON value's type (e.g., [] for an array)."""
        result_ptr = lib.jslt_helpers__json_empty(self._ptr)
        return JSONData._from_ptr(result_ptr)

    def substring(self, start: 'JSONData', length_opt: 'JSONData') -> 'JSONData':
        """Extracts a substring from a JSON string."""
        result_ptr = lib.jslt_helpers__json_substring(self._ptr, start._ptr, length_opt._ptr)
        return JSONData._from_ptr(result_ptr)

# * DJSONSchema Wrapper
class DJSONSchema:
    """A Python wrapper for the C djsondata__djsonschmeatype_adt_t."""

    def __init__(self, schema_description: JSONData):
        self._ptr = lib.djsondata__jsondata_to_schema(schema_description._ptr)

        if not self._ptr:
            raise MemoryError("The C function failed to allocate memory.")

    def check(self, j: JSONData) -> bool:
        return lib.djsondata__check(self._ptr, j._ptr)


# * Test Main Function
if __name__ == "__main__":

    import faulthandler
    faulthandler.enable()

    # test_data = {
    #     "PID.1": "SET-ID",
    #     "PID.2": 12345,
    #     "PID.3": ["Karthik"],
    #     "PID.4": 54321,
    #     # "PID.5": "Karthik",
    #     # "PID.6": "FHIRFLY",
    #     # "PID.7": "06102002:04:00:00",
    #     # "PID.8": "M",
    #     # "PID.9": "KVN",
    #     # "PID.10": "Asian",
    #     # "PID.11": "333 Ravenswood Avenue",
    #     # "PID.12": 94025,
    #     # "PID.13": "408-391-5068",
    #     # "PID.14": "408-391-5068",
    #     # "PID.15": "English",
    #     # "PID.16": "Single",
    #     # "PID.17": "N/A",
    #     # "PID.18": 6102002,
    #     # "PID.19": 123450610,
    #     # "PID.20": 123445,
    #     # "PID.21": "ident",
    #     # "PID.22": "Asian",
    #     # "PID.23": "Lowell, MA",
    #     # "PID.24": False,
    #     # "PID.25": 1,
    #     # "PID.26": "USA",
    #     # "PID.27": "N/A",
    #     # "PID.28": "USA",
    #     # "PID.29": "N/A",
    #     # "PID.30": False,
    #     # "PID.31": False,
    #     # "PID.32": "N/A",
    #     # "PID.33": "TODAY",
    #     # "PID.34": "SRI",
    #     # "PID.35": "Human",
    #     # "PID.36": "N/A",
    #     # "PID.37": "N/A",
    #     # "PID.38": "N/A"
    # }

    # pvs_test_data = JSONData(json.dumps(test_data))
    # tdata = pvs_test_data.transform()
    # print(f"transformed data: {tdata}")
    
    
    data1 = JSONData(json.dumps({"foo": 1}))
    print(f"data1: {data1}")

    data2 = JSONData(json.dumps({"foo": 1, "bar": 2}))
    print(f"data2: {data2}")

    data3 = JSONData(json.dumps({"foo": 1, "bar": {}, "quux": [1, 2, 3]}))
    print(f"data3: {data3}")
    tdata3 = data3.toy_transform1()
    print(f"tdata3: {tdata3}")

    data3 = JSONData(json.dumps({"foo": 1, "bar": 2, "baz": 3}))
    print(f"data3: {data3}")

    data4 = JSONData(json.dumps({"foo": 1, "bar": 2, "baz": 3, "quux": 4}))
    print(f"data4: {data4}")
    
    # data5 = JSONData(json.dumps({"foo": 1, "bar": 2, "baz": 3, "quux": 4, "quuux": 5}))
    # print(f"data5: {data5}")
    
