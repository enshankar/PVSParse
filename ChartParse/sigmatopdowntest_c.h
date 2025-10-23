//Code generated using pvs2ir
#ifndef _sigmatopdowntest_h 
#define _sigmatopdowntest_h

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

#include "sigmatopdown_c.h"

#include "arrayCount_c.h"

#include "identity_uint8_c.h"

//cc -O3 -Wall -o sigmatopdowntest -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/lex2_c.c /Users/e21660/shankar/pvs.git/lib/sets_c.c /Users/e21660/shankar/pvs.git/lib/identity_c.c /Users/e21660/shankar/pvs.git/lib/file_c.c /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c sigmatopdowntest_c.c sigmatopdown_c.c arrayCount_c.c identity_uint8_c.c -lgmp 
//pyaml

struct sigmatopdowntest_funtype_0_s;
        typedef struct sigmatopdowntest_funtype_0_s * sigmatopdowntest_funtype_0_t;

struct sigmatopdowntest_funtype_0_ftbl_s {bool_t (* fptr)(struct sigmatopdowntest_funtype_0_s *, uint8_t);
        bool_t (* mptr)(struct sigmatopdowntest_funtype_0_s *, uint8_t);
        void (* rptr)(struct sigmatopdowntest_funtype_0_s *);
        struct sigmatopdowntest_funtype_0_s * (* cptr)(struct sigmatopdowntest_funtype_0_s *);};
typedef struct sigmatopdowntest_funtype_0_ftbl_s * sigmatopdowntest_funtype_0_ftbl_t;

struct sigmatopdowntest_funtype_0_hashentry_s {uint32_t keyhash; uint8_t key; bool_t value;}; 
typedef struct sigmatopdowntest_funtype_0_hashentry_s sigmatopdowntest_funtype_0_hashentry_t;

struct sigmatopdowntest_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdowntest_funtype_0_hashentry_t * data;}; 
typedef struct sigmatopdowntest_funtype_0_htbl_s * sigmatopdowntest_funtype_0_htbl_t;

struct sigmatopdowntest_funtype_0_s {uint32_t count;
        sigmatopdowntest_funtype_0_ftbl_t ftbl;
        sigmatopdowntest_funtype_0_htbl_t htbl;};
typedef struct sigmatopdowntest_funtype_0_s * sigmatopdowntest_funtype_0_t;

extern void release_sigmatopdowntest_funtype_0(sigmatopdowntest_funtype_0_t x);

extern sigmatopdowntest_funtype_0_t copy_sigmatopdowntest_funtype_0(sigmatopdowntest_funtype_0_t x);

uint32_t lookup_sigmatopdowntest_funtype_0(sigmatopdowntest_funtype_0_htbl_t htbl, uint8_t i, uint32_t ihash);

sigmatopdowntest_funtype_0_t dupdate_sigmatopdowntest_funtype_0(sigmatopdowntest_funtype_0_t a, uint8_t i, bool_t v);

extern sigmatopdowntest_funtype_0_t update_sigmatopdowntest_funtype_0(sigmatopdowntest_funtype_0_t a, uint8_t i, bool_t v);

extern bool_t equal_sigmatopdowntest_funtype_0(sigmatopdowntest_funtype_0_t x, sigmatopdowntest_funtype_0_t y);

extern char* json_sigmatopdowntest_funtype_0(sigmatopdowntest_funtype_0_t x);




struct sigmatopdowntest_closure_1_s;
        typedef struct sigmatopdowntest_closure_1_s * sigmatopdowntest_closure_1_t;

struct sigmatopdowntest_closure_1_s {uint32_t count;
         sigmatopdowntest_funtype_0_ftbl_t ftbl;
         sigmatopdowntest_funtype_0_htbl_t htbl;};

bool_t f_sigmatopdowntest_closure_1(struct sigmatopdowntest_closure_1_s * closure, uint8_t bvar);

bool_t m_sigmatopdowntest_closure_1(struct sigmatopdowntest_closure_1_s * closure, uint8_t bvar);

extern bool_t h_sigmatopdowntest_closure_1(uint8_t ivar_26);

extern sigmatopdowntest_closure_1_t new_sigmatopdowntest_closure_1(void);

extern void release_sigmatopdowntest_closure_1(sigmatopdowntest_funtype_0_t closure);

extern sigmatopdowntest_closure_1_t copy_sigmatopdowntest_closure_1(sigmatopdowntest_closure_1_t x);




struct sigmatopdowntest_closure_2_s;
        typedef struct sigmatopdowntest_closure_2_s * sigmatopdowntest_closure_2_t;

