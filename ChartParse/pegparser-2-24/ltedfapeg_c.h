//Code generated using pvs2ir
#ifndef _ltedfapeg_h 
#define _ltedfapeg_h

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

#include "sets_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "lex2_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "dfa_c.h"

#include "arrayCount_c.h"

//cc -O3 -Wall -o ltedfapeg -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/sets_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/modulo_arithmetic_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c /Users/e21660/shankar/pvs.git/lib/lex2_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c ltedfapeg_c.c dfa_c.c arrayCount_c.c -lgmp 
//ent

struct ltedfapeg__ent_adt_s {
         uint32_t count; 
        uint8_t ltedfapeg__ent_adt_index;};
typedef struct ltedfapeg__ent_adt_s * ltedfapeg__ent_adt_t;

extern ltedfapeg__ent_adt_t new_ltedfapeg__ent_adt(void);

extern void release_ltedfapeg__ent_adt(ltedfapeg__ent_adt_t x);

extern ltedfapeg__ent_adt_t copy_ltedfapeg__ent_adt(ltedfapeg__ent_adt_t x);

extern bool_t equal_ltedfapeg__ent_adt(ltedfapeg__ent_adt_t x, ltedfapeg__ent_adt_t y);
extern char * json_ltedfapeg__ent_adt(ltedfapeg__ent_adt_t x);

typedef struct actual_ltedfapeg__ent_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg__ent_adt_t;
extern void release_ltedfapeg__ent_adt_ptr(pointer_t x, type_actual_t ltedfapeg__ent_adt);

extern bool_t equal_ltedfapeg__ent_adt_ptr(pointer_t x, pointer_t y, actual_ltedfapeg__ent_adt_t T);

extern char * json_ltedfapeg__ent_adt_ptr(pointer_t x,  actual_ltedfapeg__ent_adt_t T);

actual_ltedfapeg__ent_adt_t actual_ltedfapeg__ent_adt(void);

extern ltedfapeg__ent_adt_t update_ltedfapeg__ent_adt_ltedfapeg__ent_adt_index(ltedfapeg__ent_adt_t x, uint8_t v);


//fail

struct ltedfapeg__fail_s {
        uint32_t count; 
        uint8_t ltedfapeg__ent_adt_index;
        uint64_t dep;};
typedef struct ltedfapeg__fail_s * ltedfapeg__fail_t;

extern ltedfapeg__fail_t new_ltedfapeg__fail(void);

extern void release_ltedfapeg__fail(ltedfapeg__fail_t x);

extern ltedfapeg__fail_t copy_ltedfapeg__fail(ltedfapeg__fail_t x);

extern bool_t equal_ltedfapeg__fail(ltedfapeg__fail_t x, ltedfapeg__fail_t y);
extern char * json_ltedfapeg__fail(ltedfapeg__fail_t x);

typedef struct actual_ltedfapeg__fail_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg__fail_t;
extern void release_ltedfapeg__fail_ptr(pointer_t x, type_actual_t ltedfapeg__fail);

extern bool_t equal_ltedfapeg__fail_ptr(pointer_t x, pointer_t y, actual_ltedfapeg__fail_t T);

extern char * json_ltedfapeg__fail_ptr(pointer_t x,  actual_ltedfapeg__fail_t T);

actual_ltedfapeg__fail_t actual_ltedfapeg__fail(void);

extern ltedfapeg__fail_t update_ltedfapeg__fail_ltedfapeg__ent_adt_index(ltedfapeg__fail_t x, uint8_t v);

extern ltedfapeg__fail_t update_ltedfapeg__fail_dep(ltedfapeg__fail_t x, uint64_t v);


//good

struct ltedfapeg__good_s {
        uint32_t count; 
        uint8_t ltedfapeg__ent_adt_index;
        uint64_t dep;
        uint32_t span;};
typedef struct ltedfapeg__good_s * ltedfapeg__good_t;

extern ltedfapeg__good_t new_ltedfapeg__good(void);

extern void release_ltedfapeg__good(ltedfapeg__good_t x);

extern ltedfapeg__good_t copy_ltedfapeg__good(ltedfapeg__good_t x);

extern bool_t equal_ltedfapeg__good(ltedfapeg__good_t x, ltedfapeg__good_t y);
extern char * json_ltedfapeg__good(ltedfapeg__good_t x);

typedef struct actual_ltedfapeg__good_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg__good_t;
extern void release_ltedfapeg__good_ptr(pointer_t x, type_actual_t ltedfapeg__good);

extern bool_t equal_ltedfapeg__good_ptr(pointer_t x, pointer_t y, actual_ltedfapeg__good_t T);

extern char * json_ltedfapeg__good_ptr(pointer_t x,  actual_ltedfapeg__good_t T);

actual_ltedfapeg__good_t actual_ltedfapeg__good(void);

extern ltedfapeg__good_t update_ltedfapeg__good_ltedfapeg__ent_adt_index(ltedfapeg__good_t x, uint8_t v);

extern ltedfapeg__good_t update_ltedfapeg__good_dep(ltedfapeg__good_t x, uint64_t v);

extern ltedfapeg__good_t update_ltedfapeg__good_span(ltedfapeg__good_t x, uint32_t v);


//push

struct ltedfapeg__push_s {
        uint32_t count; 
        uint8_t ltedfapeg__ent_adt_index;
        uint32_t pos;
        uint8_t nt;};
typedef struct ltedfapeg__push_s * ltedfapeg__push_t;

extern ltedfapeg__push_t new_ltedfapeg__push(void);

extern void release_ltedfapeg__push(ltedfapeg__push_t x);

extern ltedfapeg__push_t copy_ltedfapeg__push(ltedfapeg__push_t x);

extern bool_t equal_ltedfapeg__push(ltedfapeg__push_t x, ltedfapeg__push_t y);
extern char * json_ltedfapeg__push(ltedfapeg__push_t x);

typedef struct actual_ltedfapeg__push_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg__push_t;
extern void release_ltedfapeg__push_ptr(pointer_t x, type_actual_t ltedfapeg__push);

extern bool_t equal_ltedfapeg__push_ptr(pointer_t x, pointer_t y, actual_ltedfapeg__push_t T);

extern char * json_ltedfapeg__push_ptr(pointer_t x,  actual_ltedfapeg__push_t T);

actual_ltedfapeg__push_t actual_ltedfapeg__push(void);

extern ltedfapeg__push_t update_ltedfapeg__push_ltedfapeg__ent_adt_index(ltedfapeg__push_t x, uint8_t v);

extern ltedfapeg__push_t update_ltedfapeg__push_pos(ltedfapeg__push_t x, uint32_t v);

extern ltedfapeg__push_t update_ltedfapeg__push_nt(ltedfapeg__push_t x, uint8_t v);


//ent_ord

struct ltedfapeg_funtype_4_s;
        typedef struct ltedfapeg_funtype_4_s * ltedfapeg_funtype_4_t;

struct ltedfapeg_funtype_4_ftbl_s {uint8_t (* fptr)(struct ltedfapeg_funtype_4_s *, ltedfapeg__ent_adt_t);
        uint8_t (* mptr)(struct ltedfapeg_funtype_4_s *, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_4_s *);
        struct ltedfapeg_funtype_4_s * (* cptr)(struct ltedfapeg_funtype_4_s *);};
typedef struct ltedfapeg_funtype_4_ftbl_s * ltedfapeg_funtype_4_ftbl_t;

struct ltedfapeg_funtype_4_hashentry_s {uint32_t keyhash; ltedfapeg__ent_adt_t key; uint8_t value;}; 
typedef struct ltedfapeg_funtype_4_hashentry_s ltedfapeg_funtype_4_hashentry_t;

struct ltedfapeg_funtype_4_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_4_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_4_htbl_s * ltedfapeg_funtype_4_htbl_t;

struct ltedfapeg_funtype_4_s {uint32_t count;
        ltedfapeg_funtype_4_ftbl_t ftbl;
        ltedfapeg_funtype_4_htbl_t htbl;};
typedef struct ltedfapeg_funtype_4_s * ltedfapeg_funtype_4_t;

extern void release_ltedfapeg_funtype_4(ltedfapeg_funtype_4_t x);

extern ltedfapeg_funtype_4_t copy_ltedfapeg_funtype_4(ltedfapeg_funtype_4_t x);

extern bool_t equal_ltedfapeg_funtype_4(ltedfapeg_funtype_4_t x, ltedfapeg_funtype_4_t y);

extern char* json_ltedfapeg_funtype_4(ltedfapeg_funtype_4_t x);


//reduce_nat

struct ltedfapeg_funtype_5_s;
        typedef struct ltedfapeg_funtype_5_s * ltedfapeg_funtype_5_t;

struct ltedfapeg_funtype_5_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapeg_funtype_5_s *, ltedfapeg__ent_adt_t);
        mpz_ptr_t (* mptr)(struct ltedfapeg_funtype_5_s *, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_5_s *);
        struct ltedfapeg_funtype_5_s * (* cptr)(struct ltedfapeg_funtype_5_s *);};
typedef struct ltedfapeg_funtype_5_ftbl_s * ltedfapeg_funtype_5_ftbl_t;

struct ltedfapeg_funtype_5_hashentry_s {uint32_t keyhash; ltedfapeg__ent_adt_t key; mpz_t value;}; 
typedef struct ltedfapeg_funtype_5_hashentry_s ltedfapeg_funtype_5_hashentry_t;

struct ltedfapeg_funtype_5_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_5_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_5_htbl_s * ltedfapeg_funtype_5_htbl_t;

struct ltedfapeg_funtype_5_s {uint32_t count;
        ltedfapeg_funtype_5_ftbl_t ftbl;
        ltedfapeg_funtype_5_htbl_t htbl;};
typedef struct ltedfapeg_funtype_5_s * ltedfapeg_funtype_5_t;

extern void release_ltedfapeg_funtype_5(ltedfapeg_funtype_5_t x);

extern ltedfapeg_funtype_5_t copy_ltedfapeg_funtype_5(ltedfapeg_funtype_5_t x);

extern bool_t equal_ltedfapeg_funtype_5(ltedfapeg_funtype_5_t x, ltedfapeg_funtype_5_t y);

extern char* json_ltedfapeg_funtype_5(ltedfapeg_funtype_5_t x);


//reduce_nat

struct ltedfapeg_funtype_6_s;
        typedef struct ltedfapeg_funtype_6_s * ltedfapeg_funtype_6_t;

struct ltedfapeg_funtype_6_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapeg_funtype_6_s *, uint64_t);
        mpz_ptr_t (* mptr)(struct ltedfapeg_funtype_6_s *, uint64_t);
        void (* rptr)(struct ltedfapeg_funtype_6_s *);
        struct ltedfapeg_funtype_6_s * (* cptr)(struct ltedfapeg_funtype_6_s *);};
typedef struct ltedfapeg_funtype_6_ftbl_s * ltedfapeg_funtype_6_ftbl_t;

struct ltedfapeg_funtype_6_hashentry_s {uint32_t keyhash; uint64_t key; mpz_t value;}; 
typedef struct ltedfapeg_funtype_6_hashentry_s ltedfapeg_funtype_6_hashentry_t;

struct ltedfapeg_funtype_6_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_6_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_6_htbl_s * ltedfapeg_funtype_6_htbl_t;

struct ltedfapeg_funtype_6_s {uint32_t count;
        ltedfapeg_funtype_6_ftbl_t ftbl;
        ltedfapeg_funtype_6_htbl_t htbl;};
typedef struct ltedfapeg_funtype_6_s * ltedfapeg_funtype_6_t;

extern void release_ltedfapeg_funtype_6(ltedfapeg_funtype_6_t x);

extern ltedfapeg_funtype_6_t copy_ltedfapeg_funtype_6(ltedfapeg_funtype_6_t x);

extern uint32_t lookup_ltedfapeg_funtype_6(ltedfapeg_funtype_6_htbl_t htbl, uint64_t i, uint32_t ihash);

extern ltedfapeg_funtype_6_t dupdate_ltedfapeg_funtype_6(ltedfapeg_funtype_6_t a, uint64_t i, mpz_ptr_t v);

extern ltedfapeg_funtype_6_t update_ltedfapeg_funtype_6(ltedfapeg_funtype_6_t a, uint64_t i, mpz_ptr_t v);

extern bool_t equal_ltedfapeg_funtype_6(ltedfapeg_funtype_6_t x, ltedfapeg_funtype_6_t y);

extern char* json_ltedfapeg_funtype_6(ltedfapeg_funtype_6_t x);


//reduce_nat

struct ltedfapeg_record_7_s {
        uint32_t count; 
        uint64_t project_1;
        uint32_t project_2;};
typedef struct ltedfapeg_record_7_s * ltedfapeg_record_7_t;

extern ltedfapeg_record_7_t new_ltedfapeg_record_7(void);

extern void release_ltedfapeg_record_7(ltedfapeg_record_7_t x);

extern ltedfapeg_record_7_t copy_ltedfapeg_record_7(ltedfapeg_record_7_t x);

extern bool_t equal_ltedfapeg_record_7(ltedfapeg_record_7_t x, ltedfapeg_record_7_t y);
extern char * json_ltedfapeg_record_7(ltedfapeg_record_7_t x);

typedef struct actual_ltedfapeg_record_7_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_record_7_t;
extern void release_ltedfapeg_record_7_ptr(pointer_t x, type_actual_t ltedfapeg_record_7);

extern bool_t equal_ltedfapeg_record_7_ptr(pointer_t x, pointer_t y, actual_ltedfapeg_record_7_t T);

extern char * json_ltedfapeg_record_7_ptr(pointer_t x,  actual_ltedfapeg_record_7_t T);

actual_ltedfapeg_record_7_t actual_ltedfapeg_record_7(void);

extern ltedfapeg_record_7_t update_ltedfapeg_record_7_project_1(ltedfapeg_record_7_t x, uint64_t v);

extern ltedfapeg_record_7_t update_ltedfapeg_record_7_project_2(ltedfapeg_record_7_t x, uint32_t v);


//reduce_nat

struct ltedfapeg_funtype_8_s;
        typedef struct ltedfapeg_funtype_8_s * ltedfapeg_funtype_8_t;

struct ltedfapeg_funtype_8_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapeg_funtype_8_s *, ltedfapeg_record_7_t);
        mpz_ptr_t (* mptr)(struct ltedfapeg_funtype_8_s *, uint64_t, uint32_t);
        void (* rptr)(struct ltedfapeg_funtype_8_s *);
        struct ltedfapeg_funtype_8_s * (* cptr)(struct ltedfapeg_funtype_8_s *);};
typedef struct ltedfapeg_funtype_8_ftbl_s * ltedfapeg_funtype_8_ftbl_t;

struct ltedfapeg_funtype_8_hashentry_s {uint32_t keyhash; ltedfapeg_record_7_t key; mpz_t value;}; 
typedef struct ltedfapeg_funtype_8_hashentry_s ltedfapeg_funtype_8_hashentry_t;

struct ltedfapeg_funtype_8_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_8_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_8_htbl_s * ltedfapeg_funtype_8_htbl_t;

struct ltedfapeg_funtype_8_s {uint32_t count;
        ltedfapeg_funtype_8_ftbl_t ftbl;
        ltedfapeg_funtype_8_htbl_t htbl;};
typedef struct ltedfapeg_funtype_8_s * ltedfapeg_funtype_8_t;

extern void release_ltedfapeg_funtype_8(ltedfapeg_funtype_8_t x);

extern ltedfapeg_funtype_8_t copy_ltedfapeg_funtype_8(ltedfapeg_funtype_8_t x);

extern bool_t equal_ltedfapeg_funtype_8(ltedfapeg_funtype_8_t x, ltedfapeg_funtype_8_t y);

extern char* json_ltedfapeg_funtype_8(ltedfapeg_funtype_8_t x);


//reduce_nat

struct ltedfapeg_record_9_s {
        uint32_t count; 
        uint32_t project_1;
        uint8_t project_2;};
typedef struct ltedfapeg_record_9_s * ltedfapeg_record_9_t;

extern ltedfapeg_record_9_t new_ltedfapeg_record_9(void);

extern void release_ltedfapeg_record_9(ltedfapeg_record_9_t x);

extern ltedfapeg_record_9_t copy_ltedfapeg_record_9(ltedfapeg_record_9_t x);

extern bool_t equal_ltedfapeg_record_9(ltedfapeg_record_9_t x, ltedfapeg_record_9_t y);
extern char * json_ltedfapeg_record_9(ltedfapeg_record_9_t x);

typedef struct actual_ltedfapeg_record_9_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_record_9_t;
extern void release_ltedfapeg_record_9_ptr(pointer_t x, type_actual_t ltedfapeg_record_9);

extern bool_t equal_ltedfapeg_record_9_ptr(pointer_t x, pointer_t y, actual_ltedfapeg_record_9_t T);

extern char * json_ltedfapeg_record_9_ptr(pointer_t x,  actual_ltedfapeg_record_9_t T);

actual_ltedfapeg_record_9_t actual_ltedfapeg_record_9(void);

extern ltedfapeg_record_9_t update_ltedfapeg_record_9_project_1(ltedfapeg_record_9_t x, uint32_t v);

extern ltedfapeg_record_9_t update_ltedfapeg_record_9_project_2(ltedfapeg_record_9_t x, uint8_t v);


//reduce_nat

struct ltedfapeg_funtype_10_s;
        typedef struct ltedfapeg_funtype_10_s * ltedfapeg_funtype_10_t;

struct ltedfapeg_funtype_10_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapeg_funtype_10_s *, ltedfapeg_record_9_t);
        mpz_ptr_t (* mptr)(struct ltedfapeg_funtype_10_s *, uint32_t, uint8_t);
        void (* rptr)(struct ltedfapeg_funtype_10_s *);
        struct ltedfapeg_funtype_10_s * (* cptr)(struct ltedfapeg_funtype_10_s *);};
typedef struct ltedfapeg_funtype_10_ftbl_s * ltedfapeg_funtype_10_ftbl_t;

struct ltedfapeg_funtype_10_hashentry_s {uint32_t keyhash; ltedfapeg_record_9_t key; mpz_t value;}; 
typedef struct ltedfapeg_funtype_10_hashentry_s ltedfapeg_funtype_10_hashentry_t;

struct ltedfapeg_funtype_10_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_10_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_10_htbl_s * ltedfapeg_funtype_10_htbl_t;

struct ltedfapeg_funtype_10_s {uint32_t count;
        ltedfapeg_funtype_10_ftbl_t ftbl;
        ltedfapeg_funtype_10_htbl_t htbl;};
typedef struct ltedfapeg_funtype_10_s * ltedfapeg_funtype_10_t;

extern void release_ltedfapeg_funtype_10(ltedfapeg_funtype_10_t x);

extern ltedfapeg_funtype_10_t copy_ltedfapeg_funtype_10(ltedfapeg_funtype_10_t x);

extern bool_t equal_ltedfapeg_funtype_10(ltedfapeg_funtype_10_t x, ltedfapeg_funtype_10_t y);

extern char* json_ltedfapeg_funtype_10(ltedfapeg_funtype_10_t x);




struct ltedfapeg_closure_11_s;
        typedef struct ltedfapeg_closure_11_s * ltedfapeg_closure_11_t;

struct ltedfapeg_closure_11_s {uint32_t count;
         ltedfapeg_funtype_5_ftbl_t ftbl;
         ltedfapeg_funtype_5_htbl_t htbl;
        ltedfapeg_funtype_8_t fvar_1;
        ltedfapeg_funtype_10_t fvar_2;
        mpz_t fvar_3;
        mpz_t fvar_4;
        ltedfapeg_funtype_6_t fvar_5;};

mpz_ptr_t f_ltedfapeg_closure_11(struct ltedfapeg_closure_11_s * closure, ltedfapeg__ent_adt_t bvar);

mpz_ptr_t m_ltedfapeg_closure_11(struct ltedfapeg_closure_11_s * closure, ltedfapeg__ent_adt_t bvar);

extern mpz_ptr_t h_ltedfapeg_closure_11(ltedfapeg__ent_adt_t ivar_10, ltedfapeg_funtype_8_t ivar_5, ltedfapeg_funtype_10_t ivar_7, mpz_ptr_t ivar_4, mpz_ptr_t ivar_3, ltedfapeg_funtype_6_t ivar_1);

ltedfapeg_closure_11_t new_ltedfapeg_closure_11(void);

void release_ltedfapeg_closure_11(ltedfapeg_funtype_5_t closure);

ltedfapeg_closure_11_t copy_ltedfapeg_closure_11(ltedfapeg_closure_11_t x);


//REDUCE_nat

struct ltedfapeg_record_12_s {
        uint32_t count; 
        uint64_t project_1;
        ltedfapeg__ent_adt_t project_2;};
typedef struct ltedfapeg_record_12_s * ltedfapeg_record_12_t;

extern ltedfapeg_record_12_t new_ltedfapeg_record_12(void);

extern void release_ltedfapeg_record_12(ltedfapeg_record_12_t x);

extern ltedfapeg_record_12_t copy_ltedfapeg_record_12(ltedfapeg_record_12_t x);

extern bool_t equal_ltedfapeg_record_12(ltedfapeg_record_12_t x, ltedfapeg_record_12_t y);
extern char * json_ltedfapeg_record_12(ltedfapeg_record_12_t x);

typedef struct actual_ltedfapeg_record_12_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_record_12_t;
extern void release_ltedfapeg_record_12_ptr(pointer_t x, type_actual_t ltedfapeg_record_12);

extern bool_t equal_ltedfapeg_record_12_ptr(pointer_t x, pointer_t y, actual_ltedfapeg_record_12_t T);

extern char * json_ltedfapeg_record_12_ptr(pointer_t x,  actual_ltedfapeg_record_12_t T);

actual_ltedfapeg_record_12_t actual_ltedfapeg_record_12(void);

extern ltedfapeg_record_12_t update_ltedfapeg_record_12_project_1(ltedfapeg_record_12_t x, uint64_t v);

extern ltedfapeg_record_12_t update_ltedfapeg_record_12_project_2(ltedfapeg_record_12_t x, ltedfapeg__ent_adt_t v);


//REDUCE_nat

struct ltedfapeg_funtype_13_s;
        typedef struct ltedfapeg_funtype_13_s * ltedfapeg_funtype_13_t;

struct ltedfapeg_funtype_13_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapeg_funtype_13_s *, ltedfapeg_record_12_t);
        mpz_ptr_t (* mptr)(struct ltedfapeg_funtype_13_s *, uint64_t, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_13_s *);
        struct ltedfapeg_funtype_13_s * (* cptr)(struct ltedfapeg_funtype_13_s *);};
typedef struct ltedfapeg_funtype_13_ftbl_s * ltedfapeg_funtype_13_ftbl_t;

struct ltedfapeg_funtype_13_hashentry_s {uint32_t keyhash; ltedfapeg_record_12_t key; mpz_t value;}; 
typedef struct ltedfapeg_funtype_13_hashentry_s ltedfapeg_funtype_13_hashentry_t;

struct ltedfapeg_funtype_13_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_13_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_13_htbl_s * ltedfapeg_funtype_13_htbl_t;

struct ltedfapeg_funtype_13_s {uint32_t count;
        ltedfapeg_funtype_13_ftbl_t ftbl;
        ltedfapeg_funtype_13_htbl_t htbl;};
typedef struct ltedfapeg_funtype_13_s * ltedfapeg_funtype_13_t;

extern void release_ltedfapeg_funtype_13(ltedfapeg_funtype_13_t x);

extern ltedfapeg_funtype_13_t copy_ltedfapeg_funtype_13(ltedfapeg_funtype_13_t x);

extern bool_t equal_ltedfapeg_funtype_13(ltedfapeg_funtype_13_t x, ltedfapeg_funtype_13_t y);

extern char* json_ltedfapeg_funtype_13(ltedfapeg_funtype_13_t x);


//REDUCE_nat

