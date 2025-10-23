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

extern ltedfapegproof__zero_t update_ltedfapegproof__zero_entry(ltedfapegproof__zero_t x, ltedfapeg__ent_adt_t v);


//one

struct ltedfapegproof__one_s {
        uint32_t count; 
        uint8_t ltedfapegproof__parsetree_adt_index;
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

extern ltedfapegproof__one_t update_ltedfapegproof__one_entry(ltedfapegproof__one_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof__one_t update_ltedfapegproof__one_subone(ltedfapegproof__one_t x, ltedfapegproof__parsetree_adt_t v);


//two

struct ltedfapegproof__two_s {
        uint32_t count; 
        uint8_t ltedfapegproof__parsetree_adt_index;
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

struct ltedfapegproof_funtype_6_s;
        typedef struct ltedfapegproof_funtype_6_s * ltedfapegproof_funtype_6_t;

struct ltedfapegproof_funtype_6_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_6_s *, ltedfapeg__ent_adt_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_6_s *, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_6_s *);
        struct ltedfapegproof_funtype_6_s * (* cptr)(struct ltedfapegproof_funtype_6_s *);};
typedef struct ltedfapegproof_funtype_6_ftbl_s * ltedfapegproof_funtype_6_ftbl_t;

struct ltedfapegproof_funtype_6_hashentry_s {uint32_t keyhash; ltedfapeg__ent_adt_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_6_hashentry_s ltedfapegproof_funtype_6_hashentry_t;

struct ltedfapegproof_funtype_6_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_6_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_6_htbl_s * ltedfapegproof_funtype_6_htbl_t;

struct ltedfapegproof_funtype_6_s {uint32_t count;
        ltedfapegproof_funtype_6_ftbl_t ftbl;
        ltedfapegproof_funtype_6_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_6_s * ltedfapegproof_funtype_6_t;

extern void release_ltedfapegproof_funtype_6(ltedfapegproof_funtype_6_t x);

extern ltedfapegproof_funtype_6_t copy_ltedfapegproof_funtype_6(ltedfapegproof_funtype_6_t x);

extern bool_t equal_ltedfapegproof_funtype_6(ltedfapegproof_funtype_6_t x, ltedfapegproof_funtype_6_t y);

extern char* json_ltedfapegproof_funtype_6(ltedfapegproof_funtype_6_t x);


//reduce_nat

struct ltedfapegproof_record_7_s {
        uint32_t count; 
        ltedfapeg__ent_adt_t project_1;
        mpz_t project_2;};
typedef struct ltedfapegproof_record_7_s * ltedfapegproof_record_7_t;

extern ltedfapegproof_record_7_t new_ltedfapegproof_record_7(void);

extern void release_ltedfapegproof_record_7(ltedfapegproof_record_7_t x);

extern ltedfapegproof_record_7_t copy_ltedfapegproof_record_7(ltedfapegproof_record_7_t x);

extern bool_t equal_ltedfapegproof_record_7(ltedfapegproof_record_7_t x, ltedfapegproof_record_7_t y);
extern char * json_ltedfapegproof_record_7(ltedfapegproof_record_7_t x);

typedef struct actual_ltedfapegproof_record_7_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_7_t;
extern void release_ltedfapegproof_record_7_ptr(pointer_t x, type_actual_t ltedfapegproof_record_7);

extern bool_t equal_ltedfapegproof_record_7_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_7_t T);

extern char * json_ltedfapegproof_record_7_ptr(pointer_t x,  actual_ltedfapegproof_record_7_t T);

actual_ltedfapegproof_record_7_t actual_ltedfapegproof_record_7(void);

extern ltedfapegproof_record_7_t update_ltedfapegproof_record_7_project_1(ltedfapegproof_record_7_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_7_t update_ltedfapegproof_record_7_project_2(ltedfapegproof_record_7_t x, mpz_ptr_t v);


//reduce_nat

struct ltedfapegproof_funtype_8_s;
        typedef struct ltedfapegproof_funtype_8_s * ltedfapegproof_funtype_8_t;

struct ltedfapegproof_funtype_8_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_8_s *, ltedfapegproof_record_7_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_8_s *, ltedfapeg__ent_adt_t, mpz_ptr_t);
        void (* rptr)(struct ltedfapegproof_funtype_8_s *);
        struct ltedfapegproof_funtype_8_s * (* cptr)(struct ltedfapegproof_funtype_8_s *);};
typedef struct ltedfapegproof_funtype_8_ftbl_s * ltedfapegproof_funtype_8_ftbl_t;

struct ltedfapegproof_funtype_8_hashentry_s {uint32_t keyhash; ltedfapegproof_record_7_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_8_hashentry_s ltedfapegproof_funtype_8_hashentry_t;

struct ltedfapegproof_funtype_8_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_8_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_8_htbl_s * ltedfapegproof_funtype_8_htbl_t;

struct ltedfapegproof_funtype_8_s {uint32_t count;
        ltedfapegproof_funtype_8_ftbl_t ftbl;
        ltedfapegproof_funtype_8_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_8_s * ltedfapegproof_funtype_8_t;

extern void release_ltedfapegproof_funtype_8(ltedfapegproof_funtype_8_t x);

extern ltedfapegproof_funtype_8_t copy_ltedfapegproof_funtype_8(ltedfapegproof_funtype_8_t x);

extern bool_t equal_ltedfapegproof_funtype_8(ltedfapegproof_funtype_8_t x, ltedfapegproof_funtype_8_t y);

extern char* json_ltedfapegproof_funtype_8(ltedfapegproof_funtype_8_t x);


//reduce_nat

struct ltedfapegproof_record_9_s {
        uint32_t count; 
        ltedfapeg__ent_adt_t project_1;
        mpz_t project_2;
        mpz_t project_3;};
typedef struct ltedfapegproof_record_9_s * ltedfapegproof_record_9_t;

extern ltedfapegproof_record_9_t new_ltedfapegproof_record_9(void);

extern void release_ltedfapegproof_record_9(ltedfapegproof_record_9_t x);

extern ltedfapegproof_record_9_t copy_ltedfapegproof_record_9(ltedfapegproof_record_9_t x);

extern bool_t equal_ltedfapegproof_record_9(ltedfapegproof_record_9_t x, ltedfapegproof_record_9_t y);
extern char * json_ltedfapegproof_record_9(ltedfapegproof_record_9_t x);

typedef struct actual_ltedfapegproof_record_9_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_9_t;
extern void release_ltedfapegproof_record_9_ptr(pointer_t x, type_actual_t ltedfapegproof_record_9);

extern bool_t equal_ltedfapegproof_record_9_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_9_t T);

extern char * json_ltedfapegproof_record_9_ptr(pointer_t x,  actual_ltedfapegproof_record_9_t T);

actual_ltedfapegproof_record_9_t actual_ltedfapegproof_record_9(void);

extern ltedfapegproof_record_9_t update_ltedfapegproof_record_9_project_1(ltedfapegproof_record_9_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_9_t update_ltedfapegproof_record_9_project_2(ltedfapegproof_record_9_t x, mpz_ptr_t v);

extern ltedfapegproof_record_9_t update_ltedfapegproof_record_9_project_3(ltedfapegproof_record_9_t x, mpz_ptr_t v);


//reduce_nat

struct ltedfapegproof_funtype_10_s;
        typedef struct ltedfapegproof_funtype_10_s * ltedfapegproof_funtype_10_t;

struct ltedfapegproof_funtype_10_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_10_s *, ltedfapegproof_record_9_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_10_s *, ltedfapeg__ent_adt_t, mpz_ptr_t, mpz_ptr_t);
        void (* rptr)(struct ltedfapegproof_funtype_10_s *);
        struct ltedfapegproof_funtype_10_s * (* cptr)(struct ltedfapegproof_funtype_10_s *);};
typedef struct ltedfapegproof_funtype_10_ftbl_s * ltedfapegproof_funtype_10_ftbl_t;

struct ltedfapegproof_funtype_10_hashentry_s {uint32_t keyhash; ltedfapegproof_record_9_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_10_hashentry_s ltedfapegproof_funtype_10_hashentry_t;

struct ltedfapegproof_funtype_10_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_10_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_10_htbl_s * ltedfapegproof_funtype_10_htbl_t;

struct ltedfapegproof_funtype_10_s {uint32_t count;
        ltedfapegproof_funtype_10_ftbl_t ftbl;
        ltedfapegproof_funtype_10_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_10_s * ltedfapegproof_funtype_10_t;

extern void release_ltedfapegproof_funtype_10(ltedfapegproof_funtype_10_t x);

extern ltedfapegproof_funtype_10_t copy_ltedfapegproof_funtype_10(ltedfapegproof_funtype_10_t x);

extern bool_t equal_ltedfapegproof_funtype_10(ltedfapegproof_funtype_10_t x, ltedfapegproof_funtype_10_t y);

extern char* json_ltedfapegproof_funtype_10(ltedfapegproof_funtype_10_t x);




struct ltedfapegproof_closure_11_s;
        typedef struct ltedfapegproof_closure_11_s * ltedfapegproof_closure_11_t;

struct ltedfapegproof_closure_11_s {uint32_t count;
         ltedfapegproof_funtype_5_ftbl_t ftbl;
         ltedfapegproof_funtype_5_htbl_t htbl;
        ltedfapegproof_funtype_8_t fvar_1;
        ltedfapegproof_funtype_10_t fvar_2;
        ltedfapegproof_funtype_6_t fvar_3;};

mpz_ptr_t f_ltedfapegproof_closure_11(struct ltedfapegproof_closure_11_s * closure, ltedfapegproof__parsetree_adt_t bvar);

mpz_ptr_t m_ltedfapegproof_closure_11(struct ltedfapegproof_closure_11_s * closure, ltedfapegproof__parsetree_adt_t bvar);

extern mpz_ptr_t h_ltedfapegproof_closure_11(ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_funtype_8_t ivar_3, ltedfapegproof_funtype_10_t ivar_5, ltedfapegproof_funtype_6_t ivar_1);

ltedfapegproof_closure_11_t new_ltedfapegproof_closure_11(void);

void release_ltedfapegproof_closure_11(ltedfapegproof_funtype_5_t closure);

ltedfapegproof_closure_11_t copy_ltedfapegproof_closure_11(ltedfapegproof_closure_11_t x);


//REDUCE_nat

struct ltedfapegproof_record_12_s {
        uint32_t count; 
        ltedfapeg__ent_adt_t project_1;
        ltedfapegproof__parsetree_adt_t project_2;};
typedef struct ltedfapegproof_record_12_s * ltedfapegproof_record_12_t;

extern ltedfapegproof_record_12_t new_ltedfapegproof_record_12(void);

extern void release_ltedfapegproof_record_12(ltedfapegproof_record_12_t x);

extern ltedfapegproof_record_12_t copy_ltedfapegproof_record_12(ltedfapegproof_record_12_t x);

extern bool_t equal_ltedfapegproof_record_12(ltedfapegproof_record_12_t x, ltedfapegproof_record_12_t y);
extern char * json_ltedfapegproof_record_12(ltedfapegproof_record_12_t x);

typedef struct actual_ltedfapegproof_record_12_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_12_t;
extern void release_ltedfapegproof_record_12_ptr(pointer_t x, type_actual_t ltedfapegproof_record_12);

extern bool_t equal_ltedfapegproof_record_12_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_12_t T);

extern char * json_ltedfapegproof_record_12_ptr(pointer_t x,  actual_ltedfapegproof_record_12_t T);

actual_ltedfapegproof_record_12_t actual_ltedfapegproof_record_12(void);

extern ltedfapegproof_record_12_t update_ltedfapegproof_record_12_project_1(ltedfapegproof_record_12_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_12_t update_ltedfapegproof_record_12_project_2(ltedfapegproof_record_12_t x, ltedfapegproof__parsetree_adt_t v);


//REDUCE_nat

struct ltedfapegproof_funtype_13_s;
        typedef struct ltedfapegproof_funtype_13_s * ltedfapegproof_funtype_13_t;

struct ltedfapegproof_funtype_13_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_13_s *, ltedfapegproof_record_12_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_13_s *, ltedfapeg__ent_adt_t, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_13_s *);
        struct ltedfapegproof_funtype_13_s * (* cptr)(struct ltedfapegproof_funtype_13_s *);};
typedef struct ltedfapegproof_funtype_13_ftbl_s * ltedfapegproof_funtype_13_ftbl_t;

struct ltedfapegproof_funtype_13_hashentry_s {uint32_t keyhash; ltedfapegproof_record_12_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_13_hashentry_s ltedfapegproof_funtype_13_hashentry_t;

struct ltedfapegproof_funtype_13_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_13_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_13_htbl_s * ltedfapegproof_funtype_13_htbl_t;

struct ltedfapegproof_funtype_13_s {uint32_t count;
        ltedfapegproof_funtype_13_ftbl_t ftbl;
        ltedfapegproof_funtype_13_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_13_s * ltedfapegproof_funtype_13_t;

extern void release_ltedfapegproof_funtype_13(ltedfapegproof_funtype_13_t x);

extern ltedfapegproof_funtype_13_t copy_ltedfapegproof_funtype_13(ltedfapegproof_funtype_13_t x);

extern bool_t equal_ltedfapegproof_funtype_13(ltedfapegproof_funtype_13_t x, ltedfapegproof_funtype_13_t y);

extern char* json_ltedfapegproof_funtype_13(ltedfapegproof_funtype_13_t x);


//REDUCE_nat

struct ltedfapegproof_record_14_s {
        uint32_t count; 
        ltedfapeg__ent_adt_t project_1;
        mpz_t project_2;
        ltedfapegproof__parsetree_adt_t project_3;};
typedef struct ltedfapegproof_record_14_s * ltedfapegproof_record_14_t;

extern ltedfapegproof_record_14_t new_ltedfapegproof_record_14(void);

extern void release_ltedfapegproof_record_14(ltedfapegproof_record_14_t x);

extern ltedfapegproof_record_14_t copy_ltedfapegproof_record_14(ltedfapegproof_record_14_t x);

extern bool_t equal_ltedfapegproof_record_14(ltedfapegproof_record_14_t x, ltedfapegproof_record_14_t y);
extern char * json_ltedfapegproof_record_14(ltedfapegproof_record_14_t x);

typedef struct actual_ltedfapegproof_record_14_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_14_t;
extern void release_ltedfapegproof_record_14_ptr(pointer_t x, type_actual_t ltedfapegproof_record_14);

extern bool_t equal_ltedfapegproof_record_14_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_14_t T);

extern char * json_ltedfapegproof_record_14_ptr(pointer_t x,  actual_ltedfapegproof_record_14_t T);

actual_ltedfapegproof_record_14_t actual_ltedfapegproof_record_14(void);

extern ltedfapegproof_record_14_t update_ltedfapegproof_record_14_project_1(ltedfapegproof_record_14_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_14_t update_ltedfapegproof_record_14_project_2(ltedfapegproof_record_14_t x, mpz_ptr_t v);

extern ltedfapegproof_record_14_t update_ltedfapegproof_record_14_project_3(ltedfapegproof_record_14_t x, ltedfapegproof__parsetree_adt_t v);


//REDUCE_nat

struct ltedfapegproof_funtype_15_s;
        typedef struct ltedfapegproof_funtype_15_s * ltedfapegproof_funtype_15_t;

struct ltedfapegproof_funtype_15_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_15_s *, ltedfapegproof_record_14_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_15_s *, ltedfapeg__ent_adt_t, mpz_ptr_t, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_15_s *);
        struct ltedfapegproof_funtype_15_s * (* cptr)(struct ltedfapegproof_funtype_15_s *);};
typedef struct ltedfapegproof_funtype_15_ftbl_s * ltedfapegproof_funtype_15_ftbl_t;

struct ltedfapegproof_funtype_15_hashentry_s {uint32_t keyhash; ltedfapegproof_record_14_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_15_hashentry_s ltedfapegproof_funtype_15_hashentry_t;

struct ltedfapegproof_funtype_15_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_15_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_15_htbl_s * ltedfapegproof_funtype_15_htbl_t;

struct ltedfapegproof_funtype_15_s {uint32_t count;
        ltedfapegproof_funtype_15_ftbl_t ftbl;
        ltedfapegproof_funtype_15_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_15_s * ltedfapegproof_funtype_15_t;

extern void release_ltedfapegproof_funtype_15(ltedfapegproof_funtype_15_t x);

extern ltedfapegproof_funtype_15_t copy_ltedfapegproof_funtype_15(ltedfapegproof_funtype_15_t x);

extern bool_t equal_ltedfapegproof_funtype_15(ltedfapegproof_funtype_15_t x, ltedfapegproof_funtype_15_t y);

extern char* json_ltedfapegproof_funtype_15(ltedfapegproof_funtype_15_t x);


//REDUCE_nat

struct ltedfapegproof_record_16_s {
        uint32_t count; 
        ltedfapeg__ent_adt_t project_1;
        mpz_t project_2;
        mpz_t project_3;
        ltedfapegproof__parsetree_adt_t project_4;};
typedef struct ltedfapegproof_record_16_s * ltedfapegproof_record_16_t;

extern ltedfapegproof_record_16_t new_ltedfapegproof_record_16(void);

extern void release_ltedfapegproof_record_16(ltedfapegproof_record_16_t x);

extern ltedfapegproof_record_16_t copy_ltedfapegproof_record_16(ltedfapegproof_record_16_t x);

extern bool_t equal_ltedfapegproof_record_16(ltedfapegproof_record_16_t x, ltedfapegproof_record_16_t y);
extern char * json_ltedfapegproof_record_16(ltedfapegproof_record_16_t x);

typedef struct actual_ltedfapegproof_record_16_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_16_t;
extern void release_ltedfapegproof_record_16_ptr(pointer_t x, type_actual_t ltedfapegproof_record_16);

extern bool_t equal_ltedfapegproof_record_16_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_16_t T);

extern char * json_ltedfapegproof_record_16_ptr(pointer_t x,  actual_ltedfapegproof_record_16_t T);

actual_ltedfapegproof_record_16_t actual_ltedfapegproof_record_16(void);

extern ltedfapegproof_record_16_t update_ltedfapegproof_record_16_project_1(ltedfapegproof_record_16_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_16_t update_ltedfapegproof_record_16_project_2(ltedfapegproof_record_16_t x, mpz_ptr_t v);

extern ltedfapegproof_record_16_t update_ltedfapegproof_record_16_project_3(ltedfapegproof_record_16_t x, mpz_ptr_t v);

extern ltedfapegproof_record_16_t update_ltedfapegproof_record_16_project_4(ltedfapegproof_record_16_t x, ltedfapegproof__parsetree_adt_t v);


//REDUCE_nat

struct ltedfapegproof_funtype_17_s;
        typedef struct ltedfapegproof_funtype_17_s * ltedfapegproof_funtype_17_t;

struct ltedfapegproof_funtype_17_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_17_s *, ltedfapegproof_record_16_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_17_s *, ltedfapeg__ent_adt_t, mpz_ptr_t, mpz_ptr_t, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_17_s *);
        struct ltedfapegproof_funtype_17_s * (* cptr)(struct ltedfapegproof_funtype_17_s *);};
typedef struct ltedfapegproof_funtype_17_ftbl_s * ltedfapegproof_funtype_17_ftbl_t;

struct ltedfapegproof_funtype_17_hashentry_s {uint32_t keyhash; ltedfapegproof_record_16_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_17_hashentry_s ltedfapegproof_funtype_17_hashentry_t;

struct ltedfapegproof_funtype_17_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_17_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_17_htbl_s * ltedfapegproof_funtype_17_htbl_t;

struct ltedfapegproof_funtype_17_s {uint32_t count;
        ltedfapegproof_funtype_17_ftbl_t ftbl;
        ltedfapegproof_funtype_17_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_17_s * ltedfapegproof_funtype_17_t;

extern void release_ltedfapegproof_funtype_17(ltedfapegproof_funtype_17_t x);

extern ltedfapegproof_funtype_17_t copy_ltedfapegproof_funtype_17(ltedfapegproof_funtype_17_t x);

extern bool_t equal_ltedfapegproof_funtype_17(ltedfapegproof_funtype_17_t x, ltedfapegproof_funtype_17_t y);

extern char* json_ltedfapegproof_funtype_17(ltedfapegproof_funtype_17_t x);




struct ltedfapegproof_closure_18_s;
        typedef struct ltedfapegproof_closure_18_s * ltedfapegproof_closure_18_t;

struct ltedfapegproof_closure_18_s {uint32_t count;
         ltedfapegproof_funtype_5_ftbl_t ftbl;
         ltedfapegproof_funtype_5_htbl_t htbl;
        ltedfapegproof_funtype_15_t fvar_1;
        ltedfapegproof_funtype_17_t fvar_2;
        ltedfapegproof_funtype_13_t fvar_3;};

mpz_ptr_t f_ltedfapegproof_closure_18(struct ltedfapegproof_closure_18_s * closure, ltedfapegproof__parsetree_adt_t bvar);

mpz_ptr_t m_ltedfapegproof_closure_18(struct ltedfapegproof_closure_18_s * closure, ltedfapegproof__parsetree_adt_t bvar);

extern mpz_ptr_t h_ltedfapegproof_closure_18(ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_funtype_15_t ivar_3, ltedfapegproof_funtype_17_t ivar_5, ltedfapegproof_funtype_13_t ivar_1);

ltedfapegproof_closure_18_t new_ltedfapegproof_closure_18(void);

void release_ltedfapegproof_closure_18(ltedfapegproof_funtype_5_t closure);

ltedfapegproof_closure_18_t copy_ltedfapegproof_closure_18(ltedfapegproof_closure_18_t x);


//reduce_ordinal

struct ltedfapegproof_funtype_19_s;
        typedef struct ltedfapegproof_funtype_19_s * ltedfapegproof_funtype_19_t;

struct ltedfapegproof_funtype_19_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_19_s *, ltedfapegproof__parsetree_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_19_s *, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_19_s *);
        struct ltedfapegproof_funtype_19_s * (* cptr)(struct ltedfapegproof_funtype_19_s *);};
typedef struct ltedfapegproof_funtype_19_ftbl_s * ltedfapegproof_funtype_19_ftbl_t;

struct ltedfapegproof_funtype_19_hashentry_s {uint32_t keyhash; ltedfapegproof__parsetree_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_19_hashentry_s ltedfapegproof_funtype_19_hashentry_t;

struct ltedfapegproof_funtype_19_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_19_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_19_htbl_s * ltedfapegproof_funtype_19_htbl_t;

struct ltedfapegproof_funtype_19_s {uint32_t count;
        ltedfapegproof_funtype_19_ftbl_t ftbl;
        ltedfapegproof_funtype_19_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_19_s * ltedfapegproof_funtype_19_t;

extern void release_ltedfapegproof_funtype_19(ltedfapegproof_funtype_19_t x);

extern ltedfapegproof_funtype_19_t copy_ltedfapegproof_funtype_19(ltedfapegproof_funtype_19_t x);

extern bool_t equal_ltedfapegproof_funtype_19(ltedfapegproof_funtype_19_t x, ltedfapegproof_funtype_19_t y);

extern char* json_ltedfapegproof_funtype_19(ltedfapegproof_funtype_19_t x);


//reduce_ordinal

struct ltedfapegproof_funtype_20_s;
        typedef struct ltedfapegproof_funtype_20_s * ltedfapegproof_funtype_20_t;

struct ltedfapegproof_funtype_20_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_20_s *, ltedfapeg__ent_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_20_s *, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_20_s *);
        struct ltedfapegproof_funtype_20_s * (* cptr)(struct ltedfapegproof_funtype_20_s *);};
typedef struct ltedfapegproof_funtype_20_ftbl_s * ltedfapegproof_funtype_20_ftbl_t;

struct ltedfapegproof_funtype_20_hashentry_s {uint32_t keyhash; ltedfapeg__ent_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
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

struct ltedfapegproof_record_21_s {
        uint32_t count; 
        ltedfapeg__ent_adt_t project_1;
        ordstruct_adt__ordstruct_adt_t project_2;};
typedef struct ltedfapegproof_record_21_s * ltedfapegproof_record_21_t;

extern ltedfapegproof_record_21_t new_ltedfapegproof_record_21(void);

extern void release_ltedfapegproof_record_21(ltedfapegproof_record_21_t x);

extern ltedfapegproof_record_21_t copy_ltedfapegproof_record_21(ltedfapegproof_record_21_t x);

extern bool_t equal_ltedfapegproof_record_21(ltedfapegproof_record_21_t x, ltedfapegproof_record_21_t y);
extern char * json_ltedfapegproof_record_21(ltedfapegproof_record_21_t x);

typedef struct actual_ltedfapegproof_record_21_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_21_t;
extern void release_ltedfapegproof_record_21_ptr(pointer_t x, type_actual_t ltedfapegproof_record_21);

extern bool_t equal_ltedfapegproof_record_21_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_21_t T);

extern char * json_ltedfapegproof_record_21_ptr(pointer_t x,  actual_ltedfapegproof_record_21_t T);

actual_ltedfapegproof_record_21_t actual_ltedfapegproof_record_21(void);

extern ltedfapegproof_record_21_t update_ltedfapegproof_record_21_project_1(ltedfapegproof_record_21_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_21_t update_ltedfapegproof_record_21_project_2(ltedfapegproof_record_21_t x, ordstruct_adt__ordstruct_adt_t v);


//reduce_ordinal

struct ltedfapegproof_funtype_22_s;
        typedef struct ltedfapegproof_funtype_22_s * ltedfapegproof_funtype_22_t;

struct ltedfapegproof_funtype_22_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_22_s *, ltedfapegproof_record_21_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_22_s *, ltedfapeg__ent_adt_t, ordstruct_adt__ordstruct_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_22_s *);
        struct ltedfapegproof_funtype_22_s * (* cptr)(struct ltedfapegproof_funtype_22_s *);};
