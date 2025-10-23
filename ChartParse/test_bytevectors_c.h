//Code generated using pvs2ir
#ifndef _test_bytevectors_h 
#define _test_bytevectors_h

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

#include "finite_sequences_c.h"

#include "bytestrings_c.h"

#include "gen_strings_c.h"

#include "strings_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "byvconcat_c.h"

#include "bytevectors_c.h"

#include "hex_c.h"

//cc -O3 -Wall -o test_bytevectors -I /Users/e21660/shankar/pvs.git/src/groundeval/ /Users/e21660/shankar/pvs.git/src/groundeval/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/finite_sequences_c.c /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c test_bytevectors_c.c byvconcat_c.c bytevectors_c.c hex_c.c -lgmp 

struct test_bytevectors_funtype_0_s;
        typedef struct test_bytevectors_funtype_0_s * test_bytevectors_funtype_0_t;

struct test_bytevectors_funtype_0_ftbl_s {uint32_t (* fptr)(struct test_bytevectors_funtype_0_s *, mpz_ptr_t);
        uint32_t (* mptr)(struct test_bytevectors_funtype_0_s *, mpz_ptr_t);
        void (* rptr)(struct test_bytevectors_funtype_0_s *);
        struct test_bytevectors_funtype_0_s * (* cptr)(struct test_bytevectors_funtype_0_s *);};
typedef struct test_bytevectors_funtype_0_ftbl_s * test_bytevectors_funtype_0_ftbl_t;

struct test_bytevectors_funtype_0_hashentry_s {uint32_t keyhash; mpz_ptr_t key; uint32_t value;}; 
typedef struct test_bytevectors_funtype_0_hashentry_s test_bytevectors_funtype_0_hashentry_t;

struct test_bytevectors_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; test_bytevectors_funtype_0_hashentry_t * data;}; 
typedef struct test_bytevectors_funtype_0_htbl_s * test_bytevectors_funtype_0_htbl_t;

struct test_bytevectors_funtype_0_s {uint32_t count;
        test_bytevectors_funtype_0_ftbl_t ftbl;
        test_bytevectors_funtype_0_htbl_t htbl;};
typedef struct test_bytevectors_funtype_0_s * test_bytevectors_funtype_0_t;

extern void release_test_bytevectors_funtype_0(test_bytevectors_funtype_0_t x);

extern test_bytevectors_funtype_0_t copy_test_bytevectors_funtype_0(test_bytevectors_funtype_0_t x);

