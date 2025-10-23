//Code generated using pvs2ir
#ifndef _arraytopdown_h 
#define _arraytopdown_h

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

#include "bytestrings_c.h"

#include "gen_strings_c.h"

#include "strings_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "lex2_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "arrayCount_c.h"

//cc -O3 -Wall -o arraytopdown -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c /Users/e21660/shankar/pvs.git/lib/lex2_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c arraytopdown_c.c arrayCount_c.c -lgmp 

struct arraytopdown__ent_adt_s {
         uint32_t count; 
        uint8_t arraytopdown__ent_adt_index;};
typedef struct arraytopdown__ent_adt_s * arraytopdown__ent_adt_t;

extern arraytopdown__ent_adt_t new_arraytopdown__ent_adt(void);

extern void release_arraytopdown__ent_adt(arraytopdown__ent_adt_t x);

extern arraytopdown__ent_adt_t copy_arraytopdown__ent_adt(arraytopdown__ent_adt_t x);

extern bool_t equal_arraytopdown__ent_adt(arraytopdown__ent_adt_t x, arraytopdown__ent_adt_t y);
typedef struct actual_arraytopdown__ent_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown__ent_adt_t;

void release_arraytopdown__ent_adt_ptr(pointer_t x, type_actual_t arraytopdown__ent_adt);
extern bool_t equal_arraytopdown__ent_adt_ptr(pointer_t x, pointer_t y, actual_arraytopdown__ent_adt_t T);

actual_arraytopdown__ent_adt_t actual_arraytopdown__ent_adt(void);

extern arraytopdown__ent_adt_t update_arraytopdown__ent_adt_arraytopdown__ent_adt_index(arraytopdown__ent_adt_t x, uint8_t v);



struct arraytopdown__fail_s {
        uint32_t count; 
        uint8_t arraytopdown__ent_adt_index;
        uint64_t dep;};
typedef struct arraytopdown__fail_s * arraytopdown__fail_t;

extern arraytopdown__fail_t new_arraytopdown__fail(void);

extern void release_arraytopdown__fail(arraytopdown__fail_t x);

extern arraytopdown__fail_t copy_arraytopdown__fail(arraytopdown__fail_t x);

extern bool_t equal_arraytopdown__fail(arraytopdown__fail_t x, arraytopdown__fail_t y);
typedef struct actual_arraytopdown__fail_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown__fail_t;

void release_arraytopdown__fail_ptr(pointer_t x, type_actual_t arraytopdown__fail);
extern bool_t equal_arraytopdown__fail_ptr(pointer_t x, pointer_t y, actual_arraytopdown__fail_t T);

actual_arraytopdown__fail_t actual_arraytopdown__fail(void);

extern arraytopdown__fail_t update_arraytopdown__fail_arraytopdown__ent_adt_index(arraytopdown__fail_t x, uint8_t v);

extern arraytopdown__fail_t update_arraytopdown__fail_dep(arraytopdown__fail_t x, uint64_t v);



struct arraytopdown__good_s {
        uint32_t count; 
        uint8_t arraytopdown__ent_adt_index;
        uint64_t dep;
        uint32_t span;};
typedef struct arraytopdown__good_s * arraytopdown__good_t;

extern arraytopdown__good_t new_arraytopdown__good(void);

extern void release_arraytopdown__good(arraytopdown__good_t x);

extern arraytopdown__good_t copy_arraytopdown__good(arraytopdown__good_t x);

extern bool_t equal_arraytopdown__good(arraytopdown__good_t x, arraytopdown__good_t y);
typedef struct actual_arraytopdown__good_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown__good_t;

void release_arraytopdown__good_ptr(pointer_t x, type_actual_t arraytopdown__good);
extern bool_t equal_arraytopdown__good_ptr(pointer_t x, pointer_t y, actual_arraytopdown__good_t T);

actual_arraytopdown__good_t actual_arraytopdown__good(void);

extern arraytopdown__good_t update_arraytopdown__good_arraytopdown__ent_adt_index(arraytopdown__good_t x, uint8_t v);

extern arraytopdown__good_t update_arraytopdown__good_dep(arraytopdown__good_t x, uint64_t v);

extern arraytopdown__good_t update_arraytopdown__good_span(arraytopdown__good_t x, uint32_t v);



struct arraytopdown__push_s {
        uint32_t count; 
        uint8_t arraytopdown__ent_adt_index;
        uint32_t pos;
        uint8_t nt;};
typedef struct arraytopdown__push_s * arraytopdown__push_t;

extern arraytopdown__push_t new_arraytopdown__push(void);

extern void release_arraytopdown__push(arraytopdown__push_t x);

extern arraytopdown__push_t copy_arraytopdown__push(arraytopdown__push_t x);

extern bool_t equal_arraytopdown__push(arraytopdown__push_t x, arraytopdown__push_t y);
typedef struct actual_arraytopdown__push_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown__push_t;

void release_arraytopdown__push_ptr(pointer_t x, type_actual_t arraytopdown__push);
extern bool_t equal_arraytopdown__push_ptr(pointer_t x, pointer_t y, actual_arraytopdown__push_t T);

actual_arraytopdown__push_t actual_arraytopdown__push(void);

extern arraytopdown__push_t update_arraytopdown__push_arraytopdown__ent_adt_index(arraytopdown__push_t x, uint8_t v);

extern arraytopdown__push_t update_arraytopdown__push_pos(arraytopdown__push_t x, uint32_t v);

extern arraytopdown__push_t update_arraytopdown__push_nt(arraytopdown__push_t x, uint8_t v);



struct arraytopdown_funtype_4_s;
        typedef struct arraytopdown_funtype_4_s * arraytopdown_funtype_4_t;

struct arraytopdown_funtype_4_ftbl_s {uint8_t (* fptr)(struct arraytopdown_funtype_4_s *, arraytopdown__ent_adt_t);
        uint8_t (* mptr)(struct arraytopdown_funtype_4_s *, arraytopdown__ent_adt_t);
        void (* rptr)(struct arraytopdown_funtype_4_s *);
        struct arraytopdown_funtype_4_s * (* cptr)(struct arraytopdown_funtype_4_s *);};
typedef struct arraytopdown_funtype_4_ftbl_s * arraytopdown_funtype_4_ftbl_t;

struct arraytopdown_funtype_4_hashentry_s {uint32_t keyhash; arraytopdown__ent_adt_t key; uint8_t value;}; 
typedef struct arraytopdown_funtype_4_hashentry_s arraytopdown_funtype_4_hashentry_t;

struct arraytopdown_funtype_4_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_4_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_4_htbl_s * arraytopdown_funtype_4_htbl_t;

struct arraytopdown_funtype_4_s {uint32_t count;
        arraytopdown_funtype_4_ftbl_t ftbl;
        arraytopdown_funtype_4_htbl_t htbl;};
typedef struct arraytopdown_funtype_4_s * arraytopdown_funtype_4_t;

extern void release_arraytopdown_funtype_4(arraytopdown_funtype_4_t x);

extern arraytopdown_funtype_4_t copy_arraytopdown_funtype_4(arraytopdown_funtype_4_t x);

extern bool_t equal_arraytopdown_funtype_4(arraytopdown_funtype_4_t x, arraytopdown_funtype_4_t y);



struct arraytopdown_funtype_5_s;
        typedef struct arraytopdown_funtype_5_s * arraytopdown_funtype_5_t;

struct arraytopdown_funtype_5_ftbl_s {mpz_ptr_t (* fptr)(struct arraytopdown_funtype_5_s *, arraytopdown__ent_adt_t);
        mpz_ptr_t (* mptr)(struct arraytopdown_funtype_5_s *, arraytopdown__ent_adt_t);
        void (* rptr)(struct arraytopdown_funtype_5_s *);
        struct arraytopdown_funtype_5_s * (* cptr)(struct arraytopdown_funtype_5_s *);};
typedef struct arraytopdown_funtype_5_ftbl_s * arraytopdown_funtype_5_ftbl_t;

struct arraytopdown_funtype_5_hashentry_s {uint32_t keyhash; arraytopdown__ent_adt_t key; mpz_t value;}; 
typedef struct arraytopdown_funtype_5_hashentry_s arraytopdown_funtype_5_hashentry_t;

struct arraytopdown_funtype_5_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_5_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_5_htbl_s * arraytopdown_funtype_5_htbl_t;

struct arraytopdown_funtype_5_s {uint32_t count;
        arraytopdown_funtype_5_ftbl_t ftbl;
        arraytopdown_funtype_5_htbl_t htbl;};
typedef struct arraytopdown_funtype_5_s * arraytopdown_funtype_5_t;

extern void release_arraytopdown_funtype_5(arraytopdown_funtype_5_t x);

extern arraytopdown_funtype_5_t copy_arraytopdown_funtype_5(arraytopdown_funtype_5_t x);

extern bool_t equal_arraytopdown_funtype_5(arraytopdown_funtype_5_t x, arraytopdown_funtype_5_t y);



struct arraytopdown_funtype_6_s;
        typedef struct arraytopdown_funtype_6_s * arraytopdown_funtype_6_t;

struct arraytopdown_funtype_6_ftbl_s {mpz_ptr_t (* fptr)(struct arraytopdown_funtype_6_s *, uint64_t);
        mpz_ptr_t (* mptr)(struct arraytopdown_funtype_6_s *, uint64_t);
        void (* rptr)(struct arraytopdown_funtype_6_s *);
        struct arraytopdown_funtype_6_s * (* cptr)(struct arraytopdown_funtype_6_s *);};
typedef struct arraytopdown_funtype_6_ftbl_s * arraytopdown_funtype_6_ftbl_t;

struct arraytopdown_funtype_6_hashentry_s {uint32_t keyhash; uint64_t key; mpz_t value;}; 
typedef struct arraytopdown_funtype_6_hashentry_s arraytopdown_funtype_6_hashentry_t;

struct arraytopdown_funtype_6_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_6_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_6_htbl_s * arraytopdown_funtype_6_htbl_t;

struct arraytopdown_funtype_6_s {uint32_t count;
        arraytopdown_funtype_6_ftbl_t ftbl;
        arraytopdown_funtype_6_htbl_t htbl;};
typedef struct arraytopdown_funtype_6_s * arraytopdown_funtype_6_t;

extern void release_arraytopdown_funtype_6(arraytopdown_funtype_6_t x);

extern arraytopdown_funtype_6_t copy_arraytopdown_funtype_6(arraytopdown_funtype_6_t x);

uint32_t lookup_arraytopdown_funtype_6(arraytopdown_funtype_6_htbl_t htbl, uint64_t i, uint32_t ihash);

arraytopdown_funtype_6_t dupdate_arraytopdown_funtype_6(arraytopdown_funtype_6_t a, uint64_t i, mpz_ptr_t v);

extern arraytopdown_funtype_6_t update_arraytopdown_funtype_6(arraytopdown_funtype_6_t a, uint64_t i, mpz_ptr_t v);

extern bool_t equal_arraytopdown_funtype_6(arraytopdown_funtype_6_t x, arraytopdown_funtype_6_t y);



struct arraytopdown_record_7_s {
        uint32_t count; 
        uint64_t project_1;
        uint32_t project_2;};
typedef struct arraytopdown_record_7_s * arraytopdown_record_7_t;

extern arraytopdown_record_7_t new_arraytopdown_record_7(void);

extern void release_arraytopdown_record_7(arraytopdown_record_7_t x);

extern arraytopdown_record_7_t copy_arraytopdown_record_7(arraytopdown_record_7_t x);

extern bool_t equal_arraytopdown_record_7(arraytopdown_record_7_t x, arraytopdown_record_7_t y);
typedef struct actual_arraytopdown_record_7_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_record_7_t;

void release_arraytopdown_record_7_ptr(pointer_t x, type_actual_t arraytopdown_record_7);
extern bool_t equal_arraytopdown_record_7_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_7_t T);

actual_arraytopdown_record_7_t actual_arraytopdown_record_7(void);

extern arraytopdown_record_7_t update_arraytopdown_record_7_project_1(arraytopdown_record_7_t x, uint64_t v);

extern arraytopdown_record_7_t update_arraytopdown_record_7_project_2(arraytopdown_record_7_t x, uint32_t v);



struct arraytopdown_funtype_8_s;
        typedef struct arraytopdown_funtype_8_s * arraytopdown_funtype_8_t;

struct arraytopdown_funtype_8_ftbl_s {mpz_ptr_t (* fptr)(struct arraytopdown_funtype_8_s *, arraytopdown_record_7_t);
        mpz_ptr_t (* mptr)(struct arraytopdown_funtype_8_s *, uint64_t, uint32_t);
        void (* rptr)(struct arraytopdown_funtype_8_s *);
        struct arraytopdown_funtype_8_s * (* cptr)(struct arraytopdown_funtype_8_s *);};
typedef struct arraytopdown_funtype_8_ftbl_s * arraytopdown_funtype_8_ftbl_t;

struct arraytopdown_funtype_8_hashentry_s {uint32_t keyhash; arraytopdown_record_7_t key; mpz_t value;}; 
typedef struct arraytopdown_funtype_8_hashentry_s arraytopdown_funtype_8_hashentry_t;

struct arraytopdown_funtype_8_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_8_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_8_htbl_s * arraytopdown_funtype_8_htbl_t;

struct arraytopdown_funtype_8_s {uint32_t count;
        arraytopdown_funtype_8_ftbl_t ftbl;
        arraytopdown_funtype_8_htbl_t htbl;};
typedef struct arraytopdown_funtype_8_s * arraytopdown_funtype_8_t;

extern void release_arraytopdown_funtype_8(arraytopdown_funtype_8_t x);

extern arraytopdown_funtype_8_t copy_arraytopdown_funtype_8(arraytopdown_funtype_8_t x);

extern bool_t equal_arraytopdown_funtype_8(arraytopdown_funtype_8_t x, arraytopdown_funtype_8_t y);



struct arraytopdown_record_9_s {
        uint32_t count; 
        uint32_t project_1;
        uint8_t project_2;};
typedef struct arraytopdown_record_9_s * arraytopdown_record_9_t;

extern arraytopdown_record_9_t new_arraytopdown_record_9(void);

extern void release_arraytopdown_record_9(arraytopdown_record_9_t x);

extern arraytopdown_record_9_t copy_arraytopdown_record_9(arraytopdown_record_9_t x);

extern bool_t equal_arraytopdown_record_9(arraytopdown_record_9_t x, arraytopdown_record_9_t y);
typedef struct actual_arraytopdown_record_9_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_record_9_t;

void release_arraytopdown_record_9_ptr(pointer_t x, type_actual_t arraytopdown_record_9);
extern bool_t equal_arraytopdown_record_9_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_9_t T);

actual_arraytopdown_record_9_t actual_arraytopdown_record_9(void);

extern arraytopdown_record_9_t update_arraytopdown_record_9_project_1(arraytopdown_record_9_t x, uint32_t v);

extern arraytopdown_record_9_t update_arraytopdown_record_9_project_2(arraytopdown_record_9_t x, uint8_t v);



struct arraytopdown_funtype_10_s;
        typedef struct arraytopdown_funtype_10_s * arraytopdown_funtype_10_t;

struct arraytopdown_funtype_10_ftbl_s {mpz_ptr_t (* fptr)(struct arraytopdown_funtype_10_s *, arraytopdown_record_9_t);
        mpz_ptr_t (* mptr)(struct arraytopdown_funtype_10_s *, uint32_t, uint8_t);
        void (* rptr)(struct arraytopdown_funtype_10_s *);
        struct arraytopdown_funtype_10_s * (* cptr)(struct arraytopdown_funtype_10_s *);};
typedef struct arraytopdown_funtype_10_ftbl_s * arraytopdown_funtype_10_ftbl_t;

struct arraytopdown_funtype_10_hashentry_s {uint32_t keyhash; arraytopdown_record_9_t key; mpz_t value;}; 
typedef struct arraytopdown_funtype_10_hashentry_s arraytopdown_funtype_10_hashentry_t;

struct arraytopdown_funtype_10_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_10_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_10_htbl_s * arraytopdown_funtype_10_htbl_t;

struct arraytopdown_funtype_10_s {uint32_t count;
        arraytopdown_funtype_10_ftbl_t ftbl;
        arraytopdown_funtype_10_htbl_t htbl;};
typedef struct arraytopdown_funtype_10_s * arraytopdown_funtype_10_t;

extern void release_arraytopdown_funtype_10(arraytopdown_funtype_10_t x);

extern arraytopdown_funtype_10_t copy_arraytopdown_funtype_10(arraytopdown_funtype_10_t x);

extern bool_t equal_arraytopdown_funtype_10(arraytopdown_funtype_10_t x, arraytopdown_funtype_10_t y);




struct arraytopdown_closure_11_s;
        typedef struct arraytopdown_closure_11_s * arraytopdown_closure_11_t;

struct arraytopdown_closure_11_s {uint32_t count;
         arraytopdown_funtype_5_ftbl_t ftbl;
         arraytopdown_funtype_5_htbl_t htbl;
        arraytopdown_funtype_8_t fvar_1;
        arraytopdown_funtype_10_t fvar_2;
        mpz_t fvar_3;
        mpz_t fvar_4;
        arraytopdown_funtype_6_t fvar_5;};

mpz_ptr_t f_arraytopdown_closure_11(struct arraytopdown_closure_11_s * closure, arraytopdown__ent_adt_t bvar);

mpz_ptr_t m_arraytopdown_closure_11(struct arraytopdown_closure_11_s * closure, arraytopdown__ent_adt_t bvar);

extern mpz_ptr_t h_arraytopdown_closure_11(arraytopdown__ent_adt_t ivar_16, arraytopdown_funtype_8_t ivar_10, arraytopdown_funtype_10_t ivar_12, mpz_ptr_t ivar_9, mpz_ptr_t ivar_8, arraytopdown_funtype_6_t ivar_6);

extern arraytopdown_closure_11_t new_arraytopdown_closure_11(void);

extern void release_arraytopdown_closure_11(arraytopdown_funtype_5_t closure);

extern arraytopdown_closure_11_t copy_arraytopdown_closure_11(arraytopdown_closure_11_t x);



struct arraytopdown_record_12_s {
        uint32_t count; 
        uint64_t project_1;
        arraytopdown__ent_adt_t project_2;};
typedef struct arraytopdown_record_12_s * arraytopdown_record_12_t;

extern arraytopdown_record_12_t new_arraytopdown_record_12(void);

extern void release_arraytopdown_record_12(arraytopdown_record_12_t x);

extern arraytopdown_record_12_t copy_arraytopdown_record_12(arraytopdown_record_12_t x);

extern bool_t equal_arraytopdown_record_12(arraytopdown_record_12_t x, arraytopdown_record_12_t y);
typedef struct actual_arraytopdown_record_12_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_record_12_t;

void release_arraytopdown_record_12_ptr(pointer_t x, type_actual_t arraytopdown_record_12);
extern bool_t equal_arraytopdown_record_12_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_12_t T);

actual_arraytopdown_record_12_t actual_arraytopdown_record_12(void);

extern arraytopdown_record_12_t update_arraytopdown_record_12_project_1(arraytopdown_record_12_t x, uint64_t v);

extern arraytopdown_record_12_t update_arraytopdown_record_12_project_2(arraytopdown_record_12_t x, arraytopdown__ent_adt_t v);



struct arraytopdown_funtype_13_s;
        typedef struct arraytopdown_funtype_13_s * arraytopdown_funtype_13_t;

struct arraytopdown_funtype_13_ftbl_s {mpz_ptr_t (* fptr)(struct arraytopdown_funtype_13_s *, arraytopdown_record_12_t);
        mpz_ptr_t (* mptr)(struct arraytopdown_funtype_13_s *, uint64_t, arraytopdown__ent_adt_t);
        void (* rptr)(struct arraytopdown_funtype_13_s *);
        struct arraytopdown_funtype_13_s * (* cptr)(struct arraytopdown_funtype_13_s *);};
typedef struct arraytopdown_funtype_13_ftbl_s * arraytopdown_funtype_13_ftbl_t;

struct arraytopdown_funtype_13_hashentry_s {uint32_t keyhash; arraytopdown_record_12_t key; mpz_t value;}; 
typedef struct arraytopdown_funtype_13_hashentry_s arraytopdown_funtype_13_hashentry_t;

struct arraytopdown_funtype_13_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_13_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_13_htbl_s * arraytopdown_funtype_13_htbl_t;

struct arraytopdown_funtype_13_s {uint32_t count;
        arraytopdown_funtype_13_ftbl_t ftbl;
        arraytopdown_funtype_13_htbl_t htbl;};
typedef struct arraytopdown_funtype_13_s * arraytopdown_funtype_13_t;

extern void release_arraytopdown_funtype_13(arraytopdown_funtype_13_t x);

extern arraytopdown_funtype_13_t copy_arraytopdown_funtype_13(arraytopdown_funtype_13_t x);

extern bool_t equal_arraytopdown_funtype_13(arraytopdown_funtype_13_t x, arraytopdown_funtype_13_t y);



struct arraytopdown_record_14_s {
        uint32_t count; 
        uint64_t project_1;
        uint32_t project_2;
        arraytopdown__ent_adt_t project_3;};
typedef struct arraytopdown_record_14_s * arraytopdown_record_14_t;

extern arraytopdown_record_14_t new_arraytopdown_record_14(void);

extern void release_arraytopdown_record_14(arraytopdown_record_14_t x);

extern arraytopdown_record_14_t copy_arraytopdown_record_14(arraytopdown_record_14_t x);

extern bool_t equal_arraytopdown_record_14(arraytopdown_record_14_t x, arraytopdown_record_14_t y);
typedef struct actual_arraytopdown_record_14_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_record_14_t;

void release_arraytopdown_record_14_ptr(pointer_t x, type_actual_t arraytopdown_record_14);
extern bool_t equal_arraytopdown_record_14_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_14_t T);

actual_arraytopdown_record_14_t actual_arraytopdown_record_14(void);

extern arraytopdown_record_14_t update_arraytopdown_record_14_project_1(arraytopdown_record_14_t x, uint64_t v);

extern arraytopdown_record_14_t update_arraytopdown_record_14_project_2(arraytopdown_record_14_t x, uint32_t v);

extern arraytopdown_record_14_t update_arraytopdown_record_14_project_3(arraytopdown_record_14_t x, arraytopdown__ent_adt_t v);



struct arraytopdown_funtype_15_s;
        typedef struct arraytopdown_funtype_15_s * arraytopdown_funtype_15_t;

struct arraytopdown_funtype_15_ftbl_s {mpz_ptr_t (* fptr)(struct arraytopdown_funtype_15_s *, arraytopdown_record_14_t);
        mpz_ptr_t (* mptr)(struct arraytopdown_funtype_15_s *, uint64_t, uint32_t, arraytopdown__ent_adt_t);
        void (* rptr)(struct arraytopdown_funtype_15_s *);
        struct arraytopdown_funtype_15_s * (* cptr)(struct arraytopdown_funtype_15_s *);};
typedef struct arraytopdown_funtype_15_ftbl_s * arraytopdown_funtype_15_ftbl_t;