typedef struct ltedfapegproof_funtype_22_ftbl_s * ltedfapegproof_funtype_22_ftbl_t;

struct ltedfapegproof_funtype_22_hashentry_s {uint32_t keyhash; ltedfapegproof_record_21_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_22_hashentry_s ltedfapegproof_funtype_22_hashentry_t;

struct ltedfapegproof_funtype_22_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_22_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_22_htbl_s * ltedfapegproof_funtype_22_htbl_t;

struct ltedfapegproof_funtype_22_s {uint32_t count;
        ltedfapegproof_funtype_22_ftbl_t ftbl;
        ltedfapegproof_funtype_22_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_22_s * ltedfapegproof_funtype_22_t;

extern void release_ltedfapegproof_funtype_22(ltedfapegproof_funtype_22_t x);

extern ltedfapegproof_funtype_22_t copy_ltedfapegproof_funtype_22(ltedfapegproof_funtype_22_t x);

extern bool_t equal_ltedfapegproof_funtype_22(ltedfapegproof_funtype_22_t x, ltedfapegproof_funtype_22_t y);

extern char* json_ltedfapegproof_funtype_22(ltedfapegproof_funtype_22_t x);


//reduce_ordinal

struct ltedfapegproof_record_23_s {
        uint32_t count; 
        ltedfapeg__ent_adt_t project_1;
        ordstruct_adt__ordstruct_adt_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;};
typedef struct ltedfapegproof_record_23_s * ltedfapegproof_record_23_t;

extern ltedfapegproof_record_23_t new_ltedfapegproof_record_23(void);

extern void release_ltedfapegproof_record_23(ltedfapegproof_record_23_t x);

extern ltedfapegproof_record_23_t copy_ltedfapegproof_record_23(ltedfapegproof_record_23_t x);

extern bool_t equal_ltedfapegproof_record_23(ltedfapegproof_record_23_t x, ltedfapegproof_record_23_t y);
extern char * json_ltedfapegproof_record_23(ltedfapegproof_record_23_t x);

typedef struct actual_ltedfapegproof_record_23_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_23_t;
extern void release_ltedfapegproof_record_23_ptr(pointer_t x, type_actual_t ltedfapegproof_record_23);

extern bool_t equal_ltedfapegproof_record_23_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_23_t T);

extern char * json_ltedfapegproof_record_23_ptr(pointer_t x,  actual_ltedfapegproof_record_23_t T);

actual_ltedfapegproof_record_23_t actual_ltedfapegproof_record_23(void);

extern ltedfapegproof_record_23_t update_ltedfapegproof_record_23_project_1(ltedfapegproof_record_23_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_23_t update_ltedfapegproof_record_23_project_2(ltedfapegproof_record_23_t x, ordstruct_adt__ordstruct_adt_t v);

extern ltedfapegproof_record_23_t update_ltedfapegproof_record_23_project_3(ltedfapegproof_record_23_t x, ordstruct_adt__ordstruct_adt_t v);


//reduce_ordinal

struct ltedfapegproof_funtype_24_s;
        typedef struct ltedfapegproof_funtype_24_s * ltedfapegproof_funtype_24_t;

struct ltedfapegproof_funtype_24_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_24_s *, ltedfapegproof_record_23_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_24_s *, ltedfapeg__ent_adt_t, ordstruct_adt__ordstruct_adt_t, ordstruct_adt__ordstruct_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_24_s *);
        struct ltedfapegproof_funtype_24_s * (* cptr)(struct ltedfapegproof_funtype_24_s *);};
