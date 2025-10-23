//Code generated using pvs2ir
#ifndef _sigmatdproof_h 
#define _sigmatdproof_h

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

#include "lex2_c.h"

#include "sets_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "sigmatopdown_c.h"

#include "arrayCount_c.h"

//cc -O3 -Wall -o sigmatdproof -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/lex2_c.c /Users/e21660/shankar/pvs.git/lib/sets_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c sigmatdproof_c.c sigmatopdown_c.c arrayCount_c.c -lgmp 
//parsetree

struct sigmatdproof__parsetree_adt_s {
         uint32_t count; 
        uint8_t sigmatdproof__parsetree_adt_index;};
typedef struct sigmatdproof__parsetree_adt_s * sigmatdproof__parsetree_adt_t;

extern sigmatdproof__parsetree_adt_t new_sigmatdproof__parsetree_adt(void);

extern void release_sigmatdproof__parsetree_adt(sigmatdproof__parsetree_adt_t x);

extern sigmatdproof__parsetree_adt_t copy_sigmatdproof__parsetree_adt(sigmatdproof__parsetree_adt_t x);

extern bool_t equal_sigmatdproof__parsetree_adt(sigmatdproof__parsetree_adt_t x, sigmatdproof__parsetree_adt_t y);
extern char * json_sigmatdproof__parsetree_adt(sigmatdproof__parsetree_adt_t x);

typedef struct actual_sigmatdproof__parsetree_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof__parsetree_adt_t;
void release_sigmatdproof__parsetree_adt_ptr(pointer_t x, type_actual_t sigmatdproof__parsetree_adt);

extern bool_t equal_sigmatdproof__parsetree_adt_ptr(pointer_t x, pointer_t y, actual_sigmatdproof__parsetree_adt_t T);

extern char * json_sigmatdproof__parsetree_adt_ptr(pointer_t x,  actual_sigmatdproof__parsetree_adt_t T);

actual_sigmatdproof__parsetree_adt_t actual_sigmatdproof__parsetree_adt(void);

extern sigmatdproof__parsetree_adt_t update_sigmatdproof__parsetree_adt_sigmatdproof__parsetree_adt_index(sigmatdproof__parsetree_adt_t x, uint8_t v);


//zero

struct sigmatdproof__zero_s {
        uint32_t count; 
        uint8_t sigmatdproof__parsetree_adt_index;
        sigmatopdown__ent_adt_t entry;};
typedef struct sigmatdproof__zero_s * sigmatdproof__zero_t;

extern sigmatdproof__zero_t new_sigmatdproof__zero(void);

extern void release_sigmatdproof__zero(sigmatdproof__zero_t x);

extern sigmatdproof__zero_t copy_sigmatdproof__zero(sigmatdproof__zero_t x);

extern bool_t equal_sigmatdproof__zero(sigmatdproof__zero_t x, sigmatdproof__zero_t y);
extern char * json_sigmatdproof__zero(sigmatdproof__zero_t x);

typedef struct actual_sigmatdproof__zero_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof__zero_t;
void release_sigmatdproof__zero_ptr(pointer_t x, type_actual_t sigmatdproof__zero);

extern bool_t equal_sigmatdproof__zero_ptr(pointer_t x, pointer_t y, actual_sigmatdproof__zero_t T);

extern char * json_sigmatdproof__zero_ptr(pointer_t x,  actual_sigmatdproof__zero_t T);

actual_sigmatdproof__zero_t actual_sigmatdproof__zero(void);

extern sigmatdproof__zero_t update_sigmatdproof__zero_sigmatdproof__parsetree_adt_index(sigmatdproof__zero_t x, uint8_t v);

extern sigmatdproof__zero_t update_sigmatdproof__zero_entry(sigmatdproof__zero_t x, sigmatopdown__ent_adt_t v);


//one

struct sigmatdproof__one_s {
        uint32_t count; 
        uint8_t sigmatdproof__parsetree_adt_index;
        sigmatopdown__ent_adt_t entry;
        sigmatdproof__parsetree_adt_t subone;};
typedef struct sigmatdproof__one_s * sigmatdproof__one_t;

extern sigmatdproof__one_t new_sigmatdproof__one(void);

extern void release_sigmatdproof__one(sigmatdproof__one_t x);

extern sigmatdproof__one_t copy_sigmatdproof__one(sigmatdproof__one_t x);

extern bool_t equal_sigmatdproof__one(sigmatdproof__one_t x, sigmatdproof__one_t y);
extern char * json_sigmatdproof__one(sigmatdproof__one_t x);

typedef struct actual_sigmatdproof__one_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof__one_t;
void release_sigmatdproof__one_ptr(pointer_t x, type_actual_t sigmatdproof__one);

extern bool_t equal_sigmatdproof__one_ptr(pointer_t x, pointer_t y, actual_sigmatdproof__one_t T);

extern char * json_sigmatdproof__one_ptr(pointer_t x,  actual_sigmatdproof__one_t T);

actual_sigmatdproof__one_t actual_sigmatdproof__one(void);

extern sigmatdproof__one_t update_sigmatdproof__one_sigmatdproof__parsetree_adt_index(sigmatdproof__one_t x, uint8_t v);

extern sigmatdproof__one_t update_sigmatdproof__one_entry(sigmatdproof__one_t x, sigmatopdown__ent_adt_t v);

extern sigmatdproof__one_t update_sigmatdproof__one_subone(sigmatdproof__one_t x, sigmatdproof__parsetree_adt_t v);


//two

struct sigmatdproof__two_s {
        uint32_t count; 
        uint8_t sigmatdproof__parsetree_adt_index;
        sigmatopdown__ent_adt_t entry;
        sigmatdproof__parsetree_adt_t subone;
        sigmatdproof__parsetree_adt_t subtwo;};
typedef struct sigmatdproof__two_s * sigmatdproof__two_t;

extern sigmatdproof__two_t new_sigmatdproof__two(void);

extern void release_sigmatdproof__two(sigmatdproof__two_t x);

extern sigmatdproof__two_t copy_sigmatdproof__two(sigmatdproof__two_t x);

extern bool_t equal_sigmatdproof__two(sigmatdproof__two_t x, sigmatdproof__two_t y);
extern char * json_sigmatdproof__two(sigmatdproof__two_t x);

typedef struct actual_sigmatdproof__two_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof__two_t;
void release_sigmatdproof__two_ptr(pointer_t x, type_actual_t sigmatdproof__two);

extern bool_t equal_sigmatdproof__two_ptr(pointer_t x, pointer_t y, actual_sigmatdproof__two_t T);

extern char * json_sigmatdproof__two_ptr(pointer_t x,  actual_sigmatdproof__two_t T);

actual_sigmatdproof__two_t actual_sigmatdproof__two(void);

extern sigmatdproof__two_t update_sigmatdproof__two_sigmatdproof__parsetree_adt_index(sigmatdproof__two_t x, uint8_t v);

extern sigmatdproof__two_t update_sigmatdproof__two_entry(sigmatdproof__two_t x, sigmatopdown__ent_adt_t v);

extern sigmatdproof__two_t update_sigmatdproof__two_subone(sigmatdproof__two_t x, sigmatdproof__parsetree_adt_t v);

extern sigmatdproof__two_t update_sigmatdproof__two_subtwo(sigmatdproof__two_t x, sigmatdproof__parsetree_adt_t v);


//parsetree_ord

struct sigmatdproof_funtype_4_s;
        typedef struct sigmatdproof_funtype_4_s * sigmatdproof_funtype_4_t;

struct sigmatdproof_funtype_4_ftbl_s {uint8_t (* fptr)(struct sigmatdproof_funtype_4_s *, sigmatdproof__parsetree_adt_t);
        uint8_t (* mptr)(struct sigmatdproof_funtype_4_s *, sigmatdproof__parsetree_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_4_s *);
        struct sigmatdproof_funtype_4_s * (* cptr)(struct sigmatdproof_funtype_4_s *);};
typedef struct sigmatdproof_funtype_4_ftbl_s * sigmatdproof_funtype_4_ftbl_t;

struct sigmatdproof_funtype_4_hashentry_s {uint32_t keyhash; sigmatdproof__parsetree_adt_t key; uint8_t value;}; 
typedef struct sigmatdproof_funtype_4_hashentry_s sigmatdproof_funtype_4_hashentry_t;

struct sigmatdproof_funtype_4_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_4_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_4_htbl_s * sigmatdproof_funtype_4_htbl_t;

struct sigmatdproof_funtype_4_s {uint32_t count;
        sigmatdproof_funtype_4_ftbl_t ftbl;
        sigmatdproof_funtype_4_htbl_t htbl;};
typedef struct sigmatdproof_funtype_4_s * sigmatdproof_funtype_4_t;

extern void release_sigmatdproof_funtype_4(sigmatdproof_funtype_4_t x);

extern sigmatdproof_funtype_4_t copy_sigmatdproof_funtype_4(sigmatdproof_funtype_4_t x);

extern bool_t equal_sigmatdproof_funtype_4(sigmatdproof_funtype_4_t x, sigmatdproof_funtype_4_t y);

extern char* json_sigmatdproof_funtype_4(sigmatdproof_funtype_4_t x);


//reduce_nat

struct sigmatdproof_funtype_5_s;
        typedef struct sigmatdproof_funtype_5_s * sigmatdproof_funtype_5_t;

struct sigmatdproof_funtype_5_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatdproof_funtype_5_s *, sigmatdproof__parsetree_adt_t);
        mpz_ptr_t (* mptr)(struct sigmatdproof_funtype_5_s *, sigmatdproof__parsetree_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_5_s *);
        struct sigmatdproof_funtype_5_s * (* cptr)(struct sigmatdproof_funtype_5_s *);};
typedef struct sigmatdproof_funtype_5_ftbl_s * sigmatdproof_funtype_5_ftbl_t;

struct sigmatdproof_funtype_5_hashentry_s {uint32_t keyhash; sigmatdproof__parsetree_adt_t key; mpz_t value;}; 
typedef struct sigmatdproof_funtype_5_hashentry_s sigmatdproof_funtype_5_hashentry_t;

struct sigmatdproof_funtype_5_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_5_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_5_htbl_s * sigmatdproof_funtype_5_htbl_t;

struct sigmatdproof_funtype_5_s {uint32_t count;
        sigmatdproof_funtype_5_ftbl_t ftbl;
        sigmatdproof_funtype_5_htbl_t htbl;};
typedef struct sigmatdproof_funtype_5_s * sigmatdproof_funtype_5_t;

extern void release_sigmatdproof_funtype_5(sigmatdproof_funtype_5_t x);

extern sigmatdproof_funtype_5_t copy_sigmatdproof_funtype_5(sigmatdproof_funtype_5_t x);

extern bool_t equal_sigmatdproof_funtype_5(sigmatdproof_funtype_5_t x, sigmatdproof_funtype_5_t y);

extern char* json_sigmatdproof_funtype_5(sigmatdproof_funtype_5_t x);


//reduce_nat

struct sigmatdproof_funtype_6_s;
        typedef struct sigmatdproof_funtype_6_s * sigmatdproof_funtype_6_t;

struct sigmatdproof_funtype_6_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatdproof_funtype_6_s *, sigmatopdown__ent_adt_t);
        mpz_ptr_t (* mptr)(struct sigmatdproof_funtype_6_s *, sigmatopdown__ent_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_6_s *);
        struct sigmatdproof_funtype_6_s * (* cptr)(struct sigmatdproof_funtype_6_s *);};
typedef struct sigmatdproof_funtype_6_ftbl_s * sigmatdproof_funtype_6_ftbl_t;

struct sigmatdproof_funtype_6_hashentry_s {uint32_t keyhash; sigmatopdown__ent_adt_t key; mpz_t value;}; 
typedef struct sigmatdproof_funtype_6_hashentry_s sigmatdproof_funtype_6_hashentry_t;

struct sigmatdproof_funtype_6_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_6_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_6_htbl_s * sigmatdproof_funtype_6_htbl_t;

struct sigmatdproof_funtype_6_s {uint32_t count;
        sigmatdproof_funtype_6_ftbl_t ftbl;
        sigmatdproof_funtype_6_htbl_t htbl;};
typedef struct sigmatdproof_funtype_6_s * sigmatdproof_funtype_6_t;

extern void release_sigmatdproof_funtype_6(sigmatdproof_funtype_6_t x);

extern sigmatdproof_funtype_6_t copy_sigmatdproof_funtype_6(sigmatdproof_funtype_6_t x);

extern bool_t equal_sigmatdproof_funtype_6(sigmatdproof_funtype_6_t x, sigmatdproof_funtype_6_t y);

extern char* json_sigmatdproof_funtype_6(sigmatdproof_funtype_6_t x);


//reduce_nat

struct sigmatdproof_record_7_s {
        uint32_t count; 
        sigmatopdown__ent_adt_t project_1;
        mpz_t project_2;};
typedef struct sigmatdproof_record_7_s * sigmatdproof_record_7_t;

extern sigmatdproof_record_7_t new_sigmatdproof_record_7(void);

extern void release_sigmatdproof_record_7(sigmatdproof_record_7_t x);

extern sigmatdproof_record_7_t copy_sigmatdproof_record_7(sigmatdproof_record_7_t x);

extern bool_t equal_sigmatdproof_record_7(sigmatdproof_record_7_t x, sigmatdproof_record_7_t y);
extern char * json_sigmatdproof_record_7(sigmatdproof_record_7_t x);

typedef struct actual_sigmatdproof_record_7_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_7_t;
void release_sigmatdproof_record_7_ptr(pointer_t x, type_actual_t sigmatdproof_record_7);

extern bool_t equal_sigmatdproof_record_7_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_7_t T);

extern char * json_sigmatdproof_record_7_ptr(pointer_t x,  actual_sigmatdproof_record_7_t T);

actual_sigmatdproof_record_7_t actual_sigmatdproof_record_7(void);

extern sigmatdproof_record_7_t update_sigmatdproof_record_7_project_1(sigmatdproof_record_7_t x, sigmatopdown__ent_adt_t v);

extern sigmatdproof_record_7_t update_sigmatdproof_record_7_project_2(sigmatdproof_record_7_t x, mpz_ptr_t v);


//reduce_nat

struct sigmatdproof_funtype_8_s;
        typedef struct sigmatdproof_funtype_8_s * sigmatdproof_funtype_8_t;

struct sigmatdproof_funtype_8_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatdproof_funtype_8_s *, sigmatdproof_record_7_t);
        mpz_ptr_t (* mptr)(struct sigmatdproof_funtype_8_s *, sigmatopdown__ent_adt_t, mpz_ptr_t);
        void (* rptr)(struct sigmatdproof_funtype_8_s *);
        struct sigmatdproof_funtype_8_s * (* cptr)(struct sigmatdproof_funtype_8_s *);};
typedef struct sigmatdproof_funtype_8_ftbl_s * sigmatdproof_funtype_8_ftbl_t;

struct sigmatdproof_funtype_8_hashentry_s {uint32_t keyhash; sigmatdproof_record_7_t key; mpz_t value;}; 
typedef struct sigmatdproof_funtype_8_hashentry_s sigmatdproof_funtype_8_hashentry_t;

struct sigmatdproof_funtype_8_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_8_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_8_htbl_s * sigmatdproof_funtype_8_htbl_t;

struct sigmatdproof_funtype_8_s {uint32_t count;
        sigmatdproof_funtype_8_ftbl_t ftbl;
        sigmatdproof_funtype_8_htbl_t htbl;};
typedef struct sigmatdproof_funtype_8_s * sigmatdproof_funtype_8_t;

extern void release_sigmatdproof_funtype_8(sigmatdproof_funtype_8_t x);

extern sigmatdproof_funtype_8_t copy_sigmatdproof_funtype_8(sigmatdproof_funtype_8_t x);

extern bool_t equal_sigmatdproof_funtype_8(sigmatdproof_funtype_8_t x, sigmatdproof_funtype_8_t y);

extern char* json_sigmatdproof_funtype_8(sigmatdproof_funtype_8_t x);


//reduce_nat

struct sigmatdproof_record_9_s {
        uint32_t count; 
        sigmatopdown__ent_adt_t project_1;
        mpz_t project_2;
        mpz_t project_3;};
typedef struct sigmatdproof_record_9_s * sigmatdproof_record_9_t;

extern sigmatdproof_record_9_t new_sigmatdproof_record_9(void);

extern void release_sigmatdproof_record_9(sigmatdproof_record_9_t x);

extern sigmatdproof_record_9_t copy_sigmatdproof_record_9(sigmatdproof_record_9_t x);

