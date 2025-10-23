//Code generated using pvs2ir
#ifndef _testlist_h 
#define _testlist_h

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

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "list2finseq_c.h"

#include "list_props_c.h"

#include "list_adt_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "finite_sequences_c.h"

#include "real_defs_c.h"

#include "list2finseq_uint32_c.h"

#include "list_props_mpq_c.h"

#include "list_props_mpz_c.h"

#include "list_props_uint32_c.h"

//cc -O3 -Wall -o testlist -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/list2finseq_c.c /Users/e21660/shankar/pvs.git/lib/list_props_c.c /Users/e21660/shankar/pvs.git/lib/list_adt_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/finite_sequences_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c testlist_c.c -lgmp 

struct testlist_record_0_s {
        uint32_t count; 
        list_adt__list_adt_t project_1;
        mpz_t project_2;};
typedef struct testlist_record_0_s * testlist_record_0_t;

extern testlist_record_0_t new_testlist_record_0(void);

extern void release_testlist_record_0(testlist_record_0_t x);

extern testlist_record_0_t copy_testlist_record_0(testlist_record_0_t x);

extern bool_t equal_testlist_record_0(testlist_record_0_t x, testlist_record_0_t y);
extern char * json_testlist_record_0(testlist_record_0_t x);

typedef struct actual_testlist_record_0_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_testlist_record_0_t;
void release_testlist_record_0_ptr(pointer_t x, type_actual_t testlist_record_0);

extern bool_t equal_testlist_record_0_ptr(pointer_t x, pointer_t y, actual_testlist_record_0_t T);

extern char * json_testlist_record_0_ptr(pointer_t x,  actual_testlist_record_0_t T);

actual_testlist_record_0_t actual_testlist_record_0(void);

extern testlist_record_0_t update_testlist_record_0_project_1(testlist_record_0_t x, list_adt__list_adt_t v);

extern testlist_record_0_t update_testlist_record_0_project_2(testlist_record_0_t x, mpz_ptr_t v);



struct testlist_funtype_1_s;
        typedef struct testlist_funtype_1_s * testlist_funtype_1_t;

struct testlist_funtype_1_ftbl_s {uint32_t (* fptr)(struct testlist_funtype_1_s *, testlist_record_0_t);
        uint32_t (* mptr)(struct testlist_funtype_1_s *, list_adt__list_adt_t, mpz_ptr_t);
        void (* rptr)(struct testlist_funtype_1_s *);
        struct testlist_funtype_1_s * (* cptr)(struct testlist_funtype_1_s *);};
typedef struct testlist_funtype_1_ftbl_s * testlist_funtype_1_ftbl_t;

struct testlist_funtype_1_hashentry_s {uint32_t keyhash; testlist_record_0_t key; uint32_t value;}; 
typedef struct testlist_funtype_1_hashentry_s testlist_funtype_1_hashentry_t;

struct testlist_funtype_1_htbl_s {uint32_t size; uint32_t num_entries; testlist_funtype_1_hashentry_t * data;}; 
typedef struct testlist_funtype_1_htbl_s * testlist_funtype_1_htbl_t;

struct testlist_funtype_1_s {uint32_t count;
        testlist_funtype_1_ftbl_t ftbl;
        testlist_funtype_1_htbl_t htbl;};
typedef struct testlist_funtype_1_s * testlist_funtype_1_t;

extern void release_testlist_funtype_1(testlist_funtype_1_t x);

extern testlist_funtype_1_t copy_testlist_funtype_1(testlist_funtype_1_t x);

extern bool_t equal_testlist_funtype_1(testlist_funtype_1_t x, testlist_funtype_1_t y);

extern char* json_testlist_funtype_1(testlist_funtype_1_t x);




struct testlist_closure_2_s;
        typedef struct testlist_closure_2_s * testlist_closure_2_t;

struct testlist_closure_2_s {uint32_t count;
         testlist_funtype_1_ftbl_t ftbl;
         testlist_funtype_1_htbl_t htbl;};

uint32_t f_testlist_closure_2(struct testlist_closure_2_s * closure, testlist_record_0_t bvar);

uint32_t m_testlist_closure_2(struct testlist_closure_2_s * closure, list_adt__list_adt_t bvar_1, mpz_ptr_t bvar_2);

extern uint32_t h_testlist_closure_2(list_adt__list_adt_t ivar_7, mpz_ptr_t ivar_8);

