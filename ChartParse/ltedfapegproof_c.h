//Code generated using pvs2ir
#ifndef _ltedfapegproof_h 
#define _ltedfapegproof_h

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

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "ltedfapeg_c.h"

#include "dfa_c.h"

#include "arrayCount_c.h"

//cc -O3 -Wall -o ltedfapegproof -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/lex2_c.c /Users/e21660/shankar/pvs.git/lib/sets_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/modulo_arithmetic_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c ltedfapegproof_c.c ltedfapeg_c.c dfa_c.c arrayCount_c.c -lgmp 
//parsetree

struct ltedfapegproof__parsetree_adt_s {
         uint32_t count; 
        uint8_t ltedfapegproof__parsetree_adt_index;};
typedef struct ltedfapegproof__parsetree_adt_s * ltedfapegproof__parsetree_adt_t;

extern ltedfapegproof__parsetree_adt_t new_ltedfapegproof__parsetree_adt(void);

extern void release_ltedfapegproof__parsetree_adt(ltedfapegproof__parsetree_adt_t x);

extern ltedfapegproof__parsetree_adt_t copy_ltedfapegproof__parsetree_adt(ltedfapegproof__parsetree_adt_t x);

extern bool_t equal_ltedfapegproof__parsetree_adt(ltedfapegproof__parsetree_adt_t x, ltedfapegproof__parsetree_adt_t y);
extern char * json_ltedfapegproof__parsetree_adt(ltedfapegproof__parsetree_adt_t x);

typedef struct actual_ltedfapegproof__parsetree_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof__parsetree_adt_t;
extern void release_ltedfapegproof__parsetree_adt_ptr(pointer_t x, type_actual_t ltedfapegproof__parsetree_adt);

extern bool_t equal_ltedfapegproof__parsetree_adt_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof__parsetree_adt_t T);

extern char * json_ltedfapegproof__parsetree_adt_ptr(pointer_t x,  actual_ltedfapegproof__parsetree_adt_t T);

actual_ltedfapegproof__parsetree_adt_t actual_ltedfapegproof__parsetree_adt(void);

extern ltedfapegproof__parsetree_adt_t update_ltedfapegproof__parsetree_adt_ltedfapegproof__parsetree_adt_index(ltedfapegproof__parsetree_adt_t x, uint8_t v);


//zero

struct ltedfapegproof__zero_s {
        uint32_t count; 
        uint8_t ltedfapegproof__parsetree_adt_index;
        uint8_t nt;
        ltedfapeg__ent_adt_t entry;};
typedef struct ltedfapegproof__zero_s * ltedfapegproof__zero_t;

extern ltedfapegproof__zero_t new_ltedfapegproof__zero(void);

extern void release_ltedfapegproof__zero(ltedfapegproof__zero_t x);

extern ltedfapegproof__zero_t copy_ltedfapegproof__zero(ltedfapegproof__zero_t x);

extern bool_t equal_ltedfapegproof__zero(ltedfapegproof__zero_t x, ltedfapegproof__zero_t y);
extern char * json_ltedfapegproof__zero(ltedfapegproof__zero_t x);

typedef struct actual_ltedfapegproof__zero_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof__zero_t;
extern void release_ltedfapegproof__zero_ptr(pointer_t x, type_actual_t ltedfapegproof__zero);

extern bool_t equal_ltedfapegproof__zero_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof__zero_t T);

extern char * json_ltedfapegproof__zero_ptr(pointer_t x,  actual_ltedfapegproof__zero_t T);

actual_ltedfapegproof__zero_t actual_ltedfapegproof__zero(void);

extern ltedfapegproof__zero_t update_ltedfapegproof__zero_ltedfapegproof__parsetree_adt_index(ltedfapegproof__zero_t x, uint8_t v);

extern ltedfapegproof__zero_t update_ltedfapegproof__zero_nt(ltedfapegproof__zero_t x, uint8_t v);

extern ltedfapegproof__zero_t update_ltedfapegproof__zero_entry(ltedfapegproof__zero_t x, ltedfapeg__ent_adt_t v);


//one

struct ltedfapegproof__one_s {
        uint32_t count; 
        uint8_t ltedfapegproof__parsetree_adt_index;
        uint8_t nt;
        ltedfapeg__ent_adt_t entry;
        ltedfapegproof__parsetree_adt_t subone;};
typedef struct ltedfapegproof__one_s * ltedfapegproof__one_t;

extern ltedfapegproof__one_t new_ltedfapegproof__one(void);

extern void release_ltedfapegproof__one(ltedfapegproof__one_t x);

extern ltedfapegproof__one_t copy_ltedfapegproof__one(ltedfapegproof__one_t x);

extern bool_t equal_ltedfapegproof__one(ltedfapegproof__one_t x, ltedfapegproof__one_t y);
extern char * json_ltedfapegproof__one(ltedfapegproof__one_t x);

typedef struct actual_ltedfapegproof__one_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof__one_t;
extern void release_ltedfapegproof__one_ptr(pointer_t x, type_actual_t ltedfapegproof__one);

extern bool_t equal_ltedfapegproof__one_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof__one_t T);

extern char * json_ltedfapegproof__one_ptr(pointer_t x,  actual_ltedfapegproof__one_t T);

actual_ltedfapegproof__one_t actual_ltedfapegproof__one(void);

extern ltedfapegproof__one_t update_ltedfapegproof__one_ltedfapegproof__parsetree_adt_index(ltedfapegproof__one_t x, uint8_t v);

extern ltedfapegproof__one_t update_ltedfapegproof__one_nt(ltedfapegproof__one_t x, uint8_t v);

extern ltedfapegproof__one_t update_ltedfapegproof__one_entry(ltedfapegproof__one_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof__one_t update_ltedfapegproof__one_subone(ltedfapegproof__one_t x, ltedfapegproof__parsetree_adt_t v);


//two

struct ltedfapegproof__two_s {
        uint32_t count; 
        uint8_t ltedfapegproof__parsetree_adt_index;
        uint8_t nt;
        ltedfapeg__ent_adt_t entry;
        ltedfapegproof__parsetree_adt_t subone;
        ltedfapegproof__parsetree_adt_t subtwo;};
typedef struct ltedfapegproof__two_s * ltedfapegproof__two_t;

extern ltedfapegproof__two_t new_ltedfapegproof__two(void);

extern void release_ltedfapegproof__two(ltedfapegproof__two_t x);

extern ltedfapegproof__two_t copy_ltedfapegproof__two(ltedfapegproof__two_t x);

extern bool_t equal_ltedfapegproof__two(ltedfapegproof__two_t x, ltedfapegproof__two_t y);
extern char * json_ltedfapegproof__two(ltedfapegproof__two_t x);

typedef struct actual_ltedfapegproof__two_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof__two_t;
extern void release_ltedfapegproof__two_ptr(pointer_t x, type_actual_t ltedfapegproof__two);

extern bool_t equal_ltedfapegproof__two_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof__two_t T);

extern char * json_ltedfapegproof__two_ptr(pointer_t x,  actual_ltedfapegproof__two_t T);

actual_ltedfapegproof__two_t actual_ltedfapegproof__two(void);

extern ltedfapegproof__two_t update_ltedfapegproof__two_ltedfapegproof__parsetree_adt_index(ltedfapegproof__two_t x, uint8_t v);

extern ltedfapegproof__two_t update_ltedfapegproof__two_nt(ltedfapegproof__two_t x, uint8_t v);

extern ltedfapegproof__two_t update_ltedfapegproof__two_entry(ltedfapegproof__two_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof__two_t update_ltedfapegproof__two_subone(ltedfapegproof__two_t x, ltedfapegproof__parsetree_adt_t v);

extern ltedfapegproof__two_t update_ltedfapegproof__two_subtwo(ltedfapegproof__two_t x, ltedfapegproof__parsetree_adt_t v);


//parsetree_ord

struct ltedfapegproof_funtype_4_s;
        typedef struct ltedfapegproof_funtype_4_s * ltedfapegproof_funtype_4_t;

struct ltedfapegproof_funtype_4_ftbl_s {uint8_t (* fptr)(struct ltedfapegproof_funtype_4_s *, ltedfapegproof__parsetree_adt_t);
        uint8_t (* mptr)(struct ltedfapegproof_funtype_4_s *, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_4_s *);
        struct ltedfapegproof_funtype_4_s * (* cptr)(struct ltedfapegproof_funtype_4_s *);};
typedef struct ltedfapegproof_funtype_4_ftbl_s * ltedfapegproof_funtype_4_ftbl_t;

struct ltedfapegproof_funtype_4_hashentry_s {uint32_t keyhash; ltedfapegproof__parsetree_adt_t key; uint8_t value;}; 
typedef struct ltedfapegproof_funtype_4_hashentry_s ltedfapegproof_funtype_4_hashentry_t;

struct ltedfapegproof_funtype_4_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_4_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_4_htbl_s * ltedfapegproof_funtype_4_htbl_t;

struct ltedfapegproof_funtype_4_s {uint32_t count;
        ltedfapegproof_funtype_4_ftbl_t ftbl;
        ltedfapegproof_funtype_4_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_4_s * ltedfapegproof_funtype_4_t;

extern void release_ltedfapegproof_funtype_4(ltedfapegproof_funtype_4_t x);

extern ltedfapegproof_funtype_4_t copy_ltedfapegproof_funtype_4(ltedfapegproof_funtype_4_t x);

extern bool_t equal_ltedfapegproof_funtype_4(ltedfapegproof_funtype_4_t x, ltedfapegproof_funtype_4_t y);

extern char* json_ltedfapegproof_funtype_4(ltedfapegproof_funtype_4_t x);


//reduce_nat

struct ltedfapegproof_funtype_5_s;
        typedef struct ltedfapegproof_funtype_5_s * ltedfapegproof_funtype_5_t;

struct ltedfapegproof_funtype_5_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_5_s *, ltedfapegproof__parsetree_adt_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_5_s *, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_5_s *);
        struct ltedfapegproof_funtype_5_s * (* cptr)(struct ltedfapegproof_funtype_5_s *);};
typedef struct ltedfapegproof_funtype_5_ftbl_s * ltedfapegproof_funtype_5_ftbl_t;

struct ltedfapegproof_funtype_5_hashentry_s {uint32_t keyhash; ltedfapegproof__parsetree_adt_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_5_hashentry_s ltedfapegproof_funtype_5_hashentry_t;

struct ltedfapegproof_funtype_5_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_5_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_5_htbl_s * ltedfapegproof_funtype_5_htbl_t;

struct ltedfapegproof_funtype_5_s {uint32_t count;
        ltedfapegproof_funtype_5_ftbl_t ftbl;
        ltedfapegproof_funtype_5_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_5_s * ltedfapegproof_funtype_5_t;

extern void release_ltedfapegproof_funtype_5(ltedfapegproof_funtype_5_t x);

extern ltedfapegproof_funtype_5_t copy_ltedfapegproof_funtype_5(ltedfapegproof_funtype_5_t x);

extern bool_t equal_ltedfapegproof_funtype_5(ltedfapegproof_funtype_5_t x, ltedfapegproof_funtype_5_t y);

extern char* json_ltedfapegproof_funtype_5(ltedfapegproof_funtype_5_t x);


//reduce_nat

struct ltedfapegproof_record_6_s {
        uint32_t count; 
        uint8_t project_1;
        ltedfapeg__ent_adt_t project_2;};
typedef struct ltedfapegproof_record_6_s * ltedfapegproof_record_6_t;

extern ltedfapegproof_record_6_t new_ltedfapegproof_record_6(void);

extern void release_ltedfapegproof_record_6(ltedfapegproof_record_6_t x);

extern ltedfapegproof_record_6_t copy_ltedfapegproof_record_6(ltedfapegproof_record_6_t x);

extern bool_t equal_ltedfapegproof_record_6(ltedfapegproof_record_6_t x, ltedfapegproof_record_6_t y);
extern char * json_ltedfapegproof_record_6(ltedfapegproof_record_6_t x);

typedef struct actual_ltedfapegproof_record_6_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_6_t;
extern void release_ltedfapegproof_record_6_ptr(pointer_t x, type_actual_t ltedfapegproof_record_6);

extern bool_t equal_ltedfapegproof_record_6_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_6_t T);

extern char * json_ltedfapegproof_record_6_ptr(pointer_t x,  actual_ltedfapegproof_record_6_t T);

actual_ltedfapegproof_record_6_t actual_ltedfapegproof_record_6(void);

extern ltedfapegproof_record_6_t update_ltedfapegproof_record_6_project_1(ltedfapegproof_record_6_t x, uint8_t v);

extern ltedfapegproof_record_6_t update_ltedfapegproof_record_6_project_2(ltedfapegproof_record_6_t x, ltedfapeg__ent_adt_t v);


//reduce_nat

struct ltedfapegproof_funtype_7_s;
        typedef struct ltedfapegproof_funtype_7_s * ltedfapegproof_funtype_7_t;

struct ltedfapegproof_funtype_7_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_7_s *, ltedfapegproof_record_6_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_7_s *, uint8_t, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_7_s *);
        struct ltedfapegproof_funtype_7_s * (* cptr)(struct ltedfapegproof_funtype_7_s *);};
typedef struct ltedfapegproof_funtype_7_ftbl_s * ltedfapegproof_funtype_7_ftbl_t;

struct ltedfapegproof_funtype_7_hashentry_s {uint32_t keyhash; ltedfapegproof_record_6_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_7_hashentry_s ltedfapegproof_funtype_7_hashentry_t;

struct ltedfapegproof_funtype_7_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_7_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_7_htbl_s * ltedfapegproof_funtype_7_htbl_t;

struct ltedfapegproof_funtype_7_s {uint32_t count;
        ltedfapegproof_funtype_7_ftbl_t ftbl;
        ltedfapegproof_funtype_7_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_7_s * ltedfapegproof_funtype_7_t;

extern void release_ltedfapegproof_funtype_7(ltedfapegproof_funtype_7_t x);

extern ltedfapegproof_funtype_7_t copy_ltedfapegproof_funtype_7(ltedfapegproof_funtype_7_t x);

extern bool_t equal_ltedfapegproof_funtype_7(ltedfapegproof_funtype_7_t x, ltedfapegproof_funtype_7_t y);

extern char* json_ltedfapegproof_funtype_7(ltedfapegproof_funtype_7_t x);


//reduce_nat

struct ltedfapegproof_record_8_s {
        uint32_t count; 
        uint8_t project_1;
        ltedfapeg__ent_adt_t project_2;
        mpz_t project_3;};
typedef struct ltedfapegproof_record_8_s * ltedfapegproof_record_8_t;

extern ltedfapegproof_record_8_t new_ltedfapegproof_record_8(void);

extern void release_ltedfapegproof_record_8(ltedfapegproof_record_8_t x);

extern ltedfapegproof_record_8_t copy_ltedfapegproof_record_8(ltedfapegproof_record_8_t x);

extern bool_t equal_ltedfapegproof_record_8(ltedfapegproof_record_8_t x, ltedfapegproof_record_8_t y);
extern char * json_ltedfapegproof_record_8(ltedfapegproof_record_8_t x);

typedef struct actual_ltedfapegproof_record_8_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_8_t;
extern void release_ltedfapegproof_record_8_ptr(pointer_t x, type_actual_t ltedfapegproof_record_8);

extern bool_t equal_ltedfapegproof_record_8_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_8_t T);

extern char * json_ltedfapegproof_record_8_ptr(pointer_t x,  actual_ltedfapegproof_record_8_t T);

actual_ltedfapegproof_record_8_t actual_ltedfapegproof_record_8(void);

extern ltedfapegproof_record_8_t update_ltedfapegproof_record_8_project_1(ltedfapegproof_record_8_t x, uint8_t v);

extern ltedfapegproof_record_8_t update_ltedfapegproof_record_8_project_2(ltedfapegproof_record_8_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_8_t update_ltedfapegproof_record_8_project_3(ltedfapegproof_record_8_t x, mpz_ptr_t v);


//reduce_nat

struct ltedfapegproof_funtype_9_s;
        typedef struct ltedfapegproof_funtype_9_s * ltedfapegproof_funtype_9_t;

struct ltedfapegproof_funtype_9_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_9_s *, ltedfapegproof_record_8_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_9_s *, uint8_t, ltedfapeg__ent_adt_t, mpz_ptr_t);
        void (* rptr)(struct ltedfapegproof_funtype_9_s *);
        struct ltedfapegproof_funtype_9_s * (* cptr)(struct ltedfapegproof_funtype_9_s *);};