struct sigmatopdowntest_closure_2_s {uint32_t count;
         sigmatopdowntest_funtype_0_ftbl_t ftbl;
         sigmatopdowntest_funtype_0_htbl_t htbl;};

bool_t f_sigmatopdowntest_closure_2(struct sigmatopdowntest_closure_2_s * closure, uint8_t bvar);

bool_t m_sigmatopdowntest_closure_2(struct sigmatopdowntest_closure_2_s * closure, uint8_t bvar);

extern bool_t h_sigmatopdowntest_closure_2(uint8_t ivar_239);

extern sigmatopdowntest_closure_2_t new_sigmatopdowntest_closure_2(void);

extern void release_sigmatopdowntest_closure_2(sigmatopdowntest_funtype_0_t closure);

extern sigmatopdowntest_closure_2_t copy_sigmatopdowntest_closure_2(sigmatopdowntest_closure_2_t x);




struct sigmatopdowntest_closure_3_s;
        typedef struct sigmatopdowntest_closure_3_s * sigmatopdowntest_closure_3_t;

struct sigmatopdowntest_closure_3_s {uint32_t count;
         sigmatopdowntest_funtype_0_ftbl_t ftbl;
         sigmatopdowntest_funtype_0_htbl_t htbl;};

bool_t f_sigmatopdowntest_closure_3(struct sigmatopdowntest_closure_3_s * closure, uint8_t bvar);

bool_t m_sigmatopdowntest_closure_3(struct sigmatopdowntest_closure_3_s * closure, uint8_t bvar);

extern bool_t h_sigmatopdowntest_closure_3(uint8_t ivar_236);

extern sigmatopdowntest_closure_3_t new_sigmatopdowntest_closure_3(void);

extern void release_sigmatopdowntest_closure_3(sigmatopdowntest_funtype_0_t closure);

extern sigmatopdowntest_closure_3_t copy_sigmatopdowntest_closure_3(sigmatopdowntest_closure_3_t x);




struct sigmatopdowntest_closure_4_s;
        typedef struct sigmatopdowntest_closure_4_s * sigmatopdowntest_closure_4_t;

struct sigmatopdowntest_closure_4_s {uint32_t count;
         sigmatopdowntest_funtype_0_ftbl_t ftbl;
         sigmatopdowntest_funtype_0_htbl_t htbl;};

bool_t f_sigmatopdowntest_closure_4(struct sigmatopdowntest_closure_4_s * closure, uint8_t bvar);

bool_t m_sigmatopdowntest_closure_4(struct sigmatopdowntest_closure_4_s * closure, uint8_t bvar);

extern bool_t h_sigmatopdowntest_closure_4(uint8_t ivar_402);

extern sigmatopdowntest_closure_4_t new_sigmatopdowntest_closure_4(void);

extern void release_sigmatopdowntest_closure_4(sigmatopdowntest_funtype_0_t closure);

extern sigmatopdowntest_closure_4_t copy_sigmatopdowntest_closure_4(sigmatopdowntest_closure_4_t x);


//empty

struct sigmatopdowntest_array_5_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct sigmatopdowntest_array_5_s * sigmatopdowntest_array_5_t;

extern sigmatopdowntest_array_5_t new_sigmatopdowntest_array_5(uint32_t size);

extern void release_sigmatopdowntest_array_5(sigmatopdowntest_array_5_t x);

extern sigmatopdowntest_array_5_t copy_sigmatopdowntest_array_5(sigmatopdowntest_array_5_t x);

extern bool_t equal_sigmatopdowntest_array_5(sigmatopdowntest_array_5_t x, sigmatopdowntest_array_5_t y);
extern char * json_sigmatopdowntest_array_5(sigmatopdowntest_array_5_t x);

typedef struct actual_sigmatopdowntest_array_5_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdowntest_array_5_t;
void release_sigmatopdowntest_array_5_ptr(pointer_t x, type_actual_t sigmatopdowntest_array_5);

extern bool_t equal_sigmatopdowntest_array_5_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatopdowntest_array_5_ptr(pointer_t x, type_actual_t T);

actual_sigmatopdowntest_array_5_t actual_sigmatopdowntest_array_5(void);

extern sigmatopdowntest_array_5_t update_sigmatopdowntest_array_5(sigmatopdowntest_array_5_t x, uint32_t i, uint8_t v);

extern sigmatopdowntest_array_5_t upgrade_sigmatopdowntest_array_5(sigmatopdowntest_array_5_t x, uint32_t i, uint8_t v);


