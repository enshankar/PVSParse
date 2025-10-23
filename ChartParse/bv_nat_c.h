//Code generated using pvs2ir
#ifndef _bv_nat_h 
#define _bv_nat_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

#include "bv_c.h"

#include "bit_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

//cc -O3 -Wall -o bv_nat -I /Users/e21660/shankar/pvs.git/src/groundeval/ pvslib.c  bv_nat_c.c bv_c.c bit_c.c integertypes_c.c exp2_c.c modulo_arithmetic_c.c euclidean_division_c.c real_defs_c.c -lgmp 

extern mpz_ptr_t bv_nat__bv2nat_rec(mpz_t N, mpz_t ivar_1, bv__bvec_t ivar_2);

extern mpz_ptr_t bv_nat__bv2nat(mpz_t N, bv__bvec_t ivar_1);

extern bv__bvec_t bv_nat__nat2bv(mpz_t N, mpz_t ivar_1);
#endif