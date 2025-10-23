/* * Prelude */
#include "jsondata_interface_c.h"

/* ** Helper Functions */
static bytestrings__bytestring_t
make_bytestring(const char *arg)
{
  size_t len = strlen(arg);
  uint32_t *array = malloc(len * sizeof(uint32_t));

  for (uint32_t i = 0; i < len; ++i) {
    array[i] = arg[i] & 0xff;
  }
  stringliteral_t sl = mk_string(len, array);
  strings__string_t st = strings__make_string(len, (strings_array_2_t)sl);
  bytestrings__bytestring_t bs = bytestrings__mk_bytestring(st);
  free(array); //sl and st are freed in strings__make_string and bytestrings_mk_bytestring
  return bs;
}

static char*
str_from_bytestring(bytestrings__bytestring_t str)
{
  uint32_t size = str->seq->size;
  char *result = malloc((size + 1) * sizeof(char));

  for(uint32_t i = 0; i < size; i++) {
    result[i] = str->seq->elems[i];
  }
  result[size] = 0;

  return result;
}

/* * Core JSONData Functions */
void *parse_jsondata(char *s) {
  void *result = NULL;
  bytestrings__bytestring_t jstr = make_bytestring(s);
  jsondata_interface__result_type_adt_t parsed = jsondata_interface__json_from_str(jstr);

  if (parsed->jsondata_interface__result_type_adt_index == 1) {
    jsondata__jsondata_adt_t json = ((jsondata_interface__r_success_t)parsed)->json;
    json->count++;
    result = (void *)json;
  }

  release_jsondata_interface__result_type_adt(parsed);
  return result;
}

void retain_jsondata(jsondata__jsondata_adt_t json) {
  json->count++;
}

void free_jsondata(jsondata__jsondata_adt_t json) {
  release_jsondata__jsondata_adt(json);
}

char *jsondata_to_string(jsondata__jsondata_adt_t json) {
  bytestrings__bytestring_t str = jsondata__json_to_string(json);
  char *result = str_from_bytestring(str);
  release_bytestrings__bytestring(str);
  return result;
}

void free_string(char *s) {
  free(s);
}

/* * JSLT Helpers */
/*
// These shim functions are needed to translate bytestrings at the Python/C boundary.

jsondata__jsondata_adt_t json_get_field(jsondata__jsondata_adt_t obj, char* key_str) {
    bytestrings__bytestring_t key_bs = make_bytestring(key_str);
    jsondata__jsondata_adt_t result = jslt_helpers__json_get_field(obj, key_bs);
    release_bytestrings__bytestring(key_bs);
    return result;
}

jsondata__jsondata_adt_t json_numeric_op(char* op_str, jsondata__jsondata_adt_t left, jsondata__jsondata_adt_t right) {
    bytestrings__bytestring_t op_bs = make_bytestring(op_str);
    jsondata__jsondata_adt_t result = jslt_helpers__json_numeric_op(op_bs, left, right);
    release_bytestrings__bytestring(op_bs);
    return result;
}

bool json_numeric_compare(char* op_str, jsondata__jsondata_adt_t left, jsondata__jsondata_adt_t right) {
    bytestrings__bytestring_t op_bs = make_bytestring(op_str);
    bool result = jslt_helpers__json_numeric_compare(op_bs, left, right);
    release_bytestrings__bytestring(op_bs);
    return result;
}

*/
