//Code generated using pvs2ir
#ifndef _bv_bitwise_h 
#define _bv_bitwise_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

#include "bv_c.h"

#include "bit_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "xor_def_c.h"

//cc -O3 -Wall -o bv_bitwise -I /Users/e21660/shankar/pvs.git/src/groundeval/ pvslib.c  bv_bitwise_c.c bv_c.c bit_c.c integertypes_c.c exp2_c.c modulo_arithmetic_c.c euclidean_division_c.c real_defs_c.c xor_def_c.c -lgmp 


struct bv_bitwise_closure_0_s;
        typedef struct bv_bitwise_closure_0_s * bv_bitwise_closure_0_t;

struct bv_bitwise_closure_0_s {uint32_t count;
         bv__bvec_ftbl_t ftbl;
         bv__bvec_htbl_t htbl;
        bv__bvec_t fvar_1;
        bv__bvec_t fvar_2;};

bool_t f_bv_bitwise_closure_0(struct bv_bitwise_closure_0_s * closure, mpz_t bvar);

bool_t m_bv_bitwise_closure_0(struct bv_bitwise_closure_0_s * closure, mpz_t bvar);

extern bool_t h_bv_bitwise_closure_0(mpz_t ivar_8, bv__bvec_t ivar_5, bv__bvec_t ivar_6);

extern bv_bitwise_closure_0_t new_bv_bitwise_closure_0(void);

extern void release_bv_bitwise_closure_0(bv__bvec_t closure);

extern bv_bitwise_closure_0_t copy_bv_bitwise_closure_0(bv_bitwise_closure_0_t x);




struct bv_bitwise_closure_1_s;
        typedef struct bv_bitwise_closure_1_s * bv_bitwise_closure_1_t;

struct bv_bitwise_closure_1_s {uint32_t count;
         bv__bvec_ftbl_t ftbl;
         bv__bvec_htbl_t htbl;
        bv__bvec_t fvar_1;
        bv__bvec_t fvar_2;};

bool_t f_bv_bitwise_closure_1(struct bv_bitwise_closure_1_s * closure, mpz_t bvar);

bool_t m_bv_bitwise_closure_1(struct bv_bitwise_closure_1_s * closure, mpz_t bvar);

extern bool_t h_bv_bitwise_closure_1(mpz_t ivar_4, bv__bvec_t ivar_1, bv__bvec_t ivar_2);

extern bv_bitwise_closure_1_t new_bv_bitwise_closure_1(void);

extern void release_bv_bitwise_closure_1(bv__bvec_t closure);

extern bv_bitwise_closure_1_t copy_bv_bitwise_closure_1(bv_bitwise_closure_1_t x);




struct bv_bitwise_closure_2_s;
        typedef struct bv_bitwise_closure_2_s * bv_bitwise_closure_2_t;

struct bv_bitwise_closure_2_s {uint32_t count;
         bv__bvec_ftbl_t ftbl;
         bv__bvec_htbl_t htbl;
        bv__bvec_t fvar_1;
        bv__bvec_t fvar_2;};

bool_t f_bv_bitwise_closure_2(struct bv_bitwise_closure_2_s * closure, mpz_t bvar);

bool_t m_bv_bitwise_closure_2(struct bv_bitwise_closure_2_s * closure, mpz_t bvar);

extern bool_t h_bv_bitwise_closure_2(mpz_t ivar_4, bv__bvec_t ivar_1, bv__bvec_t ivar_2);

extern bv_bitwise_closure_2_t new_bv_bitwise_closure_2(void);

extern void release_bv_bitwise_closure_2(bv__bvec_t closure);

extern bv_bitwise_closure_2_t copy_bv_bitwise_closure_2(bv_bitwise_closure_2_t x);




struct bv_bitwise_closure_3_s;
        typedef struct bv_bitwise_closure_3_s * bv_bitwise_closure_3_t;

struct bv_bitwise_closure_3_s {uint32_t count;
         bv__bvec_ftbl_t ftbl;
         bv__bvec_htbl_t htbl;
        bv__bvec_t fvar_1;};

bool_t f_bv_bitwise_closure_3(struct bv_bitwise_closure_3_s * closure, mpz_t bvar);

bool_t m_bv_bitwise_closure_3(struct bv_bitwise_closure_3_s * closure, mpz_t bvar);

extern bool_t h_bv_bitwise_closure_3(mpz_t ivar_3, bv__bvec_t ivar_1);

extern bv_bitwise_closure_3_t new_bv_bitwise_closure_3(void);

extern void release_bv_bitwise_closure_3(bv__bvec_t closure);

extern bv_bitwise_closure_3_t copy_bv_bitwise_closure_3(bv_bitwise_closure_3_t x);




struct bv_bitwise_closure_4_s;
        typedef struct bv_bitwise_closure_4_s * bv_bitwise_closure_4_t;

struct bv_bitwise_closure_4_s {uint32_t count;
         bv__bvec_ftbl_t ftbl;
         bv__bvec_htbl_t htbl;
        bv__bvec_t fvar_1;
        bv__bvec_t fvar_2;};

bool_t f_bv_bitwise_closure_4(struct bv_bitwise_closure_4_s * closure, mpz_t bvar);

bool_t m_bv_bitwise_closure_4(struct bv_bitwise_closure_4_s * closure, mpz_t bvar);

extern bool_t h_bv_bitwise_closure_4(mpz_t ivar_4, bv__bvec_t ivar_1, bv__bvec_t ivar_2);

extern bv_bitwise_closure_4_t new_bv_bitwise_closure_4(void);

extern void release_bv_bitwise_closure_4(bv__bvec_t closure);

extern bv_bitwise_closure_4_t copy_bv_bitwise_closure_4(bv_bitwise_closure_4_t x);



extern bv__bvec_t bv_bitwise__OR(bv__bvec_t ivar_5, bv__bvec_t ivar_6);

extern bv__bvec_t bv_bitwise__AND(bv__bvec_t ivar_1, bv__bvec_t ivar_2);

extern bv__bvec_t bv_bitwise__IFF(bv__bvec_t ivar_1, bv__bvec_t ivar_2);

extern bv__bvec_t bv_bitwise__NOT(bv__bvec_t ivar_1);

extern bv__bvec_t bv_bitwise__XOR(bv__bvec_t ivar_1, bv__bvec_t ivar_2);
#endif