struct arraytopdown_funtype_15_hashentry_s {uint32_t keyhash; arraytopdown_record_14_t key; mpz_t value;}; 
typedef struct arraytopdown_funtype_15_hashentry_s arraytopdown_funtype_15_hashentry_t;

struct arraytopdown_funtype_15_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_15_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_15_htbl_s * arraytopdown_funtype_15_htbl_t;

struct arraytopdown_funtype_15_s {uint32_t count;
        arraytopdown_funtype_15_ftbl_t ftbl;
        arraytopdown_funtype_15_htbl_t htbl;};
typedef struct arraytopdown_funtype_15_s * arraytopdown_funtype_15_t;

extern void release_arraytopdown_funtype_15(arraytopdown_funtype_15_t x);

extern arraytopdown_funtype_15_t copy_arraytopdown_funtype_15(arraytopdown_funtype_15_t x);

extern bool_t equal_arraytopdown_funtype_15(arraytopdown_funtype_15_t x, arraytopdown_funtype_15_t y);



struct arraytopdown_record_16_s {
        uint32_t count; 
        uint32_t project_1;
        uint8_t project_2;
        arraytopdown__ent_adt_t project_3;};
typedef struct arraytopdown_record_16_s * arraytopdown_record_16_t;

extern arraytopdown_record_16_t new_arraytopdown_record_16(void);

extern void release_arraytopdown_record_16(arraytopdown_record_16_t x);

extern arraytopdown_record_16_t copy_arraytopdown_record_16(arraytopdown_record_16_t x);

extern bool_t equal_arraytopdown_record_16(arraytopdown_record_16_t x, arraytopdown_record_16_t y);
typedef struct actual_arraytopdown_record_16_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_record_16_t;

void release_arraytopdown_record_16_ptr(pointer_t x, type_actual_t arraytopdown_record_16);
extern bool_t equal_arraytopdown_record_16_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_16_t T);

actual_arraytopdown_record_16_t actual_arraytopdown_record_16(void);

extern arraytopdown_record_16_t update_arraytopdown_record_16_project_1(arraytopdown_record_16_t x, uint32_t v);

extern arraytopdown_record_16_t update_arraytopdown_record_16_project_2(arraytopdown_record_16_t x, uint8_t v);

extern arraytopdown_record_16_t update_arraytopdown_record_16_project_3(arraytopdown_record_16_t x, arraytopdown__ent_adt_t v);



struct arraytopdown_funtype_17_s;
        typedef struct arraytopdown_funtype_17_s * arraytopdown_funtype_17_t;

struct arraytopdown_funtype_17_ftbl_s {mpz_ptr_t (* fptr)(struct arraytopdown_funtype_17_s *, arraytopdown_record_16_t);
        mpz_ptr_t (* mptr)(struct arraytopdown_funtype_17_s *, uint32_t, uint8_t, arraytopdown__ent_adt_t);
        void (* rptr)(struct arraytopdown_funtype_17_s *);
        struct arraytopdown_funtype_17_s * (* cptr)(struct arraytopdown_funtype_17_s *);};
typedef struct arraytopdown_funtype_17_ftbl_s * arraytopdown_funtype_17_ftbl_t;

struct arraytopdown_funtype_17_hashentry_s {uint32_t keyhash; arraytopdown_record_16_t key; mpz_t value;}; 
typedef struct arraytopdown_funtype_17_hashentry_s arraytopdown_funtype_17_hashentry_t;

struct arraytopdown_funtype_17_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_17_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_17_htbl_s * arraytopdown_funtype_17_htbl_t;

struct arraytopdown_funtype_17_s {uint32_t count;
        arraytopdown_funtype_17_ftbl_t ftbl;
        arraytopdown_funtype_17_htbl_t htbl;};
typedef struct arraytopdown_funtype_17_s * arraytopdown_funtype_17_t;

extern void release_arraytopdown_funtype_17(arraytopdown_funtype_17_t x);

extern arraytopdown_funtype_17_t copy_arraytopdown_funtype_17(arraytopdown_funtype_17_t x);

extern bool_t equal_arraytopdown_funtype_17(arraytopdown_funtype_17_t x, arraytopdown_funtype_17_t y);




struct arraytopdown_closure_18_s;
        typedef struct arraytopdown_closure_18_s * arraytopdown_closure_18_t;

struct arraytopdown_closure_18_s {uint32_t count;
         arraytopdown_funtype_5_ftbl_t ftbl;
         arraytopdown_funtype_5_htbl_t htbl;
        arraytopdown_funtype_15_t fvar_1;
        arraytopdown_funtype_17_t fvar_2;
        arraytopdown_funtype_5_t fvar_3;
        arraytopdown_funtype_5_t fvar_4;
        arraytopdown_funtype_13_t fvar_5;};

mpz_ptr_t f_arraytopdown_closure_18(struct arraytopdown_closure_18_s * closure, arraytopdown__ent_adt_t bvar);

mpz_ptr_t m_arraytopdown_closure_18(struct arraytopdown_closure_18_s * closure, arraytopdown__ent_adt_t bvar);

extern mpz_ptr_t h_arraytopdown_closure_18(arraytopdown__ent_adt_t ivar_20, arraytopdown_funtype_15_t ivar_14, arraytopdown_funtype_17_t ivar_16, arraytopdown_funtype_5_t ivar_12, arraytopdown_funtype_5_t ivar_10, arraytopdown_funtype_13_t ivar_8);

extern arraytopdown_closure_18_t new_arraytopdown_closure_18(void);

extern void release_arraytopdown_closure_18(arraytopdown_funtype_5_t closure);

extern arraytopdown_closure_18_t copy_arraytopdown_closure_18(arraytopdown_closure_18_t x);



struct arraytopdown_funtype_19_s;
        typedef struct arraytopdown_funtype_19_s * arraytopdown_funtype_19_t;

struct arraytopdown_funtype_19_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct arraytopdown_funtype_19_s *, arraytopdown__ent_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct arraytopdown_funtype_19_s *, arraytopdown__ent_adt_t);
        void (* rptr)(struct arraytopdown_funtype_19_s *);
        struct arraytopdown_funtype_19_s * (* cptr)(struct arraytopdown_funtype_19_s *);};
typedef struct arraytopdown_funtype_19_ftbl_s * arraytopdown_funtype_19_ftbl_t;

struct arraytopdown_funtype_19_hashentry_s {uint32_t keyhash; arraytopdown__ent_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct arraytopdown_funtype_19_hashentry_s arraytopdown_funtype_19_hashentry_t;

struct arraytopdown_funtype_19_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_19_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_19_htbl_s * arraytopdown_funtype_19_htbl_t;

struct arraytopdown_funtype_19_s {uint32_t count;
        arraytopdown_funtype_19_ftbl_t ftbl;
        arraytopdown_funtype_19_htbl_t htbl;};
typedef struct arraytopdown_funtype_19_s * arraytopdown_funtype_19_t;

extern void release_arraytopdown_funtype_19(arraytopdown_funtype_19_t x);

extern arraytopdown_funtype_19_t copy_arraytopdown_funtype_19(arraytopdown_funtype_19_t x);

extern bool_t equal_arraytopdown_funtype_19(arraytopdown_funtype_19_t x, arraytopdown_funtype_19_t y);



struct arraytopdown_funtype_20_s;
        typedef struct arraytopdown_funtype_20_s * arraytopdown_funtype_20_t;

struct arraytopdown_funtype_20_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct arraytopdown_funtype_20_s *, uint64_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct arraytopdown_funtype_20_s *, uint64_t);
        void (* rptr)(struct arraytopdown_funtype_20_s *);
        struct arraytopdown_funtype_20_s * (* cptr)(struct arraytopdown_funtype_20_s *);};
typedef struct arraytopdown_funtype_20_ftbl_s * arraytopdown_funtype_20_ftbl_t;

struct arraytopdown_funtype_20_hashentry_s {uint32_t keyhash; uint64_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct arraytopdown_funtype_20_hashentry_s arraytopdown_funtype_20_hashentry_t;

struct arraytopdown_funtype_20_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_20_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_20_htbl_s * arraytopdown_funtype_20_htbl_t;

struct arraytopdown_funtype_20_s {uint32_t count;
        arraytopdown_funtype_20_ftbl_t ftbl;
        arraytopdown_funtype_20_htbl_t htbl;};
typedef struct arraytopdown_funtype_20_s * arraytopdown_funtype_20_t;

extern void release_arraytopdown_funtype_20(arraytopdown_funtype_20_t x);

extern arraytopdown_funtype_20_t copy_arraytopdown_funtype_20(arraytopdown_funtype_20_t x);

uint32_t lookup_arraytopdown_funtype_20(arraytopdown_funtype_20_htbl_t htbl, uint64_t i, uint32_t ihash);

arraytopdown_funtype_20_t dupdate_arraytopdown_funtype_20(arraytopdown_funtype_20_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v);

extern arraytopdown_funtype_20_t update_arraytopdown_funtype_20(arraytopdown_funtype_20_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v);

extern bool_t equal_arraytopdown_funtype_20(arraytopdown_funtype_20_t x, arraytopdown_funtype_20_t y);



struct arraytopdown_funtype_21_s;
        typedef struct arraytopdown_funtype_21_s * arraytopdown_funtype_21_t;

struct arraytopdown_funtype_21_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct arraytopdown_funtype_21_s *, arraytopdown_record_7_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct arraytopdown_funtype_21_s *, uint64_t, uint32_t);
        void (* rptr)(struct arraytopdown_funtype_21_s *);
        struct arraytopdown_funtype_21_s * (* cptr)(struct arraytopdown_funtype_21_s *);};
typedef struct arraytopdown_funtype_21_ftbl_s * arraytopdown_funtype_21_ftbl_t;

struct arraytopdown_funtype_21_hashentry_s {uint32_t keyhash; arraytopdown_record_7_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct arraytopdown_funtype_21_hashentry_s arraytopdown_funtype_21_hashentry_t;

struct arraytopdown_funtype_21_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_21_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_21_htbl_s * arraytopdown_funtype_21_htbl_t;

struct arraytopdown_funtype_21_s {uint32_t count;
        arraytopdown_funtype_21_ftbl_t ftbl;
        arraytopdown_funtype_21_htbl_t htbl;};
typedef struct arraytopdown_funtype_21_s * arraytopdown_funtype_21_t;

extern void release_arraytopdown_funtype_21(arraytopdown_funtype_21_t x);

extern arraytopdown_funtype_21_t copy_arraytopdown_funtype_21(arraytopdown_funtype_21_t x);

extern bool_t equal_arraytopdown_funtype_21(arraytopdown_funtype_21_t x, arraytopdown_funtype_21_t y);



struct arraytopdown_funtype_22_s;
        typedef struct arraytopdown_funtype_22_s * arraytopdown_funtype_22_t;

struct arraytopdown_funtype_22_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct arraytopdown_funtype_22_s *, arraytopdown_record_9_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct arraytopdown_funtype_22_s *, uint32_t, uint8_t);
        void (* rptr)(struct arraytopdown_funtype_22_s *);
        struct arraytopdown_funtype_22_s * (* cptr)(struct arraytopdown_funtype_22_s *);};
typedef struct arraytopdown_funtype_22_ftbl_s * arraytopdown_funtype_22_ftbl_t;

struct arraytopdown_funtype_22_hashentry_s {uint32_t keyhash; arraytopdown_record_9_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct arraytopdown_funtype_22_hashentry_s arraytopdown_funtype_22_hashentry_t;

struct arraytopdown_funtype_22_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_22_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_22_htbl_s * arraytopdown_funtype_22_htbl_t;

struct arraytopdown_funtype_22_s {uint32_t count;
        arraytopdown_funtype_22_ftbl_t ftbl;
        arraytopdown_funtype_22_htbl_t htbl;};
typedef struct arraytopdown_funtype_22_s * arraytopdown_funtype_22_t;

extern void release_arraytopdown_funtype_22(arraytopdown_funtype_22_t x);

extern arraytopdown_funtype_22_t copy_arraytopdown_funtype_22(arraytopdown_funtype_22_t x);

extern bool_t equal_arraytopdown_funtype_22(arraytopdown_funtype_22_t x, arraytopdown_funtype_22_t y);




struct arraytopdown_closure_23_s;
        typedef struct arraytopdown_closure_23_s * arraytopdown_closure_23_t;

struct arraytopdown_closure_23_s {uint32_t count;
         arraytopdown_funtype_19_ftbl_t ftbl;
         arraytopdown_funtype_19_htbl_t htbl;
        arraytopdown_funtype_21_t fvar_1;
        arraytopdown_funtype_22_t fvar_2;
        ordstruct_adt__ordstruct_adt_t fvar_3;
        ordstruct_adt__ordstruct_adt_t fvar_4;
        arraytopdown_funtype_20_t fvar_5;};

ordstruct_adt__ordstruct_adt_t f_arraytopdown_closure_23(struct arraytopdown_closure_23_s * closure, arraytopdown__ent_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_arraytopdown_closure_23(struct arraytopdown_closure_23_s * closure, arraytopdown__ent_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_arraytopdown_closure_23(arraytopdown__ent_adt_t ivar_16, arraytopdown_funtype_21_t ivar_10, arraytopdown_funtype_22_t ivar_12, ordstruct_adt__ordstruct_adt_t ivar_9, ordstruct_adt__ordstruct_adt_t ivar_8, arraytopdown_funtype_20_t ivar_6);

extern arraytopdown_closure_23_t new_arraytopdown_closure_23(void);

extern void release_arraytopdown_closure_23(arraytopdown_funtype_19_t closure);

extern arraytopdown_closure_23_t copy_arraytopdown_closure_23(arraytopdown_closure_23_t x);



struct arraytopdown_funtype_24_s;
        typedef struct arraytopdown_funtype_24_s * arraytopdown_funtype_24_t;

struct arraytopdown_funtype_24_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct arraytopdown_funtype_24_s *, arraytopdown_record_12_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct arraytopdown_funtype_24_s *, uint64_t, arraytopdown__ent_adt_t);
        void (* rptr)(struct arraytopdown_funtype_24_s *);
        struct arraytopdown_funtype_24_s * (* cptr)(struct arraytopdown_funtype_24_s *);};
typedef struct arraytopdown_funtype_24_ftbl_s * arraytopdown_funtype_24_ftbl_t;

struct arraytopdown_funtype_24_hashentry_s {uint32_t keyhash; arraytopdown_record_12_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct arraytopdown_funtype_24_hashentry_s arraytopdown_funtype_24_hashentry_t;

struct arraytopdown_funtype_24_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_24_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_24_htbl_s * arraytopdown_funtype_24_htbl_t;

struct arraytopdown_funtype_24_s {uint32_t count;
        arraytopdown_funtype_24_ftbl_t ftbl;
        arraytopdown_funtype_24_htbl_t htbl;};
typedef struct arraytopdown_funtype_24_s * arraytopdown_funtype_24_t;

extern void release_arraytopdown_funtype_24(arraytopdown_funtype_24_t x);

extern arraytopdown_funtype_24_t copy_arraytopdown_funtype_24(arraytopdown_funtype_24_t x);

extern bool_t equal_arraytopdown_funtype_24(arraytopdown_funtype_24_t x, arraytopdown_funtype_24_t y);



struct arraytopdown_funtype_25_s;
        typedef struct arraytopdown_funtype_25_s * arraytopdown_funtype_25_t;

struct arraytopdown_funtype_25_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct arraytopdown_funtype_25_s *, arraytopdown_record_14_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct arraytopdown_funtype_25_s *, uint64_t, uint32_t, arraytopdown__ent_adt_t);
        void (* rptr)(struct arraytopdown_funtype_25_s *);
        struct arraytopdown_funtype_25_s * (* cptr)(struct arraytopdown_funtype_25_s *);};
typedef struct arraytopdown_funtype_25_ftbl_s * arraytopdown_funtype_25_ftbl_t;

struct arraytopdown_funtype_25_hashentry_s {uint32_t keyhash; arraytopdown_record_14_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct arraytopdown_funtype_25_hashentry_s arraytopdown_funtype_25_hashentry_t;

struct arraytopdown_funtype_25_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_25_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_25_htbl_s * arraytopdown_funtype_25_htbl_t;

struct arraytopdown_funtype_25_s {uint32_t count;
        arraytopdown_funtype_25_ftbl_t ftbl;
        arraytopdown_funtype_25_htbl_t htbl;};
typedef struct arraytopdown_funtype_25_s * arraytopdown_funtype_25_t;

extern void release_arraytopdown_funtype_25(arraytopdown_funtype_25_t x);

extern arraytopdown_funtype_25_t copy_arraytopdown_funtype_25(arraytopdown_funtype_25_t x);

extern bool_t equal_arraytopdown_funtype_25(arraytopdown_funtype_25_t x, arraytopdown_funtype_25_t y);



struct arraytopdown_funtype_26_s;
        typedef struct arraytopdown_funtype_26_s * arraytopdown_funtype_26_t;

struct arraytopdown_funtype_26_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct arraytopdown_funtype_26_s *, arraytopdown_record_16_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct arraytopdown_funtype_26_s *, uint32_t, uint8_t, arraytopdown__ent_adt_t);
        void (* rptr)(struct arraytopdown_funtype_26_s *);
        struct arraytopdown_funtype_26_s * (* cptr)(struct arraytopdown_funtype_26_s *);};
typedef struct arraytopdown_funtype_26_ftbl_s * arraytopdown_funtype_26_ftbl_t;

