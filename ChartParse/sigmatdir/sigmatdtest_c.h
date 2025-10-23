//Code generated using pvs2ir
#ifndef _sigmatdtest_h 
#define _sigmatdtest_h

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

#include "sigmatdproof_c.h"

#include "sigmatopdown_c.h"

#include "arrayCount_c.h"

#include "identity_uint8_c.h"

//cc -O3 -Wall -o sigmatdtest -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/lex2_c.c /Users/e21660/shankar/pvs.git/lib/sets_c.c /Users/e21660/shankar/pvs.git/lib/identity_c.c /Users/e21660/shankar/pvs.git/lib/file_c.c /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c sigmatdtest_c.c sigmatdproof_c.c sigmatopdown_c.c arrayCount_c.c identity_uint8_c.c -lgmp 
//pyaml

struct sigmatdtest_funtype_0_s;
        typedef struct sigmatdtest_funtype_0_s * sigmatdtest_funtype_0_t;

struct sigmatdtest_funtype_0_ftbl_s {bool_t (* fptr)(struct sigmatdtest_funtype_0_s *, uint8_t);
        bool_t (* mptr)(struct sigmatdtest_funtype_0_s *, uint8_t);
        void (* rptr)(struct sigmatdtest_funtype_0_s *);
        struct sigmatdtest_funtype_0_s * (* cptr)(struct sigmatdtest_funtype_0_s *);};
typedef struct sigmatdtest_funtype_0_ftbl_s * sigmatdtest_funtype_0_ftbl_t;

struct sigmatdtest_funtype_0_hashentry_s {uint32_t keyhash; uint8_t key; bool_t value;}; 
typedef struct sigmatdtest_funtype_0_hashentry_s sigmatdtest_funtype_0_hashentry_t;

struct sigmatdtest_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; sigmatdtest_funtype_0_hashentry_t * data;}; 
typedef struct sigmatdtest_funtype_0_htbl_s * sigmatdtest_funtype_0_htbl_t;

struct sigmatdtest_funtype_0_s {uint32_t count;
        sigmatdtest_funtype_0_ftbl_t ftbl;
        sigmatdtest_funtype_0_htbl_t htbl;};
typedef struct sigmatdtest_funtype_0_s * sigmatdtest_funtype_0_t;

extern void release_sigmatdtest_funtype_0(sigmatdtest_funtype_0_t x);

extern sigmatdtest_funtype_0_t copy_sigmatdtest_funtype_0(sigmatdtest_funtype_0_t x);

uint32_t lookup_sigmatdtest_funtype_0(sigmatdtest_funtype_0_htbl_t htbl, uint8_t i, uint32_t ihash);

sigmatdtest_funtype_0_t dupdate_sigmatdtest_funtype_0(sigmatdtest_funtype_0_t a, uint8_t i, bool_t v);

extern sigmatdtest_funtype_0_t update_sigmatdtest_funtype_0(sigmatdtest_funtype_0_t a, uint8_t i, bool_t v);

extern bool_t equal_sigmatdtest_funtype_0(sigmatdtest_funtype_0_t x, sigmatdtest_funtype_0_t y);

extern char* json_sigmatdtest_funtype_0(sigmatdtest_funtype_0_t x);




struct sigmatdtest_closure_1_s;
        typedef struct sigmatdtest_closure_1_s * sigmatdtest_closure_1_t;

struct sigmatdtest_closure_1_s {uint32_t count;
         sigmatdtest_funtype_0_ftbl_t ftbl;
         sigmatdtest_funtype_0_htbl_t htbl;};

bool_t f_sigmatdtest_closure_1(struct sigmatdtest_closure_1_s * closure, uint8_t bvar);

bool_t m_sigmatdtest_closure_1(struct sigmatdtest_closure_1_s * closure, uint8_t bvar);

extern bool_t h_sigmatdtest_closure_1(uint8_t ivar_26);

extern sigmatdtest_closure_1_t new_sigmatdtest_closure_1(void);

extern void release_sigmatdtest_closure_1(sigmatdtest_funtype_0_t closure);

extern sigmatdtest_closure_1_t copy_sigmatdtest_closure_1(sigmatdtest_closure_1_t x);




struct sigmatdtest_closure_2_s;
        typedef struct sigmatdtest_closure_2_s * sigmatdtest_closure_2_t;

struct sigmatdtest_closure_2_s {uint32_t count;
         sigmatdtest_funtype_0_ftbl_t ftbl;
         sigmatdtest_funtype_0_htbl_t htbl;};

bool_t f_sigmatdtest_closure_2(struct sigmatdtest_closure_2_s * closure, uint8_t bvar);

bool_t m_sigmatdtest_closure_2(struct sigmatdtest_closure_2_s * closure, uint8_t bvar);

extern bool_t h_sigmatdtest_closure_2(uint8_t ivar_90);

extern sigmatdtest_closure_2_t new_sigmatdtest_closure_2(void);

extern void release_sigmatdtest_closure_2(sigmatdtest_funtype_0_t closure);

extern sigmatdtest_closure_2_t copy_sigmatdtest_closure_2(sigmatdtest_closure_2_t x);




struct sigmatdtest_closure_3_s;
        typedef struct sigmatdtest_closure_3_s * sigmatdtest_closure_3_t;

struct sigmatdtest_closure_3_s {uint32_t count;
         sigmatdtest_funtype_0_ftbl_t ftbl;
         sigmatdtest_funtype_0_htbl_t htbl;};

