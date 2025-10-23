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
//iparse

struct ltedfapegtest_array_0_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
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

extern ltedfapegtest_array_0_t update_ltedfapegtest_array_0(ltedfapegtest_array_0_t x, uint32_t i, uint8_t v);

extern ltedfapegtest_array_0_t upgrade_ltedfapegtest_array_0(ltedfapegtest_array_0_t x, uint32_t i, uint8_t v);


//iparse

struct ltedfapegtest_funtype_1_s;
        typedef struct ltedfapegtest_funtype_1_s * ltedfapegtest_funtype_1_t;

struct ltedfapegtest_funtype_1_ftbl_s {ltedfapeg__ent_adt_t (* fptr)(struct ltedfapegtest_funtype_1_s *, uint8_t);
        ltedfapeg__ent_adt_t (* mptr)(struct ltedfapegtest_funtype_1_s *, uint8_t);
        void (* rptr)(struct ltedfapegtest_funtype_1_s *);
        struct ltedfapegtest_funtype_1_s * (* cptr)(struct ltedfapegtest_funtype_1_s *);};
typedef struct ltedfapegtest_funtype_1_ftbl_s * ltedfapegtest_funtype_1_ftbl_t;

struct ltedfapegtest_funtype_1_hashentry_s {uint32_t keyhash; uint8_t key; ltedfapeg__ent_adt_t value;}; 
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

extern ltedfapegtest_funtype_1_t dupdate_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_t a, uint8_t i, ltedfapeg__ent_adt_t v);

extern ltedfapegtest_funtype_1_t update_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_t a, uint8_t i, ltedfapeg__ent_adt_t v);

extern bool_t equal_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_t x, ltedfapegtest_funtype_1_t y);

extern char* json_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_t x);




struct ltedfapegtest_closure_2_s;
        typedef struct ltedfapegtest_closure_2_s * ltedfapegtest_closure_2_t;

struct ltedfapegtest_closure_2_s {uint32_t count;
         ltedfapegtest_funtype_1_ftbl_t ftbl;
         ltedfapegtest_funtype_1_htbl_t htbl;};

ltedfapeg__ent_adt_t f_ltedfapegtest_closure_2(struct ltedfapegtest_closure_2_s * closure, uint8_t bvar);

ltedfapeg__ent_adt_t m_ltedfapegtest_closure_2(struct ltedfapegtest_closure_2_s * closure, uint8_t bvar);

extern ltedfapeg__ent_adt_t h_ltedfapegtest_closure_2(uint8_t ivar_10);

ltedfapegtest_closure_2_t new_ltedfapegtest_closure_2(void);

void release_ltedfapegtest_closure_2(ltedfapegtest_funtype_1_t closure);

ltedfapegtest_closure_2_t copy_ltedfapegtest_closure_2(ltedfapegtest_closure_2_t x);


//iparse

struct ltedfapegtest_array_3_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltedfapeg__ent_adt_t elems[]; };
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

extern ltedfapegtest_array_3_t update_ltedfapegtest_array_3(ltedfapegtest_array_3_t x, uint32_t i, ltedfapeg__ent_adt_t v);

extern ltedfapegtest_array_3_t upgrade_ltedfapegtest_array_3(ltedfapegtest_array_3_t x, uint32_t i, ltedfapeg__ent_adt_t v);


//iparse

struct ltedfapegtest_array_4_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         ltedfapegtest_array_3_t elems[]; };
typedef struct ltedfapegtest_array_4_s * ltedfapegtest_array_4_t;

extern ltedfapegtest_array_4_t new_ltedfapegtest_array_4(uint32_t size);

extern void release_ltedfapegtest_array_4(ltedfapegtest_array_4_t x);

extern ltedfapegtest_array_4_t copy_ltedfapegtest_array_4(ltedfapegtest_array_4_t x);

extern bool_t equal_ltedfapegtest_array_4(ltedfapegtest_array_4_t x, ltedfapegtest_array_4_t y);
extern char * json_ltedfapegtest_array_4(ltedfapegtest_array_4_t x);

typedef struct actual_ltedfapegtest_array_4_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegtest_array_4_t;
extern void release_ltedfapegtest_array_4_ptr(pointer_t x, type_actual_t ltedfapegtest_array_4);

extern bool_t equal_ltedfapegtest_array_4_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_ltedfapegtest_array_4_ptr(pointer_t x, type_actual_t T);

actual_ltedfapegtest_array_4_t actual_ltedfapegtest_array_4(void);

extern ltedfapegtest_array_4_t update_ltedfapegtest_array_4(ltedfapegtest_array_4_t x, uint32_t i, ltedfapegtest_array_3_t v);

extern ltedfapegtest_array_4_t upgrade_ltedfapegtest_array_4(ltedfapegtest_array_4_t x, uint32_t i, ltedfapegtest_array_3_t v);


//iparse

struct ltedfapegtest_record_5_s {
        uint32_t count; 
        ltedfapegtest_array_4_t scaf;
        uint64_t depth;
        ltedfapeg__ent_adt_t stack;
        bool_t lflag;};
typedef struct ltedfapegtest_record_5_s * ltedfapegtest_record_5_t;

extern ltedfapegtest_record_5_t new_ltedfapegtest_record_5(void);

extern void release_ltedfapegtest_record_5(ltedfapegtest_record_5_t x);

extern ltedfapegtest_record_5_t copy_ltedfapegtest_record_5(ltedfapegtest_record_5_t x);

extern bool_t equal_ltedfapegtest_record_5(ltedfapegtest_record_5_t x, ltedfapegtest_record_5_t y);
extern char * json_ltedfapegtest_record_5(ltedfapegtest_record_5_t x);