typedef struct ltedfapegproof_funtype_9_ftbl_s * ltedfapegproof_funtype_9_ftbl_t;

struct ltedfapegproof_funtype_9_hashentry_s {uint32_t keyhash; ltedfapegproof_record_8_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_9_hashentry_s ltedfapegproof_funtype_9_hashentry_t;

struct ltedfapegproof_funtype_9_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_9_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_9_htbl_s * ltedfapegproof_funtype_9_htbl_t;

struct ltedfapegproof_funtype_9_s {uint32_t count;
        ltedfapegproof_funtype_9_ftbl_t ftbl;
        ltedfapegproof_funtype_9_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_9_s * ltedfapegproof_funtype_9_t;

extern void release_ltedfapegproof_funtype_9(ltedfapegproof_funtype_9_t x);

extern ltedfapegproof_funtype_9_t copy_ltedfapegproof_funtype_9(ltedfapegproof_funtype_9_t x);

extern bool_t equal_ltedfapegproof_funtype_9(ltedfapegproof_funtype_9_t x, ltedfapegproof_funtype_9_t y);

extern char* json_ltedfapegproof_funtype_9(ltedfapegproof_funtype_9_t x);


//reduce_nat

struct ltedfapegproof_record_10_s {
        uint32_t count; 
        uint8_t project_1;
        ltedfapeg__ent_adt_t project_2;
        mpz_t project_3;
        mpz_t project_4;};
typedef struct ltedfapegproof_record_10_s * ltedfapegproof_record_10_t;

extern ltedfapegproof_record_10_t new_ltedfapegproof_record_10(void);

extern void release_ltedfapegproof_record_10(ltedfapegproof_record_10_t x);

extern ltedfapegproof_record_10_t copy_ltedfapegproof_record_10(ltedfapegproof_record_10_t x);

extern bool_t equal_ltedfapegproof_record_10(ltedfapegproof_record_10_t x, ltedfapegproof_record_10_t y);
extern char * json_ltedfapegproof_record_10(ltedfapegproof_record_10_t x);

typedef struct actual_ltedfapegproof_record_10_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_10_t;
extern void release_ltedfapegproof_record_10_ptr(pointer_t x, type_actual_t ltedfapegproof_record_10);

extern bool_t equal_ltedfapegproof_record_10_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_10_t T);

extern char * json_ltedfapegproof_record_10_ptr(pointer_t x,  actual_ltedfapegproof_record_10_t T);

actual_ltedfapegproof_record_10_t actual_ltedfapegproof_record_10(void);

extern ltedfapegproof_record_10_t update_ltedfapegproof_record_10_project_1(ltedfapegproof_record_10_t x, uint8_t v);

extern ltedfapegproof_record_10_t update_ltedfapegproof_record_10_project_2(ltedfapegproof_record_10_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_10_t update_ltedfapegproof_record_10_project_3(ltedfapegproof_record_10_t x, mpz_ptr_t v);

extern ltedfapegproof_record_10_t update_ltedfapegproof_record_10_project_4(ltedfapegproof_record_10_t x, mpz_ptr_t v);


//reduce_nat

struct ltedfapegproof_funtype_11_s;
        typedef struct ltedfapegproof_funtype_11_s * ltedfapegproof_funtype_11_t;

struct ltedfapegproof_funtype_11_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_11_s *, ltedfapegproof_record_10_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_11_s *, uint8_t, ltedfapeg__ent_adt_t, mpz_ptr_t, mpz_ptr_t);
        void (* rptr)(struct ltedfapegproof_funtype_11_s *);
        struct ltedfapegproof_funtype_11_s * (* cptr)(struct ltedfapegproof_funtype_11_s *);};
typedef struct ltedfapegproof_funtype_11_ftbl_s * ltedfapegproof_funtype_11_ftbl_t;

struct ltedfapegproof_funtype_11_hashentry_s {uint32_t keyhash; ltedfapegproof_record_10_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_11_hashentry_s ltedfapegproof_funtype_11_hashentry_t;

struct ltedfapegproof_funtype_11_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_11_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_11_htbl_s * ltedfapegproof_funtype_11_htbl_t;

struct ltedfapegproof_funtype_11_s {uint32_t count;
        ltedfapegproof_funtype_11_ftbl_t ftbl;
        ltedfapegproof_funtype_11_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_11_s * ltedfapegproof_funtype_11_t;

extern void release_ltedfapegproof_funtype_11(ltedfapegproof_funtype_11_t x);

extern ltedfapegproof_funtype_11_t copy_ltedfapegproof_funtype_11(ltedfapegproof_funtype_11_t x);

extern bool_t equal_ltedfapegproof_funtype_11(ltedfapegproof_funtype_11_t x, ltedfapegproof_funtype_11_t y);

extern char* json_ltedfapegproof_funtype_11(ltedfapegproof_funtype_11_t x);




struct ltedfapegproof_closure_12_s;
        typedef struct ltedfapegproof_closure_12_s * ltedfapegproof_closure_12_t;

struct ltedfapegproof_closure_12_s {uint32_t count;
         ltedfapegproof_funtype_5_ftbl_t ftbl;
         ltedfapegproof_funtype_5_htbl_t htbl;
        ltedfapegproof_funtype_9_t fvar_1;
        ltedfapegproof_funtype_11_t fvar_2;
        ltedfapegproof_funtype_7_t fvar_3;};

mpz_ptr_t f_ltedfapegproof_closure_12(struct ltedfapegproof_closure_12_s * closure, ltedfapegproof__parsetree_adt_t bvar);

mpz_ptr_t m_ltedfapegproof_closure_12(struct ltedfapegproof_closure_12_s * closure, ltedfapegproof__parsetree_adt_t bvar);

extern mpz_ptr_t h_ltedfapegproof_closure_12(ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_funtype_9_t ivar_3, ltedfapegproof_funtype_11_t ivar_5, ltedfapegproof_funtype_7_t ivar_1);

ltedfapegproof_closure_12_t new_ltedfapegproof_closure_12(void);

void release_ltedfapegproof_closure_12(ltedfapegproof_funtype_5_t closure);

ltedfapegproof_closure_12_t copy_ltedfapegproof_closure_12(ltedfapegproof_closure_12_t x);


//REDUCE_nat

struct ltedfapegproof_record_13_s {
        uint32_t count; 
        uint8_t project_1;
        ltedfapeg__ent_adt_t project_2;
        ltedfapegproof__parsetree_adt_t project_3;};
typedef struct ltedfapegproof_record_13_s * ltedfapegproof_record_13_t;

extern ltedfapegproof_record_13_t new_ltedfapegproof_record_13(void);

extern void release_ltedfapegproof_record_13(ltedfapegproof_record_13_t x);

extern ltedfapegproof_record_13_t copy_ltedfapegproof_record_13(ltedfapegproof_record_13_t x);

extern bool_t equal_ltedfapegproof_record_13(ltedfapegproof_record_13_t x, ltedfapegproof_record_13_t y);
extern char * json_ltedfapegproof_record_13(ltedfapegproof_record_13_t x);

typedef struct actual_ltedfapegproof_record_13_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_13_t;
extern void release_ltedfapegproof_record_13_ptr(pointer_t x, type_actual_t ltedfapegproof_record_13);

extern bool_t equal_ltedfapegproof_record_13_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_13_t T);

extern char * json_ltedfapegproof_record_13_ptr(pointer_t x,  actual_ltedfapegproof_record_13_t T);

actual_ltedfapegproof_record_13_t actual_ltedfapegproof_record_13(void);

extern ltedfapegproof_record_13_t update_ltedfapegproof_record_13_project_1(ltedfapegproof_record_13_t x, uint8_t v);

extern ltedfapegproof_record_13_t update_ltedfapegproof_record_13_project_2(ltedfapegproof_record_13_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_13_t update_ltedfapegproof_record_13_project_3(ltedfapegproof_record_13_t x, ltedfapegproof__parsetree_adt_t v);


//REDUCE_nat

struct ltedfapegproof_funtype_14_s;
        typedef struct ltedfapegproof_funtype_14_s * ltedfapegproof_funtype_14_t;

struct ltedfapegproof_funtype_14_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_14_s *, ltedfapegproof_record_13_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_14_s *, uint8_t, ltedfapeg__ent_adt_t, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_14_s *);
        struct ltedfapegproof_funtype_14_s * (* cptr)(struct ltedfapegproof_funtype_14_s *);};
typedef struct ltedfapegproof_funtype_14_ftbl_s * ltedfapegproof_funtype_14_ftbl_t;

struct ltedfapegproof_funtype_14_hashentry_s {uint32_t keyhash; ltedfapegproof_record_13_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_14_hashentry_s ltedfapegproof_funtype_14_hashentry_t;

struct ltedfapegproof_funtype_14_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_14_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_14_htbl_s * ltedfapegproof_funtype_14_htbl_t;

struct ltedfapegproof_funtype_14_s {uint32_t count;
        ltedfapegproof_funtype_14_ftbl_t ftbl;
        ltedfapegproof_funtype_14_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_14_s * ltedfapegproof_funtype_14_t;

extern void release_ltedfapegproof_funtype_14(ltedfapegproof_funtype_14_t x);

extern ltedfapegproof_funtype_14_t copy_ltedfapegproof_funtype_14(ltedfapegproof_funtype_14_t x);

extern bool_t equal_ltedfapegproof_funtype_14(ltedfapegproof_funtype_14_t x, ltedfapegproof_funtype_14_t y);

extern char* json_ltedfapegproof_funtype_14(ltedfapegproof_funtype_14_t x);


//REDUCE_nat

struct ltedfapegproof_record_15_s {
        uint32_t count; 
        uint8_t project_1;
        ltedfapeg__ent_adt_t project_2;
        mpz_t project_3;
        ltedfapegproof__parsetree_adt_t project_4;};
typedef struct ltedfapegproof_record_15_s * ltedfapegproof_record_15_t;

extern ltedfapegproof_record_15_t new_ltedfapegproof_record_15(void);

extern void release_ltedfapegproof_record_15(ltedfapegproof_record_15_t x);

extern ltedfapegproof_record_15_t copy_ltedfapegproof_record_15(ltedfapegproof_record_15_t x);

extern bool_t equal_ltedfapegproof_record_15(ltedfapegproof_record_15_t x, ltedfapegproof_record_15_t y);
extern char * json_ltedfapegproof_record_15(ltedfapegproof_record_15_t x);

typedef struct actual_ltedfapegproof_record_15_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_15_t;
extern void release_ltedfapegproof_record_15_ptr(pointer_t x, type_actual_t ltedfapegproof_record_15);

extern bool_t equal_ltedfapegproof_record_15_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_15_t T);

extern char * json_ltedfapegproof_record_15_ptr(pointer_t x,  actual_ltedfapegproof_record_15_t T);

actual_ltedfapegproof_record_15_t actual_ltedfapegproof_record_15(void);

extern ltedfapegproof_record_15_t update_ltedfapegproof_record_15_project_1(ltedfapegproof_record_15_t x, uint8_t v);

extern ltedfapegproof_record_15_t update_ltedfapegproof_record_15_project_2(ltedfapegproof_record_15_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_15_t update_ltedfapegproof_record_15_project_3(ltedfapegproof_record_15_t x, mpz_ptr_t v);

extern ltedfapegproof_record_15_t update_ltedfapegproof_record_15_project_4(ltedfapegproof_record_15_t x, ltedfapegproof__parsetree_adt_t v);


//REDUCE_nat

struct ltedfapegproof_funtype_16_s;
        typedef struct ltedfapegproof_funtype_16_s * ltedfapegproof_funtype_16_t;

struct ltedfapegproof_funtype_16_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_16_s *, ltedfapegproof_record_15_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_16_s *, uint8_t, ltedfapeg__ent_adt_t, mpz_ptr_t, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_16_s *);
        struct ltedfapegproof_funtype_16_s * (* cptr)(struct ltedfapegproof_funtype_16_s *);};
typedef struct ltedfapegproof_funtype_16_ftbl_s * ltedfapegproof_funtype_16_ftbl_t;

struct ltedfapegproof_funtype_16_hashentry_s {uint32_t keyhash; ltedfapegproof_record_15_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_16_hashentry_s ltedfapegproof_funtype_16_hashentry_t;

struct ltedfapegproof_funtype_16_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_16_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_16_htbl_s * ltedfapegproof_funtype_16_htbl_t;

struct ltedfapegproof_funtype_16_s {uint32_t count;
        ltedfapegproof_funtype_16_ftbl_t ftbl;
        ltedfapegproof_funtype_16_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_16_s * ltedfapegproof_funtype_16_t;

extern void release_ltedfapegproof_funtype_16(ltedfapegproof_funtype_16_t x);

extern ltedfapegproof_funtype_16_t copy_ltedfapegproof_funtype_16(ltedfapegproof_funtype_16_t x);

extern bool_t equal_ltedfapegproof_funtype_16(ltedfapegproof_funtype_16_t x, ltedfapegproof_funtype_16_t y);

extern char* json_ltedfapegproof_funtype_16(ltedfapegproof_funtype_16_t x);


//REDUCE_nat

struct ltedfapegproof_record_17_s {
        uint32_t count; 
        uint8_t project_1;
        ltedfapeg__ent_adt_t project_2;
        mpz_t project_3;
        mpz_t project_4;
        ltedfapegproof__parsetree_adt_t project_5;};
typedef struct ltedfapegproof_record_17_s * ltedfapegproof_record_17_t;

extern ltedfapegproof_record_17_t new_ltedfapegproof_record_17(void);

extern void release_ltedfapegproof_record_17(ltedfapegproof_record_17_t x);

extern ltedfapegproof_record_17_t copy_ltedfapegproof_record_17(ltedfapegproof_record_17_t x);

extern bool_t equal_ltedfapegproof_record_17(ltedfapegproof_record_17_t x, ltedfapegproof_record_17_t y);
extern char * json_ltedfapegproof_record_17(ltedfapegproof_record_17_t x);

typedef struct actual_ltedfapegproof_record_17_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_17_t;
extern void release_ltedfapegproof_record_17_ptr(pointer_t x, type_actual_t ltedfapegproof_record_17);

extern bool_t equal_ltedfapegproof_record_17_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_17_t T);

extern char * json_ltedfapegproof_record_17_ptr(pointer_t x,  actual_ltedfapegproof_record_17_t T);

actual_ltedfapegproof_record_17_t actual_ltedfapegproof_record_17(void);

extern ltedfapegproof_record_17_t update_ltedfapegproof_record_17_project_1(ltedfapegproof_record_17_t x, uint8_t v);

extern ltedfapegproof_record_17_t update_ltedfapegproof_record_17_project_2(ltedfapegproof_record_17_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_17_t update_ltedfapegproof_record_17_project_3(ltedfapegproof_record_17_t x, mpz_ptr_t v);

extern ltedfapegproof_record_17_t update_ltedfapegproof_record_17_project_4(ltedfapegproof_record_17_t x, mpz_ptr_t v);

extern ltedfapegproof_record_17_t update_ltedfapegproof_record_17_project_5(ltedfapegproof_record_17_t x, ltedfapegproof__parsetree_adt_t v);


//REDUCE_nat

struct ltedfapegproof_funtype_18_s;
        typedef struct ltedfapegproof_funtype_18_s * ltedfapegproof_funtype_18_t;

struct ltedfapegproof_funtype_18_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_18_s *, ltedfapegproof_record_17_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_18_s *, uint8_t, ltedfapeg__ent_adt_t, mpz_ptr_t, mpz_ptr_t, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_18_s *);
        struct ltedfapegproof_funtype_18_s * (* cptr)(struct ltedfapegproof_funtype_18_s *);};
