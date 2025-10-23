//Code generated using pvs2ir
#ifndef _ltedfapegtest_h 
#define _ltedfapegtest_h

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

#include "identity_c.h"

#include "identity_uint8_c.h"

#include "file_c.h"

#include "bytestrings_c.h"

#include "gen_strings_c.h"

#include "strings_c.h"

#include "integertypes_c.h"

#include "real_defs_c.h"

#include "exp2_c.h"

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

#include "character_adt_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "ltedfapegproof_c.h"

#include "ltedfapeg_c.h"

#include "dfa_c.h"

#include "arrayCount_c.h"

//cc -O3 -Wall -o ltedfapegtest -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/lex2_c.c /Users/e21660/shankar/pvs.git/lib/sets_c.c /Users/e21660/shankar/pvs.git/lib/identity_c.c /Users/e21660/shankar/pvs.git/lib/file_c.c /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/modulo_arithmetic_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/character_adt_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c identity_uint8_c.c ltedfapegtest_c.c ltedfapegproof_c.c ltedfapeg_c.c dfa_c.c arrayCount_c.c -lgmp 
//djsontable

struct ltedfapegtest_array_0_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltedfapeg__prepeg_adt_t elems[]; };
typedef struct ltedfapegtest_array_0_s * ltedfapegtest_array_0_t;

extern ltedfapegtest_array_0_t new_ltedfapegtest_array_0(uint32_t size);

extern void release_ltedfapegtest_array_0(ltedfapegtest_array_0_t x);

extern ltedfapegtest_array_0_t copy_ltedfapegtest_array_0(ltedfapegtest_array_0_t x);

extern bool_t equal_ltedfapegtest_array_0(ltedfapegtest_array_0_t x, ltedfapegtest_array_0_t y);
extern char * json_ltedfapegtest_array_0(ltedfapegtest_array_0_t x);

typedef struct actual_ltedfapegtest_array_0_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegtest_array_0_t;
extern void release_ltedfapegtest_array_0_ptr(pointer_t x, type_actual_t ltedfapegtest_array_0);

extern bool_t equal_ltedfapegtest_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltedfapegtest_array_0_ptr(pointer_t x, type_actual_t T);

actual_ltedfapegtest_array_0_t actual_ltedfapegtest_array_0(void);

extern ltedfapegtest_array_0_t update_ltedfapegtest_array_0(ltedfapegtest_array_0_t x, uint32_t i, ltedfapeg__prepeg_adt_t v);

extern ltedfapegtest_array_0_t upgrade_ltedfapegtest_array_0(ltedfapegtest_array_0_t x, uint32_t i, ltedfapeg__prepeg_adt_t v);


//djsontable

struct ltedfapegtest_funtype_1_s;
        typedef struct ltedfapegtest_funtype_1_s * ltedfapegtest_funtype_1_t;

struct ltedfapegtest_funtype_1_ftbl_s {ltedfapeg__prepeg_adt_t (* fptr)(struct ltedfapegtest_funtype_1_s *, uint8_t);
        ltedfapeg__prepeg_adt_t (* mptr)(struct ltedfapegtest_funtype_1_s *, uint8_t);
        void (* rptr)(struct ltedfapegtest_funtype_1_s *);
        struct ltedfapegtest_funtype_1_s * (* cptr)(struct ltedfapegtest_funtype_1_s *);};
typedef struct ltedfapegtest_funtype_1_ftbl_s * ltedfapegtest_funtype_1_ftbl_t;

struct ltedfapegtest_funtype_1_hashentry_s {uint32_t keyhash; uint8_t key; ltedfapeg__prepeg_adt_t value;}; 
typedef struct ltedfapegtest_funtype_1_hashentry_s ltedfapegtest_funtype_1_hashentry_t;

struct ltedfapegtest_funtype_1_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegtest_funtype_1_hashentry_t * data;}; 
typedef struct ltedfapegtest_funtype_1_htbl_s * ltedfapegtest_funtype_1_htbl_t;

struct ltedfapegtest_funtype_1_s {uint32_t count;
        ltedfapegtest_funtype_1_ftbl_t ftbl;
        ltedfapegtest_funtype_1_htbl_t htbl;};
typedef struct ltedfapegtest_funtype_1_s * ltedfapegtest_funtype_1_t;

extern void release_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_t x);

extern ltedfapegtest_funtype_1_t copy_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_t x);

extern uint32_t lookup_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_htbl_t htbl, uint8_t i, uint32_t ihash);

extern ltedfapegtest_funtype_1_t dupdate_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_t a, uint8_t i, ltedfapeg__prepeg_adt_t v);

extern ltedfapegtest_funtype_1_t update_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_t a, uint8_t i, ltedfapeg__prepeg_adt_t v);

extern bool_t equal_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_t x, ltedfapegtest_funtype_1_t y);

extern char* json_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_t x);




struct ltedfapegtest_closure_2_s;
        typedef struct ltedfapegtest_closure_2_s * ltedfapegtest_closure_2_t;

struct ltedfapegtest_closure_2_s {uint32_t count;
         ltedfapegtest_funtype_1_ftbl_t ftbl;
         ltedfapegtest_funtype_1_htbl_t htbl;};

ltedfapeg__prepeg_adt_t f_ltedfapegtest_closure_2(struct ltedfapegtest_closure_2_s * closure, uint8_t bvar);

ltedfapeg__prepeg_adt_t m_ltedfapegtest_closure_2(struct ltedfapegtest_closure_2_s * closure, uint8_t bvar);

extern ltedfapeg__prepeg_adt_t h_ltedfapegtest_closure_2(uint8_t ivar_5);

ltedfapegtest_closure_2_t new_ltedfapegtest_closure_2(void);

void release_ltedfapegtest_closure_2(ltedfapegtest_funtype_1_t closure);

ltedfapegtest_closure_2_t copy_ltedfapegtest_closure_2(ltedfapegtest_closure_2_t x);


//empty

struct ltedfapegtest_array_3_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct ltedfapegtest_array_3_s * ltedfapegtest_array_3_t;

extern ltedfapegtest_array_3_t new_ltedfapegtest_array_3(uint32_t size);

extern void release_ltedfapegtest_array_3(ltedfapegtest_array_3_t x);

extern ltedfapegtest_array_3_t copy_ltedfapegtest_array_3(ltedfapegtest_array_3_t x);

extern bool_t equal_ltedfapegtest_array_3(ltedfapegtest_array_3_t x, ltedfapegtest_array_3_t y);
extern char * json_ltedfapegtest_array_3(ltedfapegtest_array_3_t x);

typedef struct actual_ltedfapegtest_array_3_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegtest_array_3_t;
extern void release_ltedfapegtest_array_3_ptr(pointer_t x, type_actual_t ltedfapegtest_array_3);

extern bool_t equal_ltedfapegtest_array_3_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltedfapegtest_array_3_ptr(pointer_t x, type_actual_t T);

actual_ltedfapegtest_array_3_t actual_ltedfapegtest_array_3(void);

extern ltedfapegtest_array_3_t update_ltedfapegtest_array_3(ltedfapegtest_array_3_t x, uint32_t i, uint8_t v);