bool_t f_sigmatdtest_closure_3(struct sigmatdtest_closure_3_s * closure, uint8_t bvar);

bool_t m_sigmatdtest_closure_3(struct sigmatdtest_closure_3_s * closure, uint8_t bvar);

extern bool_t h_sigmatdtest_closure_3(uint8_t ivar_244);

extern sigmatdtest_closure_3_t new_sigmatdtest_closure_3(void);

extern void release_sigmatdtest_closure_3(sigmatdtest_funtype_0_t closure);

extern sigmatdtest_closure_3_t copy_sigmatdtest_closure_3(sigmatdtest_closure_3_t x);




struct sigmatdtest_closure_4_s;
        typedef struct sigmatdtest_closure_4_s * sigmatdtest_closure_4_t;

struct sigmatdtest_closure_4_s {uint32_t count;
         sigmatdtest_funtype_0_ftbl_t ftbl;
         sigmatdtest_funtype_0_htbl_t htbl;};

bool_t f_sigmatdtest_closure_4(struct sigmatdtest_closure_4_s * closure, uint8_t bvar);

bool_t m_sigmatdtest_closure_4(struct sigmatdtest_closure_4_s * closure, uint8_t bvar);

extern bool_t h_sigmatdtest_closure_4(uint8_t ivar_87);

extern sigmatdtest_closure_4_t new_sigmatdtest_closure_4(void);

extern void release_sigmatdtest_closure_4(sigmatdtest_funtype_0_t closure);

extern sigmatdtest_closure_4_t copy_sigmatdtest_closure_4(sigmatdtest_closure_4_t x);




struct sigmatdtest_closure_5_s;
        typedef struct sigmatdtest_closure_5_s * sigmatdtest_closure_5_t;

struct sigmatdtest_closure_5_s {uint32_t count;
         sigmatdtest_funtype_0_ftbl_t ftbl;
         sigmatdtest_funtype_0_htbl_t htbl;};

bool_t f_sigmatdtest_closure_5(struct sigmatdtest_closure_5_s * closure, uint8_t bvar);

bool_t m_sigmatdtest_closure_5(struct sigmatdtest_closure_5_s * closure, uint8_t bvar);

extern bool_t h_sigmatdtest_closure_5(uint8_t ivar_241);

extern sigmatdtest_closure_5_t new_sigmatdtest_closure_5(void);

extern void release_sigmatdtest_closure_5(sigmatdtest_funtype_0_t closure);

extern sigmatdtest_closure_5_t copy_sigmatdtest_closure_5(sigmatdtest_closure_5_t x);




struct sigmatdtest_closure_6_s;
        typedef struct sigmatdtest_closure_6_s * sigmatdtest_closure_6_t;

struct sigmatdtest_closure_6_s {uint32_t count;
         sigmatdtest_funtype_0_ftbl_t ftbl;
         sigmatdtest_funtype_0_htbl_t htbl;};

bool_t f_sigmatdtest_closure_6(struct sigmatdtest_closure_6_s * closure, uint8_t bvar);

bool_t m_sigmatdtest_closure_6(struct sigmatdtest_closure_6_s * closure, uint8_t bvar);

extern bool_t h_sigmatdtest_closure_6(uint8_t ivar_407);

extern sigmatdtest_closure_6_t new_sigmatdtest_closure_6(void);

extern void release_sigmatdtest_closure_6(sigmatdtest_funtype_0_t closure);

extern sigmatdtest_closure_6_t copy_sigmatdtest_closure_6(sigmatdtest_closure_6_t x);


//empty

struct sigmatdtest_array_7_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct sigmatdtest_array_7_s * sigmatdtest_array_7_t;

extern sigmatdtest_array_7_t new_sigmatdtest_array_7(uint32_t size);

extern void release_sigmatdtest_array_7(sigmatdtest_array_7_t x);

extern sigmatdtest_array_7_t copy_sigmatdtest_array_7(sigmatdtest_array_7_t x);

extern bool_t equal_sigmatdtest_array_7(sigmatdtest_array_7_t x, sigmatdtest_array_7_t y);
extern char * json_sigmatdtest_array_7(sigmatdtest_array_7_t x);

typedef struct actual_sigmatdtest_array_7_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdtest_array_7_t;
void release_sigmatdtest_array_7_ptr(pointer_t x, type_actual_t sigmatdtest_array_7);

extern bool_t equal_sigmatdtest_array_7_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatdtest_array_7_ptr(pointer_t x, type_actual_t T);

actual_sigmatdtest_array_7_t actual_sigmatdtest_array_7(void);

extern sigmatdtest_array_7_t update_sigmatdtest_array_7(sigmatdtest_array_7_t x, uint32_t i, uint8_t v);

extern sigmatdtest_array_7_t upgrade_sigmatdtest_array_7(sigmatdtest_array_7_t x, uint32_t i, uint8_t v);


//cat

struct sigmatdtest_record_8_s {
        uint32_t count; 
        sigmatdtest_array_7_t project_1;
        sigmatdtest_array_7_t project_2;};
typedef struct sigmatdtest_record_8_s * sigmatdtest_record_8_t;

extern sigmatdtest_record_8_t new_sigmatdtest_record_8(void);

extern void release_sigmatdtest_record_8(sigmatdtest_record_8_t x);

extern sigmatdtest_record_8_t copy_sigmatdtest_record_8(sigmatdtest_record_8_t x);

extern bool_t equal_sigmatdtest_record_8(sigmatdtest_record_8_t x, sigmatdtest_record_8_t y);
extern char * json_sigmatdtest_record_8(sigmatdtest_record_8_t x);

