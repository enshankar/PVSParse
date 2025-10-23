//Code generated using pvs2ir
#ifndef _ltepegtest_h 
#define _ltepegtest_h

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

#include "file_c.h"

#include "bytestrings_c.h"

#include "gen_strings_c.h"

#include "strings_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "ltepegproof_c.h"

#include "ltepeg_c.h"

#include "arrayCount_c.h"

#include "identity_uint8_c.h"

//cc -O3 -Wall -o ltepegtest -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/lex2_c.c /Users/e21660/shankar/pvs.git/lib/sets_c.c /Users/e21660/shankar/pvs.git/lib/identity_c.c /Users/e21660/shankar/pvs.git/lib/file_c.c /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c ltepegtest_c.c ltepegproof_c.c ltepeg_c.c arrayCount_c.c identity_uint8_c.c -lgmp 
//ljson

struct ltepegtest_funtype_0_s;
        typedef struct ltepegtest_funtype_0_s * ltepegtest_funtype_0_t;

struct ltepegtest_funtype_0_ftbl_s {bool_t (* fptr)(struct ltepegtest_funtype_0_s *, uint8_t);
        bool_t (* mptr)(struct ltepegtest_funtype_0_s *, uint8_t);
        void (* rptr)(struct ltepegtest_funtype_0_s *);
        struct ltepegtest_funtype_0_s * (* cptr)(struct ltepegtest_funtype_0_s *);};
typedef struct ltepegtest_funtype_0_ftbl_s * ltepegtest_funtype_0_ftbl_t;

struct ltepegtest_funtype_0_hashentry_s {uint32_t keyhash; uint8_t key; bool_t value;}; 
typedef struct ltepegtest_funtype_0_hashentry_s ltepegtest_funtype_0_hashentry_t;

struct ltepegtest_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; ltepegtest_funtype_0_hashentry_t * data;}; 
typedef struct ltepegtest_funtype_0_htbl_s * ltepegtest_funtype_0_htbl_t;

struct ltepegtest_funtype_0_s {uint32_t count;
        ltepegtest_funtype_0_ftbl_t ftbl;
        ltepegtest_funtype_0_htbl_t htbl;};
typedef struct ltepegtest_funtype_0_s * ltepegtest_funtype_0_t;

extern void release_ltepegtest_funtype_0(ltepegtest_funtype_0_t x);

extern ltepegtest_funtype_0_t copy_ltepegtest_funtype_0(ltepegtest_funtype_0_t x);

uint32_t lookup_ltepegtest_funtype_0(ltepegtest_funtype_0_htbl_t htbl, uint8_t i, uint32_t ihash);

ltepegtest_funtype_0_t dupdate_ltepegtest_funtype_0(ltepegtest_funtype_0_t a, uint8_t i, bool_t v);

extern ltepegtest_funtype_0_t update_ltepegtest_funtype_0(ltepegtest_funtype_0_t a, uint8_t i, bool_t v);

extern bool_t equal_ltepegtest_funtype_0(ltepegtest_funtype_0_t x, ltepegtest_funtype_0_t y);

extern char* json_ltepegtest_funtype_0(ltepegtest_funtype_0_t x);




struct ltepegtest_closure_1_s;
        typedef struct ltepegtest_closure_1_s * ltepegtest_closure_1_t;

struct ltepegtest_closure_1_s {uint32_t count;
         ltepegtest_funtype_0_ftbl_t ftbl;
         ltepegtest_funtype_0_htbl_t htbl;};

bool_t f_ltepegtest_closure_1(struct ltepegtest_closure_1_s * closure, uint8_t bvar);

bool_t m_ltepegtest_closure_1(struct ltepegtest_closure_1_s * closure, uint8_t bvar);

extern bool_t h_ltepegtest_closure_1(uint8_t ivar_195);

extern ltepegtest_closure_1_t new_ltepegtest_closure_1(void);

extern void release_ltepegtest_closure_1(ltepegtest_funtype_0_t closure);

extern ltepegtest_closure_1_t copy_ltepegtest_closure_1(ltepegtest_closure_1_t x);




struct ltepegtest_closure_2_s;
        typedef struct ltepegtest_closure_2_s * ltepegtest_closure_2_t;

struct ltepegtest_closure_2_s {uint32_t count;
         ltepegtest_funtype_0_ftbl_t ftbl;
         ltepegtest_funtype_0_htbl_t htbl;};

bool_t f_ltepegtest_closure_2(struct ltepegtest_closure_2_s * closure, uint8_t bvar);

bool_t m_ltepegtest_closure_2(struct ltepegtest_closure_2_s * closure, uint8_t bvar);

extern bool_t h_ltepegtest_closure_2(uint8_t ivar_207);

extern ltepegtest_closure_2_t new_ltepegtest_closure_2(void);

extern void release_ltepegtest_closure_2(ltepegtest_funtype_0_t closure);

