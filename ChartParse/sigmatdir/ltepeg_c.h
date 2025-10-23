//Code generated using pvs2ir
#ifndef _ltepeg_h 
#define _ltepeg_h

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

//cc -O3 -Wall -o ltepeg -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/sets_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c /Users/e21660/shankar/pvs.git/lib/lex2_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c ltepeg_c.c arrayCount_c.c -lgmp 
//ent

struct ltepeg__ent_adt_s {
         uint32_t count; 
        uint8_t ltepeg__ent_adt_index;};
typedef struct ltepeg__ent_adt_s * ltepeg__ent_adt_t;

extern ltepeg__ent_adt_t new_ltepeg__ent_adt(void);

extern void release_ltepeg__ent_adt(ltepeg__ent_adt_t x);

extern ltepeg__ent_adt_t copy_ltepeg__ent_adt(ltepeg__ent_adt_t x);

extern bool_t equal_ltepeg__ent_adt(ltepeg__ent_adt_t x, ltepeg__ent_adt_t y);
extern char * json_ltepeg__ent_adt(ltepeg__ent_adt_t x);

typedef struct actual_ltepeg__ent_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg__ent_adt_t;
void release_ltepeg__ent_adt_ptr(pointer_t x, type_actual_t ltepeg__ent_adt);

extern bool_t equal_ltepeg__ent_adt_ptr(pointer_t x, pointer_t y, actual_ltepeg__ent_adt_t T);

extern char * json_ltepeg__ent_adt_ptr(pointer_t x,  actual_ltepeg__ent_adt_t T);

actual_ltepeg__ent_adt_t actual_ltepeg__ent_adt(void);

extern ltepeg__ent_adt_t update_ltepeg__ent_adt_ltepeg__ent_adt_index(ltepeg__ent_adt_t x, uint8_t v);


//fail

struct ltepeg__fail_s {
        uint32_t count; 
        uint8_t ltepeg__ent_adt_index;
        uint64_t dep;};
typedef struct ltepeg__fail_s * ltepeg__fail_t;

extern ltepeg__fail_t new_ltepeg__fail(void);

extern void release_ltepeg__fail(ltepeg__fail_t x);

extern ltepeg__fail_t copy_ltepeg__fail(ltepeg__fail_t x);

extern bool_t equal_ltepeg__fail(ltepeg__fail_t x, ltepeg__fail_t y);
extern char * json_ltepeg__fail(ltepeg__fail_t x);

typedef struct actual_ltepeg__fail_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg__fail_t;
void release_ltepeg__fail_ptr(pointer_t x, type_actual_t ltepeg__fail);

extern bool_t equal_ltepeg__fail_ptr(pointer_t x, pointer_t y, actual_ltepeg__fail_t T);

extern char * json_ltepeg__fail_ptr(pointer_t x,  actual_ltepeg__fail_t T);

actual_ltepeg__fail_t actual_ltepeg__fail(void);

extern ltepeg__fail_t update_ltepeg__fail_ltepeg__ent_adt_index(ltepeg__fail_t x, uint8_t v);

extern ltepeg__fail_t update_ltepeg__fail_dep(ltepeg__fail_t x, uint64_t v);


//good

struct ltepeg__good_s {
        uint32_t count; 
        uint8_t ltepeg__ent_adt_index;
        uint64_t dep;
        uint32_t span;};
typedef struct ltepeg__good_s * ltepeg__good_t;

extern ltepeg__good_t new_ltepeg__good(void);

extern void release_ltepeg__good(ltepeg__good_t x);

extern ltepeg__good_t copy_ltepeg__good(ltepeg__good_t x);

extern bool_t equal_ltepeg__good(ltepeg__good_t x, ltepeg__good_t y);
extern char * json_ltepeg__good(ltepeg__good_t x);

typedef struct actual_ltepeg__good_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg__good_t;
void release_ltepeg__good_ptr(pointer_t x, type_actual_t ltepeg__good);

extern bool_t equal_ltepeg__good_ptr(pointer_t x, pointer_t y, actual_ltepeg__good_t T);

extern char * json_ltepeg__good_ptr(pointer_t x,  actual_ltepeg__good_t T);

actual_ltepeg__good_t actual_ltepeg__good(void);

extern ltepeg__good_t update_ltepeg__good_ltepeg__ent_adt_index(ltepeg__good_t x, uint8_t v);

extern ltepeg__good_t update_ltepeg__good_dep(ltepeg__good_t x, uint64_t v);

extern ltepeg__good_t update_ltepeg__good_span(ltepeg__good_t x, uint32_t v);


//push

struct ltepeg__push_s {
        uint32_t count; 
        uint8_t ltepeg__ent_adt_index;
        uint32_t pos;
        uint8_t nt;};
typedef struct ltepeg__push_s * ltepeg__push_t;

extern ltepeg__push_t new_ltepeg__push(void);

extern void release_ltepeg__push(ltepeg__push_t x);

extern ltepeg__push_t copy_ltepeg__push(ltepeg__push_t x);

extern bool_t equal_ltepeg__push(ltepeg__push_t x, ltepeg__push_t y);
extern char * json_ltepeg__push(ltepeg__push_t x);

typedef struct actual_ltepeg__push_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg__push_t;
void release_ltepeg__push_ptr(pointer_t x, type_actual_t ltepeg__push);

extern bool_t equal_ltepeg__push_ptr(pointer_t x, pointer_t y, actual_ltepeg__push_t T);

extern char * json_ltepeg__push_ptr(pointer_t x,  actual_ltepeg__push_t T);

actual_ltepeg__push_t actual_ltepeg__push(void);

extern ltepeg__push_t update_ltepeg__push_ltepeg__ent_adt_index(ltepeg__push_t x, uint8_t v);

extern ltepeg__push_t update_ltepeg__push_pos(ltepeg__push_t x, uint32_t v);

extern ltepeg__push_t update_ltepeg__push_nt(ltepeg__push_t x, uint8_t v);


//ent_ord

struct ltepeg_funtype_4_s;
        typedef struct ltepeg_funtype_4_s * ltepeg_funtype_4_t;

struct ltepeg_funtype_4_ftbl_s {uint8_t (* fptr)(struct ltepeg_funtype_4_s *, ltepeg__ent_adt_t);
        uint8_t (* mptr)(struct ltepeg_funtype_4_s *, ltepeg__ent_adt_t);
        void (* rptr)(struct ltepeg_funtype_4_s *);
        struct ltepeg_funtype_4_s * (* cptr)(struct ltepeg_funtype_4_s *);};
typedef struct ltepeg_funtype_4_ftbl_s * ltepeg_funtype_4_ftbl_t;

struct ltepeg_funtype_4_hashentry_s {uint32_t keyhash; ltepeg__ent_adt_t key; uint8_t value;}; 
typedef struct ltepeg_funtype_4_hashentry_s ltepeg_funtype_4_hashentry_t;

struct ltepeg_funtype_4_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_4_hashentry_t * data;}; 
typedef struct ltepeg_funtype_4_htbl_s * ltepeg_funtype_4_htbl_t;

struct ltepeg_funtype_4_s {uint32_t count;
        ltepeg_funtype_4_ftbl_t ftbl;
        ltepeg_funtype_4_htbl_t htbl;};
typedef struct ltepeg_funtype_4_s * ltepeg_funtype_4_t;

extern void release_ltepeg_funtype_4(ltepeg_funtype_4_t x);

extern ltepeg_funtype_4_t copy_ltepeg_funtype_4(ltepeg_funtype_4_t x);

extern bool_t equal_ltepeg_funtype_4(ltepeg_funtype_4_t x, ltepeg_funtype_4_t y);

extern char* json_ltepeg_funtype_4(ltepeg_funtype_4_t x);


//reduce_nat

struct ltepeg_funtype_5_s;
        typedef struct ltepeg_funtype_5_s * ltepeg_funtype_5_t;

struct ltepeg_funtype_5_ftbl_s {mpz_ptr_t (* fptr)(struct ltepeg_funtype_5_s *, ltepeg__ent_adt_t);
        mpz_ptr_t (* mptr)(struct ltepeg_funtype_5_s *, ltepeg__ent_adt_t);
        void (* rptr)(struct ltepeg_funtype_5_s *);
        struct ltepeg_funtype_5_s * (* cptr)(struct ltepeg_funtype_5_s *);};
typedef struct ltepeg_funtype_5_ftbl_s * ltepeg_funtype_5_ftbl_t;

struct ltepeg_funtype_5_hashentry_s {uint32_t keyhash; ltepeg__ent_adt_t key; mpz_t value;}; 
typedef struct ltepeg_funtype_5_hashentry_s ltepeg_funtype_5_hashentry_t;

struct ltepeg_funtype_5_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_5_hashentry_t * data;}; 
typedef struct ltepeg_funtype_5_htbl_s * ltepeg_funtype_5_htbl_t;

struct ltepeg_funtype_5_s {uint32_t count;
        ltepeg_funtype_5_ftbl_t ftbl;
        ltepeg_funtype_5_htbl_t htbl;};
typedef struct ltepeg_funtype_5_s * ltepeg_funtype_5_t;

extern void release_ltepeg_funtype_5(ltepeg_funtype_5_t x);

extern ltepeg_funtype_5_t copy_ltepeg_funtype_5(ltepeg_funtype_5_t x);

extern bool_t equal_ltepeg_funtype_5(ltepeg_funtype_5_t x, ltepeg_funtype_5_t y);

extern char* json_ltepeg_funtype_5(ltepeg_funtype_5_t x);


//reduce_nat

struct ltepeg_funtype_6_s;
        typedef struct ltepeg_funtype_6_s * ltepeg_funtype_6_t;

struct ltepeg_funtype_6_ftbl_s {mpz_ptr_t (* fptr)(struct ltepeg_funtype_6_s *, uint64_t);
        mpz_ptr_t (* mptr)(struct ltepeg_funtype_6_s *, uint64_t);
        void (* rptr)(struct ltepeg_funtype_6_s *);
        struct ltepeg_funtype_6_s * (* cptr)(struct ltepeg_funtype_6_s *);};
typedef struct ltepeg_funtype_6_ftbl_s * ltepeg_funtype_6_ftbl_t;

struct ltepeg_funtype_6_hashentry_s {uint32_t keyhash; uint64_t key; mpz_t value;}; 
typedef struct ltepeg_funtype_6_hashentry_s ltepeg_funtype_6_hashentry_t;

struct ltepeg_funtype_6_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_6_hashentry_t * data;}; 
typedef struct ltepeg_funtype_6_htbl_s * ltepeg_funtype_6_htbl_t;

struct ltepeg_funtype_6_s {uint32_t count;
        ltepeg_funtype_6_ftbl_t ftbl;
        ltepeg_funtype_6_htbl_t htbl;};
typedef struct ltepeg_funtype_6_s * ltepeg_funtype_6_t;

extern void release_ltepeg_funtype_6(ltepeg_funtype_6_t x);

extern ltepeg_funtype_6_t copy_ltepeg_funtype_6(ltepeg_funtype_6_t x);

uint32_t lookup_ltepeg_funtype_6(ltepeg_funtype_6_htbl_t htbl, uint64_t i, uint32_t ihash);

ltepeg_funtype_6_t dupdate_ltepeg_funtype_6(ltepeg_funtype_6_t a, uint64_t i, mpz_ptr_t v);

extern ltepeg_funtype_6_t update_ltepeg_funtype_6(ltepeg_funtype_6_t a, uint64_t i, mpz_ptr_t v);

extern bool_t equal_ltepeg_funtype_6(ltepeg_funtype_6_t x, ltepeg_funtype_6_t y);

extern char* json_ltepeg_funtype_6(ltepeg_funtype_6_t x);


//reduce_nat

struct ltepeg_record_7_s {
        uint32_t count; 
        uint64_t project_1;
        uint32_t project_2;};
typedef struct ltepeg_record_7_s * ltepeg_record_7_t;

extern ltepeg_record_7_t new_ltepeg_record_7(void);

extern void release_ltepeg_record_7(ltepeg_record_7_t x);

extern ltepeg_record_7_t copy_ltepeg_record_7(ltepeg_record_7_t x);

extern bool_t equal_ltepeg_record_7(ltepeg_record_7_t x, ltepeg_record_7_t y);
extern char * json_ltepeg_record_7(ltepeg_record_7_t x);

typedef struct actual_ltepeg_record_7_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_record_7_t;
void release_ltepeg_record_7_ptr(pointer_t x, type_actual_t ltepeg_record_7);

extern bool_t equal_ltepeg_record_7_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_7_t T);

extern char * json_ltepeg_record_7_ptr(pointer_t x,  actual_ltepeg_record_7_t T);

actual_ltepeg_record_7_t actual_ltepeg_record_7(void);

extern ltepeg_record_7_t update_ltepeg_record_7_project_1(ltepeg_record_7_t x, uint64_t v);

extern ltepeg_record_7_t update_ltepeg_record_7_project_2(ltepeg_record_7_t x, uint32_t v);


//reduce_nat

struct ltepeg_funtype_8_s;
        typedef struct ltepeg_funtype_8_s * ltepeg_funtype_8_t;

struct ltepeg_funtype_8_ftbl_s {mpz_ptr_t (* fptr)(struct ltepeg_funtype_8_s *, ltepeg_record_7_t);
        mpz_ptr_t (* mptr)(struct ltepeg_funtype_8_s *, uint64_t, uint32_t);
        void (* rptr)(struct ltepeg_funtype_8_s *);
        struct ltepeg_funtype_8_s * (* cptr)(struct ltepeg_funtype_8_s *);};
typedef struct ltepeg_funtype_8_ftbl_s * ltepeg_funtype_8_ftbl_t;

struct ltepeg_funtype_8_hashentry_s {uint32_t keyhash; ltepeg_record_7_t key; mpz_t value;}; 
typedef struct ltepeg_funtype_8_hashentry_s ltepeg_funtype_8_hashentry_t;

struct ltepeg_funtype_8_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_8_hashentry_t * data;}; 
typedef struct ltepeg_funtype_8_htbl_s * ltepeg_funtype_8_htbl_t;

struct ltepeg_funtype_8_s {uint32_t count;
        ltepeg_funtype_8_ftbl_t ftbl;
        ltepeg_funtype_8_htbl_t htbl;};
typedef struct ltepeg_funtype_8_s * ltepeg_funtype_8_t;

extern void release_ltepeg_funtype_8(ltepeg_funtype_8_t x);

extern ltepeg_funtype_8_t copy_ltepeg_funtype_8(ltepeg_funtype_8_t x);

extern bool_t equal_ltepeg_funtype_8(ltepeg_funtype_8_t x, ltepeg_funtype_8_t y);

extern char* json_ltepeg_funtype_8(ltepeg_funtype_8_t x);


//reduce_nat

struct ltepeg_record_9_s {
        uint32_t count; 
        uint32_t project_1;
        uint8_t project_2;};
typedef struct ltepeg_record_9_s * ltepeg_record_9_t;

extern ltepeg_record_9_t new_ltepeg_record_9(void);

extern void release_ltepeg_record_9(ltepeg_record_9_t x);

extern ltepeg_record_9_t copy_ltepeg_record_9(ltepeg_record_9_t x);

extern bool_t equal_ltepeg_record_9(ltepeg_record_9_t x, ltepeg_record_9_t y);
extern char * json_ltepeg_record_9(ltepeg_record_9_t x);

typedef struct actual_ltepeg_record_9_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_record_9_t;
void release_ltepeg_record_9_ptr(pointer_t x, type_actual_t ltepeg_record_9);

extern bool_t equal_ltepeg_record_9_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_9_t T);

extern char * json_ltepeg_record_9_ptr(pointer_t x,  actual_ltepeg_record_9_t T);

actual_ltepeg_record_9_t actual_ltepeg_record_9(void);

extern ltepeg_record_9_t update_ltepeg_record_9_project_1(ltepeg_record_9_t x, uint32_t v);

extern ltepeg_record_9_t update_ltepeg_record_9_project_2(ltepeg_record_9_t x, uint8_t v);


//reduce_nat

struct ltepeg_funtype_10_s;
        typedef struct ltepeg_funtype_10_s * ltepeg_funtype_10_t;

struct ltepeg_funtype_10_ftbl_s {mpz_ptr_t (* fptr)(struct ltepeg_funtype_10_s *, ltepeg_record_9_t);
        mpz_ptr_t (* mptr)(struct ltepeg_funtype_10_s *, uint32_t, uint8_t);
        void (* rptr)(struct ltepeg_funtype_10_s *);
        struct ltepeg_funtype_10_s * (* cptr)(struct ltepeg_funtype_10_s *);};
typedef struct ltepeg_funtype_10_ftbl_s * ltepeg_funtype_10_ftbl_t;

struct ltepeg_funtype_10_hashentry_s {uint32_t keyhash; ltepeg_record_9_t key; mpz_t value;}; 
typedef struct ltepeg_funtype_10_hashentry_s ltepeg_funtype_10_hashentry_t;

struct ltepeg_funtype_10_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_10_hashentry_t * data;}; 
typedef struct ltepeg_funtype_10_htbl_s * ltepeg_funtype_10_htbl_t;

struct ltepeg_funtype_10_s {uint32_t count;
        ltepeg_funtype_10_ftbl_t ftbl;
        ltepeg_funtype_10_htbl_t htbl;};
typedef struct ltepeg_funtype_10_s * ltepeg_funtype_10_t;

extern void release_ltepeg_funtype_10(ltepeg_funtype_10_t x);

extern ltepeg_funtype_10_t copy_ltepeg_funtype_10(ltepeg_funtype_10_t x);

extern bool_t equal_ltepeg_funtype_10(ltepeg_funtype_10_t x, ltepeg_funtype_10_t y);

extern char* json_ltepeg_funtype_10(ltepeg_funtype_10_t x);




struct ltepeg_closure_11_s;
        typedef struct ltepeg_closure_11_s * ltepeg_closure_11_t;

struct ltepeg_closure_11_s {uint32_t count;
         ltepeg_funtype_5_ftbl_t ftbl;
         ltepeg_funtype_5_htbl_t htbl;
        ltepeg_funtype_8_t fvar_1;
        ltepeg_funtype_10_t fvar_2;
        mpz_t fvar_3;
        mpz_t fvar_4;
        ltepeg_funtype_6_t fvar_5;};

mpz_ptr_t f_ltepeg_closure_11(struct ltepeg_closure_11_s * closure, ltepeg__ent_adt_t bvar);

mpz_ptr_t m_ltepeg_closure_11(struct ltepeg_closure_11_s * closure, ltepeg__ent_adt_t bvar);

extern mpz_ptr_t h_ltepeg_closure_11(ltepeg__ent_adt_t ivar_10, ltepeg_funtype_8_t ivar_5, ltepeg_funtype_10_t ivar_7, mpz_ptr_t ivar_4, mpz_ptr_t ivar_3, ltepeg_funtype_6_t ivar_1);

extern ltepeg_closure_11_t new_ltepeg_closure_11(void);

extern void release_ltepeg_closure_11(ltepeg_funtype_5_t closure);

extern ltepeg_closure_11_t copy_ltepeg_closure_11(ltepeg_closure_11_t x);


//REDUCE_nat

struct ltepeg_record_12_s {
        uint32_t count; 
        uint64_t project_1;
        ltepeg__ent_adt_t project_2;};
typedef struct ltepeg_record_12_s * ltepeg_record_12_t;

extern ltepeg_record_12_t new_ltepeg_record_12(void);

extern void release_ltepeg_record_12(ltepeg_record_12_t x);

extern ltepeg_record_12_t copy_ltepeg_record_12(ltepeg_record_12_t x);

extern bool_t equal_ltepeg_record_12(ltepeg_record_12_t x, ltepeg_record_12_t y);
extern char * json_ltepeg_record_12(ltepeg_record_12_t x);

typedef struct actual_ltepeg_record_12_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_record_12_t;
void release_ltepeg_record_12_ptr(pointer_t x, type_actual_t ltepeg_record_12);

extern bool_t equal_ltepeg_record_12_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_12_t T);

extern char * json_ltepeg_record_12_ptr(pointer_t x,  actual_ltepeg_record_12_t T);

actual_ltepeg_record_12_t actual_ltepeg_record_12(void);

extern ltepeg_record_12_t update_ltepeg_record_12_project_1(ltepeg_record_12_t x, uint64_t v);

extern ltepeg_record_12_t update_ltepeg_record_12_project_2(ltepeg_record_12_t x, ltepeg__ent_adt_t v);


//REDUCE_nat

struct ltepeg_funtype_13_s;
        typedef struct ltepeg_funtype_13_s * ltepeg_funtype_13_t;

struct ltepeg_funtype_13_ftbl_s {mpz_ptr_t (* fptr)(struct ltepeg_funtype_13_s *, ltepeg_record_12_t);
        mpz_ptr_t (* mptr)(struct ltepeg_funtype_13_s *, uint64_t, ltepeg__ent_adt_t);
        void (* rptr)(struct ltepeg_funtype_13_s *);
        struct ltepeg_funtype_13_s * (* cptr)(struct ltepeg_funtype_13_s *);};
typedef struct ltepeg_funtype_13_ftbl_s * ltepeg_funtype_13_ftbl_t;

struct ltepeg_funtype_13_hashentry_s {uint32_t keyhash; ltepeg_record_12_t key; mpz_t value;}; 
typedef struct ltepeg_funtype_13_hashentry_s ltepeg_funtype_13_hashentry_t;

struct ltepeg_funtype_13_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_13_hashentry_t * data;}; 
typedef struct ltepeg_funtype_13_htbl_s * ltepeg_funtype_13_htbl_t;

struct ltepeg_funtype_13_s {uint32_t count;
        ltepeg_funtype_13_ftbl_t ftbl;
        ltepeg_funtype_13_htbl_t htbl;};
typedef struct ltepeg_funtype_13_s * ltepeg_funtype_13_t;

extern void release_ltepeg_funtype_13(ltepeg_funtype_13_t x);

extern ltepeg_funtype_13_t copy_ltepeg_funtype_13(ltepeg_funtype_13_t x);

extern bool_t equal_ltepeg_funtype_13(ltepeg_funtype_13_t x, ltepeg_funtype_13_t y);

extern char* json_ltepeg_funtype_13(ltepeg_funtype_13_t x);


//REDUCE_nat

struct ltepeg_record_14_s {
        uint32_t count; 
        uint64_t project_1;
        uint32_t project_2;
        ltepeg__ent_adt_t project_3;};
typedef struct ltepeg_record_14_s * ltepeg_record_14_t;

extern ltepeg_record_14_t new_ltepeg_record_14(void);