struct ltedfapeg_record_14_s {
        uint32_t count; 
        uint64_t project_1;
        uint32_t project_2;
        ltedfapeg__ent_adt_t project_3;};
typedef struct ltedfapeg_record_14_s * ltedfapeg_record_14_t;

extern ltedfapeg_record_14_t new_ltedfapeg_record_14(void);

extern void release_ltedfapeg_record_14(ltedfapeg_record_14_t x);

extern ltedfapeg_record_14_t copy_ltedfapeg_record_14(ltedfapeg_record_14_t x);

extern bool_t equal_ltedfapeg_record_14(ltedfapeg_record_14_t x, ltedfapeg_record_14_t y);
extern char * json_ltedfapeg_record_14(ltedfapeg_record_14_t x);

typedef struct actual_ltedfapeg_record_14_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_record_14_t;
extern void release_ltedfapeg_record_14_ptr(pointer_t x, type_actual_t ltedfapeg_record_14);

extern bool_t equal_ltedfapeg_record_14_ptr(pointer_t x, pointer_t y, actual_ltedfapeg_record_14_t T);

extern char * json_ltedfapeg_record_14_ptr(pointer_t x,  actual_ltedfapeg_record_14_t T);

actual_ltedfapeg_record_14_t actual_ltedfapeg_record_14(void);

extern ltedfapeg_record_14_t update_ltedfapeg_record_14_project_1(ltedfapeg_record_14_t x, uint64_t v);

extern ltedfapeg_record_14_t update_ltedfapeg_record_14_project_2(ltedfapeg_record_14_t x, uint32_t v);

extern ltedfapeg_record_14_t update_ltedfapeg_record_14_project_3(ltedfapeg_record_14_t x, ltedfapeg__ent_adt_t v);


//REDUCE_nat

struct ltedfapeg_funtype_15_s;
        typedef struct ltedfapeg_funtype_15_s * ltedfapeg_funtype_15_t;

struct ltedfapeg_funtype_15_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapeg_funtype_15_s *, ltedfapeg_record_14_t);
        mpz_ptr_t (* mptr)(struct ltedfapeg_funtype_15_s *, uint64_t, uint32_t, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_15_s *);
        struct ltedfapeg_funtype_15_s * (* cptr)(struct ltedfapeg_funtype_15_s *);};
typedef struct ltedfapeg_funtype_15_ftbl_s * ltedfapeg_funtype_15_ftbl_t;

struct ltedfapeg_funtype_15_hashentry_s {uint32_t keyhash; ltedfapeg_record_14_t key; mpz_t value;}; 
typedef struct ltedfapeg_funtype_15_hashentry_s ltedfapeg_funtype_15_hashentry_t;

struct ltedfapeg_funtype_15_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_15_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_15_htbl_s * ltedfapeg_funtype_15_htbl_t;

struct ltedfapeg_funtype_15_s {uint32_t count;
        ltedfapeg_funtype_15_ftbl_t ftbl;
        ltedfapeg_funtype_15_htbl_t htbl;};
typedef struct ltedfapeg_funtype_15_s * ltedfapeg_funtype_15_t;

extern void release_ltedfapeg_funtype_15(ltedfapeg_funtype_15_t x);

extern ltedfapeg_funtype_15_t copy_ltedfapeg_funtype_15(ltedfapeg_funtype_15_t x);

extern bool_t equal_ltedfapeg_funtype_15(ltedfapeg_funtype_15_t x, ltedfapeg_funtype_15_t y);

extern char* json_ltedfapeg_funtype_15(ltedfapeg_funtype_15_t x);


//REDUCE_nat

struct ltedfapeg_record_16_s {
        uint32_t count; 
        uint32_t project_1;
        uint8_t project_2;
        ltedfapeg__ent_adt_t project_3;};
typedef struct ltedfapeg_record_16_s * ltedfapeg_record_16_t;

extern ltedfapeg_record_16_t new_ltedfapeg_record_16(void);

extern void release_ltedfapeg_record_16(ltedfapeg_record_16_t x);

extern ltedfapeg_record_16_t copy_ltedfapeg_record_16(ltedfapeg_record_16_t x);

extern bool_t equal_ltedfapeg_record_16(ltedfapeg_record_16_t x, ltedfapeg_record_16_t y);
extern char * json_ltedfapeg_record_16(ltedfapeg_record_16_t x);

typedef struct actual_ltedfapeg_record_16_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_record_16_t;
extern void release_ltedfapeg_record_16_ptr(pointer_t x, type_actual_t ltedfapeg_record_16);

extern bool_t equal_ltedfapeg_record_16_ptr(pointer_t x, pointer_t y, actual_ltedfapeg_record_16_t T);

extern char * json_ltedfapeg_record_16_ptr(pointer_t x,  actual_ltedfapeg_record_16_t T);

actual_ltedfapeg_record_16_t actual_ltedfapeg_record_16(void);

extern ltedfapeg_record_16_t update_ltedfapeg_record_16_project_1(ltedfapeg_record_16_t x, uint32_t v);

extern ltedfapeg_record_16_t update_ltedfapeg_record_16_project_2(ltedfapeg_record_16_t x, uint8_t v);

extern ltedfapeg_record_16_t update_ltedfapeg_record_16_project_3(ltedfapeg_record_16_t x, ltedfapeg__ent_adt_t v);


//REDUCE_nat

struct ltedfapeg_funtype_17_s;
        typedef struct ltedfapeg_funtype_17_s * ltedfapeg_funtype_17_t;

struct ltedfapeg_funtype_17_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapeg_funtype_17_s *, ltedfapeg_record_16_t);
        mpz_ptr_t (* mptr)(struct ltedfapeg_funtype_17_s *, uint32_t, uint8_t, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_17_s *);
        struct ltedfapeg_funtype_17_s * (* cptr)(struct ltedfapeg_funtype_17_s *);};
typedef struct ltedfapeg_funtype_17_ftbl_s * ltedfapeg_funtype_17_ftbl_t;

struct ltedfapeg_funtype_17_hashentry_s {uint32_t keyhash; ltedfapeg_record_16_t key; mpz_t value;}; 
typedef struct ltedfapeg_funtype_17_hashentry_s ltedfapeg_funtype_17_hashentry_t;

struct ltedfapeg_funtype_17_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_17_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_17_htbl_s * ltedfapeg_funtype_17_htbl_t;

struct ltedfapeg_funtype_17_s {uint32_t count;
        ltedfapeg_funtype_17_ftbl_t ftbl;
        ltedfapeg_funtype_17_htbl_t htbl;};
typedef struct ltedfapeg_funtype_17_s * ltedfapeg_funtype_17_t;

extern void release_ltedfapeg_funtype_17(ltedfapeg_funtype_17_t x);

extern ltedfapeg_funtype_17_t copy_ltedfapeg_funtype_17(ltedfapeg_funtype_17_t x);

extern bool_t equal_ltedfapeg_funtype_17(ltedfapeg_funtype_17_t x, ltedfapeg_funtype_17_t y);

extern char* json_ltedfapeg_funtype_17(ltedfapeg_funtype_17_t x);




struct ltedfapeg_closure_18_s;
        typedef struct ltedfapeg_closure_18_s * ltedfapeg_closure_18_t;

struct ltedfapeg_closure_18_s {uint32_t count;
         ltedfapeg_funtype_5_ftbl_t ftbl;
         ltedfapeg_funtype_5_htbl_t htbl;
        ltedfapeg_funtype_15_t fvar_1;
        ltedfapeg_funtype_17_t fvar_2;
        ltedfapeg_funtype_5_t fvar_3;
        ltedfapeg_funtype_5_t fvar_4;
        ltedfapeg_funtype_13_t fvar_5;};

mpz_ptr_t f_ltedfapeg_closure_18(struct ltedfapeg_closure_18_s * closure, ltedfapeg__ent_adt_t bvar);

mpz_ptr_t m_ltedfapeg_closure_18(struct ltedfapeg_closure_18_s * closure, ltedfapeg__ent_adt_t bvar);

extern mpz_ptr_t h_ltedfapeg_closure_18(ltedfapeg__ent_adt_t ivar_12, ltedfapeg_funtype_15_t ivar_7, ltedfapeg_funtype_17_t ivar_9, ltedfapeg_funtype_5_t ivar_5, ltedfapeg_funtype_5_t ivar_3, ltedfapeg_funtype_13_t ivar_1);

ltedfapeg_closure_18_t new_ltedfapeg_closure_18(void);

void release_ltedfapeg_closure_18(ltedfapeg_funtype_5_t closure);

ltedfapeg_closure_18_t copy_ltedfapeg_closure_18(ltedfapeg_closure_18_t x);


//reduce_ordinal

struct ltedfapeg_funtype_19_s;
        typedef struct ltedfapeg_funtype_19_s * ltedfapeg_funtype_19_t;

struct ltedfapeg_funtype_19_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapeg_funtype_19_s *, ltedfapeg__ent_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapeg_funtype_19_s *, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_19_s *);
        struct ltedfapeg_funtype_19_s * (* cptr)(struct ltedfapeg_funtype_19_s *);};
typedef struct ltedfapeg_funtype_19_ftbl_s * ltedfapeg_funtype_19_ftbl_t;

struct ltedfapeg_funtype_19_hashentry_s {uint32_t keyhash; ltedfapeg__ent_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapeg_funtype_19_hashentry_s ltedfapeg_funtype_19_hashentry_t;

struct ltedfapeg_funtype_19_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_19_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_19_htbl_s * ltedfapeg_funtype_19_htbl_t;

struct ltedfapeg_funtype_19_s {uint32_t count;
        ltedfapeg_funtype_19_ftbl_t ftbl;
        ltedfapeg_funtype_19_htbl_t htbl;};
typedef struct ltedfapeg_funtype_19_s * ltedfapeg_funtype_19_t;

extern void release_ltedfapeg_funtype_19(ltedfapeg_funtype_19_t x);

extern ltedfapeg_funtype_19_t copy_ltedfapeg_funtype_19(ltedfapeg_funtype_19_t x);

extern bool_t equal_ltedfapeg_funtype_19(ltedfapeg_funtype_19_t x, ltedfapeg_funtype_19_t y);

extern char* json_ltedfapeg_funtype_19(ltedfapeg_funtype_19_t x);


//reduce_ordinal

struct ltedfapeg_funtype_20_s;
        typedef struct ltedfapeg_funtype_20_s * ltedfapeg_funtype_20_t;

struct ltedfapeg_funtype_20_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapeg_funtype_20_s *, uint64_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapeg_funtype_20_s *, uint64_t);
        void (* rptr)(struct ltedfapeg_funtype_20_s *);
        struct ltedfapeg_funtype_20_s * (* cptr)(struct ltedfapeg_funtype_20_s *);};
typedef struct ltedfapeg_funtype_20_ftbl_s * ltedfapeg_funtype_20_ftbl_t;

struct ltedfapeg_funtype_20_hashentry_s {uint32_t keyhash; uint64_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapeg_funtype_20_hashentry_s ltedfapeg_funtype_20_hashentry_t;

struct ltedfapeg_funtype_20_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_20_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_20_htbl_s * ltedfapeg_funtype_20_htbl_t;

struct ltedfapeg_funtype_20_s {uint32_t count;
        ltedfapeg_funtype_20_ftbl_t ftbl;
        ltedfapeg_funtype_20_htbl_t htbl;};
typedef struct ltedfapeg_funtype_20_s * ltedfapeg_funtype_20_t;

extern void release_ltedfapeg_funtype_20(ltedfapeg_funtype_20_t x);

extern ltedfapeg_funtype_20_t copy_ltedfapeg_funtype_20(ltedfapeg_funtype_20_t x);

extern uint32_t lookup_ltedfapeg_funtype_20(ltedfapeg_funtype_20_htbl_t htbl, uint64_t i, uint32_t ihash);

extern ltedfapeg_funtype_20_t dupdate_ltedfapeg_funtype_20(ltedfapeg_funtype_20_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v);

extern ltedfapeg_funtype_20_t update_ltedfapeg_funtype_20(ltedfapeg_funtype_20_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v);

extern bool_t equal_ltedfapeg_funtype_20(ltedfapeg_funtype_20_t x, ltedfapeg_funtype_20_t y);

extern char* json_ltedfapeg_funtype_20(ltedfapeg_funtype_20_t x);


//reduce_ordinal

struct ltedfapeg_funtype_21_s;
        typedef struct ltedfapeg_funtype_21_s * ltedfapeg_funtype_21_t;

struct ltedfapeg_funtype_21_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapeg_funtype_21_s *, ltedfapeg_record_7_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapeg_funtype_21_s *, uint64_t, uint32_t);
        void (* rptr)(struct ltedfapeg_funtype_21_s *);
        struct ltedfapeg_funtype_21_s * (* cptr)(struct ltedfapeg_funtype_21_s *);};
typedef struct ltedfapeg_funtype_21_ftbl_s * ltedfapeg_funtype_21_ftbl_t;

struct ltedfapeg_funtype_21_hashentry_s {uint32_t keyhash; ltedfapeg_record_7_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapeg_funtype_21_hashentry_s ltedfapeg_funtype_21_hashentry_t;

struct ltedfapeg_funtype_21_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_21_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_21_htbl_s * ltedfapeg_funtype_21_htbl_t;

struct ltedfapeg_funtype_21_s {uint32_t count;
        ltedfapeg_funtype_21_ftbl_t ftbl;
        ltedfapeg_funtype_21_htbl_t htbl;};
typedef struct ltedfapeg_funtype_21_s * ltedfapeg_funtype_21_t;

extern void release_ltedfapeg_funtype_21(ltedfapeg_funtype_21_t x);

extern ltedfapeg_funtype_21_t copy_ltedfapeg_funtype_21(ltedfapeg_funtype_21_t x);

extern bool_t equal_ltedfapeg_funtype_21(ltedfapeg_funtype_21_t x, ltedfapeg_funtype_21_t y);

extern char* json_ltedfapeg_funtype_21(ltedfapeg_funtype_21_t x);


//reduce_ordinal

struct ltedfapeg_funtype_22_s;
        typedef struct ltedfapeg_funtype_22_s * ltedfapeg_funtype_22_t;

struct ltedfapeg_funtype_22_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapeg_funtype_22_s *, ltedfapeg_record_9_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapeg_funtype_22_s *, uint32_t, uint8_t);
        void (* rptr)(struct ltedfapeg_funtype_22_s *);
        struct ltedfapeg_funtype_22_s * (* cptr)(struct ltedfapeg_funtype_22_s *);};
typedef struct ltedfapeg_funtype_22_ftbl_s * ltedfapeg_funtype_22_ftbl_t;

struct ltedfapeg_funtype_22_hashentry_s {uint32_t keyhash; ltedfapeg_record_9_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapeg_funtype_22_hashentry_s ltedfapeg_funtype_22_hashentry_t;

struct ltedfapeg_funtype_22_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_22_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_22_htbl_s * ltedfapeg_funtype_22_htbl_t;

struct ltedfapeg_funtype_22_s {uint32_t count;
        ltedfapeg_funtype_22_ftbl_t ftbl;
        ltedfapeg_funtype_22_htbl_t htbl;};
typedef struct ltedfapeg_funtype_22_s * ltedfapeg_funtype_22_t;

extern void release_ltedfapeg_funtype_22(ltedfapeg_funtype_22_t x);

extern ltedfapeg_funtype_22_t copy_ltedfapeg_funtype_22(ltedfapeg_funtype_22_t x);

extern bool_t equal_ltedfapeg_funtype_22(ltedfapeg_funtype_22_t x, ltedfapeg_funtype_22_t y);

extern char* json_ltedfapeg_funtype_22(ltedfapeg_funtype_22_t x);




struct ltedfapeg_closure_23_s;
        typedef struct ltedfapeg_closure_23_s * ltedfapeg_closure_23_t;

struct ltedfapeg_closure_23_s {uint32_t count;
         ltedfapeg_funtype_19_ftbl_t ftbl;
         ltedfapeg_funtype_19_htbl_t htbl;
        ltedfapeg_funtype_21_t fvar_1;
        ltedfapeg_funtype_22_t fvar_2;
        ordstruct_adt__ordstruct_adt_t fvar_3;
        ordstruct_adt__ordstruct_adt_t fvar_4;
        ltedfapeg_funtype_20_t fvar_5;};

ordstruct_adt__ordstruct_adt_t f_ltedfapeg_closure_23(struct ltedfapeg_closure_23_s * closure, ltedfapeg__ent_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltedfapeg_closure_23(struct ltedfapeg_closure_23_s * closure, ltedfapeg__ent_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltedfapeg_closure_23(ltedfapeg__ent_adt_t ivar_10, ltedfapeg_funtype_21_t ivar_5, ltedfapeg_funtype_22_t ivar_7, ordstruct_adt__ordstruct_adt_t ivar_4, ordstruct_adt__ordstruct_adt_t ivar_3, ltedfapeg_funtype_20_t ivar_1);

ltedfapeg_closure_23_t new_ltedfapeg_closure_23(void);

void release_ltedfapeg_closure_23(ltedfapeg_funtype_19_t closure);

ltedfapeg_closure_23_t copy_ltedfapeg_closure_23(ltedfapeg_closure_23_t x);


//REDUCE_ordinal

struct ltedfapeg_funtype_24_s;
        typedef struct ltedfapeg_funtype_24_s * ltedfapeg_funtype_24_t;

struct ltedfapeg_funtype_24_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapeg_funtype_24_s *, ltedfapeg_record_12_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapeg_funtype_24_s *, uint64_t, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_24_s *);
        struct ltedfapeg_funtype_24_s * (* cptr)(struct ltedfapeg_funtype_24_s *);};
typedef struct ltedfapeg_funtype_24_ftbl_s * ltedfapeg_funtype_24_ftbl_t;

struct ltedfapeg_funtype_24_hashentry_s {uint32_t keyhash; ltedfapeg_record_12_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapeg_funtype_24_hashentry_s ltedfapeg_funtype_24_hashentry_t;

struct ltedfapeg_funtype_24_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_24_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_24_htbl_s * ltedfapeg_funtype_24_htbl_t;

struct ltedfapeg_funtype_24_s {uint32_t count;
        ltedfapeg_funtype_24_ftbl_t ftbl;
        ltedfapeg_funtype_24_htbl_t htbl;};
typedef struct ltedfapeg_funtype_24_s * ltedfapeg_funtype_24_t;

extern void release_ltedfapeg_funtype_24(ltedfapeg_funtype_24_t x);

extern ltedfapeg_funtype_24_t copy_ltedfapeg_funtype_24(ltedfapeg_funtype_24_t x);

extern bool_t equal_ltedfapeg_funtype_24(ltedfapeg_funtype_24_t x, ltedfapeg_funtype_24_t y);

extern char* json_ltedfapeg_funtype_24(ltedfapeg_funtype_24_t x);


//REDUCE_ordinal

struct ltedfapeg_funtype_25_s;
        typedef struct ltedfapeg_funtype_25_s * ltedfapeg_funtype_25_t;

struct ltedfapeg_funtype_25_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapeg_funtype_25_s *, ltedfapeg_record_14_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapeg_funtype_25_s *, uint64_t, uint32_t, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_25_s *);
        struct ltedfapeg_funtype_25_s * (* cptr)(struct ltedfapeg_funtype_25_s *);};
typedef struct ltedfapeg_funtype_25_ftbl_s * ltedfapeg_funtype_25_ftbl_t;

struct ltedfapeg_funtype_25_hashentry_s {uint32_t keyhash; ltedfapeg_record_14_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapeg_funtype_25_hashentry_s ltedfapeg_funtype_25_hashentry_t;

struct ltedfapeg_funtype_25_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_25_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_25_htbl_s * ltedfapeg_funtype_25_htbl_t;

struct ltedfapeg_funtype_25_s {uint32_t count;
        ltedfapeg_funtype_25_ftbl_t ftbl;
        ltedfapeg_funtype_25_htbl_t htbl;};
typedef struct ltedfapeg_funtype_25_s * ltedfapeg_funtype_25_t;

extern void release_ltedfapeg_funtype_25(ltedfapeg_funtype_25_t x);

extern ltedfapeg_funtype_25_t copy_ltedfapeg_funtype_25(ltedfapeg_funtype_25_t x);

extern bool_t equal_ltedfapeg_funtype_25(ltedfapeg_funtype_25_t x, ltedfapeg_funtype_25_t y);

extern char* json_ltedfapeg_funtype_25(ltedfapeg_funtype_25_t x);


//REDUCE_ordinal

struct ltedfapeg_funtype_26_s;
        typedef struct ltedfapeg_funtype_26_s * ltedfapeg_funtype_26_t;

struct ltedfapeg_funtype_26_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapeg_funtype_26_s *, ltedfapeg_record_16_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapeg_funtype_26_s *, uint32_t, uint8_t, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_26_s *);
        struct ltedfapeg_funtype_26_s * (* cptr)(struct ltedfapeg_funtype_26_s *);};
typedef struct ltedfapeg_funtype_26_ftbl_s * ltedfapeg_funtype_26_ftbl_t;