extern ltepegtest_closure_2_t copy_ltepegtest_closure_2(ltepegtest_closure_2_t x);




struct ltepegtest_closure_3_s;
        typedef struct ltepegtest_closure_3_s * ltepegtest_closure_3_t;

struct ltepegtest_closure_3_s {uint32_t count;
         ltepegtest_funtype_0_ftbl_t ftbl;
         ltepegtest_funtype_0_htbl_t htbl;};

bool_t f_ltepegtest_closure_3(struct ltepegtest_closure_3_s * closure, uint8_t bvar);

bool_t m_ltepegtest_closure_3(struct ltepegtest_closure_3_s * closure, uint8_t bvar);

extern bool_t h_ltepegtest_closure_3(uint8_t ivar_219);

extern ltepegtest_closure_3_t new_ltepegtest_closure_3(void);

extern void release_ltepegtest_closure_3(ltepegtest_funtype_0_t closure);

extern ltepegtest_closure_3_t copy_ltepegtest_closure_3(ltepegtest_closure_3_t x);


//empty

struct ltepegtest_array_4_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct ltepegtest_array_4_s * ltepegtest_array_4_t;

extern ltepegtest_array_4_t new_ltepegtest_array_4(uint32_t size);

extern void release_ltepegtest_array_4(ltepegtest_array_4_t x);

extern ltepegtest_array_4_t copy_ltepegtest_array_4(ltepegtest_array_4_t x);

extern bool_t equal_ltepegtest_array_4(ltepegtest_array_4_t x, ltepegtest_array_4_t y);
extern char * json_ltepegtest_array_4(ltepegtest_array_4_t x);

typedef struct actual_ltepegtest_array_4_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegtest_array_4_t;
void release_ltepegtest_array_4_ptr(pointer_t x, type_actual_t ltepegtest_array_4);

extern bool_t equal_ltepegtest_array_4_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltepegtest_array_4_ptr(pointer_t x, type_actual_t T);

actual_ltepegtest_array_4_t actual_ltepegtest_array_4(void);

extern ltepegtest_array_4_t update_ltepegtest_array_4(ltepegtest_array_4_t x, uint32_t i, uint8_t v);

extern ltepegtest_array_4_t upgrade_ltepegtest_array_4(ltepegtest_array_4_t x, uint32_t i, uint8_t v);


//cat

struct ltepegtest_record_5_s {
        uint32_t count; 
        ltepegtest_array_4_t project_1;
        ltepegtest_array_4_t project_2;};
typedef struct ltepegtest_record_5_s * ltepegtest_record_5_t;

extern ltepegtest_record_5_t new_ltepegtest_record_5(void);

extern void release_ltepegtest_record_5(ltepegtest_record_5_t x);

extern ltepegtest_record_5_t copy_ltepegtest_record_5(ltepegtest_record_5_t x);

extern bool_t equal_ltepegtest_record_5(ltepegtest_record_5_t x, ltepegtest_record_5_t y);
extern char * json_ltepegtest_record_5(ltepegtest_record_5_t x);

typedef struct actual_ltepegtest_record_5_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegtest_record_5_t;
void release_ltepegtest_record_5_ptr(pointer_t x, type_actual_t ltepegtest_record_5);

extern bool_t equal_ltepegtest_record_5_ptr(pointer_t x, pointer_t y, actual_ltepegtest_record_5_t T);

extern char * json_ltepegtest_record_5_ptr(pointer_t x,  actual_ltepegtest_record_5_t T);

actual_ltepegtest_record_5_t actual_ltepegtest_record_5(void);

extern ltepegtest_record_5_t update_ltepegtest_record_5_project_1(ltepegtest_record_5_t x, ltepegtest_array_4_t v);

extern ltepegtest_record_5_t update_ltepegtest_record_5_project_2(ltepegtest_record_5_t x, ltepegtest_array_4_t v);


//cat

struct ltepegtest_funtype_6_s;
        typedef struct ltepegtest_funtype_6_s * ltepegtest_funtype_6_t;

struct ltepegtest_funtype_6_ftbl_s {ltepegtest_array_4_t (* fptr)(struct ltepegtest_funtype_6_s *, ltepegtest_record_5_t);
        ltepegtest_array_4_t (* mptr)(struct ltepegtest_funtype_6_s *, ltepegtest_array_4_t, ltepegtest_array_4_t);
        void (* rptr)(struct ltepegtest_funtype_6_s *);
        struct ltepegtest_funtype_6_s * (* cptr)(struct ltepegtest_funtype_6_s *);};
typedef struct ltepegtest_funtype_6_ftbl_s * ltepegtest_funtype_6_ftbl_t;

struct ltepegtest_funtype_6_hashentry_s {uint32_t keyhash; ltepegtest_record_5_t key; ltepegtest_array_4_t value;}; 
typedef struct ltepegtest_funtype_6_hashentry_s ltepegtest_funtype_6_hashentry_t;

