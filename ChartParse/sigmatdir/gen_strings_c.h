//Code generated using pvs2ir
#ifndef _gen_strings_h 
#define _gen_strings_h

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

#include "strings_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

//cc -O3 -Wall -o gen_strings -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c -lgmp 
//get

struct gen_strings_funtype_0_s;
        typedef struct gen_strings_funtype_0_s * gen_strings_funtype_0_t;

struct gen_strings_funtype_0_ftbl_s {uint32_t (* fptr)(struct gen_strings_funtype_0_s *, mpz_ptr_t);
        uint32_t (* mptr)(struct gen_strings_funtype_0_s *, mpz_ptr_t);
        void (* rptr)(struct gen_strings_funtype_0_s *);
        struct gen_strings_funtype_0_s * (* cptr)(struct gen_strings_funtype_0_s *);};
typedef struct gen_strings_funtype_0_ftbl_s * gen_strings_funtype_0_ftbl_t;

struct gen_strings_funtype_0_hashentry_s {uint32_t keyhash; mpz_ptr_t key; uint32_t value;}; 
typedef struct gen_strings_funtype_0_hashentry_s gen_strings_funtype_0_hashentry_t;

struct gen_strings_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; gen_strings_funtype_0_hashentry_t * data;}; 
typedef struct gen_strings_funtype_0_htbl_s * gen_strings_funtype_0_htbl_t;

struct gen_strings_funtype_0_s {uint32_t count;
        gen_strings_funtype_0_ftbl_t ftbl;
        gen_strings_funtype_0_htbl_t htbl;};
typedef struct gen_strings_funtype_0_s * gen_strings_funtype_0_t;

extern void release_gen_strings_funtype_0(gen_strings_funtype_0_t x);

extern gen_strings_funtype_0_t copy_gen_strings_funtype_0(gen_strings_funtype_0_t x);