extern void release_ltepeg_record_14(ltepeg_record_14_t x);

extern ltepeg_record_14_t copy_ltepeg_record_14(ltepeg_record_14_t x);

extern bool_t equal_ltepeg_record_14(ltepeg_record_14_t x, ltepeg_record_14_t y);
extern char * json_ltepeg_record_14(ltepeg_record_14_t x);

typedef struct actual_ltepeg_record_14_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_record_14_t;
void release_ltepeg_record_14_ptr(pointer_t x, type_actual_t ltepeg_record_14);

extern bool_t equal_ltepeg_record_14_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_14_t T);

extern char * json_ltepeg_record_14_ptr(pointer_t x,  actual_ltepeg_record_14_t T);

actual_ltepeg_record_14_t actual_ltepeg_record_14(void);

extern ltepeg_record_14_t update_ltepeg_record_14_project_1(ltepeg_record_14_t x, uint64_t v);

extern ltepeg_record_14_t update_ltepeg_record_14_project_2(ltepeg_record_14_t x, uint32_t v);

extern ltepeg_record_14_t update_ltepeg_record_14_project_3(ltepeg_record_14_t x, ltepeg__ent_adt_t v);


//REDUCE_nat

struct ltepeg_funtype_15_s;
        typedef struct ltepeg_funtype_15_s * ltepeg_funtype_15_t;

struct ltepeg_funtype_15_ftbl_s {mpz_ptr_t (* fptr)(struct ltepeg_funtype_15_s *, ltepeg_record_14_t);
        mpz_ptr_t (* mptr)(struct ltepeg_funtype_15_s *, uint64_t, uint32_t, ltepeg__ent_adt_t);
        void (* rptr)(struct ltepeg_funtype_15_s *);
        struct ltepeg_funtype_15_s * (* cptr)(struct ltepeg_funtype_15_s *);};
typedef struct ltepeg_funtype_15_ftbl_s * ltepeg_funtype_15_ftbl_t;

struct ltepeg_funtype_15_hashentry_s {uint32_t keyhash; ltepeg_record_14_t key; mpz_t value;}; 
typedef struct ltepeg_funtype_15_hashentry_s ltepeg_funtype_15_hashentry_t;

struct ltepeg_funtype_15_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_15_hashentry_t * data;}; 
typedef struct ltepeg_funtype_15_htbl_s * ltepeg_funtype_15_htbl_t;

struct ltepeg_funtype_15_s {uint32_t count;
        ltepeg_funtype_15_ftbl_t ftbl;
        ltepeg_funtype_15_htbl_t htbl;};
typedef struct ltepeg_funtype_15_s * ltepeg_funtype_15_t;

extern void release_ltepeg_funtype_15(ltepeg_funtype_15_t x);

extern ltepeg_funtype_15_t copy_ltepeg_funtype_15(ltepeg_funtype_15_t x);

extern bool_t equal_ltepeg_funtype_15(ltepeg_funtype_15_t x, ltepeg_funtype_15_t y);

extern char* json_ltepeg_funtype_15(ltepeg_funtype_15_t x);


//REDUCE_nat

struct ltepeg_record_16_s {
        uint32_t count; 
        uint32_t project_1;
        uint8_t project_2;
        ltepeg__ent_adt_t project_3;};
typedef struct ltepeg_record_16_s * ltepeg_record_16_t;

extern ltepeg_record_16_t new_ltepeg_record_16(void);

extern void release_ltepeg_record_16(ltepeg_record_16_t x);

extern ltepeg_record_16_t copy_ltepeg_record_16(ltepeg_record_16_t x);

extern bool_t equal_ltepeg_record_16(ltepeg_record_16_t x, ltepeg_record_16_t y);
extern char * json_ltepeg_record_16(ltepeg_record_16_t x);

typedef struct actual_ltepeg_record_16_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_record_16_t;
void release_ltepeg_record_16_ptr(pointer_t x, type_actual_t ltepeg_record_16);

extern bool_t equal_ltepeg_record_16_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_16_t T);

extern char * json_ltepeg_record_16_ptr(pointer_t x,  actual_ltepeg_record_16_t T);

actual_ltepeg_record_16_t actual_ltepeg_record_16(void);

extern ltepeg_record_16_t update_ltepeg_record_16_project_1(ltepeg_record_16_t x, uint32_t v);

extern ltepeg_record_16_t update_ltepeg_record_16_project_2(ltepeg_record_16_t x, uint8_t v);

extern ltepeg_record_16_t update_ltepeg_record_16_project_3(ltepeg_record_16_t x, ltepeg__ent_adt_t v);


//REDUCE_nat

struct ltepeg_funtype_17_s;
        typedef struct ltepeg_funtype_17_s * ltepeg_funtype_17_t;

struct ltepeg_funtype_17_ftbl_s {mpz_ptr_t (* fptr)(struct ltepeg_funtype_17_s *, ltepeg_record_16_t);
        mpz_ptr_t (* mptr)(struct ltepeg_funtype_17_s *, uint32_t, uint8_t, ltepeg__ent_adt_t);
        void (* rptr)(struct ltepeg_funtype_17_s *);
        struct ltepeg_funtype_17_s * (* cptr)(struct ltepeg_funtype_17_s *);};
typedef struct ltepeg_funtype_17_ftbl_s * ltepeg_funtype_17_ftbl_t;

struct ltepeg_funtype_17_hashentry_s {uint32_t keyhash; ltepeg_record_16_t key; mpz_t value;}; 
typedef struct ltepeg_funtype_17_hashentry_s ltepeg_funtype_17_hashentry_t;

struct ltepeg_funtype_17_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_17_hashentry_t * data;}; 
typedef struct ltepeg_funtype_17_htbl_s * ltepeg_funtype_17_htbl_t;

struct ltepeg_funtype_17_s {uint32_t count;
        ltepeg_funtype_17_ftbl_t ftbl;
        ltepeg_funtype_17_htbl_t htbl;};
typedef struct ltepeg_funtype_17_s * ltepeg_funtype_17_t;

extern void release_ltepeg_funtype_17(ltepeg_funtype_17_t x);

extern ltepeg_funtype_17_t copy_ltepeg_funtype_17(ltepeg_funtype_17_t x);

extern bool_t equal_ltepeg_funtype_17(ltepeg_funtype_17_t x, ltepeg_funtype_17_t y);

extern char* json_ltepeg_funtype_17(ltepeg_funtype_17_t x);




struct ltepeg_closure_18_s;
        typedef struct ltepeg_closure_18_s * ltepeg_closure_18_t;

struct ltepeg_closure_18_s {uint32_t count;
         ltepeg_funtype_5_ftbl_t ftbl;
         ltepeg_funtype_5_htbl_t htbl;
        ltepeg_funtype_15_t fvar_1;
        ltepeg_funtype_17_t fvar_2;
        ltepeg_funtype_5_t fvar_3;
        ltepeg_funtype_5_t fvar_4;
        ltepeg_funtype_13_t fvar_5;};

mpz_ptr_t f_ltepeg_closure_18(struct ltepeg_closure_18_s * closure, ltepeg__ent_adt_t bvar);

mpz_ptr_t m_ltepeg_closure_18(struct ltepeg_closure_18_s * closure, ltepeg__ent_adt_t bvar);

extern mpz_ptr_t h_ltepeg_closure_18(ltepeg__ent_adt_t ivar_12, ltepeg_funtype_15_t ivar_7, ltepeg_funtype_17_t ivar_9, ltepeg_funtype_5_t ivar_5, ltepeg_funtype_5_t ivar_3, ltepeg_funtype_13_t ivar_1);

extern ltepeg_closure_18_t new_ltepeg_closure_18(void);

extern void release_ltepeg_closure_18(ltepeg_funtype_5_t closure);

extern ltepeg_closure_18_t copy_ltepeg_closure_18(ltepeg_closure_18_t x);


//reduce_ordinal

struct ltepeg_funtype_19_s;
        typedef struct ltepeg_funtype_19_s * ltepeg_funtype_19_t;

struct ltepeg_funtype_19_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepeg_funtype_19_s *, ltepeg__ent_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepeg_funtype_19_s *, ltepeg__ent_adt_t);
        void (* rptr)(struct ltepeg_funtype_19_s *);
        struct ltepeg_funtype_19_s * (* cptr)(struct ltepeg_funtype_19_s *);};
typedef struct ltepeg_funtype_19_ftbl_s * ltepeg_funtype_19_ftbl_t;

struct ltepeg_funtype_19_hashentry_s {uint32_t keyhash; ltepeg__ent_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepeg_funtype_19_hashentry_s ltepeg_funtype_19_hashentry_t;

struct ltepeg_funtype_19_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_19_hashentry_t * data;}; 
typedef struct ltepeg_funtype_19_htbl_s * ltepeg_funtype_19_htbl_t;

struct ltepeg_funtype_19_s {uint32_t count;
        ltepeg_funtype_19_ftbl_t ftbl;
        ltepeg_funtype_19_htbl_t htbl;};
typedef struct ltepeg_funtype_19_s * ltepeg_funtype_19_t;

extern void release_ltepeg_funtype_19(ltepeg_funtype_19_t x);

extern ltepeg_funtype_19_t copy_ltepeg_funtype_19(ltepeg_funtype_19_t x);

extern bool_t equal_ltepeg_funtype_19(ltepeg_funtype_19_t x, ltepeg_funtype_19_t y);

extern char* json_ltepeg_funtype_19(ltepeg_funtype_19_t x);


//reduce_ordinal

struct ltepeg_funtype_20_s;
        typedef struct ltepeg_funtype_20_s * ltepeg_funtype_20_t;

struct ltepeg_funtype_20_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepeg_funtype_20_s *, uint64_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepeg_funtype_20_s *, uint64_t);
        void (* rptr)(struct ltepeg_funtype_20_s *);
        struct ltepeg_funtype_20_s * (* cptr)(struct ltepeg_funtype_20_s *);};
typedef struct ltepeg_funtype_20_ftbl_s * ltepeg_funtype_20_ftbl_t;

struct ltepeg_funtype_20_hashentry_s {uint32_t keyhash; uint64_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepeg_funtype_20_hashentry_s ltepeg_funtype_20_hashentry_t;

struct ltepeg_funtype_20_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_20_hashentry_t * data;}; 
typedef struct ltepeg_funtype_20_htbl_s * ltepeg_funtype_20_htbl_t;

struct ltepeg_funtype_20_s {uint32_t count;
        ltepeg_funtype_20_ftbl_t ftbl;
        ltepeg_funtype_20_htbl_t htbl;};
typedef struct ltepeg_funtype_20_s * ltepeg_funtype_20_t;

extern void release_ltepeg_funtype_20(ltepeg_funtype_20_t x);

extern ltepeg_funtype_20_t copy_ltepeg_funtype_20(ltepeg_funtype_20_t x);

uint32_t lookup_ltepeg_funtype_20(ltepeg_funtype_20_htbl_t htbl, uint64_t i, uint32_t ihash);

ltepeg_funtype_20_t dupdate_ltepeg_funtype_20(ltepeg_funtype_20_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v);

extern ltepeg_funtype_20_t update_ltepeg_funtype_20(ltepeg_funtype_20_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v);

extern bool_t equal_ltepeg_funtype_20(ltepeg_funtype_20_t x, ltepeg_funtype_20_t y);

extern char* json_ltepeg_funtype_20(ltepeg_funtype_20_t x);


//reduce_ordinal

struct ltepeg_funtype_21_s;
        typedef struct ltepeg_funtype_21_s * ltepeg_funtype_21_t;

struct ltepeg_funtype_21_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepeg_funtype_21_s *, ltepeg_record_7_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepeg_funtype_21_s *, uint64_t, uint32_t);
        void (* rptr)(struct ltepeg_funtype_21_s *);
        struct ltepeg_funtype_21_s * (* cptr)(struct ltepeg_funtype_21_s *);};
typedef struct ltepeg_funtype_21_ftbl_s * ltepeg_funtype_21_ftbl_t;

struct ltepeg_funtype_21_hashentry_s {uint32_t keyhash; ltepeg_record_7_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepeg_funtype_21_hashentry_s ltepeg_funtype_21_hashentry_t;

struct ltepeg_funtype_21_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_21_hashentry_t * data;}; 
typedef struct ltepeg_funtype_21_htbl_s * ltepeg_funtype_21_htbl_t;

struct ltepeg_funtype_21_s {uint32_t count;
        ltepeg_funtype_21_ftbl_t ftbl;
        ltepeg_funtype_21_htbl_t htbl;};
typedef struct ltepeg_funtype_21_s * ltepeg_funtype_21_t;

extern void release_ltepeg_funtype_21(ltepeg_funtype_21_t x);

extern ltepeg_funtype_21_t copy_ltepeg_funtype_21(ltepeg_funtype_21_t x);

extern bool_t equal_ltepeg_funtype_21(ltepeg_funtype_21_t x, ltepeg_funtype_21_t y);

extern char* json_ltepeg_funtype_21(ltepeg_funtype_21_t x);


//reduce_ordinal

struct ltepeg_funtype_22_s;
        typedef struct ltepeg_funtype_22_s * ltepeg_funtype_22_t;

struct ltepeg_funtype_22_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepeg_funtype_22_s *, ltepeg_record_9_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepeg_funtype_22_s *, uint32_t, uint8_t);
        void (* rptr)(struct ltepeg_funtype_22_s *);
        struct ltepeg_funtype_22_s * (* cptr)(struct ltepeg_funtype_22_s *);};
typedef struct ltepeg_funtype_22_ftbl_s * ltepeg_funtype_22_ftbl_t;

struct ltepeg_funtype_22_hashentry_s {uint32_t keyhash; ltepeg_record_9_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepeg_funtype_22_hashentry_s ltepeg_funtype_22_hashentry_t;

struct ltepeg_funtype_22_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_22_hashentry_t * data;}; 
typedef struct ltepeg_funtype_22_htbl_s * ltepeg_funtype_22_htbl_t;

struct ltepeg_funtype_22_s {uint32_t count;
        ltepeg_funtype_22_ftbl_t ftbl;
        ltepeg_funtype_22_htbl_t htbl;};
typedef struct ltepeg_funtype_22_s * ltepeg_funtype_22_t;

extern void release_ltepeg_funtype_22(ltepeg_funtype_22_t x);

extern ltepeg_funtype_22_t copy_ltepeg_funtype_22(ltepeg_funtype_22_t x);

extern bool_t equal_ltepeg_funtype_22(ltepeg_funtype_22_t x, ltepeg_funtype_22_t y);

extern char* json_ltepeg_funtype_22(ltepeg_funtype_22_t x);




struct ltepeg_closure_23_s;
        typedef struct ltepeg_closure_23_s * ltepeg_closure_23_t;

struct ltepeg_closure_23_s {uint32_t count;
         ltepeg_funtype_19_ftbl_t ftbl;
         ltepeg_funtype_19_htbl_t htbl;
        ltepeg_funtype_21_t fvar_1;
        ltepeg_funtype_22_t fvar_2;
        ordstruct_adt__ordstruct_adt_t fvar_3;
        ordstruct_adt__ordstruct_adt_t fvar_4;
        ltepeg_funtype_20_t fvar_5;};

ordstruct_adt__ordstruct_adt_t f_ltepeg_closure_23(struct ltepeg_closure_23_s * closure, ltepeg__ent_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltepeg_closure_23(struct ltepeg_closure_23_s * closure, ltepeg__ent_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltepeg_closure_23(ltepeg__ent_adt_t ivar_10, ltepeg_funtype_21_t ivar_5, ltepeg_funtype_22_t ivar_7, ordstruct_adt__ordstruct_adt_t ivar_4, ordstruct_adt__ordstruct_adt_t ivar_3, ltepeg_funtype_20_t ivar_1);

extern ltepeg_closure_23_t new_ltepeg_closure_23(void);

extern void release_ltepeg_closure_23(ltepeg_funtype_19_t closure);

extern ltepeg_closure_23_t copy_ltepeg_closure_23(ltepeg_closure_23_t x);


//REDUCE_ordinal

struct ltepeg_funtype_24_s;
        typedef struct ltepeg_funtype_24_s * ltepeg_funtype_24_t;

struct ltepeg_funtype_24_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepeg_funtype_24_s *, ltepeg_record_12_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepeg_funtype_24_s *, uint64_t, ltepeg__ent_adt_t);
        void (* rptr)(struct ltepeg_funtype_24_s *);
        struct ltepeg_funtype_24_s * (* cptr)(struct ltepeg_funtype_24_s *);};
typedef struct ltepeg_funtype_24_ftbl_s * ltepeg_funtype_24_ftbl_t;

struct ltepeg_funtype_24_hashentry_s {uint32_t keyhash; ltepeg_record_12_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepeg_funtype_24_hashentry_s ltepeg_funtype_24_hashentry_t;

struct ltepeg_funtype_24_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_24_hashentry_t * data;}; 
typedef struct ltepeg_funtype_24_htbl_s * ltepeg_funtype_24_htbl_t;

struct ltepeg_funtype_24_s {uint32_t count;
        ltepeg_funtype_24_ftbl_t ftbl;
        ltepeg_funtype_24_htbl_t htbl;};
typedef struct ltepeg_funtype_24_s * ltepeg_funtype_24_t;

extern void release_ltepeg_funtype_24(ltepeg_funtype_24_t x);

extern ltepeg_funtype_24_t copy_ltepeg_funtype_24(ltepeg_funtype_24_t x);

extern bool_t equal_ltepeg_funtype_24(ltepeg_funtype_24_t x, ltepeg_funtype_24_t y);

extern char* json_ltepeg_funtype_24(ltepeg_funtype_24_t x);


//REDUCE_ordinal

struct ltepeg_funtype_25_s;
        typedef struct ltepeg_funtype_25_s * ltepeg_funtype_25_t;

struct ltepeg_funtype_25_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepeg_funtype_25_s *, ltepeg_record_14_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepeg_funtype_25_s *, uint64_t, uint32_t, ltepeg__ent_adt_t);
        void (* rptr)(struct ltepeg_funtype_25_s *);
        struct ltepeg_funtype_25_s * (* cptr)(struct ltepeg_funtype_25_s *);};
typedef struct ltepeg_funtype_25_ftbl_s * ltepeg_funtype_25_ftbl_t;

struct ltepeg_funtype_25_hashentry_s {uint32_t keyhash; ltepeg_record_14_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepeg_funtype_25_hashentry_s ltepeg_funtype_25_hashentry_t;

struct ltepeg_funtype_25_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_25_hashentry_t * data;}; 
typedef struct ltepeg_funtype_25_htbl_s * ltepeg_funtype_25_htbl_t;

struct ltepeg_funtype_25_s {uint32_t count;
        ltepeg_funtype_25_ftbl_t ftbl;
        ltepeg_funtype_25_htbl_t htbl;};
typedef struct ltepeg_funtype_25_s * ltepeg_funtype_25_t;

extern void release_ltepeg_funtype_25(ltepeg_funtype_25_t x);

extern ltepeg_funtype_25_t copy_ltepeg_funtype_25(ltepeg_funtype_25_t x);

extern bool_t equal_ltepeg_funtype_25(ltepeg_funtype_25_t x, ltepeg_funtype_25_t y);

extern char* json_ltepeg_funtype_25(ltepeg_funtype_25_t x);


//REDUCE_ordinal

struct ltepeg_funtype_26_s;
        typedef struct ltepeg_funtype_26_s * ltepeg_funtype_26_t;

struct ltepeg_funtype_26_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepeg_funtype_26_s *, ltepeg_record_16_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepeg_funtype_26_s *, uint32_t, uint8_t, ltepeg__ent_adt_t);
        void (* rptr)(struct ltepeg_funtype_26_s *);
        struct ltepeg_funtype_26_s * (* cptr)(struct ltepeg_funtype_26_s *);};
typedef struct ltepeg_funtype_26_ftbl_s * ltepeg_funtype_26_ftbl_t;

struct ltepeg_funtype_26_hashentry_s {uint32_t keyhash; ltepeg_record_16_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepeg_funtype_26_hashentry_s ltepeg_funtype_26_hashentry_t;

struct ltepeg_funtype_26_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_26_hashentry_t * data;}; 
typedef struct ltepeg_funtype_26_htbl_s * ltepeg_funtype_26_htbl_t;

struct ltepeg_funtype_26_s {uint32_t count;
        ltepeg_funtype_26_ftbl_t ftbl;
        ltepeg_funtype_26_htbl_t htbl;};
typedef struct ltepeg_funtype_26_s * ltepeg_funtype_26_t;

extern void release_ltepeg_funtype_26(ltepeg_funtype_26_t x);

extern ltepeg_funtype_26_t copy_ltepeg_funtype_26(ltepeg_funtype_26_t x);

extern bool_t equal_ltepeg_funtype_26(ltepeg_funtype_26_t x, ltepeg_funtype_26_t y);

extern char* json_ltepeg_funtype_26(ltepeg_funtype_26_t x);




struct ltepeg_closure_27_s;
        typedef struct ltepeg_closure_27_s * ltepeg_closure_27_t;

struct ltepeg_closure_27_s {uint32_t count;
         ltepeg_funtype_19_ftbl_t ftbl;
         ltepeg_funtype_19_htbl_t htbl;
        ltepeg_funtype_25_t fvar_1;
        ltepeg_funtype_26_t fvar_2;
        ltepeg_funtype_19_t fvar_3;
        ltepeg_funtype_19_t fvar_4;
        ltepeg_funtype_24_t fvar_5;};