struct ltepegtest_funtype_6_htbl_s {uint32_t size; uint32_t num_entries; ltepegtest_funtype_6_hashentry_t * data;}; 
typedef struct ltepegtest_funtype_6_htbl_s * ltepegtest_funtype_6_htbl_t;

struct ltepegtest_funtype_6_s {uint32_t count;
        ltepegtest_funtype_6_ftbl_t ftbl;
        ltepegtest_funtype_6_htbl_t htbl;};
typedef struct ltepegtest_funtype_6_s * ltepegtest_funtype_6_t;

extern void release_ltepegtest_funtype_6(ltepegtest_funtype_6_t x);

extern ltepegtest_funtype_6_t copy_ltepegtest_funtype_6(ltepegtest_funtype_6_t x);

extern bool_t equal_ltepegtest_funtype_6(ltepegtest_funtype_6_t x, ltepegtest_funtype_6_t y);

extern char* json_ltepegtest_funtype_6(ltepegtest_funtype_6_t x);




struct ltepegtest_closure_7_s;
        typedef struct ltepegtest_closure_7_s * ltepegtest_closure_7_t;

struct ltepegtest_closure_7_s {uint32_t count;
         ltepegtest_funtype_6_ftbl_t ftbl;
         ltepegtest_funtype_6_htbl_t htbl;
        uint8_t fvar_1;
        uint8_t fvar_2;};

ltepegtest_array_4_t f_ltepegtest_closure_7(struct ltepegtest_closure_7_s * closure, ltepegtest_record_5_t bvar);

ltepegtest_array_4_t m_ltepegtest_closure_7(struct ltepegtest_closure_7_s * closure, ltepegtest_array_4_t bvar_1, ltepegtest_array_4_t bvar_2);

extern ltepegtest_array_4_t h_ltepegtest_closure_7(ltepegtest_array_4_t ivar_26, ltepegtest_array_4_t ivar_27, uint8_t ivar_1, uint8_t ivar_2);

extern ltepegtest_closure_7_t new_ltepegtest_closure_7(void);

extern void release_ltepegtest_closure_7(ltepegtest_funtype_6_t closure);

extern ltepegtest_closure_7_t copy_ltepegtest_closure_7(ltepegtest_closure_7_t x);


//iparse

struct ltepegtest_funtype_8_s;
        typedef struct ltepegtest_funtype_8_s * ltepegtest_funtype_8_t;

struct ltepegtest_funtype_8_ftbl_s {ltepeg__ent_adt_t (* fptr)(struct ltepegtest_funtype_8_s *, uint8_t);
        ltepeg__ent_adt_t (* mptr)(struct ltepegtest_funtype_8_s *, uint8_t);
        void (* rptr)(struct ltepegtest_funtype_8_s *);
        struct ltepegtest_funtype_8_s * (* cptr)(struct ltepegtest_funtype_8_s *);};
typedef struct ltepegtest_funtype_8_ftbl_s * ltepegtest_funtype_8_ftbl_t;

struct ltepegtest_funtype_8_hashentry_s {uint32_t keyhash; uint8_t key; ltepeg__ent_adt_t value;}; 
typedef struct ltepegtest_funtype_8_hashentry_s ltepegtest_funtype_8_hashentry_t;

struct ltepegtest_funtype_8_htbl_s {uint32_t size; uint32_t num_entries; ltepegtest_funtype_8_hashentry_t * data;}; 
typedef struct ltepegtest_funtype_8_htbl_s * ltepegtest_funtype_8_htbl_t;

struct ltepegtest_funtype_8_s {uint32_t count;
        ltepegtest_funtype_8_ftbl_t ftbl;
        ltepegtest_funtype_8_htbl_t htbl;};
typedef struct ltepegtest_funtype_8_s * ltepegtest_funtype_8_t;

extern void release_ltepegtest_funtype_8(ltepegtest_funtype_8_t x);

extern ltepegtest_funtype_8_t copy_ltepegtest_funtype_8(ltepegtest_funtype_8_t x);

uint32_t lookup_ltepegtest_funtype_8(ltepegtest_funtype_8_htbl_t htbl, uint8_t i, uint32_t ihash);

ltepegtest_funtype_8_t dupdate_ltepegtest_funtype_8(ltepegtest_funtype_8_t a, uint8_t i, ltepeg__ent_adt_t v);

extern ltepegtest_funtype_8_t update_ltepegtest_funtype_8(ltepegtest_funtype_8_t a, uint8_t i, ltepeg__ent_adt_t v);

extern bool_t equal_ltepegtest_funtype_8(ltepegtest_funtype_8_t x, ltepegtest_funtype_8_t y);

extern char* json_ltepegtest_funtype_8(ltepegtest_funtype_8_t x);




