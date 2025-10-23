//Code generated using pvs2ir
#ifndef _ltepegproof_h 
#define _ltepegproof_h

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

#include "ltepeg_c.h"

#include "arrayCount_c.h"

//cc -O3 -Wall -o ltepegproof -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/lex2_c.c /Users/e21660/shankar/pvs.git/lib/sets_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c ltepegproof_c.c ltepeg_c.c arrayCount_c.c -lgmp 
//parsetree

struct ltepegproof__parsetree_adt_s {
         uint32_t count; 
        uint8_t ltepegproof__parsetree_adt_index;};
typedef struct ltepegproof__parsetree_adt_s * ltepegproof__parsetree_adt_t;

extern ltepegproof__parsetree_adt_t new_ltepegproof__parsetree_adt(void);

extern void release_ltepegproof__parsetree_adt(ltepegproof__parsetree_adt_t x);

extern ltepegproof__parsetree_adt_t copy_ltepegproof__parsetree_adt(ltepegproof__parsetree_adt_t x);

extern bool_t equal_ltepegproof__parsetree_adt(ltepegproof__parsetree_adt_t x, ltepegproof__parsetree_adt_t y);
extern char * json_ltepegproof__parsetree_adt(ltepegproof__parsetree_adt_t x);

typedef struct actual_ltepegproof__parsetree_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof__parsetree_adt_t;
void release_ltepegproof__parsetree_adt_ptr(pointer_t x, type_actual_t ltepegproof__parsetree_adt);

extern bool_t equal_ltepegproof__parsetree_adt_ptr(pointer_t x, pointer_t y, actual_ltepegproof__parsetree_adt_t T);

extern char * json_ltepegproof__parsetree_adt_ptr(pointer_t x,  actual_ltepegproof__parsetree_adt_t T);

actual_ltepegproof__parsetree_adt_t actual_ltepegproof__parsetree_adt(void);

extern ltepegproof__parsetree_adt_t update_ltepegproof__parsetree_adt_ltepegproof__parsetree_adt_index(ltepegproof__parsetree_adt_t x, uint8_t v);


//zero

struct ltepegproof__zero_s {
        uint32_t count; 
        uint8_t ltepegproof__parsetree_adt_index;
        ltepeg__ent_adt_t entry;};
typedef struct ltepegproof__zero_s * ltepegproof__zero_t;

extern ltepegproof__zero_t new_ltepegproof__zero(void);

extern void release_ltepegproof__zero(ltepegproof__zero_t x);

extern ltepegproof__zero_t copy_ltepegproof__zero(ltepegproof__zero_t x);

extern bool_t equal_ltepegproof__zero(ltepegproof__zero_t x, ltepegproof__zero_t y);
extern char * json_ltepegproof__zero(ltepegproof__zero_t x);

typedef struct actual_ltepegproof__zero_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof__zero_t;
void release_ltepegproof__zero_ptr(pointer_t x, type_actual_t ltepegproof__zero);

extern bool_t equal_ltepegproof__zero_ptr(pointer_t x, pointer_t y, actual_ltepegproof__zero_t T);

extern char * json_ltepegproof__zero_ptr(pointer_t x,  actual_ltepegproof__zero_t T);

actual_ltepegproof__zero_t actual_ltepegproof__zero(void);

extern ltepegproof__zero_t update_ltepegproof__zero_ltepegproof__parsetree_adt_index(ltepegproof__zero_t x, uint8_t v);

extern ltepegproof__zero_t update_ltepegproof__zero_entry(ltepegproof__zero_t x, ltepeg__ent_adt_t v);


//one

struct ltepegproof__one_s {
        uint32_t count; 
        uint8_t ltepegproof__parsetree_adt_index;
        ltepeg__ent_adt_t entry;
        ltepegproof__parsetree_adt_t subone;};
typedef struct ltepegproof__one_s * ltepegproof__one_t;

extern ltepegproof__one_t new_ltepegproof__one(void);

extern void release_ltepegproof__one(ltepegproof__one_t x);

extern ltepegproof__one_t copy_ltepegproof__one(ltepegproof__one_t x);

extern bool_t equal_ltepegproof__one(ltepegproof__one_t x, ltepegproof__one_t y);
extern char * json_ltepegproof__one(ltepegproof__one_t x);

typedef struct actual_ltepegproof__one_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof__one_t;
void release_ltepegproof__one_ptr(pointer_t x, type_actual_t ltepegproof__one);

extern bool_t equal_ltepegproof__one_ptr(pointer_t x, pointer_t y, actual_ltepegproof__one_t T);

extern char * json_ltepegproof__one_ptr(pointer_t x,  actual_ltepegproof__one_t T);

actual_ltepegproof__one_t actual_ltepegproof__one(void);

extern ltepegproof__one_t update_ltepegproof__one_ltepegproof__parsetree_adt_index(ltepegproof__one_t x, uint8_t v);

extern ltepegproof__one_t update_ltepegproof__one_entry(ltepegproof__one_t x, ltepeg__ent_adt_t v);

extern ltepegproof__one_t update_ltepegproof__one_subone(ltepegproof__one_t x, ltepegproof__parsetree_adt_t v);


//two

struct ltepegproof__two_s {
        uint32_t count; 
        uint8_t ltepegproof__parsetree_adt_index;
        ltepeg__ent_adt_t entry;
        ltepegproof__parsetree_adt_t subone;
        ltepegproof__parsetree_adt_t subtwo;};
typedef struct ltepegproof__two_s * ltepegproof__two_t;

extern ltepegproof__two_t new_ltepegproof__two(void);

extern void release_ltepegproof__two(ltepegproof__two_t x);

extern ltepegproof__two_t copy_ltepegproof__two(ltepegproof__two_t x);

extern bool_t equal_ltepegproof__two(ltepegproof__two_t x, ltepegproof__two_t y);
extern char * json_ltepegproof__two(ltepegproof__two_t x);

typedef struct actual_ltepegproof__two_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof__two_t;
void release_ltepegproof__two_ptr(pointer_t x, type_actual_t ltepegproof__two);

extern bool_t equal_ltepegproof__two_ptr(pointer_t x, pointer_t y, actual_ltepegproof__two_t T);

extern char * json_ltepegproof__two_ptr(pointer_t x,  actual_ltepegproof__two_t T);

actual_ltepegproof__two_t actual_ltepegproof__two(void);

extern ltepegproof__two_t update_ltepegproof__two_ltepegproof__parsetree_adt_index(ltepegproof__two_t x, uint8_t v);

extern ltepegproof__two_t update_ltepegproof__two_entry(ltepegproof__two_t x, ltepeg__ent_adt_t v);

extern ltepegproof__two_t update_ltepegproof__two_subone(ltepegproof__two_t x, ltepegproof__parsetree_adt_t v);

extern ltepegproof__two_t update_ltepegproof__two_subtwo(ltepegproof__two_t x, ltepegproof__parsetree_adt_t v);


//parsetree_ord

struct ltepegproof_funtype_4_s;
        typedef struct ltepegproof_funtype_4_s * ltepegproof_funtype_4_t;

struct ltepegproof_funtype_4_ftbl_s {uint8_t (* fptr)(struct ltepegproof_funtype_4_s *, ltepegproof__parsetree_adt_t);
        uint8_t (* mptr)(struct ltepegproof_funtype_4_s *, ltepegproof__parsetree_adt_t);
        void (* rptr)(struct ltepegproof_funtype_4_s *);
        struct ltepegproof_funtype_4_s * (* cptr)(struct ltepegproof_funtype_4_s *);};
typedef struct ltepegproof_funtype_4_ftbl_s * ltepegproof_funtype_4_ftbl_t;

struct ltepegproof_funtype_4_hashentry_s {uint32_t keyhash; ltepegproof__parsetree_adt_t key; uint8_t value;}; 
typedef struct ltepegproof_funtype_4_hashentry_s ltepegproof_funtype_4_hashentry_t;

struct ltepegproof_funtype_4_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_4_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_4_htbl_s * ltepegproof_funtype_4_htbl_t;

struct ltepegproof_funtype_4_s {uint32_t count;
        ltepegproof_funtype_4_ftbl_t ftbl;
        ltepegproof_funtype_4_htbl_t htbl;};
typedef struct ltepegproof_funtype_4_s * ltepegproof_funtype_4_t;

extern void release_ltepegproof_funtype_4(ltepegproof_funtype_4_t x);

extern ltepegproof_funtype_4_t copy_ltepegproof_funtype_4(ltepegproof_funtype_4_t x);

extern bool_t equal_ltepegproof_funtype_4(ltepegproof_funtype_4_t x, ltepegproof_funtype_4_t y);

extern char* json_ltepegproof_funtype_4(ltepegproof_funtype_4_t x);


//reduce_nat

struct ltepegproof_funtype_5_s;
        typedef struct ltepegproof_funtype_5_s * ltepegproof_funtype_5_t;

struct ltepegproof_funtype_5_ftbl_s {mpz_ptr_t (* fptr)(struct ltepegproof_funtype_5_s *, ltepegproof__parsetree_adt_t);
        mpz_ptr_t (* mptr)(struct ltepegproof_funtype_5_s *, ltepegproof__parsetree_adt_t);
        void (* rptr)(struct ltepegproof_funtype_5_s *);
        struct ltepegproof_funtype_5_s * (* cptr)(struct ltepegproof_funtype_5_s *);};
typedef struct ltepegproof_funtype_5_ftbl_s * ltepegproof_funtype_5_ftbl_t;

struct ltepegproof_funtype_5_hashentry_s {uint32_t keyhash; ltepegproof__parsetree_adt_t key; mpz_t value;}; 
typedef struct ltepegproof_funtype_5_hashentry_s ltepegproof_funtype_5_hashentry_t;

struct ltepegproof_funtype_5_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_5_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_5_htbl_s * ltepegproof_funtype_5_htbl_t;

struct ltepegproof_funtype_5_s {uint32_t count;
        ltepegproof_funtype_5_ftbl_t ftbl;
        ltepegproof_funtype_5_htbl_t htbl;};
typedef struct ltepegproof_funtype_5_s * ltepegproof_funtype_5_t;

extern void release_ltepegproof_funtype_5(ltepegproof_funtype_5_t x);

extern ltepegproof_funtype_5_t copy_ltepegproof_funtype_5(ltepegproof_funtype_5_t x);

extern bool_t equal_ltepegproof_funtype_5(ltepegproof_funtype_5_t x, ltepegproof_funtype_5_t y);

extern char* json_ltepegproof_funtype_5(ltepegproof_funtype_5_t x);


//reduce_nat

struct ltepegproof_funtype_6_s;
        typedef struct ltepegproof_funtype_6_s * ltepegproof_funtype_6_t;

struct ltepegproof_funtype_6_ftbl_s {mpz_ptr_t (* fptr)(struct ltepegproof_funtype_6_s *, ltepeg__ent_adt_t);
        mpz_ptr_t (* mptr)(struct ltepegproof_funtype_6_s *, ltepeg__ent_adt_t);
        void (* rptr)(struct ltepegproof_funtype_6_s *);
        struct ltepegproof_funtype_6_s * (* cptr)(struct ltepegproof_funtype_6_s *);};
typedef struct ltepegproof_funtype_6_ftbl_s * ltepegproof_funtype_6_ftbl_t;

struct ltepegproof_funtype_6_hashentry_s {uint32_t keyhash; ltepeg__ent_adt_t key; mpz_t value;}; 
typedef struct ltepegproof_funtype_6_hashentry_s ltepegproof_funtype_6_hashentry_t;

struct ltepegproof_funtype_6_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_6_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_6_htbl_s * ltepegproof_funtype_6_htbl_t;

struct ltepegproof_funtype_6_s {uint32_t count;
        ltepegproof_funtype_6_ftbl_t ftbl;
        ltepegproof_funtype_6_htbl_t htbl;};
typedef struct ltepegproof_funtype_6_s * ltepegproof_funtype_6_t;

extern void release_ltepegproof_funtype_6(ltepegproof_funtype_6_t x);

extern ltepegproof_funtype_6_t copy_ltepegproof_funtype_6(ltepegproof_funtype_6_t x);

extern bool_t equal_ltepegproof_funtype_6(ltepegproof_funtype_6_t x, ltepegproof_funtype_6_t y);

extern char* json_ltepegproof_funtype_6(ltepegproof_funtype_6_t x);


//reduce_nat

struct ltepegproof_record_7_s {
        uint32_t count; 
        ltepeg__ent_adt_t project_1;
        mpz_t project_2;};
typedef struct ltepegproof_record_7_s * ltepegproof_record_7_t;

extern ltepegproof_record_7_t new_ltepegproof_record_7(void);

extern void release_ltepegproof_record_7(ltepegproof_record_7_t x);

extern ltepegproof_record_7_t copy_ltepegproof_record_7(ltepegproof_record_7_t x);

extern bool_t equal_ltepegproof_record_7(ltepegproof_record_7_t x, ltepegproof_record_7_t y);
extern char * json_ltepegproof_record_7(ltepegproof_record_7_t x);

typedef struct actual_ltepegproof_record_7_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_7_t;
void release_ltepegproof_record_7_ptr(pointer_t x, type_actual_t ltepegproof_record_7);

extern bool_t equal_ltepegproof_record_7_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_7_t T);

extern char * json_ltepegproof_record_7_ptr(pointer_t x,  actual_ltepegproof_record_7_t T);

actual_ltepegproof_record_7_t actual_ltepegproof_record_7(void);

extern ltepegproof_record_7_t update_ltepegproof_record_7_project_1(ltepegproof_record_7_t x, ltepeg__ent_adt_t v);

extern ltepegproof_record_7_t update_ltepegproof_record_7_project_2(ltepegproof_record_7_t x, mpz_ptr_t v);


//reduce_nat

struct ltepegproof_funtype_8_s;
        typedef struct ltepegproof_funtype_8_s * ltepegproof_funtype_8_t;

struct ltepegproof_funtype_8_ftbl_s {mpz_ptr_t (* fptr)(struct ltepegproof_funtype_8_s *, ltepegproof_record_7_t);
        mpz_ptr_t (* mptr)(struct ltepegproof_funtype_8_s *, ltepeg__ent_adt_t, mpz_ptr_t);
        void (* rptr)(struct ltepegproof_funtype_8_s *);
        struct ltepegproof_funtype_8_s * (* cptr)(struct ltepegproof_funtype_8_s *);};
typedef struct ltepegproof_funtype_8_ftbl_s * ltepegproof_funtype_8_ftbl_t;

struct ltepegproof_funtype_8_hashentry_s {uint32_t keyhash; ltepegproof_record_7_t key; mpz_t value;}; 
typedef struct ltepegproof_funtype_8_hashentry_s ltepegproof_funtype_8_hashentry_t;

struct ltepegproof_funtype_8_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_8_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_8_htbl_s * ltepegproof_funtype_8_htbl_t;

struct ltepegproof_funtype_8_s {uint32_t count;
        ltepegproof_funtype_8_ftbl_t ftbl;
        ltepegproof_funtype_8_htbl_t htbl;};
typedef struct ltepegproof_funtype_8_s * ltepegproof_funtype_8_t;

extern void release_ltepegproof_funtype_8(ltepegproof_funtype_8_t x);

extern ltepegproof_funtype_8_t copy_ltepegproof_funtype_8(ltepegproof_funtype_8_t x);

extern bool_t equal_ltepegproof_funtype_8(ltepegproof_funtype_8_t x, ltepegproof_funtype_8_t y);

extern char* json_ltepegproof_funtype_8(ltepegproof_funtype_8_t x);


//reduce_nat

struct ltepegproof_record_9_s {
        uint32_t count; 
        ltepeg__ent_adt_t project_1;
        mpz_t project_2;
        mpz_t project_3;};
typedef struct ltepegproof_record_9_s * ltepegproof_record_9_t;

extern ltepegproof_record_9_t new_ltepegproof_record_9(void);

extern void release_ltepegproof_record_9(ltepegproof_record_9_t x);

extern ltepegproof_record_9_t copy_ltepegproof_record_9(ltepegproof_record_9_t x);

