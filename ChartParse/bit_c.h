//Code generated using pvs2ir
#ifndef _bit_h 
#define _bit_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

//cc -O3 -Wall -o bit -I /Users/e21660/shankar/pvs.git/src/groundeval/ pvslib.c  bit_c.c integertypes_c.c exp2_c.c modulo_arithmetic_c.c euclidean_division_c.c real_defs_c.c -lgmp 

typedef bool_t bit__bit_t;



typedef uint8_t bit__nbit_t;



extern bool_t bit__b0(uint8_t ivar_1);

extern bool_t bit__b1(uint8_t ivar_1);

extern uint8_t bit__b2n(bool_t ivar_1);

extern bool_t bit__n2b(uint8_t ivar_1);
#endif