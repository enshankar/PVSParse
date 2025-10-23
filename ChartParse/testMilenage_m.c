#include "testMilenage_c.h"

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
  printf("\n testMilenage__test0AllFun()\n");
  print_bs((bytestrings__bytestring_t)testMilenage__test0allfun());
  printf("\n test1tempIN()\n");
  print_bs((bytestrings__bytestring_t)testMilenage__testIN());
  printf("\n test1tempIN1OUT1()\n");
  print_bs((bytestrings__bytestring_t)testMilenage__test1tempIN1OUT1());
  printf("\n testMilenage__test1allfunc()\n");
  print_bs((bytestrings__bytestring_t)testMilenage__test1allfunc());
  double end = get_cpu_time();
  printf("\n CPU Time = %f seconds\n", end - start);

  return 0;
}