struct ltepegtest_closure_9_s;
        typedef struct ltepegtest_closure_9_s * ltepegtest_closure_9_t;

struct ltepegtest_closure_9_s {uint32_t count;
         ltepegtest_funtype_8_ftbl_t ftbl;
         ltepegtest_funtype_8_htbl_t htbl;};

ltepeg__ent_adt_t f_ltepegtest_closure_9(struct ltepegtest_closure_9_s * closure, uint8_t bvar);

ltepeg__ent_adt_t m_ltepegtest_closure_9(struct ltepegtest_closure_9_s * closure, uint8_t bvar);

extern ltepeg__ent_adt_t h_ltepegtest_closure_9(uint8_t ivar_10);

extern ltepegtest_closure_9_t new_ltepegtest_closure_9(void);

extern void release_ltepegtest_closure_9(ltepegtest_funtype_8_t closure);

extern ltepegtest_closure_9_t copy_ltepegtest_closure_9(ltepegtest_closure_9_t x);


//iparse

struct ltepegtest_funtype_10_s;
        typedef struct ltepegtest_funtype_10_s * ltepegtest_funtype_10_t;

struct ltepegtest_funtype_10_ftbl_s {ltepegtest_funtype_8_t (* fptr)(struct ltepegtest_funtype_10_s *, uint8_t);
        ltepegtest_funtype_8_t (* mptr)(struct ltepegtest_funtype_10_s *, uint8_t);
        void (* rptr)(struct ltepegtest_funtype_10_s *);
        struct ltepegtest_funtype_10_s * (* cptr)(struct ltepegtest_funtype_10_s *);};
typedef struct ltepegtest_funtype_10_ftbl_s * ltepegtest_funtype_10_ftbl_t;

struct ltepegtest_funtype_10_hashentry_s {uint32_t keyhash; uint8_t key; ltepegtest_funtype_8_t value;}; 
typedef struct ltepegtest_funtype_10_hashentry_s ltepegtest_funtype_10_hashentry_t;

struct ltepegtest_funtype_10_htbl_s {uint32_t size; uint32_t num_entries; ltepegtest_funtype_10_hashentry_t * data;}; 
typedef struct ltepegtest_funtype_10_htbl_s * ltepegtest_funtype_10_htbl_t;

struct ltepegtest_funtype_10_s {uint32_t count;
        ltepegtest_funtype_10_ftbl_t ftbl;
        ltepegtest_funtype_10_htbl_t htbl;};
typedef struct ltepegtest_funtype_10_s * ltepegtest_funtype_10_t;

extern void release_ltepegtest_funtype_10(ltepegtest_funtype_10_t x);

extern ltepegtest_funtype_10_t copy_ltepegtest_funtype_10(ltepegtest_funtype_10_t x);

uint32_t lookup_ltepegtest_funtype_10(ltepegtest_funtype_10_htbl_t htbl, uint8_t i, uint32_t ihash);

ltepegtest_funtype_10_t dupdate_ltepegtest_funtype_10(ltepegtest_funtype_10_t a, uint8_t i, ltepegtest_funtype_8_t v);

extern ltepegtest_funtype_10_t update_ltepegtest_funtype_10(ltepegtest_funtype_10_t a, uint8_t i, ltepegtest_funtype_8_t v);

extern bool_t equal_ltepegtest_funtype_10(ltepegtest_funtype_10_t x, ltepegtest_funtype_10_t y);

extern char* json_ltepegtest_funtype_10(ltepegtest_funtype_10_t x);


//iparse

struct ltepegtest_record_11_s {
        uint32_t count; 
        uint8_t depth;
        bool_t lflag;
        ltepegtest_funtype_10_t scaf;
        ltepeg__ent_adt_t stack;};
typedef struct ltepegtest_record_11_s * ltepegtest_record_11_t;

extern ltepegtest_record_11_t new_ltepegtest_record_11(void);

extern void release_ltepegtest_record_11(ltepegtest_record_11_t x);

extern ltepegtest_record_11_t copy_ltepegtest_record_11(ltepegtest_record_11_t x);

extern bool_t equal_ltepegtest_record_11(ltepegtest_record_11_t x, ltepegtest_record_11_t y);
extern char * json_ltepegtest_record_11(ltepegtest_record_11_t x);

typedef struct actual_ltepegtest_record_11_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegtest_record_11_t;
void release_ltepegtest_record_11_ptr(pointer_t x, type_actual_t ltepegtest_record_11);

extern bool_t equal_ltepegtest_record_11_ptr(pointer_t x, pointer_t y, actual_ltepegtest_record_11_t T);

extern char * json_ltepegtest_record_11_ptr(pointer_t x,  actual_ltepegtest_record_11_t T);

actual_ltepegtest_record_11_t actual_ltepegtest_record_11(void);

extern ltepegtest_record_11_t update_ltepegtest_record_11_depth(ltepegtest_record_11_t x, uint8_t v);

