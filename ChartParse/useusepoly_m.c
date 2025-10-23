#include "useusepoly_c.h"

int main(){
  double start = get_cpu_time();
  uint64_t result = useusepoly__test();
  printf("\n result = %llu \n", result);
  double end = get_cpu_time();
  printf("\n CPU Time = %f seconds\n", end - start);


  return 0;
}