extern ltedfapegtest_array_3_t upgrade_ltedfapegtest_array_3(ltedfapegtest_array_3_t x, uint32_t i, uint8_t v);


//cat

struct ltedfapegtest_record_4_s {
        uint32_t count; 
        ltedfapegtest_array_3_t project_1;
        ltedfapegtest_array_3_t project_2;};
typedef struct ltedfapegtest_record_4_s * ltedfapegtest_record_4_t;

extern ltedfapegtest_record_4_t new_ltedfapegtest_record_4(void);

extern void release_ltedfapegtest_record_4(ltedfapegtest_record_4_t x);

extern ltedfapegtest_record_4_t copy_ltedfapegtest_record_4(ltedfapegtest_record_4_t x);

extern bool_t equal_ltedfapegtest_record_4(ltedfapegtest_record_4_t x, ltedfapegtest_record_4_t y);
extern char * json_ltedfapegtest_record_4(ltedfapegtest_record_4_t x);

typedef struct actual_ltedfapegtest_record_4_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegtest_record_4_t;
extern void release_ltedfapegtest_record_4_ptr(pointer_t x, type_actual_t ltedfapegtest_record_4);

extern bool_t equal_ltedfapegtest_record_4_ptr(pointer_t x, pointer_t y, actual_ltedfapegtest_record_4_t T);

extern char * json_ltedfapegtest_record_4_ptr(pointer_t x,  actual_ltedfapegtest_record_4_t T);

actual_ltedfapegtest_record_4_t actual_ltedfapegtest_record_4(void);

extern ltedfapegtest_record_4_t update_ltedfapegtest_record_4_project_1(ltedfapegtest_record_4_t x, ltedfapegtest_array_3_t v);

extern ltedfapegtest_record_4_t update_ltedfapegtest_record_4_project_2(ltedfapegtest_record_4_t x, ltedfapegtest_array_3_t v);


//cat

struct ltedfapegtest_funtype_5_s;
        typedef struct ltedfapegtest_funtype_5_s * ltedfapegtest_funtype_5_t;

struct ltedfapegtest_funtype_5_ftbl_s {ltedfapegtest_array_3_t (* fptr)(struct ltedfapegtest_funtype_5_s *, ltedfapegtest_record_4_t);
        ltedfapegtest_array_3_t (* mptr)(struct ltedfapegtest_funtype_5_s *, ltedfapegtest_array_3_t, ltedfapegtest_array_3_t);
        void (* rptr)(struct ltedfapegtest_funtype_5_s *);
        struct ltedfapegtest_funtype_5_s * (* cptr)(struct ltedfapegtest_funtype_5_s *);};
typedef struct ltedfapegtest_funtype_5_ftbl_s * ltedfapegtest_funtype_5_ftbl_t;

struct ltedfapegtest_funtype_5_hashentry_s {uint32_t keyhash; ltedfapegtest_record_4_t key; ltedfapegtest_array_3_t value;}; 
typedef struct ltedfapegtest_funtype_5_hashentry_s ltedfapegtest_funtype_5_hashentry_t;

struct ltedfapegtest_funtype_5_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegtest_funtype_5_hashentry_t * data;}; 
typedef struct ltedfapegtest_funtype_5_htbl_s * ltedfapegtest_funtype_5_htbl_t;

struct ltedfapegtest_funtype_5_s {uint32_t count;
        ltedfapegtest_funtype_5_ftbl_t ftbl;
        ltedfapegtest_funtype_5_htbl_t htbl;};
typedef struct ltedfapegtest_funtype_5_s * ltedfapegtest_funtype_5_t;

extern void release_ltedfapegtest_funtype_5(ltedfapegtest_funtype_5_t x);

extern ltedfapegtest_funtype_5_t copy_ltedfapegtest_funtype_5(ltedfapegtest_funtype_5_t x);

extern bool_t equal_ltedfapegtest_funtype_5(ltedfapegtest_funtype_5_t x, ltedfapegtest_funtype_5_t y);

extern char* json_ltedfapegtest_funtype_5(ltedfapegtest_funtype_5_t x);




struct ltedfapegtest_closure_6_s;
        typedef struct ltedfapegtest_closure_6_s * ltedfapegtest_closure_6_t;

struct ltedfapegtest_closure_6_s {uint32_t count;
         ltedfapegtest_funtype_5_ftbl_t ftbl;
         ltedfapegtest_funtype_5_htbl_t htbl;
        uint8_t fvar_1;
        uint8_t fvar_2;};

ltedfapegtest_array_3_t f_ltedfapegtest_closure_6(struct ltedfapegtest_closure_6_s * closure, ltedfapegtest_record_4_t bvar);

ltedfapegtest_array_3_t m_ltedfapegtest_closure_6(struct ltedfapegtest_closure_6_s * closure, ltedfapegtest_array_3_t bvar_1, ltedfapegtest_array_3_t bvar_2);

extern ltedfapegtest_array_3_t h_ltedfapegtest_closure_6(ltedfapegtest_array_3_t ivar_29, ltedfapegtest_array_3_t ivar_30, uint8_t ivar_2, uint8_t ivar_1);

ltedfapegtest_closure_6_t new_ltedfapegtest_closure_6(void);

void release_ltedfapegtest_closure_6(ltedfapegtest_funtype_5_t closure);

ltedfapegtest_closure_6_t copy_ltedfapegtest_closure_6(ltedfapegtest_closure_6_t x);


//iparse

struct ltedfapegtest_funtype_7_s;
        typedef struct ltedfapegtest_funtype_7_s * ltedfapegtest_funtype_7_t;

struct ltedfapegtest_funtype_7_ftbl_s {ltedfapeg__ent_adt_t (* fptr)(struct ltedfapegtest_funtype_7_s *, uint8_t);
        ltedfapeg__ent_adt_t (* mptr)(struct ltedfapegtest_funtype_7_s *, uint8_t);
        void (* rptr)(struct ltedfapegtest_funtype_7_s *);
        struct ltedfapegtest_funtype_7_s * (* cptr)(struct ltedfapegtest_funtype_7_s *);};
typedef struct ltedfapegtest_funtype_7_ftbl_s * ltedfapegtest_funtype_7_ftbl_t;

struct ltedfapegtest_funtype_7_hashentry_s {uint32_t keyhash; uint8_t key; ltedfapeg__ent_adt_t value;}; 
typedef struct ltedfapegtest_funtype_7_hashentry_s ltedfapegtest_funtype_7_hashentry_t;

struct ltedfapegtest_funtype_7_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegtest_funtype_7_hashentry_t * data;}; 
typedef struct ltedfapegtest_funtype_7_htbl_s * ltedfapegtest_funtype_7_htbl_t;

struct ltedfapegtest_funtype_7_s {uint32_t count;
        ltedfapegtest_funtype_7_ftbl_t ftbl;
        ltedfapegtest_funtype_7_htbl_t htbl;};
typedef struct ltedfapegtest_funtype_7_s * ltedfapegtest_funtype_7_t;

extern void release_ltedfapegtest_funtype_7(ltedfapegtest_funtype_7_t x);