//cat

struct sigmatopdowntest_record_6_s {
        uint32_t count; 
        sigmatopdowntest_array_5_t project_1;
        sigmatopdowntest_array_5_t project_2;};
typedef struct sigmatopdowntest_record_6_s * sigmatopdowntest_record_6_t;

extern sigmatopdowntest_record_6_t new_sigmatopdowntest_record_6(void);

extern void release_sigmatopdowntest_record_6(sigmatopdowntest_record_6_t x);

extern sigmatopdowntest_record_6_t copy_sigmatopdowntest_record_6(sigmatopdowntest_record_6_t x);

extern bool_t equal_sigmatopdowntest_record_6(sigmatopdowntest_record_6_t x, sigmatopdowntest_record_6_t y);
extern char * json_sigmatopdowntest_record_6(sigmatopdowntest_record_6_t x);

typedef struct actual_sigmatopdowntest_record_6_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdowntest_record_6_t;
void release_sigmatopdowntest_record_6_ptr(pointer_t x, type_actual_t sigmatopdowntest_record_6);

extern bool_t equal_sigmatopdowntest_record_6_ptr(pointer_t x, pointer_t y, actual_sigmatopdowntest_record_6_t T);

extern char * json_sigmatopdowntest_record_6_ptr(pointer_t x,  actual_sigmatopdowntest_record_6_t T);

actual_sigmatopdowntest_record_6_t actual_sigmatopdowntest_record_6(void);

extern sigmatopdowntest_record_6_t update_sigmatopdowntest_record_6_project_1(sigmatopdowntest_record_6_t x, sigmatopdowntest_array_5_t v);

extern sigmatopdowntest_record_6_t update_sigmatopdowntest_record_6_project_2(sigmatopdowntest_record_6_t x, sigmatopdowntest_array_5_t v);


//cat

struct sigmatopdowntest_funtype_7_s;
        typedef struct sigmatopdowntest_funtype_7_s * sigmatopdowntest_funtype_7_t;

struct sigmatopdowntest_funtype_7_ftbl_s {sigmatopdowntest_array_5_t (* fptr)(struct sigmatopdowntest_funtype_7_s *, sigmatopdowntest_record_6_t);
        sigmatopdowntest_array_5_t (* mptr)(struct sigmatopdowntest_funtype_7_s *, sigmatopdowntest_array_5_t, sigmatopdowntest_array_5_t);
        void (* rptr)(struct sigmatopdowntest_funtype_7_s *);
        struct sigmatopdowntest_funtype_7_s * (* cptr)(struct sigmatopdowntest_funtype_7_s *);};
typedef struct sigmatopdowntest_funtype_7_ftbl_s * sigmatopdowntest_funtype_7_ftbl_t;

struct sigmatopdowntest_funtype_7_hashentry_s {uint32_t keyhash; sigmatopdowntest_record_6_t key; sigmatopdowntest_array_5_t value;}; 
typedef struct sigmatopdowntest_funtype_7_hashentry_s sigmatopdowntest_funtype_7_hashentry_t;

struct sigmatopdowntest_funtype_7_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdowntest_funtype_7_hashentry_t * data;}; 
typedef struct sigmatopdowntest_funtype_7_htbl_s * sigmatopdowntest_funtype_7_htbl_t;

struct sigmatopdowntest_funtype_7_s {uint32_t count;
        sigmatopdowntest_funtype_7_ftbl_t ftbl;
        sigmatopdowntest_funtype_7_htbl_t htbl;};
typedef struct sigmatopdowntest_funtype_7_s * sigmatopdowntest_funtype_7_t;

extern void release_sigmatopdowntest_funtype_7(sigmatopdowntest_funtype_7_t x);

extern sigmatopdowntest_funtype_7_t copy_sigmatopdowntest_funtype_7(sigmatopdowntest_funtype_7_t x);

extern bool_t equal_sigmatopdowntest_funtype_7(sigmatopdowntest_funtype_7_t x, sigmatopdowntest_funtype_7_t y);

extern char* json_sigmatopdowntest_funtype_7(sigmatopdowntest_funtype_7_t x);




struct sigmatopdowntest_closure_8_s;
        typedef struct sigmatopdowntest_closure_8_s * sigmatopdowntest_closure_8_t;

struct sigmatopdowntest_closure_8_s {uint32_t count;
         sigmatopdowntest_funtype_7_ftbl_t ftbl;
         sigmatopdowntest_funtype_7_htbl_t htbl;
        uint8_t fvar_1;
        uint8_t fvar_2;};

