//Code generated using pvs2ir
#ifndef _KDF_h 
#define _KDF_h

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

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "finite_sequences_c.h"

#include "real_defs_c.h"

#include "HMAC_c.h"

#include "SHA256_c.h"

#include "rotate_c.h"

//cc -O3 -Wall -o KDF -I /Users/e21660/shankar/pvs.git/src/groundeval/ /Users/e21660/shankar/pvs.git/src/groundeval/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/finite_sequences_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c KDF_c.c HMAC_c.c SHA256_c.c rotate_c.c -lgmp 

struct KDF_array_0_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct KDF_array_0_s * KDF_array_0_t;

extern KDF_array_0_t new_KDF_array_0(uint32_t size);

extern void release_KDF_array_0(KDF_array_0_t x);

extern KDF_array_0_t copy_KDF_array_0(KDF_array_0_t x);

extern bool_t equal_KDF_array_0(KDF_array_0_t x, KDF_array_0_t y);
typedef struct actual_KDF_array_0_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_KDF_array_0_t;

void release_KDF_array_0_ptr(pointer_t x, type_actual_t KDF_array_0);
extern bool_t equal_KDF_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T);

actual_KDF_array_0_t actual_KDF_array_0(void);

extern KDF_array_0_t update_KDF_array_0(KDF_array_0_t x, uint32_t i, uint8_t v);

extern KDF_array_0_t upgrade_KDF_array_0(KDF_array_0_t x, uint32_t i, uint8_t v);



struct KDF_record_1_s {
        uint32_t count; 
        bytestrings__bytestring_t project_1;
        bytestrings__bytestring_t project_2;};
typedef struct KDF_record_1_s * KDF_record_1_t;

extern KDF_record_1_t new_KDF_record_1(void);

extern void release_KDF_record_1(KDF_record_1_t x);

extern KDF_record_1_t copy_KDF_record_1(KDF_record_1_t x);

extern bool_t equal_KDF_record_1(KDF_record_1_t x, KDF_record_1_t y);
typedef struct actual_KDF_record_1_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_KDF_record_1_t;

void release_KDF_record_1_ptr(pointer_t x, type_actual_t KDF_record_1);
extern bool_t equal_KDF_record_1_ptr(pointer_t x, pointer_t y, actual_KDF_record_1_t T);

actual_KDF_record_1_t actual_KDF_record_1(void);

extern KDF_record_1_t update_KDF_record_1_project_1(KDF_record_1_t x, bytestrings__bytestring_t v);

extern KDF_record_1_t update_KDF_record_1_project_2(KDF_record_1_t x, bytestrings__bytestring_t v);



struct KDF_funtype_2_s;
        typedef struct KDF_funtype_2_s * KDF_funtype_2_t;

struct KDF_funtype_2_ftbl_s {bytestrings__bytestring_t (* fptr)(struct KDF_funtype_2_s *, KDF_record_1_t);
        bytestrings__bytestring_t (* mptr)(struct KDF_funtype_2_s *, bytestrings__bytestring_t, bytestrings__bytestring_t);
        void (* rptr)(struct KDF_funtype_2_s *);
        struct KDF_funtype_2_s * (* cptr)(struct KDF_funtype_2_s *);};
typedef struct KDF_funtype_2_ftbl_s * KDF_funtype_2_ftbl_t;

struct KDF_funtype_2_hashentry_s {uint32_t keyhash; KDF_record_1_t key; bytestrings__bytestring_t value;}; 
typedef struct KDF_funtype_2_hashentry_s KDF_funtype_2_hashentry_t;

struct KDF_funtype_2_htbl_s {uint32_t size; uint32_t num_entries; KDF_funtype_2_hashentry_t * data;}; 
typedef struct KDF_funtype_2_htbl_s * KDF_funtype_2_htbl_t;

struct KDF_funtype_2_s {uint32_t count;
        KDF_funtype_2_ftbl_t ftbl;
        KDF_funtype_2_htbl_t htbl;};
typedef struct KDF_funtype_2_s * KDF_funtype_2_t;

extern void release_KDF_funtype_2(KDF_funtype_2_t x);

extern KDF_funtype_2_t copy_KDF_funtype_2(KDF_funtype_2_t x);

extern bool_t equal_KDF_funtype_2(KDF_funtype_2_t x, KDF_funtype_2_t y);



struct KDF_funtype_3_s;
        typedef struct KDF_funtype_3_s * KDF_funtype_3_t;

