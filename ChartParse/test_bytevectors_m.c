#include "test_bytevectors_c.h"

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
  double start = get_cpu_time();
  printf("\n test1()\n");
  print_bs((bytestrings__bytestring_t)test_bytevectors__test1(8));
  printf("\n test2()\n");
  print_bs((bytestrings__bytestring_t)test_bytevectors__test2());
  double end = get_cpu_time();
  printf("\n CPU Time = %f seconds\n", end - start);

  return 0;
}
