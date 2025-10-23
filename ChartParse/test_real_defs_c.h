//Code generated using pvs2ir
#ifndef _test_real_defs_h 
#define _test_real_defs_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <fcntl.h>

#include <math.h>

#include <sys/mman.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <gmp.h>

#include "pvslib.h"

#include "real_defs_c.h"

#include "finite_sequences_character_c.h"

//cc -O3 -Wall -o test_real_defs -I /Users/e21660/shankar/pvs8/PVS//include /Users/e21660/shankar/pvs8/PVS//lib/pvslib.c  -I /Users/e21660/shankar/pvs8/PVS/lib -lgmp 

extern bool_t test_real_defs__test_sgn1(void);

extern bool_t test_real_defs__test_sgn2(void);

extern bool_t test_real_defs__test_sgn3(void);

extern bool_t test_real_defs__test_abs1(void);

extern bool_t test_real_defs__test_abs2(void);

extern bool_t test_real_defs__test_abs3(void);

extern bool_t test_real_defs__test_max1(void);

extern bool_t test_real_defs__test_max2(void);

extern bool_t test_real_defs__test_max3(void);

extern bool_t test_real_defs__test_min1(void);

extern bool_t test_real_defs__test_min2(void);

extern bool_t test_real_defs__test_min3(void);
#endif