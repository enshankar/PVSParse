//Code generated using pvs2ir
#ifndef _testMilenage_h 
#define _testMilenage_h

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

#include "charstrings_c.h"

#include "bytestrings_c.h"

#include "gen_strings_c.h"

#include "strings_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "Milenage_c.h"

#include "rotate_c.h"

#include "byvconcat_c.h"

#include "Rijndael_c.h"

#include "bytevectors_c.h"

#include "hex_c.h"

//cc -O3 -Wall -o testMilenage -I /Users/e21660/shankar/pvs.git/src/groundeval/ /Users/e21660/shankar/pvs.git/src/groundeval/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/finite_sequences_c.c /Users/e21660/shankar/pvs.git/lib/charstrings_c.c /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c testMilenage_c.c Milenage_c.c rotate_c.c byvconcat_c.c Rijndael_c.c bytevectors_c.c hex_c.c -lgmp 

struct testMilenage_funtype_0_s;
        typedef struct testMilenage_funtype_0_s * testMilenage_funtype_0_t;

struct testMilenage_funtype_0_ftbl_s {uint32_t (* fptr)(struct testMilenage_funtype_0_s *, mpz_ptr_t);
        uint32_t (* mptr)(struct testMilenage_funtype_0_s *, mpz_ptr_t);
        void (* rptr)(struct testMilenage_funtype_0_s *);
        struct testMilenage_funtype_0_s * (* cptr)(struct testMilenage_funtype_0_s *);};
typedef struct testMilenage_funtype_0_ftbl_s * testMilenage_funtype_0_ftbl_t;

struct testMilenage_funtype_0_hashentry_s {uint32_t keyhash; mpz_ptr_t key; uint32_t value;}; 
typedef struct testMilenage_funtype_0_hashentry_s testMilenage_funtype_0_hashentry_t;

struct testMilenage_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; testMilenage_funtype_0_hashentry_t * data;}; 
typedef struct testMilenage_funtype_0_htbl_s * testMilenage_funtype_0_htbl_t;

struct testMilenage_funtype_0_s {uint32_t count;
        testMilenage_funtype_0_ftbl_t ftbl;
        testMilenage_funtype_0_htbl_t htbl;};
typedef struct testMilenage_funtype_0_s * testMilenage_funtype_0_t;

extern void release_testMilenage_funtype_0(testMilenage_funtype_0_t x);

extern testMilenage_funtype_0_t copy_testMilenage_funtype_0(testMilenage_funtype_0_t x);

uint32_t lookup_testMilenage_funtype_0(testMilenage_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

testMilenage_funtype_0_t dupdate_testMilenage_funtype_0(testMilenage_funtype_0_t a, mpz_ptr_t i, uint32_t v);

extern testMilenage_funtype_0_t update_testMilenage_funtype_0(testMilenage_funtype_0_t a, mpz_ptr_t i, uint32_t v);

extern bool_t equal_testMilenage_funtype_0(testMilenage_funtype_0_t x, testMilenage_funtype_0_t y);



struct testMilenage_record_1_s {
        uint32_t count; 
        mpz_t length;
        testMilenage_funtype_0_t seq;};
typedef struct testMilenage_record_1_s * testMilenage_record_1_t;

extern testMilenage_record_1_t new_testMilenage_record_1(void);

extern void release_testMilenage_record_1(testMilenage_record_1_t x);

extern testMilenage_record_1_t copy_testMilenage_record_1(testMilenage_record_1_t x);

extern bool_t equal_testMilenage_record_1(testMilenage_record_1_t x, testMilenage_record_1_t y);
typedef struct actual_testMilenage_record_1_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_testMilenage_record_1_t;

void release_testMilenage_record_1_ptr(pointer_t x, type_actual_t testMilenage_record_1);
extern bool_t equal_testMilenage_record_1_ptr(pointer_t x, pointer_t y, actual_testMilenage_record_1_t T);

actual_testMilenage_record_1_t actual_testMilenage_record_1(void);

extern testMilenage_record_1_t update_testMilenage_record_1_length(testMilenage_record_1_t x, mpz_ptr_t v);

extern testMilenage_record_1_t update_testMilenage_record_1_seq(testMilenage_record_1_t x, testMilenage_funtype_0_t v);



struct testMilenage_array_2_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint32_t elems[]; };
typedef struct testMilenage_array_2_s * testMilenage_array_2_t;