extern testlist_closure_2_t new_testlist_closure_2(void);

extern void release_testlist_closure_2(testlist_funtype_1_t closure);

extern testlist_closure_2_t copy_testlist_closure_2(testlist_closure_2_t x);



struct testlist_funtype_3_s;
        typedef struct testlist_funtype_3_s * testlist_funtype_3_t;

struct testlist_funtype_3_ftbl_s {mpz_ptr_t (* fptr)(struct testlist_funtype_3_s *, testlist_record_0_t);
        mpz_ptr_t (* mptr)(struct testlist_funtype_3_s *, list_adt__list_adt_t, mpz_ptr_t);
        void (* rptr)(struct testlist_funtype_3_s *);
        struct testlist_funtype_3_s * (* cptr)(struct testlist_funtype_3_s *);};
typedef struct testlist_funtype_3_ftbl_s * testlist_funtype_3_ftbl_t;

struct testlist_funtype_3_hashentry_s {uint32_t keyhash; testlist_record_0_t key; mpz_t value;}; 
typedef struct testlist_funtype_3_hashentry_s testlist_funtype_3_hashentry_t;

struct testlist_funtype_3_htbl_s {uint32_t size; uint32_t num_entries; testlist_funtype_3_hashentry_t * data;}; 
typedef struct testlist_funtype_3_htbl_s * testlist_funtype_3_htbl_t;

struct testlist_funtype_3_s {uint32_t count;
        testlist_funtype_3_ftbl_t ftbl;
        testlist_funtype_3_htbl_t htbl;};
typedef struct testlist_funtype_3_s * testlist_funtype_3_t;

extern void release_testlist_funtype_3(testlist_funtype_3_t x);

extern testlist_funtype_3_t copy_testlist_funtype_3(testlist_funtype_3_t x);

extern bool_t equal_testlist_funtype_3(testlist_funtype_3_t x, testlist_funtype_3_t y);

extern char* json_testlist_funtype_3(testlist_funtype_3_t x);




struct testlist_closure_4_s;
        typedef struct testlist_closure_4_s * testlist_closure_4_t;

struct testlist_closure_4_s {uint32_t count;
         testlist_funtype_3_ftbl_t ftbl;
         testlist_funtype_3_htbl_t htbl;};

mpz_ptr_t f_testlist_closure_4(struct testlist_closure_4_s * closure, testlist_record_0_t bvar);

mpz_ptr_t m_testlist_closure_4(struct testlist_closure_4_s * closure, list_adt__list_adt_t bvar_1, mpz_ptr_t bvar_2);

extern mpz_ptr_t h_testlist_closure_4(list_adt__list_adt_t ivar_7, mpz_ptr_t ivar_8);

extern testlist_closure_4_t new_testlist_closure_4(void);

extern void release_testlist_closure_4(testlist_funtype_3_t closure);

extern testlist_closure_4_t copy_testlist_closure_4(testlist_closure_4_t x);



struct testlist_funtype_5_s;
        typedef struct testlist_funtype_5_s * testlist_funtype_5_t;

struct testlist_funtype_5_ftbl_s {mpq_ptr_t (* fptr)(struct testlist_funtype_5_s *, testlist_record_0_t);
        mpq_ptr_t (* mptr)(struct testlist_funtype_5_s *, list_adt__list_adt_t, mpz_ptr_t);
        void (* rptr)(struct testlist_funtype_5_s *);
        struct testlist_funtype_5_s * (* cptr)(struct testlist_funtype_5_s *);};
typedef struct testlist_funtype_5_ftbl_s * testlist_funtype_5_ftbl_t;

struct testlist_funtype_5_hashentry_s {uint32_t keyhash; testlist_record_0_t key; mpq_t value;}; 
typedef struct testlist_funtype_5_hashentry_s testlist_funtype_5_hashentry_t;

struct testlist_funtype_5_htbl_s {uint32_t size; uint32_t num_entries; testlist_funtype_5_hashentry_t * data;}; 
typedef struct testlist_funtype_5_htbl_s * testlist_funtype_5_htbl_t;

struct testlist_funtype_5_s {uint32_t count;
        testlist_funtype_5_ftbl_t ftbl;
        testlist_funtype_5_htbl_t htbl;};
typedef struct testlist_funtype_5_s * testlist_funtype_5_t;

extern void release_testlist_funtype_5(testlist_funtype_5_t x);