sigmatopdowntest_array_5_t f_sigmatopdowntest_closure_8(struct sigmatopdowntest_closure_8_s * closure, sigmatopdowntest_record_6_t bvar);

sigmatopdowntest_array_5_t m_sigmatopdowntest_closure_8(struct sigmatopdowntest_closure_8_s * closure, sigmatopdowntest_array_5_t bvar_1, sigmatopdowntest_array_5_t bvar_2);

extern sigmatopdowntest_array_5_t h_sigmatopdowntest_closure_8(sigmatopdowntest_array_5_t ivar_26, sigmatopdowntest_array_5_t ivar_27, uint8_t ivar_1, uint8_t ivar_2);

extern sigmatopdowntest_closure_8_t new_sigmatopdowntest_closure_8(void);

extern void release_sigmatopdowntest_closure_8(sigmatopdowntest_funtype_7_t closure);

extern sigmatopdowntest_closure_8_t copy_sigmatopdowntest_closure_8(sigmatopdowntest_closure_8_t x);


//test0

struct sigmatopdowntest_array_9_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         sigmatopdown__peg_adt_t elems[]; };
typedef struct sigmatopdowntest_array_9_s * sigmatopdowntest_array_9_t;

extern sigmatopdowntest_array_9_t new_sigmatopdowntest_array_9(uint32_t size);

extern void release_sigmatopdowntest_array_9(sigmatopdowntest_array_9_t x);

extern sigmatopdowntest_array_9_t copy_sigmatopdowntest_array_9(sigmatopdowntest_array_9_t x);

extern bool_t equal_sigmatopdowntest_array_9(sigmatopdowntest_array_9_t x, sigmatopdowntest_array_9_t y);
extern char * json_sigmatopdowntest_array_9(sigmatopdowntest_array_9_t x);

typedef struct actual_sigmatopdowntest_array_9_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdowntest_array_9_t;
void release_sigmatopdowntest_array_9_ptr(pointer_t x, type_actual_t sigmatopdowntest_array_9);

extern bool_t equal_sigmatopdowntest_array_9_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatopdowntest_array_9_ptr(pointer_t x, type_actual_t T);

actual_sigmatopdowntest_array_9_t actual_sigmatopdowntest_array_9(void);

extern sigmatopdowntest_array_9_t update_sigmatopdowntest_array_9(sigmatopdowntest_array_9_t x, uint32_t i, sigmatopdown__peg_adt_t v);

extern sigmatopdowntest_array_9_t upgrade_sigmatopdowntest_array_9(sigmatopdowntest_array_9_t x, uint32_t i, sigmatopdown__peg_adt_t v);


//iparse

struct sigmatopdowntest_funtype_10_s;
        typedef struct sigmatopdowntest_funtype_10_s * sigmatopdowntest_funtype_10_t;

struct sigmatopdowntest_funtype_10_ftbl_s {sigmatopdown__ent_adt_t (* fptr)(struct sigmatopdowntest_funtype_10_s *, uint8_t);
        sigmatopdown__ent_adt_t (* mptr)(struct sigmatopdowntest_funtype_10_s *, uint8_t);
        void (* rptr)(struct sigmatopdowntest_funtype_10_s *);
        struct sigmatopdowntest_funtype_10_s * (* cptr)(struct sigmatopdowntest_funtype_10_s *);};
typedef struct sigmatopdowntest_funtype_10_ftbl_s * sigmatopdowntest_funtype_10_ftbl_t;

struct sigmatopdowntest_funtype_10_hashentry_s {uint32_t keyhash; uint8_t key; sigmatopdown__ent_adt_t value;}; 
typedef struct sigmatopdowntest_funtype_10_hashentry_s sigmatopdowntest_funtype_10_hashentry_t;

struct sigmatopdowntest_funtype_10_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdowntest_funtype_10_hashentry_t * data;}; 
typedef struct sigmatopdowntest_funtype_10_htbl_s * sigmatopdowntest_funtype_10_htbl_t;

struct sigmatopdowntest_funtype_10_s {uint32_t count;
        sigmatopdowntest_funtype_10_ftbl_t ftbl;
        sigmatopdowntest_funtype_10_htbl_t htbl;};
typedef struct sigmatopdowntest_funtype_10_s * sigmatopdowntest_funtype_10_t;

extern void release_sigmatopdowntest_funtype_10(sigmatopdowntest_funtype_10_t x);