extern bool_t equal_sigmatdproof_record_9(sigmatdproof_record_9_t x, sigmatdproof_record_9_t y);
extern char * json_sigmatdproof_record_9(sigmatdproof_record_9_t x);

typedef struct actual_sigmatdproof_record_9_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_9_t;
void release_sigmatdproof_record_9_ptr(pointer_t x, type_actual_t sigmatdproof_record_9);

extern bool_t equal_sigmatdproof_record_9_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_9_t T);

extern char * json_sigmatdproof_record_9_ptr(pointer_t x,  actual_sigmatdproof_record_9_t T);

actual_sigmatdproof_record_9_t actual_sigmatdproof_record_9(void);

extern sigmatdproof_record_9_t update_sigmatdproof_record_9_project_1(sigmatdproof_record_9_t x, sigmatopdown__ent_adt_t v);

extern sigmatdproof_record_9_t update_sigmatdproof_record_9_project_2(sigmatdproof_record_9_t x, mpz_ptr_t v);

extern sigmatdproof_record_9_t update_sigmatdproof_record_9_project_3(sigmatdproof_record_9_t x, mpz_ptr_t v);


//reduce_nat

struct sigmatdproof_funtype_10_s;
        typedef struct sigmatdproof_funtype_10_s * sigmatdproof_funtype_10_t;

struct sigmatdproof_funtype_10_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatdproof_funtype_10_s *, sigmatdproof_record_9_t);
        mpz_ptr_t (* mptr)(struct sigmatdproof_funtype_10_s *, sigmatopdown__ent_adt_t, mpz_ptr_t, mpz_ptr_t);
        void (* rptr)(struct sigmatdproof_funtype_10_s *);
        struct sigmatdproof_funtype_10_s * (* cptr)(struct sigmatdproof_funtype_10_s *);};
typedef struct sigmatdproof_funtype_10_ftbl_s * sigmatdproof_funtype_10_ftbl_t;

struct sigmatdproof_funtype_10_hashentry_s {uint32_t keyhash; sigmatdproof_record_9_t key; mpz_t value;}; 
typedef struct sigmatdproof_funtype_10_hashentry_s sigmatdproof_funtype_10_hashentry_t;

struct sigmatdproof_funtype_10_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_10_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_10_htbl_s * sigmatdproof_funtype_10_htbl_t;

struct sigmatdproof_funtype_10_s {uint32_t count;
        sigmatdproof_funtype_10_ftbl_t ftbl;
        sigmatdproof_funtype_10_htbl_t htbl;};
typedef struct sigmatdproof_funtype_10_s * sigmatdproof_funtype_10_t;

extern void release_sigmatdproof_funtype_10(sigmatdproof_funtype_10_t x);

extern sigmatdproof_funtype_10_t copy_sigmatdproof_funtype_10(sigmatdproof_funtype_10_t x);

extern bool_t equal_sigmatdproof_funtype_10(sigmatdproof_funtype_10_t x, sigmatdproof_funtype_10_t y);

extern char* json_sigmatdproof_funtype_10(sigmatdproof_funtype_10_t x);




struct sigmatdproof_closure_11_s;
        typedef struct sigmatdproof_closure_11_s * sigmatdproof_closure_11_t;

struct sigmatdproof_closure_11_s {uint32_t count;
         sigmatdproof_funtype_5_ftbl_t ftbl;
         sigmatdproof_funtype_5_htbl_t htbl;
        sigmatdproof_funtype_8_t fvar_1;
        sigmatdproof_funtype_10_t fvar_2;
        sigmatdproof_funtype_6_t fvar_3;};

mpz_ptr_t f_sigmatdproof_closure_11(struct sigmatdproof_closure_11_s * closure, sigmatdproof__parsetree_adt_t bvar);

mpz_ptr_t m_sigmatdproof_closure_11(struct sigmatdproof_closure_11_s * closure, sigmatdproof__parsetree_adt_t bvar);

extern mpz_ptr_t h_sigmatdproof_closure_11(sigmatdproof__parsetree_adt_t ivar_8, sigmatdproof_funtype_8_t ivar_3, sigmatdproof_funtype_10_t ivar_5, sigmatdproof_funtype_6_t ivar_1);

extern sigmatdproof_closure_11_t new_sigmatdproof_closure_11(void);

extern void release_sigmatdproof_closure_11(sigmatdproof_funtype_5_t closure);

extern sigmatdproof_closure_11_t copy_sigmatdproof_closure_11(sigmatdproof_closure_11_t x);


//REDUCE_nat

struct sigmatdproof_record_12_s {
        uint32_t count; 
        sigmatopdown__ent_adt_t project_1;
        sigmatdproof__parsetree_adt_t project_2;};
typedef struct sigmatdproof_record_12_s * sigmatdproof_record_12_t;

extern sigmatdproof_record_12_t new_sigmatdproof_record_12(void);

extern void release_sigmatdproof_record_12(sigmatdproof_record_12_t x);

extern sigmatdproof_record_12_t copy_sigmatdproof_record_12(sigmatdproof_record_12_t x);

extern bool_t equal_sigmatdproof_record_12(sigmatdproof_record_12_t x, sigmatdproof_record_12_t y);
extern char * json_sigmatdproof_record_12(sigmatdproof_record_12_t x);

typedef struct actual_sigmatdproof_record_12_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_12_t;
void release_sigmatdproof_record_12_ptr(pointer_t x, type_actual_t sigmatdproof_record_12);

extern bool_t equal_sigmatdproof_record_12_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_12_t T);

extern char * json_sigmatdproof_record_12_ptr(pointer_t x,  actual_sigmatdproof_record_12_t T);

actual_sigmatdproof_record_12_t actual_sigmatdproof_record_12(void);

extern sigmatdproof_record_12_t update_sigmatdproof_record_12_project_1(sigmatdproof_record_12_t x, sigmatopdown__ent_adt_t v);

extern sigmatdproof_record_12_t update_sigmatdproof_record_12_project_2(sigmatdproof_record_12_t x, sigmatdproof__parsetree_adt_t v);


//REDUCE_nat

struct sigmatdproof_funtype_13_s;
        typedef struct sigmatdproof_funtype_13_s * sigmatdproof_funtype_13_t;

struct sigmatdproof_funtype_13_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatdproof_funtype_13_s *, sigmatdproof_record_12_t);
        mpz_ptr_t (* mptr)(struct sigmatdproof_funtype_13_s *, sigmatopdown__ent_adt_t, sigmatdproof__parsetree_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_13_s *);
        struct sigmatdproof_funtype_13_s * (* cptr)(struct sigmatdproof_funtype_13_s *);};
typedef struct sigmatdproof_funtype_13_ftbl_s * sigmatdproof_funtype_13_ftbl_t;

struct sigmatdproof_funtype_13_hashentry_s {uint32_t keyhash; sigmatdproof_record_12_t key; mpz_t value;}; 
typedef struct sigmatdproof_funtype_13_hashentry_s sigmatdproof_funtype_13_hashentry_t;

struct sigmatdproof_funtype_13_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_13_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_13_htbl_s * sigmatdproof_funtype_13_htbl_t;

struct sigmatdproof_funtype_13_s {uint32_t count;
        sigmatdproof_funtype_13_ftbl_t ftbl;
        sigmatdproof_funtype_13_htbl_t htbl;};
typedef struct sigmatdproof_funtype_13_s * sigmatdproof_funtype_13_t;

extern void release_sigmatdproof_funtype_13(sigmatdproof_funtype_13_t x);

extern sigmatdproof_funtype_13_t copy_sigmatdproof_funtype_13(sigmatdproof_funtype_13_t x);

extern bool_t equal_sigmatdproof_funtype_13(sigmatdproof_funtype_13_t x, sigmatdproof_funtype_13_t y);

extern char* json_sigmatdproof_funtype_13(sigmatdproof_funtype_13_t x);


//REDUCE_nat

struct sigmatdproof_record_14_s {
        uint32_t count; 
        sigmatopdown__ent_adt_t project_1;
        mpz_t project_2;
        sigmatdproof__parsetree_adt_t project_3;};
typedef struct sigmatdproof_record_14_s * sigmatdproof_record_14_t;

extern sigmatdproof_record_14_t new_sigmatdproof_record_14(void);

extern void release_sigmatdproof_record_14(sigmatdproof_record_14_t x);

extern sigmatdproof_record_14_t copy_sigmatdproof_record_14(sigmatdproof_record_14_t x);

extern bool_t equal_sigmatdproof_record_14(sigmatdproof_record_14_t x, sigmatdproof_record_14_t y);
extern char * json_sigmatdproof_record_14(sigmatdproof_record_14_t x);

typedef struct actual_sigmatdproof_record_14_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_14_t;
void release_sigmatdproof_record_14_ptr(pointer_t x, type_actual_t sigmatdproof_record_14);

extern bool_t equal_sigmatdproof_record_14_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_14_t T);

extern char * json_sigmatdproof_record_14_ptr(pointer_t x,  actual_sigmatdproof_record_14_t T);

actual_sigmatdproof_record_14_t actual_sigmatdproof_record_14(void);

extern sigmatdproof_record_14_t update_sigmatdproof_record_14_project_1(sigmatdproof_record_14_t x, sigmatopdown__ent_adt_t v);

extern sigmatdproof_record_14_t update_sigmatdproof_record_14_project_2(sigmatdproof_record_14_t x, mpz_ptr_t v);

extern sigmatdproof_record_14_t update_sigmatdproof_record_14_project_3(sigmatdproof_record_14_t x, sigmatdproof__parsetree_adt_t v);


//REDUCE_nat

struct sigmatdproof_funtype_15_s;
        typedef struct sigmatdproof_funtype_15_s * sigmatdproof_funtype_15_t;

struct sigmatdproof_funtype_15_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatdproof_funtype_15_s *, sigmatdproof_record_14_t);
        mpz_ptr_t (* mptr)(struct sigmatdproof_funtype_15_s *, sigmatopdown__ent_adt_t, mpz_ptr_t, sigmatdproof__parsetree_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_15_s *);
        struct sigmatdproof_funtype_15_s * (* cptr)(struct sigmatdproof_funtype_15_s *);};
typedef struct sigmatdproof_funtype_15_ftbl_s * sigmatdproof_funtype_15_ftbl_t;

struct sigmatdproof_funtype_15_hashentry_s {uint32_t keyhash; sigmatdproof_record_14_t key; mpz_t value;}; 
typedef struct sigmatdproof_funtype_15_hashentry_s sigmatdproof_funtype_15_hashentry_t;

struct sigmatdproof_funtype_15_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_15_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_15_htbl_s * sigmatdproof_funtype_15_htbl_t;

struct sigmatdproof_funtype_15_s {uint32_t count;
        sigmatdproof_funtype_15_ftbl_t ftbl;
        sigmatdproof_funtype_15_htbl_t htbl;};
typedef struct sigmatdproof_funtype_15_s * sigmatdproof_funtype_15_t;

extern void release_sigmatdproof_funtype_15(sigmatdproof_funtype_15_t x);

extern sigmatdproof_funtype_15_t copy_sigmatdproof_funtype_15(sigmatdproof_funtype_15_t x);

extern bool_t equal_sigmatdproof_funtype_15(sigmatdproof_funtype_15_t x, sigmatdproof_funtype_15_t y);

extern char* json_sigmatdproof_funtype_15(sigmatdproof_funtype_15_t x);


//REDUCE_nat

struct sigmatdproof_record_16_s {
        uint32_t count; 
        sigmatopdown__ent_adt_t project_1;
        mpz_t project_2;
        mpz_t project_3;
        sigmatdproof__parsetree_adt_t project_4;};
typedef struct sigmatdproof_record_16_s * sigmatdproof_record_16_t;

extern sigmatdproof_record_16_t new_sigmatdproof_record_16(void);

extern void release_sigmatdproof_record_16(sigmatdproof_record_16_t x);

extern sigmatdproof_record_16_t copy_sigmatdproof_record_16(sigmatdproof_record_16_t x);

extern bool_t equal_sigmatdproof_record_16(sigmatdproof_record_16_t x, sigmatdproof_record_16_t y);
extern char * json_sigmatdproof_record_16(sigmatdproof_record_16_t x);

typedef struct actual_sigmatdproof_record_16_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_16_t;
void release_sigmatdproof_record_16_ptr(pointer_t x, type_actual_t sigmatdproof_record_16);

extern bool_t equal_sigmatdproof_record_16_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_16_t T);

extern char * json_sigmatdproof_record_16_ptr(pointer_t x,  actual_sigmatdproof_record_16_t T);

actual_sigmatdproof_record_16_t actual_sigmatdproof_record_16(void);

extern sigmatdproof_record_16_t update_sigmatdproof_record_16_project_1(sigmatdproof_record_16_t x, sigmatopdown__ent_adt_t v);

extern sigmatdproof_record_16_t update_sigmatdproof_record_16_project_2(sigmatdproof_record_16_t x, mpz_ptr_t v);

extern sigmatdproof_record_16_t update_sigmatdproof_record_16_project_3(sigmatdproof_record_16_t x, mpz_ptr_t v);

extern sigmatdproof_record_16_t update_sigmatdproof_record_16_project_4(sigmatdproof_record_16_t x, sigmatdproof__parsetree_adt_t v);


//REDUCE_nat

struct sigmatdproof_funtype_17_s;
        typedef struct sigmatdproof_funtype_17_s * sigmatdproof_funtype_17_t;

struct sigmatdproof_funtype_17_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatdproof_funtype_17_s *, sigmatdproof_record_16_t);
        mpz_ptr_t (* mptr)(struct sigmatdproof_funtype_17_s *, sigmatopdown__ent_adt_t, mpz_ptr_t, mpz_ptr_t, sigmatdproof__parsetree_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_17_s *);
        struct sigmatdproof_funtype_17_s * (* cptr)(struct sigmatdproof_funtype_17_s *);};
typedef struct sigmatdproof_funtype_17_ftbl_s * sigmatdproof_funtype_17_ftbl_t;

struct sigmatdproof_funtype_17_hashentry_s {uint32_t keyhash; sigmatdproof_record_16_t key; mpz_t value;}; 
typedef struct sigmatdproof_funtype_17_hashentry_s sigmatdproof_funtype_17_hashentry_t;

struct sigmatdproof_funtype_17_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_17_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_17_htbl_s * sigmatdproof_funtype_17_htbl_t;

struct sigmatdproof_funtype_17_s {uint32_t count;
        sigmatdproof_funtype_17_ftbl_t ftbl;
        sigmatdproof_funtype_17_htbl_t htbl;};
typedef struct sigmatdproof_funtype_17_s * sigmatdproof_funtype_17_t;

extern void release_sigmatdproof_funtype_17(sigmatdproof_funtype_17_t x);

extern sigmatdproof_funtype_17_t copy_sigmatdproof_funtype_17(sigmatdproof_funtype_17_t x);

extern bool_t equal_sigmatdproof_funtype_17(sigmatdproof_funtype_17_t x, sigmatdproof_funtype_17_t y);

extern char* json_sigmatdproof_funtype_17(sigmatdproof_funtype_17_t x);




struct sigmatdproof_closure_18_s;
        typedef struct sigmatdproof_closure_18_s * sigmatdproof_closure_18_t;

struct sigmatdproof_closure_18_s {uint32_t count;
         sigmatdproof_funtype_5_ftbl_t ftbl;
         sigmatdproof_funtype_5_htbl_t htbl;
        sigmatdproof_funtype_15_t fvar_1;
        sigmatdproof_funtype_17_t fvar_2;
        sigmatdproof_funtype_13_t fvar_3;};

mpz_ptr_t f_sigmatdproof_closure_18(struct sigmatdproof_closure_18_s * closure, sigmatdproof__parsetree_adt_t bvar);

mpz_ptr_t m_sigmatdproof_closure_18(struct sigmatdproof_closure_18_s * closure, sigmatdproof__parsetree_adt_t bvar);

extern mpz_ptr_t h_sigmatdproof_closure_18(sigmatdproof__parsetree_adt_t ivar_8, sigmatdproof_funtype_15_t ivar_3, sigmatdproof_funtype_17_t ivar_5, sigmatdproof_funtype_13_t ivar_1);

extern sigmatdproof_closure_18_t new_sigmatdproof_closure_18(void);

extern void release_sigmatdproof_closure_18(sigmatdproof_funtype_5_t closure);

extern sigmatdproof_closure_18_t copy_sigmatdproof_closure_18(sigmatdproof_closure_18_t x);


//reduce_ordinal

struct sigmatdproof_funtype_19_s;
        typedef struct sigmatdproof_funtype_19_s * sigmatdproof_funtype_19_t;