typedef struct actual_sigmatdtest_record_8_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdtest_record_8_t;
void release_sigmatdtest_record_8_ptr(pointer_t x, type_actual_t sigmatdtest_record_8);

extern bool_t equal_sigmatdtest_record_8_ptr(pointer_t x, pointer_t y, actual_sigmatdtest_record_8_t T);

extern char * json_sigmatdtest_record_8_ptr(pointer_t x,  actual_sigmatdtest_record_8_t T);

actual_sigmatdtest_record_8_t actual_sigmatdtest_record_8(void);

extern sigmatdtest_record_8_t update_sigmatdtest_record_8_project_1(sigmatdtest_record_8_t x, sigmatdtest_array_7_t v);

extern sigmatdtest_record_8_t update_sigmatdtest_record_8_project_2(sigmatdtest_record_8_t x, sigmatdtest_array_7_t v);


//cat

struct sigmatdtest_funtype_9_s;
        typedef struct sigmatdtest_funtype_9_s * sigmatdtest_funtype_9_t;

struct sigmatdtest_funtype_9_ftbl_s {sigmatdtest_array_7_t (* fptr)(struct sigmatdtest_funtype_9_s *, sigmatdtest_record_8_t);
        sigmatdtest_array_7_t (* mptr)(struct sigmatdtest_funtype_9_s *, sigmatdtest_array_7_t, sigmatdtest_array_7_t);
        void (* rptr)(struct sigmatdtest_funtype_9_s *);
        struct sigmatdtest_funtype_9_s * (* cptr)(struct sigmatdtest_funtype_9_s *);};
typedef struct sigmatdtest_funtype_9_ftbl_s * sigmatdtest_funtype_9_ftbl_t;

struct sigmatdtest_funtype_9_hashentry_s {uint32_t keyhash; sigmatdtest_record_8_t key; sigmatdtest_array_7_t value;}; 
typedef struct sigmatdtest_funtype_9_hashentry_s sigmatdtest_funtype_9_hashentry_t;

struct sigmatdtest_funtype_9_htbl_s {uint32_t size; uint32_t num_entries; sigmatdtest_funtype_9_hashentry_t * data;}; 
typedef struct sigmatdtest_funtype_9_htbl_s * sigmatdtest_funtype_9_htbl_t;

struct sigmatdtest_funtype_9_s {uint32_t count;
        sigmatdtest_funtype_9_ftbl_t ftbl;
        sigmatdtest_funtype_9_htbl_t htbl;};
typedef struct sigmatdtest_funtype_9_s * sigmatdtest_funtype_9_t;

extern void release_sigmatdtest_funtype_9(sigmatdtest_funtype_9_t x);

extern sigmatdtest_funtype_9_t copy_sigmatdtest_funtype_9(sigmatdtest_funtype_9_t x);

extern bool_t equal_sigmatdtest_funtype_9(sigmatdtest_funtype_9_t x, sigmatdtest_funtype_9_t y);

extern char* json_sigmatdtest_funtype_9(sigmatdtest_funtype_9_t x);




struct sigmatdtest_closure_10_s;
        typedef struct sigmatdtest_closure_10_s * sigmatdtest_closure_10_t;

struct sigmatdtest_closure_10_s {uint32_t count;
         sigmatdtest_funtype_9_ftbl_t ftbl;
         sigmatdtest_funtype_9_htbl_t htbl;
        uint8_t fvar_1;
        uint8_t fvar_2;};

sigmatdtest_array_7_t f_sigmatdtest_closure_10(struct sigmatdtest_closure_10_s * closure, sigmatdtest_record_8_t bvar);

sigmatdtest_array_7_t m_sigmatdtest_closure_10(struct sigmatdtest_closure_10_s * closure, sigmatdtest_array_7_t bvar_1, sigmatdtest_array_7_t bvar_2);

extern sigmatdtest_array_7_t h_sigmatdtest_closure_10(sigmatdtest_array_7_t ivar_26, sigmatdtest_array_7_t ivar_27, uint8_t ivar_1, uint8_t ivar_2);

extern sigmatdtest_closure_10_t new_sigmatdtest_closure_10(void);

extern void release_sigmatdtest_closure_10(sigmatdtest_funtype_9_t closure);

extern sigmatdtest_closure_10_t copy_sigmatdtest_closure_10(sigmatdtest_closure_10_t x);


//test0

struct sigmatdtest_array_11_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         sigmatopdown__peg_adt_t elems[]; };
typedef struct sigmatdtest_array_11_s * sigmatdtest_array_11_t;

extern sigmatdtest_array_11_t new_sigmatdtest_array_11(uint32_t size);

extern void release_sigmatdtest_array_11(sigmatdtest_array_11_t x);

extern sigmatdtest_array_11_t copy_sigmatdtest_array_11(sigmatdtest_array_11_t x);

extern bool_t equal_sigmatdtest_array_11(sigmatdtest_array_11_t x, sigmatdtest_array_11_t y);
extern char * json_sigmatdtest_array_11(sigmatdtest_array_11_t x);

typedef struct actual_sigmatdtest_array_11_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdtest_array_11_t;
void release_sigmatdtest_array_11_ptr(pointer_t x, type_actual_t sigmatdtest_array_11);

extern bool_t equal_sigmatdtest_array_11_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatdtest_array_11_ptr(pointer_t x, type_actual_t T);

actual_sigmatdtest_array_11_t actual_sigmatdtest_array_11(void);