struct arraytopdown_funtype_26_hashentry_s {uint32_t keyhash; arraytopdown_record_16_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct arraytopdown_funtype_26_hashentry_s arraytopdown_funtype_26_hashentry_t;

struct arraytopdown_funtype_26_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_26_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_26_htbl_s * arraytopdown_funtype_26_htbl_t;

struct arraytopdown_funtype_26_s {uint32_t count;
        arraytopdown_funtype_26_ftbl_t ftbl;
        arraytopdown_funtype_26_htbl_t htbl;};
typedef struct arraytopdown_funtype_26_s * arraytopdown_funtype_26_t;

extern void release_arraytopdown_funtype_26(arraytopdown_funtype_26_t x);

extern arraytopdown_funtype_26_t copy_arraytopdown_funtype_26(arraytopdown_funtype_26_t x);

extern bool_t equal_arraytopdown_funtype_26(arraytopdown_funtype_26_t x, arraytopdown_funtype_26_t y);




struct arraytopdown_closure_27_s;
        typedef struct arraytopdown_closure_27_s * arraytopdown_closure_27_t;

struct arraytopdown_closure_27_s {uint32_t count;
         arraytopdown_funtype_19_ftbl_t ftbl;
         arraytopdown_funtype_19_htbl_t htbl;
        arraytopdown_funtype_25_t fvar_1;
        arraytopdown_funtype_26_t fvar_2;
        arraytopdown_funtype_19_t fvar_3;
        arraytopdown_funtype_19_t fvar_4;
        arraytopdown_funtype_24_t fvar_5;};

ordstruct_adt__ordstruct_adt_t f_arraytopdown_closure_27(struct arraytopdown_closure_27_s * closure, arraytopdown__ent_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_arraytopdown_closure_27(struct arraytopdown_closure_27_s * closure, arraytopdown__ent_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_arraytopdown_closure_27(arraytopdown__ent_adt_t ivar_20, arraytopdown_funtype_25_t ivar_14, arraytopdown_funtype_26_t ivar_16, arraytopdown_funtype_19_t ivar_12, arraytopdown_funtype_19_t ivar_10, arraytopdown_funtype_24_t ivar_8);

extern arraytopdown_closure_27_t new_arraytopdown_closure_27(void);

extern void release_arraytopdown_closure_27(arraytopdown_funtype_19_t closure);

extern arraytopdown_closure_27_t copy_arraytopdown_closure_27(arraytopdown_closure_27_t x);



struct arraytopdown__peg_adt_s {
         uint32_t count; 
        uint8_t arraytopdown__peg_adt_index;};
typedef struct arraytopdown__peg_adt_s * arraytopdown__peg_adt_t;

extern arraytopdown__peg_adt_t new_arraytopdown__peg_adt(void);

extern void release_arraytopdown__peg_adt(arraytopdown__peg_adt_t x);

extern arraytopdown__peg_adt_t copy_arraytopdown__peg_adt(arraytopdown__peg_adt_t x);

extern bool_t equal_arraytopdown__peg_adt(arraytopdown__peg_adt_t x, arraytopdown__peg_adt_t y);
typedef struct actual_arraytopdown__peg_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown__peg_adt_t;

void release_arraytopdown__peg_adt_ptr(pointer_t x, type_actual_t arraytopdown__peg_adt);
extern bool_t equal_arraytopdown__peg_adt_ptr(pointer_t x, pointer_t y, actual_arraytopdown__peg_adt_t T);

actual_arraytopdown__peg_adt_t actual_arraytopdown__peg_adt(void);

extern arraytopdown__peg_adt_t update_arraytopdown__peg_adt_arraytopdown__peg_adt_index(arraytopdown__peg_adt_t x, uint8_t v);



struct arraytopdown_funtype_29_s;
        typedef struct arraytopdown_funtype_29_s * arraytopdown_funtype_29_t;

struct arraytopdown_funtype_29_ftbl_s {bool_t (* fptr)(struct arraytopdown_funtype_29_s *, uint8_t);
        bool_t (* mptr)(struct arraytopdown_funtype_29_s *, uint8_t);
        void (* rptr)(struct arraytopdown_funtype_29_s *);
        struct arraytopdown_funtype_29_s * (* cptr)(struct arraytopdown_funtype_29_s *);};
typedef struct arraytopdown_funtype_29_ftbl_s * arraytopdown_funtype_29_ftbl_t;

struct arraytopdown_funtype_29_hashentry_s {uint32_t keyhash; uint8_t key; bool_t value;}; 
typedef struct arraytopdown_funtype_29_hashentry_s arraytopdown_funtype_29_hashentry_t;

struct arraytopdown_funtype_29_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_29_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_29_htbl_s * arraytopdown_funtype_29_htbl_t;

struct arraytopdown_funtype_29_s {uint32_t count;
        arraytopdown_funtype_29_ftbl_t ftbl;
        arraytopdown_funtype_29_htbl_t htbl;};
typedef struct arraytopdown_funtype_29_s * arraytopdown_funtype_29_t;

extern void release_arraytopdown_funtype_29(arraytopdown_funtype_29_t x);

extern arraytopdown_funtype_29_t copy_arraytopdown_funtype_29(arraytopdown_funtype_29_t x);

uint32_t lookup_arraytopdown_funtype_29(arraytopdown_funtype_29_htbl_t htbl, uint8_t i, uint32_t ihash);

arraytopdown_funtype_29_t dupdate_arraytopdown_funtype_29(arraytopdown_funtype_29_t a, uint8_t i, bool_t v);

extern arraytopdown_funtype_29_t update_arraytopdown_funtype_29(arraytopdown_funtype_29_t a, uint8_t i, bool_t v);

extern bool_t equal_arraytopdown_funtype_29(arraytopdown_funtype_29_t x, arraytopdown_funtype_29_t y);



struct arraytopdown__any_s {
        uint32_t count; 
        uint8_t arraytopdown__peg_adt_index;
        arraytopdown_funtype_29_t p;};
typedef struct arraytopdown__any_s * arraytopdown__any_t;

extern arraytopdown__any_t new_arraytopdown__any(void);

extern void release_arraytopdown__any(arraytopdown__any_t x);

extern arraytopdown__any_t copy_arraytopdown__any(arraytopdown__any_t x);

extern bool_t equal_arraytopdown__any(arraytopdown__any_t x, arraytopdown__any_t y);
typedef struct actual_arraytopdown__any_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown__any_t;

void release_arraytopdown__any_ptr(pointer_t x, type_actual_t arraytopdown__any);
extern bool_t equal_arraytopdown__any_ptr(pointer_t x, pointer_t y, actual_arraytopdown__any_t T);

actual_arraytopdown__any_t actual_arraytopdown__any(void);

extern arraytopdown__any_t update_arraytopdown__any_arraytopdown__peg_adt_index(arraytopdown__any_t x, uint8_t v);

extern arraytopdown__any_t update_arraytopdown__any_p(arraytopdown__any_t x, arraytopdown_funtype_29_t v);



struct arraytopdown__terminal_s {
        uint32_t count; 
        uint8_t arraytopdown__peg_adt_index;
        uint8_t a;};
typedef struct arraytopdown__terminal_s * arraytopdown__terminal_t;

extern arraytopdown__terminal_t new_arraytopdown__terminal(void);

extern void release_arraytopdown__terminal(arraytopdown__terminal_t x);

extern arraytopdown__terminal_t copy_arraytopdown__terminal(arraytopdown__terminal_t x);

extern bool_t equal_arraytopdown__terminal(arraytopdown__terminal_t x, arraytopdown__terminal_t y);
typedef struct actual_arraytopdown__terminal_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown__terminal_t;

void release_arraytopdown__terminal_ptr(pointer_t x, type_actual_t arraytopdown__terminal);
extern bool_t equal_arraytopdown__terminal_ptr(pointer_t x, pointer_t y, actual_arraytopdown__terminal_t T);

actual_arraytopdown__terminal_t actual_arraytopdown__terminal(void);

extern arraytopdown__terminal_t update_arraytopdown__terminal_arraytopdown__peg_adt_index(arraytopdown__terminal_t x, uint8_t v);

extern arraytopdown__terminal_t update_arraytopdown__terminal_a(arraytopdown__terminal_t x, uint8_t v);



struct arraytopdown__concat_s {
        uint32_t count; 
        uint8_t arraytopdown__peg_adt_index;
        uint8_t e1;
        uint8_t e2;};
typedef struct arraytopdown__concat_s * arraytopdown__concat_t;

extern arraytopdown__concat_t new_arraytopdown__concat(void);

extern void release_arraytopdown__concat(arraytopdown__concat_t x);

extern arraytopdown__concat_t copy_arraytopdown__concat(arraytopdown__concat_t x);

extern bool_t equal_arraytopdown__concat(arraytopdown__concat_t x, arraytopdown__concat_t y);
typedef struct actual_arraytopdown__concat_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown__concat_t;

void release_arraytopdown__concat_ptr(pointer_t x, type_actual_t arraytopdown__concat);
extern bool_t equal_arraytopdown__concat_ptr(pointer_t x, pointer_t y, actual_arraytopdown__concat_t T);

actual_arraytopdown__concat_t actual_arraytopdown__concat(void);

extern arraytopdown__concat_t update_arraytopdown__concat_arraytopdown__peg_adt_index(arraytopdown__concat_t x, uint8_t v);

extern arraytopdown__concat_t update_arraytopdown__concat_e1(arraytopdown__concat_t x, uint8_t v);

extern arraytopdown__concat_t update_arraytopdown__concat_e2(arraytopdown__concat_t x, uint8_t v);



struct arraytopdown__choice_s {
        uint32_t count; 
        uint8_t arraytopdown__peg_adt_index;
        uint8_t e1;
        uint8_t e2;};
typedef struct arraytopdown__choice_s * arraytopdown__choice_t;

extern arraytopdown__choice_t new_arraytopdown__choice(void);

extern void release_arraytopdown__choice(arraytopdown__choice_t x);

extern arraytopdown__choice_t copy_arraytopdown__choice(arraytopdown__choice_t x);

extern bool_t equal_arraytopdown__choice(arraytopdown__choice_t x, arraytopdown__choice_t y);
typedef struct actual_arraytopdown__choice_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown__choice_t;

void release_arraytopdown__choice_ptr(pointer_t x, type_actual_t arraytopdown__choice);
extern bool_t equal_arraytopdown__choice_ptr(pointer_t x, pointer_t y, actual_arraytopdown__choice_t T);

actual_arraytopdown__choice_t actual_arraytopdown__choice(void);

extern arraytopdown__choice_t update_arraytopdown__choice_arraytopdown__peg_adt_index(arraytopdown__choice_t x, uint8_t v);

extern arraytopdown__choice_t update_arraytopdown__choice_e1(arraytopdown__choice_t x, uint8_t v);

extern arraytopdown__choice_t update_arraytopdown__choice_e2(arraytopdown__choice_t x, uint8_t v);



struct arraytopdown__check_s {
        uint32_t count; 
        uint8_t arraytopdown__peg_adt_index;
        uint8_t e;};
typedef struct arraytopdown__check_s * arraytopdown__check_t;

extern arraytopdown__check_t new_arraytopdown__check(void);

extern void release_arraytopdown__check(arraytopdown__check_t x);

extern arraytopdown__check_t copy_arraytopdown__check(arraytopdown__check_t x);

extern bool_t equal_arraytopdown__check(arraytopdown__check_t x, arraytopdown__check_t y);
typedef struct actual_arraytopdown__check_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown__check_t;

void release_arraytopdown__check_ptr(pointer_t x, type_actual_t arraytopdown__check);
extern bool_t equal_arraytopdown__check_ptr(pointer_t x, pointer_t y, actual_arraytopdown__check_t T);

actual_arraytopdown__check_t actual_arraytopdown__check(void);

extern arraytopdown__check_t update_arraytopdown__check_arraytopdown__peg_adt_index(arraytopdown__check_t x, uint8_t v);

extern arraytopdown__check_t update_arraytopdown__check_e(arraytopdown__check_t x, uint8_t v);



struct arraytopdown__neg_s {
        uint32_t count; 
        uint8_t arraytopdown__peg_adt_index;
        uint8_t e;};
typedef struct arraytopdown__neg_s * arraytopdown__neg_t;

extern arraytopdown__neg_t new_arraytopdown__neg(void);

extern void release_arraytopdown__neg(arraytopdown__neg_t x);

extern arraytopdown__neg_t copy_arraytopdown__neg(arraytopdown__neg_t x);

extern bool_t equal_arraytopdown__neg(arraytopdown__neg_t x, arraytopdown__neg_t y);
typedef struct actual_arraytopdown__neg_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown__neg_t;

void release_arraytopdown__neg_ptr(pointer_t x, type_actual_t arraytopdown__neg);
extern bool_t equal_arraytopdown__neg_ptr(pointer_t x, pointer_t y, actual_arraytopdown__neg_t T);

actual_arraytopdown__neg_t actual_arraytopdown__neg(void);

extern arraytopdown__neg_t update_arraytopdown__neg_arraytopdown__peg_adt_index(arraytopdown__neg_t x, uint8_t v);

extern arraytopdown__neg_t update_arraytopdown__neg_e(arraytopdown__neg_t x, uint8_t v);



struct arraytopdown_funtype_36_s;
        typedef struct arraytopdown_funtype_36_s * arraytopdown_funtype_36_t;

struct arraytopdown_funtype_36_ftbl_s {uint8_t (* fptr)(struct arraytopdown_funtype_36_s *, arraytopdown__peg_adt_t);
        uint8_t (* mptr)(struct arraytopdown_funtype_36_s *, arraytopdown__peg_adt_t);
        void (* rptr)(struct arraytopdown_funtype_36_s *);
        struct arraytopdown_funtype_36_s * (* cptr)(struct arraytopdown_funtype_36_s *);};
typedef struct arraytopdown_funtype_36_ftbl_s * arraytopdown_funtype_36_ftbl_t;

struct arraytopdown_funtype_36_hashentry_s {uint32_t keyhash; arraytopdown__peg_adt_t key; uint8_t value;}; 
typedef struct arraytopdown_funtype_36_hashentry_s arraytopdown_funtype_36_hashentry_t;

struct arraytopdown_funtype_36_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_36_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_36_htbl_s * arraytopdown_funtype_36_htbl_t;

struct arraytopdown_funtype_36_s {uint32_t count;
        arraytopdown_funtype_36_ftbl_t ftbl;
        arraytopdown_funtype_36_htbl_t htbl;};
typedef struct arraytopdown_funtype_36_s * arraytopdown_funtype_36_t;

extern void release_arraytopdown_funtype_36(arraytopdown_funtype_36_t x);

extern arraytopdown_funtype_36_t copy_arraytopdown_funtype_36(arraytopdown_funtype_36_t x);

extern bool_t equal_arraytopdown_funtype_36(arraytopdown_funtype_36_t x, arraytopdown_funtype_36_t y);



struct arraytopdown_funtype_37_s;
        typedef struct arraytopdown_funtype_37_s * arraytopdown_funtype_37_t;

struct arraytopdown_funtype_37_ftbl_s {mpz_ptr_t (* fptr)(struct arraytopdown_funtype_37_s *, arraytopdown__peg_adt_t);
        mpz_ptr_t (* mptr)(struct arraytopdown_funtype_37_s *, arraytopdown__peg_adt_t);
        void (* rptr)(struct arraytopdown_funtype_37_s *);
        struct arraytopdown_funtype_37_s * (* cptr)(struct arraytopdown_funtype_37_s *);};
typedef struct arraytopdown_funtype_37_ftbl_s * arraytopdown_funtype_37_ftbl_t;

struct arraytopdown_funtype_37_hashentry_s {uint32_t keyhash; arraytopdown__peg_adt_t key; mpz_t value;}; 
typedef struct arraytopdown_funtype_37_hashentry_s arraytopdown_funtype_37_hashentry_t;

struct arraytopdown_funtype_37_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_37_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_37_htbl_s * arraytopdown_funtype_37_htbl_t;

struct arraytopdown_funtype_37_s {uint32_t count;
        arraytopdown_funtype_37_ftbl_t ftbl;
        arraytopdown_funtype_37_htbl_t htbl;};
typedef struct arraytopdown_funtype_37_s * arraytopdown_funtype_37_t;

extern void release_arraytopdown_funtype_37(arraytopdown_funtype_37_t x);

extern arraytopdown_funtype_37_t copy_arraytopdown_funtype_37(arraytopdown_funtype_37_t x);

extern bool_t equal_arraytopdown_funtype_37(arraytopdown_funtype_37_t x, arraytopdown_funtype_37_t y);



struct arraytopdown_funtype_38_s;
        typedef struct arraytopdown_funtype_38_s * arraytopdown_funtype_38_t;

struct arraytopdown_funtype_38_ftbl_s {mpz_ptr_t (* fptr)(struct arraytopdown_funtype_38_s *, arraytopdown_funtype_29_t);
        mpz_ptr_t (* mptr)(struct arraytopdown_funtype_38_s *, arraytopdown_funtype_29_t);
        void (* rptr)(struct arraytopdown_funtype_38_s *);
        struct arraytopdown_funtype_38_s * (* cptr)(struct arraytopdown_funtype_38_s *);};
typedef struct arraytopdown_funtype_38_ftbl_s * arraytopdown_funtype_38_ftbl_t;

struct arraytopdown_funtype_38_hashentry_s {uint32_t keyhash; arraytopdown_funtype_29_t key; mpz_t value;}; 
typedef struct arraytopdown_funtype_38_hashentry_s arraytopdown_funtype_38_hashentry_t;

struct arraytopdown_funtype_38_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_38_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_38_htbl_s * arraytopdown_funtype_38_htbl_t;

struct arraytopdown_funtype_38_s {uint32_t count;
        arraytopdown_funtype_38_ftbl_t ftbl;
        arraytopdown_funtype_38_htbl_t htbl;};
typedef struct arraytopdown_funtype_38_s * arraytopdown_funtype_38_t;

extern void release_arraytopdown_funtype_38(arraytopdown_funtype_38_t x);

extern arraytopdown_funtype_38_t copy_arraytopdown_funtype_38(arraytopdown_funtype_38_t x);

extern bool_t equal_arraytopdown_funtype_38(arraytopdown_funtype_38_t x, arraytopdown_funtype_38_t y);



struct arraytopdown_funtype_39_s;
        typedef struct arraytopdown_funtype_39_s * arraytopdown_funtype_39_t;

struct arraytopdown_funtype_39_ftbl_s {mpz_ptr_t (* fptr)(struct arraytopdown_funtype_39_s *, uint8_t);
        mpz_ptr_t (* mptr)(struct arraytopdown_funtype_39_s *, uint8_t);
        void (* rptr)(struct arraytopdown_funtype_39_s *);
        struct arraytopdown_funtype_39_s * (* cptr)(struct arraytopdown_funtype_39_s *);};
typedef struct arraytopdown_funtype_39_ftbl_s * arraytopdown_funtype_39_ftbl_t;

struct arraytopdown_funtype_39_hashentry_s {uint32_t keyhash; uint8_t key; mpz_t value;}; 
typedef struct arraytopdown_funtype_39_hashentry_s arraytopdown_funtype_39_hashentry_t;

struct arraytopdown_funtype_39_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_39_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_39_htbl_s * arraytopdown_funtype_39_htbl_t;

struct arraytopdown_funtype_39_s {uint32_t count;
        arraytopdown_funtype_39_ftbl_t ftbl;
        arraytopdown_funtype_39_htbl_t htbl;};
typedef struct arraytopdown_funtype_39_s * arraytopdown_funtype_39_t;

extern void release_arraytopdown_funtype_39(arraytopdown_funtype_39_t x);

extern arraytopdown_funtype_39_t copy_arraytopdown_funtype_39(arraytopdown_funtype_39_t x);

uint32_t lookup_arraytopdown_funtype_39(arraytopdown_funtype_39_htbl_t htbl, uint8_t i, uint32_t ihash);

arraytopdown_funtype_39_t dupdate_arraytopdown_funtype_39(arraytopdown_funtype_39_t a, uint8_t i, mpz_ptr_t v);

extern arraytopdown_funtype_39_t update_arraytopdown_funtype_39(arraytopdown_funtype_39_t a, uint8_t i, mpz_ptr_t v);

extern bool_t equal_arraytopdown_funtype_39(arraytopdown_funtype_39_t x, arraytopdown_funtype_39_t y);



struct arraytopdown_record_40_s {
        uint32_t count; 
        uint8_t project_1;
        uint8_t project_2;};
typedef struct arraytopdown_record_40_s * arraytopdown_record_40_t;

extern arraytopdown_record_40_t new_arraytopdown_record_40(void);

extern void release_arraytopdown_record_40(arraytopdown_record_40_t x);

extern arraytopdown_record_40_t copy_arraytopdown_record_40(arraytopdown_record_40_t x);

extern bool_t equal_arraytopdown_record_40(arraytopdown_record_40_t x, arraytopdown_record_40_t y);
typedef struct actual_arraytopdown_record_40_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_record_40_t;

void release_arraytopdown_record_40_ptr(pointer_t x, type_actual_t arraytopdown_record_40);
extern bool_t equal_arraytopdown_record_40_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_40_t T);

actual_arraytopdown_record_40_t actual_arraytopdown_record_40(void);

extern arraytopdown_record_40_t update_arraytopdown_record_40_project_1(arraytopdown_record_40_t x, uint8_t v);

extern arraytopdown_record_40_t update_arraytopdown_record_40_project_2(arraytopdown_record_40_t x, uint8_t v);



struct arraytopdown_funtype_41_s;
        typedef struct arraytopdown_funtype_41_s * arraytopdown_funtype_41_t;

struct arraytopdown_funtype_41_ftbl_s {mpz_ptr_t (* fptr)(struct arraytopdown_funtype_41_s *, arraytopdown_record_40_t);
        mpz_ptr_t (* mptr)(struct arraytopdown_funtype_41_s *, uint8_t, uint8_t);
        void (* rptr)(struct arraytopdown_funtype_41_s *);
        struct arraytopdown_funtype_41_s * (* cptr)(struct arraytopdown_funtype_41_s *);};
typedef struct arraytopdown_funtype_41_ftbl_s * arraytopdown_funtype_41_ftbl_t;

struct arraytopdown_funtype_41_hashentry_s {uint32_t keyhash; arraytopdown_record_40_t key; mpz_t value;}; 
typedef struct arraytopdown_funtype_41_hashentry_s arraytopdown_funtype_41_hashentry_t;

struct arraytopdown_funtype_41_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_41_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_41_htbl_s * arraytopdown_funtype_41_htbl_t;

struct arraytopdown_funtype_41_s {uint32_t count;
        arraytopdown_funtype_41_ftbl_t ftbl;
        arraytopdown_funtype_41_htbl_t htbl;};
typedef struct arraytopdown_funtype_41_s * arraytopdown_funtype_41_t;

extern void release_arraytopdown_funtype_41(arraytopdown_funtype_41_t x);

extern arraytopdown_funtype_41_t copy_arraytopdown_funtype_41(arraytopdown_funtype_41_t x);

extern bool_t equal_arraytopdown_funtype_41(arraytopdown_funtype_41_t x, arraytopdown_funtype_41_t y);




struct arraytopdown_closure_42_s;
        typedef struct arraytopdown_closure_42_s * arraytopdown_closure_42_t;

struct arraytopdown_closure_42_s {uint32_t count;
         arraytopdown_funtype_37_ftbl_t ftbl;
         arraytopdown_funtype_37_htbl_t htbl;
        arraytopdown_funtype_39_t fvar_1;
        arraytopdown_funtype_39_t fvar_2;
        arraytopdown_funtype_41_t fvar_3;
        arraytopdown_funtype_41_t fvar_4;
        arraytopdown_funtype_39_t fvar_5;
        arraytopdown_funtype_38_t fvar_6;
        mpz_t fvar_7;
        mpz_t fvar_8;};

mpz_ptr_t f_arraytopdown_closure_42(struct arraytopdown_closure_42_s * closure, arraytopdown__peg_adt_t bvar);

mpz_ptr_t m_arraytopdown_closure_42(struct arraytopdown_closure_42_s * closure, arraytopdown__peg_adt_t bvar);

extern mpz_ptr_t h_arraytopdown_closure_42(arraytopdown__peg_adt_t ivar_27, arraytopdown_funtype_39_t ivar_21, arraytopdown_funtype_39_t ivar_23, arraytopdown_funtype_41_t ivar_19, arraytopdown_funtype_41_t ivar_17, arraytopdown_funtype_39_t ivar_15, arraytopdown_funtype_38_t ivar_12, mpz_ptr_t ivar_11, mpz_ptr_t ivar_10);

extern arraytopdown_closure_42_t new_arraytopdown_closure_42(void);

extern void release_arraytopdown_closure_42(arraytopdown_funtype_37_t closure);

extern arraytopdown_closure_42_t copy_arraytopdown_closure_42(arraytopdown_closure_42_t x);



struct arraytopdown_record_43_s {
        uint32_t count; 
        arraytopdown_funtype_29_t project_1;
        arraytopdown__peg_adt_t project_2;};
typedef struct arraytopdown_record_43_s * arraytopdown_record_43_t;

extern arraytopdown_record_43_t new_arraytopdown_record_43(void);

extern void release_arraytopdown_record_43(arraytopdown_record_43_t x);

extern arraytopdown_record_43_t copy_arraytopdown_record_43(arraytopdown_record_43_t x);

extern bool_t equal_arraytopdown_record_43(arraytopdown_record_43_t x, arraytopdown_record_43_t y);
typedef struct actual_arraytopdown_record_43_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_record_43_t;

void release_arraytopdown_record_43_ptr(pointer_t x, type_actual_t arraytopdown_record_43);
extern bool_t equal_arraytopdown_record_43_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_43_t T);

actual_arraytopdown_record_43_t actual_arraytopdown_record_43(void);

extern arraytopdown_record_43_t update_arraytopdown_record_43_project_1(arraytopdown_record_43_t x, arraytopdown_funtype_29_t v);

extern arraytopdown_record_43_t update_arraytopdown_record_43_project_2(arraytopdown_record_43_t x, arraytopdown__peg_adt_t v);



struct arraytopdown_funtype_44_s;
        typedef struct arraytopdown_funtype_44_s * arraytopdown_funtype_44_t;

struct arraytopdown_funtype_44_ftbl_s {mpz_ptr_t (* fptr)(struct arraytopdown_funtype_44_s *, arraytopdown_record_43_t);
        mpz_ptr_t (* mptr)(struct arraytopdown_funtype_44_s *, arraytopdown_funtype_29_t, arraytopdown__peg_adt_t);
        void (* rptr)(struct arraytopdown_funtype_44_s *);
        struct arraytopdown_funtype_44_s * (* cptr)(struct arraytopdown_funtype_44_s *);};
typedef struct arraytopdown_funtype_44_ftbl_s * arraytopdown_funtype_44_ftbl_t;

struct arraytopdown_funtype_44_hashentry_s {uint32_t keyhash; arraytopdown_record_43_t key; mpz_t value;}; 
typedef struct arraytopdown_funtype_44_hashentry_s arraytopdown_funtype_44_hashentry_t;

struct arraytopdown_funtype_44_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_44_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_44_htbl_s * arraytopdown_funtype_44_htbl_t;

struct arraytopdown_funtype_44_s {uint32_t count;
        arraytopdown_funtype_44_ftbl_t ftbl;
        arraytopdown_funtype_44_htbl_t htbl;};
typedef struct arraytopdown_funtype_44_s * arraytopdown_funtype_44_t;

extern void release_arraytopdown_funtype_44(arraytopdown_funtype_44_t x);

extern arraytopdown_funtype_44_t copy_arraytopdown_funtype_44(arraytopdown_funtype_44_t x);

extern bool_t equal_arraytopdown_funtype_44(arraytopdown_funtype_44_t x, arraytopdown_funtype_44_t y);



struct arraytopdown_record_45_s {
        uint32_t count; 
        uint8_t project_1;
        arraytopdown__peg_adt_t project_2;};
typedef struct arraytopdown_record_45_s * arraytopdown_record_45_t;

extern arraytopdown_record_45_t new_arraytopdown_record_45(void);

extern void release_arraytopdown_record_45(arraytopdown_record_45_t x);

extern arraytopdown_record_45_t copy_arraytopdown_record_45(arraytopdown_record_45_t x);

extern bool_t equal_arraytopdown_record_45(arraytopdown_record_45_t x, arraytopdown_record_45_t y);
typedef struct actual_arraytopdown_record_45_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_record_45_t;

void release_arraytopdown_record_45_ptr(pointer_t x, type_actual_t arraytopdown_record_45);
extern bool_t equal_arraytopdown_record_45_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_45_t T);