extern testMilenage_array_2_t new_testMilenage_array_2(uint32_t size);

extern void release_testMilenage_array_2(testMilenage_array_2_t x);

extern testMilenage_array_2_t copy_testMilenage_array_2(testMilenage_array_2_t x);

extern bool_t equal_testMilenage_array_2(testMilenage_array_2_t x, testMilenage_array_2_t y);
typedef struct actual_testMilenage_array_2_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_testMilenage_array_2_t;

void release_testMilenage_array_2_ptr(pointer_t x, type_actual_t testMilenage_array_2);
extern bool_t equal_testMilenage_array_2_ptr(pointer_t x, pointer_t y, type_actual_t T);

actual_testMilenage_array_2_t actual_testMilenage_array_2(void);

extern testMilenage_array_2_t update_testMilenage_array_2(testMilenage_array_2_t x, uint32_t i, uint32_t v);

extern testMilenage_array_2_t upgrade_testMilenage_array_2(testMilenage_array_2_t x, uint32_t i, uint32_t v);



struct testMilenage_record_3_s {
        uint32_t count; 
        uint32_t length;
        testMilenage_array_2_t seq;};
typedef struct testMilenage_record_3_s * testMilenage_record_3_t;

extern testMilenage_record_3_t new_testMilenage_record_3(void);

extern void release_testMilenage_record_3(testMilenage_record_3_t x);

extern testMilenage_record_3_t copy_testMilenage_record_3(testMilenage_record_3_t x);

extern bool_t equal_testMilenage_record_3(testMilenage_record_3_t x, testMilenage_record_3_t y);
typedef struct actual_testMilenage_record_3_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_testMilenage_record_3_t;

void release_testMilenage_record_3_ptr(pointer_t x, type_actual_t testMilenage_record_3);
extern bool_t equal_testMilenage_record_3_ptr(pointer_t x, pointer_t y, actual_testMilenage_record_3_t T);

actual_testMilenage_record_3_t actual_testMilenage_record_3(void);

extern testMilenage_record_3_t update_testMilenage_record_3_length(testMilenage_record_3_t x, uint32_t v);

extern testMilenage_record_3_t update_testMilenage_record_3_seq(testMilenage_record_3_t x, testMilenage_array_2_t v);



struct testMilenage_array_4_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct testMilenage_array_4_s * testMilenage_array_4_t;

extern testMilenage_array_4_t new_testMilenage_array_4(uint32_t size);

extern void release_testMilenage_array_4(testMilenage_array_4_t x);

extern testMilenage_array_4_t copy_testMilenage_array_4(testMilenage_array_4_t x);

extern bool_t equal_testMilenage_array_4(testMilenage_array_4_t x, testMilenage_array_4_t y);
typedef struct actual_testMilenage_array_4_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_testMilenage_array_4_t;

void release_testMilenage_array_4_ptr(pointer_t x, type_actual_t testMilenage_array_4);
extern bool_t equal_testMilenage_array_4_ptr(pointer_t x, pointer_t y, type_actual_t T);

actual_testMilenage_array_4_t actual_testMilenage_array_4(void);

extern testMilenage_array_4_t update_testMilenage_array_4(testMilenage_array_4_t x, uint32_t i, uint8_t v);

extern testMilenage_array_4_t upgrade_testMilenage_array_4(testMilenage_array_4_t x, uint32_t i, uint8_t v);