extern sigmatdtest_array_11_t update_sigmatdtest_array_11(sigmatdtest_array_11_t x, uint32_t i, sigmatopdown__peg_adt_t v);

extern sigmatdtest_array_11_t upgrade_sigmatdtest_array_11(sigmatdtest_array_11_t x, uint32_t i, sigmatopdown__peg_adt_t v);


//iparse

struct sigmatdtest_funtype_12_s;
        typedef struct sigmatdtest_funtype_12_s * sigmatdtest_funtype_12_t;

struct sigmatdtest_funtype_12_ftbl_s {sigmatopdown__ent_adt_t (* fptr)(struct sigmatdtest_funtype_12_s *, uint8_t);
        sigmatopdown__ent_adt_t (* mptr)(struct sigmatdtest_funtype_12_s *, uint8_t);
        void (* rptr)(struct sigmatdtest_funtype_12_s *);
        struct sigmatdtest_funtype_12_s * (* cptr)(struct sigmatdtest_funtype_12_s *);};
typedef struct sigmatdtest_funtype_12_ftbl_s * sigmatdtest_funtype_12_ftbl_t;

struct sigmatdtest_funtype_12_hashentry_s {uint32_t keyhash; uint8_t key; sigmatopdown__ent_adt_t value;}; 
typedef struct sigmatdtest_funtype_12_hashentry_s sigmatdtest_funtype_12_hashentry_t;

struct sigmatdtest_funtype_12_htbl_s {uint32_t size; uint32_t num_entries; sigmatdtest_funtype_12_hashentry_t * data;}; 
typedef struct sigmatdtest_funtype_12_htbl_s * sigmatdtest_funtype_12_htbl_t;

struct sigmatdtest_funtype_12_s {uint32_t count;
        sigmatdtest_funtype_12_ftbl_t ftbl;
        sigmatdtest_funtype_12_htbl_t htbl;};
typedef struct sigmatdtest_funtype_12_s * sigmatdtest_funtype_12_t;

extern void release_sigmatdtest_funtype_12(sigmatdtest_funtype_12_t x);

extern sigmatdtest_funtype_12_t copy_sigmatdtest_funtype_12(sigmatdtest_funtype_12_t x);

uint32_t lookup_sigmatdtest_funtype_12(sigmatdtest_funtype_12_htbl_t htbl, uint8_t i, uint32_t ihash);

sigmatdtest_funtype_12_t dupdate_sigmatdtest_funtype_12(sigmatdtest_funtype_12_t a, uint8_t i, sigmatopdown__ent_adt_t v);

extern sigmatdtest_funtype_12_t update_sigmatdtest_funtype_12(sigmatdtest_funtype_12_t a, uint8_t i, sigmatopdown__ent_adt_t v);

extern bool_t equal_sigmatdtest_funtype_12(sigmatdtest_funtype_12_t x, sigmatdtest_funtype_12_t y);

extern char* json_sigmatdtest_funtype_12(sigmatdtest_funtype_12_t x);




struct sigmatdtest_closure_13_s;
        typedef struct sigmatdtest_closure_13_s * sigmatdtest_closure_13_t;

struct sigmatdtest_closure_13_s {uint32_t count;
         sigmatdtest_funtype_12_ftbl_t ftbl;
         sigmatdtest_funtype_12_htbl_t htbl;};

sigmatopdown__ent_adt_t f_sigmatdtest_closure_13(struct sigmatdtest_closure_13_s * closure, uint8_t bvar);

sigmatopdown__ent_adt_t m_sigmatdtest_closure_13(struct sigmatdtest_closure_13_s * closure, uint8_t bvar);

extern sigmatopdown__ent_adt_t h_sigmatdtest_closure_13(uint8_t ivar_10);

extern sigmatdtest_closure_13_t new_sigmatdtest_closure_13(void);

extern void release_sigmatdtest_closure_13(sigmatdtest_funtype_12_t closure);

extern sigmatdtest_closure_13_t copy_sigmatdtest_closure_13(sigmatdtest_closure_13_t x);


//iparse

struct sigmatdtest_funtype_14_s;
        typedef struct sigmatdtest_funtype_14_s * sigmatdtest_funtype_14_t;

struct sigmatdtest_funtype_14_ftbl_s {sigmatdtest_funtype_12_t (* fptr)(struct sigmatdtest_funtype_14_s *, uint8_t);
        sigmatdtest_funtype_12_t (* mptr)(struct sigmatdtest_funtype_14_s *, uint8_t);
        void (* rptr)(struct sigmatdtest_funtype_14_s *);
        struct sigmatdtest_funtype_14_s * (* cptr)(struct sigmatdtest_funtype_14_s *);};
typedef struct sigmatdtest_funtype_14_ftbl_s * sigmatdtest_funtype_14_ftbl_t;

struct sigmatdtest_funtype_14_hashentry_s {uint32_t keyhash; uint8_t key; sigmatdtest_funtype_12_t value;}; 
typedef struct sigmatdtest_funtype_14_hashentry_s sigmatdtest_funtype_14_hashentry_t;

struct sigmatdtest_funtype_14_htbl_s {uint32_t size; uint32_t num_entries; sigmatdtest_funtype_14_hashentry_t * data;}; 
typedef struct sigmatdtest_funtype_14_htbl_s * sigmatdtest_funtype_14_htbl_t;

struct sigmatdtest_funtype_14_s {uint32_t count;
        sigmatdtest_funtype_14_ftbl_t ftbl;
        sigmatdtest_funtype_14_htbl_t htbl;};