actual_arraytopdown_record_45_t actual_arraytopdown_record_45(void);

extern arraytopdown_record_45_t update_arraytopdown_record_45_project_1(arraytopdown_record_45_t x, uint8_t v);

extern arraytopdown_record_45_t update_arraytopdown_record_45_project_2(arraytopdown_record_45_t x, arraytopdown__peg_adt_t v);



struct arraytopdown_funtype_46_s;
        typedef struct arraytopdown_funtype_46_s * arraytopdown_funtype_46_t;

struct arraytopdown_funtype_46_ftbl_s {mpz_ptr_t (* fptr)(struct arraytopdown_funtype_46_s *, arraytopdown_record_45_t);
        mpz_ptr_t (* mptr)(struct arraytopdown_funtype_46_s *, uint8_t, arraytopdown__peg_adt_t);
        void (* rptr)(struct arraytopdown_funtype_46_s *);
        struct arraytopdown_funtype_46_s * (* cptr)(struct arraytopdown_funtype_46_s *);};
typedef struct arraytopdown_funtype_46_ftbl_s * arraytopdown_funtype_46_ftbl_t;

struct arraytopdown_funtype_46_hashentry_s {uint32_t keyhash; arraytopdown_record_45_t key; mpz_t value;}; 
typedef struct arraytopdown_funtype_46_hashentry_s arraytopdown_funtype_46_hashentry_t;

struct arraytopdown_funtype_46_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_46_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_46_htbl_s * arraytopdown_funtype_46_htbl_t;

struct arraytopdown_funtype_46_s {uint32_t count;
        arraytopdown_funtype_46_ftbl_t ftbl;
        arraytopdown_funtype_46_htbl_t htbl;};
typedef struct arraytopdown_funtype_46_s * arraytopdown_funtype_46_t;

extern void release_arraytopdown_funtype_46(arraytopdown_funtype_46_t x);

extern arraytopdown_funtype_46_t copy_arraytopdown_funtype_46(arraytopdown_funtype_46_t x);

extern bool_t equal_arraytopdown_funtype_46(arraytopdown_funtype_46_t x, arraytopdown_funtype_46_t y);



struct arraytopdown_record_47_s {
        uint32_t count; 
        uint8_t project_1;
        uint8_t project_2;
        arraytopdown__peg_adt_t project_3;};
typedef struct arraytopdown_record_47_s * arraytopdown_record_47_t;

extern arraytopdown_record_47_t new_arraytopdown_record_47(void);

extern void release_arraytopdown_record_47(arraytopdown_record_47_t x);

extern arraytopdown_record_47_t copy_arraytopdown_record_47(arraytopdown_record_47_t x);

extern bool_t equal_arraytopdown_record_47(arraytopdown_record_47_t x, arraytopdown_record_47_t y);
typedef struct actual_arraytopdown_record_47_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_record_47_t;

void release_arraytopdown_record_47_ptr(pointer_t x, type_actual_t arraytopdown_record_47);
extern bool_t equal_arraytopdown_record_47_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_47_t T);

actual_arraytopdown_record_47_t actual_arraytopdown_record_47(void);

extern arraytopdown_record_47_t update_arraytopdown_record_47_project_1(arraytopdown_record_47_t x, uint8_t v);

extern arraytopdown_record_47_t update_arraytopdown_record_47_project_2(arraytopdown_record_47_t x, uint8_t v);

extern arraytopdown_record_47_t update_arraytopdown_record_47_project_3(arraytopdown_record_47_t x, arraytopdown__peg_adt_t v);



struct arraytopdown_funtype_48_s;
        typedef struct arraytopdown_funtype_48_s * arraytopdown_funtype_48_t;

struct arraytopdown_funtype_48_ftbl_s {mpz_ptr_t (* fptr)(struct arraytopdown_funtype_48_s *, arraytopdown_record_47_t);
        mpz_ptr_t (* mptr)(struct arraytopdown_funtype_48_s *, uint8_t, uint8_t, arraytopdown__peg_adt_t);
        void (* rptr)(struct arraytopdown_funtype_48_s *);
        struct arraytopdown_funtype_48_s * (* cptr)(struct arraytopdown_funtype_48_s *);};
typedef struct arraytopdown_funtype_48_ftbl_s * arraytopdown_funtype_48_ftbl_t;

struct arraytopdown_funtype_48_hashentry_s {uint32_t keyhash; arraytopdown_record_47_t key; mpz_t value;}; 
typedef struct arraytopdown_funtype_48_hashentry_s arraytopdown_funtype_48_hashentry_t;

struct arraytopdown_funtype_48_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_48_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_48_htbl_s * arraytopdown_funtype_48_htbl_t;

struct arraytopdown_funtype_48_s {uint32_t count;
        arraytopdown_funtype_48_ftbl_t ftbl;
        arraytopdown_funtype_48_htbl_t htbl;};
typedef struct arraytopdown_funtype_48_s * arraytopdown_funtype_48_t;

extern void release_arraytopdown_funtype_48(arraytopdown_funtype_48_t x);

extern arraytopdown_funtype_48_t copy_arraytopdown_funtype_48(arraytopdown_funtype_48_t x);

extern bool_t equal_arraytopdown_funtype_48(arraytopdown_funtype_48_t x, arraytopdown_funtype_48_t y);




struct arraytopdown_closure_49_s;
        typedef struct arraytopdown_closure_49_s * arraytopdown_closure_49_t;

struct arraytopdown_closure_49_s {uint32_t count;
         arraytopdown_funtype_37_ftbl_t ftbl;
         arraytopdown_funtype_37_htbl_t htbl;
        arraytopdown_funtype_46_t fvar_1;
        arraytopdown_funtype_46_t fvar_2;
        arraytopdown_funtype_48_t fvar_3;
        arraytopdown_funtype_48_t fvar_4;
        arraytopdown_funtype_46_t fvar_5;
        arraytopdown_funtype_44_t fvar_6;
        arraytopdown_funtype_37_t fvar_7;
        arraytopdown_funtype_37_t fvar_8;};

mpz_ptr_t f_arraytopdown_closure_49(struct arraytopdown_closure_49_s * closure, arraytopdown__peg_adt_t bvar);

mpz_ptr_t m_arraytopdown_closure_49(struct arraytopdown_closure_49_s * closure, arraytopdown__peg_adt_t bvar);

extern mpz_ptr_t h_arraytopdown_closure_49(arraytopdown__peg_adt_t ivar_31, arraytopdown_funtype_46_t ivar_25, arraytopdown_funtype_46_t ivar_27, arraytopdown_funtype_48_t ivar_23, arraytopdown_funtype_48_t ivar_21, arraytopdown_funtype_46_t ivar_19, arraytopdown_funtype_44_t ivar_16, arraytopdown_funtype_37_t ivar_14, arraytopdown_funtype_37_t ivar_12);

extern arraytopdown_closure_49_t new_arraytopdown_closure_49(void);

extern void release_arraytopdown_closure_49(arraytopdown_funtype_37_t closure);

extern arraytopdown_closure_49_t copy_arraytopdown_closure_49(arraytopdown_closure_49_t x);



struct arraytopdown_funtype_50_s;
        typedef struct arraytopdown_funtype_50_s * arraytopdown_funtype_50_t;

struct arraytopdown_funtype_50_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct arraytopdown_funtype_50_s *, arraytopdown__peg_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct arraytopdown_funtype_50_s *, arraytopdown__peg_adt_t);
        void (* rptr)(struct arraytopdown_funtype_50_s *);
        struct arraytopdown_funtype_50_s * (* cptr)(struct arraytopdown_funtype_50_s *);};
typedef struct arraytopdown_funtype_50_ftbl_s * arraytopdown_funtype_50_ftbl_t;

struct arraytopdown_funtype_50_hashentry_s {uint32_t keyhash; arraytopdown__peg_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct arraytopdown_funtype_50_hashentry_s arraytopdown_funtype_50_hashentry_t;

struct arraytopdown_funtype_50_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_50_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_50_htbl_s * arraytopdown_funtype_50_htbl_t;

struct arraytopdown_funtype_50_s {uint32_t count;
        arraytopdown_funtype_50_ftbl_t ftbl;
        arraytopdown_funtype_50_htbl_t htbl;};
typedef struct arraytopdown_funtype_50_s * arraytopdown_funtype_50_t;

extern void release_arraytopdown_funtype_50(arraytopdown_funtype_50_t x);

extern arraytopdown_funtype_50_t copy_arraytopdown_funtype_50(arraytopdown_funtype_50_t x);

extern bool_t equal_arraytopdown_funtype_50(arraytopdown_funtype_50_t x, arraytopdown_funtype_50_t y);



struct arraytopdown_funtype_51_s;
        typedef struct arraytopdown_funtype_51_s * arraytopdown_funtype_51_t;

struct arraytopdown_funtype_51_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct arraytopdown_funtype_51_s *, arraytopdown_funtype_29_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct arraytopdown_funtype_51_s *, arraytopdown_funtype_29_t);
        void (* rptr)(struct arraytopdown_funtype_51_s *);
        struct arraytopdown_funtype_51_s * (* cptr)(struct arraytopdown_funtype_51_s *);};
typedef struct arraytopdown_funtype_51_ftbl_s * arraytopdown_funtype_51_ftbl_t;

struct arraytopdown_funtype_51_hashentry_s {uint32_t keyhash; arraytopdown_funtype_29_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct arraytopdown_funtype_51_hashentry_s arraytopdown_funtype_51_hashentry_t;

struct arraytopdown_funtype_51_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_51_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_51_htbl_s * arraytopdown_funtype_51_htbl_t;

struct arraytopdown_funtype_51_s {uint32_t count;
        arraytopdown_funtype_51_ftbl_t ftbl;
        arraytopdown_funtype_51_htbl_t htbl;};
typedef struct arraytopdown_funtype_51_s * arraytopdown_funtype_51_t;

extern void release_arraytopdown_funtype_51(arraytopdown_funtype_51_t x);

extern arraytopdown_funtype_51_t copy_arraytopdown_funtype_51(arraytopdown_funtype_51_t x);

extern bool_t equal_arraytopdown_funtype_51(arraytopdown_funtype_51_t x, arraytopdown_funtype_51_t y);



struct arraytopdown_funtype_52_s;
        typedef struct arraytopdown_funtype_52_s * arraytopdown_funtype_52_t;

struct arraytopdown_funtype_52_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct arraytopdown_funtype_52_s *, uint8_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct arraytopdown_funtype_52_s *, uint8_t);
        void (* rptr)(struct arraytopdown_funtype_52_s *);
        struct arraytopdown_funtype_52_s * (* cptr)(struct arraytopdown_funtype_52_s *);};
typedef struct arraytopdown_funtype_52_ftbl_s * arraytopdown_funtype_52_ftbl_t;

struct arraytopdown_funtype_52_hashentry_s {uint32_t keyhash; uint8_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct arraytopdown_funtype_52_hashentry_s arraytopdown_funtype_52_hashentry_t;

struct arraytopdown_funtype_52_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_52_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_52_htbl_s * arraytopdown_funtype_52_htbl_t;

struct arraytopdown_funtype_52_s {uint32_t count;
        arraytopdown_funtype_52_ftbl_t ftbl;
        arraytopdown_funtype_52_htbl_t htbl;};
typedef struct arraytopdown_funtype_52_s * arraytopdown_funtype_52_t;

extern void release_arraytopdown_funtype_52(arraytopdown_funtype_52_t x);

extern arraytopdown_funtype_52_t copy_arraytopdown_funtype_52(arraytopdown_funtype_52_t x);

uint32_t lookup_arraytopdown_funtype_52(arraytopdown_funtype_52_htbl_t htbl, uint8_t i, uint32_t ihash);

arraytopdown_funtype_52_t dupdate_arraytopdown_funtype_52(arraytopdown_funtype_52_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v);

extern arraytopdown_funtype_52_t update_arraytopdown_funtype_52(arraytopdown_funtype_52_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v);

extern bool_t equal_arraytopdown_funtype_52(arraytopdown_funtype_52_t x, arraytopdown_funtype_52_t y);



struct arraytopdown_funtype_53_s;
        typedef struct arraytopdown_funtype_53_s * arraytopdown_funtype_53_t;

struct arraytopdown_funtype_53_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct arraytopdown_funtype_53_s *, arraytopdown_record_40_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct arraytopdown_funtype_53_s *, uint8_t, uint8_t);
        void (* rptr)(struct arraytopdown_funtype_53_s *);
        struct arraytopdown_funtype_53_s * (* cptr)(struct arraytopdown_funtype_53_s *);};
typedef struct arraytopdown_funtype_53_ftbl_s * arraytopdown_funtype_53_ftbl_t;

struct arraytopdown_funtype_53_hashentry_s {uint32_t keyhash; arraytopdown_record_40_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct arraytopdown_funtype_53_hashentry_s arraytopdown_funtype_53_hashentry_t;

struct arraytopdown_funtype_53_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_53_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_53_htbl_s * arraytopdown_funtype_53_htbl_t;

struct arraytopdown_funtype_53_s {uint32_t count;
        arraytopdown_funtype_53_ftbl_t ftbl;
        arraytopdown_funtype_53_htbl_t htbl;};
typedef struct arraytopdown_funtype_53_s * arraytopdown_funtype_53_t;

extern void release_arraytopdown_funtype_53(arraytopdown_funtype_53_t x);

extern arraytopdown_funtype_53_t copy_arraytopdown_funtype_53(arraytopdown_funtype_53_t x);

extern bool_t equal_arraytopdown_funtype_53(arraytopdown_funtype_53_t x, arraytopdown_funtype_53_t y);




struct arraytopdown_closure_54_s;
        typedef struct arraytopdown_closure_54_s * arraytopdown_closure_54_t;

struct arraytopdown_closure_54_s {uint32_t count;
         arraytopdown_funtype_50_ftbl_t ftbl;
         arraytopdown_funtype_50_htbl_t htbl;
        arraytopdown_funtype_52_t fvar_1;
        arraytopdown_funtype_52_t fvar_2;
        arraytopdown_funtype_53_t fvar_3;
        arraytopdown_funtype_53_t fvar_4;
        arraytopdown_funtype_52_t fvar_5;
        arraytopdown_funtype_51_t fvar_6;
        ordstruct_adt__ordstruct_adt_t fvar_7;
        ordstruct_adt__ordstruct_adt_t fvar_8;};

ordstruct_adt__ordstruct_adt_t f_arraytopdown_closure_54(struct arraytopdown_closure_54_s * closure, arraytopdown__peg_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_arraytopdown_closure_54(struct arraytopdown_closure_54_s * closure, arraytopdown__peg_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_arraytopdown_closure_54(arraytopdown__peg_adt_t ivar_27, arraytopdown_funtype_52_t ivar_21, arraytopdown_funtype_52_t ivar_23, arraytopdown_funtype_53_t ivar_19, arraytopdown_funtype_53_t ivar_17, arraytopdown_funtype_52_t ivar_15, arraytopdown_funtype_51_t ivar_12, ordstruct_adt__ordstruct_adt_t ivar_11, ordstruct_adt__ordstruct_adt_t ivar_10);

extern arraytopdown_closure_54_t new_arraytopdown_closure_54(void);

extern void release_arraytopdown_closure_54(arraytopdown_funtype_50_t closure);

extern arraytopdown_closure_54_t copy_arraytopdown_closure_54(arraytopdown_closure_54_t x);



struct arraytopdown_funtype_55_s;
        typedef struct arraytopdown_funtype_55_s * arraytopdown_funtype_55_t;

struct arraytopdown_funtype_55_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct arraytopdown_funtype_55_s *, arraytopdown_record_43_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct arraytopdown_funtype_55_s *, arraytopdown_funtype_29_t, arraytopdown__peg_adt_t);
        void (* rptr)(struct arraytopdown_funtype_55_s *);
        struct arraytopdown_funtype_55_s * (* cptr)(struct arraytopdown_funtype_55_s *);};
typedef struct arraytopdown_funtype_55_ftbl_s * arraytopdown_funtype_55_ftbl_t;

struct arraytopdown_funtype_55_hashentry_s {uint32_t keyhash; arraytopdown_record_43_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct arraytopdown_funtype_55_hashentry_s arraytopdown_funtype_55_hashentry_t;

struct arraytopdown_funtype_55_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_55_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_55_htbl_s * arraytopdown_funtype_55_htbl_t;

struct arraytopdown_funtype_55_s {uint32_t count;
        arraytopdown_funtype_55_ftbl_t ftbl;
        arraytopdown_funtype_55_htbl_t htbl;};
typedef struct arraytopdown_funtype_55_s * arraytopdown_funtype_55_t;

extern void release_arraytopdown_funtype_55(arraytopdown_funtype_55_t x);

extern arraytopdown_funtype_55_t copy_arraytopdown_funtype_55(arraytopdown_funtype_55_t x);

extern bool_t equal_arraytopdown_funtype_55(arraytopdown_funtype_55_t x, arraytopdown_funtype_55_t y);



struct arraytopdown_funtype_56_s;
        typedef struct arraytopdown_funtype_56_s * arraytopdown_funtype_56_t;

struct arraytopdown_funtype_56_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct arraytopdown_funtype_56_s *, arraytopdown_record_45_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct arraytopdown_funtype_56_s *, uint8_t, arraytopdown__peg_adt_t);
        void (* rptr)(struct arraytopdown_funtype_56_s *);
        struct arraytopdown_funtype_56_s * (* cptr)(struct arraytopdown_funtype_56_s *);};
typedef struct arraytopdown_funtype_56_ftbl_s * arraytopdown_funtype_56_ftbl_t;

struct arraytopdown_funtype_56_hashentry_s {uint32_t keyhash; arraytopdown_record_45_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct arraytopdown_funtype_56_hashentry_s arraytopdown_funtype_56_hashentry_t;

struct arraytopdown_funtype_56_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_56_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_56_htbl_s * arraytopdown_funtype_56_htbl_t;

struct arraytopdown_funtype_56_s {uint32_t count;
        arraytopdown_funtype_56_ftbl_t ftbl;
        arraytopdown_funtype_56_htbl_t htbl;};
typedef struct arraytopdown_funtype_56_s * arraytopdown_funtype_56_t;

extern void release_arraytopdown_funtype_56(arraytopdown_funtype_56_t x);

extern arraytopdown_funtype_56_t copy_arraytopdown_funtype_56(arraytopdown_funtype_56_t x);

extern bool_t equal_arraytopdown_funtype_56(arraytopdown_funtype_56_t x, arraytopdown_funtype_56_t y);



struct arraytopdown_funtype_57_s;
        typedef struct arraytopdown_funtype_57_s * arraytopdown_funtype_57_t;

struct arraytopdown_funtype_57_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct arraytopdown_funtype_57_s *, arraytopdown_record_47_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct arraytopdown_funtype_57_s *, uint8_t, uint8_t, arraytopdown__peg_adt_t);
        void (* rptr)(struct arraytopdown_funtype_57_s *);
        struct arraytopdown_funtype_57_s * (* cptr)(struct arraytopdown_funtype_57_s *);};
typedef struct arraytopdown_funtype_57_ftbl_s * arraytopdown_funtype_57_ftbl_t;