struct testMilenage_record_5_s {
        uint32_t count; 
        bytestrings__bytestring_t project_1;
        bytestrings__bytestring_t project_2;
        testMilenage_array_4_t project_3;
        testMilenage_array_4_t project_4;
        testMilenage_array_4_t project_5;};
typedef struct testMilenage_record_5_s * testMilenage_record_5_t;

extern testMilenage_record_5_t new_testMilenage_record_5(void);

extern void release_testMilenage_record_5(testMilenage_record_5_t x);

extern testMilenage_record_5_t copy_testMilenage_record_5(testMilenage_record_5_t x);

extern bool_t equal_testMilenage_record_5(testMilenage_record_5_t x, testMilenage_record_5_t y);
typedef struct actual_testMilenage_record_5_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_testMilenage_record_5_t;

void release_testMilenage_record_5_ptr(pointer_t x, type_actual_t testMilenage_record_5);
extern bool_t equal_testMilenage_record_5_ptr(pointer_t x, pointer_t y, actual_testMilenage_record_5_t T);

actual_testMilenage_record_5_t actual_testMilenage_record_5(void);

extern testMilenage_record_5_t update_testMilenage_record_5_project_1(testMilenage_record_5_t x, bytestrings__bytestring_t v);

extern testMilenage_record_5_t update_testMilenage_record_5_project_2(testMilenage_record_5_t x, bytestrings__bytestring_t v);

extern testMilenage_record_5_t update_testMilenage_record_5_project_3(testMilenage_record_5_t x, testMilenage_array_4_t v);

extern testMilenage_record_5_t update_testMilenage_record_5_project_4(testMilenage_record_5_t x, testMilenage_array_4_t v);

extern testMilenage_record_5_t update_testMilenage_record_5_project_5(testMilenage_record_5_t x, testMilenage_array_4_t v);



struct testMilenage_funtype_6_s;
        typedef struct testMilenage_funtype_6_s * testMilenage_funtype_6_t;

struct testMilenage_funtype_6_ftbl_s {bytestrings__bytestring_t (* fptr)(struct testMilenage_funtype_6_s *, testMilenage_record_5_t);
        bytestrings__bytestring_t (* mptr)(struct testMilenage_funtype_6_s *, bytestrings__bytestring_t, bytestrings__bytestring_t, testMilenage_array_4_t, testMilenage_array_4_t, testMilenage_array_4_t);
        void (* rptr)(struct testMilenage_funtype_6_s *);
        struct testMilenage_funtype_6_s * (* cptr)(struct testMilenage_funtype_6_s *);};
typedef struct testMilenage_funtype_6_ftbl_s * testMilenage_funtype_6_ftbl_t;

struct testMilenage_funtype_6_hashentry_s {uint32_t keyhash; testMilenage_record_5_t key; bytestrings__bytestring_t value;}; 
typedef struct testMilenage_funtype_6_hashentry_s testMilenage_funtype_6_hashentry_t;

struct testMilenage_funtype_6_htbl_s {uint32_t size; uint32_t num_entries; testMilenage_funtype_6_hashentry_t * data;}; 
typedef struct testMilenage_funtype_6_htbl_s * testMilenage_funtype_6_htbl_t;

struct testMilenage_funtype_6_s {uint32_t count;
        testMilenage_funtype_6_ftbl_t ftbl;
        testMilenage_funtype_6_htbl_t htbl;};
typedef struct testMilenage_funtype_6_s * testMilenage_funtype_6_t;

extern void release_testMilenage_funtype_6(testMilenage_funtype_6_t x);

extern testMilenage_funtype_6_t copy_testMilenage_funtype_6(testMilenage_funtype_6_t x);

extern bool_t equal_testMilenage_funtype_6(testMilenage_funtype_6_t x, testMilenage_funtype_6_t y);



struct testMilenage_record_7_s {
        uint32_t count; 
        testMilenage_array_4_t project_1;
        testMilenage_array_4_t project_2;};