struct sigmatdproof_funtype_19_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatdproof_funtype_19_s *, sigmatdproof__parsetree_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatdproof_funtype_19_s *, sigmatdproof__parsetree_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_19_s *);
        struct sigmatdproof_funtype_19_s * (* cptr)(struct sigmatdproof_funtype_19_s *);};
typedef struct sigmatdproof_funtype_19_ftbl_s * sigmatdproof_funtype_19_ftbl_t;

struct sigmatdproof_funtype_19_hashentry_s {uint32_t keyhash; sigmatdproof__parsetree_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatdproof_funtype_19_hashentry_s sigmatdproof_funtype_19_hashentry_t;

struct sigmatdproof_funtype_19_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_19_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_19_htbl_s * sigmatdproof_funtype_19_htbl_t;

struct sigmatdproof_funtype_19_s {uint32_t count;
        sigmatdproof_funtype_19_ftbl_t ftbl;
        sigmatdproof_funtype_19_htbl_t htbl;};
typedef struct sigmatdproof_funtype_19_s * sigmatdproof_funtype_19_t;

extern void release_sigmatdproof_funtype_19(sigmatdproof_funtype_19_t x);

extern sigmatdproof_funtype_19_t copy_sigmatdproof_funtype_19(sigmatdproof_funtype_19_t x);

extern bool_t equal_sigmatdproof_funtype_19(sigmatdproof_funtype_19_t x, sigmatdproof_funtype_19_t y);

extern char* json_sigmatdproof_funtype_19(sigmatdproof_funtype_19_t x);


//reduce_ordinal

struct sigmatdproof_funtype_20_s;
        typedef struct sigmatdproof_funtype_20_s * sigmatdproof_funtype_20_t;

struct sigmatdproof_funtype_20_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatdproof_funtype_20_s *, sigmatopdown__ent_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatdproof_funtype_20_s *, sigmatopdown__ent_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_20_s *);
        struct sigmatdproof_funtype_20_s * (* cptr)(struct sigmatdproof_funtype_20_s *);};
typedef struct sigmatdproof_funtype_20_ftbl_s * sigmatdproof_funtype_20_ftbl_t;

struct sigmatdproof_funtype_20_hashentry_s {uint32_t keyhash; sigmatopdown__ent_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatdproof_funtype_20_hashentry_s sigmatdproof_funtype_20_hashentry_t;

struct sigmatdproof_funtype_20_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_20_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_20_htbl_s * sigmatdproof_funtype_20_htbl_t;

struct sigmatdproof_funtype_20_s {uint32_t count;
        sigmatdproof_funtype_20_ftbl_t ftbl;
        sigmatdproof_funtype_20_htbl_t htbl;};
typedef struct sigmatdproof_funtype_20_s * sigmatdproof_funtype_20_t;

extern void release_sigmatdproof_funtype_20(sigmatdproof_funtype_20_t x);

extern sigmatdproof_funtype_20_t copy_sigmatdproof_funtype_20(sigmatdproof_funtype_20_t x);

extern bool_t equal_sigmatdproof_funtype_20(sigmatdproof_funtype_20_t x, sigmatdproof_funtype_20_t y);

extern char* json_sigmatdproof_funtype_20(sigmatdproof_funtype_20_t x);


//reduce_ordinal

struct sigmatdproof_record_21_s {
        uint32_t count; 
        sigmatopdown__ent_adt_t project_1;
        ordstruct_adt__ordstruct_adt_t project_2;};
typedef struct sigmatdproof_record_21_s * sigmatdproof_record_21_t;

extern sigmatdproof_record_21_t new_sigmatdproof_record_21(void);

extern void release_sigmatdproof_record_21(sigmatdproof_record_21_t x);

extern sigmatdproof_record_21_t copy_sigmatdproof_record_21(sigmatdproof_record_21_t x);

extern bool_t equal_sigmatdproof_record_21(sigmatdproof_record_21_t x, sigmatdproof_record_21_t y);
extern char * json_sigmatdproof_record_21(sigmatdproof_record_21_t x);

typedef struct actual_sigmatdproof_record_21_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_21_t;
void release_sigmatdproof_record_21_ptr(pointer_t x, type_actual_t sigmatdproof_record_21);

extern bool_t equal_sigmatdproof_record_21_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_21_t T);

extern char * json_sigmatdproof_record_21_ptr(pointer_t x,  actual_sigmatdproof_record_21_t T);

actual_sigmatdproof_record_21_t actual_sigmatdproof_record_21(void);

extern sigmatdproof_record_21_t update_sigmatdproof_record_21_project_1(sigmatdproof_record_21_t x, sigmatopdown__ent_adt_t v);

extern sigmatdproof_record_21_t update_sigmatdproof_record_21_project_2(sigmatdproof_record_21_t x, ordstruct_adt__ordstruct_adt_t v);


//reduce_ordinal

struct sigmatdproof_funtype_22_s;
        typedef struct sigmatdproof_funtype_22_s * sigmatdproof_funtype_22_t;

struct sigmatdproof_funtype_22_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatdproof_funtype_22_s *, sigmatdproof_record_21_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatdproof_funtype_22_s *, sigmatopdown__ent_adt_t, ordstruct_adt__ordstruct_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_22_s *);
        struct sigmatdproof_funtype_22_s * (* cptr)(struct sigmatdproof_funtype_22_s *);};
typedef struct sigmatdproof_funtype_22_ftbl_s * sigmatdproof_funtype_22_ftbl_t;

struct sigmatdproof_funtype_22_hashentry_s {uint32_t keyhash; sigmatdproof_record_21_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatdproof_funtype_22_hashentry_s sigmatdproof_funtype_22_hashentry_t;

struct sigmatdproof_funtype_22_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_22_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_22_htbl_s * sigmatdproof_funtype_22_htbl_t;

struct sigmatdproof_funtype_22_s {uint32_t count;
        sigmatdproof_funtype_22_ftbl_t ftbl;
        sigmatdproof_funtype_22_htbl_t htbl;};
typedef struct sigmatdproof_funtype_22_s * sigmatdproof_funtype_22_t;

extern void release_sigmatdproof_funtype_22(sigmatdproof_funtype_22_t x);

extern sigmatdproof_funtype_22_t copy_sigmatdproof_funtype_22(sigmatdproof_funtype_22_t x);

extern bool_t equal_sigmatdproof_funtype_22(sigmatdproof_funtype_22_t x, sigmatdproof_funtype_22_t y);

extern char* json_sigmatdproof_funtype_22(sigmatdproof_funtype_22_t x);


//reduce_ordinal

struct sigmatdproof_record_23_s {
        uint32_t count; 
        sigmatopdown__ent_adt_t project_1;
        ordstruct_adt__ordstruct_adt_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;};
typedef struct sigmatdproof_record_23_s * sigmatdproof_record_23_t;

extern sigmatdproof_record_23_t new_sigmatdproof_record_23(void);

extern void release_sigmatdproof_record_23(sigmatdproof_record_23_t x);

extern sigmatdproof_record_23_t copy_sigmatdproof_record_23(sigmatdproof_record_23_t x);

extern bool_t equal_sigmatdproof_record_23(sigmatdproof_record_23_t x, sigmatdproof_record_23_t y);
extern char * json_sigmatdproof_record_23(sigmatdproof_record_23_t x);

typedef struct actual_sigmatdproof_record_23_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_23_t;
void release_sigmatdproof_record_23_ptr(pointer_t x, type_actual_t sigmatdproof_record_23);

extern bool_t equal_sigmatdproof_record_23_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_23_t T);

extern char * json_sigmatdproof_record_23_ptr(pointer_t x,  actual_sigmatdproof_record_23_t T);

actual_sigmatdproof_record_23_t actual_sigmatdproof_record_23(void);

extern sigmatdproof_record_23_t update_sigmatdproof_record_23_project_1(sigmatdproof_record_23_t x, sigmatopdown__ent_adt_t v);

extern sigmatdproof_record_23_t update_sigmatdproof_record_23_project_2(sigmatdproof_record_23_t x, ordstruct_adt__ordstruct_adt_t v);

extern sigmatdproof_record_23_t update_sigmatdproof_record_23_project_3(sigmatdproof_record_23_t x, ordstruct_adt__ordstruct_adt_t v);


//reduce_ordinal

struct sigmatdproof_funtype_24_s;
        typedef struct sigmatdproof_funtype_24_s * sigmatdproof_funtype_24_t;

struct sigmatdproof_funtype_24_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatdproof_funtype_24_s *, sigmatdproof_record_23_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatdproof_funtype_24_s *, sigmatopdown__ent_adt_t, ordstruct_adt__ordstruct_adt_t, ordstruct_adt__ordstruct_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_24_s *);
        struct sigmatdproof_funtype_24_s * (* cptr)(struct sigmatdproof_funtype_24_s *);};
typedef struct sigmatdproof_funtype_24_ftbl_s * sigmatdproof_funtype_24_ftbl_t;

struct sigmatdproof_funtype_24_hashentry_s {uint32_t keyhash; sigmatdproof_record_23_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatdproof_funtype_24_hashentry_s sigmatdproof_funtype_24_hashentry_t;

struct sigmatdproof_funtype_24_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_24_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_24_htbl_s * sigmatdproof_funtype_24_htbl_t;

struct sigmatdproof_funtype_24_s {uint32_t count;
        sigmatdproof_funtype_24_ftbl_t ftbl;
        sigmatdproof_funtype_24_htbl_t htbl;};
typedef struct sigmatdproof_funtype_24_s * sigmatdproof_funtype_24_t;

extern void release_sigmatdproof_funtype_24(sigmatdproof_funtype_24_t x);

extern sigmatdproof_funtype_24_t copy_sigmatdproof_funtype_24(sigmatdproof_funtype_24_t x);

extern bool_t equal_sigmatdproof_funtype_24(sigmatdproof_funtype_24_t x, sigmatdproof_funtype_24_t y);

extern char* json_sigmatdproof_funtype_24(sigmatdproof_funtype_24_t x);




struct sigmatdproof_closure_25_s;
        typedef struct sigmatdproof_closure_25_s * sigmatdproof_closure_25_t;

struct sigmatdproof_closure_25_s {uint32_t count;
         sigmatdproof_funtype_19_ftbl_t ftbl;
         sigmatdproof_funtype_19_htbl_t htbl;
        sigmatdproof_funtype_22_t fvar_1;
        sigmatdproof_funtype_24_t fvar_2;
        sigmatdproof_funtype_20_t fvar_3;};

ordstruct_adt__ordstruct_adt_t f_sigmatdproof_closure_25(struct sigmatdproof_closure_25_s * closure, sigmatdproof__parsetree_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_sigmatdproof_closure_25(struct sigmatdproof_closure_25_s * closure, sigmatdproof__parsetree_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_sigmatdproof_closure_25(sigmatdproof__parsetree_adt_t ivar_8, sigmatdproof_funtype_22_t ivar_3, sigmatdproof_funtype_24_t ivar_5, sigmatdproof_funtype_20_t ivar_1);

extern sigmatdproof_closure_25_t new_sigmatdproof_closure_25(void);

extern void release_sigmatdproof_closure_25(sigmatdproof_funtype_19_t closure);

extern sigmatdproof_closure_25_t copy_sigmatdproof_closure_25(sigmatdproof_closure_25_t x);


//REDUCE_ordinal

struct sigmatdproof_funtype_26_s;
        typedef struct sigmatdproof_funtype_26_s * sigmatdproof_funtype_26_t;

struct sigmatdproof_funtype_26_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatdproof_funtype_26_s *, sigmatdproof_record_12_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatdproof_funtype_26_s *, sigmatopdown__ent_adt_t, sigmatdproof__parsetree_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_26_s *);
        struct sigmatdproof_funtype_26_s * (* cptr)(struct sigmatdproof_funtype_26_s *);};
typedef struct sigmatdproof_funtype_26_ftbl_s * sigmatdproof_funtype_26_ftbl_t;

struct sigmatdproof_funtype_26_hashentry_s {uint32_t keyhash; sigmatdproof_record_12_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatdproof_funtype_26_hashentry_s sigmatdproof_funtype_26_hashentry_t;

struct sigmatdproof_funtype_26_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_26_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_26_htbl_s * sigmatdproof_funtype_26_htbl_t;

struct sigmatdproof_funtype_26_s {uint32_t count;
        sigmatdproof_funtype_26_ftbl_t ftbl;
        sigmatdproof_funtype_26_htbl_t htbl;};
typedef struct sigmatdproof_funtype_26_s * sigmatdproof_funtype_26_t;

extern void release_sigmatdproof_funtype_26(sigmatdproof_funtype_26_t x);

extern sigmatdproof_funtype_26_t copy_sigmatdproof_funtype_26(sigmatdproof_funtype_26_t x);

extern bool_t equal_sigmatdproof_funtype_26(sigmatdproof_funtype_26_t x, sigmatdproof_funtype_26_t y);

extern char* json_sigmatdproof_funtype_26(sigmatdproof_funtype_26_t x);


//REDUCE_ordinal

struct sigmatdproof_record_27_s {
        uint32_t count; 
        sigmatopdown__ent_adt_t project_1;
        ordstruct_adt__ordstruct_adt_t project_2;
        sigmatdproof__parsetree_adt_t project_3;};
typedef struct sigmatdproof_record_27_s * sigmatdproof_record_27_t;

extern sigmatdproof_record_27_t new_sigmatdproof_record_27(void);

extern void release_sigmatdproof_record_27(sigmatdproof_record_27_t x);

extern sigmatdproof_record_27_t copy_sigmatdproof_record_27(sigmatdproof_record_27_t x);

extern bool_t equal_sigmatdproof_record_27(sigmatdproof_record_27_t x, sigmatdproof_record_27_t y);
extern char * json_sigmatdproof_record_27(sigmatdproof_record_27_t x);

typedef struct actual_sigmatdproof_record_27_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_27_t;
void release_sigmatdproof_record_27_ptr(pointer_t x, type_actual_t sigmatdproof_record_27);

extern bool_t equal_sigmatdproof_record_27_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_27_t T);

extern char * json_sigmatdproof_record_27_ptr(pointer_t x,  actual_sigmatdproof_record_27_t T);

actual_sigmatdproof_record_27_t actual_sigmatdproof_record_27(void);

extern sigmatdproof_record_27_t update_sigmatdproof_record_27_project_1(sigmatdproof_record_27_t x, sigmatopdown__ent_adt_t v);

extern sigmatdproof_record_27_t update_sigmatdproof_record_27_project_2(sigmatdproof_record_27_t x, ordstruct_adt__ordstruct_adt_t v);

extern sigmatdproof_record_27_t update_sigmatdproof_record_27_project_3(sigmatdproof_record_27_t x, sigmatdproof__parsetree_adt_t v);


//REDUCE_ordinal

struct sigmatdproof_funtype_28_s;
        typedef struct sigmatdproof_funtype_28_s * sigmatdproof_funtype_28_t;

struct sigmatdproof_funtype_28_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatdproof_funtype_28_s *, sigmatdproof_record_27_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatdproof_funtype_28_s *, sigmatopdown__ent_adt_t, ordstruct_adt__ordstruct_adt_t, sigmatdproof__parsetree_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_28_s *);
        struct sigmatdproof_funtype_28_s * (* cptr)(struct sigmatdproof_funtype_28_s *);};
typedef struct sigmatdproof_funtype_28_ftbl_s * sigmatdproof_funtype_28_ftbl_t;

struct sigmatdproof_funtype_28_hashentry_s {uint32_t keyhash; sigmatdproof_record_27_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatdproof_funtype_28_hashentry_s sigmatdproof_funtype_28_hashentry_t;

struct sigmatdproof_funtype_28_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_28_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_28_htbl_s * sigmatdproof_funtype_28_htbl_t;

struct sigmatdproof_funtype_28_s {uint32_t count;
        sigmatdproof_funtype_28_ftbl_t ftbl;
        sigmatdproof_funtype_28_htbl_t htbl;};
typedef struct sigmatdproof_funtype_28_s * sigmatdproof_funtype_28_t;

extern void release_sigmatdproof_funtype_28(sigmatdproof_funtype_28_t x);

extern sigmatdproof_funtype_28_t copy_sigmatdproof_funtype_28(sigmatdproof_funtype_28_t x);

extern bool_t equal_sigmatdproof_funtype_28(sigmatdproof_funtype_28_t x, sigmatdproof_funtype_28_t y);

extern char* json_sigmatdproof_funtype_28(sigmatdproof_funtype_28_t x);


//REDUCE_ordinal

struct sigmatdproof_record_29_s {
        uint32_t count; 
        sigmatopdown__ent_adt_t project_1;
        ordstruct_adt__ordstruct_adt_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;
        sigmatdproof__parsetree_adt_t project_4;};
typedef struct sigmatdproof_record_29_s * sigmatdproof_record_29_t;

extern sigmatdproof_record_29_t new_sigmatdproof_record_29(void);

extern void release_sigmatdproof_record_29(sigmatdproof_record_29_t x);

extern sigmatdproof_record_29_t copy_sigmatdproof_record_29(sigmatdproof_record_29_t x);

extern bool_t equal_sigmatdproof_record_29(sigmatdproof_record_29_t x, sigmatdproof_record_29_t y);
extern char * json_sigmatdproof_record_29(sigmatdproof_record_29_t x);

typedef struct actual_sigmatdproof_record_29_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_29_t;
void release_sigmatdproof_record_29_ptr(pointer_t x, type_actual_t sigmatdproof_record_29);

extern bool_t equal_sigmatdproof_record_29_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_29_t T);