struct arraytopdown_funtype_57_hashentry_s {uint32_t keyhash; arraytopdown_record_47_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct arraytopdown_funtype_57_hashentry_s arraytopdown_funtype_57_hashentry_t;

struct arraytopdown_funtype_57_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_57_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_57_htbl_s * arraytopdown_funtype_57_htbl_t;

struct arraytopdown_funtype_57_s {uint32_t count;
        arraytopdown_funtype_57_ftbl_t ftbl;
        arraytopdown_funtype_57_htbl_t htbl;};
typedef struct arraytopdown_funtype_57_s * arraytopdown_funtype_57_t;

extern void release_arraytopdown_funtype_57(arraytopdown_funtype_57_t x);

extern arraytopdown_funtype_57_t copy_arraytopdown_funtype_57(arraytopdown_funtype_57_t x);

extern bool_t equal_arraytopdown_funtype_57(arraytopdown_funtype_57_t x, arraytopdown_funtype_57_t y);




struct arraytopdown_closure_58_s;
        typedef struct arraytopdown_closure_58_s * arraytopdown_closure_58_t;

struct arraytopdown_closure_58_s {uint32_t count;
         arraytopdown_funtype_50_ftbl_t ftbl;
         arraytopdown_funtype_50_htbl_t htbl;
        arraytopdown_funtype_56_t fvar_1;
        arraytopdown_funtype_56_t fvar_2;
        arraytopdown_funtype_57_t fvar_3;
        arraytopdown_funtype_57_t fvar_4;
        arraytopdown_funtype_56_t fvar_5;
        arraytopdown_funtype_55_t fvar_6;
        arraytopdown_funtype_50_t fvar_7;
        arraytopdown_funtype_50_t fvar_8;};

ordstruct_adt__ordstruct_adt_t f_arraytopdown_closure_58(struct arraytopdown_closure_58_s * closure, arraytopdown__peg_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_arraytopdown_closure_58(struct arraytopdown_closure_58_s * closure, arraytopdown__peg_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_arraytopdown_closure_58(arraytopdown__peg_adt_t ivar_31, arraytopdown_funtype_56_t ivar_25, arraytopdown_funtype_56_t ivar_27, arraytopdown_funtype_57_t ivar_23, arraytopdown_funtype_57_t ivar_21, arraytopdown_funtype_56_t ivar_19, arraytopdown_funtype_55_t ivar_16, arraytopdown_funtype_50_t ivar_14, arraytopdown_funtype_50_t ivar_12);

extern arraytopdown_closure_58_t new_arraytopdown_closure_58(void);

extern void release_arraytopdown_closure_58(arraytopdown_funtype_50_t closure);

extern arraytopdown_closure_58_t copy_arraytopdown_closure_58(arraytopdown_closure_58_t x);



struct arraytopdown_funtype_59_s;
        typedef struct arraytopdown_funtype_59_s * arraytopdown_funtype_59_t;

struct arraytopdown_funtype_59_ftbl_s {bool_t (* fptr)(struct arraytopdown_funtype_59_s *, arraytopdown__ent_adt_t);
        bool_t (* mptr)(struct arraytopdown_funtype_59_s *, arraytopdown__ent_adt_t);
        void (* rptr)(struct arraytopdown_funtype_59_s *);
        struct arraytopdown_funtype_59_s * (* cptr)(struct arraytopdown_funtype_59_s *);};
typedef struct arraytopdown_funtype_59_ftbl_s * arraytopdown_funtype_59_ftbl_t;

struct arraytopdown_funtype_59_hashentry_s {uint32_t keyhash; arraytopdown__ent_adt_t key; bool_t value;}; 
typedef struct arraytopdown_funtype_59_hashentry_s arraytopdown_funtype_59_hashentry_t;

struct arraytopdown_funtype_59_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_59_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_59_htbl_s * arraytopdown_funtype_59_htbl_t;

struct arraytopdown_funtype_59_s {uint32_t count;
        arraytopdown_funtype_59_ftbl_t ftbl;
        arraytopdown_funtype_59_htbl_t htbl;};
typedef struct arraytopdown_funtype_59_s * arraytopdown_funtype_59_t;

extern void release_arraytopdown_funtype_59(arraytopdown_funtype_59_t x);

extern arraytopdown_funtype_59_t copy_arraytopdown_funtype_59(arraytopdown_funtype_59_t x);

extern bool_t equal_arraytopdown_funtype_59(arraytopdown_funtype_59_t x, arraytopdown_funtype_59_t y);




struct arraytopdown_closure_60_s;
        typedef struct arraytopdown_closure_60_s * arraytopdown_closure_60_t;

struct arraytopdown_closure_60_s {uint32_t count;
         arraytopdown_funtype_59_ftbl_t ftbl;
         arraytopdown_funtype_59_htbl_t htbl;
        uint32_t fvar_1;
        uint32_t fvar_2;};

bool_t f_arraytopdown_closure_60(struct arraytopdown_closure_60_s * closure, arraytopdown__ent_adt_t bvar);

bool_t m_arraytopdown_closure_60(struct arraytopdown_closure_60_s * closure, arraytopdown__ent_adt_t bvar);

extern bool_t h_arraytopdown_closure_60(arraytopdown__ent_adt_t ivar_4, uint32_t ivar_2, uint32_t ivar_1);

extern arraytopdown_closure_60_t new_arraytopdown_closure_60(void);

extern void release_arraytopdown_closure_60(arraytopdown_funtype_59_t closure);

extern arraytopdown_closure_60_t copy_arraytopdown_closure_60(arraytopdown_closure_60_t x);




struct arraytopdown_closure_61_s;
        typedef struct arraytopdown_closure_61_s * arraytopdown_closure_61_t;

struct arraytopdown_closure_61_s {uint32_t count;
         arraytopdown_funtype_59_ftbl_t ftbl;
         arraytopdown_funtype_59_htbl_t htbl;
        uint32_t fvar_1;};

bool_t f_arraytopdown_closure_61(struct arraytopdown_closure_61_s * closure, arraytopdown__ent_adt_t bvar);

bool_t m_arraytopdown_closure_61(struct arraytopdown_closure_61_s * closure, arraytopdown__ent_adt_t bvar);

extern bool_t h_arraytopdown_closure_61(arraytopdown__ent_adt_t ivar_3, uint32_t ivar_1);

extern arraytopdown_closure_61_t new_arraytopdown_closure_61(void);

extern void release_arraytopdown_closure_61(arraytopdown_funtype_59_t closure);

extern arraytopdown_closure_61_t copy_arraytopdown_closure_61(arraytopdown_closure_61_t x);




struct arraytopdown_closure_62_s;
        typedef struct arraytopdown_closure_62_s * arraytopdown_closure_62_t;

struct arraytopdown_closure_62_s {uint32_t count;
         arraytopdown_funtype_59_ftbl_t ftbl;
         arraytopdown_funtype_59_htbl_t htbl;
        uint32_t fvar_1;};

bool_t f_arraytopdown_closure_62(struct arraytopdown_closure_62_s * closure, arraytopdown__ent_adt_t bvar);

bool_t m_arraytopdown_closure_62(struct arraytopdown_closure_62_s * closure, arraytopdown__ent_adt_t bvar);

extern bool_t h_arraytopdown_closure_62(arraytopdown__ent_adt_t ivar_3, uint32_t ivar_1);

extern arraytopdown_closure_62_t new_arraytopdown_closure_62(void);

extern void release_arraytopdown_closure_62(arraytopdown_funtype_59_t closure);

extern arraytopdown_closure_62_t copy_arraytopdown_closure_62(arraytopdown_closure_62_t x);




struct arraytopdown_closure_63_s;
        typedef struct arraytopdown_closure_63_s * arraytopdown_closure_63_t;

struct arraytopdown_closure_63_s {uint32_t count;
         arraytopdown_funtype_59_ftbl_t ftbl;
         arraytopdown_funtype_59_htbl_t htbl;
        uint32_t fvar_1;
        uint32_t fvar_2;};

bool_t f_arraytopdown_closure_63(struct arraytopdown_closure_63_s * closure, arraytopdown__ent_adt_t bvar);

bool_t m_arraytopdown_closure_63(struct arraytopdown_closure_63_s * closure, arraytopdown__ent_adt_t bvar);

extern bool_t h_arraytopdown_closure_63(arraytopdown__ent_adt_t ivar_4, uint32_t ivar_1, uint32_t ivar_2);

extern arraytopdown_closure_63_t new_arraytopdown_closure_63(void);

extern void release_arraytopdown_closure_63(arraytopdown_funtype_59_t closure);

extern arraytopdown_closure_63_t copy_arraytopdown_closure_63(arraytopdown_closure_63_t x);



struct arraytopdown_funtype_64_s;
        typedef struct arraytopdown_funtype_64_s * arraytopdown_funtype_64_t;

struct arraytopdown_funtype_64_ftbl_s {bool_t (* fptr)(struct arraytopdown_funtype_64_s *, arraytopdown_record_9_t);
        bool_t (* mptr)(struct arraytopdown_funtype_64_s *, uint32_t, uint8_t);
        void (* rptr)(struct arraytopdown_funtype_64_s *);
        struct arraytopdown_funtype_64_s * (* cptr)(struct arraytopdown_funtype_64_s *);};
typedef struct arraytopdown_funtype_64_ftbl_s * arraytopdown_funtype_64_ftbl_t;

struct arraytopdown_funtype_64_hashentry_s {uint32_t keyhash; arraytopdown_record_9_t key; bool_t value;}; 
typedef struct arraytopdown_funtype_64_hashentry_s arraytopdown_funtype_64_hashentry_t;

struct arraytopdown_funtype_64_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_64_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_64_htbl_s * arraytopdown_funtype_64_htbl_t;

struct arraytopdown_funtype_64_s {uint32_t count;
        arraytopdown_funtype_64_ftbl_t ftbl;
        arraytopdown_funtype_64_htbl_t htbl;};
typedef struct arraytopdown_funtype_64_s * arraytopdown_funtype_64_t;

extern void release_arraytopdown_funtype_64(arraytopdown_funtype_64_t x);

extern arraytopdown_funtype_64_t copy_arraytopdown_funtype_64(arraytopdown_funtype_64_t x);

extern bool_t equal_arraytopdown_funtype_64(arraytopdown_funtype_64_t x, arraytopdown_funtype_64_t y);



struct arraytopdown_funtype_65_s;
        typedef struct arraytopdown_funtype_65_s * arraytopdown_funtype_65_t;

struct arraytopdown_funtype_65_ftbl_s {arraytopdown__ent_adt_t (* fptr)(struct arraytopdown_funtype_65_s *, uint8_t);
        arraytopdown__ent_adt_t (* mptr)(struct arraytopdown_funtype_65_s *, uint8_t);
        void (* rptr)(struct arraytopdown_funtype_65_s *);
        struct arraytopdown_funtype_65_s * (* cptr)(struct arraytopdown_funtype_65_s *);};
typedef struct arraytopdown_funtype_65_ftbl_s * arraytopdown_funtype_65_ftbl_t;

struct arraytopdown_funtype_65_hashentry_s {uint32_t keyhash; uint8_t key; arraytopdown__ent_adt_t value;}; 
typedef struct arraytopdown_funtype_65_hashentry_s arraytopdown_funtype_65_hashentry_t;

struct arraytopdown_funtype_65_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_65_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_65_htbl_s * arraytopdown_funtype_65_htbl_t;

struct arraytopdown_funtype_65_s {uint32_t count;
        arraytopdown_funtype_65_ftbl_t ftbl;
        arraytopdown_funtype_65_htbl_t htbl;};
typedef struct arraytopdown_funtype_65_s * arraytopdown_funtype_65_t;

extern void release_arraytopdown_funtype_65(arraytopdown_funtype_65_t x);

extern arraytopdown_funtype_65_t copy_arraytopdown_funtype_65(arraytopdown_funtype_65_t x);

uint32_t lookup_arraytopdown_funtype_65(arraytopdown_funtype_65_htbl_t htbl, uint8_t i, uint32_t ihash);

arraytopdown_funtype_65_t dupdate_arraytopdown_funtype_65(arraytopdown_funtype_65_t a, uint8_t i, arraytopdown__ent_adt_t v);

extern arraytopdown_funtype_65_t update_arraytopdown_funtype_65(arraytopdown_funtype_65_t a, uint8_t i, arraytopdown__ent_adt_t v);

extern bool_t equal_arraytopdown_funtype_65(arraytopdown_funtype_65_t x, arraytopdown_funtype_65_t y);



struct arraytopdown_array_66_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         arraytopdown_funtype_65_t elems[]; };
typedef struct arraytopdown_array_66_s * arraytopdown_array_66_t;

extern arraytopdown_array_66_t new_arraytopdown_array_66(uint32_t size);

extern void release_arraytopdown_array_66(arraytopdown_array_66_t x);

extern arraytopdown_array_66_t copy_arraytopdown_array_66(arraytopdown_array_66_t x);

extern bool_t equal_arraytopdown_array_66(arraytopdown_array_66_t x, arraytopdown_array_66_t y);
typedef struct actual_arraytopdown_array_66_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_array_66_t;

void release_arraytopdown_array_66_ptr(pointer_t x, type_actual_t arraytopdown_array_66);
extern bool_t equal_arraytopdown_array_66_ptr(pointer_t x, pointer_t y, type_actual_t T);

actual_arraytopdown_array_66_t actual_arraytopdown_array_66(void);

extern arraytopdown_array_66_t update_arraytopdown_array_66(arraytopdown_array_66_t x, uint32_t i, arraytopdown_funtype_65_t v);

extern arraytopdown_array_66_t upgrade_arraytopdown_array_66(arraytopdown_array_66_t x, uint32_t i, arraytopdown_funtype_65_t v);




struct arraytopdown_closure_67_s;
        typedef struct arraytopdown_closure_67_s * arraytopdown_closure_67_t;

struct arraytopdown_closure_67_s {uint32_t count;
         arraytopdown_funtype_64_ftbl_t ftbl;
         arraytopdown_funtype_64_htbl_t htbl;
        arraytopdown_array_66_t fvar_1;};

bool_t f_arraytopdown_closure_67(struct arraytopdown_closure_67_s * closure, arraytopdown_record_9_t bvar);

bool_t m_arraytopdown_closure_67(struct arraytopdown_closure_67_s * closure, uint32_t bvar_1, uint8_t bvar_2);

extern bool_t h_arraytopdown_closure_67(uint32_t ivar_5, uint8_t ivar_6, arraytopdown_array_66_t ivar_2);

extern arraytopdown_closure_67_t new_arraytopdown_closure_67(void);

extern void release_arraytopdown_closure_67(arraytopdown_funtype_64_t closure);

extern arraytopdown_closure_67_t copy_arraytopdown_closure_67(arraytopdown_closure_67_t x);



struct arraytopdown_record_68_s {
        uint32_t count; 
        arraytopdown__ent_adt_t project_1;
        arraytopdown__ent_adt_t project_2;};
typedef struct arraytopdown_record_68_s * arraytopdown_record_68_t;

extern arraytopdown_record_68_t new_arraytopdown_record_68(void);

extern void release_arraytopdown_record_68(arraytopdown_record_68_t x);

extern arraytopdown_record_68_t copy_arraytopdown_record_68(arraytopdown_record_68_t x);

extern bool_t equal_arraytopdown_record_68(arraytopdown_record_68_t x, arraytopdown_record_68_t y);
typedef struct actual_arraytopdown_record_68_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_record_68_t;

void release_arraytopdown_record_68_ptr(pointer_t x, type_actual_t arraytopdown_record_68);
extern bool_t equal_arraytopdown_record_68_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_68_t T);

actual_arraytopdown_record_68_t actual_arraytopdown_record_68(void);

extern arraytopdown_record_68_t update_arraytopdown_record_68_project_1(arraytopdown_record_68_t x, arraytopdown__ent_adt_t v);

extern arraytopdown_record_68_t update_arraytopdown_record_68_project_2(arraytopdown_record_68_t x, arraytopdown__ent_adt_t v);



struct arraytopdown_funtype_69_s;
        typedef struct arraytopdown_funtype_69_s * arraytopdown_funtype_69_t;

struct arraytopdown_funtype_69_ftbl_s {bool_t (* fptr)(struct arraytopdown_funtype_69_s *, arraytopdown_record_68_t);
        bool_t (* mptr)(struct arraytopdown_funtype_69_s *, arraytopdown__ent_adt_t, arraytopdown__ent_adt_t);
        void (* rptr)(struct arraytopdown_funtype_69_s *);
        struct arraytopdown_funtype_69_s * (* cptr)(struct arraytopdown_funtype_69_s *);};
typedef struct arraytopdown_funtype_69_ftbl_s * arraytopdown_funtype_69_ftbl_t;

struct arraytopdown_funtype_69_hashentry_s {uint32_t keyhash; arraytopdown_record_68_t key; bool_t value;}; 
typedef struct arraytopdown_funtype_69_hashentry_s arraytopdown_funtype_69_hashentry_t;

struct arraytopdown_funtype_69_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_69_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_69_htbl_s * arraytopdown_funtype_69_htbl_t;

struct arraytopdown_funtype_69_s {uint32_t count;
        arraytopdown_funtype_69_ftbl_t ftbl;
        arraytopdown_funtype_69_htbl_t htbl;};
typedef struct arraytopdown_funtype_69_s * arraytopdown_funtype_69_t;

extern void release_arraytopdown_funtype_69(arraytopdown_funtype_69_t x);

extern arraytopdown_funtype_69_t copy_arraytopdown_funtype_69(arraytopdown_funtype_69_t x);

extern bool_t equal_arraytopdown_funtype_69(arraytopdown_funtype_69_t x, arraytopdown_funtype_69_t y);



struct arraytopdown__lang_spec_s;
        typedef struct arraytopdown__lang_spec_s * arraytopdown__lang_spec_t;

struct arraytopdown__lang_spec_ftbl_s {arraytopdown__peg_adt_t (* fptr)(struct arraytopdown__lang_spec_s *, uint8_t);
        arraytopdown__peg_adt_t (* mptr)(struct arraytopdown__lang_spec_s *, uint8_t);
        void (* rptr)(struct arraytopdown__lang_spec_s *);
        struct arraytopdown__lang_spec_s * (* cptr)(struct arraytopdown__lang_spec_s *);};
typedef struct arraytopdown__lang_spec_ftbl_s * arraytopdown__lang_spec_ftbl_t;

struct arraytopdown__lang_spec_hashentry_s {uint32_t keyhash; uint8_t key; arraytopdown__peg_adt_t value;}; 
typedef struct arraytopdown__lang_spec_hashentry_s arraytopdown__lang_spec_hashentry_t;

struct arraytopdown__lang_spec_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown__lang_spec_hashentry_t * data;}; 
typedef struct arraytopdown__lang_spec_htbl_s * arraytopdown__lang_spec_htbl_t;

struct arraytopdown__lang_spec_s {uint32_t count;
        arraytopdown__lang_spec_ftbl_t ftbl;
        arraytopdown__lang_spec_htbl_t htbl;};
typedef struct arraytopdown__lang_spec_s * arraytopdown__lang_spec_t;

extern void release_arraytopdown__lang_spec(arraytopdown__lang_spec_t x);

extern arraytopdown__lang_spec_t copy_arraytopdown__lang_spec(arraytopdown__lang_spec_t x);

uint32_t lookup_arraytopdown__lang_spec(arraytopdown__lang_spec_htbl_t htbl, uint8_t i, uint32_t ihash);

arraytopdown__lang_spec_t dupdate_arraytopdown__lang_spec(arraytopdown__lang_spec_t a, uint8_t i, arraytopdown__peg_adt_t v);

extern arraytopdown__lang_spec_t update_arraytopdown__lang_spec(arraytopdown__lang_spec_t a, uint8_t i, arraytopdown__peg_adt_t v);

extern bool_t equal_arraytopdown__lang_spec(arraytopdown__lang_spec_t x, arraytopdown__lang_spec_t y);




struct arraytopdown_closure_71_s;
        typedef struct arraytopdown_closure_71_s * arraytopdown_closure_71_t;

struct arraytopdown_closure_71_s {uint32_t count;
         arraytopdown_funtype_69_ftbl_t ftbl;
         arraytopdown_funtype_69_htbl_t htbl;
        arraytopdown_array_66_t fvar_1;
        arraytopdown__lang_spec_t fvar_2;};

bool_t f_arraytopdown_closure_71(struct arraytopdown_closure_71_s * closure, arraytopdown_record_68_t bvar);

bool_t m_arraytopdown_closure_71(struct arraytopdown_closure_71_s * closure, arraytopdown__ent_adt_t bvar_1, arraytopdown__ent_adt_t bvar_2);

extern bool_t h_arraytopdown_closure_71(arraytopdown__ent_adt_t ivar_6, arraytopdown__ent_adt_t ivar_7, arraytopdown_array_66_t ivar_3, arraytopdown__lang_spec_t ivar_2);

extern arraytopdown_closure_71_t new_arraytopdown_closure_71(void);

extern void release_arraytopdown_closure_71(arraytopdown_funtype_69_t closure);

extern arraytopdown_closure_71_t copy_arraytopdown_closure_71(arraytopdown_closure_71_t x);



struct arraytopdown_funtype_72_s;
        typedef struct arraytopdown_funtype_72_s * arraytopdown_funtype_72_t;

struct arraytopdown_funtype_72_ftbl_s {mpz_ptr_t (* fptr)(struct arraytopdown_funtype_72_s *, uint32_t);
        mpz_ptr_t (* mptr)(struct arraytopdown_funtype_72_s *, uint32_t);
        void (* rptr)(struct arraytopdown_funtype_72_s *);
        struct arraytopdown_funtype_72_s * (* cptr)(struct arraytopdown_funtype_72_s *);};
typedef struct arraytopdown_funtype_72_ftbl_s * arraytopdown_funtype_72_ftbl_t;

struct arraytopdown_funtype_72_hashentry_s {uint32_t keyhash; uint32_t key; mpz_t value;}; 
typedef struct arraytopdown_funtype_72_hashentry_s arraytopdown_funtype_72_hashentry_t;

struct arraytopdown_funtype_72_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_72_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_72_htbl_s * arraytopdown_funtype_72_htbl_t;

struct arraytopdown_funtype_72_s {uint32_t count;
        arraytopdown_funtype_72_ftbl_t ftbl;
        arraytopdown_funtype_72_htbl_t htbl;};
typedef struct arraytopdown_funtype_72_s * arraytopdown_funtype_72_t;

extern void release_arraytopdown_funtype_72(arraytopdown_funtype_72_t x);

extern arraytopdown_funtype_72_t copy_arraytopdown_funtype_72(arraytopdown_funtype_72_t x);

uint32_t lookup_arraytopdown_funtype_72(arraytopdown_funtype_72_htbl_t htbl, uint32_t i, uint32_t ihash);

arraytopdown_funtype_72_t dupdate_arraytopdown_funtype_72(arraytopdown_funtype_72_t a, uint32_t i, mpz_ptr_t v);

extern arraytopdown_funtype_72_t update_arraytopdown_funtype_72(arraytopdown_funtype_72_t a, uint32_t i, mpz_ptr_t v);

extern bool_t equal_arraytopdown_funtype_72(arraytopdown_funtype_72_t x, arraytopdown_funtype_72_t y);



struct arraytopdown_array_73_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         mpz_ptr_t elems[]; };
typedef struct arraytopdown_array_73_s * arraytopdown_array_73_t;

extern arraytopdown_array_73_t new_arraytopdown_array_73(uint32_t size);

extern void release_arraytopdown_array_73(arraytopdown_array_73_t x);

extern arraytopdown_array_73_t copy_arraytopdown_array_73(arraytopdown_array_73_t x);

extern bool_t equal_arraytopdown_array_73(arraytopdown_array_73_t x, arraytopdown_array_73_t y);
typedef struct actual_arraytopdown_array_73_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_array_73_t;

void release_arraytopdown_array_73_ptr(pointer_t x, type_actual_t arraytopdown_array_73);
extern bool_t equal_arraytopdown_array_73_ptr(pointer_t x, pointer_t y, type_actual_t T);

actual_arraytopdown_array_73_t actual_arraytopdown_array_73(void);

extern arraytopdown_array_73_t update_arraytopdown_array_73(arraytopdown_array_73_t x, uint32_t i, mpz_t v);

extern arraytopdown_array_73_t upgrade_arraytopdown_array_73(arraytopdown_array_73_t x, uint32_t i, mpz_t v);




struct arraytopdown_closure_74_s;
        typedef struct arraytopdown_closure_74_s * arraytopdown_closure_74_t;

struct arraytopdown_closure_74_s {uint32_t count;
         arraytopdown_funtype_72_ftbl_t ftbl;
         arraytopdown_funtype_72_htbl_t htbl;
        uint32_t fvar_1;
        arraytopdown_array_73_t fvar_2;};

mpz_ptr_t f_arraytopdown_closure_74(struct arraytopdown_closure_74_s * closure, uint32_t bvar);

mpz_ptr_t m_arraytopdown_closure_74(struct arraytopdown_closure_74_s * closure, uint32_t bvar);

extern mpz_ptr_t h_arraytopdown_closure_74(uint32_t ivar_8, uint32_t ivar_4, arraytopdown_array_73_t ivar_5);

extern arraytopdown_closure_74_t new_arraytopdown_closure_74(void);

extern void release_arraytopdown_closure_74(arraytopdown_funtype_72_t closure);

extern arraytopdown_closure_74_t copy_arraytopdown_closure_74(arraytopdown_closure_74_t x);



struct arraytopdown_array_75_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         arraytopdown__ent_adt_t elems[]; };
typedef struct arraytopdown_array_75_s * arraytopdown_array_75_t;

extern arraytopdown_array_75_t new_arraytopdown_array_75(uint32_t size);

extern void release_arraytopdown_array_75(arraytopdown_array_75_t x);

extern arraytopdown_array_75_t copy_arraytopdown_array_75(arraytopdown_array_75_t x);

extern bool_t equal_arraytopdown_array_75(arraytopdown_array_75_t x, arraytopdown_array_75_t y);
typedef struct actual_arraytopdown_array_75_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_array_75_t;

void release_arraytopdown_array_75_ptr(pointer_t x, type_actual_t arraytopdown_array_75);
extern bool_t equal_arraytopdown_array_75_ptr(pointer_t x, pointer_t y, type_actual_t T);

actual_arraytopdown_array_75_t actual_arraytopdown_array_75(void);

extern arraytopdown_array_75_t update_arraytopdown_array_75(arraytopdown_array_75_t x, uint32_t i, arraytopdown__ent_adt_t v);

extern arraytopdown_array_75_t upgrade_arraytopdown_array_75(arraytopdown_array_75_t x, uint32_t i, arraytopdown__ent_adt_t v);