typedef struct ltedfapegproof_funtype_24_ftbl_s * ltedfapegproof_funtype_24_ftbl_t;

struct ltedfapegproof_funtype_24_hashentry_s {uint32_t keyhash; ltedfapegproof_record_23_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_24_hashentry_s ltedfapegproof_funtype_24_hashentry_t;

struct ltedfapegproof_funtype_24_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_24_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_24_htbl_s * ltedfapegproof_funtype_24_htbl_t;

struct ltedfapegproof_funtype_24_s {uint32_t count;
        ltedfapegproof_funtype_24_ftbl_t ftbl;
        ltedfapegproof_funtype_24_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_24_s * ltedfapegproof_funtype_24_t;

extern void release_ltedfapegproof_funtype_24(ltedfapegproof_funtype_24_t x);

extern ltedfapegproof_funtype_24_t copy_ltedfapegproof_funtype_24(ltedfapegproof_funtype_24_t x);

extern bool_t equal_ltedfapegproof_funtype_24(ltedfapegproof_funtype_24_t x, ltedfapegproof_funtype_24_t y);

extern char* json_ltedfapegproof_funtype_24(ltedfapegproof_funtype_24_t x);




struct ltedfapegproof_closure_25_s;
        typedef struct ltedfapegproof_closure_25_s * ltedfapegproof_closure_25_t;

struct ltedfapegproof_closure_25_s {uint32_t count;
         ltedfapegproof_funtype_19_ftbl_t ftbl;
         ltedfapegproof_funtype_19_htbl_t htbl;
        ltedfapegproof_funtype_22_t fvar_1;
        ltedfapegproof_funtype_24_t fvar_2;
        ltedfapegproof_funtype_20_t fvar_3;};

ordstruct_adt__ordstruct_adt_t f_ltedfapegproof_closure_25(struct ltedfapegproof_closure_25_s * closure, ltedfapegproof__parsetree_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltedfapegproof_closure_25(struct ltedfapegproof_closure_25_s * closure, ltedfapegproof__parsetree_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltedfapegproof_closure_25(ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_funtype_22_t ivar_3, ltedfapegproof_funtype_24_t ivar_5, ltedfapegproof_funtype_20_t ivar_1);

ltedfapegproof_closure_25_t new_ltedfapegproof_closure_25(void);

void release_ltedfapegproof_closure_25(ltedfapegproof_funtype_19_t closure);

ltedfapegproof_closure_25_t copy_ltedfapegproof_closure_25(ltedfapegproof_closure_25_t x);


//REDUCE_ordinal

struct ltedfapegproof_funtype_26_s;
        typedef struct ltedfapegproof_funtype_26_s * ltedfapegproof_funtype_26_t;

struct ltedfapegproof_funtype_26_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_26_s *, ltedfapegproof_record_12_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_26_s *, ltedfapeg__ent_adt_t, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_26_s *);
        struct ltedfapegproof_funtype_26_s * (* cptr)(struct ltedfapegproof_funtype_26_s *);};
typedef struct ltedfapegproof_funtype_26_ftbl_s * ltedfapegproof_funtype_26_ftbl_t;

struct ltedfapegproof_funtype_26_hashentry_s {uint32_t keyhash; ltedfapegproof_record_12_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_26_hashentry_s ltedfapegproof_funtype_26_hashentry_t;

struct ltedfapegproof_funtype_26_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_26_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_26_htbl_s * ltedfapegproof_funtype_26_htbl_t;

struct ltedfapegproof_funtype_26_s {uint32_t count;
        ltedfapegproof_funtype_26_ftbl_t ftbl;
        ltedfapegproof_funtype_26_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_26_s * ltedfapegproof_funtype_26_t;

extern void release_ltedfapegproof_funtype_26(ltedfapegproof_funtype_26_t x);

extern ltedfapegproof_funtype_26_t copy_ltedfapegproof_funtype_26(ltedfapegproof_funtype_26_t x);

extern bool_t equal_ltedfapegproof_funtype_26(ltedfapegproof_funtype_26_t x, ltedfapegproof_funtype_26_t y);

extern char* json_ltedfapegproof_funtype_26(ltedfapegproof_funtype_26_t x);


//REDUCE_ordinal

struct ltedfapegproof_record_27_s {
        uint32_t count; 
        ltedfapeg__ent_adt_t project_1;
        ordstruct_adt__ordstruct_adt_t project_2;
        ltedfapegproof__parsetree_adt_t project_3;};
typedef struct ltedfapegproof_record_27_s * ltedfapegproof_record_27_t;

extern ltedfapegproof_record_27_t new_ltedfapegproof_record_27(void);

extern void release_ltedfapegproof_record_27(ltedfapegproof_record_27_t x);

extern ltedfapegproof_record_27_t copy_ltedfapegproof_record_27(ltedfapegproof_record_27_t x);

extern bool_t equal_ltedfapegproof_record_27(ltedfapegproof_record_27_t x, ltedfapegproof_record_27_t y);
extern char * json_ltedfapegproof_record_27(ltedfapegproof_record_27_t x);

typedef struct actual_ltedfapegproof_record_27_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_27_t;
extern void release_ltedfapegproof_record_27_ptr(pointer_t x, type_actual_t ltedfapegproof_record_27);

extern bool_t equal_ltedfapegproof_record_27_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_27_t T);

extern char * json_ltedfapegproof_record_27_ptr(pointer_t x,  actual_ltedfapegproof_record_27_t T);

actual_ltedfapegproof_record_27_t actual_ltedfapegproof_record_27(void);

extern ltedfapegproof_record_27_t update_ltedfapegproof_record_27_project_1(ltedfapegproof_record_27_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_27_t update_ltedfapegproof_record_27_project_2(ltedfapegproof_record_27_t x, ordstruct_adt__ordstruct_adt_t v);

extern ltedfapegproof_record_27_t update_ltedfapegproof_record_27_project_3(ltedfapegproof_record_27_t x, ltedfapegproof__parsetree_adt_t v);


//REDUCE_ordinal

struct ltedfapegproof_funtype_28_s;
        typedef struct ltedfapegproof_funtype_28_s * ltedfapegproof_funtype_28_t;

struct ltedfapegproof_funtype_28_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_28_s *, ltedfapegproof_record_27_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_28_s *, ltedfapeg__ent_adt_t, ordstruct_adt__ordstruct_adt_t, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_28_s *);
        struct ltedfapegproof_funtype_28_s * (* cptr)(struct ltedfapegproof_funtype_28_s *);};
typedef struct ltedfapegproof_funtype_28_ftbl_s * ltedfapegproof_funtype_28_ftbl_t;

struct ltedfapegproof_funtype_28_hashentry_s {uint32_t keyhash; ltedfapegproof_record_27_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_28_hashentry_s ltedfapegproof_funtype_28_hashentry_t;

struct ltedfapegproof_funtype_28_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_28_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_28_htbl_s * ltedfapegproof_funtype_28_htbl_t;

struct ltedfapegproof_funtype_28_s {uint32_t count;
        ltedfapegproof_funtype_28_ftbl_t ftbl;
        ltedfapegproof_funtype_28_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_28_s * ltedfapegproof_funtype_28_t;

extern void release_ltedfapegproof_funtype_28(ltedfapegproof_funtype_28_t x);

extern ltedfapegproof_funtype_28_t copy_ltedfapegproof_funtype_28(ltedfapegproof_funtype_28_t x);

extern bool_t equal_ltedfapegproof_funtype_28(ltedfapegproof_funtype_28_t x, ltedfapegproof_funtype_28_t y);

extern char* json_ltedfapegproof_funtype_28(ltedfapegproof_funtype_28_t x);


//REDUCE_ordinal

struct ltedfapegproof_record_29_s {
        uint32_t count; 
        ltedfapeg__ent_adt_t project_1;
        ordstruct_adt__ordstruct_adt_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;
        ltedfapegproof__parsetree_adt_t project_4;};
typedef struct ltedfapegproof_record_29_s * ltedfapegproof_record_29_t;

extern ltedfapegproof_record_29_t new_ltedfapegproof_record_29(void);

extern void release_ltedfapegproof_record_29(ltedfapegproof_record_29_t x);

extern ltedfapegproof_record_29_t copy_ltedfapegproof_record_29(ltedfapegproof_record_29_t x);

extern bool_t equal_ltedfapegproof_record_29(ltedfapegproof_record_29_t x, ltedfapegproof_record_29_t y);
extern char * json_ltedfapegproof_record_29(ltedfapegproof_record_29_t x);

typedef struct actual_ltedfapegproof_record_29_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_29_t;
extern void release_ltedfapegproof_record_29_ptr(pointer_t x, type_actual_t ltedfapegproof_record_29);

extern bool_t equal_ltedfapegproof_record_29_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_29_t T);

extern char * json_ltedfapegproof_record_29_ptr(pointer_t x,  actual_ltedfapegproof_record_29_t T);

actual_ltedfapegproof_record_29_t actual_ltedfapegproof_record_29(void);

extern ltedfapegproof_record_29_t update_ltedfapegproof_record_29_project_1(ltedfapegproof_record_29_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_29_t update_ltedfapegproof_record_29_project_2(ltedfapegproof_record_29_t x, ordstruct_adt__ordstruct_adt_t v);

extern ltedfapegproof_record_29_t update_ltedfapegproof_record_29_project_3(ltedfapegproof_record_29_t x, ordstruct_adt__ordstruct_adt_t v);

extern ltedfapegproof_record_29_t update_ltedfapegproof_record_29_project_4(ltedfapegproof_record_29_t x, ltedfapegproof__parsetree_adt_t v);


//REDUCE_ordinal

struct ltedfapegproof_funtype_30_s;
        typedef struct ltedfapegproof_funtype_30_s * ltedfapegproof_funtype_30_t;

struct ltedfapegproof_funtype_30_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_30_s *, ltedfapegproof_record_29_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_30_s *, ltedfapeg__ent_adt_t, ordstruct_adt__ordstruct_adt_t, ordstruct_adt__ordstruct_adt_t, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_30_s *);
        struct ltedfapegproof_funtype_30_s * (* cptr)(struct ltedfapegproof_funtype_30_s *);};
typedef struct ltedfapegproof_funtype_30_ftbl_s * ltedfapegproof_funtype_30_ftbl_t;

struct ltedfapegproof_funtype_30_hashentry_s {uint32_t keyhash; ltedfapegproof_record_29_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_30_hashentry_s ltedfapegproof_funtype_30_hashentry_t;

struct ltedfapegproof_funtype_30_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_30_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_30_htbl_s * ltedfapegproof_funtype_30_htbl_t;

struct ltedfapegproof_funtype_30_s {uint32_t count;
        ltedfapegproof_funtype_30_ftbl_t ftbl;
        ltedfapegproof_funtype_30_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_30_s * ltedfapegproof_funtype_30_t;

extern void release_ltedfapegproof_funtype_30(ltedfapegproof_funtype_30_t x);

extern ltedfapegproof_funtype_30_t copy_ltedfapegproof_funtype_30(ltedfapegproof_funtype_30_t x);

extern bool_t equal_ltedfapegproof_funtype_30(ltedfapegproof_funtype_30_t x, ltedfapegproof_funtype_30_t y);

extern char* json_ltedfapegproof_funtype_30(ltedfapegproof_funtype_30_t x);




struct ltedfapegproof_closure_31_s;
        typedef struct ltedfapegproof_closure_31_s * ltedfapegproof_closure_31_t;

struct ltedfapegproof_closure_31_s {uint32_t count;
         ltedfapegproof_funtype_19_ftbl_t ftbl;
         ltedfapegproof_funtype_19_htbl_t htbl;
        ltedfapegproof_funtype_28_t fvar_1;
        ltedfapegproof_funtype_30_t fvar_2;
        ltedfapegproof_funtype_26_t fvar_3;};

ordstruct_adt__ordstruct_adt_t f_ltedfapegproof_closure_31(struct ltedfapegproof_closure_31_s * closure, ltedfapegproof__parsetree_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltedfapegproof_closure_31(struct ltedfapegproof_closure_31_s * closure, ltedfapegproof__parsetree_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltedfapegproof_closure_31(ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_funtype_28_t ivar_3, ltedfapegproof_funtype_30_t ivar_5, ltedfapegproof_funtype_26_t ivar_1);

ltedfapegproof_closure_31_t new_ltedfapegproof_closure_31(void);

void release_ltedfapegproof_closure_31(ltedfapegproof_funtype_19_t closure);

ltedfapegproof_closure_31_t copy_ltedfapegproof_closure_31(ltedfapegproof_closure_31_t x);


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

struct ltedfapegproof_funtype_34_s;
        typedef struct ltedfapegproof_funtype_34_s * ltedfapegproof_funtype_34_t;

struct ltedfapegproof_funtype_34_ftbl_s {uint8_t (* fptr)(struct ltedfapegproof_funtype_34_s *, ltedfapegproof__qstack_adt_t);
        uint8_t (* mptr)(struct ltedfapegproof_funtype_34_s *, ltedfapegproof__qstack_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_34_s *);
        struct ltedfapegproof_funtype_34_s * (* cptr)(struct ltedfapegproof_funtype_34_s *);};
typedef struct ltedfapegproof_funtype_34_ftbl_s * ltedfapegproof_funtype_34_ftbl_t;

struct ltedfapegproof_funtype_34_hashentry_s {uint32_t keyhash; ltedfapegproof__qstack_adt_t key; uint8_t value;}; 
typedef struct ltedfapegproof_funtype_34_hashentry_s ltedfapegproof_funtype_34_hashentry_t;

struct ltedfapegproof_funtype_34_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_34_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_34_htbl_s * ltedfapegproof_funtype_34_htbl_t;

struct ltedfapegproof_funtype_34_s {uint32_t count;
        ltedfapegproof_funtype_34_ftbl_t ftbl;
        ltedfapegproof_funtype_34_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_34_s * ltedfapegproof_funtype_34_t;

extern void release_ltedfapegproof_funtype_34(ltedfapegproof_funtype_34_t x);

extern ltedfapegproof_funtype_34_t copy_ltedfapegproof_funtype_34(ltedfapegproof_funtype_34_t x);

extern bool_t equal_ltedfapegproof_funtype_34(ltedfapegproof_funtype_34_t x, ltedfapegproof_funtype_34_t y);

extern char* json_ltedfapegproof_funtype_34(ltedfapegproof_funtype_34_t x);


//reduce_nat

struct ltedfapegproof_funtype_35_s;
        typedef struct ltedfapegproof_funtype_35_s * ltedfapegproof_funtype_35_t;

struct ltedfapegproof_funtype_35_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_35_s *, ltedfapegproof__qstack_adt_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_35_s *, ltedfapegproof__qstack_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_35_s *);
        struct ltedfapegproof_funtype_35_s * (* cptr)(struct ltedfapegproof_funtype_35_s *);};
typedef struct ltedfapegproof_funtype_35_ftbl_s * ltedfapegproof_funtype_35_ftbl_t;

struct ltedfapegproof_funtype_35_hashentry_s {uint32_t keyhash; ltedfapegproof__qstack_adt_t key; mpz_t value;}; 
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

struct ltedfapegproof_record_36_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        mpz_t project_3;};
typedef struct ltedfapegproof_record_36_s * ltedfapegproof_record_36_t;

extern ltedfapegproof_record_36_t new_ltedfapegproof_record_36(void);

extern void release_ltedfapegproof_record_36(ltedfapegproof_record_36_t x);

extern ltedfapegproof_record_36_t copy_ltedfapegproof_record_36(ltedfapegproof_record_36_t x);

extern bool_t equal_ltedfapegproof_record_36(ltedfapegproof_record_36_t x, ltedfapegproof_record_36_t y);
extern char * json_ltedfapegproof_record_36(ltedfapegproof_record_36_t x);

typedef struct actual_ltedfapegproof_record_36_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_36_t;
extern void release_ltedfapegproof_record_36_ptr(pointer_t x, type_actual_t ltedfapegproof_record_36);

extern bool_t equal_ltedfapegproof_record_36_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_36_t T);

extern char * json_ltedfapegproof_record_36_ptr(pointer_t x,  actual_ltedfapegproof_record_36_t T);

actual_ltedfapegproof_record_36_t actual_ltedfapegproof_record_36(void);

extern ltedfapegproof_record_36_t update_ltedfapegproof_record_36_project_1(ltedfapegproof_record_36_t x, uint8_t v);

extern ltedfapegproof_record_36_t update_ltedfapegproof_record_36_project_2(ltedfapegproof_record_36_t x, uint32_t v);

extern ltedfapegproof_record_36_t update_ltedfapegproof_record_36_project_3(ltedfapegproof_record_36_t x, mpz_ptr_t v);


//reduce_nat

struct ltedfapegproof_funtype_37_s;
        typedef struct ltedfapegproof_funtype_37_s * ltedfapegproof_funtype_37_t;

struct ltedfapegproof_funtype_37_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_37_s *, ltedfapegproof_record_36_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_37_s *, uint8_t, uint32_t, mpz_ptr_t);
        void (* rptr)(struct ltedfapegproof_funtype_37_s *);
        struct ltedfapegproof_funtype_37_s * (* cptr)(struct ltedfapegproof_funtype_37_s *);};
typedef struct ltedfapegproof_funtype_37_ftbl_s * ltedfapegproof_funtype_37_ftbl_t;

struct ltedfapegproof_funtype_37_hashentry_s {uint32_t keyhash; ltedfapegproof_record_36_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_37_hashentry_s ltedfapegproof_funtype_37_hashentry_t;

struct ltedfapegproof_funtype_37_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_37_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_37_htbl_s * ltedfapegproof_funtype_37_htbl_t;

struct ltedfapegproof_funtype_37_s {uint32_t count;
        ltedfapegproof_funtype_37_ftbl_t ftbl;
        ltedfapegproof_funtype_37_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_37_s * ltedfapegproof_funtype_37_t;

extern void release_ltedfapegproof_funtype_37(ltedfapegproof_funtype_37_t x);

extern ltedfapegproof_funtype_37_t copy_ltedfapegproof_funtype_37(ltedfapegproof_funtype_37_t x);

extern bool_t equal_ltedfapegproof_funtype_37(ltedfapegproof_funtype_37_t x, ltedfapegproof_funtype_37_t y);

extern char* json_ltedfapegproof_funtype_37(ltedfapegproof_funtype_37_t x);




struct ltedfapegproof_closure_38_s;
        typedef struct ltedfapegproof_closure_38_s * ltedfapegproof_closure_38_t;

struct ltedfapegproof_closure_38_s {uint32_t count;
         ltedfapegproof_funtype_35_ftbl_t ftbl;
         ltedfapegproof_funtype_35_htbl_t htbl;
        ltedfapegproof_funtype_37_t fvar_1;
        mpz_t fvar_2;};

mpz_ptr_t f_ltedfapegproof_closure_38(struct ltedfapegproof_closure_38_s * closure, ltedfapegproof__qstack_adt_t bvar);

mpz_ptr_t m_ltedfapegproof_closure_38(struct ltedfapegproof_closure_38_s * closure, ltedfapegproof__qstack_adt_t bvar);

extern mpz_ptr_t h_ltedfapegproof_closure_38(ltedfapegproof__qstack_adt_t ivar_5, ltedfapegproof_funtype_37_t ivar_2, mpz_ptr_t ivar_1);

ltedfapegproof_closure_38_t new_ltedfapegproof_closure_38(void);

void release_ltedfapegproof_closure_38(ltedfapegproof_funtype_35_t closure);

ltedfapegproof_closure_38_t copy_ltedfapegproof_closure_38(ltedfapegproof_closure_38_t x);


//REDUCE_nat

struct ltedfapegproof_record_39_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        mpz_t project_3;
        ltedfapegproof__qstack_adt_t project_4;};
typedef struct ltedfapegproof_record_39_s * ltedfapegproof_record_39_t;

extern ltedfapegproof_record_39_t new_ltedfapegproof_record_39(void);

extern void release_ltedfapegproof_record_39(ltedfapegproof_record_39_t x);

extern ltedfapegproof_record_39_t copy_ltedfapegproof_record_39(ltedfapegproof_record_39_t x);

extern bool_t equal_ltedfapegproof_record_39(ltedfapegproof_record_39_t x, ltedfapegproof_record_39_t y);
extern char * json_ltedfapegproof_record_39(ltedfapegproof_record_39_t x);

typedef struct actual_ltedfapegproof_record_39_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_39_t;
extern void release_ltedfapegproof_record_39_ptr(pointer_t x, type_actual_t ltedfapegproof_record_39);

extern bool_t equal_ltedfapegproof_record_39_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_39_t T);

extern char * json_ltedfapegproof_record_39_ptr(pointer_t x,  actual_ltedfapegproof_record_39_t T);

actual_ltedfapegproof_record_39_t actual_ltedfapegproof_record_39(void);

extern ltedfapegproof_record_39_t update_ltedfapegproof_record_39_project_1(ltedfapegproof_record_39_t x, uint8_t v);

extern ltedfapegproof_record_39_t update_ltedfapegproof_record_39_project_2(ltedfapegproof_record_39_t x, uint32_t v);

extern ltedfapegproof_record_39_t update_ltedfapegproof_record_39_project_3(ltedfapegproof_record_39_t x, mpz_ptr_t v);

extern ltedfapegproof_record_39_t update_ltedfapegproof_record_39_project_4(ltedfapegproof_record_39_t x, ltedfapegproof__qstack_adt_t v);


//REDUCE_nat

struct ltedfapegproof_funtype_40_s;
        typedef struct ltedfapegproof_funtype_40_s * ltedfapegproof_funtype_40_t;

struct ltedfapegproof_funtype_40_ftbl_s {mpz_ptr_t (* fptr)(struct ltedfapegproof_funtype_40_s *, ltedfapegproof_record_39_t);
        mpz_ptr_t (* mptr)(struct ltedfapegproof_funtype_40_s *, uint8_t, uint32_t, mpz_ptr_t, ltedfapegproof__qstack_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_40_s *);
        struct ltedfapegproof_funtype_40_s * (* cptr)(struct ltedfapegproof_funtype_40_s *);};
typedef struct ltedfapegproof_funtype_40_ftbl_s * ltedfapegproof_funtype_40_ftbl_t;

struct ltedfapegproof_funtype_40_hashentry_s {uint32_t keyhash; ltedfapegproof_record_39_t key; mpz_t value;}; 
typedef struct ltedfapegproof_funtype_40_hashentry_s ltedfapegproof_funtype_40_hashentry_t;

struct ltedfapegproof_funtype_40_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_40_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_40_htbl_s * ltedfapegproof_funtype_40_htbl_t;

struct ltedfapegproof_funtype_40_s {uint32_t count;
        ltedfapegproof_funtype_40_ftbl_t ftbl;
        ltedfapegproof_funtype_40_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_40_s * ltedfapegproof_funtype_40_t;

extern void release_ltedfapegproof_funtype_40(ltedfapegproof_funtype_40_t x);

extern ltedfapegproof_funtype_40_t copy_ltedfapegproof_funtype_40(ltedfapegproof_funtype_40_t x);

extern bool_t equal_ltedfapegproof_funtype_40(ltedfapegproof_funtype_40_t x, ltedfapegproof_funtype_40_t y);

extern char* json_ltedfapegproof_funtype_40(ltedfapegproof_funtype_40_t x);




struct ltedfapegproof_closure_41_s;
        typedef struct ltedfapegproof_closure_41_s * ltedfapegproof_closure_41_t;

struct ltedfapegproof_closure_41_s {uint32_t count;
         ltedfapegproof_funtype_35_ftbl_t ftbl;
         ltedfapegproof_funtype_35_htbl_t htbl;
        ltedfapegproof_funtype_40_t fvar_1;
        ltedfapegproof_funtype_35_t fvar_2;};

mpz_ptr_t f_ltedfapegproof_closure_41(struct ltedfapegproof_closure_41_s * closure, ltedfapegproof__qstack_adt_t bvar);

mpz_ptr_t m_ltedfapegproof_closure_41(struct ltedfapegproof_closure_41_s * closure, ltedfapegproof__qstack_adt_t bvar);

extern mpz_ptr_t h_ltedfapegproof_closure_41(ltedfapegproof__qstack_adt_t ivar_6, ltedfapegproof_funtype_40_t ivar_3, ltedfapegproof_funtype_35_t ivar_1);

ltedfapegproof_closure_41_t new_ltedfapegproof_closure_41(void);

void release_ltedfapegproof_closure_41(ltedfapegproof_funtype_35_t closure);

ltedfapegproof_closure_41_t copy_ltedfapegproof_closure_41(ltedfapegproof_closure_41_t x);


//reduce_ordinal

struct ltedfapegproof_funtype_42_s;
        typedef struct ltedfapegproof_funtype_42_s * ltedfapegproof_funtype_42_t;

struct ltedfapegproof_funtype_42_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_42_s *, ltedfapegproof__qstack_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_42_s *, ltedfapegproof__qstack_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_42_s *);
        struct ltedfapegproof_funtype_42_s * (* cptr)(struct ltedfapegproof_funtype_42_s *);};