extern char * json_sigmatdproof_record_29_ptr(pointer_t x,  actual_sigmatdproof_record_29_t T);

actual_sigmatdproof_record_29_t actual_sigmatdproof_record_29(void);

extern sigmatdproof_record_29_t update_sigmatdproof_record_29_project_1(sigmatdproof_record_29_t x, sigmatopdown__ent_adt_t v);

extern sigmatdproof_record_29_t update_sigmatdproof_record_29_project_2(sigmatdproof_record_29_t x, ordstruct_adt__ordstruct_adt_t v);

extern sigmatdproof_record_29_t update_sigmatdproof_record_29_project_3(sigmatdproof_record_29_t x, ordstruct_adt__ordstruct_adt_t v);

extern sigmatdproof_record_29_t update_sigmatdproof_record_29_project_4(sigmatdproof_record_29_t x, sigmatdproof__parsetree_adt_t v);


//REDUCE_ordinal

struct sigmatdproof_funtype_30_s;
        typedef struct sigmatdproof_funtype_30_s * sigmatdproof_funtype_30_t;

struct sigmatdproof_funtype_30_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatdproof_funtype_30_s *, sigmatdproof_record_29_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatdproof_funtype_30_s *, sigmatopdown__ent_adt_t, ordstruct_adt__ordstruct_adt_t, ordstruct_adt__ordstruct_adt_t, sigmatdproof__parsetree_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_30_s *);
        struct sigmatdproof_funtype_30_s * (* cptr)(struct sigmatdproof_funtype_30_s *);};
typedef struct sigmatdproof_funtype_30_ftbl_s * sigmatdproof_funtype_30_ftbl_t;

struct sigmatdproof_funtype_30_hashentry_s {uint32_t keyhash; sigmatdproof_record_29_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatdproof_funtype_30_hashentry_s sigmatdproof_funtype_30_hashentry_t;

struct sigmatdproof_funtype_30_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_30_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_30_htbl_s * sigmatdproof_funtype_30_htbl_t;

struct sigmatdproof_funtype_30_s {uint32_t count;
        sigmatdproof_funtype_30_ftbl_t ftbl;
        sigmatdproof_funtype_30_htbl_t htbl;};
typedef struct sigmatdproof_funtype_30_s * sigmatdproof_funtype_30_t;

extern void release_sigmatdproof_funtype_30(sigmatdproof_funtype_30_t x);

extern sigmatdproof_funtype_30_t copy_sigmatdproof_funtype_30(sigmatdproof_funtype_30_t x);

extern bool_t equal_sigmatdproof_funtype_30(sigmatdproof_funtype_30_t x, sigmatdproof_funtype_30_t y);

extern char* json_sigmatdproof_funtype_30(sigmatdproof_funtype_30_t x);




struct sigmatdproof_closure_31_s;
        typedef struct sigmatdproof_closure_31_s * sigmatdproof_closure_31_t;

struct sigmatdproof_closure_31_s {uint32_t count;
         sigmatdproof_funtype_19_ftbl_t ftbl;
         sigmatdproof_funtype_19_htbl_t htbl;
        sigmatdproof_funtype_28_t fvar_1;
        sigmatdproof_funtype_30_t fvar_2;
        sigmatdproof_funtype_26_t fvar_3;};

ordstruct_adt__ordstruct_adt_t f_sigmatdproof_closure_31(struct sigmatdproof_closure_31_s * closure, sigmatdproof__parsetree_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_sigmatdproof_closure_31(struct sigmatdproof_closure_31_s * closure, sigmatdproof__parsetree_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_sigmatdproof_closure_31(sigmatdproof__parsetree_adt_t ivar_8, sigmatdproof_funtype_28_t ivar_3, sigmatdproof_funtype_30_t ivar_5, sigmatdproof_funtype_26_t ivar_1);

extern sigmatdproof_closure_31_t new_sigmatdproof_closure_31(void);

extern void release_sigmatdproof_closure_31(sigmatdproof_funtype_19_t closure);

extern sigmatdproof_closure_31_t copy_sigmatdproof_closure_31(sigmatdproof_closure_31_t x);


//qstack

struct sigmatdproof__qstack_adt_s {
         uint32_t count; 
        uint8_t sigmatdproof__qstack_adt_index;};
typedef struct sigmatdproof__qstack_adt_s * sigmatdproof__qstack_adt_t;

extern sigmatdproof__qstack_adt_t new_sigmatdproof__qstack_adt(void);

extern void release_sigmatdproof__qstack_adt(sigmatdproof__qstack_adt_t x);

extern sigmatdproof__qstack_adt_t copy_sigmatdproof__qstack_adt(sigmatdproof__qstack_adt_t x);

extern bool_t equal_sigmatdproof__qstack_adt(sigmatdproof__qstack_adt_t x, sigmatdproof__qstack_adt_t y);
extern char * json_sigmatdproof__qstack_adt(sigmatdproof__qstack_adt_t x);

typedef struct actual_sigmatdproof__qstack_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof__qstack_adt_t;
void release_sigmatdproof__qstack_adt_ptr(pointer_t x, type_actual_t sigmatdproof__qstack_adt);

extern bool_t equal_sigmatdproof__qstack_adt_ptr(pointer_t x, pointer_t y, actual_sigmatdproof__qstack_adt_t T);

extern char * json_sigmatdproof__qstack_adt_ptr(pointer_t x,  actual_sigmatdproof__qstack_adt_t T);

actual_sigmatdproof__qstack_adt_t actual_sigmatdproof__qstack_adt(void);

extern sigmatdproof__qstack_adt_t update_sigmatdproof__qstack_adt_sigmatdproof__qstack_adt_index(sigmatdproof__qstack_adt_t x, uint8_t v);


//qpush

struct sigmatdproof__qpush_s {
        uint32_t count; 
        uint8_t sigmatdproof__qstack_adt_index;
        uint8_t nonterm;
        uint32_t pos;
        sigmatdproof__qstack_adt_t qpop;};
typedef struct sigmatdproof__qpush_s * sigmatdproof__qpush_t;

extern sigmatdproof__qpush_t new_sigmatdproof__qpush(void);

extern void release_sigmatdproof__qpush(sigmatdproof__qpush_t x);

extern sigmatdproof__qpush_t copy_sigmatdproof__qpush(sigmatdproof__qpush_t x);

extern bool_t equal_sigmatdproof__qpush(sigmatdproof__qpush_t x, sigmatdproof__qpush_t y);
extern char * json_sigmatdproof__qpush(sigmatdproof__qpush_t x);

typedef struct actual_sigmatdproof__qpush_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof__qpush_t;
void release_sigmatdproof__qpush_ptr(pointer_t x, type_actual_t sigmatdproof__qpush);

extern bool_t equal_sigmatdproof__qpush_ptr(pointer_t x, pointer_t y, actual_sigmatdproof__qpush_t T);

extern char * json_sigmatdproof__qpush_ptr(pointer_t x,  actual_sigmatdproof__qpush_t T);

actual_sigmatdproof__qpush_t actual_sigmatdproof__qpush(void);

extern sigmatdproof__qpush_t update_sigmatdproof__qpush_sigmatdproof__qstack_adt_index(sigmatdproof__qpush_t x, uint8_t v);

extern sigmatdproof__qpush_t update_sigmatdproof__qpush_nonterm(sigmatdproof__qpush_t x, uint8_t v);

extern sigmatdproof__qpush_t update_sigmatdproof__qpush_pos(sigmatdproof__qpush_t x, uint32_t v);

extern sigmatdproof__qpush_t update_sigmatdproof__qpush_qpop(sigmatdproof__qpush_t x, sigmatdproof__qstack_adt_t v);


//qstack_ord

struct sigmatdproof_funtype_34_s;
        typedef struct sigmatdproof_funtype_34_s * sigmatdproof_funtype_34_t;

struct sigmatdproof_funtype_34_ftbl_s {uint8_t (* fptr)(struct sigmatdproof_funtype_34_s *, sigmatdproof__qstack_adt_t);
        uint8_t (* mptr)(struct sigmatdproof_funtype_34_s *, sigmatdproof__qstack_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_34_s *);
        struct sigmatdproof_funtype_34_s * (* cptr)(struct sigmatdproof_funtype_34_s *);};
typedef struct sigmatdproof_funtype_34_ftbl_s * sigmatdproof_funtype_34_ftbl_t;

struct sigmatdproof_funtype_34_hashentry_s {uint32_t keyhash; sigmatdproof__qstack_adt_t key; uint8_t value;}; 
typedef struct sigmatdproof_funtype_34_hashentry_s sigmatdproof_funtype_34_hashentry_t;

struct sigmatdproof_funtype_34_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_34_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_34_htbl_s * sigmatdproof_funtype_34_htbl_t;

struct sigmatdproof_funtype_34_s {uint32_t count;
        sigmatdproof_funtype_34_ftbl_t ftbl;
        sigmatdproof_funtype_34_htbl_t htbl;};
typedef struct sigmatdproof_funtype_34_s * sigmatdproof_funtype_34_t;

extern void release_sigmatdproof_funtype_34(sigmatdproof_funtype_34_t x);

extern sigmatdproof_funtype_34_t copy_sigmatdproof_funtype_34(sigmatdproof_funtype_34_t x);

extern bool_t equal_sigmatdproof_funtype_34(sigmatdproof_funtype_34_t x, sigmatdproof_funtype_34_t y);

extern char* json_sigmatdproof_funtype_34(sigmatdproof_funtype_34_t x);


//reduce_nat

struct sigmatdproof_funtype_35_s;
        typedef struct sigmatdproof_funtype_35_s * sigmatdproof_funtype_35_t;

struct sigmatdproof_funtype_35_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatdproof_funtype_35_s *, sigmatdproof__qstack_adt_t);
        mpz_ptr_t (* mptr)(struct sigmatdproof_funtype_35_s *, sigmatdproof__qstack_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_35_s *);
        struct sigmatdproof_funtype_35_s * (* cptr)(struct sigmatdproof_funtype_35_s *);};
typedef struct sigmatdproof_funtype_35_ftbl_s * sigmatdproof_funtype_35_ftbl_t;

struct sigmatdproof_funtype_35_hashentry_s {uint32_t keyhash; sigmatdproof__qstack_adt_t key; mpz_t value;}; 
typedef struct sigmatdproof_funtype_35_hashentry_s sigmatdproof_funtype_35_hashentry_t;

struct sigmatdproof_funtype_35_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_35_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_35_htbl_s * sigmatdproof_funtype_35_htbl_t;

struct sigmatdproof_funtype_35_s {uint32_t count;
        sigmatdproof_funtype_35_ftbl_t ftbl;
        sigmatdproof_funtype_35_htbl_t htbl;};
typedef struct sigmatdproof_funtype_35_s * sigmatdproof_funtype_35_t;

extern void release_sigmatdproof_funtype_35(sigmatdproof_funtype_35_t x);

extern sigmatdproof_funtype_35_t copy_sigmatdproof_funtype_35(sigmatdproof_funtype_35_t x);

extern bool_t equal_sigmatdproof_funtype_35(sigmatdproof_funtype_35_t x, sigmatdproof_funtype_35_t y);

extern char* json_sigmatdproof_funtype_35(sigmatdproof_funtype_35_t x);


//reduce_nat

struct sigmatdproof_record_36_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        mpz_t project_3;};
typedef struct sigmatdproof_record_36_s * sigmatdproof_record_36_t;

extern sigmatdproof_record_36_t new_sigmatdproof_record_36(void);

extern void release_sigmatdproof_record_36(sigmatdproof_record_36_t x);

extern sigmatdproof_record_36_t copy_sigmatdproof_record_36(sigmatdproof_record_36_t x);

extern bool_t equal_sigmatdproof_record_36(sigmatdproof_record_36_t x, sigmatdproof_record_36_t y);
extern char * json_sigmatdproof_record_36(sigmatdproof_record_36_t x);

typedef struct actual_sigmatdproof_record_36_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_36_t;
void release_sigmatdproof_record_36_ptr(pointer_t x, type_actual_t sigmatdproof_record_36);

extern bool_t equal_sigmatdproof_record_36_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_36_t T);

extern char * json_sigmatdproof_record_36_ptr(pointer_t x,  actual_sigmatdproof_record_36_t T);

actual_sigmatdproof_record_36_t actual_sigmatdproof_record_36(void);

extern sigmatdproof_record_36_t update_sigmatdproof_record_36_project_1(sigmatdproof_record_36_t x, uint8_t v);

extern sigmatdproof_record_36_t update_sigmatdproof_record_36_project_2(sigmatdproof_record_36_t x, uint32_t v);

extern sigmatdproof_record_36_t update_sigmatdproof_record_36_project_3(sigmatdproof_record_36_t x, mpz_ptr_t v);


//reduce_nat

struct sigmatdproof_funtype_37_s;
        typedef struct sigmatdproof_funtype_37_s * sigmatdproof_funtype_37_t;

struct sigmatdproof_funtype_37_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatdproof_funtype_37_s *, sigmatdproof_record_36_t);
        mpz_ptr_t (* mptr)(struct sigmatdproof_funtype_37_s *, uint8_t, uint32_t, mpz_ptr_t);
        void (* rptr)(struct sigmatdproof_funtype_37_s *);
        struct sigmatdproof_funtype_37_s * (* cptr)(struct sigmatdproof_funtype_37_s *);};
typedef struct sigmatdproof_funtype_37_ftbl_s * sigmatdproof_funtype_37_ftbl_t;

struct sigmatdproof_funtype_37_hashentry_s {uint32_t keyhash; sigmatdproof_record_36_t key; mpz_t value;}; 
typedef struct sigmatdproof_funtype_37_hashentry_s sigmatdproof_funtype_37_hashentry_t;

struct sigmatdproof_funtype_37_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_37_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_37_htbl_s * sigmatdproof_funtype_37_htbl_t;

struct sigmatdproof_funtype_37_s {uint32_t count;
        sigmatdproof_funtype_37_ftbl_t ftbl;
        sigmatdproof_funtype_37_htbl_t htbl;};
typedef struct sigmatdproof_funtype_37_s * sigmatdproof_funtype_37_t;

extern void release_sigmatdproof_funtype_37(sigmatdproof_funtype_37_t x);

extern sigmatdproof_funtype_37_t copy_sigmatdproof_funtype_37(sigmatdproof_funtype_37_t x);

extern bool_t equal_sigmatdproof_funtype_37(sigmatdproof_funtype_37_t x, sigmatdproof_funtype_37_t y);

extern char* json_sigmatdproof_funtype_37(sigmatdproof_funtype_37_t x);




struct sigmatdproof_closure_38_s;
        typedef struct sigmatdproof_closure_38_s * sigmatdproof_closure_38_t;

struct sigmatdproof_closure_38_s {uint32_t count;
         sigmatdproof_funtype_35_ftbl_t ftbl;
         sigmatdproof_funtype_35_htbl_t htbl;
        sigmatdproof_funtype_37_t fvar_1;
        mpz_t fvar_2;};

mpz_ptr_t f_sigmatdproof_closure_38(struct sigmatdproof_closure_38_s * closure, sigmatdproof__qstack_adt_t bvar);

mpz_ptr_t m_sigmatdproof_closure_38(struct sigmatdproof_closure_38_s * closure, sigmatdproof__qstack_adt_t bvar);

extern mpz_ptr_t h_sigmatdproof_closure_38(sigmatdproof__qstack_adt_t ivar_5, sigmatdproof_funtype_37_t ivar_2, mpz_ptr_t ivar_1);

extern sigmatdproof_closure_38_t new_sigmatdproof_closure_38(void);

extern void release_sigmatdproof_closure_38(sigmatdproof_funtype_35_t closure);

