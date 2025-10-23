//Code generated using pvs2ir
#ifndef _sigmatopdown_h 
#define _sigmatopdown_h

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

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "lex2_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "arrayCount_c.h"

//cc -O3 -Wall -o sigmatopdown -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/sets_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c /Users/e21660/shankar/pvs.git/lib/lex2_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c sigmatopdown_c.c arrayCount_c.c -lgmp 
//ent

struct sigmatopdown__ent_adt_s {
         uint32_t count; 
        uint8_t sigmatopdown__ent_adt_index;};
typedef struct sigmatopdown__ent_adt_s * sigmatopdown__ent_adt_t;

extern sigmatopdown__ent_adt_t new_sigmatopdown__ent_adt(void);

extern void release_sigmatopdown__ent_adt(sigmatopdown__ent_adt_t x);

extern sigmatopdown__ent_adt_t copy_sigmatopdown__ent_adt(sigmatopdown__ent_adt_t x);

extern bool_t equal_sigmatopdown__ent_adt(sigmatopdown__ent_adt_t x, sigmatopdown__ent_adt_t y);
extern char * json_sigmatopdown__ent_adt(sigmatopdown__ent_adt_t x);

typedef struct actual_sigmatopdown__ent_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown__ent_adt_t;
void release_sigmatopdown__ent_adt_ptr(pointer_t x, type_actual_t sigmatopdown__ent_adt);

extern bool_t equal_sigmatopdown__ent_adt_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__ent_adt_t T);

extern char * json_sigmatopdown__ent_adt_ptr(pointer_t x,  actual_sigmatopdown__ent_adt_t T);

actual_sigmatopdown__ent_adt_t actual_sigmatopdown__ent_adt(void);

extern sigmatopdown__ent_adt_t update_sigmatopdown__ent_adt_sigmatopdown__ent_adt_index(sigmatopdown__ent_adt_t x, uint8_t v);


//fail

struct sigmatopdown__fail_s {
        uint32_t count; 
        uint8_t sigmatopdown__ent_adt_index;
        uint64_t dep;};
typedef struct sigmatopdown__fail_s * sigmatopdown__fail_t;

extern sigmatopdown__fail_t new_sigmatopdown__fail(void);

extern void release_sigmatopdown__fail(sigmatopdown__fail_t x);

extern sigmatopdown__fail_t copy_sigmatopdown__fail(sigmatopdown__fail_t x);

extern bool_t equal_sigmatopdown__fail(sigmatopdown__fail_t x, sigmatopdown__fail_t y);
extern char * json_sigmatopdown__fail(sigmatopdown__fail_t x);

typedef struct actual_sigmatopdown__fail_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown__fail_t;
void release_sigmatopdown__fail_ptr(pointer_t x, type_actual_t sigmatopdown__fail);

extern bool_t equal_sigmatopdown__fail_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__fail_t T);

extern char * json_sigmatopdown__fail_ptr(pointer_t x,  actual_sigmatopdown__fail_t T);

actual_sigmatopdown__fail_t actual_sigmatopdown__fail(void);

extern sigmatopdown__fail_t update_sigmatopdown__fail_sigmatopdown__ent_adt_index(sigmatopdown__fail_t x, uint8_t v);

extern sigmatopdown__fail_t update_sigmatopdown__fail_dep(sigmatopdown__fail_t x, uint64_t v);


//good

struct sigmatopdown__good_s {
        uint32_t count; 
        uint8_t sigmatopdown__ent_adt_index;
        uint64_t dep;
        uint32_t span;};
typedef struct sigmatopdown__good_s * sigmatopdown__good_t;

extern sigmatopdown__good_t new_sigmatopdown__good(void);

extern void release_sigmatopdown__good(sigmatopdown__good_t x);

extern sigmatopdown__good_t copy_sigmatopdown__good(sigmatopdown__good_t x);

extern bool_t equal_sigmatopdown__good(sigmatopdown__good_t x, sigmatopdown__good_t y);
extern char * json_sigmatopdown__good(sigmatopdown__good_t x);

typedef struct actual_sigmatopdown__good_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown__good_t;
void release_sigmatopdown__good_ptr(pointer_t x, type_actual_t sigmatopdown__good);

extern bool_t equal_sigmatopdown__good_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__good_t T);

extern char * json_sigmatopdown__good_ptr(pointer_t x,  actual_sigmatopdown__good_t T);

actual_sigmatopdown__good_t actual_sigmatopdown__good(void);

extern sigmatopdown__good_t update_sigmatopdown__good_sigmatopdown__ent_adt_index(sigmatopdown__good_t x, uint8_t v);

extern sigmatopdown__good_t update_sigmatopdown__good_dep(sigmatopdown__good_t x, uint64_t v);

extern sigmatopdown__good_t update_sigmatopdown__good_span(sigmatopdown__good_t x, uint32_t v);


//push

struct sigmatopdown__push_s {
        uint32_t count; 
        uint8_t sigmatopdown__ent_adt_index;
        uint32_t pos;
        uint8_t nt;};
typedef struct sigmatopdown__push_s * sigmatopdown__push_t;

extern sigmatopdown__push_t new_sigmatopdown__push(void);

extern void release_sigmatopdown__push(sigmatopdown__push_t x);

extern sigmatopdown__push_t copy_sigmatopdown__push(sigmatopdown__push_t x);

extern bool_t equal_sigmatopdown__push(sigmatopdown__push_t x, sigmatopdown__push_t y);
extern char * json_sigmatopdown__push(sigmatopdown__push_t x);

typedef struct actual_sigmatopdown__push_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown__push_t;
void release_sigmatopdown__push_ptr(pointer_t x, type_actual_t sigmatopdown__push);

extern bool_t equal_sigmatopdown__push_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__push_t T);

extern char * json_sigmatopdown__push_ptr(pointer_t x,  actual_sigmatopdown__push_t T);

actual_sigmatopdown__push_t actual_sigmatopdown__push(void);

extern sigmatopdown__push_t update_sigmatopdown__push_sigmatopdown__ent_adt_index(sigmatopdown__push_t x, uint8_t v);

extern sigmatopdown__push_t update_sigmatopdown__push_pos(sigmatopdown__push_t x, uint32_t v);

extern sigmatopdown__push_t update_sigmatopdown__push_nt(sigmatopdown__push_t x, uint8_t v);


//ent_ord

struct sigmatopdown_funtype_4_s;
        typedef struct sigmatopdown_funtype_4_s * sigmatopdown_funtype_4_t;

struct sigmatopdown_funtype_4_ftbl_s {uint8_t (* fptr)(struct sigmatopdown_funtype_4_s *, sigmatopdown__ent_adt_t);
        uint8_t (* mptr)(struct sigmatopdown_funtype_4_s *, sigmatopdown__ent_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_4_s *);
        struct sigmatopdown_funtype_4_s * (* cptr)(struct sigmatopdown_funtype_4_s *);};
typedef struct sigmatopdown_funtype_4_ftbl_s * sigmatopdown_funtype_4_ftbl_t;

struct sigmatopdown_funtype_4_hashentry_s {uint32_t keyhash; sigmatopdown__ent_adt_t key; uint8_t value;}; 
typedef struct sigmatopdown_funtype_4_hashentry_s sigmatopdown_funtype_4_hashentry_t;

struct sigmatopdown_funtype_4_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_4_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_4_htbl_s * sigmatopdown_funtype_4_htbl_t;

struct sigmatopdown_funtype_4_s {uint32_t count;
        sigmatopdown_funtype_4_ftbl_t ftbl;
        sigmatopdown_funtype_4_htbl_t htbl;};
typedef struct sigmatopdown_funtype_4_s * sigmatopdown_funtype_4_t;

extern void release_sigmatopdown_funtype_4(sigmatopdown_funtype_4_t x);

extern sigmatopdown_funtype_4_t copy_sigmatopdown_funtype_4(sigmatopdown_funtype_4_t x);

extern bool_t equal_sigmatopdown_funtype_4(sigmatopdown_funtype_4_t x, sigmatopdown_funtype_4_t y);

extern char* json_sigmatopdown_funtype_4(sigmatopdown_funtype_4_t x);


//reduce_nat

struct sigmatopdown_funtype_5_s;
        typedef struct sigmatopdown_funtype_5_s * sigmatopdown_funtype_5_t;

struct sigmatopdown_funtype_5_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatopdown_funtype_5_s *, sigmatopdown__ent_adt_t);
        mpz_ptr_t (* mptr)(struct sigmatopdown_funtype_5_s *, sigmatopdown__ent_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_5_s *);
        struct sigmatopdown_funtype_5_s * (* cptr)(struct sigmatopdown_funtype_5_s *);};
typedef struct sigmatopdown_funtype_5_ftbl_s * sigmatopdown_funtype_5_ftbl_t;

struct sigmatopdown_funtype_5_hashentry_s {uint32_t keyhash; sigmatopdown__ent_adt_t key; mpz_t value;}; 
typedef struct sigmatopdown_funtype_5_hashentry_s sigmatopdown_funtype_5_hashentry_t;

struct sigmatopdown_funtype_5_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_5_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_5_htbl_s * sigmatopdown_funtype_5_htbl_t;

struct sigmatopdown_funtype_5_s {uint32_t count;
        sigmatopdown_funtype_5_ftbl_t ftbl;
        sigmatopdown_funtype_5_htbl_t htbl;};
typedef struct sigmatopdown_funtype_5_s * sigmatopdown_funtype_5_t;

extern void release_sigmatopdown_funtype_5(sigmatopdown_funtype_5_t x);

extern sigmatopdown_funtype_5_t copy_sigmatopdown_funtype_5(sigmatopdown_funtype_5_t x);

extern bool_t equal_sigmatopdown_funtype_5(sigmatopdown_funtype_5_t x, sigmatopdown_funtype_5_t y);

extern char* json_sigmatopdown_funtype_5(sigmatopdown_funtype_5_t x);


//reduce_nat

struct sigmatopdown_funtype_6_s;
        typedef struct sigmatopdown_funtype_6_s * sigmatopdown_funtype_6_t;

struct sigmatopdown_funtype_6_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatopdown_funtype_6_s *, uint64_t);
        mpz_ptr_t (* mptr)(struct sigmatopdown_funtype_6_s *, uint64_t);
        void (* rptr)(struct sigmatopdown_funtype_6_s *);
        struct sigmatopdown_funtype_6_s * (* cptr)(struct sigmatopdown_funtype_6_s *);};
typedef struct sigmatopdown_funtype_6_ftbl_s * sigmatopdown_funtype_6_ftbl_t;

struct sigmatopdown_funtype_6_hashentry_s {uint32_t keyhash; uint64_t key; mpz_t value;}; 
typedef struct sigmatopdown_funtype_6_hashentry_s sigmatopdown_funtype_6_hashentry_t;

struct sigmatopdown_funtype_6_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_6_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_6_htbl_s * sigmatopdown_funtype_6_htbl_t;

struct sigmatopdown_funtype_6_s {uint32_t count;
        sigmatopdown_funtype_6_ftbl_t ftbl;
        sigmatopdown_funtype_6_htbl_t htbl;};
typedef struct sigmatopdown_funtype_6_s * sigmatopdown_funtype_6_t;

extern void release_sigmatopdown_funtype_6(sigmatopdown_funtype_6_t x);

extern sigmatopdown_funtype_6_t copy_sigmatopdown_funtype_6(sigmatopdown_funtype_6_t x);

uint32_t lookup_sigmatopdown_funtype_6(sigmatopdown_funtype_6_htbl_t htbl, uint64_t i, uint32_t ihash);

sigmatopdown_funtype_6_t dupdate_sigmatopdown_funtype_6(sigmatopdown_funtype_6_t a, uint64_t i, mpz_ptr_t v);

extern sigmatopdown_funtype_6_t update_sigmatopdown_funtype_6(sigmatopdown_funtype_6_t a, uint64_t i, mpz_ptr_t v);

extern bool_t equal_sigmatopdown_funtype_6(sigmatopdown_funtype_6_t x, sigmatopdown_funtype_6_t y);

extern char* json_sigmatopdown_funtype_6(sigmatopdown_funtype_6_t x);


//reduce_nat

struct sigmatopdown_record_7_s {
        uint32_t count; 
        uint64_t project_1;
        uint32_t project_2;};
typedef struct sigmatopdown_record_7_s * sigmatopdown_record_7_t;

extern sigmatopdown_record_7_t new_sigmatopdown_record_7(void);

extern void release_sigmatopdown_record_7(sigmatopdown_record_7_t x);

extern sigmatopdown_record_7_t copy_sigmatopdown_record_7(sigmatopdown_record_7_t x);

extern bool_t equal_sigmatopdown_record_7(sigmatopdown_record_7_t x, sigmatopdown_record_7_t y);
extern char * json_sigmatopdown_record_7(sigmatopdown_record_7_t x);

typedef struct actual_sigmatopdown_record_7_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_record_7_t;
void release_sigmatopdown_record_7_ptr(pointer_t x, type_actual_t sigmatopdown_record_7);

extern bool_t equal_sigmatopdown_record_7_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_7_t T);

extern char * json_sigmatopdown_record_7_ptr(pointer_t x,  actual_sigmatopdown_record_7_t T);

actual_sigmatopdown_record_7_t actual_sigmatopdown_record_7(void);

extern sigmatopdown_record_7_t update_sigmatopdown_record_7_project_1(sigmatopdown_record_7_t x, uint64_t v);

extern sigmatopdown_record_7_t update_sigmatopdown_record_7_project_2(sigmatopdown_record_7_t x, uint32_t v);


//reduce_nat

struct sigmatopdown_funtype_8_s;
        typedef struct sigmatopdown_funtype_8_s * sigmatopdown_funtype_8_t;

struct sigmatopdown_funtype_8_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatopdown_funtype_8_s *, sigmatopdown_record_7_t);
        mpz_ptr_t (* mptr)(struct sigmatopdown_funtype_8_s *, uint64_t, uint32_t);
        void (* rptr)(struct sigmatopdown_funtype_8_s *);
        struct sigmatopdown_funtype_8_s * (* cptr)(struct sigmatopdown_funtype_8_s *);};
typedef struct sigmatopdown_funtype_8_ftbl_s * sigmatopdown_funtype_8_ftbl_t;

struct sigmatopdown_funtype_8_hashentry_s {uint32_t keyhash; sigmatopdown_record_7_t key; mpz_t value;}; 
typedef struct sigmatopdown_funtype_8_hashentry_s sigmatopdown_funtype_8_hashentry_t;

struct sigmatopdown_funtype_8_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_8_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_8_htbl_s * sigmatopdown_funtype_8_htbl_t;

struct sigmatopdown_funtype_8_s {uint32_t count;
        sigmatopdown_funtype_8_ftbl_t ftbl;
        sigmatopdown_funtype_8_htbl_t htbl;};
typedef struct sigmatopdown_funtype_8_s * sigmatopdown_funtype_8_t;

extern void release_sigmatopdown_funtype_8(sigmatopdown_funtype_8_t x);

extern sigmatopdown_funtype_8_t copy_sigmatopdown_funtype_8(sigmatopdown_funtype_8_t x);

extern bool_t equal_sigmatopdown_funtype_8(sigmatopdown_funtype_8_t x, sigmatopdown_funtype_8_t y);

extern char* json_sigmatopdown_funtype_8(sigmatopdown_funtype_8_t x);


//reduce_nat

struct sigmatopdown_record_9_s {
        uint32_t count; 
        uint32_t project_1;
        uint8_t project_2;};
typedef struct sigmatopdown_record_9_s * sigmatopdown_record_9_t;

extern sigmatopdown_record_9_t new_sigmatopdown_record_9(void);

extern void release_sigmatopdown_record_9(sigmatopdown_record_9_t x);

extern sigmatopdown_record_9_t copy_sigmatopdown_record_9(sigmatopdown_record_9_t x);

extern bool_t equal_sigmatopdown_record_9(sigmatopdown_record_9_t x, sigmatopdown_record_9_t y);
extern char * json_sigmatopdown_record_9(sigmatopdown_record_9_t x);

typedef struct actual_sigmatopdown_record_9_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_record_9_t;
void release_sigmatopdown_record_9_ptr(pointer_t x, type_actual_t sigmatopdown_record_9);

extern bool_t equal_sigmatopdown_record_9_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_9_t T);

extern char * json_sigmatopdown_record_9_ptr(pointer_t x,  actual_sigmatopdown_record_9_t T);

actual_sigmatopdown_record_9_t actual_sigmatopdown_record_9(void);

extern sigmatopdown_record_9_t update_sigmatopdown_record_9_project_1(sigmatopdown_record_9_t x, uint32_t v);

extern sigmatopdown_record_9_t update_sigmatopdown_record_9_project_2(sigmatopdown_record_9_t x, uint8_t v);


//reduce_nat

struct sigmatopdown_funtype_10_s;
        typedef struct sigmatopdown_funtype_10_s * sigmatopdown_funtype_10_t;

struct sigmatopdown_funtype_10_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatopdown_funtype_10_s *, sigmatopdown_record_9_t);
        mpz_ptr_t (* mptr)(struct sigmatopdown_funtype_10_s *, uint32_t, uint8_t);
        void (* rptr)(struct sigmatopdown_funtype_10_s *);
        struct sigmatopdown_funtype_10_s * (* cptr)(struct sigmatopdown_funtype_10_s *);};
typedef struct sigmatopdown_funtype_10_ftbl_s * sigmatopdown_funtype_10_ftbl_t;

struct sigmatopdown_funtype_10_hashentry_s {uint32_t keyhash; sigmatopdown_record_9_t key; mpz_t value;}; 
typedef struct sigmatopdown_funtype_10_hashentry_s sigmatopdown_funtype_10_hashentry_t;

struct sigmatopdown_funtype_10_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_10_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_10_htbl_s * sigmatopdown_funtype_10_htbl_t;

struct sigmatopdown_funtype_10_s {uint32_t count;
        sigmatopdown_funtype_10_ftbl_t ftbl;
        sigmatopdown_funtype_10_htbl_t htbl;};
typedef struct sigmatopdown_funtype_10_s * sigmatopdown_funtype_10_t;

extern void release_sigmatopdown_funtype_10(sigmatopdown_funtype_10_t x);

extern sigmatopdown_funtype_10_t copy_sigmatopdown_funtype_10(sigmatopdown_funtype_10_t x);

extern bool_t equal_sigmatopdown_funtype_10(sigmatopdown_funtype_10_t x, sigmatopdown_funtype_10_t y);

extern char* json_sigmatopdown_funtype_10(sigmatopdown_funtype_10_t x);




struct sigmatopdown_closure_11_s;
        typedef struct sigmatopdown_closure_11_s * sigmatopdown_closure_11_t;

struct sigmatopdown_closure_11_s {uint32_t count;
         sigmatopdown_funtype_5_ftbl_t ftbl;
         sigmatopdown_funtype_5_htbl_t htbl;
        sigmatopdown_funtype_8_t fvar_1;
        sigmatopdown_funtype_10_t fvar_2;
        mpz_t fvar_3;
        mpz_t fvar_4;
        sigmatopdown_funtype_6_t fvar_5;};

mpz_ptr_t f_sigmatopdown_closure_11(struct sigmatopdown_closure_11_s * closure, sigmatopdown__ent_adt_t bvar);

mpz_ptr_t m_sigmatopdown_closure_11(struct sigmatopdown_closure_11_s * closure, sigmatopdown__ent_adt_t bvar);

extern mpz_ptr_t h_sigmatopdown_closure_11(sigmatopdown__ent_adt_t ivar_10, sigmatopdown_funtype_8_t ivar_5, sigmatopdown_funtype_10_t ivar_7, mpz_ptr_t ivar_4, mpz_ptr_t ivar_3, sigmatopdown_funtype_6_t ivar_1);

extern sigmatopdown_closure_11_t new_sigmatopdown_closure_11(void);

extern void release_sigmatopdown_closure_11(sigmatopdown_funtype_5_t closure);

extern sigmatopdown_closure_11_t copy_sigmatopdown_closure_11(sigmatopdown_closure_11_t x);


//REDUCE_nat

struct sigmatopdown_record_12_s {
        uint32_t count; 
        uint64_t project_1;
        sigmatopdown__ent_adt_t project_2;};
typedef struct sigmatopdown_record_12_s * sigmatopdown_record_12_t;

extern sigmatopdown_record_12_t new_sigmatopdown_record_12(void);

extern void release_sigmatopdown_record_12(sigmatopdown_record_12_t x);

extern sigmatopdown_record_12_t copy_sigmatopdown_record_12(sigmatopdown_record_12_t x);

extern bool_t equal_sigmatopdown_record_12(sigmatopdown_record_12_t x, sigmatopdown_record_12_t y);
extern char * json_sigmatopdown_record_12(sigmatopdown_record_12_t x);

typedef struct actual_sigmatopdown_record_12_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_record_12_t;
void release_sigmatopdown_record_12_ptr(pointer_t x, type_actual_t sigmatopdown_record_12);

extern bool_t equal_sigmatopdown_record_12_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_12_t T);

extern char * json_sigmatopdown_record_12_ptr(pointer_t x,  actual_sigmatopdown_record_12_t T);

actual_sigmatopdown_record_12_t actual_sigmatopdown_record_12(void);

extern sigmatopdown_record_12_t update_sigmatopdown_record_12_project_1(sigmatopdown_record_12_t x, uint64_t v);

extern sigmatopdown_record_12_t update_sigmatopdown_record_12_project_2(sigmatopdown_record_12_t x, sigmatopdown__ent_adt_t v);


//REDUCE_nat

struct sigmatopdown_funtype_13_s;
        typedef struct sigmatopdown_funtype_13_s * sigmatopdown_funtype_13_t;

struct sigmatopdown_funtype_13_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatopdown_funtype_13_s *, sigmatopdown_record_12_t);
        mpz_ptr_t (* mptr)(struct sigmatopdown_funtype_13_s *, uint64_t, sigmatopdown__ent_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_13_s *);
        struct sigmatopdown_funtype_13_s * (* cptr)(struct sigmatopdown_funtype_13_s *);};
typedef struct sigmatopdown_funtype_13_ftbl_s * sigmatopdown_funtype_13_ftbl_t;

struct sigmatopdown_funtype_13_hashentry_s {uint32_t keyhash; sigmatopdown_record_12_t key; mpz_t value;}; 
typedef struct sigmatopdown_funtype_13_hashentry_s sigmatopdown_funtype_13_hashentry_t;

struct sigmatopdown_funtype_13_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_13_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_13_htbl_s * sigmatopdown_funtype_13_htbl_t;

struct sigmatopdown_funtype_13_s {uint32_t count;
        sigmatopdown_funtype_13_ftbl_t ftbl;
        sigmatopdown_funtype_13_htbl_t htbl;};
typedef struct sigmatopdown_funtype_13_s * sigmatopdown_funtype_13_t;

extern void release_sigmatopdown_funtype_13(sigmatopdown_funtype_13_t x);

extern sigmatopdown_funtype_13_t copy_sigmatopdown_funtype_13(sigmatopdown_funtype_13_t x);

extern bool_t equal_sigmatopdown_funtype_13(sigmatopdown_funtype_13_t x, sigmatopdown_funtype_13_t y);

extern char* json_sigmatopdown_funtype_13(sigmatopdown_funtype_13_t x);


//REDUCE_nat

struct sigmatopdown_record_14_s {
        uint32_t count; 
        uint64_t project_1;
        uint32_t project_2;
        sigmatopdown__ent_adt_t project_3;};
typedef struct sigmatopdown_record_14_s * sigmatopdown_record_14_t;

extern sigmatopdown_record_14_t new_sigmatopdown_record_14(void);

extern void release_sigmatopdown_record_14(sigmatopdown_record_14_t x);

extern sigmatopdown_record_14_t copy_sigmatopdown_record_14(sigmatopdown_record_14_t x);

extern bool_t equal_sigmatopdown_record_14(sigmatopdown_record_14_t x, sigmatopdown_record_14_t y);
extern char * json_sigmatopdown_record_14(sigmatopdown_record_14_t x);

typedef struct actual_sigmatopdown_record_14_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_record_14_t;
void release_sigmatopdown_record_14_ptr(pointer_t x, type_actual_t sigmatopdown_record_14);

extern bool_t equal_sigmatopdown_record_14_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_14_t T);

extern char * json_sigmatopdown_record_14_ptr(pointer_t x,  actual_sigmatopdown_record_14_t T);

actual_sigmatopdown_record_14_t actual_sigmatopdown_record_14(void);

extern sigmatopdown_record_14_t update_sigmatopdown_record_14_project_1(sigmatopdown_record_14_t x, uint64_t v);

extern sigmatopdown_record_14_t update_sigmatopdown_record_14_project_2(sigmatopdown_record_14_t x, uint32_t v);

extern sigmatopdown_record_14_t update_sigmatopdown_record_14_project_3(sigmatopdown_record_14_t x, sigmatopdown__ent_adt_t v);