ordstruct_adt__ordstruct_adt_t f_ltepeg_closure_27(struct ltepeg_closure_27_s * closure, ltepeg__ent_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltepeg_closure_27(struct ltepeg_closure_27_s * closure, ltepeg__ent_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltepeg_closure_27(ltepeg__ent_adt_t ivar_12, ltepeg_funtype_25_t ivar_7, ltepeg_funtype_26_t ivar_9, ltepeg_funtype_19_t ivar_5, ltepeg_funtype_19_t ivar_3, ltepeg_funtype_24_t ivar_1);

extern ltepeg_closure_27_t new_ltepeg_closure_27(void);

extern void release_ltepeg_closure_27(ltepeg_funtype_19_t closure);

extern ltepeg_closure_27_t copy_ltepeg_closure_27(ltepeg_closure_27_t x);


//prepeg

struct ltepeg__prepeg_adt_s {
         uint32_t count; 
        uint8_t ltepeg__prepeg_adt_index;};
typedef struct ltepeg__prepeg_adt_s * ltepeg__prepeg_adt_t;

extern ltepeg__prepeg_adt_t new_ltepeg__prepeg_adt(void);

extern void release_ltepeg__prepeg_adt(ltepeg__prepeg_adt_t x);

extern ltepeg__prepeg_adt_t copy_ltepeg__prepeg_adt(ltepeg__prepeg_adt_t x);

extern bool_t equal_ltepeg__prepeg_adt(ltepeg__prepeg_adt_t x, ltepeg__prepeg_adt_t y);
extern char * json_ltepeg__prepeg_adt(ltepeg__prepeg_adt_t x);

typedef struct actual_ltepeg__prepeg_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg__prepeg_adt_t;
void release_ltepeg__prepeg_adt_ptr(pointer_t x, type_actual_t ltepeg__prepeg_adt);

extern bool_t equal_ltepeg__prepeg_adt_ptr(pointer_t x, pointer_t y, actual_ltepeg__prepeg_adt_t T);

extern char * json_ltepeg__prepeg_adt_ptr(pointer_t x,  actual_ltepeg__prepeg_adt_t T);

actual_ltepeg__prepeg_adt_t actual_ltepeg__prepeg_adt(void);

extern ltepeg__prepeg_adt_t update_ltepeg__prepeg_adt_ltepeg__prepeg_adt_index(ltepeg__prepeg_adt_t x, uint8_t v);


//p

struct ltepeg_funtype_29_s;
        typedef struct ltepeg_funtype_29_s * ltepeg_funtype_29_t;

struct ltepeg_funtype_29_ftbl_s {bool_t (* fptr)(struct ltepeg_funtype_29_s *, uint8_t);
        bool_t (* mptr)(struct ltepeg_funtype_29_s *, uint8_t);
        void (* rptr)(struct ltepeg_funtype_29_s *);
        struct ltepeg_funtype_29_s * (* cptr)(struct ltepeg_funtype_29_s *);};
typedef struct ltepeg_funtype_29_ftbl_s * ltepeg_funtype_29_ftbl_t;

struct ltepeg_funtype_29_hashentry_s {uint32_t keyhash; uint8_t key; bool_t value;}; 
typedef struct ltepeg_funtype_29_hashentry_s ltepeg_funtype_29_hashentry_t;

struct ltepeg_funtype_29_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_29_hashentry_t * data;}; 
typedef struct ltepeg_funtype_29_htbl_s * ltepeg_funtype_29_htbl_t;

struct ltepeg_funtype_29_s {uint32_t count;
        ltepeg_funtype_29_ftbl_t ftbl;
        ltepeg_funtype_29_htbl_t htbl;};
typedef struct ltepeg_funtype_29_s * ltepeg_funtype_29_t;

extern void release_ltepeg_funtype_29(ltepeg_funtype_29_t x);

extern ltepeg_funtype_29_t copy_ltepeg_funtype_29(ltepeg_funtype_29_t x);

uint32_t lookup_ltepeg_funtype_29(ltepeg_funtype_29_htbl_t htbl, uint8_t i, uint32_t ihash);

ltepeg_funtype_29_t dupdate_ltepeg_funtype_29(ltepeg_funtype_29_t a, uint8_t i, bool_t v);

extern ltepeg_funtype_29_t update_ltepeg_funtype_29(ltepeg_funtype_29_t a, uint8_t i, bool_t v);

extern bool_t equal_ltepeg_funtype_29(ltepeg_funtype_29_t x, ltepeg_funtype_29_t y);

extern char* json_ltepeg_funtype_29(ltepeg_funtype_29_t x);


//any

struct ltepeg__any_s {
        uint32_t count; 
        uint8_t ltepeg__prepeg_adt_index;
        ltepeg_funtype_29_t p;};
typedef struct ltepeg__any_s * ltepeg__any_t;

extern ltepeg__any_t new_ltepeg__any(void);

extern void release_ltepeg__any(ltepeg__any_t x);

extern ltepeg__any_t copy_ltepeg__any(ltepeg__any_t x);

extern bool_t equal_ltepeg__any(ltepeg__any_t x, ltepeg__any_t y);
extern char * json_ltepeg__any(ltepeg__any_t x);

typedef struct actual_ltepeg__any_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg__any_t;
void release_ltepeg__any_ptr(pointer_t x, type_actual_t ltepeg__any);

extern bool_t equal_ltepeg__any_ptr(pointer_t x, pointer_t y, actual_ltepeg__any_t T);

extern char * json_ltepeg__any_ptr(pointer_t x,  actual_ltepeg__any_t T);

actual_ltepeg__any_t actual_ltepeg__any(void);

extern ltepeg__any_t update_ltepeg__any_ltepeg__prepeg_adt_index(ltepeg__any_t x, uint8_t v);

extern ltepeg__any_t update_ltepeg__any_p(ltepeg__any_t x, ltepeg_funtype_29_t v);


//terminal

struct ltepeg__terminal_s {
        uint32_t count; 
        uint8_t ltepeg__prepeg_adt_index;
        uint8_t a;};
typedef struct ltepeg__terminal_s * ltepeg__terminal_t;

extern ltepeg__terminal_t new_ltepeg__terminal(void);

extern void release_ltepeg__terminal(ltepeg__terminal_t x);

extern ltepeg__terminal_t copy_ltepeg__terminal(ltepeg__terminal_t x);

extern bool_t equal_ltepeg__terminal(ltepeg__terminal_t x, ltepeg__terminal_t y);
extern char * json_ltepeg__terminal(ltepeg__terminal_t x);

typedef struct actual_ltepeg__terminal_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg__terminal_t;
void release_ltepeg__terminal_ptr(pointer_t x, type_actual_t ltepeg__terminal);

extern bool_t equal_ltepeg__terminal_ptr(pointer_t x, pointer_t y, actual_ltepeg__terminal_t T);

extern char * json_ltepeg__terminal_ptr(pointer_t x,  actual_ltepeg__terminal_t T);

actual_ltepeg__terminal_t actual_ltepeg__terminal(void);

extern ltepeg__terminal_t update_ltepeg__terminal_ltepeg__prepeg_adt_index(ltepeg__terminal_t x, uint8_t v);

extern ltepeg__terminal_t update_ltepeg__terminal_a(ltepeg__terminal_t x, uint8_t v);


//lte

struct ltepeg__lte_s {
        uint32_t count; 
        uint8_t ltepeg__prepeg_adt_index;
        uint8_t fst;
        uint8_t lthen;
        uint8_t lelse;};
typedef struct ltepeg__lte_s * ltepeg__lte_t;

extern ltepeg__lte_t new_ltepeg__lte(void);

extern void release_ltepeg__lte(ltepeg__lte_t x);

extern ltepeg__lte_t copy_ltepeg__lte(ltepeg__lte_t x);

extern bool_t equal_ltepeg__lte(ltepeg__lte_t x, ltepeg__lte_t y);
extern char * json_ltepeg__lte(ltepeg__lte_t x);

typedef struct actual_ltepeg__lte_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg__lte_t;
void release_ltepeg__lte_ptr(pointer_t x, type_actual_t ltepeg__lte);

extern bool_t equal_ltepeg__lte_ptr(pointer_t x, pointer_t y, actual_ltepeg__lte_t T);

extern char * json_ltepeg__lte_ptr(pointer_t x,  actual_ltepeg__lte_t T);

actual_ltepeg__lte_t actual_ltepeg__lte(void);

extern ltepeg__lte_t update_ltepeg__lte_ltepeg__prepeg_adt_index(ltepeg__lte_t x, uint8_t v);

extern ltepeg__lte_t update_ltepeg__lte_fst(ltepeg__lte_t x, uint8_t v);

extern ltepeg__lte_t update_ltepeg__lte_lthen(ltepeg__lte_t x, uint8_t v);

extern ltepeg__lte_t update_ltepeg__lte_lelse(ltepeg__lte_t x, uint8_t v);


//prepeg_ord

struct ltepeg_funtype_33_s;
        typedef struct ltepeg_funtype_33_s * ltepeg_funtype_33_t;

struct ltepeg_funtype_33_ftbl_s {uint8_t (* fptr)(struct ltepeg_funtype_33_s *, ltepeg__prepeg_adt_t);
        uint8_t (* mptr)(struct ltepeg_funtype_33_s *, ltepeg__prepeg_adt_t);
        void (* rptr)(struct ltepeg_funtype_33_s *);
        struct ltepeg_funtype_33_s * (* cptr)(struct ltepeg_funtype_33_s *);};
typedef struct ltepeg_funtype_33_ftbl_s * ltepeg_funtype_33_ftbl_t;

struct ltepeg_funtype_33_hashentry_s {uint32_t keyhash; ltepeg__prepeg_adt_t key; uint8_t value;}; 
typedef struct ltepeg_funtype_33_hashentry_s ltepeg_funtype_33_hashentry_t;

struct ltepeg_funtype_33_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_33_hashentry_t * data;}; 
typedef struct ltepeg_funtype_33_htbl_s * ltepeg_funtype_33_htbl_t;

struct ltepeg_funtype_33_s {uint32_t count;
        ltepeg_funtype_33_ftbl_t ftbl;
        ltepeg_funtype_33_htbl_t htbl;};
typedef struct ltepeg_funtype_33_s * ltepeg_funtype_33_t;

extern void release_ltepeg_funtype_33(ltepeg_funtype_33_t x);

extern ltepeg_funtype_33_t copy_ltepeg_funtype_33(ltepeg_funtype_33_t x);

extern bool_t equal_ltepeg_funtype_33(ltepeg_funtype_33_t x, ltepeg_funtype_33_t y);

extern char* json_ltepeg_funtype_33(ltepeg_funtype_33_t x);


//reduce_nat

struct ltepeg_funtype_34_s;
        typedef struct ltepeg_funtype_34_s * ltepeg_funtype_34_t;

struct ltepeg_funtype_34_ftbl_s {mpz_ptr_t (* fptr)(struct ltepeg_funtype_34_s *, ltepeg__prepeg_adt_t);
        mpz_ptr_t (* mptr)(struct ltepeg_funtype_34_s *, ltepeg__prepeg_adt_t);
        void (* rptr)(struct ltepeg_funtype_34_s *);
        struct ltepeg_funtype_34_s * (* cptr)(struct ltepeg_funtype_34_s *);};
typedef struct ltepeg_funtype_34_ftbl_s * ltepeg_funtype_34_ftbl_t;

struct ltepeg_funtype_34_hashentry_s {uint32_t keyhash; ltepeg__prepeg_adt_t key; mpz_t value;}; 
typedef struct ltepeg_funtype_34_hashentry_s ltepeg_funtype_34_hashentry_t;

struct ltepeg_funtype_34_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_34_hashentry_t * data;}; 
typedef struct ltepeg_funtype_34_htbl_s * ltepeg_funtype_34_htbl_t;

struct ltepeg_funtype_34_s {uint32_t count;
        ltepeg_funtype_34_ftbl_t ftbl;
        ltepeg_funtype_34_htbl_t htbl;};
typedef struct ltepeg_funtype_34_s * ltepeg_funtype_34_t;

extern void release_ltepeg_funtype_34(ltepeg_funtype_34_t x);

extern ltepeg_funtype_34_t copy_ltepeg_funtype_34(ltepeg_funtype_34_t x);

extern bool_t equal_ltepeg_funtype_34(ltepeg_funtype_34_t x, ltepeg_funtype_34_t y);

extern char* json_ltepeg_funtype_34(ltepeg_funtype_34_t x);


//reduce_nat

struct ltepeg_funtype_35_s;
        typedef struct ltepeg_funtype_35_s * ltepeg_funtype_35_t;

struct ltepeg_funtype_35_ftbl_s {mpz_ptr_t (* fptr)(struct ltepeg_funtype_35_s *, ltepeg_funtype_29_t);
        mpz_ptr_t (* mptr)(struct ltepeg_funtype_35_s *, ltepeg_funtype_29_t);
        void (* rptr)(struct ltepeg_funtype_35_s *);
        struct ltepeg_funtype_35_s * (* cptr)(struct ltepeg_funtype_35_s *);};
typedef struct ltepeg_funtype_35_ftbl_s * ltepeg_funtype_35_ftbl_t;

struct ltepeg_funtype_35_hashentry_s {uint32_t keyhash; ltepeg_funtype_29_t key; mpz_t value;}; 
typedef struct ltepeg_funtype_35_hashentry_s ltepeg_funtype_35_hashentry_t;

struct ltepeg_funtype_35_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_35_hashentry_t * data;}; 
typedef struct ltepeg_funtype_35_htbl_s * ltepeg_funtype_35_htbl_t;

struct ltepeg_funtype_35_s {uint32_t count;
        ltepeg_funtype_35_ftbl_t ftbl;
        ltepeg_funtype_35_htbl_t htbl;};
typedef struct ltepeg_funtype_35_s * ltepeg_funtype_35_t;

extern void release_ltepeg_funtype_35(ltepeg_funtype_35_t x);

extern ltepeg_funtype_35_t copy_ltepeg_funtype_35(ltepeg_funtype_35_t x);

extern bool_t equal_ltepeg_funtype_35(ltepeg_funtype_35_t x, ltepeg_funtype_35_t y);

extern char* json_ltepeg_funtype_35(ltepeg_funtype_35_t x);


//reduce_nat

struct ltepeg_funtype_36_s;
        typedef struct ltepeg_funtype_36_s * ltepeg_funtype_36_t;

struct ltepeg_funtype_36_ftbl_s {mpz_ptr_t (* fptr)(struct ltepeg_funtype_36_s *, uint8_t);
        mpz_ptr_t (* mptr)(struct ltepeg_funtype_36_s *, uint8_t);
        void (* rptr)(struct ltepeg_funtype_36_s *);
        struct ltepeg_funtype_36_s * (* cptr)(struct ltepeg_funtype_36_s *);};
typedef struct ltepeg_funtype_36_ftbl_s * ltepeg_funtype_36_ftbl_t;

struct ltepeg_funtype_36_hashentry_s {uint32_t keyhash; uint8_t key; mpz_t value;}; 
typedef struct ltepeg_funtype_36_hashentry_s ltepeg_funtype_36_hashentry_t;

struct ltepeg_funtype_36_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_36_hashentry_t * data;}; 
typedef struct ltepeg_funtype_36_htbl_s * ltepeg_funtype_36_htbl_t;

struct ltepeg_funtype_36_s {uint32_t count;
        ltepeg_funtype_36_ftbl_t ftbl;
        ltepeg_funtype_36_htbl_t htbl;};
typedef struct ltepeg_funtype_36_s * ltepeg_funtype_36_t;

extern void release_ltepeg_funtype_36(ltepeg_funtype_36_t x);

extern ltepeg_funtype_36_t copy_ltepeg_funtype_36(ltepeg_funtype_36_t x);

uint32_t lookup_ltepeg_funtype_36(ltepeg_funtype_36_htbl_t htbl, uint8_t i, uint32_t ihash);

ltepeg_funtype_36_t dupdate_ltepeg_funtype_36(ltepeg_funtype_36_t a, uint8_t i, mpz_ptr_t v);

extern ltepeg_funtype_36_t update_ltepeg_funtype_36(ltepeg_funtype_36_t a, uint8_t i, mpz_ptr_t v);

extern bool_t equal_ltepeg_funtype_36(ltepeg_funtype_36_t x, ltepeg_funtype_36_t y);

extern char* json_ltepeg_funtype_36(ltepeg_funtype_36_t x);


//reduce_nat

struct ltepeg_record_37_s {
        uint32_t count; 
        uint8_t project_1;
        uint8_t project_2;
        uint8_t project_3;};
typedef struct ltepeg_record_37_s * ltepeg_record_37_t;

extern ltepeg_record_37_t new_ltepeg_record_37(void);

extern void release_ltepeg_record_37(ltepeg_record_37_t x);

extern ltepeg_record_37_t copy_ltepeg_record_37(ltepeg_record_37_t x);

extern bool_t equal_ltepeg_record_37(ltepeg_record_37_t x, ltepeg_record_37_t y);
extern char * json_ltepeg_record_37(ltepeg_record_37_t x);

typedef struct actual_ltepeg_record_37_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_record_37_t;
void release_ltepeg_record_37_ptr(pointer_t x, type_actual_t ltepeg_record_37);

extern bool_t equal_ltepeg_record_37_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_37_t T);

extern char * json_ltepeg_record_37_ptr(pointer_t x,  actual_ltepeg_record_37_t T);

actual_ltepeg_record_37_t actual_ltepeg_record_37(void);

extern ltepeg_record_37_t update_ltepeg_record_37_project_1(ltepeg_record_37_t x, uint8_t v);

extern ltepeg_record_37_t update_ltepeg_record_37_project_2(ltepeg_record_37_t x, uint8_t v);

extern ltepeg_record_37_t update_ltepeg_record_37_project_3(ltepeg_record_37_t x, uint8_t v);


//reduce_nat

struct ltepeg_funtype_38_s;
        typedef struct ltepeg_funtype_38_s * ltepeg_funtype_38_t;

struct ltepeg_funtype_38_ftbl_s {mpz_ptr_t (* fptr)(struct ltepeg_funtype_38_s *, ltepeg_record_37_t);
        mpz_ptr_t (* mptr)(struct ltepeg_funtype_38_s *, uint8_t, uint8_t, uint8_t);
        void (* rptr)(struct ltepeg_funtype_38_s *);
        struct ltepeg_funtype_38_s * (* cptr)(struct ltepeg_funtype_38_s *);};
typedef struct ltepeg_funtype_38_ftbl_s * ltepeg_funtype_38_ftbl_t;

struct ltepeg_funtype_38_hashentry_s {uint32_t keyhash; ltepeg_record_37_t key; mpz_t value;}; 
typedef struct ltepeg_funtype_38_hashentry_s ltepeg_funtype_38_hashentry_t;

struct ltepeg_funtype_38_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_38_hashentry_t * data;}; 
typedef struct ltepeg_funtype_38_htbl_s * ltepeg_funtype_38_htbl_t;

struct ltepeg_funtype_38_s {uint32_t count;
        ltepeg_funtype_38_ftbl_t ftbl;
        ltepeg_funtype_38_htbl_t htbl;};
typedef struct ltepeg_funtype_38_s * ltepeg_funtype_38_t;

extern void release_ltepeg_funtype_38(ltepeg_funtype_38_t x);

extern ltepeg_funtype_38_t copy_ltepeg_funtype_38(ltepeg_funtype_38_t x);

extern bool_t equal_ltepeg_funtype_38(ltepeg_funtype_38_t x, ltepeg_funtype_38_t y);

extern char* json_ltepeg_funtype_38(ltepeg_funtype_38_t x);




struct ltepeg_closure_39_s;
        typedef struct ltepeg_closure_39_s * ltepeg_closure_39_t;

struct ltepeg_closure_39_s {uint32_t count;
         ltepeg_funtype_34_ftbl_t ftbl;
         ltepeg_funtype_34_htbl_t htbl;
        ltepeg_funtype_36_t fvar_1;
        ltepeg_funtype_38_t fvar_2;
        ltepeg_funtype_35_t fvar_3;
        mpz_t fvar_4;
        mpz_t fvar_5;};

mpz_ptr_t f_ltepeg_closure_39(struct ltepeg_closure_39_s * closure, ltepeg__prepeg_adt_t bvar);

mpz_ptr_t m_ltepeg_closure_39(struct ltepeg_closure_39_s * closure, ltepeg__prepeg_adt_t bvar);

extern mpz_ptr_t h_ltepeg_closure_39(ltepeg__prepeg_adt_t ivar_11, ltepeg_funtype_36_t ivar_6, ltepeg_funtype_38_t ivar_8, ltepeg_funtype_35_t ivar_3, mpz_ptr_t ivar_2, mpz_ptr_t ivar_1);

extern ltepeg_closure_39_t new_ltepeg_closure_39(void);

extern void release_ltepeg_closure_39(ltepeg_funtype_34_t closure);

extern ltepeg_closure_39_t copy_ltepeg_closure_39(ltepeg_closure_39_t x);


//REDUCE_nat

struct ltepeg_record_40_s {
        uint32_t count; 
        ltepeg_funtype_29_t project_1;
        ltepeg__prepeg_adt_t project_2;};
typedef struct ltepeg_record_40_s * ltepeg_record_40_t;

extern ltepeg_record_40_t new_ltepeg_record_40(void);

extern void release_ltepeg_record_40(ltepeg_record_40_t x);

extern ltepeg_record_40_t copy_ltepeg_record_40(ltepeg_record_40_t x);

extern bool_t equal_ltepeg_record_40(ltepeg_record_40_t x, ltepeg_record_40_t y);
extern char * json_ltepeg_record_40(ltepeg_record_40_t x);

typedef struct actual_ltepeg_record_40_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_record_40_t;
void release_ltepeg_record_40_ptr(pointer_t x, type_actual_t ltepeg_record_40);

extern bool_t equal_ltepeg_record_40_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_40_t T);

extern char * json_ltepeg_record_40_ptr(pointer_t x,  actual_ltepeg_record_40_t T);

actual_ltepeg_record_40_t actual_ltepeg_record_40(void);

extern ltepeg_record_40_t update_ltepeg_record_40_project_1(ltepeg_record_40_t x, ltepeg_funtype_29_t v);

extern ltepeg_record_40_t update_ltepeg_record_40_project_2(ltepeg_record_40_t x, ltepeg__prepeg_adt_t v);


//REDUCE_nat

struct ltepeg_funtype_41_s;
        typedef struct ltepeg_funtype_41_s * ltepeg_funtype_41_t;

struct ltepeg_funtype_41_ftbl_s {mpz_ptr_t (* fptr)(struct ltepeg_funtype_41_s *, ltepeg_record_40_t);
        mpz_ptr_t (* mptr)(struct ltepeg_funtype_41_s *, ltepeg_funtype_29_t, ltepeg__prepeg_adt_t);
        void (* rptr)(struct ltepeg_funtype_41_s *);
        struct ltepeg_funtype_41_s * (* cptr)(struct ltepeg_funtype_41_s *);};
typedef struct ltepeg_funtype_41_ftbl_s * ltepeg_funtype_41_ftbl_t;

struct ltepeg_funtype_41_hashentry_s {uint32_t keyhash; ltepeg_record_40_t key; mpz_t value;}; 
typedef struct ltepeg_funtype_41_hashentry_s ltepeg_funtype_41_hashentry_t;

struct ltepeg_funtype_41_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_41_hashentry_t * data;}; 
typedef struct ltepeg_funtype_41_htbl_s * ltepeg_funtype_41_htbl_t;

struct ltepeg_funtype_41_s {uint32_t count;
        ltepeg_funtype_41_ftbl_t ftbl;
        ltepeg_funtype_41_htbl_t htbl;};
typedef struct ltepeg_funtype_41_s * ltepeg_funtype_41_t;

