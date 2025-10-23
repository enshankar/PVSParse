//Code generated using pvs2ir
#ifndef _dfa_h 
#define _dfa_h

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

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "lex2_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

//cc -O3 -Wall -o dfa -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/modulo_arithmetic_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c /Users/e21660/shankar/pvs.git/lib/lex2_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c dfa_c.c -lgmp 
//dfaResult

struct dfa__dfaResult_adt_s {
         uint32_t count; 
        uint8_t dfa__dfaResult_adt_index;};
typedef struct dfa__dfaResult_adt_s * dfa__dfaResult_adt_t;

extern dfa__dfaResult_adt_t new_dfa__dfaResult_adt(void);

extern void release_dfa__dfaResult_adt(dfa__dfaResult_adt_t x);

extern dfa__dfaResult_adt_t copy_dfa__dfaResult_adt(dfa__dfaResult_adt_t x);

extern bool_t equal_dfa__dfaResult_adt(dfa__dfaResult_adt_t x, dfa__dfaResult_adt_t y);
extern char * json_dfa__dfaResult_adt(dfa__dfaResult_adt_t x);

typedef struct actual_dfa__dfaResult_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_dfa__dfaResult_adt_t;
extern void release_dfa__dfaResult_adt_ptr(pointer_t x, type_actual_t dfa__dfaResult_adt);

extern bool_t equal_dfa__dfaResult_adt_ptr(pointer_t x, pointer_t y, actual_dfa__dfaResult_adt_t T);

extern char * json_dfa__dfaResult_adt_ptr(pointer_t x,  actual_dfa__dfaResult_adt_t T);

actual_dfa__dfaResult_adt_t actual_dfa__dfaResult_adt(void);

extern dfa__dfaResult_adt_t update_dfa__dfaResult_adt_dfa__dfaResult_adt_index(dfa__dfaResult_adt_t x, uint8_t v);


//success

struct dfa__success_s {
        uint32_t count; 
        uint8_t dfa__dfaResult_adt_index;
        uint32_t span;};
typedef struct dfa__success_s * dfa__success_t;

extern dfa__success_t new_dfa__success(void);

extern void release_dfa__success(dfa__success_t x);

extern dfa__success_t copy_dfa__success(dfa__success_t x);

extern bool_t equal_dfa__success(dfa__success_t x, dfa__success_t y);
extern char * json_dfa__success(dfa__success_t x);

typedef struct actual_dfa__success_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_dfa__success_t;
extern void release_dfa__success_ptr(pointer_t x, type_actual_t dfa__success);

extern bool_t equal_dfa__success_ptr(pointer_t x, pointer_t y, actual_dfa__success_t T);

extern char * json_dfa__success_ptr(pointer_t x,  actual_dfa__success_t T);

actual_dfa__success_t actual_dfa__success(void);

extern dfa__success_t update_dfa__success_dfa__dfaResult_adt_index(dfa__success_t x, uint8_t v);

extern dfa__success_t update_dfa__success_span(dfa__success_t x, uint32_t v);


//dfaResult_ord

struct dfa_funtype_2_s;
        typedef struct dfa_funtype_2_s * dfa_funtype_2_t;

struct dfa_funtype_2_ftbl_s {uint8_t (* fptr)(struct dfa_funtype_2_s *, dfa__dfaResult_adt_t);
        uint8_t (* mptr)(struct dfa_funtype_2_s *, dfa__dfaResult_adt_t);
        void (* rptr)(struct dfa_funtype_2_s *);
        struct dfa_funtype_2_s * (* cptr)(struct dfa_funtype_2_s *);};
typedef struct dfa_funtype_2_ftbl_s * dfa_funtype_2_ftbl_t;

struct dfa_funtype_2_hashentry_s {uint32_t keyhash; dfa__dfaResult_adt_t key; uint8_t value;}; 
typedef struct dfa_funtype_2_hashentry_s dfa_funtype_2_hashentry_t;

struct dfa_funtype_2_htbl_s {uint32_t size; uint32_t num_entries; dfa_funtype_2_hashentry_t * data;}; 
typedef struct dfa_funtype_2_htbl_s * dfa_funtype_2_htbl_t;

struct dfa_funtype_2_s {uint32_t count;
        dfa_funtype_2_ftbl_t ftbl;
        dfa_funtype_2_htbl_t htbl;};
typedef struct dfa_funtype_2_s * dfa_funtype_2_t;

extern void release_dfa_funtype_2(dfa_funtype_2_t x);

extern dfa_funtype_2_t copy_dfa_funtype_2(dfa_funtype_2_t x);

extern bool_t equal_dfa_funtype_2(dfa_funtype_2_t x, dfa_funtype_2_t y);

extern char* json_dfa_funtype_2(dfa_funtype_2_t x);


//reduce_nat