//REDUCE_nat

struct sigmatopdown_funtype_15_s;
        typedef struct sigmatopdown_funtype_15_s * sigmatopdown_funtype_15_t;

struct sigmatopdown_funtype_15_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatopdown_funtype_15_s *, sigmatopdown_record_14_t);
        mpz_ptr_t (* mptr)(struct sigmatopdown_funtype_15_s *, uint64_t, uint32_t, sigmatopdown__ent_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_15_s *);
        struct sigmatopdown_funtype_15_s * (* cptr)(struct sigmatopdown_funtype_15_s *);};
typedef struct sigmatopdown_funtype_15_ftbl_s * sigmatopdown_funtype_15_ftbl_t;

struct sigmatopdown_funtype_15_hashentry_s {uint32_t keyhash; sigmatopdown_record_14_t key; mpz_t value;}; 
typedef struct sigmatopdown_funtype_15_hashentry_s sigmatopdown_funtype_15_hashentry_t;

struct sigmatopdown_funtype_15_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_15_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_15_htbl_s * sigmatopdown_funtype_15_htbl_t;

struct sigmatopdown_funtype_15_s {uint32_t count;
        sigmatopdown_funtype_15_ftbl_t ftbl;
        sigmatopdown_funtype_15_htbl_t htbl;};
typedef struct sigmatopdown_funtype_15_s * sigmatopdown_funtype_15_t;

extern void release_sigmatopdown_funtype_15(sigmatopdown_funtype_15_t x);

extern sigmatopdown_funtype_15_t copy_sigmatopdown_funtype_15(sigmatopdown_funtype_15_t x);

extern bool_t equal_sigmatopdown_funtype_15(sigmatopdown_funtype_15_t x, sigmatopdown_funtype_15_t y);

extern char* json_sigmatopdown_funtype_15(sigmatopdown_funtype_15_t x);


//REDUCE_nat

struct sigmatopdown_record_16_s {
        uint32_t count; 
        uint32_t project_1;
        uint8_t project_2;
        sigmatopdown__ent_adt_t project_3;};
typedef struct sigmatopdown_record_16_s * sigmatopdown_record_16_t;

extern sigmatopdown_record_16_t new_sigmatopdown_record_16(void);

extern void release_sigmatopdown_record_16(sigmatopdown_record_16_t x);

extern sigmatopdown_record_16_t copy_sigmatopdown_record_16(sigmatopdown_record_16_t x);

extern bool_t equal_sigmatopdown_record_16(sigmatopdown_record_16_t x, sigmatopdown_record_16_t y);
extern char * json_sigmatopdown_record_16(sigmatopdown_record_16_t x);

typedef struct actual_sigmatopdown_record_16_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_record_16_t;
void release_sigmatopdown_record_16_ptr(pointer_t x, type_actual_t sigmatopdown_record_16);

extern bool_t equal_sigmatopdown_record_16_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_16_t T);

extern char * json_sigmatopdown_record_16_ptr(pointer_t x,  actual_sigmatopdown_record_16_t T);

actual_sigmatopdown_record_16_t actual_sigmatopdown_record_16(void);

extern sigmatopdown_record_16_t update_sigmatopdown_record_16_project_1(sigmatopdown_record_16_t x, uint32_t v);

extern sigmatopdown_record_16_t update_sigmatopdown_record_16_project_2(sigmatopdown_record_16_t x, uint8_t v);

extern sigmatopdown_record_16_t update_sigmatopdown_record_16_project_3(sigmatopdown_record_16_t x, sigmatopdown__ent_adt_t v);


//REDUCE_nat

struct sigmatopdown_funtype_17_s;
        typedef struct sigmatopdown_funtype_17_s * sigmatopdown_funtype_17_t;

struct sigmatopdown_funtype_17_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatopdown_funtype_17_s *, sigmatopdown_record_16_t);
        mpz_ptr_t (* mptr)(struct sigmatopdown_funtype_17_s *, uint32_t, uint8_t, sigmatopdown__ent_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_17_s *);
        struct sigmatopdown_funtype_17_s * (* cptr)(struct sigmatopdown_funtype_17_s *);};
typedef struct sigmatopdown_funtype_17_ftbl_s * sigmatopdown_funtype_17_ftbl_t;

struct sigmatopdown_funtype_17_hashentry_s {uint32_t keyhash; sigmatopdown_record_16_t key; mpz_t value;}; 
typedef struct sigmatopdown_funtype_17_hashentry_s sigmatopdown_funtype_17_hashentry_t;

struct sigmatopdown_funtype_17_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_17_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_17_htbl_s * sigmatopdown_funtype_17_htbl_t;

struct sigmatopdown_funtype_17_s {uint32_t count;
        sigmatopdown_funtype_17_ftbl_t ftbl;
        sigmatopdown_funtype_17_htbl_t htbl;};
typedef struct sigmatopdown_funtype_17_s * sigmatopdown_funtype_17_t;

extern void release_sigmatopdown_funtype_17(sigmatopdown_funtype_17_t x);

extern sigmatopdown_funtype_17_t copy_sigmatopdown_funtype_17(sigmatopdown_funtype_17_t x);

extern bool_t equal_sigmatopdown_funtype_17(sigmatopdown_funtype_17_t x, sigmatopdown_funtype_17_t y);

extern char* json_sigmatopdown_funtype_17(sigmatopdown_funtype_17_t x);




struct sigmatopdown_closure_18_s;
        typedef struct sigmatopdown_closure_18_s * sigmatopdown_closure_18_t;

struct sigmatopdown_closure_18_s {uint32_t count;
         sigmatopdown_funtype_5_ftbl_t ftbl;
         sigmatopdown_funtype_5_htbl_t htbl;
        sigmatopdown_funtype_15_t fvar_1;
        sigmatopdown_funtype_17_t fvar_2;
        sigmatopdown_funtype_5_t fvar_3;
        sigmatopdown_funtype_5_t fvar_4;
        sigmatopdown_funtype_13_t fvar_5;};

mpz_ptr_t f_sigmatopdown_closure_18(struct sigmatopdown_closure_18_s * closure, sigmatopdown__ent_adt_t bvar);

mpz_ptr_t m_sigmatopdown_closure_18(struct sigmatopdown_closure_18_s * closure, sigmatopdown__ent_adt_t bvar);

extern mpz_ptr_t h_sigmatopdown_closure_18(sigmatopdown__ent_adt_t ivar_12, sigmatopdown_funtype_15_t ivar_7, sigmatopdown_funtype_17_t ivar_9, sigmatopdown_funtype_5_t ivar_5, sigmatopdown_funtype_5_t ivar_3, sigmatopdown_funtype_13_t ivar_1);

extern sigmatopdown_closure_18_t new_sigmatopdown_closure_18(void);

extern void release_sigmatopdown_closure_18(sigmatopdown_funtype_5_t closure);

extern sigmatopdown_closure_18_t copy_sigmatopdown_closure_18(sigmatopdown_closure_18_t x);


//reduce_ordinal

struct sigmatopdown_funtype_19_s;
        typedef struct sigmatopdown_funtype_19_s * sigmatopdown_funtype_19_t;

struct sigmatopdown_funtype_19_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatopdown_funtype_19_s *, sigmatopdown__ent_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatopdown_funtype_19_s *, sigmatopdown__ent_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_19_s *);
        struct sigmatopdown_funtype_19_s * (* cptr)(struct sigmatopdown_funtype_19_s *);};
typedef struct sigmatopdown_funtype_19_ftbl_s * sigmatopdown_funtype_19_ftbl_t;

struct sigmatopdown_funtype_19_hashentry_s {uint32_t keyhash; sigmatopdown__ent_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatopdown_funtype_19_hashentry_s sigmatopdown_funtype_19_hashentry_t;

struct sigmatopdown_funtype_19_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_19_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_19_htbl_s * sigmatopdown_funtype_19_htbl_t;

struct sigmatopdown_funtype_19_s {uint32_t count;
        sigmatopdown_funtype_19_ftbl_t ftbl;
        sigmatopdown_funtype_19_htbl_t htbl;};
typedef struct sigmatopdown_funtype_19_s * sigmatopdown_funtype_19_t;

extern void release_sigmatopdown_funtype_19(sigmatopdown_funtype_19_t x);

extern sigmatopdown_funtype_19_t copy_sigmatopdown_funtype_19(sigmatopdown_funtype_19_t x);

extern bool_t equal_sigmatopdown_funtype_19(sigmatopdown_funtype_19_t x, sigmatopdown_funtype_19_t y);

extern char* json_sigmatopdown_funtype_19(sigmatopdown_funtype_19_t x);


//reduce_ordinal

struct sigmatopdown_funtype_20_s;
        typedef struct sigmatopdown_funtype_20_s * sigmatopdown_funtype_20_t;

struct sigmatopdown_funtype_20_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatopdown_funtype_20_s *, uint64_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatopdown_funtype_20_s *, uint64_t);
        void (* rptr)(struct sigmatopdown_funtype_20_s *);
        struct sigmatopdown_funtype_20_s * (* cptr)(struct sigmatopdown_funtype_20_s *);};
typedef struct sigmatopdown_funtype_20_ftbl_s * sigmatopdown_funtype_20_ftbl_t;

struct sigmatopdown_funtype_20_hashentry_s {uint32_t keyhash; uint64_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatopdown_funtype_20_hashentry_s sigmatopdown_funtype_20_hashentry_t;

struct sigmatopdown_funtype_20_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_20_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_20_htbl_s * sigmatopdown_funtype_20_htbl_t;

struct sigmatopdown_funtype_20_s {uint32_t count;
        sigmatopdown_funtype_20_ftbl_t ftbl;
        sigmatopdown_funtype_20_htbl_t htbl;};
typedef struct sigmatopdown_funtype_20_s * sigmatopdown_funtype_20_t;

extern void release_sigmatopdown_funtype_20(sigmatopdown_funtype_20_t x);

extern sigmatopdown_funtype_20_t copy_sigmatopdown_funtype_20(sigmatopdown_funtype_20_t x);

uint32_t lookup_sigmatopdown_funtype_20(sigmatopdown_funtype_20_htbl_t htbl, uint64_t i, uint32_t ihash);

sigmatopdown_funtype_20_t dupdate_sigmatopdown_funtype_20(sigmatopdown_funtype_20_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v);

extern sigmatopdown_funtype_20_t update_sigmatopdown_funtype_20(sigmatopdown_funtype_20_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v);

extern bool_t equal_sigmatopdown_funtype_20(sigmatopdown_funtype_20_t x, sigmatopdown_funtype_20_t y);

extern char* json_sigmatopdown_funtype_20(sigmatopdown_funtype_20_t x);


//reduce_ordinal

struct sigmatopdown_funtype_21_s;
        typedef struct sigmatopdown_funtype_21_s * sigmatopdown_funtype_21_t;

struct sigmatopdown_funtype_21_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatopdown_funtype_21_s *, sigmatopdown_record_7_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatopdown_funtype_21_s *, uint64_t, uint32_t);
        void (* rptr)(struct sigmatopdown_funtype_21_s *);
        struct sigmatopdown_funtype_21_s * (* cptr)(struct sigmatopdown_funtype_21_s *);};
typedef struct sigmatopdown_funtype_21_ftbl_s * sigmatopdown_funtype_21_ftbl_t;

struct sigmatopdown_funtype_21_hashentry_s {uint32_t keyhash; sigmatopdown_record_7_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatopdown_funtype_21_hashentry_s sigmatopdown_funtype_21_hashentry_t;

struct sigmatopdown_funtype_21_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_21_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_21_htbl_s * sigmatopdown_funtype_21_htbl_t;

struct sigmatopdown_funtype_21_s {uint32_t count;
        sigmatopdown_funtype_21_ftbl_t ftbl;
        sigmatopdown_funtype_21_htbl_t htbl;};
typedef struct sigmatopdown_funtype_21_s * sigmatopdown_funtype_21_t;

extern void release_sigmatopdown_funtype_21(sigmatopdown_funtype_21_t x);

extern sigmatopdown_funtype_21_t copy_sigmatopdown_funtype_21(sigmatopdown_funtype_21_t x);

extern bool_t equal_sigmatopdown_funtype_21(sigmatopdown_funtype_21_t x, sigmatopdown_funtype_21_t y);

extern char* json_sigmatopdown_funtype_21(sigmatopdown_funtype_21_t x);


//reduce_ordinal

struct sigmatopdown_funtype_22_s;
        typedef struct sigmatopdown_funtype_22_s * sigmatopdown_funtype_22_t;

struct sigmatopdown_funtype_22_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatopdown_funtype_22_s *, sigmatopdown_record_9_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatopdown_funtype_22_s *, uint32_t, uint8_t);
        void (* rptr)(struct sigmatopdown_funtype_22_s *);
        struct sigmatopdown_funtype_22_s * (* cptr)(struct sigmatopdown_funtype_22_s *);};
typedef struct sigmatopdown_funtype_22_ftbl_s * sigmatopdown_funtype_22_ftbl_t;

struct sigmatopdown_funtype_22_hashentry_s {uint32_t keyhash; sigmatopdown_record_9_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatopdown_funtype_22_hashentry_s sigmatopdown_funtype_22_hashentry_t;

struct sigmatopdown_funtype_22_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_22_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_22_htbl_s * sigmatopdown_funtype_22_htbl_t;

struct sigmatopdown_funtype_22_s {uint32_t count;
        sigmatopdown_funtype_22_ftbl_t ftbl;
        sigmatopdown_funtype_22_htbl_t htbl;};
typedef struct sigmatopdown_funtype_22_s * sigmatopdown_funtype_22_t;

extern void release_sigmatopdown_funtype_22(sigmatopdown_funtype_22_t x);

extern sigmatopdown_funtype_22_t copy_sigmatopdown_funtype_22(sigmatopdown_funtype_22_t x);

extern bool_t equal_sigmatopdown_funtype_22(sigmatopdown_funtype_22_t x, sigmatopdown_funtype_22_t y);

extern char* json_sigmatopdown_funtype_22(sigmatopdown_funtype_22_t x);




struct sigmatopdown_closure_23_s;
        typedef struct sigmatopdown_closure_23_s * sigmatopdown_closure_23_t;

struct sigmatopdown_closure_23_s {uint32_t count;
         sigmatopdown_funtype_19_ftbl_t ftbl;
         sigmatopdown_funtype_19_htbl_t htbl;
        sigmatopdown_funtype_21_t fvar_1;
        sigmatopdown_funtype_22_t fvar_2;
        ordstruct_adt__ordstruct_adt_t fvar_3;
        ordstruct_adt__ordstruct_adt_t fvar_4;
        sigmatopdown_funtype_20_t fvar_5;};

ordstruct_adt__ordstruct_adt_t f_sigmatopdown_closure_23(struct sigmatopdown_closure_23_s * closure, sigmatopdown__ent_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_sigmatopdown_closure_23(struct sigmatopdown_closure_23_s * closure, sigmatopdown__ent_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_sigmatopdown_closure_23(sigmatopdown__ent_adt_t ivar_10, sigmatopdown_funtype_21_t ivar_5, sigmatopdown_funtype_22_t ivar_7, ordstruct_adt__ordstruct_adt_t ivar_4, ordstruct_adt__ordstruct_adt_t ivar_3, sigmatopdown_funtype_20_t ivar_1);

extern sigmatopdown_closure_23_t new_sigmatopdown_closure_23(void);

extern void release_sigmatopdown_closure_23(sigmatopdown_funtype_19_t closure);

extern sigmatopdown_closure_23_t copy_sigmatopdown_closure_23(sigmatopdown_closure_23_t x);


//REDUCE_ordinal

struct sigmatopdown_funtype_24_s;
        typedef struct sigmatopdown_funtype_24_s * sigmatopdown_funtype_24_t;

struct sigmatopdown_funtype_24_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatopdown_funtype_24_s *, sigmatopdown_record_12_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatopdown_funtype_24_s *, uint64_t, sigmatopdown__ent_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_24_s *);
        struct sigmatopdown_funtype_24_s * (* cptr)(struct sigmatopdown_funtype_24_s *);};
typedef struct sigmatopdown_funtype_24_ftbl_s * sigmatopdown_funtype_24_ftbl_t;

struct sigmatopdown_funtype_24_hashentry_s {uint32_t keyhash; sigmatopdown_record_12_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatopdown_funtype_24_hashentry_s sigmatopdown_funtype_24_hashentry_t;

struct sigmatopdown_funtype_24_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_24_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_24_htbl_s * sigmatopdown_funtype_24_htbl_t;

struct sigmatopdown_funtype_24_s {uint32_t count;
        sigmatopdown_funtype_24_ftbl_t ftbl;
        sigmatopdown_funtype_24_htbl_t htbl;};
typedef struct sigmatopdown_funtype_24_s * sigmatopdown_funtype_24_t;

extern void release_sigmatopdown_funtype_24(sigmatopdown_funtype_24_t x);

extern sigmatopdown_funtype_24_t copy_sigmatopdown_funtype_24(sigmatopdown_funtype_24_t x);

extern bool_t equal_sigmatopdown_funtype_24(sigmatopdown_funtype_24_t x, sigmatopdown_funtype_24_t y);

extern char* json_sigmatopdown_funtype_24(sigmatopdown_funtype_24_t x);


//REDUCE_ordinal

struct sigmatopdown_funtype_25_s;
        typedef struct sigmatopdown_funtype_25_s * sigmatopdown_funtype_25_t;

struct sigmatopdown_funtype_25_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatopdown_funtype_25_s *, sigmatopdown_record_14_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatopdown_funtype_25_s *, uint64_t, uint32_t, sigmatopdown__ent_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_25_s *);
        struct sigmatopdown_funtype_25_s * (* cptr)(struct sigmatopdown_funtype_25_s *);};
typedef struct sigmatopdown_funtype_25_ftbl_s * sigmatopdown_funtype_25_ftbl_t;

struct sigmatopdown_funtype_25_hashentry_s {uint32_t keyhash; sigmatopdown_record_14_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatopdown_funtype_25_hashentry_s sigmatopdown_funtype_25_hashentry_t;

struct sigmatopdown_funtype_25_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_25_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_25_htbl_s * sigmatopdown_funtype_25_htbl_t;

struct sigmatopdown_funtype_25_s {uint32_t count;
        sigmatopdown_funtype_25_ftbl_t ftbl;
        sigmatopdown_funtype_25_htbl_t htbl;};
typedef struct sigmatopdown_funtype_25_s * sigmatopdown_funtype_25_t;

extern void release_sigmatopdown_funtype_25(sigmatopdown_funtype_25_t x);

extern sigmatopdown_funtype_25_t copy_sigmatopdown_funtype_25(sigmatopdown_funtype_25_t x);

extern bool_t equal_sigmatopdown_funtype_25(sigmatopdown_funtype_25_t x, sigmatopdown_funtype_25_t y);

extern char* json_sigmatopdown_funtype_25(sigmatopdown_funtype_25_t x);


//REDUCE_ordinal

struct sigmatopdown_funtype_26_s;
        typedef struct sigmatopdown_funtype_26_s * sigmatopdown_funtype_26_t;

struct sigmatopdown_funtype_26_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatopdown_funtype_26_s *, sigmatopdown_record_16_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatopdown_funtype_26_s *, uint32_t, uint8_t, sigmatopdown__ent_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_26_s *);
        struct sigmatopdown_funtype_26_s * (* cptr)(struct sigmatopdown_funtype_26_s *);};
typedef struct sigmatopdown_funtype_26_ftbl_s * sigmatopdown_funtype_26_ftbl_t;

struct sigmatopdown_funtype_26_hashentry_s {uint32_t keyhash; sigmatopdown_record_16_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatopdown_funtype_26_hashentry_s sigmatopdown_funtype_26_hashentry_t;

struct sigmatopdown_funtype_26_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_26_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_26_htbl_s * sigmatopdown_funtype_26_htbl_t;

struct sigmatopdown_funtype_26_s {uint32_t count;
        sigmatopdown_funtype_26_ftbl_t ftbl;
        sigmatopdown_funtype_26_htbl_t htbl;};
typedef struct sigmatopdown_funtype_26_s * sigmatopdown_funtype_26_t;

extern void release_sigmatopdown_funtype_26(sigmatopdown_funtype_26_t x);

extern sigmatopdown_funtype_26_t copy_sigmatopdown_funtype_26(sigmatopdown_funtype_26_t x);

extern bool_t equal_sigmatopdown_funtype_26(sigmatopdown_funtype_26_t x, sigmatopdown_funtype_26_t y);

extern char* json_sigmatopdown_funtype_26(sigmatopdown_funtype_26_t x);




struct sigmatopdown_closure_27_s;
        typedef struct sigmatopdown_closure_27_s * sigmatopdown_closure_27_t;

struct sigmatopdown_closure_27_s {uint32_t count;
         sigmatopdown_funtype_19_ftbl_t ftbl;
         sigmatopdown_funtype_19_htbl_t htbl;
        sigmatopdown_funtype_25_t fvar_1;
        sigmatopdown_funtype_26_t fvar_2;
        sigmatopdown_funtype_19_t fvar_3;
        sigmatopdown_funtype_19_t fvar_4;
        sigmatopdown_funtype_24_t fvar_5;};

ordstruct_adt__ordstruct_adt_t f_sigmatopdown_closure_27(struct sigmatopdown_closure_27_s * closure, sigmatopdown__ent_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_sigmatopdown_closure_27(struct sigmatopdown_closure_27_s * closure, sigmatopdown__ent_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_sigmatopdown_closure_27(sigmatopdown__ent_adt_t ivar_12, sigmatopdown_funtype_25_t ivar_7, sigmatopdown_funtype_26_t ivar_9, sigmatopdown_funtype_19_t ivar_5, sigmatopdown_funtype_19_t ivar_3, sigmatopdown_funtype_24_t ivar_1);

extern sigmatopdown_closure_27_t new_sigmatopdown_closure_27(void);

extern void release_sigmatopdown_closure_27(sigmatopdown_funtype_19_t closure);

extern sigmatopdown_closure_27_t copy_sigmatopdown_closure_27(sigmatopdown_closure_27_t x);


//peg

struct sigmatopdown__peg_adt_s {
         uint32_t count; 
        uint8_t sigmatopdown__peg_adt_index;};
typedef struct sigmatopdown__peg_adt_s * sigmatopdown__peg_adt_t;

extern sigmatopdown__peg_adt_t new_sigmatopdown__peg_adt(void);

extern void release_sigmatopdown__peg_adt(sigmatopdown__peg_adt_t x);

extern sigmatopdown__peg_adt_t copy_sigmatopdown__peg_adt(sigmatopdown__peg_adt_t x);

extern bool_t equal_sigmatopdown__peg_adt(sigmatopdown__peg_adt_t x, sigmatopdown__peg_adt_t y);
extern char * json_sigmatopdown__peg_adt(sigmatopdown__peg_adt_t x);

typedef struct actual_sigmatopdown__peg_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown__peg_adt_t;
void release_sigmatopdown__peg_adt_ptr(pointer_t x, type_actual_t sigmatopdown__peg_adt);

extern bool_t equal_sigmatopdown__peg_adt_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__peg_adt_t T);

extern char * json_sigmatopdown__peg_adt_ptr(pointer_t x,  actual_sigmatopdown__peg_adt_t T);

actual_sigmatopdown__peg_adt_t actual_sigmatopdown__peg_adt(void);

extern sigmatopdown__peg_adt_t update_sigmatopdown__peg_adt_sigmatopdown__peg_adt_index(sigmatopdown__peg_adt_t x, uint8_t v);


//p

struct sigmatopdown_funtype_29_s;
        typedef struct sigmatopdown_funtype_29_s * sigmatopdown_funtype_29_t;

struct sigmatopdown_funtype_29_ftbl_s {bool_t (* fptr)(struct sigmatopdown_funtype_29_s *, uint8_t);
        bool_t (* mptr)(struct sigmatopdown_funtype_29_s *, uint8_t);
        void (* rptr)(struct sigmatopdown_funtype_29_s *);
        struct sigmatopdown_funtype_29_s * (* cptr)(struct sigmatopdown_funtype_29_s *);};
typedef struct sigmatopdown_funtype_29_ftbl_s * sigmatopdown_funtype_29_ftbl_t;

struct sigmatopdown_funtype_29_hashentry_s {uint32_t keyhash; uint8_t key; bool_t value;}; 
typedef struct sigmatopdown_funtype_29_hashentry_s sigmatopdown_funtype_29_hashentry_t;

struct sigmatopdown_funtype_29_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_29_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_29_htbl_s * sigmatopdown_funtype_29_htbl_t;

struct sigmatopdown_funtype_29_s {uint32_t count;
        sigmatopdown_funtype_29_ftbl_t ftbl;
        sigmatopdown_funtype_29_htbl_t htbl;};
typedef struct sigmatopdown_funtype_29_s * sigmatopdown_funtype_29_t;

extern void release_sigmatopdown_funtype_29(sigmatopdown_funtype_29_t x);

extern sigmatopdown_funtype_29_t copy_sigmatopdown_funtype_29(sigmatopdown_funtype_29_t x);

uint32_t lookup_sigmatopdown_funtype_29(sigmatopdown_funtype_29_htbl_t htbl, uint8_t i, uint32_t ihash);

sigmatopdown_funtype_29_t dupdate_sigmatopdown_funtype_29(sigmatopdown_funtype_29_t a, uint8_t i, bool_t v);

extern sigmatopdown_funtype_29_t update_sigmatopdown_funtype_29(sigmatopdown_funtype_29_t a, uint8_t i, bool_t v);

extern bool_t equal_sigmatopdown_funtype_29(sigmatopdown_funtype_29_t x, sigmatopdown_funtype_29_t y);

extern char* json_sigmatopdown_funtype_29(sigmatopdown_funtype_29_t x);


//any

struct sigmatopdown__any_s {
        uint32_t count; 
        uint8_t sigmatopdown__peg_adt_index;
        sigmatopdown_funtype_29_t p;};
typedef struct sigmatopdown__any_s * sigmatopdown__any_t;

extern sigmatopdown__any_t new_sigmatopdown__any(void);

extern void release_sigmatopdown__any(sigmatopdown__any_t x);

extern sigmatopdown__any_t copy_sigmatopdown__any(sigmatopdown__any_t x);

extern bool_t equal_sigmatopdown__any(sigmatopdown__any_t x, sigmatopdown__any_t y);
extern char * json_sigmatopdown__any(sigmatopdown__any_t x);

typedef struct actual_sigmatopdown__any_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown__any_t;
void release_sigmatopdown__any_ptr(pointer_t x, type_actual_t sigmatopdown__any);

extern bool_t equal_sigmatopdown__any_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__any_t T);

extern char * json_sigmatopdown__any_ptr(pointer_t x,  actual_sigmatopdown__any_t T);

actual_sigmatopdown__any_t actual_sigmatopdown__any(void);

extern sigmatopdown__any_t update_sigmatopdown__any_sigmatopdown__peg_adt_index(sigmatopdown__any_t x, uint8_t v);

extern sigmatopdown__any_t update_sigmatopdown__any_p(sigmatopdown__any_t x, sigmatopdown_funtype_29_t v);


//terminal

struct sigmatopdown__terminal_s {
        uint32_t count; 
        uint8_t sigmatopdown__peg_adt_index;
        uint8_t a;};
typedef struct sigmatopdown__terminal_s * sigmatopdown__terminal_t;

extern sigmatopdown__terminal_t new_sigmatopdown__terminal(void);

extern void release_sigmatopdown__terminal(sigmatopdown__terminal_t x);

extern sigmatopdown__terminal_t copy_sigmatopdown__terminal(sigmatopdown__terminal_t x);

extern bool_t equal_sigmatopdown__terminal(sigmatopdown__terminal_t x, sigmatopdown__terminal_t y);
extern char * json_sigmatopdown__terminal(sigmatopdown__terminal_t x);

typedef struct actual_sigmatopdown__terminal_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown__terminal_t;
void release_sigmatopdown__terminal_ptr(pointer_t x, type_actual_t sigmatopdown__terminal);

extern bool_t equal_sigmatopdown__terminal_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__terminal_t T);

