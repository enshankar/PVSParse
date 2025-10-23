//Code generated using pvs2ir
#ifndef _arraytopdowntest_h 
#define _arraytopdowntest_h

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

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "finite_sequences_c.h"

#include "real_defs_c.h"

#include "arraytopdown_c.h"

#include "arrayCount_c.h"

//cc -O3 -Wall -o arraytopdowntest -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/finite_sequences_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c arraytopdowntest_c.c arraytopdown_c.c arrayCount_c.c -lgmp 

struct arraytopdowntest_funtype_0_s;
        typedef struct arraytopdowntest_funtype_0_s * arraytopdowntest_funtype_0_t;

struct arraytopdowntest_funtype_0_ftbl_s {bool_t (* fptr)(struct arraytopdowntest_funtype_0_s *, uint8_t);
        bool_t (* mptr)(struct arraytopdowntest_funtype_0_s *, uint8_t);
        void (* rptr)(struct arraytopdowntest_funtype_0_s *);
        struct arraytopdowntest_funtype_0_s * (* cptr)(struct arraytopdowntest_funtype_0_s *);};
typedef struct arraytopdowntest_funtype_0_ftbl_s * arraytopdowntest_funtype_0_ftbl_t;

struct arraytopdowntest_funtype_0_hashentry_s {uint32_t keyhash; uint8_t key; bool_t value;}; 
typedef struct arraytopdowntest_funtype_0_hashentry_s arraytopdowntest_funtype_0_hashentry_t;

struct arraytopdowntest_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; arraytopdowntest_funtype_0_hashentry_t * data;}; 
typedef struct arraytopdowntest_funtype_0_htbl_s * arraytopdowntest_funtype_0_htbl_t;

struct arraytopdowntest_funtype_0_s {uint32_t count;
        arraytopdowntest_funtype_0_ftbl_t ftbl;
        arraytopdowntest_funtype_0_htbl_t htbl;};
typedef struct arraytopdowntest_funtype_0_s * arraytopdowntest_funtype_0_t;

extern void release_arraytopdowntest_funtype_0(arraytopdowntest_funtype_0_t x);

extern arraytopdowntest_funtype_0_t copy_arraytopdowntest_funtype_0(arraytopdowntest_funtype_0_t x);

uint32_t lookup_arraytopdowntest_funtype_0(arraytopdowntest_funtype_0_htbl_t htbl, uint8_t i, uint32_t ihash);

arraytopdowntest_funtype_0_t dupdate_arraytopdowntest_funtype_0(arraytopdowntest_funtype_0_t a, uint8_t i, bool_t v);

extern arraytopdowntest_funtype_0_t update_arraytopdowntest_funtype_0(arraytopdowntest_funtype_0_t a, uint8_t i, bool_t v);

extern bool_t equal_arraytopdowntest_funtype_0(arraytopdowntest_funtype_0_t x, arraytopdowntest_funtype_0_t y);




struct arraytopdowntest_closure_1_s;
        typedef struct arraytopdowntest_closure_1_s * arraytopdowntest_closure_1_t;

struct arraytopdowntest_closure_1_s {uint32_t count;
         arraytopdowntest_funtype_0_ftbl_t ftbl;
         arraytopdowntest_funtype_0_htbl_t htbl;};

bool_t f_arraytopdowntest_closure_1(struct arraytopdowntest_closure_1_s * closure, uint8_t bvar);

bool_t m_arraytopdowntest_closure_1(struct arraytopdowntest_closure_1_s * closure, uint8_t bvar);

extern bool_t h_arraytopdowntest_closure_1(uint8_t ivar_26);

extern arraytopdowntest_closure_1_t new_arraytopdowntest_closure_1(void);

extern void release_arraytopdowntest_closure_1(arraytopdowntest_funtype_0_t closure);

extern arraytopdowntest_closure_1_t copy_arraytopdowntest_closure_1(arraytopdowntest_closure_1_t x);




struct arraytopdowntest_closure_2_s;
        typedef struct arraytopdowntest_closure_2_s * arraytopdowntest_closure_2_t;

struct arraytopdowntest_closure_2_s {uint32_t count;
         arraytopdowntest_funtype_0_ftbl_t ftbl;
         arraytopdowntest_funtype_0_htbl_t htbl;};