struct KDF_funtype_3_ftbl_s {uint32_t (* fptr)(struct KDF_funtype_3_s *, mpz_ptr_t);
        uint32_t (* mptr)(struct KDF_funtype_3_s *, mpz_ptr_t);
        void (* rptr)(struct KDF_funtype_3_s *);
        struct KDF_funtype_3_s * (* cptr)(struct KDF_funtype_3_s *);};
typedef struct KDF_funtype_3_ftbl_s * KDF_funtype_3_ftbl_t;

struct KDF_funtype_3_hashentry_s {uint32_t keyhash; mpz_ptr_t key; uint32_t value;}; 
typedef struct KDF_funtype_3_hashentry_s KDF_funtype_3_hashentry_t;

struct KDF_funtype_3_htbl_s {uint32_t size; uint32_t num_entries; KDF_funtype_3_hashentry_t * data;}; 
typedef struct KDF_funtype_3_htbl_s * KDF_funtype_3_htbl_t;

struct KDF_funtype_3_s {uint32_t count;
        KDF_funtype_3_ftbl_t ftbl;
        KDF_funtype_3_htbl_t htbl;};
typedef struct KDF_funtype_3_s * KDF_funtype_3_t;

extern void release_KDF_funtype_3(KDF_funtype_3_t x);

extern KDF_funtype_3_t copy_KDF_funtype_3(KDF_funtype_3_t x);

uint32_t lookup_KDF_funtype_3(KDF_funtype_3_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

KDF_funtype_3_t dupdate_KDF_funtype_3(KDF_funtype_3_t a, mpz_ptr_t i, uint32_t v);

extern KDF_funtype_3_t update_KDF_funtype_3(KDF_funtype_3_t a, mpz_ptr_t i, uint32_t v);

extern bool_t equal_KDF_funtype_3(KDF_funtype_3_t x, KDF_funtype_3_t y);



struct KDF_record_4_s {
        uint32_t count; 
        mpz_t length;
        KDF_funtype_3_t seq;};
typedef struct KDF_record_4_s * KDF_record_4_t;

extern KDF_record_4_t new_KDF_record_4(void);

extern void release_KDF_record_4(KDF_record_4_t x);

extern KDF_record_4_t copy_KDF_record_4(KDF_record_4_t x);

extern bool_t equal_KDF_record_4(KDF_record_4_t x, KDF_record_4_t y);
typedef struct actual_KDF_record_4_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_KDF_record_4_t;

void release_KDF_record_4_ptr(pointer_t x, type_actual_t KDF_record_4);
extern bool_t equal_KDF_record_4_ptr(pointer_t x, pointer_t y, actual_KDF_record_4_t T);

actual_KDF_record_4_t actual_KDF_record_4(void);

extern KDF_record_4_t update_KDF_record_4_length(KDF_record_4_t x, mpz_ptr_t v);

extern KDF_record_4_t update_KDF_record_4_seq(KDF_record_4_t x, KDF_funtype_3_t v);



extern bytestrings__bytestring_t KDF__u8to_bstring(uint8_t ivar_1);

extern bytestrings__bytestring_t KDF__u16to_bstring(uint16_t ivar_1);

extern bytestrings__bytestring_t KDF__u32to_bstring(uint32_t ivar_1);

extern bytestrings__bytestring_t KDF__u64to_bstring(uint32_t ivar_1);

extern bytestrings__bytestring_t KDF__KDF1(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3);

extern bytestrings__bytestring_t KDF__KDF2(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3, bytestrings__bytestring_t ivar_4);

extern bytestrings__bytestring_t KDF__KDF3(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3, bytestrings__bytestring_t ivar_4, bytestrings__bytestring_t ivar_5);

extern bytestrings__bytestring_t KDF__KAUSF(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3, bytestrings__bytestring_t ivar_4, bytestrings__bytestring_t ivar_5);

extern bytestrings__bytestring_t KDF__KSEAF(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2);

extern bytestrings__bytestring_t KDF__KAMF(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3);

extern bytestrings__bytestring_t KDF__test_KDF1(void);

extern bytestrings__bytestring_t KDF__test_KDF2(void);

extern bytestrings__bytestring_t KDF__test_KDF3(void);

extern bytestrings__bytestring_t KDF__test_KAUSF(void);

extern bytestrings__bytestring_t KDF__test_KSEAF(void);

extern bytestrings__bytestring_t KDF__test_KAMF(void);
#endif