extern ltepegtest_record_11_t update_ltepegtest_record_11_lflag(ltepegtest_record_11_t x, bool_t v);

extern ltepegtest_record_11_t update_ltepegtest_record_11_scaf(ltepegtest_record_11_t x, ltepegtest_funtype_10_t v);

extern ltepegtest_record_11_t update_ltepegtest_record_11_stack(ltepegtest_record_11_t x, ltepeg__ent_adt_t v);




struct ltepegtest_closure_12_s;
        typedef struct ltepegtest_closure_12_s * ltepegtest_closure_12_t;

struct ltepegtest_closure_12_s {uint32_t count;
         ltepegtest_funtype_10_ftbl_t ftbl;
         ltepegtest_funtype_10_htbl_t htbl;
        uint8_t fvar_1;
        ltepegtest_funtype_8_t fvar_2;};

ltepegtest_funtype_8_t f_ltepegtest_closure_12(struct ltepegtest_closure_12_s * closure, uint8_t bvar);

ltepegtest_funtype_8_t m_ltepegtest_closure_12(struct ltepegtest_closure_12_s * closure, uint8_t bvar);

extern ltepegtest_funtype_8_t h_ltepegtest_closure_12(uint8_t ivar_23, uint8_t ivar_1, ltepegtest_funtype_8_t ivar_6);

extern ltepegtest_closure_12_t new_ltepegtest_closure_12(void);

extern void release_ltepegtest_closure_12(ltepegtest_funtype_10_t closure);

extern ltepegtest_closure_12_t copy_ltepegtest_closure_12(ltepegtest_closure_12_t x);


//iparse

struct ltepegtest_array_13_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltepeg__ent_adt_t elems[]; };
typedef struct ltepegtest_array_13_s * ltepegtest_array_13_t;

extern ltepegtest_array_13_t new_ltepegtest_array_13(uint32_t size);

extern void release_ltepegtest_array_13(ltepegtest_array_13_t x);

extern ltepegtest_array_13_t copy_ltepegtest_array_13(ltepegtest_array_13_t x);

extern bool_t equal_ltepegtest_array_13(ltepegtest_array_13_t x, ltepegtest_array_13_t y);
extern char * json_ltepegtest_array_13(ltepegtest_array_13_t x);

typedef struct actual_ltepegtest_array_13_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegtest_array_13_t;
void release_ltepegtest_array_13_ptr(pointer_t x, type_actual_t ltepegtest_array_13);

extern bool_t equal_ltepegtest_array_13_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltepegtest_array_13_ptr(pointer_t x, type_actual_t T);

actual_ltepegtest_array_13_t actual_ltepegtest_array_13(void);

extern ltepegtest_array_13_t update_ltepegtest_array_13(ltepegtest_array_13_t x, uint32_t i, ltepeg__ent_adt_t v);

extern ltepegtest_array_13_t upgrade_ltepegtest_array_13(ltepegtest_array_13_t x, uint32_t i, ltepeg__ent_adt_t v);


//iparse

struct ltepegtest_array_14_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltepegtest_array_13_t elems[]; };
typedef struct ltepegtest_array_14_s * ltepegtest_array_14_t;

extern ltepegtest_array_14_t new_ltepegtest_array_14(uint32_t size);

extern void release_ltepegtest_array_14(ltepegtest_array_14_t x);

extern ltepegtest_array_14_t copy_ltepegtest_array_14(ltepegtest_array_14_t x);

extern bool_t equal_ltepegtest_array_14(ltepegtest_array_14_t x, ltepegtest_array_14_t y);
extern char * json_ltepegtest_array_14(ltepegtest_array_14_t x);

typedef struct actual_ltepegtest_array_14_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegtest_array_14_t;
void release_ltepegtest_array_14_ptr(pointer_t x, type_actual_t ltepegtest_array_14);

extern bool_t equal_ltepegtest_array_14_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltepegtest_array_14_ptr(pointer_t x, type_actual_t T);

actual_ltepegtest_array_14_t actual_ltepegtest_array_14(void);

extern ltepegtest_array_14_t update_ltepegtest_array_14(ltepegtest_array_14_t x, uint32_t i, ltepegtest_array_13_t v);

extern ltepegtest_array_14_t upgrade_ltepegtest_array_14(ltepegtest_array_14_t x, uint32_t i, ltepegtest_array_13_t v);


//iparse

struct ltepegtest_record_15_s {
        uint32_t count; 
        ltepegtest_array_14_t scaf;
        uint64_t depth;
        ltepeg__ent_adt_t stack;
        bool_t lflag;};
typedef struct ltepegtest_record_15_s * ltepegtest_record_15_t;

extern ltepegtest_record_15_t new_ltepegtest_record_15(void);

extern void release_ltepegtest_record_15(ltepegtest_record_15_t x);

