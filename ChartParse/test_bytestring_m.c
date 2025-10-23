#include "test_bytestring_c.h"

void print_bs(bytestrings__bytestring_t x){
  printf("\nx->count = %"PRIu32"\n", x->count);
  printf("\nx->length = %"PRIu32"\n", x->length);
  printf("\n x->seq = ");
  for (uint32_t i = 0; i < x->length; i++){
    printf("%c", (char)x->seq->elems[i]);
  };
  printf("\n");
}

int main(){
  printf("\n string1: \n");
  print_bs(test_bytestring__string1());
  printf("\n string2: \n");  
  print_bs(test_bytestring__string2());
  printf("\n string3: \n");
  print_bs(test_bytestring__string3());
  printf("\n string4: \n");
  print_bs(test_bytestring__string4());
  printf("\n string12: \n");  
  print_bs(test_bytestring__string12());
  printf("\n string23: \n");  
  print_bs(test_bytestring__string23());
  printf("\n string123: \n");  
  print_bs(test_bytestring__string123());
  printf("\n string44: \n");  
  print_bs(test_bytestring__string44());
  printf("\n string12231: \n");  
  print_bs(test_bytestring__string12231());
  //
  bytestrings__bytestring_t bstr = test_bytestring__string1();
  char * str = json_bytestrings__bytestring(bstr);
  printf("\n string1: %s", str);
  printf("\n string2: \n");  
  printf("\n string2: %s", json_bytestrings__bytestring(test_bytestring__string2()));
  printf("\n string3: \n");
  printf("\n string3: %s", json_bytestrings__bytestring(test_bytestring__string3()));
  printf("\n string4: \n");
  printf("\n string4: %s", json_bytestrings__bytestring(test_bytestring__string4()));
  printf("\n string12: \n");  
  printf("\n string12: %s", json_bytestrings__bytestring(test_bytestring__string12()));
  printf("\n string23: \n");  
  printf("\n string23: %s", json_bytestrings__bytestring(test_bytestring__string23()));
  printf("\n string123: \n");  
  printf("\n string123: %s", json_bytestrings__bytestring(test_bytestring__string123()));
  printf("\n string44: \n");  
  printf("\n string44: %s", json_bytestrings__bytestring(test_bytestring__string44()));
  printf("\n string12231: \n");  
  printf("\n string12231: %s", json_bytestrings__bytestring(test_bytestring__string12231()));
  return 0;
}
