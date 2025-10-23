//Code generated using pvs2ir
#ifndef _real_defs_h 
#define _real_defs_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

//cc -O3 -Wall -o real_defs -I /Users/e21660/shankar/pvs.git/src/groundeval/ /Users/e21660/shankar/pvs.git/src/groundeval/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib real_defs_c.c -lgmp 

extern mpz_ptr_t real_defs__sgn(mpq_ptr_t ivar_1);

extern mpq_ptr_t real_defs__abs(mpq_ptr_t ivar_1);

extern mpq_ptr_t real_defs__max(mpq_ptr_t ivar_1, mpq_ptr_t ivar_2);

extern mpq_ptr_t real_defs__min(mpq_ptr_t ivar_1, mpq_ptr_t ivar_2);
#endif