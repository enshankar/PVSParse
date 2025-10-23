#include "KDF_c.h"

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

uint32_t print_hexstring(bytestrings__bytestring_t s){
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
  printf("\n");
  for (uint32_t i = 0; i < s->length; i++){
    printf("%c", s->seq->elems[i]);
  };

  return 1;
};


int main(){
  double start = get_cpu_time();
  printf("\n HMAC__test1()");
  print_bytestring((bytestrings__bytestring_t)HMAC__test1());
  printf("\n test_KDF1");
  print_hexstring(KDF__test_KDF1());
  printf("\n test_KDF2");  
  print_hexstring(KDF__test_KDF2());
  printf("\n test_KDF3");  
  print_hexstring(KDF__test_KDF3());
  printf("\n test_KAUSF");  
  print_hexstring(KDF__test_KAUSF());
  printf("\n test_KSEAF");  
  print_hexstring(KDF__test_KSEAF());
  printf("\n test_KAMF");  
  print_hexstring(KDF__test_KAMF());
  double end = get_cpu_time();
  printf("\n CPU Time = %f seconds\n", end - start);

  return 0;
}