typedef struct sigmatdtest_funtype_14_s * sigmatdtest_funtype_14_t;

extern void release_sigmatdtest_funtype_14(sigmatdtest_funtype_14_t x);

extern sigmatdtest_funtype_14_t copy_sigmatdtest_funtype_14(sigmatdtest_funtype_14_t x);

uint32_t lookup_sigmatdtest_funtype_14(sigmatdtest_funtype_14_htbl_t htbl, uint8_t i, uint32_t ihash);

sigmatdtest_funtype_14_t dupdate_sigmatdtest_funtype_14(sigmatdtest_funtype_14_t a, uint8_t i, sigmatdtest_funtype_12_t v);

extern sigmatdtest_funtype_14_t update_sigmatdtest_funtype_14(sigmatdtest_funtype_14_t a, uint8_t i, sigmatdtest_funtype_12_t v);

extern bool_t equal_sigmatdtest_funtype_14(sigmatdtest_funtype_14_t x, sigmatdtest_funtype_14_t y);

extern char* json_sigmatdtest_funtype_14(sigmatdtest_funtype_14_t x);


//iparse

struct sigmatdtest_record_15_s {
        uint32_t count; 
        uint8_t depth;
        bool_t lflag;
        sigmatdtest_funtype_14_t scaf;
        sigmatopdown__ent_adt_t stack;};
typedef struct sigmatdtest_record_15_s * sigmatdtest_record_15_t;

extern sigmatdtest_record_15_t new_sigmatdtest_record_15(void);

extern void release_sigmatdtest_record_15(sigmatdtest_record_15_t x);

extern sigmatdtest_record_15_t copy_sigmatdtest_record_15(sigmatdtest_record_15_t x);

extern bool_t equal_sigmatdtest_record_15(sigmatdtest_record_15_t x, sigmatdtest_record_15_t y);
extern char * json_sigmatdtest_record_15(sigmatdtest_record_15_t x);

typedef struct actual_sigmatdtest_record_15_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdtest_record_15_t;
void release_sigmatdtest_record_15_ptr(pointer_t x, type_actual_t sigmatdtest_record_15);

extern bool_t equal_sigmatdtest_record_15_ptr(pointer_t x, pointer_t y, actual_sigmatdtest_record_15_t T);

extern char * json_sigmatdtest_record_15_ptr(pointer_t x,  actual_sigmatdtest_record_15_t T);

actual_sigmatdtest_record_15_t actual_sigmatdtest_record_15(void);

extern sigmatdtest_record_15_t update_sigmatdtest_record_15_depth(sigmatdtest_record_15_t x, uint8_t v);

extern sigmatdtest_record_15_t update_sigmatdtest_record_15_lflag(sigmatdtest_record_15_t x, bool_t v);

extern sigmatdtest_record_15_t update_sigmatdtest_record_15_scaf(sigmatdtest_record_15_t x, sigmatdtest_funtype_14_t v);

extern sigmatdtest_record_15_t update_sigmatdtest_record_15_stack(sigmatdtest_record_15_t x, sigmatopdown__ent_adt_t v);




struct sigmatdtest_closure_16_s;
        typedef struct sigmatdtest_closure_16_s * sigmatdtest_closure_16_t;

struct sigmatdtest_closure_16_s {uint32_t count;
         sigmatdtest_funtype_14_ftbl_t ftbl;
         sigmatdtest_funtype_14_htbl_t htbl;
        uint8_t fvar_1;
        sigmatdtest_funtype_12_t fvar_2;};

sigmatdtest_funtype_12_t f_sigmatdtest_closure_16(struct sigmatdtest_closure_16_s * closure, uint8_t bvar);

sigmatdtest_funtype_12_t m_sigmatdtest_closure_16(struct sigmatdtest_closure_16_s * closure, uint8_t bvar);

extern sigmatdtest_funtype_12_t h_sigmatdtest_closure_16(uint8_t ivar_23, uint8_t ivar_1, sigmatdtest_funtype_12_t ivar_6);

extern sigmatdtest_closure_16_t new_sigmatdtest_closure_16(void);

extern void release_sigmatdtest_closure_16(sigmatdtest_funtype_14_t closure);

extern sigmatdtest_closure_16_t copy_sigmatdtest_closure_16(sigmatdtest_closure_16_t x);


//iparse

struct sigmatdtest_array_17_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         sigmatopdown__ent_adt_t elems[]; };
typedef struct sigmatdtest_array_17_s * sigmatdtest_array_17_t;

extern sigmatdtest_array_17_t new_sigmatdtest_array_17(uint32_t size);

extern void release_sigmatdtest_array_17(sigmatdtest_array_17_t x);

extern sigmatdtest_array_17_t copy_sigmatdtest_array_17(sigmatdtest_array_17_t x);

extern bool_t equal_sigmatdtest_array_17(sigmatdtest_array_17_t x, sigmatdtest_array_17_t y);
extern char * json_sigmatdtest_array_17(sigmatdtest_array_17_t x);

typedef struct actual_sigmatdtest_array_17_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdtest_array_17_t;
void release_sigmatdtest_array_17_ptr(pointer_t x, type_actual_t sigmatdtest_array_17);

extern bool_t equal_sigmatdtest_array_17_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatdtest_array_17_ptr(pointer_t x, type_actual_t T);

actual_sigmatdtest_array_17_t actual_sigmatdtest_array_17(void);

