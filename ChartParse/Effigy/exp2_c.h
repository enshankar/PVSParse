//Code generated using pvs2ir
#ifndef _exp2_h 
#define _exp2_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

#include "euclidean_division_c.h"

//cc -O3 -Wall -o exp2 -I /Users/e21660/shankar/pvs.git/src/groundeval/ /Users/e21660/shankar/pvs.git/src/groundeval/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c exp2_c.c -lgmp 

extern mpz_ptr_t exp2__exp2(mpz_ptr_t ivar_1);

extern mpz_ptr_t exp2__log2(mpz_ptr_t ivar_1);
#endif