//Code generated using pvs2ir
#ifndef _cstring_test_h 
#define _cstring_test_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

#include "cstring_c.h"

#include "character_adt_c.h"

#include "nat_types_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "list_adt_c.h"

#include "list2finseq_c.h"

#include "list_props_c.h"

#include "finite_sequences_c.h"

#include "epsilons_c.h"

#include "real_defs_c.h"

#include "real_types_c.h"

#include "strings_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

//cc -O3 -Wall -o cstring_test -I /Users/e21660/shankar/pvs.git/src/groundeval/ pvslib.c  cstring_test_c.c cstring_c.c character_adt_c.c nat_types_c.c ordinals_c.c ordstruct_adt_c.c list_adt_c.c list2finseq_c.c list_props_c.c finite_sequences_c.c epsilons_c.c real_defs_c.c real_types_c.c strings_c.c integertypes_c.c exp2_c.c modulo_arithmetic_c.c euclidean_division_c.c -lgmp 

struct record_0_s {
         uint32_t count; 
        uint8_t character_adt_character_adt_index;};
typedef struct record_0_s * record_0_t;

extern record_0_t new_record_0(void);

extern void release_record_0(record_0_t x);

extern record_0_t copy_record_0(record_0_t x);

extern bool_t equal_record_0(record_0_t x, record_0_t y);

extern record_0_t update_record_0_character_adt_character_adt_index(record_0_t x, uint8_t v);



struct cstring_test_funtype_1_s;
        typedef struct cstring_test_funtype_1_s * cstring_test_funtype_1_t;

struct cstring_test_funtype_1_ftbl_s {record_0_t (* fptr)(struct cstring_test_funtype_1_s *, mpz_t);
        record_0_t (* mptr)(struct cstring_test_funtype_1_s *, mpz_t);
        void (* rptr)(struct cstring_test_funtype_1_s *);
        struct cstring_test_funtype_1_s * (* cptr)(struct cstring_test_funtype_1_s *);};
typedef struct cstring_test_funtype_1_ftbl_s * cstring_test_funtype_1_ftbl_t;

struct cstring_test_funtype_1_hashentry_s {uint32_t keyhash; mpz_t key; record_0_t value;}; 
typedef struct cstring_test_funtype_1_hashentry_s cstring_test_funtype_1_hashentry_t;

struct cstring_test_funtype_1_htbl_s {uint32_t size; uint32_t num_entries; cstring_test_funtype_1_hashentry_t * data;}; 
typedef struct cstring_test_funtype_1_htbl_s * cstring_test_funtype_1_htbl_t;

struct cstring_test_funtype_1_s {uint32_t count;
        cstring_test_funtype_1_ftbl_t ftbl;
        cstring_test_funtype_1_htbl_t htbl;};
typedef struct cstring_test_funtype_1_s * cstring_test_funtype_1_t;

extern void release_cstring_test_funtype_1(cstring_test_funtype_1_t x);

extern cstring_test_funtype_1_t copy_cstring_test_funtype_1(cstring_test_funtype_1_t x);



struct cstring_test_record_2_s {
        uint32_t count; 
        mpz_t length;
        cstring_test_funtype_1_t seq;};
typedef struct cstring_test_record_2_s * cstring_test_record_2_t;

extern cstring_test_record_2_t new_cstring_test_record_2(void);

extern void release_cstring_test_record_2(cstring_test_record_2_t x);

extern cstring_test_record_2_t copy_cstring_test_record_2(cstring_test_record_2_t x);

extern bool_t equal_cstring_test_record_2(cstring_test_record_2_t x, cstring_test_record_2_t y);

extern cstring_test_record_2_t update_cstring_test_record_2_length(cstring_test_record_2_t x, mpz_t v);

extern cstring_test_record_2_t update_cstring_test_record_2_seq(cstring_test_record_2_t x, cstring_test_funtype_1_t v);



struct cstring_test_funtype_3_s;
        typedef struct cstring_test_funtype_3_s * cstring_test_funtype_3_t;

struct cstring_test_funtype_3_ftbl_s {finite_sequences_T_t (* fptr)(struct cstring_test_funtype_3_s *, mpz_t);
        finite_sequences_T_t (* mptr)(struct cstring_test_funtype_3_s *, mpz_t);
        void (* rptr)(struct cstring_test_funtype_3_s *);
        struct cstring_test_funtype_3_s * (* cptr)(struct cstring_test_funtype_3_s *);};
typedef struct cstring_test_funtype_3_ftbl_s * cstring_test_funtype_3_ftbl_t;

struct cstring_test_funtype_3_hashentry_s {uint32_t keyhash; mpz_t key; finite_sequences_T_t value;}; 
typedef struct cstring_test_funtype_3_hashentry_s cstring_test_funtype_3_hashentry_t;

struct cstring_test_funtype_3_htbl_s {uint32_t size; uint32_t num_entries; cstring_test_funtype_3_hashentry_t * data;}; 
typedef struct cstring_test_funtype_3_htbl_s * cstring_test_funtype_3_htbl_t;

struct cstring_test_funtype_3_s {uint32_t count;
        cstring_test_funtype_3_ftbl_t ftbl;
        cstring_test_funtype_3_htbl_t htbl;};
typedef struct cstring_test_funtype_3_s * cstring_test_funtype_3_t;

extern void release_cstring_test_funtype_3(cstring_test_funtype_3_t x);

extern cstring_test_funtype_3_t copy_cstring_test_funtype_3(cstring_test_funtype_3_t x);



extern cstring_cstring_t cstring_test_A(void);

extern cstring_cstring_t cstring_test_B(void);

extern uint8_t cstring_test_test_code(void);

extern cstring_cstring_t cstring_test_test_empty(void);

extern uint16_t cstring_test_test_length(void);

extern cstring_cstring_t cstring_test_test_concat(void);

extern uint16_t cstring_test_test_strdiff(void);

extern int8_t cstring_test_test_strcmp(void);

extern int8_t cstring_test_test_substr(void);
#endif