extern bool_t equal_ltepegproof_record_9(ltepegproof_record_9_t x, ltepegproof_record_9_t y);
extern char * json_ltepegproof_record_9(ltepegproof_record_9_t x);

typedef struct actual_ltepegproof_record_9_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_9_t;
void release_ltepegproof_record_9_ptr(pointer_t x, type_actual_t ltepegproof_record_9);

extern bool_t equal_ltepegproof_record_9_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_9_t T);

extern char * json_ltepegproof_record_9_ptr(pointer_t x,  actual_ltepegproof_record_9_t T);

actual_ltepegproof_record_9_t actual_ltepegproof_record_9(void);

extern ltepegproof_record_9_t update_ltepegproof_record_9_project_1(ltepegproof_record_9_t x, ltepeg__ent_adt_t v);

extern ltepegproof_record_9_t update_ltepegproof_record_9_project_2(ltepegproof_record_9_t x, mpz_ptr_t v);

extern ltepegproof_record_9_t update_ltepegproof_record_9_project_3(ltepegproof_record_9_t x, mpz_ptr_t v);


//reduce_nat

struct ltepegproof_funtype_10_s;
        typedef struct ltepegproof_funtype_10_s * ltepegproof_funtype_10_t;

struct ltepegproof_funtype_10_ftbl_s {mpz_ptr_t (* fptr)(struct ltepegproof_funtype_10_s *, ltepegproof_record_9_t);
        mpz_ptr_t (* mptr)(struct ltepegproof_funtype_10_s *, ltepeg__ent_adt_t, mpz_ptr_t, mpz_ptr_t);
        void (* rptr)(struct ltepegproof_funtype_10_s *);
        struct ltepegproof_funtype_10_s * (* cptr)(struct ltepegproof_funtype_10_s *);};
typedef struct ltepegproof_funtype_10_ftbl_s * ltepegproof_funtype_10_ftbl_t;

struct ltepegproof_funtype_10_hashentry_s {uint32_t keyhash; ltepegproof_record_9_t key; mpz_t value;}; 
typedef struct ltepegproof_funtype_10_hashentry_s ltepegproof_funtype_10_hashentry_t;

struct ltepegproof_funtype_10_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_10_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_10_htbl_s * ltepegproof_funtype_10_htbl_t;

struct ltepegproof_funtype_10_s {uint32_t count;
        ltepegproof_funtype_10_ftbl_t ftbl;
        ltepegproof_funtype_10_htbl_t htbl;};
typedef struct ltepegproof_funtype_10_s * ltepegproof_funtype_10_t;

extern void release_ltepegproof_funtype_10(ltepegproof_funtype_10_t x);

extern ltepegproof_funtype_10_t copy_ltepegproof_funtype_10(ltepegproof_funtype_10_t x);

extern bool_t equal_ltepegproof_funtype_10(ltepegproof_funtype_10_t x, ltepegproof_funtype_10_t y);

extern char* json_ltepegproof_funtype_10(ltepegproof_funtype_10_t x);




struct ltepegproof_closure_11_s;
        typedef struct ltepegproof_closure_11_s * ltepegproof_closure_11_t;

struct ltepegproof_closure_11_s {uint32_t count;
         ltepegproof_funtype_5_ftbl_t ftbl;
         ltepegproof_funtype_5_htbl_t htbl;
        ltepegproof_funtype_8_t fvar_1;
        ltepegproof_funtype_10_t fvar_2;
        ltepegproof_funtype_6_t fvar_3;};

mpz_ptr_t f_ltepegproof_closure_11(struct ltepegproof_closure_11_s * closure, ltepegproof__parsetree_adt_t bvar);

mpz_ptr_t m_ltepegproof_closure_11(struct ltepegproof_closure_11_s * closure, ltepegproof__parsetree_adt_t bvar);

extern mpz_ptr_t h_ltepegproof_closure_11(ltepegproof__parsetree_adt_t ivar_8, ltepegproof_funtype_8_t ivar_3, ltepegproof_funtype_10_t ivar_5, ltepegproof_funtype_6_t ivar_1);

extern ltepegproof_closure_11_t new_ltepegproof_closure_11(void);

extern void release_ltepegproof_closure_11(ltepegproof_funtype_5_t closure);

extern ltepegproof_closure_11_t copy_ltepegproof_closure_11(ltepegproof_closure_11_t x);


//REDUCE_nat

struct ltepegproof_record_12_s {
        uint32_t count; 
        ltepeg__ent_adt_t project_1;
        ltepegproof__parsetree_adt_t project_2;};
typedef struct ltepegproof_record_12_s * ltepegproof_record_12_t;

extern ltepegproof_record_12_t new_ltepegproof_record_12(void);

extern void release_ltepegproof_record_12(ltepegproof_record_12_t x);

extern ltepegproof_record_12_t copy_ltepegproof_record_12(ltepegproof_record_12_t x);

extern bool_t equal_ltepegproof_record_12(ltepegproof_record_12_t x, ltepegproof_record_12_t y);
extern char * json_ltepegproof_record_12(ltepegproof_record_12_t x);

typedef struct actual_ltepegproof_record_12_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_12_t;
void release_ltepegproof_record_12_ptr(pointer_t x, type_actual_t ltepegproof_record_12);

extern bool_t equal_ltepegproof_record_12_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_12_t T);

extern char * json_ltepegproof_record_12_ptr(pointer_t x,  actual_ltepegproof_record_12_t T);

actual_ltepegproof_record_12_t actual_ltepegproof_record_12(void);

extern ltepegproof_record_12_t update_ltepegproof_record_12_project_1(ltepegproof_record_12_t x, ltepeg__ent_adt_t v);

extern ltepegproof_record_12_t update_ltepegproof_record_12_project_2(ltepegproof_record_12_t x, ltepegproof__parsetree_adt_t v);


//REDUCE_nat

struct ltepegproof_funtype_13_s;
        typedef struct ltepegproof_funtype_13_s * ltepegproof_funtype_13_t;

struct ltepegproof_funtype_13_ftbl_s {mpz_ptr_t (* fptr)(struct ltepegproof_funtype_13_s *, ltepegproof_record_12_t);
        mpz_ptr_t (* mptr)(struct ltepegproof_funtype_13_s *, ltepeg__ent_adt_t, ltepegproof__parsetree_adt_t);
        void (* rptr)(struct ltepegproof_funtype_13_s *);
        struct ltepegproof_funtype_13_s * (* cptr)(struct ltepegproof_funtype_13_s *);};
typedef struct ltepegproof_funtype_13_ftbl_s * ltepegproof_funtype_13_ftbl_t;

struct ltepegproof_funtype_13_hashentry_s {uint32_t keyhash; ltepegproof_record_12_t key; mpz_t value;}; 
typedef struct ltepegproof_funtype_13_hashentry_s ltepegproof_funtype_13_hashentry_t;

struct ltepegproof_funtype_13_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_13_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_13_htbl_s * ltepegproof_funtype_13_htbl_t;

struct ltepegproof_funtype_13_s {uint32_t count;
        ltepegproof_funtype_13_ftbl_t ftbl;
        ltepegproof_funtype_13_htbl_t htbl;};
typedef struct ltepegproof_funtype_13_s * ltepegproof_funtype_13_t;

extern void release_ltepegproof_funtype_13(ltepegproof_funtype_13_t x);

extern ltepegproof_funtype_13_t copy_ltepegproof_funtype_13(ltepegproof_funtype_13_t x);

extern bool_t equal_ltepegproof_funtype_13(ltepegproof_funtype_13_t x, ltepegproof_funtype_13_t y);

extern char* json_ltepegproof_funtype_13(ltepegproof_funtype_13_t x);


//REDUCE_nat

struct ltepegproof_record_14_s {
        uint32_t count; 
        ltepeg__ent_adt_t project_1;
        mpz_t project_2;
        ltepegproof__parsetree_adt_t project_3;};
typedef struct ltepegproof_record_14_s * ltepegproof_record_14_t;

extern ltepegproof_record_14_t new_ltepegproof_record_14(void);

extern void release_ltepegproof_record_14(ltepegproof_record_14_t x);

extern ltepegproof_record_14_t copy_ltepegproof_record_14(ltepegproof_record_14_t x);

extern bool_t equal_ltepegproof_record_14(ltepegproof_record_14_t x, ltepegproof_record_14_t y);
extern char * json_ltepegproof_record_14(ltepegproof_record_14_t x);

typedef struct actual_ltepegproof_record_14_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_14_t;
void release_ltepegproof_record_14_ptr(pointer_t x, type_actual_t ltepegproof_record_14);

extern bool_t equal_ltepegproof_record_14_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_14_t T);

extern char * json_ltepegproof_record_14_ptr(pointer_t x,  actual_ltepegproof_record_14_t T);

actual_ltepegproof_record_14_t actual_ltepegproof_record_14(void);

extern ltepegproof_record_14_t update_ltepegproof_record_14_project_1(ltepegproof_record_14_t x, ltepeg__ent_adt_t v);

extern ltepegproof_record_14_t update_ltepegproof_record_14_project_2(ltepegproof_record_14_t x, mpz_ptr_t v);

extern ltepegproof_record_14_t update_ltepegproof_record_14_project_3(ltepegproof_record_14_t x, ltepegproof__parsetree_adt_t v);


//REDUCE_nat

struct ltepegproof_funtype_15_s;
        typedef struct ltepegproof_funtype_15_s * ltepegproof_funtype_15_t;

struct ltepegproof_funtype_15_ftbl_s {mpz_ptr_t (* fptr)(struct ltepegproof_funtype_15_s *, ltepegproof_record_14_t);
        mpz_ptr_t (* mptr)(struct ltepegproof_funtype_15_s *, ltepeg__ent_adt_t, mpz_ptr_t, ltepegproof__parsetree_adt_t);
        void (* rptr)(struct ltepegproof_funtype_15_s *);
        struct ltepegproof_funtype_15_s * (* cptr)(struct ltepegproof_funtype_15_s *);};
typedef struct ltepegproof_funtype_15_ftbl_s * ltepegproof_funtype_15_ftbl_t;

struct ltepegproof_funtype_15_hashentry_s {uint32_t keyhash; ltepegproof_record_14_t key; mpz_t value;}; 
typedef struct ltepegproof_funtype_15_hashentry_s ltepegproof_funtype_15_hashentry_t;

struct ltepegproof_funtype_15_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_15_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_15_htbl_s * ltepegproof_funtype_15_htbl_t;

struct ltepegproof_funtype_15_s {uint32_t count;
        ltepegproof_funtype_15_ftbl_t ftbl;
        ltepegproof_funtype_15_htbl_t htbl;};
typedef struct ltepegproof_funtype_15_s * ltepegproof_funtype_15_t;

extern void release_ltepegproof_funtype_15(ltepegproof_funtype_15_t x);

extern ltepegproof_funtype_15_t copy_ltepegproof_funtype_15(ltepegproof_funtype_15_t x);

extern bool_t equal_ltepegproof_funtype_15(ltepegproof_funtype_15_t x, ltepegproof_funtype_15_t y);

extern char* json_ltepegproof_funtype_15(ltepegproof_funtype_15_t x);


//REDUCE_nat

struct ltepegproof_record_16_s {
        uint32_t count; 
        ltepeg__ent_adt_t project_1;
        mpz_t project_2;
        mpz_t project_3;
        ltepegproof__parsetree_adt_t project_4;};
typedef struct ltepegproof_record_16_s * ltepegproof_record_16_t;

extern ltepegproof_record_16_t new_ltepegproof_record_16(void);

extern void release_ltepegproof_record_16(ltepegproof_record_16_t x);

extern ltepegproof_record_16_t copy_ltepegproof_record_16(ltepegproof_record_16_t x);

extern bool_t equal_ltepegproof_record_16(ltepegproof_record_16_t x, ltepegproof_record_16_t y);
extern char * json_ltepegproof_record_16(ltepegproof_record_16_t x);

typedef struct actual_ltepegproof_record_16_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_16_t;
void release_ltepegproof_record_16_ptr(pointer_t x, type_actual_t ltepegproof_record_16);

extern bool_t equal_ltepegproof_record_16_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_16_t T);

extern char * json_ltepegproof_record_16_ptr(pointer_t x,  actual_ltepegproof_record_16_t T);

actual_ltepegproof_record_16_t actual_ltepegproof_record_16(void);

extern ltepegproof_record_16_t update_ltepegproof_record_16_project_1(ltepegproof_record_16_t x, ltepeg__ent_adt_t v);

extern ltepegproof_record_16_t update_ltepegproof_record_16_project_2(ltepegproof_record_16_t x, mpz_ptr_t v);

extern ltepegproof_record_16_t update_ltepegproof_record_16_project_3(ltepegproof_record_16_t x, mpz_ptr_t v);

extern ltepegproof_record_16_t update_ltepegproof_record_16_project_4(ltepegproof_record_16_t x, ltepegproof__parsetree_adt_t v);


//REDUCE_nat

struct ltepegproof_funtype_17_s;
        typedef struct ltepegproof_funtype_17_s * ltepegproof_funtype_17_t;

struct ltepegproof_funtype_17_ftbl_s {mpz_ptr_t (* fptr)(struct ltepegproof_funtype_17_s *, ltepegproof_record_16_t);
        mpz_ptr_t (* mptr)(struct ltepegproof_funtype_17_s *, ltepeg__ent_adt_t, mpz_ptr_t, mpz_ptr_t, ltepegproof__parsetree_adt_t);
        void (* rptr)(struct ltepegproof_funtype_17_s *);
        struct ltepegproof_funtype_17_s * (* cptr)(struct ltepegproof_funtype_17_s *);};
typedef struct ltepegproof_funtype_17_ftbl_s * ltepegproof_funtype_17_ftbl_t;

struct ltepegproof_funtype_17_hashentry_s {uint32_t keyhash; ltepegproof_record_16_t key; mpz_t value;}; 
typedef struct ltepegproof_funtype_17_hashentry_s ltepegproof_funtype_17_hashentry_t;

struct ltepegproof_funtype_17_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_17_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_17_htbl_s * ltepegproof_funtype_17_htbl_t;

struct ltepegproof_funtype_17_s {uint32_t count;
        ltepegproof_funtype_17_ftbl_t ftbl;
        ltepegproof_funtype_17_htbl_t htbl;};
typedef struct ltepegproof_funtype_17_s * ltepegproof_funtype_17_t;

extern void release_ltepegproof_funtype_17(ltepegproof_funtype_17_t x);

extern ltepegproof_funtype_17_t copy_ltepegproof_funtype_17(ltepegproof_funtype_17_t x);

extern bool_t equal_ltepegproof_funtype_17(ltepegproof_funtype_17_t x, ltepegproof_funtype_17_t y);

extern char* json_ltepegproof_funtype_17(ltepegproof_funtype_17_t x);




struct ltepegproof_closure_18_s;
        typedef struct ltepegproof_closure_18_s * ltepegproof_closure_18_t;

struct ltepegproof_closure_18_s {uint32_t count;
         ltepegproof_funtype_5_ftbl_t ftbl;
         ltepegproof_funtype_5_htbl_t htbl;
        ltepegproof_funtype_15_t fvar_1;
        ltepegproof_funtype_17_t fvar_2;
        ltepegproof_funtype_13_t fvar_3;};

mpz_ptr_t f_ltepegproof_closure_18(struct ltepegproof_closure_18_s * closure, ltepegproof__parsetree_adt_t bvar);

mpz_ptr_t m_ltepegproof_closure_18(struct ltepegproof_closure_18_s * closure, ltepegproof__parsetree_adt_t bvar);

extern mpz_ptr_t h_ltepegproof_closure_18(ltepegproof__parsetree_adt_t ivar_8, ltepegproof_funtype_15_t ivar_3, ltepegproof_funtype_17_t ivar_5, ltepegproof_funtype_13_t ivar_1);

extern ltepegproof_closure_18_t new_ltepegproof_closure_18(void);

extern void release_ltepegproof_closure_18(ltepegproof_funtype_5_t closure);

