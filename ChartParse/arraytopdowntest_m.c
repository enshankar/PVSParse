#include "arraytopdowntest_c.h"

int main(){
  double start = get_cpu_time();
  arraytopdown__ent_adt_t test0 = arraytopdowntest__test0();
  arraytopdown__ent_adt_t test1 = arraytopdowntest__test1();
  arraytopdown__ent_adt_t test11 = arraytopdowntest__test11();
  arraytopdown__ent_adt_t test2 = arraytopdowntest__test2();  
  
  printf("\ntest0 = %d", r_arraytopdown__goodp(test0));
  printf("\ntest1 = %d", r_arraytopdown__goodp(test1));
  printf("\ntest11 = %d", r_arraytopdown__goodp(test11));
  printf("\ntest2 = %d", r_arraytopdown__goodp(test2));
  double end = get_cpu_time();
  printf("\n CPU Time = %f seconds\n", end - start);
  
  return 0;
}
