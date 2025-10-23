#include "iccMax2c_c.h"

int main(){
  double start = get_cpu_time();
  printf("\n iccMax2c Tests");
  iccMax2c__value_t test1 = (iccMax2c__value_t)iccMax2c__test1();
  iccMax2c__value_t test2 = (iccMax2c__value_t)iccMax2c__test2();
  iccMax2c__value_t test3 = (iccMax2c__value_t)iccMax2c__test3();
  iccMax2c__value_t test4 = (iccMax2c__value_t)iccMax2c__test4();
  iccMax2c__inout_t test5 = (iccMax2c__inout_t)iccMax2c__test5();    
  printf("\n test1: vmax = %"PRIu64", vmin = %"PRIu64"",
	 test1->vmax, test1->vmin);
  printf("\n test2: vmax = %"PRIu64", vmin = %"PRIu64"",
	 test2->vmax, test2->vmin);
  printf("\n test3: vmax = %"PRIu64", vmin = %"PRIu64"",
	 test3->vmax, test3->vmin);
  printf("\n test4: vmax = %"PRIu64", vmin = %"PRIu64"",
	 test4->vmax, test4->vmin);
  printf("\n test5: input = %"PRIu64", output = %"PRIu64"",
	 test5->input, test5->output);
  double end = get_cpu_time();
  printf("\n CPU Time = %f seconds\n", end - start);

  return 0;
}