extern ltedfapegtest_funtype_7_t copy_ltedfapegtest_funtype_7(ltedfapegtest_funtype_7_t x);

extern uint32_t lookup_ltedfapegtest_funtype_7(ltedfapegtest_funtype_7_htbl_t htbl, uint8_t i, uint32_t ihash);

extern ltedfapegtest_funtype_7_t dupdate_ltedfapegtest_funtype_7(ltedfapegtest_funtype_7_t a, uint8_t i, ltedfapeg__ent_adt_t v);

extern ltedfapegtest_funtype_7_t update_ltedfapegtest_funtype_7(ltedfapegtest_funtype_7_t a, uint8_t i, ltedfapeg__ent_adt_t v);

extern bool_t equal_ltedfapegtest_funtype_7(ltedfapegtest_funtype_7_t x, ltedfapegtest_funtype_7_t y);

extern char* json_ltedfapegtest_funtype_7(ltedfapegtest_funtype_7_t x);




struct ltedfapegtest_closure_8_s;
        typedef struct ltedfapegtest_closure_8_s * ltedfapegtest_closure_8_t;

struct ltedfapegtest_closure_8_s {uint32_t count;
         ltedfapegtest_funtype_7_ftbl_t ftbl;
         ltedfapegtest_funtype_7_htbl_t htbl;};

ltedfapeg__ent_adt_t f_ltedfapegtest_closure_8(struct ltedfapegtest_closure_8_s * closure, uint8_t bvar);

ltedfapeg__ent_adt_t m_ltedfapegtest_closure_8(struct ltedfapegtest_closure_8_s * closure, uint8_t bvar);

extern ltedfapeg__ent_adt_t h_ltedfapegtest_closure_8(uint8_t ivar_10);

ltedfapegtest_closure_8_t new_ltedfapegtest_closure_8(void);

void release_ltedfapegtest_closure_8(ltedfapegtest_funtype_7_t closure);

ltedfapegtest_closure_8_t copy_ltedfapegtest_closure_8(ltedfapegtest_closure_8_t x);


//iparse

struct ltedfapegtest_funtype_9_s;
        typedef struct ltedfapegtest_funtype_9_s * ltedfapegtest_funtype_9_t;

struct ltedfapegtest_funtype_9_ftbl_s {ltedfapegtest_funtype_7_t (* fptr)(struct ltedfapegtest_funtype_9_s *, uint8_t);
        ltedfapegtest_funtype_7_t (* mptr)(struct ltedfapegtest_funtype_9_s *, uint8_t);
        void (* rptr)(struct ltedfapegtest_funtype_9_s *);
        struct ltedfapegtest_funtype_9_s * (* cptr)(struct ltedfapegtest_funtype_9_s *);};
typedef struct ltedfapegtest_funtype_9_ftbl_s * ltedfapegtest_funtype_9_ftbl_t;

struct ltedfapegtest_funtype_9_hashentry_s {uint32_t keyhash; uint8_t key; ltedfapegtest_funtype_7_t value;}; 
typedef struct ltedfapegtest_funtype_9_hashentry_s ltedfapegtest_funtype_9_hashentry_t;

struct ltedfapegtest_funtype_9_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegtest_funtype_9_hashentry_t * data;}; 
typedef struct ltedfapegtest_funtype_9_htbl_s * ltedfapegtest_funtype_9_htbl_t;

struct ltedfapegtest_funtype_9_s {uint32_t count;
        ltedfapegtest_funtype_9_ftbl_t ftbl;
        ltedfapegtest_funtype_9_htbl_t htbl;};
typedef struct ltedfapegtest_funtype_9_s * ltedfapegtest_funtype_9_t;

extern void release_ltedfapegtest_funtype_9(ltedfapegtest_funtype_9_t x);

extern ltedfapegtest_funtype_9_t copy_ltedfapegtest_funtype_9(ltedfapegtest_funtype_9_t x);

extern uint32_t lookup_ltedfapegtest_funtype_9(ltedfapegtest_funtype_9_htbl_t htbl, uint8_t i, uint32_t ihash);

extern ltedfapegtest_funtype_9_t dupdate_ltedfapegtest_funtype_9(ltedfapegtest_funtype_9_t a, uint8_t i, ltedfapegtest_funtype_7_t v);

extern ltedfapegtest_funtype_9_t update_ltedfapegtest_funtype_9(ltedfapegtest_funtype_9_t a, uint8_t i, ltedfapegtest_funtype_7_t v);

extern bool_t equal_ltedfapegtest_funtype_9(ltedfapegtest_funtype_9_t x, ltedfapegtest_funtype_9_t y);

extern char* json_ltedfapegtest_funtype_9(ltedfapegtest_funtype_9_t x);


//iparse

struct ltedfapegtest_record_10_s {
        uint32_t count; 
        uint8_t depth;
        bool_t lflag;
        ltedfapegtest_funtype_9_t scaf;
        ltedfapeg__ent_adt_t stack;};
typedef struct ltedfapegtest_record_10_s * ltedfapegtest_record_10_t;

extern ltedfapegtest_record_10_t new_ltedfapegtest_record_10(void);

extern void release_ltedfapegtest_record_10(ltedfapegtest_record_10_t x);

extern ltedfapegtest_record_10_t copy_ltedfapegtest_record_10(ltedfapegtest_record_10_t x);

extern bool_t equal_ltedfapegtest_record_10(ltedfapegtest_record_10_t x, ltedfapegtest_record_10_t y);
extern char * json_ltedfapegtest_record_10(ltedfapegtest_record_10_t x);

typedef struct actual_ltedfapegtest_record_10_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegtest_record_10_t;
extern void release_ltedfapegtest_record_10_ptr(pointer_t x, type_actual_t ltedfapegtest_record_10);

extern bool_t equal_ltedfapegtest_record_10_ptr(pointer_t x, pointer_t y, actual_ltedfapegtest_record_10_t T);

extern char * json_ltedfapegtest_record_10_ptr(pointer_t x,  actual_ltedfapegtest_record_10_t T);

actual_ltedfapegtest_record_10_t actual_ltedfapegtest_record_10(void);

extern ltedfapegtest_record_10_t update_ltedfapegtest_record_10_depth(ltedfapegtest_record_10_t x, uint8_t v);

extern ltedfapegtest_record_10_t update_ltedfapegtest_record_10_lflag(ltedfapegtest_record_10_t x, bool_t v);

extern ltedfapegtest_record_10_t update_ltedfapegtest_record_10_scaf(ltedfapegtest_record_10_t x, ltedfapegtest_funtype_9_t v);

extern ltedfapegtest_record_10_t update_ltedfapegtest_record_10_stack(ltedfapegtest_record_10_t x, ltedfapeg__ent_adt_t v);




struct ltedfapegtest_closure_11_s;
        typedef struct ltedfapegtest_closure_11_s * ltedfapegtest_closure_11_t;

struct ltedfapegtest_closure_11_s {uint32_t count;
         ltedfapegtest_funtype_9_ftbl_t ftbl;
         ltedfapegtest_funtype_9_htbl_t htbl;
        uint8_t fvar_1;
        ltedfapegtest_funtype_7_t fvar_2;};