struct dfa_funtype_3_s;
        typedef struct dfa_funtype_3_s * dfa_funtype_3_t;

struct dfa_funtype_3_ftbl_s {mpz_ptr_t (* fptr)(struct dfa_funtype_3_s *, dfa__dfaResult_adt_t);
        mpz_ptr_t (* mptr)(struct dfa_funtype_3_s *, dfa__dfaResult_adt_t);
        void (* rptr)(struct dfa_funtype_3_s *);
        struct dfa_funtype_3_s * (* cptr)(struct dfa_funtype_3_s *);};
typedef struct dfa_funtype_3_ftbl_s * dfa_funtype_3_ftbl_t;

struct dfa_funtype_3_hashentry_s {uint32_t keyhash; dfa__dfaResult_adt_t key; mpz_t value;}; 
typedef struct dfa_funtype_3_hashentry_s dfa_funtype_3_hashentry_t;

struct dfa_funtype_3_htbl_s {uint32_t size; uint32_t num_entries; dfa_funtype_3_hashentry_t * data;}; 
typedef struct dfa_funtype_3_htbl_s * dfa_funtype_3_htbl_t;

struct dfa_funtype_3_s {uint32_t count;
        dfa_funtype_3_ftbl_t ftbl;
        dfa_funtype_3_htbl_t htbl;};
typedef struct dfa_funtype_3_s * dfa_funtype_3_t;

extern void release_dfa_funtype_3(dfa_funtype_3_t x);

extern dfa_funtype_3_t copy_dfa_funtype_3(dfa_funtype_3_t x);

extern bool_t equal_dfa_funtype_3(dfa_funtype_3_t x, dfa_funtype_3_t y);

extern char* json_dfa_funtype_3(dfa_funtype_3_t x);


//reduce_nat

struct dfa_funtype_4_s;
        typedef struct dfa_funtype_4_s * dfa_funtype_4_t;

struct dfa_funtype_4_ftbl_s {mpz_ptr_t (* fptr)(struct dfa_funtype_4_s *, uint32_t);
        mpz_ptr_t (* mptr)(struct dfa_funtype_4_s *, uint32_t);
        void (* rptr)(struct dfa_funtype_4_s *);
        struct dfa_funtype_4_s * (* cptr)(struct dfa_funtype_4_s *);};
typedef struct dfa_funtype_4_ftbl_s * dfa_funtype_4_ftbl_t;

struct dfa_funtype_4_hashentry_s {uint32_t keyhash; uint32_t key; mpz_t value;}; 
typedef struct dfa_funtype_4_hashentry_s dfa_funtype_4_hashentry_t;

struct dfa_funtype_4_htbl_s {uint32_t size; uint32_t num_entries; dfa_funtype_4_hashentry_t * data;}; 
typedef struct dfa_funtype_4_htbl_s * dfa_funtype_4_htbl_t;

struct dfa_funtype_4_s {uint32_t count;
        dfa_funtype_4_ftbl_t ftbl;
        dfa_funtype_4_htbl_t htbl;};
typedef struct dfa_funtype_4_s * dfa_funtype_4_t;

extern void release_dfa_funtype_4(dfa_funtype_4_t x);

extern dfa_funtype_4_t copy_dfa_funtype_4(dfa_funtype_4_t x);

extern uint32_t lookup_dfa_funtype_4(dfa_funtype_4_htbl_t htbl, uint32_t i, uint32_t ihash);

extern dfa_funtype_4_t dupdate_dfa_funtype_4(dfa_funtype_4_t a, uint32_t i, mpz_ptr_t v);

extern dfa_funtype_4_t update_dfa_funtype_4(dfa_funtype_4_t a, uint32_t i, mpz_ptr_t v);

extern bool_t equal_dfa_funtype_4(dfa_funtype_4_t x, dfa_funtype_4_t y);

extern char* json_dfa_funtype_4(dfa_funtype_4_t x);




struct dfa_closure_5_s;
        typedef struct dfa_closure_5_s * dfa_closure_5_t;

struct dfa_closure_5_s {uint32_t count;
         dfa_funtype_3_ftbl_t ftbl;
         dfa_funtype_3_htbl_t htbl;
        dfa_funtype_4_t fvar_1;
        mpz_t fvar_2;};

mpz_ptr_t f_dfa_closure_5(struct dfa_closure_5_s * closure, dfa__dfaResult_adt_t bvar);

mpz_ptr_t m_dfa_closure_5(struct dfa_closure_5_s * closure, dfa__dfaResult_adt_t bvar);

extern mpz_ptr_t h_dfa_closure_5(dfa__dfaResult_adt_t ivar_5, dfa_funtype_4_t ivar_2, mpz_ptr_t ivar_1);

dfa_closure_5_t new_dfa_closure_5(void);

void release_dfa_closure_5(dfa_funtype_3_t closure);