bool_t f_arraytopdowntest_closure_2(struct arraytopdowntest_closure_2_s * closure, uint8_t bvar);

bool_t m_arraytopdowntest_closure_2(struct arraytopdowntest_closure_2_s * closure, uint8_t bvar);

extern bool_t h_arraytopdowntest_closure_2(uint8_t ivar_238);

extern arraytopdowntest_closure_2_t new_arraytopdowntest_closure_2(void);

extern void release_arraytopdowntest_closure_2(arraytopdowntest_funtype_0_t closure);

extern arraytopdowntest_closure_2_t copy_arraytopdowntest_closure_2(arraytopdowntest_closure_2_t x);




struct arraytopdowntest_closure_3_s;
        typedef struct arraytopdowntest_closure_3_s * arraytopdowntest_closure_3_t;

struct arraytopdowntest_closure_3_s {uint32_t count;
         arraytopdown__lang_spec_ftbl_t ftbl;
         arraytopdown__lang_spec_htbl_t htbl;};

arraytopdown__peg_adt_t f_arraytopdowntest_closure_3(struct arraytopdowntest_closure_3_s * closure, uint8_t bvar);

arraytopdown__peg_adt_t m_arraytopdowntest_closure_3(struct arraytopdowntest_closure_3_s * closure, uint8_t bvar);

extern arraytopdown__peg_adt_t h_arraytopdowntest_closure_3(uint8_t ivar_6);

extern arraytopdowntest_closure_3_t new_arraytopdowntest_closure_3(void);

extern void release_arraytopdowntest_closure_3(arraytopdown__lang_spec_t closure);

extern arraytopdowntest_closure_3_t copy_arraytopdowntest_closure_3(arraytopdowntest_closure_3_t x);




struct arraytopdowntest_closure_4_s;
        typedef struct arraytopdowntest_closure_4_s * arraytopdowntest_closure_4_t;

struct arraytopdowntest_closure_4_s {uint32_t count;
         arraytopdown__lang_spec_ftbl_t ftbl;
         arraytopdown__lang_spec_htbl_t htbl;};

arraytopdown__peg_adt_t f_arraytopdowntest_closure_4(struct arraytopdowntest_closure_4_s * closure, uint8_t bvar);

arraytopdown__peg_adt_t m_arraytopdowntest_closure_4(struct arraytopdowntest_closure_4_s * closure, uint8_t bvar);

extern arraytopdown__peg_adt_t h_arraytopdowntest_closure_4(uint8_t ivar_6);

extern arraytopdowntest_closure_4_t new_arraytopdowntest_closure_4(void);

extern void release_arraytopdowntest_closure_4(arraytopdown__lang_spec_t closure);

extern arraytopdowntest_closure_4_t copy_arraytopdowntest_closure_4(arraytopdowntest_closure_4_t x);




struct arraytopdowntest_closure_5_s;
        typedef struct arraytopdowntest_closure_5_s * arraytopdowntest_closure_5_t;

struct arraytopdowntest_closure_5_s {uint32_t count;
         arraytopdown__lang_spec_ftbl_t ftbl;
         arraytopdown__lang_spec_htbl_t htbl;};

arraytopdown__peg_adt_t f_arraytopdowntest_closure_5(struct arraytopdowntest_closure_5_s * closure, uint8_t bvar);

arraytopdown__peg_adt_t m_arraytopdowntest_closure_5(struct arraytopdowntest_closure_5_s * closure, uint8_t bvar);

extern arraytopdown__peg_adt_t h_arraytopdowntest_closure_5(uint8_t ivar_6);

extern arraytopdowntest_closure_5_t new_arraytopdowntest_closure_5(void);

extern void release_arraytopdowntest_closure_5(arraytopdown__lang_spec_t closure);

extern arraytopdowntest_closure_5_t copy_arraytopdowntest_closure_5(arraytopdowntest_closure_5_t x);




struct arraytopdowntest_closure_6_s;
        typedef struct arraytopdowntest_closure_6_s * arraytopdowntest_closure_6_t;

struct arraytopdowntest_closure_6_s {uint32_t count;
         arraytopdown__lang_spec_ftbl_t ftbl;
         arraytopdown__lang_spec_htbl_t htbl;};