typedef struct ltedfapegproof_funtype_42_ftbl_s * ltedfapegproof_funtype_42_ftbl_t;

struct ltedfapegproof_funtype_42_hashentry_s {uint32_t keyhash; ltedfapegproof__qstack_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_42_hashentry_s ltedfapegproof_funtype_42_hashentry_t;

struct ltedfapegproof_funtype_42_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_42_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_42_htbl_s * ltedfapegproof_funtype_42_htbl_t;

struct ltedfapegproof_funtype_42_s {uint32_t count;
        ltedfapegproof_funtype_42_ftbl_t ftbl;
        ltedfapegproof_funtype_42_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_42_s * ltedfapegproof_funtype_42_t;

extern void release_ltedfapegproof_funtype_42(ltedfapegproof_funtype_42_t x);

extern ltedfapegproof_funtype_42_t copy_ltedfapegproof_funtype_42(ltedfapegproof_funtype_42_t x);

extern bool_t equal_ltedfapegproof_funtype_42(ltedfapegproof_funtype_42_t x, ltedfapegproof_funtype_42_t y);

extern char* json_ltedfapegproof_funtype_42(ltedfapegproof_funtype_42_t x);


//reduce_ordinal

struct ltedfapegproof_record_43_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;};
typedef struct ltedfapegproof_record_43_s * ltedfapegproof_record_43_t;

extern ltedfapegproof_record_43_t new_ltedfapegproof_record_43(void);

extern void release_ltedfapegproof_record_43(ltedfapegproof_record_43_t x);

extern ltedfapegproof_record_43_t copy_ltedfapegproof_record_43(ltedfapegproof_record_43_t x);

extern bool_t equal_ltedfapegproof_record_43(ltedfapegproof_record_43_t x, ltedfapegproof_record_43_t y);
extern char * json_ltedfapegproof_record_43(ltedfapegproof_record_43_t x);

typedef struct actual_ltedfapegproof_record_43_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_43_t;
extern void release_ltedfapegproof_record_43_ptr(pointer_t x, type_actual_t ltedfapegproof_record_43);

extern bool_t equal_ltedfapegproof_record_43_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_43_t T);