extern ltepegproof_closure_18_t copy_ltepegproof_closure_18(ltepegproof_closure_18_t x);


//reduce_ordinal

struct ltepegproof_funtype_19_s;
        typedef struct ltepegproof_funtype_19_s * ltepegproof_funtype_19_t;

struct ltepegproof_funtype_19_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepegproof_funtype_19_s *, ltepegproof__parsetree_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepegproof_funtype_19_s *, ltepegproof__parsetree_adt_t);
        void (* rptr)(struct ltepegproof_funtype_19_s *);
        struct ltepegproof_funtype_19_s * (* cptr)(struct ltepegproof_funtype_19_s *);};
typedef struct ltepegproof_funtype_19_ftbl_s * ltepegproof_funtype_19_ftbl_t;

struct ltepegproof_funtype_19_hashentry_s {uint32_t keyhash; ltepegproof__parsetree_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepegproof_funtype_19_hashentry_s ltepegproof_funtype_19_hashentry_t;

struct ltepegproof_funtype_19_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_19_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_19_htbl_s * ltepegproof_funtype_19_htbl_t;

struct ltepegproof_funtype_19_s {uint32_t count;
        ltepegproof_funtype_19_ftbl_t ftbl;
        ltepegproof_funtype_19_htbl_t htbl;};
typedef struct ltepegproof_funtype_19_s * ltepegproof_funtype_19_t;

extern void release_ltepegproof_funtype_19(ltepegproof_funtype_19_t x);

extern ltepegproof_funtype_19_t copy_ltepegproof_funtype_19(ltepegproof_funtype_19_t x);

extern bool_t equal_ltepegproof_funtype_19(ltepegproof_funtype_19_t x, ltepegproof_funtype_19_t y);

extern char* json_ltepegproof_funtype_19(ltepegproof_funtype_19_t x);


//reduce_ordinal

struct ltepegproof_funtype_20_s;
        typedef struct ltepegproof_funtype_20_s * ltepegproof_funtype_20_t;

struct ltepegproof_funtype_20_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepegproof_funtype_20_s *, ltepeg__ent_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepegproof_funtype_20_s *, ltepeg__ent_adt_t);
        void (* rptr)(struct ltepegproof_funtype_20_s *);
        struct ltepegproof_funtype_20_s * (* cptr)(struct ltepegproof_funtype_20_s *);};
typedef struct ltepegproof_funtype_20_ftbl_s * ltepegproof_funtype_20_ftbl_t;

struct ltepegproof_funtype_20_hashentry_s {uint32_t keyhash; ltepeg__ent_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepegproof_funtype_20_hashentry_s ltepegproof_funtype_20_hashentry_t;

struct ltepegproof_funtype_20_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_20_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_20_htbl_s * ltepegproof_funtype_20_htbl_t;

struct ltepegproof_funtype_20_s {uint32_t count;
        ltepegproof_funtype_20_ftbl_t ftbl;
        ltepegproof_funtype_20_htbl_t htbl;};
typedef struct ltepegproof_funtype_20_s * ltepegproof_funtype_20_t;

extern void release_ltepegproof_funtype_20(ltepegproof_funtype_20_t x);

extern ltepegproof_funtype_20_t copy_ltepegproof_funtype_20(ltepegproof_funtype_20_t x);

extern bool_t equal_ltepegproof_funtype_20(ltepegproof_funtype_20_t x, ltepegproof_funtype_20_t y);

extern char* json_ltepegproof_funtype_20(ltepegproof_funtype_20_t x);


//reduce_ordinal

struct ltepegproof_record_21_s {
        uint32_t count; 
        ltepeg__ent_adt_t project_1;
        ordstruct_adt__ordstruct_adt_t project_2;};
typedef struct ltepegproof_record_21_s * ltepegproof_record_21_t;

extern ltepegproof_record_21_t new_ltepegproof_record_21(void);

extern void release_ltepegproof_record_21(ltepegproof_record_21_t x);

extern ltepegproof_record_21_t copy_ltepegproof_record_21(ltepegproof_record_21_t x);

extern bool_t equal_ltepegproof_record_21(ltepegproof_record_21_t x, ltepegproof_record_21_t y);
extern char * json_ltepegproof_record_21(ltepegproof_record_21_t x);

typedef struct actual_ltepegproof_record_21_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_21_t;
void release_ltepegproof_record_21_ptr(pointer_t x, type_actual_t ltepegproof_record_21);

extern bool_t equal_ltepegproof_record_21_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_21_t T);

extern char * json_ltepegproof_record_21_ptr(pointer_t x,  actual_ltepegproof_record_21_t T);

actual_ltepegproof_record_21_t actual_ltepegproof_record_21(void);

extern ltepegproof_record_21_t update_ltepegproof_record_21_project_1(ltepegproof_record_21_t x, ltepeg__ent_adt_t v);

extern ltepegproof_record_21_t update_ltepegproof_record_21_project_2(ltepegproof_record_21_t x, ordstruct_adt__ordstruct_adt_t v);


//reduce_ordinal

struct ltepegproof_funtype_22_s;
        typedef struct ltepegproof_funtype_22_s * ltepegproof_funtype_22_t;

struct ltepegproof_funtype_22_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepegproof_funtype_22_s *, ltepegproof_record_21_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepegproof_funtype_22_s *, ltepeg__ent_adt_t, ordstruct_adt__ordstruct_adt_t);
        void (* rptr)(struct ltepegproof_funtype_22_s *);
        struct ltepegproof_funtype_22_s * (* cptr)(struct ltepegproof_funtype_22_s *);};
typedef struct ltepegproof_funtype_22_ftbl_s * ltepegproof_funtype_22_ftbl_t;

struct ltepegproof_funtype_22_hashentry_s {uint32_t keyhash; ltepegproof_record_21_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepegproof_funtype_22_hashentry_s ltepegproof_funtype_22_hashentry_t;

struct ltepegproof_funtype_22_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_22_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_22_htbl_s * ltepegproof_funtype_22_htbl_t;

struct ltepegproof_funtype_22_s {uint32_t count;
        ltepegproof_funtype_22_ftbl_t ftbl;
        ltepegproof_funtype_22_htbl_t htbl;};
typedef struct ltepegproof_funtype_22_s * ltepegproof_funtype_22_t;

extern void release_ltepegproof_funtype_22(ltepegproof_funtype_22_t x);

extern ltepegproof_funtype_22_t copy_ltepegproof_funtype_22(ltepegproof_funtype_22_t x);

extern bool_t equal_ltepegproof_funtype_22(ltepegproof_funtype_22_t x, ltepegproof_funtype_22_t y);

extern char* json_ltepegproof_funtype_22(ltepegproof_funtype_22_t x);


//reduce_ordinal

struct ltepegproof_record_23_s {
        uint32_t count; 
        ltepeg__ent_adt_t project_1;
        ordstruct_adt__ordstruct_adt_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;};
typedef struct ltepegproof_record_23_s * ltepegproof_record_23_t;

extern ltepegproof_record_23_t new_ltepegproof_record_23(void);

extern void release_ltepegproof_record_23(ltepegproof_record_23_t x);

extern ltepegproof_record_23_t copy_ltepegproof_record_23(ltepegproof_record_23_t x);

extern bool_t equal_ltepegproof_record_23(ltepegproof_record_23_t x, ltepegproof_record_23_t y);
extern char * json_ltepegproof_record_23(ltepegproof_record_23_t x);

typedef struct actual_ltepegproof_record_23_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_23_t;
void release_ltepegproof_record_23_ptr(pointer_t x, type_actual_t ltepegproof_record_23);

extern bool_t equal_ltepegproof_record_23_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_23_t T);

extern char * json_ltepegproof_record_23_ptr(pointer_t x,  actual_ltepegproof_record_23_t T);

actual_ltepegproof_record_23_t actual_ltepegproof_record_23(void);

extern ltepegproof_record_23_t update_ltepegproof_record_23_project_1(ltepegproof_record_23_t x, ltepeg__ent_adt_t v);

extern ltepegproof_record_23_t update_ltepegproof_record_23_project_2(ltepegproof_record_23_t x, ordstruct_adt__ordstruct_adt_t v);

extern ltepegproof_record_23_t update_ltepegproof_record_23_project_3(ltepegproof_record_23_t x, ordstruct_adt__ordstruct_adt_t v);


//reduce_ordinal

struct ltepegproof_funtype_24_s;
        typedef struct ltepegproof_funtype_24_s * ltepegproof_funtype_24_t;

struct ltepegproof_funtype_24_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepegproof_funtype_24_s *, ltepegproof_record_23_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepegproof_funtype_24_s *, ltepeg__ent_adt_t, ordstruct_adt__ordstruct_adt_t, ordstruct_adt__ordstruct_adt_t);
        void (* rptr)(struct ltepegproof_funtype_24_s *);
        struct ltepegproof_funtype_24_s * (* cptr)(struct ltepegproof_funtype_24_s *);};
typedef struct ltepegproof_funtype_24_ftbl_s * ltepegproof_funtype_24_ftbl_t;

struct ltepegproof_funtype_24_hashentry_s {uint32_t keyhash; ltepegproof_record_23_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepegproof_funtype_24_hashentry_s ltepegproof_funtype_24_hashentry_t;

struct ltepegproof_funtype_24_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_24_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_24_htbl_s * ltepegproof_funtype_24_htbl_t;

struct ltepegproof_funtype_24_s {uint32_t count;
        ltepegproof_funtype_24_ftbl_t ftbl;
        ltepegproof_funtype_24_htbl_t htbl;};
typedef struct ltepegproof_funtype_24_s * ltepegproof_funtype_24_t;

extern void release_ltepegproof_funtype_24(ltepegproof_funtype_24_t x);

extern ltepegproof_funtype_24_t copy_ltepegproof_funtype_24(ltepegproof_funtype_24_t x);

extern bool_t equal_ltepegproof_funtype_24(ltepegproof_funtype_24_t x, ltepegproof_funtype_24_t y);

extern char* json_ltepegproof_funtype_24(ltepegproof_funtype_24_t x);




struct ltepegproof_closure_25_s;
        typedef struct ltepegproof_closure_25_s * ltepegproof_closure_25_t;

struct ltepegproof_closure_25_s {uint32_t count;
         ltepegproof_funtype_19_ftbl_t ftbl;
         ltepegproof_funtype_19_htbl_t htbl;
        ltepegproof_funtype_22_t fvar_1;
        ltepegproof_funtype_24_t fvar_2;
        ltepegproof_funtype_20_t fvar_3;};

ordstruct_adt__ordstruct_adt_t f_ltepegproof_closure_25(struct ltepegproof_closure_25_s * closure, ltepegproof__parsetree_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltepegproof_closure_25(struct ltepegproof_closure_25_s * closure, ltepegproof__parsetree_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltepegproof_closure_25(ltepegproof__parsetree_adt_t ivar_8, ltepegproof_funtype_22_t ivar_3, ltepegproof_funtype_24_t ivar_5, ltepegproof_funtype_20_t ivar_1);

extern ltepegproof_closure_25_t new_ltepegproof_closure_25(void);

extern void release_ltepegproof_closure_25(ltepegproof_funtype_19_t closure);

extern ltepegproof_closure_25_t copy_ltepegproof_closure_25(ltepegproof_closure_25_t x);


//REDUCE_ordinal

struct ltepegproof_funtype_26_s;
        typedef struct ltepegproof_funtype_26_s * ltepegproof_funtype_26_t;

struct ltepegproof_funtype_26_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepegproof_funtype_26_s *, ltepegproof_record_12_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepegproof_funtype_26_s *, ltepeg__ent_adt_t, ltepegproof__parsetree_adt_t);
        void (* rptr)(struct ltepegproof_funtype_26_s *);
        struct ltepegproof_funtype_26_s * (* cptr)(struct ltepegproof_funtype_26_s *);};
typedef struct ltepegproof_funtype_26_ftbl_s * ltepegproof_funtype_26_ftbl_t;

struct ltepegproof_funtype_26_hashentry_s {uint32_t keyhash; ltepegproof_record_12_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepegproof_funtype_26_hashentry_s ltepegproof_funtype_26_hashentry_t;

struct ltepegproof_funtype_26_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_26_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_26_htbl_s * ltepegproof_funtype_26_htbl_t;

struct ltepegproof_funtype_26_s {uint32_t count;
        ltepegproof_funtype_26_ftbl_t ftbl;
        ltepegproof_funtype_26_htbl_t htbl;};
typedef struct ltepegproof_funtype_26_s * ltepegproof_funtype_26_t;

extern void release_ltepegproof_funtype_26(ltepegproof_funtype_26_t x);

extern ltepegproof_funtype_26_t copy_ltepegproof_funtype_26(ltepegproof_funtype_26_t x);

extern bool_t equal_ltepegproof_funtype_26(ltepegproof_funtype_26_t x, ltepegproof_funtype_26_t y);

extern char* json_ltepegproof_funtype_26(ltepegproof_funtype_26_t x);


//REDUCE_ordinal

struct ltepegproof_record_27_s {
        uint32_t count; 
        ltepeg__ent_adt_t project_1;
        ordstruct_adt__ordstruct_adt_t project_2;
        ltepegproof__parsetree_adt_t project_3;};
typedef struct ltepegproof_record_27_s * ltepegproof_record_27_t;

extern ltepegproof_record_27_t new_ltepegproof_record_27(void);

extern void release_ltepegproof_record_27(ltepegproof_record_27_t x);

extern ltepegproof_record_27_t copy_ltepegproof_record_27(ltepegproof_record_27_t x);

extern bool_t equal_ltepegproof_record_27(ltepegproof_record_27_t x, ltepegproof_record_27_t y);
extern char * json_ltepegproof_record_27(ltepegproof_record_27_t x);

typedef struct actual_ltepegproof_record_27_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_27_t;
void release_ltepegproof_record_27_ptr(pointer_t x, type_actual_t ltepegproof_record_27);

extern bool_t equal_ltepegproof_record_27_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_27_t T);

extern char * json_ltepegproof_record_27_ptr(pointer_t x,  actual_ltepegproof_record_27_t T);

actual_ltepegproof_record_27_t actual_ltepegproof_record_27(void);

extern ltepegproof_record_27_t update_ltepegproof_record_27_project_1(ltepegproof_record_27_t x, ltepeg__ent_adt_t v);

extern ltepegproof_record_27_t update_ltepegproof_record_27_project_2(ltepegproof_record_27_t x, ordstruct_adt__ordstruct_adt_t v);

extern ltepegproof_record_27_t update_ltepegproof_record_27_project_3(ltepegproof_record_27_t x, ltepegproof__parsetree_adt_t v);


//REDUCE_ordinal

struct ltepegproof_funtype_28_s;
        typedef struct ltepegproof_funtype_28_s * ltepegproof_funtype_28_t;

struct ltepegproof_funtype_28_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepegproof_funtype_28_s *, ltepegproof_record_27_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepegproof_funtype_28_s *, ltepeg__ent_adt_t, ordstruct_adt__ordstruct_adt_t, ltepegproof__parsetree_adt_t);
        void (* rptr)(struct ltepegproof_funtype_28_s *);
        struct ltepegproof_funtype_28_s * (* cptr)(struct ltepegproof_funtype_28_s *);};
typedef struct ltepegproof_funtype_28_ftbl_s * ltepegproof_funtype_28_ftbl_t;