arraytopdown__peg_adt_t f_arraytopdowntest_closure_6(struct arraytopdowntest_closure_6_s * closure, uint8_t bvar);

arraytopdown__peg_adt_t m_arraytopdowntest_closure_6(struct arraytopdowntest_closure_6_s * closure, uint8_t bvar);

extern arraytopdown__peg_adt_t h_arraytopdowntest_closure_6(uint8_t ivar_6);

extern arraytopdowntest_closure_6_t new_arraytopdowntest_closure_6(void);

extern void release_arraytopdowntest_closure_6(arraytopdown__lang_spec_t closure);

extern arraytopdowntest_closure_6_t copy_arraytopdowntest_closure_6(arraytopdowntest_closure_6_t x);



struct arraytopdowntest_funtype_7_s;
        typedef struct arraytopdowntest_funtype_7_s * arraytopdowntest_funtype_7_t;

struct arraytopdowntest_funtype_7_ftbl_s {arraytopdown__ent_adt_t (* fptr)(struct arraytopdowntest_funtype_7_s *, uint8_t);
        arraytopdown__ent_adt_t (* mptr)(struct arraytopdowntest_funtype_7_s *, uint8_t);
        void (* rptr)(struct arraytopdowntest_funtype_7_s *);
        struct arraytopdowntest_funtype_7_s * (* cptr)(struct arraytopdowntest_funtype_7_s *);};
typedef struct arraytopdowntest_funtype_7_ftbl_s * arraytopdowntest_funtype_7_ftbl_t;

struct arraytopdowntest_funtype_7_hashentry_s {uint32_t keyhash; uint8_t key; arraytopdown__ent_adt_t value;}; 
typedef struct arraytopdowntest_funtype_7_hashentry_s arraytopdowntest_funtype_7_hashentry_t;

struct arraytopdowntest_funtype_7_htbl_s {uint32_t size; uint32_t num_entries; arraytopdowntest_funtype_7_hashentry_t * data;}; 
typedef struct arraytopdowntest_funtype_7_htbl_s * arraytopdowntest_funtype_7_htbl_t;

struct arraytopdowntest_funtype_7_s {uint32_t count;
        arraytopdowntest_funtype_7_ftbl_t ftbl;
        arraytopdowntest_funtype_7_htbl_t htbl;};
typedef struct arraytopdowntest_funtype_7_s * arraytopdowntest_funtype_7_t;

extern void release_arraytopdowntest_funtype_7(arraytopdowntest_funtype_7_t x);

extern arraytopdowntest_funtype_7_t copy_arraytopdowntest_funtype_7(arraytopdowntest_funtype_7_t x);

uint32_t lookup_arraytopdowntest_funtype_7(arraytopdowntest_funtype_7_htbl_t htbl, uint8_t i, uint32_t ihash);

arraytopdowntest_funtype_7_t dupdate_arraytopdowntest_funtype_7(arraytopdowntest_funtype_7_t a, uint8_t i, arraytopdown__ent_adt_t v);

extern arraytopdowntest_funtype_7_t update_arraytopdowntest_funtype_7(arraytopdowntest_funtype_7_t a, uint8_t i, arraytopdown__ent_adt_t v);

extern bool_t equal_arraytopdowntest_funtype_7(arraytopdowntest_funtype_7_t x, arraytopdowntest_funtype_7_t y);




struct arraytopdowntest_closure_8_s;
        typedef struct arraytopdowntest_closure_8_s * arraytopdowntest_closure_8_t;

struct arraytopdowntest_closure_8_s {uint32_t count;
         arraytopdowntest_funtype_7_ftbl_t ftbl;
         arraytopdowntest_funtype_7_htbl_t htbl;};

arraytopdown__ent_adt_t f_arraytopdowntest_closure_8(struct arraytopdowntest_closure_8_s * closure, uint8_t bvar);

arraytopdown__ent_adt_t m_arraytopdowntest_closure_8(struct arraytopdowntest_closure_8_s * closure, uint8_t bvar);

extern arraytopdown__ent_adt_t h_arraytopdowntest_closure_8(uint8_t ivar_9);

extern arraytopdowntest_closure_8_t new_arraytopdowntest_closure_8(void);

