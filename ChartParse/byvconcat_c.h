//Code generated using pvs2ir
#ifndef _byvconcat_h 
#define _byvconcat_h

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

#include "bytestrings_c.h"

#include "gen_strings_c.h"

#include "strings_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "bytevectors_c.h"

//cc -O3 -Wall -o byvconcat -I /Users/e21660/shankar/pvs.git/src/groundeval/ /Users/e21660/shankar/pvs.git/src/groundeval/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c byvconcat_c.c bytevectors_c.c -lgmp 

struct byvconcat_array_0_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct byvconcat_array_0_s * byvconcat_array_0_t;

extern byvconcat_array_0_t new_byvconcat_array_0(uint32_t size);

extern void release_byvconcat_array_0(byvconcat_array_0_t x, uint32_t m, uint32_t n);

extern byvconcat_array_0_t copy_byvconcat_array_0(byvconcat_array_0_t x);

extern bool_t equal_byvconcat_array_0(byvconcat_array_0_t x, byvconcat_array_0_t y, uint32_t m, uint32_t n);
typedef struct actual_byvconcat_array_0_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; uint32_t m; uint32_t n;} * actual_byvconcat_array_0_t;

void release_byvconcat_array_0_ptr(pointer_t x, type_actual_t byvconcat_array_0);
extern bool_t equal_byvconcat_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T);

actual_byvconcat_array_0_t actual_byvconcat_array_0(uint32_t m, uint32_t n);

extern byvconcat_array_0_t update_byvconcat_array_0(byvconcat_array_0_t x, uint32_t i, uint8_t v, uint32_t m, uint32_t n);

extern byvconcat_array_0_t upgrade_byvconcat_array_0(byvconcat_array_0_t x, uint32_t i, uint8_t v, uint32_t m, uint32_t n);



extern byvconcat_array_0_t byvconcat__doubleplus(uint32_t m, uint32_t n, byvconcat_array_0_t ivar_5, byvconcat_array_0_t ivar_6);
#endif