struct ltedfapeg_funtype_26_hashentry_s {uint32_t keyhash; ltedfapeg_record_16_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapeg_funtype_26_hashentry_s ltedfapeg_funtype_26_hashentry_t;

struct ltedfapeg_funtype_26_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_26_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_26_htbl_s * ltedfapeg_funtype_26_htbl_t;

struct ltedfapeg_funtype_26_s {uint32_t count;
        ltedfapeg_funtype_26_ftbl_t ftbl;
        ltedfapeg_funtype_26_htbl_t htbl;};
typedef struct ltedfapeg_funtype_26_s * ltedfapeg_funtype_26_t;

extern void release_ltedfapeg_funtype_26(ltedfapeg_funtype_26_t x);

extern ltedfapeg_funtype_26_t copy_ltedfapeg_funtype_26(ltedfapeg_funtype_26_t x);

extern bool_t equal_ltedfapeg_funtype_26(ltedfapeg_funtype_26_t x, ltedfapeg_funtype_26_t y);

extern char* json_ltedfapeg_funtype_26(ltedfapeg_funtype_26_t x);




struct ltedfapeg_closure_27_s;
        typedef struct ltedfapeg_closure_27_s * ltedfapeg_closure_27_t;

struct ltedfapeg_closure_27_s {uint32_t count;
         ltedfapeg_funtype_19_ftbl_t ftbl;
         ltedfapeg_funtype_19_htbl_t htbl;
        ltedfapeg_funtype_25_t fvar_1;
        ltedfapeg_funtype_26_t fvar_2;
        ltedfapeg_funtype_19_t fvar_3;
        ltedfapeg_funtype_19_t fvar_4;
        ltedfapeg_funtype_24_t fvar_5;};

ordstruct_adt__ordstruct_adt_t f_ltedfapeg_closure_27(struct ltedfapeg_closure_27_s * closure, ltedfapeg__ent_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltedfapeg_closure_27(struct ltedfapeg_closure_27_s * closure, ltedfapeg__ent_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltedfapeg_closure_27(ltedfapeg__ent_adt_t ivar_12, ltedfapeg_funtype_25_t ivar_7, ltedfapeg_funtype_26_t ivar_9, ltedfapeg_funtype_19_t ivar_5, ltedfapeg_funtype_19_t ivar_3, ltedfapeg_funtype_24_t ivar_1);

ltedfapeg_closure_27_t new_ltedfapeg_closure_27(void);

void release_ltedfapeg_closure_27(ltedfapeg_funtype_19_t closure);

ltedfapeg_closure_27_t copy_ltedfapeg_closure_27(ltedfapeg_closure_27_t x);


//prepeg

struct ltedfapeg__prepeg_adt_s {
         uint32_t count; 
        uint8_t ltedfapeg__prepeg_adt_index;};
typedef struct ltedfapeg__prepeg_adt_s * ltedfapeg__prepeg_adt_t;

extern ltedfapeg__prepeg_adt_t new_ltedfapeg__prepeg_adt(void);

extern void release_ltedfapeg__prepeg_adt(ltedfapeg__prepeg_adt_t x);

extern ltedfapeg__prepeg_adt_t copy_ltedfapeg__prepeg_adt(ltedfapeg__prepeg_adt_t x);

extern bool_t equal_ltedfapeg__prepeg_adt(ltedfapeg__prepeg_adt_t x, ltedfapeg__prepeg_adt_t y);
extern char * json_ltedfapeg__prepeg_adt(ltedfapeg__prepeg_adt_t x);

typedef struct actual_ltedfapeg__prepeg_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg__prepeg_adt_t;
extern void release_ltedfapeg__prepeg_adt_ptr(pointer_t x, type_actual_t ltedfapeg__prepeg_adt);

extern bool_t equal_ltedfapeg__prepeg_adt_ptr(pointer_t x, pointer_t y, actual_ltedfapeg__prepeg_adt_t T);

extern char * json_ltedfapeg__prepeg_adt_ptr(pointer_t x,  actual_ltedfapeg__prepeg_adt_t T);

actual_ltedfapeg__prepeg_adt_t actual_ltedfapeg__prepeg_adt(void);

extern ltedfapeg__prepeg_adt_t update_ltedfapeg__prepeg_adt_ltedfapeg__prepeg_adt_index(ltedfapeg__prepeg_adt_t x, uint8_t v);


//any

struct ltedfapeg__any_s {
        uint32_t count; 
        uint8_t ltedfapeg__prepeg_adt_index;
        dfa__dfa_t dfa;};
typedef struct ltedfapeg__any_s * ltedfapeg__any_t;

extern ltedfapeg__any_t new_ltedfapeg__any(void);

extern void release_ltedfapeg__any(ltedfapeg__any_t x);

extern ltedfapeg__any_t copy_ltedfapeg__any(ltedfapeg__any_t x);

extern bool_t equal_ltedfapeg__any(ltedfapeg__any_t x, ltedfapeg__any_t y);
extern char * json_ltedfapeg__any(ltedfapeg__any_t x);

typedef struct actual_ltedfapeg__any_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg__any_t;
extern void release_ltedfapeg__any_ptr(pointer_t x, type_actual_t ltedfapeg__any);

extern bool_t equal_ltedfapeg__any_ptr(pointer_t x, pointer_t y, actual_ltedfapeg__any_t T);

extern char * json_ltedfapeg__any_ptr(pointer_t x,  actual_ltedfapeg__any_t T);

actual_ltedfapeg__any_t actual_ltedfapeg__any(void);

extern ltedfapeg__any_t update_ltedfapeg__any_ltedfapeg__prepeg_adt_index(ltedfapeg__any_t x, uint8_t v);

extern ltedfapeg__any_t update_ltedfapeg__any_dfa(ltedfapeg__any_t x, dfa__dfa_t v);


//terminal

struct ltedfapeg__terminal_s {
        uint32_t count; 
        uint8_t ltedfapeg__prepeg_adt_index;
        uint8_t a;};
typedef struct ltedfapeg__terminal_s * ltedfapeg__terminal_t;

extern ltedfapeg__terminal_t new_ltedfapeg__terminal(void);

extern void release_ltedfapeg__terminal(ltedfapeg__terminal_t x);

extern ltedfapeg__terminal_t copy_ltedfapeg__terminal(ltedfapeg__terminal_t x);

extern bool_t equal_ltedfapeg__terminal(ltedfapeg__terminal_t x, ltedfapeg__terminal_t y);
extern char * json_ltedfapeg__terminal(ltedfapeg__terminal_t x);

typedef struct actual_ltedfapeg__terminal_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg__terminal_t;
extern void release_ltedfapeg__terminal_ptr(pointer_t x, type_actual_t ltedfapeg__terminal);

extern bool_t equal_ltedfapeg__terminal_ptr(pointer_t x, pointer_t y, actual_ltedfapeg__terminal_t T);

extern char * json_ltedfapeg__terminal_ptr(pointer_t x,  actual_ltedfapeg__terminal_t T);

actual_ltedfapeg__terminal_t actual_ltedfapeg__terminal(void);

extern ltedfapeg__terminal_t update_ltedfapeg__terminal_ltedfapeg__prepeg_adt_index(ltedfapeg__terminal_t x, uint8_t v);

extern ltedfapeg__terminal_t update_ltedfapeg__terminal_a(ltedfapeg__terminal_t x, uint8_t v);


//lte

struct ltedfapeg__lte_s {
        uint32_t count; 
        uint8_t ltedfapeg__prepeg_adt_index;
        uint8_t fst;
        uint8_t lthen;
        uint8_t lelse;};
typedef struct ltedfapeg__lte_s * ltedfapeg__lte_t;

extern ltedfapeg__lte_t new_ltedfapeg__lte(void);

extern void release_ltedfapeg__lte(ltedfapeg__lte_t x);

extern ltedfapeg__lte_t copy_ltedfapeg__lte(ltedfapeg__lte_t x);

extern bool_t equal_ltedfapeg__lte(ltedfapeg__lte_t x, ltedfapeg__lte_t y);
extern char * json_ltedfapeg__lte(ltedfapeg__lte_t x);

typedef struct actual_ltedfapeg__lte_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg__lte_t;
extern void release_ltedfapeg__lte_ptr(pointer_t x, type_actual_t ltedfapeg__lte);

extern bool_t equal_ltedfapeg__lte_ptr(pointer_t x, pointer_t y, actual_ltedfapeg__lte_t T);

extern char * json_ltedfapeg__lte_ptr(pointer_t x,  actual_ltedfapeg__lte_t T);

actual_ltedfapeg__lte_t actual_ltedfapeg__lte(void);

extern ltedfapeg__lte_t update_ltedfapeg__lte_ltedfapeg__prepeg_adt_index(ltedfapeg__lte_t x, uint8_t v);

extern ltedfapeg__lte_t update_ltedfapeg__lte_fst(ltedfapeg__lte_t x, uint8_t v);

extern ltedfapeg__lte_t update_ltedfapeg__lte_lthen(ltedfapeg__lte_t x, uint8_t v);

extern ltedfapeg__lte_t update_ltedfapeg__lte_lelse(ltedfapeg__lte_t x, uint8_t v);


//prepeg_ord

struct ltedfapeg_funtype_32_s;
        typedef struct ltedfapeg_funtype_32_s * ltedfapeg_funtype_32_t;

struct ltedfapeg_funtype_32_ftbl_s {uint8_t (* fptr)(struct ltedfapeg_funtype_32_s *, ltedfapeg__prepeg_adt_t);
        uint8_t (* mptr)(struct ltedfapeg_funtype_32_s *, ltedfapeg__prepeg_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_32_s *);
        struct ltedfapeg_funtype_32_s * (* cptr)(struct ltedfapeg_funtype_32_s *);};
typedef struct ltedfapeg_funtype_32_ftbl_s * ltedfapeg_funtype_32_ftbl_t;

struct ltedfapeg_funtype_32_hashentry_s {uint32_t keyhash; ltedfapeg__prepeg_adt_t key; uint8_t value;}; 
typedef struct ltedfapeg_funtype_32_hashentry_s ltedfapeg_funtype_32_hashentry_t;

struct ltedfapeg_funtype_32_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_32_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_32_htbl_s * ltedfapeg_funtype_32_htbl_t;

struct ltedfapeg_funtype_32_s {uint32_t count;
        ltedfapeg_funtype_32_ftbl_t ftbl;
        ltedfapeg_funtype_32_htbl_t htbl;};
typedef struct ltedfapeg_funtype_32_s * ltedfapeg_funtype_32_t;

extern void release_ltedfapeg_funtype_32(ltedfapeg_funtype_32_t x);

extern ltedfapeg_funtype_32_t copy_ltedfapeg_funtype_32(ltedfapeg_funtype_32_t x);

extern bool_t equal_ltedfapeg_funtype_32(ltedfapeg_funtype_32_t x, ltedfapeg_funtype_32_t y);

extern char* json_ltedfapeg_funtype_32(ltedfapeg_funtype_32_t x);


//reduce_nat

struct ltedfapeg_funtype_33_s;
        typedef struct ltedfapeg_funtype_33_s * ltedfapeg_funtype_33_t;

struct ltedfapeg_funtype_33_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapeg_funtype_33_s *, ltedfapeg__prepeg_adt_t);
        mpz_ptr_t (* mptr)(struct ltedfapeg_funtype_33_s *, ltedfapeg__prepeg_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_33_s *);
        struct ltedfapeg_funtype_33_s * (* cptr)(struct ltedfapeg_funtype_33_s *);};
typedef struct ltedfapeg_funtype_33_ftbl_s * ltedfapeg_funtype_33_ftbl_t;

struct ltedfapeg_funtype_33_hashentry_s {uint32_t keyhash; ltedfapeg__prepeg_adt_t key; mpz_t value;}; 
typedef struct ltedfapeg_funtype_33_hashentry_s ltedfapeg_funtype_33_hashentry_t;

struct ltedfapeg_funtype_33_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_33_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_33_htbl_s * ltedfapeg_funtype_33_htbl_t;

struct ltedfapeg_funtype_33_s {uint32_t count;
        ltedfapeg_funtype_33_ftbl_t ftbl;
        ltedfapeg_funtype_33_htbl_t htbl;};
typedef struct ltedfapeg_funtype_33_s * ltedfapeg_funtype_33_t;

extern void release_ltedfapeg_funtype_33(ltedfapeg_funtype_33_t x);

extern ltedfapeg_funtype_33_t copy_ltedfapeg_funtype_33(ltedfapeg_funtype_33_t x);

extern bool_t equal_ltedfapeg_funtype_33(ltedfapeg_funtype_33_t x, ltedfapeg_funtype_33_t y);

extern char* json_ltedfapeg_funtype_33(ltedfapeg_funtype_33_t x);


//reduce_nat

struct ltedfapeg_funtype_34_s;
        typedef struct ltedfapeg_funtype_34_s * ltedfapeg_funtype_34_t;

struct ltedfapeg_funtype_34_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapeg_funtype_34_s *, dfa__dfa_t);
        mpz_ptr_t (* mptr)(struct ltedfapeg_funtype_34_s *, dfa__dfa_t);
        void (* rptr)(struct ltedfapeg_funtype_34_s *);
        struct ltedfapeg_funtype_34_s * (* cptr)(struct ltedfapeg_funtype_34_s *);};
typedef struct ltedfapeg_funtype_34_ftbl_s * ltedfapeg_funtype_34_ftbl_t;

struct ltedfapeg_funtype_34_hashentry_s {uint32_t keyhash; dfa__dfa_t key; mpz_t value;}; 
typedef struct ltedfapeg_funtype_34_hashentry_s ltedfapeg_funtype_34_hashentry_t;

struct ltedfapeg_funtype_34_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_34_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_34_htbl_s * ltedfapeg_funtype_34_htbl_t;

struct ltedfapeg_funtype_34_s {uint32_t count;
        ltedfapeg_funtype_34_ftbl_t ftbl;
        ltedfapeg_funtype_34_htbl_t htbl;};
typedef struct ltedfapeg_funtype_34_s * ltedfapeg_funtype_34_t;

extern void release_ltedfapeg_funtype_34(ltedfapeg_funtype_34_t x);

extern ltedfapeg_funtype_34_t copy_ltedfapeg_funtype_34(ltedfapeg_funtype_34_t x);

extern bool_t equal_ltedfapeg_funtype_34(ltedfapeg_funtype_34_t x, ltedfapeg_funtype_34_t y);

extern char* json_ltedfapeg_funtype_34(ltedfapeg_funtype_34_t x);


//reduce_nat

struct ltedfapeg_funtype_35_s;
        typedef struct ltedfapeg_funtype_35_s * ltedfapeg_funtype_35_t;

struct ltedfapeg_funtype_35_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapeg_funtype_35_s *, uint8_t);
        mpz_ptr_t (* mptr)(struct ltedfapeg_funtype_35_s *, uint8_t);
        void (* rptr)(struct ltedfapeg_funtype_35_s *);
        struct ltedfapeg_funtype_35_s * (* cptr)(struct ltedfapeg_funtype_35_s *);};
typedef struct ltedfapeg_funtype_35_ftbl_s * ltedfapeg_funtype_35_ftbl_t;

struct ltedfapeg_funtype_35_hashentry_s {uint32_t keyhash; uint8_t key; mpz_t value;}; 
typedef struct ltedfapeg_funtype_35_hashentry_s ltedfapeg_funtype_35_hashentry_t;

struct ltedfapeg_funtype_35_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_35_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_35_htbl_s * ltedfapeg_funtype_35_htbl_t;

struct ltedfapeg_funtype_35_s {uint32_t count;
        ltedfapeg_funtype_35_ftbl_t ftbl;
        ltedfapeg_funtype_35_htbl_t htbl;};
typedef struct ltedfapeg_funtype_35_s * ltedfapeg_funtype_35_t;

extern void release_ltedfapeg_funtype_35(ltedfapeg_funtype_35_t x);

extern ltedfapeg_funtype_35_t copy_ltedfapeg_funtype_35(ltedfapeg_funtype_35_t x);

extern uint32_t lookup_ltedfapeg_funtype_35(ltedfapeg_funtype_35_htbl_t htbl, uint8_t i, uint32_t ihash);

extern ltedfapeg_funtype_35_t dupdate_ltedfapeg_funtype_35(ltedfapeg_funtype_35_t a, uint8_t i, mpz_ptr_t v);

extern ltedfapeg_funtype_35_t update_ltedfapeg_funtype_35(ltedfapeg_funtype_35_t a, uint8_t i, mpz_ptr_t v);

extern bool_t equal_ltedfapeg_funtype_35(ltedfapeg_funtype_35_t x, ltedfapeg_funtype_35_t y);

extern char* json_ltedfapeg_funtype_35(ltedfapeg_funtype_35_t x);


//reduce_nat

struct ltedfapeg_record_36_s {
        uint32_t count; 
        uint8_t project_1;
        uint8_t project_2;
        uint8_t project_3;};
typedef struct ltedfapeg_record_36_s * ltedfapeg_record_36_t;

extern ltedfapeg_record_36_t new_ltedfapeg_record_36(void);

extern void release_ltedfapeg_record_36(ltedfapeg_record_36_t x);

extern ltedfapeg_record_36_t copy_ltedfapeg_record_36(ltedfapeg_record_36_t x);

extern bool_t equal_ltedfapeg_record_36(ltedfapeg_record_36_t x, ltedfapeg_record_36_t y);
extern char * json_ltedfapeg_record_36(ltedfapeg_record_36_t x);

typedef struct actual_ltedfapeg_record_36_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_record_36_t;
extern void release_ltedfapeg_record_36_ptr(pointer_t x, type_actual_t ltedfapeg_record_36);

extern bool_t equal_ltedfapeg_record_36_ptr(pointer_t x, pointer_t y, actual_ltedfapeg_record_36_t T);

extern char * json_ltedfapeg_record_36_ptr(pointer_t x,  actual_ltedfapeg_record_36_t T);

actual_ltedfapeg_record_36_t actual_ltedfapeg_record_36(void);

extern ltedfapeg_record_36_t update_ltedfapeg_record_36_project_1(ltedfapeg_record_36_t x, uint8_t v);

extern ltedfapeg_record_36_t update_ltedfapeg_record_36_project_2(ltedfapeg_record_36_t x, uint8_t v);

extern ltedfapeg_record_36_t update_ltedfapeg_record_36_project_3(ltedfapeg_record_36_t x, uint8_t v);


//reduce_nat

struct ltedfapeg_funtype_37_s;
        typedef struct ltedfapeg_funtype_37_s * ltedfapeg_funtype_37_t;

struct ltedfapeg_funtype_37_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapeg_funtype_37_s *, ltedfapeg_record_36_t);
        mpz_ptr_t (* mptr)(struct ltedfapeg_funtype_37_s *, uint8_t, uint8_t, uint8_t);
        void (* rptr)(struct ltedfapeg_funtype_37_s *);
        struct ltedfapeg_funtype_37_s * (* cptr)(struct ltedfapeg_funtype_37_s *);};
typedef struct ltedfapeg_funtype_37_ftbl_s * ltedfapeg_funtype_37_ftbl_t;

struct ltedfapeg_funtype_37_hashentry_s {uint32_t keyhash; ltedfapeg_record_36_t key; mpz_t value;}; 
typedef struct ltedfapeg_funtype_37_hashentry_s ltedfapeg_funtype_37_hashentry_t;

struct ltedfapeg_funtype_37_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_37_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_37_htbl_s * ltedfapeg_funtype_37_htbl_t;

struct ltedfapeg_funtype_37_s {uint32_t count;
        ltedfapeg_funtype_37_ftbl_t ftbl;
        ltedfapeg_funtype_37_htbl_t htbl;};
typedef struct ltedfapeg_funtype_37_s * ltedfapeg_funtype_37_t;

extern void release_ltedfapeg_funtype_37(ltedfapeg_funtype_37_t x);

extern ltedfapeg_funtype_37_t copy_ltedfapeg_funtype_37(ltedfapeg_funtype_37_t x);

extern bool_t equal_ltedfapeg_funtype_37(ltedfapeg_funtype_37_t x, ltedfapeg_funtype_37_t y);

extern char* json_ltedfapeg_funtype_37(ltedfapeg_funtype_37_t x);




struct ltedfapeg_closure_38_s;
        typedef struct ltedfapeg_closure_38_s * ltedfapeg_closure_38_t;

struct ltedfapeg_closure_38_s {uint32_t count;
         ltedfapeg_funtype_33_ftbl_t ftbl;
         ltedfapeg_funtype_33_htbl_t htbl;
        ltedfapeg_funtype_35_t fvar_1;
        ltedfapeg_funtype_37_t fvar_2;
        ltedfapeg_funtype_34_t fvar_3;
        mpz_t fvar_4;
        mpz_t fvar_5;};

mpz_ptr_t f_ltedfapeg_closure_38(struct ltedfapeg_closure_38_s * closure, ltedfapeg__prepeg_adt_t bvar);

mpz_ptr_t m_ltedfapeg_closure_38(struct ltedfapeg_closure_38_s * closure, ltedfapeg__prepeg_adt_t bvar);

extern mpz_ptr_t h_ltedfapeg_closure_38(ltedfapeg__prepeg_adt_t ivar_10, ltedfapeg_funtype_35_t ivar_5, ltedfapeg_funtype_37_t ivar_7, ltedfapeg_funtype_34_t ivar_3, mpz_ptr_t ivar_2, mpz_ptr_t ivar_1);

ltedfapeg_closure_38_t new_ltedfapeg_closure_38(void);

void release_ltedfapeg_closure_38(ltedfapeg_funtype_33_t closure);

ltedfapeg_closure_38_t copy_ltedfapeg_closure_38(ltedfapeg_closure_38_t x);


//REDUCE_nat

struct ltedfapeg_record_39_s {
        uint32_t count; 
        dfa__dfa_t project_1;
        ltedfapeg__prepeg_adt_t project_2;};
typedef struct ltedfapeg_record_39_s * ltedfapeg_record_39_t;

extern ltedfapeg_record_39_t new_ltedfapeg_record_39(void);

extern void release_ltedfapeg_record_39(ltedfapeg_record_39_t x);

extern ltedfapeg_record_39_t copy_ltedfapeg_record_39(ltedfapeg_record_39_t x);

extern bool_t equal_ltedfapeg_record_39(ltedfapeg_record_39_t x, ltedfapeg_record_39_t y);
extern char * json_ltedfapeg_record_39(ltedfapeg_record_39_t x);

typedef struct actual_ltedfapeg_record_39_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_record_39_t;
extern void release_ltedfapeg_record_39_ptr(pointer_t x, type_actual_t ltedfapeg_record_39);

extern bool_t equal_ltedfapeg_record_39_ptr(pointer_t x, pointer_t y, actual_ltedfapeg_record_39_t T);

extern char * json_ltedfapeg_record_39_ptr(pointer_t x,  actual_ltedfapeg_record_39_t T);

actual_ltedfapeg_record_39_t actual_ltedfapeg_record_39(void);

extern ltedfapeg_record_39_t update_ltedfapeg_record_39_project_1(ltedfapeg_record_39_t x, dfa__dfa_t v);

extern ltedfapeg_record_39_t update_ltedfapeg_record_39_project_2(ltedfapeg_record_39_t x, ltedfapeg__prepeg_adt_t v);


//REDUCE_nat

struct ltedfapeg_funtype_40_s;
        typedef struct ltedfapeg_funtype_40_s * ltedfapeg_funtype_40_t;

struct ltedfapeg_funtype_40_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapeg_funtype_40_s *, ltedfapeg_record_39_t);
        mpz_ptr_t (* mptr)(struct ltedfapeg_funtype_40_s *, dfa__dfa_t, ltedfapeg__prepeg_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_40_s *);
        struct ltedfapeg_funtype_40_s * (* cptr)(struct ltedfapeg_funtype_40_s *);};
typedef struct ltedfapeg_funtype_40_ftbl_s * ltedfapeg_funtype_40_ftbl_t;

struct ltedfapeg_funtype_40_hashentry_s {uint32_t keyhash; ltedfapeg_record_39_t key; mpz_t value;}; 
typedef struct ltedfapeg_funtype_40_hashentry_s ltedfapeg_funtype_40_hashentry_t;

struct ltedfapeg_funtype_40_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_40_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_40_htbl_s * ltedfapeg_funtype_40_htbl_t;

struct ltedfapeg_funtype_40_s {uint32_t count;
        ltedfapeg_funtype_40_ftbl_t ftbl;
        ltedfapeg_funtype_40_htbl_t htbl;};
typedef struct ltedfapeg_funtype_40_s * ltedfapeg_funtype_40_t;

extern void release_ltedfapeg_funtype_40(ltedfapeg_funtype_40_t x);

extern ltedfapeg_funtype_40_t copy_ltedfapeg_funtype_40(ltedfapeg_funtype_40_t x);

extern bool_t equal_ltedfapeg_funtype_40(ltedfapeg_funtype_40_t x, ltedfapeg_funtype_40_t y);

extern char* json_ltedfapeg_funtype_40(ltedfapeg_funtype_40_t x);


//REDUCE_nat

struct ltedfapeg_record_41_s {
        uint32_t count; 
        uint8_t project_1;
        ltedfapeg__prepeg_adt_t project_2;};
typedef struct ltedfapeg_record_41_s * ltedfapeg_record_41_t;

extern ltedfapeg_record_41_t new_ltedfapeg_record_41(void);

extern void release_ltedfapeg_record_41(ltedfapeg_record_41_t x);

extern ltedfapeg_record_41_t copy_ltedfapeg_record_41(ltedfapeg_record_41_t x);

extern bool_t equal_ltedfapeg_record_41(ltedfapeg_record_41_t x, ltedfapeg_record_41_t y);
extern char * json_ltedfapeg_record_41(ltedfapeg_record_41_t x);

typedef struct actual_ltedfapeg_record_41_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_record_41_t;
extern void release_ltedfapeg_record_41_ptr(pointer_t x, type_actual_t ltedfapeg_record_41);

extern bool_t equal_ltedfapeg_record_41_ptr(pointer_t x, pointer_t y, actual_ltedfapeg_record_41_t T);

extern char * json_ltedfapeg_record_41_ptr(pointer_t x,  actual_ltedfapeg_record_41_t T);

actual_ltedfapeg_record_41_t actual_ltedfapeg_record_41(void);

extern ltedfapeg_record_41_t update_ltedfapeg_record_41_project_1(ltedfapeg_record_41_t x, uint8_t v);

extern ltedfapeg_record_41_t update_ltedfapeg_record_41_project_2(ltedfapeg_record_41_t x, ltedfapeg__prepeg_adt_t v);


//REDUCE_nat