typedef struct ltedfapegproof_funtype_18_ftbl_s * ltedfapegproof_funtype_18_ftbl_t;

struct ltedfapegproof_funtype_18_hashentry_s {uint32_t keyhash; ltedfapegproof_record_17_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_18_hashentry_s ltedfapegproof_funtype_18_hashentry_t;

struct ltedfapegproof_funtype_18_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_18_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_18_htbl_s * ltedfapegproof_funtype_18_htbl_t;

struct ltedfapegproof_funtype_18_s {uint32_t count;
        ltedfapegproof_funtype_18_ftbl_t ftbl;
        ltedfapegproof_funtype_18_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_18_s * ltedfapegproof_funtype_18_t;

extern void release_ltedfapegproof_funtype_18(ltedfapegproof_funtype_18_t x);

extern ltedfapegproof_funtype_18_t copy_ltedfapegproof_funtype_18(ltedfapegproof_funtype_18_t x);

extern bool_t equal_ltedfapegproof_funtype_18(ltedfapegproof_funtype_18_t x, ltedfapegproof_funtype_18_t y);

extern char* json_ltedfapegproof_funtype_18(ltedfapegproof_funtype_18_t x);




struct ltedfapegproof_closure_19_s;
        typedef struct ltedfapegproof_closure_19_s * ltedfapegproof_closure_19_t;

struct ltedfapegproof_closure_19_s {uint32_t count;
         ltedfapegproof_funtype_5_ftbl_t ftbl;
         ltedfapegproof_funtype_5_htbl_t htbl;
        ltedfapegproof_funtype_16_t fvar_1;
        ltedfapegproof_funtype_18_t fvar_2;
        ltedfapegproof_funtype_14_t fvar_3;};

mpz_ptr_t f_ltedfapegproof_closure_19(struct ltedfapegproof_closure_19_s * closure, ltedfapegproof__parsetree_adt_t bvar);

mpz_ptr_t m_ltedfapegproof_closure_19(struct ltedfapegproof_closure_19_s * closure, ltedfapegproof__parsetree_adt_t bvar);

extern mpz_ptr_t h_ltedfapegproof_closure_19(ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_funtype_16_t ivar_3, ltedfapegproof_funtype_18_t ivar_5, ltedfapegproof_funtype_14_t ivar_1);

ltedfapegproof_closure_19_t new_ltedfapegproof_closure_19(void);

void release_ltedfapegproof_closure_19(ltedfapegproof_funtype_5_t closure);

ltedfapegproof_closure_19_t copy_ltedfapegproof_closure_19(ltedfapegproof_closure_19_t x);


//reduce_ordinal

struct ltedfapegproof_funtype_20_s;
        typedef struct ltedfapegproof_funtype_20_s * ltedfapegproof_funtype_20_t;

struct ltedfapegproof_funtype_20_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_20_s *, ltedfapegproof__parsetree_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_20_s *, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_20_s *);
        struct ltedfapegproof_funtype_20_s * (* cptr)(struct ltedfapegproof_funtype_20_s *);};
typedef struct ltedfapegproof_funtype_20_ftbl_s * ltedfapegproof_funtype_20_ftbl_t;

struct ltedfapegproof_funtype_20_hashentry_s {uint32_t keyhash; ltedfapegproof__parsetree_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_20_hashentry_s ltedfapegproof_funtype_20_hashentry_t;

struct ltedfapegproof_funtype_20_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_20_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_20_htbl_s * ltedfapegproof_funtype_20_htbl_t;

struct ltedfapegproof_funtype_20_s {uint32_t count;
        ltedfapegproof_funtype_20_ftbl_t ftbl;
        ltedfapegproof_funtype_20_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_20_s * ltedfapegproof_funtype_20_t;

extern void release_ltedfapegproof_funtype_20(ltedfapegproof_funtype_20_t x);

extern ltedfapegproof_funtype_20_t copy_ltedfapegproof_funtype_20(ltedfapegproof_funtype_20_t x);

extern bool_t equal_ltedfapegproof_funtype_20(ltedfapegproof_funtype_20_t x, ltedfapegproof_funtype_20_t y);

extern char* json_ltedfapegproof_funtype_20(ltedfapegproof_funtype_20_t x);


//reduce_ordinal

struct ltedfapegproof_funtype_21_s;
        typedef struct ltedfapegproof_funtype_21_s * ltedfapegproof_funtype_21_t;

struct ltedfapegproof_funtype_21_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_21_s *, ltedfapegproof_record_6_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_21_s *, uint8_t, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_21_s *);
        struct ltedfapegproof_funtype_21_s * (* cptr)(struct ltedfapegproof_funtype_21_s *);};
typedef struct ltedfapegproof_funtype_21_ftbl_s * ltedfapegproof_funtype_21_ftbl_t;

struct ltedfapegproof_funtype_21_hashentry_s {uint32_t keyhash; ltedfapegproof_record_6_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_21_hashentry_s ltedfapegproof_funtype_21_hashentry_t;

struct ltedfapegproof_funtype_21_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_21_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_21_htbl_s * ltedfapegproof_funtype_21_htbl_t;

struct ltedfapegproof_funtype_21_s {uint32_t count;
        ltedfapegproof_funtype_21_ftbl_t ftbl;
        ltedfapegproof_funtype_21_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_21_s * ltedfapegproof_funtype_21_t;

extern void release_ltedfapegproof_funtype_21(ltedfapegproof_funtype_21_t x);

extern ltedfapegproof_funtype_21_t copy_ltedfapegproof_funtype_21(ltedfapegproof_funtype_21_t x);

extern bool_t equal_ltedfapegproof_funtype_21(ltedfapegproof_funtype_21_t x, ltedfapegproof_funtype_21_t y);

extern char* json_ltedfapegproof_funtype_21(ltedfapegproof_funtype_21_t x);


//reduce_ordinal

struct ltedfapegproof_record_22_s {
        uint32_t count; 
        uint8_t project_1;
        ltedfapeg__ent_adt_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;};
typedef struct ltedfapegproof_record_22_s * ltedfapegproof_record_22_t;

extern ltedfapegproof_record_22_t new_ltedfapegproof_record_22(void);

extern void release_ltedfapegproof_record_22(ltedfapegproof_record_22_t x);

extern ltedfapegproof_record_22_t copy_ltedfapegproof_record_22(ltedfapegproof_record_22_t x);

extern bool_t equal_ltedfapegproof_record_22(ltedfapegproof_record_22_t x, ltedfapegproof_record_22_t y);
extern char * json_ltedfapegproof_record_22(ltedfapegproof_record_22_t x);

typedef struct actual_ltedfapegproof_record_22_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_22_t;
extern void release_ltedfapegproof_record_22_ptr(pointer_t x, type_actual_t ltedfapegproof_record_22);

extern bool_t equal_ltedfapegproof_record_22_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_22_t T);

extern char * json_ltedfapegproof_record_22_ptr(pointer_t x,  actual_ltedfapegproof_record_22_t T);

actual_ltedfapegproof_record_22_t actual_ltedfapegproof_record_22(void);

extern ltedfapegproof_record_22_t update_ltedfapegproof_record_22_project_1(ltedfapegproof_record_22_t x, uint8_t v);

extern ltedfapegproof_record_22_t update_ltedfapegproof_record_22_project_2(ltedfapegproof_record_22_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_22_t update_ltedfapegproof_record_22_project_3(ltedfapegproof_record_22_t x, ordstruct_adt__ordstruct_adt_t v);


//reduce_ordinal

struct ltedfapegproof_funtype_23_s;
        typedef struct ltedfapegproof_funtype_23_s * ltedfapegproof_funtype_23_t;

struct ltedfapegproof_funtype_23_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_23_s *, ltedfapegproof_record_22_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_23_s *, uint8_t, ltedfapeg__ent_adt_t, ordstruct_adt__ordstruct_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_23_s *);
        struct ltedfapegproof_funtype_23_s * (* cptr)(struct ltedfapegproof_funtype_23_s *);};
typedef struct ltedfapegproof_funtype_23_ftbl_s * ltedfapegproof_funtype_23_ftbl_t;

struct ltedfapegproof_funtype_23_hashentry_s {uint32_t keyhash; ltedfapegproof_record_22_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_23_hashentry_s ltedfapegproof_funtype_23_hashentry_t;

struct ltedfapegproof_funtype_23_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_23_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_23_htbl_s * ltedfapegproof_funtype_23_htbl_t;

struct ltedfapegproof_funtype_23_s {uint32_t count;
        ltedfapegproof_funtype_23_ftbl_t ftbl;
        ltedfapegproof_funtype_23_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_23_s * ltedfapegproof_funtype_23_t;

extern void release_ltedfapegproof_funtype_23(ltedfapegproof_funtype_23_t x);

extern ltedfapegproof_funtype_23_t copy_ltedfapegproof_funtype_23(ltedfapegproof_funtype_23_t x);

extern bool_t equal_ltedfapegproof_funtype_23(ltedfapegproof_funtype_23_t x, ltedfapegproof_funtype_23_t y);

extern char* json_ltedfapegproof_funtype_23(ltedfapegproof_funtype_23_t x);


//reduce_ordinal

struct ltedfapegproof_record_24_s {
        uint32_t count; 
        uint8_t project_1;
        ltedfapeg__ent_adt_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;
        ordstruct_adt__ordstruct_adt_t project_4;};
typedef struct ltedfapegproof_record_24_s * ltedfapegproof_record_24_t;

extern ltedfapegproof_record_24_t new_ltedfapegproof_record_24(void);

extern void release_ltedfapegproof_record_24(ltedfapegproof_record_24_t x);

extern ltedfapegproof_record_24_t copy_ltedfapegproof_record_24(ltedfapegproof_record_24_t x);

extern bool_t equal_ltedfapegproof_record_24(ltedfapegproof_record_24_t x, ltedfapegproof_record_24_t y);
extern char * json_ltedfapegproof_record_24(ltedfapegproof_record_24_t x);

typedef struct actual_ltedfapegproof_record_24_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_24_t;
extern void release_ltedfapegproof_record_24_ptr(pointer_t x, type_actual_t ltedfapegproof_record_24);

extern bool_t equal_ltedfapegproof_record_24_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_24_t T);

extern char * json_ltedfapegproof_record_24_ptr(pointer_t x,  actual_ltedfapegproof_record_24_t T);

actual_ltedfapegproof_record_24_t actual_ltedfapegproof_record_24(void);

extern ltedfapegproof_record_24_t update_ltedfapegproof_record_24_project_1(ltedfapegproof_record_24_t x, uint8_t v);

extern ltedfapegproof_record_24_t update_ltedfapegproof_record_24_project_2(ltedfapegproof_record_24_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_24_t update_ltedfapegproof_record_24_project_3(ltedfapegproof_record_24_t x, ordstruct_adt__ordstruct_adt_t v);

extern ltedfapegproof_record_24_t update_ltedfapegproof_record_24_project_4(ltedfapegproof_record_24_t x, ordstruct_adt__ordstruct_adt_t v);


//reduce_ordinal

struct ltedfapegproof_funtype_25_s;
        typedef struct ltedfapegproof_funtype_25_s * ltedfapegproof_funtype_25_t;

struct ltedfapegproof_funtype_25_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_25_s *, ltedfapegproof_record_24_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_25_s *, uint8_t, ltedfapeg__ent_adt_t, ordstruct_adt__ordstruct_adt_t, ordstruct_adt__ordstruct_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_25_s *);
        struct ltedfapegproof_funtype_25_s * (* cptr)(struct ltedfapegproof_funtype_25_s *);};
typedef struct ltedfapegproof_funtype_25_ftbl_s * ltedfapegproof_funtype_25_ftbl_t;