extern sigmatdproof_closure_38_t copy_sigmatdproof_closure_38(sigmatdproof_closure_38_t x);


//REDUCE_nat

struct sigmatdproof_record_39_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        mpz_t project_3;
        sigmatdproof__qstack_adt_t project_4;};
typedef struct sigmatdproof_record_39_s * sigmatdproof_record_39_t;

extern sigmatdproof_record_39_t new_sigmatdproof_record_39(void);

extern void release_sigmatdproof_record_39(sigmatdproof_record_39_t x);

extern sigmatdproof_record_39_t copy_sigmatdproof_record_39(sigmatdproof_record_39_t x);

extern bool_t equal_sigmatdproof_record_39(sigmatdproof_record_39_t x, sigmatdproof_record_39_t y);
extern char * json_sigmatdproof_record_39(sigmatdproof_record_39_t x);

typedef struct actual_sigmatdproof_record_39_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_39_t;
void release_sigmatdproof_record_39_ptr(pointer_t x, type_actual_t sigmatdproof_record_39);

extern bool_t equal_sigmatdproof_record_39_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_39_t T);

extern char * json_sigmatdproof_record_39_ptr(pointer_t x,  actual_sigmatdproof_record_39_t T);

actual_sigmatdproof_record_39_t actual_sigmatdproof_record_39(void);

extern sigmatdproof_record_39_t update_sigmatdproof_record_39_project_1(sigmatdproof_record_39_t x, uint8_t v);

extern sigmatdproof_record_39_t update_sigmatdproof_record_39_project_2(sigmatdproof_record_39_t x, uint32_t v);

extern sigmatdproof_record_39_t update_sigmatdproof_record_39_project_3(sigmatdproof_record_39_t x, mpz_ptr_t v);

extern sigmatdproof_record_39_t update_sigmatdproof_record_39_project_4(sigmatdproof_record_39_t x, sigmatdproof__qstack_adt_t v);


//REDUCE_nat

struct sigmatdproof_funtype_40_s;
        typedef struct sigmatdproof_funtype_40_s * sigmatdproof_funtype_40_t;

struct sigmatdproof_funtype_40_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatdproof_funtype_40_s *, sigmatdproof_record_39_t);
        mpz_ptr_t (* mptr)(struct sigmatdproof_funtype_40_s *, uint8_t, uint32_t, mpz_ptr_t, sigmatdproof__qstack_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_40_s *);
        struct sigmatdproof_funtype_40_s * (* cptr)(struct sigmatdproof_funtype_40_s *);};
typedef struct sigmatdproof_funtype_40_ftbl_s * sigmatdproof_funtype_40_ftbl_t;

struct sigmatdproof_funtype_40_hashentry_s {uint32_t keyhash; sigmatdproof_record_39_t key; mpz_t value;}; 
typedef struct sigmatdproof_funtype_40_hashentry_s sigmatdproof_funtype_40_hashentry_t;

struct sigmatdproof_funtype_40_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_40_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_40_htbl_s * sigmatdproof_funtype_40_htbl_t;

struct sigmatdproof_funtype_40_s {uint32_t count;
        sigmatdproof_funtype_40_ftbl_t ftbl;
        sigmatdproof_funtype_40_htbl_t htbl;};
typedef struct sigmatdproof_funtype_40_s * sigmatdproof_funtype_40_t;

extern void release_sigmatdproof_funtype_40(sigmatdproof_funtype_40_t x);

extern sigmatdproof_funtype_40_t copy_sigmatdproof_funtype_40(sigmatdproof_funtype_40_t x);

extern bool_t equal_sigmatdproof_funtype_40(sigmatdproof_funtype_40_t x, sigmatdproof_funtype_40_t y);

extern char* json_sigmatdproof_funtype_40(sigmatdproof_funtype_40_t x);




struct sigmatdproof_closure_41_s;
        typedef struct sigmatdproof_closure_41_s * sigmatdproof_closure_41_t;

struct sigmatdproof_closure_41_s {uint32_t count;
         sigmatdproof_funtype_35_ftbl_t ftbl;
         sigmatdproof_funtype_35_htbl_t htbl;
        sigmatdproof_funtype_40_t fvar_1;
        sigmatdproof_funtype_35_t fvar_2;};

mpz_ptr_t f_sigmatdproof_closure_41(struct sigmatdproof_closure_41_s * closure, sigmatdproof__qstack_adt_t bvar);

mpz_ptr_t m_sigmatdproof_closure_41(struct sigmatdproof_closure_41_s * closure, sigmatdproof__qstack_adt_t bvar);

extern mpz_ptr_t h_sigmatdproof_closure_41(sigmatdproof__qstack_adt_t ivar_6, sigmatdproof_funtype_40_t ivar_3, sigmatdproof_funtype_35_t ivar_1);

extern sigmatdproof_closure_41_t new_sigmatdproof_closure_41(void);

extern void release_sigmatdproof_closure_41(sigmatdproof_funtype_35_t closure);

extern sigmatdproof_closure_41_t copy_sigmatdproof_closure_41(sigmatdproof_closure_41_t x);


//reduce_ordinal

struct sigmatdproof_funtype_42_s;
        typedef struct sigmatdproof_funtype_42_s * sigmatdproof_funtype_42_t;

struct sigmatdproof_funtype_42_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatdproof_funtype_42_s *, sigmatdproof__qstack_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatdproof_funtype_42_s *, sigmatdproof__qstack_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_42_s *);
        struct sigmatdproof_funtype_42_s * (* cptr)(struct sigmatdproof_funtype_42_s *);};
typedef struct sigmatdproof_funtype_42_ftbl_s * sigmatdproof_funtype_42_ftbl_t;

struct sigmatdproof_funtype_42_hashentry_s {uint32_t keyhash; sigmatdproof__qstack_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatdproof_funtype_42_hashentry_s sigmatdproof_funtype_42_hashentry_t;

struct sigmatdproof_funtype_42_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_42_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_42_htbl_s * sigmatdproof_funtype_42_htbl_t;

struct sigmatdproof_funtype_42_s {uint32_t count;
        sigmatdproof_funtype_42_ftbl_t ftbl;
        sigmatdproof_funtype_42_htbl_t htbl;};
typedef struct sigmatdproof_funtype_42_s * sigmatdproof_funtype_42_t;

extern void release_sigmatdproof_funtype_42(sigmatdproof_funtype_42_t x);

extern sigmatdproof_funtype_42_t copy_sigmatdproof_funtype_42(sigmatdproof_funtype_42_t x);

extern bool_t equal_sigmatdproof_funtype_42(sigmatdproof_funtype_42_t x, sigmatdproof_funtype_42_t y);

extern char* json_sigmatdproof_funtype_42(sigmatdproof_funtype_42_t x);


//reduce_ordinal

struct sigmatdproof_record_43_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;};
typedef struct sigmatdproof_record_43_s * sigmatdproof_record_43_t;

extern sigmatdproof_record_43_t new_sigmatdproof_record_43(void);

extern void release_sigmatdproof_record_43(sigmatdproof_record_43_t x);

extern sigmatdproof_record_43_t copy_sigmatdproof_record_43(sigmatdproof_record_43_t x);

extern bool_t equal_sigmatdproof_record_43(sigmatdproof_record_43_t x, sigmatdproof_record_43_t y);
extern char * json_sigmatdproof_record_43(sigmatdproof_record_43_t x);

typedef struct actual_sigmatdproof_record_43_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_43_t;
void release_sigmatdproof_record_43_ptr(pointer_t x, type_actual_t sigmatdproof_record_43);

extern bool_t equal_sigmatdproof_record_43_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_43_t T);

extern char * json_sigmatdproof_record_43_ptr(pointer_t x,  actual_sigmatdproof_record_43_t T);

actual_sigmatdproof_record_43_t actual_sigmatdproof_record_43(void);

extern sigmatdproof_record_43_t update_sigmatdproof_record_43_project_1(sigmatdproof_record_43_t x, uint8_t v);

extern sigmatdproof_record_43_t update_sigmatdproof_record_43_project_2(sigmatdproof_record_43_t x, uint32_t v);

extern sigmatdproof_record_43_t update_sigmatdproof_record_43_project_3(sigmatdproof_record_43_t x, ordstruct_adt__ordstruct_adt_t v);


//reduce_ordinal

struct sigmatdproof_funtype_44_s;
        typedef struct sigmatdproof_funtype_44_s * sigmatdproof_funtype_44_t;

struct sigmatdproof_funtype_44_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatdproof_funtype_44_s *, sigmatdproof_record_43_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatdproof_funtype_44_s *, uint8_t, uint32_t, ordstruct_adt__ordstruct_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_44_s *);
        struct sigmatdproof_funtype_44_s * (* cptr)(struct sigmatdproof_funtype_44_s *);};
typedef struct sigmatdproof_funtype_44_ftbl_s * sigmatdproof_funtype_44_ftbl_t;

struct sigmatdproof_funtype_44_hashentry_s {uint32_t keyhash; sigmatdproof_record_43_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatdproof_funtype_44_hashentry_s sigmatdproof_funtype_44_hashentry_t;

struct sigmatdproof_funtype_44_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_44_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_44_htbl_s * sigmatdproof_funtype_44_htbl_t;

struct sigmatdproof_funtype_44_s {uint32_t count;
        sigmatdproof_funtype_44_ftbl_t ftbl;
        sigmatdproof_funtype_44_htbl_t htbl;};
typedef struct sigmatdproof_funtype_44_s * sigmatdproof_funtype_44_t;

extern void release_sigmatdproof_funtype_44(sigmatdproof_funtype_44_t x);

extern sigmatdproof_funtype_44_t copy_sigmatdproof_funtype_44(sigmatdproof_funtype_44_t x);

extern bool_t equal_sigmatdproof_funtype_44(sigmatdproof_funtype_44_t x, sigmatdproof_funtype_44_t y);

extern char* json_sigmatdproof_funtype_44(sigmatdproof_funtype_44_t x);




struct sigmatdproof_closure_45_s;
        typedef struct sigmatdproof_closure_45_s * sigmatdproof_closure_45_t;

struct sigmatdproof_closure_45_s {uint32_t count;
         sigmatdproof_funtype_42_ftbl_t ftbl;
         sigmatdproof_funtype_42_htbl_t htbl;
        sigmatdproof_funtype_44_t fvar_1;
        ordstruct_adt__ordstruct_adt_t fvar_2;};

ordstruct_adt__ordstruct_adt_t f_sigmatdproof_closure_45(struct sigmatdproof_closure_45_s * closure, sigmatdproof__qstack_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_sigmatdproof_closure_45(struct sigmatdproof_closure_45_s * closure, sigmatdproof__qstack_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_sigmatdproof_closure_45(sigmatdproof__qstack_adt_t ivar_5, sigmatdproof_funtype_44_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1);

extern sigmatdproof_closure_45_t new_sigmatdproof_closure_45(void);

extern void release_sigmatdproof_closure_45(sigmatdproof_funtype_42_t closure);

extern sigmatdproof_closure_45_t copy_sigmatdproof_closure_45(sigmatdproof_closure_45_t x);


//REDUCE_ordinal

struct sigmatdproof_record_46_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;
        sigmatdproof__qstack_adt_t project_4;};
typedef struct sigmatdproof_record_46_s * sigmatdproof_record_46_t;

extern sigmatdproof_record_46_t new_sigmatdproof_record_46(void);

extern void release_sigmatdproof_record_46(sigmatdproof_record_46_t x);

extern sigmatdproof_record_46_t copy_sigmatdproof_record_46(sigmatdproof_record_46_t x);

extern bool_t equal_sigmatdproof_record_46(sigmatdproof_record_46_t x, sigmatdproof_record_46_t y);
extern char * json_sigmatdproof_record_46(sigmatdproof_record_46_t x);

typedef struct actual_sigmatdproof_record_46_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_46_t;
void release_sigmatdproof_record_46_ptr(pointer_t x, type_actual_t sigmatdproof_record_46);

extern bool_t equal_sigmatdproof_record_46_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_46_t T);

extern char * json_sigmatdproof_record_46_ptr(pointer_t x,  actual_sigmatdproof_record_46_t T);

actual_sigmatdproof_record_46_t actual_sigmatdproof_record_46(void);

extern sigmatdproof_record_46_t update_sigmatdproof_record_46_project_1(sigmatdproof_record_46_t x, uint8_t v);

extern sigmatdproof_record_46_t update_sigmatdproof_record_46_project_2(sigmatdproof_record_46_t x, uint32_t v);

extern sigmatdproof_record_46_t update_sigmatdproof_record_46_project_3(sigmatdproof_record_46_t x, ordstruct_adt__ordstruct_adt_t v);

extern sigmatdproof_record_46_t update_sigmatdproof_record_46_project_4(sigmatdproof_record_46_t x, sigmatdproof__qstack_adt_t v);


//REDUCE_ordinal

struct sigmatdproof_funtype_47_s;
        typedef struct sigmatdproof_funtype_47_s * sigmatdproof_funtype_47_t;

struct sigmatdproof_funtype_47_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatdproof_funtype_47_s *, sigmatdproof_record_46_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatdproof_funtype_47_s *, uint8_t, uint32_t, ordstruct_adt__ordstruct_adt_t, sigmatdproof__qstack_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_47_s *);
        struct sigmatdproof_funtype_47_s * (* cptr)(struct sigmatdproof_funtype_47_s *);};
typedef struct sigmatdproof_funtype_47_ftbl_s * sigmatdproof_funtype_47_ftbl_t;