extern char * json_ltedfapegproof_record_43_ptr(pointer_t x,  actual_ltedfapegproof_record_43_t T);

actual_ltedfapegproof_record_43_t actual_ltedfapegproof_record_43(void);

extern ltedfapegproof_record_43_t update_ltedfapegproof_record_43_project_1(ltedfapegproof_record_43_t x, uint8_t v);

extern ltedfapegproof_record_43_t update_ltedfapegproof_record_43_project_2(ltedfapegproof_record_43_t x, uint32_t v);

extern ltedfapegproof_record_43_t update_ltedfapegproof_record_43_project_3(ltedfapegproof_record_43_t x, ordstruct_adt__ordstruct_adt_t v);


//reduce_ordinal

struct ltedfapegproof_funtype_44_s;
        typedef struct ltedfapegproof_funtype_44_s * ltedfapegproof_funtype_44_t;

struct ltedfapegproof_funtype_44_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_44_s *, ltedfapegproof_record_43_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_44_s *, uint8_t, uint32_t, ordstruct_adt__ordstruct_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_44_s *);
        struct ltedfapegproof_funtype_44_s * (* cptr)(struct ltedfapegproof_funtype_44_s *);};
typedef struct ltedfapegproof_funtype_44_ftbl_s * ltedfapegproof_funtype_44_ftbl_t;

struct ltedfapegproof_funtype_44_hashentry_s {uint32_t keyhash; ltedfapegproof_record_43_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_44_hashentry_s ltedfapegproof_funtype_44_hashentry_t;

struct ltedfapegproof_funtype_44_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_44_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_44_htbl_s * ltedfapegproof_funtype_44_htbl_t;

struct ltedfapegproof_funtype_44_s {uint32_t count;
        ltedfapegproof_funtype_44_ftbl_t ftbl;
        ltedfapegproof_funtype_44_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_44_s * ltedfapegproof_funtype_44_t;

extern void release_ltedfapegproof_funtype_44(ltedfapegproof_funtype_44_t x);

extern ltedfapegproof_funtype_44_t copy_ltedfapegproof_funtype_44(ltedfapegproof_funtype_44_t x);

extern bool_t equal_ltedfapegproof_funtype_44(ltedfapegproof_funtype_44_t x, ltedfapegproof_funtype_44_t y);

extern char* json_ltedfapegproof_funtype_44(ltedfapegproof_funtype_44_t x);




struct ltedfapegproof_closure_45_s;
        typedef struct ltedfapegproof_closure_45_s * ltedfapegproof_closure_45_t;

struct ltedfapegproof_closure_45_s {uint32_t count;
         ltedfapegproof_funtype_42_ftbl_t ftbl;
         ltedfapegproof_funtype_42_htbl_t htbl;
        ltedfapegproof_funtype_44_t fvar_1;
        ordstruct_adt__ordstruct_adt_t fvar_2;};

ordstruct_adt__ordstruct_adt_t f_ltedfapegproof_closure_45(struct ltedfapegproof_closure_45_s * closure, ltedfapegproof__qstack_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltedfapegproof_closure_45(struct ltedfapegproof_closure_45_s * closure, ltedfapegproof__qstack_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltedfapegproof_closure_45(ltedfapegproof__qstack_adt_t ivar_5, ltedfapegproof_funtype_44_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1);

ltedfapegproof_closure_45_t new_ltedfapegproof_closure_45(void);

void release_ltedfapegproof_closure_45(ltedfapegproof_funtype_42_t closure);

ltedfapegproof_closure_45_t copy_ltedfapegproof_closure_45(ltedfapegproof_closure_45_t x);


//REDUCE_ordinal

struct ltedfapegproof_record_46_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        ordstruct_adt__ordstruct_adt_t project_3;
        ltedfapegproof__qstack_adt_t project_4;};
typedef struct ltedfapegproof_record_46_s * ltedfapegproof_record_46_t;

extern ltedfapegproof_record_46_t new_ltedfapegproof_record_46(void);

extern void release_ltedfapegproof_record_46(ltedfapegproof_record_46_t x);

extern ltedfapegproof_record_46_t copy_ltedfapegproof_record_46(ltedfapegproof_record_46_t x);

extern bool_t equal_ltedfapegproof_record_46(ltedfapegproof_record_46_t x, ltedfapegproof_record_46_t y);
extern char * json_ltedfapegproof_record_46(ltedfapegproof_record_46_t x);

typedef struct actual_ltedfapegproof_record_46_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_46_t;
extern void release_ltedfapegproof_record_46_ptr(pointer_t x, type_actual_t ltedfapegproof_record_46);

extern bool_t equal_ltedfapegproof_record_46_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_46_t T);

extern char * json_ltedfapegproof_record_46_ptr(pointer_t x,  actual_ltedfapegproof_record_46_t T);

actual_ltedfapegproof_record_46_t actual_ltedfapegproof_record_46(void);

extern ltedfapegproof_record_46_t update_ltedfapegproof_record_46_project_1(ltedfapegproof_record_46_t x, uint8_t v);

extern ltedfapegproof_record_46_t update_ltedfapegproof_record_46_project_2(ltedfapegproof_record_46_t x, uint32_t v);

extern ltedfapegproof_record_46_t update_ltedfapegproof_record_46_project_3(ltedfapegproof_record_46_t x, ordstruct_adt__ordstruct_adt_t v);

extern ltedfapegproof_record_46_t update_ltedfapegproof_record_46_project_4(ltedfapegproof_record_46_t x, ltedfapegproof__qstack_adt_t v);


//REDUCE_ordinal

struct ltedfapegproof_funtype_47_s;
        typedef struct ltedfapegproof_funtype_47_s * ltedfapegproof_funtype_47_t;

struct ltedfapegproof_funtype_47_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct ltedfapegproof_funtype_47_s *, ltedfapegproof_record_46_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct ltedfapegproof_funtype_47_s *, uint8_t, uint32_t, ordstruct_adt__ordstruct_adt_t, ltedfapegproof__qstack_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_47_s *);
        struct ltedfapegproof_funtype_47_s * (* cptr)(struct ltedfapegproof_funtype_47_s *);};