struct ltedfapeg_funtype_42_s;
        typedef struct ltedfapeg_funtype_42_s * ltedfapeg_funtype_42_t;

struct ltedfapeg_funtype_42_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapeg_funtype_42_s *, ltedfapeg_record_41_t);
        mpz_ptr_t (* mptr)(struct ltedfapeg_funtype_42_s *, uint8_t, ltedfapeg__prepeg_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_42_s *);
        struct ltedfapeg_funtype_42_s * (* cptr)(struct ltedfapeg_funtype_42_s *);};
typedef struct ltedfapeg_funtype_42_ftbl_s * ltedfapeg_funtype_42_ftbl_t;

struct ltedfapeg_funtype_42_hashentry_s {uint32_t keyhash; ltedfapeg_record_41_t key; mpz_t value;}; 
typedef struct ltedfapeg_funtype_42_hashentry_s ltedfapeg_funtype_42_hashentry_t;

struct ltedfapeg_funtype_42_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_42_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_42_htbl_s * ltedfapeg_funtype_42_htbl_t;

struct ltedfapeg_funtype_42_s {uint32_t count;
        ltedfapeg_funtype_42_ftbl_t ftbl;
        ltedfapeg_funtype_42_htbl_t htbl;};
typedef struct ltedfapeg_funtype_42_s * ltedfapeg_funtype_42_t;

extern void release_ltedfapeg_funtype_42(ltedfapeg_funtype_42_t x);

extern ltedfapeg_funtype_42_t copy_ltedfapeg_funtype_42(ltedfapeg_funtype_42_t x);

extern bool_t equal_ltedfapeg_funtype_42(ltedfapeg_funtype_42_t x, ltedfapeg_funtype_42_t y);

extern char* json_ltedfapeg_funtype_42(ltedfapeg_funtype_42_t x);


//REDUCE_nat

struct ltedfapeg_record_43_s {
        uint32_t count; 
        uint8_t project_1;
        uint8_t project_2;
        uint8_t project_3;
        ltedfapeg__prepeg_adt_t project_4;};
typedef struct ltedfapeg_record_43_s * ltedfapeg_record_43_t;

extern ltedfapeg_record_43_t new_ltedfapeg_record_43(void);

extern void release_ltedfapeg_record_43(ltedfapeg_record_43_t x);

extern ltedfapeg_record_43_t copy_ltedfapeg_record_43(ltedfapeg_record_43_t x);

extern bool_t equal_ltedfapeg_record_43(ltedfapeg_record_43_t x, ltedfapeg_record_43_t y);
extern char * json_ltedfapeg_record_43(ltedfapeg_record_43_t x);

typedef struct actual_ltedfapeg_record_43_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_record_43_t;
extern void release_ltedfapeg_record_43_ptr(pointer_t x, type_actual_t ltedfapeg_record_43);

extern bool_t equal_ltedfapeg_record_43_ptr(pointer_t x, pointer_t y, actual_ltedfapeg_record_43_t T);

extern char * json_ltedfapeg_record_43_ptr(pointer_t x,  actual_ltedfapeg_record_43_t T);

actual_ltedfapeg_record_43_t actual_ltedfapeg_record_43(void);

extern ltedfapeg_record_43_t update_ltedfapeg_record_43_project_1(ltedfapeg_record_43_t x, uint8_t v);

extern ltedfapeg_record_43_t update_ltedfapeg_record_43_project_2(ltedfapeg_record_43_t x, uint8_t v);

extern ltedfapeg_record_43_t update_ltedfapeg_record_43_project_3(ltedfapeg_record_43_t x, uint8_t v);

extern ltedfapeg_record_43_t update_ltedfapeg_record_43_project_4(ltedfapeg_record_43_t x, ltedfapeg__prepeg_adt_t v);


//REDUCE_nat

struct ltedfapeg_funtype_44_s;
        typedef struct ltedfapeg_funtype_44_s * ltedfapeg_funtype_44_t;

struct ltedfapeg_funtype_44_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapeg_funtype_44_s *, ltedfapeg_record_43_t);
        mpz_ptr_t (* mptr)(struct ltedfapeg_funtype_44_s *, uint8_t, uint8_t, uint8_t, ltedfapeg__prepeg_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_44_s *);
        struct ltedfapeg_funtype_44_s * (* cptr)(struct ltedfapeg_funtype_44_s *);};
typedef struct ltedfapeg_funtype_44_ftbl_s * ltedfapeg_funtype_44_ftbl_t;

struct ltedfapeg_funtype_44_hashentry_s {uint32_t keyhash; ltedfapeg_record_43_t key; mpz_t value;}; 
typedef struct ltedfapeg_funtype_44_hashentry_s ltedfapeg_funtype_44_hashentry_t;

struct ltedfapeg_funtype_44_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_44_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_44_htbl_s * ltedfapeg_funtype_44_htbl_t;

struct ltedfapeg_funtype_44_s {uint32_t count;
        ltedfapeg_funtype_44_ftbl_t ftbl;
        ltedfapeg_funtype_44_htbl_t htbl;};
typedef struct ltedfapeg_funtype_44_s * ltedfapeg_funtype_44_t;

extern void release_ltedfapeg_funtype_44(ltedfapeg_funtype_44_t x);

extern ltedfapeg_funtype_44_t copy_ltedfapeg_funtype_44(ltedfapeg_funtype_44_t x);

extern bool_t equal_ltedfapeg_funtype_44(ltedfapeg_funtype_44_t x, ltedfapeg_funtype_44_t y);

extern char* json_ltedfapeg_funtype_44(ltedfapeg_funtype_44_t x);




struct ltedfapeg_closure_45_s;
        typedef struct ltedfapeg_closure_45_s * ltedfapeg_closure_45_t;

struct ltedfapeg_closure_45_s {uint32_t count;
         ltedfapeg_funtype_33_ftbl_t ftbl;
         ltedfapeg_funtype_33_htbl_t htbl;
        ltedfapeg_funtype_42_t fvar_1;
        ltedfapeg_funtype_44_t fvar_2;
        ltedfapeg_funtype_40_t fvar_3;
        ltedfapeg_funtype_33_t fvar_4;
        ltedfapeg_funtype_33_t fvar_5;};

mpz_ptr_t f_ltedfapeg_closure_45(struct ltedfapeg_closure_45_s * closure, ltedfapeg__prepeg_adt_t bvar);

mpz_ptr_t m_ltedfapeg_closure_45(struct ltedfapeg_closure_45_s * closure, ltedfapeg__prepeg_adt_t bvar);

extern mpz_ptr_t h_ltedfapeg_closure_45(ltedfapeg__prepeg_adt_t ivar_12, ltedfapeg_funtype_42_t ivar_7, ltedfapeg_funtype_44_t ivar_9, ltedfapeg_funtype_40_t ivar_5, ltedfapeg_funtype_33_t ivar_3, ltedfapeg_funtype_33_t ivar_1);

ltedfapeg_closure_45_t new_ltedfapeg_closure_45(void);

void release_ltedfapeg_closure_45(ltedfapeg_funtype_33_t closure);

ltedfapeg_closure_45_t copy_ltedfapeg_closure_45(ltedfapeg_closure_45_t x);


//reduce_ordinal

struct ltedfapeg_funtype_46_s;
        typedef struct ltedfapeg_funtype_46_s * ltedfapeg_funtype_46_t;

struct ltedfapeg_funtype_46_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapeg_funtype_46_s *, ltedfapeg__prepeg_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapeg_funtype_46_s *, ltedfapeg__prepeg_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_46_s *);
        struct ltedfapeg_funtype_46_s * (* cptr)(struct ltedfapeg_funtype_46_s *);};
typedef struct ltedfapeg_funtype_46_ftbl_s * ltedfapeg_funtype_46_ftbl_t;

struct ltedfapeg_funtype_46_hashentry_s {uint32_t keyhash; ltedfapeg__prepeg_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapeg_funtype_46_hashentry_s ltedfapeg_funtype_46_hashentry_t;

struct ltedfapeg_funtype_46_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_46_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_46_htbl_s * ltedfapeg_funtype_46_htbl_t;

struct ltedfapeg_funtype_46_s {uint32_t count;
        ltedfapeg_funtype_46_ftbl_t ftbl;
        ltedfapeg_funtype_46_htbl_t htbl;};
typedef struct ltedfapeg_funtype_46_s * ltedfapeg_funtype_46_t;

extern void release_ltedfapeg_funtype_46(ltedfapeg_funtype_46_t x);

extern ltedfapeg_funtype_46_t copy_ltedfapeg_funtype_46(ltedfapeg_funtype_46_t x);

extern bool_t equal_ltedfapeg_funtype_46(ltedfapeg_funtype_46_t x, ltedfapeg_funtype_46_t y);

extern char* json_ltedfapeg_funtype_46(ltedfapeg_funtype_46_t x);


//reduce_ordinal

struct ltedfapeg_funtype_47_s;
        typedef struct ltedfapeg_funtype_47_s * ltedfapeg_funtype_47_t;

struct ltedfapeg_funtype_47_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapeg_funtype_47_s *, dfa__dfa_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapeg_funtype_47_s *, dfa__dfa_t);
        void (* rptr)(struct ltedfapeg_funtype_47_s *);
        struct ltedfapeg_funtype_47_s * (* cptr)(struct ltedfapeg_funtype_47_s *);};
typedef struct ltedfapeg_funtype_47_ftbl_s * ltedfapeg_funtype_47_ftbl_t;

struct ltedfapeg_funtype_47_hashentry_s {uint32_t keyhash; dfa__dfa_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapeg_funtype_47_hashentry_s ltedfapeg_funtype_47_hashentry_t;

struct ltedfapeg_funtype_47_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_47_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_47_htbl_s * ltedfapeg_funtype_47_htbl_t;

struct ltedfapeg_funtype_47_s {uint32_t count;
        ltedfapeg_funtype_47_ftbl_t ftbl;
        ltedfapeg_funtype_47_htbl_t htbl;};
typedef struct ltedfapeg_funtype_47_s * ltedfapeg_funtype_47_t;

extern void release_ltedfapeg_funtype_47(ltedfapeg_funtype_47_t x);

extern ltedfapeg_funtype_47_t copy_ltedfapeg_funtype_47(ltedfapeg_funtype_47_t x);

extern bool_t equal_ltedfapeg_funtype_47(ltedfapeg_funtype_47_t x, ltedfapeg_funtype_47_t y);

extern char* json_ltedfapeg_funtype_47(ltedfapeg_funtype_47_t x);


//reduce_ordinal

struct ltedfapeg_funtype_48_s;
        typedef struct ltedfapeg_funtype_48_s * ltedfapeg_funtype_48_t;

struct ltedfapeg_funtype_48_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapeg_funtype_48_s *, uint8_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapeg_funtype_48_s *, uint8_t);
        void (* rptr)(struct ltedfapeg_funtype_48_s *);
        struct ltedfapeg_funtype_48_s * (* cptr)(struct ltedfapeg_funtype_48_s *);};
typedef struct ltedfapeg_funtype_48_ftbl_s * ltedfapeg_funtype_48_ftbl_t;

struct ltedfapeg_funtype_48_hashentry_s {uint32_t keyhash; uint8_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapeg_funtype_48_hashentry_s ltedfapeg_funtype_48_hashentry_t;

struct ltedfapeg_funtype_48_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_48_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_48_htbl_s * ltedfapeg_funtype_48_htbl_t;

struct ltedfapeg_funtype_48_s {uint32_t count;
        ltedfapeg_funtype_48_ftbl_t ftbl;
        ltedfapeg_funtype_48_htbl_t htbl;};
typedef struct ltedfapeg_funtype_48_s * ltedfapeg_funtype_48_t;

extern void release_ltedfapeg_funtype_48(ltedfapeg_funtype_48_t x);

extern ltedfapeg_funtype_48_t copy_ltedfapeg_funtype_48(ltedfapeg_funtype_48_t x);

extern uint32_t lookup_ltedfapeg_funtype_48(ltedfapeg_funtype_48_htbl_t htbl, uint8_t i, uint32_t ihash);

extern ltedfapeg_funtype_48_t dupdate_ltedfapeg_funtype_48(ltedfapeg_funtype_48_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v);

extern ltedfapeg_funtype_48_t update_ltedfapeg_funtype_48(ltedfapeg_funtype_48_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v);

extern bool_t equal_ltedfapeg_funtype_48(ltedfapeg_funtype_48_t x, ltedfapeg_funtype_48_t y);

extern char* json_ltedfapeg_funtype_48(ltedfapeg_funtype_48_t x);


//reduce_ordinal

struct ltedfapeg_funtype_49_s;
        typedef struct ltedfapeg_funtype_49_s * ltedfapeg_funtype_49_t;

struct ltedfapeg_funtype_49_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapeg_funtype_49_s *, ltedfapeg_record_36_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapeg_funtype_49_s *, uint8_t, uint8_t, uint8_t);
        void (* rptr)(struct ltedfapeg_funtype_49_s *);
        struct ltedfapeg_funtype_49_s * (* cptr)(struct ltedfapeg_funtype_49_s *);};
typedef struct ltedfapeg_funtype_49_ftbl_s * ltedfapeg_funtype_49_ftbl_t;

struct ltedfapeg_funtype_49_hashentry_s {uint32_t keyhash; ltedfapeg_record_36_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapeg_funtype_49_hashentry_s ltedfapeg_funtype_49_hashentry_t;

struct ltedfapeg_funtype_49_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_49_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_49_htbl_s * ltedfapeg_funtype_49_htbl_t;

struct ltedfapeg_funtype_49_s {uint32_t count;
        ltedfapeg_funtype_49_ftbl_t ftbl;
        ltedfapeg_funtype_49_htbl_t htbl;};
typedef struct ltedfapeg_funtype_49_s * ltedfapeg_funtype_49_t;

extern void release_ltedfapeg_funtype_49(ltedfapeg_funtype_49_t x);

extern ltedfapeg_funtype_49_t copy_ltedfapeg_funtype_49(ltedfapeg_funtype_49_t x);

extern bool_t equal_ltedfapeg_funtype_49(ltedfapeg_funtype_49_t x, ltedfapeg_funtype_49_t y);

extern char* json_ltedfapeg_funtype_49(ltedfapeg_funtype_49_t x);




struct ltedfapeg_closure_50_s;
        typedef struct ltedfapeg_closure_50_s * ltedfapeg_closure_50_t;

struct ltedfapeg_closure_50_s {uint32_t count;
         ltedfapeg_funtype_46_ftbl_t ftbl;
         ltedfapeg_funtype_46_htbl_t htbl;
        ltedfapeg_funtype_48_t fvar_1;
        ltedfapeg_funtype_49_t fvar_2;
        ltedfapeg_funtype_47_t fvar_3;
        ordstruct_adt__ordstruct_adt_t fvar_4;
        ordstruct_adt__ordstruct_adt_t fvar_5;};

ordstruct_adt__ordstruct_adt_t f_ltedfapeg_closure_50(struct ltedfapeg_closure_50_s * closure, ltedfapeg__prepeg_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltedfapeg_closure_50(struct ltedfapeg_closure_50_s * closure, ltedfapeg__prepeg_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltedfapeg_closure_50(ltedfapeg__prepeg_adt_t ivar_10, ltedfapeg_funtype_48_t ivar_5, ltedfapeg_funtype_49_t ivar_7, ltedfapeg_funtype_47_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1);

ltedfapeg_closure_50_t new_ltedfapeg_closure_50(void);

void release_ltedfapeg_closure_50(ltedfapeg_funtype_46_t closure);

ltedfapeg_closure_50_t copy_ltedfapeg_closure_50(ltedfapeg_closure_50_t x);


//REDUCE_ordinal

struct ltedfapeg_funtype_51_s;
        typedef struct ltedfapeg_funtype_51_s * ltedfapeg_funtype_51_t;

struct ltedfapeg_funtype_51_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapeg_funtype_51_s *, ltedfapeg_record_39_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapeg_funtype_51_s *, dfa__dfa_t, ltedfapeg__prepeg_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_51_s *);
        struct ltedfapeg_funtype_51_s * (* cptr)(struct ltedfapeg_funtype_51_s *);};
typedef struct ltedfapeg_funtype_51_ftbl_s * ltedfapeg_funtype_51_ftbl_t;

struct ltedfapeg_funtype_51_hashentry_s {uint32_t keyhash; ltedfapeg_record_39_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapeg_funtype_51_hashentry_s ltedfapeg_funtype_51_hashentry_t;

struct ltedfapeg_funtype_51_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_51_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_51_htbl_s * ltedfapeg_funtype_51_htbl_t;

struct ltedfapeg_funtype_51_s {uint32_t count;
        ltedfapeg_funtype_51_ftbl_t ftbl;
        ltedfapeg_funtype_51_htbl_t htbl;};
typedef struct ltedfapeg_funtype_51_s * ltedfapeg_funtype_51_t;

extern void release_ltedfapeg_funtype_51(ltedfapeg_funtype_51_t x);

extern ltedfapeg_funtype_51_t copy_ltedfapeg_funtype_51(ltedfapeg_funtype_51_t x);

extern bool_t equal_ltedfapeg_funtype_51(ltedfapeg_funtype_51_t x, ltedfapeg_funtype_51_t y);

extern char* json_ltedfapeg_funtype_51(ltedfapeg_funtype_51_t x);


//REDUCE_ordinal

struct ltedfapeg_funtype_52_s;
        typedef struct ltedfapeg_funtype_52_s * ltedfapeg_funtype_52_t;

struct ltedfapeg_funtype_52_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapeg_funtype_52_s *, ltedfapeg_record_41_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapeg_funtype_52_s *, uint8_t, ltedfapeg__prepeg_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_52_s *);
        struct ltedfapeg_funtype_52_s * (* cptr)(struct ltedfapeg_funtype_52_s *);};
typedef struct ltedfapeg_funtype_52_ftbl_s * ltedfapeg_funtype_52_ftbl_t;

struct ltedfapeg_funtype_52_hashentry_s {uint32_t keyhash; ltedfapeg_record_41_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapeg_funtype_52_hashentry_s ltedfapeg_funtype_52_hashentry_t;

struct ltedfapeg_funtype_52_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_52_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_52_htbl_s * ltedfapeg_funtype_52_htbl_t;

struct ltedfapeg_funtype_52_s {uint32_t count;
        ltedfapeg_funtype_52_ftbl_t ftbl;
        ltedfapeg_funtype_52_htbl_t htbl;};
typedef struct ltedfapeg_funtype_52_s * ltedfapeg_funtype_52_t;

extern void release_ltedfapeg_funtype_52(ltedfapeg_funtype_52_t x);

extern ltedfapeg_funtype_52_t copy_ltedfapeg_funtype_52(ltedfapeg_funtype_52_t x);

extern bool_t equal_ltedfapeg_funtype_52(ltedfapeg_funtype_52_t x, ltedfapeg_funtype_52_t y);

extern char* json_ltedfapeg_funtype_52(ltedfapeg_funtype_52_t x);


//REDUCE_ordinal

struct ltedfapeg_funtype_53_s;
        typedef struct ltedfapeg_funtype_53_s * ltedfapeg_funtype_53_t;

struct ltedfapeg_funtype_53_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapeg_funtype_53_s *, ltedfapeg_record_43_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapeg_funtype_53_s *, uint8_t, uint8_t, uint8_t, ltedfapeg__prepeg_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_53_s *);
        struct ltedfapeg_funtype_53_s * (* cptr)(struct ltedfapeg_funtype_53_s *);};
typedef struct ltedfapeg_funtype_53_ftbl_s * ltedfapeg_funtype_53_ftbl_t;