extern sigmatdtest_array_17_t update_sigmatdtest_array_17(sigmatdtest_array_17_t x, uint32_t i, sigmatopdown__ent_adt_t v);

extern sigmatdtest_array_17_t upgrade_sigmatdtest_array_17(sigmatdtest_array_17_t x, uint32_t i, sigmatopdown__ent_adt_t v);


//iparse

struct sigmatdtest_array_18_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         sigmatdtest_array_17_t elems[]; };
typedef struct sigmatdtest_array_18_s * sigmatdtest_array_18_t;

extern sigmatdtest_array_18_t new_sigmatdtest_array_18(uint32_t size);

extern void release_sigmatdtest_array_18(sigmatdtest_array_18_t x);

extern sigmatdtest_array_18_t copy_sigmatdtest_array_18(sigmatdtest_array_18_t x);

extern bool_t equal_sigmatdtest_array_18(sigmatdtest_array_18_t x, sigmatdtest_array_18_t y);
extern char * json_sigmatdtest_array_18(sigmatdtest_array_18_t x);

typedef struct actual_sigmatdtest_array_18_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdtest_array_18_t;
void release_sigmatdtest_array_18_ptr(pointer_t x, type_actual_t sigmatdtest_array_18);

extern bool_t equal_sigmatdtest_array_18_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_sigmatdtest_array_18_ptr(pointer_t x, type_actual_t T);

actual_sigmatdtest_array_18_t actual_sigmatdtest_array_18(void);

extern sigmatdtest_array_18_t update_sigmatdtest_array_18(sigmatdtest_array_18_t x, uint32_t i, sigmatdtest_array_17_t v);

extern sigmatdtest_array_18_t upgrade_sigmatdtest_array_18(sigmatdtest_array_18_t x, uint32_t i, sigmatdtest_array_17_t v);


//iparse

struct sigmatdtest_record_19_s {
        uint32_t count; 
        sigmatdtest_array_18_t scaf;
        uint64_t depth;
        sigmatopdown__ent_adt_t stack;
        bool_t lflag;};
typedef struct sigmatdtest_record_19_s * sigmatdtest_record_19_t;

extern sigmatdtest_record_19_t new_sigmatdtest_record_19(void);

extern void release_sigmatdtest_record_19(sigmatdtest_record_19_t x);

extern sigmatdtest_record_19_t copy_sigmatdtest_record_19(sigmatdtest_record_19_t x);

extern bool_t equal_sigmatdtest_record_19(sigmatdtest_record_19_t x, sigmatdtest_record_19_t y);
extern char * json_sigmatdtest_record_19(sigmatdtest_record_19_t x);

typedef struct actual_sigmatdtest_record_19_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdtest_record_19_t;
void release_sigmatdtest_record_19_ptr(pointer_t x, type_actual_t sigmatdtest_record_19);

extern bool_t equal_sigmatdtest_record_19_ptr(pointer_t x, pointer_t y, actual_sigmatdtest_record_19_t T);

extern char * json_sigmatdtest_record_19_ptr(pointer_t x,  actual_sigmatdtest_record_19_t T);

actual_sigmatdtest_record_19_t actual_sigmatdtest_record_19(void);

extern sigmatdtest_record_19_t update_sigmatdtest_record_19_scaf(sigmatdtest_record_19_t x, sigmatdtest_array_18_t v);

extern sigmatdtest_record_19_t update_sigmatdtest_record_19_depth(sigmatdtest_record_19_t x, uint64_t v);

extern sigmatdtest_record_19_t update_sigmatdtest_record_19_stack(sigmatdtest_record_19_t x, sigmatopdown__ent_adt_t v);

extern sigmatdtest_record_19_t update_sigmatdtest_record_19_lflag(sigmatdtest_record_19_t x, bool_t v);




struct sigmatdtest_closure_20_s;
        typedef struct sigmatdtest_closure_20_s * sigmatdtest_closure_20_t;

struct sigmatdtest_closure_20_s {uint32_t count;
         sigmatdtest_funtype_12_ftbl_t ftbl;
         sigmatdtest_funtype_12_htbl_t htbl;};

sigmatopdown__ent_adt_t f_sigmatdtest_closure_20(struct sigmatdtest_closure_20_s * closure, uint8_t bvar);

sigmatopdown__ent_adt_t m_sigmatdtest_closure_20(struct sigmatdtest_closure_20_s * closure, uint8_t bvar);

extern sigmatopdown__ent_adt_t h_sigmatdtest_closure_20(uint8_t ivar_41);

extern sigmatdtest_closure_20_t new_sigmatdtest_closure_20(void);

extern void release_sigmatdtest_closure_20(sigmatdtest_funtype_12_t closure);

extern sigmatdtest_closure_20_t copy_sigmatdtest_closure_20(sigmatdtest_closure_20_t x);


//jsonparsefile

struct sigmatdtest_funtype_21_s;
        typedef struct sigmatdtest_funtype_21_s * sigmatdtest_funtype_21_t;

struct sigmatdtest_funtype_21_ftbl_s {sigmatdtest_funtype_12_t (* fptr)(struct sigmatdtest_funtype_21_s *, uint32_t);
        sigmatdtest_funtype_12_t (* mptr)(struct sigmatdtest_funtype_21_s *, uint32_t);
        void (* rptr)(struct sigmatdtest_funtype_21_s *);
        struct sigmatdtest_funtype_21_s * (* cptr)(struct sigmatdtest_funtype_21_s *);};