extern void release_ltepeg_funtype_41(ltepeg_funtype_41_t x);

extern ltepeg_funtype_41_t copy_ltepeg_funtype_41(ltepeg_funtype_41_t x);

extern bool_t equal_ltepeg_funtype_41(ltepeg_funtype_41_t x, ltepeg_funtype_41_t y);

extern char* json_ltepeg_funtype_41(ltepeg_funtype_41_t x);


//REDUCE_nat

struct ltepeg_record_42_s {
        uint32_t count; 
        uint8_t project_1;
        ltepeg__prepeg_adt_t project_2;};
typedef struct ltepeg_record_42_s * ltepeg_record_42_t;

extern ltepeg_record_42_t new_ltepeg_record_42(void);

extern void release_ltepeg_record_42(ltepeg_record_42_t x);

extern ltepeg_record_42_t copy_ltepeg_record_42(ltepeg_record_42_t x);

extern bool_t equal_ltepeg_record_42(ltepeg_record_42_t x, ltepeg_record_42_t y);
extern char * json_ltepeg_record_42(ltepeg_record_42_t x);

typedef struct actual_ltepeg_record_42_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_record_42_t;
void release_ltepeg_record_42_ptr(pointer_t x, type_actual_t ltepeg_record_42);

extern bool_t equal_ltepeg_record_42_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_42_t T);

extern char * json_ltepeg_record_42_ptr(pointer_t x,  actual_ltepeg_record_42_t T);

actual_ltepeg_record_42_t actual_ltepeg_record_42(void);

extern ltepeg_record_42_t update_ltepeg_record_42_project_1(ltepeg_record_42_t x, uint8_t v);

extern ltepeg_record_42_t update_ltepeg_record_42_project_2(ltepeg_record_42_t x, ltepeg__prepeg_adt_t v);


//REDUCE_nat

struct ltepeg_funtype_43_s;
        typedef struct ltepeg_funtype_43_s * ltepeg_funtype_43_t;

struct ltepeg_funtype_43_ftbl_s {mpz_ptr_t (* fptr)(struct ltepeg_funtype_43_s *, ltepeg_record_42_t);
        mpz_ptr_t (* mptr)(struct ltepeg_funtype_43_s *, uint8_t, ltepeg__prepeg_adt_t);
        void (* rptr)(struct ltepeg_funtype_43_s *);
        struct ltepeg_funtype_43_s * (* cptr)(struct ltepeg_funtype_43_s *);};
typedef struct ltepeg_funtype_43_ftbl_s * ltepeg_funtype_43_ftbl_t;

struct ltepeg_funtype_43_hashentry_s {uint32_t keyhash; ltepeg_record_42_t key; mpz_t value;}; 
typedef struct ltepeg_funtype_43_hashentry_s ltepeg_funtype_43_hashentry_t;

struct ltepeg_funtype_43_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_43_hashentry_t * data;}; 
typedef struct ltepeg_funtype_43_htbl_s * ltepeg_funtype_43_htbl_t;

struct ltepeg_funtype_43_s {uint32_t count;
        ltepeg_funtype_43_ftbl_t ftbl;
        ltepeg_funtype_43_htbl_t htbl;};
typedef struct ltepeg_funtype_43_s * ltepeg_funtype_43_t;

extern void release_ltepeg_funtype_43(ltepeg_funtype_43_t x);

extern ltepeg_funtype_43_t copy_ltepeg_funtype_43(ltepeg_funtype_43_t x);

extern bool_t equal_ltepeg_funtype_43(ltepeg_funtype_43_t x, ltepeg_funtype_43_t y);

extern char* json_ltepeg_funtype_43(ltepeg_funtype_43_t x);


//REDUCE_nat

struct ltepeg_record_44_s {
        uint32_t count; 
        uint8_t project_1;
        uint8_t project_2;
        uint8_t project_3;
        ltepeg__prepeg_adt_t project_4;};
typedef struct ltepeg_record_44_s * ltepeg_record_44_t;

extern ltepeg_record_44_t new_ltepeg_record_44(void);

extern void release_ltepeg_record_44(ltepeg_record_44_t x);

extern ltepeg_record_44_t copy_ltepeg_record_44(ltepeg_record_44_t x);

extern bool_t equal_ltepeg_record_44(ltepeg_record_44_t x, ltepeg_record_44_t y);
extern char * json_ltepeg_record_44(ltepeg_record_44_t x);

typedef struct actual_ltepeg_record_44_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_record_44_t;
void release_ltepeg_record_44_ptr(pointer_t x, type_actual_t ltepeg_record_44);

extern bool_t equal_ltepeg_record_44_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_44_t T);

extern char * json_ltepeg_record_44_ptr(pointer_t x,  actual_ltepeg_record_44_t T);

actual_ltepeg_record_44_t actual_ltepeg_record_44(void);

extern ltepeg_record_44_t update_ltepeg_record_44_project_1(ltepeg_record_44_t x, uint8_t v);

extern ltepeg_record_44_t update_ltepeg_record_44_project_2(ltepeg_record_44_t x, uint8_t v);

extern ltepeg_record_44_t update_ltepeg_record_44_project_3(ltepeg_record_44_t x, uint8_t v);

extern ltepeg_record_44_t update_ltepeg_record_44_project_4(ltepeg_record_44_t x, ltepeg__prepeg_adt_t v);


//REDUCE_nat

struct ltepeg_funtype_45_s;
        typedef struct ltepeg_funtype_45_s * ltepeg_funtype_45_t;

struct ltepeg_funtype_45_ftbl_s {mpz_ptr_t (* fptr)(struct ltepeg_funtype_45_s *, ltepeg_record_44_t);
        mpz_ptr_t (* mptr)(struct ltepeg_funtype_45_s *, uint8_t, uint8_t, uint8_t, ltepeg__prepeg_adt_t);
        void (* rptr)(struct ltepeg_funtype_45_s *);
        struct ltepeg_funtype_45_s * (* cptr)(struct ltepeg_funtype_45_s *);};
typedef struct ltepeg_funtype_45_ftbl_s * ltepeg_funtype_45_ftbl_t;

struct ltepeg_funtype_45_hashentry_s {uint32_t keyhash; ltepeg_record_44_t key; mpz_t value;}; 
typedef struct ltepeg_funtype_45_hashentry_s ltepeg_funtype_45_hashentry_t;

struct ltepeg_funtype_45_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_45_hashentry_t * data;}; 
typedef struct ltepeg_funtype_45_htbl_s * ltepeg_funtype_45_htbl_t;

struct ltepeg_funtype_45_s {uint32_t count;
        ltepeg_funtype_45_ftbl_t ftbl;
        ltepeg_funtype_45_htbl_t htbl;};
typedef struct ltepeg_funtype_45_s * ltepeg_funtype_45_t;

extern void release_ltepeg_funtype_45(ltepeg_funtype_45_t x);

extern ltepeg_funtype_45_t copy_ltepeg_funtype_45(ltepeg_funtype_45_t x);

extern bool_t equal_ltepeg_funtype_45(ltepeg_funtype_45_t x, ltepeg_funtype_45_t y);

extern char* json_ltepeg_funtype_45(ltepeg_funtype_45_t x);




struct ltepeg_closure_46_s;
        typedef struct ltepeg_closure_46_s * ltepeg_closure_46_t;

struct ltepeg_closure_46_s {uint32_t count;
         ltepeg_funtype_34_ftbl_t ftbl;
         ltepeg_funtype_34_htbl_t htbl;
        ltepeg_funtype_43_t fvar_1;
        ltepeg_funtype_45_t fvar_2;
        ltepeg_funtype_41_t fvar_3;
        ltepeg_funtype_34_t fvar_4;
        ltepeg_funtype_34_t fvar_5;};

mpz_ptr_t f_ltepeg_closure_46(struct ltepeg_closure_46_s * closure, ltepeg__prepeg_adt_t bvar);

mpz_ptr_t m_ltepeg_closure_46(struct ltepeg_closure_46_s * closure, ltepeg__prepeg_adt_t bvar);

extern mpz_ptr_t h_ltepeg_closure_46(ltepeg__prepeg_adt_t ivar_13, ltepeg_funtype_43_t ivar_8, ltepeg_funtype_45_t ivar_10, ltepeg_funtype_41_t ivar_5, ltepeg_funtype_34_t ivar_3, ltepeg_funtype_34_t ivar_1);

extern ltepeg_closure_46_t new_ltepeg_closure_46(void);

extern void release_ltepeg_closure_46(ltepeg_funtype_34_t closure);

extern ltepeg_closure_46_t copy_ltepeg_closure_46(ltepeg_closure_46_t x);


//reduce_ordinal

struct ltepeg_funtype_47_s;
        typedef struct ltepeg_funtype_47_s * ltepeg_funtype_47_t;

struct ltepeg_funtype_47_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepeg_funtype_47_s *, ltepeg__prepeg_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepeg_funtype_47_s *, ltepeg__prepeg_adt_t);
        void (* rptr)(struct ltepeg_funtype_47_s *);
        struct ltepeg_funtype_47_s * (* cptr)(struct ltepeg_funtype_47_s *);};
typedef struct ltepeg_funtype_47_ftbl_s * ltepeg_funtype_47_ftbl_t;

struct ltepeg_funtype_47_hashentry_s {uint32_t keyhash; ltepeg__prepeg_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepeg_funtype_47_hashentry_s ltepeg_funtype_47_hashentry_t;

struct ltepeg_funtype_47_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_47_hashentry_t * data;}; 
typedef struct ltepeg_funtype_47_htbl_s * ltepeg_funtype_47_htbl_t;

struct ltepeg_funtype_47_s {uint32_t count;
        ltepeg_funtype_47_ftbl_t ftbl;
        ltepeg_funtype_47_htbl_t htbl;};
typedef struct ltepeg_funtype_47_s * ltepeg_funtype_47_t;

extern void release_ltepeg_funtype_47(ltepeg_funtype_47_t x);

extern ltepeg_funtype_47_t copy_ltepeg_funtype_47(ltepeg_funtype_47_t x);

extern bool_t equal_ltepeg_funtype_47(ltepeg_funtype_47_t x, ltepeg_funtype_47_t y);

extern char* json_ltepeg_funtype_47(ltepeg_funtype_47_t x);


//reduce_ordinal

struct ltepeg_funtype_48_s;
        typedef struct ltepeg_funtype_48_s * ltepeg_funtype_48_t;

struct ltepeg_funtype_48_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepeg_funtype_48_s *, ltepeg_funtype_29_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepeg_funtype_48_s *, ltepeg_funtype_29_t);
        void (* rptr)(struct ltepeg_funtype_48_s *);
        struct ltepeg_funtype_48_s * (* cptr)(struct ltepeg_funtype_48_s *);};
typedef struct ltepeg_funtype_48_ftbl_s * ltepeg_funtype_48_ftbl_t;

struct ltepeg_funtype_48_hashentry_s {uint32_t keyhash; ltepeg_funtype_29_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepeg_funtype_48_hashentry_s ltepeg_funtype_48_hashentry_t;

struct ltepeg_funtype_48_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_48_hashentry_t * data;}; 
typedef struct ltepeg_funtype_48_htbl_s * ltepeg_funtype_48_htbl_t;

struct ltepeg_funtype_48_s {uint32_t count;
        ltepeg_funtype_48_ftbl_t ftbl;
        ltepeg_funtype_48_htbl_t htbl;};
typedef struct ltepeg_funtype_48_s * ltepeg_funtype_48_t;

extern void release_ltepeg_funtype_48(ltepeg_funtype_48_t x);

extern ltepeg_funtype_48_t copy_ltepeg_funtype_48(ltepeg_funtype_48_t x);

extern bool_t equal_ltepeg_funtype_48(ltepeg_funtype_48_t x, ltepeg_funtype_48_t y);

extern char* json_ltepeg_funtype_48(ltepeg_funtype_48_t x);


//reduce_ordinal

struct ltepeg_funtype_49_s;
        typedef struct ltepeg_funtype_49_s * ltepeg_funtype_49_t;

struct ltepeg_funtype_49_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepeg_funtype_49_s *, uint8_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepeg_funtype_49_s *, uint8_t);
        void (* rptr)(struct ltepeg_funtype_49_s *);
        struct ltepeg_funtype_49_s * (* cptr)(struct ltepeg_funtype_49_s *);};
typedef struct ltepeg_funtype_49_ftbl_s * ltepeg_funtype_49_ftbl_t;

struct ltepeg_funtype_49_hashentry_s {uint32_t keyhash; uint8_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepeg_funtype_49_hashentry_s ltepeg_funtype_49_hashentry_t;

struct ltepeg_funtype_49_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_49_hashentry_t * data;}; 
typedef struct ltepeg_funtype_49_htbl_s * ltepeg_funtype_49_htbl_t;

struct ltepeg_funtype_49_s {uint32_t count;
        ltepeg_funtype_49_ftbl_t ftbl;
        ltepeg_funtype_49_htbl_t htbl;};
typedef struct ltepeg_funtype_49_s * ltepeg_funtype_49_t;

extern void release_ltepeg_funtype_49(ltepeg_funtype_49_t x);

extern ltepeg_funtype_49_t copy_ltepeg_funtype_49(ltepeg_funtype_49_t x);

uint32_t lookup_ltepeg_funtype_49(ltepeg_funtype_49_htbl_t htbl, uint8_t i, uint32_t ihash);

ltepeg_funtype_49_t dupdate_ltepeg_funtype_49(ltepeg_funtype_49_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v);

extern ltepeg_funtype_49_t update_ltepeg_funtype_49(ltepeg_funtype_49_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v);

extern bool_t equal_ltepeg_funtype_49(ltepeg_funtype_49_t x, ltepeg_funtype_49_t y);

extern char* json_ltepeg_funtype_49(ltepeg_funtype_49_t x);


//reduce_ordinal

struct ltepeg_funtype_50_s;
        typedef struct ltepeg_funtype_50_s * ltepeg_funtype_50_t;

struct ltepeg_funtype_50_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepeg_funtype_50_s *, ltepeg_record_37_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepeg_funtype_50_s *, uint8_t, uint8_t, uint8_t);
        void (* rptr)(struct ltepeg_funtype_50_s *);
        struct ltepeg_funtype_50_s * (* cptr)(struct ltepeg_funtype_50_s *);};
typedef struct ltepeg_funtype_50_ftbl_s * ltepeg_funtype_50_ftbl_t;

struct ltepeg_funtype_50_hashentry_s {uint32_t keyhash; ltepeg_record_37_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepeg_funtype_50_hashentry_s ltepeg_funtype_50_hashentry_t;

struct ltepeg_funtype_50_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_50_hashentry_t * data;}; 
typedef struct ltepeg_funtype_50_htbl_s * ltepeg_funtype_50_htbl_t;

struct ltepeg_funtype_50_s {uint32_t count;
        ltepeg_funtype_50_ftbl_t ftbl;
        ltepeg_funtype_50_htbl_t htbl;};
typedef struct ltepeg_funtype_50_s * ltepeg_funtype_50_t;

extern void release_ltepeg_funtype_50(ltepeg_funtype_50_t x);

extern ltepeg_funtype_50_t copy_ltepeg_funtype_50(ltepeg_funtype_50_t x);

extern bool_t equal_ltepeg_funtype_50(ltepeg_funtype_50_t x, ltepeg_funtype_50_t y);

extern char* json_ltepeg_funtype_50(ltepeg_funtype_50_t x);




struct ltepeg_closure_51_s;
        typedef struct ltepeg_closure_51_s * ltepeg_closure_51_t;

struct ltepeg_closure_51_s {uint32_t count;
         ltepeg_funtype_47_ftbl_t ftbl;
         ltepeg_funtype_47_htbl_t htbl;
        ltepeg_funtype_49_t fvar_1;
        ltepeg_funtype_50_t fvar_2;
        ltepeg_funtype_48_t fvar_3;
        ordstruct_adt__ordstruct_adt_t fvar_4;
        ordstruct_adt__ordstruct_adt_t fvar_5;};

ordstruct_adt__ordstruct_adt_t f_ltepeg_closure_51(struct ltepeg_closure_51_s * closure, ltepeg__prepeg_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltepeg_closure_51(struct ltepeg_closure_51_s * closure, ltepeg__prepeg_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltepeg_closure_51(ltepeg__prepeg_adt_t ivar_11, ltepeg_funtype_49_t ivar_6, ltepeg_funtype_50_t ivar_8, ltepeg_funtype_48_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1);

extern ltepeg_closure_51_t new_ltepeg_closure_51(void);

extern void release_ltepeg_closure_51(ltepeg_funtype_47_t closure);

extern ltepeg_closure_51_t copy_ltepeg_closure_51(ltepeg_closure_51_t x);


//REDUCE_ordinal

struct ltepeg_funtype_52_s;
        typedef struct ltepeg_funtype_52_s * ltepeg_funtype_52_t;

struct ltepeg_funtype_52_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepeg_funtype_52_s *, ltepeg_record_40_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepeg_funtype_52_s *, ltepeg_funtype_29_t, ltepeg__prepeg_adt_t);
        void (* rptr)(struct ltepeg_funtype_52_s *);
        struct ltepeg_funtype_52_s * (* cptr)(struct ltepeg_funtype_52_s *);};
typedef struct ltepeg_funtype_52_ftbl_s * ltepeg_funtype_52_ftbl_t;

struct ltepeg_funtype_52_hashentry_s {uint32_t keyhash; ltepeg_record_40_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepeg_funtype_52_hashentry_s ltepeg_funtype_52_hashentry_t;

struct ltepeg_funtype_52_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_52_hashentry_t * data;}; 
typedef struct ltepeg_funtype_52_htbl_s * ltepeg_funtype_52_htbl_t;

struct ltepeg_funtype_52_s {uint32_t count;
        ltepeg_funtype_52_ftbl_t ftbl;
        ltepeg_funtype_52_htbl_t htbl;};
typedef struct ltepeg_funtype_52_s * ltepeg_funtype_52_t;

extern void release_ltepeg_funtype_52(ltepeg_funtype_52_t x);

extern ltepeg_funtype_52_t copy_ltepeg_funtype_52(ltepeg_funtype_52_t x);

extern bool_t equal_ltepeg_funtype_52(ltepeg_funtype_52_t x, ltepeg_funtype_52_t y);

extern char* json_ltepeg_funtype_52(ltepeg_funtype_52_t x);


//REDUCE_ordinal

struct ltepeg_funtype_53_s;
        typedef struct ltepeg_funtype_53_s * ltepeg_funtype_53_t;

struct ltepeg_funtype_53_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepeg_funtype_53_s *, ltepeg_record_42_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepeg_funtype_53_s *, uint8_t, ltepeg__prepeg_adt_t);
        void (* rptr)(struct ltepeg_funtype_53_s *);
        struct ltepeg_funtype_53_s * (* cptr)(struct ltepeg_funtype_53_s *);};
typedef struct ltepeg_funtype_53_ftbl_s * ltepeg_funtype_53_ftbl_t;

struct ltepeg_funtype_53_hashentry_s {uint32_t keyhash; ltepeg_record_42_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepeg_funtype_53_hashentry_s ltepeg_funtype_53_hashentry_t;

struct ltepeg_funtype_53_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_53_hashentry_t * data;}; 
typedef struct ltepeg_funtype_53_htbl_s * ltepeg_funtype_53_htbl_t;

struct ltepeg_funtype_53_s {uint32_t count;
        ltepeg_funtype_53_ftbl_t ftbl;
        ltepeg_funtype_53_htbl_t htbl;};
typedef struct ltepeg_funtype_53_s * ltepeg_funtype_53_t;

extern void release_ltepeg_funtype_53(ltepeg_funtype_53_t x);

extern ltepeg_funtype_53_t copy_ltepeg_funtype_53(ltepeg_funtype_53_t x);

extern bool_t equal_ltepeg_funtype_53(ltepeg_funtype_53_t x, ltepeg_funtype_53_t y);

extern char* json_ltepeg_funtype_53(ltepeg_funtype_53_t x);


//REDUCE_ordinal

struct ltepeg_funtype_54_s;
        typedef struct ltepeg_funtype_54_s * ltepeg_funtype_54_t;

struct ltepeg_funtype_54_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepeg_funtype_54_s *, ltepeg_record_44_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepeg_funtype_54_s *, uint8_t, uint8_t, uint8_t, ltepeg__prepeg_adt_t);
        void (* rptr)(struct ltepeg_funtype_54_s *);
        struct ltepeg_funtype_54_s * (* cptr)(struct ltepeg_funtype_54_s *);};
typedef struct ltepeg_funtype_54_ftbl_s * ltepeg_funtype_54_ftbl_t;

struct ltepeg_funtype_54_hashentry_s {uint32_t keyhash; ltepeg_record_44_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepeg_funtype_54_hashentry_s ltepeg_funtype_54_hashentry_t;

struct ltepeg_funtype_54_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_54_hashentry_t * data;}; 
typedef struct ltepeg_funtype_54_htbl_s * ltepeg_funtype_54_htbl_t;

struct ltepeg_funtype_54_s {uint32_t count;
        ltepeg_funtype_54_ftbl_t ftbl;
        ltepeg_funtype_54_htbl_t htbl;};
typedef struct ltepeg_funtype_54_s * ltepeg_funtype_54_t;

extern void release_ltepeg_funtype_54(ltepeg_funtype_54_t x);

extern ltepeg_funtype_54_t copy_ltepeg_funtype_54(ltepeg_funtype_54_t x);

extern bool_t equal_ltepeg_funtype_54(ltepeg_funtype_54_t x, ltepeg_funtype_54_t y);

extern char* json_ltepeg_funtype_54(ltepeg_funtype_54_t x);




struct ltepeg_closure_55_s;
        typedef struct ltepeg_closure_55_s * ltepeg_closure_55_t;

struct ltepeg_closure_55_s {uint32_t count;
         ltepeg_funtype_47_ftbl_t ftbl;
         ltepeg_funtype_47_htbl_t htbl;
        ltepeg_funtype_53_t fvar_1;
        ltepeg_funtype_54_t fvar_2;
        ltepeg_funtype_52_t fvar_3;
        ltepeg_funtype_47_t fvar_4;
        ltepeg_funtype_47_t fvar_5;};