struct ltedfapeg_funtype_53_hashentry_s {uint32_t keyhash; ltedfapeg_record_43_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapeg_funtype_53_hashentry_s ltedfapeg_funtype_53_hashentry_t;

struct ltedfapeg_funtype_53_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_53_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_53_htbl_s * ltedfapeg_funtype_53_htbl_t;

struct ltedfapeg_funtype_53_s {uint32_t count;
        ltedfapeg_funtype_53_ftbl_t ftbl;
        ltedfapeg_funtype_53_htbl_t htbl;};
typedef struct ltedfapeg_funtype_53_s * ltedfapeg_funtype_53_t;

extern void release_ltedfapeg_funtype_53(ltedfapeg_funtype_53_t x);

extern ltedfapeg_funtype_53_t copy_ltedfapeg_funtype_53(ltedfapeg_funtype_53_t x);

extern bool_t equal_ltedfapeg_funtype_53(ltedfapeg_funtype_53_t x, ltedfapeg_funtype_53_t y);

extern char* json_ltedfapeg_funtype_53(ltedfapeg_funtype_53_t x);




struct ltedfapeg_closure_54_s;
        typedef struct ltedfapeg_closure_54_s * ltedfapeg_closure_54_t;

struct ltedfapeg_closure_54_s {uint32_t count;
         ltedfapeg_funtype_46_ftbl_t ftbl;
         ltedfapeg_funtype_46_htbl_t htbl;
        ltedfapeg_funtype_52_t fvar_1;
        ltedfapeg_funtype_53_t fvar_2;
        ltedfapeg_funtype_51_t fvar_3;
        ltedfapeg_funtype_46_t fvar_4;
        ltedfapeg_funtype_46_t fvar_5;};

ordstruct_adt__ordstruct_adt_t f_ltedfapeg_closure_54(struct ltedfapeg_closure_54_s * closure, ltedfapeg__prepeg_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltedfapeg_closure_54(struct ltedfapeg_closure_54_s * closure, ltedfapeg__prepeg_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltedfapeg_closure_54(ltedfapeg__prepeg_adt_t ivar_12, ltedfapeg_funtype_52_t ivar_7, ltedfapeg_funtype_53_t ivar_9, ltedfapeg_funtype_51_t ivar_5, ltedfapeg_funtype_46_t ivar_3, ltedfapeg_funtype_46_t ivar_1);

ltedfapeg_closure_54_t new_ltedfapeg_closure_54(void);

void release_ltedfapeg_closure_54(ltedfapeg_funtype_46_t closure);

ltedfapeg_closure_54_t copy_ltedfapeg_closure_54(ltedfapeg_closure_54_t x);


//good_good_entry?

struct ltedfapeg_funtype_55_s;
        typedef struct ltedfapeg_funtype_55_s * ltedfapeg_funtype_55_t;

struct ltedfapeg_funtype_55_ftbl_s {bool_t (* fptr)(struct ltedfapeg_funtype_55_s *, ltedfapeg__ent_adt_t);
        bool_t (* mptr)(struct ltedfapeg_funtype_55_s *, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_55_s *);
        struct ltedfapeg_funtype_55_s * (* cptr)(struct ltedfapeg_funtype_55_s *);};
typedef struct ltedfapeg_funtype_55_ftbl_s * ltedfapeg_funtype_55_ftbl_t;

struct ltedfapeg_funtype_55_hashentry_s {uint32_t keyhash; ltedfapeg__ent_adt_t key; bool_t value;}; 
typedef struct ltedfapeg_funtype_55_hashentry_s ltedfapeg_funtype_55_hashentry_t;

struct ltedfapeg_funtype_55_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_55_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_55_htbl_s * ltedfapeg_funtype_55_htbl_t;

struct ltedfapeg_funtype_55_s {uint32_t count;
        ltedfapeg_funtype_55_ftbl_t ftbl;
        ltedfapeg_funtype_55_htbl_t htbl;};
typedef struct ltedfapeg_funtype_55_s * ltedfapeg_funtype_55_t;

extern void release_ltedfapeg_funtype_55(ltedfapeg_funtype_55_t x);

extern ltedfapeg_funtype_55_t copy_ltedfapeg_funtype_55(ltedfapeg_funtype_55_t x);

extern bool_t equal_ltedfapeg_funtype_55(ltedfapeg_funtype_55_t x, ltedfapeg_funtype_55_t y);

extern char* json_ltedfapeg_funtype_55(ltedfapeg_funtype_55_t x);




struct ltedfapeg_closure_56_s;
        typedef struct ltedfapeg_closure_56_s * ltedfapeg_closure_56_t;

struct ltedfapeg_closure_56_s {uint32_t count;
         ltedfapeg_funtype_55_ftbl_t ftbl;
         ltedfapeg_funtype_55_htbl_t htbl;
        uint32_t fvar_1;
        uint32_t fvar_2;};

bool_t f_ltedfapeg_closure_56(struct ltedfapeg_closure_56_s * closure, ltedfapeg__ent_adt_t bvar);

bool_t m_ltedfapeg_closure_56(struct ltedfapeg_closure_56_s * closure, ltedfapeg__ent_adt_t bvar);

extern bool_t h_ltedfapeg_closure_56(ltedfapeg__ent_adt_t ivar_4, uint32_t ivar_2, uint32_t ivar_1);

ltedfapeg_closure_56_t new_ltedfapeg_closure_56(void);

void release_ltedfapeg_closure_56(ltedfapeg_funtype_55_t closure);

ltedfapeg_closure_56_t copy_ltedfapeg_closure_56(ltedfapeg_closure_56_t x);




struct ltedfapeg_closure_57_s;
        typedef struct ltedfapeg_closure_57_s * ltedfapeg_closure_57_t;

struct ltedfapeg_closure_57_s {uint32_t count;
         ltedfapeg_funtype_55_ftbl_t ftbl;
         ltedfapeg_funtype_55_htbl_t htbl;
        uint32_t fvar_1;};

bool_t f_ltedfapeg_closure_57(struct ltedfapeg_closure_57_s * closure, ltedfapeg__ent_adt_t bvar);

bool_t m_ltedfapeg_closure_57(struct ltedfapeg_closure_57_s * closure, ltedfapeg__ent_adt_t bvar);

extern bool_t h_ltedfapeg_closure_57(ltedfapeg__ent_adt_t ivar_3, uint32_t ivar_1);

ltedfapeg_closure_57_t new_ltedfapeg_closure_57(void);

void release_ltedfapeg_closure_57(ltedfapeg_funtype_55_t closure);

ltedfapeg_closure_57_t copy_ltedfapeg_closure_57(ltedfapeg_closure_57_t x);




struct ltedfapeg_closure_58_s;
        typedef struct ltedfapeg_closure_58_s * ltedfapeg_closure_58_t;

struct ltedfapeg_closure_58_s {uint32_t count;
         ltedfapeg_funtype_55_ftbl_t ftbl;
         ltedfapeg_funtype_55_htbl_t htbl;
        uint32_t fvar_1;};

bool_t f_ltedfapeg_closure_58(struct ltedfapeg_closure_58_s * closure, ltedfapeg__ent_adt_t bvar);

bool_t m_ltedfapeg_closure_58(struct ltedfapeg_closure_58_s * closure, ltedfapeg__ent_adt_t bvar);

extern bool_t h_ltedfapeg_closure_58(ltedfapeg__ent_adt_t ivar_3, uint32_t ivar_1);

ltedfapeg_closure_58_t new_ltedfapeg_closure_58(void);

void release_ltedfapeg_closure_58(ltedfapeg_funtype_55_t closure);

ltedfapeg_closure_58_t copy_ltedfapeg_closure_58(ltedfapeg_closure_58_t x);




struct ltedfapeg_closure_59_s;
        typedef struct ltedfapeg_closure_59_s * ltedfapeg_closure_59_t;

struct ltedfapeg_closure_59_s {uint32_t count;
         ltedfapeg_funtype_55_ftbl_t ftbl;
         ltedfapeg_funtype_55_htbl_t htbl;
        uint32_t fvar_1;
        uint32_t fvar_2;};

bool_t f_ltedfapeg_closure_59(struct ltedfapeg_closure_59_s * closure, ltedfapeg__ent_adt_t bvar);

bool_t m_ltedfapeg_closure_59(struct ltedfapeg_closure_59_s * closure, ltedfapeg__ent_adt_t bvar);

extern bool_t h_ltedfapeg_closure_59(ltedfapeg__ent_adt_t ivar_4, uint32_t ivar_2, uint32_t ivar_1);

ltedfapeg_closure_59_t new_ltedfapeg_closure_59(void);

void release_ltedfapeg_closure_59(ltedfapeg_funtype_55_t closure);

ltedfapeg_closure_59_t copy_ltedfapeg_closure_59(ltedfapeg_closure_59_t x);


//instack

struct ltedfapeg_funtype_60_s;
        typedef struct ltedfapeg_funtype_60_s * ltedfapeg_funtype_60_t;

struct ltedfapeg_funtype_60_ftbl_s {bool_t (* fptr)(struct ltedfapeg_funtype_60_s *, ltedfapeg_record_9_t);
        bool_t (* mptr)(struct ltedfapeg_funtype_60_s *, uint32_t, uint8_t);
        void (* rptr)(struct ltedfapeg_funtype_60_s *);
        struct ltedfapeg_funtype_60_s * (* cptr)(struct ltedfapeg_funtype_60_s *);};
typedef struct ltedfapeg_funtype_60_ftbl_s * ltedfapeg_funtype_60_ftbl_t;

struct ltedfapeg_funtype_60_hashentry_s {uint32_t keyhash; ltedfapeg_record_9_t key; bool_t value;}; 
typedef struct ltedfapeg_funtype_60_hashentry_s ltedfapeg_funtype_60_hashentry_t;

struct ltedfapeg_funtype_60_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_60_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_60_htbl_s * ltedfapeg_funtype_60_htbl_t;

struct ltedfapeg_funtype_60_s {uint32_t count;
        ltedfapeg_funtype_60_ftbl_t ftbl;
        ltedfapeg_funtype_60_htbl_t htbl;};
typedef struct ltedfapeg_funtype_60_s * ltedfapeg_funtype_60_t;

extern void release_ltedfapeg_funtype_60(ltedfapeg_funtype_60_t x);

extern ltedfapeg_funtype_60_t copy_ltedfapeg_funtype_60(ltedfapeg_funtype_60_t x);

extern bool_t equal_ltedfapeg_funtype_60(ltedfapeg_funtype_60_t x, ltedfapeg_funtype_60_t y);

extern char* json_ltedfapeg_funtype_60(ltedfapeg_funtype_60_t x);


//instack

struct ltedfapeg_array_61_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltedfapeg__ent_adt_t elems[]; };
typedef struct ltedfapeg_array_61_s * ltedfapeg_array_61_t;

extern ltedfapeg_array_61_t new_ltedfapeg_array_61(uint32_t size);

extern void release_ltedfapeg_array_61(ltedfapeg_array_61_t x);

extern ltedfapeg_array_61_t copy_ltedfapeg_array_61(ltedfapeg_array_61_t x);

extern bool_t equal_ltedfapeg_array_61(ltedfapeg_array_61_t x, ltedfapeg_array_61_t y);
extern char * json_ltedfapeg_array_61(ltedfapeg_array_61_t x);

typedef struct actual_ltedfapeg_array_61_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_array_61_t;
extern void release_ltedfapeg_array_61_ptr(pointer_t x, type_actual_t ltedfapeg_array_61);

extern bool_t equal_ltedfapeg_array_61_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltedfapeg_array_61_ptr(pointer_t x, type_actual_t T);

actual_ltedfapeg_array_61_t actual_ltedfapeg_array_61(void);

extern ltedfapeg_array_61_t update_ltedfapeg_array_61(ltedfapeg_array_61_t x, uint32_t i, ltedfapeg__ent_adt_t v);

extern ltedfapeg_array_61_t upgrade_ltedfapeg_array_61(ltedfapeg_array_61_t x, uint32_t i, ltedfapeg__ent_adt_t v);


//instack

struct ltedfapeg_array_62_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltedfapeg_array_61_t elems[]; };
typedef struct ltedfapeg_array_62_s * ltedfapeg_array_62_t;

extern ltedfapeg_array_62_t new_ltedfapeg_array_62(uint32_t size);

extern void release_ltedfapeg_array_62(ltedfapeg_array_62_t x);

extern ltedfapeg_array_62_t copy_ltedfapeg_array_62(ltedfapeg_array_62_t x);

extern bool_t equal_ltedfapeg_array_62(ltedfapeg_array_62_t x, ltedfapeg_array_62_t y);
extern char * json_ltedfapeg_array_62(ltedfapeg_array_62_t x);

typedef struct actual_ltedfapeg_array_62_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_array_62_t;
extern void release_ltedfapeg_array_62_ptr(pointer_t x, type_actual_t ltedfapeg_array_62);

extern bool_t equal_ltedfapeg_array_62_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltedfapeg_array_62_ptr(pointer_t x, type_actual_t T);

actual_ltedfapeg_array_62_t actual_ltedfapeg_array_62(void);

extern ltedfapeg_array_62_t update_ltedfapeg_array_62(ltedfapeg_array_62_t x, uint32_t i, ltedfapeg_array_61_t v);

extern ltedfapeg_array_62_t upgrade_ltedfapeg_array_62(ltedfapeg_array_62_t x, uint32_t i, ltedfapeg_array_61_t v);




struct ltedfapeg_closure_63_s;
        typedef struct ltedfapeg_closure_63_s * ltedfapeg_closure_63_t;

struct ltedfapeg_closure_63_s {uint32_t count;
         ltedfapeg_funtype_60_ftbl_t ftbl;
         ltedfapeg_funtype_60_htbl_t htbl;
        ltedfapeg_array_62_t fvar_1;
        uint32_t fvar_2;};

bool_t f_ltedfapeg_closure_63(struct ltedfapeg_closure_63_s * closure, ltedfapeg_record_9_t bvar);

bool_t m_ltedfapeg_closure_63(struct ltedfapeg_closure_63_s * closure, uint32_t bvar_1, uint8_t bvar_2);

extern bool_t h_ltedfapeg_closure_63(uint32_t ivar_5, uint8_t ivar_6, ltedfapeg_array_62_t ivar_2, uint32_t ivar_1);

ltedfapeg_closure_63_t new_ltedfapeg_closure_63(void);

void release_ltedfapeg_closure_63(ltedfapeg_funtype_60_t closure);

ltedfapeg_closure_63_t copy_ltedfapeg_closure_63(ltedfapeg_closure_63_t x);


//successor

struct ltedfapeg_record_64_s {
        uint32_t count; 
        ltedfapeg__ent_adt_t project_1;
        ltedfapeg__ent_adt_t project_2;};
typedef struct ltedfapeg_record_64_s * ltedfapeg_record_64_t;

extern ltedfapeg_record_64_t new_ltedfapeg_record_64(void);

extern void release_ltedfapeg_record_64(ltedfapeg_record_64_t x);

extern ltedfapeg_record_64_t copy_ltedfapeg_record_64(ltedfapeg_record_64_t x);

extern bool_t equal_ltedfapeg_record_64(ltedfapeg_record_64_t x, ltedfapeg_record_64_t y);
extern char * json_ltedfapeg_record_64(ltedfapeg_record_64_t x);

typedef struct actual_ltedfapeg_record_64_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_record_64_t;
extern void release_ltedfapeg_record_64_ptr(pointer_t x, type_actual_t ltedfapeg_record_64);

extern bool_t equal_ltedfapeg_record_64_ptr(pointer_t x, pointer_t y, actual_ltedfapeg_record_64_t T);

extern char * json_ltedfapeg_record_64_ptr(pointer_t x,  actual_ltedfapeg_record_64_t T);

actual_ltedfapeg_record_64_t actual_ltedfapeg_record_64(void);

extern ltedfapeg_record_64_t update_ltedfapeg_record_64_project_1(ltedfapeg_record_64_t x, ltedfapeg__ent_adt_t v);

extern ltedfapeg_record_64_t update_ltedfapeg_record_64_project_2(ltedfapeg_record_64_t x, ltedfapeg__ent_adt_t v);


//successor

struct ltedfapeg_funtype_65_s;
        typedef struct ltedfapeg_funtype_65_s * ltedfapeg_funtype_65_t;

struct ltedfapeg_funtype_65_ftbl_s {bool_t (* fptr)(struct ltedfapeg_funtype_65_s *, ltedfapeg_record_64_t);
        bool_t (* mptr)(struct ltedfapeg_funtype_65_s *, ltedfapeg__ent_adt_t, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_65_s *);
        struct ltedfapeg_funtype_65_s * (* cptr)(struct ltedfapeg_funtype_65_s *);};
typedef struct ltedfapeg_funtype_65_ftbl_s * ltedfapeg_funtype_65_ftbl_t;

struct ltedfapeg_funtype_65_hashentry_s {uint32_t keyhash; ltedfapeg_record_64_t key; bool_t value;}; 
typedef struct ltedfapeg_funtype_65_hashentry_s ltedfapeg_funtype_65_hashentry_t;

struct ltedfapeg_funtype_65_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_65_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_65_htbl_s * ltedfapeg_funtype_65_htbl_t;

struct ltedfapeg_funtype_65_s {uint32_t count;
        ltedfapeg_funtype_65_ftbl_t ftbl;
        ltedfapeg_funtype_65_htbl_t htbl;};
typedef struct ltedfapeg_funtype_65_s * ltedfapeg_funtype_65_t;

extern void release_ltedfapeg_funtype_65(ltedfapeg_funtype_65_t x);

extern ltedfapeg_funtype_65_t copy_ltedfapeg_funtype_65(ltedfapeg_funtype_65_t x);

extern bool_t equal_ltedfapeg_funtype_65(ltedfapeg_funtype_65_t x, ltedfapeg_funtype_65_t y);

extern char* json_ltedfapeg_funtype_65(ltedfapeg_funtype_65_t x);


//successor

struct ltedfapeg__lang_spec_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltedfapeg__prepeg_adt_t elems[]; };
typedef struct ltedfapeg__lang_spec_s * ltedfapeg__lang_spec_t;

extern ltedfapeg__lang_spec_t new_ltedfapeg__lang_spec(uint32_t size);

extern void release_ltedfapeg__lang_spec(ltedfapeg__lang_spec_t x);

extern ltedfapeg__lang_spec_t copy_ltedfapeg__lang_spec(ltedfapeg__lang_spec_t x);

extern bool_t equal_ltedfapeg__lang_spec(ltedfapeg__lang_spec_t x, ltedfapeg__lang_spec_t y);
extern char * json_ltedfapeg__lang_spec(ltedfapeg__lang_spec_t x);

typedef struct actual_ltedfapeg__lang_spec_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg__lang_spec_t;
extern void release_ltedfapeg__lang_spec_ptr(pointer_t x, type_actual_t ltedfapeg__lang_spec);

extern bool_t equal_ltedfapeg__lang_spec_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltedfapeg__lang_spec_ptr(pointer_t x, type_actual_t T);

actual_ltedfapeg__lang_spec_t actual_ltedfapeg__lang_spec(void);

extern ltedfapeg__lang_spec_t update_ltedfapeg__lang_spec(ltedfapeg__lang_spec_t x, uint32_t i, ltedfapeg__prepeg_adt_t v);

extern ltedfapeg__lang_spec_t upgrade_ltedfapeg__lang_spec(ltedfapeg__lang_spec_t x, uint32_t i, ltedfapeg__prepeg_adt_t v);




struct ltedfapeg_closure_67_s;
        typedef struct ltedfapeg_closure_67_s * ltedfapeg_closure_67_t;

struct ltedfapeg_closure_67_s {uint32_t count;
         ltedfapeg_funtype_65_ftbl_t ftbl;
         ltedfapeg_funtype_65_htbl_t htbl;
        ltedfapeg_array_62_t fvar_1;
        uint32_t fvar_2;
        ltedfapeg__lang_spec_t fvar_3;};

bool_t f_ltedfapeg_closure_67(struct ltedfapeg_closure_67_s * closure, ltedfapeg_record_64_t bvar);

bool_t m_ltedfapeg_closure_67(struct ltedfapeg_closure_67_s * closure, ltedfapeg__ent_adt_t bvar_1, ltedfapeg__ent_adt_t bvar_2);

extern bool_t h_ltedfapeg_closure_67(ltedfapeg__ent_adt_t ivar_6, ltedfapeg__ent_adt_t ivar_7, ltedfapeg_array_62_t ivar_3, uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2);

ltedfapeg_closure_67_t new_ltedfapeg_closure_67(void);

void release_ltedfapeg_closure_67(ltedfapeg_funtype_65_t closure);

ltedfapeg_closure_67_t copy_ltedfapeg_closure_67(ltedfapeg_closure_67_t x);


//sigma

struct ltedfapeg_funtype_68_s;
        typedef struct ltedfapeg_funtype_68_s * ltedfapeg_funtype_68_t;

struct ltedfapeg_funtype_68_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapeg_funtype_68_s *, uint32_t);
        mpz_ptr_t (* mptr)(struct ltedfapeg_funtype_68_s *, uint32_t);
        void (* rptr)(struct ltedfapeg_funtype_68_s *);
        struct ltedfapeg_funtype_68_s * (* cptr)(struct ltedfapeg_funtype_68_s *);};
typedef struct ltedfapeg_funtype_68_ftbl_s * ltedfapeg_funtype_68_ftbl_t;

struct ltedfapeg_funtype_68_hashentry_s {uint32_t keyhash; uint32_t key; mpz_t value;}; 
typedef struct ltedfapeg_funtype_68_hashentry_s ltedfapeg_funtype_68_hashentry_t;

struct ltedfapeg_funtype_68_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_68_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_68_htbl_s * ltedfapeg_funtype_68_htbl_t;

struct ltedfapeg_funtype_68_s {uint32_t count;
        ltedfapeg_funtype_68_ftbl_t ftbl;
        ltedfapeg_funtype_68_htbl_t htbl;};
typedef struct ltedfapeg_funtype_68_s * ltedfapeg_funtype_68_t;

extern void release_ltedfapeg_funtype_68(ltedfapeg_funtype_68_t x);

extern ltedfapeg_funtype_68_t copy_ltedfapeg_funtype_68(ltedfapeg_funtype_68_t x);

extern uint32_t lookup_ltedfapeg_funtype_68(ltedfapeg_funtype_68_htbl_t htbl, uint32_t i, uint32_t ihash);

extern ltedfapeg_funtype_68_t dupdate_ltedfapeg_funtype_68(ltedfapeg_funtype_68_t a, uint32_t i, mpz_ptr_t v);

extern ltedfapeg_funtype_68_t update_ltedfapeg_funtype_68(ltedfapeg_funtype_68_t a, uint32_t i, mpz_ptr_t v);

extern bool_t equal_ltedfapeg_funtype_68(ltedfapeg_funtype_68_t x, ltedfapeg_funtype_68_t y);

extern char* json_ltedfapeg_funtype_68(ltedfapeg_funtype_68_t x);


//sigma

struct ltedfapeg_array_69_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         mpz_ptr_t elems[]; };
typedef struct ltedfapeg_array_69_s * ltedfapeg_array_69_t;

extern ltedfapeg_array_69_t new_ltedfapeg_array_69(uint32_t size);

extern void release_ltedfapeg_array_69(ltedfapeg_array_69_t x);

extern ltedfapeg_array_69_t copy_ltedfapeg_array_69(ltedfapeg_array_69_t x);

extern bool_t equal_ltedfapeg_array_69(ltedfapeg_array_69_t x, ltedfapeg_array_69_t y);
extern char * json_ltedfapeg_array_69(ltedfapeg_array_69_t x);

typedef struct actual_ltedfapeg_array_69_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_array_69_t;
extern void release_ltedfapeg_array_69_ptr(pointer_t x, type_actual_t ltedfapeg_array_69);

extern bool_t equal_ltedfapeg_array_69_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltedfapeg_array_69_ptr(pointer_t x, type_actual_t T);

actual_ltedfapeg_array_69_t actual_ltedfapeg_array_69(void);

extern ltedfapeg_array_69_t update_ltedfapeg_array_69(ltedfapeg_array_69_t x, uint32_t i, mpz_t v);

extern ltedfapeg_array_69_t upgrade_ltedfapeg_array_69(ltedfapeg_array_69_t x, uint32_t i, mpz_t v);




struct ltedfapeg_closure_70_s;
        typedef struct ltedfapeg_closure_70_s * ltedfapeg_closure_70_t;

struct ltedfapeg_closure_70_s {uint32_t count;
         ltedfapeg_funtype_68_ftbl_t ftbl;
         ltedfapeg_funtype_68_htbl_t htbl;
        ltedfapeg_array_69_t fvar_1;
        uint32_t fvar_2;};

mpz_ptr_t f_ltedfapeg_closure_70(struct ltedfapeg_closure_70_s * closure, uint32_t bvar);

mpz_ptr_t m_ltedfapeg_closure_70(struct ltedfapeg_closure_70_s * closure, uint32_t bvar);

extern mpz_ptr_t h_ltedfapeg_closure_70(uint32_t ivar_4, ltedfapeg_array_69_t ivar_2, uint32_t ivar_1);

ltedfapeg_closure_70_t new_ltedfapeg_closure_70(void);

void release_ltedfapeg_closure_70(ltedfapeg_funtype_68_t closure);

ltedfapeg_closure_70_t copy_ltedfapeg_closure_70(ltedfapeg_closure_70_t x);


//scafcount

struct ltedfapeg_funtype_71_s;
        typedef struct ltedfapeg_funtype_71_s * ltedfapeg_funtype_71_t;

struct ltedfapeg_funtype_71_ftbl_s {uint8_t (* fptr)(struct ltedfapeg_funtype_71_s *, ltedfapeg_array_61_t);
        uint8_t (* mptr)(struct ltedfapeg_funtype_71_s *, ltedfapeg_array_61_t);
        void (* rptr)(struct ltedfapeg_funtype_71_s *);
        struct ltedfapeg_funtype_71_s * (* cptr)(struct ltedfapeg_funtype_71_s *);};
typedef struct ltedfapeg_funtype_71_ftbl_s * ltedfapeg_funtype_71_ftbl_t;

struct ltedfapeg_funtype_71_hashentry_s {uint32_t keyhash; ltedfapeg_array_61_t key; uint8_t value;}; 
typedef struct ltedfapeg_funtype_71_hashentry_s ltedfapeg_funtype_71_hashentry_t;

struct ltedfapeg_funtype_71_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_71_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_71_htbl_s * ltedfapeg_funtype_71_htbl_t;

struct ltedfapeg_funtype_71_s {uint32_t count;
        ltedfapeg_funtype_71_ftbl_t ftbl;
        ltedfapeg_funtype_71_htbl_t htbl;};
typedef struct ltedfapeg_funtype_71_s * ltedfapeg_funtype_71_t;

extern void release_ltedfapeg_funtype_71(ltedfapeg_funtype_71_t x);

extern ltedfapeg_funtype_71_t copy_ltedfapeg_funtype_71(ltedfapeg_funtype_71_t x);

extern bool_t equal_ltedfapeg_funtype_71(ltedfapeg_funtype_71_t x, ltedfapeg_funtype_71_t y);

extern char* json_ltedfapeg_funtype_71(ltedfapeg_funtype_71_t x);


//scafcount

struct ltedfapeg_funtype_72_s;
        typedef struct ltedfapeg_funtype_72_s * ltedfapeg_funtype_72_t;

struct ltedfapeg_funtype_72_ftbl_s {ltedfapeg_funtype_71_t (* fptr)(struct ltedfapeg_funtype_72_s *, ltedfapeg_funtype_55_t);
        ltedfapeg_funtype_71_t (* mptr)(struct ltedfapeg_funtype_72_s *, ltedfapeg_funtype_55_t);
        void (* rptr)(struct ltedfapeg_funtype_72_s *);
        struct ltedfapeg_funtype_72_s * (* cptr)(struct ltedfapeg_funtype_72_s *);};
typedef struct ltedfapeg_funtype_72_ftbl_s * ltedfapeg_funtype_72_ftbl_t;