extern char * json_sigmatopdown__terminal_ptr(pointer_t x,  actual_sigmatopdown__terminal_t T);

actual_sigmatopdown__terminal_t actual_sigmatopdown__terminal(void);

extern sigmatopdown__terminal_t update_sigmatopdown__terminal_sigmatopdown__peg_adt_index(sigmatopdown__terminal_t x, uint8_t v);

extern sigmatopdown__terminal_t update_sigmatopdown__terminal_a(sigmatopdown__terminal_t x, uint8_t v);


//concat

struct sigmatopdown__concat_s {
        uint32_t count; 
        uint8_t sigmatopdown__peg_adt_index;
        uint8_t e1;
        uint8_t e2;};
typedef struct sigmatopdown__concat_s * sigmatopdown__concat_t;

extern sigmatopdown__concat_t new_sigmatopdown__concat(void);

extern void release_sigmatopdown__concat(sigmatopdown__concat_t x);

extern sigmatopdown__concat_t copy_sigmatopdown__concat(sigmatopdown__concat_t x);

extern bool_t equal_sigmatopdown__concat(sigmatopdown__concat_t x, sigmatopdown__concat_t y);
extern char * json_sigmatopdown__concat(sigmatopdown__concat_t x);

typedef struct actual_sigmatopdown__concat_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown__concat_t;
void release_sigmatopdown__concat_ptr(pointer_t x, type_actual_t sigmatopdown__concat);

extern bool_t equal_sigmatopdown__concat_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__concat_t T);

extern char * json_sigmatopdown__concat_ptr(pointer_t x,  actual_sigmatopdown__concat_t T);

actual_sigmatopdown__concat_t actual_sigmatopdown__concat(void);

extern sigmatopdown__concat_t update_sigmatopdown__concat_sigmatopdown__peg_adt_index(sigmatopdown__concat_t x, uint8_t v);

extern sigmatopdown__concat_t update_sigmatopdown__concat_e1(sigmatopdown__concat_t x, uint8_t v);

extern sigmatopdown__concat_t update_sigmatopdown__concat_e2(sigmatopdown__concat_t x, uint8_t v);


//choice

struct sigmatopdown__choice_s {
        uint32_t count; 
        uint8_t sigmatopdown__peg_adt_index;
        uint8_t e1;
        uint8_t e2;};
typedef struct sigmatopdown__choice_s * sigmatopdown__choice_t;

extern sigmatopdown__choice_t new_sigmatopdown__choice(void);

extern void release_sigmatopdown__choice(sigmatopdown__choice_t x);

extern sigmatopdown__choice_t copy_sigmatopdown__choice(sigmatopdown__choice_t x);

extern bool_t equal_sigmatopdown__choice(sigmatopdown__choice_t x, sigmatopdown__choice_t y);
extern char * json_sigmatopdown__choice(sigmatopdown__choice_t x);

typedef struct actual_sigmatopdown__choice_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown__choice_t;
void release_sigmatopdown__choice_ptr(pointer_t x, type_actual_t sigmatopdown__choice);

extern bool_t equal_sigmatopdown__choice_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__choice_t T);

extern char * json_sigmatopdown__choice_ptr(pointer_t x,  actual_sigmatopdown__choice_t T);

actual_sigmatopdown__choice_t actual_sigmatopdown__choice(void);

extern sigmatopdown__choice_t update_sigmatopdown__choice_sigmatopdown__peg_adt_index(sigmatopdown__choice_t x, uint8_t v);

extern sigmatopdown__choice_t update_sigmatopdown__choice_e1(sigmatopdown__choice_t x, uint8_t v);

extern sigmatopdown__choice_t update_sigmatopdown__choice_e2(sigmatopdown__choice_t x, uint8_t v);


//check

struct sigmatopdown__check_s {
        uint32_t count; 
        uint8_t sigmatopdown__peg_adt_index;
        uint8_t e;};
typedef struct sigmatopdown__check_s * sigmatopdown__check_t;

extern sigmatopdown__check_t new_sigmatopdown__check(void);

extern void release_sigmatopdown__check(sigmatopdown__check_t x);

extern sigmatopdown__check_t copy_sigmatopdown__check(sigmatopdown__check_t x);

extern bool_t equal_sigmatopdown__check(sigmatopdown__check_t x, sigmatopdown__check_t y);
extern char * json_sigmatopdown__check(sigmatopdown__check_t x);

typedef struct actual_sigmatopdown__check_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown__check_t;
void release_sigmatopdown__check_ptr(pointer_t x, type_actual_t sigmatopdown__check);

extern bool_t equal_sigmatopdown__check_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__check_t T);

extern char * json_sigmatopdown__check_ptr(pointer_t x,  actual_sigmatopdown__check_t T);

actual_sigmatopdown__check_t actual_sigmatopdown__check(void);

extern sigmatopdown__check_t update_sigmatopdown__check_sigmatopdown__peg_adt_index(sigmatopdown__check_t x, uint8_t v);

extern sigmatopdown__check_t update_sigmatopdown__check_e(sigmatopdown__check_t x, uint8_t v);


//neg

struct sigmatopdown__neg_s {
        uint32_t count; 
        uint8_t sigmatopdown__peg_adt_index;
        uint8_t e;};
typedef struct sigmatopdown__neg_s * sigmatopdown__neg_t;

extern sigmatopdown__neg_t new_sigmatopdown__neg(void);

extern void release_sigmatopdown__neg(sigmatopdown__neg_t x);

extern sigmatopdown__neg_t copy_sigmatopdown__neg(sigmatopdown__neg_t x);

extern bool_t equal_sigmatopdown__neg(sigmatopdown__neg_t x, sigmatopdown__neg_t y);
extern char * json_sigmatopdown__neg(sigmatopdown__neg_t x);

typedef struct actual_sigmatopdown__neg_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown__neg_t;
void release_sigmatopdown__neg_ptr(pointer_t x, type_actual_t sigmatopdown__neg);

extern bool_t equal_sigmatopdown__neg_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__neg_t T);

extern char * json_sigmatopdown__neg_ptr(pointer_t x,  actual_sigmatopdown__neg_t T);

actual_sigmatopdown__neg_t actual_sigmatopdown__neg(void);

extern sigmatopdown__neg_t update_sigmatopdown__neg_sigmatopdown__peg_adt_index(sigmatopdown__neg_t x, uint8_t v);

extern sigmatopdown__neg_t update_sigmatopdown__neg_e(sigmatopdown__neg_t x, uint8_t v);


//peg_ord

struct sigmatopdown_funtype_36_s;
        typedef struct sigmatopdown_funtype_36_s * sigmatopdown_funtype_36_t;

struct sigmatopdown_funtype_36_ftbl_s {uint8_t (* fptr)(struct sigmatopdown_funtype_36_s *, sigmatopdown__peg_adt_t);
        uint8_t (* mptr)(struct sigmatopdown_funtype_36_s *, sigmatopdown__peg_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_36_s *);
        struct sigmatopdown_funtype_36_s * (* cptr)(struct sigmatopdown_funtype_36_s *);};
typedef struct sigmatopdown_funtype_36_ftbl_s * sigmatopdown_funtype_36_ftbl_t;

struct sigmatopdown_funtype_36_hashentry_s {uint32_t keyhash; sigmatopdown__peg_adt_t key; uint8_t value;}; 
typedef struct sigmatopdown_funtype_36_hashentry_s sigmatopdown_funtype_36_hashentry_t;

struct sigmatopdown_funtype_36_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_36_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_36_htbl_s * sigmatopdown_funtype_36_htbl_t;

struct sigmatopdown_funtype_36_s {uint32_t count;
        sigmatopdown_funtype_36_ftbl_t ftbl;
        sigmatopdown_funtype_36_htbl_t htbl;};
typedef struct sigmatopdown_funtype_36_s * sigmatopdown_funtype_36_t;

extern void release_sigmatopdown_funtype_36(sigmatopdown_funtype_36_t x);

extern sigmatopdown_funtype_36_t copy_sigmatopdown_funtype_36(sigmatopdown_funtype_36_t x);

extern bool_t equal_sigmatopdown_funtype_36(sigmatopdown_funtype_36_t x, sigmatopdown_funtype_36_t y);

extern char* json_sigmatopdown_funtype_36(sigmatopdown_funtype_36_t x);


//reduce_nat

struct sigmatopdown_funtype_37_s;
        typedef struct sigmatopdown_funtype_37_s * sigmatopdown_funtype_37_t;

struct sigmatopdown_funtype_37_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatopdown_funtype_37_s *, sigmatopdown__peg_adt_t);
        mpz_ptr_t (* mptr)(struct sigmatopdown_funtype_37_s *, sigmatopdown__peg_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_37_s *);
        struct sigmatopdown_funtype_37_s * (* cptr)(struct sigmatopdown_funtype_37_s *);};
typedef struct sigmatopdown_funtype_37_ftbl_s * sigmatopdown_funtype_37_ftbl_t;

struct sigmatopdown_funtype_37_hashentry_s {uint32_t keyhash; sigmatopdown__peg_adt_t key; mpz_t value;}; 
typedef struct sigmatopdown_funtype_37_hashentry_s sigmatopdown_funtype_37_hashentry_t;

struct sigmatopdown_funtype_37_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_37_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_37_htbl_s * sigmatopdown_funtype_37_htbl_t;

struct sigmatopdown_funtype_37_s {uint32_t count;
        sigmatopdown_funtype_37_ftbl_t ftbl;
        sigmatopdown_funtype_37_htbl_t htbl;};
typedef struct sigmatopdown_funtype_37_s * sigmatopdown_funtype_37_t;

extern void release_sigmatopdown_funtype_37(sigmatopdown_funtype_37_t x);

extern sigmatopdown_funtype_37_t copy_sigmatopdown_funtype_37(sigmatopdown_funtype_37_t x);

extern bool_t equal_sigmatopdown_funtype_37(sigmatopdown_funtype_37_t x, sigmatopdown_funtype_37_t y);

extern char* json_sigmatopdown_funtype_37(sigmatopdown_funtype_37_t x);


//reduce_nat

struct sigmatopdown_funtype_38_s;
        typedef struct sigmatopdown_funtype_38_s * sigmatopdown_funtype_38_t;

struct sigmatopdown_funtype_38_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatopdown_funtype_38_s *, sigmatopdown_funtype_29_t);
        mpz_ptr_t (* mptr)(struct sigmatopdown_funtype_38_s *, sigmatopdown_funtype_29_t);
        void (* rptr)(struct sigmatopdown_funtype_38_s *);
        struct sigmatopdown_funtype_38_s * (* cptr)(struct sigmatopdown_funtype_38_s *);};
typedef struct sigmatopdown_funtype_38_ftbl_s * sigmatopdown_funtype_38_ftbl_t;

struct sigmatopdown_funtype_38_hashentry_s {uint32_t keyhash; sigmatopdown_funtype_29_t key; mpz_t value;}; 
typedef struct sigmatopdown_funtype_38_hashentry_s sigmatopdown_funtype_38_hashentry_t;

struct sigmatopdown_funtype_38_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_38_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_38_htbl_s * sigmatopdown_funtype_38_htbl_t;

struct sigmatopdown_funtype_38_s {uint32_t count;
        sigmatopdown_funtype_38_ftbl_t ftbl;
        sigmatopdown_funtype_38_htbl_t htbl;};
typedef struct sigmatopdown_funtype_38_s * sigmatopdown_funtype_38_t;

extern void release_sigmatopdown_funtype_38(sigmatopdown_funtype_38_t x);

extern sigmatopdown_funtype_38_t copy_sigmatopdown_funtype_38(sigmatopdown_funtype_38_t x);

extern bool_t equal_sigmatopdown_funtype_38(sigmatopdown_funtype_38_t x, sigmatopdown_funtype_38_t y);

extern char* json_sigmatopdown_funtype_38(sigmatopdown_funtype_38_t x);


//reduce_nat

struct sigmatopdown_funtype_39_s;
        typedef struct sigmatopdown_funtype_39_s * sigmatopdown_funtype_39_t;

struct sigmatopdown_funtype_39_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatopdown_funtype_39_s *, uint8_t);
        mpz_ptr_t (* mptr)(struct sigmatopdown_funtype_39_s *, uint8_t);
        void (* rptr)(struct sigmatopdown_funtype_39_s *);
        struct sigmatopdown_funtype_39_s * (* cptr)(struct sigmatopdown_funtype_39_s *);};
typedef struct sigmatopdown_funtype_39_ftbl_s * sigmatopdown_funtype_39_ftbl_t;

struct sigmatopdown_funtype_39_hashentry_s {uint32_t keyhash; uint8_t key; mpz_t value;}; 
typedef struct sigmatopdown_funtype_39_hashentry_s sigmatopdown_funtype_39_hashentry_t;

struct sigmatopdown_funtype_39_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_39_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_39_htbl_s * sigmatopdown_funtype_39_htbl_t;

struct sigmatopdown_funtype_39_s {uint32_t count;
        sigmatopdown_funtype_39_ftbl_t ftbl;
        sigmatopdown_funtype_39_htbl_t htbl;};
typedef struct sigmatopdown_funtype_39_s * sigmatopdown_funtype_39_t;

extern void release_sigmatopdown_funtype_39(sigmatopdown_funtype_39_t x);

extern sigmatopdown_funtype_39_t copy_sigmatopdown_funtype_39(sigmatopdown_funtype_39_t x);

uint32_t lookup_sigmatopdown_funtype_39(sigmatopdown_funtype_39_htbl_t htbl, uint8_t i, uint32_t ihash);

sigmatopdown_funtype_39_t dupdate_sigmatopdown_funtype_39(sigmatopdown_funtype_39_t a, uint8_t i, mpz_ptr_t v);

extern sigmatopdown_funtype_39_t update_sigmatopdown_funtype_39(sigmatopdown_funtype_39_t a, uint8_t i, mpz_ptr_t v);

extern bool_t equal_sigmatopdown_funtype_39(sigmatopdown_funtype_39_t x, sigmatopdown_funtype_39_t y);

extern char* json_sigmatopdown_funtype_39(sigmatopdown_funtype_39_t x);


//reduce_nat

struct sigmatopdown_record_40_s {
        uint32_t count; 
        uint8_t project_1;
        uint8_t project_2;};
typedef struct sigmatopdown_record_40_s * sigmatopdown_record_40_t;

extern sigmatopdown_record_40_t new_sigmatopdown_record_40(void);

extern void release_sigmatopdown_record_40(sigmatopdown_record_40_t x);

extern sigmatopdown_record_40_t copy_sigmatopdown_record_40(sigmatopdown_record_40_t x);

extern bool_t equal_sigmatopdown_record_40(sigmatopdown_record_40_t x, sigmatopdown_record_40_t y);
extern char * json_sigmatopdown_record_40(sigmatopdown_record_40_t x);

typedef struct actual_sigmatopdown_record_40_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_record_40_t;
void release_sigmatopdown_record_40_ptr(pointer_t x, type_actual_t sigmatopdown_record_40);

extern bool_t equal_sigmatopdown_record_40_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_40_t T);

extern char * json_sigmatopdown_record_40_ptr(pointer_t x,  actual_sigmatopdown_record_40_t T);

actual_sigmatopdown_record_40_t actual_sigmatopdown_record_40(void);

extern sigmatopdown_record_40_t update_sigmatopdown_record_40_project_1(sigmatopdown_record_40_t x, uint8_t v);

extern sigmatopdown_record_40_t update_sigmatopdown_record_40_project_2(sigmatopdown_record_40_t x, uint8_t v);


//reduce_nat

struct sigmatopdown_funtype_41_s;
        typedef struct sigmatopdown_funtype_41_s * sigmatopdown_funtype_41_t;

struct sigmatopdown_funtype_41_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatopdown_funtype_41_s *, sigmatopdown_record_40_t);
        mpz_ptr_t (* mptr)(struct sigmatopdown_funtype_41_s *, uint8_t, uint8_t);
        void (* rptr)(struct sigmatopdown_funtype_41_s *);
        struct sigmatopdown_funtype_41_s * (* cptr)(struct sigmatopdown_funtype_41_s *);};
typedef struct sigmatopdown_funtype_41_ftbl_s * sigmatopdown_funtype_41_ftbl_t;

struct sigmatopdown_funtype_41_hashentry_s {uint32_t keyhash; sigmatopdown_record_40_t key; mpz_t value;}; 
typedef struct sigmatopdown_funtype_41_hashentry_s sigmatopdown_funtype_41_hashentry_t;

struct sigmatopdown_funtype_41_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_41_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_41_htbl_s * sigmatopdown_funtype_41_htbl_t;

struct sigmatopdown_funtype_41_s {uint32_t count;
        sigmatopdown_funtype_41_ftbl_t ftbl;
        sigmatopdown_funtype_41_htbl_t htbl;};
typedef struct sigmatopdown_funtype_41_s * sigmatopdown_funtype_41_t;

extern void release_sigmatopdown_funtype_41(sigmatopdown_funtype_41_t x);

extern sigmatopdown_funtype_41_t copy_sigmatopdown_funtype_41(sigmatopdown_funtype_41_t x);

extern bool_t equal_sigmatopdown_funtype_41(sigmatopdown_funtype_41_t x, sigmatopdown_funtype_41_t y);

extern char* json_sigmatopdown_funtype_41(sigmatopdown_funtype_41_t x);




struct sigmatopdown_closure_42_s;
        typedef struct sigmatopdown_closure_42_s * sigmatopdown_closure_42_t;

struct sigmatopdown_closure_42_s {uint32_t count;
         sigmatopdown_funtype_37_ftbl_t ftbl;
         sigmatopdown_funtype_37_htbl_t htbl;
        sigmatopdown_funtype_39_t fvar_1;
        sigmatopdown_funtype_39_t fvar_2;
        sigmatopdown_funtype_41_t fvar_3;
        sigmatopdown_funtype_41_t fvar_4;
        sigmatopdown_funtype_39_t fvar_5;
        sigmatopdown_funtype_38_t fvar_6;
        mpz_t fvar_7;
        mpz_t fvar_8;};

mpz_ptr_t f_sigmatopdown_closure_42(struct sigmatopdown_closure_42_s * closure, sigmatopdown__peg_adt_t bvar);

mpz_ptr_t m_sigmatopdown_closure_42(struct sigmatopdown_closure_42_s * closure, sigmatopdown__peg_adt_t bvar);

extern mpz_ptr_t h_sigmatopdown_closure_42(sigmatopdown__peg_adt_t ivar_17, sigmatopdown_funtype_39_t ivar_12, sigmatopdown_funtype_39_t ivar_14, sigmatopdown_funtype_41_t ivar_10, sigmatopdown_funtype_41_t ivar_8, sigmatopdown_funtype_39_t ivar_6, sigmatopdown_funtype_38_t ivar_3, mpz_ptr_t ivar_2, mpz_ptr_t ivar_1);

extern sigmatopdown_closure_42_t new_sigmatopdown_closure_42(void);

extern void release_sigmatopdown_closure_42(sigmatopdown_funtype_37_t closure);

extern sigmatopdown_closure_42_t copy_sigmatopdown_closure_42(sigmatopdown_closure_42_t x);


//REDUCE_nat

struct sigmatopdown_record_43_s {
        uint32_t count; 
        sigmatopdown_funtype_29_t project_1;
        sigmatopdown__peg_adt_t project_2;};
typedef struct sigmatopdown_record_43_s * sigmatopdown_record_43_t;

extern sigmatopdown_record_43_t new_sigmatopdown_record_43(void);

extern void release_sigmatopdown_record_43(sigmatopdown_record_43_t x);

extern sigmatopdown_record_43_t copy_sigmatopdown_record_43(sigmatopdown_record_43_t x);

extern bool_t equal_sigmatopdown_record_43(sigmatopdown_record_43_t x, sigmatopdown_record_43_t y);
extern char * json_sigmatopdown_record_43(sigmatopdown_record_43_t x);

typedef struct actual_sigmatopdown_record_43_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_record_43_t;
void release_sigmatopdown_record_43_ptr(pointer_t x, type_actual_t sigmatopdown_record_43);

extern bool_t equal_sigmatopdown_record_43_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_43_t T);

extern char * json_sigmatopdown_record_43_ptr(pointer_t x,  actual_sigmatopdown_record_43_t T);

actual_sigmatopdown_record_43_t actual_sigmatopdown_record_43(void);

extern sigmatopdown_record_43_t update_sigmatopdown_record_43_project_1(sigmatopdown_record_43_t x, sigmatopdown_funtype_29_t v);

extern sigmatopdown_record_43_t update_sigmatopdown_record_43_project_2(sigmatopdown_record_43_t x, sigmatopdown__peg_adt_t v);


//REDUCE_nat

struct sigmatopdown_funtype_44_s;
        typedef struct sigmatopdown_funtype_44_s * sigmatopdown_funtype_44_t;

struct sigmatopdown_funtype_44_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatopdown_funtype_44_s *, sigmatopdown_record_43_t);
        mpz_ptr_t (* mptr)(struct sigmatopdown_funtype_44_s *, sigmatopdown_funtype_29_t, sigmatopdown__peg_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_44_s *);
        struct sigmatopdown_funtype_44_s * (* cptr)(struct sigmatopdown_funtype_44_s *);};
typedef struct sigmatopdown_funtype_44_ftbl_s * sigmatopdown_funtype_44_ftbl_t;

struct sigmatopdown_funtype_44_hashentry_s {uint32_t keyhash; sigmatopdown_record_43_t key; mpz_t value;}; 
typedef struct sigmatopdown_funtype_44_hashentry_s sigmatopdown_funtype_44_hashentry_t;