typedef struct sigmatdtest_funtype_21_ftbl_s * sigmatdtest_funtype_21_ftbl_t;

struct sigmatdtest_funtype_21_hashentry_s {uint32_t keyhash; uint32_t key; sigmatdtest_funtype_12_t value;}; 
typedef struct sigmatdtest_funtype_21_hashentry_s sigmatdtest_funtype_21_hashentry_t;

struct sigmatdtest_funtype_21_htbl_s {uint32_t size; uint32_t num_entries; sigmatdtest_funtype_21_hashentry_t * data;}; 
typedef struct sigmatdtest_funtype_21_htbl_s * sigmatdtest_funtype_21_htbl_t;

struct sigmatdtest_funtype_21_s {uint32_t count;
        sigmatdtest_funtype_21_ftbl_t ftbl;
        sigmatdtest_funtype_21_htbl_t htbl;};
typedef struct sigmatdtest_funtype_21_s * sigmatdtest_funtype_21_t;

extern void release_sigmatdtest_funtype_21(sigmatdtest_funtype_21_t x);

extern sigmatdtest_funtype_21_t copy_sigmatdtest_funtype_21(sigmatdtest_funtype_21_t x);

uint32_t lookup_sigmatdtest_funtype_21(sigmatdtest_funtype_21_htbl_t htbl, uint32_t i, uint32_t ihash);

sigmatdtest_funtype_21_t dupdate_sigmatdtest_funtype_21(sigmatdtest_funtype_21_t a, uint32_t i, sigmatdtest_funtype_12_t v);

extern sigmatdtest_funtype_21_t update_sigmatdtest_funtype_21(sigmatdtest_funtype_21_t a, uint32_t i, sigmatdtest_funtype_12_t v);

extern bool_t equal_sigmatdtest_funtype_21(sigmatdtest_funtype_21_t x, sigmatdtest_funtype_21_t y);

extern char* json_sigmatdtest_funtype_21(sigmatdtest_funtype_21_t x);


//jsonparsefile

struct sigmatdtest_record_22_s {
        uint32_t count; 
        uint8_t depth;
        bool_t lflag;
        sigmatdtest_funtype_21_t scaf;
        sigmatopdown__ent_adt_t stack;};
typedef struct sigmatdtest_record_22_s * sigmatdtest_record_22_t;

extern sigmatdtest_record_22_t new_sigmatdtest_record_22(void);

extern void release_sigmatdtest_record_22(sigmatdtest_record_22_t x);

extern sigmatdtest_record_22_t copy_sigmatdtest_record_22(sigmatdtest_record_22_t x);

extern bool_t equal_sigmatdtest_record_22(sigmatdtest_record_22_t x, sigmatdtest_record_22_t y);
extern char * json_sigmatdtest_record_22(sigmatdtest_record_22_t x);

typedef struct actual_sigmatdtest_record_22_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdtest_record_22_t;
void release_sigmatdtest_record_22_ptr(pointer_t x, type_actual_t sigmatdtest_record_22);

extern bool_t equal_sigmatdtest_record_22_ptr(pointer_t x, pointer_t y, actual_sigmatdtest_record_22_t T);

extern char * json_sigmatdtest_record_22_ptr(pointer_t x,  actual_sigmatdtest_record_22_t T);

actual_sigmatdtest_record_22_t actual_sigmatdtest_record_22(void);

extern sigmatdtest_record_22_t update_sigmatdtest_record_22_depth(sigmatdtest_record_22_t x, uint8_t v);

extern sigmatdtest_record_22_t update_sigmatdtest_record_22_lflag(sigmatdtest_record_22_t x, bool_t v);

extern sigmatdtest_record_22_t update_sigmatdtest_record_22_scaf(sigmatdtest_record_22_t x, sigmatdtest_funtype_21_t v);

extern sigmatdtest_record_22_t update_sigmatdtest_record_22_stack(sigmatdtest_record_22_t x, sigmatopdown__ent_adt_t v);




struct sigmatdtest_closure_23_s;
        typedef struct sigmatdtest_closure_23_s * sigmatdtest_closure_23_t;

struct sigmatdtest_closure_23_s {uint32_t count;
         sigmatdtest_funtype_21_ftbl_t ftbl;
         sigmatdtest_funtype_21_htbl_t htbl;
        uint32_t fvar_1;
        sigmatdtest_funtype_12_t fvar_2;};

sigmatdtest_funtype_12_t f_sigmatdtest_closure_23(struct sigmatdtest_closure_23_s * closure, uint32_t bvar);

sigmatdtest_funtype_12_t m_sigmatdtest_closure_23(struct sigmatdtest_closure_23_s * closure, uint32_t bvar);

extern sigmatdtest_funtype_12_t h_sigmatdtest_closure_23(uint32_t ivar_54, uint32_t ivar_14, sigmatdtest_funtype_12_t ivar_37);

extern sigmatdtest_closure_23_t new_sigmatdtest_closure_23(void);

extern void release_sigmatdtest_closure_23(sigmatdtest_funtype_21_t closure);

extern sigmatdtest_closure_23_t copy_sigmatdtest_closure_23(sigmatdtest_closure_23_t x);


//jsonparsefile

struct sigmatdtest_record_24_s {
        uint32_t count; 
        sigmatdtest_record_19_t project_1;
        uint8_t project_2;
        uint32_t project_3;};
typedef struct sigmatdtest_record_24_s * sigmatdtest_record_24_t;

extern sigmatdtest_record_24_t new_sigmatdtest_record_24(void);