struct arraytopdown_funtype_76_s;
        typedef struct arraytopdown_funtype_76_s * arraytopdown_funtype_76_t;

struct arraytopdown_funtype_76_ftbl_s {uint8_t (* fptr)(struct arraytopdown_funtype_76_s *, arraytopdown_array_75_t);
        uint8_t (* mptr)(struct arraytopdown_funtype_76_s *, arraytopdown_array_75_t);
        void (* rptr)(struct arraytopdown_funtype_76_s *);
        struct arraytopdown_funtype_76_s * (* cptr)(struct arraytopdown_funtype_76_s *);};
typedef struct arraytopdown_funtype_76_ftbl_s * arraytopdown_funtype_76_ftbl_t;

struct arraytopdown_funtype_76_hashentry_s {uint32_t keyhash; arraytopdown_array_75_t key; uint8_t value;}; 
typedef struct arraytopdown_funtype_76_hashentry_s arraytopdown_funtype_76_hashentry_t;

struct arraytopdown_funtype_76_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_76_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_76_htbl_s * arraytopdown_funtype_76_htbl_t;

struct arraytopdown_funtype_76_s {uint32_t count;
        arraytopdown_funtype_76_ftbl_t ftbl;
        arraytopdown_funtype_76_htbl_t htbl;};
typedef struct arraytopdown_funtype_76_s * arraytopdown_funtype_76_t;

extern void release_arraytopdown_funtype_76(arraytopdown_funtype_76_t x);

extern arraytopdown_funtype_76_t copy_arraytopdown_funtype_76(arraytopdown_funtype_76_t x);

extern bool_t equal_arraytopdown_funtype_76(arraytopdown_funtype_76_t x, arraytopdown_funtype_76_t y);



struct arraytopdown_funtype_77_s;
        typedef struct arraytopdown_funtype_77_s * arraytopdown_funtype_77_t;

struct arraytopdown_funtype_77_ftbl_s {arraytopdown_funtype_76_t (* fptr)(struct arraytopdown_funtype_77_s *, arraytopdown_funtype_59_t);
        arraytopdown_funtype_76_t (* mptr)(struct arraytopdown_funtype_77_s *, arraytopdown_funtype_59_t);
        void (* rptr)(struct arraytopdown_funtype_77_s *);
        struct arraytopdown_funtype_77_s * (* cptr)(struct arraytopdown_funtype_77_s *);};
typedef struct arraytopdown_funtype_77_ftbl_s * arraytopdown_funtype_77_ftbl_t;

struct arraytopdown_funtype_77_hashentry_s {uint32_t keyhash; arraytopdown_funtype_59_t key; arraytopdown_funtype_76_t value;}; 
typedef struct arraytopdown_funtype_77_hashentry_s arraytopdown_funtype_77_hashentry_t;

struct arraytopdown_funtype_77_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_77_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_77_htbl_s * arraytopdown_funtype_77_htbl_t;

struct arraytopdown_funtype_77_s {uint32_t count;
        arraytopdown_funtype_77_ftbl_t ftbl;
        arraytopdown_funtype_77_htbl_t htbl;};
typedef struct arraytopdown_funtype_77_s * arraytopdown_funtype_77_t;

extern void release_arraytopdown_funtype_77(arraytopdown_funtype_77_t x);

extern arraytopdown_funtype_77_t copy_arraytopdown_funtype_77(arraytopdown_funtype_77_t x);

extern bool_t equal_arraytopdown_funtype_77(arraytopdown_funtype_77_t x, arraytopdown_funtype_77_t y);




struct arraytopdown_closure_78_s;
        typedef struct arraytopdown_closure_78_s * arraytopdown_closure_78_t;

struct arraytopdown_closure_78_s {uint32_t count;
         arraytopdown_funtype_59_ftbl_t ftbl;
         arraytopdown_funtype_59_htbl_t htbl;};

bool_t f_arraytopdown_closure_78(struct arraytopdown_closure_78_s * closure, arraytopdown__ent_adt_t bvar);

bool_t m_arraytopdown_closure_78(struct arraytopdown_closure_78_s * closure, arraytopdown__ent_adt_t bvar);

extern bool_t h_arraytopdown_closure_78(arraytopdown__ent_adt_t ivar_19);

extern arraytopdown_closure_78_t new_arraytopdown_closure_78(void);

extern void release_arraytopdown_closure_78(arraytopdown_funtype_59_t closure);

extern arraytopdown_closure_78_t copy_arraytopdown_closure_78(arraytopdown_closure_78_t x);




struct arraytopdown_closure_79_s;
        typedef struct arraytopdown_closure_79_s * arraytopdown_closure_79_t;

struct arraytopdown_closure_79_s {uint32_t count;
         arraytopdown_funtype_59_ftbl_t ftbl;
         arraytopdown_funtype_59_htbl_t htbl;};

bool_t f_arraytopdown_closure_79(struct arraytopdown_closure_79_s * closure, arraytopdown__ent_adt_t bvar);

bool_t m_arraytopdown_closure_79(struct arraytopdown_closure_79_s * closure, arraytopdown__ent_adt_t bvar);

extern bool_t h_arraytopdown_closure_79(arraytopdown__ent_adt_t ivar_11);

extern arraytopdown_closure_79_t new_arraytopdown_closure_79(void);

extern void release_arraytopdown_closure_79(arraytopdown_funtype_59_t closure);

extern arraytopdown_closure_79_t copy_arraytopdown_closure_79(arraytopdown_closure_79_t x);



struct arraytopdown_funtype_80_s;
        typedef struct arraytopdown_funtype_80_s * arraytopdown_funtype_80_t;

struct arraytopdown_funtype_80_ftbl_s {bool_t (* fptr)(struct arraytopdown_funtype_80_s *, uint64_t);
        bool_t (* mptr)(struct arraytopdown_funtype_80_s *, uint64_t);
        void (* rptr)(struct arraytopdown_funtype_80_s *);
        struct arraytopdown_funtype_80_s * (* cptr)(struct arraytopdown_funtype_80_s *);};
typedef struct arraytopdown_funtype_80_ftbl_s * arraytopdown_funtype_80_ftbl_t;

struct arraytopdown_funtype_80_hashentry_s {uint32_t keyhash; uint64_t key; bool_t value;}; 
typedef struct arraytopdown_funtype_80_hashentry_s arraytopdown_funtype_80_hashentry_t;

struct arraytopdown_funtype_80_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_80_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_80_htbl_s * arraytopdown_funtype_80_htbl_t;

struct arraytopdown_funtype_80_s {uint32_t count;
        arraytopdown_funtype_80_ftbl_t ftbl;
        arraytopdown_funtype_80_htbl_t htbl;};
typedef struct arraytopdown_funtype_80_s * arraytopdown_funtype_80_t;

extern void release_arraytopdown_funtype_80(arraytopdown_funtype_80_t x);

extern arraytopdown_funtype_80_t copy_arraytopdown_funtype_80(arraytopdown_funtype_80_t x);

uint32_t lookup_arraytopdown_funtype_80(arraytopdown_funtype_80_htbl_t htbl, uint64_t i, uint32_t ihash);

arraytopdown_funtype_80_t dupdate_arraytopdown_funtype_80(arraytopdown_funtype_80_t a, uint64_t i, bool_t v);

extern arraytopdown_funtype_80_t update_arraytopdown_funtype_80(arraytopdown_funtype_80_t a, uint64_t i, bool_t v);

extern bool_t equal_arraytopdown_funtype_80(arraytopdown_funtype_80_t x, arraytopdown_funtype_80_t y);




struct arraytopdown_closure_81_s;
        typedef struct arraytopdown_closure_81_s * arraytopdown_closure_81_t;

struct arraytopdown_closure_81_s {uint32_t count;
         arraytopdown_funtype_80_ftbl_t ftbl;
         arraytopdown_funtype_80_htbl_t htbl;
        uint32_t fvar_1;
        arraytopdown_array_66_t fvar_2;};

bool_t f_arraytopdown_closure_81(struct arraytopdown_closure_81_s * closure, uint64_t bvar);

bool_t m_arraytopdown_closure_81(struct arraytopdown_closure_81_s * closure, uint64_t bvar);

extern bool_t h_arraytopdown_closure_81(uint64_t ivar_5, uint32_t ivar_1, arraytopdown_array_66_t ivar_2);

extern arraytopdown_closure_81_t new_arraytopdown_closure_81(void);

extern void release_arraytopdown_closure_81(arraytopdown_funtype_80_t closure);

extern arraytopdown_closure_81_t copy_arraytopdown_closure_81(arraytopdown_closure_81_t x);




struct arraytopdown_closure_82_s;
        typedef struct arraytopdown_closure_82_s * arraytopdown_closure_82_t;

struct arraytopdown_closure_82_s {uint32_t count;
         arraytopdown_funtype_59_ftbl_t ftbl;
         arraytopdown_funtype_59_htbl_t htbl;
        arraytopdown__lang_spec_t fvar_1;
        arraytopdown_array_66_t fvar_2;
        uint32_t fvar_3;
        uint64_t fvar_4;};

bool_t f_arraytopdown_closure_82(struct arraytopdown_closure_82_s * closure, arraytopdown__ent_adt_t bvar);

bool_t m_arraytopdown_closure_82(struct arraytopdown_closure_82_s * closure, arraytopdown__ent_adt_t bvar);

extern bool_t h_arraytopdown_closure_82(arraytopdown__ent_adt_t ivar_7, arraytopdown__lang_spec_t ivar_2, arraytopdown_array_66_t ivar_4, uint32_t ivar_1, uint64_t ivar_3);

extern arraytopdown_closure_82_t new_arraytopdown_closure_82(void);

extern void release_arraytopdown_closure_82(arraytopdown_funtype_59_t closure);

extern arraytopdown_closure_82_t copy_arraytopdown_closure_82(arraytopdown_closure_82_t x);




struct arraytopdown_closure_83_s;
        typedef struct arraytopdown_closure_83_s * arraytopdown_closure_83_t;

struct arraytopdown_closure_83_s {uint32_t count;
         arraytopdown_funtype_69_ftbl_t ftbl;
         arraytopdown_funtype_69_htbl_t htbl;
        arraytopdown_array_66_t fvar_1;
        arraytopdown__lang_spec_t fvar_2;
        uint32_t fvar_3;
        uint64_t fvar_4;};

bool_t f_arraytopdown_closure_83(struct arraytopdown_closure_83_s * closure, arraytopdown_record_68_t bvar);

bool_t m_arraytopdown_closure_83(struct arraytopdown_closure_83_s * closure, arraytopdown__ent_adt_t bvar_1, arraytopdown__ent_adt_t bvar_2);

extern bool_t h_arraytopdown_closure_83(arraytopdown__ent_adt_t ivar_7, arraytopdown__ent_adt_t ivar_8, arraytopdown_array_66_t ivar_4, arraytopdown__lang_spec_t ivar_2, uint32_t ivar_1, uint64_t ivar_3);

extern arraytopdown_closure_83_t new_arraytopdown_closure_83(void);

extern void release_arraytopdown_closure_83(arraytopdown_funtype_69_t closure);

extern arraytopdown_closure_83_t copy_arraytopdown_closure_83(arraytopdown_closure_83_t x);




struct arraytopdown_closure_84_s;
        typedef struct arraytopdown_closure_84_s * arraytopdown_closure_84_t;

struct arraytopdown_closure_84_s {uint32_t count;
         arraytopdown_funtype_59_ftbl_t ftbl;
         arraytopdown_funtype_59_htbl_t htbl;
        arraytopdown_array_66_t fvar_1;
        arraytopdown__lang_spec_t fvar_2;
        uint32_t fvar_3;
        uint64_t fvar_4;};

bool_t f_arraytopdown_closure_84(struct arraytopdown_closure_84_s * closure, arraytopdown__ent_adt_t bvar);

bool_t m_arraytopdown_closure_84(struct arraytopdown_closure_84_s * closure, arraytopdown__ent_adt_t bvar);

extern bool_t h_arraytopdown_closure_84(arraytopdown__ent_adt_t ivar_7, arraytopdown_array_66_t ivar_4, arraytopdown__lang_spec_t ivar_2, uint32_t ivar_1, uint64_t ivar_3);

extern arraytopdown_closure_84_t new_arraytopdown_closure_84(void);

extern void release_arraytopdown_closure_84(arraytopdown_funtype_59_t closure);

extern arraytopdown_closure_84_t copy_arraytopdown_closure_84(arraytopdown_closure_84_t x);



struct arraytopdown_record_85_s {
        uint32_t count; 
        arraytopdown_array_66_t project_1;
        uint32_t project_2;
        uint8_t project_3;
        uint64_t project_4;};
typedef struct arraytopdown_record_85_s * arraytopdown_record_85_t;

extern arraytopdown_record_85_t new_arraytopdown_record_85(void);

extern void release_arraytopdown_record_85(arraytopdown_record_85_t x);

extern arraytopdown_record_85_t copy_arraytopdown_record_85(arraytopdown_record_85_t x);

extern bool_t equal_arraytopdown_record_85(arraytopdown_record_85_t x, arraytopdown_record_85_t y);
typedef struct actual_arraytopdown_record_85_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_record_85_t;

void release_arraytopdown_record_85_ptr(pointer_t x, type_actual_t arraytopdown_record_85);
extern bool_t equal_arraytopdown_record_85_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_85_t T);

actual_arraytopdown_record_85_t actual_arraytopdown_record_85(void);

extern arraytopdown_record_85_t update_arraytopdown_record_85_project_1(arraytopdown_record_85_t x, arraytopdown_array_66_t v);

extern arraytopdown_record_85_t update_arraytopdown_record_85_project_2(arraytopdown_record_85_t x, uint32_t v);

extern arraytopdown_record_85_t update_arraytopdown_record_85_project_3(arraytopdown_record_85_t x, uint8_t v);

extern arraytopdown_record_85_t update_arraytopdown_record_85_project_4(arraytopdown_record_85_t x, uint64_t v);



struct arraytopdown_funtype_86_s;
        typedef struct arraytopdown_funtype_86_s * arraytopdown_funtype_86_t;

struct arraytopdown_funtype_86_ftbl_s {bool_t (* fptr)(struct arraytopdown_funtype_86_s *, arraytopdown_record_85_t);
        bool_t (* mptr)(struct arraytopdown_funtype_86_s *, arraytopdown_array_66_t, uint32_t, uint8_t, uint64_t);
        void (* rptr)(struct arraytopdown_funtype_86_s *);
        struct arraytopdown_funtype_86_s * (* cptr)(struct arraytopdown_funtype_86_s *);};
typedef struct arraytopdown_funtype_86_ftbl_s * arraytopdown_funtype_86_ftbl_t;

struct arraytopdown_funtype_86_hashentry_s {uint32_t keyhash; arraytopdown_record_85_t key; bool_t value;}; 
typedef struct arraytopdown_funtype_86_hashentry_s arraytopdown_funtype_86_hashentry_t;

struct arraytopdown_funtype_86_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_86_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_86_htbl_s * arraytopdown_funtype_86_htbl_t;

struct arraytopdown_funtype_86_s {uint32_t count;
        arraytopdown_funtype_86_ftbl_t ftbl;
        arraytopdown_funtype_86_htbl_t htbl;};
typedef struct arraytopdown_funtype_86_s * arraytopdown_funtype_86_t;

extern void release_arraytopdown_funtype_86(arraytopdown_funtype_86_t x);

extern arraytopdown_funtype_86_t copy_arraytopdown_funtype_86(arraytopdown_funtype_86_t x);

extern bool_t equal_arraytopdown_funtype_86(arraytopdown_funtype_86_t x, arraytopdown_funtype_86_t y);




struct arraytopdown_closure_87_s;
        typedef struct arraytopdown_closure_87_s * arraytopdown_closure_87_t;

struct arraytopdown_closure_87_s {uint32_t count;
         arraytopdown_funtype_86_ftbl_t ftbl;
         arraytopdown_funtype_86_htbl_t htbl;
        bytestrings__bytestring_t fvar_1;
        uint32_t fvar_2;
        arraytopdown__lang_spec_t fvar_3;};

bool_t f_arraytopdown_closure_87(struct arraytopdown_closure_87_s * closure, arraytopdown_record_85_t bvar);

bool_t m_arraytopdown_closure_87(struct arraytopdown_closure_87_s * closure, arraytopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4);

extern bool_t h_arraytopdown_closure_87(arraytopdown_array_66_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, uint64_t ivar_10, bytestrings__bytestring_t ivar_3, uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2);

extern arraytopdown_closure_87_t new_arraytopdown_closure_87(void);

extern void release_arraytopdown_closure_87(arraytopdown_funtype_86_t closure);

extern arraytopdown_closure_87_t copy_arraytopdown_closure_87(arraytopdown_closure_87_t x);



struct arraytopdown_record_88_s {
        uint32_t count; 
        arraytopdown_array_66_t project_1;
        uint32_t project_2;
        uint8_t project_3;};
typedef struct arraytopdown_record_88_s * arraytopdown_record_88_t;

extern arraytopdown_record_88_t new_arraytopdown_record_88(void);

extern void release_arraytopdown_record_88(arraytopdown_record_88_t x);

extern arraytopdown_record_88_t copy_arraytopdown_record_88(arraytopdown_record_88_t x);

extern bool_t equal_arraytopdown_record_88(arraytopdown_record_88_t x, arraytopdown_record_88_t y);
typedef struct actual_arraytopdown_record_88_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_record_88_t;

void release_arraytopdown_record_88_ptr(pointer_t x, type_actual_t arraytopdown_record_88);
extern bool_t equal_arraytopdown_record_88_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_88_t T);

actual_arraytopdown_record_88_t actual_arraytopdown_record_88(void);

extern arraytopdown_record_88_t update_arraytopdown_record_88_project_1(arraytopdown_record_88_t x, arraytopdown_array_66_t v);

extern arraytopdown_record_88_t update_arraytopdown_record_88_project_2(arraytopdown_record_88_t x, uint32_t v);

extern arraytopdown_record_88_t update_arraytopdown_record_88_project_3(arraytopdown_record_88_t x, uint8_t v);



struct arraytopdown_funtype_89_s;
        typedef struct arraytopdown_funtype_89_s * arraytopdown_funtype_89_t;

struct arraytopdown_funtype_89_ftbl_s {bool_t (* fptr)(struct arraytopdown_funtype_89_s *, arraytopdown_record_88_t);
        bool_t (* mptr)(struct arraytopdown_funtype_89_s *, arraytopdown_array_66_t, uint32_t, uint8_t);
        void (* rptr)(struct arraytopdown_funtype_89_s *);
        struct arraytopdown_funtype_89_s * (* cptr)(struct arraytopdown_funtype_89_s *);};
typedef struct arraytopdown_funtype_89_ftbl_s * arraytopdown_funtype_89_ftbl_t;

struct arraytopdown_funtype_89_hashentry_s {uint32_t keyhash; arraytopdown_record_88_t key; bool_t value;}; 
typedef struct arraytopdown_funtype_89_hashentry_s arraytopdown_funtype_89_hashentry_t;

struct arraytopdown_funtype_89_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_89_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_89_htbl_s * arraytopdown_funtype_89_htbl_t;

struct arraytopdown_funtype_89_s {uint32_t count;
        arraytopdown_funtype_89_ftbl_t ftbl;
        arraytopdown_funtype_89_htbl_t htbl;};
typedef struct arraytopdown_funtype_89_s * arraytopdown_funtype_89_t;

extern void release_arraytopdown_funtype_89(arraytopdown_funtype_89_t x);

extern arraytopdown_funtype_89_t copy_arraytopdown_funtype_89(arraytopdown_funtype_89_t x);

extern bool_t equal_arraytopdown_funtype_89(arraytopdown_funtype_89_t x, arraytopdown_funtype_89_t y);




struct arraytopdown_closure_90_s;
        typedef struct arraytopdown_closure_90_s * arraytopdown_closure_90_t;

struct arraytopdown_closure_90_s {uint32_t count;
         arraytopdown_funtype_89_ftbl_t ftbl;
         arraytopdown_funtype_89_htbl_t htbl;
        arraytopdown__lang_spec_t fvar_1;};

bool_t f_arraytopdown_closure_90(struct arraytopdown_closure_90_s * closure, arraytopdown_record_88_t bvar);

bool_t m_arraytopdown_closure_90(struct arraytopdown_closure_90_s * closure, arraytopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3);

extern bool_t h_arraytopdown_closure_90(arraytopdown_array_66_t ivar_5, uint32_t ivar_7, uint8_t ivar_8, arraytopdown__lang_spec_t ivar_2);

extern arraytopdown_closure_90_t new_arraytopdown_closure_90(void);

extern void release_arraytopdown_closure_90(arraytopdown_funtype_89_t closure);

extern arraytopdown_closure_90_t copy_arraytopdown_closure_90(arraytopdown_closure_90_t x);



struct arraytopdown_record_91_s {
        uint32_t count; 
        arraytopdown_array_66_t project_1;
        uint32_t project_2;
        uint8_t project_3;
        uint64_t project_4;
        mpz_t project_5;};
typedef struct arraytopdown_record_91_s * arraytopdown_record_91_t;

extern arraytopdown_record_91_t new_arraytopdown_record_91(void);

extern void release_arraytopdown_record_91(arraytopdown_record_91_t x);

extern arraytopdown_record_91_t copy_arraytopdown_record_91(arraytopdown_record_91_t x);

extern bool_t equal_arraytopdown_record_91(arraytopdown_record_91_t x, arraytopdown_record_91_t y);
typedef struct actual_arraytopdown_record_91_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_record_91_t;

void release_arraytopdown_record_91_ptr(pointer_t x, type_actual_t arraytopdown_record_91);
extern bool_t equal_arraytopdown_record_91_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_91_t T);

actual_arraytopdown_record_91_t actual_arraytopdown_record_91(void);

extern arraytopdown_record_91_t update_arraytopdown_record_91_project_1(arraytopdown_record_91_t x, arraytopdown_array_66_t v);

extern arraytopdown_record_91_t update_arraytopdown_record_91_project_2(arraytopdown_record_91_t x, uint32_t v);

extern arraytopdown_record_91_t update_arraytopdown_record_91_project_3(arraytopdown_record_91_t x, uint8_t v);

extern arraytopdown_record_91_t update_arraytopdown_record_91_project_4(arraytopdown_record_91_t x, uint64_t v);

extern arraytopdown_record_91_t update_arraytopdown_record_91_project_5(arraytopdown_record_91_t x, mpz_ptr_t v);



struct arraytopdown_funtype_92_s;
        typedef struct arraytopdown_funtype_92_s * arraytopdown_funtype_92_t;

struct arraytopdown_funtype_92_ftbl_s {bool_t (* fptr)(struct arraytopdown_funtype_92_s *, arraytopdown_record_91_t);
        bool_t (* mptr)(struct arraytopdown_funtype_92_s *, arraytopdown_array_66_t, uint32_t, uint8_t, uint64_t, mpz_ptr_t);
        void (* rptr)(struct arraytopdown_funtype_92_s *);
        struct arraytopdown_funtype_92_s * (* cptr)(struct arraytopdown_funtype_92_s *);};