struct sigmatopdown_funtype_44_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_44_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_44_htbl_s * sigmatopdown_funtype_44_htbl_t;

struct sigmatopdown_funtype_44_s {uint32_t count;
        sigmatopdown_funtype_44_ftbl_t ftbl;
        sigmatopdown_funtype_44_htbl_t htbl;};
typedef struct sigmatopdown_funtype_44_s * sigmatopdown_funtype_44_t;

extern void release_sigmatopdown_funtype_44(sigmatopdown_funtype_44_t x);

extern sigmatopdown_funtype_44_t copy_sigmatopdown_funtype_44(sigmatopdown_funtype_44_t x);

extern bool_t equal_sigmatopdown_funtype_44(sigmatopdown_funtype_44_t x, sigmatopdown_funtype_44_t y);

extern char* json_sigmatopdown_funtype_44(sigmatopdown_funtype_44_t x);


//REDUCE_nat

struct sigmatopdown_record_45_s {
        uint32_t count; 
        uint8_t project_1;
        sigmatopdown__peg_adt_t project_2;};
typedef struct sigmatopdown_record_45_s * sigmatopdown_record_45_t;

extern sigmatopdown_record_45_t new_sigmatopdown_record_45(void);

extern void release_sigmatopdown_record_45(sigmatopdown_record_45_t x);

extern sigmatopdown_record_45_t copy_sigmatopdown_record_45(sigmatopdown_record_45_t x);

extern bool_t equal_sigmatopdown_record_45(sigmatopdown_record_45_t x, sigmatopdown_record_45_t y);
extern char * json_sigmatopdown_record_45(sigmatopdown_record_45_t x);

typedef struct actual_sigmatopdown_record_45_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_record_45_t;
void release_sigmatopdown_record_45_ptr(pointer_t x, type_actual_t sigmatopdown_record_45);

extern bool_t equal_sigmatopdown_record_45_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_45_t T);

extern char * json_sigmatopdown_record_45_ptr(pointer_t x,  actual_sigmatopdown_record_45_t T);

actual_sigmatopdown_record_45_t actual_sigmatopdown_record_45(void);

extern sigmatopdown_record_45_t update_sigmatopdown_record_45_project_1(sigmatopdown_record_45_t x, uint8_t v);

extern sigmatopdown_record_45_t update_sigmatopdown_record_45_project_2(sigmatopdown_record_45_t x, sigmatopdown__peg_adt_t v);


//REDUCE_nat

struct sigmatopdown_funtype_46_s;
        typedef struct sigmatopdown_funtype_46_s * sigmatopdown_funtype_46_t;

struct sigmatopdown_funtype_46_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatopdown_funtype_46_s *, sigmatopdown_record_45_t);
        mpz_ptr_t (* mptr)(struct sigmatopdown_funtype_46_s *, uint8_t, sigmatopdown__peg_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_46_s *);
        struct sigmatopdown_funtype_46_s * (* cptr)(struct sigmatopdown_funtype_46_s *);};
typedef struct sigmatopdown_funtype_46_ftbl_s * sigmatopdown_funtype_46_ftbl_t;

struct sigmatopdown_funtype_46_hashentry_s {uint32_t keyhash; sigmatopdown_record_45_t key; mpz_t value;}; 
typedef struct sigmatopdown_funtype_46_hashentry_s sigmatopdown_funtype_46_hashentry_t;

struct sigmatopdown_funtype_46_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_46_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_46_htbl_s * sigmatopdown_funtype_46_htbl_t;

struct sigmatopdown_funtype_46_s {uint32_t count;
        sigmatopdown_funtype_46_ftbl_t ftbl;
        sigmatopdown_funtype_46_htbl_t htbl;};
typedef struct sigmatopdown_funtype_46_s * sigmatopdown_funtype_46_t;

extern void release_sigmatopdown_funtype_46(sigmatopdown_funtype_46_t x);

extern sigmatopdown_funtype_46_t copy_sigmatopdown_funtype_46(sigmatopdown_funtype_46_t x);

extern bool_t equal_sigmatopdown_funtype_46(sigmatopdown_funtype_46_t x, sigmatopdown_funtype_46_t y);

extern char* json_sigmatopdown_funtype_46(sigmatopdown_funtype_46_t x);


//REDUCE_nat

struct sigmatopdown_record_47_s {
        uint32_t count; 
        uint8_t project_1;
        uint8_t project_2;
        sigmatopdown__peg_adt_t project_3;};
typedef struct sigmatopdown_record_47_s * sigmatopdown_record_47_t;

extern sigmatopdown_record_47_t new_sigmatopdown_record_47(void);

extern void release_sigmatopdown_record_47(sigmatopdown_record_47_t x);

extern sigmatopdown_record_47_t copy_sigmatopdown_record_47(sigmatopdown_record_47_t x);

extern bool_t equal_sigmatopdown_record_47(sigmatopdown_record_47_t x, sigmatopdown_record_47_t y);
extern char * json_sigmatopdown_record_47(sigmatopdown_record_47_t x);

typedef struct actual_sigmatopdown_record_47_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_record_47_t;
void release_sigmatopdown_record_47_ptr(pointer_t x, type_actual_t sigmatopdown_record_47);

extern bool_t equal_sigmatopdown_record_47_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_47_t T);

extern char * json_sigmatopdown_record_47_ptr(pointer_t x,  actual_sigmatopdown_record_47_t T);

actual_sigmatopdown_record_47_t actual_sigmatopdown_record_47(void);

extern sigmatopdown_record_47_t update_sigmatopdown_record_47_project_1(sigmatopdown_record_47_t x, uint8_t v);

extern sigmatopdown_record_47_t update_sigmatopdown_record_47_project_2(sigmatopdown_record_47_t x, uint8_t v);

extern sigmatopdown_record_47_t update_sigmatopdown_record_47_project_3(sigmatopdown_record_47_t x, sigmatopdown__peg_adt_t v);


//REDUCE_nat

struct sigmatopdown_funtype_48_s;
        typedef struct sigmatopdown_funtype_48_s * sigmatopdown_funtype_48_t;

struct sigmatopdown_funtype_48_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatopdown_funtype_48_s *, sigmatopdown_record_47_t);
        mpz_ptr_t (* mptr)(struct sigmatopdown_funtype_48_s *, uint8_t, uint8_t, sigmatopdown__peg_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_48_s *);
        struct sigmatopdown_funtype_48_s * (* cptr)(struct sigmatopdown_funtype_48_s *);};
typedef struct sigmatopdown_funtype_48_ftbl_s * sigmatopdown_funtype_48_ftbl_t;

struct sigmatopdown_funtype_48_hashentry_s {uint32_t keyhash; sigmatopdown_record_47_t key; mpz_t value;}; 
typedef struct sigmatopdown_funtype_48_hashentry_s sigmatopdown_funtype_48_hashentry_t;

struct sigmatopdown_funtype_48_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_48_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_48_htbl_s * sigmatopdown_funtype_48_htbl_t;

struct sigmatopdown_funtype_48_s {uint32_t count;
        sigmatopdown_funtype_48_ftbl_t ftbl;
        sigmatopdown_funtype_48_htbl_t htbl;};
typedef struct sigmatopdown_funtype_48_s * sigmatopdown_funtype_48_t;

extern void release_sigmatopdown_funtype_48(sigmatopdown_funtype_48_t x);

extern sigmatopdown_funtype_48_t copy_sigmatopdown_funtype_48(sigmatopdown_funtype_48_t x);

extern bool_t equal_sigmatopdown_funtype_48(sigmatopdown_funtype_48_t x, sigmatopdown_funtype_48_t y);

extern char* json_sigmatopdown_funtype_48(sigmatopdown_funtype_48_t x);




struct sigmatopdown_closure_49_s;
        typedef struct sigmatopdown_closure_49_s * sigmatopdown_closure_49_t;

struct sigmatopdown_closure_49_s {uint32_t count;
         sigmatopdown_funtype_37_ftbl_t ftbl;
         sigmatopdown_funtype_37_htbl_t htbl;
        sigmatopdown_funtype_46_t fvar_1;
        sigmatopdown_funtype_46_t fvar_2;
        sigmatopdown_funtype_48_t fvar_3;
        sigmatopdown_funtype_48_t fvar_4;
        sigmatopdown_funtype_46_t fvar_5;
        sigmatopdown_funtype_44_t fvar_6;
        sigmatopdown_funtype_37_t fvar_7;
        sigmatopdown_funtype_37_t fvar_8;};

mpz_ptr_t f_sigmatopdown_closure_49(struct sigmatopdown_closure_49_s * closure, sigmatopdown__peg_adt_t bvar);

mpz_ptr_t m_sigmatopdown_closure_49(struct sigmatopdown_closure_49_s * closure, sigmatopdown__peg_adt_t bvar);

extern mpz_ptr_t h_sigmatopdown_closure_49(sigmatopdown__peg_adt_t ivar_19, sigmatopdown_funtype_46_t ivar_14, sigmatopdown_funtype_46_t ivar_16, sigmatopdown_funtype_48_t ivar_12, sigmatopdown_funtype_48_t ivar_10, sigmatopdown_funtype_46_t ivar_8, sigmatopdown_funtype_44_t ivar_5, sigmatopdown_funtype_37_t ivar_3, sigmatopdown_funtype_37_t ivar_1);

extern sigmatopdown_closure_49_t new_sigmatopdown_closure_49(void);

extern void release_sigmatopdown_closure_49(sigmatopdown_funtype_37_t closure);

extern sigmatopdown_closure_49_t copy_sigmatopdown_closure_49(sigmatopdown_closure_49_t x);


//reduce_ordinal

struct sigmatopdown_funtype_50_s;
        typedef struct sigmatopdown_funtype_50_s * sigmatopdown_funtype_50_t;

struct sigmatopdown_funtype_50_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatopdown_funtype_50_s *, sigmatopdown__peg_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatopdown_funtype_50_s *, sigmatopdown__peg_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_50_s *);
        struct sigmatopdown_funtype_50_s * (* cptr)(struct sigmatopdown_funtype_50_s *);};
typedef struct sigmatopdown_funtype_50_ftbl_s * sigmatopdown_funtype_50_ftbl_t;

struct sigmatopdown_funtype_50_hashentry_s {uint32_t keyhash; sigmatopdown__peg_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatopdown_funtype_50_hashentry_s sigmatopdown_funtype_50_hashentry_t;

struct sigmatopdown_funtype_50_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_50_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_50_htbl_s * sigmatopdown_funtype_50_htbl_t;

struct sigmatopdown_funtype_50_s {uint32_t count;
        sigmatopdown_funtype_50_ftbl_t ftbl;
        sigmatopdown_funtype_50_htbl_t htbl;};
typedef struct sigmatopdown_funtype_50_s * sigmatopdown_funtype_50_t;

extern void release_sigmatopdown_funtype_50(sigmatopdown_funtype_50_t x);

extern sigmatopdown_funtype_50_t copy_sigmatopdown_funtype_50(sigmatopdown_funtype_50_t x);

extern bool_t equal_sigmatopdown_funtype_50(sigmatopdown_funtype_50_t x, sigmatopdown_funtype_50_t y);

extern char* json_sigmatopdown_funtype_50(sigmatopdown_funtype_50_t x);


//reduce_ordinal

struct sigmatopdown_funtype_51_s;
        typedef struct sigmatopdown_funtype_51_s * sigmatopdown_funtype_51_t;

struct sigmatopdown_funtype_51_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatopdown_funtype_51_s *, sigmatopdown_funtype_29_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatopdown_funtype_51_s *, sigmatopdown_funtype_29_t);
        void (* rptr)(struct sigmatopdown_funtype_51_s *);
        struct sigmatopdown_funtype_51_s * (* cptr)(struct sigmatopdown_funtype_51_s *);};
typedef struct sigmatopdown_funtype_51_ftbl_s * sigmatopdown_funtype_51_ftbl_t;

struct sigmatopdown_funtype_51_hashentry_s {uint32_t keyhash; sigmatopdown_funtype_29_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatopdown_funtype_51_hashentry_s sigmatopdown_funtype_51_hashentry_t;

struct sigmatopdown_funtype_51_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_51_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_51_htbl_s * sigmatopdown_funtype_51_htbl_t;

struct sigmatopdown_funtype_51_s {uint32_t count;
        sigmatopdown_funtype_51_ftbl_t ftbl;
        sigmatopdown_funtype_51_htbl_t htbl;};
typedef struct sigmatopdown_funtype_51_s * sigmatopdown_funtype_51_t;

extern void release_sigmatopdown_funtype_51(sigmatopdown_funtype_51_t x);

extern sigmatopdown_funtype_51_t copy_sigmatopdown_funtype_51(sigmatopdown_funtype_51_t x);

extern bool_t equal_sigmatopdown_funtype_51(sigmatopdown_funtype_51_t x, sigmatopdown_funtype_51_t y);

extern char* json_sigmatopdown_funtype_51(sigmatopdown_funtype_51_t x);


//reduce_ordinal

struct sigmatopdown_funtype_52_s;
        typedef struct sigmatopdown_funtype_52_s * sigmatopdown_funtype_52_t;

struct sigmatopdown_funtype_52_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatopdown_funtype_52_s *, uint8_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatopdown_funtype_52_s *, uint8_t);
        void (* rptr)(struct sigmatopdown_funtype_52_s *);
        struct sigmatopdown_funtype_52_s * (* cptr)(struct sigmatopdown_funtype_52_s *);};
typedef struct sigmatopdown_funtype_52_ftbl_s * sigmatopdown_funtype_52_ftbl_t;

struct sigmatopdown_funtype_52_hashentry_s {uint32_t keyhash; uint8_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatopdown_funtype_52_hashentry_s sigmatopdown_funtype_52_hashentry_t;

struct sigmatopdown_funtype_52_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_52_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_52_htbl_s * sigmatopdown_funtype_52_htbl_t;

struct sigmatopdown_funtype_52_s {uint32_t count;
        sigmatopdown_funtype_52_ftbl_t ftbl;
        sigmatopdown_funtype_52_htbl_t htbl;};
typedef struct sigmatopdown_funtype_52_s * sigmatopdown_funtype_52_t;

extern void release_sigmatopdown_funtype_52(sigmatopdown_funtype_52_t x);

extern sigmatopdown_funtype_52_t copy_sigmatopdown_funtype_52(sigmatopdown_funtype_52_t x);

uint32_t lookup_sigmatopdown_funtype_52(sigmatopdown_funtype_52_htbl_t htbl, uint8_t i, uint32_t ihash);

sigmatopdown_funtype_52_t dupdate_sigmatopdown_funtype_52(sigmatopdown_funtype_52_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v);

extern sigmatopdown_funtype_52_t update_sigmatopdown_funtype_52(sigmatopdown_funtype_52_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v);

extern bool_t equal_sigmatopdown_funtype_52(sigmatopdown_funtype_52_t x, sigmatopdown_funtype_52_t y);

extern char* json_sigmatopdown_funtype_52(sigmatopdown_funtype_52_t x);


//reduce_ordinal

struct sigmatopdown_funtype_53_s;
        typedef struct sigmatopdown_funtype_53_s * sigmatopdown_funtype_53_t;

struct sigmatopdown_funtype_53_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatopdown_funtype_53_s *, sigmatopdown_record_40_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatopdown_funtype_53_s *, uint8_t, uint8_t);
        void (* rptr)(struct sigmatopdown_funtype_53_s *);
        struct sigmatopdown_funtype_53_s * (* cptr)(struct sigmatopdown_funtype_53_s *);};
typedef struct sigmatopdown_funtype_53_ftbl_s * sigmatopdown_funtype_53_ftbl_t;

struct sigmatopdown_funtype_53_hashentry_s {uint32_t keyhash; sigmatopdown_record_40_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatopdown_funtype_53_hashentry_s sigmatopdown_funtype_53_hashentry_t;

struct sigmatopdown_funtype_53_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_53_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_53_htbl_s * sigmatopdown_funtype_53_htbl_t;

struct sigmatopdown_funtype_53_s {uint32_t count;
        sigmatopdown_funtype_53_ftbl_t ftbl;
        sigmatopdown_funtype_53_htbl_t htbl;};
typedef struct sigmatopdown_funtype_53_s * sigmatopdown_funtype_53_t;

extern void release_sigmatopdown_funtype_53(sigmatopdown_funtype_53_t x);

extern sigmatopdown_funtype_53_t copy_sigmatopdown_funtype_53(sigmatopdown_funtype_53_t x);

extern bool_t equal_sigmatopdown_funtype_53(sigmatopdown_funtype_53_t x, sigmatopdown_funtype_53_t y);

extern char* json_sigmatopdown_funtype_53(sigmatopdown_funtype_53_t x);




struct sigmatopdown_closure_54_s;
        typedef struct sigmatopdown_closure_54_s * sigmatopdown_closure_54_t;

struct sigmatopdown_closure_54_s {uint32_t count;
         sigmatopdown_funtype_50_ftbl_t ftbl;
         sigmatopdown_funtype_50_htbl_t htbl;
        sigmatopdown_funtype_52_t fvar_1;
        sigmatopdown_funtype_52_t fvar_2;
        sigmatopdown_funtype_53_t fvar_3;
        sigmatopdown_funtype_53_t fvar_4;
        sigmatopdown_funtype_52_t fvar_5;
        sigmatopdown_funtype_51_t fvar_6;
        ordstruct_adt__ordstruct_adt_t fvar_7;
        ordstruct_adt__ordstruct_adt_t fvar_8;};

ordstruct_adt__ordstruct_adt_t f_sigmatopdown_closure_54(struct sigmatopdown_closure_54_s * closure, sigmatopdown__peg_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_sigmatopdown_closure_54(struct sigmatopdown_closure_54_s * closure, sigmatopdown__peg_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_sigmatopdown_closure_54(sigmatopdown__peg_adt_t ivar_17, sigmatopdown_funtype_52_t ivar_12, sigmatopdown_funtype_52_t ivar_14, sigmatopdown_funtype_53_t ivar_10, sigmatopdown_funtype_53_t ivar_8, sigmatopdown_funtype_52_t ivar_6, sigmatopdown_funtype_51_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1);

extern sigmatopdown_closure_54_t new_sigmatopdown_closure_54(void);

extern void release_sigmatopdown_closure_54(sigmatopdown_funtype_50_t closure);

extern sigmatopdown_closure_54_t copy_sigmatopdown_closure_54(sigmatopdown_closure_54_t x);


//REDUCE_ordinal

struct sigmatopdown_funtype_55_s;
        typedef struct sigmatopdown_funtype_55_s * sigmatopdown_funtype_55_t;

struct sigmatopdown_funtype_55_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatopdown_funtype_55_s *, sigmatopdown_record_43_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatopdown_funtype_55_s *, sigmatopdown_funtype_29_t, sigmatopdown__peg_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_55_s *);
        struct sigmatopdown_funtype_55_s * (* cptr)(struct sigmatopdown_funtype_55_s *);};
typedef struct sigmatopdown_funtype_55_ftbl_s * sigmatopdown_funtype_55_ftbl_t;

struct sigmatopdown_funtype_55_hashentry_s {uint32_t keyhash; sigmatopdown_record_43_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatopdown_funtype_55_hashentry_s sigmatopdown_funtype_55_hashentry_t;

struct sigmatopdown_funtype_55_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_55_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_55_htbl_s * sigmatopdown_funtype_55_htbl_t;

struct sigmatopdown_funtype_55_s {uint32_t count;
        sigmatopdown_funtype_55_ftbl_t ftbl;
        sigmatopdown_funtype_55_htbl_t htbl;};
typedef struct sigmatopdown_funtype_55_s * sigmatopdown_funtype_55_t;

extern void release_sigmatopdown_funtype_55(sigmatopdown_funtype_55_t x);

extern sigmatopdown_funtype_55_t copy_sigmatopdown_funtype_55(sigmatopdown_funtype_55_t x);

extern bool_t equal_sigmatopdown_funtype_55(sigmatopdown_funtype_55_t x, sigmatopdown_funtype_55_t y);

extern char* json_sigmatopdown_funtype_55(sigmatopdown_funtype_55_t x);


//REDUCE_ordinal

struct sigmatopdown_funtype_56_s;
        typedef struct sigmatopdown_funtype_56_s * sigmatopdown_funtype_56_t;

struct sigmatopdown_funtype_56_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatopdown_funtype_56_s *, sigmatopdown_record_45_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatopdown_funtype_56_s *, uint8_t, sigmatopdown__peg_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_56_s *);
        struct sigmatopdown_funtype_56_s * (* cptr)(struct sigmatopdown_funtype_56_s *);};
typedef struct sigmatopdown_funtype_56_ftbl_s * sigmatopdown_funtype_56_ftbl_t;

struct sigmatopdown_funtype_56_hashentry_s {uint32_t keyhash; sigmatopdown_record_45_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatopdown_funtype_56_hashentry_s sigmatopdown_funtype_56_hashentry_t;

struct sigmatopdown_funtype_56_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_56_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_56_htbl_s * sigmatopdown_funtype_56_htbl_t;

struct sigmatopdown_funtype_56_s {uint32_t count;
        sigmatopdown_funtype_56_ftbl_t ftbl;
        sigmatopdown_funtype_56_htbl_t htbl;};
typedef struct sigmatopdown_funtype_56_s * sigmatopdown_funtype_56_t;

extern void release_sigmatopdown_funtype_56(sigmatopdown_funtype_56_t x);

extern sigmatopdown_funtype_56_t copy_sigmatopdown_funtype_56(sigmatopdown_funtype_56_t x);

extern bool_t equal_sigmatopdown_funtype_56(sigmatopdown_funtype_56_t x, sigmatopdown_funtype_56_t y);

extern char* json_sigmatopdown_funtype_56(sigmatopdown_funtype_56_t x);


//REDUCE_ordinal

struct sigmatopdown_funtype_57_s;
        typedef struct sigmatopdown_funtype_57_s * sigmatopdown_funtype_57_t;

struct sigmatopdown_funtype_57_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatopdown_funtype_57_s *, sigmatopdown_record_47_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatopdown_funtype_57_s *, uint8_t, uint8_t, sigmatopdown__peg_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_57_s *);
        struct sigmatopdown_funtype_57_s * (* cptr)(struct sigmatopdown_funtype_57_s *);};
typedef struct sigmatopdown_funtype_57_ftbl_s * sigmatopdown_funtype_57_ftbl_t;

