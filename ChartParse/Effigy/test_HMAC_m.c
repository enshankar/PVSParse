#include "test_HMAC_c.h"

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
  printf("\n test_HMAC__test16_0()");
  print_bytestring((bytestrings__bytestring_t)test_HMAC__test16_0());
  printf("\n test_HMAC__test16_1()");
  print_bytestring((bytestrings__bytestring_t)test_HMAC__test16_2());
  printf("\n test_HMAC__test16_3()");
  print_bytestring((bytestrings__bytestring_t)test_HMAC__test16_3());
  printf("\n test_HMAC__test16_4()");
  print_bytestring((bytestrings__bytestring_t)test_HMAC__test16_4());
  printf("\n test_HMAC__test16_5()");
  print_bytestring((bytestrings__bytestring_t)test_HMAC__test16_5());
  printf("\n test_HMAC__test16_6()");
  print_bytestring((bytestrings__bytestring_t)test_HMAC__test16_6());
  printf("\n test_HMAC__test16_7()");
  print_bytestring((bytestrings__bytestring_t)test_HMAC__test16_7());
  printf("\n test_HMAC__test32_0()");
  print_bytestring((bytestrings__bytestring_t)test_HMAC__test32_0());
  printf("\n test_HMAC__test32_1()");
  print_bytestring((bytestrings__bytestring_t)test_HMAC__test32_2());
  printf("\n test_HMAC__test32_3()");
  print_bytestring((bytestrings__bytestring_t)test_HMAC__test32_3());
  printf("\n test_HMAC__test32_4()");
  print_bytestring((bytestrings__bytestring_t)test_HMAC__test32_4());

  double end = get_cpu_time();
  printf("\n CPU Time = %f seconds\n", end - start);

  return 0;
}