typedef struct ltedfapegproof_funtype_47_ftbl_s * ltedfapegproof_funtype_47_ftbl_t;

struct ltedfapegproof_funtype_47_hashentry_s {uint32_t keyhash; ltedfapegproof_record_46_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct ltedfapegproof_funtype_47_hashentry_s ltedfapegproof_funtype_47_hashentry_t;

struct ltedfapegproof_funtype_47_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_47_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_47_htbl_s * ltedfapegproof_funtype_47_htbl_t;

struct ltedfapegproof_funtype_47_s {uint32_t count;
        ltedfapegproof_funtype_47_ftbl_t ftbl;
        ltedfapegproof_funtype_47_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_47_s * ltedfapegproof_funtype_47_t;

extern void release_ltedfapegproof_funtype_47(ltedfapegproof_funtype_47_t x);

extern ltedfapegproof_funtype_47_t copy_ltedfapegproof_funtype_47(ltedfapegproof_funtype_47_t x);

extern bool_t equal_ltedfapegproof_funtype_47(ltedfapegproof_funtype_47_t x, ltedfapegproof_funtype_47_t y);

extern char* json_ltedfapegproof_funtype_47(ltedfapegproof_funtype_47_t x);




struct ltedfapegproof_closure_48_s;
        typedef struct ltedfapegproof_closure_48_s * ltedfapegproof_closure_48_t;

struct ltedfapegproof_closure_48_s {uint32_t count;
         ltedfapegproof_funtype_42_ftbl_t ftbl;
         ltedfapegproof_funtype_42_htbl_t htbl;
        ltedfapegproof_funtype_47_t fvar_1;
        ltedfapegproof_funtype_42_t fvar_2;};

ordstruct_adt__ordstruct_adt_t f_ltedfapegproof_closure_48(struct ltedfapegproof_closure_48_s * closure, ltedfapegproof__qstack_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_ltedfapegproof_closure_48(struct ltedfapegproof_closure_48_s * closure, ltedfapegproof__qstack_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_ltedfapegproof_closure_48(ltedfapegproof__qstack_adt_t ivar_6, ltedfapegproof_funtype_47_t ivar_3, ltedfapegproof_funtype_42_t ivar_1);

ltedfapegproof_closure_48_t new_ltedfapegproof_closure_48(void);

void release_ltedfapegproof_closure_48(ltedfapegproof_funtype_42_t closure);

ltedfapegproof_closure_48_t copy_ltedfapegproof_closure_48(ltedfapegproof_closure_48_t x);


//good_qstack?

struct ltedfapegproof_funtype_49_s;
        typedef struct ltedfapegproof_funtype_49_s * ltedfapegproof_funtype_49_t;

struct ltedfapegproof_funtype_49_ftbl_s {bool_t (* fptr)(struct ltedfapegproof_funtype_49_s *, ltedfapegproof__qstack_adt_t);
        bool_t (* mptr)(struct ltedfapegproof_funtype_49_s *, ltedfapegproof__qstack_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_49_s *);
        struct ltedfapegproof_funtype_49_s * (* cptr)(struct ltedfapegproof_funtype_49_s *);};
typedef struct ltedfapegproof_funtype_49_ftbl_s * ltedfapegproof_funtype_49_ftbl_t;

struct ltedfapegproof_funtype_49_hashentry_s {uint32_t keyhash; ltedfapegproof__qstack_adt_t key; bool_t value;}; 
typedef struct ltedfapegproof_funtype_49_hashentry_s ltedfapegproof_funtype_49_hashentry_t;

struct ltedfapegproof_funtype_49_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_49_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_49_htbl_s * ltedfapegproof_funtype_49_htbl_t;

struct ltedfapegproof_funtype_49_s {uint32_t count;
        ltedfapegproof_funtype_49_ftbl_t ftbl;
        ltedfapegproof_funtype_49_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_49_s * ltedfapegproof_funtype_49_t;

extern void release_ltedfapegproof_funtype_49(ltedfapegproof_funtype_49_t x);

extern ltedfapegproof_funtype_49_t copy_ltedfapegproof_funtype_49(ltedfapegproof_funtype_49_t x);

extern bool_t equal_ltedfapegproof_funtype_49(ltedfapegproof_funtype_49_t x, ltedfapegproof_funtype_49_t y);

extern char* json_ltedfapegproof_funtype_49(ltedfapegproof_funtype_49_t x);


//good_qstack?

struct ltedfapegproof_array_50_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct ltedfapegproof_array_50_s * ltedfapegproof_array_50_t;

extern ltedfapegproof_array_50_t new_ltedfapegproof_array_50(uint32_t size);

extern void release_ltedfapegproof_array_50(ltedfapegproof_array_50_t x);

extern ltedfapegproof_array_50_t copy_ltedfapegproof_array_50(ltedfapegproof_array_50_t x);

extern bool_t equal_ltedfapegproof_array_50(ltedfapegproof_array_50_t x, ltedfapegproof_array_50_t y);
extern char * json_ltedfapegproof_array_50(ltedfapegproof_array_50_t x);

typedef struct actual_ltedfapegproof_array_50_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_array_50_t;
extern void release_ltedfapegproof_array_50_ptr(pointer_t x, type_actual_t ltedfapegproof_array_50);

extern bool_t equal_ltedfapegproof_array_50_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltedfapegproof_array_50_ptr(pointer_t x, type_actual_t T);

actual_ltedfapegproof_array_50_t actual_ltedfapegproof_array_50(void);

extern ltedfapegproof_array_50_t update_ltedfapegproof_array_50(ltedfapegproof_array_50_t x, uint32_t i, uint8_t v);

extern ltedfapegproof_array_50_t upgrade_ltedfapegproof_array_50(ltedfapegproof_array_50_t x, uint32_t i, uint8_t v);


//good_qstack?

struct ltedfapegproof_array_51_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltedfapeg__ent_adt_t elems[]; };
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

extern ltedfapegproof_array_51_t update_ltedfapegproof_array_51(ltedfapegproof_array_51_t x, uint32_t i, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_array_51_t upgrade_ltedfapegproof_array_51(ltedfapegproof_array_51_t x, uint32_t i, ltedfapeg__ent_adt_t v);


//good_qstack?

struct ltedfapegproof_array_52_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltedfapegproof_array_51_t elems[]; };
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

extern ltedfapegproof_array_52_t update_ltedfapegproof_array_52(ltedfapegproof_array_52_t x, uint32_t i, ltedfapegproof_array_51_t v);

extern ltedfapegproof_array_52_t upgrade_ltedfapegproof_array_52(ltedfapegproof_array_52_t x, uint32_t i, ltedfapegproof_array_51_t v);




struct ltedfapegproof_closure_53_s;
        typedef struct ltedfapegproof_closure_53_s * ltedfapegproof_closure_53_t;

struct ltedfapegproof_closure_53_s {uint32_t count;
         ltedfapegproof_funtype_49_ftbl_t ftbl;
         ltedfapegproof_funtype_49_htbl_t htbl;
        ltedfapegproof_array_50_t fvar_1;
        uint32_t fvar_2;
        ltedfapegproof_array_52_t fvar_3;
        ltedfapeg__lang_spec_t fvar_4;};

bool_t f_ltedfapegproof_closure_53(struct ltedfapegproof_closure_53_s * closure, ltedfapegproof__qstack_adt_t bvar);

bool_t m_ltedfapegproof_closure_53(struct ltedfapegproof_closure_53_s * closure, ltedfapegproof__qstack_adt_t bvar);

extern bool_t h_ltedfapegproof_closure_53(ltedfapegproof__qstack_adt_t ivar_7, ltedfapegproof_array_50_t ivar_3, uint32_t ivar_1, ltedfapegproof_array_52_t ivar_4, ltedfapeg__lang_spec_t ivar_2);

ltedfapegproof_closure_53_t new_ltedfapegproof_closure_53(void);

void release_ltedfapegproof_closure_53(ltedfapegproof_funtype_49_t closure);

ltedfapegproof_closure_53_t copy_ltedfapegproof_closure_53(ltedfapegproof_closure_53_t x);


//good_parsetree?

struct ltedfapegproof_record_54_s {
        uint32_t count; 
        ltedfapegproof__qstack_adt_t project_1;
        uint8_t project_2;
        uint32_t project_3;
        ltedfapegproof__parsetree_adt_t project_4;};
typedef struct ltedfapegproof_record_54_s * ltedfapegproof_record_54_t;

extern ltedfapegproof_record_54_t new_ltedfapegproof_record_54(void);

extern void release_ltedfapegproof_record_54(ltedfapegproof_record_54_t x);

extern ltedfapegproof_record_54_t copy_ltedfapegproof_record_54(ltedfapegproof_record_54_t x);

extern bool_t equal_ltedfapegproof_record_54(ltedfapegproof_record_54_t x, ltedfapegproof_record_54_t y);
extern char * json_ltedfapegproof_record_54(ltedfapegproof_record_54_t x);

typedef struct actual_ltedfapegproof_record_54_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_54_t;
extern void release_ltedfapegproof_record_54_ptr(pointer_t x, type_actual_t ltedfapegproof_record_54);

extern bool_t equal_ltedfapegproof_record_54_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_54_t T);

extern char * json_ltedfapegproof_record_54_ptr(pointer_t x,  actual_ltedfapegproof_record_54_t T);

actual_ltedfapegproof_record_54_t actual_ltedfapegproof_record_54(void);

extern ltedfapegproof_record_54_t update_ltedfapegproof_record_54_project_1(ltedfapegproof_record_54_t x, ltedfapegproof__qstack_adt_t v);

extern ltedfapegproof_record_54_t update_ltedfapegproof_record_54_project_2(ltedfapegproof_record_54_t x, uint8_t v);

extern ltedfapegproof_record_54_t update_ltedfapegproof_record_54_project_3(ltedfapegproof_record_54_t x, uint32_t v);

extern ltedfapegproof_record_54_t update_ltedfapegproof_record_54_project_4(ltedfapegproof_record_54_t x, ltedfapegproof__parsetree_adt_t v);


//good_parsetree?

struct ltedfapegproof_funtype_55_s;
        typedef struct ltedfapegproof_funtype_55_s * ltedfapegproof_funtype_55_t;

struct ltedfapegproof_funtype_55_ftbl_s {bool_t (* fptr)(struct ltedfapegproof_funtype_55_s *, ltedfapegproof_record_54_t);
        bool_t (* mptr)(struct ltedfapegproof_funtype_55_s *, ltedfapegproof__qstack_adt_t, uint8_t, uint32_t, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_55_s *);
        struct ltedfapegproof_funtype_55_s * (* cptr)(struct ltedfapegproof_funtype_55_s *);};
typedef struct ltedfapegproof_funtype_55_ftbl_s * ltedfapegproof_funtype_55_ftbl_t;

struct ltedfapegproof_funtype_55_hashentry_s {uint32_t keyhash; ltedfapegproof_record_54_t key; bool_t value;}; 
typedef struct ltedfapegproof_funtype_55_hashentry_s ltedfapegproof_funtype_55_hashentry_t;

struct ltedfapegproof_funtype_55_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_55_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_55_htbl_s * ltedfapegproof_funtype_55_htbl_t;

struct ltedfapegproof_funtype_55_s {uint32_t count;
        ltedfapegproof_funtype_55_ftbl_t ftbl;
        ltedfapegproof_funtype_55_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_55_s * ltedfapegproof_funtype_55_t;

extern void release_ltedfapegproof_funtype_55(ltedfapegproof_funtype_55_t x);

extern ltedfapegproof_funtype_55_t copy_ltedfapegproof_funtype_55(ltedfapegproof_funtype_55_t x);

extern bool_t equal_ltedfapegproof_funtype_55(ltedfapegproof_funtype_55_t x, ltedfapegproof_funtype_55_t y);

extern char* json_ltedfapegproof_funtype_55(ltedfapegproof_funtype_55_t x);




struct ltedfapegproof_closure_56_s;
        typedef struct ltedfapegproof_closure_56_s * ltedfapegproof_closure_56_t;

struct ltedfapegproof_closure_56_s {uint32_t count;
         ltedfapegproof_funtype_55_ftbl_t ftbl;
         ltedfapegproof_funtype_55_htbl_t htbl;
        ltedfapegproof_array_50_t fvar_1;
        uint32_t fvar_2;
        ltedfapeg__lang_spec_t fvar_3;};

bool_t f_ltedfapegproof_closure_56(struct ltedfapegproof_closure_56_s * closure, ltedfapegproof_record_54_t bvar);

bool_t m_ltedfapegproof_closure_56(struct ltedfapegproof_closure_56_s * closure, ltedfapegproof__qstack_adt_t bvar_1, uint8_t bvar_2, uint32_t bvar_3, ltedfapegproof__parsetree_adt_t bvar_4);

extern bool_t h_ltedfapegproof_closure_56(ltedfapegproof__qstack_adt_t ivar_5, uint8_t ivar_6, uint32_t ivar_7, ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_array_50_t ivar_3, uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2);

ltedfapegproof_closure_56_t new_ltedfapegproof_closure_56(void);

void release_ltedfapegproof_closure_56(ltedfapegproof_funtype_55_t closure);

ltedfapegproof_closure_56_t copy_ltedfapegproof_closure_56(ltedfapegproof_closure_56_t x);


//good_parsetree?

struct ltedfapegproof_funtype_57_s;
        typedef struct ltedfapegproof_funtype_57_s * ltedfapegproof_funtype_57_t;

struct ltedfapegproof_funtype_57_ftbl_s {bool_t (* fptr)(struct ltedfapegproof_funtype_57_s *, ltedfapeg__ent_adt_t);
        bool_t (* mptr)(struct ltedfapegproof_funtype_57_s *, ltedfapeg__ent_adt_t);
        void (* rptr)(struct ltedfapegproof_funtype_57_s *);
        struct ltedfapegproof_funtype_57_s * (* cptr)(struct ltedfapegproof_funtype_57_s *);};
typedef struct ltedfapegproof_funtype_57_ftbl_s * ltedfapegproof_funtype_57_ftbl_t;

struct ltedfapegproof_funtype_57_hashentry_s {uint32_t keyhash; ltedfapeg__ent_adt_t key; bool_t value;}; 
typedef struct ltedfapegproof_funtype_57_hashentry_s ltedfapegproof_funtype_57_hashentry_t;

struct ltedfapegproof_funtype_57_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_57_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_57_htbl_s * ltedfapegproof_funtype_57_htbl_t;

struct ltedfapegproof_funtype_57_s {uint32_t count;
        ltedfapegproof_funtype_57_ftbl_t ftbl;
        ltedfapegproof_funtype_57_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_57_s * ltedfapegproof_funtype_57_t;

extern void release_ltedfapegproof_funtype_57(ltedfapegproof_funtype_57_t x);

extern ltedfapegproof_funtype_57_t copy_ltedfapegproof_funtype_57(ltedfapegproof_funtype_57_t x);

extern bool_t equal_ltedfapegproof_funtype_57(ltedfapegproof_funtype_57_t x, ltedfapegproof_funtype_57_t y);

extern char* json_ltedfapegproof_funtype_57(ltedfapegproof_funtype_57_t x);


//buildtree

struct ltedfapegproof_record_58_s {
        uint32_t count; 
        ltedfapegproof_array_52_t scaf;
        uint64_t depth;
        ltedfapeg__ent_adt_t stack;
        bool_t lflag;};
typedef struct ltedfapegproof_record_58_s * ltedfapegproof_record_58_t;

extern ltedfapegproof_record_58_t new_ltedfapegproof_record_58(void);

extern void release_ltedfapegproof_record_58(ltedfapegproof_record_58_t x);

extern ltedfapegproof_record_58_t copy_ltedfapegproof_record_58(ltedfapegproof_record_58_t x);

extern bool_t equal_ltedfapegproof_record_58(ltedfapegproof_record_58_t x, ltedfapegproof_record_58_t y);
extern char * json_ltedfapegproof_record_58(ltedfapegproof_record_58_t x);

typedef struct actual_ltedfapegproof_record_58_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegproof_record_58_t;
extern void release_ltedfapegproof_record_58_ptr(pointer_t x, type_actual_t ltedfapegproof_record_58);

extern bool_t equal_ltedfapegproof_record_58_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_58_t T);

extern char * json_ltedfapegproof_record_58_ptr(pointer_t x,  actual_ltedfapegproof_record_58_t T);

actual_ltedfapegproof_record_58_t actual_ltedfapegproof_record_58(void);

extern ltedfapegproof_record_58_t update_ltedfapegproof_record_58_scaf(ltedfapegproof_record_58_t x, ltedfapegproof_array_52_t v);

extern ltedfapegproof_record_58_t update_ltedfapegproof_record_58_depth(ltedfapegproof_record_58_t x, uint64_t v);

extern ltedfapegproof_record_58_t update_ltedfapegproof_record_58_stack(ltedfapegproof_record_58_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_record_58_t update_ltedfapegproof_record_58_lflag(ltedfapegproof_record_58_t x, bool_t v);


//buildproof

struct ltedfapegproof_record_59_s {
        uint32_t count; 
        ltedfapegproof_record_58_t project_1;
        uint8_t project_2;
        uint32_t project_3;};
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

extern ltedfapegproof_record_59_t update_ltedfapegproof_record_59_project_1(ltedfapegproof_record_59_t x, ltedfapegproof_record_58_t v);

extern ltedfapegproof_record_59_t update_ltedfapegproof_record_59_project_2(ltedfapegproof_record_59_t x, uint8_t v);

extern ltedfapegproof_record_59_t update_ltedfapegproof_record_59_project_3(ltedfapegproof_record_59_t x, uint32_t v);


//buildproof

struct ltedfapegproof_funtype_60_s;
        typedef struct ltedfapegproof_funtype_60_s * ltedfapegproof_funtype_60_t;

struct ltedfapegproof_funtype_60_ftbl_s {ltedfapegproof__parsetree_adt_t (* fptr)(struct ltedfapegproof_funtype_60_s *, ltedfapegproof_record_59_t);
        ltedfapegproof__parsetree_adt_t (* mptr)(struct ltedfapegproof_funtype_60_s *, ltedfapegproof_record_58_t, uint8_t, uint32_t);
        void (* rptr)(struct ltedfapegproof_funtype_60_s *);
        struct ltedfapegproof_funtype_60_s * (* cptr)(struct ltedfapegproof_funtype_60_s *);};
typedef struct ltedfapegproof_funtype_60_ftbl_s * ltedfapegproof_funtype_60_ftbl_t;

struct ltedfapegproof_funtype_60_hashentry_s {uint32_t keyhash; ltedfapegproof_record_59_t key; ltedfapegproof__parsetree_adt_t value;}; 
typedef struct ltedfapegproof_funtype_60_hashentry_s ltedfapegproof_funtype_60_hashentry_t;

struct ltedfapegproof_funtype_60_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_60_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_60_htbl_s * ltedfapegproof_funtype_60_htbl_t;

struct ltedfapegproof_funtype_60_s {uint32_t count;
        ltedfapegproof_funtype_60_ftbl_t ftbl;
        ltedfapegproof_funtype_60_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_60_s * ltedfapegproof_funtype_60_t;

extern void release_ltedfapegproof_funtype_60(ltedfapegproof_funtype_60_t x);

extern ltedfapegproof_funtype_60_t copy_ltedfapegproof_funtype_60(ltedfapegproof_funtype_60_t x);

extern bool_t equal_ltedfapegproof_funtype_60(ltedfapegproof_funtype_60_t x, ltedfapegproof_funtype_60_t y);

extern char* json_ltedfapegproof_funtype_60(ltedfapegproof_funtype_60_t x);




struct ltedfapegproof_closure_61_s;
        typedef struct ltedfapegproof_closure_61_s * ltedfapegproof_closure_61_t;

struct ltedfapegproof_closure_61_s {uint32_t count;
         ltedfapegproof_funtype_60_ftbl_t ftbl;
         ltedfapegproof_funtype_60_htbl_t htbl;
        uint32_t fvar_1;
        uint8_t fvar_2;
        uint32_t fvar_3;
        ltedfapegproof_array_50_t fvar_4;
        ltedfapeg__lang_spec_t fvar_5;};

ltedfapegproof__parsetree_adt_t f_ltedfapegproof_closure_61(struct ltedfapegproof_closure_61_s * closure, ltedfapegproof_record_59_t bvar);

ltedfapegproof__parsetree_adt_t m_ltedfapegproof_closure_61(struct ltedfapegproof_closure_61_s * closure, ltedfapegproof_record_58_t bvar_1, uint8_t bvar_2, uint32_t bvar_3);

extern ltedfapegproof__parsetree_adt_t h_ltedfapegproof_closure_61(ltedfapegproof_record_58_t ivar_8, uint8_t ivar_10, uint32_t ivar_11, uint32_t ivar_1, uint8_t ivar_5, uint32_t ivar_4, ltedfapegproof_array_50_t ivar_3, ltedfapeg__lang_spec_t ivar_2);

ltedfapegproof_closure_61_t new_ltedfapegproof_closure_61(void);

void release_ltedfapegproof_closure_61(ltedfapegproof_funtype_60_t closure);

ltedfapegproof_closure_61_t copy_ltedfapegproof_closure_61(ltedfapegproof_closure_61_t x);


//buildproof

struct ltedfapegproof_funtype_62_s;
        typedef struct ltedfapegproof_funtype_62_s * ltedfapegproof_funtype_62_t;

struct ltedfapegproof_funtype_62_ftbl_s {ltedfapeg__ent_adt_t (* fptr)(struct ltedfapegproof_funtype_62_s *, uint8_t);
        ltedfapeg__ent_adt_t (* mptr)(struct ltedfapegproof_funtype_62_s *, uint8_t);
        void (* rptr)(struct ltedfapegproof_funtype_62_s *);
        struct ltedfapegproof_funtype_62_s * (* cptr)(struct ltedfapegproof_funtype_62_s *);};
typedef struct ltedfapegproof_funtype_62_ftbl_s * ltedfapegproof_funtype_62_ftbl_t;

struct ltedfapegproof_funtype_62_hashentry_s {uint32_t keyhash; uint8_t key; ltedfapeg__ent_adt_t value;}; 
typedef struct ltedfapegproof_funtype_62_hashentry_s ltedfapegproof_funtype_62_hashentry_t;

struct ltedfapegproof_funtype_62_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_62_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_62_htbl_s * ltedfapegproof_funtype_62_htbl_t;

struct ltedfapegproof_funtype_62_s {uint32_t count;
        ltedfapegproof_funtype_62_ftbl_t ftbl;
        ltedfapegproof_funtype_62_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_62_s * ltedfapegproof_funtype_62_t;

extern void release_ltedfapegproof_funtype_62(ltedfapegproof_funtype_62_t x);

extern ltedfapegproof_funtype_62_t copy_ltedfapegproof_funtype_62(ltedfapegproof_funtype_62_t x);

extern uint32_t lookup_ltedfapegproof_funtype_62(ltedfapegproof_funtype_62_htbl_t htbl, uint8_t i, uint32_t ihash);

extern ltedfapegproof_funtype_62_t dupdate_ltedfapegproof_funtype_62(ltedfapegproof_funtype_62_t a, uint8_t i, ltedfapeg__ent_adt_t v);

extern ltedfapegproof_funtype_62_t update_ltedfapegproof_funtype_62(ltedfapegproof_funtype_62_t a, uint8_t i, ltedfapeg__ent_adt_t v);

extern bool_t equal_ltedfapegproof_funtype_62(ltedfapegproof_funtype_62_t x, ltedfapegproof_funtype_62_t y);

extern char* json_ltedfapegproof_funtype_62(ltedfapegproof_funtype_62_t x);




struct ltedfapegproof_closure_63_s;
        typedef struct ltedfapegproof_closure_63_s * ltedfapegproof_closure_63_t;

struct ltedfapegproof_closure_63_s {uint32_t count;
         ltedfapegproof_funtype_62_ftbl_t ftbl;
         ltedfapegproof_funtype_62_htbl_t htbl;};

ltedfapeg__ent_adt_t f_ltedfapegproof_closure_63(struct ltedfapegproof_closure_63_s * closure, uint8_t bvar);

ltedfapeg__ent_adt_t m_ltedfapegproof_closure_63(struct ltedfapegproof_closure_63_s * closure, uint8_t bvar);

extern ltedfapeg__ent_adt_t h_ltedfapegproof_closure_63(uint8_t ivar_31);

ltedfapegproof_closure_63_t new_ltedfapegproof_closure_63(void);

void release_ltedfapegproof_closure_63(ltedfapegproof_funtype_62_t closure);

ltedfapegproof_closure_63_t copy_ltedfapegproof_closure_63(ltedfapegproof_closure_63_t x);


//buildproof

struct ltedfapegproof_funtype_64_s;
        typedef struct ltedfapegproof_funtype_64_s * ltedfapegproof_funtype_64_t;

struct ltedfapegproof_funtype_64_ftbl_s {ltedfapegproof_funtype_62_t (* fptr)(struct ltedfapegproof_funtype_64_s *, uint32_t);
        ltedfapegproof_funtype_62_t (* mptr)(struct ltedfapegproof_funtype_64_s *, uint32_t);
        void (* rptr)(struct ltedfapegproof_funtype_64_s *);
        struct ltedfapegproof_funtype_64_s * (* cptr)(struct ltedfapegproof_funtype_64_s *);};
typedef struct ltedfapegproof_funtype_64_ftbl_s * ltedfapegproof_funtype_64_ftbl_t;

struct ltedfapegproof_funtype_64_hashentry_s {uint32_t keyhash; uint32_t key; ltedfapegproof_funtype_62_t value;}; 
typedef struct ltedfapegproof_funtype_64_hashentry_s ltedfapegproof_funtype_64_hashentry_t;

struct ltedfapegproof_funtype_64_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegproof_funtype_64_hashentry_t * data;}; 
typedef struct ltedfapegproof_funtype_64_htbl_s * ltedfapegproof_funtype_64_htbl_t;

struct ltedfapegproof_funtype_64_s {uint32_t count;
        ltedfapegproof_funtype_64_ftbl_t ftbl;
        ltedfapegproof_funtype_64_htbl_t htbl;};
typedef struct ltedfapegproof_funtype_64_s * ltedfapegproof_funtype_64_t;

extern void release_ltedfapegproof_funtype_64(ltedfapegproof_funtype_64_t x);

extern ltedfapegproof_funtype_64_t copy_ltedfapegproof_funtype_64(ltedfapegproof_funtype_64_t x);

extern uint32_t lookup_ltedfapegproof_funtype_64(ltedfapegproof_funtype_64_htbl_t htbl, uint32_t i, uint32_t ihash);

extern ltedfapegproof_funtype_64_t dupdate_ltedfapegproof_funtype_64(ltedfapegproof_funtype_64_t a, uint32_t i, ltedfapegproof_funtype_62_t v);

extern ltedfapegproof_funtype_64_t update_ltedfapegproof_funtype_64(ltedfapegproof_funtype_64_t a, uint32_t i, ltedfapegproof_funtype_62_t v);

extern bool_t equal_ltedfapegproof_funtype_64(ltedfapegproof_funtype_64_t x, ltedfapegproof_funtype_64_t y);

extern char* json_ltedfapegproof_funtype_64(ltedfapegproof_funtype_64_t x);




struct ltedfapegproof_closure_65_s;
        typedef struct ltedfapegproof_closure_65_s * ltedfapegproof_closure_65_t;

struct ltedfapegproof_closure_65_s {uint32_t count;
         ltedfapegproof_funtype_64_ftbl_t ftbl;
         ltedfapegproof_funtype_64_htbl_t htbl;
        uint32_t fvar_1;
        ltedfapegproof_funtype_62_t fvar_2;};

ltedfapegproof_funtype_62_t f_ltedfapegproof_closure_65(struct ltedfapegproof_closure_65_s * closure, uint32_t bvar);

ltedfapegproof_funtype_62_t m_ltedfapegproof_closure_65(struct ltedfapegproof_closure_65_s * closure, uint32_t bvar);

extern ltedfapegproof_funtype_62_t h_ltedfapegproof_closure_65(uint32_t ivar_39, uint32_t ivar_1, ltedfapegproof_funtype_62_t ivar_27);

ltedfapegproof_closure_65_t new_ltedfapegproof_closure_65(void);

void release_ltedfapegproof_closure_65(ltedfapegproof_funtype_64_t closure);

ltedfapegproof_closure_65_t copy_ltedfapegproof_closure_65(ltedfapegproof_closure_65_t x);



extern bool_t ltedfapegproof__defentp(ltedfapeg__ent_adt_t ivar_1);

extern bool_t r_ltedfapegproof__zerop(ltedfapegproof__parsetree_adt_t ivar_1);

extern bool_t r_ltedfapegproof__onep(ltedfapegproof__parsetree_adt_t ivar_1);

extern bool_t r_ltedfapegproof__twop(ltedfapegproof__parsetree_adt_t ivar_1);

extern ltedfapegproof__parsetree_adt_t update_ltedfapegproof__parsetree_adt_entry(ltedfapegproof__parsetree_adt_t ivar_1, ltedfapeg__ent_adt_t ivar_11);

extern ltedfapeg__ent_adt_t ltedfapegproof__parsetree_adt_entry(ltedfapegproof__parsetree_adt_t ivar_1);

extern ltedfapegproof__parsetree_adt_t update_ltedfapegproof__parsetree_adt_subone(ltedfapegproof__parsetree_adt_t ivar_1, ltedfapegproof__parsetree_adt_t ivar_7);

extern ltedfapegproof__parsetree_adt_t ltedfapegproof__parsetree_adt_subone(ltedfapegproof__parsetree_adt_t ivar_1);

extern ltedfapegproof__two_t update_ltedfapegproof__parsetree_adt_subtwo(ltedfapegproof__parsetree_adt_t ivar_1, ltedfapegproof__parsetree_adt_t ivar_3);

extern ltedfapegproof__parsetree_adt_t ltedfapegproof__parsetree_adt_subtwo(ltedfapegproof__parsetree_adt_t ivar_1);

extern ltedfapegproof__parsetree_adt_t ltedfapegproof__zero(ltedfapeg__ent_adt_t ivar_2);

extern ltedfapegproof__parsetree_adt_t ltedfapegproof__one(ltedfapeg__ent_adt_t ivar_2, ltedfapegproof__parsetree_adt_t ivar_3);

extern ltedfapegproof__parsetree_adt_t ltedfapegproof__two(ltedfapeg__ent_adt_t ivar_2, ltedfapegproof__parsetree_adt_t ivar_3, ltedfapegproof__parsetree_adt_t ivar_4);

extern ltedfapegproof_funtype_4_t ltedfapegproof__parsetree_ord(void);

extern uint8_t ltedfapegproof__ord__1(ltedfapegproof__parsetree_adt_t ivar_1);

extern bool_t ltedfapegproof__subterm__1(ltedfapegproof__parsetree_adt_t ivar_1, ltedfapegproof__parsetree_adt_t ivar_2);

extern bool_t ltedfapegproof__doublelessp__1(ltedfapegproof__parsetree_adt_t ivar_1, ltedfapegproof__parsetree_adt_t ivar_2);

extern ltedfapegproof_funtype_5_t ltedfapegproof__reduce_nat__1(ltedfapegproof_funtype_6_t ivar_1, ltedfapegproof_funtype_8_t ivar_3, ltedfapegproof_funtype_10_t ivar_5);

extern ltedfapegproof_funtype_5_t ltedfapegproof__REDUCE_nat__1(ltedfapegproof_funtype_13_t ivar_1, ltedfapegproof_funtype_15_t ivar_3, ltedfapegproof_funtype_17_t ivar_5);

extern ltedfapegproof_funtype_19_t ltedfapegproof__reduce_ordinal__1(ltedfapegproof_funtype_20_t ivar_1, ltedfapegproof_funtype_22_t ivar_3, ltedfapegproof_funtype_24_t ivar_5);

extern ltedfapegproof_funtype_19_t ltedfapegproof__REDUCE_ordinal__1(ltedfapegproof_funtype_26_t ivar_1, ltedfapegproof_funtype_28_t ivar_3, ltedfapegproof_funtype_30_t ivar_5);

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

extern ltedfapegproof_funtype_34_t ltedfapegproof__qstack_ord(void);

extern uint8_t ltedfapegproof__ord__2(ltedfapegproof__qstack_adt_t ivar_1);

extern bool_t ltedfapegproof__subterm__2(ltedfapegproof__qstack_adt_t ivar_1, ltedfapegproof__qstack_adt_t ivar_2);

extern bool_t ltedfapegproof__doublelessp__2(ltedfapegproof__qstack_adt_t ivar_1, ltedfapegproof__qstack_adt_t ivar_2);

extern ltedfapegproof_funtype_35_t ltedfapegproof__reduce_nat__2(mpz_ptr_t ivar_1, ltedfapegproof_funtype_37_t ivar_2);

extern ltedfapegproof_funtype_35_t ltedfapegproof__REDUCE_nat__2(ltedfapegproof_funtype_35_t ivar_1, ltedfapegproof_funtype_40_t ivar_3);

extern ltedfapegproof_funtype_42_t ltedfapegproof__reduce_ordinal__2(ordstruct_adt__ordstruct_adt_t ivar_1, ltedfapegproof_funtype_44_t ivar_2);

extern ltedfapegproof_funtype_42_t ltedfapegproof__REDUCE_ordinal__2(ltedfapegproof_funtype_42_t ivar_1, ltedfapegproof_funtype_47_t ivar_3);

extern bool_t ltedfapegproof__inqstack(uint8_t ivar_1, uint32_t ivar_2, ltedfapegproof__qstack_adt_t ivar_3);

extern mpz_ptr_t ltedfapegproof__stacksize(ltedfapegproof__qstack_adt_t ivar_1);

extern ltedfapegproof_funtype_49_t ltedfapegproof__good_qstackp(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_50_t ivar_3, ltedfapegproof_array_52_t ivar_4);

extern ltedfapegproof_funtype_55_t ltedfapegproof__good_parsetreep(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_50_t ivar_3);

extern ltedfapegproof__parsetree_adt_t ltedfapegproof__buildtree(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5, ltedfapegproof_record_58_t ivar_6, ltedfapegproof__qstack_adt_t ivar_8, uint8_t ivar_9, uint32_t ivar_10);

extern ltedfapegproof__parsetree_adt_t ltedfapegproof__buildloop(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5, ltedfapegproof_record_58_t ivar_6, ltedfapegproof_array_52_t ivar_8, ltedfapegproof__qstack_adt_t ivar_10, uint8_t ivar_11, uint32_t ivar_12);

extern ltedfapegproof_funtype_60_t ltedfapegproof__buildproof(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5);

extern bool_t ltedfapegproof__allgoodentriesp(ltedfapegproof__parsetree_adt_t ivar_1);
#endif