extern sigmatopdowntest_funtype_10_t copy_sigmatopdowntest_funtype_10(sigmatopdowntest_funtype_10_t x);

uint32_t lookup_sigmatopdowntest_funtype_10(sigmatopdowntest_funtype_10_htbl_t htbl, uint8_t i, uint32_t ihash);

sigmatopdowntest_funtype_10_t dupdate_sigmatopdowntest_funtype_10(sigmatopdowntest_funtype_10_t a, uint8_t i, sigmatopdown__ent_adt_t v);

extern sigmatopdowntest_funtype_10_t update_sigmatopdowntest_funtype_10(sigmatopdowntest_funtype_10_t a, uint8_t i, sigmatopdown__ent_adt_t v);

extern bool_t equal_sigmatopdowntest_funtype_10(sigmatopdowntest_funtype_10_t x, sigmatopdowntest_funtype_10_t y);

extern char* json_sigmatopdowntest_funtype_10(sigmatopdowntest_funtype_10_t x);




struct sigmatopdowntest_closure_11_s;
        typedef struct sigmatopdowntest_closure_11_s * sigmatopdowntest_closure_11_t;

struct sigmatopdowntest_closure_11_s {uint32_t count;
         sigmatopdowntest_funtype_10_ftbl_t ftbl;
         sigmatopdowntest_funtype_10_htbl_t htbl;};

sigmatopdown__ent_adt_t f_sigmatopdowntest_closure_11(struct sigmatopdowntest_closure_11_s * closure, uint8_t bvar);

sigmatopdown__ent_adt_t m_sigmatopdowntest_closure_11(struct sigmatopdowntest_closure_11_s * closure, uint8_t bvar);

extern sigmatopdown__ent_adt_t h_sigmatopdowntest_closure_11(uint8_t ivar_9);

extern sigmatopdowntest_closure_11_t new_sigmatopdowntest_closure_11(void);

extern void release_sigmatopdowntest_closure_11(sigmatopdowntest_funtype_10_t closure);

extern sigmatopdowntest_closure_11_t copy_sigmatopdowntest_closure_11(sigmatopdowntest_closure_11_t x);


//iparse

struct sigmatopdowntest_funtype_12_s;
        typedef struct sigmatopdowntest_funtype_12_s * sigmatopdowntest_funtype_12_t;

struct sigmatopdowntest_funtype_12_ftbl_s {sigmatopdowntest_funtype_10_t (* fptr)(struct sigmatopdowntest_funtype_12_s *, uint8_t);
        sigmatopdowntest_funtype_10_t (* mptr)(struct sigmatopdowntest_funtype_12_s *, uint8_t);
        void (* rptr)(struct sigmatopdowntest_funtype_12_s *);
        struct sigmatopdowntest_funtype_12_s * (* cptr)(struct sigmatopdowntest_funtype_12_s *);};
typedef struct sigmatopdowntest_funtype_12_ftbl_s * sigmatopdowntest_funtype_12_ftbl_t;

struct sigmatopdowntest_funtype_12_hashentry_s {uint32_t keyhash; uint8_t key; sigmatopdowntest_funtype_10_t value;}; 
typedef struct sigmatopdowntest_funtype_12_hashentry_s sigmatopdowntest_funtype_12_hashentry_t;

struct sigmatopdowntest_funtype_12_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdowntest_funtype_12_hashentry_t * data;}; 
typedef struct sigmatopdowntest_funtype_12_htbl_s * sigmatopdowntest_funtype_12_htbl_t;

struct sigmatopdowntest_funtype_12_s {uint32_t count;
        sigmatopdowntest_funtype_12_ftbl_t ftbl;
        sigmatopdowntest_funtype_12_htbl_t htbl;};
typedef struct sigmatopdowntest_funtype_12_s * sigmatopdowntest_funtype_12_t;

extern void release_sigmatopdowntest_funtype_12(sigmatopdowntest_funtype_12_t x);

extern sigmatopdowntest_funtype_12_t copy_sigmatopdowntest_funtype_12(sigmatopdowntest_funtype_12_t x);

uint32_t lookup_sigmatopdowntest_funtype_12(sigmatopdowntest_funtype_12_htbl_t htbl, uint8_t i, uint32_t ihash);

sigmatopdowntest_funtype_12_t dupdate_sigmatopdowntest_funtype_12(sigmatopdowntest_funtype_12_t a, uint8_t i, sigmatopdowntest_funtype_10_t v);