typedef struct testMilenage_record_7_s * testMilenage_record_7_t;

extern testMilenage_record_7_t new_testMilenage_record_7(void);

extern void release_testMilenage_record_7(testMilenage_record_7_t x);

extern testMilenage_record_7_t copy_testMilenage_record_7(testMilenage_record_7_t x);

extern bool_t equal_testMilenage_record_7(testMilenage_record_7_t x, testMilenage_record_7_t y);
typedef struct actual_testMilenage_record_7_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_testMilenage_record_7_t;

void release_testMilenage_record_7_ptr(pointer_t x, type_actual_t testMilenage_record_7);
extern bool_t equal_testMilenage_record_7_ptr(pointer_t x, pointer_t y, actual_testMilenage_record_7_t T);

actual_testMilenage_record_7_t actual_testMilenage_record_7(void);

extern testMilenage_record_7_t update_testMilenage_record_7_project_1(testMilenage_record_7_t x, testMilenage_array_4_t v);

extern testMilenage_record_7_t update_testMilenage_record_7_project_2(testMilenage_record_7_t x, testMilenage_array_4_t v);



struct testMilenage_funtype_8_s;
        typedef struct testMilenage_funtype_8_s * testMilenage_funtype_8_t;

struct testMilenage_funtype_8_ftbl_s {testMilenage_array_4_t (* fptr)(struct testMilenage_funtype_8_s *, testMilenage_record_7_t);
        testMilenage_array_4_t (* mptr)(struct testMilenage_funtype_8_s *, testMilenage_array_4_t, testMilenage_array_4_t);
        void (* rptr)(struct testMilenage_funtype_8_s *);
        struct testMilenage_funtype_8_s * (* cptr)(struct testMilenage_funtype_8_s *);};
typedef struct testMilenage_funtype_8_ftbl_s * testMilenage_funtype_8_ftbl_t;

struct testMilenage_funtype_8_hashentry_s {uint32_t keyhash; testMilenage_record_7_t key; testMilenage_array_4_t value;}; 
typedef struct testMilenage_funtype_8_hashentry_s testMilenage_funtype_8_hashentry_t;

struct testMilenage_funtype_8_htbl_s {uint32_t size; uint32_t num_entries; testMilenage_funtype_8_hashentry_t * data;}; 
typedef struct testMilenage_funtype_8_htbl_s * testMilenage_funtype_8_htbl_t;

struct testMilenage_funtype_8_s {uint32_t count;
        testMilenage_funtype_8_ftbl_t ftbl;
        testMilenage_funtype_8_htbl_t htbl;};
typedef struct testMilenage_funtype_8_s * testMilenage_funtype_8_t;

extern void release_testMilenage_funtype_8(testMilenage_funtype_8_t x);

extern testMilenage_funtype_8_t copy_testMilenage_funtype_8(testMilenage_funtype_8_t x);

extern bool_t equal_testMilenage_funtype_8(testMilenage_funtype_8_t x, testMilenage_funtype_8_t y);




struct testMilenage_closure_9_s;
        typedef struct testMilenage_closure_9_s * testMilenage_closure_9_t;

struct testMilenage_closure_9_s {uint32_t count;
         testMilenage_funtype_8_ftbl_t ftbl;
         testMilenage_funtype_8_htbl_t htbl;};

testMilenage_array_4_t f_testMilenage_closure_9(struct testMilenage_closure_9_s * closure, testMilenage_record_7_t bvar);

testMilenage_array_4_t m_testMilenage_closure_9(struct testMilenage_closure_9_s * closure, testMilenage_array_4_t bvar_1, testMilenage_array_4_t bvar_2);

extern testMilenage_array_4_t h_testMilenage_closure_9(testMilenage_array_4_t ivar_12, testMilenage_array_4_t ivar_13);