struct ltepegproof_funtype_28_hashentry_s {uint32_t keyhash; ltepegproof_record_27_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepegproof_funtype_28_hashentry_s ltepegproof_funtype_28_hashentry_t;

struct ltepegproof_funtype_28_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_28_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_28_htbl_s * ltepegproof_funtype_28_htbl_t;

struct ltepegproof_funtype_28_s {uint32_t count;
        ltepegproof_funtype_28_ftbl_t ftbl;
        ltepegproof_funtype_28_htbl_t htbl;};
typedef struct ltepegproof_funtype_28_s * ltepegproof_funtype_28_t;

extern void release_ltepegproof_funtype_28(ltepegproof_funtype_28_t x);

extern ltepegproof_funtype_28_t copy_ltepegproof_funtype_28(ltepegproof_funtype_28_t x);

extern bool_t equal_ltepegproof_funtype_28(ltepegproof_funtype_28_t x, ltepegproof_funtype_28_t y);

extern char* json_ltepegproof_funtype_28(ltepegproof_funtype_28_t x);


//REDUCE_ordinal

struct ltepegproof_record_29_s {
        uint32_t count; 
        ltepeg__ent_adt_t project_1;
        ordstruct_adt__ordstruct_adt_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;
        ltepegproof__parsetree_adt_t project_4;};
typedef struct ltepegproof_record_29_s * ltepegproof_record_29_t;

extern ltepegproof_record_29_t new_ltepegproof_record_29(void);

extern void release_ltepegproof_record_29(ltepegproof_record_29_t x);

extern ltepegproof_record_29_t copy_ltepegproof_record_29(ltepegproof_record_29_t x);

extern bool_t equal_ltepegproof_record_29(ltepegproof_record_29_t x, ltepegproof_record_29_t y);
extern char * json_ltepegproof_record_29(ltepegproof_record_29_t x);

typedef struct actual_ltepegproof_record_29_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_29_t;
void release_ltepegproof_record_29_ptr(pointer_t x, type_actual_t ltepegproof_record_29);

extern bool_t equal_ltepegproof_record_29_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_29_t T);

extern char * json_ltepegproof_record_29_ptr(pointer_t x,  actual_ltepegproof_record_29_t T);

actual_ltepegproof_record_29_t actual_ltepegproof_record_29(void);

extern ltepegproof_record_29_t update_ltepegproof_record_29_project_1(ltepegproof_record_29_t x, ltepeg__ent_adt_t v);

extern ltepegproof_record_29_t update_ltepegproof_record_29_project_2(ltepegproof_record_29_t x, ordstruct_adt__ordstruct_adt_t v);

extern ltepegproof_record_29_t update_ltepegproof_record_29_project_3(ltepegproof_record_29_t x, ordstruct_adt__ordstruct_adt_t v);

extern ltepegproof_record_29_t update_ltepegproof_record_29_project_4(ltepegproof_record_29_t x, ltepegproof__parsetree_adt_t v);


//REDUCE_ordinal

struct ltepegproof_funtype_30_s;
        typedef struct ltepegproof_funtype_30_s * ltepegproof_funtype_30_t;

struct ltepegproof_funtype_30_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepegproof_funtype_30_s *, ltepegproof_record_29_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepegproof_funtype_30_s *, ltepeg__ent_adt_t, ordstruct_adt__ordstruct_adt_t, ordstruct_adt__ordstruct_adt_t, ltepegproof__parsetree_adt_t);
        void (* rptr)(struct ltepegproof_funtype_30_s *);
        struct ltepegproof_funtype_30_s * (* cptr)(struct ltepegproof_funtype_30_s *);};
typedef struct ltepegproof_funtype_30_ftbl_s * ltepegproof_funtype_30_ftbl_t;

struct ltepegproof_funtype_30_hashentry_s {uint32_t keyhash; ltepegproof_record_29_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepegproof_funtype_30_hashentry_s ltepegproof_funtype_30_hashentry_t;

struct ltepegproof_funtype_30_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_30_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_30_htbl_s * ltepegproof_funtype_30_htbl_t;

struct ltepegproof_funtype_30_s {uint32_t count;
        ltepegproof_funtype_30_ftbl_t ftbl;
        ltepegproof_funtype_30_htbl_t htbl;};
typedef struct ltepegproof_funtype_30_s * ltepegproof_funtype_30_t;

extern void release_ltepegproof_funtype_30(ltepegproof_funtype_30_t x);

extern ltepegproof_funtype_30_t copy_ltepegproof_funtype_30(ltepegproof_funtype_30_t x);

extern bool_t equal_ltepegproof_funtype_30(ltepegproof_funtype_30_t x, ltepegproof_funtype_30_t y);

extern char* json_ltepegproof_funtype_30(ltepegproof_funtype_30_t x);




struct ltepegproof_closure_31_s;
        typedef struct ltepegproof_closure_31_s * ltepegproof_closure_31_t;

struct ltepegproof_closure_31_s {uint32_t count;
         ltepegproof_funtype_19_ftbl_t ftbl;
         ltepegproof_funtype_19_htbl_t htbl;
        ltepegproof_funtype_28_t fvar_1;
        ltepegproof_funtype_30_t fvar_2;
        ltepegproof_funtype_26_t fvar_3;};

ordstruct_adt__ordstruct_adt_t f_ltepegproof_closure_31(struct ltepegproof_closure_31_s * closure, ltepegproof__parsetree_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltepegproof_closure_31(struct ltepegproof_closure_31_s * closure, ltepegproof__parsetree_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltepegproof_closure_31(ltepegproof__parsetree_adt_t ivar_8, ltepegproof_funtype_28_t ivar_3, ltepegproof_funtype_30_t ivar_5, ltepegproof_funtype_26_t ivar_1);

extern ltepegproof_closure_31_t new_ltepegproof_closure_31(void);

extern void release_ltepegproof_closure_31(ltepegproof_funtype_19_t closure);

extern ltepegproof_closure_31_t copy_ltepegproof_closure_31(ltepegproof_closure_31_t x);


//qstack

struct ltepegproof__qstack_adt_s {
         uint32_t count; 
        uint8_t ltepegproof__qstack_adt_index;};
typedef struct ltepegproof__qstack_adt_s * ltepegproof__qstack_adt_t;

extern ltepegproof__qstack_adt_t new_ltepegproof__qstack_adt(void);

extern void release_ltepegproof__qstack_adt(ltepegproof__qstack_adt_t x);

extern ltepegproof__qstack_adt_t copy_ltepegproof__qstack_adt(ltepegproof__qstack_adt_t x);

extern bool_t equal_ltepegproof__qstack_adt(ltepegproof__qstack_adt_t x, ltepegproof__qstack_adt_t y);
extern char * json_ltepegproof__qstack_adt(ltepegproof__qstack_adt_t x);

typedef struct actual_ltepegproof__qstack_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof__qstack_adt_t;
void release_ltepegproof__qstack_adt_ptr(pointer_t x, type_actual_t ltepegproof__qstack_adt);

extern bool_t equal_ltepegproof__qstack_adt_ptr(pointer_t x, pointer_t y, actual_ltepegproof__qstack_adt_t T);

extern char * json_ltepegproof__qstack_adt_ptr(pointer_t x,  actual_ltepegproof__qstack_adt_t T);

actual_ltepegproof__qstack_adt_t actual_ltepegproof__qstack_adt(void);

extern ltepegproof__qstack_adt_t update_ltepegproof__qstack_adt_ltepegproof__qstack_adt_index(ltepegproof__qstack_adt_t x, uint8_t v);


//qpush

struct ltepegproof__qpush_s {
        uint32_t count; 
        uint8_t ltepegproof__qstack_adt_index;
        uint8_t nonterm;
        uint32_t pos;
        ltepegproof__qstack_adt_t qpop;};
typedef struct ltepegproof__qpush_s * ltepegproof__qpush_t;

extern ltepegproof__qpush_t new_ltepegproof__qpush(void);

extern void release_ltepegproof__qpush(ltepegproof__qpush_t x);

extern ltepegproof__qpush_t copy_ltepegproof__qpush(ltepegproof__qpush_t x);

extern bool_t equal_ltepegproof__qpush(ltepegproof__qpush_t x, ltepegproof__qpush_t y);
extern char * json_ltepegproof__qpush(ltepegproof__qpush_t x);

typedef struct actual_ltepegproof__qpush_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof__qpush_t;
void release_ltepegproof__qpush_ptr(pointer_t x, type_actual_t ltepegproof__qpush);

extern bool_t equal_ltepegproof__qpush_ptr(pointer_t x, pointer_t y, actual_ltepegproof__qpush_t T);

extern char * json_ltepegproof__qpush_ptr(pointer_t x,  actual_ltepegproof__qpush_t T);

actual_ltepegproof__qpush_t actual_ltepegproof__qpush(void);

extern ltepegproof__qpush_t update_ltepegproof__qpush_ltepegproof__qstack_adt_index(ltepegproof__qpush_t x, uint8_t v);

extern ltepegproof__qpush_t update_ltepegproof__qpush_nonterm(ltepegproof__qpush_t x, uint8_t v);

extern ltepegproof__qpush_t update_ltepegproof__qpush_pos(ltepegproof__qpush_t x, uint32_t v);

extern ltepegproof__qpush_t update_ltepegproof__qpush_qpop(ltepegproof__qpush_t x, ltepegproof__qstack_adt_t v);


//qstack_ord

struct ltepegproof_funtype_34_s;
        typedef struct ltepegproof_funtype_34_s * ltepegproof_funtype_34_t;

struct ltepegproof_funtype_34_ftbl_s {uint8_t (* fptr)(struct ltepegproof_funtype_34_s *, ltepegproof__qstack_adt_t);
        uint8_t (* mptr)(struct ltepegproof_funtype_34_s *, ltepegproof__qstack_adt_t);
        void (* rptr)(struct ltepegproof_funtype_34_s *);
        struct ltepegproof_funtype_34_s * (* cptr)(struct ltepegproof_funtype_34_s *);};
typedef struct ltepegproof_funtype_34_ftbl_s * ltepegproof_funtype_34_ftbl_t;

struct ltepegproof_funtype_34_hashentry_s {uint32_t keyhash; ltepegproof__qstack_adt_t key; uint8_t value;}; 
typedef struct ltepegproof_funtype_34_hashentry_s ltepegproof_funtype_34_hashentry_t;

struct ltepegproof_funtype_34_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_34_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_34_htbl_s * ltepegproof_funtype_34_htbl_t;

struct ltepegproof_funtype_34_s {uint32_t count;
        ltepegproof_funtype_34_ftbl_t ftbl;
        ltepegproof_funtype_34_htbl_t htbl;};
typedef struct ltepegproof_funtype_34_s * ltepegproof_funtype_34_t;

extern void release_ltepegproof_funtype_34(ltepegproof_funtype_34_t x);

extern ltepegproof_funtype_34_t copy_ltepegproof_funtype_34(ltepegproof_funtype_34_t x);

extern bool_t equal_ltepegproof_funtype_34(ltepegproof_funtype_34_t x, ltepegproof_funtype_34_t y);

extern char* json_ltepegproof_funtype_34(ltepegproof_funtype_34_t x);


//reduce_nat

struct ltepegproof_funtype_35_s;
        typedef struct ltepegproof_funtype_35_s * ltepegproof_funtype_35_t;

struct ltepegproof_funtype_35_ftbl_s {mpz_ptr_t (* fptr)(struct ltepegproof_funtype_35_s *, ltepegproof__qstack_adt_t);
        mpz_ptr_t (* mptr)(struct ltepegproof_funtype_35_s *, ltepegproof__qstack_adt_t);
        void (* rptr)(struct ltepegproof_funtype_35_s *);
        struct ltepegproof_funtype_35_s * (* cptr)(struct ltepegproof_funtype_35_s *);};
typedef struct ltepegproof_funtype_35_ftbl_s * ltepegproof_funtype_35_ftbl_t;

struct ltepegproof_funtype_35_hashentry_s {uint32_t keyhash; ltepegproof__qstack_adt_t key; mpz_t value;}; 
typedef struct ltepegproof_funtype_35_hashentry_s ltepegproof_funtype_35_hashentry_t;

struct ltepegproof_funtype_35_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_35_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_35_htbl_s * ltepegproof_funtype_35_htbl_t;

struct ltepegproof_funtype_35_s {uint32_t count;
        ltepegproof_funtype_35_ftbl_t ftbl;
        ltepegproof_funtype_35_htbl_t htbl;};
typedef struct ltepegproof_funtype_35_s * ltepegproof_funtype_35_t;

extern void release_ltepegproof_funtype_35(ltepegproof_funtype_35_t x);

extern ltepegproof_funtype_35_t copy_ltepegproof_funtype_35(ltepegproof_funtype_35_t x);

extern bool_t equal_ltepegproof_funtype_35(ltepegproof_funtype_35_t x, ltepegproof_funtype_35_t y);

extern char* json_ltepegproof_funtype_35(ltepegproof_funtype_35_t x);


//reduce_nat

struct ltepegproof_record_36_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        mpz_t project_3;};
typedef struct ltepegproof_record_36_s * ltepegproof_record_36_t;

extern ltepegproof_record_36_t new_ltepegproof_record_36(void);

extern void release_ltepegproof_record_36(ltepegproof_record_36_t x);

extern ltepegproof_record_36_t copy_ltepegproof_record_36(ltepegproof_record_36_t x);

extern bool_t equal_ltepegproof_record_36(ltepegproof_record_36_t x, ltepegproof_record_36_t y);
extern char * json_ltepegproof_record_36(ltepegproof_record_36_t x);

typedef struct actual_ltepegproof_record_36_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_36_t;
void release_ltepegproof_record_36_ptr(pointer_t x, type_actual_t ltepegproof_record_36);

extern bool_t equal_ltepegproof_record_36_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_36_t T);

extern char * json_ltepegproof_record_36_ptr(pointer_t x,  actual_ltepegproof_record_36_t T);

actual_ltepegproof_record_36_t actual_ltepegproof_record_36(void);

extern ltepegproof_record_36_t update_ltepegproof_record_36_project_1(ltepegproof_record_36_t x, uint8_t v);

extern ltepegproof_record_36_t update_ltepegproof_record_36_project_2(ltepegproof_record_36_t x, uint32_t v);

extern ltepegproof_record_36_t update_ltepegproof_record_36_project_3(ltepegproof_record_36_t x, mpz_ptr_t v);


//reduce_nat

struct ltepegproof_funtype_37_s;
        typedef struct ltepegproof_funtype_37_s * ltepegproof_funtype_37_t;

struct ltepegproof_funtype_37_ftbl_s {mpz_ptr_t (* fptr)(struct ltepegproof_funtype_37_s *, ltepegproof_record_36_t);
        mpz_ptr_t (* mptr)(struct ltepegproof_funtype_37_s *, uint8_t, uint32_t, mpz_ptr_t);
        void (* rptr)(struct ltepegproof_funtype_37_s *);
        struct ltepegproof_funtype_37_s * (* cptr)(struct ltepegproof_funtype_37_s *);};
typedef struct ltepegproof_funtype_37_ftbl_s * ltepegproof_funtype_37_ftbl_t;

struct ltepegproof_funtype_37_hashentry_s {uint32_t keyhash; ltepegproof_record_36_t key; mpz_t value;}; 
typedef struct ltepegproof_funtype_37_hashentry_s ltepegproof_funtype_37_hashentry_t;

struct ltepegproof_funtype_37_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_37_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_37_htbl_s * ltepegproof_funtype_37_htbl_t;

struct ltepegproof_funtype_37_s {uint32_t count;
        ltepegproof_funtype_37_ftbl_t ftbl;
        ltepegproof_funtype_37_htbl_t htbl;};
typedef struct ltepegproof_funtype_37_s * ltepegproof_funtype_37_t;

extern void release_ltepegproof_funtype_37(ltepegproof_funtype_37_t x);

extern ltepegproof_funtype_37_t copy_ltepegproof_funtype_37(ltepegproof_funtype_37_t x);

extern bool_t equal_ltepegproof_funtype_37(ltepegproof_funtype_37_t x, ltepegproof_funtype_37_t y);

extern char* json_ltepegproof_funtype_37(ltepegproof_funtype_37_t x);




struct ltepegproof_closure_38_s;
        typedef struct ltepegproof_closure_38_s * ltepegproof_closure_38_t;

struct ltepegproof_closure_38_s {uint32_t count;
         ltepegproof_funtype_35_ftbl_t ftbl;
         ltepegproof_funtype_35_htbl_t htbl;
        ltepegproof_funtype_37_t fvar_1;
        mpz_t fvar_2;};

mpz_ptr_t f_ltepegproof_closure_38(struct ltepegproof_closure_38_s * closure, ltepegproof__qstack_adt_t bvar);

mpz_ptr_t m_ltepegproof_closure_38(struct ltepegproof_closure_38_s * closure, ltepegproof__qstack_adt_t bvar);

extern mpz_ptr_t h_ltepegproof_closure_38(ltepegproof__qstack_adt_t ivar_5, ltepegproof_funtype_37_t ivar_2, mpz_ptr_t ivar_1);

extern ltepegproof_closure_38_t new_ltepegproof_closure_38(void);

extern void release_ltepegproof_closure_38(ltepegproof_funtype_35_t closure);

extern ltepegproof_closure_38_t copy_ltepegproof_closure_38(ltepegproof_closure_38_t x);


//REDUCE_nat

struct ltepegproof_record_39_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        mpz_t project_3;
        ltepegproof__qstack_adt_t project_4;};