ordstruct_adt__ordstruct_adt_t f_ltepeg_closure_55(struct ltepeg_closure_55_s * closure, ltepeg__prepeg_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltepeg_closure_55(struct ltepeg_closure_55_s * closure, ltepeg__prepeg_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltepeg_closure_55(ltepeg__prepeg_adt_t ivar_13, ltepeg_funtype_53_t ivar_8, ltepeg_funtype_54_t ivar_10, ltepeg_funtype_52_t ivar_5, ltepeg_funtype_47_t ivar_3, ltepeg_funtype_47_t ivar_1);

extern ltepeg_closure_55_t new_ltepeg_closure_55(void);

extern void release_ltepeg_closure_55(ltepeg_funtype_47_t closure);

extern ltepeg_closure_55_t copy_ltepeg_closure_55(ltepeg_closure_55_t x);


//good_good_entry?

struct ltepeg_funtype_56_s;
        typedef struct ltepeg_funtype_56_s * ltepeg_funtype_56_t;

struct ltepeg_funtype_56_ftbl_s {bool_t (* fptr)(struct ltepeg_funtype_56_s *, ltepeg__ent_adt_t);
        bool_t (* mptr)(struct ltepeg_funtype_56_s *, ltepeg__ent_adt_t);
        void (* rptr)(struct ltepeg_funtype_56_s *);
        struct ltepeg_funtype_56_s * (* cptr)(struct ltepeg_funtype_56_s *);};
typedef struct ltepeg_funtype_56_ftbl_s * ltepeg_funtype_56_ftbl_t;

struct ltepeg_funtype_56_hashentry_s {uint32_t keyhash; ltepeg__ent_adt_t key; bool_t value;}; 
typedef struct ltepeg_funtype_56_hashentry_s ltepeg_funtype_56_hashentry_t;

struct ltepeg_funtype_56_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_56_hashentry_t * data;}; 
typedef struct ltepeg_funtype_56_htbl_s * ltepeg_funtype_56_htbl_t;

struct ltepeg_funtype_56_s {uint32_t count;
        ltepeg_funtype_56_ftbl_t ftbl;
        ltepeg_funtype_56_htbl_t htbl;};
typedef struct ltepeg_funtype_56_s * ltepeg_funtype_56_t;

extern void release_ltepeg_funtype_56(ltepeg_funtype_56_t x);

extern ltepeg_funtype_56_t copy_ltepeg_funtype_56(ltepeg_funtype_56_t x);

extern bool_t equal_ltepeg_funtype_56(ltepeg_funtype_56_t x, ltepeg_funtype_56_t y);

extern char* json_ltepeg_funtype_56(ltepeg_funtype_56_t x);




struct ltepeg_closure_57_s;
        typedef struct ltepeg_closure_57_s * ltepeg_closure_57_t;

struct ltepeg_closure_57_s {uint32_t count;
         ltepeg_funtype_56_ftbl_t ftbl;
         ltepeg_funtype_56_htbl_t htbl;
        uint32_t fvar_1;
        uint32_t fvar_2;};

bool_t f_ltepeg_closure_57(struct ltepeg_closure_57_s * closure, ltepeg__ent_adt_t bvar);

bool_t m_ltepeg_closure_57(struct ltepeg_closure_57_s * closure, ltepeg__ent_adt_t bvar);

extern bool_t h_ltepeg_closure_57(ltepeg__ent_adt_t ivar_4, uint32_t ivar_2, uint32_t ivar_1);

extern ltepeg_closure_57_t new_ltepeg_closure_57(void);

extern void release_ltepeg_closure_57(ltepeg_funtype_56_t closure);

extern ltepeg_closure_57_t copy_ltepeg_closure_57(ltepeg_closure_57_t x);




struct ltepeg_closure_58_s;
        typedef struct ltepeg_closure_58_s * ltepeg_closure_58_t;

struct ltepeg_closure_58_s {uint32_t count;
         ltepeg_funtype_56_ftbl_t ftbl;
         ltepeg_funtype_56_htbl_t htbl;
        uint32_t fvar_1;};

bool_t f_ltepeg_closure_58(struct ltepeg_closure_58_s * closure, ltepeg__ent_adt_t bvar);

bool_t m_ltepeg_closure_58(struct ltepeg_closure_58_s * closure, ltepeg__ent_adt_t bvar);

extern bool_t h_ltepeg_closure_58(ltepeg__ent_adt_t ivar_3, uint32_t ivar_1);

extern ltepeg_closure_58_t new_ltepeg_closure_58(void);

extern void release_ltepeg_closure_58(ltepeg_funtype_56_t closure);

extern ltepeg_closure_58_t copy_ltepeg_closure_58(ltepeg_closure_58_t x);




struct ltepeg_closure_59_s;
        typedef struct ltepeg_closure_59_s * ltepeg_closure_59_t;

struct ltepeg_closure_59_s {uint32_t count;
         ltepeg_funtype_56_ftbl_t ftbl;
         ltepeg_funtype_56_htbl_t htbl;
        uint32_t fvar_1;};

bool_t f_ltepeg_closure_59(struct ltepeg_closure_59_s * closure, ltepeg__ent_adt_t bvar);

bool_t m_ltepeg_closure_59(struct ltepeg_closure_59_s * closure, ltepeg__ent_adt_t bvar);

extern bool_t h_ltepeg_closure_59(ltepeg__ent_adt_t ivar_3, uint32_t ivar_1);

extern ltepeg_closure_59_t new_ltepeg_closure_59(void);

extern void release_ltepeg_closure_59(ltepeg_funtype_56_t closure);

extern ltepeg_closure_59_t copy_ltepeg_closure_59(ltepeg_closure_59_t x);




struct ltepeg_closure_60_s;
        typedef struct ltepeg_closure_60_s * ltepeg_closure_60_t;

struct ltepeg_closure_60_s {uint32_t count;
         ltepeg_funtype_56_ftbl_t ftbl;
         ltepeg_funtype_56_htbl_t htbl;
        uint32_t fvar_1;
        uint32_t fvar_2;};

bool_t f_ltepeg_closure_60(struct ltepeg_closure_60_s * closure, ltepeg__ent_adt_t bvar);

bool_t m_ltepeg_closure_60(struct ltepeg_closure_60_s * closure, ltepeg__ent_adt_t bvar);

extern bool_t h_ltepeg_closure_60(ltepeg__ent_adt_t ivar_4, uint32_t ivar_2, uint32_t ivar_1);

extern ltepeg_closure_60_t new_ltepeg_closure_60(void);

extern void release_ltepeg_closure_60(ltepeg_funtype_56_t closure);

extern ltepeg_closure_60_t copy_ltepeg_closure_60(ltepeg_closure_60_t x);


//instack

struct ltepeg_funtype_61_s;
        typedef struct ltepeg_funtype_61_s * ltepeg_funtype_61_t;

struct ltepeg_funtype_61_ftbl_s {bool_t (* fptr)(struct ltepeg_funtype_61_s *, ltepeg_record_9_t);
        bool_t (* mptr)(struct ltepeg_funtype_61_s *, uint32_t, uint8_t);
        void (* rptr)(struct ltepeg_funtype_61_s *);
        struct ltepeg_funtype_61_s * (* cptr)(struct ltepeg_funtype_61_s *);};
typedef struct ltepeg_funtype_61_ftbl_s * ltepeg_funtype_61_ftbl_t;

struct ltepeg_funtype_61_hashentry_s {uint32_t keyhash; ltepeg_record_9_t key; bool_t value;}; 
typedef struct ltepeg_funtype_61_hashentry_s ltepeg_funtype_61_hashentry_t;

struct ltepeg_funtype_61_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_61_hashentry_t * data;}; 
typedef struct ltepeg_funtype_61_htbl_s * ltepeg_funtype_61_htbl_t;

struct ltepeg_funtype_61_s {uint32_t count;
        ltepeg_funtype_61_ftbl_t ftbl;
        ltepeg_funtype_61_htbl_t htbl;};
typedef struct ltepeg_funtype_61_s * ltepeg_funtype_61_t;

extern void release_ltepeg_funtype_61(ltepeg_funtype_61_t x);

extern ltepeg_funtype_61_t copy_ltepeg_funtype_61(ltepeg_funtype_61_t x);

extern bool_t equal_ltepeg_funtype_61(ltepeg_funtype_61_t x, ltepeg_funtype_61_t y);

extern char* json_ltepeg_funtype_61(ltepeg_funtype_61_t x);


//instack

struct ltepeg_array_62_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltepeg__ent_adt_t elems[]; };
typedef struct ltepeg_array_62_s * ltepeg_array_62_t;

extern ltepeg_array_62_t new_ltepeg_array_62(uint32_t size);

extern void release_ltepeg_array_62(ltepeg_array_62_t x);

extern ltepeg_array_62_t copy_ltepeg_array_62(ltepeg_array_62_t x);

extern bool_t equal_ltepeg_array_62(ltepeg_array_62_t x, ltepeg_array_62_t y);
extern char * json_ltepeg_array_62(ltepeg_array_62_t x);

typedef struct actual_ltepeg_array_62_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_array_62_t;
void release_ltepeg_array_62_ptr(pointer_t x, type_actual_t ltepeg_array_62);

extern bool_t equal_ltepeg_array_62_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltepeg_array_62_ptr(pointer_t x, type_actual_t T);

actual_ltepeg_array_62_t actual_ltepeg_array_62(void);

extern ltepeg_array_62_t update_ltepeg_array_62(ltepeg_array_62_t x, uint32_t i, ltepeg__ent_adt_t v);

extern ltepeg_array_62_t upgrade_ltepeg_array_62(ltepeg_array_62_t x, uint32_t i, ltepeg__ent_adt_t v);


//instack

struct ltepeg_array_63_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltepeg_array_62_t elems[]; };
typedef struct ltepeg_array_63_s * ltepeg_array_63_t;

extern ltepeg_array_63_t new_ltepeg_array_63(uint32_t size);

extern void release_ltepeg_array_63(ltepeg_array_63_t x);

extern ltepeg_array_63_t copy_ltepeg_array_63(ltepeg_array_63_t x);

extern bool_t equal_ltepeg_array_63(ltepeg_array_63_t x, ltepeg_array_63_t y);
extern char * json_ltepeg_array_63(ltepeg_array_63_t x);

typedef struct actual_ltepeg_array_63_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_array_63_t;
void release_ltepeg_array_63_ptr(pointer_t x, type_actual_t ltepeg_array_63);

extern bool_t equal_ltepeg_array_63_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltepeg_array_63_ptr(pointer_t x, type_actual_t T);

actual_ltepeg_array_63_t actual_ltepeg_array_63(void);

extern ltepeg_array_63_t update_ltepeg_array_63(ltepeg_array_63_t x, uint32_t i, ltepeg_array_62_t v);

extern ltepeg_array_63_t upgrade_ltepeg_array_63(ltepeg_array_63_t x, uint32_t i, ltepeg_array_62_t v);




struct ltepeg_closure_64_s;
        typedef struct ltepeg_closure_64_s * ltepeg_closure_64_t;

struct ltepeg_closure_64_s {uint32_t count;
         ltepeg_funtype_61_ftbl_t ftbl;
         ltepeg_funtype_61_htbl_t htbl;
        ltepeg_array_63_t fvar_1;
        uint32_t fvar_2;};

bool_t f_ltepeg_closure_64(struct ltepeg_closure_64_s * closure, ltepeg_record_9_t bvar);

bool_t m_ltepeg_closure_64(struct ltepeg_closure_64_s * closure, uint32_t bvar_1, uint8_t bvar_2);

extern bool_t h_ltepeg_closure_64(uint32_t ivar_5, uint8_t ivar_6, ltepeg_array_63_t ivar_2, uint32_t ivar_1);

extern ltepeg_closure_64_t new_ltepeg_closure_64(void);

extern void release_ltepeg_closure_64(ltepeg_funtype_61_t closure);

extern ltepeg_closure_64_t copy_ltepeg_closure_64(ltepeg_closure_64_t x);


//successor

struct ltepeg_record_65_s {
        uint32_t count; 
        ltepeg__ent_adt_t project_1;
        ltepeg__ent_adt_t project_2;};
typedef struct ltepeg_record_65_s * ltepeg_record_65_t;

extern ltepeg_record_65_t new_ltepeg_record_65(void);

extern void release_ltepeg_record_65(ltepeg_record_65_t x);

extern ltepeg_record_65_t copy_ltepeg_record_65(ltepeg_record_65_t x);

extern bool_t equal_ltepeg_record_65(ltepeg_record_65_t x, ltepeg_record_65_t y);
extern char * json_ltepeg_record_65(ltepeg_record_65_t x);

typedef struct actual_ltepeg_record_65_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_record_65_t;
void release_ltepeg_record_65_ptr(pointer_t x, type_actual_t ltepeg_record_65);

extern bool_t equal_ltepeg_record_65_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_65_t T);

extern char * json_ltepeg_record_65_ptr(pointer_t x,  actual_ltepeg_record_65_t T);

actual_ltepeg_record_65_t actual_ltepeg_record_65(void);

extern ltepeg_record_65_t update_ltepeg_record_65_project_1(ltepeg_record_65_t x, ltepeg__ent_adt_t v);

extern ltepeg_record_65_t update_ltepeg_record_65_project_2(ltepeg_record_65_t x, ltepeg__ent_adt_t v);


//successor

struct ltepeg_funtype_66_s;
        typedef struct ltepeg_funtype_66_s * ltepeg_funtype_66_t;

struct ltepeg_funtype_66_ftbl_s {bool_t (* fptr)(struct ltepeg_funtype_66_s *, ltepeg_record_65_t);
        bool_t (* mptr)(struct ltepeg_funtype_66_s *, ltepeg__ent_adt_t, ltepeg__ent_adt_t);
        void (* rptr)(struct ltepeg_funtype_66_s *);
        struct ltepeg_funtype_66_s * (* cptr)(struct ltepeg_funtype_66_s *);};
typedef struct ltepeg_funtype_66_ftbl_s * ltepeg_funtype_66_ftbl_t;

struct ltepeg_funtype_66_hashentry_s {uint32_t keyhash; ltepeg_record_65_t key; bool_t value;}; 
typedef struct ltepeg_funtype_66_hashentry_s ltepeg_funtype_66_hashentry_t;

struct ltepeg_funtype_66_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_66_hashentry_t * data;}; 
typedef struct ltepeg_funtype_66_htbl_s * ltepeg_funtype_66_htbl_t;

struct ltepeg_funtype_66_s {uint32_t count;
        ltepeg_funtype_66_ftbl_t ftbl;
        ltepeg_funtype_66_htbl_t htbl;};
typedef struct ltepeg_funtype_66_s * ltepeg_funtype_66_t;

extern void release_ltepeg_funtype_66(ltepeg_funtype_66_t x);

extern ltepeg_funtype_66_t copy_ltepeg_funtype_66(ltepeg_funtype_66_t x);

extern bool_t equal_ltepeg_funtype_66(ltepeg_funtype_66_t x, ltepeg_funtype_66_t y);

extern char* json_ltepeg_funtype_66(ltepeg_funtype_66_t x);


//successor

struct ltepeg__lang_spec_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltepeg__prepeg_adt_t elems[]; };
typedef struct ltepeg__lang_spec_s * ltepeg__lang_spec_t;

extern ltepeg__lang_spec_t new_ltepeg__lang_spec(uint32_t size);

extern void release_ltepeg__lang_spec(ltepeg__lang_spec_t x);

extern ltepeg__lang_spec_t copy_ltepeg__lang_spec(ltepeg__lang_spec_t x);

extern bool_t equal_ltepeg__lang_spec(ltepeg__lang_spec_t x, ltepeg__lang_spec_t y);
extern char * json_ltepeg__lang_spec(ltepeg__lang_spec_t x);

typedef struct actual_ltepeg__lang_spec_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg__lang_spec_t;
void release_ltepeg__lang_spec_ptr(pointer_t x, type_actual_t ltepeg__lang_spec);

extern bool_t equal_ltepeg__lang_spec_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltepeg__lang_spec_ptr(pointer_t x, type_actual_t T);

actual_ltepeg__lang_spec_t actual_ltepeg__lang_spec(void);

extern ltepeg__lang_spec_t update_ltepeg__lang_spec(ltepeg__lang_spec_t x, uint32_t i, ltepeg__prepeg_adt_t v);

extern ltepeg__lang_spec_t upgrade_ltepeg__lang_spec(ltepeg__lang_spec_t x, uint32_t i, ltepeg__prepeg_adt_t v);




struct ltepeg_closure_68_s;
        typedef struct ltepeg_closure_68_s * ltepeg_closure_68_t;

struct ltepeg_closure_68_s {uint32_t count;
         ltepeg_funtype_66_ftbl_t ftbl;
         ltepeg_funtype_66_htbl_t htbl;
        ltepeg_array_63_t fvar_1;
        uint32_t fvar_2;
        ltepeg__lang_spec_t fvar_3;};

bool_t f_ltepeg_closure_68(struct ltepeg_closure_68_s * closure, ltepeg_record_65_t bvar);

bool_t m_ltepeg_closure_68(struct ltepeg_closure_68_s * closure, ltepeg__ent_adt_t bvar_1, ltepeg__ent_adt_t bvar_2);

extern bool_t h_ltepeg_closure_68(ltepeg__ent_adt_t ivar_6, ltepeg__ent_adt_t ivar_7, ltepeg_array_63_t ivar_3, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2);

extern ltepeg_closure_68_t new_ltepeg_closure_68(void);

extern void release_ltepeg_closure_68(ltepeg_funtype_66_t closure);

extern ltepeg_closure_68_t copy_ltepeg_closure_68(ltepeg_closure_68_t x);


//sigma

struct ltepeg_funtype_69_s;
        typedef struct ltepeg_funtype_69_s * ltepeg_funtype_69_t;

struct ltepeg_funtype_69_ftbl_s {mpz_ptr_t (* fptr)(struct ltepeg_funtype_69_s *, uint32_t);
        mpz_ptr_t (* mptr)(struct ltepeg_funtype_69_s *, uint32_t);
        void (* rptr)(struct ltepeg_funtype_69_s *);
        struct ltepeg_funtype_69_s * (* cptr)(struct ltepeg_funtype_69_s *);};
typedef struct ltepeg_funtype_69_ftbl_s * ltepeg_funtype_69_ftbl_t;

struct ltepeg_funtype_69_hashentry_s {uint32_t keyhash; uint32_t key; mpz_t value;}; 
typedef struct ltepeg_funtype_69_hashentry_s ltepeg_funtype_69_hashentry_t;

struct ltepeg_funtype_69_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_69_hashentry_t * data;}; 
typedef struct ltepeg_funtype_69_htbl_s * ltepeg_funtype_69_htbl_t;

struct ltepeg_funtype_69_s {uint32_t count;
        ltepeg_funtype_69_ftbl_t ftbl;
        ltepeg_funtype_69_htbl_t htbl;};
typedef struct ltepeg_funtype_69_s * ltepeg_funtype_69_t;

extern void release_ltepeg_funtype_69(ltepeg_funtype_69_t x);

extern ltepeg_funtype_69_t copy_ltepeg_funtype_69(ltepeg_funtype_69_t x);

uint32_t lookup_ltepeg_funtype_69(ltepeg_funtype_69_htbl_t htbl, uint32_t i, uint32_t ihash);

ltepeg_funtype_69_t dupdate_ltepeg_funtype_69(ltepeg_funtype_69_t a, uint32_t i, mpz_ptr_t v);

extern ltepeg_funtype_69_t update_ltepeg_funtype_69(ltepeg_funtype_69_t a, uint32_t i, mpz_ptr_t v);

extern bool_t equal_ltepeg_funtype_69(ltepeg_funtype_69_t x, ltepeg_funtype_69_t y);

extern char* json_ltepeg_funtype_69(ltepeg_funtype_69_t x);


//sigma

struct ltepeg_array_70_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         mpz_ptr_t elems[]; };
typedef struct ltepeg_array_70_s * ltepeg_array_70_t;

extern ltepeg_array_70_t new_ltepeg_array_70(uint32_t size);

extern void release_ltepeg_array_70(ltepeg_array_70_t x);

extern ltepeg_array_70_t copy_ltepeg_array_70(ltepeg_array_70_t x);

extern bool_t equal_ltepeg_array_70(ltepeg_array_70_t x, ltepeg_array_70_t y);
extern char * json_ltepeg_array_70(ltepeg_array_70_t x);

typedef struct actual_ltepeg_array_70_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_array_70_t;
void release_ltepeg_array_70_ptr(pointer_t x, type_actual_t ltepeg_array_70);

extern bool_t equal_ltepeg_array_70_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltepeg_array_70_ptr(pointer_t x, type_actual_t T);

actual_ltepeg_array_70_t actual_ltepeg_array_70(void);

extern ltepeg_array_70_t update_ltepeg_array_70(ltepeg_array_70_t x, uint32_t i, mpz_t v);

extern ltepeg_array_70_t upgrade_ltepeg_array_70(ltepeg_array_70_t x, uint32_t i, mpz_t v);




struct ltepeg_closure_71_s;
        typedef struct ltepeg_closure_71_s * ltepeg_closure_71_t;

struct ltepeg_closure_71_s {uint32_t count;
         ltepeg_funtype_69_ftbl_t ftbl;
         ltepeg_funtype_69_htbl_t htbl;
        ltepeg_array_70_t fvar_1;
        uint32_t fvar_2;};

mpz_ptr_t f_ltepeg_closure_71(struct ltepeg_closure_71_s * closure, uint32_t bvar);

mpz_ptr_t m_ltepeg_closure_71(struct ltepeg_closure_71_s * closure, uint32_t bvar);

extern mpz_ptr_t h_ltepeg_closure_71(uint32_t ivar_4, ltepeg_array_70_t ivar_2, uint32_t ivar_1);

extern ltepeg_closure_71_t new_ltepeg_closure_71(void);

extern void release_ltepeg_closure_71(ltepeg_funtype_69_t closure);

extern ltepeg_closure_71_t copy_ltepeg_closure_71(ltepeg_closure_71_t x);


//scafcount

struct ltepeg_funtype_72_s;
        typedef struct ltepeg_funtype_72_s * ltepeg_funtype_72_t;

struct ltepeg_funtype_72_ftbl_s {uint8_t (* fptr)(struct ltepeg_funtype_72_s *, ltepeg_array_62_t);
        uint8_t (* mptr)(struct ltepeg_funtype_72_s *, ltepeg_array_62_t);
        void (* rptr)(struct ltepeg_funtype_72_s *);
        struct ltepeg_funtype_72_s * (* cptr)(struct ltepeg_funtype_72_s *);};
typedef struct ltepeg_funtype_72_ftbl_s * ltepeg_funtype_72_ftbl_t;

struct ltepeg_funtype_72_hashentry_s {uint32_t keyhash; ltepeg_array_62_t key; uint8_t value;}; 
typedef struct ltepeg_funtype_72_hashentry_s ltepeg_funtype_72_hashentry_t;