ltedfapegtest_funtype_7_t f_ltedfapegtest_closure_11(struct ltedfapegtest_closure_11_s * closure, uint8_t bvar);

ltedfapegtest_funtype_7_t m_ltedfapegtest_closure_11(struct ltedfapegtest_closure_11_s * closure, uint8_t bvar);

extern ltedfapegtest_funtype_7_t h_ltedfapegtest_closure_11(uint8_t ivar_23, uint8_t ivar_1, ltedfapegtest_funtype_7_t ivar_6);

ltedfapegtest_closure_11_t new_ltedfapegtest_closure_11(void);

void release_ltedfapegtest_closure_11(ltedfapegtest_funtype_9_t closure);

ltedfapegtest_closure_11_t copy_ltedfapegtest_closure_11(ltedfapegtest_closure_11_t x);


//iparse

struct ltedfapegtest_array_12_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltedfapeg__ent_adt_t elems[]; };
typedef struct ltedfapegtest_array_12_s * ltedfapegtest_array_12_t;

extern ltedfapegtest_array_12_t new_ltedfapegtest_array_12(uint32_t size);

extern void release_ltedfapegtest_array_12(ltedfapegtest_array_12_t x);

extern ltedfapegtest_array_12_t copy_ltedfapegtest_array_12(ltedfapegtest_array_12_t x);

extern bool_t equal_ltedfapegtest_array_12(ltedfapegtest_array_12_t x, ltedfapegtest_array_12_t y);
extern char * json_ltedfapegtest_array_12(ltedfapegtest_array_12_t x);

typedef struct actual_ltedfapegtest_array_12_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegtest_array_12_t;
extern void release_ltedfapegtest_array_12_ptr(pointer_t x, type_actual_t ltedfapegtest_array_12);

extern bool_t equal_ltedfapegtest_array_12_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltedfapegtest_array_12_ptr(pointer_t x, type_actual_t T);

actual_ltedfapegtest_array_12_t actual_ltedfapegtest_array_12(void);

extern ltedfapegtest_array_12_t update_ltedfapegtest_array_12(ltedfapegtest_array_12_t x, uint32_t i, ltedfapeg__ent_adt_t v);

extern ltedfapegtest_array_12_t upgrade_ltedfapegtest_array_12(ltedfapegtest_array_12_t x, uint32_t i, ltedfapeg__ent_adt_t v);


//iparse

struct ltedfapegtest_array_13_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltedfapegtest_array_12_t elems[]; };
typedef struct ltedfapegtest_array_13_s * ltedfapegtest_array_13_t;

extern ltedfapegtest_array_13_t new_ltedfapegtest_array_13(uint32_t size);

extern void release_ltedfapegtest_array_13(ltedfapegtest_array_13_t x);

extern ltedfapegtest_array_13_t copy_ltedfapegtest_array_13(ltedfapegtest_array_13_t x);

extern bool_t equal_ltedfapegtest_array_13(ltedfapegtest_array_13_t x, ltedfapegtest_array_13_t y);
extern char * json_ltedfapegtest_array_13(ltedfapegtest_array_13_t x);

typedef struct actual_ltedfapegtest_array_13_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegtest_array_13_t;
extern void release_ltedfapegtest_array_13_ptr(pointer_t x, type_actual_t ltedfapegtest_array_13);

extern bool_t equal_ltedfapegtest_array_13_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltedfapegtest_array_13_ptr(pointer_t x, type_actual_t T);

actual_ltedfapegtest_array_13_t actual_ltedfapegtest_array_13(void);

extern ltedfapegtest_array_13_t update_ltedfapegtest_array_13(ltedfapegtest_array_13_t x, uint32_t i, ltedfapegtest_array_12_t v);

extern ltedfapegtest_array_13_t upgrade_ltedfapegtest_array_13(ltedfapegtest_array_13_t x, uint32_t i, ltedfapegtest_array_12_t v);


//iparse

struct ltedfapegtest_record_14_s {
        uint32_t count; 
        ltedfapegtest_array_13_t scaf;
        uint64_t depth;
        ltedfapeg__ent_adt_t stack;
        bool_t lflag;};
typedef struct ltedfapegtest_record_14_s * ltedfapegtest_record_14_t;

extern ltedfapegtest_record_14_t new_ltedfapegtest_record_14(void);

extern void release_ltedfapegtest_record_14(ltedfapegtest_record_14_t x);

extern ltedfapegtest_record_14_t copy_ltedfapegtest_record_14(ltedfapegtest_record_14_t x);

extern bool_t equal_ltedfapegtest_record_14(ltedfapegtest_record_14_t x, ltedfapegtest_record_14_t y);
extern char * json_ltedfapegtest_record_14(ltedfapegtest_record_14_t x);

typedef struct actual_ltedfapegtest_record_14_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegtest_record_14_t;
extern void release_ltedfapegtest_record_14_ptr(pointer_t x, type_actual_t ltedfapegtest_record_14);

extern bool_t equal_ltedfapegtest_record_14_ptr(pointer_t x, pointer_t y, actual_ltedfapegtest_record_14_t T);

extern char * json_ltedfapegtest_record_14_ptr(pointer_t x,  actual_ltedfapegtest_record_14_t T);

actual_ltedfapegtest_record_14_t actual_ltedfapegtest_record_14(void);

extern ltedfapegtest_record_14_t update_ltedfapegtest_record_14_scaf(ltedfapegtest_record_14_t x, ltedfapegtest_array_13_t v);

extern ltedfapegtest_record_14_t update_ltedfapegtest_record_14_depth(ltedfapegtest_record_14_t x, uint64_t v);

extern ltedfapegtest_record_14_t update_ltedfapegtest_record_14_stack(ltedfapegtest_record_14_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegtest_record_14_t update_ltedfapegtest_record_14_lflag(ltedfapegtest_record_14_t x, bool_t v);




struct ltedfapegtest_closure_15_s;
        typedef struct ltedfapegtest_closure_15_s * ltedfapegtest_closure_15_t;

struct ltedfapegtest_closure_15_s {uint32_t count;
         ltedfapegtest_funtype_7_ftbl_t ftbl;
         ltedfapegtest_funtype_7_htbl_t htbl;};

ltedfapeg__ent_adt_t f_ltedfapegtest_closure_15(struct ltedfapegtest_closure_15_s * closure, uint8_t bvar);

ltedfapeg__ent_adt_t m_ltedfapegtest_closure_15(struct ltedfapegtest_closure_15_s * closure, uint8_t bvar);

extern ltedfapeg__ent_adt_t h_ltedfapegtest_closure_15(uint8_t ivar_41);

ltedfapegtest_closure_15_t new_ltedfapegtest_closure_15(void);

void release_ltedfapegtest_closure_15(ltedfapegtest_funtype_7_t closure);

ltedfapegtest_closure_15_t copy_ltedfapegtest_closure_15(ltedfapegtest_closure_15_t x);


//jsonreadfileinit

struct ltedfapegtest_funtype_16_s;
        typedef struct ltedfapegtest_funtype_16_s * ltedfapegtest_funtype_16_t;

struct ltedfapegtest_funtype_16_ftbl_s {ltedfapegtest_funtype_7_t (* fptr)(struct ltedfapegtest_funtype_16_s *, uint32_t);
        ltedfapegtest_funtype_7_t (* mptr)(struct ltedfapegtest_funtype_16_s *, uint32_t);
        void (* rptr)(struct ltedfapegtest_funtype_16_s *);
        struct ltedfapegtest_funtype_16_s * (* cptr)(struct ltedfapegtest_funtype_16_s *);};
typedef struct ltedfapegtest_funtype_16_ftbl_s * ltedfapegtest_funtype_16_ftbl_t;

struct ltedfapegtest_funtype_16_hashentry_s {uint32_t keyhash; uint32_t key; ltedfapegtest_funtype_7_t value;}; 
typedef struct ltedfapegtest_funtype_16_hashentry_s ltedfapegtest_funtype_16_hashentry_t;

struct ltedfapegtest_funtype_16_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegtest_funtype_16_hashentry_t * data;}; 
typedef struct ltedfapegtest_funtype_16_htbl_s * ltedfapegtest_funtype_16_htbl_t;

