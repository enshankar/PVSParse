#include "hsummation_c.h"

int main(){
  double start = get_cpu_time();
  mpz_t x;
  mpz_init(x);
  mpz_set_ui(x, 100);
  gmp_printf("\n sum_id(100) = %Zd", hsummation_sum_id(x));
  gmp_printf("\n sum_square(100) = %Zd", hsummation_sum_square(x));
  gmp_printf("\n sum_cube(100) = %Zd", hsummation_sum_cube(x));
  gmp_printf("\n sum_quart(100) = %Zd", hsummation_sum_quart(x));	     
  mpz_clear(x);
  double end = get_cpu_time();
  printf("\n CPU Time = %f seconds\n", end - start);


  return 0;
}