extern ltepegtest_record_15_t copy_ltepegtest_record_15(ltepegtest_record_15_t x);

extern bool_t equal_ltepegtest_record_15(ltepegtest_record_15_t x, ltepegtest_record_15_t y);
extern char * json_ltepegtest_record_15(ltepegtest_record_15_t x);

typedef struct actual_ltepegtest_record_15_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegtest_record_15_t;
void release_ltepegtest_record_15_ptr(pointer_t x, type_actual_t ltepegtest_record_15);

extern bool_t equal_ltepegtest_record_15_ptr(pointer_t x, pointer_t y, actual_ltepegtest_record_15_t T);

extern char * json_ltepegtest_record_15_ptr(pointer_t x,  actual_ltepegtest_record_15_t T);

actual_ltepegtest_record_15_t actual_ltepegtest_record_15(void);

extern ltepegtest_record_15_t update_ltepegtest_record_15_scaf(ltepegtest_record_15_t x, ltepegtest_array_14_t v);

extern ltepegtest_record_15_t update_ltepegtest_record_15_depth(ltepegtest_record_15_t x, uint64_t v);

extern ltepegtest_record_15_t update_ltepegtest_record_15_stack(ltepegtest_record_15_t x, ltepeg__ent_adt_t v);

extern ltepegtest_record_15_t update_ltepegtest_record_15_lflag(ltepegtest_record_15_t x, bool_t v);




struct ltepegtest_closure_16_s;
        typedef struct ltepegtest_closure_16_s * ltepegtest_closure_16_t;

struct ltepegtest_closure_16_s {uint32_t count;
         ltepegtest_funtype_8_ftbl_t ftbl;
         ltepegtest_funtype_8_htbl_t htbl;};

ltepeg__ent_adt_t f_ltepegtest_closure_16(struct ltepegtest_closure_16_s * closure, uint8_t bvar);

ltepeg__ent_adt_t m_ltepegtest_closure_16(struct ltepegtest_closure_16_s * closure, uint8_t bvar);

extern ltepeg__ent_adt_t h_ltepegtest_closure_16(uint8_t ivar_41);

extern ltepegtest_closure_16_t new_ltepegtest_closure_16(void);

extern void release_ltepegtest_closure_16(ltepegtest_funtype_8_t closure);

extern ltepegtest_closure_16_t copy_ltepegtest_closure_16(ltepegtest_closure_16_t x);


//jsonparsefile

struct ltepegtest_funtype_17_s;
        typedef struct ltepegtest_funtype_17_s * ltepegtest_funtype_17_t;

struct ltepegtest_funtype_17_ftbl_s {ltepegtest_funtype_8_t (* fptr)(struct ltepegtest_funtype_17_s *, uint32_t);
        ltepegtest_funtype_8_t (* mptr)(struct ltepegtest_funtype_17_s *, uint32_t);
        void (* rptr)(struct ltepegtest_funtype_17_s *);
        struct ltepegtest_funtype_17_s * (* cptr)(struct ltepegtest_funtype_17_s *);};
typedef struct ltepegtest_funtype_17_ftbl_s * ltepegtest_funtype_17_ftbl_t;

struct ltepegtest_funtype_17_hashentry_s {uint32_t keyhash; uint32_t key; ltepegtest_funtype_8_t value;}; 
typedef struct ltepegtest_funtype_17_hashentry_s ltepegtest_funtype_17_hashentry_t;

struct ltepegtest_funtype_17_htbl_s {uint32_t size; uint32_t num_entries; ltepegtest_funtype_17_hashentry_t * data;}; 
typedef struct ltepegtest_funtype_17_htbl_s * ltepegtest_funtype_17_htbl_t;

struct ltepegtest_funtype_17_s {uint32_t count;
        ltepegtest_funtype_17_ftbl_t ftbl;
        ltepegtest_funtype_17_htbl_t htbl;};
typedef struct ltepegtest_funtype_17_s * ltepegtest_funtype_17_t;

extern void release_ltepegtest_funtype_17(ltepegtest_funtype_17_t x);

extern ltepegtest_funtype_17_t copy_ltepegtest_funtype_17(ltepegtest_funtype_17_t x);

uint32_t lookup_ltepegtest_funtype_17(ltepegtest_funtype_17_htbl_t htbl, uint32_t i, uint32_t ihash);

ltepegtest_funtype_17_t dupdate_ltepegtest_funtype_17(ltepegtest_funtype_17_t a, uint32_t i, ltepegtest_funtype_8_t v);

extern ltepegtest_funtype_17_t update_ltepegtest_funtype_17(ltepegtest_funtype_17_t a, uint32_t i, ltepegtest_funtype_8_t v);

extern bool_t equal_ltepegtest_funtype_17(ltepegtest_funtype_17_t x, ltepegtest_funtype_17_t y);

extern char* json_ltepegtest_funtype_17(ltepegtest_funtype_17_t x);


