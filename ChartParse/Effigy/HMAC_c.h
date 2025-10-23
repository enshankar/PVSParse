//Code generated using pvs2ir
#ifndef _HMAC_h 
#define _HMAC_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

#include "bytestrings_c.h"

#include "gen_strings_c.h"

#include "strings_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "integer_bv_ops_c.h"

#include "bv_c.h"

#include "bit_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "finite_sequences_c.h"

#include "real_defs_c.h"

#include "SHA256_c.h"

#include "rotate_c.h"

//cc -O3 -Wall -o HMAC -I /Users/e21660/shankar/pvs.git/src/groundeval/ /Users/e21660/shankar/pvs.git/src/groundeval/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/integer_bv_ops_c.c /Users/e21660/shankar/pvs.git/lib/bv_c.c /Users/e21660/shankar/pvs.git/lib/bit_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/finite_sequences_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c HMAC_c.c SHA256_c.c rotate_c.c -lgmp 

struct HMAC_funtype_0_s;
        typedef struct HMAC_funtype_0_s * HMAC_funtype_0_t;

struct HMAC_funtype_0_ftbl_s {bytestrings__bytestring_t (* fptr)(struct HMAC_funtype_0_s *, bytestrings__bytestring_t);
        bytestrings__bytestring_t (* mptr)(struct HMAC_funtype_0_s *, bytestrings__bytestring_t);
        void (* rptr)(struct HMAC_funtype_0_s *);
        struct HMAC_funtype_0_s * (* cptr)(struct HMAC_funtype_0_s *);};
typedef struct HMAC_funtype_0_ftbl_s * HMAC_funtype_0_ftbl_t;

struct HMAC_funtype_0_hashentry_s {uint32_t keyhash; bytestrings__bytestring_t key; bytestrings__bytestring_t value;}; 
typedef struct HMAC_funtype_0_hashentry_s HMAC_funtype_0_hashentry_t;

struct HMAC_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; HMAC_funtype_0_hashentry_t * data;}; 
typedef struct HMAC_funtype_0_htbl_s * HMAC_funtype_0_htbl_t;

struct HMAC_funtype_0_s {uint32_t count;
        HMAC_funtype_0_ftbl_t ftbl;
        HMAC_funtype_0_htbl_t htbl;};
typedef struct HMAC_funtype_0_s * HMAC_funtype_0_t;

extern void release_HMAC_funtype_0(HMAC_funtype_0_t x);

extern HMAC_funtype_0_t copy_HMAC_funtype_0(HMAC_funtype_0_t x);

extern bool_t equal_HMAC_funtype_0(HMAC_funtype_0_t x, HMAC_funtype_0_t y);




struct HMAC_closure_1_s;
        typedef struct HMAC_closure_1_s * HMAC_closure_1_t;

struct HMAC_closure_1_s {uint32_t count;
         HMAC_funtype_0_ftbl_t ftbl;
         HMAC_funtype_0_htbl_t htbl;
        uint8_t fvar_1;};

bytestrings__bytestring_t f_HMAC_closure_1(struct HMAC_closure_1_s * closure, bytestrings__bytestring_t bvar);

bytestrings__bytestring_t m_HMAC_closure_1(struct HMAC_closure_1_s * closure, bytestrings__bytestring_t bvar);

extern bytestrings__bytestring_t h_HMAC_closure_1(bytestrings__bytestring_t ivar_3, uint8_t ivar_1);

extern HMAC_closure_1_t new_HMAC_closure_1(void);

extern void release_HMAC_closure_1(HMAC_funtype_0_t closure);

extern HMAC_closure_1_t copy_HMAC_closure_1(HMAC_closure_1_t x);



struct HMAC_array_2_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct HMAC_array_2_s * HMAC_array_2_t;

extern HMAC_array_2_t new_HMAC_array_2(uint32_t size);

extern void release_HMAC_array_2(HMAC_array_2_t x);

extern HMAC_array_2_t copy_HMAC_array_2(HMAC_array_2_t x);

extern bool_t equal_HMAC_array_2(HMAC_array_2_t x, HMAC_array_2_t y);
typedef struct actual_HMAC_array_2_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_HMAC_array_2_t;

void release_HMAC_array_2_ptr(pointer_t x, type_actual_t HMAC_array_2);
extern bool_t equal_HMAC_array_2_ptr(pointer_t x, pointer_t y, type_actual_t T);

actual_HMAC_array_2_t actual_HMAC_array_2(void);

extern HMAC_array_2_t update_HMAC_array_2(HMAC_array_2_t x, uint32_t i, uint8_t v);

extern HMAC_array_2_t upgrade_HMAC_array_2(HMAC_array_2_t x, uint32_t i, uint8_t v);



struct HMAC_record_3_s {
        uint32_t count; 
        uint32_t length;
        HMAC_array_2_t seq;};
typedef struct HMAC_record_3_s * HMAC_record_3_t;

extern HMAC_record_3_t new_HMAC_record_3(void);