struct ltedfapegproof_funtype_25_hashentry_s {uint32_t keyhash; ltedfapegproof_record_24_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_25_hashentry_s ltedfapegproof_funtype_25_hashentry_t;

struct ltedfapegproof_funtype_25_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_25_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_25_htbl_s * ltedfapegproof_funtype_25_htbl_t;

struct ltedfapegproof_funtype_25_s {uint32_t count;
        ltedfapegproof_funtype_25_ftbl_t ftbl;
        ltedfapegproof_funtype_25_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_25_s * ltedfapegproof_funtype_25_t;

extern void release_ltedfapegproof_funtype_25(ltedfapegproof_funtype_25_t x);

extern ltedfapegproof_funtype_25_t copy_ltedfapegproof_funtype_25(ltedfapegproof_funtype_25_t x);

extern bool_t equal_ltedfapegproof_funtype_25(ltedfapegproof_funtype_25_t x, ltedfapegproof_funtype_25_t y);

extern char* json_ltedfapegproof_funtype_25(ltedfapegproof_funtype_25_t x);




struct ltedfapegproof_closure_26_s;
        typedef struct ltedfapegproof_closure_26_s * ltedfapegproof_closure_26_t;

struct ltedfapegproof_closure_26_s {uint32_t count;
         ltedfapegproof_funtype_20_ftbl_t ftbl;
         ltedfapegproof_funtype_20_htbl_t htbl;
        ltedfapegproof_funtype_23_t fvar_1;
        ltedfapegproof_funtype_25_t fvar_2;
        ltedfapegproof_funtype_21_t fvar_3;};

ordstruct_adt__ordstruct_adt_t f_ltedfapegproof_closure_26(struct ltedfapegproof_closure_26_s * closure, ltedfapegproof__parsetree_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltedfapegproof_closure_26(struct ltedfapegproof_closure_26_s * closure, ltedfapegproof__parsetree_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltedfapegproof_closure_26(ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_funtype_23_t ivar_3, ltedfapegproof_funtype_25_t ivar_5, ltedfapegproof_funtype_21_t ivar_1);

ltedfapegproof_closure_26_t new_ltedfapegproof_closure_26(void);

void release_ltedfapegproof_closure_26(ltedfapegproof_funtype_20_t closure);

ltedfapegproof_closure_26_t copy_ltedfapegproof_closure_26(ltedfapegproof_closure_26_t x);


//REDUCE_ordinal

struct ltedfapegproof_funtype_27_s;
        typedef struct ltedfapegproof_funtype_27_s * ltedfapegproof_funtype_27_t;

struct ltedfapegproof_funtype_27_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_27_s *, ltedfapegproof_record_13_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_27_s *, uint8_t, ltedfapeg__ent_adt_t, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_27_s *);
        struct ltedfapegproof_funtype_27_s * (* cptr)(struct ltedfapegproof_funtype_27_s *);};
typedef struct ltedfapegproof_funtype_27_ftbl_s * ltedfapegproof_funtype_27_ftbl_t;

struct ltedfapegproof_funtype_27_hashentry_s {uint32_t keyhash; ltedfapegproof_record_13_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_27_hashentry_s ltedfapegproof_funtype_27_hashentry_t;

struct ltedfapegproof_funtype_27_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_27_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_27_htbl_s * ltedfapegproof_funtype_27_htbl_t;

struct ltedfapegproof_funtype_27_s {uint32_t count;
        ltedfapegproof_funtype_27_ftbl_t ftbl;
        ltedfapegproof_funtype_27_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_27_s * ltedfapegproof_funtype_27_t;

extern void release_ltedfapegproof_funtype_27(ltedfapegproof_funtype_27_t x);

extern ltedfapegproof_funtype_27_t copy_ltedfapegproof_funtype_27(ltedfapegproof_funtype_27_t x);

extern bool_t equal_ltedfapegproof_funtype_27(ltedfapegproof_funtype_27_t x, ltedfapegproof_funtype_27_t y);

extern char* json_ltedfapegproof_funtype_27(ltedfapegproof_funtype_27_t x);


//REDUCE_ordinal

struct ltedfapegproof_record_28_s {
        uint32_t count; 
        uint8_t project_1;
        ltedfapeg__ent_adt_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;
        ltedfapegproof__parsetree_adt_t project_4;};
typedef struct ltedfapegproof_record_28_s * ltedfapegproof_record_28_t;

extern ltedfapegproof_record_28_t new_ltedfapegproof_record_28(void);

extern void release_ltedfapegproof_record_28(ltedfapegproof_record_28_t x);

extern ltedfapegproof_record_28_t copy_ltedfapegproof_record_28(ltedfapegproof_record_28_t x);

extern bool_t equal_ltedfapegproof_record_28(ltedfapegproof_record_28_t x, ltedfapegproof_record_28_t y);
extern char * json_ltedfapegproof_record_28(ltedfapegproof_record_28_t x);

typedef struct actual_ltedfapegproof_record_28_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_28_t;
extern void release_ltedfapegproof_record_28_ptr(pointer_t x, type_actual_t ltedfapegproof_record_28);

extern bool_t equal_ltedfapegproof_record_28_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_28_t T);

extern char * json_ltedfapegproof_record_28_ptr(pointer_t x,  actual_ltedfapegproof_record_28_t T);

actual_ltedfapegproof_record_28_t actual_ltedfapegproof_record_28(void);

extern ltedfapegproof_record_28_t update_ltedfapegproof_record_28_project_1(ltedfapegproof_record_28_t x, uint8_t v);

extern ltedfapegproof_record_28_t update_ltedfapegproof_record_28_project_2(ltedfapegproof_record_28_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_28_t update_ltedfapegproof_record_28_project_3(ltedfapegproof_record_28_t x, ordstruct_adt__ordstruct_adt_t v);

extern ltedfapegproof_record_28_t update_ltedfapegproof_record_28_project_4(ltedfapegproof_record_28_t x, ltedfapegproof__parsetree_adt_t v);


//REDUCE_ordinal

struct ltedfapegproof_funtype_29_s;
        typedef struct ltedfapegproof_funtype_29_s * ltedfapegproof_funtype_29_t;

struct ltedfapegproof_funtype_29_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_29_s *, ltedfapegproof_record_28_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_29_s *, uint8_t, ltedfapeg__ent_adt_t, ordstruct_adt__ordstruct_adt_t, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_29_s *);
        struct ltedfapegproof_funtype_29_s * (* cptr)(struct ltedfapegproof_funtype_29_s *);};
typedef struct ltedfapegproof_funtype_29_ftbl_s * ltedfapegproof_funtype_29_ftbl_t;

struct ltedfapegproof_funtype_29_hashentry_s {uint32_t keyhash; ltedfapegproof_record_28_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_29_hashentry_s ltedfapegproof_funtype_29_hashentry_t;

struct ltedfapegproof_funtype_29_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_29_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_29_htbl_s * ltedfapegproof_funtype_29_htbl_t;

struct ltedfapegproof_funtype_29_s {uint32_t count;
        ltedfapegproof_funtype_29_ftbl_t ftbl;
        ltedfapegproof_funtype_29_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_29_s * ltedfapegproof_funtype_29_t;

extern void release_ltedfapegproof_funtype_29(ltedfapegproof_funtype_29_t x);

extern ltedfapegproof_funtype_29_t copy_ltedfapegproof_funtype_29(ltedfapegproof_funtype_29_t x);

extern bool_t equal_ltedfapegproof_funtype_29(ltedfapegproof_funtype_29_t x, ltedfapegproof_funtype_29_t y);

extern char* json_ltedfapegproof_funtype_29(ltedfapegproof_funtype_29_t x);


//REDUCE_ordinal

struct ltedfapegproof_record_30_s {
        uint32_t count; 
        uint8_t project_1;
        ltedfapeg__ent_adt_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;
        ordstruct_adt__ordstruct_adt_t project_4;
        ltedfapegproof__parsetree_adt_t project_5;};
typedef struct ltedfapegproof_record_30_s * ltedfapegproof_record_30_t;

extern ltedfapegproof_record_30_t new_ltedfapegproof_record_30(void);

extern void release_ltedfapegproof_record_30(ltedfapegproof_record_30_t x);

extern ltedfapegproof_record_30_t copy_ltedfapegproof_record_30(ltedfapegproof_record_30_t x);

extern bool_t equal_ltedfapegproof_record_30(ltedfapegproof_record_30_t x, ltedfapegproof_record_30_t y);
extern char * json_ltedfapegproof_record_30(ltedfapegproof_record_30_t x);

typedef struct actual_ltedfapegproof_record_30_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_30_t;
extern void release_ltedfapegproof_record_30_ptr(pointer_t x, type_actual_t ltedfapegproof_record_30);

extern bool_t equal_ltedfapegproof_record_30_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_30_t T);

extern char * json_ltedfapegproof_record_30_ptr(pointer_t x,  actual_ltedfapegproof_record_30_t T);

actual_ltedfapegproof_record_30_t actual_ltedfapegproof_record_30(void);

extern ltedfapegproof_record_30_t update_ltedfapegproof_record_30_project_1(ltedfapegproof_record_30_t x, uint8_t v);

extern ltedfapegproof_record_30_t update_ltedfapegproof_record_30_project_2(ltedfapegproof_record_30_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_30_t update_ltedfapegproof_record_30_project_3(ltedfapegproof_record_30_t x, ordstruct_adt__ordstruct_adt_t v);

extern ltedfapegproof_record_30_t update_ltedfapegproof_record_30_project_4(ltedfapegproof_record_30_t x, ordstruct_adt__ordstruct_adt_t v);

extern ltedfapegproof_record_30_t update_ltedfapegproof_record_30_project_5(ltedfapegproof_record_30_t x, ltedfapegproof__parsetree_adt_t v);


//REDUCE_ordinal

struct ltedfapegproof_funtype_31_s;
        typedef struct ltedfapegproof_funtype_31_s * ltedfapegproof_funtype_31_t;

struct ltedfapegproof_funtype_31_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_31_s *, ltedfapegproof_record_30_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_31_s *, uint8_t, ltedfapeg__ent_adt_t, ordstruct_adt__ordstruct_adt_t, ordstruct_adt__ordstruct_adt_t, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_31_s *);
        struct ltedfapegproof_funtype_31_s * (* cptr)(struct ltedfapegproof_funtype_31_s *);};
typedef struct ltedfapegproof_funtype_31_ftbl_s * ltedfapegproof_funtype_31_ftbl_t;

struct ltedfapegproof_funtype_31_hashentry_s {uint32_t keyhash; ltedfapegproof_record_30_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_31_hashentry_s ltedfapegproof_funtype_31_hashentry_t;

struct ltedfapegproof_funtype_31_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_31_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_31_htbl_s * ltedfapegproof_funtype_31_htbl_t;

struct ltedfapegproof_funtype_31_s {uint32_t count;
        ltedfapegproof_funtype_31_ftbl_t ftbl;
        ltedfapegproof_funtype_31_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_31_s * ltedfapegproof_funtype_31_t;

extern void release_ltedfapegproof_funtype_31(ltedfapegproof_funtype_31_t x);

extern ltedfapegproof_funtype_31_t copy_ltedfapegproof_funtype_31(ltedfapegproof_funtype_31_t x);

extern bool_t equal_ltedfapegproof_funtype_31(ltedfapegproof_funtype_31_t x, ltedfapegproof_funtype_31_t y);

extern char* json_ltedfapegproof_funtype_31(ltedfapegproof_funtype_31_t x);




struct ltedfapegproof_closure_32_s;
        typedef struct ltedfapegproof_closure_32_s * ltedfapegproof_closure_32_t;

struct ltedfapegproof_closure_32_s {uint32_t count;
         ltedfapegproof_funtype_20_ftbl_t ftbl;
         ltedfapegproof_funtype_20_htbl_t htbl;
        ltedfapegproof_funtype_29_t fvar_1;
        ltedfapegproof_funtype_31_t fvar_2;
        ltedfapegproof_funtype_27_t fvar_3;};

ordstruct_adt__ordstruct_adt_t f_ltedfapegproof_closure_32(struct ltedfapegproof_closure_32_s * closure, ltedfapegproof__parsetree_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltedfapegproof_closure_32(struct ltedfapegproof_closure_32_s * closure, ltedfapegproof__parsetree_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltedfapegproof_closure_32(ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_funtype_29_t ivar_3, ltedfapegproof_funtype_31_t ivar_5, ltedfapegproof_funtype_27_t ivar_1);

ltedfapegproof_closure_32_t new_ltedfapegproof_closure_32(void);

void release_ltedfapegproof_closure_32(ltedfapegproof_funtype_20_t closure);

ltedfapegproof_closure_32_t copy_ltedfapegproof_closure_32(ltedfapegproof_closure_32_t x);


//qstack

struct ltedfapegproof__qstack_adt_s {
         uint32_t count; 
        uint8_t ltedfapegproof__qstack_adt_index;};
typedef struct ltedfapegproof__qstack_adt_s * ltedfapegproof__qstack_adt_t;

extern ltedfapegproof__qstack_adt_t new_ltedfapegproof__qstack_adt(void);

extern void release_ltedfapegproof__qstack_adt(ltedfapegproof__qstack_adt_t x);

extern ltedfapegproof__qstack_adt_t copy_ltedfapegproof__qstack_adt(ltedfapegproof__qstack_adt_t x);

extern bool_t equal_ltedfapegproof__qstack_adt(ltedfapegproof__qstack_adt_t x, ltedfapegproof__qstack_adt_t y);
extern char * json_ltedfapegproof__qstack_adt(ltedfapegproof__qstack_adt_t x);

typedef struct actual_ltedfapegproof__qstack_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof__qstack_adt_t;
extern void release_ltedfapegproof__qstack_adt_ptr(pointer_t x, type_actual_t ltedfapegproof__qstack_adt);

extern bool_t equal_ltedfapegproof__qstack_adt_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof__qstack_adt_t T);

extern char * json_ltedfapegproof__qstack_adt_ptr(pointer_t x,  actual_ltedfapegproof__qstack_adt_t T);

actual_ltedfapegproof__qstack_adt_t actual_ltedfapegproof__qstack_adt(void);

extern ltedfapegproof__qstack_adt_t update_ltedfapegproof__qstack_adt_ltedfapegproof__qstack_adt_index(ltedfapegproof__qstack_adt_t x, uint8_t v);


//qpush

struct ltedfapegproof__qpush_s {
        uint32_t count; 
        uint8_t ltedfapegproof__qstack_adt_index;
        uint8_t nonterm;
        uint32_t pos;
        ltedfapegproof__qstack_adt_t qpop;};
typedef struct ltedfapegproof__qpush_s * ltedfapegproof__qpush_t;

extern ltedfapegproof__qpush_t new_ltedfapegproof__qpush(void);

extern void release_ltedfapegproof__qpush(ltedfapegproof__qpush_t x);

extern ltedfapegproof__qpush_t copy_ltedfapegproof__qpush(ltedfapegproof__qpush_t x);

extern bool_t equal_ltedfapegproof__qpush(ltedfapegproof__qpush_t x, ltedfapegproof__qpush_t y);
extern char * json_ltedfapegproof__qpush(ltedfapegproof__qpush_t x);

typedef struct actual_ltedfapegproof__qpush_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof__qpush_t;
extern void release_ltedfapegproof__qpush_ptr(pointer_t x, type_actual_t ltedfapegproof__qpush);

extern bool_t equal_ltedfapegproof__qpush_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof__qpush_t T);

extern char * json_ltedfapegproof__qpush_ptr(pointer_t x,  actual_ltedfapegproof__qpush_t T);

actual_ltedfapegproof__qpush_t actual_ltedfapegproof__qpush(void);

extern ltedfapegproof__qpush_t update_ltedfapegproof__qpush_ltedfapegproof__qstack_adt_index(ltedfapegproof__qpush_t x, uint8_t v);

extern ltedfapegproof__qpush_t update_ltedfapegproof__qpush_nonterm(ltedfapegproof__qpush_t x, uint8_t v);

extern ltedfapegproof__qpush_t update_ltedfapegproof__qpush_pos(ltedfapegproof__qpush_t x, uint32_t v);

extern ltedfapegproof__qpush_t update_ltedfapegproof__qpush_qpop(ltedfapegproof__qpush_t x, ltedfapegproof__qstack_adt_t v);


//qstack_ord

struct ltedfapegproof_funtype_35_s;
        typedef struct ltedfapegproof_funtype_35_s * ltedfapegproof_funtype_35_t;

struct ltedfapegproof_funtype_35_ftbl_s {uint8_t (* fptr)(struct ltedfapegproof_funtype_35_s *, ltedfapegproof__qstack_adt_t);
        uint8_t (* mptr)(struct ltedfapegproof_funtype_35_s *, ltedfapegproof__qstack_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_35_s *);
        struct ltedfapegproof_funtype_35_s * (* cptr)(struct ltedfapegproof_funtype_35_s *);};
typedef struct ltedfapegproof_funtype_35_ftbl_s * ltedfapegproof_funtype_35_ftbl_t;

struct ltedfapegproof_funtype_35_hashentry_s {uint32_t keyhash; ltedfapegproof__qstack_adt_t key; uint8_t value;}; 
typedef struct ltedfapegproof_funtype_35_hashentry_s ltedfapegproof_funtype_35_hashentry_t;

struct ltedfapegproof_funtype_35_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_35_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_35_htbl_s * ltedfapegproof_funtype_35_htbl_t;

struct ltedfapegproof_funtype_35_s {uint32_t count;
        ltedfapegproof_funtype_35_ftbl_t ftbl;
        ltedfapegproof_funtype_35_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_35_s * ltedfapegproof_funtype_35_t;

extern void release_ltedfapegproof_funtype_35(ltedfapegproof_funtype_35_t x);

extern ltedfapegproof_funtype_35_t copy_ltedfapegproof_funtype_35(ltedfapegproof_funtype_35_t x);

extern bool_t equal_ltedfapegproof_funtype_35(ltedfapegproof_funtype_35_t x, ltedfapegproof_funtype_35_t y);

extern char* json_ltedfapegproof_funtype_35(ltedfapegproof_funtype_35_t x);


//reduce_nat

struct ltedfapegproof_funtype_36_s;
        typedef struct ltedfapegproof_funtype_36_s * ltedfapegproof_funtype_36_t;

struct ltedfapegproof_funtype_36_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_36_s *, ltedfapegproof__qstack_adt_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_36_s *, ltedfapegproof__qstack_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_36_s *);
        struct ltedfapegproof_funtype_36_s * (* cptr)(struct ltedfapegproof_funtype_36_s *);};
typedef struct ltedfapegproof_funtype_36_ftbl_s * ltedfapegproof_funtype_36_ftbl_t;

struct ltedfapegproof_funtype_36_hashentry_s {uint32_t keyhash; ltedfapegproof__qstack_adt_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_36_hashentry_s ltedfapegproof_funtype_36_hashentry_t;

struct ltedfapegproof_funtype_36_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_36_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_36_htbl_s * ltedfapegproof_funtype_36_htbl_t;

struct ltedfapegproof_funtype_36_s {uint32_t count;
        ltedfapegproof_funtype_36_ftbl_t ftbl;
        ltedfapegproof_funtype_36_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_36_s * ltedfapegproof_funtype_36_t;

extern void release_ltedfapegproof_funtype_36(ltedfapegproof_funtype_36_t x);

extern ltedfapegproof_funtype_36_t copy_ltedfapegproof_funtype_36(ltedfapegproof_funtype_36_t x);

extern bool_t equal_ltedfapegproof_funtype_36(ltedfapegproof_funtype_36_t x, ltedfapegproof_funtype_36_t y);

extern char* json_ltedfapegproof_funtype_36(ltedfapegproof_funtype_36_t x);


//reduce_nat

struct ltedfapegproof_record_37_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        mpz_t project_3;};
typedef struct ltedfapegproof_record_37_s * ltedfapegproof_record_37_t;

extern ltedfapegproof_record_37_t new_ltedfapegproof_record_37(void);

extern void release_ltedfapegproof_record_37(ltedfapegproof_record_37_t x);

extern ltedfapegproof_record_37_t copy_ltedfapegproof_record_37(ltedfapegproof_record_37_t x);

extern bool_t equal_ltedfapegproof_record_37(ltedfapegproof_record_37_t x, ltedfapegproof_record_37_t y);
extern char * json_ltedfapegproof_record_37(ltedfapegproof_record_37_t x);

typedef struct actual_ltedfapegproof_record_37_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_37_t;
extern void release_ltedfapegproof_record_37_ptr(pointer_t x, type_actual_t ltedfapegproof_record_37);

extern bool_t equal_ltedfapegproof_record_37_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_37_t T);

extern char * json_ltedfapegproof_record_37_ptr(pointer_t x,  actual_ltedfapegproof_record_37_t T);

actual_ltedfapegproof_record_37_t actual_ltedfapegproof_record_37(void);

extern ltedfapegproof_record_37_t update_ltedfapegproof_record_37_project_1(ltedfapegproof_record_37_t x, uint8_t v);

extern ltedfapegproof_record_37_t update_ltedfapegproof_record_37_project_2(ltedfapegproof_record_37_t x, uint32_t v);

extern ltedfapegproof_record_37_t update_ltedfapegproof_record_37_project_3(ltedfapegproof_record_37_t x, mpz_ptr_t v);


//reduce_nat

struct ltedfapegproof_funtype_38_s;
        typedef struct ltedfapegproof_funtype_38_s * ltedfapegproof_funtype_38_t;

struct ltedfapegproof_funtype_38_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_38_s *, ltedfapegproof_record_37_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_38_s *, uint8_t, uint32_t, mpz_ptr_t);
        void (* rptr)(struct ltedfapegproof_funtype_38_s *);
        struct ltedfapegproof_funtype_38_s * (* cptr)(struct ltedfapegproof_funtype_38_s *);};
typedef struct ltedfapegproof_funtype_38_ftbl_s * ltedfapegproof_funtype_38_ftbl_t;

struct ltedfapegproof_funtype_38_hashentry_s {uint32_t keyhash; ltedfapegproof_record_37_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_38_hashentry_s ltedfapegproof_funtype_38_hashentry_t;

struct ltedfapegproof_funtype_38_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_38_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_38_htbl_s * ltedfapegproof_funtype_38_htbl_t;

struct ltedfapegproof_funtype_38_s {uint32_t count;
        ltedfapegproof_funtype_38_ftbl_t ftbl;
        ltedfapegproof_funtype_38_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_38_s * ltedfapegproof_funtype_38_t;

extern void release_ltedfapegproof_funtype_38(ltedfapegproof_funtype_38_t x);

extern ltedfapegproof_funtype_38_t copy_ltedfapegproof_funtype_38(ltedfapegproof_funtype_38_t x);

extern bool_t equal_ltedfapegproof_funtype_38(ltedfapegproof_funtype_38_t x, ltedfapegproof_funtype_38_t y);

extern char* json_ltedfapegproof_funtype_38(ltedfapegproof_funtype_38_t x);




struct ltedfapegproof_closure_39_s;
        typedef struct ltedfapegproof_closure_39_s * ltedfapegproof_closure_39_t;

struct ltedfapegproof_closure_39_s {uint32_t count;
         ltedfapegproof_funtype_36_ftbl_t ftbl;
         ltedfapegproof_funtype_36_htbl_t htbl;
        ltedfapegproof_funtype_38_t fvar_1;
        mpz_t fvar_2;};

mpz_ptr_t f_ltedfapegproof_closure_39(struct ltedfapegproof_closure_39_s * closure, ltedfapegproof__qstack_adt_t bvar);

mpz_ptr_t m_ltedfapegproof_closure_39(struct ltedfapegproof_closure_39_s * closure, ltedfapegproof__qstack_adt_t bvar);

extern mpz_ptr_t h_ltedfapegproof_closure_39(ltedfapegproof__qstack_adt_t ivar_5, ltedfapegproof_funtype_38_t ivar_2, mpz_ptr_t ivar_1);

ltedfapegproof_closure_39_t new_ltedfapegproof_closure_39(void);

void release_ltedfapegproof_closure_39(ltedfapegproof_funtype_36_t closure);

ltedfapegproof_closure_39_t copy_ltedfapegproof_closure_39(ltedfapegproof_closure_39_t x);


//REDUCE_nat

struct ltedfapegproof_record_40_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        mpz_t project_3;
        ltedfapegproof__qstack_adt_t project_4;};
typedef struct ltedfapegproof_record_40_s * ltedfapegproof_record_40_t;

extern ltedfapegproof_record_40_t new_ltedfapegproof_record_40(void);

extern void release_ltedfapegproof_record_40(ltedfapegproof_record_40_t x);

extern ltedfapegproof_record_40_t copy_ltedfapegproof_record_40(ltedfapegproof_record_40_t x);

extern bool_t equal_ltedfapegproof_record_40(ltedfapegproof_record_40_t x, ltedfapegproof_record_40_t y);
extern char * json_ltedfapegproof_record_40(ltedfapegproof_record_40_t x);

typedef struct actual_ltedfapegproof_record_40_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_40_t;
extern void release_ltedfapegproof_record_40_ptr(pointer_t x, type_actual_t ltedfapegproof_record_40);

extern bool_t equal_ltedfapegproof_record_40_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_40_t T);

extern char * json_ltedfapegproof_record_40_ptr(pointer_t x,  actual_ltedfapegproof_record_40_t T);

actual_ltedfapegproof_record_40_t actual_ltedfapegproof_record_40(void);

extern ltedfapegproof_record_40_t update_ltedfapegproof_record_40_project_1(ltedfapegproof_record_40_t x, uint8_t v);

extern ltedfapegproof_record_40_t update_ltedfapegproof_record_40_project_2(ltedfapegproof_record_40_t x, uint32_t v);

extern ltedfapegproof_record_40_t update_ltedfapegproof_record_40_project_3(ltedfapegproof_record_40_t x, mpz_ptr_t v);

extern ltedfapegproof_record_40_t update_ltedfapegproof_record_40_project_4(ltedfapegproof_record_40_t x, ltedfapegproof__qstack_adt_t v);


//REDUCE_nat

struct ltedfapegproof_funtype_41_s;
        typedef struct ltedfapegproof_funtype_41_s * ltedfapegproof_funtype_41_t;

struct ltedfapegproof_funtype_41_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_41_s *, ltedfapegproof_record_40_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_41_s *, uint8_t, uint32_t, mpz_ptr_t, ltedfapegproof__qstack_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_41_s *);
        struct ltedfapegproof_funtype_41_s * (* cptr)(struct ltedfapegproof_funtype_41_s *);};