struct ltedfapegtest_funtype_16_s {uint32_t count;
        ltedfapegtest_funtype_16_ftbl_t ftbl;
        ltedfapegtest_funtype_16_htbl_t htbl;};
typedef struct ltedfapegtest_funtype_16_s * ltedfapegtest_funtype_16_t;

extern void release_ltedfapegtest_funtype_16(ltedfapegtest_funtype_16_t x);

extern ltedfapegtest_funtype_16_t copy_ltedfapegtest_funtype_16(ltedfapegtest_funtype_16_t x);

extern uint32_t lookup_ltedfapegtest_funtype_16(ltedfapegtest_funtype_16_htbl_t htbl, uint32_t i, uint32_t ihash);

extern ltedfapegtest_funtype_16_t dupdate_ltedfapegtest_funtype_16(ltedfapegtest_funtype_16_t a, uint32_t i, ltedfapegtest_funtype_7_t v);

extern ltedfapegtest_funtype_16_t update_ltedfapegtest_funtype_16(ltedfapegtest_funtype_16_t a, uint32_t i, ltedfapegtest_funtype_7_t v);

extern bool_t equal_ltedfapegtest_funtype_16(ltedfapegtest_funtype_16_t x, ltedfapegtest_funtype_16_t y);

extern char* json_ltedfapegtest_funtype_16(ltedfapegtest_funtype_16_t x);


//jsonreadfileinit

struct ltedfapegtest_record_17_s {
        uint32_t count; 
        uint8_t depth;
        bool_t lflag;
        ltedfapegtest_funtype_16_t scaf;
        ltedfapeg__ent_adt_t stack;};
typedef struct ltedfapegtest_record_17_s * ltedfapegtest_record_17_t;

extern ltedfapegtest_record_17_t new_ltedfapegtest_record_17(void);

extern void release_ltedfapegtest_record_17(ltedfapegtest_record_17_t x);

extern ltedfapegtest_record_17_t copy_ltedfapegtest_record_17(ltedfapegtest_record_17_t x);

extern bool_t equal_ltedfapegtest_record_17(ltedfapegtest_record_17_t x, ltedfapegtest_record_17_t y);
extern char * json_ltedfapegtest_record_17(ltedfapegtest_record_17_t x);

typedef struct actual_ltedfapegtest_record_17_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegtest_record_17_t;
extern void release_ltedfapegtest_record_17_ptr(pointer_t x, type_actual_t ltedfapegtest_record_17);

extern bool_t equal_ltedfapegtest_record_17_ptr(pointer_t x, pointer_t y, actual_ltedfapegtest_record_17_t T);

extern char * json_ltedfapegtest_record_17_ptr(pointer_t x,  actual_ltedfapegtest_record_17_t T);

actual_ltedfapegtest_record_17_t actual_ltedfapegtest_record_17(void);

extern ltedfapegtest_record_17_t update_ltedfapegtest_record_17_depth(ltedfapegtest_record_17_t x, uint8_t v);

extern ltedfapegtest_record_17_t update_ltedfapegtest_record_17_lflag(ltedfapegtest_record_17_t x, bool_t v);

extern ltedfapegtest_record_17_t update_ltedfapegtest_record_17_scaf(ltedfapegtest_record_17_t x, ltedfapegtest_funtype_16_t v);

extern ltedfapegtest_record_17_t update_ltedfapegtest_record_17_stack(ltedfapegtest_record_17_t x, ltedfapeg__ent_adt_t v);




struct ltedfapegtest_closure_18_s;
        typedef struct ltedfapegtest_closure_18_s * ltedfapegtest_closure_18_t;

struct ltedfapegtest_closure_18_s {uint32_t count;
         ltedfapegtest_funtype_16_ftbl_t ftbl;
         ltedfapegtest_funtype_16_htbl_t htbl;
        uint32_t fvar_1;
        ltedfapegtest_funtype_7_t fvar_2;};

ltedfapegtest_funtype_7_t f_ltedfapegtest_closure_18(struct ltedfapegtest_closure_18_s * closure, uint32_t bvar);

ltedfapegtest_funtype_7_t m_ltedfapegtest_closure_18(struct ltedfapegtest_closure_18_s * closure, uint32_t bvar);

extern ltedfapegtest_funtype_7_t h_ltedfapegtest_closure_18(uint32_t ivar_54, uint32_t ivar_87, ltedfapegtest_funtype_7_t ivar_37);

ltedfapegtest_closure_18_t new_ltedfapegtest_closure_18(void);

void release_ltedfapegtest_closure_18(ltedfapegtest_funtype_16_t closure);

ltedfapegtest_closure_18_t copy_ltedfapegtest_closure_18(ltedfapegtest_closure_18_t x);




struct ltedfapegtest_closure_19_s;
        typedef struct ltedfapegtest_closure_19_s * ltedfapegtest_closure_19_t;

struct ltedfapegtest_closure_19_s {uint32_t count;
         ltedfapegtest_funtype_7_ftbl_t ftbl;
         ltedfapegtest_funtype_7_htbl_t htbl;};

ltedfapeg__ent_adt_t f_ltedfapegtest_closure_19(struct ltedfapegtest_closure_19_s * closure, uint8_t bvar);

ltedfapeg__ent_adt_t m_ltedfapegtest_closure_19(struct ltedfapegtest_closure_19_s * closure, uint8_t bvar);

extern ltedfapeg__ent_adt_t h_ltedfapegtest_closure_19(uint8_t ivar_42);

ltedfapegtest_closure_19_t new_ltedfapegtest_closure_19(void);

void release_ltedfapegtest_closure_19(ltedfapegtest_funtype_7_t closure);

ltedfapegtest_closure_19_t copy_ltedfapegtest_closure_19(ltedfapegtest_closure_19_t x);




struct ltedfapegtest_closure_20_s;
        typedef struct ltedfapegtest_closure_20_s * ltedfapegtest_closure_20_t;

