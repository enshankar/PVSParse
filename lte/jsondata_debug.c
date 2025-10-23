#include "jsondata_interface_c.h"

static bytestrings__bytestring_t
make_bytestring(const char *arg)
{   size_t len = strlen(arg);
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

/* int main() { */
/*   jsondata_interface__result_type_adt_t result = jsondata_interface__test5_json(); */
/*   char *result_str = json_jsondata_interface__result_type_adt(result); */
/*   printf("%s\n", result_str); */

/*   /\* jsondata__jsondata_adt_t json = jsondata_interface__test5_result(); *\/ */
/*   /\* char *json_str = json_jsondata__jsondata_adt(json); *\/ */
/*   /\* printf("%s\n", json_str); *\/ */
/* } */

int main(int argc, char** argv){
  if (argc < 2) {
    fprintf(stderr, "lte: Arguments required\n");
    return 1;
  }

  for (int i = 1; i < argc; i++) {
    bytestrings__bytestring_t filename = make_bytestring(argv[i]);
    filename->count++;

    ltedfapegproof__parsetree_adt_t parsetree_test = ltedfapegtest__jsonparsefile(filename);
    ltedfapegproof__parsetree_adt_t ast_test = ltedfapegtest__jsonbuildast(filename);
    jsondata_interface__result_type_adt_t result = jsondata_interface__ejson_parsetree_to_json(ast_test);
    char *result_str = json_jsondata_interface__result_type_adt(result);
    printf("%s\n", result_str);
  }

  return 0;
}
