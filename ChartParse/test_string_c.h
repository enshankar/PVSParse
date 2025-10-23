//Code generated using pvs2ir
#ifndef _test_string_h 
#define _test_string_h

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

#include "real_defs_c.h"

#include "strings_c.h"

#include "exp2_c.h"

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

//cc -O3 -Wall -o test_string -I /Users/e21660/shankar/pvs.git/src/groundeval/ pvslib.c  test_string_c.c ordinals_c.c ordstruct_adt_c.c real_defs_c.c strings_c.c exp2_c.c modulo_arithmetic_c.c euclidean_division_c.c -lgmp 

extern strings__string_t test_string__string4(void);

extern strings__string_t test_string__string5(void);
#endif