extern sigmatopdowntest_funtype_12_t update_sigmatopdowntest_funtype_12(sigmatopdowntest_funtype_12_t a, uint8_t i, sigmatopdowntest_funtype_10_t v);

extern bool_t equal_sigmatopdowntest_funtype_12(sigmatopdowntest_funtype_12_t x, sigmatopdowntest_funtype_12_t y);

extern char* json_sigmatopdowntest_funtype_12(sigmatopdowntest_funtype_12_t x);


//iparse

struct sigmatopdowntest_record_13_s {
        uint32_t count; 
        uint8_t depth;
        bool_t lflag;
        sigmatopdowntest_funtype_12_t scaf;
        sigmatopdown__ent_adt_t stack;};
typedef struct sigmatopdowntest_record_13_s * sigmatopdowntest_record_13_t;

extern sigmatopdowntest_record_13_t new_sigmatopdowntest_record_13(void);

extern void release_sigmatopdowntest_record_13(sigmatopdowntest_record_13_t x);

extern sigmatopdowntest_record_13_t copy_sigmatopdowntest_record_13(sigmatopdowntest_record_13_t x);

extern bool_t equal_sigmatopdowntest_record_13(sigmatopdowntest_record_13_t x, sigmatopdowntest_record_13_t y);
extern char * json_sigmatopdowntest_record_13(sigmatopdowntest_record_13_t x);

typedef struct actual_sigmatopdowntest_record_13_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdowntest_record_13_t;
void release_sigmatopdowntest_record_13_ptr(pointer_t x, type_actual_t sigmatopdowntest_record_13);

extern bool_t equal_sigmatopdowntest_record_13_ptr(pointer_t x, pointer_t y, actual_sigmatopdowntest_record_13_t T);

extern char * json_sigmatopdowntest_record_13_ptr(pointer_t x,  actual_sigmatopdowntest_record_13_t T);

actual_sigmatopdowntest_record_13_t actual_sigmatopdowntest_record_13(void);

extern sigmatopdowntest_record_13_t update_sigmatopdowntest_record_13_depth(sigmatopdowntest_record_13_t x, uint8_t v);

extern sigmatopdowntest_record_13_t update_sigmatopdowntest_record_13_lflag(sigmatopdowntest_record_13_t x, bool_t v);

extern sigmatopdowntest_record_13_t update_sigmatopdowntest_record_13_scaf(sigmatopdowntest_record_13_t x, sigmatopdowntest_funtype_12_t v);

extern sigmatopdowntest_record_13_t update_sigmatopdowntest_record_13_stack(sigmatopdowntest_record_13_t x, sigmatopdown__ent_adt_t v);




struct sigmatopdowntest_closure_14_s;
        typedef struct sigmatopdowntest_closure_14_s * sigmatopdowntest_closure_14_t;

struct sigmatopdowntest_closure_14_s {uint32_t count;
         sigmatopdowntest_funtype_12_ftbl_t ftbl;
         sigmatopdowntest_funtype_12_htbl_t htbl;
        uint8_t fvar_1;
        sigmatopdowntest_funtype_10_t fvar_2;};

sigmatopdowntest_funtype_10_t f_sigmatopdowntest_closure_14(struct sigmatopdowntest_closure_14_s * closure, uint8_t bvar);

sigmatopdowntest_funtype_10_t m_sigmatopdowntest_closure_14(struct sigmatopdowntest_closure_14_s * closure, uint8_t bvar);

extern sigmatopdowntest_funtype_10_t h_sigmatopdowntest_closure_14(uint8_t ivar_20, uint8_t ivar_1, sigmatopdowntest_funtype_10_t ivar_6);

extern sigmatopdowntest_closure_14_t new_sigmatopdowntest_closure_14(void);

extern void release_sigmatopdowntest_closure_14(sigmatopdowntest_funtype_12_t closure);

extern sigmatopdowntest_closure_14_t copy_sigmatopdowntest_closure_14(sigmatopdowntest_closure_14_t x);


//iparse

struct sigmatopdowntest_array_15_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         sigmatopdown__ent_adt_t elems[]; };
typedef struct sigmatopdowntest_array_15_s * sigmatopdowntest_array_15_t;

extern sigmatopdowntest_array_15_t new_sigmatopdowntest_array_15(uint32_t size);

extern void release_sigmatopdowntest_array_15(sigmatopdowntest_array_15_t x);

extern sigmatopdowntest_array_15_t copy_sigmatopdowntest_array_15(sigmatopdowntest_array_15_t x);