//jsonparsefile

struct ltepegtest_record_18_s {
        uint32_t count; 
        uint8_t depth;
        bool_t lflag;
        ltepegtest_funtype_17_t scaf;
        ltepeg__ent_adt_t stack;};
typedef struct ltepegtest_record_18_s * ltepegtest_record_18_t;

extern ltepegtest_record_18_t new_ltepegtest_record_18(void);

extern void release_ltepegtest_record_18(ltepegtest_record_18_t x);

extern ltepegtest_record_18_t copy_ltepegtest_record_18(ltepegtest_record_18_t x);

extern bool_t equal_ltepegtest_record_18(ltepegtest_record_18_t x, ltepegtest_record_18_t y);
extern char * json_ltepegtest_record_18(ltepegtest_record_18_t x);

typedef struct actual_ltepegtest_record_18_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegtest_record_18_t;
void release_ltepegtest_record_18_ptr(pointer_t x, type_actual_t ltepegtest_record_18);

extern bool_t equal_ltepegtest_record_18_ptr(pointer_t x, pointer_t y, actual_ltepegtest_record_18_t T);

extern char * json_ltepegtest_record_18_ptr(pointer_t x,  actual_ltepegtest_record_18_t T);

actual_ltepegtest_record_18_t actual_ltepegtest_record_18(void);

extern ltepegtest_record_18_t update_ltepegtest_record_18_depth(ltepegtest_record_18_t x, uint8_t v);

extern ltepegtest_record_18_t update_ltepegtest_record_18_lflag(ltepegtest_record_18_t x, bool_t v);

extern ltepegtest_record_18_t update_ltepegtest_record_18_scaf(ltepegtest_record_18_t x, ltepegtest_funtype_17_t v);

extern ltepegtest_record_18_t update_ltepegtest_record_18_stack(ltepegtest_record_18_t x, ltepeg__ent_adt_t v);




struct ltepegtest_closure_19_s;
        typedef struct ltepegtest_closure_19_s * ltepegtest_closure_19_t;

struct ltepegtest_closure_19_s {uint32_t count;
         ltepegtest_funtype_17_ftbl_t ftbl;
         ltepegtest_funtype_17_htbl_t htbl;
        uint32_t fvar_1;
        ltepegtest_funtype_8_t fvar_2;};

ltepegtest_funtype_8_t f_ltepegtest_closure_19(struct ltepegtest_closure_19_s * closure, uint32_t bvar);

ltepegtest_funtype_8_t m_ltepegtest_closure_19(struct ltepegtest_closure_19_s * closure, uint32_t bvar);

extern ltepegtest_funtype_8_t h_ltepegtest_closure_19(uint32_t ivar_54, uint32_t ivar_14, ltepegtest_funtype_8_t ivar_37);

extern ltepegtest_closure_19_t new_ltepegtest_closure_19(void);

extern void release_ltepegtest_closure_19(ltepegtest_funtype_17_t closure);

extern ltepegtest_closure_19_t copy_ltepegtest_closure_19(ltepegtest_closure_19_t x);


//jsonparsefile

struct ltepegtest_record_20_s {
        uint32_t count; 
        ltepegtest_record_15_t project_1;
        uint8_t project_2;
        uint32_t project_3;};
typedef struct ltepegtest_record_20_s * ltepegtest_record_20_t;

extern ltepegtest_record_20_t new_ltepegtest_record_20(void);

extern void release_ltepegtest_record_20(ltepegtest_record_20_t x);

extern ltepegtest_record_20_t copy_ltepegtest_record_20(ltepegtest_record_20_t x);

extern bool_t equal_ltepegtest_record_20(ltepegtest_record_20_t x, ltepegtest_record_20_t y);
extern char * json_ltepegtest_record_20(ltepegtest_record_20_t x);

typedef struct actual_ltepegtest_record_20_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegtest_record_20_t;
void release_ltepegtest_record_20_ptr(pointer_t x, type_actual_t ltepegtest_record_20);

extern bool_t equal_ltepegtest_record_20_ptr(pointer_t x, pointer_t y, actual_ltepegtest_record_20_t T);

extern char * json_ltepegtest_record_20_ptr(pointer_t x,  actual_ltepegtest_record_20_t T);

actual_ltepegtest_record_20_t actual_ltepegtest_record_20(void);

extern ltepegtest_record_20_t update_ltepegtest_record_20_project_1(ltepegtest_record_20_t x, ltepegtest_record_15_t v);

extern ltepegtest_record_20_t update_ltepegtest_record_20_project_2(ltepegtest_record_20_t x, uint8_t v);

extern ltepegtest_record_20_t update_ltepegtest_record_20_project_3(ltepegtest_record_20_t x, uint32_t v);


//jsonparsefile

struct ltepegtest_funtype_21_s;
        typedef struct ltepegtest_funtype_21_s * ltepegtest_funtype_21_t;