typedef struct ltedfapegproof_funtype_41_ftbl_s * ltedfapegproof_funtype_41_ftbl_t;

struct ltedfapegproof_funtype_41_hashentry_s {uint32_t keyhash; ltedfapegproof_record_40_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_41_hashentry_s ltedfapegproof_funtype_41_hashentry_t;

struct ltedfapegproof_funtype_41_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_41_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_41_htbl_s * ltedfapegproof_funtype_41_htbl_t;

struct ltedfapegproof_funtype_41_s {uint32_t count;
        ltedfapegproof_funtype_41_ftbl_t ftbl;
        ltedfapegproof_funtype_41_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_41_s * ltedfapegproof_funtype_41_t;

extern void release_ltedfapegproof_funtype_41(ltedfapegproof_funtype_41_t x);

extern ltedfapegproof_funtype_41_t copy_ltedfapegproof_funtype_41(ltedfapegproof_funtype_41_t x);

extern bool_t equal_ltedfapegproof_funtype_41(ltedfapegproof_funtype_41_t x, ltedfapegproof_funtype_41_t y);

extern char* json_ltedfapegproof_funtype_41(ltedfapegproof_funtype_41_t x);




struct ltedfapegproof_closure_42_s;
        typedef struct ltedfapegproof_closure_42_s * ltedfapegproof_closure_42_t;

struct ltedfapegproof_closure_42_s {uint32_t count;
         ltedfapegproof_funtype_36_ftbl_t ftbl;
         ltedfapegproof_funtype_36_htbl_t htbl;
        ltedfapegproof_funtype_41_t fvar_1;
        ltedfapegproof_funtype_36_t fvar_2;};

mpz_ptr_t f_ltedfapegproof_closure_42(struct ltedfapegproof_closure_42_s * closure, ltedfapegproof__qstack_adt_t bvar);

mpz_ptr_t m_ltedfapegproof_closure_42(struct ltedfapegproof_closure_42_s * closure, ltedfapegproof__qstack_adt_t bvar);

extern mpz_ptr_t h_ltedfapegproof_closure_42(ltedfapegproof__qstack_adt_t ivar_6, ltedfapegproof_funtype_41_t ivar_3, ltedfapegproof_funtype_36_t ivar_1);

ltedfapegproof_closure_42_t new_ltedfapegproof_closure_42(void);

void release_ltedfapegproof_closure_42(ltedfapegproof_funtype_36_t closure);

ltedfapegproof_closure_42_t copy_ltedfapegproof_closure_42(ltedfapegproof_closure_42_t x);


//reduce_ordinal

struct ltedfapegproof_funtype_43_s;
        typedef struct ltedfapegproof_funtype_43_s * ltedfapegproof_funtype_43_t;

struct ltedfapegproof_funtype_43_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_43_s *, ltedfapegproof__qstack_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_43_s *, ltedfapegproof__qstack_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_43_s *);
        struct ltedfapegproof_funtype_43_s * (* cptr)(struct ltedfapegproof_funtype_43_s *);};
typedef struct ltedfapegproof_funtype_43_ftbl_s * ltedfapegproof_funtype_43_ftbl_t;

struct ltedfapegproof_funtype_43_hashentry_s {uint32_t keyhash; ltedfapegproof__qstack_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_43_hashentry_s ltedfapegproof_funtype_43_hashentry_t;

struct ltedfapegproof_funtype_43_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_43_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_43_htbl_s * ltedfapegproof_funtype_43_htbl_t;

struct ltedfapegproof_funtype_43_s {uint32_t count;
        ltedfapegproof_funtype_43_ftbl_t ftbl;
        ltedfapegproof_funtype_43_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_43_s * ltedfapegproof_funtype_43_t;

extern void release_ltedfapegproof_funtype_43(ltedfapegproof_funtype_43_t x);

extern ltedfapegproof_funtype_43_t copy_ltedfapegproof_funtype_43(ltedfapegproof_funtype_43_t x);

extern bool_t equal_ltedfapegproof_funtype_43(ltedfapegproof_funtype_43_t x, ltedfapegproof_funtype_43_t y);

extern char* json_ltedfapegproof_funtype_43(ltedfapegproof_funtype_43_t x);


//reduce_ordinal

struct ltedfapegproof_record_44_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;};
typedef struct ltedfapegproof_record_44_s * ltedfapegproof_record_44_t;

extern ltedfapegproof_record_44_t new_ltedfapegproof_record_44(void);

extern void release_ltedfapegproof_record_44(ltedfapegproof_record_44_t x);

extern ltedfapegproof_record_44_t copy_ltedfapegproof_record_44(ltedfapegproof_record_44_t x);

extern bool_t equal_ltedfapegproof_record_44(ltedfapegproof_record_44_t x, ltedfapegproof_record_44_t y);
extern char * json_ltedfapegproof_record_44(ltedfapegproof_record_44_t x);

typedef struct actual_ltedfapegproof_record_44_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_44_t;
extern void release_ltedfapegproof_record_44_ptr(pointer_t x, type_actual_t ltedfapegproof_record_44);

extern bool_t equal_ltedfapegproof_record_44_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_44_t T);

extern char * json_ltedfapegproof_record_44_ptr(pointer_t x,  actual_ltedfapegproof_record_44_t T);

actual_ltedfapegproof_record_44_t actual_ltedfapegproof_record_44(void);

extern ltedfapegproof_record_44_t update_ltedfapegproof_record_44_project_1(ltedfapegproof_record_44_t x, uint8_t v);

extern ltedfapegproof_record_44_t update_ltedfapegproof_record_44_project_2(ltedfapegproof_record_44_t x, uint32_t v);