struct ltedfapegtest_closure_20_s {uint32_t count;
         ltedfapegtest_funtype_16_ftbl_t ftbl;
         ltedfapegtest_funtype_16_htbl_t htbl;
        uint32_t fvar_1;
        ltedfapegtest_funtype_7_t fvar_2;};

ltedfapegtest_funtype_7_t f_ltedfapegtest_closure_20(struct ltedfapegtest_closure_20_s * closure, uint32_t bvar);

ltedfapegtest_funtype_7_t m_ltedfapegtest_closure_20(struct ltedfapegtest_closure_20_s * closure, uint32_t bvar);

extern ltedfapegtest_funtype_7_t h_ltedfapegtest_closure_20(uint32_t ivar_55, uint32_t ivar_198, ltedfapegtest_funtype_7_t ivar_38);

ltedfapegtest_closure_20_t new_ltedfapegtest_closure_20(void);

void release_ltedfapegtest_closure_20(ltedfapegtest_funtype_16_t closure);

ltedfapegtest_closure_20_t copy_ltedfapegtest_closure_20(ltedfapegtest_closure_20_t x);




struct ltedfapegtest_closure_21_s;
        typedef struct ltedfapegtest_closure_21_s * ltedfapegtest_closure_21_t;

struct ltedfapegtest_closure_21_s {uint32_t count;
         ltedfapegtest_funtype_1_ftbl_t ftbl;
         ltedfapegtest_funtype_1_htbl_t htbl;};

ltedfapeg__prepeg_adt_t f_ltedfapegtest_closure_21(struct ltedfapegtest_closure_21_s * closure, uint8_t bvar);

ltedfapeg__prepeg_adt_t m_ltedfapegtest_closure_21(struct ltedfapegtest_closure_21_s * closure, uint8_t bvar);

extern ltedfapeg__prepeg_adt_t h_ltedfapegtest_closure_21(uint8_t ivar_98);

ltedfapegtest_closure_21_t new_ltedfapegtest_closure_21(void);

void release_ltedfapegtest_closure_21(ltedfapegtest_funtype_1_t closure);

ltedfapegtest_closure_21_t copy_ltedfapegtest_closure_21(ltedfapegtest_closure_21_t x);


//jsonparsecheckfile

struct ltedfapegtest_record_22_s {
        uint32_t count; 
        ltedfapegtest_record_14_t project_1;
        uint8_t project_2;
        uint32_t project_3;};
typedef struct ltedfapegtest_record_22_s * ltedfapegtest_record_22_t;

extern ltedfapegtest_record_22_t new_ltedfapegtest_record_22(void);

extern void release_ltedfapegtest_record_22(ltedfapegtest_record_22_t x);

extern ltedfapegtest_record_22_t copy_ltedfapegtest_record_22(ltedfapegtest_record_22_t x);

extern bool_t equal_ltedfapegtest_record_22(ltedfapegtest_record_22_t x, ltedfapegtest_record_22_t y);
extern char * json_ltedfapegtest_record_22(ltedfapegtest_record_22_t x);

typedef struct actual_ltedfapegtest_record_22_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegtest_record_22_t;
extern void release_ltedfapegtest_record_22_ptr(pointer_t x, type_actual_t ltedfapegtest_record_22);

extern bool_t equal_ltedfapegtest_record_22_ptr(pointer_t x, pointer_t y, actual_ltedfapegtest_record_22_t T);

extern char * json_ltedfapegtest_record_22_ptr(pointer_t x,  actual_ltedfapegtest_record_22_t T);

actual_ltedfapegtest_record_22_t actual_ltedfapegtest_record_22(void);

extern ltedfapegtest_record_22_t update_ltedfapegtest_record_22_project_1(ltedfapegtest_record_22_t x, ltedfapegtest_record_14_t v);

extern ltedfapegtest_record_22_t update_ltedfapegtest_record_22_project_2(ltedfapegtest_record_22_t x, uint8_t v);

extern ltedfapegtest_record_22_t update_ltedfapegtest_record_22_project_3(ltedfapegtest_record_22_t x, uint32_t v);


//jsonparsecheckfile

struct ltedfapegtest_funtype_23_s;
        typedef struct ltedfapegtest_funtype_23_s * ltedfapegtest_funtype_23_t;

struct ltedfapegtest_funtype_23_ftbl_s {ltedfapegproof__parsetree_adt_t (* fptr)(struct ltedfapegtest_funtype_23_s *, ltedfapegtest_record_22_t);
        ltedfapegproof__parsetree_adt_t (* mptr)(struct ltedfapegtest_funtype_23_s *, ltedfapegtest_record_14_t, uint8_t, uint32_t);
        void (* rptr)(struct ltedfapegtest_funtype_23_s *);
        struct ltedfapegtest_funtype_23_s * (* cptr)(struct ltedfapegtest_funtype_23_s *);};
typedef struct ltedfapegtest_funtype_23_ftbl_s * ltedfapegtest_funtype_23_ftbl_t;

struct ltedfapegtest_funtype_23_hashentry_s {uint32_t keyhash; ltedfapegtest_record_22_t key; ltedfapegproof__parsetree_adt_t value;}; 
typedef struct ltedfapegtest_funtype_23_hashentry_s ltedfapegtest_funtype_23_hashentry_t;

struct ltedfapegtest_funtype_23_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegtest_funtype_23_hashentry_t * data;}; 
typedef struct ltedfapegtest_funtype_23_htbl_s * ltedfapegtest_funtype_23_htbl_t;

struct ltedfapegtest_funtype_23_s {uint32_t count;
        ltedfapegtest_funtype_23_ftbl_t ftbl;
        ltedfapegtest_funtype_23_htbl_t htbl;};
typedef struct ltedfapegtest_funtype_23_s * ltedfapegtest_funtype_23_t;

extern void release_ltedfapegtest_funtype_23(ltedfapegtest_funtype_23_t x);

extern ltedfapegtest_funtype_23_t copy_ltedfapegtest_funtype_23(ltedfapegtest_funtype_23_t x);

extern bool_t equal_ltedfapegtest_funtype_23(ltedfapegtest_funtype_23_t x, ltedfapegtest_funtype_23_t y);

extern char* json_ltedfapegtest_funtype_23(ltedfapegtest_funtype_23_t x);




struct ltedfapegtest_closure_24_s;
        typedef struct ltedfapegtest_closure_24_s * ltedfapegtest_closure_24_t;

struct ltedfapegtest_closure_24_s {uint32_t count;
         ltedfapegtest_funtype_1_ftbl_t ftbl;
         ltedfapegtest_funtype_1_htbl_t htbl;};

ltedfapeg__prepeg_adt_t f_ltedfapegtest_closure_24(struct ltedfapegtest_closure_24_s * closure, uint8_t bvar);

ltedfapeg__prepeg_adt_t m_ltedfapegtest_closure_24(struct ltedfapegtest_closure_24_s * closure, uint8_t bvar);

extern ltedfapeg__prepeg_adt_t h_ltedfapegtest_closure_24(uint8_t ivar_147);

ltedfapegtest_closure_24_t new_ltedfapegtest_closure_24(void);