typedef struct ltepegproof_record_39_s * ltepegproof_record_39_t;

extern ltepegproof_record_39_t new_ltepegproof_record_39(void);

extern void release_ltepegproof_record_39(ltepegproof_record_39_t x);

extern ltepegproof_record_39_t copy_ltepegproof_record_39(ltepegproof_record_39_t x);

extern bool_t equal_ltepegproof_record_39(ltepegproof_record_39_t x, ltepegproof_record_39_t y);
extern char * json_ltepegproof_record_39(ltepegproof_record_39_t x);

typedef struct actual_ltepegproof_record_39_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_39_t;
void release_ltepegproof_record_39_ptr(pointer_t x, type_actual_t ltepegproof_record_39);

extern bool_t equal_ltepegproof_record_39_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_39_t T);

extern char * json_ltepegproof_record_39_ptr(pointer_t x,  actual_ltepegproof_record_39_t T);

actual_ltepegproof_record_39_t actual_ltepegproof_record_39(void);

extern ltepegproof_record_39_t update_ltepegproof_record_39_project_1(ltepegproof_record_39_t x, uint8_t v);

extern ltepegproof_record_39_t update_ltepegproof_record_39_project_2(ltepegproof_record_39_t x, uint32_t v);

extern ltepegproof_record_39_t update_ltepegproof_record_39_project_3(ltepegproof_record_39_t x, mpz_ptr_t v);

extern ltepegproof_record_39_t update_ltepegproof_record_39_project_4(ltepegproof_record_39_t x, ltepegproof__qstack_adt_t v);


//REDUCE_nat

struct ltepegproof_funtype_40_s;
        typedef struct ltepegproof_funtype_40_s * ltepegproof_funtype_40_t;

struct ltepegproof_funtype_40_ftbl_s {mpz_ptr_t (* fptr)(struct ltepegproof_funtype_40_s *, ltepegproof_record_39_t);
        mpz_ptr_t (* mptr)(struct ltepegproof_funtype_40_s *, uint8_t, uint32_t, mpz_ptr_t, ltepegproof__qstack_adt_t);
        void (* rptr)(struct ltepegproof_funtype_40_s *);
        struct ltepegproof_funtype_40_s * (* cptr)(struct ltepegproof_funtype_40_s *);};
typedef struct ltepegproof_funtype_40_ftbl_s * ltepegproof_funtype_40_ftbl_t;

struct ltepegproof_funtype_40_hashentry_s {uint32_t keyhash; ltepegproof_record_39_t key; mpz_t value;}; 
typedef struct ltepegproof_funtype_40_hashentry_s ltepegproof_funtype_40_hashentry_t;

struct ltepegproof_funtype_40_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_40_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_40_htbl_s * ltepegproof_funtype_40_htbl_t;

struct ltepegproof_funtype_40_s {uint32_t count;
        ltepegproof_funtype_40_ftbl_t ftbl;
        ltepegproof_funtype_40_htbl_t htbl;};
typedef struct ltepegproof_funtype_40_s * ltepegproof_funtype_40_t;

extern void release_ltepegproof_funtype_40(ltepegproof_funtype_40_t x);

extern ltepegproof_funtype_40_t copy_ltepegproof_funtype_40(ltepegproof_funtype_40_t x);

extern bool_t equal_ltepegproof_funtype_40(ltepegproof_funtype_40_t x, ltepegproof_funtype_40_t y);

extern char* json_ltepegproof_funtype_40(ltepegproof_funtype_40_t x);




struct ltepegproof_closure_41_s;
        typedef struct ltepegproof_closure_41_s * ltepegproof_closure_41_t;

struct ltepegproof_closure_41_s {uint32_t count;
         ltepegproof_funtype_35_ftbl_t ftbl;
         ltepegproof_funtype_35_htbl_t htbl;
        ltepegproof_funtype_40_t fvar_1;
        ltepegproof_funtype_35_t fvar_2;};

mpz_ptr_t f_ltepegproof_closure_41(struct ltepegproof_closure_41_s * closure, ltepegproof__qstack_adt_t bvar);

mpz_ptr_t m_ltepegproof_closure_41(struct ltepegproof_closure_41_s * closure, ltepegproof__qstack_adt_t bvar);

extern mpz_ptr_t h_ltepegproof_closure_41(ltepegproof__qstack_adt_t ivar_6, ltepegproof_funtype_40_t ivar_3, ltepegproof_funtype_35_t ivar_1);

extern ltepegproof_closure_41_t new_ltepegproof_closure_41(void);

extern void release_ltepegproof_closure_41(ltepegproof_funtype_35_t closure);

extern ltepegproof_closure_41_t copy_ltepegproof_closure_41(ltepegproof_closure_41_t x);


//reduce_ordinal

struct ltepegproof_funtype_42_s;
        typedef struct ltepegproof_funtype_42_s * ltepegproof_funtype_42_t;

struct ltepegproof_funtype_42_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepegproof_funtype_42_s *, ltepegproof__qstack_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepegproof_funtype_42_s *, ltepegproof__qstack_adt_t);
        void (* rptr)(struct ltepegproof_funtype_42_s *);
        struct ltepegproof_funtype_42_s * (* cptr)(struct ltepegproof_funtype_42_s *);};
typedef struct ltepegproof_funtype_42_ftbl_s * ltepegproof_funtype_42_ftbl_t;

struct ltepegproof_funtype_42_hashentry_s {uint32_t keyhash; ltepegproof__qstack_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepegproof_funtype_42_hashentry_s ltepegproof_funtype_42_hashentry_t;

struct ltepegproof_funtype_42_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_42_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_42_htbl_s * ltepegproof_funtype_42_htbl_t;

struct ltepegproof_funtype_42_s {uint32_t count;
        ltepegproof_funtype_42_ftbl_t ftbl;
        ltepegproof_funtype_42_htbl_t htbl;};
typedef struct ltepegproof_funtype_42_s * ltepegproof_funtype_42_t;

extern void release_ltepegproof_funtype_42(ltepegproof_funtype_42_t x);

extern ltepegproof_funtype_42_t copy_ltepegproof_funtype_42(ltepegproof_funtype_42_t x);

extern bool_t equal_ltepegproof_funtype_42(ltepegproof_funtype_42_t x, ltepegproof_funtype_42_t y);

extern char* json_ltepegproof_funtype_42(ltepegproof_funtype_42_t x);


//reduce_ordinal

struct ltepegproof_record_43_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;};
typedef struct ltepegproof_record_43_s * ltepegproof_record_43_t;

extern ltepegproof_record_43_t new_ltepegproof_record_43(void);

extern void release_ltepegproof_record_43(ltepegproof_record_43_t x);

extern ltepegproof_record_43_t copy_ltepegproof_record_43(ltepegproof_record_43_t x);

extern bool_t equal_ltepegproof_record_43(ltepegproof_record_43_t x, ltepegproof_record_43_t y);
extern char * json_ltepegproof_record_43(ltepegproof_record_43_t x);

typedef struct actual_ltepegproof_record_43_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_43_t;
void release_ltepegproof_record_43_ptr(pointer_t x, type_actual_t ltepegproof_record_43);

extern bool_t equal_ltepegproof_record_43_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_43_t T);

extern char * json_ltepegproof_record_43_ptr(pointer_t x,  actual_ltepegproof_record_43_t T);

actual_ltepegproof_record_43_t actual_ltepegproof_record_43(void);

extern ltepegproof_record_43_t update_ltepegproof_record_43_project_1(ltepegproof_record_43_t x, uint8_t v);

extern ltepegproof_record_43_t update_ltepegproof_record_43_project_2(ltepegproof_record_43_t x, uint32_t v);

extern ltepegproof_record_43_t update_ltepegproof_record_43_project_3(ltepegproof_record_43_t x, ordstruct_adt__ordstruct_adt_t v);


//reduce_ordinal

struct ltepegproof_funtype_44_s;
        typedef struct ltepegproof_funtype_44_s * ltepegproof_funtype_44_t;

struct ltepegproof_funtype_44_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepegproof_funtype_44_s *, ltepegproof_record_43_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepegproof_funtype_44_s *, uint8_t, uint32_t, ordstruct_adt__ordstruct_adt_t);
        void (* rptr)(struct ltepegproof_funtype_44_s *);
        struct ltepegproof_funtype_44_s * (* cptr)(struct ltepegproof_funtype_44_s *);};
typedef struct ltepegproof_funtype_44_ftbl_s * ltepegproof_funtype_44_ftbl_t;

struct ltepegproof_funtype_44_hashentry_s {uint32_t keyhash; ltepegproof_record_43_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepegproof_funtype_44_hashentry_s ltepegproof_funtype_44_hashentry_t;

struct ltepegproof_funtype_44_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_44_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_44_htbl_s * ltepegproof_funtype_44_htbl_t;

struct ltepegproof_funtype_44_s {uint32_t count;
        ltepegproof_funtype_44_ftbl_t ftbl;
        ltepegproof_funtype_44_htbl_t htbl;};
typedef struct ltepegproof_funtype_44_s * ltepegproof_funtype_44_t;

extern void release_ltepegproof_funtype_44(ltepegproof_funtype_44_t x);

extern ltepegproof_funtype_44_t copy_ltepegproof_funtype_44(ltepegproof_funtype_44_t x);

extern bool_t equal_ltepegproof_funtype_44(ltepegproof_funtype_44_t x, ltepegproof_funtype_44_t y);

extern char* json_ltepegproof_funtype_44(ltepegproof_funtype_44_t x);




struct ltepegproof_closure_45_s;
        typedef struct ltepegproof_closure_45_s * ltepegproof_closure_45_t;

struct ltepegproof_closure_45_s {uint32_t count;
         ltepegproof_funtype_42_ftbl_t ftbl;
         ltepegproof_funtype_42_htbl_t htbl;
        ltepegproof_funtype_44_t fvar_1;
        ordstruct_adt__ordstruct_adt_t fvar_2;};

ordstruct_adt__ordstruct_adt_t f_ltepegproof_closure_45(struct ltepegproof_closure_45_s * closure, ltepegproof__qstack_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltepegproof_closure_45(struct ltepegproof_closure_45_s * closure, ltepegproof__qstack_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltepegproof_closure_45(ltepegproof__qstack_adt_t ivar_5, ltepegproof_funtype_44_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1);

extern ltepegproof_closure_45_t new_ltepegproof_closure_45(void);

extern void release_ltepegproof_closure_45(ltepegproof_funtype_42_t closure);

extern ltepegproof_closure_45_t copy_ltepegproof_closure_45(ltepegproof_closure_45_t x);


//REDUCE_ordinal

struct ltepegproof_record_46_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;
        ltepegproof__qstack_adt_t project_4;};
typedef struct ltepegproof_record_46_s * ltepegproof_record_46_t;

extern ltepegproof_record_46_t new_ltepegproof_record_46(void);

extern void release_ltepegproof_record_46(ltepegproof_record_46_t x);

extern ltepegproof_record_46_t copy_ltepegproof_record_46(ltepegproof_record_46_t x);

extern bool_t equal_ltepegproof_record_46(ltepegproof_record_46_t x, ltepegproof_record_46_t y);
extern char * json_ltepegproof_record_46(ltepegproof_record_46_t x);

typedef struct actual_ltepegproof_record_46_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_46_t;
void release_ltepegproof_record_46_ptr(pointer_t x, type_actual_t ltepegproof_record_46);

extern bool_t equal_ltepegproof_record_46_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_46_t T);

extern char * json_ltepegproof_record_46_ptr(pointer_t x,  actual_ltepegproof_record_46_t T);

actual_ltepegproof_record_46_t actual_ltepegproof_record_46(void);

extern ltepegproof_record_46_t update_ltepegproof_record_46_project_1(ltepegproof_record_46_t x, uint8_t v);

extern ltepegproof_record_46_t update_ltepegproof_record_46_project_2(ltepegproof_record_46_t x, uint32_t v);

extern ltepegproof_record_46_t update_ltepegproof_record_46_project_3(ltepegproof_record_46_t x, ordstruct_adt__ordstruct_adt_t v);

extern ltepegproof_record_46_t update_ltepegproof_record_46_project_4(ltepegproof_record_46_t x, ltepegproof__qstack_adt_t v);


//REDUCE_ordinal

struct ltepegproof_funtype_47_s;
        typedef struct ltepegproof_funtype_47_s * ltepegproof_funtype_47_t;

struct ltepegproof_funtype_47_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltepegproof_funtype_47_s *, ltepegproof_record_46_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltepegproof_funtype_47_s *, uint8_t, uint32_t, ordstruct_adt__ordstruct_adt_t, ltepegproof__qstack_adt_t);
        void (* rptr)(struct ltepegproof_funtype_47_s *);
        struct ltepegproof_funtype_47_s * (* cptr)(struct ltepegproof_funtype_47_s *);};
typedef struct ltepegproof_funtype_47_ftbl_s * ltepegproof_funtype_47_ftbl_t;

