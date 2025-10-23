//Code generated using pvs2ir
#ifndef _teststring_h 
#define _teststring_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

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

#include "integertypes_c.h"

#include "exp2_c.h"

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

//cc -O3 -Wall -o teststring -I /Users/e21660 1 2 3/shankar/pvs.git/src/groundeval/ pvslib.c  teststring_c.c nat_types_c.c ordinals_c.c ordstruct_adt_c.c list_adt_c.c list2finseq_c.c list_props_c.c finite_sequences_c.c epsilons_c.c real_defs_c.c real_types_c.c integertypes_c.c exp2_c.c modulo_arithmetic_c.c euclidean_division_c.c -lgmp 

struct teststring_funtype_0_s;
        typedef struct teststring_funtype_0_s * teststring_funtype_0_t;

struct teststring_funtype_0_ftbl_s {finite_sequences_T_t (* fptr)(struct teststring_funtype_0_s *, mpz_t);
        finite_sequences_T_t (* mptr)(struct teststring_funtype_0_s *, mpz_t);
        void (* rptr)(struct teststring_funtype_0_s *);
        struct teststring_funtype_0_s * (* cptr)(struct teststring_funtype_0_s *);};
typedef struct teststring_funtype_0_ftbl_s * teststring_funtype_0_ftbl_t;

struct teststring_funtype_0_hashentry_s {uint32_t keyhash; mpz_t key; finite_sequences_T_t value;}; 
typedef struct teststring_funtype_0_hashentry_s teststring_funtype_0_hashentry_t;

struct teststring_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; teststring_funtype_0_hashentry_t * data;}; 
typedef struct teststring_funtype_0_htbl_s * teststring_funtype_0_htbl_t;

struct teststring_funtype_0_s {uint32_t count;
        teststring_funtype_0_ftbl_t ftbl;
        teststring_funtype_0_htbl_t htbl;};
typedef struct teststring_funtype_0_s * teststring_funtype_0_t;

extern void release_teststring_funtype_0(teststring_funtype_0_t x);

extern teststring_funtype_0_t copy_teststring_funtype_0(teststring_funtype_0_t x);



struct teststring_record_1_s {
        uint32_t count; 
        mpz_t length;
        teststring_funtype_0_t seq;};
typedef struct teststring_record_1_s * teststring_record_1_t;

extern teststring_record_1_t new_teststring_record_1(void);

extern void release_teststring_record_1(teststring_record_1_t x);

extern teststring_record_1_t copy_teststring_record_1(teststring_record_1_t x);

extern bool_t equal_teststring_record_1(teststring_record_1_t x, teststring_record_1_t y);

extern teststring_record_1_t update_teststring_record_1_length(teststring_record_1_t x, mpz_t v);

extern teststring_record_1_t update_teststring_record_1_seq(teststring_record_1_t x, teststring_funtype_0_t v);



extern string_t teststring_teststring(void);

extern uint8_t teststring_test1(void);

extern char_t teststring_test2(void);

extern mpz_ptr_t teststring_test3(void);
#endif