extern bool_t equal_sigmatopdowntest_array_15(sigmatopdowntest_array_15_t x, sigmatopdowntest_array_15_t y);
extern char * json_sigmatopdowntest_array_15(sigmatopdowntest_array_15_t x);

typedef struct actual_sigmatopdowntest_array_15_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdowntest_array_15_t;
void release_sigmatopdowntest_array_15_ptr(pointer_t x, type_actual_t sigmatopdowntest_array_15);

extern bool_t equal_sigmatopdowntest_array_15_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatopdowntest_array_15_ptr(pointer_t x, type_actual_t T);

actual_sigmatopdowntest_array_15_t actual_sigmatopdowntest_array_15(void);

extern sigmatopdowntest_array_15_t update_sigmatopdowntest_array_15(sigmatopdowntest_array_15_t x, uint32_t i, sigmatopdown__ent_adt_t v);

extern sigmatopdowntest_array_15_t upgrade_sigmatopdowntest_array_15(sigmatopdowntest_array_15_t x, uint32_t i, sigmatopdown__ent_adt_t v);


//iparse

struct sigmatopdowntest_array_16_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         sigmatopdowntest_array_15_t elems[]; };
typedef struct sigmatopdowntest_array_16_s * sigmatopdowntest_array_16_t;

extern sigmatopdowntest_array_16_t new_sigmatopdowntest_array_16(uint32_t size);

extern void release_sigmatopdowntest_array_16(sigmatopdowntest_array_16_t x);

extern sigmatopdowntest_array_16_t copy_sigmatopdowntest_array_16(sigmatopdowntest_array_16_t x);

extern bool_t equal_sigmatopdowntest_array_16(sigmatopdowntest_array_16_t x, sigmatopdowntest_array_16_t y);
extern char * json_sigmatopdowntest_array_16(sigmatopdowntest_array_16_t x);

typedef struct actual_sigmatopdowntest_array_16_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdowntest_array_16_t;
void release_sigmatopdowntest_array_16_ptr(pointer_t x, type_actual_t sigmatopdowntest_array_16);

extern bool_t equal_sigmatopdowntest_array_16_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatopdowntest_array_16_ptr(pointer_t x, type_actual_t T);

actual_sigmatopdowntest_array_16_t actual_sigmatopdowntest_array_16(void);

extern sigmatopdowntest_array_16_t update_sigmatopdowntest_array_16(sigmatopdowntest_array_16_t x, uint32_t i, sigmatopdowntest_array_15_t v);

extern sigmatopdowntest_array_16_t upgrade_sigmatopdowntest_array_16(sigmatopdowntest_array_16_t x, uint32_t i, sigmatopdowntest_array_15_t v);


//iparse

struct sigmatopdowntest_record_17_s {
        uint32_t count; 
        sigmatopdowntest_array_16_t scaf;
        uint64_t depth;
        sigmatopdown__ent_adt_t stack;
        bool_t lflag;};
typedef struct sigmatopdowntest_record_17_s * sigmatopdowntest_record_17_t;

extern sigmatopdowntest_record_17_t new_sigmatopdowntest_record_17(void);

extern void release_sigmatopdowntest_record_17(sigmatopdowntest_record_17_t x);

extern sigmatopdowntest_record_17_t copy_sigmatopdowntest_record_17(sigmatopdowntest_record_17_t x);

extern bool_t equal_sigmatopdowntest_record_17(sigmatopdowntest_record_17_t x, sigmatopdowntest_record_17_t y);
extern char * json_sigmatopdowntest_record_17(sigmatopdowntest_record_17_t x);

typedef struct actual_sigmatopdowntest_record_17_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatopdowntest_record_17_t;
void release_sigmatopdowntest_record_17_ptr(pointer_t x, type_actual_t sigmatopdowntest_record_17);

extern bool_t equal_sigmatopdowntest_record_17_ptr(pointer_t x, pointer_t y, actual_sigmatopdowntest_record_17_t T);

extern char * json_sigmatopdowntest_record_17_ptr(pointer_t x,  actual_sigmatopdowntest_record_17_t T);

actual_sigmatopdowntest_record_17_t actual_sigmatopdowntest_record_17(void);

extern sigmatopdowntest_record_17_t update_sigmatopdowntest_record_17_scaf(sigmatopdowntest_record_17_t x, sigmatopdowntest_array_16_t v);

extern sigmatopdowntest_record_17_t update_sigmatopdowntest_record_17_depth(sigmatopdowntest_record_17_t x, uint64_t v);

extern sigmatopdowntest_record_17_t update_sigmatopdowntest_record_17_stack(sigmatopdowntest_record_17_t x, sigmatopdown__ent_adt_t v);