extern ltedfapegproof_record_44_t update_ltedfapegproof_record_44_project_3(ltedfapegproof_record_44_t x, ordstruct_adt__ordstruct_adt_t v);


//reduce_ordinal

struct ltedfapegproof_funtype_45_s;
        typedef struct ltedfapegproof_funtype_45_s * ltedfapegproof_funtype_45_t;

struct ltedfapegproof_funtype_45_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_45_s *, ltedfapegproof_record_44_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_45_s *, uint8_t, uint32_t, ordstruct_adt__ordstruct_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_45_s *);
        struct ltedfapegproof_funtype_45_s * (* cptr)(struct ltedfapegproof_funtype_45_s *);};
typedef struct ltedfapegproof_funtype_45_ftbl_s * ltedfapegproof_funtype_45_ftbl_t;

struct ltedfapegproof_funtype_45_hashentry_s {uint32_t keyhash; ltedfapegproof_record_44_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_45_hashentry_s ltedfapegproof_funtype_45_hashentry_t;

struct ltedfapegproof_funtype_45_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_45_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_45_htbl_s * ltedfapegproof_funtype_45_htbl_t;

struct ltedfapegproof_funtype_45_s {uint32_t count;
        ltedfapegproof_funtype_45_ftbl_t ftbl;
        ltedfapegproof_funtype_45_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_45_s * ltedfapegproof_funtype_45_t;

extern void release_ltedfapegproof_funtype_45(ltedfapegproof_funtype_45_t x);

extern ltedfapegproof_funtype_45_t copy_ltedfapegproof_funtype_45(ltedfapegproof_funtype_45_t x);

extern bool_t equal_ltedfapegproof_funtype_45(ltedfapegproof_funtype_45_t x, ltedfapegproof_funtype_45_t y);

extern char* json_ltedfapegproof_funtype_45(ltedfapegproof_funtype_45_t x);




struct ltedfapegproof_closure_46_s;
        typedef struct ltedfapegproof_closure_46_s * ltedfapegproof_closure_46_t;

struct ltedfapegproof_closure_46_s {uint32_t count;
         ltedfapegproof_funtype_43_ftbl_t ftbl;
         ltedfapegproof_funtype_43_htbl_t htbl;
        ltedfapegproof_funtype_45_t fvar_1;
        ordstruct_adt__ordstruct_adt_t fvar_2;};

ordstruct_adt__ordstruct_adt_t f_ltedfapegproof_closure_46(struct ltedfapegproof_closure_46_s * closure, ltedfapegproof__qstack_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltedfapegproof_closure_46(struct ltedfapegproof_closure_46_s * closure, ltedfapegproof__qstack_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltedfapegproof_closure_46(ltedfapegproof__qstack_adt_t ivar_5, ltedfapegproof_funtype_45_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1);

ltedfapegproof_closure_46_t new_ltedfapegproof_closure_46(void);

void release_ltedfapegproof_closure_46(ltedfapegproof_funtype_43_t closure);

ltedfapegproof_closure_46_t copy_ltedfapegproof_closure_46(ltedfapegproof_closure_46_t x);


//REDUCE_ordinal

struct ltedfapegproof_record_47_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;
        ltedfapegproof__qstack_adt_t project_4;};
typedef struct ltedfapegproof_record_47_s * ltedfapegproof_record_47_t;

extern ltedfapegproof_record_47_t new_ltedfapegproof_record_47(void);

extern void release_ltedfapegproof_record_47(ltedfapegproof_record_47_t x);

extern ltedfapegproof_record_47_t copy_ltedfapegproof_record_47(ltedfapegproof_record_47_t x);

extern bool_t equal_ltedfapegproof_record_47(ltedfapegproof_record_47_t x, ltedfapegproof_record_47_t y);
extern char * json_ltedfapegproof_record_47(ltedfapegproof_record_47_t x);

typedef struct actual_ltedfapegproof_record_47_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_47_t;
extern void release_ltedfapegproof_record_47_ptr(pointer_t x, type_actual_t ltedfapegproof_record_47);

extern bool_t equal_ltedfapegproof_record_47_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_47_t T);

extern char * json_ltedfapegproof_record_47_ptr(pointer_t x,  actual_ltedfapegproof_record_47_t T);

actual_ltedfapegproof_record_47_t actual_ltedfapegproof_record_47(void);

extern ltedfapegproof_record_47_t update_ltedfapegproof_record_47_project_1(ltedfapegproof_record_47_t x, uint8_t v);

extern ltedfapegproof_record_47_t update_ltedfapegproof_record_47_project_2(ltedfapegproof_record_47_t x, uint32_t v);

extern ltedfapegproof_record_47_t update_ltedfapegproof_record_47_project_3(ltedfapegproof_record_47_t x, ordstruct_adt__ordstruct_adt_t v);

extern ltedfapegproof_record_47_t update_ltedfapegproof_record_47_project_4(ltedfapegproof_record_47_t x, ltedfapegproof__qstack_adt_t v);


//REDUCE_ordinal

struct ltedfapegproof_funtype_48_s;
        typedef struct ltedfapegproof_funtype_48_s * ltedfapegproof_funtype_48_t;

struct ltedfapegproof_funtype_48_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_48_s *, ltedfapegproof_record_47_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_48_s *, uint8_t, uint32_t, ordstruct_adt__ordstruct_adt_t, ltedfapegproof__qstack_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_48_s *);
        struct ltedfapegproof_funtype_48_s * (* cptr)(struct ltedfapegproof_funtype_48_s *);};
typedef struct ltedfapegproof_funtype_48_ftbl_s * ltedfapegproof_funtype_48_ftbl_t;