struct ltedfapeg_funtype_72_hashentry_s {uint32_t keyhash; ltedfapeg_funtype_55_t key; ltedfapeg_funtype_71_t value;}; 
typedef struct ltedfapeg_funtype_72_hashentry_s ltedfapeg_funtype_72_hashentry_t;

struct ltedfapeg_funtype_72_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_72_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_72_htbl_s * ltedfapeg_funtype_72_htbl_t;

struct ltedfapeg_funtype_72_s {uint32_t count;
        ltedfapeg_funtype_72_ftbl_t ftbl;
        ltedfapeg_funtype_72_htbl_t htbl;};
typedef struct ltedfapeg_funtype_72_s * ltedfapeg_funtype_72_t;

extern void release_ltedfapeg_funtype_72(ltedfapeg_funtype_72_t x);

extern ltedfapeg_funtype_72_t copy_ltedfapeg_funtype_72(ltedfapeg_funtype_72_t x);

extern bool_t equal_ltedfapeg_funtype_72(ltedfapeg_funtype_72_t x, ltedfapeg_funtype_72_t y);

extern char* json_ltedfapeg_funtype_72(ltedfapeg_funtype_72_t x);




struct ltedfapeg_closure_73_s;
        typedef struct ltedfapeg_closure_73_s * ltedfapeg_closure_73_t;

struct ltedfapeg_closure_73_s {uint32_t count;
         ltedfapeg_funtype_55_ftbl_t ftbl;
         ltedfapeg_funtype_55_htbl_t htbl;};

bool_t f_ltedfapeg_closure_73(struct ltedfapeg_closure_73_s * closure, ltedfapeg__ent_adt_t bvar);

bool_t m_ltedfapeg_closure_73(struct ltedfapeg_closure_73_s * closure, ltedfapeg__ent_adt_t bvar);

extern bool_t h_ltedfapeg_closure_73(ltedfapeg__ent_adt_t ivar_19);

ltedfapeg_closure_73_t new_ltedfapeg_closure_73(void);

void release_ltedfapeg_closure_73(ltedfapeg_funtype_55_t closure);

ltedfapeg_closure_73_t copy_ltedfapeg_closure_73(ltedfapeg_closure_73_t x);




struct ltedfapeg_closure_74_s;
        typedef struct ltedfapeg_closure_74_s * ltedfapeg_closure_74_t;

struct ltedfapeg_closure_74_s {uint32_t count;
         ltedfapeg_funtype_55_ftbl_t ftbl;
         ltedfapeg_funtype_55_htbl_t htbl;};

bool_t f_ltedfapeg_closure_74(struct ltedfapeg_closure_74_s * closure, ltedfapeg__ent_adt_t bvar);

bool_t m_ltedfapeg_closure_74(struct ltedfapeg_closure_74_s * closure, ltedfapeg__ent_adt_t bvar);

extern bool_t h_ltedfapeg_closure_74(ltedfapeg__ent_adt_t ivar_9);

ltedfapeg_closure_74_t new_ltedfapeg_closure_74(void);

void release_ltedfapeg_closure_74(ltedfapeg_funtype_55_t closure);

ltedfapeg_closure_74_t copy_ltedfapeg_closure_74(ltedfapeg_closure_74_t x);


//good_depth?

struct ltedfapeg_funtype_75_s;
        typedef struct ltedfapeg_funtype_75_s * ltedfapeg_funtype_75_t;

struct ltedfapeg_funtype_75_ftbl_s {bool_t (* fptr)(struct ltedfapeg_funtype_75_s *, uint64_t);
        bool_t (* mptr)(struct ltedfapeg_funtype_75_s *, uint64_t);
        void (* rptr)(struct ltedfapeg_funtype_75_s *);
        struct ltedfapeg_funtype_75_s * (* cptr)(struct ltedfapeg_funtype_75_s *);};
typedef struct ltedfapeg_funtype_75_ftbl_s * ltedfapeg_funtype_75_ftbl_t;

struct ltedfapeg_funtype_75_hashentry_s {uint32_t keyhash; uint64_t key; bool_t value;}; 
typedef struct ltedfapeg_funtype_75_hashentry_s ltedfapeg_funtype_75_hashentry_t;

struct ltedfapeg_funtype_75_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_75_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_75_htbl_s * ltedfapeg_funtype_75_htbl_t;

struct ltedfapeg_funtype_75_s {uint32_t count;
        ltedfapeg_funtype_75_ftbl_t ftbl;
        ltedfapeg_funtype_75_htbl_t htbl;};
typedef struct ltedfapeg_funtype_75_s * ltedfapeg_funtype_75_t;

extern void release_ltedfapeg_funtype_75(ltedfapeg_funtype_75_t x);

extern ltedfapeg_funtype_75_t copy_ltedfapeg_funtype_75(ltedfapeg_funtype_75_t x);

extern uint32_t lookup_ltedfapeg_funtype_75(ltedfapeg_funtype_75_htbl_t htbl, uint64_t i, uint32_t ihash);

extern ltedfapeg_funtype_75_t dupdate_ltedfapeg_funtype_75(ltedfapeg_funtype_75_t a, uint64_t i, bool_t v);

extern ltedfapeg_funtype_75_t update_ltedfapeg_funtype_75(ltedfapeg_funtype_75_t a, uint64_t i, bool_t v);

extern bool_t equal_ltedfapeg_funtype_75(ltedfapeg_funtype_75_t x, ltedfapeg_funtype_75_t y);

extern char* json_ltedfapeg_funtype_75(ltedfapeg_funtype_75_t x);




struct ltedfapeg_closure_76_s;
        typedef struct ltedfapeg_closure_76_s * ltedfapeg_closure_76_t;

struct ltedfapeg_closure_76_s {uint32_t count;
         ltedfapeg_funtype_75_ftbl_t ftbl;
         ltedfapeg_funtype_75_htbl_t htbl;
        ltedfapeg_array_62_t fvar_1;
        uint32_t fvar_2;};

bool_t f_ltedfapeg_closure_76(struct ltedfapeg_closure_76_s * closure, uint64_t bvar);

bool_t m_ltedfapeg_closure_76(struct ltedfapeg_closure_76_s * closure, uint64_t bvar);

extern bool_t h_ltedfapeg_closure_76(uint64_t ivar_5, ltedfapeg_array_62_t ivar_2, uint32_t ivar_1);

ltedfapeg_closure_76_t new_ltedfapeg_closure_76(void);

void release_ltedfapeg_closure_76(ltedfapeg_funtype_75_t closure);

ltedfapeg_closure_76_t copy_ltedfapeg_closure_76(ltedfapeg_closure_76_t x);




struct ltedfapeg_closure_77_s;
        typedef struct ltedfapeg_closure_77_s * ltedfapeg_closure_77_t;

struct ltedfapeg_closure_77_s {uint32_t count;
         ltedfapeg_funtype_55_ftbl_t ftbl;
         ltedfapeg_funtype_55_htbl_t htbl;
        ltedfapeg_array_62_t fvar_1;
        uint32_t fvar_2;
        ltedfapeg__lang_spec_t fvar_3;
        uint64_t fvar_4;};

bool_t f_ltedfapeg_closure_77(struct ltedfapeg_closure_77_s * closure, ltedfapeg__ent_adt_t bvar);

bool_t m_ltedfapeg_closure_77(struct ltedfapeg_closure_77_s * closure, ltedfapeg__ent_adt_t bvar);

extern bool_t h_ltedfapeg_closure_77(ltedfapeg__ent_adt_t ivar_7, ltedfapeg_array_62_t ivar_4, uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, uint64_t ivar_3);

ltedfapeg_closure_77_t new_ltedfapeg_closure_77(void);

void release_ltedfapeg_closure_77(ltedfapeg_funtype_55_t closure);

ltedfapeg_closure_77_t copy_ltedfapeg_closure_77(ltedfapeg_closure_77_t x);




struct ltedfapeg_closure_78_s;
        typedef struct ltedfapeg_closure_78_s * ltedfapeg_closure_78_t;

struct ltedfapeg_closure_78_s {uint32_t count;
         ltedfapeg_funtype_65_ftbl_t ftbl;
         ltedfapeg_funtype_65_htbl_t htbl;
        ltedfapeg_array_62_t fvar_1;
        uint32_t fvar_2;
        ltedfapeg__lang_spec_t fvar_3;
        uint64_t fvar_4;};

bool_t f_ltedfapeg_closure_78(struct ltedfapeg_closure_78_s * closure, ltedfapeg_record_64_t bvar);

bool_t m_ltedfapeg_closure_78(struct ltedfapeg_closure_78_s * closure, ltedfapeg__ent_adt_t bvar_1, ltedfapeg__ent_adt_t bvar_2);

extern bool_t h_ltedfapeg_closure_78(ltedfapeg__ent_adt_t ivar_7, ltedfapeg__ent_adt_t ivar_8, ltedfapeg_array_62_t ivar_4, uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, uint64_t ivar_3);

ltedfapeg_closure_78_t new_ltedfapeg_closure_78(void);

void release_ltedfapeg_closure_78(ltedfapeg_funtype_65_t closure);

ltedfapeg_closure_78_t copy_ltedfapeg_closure_78(ltedfapeg_closure_78_t x);




struct ltedfapeg_closure_79_s;
        typedef struct ltedfapeg_closure_79_s * ltedfapeg_closure_79_t;

struct ltedfapeg_closure_79_s {uint32_t count;
         ltedfapeg_funtype_55_ftbl_t ftbl;
         ltedfapeg_funtype_55_htbl_t htbl;
        ltedfapeg_array_62_t fvar_1;
        uint32_t fvar_2;
        ltedfapeg__lang_spec_t fvar_3;
        uint64_t fvar_4;};

bool_t f_ltedfapeg_closure_79(struct ltedfapeg_closure_79_s * closure, ltedfapeg__ent_adt_t bvar);

bool_t m_ltedfapeg_closure_79(struct ltedfapeg_closure_79_s * closure, ltedfapeg__ent_adt_t bvar);

extern bool_t h_ltedfapeg_closure_79(ltedfapeg__ent_adt_t ivar_7, ltedfapeg_array_62_t ivar_4, uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, uint64_t ivar_3);

ltedfapeg_closure_79_t new_ltedfapeg_closure_79(void);

void release_ltedfapeg_closure_79(ltedfapeg_funtype_55_t closure);

ltedfapeg_closure_79_t copy_ltedfapeg_closure_79(ltedfapeg_closure_79_t x);


//good_fail?

struct ltedfapeg_record_80_s {
        uint32_t count; 
        ltedfapeg_array_62_t project_1;
        uint32_t project_2;
        uint8_t project_3;
        uint64_t project_4;};
typedef struct ltedfapeg_record_80_s * ltedfapeg_record_80_t;

extern ltedfapeg_record_80_t new_ltedfapeg_record_80(void);

extern void release_ltedfapeg_record_80(ltedfapeg_record_80_t x);

extern ltedfapeg_record_80_t copy_ltedfapeg_record_80(ltedfapeg_record_80_t x);

extern bool_t equal_ltedfapeg_record_80(ltedfapeg_record_80_t x, ltedfapeg_record_80_t y);
extern char * json_ltedfapeg_record_80(ltedfapeg_record_80_t x);

typedef struct actual_ltedfapeg_record_80_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_record_80_t;
extern void release_ltedfapeg_record_80_ptr(pointer_t x, type_actual_t ltedfapeg_record_80);

extern bool_t equal_ltedfapeg_record_80_ptr(pointer_t x, pointer_t y, actual_ltedfapeg_record_80_t T);

extern char * json_ltedfapeg_record_80_ptr(pointer_t x,  actual_ltedfapeg_record_80_t T);

actual_ltedfapeg_record_80_t actual_ltedfapeg_record_80(void);

extern ltedfapeg_record_80_t update_ltedfapeg_record_80_project_1(ltedfapeg_record_80_t x, ltedfapeg_array_62_t v);

extern ltedfapeg_record_80_t update_ltedfapeg_record_80_project_2(ltedfapeg_record_80_t x, uint32_t v);

extern ltedfapeg_record_80_t update_ltedfapeg_record_80_project_3(ltedfapeg_record_80_t x, uint8_t v);

extern ltedfapeg_record_80_t update_ltedfapeg_record_80_project_4(ltedfapeg_record_80_t x, uint64_t v);


//good_fail?

struct ltedfapeg_funtype_81_s;
        typedef struct ltedfapeg_funtype_81_s * ltedfapeg_funtype_81_t;

struct ltedfapeg_funtype_81_ftbl_s {bool_t (* fptr)(struct ltedfapeg_funtype_81_s *, ltedfapeg_record_80_t);
        bool_t (* mptr)(struct ltedfapeg_funtype_81_s *, ltedfapeg_array_62_t, uint32_t, uint8_t, uint64_t);
        void (* rptr)(struct ltedfapeg_funtype_81_s *);
        struct ltedfapeg_funtype_81_s * (* cptr)(struct ltedfapeg_funtype_81_s *);};
typedef struct ltedfapeg_funtype_81_ftbl_s * ltedfapeg_funtype_81_ftbl_t;

struct ltedfapeg_funtype_81_hashentry_s {uint32_t keyhash; ltedfapeg_record_80_t key; bool_t value;}; 
typedef struct ltedfapeg_funtype_81_hashentry_s ltedfapeg_funtype_81_hashentry_t;

struct ltedfapeg_funtype_81_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_81_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_81_htbl_s * ltedfapeg_funtype_81_htbl_t;

struct ltedfapeg_funtype_81_s {uint32_t count;
        ltedfapeg_funtype_81_ftbl_t ftbl;
        ltedfapeg_funtype_81_htbl_t htbl;};
typedef struct ltedfapeg_funtype_81_s * ltedfapeg_funtype_81_t;

extern void release_ltedfapeg_funtype_81(ltedfapeg_funtype_81_t x);

extern ltedfapeg_funtype_81_t copy_ltedfapeg_funtype_81(ltedfapeg_funtype_81_t x);

extern bool_t equal_ltedfapeg_funtype_81(ltedfapeg_funtype_81_t x, ltedfapeg_funtype_81_t y);

extern char* json_ltedfapeg_funtype_81(ltedfapeg_funtype_81_t x);


//good_fail?

struct ltedfapeg_array_82_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct ltedfapeg_array_82_s * ltedfapeg_array_82_t;

extern ltedfapeg_array_82_t new_ltedfapeg_array_82(uint32_t size);

extern void release_ltedfapeg_array_82(ltedfapeg_array_82_t x);

extern ltedfapeg_array_82_t copy_ltedfapeg_array_82(ltedfapeg_array_82_t x);

extern bool_t equal_ltedfapeg_array_82(ltedfapeg_array_82_t x, ltedfapeg_array_82_t y);
extern char * json_ltedfapeg_array_82(ltedfapeg_array_82_t x);

typedef struct actual_ltedfapeg_array_82_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_array_82_t;
extern void release_ltedfapeg_array_82_ptr(pointer_t x, type_actual_t ltedfapeg_array_82);

extern bool_t equal_ltedfapeg_array_82_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltedfapeg_array_82_ptr(pointer_t x, type_actual_t T);

actual_ltedfapeg_array_82_t actual_ltedfapeg_array_82(void);

extern ltedfapeg_array_82_t update_ltedfapeg_array_82(ltedfapeg_array_82_t x, uint32_t i, uint8_t v);

extern ltedfapeg_array_82_t upgrade_ltedfapeg_array_82(ltedfapeg_array_82_t x, uint32_t i, uint8_t v);




struct ltedfapeg_closure_83_s;
        typedef struct ltedfapeg_closure_83_s * ltedfapeg_closure_83_t;

struct ltedfapeg_closure_83_s {uint32_t count;
         ltedfapeg_funtype_81_ftbl_t ftbl;
         ltedfapeg_funtype_81_htbl_t htbl;
        ltedfapeg_array_82_t fvar_1;
        uint32_t fvar_2;
        ltedfapeg__lang_spec_t fvar_3;};

bool_t f_ltedfapeg_closure_83(struct ltedfapeg_closure_83_s * closure, ltedfapeg_record_80_t bvar);

bool_t m_ltedfapeg_closure_83(struct ltedfapeg_closure_83_s * closure, ltedfapeg_array_62_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4);

extern bool_t h_ltedfapeg_closure_83(ltedfapeg_array_62_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, uint64_t ivar_10, ltedfapeg_array_82_t ivar_3, uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2);

ltedfapeg_closure_83_t new_ltedfapeg_closure_83(void);

void release_ltedfapeg_closure_83(ltedfapeg_funtype_81_t closure);

ltedfapeg_closure_83_t copy_ltedfapeg_closure_83(ltedfapeg_closure_83_t x);


//good_loop?

struct ltedfapeg_record_84_s {
        uint32_t count; 
        ltedfapeg_array_62_t project_1;
        uint32_t project_2;
        uint8_t project_3;};
typedef struct ltedfapeg_record_84_s * ltedfapeg_record_84_t;

extern ltedfapeg_record_84_t new_ltedfapeg_record_84(void);

extern void release_ltedfapeg_record_84(ltedfapeg_record_84_t x);

extern ltedfapeg_record_84_t copy_ltedfapeg_record_84(ltedfapeg_record_84_t x);

extern bool_t equal_ltedfapeg_record_84(ltedfapeg_record_84_t x, ltedfapeg_record_84_t y);
extern char * json_ltedfapeg_record_84(ltedfapeg_record_84_t x);

typedef struct actual_ltedfapeg_record_84_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_record_84_t;
extern void release_ltedfapeg_record_84_ptr(pointer_t x, type_actual_t ltedfapeg_record_84);

extern bool_t equal_ltedfapeg_record_84_ptr(pointer_t x, pointer_t y, actual_ltedfapeg_record_84_t T);

extern char * json_ltedfapeg_record_84_ptr(pointer_t x,  actual_ltedfapeg_record_84_t T);

actual_ltedfapeg_record_84_t actual_ltedfapeg_record_84(void);

extern ltedfapeg_record_84_t update_ltedfapeg_record_84_project_1(ltedfapeg_record_84_t x, ltedfapeg_array_62_t v);

extern ltedfapeg_record_84_t update_ltedfapeg_record_84_project_2(ltedfapeg_record_84_t x, uint32_t v);

extern ltedfapeg_record_84_t update_ltedfapeg_record_84_project_3(ltedfapeg_record_84_t x, uint8_t v);


//good_loop?

struct ltedfapeg_funtype_85_s;
        typedef struct ltedfapeg_funtype_85_s * ltedfapeg_funtype_85_t;

struct ltedfapeg_funtype_85_ftbl_s {bool_t (* fptr)(struct ltedfapeg_funtype_85_s *, ltedfapeg_record_84_t);
        bool_t (* mptr)(struct ltedfapeg_funtype_85_s *, ltedfapeg_array_62_t, uint32_t, uint8_t);
        void (* rptr)(struct ltedfapeg_funtype_85_s *);
        struct ltedfapeg_funtype_85_s * (* cptr)(struct ltedfapeg_funtype_85_s *);};
typedef struct ltedfapeg_funtype_85_ftbl_s * ltedfapeg_funtype_85_ftbl_t;

struct ltedfapeg_funtype_85_hashentry_s {uint32_t keyhash; ltedfapeg_record_84_t key; bool_t value;}; 
typedef struct ltedfapeg_funtype_85_hashentry_s ltedfapeg_funtype_85_hashentry_t;

struct ltedfapeg_funtype_85_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_85_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_85_htbl_s * ltedfapeg_funtype_85_htbl_t;

struct ltedfapeg_funtype_85_s {uint32_t count;
        ltedfapeg_funtype_85_ftbl_t ftbl;
        ltedfapeg_funtype_85_htbl_t htbl;};
typedef struct ltedfapeg_funtype_85_s * ltedfapeg_funtype_85_t;

extern void release_ltedfapeg_funtype_85(ltedfapeg_funtype_85_t x);

extern ltedfapeg_funtype_85_t copy_ltedfapeg_funtype_85(ltedfapeg_funtype_85_t x);

extern bool_t equal_ltedfapeg_funtype_85(ltedfapeg_funtype_85_t x, ltedfapeg_funtype_85_t y);

extern char* json_ltedfapeg_funtype_85(ltedfapeg_funtype_85_t x);




struct ltedfapeg_closure_86_s;
        typedef struct ltedfapeg_closure_86_s * ltedfapeg_closure_86_t;

struct ltedfapeg_closure_86_s {uint32_t count;
         ltedfapeg_funtype_85_ftbl_t ftbl;
         ltedfapeg_funtype_85_htbl_t htbl;
        uint32_t fvar_1;
        ltedfapeg__lang_spec_t fvar_2;};

bool_t f_ltedfapeg_closure_86(struct ltedfapeg_closure_86_s * closure, ltedfapeg_record_84_t bvar);

bool_t m_ltedfapeg_closure_86(struct ltedfapeg_closure_86_s * closure, ltedfapeg_array_62_t bvar_1, uint32_t bvar_2, uint8_t bvar_3);

extern bool_t h_ltedfapeg_closure_86(ltedfapeg_array_62_t ivar_5, uint32_t ivar_7, uint8_t ivar_8, uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2);

ltedfapeg_closure_86_t new_ltedfapeg_closure_86(void);

void release_ltedfapeg_closure_86(ltedfapeg_funtype_85_t closure);

ltedfapeg_closure_86_t copy_ltedfapeg_closure_86(ltedfapeg_closure_86_t x);


//good_good?

struct ltedfapeg_record_87_s {
        uint32_t count; 
        ltedfapeg_array_62_t project_1;
        uint32_t project_2;
        uint8_t project_3;
        uint64_t project_4;
        mpz_t project_5;};
typedef struct ltedfapeg_record_87_s * ltedfapeg_record_87_t;

extern ltedfapeg_record_87_t new_ltedfapeg_record_87(void);

extern void release_ltedfapeg_record_87(ltedfapeg_record_87_t x);

extern ltedfapeg_record_87_t copy_ltedfapeg_record_87(ltedfapeg_record_87_t x);

extern bool_t equal_ltedfapeg_record_87(ltedfapeg_record_87_t x, ltedfapeg_record_87_t y);
extern char * json_ltedfapeg_record_87(ltedfapeg_record_87_t x);

typedef struct actual_ltedfapeg_record_87_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_record_87_t;
extern void release_ltedfapeg_record_87_ptr(pointer_t x, type_actual_t ltedfapeg_record_87);

extern bool_t equal_ltedfapeg_record_87_ptr(pointer_t x, pointer_t y, actual_ltedfapeg_record_87_t T);

extern char * json_ltedfapeg_record_87_ptr(pointer_t x,  actual_ltedfapeg_record_87_t T);

actual_ltedfapeg_record_87_t actual_ltedfapeg_record_87(void);

extern ltedfapeg_record_87_t update_ltedfapeg_record_87_project_1(ltedfapeg_record_87_t x, ltedfapeg_array_62_t v);

extern ltedfapeg_record_87_t update_ltedfapeg_record_87_project_2(ltedfapeg_record_87_t x, uint32_t v);

extern ltedfapeg_record_87_t update_ltedfapeg_record_87_project_3(ltedfapeg_record_87_t x, uint8_t v);

extern ltedfapeg_record_87_t update_ltedfapeg_record_87_project_4(ltedfapeg_record_87_t x, uint64_t v);

extern ltedfapeg_record_87_t update_ltedfapeg_record_87_project_5(ltedfapeg_record_87_t x, mpz_ptr_t v);


//good_good?

struct ltedfapeg_funtype_88_s;
        typedef struct ltedfapeg_funtype_88_s * ltedfapeg_funtype_88_t;