extern void release_arraytopdowntest_closure_8(arraytopdowntest_funtype_7_t closure);

extern arraytopdowntest_closure_8_t copy_arraytopdowntest_closure_8(arraytopdowntest_closure_8_t x);



struct arraytopdowntest_funtype_9_s;
        typedef struct arraytopdowntest_funtype_9_s * arraytopdowntest_funtype_9_t;

struct arraytopdowntest_funtype_9_ftbl_s {arraytopdowntest_funtype_7_t (* fptr)(struct arraytopdowntest_funtype_9_s *, uint8_t);
        arraytopdowntest_funtype_7_t (* mptr)(struct arraytopdowntest_funtype_9_s *, uint8_t);
        void (* rptr)(struct arraytopdowntest_funtype_9_s *);
        struct arraytopdowntest_funtype_9_s * (* cptr)(struct arraytopdowntest_funtype_9_s *);};
typedef struct arraytopdowntest_funtype_9_ftbl_s * arraytopdowntest_funtype_9_ftbl_t;

struct arraytopdowntest_funtype_9_hashentry_s {uint32_t keyhash; uint8_t key; arraytopdowntest_funtype_7_t value;}; 
typedef struct arraytopdowntest_funtype_9_hashentry_s arraytopdowntest_funtype_9_hashentry_t;

struct arraytopdowntest_funtype_9_htbl_s {uint32_t size; uint32_t num_entries; arraytopdowntest_funtype_9_hashentry_t * data;}; 
typedef struct arraytopdowntest_funtype_9_htbl_s * arraytopdowntest_funtype_9_htbl_t;

struct arraytopdowntest_funtype_9_s {uint32_t count;
        arraytopdowntest_funtype_9_ftbl_t ftbl;
        arraytopdowntest_funtype_9_htbl_t htbl;};
typedef struct arraytopdowntest_funtype_9_s * arraytopdowntest_funtype_9_t;

extern void release_arraytopdowntest_funtype_9(arraytopdowntest_funtype_9_t x);

extern arraytopdowntest_funtype_9_t copy_arraytopdowntest_funtype_9(arraytopdowntest_funtype_9_t x);

uint32_t lookup_arraytopdowntest_funtype_9(arraytopdowntest_funtype_9_htbl_t htbl, uint8_t i, uint32_t ihash);

arraytopdowntest_funtype_9_t dupdate_arraytopdowntest_funtype_9(arraytopdowntest_funtype_9_t a, uint8_t i, arraytopdowntest_funtype_7_t v);

extern arraytopdowntest_funtype_9_t update_arraytopdowntest_funtype_9(arraytopdowntest_funtype_9_t a, uint8_t i, arraytopdowntest_funtype_7_t v);

extern bool_t equal_arraytopdowntest_funtype_9(arraytopdowntest_funtype_9_t x, arraytopdowntest_funtype_9_t y);



struct arraytopdowntest_record_10_s {
        uint32_t count; 
        uint8_t depth;
        bool_t lflag;
        arraytopdowntest_funtype_9_t scaf;
        arraytopdown__ent_adt_t stack;};
typedef struct arraytopdowntest_record_10_s * arraytopdowntest_record_10_t;

extern arraytopdowntest_record_10_t new_arraytopdowntest_record_10(void);

extern void release_arraytopdowntest_record_10(arraytopdowntest_record_10_t x);

extern arraytopdowntest_record_10_t copy_arraytopdowntest_record_10(arraytopdowntest_record_10_t x);

extern bool_t equal_arraytopdowntest_record_10(arraytopdowntest_record_10_t x, arraytopdowntest_record_10_t y);
typedef struct actual_arraytopdowntest_record_10_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdowntest_record_10_t;

void release_arraytopdowntest_record_10_ptr(pointer_t x, type_actual_t arraytopdowntest_record_10);
extern bool_t equal_arraytopdowntest_record_10_ptr(pointer_t x, pointer_t y, actual_arraytopdowntest_record_10_t T);

actual_arraytopdowntest_record_10_t actual_arraytopdowntest_record_10(void);

extern arraytopdowntest_record_10_t update_arraytopdowntest_record_10_depth(arraytopdowntest_record_10_t x, uint8_t v);

