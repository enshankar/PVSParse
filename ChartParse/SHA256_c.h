//Code generated using pvs2ir
#ifndef _SHA256_h 
#define _SHA256_h

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

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "finite_sequences_c.h"

#include "integer_bv_ops_c.h"

#include "bv_c.h"

#include "bit_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "rotate_c.h"

//cc -O3 -Wall -o SHA256 -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/finite_sequences_c.c /Users/e21660/shankar/pvs.git/lib/integer_bv_ops_c.c /Users/e21660/shankar/pvs.git/lib/bv_c.c /Users/e21660/shankar/pvs.git/lib/bit_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c SHA256_c.c rotate_c.c -lgmp 
//hex2bytestring

struct SHA256_array_0_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct SHA256_array_0_s * SHA256_array_0_t;

extern SHA256_array_0_t new_SHA256_array_0(uint32_t size);

extern void release_SHA256_array_0(SHA256_array_0_t x);

extern SHA256_array_0_t copy_SHA256_array_0(SHA256_array_0_t x);

extern bool_t equal_SHA256_array_0(SHA256_array_0_t x, SHA256_array_0_t y);
extern char * json_SHA256_array_0(SHA256_array_0_t x);

typedef struct actual_SHA256_array_0_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_SHA256_array_0_t;
void release_SHA256_array_0_ptr(pointer_t x, type_actual_t SHA256_array_0);

extern bool_t equal_SHA256_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_SHA256_array_0_ptr(pointer_t x, type_actual_t T);

actual_SHA256_array_0_t actual_SHA256_array_0(void);

extern SHA256_array_0_t update_SHA256_array_0(SHA256_array_0_t x, uint32_t i, uint8_t v);

extern SHA256_array_0_t upgrade_SHA256_array_0(SHA256_array_0_t x, uint32_t i, uint8_t v);


//hex2bytestring

struct SHA256_record_1_s {
        uint32_t count; 
        uint32_t length;
        SHA256_array_0_t seq;};
typedef struct SHA256_record_1_s * SHA256_record_1_t;

extern SHA256_record_1_t new_SHA256_record_1(void);

extern void release_SHA256_record_1(SHA256_record_1_t x);

extern SHA256_record_1_t copy_SHA256_record_1(SHA256_record_1_t x);

extern bool_t equal_SHA256_record_1(SHA256_record_1_t x, SHA256_record_1_t y);
extern char * json_SHA256_record_1(SHA256_record_1_t x);

typedef struct actual_SHA256_record_1_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_SHA256_record_1_t;
void release_SHA256_record_1_ptr(pointer_t x, type_actual_t SHA256_record_1);

extern bool_t equal_SHA256_record_1_ptr(pointer_t x, pointer_t y, actual_SHA256_record_1_t T);

extern char * json_SHA256_record_1_ptr(pointer_t x,  actual_SHA256_record_1_t T);

actual_SHA256_record_1_t actual_SHA256_record_1(void);

extern SHA256_record_1_t update_SHA256_record_1_length(SHA256_record_1_t x, uint32_t v);

extern SHA256_record_1_t update_SHA256_record_1_seq(SHA256_record_1_t x, SHA256_array_0_t v);


//bytes2uint32array

struct SHA256_array_2_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint32_t elems[]; };
typedef struct SHA256_array_2_s * SHA256_array_2_t;

extern SHA256_array_2_t new_SHA256_array_2(uint32_t size);

extern void release_SHA256_array_2(SHA256_array_2_t x);

extern SHA256_array_2_t copy_SHA256_array_2(SHA256_array_2_t x);

extern bool_t equal_SHA256_array_2(SHA256_array_2_t x, SHA256_array_2_t y);
extern char * json_SHA256_array_2(SHA256_array_2_t x);

typedef struct actual_SHA256_array_2_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_SHA256_array_2_t;
void release_SHA256_array_2_ptr(pointer_t x, type_actual_t SHA256_array_2);

extern bool_t equal_SHA256_array_2_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_SHA256_array_2_ptr(pointer_t x, type_actual_t T);

actual_SHA256_array_2_t actual_SHA256_array_2(void);

extern SHA256_array_2_t update_SHA256_array_2(SHA256_array_2_t x, uint32_t i, uint32_t v);

extern SHA256_array_2_t upgrade_SHA256_array_2(SHA256_array_2_t x, uint32_t i, uint32_t v);


//extractBlocks

struct SHA256_funtype_3_s;
        typedef struct SHA256_funtype_3_s * SHA256_funtype_3_t;

struct SHA256_funtype_3_ftbl_s {SHA256_array_2_t (* fptr)(struct SHA256_funtype_3_s *, uint32_t);
        SHA256_array_2_t (* mptr)(struct SHA256_funtype_3_s *, uint32_t);
        void (* rptr)(struct SHA256_funtype_3_s *);
        struct SHA256_funtype_3_s * (* cptr)(struct SHA256_funtype_3_s *);};
typedef struct SHA256_funtype_3_ftbl_s * SHA256_funtype_3_ftbl_t;

struct SHA256_funtype_3_hashentry_s {uint32_t keyhash; uint32_t key; SHA256_array_2_t value;}; 
typedef struct SHA256_funtype_3_hashentry_s SHA256_funtype_3_hashentry_t;

struct SHA256_funtype_3_htbl_s {uint32_t size; uint32_t num_entries; SHA256_funtype_3_hashentry_t * data;}; 
typedef struct SHA256_funtype_3_htbl_s * SHA256_funtype_3_htbl_t;