struct sigmatdproof_funtype_47_hashentry_s {uint32_t keyhash; sigmatdproof_record_46_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatdproof_funtype_47_hashentry_s sigmatdproof_funtype_47_hashentry_t;

struct sigmatdproof_funtype_47_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_47_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_47_htbl_s * sigmatdproof_funtype_47_htbl_t;

struct sigmatdproof_funtype_47_s {uint32_t count;
        sigmatdproof_funtype_47_ftbl_t ftbl;
        sigmatdproof_funtype_47_htbl_t htbl;};
typedef struct sigmatdproof_funtype_47_s * sigmatdproof_funtype_47_t;

extern void release_sigmatdproof_funtype_47(sigmatdproof_funtype_47_t x);

extern sigmatdproof_funtype_47_t copy_sigmatdproof_funtype_47(sigmatdproof_funtype_47_t x);

extern bool_t equal_sigmatdproof_funtype_47(sigmatdproof_funtype_47_t x, sigmatdproof_funtype_47_t y);

extern char* json_sigmatdproof_funtype_47(sigmatdproof_funtype_47_t x);




struct sigmatdproof_closure_48_s;
        typedef struct sigmatdproof_closure_48_s * sigmatdproof_closure_48_t;

struct sigmatdproof_closure_48_s {uint32_t count;
         sigmatdproof_funtype_42_ftbl_t ftbl;
         sigmatdproof_funtype_42_htbl_t htbl;
        sigmatdproof_funtype_47_t fvar_1;
        sigmatdproof_funtype_42_t fvar_2;};

ordstruct_adt__ordstruct_adt_t f_sigmatdproof_closure_48(struct sigmatdproof_closure_48_s * closure, sigmatdproof__qstack_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_sigmatdproof_closure_48(struct sigmatdproof_closure_48_s * closure, sigmatdproof__qstack_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_sigmatdproof_closure_48(sigmatdproof__qstack_adt_t ivar_6, sigmatdproof_funtype_47_t ivar_3, sigmatdproof_funtype_42_t ivar_1);

extern sigmatdproof_closure_48_t new_sigmatdproof_closure_48(void);

extern void release_sigmatdproof_closure_48(sigmatdproof_funtype_42_t closure);

extern sigmatdproof_closure_48_t copy_sigmatdproof_closure_48(sigmatdproof_closure_48_t x);


//good_qstack?

struct sigmatdproof_funtype_49_s;
        typedef struct sigmatdproof_funtype_49_s * sigmatdproof_funtype_49_t;

struct sigmatdproof_funtype_49_ftbl_s {bool_t (* fptr)(struct sigmatdproof_funtype_49_s *, sigmatdproof__qstack_adt_t);
        bool_t (* mptr)(struct sigmatdproof_funtype_49_s *, sigmatdproof__qstack_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_49_s *);
        struct sigmatdproof_funtype_49_s * (* cptr)(struct sigmatdproof_funtype_49_s *);};
typedef struct sigmatdproof_funtype_49_ftbl_s * sigmatdproof_funtype_49_ftbl_t;

struct sigmatdproof_funtype_49_hashentry_s {uint32_t keyhash; sigmatdproof__qstack_adt_t key; bool_t value;}; 
typedef struct sigmatdproof_funtype_49_hashentry_s sigmatdproof_funtype_49_hashentry_t;

struct sigmatdproof_funtype_49_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_49_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_49_htbl_s * sigmatdproof_funtype_49_htbl_t;

struct sigmatdproof_funtype_49_s {uint32_t count;
        sigmatdproof_funtype_49_ftbl_t ftbl;
        sigmatdproof_funtype_49_htbl_t htbl;};
typedef struct sigmatdproof_funtype_49_s * sigmatdproof_funtype_49_t;

extern void release_sigmatdproof_funtype_49(sigmatdproof_funtype_49_t x);

extern sigmatdproof_funtype_49_t copy_sigmatdproof_funtype_49(sigmatdproof_funtype_49_t x);

extern bool_t equal_sigmatdproof_funtype_49(sigmatdproof_funtype_49_t x, sigmatdproof_funtype_49_t y);

extern char* json_sigmatdproof_funtype_49(sigmatdproof_funtype_49_t x);


//good_qstack?

struct sigmatdproof_array_50_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct sigmatdproof_array_50_s * sigmatdproof_array_50_t;

extern sigmatdproof_array_50_t new_sigmatdproof_array_50(uint32_t size);

extern void release_sigmatdproof_array_50(sigmatdproof_array_50_t x);

extern sigmatdproof_array_50_t copy_sigmatdproof_array_50(sigmatdproof_array_50_t x);

extern bool_t equal_sigmatdproof_array_50(sigmatdproof_array_50_t x, sigmatdproof_array_50_t y);
extern char * json_sigmatdproof_array_50(sigmatdproof_array_50_t x);

typedef struct actual_sigmatdproof_array_50_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_array_50_t;
void release_sigmatdproof_array_50_ptr(pointer_t x, type_actual_t sigmatdproof_array_50);

extern bool_t equal_sigmatdproof_array_50_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatdproof_array_50_ptr(pointer_t x, type_actual_t T);

actual_sigmatdproof_array_50_t actual_sigmatdproof_array_50(void);

extern sigmatdproof_array_50_t update_sigmatdproof_array_50(sigmatdproof_array_50_t x, uint32_t i, uint8_t v);

extern sigmatdproof_array_50_t upgrade_sigmatdproof_array_50(sigmatdproof_array_50_t x, uint32_t i, uint8_t v);


//good_qstack?

struct sigmatdproof_array_51_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         sigmatopdown__ent_adt_t elems[]; };
typedef struct sigmatdproof_array_51_s * sigmatdproof_array_51_t;

extern sigmatdproof_array_51_t new_sigmatdproof_array_51(uint32_t size);

extern void release_sigmatdproof_array_51(sigmatdproof_array_51_t x);

extern sigmatdproof_array_51_t copy_sigmatdproof_array_51(sigmatdproof_array_51_t x);

extern bool_t equal_sigmatdproof_array_51(sigmatdproof_array_51_t x, sigmatdproof_array_51_t y);
extern char * json_sigmatdproof_array_51(sigmatdproof_array_51_t x);

typedef struct actual_sigmatdproof_array_51_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_array_51_t;
void release_sigmatdproof_array_51_ptr(pointer_t x, type_actual_t sigmatdproof_array_51);

extern bool_t equal_sigmatdproof_array_51_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatdproof_array_51_ptr(pointer_t x, type_actual_t T);

actual_sigmatdproof_array_51_t actual_sigmatdproof_array_51(void);

extern sigmatdproof_array_51_t update_sigmatdproof_array_51(sigmatdproof_array_51_t x, uint32_t i, sigmatopdown__ent_adt_t v);

extern sigmatdproof_array_51_t upgrade_sigmatdproof_array_51(sigmatdproof_array_51_t x, uint32_t i, sigmatopdown__ent_adt_t v);


//good_qstack?

struct sigmatdproof_array_52_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         sigmatdproof_array_51_t elems[]; };
typedef struct sigmatdproof_array_52_s * sigmatdproof_array_52_t;

extern sigmatdproof_array_52_t new_sigmatdproof_array_52(uint32_t size);

extern void release_sigmatdproof_array_52(sigmatdproof_array_52_t x);

extern sigmatdproof_array_52_t copy_sigmatdproof_array_52(sigmatdproof_array_52_t x);

extern bool_t equal_sigmatdproof_array_52(sigmatdproof_array_52_t x, sigmatdproof_array_52_t y);
extern char * json_sigmatdproof_array_52(sigmatdproof_array_52_t x);

typedef struct actual_sigmatdproof_array_52_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_array_52_t;
void release_sigmatdproof_array_52_ptr(pointer_t x, type_actual_t sigmatdproof_array_52);

extern bool_t equal_sigmatdproof_array_52_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatdproof_array_52_ptr(pointer_t x, type_actual_t T);

actual_sigmatdproof_array_52_t actual_sigmatdproof_array_52(void);

extern sigmatdproof_array_52_t update_sigmatdproof_array_52(sigmatdproof_array_52_t x, uint32_t i, sigmatdproof_array_51_t v);

extern sigmatdproof_array_52_t upgrade_sigmatdproof_array_52(sigmatdproof_array_52_t x, uint32_t i, sigmatdproof_array_51_t v);




struct sigmatdproof_closure_53_s;
        typedef struct sigmatdproof_closure_53_s * sigmatdproof_closure_53_t;

struct sigmatdproof_closure_53_s {uint32_t count;
         sigmatdproof_funtype_49_ftbl_t ftbl;
         sigmatdproof_funtype_49_htbl_t htbl;
        sigmatdproof_array_50_t fvar_1;
        uint32_t fvar_2;
        sigmatdproof_array_52_t fvar_3;
        sigmatopdown__lang_spec_t fvar_4;};

bool_t f_sigmatdproof_closure_53(struct sigmatdproof_closure_53_s * closure, sigmatdproof__qstack_adt_t bvar);

bool_t m_sigmatdproof_closure_53(struct sigmatdproof_closure_53_s * closure, sigmatdproof__qstack_adt_t bvar);

extern bool_t h_sigmatdproof_closure_53(sigmatdproof__qstack_adt_t ivar_7, sigmatdproof_array_50_t ivar_3, uint32_t ivar_1, sigmatdproof_array_52_t ivar_4, sigmatopdown__lang_spec_t ivar_2);

extern sigmatdproof_closure_53_t new_sigmatdproof_closure_53(void);

extern void release_sigmatdproof_closure_53(sigmatdproof_funtype_49_t closure);

extern sigmatdproof_closure_53_t copy_sigmatdproof_closure_53(sigmatdproof_closure_53_t x);


//good_parsetree?

struct sigmatdproof_record_54_s {
        uint32_t count; 
        sigmatdproof__qstack_adt_t project_1;
        uint8_t project_2;
        uint32_t project_3;
        sigmatdproof__parsetree_adt_t project_4;};
typedef struct sigmatdproof_record_54_s * sigmatdproof_record_54_t;

extern sigmatdproof_record_54_t new_sigmatdproof_record_54(void);

extern void release_sigmatdproof_record_54(sigmatdproof_record_54_t x);

extern sigmatdproof_record_54_t copy_sigmatdproof_record_54(sigmatdproof_record_54_t x);

extern bool_t equal_sigmatdproof_record_54(sigmatdproof_record_54_t x, sigmatdproof_record_54_t y);
extern char * json_sigmatdproof_record_54(sigmatdproof_record_54_t x);

typedef struct actual_sigmatdproof_record_54_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_54_t;
void release_sigmatdproof_record_54_ptr(pointer_t x, type_actual_t sigmatdproof_record_54);

extern bool_t equal_sigmatdproof_record_54_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_54_t T);

extern char * json_sigmatdproof_record_54_ptr(pointer_t x,  actual_sigmatdproof_record_54_t T);

actual_sigmatdproof_record_54_t actual_sigmatdproof_record_54(void);

extern sigmatdproof_record_54_t update_sigmatdproof_record_54_project_1(sigmatdproof_record_54_t x, sigmatdproof__qstack_adt_t v);

extern sigmatdproof_record_54_t update_sigmatdproof_record_54_project_2(sigmatdproof_record_54_t x, uint8_t v);

extern sigmatdproof_record_54_t update_sigmatdproof_record_54_project_3(sigmatdproof_record_54_t x, uint32_t v);

extern sigmatdproof_record_54_t update_sigmatdproof_record_54_project_4(sigmatdproof_record_54_t x, sigmatdproof__parsetree_adt_t v);


//good_parsetree?

struct sigmatdproof_funtype_55_s;
        typedef struct sigmatdproof_funtype_55_s * sigmatdproof_funtype_55_t;

struct sigmatdproof_funtype_55_ftbl_s {bool_t (* fptr)(struct sigmatdproof_funtype_55_s *, sigmatdproof_record_54_t);
        bool_t (* mptr)(struct sigmatdproof_funtype_55_s *, sigmatdproof__qstack_adt_t, uint8_t, uint32_t, sigmatdproof__parsetree_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_55_s *);
        struct sigmatdproof_funtype_55_s * (* cptr)(struct sigmatdproof_funtype_55_s *);};
typedef struct sigmatdproof_funtype_55_ftbl_s * sigmatdproof_funtype_55_ftbl_t;

struct sigmatdproof_funtype_55_hashentry_s {uint32_t keyhash; sigmatdproof_record_54_t key; bool_t value;}; 
typedef struct sigmatdproof_funtype_55_hashentry_s sigmatdproof_funtype_55_hashentry_t;

struct sigmatdproof_funtype_55_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_55_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_55_htbl_s * sigmatdproof_funtype_55_htbl_t;

struct sigmatdproof_funtype_55_s {uint32_t count;
        sigmatdproof_funtype_55_ftbl_t ftbl;
        sigmatdproof_funtype_55_htbl_t htbl;};
typedef struct sigmatdproof_funtype_55_s * sigmatdproof_funtype_55_t;

extern void release_sigmatdproof_funtype_55(sigmatdproof_funtype_55_t x);

extern sigmatdproof_funtype_55_t copy_sigmatdproof_funtype_55(sigmatdproof_funtype_55_t x);

extern bool_t equal_sigmatdproof_funtype_55(sigmatdproof_funtype_55_t x, sigmatdproof_funtype_55_t y);

extern char* json_sigmatdproof_funtype_55(sigmatdproof_funtype_55_t x);




struct sigmatdproof_closure_56_s;
        typedef struct sigmatdproof_closure_56_s * sigmatdproof_closure_56_t;

struct sigmatdproof_closure_56_s {uint32_t count;
         sigmatdproof_funtype_55_ftbl_t ftbl;
         sigmatdproof_funtype_55_htbl_t htbl;
        sigmatdproof_array_50_t fvar_1;
        uint32_t fvar_2;
        sigmatopdown__lang_spec_t fvar_3;};

bool_t f_sigmatdproof_closure_56(struct sigmatdproof_closure_56_s * closure, sigmatdproof_record_54_t bvar);

bool_t m_sigmatdproof_closure_56(struct sigmatdproof_closure_56_s * closure, sigmatdproof__qstack_adt_t bvar_1, uint8_t bvar_2, uint32_t bvar_3, sigmatdproof__parsetree_adt_t bvar_4);

extern bool_t h_sigmatdproof_closure_56(sigmatdproof__qstack_adt_t ivar_5, uint8_t ivar_6, uint32_t ivar_7, sigmatdproof__parsetree_adt_t ivar_8, sigmatdproof_array_50_t ivar_3, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2);

extern sigmatdproof_closure_56_t new_sigmatdproof_closure_56(void);

extern void release_sigmatdproof_closure_56(sigmatdproof_funtype_55_t closure);

extern sigmatdproof_closure_56_t copy_sigmatdproof_closure_56(sigmatdproof_closure_56_t x);


//good_parsetree?

struct sigmatdproof_funtype_57_s;
        typedef struct sigmatdproof_funtype_57_s * sigmatdproof_funtype_57_t;

struct sigmatdproof_funtype_57_ftbl_s {bool_t (* fptr)(struct sigmatdproof_funtype_57_s *, uint8_t);
        bool_t (* mptr)(struct sigmatdproof_funtype_57_s *, uint8_t);
        void (* rptr)(struct sigmatdproof_funtype_57_s *);
        struct sigmatdproof_funtype_57_s * (* cptr)(struct sigmatdproof_funtype_57_s *);};
typedef struct sigmatdproof_funtype_57_ftbl_s * sigmatdproof_funtype_57_ftbl_t;

struct sigmatdproof_funtype_57_hashentry_s {uint32_t keyhash; uint8_t key; bool_t value;}; 
typedef struct sigmatdproof_funtype_57_hashentry_s sigmatdproof_funtype_57_hashentry_t;

struct sigmatdproof_funtype_57_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_57_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_57_htbl_s * sigmatdproof_funtype_57_htbl_t;

struct sigmatdproof_funtype_57_s {uint32_t count;
        sigmatdproof_funtype_57_ftbl_t ftbl;
        sigmatdproof_funtype_57_htbl_t htbl;};
typedef struct sigmatdproof_funtype_57_s * sigmatdproof_funtype_57_t;

extern void release_sigmatdproof_funtype_57(sigmatdproof_funtype_57_t x);

extern sigmatdproof_funtype_57_t copy_sigmatdproof_funtype_57(sigmatdproof_funtype_57_t x);

uint32_t lookup_sigmatdproof_funtype_57(sigmatdproof_funtype_57_htbl_t htbl, uint8_t i, uint32_t ihash);

sigmatdproof_funtype_57_t dupdate_sigmatdproof_funtype_57(sigmatdproof_funtype_57_t a, uint8_t i, bool_t v);

extern sigmatdproof_funtype_57_t update_sigmatdproof_funtype_57(sigmatdproof_funtype_57_t a, uint8_t i, bool_t v);

extern bool_t equal_sigmatdproof_funtype_57(sigmatdproof_funtype_57_t x, sigmatdproof_funtype_57_t y);

extern char* json_sigmatdproof_funtype_57(sigmatdproof_funtype_57_t x);


//good_parsetree?

struct sigmatdproof_funtype_58_s;
        typedef struct sigmatdproof_funtype_58_s * sigmatdproof_funtype_58_t;

struct sigmatdproof_funtype_58_ftbl_s {bool_t (* fptr)(struct sigmatdproof_funtype_58_s *, sigmatopdown__ent_adt_t);
        bool_t (* mptr)(struct sigmatdproof_funtype_58_s *, sigmatopdown__ent_adt_t);
        void (* rptr)(struct sigmatdproof_funtype_58_s *);
        struct sigmatdproof_funtype_58_s * (* cptr)(struct sigmatdproof_funtype_58_s *);};
typedef struct sigmatdproof_funtype_58_ftbl_s * sigmatdproof_funtype_58_ftbl_t;

struct sigmatdproof_funtype_58_hashentry_s {uint32_t keyhash; sigmatopdown__ent_adt_t key; bool_t value;}; 
typedef struct sigmatdproof_funtype_58_hashentry_s sigmatdproof_funtype_58_hashentry_t;

struct sigmatdproof_funtype_58_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_58_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_58_htbl_s * sigmatdproof_funtype_58_htbl_t;

struct sigmatdproof_funtype_58_s {uint32_t count;
        sigmatdproof_funtype_58_ftbl_t ftbl;
        sigmatdproof_funtype_58_htbl_t htbl;};
typedef struct sigmatdproof_funtype_58_s * sigmatdproof_funtype_58_t;

extern void release_sigmatdproof_funtype_58(sigmatdproof_funtype_58_t x);

extern sigmatdproof_funtype_58_t copy_sigmatdproof_funtype_58(sigmatdproof_funtype_58_t x);

extern bool_t equal_sigmatdproof_funtype_58(sigmatdproof_funtype_58_t x, sigmatdproof_funtype_58_t y);

extern char* json_sigmatdproof_funtype_58(sigmatdproof_funtype_58_t x);


//buildtree

struct sigmatdproof_record_59_s {
        uint32_t count; 
        sigmatdproof_array_52_t scaf;
        uint64_t depth;
        sigmatopdown__ent_adt_t stack;
        bool_t lflag;};
typedef struct sigmatdproof_record_59_s * sigmatdproof_record_59_t;

extern sigmatdproof_record_59_t new_sigmatdproof_record_59(void);

extern void release_sigmatdproof_record_59(sigmatdproof_record_59_t x);

extern sigmatdproof_record_59_t copy_sigmatdproof_record_59(sigmatdproof_record_59_t x);

extern bool_t equal_sigmatdproof_record_59(sigmatdproof_record_59_t x, sigmatdproof_record_59_t y);
extern char * json_sigmatdproof_record_59(sigmatdproof_record_59_t x);