extern arraytopdowntest_record_10_t update_arraytopdowntest_record_10_lflag(arraytopdowntest_record_10_t x, bool_t v);

extern arraytopdowntest_record_10_t update_arraytopdowntest_record_10_scaf(arraytopdowntest_record_10_t x, arraytopdowntest_funtype_9_t v);

extern arraytopdowntest_record_10_t update_arraytopdowntest_record_10_stack(arraytopdowntest_record_10_t x, arraytopdown__ent_adt_t v);




struct arraytopdowntest_closure_11_s;
        typedef struct arraytopdowntest_closure_11_s * arraytopdowntest_closure_11_t;

struct arraytopdowntest_closure_11_s {uint32_t count;
         arraytopdowntest_funtype_9_ftbl_t ftbl;
         arraytopdowntest_funtype_9_htbl_t htbl;
        arraytopdowntest_funtype_7_t fvar_1;};

arraytopdowntest_funtype_7_t f_arraytopdowntest_closure_11(struct arraytopdowntest_closure_11_s * closure, uint8_t bvar);

arraytopdowntest_funtype_7_t m_arraytopdowntest_closure_11(struct arraytopdowntest_closure_11_s * closure, uint8_t bvar);

extern arraytopdowntest_funtype_7_t h_arraytopdowntest_closure_11(uint8_t ivar_20, arraytopdowntest_funtype_7_t ivar_6);

extern arraytopdowntest_closure_11_t new_arraytopdowntest_closure_11(void);

extern void release_arraytopdowntest_closure_11(arraytopdowntest_funtype_9_t closure);

extern arraytopdowntest_closure_11_t copy_arraytopdowntest_closure_11(arraytopdowntest_closure_11_t x);



struct arraytopdowntest_array_12_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         arraytopdowntest_funtype_7_t elems[]; };
typedef struct arraytopdowntest_array_12_s * arraytopdowntest_array_12_t;

extern arraytopdowntest_array_12_t new_arraytopdowntest_array_12(uint32_t size);

extern void release_arraytopdowntest_array_12(arraytopdowntest_array_12_t x);

extern arraytopdowntest_array_12_t copy_arraytopdowntest_array_12(arraytopdowntest_array_12_t x);

extern bool_t equal_arraytopdowntest_array_12(arraytopdowntest_array_12_t x, arraytopdowntest_array_12_t y);
typedef struct actual_arraytopdowntest_array_12_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdowntest_array_12_t;

void release_arraytopdowntest_array_12_ptr(pointer_t x, type_actual_t arraytopdowntest_array_12);
extern bool_t equal_arraytopdowntest_array_12_ptr(pointer_t x, pointer_t y, type_actual_t T);

actual_arraytopdowntest_array_12_t actual_arraytopdowntest_array_12(void);

extern arraytopdowntest_array_12_t update_arraytopdowntest_array_12(arraytopdowntest_array_12_t x, uint32_t i, arraytopdowntest_funtype_7_t v);

extern arraytopdowntest_array_12_t upgrade_arraytopdowntest_array_12(arraytopdowntest_array_12_t x, uint32_t i, arraytopdowntest_funtype_7_t v);



struct arraytopdowntest_record_13_s {
        uint32_t count; 
        arraytopdowntest_array_12_t scaf;
        uint64_t depth;
        arraytopdown__ent_adt_t stack;
        bool_t lflag;};
typedef struct arraytopdowntest_record_13_s * arraytopdowntest_record_13_t;

extern arraytopdowntest_record_13_t new_arraytopdowntest_record_13(void);

extern void release_arraytopdowntest_record_13(arraytopdowntest_record_13_t x);

extern arraytopdowntest_record_13_t copy_arraytopdowntest_record_13(arraytopdowntest_record_13_t x);

extern bool_t equal_arraytopdowntest_record_13(arraytopdowntest_record_13_t x, arraytopdowntest_record_13_t y);
typedef struct actual_arraytopdowntest_record_13_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_arraytopdowntest_record_13_t;

void release_arraytopdowntest_record_13_ptr(pointer_t x, type_actual_t arraytopdowntest_record_13);
extern bool_t equal_arraytopdowntest_record_13_ptr(pointer_t x, pointer_t y, actual_arraytopdowntest_record_13_t T);