extern testMilenage_closure_9_t new_testMilenage_closure_9(void);

extern void release_testMilenage_closure_9(testMilenage_funtype_8_t closure);

extern testMilenage_closure_9_t copy_testMilenage_closure_9(testMilenage_closure_9_t x);



struct testMilenage_record_10_s {
        uint32_t count; 
        testMilenage_array_4_t project_1;
        testMilenage_array_4_t project_2;
        testMilenage_array_4_t project_3;};
typedef struct testMilenage_record_10_s * testMilenage_record_10_t;

extern testMilenage_record_10_t new_testMilenage_record_10(void);

extern void release_testMilenage_record_10(testMilenage_record_10_t x);

extern testMilenage_record_10_t copy_testMilenage_record_10(testMilenage_record_10_t x);

extern bool_t equal_testMilenage_record_10(testMilenage_record_10_t x, testMilenage_record_10_t y);
typedef struct actual_testMilenage_record_10_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_testMilenage_record_10_t;

void release_testMilenage_record_10_ptr(pointer_t x, type_actual_t testMilenage_record_10);
extern bool_t equal_testMilenage_record_10_ptr(pointer_t x, pointer_t y, actual_testMilenage_record_10_t T);

actual_testMilenage_record_10_t actual_testMilenage_record_10(void);

extern testMilenage_record_10_t update_testMilenage_record_10_project_1(testMilenage_record_10_t x, testMilenage_array_4_t v);

extern testMilenage_record_10_t update_testMilenage_record_10_project_2(testMilenage_record_10_t x, testMilenage_array_4_t v);

extern testMilenage_record_10_t update_testMilenage_record_10_project_3(testMilenage_record_10_t x, testMilenage_array_4_t v);



struct testMilenage_funtype_11_s;
        typedef struct testMilenage_funtype_11_s * testMilenage_funtype_11_t;

struct testMilenage_funtype_11_ftbl_s {testMilenage_array_4_t (* fptr)(struct testMilenage_funtype_11_s *, testMilenage_record_10_t);
        testMilenage_array_4_t (* mptr)(struct testMilenage_funtype_11_s *, testMilenage_array_4_t, testMilenage_array_4_t, testMilenage_array_4_t);
        void (* rptr)(struct testMilenage_funtype_11_s *);
        struct testMilenage_funtype_11_s * (* cptr)(struct testMilenage_funtype_11_s *);};
typedef struct testMilenage_funtype_11_ftbl_s * testMilenage_funtype_11_ftbl_t;

struct testMilenage_funtype_11_hashentry_s {uint32_t keyhash; testMilenage_record_10_t key; testMilenage_array_4_t value;}; 
typedef struct testMilenage_funtype_11_hashentry_s testMilenage_funtype_11_hashentry_t;

struct testMilenage_funtype_11_htbl_s {uint32_t size; uint32_t num_entries; testMilenage_funtype_11_hashentry_t * data;}; 
typedef struct testMilenage_funtype_11_htbl_s * testMilenage_funtype_11_htbl_t;

struct testMilenage_funtype_11_s {uint32_t count;
        testMilenage_funtype_11_ftbl_t ftbl;
        testMilenage_funtype_11_htbl_t htbl;};
typedef struct testMilenage_funtype_11_s * testMilenage_funtype_11_t;

extern void release_testMilenage_funtype_11(testMilenage_funtype_11_t x);

extern testMilenage_funtype_11_t copy_testMilenage_funtype_11(testMilenage_funtype_11_t x);

extern bool_t equal_testMilenage_funtype_11(testMilenage_funtype_11_t x, testMilenage_funtype_11_t y);




struct testMilenage_closure_12_s;
        typedef struct testMilenage_closure_12_s * testMilenage_closure_12_t;

struct testMilenage_closure_12_s {uint32_t count;
         testMilenage_funtype_8_ftbl_t ftbl;
         testMilenage_funtype_8_htbl_t htbl;};