struct sigmatopdown_funtype_57_hashentry_s {uint32_t keyhash; sigmatopdown_record_47_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatopdown_funtype_57_hashentry_s sigmatopdown_funtype_57_hashentry_t;

struct sigmatopdown_funtype_57_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_57_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_57_htbl_s * sigmatopdown_funtype_57_htbl_t;

struct sigmatopdown_funtype_57_s {uint32_t count;
        sigmatopdown_funtype_57_ftbl_t ftbl;
        sigmatopdown_funtype_57_htbl_t htbl;};
typedef struct sigmatopdown_funtype_57_s * sigmatopdown_funtype_57_t;

extern void release_sigmatopdown_funtype_57(sigmatopdown_funtype_57_t x);

extern sigmatopdown_funtype_57_t copy_sigmatopdown_funtype_57(sigmatopdown_funtype_57_t x);

extern bool_t equal_sigmatopdown_funtype_57(sigmatopdown_funtype_57_t x, sigmatopdown_funtype_57_t y);

extern char* json_sigmatopdown_funtype_57(sigmatopdown_funtype_57_t x);




struct sigmatopdown_closure_58_s;
        typedef struct sigmatopdown_closure_58_s * sigmatopdown_closure_58_t;

struct sigmatopdown_closure_58_s {uint32_t count;
         sigmatopdown_funtype_50_ftbl_t ftbl;
         sigmatopdown_funtype_50_htbl_t htbl;
        sigmatopdown_funtype_56_t fvar_1;
        sigmatopdown_funtype_56_t fvar_2;
        sigmatopdown_funtype_57_t fvar_3;
        sigmatopdown_funtype_57_t fvar_4;
        sigmatopdown_funtype_56_t fvar_5;
        sigmatopdown_funtype_55_t fvar_6;
        sigmatopdown_funtype_50_t fvar_7;
        sigmatopdown_funtype_50_t fvar_8;};

ordstruct_adt__ordstruct_adt_t f_sigmatopdown_closure_58(struct sigmatopdown_closure_58_s * closure, sigmatopdown__peg_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_sigmatopdown_closure_58(struct sigmatopdown_closure_58_s * closure, sigmatopdown__peg_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_sigmatopdown_closure_58(sigmatopdown__peg_adt_t ivar_19, sigmatopdown_funtype_56_t ivar_14, sigmatopdown_funtype_56_t ivar_16, sigmatopdown_funtype_57_t ivar_12, sigmatopdown_funtype_57_t ivar_10, sigmatopdown_funtype_56_t ivar_8, sigmatopdown_funtype_55_t ivar_5, sigmatopdown_funtype_50_t ivar_3, sigmatopdown_funtype_50_t ivar_1);

extern sigmatopdown_closure_58_t new_sigmatopdown_closure_58(void);

extern void release_sigmatopdown_closure_58(sigmatopdown_funtype_50_t closure);

extern sigmatopdown_closure_58_t copy_sigmatopdown_closure_58(sigmatopdown_closure_58_t x);


//good_good_entry?

struct sigmatopdown_funtype_59_s;
        typedef struct sigmatopdown_funtype_59_s * sigmatopdown_funtype_59_t;

struct sigmatopdown_funtype_59_ftbl_s {bool_t (* fptr)(struct sigmatopdown_funtype_59_s *, sigmatopdown__ent_adt_t);
        bool_t (* mptr)(struct sigmatopdown_funtype_59_s *, sigmatopdown__ent_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_59_s *);
        struct sigmatopdown_funtype_59_s * (* cptr)(struct sigmatopdown_funtype_59_s *);};
typedef struct sigmatopdown_funtype_59_ftbl_s * sigmatopdown_funtype_59_ftbl_t;

struct sigmatopdown_funtype_59_hashentry_s {uint32_t keyhash; sigmatopdown__ent_adt_t key; bool_t value;}; 
typedef struct sigmatopdown_funtype_59_hashentry_s sigmatopdown_funtype_59_hashentry_t;

struct sigmatopdown_funtype_59_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_59_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_59_htbl_s * sigmatopdown_funtype_59_htbl_t;

struct sigmatopdown_funtype_59_s {uint32_t count;
        sigmatopdown_funtype_59_ftbl_t ftbl;
        sigmatopdown_funtype_59_htbl_t htbl;};
typedef struct sigmatopdown_funtype_59_s * sigmatopdown_funtype_59_t;

extern void release_sigmatopdown_funtype_59(sigmatopdown_funtype_59_t x);

extern sigmatopdown_funtype_59_t copy_sigmatopdown_funtype_59(sigmatopdown_funtype_59_t x);

extern bool_t equal_sigmatopdown_funtype_59(sigmatopdown_funtype_59_t x, sigmatopdown_funtype_59_t y);

extern char* json_sigmatopdown_funtype_59(sigmatopdown_funtype_59_t x);




struct sigmatopdown_closure_60_s;
        typedef struct sigmatopdown_closure_60_s * sigmatopdown_closure_60_t;

struct sigmatopdown_closure_60_s {uint32_t count;
         sigmatopdown_funtype_59_ftbl_t ftbl;
         sigmatopdown_funtype_59_htbl_t htbl;
        uint32_t fvar_1;
        uint32_t fvar_2;};

bool_t f_sigmatopdown_closure_60(struct sigmatopdown_closure_60_s * closure, sigmatopdown__ent_adt_t bvar);

bool_t m_sigmatopdown_closure_60(struct sigmatopdown_closure_60_s * closure, sigmatopdown__ent_adt_t bvar);

extern bool_t h_sigmatopdown_closure_60(sigmatopdown__ent_adt_t ivar_4, uint32_t ivar_2, uint32_t ivar_1);

extern sigmatopdown_closure_60_t new_sigmatopdown_closure_60(void);

extern void release_sigmatopdown_closure_60(sigmatopdown_funtype_59_t closure);

extern sigmatopdown_closure_60_t copy_sigmatopdown_closure_60(sigmatopdown_closure_60_t x);




struct sigmatopdown_closure_61_s;
        typedef struct sigmatopdown_closure_61_s * sigmatopdown_closure_61_t;

struct sigmatopdown_closure_61_s {uint32_t count;
         sigmatopdown_funtype_59_ftbl_t ftbl;
         sigmatopdown_funtype_59_htbl_t htbl;
        uint32_t fvar_1;};

bool_t f_sigmatopdown_closure_61(struct sigmatopdown_closure_61_s * closure, sigmatopdown__ent_adt_t bvar);

bool_t m_sigmatopdown_closure_61(struct sigmatopdown_closure_61_s * closure, sigmatopdown__ent_adt_t bvar);

extern bool_t h_sigmatopdown_closure_61(sigmatopdown__ent_adt_t ivar_3, uint32_t ivar_1);

extern sigmatopdown_closure_61_t new_sigmatopdown_closure_61(void);

extern void release_sigmatopdown_closure_61(sigmatopdown_funtype_59_t closure);

extern sigmatopdown_closure_61_t copy_sigmatopdown_closure_61(sigmatopdown_closure_61_t x);




struct sigmatopdown_closure_62_s;
        typedef struct sigmatopdown_closure_62_s * sigmatopdown_closure_62_t;

struct sigmatopdown_closure_62_s {uint32_t count;
         sigmatopdown_funtype_59_ftbl_t ftbl;
         sigmatopdown_funtype_59_htbl_t htbl;
        uint32_t fvar_1;};

bool_t f_sigmatopdown_closure_62(struct sigmatopdown_closure_62_s * closure, sigmatopdown__ent_adt_t bvar);

bool_t m_sigmatopdown_closure_62(struct sigmatopdown_closure_62_s * closure, sigmatopdown__ent_adt_t bvar);

extern bool_t h_sigmatopdown_closure_62(sigmatopdown__ent_adt_t ivar_3, uint32_t ivar_1);

extern sigmatopdown_closure_62_t new_sigmatopdown_closure_62(void);

extern void release_sigmatopdown_closure_62(sigmatopdown_funtype_59_t closure);

extern sigmatopdown_closure_62_t copy_sigmatopdown_closure_62(sigmatopdown_closure_62_t x);




struct sigmatopdown_closure_63_s;
        typedef struct sigmatopdown_closure_63_s * sigmatopdown_closure_63_t;

struct sigmatopdown_closure_63_s {uint32_t count;
         sigmatopdown_funtype_59_ftbl_t ftbl;
         sigmatopdown_funtype_59_htbl_t htbl;
        uint32_t fvar_1;
        uint32_t fvar_2;};

bool_t f_sigmatopdown_closure_63(struct sigmatopdown_closure_63_s * closure, sigmatopdown__ent_adt_t bvar);

bool_t m_sigmatopdown_closure_63(struct sigmatopdown_closure_63_s * closure, sigmatopdown__ent_adt_t bvar);

extern bool_t h_sigmatopdown_closure_63(sigmatopdown__ent_adt_t ivar_4, uint32_t ivar_2, uint32_t ivar_1);

extern sigmatopdown_closure_63_t new_sigmatopdown_closure_63(void);

extern void release_sigmatopdown_closure_63(sigmatopdown_funtype_59_t closure);

extern sigmatopdown_closure_63_t copy_sigmatopdown_closure_63(sigmatopdown_closure_63_t x);


//instack

struct sigmatopdown_funtype_64_s;
        typedef struct sigmatopdown_funtype_64_s * sigmatopdown_funtype_64_t;

struct sigmatopdown_funtype_64_ftbl_s {bool_t (* fptr)(struct sigmatopdown_funtype_64_s *, sigmatopdown_record_9_t);
        bool_t (* mptr)(struct sigmatopdown_funtype_64_s *, uint32_t, uint8_t);
        void (* rptr)(struct sigmatopdown_funtype_64_s *);
        struct sigmatopdown_funtype_64_s * (* cptr)(struct sigmatopdown_funtype_64_s *);};
typedef struct sigmatopdown_funtype_64_ftbl_s * sigmatopdown_funtype_64_ftbl_t;

struct sigmatopdown_funtype_64_hashentry_s {uint32_t keyhash; sigmatopdown_record_9_t key; bool_t value;}; 
typedef struct sigmatopdown_funtype_64_hashentry_s sigmatopdown_funtype_64_hashentry_t;

struct sigmatopdown_funtype_64_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_64_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_64_htbl_s * sigmatopdown_funtype_64_htbl_t;

struct sigmatopdown_funtype_64_s {uint32_t count;
        sigmatopdown_funtype_64_ftbl_t ftbl;
        sigmatopdown_funtype_64_htbl_t htbl;};
typedef struct sigmatopdown_funtype_64_s * sigmatopdown_funtype_64_t;

extern void release_sigmatopdown_funtype_64(sigmatopdown_funtype_64_t x);

extern sigmatopdown_funtype_64_t copy_sigmatopdown_funtype_64(sigmatopdown_funtype_64_t x);

extern bool_t equal_sigmatopdown_funtype_64(sigmatopdown_funtype_64_t x, sigmatopdown_funtype_64_t y);

extern char* json_sigmatopdown_funtype_64(sigmatopdown_funtype_64_t x);


//instack

struct sigmatopdown_array_65_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         sigmatopdown__ent_adt_t elems[]; };
typedef struct sigmatopdown_array_65_s * sigmatopdown_array_65_t;

extern sigmatopdown_array_65_t new_sigmatopdown_array_65(uint32_t size);

extern void release_sigmatopdown_array_65(sigmatopdown_array_65_t x);

extern sigmatopdown_array_65_t copy_sigmatopdown_array_65(sigmatopdown_array_65_t x);

extern bool_t equal_sigmatopdown_array_65(sigmatopdown_array_65_t x, sigmatopdown_array_65_t y);
extern char * json_sigmatopdown_array_65(sigmatopdown_array_65_t x);

typedef struct actual_sigmatopdown_array_65_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_array_65_t;
void release_sigmatopdown_array_65_ptr(pointer_t x, type_actual_t sigmatopdown_array_65);

extern bool_t equal_sigmatopdown_array_65_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatopdown_array_65_ptr(pointer_t x, type_actual_t T);

actual_sigmatopdown_array_65_t actual_sigmatopdown_array_65(void);

extern sigmatopdown_array_65_t update_sigmatopdown_array_65(sigmatopdown_array_65_t x, uint32_t i, sigmatopdown__ent_adt_t v);

extern sigmatopdown_array_65_t upgrade_sigmatopdown_array_65(sigmatopdown_array_65_t x, uint32_t i, sigmatopdown__ent_adt_t v);


//instack

struct sigmatopdown_array_66_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         sigmatopdown_array_65_t elems[]; };
typedef struct sigmatopdown_array_66_s * sigmatopdown_array_66_t;

extern sigmatopdown_array_66_t new_sigmatopdown_array_66(uint32_t size);

extern void release_sigmatopdown_array_66(sigmatopdown_array_66_t x);

extern sigmatopdown_array_66_t copy_sigmatopdown_array_66(sigmatopdown_array_66_t x);

extern bool_t equal_sigmatopdown_array_66(sigmatopdown_array_66_t x, sigmatopdown_array_66_t y);
extern char * json_sigmatopdown_array_66(sigmatopdown_array_66_t x);

typedef struct actual_sigmatopdown_array_66_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_array_66_t;
void release_sigmatopdown_array_66_ptr(pointer_t x, type_actual_t sigmatopdown_array_66);

extern bool_t equal_sigmatopdown_array_66_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatopdown_array_66_ptr(pointer_t x, type_actual_t T);

actual_sigmatopdown_array_66_t actual_sigmatopdown_array_66(void);

extern sigmatopdown_array_66_t update_sigmatopdown_array_66(sigmatopdown_array_66_t x, uint32_t i, sigmatopdown_array_65_t v);

extern sigmatopdown_array_66_t upgrade_sigmatopdown_array_66(sigmatopdown_array_66_t x, uint32_t i, sigmatopdown_array_65_t v);




struct sigmatopdown_closure_67_s;
        typedef struct sigmatopdown_closure_67_s * sigmatopdown_closure_67_t;

struct sigmatopdown_closure_67_s {uint32_t count;
         sigmatopdown_funtype_64_ftbl_t ftbl;
         sigmatopdown_funtype_64_htbl_t htbl;
        sigmatopdown_array_66_t fvar_1;
        uint32_t fvar_2;};

bool_t f_sigmatopdown_closure_67(struct sigmatopdown_closure_67_s * closure, sigmatopdown_record_9_t bvar);

bool_t m_sigmatopdown_closure_67(struct sigmatopdown_closure_67_s * closure, uint32_t bvar_1, uint8_t bvar_2);

extern bool_t h_sigmatopdown_closure_67(uint32_t ivar_5, uint8_t ivar_6, sigmatopdown_array_66_t ivar_2, uint32_t ivar_1);

extern sigmatopdown_closure_67_t new_sigmatopdown_closure_67(void);

extern void release_sigmatopdown_closure_67(sigmatopdown_funtype_64_t closure);

extern sigmatopdown_closure_67_t copy_sigmatopdown_closure_67(sigmatopdown_closure_67_t x);


//successor

struct sigmatopdown_record_68_s {
        uint32_t count; 
        sigmatopdown__ent_adt_t project_1;
        sigmatopdown__ent_adt_t project_2;};
typedef struct sigmatopdown_record_68_s * sigmatopdown_record_68_t;

extern sigmatopdown_record_68_t new_sigmatopdown_record_68(void);

extern void release_sigmatopdown_record_68(sigmatopdown_record_68_t x);

extern sigmatopdown_record_68_t copy_sigmatopdown_record_68(sigmatopdown_record_68_t x);

extern bool_t equal_sigmatopdown_record_68(sigmatopdown_record_68_t x, sigmatopdown_record_68_t y);
extern char * json_sigmatopdown_record_68(sigmatopdown_record_68_t x);

typedef struct actual_sigmatopdown_record_68_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_record_68_t;
void release_sigmatopdown_record_68_ptr(pointer_t x, type_actual_t sigmatopdown_record_68);

extern bool_t equal_sigmatopdown_record_68_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_68_t T);

extern char * json_sigmatopdown_record_68_ptr(pointer_t x,  actual_sigmatopdown_record_68_t T);

actual_sigmatopdown_record_68_t actual_sigmatopdown_record_68(void);

extern sigmatopdown_record_68_t update_sigmatopdown_record_68_project_1(sigmatopdown_record_68_t x, sigmatopdown__ent_adt_t v);

extern sigmatopdown_record_68_t update_sigmatopdown_record_68_project_2(sigmatopdown_record_68_t x, sigmatopdown__ent_adt_t v);


//successor

struct sigmatopdown_funtype_69_s;
        typedef struct sigmatopdown_funtype_69_s * sigmatopdown_funtype_69_t;

struct sigmatopdown_funtype_69_ftbl_s {bool_t (* fptr)(struct sigmatopdown_funtype_69_s *, sigmatopdown_record_68_t);
        bool_t (* mptr)(struct sigmatopdown_funtype_69_s *, sigmatopdown__ent_adt_t, sigmatopdown__ent_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_69_s *);
        struct sigmatopdown_funtype_69_s * (* cptr)(struct sigmatopdown_funtype_69_s *);};
typedef struct sigmatopdown_funtype_69_ftbl_s * sigmatopdown_funtype_69_ftbl_t;

struct sigmatopdown_funtype_69_hashentry_s {uint32_t keyhash; sigmatopdown_record_68_t key; bool_t value;}; 
typedef struct sigmatopdown_funtype_69_hashentry_s sigmatopdown_funtype_69_hashentry_t;

struct sigmatopdown_funtype_69_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_69_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_69_htbl_s * sigmatopdown_funtype_69_htbl_t;

struct sigmatopdown_funtype_69_s {uint32_t count;
        sigmatopdown_funtype_69_ftbl_t ftbl;
        sigmatopdown_funtype_69_htbl_t htbl;};
typedef struct sigmatopdown_funtype_69_s * sigmatopdown_funtype_69_t;

extern void release_sigmatopdown_funtype_69(sigmatopdown_funtype_69_t x);

extern sigmatopdown_funtype_69_t copy_sigmatopdown_funtype_69(sigmatopdown_funtype_69_t x);

extern bool_t equal_sigmatopdown_funtype_69(sigmatopdown_funtype_69_t x, sigmatopdown_funtype_69_t y);

extern char* json_sigmatopdown_funtype_69(sigmatopdown_funtype_69_t x);


//successor

struct sigmatopdown__lang_spec_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         sigmatopdown__peg_adt_t elems[]; };
typedef struct sigmatopdown__lang_spec_s * sigmatopdown__lang_spec_t;

extern sigmatopdown__lang_spec_t new_sigmatopdown__lang_spec(uint32_t size);

extern void release_sigmatopdown__lang_spec(sigmatopdown__lang_spec_t x);

extern sigmatopdown__lang_spec_t copy_sigmatopdown__lang_spec(sigmatopdown__lang_spec_t x);

extern bool_t equal_sigmatopdown__lang_spec(sigmatopdown__lang_spec_t x, sigmatopdown__lang_spec_t y);
extern char * json_sigmatopdown__lang_spec(sigmatopdown__lang_spec_t x);

typedef struct actual_sigmatopdown__lang_spec_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown__lang_spec_t;
void release_sigmatopdown__lang_spec_ptr(pointer_t x, type_actual_t sigmatopdown__lang_spec);

extern bool_t equal_sigmatopdown__lang_spec_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatopdown__lang_spec_ptr(pointer_t x, type_actual_t T);

actual_sigmatopdown__lang_spec_t actual_sigmatopdown__lang_spec(void);

extern sigmatopdown__lang_spec_t update_sigmatopdown__lang_spec(sigmatopdown__lang_spec_t x, uint32_t i, sigmatopdown__peg_adt_t v);

extern sigmatopdown__lang_spec_t upgrade_sigmatopdown__lang_spec(sigmatopdown__lang_spec_t x, uint32_t i, sigmatopdown__peg_adt_t v);




struct sigmatopdown_closure_71_s;
        typedef struct sigmatopdown_closure_71_s * sigmatopdown_closure_71_t;

struct sigmatopdown_closure_71_s {uint32_t count;
         sigmatopdown_funtype_69_ftbl_t ftbl;
         sigmatopdown_funtype_69_htbl_t htbl;
        sigmatopdown_array_66_t fvar_1;
        uint32_t fvar_2;
        sigmatopdown__lang_spec_t fvar_3;};

bool_t f_sigmatopdown_closure_71(struct sigmatopdown_closure_71_s * closure, sigmatopdown_record_68_t bvar);

bool_t m_sigmatopdown_closure_71(struct sigmatopdown_closure_71_s * closure, sigmatopdown__ent_adt_t bvar_1, sigmatopdown__ent_adt_t bvar_2);

extern bool_t h_sigmatopdown_closure_71(sigmatopdown__ent_adt_t ivar_6, sigmatopdown__ent_adt_t ivar_7, sigmatopdown_array_66_t ivar_3, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2);

extern sigmatopdown_closure_71_t new_sigmatopdown_closure_71(void);

extern void release_sigmatopdown_closure_71(sigmatopdown_funtype_69_t closure);

extern sigmatopdown_closure_71_t copy_sigmatopdown_closure_71(sigmatopdown_closure_71_t x);


//sigma

struct sigmatopdown_funtype_72_s;
        typedef struct sigmatopdown_funtype_72_s * sigmatopdown_funtype_72_t;

struct sigmatopdown_funtype_72_ftbl_s {mpz_ptr_t (* fptr)(struct sigmatopdown_funtype_72_s *, uint32_t);
        mpz_ptr_t (* mptr)(struct sigmatopdown_funtype_72_s *, uint32_t);
        void (* rptr)(struct sigmatopdown_funtype_72_s *);
        struct sigmatopdown_funtype_72_s * (* cptr)(struct sigmatopdown_funtype_72_s *);};
typedef struct sigmatopdown_funtype_72_ftbl_s * sigmatopdown_funtype_72_ftbl_t;

struct sigmatopdown_funtype_72_hashentry_s {uint32_t keyhash; uint32_t key; mpz_t value;}; 
typedef struct sigmatopdown_funtype_72_hashentry_s sigmatopdown_funtype_72_hashentry_t;

struct sigmatopdown_funtype_72_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_72_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_72_htbl_s * sigmatopdown_funtype_72_htbl_t;

struct sigmatopdown_funtype_72_s {uint32_t count;
        sigmatopdown_funtype_72_ftbl_t ftbl;
        sigmatopdown_funtype_72_htbl_t htbl;};
typedef struct sigmatopdown_funtype_72_s * sigmatopdown_funtype_72_t;

extern void release_sigmatopdown_funtype_72(sigmatopdown_funtype_72_t x);

extern sigmatopdown_funtype_72_t copy_sigmatopdown_funtype_72(sigmatopdown_funtype_72_t x);

uint32_t lookup_sigmatopdown_funtype_72(sigmatopdown_funtype_72_htbl_t htbl, uint32_t i, uint32_t ihash);

sigmatopdown_funtype_72_t dupdate_sigmatopdown_funtype_72(sigmatopdown_funtype_72_t a, uint32_t i, mpz_ptr_t v);

extern sigmatopdown_funtype_72_t update_sigmatopdown_funtype_72(sigmatopdown_funtype_72_t a, uint32_t i, mpz_ptr_t v);

extern bool_t equal_sigmatopdown_funtype_72(sigmatopdown_funtype_72_t x, sigmatopdown_funtype_72_t y);

extern char* json_sigmatopdown_funtype_72(sigmatopdown_funtype_72_t x);


//sigma

struct sigmatopdown_array_73_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         mpz_ptr_t elems[]; };
typedef struct sigmatopdown_array_73_s * sigmatopdown_array_73_t;

extern sigmatopdown_array_73_t new_sigmatopdown_array_73(uint32_t size);

extern void release_sigmatopdown_array_73(sigmatopdown_array_73_t x);

extern sigmatopdown_array_73_t copy_sigmatopdown_array_73(sigmatopdown_array_73_t x);

extern bool_t equal_sigmatopdown_array_73(sigmatopdown_array_73_t x, sigmatopdown_array_73_t y);
extern char * json_sigmatopdown_array_73(sigmatopdown_array_73_t x);

typedef struct actual_sigmatopdown_array_73_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_array_73_t;
void release_sigmatopdown_array_73_ptr(pointer_t x, type_actual_t sigmatopdown_array_73);

extern bool_t equal_sigmatopdown_array_73_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatopdown_array_73_ptr(pointer_t x, type_actual_t T);

actual_sigmatopdown_array_73_t actual_sigmatopdown_array_73(void);

extern sigmatopdown_array_73_t update_sigmatopdown_array_73(sigmatopdown_array_73_t x, uint32_t i, mpz_t v);

extern sigmatopdown_array_73_t upgrade_sigmatopdown_array_73(sigmatopdown_array_73_t x, uint32_t i, mpz_t v);




struct sigmatopdown_closure_74_s;
        typedef struct sigmatopdown_closure_74_s * sigmatopdown_closure_74_t;

struct sigmatopdown_closure_74_s {uint32_t count;
         sigmatopdown_funtype_72_ftbl_t ftbl;
         sigmatopdown_funtype_72_htbl_t htbl;
        sigmatopdown_array_73_t fvar_1;
        uint32_t fvar_2;};

mpz_ptr_t f_sigmatopdown_closure_74(struct sigmatopdown_closure_74_s * closure, uint32_t bvar);

mpz_ptr_t m_sigmatopdown_closure_74(struct sigmatopdown_closure_74_s * closure, uint32_t bvar);

extern mpz_ptr_t h_sigmatopdown_closure_74(uint32_t ivar_4, sigmatopdown_array_73_t ivar_2, uint32_t ivar_1);

extern sigmatopdown_closure_74_t new_sigmatopdown_closure_74(void);

extern void release_sigmatopdown_closure_74(sigmatopdown_funtype_72_t closure);

extern sigmatopdown_closure_74_t copy_sigmatopdown_closure_74(sigmatopdown_closure_74_t x);


//scafcount

struct sigmatopdown_funtype_75_s;
        typedef struct sigmatopdown_funtype_75_s * sigmatopdown_funtype_75_t;

struct sigmatopdown_funtype_75_ftbl_s {uint8_t (* fptr)(struct sigmatopdown_funtype_75_s *, sigmatopdown_array_65_t);
        uint8_t (* mptr)(struct sigmatopdown_funtype_75_s *, sigmatopdown_array_65_t);
        void (* rptr)(struct sigmatopdown_funtype_75_s *);
        struct sigmatopdown_funtype_75_s * (* cptr)(struct sigmatopdown_funtype_75_s *);};
typedef struct sigmatopdown_funtype_75_ftbl_s * sigmatopdown_funtype_75_ftbl_t;

struct sigmatopdown_funtype_75_hashentry_s {uint32_t keyhash; sigmatopdown_array_65_t key; uint8_t value;}; 
typedef struct sigmatopdown_funtype_75_hashentry_s sigmatopdown_funtype_75_hashentry_t;

struct sigmatopdown_funtype_75_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_75_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_75_htbl_s * sigmatopdown_funtype_75_htbl_t;

struct sigmatopdown_funtype_75_s {uint32_t count;
        sigmatopdown_funtype_75_ftbl_t ftbl;
        sigmatopdown_funtype_75_htbl_t htbl;};
typedef struct sigmatopdown_funtype_75_s * sigmatopdown_funtype_75_t;

extern void release_sigmatopdown_funtype_75(sigmatopdown_funtype_75_t x);

