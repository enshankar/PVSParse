#include "rotate_c.h"

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

  printf("\n test_u8rightrotate_0 = %"PRIu8"\n", test_u8rightrotate_0);
  printf("\n test_u8rightrotate_1 = %"PRIu8"\n", test_u8rightrotate_1);
  printf("\n test_u8rightrotate_2 = %"PRIu8"\n", test_u8rightrotate_2);
  printf("\n test_u8rightrotate_3 = %"PRIu8"\n", test_u8rightrotate_3);
  printf("\n test_u8rightrotate_4 = %"PRIu8"\n", test_u8rightrotate_4);
  printf("\n test_u8rightrotate_5 = %"PRIu8"\n", test_u8rightrotate_5);

  printf("\n test_u16rightrotate_0 = %"PRIu16"\n", test_u16rightrotate_0);
  printf("\n test_u16rightrotate_1 = %"PRIu16"\n", test_u16rightrotate_1);
  printf("\n test_u16rightrotate_2 = %"PRIu16"\n", test_u16rightrotate_2);
  printf("\n test_u16rightrotate_3 = %"PRIu16"\n", test_u16rightrotate_3);
  printf("\n test_u16rightrotate_4 = %"PRIu16"\n", test_u16rightrotate_4);
  printf("\n test_u16rightrotate_5 = %"PRIu16"\n", test_u16rightrotate_5);


  printf("\n test_u32rightrotate_0 = %"PRIu32"\n", test_u32rightrotate_0);
  printf("\n test_u32rightrotate_1 = %"PRIu32"\n", test_u32rightrotate_1);
  printf("\n test_u32rightrotate_2 = %"PRIu32"\n", test_u32rightrotate_2);
  printf("\n test_u32rightrotate_3 = %"PRIu32"\n", test_u32rightrotate_3);
  printf("\n test_u32rightrotate_4 = %"PRIu32"\n", test_u32rightrotate_4);
  printf("\n test_u32rightrotate_5 = %"PRIu32"\n", test_u32rightrotate_5);

  printf("\n test_u64rightrotate_0 = %"PRIu64"\n", test_u64rightrotate_0);
  printf("\n test_u64rightrotate_1 = %"PRIu64"\n", test_u64rightrotate_1);
  printf("\n test_u64rightrotate_2 = %"PRIu64"\n", test_u64rightrotate_2);
  printf("\n test_u64rightrotate_3 = %"PRIu64"\n", test_u64rightrotate_3);
  printf("\n test_u64rightrotate_4 = %"PRIu64"\n", test_u64rightrotate_4);
  printf("\n test_u64rightrotate_5 = %"PRIu64"\n", test_u64rightrotate_5);
  
  printf("\n test_u8tobytestring_0:\n");
  print_bs(test_u8tobytestring_0);
  printf("\n test_u8tobytestring_1:\n");
  print_bs(test_u8tobytestring_1);
  printf("\n test_u8tobytestring_2:\n");
  print_bs(test_u8tobytestring_2);
  printf("\n test_u8tobytestring_3:\n");
  print_bs(test_u8tobytestring_3);
  
  printf("\n test_u16tobytestring_0:\n");
  print_bs(test_u16tobytestring_0);
  printf("\n test_u16tobytestring_1:\n");
  print_bs(test_u16tobytestring_1);
  printf("\n test_u16tobytestring_2:\n");
  print_bs(test_u16tobytestring_2);
  printf("\n test_u16tobytestring_3:\n");
  print_bs(test_u16tobytestring_3);


  printf("\n test_u32tobytestring_0:\n");
  print_bs(test_u32tobytestring_0);
  printf("\n test_u32tobytestring_1:\n");
  print_bs(test_u32tobytestring_1);
  printf("\n test_u32tobytestring_2:\n");
  print_bs(test_u32tobytestring_2);
  printf("\n test_u32tobytestring_3:\n");
  print_bs(test_u32tobytestring_3);


  printf("\n test_u64tobytestring_0:\n");
  print_bs(test_u64tobytestring_0);
  printf("\n test_u64tobytestring_1:\n");
  print_bs(test_u64tobytestring_1);
  printf("\n test_u64tobytestring_2:\n");
  print_bs(test_u64tobytestring_2);
  printf("\n test_u64tobytestring_3:\n");
  print_bs(test_u64tobytestring_3);

  
}