void release_ltedfapegtest_closure_24(ltedfapegtest_funtype_1_t closure);

ltedfapegtest_closure_24_t copy_ltedfapegtest_closure_24(ltedfapegtest_closure_24_t x);


//jsonparsecheckfile

struct ltedfapegtest_record_25_s {
        uint32_t count; 
        ltedfapegproof__qstack_adt_t project_1;
        uint8_t project_2;
        uint32_t project_3;
        ltedfapegproof__parsetree_adt_t project_4;};
typedef struct ltedfapegtest_record_25_s * ltedfapegtest_record_25_t;

extern ltedfapegtest_record_25_t new_ltedfapegtest_record_25(void);

extern void release_ltedfapegtest_record_25(ltedfapegtest_record_25_t x);

extern ltedfapegtest_record_25_t copy_ltedfapegtest_record_25(ltedfapegtest_record_25_t x);

extern bool_t equal_ltedfapegtest_record_25(ltedfapegtest_record_25_t x, ltedfapegtest_record_25_t y);
extern char * json_ltedfapegtest_record_25(ltedfapegtest_record_25_t x);

typedef struct actual_ltedfapegtest_record_25_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegtest_record_25_t;
extern void release_ltedfapegtest_record_25_ptr(pointer_t x, type_actual_t ltedfapegtest_record_25);

extern bool_t equal_ltedfapegtest_record_25_ptr(pointer_t x, pointer_t y, actual_ltedfapegtest_record_25_t T);

extern char * json_ltedfapegtest_record_25_ptr(pointer_t x,  actual_ltedfapegtest_record_25_t T);

actual_ltedfapegtest_record_25_t actual_ltedfapegtest_record_25(void);

extern ltedfapegtest_record_25_t update_ltedfapegtest_record_25_project_1(ltedfapegtest_record_25_t x, ltedfapegproof__qstack_adt_t v);

extern ltedfapegtest_record_25_t update_ltedfapegtest_record_25_project_2(ltedfapegtest_record_25_t x, uint8_t v);

extern ltedfapegtest_record_25_t update_ltedfapegtest_record_25_project_3(ltedfapegtest_record_25_t x, uint32_t v);

extern ltedfapegtest_record_25_t update_ltedfapegtest_record_25_project_4(ltedfapegtest_record_25_t x, ltedfapegproof__parsetree_adt_t v);


//jsonparsecheckfile

struct ltedfapegtest_funtype_26_s;
        typedef struct ltedfapegtest_funtype_26_s * ltedfapegtest_funtype_26_t;

struct ltedfapegtest_funtype_26_ftbl_s {bool_t (* fptr)(struct ltedfapegtest_funtype_26_s *, ltedfapegtest_record_25_t);
        bool_t (* mptr)(struct ltedfapegtest_funtype_26_s *, ltedfapegproof__qstack_adt_t, uint8_t, uint32_t, ltedfapegproof__parsetree_adt_t);
        void (* rptr)(struct ltedfapegtest_funtype_26_s *);
        struct ltedfapegtest_funtype_26_s * (* cptr)(struct ltedfapegtest_funtype_26_s *);};
typedef struct ltedfapegtest_funtype_26_ftbl_s * ltedfapegtest_funtype_26_ftbl_t;

struct ltedfapegtest_funtype_26_hashentry_s {uint32_t keyhash; ltedfapegtest_record_25_t key; bool_t value;}; 
typedef struct ltedfapegtest_funtype_26_hashentry_s ltedfapegtest_funtype_26_hashentry_t;

struct ltedfapegtest_funtype_26_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegtest_funtype_26_hashentry_t * data;}; 
typedef struct ltedfapegtest_funtype_26_htbl_s * ltedfapegtest_funtype_26_htbl_t;

struct ltedfapegtest_funtype_26_s {uint32_t count;
        ltedfapegtest_funtype_26_ftbl_t ftbl;
        ltedfapegtest_funtype_26_htbl_t htbl;};
typedef struct ltedfapegtest_funtype_26_s * ltedfapegtest_funtype_26_t;

extern void release_ltedfapegtest_funtype_26(ltedfapegtest_funtype_26_t x);

extern ltedfapegtest_funtype_26_t copy_ltedfapegtest_funtype_26(ltedfapegtest_funtype_26_t x);

extern bool_t equal_ltedfapegtest_funtype_26(ltedfapegtest_funtype_26_t x, ltedfapegtest_funtype_26_t y);

extern char* json_ltedfapegtest_funtype_26(ltedfapegtest_funtype_26_t x);




struct ltedfapegtest_closure_27_s;
        typedef struct ltedfapegtest_closure_27_s * ltedfapegtest_closure_27_t;

struct ltedfapegtest_closure_27_s {uint32_t count;
         ltedfapegtest_funtype_1_ftbl_t ftbl;
         ltedfapegtest_funtype_1_htbl_t htbl;};

ltedfapeg__prepeg_adt_t f_ltedfapegtest_closure_27(struct ltedfapegtest_closure_27_s * closure, uint8_t bvar);

ltedfapeg__prepeg_adt_t m_ltedfapegtest_closure_27(struct ltedfapegtest_closure_27_s * closure, uint8_t bvar);

extern ltedfapeg__prepeg_adt_t h_ltedfapegtest_closure_27(uint8_t ivar_180);

ltedfapegtest_closure_27_t new_ltedfapegtest_closure_27(void);

void release_ltedfapegtest_closure_27(ltedfapegtest_funtype_1_t closure);

ltedfapegtest_closure_27_t copy_ltedfapegtest_closure_27(ltedfapegtest_closure_27_t x);




struct ltedfapegtest_closure_28_s;
        typedef struct ltedfapegtest_closure_28_s * ltedfapegtest_closure_28_t;

struct ltedfapegtest_closure_28_s {uint32_t count;
         ltedfapegtest_funtype_7_ftbl_t ftbl;
         ltedfapegtest_funtype_7_htbl_t htbl;};

ltedfapeg__ent_adt_t f_ltedfapegtest_closure_28(struct ltedfapegtest_closure_28_s * closure, uint8_t bvar);

ltedfapeg__ent_adt_t m_ltedfapegtest_closure_28(struct ltedfapegtest_closure_28_s * closure, uint8_t bvar);

extern ltedfapeg__ent_adt_t h_ltedfapegtest_closure_28(uint8_t ivar_41);

ltedfapegtest_closure_28_t new_ltedfapegtest_closure_28(void);

void release_ltedfapegtest_closure_28(ltedfapegtest_funtype_7_t closure);

ltedfapegtest_closure_28_t copy_ltedfapegtest_closure_28(ltedfapegtest_closure_28_t x);




struct ltedfapegtest_closure_29_s;
        typedef struct ltedfapegtest_closure_29_s * ltedfapegtest_closure_29_t;

struct ltedfapegtest_closure_29_s {uint32_t count;
         ltedfapegtest_funtype_16_ftbl_t ftbl;
         ltedfapegtest_funtype_16_htbl_t htbl;
        uint32_t fvar_1;
        ltedfapegtest_funtype_7_t fvar_2;};