struct ltepegproof_funtype_47_hashentry_s {uint32_t keyhash; ltepegproof_record_46_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltepegproof_funtype_47_hashentry_s ltepegproof_funtype_47_hashentry_t;

struct ltepegproof_funtype_47_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_47_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_47_htbl_s * ltepegproof_funtype_47_htbl_t;

struct ltepegproof_funtype_47_s {uint32_t count;
        ltepegproof_funtype_47_ftbl_t ftbl;
        ltepegproof_funtype_47_htbl_t htbl;};
typedef struct ltepegproof_funtype_47_s * ltepegproof_funtype_47_t;

extern void release_ltepegproof_funtype_47(ltepegproof_funtype_47_t x);

extern ltepegproof_funtype_47_t copy_ltepegproof_funtype_47(ltepegproof_funtype_47_t x);

extern bool_t equal_ltepegproof_funtype_47(ltepegproof_funtype_47_t x, ltepegproof_funtype_47_t y);

extern char* json_ltepegproof_funtype_47(ltepegproof_funtype_47_t x);




struct ltepegproof_closure_48_s;
        typedef struct ltepegproof_closure_48_s * ltepegproof_closure_48_t;

struct ltepegproof_closure_48_s {uint32_t count;
         ltepegproof_funtype_42_ftbl_t ftbl;
         ltepegproof_funtype_42_htbl_t htbl;
        ltepegproof_funtype_47_t fvar_1;
        ltepegproof_funtype_42_t fvar_2;};

ordstruct_adt__ordstruct_adt_t f_ltepegproof_closure_48(struct ltepegproof_closure_48_s * closure, ltepegproof__qstack_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltepegproof_closure_48(struct ltepegproof_closure_48_s * closure, ltepegproof__qstack_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltepegproof_closure_48(ltepegproof__qstack_adt_t ivar_6, ltepegproof_funtype_47_t ivar_3, ltepegproof_funtype_42_t ivar_1);

extern ltepegproof_closure_48_t new_ltepegproof_closure_48(void);

extern void release_ltepegproof_closure_48(ltepegproof_funtype_42_t closure);

extern ltepegproof_closure_48_t copy_ltepegproof_closure_48(ltepegproof_closure_48_t x);


//good_qstack?

struct ltepegproof_funtype_49_s;
        typedef struct ltepegproof_funtype_49_s * ltepegproof_funtype_49_t;

struct ltepegproof_funtype_49_ftbl_s {bool_t (* fptr)(struct ltepegproof_funtype_49_s *, ltepegproof__qstack_adt_t);
        bool_t (* mptr)(struct ltepegproof_funtype_49_s *, ltepegproof__qstack_adt_t);
        void (* rptr)(struct ltepegproof_funtype_49_s *);
        struct ltepegproof_funtype_49_s * (* cptr)(struct ltepegproof_funtype_49_s *);};
typedef struct ltepegproof_funtype_49_ftbl_s * ltepegproof_funtype_49_ftbl_t;

struct ltepegproof_funtype_49_hashentry_s {uint32_t keyhash; ltepegproof__qstack_adt_t key; bool_t value;}; 
typedef struct ltepegproof_funtype_49_hashentry_s ltepegproof_funtype_49_hashentry_t;

struct ltepegproof_funtype_49_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_49_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_49_htbl_s * ltepegproof_funtype_49_htbl_t;

struct ltepegproof_funtype_49_s {uint32_t count;
        ltepegproof_funtype_49_ftbl_t ftbl;
        ltepegproof_funtype_49_htbl_t htbl;};
typedef struct ltepegproof_funtype_49_s * ltepegproof_funtype_49_t;

extern void release_ltepegproof_funtype_49(ltepegproof_funtype_49_t x);

extern ltepegproof_funtype_49_t copy_ltepegproof_funtype_49(ltepegproof_funtype_49_t x);

extern bool_t equal_ltepegproof_funtype_49(ltepegproof_funtype_49_t x, ltepegproof_funtype_49_t y);

extern char* json_ltepegproof_funtype_49(ltepegproof_funtype_49_t x);


//good_qstack?

struct ltepegproof_array_50_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct ltepegproof_array_50_s * ltepegproof_array_50_t;

extern ltepegproof_array_50_t new_ltepegproof_array_50(uint32_t size);

extern void release_ltepegproof_array_50(ltepegproof_array_50_t x);

extern ltepegproof_array_50_t copy_ltepegproof_array_50(ltepegproof_array_50_t x);

extern bool_t equal_ltepegproof_array_50(ltepegproof_array_50_t x, ltepegproof_array_50_t y);
extern char * json_ltepegproof_array_50(ltepegproof_array_50_t x);

typedef struct actual_ltepegproof_array_50_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_array_50_t;
void release_ltepegproof_array_50_ptr(pointer_t x, type_actual_t ltepegproof_array_50);

extern bool_t equal_ltepegproof_array_50_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltepegproof_array_50_ptr(pointer_t x, type_actual_t T);

actual_ltepegproof_array_50_t actual_ltepegproof_array_50(void);

extern ltepegproof_array_50_t update_ltepegproof_array_50(ltepegproof_array_50_t x, uint32_t i, uint8_t v);

extern ltepegproof_array_50_t upgrade_ltepegproof_array_50(ltepegproof_array_50_t x, uint32_t i, uint8_t v);


//good_qstack?

struct ltepegproof_array_51_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltepeg__ent_adt_t elems[]; };
typedef struct ltepegproof_array_51_s * ltepegproof_array_51_t;

extern ltepegproof_array_51_t new_ltepegproof_array_51(uint32_t size);

extern void release_ltepegproof_array_51(ltepegproof_array_51_t x);

extern ltepegproof_array_51_t copy_ltepegproof_array_51(ltepegproof_array_51_t x);

extern bool_t equal_ltepegproof_array_51(ltepegproof_array_51_t x, ltepegproof_array_51_t y);
extern char * json_ltepegproof_array_51(ltepegproof_array_51_t x);

typedef struct actual_ltepegproof_array_51_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_array_51_t;
void release_ltepegproof_array_51_ptr(pointer_t x, type_actual_t ltepegproof_array_51);

extern bool_t equal_ltepegproof_array_51_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltepegproof_array_51_ptr(pointer_t x, type_actual_t T);

actual_ltepegproof_array_51_t actual_ltepegproof_array_51(void);

extern ltepegproof_array_51_t update_ltepegproof_array_51(ltepegproof_array_51_t x, uint32_t i, ltepeg__ent_adt_t v);

extern ltepegproof_array_51_t upgrade_ltepegproof_array_51(ltepegproof_array_51_t x, uint32_t i, ltepeg__ent_adt_t v);


//good_qstack?

struct ltepegproof_array_52_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltepegproof_array_51_t elems[]; };
typedef struct ltepegproof_array_52_s * ltepegproof_array_52_t;

extern ltepegproof_array_52_t new_ltepegproof_array_52(uint32_t size);

extern void release_ltepegproof_array_52(ltepegproof_array_52_t x);

extern ltepegproof_array_52_t copy_ltepegproof_array_52(ltepegproof_array_52_t x);

extern bool_t equal_ltepegproof_array_52(ltepegproof_array_52_t x, ltepegproof_array_52_t y);
extern char * json_ltepegproof_array_52(ltepegproof_array_52_t x);

typedef struct actual_ltepegproof_array_52_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_array_52_t;
void release_ltepegproof_array_52_ptr(pointer_t x, type_actual_t ltepegproof_array_52);

extern bool_t equal_ltepegproof_array_52_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltepegproof_array_52_ptr(pointer_t x, type_actual_t T);

actual_ltepegproof_array_52_t actual_ltepegproof_array_52(void);

extern ltepegproof_array_52_t update_ltepegproof_array_52(ltepegproof_array_52_t x, uint32_t i, ltepegproof_array_51_t v);

extern ltepegproof_array_52_t upgrade_ltepegproof_array_52(ltepegproof_array_52_t x, uint32_t i, ltepegproof_array_51_t v);




struct ltepegproof_closure_53_s;
        typedef struct ltepegproof_closure_53_s * ltepegproof_closure_53_t;

struct ltepegproof_closure_53_s {uint32_t count;
         ltepegproof_funtype_49_ftbl_t ftbl;
         ltepegproof_funtype_49_htbl_t htbl;
        ltepegproof_array_50_t fvar_1;
        uint32_t fvar_2;
        ltepegproof_array_52_t fvar_3;
        ltepeg__lang_spec_t fvar_4;};

bool_t f_ltepegproof_closure_53(struct ltepegproof_closure_53_s * closure, ltepegproof__qstack_adt_t bvar);

bool_t m_ltepegproof_closure_53(struct ltepegproof_closure_53_s * closure, ltepegproof__qstack_adt_t bvar);

extern bool_t h_ltepegproof_closure_53(ltepegproof__qstack_adt_t ivar_7, ltepegproof_array_50_t ivar_3, uint32_t ivar_1, ltepegproof_array_52_t ivar_4, ltepeg__lang_spec_t ivar_2);

extern ltepegproof_closure_53_t new_ltepegproof_closure_53(void);

extern void release_ltepegproof_closure_53(ltepegproof_funtype_49_t closure);

extern ltepegproof_closure_53_t copy_ltepegproof_closure_53(ltepegproof_closure_53_t x);


//good_parsetree?

struct ltepegproof_record_54_s {
        uint32_t count; 
        ltepegproof__qstack_adt_t project_1;
        uint8_t project_2;
        uint32_t project_3;
        ltepegproof__parsetree_adt_t project_4;};
typedef struct ltepegproof_record_54_s * ltepegproof_record_54_t;

extern ltepegproof_record_54_t new_ltepegproof_record_54(void);

extern void release_ltepegproof_record_54(ltepegproof_record_54_t x);

extern ltepegproof_record_54_t copy_ltepegproof_record_54(ltepegproof_record_54_t x);

extern bool_t equal_ltepegproof_record_54(ltepegproof_record_54_t x, ltepegproof_record_54_t y);
extern char * json_ltepegproof_record_54(ltepegproof_record_54_t x);

typedef struct actual_ltepegproof_record_54_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_54_t;
void release_ltepegproof_record_54_ptr(pointer_t x, type_actual_t ltepegproof_record_54);

extern bool_t equal_ltepegproof_record_54_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_54_t T);

extern char * json_ltepegproof_record_54_ptr(pointer_t x,  actual_ltepegproof_record_54_t T);

actual_ltepegproof_record_54_t actual_ltepegproof_record_54(void);

extern ltepegproof_record_54_t update_ltepegproof_record_54_project_1(ltepegproof_record_54_t x, ltepegproof__qstack_adt_t v);

extern ltepegproof_record_54_t update_ltepegproof_record_54_project_2(ltepegproof_record_54_t x, uint8_t v);

extern ltepegproof_record_54_t update_ltepegproof_record_54_project_3(ltepegproof_record_54_t x, uint32_t v);

extern ltepegproof_record_54_t update_ltepegproof_record_54_project_4(ltepegproof_record_54_t x, ltepegproof__parsetree_adt_t v);


//good_parsetree?

struct ltepegproof_funtype_55_s;
        typedef struct ltepegproof_funtype_55_s * ltepegproof_funtype_55_t;

struct ltepegproof_funtype_55_ftbl_s {bool_t (* fptr)(struct ltepegproof_funtype_55_s *, ltepegproof_record_54_t);
        bool_t (* mptr)(struct ltepegproof_funtype_55_s *, ltepegproof__qstack_adt_t, uint8_t, uint32_t, ltepegproof__parsetree_adt_t);
        void (* rptr)(struct ltepegproof_funtype_55_s *);
        struct ltepegproof_funtype_55_s * (* cptr)(struct ltepegproof_funtype_55_s *);};
typedef struct ltepegproof_funtype_55_ftbl_s * ltepegproof_funtype_55_ftbl_t;

struct ltepegproof_funtype_55_hashentry_s {uint32_t keyhash; ltepegproof_record_54_t key; bool_t value;}; 
typedef struct ltepegproof_funtype_55_hashentry_s ltepegproof_funtype_55_hashentry_t;

struct ltepegproof_funtype_55_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_55_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_55_htbl_s * ltepegproof_funtype_55_htbl_t;

struct ltepegproof_funtype_55_s {uint32_t count;
        ltepegproof_funtype_55_ftbl_t ftbl;
        ltepegproof_funtype_55_htbl_t htbl;};
typedef struct ltepegproof_funtype_55_s * ltepegproof_funtype_55_t;

extern void release_ltepegproof_funtype_55(ltepegproof_funtype_55_t x);

extern ltepegproof_funtype_55_t copy_ltepegproof_funtype_55(ltepegproof_funtype_55_t x);

extern bool_t equal_ltepegproof_funtype_55(ltepegproof_funtype_55_t x, ltepegproof_funtype_55_t y);

extern char* json_ltepegproof_funtype_55(ltepegproof_funtype_55_t x);




struct ltepegproof_closure_56_s;
        typedef struct ltepegproof_closure_56_s * ltepegproof_closure_56_t;

struct ltepegproof_closure_56_s {uint32_t count;
         ltepegproof_funtype_55_ftbl_t ftbl;
         ltepegproof_funtype_55_htbl_t htbl;
        ltepegproof_array_50_t fvar_1;
        uint32_t fvar_2;
        ltepeg__lang_spec_t fvar_3;};

bool_t f_ltepegproof_closure_56(struct ltepegproof_closure_56_s * closure, ltepegproof_record_54_t bvar);

bool_t m_ltepegproof_closure_56(struct ltepegproof_closure_56_s * closure, ltepegproof__qstack_adt_t bvar_1, uint8_t bvar_2, uint32_t bvar_3, ltepegproof__parsetree_adt_t bvar_4);

extern bool_t h_ltepegproof_closure_56(ltepegproof__qstack_adt_t ivar_5, uint8_t ivar_6, uint32_t ivar_7, ltepegproof__parsetree_adt_t ivar_8, ltepegproof_array_50_t ivar_3, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2);

extern ltepegproof_closure_56_t new_ltepegproof_closure_56(void);

extern void release_ltepegproof_closure_56(ltepegproof_funtype_55_t closure);

extern ltepegproof_closure_56_t copy_ltepegproof_closure_56(ltepegproof_closure_56_t x);


//good_parsetree?

struct ltepegproof_funtype_57_s;
        typedef struct ltepegproof_funtype_57_s * ltepegproof_funtype_57_t;

struct ltepegproof_funtype_57_ftbl_s {bool_t (* fptr)(struct ltepegproof_funtype_57_s *, uint8_t);
        bool_t (* mptr)(struct ltepegproof_funtype_57_s *, uint8_t);
        void (* rptr)(struct ltepegproof_funtype_57_s *);
        struct ltepegproof_funtype_57_s * (* cptr)(struct ltepegproof_funtype_57_s *);};
typedef struct ltepegproof_funtype_57_ftbl_s * ltepegproof_funtype_57_ftbl_t;

struct ltepegproof_funtype_57_hashentry_s {uint32_t keyhash; uint8_t key; bool_t value;}; 
typedef struct ltepegproof_funtype_57_hashentry_s ltepegproof_funtype_57_hashentry_t;

struct ltepegproof_funtype_57_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_57_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_57_htbl_s * ltepegproof_funtype_57_htbl_t;

struct ltepegproof_funtype_57_s {uint32_t count;
        ltepegproof_funtype_57_ftbl_t ftbl;
        ltepegproof_funtype_57_htbl_t htbl;};
typedef struct ltepegproof_funtype_57_s * ltepegproof_funtype_57_t;

extern void release_ltepegproof_funtype_57(ltepegproof_funtype_57_t x);

extern ltepegproof_funtype_57_t copy_ltepegproof_funtype_57(ltepegproof_funtype_57_t x);

uint32_t lookup_ltepegproof_funtype_57(ltepegproof_funtype_57_htbl_t htbl, uint8_t i, uint32_t ihash);

ltepegproof_funtype_57_t dupdate_ltepegproof_funtype_57(ltepegproof_funtype_57_t a, uint8_t i, bool_t v);

extern ltepegproof_funtype_57_t update_ltepegproof_funtype_57(ltepegproof_funtype_57_t a, uint8_t i, bool_t v);

extern bool_t equal_ltepegproof_funtype_57(ltepegproof_funtype_57_t x, ltepegproof_funtype_57_t y);

extern char* json_ltepegproof_funtype_57(ltepegproof_funtype_57_t x);


//good_parsetree?

struct ltepegproof_funtype_58_s;
        typedef struct ltepegproof_funtype_58_s * ltepegproof_funtype_58_t;

struct ltepegproof_funtype_58_ftbl_s {bool_t (* fptr)(struct ltepegproof_funtype_58_s *, ltepeg__ent_adt_t);
        bool_t (* mptr)(struct ltepegproof_funtype_58_s *, ltepeg__ent_adt_t);
        void (* rptr)(struct ltepegproof_funtype_58_s *);
        struct ltepegproof_funtype_58_s * (* cptr)(struct ltepegproof_funtype_58_s *);};
typedef struct ltepegproof_funtype_58_ftbl_s * ltepegproof_funtype_58_ftbl_t;

struct ltepegproof_funtype_58_hashentry_s {uint32_t keyhash; ltepeg__ent_adt_t key; bool_t value;}; 
typedef struct ltepegproof_funtype_58_hashentry_s ltepegproof_funtype_58_hashentry_t;

struct ltepegproof_funtype_58_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_58_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_58_htbl_s * ltepegproof_funtype_58_htbl_t;

struct ltepegproof_funtype_58_s {uint32_t count;
        ltepegproof_funtype_58_ftbl_t ftbl;
        ltepegproof_funtype_58_htbl_t htbl;};
typedef struct ltepegproof_funtype_58_s * ltepegproof_funtype_58_t;

extern void release_ltepegproof_funtype_58(ltepegproof_funtype_58_t x);

extern ltepegproof_funtype_58_t copy_ltepegproof_funtype_58(ltepegproof_funtype_58_t x);

extern bool_t equal_ltepegproof_funtype_58(ltepegproof_funtype_58_t x, ltepegproof_funtype_58_t y);

extern char* json_ltepegproof_funtype_58(ltepegproof_funtype_58_t x);


//buildtree

struct ltepegproof_record_59_s {
        uint32_t count; 
        ltepegproof_array_52_t scaf;
        uint64_t depth;
        ltepeg__ent_adt_t stack;
        bool_t lflag;};