struct ltedfapeg_funtype_88_ftbl_s {bool_t (* fptr)(struct ltedfapeg_funtype_88_s *, ltedfapeg_record_87_t);
        bool_t (* mptr)(struct ltedfapeg_funtype_88_s *, ltedfapeg_array_62_t, uint32_t, uint8_t, uint64_t, mpz_ptr_t);
        void (* rptr)(struct ltedfapeg_funtype_88_s *);
        struct ltedfapeg_funtype_88_s * (* cptr)(struct ltedfapeg_funtype_88_s *);};
typedef struct ltedfapeg_funtype_88_ftbl_s * ltedfapeg_funtype_88_ftbl_t;

struct ltedfapeg_funtype_88_hashentry_s {uint32_t keyhash; ltedfapeg_record_87_t key; bool_t value;}; 
typedef struct ltedfapeg_funtype_88_hashentry_s ltedfapeg_funtype_88_hashentry_t;

struct ltedfapeg_funtype_88_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_88_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_88_htbl_s * ltedfapeg_funtype_88_htbl_t;

struct ltedfapeg_funtype_88_s {uint32_t count;
        ltedfapeg_funtype_88_ftbl_t ftbl;
        ltedfapeg_funtype_88_htbl_t htbl;};
typedef struct ltedfapeg_funtype_88_s * ltedfapeg_funtype_88_t;

extern void release_ltedfapeg_funtype_88(ltedfapeg_funtype_88_t x);

extern ltedfapeg_funtype_88_t copy_ltedfapeg_funtype_88(ltedfapeg_funtype_88_t x);

extern bool_t equal_ltedfapeg_funtype_88(ltedfapeg_funtype_88_t x, ltedfapeg_funtype_88_t y);

extern char* json_ltedfapeg_funtype_88(ltedfapeg_funtype_88_t x);




struct ltedfapeg_closure_89_s;
        typedef struct ltedfapeg_closure_89_s * ltedfapeg_closure_89_t;

struct ltedfapeg_closure_89_s {uint32_t count;
         ltedfapeg_funtype_88_ftbl_t ftbl;
         ltedfapeg_funtype_88_htbl_t htbl;
        ltedfapeg_array_82_t fvar_1;
        uint32_t fvar_2;
        ltedfapeg__lang_spec_t fvar_3;};

bool_t f_ltedfapeg_closure_89(struct ltedfapeg_closure_89_s * closure, ltedfapeg_record_87_t bvar);

bool_t m_ltedfapeg_closure_89(struct ltedfapeg_closure_89_s * closure, ltedfapeg_array_62_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4, mpz_ptr_t bvar_5);

extern bool_t h_ltedfapeg_closure_89(ltedfapeg_array_62_t ivar_9, uint32_t ivar_11, uint8_t ivar_12, uint64_t ivar_13, mpz_ptr_t ivar_14, ltedfapeg_array_82_t ivar_3, uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2);

ltedfapeg_closure_89_t new_ltedfapeg_closure_89(void);

void release_ltedfapeg_closure_89(ltedfapeg_funtype_88_t closure);

ltedfapeg_closure_89_t copy_ltedfapeg_closure_89(ltedfapeg_closure_89_t x);


//good_entry?

struct ltedfapeg_record_90_s {
        uint32_t count; 
        ltedfapeg_array_62_t project_1;
        uint32_t project_2;
        uint8_t project_3;
        ltedfapeg__ent_adt_t project_4;};
typedef struct ltedfapeg_record_90_s * ltedfapeg_record_90_t;

extern ltedfapeg_record_90_t new_ltedfapeg_record_90(void);

extern void release_ltedfapeg_record_90(ltedfapeg_record_90_t x);

extern ltedfapeg_record_90_t copy_ltedfapeg_record_90(ltedfapeg_record_90_t x);

extern bool_t equal_ltedfapeg_record_90(ltedfapeg_record_90_t x, ltedfapeg_record_90_t y);
extern char * json_ltedfapeg_record_90(ltedfapeg_record_90_t x);

typedef struct actual_ltedfapeg_record_90_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_record_90_t;
extern void release_ltedfapeg_record_90_ptr(pointer_t x, type_actual_t ltedfapeg_record_90);

extern bool_t equal_ltedfapeg_record_90_ptr(pointer_t x, pointer_t y, actual_ltedfapeg_record_90_t T);

extern char * json_ltedfapeg_record_90_ptr(pointer_t x,  actual_ltedfapeg_record_90_t T);

actual_ltedfapeg_record_90_t actual_ltedfapeg_record_90(void);

extern ltedfapeg_record_90_t update_ltedfapeg_record_90_project_1(ltedfapeg_record_90_t x, ltedfapeg_array_62_t v);

extern ltedfapeg_record_90_t update_ltedfapeg_record_90_project_2(ltedfapeg_record_90_t x, uint32_t v);

extern ltedfapeg_record_90_t update_ltedfapeg_record_90_project_3(ltedfapeg_record_90_t x, uint8_t v);

extern ltedfapeg_record_90_t update_ltedfapeg_record_90_project_4(ltedfapeg_record_90_t x, ltedfapeg__ent_adt_t v);


//good_entry?

struct ltedfapeg_funtype_91_s;
        typedef struct ltedfapeg_funtype_91_s * ltedfapeg_funtype_91_t;

struct ltedfapeg_funtype_91_ftbl_s {bool_t (* fptr)(struct ltedfapeg_funtype_91_s *, ltedfapeg_record_90_t);
        bool_t (* mptr)(struct ltedfapeg_funtype_91_s *, ltedfapeg_array_62_t, uint32_t, uint8_t, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapeg_funtype_91_s *);
        struct ltedfapeg_funtype_91_s * (* cptr)(struct ltedfapeg_funtype_91_s *);};
typedef struct ltedfapeg_funtype_91_ftbl_s * ltedfapeg_funtype_91_ftbl_t;

struct ltedfapeg_funtype_91_hashentry_s {uint32_t keyhash; ltedfapeg_record_90_t key; bool_t value;}; 
typedef struct ltedfapeg_funtype_91_hashentry_s ltedfapeg_funtype_91_hashentry_t;

struct ltedfapeg_funtype_91_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_91_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_91_htbl_s * ltedfapeg_funtype_91_htbl_t;

struct ltedfapeg_funtype_91_s {uint32_t count;
        ltedfapeg_funtype_91_ftbl_t ftbl;
        ltedfapeg_funtype_91_htbl_t htbl;};
typedef struct ltedfapeg_funtype_91_s * ltedfapeg_funtype_91_t;

extern void release_ltedfapeg_funtype_91(ltedfapeg_funtype_91_t x);

extern ltedfapeg_funtype_91_t copy_ltedfapeg_funtype_91(ltedfapeg_funtype_91_t x);

extern bool_t equal_ltedfapeg_funtype_91(ltedfapeg_funtype_91_t x, ltedfapeg_funtype_91_t y);

extern char* json_ltedfapeg_funtype_91(ltedfapeg_funtype_91_t x);




struct ltedfapeg_closure_92_s;
        typedef struct ltedfapeg_closure_92_s * ltedfapeg_closure_92_t;

struct ltedfapeg_closure_92_s {uint32_t count;
         ltedfapeg_funtype_91_ftbl_t ftbl;
         ltedfapeg_funtype_91_htbl_t htbl;
        uint32_t fvar_1;
        ltedfapeg__lang_spec_t fvar_2;
        ltedfapeg_array_82_t fvar_3;};

bool_t f_ltedfapeg_closure_92(struct ltedfapeg_closure_92_s * closure, ltedfapeg_record_90_t bvar);

bool_t m_ltedfapeg_closure_92(struct ltedfapeg_closure_92_s * closure, ltedfapeg_array_62_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, ltedfapeg__ent_adt_t bvar_4);

extern bool_t h_ltedfapeg_closure_92(ltedfapeg_array_62_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, ltedfapeg__ent_adt_t ivar_10, uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapeg_array_82_t ivar_3);

ltedfapeg_closure_92_t new_ltedfapeg_closure_92(void);

void release_ltedfapeg_closure_92(ltedfapeg_funtype_91_t closure);

ltedfapeg_closure_92_t copy_ltedfapeg_closure_92(ltedfapeg_closure_92_t x);




struct ltedfapeg_closure_93_s;
        typedef struct ltedfapeg_closure_93_s * ltedfapeg_closure_93_t;

struct ltedfapeg_closure_93_s {uint32_t count;
         ltedfapeg_funtype_91_ftbl_t ftbl;
         ltedfapeg_funtype_91_htbl_t htbl;
        uint32_t fvar_1;
        ltedfapeg__lang_spec_t fvar_2;
        ltedfapeg_array_82_t fvar_3;};

bool_t f_ltedfapeg_closure_93(struct ltedfapeg_closure_93_s * closure, ltedfapeg_record_90_t bvar);

bool_t m_ltedfapeg_closure_93(struct ltedfapeg_closure_93_s * closure, ltedfapeg_array_62_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, ltedfapeg__ent_adt_t bvar_4);

extern bool_t h_ltedfapeg_closure_93(ltedfapeg_array_62_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, ltedfapeg__ent_adt_t ivar_10, uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapeg_array_82_t ivar_3);

ltedfapeg_closure_93_t new_ltedfapeg_closure_93(void);

void release_ltedfapeg_closure_93(ltedfapeg_funtype_91_t closure);

ltedfapeg_closure_93_t copy_ltedfapeg_closure_93(ltedfapeg_closure_93_t x);


//good_tscaffold?

struct ltedfapeg_funtype_94_s;
        typedef struct ltedfapeg_funtype_94_s * ltedfapeg_funtype_94_t;

struct ltedfapeg_funtype_94_ftbl_s {bool_t (* fptr)(struct ltedfapeg_funtype_94_s *, ltedfapeg_array_62_t);
        bool_t (* mptr)(struct ltedfapeg_funtype_94_s *, ltedfapeg_array_62_t);
        void (* rptr)(struct ltedfapeg_funtype_94_s *);
        struct ltedfapeg_funtype_94_s * (* cptr)(struct ltedfapeg_funtype_94_s *);};
typedef struct ltedfapeg_funtype_94_ftbl_s * ltedfapeg_funtype_94_ftbl_t;

struct ltedfapeg_funtype_94_hashentry_s {uint32_t keyhash; ltedfapeg_array_62_t key; bool_t value;}; 
typedef struct ltedfapeg_funtype_94_hashentry_s ltedfapeg_funtype_94_hashentry_t;

struct ltedfapeg_funtype_94_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_94_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_94_htbl_s * ltedfapeg_funtype_94_htbl_t;

struct ltedfapeg_funtype_94_s {uint32_t count;
        ltedfapeg_funtype_94_ftbl_t ftbl;
        ltedfapeg_funtype_94_htbl_t htbl;};
typedef struct ltedfapeg_funtype_94_s * ltedfapeg_funtype_94_t;

extern void release_ltedfapeg_funtype_94(ltedfapeg_funtype_94_t x);

extern ltedfapeg_funtype_94_t copy_ltedfapeg_funtype_94(ltedfapeg_funtype_94_t x);

extern bool_t equal_ltedfapeg_funtype_94(ltedfapeg_funtype_94_t x, ltedfapeg_funtype_94_t y);

extern char* json_ltedfapeg_funtype_94(ltedfapeg_funtype_94_t x);




struct ltedfapeg_closure_95_s;
        typedef struct ltedfapeg_closure_95_s * ltedfapeg_closure_95_t;

struct ltedfapeg_closure_95_s {uint32_t count;
         ltedfapeg_funtype_94_ftbl_t ftbl;
         ltedfapeg_funtype_94_htbl_t htbl;
        uint32_t fvar_1;};

bool_t f_ltedfapeg_closure_95(struct ltedfapeg_closure_95_s * closure, ltedfapeg_array_62_t bvar);

bool_t m_ltedfapeg_closure_95(struct ltedfapeg_closure_95_s * closure, ltedfapeg_array_62_t bvar);

extern bool_t h_ltedfapeg_closure_95(ltedfapeg_array_62_t ivar_6, uint32_t ivar_1);

ltedfapeg_closure_95_t new_ltedfapeg_closure_95(void);

void release_ltedfapeg_closure_95(ltedfapeg_funtype_94_t closure);

ltedfapeg_closure_95_t copy_ltedfapeg_closure_95(ltedfapeg_closure_95_t x);




struct ltedfapeg_closure_96_s;
        typedef struct ltedfapeg_closure_96_s * ltedfapeg_closure_96_t;

struct ltedfapeg_closure_96_s {uint32_t count;
         ltedfapeg_funtype_60_ftbl_t ftbl;
         ltedfapeg_funtype_60_htbl_t htbl;
        ltedfapeg_array_62_t fvar_1;
        uint32_t fvar_2;};

bool_t f_ltedfapeg_closure_96(struct ltedfapeg_closure_96_s * closure, ltedfapeg_record_9_t bvar);

bool_t m_ltedfapeg_closure_96(struct ltedfapeg_closure_96_s * closure, uint32_t bvar_1, uint8_t bvar_2);

extern bool_t h_ltedfapeg_closure_96(uint32_t ivar_5, uint8_t ivar_6, ltedfapeg_array_62_t ivar_2, uint32_t ivar_1);

ltedfapeg_closure_96_t new_ltedfapeg_closure_96(void);

void release_ltedfapeg_closure_96(ltedfapeg_funtype_60_t closure);

ltedfapeg_closure_96_t copy_ltedfapeg_closure_96(ltedfapeg_closure_96_t x);


//fine_scaffold?

struct ltedfapeg_funtype_97_s;
        typedef struct ltedfapeg_funtype_97_s * ltedfapeg_funtype_97_t;

struct ltedfapeg_funtype_97_ftbl_s {ltedfapeg_funtype_94_t (* fptr)(struct ltedfapeg_funtype_97_s *, ltedfapeg_record_9_t);
        ltedfapeg_funtype_94_t (* mptr)(struct ltedfapeg_funtype_97_s *, uint32_t, uint8_t);
        void (* rptr)(struct ltedfapeg_funtype_97_s *);
        struct ltedfapeg_funtype_97_s * (* cptr)(struct ltedfapeg_funtype_97_s *);};
typedef struct ltedfapeg_funtype_97_ftbl_s * ltedfapeg_funtype_97_ftbl_t;

struct ltedfapeg_funtype_97_hashentry_s {uint32_t keyhash; ltedfapeg_record_9_t key; ltedfapeg_funtype_94_t value;}; 
typedef struct ltedfapeg_funtype_97_hashentry_s ltedfapeg_funtype_97_hashentry_t;

struct ltedfapeg_funtype_97_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_97_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_97_htbl_s * ltedfapeg_funtype_97_htbl_t;

struct ltedfapeg_funtype_97_s {uint32_t count;
        ltedfapeg_funtype_97_ftbl_t ftbl;
        ltedfapeg_funtype_97_htbl_t htbl;};
typedef struct ltedfapeg_funtype_97_s * ltedfapeg_funtype_97_t;

extern void release_ltedfapeg_funtype_97(ltedfapeg_funtype_97_t x);

extern ltedfapeg_funtype_97_t copy_ltedfapeg_funtype_97(ltedfapeg_funtype_97_t x);

extern bool_t equal_ltedfapeg_funtype_97(ltedfapeg_funtype_97_t x, ltedfapeg_funtype_97_t y);

extern char* json_ltedfapeg_funtype_97(ltedfapeg_funtype_97_t x);




struct ltedfapeg_closure_98_s;
        typedef struct ltedfapeg_closure_98_s * ltedfapeg_closure_98_t;

struct ltedfapeg_closure_98_s {uint32_t count;
         ltedfapeg_funtype_97_ftbl_t ftbl;
         ltedfapeg_funtype_97_htbl_t htbl;
        ltedfapeg_array_82_t fvar_1;
        ltedfapeg__lang_spec_t fvar_2;
        uint32_t fvar_3;};

ltedfapeg_funtype_94_t f_ltedfapeg_closure_98(struct ltedfapeg_closure_98_s * closure, ltedfapeg_record_9_t bvar);

ltedfapeg_funtype_94_t m_ltedfapeg_closure_98(struct ltedfapeg_closure_98_s * closure, uint32_t bvar_1, uint8_t bvar_2);

extern ltedfapeg_funtype_94_t h_ltedfapeg_closure_98(uint32_t ivar_7, uint8_t ivar_8, ltedfapeg_array_82_t ivar_3, ltedfapeg__lang_spec_t ivar_2, uint32_t ivar_1);

ltedfapeg_closure_98_t new_ltedfapeg_closure_98(void);

void release_ltedfapeg_closure_98(ltedfapeg_funtype_97_t closure);

ltedfapeg_closure_98_t copy_ltedfapeg_closure_98(ltedfapeg_closure_98_t x);




struct ltedfapeg_closure_99_s;
        typedef struct ltedfapeg_closure_99_s * ltedfapeg_closure_99_t;

struct ltedfapeg_closure_99_s {uint32_t count;
         ltedfapeg_funtype_94_ftbl_t ftbl;
         ltedfapeg_funtype_94_htbl_t htbl;
        uint32_t fvar_1;
        uint32_t fvar_2;
        uint8_t fvar_3;
        ltedfapeg__lang_spec_t fvar_4;
        ltedfapeg_array_82_t fvar_5;};

bool_t f_ltedfapeg_closure_99(struct ltedfapeg_closure_99_s * closure, ltedfapeg_array_62_t bvar);

bool_t m_ltedfapeg_closure_99(struct ltedfapeg_closure_99_s * closure, ltedfapeg_array_62_t bvar);

extern bool_t h_ltedfapeg_closure_99(ltedfapeg_array_62_t ivar_11, uint32_t ivar_7, uint32_t ivar_1, uint8_t ivar_8, ltedfapeg__lang_spec_t ivar_2, ltedfapeg_array_82_t ivar_3);

ltedfapeg_closure_99_t new_ltedfapeg_closure_99(void);

void release_ltedfapeg_closure_99(ltedfapeg_funtype_94_t closure);

ltedfapeg_closure_99_t copy_ltedfapeg_closure_99(ltedfapeg_closure_99_t x);


//step

struct ltedfapeg_record_100_s {
        uint32_t count; 
        ltedfapeg_array_62_t scaf;
        uint64_t depth;
        ltedfapeg__ent_adt_t stack;
        bool_t lflag;};
typedef struct ltedfapeg_record_100_s * ltedfapeg_record_100_t;

extern ltedfapeg_record_100_t new_ltedfapeg_record_100(void);

extern void release_ltedfapeg_record_100(ltedfapeg_record_100_t x);

extern ltedfapeg_record_100_t copy_ltedfapeg_record_100(ltedfapeg_record_100_t x);

extern bool_t equal_ltedfapeg_record_100(ltedfapeg_record_100_t x, ltedfapeg_record_100_t y);
extern char * json_ltedfapeg_record_100(ltedfapeg_record_100_t x);

typedef struct actual_ltedfapeg_record_100_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_record_100_t;
extern void release_ltedfapeg_record_100_ptr(pointer_t x, type_actual_t ltedfapeg_record_100);

extern bool_t equal_ltedfapeg_record_100_ptr(pointer_t x, pointer_t y, actual_ltedfapeg_record_100_t T);

extern char * json_ltedfapeg_record_100_ptr(pointer_t x,  actual_ltedfapeg_record_100_t T);

actual_ltedfapeg_record_100_t actual_ltedfapeg_record_100(void);

extern ltedfapeg_record_100_t update_ltedfapeg_record_100_scaf(ltedfapeg_record_100_t x, ltedfapeg_array_62_t v);

extern ltedfapeg_record_100_t update_ltedfapeg_record_100_depth(ltedfapeg_record_100_t x, uint64_t v);

extern ltedfapeg_record_100_t update_ltedfapeg_record_100_stack(ltedfapeg_record_100_t x, ltedfapeg__ent_adt_t v);

extern ltedfapeg_record_100_t update_ltedfapeg_record_100_lflag(ltedfapeg_record_100_t x, bool_t v);


//step

struct ltedfapeg_funtype_101_s;
        typedef struct ltedfapeg_funtype_101_s * ltedfapeg_funtype_101_t;

struct ltedfapeg_funtype_101_ftbl_s {ltedfapeg_record_100_t (* fptr)(struct ltedfapeg_funtype_101_s *, ltedfapeg_record_100_t);
        ltedfapeg_record_100_t (* mptr)(struct ltedfapeg_funtype_101_s *, ltedfapeg_record_100_t);
        void (* rptr)(struct ltedfapeg_funtype_101_s *);
        struct ltedfapeg_funtype_101_s * (* cptr)(struct ltedfapeg_funtype_101_s *);};
typedef struct ltedfapeg_funtype_101_ftbl_s * ltedfapeg_funtype_101_ftbl_t;

struct ltedfapeg_funtype_101_hashentry_s {uint32_t keyhash; ltedfapeg_record_100_t key; ltedfapeg_record_100_t value;}; 
typedef struct ltedfapeg_funtype_101_hashentry_s ltedfapeg_funtype_101_hashentry_t;

struct ltedfapeg_funtype_101_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_101_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_101_htbl_s * ltedfapeg_funtype_101_htbl_t;

struct ltedfapeg_funtype_101_s {uint32_t count;
        ltedfapeg_funtype_101_ftbl_t ftbl;
        ltedfapeg_funtype_101_htbl_t htbl;};
typedef struct ltedfapeg_funtype_101_s * ltedfapeg_funtype_101_t;

extern void release_ltedfapeg_funtype_101(ltedfapeg_funtype_101_t x);

extern ltedfapeg_funtype_101_t copy_ltedfapeg_funtype_101(ltedfapeg_funtype_101_t x);

extern bool_t equal_ltedfapeg_funtype_101(ltedfapeg_funtype_101_t x, ltedfapeg_funtype_101_t y);

extern char* json_ltedfapeg_funtype_101(ltedfapeg_funtype_101_t x);




struct ltedfapeg_closure_102_s;
        typedef struct ltedfapeg_closure_102_s * ltedfapeg_closure_102_t;

struct ltedfapeg_closure_102_s {uint32_t count;
         ltedfapeg_funtype_101_ftbl_t ftbl;
         ltedfapeg_funtype_101_htbl_t htbl;
        uint32_t fvar_1;
        ltedfapeg_array_82_t fvar_2;
        ltedfapeg__lang_spec_t fvar_3;};

ltedfapeg_record_100_t f_ltedfapeg_closure_102(struct ltedfapeg_closure_102_s * closure, ltedfapeg_record_100_t bvar);

ltedfapeg_record_100_t m_ltedfapeg_closure_102(struct ltedfapeg_closure_102_s * closure, ltedfapeg_record_100_t bvar);

extern ltedfapeg_record_100_t h_ltedfapeg_closure_102(ltedfapeg_record_100_t ivar_9, uint32_t ivar_1, ltedfapeg_array_82_t ivar_3, ltedfapeg__lang_spec_t ivar_2);

ltedfapeg_closure_102_t new_ltedfapeg_closure_102(void);

void release_ltedfapeg_closure_102(ltedfapeg_funtype_101_t closure);

ltedfapeg_closure_102_t copy_ltedfapeg_closure_102(ltedfapeg_closure_102_t x);


//size

struct ltedfapeg_funtype_103_s;
        typedef struct ltedfapeg_funtype_103_s * ltedfapeg_funtype_103_t;

struct ltedfapeg_funtype_103_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapeg_funtype_103_s *, ltedfapeg_record_100_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapeg_funtype_103_s *, ltedfapeg_record_100_t);
        void (* rptr)(struct ltedfapeg_funtype_103_s *);
        struct ltedfapeg_funtype_103_s * (* cptr)(struct ltedfapeg_funtype_103_s *);};
typedef struct ltedfapeg_funtype_103_ftbl_s * ltedfapeg_funtype_103_ftbl_t;

