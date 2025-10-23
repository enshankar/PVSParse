//Code generated using pvs2ir
#ifndef _test_HMAC_h 
#define _test_HMAC_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

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

#include "HMAC_c.h"

#include "SHA256_c.h"

#include "rotate_c.h"

//cc -O3 -Wall -o test_HMAC -I /Users/e21660/shankar/pvs.git/src/groundeval/ /Users/e21660/shankar/pvs.git/src/groundeval/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/finite_sequences_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c test_HMAC_c.c HMAC_c.c SHA256_c.c rotate_c.c -lgmp 

struct test_HMAC_funtype_0_s;
        typedef struct test_HMAC_funtype_0_s * test_HMAC_funtype_0_t;

struct test_HMAC_funtype_0_ftbl_s {uint32_t (* fptr)(struct test_HMAC_funtype_0_s *, mpz_ptr_t);
        uint32_t (* mptr)(struct test_HMAC_funtype_0_s *, mpz_ptr_t);
        void (* rptr)(struct test_HMAC_funtype_0_s *);
        struct test_HMAC_funtype_0_s * (* cptr)(struct test_HMAC_funtype_0_s *);};
typedef struct test_HMAC_funtype_0_ftbl_s * test_HMAC_funtype_0_ftbl_t;

struct test_HMAC_funtype_0_hashentry_s {uint32_t keyhash; mpz_ptr_t key; uint32_t value;}; 
typedef struct test_HMAC_funtype_0_hashentry_s test_HMAC_funtype_0_hashentry_t;

struct test_HMAC_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; test_HMAC_funtype_0_hashentry_t * data;}; 
typedef struct test_HMAC_funtype_0_htbl_s * test_HMAC_funtype_0_htbl_t;

struct test_HMAC_funtype_0_s {uint32_t count;
        test_HMAC_funtype_0_ftbl_t ftbl;
        test_HMAC_funtype_0_htbl_t htbl;};
typedef struct test_HMAC_funtype_0_s * test_HMAC_funtype_0_t;

extern void release_test_HMAC_funtype_0(test_HMAC_funtype_0_t x);

extern test_HMAC_funtype_0_t copy_test_HMAC_funtype_0(test_HMAC_funtype_0_t x);

uint32_t lookup_test_HMAC_funtype_0(test_HMAC_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

test_HMAC_funtype_0_t dupdate_test_HMAC_funtype_0(test_HMAC_funtype_0_t a, mpz_ptr_t i, uint32_t v);

extern test_HMAC_funtype_0_t update_test_HMAC_funtype_0(test_HMAC_funtype_0_t a, mpz_ptr_t i, uint32_t v);

extern bool_t equal_test_HMAC_funtype_0(test_HMAC_funtype_0_t x, test_HMAC_funtype_0_t y);



struct test_HMAC_record_1_s {
        uint32_t count; 
        mpz_t length;
        test_HMAC_funtype_0_t seq;};
typedef struct test_HMAC_record_1_s * test_HMAC_record_1_t;

extern test_HMAC_record_1_t new_test_HMAC_record_1(void);

extern void release_test_HMAC_record_1(test_HMAC_record_1_t x);

extern test_HMAC_record_1_t copy_test_HMAC_record_1(test_HMAC_record_1_t x);

extern bool_t equal_test_HMAC_record_1(test_HMAC_record_1_t x, test_HMAC_record_1_t y);
typedef struct actual_test_HMAC_record_1_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_test_HMAC_record_1_t;

void release_test_HMAC_record_1_ptr(pointer_t x, type_actual_t test_HMAC_record_1);
extern bool_t equal_test_HMAC_record_1_ptr(pointer_t x, pointer_t y, actual_test_HMAC_record_1_t T);

actual_test_HMAC_record_1_t actual_test_HMAC_record_1(void);

extern test_HMAC_record_1_t update_test_HMAC_record_1_length(test_HMAC_record_1_t x, mpz_ptr_t v);

extern test_HMAC_record_1_t update_test_HMAC_record_1_seq(test_HMAC_record_1_t x, test_HMAC_funtype_0_t v);



extern bytestrings__bytestring_t test_HMAC__hexhmac16(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2);

extern bytestrings__bytestring_t test_HMAC__test16_0(void);

extern bytestrings__bytestring_t test_HMAC__test16_1(void);

extern bytestrings__bytestring_t test_HMAC__test16_2(void);

extern bytestrings__bytestring_t test_HMAC__test16_3(void);

extern bytestrings__bytestring_t test_HMAC__test16_4(void);

extern bytestrings__bytestring_t test_HMAC__test16_5(void);

extern bytestrings__bytestring_t test_HMAC__test16_6(void);

extern bytestrings__bytestring_t test_HMAC__test16_7(void);

extern bytestrings__bytestring_t test_HMAC__hexhmac32(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2);

extern bytestrings__bytestring_t test_HMAC__test32_0(void);

extern bytestrings__bytestring_t test_HMAC__test32_1(void);

extern bytestrings__bytestring_t test_HMAC__test32_2(void);

extern bytestrings__bytestring_t test_HMAC__test32_3(void);

extern bytestrings__bytestring_t test_HMAC__test32_4(void);
#endif