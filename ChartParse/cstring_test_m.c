#include "cstring_test_c.h"

int main()
{
  cstring_cstring_t cstra = cstring_test_A(); 
  cstring_cstring_t cstrb = cstring_test_B(); 
  printf("\n string A %s has length %u", cstra->strval, cstring_length(cstra));
  printf("\n string B %s has length %u", cstrb->strval, cstring_length(cstrb));
  printf("\n char code is %u", cstring_test_test_code());
  cstring_cstring_t empty = cstring_test_test_empty();
  printf("\nempty = %s", empty->strval);
  printf("\nlength = %u", cstring_test_test_length());
  cstring_cstring_t cstrc = cstring_test_test_concat();
  printf("\n cstrc = %s", cstrc->strval);
  printf("\n strdiff = %u", cstring_test_test_strdiff());
  printf("\n strdiff = %u", cstring_test_test_strcmp());
  printf("\n strdiff = %u", cstring_test_test_substr());
    return 0;
}