extern testlist_funtype_5_t copy_testlist_funtype_5(testlist_funtype_5_t x);

extern bool_t equal_testlist_funtype_5(testlist_funtype_5_t x, testlist_funtype_5_t y);

extern char* json_testlist_funtype_5(testlist_funtype_5_t x);




struct testlist_closure_6_s;
        typedef struct testlist_closure_6_s * testlist_closure_6_t;

struct testlist_closure_6_s {uint32_t count;
         testlist_funtype_5_ftbl_t ftbl;
         testlist_funtype_5_htbl_t htbl;};

mpq_ptr_t f_testlist_closure_6(struct testlist_closure_6_s * closure, testlist_record_0_t bvar);

mpq_ptr_t m_testlist_closure_6(struct testlist_closure_6_s * closure, list_adt__list_adt_t bvar_1, mpz_ptr_t bvar_2);

extern mpq_ptr_t h_testlist_closure_6(list_adt__list_adt_t ivar_7, mpz_ptr_t ivar_8);

extern testlist_closure_6_t new_testlist_closure_6(void);

extern void release_testlist_closure_6(testlist_funtype_5_t closure);

extern testlist_closure_6_t copy_testlist_closure_6(testlist_closure_6_t x);



struct testlist_funtype_7_s;
        typedef struct testlist_funtype_7_s * testlist_funtype_7_t;

struct testlist_funtype_7_ftbl_s {uint32_t (* fptr)(struct testlist_funtype_7_s *, mpz_ptr_t);
        uint32_t (* mptr)(struct testlist_funtype_7_s *, mpz_ptr_t);
        void (* rptr)(struct testlist_funtype_7_s *);
        struct testlist_funtype_7_s * (* cptr)(struct testlist_funtype_7_s *);};
typedef struct testlist_funtype_7_ftbl_s * testlist_funtype_7_ftbl_t;

struct testlist_funtype_7_hashentry_s {uint32_t keyhash; mpz_ptr_t key; uint32_t value;}; 
typedef struct testlist_funtype_7_hashentry_s testlist_funtype_7_hashentry_t;

struct testlist_funtype_7_htbl_s {uint32_t size; uint32_t num_entries; testlist_funtype_7_hashentry_t * data;}; 
typedef struct testlist_funtype_7_htbl_s * testlist_funtype_7_htbl_t;

struct testlist_funtype_7_s {uint32_t count;
        testlist_funtype_7_ftbl_t ftbl;
        testlist_funtype_7_htbl_t htbl;};
typedef struct testlist_funtype_7_s * testlist_funtype_7_t;

extern void release_testlist_funtype_7(testlist_funtype_7_t x);

extern testlist_funtype_7_t copy_testlist_funtype_7(testlist_funtype_7_t x);