testMilenage_array_4_t f_testMilenage_closure_12(struct testMilenage_closure_12_s * closure, testMilenage_record_7_t bvar);

testMilenage_array_4_t m_testMilenage_closure_12(struct testMilenage_closure_12_s * closure, testMilenage_array_4_t bvar_1, testMilenage_array_4_t bvar_2);

extern testMilenage_array_4_t h_testMilenage_closure_12(testMilenage_array_4_t ivar_10, testMilenage_array_4_t ivar_11);

extern testMilenage_closure_12_t new_testMilenage_closure_12(void);

extern void release_testMilenage_closure_12(testMilenage_funtype_8_t closure);

extern testMilenage_closure_12_t copy_testMilenage_closure_12(testMilenage_closure_12_t x);



struct testMilenage_record_13_s {
        uint32_t count; 
        testMilenage_array_4_t project_1;
        testMilenage_array_4_t project_2;
        testMilenage_array_4_t project_3;
        testMilenage_array_4_t project_4;};
typedef struct testMilenage_record_13_s * testMilenage_record_13_t;

extern testMilenage_record_13_t new_testMilenage_record_13(void);

extern void release_testMilenage_record_13(testMilenage_record_13_t x);

extern testMilenage_record_13_t copy_testMilenage_record_13(testMilenage_record_13_t x);

extern bool_t equal_testMilenage_record_13(testMilenage_record_13_t x, testMilenage_record_13_t y);
typedef struct actual_testMilenage_record_13_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_testMilenage_record_13_t;

void release_testMilenage_record_13_ptr(pointer_t x, type_actual_t testMilenage_record_13);
extern bool_t equal_testMilenage_record_13_ptr(pointer_t x, pointer_t y, actual_testMilenage_record_13_t T);

actual_testMilenage_record_13_t actual_testMilenage_record_13(void);

extern testMilenage_record_13_t update_testMilenage_record_13_project_1(testMilenage_record_13_t x, testMilenage_array_4_t v);

extern testMilenage_record_13_t update_testMilenage_record_13_project_2(testMilenage_record_13_t x, testMilenage_array_4_t v);

extern testMilenage_record_13_t update_testMilenage_record_13_project_3(testMilenage_record_13_t x, testMilenage_array_4_t v);

extern testMilenage_record_13_t update_testMilenage_record_13_project_4(testMilenage_record_13_t x, testMilenage_array_4_t v);



struct testMilenage_funtype_14_s;
        typedef struct testMilenage_funtype_14_s * testMilenage_funtype_14_t;

struct testMilenage_funtype_14_ftbl_s {testMilenage_array_4_t (* fptr)(struct testMilenage_funtype_14_s *, testMilenage_record_13_t);
        testMilenage_array_4_t (* mptr)(struct testMilenage_funtype_14_s *, testMilenage_array_4_t, testMilenage_array_4_t, testMilenage_array_4_t, testMilenage_array_4_t);
        void (* rptr)(struct testMilenage_funtype_14_s *);
        struct testMilenage_funtype_14_s * (* cptr)(struct testMilenage_funtype_14_s *);};
typedef struct testMilenage_funtype_14_ftbl_s * testMilenage_funtype_14_ftbl_t;

struct testMilenage_funtype_14_hashentry_s {uint32_t keyhash; testMilenage_record_13_t key; testMilenage_array_4_t value;}; 
typedef struct testMilenage_funtype_14_hashentry_s testMilenage_funtype_14_hashentry_t;

struct testMilenage_funtype_14_htbl_s {uint32_t size; uint32_t num_entries; testMilenage_funtype_14_hashentry_t * data;}; 
typedef struct testMilenage_funtype_14_htbl_s * testMilenage_funtype_14_htbl_t;

struct testMilenage_funtype_14_s {uint32_t count;
        testMilenage_funtype_14_ftbl_t ftbl;
        testMilenage_funtype_14_htbl_t htbl;};