extern void release_HMAC_record_3(HMAC_record_3_t x);

extern HMAC_record_3_t copy_HMAC_record_3(HMAC_record_3_t x);

extern bool_t equal_HMAC_record_3(HMAC_record_3_t x, HMAC_record_3_t y);
typedef struct actual_HMAC_record_3_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_HMAC_record_3_t;

void release_HMAC_record_3_ptr(pointer_t x, type_actual_t HMAC_record_3);
extern bool_t equal_HMAC_record_3_ptr(pointer_t x, pointer_t y, actual_HMAC_record_3_t T);

actual_HMAC_record_3_t actual_HMAC_record_3(void);

extern HMAC_record_3_t update_HMAC_record_3_length(HMAC_record_3_t x, uint32_t v);

extern HMAC_record_3_t update_HMAC_record_3_seq(HMAC_record_3_t x, HMAC_array_2_t v);



struct HMAC_record_4_s {
        uint32_t count; 
        HMAC_record_3_t project_1;
        HMAC_record_3_t project_2;};
typedef struct HMAC_record_4_s * HMAC_record_4_t;

extern HMAC_record_4_t new_HMAC_record_4(void);

extern void release_HMAC_record_4(HMAC_record_4_t x);

extern HMAC_record_4_t copy_HMAC_record_4(HMAC_record_4_t x);

extern bool_t equal_HMAC_record_4(HMAC_record_4_t x, HMAC_record_4_t y);
typedef struct actual_HMAC_record_4_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_HMAC_record_4_t;

void release_HMAC_record_4_ptr(pointer_t x, type_actual_t HMAC_record_4);
extern bool_t equal_HMAC_record_4_ptr(pointer_t x, pointer_t y, actual_HMAC_record_4_t T);

actual_HMAC_record_4_t actual_HMAC_record_4(void);

extern HMAC_record_4_t update_HMAC_record_4_project_1(HMAC_record_4_t x, HMAC_record_3_t v);

extern HMAC_record_4_t update_HMAC_record_4_project_2(HMAC_record_4_t x, HMAC_record_3_t v);



struct HMAC_funtype_5_s;
        typedef struct HMAC_funtype_5_s * HMAC_funtype_5_t;

struct HMAC_funtype_5_ftbl_s {HMAC_record_3_t (* fptr)(struct HMAC_funtype_5_s *, HMAC_record_4_t);
        HMAC_record_3_t (* mptr)(struct HMAC_funtype_5_s *, HMAC_record_3_t, HMAC_record_3_t);
        void (* rptr)(struct HMAC_funtype_5_s *);
        struct HMAC_funtype_5_s * (* cptr)(struct HMAC_funtype_5_s *);};
typedef struct HMAC_funtype_5_ftbl_s * HMAC_funtype_5_ftbl_t;

struct HMAC_funtype_5_hashentry_s {uint32_t keyhash; HMAC_record_4_t key; HMAC_record_3_t value;}; 
typedef struct HMAC_funtype_5_hashentry_s HMAC_funtype_5_hashentry_t;

struct HMAC_funtype_5_htbl_s {uint32_t size; uint32_t num_entries; HMAC_funtype_5_hashentry_t * data;}; 
typedef struct HMAC_funtype_5_htbl_s * HMAC_funtype_5_htbl_t;

struct HMAC_funtype_5_s {uint32_t count;
        HMAC_funtype_5_ftbl_t ftbl;
        HMAC_funtype_5_htbl_t htbl;};
typedef struct HMAC_funtype_5_s * HMAC_funtype_5_t;

extern void release_HMAC_funtype_5(HMAC_funtype_5_t x);

extern HMAC_funtype_5_t copy_HMAC_funtype_5(HMAC_funtype_5_t x);

extern bool_t equal_HMAC_funtype_5(HMAC_funtype_5_t x, HMAC_funtype_5_t y);




struct HMAC_closure_6_s;
        typedef struct HMAC_closure_6_s * HMAC_closure_6_t;

struct HMAC_closure_6_s {uint32_t count;
         HMAC_funtype_5_ftbl_t ftbl;
         HMAC_funtype_5_htbl_t htbl;
        uint8_t fvar_1;};

HMAC_record_3_t f_HMAC_closure_6(struct HMAC_closure_6_s * closure, HMAC_record_4_t bvar);

HMAC_record_3_t m_HMAC_closure_6(struct HMAC_closure_6_s * closure, HMAC_record_3_t bvar_1, HMAC_record_3_t bvar_2);

extern HMAC_record_3_t h_HMAC_closure_6(HMAC_record_3_t ivar_3, HMAC_record_3_t ivar_4, uint8_t ivar_1);

extern HMAC_closure_6_t new_HMAC_closure_6(void);

extern void release_HMAC_closure_6(HMAC_funtype_5_t closure);

extern HMAC_closure_6_t copy_HMAC_closure_6(HMAC_closure_6_t x);