dfa_closure_5_t copy_dfa_closure_5(dfa_closure_5_t x);


//REDUCE_nat

struct dfa_record_6_s {
        uint32_t count; 
        uint32_t project_1;
        dfa__dfaResult_adt_t project_2;};
typedef struct dfa_record_6_s * dfa_record_6_t;

extern dfa_record_6_t new_dfa_record_6(void);

extern void release_dfa_record_6(dfa_record_6_t x);

extern dfa_record_6_t copy_dfa_record_6(dfa_record_6_t x);

extern bool_t equal_dfa_record_6(dfa_record_6_t x, dfa_record_6_t y);
extern char * json_dfa_record_6(dfa_record_6_t x);

typedef struct actual_dfa_record_6_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_dfa_record_6_t;
extern void release_dfa_record_6_ptr(pointer_t x, type_actual_t dfa_record_6);

extern bool_t equal_dfa_record_6_ptr(pointer_t x, pointer_t y, actual_dfa_record_6_t T);

extern char * json_dfa_record_6_ptr(pointer_t x,  actual_dfa_record_6_t T);

actual_dfa_record_6_t actual_dfa_record_6(void);

extern dfa_record_6_t update_dfa_record_6_project_1(dfa_record_6_t x, uint32_t v);

extern dfa_record_6_t update_dfa_record_6_project_2(dfa_record_6_t x, dfa__dfaResult_adt_t v);


//REDUCE_nat

struct dfa_funtype_7_s;
        typedef struct dfa_funtype_7_s * dfa_funtype_7_t;

struct dfa_funtype_7_ftbl_s {mpz_ptr_t (* fptr)(struct dfa_funtype_7_s *, dfa_record_6_t);
        mpz_ptr_t (* mptr)(struct dfa_funtype_7_s *, uint32_t, dfa__dfaResult_adt_t);
        void (* rptr)(struct dfa_funtype_7_s *);
        struct dfa_funtype_7_s * (* cptr)(struct dfa_funtype_7_s *);};
typedef struct dfa_funtype_7_ftbl_s * dfa_funtype_7_ftbl_t;

struct dfa_funtype_7_hashentry_s {uint32_t keyhash; dfa_record_6_t key; mpz_t value;}; 
typedef struct dfa_funtype_7_hashentry_s dfa_funtype_7_hashentry_t;

struct dfa_funtype_7_htbl_s {uint32_t size; uint32_t num_entries; dfa_funtype_7_hashentry_t * data;}; 
typedef struct dfa_funtype_7_htbl_s * dfa_funtype_7_htbl_t;

struct dfa_funtype_7_s {uint32_t count;
        dfa_funtype_7_ftbl_t ftbl;
        dfa_funtype_7_htbl_t htbl;};
typedef struct dfa_funtype_7_s * dfa_funtype_7_t;

extern void release_dfa_funtype_7(dfa_funtype_7_t x);

extern dfa_funtype_7_t copy_dfa_funtype_7(dfa_funtype_7_t x);

extern bool_t equal_dfa_funtype_7(dfa_funtype_7_t x, dfa_funtype_7_t y);

extern char* json_dfa_funtype_7(dfa_funtype_7_t x);




struct dfa_closure_8_s;
        typedef struct dfa_closure_8_s * dfa_closure_8_t;

struct dfa_closure_8_s {uint32_t count;
         dfa_funtype_3_ftbl_t ftbl;
         dfa_funtype_3_htbl_t htbl;
        dfa_funtype_3_t fvar_1;
        dfa_funtype_7_t fvar_2;};

mpz_ptr_t f_dfa_closure_8(struct dfa_closure_8_s * closure, dfa__dfaResult_adt_t bvar);

mpz_ptr_t m_dfa_closure_8(struct dfa_closure_8_s * closure, dfa__dfaResult_adt_t bvar);

extern mpz_ptr_t h_dfa_closure_8(dfa__dfaResult_adt_t ivar_6, dfa_funtype_3_t ivar_1, dfa_funtype_7_t ivar_3);

dfa_closure_8_t new_dfa_closure_8(void);

void release_dfa_closure_8(dfa_funtype_3_t closure);

dfa_closure_8_t copy_dfa_closure_8(dfa_closure_8_t x);


//reduce_ordinal

struct dfa_funtype_9_s;
        typedef struct dfa_funtype_9_s * dfa_funtype_9_t;

struct dfa_funtype_9_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct dfa_funtype_9_s *, dfa__dfaResult_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct dfa_funtype_9_s *, dfa__dfaResult_adt_t);
        void (* rptr)(struct dfa_funtype_9_s *);
        struct dfa_funtype_9_s * (* cptr)(struct dfa_funtype_9_s *);};
typedef struct dfa_funtype_9_ftbl_s * dfa_funtype_9_ftbl_t;

