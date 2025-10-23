//Code generated using pvs2ir
#ifndef _lex2_h 
#define _lex2_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

//cc -O3 -Wall -o lex2 -I /Users/e21660/shankar/pvs.git/src/groundeval/ pvslib.c  lex2_c.c ordinals_c.c ordstruct_adt_c.c -lgmp 

extern ordstruct_adt__ordstruct_adt_t lex2__lex2(mpz_t ivar_1, mpz_t ivar_2);
#endif