extern sigmatopdown_funtype_75_t copy_sigmatopdown_funtype_75(sigmatopdown_funtype_75_t x);

extern bool_t equal_sigmatopdown_funtype_75(sigmatopdown_funtype_75_t x, sigmatopdown_funtype_75_t y);

extern char* json_sigmatopdown_funtype_75(sigmatopdown_funtype_75_t x);


//scafcount

struct sigmatopdown_funtype_76_s;
        typedef struct sigmatopdown_funtype_76_s * sigmatopdown_funtype_76_t;

struct sigmatopdown_funtype_76_ftbl_s {sigmatopdown_funtype_75_t (* fptr)(struct sigmatopdown_funtype_76_s *, sigmatopdown_funtype_59_t);
        sigmatopdown_funtype_75_t (* mptr)(struct sigmatopdown_funtype_76_s *, sigmatopdown_funtype_59_t);
        void (* rptr)(struct sigmatopdown_funtype_76_s *);
        struct sigmatopdown_funtype_76_s * (* cptr)(struct sigmatopdown_funtype_76_s *);};
typedef struct sigmatopdown_funtype_76_ftbl_s * sigmatopdown_funtype_76_ftbl_t;

struct sigmatopdown_funtype_76_hashentry_s {uint32_t keyhash; sigmatopdown_funtype_59_t key; sigmatopdown_funtype_75_t value;}; 
typedef struct sigmatopdown_funtype_76_hashentry_s sigmatopdown_funtype_76_hashentry_t;

struct sigmatopdown_funtype_76_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_76_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_76_htbl_s * sigmatopdown_funtype_76_htbl_t;

struct sigmatopdown_funtype_76_s {uint32_t count;
        sigmatopdown_funtype_76_ftbl_t ftbl;
        sigmatopdown_funtype_76_htbl_t htbl;};
typedef struct sigmatopdown_funtype_76_s * sigmatopdown_funtype_76_t;

extern void release_sigmatopdown_funtype_76(sigmatopdown_funtype_76_t x);

extern sigmatopdown_funtype_76_t copy_sigmatopdown_funtype_76(sigmatopdown_funtype_76_t x);

extern bool_t equal_sigmatopdown_funtype_76(sigmatopdown_funtype_76_t x, sigmatopdown_funtype_76_t y);

extern char* json_sigmatopdown_funtype_76(sigmatopdown_funtype_76_t x);




struct sigmatopdown_closure_77_s;
        typedef struct sigmatopdown_closure_77_s * sigmatopdown_closure_77_t;

struct sigmatopdown_closure_77_s {uint32_t count;
         sigmatopdown_funtype_59_ftbl_t ftbl;
         sigmatopdown_funtype_59_htbl_t htbl;};

bool_t f_sigmatopdown_closure_77(struct sigmatopdown_closure_77_s * closure, sigmatopdown__ent_adt_t bvar);

bool_t m_sigmatopdown_closure_77(struct sigmatopdown_closure_77_s * closure, sigmatopdown__ent_adt_t bvar);

extern bool_t h_sigmatopdown_closure_77(sigmatopdown__ent_adt_t ivar_19);

extern sigmatopdown_closure_77_t new_sigmatopdown_closure_77(void);

extern void release_sigmatopdown_closure_77(sigmatopdown_funtype_59_t closure);

extern sigmatopdown_closure_77_t copy_sigmatopdown_closure_77(sigmatopdown_closure_77_t x);




struct sigmatopdown_closure_78_s;
        typedef struct sigmatopdown_closure_78_s * sigmatopdown_closure_78_t;

struct sigmatopdown_closure_78_s {uint32_t count;
         sigmatopdown_funtype_59_ftbl_t ftbl;
         sigmatopdown_funtype_59_htbl_t htbl;};

bool_t f_sigmatopdown_closure_78(struct sigmatopdown_closure_78_s * closure, sigmatopdown__ent_adt_t bvar);

bool_t m_sigmatopdown_closure_78(struct sigmatopdown_closure_78_s * closure, sigmatopdown__ent_adt_t bvar);

extern bool_t h_sigmatopdown_closure_78(sigmatopdown__ent_adt_t ivar_9);

extern sigmatopdown_closure_78_t new_sigmatopdown_closure_78(void);

extern void release_sigmatopdown_closure_78(sigmatopdown_funtype_59_t closure);

extern sigmatopdown_closure_78_t copy_sigmatopdown_closure_78(sigmatopdown_closure_78_t x);


//good_depth?

struct sigmatopdown_funtype_79_s;
        typedef struct sigmatopdown_funtype_79_s * sigmatopdown_funtype_79_t;

struct sigmatopdown_funtype_79_ftbl_s {bool_t (* fptr)(struct sigmatopdown_funtype_79_s *, uint64_t);
        bool_t (* mptr)(struct sigmatopdown_funtype_79_s *, uint64_t);
        void (* rptr)(struct sigmatopdown_funtype_79_s *);
        struct sigmatopdown_funtype_79_s * (* cptr)(struct sigmatopdown_funtype_79_s *);};
typedef struct sigmatopdown_funtype_79_ftbl_s * sigmatopdown_funtype_79_ftbl_t;

struct sigmatopdown_funtype_79_hashentry_s {uint32_t keyhash; uint64_t key; bool_t value;}; 
typedef struct sigmatopdown_funtype_79_hashentry_s sigmatopdown_funtype_79_hashentry_t;

struct sigmatopdown_funtype_79_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_79_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_79_htbl_s * sigmatopdown_funtype_79_htbl_t;

struct sigmatopdown_funtype_79_s {uint32_t count;
        sigmatopdown_funtype_79_ftbl_t ftbl;
        sigmatopdown_funtype_79_htbl_t htbl;};
typedef struct sigmatopdown_funtype_79_s * sigmatopdown_funtype_79_t;

extern void release_sigmatopdown_funtype_79(sigmatopdown_funtype_79_t x);

extern sigmatopdown_funtype_79_t copy_sigmatopdown_funtype_79(sigmatopdown_funtype_79_t x);

uint32_t lookup_sigmatopdown_funtype_79(sigmatopdown_funtype_79_htbl_t htbl, uint64_t i, uint32_t ihash);

sigmatopdown_funtype_79_t dupdate_sigmatopdown_funtype_79(sigmatopdown_funtype_79_t a, uint64_t i, bool_t v);

extern sigmatopdown_funtype_79_t update_sigmatopdown_funtype_79(sigmatopdown_funtype_79_t a, uint64_t i, bool_t v);

extern bool_t equal_sigmatopdown_funtype_79(sigmatopdown_funtype_79_t x, sigmatopdown_funtype_79_t y);

extern char* json_sigmatopdown_funtype_79(sigmatopdown_funtype_79_t x);




struct sigmatopdown_closure_80_s;
        typedef struct sigmatopdown_closure_80_s * sigmatopdown_closure_80_t;

struct sigmatopdown_closure_80_s {uint32_t count;
         sigmatopdown_funtype_79_ftbl_t ftbl;
         sigmatopdown_funtype_79_htbl_t htbl;
        sigmatopdown_array_66_t fvar_1;
        uint32_t fvar_2;};

bool_t f_sigmatopdown_closure_80(struct sigmatopdown_closure_80_s * closure, uint64_t bvar);

bool_t m_sigmatopdown_closure_80(struct sigmatopdown_closure_80_s * closure, uint64_t bvar);

extern bool_t h_sigmatopdown_closure_80(uint64_t ivar_5, sigmatopdown_array_66_t ivar_2, uint32_t ivar_1);

extern sigmatopdown_closure_80_t new_sigmatopdown_closure_80(void);

extern void release_sigmatopdown_closure_80(sigmatopdown_funtype_79_t closure);

extern sigmatopdown_closure_80_t copy_sigmatopdown_closure_80(sigmatopdown_closure_80_t x);




struct sigmatopdown_closure_81_s;
        typedef struct sigmatopdown_closure_81_s * sigmatopdown_closure_81_t;

struct sigmatopdown_closure_81_s {uint32_t count;
         sigmatopdown_funtype_59_ftbl_t ftbl;
         sigmatopdown_funtype_59_htbl_t htbl;
        sigmatopdown_array_66_t fvar_1;
        uint32_t fvar_2;
        sigmatopdown__lang_spec_t fvar_3;
        uint64_t fvar_4;};

bool_t f_sigmatopdown_closure_81(struct sigmatopdown_closure_81_s * closure, sigmatopdown__ent_adt_t bvar);

bool_t m_sigmatopdown_closure_81(struct sigmatopdown_closure_81_s * closure, sigmatopdown__ent_adt_t bvar);

extern bool_t h_sigmatopdown_closure_81(sigmatopdown__ent_adt_t ivar_7, sigmatopdown_array_66_t ivar_4, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, uint64_t ivar_3);

extern sigmatopdown_closure_81_t new_sigmatopdown_closure_81(void);

extern void release_sigmatopdown_closure_81(sigmatopdown_funtype_59_t closure);

extern sigmatopdown_closure_81_t copy_sigmatopdown_closure_81(sigmatopdown_closure_81_t x);




struct sigmatopdown_closure_82_s;
        typedef struct sigmatopdown_closure_82_s * sigmatopdown_closure_82_t;

struct sigmatopdown_closure_82_s {uint32_t count;
         sigmatopdown_funtype_69_ftbl_t ftbl;
         sigmatopdown_funtype_69_htbl_t htbl;
        sigmatopdown_array_66_t fvar_1;
        uint32_t fvar_2;
        sigmatopdown__lang_spec_t fvar_3;
        uint64_t fvar_4;};

bool_t f_sigmatopdown_closure_82(struct sigmatopdown_closure_82_s * closure, sigmatopdown_record_68_t bvar);

bool_t m_sigmatopdown_closure_82(struct sigmatopdown_closure_82_s * closure, sigmatopdown__ent_adt_t bvar_1, sigmatopdown__ent_adt_t bvar_2);

extern bool_t h_sigmatopdown_closure_82(sigmatopdown__ent_adt_t ivar_7, sigmatopdown__ent_adt_t ivar_8, sigmatopdown_array_66_t ivar_4, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, uint64_t ivar_3);

extern sigmatopdown_closure_82_t new_sigmatopdown_closure_82(void);

extern void release_sigmatopdown_closure_82(sigmatopdown_funtype_69_t closure);

extern sigmatopdown_closure_82_t copy_sigmatopdown_closure_82(sigmatopdown_closure_82_t x);




struct sigmatopdown_closure_83_s;
        typedef struct sigmatopdown_closure_83_s * sigmatopdown_closure_83_t;

struct sigmatopdown_closure_83_s {uint32_t count;
         sigmatopdown_funtype_59_ftbl_t ftbl;
         sigmatopdown_funtype_59_htbl_t htbl;
        sigmatopdown_array_66_t fvar_1;
        uint32_t fvar_2;
        sigmatopdown__lang_spec_t fvar_3;
        uint64_t fvar_4;};

bool_t f_sigmatopdown_closure_83(struct sigmatopdown_closure_83_s * closure, sigmatopdown__ent_adt_t bvar);

bool_t m_sigmatopdown_closure_83(struct sigmatopdown_closure_83_s * closure, sigmatopdown__ent_adt_t bvar);

extern bool_t h_sigmatopdown_closure_83(sigmatopdown__ent_adt_t ivar_7, sigmatopdown_array_66_t ivar_4, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, uint64_t ivar_3);

extern sigmatopdown_closure_83_t new_sigmatopdown_closure_83(void);

extern void release_sigmatopdown_closure_83(sigmatopdown_funtype_59_t closure);

extern sigmatopdown_closure_83_t copy_sigmatopdown_closure_83(sigmatopdown_closure_83_t x);


//good_fail?

struct sigmatopdown_record_84_s {
        uint32_t count; 
        sigmatopdown_array_66_t project_1;
        uint32_t project_2;
        uint8_t project_3;
        uint64_t project_4;};
typedef struct sigmatopdown_record_84_s * sigmatopdown_record_84_t;

extern sigmatopdown_record_84_t new_sigmatopdown_record_84(void);

extern void release_sigmatopdown_record_84(sigmatopdown_record_84_t x);

extern sigmatopdown_record_84_t copy_sigmatopdown_record_84(sigmatopdown_record_84_t x);

extern bool_t equal_sigmatopdown_record_84(sigmatopdown_record_84_t x, sigmatopdown_record_84_t y);
extern char * json_sigmatopdown_record_84(sigmatopdown_record_84_t x);

typedef struct actual_sigmatopdown_record_84_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_record_84_t;
void release_sigmatopdown_record_84_ptr(pointer_t x, type_actual_t sigmatopdown_record_84);

extern bool_t equal_sigmatopdown_record_84_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_84_t T);

extern char * json_sigmatopdown_record_84_ptr(pointer_t x,  actual_sigmatopdown_record_84_t T);

actual_sigmatopdown_record_84_t actual_sigmatopdown_record_84(void);

extern sigmatopdown_record_84_t update_sigmatopdown_record_84_project_1(sigmatopdown_record_84_t x, sigmatopdown_array_66_t v);

extern sigmatopdown_record_84_t update_sigmatopdown_record_84_project_2(sigmatopdown_record_84_t x, uint32_t v);

extern sigmatopdown_record_84_t update_sigmatopdown_record_84_project_3(sigmatopdown_record_84_t x, uint8_t v);

extern sigmatopdown_record_84_t update_sigmatopdown_record_84_project_4(sigmatopdown_record_84_t x, uint64_t v);


//good_fail?

struct sigmatopdown_funtype_85_s;
        typedef struct sigmatopdown_funtype_85_s * sigmatopdown_funtype_85_t;

struct sigmatopdown_funtype_85_ftbl_s {bool_t (* fptr)(struct sigmatopdown_funtype_85_s *, sigmatopdown_record_84_t);
        bool_t (* mptr)(struct sigmatopdown_funtype_85_s *, sigmatopdown_array_66_t, uint32_t, uint8_t, uint64_t);
        void (* rptr)(struct sigmatopdown_funtype_85_s *);
        struct sigmatopdown_funtype_85_s * (* cptr)(struct sigmatopdown_funtype_85_s *);};
typedef struct sigmatopdown_funtype_85_ftbl_s * sigmatopdown_funtype_85_ftbl_t;

struct sigmatopdown_funtype_85_hashentry_s {uint32_t keyhash; sigmatopdown_record_84_t key; bool_t value;}; 
typedef struct sigmatopdown_funtype_85_hashentry_s sigmatopdown_funtype_85_hashentry_t;

struct sigmatopdown_funtype_85_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_85_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_85_htbl_s * sigmatopdown_funtype_85_htbl_t;

struct sigmatopdown_funtype_85_s {uint32_t count;
        sigmatopdown_funtype_85_ftbl_t ftbl;
        sigmatopdown_funtype_85_htbl_t htbl;};
typedef struct sigmatopdown_funtype_85_s * sigmatopdown_funtype_85_t;

extern void release_sigmatopdown_funtype_85(sigmatopdown_funtype_85_t x);

extern sigmatopdown_funtype_85_t copy_sigmatopdown_funtype_85(sigmatopdown_funtype_85_t x);

extern bool_t equal_sigmatopdown_funtype_85(sigmatopdown_funtype_85_t x, sigmatopdown_funtype_85_t y);

extern char* json_sigmatopdown_funtype_85(sigmatopdown_funtype_85_t x);


//good_fail?

struct sigmatopdown_array_86_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct sigmatopdown_array_86_s * sigmatopdown_array_86_t;

extern sigmatopdown_array_86_t new_sigmatopdown_array_86(uint32_t size);

extern void release_sigmatopdown_array_86(sigmatopdown_array_86_t x);

extern sigmatopdown_array_86_t copy_sigmatopdown_array_86(sigmatopdown_array_86_t x);

extern bool_t equal_sigmatopdown_array_86(sigmatopdown_array_86_t x, sigmatopdown_array_86_t y);
extern char * json_sigmatopdown_array_86(sigmatopdown_array_86_t x);

typedef struct actual_sigmatopdown_array_86_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_array_86_t;
void release_sigmatopdown_array_86_ptr(pointer_t x, type_actual_t sigmatopdown_array_86);

extern bool_t equal_sigmatopdown_array_86_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatopdown_array_86_ptr(pointer_t x, type_actual_t T);

actual_sigmatopdown_array_86_t actual_sigmatopdown_array_86(void);

extern sigmatopdown_array_86_t update_sigmatopdown_array_86(sigmatopdown_array_86_t x, uint32_t i, uint8_t v);

extern sigmatopdown_array_86_t upgrade_sigmatopdown_array_86(sigmatopdown_array_86_t x, uint32_t i, uint8_t v);




struct sigmatopdown_closure_87_s;
        typedef struct sigmatopdown_closure_87_s * sigmatopdown_closure_87_t;

struct sigmatopdown_closure_87_s {uint32_t count;
         sigmatopdown_funtype_85_ftbl_t ftbl;
         sigmatopdown_funtype_85_htbl_t htbl;
        sigmatopdown_array_86_t fvar_1;
        uint32_t fvar_2;
        sigmatopdown__lang_spec_t fvar_3;};

bool_t f_sigmatopdown_closure_87(struct sigmatopdown_closure_87_s * closure, sigmatopdown_record_84_t bvar);

bool_t m_sigmatopdown_closure_87(struct sigmatopdown_closure_87_s * closure, sigmatopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4);

extern bool_t h_sigmatopdown_closure_87(sigmatopdown_array_66_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, uint64_t ivar_10, sigmatopdown_array_86_t ivar_3, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2);

extern sigmatopdown_closure_87_t new_sigmatopdown_closure_87(void);

extern void release_sigmatopdown_closure_87(sigmatopdown_funtype_85_t closure);

extern sigmatopdown_closure_87_t copy_sigmatopdown_closure_87(sigmatopdown_closure_87_t x);


//good_loop?

struct sigmatopdown_record_88_s {
        uint32_t count; 
        sigmatopdown_array_66_t project_1;
        uint32_t project_2;
        uint8_t project_3;};
typedef struct sigmatopdown_record_88_s * sigmatopdown_record_88_t;

extern sigmatopdown_record_88_t new_sigmatopdown_record_88(void);

extern void release_sigmatopdown_record_88(sigmatopdown_record_88_t x);

extern sigmatopdown_record_88_t copy_sigmatopdown_record_88(sigmatopdown_record_88_t x);

extern bool_t equal_sigmatopdown_record_88(sigmatopdown_record_88_t x, sigmatopdown_record_88_t y);
extern char * json_sigmatopdown_record_88(sigmatopdown_record_88_t x);

typedef struct actual_sigmatopdown_record_88_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_record_88_t;
void release_sigmatopdown_record_88_ptr(pointer_t x, type_actual_t sigmatopdown_record_88);

extern bool_t equal_sigmatopdown_record_88_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_88_t T);

extern char * json_sigmatopdown_record_88_ptr(pointer_t x,  actual_sigmatopdown_record_88_t T);

actual_sigmatopdown_record_88_t actual_sigmatopdown_record_88(void);

extern sigmatopdown_record_88_t update_sigmatopdown_record_88_project_1(sigmatopdown_record_88_t x, sigmatopdown_array_66_t v);

extern sigmatopdown_record_88_t update_sigmatopdown_record_88_project_2(sigmatopdown_record_88_t x, uint32_t v);

extern sigmatopdown_record_88_t update_sigmatopdown_record_88_project_3(sigmatopdown_record_88_t x, uint8_t v);


//good_loop?

struct sigmatopdown_funtype_89_s;
        typedef struct sigmatopdown_funtype_89_s * sigmatopdown_funtype_89_t;

struct sigmatopdown_funtype_89_ftbl_s {bool_t (* fptr)(struct sigmatopdown_funtype_89_s *, sigmatopdown_record_88_t);
        bool_t (* mptr)(struct sigmatopdown_funtype_89_s *, sigmatopdown_array_66_t, uint32_t, uint8_t);
        void (* rptr)(struct sigmatopdown_funtype_89_s *);
        struct sigmatopdown_funtype_89_s * (* cptr)(struct sigmatopdown_funtype_89_s *);};
typedef struct sigmatopdown_funtype_89_ftbl_s * sigmatopdown_funtype_89_ftbl_t;

struct sigmatopdown_funtype_89_hashentry_s {uint32_t keyhash; sigmatopdown_record_88_t key; bool_t value;}; 
typedef struct sigmatopdown_funtype_89_hashentry_s sigmatopdown_funtype_89_hashentry_t;

struct sigmatopdown_funtype_89_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_89_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_89_htbl_s * sigmatopdown_funtype_89_htbl_t;

struct sigmatopdown_funtype_89_s {uint32_t count;
        sigmatopdown_funtype_89_ftbl_t ftbl;
        sigmatopdown_funtype_89_htbl_t htbl;};
typedef struct sigmatopdown_funtype_89_s * sigmatopdown_funtype_89_t;

extern void release_sigmatopdown_funtype_89(sigmatopdown_funtype_89_t x);

extern sigmatopdown_funtype_89_t copy_sigmatopdown_funtype_89(sigmatopdown_funtype_89_t x);

extern bool_t equal_sigmatopdown_funtype_89(sigmatopdown_funtype_89_t x, sigmatopdown_funtype_89_t y);

extern char* json_sigmatopdown_funtype_89(sigmatopdown_funtype_89_t x);




struct sigmatopdown_closure_90_s;
        typedef struct sigmatopdown_closure_90_s * sigmatopdown_closure_90_t;

struct sigmatopdown_closure_90_s {uint32_t count;
         sigmatopdown_funtype_89_ftbl_t ftbl;
         sigmatopdown_funtype_89_htbl_t htbl;
        uint32_t fvar_1;
        sigmatopdown__lang_spec_t fvar_2;};

bool_t f_sigmatopdown_closure_90(struct sigmatopdown_closure_90_s * closure, sigmatopdown_record_88_t bvar);

bool_t m_sigmatopdown_closure_90(struct sigmatopdown_closure_90_s * closure, sigmatopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3);

extern bool_t h_sigmatopdown_closure_90(sigmatopdown_array_66_t ivar_5, uint32_t ivar_7, uint8_t ivar_8, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2);

extern sigmatopdown_closure_90_t new_sigmatopdown_closure_90(void);

extern void release_sigmatopdown_closure_90(sigmatopdown_funtype_89_t closure);

extern sigmatopdown_closure_90_t copy_sigmatopdown_closure_90(sigmatopdown_closure_90_t x);


//good_good?

struct sigmatopdown_record_91_s {
        uint32_t count; 
        sigmatopdown_array_66_t project_1;
        uint32_t project_2;
        uint8_t project_3;
        uint64_t project_4;
        mpz_t project_5;};
typedef struct sigmatopdown_record_91_s * sigmatopdown_record_91_t;

extern sigmatopdown_record_91_t new_sigmatopdown_record_91(void);

extern void release_sigmatopdown_record_91(sigmatopdown_record_91_t x);

extern sigmatopdown_record_91_t copy_sigmatopdown_record_91(sigmatopdown_record_91_t x);

extern bool_t equal_sigmatopdown_record_91(sigmatopdown_record_91_t x, sigmatopdown_record_91_t y);
extern char * json_sigmatopdown_record_91(sigmatopdown_record_91_t x);

typedef struct actual_sigmatopdown_record_91_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_record_91_t;
void release_sigmatopdown_record_91_ptr(pointer_t x, type_actual_t sigmatopdown_record_91);

extern bool_t equal_sigmatopdown_record_91_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_91_t T);

extern char * json_sigmatopdown_record_91_ptr(pointer_t x,  actual_sigmatopdown_record_91_t T);

actual_sigmatopdown_record_91_t actual_sigmatopdown_record_91(void);

extern sigmatopdown_record_91_t update_sigmatopdown_record_91_project_1(sigmatopdown_record_91_t x, sigmatopdown_array_66_t v);

extern sigmatopdown_record_91_t update_sigmatopdown_record_91_project_2(sigmatopdown_record_91_t x, uint32_t v);

extern sigmatopdown_record_91_t update_sigmatopdown_record_91_project_3(sigmatopdown_record_91_t x, uint8_t v);

extern sigmatopdown_record_91_t update_sigmatopdown_record_91_project_4(sigmatopdown_record_91_t x, uint64_t v);

extern sigmatopdown_record_91_t update_sigmatopdown_record_91_project_5(sigmatopdown_record_91_t x, mpz_ptr_t v);


//good_good?

struct sigmatopdown_funtype_92_s;
        typedef struct sigmatopdown_funtype_92_s * sigmatopdown_funtype_92_t;

struct sigmatopdown_funtype_92_ftbl_s {bool_t (* fptr)(struct sigmatopdown_funtype_92_s *, sigmatopdown_record_91_t);
        bool_t (* mptr)(struct sigmatopdown_funtype_92_s *, sigmatopdown_array_66_t, uint32_t, uint8_t, uint64_t, mpz_ptr_t);
        void (* rptr)(struct sigmatopdown_funtype_92_s *);
        struct sigmatopdown_funtype_92_s * (* cptr)(struct sigmatopdown_funtype_92_s *);};
