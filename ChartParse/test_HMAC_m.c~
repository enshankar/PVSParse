#include "test_SHA256_c.h"

uint32_t print_bytestring(bytestrings__bytestring_t s){
  printf("\nhextest0: %#X", 0);
  printf("\nhextest0: %#X", 10);
  printf("\nhextest0: %#X", 20);
  printf("\nhextest0: %#X", 40);
  printf("\nhextest0: %#X", 80);
  printf("\nhextest0: %#X", 160);
  printf("\nhextest0: %#X", 240);  
  printf("\n");
  printf("\ns->length = %"PRIu32"\n", s->length);  
  for (uint32_t i = 0; i < s->length; i++){
    printf("%"PRIu8"", s->seq->elems[i]);
  };
  if (s->length > 0){
    printf("\n%#02X", s->seq->elems[0]);
  for (uint32_t i = 1; i < s->length; i++){
    printf("%02X", s->seq->elems[i]);
  };
  };

  return 1;
};

int main(){
  double start = get_cpu_time();
  printf("\n test_SHA256__test1()");
  print_bytestring((bytestrings__bytestring_t)test_SHA256__test1());
  printf("\n test_SHA256__test2()");
  print_bytestring((bytestrings__bytestring_t)test_SHA256__test2());
  printf("\n test_SHA256__test3()");
  print_bytestring((bytestrings__bytestring_t)test_SHA256__test3());
  printf("\n test_SHA256__test4()");
  print_bytestring((bytestrings__bytestring_t)test_SHA256__test4());
  printf("\n test_SHA256__test5()");
  print_bytestring((bytestrings__bytestring_t)test_SHA256__test5());
  printf("\n test_SHA256__test6()");
  print_bytestring((bytestrings__bytestring_t)test_SHA256__test6());
  printf("\n test_SHA256__test7()");
  print_bytestring((bytestrings__bytestring_t)test_SHA256__test7());
  printf("\n test_SHA256__test8()");
  print_bytestring((bytestrings__bytestring_t)test_SHA256__test8());
  double end = get_cpu_time();
  printf("\n CPU Time = %f seconds\n", end - start);

  return 0;
}