uint32_t lookup_gen_strings_funtype_0(gen_strings_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

gen_strings_funtype_0_t dupdate_gen_strings_funtype_0(gen_strings_funtype_0_t a, mpz_ptr_t i, uint32_t v);

extern gen_strings_funtype_0_t update_gen_strings_funtype_0(gen_strings_funtype_0_t a, mpz_ptr_t i, uint32_t v);

extern bool_t equal_gen_strings_funtype_0(gen_strings_funtype_0_t x, gen_strings_funtype_0_t y);

extern char* json_gen_strings_funtype_0(gen_strings_funtype_0_t x);


//empty

struct gen_strings_funtype_1_s;
        typedef struct gen_strings_funtype_1_s * gen_strings_funtype_1_t;

struct gen_strings_funtype_1_ftbl_s {uint32_t (* fptr)(struct gen_strings_funtype_1_s *, uint8_t);
        uint32_t (* mptr)(struct gen_strings_funtype_1_s *, uint8_t);
        void (* rptr)(struct gen_strings_funtype_1_s *);
        struct gen_strings_funtype_1_s * (* cptr)(struct gen_strings_funtype_1_s *);};
typedef struct gen_strings_funtype_1_ftbl_s * gen_strings_funtype_1_ftbl_t;

struct gen_strings_funtype_1_hashentry_s {uint32_t keyhash; uint8_t key; uint32_t value;}; 
typedef struct gen_strings_funtype_1_hashentry_s gen_strings_funtype_1_hashentry_t;

struct gen_strings_funtype_1_htbl_s {uint32_t size; uint32_t num_entries; gen_strings_funtype_1_hashentry_t * data;}; 
typedef struct gen_strings_funtype_1_htbl_s * gen_strings_funtype_1_htbl_t;

struct gen_strings_funtype_1_s {uint32_t count;
        gen_strings_funtype_1_ftbl_t ftbl;
        gen_strings_funtype_1_htbl_t htbl;};
typedef struct gen_strings_funtype_1_s * gen_strings_funtype_1_t;

extern void release_gen_strings_funtype_1(gen_strings_funtype_1_t x);

extern gen_strings_funtype_1_t copy_gen_strings_funtype_1(gen_strings_funtype_1_t x);

uint32_t lookup_gen_strings_funtype_1(gen_strings_funtype_1_htbl_t htbl, uint8_t i, uint32_t ihash);

gen_strings_funtype_1_t dupdate_gen_strings_funtype_1(gen_strings_funtype_1_t a, uint8_t i, uint32_t v);

extern gen_strings_funtype_1_t update_gen_strings_funtype_1(gen_strings_funtype_1_t a, uint8_t i, uint32_t v);

extern bool_t equal_gen_strings_funtype_1(gen_strings_funtype_1_t x, gen_strings_funtype_1_t y);

extern char* json_gen_strings_funtype_1(gen_strings_funtype_1_t x);




struct gen_strings_closure_2_s;
        typedef struct gen_strings_closure_2_s * gen_strings_closure_2_t;

struct gen_strings_closure_2_s {uint32_t count;
         gen_strings_funtype_1_ftbl_t ftbl;
         gen_strings_funtype_1_htbl_t htbl;};

uint32_t f_gen_strings_closure_2(struct gen_strings_closure_2_s * closure, uint8_t bvar);

uint32_t m_gen_strings_closure_2(struct gen_strings_closure_2_s * closure, uint8_t bvar);

extern uint32_t h_gen_strings_closure_2(uint8_t ivar_4);

extern gen_strings_closure_2_t new_gen_strings_closure_2(void);

extern void release_gen_strings_closure_2(gen_strings_funtype_1_t closure);

extern gen_strings_closure_2_t copy_gen_strings_closure_2(gen_strings_closure_2_t x);




struct gen_strings_closure_3_s;
        typedef struct gen_strings_closure_3_s * gen_strings_closure_3_t;

struct gen_strings_closure_3_s {uint32_t count;
         gen_strings_funtype_0_ftbl_t ftbl;
         gen_strings_funtype_0_htbl_t htbl;
        mpz_t fvar_1;
        gen_strings_funtype_1_t fvar_2;};

uint32_t f_gen_strings_closure_3(struct gen_strings_closure_3_s * closure, mpz_ptr_t bvar);

uint32_t m_gen_strings_closure_3(struct gen_strings_closure_3_s * closure, mpz_ptr_t bvar);

extern uint32_t h_gen_strings_closure_3(mpz_ptr_t ivar_12, mpz_ptr_t ivar_1, gen_strings_funtype_1_t ivar_9);

extern gen_strings_closure_3_t new_gen_strings_closure_3(void);

extern void release_gen_strings_closure_3(gen_strings_funtype_0_t closure);

extern gen_strings_closure_3_t copy_gen_strings_closure_3(gen_strings_closure_3_t x);


//empty

struct gen_strings_record_4_s {
        uint32_t count; 
        mpz_t length;
        gen_strings_funtype_0_t seq;};
typedef struct gen_strings_record_4_s * gen_strings_record_4_t;

extern gen_strings_record_4_t new_gen_strings_record_4(void);

extern void release_gen_strings_record_4(gen_strings_record_4_t x);

extern gen_strings_record_4_t copy_gen_strings_record_4(gen_strings_record_4_t x);

extern bool_t equal_gen_strings_record_4(gen_strings_record_4_t x, gen_strings_record_4_t y);
extern char * json_gen_strings_record_4(gen_strings_record_4_t x);

typedef struct actual_gen_strings_record_4_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_gen_strings_record_4_t;
void release_gen_strings_record_4_ptr(pointer_t x, type_actual_t gen_strings_record_4);

extern bool_t equal_gen_strings_record_4_ptr(pointer_t x, pointer_t y, actual_gen_strings_record_4_t T);

extern char * json_gen_strings_record_4_ptr(pointer_t x,  actual_gen_strings_record_4_t T);

actual_gen_strings_record_4_t actual_gen_strings_record_4(void);

extern gen_strings_record_4_t update_gen_strings_record_4_length(gen_strings_record_4_t x, mpz_ptr_t v);

extern gen_strings_record_4_t update_gen_strings_record_4_seq(gen_strings_record_4_t x, gen_strings_funtype_0_t v);




struct gen_strings_closure_5_s;
        typedef struct gen_strings_closure_5_s * gen_strings_closure_5_t;

struct gen_strings_closure_5_s {uint32_t count;
         gen_strings_funtype_1_ftbl_t ftbl;
         gen_strings_funtype_1_htbl_t htbl;
        uint32_t fvar_1;};

uint32_t f_gen_strings_closure_5(struct gen_strings_closure_5_s * closure, uint8_t bvar);

uint32_t m_gen_strings_closure_5(struct gen_strings_closure_5_s * closure, uint8_t bvar);

extern uint32_t h_gen_strings_closure_5(uint8_t ivar_5, uint32_t ivar_1);

extern gen_strings_closure_5_t new_gen_strings_closure_5(void);

extern void release_gen_strings_closure_5(gen_strings_funtype_1_t closure);

extern gen_strings_closure_5_t copy_gen_strings_closure_5(gen_strings_closure_5_t x);




struct gen_strings_closure_6_s;
        typedef struct gen_strings_closure_6_s * gen_strings_closure_6_t;

struct gen_strings_closure_6_s {uint32_t count;
         gen_strings_funtype_0_ftbl_t ftbl;
         gen_strings_funtype_0_htbl_t htbl;
        mpz_t fvar_1;
        gen_strings_funtype_1_t fvar_2;};

uint32_t f_gen_strings_closure_6(struct gen_strings_closure_6_s * closure, mpz_ptr_t bvar);

uint32_t m_gen_strings_closure_6(struct gen_strings_closure_6_s * closure, mpz_ptr_t bvar);

extern uint32_t h_gen_strings_closure_6(mpz_ptr_t ivar_11, mpz_ptr_t ivar_2, gen_strings_funtype_1_t ivar_8);

extern gen_strings_closure_6_t new_gen_strings_closure_6(void);

extern void release_gen_strings_closure_6(gen_strings_funtype_0_t closure);

extern gen_strings_closure_6_t copy_gen_strings_closure_6(gen_strings_closure_6_t x);




struct gen_strings_closure_7_s;
        typedef struct gen_strings_closure_7_s * gen_strings_closure_7_t;

struct gen_strings_closure_7_s {uint32_t count;
         gen_strings_funtype_0_ftbl_t ftbl;
         gen_strings_funtype_0_htbl_t htbl;
        mpz_t fvar_1;
        strings__string_t fvar_2;};

uint32_t f_gen_strings_closure_7(struct gen_strings_closure_7_s * closure, mpz_ptr_t bvar);

uint32_t m_gen_strings_closure_7(struct gen_strings_closure_7_s * closure, mpz_ptr_t bvar);

extern uint32_t h_gen_strings_closure_7(mpz_ptr_t ivar_14, mpz_ptr_t ivar_2, strings__string_t ivar_1);

extern gen_strings_closure_7_t new_gen_strings_closure_7(void);

extern void release_gen_strings_closure_7(gen_strings_funtype_0_t closure);

extern gen_strings_closure_7_t copy_gen_strings_closure_7(gen_strings_closure_7_t x);




struct gen_strings_closure_8_s;
        typedef struct gen_strings_closure_8_s * gen_strings_closure_8_t;

struct gen_strings_closure_8_s {uint32_t count;
         gen_strings_funtype_0_ftbl_t ftbl;
         gen_strings_funtype_0_htbl_t htbl;
        strings__string_t fvar_1;
        mpz_t fvar_2;};

uint32_t f_gen_strings_closure_8(struct gen_strings_closure_8_s * closure, mpz_ptr_t bvar);

uint32_t m_gen_strings_closure_8(struct gen_strings_closure_8_s * closure, mpz_ptr_t bvar);

extern uint32_t h_gen_strings_closure_8(mpz_ptr_t ivar_23, strings__string_t ivar_1, mpz_ptr_t ivar_2);

extern gen_strings_closure_8_t new_gen_strings_closure_8(void);

extern void release_gen_strings_closure_8(gen_strings_funtype_0_t closure);

extern gen_strings_closure_8_t copy_gen_strings_closure_8(gen_strings_closure_8_t x);



extern mpz_ptr_t gen_strings__length(strings__string_t ivar_1);

extern uint32_t gen_strings__get(strings__string_t ivar_1, mpz_ptr_t ivar_2);

extern strings__string_t gen_strings__empty(void);

extern strings__string_t gen_strings__unit(uint32_t ivar_1);

extern mpz_ptr_t gen_strings__strdiff_rec(strings__string_t ivar_1, strings__string_t ivar_2, mpz_ptr_t ivar_3);

extern mpz_ptr_t gen_strings__strdiff(strings__string_t ivar_1, strings__string_t ivar_2);

extern int8_t gen_strings__strcmp(strings__string_t ivar_1, strings__string_t ivar_2);

extern strings__string_t gen_strings__prefix(strings__string_t ivar_1, mpz_ptr_t ivar_2);

extern strings__string_t gen_strings__suffix(strings__string_t ivar_1, mpz_ptr_t ivar_2);

extern strings__string_t gen_strings__substr(strings__string_t ivar_1, mpz_ptr_t ivar_2, mpz_ptr_t ivar_4);
#endif