typedef struct arraytopdown_funtype_92_ftbl_s * arraytopdown_funtype_92_ftbl_t;

struct arraytopdown_funtype_92_hashentry_s {uint32_t keyhash; arraytopdown_record_91_t key; bool_t value;}; 
typedef struct arraytopdown_funtype_92_hashentry_s arraytopdown_funtype_92_hashentry_t;

struct arraytopdown_funtype_92_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_92_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_92_htbl_s * arraytopdown_funtype_92_htbl_t;

struct arraytopdown_funtype_92_s {uint32_t count;
        arraytopdown_funtype_92_ftbl_t ftbl;
        arraytopdown_funtype_92_htbl_t htbl;};
typedef struct arraytopdown_funtype_92_s * arraytopdown_funtype_92_t;

extern void release_arraytopdown_funtype_92(arraytopdown_funtype_92_t x);

extern arraytopdown_funtype_92_t copy_arraytopdown_funtype_92(arraytopdown_funtype_92_t x);

extern bool_t equal_arraytopdown_funtype_92(arraytopdown_funtype_92_t x, arraytopdown_funtype_92_t y);




struct arraytopdown_closure_93_s;
        typedef struct arraytopdown_closure_93_s * arraytopdown_closure_93_t;

struct arraytopdown_closure_93_s {uint32_t count;
         arraytopdown_funtype_92_ftbl_t ftbl;
         arraytopdown_funtype_92_htbl_t htbl;
        bytestrings__bytestring_t fvar_1;
        arraytopdown__lang_spec_t fvar_2;};

bool_t f_arraytopdown_closure_93(struct arraytopdown_closure_93_s * closure, arraytopdown_record_91_t bvar);

bool_t m_arraytopdown_closure_93(struct arraytopdown_closure_93_s * closure, arraytopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4, mpz_ptr_t bvar_5);

extern bool_t h_arraytopdown_closure_93(arraytopdown_array_66_t ivar_9, uint32_t ivar_11, uint8_t ivar_12, uint64_t ivar_13, mpz_ptr_t ivar_14, bytestrings__bytestring_t ivar_3, arraytopdown__lang_spec_t ivar_2);

extern arraytopdown_closure_93_t new_arraytopdown_closure_93(void);

extern void release_arraytopdown_closure_93(arraytopdown_funtype_92_t closure);

extern arraytopdown_closure_93_t copy_arraytopdown_closure_93(arraytopdown_closure_93_t x);



struct arraytopdown_record_94_s {
        uint32_t count; 
        arraytopdown_array_66_t project_1;
        uint32_t project_2;
        uint8_t project_3;
        arraytopdown__ent_adt_t project_4;};
typedef struct arraytopdown_record_94_s * arraytopdown_record_94_t;

extern arraytopdown_record_94_t new_arraytopdown_record_94(void);

extern void release_arraytopdown_record_94(arraytopdown_record_94_t x);

extern arraytopdown_record_94_t copy_arraytopdown_record_94(arraytopdown_record_94_t x);

extern bool_t equal_arraytopdown_record_94(arraytopdown_record_94_t x, arraytopdown_record_94_t y);
typedef struct actual_arraytopdown_record_94_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_record_94_t;

void release_arraytopdown_record_94_ptr(pointer_t x, type_actual_t arraytopdown_record_94);
extern bool_t equal_arraytopdown_record_94_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_94_t T);

actual_arraytopdown_record_94_t actual_arraytopdown_record_94(void);

extern arraytopdown_record_94_t update_arraytopdown_record_94_project_1(arraytopdown_record_94_t x, arraytopdown_array_66_t v);

extern arraytopdown_record_94_t update_arraytopdown_record_94_project_2(arraytopdown_record_94_t x, uint32_t v);

extern arraytopdown_record_94_t update_arraytopdown_record_94_project_3(arraytopdown_record_94_t x, uint8_t v);

extern arraytopdown_record_94_t update_arraytopdown_record_94_project_4(arraytopdown_record_94_t x, arraytopdown__ent_adt_t v);



struct arraytopdown_funtype_95_s;
        typedef struct arraytopdown_funtype_95_s * arraytopdown_funtype_95_t;

struct arraytopdown_funtype_95_ftbl_s {bool_t (* fptr)(struct arraytopdown_funtype_95_s *, arraytopdown_record_94_t);
        bool_t (* mptr)(struct arraytopdown_funtype_95_s *, arraytopdown_array_66_t, uint32_t, uint8_t, arraytopdown__ent_adt_t);
        void (* rptr)(struct arraytopdown_funtype_95_s *);
        struct arraytopdown_funtype_95_s * (* cptr)(struct arraytopdown_funtype_95_s *);};
typedef struct arraytopdown_funtype_95_ftbl_s * arraytopdown_funtype_95_ftbl_t;

struct arraytopdown_funtype_95_hashentry_s {uint32_t keyhash; arraytopdown_record_94_t key; bool_t value;}; 
typedef struct arraytopdown_funtype_95_hashentry_s arraytopdown_funtype_95_hashentry_t;

struct arraytopdown_funtype_95_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_95_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_95_htbl_s * arraytopdown_funtype_95_htbl_t;

struct arraytopdown_funtype_95_s {uint32_t count;
        arraytopdown_funtype_95_ftbl_t ftbl;
        arraytopdown_funtype_95_htbl_t htbl;};
typedef struct arraytopdown_funtype_95_s * arraytopdown_funtype_95_t;

extern void release_arraytopdown_funtype_95(arraytopdown_funtype_95_t x);

extern arraytopdown_funtype_95_t copy_arraytopdown_funtype_95(arraytopdown_funtype_95_t x);

extern bool_t equal_arraytopdown_funtype_95(arraytopdown_funtype_95_t x, arraytopdown_funtype_95_t y);




struct arraytopdown_closure_96_s;
        typedef struct arraytopdown_closure_96_s * arraytopdown_closure_96_t;

struct arraytopdown_closure_96_s {uint32_t count;
         arraytopdown_funtype_95_ftbl_t ftbl;
         arraytopdown_funtype_95_htbl_t htbl;
        uint32_t fvar_1;
        bytestrings__bytestring_t fvar_2;
        arraytopdown__lang_spec_t fvar_3;};

bool_t f_arraytopdown_closure_96(struct arraytopdown_closure_96_s * closure, arraytopdown_record_94_t bvar);

bool_t m_arraytopdown_closure_96(struct arraytopdown_closure_96_s * closure, arraytopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, arraytopdown__ent_adt_t bvar_4);

extern bool_t h_arraytopdown_closure_96(arraytopdown_array_66_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, arraytopdown__ent_adt_t ivar_10, uint32_t ivar_1, bytestrings__bytestring_t ivar_3, arraytopdown__lang_spec_t ivar_2);

extern arraytopdown_closure_96_t new_arraytopdown_closure_96(void);

extern void release_arraytopdown_closure_96(arraytopdown_funtype_95_t closure);

extern arraytopdown_closure_96_t copy_arraytopdown_closure_96(arraytopdown_closure_96_t x);




struct arraytopdown_closure_97_s;
        typedef struct arraytopdown_closure_97_s * arraytopdown_closure_97_t;

struct arraytopdown_closure_97_s {uint32_t count;
         arraytopdown_funtype_95_ftbl_t ftbl;
         arraytopdown_funtype_95_htbl_t htbl;
        uint32_t fvar_1;
        bytestrings__bytestring_t fvar_2;
        arraytopdown__lang_spec_t fvar_3;};

bool_t f_arraytopdown_closure_97(struct arraytopdown_closure_97_s * closure, arraytopdown_record_94_t bvar);

bool_t m_arraytopdown_closure_97(struct arraytopdown_closure_97_s * closure, arraytopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, arraytopdown__ent_adt_t bvar_4);

extern bool_t h_arraytopdown_closure_97(arraytopdown_array_66_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, arraytopdown__ent_adt_t ivar_10, uint32_t ivar_1, bytestrings__bytestring_t ivar_3, arraytopdown__lang_spec_t ivar_2);

extern arraytopdown_closure_97_t new_arraytopdown_closure_97(void);

extern void release_arraytopdown_closure_97(arraytopdown_funtype_95_t closure);

extern arraytopdown_closure_97_t copy_arraytopdown_closure_97(arraytopdown_closure_97_t x);



struct arraytopdown_funtype_98_s;
        typedef struct arraytopdown_funtype_98_s * arraytopdown_funtype_98_t;

struct arraytopdown_funtype_98_ftbl_s {bool_t (* fptr)(struct arraytopdown_funtype_98_s *, arraytopdown_array_66_t);
        bool_t (* mptr)(struct arraytopdown_funtype_98_s *, arraytopdown_array_66_t);
        void (* rptr)(struct arraytopdown_funtype_98_s *);
        struct arraytopdown_funtype_98_s * (* cptr)(struct arraytopdown_funtype_98_s *);};
typedef struct arraytopdown_funtype_98_ftbl_s * arraytopdown_funtype_98_ftbl_t;

struct arraytopdown_funtype_98_hashentry_s {uint32_t keyhash; arraytopdown_array_66_t key; bool_t value;}; 
typedef struct arraytopdown_funtype_98_hashentry_s arraytopdown_funtype_98_hashentry_t;

struct arraytopdown_funtype_98_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_98_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_98_htbl_s * arraytopdown_funtype_98_htbl_t;

struct arraytopdown_funtype_98_s {uint32_t count;
        arraytopdown_funtype_98_ftbl_t ftbl;
        arraytopdown_funtype_98_htbl_t htbl;};
typedef struct arraytopdown_funtype_98_s * arraytopdown_funtype_98_t;

extern void release_arraytopdown_funtype_98(arraytopdown_funtype_98_t x);

extern arraytopdown_funtype_98_t copy_arraytopdown_funtype_98(arraytopdown_funtype_98_t x);

extern bool_t equal_arraytopdown_funtype_98(arraytopdown_funtype_98_t x, arraytopdown_funtype_98_t y);




struct arraytopdown_closure_99_s;
        typedef struct arraytopdown_closure_99_s * arraytopdown_closure_99_t;

struct arraytopdown_closure_99_s {uint32_t count;
         arraytopdown_funtype_98_ftbl_t ftbl;
         arraytopdown_funtype_98_htbl_t htbl;};

bool_t f_arraytopdown_closure_99(struct arraytopdown_closure_99_s * closure, arraytopdown_array_66_t bvar);

bool_t m_arraytopdown_closure_99(struct arraytopdown_closure_99_s * closure, arraytopdown_array_66_t bvar);

extern bool_t h_arraytopdown_closure_99(arraytopdown_array_66_t ivar_6);

extern arraytopdown_closure_99_t new_arraytopdown_closure_99(void);

extern void release_arraytopdown_closure_99(arraytopdown_funtype_98_t closure);

extern arraytopdown_closure_99_t copy_arraytopdown_closure_99(arraytopdown_closure_99_t x);




struct arraytopdown_closure_100_s;
        typedef struct arraytopdown_closure_100_s * arraytopdown_closure_100_t;

struct arraytopdown_closure_100_s {uint32_t count;
         arraytopdown_funtype_64_ftbl_t ftbl;
         arraytopdown_funtype_64_htbl_t htbl;
        arraytopdown_array_66_t fvar_1;};

bool_t f_arraytopdown_closure_100(struct arraytopdown_closure_100_s * closure, arraytopdown_record_9_t bvar);

bool_t m_arraytopdown_closure_100(struct arraytopdown_closure_100_s * closure, uint32_t bvar_1, uint8_t bvar_2);

extern bool_t h_arraytopdown_closure_100(uint32_t ivar_5, uint8_t ivar_6, arraytopdown_array_66_t ivar_2);

extern arraytopdown_closure_100_t new_arraytopdown_closure_100(void);

extern void release_arraytopdown_closure_100(arraytopdown_funtype_64_t closure);

extern arraytopdown_closure_100_t copy_arraytopdown_closure_100(arraytopdown_closure_100_t x);



struct arraytopdown_funtype_101_s;
        typedef struct arraytopdown_funtype_101_s * arraytopdown_funtype_101_t;

struct arraytopdown_funtype_101_ftbl_s {arraytopdown_funtype_98_t (* fptr)(struct arraytopdown_funtype_101_s *, arraytopdown_record_9_t);
        arraytopdown_funtype_98_t (* mptr)(struct arraytopdown_funtype_101_s *, uint32_t, uint8_t);
        void (* rptr)(struct arraytopdown_funtype_101_s *);
        struct arraytopdown_funtype_101_s * (* cptr)(struct arraytopdown_funtype_101_s *);};
typedef struct arraytopdown_funtype_101_ftbl_s * arraytopdown_funtype_101_ftbl_t;

struct arraytopdown_funtype_101_hashentry_s {uint32_t keyhash; arraytopdown_record_9_t key; arraytopdown_funtype_98_t value;}; 
typedef struct arraytopdown_funtype_101_hashentry_s arraytopdown_funtype_101_hashentry_t;

struct arraytopdown_funtype_101_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_101_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_101_htbl_s * arraytopdown_funtype_101_htbl_t;

struct arraytopdown_funtype_101_s {uint32_t count;
        arraytopdown_funtype_101_ftbl_t ftbl;
        arraytopdown_funtype_101_htbl_t htbl;};
typedef struct arraytopdown_funtype_101_s * arraytopdown_funtype_101_t;

extern void release_arraytopdown_funtype_101(arraytopdown_funtype_101_t x);

extern arraytopdown_funtype_101_t copy_arraytopdown_funtype_101(arraytopdown_funtype_101_t x);

extern bool_t equal_arraytopdown_funtype_101(arraytopdown_funtype_101_t x, arraytopdown_funtype_101_t y);




struct arraytopdown_closure_102_s;
        typedef struct arraytopdown_closure_102_s * arraytopdown_closure_102_t;

struct arraytopdown_closure_102_s {uint32_t count;
         arraytopdown_funtype_101_ftbl_t ftbl;
         arraytopdown_funtype_101_htbl_t htbl;
        arraytopdown__lang_spec_t fvar_1;
        bytestrings__bytestring_t fvar_2;
        uint32_t fvar_3;};

arraytopdown_funtype_98_t f_arraytopdown_closure_102(struct arraytopdown_closure_102_s * closure, arraytopdown_record_9_t bvar);

arraytopdown_funtype_98_t m_arraytopdown_closure_102(struct arraytopdown_closure_102_s * closure, uint32_t bvar_1, uint8_t bvar_2);

extern arraytopdown_funtype_98_t h_arraytopdown_closure_102(uint32_t ivar_7, uint8_t ivar_8, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3, uint32_t ivar_1);

extern arraytopdown_closure_102_t new_arraytopdown_closure_102(void);

extern void release_arraytopdown_closure_102(arraytopdown_funtype_101_t closure);

extern arraytopdown_closure_102_t copy_arraytopdown_closure_102(arraytopdown_closure_102_t x);




struct arraytopdown_closure_103_s;
        typedef struct arraytopdown_closure_103_s * arraytopdown_closure_103_t;

struct arraytopdown_closure_103_s {uint32_t count;
         arraytopdown_funtype_98_ftbl_t ftbl;
         arraytopdown_funtype_98_htbl_t htbl;
        uint32_t fvar_1;
        uint8_t fvar_2;
        uint32_t fvar_3;
        bytestrings__bytestring_t fvar_4;
        arraytopdown__lang_spec_t fvar_5;};

bool_t f_arraytopdown_closure_103(struct arraytopdown_closure_103_s * closure, arraytopdown_array_66_t bvar);

bool_t m_arraytopdown_closure_103(struct arraytopdown_closure_103_s * closure, arraytopdown_array_66_t bvar);

extern bool_t h_arraytopdown_closure_103(arraytopdown_array_66_t ivar_11, uint32_t ivar_1, uint8_t ivar_8, uint32_t ivar_7, bytestrings__bytestring_t ivar_3, arraytopdown__lang_spec_t ivar_2);

extern arraytopdown_closure_103_t new_arraytopdown_closure_103(void);

extern void release_arraytopdown_closure_103(arraytopdown_funtype_98_t closure);

extern arraytopdown_closure_103_t copy_arraytopdown_closure_103(arraytopdown_closure_103_t x);



struct arraytopdown_record_104_s {
        uint32_t count; 
        arraytopdown_array_66_t scaf;
        uint64_t depth;
        arraytopdown__ent_adt_t stack;
        bool_t lflag;};
typedef struct arraytopdown_record_104_s * arraytopdown_record_104_t;

extern arraytopdown_record_104_t new_arraytopdown_record_104(void);

extern void release_arraytopdown_record_104(arraytopdown_record_104_t x);

extern arraytopdown_record_104_t copy_arraytopdown_record_104(arraytopdown_record_104_t x);

extern bool_t equal_arraytopdown_record_104(arraytopdown_record_104_t x, arraytopdown_record_104_t y);
typedef struct actual_arraytopdown_record_104_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_record_104_t;

void release_arraytopdown_record_104_ptr(pointer_t x, type_actual_t arraytopdown_record_104);
extern bool_t equal_arraytopdown_record_104_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_104_t T);

actual_arraytopdown_record_104_t actual_arraytopdown_record_104(void);

extern arraytopdown_record_104_t update_arraytopdown_record_104_scaf(arraytopdown_record_104_t x, arraytopdown_array_66_t v);

extern arraytopdown_record_104_t update_arraytopdown_record_104_depth(arraytopdown_record_104_t x, uint64_t v);

extern arraytopdown_record_104_t update_arraytopdown_record_104_stack(arraytopdown_record_104_t x, arraytopdown__ent_adt_t v);

extern arraytopdown_record_104_t update_arraytopdown_record_104_lflag(arraytopdown_record_104_t x, bool_t v);



struct arraytopdown_funtype_105_s;
        typedef struct arraytopdown_funtype_105_s * arraytopdown_funtype_105_t;

struct arraytopdown_funtype_105_ftbl_s {arraytopdown_record_104_t (* fptr)(struct arraytopdown_funtype_105_s *, arraytopdown_record_104_t);
        arraytopdown_record_104_t (* mptr)(struct arraytopdown_funtype_105_s *, arraytopdown_record_104_t);
        void (* rptr)(struct arraytopdown_funtype_105_s *);
        struct arraytopdown_funtype_105_s * (* cptr)(struct arraytopdown_funtype_105_s *);};
typedef struct arraytopdown_funtype_105_ftbl_s * arraytopdown_funtype_105_ftbl_t;

struct arraytopdown_funtype_105_hashentry_s {uint32_t keyhash; arraytopdown_record_104_t key; arraytopdown_record_104_t value;}; 
typedef struct arraytopdown_funtype_105_hashentry_s arraytopdown_funtype_105_hashentry_t;

struct arraytopdown_funtype_105_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_105_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_105_htbl_s * arraytopdown_funtype_105_htbl_t;

struct arraytopdown_funtype_105_s {uint32_t count;
        arraytopdown_funtype_105_ftbl_t ftbl;
        arraytopdown_funtype_105_htbl_t htbl;};
typedef struct arraytopdown_funtype_105_s * arraytopdown_funtype_105_t;

extern void release_arraytopdown_funtype_105(arraytopdown_funtype_105_t x);

extern arraytopdown_funtype_105_t copy_arraytopdown_funtype_105(arraytopdown_funtype_105_t x);

extern bool_t equal_arraytopdown_funtype_105(arraytopdown_funtype_105_t x, arraytopdown_funtype_105_t y);




struct arraytopdown_closure_106_s;
        typedef struct arraytopdown_closure_106_s * arraytopdown_closure_106_t;

struct arraytopdown_closure_106_s {uint32_t count;
         arraytopdown_funtype_105_ftbl_t ftbl;
         arraytopdown_funtype_105_htbl_t htbl;
        uint32_t fvar_1;
        bytestrings__bytestring_t fvar_2;
        arraytopdown__lang_spec_t fvar_3;};

arraytopdown_record_104_t f_arraytopdown_closure_106(struct arraytopdown_closure_106_s * closure, arraytopdown_record_104_t bvar);

arraytopdown_record_104_t m_arraytopdown_closure_106(struct arraytopdown_closure_106_s * closure, arraytopdown_record_104_t bvar);

extern arraytopdown_record_104_t h_arraytopdown_closure_106(arraytopdown_record_104_t ivar_9, uint32_t ivar_1, bytestrings__bytestring_t ivar_3, arraytopdown__lang_spec_t ivar_2);

extern arraytopdown_closure_106_t new_arraytopdown_closure_106(void);

extern void release_arraytopdown_closure_106(arraytopdown_funtype_105_t closure);

extern arraytopdown_closure_106_t copy_arraytopdown_closure_106(arraytopdown_closure_106_t x);



struct arraytopdown_funtype_107_s;
        typedef struct arraytopdown_funtype_107_s * arraytopdown_funtype_107_t;

struct arraytopdown_funtype_107_ftbl_s {arraytopdown__ent_adt_t (* fptr)(struct arraytopdown_funtype_107_s *, uint8_t);
        arraytopdown__ent_adt_t (* mptr)(struct arraytopdown_funtype_107_s *, uint8_t);
        void (* rptr)(struct arraytopdown_funtype_107_s *);
        struct arraytopdown_funtype_107_s * (* cptr)(struct arraytopdown_funtype_107_s *);};
typedef struct arraytopdown_funtype_107_ftbl_s * arraytopdown_funtype_107_ftbl_t;

struct arraytopdown_funtype_107_hashentry_s {uint32_t keyhash; uint8_t key; arraytopdown__ent_adt_t value;}; 
typedef struct arraytopdown_funtype_107_hashentry_s arraytopdown_funtype_107_hashentry_t;

struct arraytopdown_funtype_107_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_107_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_107_htbl_s * arraytopdown_funtype_107_htbl_t;

struct arraytopdown_funtype_107_s {uint32_t count;
        arraytopdown_funtype_107_ftbl_t ftbl;
        arraytopdown_funtype_107_htbl_t htbl;};
typedef struct arraytopdown_funtype_107_s * arraytopdown_funtype_107_t;

extern void release_arraytopdown_funtype_107(arraytopdown_funtype_107_t x);

extern arraytopdown_funtype_107_t copy_arraytopdown_funtype_107(arraytopdown_funtype_107_t x);

extern bool_t equal_arraytopdown_funtype_107(arraytopdown_funtype_107_t x, arraytopdown_funtype_107_t y);



struct arraytopdown_funtype_108_s;
        typedef struct arraytopdown_funtype_108_s * arraytopdown_funtype_108_t;

struct arraytopdown_funtype_108_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct arraytopdown_funtype_108_s *, arraytopdown_record_104_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct arraytopdown_funtype_108_s *, arraytopdown_record_104_t);
        void (* rptr)(struct arraytopdown_funtype_108_s *);
        struct arraytopdown_funtype_108_s * (* cptr)(struct arraytopdown_funtype_108_s *);};
typedef struct arraytopdown_funtype_108_ftbl_s * arraytopdown_funtype_108_ftbl_t;