struct ltedfapeg_funtype_103_hashentry_s {uint32_t keyhash; ltedfapeg_record_100_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapeg_funtype_103_hashentry_s ltedfapeg_funtype_103_hashentry_t;

struct ltedfapeg_funtype_103_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_103_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_103_htbl_s * ltedfapeg_funtype_103_htbl_t;

struct ltedfapeg_funtype_103_s {uint32_t count;
        ltedfapeg_funtype_103_ftbl_t ftbl;
        ltedfapeg_funtype_103_htbl_t htbl;};
typedef struct ltedfapeg_funtype_103_s * ltedfapeg_funtype_103_t;

extern void release_ltedfapeg_funtype_103(ltedfapeg_funtype_103_t x);

extern ltedfapeg_funtype_103_t copy_ltedfapeg_funtype_103(ltedfapeg_funtype_103_t x);

extern bool_t equal_ltedfapeg_funtype_103(ltedfapeg_funtype_103_t x, ltedfapeg_funtype_103_t y);

extern char* json_ltedfapeg_funtype_103(ltedfapeg_funtype_103_t x);




struct ltedfapeg_closure_104_s;
        typedef struct ltedfapeg_closure_104_s * ltedfapeg_closure_104_t;

struct ltedfapeg_closure_104_s {uint32_t count;
         ltedfapeg_funtype_103_ftbl_t ftbl;
         ltedfapeg_funtype_103_htbl_t htbl;
        uint32_t fvar_1;};

ordstruct_adt__ordstruct_adt_t f_ltedfapeg_closure_104(struct ltedfapeg_closure_104_s * closure, ltedfapeg_record_100_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltedfapeg_closure_104(struct ltedfapeg_closure_104_s * closure, ltedfapeg_record_100_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltedfapeg_closure_104(ltedfapeg_record_100_t ivar_8, uint32_t ivar_1);

ltedfapeg_closure_104_t new_ltedfapeg_closure_104(void);

void release_ltedfapeg_closure_104(ltedfapeg_funtype_103_t closure);

ltedfapeg_closure_104_t copy_ltedfapeg_closure_104(ltedfapeg_closure_104_t x);




struct ltedfapeg_closure_105_s;
        typedef struct ltedfapeg_closure_105_s * ltedfapeg_closure_105_t;

struct ltedfapeg_closure_105_s {uint32_t count;
         ltedfapeg_funtype_55_ftbl_t ftbl;
         ltedfapeg_funtype_55_htbl_t htbl;};

bool_t f_ltedfapeg_closure_105(struct ltedfapeg_closure_105_s * closure, ltedfapeg__ent_adt_t bvar);

bool_t m_ltedfapeg_closure_105(struct ltedfapeg_closure_105_s * closure, ltedfapeg__ent_adt_t bvar);

extern bool_t h_ltedfapeg_closure_105(ltedfapeg__ent_adt_t ivar_19);

ltedfapeg_closure_105_t new_ltedfapeg_closure_105(void);

void release_ltedfapeg_closure_105(ltedfapeg_funtype_55_t closure);

ltedfapeg_closure_105_t copy_ltedfapeg_closure_105(ltedfapeg_closure_105_t x);


//doparse

struct ltedfapeg_funtype_106_s;
        typedef struct ltedfapeg_funtype_106_s * ltedfapeg_funtype_106_t;

struct ltedfapeg_funtype_106_ftbl_s {ltedfapeg__ent_adt_t (* fptr)(struct ltedfapeg_funtype_106_s *, uint8_t);
        ltedfapeg__ent_adt_t (* mptr)(struct ltedfapeg_funtype_106_s *, uint8_t);
        void (* rptr)(struct ltedfapeg_funtype_106_s *);
        struct ltedfapeg_funtype_106_s * (* cptr)(struct ltedfapeg_funtype_106_s *);};
typedef struct ltedfapeg_funtype_106_ftbl_s * ltedfapeg_funtype_106_ftbl_t;

struct ltedfapeg_funtype_106_hashentry_s {uint32_t keyhash; uint8_t key; ltedfapeg__ent_adt_t value;}; 
typedef struct ltedfapeg_funtype_106_hashentry_s ltedfapeg_funtype_106_hashentry_t;

struct ltedfapeg_funtype_106_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_106_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_106_htbl_s * ltedfapeg_funtype_106_htbl_t;

struct ltedfapeg_funtype_106_s {uint32_t count;
        ltedfapeg_funtype_106_ftbl_t ftbl;
        ltedfapeg_funtype_106_htbl_t htbl;};
typedef struct ltedfapeg_funtype_106_s * ltedfapeg_funtype_106_t;

extern void release_ltedfapeg_funtype_106(ltedfapeg_funtype_106_t x);

extern ltedfapeg_funtype_106_t copy_ltedfapeg_funtype_106(ltedfapeg_funtype_106_t x);

extern uint32_t lookup_ltedfapeg_funtype_106(ltedfapeg_funtype_106_htbl_t htbl, uint8_t i, uint32_t ihash);

extern ltedfapeg_funtype_106_t dupdate_ltedfapeg_funtype_106(ltedfapeg_funtype_106_t a, uint8_t i, ltedfapeg__ent_adt_t v);

extern ltedfapeg_funtype_106_t update_ltedfapeg_funtype_106(ltedfapeg_funtype_106_t a, uint8_t i, ltedfapeg__ent_adt_t v);

extern bool_t equal_ltedfapeg_funtype_106(ltedfapeg_funtype_106_t x, ltedfapeg_funtype_106_t y);

extern char* json_ltedfapeg_funtype_106(ltedfapeg_funtype_106_t x);




struct ltedfapeg_closure_107_s;
        typedef struct ltedfapeg_closure_107_s * ltedfapeg_closure_107_t;

struct ltedfapeg_closure_107_s {uint32_t count;
         ltedfapeg_funtype_106_ftbl_t ftbl;
         ltedfapeg_funtype_106_htbl_t htbl;};

ltedfapeg__ent_adt_t f_ltedfapeg_closure_107(struct ltedfapeg_closure_107_s * closure, uint8_t bvar);

ltedfapeg__ent_adt_t m_ltedfapeg_closure_107(struct ltedfapeg_closure_107_s * closure, uint8_t bvar);

extern ltedfapeg__ent_adt_t h_ltedfapeg_closure_107(uint8_t ivar_9);

ltedfapeg_closure_107_t new_ltedfapeg_closure_107(void);

void release_ltedfapeg_closure_107(ltedfapeg_funtype_106_t closure);

ltedfapeg_closure_107_t copy_ltedfapeg_closure_107(ltedfapeg_closure_107_t x);


//doparse

struct ltedfapeg_funtype_108_s;
        typedef struct ltedfapeg_funtype_108_s * ltedfapeg_funtype_108_t;

struct ltedfapeg_funtype_108_ftbl_s {ltedfapeg_funtype_106_t (* fptr)(struct ltedfapeg_funtype_108_s *, uint32_t);
        ltedfapeg_funtype_106_t (* mptr)(struct ltedfapeg_funtype_108_s *, uint32_t);
        void (* rptr)(struct ltedfapeg_funtype_108_s *);
        struct ltedfapeg_funtype_108_s * (* cptr)(struct ltedfapeg_funtype_108_s *);};
typedef struct ltedfapeg_funtype_108_ftbl_s * ltedfapeg_funtype_108_ftbl_t;

struct ltedfapeg_funtype_108_hashentry_s {uint32_t keyhash; uint32_t key; ltedfapeg_funtype_106_t value;}; 
typedef struct ltedfapeg_funtype_108_hashentry_s ltedfapeg_funtype_108_hashentry_t;

struct ltedfapeg_funtype_108_htbl_s {uint32_t size; uint32_t num_entries; ltedfapeg_funtype_108_hashentry_t * data;}; 
typedef struct ltedfapeg_funtype_108_htbl_s * ltedfapeg_funtype_108_htbl_t;

struct ltedfapeg_funtype_108_s {uint32_t count;
        ltedfapeg_funtype_108_ftbl_t ftbl;
        ltedfapeg_funtype_108_htbl_t htbl;};
typedef struct ltedfapeg_funtype_108_s * ltedfapeg_funtype_108_t;

extern void release_ltedfapeg_funtype_108(ltedfapeg_funtype_108_t x);

extern ltedfapeg_funtype_108_t copy_ltedfapeg_funtype_108(ltedfapeg_funtype_108_t x);

extern uint32_t lookup_ltedfapeg_funtype_108(ltedfapeg_funtype_108_htbl_t htbl, uint32_t i, uint32_t ihash);

extern ltedfapeg_funtype_108_t dupdate_ltedfapeg_funtype_108(ltedfapeg_funtype_108_t a, uint32_t i, ltedfapeg_funtype_106_t v);

extern ltedfapeg_funtype_108_t update_ltedfapeg_funtype_108(ltedfapeg_funtype_108_t a, uint32_t i, ltedfapeg_funtype_106_t v);

extern bool_t equal_ltedfapeg_funtype_108(ltedfapeg_funtype_108_t x, ltedfapeg_funtype_108_t y);

extern char* json_ltedfapeg_funtype_108(ltedfapeg_funtype_108_t x);


//doparse

struct ltedfapeg_record_109_s {
        uint32_t count; 
        uint8_t depth;
        bool_t lflag;
        ltedfapeg_funtype_108_t scaf;
        ltedfapeg__ent_adt_t stack;};
typedef struct ltedfapeg_record_109_s * ltedfapeg_record_109_t;

extern ltedfapeg_record_109_t new_ltedfapeg_record_109(void);

extern void release_ltedfapeg_record_109(ltedfapeg_record_109_t x);

extern ltedfapeg_record_109_t copy_ltedfapeg_record_109(ltedfapeg_record_109_t x);

extern bool_t equal_ltedfapeg_record_109(ltedfapeg_record_109_t x, ltedfapeg_record_109_t y);
extern char * json_ltedfapeg_record_109(ltedfapeg_record_109_t x);

typedef struct actual_ltedfapeg_record_109_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapeg_record_109_t;
extern void release_ltedfapeg_record_109_ptr(pointer_t x, type_actual_t ltedfapeg_record_109);

extern bool_t equal_ltedfapeg_record_109_ptr(pointer_t x, pointer_t y, actual_ltedfapeg_record_109_t T);

extern char * json_ltedfapeg_record_109_ptr(pointer_t x,  actual_ltedfapeg_record_109_t T);

actual_ltedfapeg_record_109_t actual_ltedfapeg_record_109(void);

extern ltedfapeg_record_109_t update_ltedfapeg_record_109_depth(ltedfapeg_record_109_t x, uint8_t v);

extern ltedfapeg_record_109_t update_ltedfapeg_record_109_lflag(ltedfapeg_record_109_t x, bool_t v);

extern ltedfapeg_record_109_t update_ltedfapeg_record_109_scaf(ltedfapeg_record_109_t x, ltedfapeg_funtype_108_t v);

extern ltedfapeg_record_109_t update_ltedfapeg_record_109_stack(ltedfapeg_record_109_t x, ltedfapeg__ent_adt_t v);




struct ltedfapeg_closure_110_s;
        typedef struct ltedfapeg_closure_110_s * ltedfapeg_closure_110_t;

struct ltedfapeg_closure_110_s {uint32_t count;
         ltedfapeg_funtype_108_ftbl_t ftbl;
         ltedfapeg_funtype_108_htbl_t htbl;
        uint32_t fvar_1;
        ltedfapeg_funtype_106_t fvar_2;};

ltedfapeg_funtype_106_t f_ltedfapeg_closure_110(struct ltedfapeg_closure_110_s * closure, uint32_t bvar);

ltedfapeg_funtype_106_t m_ltedfapeg_closure_110(struct ltedfapeg_closure_110_s * closure, uint32_t bvar);

extern ltedfapeg_funtype_106_t h_ltedfapeg_closure_110(uint32_t ivar_22, uint32_t ivar_1, ltedfapeg_funtype_106_t ivar_5);

ltedfapeg_closure_110_t new_ltedfapeg_closure_110(void);

void release_ltedfapeg_closure_110(ltedfapeg_funtype_108_t closure);

ltedfapeg_closure_110_t copy_ltedfapeg_closure_110(ltedfapeg_closure_110_t x);



extern uint8_t ltedfapeg__num_non_terminals(void);

extern bool_t r_ltedfapeg__failp(ltedfapeg__ent_adt_t ivar_1);

extern bool_t r_ltedfapeg__pendingp(ltedfapeg__ent_adt_t ivar_1);

extern bool_t r_ltedfapeg__loopp(ltedfapeg__ent_adt_t ivar_1);

extern bool_t r_ltedfapeg__goodp(ltedfapeg__ent_adt_t ivar_1);

extern bool_t r_ltedfapeg__pushp(ltedfapeg__ent_adt_t ivar_1);

extern ltedfapeg__ent_adt_t update_ltedfapeg__ent_adt_dep(ltedfapeg__ent_adt_t ivar_1, uint64_t ivar_7);

extern uint64_t ltedfapeg__ent_adt_dep(ltedfapeg__ent_adt_t ivar_1);

extern ltedfapeg__good_t update_ltedfapeg__ent_adt_span(ltedfapeg__ent_adt_t ivar_1, uint32_t ivar_3);

extern uint32_t ltedfapeg__ent_adt_span(ltedfapeg__ent_adt_t ivar_1);

extern ltedfapeg__push_t update_ltedfapeg__ent_adt_pos(ltedfapeg__ent_adt_t ivar_1, uint32_t ivar_3);

extern uint32_t ltedfapeg__ent_adt_pos(ltedfapeg__ent_adt_t ivar_1);

extern ltedfapeg__push_t update_ltedfapeg__ent_adt_nt(ltedfapeg__ent_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t ltedfapeg__ent_adt_nt(ltedfapeg__ent_adt_t ivar_1);

extern ltedfapeg__ent_adt_t ltedfapeg__fail(uint64_t ivar_2);

extern ltedfapeg__ent_adt_t ltedfapeg__pending(void);

extern ltedfapeg__ent_adt_t ltedfapeg__loop(void);

extern ltedfapeg__ent_adt_t ltedfapeg__good(uint64_t ivar_2, uint32_t ivar_3);

extern ltedfapeg__ent_adt_t ltedfapeg__push(uint32_t ivar_2, uint8_t ivar_3);

extern ltedfapeg_funtype_4_t ltedfapeg__ent_ord(void);

extern uint8_t ltedfapeg__ord__1(ltedfapeg__ent_adt_t ivar_1);

extern bool_t ltedfapeg__subterm__1(ltedfapeg__ent_adt_t ivar_1, ltedfapeg__ent_adt_t ivar_2);

extern bool_t ltedfapeg__doublelessp__1(ltedfapeg__ent_adt_t ivar_1, ltedfapeg__ent_adt_t ivar_2);

extern ltedfapeg_funtype_5_t ltedfapeg__reduce_nat__1(ltedfapeg_funtype_6_t ivar_1, mpz_ptr_t ivar_3, mpz_ptr_t ivar_4, ltedfapeg_funtype_8_t ivar_5, ltedfapeg_funtype_10_t ivar_7);

extern ltedfapeg_funtype_5_t ltedfapeg__REDUCE_nat__1(ltedfapeg_funtype_13_t ivar_1, ltedfapeg_funtype_5_t ivar_3, ltedfapeg_funtype_5_t ivar_5, ltedfapeg_funtype_15_t ivar_7, ltedfapeg_funtype_17_t ivar_9);

extern ltedfapeg_funtype_19_t ltedfapeg__reduce_ordinal__1(ltedfapeg_funtype_20_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_4, ltedfapeg_funtype_21_t ivar_5, ltedfapeg_funtype_22_t ivar_7);

extern ltedfapeg_funtype_19_t ltedfapeg__REDUCE_ordinal__1(ltedfapeg_funtype_24_t ivar_1, ltedfapeg_funtype_19_t ivar_3, ltedfapeg_funtype_19_t ivar_5, ltedfapeg_funtype_25_t ivar_7, ltedfapeg_funtype_26_t ivar_9);

extern bool_t r_ltedfapeg__epsilonp(ltedfapeg__prepeg_adt_t ivar_1);

extern bool_t r_ltedfapeg__failurep(ltedfapeg__prepeg_adt_t ivar_1);

extern bool_t r_ltedfapeg__anyp(ltedfapeg__prepeg_adt_t ivar_1);

extern bool_t r_ltedfapeg__terminalp(ltedfapeg__prepeg_adt_t ivar_1);

extern bool_t r_ltedfapeg__ltep(ltedfapeg__prepeg_adt_t ivar_1);

extern ltedfapeg__any_t update_ltedfapeg__prepeg_adt_dfa(ltedfapeg__prepeg_adt_t ivar_1, dfa__dfa_t ivar_3);

extern dfa__dfa_t ltedfapeg__prepeg_adt_dfa(ltedfapeg__prepeg_adt_t ivar_1);

extern ltedfapeg__terminal_t update_ltedfapeg__prepeg_adt_a(ltedfapeg__prepeg_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t ltedfapeg__prepeg_adt_a(ltedfapeg__prepeg_adt_t ivar_1);

extern ltedfapeg__lte_t update_ltedfapeg__prepeg_adt_fst(ltedfapeg__prepeg_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t ltedfapeg__prepeg_adt_fst(ltedfapeg__prepeg_adt_t ivar_1);

extern ltedfapeg__lte_t update_ltedfapeg__prepeg_adt_lthen(ltedfapeg__prepeg_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t ltedfapeg__prepeg_adt_lthen(ltedfapeg__prepeg_adt_t ivar_1);

extern ltedfapeg__lte_t update_ltedfapeg__prepeg_adt_lelse(ltedfapeg__prepeg_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t ltedfapeg__prepeg_adt_lelse(ltedfapeg__prepeg_adt_t ivar_1);

extern ltedfapeg__prepeg_adt_t ltedfapeg__epsilon(void);

extern ltedfapeg__prepeg_adt_t ltedfapeg__failure(void);

extern ltedfapeg__prepeg_adt_t ltedfapeg__any(dfa__dfa_t ivar_2);

extern ltedfapeg__prepeg_adt_t ltedfapeg__terminal(uint8_t ivar_2);

extern ltedfapeg__prepeg_adt_t ltedfapeg__lte(uint8_t ivar_2, uint8_t ivar_3, uint8_t ivar_4);

extern ltedfapeg_funtype_32_t ltedfapeg__prepeg_ord(void);

extern uint8_t ltedfapeg__ord__2(ltedfapeg__prepeg_adt_t ivar_1);

extern bool_t ltedfapeg__subterm__2(ltedfapeg__prepeg_adt_t ivar_1, ltedfapeg__prepeg_adt_t ivar_2);

extern bool_t ltedfapeg__doublelessp__2(ltedfapeg__prepeg_adt_t ivar_1, ltedfapeg__prepeg_adt_t ivar_2);

extern ltedfapeg_funtype_33_t ltedfapeg__reduce_nat__2(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, ltedfapeg_funtype_34_t ivar_3, ltedfapeg_funtype_35_t ivar_5, ltedfapeg_funtype_37_t ivar_7);

extern ltedfapeg_funtype_33_t ltedfapeg__REDUCE_nat__2(ltedfapeg_funtype_33_t ivar_1, ltedfapeg_funtype_33_t ivar_3, ltedfapeg_funtype_40_t ivar_5, ltedfapeg_funtype_42_t ivar_7, ltedfapeg_funtype_44_t ivar_9);

extern ltedfapeg_funtype_46_t ltedfapeg__reduce_ordinal__2(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2, ltedfapeg_funtype_47_t ivar_3, ltedfapeg_funtype_48_t ivar_5, ltedfapeg_funtype_49_t ivar_7);

extern ltedfapeg_funtype_46_t ltedfapeg__REDUCE_ordinal__2(ltedfapeg_funtype_46_t ivar_1, ltedfapeg_funtype_46_t ivar_3, ltedfapeg_funtype_51_t ivar_5, ltedfapeg_funtype_52_t ivar_7, ltedfapeg_funtype_53_t ivar_9);

extern ltedfapeg_funtype_55_t ltedfapeg__good_good_entryp(uint32_t ivar_1, uint32_t ivar_2);

extern ltedfapeg_funtype_55_t ltedfapeg__good_push_entryp(uint32_t ivar_1);

extern ltedfapeg_funtype_55_t ltedfapeg__fine_push_entryp(uint32_t ivar_1);

extern ltedfapeg_funtype_55_t ltedfapeg__nice_entryp(uint32_t ivar_1, uint32_t ivar_2);

extern bool_t ltedfapeg__loop_or_pushp(ltedfapeg__ent_adt_t ivar_1);

extern ltedfapeg_funtype_60_t ltedfapeg__instack(uint32_t ivar_1, ltedfapeg_array_62_t ivar_2);

extern ltedfapeg_funtype_65_t ltedfapeg__successor(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapeg_array_62_t ivar_3);

extern ltedfapeg_funtype_68_t ltedfapeg__sigma(uint32_t ivar_1, ltedfapeg_array_69_t ivar_2);

extern uint64_t ltedfapeg__scafcount(uint32_t ivar_1, ltedfapeg_array_62_t ivar_2, ltedfapeg_funtype_55_t ivar_4, uint32_t ivar_6);

extern uint64_t ltedfapeg__pushcount(uint32_t ivar_1, ltedfapeg_array_62_t ivar_2);

extern bool_t ltedfapeg__good_or_failp(ltedfapeg__ent_adt_t ivar_1);

extern uint64_t ltedfapeg__gfcount(uint32_t ivar_1, ltedfapeg_array_62_t ivar_2);

extern ltedfapeg_funtype_75_t ltedfapeg__good_depthp(uint32_t ivar_1, ltedfapeg_array_62_t ivar_2);

extern ltedfapeg_funtype_55_t ltedfapeg__good_stackp(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, uint64_t ivar_3, ltedfapeg_array_62_t ivar_4);

extern ltedfapeg_funtype_65_t ltedfapeg__mem_stackp(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, uint64_t ivar_3, ltedfapeg_array_62_t ivar_4);

extern bool_t ltedfapeg__push_or_pendingp(ltedfapeg__ent_adt_t ivar_1);

extern ltedfapeg_funtype_55_t ltedfapeg__fine_stackp(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, uint64_t ivar_3, ltedfapeg_array_62_t ivar_4);

extern bool_t ltedfapeg__loop_readyp(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapeg_array_62_t ivar_3, uint32_t ivar_5, uint8_t ivar_6);

extern ltedfapeg_funtype_81_t ltedfapeg__good_failp(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapeg_array_82_t ivar_3);

extern ltedfapeg_funtype_85_t ltedfapeg__good_loopp(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2);

extern ltedfapeg_funtype_88_t ltedfapeg__good_goodp(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapeg_array_82_t ivar_3);

extern ltedfapeg_funtype_91_t ltedfapeg__good_entryp(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapeg_array_82_t ivar_3);

extern ltedfapeg_funtype_91_t ltedfapeg__fine_entryp(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapeg_array_82_t ivar_3);

extern ltedfapeg_funtype_94_t ltedfapeg__good_tscaffoldp(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapeg_array_82_t ivar_3);

extern ltedfapeg_funtype_60_t ltedfapeg__good_rootp(uint32_t ivar_1, ltedfapeg_array_62_t ivar_2);

extern ltedfapeg_funtype_97_t ltedfapeg__fine_scaffoldp(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapeg_array_82_t ivar_3);

extern bool_t ltedfapeg__emptyp(ltedfapeg__ent_adt_t ivar_1);

extern ltedfapeg_funtype_101_t ltedfapeg__step(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapeg_array_82_t ivar_3, uint32_t ivar_4, uint8_t ivar_5);

extern ltedfapeg_funtype_103_t ltedfapeg__size(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapeg_array_82_t ivar_3, uint32_t ivar_4, uint8_t ivar_5);

extern ltedfapeg_record_100_t ltedfapeg__parse(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapeg_array_82_t ivar_3, uint32_t ivar_4, uint8_t ivar_5, ltedfapeg_record_100_t ivar_6);

extern ltedfapeg__ent_adt_t ltedfapeg__doparse(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapeg_array_82_t ivar_3, uint8_t ivar_4);
#endif