uint32_t lookup_test_bytevectors_funtype_0(test_bytevectors_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

test_bytevectors_funtype_0_t dupdate_test_bytevectors_funtype_0(test_bytevectors_funtype_0_t a, mpz_ptr_t i, uint32_t v);

extern test_bytevectors_funtype_0_t update_test_bytevectors_funtype_0(test_bytevectors_funtype_0_t a, mpz_ptr_t i, uint32_t v);

extern bool_t equal_test_bytevectors_funtype_0(test_bytevectors_funtype_0_t x, test_bytevectors_funtype_0_t y);



struct test_bytevectors_record_1_s {
        uint32_t count; 
        mpz_t length;
        test_bytevectors_funtype_0_t seq;};
typedef struct test_bytevectors_record_1_s * test_bytevectors_record_1_t;

extern test_bytevectors_record_1_t new_test_bytevectors_record_1(void);

extern void release_test_bytevectors_record_1(test_bytevectors_record_1_t x);

extern test_bytevectors_record_1_t copy_test_bytevectors_record_1(test_bytevectors_record_1_t x);

extern bool_t equal_test_bytevectors_record_1(test_bytevectors_record_1_t x, test_bytevectors_record_1_t y);
typedef struct actual_test_bytevectors_record_1_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_test_bytevectors_record_1_t;

void release_test_bytevectors_record_1_ptr(pointer_t x, type_actual_t test_bytevectors_record_1);
extern bool_t equal_test_bytevectors_record_1_ptr(pointer_t x, pointer_t y, actual_test_bytevectors_record_1_t T);

actual_test_bytevectors_record_1_t actual_test_bytevectors_record_1(void);

extern test_bytevectors_record_1_t update_test_bytevectors_record_1_length(test_bytevectors_record_1_t x, mpz_ptr_t v);

extern test_bytevectors_record_1_t update_test_bytevectors_record_1_seq(test_bytevectors_record_1_t x, test_bytevectors_funtype_0_t v);



struct test_bytevectors_funtype_2_s;
        typedef struct test_bytevectors_funtype_2_s * test_bytevectors_funtype_2_t;

struct test_bytevectors_funtype_2_ftbl_s {uint8_t (* fptr)(struct test_bytevectors_funtype_2_s *, mpz_ptr_t);
        uint8_t (* mptr)(struct test_bytevectors_funtype_2_s *, mpz_ptr_t);
        void (* rptr)(struct test_bytevectors_funtype_2_s *);
        struct test_bytevectors_funtype_2_s * (* cptr)(struct test_bytevectors_funtype_2_s *);};
typedef struct test_bytevectors_funtype_2_ftbl_s * test_bytevectors_funtype_2_ftbl_t;

struct test_bytevectors_funtype_2_hashentry_s {uint32_t keyhash; mpz_ptr_t key; uint8_t value;}; 
typedef struct test_bytevectors_funtype_2_hashentry_s test_bytevectors_funtype_2_hashentry_t;

struct test_bytevectors_funtype_2_htbl_s {uint32_t size; uint32_t num_entries; test_bytevectors_funtype_2_hashentry_t * data;}; 
typedef struct test_bytevectors_funtype_2_htbl_s * test_bytevectors_funtype_2_htbl_t;

struct test_bytevectors_funtype_2_s {uint32_t count;
        test_bytevectors_funtype_2_ftbl_t ftbl;
        test_bytevectors_funtype_2_htbl_t htbl;};
typedef struct test_bytevectors_funtype_2_s * test_bytevectors_funtype_2_t;

extern void release_test_bytevectors_funtype_2(test_bytevectors_funtype_2_t x);

extern test_bytevectors_funtype_2_t copy_test_bytevectors_funtype_2(test_bytevectors_funtype_2_t x);

uint32_t lookup_test_bytevectors_funtype_2(test_bytevectors_funtype_2_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

test_bytevectors_funtype_2_t dupdate_test_bytevectors_funtype_2(test_bytevectors_funtype_2_t a, mpz_ptr_t i, uint8_t v);

extern test_bytevectors_funtype_2_t update_test_bytevectors_funtype_2(test_bytevectors_funtype_2_t a, mpz_ptr_t i, uint8_t v);

extern bool_t equal_test_bytevectors_funtype_2(test_bytevectors_funtype_2_t x, test_bytevectors_funtype_2_t y);



struct test_bytevectors_array_3_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct test_bytevectors_array_3_s * test_bytevectors_array_3_t;

extern test_bytevectors_array_3_t new_test_bytevectors_array_3(uint32_t size);

extern void release_test_bytevectors_array_3(test_bytevectors_array_3_t x);

extern test_bytevectors_array_3_t copy_test_bytevectors_array_3(test_bytevectors_array_3_t x);

extern bool_t equal_test_bytevectors_array_3(test_bytevectors_array_3_t x, test_bytevectors_array_3_t y);
typedef struct actual_test_bytevectors_array_3_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_test_bytevectors_array_3_t;

void release_test_bytevectors_array_3_ptr(pointer_t x, type_actual_t test_bytevectors_array_3);
extern bool_t equal_test_bytevectors_array_3_ptr(pointer_t x, pointer_t y, type_actual_t T);

actual_test_bytevectors_array_3_t actual_test_bytevectors_array_3(void);

extern test_bytevectors_array_3_t update_test_bytevectors_array_3(test_bytevectors_array_3_t x, uint32_t i, uint8_t v);

extern test_bytevectors_array_3_t upgrade_test_bytevectors_array_3(test_bytevectors_array_3_t x, uint32_t i, uint8_t v);




struct test_bytevectors_closure_4_s;
        typedef struct test_bytevectors_closure_4_s * test_bytevectors_closure_4_t;

struct test_bytevectors_closure_4_s {uint32_t count;
         test_bytevectors_funtype_2_ftbl_t ftbl;
         test_bytevectors_funtype_2_htbl_t htbl;
        test_bytevectors_funtype_2_t fvar_1;};

uint8_t f_test_bytevectors_closure_4(struct test_bytevectors_closure_4_s * closure, mpz_ptr_t bvar);

uint8_t m_test_bytevectors_closure_4(struct test_bytevectors_closure_4_s * closure, mpz_ptr_t bvar);

extern uint8_t h_test_bytevectors_closure_4(mpz_ptr_t ivar_55, test_bytevectors_funtype_2_t ivar_52);

extern test_bytevectors_closure_4_t new_test_bytevectors_closure_4(void);

extern void release_test_bytevectors_closure_4(test_bytevectors_funtype_2_t closure);

extern test_bytevectors_closure_4_t copy_test_bytevectors_closure_4(test_bytevectors_closure_4_t x);



extern bytestrings__bytestring_t test_bytevectors__test1(uint32_t ivar_1);

extern bytestrings__bytestring_t test_bytevectors__test2(void);
#endif