struct ltepeg_funtype_72_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_72_hashentry_t * data;}; 
typedef struct ltepeg_funtype_72_htbl_s * ltepeg_funtype_72_htbl_t;

struct ltepeg_funtype_72_s {uint32_t count;
        ltepeg_funtype_72_ftbl_t ftbl;
        ltepeg_funtype_72_htbl_t htbl;};
typedef struct ltepeg_funtype_72_s * ltepeg_funtype_72_t;

extern void release_ltepeg_funtype_72(ltepeg_funtype_72_t x);

extern ltepeg_funtype_72_t copy_ltepeg_funtype_72(ltepeg_funtype_72_t x);

extern bool_t equal_ltepeg_funtype_72(ltepeg_funtype_72_t x, ltepeg_funtype_72_t y);

extern char* json_ltepeg_funtype_72(ltepeg_funtype_72_t x);


//scafcount

struct ltepeg_funtype_73_s;
        typedef struct ltepeg_funtype_73_s * ltepeg_funtype_73_t;

struct ltepeg_funtype_73_ftbl_s {ltepeg_funtype_72_t (* fptr)(struct ltepeg_funtype_73_s *, ltepeg_funtype_56_t);
        ltepeg_funtype_72_t (* mptr)(struct ltepeg_funtype_73_s *, ltepeg_funtype_56_t);
        void (* rptr)(struct ltepeg_funtype_73_s *);
        struct ltepeg_funtype_73_s * (* cptr)(struct ltepeg_funtype_73_s *);};
typedef struct ltepeg_funtype_73_ftbl_s * ltepeg_funtype_73_ftbl_t;

struct ltepeg_funtype_73_hashentry_s {uint32_t keyhash; ltepeg_funtype_56_t key; ltepeg_funtype_72_t value;}; 
typedef struct ltepeg_funtype_73_hashentry_s ltepeg_funtype_73_hashentry_t;

struct ltepeg_funtype_73_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_73_hashentry_t * data;}; 
typedef struct ltepeg_funtype_73_htbl_s * ltepeg_funtype_73_htbl_t;

struct ltepeg_funtype_73_s {uint32_t count;
        ltepeg_funtype_73_ftbl_t ftbl;
        ltepeg_funtype_73_htbl_t htbl;};
typedef struct ltepeg_funtype_73_s * ltepeg_funtype_73_t;

extern void release_ltepeg_funtype_73(ltepeg_funtype_73_t x);

extern ltepeg_funtype_73_t copy_ltepeg_funtype_73(ltepeg_funtype_73_t x);

extern bool_t equal_ltepeg_funtype_73(ltepeg_funtype_73_t x, ltepeg_funtype_73_t y);

extern char* json_ltepeg_funtype_73(ltepeg_funtype_73_t x);




struct ltepeg_closure_74_s;
        typedef struct ltepeg_closure_74_s * ltepeg_closure_74_t;

struct ltepeg_closure_74_s {uint32_t count;
         ltepeg_funtype_56_ftbl_t ftbl;
         ltepeg_funtype_56_htbl_t htbl;};

bool_t f_ltepeg_closure_74(struct ltepeg_closure_74_s * closure, ltepeg__ent_adt_t bvar);

bool_t m_ltepeg_closure_74(struct ltepeg_closure_74_s * closure, ltepeg__ent_adt_t bvar);

extern bool_t h_ltepeg_closure_74(ltepeg__ent_adt_t ivar_19);

extern ltepeg_closure_74_t new_ltepeg_closure_74(void);

extern void release_ltepeg_closure_74(ltepeg_funtype_56_t closure);

extern ltepeg_closure_74_t copy_ltepeg_closure_74(ltepeg_closure_74_t x);




struct ltepeg_closure_75_s;
        typedef struct ltepeg_closure_75_s * ltepeg_closure_75_t;

struct ltepeg_closure_75_s {uint32_t count;
         ltepeg_funtype_56_ftbl_t ftbl;
         ltepeg_funtype_56_htbl_t htbl;};

bool_t f_ltepeg_closure_75(struct ltepeg_closure_75_s * closure, ltepeg__ent_adt_t bvar);

bool_t m_ltepeg_closure_75(struct ltepeg_closure_75_s * closure, ltepeg__ent_adt_t bvar);

extern bool_t h_ltepeg_closure_75(ltepeg__ent_adt_t ivar_9);

extern ltepeg_closure_75_t new_ltepeg_closure_75(void);

extern void release_ltepeg_closure_75(ltepeg_funtype_56_t closure);

extern ltepeg_closure_75_t copy_ltepeg_closure_75(ltepeg_closure_75_t x);


//good_depth?

struct ltepeg_funtype_76_s;
        typedef struct ltepeg_funtype_76_s * ltepeg_funtype_76_t;

struct ltepeg_funtype_76_ftbl_s {bool_t (* fptr)(struct ltepeg_funtype_76_s *, uint64_t);
        bool_t (* mptr)(struct ltepeg_funtype_76_s *, uint64_t);
        void (* rptr)(struct ltepeg_funtype_76_s *);
        struct ltepeg_funtype_76_s * (* cptr)(struct ltepeg_funtype_76_s *);};
typedef struct ltepeg_funtype_76_ftbl_s * ltepeg_funtype_76_ftbl_t;

struct ltepeg_funtype_76_hashentry_s {uint32_t keyhash; uint64_t key; bool_t value;}; 
typedef struct ltepeg_funtype_76_hashentry_s ltepeg_funtype_76_hashentry_t;

struct ltepeg_funtype_76_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_76_hashentry_t * data;}; 
typedef struct ltepeg_funtype_76_htbl_s * ltepeg_funtype_76_htbl_t;

struct ltepeg_funtype_76_s {uint32_t count;
        ltepeg_funtype_76_ftbl_t ftbl;
        ltepeg_funtype_76_htbl_t htbl;};
typedef struct ltepeg_funtype_76_s * ltepeg_funtype_76_t;

extern void release_ltepeg_funtype_76(ltepeg_funtype_76_t x);

extern ltepeg_funtype_76_t copy_ltepeg_funtype_76(ltepeg_funtype_76_t x);

uint32_t lookup_ltepeg_funtype_76(ltepeg_funtype_76_htbl_t htbl, uint64_t i, uint32_t ihash);

ltepeg_funtype_76_t dupdate_ltepeg_funtype_76(ltepeg_funtype_76_t a, uint64_t i, bool_t v);

extern ltepeg_funtype_76_t update_ltepeg_funtype_76(ltepeg_funtype_76_t a, uint64_t i, bool_t v);

extern bool_t equal_ltepeg_funtype_76(ltepeg_funtype_76_t x, ltepeg_funtype_76_t y);

extern char* json_ltepeg_funtype_76(ltepeg_funtype_76_t x);




struct ltepeg_closure_77_s;
        typedef struct ltepeg_closure_77_s * ltepeg_closure_77_t;

struct ltepeg_closure_77_s {uint32_t count;
         ltepeg_funtype_76_ftbl_t ftbl;
         ltepeg_funtype_76_htbl_t htbl;
        ltepeg_array_63_t fvar_1;
        uint32_t fvar_2;};

bool_t f_ltepeg_closure_77(struct ltepeg_closure_77_s * closure, uint64_t bvar);

bool_t m_ltepeg_closure_77(struct ltepeg_closure_77_s * closure, uint64_t bvar);

extern bool_t h_ltepeg_closure_77(uint64_t ivar_5, ltepeg_array_63_t ivar_2, uint32_t ivar_1);

extern ltepeg_closure_77_t new_ltepeg_closure_77(void);

extern void release_ltepeg_closure_77(ltepeg_funtype_76_t closure);

extern ltepeg_closure_77_t copy_ltepeg_closure_77(ltepeg_closure_77_t x);




struct ltepeg_closure_78_s;
        typedef struct ltepeg_closure_78_s * ltepeg_closure_78_t;

struct ltepeg_closure_78_s {uint32_t count;
         ltepeg_funtype_56_ftbl_t ftbl;
         ltepeg_funtype_56_htbl_t htbl;
        ltepeg_array_63_t fvar_1;
        uint32_t fvar_2;
        ltepeg__lang_spec_t fvar_3;
        uint64_t fvar_4;};

bool_t f_ltepeg_closure_78(struct ltepeg_closure_78_s * closure, ltepeg__ent_adt_t bvar);

bool_t m_ltepeg_closure_78(struct ltepeg_closure_78_s * closure, ltepeg__ent_adt_t bvar);

extern bool_t h_ltepeg_closure_78(ltepeg__ent_adt_t ivar_7, ltepeg_array_63_t ivar_4, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, uint64_t ivar_3);

extern ltepeg_closure_78_t new_ltepeg_closure_78(void);

extern void release_ltepeg_closure_78(ltepeg_funtype_56_t closure);

extern ltepeg_closure_78_t copy_ltepeg_closure_78(ltepeg_closure_78_t x);




struct ltepeg_closure_79_s;
        typedef struct ltepeg_closure_79_s * ltepeg_closure_79_t;

struct ltepeg_closure_79_s {uint32_t count;
         ltepeg_funtype_66_ftbl_t ftbl;
         ltepeg_funtype_66_htbl_t htbl;
        ltepeg_array_63_t fvar_1;
        uint32_t fvar_2;
        ltepeg__lang_spec_t fvar_3;
        uint64_t fvar_4;};

bool_t f_ltepeg_closure_79(struct ltepeg_closure_79_s * closure, ltepeg_record_65_t bvar);

bool_t m_ltepeg_closure_79(struct ltepeg_closure_79_s * closure, ltepeg__ent_adt_t bvar_1, ltepeg__ent_adt_t bvar_2);

extern bool_t h_ltepeg_closure_79(ltepeg__ent_adt_t ivar_7, ltepeg__ent_adt_t ivar_8, ltepeg_array_63_t ivar_4, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, uint64_t ivar_3);

extern ltepeg_closure_79_t new_ltepeg_closure_79(void);

extern void release_ltepeg_closure_79(ltepeg_funtype_66_t closure);

extern ltepeg_closure_79_t copy_ltepeg_closure_79(ltepeg_closure_79_t x);




struct ltepeg_closure_80_s;
        typedef struct ltepeg_closure_80_s * ltepeg_closure_80_t;

struct ltepeg_closure_80_s {uint32_t count;
         ltepeg_funtype_56_ftbl_t ftbl;
         ltepeg_funtype_56_htbl_t htbl;
        ltepeg_array_63_t fvar_1;
        uint32_t fvar_2;
        ltepeg__lang_spec_t fvar_3;
        uint64_t fvar_4;};

bool_t f_ltepeg_closure_80(struct ltepeg_closure_80_s * closure, ltepeg__ent_adt_t bvar);

bool_t m_ltepeg_closure_80(struct ltepeg_closure_80_s * closure, ltepeg__ent_adt_t bvar);

extern bool_t h_ltepeg_closure_80(ltepeg__ent_adt_t ivar_7, ltepeg_array_63_t ivar_4, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, uint64_t ivar_3);

extern ltepeg_closure_80_t new_ltepeg_closure_80(void);

extern void release_ltepeg_closure_80(ltepeg_funtype_56_t closure);

extern ltepeg_closure_80_t copy_ltepeg_closure_80(ltepeg_closure_80_t x);


//good_fail?

struct ltepeg_record_81_s {
        uint32_t count; 
        ltepeg_array_63_t project_1;
        uint32_t project_2;
        uint8_t project_3;
        uint64_t project_4;};
typedef struct ltepeg_record_81_s * ltepeg_record_81_t;

extern ltepeg_record_81_t new_ltepeg_record_81(void);

extern void release_ltepeg_record_81(ltepeg_record_81_t x);

extern ltepeg_record_81_t copy_ltepeg_record_81(ltepeg_record_81_t x);

extern bool_t equal_ltepeg_record_81(ltepeg_record_81_t x, ltepeg_record_81_t y);
extern char * json_ltepeg_record_81(ltepeg_record_81_t x);

typedef struct actual_ltepeg_record_81_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_record_81_t;
void release_ltepeg_record_81_ptr(pointer_t x, type_actual_t ltepeg_record_81);

extern bool_t equal_ltepeg_record_81_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_81_t T);

extern char * json_ltepeg_record_81_ptr(pointer_t x,  actual_ltepeg_record_81_t T);

actual_ltepeg_record_81_t actual_ltepeg_record_81(void);

extern ltepeg_record_81_t update_ltepeg_record_81_project_1(ltepeg_record_81_t x, ltepeg_array_63_t v);

extern ltepeg_record_81_t update_ltepeg_record_81_project_2(ltepeg_record_81_t x, uint32_t v);

extern ltepeg_record_81_t update_ltepeg_record_81_project_3(ltepeg_record_81_t x, uint8_t v);

extern ltepeg_record_81_t update_ltepeg_record_81_project_4(ltepeg_record_81_t x, uint64_t v);


//good_fail?

struct ltepeg_funtype_82_s;
        typedef struct ltepeg_funtype_82_s * ltepeg_funtype_82_t;

struct ltepeg_funtype_82_ftbl_s {bool_t (* fptr)(struct ltepeg_funtype_82_s *, ltepeg_record_81_t);
        bool_t (* mptr)(struct ltepeg_funtype_82_s *, ltepeg_array_63_t, uint32_t, uint8_t, uint64_t);
        void (* rptr)(struct ltepeg_funtype_82_s *);
        struct ltepeg_funtype_82_s * (* cptr)(struct ltepeg_funtype_82_s *);};
typedef struct ltepeg_funtype_82_ftbl_s * ltepeg_funtype_82_ftbl_t;

struct ltepeg_funtype_82_hashentry_s {uint32_t keyhash; ltepeg_record_81_t key; bool_t value;}; 
typedef struct ltepeg_funtype_82_hashentry_s ltepeg_funtype_82_hashentry_t;

struct ltepeg_funtype_82_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_82_hashentry_t * data;}; 
typedef struct ltepeg_funtype_82_htbl_s * ltepeg_funtype_82_htbl_t;

struct ltepeg_funtype_82_s {uint32_t count;
        ltepeg_funtype_82_ftbl_t ftbl;
        ltepeg_funtype_82_htbl_t htbl;};
typedef struct ltepeg_funtype_82_s * ltepeg_funtype_82_t;

extern void release_ltepeg_funtype_82(ltepeg_funtype_82_t x);

extern ltepeg_funtype_82_t copy_ltepeg_funtype_82(ltepeg_funtype_82_t x);

extern bool_t equal_ltepeg_funtype_82(ltepeg_funtype_82_t x, ltepeg_funtype_82_t y);

extern char* json_ltepeg_funtype_82(ltepeg_funtype_82_t x);


//good_fail?

struct ltepeg_array_83_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct ltepeg_array_83_s * ltepeg_array_83_t;

extern ltepeg_array_83_t new_ltepeg_array_83(uint32_t size);

extern void release_ltepeg_array_83(ltepeg_array_83_t x);

extern ltepeg_array_83_t copy_ltepeg_array_83(ltepeg_array_83_t x);

extern bool_t equal_ltepeg_array_83(ltepeg_array_83_t x, ltepeg_array_83_t y);
extern char * json_ltepeg_array_83(ltepeg_array_83_t x);

typedef struct actual_ltepeg_array_83_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_array_83_t;
void release_ltepeg_array_83_ptr(pointer_t x, type_actual_t ltepeg_array_83);

extern bool_t equal_ltepeg_array_83_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltepeg_array_83_ptr(pointer_t x, type_actual_t T);

actual_ltepeg_array_83_t actual_ltepeg_array_83(void);

extern ltepeg_array_83_t update_ltepeg_array_83(ltepeg_array_83_t x, uint32_t i, uint8_t v);

extern ltepeg_array_83_t upgrade_ltepeg_array_83(ltepeg_array_83_t x, uint32_t i, uint8_t v);




struct ltepeg_closure_84_s;
        typedef struct ltepeg_closure_84_s * ltepeg_closure_84_t;

struct ltepeg_closure_84_s {uint32_t count;
         ltepeg_funtype_82_ftbl_t ftbl;
         ltepeg_funtype_82_htbl_t htbl;
        ltepeg_array_83_t fvar_1;
        uint32_t fvar_2;
        ltepeg__lang_spec_t fvar_3;};

bool_t f_ltepeg_closure_84(struct ltepeg_closure_84_s * closure, ltepeg_record_81_t bvar);

bool_t m_ltepeg_closure_84(struct ltepeg_closure_84_s * closure, ltepeg_array_63_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4);

extern bool_t h_ltepeg_closure_84(ltepeg_array_63_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, uint64_t ivar_10, ltepeg_array_83_t ivar_3, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2);

extern ltepeg_closure_84_t new_ltepeg_closure_84(void);

extern void release_ltepeg_closure_84(ltepeg_funtype_82_t closure);

extern ltepeg_closure_84_t copy_ltepeg_closure_84(ltepeg_closure_84_t x);


//good_loop?

struct ltepeg_record_85_s {
        uint32_t count; 
        ltepeg_array_63_t project_1;
        uint32_t project_2;
        uint8_t project_3;};
typedef struct ltepeg_record_85_s * ltepeg_record_85_t;

extern ltepeg_record_85_t new_ltepeg_record_85(void);

extern void release_ltepeg_record_85(ltepeg_record_85_t x);

extern ltepeg_record_85_t copy_ltepeg_record_85(ltepeg_record_85_t x);

extern bool_t equal_ltepeg_record_85(ltepeg_record_85_t x, ltepeg_record_85_t y);
extern char * json_ltepeg_record_85(ltepeg_record_85_t x);

typedef struct actual_ltepeg_record_85_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_record_85_t;
void release_ltepeg_record_85_ptr(pointer_t x, type_actual_t ltepeg_record_85);

extern bool_t equal_ltepeg_record_85_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_85_t T);

extern char * json_ltepeg_record_85_ptr(pointer_t x,  actual_ltepeg_record_85_t T);

actual_ltepeg_record_85_t actual_ltepeg_record_85(void);

extern ltepeg_record_85_t update_ltepeg_record_85_project_1(ltepeg_record_85_t x, ltepeg_array_63_t v);

extern ltepeg_record_85_t update_ltepeg_record_85_project_2(ltepeg_record_85_t x, uint32_t v);

extern ltepeg_record_85_t update_ltepeg_record_85_project_3(ltepeg_record_85_t x, uint8_t v);


//good_loop?

struct ltepeg_funtype_86_s;
        typedef struct ltepeg_funtype_86_s * ltepeg_funtype_86_t;

struct ltepeg_funtype_86_ftbl_s {bool_t (* fptr)(struct ltepeg_funtype_86_s *, ltepeg_record_85_t);
        bool_t (* mptr)(struct ltepeg_funtype_86_s *, ltepeg_array_63_t, uint32_t, uint8_t);
        void (* rptr)(struct ltepeg_funtype_86_s *);
        struct ltepeg_funtype_86_s * (* cptr)(struct ltepeg_funtype_86_s *);};
typedef struct ltepeg_funtype_86_ftbl_s * ltepeg_funtype_86_ftbl_t;

struct ltepeg_funtype_86_hashentry_s {uint32_t keyhash; ltepeg_record_85_t key; bool_t value;}; 
typedef struct ltepeg_funtype_86_hashentry_s ltepeg_funtype_86_hashentry_t;

struct ltepeg_funtype_86_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_86_hashentry_t * data;}; 
typedef struct ltepeg_funtype_86_htbl_s * ltepeg_funtype_86_htbl_t;

struct ltepeg_funtype_86_s {uint32_t count;
        ltepeg_funtype_86_ftbl_t ftbl;
        ltepeg_funtype_86_htbl_t htbl;};
typedef struct ltepeg_funtype_86_s * ltepeg_funtype_86_t;

extern void release_ltepeg_funtype_86(ltepeg_funtype_86_t x);

extern ltepeg_funtype_86_t copy_ltepeg_funtype_86(ltepeg_funtype_86_t x);

extern bool_t equal_ltepeg_funtype_86(ltepeg_funtype_86_t x, ltepeg_funtype_86_t y);

extern char* json_ltepeg_funtype_86(ltepeg_funtype_86_t x);




struct ltepeg_closure_87_s;
        typedef struct ltepeg_closure_87_s * ltepeg_closure_87_t;

struct ltepeg_closure_87_s {uint32_t count;
         ltepeg_funtype_86_ftbl_t ftbl;
         ltepeg_funtype_86_htbl_t htbl;
        uint32_t fvar_1;
        ltepeg__lang_spec_t fvar_2;};

bool_t f_ltepeg_closure_87(struct ltepeg_closure_87_s * closure, ltepeg_record_85_t bvar);

bool_t m_ltepeg_closure_87(struct ltepeg_closure_87_s * closure, ltepeg_array_63_t bvar_1, uint32_t bvar_2, uint8_t bvar_3);

extern bool_t h_ltepeg_closure_87(ltepeg_array_63_t ivar_5, uint32_t ivar_7, uint8_t ivar_8, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2);

extern ltepeg_closure_87_t new_ltepeg_closure_87(void);

extern void release_ltepeg_closure_87(ltepeg_funtype_86_t closure);

extern ltepeg_closure_87_t copy_ltepeg_closure_87(ltepeg_closure_87_t x);


//good_good?

struct ltepeg_record_88_s {
        uint32_t count; 
        ltepeg_array_63_t project_1;
        uint32_t project_2;
        uint8_t project_3;
        uint64_t project_4;
        mpz_t project_5;};
typedef struct ltepeg_record_88_s * ltepeg_record_88_t;

extern ltepeg_record_88_t new_ltepeg_record_88(void);

extern void release_ltepeg_record_88(ltepeg_record_88_t x);

extern ltepeg_record_88_t copy_ltepeg_record_88(ltepeg_record_88_t x);

extern bool_t equal_ltepeg_record_88(ltepeg_record_88_t x, ltepeg_record_88_t y);
extern char * json_ltepeg_record_88(ltepeg_record_88_t x);

typedef struct actual_ltepeg_record_88_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_record_88_t;
void release_ltepeg_record_88_ptr(pointer_t x, type_actual_t ltepeg_record_88);

extern bool_t equal_ltepeg_record_88_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_88_t T);

extern char * json_ltepeg_record_88_ptr(pointer_t x,  actual_ltepeg_record_88_t T);

actual_ltepeg_record_88_t actual_ltepeg_record_88(void);

extern ltepeg_record_88_t update_ltepeg_record_88_project_1(ltepeg_record_88_t x, ltepeg_array_63_t v);

extern ltepeg_record_88_t update_ltepeg_record_88_project_2(ltepeg_record_88_t x, uint32_t v);