typedef struct testMilenage_funtype_14_s * testMilenage_funtype_14_t;

extern void release_testMilenage_funtype_14(testMilenage_funtype_14_t x);

extern testMilenage_funtype_14_t copy_testMilenage_funtype_14(testMilenage_funtype_14_t x);

extern bool_t equal_testMilenage_funtype_14(testMilenage_funtype_14_t x, testMilenage_funtype_14_t y);




struct testMilenage_closure_15_s;
        typedef struct testMilenage_closure_15_s * testMilenage_closure_15_t;

struct testMilenage_closure_15_s {uint32_t count;
         testMilenage_funtype_8_ftbl_t ftbl;
         testMilenage_funtype_8_htbl_t htbl;};

testMilenage_array_4_t f_testMilenage_closure_15(struct testMilenage_closure_15_s * closure, testMilenage_record_7_t bvar);

testMilenage_array_4_t m_testMilenage_closure_15(struct testMilenage_closure_15_s * closure, testMilenage_array_4_t bvar_1, testMilenage_array_4_t bvar_2);

extern testMilenage_array_4_t h_testMilenage_closure_15(testMilenage_array_4_t ivar_11, testMilenage_array_4_t ivar_12);

extern testMilenage_closure_15_t new_testMilenage_closure_15(void);

extern void release_testMilenage_closure_15(testMilenage_funtype_8_t closure);

extern testMilenage_closure_15_t copy_testMilenage_closure_15(testMilenage_closure_15_t x);




struct testMilenage_closure_16_s;
        typedef struct testMilenage_closure_16_s * testMilenage_closure_16_t;

struct testMilenage_closure_16_s {uint32_t count;
         testMilenage_funtype_8_ftbl_t ftbl;
         testMilenage_funtype_8_htbl_t htbl;};

testMilenage_array_4_t f_testMilenage_closure_16(struct testMilenage_closure_16_s * closure, testMilenage_record_7_t bvar);

testMilenage_array_4_t m_testMilenage_closure_16(struct testMilenage_closure_16_s * closure, testMilenage_array_4_t bvar_1, testMilenage_array_4_t bvar_2);

extern testMilenage_array_4_t h_testMilenage_closure_16(testMilenage_array_4_t ivar_12, testMilenage_array_4_t ivar_13);

extern testMilenage_closure_16_t new_testMilenage_closure_16(void);

extern void release_testMilenage_closure_16(testMilenage_funtype_8_t closure);

extern testMilenage_closure_16_t copy_testMilenage_closure_16(testMilenage_closure_16_t x);



extern bool_t testMilenage__testAllFunc_test0(void);

extern bytestrings__bytestring_t testMilenage__test0SQN(void);

extern bytestrings__bytestring_t testMilenage__test0AMF(void);

extern testMilenage_array_4_t testMilenage__test0K(void);

extern testMilenage_array_4_t testMilenage__test0RAND(void);

extern testMilenage_array_4_t testMilenage__test0OP(void);

extern bytestrings__bytestring_t testMilenage__test0allfun(void);

extern bytestrings__bytestring_t testMilenage__test1SQN(void);

extern bytestrings__bytestring_t testMilenage__test1AMF(void);

extern testMilenage_array_4_t testMilenage__test1K(void);

extern testMilenage_array_4_t testMilenage__test1RAND(void);

extern testMilenage_array_4_t testMilenage__test1OPc(void);

extern testMilenage_array_4_t testMilenage__test1temp(void);

extern testMilenage_array_4_t testMilenage__test1IN1(void);

extern bytestrings__bytestring_t testMilenage__testIN(void);

extern testMilenage_array_4_t testMilenage__test1OUT1(void);

extern bytestrings__bytestring_t testMilenage__test1tempIN1OUT1(void);

extern bytestrings__bytestring_t testMilenage__test1allfunc(void);
#endif