typedef struct sigmatopdown_funtype_92_ftbl_s * sigmatopdown_funtype_92_ftbl_t;

struct sigmatopdown_funtype_92_hashentry_s {uint32_t keyhash; sigmatopdown_record_91_t key; bool_t value;}; 
typedef struct sigmatopdown_funtype_92_hashentry_s sigmatopdown_funtype_92_hashentry_t;

struct sigmatopdown_funtype_92_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_92_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_92_htbl_s * sigmatopdown_funtype_92_htbl_t;

struct sigmatopdown_funtype_92_s {uint32_t count;
        sigmatopdown_funtype_92_ftbl_t ftbl;
        sigmatopdown_funtype_92_htbl_t htbl;};
typedef struct sigmatopdown_funtype_92_s * sigmatopdown_funtype_92_t;

extern void release_sigmatopdown_funtype_92(sigmatopdown_funtype_92_t x);

extern sigmatopdown_funtype_92_t copy_sigmatopdown_funtype_92(sigmatopdown_funtype_92_t x);

extern bool_t equal_sigmatopdown_funtype_92(sigmatopdown_funtype_92_t x, sigmatopdown_funtype_92_t y);

extern char* json_sigmatopdown_funtype_92(sigmatopdown_funtype_92_t x);




struct sigmatopdown_closure_93_s;
        typedef struct sigmatopdown_closure_93_s * sigmatopdown_closure_93_t;

struct sigmatopdown_closure_93_s {uint32_t count;
         sigmatopdown_funtype_92_ftbl_t ftbl;
         sigmatopdown_funtype_92_htbl_t htbl;
        sigmatopdown_array_86_t fvar_1;
        uint32_t fvar_2;
        sigmatopdown__lang_spec_t fvar_3;};

bool_t f_sigmatopdown_closure_93(struct sigmatopdown_closure_93_s * closure, sigmatopdown_record_91_t bvar);

bool_t m_sigmatopdown_closure_93(struct sigmatopdown_closure_93_s * closure, sigmatopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4, mpz_ptr_t bvar_5);

extern bool_t h_sigmatopdown_closure_93(sigmatopdown_array_66_t ivar_9, uint32_t ivar_11, uint8_t ivar_12, uint64_t ivar_13, mpz_ptr_t ivar_14, sigmatopdown_array_86_t ivar_3, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2);

extern sigmatopdown_closure_93_t new_sigmatopdown_closure_93(void);

extern void release_sigmatopdown_closure_93(sigmatopdown_funtype_92_t closure);

extern sigmatopdown_closure_93_t copy_sigmatopdown_closure_93(sigmatopdown_closure_93_t x);


//good_entry?

struct sigmatopdown_record_94_s {
        uint32_t count; 
        sigmatopdown_array_66_t project_1;
        uint32_t project_2;
        uint8_t project_3;
        sigmatopdown__ent_adt_t project_4;};
typedef struct sigmatopdown_record_94_s * sigmatopdown_record_94_t;

extern sigmatopdown_record_94_t new_sigmatopdown_record_94(void);

extern void release_sigmatopdown_record_94(sigmatopdown_record_94_t x);

extern sigmatopdown_record_94_t copy_sigmatopdown_record_94(sigmatopdown_record_94_t x);

extern bool_t equal_sigmatopdown_record_94(sigmatopdown_record_94_t x, sigmatopdown_record_94_t y);
extern char * json_sigmatopdown_record_94(sigmatopdown_record_94_t x);

typedef struct actual_sigmatopdown_record_94_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_record_94_t;
void release_sigmatopdown_record_94_ptr(pointer_t x, type_actual_t sigmatopdown_record_94);

extern bool_t equal_sigmatopdown_record_94_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_94_t T);

extern char * json_sigmatopdown_record_94_ptr(pointer_t x,  actual_sigmatopdown_record_94_t T);

actual_sigmatopdown_record_94_t actual_sigmatopdown_record_94(void);

extern sigmatopdown_record_94_t update_sigmatopdown_record_94_project_1(sigmatopdown_record_94_t x, sigmatopdown_array_66_t v);

extern sigmatopdown_record_94_t update_sigmatopdown_record_94_project_2(sigmatopdown_record_94_t x, uint32_t v);

extern sigmatopdown_record_94_t update_sigmatopdown_record_94_project_3(sigmatopdown_record_94_t x, uint8_t v);

extern sigmatopdown_record_94_t update_sigmatopdown_record_94_project_4(sigmatopdown_record_94_t x, sigmatopdown__ent_adt_t v);


//good_entry?

struct sigmatopdown_funtype_95_s;
        typedef struct sigmatopdown_funtype_95_s * sigmatopdown_funtype_95_t;

struct sigmatopdown_funtype_95_ftbl_s {bool_t (* fptr)(struct sigmatopdown_funtype_95_s *, sigmatopdown_record_94_t);
        bool_t (* mptr)(struct sigmatopdown_funtype_95_s *, sigmatopdown_array_66_t, uint32_t, uint8_t, sigmatopdown__ent_adt_t);
        void (* rptr)(struct sigmatopdown_funtype_95_s *);
        struct sigmatopdown_funtype_95_s * (* cptr)(struct sigmatopdown_funtype_95_s *);};
typedef struct sigmatopdown_funtype_95_ftbl_s * sigmatopdown_funtype_95_ftbl_t;

struct sigmatopdown_funtype_95_hashentry_s {uint32_t keyhash; sigmatopdown_record_94_t key; bool_t value;}; 
typedef struct sigmatopdown_funtype_95_hashentry_s sigmatopdown_funtype_95_hashentry_t;

struct sigmatopdown_funtype_95_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_95_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_95_htbl_s * sigmatopdown_funtype_95_htbl_t;

struct sigmatopdown_funtype_95_s {uint32_t count;
        sigmatopdown_funtype_95_ftbl_t ftbl;
        sigmatopdown_funtype_95_htbl_t htbl;};
typedef struct sigmatopdown_funtype_95_s * sigmatopdown_funtype_95_t;

extern void release_sigmatopdown_funtype_95(sigmatopdown_funtype_95_t x);

extern sigmatopdown_funtype_95_t copy_sigmatopdown_funtype_95(sigmatopdown_funtype_95_t x);

extern bool_t equal_sigmatopdown_funtype_95(sigmatopdown_funtype_95_t x, sigmatopdown_funtype_95_t y);

extern char* json_sigmatopdown_funtype_95(sigmatopdown_funtype_95_t x);




struct sigmatopdown_closure_96_s;
        typedef struct sigmatopdown_closure_96_s * sigmatopdown_closure_96_t;

struct sigmatopdown_closure_96_s {uint32_t count;
         sigmatopdown_funtype_95_ftbl_t ftbl;
         sigmatopdown_funtype_95_htbl_t htbl;
        uint32_t fvar_1;
        sigmatopdown__lang_spec_t fvar_2;
        sigmatopdown_array_86_t fvar_3;};

bool_t f_sigmatopdown_closure_96(struct sigmatopdown_closure_96_s * closure, sigmatopdown_record_94_t bvar);

bool_t m_sigmatopdown_closure_96(struct sigmatopdown_closure_96_s * closure, sigmatopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, sigmatopdown__ent_adt_t bvar_4);

extern bool_t h_sigmatopdown_closure_96(sigmatopdown_array_66_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, sigmatopdown__ent_adt_t ivar_10, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3);

extern sigmatopdown_closure_96_t new_sigmatopdown_closure_96(void);

extern void release_sigmatopdown_closure_96(sigmatopdown_funtype_95_t closure);

extern sigmatopdown_closure_96_t copy_sigmatopdown_closure_96(sigmatopdown_closure_96_t x);




struct sigmatopdown_closure_97_s;
        typedef struct sigmatopdown_closure_97_s * sigmatopdown_closure_97_t;

struct sigmatopdown_closure_97_s {uint32_t count;
         sigmatopdown_funtype_95_ftbl_t ftbl;
         sigmatopdown_funtype_95_htbl_t htbl;
        uint32_t fvar_1;
        sigmatopdown__lang_spec_t fvar_2;
        sigmatopdown_array_86_t fvar_3;};

bool_t f_sigmatopdown_closure_97(struct sigmatopdown_closure_97_s * closure, sigmatopdown_record_94_t bvar);

bool_t m_sigmatopdown_closure_97(struct sigmatopdown_closure_97_s * closure, sigmatopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, sigmatopdown__ent_adt_t bvar_4);

extern bool_t h_sigmatopdown_closure_97(sigmatopdown_array_66_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, sigmatopdown__ent_adt_t ivar_10, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3);

extern sigmatopdown_closure_97_t new_sigmatopdown_closure_97(void);

extern void release_sigmatopdown_closure_97(sigmatopdown_funtype_95_t closure);

extern sigmatopdown_closure_97_t copy_sigmatopdown_closure_97(sigmatopdown_closure_97_t x);


//good_tscaffold?

struct sigmatopdown_funtype_98_s;
        typedef struct sigmatopdown_funtype_98_s * sigmatopdown_funtype_98_t;

struct sigmatopdown_funtype_98_ftbl_s {bool_t (* fptr)(struct sigmatopdown_funtype_98_s *, sigmatopdown_array_66_t);
        bool_t (* mptr)(struct sigmatopdown_funtype_98_s *, sigmatopdown_array_66_t);
        void (* rptr)(struct sigmatopdown_funtype_98_s *);
        struct sigmatopdown_funtype_98_s * (* cptr)(struct sigmatopdown_funtype_98_s *);};
typedef struct sigmatopdown_funtype_98_ftbl_s * sigmatopdown_funtype_98_ftbl_t;

struct sigmatopdown_funtype_98_hashentry_s {uint32_t keyhash; sigmatopdown_array_66_t key; bool_t value;}; 
typedef struct sigmatopdown_funtype_98_hashentry_s sigmatopdown_funtype_98_hashentry_t;

struct sigmatopdown_funtype_98_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_98_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_98_htbl_s * sigmatopdown_funtype_98_htbl_t;

struct sigmatopdown_funtype_98_s {uint32_t count;
        sigmatopdown_funtype_98_ftbl_t ftbl;
        sigmatopdown_funtype_98_htbl_t htbl;};
typedef struct sigmatopdown_funtype_98_s * sigmatopdown_funtype_98_t;

extern void release_sigmatopdown_funtype_98(sigmatopdown_funtype_98_t x);

extern sigmatopdown_funtype_98_t copy_sigmatopdown_funtype_98(sigmatopdown_funtype_98_t x);

extern bool_t equal_sigmatopdown_funtype_98(sigmatopdown_funtype_98_t x, sigmatopdown_funtype_98_t y);

extern char* json_sigmatopdown_funtype_98(sigmatopdown_funtype_98_t x);




struct sigmatopdown_closure_99_s;
        typedef struct sigmatopdown_closure_99_s * sigmatopdown_closure_99_t;

struct sigmatopdown_closure_99_s {uint32_t count;
         sigmatopdown_funtype_98_ftbl_t ftbl;
         sigmatopdown_funtype_98_htbl_t htbl;
        uint32_t fvar_1;};

bool_t f_sigmatopdown_closure_99(struct sigmatopdown_closure_99_s * closure, sigmatopdown_array_66_t bvar);

bool_t m_sigmatopdown_closure_99(struct sigmatopdown_closure_99_s * closure, sigmatopdown_array_66_t bvar);

extern bool_t h_sigmatopdown_closure_99(sigmatopdown_array_66_t ivar_6, uint32_t ivar_1);

extern sigmatopdown_closure_99_t new_sigmatopdown_closure_99(void);

extern void release_sigmatopdown_closure_99(sigmatopdown_funtype_98_t closure);

extern sigmatopdown_closure_99_t copy_sigmatopdown_closure_99(sigmatopdown_closure_99_t x);




struct sigmatopdown_closure_100_s;
        typedef struct sigmatopdown_closure_100_s * sigmatopdown_closure_100_t;

struct sigmatopdown_closure_100_s {uint32_t count;
         sigmatopdown_funtype_64_ftbl_t ftbl;
         sigmatopdown_funtype_64_htbl_t htbl;
        sigmatopdown_array_66_t fvar_1;
        uint32_t fvar_2;};

bool_t f_sigmatopdown_closure_100(struct sigmatopdown_closure_100_s * closure, sigmatopdown_record_9_t bvar);

bool_t m_sigmatopdown_closure_100(struct sigmatopdown_closure_100_s * closure, uint32_t bvar_1, uint8_t bvar_2);

extern bool_t h_sigmatopdown_closure_100(uint32_t ivar_5, uint8_t ivar_6, sigmatopdown_array_66_t ivar_2, uint32_t ivar_1);

extern sigmatopdown_closure_100_t new_sigmatopdown_closure_100(void);

extern void release_sigmatopdown_closure_100(sigmatopdown_funtype_64_t closure);

extern sigmatopdown_closure_100_t copy_sigmatopdown_closure_100(sigmatopdown_closure_100_t x);


//fine_scaffold?

struct sigmatopdown_funtype_101_s;
        typedef struct sigmatopdown_funtype_101_s * sigmatopdown_funtype_101_t;

struct sigmatopdown_funtype_101_ftbl_s {sigmatopdown_funtype_98_t (* fptr)(struct sigmatopdown_funtype_101_s *, sigmatopdown_record_9_t);
        sigmatopdown_funtype_98_t (* mptr)(struct sigmatopdown_funtype_101_s *, uint32_t, uint8_t);
        void (* rptr)(struct sigmatopdown_funtype_101_s *);
        struct sigmatopdown_funtype_101_s * (* cptr)(struct sigmatopdown_funtype_101_s *);};
typedef struct sigmatopdown_funtype_101_ftbl_s * sigmatopdown_funtype_101_ftbl_t;

struct sigmatopdown_funtype_101_hashentry_s {uint32_t keyhash; sigmatopdown_record_9_t key; sigmatopdown_funtype_98_t value;}; 
typedef struct sigmatopdown_funtype_101_hashentry_s sigmatopdown_funtype_101_hashentry_t;

struct sigmatopdown_funtype_101_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_101_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_101_htbl_s * sigmatopdown_funtype_101_htbl_t;

struct sigmatopdown_funtype_101_s {uint32_t count;
        sigmatopdown_funtype_101_ftbl_t ftbl;
        sigmatopdown_funtype_101_htbl_t htbl;};
typedef struct sigmatopdown_funtype_101_s * sigmatopdown_funtype_101_t;

extern void release_sigmatopdown_funtype_101(sigmatopdown_funtype_101_t x);

extern sigmatopdown_funtype_101_t copy_sigmatopdown_funtype_101(sigmatopdown_funtype_101_t x);

extern bool_t equal_sigmatopdown_funtype_101(sigmatopdown_funtype_101_t x, sigmatopdown_funtype_101_t y);

extern char* json_sigmatopdown_funtype_101(sigmatopdown_funtype_101_t x);




struct sigmatopdown_closure_102_s;
        typedef struct sigmatopdown_closure_102_s * sigmatopdown_closure_102_t;

struct sigmatopdown_closure_102_s {uint32_t count;
         sigmatopdown_funtype_101_ftbl_t ftbl;
         sigmatopdown_funtype_101_htbl_t htbl;
        sigmatopdown_array_86_t fvar_1;
        sigmatopdown__lang_spec_t fvar_2;
        uint32_t fvar_3;};

sigmatopdown_funtype_98_t f_sigmatopdown_closure_102(struct sigmatopdown_closure_102_s * closure, sigmatopdown_record_9_t bvar);

sigmatopdown_funtype_98_t m_sigmatopdown_closure_102(struct sigmatopdown_closure_102_s * closure, uint32_t bvar_1, uint8_t bvar_2);

extern sigmatopdown_funtype_98_t h_sigmatopdown_closure_102(uint32_t ivar_7, uint8_t ivar_8, sigmatopdown_array_86_t ivar_3, sigmatopdown__lang_spec_t ivar_2, uint32_t ivar_1);

extern sigmatopdown_closure_102_t new_sigmatopdown_closure_102(void);

extern void release_sigmatopdown_closure_102(sigmatopdown_funtype_101_t closure);

extern sigmatopdown_closure_102_t copy_sigmatopdown_closure_102(sigmatopdown_closure_102_t x);




struct sigmatopdown_closure_103_s;
        typedef struct sigmatopdown_closure_103_s * sigmatopdown_closure_103_t;

struct sigmatopdown_closure_103_s {uint32_t count;
         sigmatopdown_funtype_98_ftbl_t ftbl;
         sigmatopdown_funtype_98_htbl_t htbl;
        uint32_t fvar_1;
        uint32_t fvar_2;
        uint8_t fvar_3;
        sigmatopdown__lang_spec_t fvar_4;
        sigmatopdown_array_86_t fvar_5;};

bool_t f_sigmatopdown_closure_103(struct sigmatopdown_closure_103_s * closure, sigmatopdown_array_66_t bvar);

bool_t m_sigmatopdown_closure_103(struct sigmatopdown_closure_103_s * closure, sigmatopdown_array_66_t bvar);

extern bool_t h_sigmatopdown_closure_103(sigmatopdown_array_66_t ivar_11, uint32_t ivar_7, uint32_t ivar_1, uint8_t ivar_8, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3);

extern sigmatopdown_closure_103_t new_sigmatopdown_closure_103(void);

extern void release_sigmatopdown_closure_103(sigmatopdown_funtype_98_t closure);

extern sigmatopdown_closure_103_t copy_sigmatopdown_closure_103(sigmatopdown_closure_103_t x);


//step

struct sigmatopdown_record_104_s {
        uint32_t count; 
        sigmatopdown_array_66_t scaf;
        uint64_t depth;
        sigmatopdown__ent_adt_t stack;
        bool_t lflag;};
typedef struct sigmatopdown_record_104_s * sigmatopdown_record_104_t;

extern sigmatopdown_record_104_t new_sigmatopdown_record_104(void);

extern void release_sigmatopdown_record_104(sigmatopdown_record_104_t x);

extern sigmatopdown_record_104_t copy_sigmatopdown_record_104(sigmatopdown_record_104_t x);

extern bool_t equal_sigmatopdown_record_104(sigmatopdown_record_104_t x, sigmatopdown_record_104_t y);
extern char * json_sigmatopdown_record_104(sigmatopdown_record_104_t x);

typedef struct actual_sigmatopdown_record_104_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_record_104_t;
void release_sigmatopdown_record_104_ptr(pointer_t x, type_actual_t sigmatopdown_record_104);

extern bool_t equal_sigmatopdown_record_104_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_104_t T);

extern char * json_sigmatopdown_record_104_ptr(pointer_t x,  actual_sigmatopdown_record_104_t T);

actual_sigmatopdown_record_104_t actual_sigmatopdown_record_104(void);

extern sigmatopdown_record_104_t update_sigmatopdown_record_104_scaf(sigmatopdown_record_104_t x, sigmatopdown_array_66_t v);

extern sigmatopdown_record_104_t update_sigmatopdown_record_104_depth(sigmatopdown_record_104_t x, uint64_t v);

extern sigmatopdown_record_104_t update_sigmatopdown_record_104_stack(sigmatopdown_record_104_t x, sigmatopdown__ent_adt_t v);

extern sigmatopdown_record_104_t update_sigmatopdown_record_104_lflag(sigmatopdown_record_104_t x, bool_t v);


//step

struct sigmatopdown_funtype_105_s;
        typedef struct sigmatopdown_funtype_105_s * sigmatopdown_funtype_105_t;

struct sigmatopdown_funtype_105_ftbl_s {sigmatopdown_record_104_t (* fptr)(struct sigmatopdown_funtype_105_s *, sigmatopdown_record_104_t);
        sigmatopdown_record_104_t (* mptr)(struct sigmatopdown_funtype_105_s *, sigmatopdown_record_104_t);
        void (* rptr)(struct sigmatopdown_funtype_105_s *);
        struct sigmatopdown_funtype_105_s * (* cptr)(struct sigmatopdown_funtype_105_s *);};
typedef struct sigmatopdown_funtype_105_ftbl_s * sigmatopdown_funtype_105_ftbl_t;

struct sigmatopdown_funtype_105_hashentry_s {uint32_t keyhash; sigmatopdown_record_104_t key; sigmatopdown_record_104_t value;}; 
typedef struct sigmatopdown_funtype_105_hashentry_s sigmatopdown_funtype_105_hashentry_t;

struct sigmatopdown_funtype_105_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_105_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_105_htbl_s * sigmatopdown_funtype_105_htbl_t;

struct sigmatopdown_funtype_105_s {uint32_t count;
        sigmatopdown_funtype_105_ftbl_t ftbl;
        sigmatopdown_funtype_105_htbl_t htbl;};
typedef struct sigmatopdown_funtype_105_s * sigmatopdown_funtype_105_t;

extern void release_sigmatopdown_funtype_105(sigmatopdown_funtype_105_t x);

extern sigmatopdown_funtype_105_t copy_sigmatopdown_funtype_105(sigmatopdown_funtype_105_t x);

extern bool_t equal_sigmatopdown_funtype_105(sigmatopdown_funtype_105_t x, sigmatopdown_funtype_105_t y);

extern char* json_sigmatopdown_funtype_105(sigmatopdown_funtype_105_t x);




struct sigmatopdown_closure_106_s;
        typedef struct sigmatopdown_closure_106_s * sigmatopdown_closure_106_t;

struct sigmatopdown_closure_106_s {uint32_t count;
         sigmatopdown_funtype_105_ftbl_t ftbl;
         sigmatopdown_funtype_105_htbl_t htbl;
        uint32_t fvar_1;
        sigmatopdown_array_86_t fvar_2;
        sigmatopdown__lang_spec_t fvar_3;};

sigmatopdown_record_104_t f_sigmatopdown_closure_106(struct sigmatopdown_closure_106_s * closure, sigmatopdown_record_104_t bvar);

sigmatopdown_record_104_t m_sigmatopdown_closure_106(struct sigmatopdown_closure_106_s * closure, sigmatopdown_record_104_t bvar);

extern sigmatopdown_record_104_t h_sigmatopdown_closure_106(sigmatopdown_record_104_t ivar_9, uint32_t ivar_1, sigmatopdown_array_86_t ivar_3, sigmatopdown__lang_spec_t ivar_2);

extern sigmatopdown_closure_106_t new_sigmatopdown_closure_106(void);

extern void release_sigmatopdown_closure_106(sigmatopdown_funtype_105_t closure);

extern sigmatopdown_closure_106_t copy_sigmatopdown_closure_106(sigmatopdown_closure_106_t x);


//step

struct sigmatopdown_array_107_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         sigmatopdown__ent_adt_t elems[]; };
typedef struct sigmatopdown_array_107_s * sigmatopdown_array_107_t;

extern sigmatopdown_array_107_t new_sigmatopdown_array_107(uint32_t size);

extern void release_sigmatopdown_array_107(sigmatopdown_array_107_t x);

extern sigmatopdown_array_107_t copy_sigmatopdown_array_107(sigmatopdown_array_107_t x);

extern bool_t equal_sigmatopdown_array_107(sigmatopdown_array_107_t x, sigmatopdown_array_107_t y);
extern char * json_sigmatopdown_array_107(sigmatopdown_array_107_t x);

typedef struct actual_sigmatopdown_array_107_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_array_107_t;
void release_sigmatopdown_array_107_ptr(pointer_t x, type_actual_t sigmatopdown_array_107);

extern bool_t equal_sigmatopdown_array_107_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatopdown_array_107_ptr(pointer_t x, type_actual_t T);

actual_sigmatopdown_array_107_t actual_sigmatopdown_array_107(void);

extern sigmatopdown_array_107_t update_sigmatopdown_array_107(sigmatopdown_array_107_t x, uint32_t i, sigmatopdown__ent_adt_t v);

extern sigmatopdown_array_107_t upgrade_sigmatopdown_array_107(sigmatopdown_array_107_t x, uint32_t i, sigmatopdown__ent_adt_t v);


//size

struct sigmatopdown_funtype_108_s;
        typedef struct sigmatopdown_funtype_108_s * sigmatopdown_funtype_108_t;

struct sigmatopdown_funtype_108_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct sigmatopdown_funtype_108_s *, sigmatopdown_record_104_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct sigmatopdown_funtype_108_s *, sigmatopdown_record_104_t);
        void (* rptr)(struct sigmatopdown_funtype_108_s *);
        struct sigmatopdown_funtype_108_s * (* cptr)(struct sigmatopdown_funtype_108_s *);};
typedef struct sigmatopdown_funtype_108_ftbl_s * sigmatopdown_funtype_108_ftbl_t;