ltedfapegtest_funtype_7_t f_ltedfapegtest_closure_29(struct ltedfapegtest_closure_29_s * closure, uint32_t bvar);

ltedfapegtest_funtype_7_t m_ltedfapegtest_closure_29(struct ltedfapegtest_closure_29_s * closure, uint32_t bvar);

extern ltedfapegtest_funtype_7_t h_ltedfapegtest_closure_29(uint32_t ivar_54, uint32_t ivar_149, ltedfapegtest_funtype_7_t ivar_37);

ltedfapegtest_closure_29_t new_ltedfapegtest_closure_29(void);

void release_ltedfapegtest_closure_29(ltedfapegtest_funtype_16_t closure);

ltedfapegtest_closure_29_t copy_ltedfapegtest_closure_29(ltedfapegtest_closure_29_t x);




struct ltedfapegtest_closure_30_s;
        typedef struct ltedfapegtest_closure_30_s * ltedfapegtest_closure_30_t;

struct ltedfapegtest_closure_30_s {uint32_t count;
         ltedfapegtest_funtype_1_ftbl_t ftbl;
         ltedfapegtest_funtype_1_htbl_t htbl;};

ltedfapeg__prepeg_adt_t f_ltedfapegtest_closure_30(struct ltedfapegtest_closure_30_s * closure, uint8_t bvar);

ltedfapeg__prepeg_adt_t m_ltedfapegtest_closure_30(struct ltedfapegtest_closure_30_s * closure, uint8_t bvar);

extern ltedfapeg__prepeg_adt_t h_ltedfapegtest_closure_30(uint8_t ivar_128);

ltedfapegtest_closure_30_t new_ltedfapegtest_closure_30(void);

void release_ltedfapegtest_closure_30(ltedfapegtest_funtype_1_t closure);

ltedfapegtest_closure_30_t copy_ltedfapegtest_closure_30(ltedfapegtest_closure_30_t x);




struct ltedfapegtest_closure_31_s;
        typedef struct ltedfapegtest_closure_31_s * ltedfapegtest_closure_31_t;

struct ltedfapegtest_closure_31_s {uint32_t count;
         ltedfapegtest_funtype_1_ftbl_t ftbl;
         ltedfapegtest_funtype_1_htbl_t htbl;};

ltedfapeg__prepeg_adt_t f_ltedfapegtest_closure_31(struct ltedfapegtest_closure_31_s * closure, uint8_t bvar);

ltedfapeg__prepeg_adt_t m_ltedfapegtest_closure_31(struct ltedfapegtest_closure_31_s * closure, uint8_t bvar);

extern ltedfapeg__prepeg_adt_t h_ltedfapegtest_closure_31(uint8_t ivar_97);

ltedfapegtest_closure_31_t new_ltedfapegtest_closure_31(void);

void release_ltedfapegtest_closure_31(ltedfapegtest_funtype_1_t closure);

ltedfapegtest_closure_31_t copy_ltedfapegtest_closure_31(ltedfapegtest_closure_31_t x);




struct ltedfapegtest_closure_32_s;
        typedef struct ltedfapegtest_closure_32_s * ltedfapegtest_closure_32_t;

struct ltedfapegtest_closure_32_s {uint32_t count;
         ltedfapegtest_funtype_7_ftbl_t ftbl;
         ltedfapegtest_funtype_7_htbl_t htbl;};

ltedfapeg__ent_adt_t f_ltedfapegtest_closure_32(struct ltedfapegtest_closure_32_s * closure, uint8_t bvar);

ltedfapeg__ent_adt_t m_ltedfapegtest_closure_32(struct ltedfapegtest_closure_32_s * closure, uint8_t bvar);

extern ltedfapeg__ent_adt_t h_ltedfapegtest_closure_32(uint8_t ivar_41);

ltedfapegtest_closure_32_t new_ltedfapegtest_closure_32(void);

void release_ltedfapegtest_closure_32(ltedfapegtest_funtype_7_t closure);

ltedfapegtest_closure_32_t copy_ltedfapegtest_closure_32(ltedfapegtest_closure_32_t x);




struct ltedfapegtest_closure_33_s;
        typedef struct ltedfapegtest_closure_33_s * ltedfapegtest_closure_33_t;

struct ltedfapegtest_closure_33_s {uint32_t count;
         ltedfapegtest_funtype_16_ftbl_t ftbl;
         ltedfapegtest_funtype_16_htbl_t htbl;
        uint32_t fvar_1;
        ltedfapegtest_funtype_7_t fvar_2;};

ltedfapegtest_funtype_7_t f_ltedfapegtest_closure_33(struct ltedfapegtest_closure_33_s * closure, uint32_t bvar);

ltedfapegtest_funtype_7_t m_ltedfapegtest_closure_33(struct ltedfapegtest_closure_33_s * closure, uint32_t bvar);

extern ltedfapegtest_funtype_7_t h_ltedfapegtest_closure_33(uint32_t ivar_54, uint32_t ivar_118, ltedfapegtest_funtype_7_t ivar_37);

ltedfapegtest_closure_33_t new_ltedfapegtest_closure_33(void);

void release_ltedfapegtest_closure_33(ltedfapegtest_funtype_16_t closure);

ltedfapegtest_closure_33_t copy_ltedfapegtest_closure_33(ltedfapegtest_closure_33_t x);



extern ltedfapeg__prepeg_adt_t ltedfapegtest__djson(uint8_t ivar_1);

extern ltedfapegtest_array_0_t ltedfapegtest__djsontable(void);

extern ltedfapegtest_array_3_t ltedfapegtest__empty(uint8_t ivar_1);

extern ltedfapegtest_funtype_5_t ltedfapegtest__cat(uint8_t ivar_1, uint8_t ivar_2);

extern uint8_t ltedfapegtest__tok0(uint8_t ivar_1);

extern uint8_t ltedfapegtest__tok1(uint8_t ivar_1);

extern uint8_t ltedfapegtest__emptydict(uint8_t ivar_1);

extern uint8_t ltedfapegtest__obrace(uint8_t ivar_1);

extern uint8_t ltedfapegtest__cbrace(uint8_t ivar_1);

extern uint8_t ltedfapegtest__colon(uint8_t ivar_1);

extern ltedfapegtest_array_3_t ltedfapegtest__emptydict2(void);

extern ltedfapegtest_array_3_t ltedfapegtest__dict1(void);

extern ltedfapeg__ent_adt_t ltedfapegtest__iparse(uint8_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegtest_array_3_t ivar_3, uint8_t ivar_4, uint8_t ivar_5);

extern bool_t ltedfapegtest__jsonreadfile(bytestrings__bytestring_t ivar_1);

extern bool_t ltedfapegtest__jsonreadfileinit(bytestrings__bytestring_t ivar_1);

extern bool_t ltedfapegtest__jsonparsecheckfile(bytestrings__bytestring_t ivar_1);

extern ltedfapegproof__parsetree_adt_t ltedfapegtest__jsonparsefile(bytestrings__bytestring_t ivar_1);

extern ltedfapeg__ent_adt_t ltedfapegtest__jsonpureparsefile(bytestrings__bytestring_t ivar_1);
#endif