typedef struct actual_sigmatdproof_record_59_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_59_t;
void release_sigmatdproof_record_59_ptr(pointer_t x, type_actual_t sigmatdproof_record_59);

extern bool_t equal_sigmatdproof_record_59_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_59_t T);

extern char * json_sigmatdproof_record_59_ptr(pointer_t x,  actual_sigmatdproof_record_59_t T);

actual_sigmatdproof_record_59_t actual_sigmatdproof_record_59(void);

extern sigmatdproof_record_59_t update_sigmatdproof_record_59_scaf(sigmatdproof_record_59_t x, sigmatdproof_array_52_t v);

extern sigmatdproof_record_59_t update_sigmatdproof_record_59_depth(sigmatdproof_record_59_t x, uint64_t v);

extern sigmatdproof_record_59_t update_sigmatdproof_record_59_stack(sigmatdproof_record_59_t x, sigmatopdown__ent_adt_t v);

extern sigmatdproof_record_59_t update_sigmatdproof_record_59_lflag(sigmatdproof_record_59_t x, bool_t v);


//buildtree

struct sigmatdproof_record_60_s {
        uint32_t count; 
        sigmatdproof_record_59_t project_1;
        sigmatdproof__qstack_adt_t project_2;
        uint8_t project_3;
        uint32_t project_4;};
typedef struct sigmatdproof_record_60_s * sigmatdproof_record_60_t;

extern sigmatdproof_record_60_t new_sigmatdproof_record_60(void);

extern void release_sigmatdproof_record_60(sigmatdproof_record_60_t x);

extern sigmatdproof_record_60_t copy_sigmatdproof_record_60(sigmatdproof_record_60_t x);

extern bool_t equal_sigmatdproof_record_60(sigmatdproof_record_60_t x, sigmatdproof_record_60_t y);
extern char * json_sigmatdproof_record_60(sigmatdproof_record_60_t x);

typedef struct actual_sigmatdproof_record_60_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_60_t;
void release_sigmatdproof_record_60_ptr(pointer_t x, type_actual_t sigmatdproof_record_60);

extern bool_t equal_sigmatdproof_record_60_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_60_t T);

extern char * json_sigmatdproof_record_60_ptr(pointer_t x,  actual_sigmatdproof_record_60_t T);

actual_sigmatdproof_record_60_t actual_sigmatdproof_record_60(void);

extern sigmatdproof_record_60_t update_sigmatdproof_record_60_project_1(sigmatdproof_record_60_t x, sigmatdproof_record_59_t v);

extern sigmatdproof_record_60_t update_sigmatdproof_record_60_project_2(sigmatdproof_record_60_t x, sigmatdproof__qstack_adt_t v);

extern sigmatdproof_record_60_t update_sigmatdproof_record_60_project_3(sigmatdproof_record_60_t x, uint8_t v);

extern sigmatdproof_record_60_t update_sigmatdproof_record_60_project_4(sigmatdproof_record_60_t x, uint32_t v);


//buildtree

struct sigmatdproof_funtype_61_s;
        typedef struct sigmatdproof_funtype_61_s * sigmatdproof_funtype_61_t;

struct sigmatdproof_funtype_61_ftbl_s {sigmatdproof__parsetree_adt_t (* fptr)(struct sigmatdproof_funtype_61_s *, sigmatdproof_record_60_t);
        sigmatdproof__parsetree_adt_t (* mptr)(struct sigmatdproof_funtype_61_s *, sigmatdproof_record_59_t, sigmatdproof__qstack_adt_t, uint8_t, uint32_t);
        void (* rptr)(struct sigmatdproof_funtype_61_s *);
        struct sigmatdproof_funtype_61_s * (* cptr)(struct sigmatdproof_funtype_61_s *);};
typedef struct sigmatdproof_funtype_61_ftbl_s * sigmatdproof_funtype_61_ftbl_t;

struct sigmatdproof_funtype_61_hashentry_s {uint32_t keyhash; sigmatdproof_record_60_t key; sigmatdproof__parsetree_adt_t value;}; 
typedef struct sigmatdproof_funtype_61_hashentry_s sigmatdproof_funtype_61_hashentry_t;

struct sigmatdproof_funtype_61_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_61_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_61_htbl_s * sigmatdproof_funtype_61_htbl_t;

struct sigmatdproof_funtype_61_s {uint32_t count;
        sigmatdproof_funtype_61_ftbl_t ftbl;
        sigmatdproof_funtype_61_htbl_t htbl;};
typedef struct sigmatdproof_funtype_61_s * sigmatdproof_funtype_61_t;

extern void release_sigmatdproof_funtype_61(sigmatdproof_funtype_61_t x);

extern sigmatdproof_funtype_61_t copy_sigmatdproof_funtype_61(sigmatdproof_funtype_61_t x);

extern bool_t equal_sigmatdproof_funtype_61(sigmatdproof_funtype_61_t x, sigmatdproof_funtype_61_t y);

extern char* json_sigmatdproof_funtype_61(sigmatdproof_funtype_61_t x);




struct sigmatdproof_closure_62_s;
        typedef struct sigmatdproof_closure_62_s * sigmatdproof_closure_62_t;

struct sigmatdproof_closure_62_s {uint32_t count;
         sigmatdproof_funtype_61_ftbl_t ftbl;
         sigmatdproof_funtype_61_htbl_t htbl;
        uint32_t fvar_1;
        sigmatopdown__lang_spec_t fvar_2;
        sigmatdproof_array_50_t fvar_3;
        uint8_t fvar_4;
        uint32_t fvar_5;};

sigmatdproof__parsetree_adt_t f_sigmatdproof_closure_62(struct sigmatdproof_closure_62_s * closure, sigmatdproof_record_60_t bvar);

sigmatdproof__parsetree_adt_t m_sigmatdproof_closure_62(struct sigmatdproof_closure_62_s * closure, sigmatdproof_record_59_t bvar_1, sigmatdproof__qstack_adt_t bvar_2, uint8_t bvar_3, uint32_t bvar_4);

extern sigmatdproof__parsetree_adt_t h_sigmatdproof_closure_62(sigmatdproof_record_59_t ivar_8, sigmatdproof__qstack_adt_t ivar_10, uint8_t ivar_11, uint32_t ivar_12, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatdproof_array_50_t ivar_3, uint8_t ivar_5, uint32_t ivar_4);

extern sigmatdproof_closure_62_t new_sigmatdproof_closure_62(void);

extern void release_sigmatdproof_closure_62(sigmatdproof_funtype_61_t closure);

extern sigmatdproof_closure_62_t copy_sigmatdproof_closure_62(sigmatdproof_closure_62_t x);


//buildloop

struct sigmatdproof_record_63_s {
        uint32_t count; 
        sigmatdproof_record_59_t project_1;
        sigmatdproof_array_52_t project_2;
        sigmatdproof__qstack_adt_t project_3;
        uint8_t project_4;
        uint32_t project_5;};
typedef struct sigmatdproof_record_63_s * sigmatdproof_record_63_t;

extern sigmatdproof_record_63_t new_sigmatdproof_record_63(void);

extern void release_sigmatdproof_record_63(sigmatdproof_record_63_t x);

extern sigmatdproof_record_63_t copy_sigmatdproof_record_63(sigmatdproof_record_63_t x);

extern bool_t equal_sigmatdproof_record_63(sigmatdproof_record_63_t x, sigmatdproof_record_63_t y);
extern char * json_sigmatdproof_record_63(sigmatdproof_record_63_t x);

typedef struct actual_sigmatdproof_record_63_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_63_t;
void release_sigmatdproof_record_63_ptr(pointer_t x, type_actual_t sigmatdproof_record_63);

extern bool_t equal_sigmatdproof_record_63_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_63_t T);

extern char * json_sigmatdproof_record_63_ptr(pointer_t x,  actual_sigmatdproof_record_63_t T);

actual_sigmatdproof_record_63_t actual_sigmatdproof_record_63(void);

extern sigmatdproof_record_63_t update_sigmatdproof_record_63_project_1(sigmatdproof_record_63_t x, sigmatdproof_record_59_t v);

extern sigmatdproof_record_63_t update_sigmatdproof_record_63_project_2(sigmatdproof_record_63_t x, sigmatdproof_array_52_t v);

extern sigmatdproof_record_63_t update_sigmatdproof_record_63_project_3(sigmatdproof_record_63_t x, sigmatdproof__qstack_adt_t v);

extern sigmatdproof_record_63_t update_sigmatdproof_record_63_project_4(sigmatdproof_record_63_t x, uint8_t v);

extern sigmatdproof_record_63_t update_sigmatdproof_record_63_project_5(sigmatdproof_record_63_t x, uint32_t v);


//buildloop

struct sigmatdproof_funtype_64_s;
        typedef struct sigmatdproof_funtype_64_s * sigmatdproof_funtype_64_t;

struct sigmatdproof_funtype_64_ftbl_s {sigmatdproof__parsetree_adt_t (* fptr)(struct sigmatdproof_funtype_64_s *, sigmatdproof_record_63_t);
        sigmatdproof__parsetree_adt_t (* mptr)(struct sigmatdproof_funtype_64_s *, sigmatdproof_record_59_t, sigmatdproof_array_52_t, sigmatdproof__qstack_adt_t, uint8_t, uint32_t);
        void (* rptr)(struct sigmatdproof_funtype_64_s *);
        struct sigmatdproof_funtype_64_s * (* cptr)(struct sigmatdproof_funtype_64_s *);};
typedef struct sigmatdproof_funtype_64_ftbl_s * sigmatdproof_funtype_64_ftbl_t;

struct sigmatdproof_funtype_64_hashentry_s {uint32_t keyhash; sigmatdproof_record_63_t key; sigmatdproof__parsetree_adt_t value;}; 
typedef struct sigmatdproof_funtype_64_hashentry_s sigmatdproof_funtype_64_hashentry_t;

struct sigmatdproof_funtype_64_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_64_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_64_htbl_s * sigmatdproof_funtype_64_htbl_t;

struct sigmatdproof_funtype_64_s {uint32_t count;
        sigmatdproof_funtype_64_ftbl_t ftbl;
        sigmatdproof_funtype_64_htbl_t htbl;};
typedef struct sigmatdproof_funtype_64_s * sigmatdproof_funtype_64_t;

extern void release_sigmatdproof_funtype_64(sigmatdproof_funtype_64_t x);

extern sigmatdproof_funtype_64_t copy_sigmatdproof_funtype_64(sigmatdproof_funtype_64_t x);

extern bool_t equal_sigmatdproof_funtype_64(sigmatdproof_funtype_64_t x, sigmatdproof_funtype_64_t y);

extern char* json_sigmatdproof_funtype_64(sigmatdproof_funtype_64_t x);




struct sigmatdproof_closure_65_s;
        typedef struct sigmatdproof_closure_65_s * sigmatdproof_closure_65_t;

struct sigmatdproof_closure_65_s {uint32_t count;
         sigmatdproof_funtype_64_ftbl_t ftbl;
         sigmatdproof_funtype_64_htbl_t htbl;
        uint32_t fvar_1;
        sigmatopdown__lang_spec_t fvar_2;
        sigmatdproof_array_50_t fvar_3;
        uint8_t fvar_4;
        uint32_t fvar_5;};

sigmatdproof__parsetree_adt_t f_sigmatdproof_closure_65(struct sigmatdproof_closure_65_s * closure, sigmatdproof_record_63_t bvar);

sigmatdproof__parsetree_adt_t m_sigmatdproof_closure_65(struct sigmatdproof_closure_65_s * closure, sigmatdproof_record_59_t bvar_1, sigmatdproof_array_52_t bvar_2, sigmatdproof__qstack_adt_t bvar_3, uint8_t bvar_4, uint32_t bvar_5);

extern sigmatdproof__parsetree_adt_t h_sigmatdproof_closure_65(sigmatdproof_record_59_t ivar_9, sigmatdproof_array_52_t ivar_11, sigmatdproof__qstack_adt_t ivar_13, uint8_t ivar_14, uint32_t ivar_15, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatdproof_array_50_t ivar_3, uint8_t ivar_5, uint32_t ivar_4);

extern sigmatdproof_closure_65_t new_sigmatdproof_closure_65(void);

extern void release_sigmatdproof_closure_65(sigmatdproof_funtype_64_t closure);

extern sigmatdproof_closure_65_t copy_sigmatdproof_closure_65(sigmatdproof_closure_65_t x);


//buildloop

struct sigmatdproof_array_66_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         sigmatopdown__ent_adt_t elems[]; };
typedef struct sigmatdproof_array_66_s * sigmatdproof_array_66_t;

extern sigmatdproof_array_66_t new_sigmatdproof_array_66(uint32_t size);

extern void release_sigmatdproof_array_66(sigmatdproof_array_66_t x);

extern sigmatdproof_array_66_t copy_sigmatdproof_array_66(sigmatdproof_array_66_t x);

extern bool_t equal_sigmatdproof_array_66(sigmatdproof_array_66_t x, sigmatdproof_array_66_t y);
extern char * json_sigmatdproof_array_66(sigmatdproof_array_66_t x);

typedef struct actual_sigmatdproof_array_66_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_array_66_t;
void release_sigmatdproof_array_66_ptr(pointer_t x, type_actual_t sigmatdproof_array_66);

extern bool_t equal_sigmatdproof_array_66_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatdproof_array_66_ptr(pointer_t x, type_actual_t T);

actual_sigmatdproof_array_66_t actual_sigmatdproof_array_66(void);

extern sigmatdproof_array_66_t update_sigmatdproof_array_66(sigmatdproof_array_66_t x, uint32_t i, sigmatopdown__ent_adt_t v);

extern sigmatdproof_array_66_t upgrade_sigmatdproof_array_66(sigmatdproof_array_66_t x, uint32_t i, sigmatopdown__ent_adt_t v);


//buildproof

struct sigmatdproof_record_67_s {
        uint32_t count; 
        sigmatdproof_record_59_t project_1;
        uint8_t project_2;
        uint32_t project_3;};
typedef struct sigmatdproof_record_67_s * sigmatdproof_record_67_t;

extern sigmatdproof_record_67_t new_sigmatdproof_record_67(void);

extern void release_sigmatdproof_record_67(sigmatdproof_record_67_t x);

extern sigmatdproof_record_67_t copy_sigmatdproof_record_67(sigmatdproof_record_67_t x);

extern bool_t equal_sigmatdproof_record_67(sigmatdproof_record_67_t x, sigmatdproof_record_67_t y);
extern char * json_sigmatdproof_record_67(sigmatdproof_record_67_t x);

typedef struct actual_sigmatdproof_record_67_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdproof_record_67_t;
void release_sigmatdproof_record_67_ptr(pointer_t x, type_actual_t sigmatdproof_record_67);

extern bool_t equal_sigmatdproof_record_67_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_67_t T);

extern char * json_sigmatdproof_record_67_ptr(pointer_t x,  actual_sigmatdproof_record_67_t T);

actual_sigmatdproof_record_67_t actual_sigmatdproof_record_67(void);

extern sigmatdproof_record_67_t update_sigmatdproof_record_67_project_1(sigmatdproof_record_67_t x, sigmatdproof_record_59_t v);

extern sigmatdproof_record_67_t update_sigmatdproof_record_67_project_2(sigmatdproof_record_67_t x, uint8_t v);

extern sigmatdproof_record_67_t update_sigmatdproof_record_67_project_3(sigmatdproof_record_67_t x, uint32_t v);


//buildproof

struct sigmatdproof_funtype_68_s;
        typedef struct sigmatdproof_funtype_68_s * sigmatdproof_funtype_68_t;

struct sigmatdproof_funtype_68_ftbl_s {sigmatdproof__parsetree_adt_t (* fptr)(struct sigmatdproof_funtype_68_s *, sigmatdproof_record_67_t);
        sigmatdproof__parsetree_adt_t (* mptr)(struct sigmatdproof_funtype_68_s *, sigmatdproof_record_59_t, uint8_t, uint32_t);
        void (* rptr)(struct sigmatdproof_funtype_68_s *);
        struct sigmatdproof_funtype_68_s * (* cptr)(struct sigmatdproof_funtype_68_s *);};
typedef struct sigmatdproof_funtype_68_ftbl_s * sigmatdproof_funtype_68_ftbl_t;

struct sigmatdproof_funtype_68_hashentry_s {uint32_t keyhash; sigmatdproof_record_67_t key; sigmatdproof__parsetree_adt_t value;}; 
typedef struct sigmatdproof_funtype_68_hashentry_s sigmatdproof_funtype_68_hashentry_t;