struct sigmatopdown_funtype_108_hashentry_s {uint32_t keyhash; sigmatopdown_record_104_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct sigmatopdown_funtype_108_hashentry_s sigmatopdown_funtype_108_hashentry_t;

struct sigmatopdown_funtype_108_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_108_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_108_htbl_s * sigmatopdown_funtype_108_htbl_t;

struct sigmatopdown_funtype_108_s {uint32_t count;
        sigmatopdown_funtype_108_ftbl_t ftbl;
        sigmatopdown_funtype_108_htbl_t htbl;};
typedef struct sigmatopdown_funtype_108_s * sigmatopdown_funtype_108_t;

extern void release_sigmatopdown_funtype_108(sigmatopdown_funtype_108_t x);

extern sigmatopdown_funtype_108_t copy_sigmatopdown_funtype_108(sigmatopdown_funtype_108_t x);

extern bool_t equal_sigmatopdown_funtype_108(sigmatopdown_funtype_108_t x, sigmatopdown_funtype_108_t y);

extern char* json_sigmatopdown_funtype_108(sigmatopdown_funtype_108_t x);




struct sigmatopdown_closure_109_s;
        typedef struct sigmatopdown_closure_109_s * sigmatopdown_closure_109_t;

struct sigmatopdown_closure_109_s {uint32_t count;
         sigmatopdown_funtype_108_ftbl_t ftbl;
         sigmatopdown_funtype_108_htbl_t htbl;
        uint32_t fvar_1;};

ordstruct_adt__ordstruct_adt_t f_sigmatopdown_closure_109(struct sigmatopdown_closure_109_s * closure, sigmatopdown_record_104_t bvar);

ordstruct_adt__ordstruct_adt_t m_sigmatopdown_closure_109(struct sigmatopdown_closure_109_s * closure, sigmatopdown_record_104_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_sigmatopdown_closure_109(sigmatopdown_record_104_t ivar_8, uint32_t ivar_1);

extern sigmatopdown_closure_109_t new_sigmatopdown_closure_109(void);

extern void release_sigmatopdown_closure_109(sigmatopdown_funtype_108_t closure);

extern sigmatopdown_closure_109_t copy_sigmatopdown_closure_109(sigmatopdown_closure_109_t x);




struct sigmatopdown_closure_110_s;
        typedef struct sigmatopdown_closure_110_s * sigmatopdown_closure_110_t;

struct sigmatopdown_closure_110_s {uint32_t count;
         sigmatopdown_funtype_59_ftbl_t ftbl;
         sigmatopdown_funtype_59_htbl_t htbl;};

bool_t f_sigmatopdown_closure_110(struct sigmatopdown_closure_110_s * closure, sigmatopdown__ent_adt_t bvar);

bool_t m_sigmatopdown_closure_110(struct sigmatopdown_closure_110_s * closure, sigmatopdown__ent_adt_t bvar);

extern bool_t h_sigmatopdown_closure_110(sigmatopdown__ent_adt_t ivar_19);

extern sigmatopdown_closure_110_t new_sigmatopdown_closure_110(void);

extern void release_sigmatopdown_closure_110(sigmatopdown_funtype_59_t closure);

extern sigmatopdown_closure_110_t copy_sigmatopdown_closure_110(sigmatopdown_closure_110_t x);


//doparse

struct sigmatopdown_funtype_111_s;
        typedef struct sigmatopdown_funtype_111_s * sigmatopdown_funtype_111_t;

struct sigmatopdown_funtype_111_ftbl_s {sigmatopdown__ent_adt_t (* fptr)(struct sigmatopdown_funtype_111_s *, uint8_t);
        sigmatopdown__ent_adt_t (* mptr)(struct sigmatopdown_funtype_111_s *, uint8_t);
        void (* rptr)(struct sigmatopdown_funtype_111_s *);
        struct sigmatopdown_funtype_111_s * (* cptr)(struct sigmatopdown_funtype_111_s *);};
typedef struct sigmatopdown_funtype_111_ftbl_s * sigmatopdown_funtype_111_ftbl_t;

struct sigmatopdown_funtype_111_hashentry_s {uint32_t keyhash; uint8_t key; sigmatopdown__ent_adt_t value;}; 
typedef struct sigmatopdown_funtype_111_hashentry_s sigmatopdown_funtype_111_hashentry_t;

struct sigmatopdown_funtype_111_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_111_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_111_htbl_s * sigmatopdown_funtype_111_htbl_t;

struct sigmatopdown_funtype_111_s {uint32_t count;
        sigmatopdown_funtype_111_ftbl_t ftbl;
        sigmatopdown_funtype_111_htbl_t htbl;};
typedef struct sigmatopdown_funtype_111_s * sigmatopdown_funtype_111_t;

extern void release_sigmatopdown_funtype_111(sigmatopdown_funtype_111_t x);

extern sigmatopdown_funtype_111_t copy_sigmatopdown_funtype_111(sigmatopdown_funtype_111_t x);

uint32_t lookup_sigmatopdown_funtype_111(sigmatopdown_funtype_111_htbl_t htbl, uint8_t i, uint32_t ihash);

sigmatopdown_funtype_111_t dupdate_sigmatopdown_funtype_111(sigmatopdown_funtype_111_t a, uint8_t i, sigmatopdown__ent_adt_t v);

extern sigmatopdown_funtype_111_t update_sigmatopdown_funtype_111(sigmatopdown_funtype_111_t a, uint8_t i, sigmatopdown__ent_adt_t v);

extern bool_t equal_sigmatopdown_funtype_111(sigmatopdown_funtype_111_t x, sigmatopdown_funtype_111_t y);

extern char* json_sigmatopdown_funtype_111(sigmatopdown_funtype_111_t x);




struct sigmatopdown_closure_112_s;
        typedef struct sigmatopdown_closure_112_s * sigmatopdown_closure_112_t;

struct sigmatopdown_closure_112_s {uint32_t count;
         sigmatopdown_funtype_111_ftbl_t ftbl;
         sigmatopdown_funtype_111_htbl_t htbl;};

sigmatopdown__ent_adt_t f_sigmatopdown_closure_112(struct sigmatopdown_closure_112_s * closure, uint8_t bvar);

sigmatopdown__ent_adt_t m_sigmatopdown_closure_112(struct sigmatopdown_closure_112_s * closure, uint8_t bvar);

extern sigmatopdown__ent_adt_t h_sigmatopdown_closure_112(uint8_t ivar_9);

extern sigmatopdown_closure_112_t new_sigmatopdown_closure_112(void);

extern void release_sigmatopdown_closure_112(sigmatopdown_funtype_111_t closure);

extern sigmatopdown_closure_112_t copy_sigmatopdown_closure_112(sigmatopdown_closure_112_t x);


//doparse

struct sigmatopdown_funtype_113_s;
        typedef struct sigmatopdown_funtype_113_s * sigmatopdown_funtype_113_t;

struct sigmatopdown_funtype_113_ftbl_s {sigmatopdown_funtype_111_t (* fptr)(struct sigmatopdown_funtype_113_s *, uint32_t);
        sigmatopdown_funtype_111_t (* mptr)(struct sigmatopdown_funtype_113_s *, uint32_t);
        void (* rptr)(struct sigmatopdown_funtype_113_s *);
        struct sigmatopdown_funtype_113_s * (* cptr)(struct sigmatopdown_funtype_113_s *);};
typedef struct sigmatopdown_funtype_113_ftbl_s * sigmatopdown_funtype_113_ftbl_t;

struct sigmatopdown_funtype_113_hashentry_s {uint32_t keyhash; uint32_t key; sigmatopdown_funtype_111_t value;}; 
typedef struct sigmatopdown_funtype_113_hashentry_s sigmatopdown_funtype_113_hashentry_t;

struct sigmatopdown_funtype_113_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdown_funtype_113_hashentry_t * data;}; 
typedef struct sigmatopdown_funtype_113_htbl_s * sigmatopdown_funtype_113_htbl_t;

struct sigmatopdown_funtype_113_s {uint32_t count;
        sigmatopdown_funtype_113_ftbl_t ftbl;
        sigmatopdown_funtype_113_htbl_t htbl;};
typedef struct sigmatopdown_funtype_113_s * sigmatopdown_funtype_113_t;

extern void release_sigmatopdown_funtype_113(sigmatopdown_funtype_113_t x);

extern sigmatopdown_funtype_113_t copy_sigmatopdown_funtype_113(sigmatopdown_funtype_113_t x);

uint32_t lookup_sigmatopdown_funtype_113(sigmatopdown_funtype_113_htbl_t htbl, uint32_t i, uint32_t ihash);

sigmatopdown_funtype_113_t dupdate_sigmatopdown_funtype_113(sigmatopdown_funtype_113_t a, uint32_t i, sigmatopdown_funtype_111_t v);

extern sigmatopdown_funtype_113_t update_sigmatopdown_funtype_113(sigmatopdown_funtype_113_t a, uint32_t i, sigmatopdown_funtype_111_t v);

extern bool_t equal_sigmatopdown_funtype_113(sigmatopdown_funtype_113_t x, sigmatopdown_funtype_113_t y);

extern char* json_sigmatopdown_funtype_113(sigmatopdown_funtype_113_t x);


//doparse

struct sigmatopdown_record_114_s {
        uint32_t count; 
        uint8_t depth;
        bool_t lflag;
        sigmatopdown_funtype_113_t scaf;
        sigmatopdown__ent_adt_t stack;};
typedef struct sigmatopdown_record_114_s * sigmatopdown_record_114_t;

extern sigmatopdown_record_114_t new_sigmatopdown_record_114(void);

extern void release_sigmatopdown_record_114(sigmatopdown_record_114_t x);

extern sigmatopdown_record_114_t copy_sigmatopdown_record_114(sigmatopdown_record_114_t x);

extern bool_t equal_sigmatopdown_record_114(sigmatopdown_record_114_t x, sigmatopdown_record_114_t y);
extern char * json_sigmatopdown_record_114(sigmatopdown_record_114_t x);

typedef struct actual_sigmatopdown_record_114_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdown_record_114_t;
void release_sigmatopdown_record_114_ptr(pointer_t x, type_actual_t sigmatopdown_record_114);

extern bool_t equal_sigmatopdown_record_114_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_114_t T);

extern char * json_sigmatopdown_record_114_ptr(pointer_t x,  actual_sigmatopdown_record_114_t T);

actual_sigmatopdown_record_114_t actual_sigmatopdown_record_114(void);

extern sigmatopdown_record_114_t update_sigmatopdown_record_114_depth(sigmatopdown_record_114_t x, uint8_t v);

extern sigmatopdown_record_114_t update_sigmatopdown_record_114_lflag(sigmatopdown_record_114_t x, bool_t v);

extern sigmatopdown_record_114_t update_sigmatopdown_record_114_scaf(sigmatopdown_record_114_t x, sigmatopdown_funtype_113_t v);

extern sigmatopdown_record_114_t update_sigmatopdown_record_114_stack(sigmatopdown_record_114_t x, sigmatopdown__ent_adt_t v);




struct sigmatopdown_closure_115_s;
        typedef struct sigmatopdown_closure_115_s * sigmatopdown_closure_115_t;

struct sigmatopdown_closure_115_s {uint32_t count;
         sigmatopdown_funtype_113_ftbl_t ftbl;
         sigmatopdown_funtype_113_htbl_t htbl;
        uint32_t fvar_1;
        sigmatopdown_funtype_111_t fvar_2;};

sigmatopdown_funtype_111_t f_sigmatopdown_closure_115(struct sigmatopdown_closure_115_s * closure, uint32_t bvar);

sigmatopdown_funtype_111_t m_sigmatopdown_closure_115(struct sigmatopdown_closure_115_s * closure, uint32_t bvar);

extern sigmatopdown_funtype_111_t h_sigmatopdown_closure_115(uint32_t ivar_22, uint32_t ivar_1, sigmatopdown_funtype_111_t ivar_5);

extern sigmatopdown_closure_115_t new_sigmatopdown_closure_115(void);

extern void release_sigmatopdown_closure_115(sigmatopdown_funtype_113_t closure);

extern sigmatopdown_closure_115_t copy_sigmatopdown_closure_115(sigmatopdown_closure_115_t x);



extern uint8_t sigmatopdown__num_non_terminals(void);

extern bool_t r_sigmatopdown__failp(sigmatopdown__ent_adt_t ivar_1);

extern bool_t r_sigmatopdown__pendingp(sigmatopdown__ent_adt_t ivar_1);

extern bool_t r_sigmatopdown__loopp(sigmatopdown__ent_adt_t ivar_1);

extern bool_t r_sigmatopdown__goodp(sigmatopdown__ent_adt_t ivar_1);

extern bool_t r_sigmatopdown__pushp(sigmatopdown__ent_adt_t ivar_1);

extern sigmatopdown__ent_adt_t update_sigmatopdown__ent_adt_dep(sigmatopdown__ent_adt_t ivar_1, uint64_t ivar_7);

extern uint64_t sigmatopdown__ent_adt_dep(sigmatopdown__ent_adt_t ivar_1);

extern sigmatopdown__good_t update_sigmatopdown__ent_adt_span(sigmatopdown__ent_adt_t ivar_1, uint32_t ivar_3);

extern uint32_t sigmatopdown__ent_adt_span(sigmatopdown__ent_adt_t ivar_1);

extern sigmatopdown__push_t update_sigmatopdown__ent_adt_pos(sigmatopdown__ent_adt_t ivar_1, uint32_t ivar_3);

extern uint32_t sigmatopdown__ent_adt_pos(sigmatopdown__ent_adt_t ivar_1);

extern sigmatopdown__push_t update_sigmatopdown__ent_adt_nt(sigmatopdown__ent_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t sigmatopdown__ent_adt_nt(sigmatopdown__ent_adt_t ivar_1);

extern sigmatopdown__ent_adt_t sigmatopdown__fail(uint64_t ivar_2);

extern sigmatopdown__ent_adt_t sigmatopdown__pending(void);

extern sigmatopdown__ent_adt_t sigmatopdown__loop(void);

extern sigmatopdown__ent_adt_t sigmatopdown__good(uint64_t ivar_2, uint32_t ivar_3);

extern sigmatopdown__ent_adt_t sigmatopdown__push(uint32_t ivar_2, uint8_t ivar_3);

extern sigmatopdown_funtype_4_t sigmatopdown__ent_ord(void);

extern uint8_t sigmatopdown__ord__1(sigmatopdown__ent_adt_t ivar_1);

extern bool_t sigmatopdown__subterm__1(sigmatopdown__ent_adt_t ivar_1, sigmatopdown__ent_adt_t ivar_2);

extern bool_t sigmatopdown__doublelessp__1(sigmatopdown__ent_adt_t ivar_1, sigmatopdown__ent_adt_t ivar_2);

extern sigmatopdown_funtype_5_t sigmatopdown__reduce_nat__1(sigmatopdown_funtype_6_t ivar_1, mpz_ptr_t ivar_3, mpz_ptr_t ivar_4, sigmatopdown_funtype_8_t ivar_5, sigmatopdown_funtype_10_t ivar_7);

extern sigmatopdown_funtype_5_t sigmatopdown__REDUCE_nat__1(sigmatopdown_funtype_13_t ivar_1, sigmatopdown_funtype_5_t ivar_3, sigmatopdown_funtype_5_t ivar_5, sigmatopdown_funtype_15_t ivar_7, sigmatopdown_funtype_17_t ivar_9);

extern sigmatopdown_funtype_19_t sigmatopdown__reduce_ordinal__1(sigmatopdown_funtype_20_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_4, sigmatopdown_funtype_21_t ivar_5, sigmatopdown_funtype_22_t ivar_7);

extern sigmatopdown_funtype_19_t sigmatopdown__REDUCE_ordinal__1(sigmatopdown_funtype_24_t ivar_1, sigmatopdown_funtype_19_t ivar_3, sigmatopdown_funtype_19_t ivar_5, sigmatopdown_funtype_25_t ivar_7, sigmatopdown_funtype_26_t ivar_9);

extern bool_t r_sigmatopdown__epsilonp(sigmatopdown__peg_adt_t ivar_1);

extern bool_t r_sigmatopdown__failurep(sigmatopdown__peg_adt_t ivar_1);

extern bool_t r_sigmatopdown__anyp(sigmatopdown__peg_adt_t ivar_1);

extern bool_t r_sigmatopdown__terminalp(sigmatopdown__peg_adt_t ivar_1);

extern bool_t r_sigmatopdown__concatp(sigmatopdown__peg_adt_t ivar_1);

extern bool_t r_sigmatopdown__orp(sigmatopdown__peg_adt_t ivar_1);

extern bool_t r_sigmatopdown__andp(sigmatopdown__peg_adt_t ivar_1);

extern bool_t r_sigmatopdown__notp(sigmatopdown__peg_adt_t ivar_1);

extern sigmatopdown__any_t update_sigmatopdown__peg_adt_p(sigmatopdown__peg_adt_t ivar_1, sigmatopdown_funtype_29_t ivar_4);

extern sigmatopdown_funtype_29_t sigmatopdown__peg_adt_p(sigmatopdown__peg_adt_t ivar_1);

extern sigmatopdown__terminal_t update_sigmatopdown__peg_adt_a(sigmatopdown__peg_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t sigmatopdown__peg_adt_a(sigmatopdown__peg_adt_t ivar_1);

extern sigmatopdown__peg_adt_t update_sigmatopdown__peg_adt_e1(sigmatopdown__peg_adt_t ivar_1, uint8_t ivar_7);

extern uint8_t sigmatopdown__peg_adt_e1(sigmatopdown__peg_adt_t ivar_1);

extern sigmatopdown__peg_adt_t update_sigmatopdown__peg_adt_e2(sigmatopdown__peg_adt_t ivar_1, uint8_t ivar_7);

extern uint8_t sigmatopdown__peg_adt_e2(sigmatopdown__peg_adt_t ivar_1);

extern sigmatopdown__peg_adt_t update_sigmatopdown__peg_adt_e(sigmatopdown__peg_adt_t ivar_1, uint8_t ivar_7);

extern uint8_t sigmatopdown__peg_adt_e(sigmatopdown__peg_adt_t ivar_1);

extern sigmatopdown__peg_adt_t sigmatopdown__epsilon(void);

extern sigmatopdown__peg_adt_t sigmatopdown__failure(void);

extern sigmatopdown__peg_adt_t sigmatopdown__any(sigmatopdown_funtype_29_t ivar_2);

extern sigmatopdown__peg_adt_t sigmatopdown__terminal(uint8_t ivar_2);

extern sigmatopdown__peg_adt_t sigmatopdown__concat(uint8_t ivar_2, uint8_t ivar_3);

extern sigmatopdown__peg_adt_t sigmatopdown__choice(uint8_t ivar_2, uint8_t ivar_3);

extern sigmatopdown__peg_adt_t sigmatopdown__check(uint8_t ivar_2);

extern sigmatopdown__peg_adt_t sigmatopdown__neg(uint8_t ivar_2);

extern sigmatopdown_funtype_36_t sigmatopdown__peg_ord(void);

extern uint8_t sigmatopdown__ord__2(sigmatopdown__peg_adt_t ivar_1);

extern bool_t sigmatopdown__subterm__2(sigmatopdown__peg_adt_t ivar_1, sigmatopdown__peg_adt_t ivar_2);

extern bool_t sigmatopdown__doublelessp__2(sigmatopdown__peg_adt_t ivar_1, sigmatopdown__peg_adt_t ivar_2);

extern sigmatopdown_funtype_37_t sigmatopdown__reduce_nat__2(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, sigmatopdown_funtype_38_t ivar_3, sigmatopdown_funtype_39_t ivar_6, sigmatopdown_funtype_41_t ivar_8, sigmatopdown_funtype_41_t ivar_10, sigmatopdown_funtype_39_t ivar_12, sigmatopdown_funtype_39_t ivar_14);

extern sigmatopdown_funtype_37_t sigmatopdown__REDUCE_nat__2(sigmatopdown_funtype_37_t ivar_1, sigmatopdown_funtype_37_t ivar_3, sigmatopdown_funtype_44_t ivar_5, sigmatopdown_funtype_46_t ivar_8, sigmatopdown_funtype_48_t ivar_10, sigmatopdown_funtype_48_t ivar_12, sigmatopdown_funtype_46_t ivar_14, sigmatopdown_funtype_46_t ivar_16);

extern sigmatopdown_funtype_50_t sigmatopdown__reduce_ordinal__2(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2, sigmatopdown_funtype_51_t ivar_3, sigmatopdown_funtype_52_t ivar_6, sigmatopdown_funtype_53_t ivar_8, sigmatopdown_funtype_53_t ivar_10, sigmatopdown_funtype_52_t ivar_12, sigmatopdown_funtype_52_t ivar_14);

extern sigmatopdown_funtype_50_t sigmatopdown__REDUCE_ordinal__2(sigmatopdown_funtype_50_t ivar_1, sigmatopdown_funtype_50_t ivar_3, sigmatopdown_funtype_55_t ivar_5, sigmatopdown_funtype_56_t ivar_8, sigmatopdown_funtype_57_t ivar_10, sigmatopdown_funtype_57_t ivar_12, sigmatopdown_funtype_56_t ivar_14, sigmatopdown_funtype_56_t ivar_16);

extern sigmatopdown_funtype_59_t sigmatopdown__good_good_entryp(uint32_t ivar_1, uint32_t ivar_2);

extern sigmatopdown_funtype_59_t sigmatopdown__good_push_entryp(uint32_t ivar_1);

extern sigmatopdown_funtype_59_t sigmatopdown__fine_push_entryp(uint32_t ivar_1);

extern sigmatopdown_funtype_59_t sigmatopdown__nice_entryp(uint32_t ivar_1, uint32_t ivar_2);

extern bool_t sigmatopdown__loop_or_pushp(sigmatopdown__ent_adt_t ivar_1);

extern sigmatopdown_funtype_64_t sigmatopdown__instack(uint32_t ivar_1, sigmatopdown_array_66_t ivar_2);

extern sigmatopdown_funtype_69_t sigmatopdown__successor(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_66_t ivar_3);

extern sigmatopdown_funtype_72_t sigmatopdown__sigma(uint32_t ivar_1, sigmatopdown_array_73_t ivar_2);

extern uint64_t sigmatopdown__scafcount(uint32_t ivar_1, sigmatopdown_array_66_t ivar_2, sigmatopdown_funtype_59_t ivar_4, uint32_t ivar_6);

extern uint64_t sigmatopdown__pushcount(uint32_t ivar_1, sigmatopdown_array_66_t ivar_2);

extern bool_t sigmatopdown__good_or_failp(sigmatopdown__ent_adt_t ivar_1);

extern uint64_t sigmatopdown__gfcount(uint32_t ivar_1, sigmatopdown_array_66_t ivar_2);

extern sigmatopdown_funtype_79_t sigmatopdown__good_depthp(uint32_t ivar_1, sigmatopdown_array_66_t ivar_2);

extern sigmatopdown_funtype_59_t sigmatopdown__good_stackp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, uint64_t ivar_3, sigmatopdown_array_66_t ivar_4);

extern sigmatopdown_funtype_69_t sigmatopdown__mem_stackp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, uint64_t ivar_3, sigmatopdown_array_66_t ivar_4);

extern bool_t sigmatopdown__push_or_pendingp(sigmatopdown__ent_adt_t ivar_1);

extern sigmatopdown_funtype_59_t sigmatopdown__fine_stackp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, uint64_t ivar_3, sigmatopdown_array_66_t ivar_4);

extern bool_t sigmatopdown__loop_readyp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_66_t ivar_3, uint32_t ivar_5, uint8_t ivar_6);

extern sigmatopdown_funtype_85_t sigmatopdown__good_failp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3);

extern sigmatopdown_funtype_89_t sigmatopdown__good_loopp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2);

extern sigmatopdown_funtype_92_t sigmatopdown__good_goodp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3);

extern sigmatopdown_funtype_95_t sigmatopdown__good_entryp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3);

extern sigmatopdown_funtype_95_t sigmatopdown__fine_entryp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3);

extern sigmatopdown_funtype_98_t sigmatopdown__good_tscaffoldp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3);

extern sigmatopdown_funtype_64_t sigmatopdown__good_rootp(uint32_t ivar_1, sigmatopdown_array_66_t ivar_2);

extern sigmatopdown_funtype_101_t sigmatopdown__fine_scaffoldp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3);

extern bool_t sigmatopdown__emptyp(sigmatopdown__ent_adt_t ivar_1);

extern sigmatopdown_funtype_105_t sigmatopdown__step(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3, uint32_t ivar_4, uint8_t ivar_5);

extern sigmatopdown_funtype_108_t sigmatopdown__size(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3, uint32_t ivar_4, uint8_t ivar_5);

extern sigmatopdown_record_104_t sigmatopdown__parse(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3, uint32_t ivar_4, uint8_t ivar_5, sigmatopdown_record_104_t ivar_6);

extern sigmatopdown__ent_adt_t sigmatopdown__doparse(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3, uint8_t ivar_4);
#endif