typedef struct ltepegproof_record_59_s * ltepegproof_record_59_t;

extern ltepegproof_record_59_t new_ltepegproof_record_59(void);

extern void release_ltepegproof_record_59(ltepegproof_record_59_t x);

extern ltepegproof_record_59_t copy_ltepegproof_record_59(ltepegproof_record_59_t x);

extern bool_t equal_ltepegproof_record_59(ltepegproof_record_59_t x, ltepegproof_record_59_t y);
extern char * json_ltepegproof_record_59(ltepegproof_record_59_t x);

typedef struct actual_ltepegproof_record_59_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_59_t;
void release_ltepegproof_record_59_ptr(pointer_t x, type_actual_t ltepegproof_record_59);

extern bool_t equal_ltepegproof_record_59_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_59_t T);

extern char * json_ltepegproof_record_59_ptr(pointer_t x,  actual_ltepegproof_record_59_t T);

actual_ltepegproof_record_59_t actual_ltepegproof_record_59(void);

extern ltepegproof_record_59_t update_ltepegproof_record_59_scaf(ltepegproof_record_59_t x, ltepegproof_array_52_t v);

extern ltepegproof_record_59_t update_ltepegproof_record_59_depth(ltepegproof_record_59_t x, uint64_t v);

extern ltepegproof_record_59_t update_ltepegproof_record_59_stack(ltepegproof_record_59_t x, ltepeg__ent_adt_t v);

extern ltepegproof_record_59_t update_ltepegproof_record_59_lflag(ltepegproof_record_59_t x, bool_t v);


//buildtree

struct ltepegproof_record_60_s {
        uint32_t count; 
        ltepegproof_record_59_t project_1;
        ltepegproof__qstack_adt_t project_2;
        uint8_t project_3;
        uint32_t project_4;};
typedef struct ltepegproof_record_60_s * ltepegproof_record_60_t;

extern ltepegproof_record_60_t new_ltepegproof_record_60(void);

extern void release_ltepegproof_record_60(ltepegproof_record_60_t x);

extern ltepegproof_record_60_t copy_ltepegproof_record_60(ltepegproof_record_60_t x);

extern bool_t equal_ltepegproof_record_60(ltepegproof_record_60_t x, ltepegproof_record_60_t y);
extern char * json_ltepegproof_record_60(ltepegproof_record_60_t x);

typedef struct actual_ltepegproof_record_60_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_60_t;
void release_ltepegproof_record_60_ptr(pointer_t x, type_actual_t ltepegproof_record_60);

extern bool_t equal_ltepegproof_record_60_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_60_t T);

extern char * json_ltepegproof_record_60_ptr(pointer_t x,  actual_ltepegproof_record_60_t T);

actual_ltepegproof_record_60_t actual_ltepegproof_record_60(void);

extern ltepegproof_record_60_t update_ltepegproof_record_60_project_1(ltepegproof_record_60_t x, ltepegproof_record_59_t v);

extern ltepegproof_record_60_t update_ltepegproof_record_60_project_2(ltepegproof_record_60_t x, ltepegproof__qstack_adt_t v);

extern ltepegproof_record_60_t update_ltepegproof_record_60_project_3(ltepegproof_record_60_t x, uint8_t v);

extern ltepegproof_record_60_t update_ltepegproof_record_60_project_4(ltepegproof_record_60_t x, uint32_t v);


//buildtree

struct ltepegproof_funtype_61_s;
        typedef struct ltepegproof_funtype_61_s * ltepegproof_funtype_61_t;

struct ltepegproof_funtype_61_ftbl_s {ltepegproof__parsetree_adt_t (* fptr)(struct ltepegproof_funtype_61_s *, ltepegproof_record_60_t);
        ltepegproof__parsetree_adt_t (* mptr)(struct ltepegproof_funtype_61_s *, ltepegproof_record_59_t, ltepegproof__qstack_adt_t, uint8_t, uint32_t);
        void (* rptr)(struct ltepegproof_funtype_61_s *);
        struct ltepegproof_funtype_61_s * (* cptr)(struct ltepegproof_funtype_61_s *);};
typedef struct ltepegproof_funtype_61_ftbl_s * ltepegproof_funtype_61_ftbl_t;

struct ltepegproof_funtype_61_hashentry_s {uint32_t keyhash; ltepegproof_record_60_t key; ltepegproof__parsetree_adt_t value;}; 
typedef struct ltepegproof_funtype_61_hashentry_s ltepegproof_funtype_61_hashentry_t;

struct ltepegproof_funtype_61_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_61_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_61_htbl_s * ltepegproof_funtype_61_htbl_t;

struct ltepegproof_funtype_61_s {uint32_t count;
        ltepegproof_funtype_61_ftbl_t ftbl;
        ltepegproof_funtype_61_htbl_t htbl;};
typedef struct ltepegproof_funtype_61_s * ltepegproof_funtype_61_t;

extern void release_ltepegproof_funtype_61(ltepegproof_funtype_61_t x);

extern ltepegproof_funtype_61_t copy_ltepegproof_funtype_61(ltepegproof_funtype_61_t x);

extern bool_t equal_ltepegproof_funtype_61(ltepegproof_funtype_61_t x, ltepegproof_funtype_61_t y);

extern char* json_ltepegproof_funtype_61(ltepegproof_funtype_61_t x);




struct ltepegproof_closure_62_s;
        typedef struct ltepegproof_closure_62_s * ltepegproof_closure_62_t;

struct ltepegproof_closure_62_s {uint32_t count;
         ltepegproof_funtype_61_ftbl_t ftbl;
         ltepegproof_funtype_61_htbl_t htbl;
        uint32_t fvar_1;
        ltepeg__lang_spec_t fvar_2;
        ltepegproof_array_50_t fvar_3;
        uint8_t fvar_4;
        uint32_t fvar_5;};

ltepegproof__parsetree_adt_t f_ltepegproof_closure_62(struct ltepegproof_closure_62_s * closure, ltepegproof_record_60_t bvar);

ltepegproof__parsetree_adt_t m_ltepegproof_closure_62(struct ltepegproof_closure_62_s * closure, ltepegproof_record_59_t bvar_1, ltepegproof__qstack_adt_t bvar_2, uint8_t bvar_3, uint32_t bvar_4);

extern ltepegproof__parsetree_adt_t h_ltepegproof_closure_62(ltepegproof_record_59_t ivar_8, ltepegproof__qstack_adt_t ivar_10, uint8_t ivar_11, uint32_t ivar_12, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepegproof_array_50_t ivar_3, uint8_t ivar_5, uint32_t ivar_4);

extern ltepegproof_closure_62_t new_ltepegproof_closure_62(void);

extern void release_ltepegproof_closure_62(ltepegproof_funtype_61_t closure);

extern ltepegproof_closure_62_t copy_ltepegproof_closure_62(ltepegproof_closure_62_t x);


//buildloop

struct ltepegproof_record_63_s {
        uint32_t count; 
        ltepegproof_record_59_t project_1;
        ltepegproof_array_52_t project_2;
        ltepegproof__qstack_adt_t project_3;
        uint8_t project_4;
        uint32_t project_5;};
typedef struct ltepegproof_record_63_s * ltepegproof_record_63_t;

extern ltepegproof_record_63_t new_ltepegproof_record_63(void);

extern void release_ltepegproof_record_63(ltepegproof_record_63_t x);

extern ltepegproof_record_63_t copy_ltepegproof_record_63(ltepegproof_record_63_t x);

extern bool_t equal_ltepegproof_record_63(ltepegproof_record_63_t x, ltepegproof_record_63_t y);
extern char * json_ltepegproof_record_63(ltepegproof_record_63_t x);

typedef struct actual_ltepegproof_record_63_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_63_t;
void release_ltepegproof_record_63_ptr(pointer_t x, type_actual_t ltepegproof_record_63);

extern bool_t equal_ltepegproof_record_63_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_63_t T);

extern char * json_ltepegproof_record_63_ptr(pointer_t x,  actual_ltepegproof_record_63_t T);

actual_ltepegproof_record_63_t actual_ltepegproof_record_63(void);

extern ltepegproof_record_63_t update_ltepegproof_record_63_project_1(ltepegproof_record_63_t x, ltepegproof_record_59_t v);

extern ltepegproof_record_63_t update_ltepegproof_record_63_project_2(ltepegproof_record_63_t x, ltepegproof_array_52_t v);

extern ltepegproof_record_63_t update_ltepegproof_record_63_project_3(ltepegproof_record_63_t x, ltepegproof__qstack_adt_t v);

extern ltepegproof_record_63_t update_ltepegproof_record_63_project_4(ltepegproof_record_63_t x, uint8_t v);

extern ltepegproof_record_63_t update_ltepegproof_record_63_project_5(ltepegproof_record_63_t x, uint32_t v);


//buildloop

struct ltepegproof_funtype_64_s;
        typedef struct ltepegproof_funtype_64_s * ltepegproof_funtype_64_t;

struct ltepegproof_funtype_64_ftbl_s {ltepegproof__parsetree_adt_t (* fptr)(struct ltepegproof_funtype_64_s *, ltepegproof_record_63_t);
        ltepegproof__parsetree_adt_t (* mptr)(struct ltepegproof_funtype_64_s *, ltepegproof_record_59_t, ltepegproof_array_52_t, ltepegproof__qstack_adt_t, uint8_t, uint32_t);
        void (* rptr)(struct ltepegproof_funtype_64_s *);
        struct ltepegproof_funtype_64_s * (* cptr)(struct ltepegproof_funtype_64_s *);};
typedef struct ltepegproof_funtype_64_ftbl_s * ltepegproof_funtype_64_ftbl_t;

struct ltepegproof_funtype_64_hashentry_s {uint32_t keyhash; ltepegproof_record_63_t key; ltepegproof__parsetree_adt_t value;}; 
typedef struct ltepegproof_funtype_64_hashentry_s ltepegproof_funtype_64_hashentry_t;

struct ltepegproof_funtype_64_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_64_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_64_htbl_s * ltepegproof_funtype_64_htbl_t;

struct ltepegproof_funtype_64_s {uint32_t count;
        ltepegproof_funtype_64_ftbl_t ftbl;
        ltepegproof_funtype_64_htbl_t htbl;};
typedef struct ltepegproof_funtype_64_s * ltepegproof_funtype_64_t;

extern void release_ltepegproof_funtype_64(ltepegproof_funtype_64_t x);

extern ltepegproof_funtype_64_t copy_ltepegproof_funtype_64(ltepegproof_funtype_64_t x);

extern bool_t equal_ltepegproof_funtype_64(ltepegproof_funtype_64_t x, ltepegproof_funtype_64_t y);

extern char* json_ltepegproof_funtype_64(ltepegproof_funtype_64_t x);




struct ltepegproof_closure_65_s;
        typedef struct ltepegproof_closure_65_s * ltepegproof_closure_65_t;

struct ltepegproof_closure_65_s {uint32_t count;
         ltepegproof_funtype_64_ftbl_t ftbl;
         ltepegproof_funtype_64_htbl_t htbl;
        uint32_t fvar_1;
        ltepeg__lang_spec_t fvar_2;
        ltepegproof_array_50_t fvar_3;
        uint8_t fvar_4;
        uint32_t fvar_5;};

ltepegproof__parsetree_adt_t f_ltepegproof_closure_65(struct ltepegproof_closure_65_s * closure, ltepegproof_record_63_t bvar);

ltepegproof__parsetree_adt_t m_ltepegproof_closure_65(struct ltepegproof_closure_65_s * closure, ltepegproof_record_59_t bvar_1, ltepegproof_array_52_t bvar_2, ltepegproof__qstack_adt_t bvar_3, uint8_t bvar_4, uint32_t bvar_5);

extern ltepegproof__parsetree_adt_t h_ltepegproof_closure_65(ltepegproof_record_59_t ivar_9, ltepegproof_array_52_t ivar_11, ltepegproof__qstack_adt_t ivar_13, uint8_t ivar_14, uint32_t ivar_15, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepegproof_array_50_t ivar_3, uint8_t ivar_5, uint32_t ivar_4);

extern ltepegproof_closure_65_t new_ltepegproof_closure_65(void);

extern void release_ltepegproof_closure_65(ltepegproof_funtype_64_t closure);

extern ltepegproof_closure_65_t copy_ltepegproof_closure_65(ltepegproof_closure_65_t x);


//buildloop

struct ltepegproof_array_66_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltepeg__ent_adt_t elems[]; };
typedef struct ltepegproof_array_66_s * ltepegproof_array_66_t;

extern ltepegproof_array_66_t new_ltepegproof_array_66(uint32_t size);

extern void release_ltepegproof_array_66(ltepegproof_array_66_t x);

extern ltepegproof_array_66_t copy_ltepegproof_array_66(ltepegproof_array_66_t x);

extern bool_t equal_ltepegproof_array_66(ltepegproof_array_66_t x, ltepegproof_array_66_t y);
extern char * json_ltepegproof_array_66(ltepegproof_array_66_t x);

typedef struct actual_ltepegproof_array_66_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_array_66_t;
void release_ltepegproof_array_66_ptr(pointer_t x, type_actual_t ltepegproof_array_66);

extern bool_t equal_ltepegproof_array_66_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltepegproof_array_66_ptr(pointer_t x, type_actual_t T);

actual_ltepegproof_array_66_t actual_ltepegproof_array_66(void);

extern ltepegproof_array_66_t update_ltepegproof_array_66(ltepegproof_array_66_t x, uint32_t i, ltepeg__ent_adt_t v);

extern ltepegproof_array_66_t upgrade_ltepegproof_array_66(ltepegproof_array_66_t x, uint32_t i, ltepeg__ent_adt_t v);


//buildproof

struct ltepegproof_record_67_s {
        uint32_t count; 
        ltepegproof_record_59_t project_1;
        uint8_t project_2;
        uint32_t project_3;};
typedef struct ltepegproof_record_67_s * ltepegproof_record_67_t;

extern ltepegproof_record_67_t new_ltepegproof_record_67(void);

extern void release_ltepegproof_record_67(ltepegproof_record_67_t x);

extern ltepegproof_record_67_t copy_ltepegproof_record_67(ltepegproof_record_67_t x);

extern bool_t equal_ltepegproof_record_67(ltepegproof_record_67_t x, ltepegproof_record_67_t y);
extern char * json_ltepegproof_record_67(ltepegproof_record_67_t x);

typedef struct actual_ltepegproof_record_67_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegproof_record_67_t;
void release_ltepegproof_record_67_ptr(pointer_t x, type_actual_t ltepegproof_record_67);

extern bool_t equal_ltepegproof_record_67_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_67_t T);

extern char * json_ltepegproof_record_67_ptr(pointer_t x,  actual_ltepegproof_record_67_t T);

actual_ltepegproof_record_67_t actual_ltepegproof_record_67(void);

extern ltepegproof_record_67_t update_ltepegproof_record_67_project_1(ltepegproof_record_67_t x, ltepegproof_record_59_t v);

extern ltepegproof_record_67_t update_ltepegproof_record_67_project_2(ltepegproof_record_67_t x, uint8_t v);

extern ltepegproof_record_67_t update_ltepegproof_record_67_project_3(ltepegproof_record_67_t x, uint32_t v);


//buildproof

struct ltepegproof_funtype_68_s;
        typedef struct ltepegproof_funtype_68_s * ltepegproof_funtype_68_t;

struct ltepegproof_funtype_68_ftbl_s {ltepegproof__parsetree_adt_t (* fptr)(struct ltepegproof_funtype_68_s *, ltepegproof_record_67_t);
        ltepegproof__parsetree_adt_t (* mptr)(struct ltepegproof_funtype_68_s *, ltepegproof_record_59_t, uint8_t, uint32_t);
        void (* rptr)(struct ltepegproof_funtype_68_s *);
        struct ltepegproof_funtype_68_s * (* cptr)(struct ltepegproof_funtype_68_s *);};
typedef struct ltepegproof_funtype_68_ftbl_s * ltepegproof_funtype_68_ftbl_t;