typedef struct actual_ltedfapegtest_record_5_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_ltedfapegtest_record_5_t;
extern void release_ltedfapegtest_record_5_ptr(pointer_t x, type_actual_t ltedfapegtest_record_5);

extern bool_t equal_ltedfapegtest_record_5_ptr(pointer_t x, pointer_t y, actual_ltedfapegtest_record_5_t T);

extern char * json_ltedfapegtest_record_5_ptr(pointer_t x,  actual_ltedfapegtest_record_5_t T);

actual_ltedfapegtest_record_5_t actual_ltedfapegtest_record_5(void);

extern ltedfapegtest_record_5_t update_ltedfapegtest_record_5_scaf(ltedfapegtest_record_5_t x, ltedfapegtest_array_4_t v);

extern ltedfapegtest_record_5_t update_ltedfapegtest_record_5_depth(ltedfapegtest_record_5_t x, uint64_t v);

extern ltedfapegtest_record_5_t update_ltedfapegtest_record_5_stack(ltedfapegtest_record_5_t x, ltedfapeg__ent_adt_t v);

extern ltedfapegtest_record_5_t update_ltedfapegtest_record_5_lflag(ltedfapegtest_record_5_t x, bool_t v);


//iparse

struct ltedfapegtest_funtype_6_s;
        typedef struct ltedfapegtest_funtype_6_s * ltedfapegtest_funtype_6_t;

struct ltedfapegtest_funtype_6_ftbl_s {ltedfapegtest_funtype_1_t (* fptr)(struct ltedfapegtest_funtype_6_s *, uint8_t);
        ltedfapegtest_funtype_1_t (* mptr)(struct ltedfapegtest_funtype_6_s *, uint8_t);
        void (* rptr)(struct ltedfapegtest_funtype_6_s *);
        struct ltedfapegtest_funtype_6_s * (* cptr)(struct ltedfapegtest_funtype_6_s *);};
typedef struct ltedfapegtest_funtype_6_ftbl_s * ltedfapegtest_funtype_6_ftbl_t;

struct ltedfapegtest_funtype_6_hashentry_s {uint32_t keyhash; uint8_t key; ltedfapegtest_funtype_1_t value;}; 
typedef struct ltedfapegtest_funtype_6_hashentry_s ltedfapegtest_funtype_6_hashentry_t;

struct ltedfapegtest_funtype_6_htbl_s {uint32_t size; uint32_t num_entries; ltedfapegtest_funtype_6_hashentry_t * data;}; 
typedef struct ltedfapegtest_funtype_6_htbl_s * ltedfapegtest_funtype_6_htbl_t;

struct ltedfapegtest_funtype_6_s {uint32_t count;
        ltedfapegtest_funtype_6_ftbl_t ftbl;
        ltedfapegtest_funtype_6_htbl_t htbl;};
typedef struct ltedfapegtest_funtype_6_s * ltedfapegtest_funtype_6_t;

extern void release_ltedfapegtest_funtype_6(ltedfapegtest_funtype_6_t x);

extern ltedfapegtest_funtype_6_t copy_ltedfapegtest_funtype_6(ltedfapegtest_funtype_6_t x);

extern uint32_t lookup_ltedfapegtest_funtype_6(ltedfapegtest_funtype_6_htbl_t htbl, uint8_t i, uint32_t ihash);

extern ltedfapegtest_funtype_6_t dupdate_ltedfapegtest_funtype_6(ltedfapegtest_funtype_6_t a, uint8_t i, ltedfapegtest_funtype_1_t v);

extern ltedfapegtest_funtype_6_t update_ltedfapegtest_funtype_6(ltedfapegtest_funtype_6_t a, uint8_t i, ltedfapegtest_funtype_1_t v);

extern bool_t equal_ltedfapegtest_funtype_6(ltedfapegtest_funtype_6_t x, ltedfapegtest_funtype_6_t y);

extern char* json_ltedfapegtest_funtype_6(ltedfapegtest_funtype_6_t x);



extern ltedfapeg__prepeg_adt_t ltedfapegtest__djson(uint8_t ivar_1);

extern ltedfapeg__prepeg_adt_t ltedfapegtest__djsontable(uint8_t ivar_5);

extern ltedfapegtest_array_0_t ltedfapegtest__empty(uint8_t ivar_1);

extern ltedfapegtest_funtype_2_t ltedfapegtest__cat(uint8_t ivar_1, uint8_t ivar_2);

extern uint8_t ltedfapegtest__tok0(uint8_t ivar_1);

extern uint8_t ltedfapegtest__tok1(uint8_t ivar_1);

extern uint8_t ltedfapegtest__emptydict(uint8_t ivar_1);

extern uint8_t ltedfapegtest__obrace(uint8_t ivar_1);

extern uint8_t ltedfapegtest__cbrace(uint8_t ivar_1);

extern uint8_t ltedfapegtest__colon(uint8_t ivar_1);

extern ltedfapegtest_array_0_t ltedfapegtest__emptydict2(void);

extern ltedfapegtest_array_0_t ltedfapegtest__dict1(void);

extern ltedfapeg__ent_adt_t ltedfapegtest__iparse(uint8_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegtest_array_0_t ivar_3, uint8_t ivar_4, uint8_t ivar_5);

extern bool_t ltedfapegtest__jsonreadfile(bytestrings__bytestring_t ivar_1);

extern bool_t ltedfapegtest__jsonreadfileinit(bytestrings__bytestring_t ivar_1);

extern bool_t ltedfapegtest__jsonparsecheckfile(bytestrings__bytestring_t ivar_1);

extern ltedfapegproof__parsetree_adt_t ltedfapegtest__jsonparsefile(bytestrings__bytestring_t ivar_1);

extern ltedfapeg__ent_adt_t ltedfapegtest__jsonpureparsefile(bytestrings__bytestring_t ivar_1);
#endif