actual_arraytopdowntest_record_13_t actual_arraytopdowntest_record_13(void);

extern arraytopdowntest_record_13_t update_arraytopdowntest_record_13_scaf(arraytopdowntest_record_13_t x, arraytopdowntest_array_12_t v);

extern arraytopdowntest_record_13_t update_arraytopdowntest_record_13_depth(arraytopdowntest_record_13_t x, uint64_t v);

extern arraytopdowntest_record_13_t update_arraytopdowntest_record_13_stack(arraytopdowntest_record_13_t x, arraytopdown__ent_adt_t v);

extern arraytopdowntest_record_13_t update_arraytopdowntest_record_13_lflag(arraytopdowntest_record_13_t x, bool_t v);



struct arraytopdowntest_funtype_14_s;
        typedef struct arraytopdowntest_funtype_14_s * arraytopdowntest_funtype_14_t;

struct arraytopdowntest_funtype_14_ftbl_s {arraytopdowntest_record_13_t (* fptr)(struct arraytopdowntest_funtype_14_s *, arraytopdowntest_record_13_t);
        arraytopdowntest_record_13_t (* mptr)(struct arraytopdowntest_funtype_14_s *, arraytopdowntest_record_13_t);
        void (* rptr)(struct arraytopdowntest_funtype_14_s *);
        struct arraytopdowntest_funtype_14_s * (* cptr)(struct arraytopdowntest_funtype_14_s *);};
typedef struct arraytopdowntest_funtype_14_ftbl_s * arraytopdowntest_funtype_14_ftbl_t;

struct arraytopdowntest_funtype_14_hashentry_s {uint32_t keyhash; arraytopdowntest_record_13_t key; arraytopdowntest_record_13_t value;}; 
typedef struct arraytopdowntest_funtype_14_hashentry_s arraytopdowntest_funtype_14_hashentry_t;

struct arraytopdowntest_funtype_14_htbl_s {uint32_t size; uint32_t num_entries; arraytopdowntest_funtype_14_hashentry_t * data;}; 
typedef struct arraytopdowntest_funtype_14_htbl_s * arraytopdowntest_funtype_14_htbl_t;

struct arraytopdowntest_funtype_14_s {uint32_t count;
        arraytopdowntest_funtype_14_ftbl_t ftbl;
        arraytopdowntest_funtype_14_htbl_t htbl;};
typedef struct arraytopdowntest_funtype_14_s * arraytopdowntest_funtype_14_t;

extern void release_arraytopdowntest_funtype_14(arraytopdowntest_funtype_14_t x);

extern arraytopdowntest_funtype_14_t copy_arraytopdowntest_funtype_14(arraytopdowntest_funtype_14_t x);

extern bool_t equal_arraytopdowntest_funtype_14(arraytopdowntest_funtype_14_t x, arraytopdowntest_funtype_14_t y);



extern bool_t arraytopdowntest__digit(uint8_t ivar_1);

extern bool_t arraytopdowntest__any(uint8_t ivar_1);

extern arraytopdown__peg_adt_t arraytopdowntest__pyaml(uint8_t ivar_1);

extern bytestrings__bytestring_t arraytopdowntest__empty(uint8_t ivar_2);

extern bytestrings__bytestring_t arraytopdowntest__tok0(void);

extern bytestrings__bytestring_t arraytopdowntest__tok1(void);

extern bytestrings__bytestring_t arraytopdowntest__emptydict(void);

extern bytestrings__bytestring_t arraytopdowntest__obrace(void);

extern bytestrings__bytestring_t arraytopdowntest__cbrace(void);

extern bytestrings__bytestring_t arraytopdowntest__colon(void);

extern bytestrings__bytestring_t arraytopdowntest__emptydict2(void);

extern bytestrings__bytestring_t arraytopdowntest__dict1(void);

extern arraytopdown__ent_adt_t arraytopdowntest__test0(void);

extern arraytopdown__ent_adt_t arraytopdowntest__test1(void);

extern arraytopdown__ent_adt_t arraytopdowntest__test11(void);

extern arraytopdown__ent_adt_t arraytopdowntest__test2(void);

extern arraytopdown__ent_adt_t arraytopdowntest__iparse(uint8_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3, uint8_t ivar_4, uint8_t ivar_5);
#endif