struct dfa_funtype_9_hashentry_s {uint32_t keyhash; dfa__dfaResult_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct dfa_funtype_9_hashentry_s dfa_funtype_9_hashentry_t;

struct dfa_funtype_9_htbl_s {uint32_t size; uint32_t num_entries; dfa_funtype_9_hashentry_t * data;}; 
typedef struct dfa_funtype_9_htbl_s * dfa_funtype_9_htbl_t;

struct dfa_funtype_9_s {uint32_t count;
        dfa_funtype_9_ftbl_t ftbl;
        dfa_funtype_9_htbl_t htbl;};
typedef struct dfa_funtype_9_s * dfa_funtype_9_t;

extern void release_dfa_funtype_9(dfa_funtype_9_t x);

extern dfa_funtype_9_t copy_dfa_funtype_9(dfa_funtype_9_t x);

extern bool_t equal_dfa_funtype_9(dfa_funtype_9_t x, dfa_funtype_9_t y);

extern char* json_dfa_funtype_9(dfa_funtype_9_t x);


//reduce_ordinal

struct dfa_funtype_10_s;
        typedef struct dfa_funtype_10_s * dfa_funtype_10_t;

struct dfa_funtype_10_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct dfa_funtype_10_s *, uint32_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct dfa_funtype_10_s *, uint32_t);
        void (* rptr)(struct dfa_funtype_10_s *);
        struct dfa_funtype_10_s * (* cptr)(struct dfa_funtype_10_s *);};
typedef struct dfa_funtype_10_ftbl_s * dfa_funtype_10_ftbl_t;