struct ltepegproof_funtype_68_hashentry_s {uint32_t keyhash; ltepegproof_record_67_t key; ltepegproof__parsetree_adt_t value;}; 
typedef struct ltepegproof_funtype_68_hashentry_s ltepegproof_funtype_68_hashentry_t;

struct ltepegproof_funtype_68_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_68_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_68_htbl_s * ltepegproof_funtype_68_htbl_t;

struct ltepegproof_funtype_68_s {uint32_t count;
        ltepegproof_funtype_68_ftbl_t ftbl;
        ltepegproof_funtype_68_htbl_t htbl;};
typedef struct ltepegproof_funtype_68_s * ltepegproof_funtype_68_t;

extern void release_ltepegproof_funtype_68(ltepegproof_funtype_68_t x);

extern ltepegproof_funtype_68_t copy_ltepegproof_funtype_68(ltepegproof_funtype_68_t x);

extern bool_t equal_ltepegproof_funtype_68(ltepegproof_funtype_68_t x, ltepegproof_funtype_68_t y);

extern char* json_ltepegproof_funtype_68(ltepegproof_funtype_68_t x);




struct ltepegproof_closure_69_s;
        typedef struct ltepegproof_closure_69_s * ltepegproof_closure_69_t;

struct ltepegproof_closure_69_s {uint32_t count;
         ltepegproof_funtype_68_ftbl_t ftbl;
         ltepegproof_funtype_68_htbl_t htbl;
        uint32_t fvar_1;
        uint32_t fvar_2;
        uint8_t fvar_3;
        ltepegproof_array_50_t fvar_4;
        ltepeg__lang_spec_t fvar_5;};

ltepegproof__parsetree_adt_t f_ltepegproof_closure_69(struct ltepegproof_closure_69_s * closure, ltepegproof_record_67_t bvar);

ltepegproof__parsetree_adt_t m_ltepegproof_closure_69(struct ltepegproof_closure_69_s * closure, ltepegproof_record_59_t bvar_1, uint8_t bvar_2, uint32_t bvar_3);

extern ltepegproof__parsetree_adt_t h_ltepegproof_closure_69(ltepegproof_record_59_t ivar_8, uint8_t ivar_10, uint32_t ivar_11, uint32_t ivar_4, uint32_t ivar_1, uint8_t ivar_5, ltepegproof_array_50_t ivar_3, ltepeg__lang_spec_t ivar_2);

extern ltepegproof_closure_69_t new_ltepegproof_closure_69(void);

extern void release_ltepegproof_closure_69(ltepegproof_funtype_68_t closure);

extern ltepegproof_closure_69_t copy_ltepegproof_closure_69(ltepegproof_closure_69_t x);


//buildproof

struct ltepegproof_funtype_70_s;
        typedef struct ltepegproof_funtype_70_s * ltepegproof_funtype_70_t;

struct ltepegproof_funtype_70_ftbl_s {ltepeg__ent_adt_t (* fptr)(struct ltepegproof_funtype_70_s *, uint8_t);
        ltepeg__ent_adt_t (* mptr)(struct ltepegproof_funtype_70_s *, uint8_t);
        void (* rptr)(struct ltepegproof_funtype_70_s *);
        struct ltepegproof_funtype_70_s * (* cptr)(struct ltepegproof_funtype_70_s *);};
typedef struct ltepegproof_funtype_70_ftbl_s * ltepegproof_funtype_70_ftbl_t;

struct ltepegproof_funtype_70_hashentry_s {uint32_t keyhash; uint8_t key; ltepeg__ent_adt_t value;}; 
typedef struct ltepegproof_funtype_70_hashentry_s ltepegproof_funtype_70_hashentry_t;

struct ltepegproof_funtype_70_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_70_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_70_htbl_s * ltepegproof_funtype_70_htbl_t;

struct ltepegproof_funtype_70_s {uint32_t count;
        ltepegproof_funtype_70_ftbl_t ftbl;
        ltepegproof_funtype_70_htbl_t htbl;};
typedef struct ltepegproof_funtype_70_s * ltepegproof_funtype_70_t;

extern void release_ltepegproof_funtype_70(ltepegproof_funtype_70_t x);

extern ltepegproof_funtype_70_t copy_ltepegproof_funtype_70(ltepegproof_funtype_70_t x);

uint32_t lookup_ltepegproof_funtype_70(ltepegproof_funtype_70_htbl_t htbl, uint8_t i, uint32_t ihash);

ltepegproof_funtype_70_t dupdate_ltepegproof_funtype_70(ltepegproof_funtype_70_t a, uint8_t i, ltepeg__ent_adt_t v);

extern ltepegproof_funtype_70_t update_ltepegproof_funtype_70(ltepegproof_funtype_70_t a, uint8_t i, ltepeg__ent_adt_t v);

extern bool_t equal_ltepegproof_funtype_70(ltepegproof_funtype_70_t x, ltepegproof_funtype_70_t y);

extern char* json_ltepegproof_funtype_70(ltepegproof_funtype_70_t x);




struct ltepegproof_closure_71_s;
        typedef struct ltepegproof_closure_71_s * ltepegproof_closure_71_t;

struct ltepegproof_closure_71_s {uint32_t count;
         ltepegproof_funtype_70_ftbl_t ftbl;
         ltepegproof_funtype_70_htbl_t htbl;};

ltepeg__ent_adt_t f_ltepegproof_closure_71(struct ltepegproof_closure_71_s * closure, uint8_t bvar);

ltepeg__ent_adt_t m_ltepegproof_closure_71(struct ltepegproof_closure_71_s * closure, uint8_t bvar);

extern ltepeg__ent_adt_t h_ltepegproof_closure_71(uint8_t ivar_31);

extern ltepegproof_closure_71_t new_ltepegproof_closure_71(void);

extern void release_ltepegproof_closure_71(ltepegproof_funtype_70_t closure);

extern ltepegproof_closure_71_t copy_ltepegproof_closure_71(ltepegproof_closure_71_t x);


//buildproof

struct ltepegproof_funtype_72_s;
        typedef struct ltepegproof_funtype_72_s * ltepegproof_funtype_72_t;

struct ltepegproof_funtype_72_ftbl_s {ltepegproof_funtype_70_t (* fptr)(struct ltepegproof_funtype_72_s *, uint32_t);
        ltepegproof_funtype_70_t (* mptr)(struct ltepegproof_funtype_72_s *, uint32_t);
        void (* rptr)(struct ltepegproof_funtype_72_s *);
        struct ltepegproof_funtype_72_s * (* cptr)(struct ltepegproof_funtype_72_s *);};
typedef struct ltepegproof_funtype_72_ftbl_s * ltepegproof_funtype_72_ftbl_t;

struct ltepegproof_funtype_72_hashentry_s {uint32_t keyhash; uint32_t key; ltepegproof_funtype_70_t value;}; 
typedef struct ltepegproof_funtype_72_hashentry_s ltepegproof_funtype_72_hashentry_t;

struct ltepegproof_funtype_72_htbl_s {uint32_t size; uint32_t num_entries; ltepegproof_funtype_72_hashentry_t * data;}; 
typedef struct ltepegproof_funtype_72_htbl_s * ltepegproof_funtype_72_htbl_t;

struct ltepegproof_funtype_72_s {uint32_t count;
        ltepegproof_funtype_72_ftbl_t ftbl;
        ltepegproof_funtype_72_htbl_t htbl;};
typedef struct ltepegproof_funtype_72_s * ltepegproof_funtype_72_t;

extern void release_ltepegproof_funtype_72(ltepegproof_funtype_72_t x);

extern ltepegproof_funtype_72_t copy_ltepegproof_funtype_72(ltepegproof_funtype_72_t x);

uint32_t lookup_ltepegproof_funtype_72(ltepegproof_funtype_72_htbl_t htbl, uint32_t i, uint32_t ihash);

ltepegproof_funtype_72_t dupdate_ltepegproof_funtype_72(ltepegproof_funtype_72_t a, uint32_t i, ltepegproof_funtype_70_t v);

extern ltepegproof_funtype_72_t update_ltepegproof_funtype_72(ltepegproof_funtype_72_t a, uint32_t i, ltepegproof_funtype_70_t v);

extern bool_t equal_ltepegproof_funtype_72(ltepegproof_funtype_72_t x, ltepegproof_funtype_72_t y);

extern char* json_ltepegproof_funtype_72(ltepegproof_funtype_72_t x);




struct ltepegproof_closure_73_s;
        typedef struct ltepegproof_closure_73_s * ltepegproof_closure_73_t;

struct ltepegproof_closure_73_s {uint32_t count;
         ltepegproof_funtype_72_ftbl_t ftbl;
         ltepegproof_funtype_72_htbl_t htbl;
        uint32_t fvar_1;
        ltepegproof_funtype_70_t fvar_2;};

ltepegproof_funtype_70_t f_ltepegproof_closure_73(struct ltepegproof_closure_73_s * closure, uint32_t bvar);

ltepegproof_funtype_70_t m_ltepegproof_closure_73(struct ltepegproof_closure_73_s * closure, uint32_t bvar);

extern ltepegproof_funtype_70_t h_ltepegproof_closure_73(uint32_t ivar_39, uint32_t ivar_1, ltepegproof_funtype_70_t ivar_27);

extern ltepegproof_closure_73_t new_ltepegproof_closure_73(void);

extern void release_ltepegproof_closure_73(ltepegproof_funtype_72_t closure);

extern ltepegproof_closure_73_t copy_ltepegproof_closure_73(ltepegproof_closure_73_t x);



extern bool_t ltepegproof__defentp(ltepeg__ent_adt_t ivar_1);

extern bool_t r_ltepegproof__zerop(ltepegproof__parsetree_adt_t ivar_1);

extern bool_t r_ltepegproof__onep(ltepegproof__parsetree_adt_t ivar_1);

extern bool_t r_ltepegproof__twop(ltepegproof__parsetree_adt_t ivar_1);

extern ltepegproof__parsetree_adt_t update_ltepegproof__parsetree_adt_entry(ltepegproof__parsetree_adt_t ivar_1, ltepeg__ent_adt_t ivar_11);

extern ltepeg__ent_adt_t ltepegproof__parsetree_adt_entry(ltepegproof__parsetree_adt_t ivar_1);

extern ltepegproof__parsetree_adt_t update_ltepegproof__parsetree_adt_subone(ltepegproof__parsetree_adt_t ivar_1, ltepegproof__parsetree_adt_t ivar_7);

extern ltepegproof__parsetree_adt_t ltepegproof__parsetree_adt_subone(ltepegproof__parsetree_adt_t ivar_1);

extern ltepegproof__two_t update_ltepegproof__parsetree_adt_subtwo(ltepegproof__parsetree_adt_t ivar_1, ltepegproof__parsetree_adt_t ivar_3);

extern ltepegproof__parsetree_adt_t ltepegproof__parsetree_adt_subtwo(ltepegproof__parsetree_adt_t ivar_1);

extern ltepegproof__parsetree_adt_t ltepegproof__zero(ltepeg__ent_adt_t ivar_2);

extern ltepegproof__parsetree_adt_t ltepegproof__one(ltepeg__ent_adt_t ivar_2, ltepegproof__parsetree_adt_t ivar_3);

extern ltepegproof__parsetree_adt_t ltepegproof__two(ltepeg__ent_adt_t ivar_2, ltepegproof__parsetree_adt_t ivar_3, ltepegproof__parsetree_adt_t ivar_4);

extern ltepegproof_funtype_4_t ltepegproof__parsetree_ord(void);

extern uint8_t ltepegproof__ord__1(ltepegproof__parsetree_adt_t ivar_1);

extern bool_t ltepegproof__subterm__1(ltepegproof__parsetree_adt_t ivar_1, ltepegproof__parsetree_adt_t ivar_2);

extern bool_t ltepegproof__doublelessp__1(ltepegproof__parsetree_adt_t ivar_1, ltepegproof__parsetree_adt_t ivar_2);

extern ltepegproof_funtype_5_t ltepegproof__reduce_nat__1(ltepegproof_funtype_6_t ivar_1, ltepegproof_funtype_8_t ivar_3, ltepegproof_funtype_10_t ivar_5);

extern ltepegproof_funtype_5_t ltepegproof__REDUCE_nat__1(ltepegproof_funtype_13_t ivar_1, ltepegproof_funtype_15_t ivar_3, ltepegproof_funtype_17_t ivar_5);

extern ltepegproof_funtype_19_t ltepegproof__reduce_ordinal__1(ltepegproof_funtype_20_t ivar_1, ltepegproof_funtype_22_t ivar_3, ltepegproof_funtype_24_t ivar_5);

extern ltepegproof_funtype_19_t ltepegproof__REDUCE_ordinal__1(ltepegproof_funtype_26_t ivar_1, ltepegproof_funtype_28_t ivar_3, ltepegproof_funtype_30_t ivar_5);

extern bool_t r_ltepegproof__qemptyp(ltepegproof__qstack_adt_t ivar_1);

extern bool_t r_ltepegproof__qpushp(ltepegproof__qstack_adt_t ivar_1);

extern ltepegproof__qpush_t update_ltepegproof__qstack_adt_nonterm(ltepegproof__qstack_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t ltepegproof__qstack_adt_nonterm(ltepegproof__qstack_adt_t ivar_1);

extern ltepegproof__qpush_t update_ltepegproof__qstack_adt_pos(ltepegproof__qstack_adt_t ivar_1, uint32_t ivar_3);

extern uint32_t ltepegproof__qstack_adt_pos(ltepegproof__qstack_adt_t ivar_1);

extern ltepegproof__qpush_t update_ltepegproof__qstack_adt_qpop(ltepegproof__qstack_adt_t ivar_1, ltepegproof__qstack_adt_t ivar_3);

extern ltepegproof__qstack_adt_t ltepegproof__qstack_adt_qpop(ltepegproof__qstack_adt_t ivar_1);

extern ltepegproof__qstack_adt_t ltepegproof__qempty(void);

extern ltepegproof__qstack_adt_t ltepegproof__qpush(uint8_t ivar_2, uint32_t ivar_3, ltepegproof__qstack_adt_t ivar_4);

extern ltepegproof_funtype_34_t ltepegproof__qstack_ord(void);

extern uint8_t ltepegproof__ord__2(ltepegproof__qstack_adt_t ivar_1);

extern bool_t ltepegproof__subterm__2(ltepegproof__qstack_adt_t ivar_1, ltepegproof__qstack_adt_t ivar_2);

extern bool_t ltepegproof__doublelessp__2(ltepegproof__qstack_adt_t ivar_1, ltepegproof__qstack_adt_t ivar_2);

extern ltepegproof_funtype_35_t ltepegproof__reduce_nat__2(mpz_ptr_t ivar_1, ltepegproof_funtype_37_t ivar_2);

extern ltepegproof_funtype_35_t ltepegproof__REDUCE_nat__2(ltepegproof_funtype_35_t ivar_1, ltepegproof_funtype_40_t ivar_3);

extern ltepegproof_funtype_42_t ltepegproof__reduce_ordinal__2(ordstruct_adt__ordstruct_adt_t ivar_1, ltepegproof_funtype_44_t ivar_2);

extern ltepegproof_funtype_42_t ltepegproof__REDUCE_ordinal__2(ltepegproof_funtype_42_t ivar_1, ltepegproof_funtype_47_t ivar_3);

extern bool_t ltepegproof__inqstack(uint8_t ivar_1, uint32_t ivar_2, ltepegproof__qstack_adt_t ivar_3);

extern mpz_ptr_t ltepegproof__stacksize(ltepegproof__qstack_adt_t ivar_1);

extern ltepegproof_funtype_49_t ltepegproof__good_qstackp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepegproof_array_50_t ivar_3, ltepegproof_array_52_t ivar_4);

extern ltepegproof_funtype_55_t ltepegproof__good_parsetreep(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepegproof_array_50_t ivar_3);

extern ltepegproof_funtype_61_t ltepegproof__buildtree(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepegproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5);

extern ltepegproof_funtype_64_t ltepegproof__buildloop(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepegproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5);

extern ltepegproof_funtype_68_t ltepegproof__buildproof(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepegproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5);
#endif