extern sigmatopdowntest_record_17_t update_sigmatopdowntest_record_17_lflag(sigmatopdowntest_record_17_t x, bool_t v);


//iparse

struct sigmatopdowntest_funtype_18_s;
        typedef struct sigmatopdowntest_funtype_18_s * sigmatopdowntest_funtype_18_t;

struct sigmatopdowntest_funtype_18_ftbl_s {sigmatopdowntest_record_17_t (* fptr)(struct sigmatopdowntest_funtype_18_s *, sigmatopdowntest_record_17_t);
        sigmatopdowntest_record_17_t (* mptr)(struct sigmatopdowntest_funtype_18_s *, sigmatopdowntest_record_17_t);
        void (* rptr)(struct sigmatopdowntest_funtype_18_s *);
        struct sigmatopdowntest_funtype_18_s * (* cptr)(struct sigmatopdowntest_funtype_18_s *);};
typedef struct sigmatopdowntest_funtype_18_ftbl_s * sigmatopdowntest_funtype_18_ftbl_t;

struct sigmatopdowntest_funtype_18_hashentry_s {uint32_t keyhash; sigmatopdowntest_record_17_t key; sigmatopdowntest_record_17_t value;}; 
typedef struct sigmatopdowntest_funtype_18_hashentry_s sigmatopdowntest_funtype_18_hashentry_t;

struct sigmatopdowntest_funtype_18_htbl_s {uint32_t size; uint32_t num_entries; sigmatopdowntest_funtype_18_hashentry_t * data;}; 
typedef struct sigmatopdowntest_funtype_18_htbl_s * sigmatopdowntest_funtype_18_htbl_t;

struct sigmatopdowntest_funtype_18_s {uint32_t count;
        sigmatopdowntest_funtype_18_ftbl_t ftbl;
        sigmatopdowntest_funtype_18_htbl_t htbl;};
typedef struct sigmatopdowntest_funtype_18_s * sigmatopdowntest_funtype_18_t;

extern void release_sigmatopdowntest_funtype_18(sigmatopdowntest_funtype_18_t x);

extern sigmatopdowntest_funtype_18_t copy_sigmatopdowntest_funtype_18(sigmatopdowntest_funtype_18_t x);

extern bool_t equal_sigmatopdowntest_funtype_18(sigmatopdowntest_funtype_18_t x, sigmatopdowntest_funtype_18_t y);

extern char* json_sigmatopdowntest_funtype_18(sigmatopdowntest_funtype_18_t x);



extern bool_t sigmatopdowntest__digit(uint8_t ivar_1);

extern bool_t sigmatopdowntest__any(uint8_t ivar_1);

extern sigmatopdown__peg_adt_t sigmatopdowntest__pyaml(uint8_t ivar_1);

extern sigmatopdown__peg_adt_t sigmatopdowntest__pjson(uint8_t ivar_1);

extern sigmatopdowntest_array_5_t sigmatopdowntest__empty(uint8_t ivar_1);

extern sigmatopdowntest_funtype_7_t sigmatopdowntest__cat(uint8_t ivar_1, uint8_t ivar_2);

extern uint8_t sigmatopdowntest__tok0(uint8_t ivar_1);

extern uint8_t sigmatopdowntest__tok1(uint8_t ivar_1);

extern uint8_t sigmatopdowntest__emptydict(uint8_t ivar_1);

extern uint8_t sigmatopdowntest__obrace(uint8_t ivar_1);

extern uint8_t sigmatopdowntest__cbrace(uint8_t ivar_1);

extern uint8_t sigmatopdowntest__colon(uint8_t ivar_1);

extern sigmatopdowntest_array_5_t sigmatopdowntest__emptydict2(void);

extern sigmatopdowntest_array_5_t sigmatopdowntest__dict1(void);

extern sigmatopdown__ent_adt_t sigmatopdowntest__test0(void);

extern sigmatopdown__ent_adt_t sigmatopdowntest__test1(void);

extern sigmatopdown__ent_adt_t sigmatopdowntest__test11(void);

extern sigmatopdown__ent_adt_t sigmatopdowntest__test2(void);

extern sigmatopdown__ent_adt_t sigmatopdowntest__iparse(uint8_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdowntest_array_5_t ivar_3, uint8_t ivar_4, uint8_t ivar_5);

extern sigmatopdown__ent_adt_t sigmatopdowntest__jsonparsefile(bytestrings__bytestring_t ivar_1);
#endif