extern ltepeg_record_88_t update_ltepeg_record_88_project_3(ltepeg_record_88_t x, uint8_t v);

extern ltepeg_record_88_t update_ltepeg_record_88_project_4(ltepeg_record_88_t x, uint64_t v);

extern ltepeg_record_88_t update_ltepeg_record_88_project_5(ltepeg_record_88_t x, mpz_ptr_t v);


//good_good?

struct ltepeg_funtype_89_s;
        typedef struct ltepeg_funtype_89_s * ltepeg_funtype_89_t;

struct ltepeg_funtype_89_ftbl_s {bool_t (* fptr)(struct ltepeg_funtype_89_s *, ltepeg_record_88_t);
        bool_t (* mptr)(struct ltepeg_funtype_89_s *, ltepeg_array_63_t, uint32_t, uint8_t, uint64_t, mpz_ptr_t);
        void (* rptr)(struct ltepeg_funtype_89_s *);
        struct ltepeg_funtype_89_s * (* cptr)(struct ltepeg_funtype_89_s *);};
typedef struct ltepeg_funtype_89_ftbl_s * ltepeg_funtype_89_ftbl_t;

struct ltepeg_funtype_89_hashentry_s {uint32_t keyhash; ltepeg_record_88_t key; bool_t value;}; 
typedef struct ltepeg_funtype_89_hashentry_s ltepeg_funtype_89_hashentry_t;

struct ltepeg_funtype_89_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_89_hashentry_t * data;}; 
typedef struct ltepeg_funtype_89_htbl_s * ltepeg_funtype_89_htbl_t;

struct ltepeg_funtype_89_s {uint32_t count;
        ltepeg_funtype_89_ftbl_t ftbl;
        ltepeg_funtype_89_htbl_t htbl;};
typedef struct ltepeg_funtype_89_s * ltepeg_funtype_89_t;

extern void release_ltepeg_funtype_89(ltepeg_funtype_89_t x);

extern ltepeg_funtype_89_t copy_ltepeg_funtype_89(ltepeg_funtype_89_t x);

extern bool_t equal_ltepeg_funtype_89(ltepeg_funtype_89_t x, ltepeg_funtype_89_t y);

extern char* json_ltepeg_funtype_89(ltepeg_funtype_89_t x);




struct ltepeg_closure_90_s;
        typedef struct ltepeg_closure_90_s * ltepeg_closure_90_t;

struct ltepeg_closure_90_s {uint32_t count;
         ltepeg_funtype_89_ftbl_t ftbl;
         ltepeg_funtype_89_htbl_t htbl;
        ltepeg_array_83_t fvar_1;
        uint32_t fvar_2;
        ltepeg__lang_spec_t fvar_3;};

bool_t f_ltepeg_closure_90(struct ltepeg_closure_90_s * closure, ltepeg_record_88_t bvar);

bool_t m_ltepeg_closure_90(struct ltepeg_closure_90_s * closure, ltepeg_array_63_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4, mpz_ptr_t bvar_5);

extern bool_t h_ltepeg_closure_90(ltepeg_array_63_t ivar_9, uint32_t ivar_11, uint8_t ivar_12, uint64_t ivar_13, mpz_ptr_t ivar_14, ltepeg_array_83_t ivar_3, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2);

extern ltepeg_closure_90_t new_ltepeg_closure_90(void);

extern void release_ltepeg_closure_90(ltepeg_funtype_89_t closure);

extern ltepeg_closure_90_t copy_ltepeg_closure_90(ltepeg_closure_90_t x);


//good_entry?

struct ltepeg_record_91_s {
        uint32_t count; 
        ltepeg_array_63_t project_1;
        uint32_t project_2;
        uint8_t project_3;
        ltepeg__ent_adt_t project_4;};
typedef struct ltepeg_record_91_s * ltepeg_record_91_t;

extern ltepeg_record_91_t new_ltepeg_record_91(void);

extern void release_ltepeg_record_91(ltepeg_record_91_t x);

extern ltepeg_record_91_t copy_ltepeg_record_91(ltepeg_record_91_t x);

extern bool_t equal_ltepeg_record_91(ltepeg_record_91_t x, ltepeg_record_91_t y);
extern char * json_ltepeg_record_91(ltepeg_record_91_t x);

typedef struct actual_ltepeg_record_91_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_record_91_t;
void release_ltepeg_record_91_ptr(pointer_t x, type_actual_t ltepeg_record_91);

extern bool_t equal_ltepeg_record_91_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_91_t T);

extern char * json_ltepeg_record_91_ptr(pointer_t x,  actual_ltepeg_record_91_t T);

actual_ltepeg_record_91_t actual_ltepeg_record_91(void);

extern ltepeg_record_91_t update_ltepeg_record_91_project_1(ltepeg_record_91_t x, ltepeg_array_63_t v);

extern ltepeg_record_91_t update_ltepeg_record_91_project_2(ltepeg_record_91_t x, uint32_t v);

extern ltepeg_record_91_t update_ltepeg_record_91_project_3(ltepeg_record_91_t x, uint8_t v);

extern ltepeg_record_91_t update_ltepeg_record_91_project_4(ltepeg_record_91_t x, ltepeg__ent_adt_t v);


//good_entry?

struct ltepeg_funtype_92_s;
        typedef struct ltepeg_funtype_92_s * ltepeg_funtype_92_t;

struct ltepeg_funtype_92_ftbl_s {bool_t (* fptr)(struct ltepeg_funtype_92_s *, ltepeg_record_91_t);
        bool_t (* mptr)(struct ltepeg_funtype_92_s *, ltepeg_array_63_t, uint32_t, uint8_t, ltepeg__ent_adt_t);
        void (* rptr)(struct ltepeg_funtype_92_s *);
        struct ltepeg_funtype_92_s * (* cptr)(struct ltepeg_funtype_92_s *);};
typedef struct ltepeg_funtype_92_ftbl_s * ltepeg_funtype_92_ftbl_t;

struct ltepeg_funtype_92_hashentry_s {uint32_t keyhash; ltepeg_record_91_t key; bool_t value;}; 
typedef struct ltepeg_funtype_92_hashentry_s ltepeg_funtype_92_hashentry_t;

struct ltepeg_funtype_92_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_92_hashentry_t * data;}; 
typedef struct ltepeg_funtype_92_htbl_s * ltepeg_funtype_92_htbl_t;

struct ltepeg_funtype_92_s {uint32_t count;
        ltepeg_funtype_92_ftbl_t ftbl;
        ltepeg_funtype_92_htbl_t htbl;};
typedef struct ltepeg_funtype_92_s * ltepeg_funtype_92_t;

extern void release_ltepeg_funtype_92(ltepeg_funtype_92_t x);

extern ltepeg_funtype_92_t copy_ltepeg_funtype_92(ltepeg_funtype_92_t x);

extern bool_t equal_ltepeg_funtype_92(ltepeg_funtype_92_t x, ltepeg_funtype_92_t y);

extern char* json_ltepeg_funtype_92(ltepeg_funtype_92_t x);




struct ltepeg_closure_93_s;
        typedef struct ltepeg_closure_93_s * ltepeg_closure_93_t;

struct ltepeg_closure_93_s {uint32_t count;
         ltepeg_funtype_92_ftbl_t ftbl;
         ltepeg_funtype_92_htbl_t htbl;
        uint32_t fvar_1;
        ltepeg__lang_spec_t fvar_2;
        ltepeg_array_83_t fvar_3;};

bool_t f_ltepeg_closure_93(struct ltepeg_closure_93_s * closure, ltepeg_record_91_t bvar);

bool_t m_ltepeg_closure_93(struct ltepeg_closure_93_s * closure, ltepeg_array_63_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, ltepeg__ent_adt_t bvar_4);

extern bool_t h_ltepeg_closure_93(ltepeg_array_63_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, ltepeg__ent_adt_t ivar_10, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3);

extern ltepeg_closure_93_t new_ltepeg_closure_93(void);

extern void release_ltepeg_closure_93(ltepeg_funtype_92_t closure);

extern ltepeg_closure_93_t copy_ltepeg_closure_93(ltepeg_closure_93_t x);




struct ltepeg_closure_94_s;
        typedef struct ltepeg_closure_94_s * ltepeg_closure_94_t;

struct ltepeg_closure_94_s {uint32_t count;
         ltepeg_funtype_92_ftbl_t ftbl;
         ltepeg_funtype_92_htbl_t htbl;
        uint32_t fvar_1;
        ltepeg__lang_spec_t fvar_2;
        ltepeg_array_83_t fvar_3;};

bool_t f_ltepeg_closure_94(struct ltepeg_closure_94_s * closure, ltepeg_record_91_t bvar);

bool_t m_ltepeg_closure_94(struct ltepeg_closure_94_s * closure, ltepeg_array_63_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, ltepeg__ent_adt_t bvar_4);

extern bool_t h_ltepeg_closure_94(ltepeg_array_63_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, ltepeg__ent_adt_t ivar_10, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3);

extern ltepeg_closure_94_t new_ltepeg_closure_94(void);

extern void release_ltepeg_closure_94(ltepeg_funtype_92_t closure);

extern ltepeg_closure_94_t copy_ltepeg_closure_94(ltepeg_closure_94_t x);


//good_tscaffold?

struct ltepeg_funtype_95_s;
        typedef struct ltepeg_funtype_95_s * ltepeg_funtype_95_t;

struct ltepeg_funtype_95_ftbl_s {bool_t (* fptr)(struct ltepeg_funtype_95_s *, ltepeg_array_63_t);
        bool_t (* mptr)(struct ltepeg_funtype_95_s *, ltepeg_array_63_t);
        void (* rptr)(struct ltepeg_funtype_95_s *);
        struct ltepeg_funtype_95_s * (* cptr)(struct ltepeg_funtype_95_s *);};
typedef struct ltepeg_funtype_95_ftbl_s * ltepeg_funtype_95_ftbl_t;

struct ltepeg_funtype_95_hashentry_s {uint32_t keyhash; ltepeg_array_63_t key; bool_t value;}; 
typedef struct ltepeg_funtype_95_hashentry_s ltepeg_funtype_95_hashentry_t;

struct ltepeg_funtype_95_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_95_hashentry_t * data;}; 
typedef struct ltepeg_funtype_95_htbl_s * ltepeg_funtype_95_htbl_t;

struct ltepeg_funtype_95_s {uint32_t count;
        ltepeg_funtype_95_ftbl_t ftbl;
        ltepeg_funtype_95_htbl_t htbl;};
typedef struct ltepeg_funtype_95_s * ltepeg_funtype_95_t;

extern void release_ltepeg_funtype_95(ltepeg_funtype_95_t x);

extern ltepeg_funtype_95_t copy_ltepeg_funtype_95(ltepeg_funtype_95_t x);

extern bool_t equal_ltepeg_funtype_95(ltepeg_funtype_95_t x, ltepeg_funtype_95_t y);

extern char* json_ltepeg_funtype_95(ltepeg_funtype_95_t x);




struct ltepeg_closure_96_s;
        typedef struct ltepeg_closure_96_s * ltepeg_closure_96_t;

struct ltepeg_closure_96_s {uint32_t count;
         ltepeg_funtype_95_ftbl_t ftbl;
         ltepeg_funtype_95_htbl_t htbl;
        uint32_t fvar_1;};

bool_t f_ltepeg_closure_96(struct ltepeg_closure_96_s * closure, ltepeg_array_63_t bvar);

bool_t m_ltepeg_closure_96(struct ltepeg_closure_96_s * closure, ltepeg_array_63_t bvar);

extern bool_t h_ltepeg_closure_96(ltepeg_array_63_t ivar_6, uint32_t ivar_1);

extern ltepeg_closure_96_t new_ltepeg_closure_96(void);

extern void release_ltepeg_closure_96(ltepeg_funtype_95_t closure);

extern ltepeg_closure_96_t copy_ltepeg_closure_96(ltepeg_closure_96_t x);




struct ltepeg_closure_97_s;
        typedef struct ltepeg_closure_97_s * ltepeg_closure_97_t;

struct ltepeg_closure_97_s {uint32_t count;
         ltepeg_funtype_61_ftbl_t ftbl;
         ltepeg_funtype_61_htbl_t htbl;
        ltepeg_array_63_t fvar_1;
        uint32_t fvar_2;};

bool_t f_ltepeg_closure_97(struct ltepeg_closure_97_s * closure, ltepeg_record_9_t bvar);

bool_t m_ltepeg_closure_97(struct ltepeg_closure_97_s * closure, uint32_t bvar_1, uint8_t bvar_2);

extern bool_t h_ltepeg_closure_97(uint32_t ivar_5, uint8_t ivar_6, ltepeg_array_63_t ivar_2, uint32_t ivar_1);

extern ltepeg_closure_97_t new_ltepeg_closure_97(void);

extern void release_ltepeg_closure_97(ltepeg_funtype_61_t closure);

extern ltepeg_closure_97_t copy_ltepeg_closure_97(ltepeg_closure_97_t x);


//fine_scaffold?

struct ltepeg_funtype_98_s;
        typedef struct ltepeg_funtype_98_s * ltepeg_funtype_98_t;

struct ltepeg_funtype_98_ftbl_s {ltepeg_funtype_95_t (* fptr)(struct ltepeg_funtype_98_s *, ltepeg_record_9_t);
        ltepeg_funtype_95_t (* mptr)(struct ltepeg_funtype_98_s *, uint32_t, uint8_t);
        void (* rptr)(struct ltepeg_funtype_98_s *);
        struct ltepeg_funtype_98_s * (* cptr)(struct ltepeg_funtype_98_s *);};
typedef struct ltepeg_funtype_98_ftbl_s * ltepeg_funtype_98_ftbl_t;

struct ltepeg_funtype_98_hashentry_s {uint32_t keyhash; ltepeg_record_9_t key; ltepeg_funtype_95_t value;}; 
typedef struct ltepeg_funtype_98_hashentry_s ltepeg_funtype_98_hashentry_t;

struct ltepeg_funtype_98_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_98_hashentry_t * data;}; 
typedef struct ltepeg_funtype_98_htbl_s * ltepeg_funtype_98_htbl_t;

struct ltepeg_funtype_98_s {uint32_t count;
        ltepeg_funtype_98_ftbl_t ftbl;
        ltepeg_funtype_98_htbl_t htbl;};
typedef struct ltepeg_funtype_98_s * ltepeg_funtype_98_t;

extern void release_ltepeg_funtype_98(ltepeg_funtype_98_t x);

extern ltepeg_funtype_98_t copy_ltepeg_funtype_98(ltepeg_funtype_98_t x);

extern bool_t equal_ltepeg_funtype_98(ltepeg_funtype_98_t x, ltepeg_funtype_98_t y);

extern char* json_ltepeg_funtype_98(ltepeg_funtype_98_t x);




struct ltepeg_closure_99_s;
        typedef struct ltepeg_closure_99_s * ltepeg_closure_99_t;

struct ltepeg_closure_99_s {uint32_t count;
         ltepeg_funtype_98_ftbl_t ftbl;
         ltepeg_funtype_98_htbl_t htbl;
        ltepeg_array_83_t fvar_1;
        ltepeg__lang_spec_t fvar_2;
        uint32_t fvar_3;};

ltepeg_funtype_95_t f_ltepeg_closure_99(struct ltepeg_closure_99_s * closure, ltepeg_record_9_t bvar);

ltepeg_funtype_95_t m_ltepeg_closure_99(struct ltepeg_closure_99_s * closure, uint32_t bvar_1, uint8_t bvar_2);

extern ltepeg_funtype_95_t h_ltepeg_closure_99(uint32_t ivar_7, uint8_t ivar_8, ltepeg_array_83_t ivar_3, ltepeg__lang_spec_t ivar_2, uint32_t ivar_1);

extern ltepeg_closure_99_t new_ltepeg_closure_99(void);

extern void release_ltepeg_closure_99(ltepeg_funtype_98_t closure);

extern ltepeg_closure_99_t copy_ltepeg_closure_99(ltepeg_closure_99_t x);




struct ltepeg_closure_100_s;
        typedef struct ltepeg_closure_100_s * ltepeg_closure_100_t;

struct ltepeg_closure_100_s {uint32_t count;
         ltepeg_funtype_95_ftbl_t ftbl;
         ltepeg_funtype_95_htbl_t htbl;
        uint32_t fvar_1;
        uint32_t fvar_2;
        uint8_t fvar_3;
        ltepeg__lang_spec_t fvar_4;
        ltepeg_array_83_t fvar_5;};

bool_t f_ltepeg_closure_100(struct ltepeg_closure_100_s * closure, ltepeg_array_63_t bvar);

bool_t m_ltepeg_closure_100(struct ltepeg_closure_100_s * closure, ltepeg_array_63_t bvar);

extern bool_t h_ltepeg_closure_100(ltepeg_array_63_t ivar_11, uint32_t ivar_7, uint32_t ivar_1, uint8_t ivar_8, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3);

extern ltepeg_closure_100_t new_ltepeg_closure_100(void);

extern void release_ltepeg_closure_100(ltepeg_funtype_95_t closure);

extern ltepeg_closure_100_t copy_ltepeg_closure_100(ltepeg_closure_100_t x);


//step

struct ltepeg_record_101_s {
        uint32_t count; 
        ltepeg_array_63_t scaf;
        uint64_t depth;
        ltepeg__ent_adt_t stack;
        bool_t lflag;};
typedef struct ltepeg_record_101_s * ltepeg_record_101_t;

extern ltepeg_record_101_t new_ltepeg_record_101(void);

extern void release_ltepeg_record_101(ltepeg_record_101_t x);

extern ltepeg_record_101_t copy_ltepeg_record_101(ltepeg_record_101_t x);

extern bool_t equal_ltepeg_record_101(ltepeg_record_101_t x, ltepeg_record_101_t y);
extern char * json_ltepeg_record_101(ltepeg_record_101_t x);

typedef struct actual_ltepeg_record_101_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_record_101_t;
void release_ltepeg_record_101_ptr(pointer_t x, type_actual_t ltepeg_record_101);

extern bool_t equal_ltepeg_record_101_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_101_t T);

extern char * json_ltepeg_record_101_ptr(pointer_t x,  actual_ltepeg_record_101_t T);

actual_ltepeg_record_101_t actual_ltepeg_record_101(void);

extern ltepeg_record_101_t update_ltepeg_record_101_scaf(ltepeg_record_101_t x, ltepeg_array_63_t v);

extern ltepeg_record_101_t update_ltepeg_record_101_depth(ltepeg_record_101_t x, uint64_t v);

extern ltepeg_record_101_t update_ltepeg_record_101_stack(ltepeg_record_101_t x, ltepeg__ent_adt_t v);

extern ltepeg_record_101_t update_ltepeg_record_101_lflag(ltepeg_record_101_t x, bool_t v);


//step

struct ltepeg_funtype_102_s;
        typedef struct ltepeg_funtype_102_s * ltepeg_funtype_102_t;

struct ltepeg_funtype_102_ftbl_s {ltepeg_record_101_t (* fptr)(struct ltepeg_funtype_102_s *, ltepeg_record_101_t);
        ltepeg_record_101_t (* mptr)(struct ltepeg_funtype_102_s *, ltepeg_record_101_t);
        void (* rptr)(struct ltepeg_funtype_102_s *);
        struct ltepeg_funtype_102_s * (* cptr)(struct ltepeg_funtype_102_s *);};
typedef struct ltepeg_funtype_102_ftbl_s * ltepeg_funtype_102_ftbl_t;

struct ltepeg_funtype_102_hashentry_s {uint32_t keyhash; ltepeg_record_101_t key; ltepeg_record_101_t value;}; 
typedef struct ltepeg_funtype_102_hashentry_s ltepeg_funtype_102_hashentry_t;

struct ltepeg_funtype_102_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_102_hashentry_t * data;}; 
typedef struct ltepeg_funtype_102_htbl_s * ltepeg_funtype_102_htbl_t;

struct ltepeg_funtype_102_s {uint32_t count;
        ltepeg_funtype_102_ftbl_t ftbl;
        ltepeg_funtype_102_htbl_t htbl;};
typedef struct ltepeg_funtype_102_s * ltepeg_funtype_102_t;

extern void release_ltepeg_funtype_102(ltepeg_funtype_102_t x);

extern ltepeg_funtype_102_t copy_ltepeg_funtype_102(ltepeg_funtype_102_t x);

extern bool_t equal_ltepeg_funtype_102(ltepeg_funtype_102_t x, ltepeg_funtype_102_t y);

extern char* json_ltepeg_funtype_102(ltepeg_funtype_102_t x);




struct ltepeg_closure_103_s;
        typedef struct ltepeg_closure_103_s * ltepeg_closure_103_t;

struct ltepeg_closure_103_s {uint32_t count;
         ltepeg_funtype_102_ftbl_t ftbl;
         ltepeg_funtype_102_htbl_t htbl;
        uint32_t fvar_1;
        ltepeg_array_83_t fvar_2;
        ltepeg__lang_spec_t fvar_3;};

ltepeg_record_101_t f_ltepeg_closure_103(struct ltepeg_closure_103_s * closure, ltepeg_record_101_t bvar);

ltepeg_record_101_t m_ltepeg_closure_103(struct ltepeg_closure_103_s * closure, ltepeg_record_101_t bvar);

extern ltepeg_record_101_t h_ltepeg_closure_103(ltepeg_record_101_t ivar_9, uint32_t ivar_1, ltepeg_array_83_t ivar_3, ltepeg__lang_spec_t ivar_2);

extern ltepeg_closure_103_t new_ltepeg_closure_103(void);

extern void release_ltepeg_closure_103(ltepeg_funtype_102_t closure);

extern ltepeg_closure_103_t copy_ltepeg_closure_103(ltepeg_closure_103_t x);


//step

struct ltepeg_array_104_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltepeg__ent_adt_t elems[]; };
typedef struct ltepeg_array_104_s * ltepeg_array_104_t;

extern ltepeg_array_104_t new_ltepeg_array_104(uint32_t size);

extern void release_ltepeg_array_104(ltepeg_array_104_t x);

extern ltepeg_array_104_t copy_ltepeg_array_104(ltepeg_array_104_t x);

extern bool_t equal_ltepeg_array_104(ltepeg_array_104_t x, ltepeg_array_104_t y);
extern char * json_ltepeg_array_104(ltepeg_array_104_t x);

typedef struct actual_ltepeg_array_104_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_array_104_t;
void release_ltepeg_array_104_ptr(pointer_t x, type_actual_t ltepeg_array_104);

extern bool_t equal_ltepeg_array_104_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltepeg_array_104_ptr(pointer_t x, type_actual_t T);

