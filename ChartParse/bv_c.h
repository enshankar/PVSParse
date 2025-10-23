//Code generated using pvs2ir
#ifndef _bv_h 
#define _bv_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

#include "bit_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

//cc -O3 -Wall -o bv -I /Users/e21660/shankar/pvs.git/src/groundeval/ pvslib.c  bv_c.c bit_c.c integertypes_c.c exp2_c.c modulo_arithmetic_c.c euclidean_division_c.c real_defs_c.c -lgmp 

struct bv__bvec_s;
        typedef struct bv__bvec_s * bv__bvec_t;

struct bv__bvec_ftbl_s {bool_t (* fptr)(struct bv__bvec_s *, mpz_t);
        bool_t (* mptr)(struct bv__bvec_s *, mpz_t);
        void (* rptr)(struct bv__bvec_s *);
        struct bv__bvec_s * (* cptr)(struct bv__bvec_s *);};
typedef struct bv__bvec_ftbl_s * bv__bvec_ftbl_t;

struct bv__bvec_hashentry_s {uint32_t keyhash; mpz_t key; bool_t value;}; 
typedef struct bv__bvec_hashentry_s bv__bvec_hashentry_t;

struct bv__bvec_htbl_s {uint32_t size; uint32_t num_entries; bv__bvec_hashentry_t * data;}; 
typedef struct bv__bvec_htbl_s * bv__bvec_htbl_t;

struct bv__bvec_s {uint32_t count;
        bv__bvec_ftbl_t ftbl;
        bv__bvec_htbl_t htbl;};
typedef struct bv__bvec_s * bv__bvec_t;

extern void release_bv__bvec(bv__bvec_t x);

extern bv__bvec_t copy_bv__bvec(bv__bvec_t x);

uint32_t lookup_bv__bvec(bv__bvec_htbl_t htbl, mpz_t i, uint32_t ihash);

bv__bvec_t dupdate_bv__bvec(bv__bvec_t a, mpz_t i, bool_t v);

extern bv__bvec_t update_bv__bvec(bv__bvec_t a, mpz_t i, bool_t v);

extern bv__bvec_t equal_bv__bvec(bv__bvec_t x, bv__bvec_t y);




struct bv_closure_1_s;
        typedef struct bv_closure_1_s * bv_closure_1_t;

struct bv_closure_1_s {uint32_t count;
         bv__bvec_ftbl_t ftbl;
         bv__bvec_htbl_t htbl;
        bool_t fvar_1;};

bool_t f_bv_closure_1(struct bv_closure_1_s * closure, mpz_t bvar);

bool_t m_bv_closure_1(struct bv_closure_1_s * closure, mpz_t bvar);

extern bool_t h_bv_closure_1(mpz_t ivar_4, bool_t ivar_1);

extern bv_closure_1_t new_bv_closure_1(void);

extern void release_bv_closure_1(bv__bvec_t closure);

extern bv_closure_1_t copy_bv_closure_1(bv_closure_1_t x);



extern bool_t bv__bvec0(mpz_t N, mpz_t ivar_1);

extern bool_t bv__bvec1(mpz_t N, mpz_t ivar_1);

extern bv__bvec_t bv__fill(mpz_t N, bool_t ivar_1);

extern bool_t bv__caret(mpz_t N, bv__bvec_t ivar_1, mpz_t ivar_2);
#endif