struct SHA256_funtype_3_s {uint32_t count;
        SHA256_funtype_3_ftbl_t ftbl;
        SHA256_funtype_3_htbl_t htbl;};
typedef struct SHA256_funtype_3_s * SHA256_funtype_3_t;

extern void release_SHA256_funtype_3(SHA256_funtype_3_t x);

extern SHA256_funtype_3_t copy_SHA256_funtype_3(SHA256_funtype_3_t x);

uint32_t lookup_SHA256_funtype_3(SHA256_funtype_3_htbl_t htbl, uint32_t i, uint32_t ihash);

SHA256_funtype_3_t dupdate_SHA256_funtype_3(SHA256_funtype_3_t a, uint32_t i, SHA256_array_2_t v);

extern SHA256_funtype_3_t update_SHA256_funtype_3(SHA256_funtype_3_t a, uint32_t i, SHA256_array_2_t v);

extern bool_t equal_SHA256_funtype_3(SHA256_funtype_3_t x, SHA256_funtype_3_t y);

extern char* json_SHA256_funtype_3(SHA256_funtype_3_t x);




struct SHA256_closure_4_s;
        typedef struct SHA256_closure_4_s * SHA256_closure_4_t;

struct SHA256_closure_4_s {uint32_t count;
         SHA256_funtype_3_ftbl_t ftbl;
         SHA256_funtype_3_htbl_t htbl;
        bytestrings__bytestring_t fvar_1;};

SHA256_array_2_t f_SHA256_closure_4(struct SHA256_closure_4_s * closure, uint32_t bvar);

SHA256_array_2_t m_SHA256_closure_4(struct SHA256_closure_4_s * closure, uint32_t bvar);

extern SHA256_array_2_t h_SHA256_closure_4(uint32_t ivar_13, bytestrings__bytestring_t ivar_1);

extern SHA256_closure_4_t new_SHA256_closure_4(void);

extern void release_SHA256_closure_4(SHA256_funtype_3_t closure);

extern SHA256_closure_4_t copy_SHA256_closure_4(SHA256_closure_4_t x);



extern uint32_t SHA256__h0(void);

extern uint32_t SHA256__h1(void);

extern uint32_t SHA256__h2(void);

extern uint32_t SHA256__h3(void);

extern uint32_t SHA256__h4(void);

extern uint32_t SHA256__h5(void);

extern uint32_t SHA256__h6(void);

extern uint32_t SHA256__h7(void);

extern uint32_t SHA256__h(uint8_t ivar_1);

extern uint32_t SHA256__k(uint8_t ivar_1);

extern bool_t SHA256__digitp(uint8_t ivar_1);

extern bool_t SHA256__hexalphap(uint8_t ivar_1);

extern bool_t SHA256__hexdigitp(uint8_t ivar_1);

extern uint8_t SHA256__hexvalue(uint8_t ivar_1);

extern uint8_t SHA256__hex2byte(uint8_t ivar_1, uint8_t ivar_2);

extern bytestrings__bytestring_t SHA256__hex2bytestring(bytestrings__bytestring_t ivar_1);

extern bytestrings__bytestring_t SHA256__test_hex2bytestring(void);

extern uint8_t SHA256__hex0(uint8_t ivar_1);

extern uint8_t SHA256__hex1(uint8_t ivar_1);

extern bytestrings__bytestring_t SHA256__bytestring2hexstring(bytestrings__bytestring_t ivar_1);

extern bytestrings__bytestring_t SHA256__test_bytestring2hexstring(void);

extern uint32_t SHA256__bytes2uint32(bytestrings__bytestring_t ivar_1, uint32_t ivar_2);

extern bool_t SHA256__equalUpto(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2, uint32_t ivar_3);

extern SHA256_array_2_t SHA256__bytes2uint32array(bytestrings__bytestring_t ivar_1);

extern bytestrings__bytestring_t SHA256__w128rightrotate(bytestrings__bytestring_t ivar_1, uint8_t ivar_2);

extern bytestrings__bytestring_t SHA256__padMessage(bytestrings__bytestring_t ivar_1);

extern SHA256_funtype_3_t SHA256__extractBlocks(bytestrings__bytestring_t ivar_1);

extern SHA256_array_2_t SHA256__w0(SHA256_array_2_t ivar_1);

extern SHA256_array_2_t SHA256__extendW(SHA256_array_2_t ivar_1, uint8_t ivar_2);

extern SHA256_array_2_t SHA256__sha256rec(SHA256_array_2_t ivar_1, SHA256_array_2_t ivar_2, uint8_t ivar_3);

extern SHA256_array_2_t SHA256__sha256(SHA256_array_2_t ivar_1, SHA256_array_2_t ivar_2);

extern bytestrings__bytestring_t SHA256__digest(SHA256_array_2_t ivar_1);

extern SHA256_array_2_t SHA256__updateHash(SHA256_array_2_t ivar_1, SHA256_array_2_t ivar_2);

extern SHA256_array_2_t SHA256__sha256message_rec(bytestrings__bytestring_t ivar_1, uint32_t ivar_2, SHA256_array_2_t ivar_13);

extern bytestrings__bytestring_t SHA256__sha256message(bytestrings__bytestring_t ivar_1);

extern bytestrings__bytestring_t SHA256__hexsha256message(bytestrings__bytestring_t ivar_1);
#endif