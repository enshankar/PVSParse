//Code generated using pvs2ir
#ifndef _poly_h 
#define _poly_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

//cc -O3 -Wall -o poly -I /Users/e21660 1 2 3/shankar/pvs.git/src/groundeval/ pvslib.c  poly_c.c -lgmp 

typedef pointer_t poly__T_t;

extern poly__T_t poly__idd(type_actual_t poly__T, poly__T_t ivar_1);
#endif