struct arraytopdown_funtype_108_hashentry_s {uint32_t keyhash; arraytopdown_record_104_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct arraytopdown_funtype_108_hashentry_s arraytopdown_funtype_108_hashentry_t;

struct arraytopdown_funtype_108_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_108_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_108_htbl_s * arraytopdown_funtype_108_htbl_t;

struct arraytopdown_funtype_108_s {uint32_t count;
        arraytopdown_funtype_108_ftbl_t ftbl;
        arraytopdown_funtype_108_htbl_t htbl;};
typedef struct arraytopdown_funtype_108_s * arraytopdown_funtype_108_t;

extern void release_arraytopdown_funtype_108(arraytopdown_funtype_108_t x);

extern arraytopdown_funtype_108_t copy_arraytopdown_funtype_108(arraytopdown_funtype_108_t x);

extern bool_t equal_arraytopdown_funtype_108(arraytopdown_funtype_108_t x, arraytopdown_funtype_108_t y);




struct arraytopdown_closure_109_s;
        typedef struct arraytopdown_closure_109_s * arraytopdown_closure_109_t;

struct arraytopdown_closure_109_s {uint32_t count;
         arraytopdown_funtype_108_ftbl_t ftbl;
         arraytopdown_funtype_108_htbl_t htbl;
        uint32_t fvar_1;};

ordstruct_adt__ordstruct_adt_t f_arraytopdown_closure_109(struct arraytopdown_closure_109_s * closure, arraytopdown_record_104_t bvar);

ordstruct_adt__ordstruct_adt_t m_arraytopdown_closure_109(struct arraytopdown_closure_109_s * closure, arraytopdown_record_104_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_arraytopdown_closure_109(arraytopdown_record_104_t ivar_14, uint32_t ivar_5);

extern arraytopdown_closure_109_t new_arraytopdown_closure_109(void);

extern void release_arraytopdown_closure_109(arraytopdown_funtype_108_t closure);

extern arraytopdown_closure_109_t copy_arraytopdown_closure_109(arraytopdown_closure_109_t x);




struct arraytopdown_closure_110_s;
        typedef struct arraytopdown_closure_110_s * arraytopdown_closure_110_t;

struct arraytopdown_closure_110_s {uint32_t count;
         arraytopdown_funtype_59_ftbl_t ftbl;
         arraytopdown_funtype_59_htbl_t htbl;};

bool_t f_arraytopdown_closure_110(struct arraytopdown_closure_110_s * closure, arraytopdown__ent_adt_t bvar);

bool_t m_arraytopdown_closure_110(struct arraytopdown_closure_110_s * closure, arraytopdown__ent_adt_t bvar);

extern bool_t h_arraytopdown_closure_110(arraytopdown__ent_adt_t ivar_25);

extern arraytopdown_closure_110_t new_arraytopdown_closure_110(void);

extern void release_arraytopdown_closure_110(arraytopdown_funtype_59_t closure);

extern arraytopdown_closure_110_t copy_arraytopdown_closure_110(arraytopdown_closure_110_t x);




struct arraytopdown_closure_111_s;
        typedef struct arraytopdown_closure_111_s * arraytopdown_closure_111_t;

struct arraytopdown_closure_111_s {uint32_t count;
         arraytopdown_funtype_105_ftbl_t ftbl;
         arraytopdown_funtype_105_htbl_t htbl;
        uint32_t fvar_1;
        uint8_t fvar_2;
        bytestrings__bytestring_t fvar_3;
        arraytopdown__lang_spec_t fvar_4;
        uint32_t fvar_5;};

arraytopdown_record_104_t f_arraytopdown_closure_111(struct arraytopdown_closure_111_s * closure, arraytopdown_record_104_t bvar);

arraytopdown_record_104_t m_arraytopdown_closure_111(struct arraytopdown_closure_111_s * closure, arraytopdown_record_104_t bvar);

extern arraytopdown_record_104_t h_arraytopdown_closure_111(arraytopdown_record_104_t ivar_18, uint32_t ivar_10, uint8_t ivar_11, bytestrings__bytestring_t ivar_9, arraytopdown__lang_spec_t ivar_8, uint32_t ivar_7);

extern arraytopdown_closure_111_t new_arraytopdown_closure_111(void);

extern void release_arraytopdown_closure_111(arraytopdown_funtype_105_t closure);

extern arraytopdown_closure_111_t copy_arraytopdown_closure_111(arraytopdown_closure_111_t x);




struct arraytopdown_closure_112_s;
        typedef struct arraytopdown_closure_112_s * arraytopdown_closure_112_t;

struct arraytopdown_closure_112_s {uint32_t count;
         arraytopdown_funtype_65_ftbl_t ftbl;
         arraytopdown_funtype_65_htbl_t htbl;};

arraytopdown__ent_adt_t f_arraytopdown_closure_112(struct arraytopdown_closure_112_s * closure, uint8_t bvar);

arraytopdown__ent_adt_t m_arraytopdown_closure_112(struct arraytopdown_closure_112_s * closure, uint8_t bvar);

extern arraytopdown__ent_adt_t h_arraytopdown_closure_112(uint8_t ivar_8);

extern arraytopdown_closure_112_t new_arraytopdown_closure_112(void);

extern void release_arraytopdown_closure_112(arraytopdown_funtype_65_t closure);

extern arraytopdown_closure_112_t copy_arraytopdown_closure_112(arraytopdown_closure_112_t x);



struct arraytopdown_funtype_113_s;
        typedef struct arraytopdown_funtype_113_s * arraytopdown_funtype_113_t;

struct arraytopdown_funtype_113_ftbl_s {arraytopdown_funtype_65_t (* fptr)(struct arraytopdown_funtype_113_s *, uint32_t);
        arraytopdown_funtype_65_t (* mptr)(struct arraytopdown_funtype_113_s *, uint32_t);
        void (* rptr)(struct arraytopdown_funtype_113_s *);
        struct arraytopdown_funtype_113_s * (* cptr)(struct arraytopdown_funtype_113_s *);};
typedef struct arraytopdown_funtype_113_ftbl_s * arraytopdown_funtype_113_ftbl_t;

struct arraytopdown_funtype_113_hashentry_s {uint32_t keyhash; uint32_t key; arraytopdown_funtype_65_t value;}; 
typedef struct arraytopdown_funtype_113_hashentry_s arraytopdown_funtype_113_hashentry_t;

struct arraytopdown_funtype_113_htbl_s {uint32_t size; uint32_t num_entries; arraytopdown_funtype_113_hashentry_t * data;}; 
typedef struct arraytopdown_funtype_113_htbl_s * arraytopdown_funtype_113_htbl_t;

struct arraytopdown_funtype_113_s {uint32_t count;
        arraytopdown_funtype_113_ftbl_t ftbl;
        arraytopdown_funtype_113_htbl_t htbl;};
typedef struct arraytopdown_funtype_113_s * arraytopdown_funtype_113_t;

extern void release_arraytopdown_funtype_113(arraytopdown_funtype_113_t x);

extern arraytopdown_funtype_113_t copy_arraytopdown_funtype_113(arraytopdown_funtype_113_t x);

uint32_t lookup_arraytopdown_funtype_113(arraytopdown_funtype_113_htbl_t htbl, uint32_t i, uint32_t ihash);

arraytopdown_funtype_113_t dupdate_arraytopdown_funtype_113(arraytopdown_funtype_113_t a, uint32_t i, arraytopdown_funtype_65_t v);

extern arraytopdown_funtype_113_t update_arraytopdown_funtype_113(arraytopdown_funtype_113_t a, uint32_t i, arraytopdown_funtype_65_t v);

extern bool_t equal_arraytopdown_funtype_113(arraytopdown_funtype_113_t x, arraytopdown_funtype_113_t y);



struct arraytopdown_record_114_s {
        uint32_t count; 
        uint8_t depth;
        bool_t lflag;
        arraytopdown_funtype_113_t scaf;
        arraytopdown__ent_adt_t stack;};
typedef struct arraytopdown_record_114_s * arraytopdown_record_114_t;

extern arraytopdown_record_114_t new_arraytopdown_record_114(void);

extern void release_arraytopdown_record_114(arraytopdown_record_114_t x);

extern arraytopdown_record_114_t copy_arraytopdown_record_114(arraytopdown_record_114_t x);

extern bool_t equal_arraytopdown_record_114(arraytopdown_record_114_t x, arraytopdown_record_114_t y);
typedef struct actual_arraytopdown_record_114_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdown_record_114_t;

void release_arraytopdown_record_114_ptr(pointer_t x, type_actual_t arraytopdown_record_114);
extern bool_t equal_arraytopdown_record_114_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_114_t T);

actual_arraytopdown_record_114_t actual_arraytopdown_record_114(void);

extern arraytopdown_record_114_t update_arraytopdown_record_114_depth(arraytopdown_record_114_t x, uint8_t v);

extern arraytopdown_record_114_t update_arraytopdown_record_114_lflag(arraytopdown_record_114_t x, bool_t v);

extern arraytopdown_record_114_t update_arraytopdown_record_114_scaf(arraytopdown_record_114_t x, arraytopdown_funtype_113_t v);

extern arraytopdown_record_114_t update_arraytopdown_record_114_stack(arraytopdown_record_114_t x, arraytopdown__ent_adt_t v);




struct arraytopdown_closure_115_s;
        typedef struct arraytopdown_closure_115_s * arraytopdown_closure_115_t;

struct arraytopdown_closure_115_s {uint32_t count;
         arraytopdown_funtype_113_ftbl_t ftbl;
         arraytopdown_funtype_113_htbl_t htbl;
        arraytopdown_funtype_65_t fvar_1;};

arraytopdown_funtype_65_t f_arraytopdown_closure_115(struct arraytopdown_closure_115_s * closure, uint32_t bvar);

arraytopdown_funtype_65_t m_arraytopdown_closure_115(struct arraytopdown_closure_115_s * closure, uint32_t bvar);

extern arraytopdown_funtype_65_t h_arraytopdown_closure_115(uint32_t ivar_19, arraytopdown_funtype_65_t ivar_5);

extern arraytopdown_closure_115_t new_arraytopdown_closure_115(void);

extern void release_arraytopdown_closure_115(arraytopdown_funtype_113_t closure);

extern arraytopdown_closure_115_t copy_arraytopdown_closure_115(arraytopdown_closure_115_t x);



extern uint8_t arraytopdown__num_non_terminals(void);

extern bool_t r_arraytopdown__failp(arraytopdown__ent_adt_t ivar_1);

extern bool_t r_arraytopdown__pendingp(arraytopdown__ent_adt_t ivar_1);

extern bool_t r_arraytopdown__loopp(arraytopdown__ent_adt_t ivar_1);

extern bool_t r_arraytopdown__goodp(arraytopdown__ent_adt_t ivar_1);

extern bool_t r_arraytopdown__pushp(arraytopdown__ent_adt_t ivar_1);

extern arraytopdown__ent_adt_t update_arraytopdown__ent_adt_dep(arraytopdown__ent_adt_t ivar_1, uint64_t ivar_7);

extern uint64_t arraytopdown__ent_adt_dep(arraytopdown__ent_adt_t ivar_1);

extern arraytopdown__good_t update_arraytopdown__ent_adt_span(arraytopdown__ent_adt_t ivar_1, uint32_t ivar_3);

extern uint32_t arraytopdown__ent_adt_span(arraytopdown__ent_adt_t ivar_1);

extern arraytopdown__push_t update_arraytopdown__ent_adt_pos(arraytopdown__ent_adt_t ivar_1, uint32_t ivar_3);

extern uint32_t arraytopdown__ent_adt_pos(arraytopdown__ent_adt_t ivar_1);

extern arraytopdown__push_t update_arraytopdown__ent_adt_nt(arraytopdown__ent_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t arraytopdown__ent_adt_nt(arraytopdown__ent_adt_t ivar_1);

extern arraytopdown__ent_adt_t arraytopdown__fail(uint64_t ivar_2);

extern arraytopdown__ent_adt_t arraytopdown__pending(void);

extern arraytopdown__ent_adt_t arraytopdown__loop(void);

extern arraytopdown__ent_adt_t arraytopdown__good(uint64_t ivar_2, uint32_t ivar_3);

extern arraytopdown__ent_adt_t arraytopdown__push(uint32_t ivar_2, uint8_t ivar_3);

extern arraytopdown_funtype_4_t arraytopdown__ent_ord(void);

extern uint8_t arraytopdown__ord__1(arraytopdown__ent_adt_t ivar_2);

extern bool_t arraytopdown__subterm__1(arraytopdown__ent_adt_t ivar_1, arraytopdown__ent_adt_t ivar_2);

extern bool_t arraytopdown__doublelessp__1(arraytopdown__ent_adt_t ivar_1, arraytopdown__ent_adt_t ivar_2);

extern arraytopdown_funtype_5_t arraytopdown__reduce_nat__1(arraytopdown_funtype_6_t ivar_6, mpz_ptr_t ivar_8, mpz_ptr_t ivar_9, arraytopdown_funtype_8_t ivar_10, arraytopdown_funtype_10_t ivar_12);

extern arraytopdown_funtype_5_t arraytopdown__REDUCE_nat__1(arraytopdown_funtype_13_t ivar_8, arraytopdown_funtype_5_t ivar_10, arraytopdown_funtype_5_t ivar_12, arraytopdown_funtype_15_t ivar_14, arraytopdown_funtype_17_t ivar_16);

extern arraytopdown_funtype_19_t arraytopdown__reduce_ordinal__1(arraytopdown_funtype_20_t ivar_6, ordstruct_adt__ordstruct_adt_t ivar_8, ordstruct_adt__ordstruct_adt_t ivar_9, arraytopdown_funtype_21_t ivar_10, arraytopdown_funtype_22_t ivar_12);

extern arraytopdown_funtype_19_t arraytopdown__REDUCE_ordinal__1(arraytopdown_funtype_24_t ivar_8, arraytopdown_funtype_19_t ivar_10, arraytopdown_funtype_19_t ivar_12, arraytopdown_funtype_25_t ivar_14, arraytopdown_funtype_26_t ivar_16);

extern bool_t r_arraytopdown__epsilonp(arraytopdown__peg_adt_t ivar_1);

extern bool_t r_arraytopdown__failurep(arraytopdown__peg_adt_t ivar_1);

extern bool_t r_arraytopdown__anyp(arraytopdown__peg_adt_t ivar_1);

extern bool_t r_arraytopdown__terminalp(arraytopdown__peg_adt_t ivar_1);

extern bool_t r_arraytopdown__concatp(arraytopdown__peg_adt_t ivar_1);

extern bool_t r_arraytopdown__orp(arraytopdown__peg_adt_t ivar_1);

extern bool_t r_arraytopdown__andp(arraytopdown__peg_adt_t ivar_1);

extern bool_t r_arraytopdown__notp(arraytopdown__peg_adt_t ivar_1);

extern arraytopdown__any_t update_arraytopdown__peg_adt_p(arraytopdown__peg_adt_t ivar_1, arraytopdown_funtype_29_t ivar_4);

extern arraytopdown_funtype_29_t arraytopdown__peg_adt_p(arraytopdown__peg_adt_t ivar_1);

extern arraytopdown__terminal_t update_arraytopdown__peg_adt_a(arraytopdown__peg_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t arraytopdown__peg_adt_a(arraytopdown__peg_adt_t ivar_1);

extern arraytopdown__peg_adt_t update_arraytopdown__peg_adt_e1(arraytopdown__peg_adt_t ivar_1, uint8_t ivar_7);

extern uint8_t arraytopdown__peg_adt_e1(arraytopdown__peg_adt_t ivar_1);

extern arraytopdown__peg_adt_t update_arraytopdown__peg_adt_e2(arraytopdown__peg_adt_t ivar_1, uint8_t ivar_7);

extern uint8_t arraytopdown__peg_adt_e2(arraytopdown__peg_adt_t ivar_1);

extern arraytopdown__peg_adt_t update_arraytopdown__peg_adt_e(arraytopdown__peg_adt_t ivar_1, uint8_t ivar_7);

extern uint8_t arraytopdown__peg_adt_e(arraytopdown__peg_adt_t ivar_1);

extern arraytopdown__peg_adt_t arraytopdown__epsilon(void);

extern arraytopdown__peg_adt_t arraytopdown__failure(void);

extern arraytopdown__peg_adt_t arraytopdown__any(arraytopdown_funtype_29_t ivar_2);

extern arraytopdown__peg_adt_t arraytopdown__terminal(uint8_t ivar_2);

extern arraytopdown__peg_adt_t arraytopdown__concat(uint8_t ivar_2, uint8_t ivar_3);

extern arraytopdown__peg_adt_t arraytopdown__choice(uint8_t ivar_2, uint8_t ivar_3);

extern arraytopdown__peg_adt_t arraytopdown__check(uint8_t ivar_2);

extern arraytopdown__peg_adt_t arraytopdown__neg(uint8_t ivar_2);

extern arraytopdown_funtype_36_t arraytopdown__peg_ord(void);

extern uint8_t arraytopdown__ord__2(arraytopdown__peg_adt_t ivar_2);

extern bool_t arraytopdown__subterm__2(arraytopdown__peg_adt_t ivar_1, arraytopdown__peg_adt_t ivar_2);

extern bool_t arraytopdown__doublelessp__2(arraytopdown__peg_adt_t ivar_1, arraytopdown__peg_adt_t ivar_2);

extern arraytopdown_funtype_37_t arraytopdown__reduce_nat__2(mpz_ptr_t ivar_10, mpz_ptr_t ivar_11, arraytopdown_funtype_38_t ivar_12, arraytopdown_funtype_39_t ivar_15, arraytopdown_funtype_41_t ivar_17, arraytopdown_funtype_41_t ivar_19, arraytopdown_funtype_39_t ivar_21, arraytopdown_funtype_39_t ivar_23);

extern arraytopdown_funtype_37_t arraytopdown__REDUCE_nat__2(arraytopdown_funtype_37_t ivar_12, arraytopdown_funtype_37_t ivar_14, arraytopdown_funtype_44_t ivar_16, arraytopdown_funtype_46_t ivar_19, arraytopdown_funtype_48_t ivar_21, arraytopdown_funtype_48_t ivar_23, arraytopdown_funtype_46_t ivar_25, arraytopdown_funtype_46_t ivar_27);

extern arraytopdown_funtype_50_t arraytopdown__reduce_ordinal__2(ordstruct_adt__ordstruct_adt_t ivar_10, ordstruct_adt__ordstruct_adt_t ivar_11, arraytopdown_funtype_51_t ivar_12, arraytopdown_funtype_52_t ivar_15, arraytopdown_funtype_53_t ivar_17, arraytopdown_funtype_53_t ivar_19, arraytopdown_funtype_52_t ivar_21, arraytopdown_funtype_52_t ivar_23);

extern arraytopdown_funtype_50_t arraytopdown__REDUCE_ordinal__2(arraytopdown_funtype_50_t ivar_12, arraytopdown_funtype_50_t ivar_14, arraytopdown_funtype_55_t ivar_16, arraytopdown_funtype_56_t ivar_19, arraytopdown_funtype_57_t ivar_21, arraytopdown_funtype_57_t ivar_23, arraytopdown_funtype_56_t ivar_25, arraytopdown_funtype_56_t ivar_27);

extern arraytopdown_funtype_59_t arraytopdown__good_good_entryp(uint32_t ivar_1, uint32_t ivar_2);

extern arraytopdown_funtype_59_t arraytopdown__good_push_entryp(uint32_t ivar_1);

extern arraytopdown_funtype_59_t arraytopdown__fine_push_entryp(uint32_t ivar_1);

extern arraytopdown_funtype_59_t arraytopdown__nice_entryp(uint32_t ivar_1, uint32_t ivar_2);

extern bool_t arraytopdown__loop_or_pushp(arraytopdown__ent_adt_t ivar_1);

extern arraytopdown_funtype_64_t arraytopdown__instack(uint32_t ivar_1, arraytopdown_array_66_t ivar_2);

extern arraytopdown_funtype_69_t arraytopdown__successor(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, arraytopdown_array_66_t ivar_3);

extern arraytopdown_funtype_72_t arraytopdown__sigma(uint32_t ivar_4, arraytopdown_array_73_t ivar_5);

extern uint64_t arraytopdown__scafcount(uint32_t ivar_4, arraytopdown_array_66_t ivar_5, arraytopdown_funtype_59_t ivar_7, uint32_t ivar_9);

extern uint64_t arraytopdown__pushcount(uint32_t ivar_3, arraytopdown_array_66_t ivar_4);

extern bool_t arraytopdown__good_or_failp(arraytopdown__ent_adt_t ivar_1);

extern uint64_t arraytopdown__gfcount(uint32_t ivar_3, arraytopdown_array_66_t ivar_4);

extern arraytopdown_funtype_80_t arraytopdown__good_depthp(uint32_t ivar_1, arraytopdown_array_66_t ivar_2);

extern arraytopdown_funtype_59_t arraytopdown__good_stackp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, uint64_t ivar_3, arraytopdown_array_66_t ivar_4);

extern arraytopdown_funtype_69_t arraytopdown__mem_stackp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, uint64_t ivar_3, arraytopdown_array_66_t ivar_4);

extern bool_t arraytopdown__push_or_pendingp(arraytopdown__ent_adt_t ivar_1);

extern arraytopdown_funtype_59_t arraytopdown__fine_stackp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, uint64_t ivar_3, arraytopdown_array_66_t ivar_4);

extern bool_t arraytopdown__loop_readyp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, arraytopdown_array_66_t ivar_3, uint32_t ivar_5, uint8_t ivar_6);

extern arraytopdown_funtype_86_t arraytopdown__good_failp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3);

extern arraytopdown_funtype_89_t arraytopdown__good_loopp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2);

extern arraytopdown_funtype_92_t arraytopdown__good_goodp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3);

extern arraytopdown_funtype_95_t arraytopdown__good_entryp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3);

extern arraytopdown_funtype_95_t arraytopdown__fine_entryp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3);

extern arraytopdown_funtype_98_t arraytopdown__good_tscaffoldp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3);

extern arraytopdown_funtype_64_t arraytopdown__good_rootp(uint32_t ivar_1, arraytopdown_array_66_t ivar_2);

extern arraytopdown_funtype_101_t arraytopdown__fine_scaffoldp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3);

extern bool_t arraytopdown__emptyp(arraytopdown__ent_adt_t ivar_1);

extern arraytopdown_funtype_105_t arraytopdown__step(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3, uint32_t ivar_4, uint8_t ivar_5);

extern arraytopdown_funtype_108_t arraytopdown__size(uint32_t ivar_5, arraytopdown__lang_spec_t ivar_6, bytestrings__bytestring_t ivar_7, uint32_t ivar_8, uint8_t ivar_9);

extern arraytopdown_funtype_105_t arraytopdown__parse(uint32_t ivar_7, arraytopdown__lang_spec_t ivar_8, bytestrings__bytestring_t ivar_9, uint32_t ivar_10, uint8_t ivar_11);

extern arraytopdown__ent_adt_t arraytopdown__doparse(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3, uint8_t ivar_4);
#endif