uint32_t lookup_testlist_funtype_7(testlist_funtype_7_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

testlist_funtype_7_t dupdate_testlist_funtype_7(testlist_funtype_7_t a, mpz_ptr_t i, uint32_t v);

extern testlist_funtype_7_t update_testlist_funtype_7(testlist_funtype_7_t a, mpz_ptr_t i, uint32_t v);

extern bool_t equal_testlist_funtype_7(testlist_funtype_7_t x, testlist_funtype_7_t y);

extern char* json_testlist_funtype_7(testlist_funtype_7_t x);



struct testlist_record_8_s {
        uint32_t count; 
        mpz_t length;
        testlist_funtype_7_t seq;};
typedef struct testlist_record_8_s * testlist_record_8_t;

extern testlist_record_8_t new_testlist_record_8(void);

extern void release_testlist_record_8(testlist_record_8_t x);

extern testlist_record_8_t copy_testlist_record_8(testlist_record_8_t x);

extern bool_t equal_testlist_record_8(testlist_record_8_t x, testlist_record_8_t y);
extern char * json_testlist_record_8(testlist_record_8_t x);

typedef struct actual_testlist_record_8_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_testlist_record_8_t;
void release_testlist_record_8_ptr(pointer_t x, type_actual_t testlist_record_8);

extern bool_t equal_testlist_record_8_ptr(pointer_t x, pointer_t y, actual_testlist_record_8_t T);

extern char * json_testlist_record_8_ptr(pointer_t x,  actual_testlist_record_8_t T);

actual_testlist_record_8_t actual_testlist_record_8(void);

extern testlist_record_8_t update_testlist_record_8_length(testlist_record_8_t x, mpz_ptr_t v);

extern testlist_record_8_t update_testlist_record_8_seq(testlist_record_8_t x, testlist_funtype_7_t v);



struct testlist_funtype_9_s;
        typedef struct testlist_funtype_9_s * testlist_funtype_9_t;

struct testlist_funtype_9_ftbl_s {testlist_record_8_t (* fptr)(struct testlist_funtype_9_s *, testlist_record_0_t);
        testlist_record_8_t (* mptr)(struct testlist_funtype_9_s *, list_adt__list_adt_t, mpz_ptr_t);
        void (* rptr)(struct testlist_funtype_9_s *);
        struct testlist_funtype_9_s * (* cptr)(struct testlist_funtype_9_s *);};
typedef struct testlist_funtype_9_ftbl_s * testlist_funtype_9_ftbl_t;

struct testlist_funtype_9_hashentry_s {uint32_t keyhash; testlist_record_0_t key; testlist_record_8_t value;}; 
typedef struct testlist_funtype_9_hashentry_s testlist_funtype_9_hashentry_t;

struct testlist_funtype_9_htbl_s {uint32_t size; uint32_t num_entries; testlist_funtype_9_hashentry_t * data;}; 
typedef struct testlist_funtype_9_htbl_s * testlist_funtype_9_htbl_t;

struct testlist_funtype_9_s {uint32_t count;
        testlist_funtype_9_ftbl_t ftbl;
        testlist_funtype_9_htbl_t htbl;};
typedef struct testlist_funtype_9_s * testlist_funtype_9_t;

extern void release_testlist_funtype_9(testlist_funtype_9_t x);

extern testlist_funtype_9_t copy_testlist_funtype_9(testlist_funtype_9_t x);

extern bool_t equal_testlist_funtype_9(testlist_funtype_9_t x, testlist_funtype_9_t y);

extern char* json_testlist_funtype_9(testlist_funtype_9_t x);




struct testlist_closure_10_s;
        typedef struct testlist_closure_10_s * testlist_closure_10_t;

struct testlist_closure_10_s {uint32_t count;
         testlist_funtype_9_ftbl_t ftbl;
         testlist_funtype_9_htbl_t htbl;
        type_actual_t fvar_1;};

testlist_record_8_t f_testlist_closure_10(struct testlist_closure_10_s * closure, testlist_record_0_t bvar);

testlist_record_8_t m_testlist_closure_10(struct testlist_closure_10_s * closure, list_adt__list_adt_t bvar_1, mpz_ptr_t bvar_2);

extern testlist_record_8_t h_testlist_closure_10(list_adt__list_adt_t ivar_10, mpz_ptr_t ivar_11, type_actual_t ivar_5);

extern testlist_closure_10_t new_testlist_closure_10(void);

extern void release_testlist_closure_10(testlist_funtype_9_t closure);

extern testlist_closure_10_t copy_testlist_closure_10(testlist_closure_10_t x);




struct testlist_closure_11_s;
        typedef struct testlist_closure_11_s * testlist_closure_11_t;

struct testlist_closure_11_s {uint32_t count;
         testlist_funtype_1_ftbl_t ftbl;
         testlist_funtype_1_htbl_t htbl;};

uint32_t f_testlist_closure_11(struct testlist_closure_11_s * closure, testlist_record_0_t bvar);

uint32_t m_testlist_closure_11(struct testlist_closure_11_s * closure, list_adt__list_adt_t bvar_1, mpz_ptr_t bvar_2);

extern uint32_t h_testlist_closure_11(list_adt__list_adt_t ivar_59, mpz_ptr_t ivar_60);

extern testlist_closure_11_t new_testlist_closure_11(void);

extern void release_testlist_closure_11(testlist_funtype_1_t closure);

extern testlist_closure_11_t copy_testlist_closure_11(testlist_closure_11_t x);




struct testlist_closure_12_s;
        typedef struct testlist_closure_12_s * testlist_closure_12_t;

struct testlist_closure_12_s {uint32_t count;
         testlist_funtype_3_ftbl_t ftbl;
         testlist_funtype_3_htbl_t htbl;};

mpz_ptr_t f_testlist_closure_12(struct testlist_closure_12_s * closure, testlist_record_0_t bvar);

mpz_ptr_t m_testlist_closure_12(struct testlist_closure_12_s * closure, list_adt__list_adt_t bvar_1, mpz_ptr_t bvar_2);

extern mpz_ptr_t h_testlist_closure_12(list_adt__list_adt_t ivar_59, mpz_ptr_t ivar_60);

extern testlist_closure_12_t new_testlist_closure_12(void);

extern void release_testlist_closure_12(testlist_funtype_3_t closure);

extern testlist_closure_12_t copy_testlist_closure_12(testlist_closure_12_t x);




struct testlist_closure_13_s;
        typedef struct testlist_closure_13_s * testlist_closure_13_t;

struct testlist_closure_13_s {uint32_t count;
         testlist_funtype_5_ftbl_t ftbl;
         testlist_funtype_5_htbl_t htbl;};

mpq_ptr_t f_testlist_closure_13(struct testlist_closure_13_s * closure, testlist_record_0_t bvar);

mpq_ptr_t m_testlist_closure_13(struct testlist_closure_13_s * closure, list_adt__list_adt_t bvar_1, mpz_ptr_t bvar_2);

extern mpq_ptr_t h_testlist_closure_13(list_adt__list_adt_t ivar_74, mpz_ptr_t ivar_75);

extern testlist_closure_13_t new_testlist_closure_13(void);

extern void release_testlist_closure_13(testlist_funtype_5_t closure);

extern testlist_closure_13_t copy_testlist_closure_13(testlist_closure_13_t x);



struct testlist_funtype_14_s;
        typedef struct testlist_funtype_14_s * testlist_funtype_14_t;

struct testlist_funtype_14_ftbl_s {testlist_record_8_t (* fptr)(struct testlist_funtype_14_s *, list_adt__list_adt_t);
        testlist_record_8_t (* mptr)(struct testlist_funtype_14_s *, list_adt__list_adt_t);
        void (* rptr)(struct testlist_funtype_14_s *);
        struct testlist_funtype_14_s * (* cptr)(struct testlist_funtype_14_s *);};
typedef struct testlist_funtype_14_ftbl_s * testlist_funtype_14_ftbl_t;

struct testlist_funtype_14_hashentry_s {uint32_t keyhash; list_adt__list_adt_t key; testlist_record_8_t value;}; 
typedef struct testlist_funtype_14_hashentry_s testlist_funtype_14_hashentry_t;

struct testlist_funtype_14_htbl_s {uint32_t size; uint32_t num_entries; testlist_funtype_14_hashentry_t * data;}; 
typedef struct testlist_funtype_14_htbl_s * testlist_funtype_14_htbl_t;

struct testlist_funtype_14_s {uint32_t count;
        testlist_funtype_14_ftbl_t ftbl;
        testlist_funtype_14_htbl_t htbl;};
typedef struct testlist_funtype_14_s * testlist_funtype_14_t;

extern void release_testlist_funtype_14(testlist_funtype_14_t x);

extern testlist_funtype_14_t copy_testlist_funtype_14(testlist_funtype_14_t x);

extern bool_t equal_testlist_funtype_14(testlist_funtype_14_t x, testlist_funtype_14_t y);

extern char* json_testlist_funtype_14(testlist_funtype_14_t x);




struct testlist_closure_15_s;
        typedef struct testlist_closure_15_s * testlist_closure_15_t;

struct testlist_closure_15_s {uint32_t count;
         testlist_funtype_14_ftbl_t ftbl;
         testlist_funtype_14_htbl_t htbl;};

testlist_record_8_t f_testlist_closure_15(struct testlist_closure_15_s * closure, list_adt__list_adt_t bvar);

testlist_record_8_t m_testlist_closure_15(struct testlist_closure_15_s * closure, list_adt__list_adt_t bvar);

extern testlist_record_8_t h_testlist_closure_15(list_adt__list_adt_t ivar_23);

extern testlist_closure_15_t new_testlist_closure_15(void);

extern void release_testlist_closure_15(testlist_funtype_14_t closure);

extern testlist_closure_15_t copy_testlist_closure_15(testlist_closure_15_t x);




struct testlist_closure_16_s;
        typedef struct testlist_closure_16_s * testlist_closure_16_t;

struct testlist_closure_16_s {uint32_t count;
         testlist_funtype_14_ftbl_t ftbl;
         testlist_funtype_14_htbl_t htbl;};

testlist_record_8_t f_testlist_closure_16(struct testlist_closure_16_s * closure, list_adt__list_adt_t bvar);

testlist_record_8_t m_testlist_closure_16(struct testlist_closure_16_s * closure, list_adt__list_adt_t bvar);

extern testlist_record_8_t h_testlist_closure_16(list_adt__list_adt_t ivar_47);

extern testlist_closure_16_t new_testlist_closure_16(void);

extern void release_testlist_closure_16(testlist_funtype_14_t closure);

extern testlist_closure_16_t copy_testlist_closure_16(testlist_closure_16_t x);




struct testlist_closure_17_s;
        typedef struct testlist_closure_17_s * testlist_closure_17_t;

struct testlist_closure_17_s {uint32_t count;
         testlist_funtype_14_ftbl_t ftbl;
         testlist_funtype_14_htbl_t htbl;};

testlist_record_8_t f_testlist_closure_17(struct testlist_closure_17_s * closure, list_adt__list_adt_t bvar);

testlist_record_8_t m_testlist_closure_17(struct testlist_closure_17_s * closure, list_adt__list_adt_t bvar);

extern testlist_record_8_t h_testlist_closure_17(list_adt__list_adt_t ivar_78);

extern testlist_closure_17_t new_testlist_closure_17(void);

extern void release_testlist_closure_17(testlist_funtype_14_t closure);

extern testlist_closure_17_t copy_testlist_closure_17(testlist_closure_17_t x);




struct testlist_closure_18_s;
        typedef struct testlist_closure_18_s * testlist_closure_18_t;

struct testlist_closure_18_s {uint32_t count;
         testlist_funtype_14_ftbl_t ftbl;
         testlist_funtype_14_htbl_t htbl;};

testlist_record_8_t f_testlist_closure_18(struct testlist_closure_18_s * closure, list_adt__list_adt_t bvar);

testlist_record_8_t m_testlist_closure_18(struct testlist_closure_18_s * closure, list_adt__list_adt_t bvar);

extern testlist_record_8_t h_testlist_closure_18(list_adt__list_adt_t ivar_116);

extern testlist_closure_18_t new_testlist_closure_18(void);

extern void release_testlist_closure_18(testlist_funtype_14_t closure);

extern testlist_closure_18_t copy_testlist_closure_18(testlist_closure_18_t x);




struct testlist_closure_19_s;
        typedef struct testlist_closure_19_s * testlist_closure_19_t;

struct testlist_closure_19_s {uint32_t count;
         testlist_funtype_14_ftbl_t ftbl;
         testlist_funtype_14_htbl_t htbl;};

testlist_record_8_t f_testlist_closure_19(struct testlist_closure_19_s * closure, list_adt__list_adt_t bvar);

testlist_record_8_t m_testlist_closure_19(struct testlist_closure_19_s * closure, list_adt__list_adt_t bvar);

extern testlist_record_8_t h_testlist_closure_19(list_adt__list_adt_t ivar_161);

extern testlist_closure_19_t new_testlist_closure_19(void);

extern void release_testlist_closure_19(testlist_funtype_14_t closure);

extern testlist_closure_19_t copy_testlist_closure_19(testlist_closure_19_t x);




struct testlist_closure_20_s;
        typedef struct testlist_closure_20_s * testlist_closure_20_t;

struct testlist_closure_20_s {uint32_t count;
         testlist_funtype_9_ftbl_t ftbl;
         testlist_funtype_9_htbl_t htbl;};

testlist_record_8_t f_testlist_closure_20(struct testlist_closure_20_s * closure, testlist_record_0_t bvar);

testlist_record_8_t m_testlist_closure_20(struct testlist_closure_20_s * closure, list_adt__list_adt_t bvar_1, mpz_ptr_t bvar_2);

extern testlist_record_8_t h_testlist_closure_20(list_adt__list_adt_t ivar_205, mpz_ptr_t ivar_206);

extern testlist_closure_20_t new_testlist_closure_20(void);

extern void release_testlist_closure_20(testlist_funtype_9_t closure);

extern testlist_closure_20_t copy_testlist_closure_20(testlist_closure_20_t x);



extern testlist_funtype_1_t testlist__nthrev32(void);

extern testlist_funtype_3_t testlist__nthrevnat(void);

extern testlist_funtype_5_t testlist__nthrevreal(void);

extern testlist_funtype_9_t testlist__nthrevfin(void);

extern uint32_t testlist__testnthrev32(void);

extern mpz_ptr_t testlist__testnthrevnat(void);

extern mpq_ptr_t testlist__testnthrevreal(void);

extern testlist_record_8_t testlist__testnthrevfin(void);
#endif