struct sigmatdproof_funtype_68_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_68_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_68_htbl_s * sigmatdproof_funtype_68_htbl_t;

struct sigmatdproof_funtype_68_s {uint32_t count;
        sigmatdproof_funtype_68_ftbl_t ftbl;
        sigmatdproof_funtype_68_htbl_t htbl;};
typedef struct sigmatdproof_funtype_68_s * sigmatdproof_funtype_68_t;

extern void release_sigmatdproof_funtype_68(sigmatdproof_funtype_68_t x);

extern sigmatdproof_funtype_68_t copy_sigmatdproof_funtype_68(sigmatdproof_funtype_68_t x);

extern bool_t equal_sigmatdproof_funtype_68(sigmatdproof_funtype_68_t x, sigmatdproof_funtype_68_t y);

extern char* json_sigmatdproof_funtype_68(sigmatdproof_funtype_68_t x);




struct sigmatdproof_closure_69_s;
        typedef struct sigmatdproof_closure_69_s * sigmatdproof_closure_69_t;

struct sigmatdproof_closure_69_s {uint32_t count;
         sigmatdproof_funtype_68_ftbl_t ftbl;
         sigmatdproof_funtype_68_htbl_t htbl;
        uint32_t fvar_1;
        uint32_t fvar_2;
        uint8_t fvar_3;
        sigmatdproof_array_50_t fvar_4;
        sigmatopdown__lang_spec_t fvar_5;};

sigmatdproof__parsetree_adt_t f_sigmatdproof_closure_69(struct sigmatdproof_closure_69_s * closure, sigmatdproof_record_67_t bvar);

sigmatdproof__parsetree_adt_t m_sigmatdproof_closure_69(struct sigmatdproof_closure_69_s * closure, sigmatdproof_record_59_t bvar_1, uint8_t bvar_2, uint32_t bvar_3);

extern sigmatdproof__parsetree_adt_t h_sigmatdproof_closure_69(sigmatdproof_record_59_t ivar_8, uint8_t ivar_10, uint32_t ivar_11, uint32_t ivar_4, uint32_t ivar_1, uint8_t ivar_5, sigmatdproof_array_50_t ivar_3, sigmatopdown__lang_spec_t ivar_2);

extern sigmatdproof_closure_69_t new_sigmatdproof_closure_69(void);

extern void release_sigmatdproof_closure_69(sigmatdproof_funtype_68_t closure);

extern sigmatdproof_closure_69_t copy_sigmatdproof_closure_69(sigmatdproof_closure_69_t x);


//buildproof

struct sigmatdproof_funtype_70_s;
        typedef struct sigmatdproof_funtype_70_s * sigmatdproof_funtype_70_t;

struct sigmatdproof_funtype_70_ftbl_s {sigmatopdown__ent_adt_t (* fptr)(struct sigmatdproof_funtype_70_s *, uint8_t);
        sigmatopdown__ent_adt_t (* mptr)(struct sigmatdproof_funtype_70_s *, uint8_t);
        void (* rptr)(struct sigmatdproof_funtype_70_s *);
        struct sigmatdproof_funtype_70_s * (* cptr)(struct sigmatdproof_funtype_70_s *);};
typedef struct sigmatdproof_funtype_70_ftbl_s * sigmatdproof_funtype_70_ftbl_t;

struct sigmatdproof_funtype_70_hashentry_s {uint32_t keyhash; uint8_t key; sigmatopdown__ent_adt_t value;}; 
typedef struct sigmatdproof_funtype_70_hashentry_s sigmatdproof_funtype_70_hashentry_t;

struct sigmatdproof_funtype_70_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_70_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_70_htbl_s * sigmatdproof_funtype_70_htbl_t;

struct sigmatdproof_funtype_70_s {uint32_t count;
        sigmatdproof_funtype_70_ftbl_t ftbl;
        sigmatdproof_funtype_70_htbl_t htbl;};
typedef struct sigmatdproof_funtype_70_s * sigmatdproof_funtype_70_t;

extern void release_sigmatdproof_funtype_70(sigmatdproof_funtype_70_t x);

extern sigmatdproof_funtype_70_t copy_sigmatdproof_funtype_70(sigmatdproof_funtype_70_t x);

uint32_t lookup_sigmatdproof_funtype_70(sigmatdproof_funtype_70_htbl_t htbl, uint8_t i, uint32_t ihash);

sigmatdproof_funtype_70_t dupdate_sigmatdproof_funtype_70(sigmatdproof_funtype_70_t a, uint8_t i, sigmatopdown__ent_adt_t v);

extern sigmatdproof_funtype_70_t update_sigmatdproof_funtype_70(sigmatdproof_funtype_70_t a, uint8_t i, sigmatopdown__ent_adt_t v);

extern bool_t equal_sigmatdproof_funtype_70(sigmatdproof_funtype_70_t x, sigmatdproof_funtype_70_t y);

extern char* json_sigmatdproof_funtype_70(sigmatdproof_funtype_70_t x);




struct sigmatdproof_closure_71_s;
        typedef struct sigmatdproof_closure_71_s * sigmatdproof_closure_71_t;

struct sigmatdproof_closure_71_s {uint32_t count;
         sigmatdproof_funtype_70_ftbl_t ftbl;
         sigmatdproof_funtype_70_htbl_t htbl;};

sigmatopdown__ent_adt_t f_sigmatdproof_closure_71(struct sigmatdproof_closure_71_s * closure, uint8_t bvar);

sigmatopdown__ent_adt_t m_sigmatdproof_closure_71(struct sigmatdproof_closure_71_s * closure, uint8_t bvar);

extern sigmatopdown__ent_adt_t h_sigmatdproof_closure_71(uint8_t ivar_31);

extern sigmatdproof_closure_71_t new_sigmatdproof_closure_71(void);

extern void release_sigmatdproof_closure_71(sigmatdproof_funtype_70_t closure);

extern sigmatdproof_closure_71_t copy_sigmatdproof_closure_71(sigmatdproof_closure_71_t x);


//buildproof

struct sigmatdproof_funtype_72_s;
        typedef struct sigmatdproof_funtype_72_s * sigmatdproof_funtype_72_t;

struct sigmatdproof_funtype_72_ftbl_s {sigmatdproof_funtype_70_t (* fptr)(struct sigmatdproof_funtype_72_s *, uint32_t);
        sigmatdproof_funtype_70_t (* mptr)(struct sigmatdproof_funtype_72_s *, uint32_t);
        void (* rptr)(struct sigmatdproof_funtype_72_s *);
        struct sigmatdproof_funtype_72_s * (* cptr)(struct sigmatdproof_funtype_72_s *);};
typedef struct sigmatdproof_funtype_72_ftbl_s * sigmatdproof_funtype_72_ftbl_t;

struct sigmatdproof_funtype_72_hashentry_s {uint32_t keyhash; uint32_t key; sigmatdproof_funtype_70_t value;}; 
typedef struct sigmatdproof_funtype_72_hashentry_s sigmatdproof_funtype_72_hashentry_t;

struct sigmatdproof_funtype_72_htbl_s {uint32_t size; uint32_t num_entries; sigmatdproof_funtype_72_hashentry_t * data;}; 
typedef struct sigmatdproof_funtype_72_htbl_s * sigmatdproof_funtype_72_htbl_t;

struct sigmatdproof_funtype_72_s {uint32_t count;
        sigmatdproof_funtype_72_ftbl_t ftbl;
        sigmatdproof_funtype_72_htbl_t htbl;};
typedef struct sigmatdproof_funtype_72_s * sigmatdproof_funtype_72_t;

extern void release_sigmatdproof_funtype_72(sigmatdproof_funtype_72_t x);

extern sigmatdproof_funtype_72_t copy_sigmatdproof_funtype_72(sigmatdproof_funtype_72_t x);

uint32_t lookup_sigmatdproof_funtype_72(sigmatdproof_funtype_72_htbl_t htbl, uint32_t i, uint32_t ihash);

sigmatdproof_funtype_72_t dupdate_sigmatdproof_funtype_72(sigmatdproof_funtype_72_t a, uint32_t i, sigmatdproof_funtype_70_t v);

extern sigmatdproof_funtype_72_t update_sigmatdproof_funtype_72(sigmatdproof_funtype_72_t a, uint32_t i, sigmatdproof_funtype_70_t v);

extern bool_t equal_sigmatdproof_funtype_72(sigmatdproof_funtype_72_t x, sigmatdproof_funtype_72_t y);

extern char* json_sigmatdproof_funtype_72(sigmatdproof_funtype_72_t x);




struct sigmatdproof_closure_73_s;
        typedef struct sigmatdproof_closure_73_s * sigmatdproof_closure_73_t;

struct sigmatdproof_closure_73_s {uint32_t count;
         sigmatdproof_funtype_72_ftbl_t ftbl;
         sigmatdproof_funtype_72_htbl_t htbl;
        uint32_t fvar_1;
        sigmatdproof_funtype_70_t fvar_2;};

sigmatdproof_funtype_70_t f_sigmatdproof_closure_73(struct sigmatdproof_closure_73_s * closure, uint32_t bvar);

sigmatdproof_funtype_70_t m_sigmatdproof_closure_73(struct sigmatdproof_closure_73_s * closure, uint32_t bvar);

extern sigmatdproof_funtype_70_t h_sigmatdproof_closure_73(uint32_t ivar_39, uint32_t ivar_1, sigmatdproof_funtype_70_t ivar_27);

extern sigmatdproof_closure_73_t new_sigmatdproof_closure_73(void);

extern void release_sigmatdproof_closure_73(sigmatdproof_funtype_72_t closure);

extern sigmatdproof_closure_73_t copy_sigmatdproof_closure_73(sigmatdproof_closure_73_t x);



extern bool_t r_sigmatdproof__zerop(sigmatdproof__parsetree_adt_t ivar_1);

extern bool_t r_sigmatdproof__onep(sigmatdproof__parsetree_adt_t ivar_1);

extern bool_t r_sigmatdproof__twop(sigmatdproof__parsetree_adt_t ivar_1);

extern sigmatdproof__parsetree_adt_t update_sigmatdproof__parsetree_adt_entry(sigmatdproof__parsetree_adt_t ivar_1, sigmatopdown__ent_adt_t ivar_11);

extern sigmatopdown__ent_adt_t sigmatdproof__parsetree_adt_entry(sigmatdproof__parsetree_adt_t ivar_1);

extern sigmatdproof__parsetree_adt_t update_sigmatdproof__parsetree_adt_subone(sigmatdproof__parsetree_adt_t ivar_1, sigmatdproof__parsetree_adt_t ivar_7);

extern sigmatdproof__parsetree_adt_t sigmatdproof__parsetree_adt_subone(sigmatdproof__parsetree_adt_t ivar_1);

extern sigmatdproof__two_t update_sigmatdproof__parsetree_adt_subtwo(sigmatdproof__parsetree_adt_t ivar_1, sigmatdproof__parsetree_adt_t ivar_3);

extern sigmatdproof__parsetree_adt_t sigmatdproof__parsetree_adt_subtwo(sigmatdproof__parsetree_adt_t ivar_1);

extern sigmatdproof__parsetree_adt_t sigmatdproof__zero(sigmatopdown__ent_adt_t ivar_2);

extern sigmatdproof__parsetree_adt_t sigmatdproof__one(sigmatopdown__ent_adt_t ivar_2, sigmatdproof__parsetree_adt_t ivar_3);

extern sigmatdproof__parsetree_adt_t sigmatdproof__two(sigmatopdown__ent_adt_t ivar_2, sigmatdproof__parsetree_adt_t ivar_3, sigmatdproof__parsetree_adt_t ivar_4);

extern sigmatdproof_funtype_4_t sigmatdproof__parsetree_ord(void);

extern uint8_t sigmatdproof__ord__1(sigmatdproof__parsetree_adt_t ivar_1);

extern bool_t sigmatdproof__subterm__1(sigmatdproof__parsetree_adt_t ivar_1, sigmatdproof__parsetree_adt_t ivar_2);

extern bool_t sigmatdproof__doublelessp__1(sigmatdproof__parsetree_adt_t ivar_1, sigmatdproof__parsetree_adt_t ivar_2);

extern sigmatdproof_funtype_5_t sigmatdproof__reduce_nat__1(sigmatdproof_funtype_6_t ivar_1, sigmatdproof_funtype_8_t ivar_3, sigmatdproof_funtype_10_t ivar_5);

extern sigmatdproof_funtype_5_t sigmatdproof__REDUCE_nat__1(sigmatdproof_funtype_13_t ivar_1, sigmatdproof_funtype_15_t ivar_3, sigmatdproof_funtype_17_t ivar_5);

extern sigmatdproof_funtype_19_t sigmatdproof__reduce_ordinal__1(sigmatdproof_funtype_20_t ivar_1, sigmatdproof_funtype_22_t ivar_3, sigmatdproof_funtype_24_t ivar_5);

extern sigmatdproof_funtype_19_t sigmatdproof__REDUCE_ordinal__1(sigmatdproof_funtype_26_t ivar_1, sigmatdproof_funtype_28_t ivar_3, sigmatdproof_funtype_30_t ivar_5);

extern bool_t r_sigmatdproof__qemptyp(sigmatdproof__qstack_adt_t ivar_1);

extern bool_t r_sigmatdproof__qpushp(sigmatdproof__qstack_adt_t ivar_1);

extern sigmatdproof__qpush_t update_sigmatdproof__qstack_adt_nonterm(sigmatdproof__qstack_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t sigmatdproof__qstack_adt_nonterm(sigmatdproof__qstack_adt_t ivar_1);

extern sigmatdproof__qpush_t update_sigmatdproof__qstack_adt_pos(sigmatdproof__qstack_adt_t ivar_1, uint32_t ivar_3);

extern uint32_t sigmatdproof__qstack_adt_pos(sigmatdproof__qstack_adt_t ivar_1);

extern sigmatdproof__qpush_t update_sigmatdproof__qstack_adt_qpop(sigmatdproof__qstack_adt_t ivar_1, sigmatdproof__qstack_adt_t ivar_3);

extern sigmatdproof__qstack_adt_t sigmatdproof__qstack_adt_qpop(sigmatdproof__qstack_adt_t ivar_1);

extern sigmatdproof__qstack_adt_t sigmatdproof__qempty(void);

extern sigmatdproof__qstack_adt_t sigmatdproof__qpush(uint8_t ivar_2, uint32_t ivar_3, sigmatdproof__qstack_adt_t ivar_4);

extern sigmatdproof_funtype_34_t sigmatdproof__qstack_ord(void);

extern uint8_t sigmatdproof__ord__2(sigmatdproof__qstack_adt_t ivar_1);

extern bool_t sigmatdproof__subterm__2(sigmatdproof__qstack_adt_t ivar_1, sigmatdproof__qstack_adt_t ivar_2);

extern bool_t sigmatdproof__doublelessp__2(sigmatdproof__qstack_adt_t ivar_1, sigmatdproof__qstack_adt_t ivar_2);

extern sigmatdproof_funtype_35_t sigmatdproof__reduce_nat__2(mpz_ptr_t ivar_1, sigmatdproof_funtype_37_t ivar_2);

extern sigmatdproof_funtype_35_t sigmatdproof__REDUCE_nat__2(sigmatdproof_funtype_35_t ivar_1, sigmatdproof_funtype_40_t ivar_3);

extern sigmatdproof_funtype_42_t sigmatdproof__reduce_ordinal__2(ordstruct_adt__ordstruct_adt_t ivar_1, sigmatdproof_funtype_44_t ivar_2);

extern sigmatdproof_funtype_42_t sigmatdproof__REDUCE_ordinal__2(sigmatdproof_funtype_42_t ivar_1, sigmatdproof_funtype_47_t ivar_3);

extern bool_t sigmatdproof__inqstack(uint8_t ivar_1, uint32_t ivar_2, sigmatdproof__qstack_adt_t ivar_3);

extern mpz_ptr_t sigmatdproof__stacksize(sigmatdproof__qstack_adt_t ivar_1);

extern sigmatdproof_funtype_49_t sigmatdproof__good_qstackp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatdproof_array_50_t ivar_3, sigmatdproof_array_52_t ivar_4);

extern sigmatdproof_funtype_55_t sigmatdproof__good_parsetreep(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatdproof_array_50_t ivar_3);

extern sigmatdproof_funtype_61_t sigmatdproof__buildtree(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatdproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5);

extern sigmatdproof_funtype_64_t sigmatdproof__buildloop(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatdproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5);

extern sigmatdproof_funtype_68_t sigmatdproof__buildproof(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatdproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5);
#endif