struct ltedfapegproof_funtype_48_hashentry_s {uint32_t keyhash; ltedfapegproof_record_47_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_48_hashentry_s ltedfapegproof_funtype_48_hashentry_t;

struct ltedfapegproof_funtype_48_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_48_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_48_htbl_s * ltedfapegproof_funtype_48_htbl_t;

struct ltedfapegproof_funtype_48_s {uint32_t count;
        ltedfapegproof_funtype_48_ftbl_t ftbl;
        ltedfapegproof_funtype_48_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_48_s * ltedfapegproof_funtype_48_t;

extern void release_ltedfapegproof_funtype_48(ltedfapegproof_funtype_48_t x);

extern ltedfapegproof_funtype_48_t copy_ltedfapegproof_funtype_48(ltedfapegproof_funtype_48_t x);

extern bool_t equal_ltedfapegproof_funtype_48(ltedfapegproof_funtype_48_t x, ltedfapegproof_funtype_48_t y);

extern char* json_ltedfapegproof_funtype_48(ltedfapegproof_funtype_48_t x);




struct ltedfapegproof_closure_49_s;
        typedef struct ltedfapegproof_closure_49_s * ltedfapegproof_closure_49_t;

struct ltedfapegproof_closure_49_s {uint32_t count;
         ltedfapegproof_funtype_43_ftbl_t ftbl;
         ltedfapegproof_funtype_43_htbl_t htbl;
        ltedfapegproof_funtype_48_t fvar_1;
        ltedfapegproof_funtype_43_t fvar_2;};

ordstruct_adt__ordstruct_adt_t f_ltedfapegproof_closure_49(struct ltedfapegproof_closure_49_s * closure, ltedfapegproof__qstack_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltedfapegproof_closure_49(struct ltedfapegproof_closure_49_s * closure, ltedfapegproof__qstack_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltedfapegproof_closure_49(ltedfapegproof__qstack_adt_t ivar_6, ltedfapegproof_funtype_48_t ivar_3, ltedfapegproof_funtype_43_t ivar_1);

ltedfapegproof_closure_49_t new_ltedfapegproof_closure_49(void);

void release_ltedfapegproof_closure_49(ltedfapegproof_funtype_43_t closure);

ltedfapegproof_closure_49_t copy_ltedfapegproof_closure_49(ltedfapegproof_closure_49_t x);


//good_qstack?

struct ltedfapegproof_funtype_50_s;
        typedef struct ltedfapegproof_funtype_50_s * ltedfapegproof_funtype_50_t;

struct ltedfapegproof_funtype_50_ftbl_s {bool_t (* fptr)(struct ltedfapegproof_funtype_50_s *, ltedfapegproof__qstack_adt_t);
        bool_t (* mptr)(struct ltedfapegproof_funtype_50_s *, ltedfapegproof__qstack_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_50_s *);
        struct ltedfapegproof_funtype_50_s * (* cptr)(struct ltedfapegproof_funtype_50_s *);};
typedef struct ltedfapegproof_funtype_50_ftbl_s * ltedfapegproof_funtype_50_ftbl_t;

struct ltedfapegproof_funtype_50_hashentry_s {uint32_t keyhash; ltedfapegproof__qstack_adt_t key; bool_t value;}; 
typedef struct ltedfapegproof_funtype_50_hashentry_s ltedfapegproof_funtype_50_hashentry_t;

struct ltedfapegproof_funtype_50_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_50_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_50_htbl_s * ltedfapegproof_funtype_50_htbl_t;

struct ltedfapegproof_funtype_50_s {uint32_t count;
        ltedfapegproof_funtype_50_ftbl_t ftbl;
        ltedfapegproof_funtype_50_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_50_s * ltedfapegproof_funtype_50_t;

extern void release_ltedfapegproof_funtype_50(ltedfapegproof_funtype_50_t x);

extern ltedfapegproof_funtype_50_t copy_ltedfapegproof_funtype_50(ltedfapegproof_funtype_50_t x);

extern bool_t equal_ltedfapegproof_funtype_50(ltedfapegproof_funtype_50_t x, ltedfapegproof_funtype_50_t y);

extern char* json_ltedfapegproof_funtype_50(ltedfapegproof_funtype_50_t x);


//good_qstack?

struct ltedfapegproof_array_51_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct ltedfapegproof_array_51_s * ltedfapegproof_array_51_t;

extern ltedfapegproof_array_51_t new_ltedfapegproof_array_51(uint32_t size);

extern void release_ltedfapegproof_array_51(ltedfapegproof_array_51_t x);

extern ltedfapegproof_array_51_t copy_ltedfapegproof_array_51(ltedfapegproof_array_51_t x);

extern bool_t equal_ltedfapegproof_array_51(ltedfapegproof_array_51_t x, ltedfapegproof_array_51_t y);
extern char * json_ltedfapegproof_array_51(ltedfapegproof_array_51_t x);

typedef struct actual_ltedfapegproof_array_51_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_array_51_t;
extern void release_ltedfapegproof_array_51_ptr(pointer_t x, type_actual_t ltedfapegproof_array_51);

extern bool_t equal_ltedfapegproof_array_51_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltedfapegproof_array_51_ptr(pointer_t x, type_actual_t T);

actual_ltedfapegproof_array_51_t actual_ltedfapegproof_array_51(void);

extern ltedfapegproof_array_51_t update_ltedfapegproof_array_51(ltedfapegproof_array_51_t x, uint32_t i, uint8_t v);

extern ltedfapegproof_array_51_t upgrade_ltedfapegproof_array_51(ltedfapegproof_array_51_t x, uint32_t i, uint8_t v);


//good_qstack?

struct ltedfapegproof_array_52_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltedfapeg__ent_adt_t elems[]; };
typedef struct ltedfapegproof_array_52_s * ltedfapegproof_array_52_t;

extern ltedfapegproof_array_52_t new_ltedfapegproof_array_52(uint32_t size);

extern void release_ltedfapegproof_array_52(ltedfapegproof_array_52_t x);

extern ltedfapegproof_array_52_t copy_ltedfapegproof_array_52(ltedfapegproof_array_52_t x);

extern bool_t equal_ltedfapegproof_array_52(ltedfapegproof_array_52_t x, ltedfapegproof_array_52_t y);
extern char * json_ltedfapegproof_array_52(ltedfapegproof_array_52_t x);

typedef struct actual_ltedfapegproof_array_52_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_array_52_t;
extern void release_ltedfapegproof_array_52_ptr(pointer_t x, type_actual_t ltedfapegproof_array_52);

extern bool_t equal_ltedfapegproof_array_52_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltedfapegproof_array_52_ptr(pointer_t x, type_actual_t T);

actual_ltedfapegproof_array_52_t actual_ltedfapegproof_array_52(void);

extern ltedfapegproof_array_52_t update_ltedfapegproof_array_52(ltedfapegproof_array_52_t x, uint32_t i, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_array_52_t upgrade_ltedfapegproof_array_52(ltedfapegproof_array_52_t x, uint32_t i, ltedfapeg__ent_adt_t v);


//good_qstack?

struct ltedfapegproof_array_53_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltedfapegproof_array_52_t elems[]; };
typedef struct ltedfapegproof_array_53_s * ltedfapegproof_array_53_t;

extern ltedfapegproof_array_53_t new_ltedfapegproof_array_53(uint32_t size);

extern void release_ltedfapegproof_array_53(ltedfapegproof_array_53_t x);

extern ltedfapegproof_array_53_t copy_ltedfapegproof_array_53(ltedfapegproof_array_53_t x);

extern bool_t equal_ltedfapegproof_array_53(ltedfapegproof_array_53_t x, ltedfapegproof_array_53_t y);
extern char * json_ltedfapegproof_array_53(ltedfapegproof_array_53_t x);

typedef struct actual_ltedfapegproof_array_53_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_array_53_t;
extern void release_ltedfapegproof_array_53_ptr(pointer_t x, type_actual_t ltedfapegproof_array_53);

extern bool_t equal_ltedfapegproof_array_53_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltedfapegproof_array_53_ptr(pointer_t x, type_actual_t T);

actual_ltedfapegproof_array_53_t actual_ltedfapegproof_array_53(void);

extern ltedfapegproof_array_53_t update_ltedfapegproof_array_53(ltedfapegproof_array_53_t x, uint32_t i, ltedfapegproof_array_52_t v);

extern ltedfapegproof_array_53_t upgrade_ltedfapegproof_array_53(ltedfapegproof_array_53_t x, uint32_t i, ltedfapegproof_array_52_t v);




struct ltedfapegproof_closure_54_s;
        typedef struct ltedfapegproof_closure_54_s * ltedfapegproof_closure_54_t;

struct ltedfapegproof_closure_54_s {uint32_t count;
         ltedfapegproof_funtype_50_ftbl_t ftbl;
         ltedfapegproof_funtype_50_htbl_t htbl;
        ltedfapegproof_array_51_t fvar_1;
        ltedfapegproof_array_53_t fvar_2;
        ltedfapeg__lang_spec_t fvar_3;
        uint32_t fvar_4;};

bool_t f_ltedfapegproof_closure_54(struct ltedfapegproof_closure_54_s * closure, ltedfapegproof__qstack_adt_t bvar);

bool_t m_ltedfapegproof_closure_54(struct ltedfapegproof_closure_54_s * closure, ltedfapegproof__qstack_adt_t bvar);

extern bool_t h_ltedfapegproof_closure_54(ltedfapegproof__qstack_adt_t ivar_7, ltedfapegproof_array_51_t ivar_3, ltedfapegproof_array_53_t ivar_4, ltedfapeg__lang_spec_t ivar_2, uint32_t ivar_1);

ltedfapegproof_closure_54_t new_ltedfapegproof_closure_54(void);

void release_ltedfapegproof_closure_54(ltedfapegproof_funtype_50_t closure);

ltedfapegproof_closure_54_t copy_ltedfapegproof_closure_54(ltedfapegproof_closure_54_t x);


//good_parsetree?

struct ltedfapegproof_record_55_s {
        uint32_t count; 
        ltedfapegproof__qstack_adt_t project_1;
        uint8_t project_2;
        uint32_t project_3;
        ltedfapegproof__parsetree_adt_t project_4;};
typedef struct ltedfapegproof_record_55_s * ltedfapegproof_record_55_t;

extern ltedfapegproof_record_55_t new_ltedfapegproof_record_55(void);

extern void release_ltedfapegproof_record_55(ltedfapegproof_record_55_t x);

extern ltedfapegproof_record_55_t copy_ltedfapegproof_record_55(ltedfapegproof_record_55_t x);

extern bool_t equal_ltedfapegproof_record_55(ltedfapegproof_record_55_t x, ltedfapegproof_record_55_t y);
extern char * json_ltedfapegproof_record_55(ltedfapegproof_record_55_t x);

typedef struct actual_ltedfapegproof_record_55_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_55_t;
extern void release_ltedfapegproof_record_55_ptr(pointer_t x, type_actual_t ltedfapegproof_record_55);

extern bool_t equal_ltedfapegproof_record_55_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_55_t T);

extern char * json_ltedfapegproof_record_55_ptr(pointer_t x,  actual_ltedfapegproof_record_55_t T);

actual_ltedfapegproof_record_55_t actual_ltedfapegproof_record_55(void);

extern ltedfapegproof_record_55_t update_ltedfapegproof_record_55_project_1(ltedfapegproof_record_55_t x, ltedfapegproof__qstack_adt_t v);

extern ltedfapegproof_record_55_t update_ltedfapegproof_record_55_project_2(ltedfapegproof_record_55_t x, uint8_t v);

extern ltedfapegproof_record_55_t update_ltedfapegproof_record_55_project_3(ltedfapegproof_record_55_t x, uint32_t v);

extern ltedfapegproof_record_55_t update_ltedfapegproof_record_55_project_4(ltedfapegproof_record_55_t x, ltedfapegproof__parsetree_adt_t v);


//good_parsetree?

struct ltedfapegproof_funtype_56_s;
        typedef struct ltedfapegproof_funtype_56_s * ltedfapegproof_funtype_56_t;

struct ltedfapegproof_funtype_56_ftbl_s {bool_t (* fptr)(struct ltedfapegproof_funtype_56_s *, ltedfapegproof_record_55_t);
        bool_t (* mptr)(struct ltedfapegproof_funtype_56_s *, ltedfapegproof__qstack_adt_t, uint8_t, uint32_t, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_56_s *);
        struct ltedfapegproof_funtype_56_s * (* cptr)(struct ltedfapegproof_funtype_56_s *);};
typedef struct ltedfapegproof_funtype_56_ftbl_s * ltedfapegproof_funtype_56_ftbl_t;

struct ltedfapegproof_funtype_56_hashentry_s {uint32_t keyhash; ltedfapegproof_record_55_t key; bool_t value;}; 
typedef struct ltedfapegproof_funtype_56_hashentry_s ltedfapegproof_funtype_56_hashentry_t;

struct ltedfapegproof_funtype_56_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_56_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_56_htbl_s * ltedfapegproof_funtype_56_htbl_t;

struct ltedfapegproof_funtype_56_s {uint32_t count;
        ltedfapegproof_funtype_56_ftbl_t ftbl;
        ltedfapegproof_funtype_56_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_56_s * ltedfapegproof_funtype_56_t;

extern void release_ltedfapegproof_funtype_56(ltedfapegproof_funtype_56_t x);

extern ltedfapegproof_funtype_56_t copy_ltedfapegproof_funtype_56(ltedfapegproof_funtype_56_t x);

extern bool_t equal_ltedfapegproof_funtype_56(ltedfapegproof_funtype_56_t x, ltedfapegproof_funtype_56_t y);

extern char* json_ltedfapegproof_funtype_56(ltedfapegproof_funtype_56_t x);




struct ltedfapegproof_closure_57_s;
        typedef struct ltedfapegproof_closure_57_s * ltedfapegproof_closure_57_t;

struct ltedfapegproof_closure_57_s {uint32_t count;
         ltedfapegproof_funtype_56_ftbl_t ftbl;
         ltedfapegproof_funtype_56_htbl_t htbl;
        ltedfapegproof_array_51_t fvar_1;
        uint32_t fvar_2;
        ltedfapeg__lang_spec_t fvar_3;};

bool_t f_ltedfapegproof_closure_57(struct ltedfapegproof_closure_57_s * closure, ltedfapegproof_record_55_t bvar);

bool_t m_ltedfapegproof_closure_57(struct ltedfapegproof_closure_57_s * closure, ltedfapegproof__qstack_adt_t bvar_1, uint8_t bvar_2, uint32_t bvar_3, ltedfapegproof__parsetree_adt_t bvar_4);

extern bool_t h_ltedfapegproof_closure_57(ltedfapegproof__qstack_adt_t ivar_5, uint8_t ivar_6, uint32_t ivar_7, ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_array_51_t ivar_3, uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2);

ltedfapegproof_closure_57_t new_ltedfapegproof_closure_57(void);

void release_ltedfapegproof_closure_57(ltedfapegproof_funtype_56_t closure);

ltedfapegproof_closure_57_t copy_ltedfapegproof_closure_57(ltedfapegproof_closure_57_t x);


//good_parsetree?

struct ltedfapegproof_funtype_58_s;
        typedef struct ltedfapegproof_funtype_58_s * ltedfapegproof_funtype_58_t;

struct ltedfapegproof_funtype_58_ftbl_s {bool_t (* fptr)(struct ltedfapegproof_funtype_58_s *, ltedfapeg__ent_adt_t);
        bool_t (* mptr)(struct ltedfapegproof_funtype_58_s *, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_58_s *);
        struct ltedfapegproof_funtype_58_s * (* cptr)(struct ltedfapegproof_funtype_58_s *);};
typedef struct ltedfapegproof_funtype_58_ftbl_s * ltedfapegproof_funtype_58_ftbl_t;

struct ltedfapegproof_funtype_58_hashentry_s {uint32_t keyhash; ltedfapeg__ent_adt_t key; bool_t value;}; 
typedef struct ltedfapegproof_funtype_58_hashentry_s ltedfapegproof_funtype_58_hashentry_t;

struct ltedfapegproof_funtype_58_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_58_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_58_htbl_s * ltedfapegproof_funtype_58_htbl_t;

struct ltedfapegproof_funtype_58_s {uint32_t count;
        ltedfapegproof_funtype_58_ftbl_t ftbl;
        ltedfapegproof_funtype_58_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_58_s * ltedfapegproof_funtype_58_t;

extern void release_ltedfapegproof_funtype_58(ltedfapegproof_funtype_58_t x);

extern ltedfapegproof_funtype_58_t copy_ltedfapegproof_funtype_58(ltedfapegproof_funtype_58_t x);

extern bool_t equal_ltedfapegproof_funtype_58(ltedfapegproof_funtype_58_t x, ltedfapegproof_funtype_58_t y);

extern char* json_ltedfapegproof_funtype_58(ltedfapegproof_funtype_58_t x);


//buildtree

struct ltedfapegproof_record_59_s {
        uint32_t count; 
        ltedfapegproof_array_53_t scaf;
        uint64_t depth;
        ltedfapeg__ent_adt_t stack;
        bool_t lflag;};
typedef struct ltedfapegproof_record_59_s * ltedfapegproof_record_59_t;

extern ltedfapegproof_record_59_t new_ltedfapegproof_record_59(void);

extern void release_ltedfapegproof_record_59(ltedfapegproof_record_59_t x);

extern ltedfapegproof_record_59_t copy_ltedfapegproof_record_59(ltedfapegproof_record_59_t x);

extern bool_t equal_ltedfapegproof_record_59(ltedfapegproof_record_59_t x, ltedfapegproof_record_59_t y);
extern char * json_ltedfapegproof_record_59(ltedfapegproof_record_59_t x);

typedef struct actual_ltedfapegproof_record_59_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_59_t;
extern void release_ltedfapegproof_record_59_ptr(pointer_t x, type_actual_t ltedfapegproof_record_59);

extern bool_t equal_ltedfapegproof_record_59_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_59_t T);

extern char * json_ltedfapegproof_record_59_ptr(pointer_t x,  actual_ltedfapegproof_record_59_t T);

actual_ltedfapegproof_record_59_t actual_ltedfapegproof_record_59(void);

extern ltedfapegproof_record_59_t update_ltedfapegproof_record_59_scaf(ltedfapegproof_record_59_t x, ltedfapegproof_array_53_t v);

extern ltedfapegproof_record_59_t update_ltedfapegproof_record_59_depth(ltedfapegproof_record_59_t x, uint64_t v);

extern ltedfapegproof_record_59_t update_ltedfapegproof_record_59_stack(ltedfapegproof_record_59_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_59_t update_ltedfapegproof_record_59_lflag(ltedfapegproof_record_59_t x, bool_t v);


//buildproof

struct ltedfapegproof_record_60_s {
        uint32_t count; 
        ltedfapegproof_record_59_t project_1;
        uint8_t project_2;
        uint32_t project_3;};
typedef struct ltedfapegproof_record_60_s * ltedfapegproof_record_60_t;

extern ltedfapegproof_record_60_t new_ltedfapegproof_record_60(void);

extern void release_ltedfapegproof_record_60(ltedfapegproof_record_60_t x);

extern ltedfapegproof_record_60_t copy_ltedfapegproof_record_60(ltedfapegproof_record_60_t x);

extern bool_t equal_ltedfapegproof_record_60(ltedfapegproof_record_60_t x, ltedfapegproof_record_60_t y);
extern char * json_ltedfapegproof_record_60(ltedfapegproof_record_60_t x);

typedef struct actual_ltedfapegproof_record_60_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_60_t;
extern void release_ltedfapegproof_record_60_ptr(pointer_t x, type_actual_t ltedfapegproof_record_60);

extern bool_t equal_ltedfapegproof_record_60_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_60_t T);

extern char * json_ltedfapegproof_record_60_ptr(pointer_t x,  actual_ltedfapegproof_record_60_t T);

actual_ltedfapegproof_record_60_t actual_ltedfapegproof_record_60(void);

extern ltedfapegproof_record_60_t update_ltedfapegproof_record_60_project_1(ltedfapegproof_record_60_t x, ltedfapegproof_record_59_t v);

extern ltedfapegproof_record_60_t update_ltedfapegproof_record_60_project_2(ltedfapegproof_record_60_t x, uint8_t v);

extern ltedfapegproof_record_60_t update_ltedfapegproof_record_60_project_3(ltedfapegproof_record_60_t x, uint32_t v);


//buildproof

struct ltedfapegproof_funtype_61_s;
        typedef struct ltedfapegproof_funtype_61_s * ltedfapegproof_funtype_61_t;

struct ltedfapegproof_funtype_61_ftbl_s {ltedfapegproof__parsetree_adt_t (* fptr)(struct ltedfapegproof_funtype_61_s *, ltedfapegproof_record_60_t);
        ltedfapegproof__parsetree_adt_t (* mptr)(struct ltedfapegproof_funtype_61_s *, ltedfapegproof_record_59_t, uint8_t, uint32_t);
        void (* rptr)(struct ltedfapegproof_funtype_61_s *);
        struct ltedfapegproof_funtype_61_s * (* cptr)(struct ltedfapegproof_funtype_61_s *);};
typedef struct ltedfapegproof_funtype_61_ftbl_s * ltedfapegproof_funtype_61_ftbl_t;

struct ltedfapegproof_funtype_61_hashentry_s {uint32_t keyhash; ltedfapegproof_record_60_t key; ltedfapegproof__parsetree_adt_t value;}; 
typedef struct ltedfapegproof_funtype_61_hashentry_s ltedfapegproof_funtype_61_hashentry_t;

struct ltedfapegproof_funtype_61_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_61_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_61_htbl_s * ltedfapegproof_funtype_61_htbl_t;

struct ltedfapegproof_funtype_61_s {uint32_t count;
        ltedfapegproof_funtype_61_ftbl_t ftbl;
        ltedfapegproof_funtype_61_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_61_s * ltedfapegproof_funtype_61_t;

extern void release_ltedfapegproof_funtype_61(ltedfapegproof_funtype_61_t x);

extern ltedfapegproof_funtype_61_t copy_ltedfapegproof_funtype_61(ltedfapegproof_funtype_61_t x);

extern bool_t equal_ltedfapegproof_funtype_61(ltedfapegproof_funtype_61_t x, ltedfapegproof_funtype_61_t y);

extern char* json_ltedfapegproof_funtype_61(ltedfapegproof_funtype_61_t x);




struct ltedfapegproof_closure_62_s;
        typedef struct ltedfapegproof_closure_62_s * ltedfapegproof_closure_62_t;

struct ltedfapegproof_closure_62_s {uint32_t count;
         ltedfapegproof_funtype_61_ftbl_t ftbl;
         ltedfapegproof_funtype_61_htbl_t htbl;
        uint8_t fvar_1;
        uint32_t fvar_2;
        ltedfapegproof_array_51_t fvar_3;
        ltedfapeg__lang_spec_t fvar_4;
        uint32_t fvar_5;};

ltedfapegproof__parsetree_adt_t f_ltedfapegproof_closure_62(struct ltedfapegproof_closure_62_s * closure, ltedfapegproof_record_60_t bvar);

ltedfapegproof__parsetree_adt_t m_ltedfapegproof_closure_62(struct ltedfapegproof_closure_62_s * closure, ltedfapegproof_record_59_t bvar_1, uint8_t bvar_2, uint32_t bvar_3);

extern ltedfapegproof__parsetree_adt_t h_ltedfapegproof_closure_62(ltedfapegproof_record_59_t ivar_8, uint8_t ivar_10, uint32_t ivar_11, uint8_t ivar_5, uint32_t ivar_4, ltedfapegproof_array_51_t ivar_3, ltedfapeg__lang_spec_t ivar_2, uint32_t ivar_1);

ltedfapegproof_closure_62_t new_ltedfapegproof_closure_62(void);

void release_ltedfapegproof_closure_62(ltedfapegproof_funtype_61_t closure);

ltedfapegproof_closure_62_t copy_ltedfapegproof_closure_62(ltedfapegproof_closure_62_t x);


//buildproof

struct ltedfapegproof_funtype_63_s;
        typedef struct ltedfapegproof_funtype_63_s * ltedfapegproof_funtype_63_t;

struct ltedfapegproof_funtype_63_ftbl_s {ltedfapeg__ent_adt_t (* fptr)(struct ltedfapegproof_funtype_63_s *, uint8_t);
        ltedfapeg__ent_adt_t (* mptr)(struct ltedfapegproof_funtype_63_s *, uint8_t);
        void (* rptr)(struct ltedfapegproof_funtype_63_s *);
        struct ltedfapegproof_funtype_63_s * (* cptr)(struct ltedfapegproof_funtype_63_s *);};
typedef struct ltedfapegproof_funtype_63_ftbl_s * ltedfapegproof_funtype_63_ftbl_t;

struct ltedfapegproof_funtype_63_hashentry_s {uint32_t keyhash; uint8_t key; ltedfapeg__ent_adt_t value;}; 
typedef struct ltedfapegproof_funtype_63_hashentry_s ltedfapegproof_funtype_63_hashentry_t;

struct ltedfapegproof_funtype_63_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_63_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_63_htbl_s * ltedfapegproof_funtype_63_htbl_t;

struct ltedfapegproof_funtype_63_s {uint32_t count;
        ltedfapegproof_funtype_63_ftbl_t ftbl;
        ltedfapegproof_funtype_63_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_63_s * ltedfapegproof_funtype_63_t;

extern void release_ltedfapegproof_funtype_63(ltedfapegproof_funtype_63_t x);

extern ltedfapegproof_funtype_63_t copy_ltedfapegproof_funtype_63(ltedfapegproof_funtype_63_t x);

extern uint32_t lookup_ltedfapegproof_funtype_63(ltedfapegproof_funtype_63_htbl_t htbl, uint8_t i, uint32_t ihash);

extern ltedfapegproof_funtype_63_t dupdate_ltedfapegproof_funtype_63(ltedfapegproof_funtype_63_t a, uint8_t i, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_funtype_63_t update_ltedfapegproof_funtype_63(ltedfapegproof_funtype_63_t a, uint8_t i, ltedfapeg__ent_adt_t v);

extern bool_t equal_ltedfapegproof_funtype_63(ltedfapegproof_funtype_63_t x, ltedfapegproof_funtype_63_t y);

extern char* json_ltedfapegproof_funtype_63(ltedfapegproof_funtype_63_t x);




struct ltedfapegproof_closure_64_s;
        typedef struct ltedfapegproof_closure_64_s * ltedfapegproof_closure_64_t;

struct ltedfapegproof_closure_64_s {uint32_t count;
         ltedfapegproof_funtype_63_ftbl_t ftbl;
         ltedfapegproof_funtype_63_htbl_t htbl;};

ltedfapeg__ent_adt_t f_ltedfapegproof_closure_64(struct ltedfapegproof_closure_64_s * closure, uint8_t bvar);

ltedfapeg__ent_adt_t m_ltedfapegproof_closure_64(struct ltedfapegproof_closure_64_s * closure, uint8_t bvar);

extern ltedfapeg__ent_adt_t h_ltedfapegproof_closure_64(uint8_t ivar_31);

ltedfapegproof_closure_64_t new_ltedfapegproof_closure_64(void);

void release_ltedfapegproof_closure_64(ltedfapegproof_funtype_63_t closure);

ltedfapegproof_closure_64_t copy_ltedfapegproof_closure_64(ltedfapegproof_closure_64_t x);


//buildproof

struct ltedfapegproof_funtype_65_s;
        typedef struct ltedfapegproof_funtype_65_s * ltedfapegproof_funtype_65_t;

struct ltedfapegproof_funtype_65_ftbl_s {ltedfapegproof_funtype_63_t (* fptr)(struct ltedfapegproof_funtype_65_s *, uint32_t);
        ltedfapegproof_funtype_63_t (* mptr)(struct ltedfapegproof_funtype_65_s *, uint32_t);
        void (* rptr)(struct ltedfapegproof_funtype_65_s *);
        struct ltedfapegproof_funtype_65_s * (* cptr)(struct ltedfapegproof_funtype_65_s *);};
typedef struct ltedfapegproof_funtype_65_ftbl_s * ltedfapegproof_funtype_65_ftbl_t;

struct ltedfapegproof_funtype_65_hashentry_s {uint32_t keyhash; uint32_t key; ltedfapegproof_funtype_63_t value;}; 
typedef struct ltedfapegproof_funtype_65_hashentry_s ltedfapegproof_funtype_65_hashentry_t;

struct ltedfapegproof_funtype_65_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_65_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_65_htbl_s * ltedfapegproof_funtype_65_htbl_t;

struct ltedfapegproof_funtype_65_s {uint32_t count;
        ltedfapegproof_funtype_65_ftbl_t ftbl;
        ltedfapegproof_funtype_65_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_65_s * ltedfapegproof_funtype_65_t;

extern void release_ltedfapegproof_funtype_65(ltedfapegproof_funtype_65_t x);

extern ltedfapegproof_funtype_65_t copy_ltedfapegproof_funtype_65(ltedfapegproof_funtype_65_t x);

extern uint32_t lookup_ltedfapegproof_funtype_65(ltedfapegproof_funtype_65_htbl_t htbl, uint32_t i, uint32_t ihash);

extern ltedfapegproof_funtype_65_t dupdate_ltedfapegproof_funtype_65(ltedfapegproof_funtype_65_t a, uint32_t i, ltedfapegproof_funtype_63_t v);

extern ltedfapegproof_funtype_65_t update_ltedfapegproof_funtype_65(ltedfapegproof_funtype_65_t a, uint32_t i, ltedfapegproof_funtype_63_t v);

extern bool_t equal_ltedfapegproof_funtype_65(ltedfapegproof_funtype_65_t x, ltedfapegproof_funtype_65_t y);

extern char* json_ltedfapegproof_funtype_65(ltedfapegproof_funtype_65_t x);




struct ltedfapegproof_closure_66_s;
        typedef struct ltedfapegproof_closure_66_s * ltedfapegproof_closure_66_t;

struct ltedfapegproof_closure_66_s {uint32_t count;
         ltedfapegproof_funtype_65_ftbl_t ftbl;
         ltedfapegproof_funtype_65_htbl_t htbl;
        uint32_t fvar_1;
        ltedfapegproof_funtype_63_t fvar_2;};

ltedfapegproof_funtype_63_t f_ltedfapegproof_closure_66(struct ltedfapegproof_closure_66_s * closure, uint32_t bvar);

ltedfapegproof_funtype_63_t m_ltedfapegproof_closure_66(struct ltedfapegproof_closure_66_s * closure, uint32_t bvar);

extern ltedfapegproof_funtype_63_t h_ltedfapegproof_closure_66(uint32_t ivar_39, uint32_t ivar_1, ltedfapegproof_funtype_63_t ivar_27);

ltedfapegproof_closure_66_t new_ltedfapegproof_closure_66(void);

void release_ltedfapegproof_closure_66(ltedfapegproof_funtype_65_t closure);

ltedfapegproof_closure_66_t copy_ltedfapegproof_closure_66(ltedfapegproof_closure_66_t x);



extern bool_t ltedfapegproof__defentp(ltedfapeg__ent_adt_t ivar_1);

extern bool_t r_ltedfapegproof__zerop(ltedfapegproof__parsetree_adt_t ivar_1);

extern bool_t r_ltedfapegproof__onep(ltedfapegproof__parsetree_adt_t ivar_1);

extern bool_t r_ltedfapegproof__twop(ltedfapegproof__parsetree_adt_t ivar_1);

extern ltedfapegproof__parsetree_adt_t update_ltedfapegproof__parsetree_adt_nt(ltedfapegproof__parsetree_adt_t ivar_1, uint8_t ivar_11);

extern uint8_t ltedfapegproof__parsetree_adt_nt(ltedfapegproof__parsetree_adt_t ivar_1);

extern ltedfapegproof__parsetree_adt_t update_ltedfapegproof__parsetree_adt_entry(ltedfapegproof__parsetree_adt_t ivar_1, ltedfapeg__ent_adt_t ivar_11);

extern ltedfapeg__ent_adt_t ltedfapegproof__parsetree_adt_entry(ltedfapegproof__parsetree_adt_t ivar_1);

extern ltedfapegproof__parsetree_adt_t update_ltedfapegproof__parsetree_adt_subone(ltedfapegproof__parsetree_adt_t ivar_1, ltedfapegproof__parsetree_adt_t ivar_7);

extern ltedfapegproof__parsetree_adt_t ltedfapegproof__parsetree_adt_subone(ltedfapegproof__parsetree_adt_t ivar_1);

extern ltedfapegproof__two_t update_ltedfapegproof__parsetree_adt_subtwo(ltedfapegproof__parsetree_adt_t ivar_1, ltedfapegproof__parsetree_adt_t ivar_3);

extern ltedfapegproof__parsetree_adt_t ltedfapegproof__parsetree_adt_subtwo(ltedfapegproof__parsetree_adt_t ivar_1);

extern ltedfapegproof__parsetree_adt_t ltedfapegproof__zero(uint8_t ivar_2, ltedfapeg__ent_adt_t ivar_3);

extern ltedfapegproof__parsetree_adt_t ltedfapegproof__one(uint8_t ivar_2, ltedfapeg__ent_adt_t ivar_3, ltedfapegproof__parsetree_adt_t ivar_4);

extern ltedfapegproof__parsetree_adt_t ltedfapegproof__two(uint8_t ivar_2, ltedfapeg__ent_adt_t ivar_3, ltedfapegproof__parsetree_adt_t ivar_4, ltedfapegproof__parsetree_adt_t ivar_5);

extern ltedfapegproof_funtype_4_t ltedfapegproof__parsetree_ord(void);

extern uint8_t ltedfapegproof__ord__1(ltedfapegproof__parsetree_adt_t ivar_1);

extern bool_t ltedfapegproof__subterm__1(ltedfapegproof__parsetree_adt_t ivar_1, ltedfapegproof__parsetree_adt_t ivar_2);

extern bool_t ltedfapegproof__doublelessp__1(ltedfapegproof__parsetree_adt_t ivar_1, ltedfapegproof__parsetree_adt_t ivar_2);

extern ltedfapegproof_funtype_5_t ltedfapegproof__reduce_nat__1(ltedfapegproof_funtype_7_t ivar_1, ltedfapegproof_funtype_9_t ivar_3, ltedfapegproof_funtype_11_t ivar_5);

extern ltedfapegproof_funtype_5_t ltedfapegproof__REDUCE_nat__1(ltedfapegproof_funtype_14_t ivar_1, ltedfapegproof_funtype_16_t ivar_3, ltedfapegproof_funtype_18_t ivar_5);

extern ltedfapegproof_funtype_20_t ltedfapegproof__reduce_ordinal__1(ltedfapegproof_funtype_21_t ivar_1, ltedfapegproof_funtype_23_t ivar_3, ltedfapegproof_funtype_25_t ivar_5);

extern ltedfapegproof_funtype_20_t ltedfapegproof__REDUCE_ordinal__1(ltedfapegproof_funtype_27_t ivar_1, ltedfapegproof_funtype_29_t ivar_3, ltedfapegproof_funtype_31_t ivar_5);

extern bool_t r_ltedfapegproof__qemptyp(ltedfapegproof__qstack_adt_t ivar_1);

extern bool_t r_ltedfapegproof__qpushp(ltedfapegproof__qstack_adt_t ivar_1);

extern ltedfapegproof__qpush_t update_ltedfapegproof__qstack_adt_nonterm(ltedfapegproof__qstack_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t ltedfapegproof__qstack_adt_nonterm(ltedfapegproof__qstack_adt_t ivar_1);

extern ltedfapegproof__qpush_t update_ltedfapegproof__qstack_adt_pos(ltedfapegproof__qstack_adt_t ivar_1, uint32_t ivar_3);

extern uint32_t ltedfapegproof__qstack_adt_pos(ltedfapegproof__qstack_adt_t ivar_1);

extern ltedfapegproof__qpush_t update_ltedfapegproof__qstack_adt_qpop(ltedfapegproof__qstack_adt_t ivar_1, ltedfapegproof__qstack_adt_t ivar_3);

extern ltedfapegproof__qstack_adt_t ltedfapegproof__qstack_adt_qpop(ltedfapegproof__qstack_adt_t ivar_1);

extern ltedfapegproof__qstack_adt_t ltedfapegproof__qempty(void);

extern ltedfapegproof__qstack_adt_t ltedfapegproof__qpush(uint8_t ivar_2, uint32_t ivar_3, ltedfapegproof__qstack_adt_t ivar_4);

extern ltedfapegproof_funtype_35_t ltedfapegproof__qstack_ord(void);

extern uint8_t ltedfapegproof__ord__2(ltedfapegproof__qstack_adt_t ivar_1);

extern bool_t ltedfapegproof__subterm__2(ltedfapegproof__qstack_adt_t ivar_1, ltedfapegproof__qstack_adt_t ivar_2);

extern bool_t ltedfapegproof__doublelessp__2(ltedfapegproof__qstack_adt_t ivar_1, ltedfapegproof__qstack_adt_t ivar_2);

extern ltedfapegproof_funtype_36_t ltedfapegproof__reduce_nat__2(mpz_ptr_t ivar_1, ltedfapegproof_funtype_38_t ivar_2);

extern ltedfapegproof_funtype_36_t ltedfapegproof__REDUCE_nat__2(ltedfapegproof_funtype_36_t ivar_1, ltedfapegproof_funtype_41_t ivar_3);

extern ltedfapegproof_funtype_43_t ltedfapegproof__reduce_ordinal__2(ordstruct_adt__ordstruct_adt_t ivar_1, ltedfapegproof_funtype_45_t ivar_2);

extern ltedfapegproof_funtype_43_t ltedfapegproof__REDUCE_ordinal__2(ltedfapegproof_funtype_43_t ivar_1, ltedfapegproof_funtype_48_t ivar_3);

extern bool_t ltedfapegproof__inqstack(uint8_t ivar_1, uint32_t ivar_2, ltedfapegproof__qstack_adt_t ivar_3);

extern mpz_ptr_t ltedfapegproof__stacksize(ltedfapegproof__qstack_adt_t ivar_1);

extern ltedfapegproof_funtype_50_t ltedfapegproof__good_qstackp(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_51_t ivar_3, ltedfapegproof_array_53_t ivar_4);

extern ltedfapegproof_funtype_56_t ltedfapegproof__good_parsetreep(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_51_t ivar_3);

extern ltedfapegproof__parsetree_adt_t ltedfapegproof__buildtree(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_51_t ivar_3, uint32_t ivar_4, uint8_t ivar_5, ltedfapegproof_record_59_t ivar_6, ltedfapegproof__qstack_adt_t ivar_8, uint8_t ivar_9, uint32_t ivar_10);

extern ltedfapegproof__parsetree_adt_t ltedfapegproof__buildloop(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_51_t ivar_3, uint32_t ivar_4, uint8_t ivar_5, ltedfapegproof_record_59_t ivar_6, ltedfapegproof_array_53_t ivar_8, ltedfapegproof__qstack_adt_t ivar_10, uint8_t ivar_11, uint32_t ivar_12);

extern ltedfapegproof_funtype_61_t ltedfapegproof__buildproof(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_51_t ivar_3, uint32_t ivar_4, uint8_t ivar_5);

extern bool_t ltedfapegproof__allgoodentriesp(ltedfapegproof__parsetree_adt_t ivar_1);

extern ltedfapegproof__parsetree_adt_t ltedfapegproof__buildast(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_51_t ivar_3, uint32_t ivar_4, uint8_t ivar_5, ltedfapegproof_record_59_t ivar_6, ltedfapegproof__qstack_adt_t ivar_8, uint8_t ivar_9, uint32_t ivar_10);
#endif