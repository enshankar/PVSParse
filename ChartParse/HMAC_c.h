//Code generated using pvs2ir
#ifndef _HMAC_h 
#define _HMAC_h

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

#include "SHA256_c.h"

#include "rotate_c.h"

//cc -O3 -Wall -o HMAC -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/finite_sequences_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c HMAC_c.c SHA256_c.c rotate_c.c -lgmp 

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



struct HMAC_record_1_s {
        uint32_t count; 
        bytestrings__bytestring_t project_1;
        bytestrings__bytestring_t project_2;};
typedef struct HMAC_record_1_s * HMAC_record_1_t;

extern HMAC_record_1_t new_HMAC_record_1(void);

extern void release_HMAC_record_1(HMAC_record_1_t x);

extern HMAC_record_1_t copy_HMAC_record_1(HMAC_record_1_t x);

extern bool_t equal_HMAC_record_1(HMAC_record_1_t x, HMAC_record_1_t y);
typedef struct actual_HMAC_record_1_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_HMAC_record_1_t;

void release_HMAC_record_1_ptr(pointer_t x, type_actual_t HMAC_record_1);
extern bool_t equal_HMAC_record_1_ptr(pointer_t x, pointer_t y, actual_HMAC_record_1_t T);

actual_HMAC_record_1_t actual_HMAC_record_1(void);

extern HMAC_record_1_t update_HMAC_record_1_project_1(HMAC_record_1_t x, bytestrings__bytestring_t v);

extern HMAC_record_1_t update_HMAC_record_1_project_2(HMAC_record_1_t x, bytestrings__bytestring_t v);



struct HMAC_funtype_2_s;
        typedef struct HMAC_funtype_2_s * HMAC_funtype_2_t;

struct HMAC_funtype_2_ftbl_s {bytestrings__bytestring_t (* fptr)(struct HMAC_funtype_2_s *, HMAC_record_1_t);
        bytestrings__bytestring_t (* mptr)(struct HMAC_funtype_2_s *, bytestrings__bytestring_t, bytestrings__bytestring_t);
        void (* rptr)(struct HMAC_funtype_2_s *);
        struct HMAC_funtype_2_s * (* cptr)(struct HMAC_funtype_2_s *);};
typedef struct HMAC_funtype_2_ftbl_s * HMAC_funtype_2_ftbl_t;

struct HMAC_funtype_2_hashentry_s {uint32_t keyhash; HMAC_record_1_t key; bytestrings__bytestring_t value;}; 
typedef struct HMAC_funtype_2_hashentry_s HMAC_funtype_2_hashentry_t;

struct HMAC_funtype_2_htbl_s {uint32_t size; uint32_t num_entries; HMAC_funtype_2_hashentry_t * data;}; 
typedef struct HMAC_funtype_2_htbl_s * HMAC_funtype_2_htbl_t;

struct HMAC_funtype_2_s {uint32_t count;
        HMAC_funtype_2_ftbl_t ftbl;
        HMAC_funtype_2_htbl_t htbl;};
typedef struct HMAC_funtype_2_s * HMAC_funtype_2_t;

extern void release_HMAC_funtype_2(HMAC_funtype_2_t x);

extern HMAC_funtype_2_t copy_HMAC_funtype_2(HMAC_funtype_2_t x);

extern bool_t equal_HMAC_funtype_2(HMAC_funtype_2_t x, HMAC_funtype_2_t y);




struct HMAC_closure_3_s;
        typedef struct HMAC_closure_3_s * HMAC_closure_3_t;

struct HMAC_closure_3_s {uint32_t count;
         HMAC_funtype_0_ftbl_t ftbl;
         HMAC_funtype_0_htbl_t htbl;};

bytestrings__bytestring_t f_HMAC_closure_3(struct HMAC_closure_3_s * closure, bytestrings__bytestring_t bvar);

bytestrings__bytestring_t m_HMAC_closure_3(struct HMAC_closure_3_s * closure, bytestrings__bytestring_t bvar);

extern bytestrings__bytestring_t h_HMAC_closure_3(bytestrings__bytestring_t ivar_11);