struct dfa_funtype_10_hashentry_s {uint32_t keyhash; uint32_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct dfa_funtype_10_hashentry_s dfa_funtype_10_hashentry_t;

struct dfa_funtype_10_htbl_s {uint32_t size; uint32_t num_entries; dfa_funtype_10_hashentry_t * data;}; 
typedef struct dfa_funtype_10_htbl_s * dfa_funtype_10_htbl_t;

struct dfa_funtype_10_s {uint32_t count;
        dfa_funtype_10_ftbl_t ftbl;
        dfa_funtype_10_htbl_t htbl;};
typedef struct dfa_funtype_10_s * dfa_funtype_10_t;

extern void release_dfa_funtype_10(dfa_funtype_10_t x);

extern dfa_funtype_10_t copy_dfa_funtype_10(dfa_funtype_10_t x);

extern uint32_t lookup_dfa_funtype_10(dfa_funtype_10_htbl_t htbl, uint32_t i, uint32_t ihash);

extern dfa_funtype_10_t dupdate_dfa_funtype_10(dfa_funtype_10_t a, uint32_t i, ordstruct_adt__ordstruct_adt_t v);

extern dfa_funtype_10_t update_dfa_funtype_10(dfa_funtype_10_t a, uint32_t i, ordstruct_adt__ordstruct_adt_t v);

extern bool_t equal_dfa_funtype_10(dfa_funtype_10_t x, dfa_funtype_10_t y);

extern char* json_dfa_funtype_10(dfa_funtype_10_t x);




struct dfa_closure_11_s;
        typedef struct dfa_closure_11_s * dfa_closure_11_t;

struct dfa_closure_11_s {uint32_t count;
         dfa_funtype_9_ftbl_t ftbl;
         dfa_funtype_9_htbl_t htbl;
        dfa_funtype_10_t fvar_1;
        ordstruct_adt__ordstruct_adt_t fvar_2;};

ordstruct_adt__ordstruct_adt_t f_dfa_closure_11(struct dfa_closure_11_s * closure, dfa__dfaResult_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_dfa_closure_11(struct dfa_closure_11_s * closure, dfa__dfaResult_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_dfa_closure_11(dfa__dfaResult_adt_t ivar_5, dfa_funtype_10_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1);

dfa_closure_11_t new_dfa_closure_11(void);

void release_dfa_closure_11(dfa_funtype_9_t closure);

dfa_closure_11_t copy_dfa_closure_11(dfa_closure_11_t x);


//REDUCE_ordinal

struct dfa_funtype_12_s;
        typedef struct dfa_funtype_12_s * dfa_funtype_12_t;

struct dfa_funtype_12_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct dfa_funtype_12_s *, dfa_record_6_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct dfa_funtype_12_s *, uint32_t, dfa__dfaResult_adt_t);
        void (* rptr)(struct dfa_funtype_12_s *);
        struct dfa_funtype_12_s * (* cptr)(struct dfa_funtype_12_s *);};
typedef struct dfa_funtype_12_ftbl_s * dfa_funtype_12_ftbl_t;

struct dfa_funtype_12_hashentry_s {uint32_t keyhash; dfa_record_6_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct dfa_funtype_12_hashentry_s dfa_funtype_12_hashentry_t;

struct dfa_funtype_12_htbl_s {uint32_t size; uint32_t num_entries; dfa_funtype_12_hashentry_t * data;}; 
typedef struct dfa_funtype_12_htbl_s * dfa_funtype_12_htbl_t;

struct dfa_funtype_12_s {uint32_t count;
        dfa_funtype_12_ftbl_t ftbl;
        dfa_funtype_12_htbl_t htbl;};
typedef struct dfa_funtype_12_s * dfa_funtype_12_t;

extern void release_dfa_funtype_12(dfa_funtype_12_t x);

extern dfa_funtype_12_t copy_dfa_funtype_12(dfa_funtype_12_t x);

extern bool_t equal_dfa_funtype_12(dfa_funtype_12_t x, dfa_funtype_12_t y);

extern char* json_dfa_funtype_12(dfa_funtype_12_t x);




struct dfa_closure_13_s;
        typedef struct dfa_closure_13_s * dfa_closure_13_t;

struct dfa_closure_13_s {uint32_t count;
         dfa_funtype_9_ftbl_t ftbl;
         dfa_funtype_9_htbl_t htbl;
        dfa_funtype_9_t fvar_1;
        dfa_funtype_12_t fvar_2;};

ordstruct_adt__ordstruct_adt_t f_dfa_closure_13(struct dfa_closure_13_s * closure, dfa__dfaResult_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_dfa_closure_13(struct dfa_closure_13_s * closure, dfa__dfaResult_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_dfa_closure_13(dfa__dfaResult_adt_t ivar_6, dfa_funtype_9_t ivar_1, dfa_funtype_12_t ivar_3);

dfa_closure_13_t new_dfa_closure_13(void);

void release_dfa_closure_13(dfa_funtype_9_t closure);

dfa_closure_13_t copy_dfa_closure_13(dfa_closure_13_t x);


//goodDfaResult?

struct dfa_funtype_14_s;
        typedef struct dfa_funtype_14_s * dfa_funtype_14_t;

struct dfa_funtype_14_ftbl_s {bool_t (* fptr)(struct dfa_funtype_14_s *, dfa__dfaResult_adt_t);
        bool_t (* mptr)(struct dfa_funtype_14_s *, dfa__dfaResult_adt_t);
        void (* rptr)(struct dfa_funtype_14_s *);
        struct dfa_funtype_14_s * (* cptr)(struct dfa_funtype_14_s *);};
typedef struct dfa_funtype_14_ftbl_s * dfa_funtype_14_ftbl_t;

struct dfa_funtype_14_hashentry_s {uint32_t keyhash; dfa__dfaResult_adt_t key; bool_t value;}; 
typedef struct dfa_funtype_14_hashentry_s dfa_funtype_14_hashentry_t;

struct dfa_funtype_14_htbl_s {uint32_t size; uint32_t num_entries; dfa_funtype_14_hashentry_t * data;}; 
typedef struct dfa_funtype_14_htbl_s * dfa_funtype_14_htbl_t;

struct dfa_funtype_14_s {uint32_t count;
        dfa_funtype_14_ftbl_t ftbl;
        dfa_funtype_14_htbl_t htbl;};
typedef struct dfa_funtype_14_s * dfa_funtype_14_t;

extern void release_dfa_funtype_14(dfa_funtype_14_t x);

extern dfa_funtype_14_t copy_dfa_funtype_14(dfa_funtype_14_t x);

extern bool_t equal_dfa_funtype_14(dfa_funtype_14_t x, dfa_funtype_14_t y);

extern char* json_dfa_funtype_14(dfa_funtype_14_t x);




struct dfa_closure_15_s;
        typedef struct dfa_closure_15_s * dfa_closure_15_t;

struct dfa_closure_15_s {uint32_t count;
         dfa_funtype_14_ftbl_t ftbl;
         dfa_funtype_14_htbl_t htbl;
        uint32_t fvar_1;
        uint32_t fvar_2;};

bool_t f_dfa_closure_15(struct dfa_closure_15_s * closure, dfa__dfaResult_adt_t bvar);

bool_t m_dfa_closure_15(struct dfa_closure_15_s * closure, dfa__dfaResult_adt_t bvar);

extern bool_t h_dfa_closure_15(dfa__dfaResult_adt_t ivar_4, uint32_t ivar_2, uint32_t ivar_1);

dfa_closure_15_t new_dfa_closure_15(void);

void release_dfa_closure_15(dfa_funtype_14_t closure);

dfa_closure_15_t copy_dfa_closure_15(dfa_closure_15_t x);


//dfaparse

struct dfa_array_16_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         bool_t elems[]; };
typedef struct dfa_array_16_s * dfa_array_16_t;

extern dfa_array_16_t new_dfa_array_16(uint32_t size);

extern void release_dfa_array_16(dfa_array_16_t x);

extern dfa_array_16_t copy_dfa_array_16(dfa_array_16_t x);

extern bool_t equal_dfa_array_16(dfa_array_16_t x, dfa_array_16_t y);
extern char * json_dfa_array_16(dfa_array_16_t x);

typedef struct actual_dfa_array_16_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_dfa_array_16_t;
extern void release_dfa_array_16_ptr(pointer_t x, type_actual_t dfa_array_16);

extern bool_t equal_dfa_array_16_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_dfa_array_16_ptr(pointer_t x, type_actual_t T);

actual_dfa_array_16_t actual_dfa_array_16(void);

extern dfa_array_16_t update_dfa_array_16(dfa_array_16_t x, uint32_t i, bool_t v);

extern dfa_array_16_t upgrade_dfa_array_16(dfa_array_16_t x, uint32_t i, bool_t v);


//dfaparse

struct dfa_array_17_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct dfa_array_17_s * dfa_array_17_t;

extern dfa_array_17_t new_dfa_array_17(uint32_t size);

extern void release_dfa_array_17(dfa_array_17_t x);

extern dfa_array_17_t copy_dfa_array_17(dfa_array_17_t x);

extern bool_t equal_dfa_array_17(dfa_array_17_t x, dfa_array_17_t y);
extern char * json_dfa_array_17(dfa_array_17_t x);

typedef struct actual_dfa_array_17_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_dfa_array_17_t;
extern void release_dfa_array_17_ptr(pointer_t x, type_actual_t dfa_array_17);

extern bool_t equal_dfa_array_17_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_dfa_array_17_ptr(pointer_t x, type_actual_t T);

actual_dfa_array_17_t actual_dfa_array_17(void);

extern dfa_array_17_t update_dfa_array_17(dfa_array_17_t x, uint32_t i, uint8_t v);

extern dfa_array_17_t upgrade_dfa_array_17(dfa_array_17_t x, uint32_t i, uint8_t v);


//dfaparse

struct dfa_array_18_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         dfa_array_17_t elems[]; };
typedef struct dfa_array_18_s * dfa_array_18_t;

extern dfa_array_18_t new_dfa_array_18(uint32_t size);

extern void release_dfa_array_18(dfa_array_18_t x);

extern dfa_array_18_t copy_dfa_array_18(dfa_array_18_t x);

extern bool_t equal_dfa_array_18(dfa_array_18_t x, dfa_array_18_t y);
extern char * json_dfa_array_18(dfa_array_18_t x);

typedef struct actual_dfa_array_18_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_dfa_array_18_t;
extern void release_dfa_array_18_ptr(pointer_t x, type_actual_t dfa_array_18);

extern bool_t equal_dfa_array_18_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_dfa_array_18_ptr(pointer_t x, type_actual_t T);

actual_dfa_array_18_t actual_dfa_array_18(void);

extern dfa_array_18_t update_dfa_array_18(dfa_array_18_t x, uint32_t i, dfa_array_17_t v);

extern dfa_array_18_t upgrade_dfa_array_18(dfa_array_18_t x, uint32_t i, dfa_array_17_t v);


//dfaparse

struct dfa__dfa_s {
        uint32_t count; 
        uint8_t numstates;
        dfa_array_16_t goodstate;
        dfa_array_18_t tbl;
        dfa_array_16_t terminal;};
typedef struct dfa__dfa_s * dfa__dfa_t;

extern dfa__dfa_t new_dfa__dfa(void);

extern void release_dfa__dfa(dfa__dfa_t x);

extern dfa__dfa_t copy_dfa__dfa(dfa__dfa_t x);

extern bool_t equal_dfa__dfa(dfa__dfa_t x, dfa__dfa_t y);
extern char * json_dfa__dfa(dfa__dfa_t x);

typedef struct actual_dfa__dfa_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_dfa__dfa_t;
extern void release_dfa__dfa_ptr(pointer_t x, type_actual_t dfa__dfa);

extern bool_t equal_dfa__dfa_ptr(pointer_t x, pointer_t y, actual_dfa__dfa_t T);

extern char * json_dfa__dfa_ptr(pointer_t x,  actual_dfa__dfa_t T);

actual_dfa__dfa_t actual_dfa__dfa(void);

extern dfa__dfa_t update_dfa__dfa_numstates(dfa__dfa_t x, uint8_t v);

extern dfa__dfa_t update_dfa__dfa_goodstate(dfa__dfa_t x, dfa_array_16_t v);

extern dfa__dfa_t update_dfa__dfa_tbl(dfa__dfa_t x, dfa_array_18_t v);

extern dfa__dfa_t update_dfa__dfa_terminal(dfa__dfa_t x, dfa_array_16_t v);


//digitstate2

struct dfa_funtype_20_s;
        typedef struct dfa_funtype_20_s * dfa_funtype_20_t;

struct dfa_funtype_20_ftbl_s {uint8_t (* fptr)(struct dfa_funtype_20_s *, uint8_t);
        uint8_t (* mptr)(struct dfa_funtype_20_s *, uint8_t);
        void (* rptr)(struct dfa_funtype_20_s *);
        struct dfa_funtype_20_s * (* cptr)(struct dfa_funtype_20_s *);};
typedef struct dfa_funtype_20_ftbl_s * dfa_funtype_20_ftbl_t;

struct dfa_funtype_20_hashentry_s {uint32_t keyhash; uint8_t key; uint8_t value;}; 
typedef struct dfa_funtype_20_hashentry_s dfa_funtype_20_hashentry_t;

struct dfa_funtype_20_htbl_s {uint32_t size; uint32_t num_entries; dfa_funtype_20_hashentry_t * data;}; 
typedef struct dfa_funtype_20_htbl_s * dfa_funtype_20_htbl_t;

struct dfa_funtype_20_s {uint32_t count;
        dfa_funtype_20_ftbl_t ftbl;
        dfa_funtype_20_htbl_t htbl;};
typedef struct dfa_funtype_20_s * dfa_funtype_20_t;

extern void release_dfa_funtype_20(dfa_funtype_20_t x);

extern dfa_funtype_20_t copy_dfa_funtype_20(dfa_funtype_20_t x);

extern uint32_t lookup_dfa_funtype_20(dfa_funtype_20_htbl_t htbl, uint8_t i, uint32_t ihash);

extern dfa_funtype_20_t dupdate_dfa_funtype_20(dfa_funtype_20_t a, uint8_t i, uint8_t v);

extern dfa_funtype_20_t update_dfa_funtype_20(dfa_funtype_20_t a, uint8_t i, uint8_t v);

extern bool_t equal_dfa_funtype_20(dfa_funtype_20_t x, dfa_funtype_20_t y);

extern char* json_dfa_funtype_20(dfa_funtype_20_t x);




struct dfa_closure_21_s;
        typedef struct dfa_closure_21_s * dfa_closure_21_t;

struct dfa_closure_21_s {uint32_t count;
         dfa_funtype_20_ftbl_t ftbl;
         dfa_funtype_20_htbl_t htbl;};

uint8_t f_dfa_closure_21(struct dfa_closure_21_s * closure, uint8_t bvar);

uint8_t m_dfa_closure_21(struct dfa_closure_21_s * closure, uint8_t bvar);

extern uint8_t h_dfa_closure_21(uint8_t ivar_4);

dfa_closure_21_t new_dfa_closure_21(void);

void release_dfa_closure_21(dfa_funtype_20_t closure);

dfa_closure_21_t copy_dfa_closure_21(dfa_closure_21_t x);




struct dfa_closure_22_s;
        typedef struct dfa_closure_22_s * dfa_closure_22_t;

struct dfa_closure_22_s {uint32_t count;
         dfa_funtype_20_ftbl_t ftbl;
         dfa_funtype_20_htbl_t htbl;};

uint8_t f_dfa_closure_22(struct dfa_closure_22_s * closure, uint8_t bvar);

uint8_t m_dfa_closure_22(struct dfa_closure_22_s * closure, uint8_t bvar);

extern uint8_t h_dfa_closure_22(uint8_t ivar_5);

dfa_closure_22_t new_dfa_closure_22(void);

void release_dfa_closure_22(dfa_funtype_20_t closure);

dfa_closure_22_t copy_dfa_closure_22(dfa_closure_22_t x);




struct dfa_closure_23_s;
        typedef struct dfa_closure_23_s * dfa_closure_23_t;

struct dfa_closure_23_s {uint32_t count;
         dfa_funtype_20_ftbl_t ftbl;
         dfa_funtype_20_htbl_t htbl;};

uint8_t f_dfa_closure_23(struct dfa_closure_23_s * closure, uint8_t bvar);

uint8_t m_dfa_closure_23(struct dfa_closure_23_s * closure, uint8_t bvar);

extern uint8_t h_dfa_closure_23(uint8_t ivar_4);

dfa_closure_23_t new_dfa_closure_23(void);

void release_dfa_closure_23(dfa_funtype_20_t closure);

dfa_closure_23_t copy_dfa_closure_23(dfa_closure_23_t x);




struct dfa_closure_24_s;
        typedef struct dfa_closure_24_s * dfa_closure_24_t;

struct dfa_closure_24_s {uint32_t count;
         dfa_funtype_20_ftbl_t ftbl;
         dfa_funtype_20_htbl_t htbl;};

uint8_t f_dfa_closure_24(struct dfa_closure_24_s * closure, uint8_t bvar);

uint8_t m_dfa_closure_24(struct dfa_closure_24_s * closure, uint8_t bvar);

extern uint8_t h_dfa_closure_24(uint8_t ivar_5);

dfa_closure_24_t new_dfa_closure_24(void);

void release_dfa_closure_24(dfa_funtype_20_t closure);

dfa_closure_24_t copy_dfa_closure_24(dfa_closure_24_t x);




struct dfa_closure_25_s;
        typedef struct dfa_closure_25_s * dfa_closure_25_t;

struct dfa_closure_25_s {uint32_t count;
         dfa_funtype_20_ftbl_t ftbl;
         dfa_funtype_20_htbl_t htbl;};

uint8_t f_dfa_closure_25(struct dfa_closure_25_s * closure, uint8_t bvar);

uint8_t m_dfa_closure_25(struct dfa_closure_25_s * closure, uint8_t bvar);

extern uint8_t h_dfa_closure_25(uint8_t ivar_5);

dfa_closure_25_t new_dfa_closure_25(void);

void release_dfa_closure_25(dfa_funtype_20_t closure);

dfa_closure_25_t copy_dfa_closure_25(dfa_closure_25_t x);




struct dfa_closure_26_s;
        typedef struct dfa_closure_26_s * dfa_closure_26_t;

struct dfa_closure_26_s {uint32_t count;
         dfa_funtype_20_ftbl_t ftbl;
         dfa_funtype_20_htbl_t htbl;};

uint8_t f_dfa_closure_26(struct dfa_closure_26_s * closure, uint8_t bvar);

uint8_t m_dfa_closure_26(struct dfa_closure_26_s * closure, uint8_t bvar);

extern uint8_t h_dfa_closure_26(uint8_t ivar_5);

dfa_closure_26_t new_dfa_closure_26(void);

void release_dfa_closure_26(dfa_funtype_20_t closure);

dfa_closure_26_t copy_dfa_closure_26(dfa_closure_26_t x);



extern bool_t r_dfa__failedp(dfa__dfaResult_adt_t ivar_1);

extern bool_t r_dfa__successp(dfa__dfaResult_adt_t ivar_1);

extern dfa__success_t update_dfa__dfaResult_adt_span(dfa__dfaResult_adt_t ivar_1, uint32_t ivar_3);

extern uint32_t dfa__dfaResult_adt_span(dfa__dfaResult_adt_t ivar_1);

extern dfa__dfaResult_adt_t dfa__failed(void);

extern dfa__dfaResult_adt_t dfa__success(uint32_t ivar_2);

extern dfa_funtype_2_t dfa__dfaResult_ord(void);

extern uint8_t dfa__ord(dfa__dfaResult_adt_t ivar_1);

extern bool_t dfa__subterm(dfa__dfaResult_adt_t ivar_1, dfa__dfaResult_adt_t ivar_2);

extern bool_t dfa__doublelessp(dfa__dfaResult_adt_t ivar_1, dfa__dfaResult_adt_t ivar_2);

extern dfa_funtype_3_t dfa__reduce_nat(mpz_ptr_t ivar_1, dfa_funtype_4_t ivar_2);

extern dfa_funtype_3_t dfa__REDUCE_nat(dfa_funtype_3_t ivar_1, dfa_funtype_7_t ivar_3);

extern dfa_funtype_9_t dfa__reduce_ordinal(ordstruct_adt__ordstruct_adt_t ivar_1, dfa_funtype_10_t ivar_2);

extern dfa_funtype_9_t dfa__REDUCE_ordinal(dfa_funtype_9_t ivar_1, dfa_funtype_12_t ivar_3);

extern uint8_t dfa__offset(uint8_t ivar_1);

extern dfa_funtype_14_t dfa__goodDfaResultp(uint32_t ivar_1, uint32_t ivar_2);

extern dfa__dfaResult_adt_t dfa__dfaparse(dfa__dfa_t ivar_1, uint32_t ivar_2, dfa_array_17_t ivar_3, uint32_t ivar_4, uint8_t ivar_5, uint32_t ivar_7);

extern dfa__dfaResult_adt_t dfa__DfaParse(dfa__dfa_t ivar_1, uint32_t ivar_2, dfa_array_17_t ivar_3, uint32_t ivar_4);

extern bool_t dfa__digit(uint8_t ivar_1);

extern bool_t dfa__any(uint8_t ivar_1);

extern bool_t dfa__whitespace(uint8_t ivar_1);

extern bool_t dfa__quote(uint8_t ivar_1);

extern dfa_array_17_t dfa__digitstate2(void);

extern dfa_array_17_t dfa__digitstate3(void);

extern dfa__dfa_t dfa__digitDfa(void);

extern dfa_array_17_t dfa__tokenstate1(void);

extern dfa_array_17_t dfa__tokenstate2(void);

extern dfa_array_17_t dfa__tokenstate3(void);

extern dfa__dfa_t dfa__tokenDfa(void);

extern dfa_array_17_t dfa__wspacestate1(void);

extern dfa__dfa_t dfa__wspaceDfa(void);
#endif