extern void release_sigmatdtest_record_24(sigmatdtest_record_24_t x);

extern sigmatdtest_record_24_t copy_sigmatdtest_record_24(sigmatdtest_record_24_t x);

extern bool_t equal_sigmatdtest_record_24(sigmatdtest_record_24_t x, sigmatdtest_record_24_t y);
extern char * json_sigmatdtest_record_24(sigmatdtest_record_24_t x);

typedef struct actual_sigmatdtest_record_24_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_sigmatdtest_record_24_t;
void release_sigmatdtest_record_24_ptr(pointer_t x, type_actual_t sigmatdtest_record_24);

extern bool_t equal_sigmatdtest_record_24_ptr(pointer_t x, pointer_t y, actual_sigmatdtest_record_24_t T);

extern char * json_sigmatdtest_record_24_ptr(pointer_t x,  actual_sigmatdtest_record_24_t T);

actual_sigmatdtest_record_24_t actual_sigmatdtest_record_24(void);

extern sigmatdtest_record_24_t update_sigmatdtest_record_24_project_1(sigmatdtest_record_24_t x, sigmatdtest_record_19_t v);

extern sigmatdtest_record_24_t update_sigmatdtest_record_24_project_2(sigmatdtest_record_24_t x, uint8_t v);

extern sigmatdtest_record_24_t update_sigmatdtest_record_24_project_3(sigmatdtest_record_24_t x, uint32_t v);


//jsonparsefile

struct sigmatdtest_funtype_25_s;
        typedef struct sigmatdtest_funtype_25_s * sigmatdtest_funtype_25_t;

struct sigmatdtest_funtype_25_ftbl_s {sigmatdproof__parsetree_adt_t (* fptr)(struct sigmatdtest_funtype_25_s *, sigmatdtest_record_24_t);
        sigmatdproof__parsetree_adt_t (* mptr)(struct sigmatdtest_funtype_25_s *, sigmatdtest_record_19_t, uint8_t, uint32_t);
        void (* rptr)(struct sigmatdtest_funtype_25_s *);
        struct sigmatdtest_funtype_25_s * (* cptr)(struct sigmatdtest_funtype_25_s *);};
typedef struct sigmatdtest_funtype_25_ftbl_s * sigmatdtest_funtype_25_ftbl_t;

struct sigmatdtest_funtype_25_hashentry_s {uint32_t keyhash; sigmatdtest_record_24_t key; sigmatdproof__parsetree_adt_t value;}; 
typedef struct sigmatdtest_funtype_25_hashentry_s sigmatdtest_funtype_25_hashentry_t;

struct sigmatdtest_funtype_25_htbl_s {uint32_t size; uint32_t num_entries; sigmatdtest_funtype_25_hashentry_t * data;}; 
typedef struct sigmatdtest_funtype_25_htbl_s * sigmatdtest_funtype_25_htbl_t;

struct sigmatdtest_funtype_25_s {uint32_t count;
        sigmatdtest_funtype_25_ftbl_t ftbl;
        sigmatdtest_funtype_25_htbl_t htbl;};
typedef struct sigmatdtest_funtype_25_s * sigmatdtest_funtype_25_t;

extern void release_sigmatdtest_funtype_25(sigmatdtest_funtype_25_t x);

extern sigmatdtest_funtype_25_t copy_sigmatdtest_funtype_25(sigmatdtest_funtype_25_t x);

extern bool_t equal_sigmatdtest_funtype_25(sigmatdtest_funtype_25_t x, sigmatdtest_funtype_25_t y);

extern char* json_sigmatdtest_funtype_25(sigmatdtest_funtype_25_t x);



extern bool_t sigmatdtest__digit(uint8_t ivar_1);

extern bool_t sigmatdtest__any(uint8_t ivar_1);

extern bool_t sigmatdtest__whitespace(uint8_t ivar_1);

extern sigmatopdown__peg_adt_t sigmatdtest__pyaml(uint8_t ivar_1);

extern sigmatopdown__peg_adt_t sigmatdtest__pjson(uint8_t ivar_1);

extern sigmatdtest_array_7_t sigmatdtest__empty(uint8_t ivar_1);

extern sigmatdtest_funtype_9_t sigmatdtest__cat(uint8_t ivar_1, uint8_t ivar_2);

extern uint8_t sigmatdtest__tok0(uint8_t ivar_1);

extern uint8_t sigmatdtest__tok1(uint8_t ivar_1);

extern uint8_t sigmatdtest__emptydict(uint8_t ivar_1);

extern uint8_t sigmatdtest__obrace(uint8_t ivar_1);

extern uint8_t sigmatdtest__cbrace(uint8_t ivar_1);

extern uint8_t sigmatdtest__colon(uint8_t ivar_1);

extern sigmatdtest_array_7_t sigmatdtest__emptydict2(void);

extern sigmatdtest_array_7_t sigmatdtest__dict1(void);

extern sigmatopdown__ent_adt_t sigmatdtest__test0(void);

extern sigmatopdown__ent_adt_t sigmatdtest__test1(void);

extern sigmatopdown__ent_adt_t sigmatdtest__test11(void);

extern sigmatopdown__ent_adt_t sigmatdtest__test2(void);

extern sigmatopdown__ent_adt_t sigmatdtest__iparse(uint8_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatdtest_array_7_t ivar_3, uint8_t ivar_4, uint8_t ivar_5);

extern sigmatdproof__parsetree_adt_t sigmatdtest__jsonparsefile(bytestrings__bytestring_t ivar_1);
#endif