actual_ltepeg_array_104_t actual_ltepeg_array_104(void);

extern ltepeg_array_104_t update_ltepeg_array_104(ltepeg_array_104_t x, uint32_t i, ltepeg__ent_adt_t v);

extern ltepeg_array_104_t upgrade_ltepeg_array_104(ltepeg_array_104_t x, uint32_t i, ltepeg__ent_adt_t v);


//size

struct ltepeg_funtype_105_s;
        typedef struct ltepeg_funtype_105_s * ltepeg_funtype_105_t;

struct ltepeg_funtype_105_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepeg_funtype_105_s *, ltepeg_record_101_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepeg_funtype_105_s *, ltepeg_record_101_t);
        void (* rptr)(struct ltepeg_funtype_105_s *);
        struct ltepeg_funtype_105_s * (* cptr)(struct ltepeg_funtype_105_s *);};
typedef struct ltepeg_funtype_105_ftbl_s * ltepeg_funtype_105_ftbl_t;

struct ltepeg_funtype_105_hashentry_s {uint32_t keyhash; ltepeg_record_101_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepeg_funtype_105_hashentry_s ltepeg_funtype_105_hashentry_t;

struct ltepeg_funtype_105_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_105_hashentry_t * data;}; 
typedef struct ltepeg_funtype_105_htbl_s * ltepeg_funtype_105_htbl_t;

struct ltepeg_funtype_105_s {uint32_t count;
        ltepeg_funtype_105_ftbl_t ftbl;
        ltepeg_funtype_105_htbl_t htbl;};
typedef struct ltepeg_funtype_105_s * ltepeg_funtype_105_t;

extern void release_ltepeg_funtype_105(ltepeg_funtype_105_t x);

extern ltepeg_funtype_105_t copy_ltepeg_funtype_105(ltepeg_funtype_105_t x);

extern bool_t equal_ltepeg_funtype_105(ltepeg_funtype_105_t x, ltepeg_funtype_105_t y);

extern char* json_ltepeg_funtype_105(ltepeg_funtype_105_t x);




struct ltepeg_closure_106_s;
        typedef struct ltepeg_closure_106_s * ltepeg_closure_106_t;

struct ltepeg_closure_106_s {uint32_t count;
         ltepeg_funtype_105_ftbl_t ftbl;
         ltepeg_funtype_105_htbl_t htbl;
        uint32_t fvar_1;};

ordstruct_adt__ordstruct_adt_t f_ltepeg_closure_106(struct ltepeg_closure_106_s * closure, ltepeg_record_101_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltepeg_closure_106(struct ltepeg_closure_106_s * closure, ltepeg_record_101_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltepeg_closure_106(ltepeg_record_101_t ivar_8, uint32_t ivar_1);

extern ltepeg_closure_106_t new_ltepeg_closure_106(void);

extern void release_ltepeg_closure_106(ltepeg_funtype_105_t closure);

extern ltepeg_closure_106_t copy_ltepeg_closure_106(ltepeg_closure_106_t x);




struct ltepeg_closure_107_s;
        typedef struct ltepeg_closure_107_s * ltepeg_closure_107_t;

struct ltepeg_closure_107_s {uint32_t count;
         ltepeg_funtype_56_ftbl_t ftbl;
         ltepeg_funtype_56_htbl_t htbl;};

bool_t f_ltepeg_closure_107(struct ltepeg_closure_107_s * closure, ltepeg__ent_adt_t bvar);

bool_t m_ltepeg_closure_107(struct ltepeg_closure_107_s * closure, ltepeg__ent_adt_t bvar);

extern bool_t h_ltepeg_closure_107(ltepeg__ent_adt_t ivar_19);

extern ltepeg_closure_107_t new_ltepeg_closure_107(void);

extern void release_ltepeg_closure_107(ltepeg_funtype_56_t closure);

extern ltepeg_closure_107_t copy_ltepeg_closure_107(ltepeg_closure_107_t x);


//doparse

struct ltepeg_funtype_108_s;
        typedef struct ltepeg_funtype_108_s * ltepeg_funtype_108_t;

struct ltepeg_funtype_108_ftbl_s {ltepeg__ent_adt_t (* fptr)(struct ltepeg_funtype_108_s *, uint8_t);
        ltepeg__ent_adt_t (* mptr)(struct ltepeg_funtype_108_s *, uint8_t);
        void (* rptr)(struct ltepeg_funtype_108_s *);
        struct ltepeg_funtype_108_s * (* cptr)(struct ltepeg_funtype_108_s *);};
typedef struct ltepeg_funtype_108_ftbl_s * ltepeg_funtype_108_ftbl_t;

struct ltepeg_funtype_108_hashentry_s {uint32_t keyhash; uint8_t key; ltepeg__ent_adt_t value;}; 
typedef struct ltepeg_funtype_108_hashentry_s ltepeg_funtype_108_hashentry_t;

struct ltepeg_funtype_108_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_108_hashentry_t * data;}; 
typedef struct ltepeg_funtype_108_htbl_s * ltepeg_funtype_108_htbl_t;

struct ltepeg_funtype_108_s {uint32_t count;
        ltepeg_funtype_108_ftbl_t ftbl;
        ltepeg_funtype_108_htbl_t htbl;};
typedef struct ltepeg_funtype_108_s * ltepeg_funtype_108_t;

extern void release_ltepeg_funtype_108(ltepeg_funtype_108_t x);

extern ltepeg_funtype_108_t copy_ltepeg_funtype_108(ltepeg_funtype_108_t x);

uint32_t lookup_ltepeg_funtype_108(ltepeg_funtype_108_htbl_t htbl, uint8_t i, uint32_t ihash);

ltepeg_funtype_108_t dupdate_ltepeg_funtype_108(ltepeg_funtype_108_t a, uint8_t i, ltepeg__ent_adt_t v);

extern ltepeg_funtype_108_t update_ltepeg_funtype_108(ltepeg_funtype_108_t a, uint8_t i, ltepeg__ent_adt_t v);

extern bool_t equal_ltepeg_funtype_108(ltepeg_funtype_108_t x, ltepeg_funtype_108_t y);

extern char* json_ltepeg_funtype_108(ltepeg_funtype_108_t x);




struct ltepeg_closure_109_s;
        typedef struct ltepeg_closure_109_s * ltepeg_closure_109_t;

struct ltepeg_closure_109_s {uint32_t count;
         ltepeg_funtype_108_ftbl_t ftbl;
         ltepeg_funtype_108_htbl_t htbl;};

ltepeg__ent_adt_t f_ltepeg_closure_109(struct ltepeg_closure_109_s * closure, uint8_t bvar);

ltepeg__ent_adt_t m_ltepeg_closure_109(struct ltepeg_closure_109_s * closure, uint8_t bvar);

extern ltepeg__ent_adt_t h_ltepeg_closure_109(uint8_t ivar_9);

extern ltepeg_closure_109_t new_ltepeg_closure_109(void);

extern void release_ltepeg_closure_109(ltepeg_funtype_108_t closure);

extern ltepeg_closure_109_t copy_ltepeg_closure_109(ltepeg_closure_109_t x);


//doparse

struct ltepeg_funtype_110_s;
        typedef struct ltepeg_funtype_110_s * ltepeg_funtype_110_t;

struct ltepeg_funtype_110_ftbl_s {ltepeg_funtype_108_t (* fptr)(struct ltepeg_funtype_110_s *, uint32_t);
        ltepeg_funtype_108_t (* mptr)(struct ltepeg_funtype_110_s *, uint32_t);
        void (* rptr)(struct ltepeg_funtype_110_s *);
        struct ltepeg_funtype_110_s * (* cptr)(struct ltepeg_funtype_110_s *);};
typedef struct ltepeg_funtype_110_ftbl_s * ltepeg_funtype_110_ftbl_t;

struct ltepeg_funtype_110_hashentry_s {uint32_t keyhash; uint32_t key; ltepeg_funtype_108_t value;}; 
typedef struct ltepeg_funtype_110_hashentry_s ltepeg_funtype_110_hashentry_t;

struct ltepeg_funtype_110_htbl_s {uint32_t size; uint32_t num_entries; ltepeg_funtype_110_hashentry_t * data;}; 
typedef struct ltepeg_funtype_110_htbl_s * ltepeg_funtype_110_htbl_t;

struct ltepeg_funtype_110_s {uint32_t count;
        ltepeg_funtype_110_ftbl_t ftbl;
        ltepeg_funtype_110_htbl_t htbl;};
typedef struct ltepeg_funtype_110_s * ltepeg_funtype_110_t;

extern void release_ltepeg_funtype_110(ltepeg_funtype_110_t x);

extern ltepeg_funtype_110_t copy_ltepeg_funtype_110(ltepeg_funtype_110_t x);

uint32_t lookup_ltepeg_funtype_110(ltepeg_funtype_110_htbl_t htbl, uint32_t i, uint32_t ihash);

ltepeg_funtype_110_t dupdate_ltepeg_funtype_110(ltepeg_funtype_110_t a, uint32_t i, ltepeg_funtype_108_t v);

extern ltepeg_funtype_110_t update_ltepeg_funtype_110(ltepeg_funtype_110_t a, uint32_t i, ltepeg_funtype_108_t v);

extern bool_t equal_ltepeg_funtype_110(ltepeg_funtype_110_t x, ltepeg_funtype_110_t y);

extern char* json_ltepeg_funtype_110(ltepeg_funtype_110_t x);


//doparse

struct ltepeg_record_111_s {
        uint32_t count; 
        uint8_t depth;
        bool_t lflag;
        ltepeg_funtype_110_t scaf;
        ltepeg__ent_adt_t stack;};
typedef struct ltepeg_record_111_s * ltepeg_record_111_t;

extern ltepeg_record_111_t new_ltepeg_record_111(void);

extern void release_ltepeg_record_111(ltepeg_record_111_t x);

extern ltepeg_record_111_t copy_ltepeg_record_111(ltepeg_record_111_t x);

extern bool_t equal_ltepeg_record_111(ltepeg_record_111_t x, ltepeg_record_111_t y);
extern char * json_ltepeg_record_111(ltepeg_record_111_t x);

typedef struct actual_ltepeg_record_111_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepeg_record_111_t;
void release_ltepeg_record_111_ptr(pointer_t x, type_actual_t ltepeg_record_111);

extern bool_t equal_ltepeg_record_111_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_111_t T);

extern char * json_ltepeg_record_111_ptr(pointer_t x,  actual_ltepeg_record_111_t T);

actual_ltepeg_record_111_t actual_ltepeg_record_111(void);

extern ltepeg_record_111_t update_ltepeg_record_111_depth(ltepeg_record_111_t x, uint8_t v);

extern ltepeg_record_111_t update_ltepeg_record_111_lflag(ltepeg_record_111_t x, bool_t v);

extern ltepeg_record_111_t update_ltepeg_record_111_scaf(ltepeg_record_111_t x, ltepeg_funtype_110_t v);

extern ltepeg_record_111_t update_ltepeg_record_111_stack(ltepeg_record_111_t x, ltepeg__ent_adt_t v);




struct ltepeg_closure_112_s;
        typedef struct ltepeg_closure_112_s * ltepeg_closure_112_t;

struct ltepeg_closure_112_s {uint32_t count;
         ltepeg_funtype_110_ftbl_t ftbl;
         ltepeg_funtype_110_htbl_t htbl;
        uint32_t fvar_1;
        ltepeg_funtype_108_t fvar_2;};

ltepeg_funtype_108_t f_ltepeg_closure_112(struct ltepeg_closure_112_s * closure, uint32_t bvar);

ltepeg_funtype_108_t m_ltepeg_closure_112(struct ltepeg_closure_112_s * closure, uint32_t bvar);

extern ltepeg_funtype_108_t h_ltepeg_closure_112(uint32_t ivar_22, uint32_t ivar_1, ltepeg_funtype_108_t ivar_5);

extern ltepeg_closure_112_t new_ltepeg_closure_112(void);

extern void release_ltepeg_closure_112(ltepeg_funtype_110_t closure);

extern ltepeg_closure_112_t copy_ltepeg_closure_112(ltepeg_closure_112_t x);



extern uint8_t ltepeg__num_non_terminals(void);

extern bool_t r_ltepeg__failp(ltepeg__ent_adt_t ivar_1);

extern bool_t r_ltepeg__pendingp(ltepeg__ent_adt_t ivar_1);

extern bool_t r_ltepeg__loopp(ltepeg__ent_adt_t ivar_1);

extern bool_t r_ltepeg__goodp(ltepeg__ent_adt_t ivar_1);

extern bool_t r_ltepeg__pushp(ltepeg__ent_adt_t ivar_1);

extern ltepeg__ent_adt_t update_ltepeg__ent_adt_dep(ltepeg__ent_adt_t ivar_1, uint64_t ivar_7);

extern uint64_t ltepeg__ent_adt_dep(ltepeg__ent_adt_t ivar_1);

extern ltepeg__good_t update_ltepeg__ent_adt_span(ltepeg__ent_adt_t ivar_1, uint32_t ivar_3);

extern uint32_t ltepeg__ent_adt_span(ltepeg__ent_adt_t ivar_1);

extern ltepeg__push_t update_ltepeg__ent_adt_pos(ltepeg__ent_adt_t ivar_1, uint32_t ivar_3);

extern uint32_t ltepeg__ent_adt_pos(ltepeg__ent_adt_t ivar_1);

extern ltepeg__push_t update_ltepeg__ent_adt_nt(ltepeg__ent_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t ltepeg__ent_adt_nt(ltepeg__ent_adt_t ivar_1);

extern ltepeg__ent_adt_t ltepeg__fail(uint64_t ivar_2);

extern ltepeg__ent_adt_t ltepeg__pending(void);

extern ltepeg__ent_adt_t ltepeg__loop(void);

extern ltepeg__ent_adt_t ltepeg__good(uint64_t ivar_2, uint32_t ivar_3);

extern ltepeg__ent_adt_t ltepeg__push(uint32_t ivar_2, uint8_t ivar_3);

extern ltepeg_funtype_4_t ltepeg__ent_ord(void);

extern uint8_t ltepeg__ord__1(ltepeg__ent_adt_t ivar_1);

extern bool_t ltepeg__subterm__1(ltepeg__ent_adt_t ivar_1, ltepeg__ent_adt_t ivar_2);

extern bool_t ltepeg__doublelessp__1(ltepeg__ent_adt_t ivar_1, ltepeg__ent_adt_t ivar_2);

extern ltepeg_funtype_5_t ltepeg__reduce_nat__1(ltepeg_funtype_6_t ivar_1, mpz_ptr_t ivar_3, mpz_ptr_t ivar_4, ltepeg_funtype_8_t ivar_5, ltepeg_funtype_10_t ivar_7);

extern ltepeg_funtype_5_t ltepeg__REDUCE_nat__1(ltepeg_funtype_13_t ivar_1, ltepeg_funtype_5_t ivar_3, ltepeg_funtype_5_t ivar_5, ltepeg_funtype_15_t ivar_7, ltepeg_funtype_17_t ivar_9);

extern ltepeg_funtype_19_t ltepeg__reduce_ordinal__1(ltepeg_funtype_20_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_4, ltepeg_funtype_21_t ivar_5, ltepeg_funtype_22_t ivar_7);

extern ltepeg_funtype_19_t ltepeg__REDUCE_ordinal__1(ltepeg_funtype_24_t ivar_1, ltepeg_funtype_19_t ivar_3, ltepeg_funtype_19_t ivar_5, ltepeg_funtype_25_t ivar_7, ltepeg_funtype_26_t ivar_9);

extern bool_t r_ltepeg__epsilonp(ltepeg__prepeg_adt_t ivar_1);

extern bool_t r_ltepeg__failurep(ltepeg__prepeg_adt_t ivar_1);

extern bool_t r_ltepeg__anyp(ltepeg__prepeg_adt_t ivar_1);

extern bool_t r_ltepeg__terminalp(ltepeg__prepeg_adt_t ivar_1);

extern bool_t r_ltepeg__ltep(ltepeg__prepeg_adt_t ivar_1);

extern ltepeg__any_t update_ltepeg__prepeg_adt_p(ltepeg__prepeg_adt_t ivar_1, ltepeg_funtype_29_t ivar_4);

extern ltepeg_funtype_29_t ltepeg__prepeg_adt_p(ltepeg__prepeg_adt_t ivar_1);

extern ltepeg__terminal_t update_ltepeg__prepeg_adt_a(ltepeg__prepeg_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t ltepeg__prepeg_adt_a(ltepeg__prepeg_adt_t ivar_1);

extern ltepeg__lte_t update_ltepeg__prepeg_adt_fst(ltepeg__prepeg_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t ltepeg__prepeg_adt_fst(ltepeg__prepeg_adt_t ivar_1);

extern ltepeg__lte_t update_ltepeg__prepeg_adt_lthen(ltepeg__prepeg_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t ltepeg__prepeg_adt_lthen(ltepeg__prepeg_adt_t ivar_1);

extern ltepeg__lte_t update_ltepeg__prepeg_adt_lelse(ltepeg__prepeg_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t ltepeg__prepeg_adt_lelse(ltepeg__prepeg_adt_t ivar_1);

extern ltepeg__prepeg_adt_t ltepeg__epsilon(void);

extern ltepeg__prepeg_adt_t ltepeg__failure(void);

extern ltepeg__prepeg_adt_t ltepeg__any(ltepeg_funtype_29_t ivar_2);

extern ltepeg__prepeg_adt_t ltepeg__terminal(uint8_t ivar_2);

extern ltepeg__prepeg_adt_t ltepeg__lte(uint8_t ivar_2, uint8_t ivar_3, uint8_t ivar_4);

extern ltepeg_funtype_33_t ltepeg__prepeg_ord(void);

extern uint8_t ltepeg__ord__2(ltepeg__prepeg_adt_t ivar_1);

extern bool_t ltepeg__subterm__2(ltepeg__prepeg_adt_t ivar_1, ltepeg__prepeg_adt_t ivar_2);

extern bool_t ltepeg__doublelessp__2(ltepeg__prepeg_adt_t ivar_1, ltepeg__prepeg_adt_t ivar_2);

extern ltepeg_funtype_34_t ltepeg__reduce_nat__2(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, ltepeg_funtype_35_t ivar_3, ltepeg_funtype_36_t ivar_6, ltepeg_funtype_38_t ivar_8);

extern ltepeg_funtype_34_t ltepeg__REDUCE_nat__2(ltepeg_funtype_34_t ivar_1, ltepeg_funtype_34_t ivar_3, ltepeg_funtype_41_t ivar_5, ltepeg_funtype_43_t ivar_8, ltepeg_funtype_45_t ivar_10);

extern ltepeg_funtype_47_t ltepeg__reduce_ordinal__2(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2, ltepeg_funtype_48_t ivar_3, ltepeg_funtype_49_t ivar_6, ltepeg_funtype_50_t ivar_8);

extern ltepeg_funtype_47_t ltepeg__REDUCE_ordinal__2(ltepeg_funtype_47_t ivar_1, ltepeg_funtype_47_t ivar_3, ltepeg_funtype_52_t ivar_5, ltepeg_funtype_53_t ivar_8, ltepeg_funtype_54_t ivar_10);

extern ltepeg_funtype_56_t ltepeg__good_good_entryp(uint32_t ivar_1, uint32_t ivar_2);

extern ltepeg_funtype_56_t ltepeg__good_push_entryp(uint32_t ivar_1);

extern ltepeg_funtype_56_t ltepeg__fine_push_entryp(uint32_t ivar_1);

extern ltepeg_funtype_56_t ltepeg__nice_entryp(uint32_t ivar_1, uint32_t ivar_2);

extern bool_t ltepeg__loop_or_pushp(ltepeg__ent_adt_t ivar_1);

extern ltepeg_funtype_61_t ltepeg__instack(uint32_t ivar_1, ltepeg_array_63_t ivar_2);

extern ltepeg_funtype_66_t ltepeg__successor(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_63_t ivar_3);

extern ltepeg_funtype_69_t ltepeg__sigma(uint32_t ivar_1, ltepeg_array_70_t ivar_2);

extern uint64_t ltepeg__scafcount(uint32_t ivar_1, ltepeg_array_63_t ivar_2, ltepeg_funtype_56_t ivar_4, uint32_t ivar_6);

extern uint64_t ltepeg__pushcount(uint32_t ivar_1, ltepeg_array_63_t ivar_2);

extern bool_t ltepeg__good_or_failp(ltepeg__ent_adt_t ivar_1);

extern uint64_t ltepeg__gfcount(uint32_t ivar_1, ltepeg_array_63_t ivar_2);

extern ltepeg_funtype_76_t ltepeg__good_depthp(uint32_t ivar_1, ltepeg_array_63_t ivar_2);

extern ltepeg_funtype_56_t ltepeg__good_stackp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, uint64_t ivar_3, ltepeg_array_63_t ivar_4);

extern ltepeg_funtype_66_t ltepeg__mem_stackp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, uint64_t ivar_3, ltepeg_array_63_t ivar_4);

extern bool_t ltepeg__push_or_pendingp(ltepeg__ent_adt_t ivar_1);

extern ltepeg_funtype_56_t ltepeg__fine_stackp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, uint64_t ivar_3, ltepeg_array_63_t ivar_4);

extern bool_t ltepeg__loop_readyp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_63_t ivar_3, uint32_t ivar_5, uint8_t ivar_6);

extern ltepeg_funtype_82_t ltepeg__good_failp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3);

extern ltepeg_funtype_86_t ltepeg__good_loopp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2);

extern ltepeg_funtype_89_t ltepeg__good_goodp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3);

extern ltepeg_funtype_92_t ltepeg__good_entryp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3);

extern ltepeg_funtype_92_t ltepeg__fine_entryp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3);

extern ltepeg_funtype_95_t ltepeg__good_tscaffoldp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3);

extern ltepeg_funtype_61_t ltepeg__good_rootp(uint32_t ivar_1, ltepeg_array_63_t ivar_2);

extern ltepeg_funtype_98_t ltepeg__fine_scaffoldp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3);

extern bool_t ltepeg__emptyp(ltepeg__ent_adt_t ivar_1);

extern ltepeg_funtype_102_t ltepeg__step(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3, uint32_t ivar_4, uint8_t ivar_5);

extern ltepeg_funtype_105_t ltepeg__size(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3, uint32_t ivar_4, uint8_t ivar_5);

extern ltepeg_record_101_t ltepeg__parse(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3, uint32_t ivar_4, uint8_t ivar_5, ltepeg_record_101_t ivar_6);

extern ltepeg__ent_adt_t ltepeg__doparse(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3, uint8_t ivar_4);
#endif