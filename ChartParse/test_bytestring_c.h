//Code generated using pvs2ir
#ifndef _test_bytestring_h 
#define _test_bytestring_h

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

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "finite_sequences_c.h"

#include "real_defs_c.h"

//cc -O3 -Wall -o test_bytestring -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/finite_sequences_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c test_bytestring_c.c -lgmp 

struct test_bytestring__arr_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint32_t elems[]; };
typedef struct test_bytestring__arr_s * test_bytestring__arr_t;

extern test_bytestring__arr_t new_test_bytestring__arr(uint32_t size);

extern void release_test_bytestring__arr(test_bytestring__arr_t x);

extern test_bytestring__arr_t copy_test_bytestring__arr(test_bytestring__arr_t x);

extern bool_t equal_test_bytestring__arr(test_bytestring__arr_t x, test_bytestring__arr_t y);
extern char * json_test_bytestring__arr(test_bytestring__arr_t x);

typedef struct actual_test_bytestring__arr_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_test_bytestring__arr_t;
void release_test_bytestring__arr_ptr(pointer_t x, type_actual_t test_bytestring__arr);

extern bool_t equal_test_bytestring__arr_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_test_bytestring__arr_ptr(pointer_t x, type_actual_t T);

actual_test_bytestring__arr_t actual_test_bytestring__arr(void);

extern test_bytestring__arr_t update_test_bytestring__arr(test_bytestring__arr_t x, uint32_t i, uint32_t v);

extern test_bytestring__arr_t upgrade_test_bytestring__arr(test_bytestring__arr_t x, uint32_t i, uint32_t v);



extern mpz_ptr_t test_bytestring__zero(void);

extern mpq_ptr_t test_bytestring__half(void);

extern test_bytestring__arr_t test_bytestring__foo(test_bytestring__arr_t ivar_2);

extern bytestrings__bytestring_t test_bytestring__string1(void);

extern bytestrings__bytestring_t test_bytestring__string2(void);

extern bytestrings__bytestring_t test_bytestring__string3(void);

extern bytestrings__bytestring_t test_bytestring__string4(void);

extern bytestrings__bytestring_t test_bytestring__string12(void);

extern bytestrings__bytestring_t test_bytestring__string23(void);

extern bytestrings__bytestring_t test_bytestring__string123(void);

extern bytestrings__bytestring_t test_bytestring__string1223(void);

extern bytestrings__bytestring_t test_bytestring__string44(void);

extern bytestrings__bytestring_t test_bytestring__string12231(void);

extern bytestrings__bytestring_t test_bytestring__string6(void);
#endif