struct ltepegtest_funtype_21_ftbl_s {ltepegproof__parsetree_adt_t (* fptr)(struct ltepegtest_funtype_21_s *, ltepegtest_record_20_t);
        ltepegproof__parsetree_adt_t (* mptr)(struct ltepegtest_funtype_21_s *, ltepegtest_record_15_t, uint8_t, uint32_t);
        void (* rptr)(struct ltepegtest_funtype_21_s *);
        struct ltepegtest_funtype_21_s * (* cptr)(struct ltepegtest_funtype_21_s *);};
typedef struct ltepegtest_funtype_21_ftbl_s * ltepegtest_funtype_21_ftbl_t;

struct ltepegtest_funtype_21_hashentry_s {uint32_t keyhash; ltepegtest_record_20_t key; ltepegproof__parsetree_adt_t value;}; 
typedef struct ltepegtest_funtype_21_hashentry_s ltepegtest_funtype_21_hashentry_t;

struct ltepegtest_funtype_21_htbl_s {uint32_t size; uint32_t num_entries; ltepegtest_funtype_21_hashentry_t * data;}; 
typedef struct ltepegtest_funtype_21_htbl_s * ltepegtest_funtype_21_htbl_t;

struct ltepegtest_funtype_21_s {uint32_t count;
        ltepegtest_funtype_21_ftbl_t ftbl;
        ltepegtest_funtype_21_htbl_t htbl;};
typedef struct ltepegtest_funtype_21_s * ltepegtest_funtype_21_t;

extern void release_ltepegtest_funtype_21(ltepegtest_funtype_21_t x);

extern ltepegtest_funtype_21_t copy_ltepegtest_funtype_21(ltepegtest_funtype_21_t x);

extern bool_t equal_ltepegtest_funtype_21(ltepegtest_funtype_21_t x, ltepegtest_funtype_21_t y);

extern char* json_ltepegtest_funtype_21(ltepegtest_funtype_21_t x);


//jsonparsefile

struct ltepegtest_array_22_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltepeg__prepeg_adt_t elems[]; };
typedef struct ltepegtest_array_22_s * ltepegtest_array_22_t;

extern ltepegtest_array_22_t new_ltepegtest_array_22(uint32_t size);

extern void release_ltepegtest_array_22(ltepegtest_array_22_t x);

extern ltepegtest_array_22_t copy_ltepegtest_array_22(ltepegtest_array_22_t x);

extern bool_t equal_ltepegtest_array_22(ltepegtest_array_22_t x, ltepegtest_array_22_t y);
extern char * json_ltepegtest_array_22(ltepegtest_array_22_t x);

typedef struct actual_ltepegtest_array_22_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltepegtest_array_22_t;
void release_ltepegtest_array_22_ptr(pointer_t x, type_actual_t ltepegtest_array_22);

extern bool_t equal_ltepegtest_array_22_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltepegtest_array_22_ptr(pointer_t x, type_actual_t T);

actual_ltepegtest_array_22_t actual_ltepegtest_array_22(void);

extern ltepegtest_array_22_t update_ltepegtest_array_22(ltepegtest_array_22_t x, uint32_t i, ltepeg__prepeg_adt_t v);

extern ltepegtest_array_22_t upgrade_ltepegtest_array_22(ltepegtest_array_22_t x, uint32_t i, ltepeg__prepeg_adt_t v);



extern bool_t ltepegtest__digit(uint8_t ivar_1);

extern bool_t ltepegtest__any(uint8_t ivar_1);

extern bool_t ltepegtest__whitespace(uint8_t ivar_1);

extern ltepeg__prepeg_adt_t ltepegtest__ljson(uint8_t ivar_1);

extern ltepegtest_array_4_t ltepegtest__empty(uint8_t ivar_1);

extern ltepegtest_funtype_6_t ltepegtest__cat(uint8_t ivar_1, uint8_t ivar_2);

extern uint8_t ltepegtest__tok0(uint8_t ivar_1);

extern uint8_t ltepegtest__tok1(uint8_t ivar_1);

extern uint8_t ltepegtest__emptydict(uint8_t ivar_1);

extern uint8_t ltepegtest__obrace(uint8_t ivar_1);

extern uint8_t ltepegtest__cbrace(uint8_t ivar_1);

extern uint8_t ltepegtest__colon(uint8_t ivar_1);

extern ltepegtest_array_4_t ltepegtest__emptydict2(void);

extern ltepegtest_array_4_t ltepegtest__dict1(void);

extern ltepeg__ent_adt_t ltepegtest__iparse(uint8_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepegtest_array_4_t ivar_3, uint8_t ivar_4, uint8_t ivar_5);

extern ltepegproof__parsetree_adt_t ltepegtest__jsonparsefile(bytestrings__bytestring_t ivar_1);
#endif