struct HMAC_closure_7_s;
        typedef struct HMAC_closure_7_s * HMAC_closure_7_t;

struct HMAC_closure_7_s {uint32_t count;
         HMAC_funtype_0_ftbl_t ftbl;
         HMAC_funtype_0_htbl_t htbl;};

HMAC_record_3_t f_HMAC_closure_7(struct HMAC_closure_7_s * closure, HMAC_record_3_t bvar);

HMAC_record_3_t m_HMAC_closure_7(struct HMAC_closure_7_s * closure, HMAC_record_3_t bvar);

extern HMAC_record_3_t h_HMAC_closure_7(HMAC_record_3_t ivar_11);

extern HMAC_closure_7_t new_HMAC_closure_7(void);

extern void release_HMAC_closure_7(HMAC_funtype_0_t closure);

extern HMAC_closure_7_t copy_HMAC_closure_7(HMAC_closure_7_t x);



struct HMAC_funtype_8_s;
        typedef struct HMAC_funtype_8_s * HMAC_funtype_8_t;

struct HMAC_funtype_8_ftbl_s {uint32_t (* fptr)(struct HMAC_funtype_8_s *, mpz_ptr_t);
        uint32_t (* mptr)(struct HMAC_funtype_8_s *, mpz_ptr_t);
        void (* rptr)(struct HMAC_funtype_8_s *);
        struct HMAC_funtype_8_s * (* cptr)(struct HMAC_funtype_8_s *);};
typedef struct HMAC_funtype_8_ftbl_s * HMAC_funtype_8_ftbl_t;

struct HMAC_funtype_8_hashentry_s {uint32_t keyhash; mpz_ptr_t key; uint32_t value;}; 
typedef struct HMAC_funtype_8_hashentry_s HMAC_funtype_8_hashentry_t;

struct HMAC_funtype_8_htbl_s {uint32_t size; uint32_t num_entries; HMAC_funtype_8_hashentry_t * data;}; 
typedef struct HMAC_funtype_8_htbl_s * HMAC_funtype_8_htbl_t;

struct HMAC_funtype_8_s {uint32_t count;
        HMAC_funtype_8_ftbl_t ftbl;
        HMAC_funtype_8_htbl_t htbl;};
typedef struct HMAC_funtype_8_s * HMAC_funtype_8_t;

extern void release_HMAC_funtype_8(HMAC_funtype_8_t x);

extern HMAC_funtype_8_t copy_HMAC_funtype_8(HMAC_funtype_8_t x);

uint32_t lookup_HMAC_funtype_8(HMAC_funtype_8_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

HMAC_funtype_8_t dupdate_HMAC_funtype_8(HMAC_funtype_8_t a, mpz_ptr_t i, uint32_t v);

extern HMAC_funtype_8_t update_HMAC_funtype_8(HMAC_funtype_8_t a, mpz_ptr_t i, uint32_t v);

extern bool_t equal_HMAC_funtype_8(HMAC_funtype_8_t x, HMAC_funtype_8_t y);



struct HMAC_record_9_s {
        uint32_t count; 
        mpz_t length;
        HMAC_funtype_8_t seq;};
typedef struct HMAC_record_9_s * HMAC_record_9_t;

extern HMAC_record_9_t new_HMAC_record_9(void);

extern void release_HMAC_record_9(HMAC_record_9_t x);

extern HMAC_record_9_t copy_HMAC_record_9(HMAC_record_9_t x);

extern bool_t equal_HMAC_record_9(HMAC_record_9_t x, HMAC_record_9_t y);
typedef struct actual_HMAC_record_9_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_HMAC_record_9_t;

void release_HMAC_record_9_ptr(pointer_t x, type_actual_t HMAC_record_9);
extern bool_t equal_HMAC_record_9_ptr(pointer_t x, pointer_t y, actual_HMAC_record_9_t T);

actual_HMAC_record_9_t actual_HMAC_record_9(void);

extern HMAC_record_9_t update_HMAC_record_9_length(HMAC_record_9_t x, mpz_ptr_t v);

extern HMAC_record_9_t update_HMAC_record_9_seq(HMAC_record_9_t x, HMAC_funtype_8_t v);



extern HMAC_funtype_0_t HMAC__padright(uint8_t ivar_1);

extern HMAC_funtype_5_t HMAC__lbytesXOR(uint8_t ivar_1);

extern HMAC_record_3_t HMAC__nbytes(uint8_t ivar_1, uint8_t ivar_2);

extern HMAC_record_3_t HMAC__hmac(HMAC_record_3_t ivar_1, HMAC_record_3_t ivar_2, uint8_t ivar_3, uint8_t ivar_4, HMAC_funtype_0_t ivar_5);

extern HMAC_record_3_t HMAC__hmac256(HMAC_record_3_t ivar_1, HMAC_record_3_t ivar_2, uint8_t ivar_3, uint8_t ivar_4);

extern HMAC_record_3_t HMAC__test1(void);
#endif