extern HMAC_closure_3_t new_HMAC_closure_3(void);

extern void release_HMAC_closure_3(HMAC_funtype_0_t closure);

extern HMAC_closure_3_t copy_HMAC_closure_3(HMAC_closure_3_t x);



struct HMAC_funtype_4_s;
        typedef struct HMAC_funtype_4_s * HMAC_funtype_4_t;

struct HMAC_funtype_4_ftbl_s {uint32_t (* fptr)(struct HMAC_funtype_4_s *, mpz_ptr_t);
        uint32_t (* mptr)(struct HMAC_funtype_4_s *, mpz_ptr_t);
        void (* rptr)(struct HMAC_funtype_4_s *);
        struct HMAC_funtype_4_s * (* cptr)(struct HMAC_funtype_4_s *);};
typedef struct HMAC_funtype_4_ftbl_s * HMAC_funtype_4_ftbl_t;

struct HMAC_funtype_4_hashentry_s {uint32_t keyhash; mpz_ptr_t key; uint32_t value;}; 
typedef struct HMAC_funtype_4_hashentry_s HMAC_funtype_4_hashentry_t;

struct HMAC_funtype_4_htbl_s {uint32_t size; uint32_t num_entries; HMAC_funtype_4_hashentry_t * data;}; 
typedef struct HMAC_funtype_4_htbl_s * HMAC_funtype_4_htbl_t;

struct HMAC_funtype_4_s {uint32_t count;
        HMAC_funtype_4_ftbl_t ftbl;
        HMAC_funtype_4_htbl_t htbl;};
typedef struct HMAC_funtype_4_s * HMAC_funtype_4_t;

extern void release_HMAC_funtype_4(HMAC_funtype_4_t x);

extern HMAC_funtype_4_t copy_HMAC_funtype_4(HMAC_funtype_4_t x);

uint32_t lookup_HMAC_funtype_4(HMAC_funtype_4_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

HMAC_funtype_4_t dupdate_HMAC_funtype_4(HMAC_funtype_4_t a, mpz_ptr_t i, uint32_t v);

extern HMAC_funtype_4_t update_HMAC_funtype_4(HMAC_funtype_4_t a, mpz_ptr_t i, uint32_t v);

extern bool_t equal_HMAC_funtype_4(HMAC_funtype_4_t x, HMAC_funtype_4_t y);



struct HMAC_record_5_s {
        uint32_t count; 
        mpz_t length;
        HMAC_funtype_4_t seq;};
typedef struct HMAC_record_5_s * HMAC_record_5_t;

extern HMAC_record_5_t new_HMAC_record_5(void);

extern void release_HMAC_record_5(HMAC_record_5_t x);

extern HMAC_record_5_t copy_HMAC_record_5(HMAC_record_5_t x);

extern bool_t equal_HMAC_record_5(HMAC_record_5_t x, HMAC_record_5_t y);
typedef struct actual_HMAC_record_5_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_HMAC_record_5_t;

void release_HMAC_record_5_ptr(pointer_t x, type_actual_t HMAC_record_5);
extern bool_t equal_HMAC_record_5_ptr(pointer_t x, pointer_t y, actual_HMAC_record_5_t T);

actual_HMAC_record_5_t actual_HMAC_record_5(void);

extern HMAC_record_5_t update_HMAC_record_5_length(HMAC_record_5_t x, mpz_ptr_t v);

extern HMAC_record_5_t update_HMAC_record_5_seq(HMAC_record_5_t x, HMAC_funtype_4_t v);



extern bytestrings__bytestring_t HMAC__hmac(uint8_t ivar_3, bytestrings__bytestring_t ivar_4, bytestrings__bytestring_t ivar_5, uint8_t ivar_6, HMAC_funtype_0_t ivar_7);

extern bytestrings__bytestring_t HMAC__hmac256(uint8_t ivar_2, bytestrings__bytestring_t ivar_3, bytestrings__bytestring_t ivar_4);

extern bytestrings__bytestring_t HMAC__test1(void);
#endif