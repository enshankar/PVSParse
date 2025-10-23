//Code generated using pvs2ir
#ifndef _bv_extend_defs_h 
#define _bv_extend_defs_h

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

#include "bv_concat_def_c.h"

#include "bv_c.h"

#include "bit_c.h"

#include "integertypes_c.h"

#include "real_defs_c.h"

#include "exp2_c.h"

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

//cc -O3 -Wall -o bv_extend_defs -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bv_extend_defs_c.c /Users/e21660/shankar/pvs.git/lib/bv_concat_def_c.c /Users/e21660/shankar/pvs.git/lib/bv_c.c /Users/e21660/shankar/pvs.git/lib/bit_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/modulo_arithmetic_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c -lgmp 
//zero_extend

struct bv_extend_defs_funtype_0_s;
        typedef struct bv_extend_defs_funtype_0_s * bv_extend_defs_funtype_0_t;

struct bv_extend_defs_funtype_0_ftbl_s {bool_t (* fptr)(struct bv_extend_defs_funtype_0_s *, mpz_ptr_t);
        bool_t (* mptr)(struct bv_extend_defs_funtype_0_s *, mpz_ptr_t);
        void (* rptr)(struct bv_extend_defs_funtype_0_s *);
        struct bv_extend_defs_funtype_0_s * (* cptr)(struct bv_extend_defs_funtype_0_s *);};
typedef struct bv_extend_defs_funtype_0_ftbl_s * bv_extend_defs_funtype_0_ftbl_t;

struct bv_extend_defs_funtype_0_hashentry_s {uint32_t keyhash; mpz_ptr_t key; bool_t value;}; 
typedef struct bv_extend_defs_funtype_0_hashentry_s bv_extend_defs_funtype_0_hashentry_t;

struct bv_extend_defs_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; bv_extend_defs_funtype_0_hashentry_t * data;}; 
typedef struct bv_extend_defs_funtype_0_htbl_s * bv_extend_defs_funtype_0_htbl_t;

struct bv_extend_defs_funtype_0_s {uint32_t count;
        bv_extend_defs_funtype_0_ftbl_t ftbl;
        bv_extend_defs_funtype_0_htbl_t htbl;};
typedef struct bv_extend_defs_funtype_0_s * bv_extend_defs_funtype_0_t;

extern void release_bv_extend_defs_funtype_0(bv_extend_defs_funtype_0_t x, mpz_ptr_t bv_extend_defs__N);

extern bv_extend_defs_funtype_0_t copy_bv_extend_defs_funtype_0(bv_extend_defs_funtype_0_t x);

extern uint32_t lookup_bv_extend_defs_funtype_0(bv_extend_defs_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

extern bv_extend_defs_funtype_0_t dupdate_bv_extend_defs_funtype_0(bv_extend_defs_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_extend_defs__N);

extern bv_extend_defs_funtype_0_t update_bv_extend_defs_funtype_0(bv_extend_defs_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_extend_defs__N);

extern bool_t equal_bv_extend_defs_funtype_0(bv_extend_defs_funtype_0_t x, bv_extend_defs_funtype_0_t y, mpz_ptr_t bv_extend_defs__N);

extern char* json_bv_extend_defs_funtype_0(bv_extend_defs_funtype_0_t x, mpz_ptr_t bv_extend_defs__N);


//zero_extend

struct bv_extend_defs_funtype_1_s;
        typedef struct bv_extend_defs_funtype_1_s * bv_extend_defs_funtype_1_t;

struct bv_extend_defs_funtype_1_ftbl_s {bv_extend_defs_funtype_0_t (* fptr)(struct bv_extend_defs_funtype_1_s *, bv_extend_defs_funtype_0_t);
        bv_extend_defs_funtype_0_t (* mptr)(struct bv_extend_defs_funtype_1_s *, bv_extend_defs_funtype_0_t);
        void (* rptr)(struct bv_extend_defs_funtype_1_s *);
        struct bv_extend_defs_funtype_1_s * (* cptr)(struct bv_extend_defs_funtype_1_s *);};
typedef struct bv_extend_defs_funtype_1_ftbl_s * bv_extend_defs_funtype_1_ftbl_t;

struct bv_extend_defs_funtype_1_hashentry_s {uint32_t keyhash; bv_extend_defs_funtype_0_t key; bv_extend_defs_funtype_0_t value;}; 
typedef struct bv_extend_defs_funtype_1_hashentry_s bv_extend_defs_funtype_1_hashentry_t;

struct bv_extend_defs_funtype_1_htbl_s {uint32_t size; uint32_t num_entries; bv_extend_defs_funtype_1_hashentry_t * data;}; 
typedef struct bv_extend_defs_funtype_1_htbl_s * bv_extend_defs_funtype_1_htbl_t;

struct bv_extend_defs_funtype_1_s {uint32_t count;
        bv_extend_defs_funtype_1_ftbl_t ftbl;
        bv_extend_defs_funtype_1_htbl_t htbl;};
typedef struct bv_extend_defs_funtype_1_s * bv_extend_defs_funtype_1_t;

extern void release_bv_extend_defs_funtype_1(bv_extend_defs_funtype_1_t x, mpz_ptr_t bv_extend_defs__N);

extern bv_extend_defs_funtype_1_t copy_bv_extend_defs_funtype_1(bv_extend_defs_funtype_1_t x);

extern bool_t equal_bv_extend_defs_funtype_1(bv_extend_defs_funtype_1_t x, bv_extend_defs_funtype_1_t y, mpz_ptr_t bv_extend_defs__N);

extern char* json_bv_extend_defs_funtype_1(bv_extend_defs_funtype_1_t x, mpz_ptr_t bv_extend_defs__N);




struct bv_extend_defs_closure_2_s;
        typedef struct bv_extend_defs_closure_2_s * bv_extend_defs_closure_2_t;

struct bv_extend_defs_closure_2_s {uint32_t count;
         bv_extend_defs_funtype_1_ftbl_t ftbl;
         bv_extend_defs_funtype_1_htbl_t htbl;
        mpz_t fvar_1;
        mpz_t fvar_2; mpz_ptr_t bv_extend_defs__N;};

bv_extend_defs_funtype_0_t f_bv_extend_defs_closure_2(struct bv_extend_defs_closure_2_s * closure, bv_extend_defs_funtype_0_t bvar);

bv_extend_defs_funtype_0_t m_bv_extend_defs_closure_2(struct bv_extend_defs_closure_2_s * closure, bv_extend_defs_funtype_0_t bvar);

extern bv_extend_defs_funtype_0_t h_bv_extend_defs_closure_2(bv_extend_defs_funtype_0_t ivar_5, mpz_ptr_t ivar_1, mpz_ptr_t bv_extend_defs__N);

bv_extend_defs_closure_2_t new_bv_extend_defs_closure_2(void);

void release_bv_extend_defs_closure_2(bv_extend_defs_funtype_1_t closure, mpz_ptr_t bv_extend_defs__N);

bv_extend_defs_closure_2_t copy_bv_extend_defs_closure_2(bv_extend_defs_closure_2_t x);




struct bv_extend_defs_closure_3_s;
        typedef struct bv_extend_defs_closure_3_s * bv_extend_defs_closure_3_t;

struct bv_extend_defs_closure_3_s {uint32_t count;
         bv_extend_defs_funtype_1_ftbl_t ftbl;
         bv_extend_defs_funtype_1_htbl_t htbl;
        mpz_t fvar_1;
        mpz_t fvar_2; mpz_ptr_t bv_extend_defs__N;};

bv_extend_defs_funtype_0_t f_bv_extend_defs_closure_3(struct bv_extend_defs_closure_3_s * closure, bv_extend_defs_funtype_0_t bvar);

bv_extend_defs_funtype_0_t m_bv_extend_defs_closure_3(struct bv_extend_defs_closure_3_s * closure, bv_extend_defs_funtype_0_t bvar);

extern bv_extend_defs_funtype_0_t h_bv_extend_defs_closure_3(bv_extend_defs_funtype_0_t ivar_5, mpz_ptr_t ivar_1, mpz_ptr_t bv_extend_defs__N);

bv_extend_defs_closure_3_t new_bv_extend_defs_closure_3(void);

void release_bv_extend_defs_closure_3(bv_extend_defs_funtype_1_t closure, mpz_ptr_t bv_extend_defs__N);

bv_extend_defs_closure_3_t copy_bv_extend_defs_closure_3(bv_extend_defs_closure_3_t x);




struct bv_extend_defs_closure_4_s;
        typedef struct bv_extend_defs_closure_4_s * bv_extend_defs_closure_4_t;

struct bv_extend_defs_closure_4_s {uint32_t count;
         bv_extend_defs_funtype_1_ftbl_t ftbl;
         bv_extend_defs_funtype_1_htbl_t htbl;
        mpz_t fvar_1;
        mpz_t fvar_2; mpz_ptr_t bv_extend_defs__N;};

bv_extend_defs_funtype_0_t f_bv_extend_defs_closure_4(struct bv_extend_defs_closure_4_s * closure, bv_extend_defs_funtype_0_t bvar);

bv_extend_defs_funtype_0_t m_bv_extend_defs_closure_4(struct bv_extend_defs_closure_4_s * closure, bv_extend_defs_funtype_0_t bvar);

extern bv_extend_defs_funtype_0_t h_bv_extend_defs_closure_4(bv_extend_defs_funtype_0_t ivar_5, mpz_ptr_t ivar_1, mpz_ptr_t bv_extend_defs__N);

bv_extend_defs_closure_4_t new_bv_extend_defs_closure_4(void);

void release_bv_extend_defs_closure_4(bv_extend_defs_funtype_1_t closure, mpz_ptr_t bv_extend_defs__N);

bv_extend_defs_closure_4_t copy_bv_extend_defs_closure_4(bv_extend_defs_closure_4_t x);




struct bv_extend_defs_closure_5_s;
        typedef struct bv_extend_defs_closure_5_s * bv_extend_defs_closure_5_t;

struct bv_extend_defs_closure_5_s {uint32_t count;
         bv_extend_defs_funtype_1_ftbl_t ftbl;
         bv_extend_defs_funtype_1_htbl_t htbl;
        mpz_t fvar_1;
        mpz_t fvar_2; mpz_ptr_t bv_extend_defs__N;};

bv_extend_defs_funtype_0_t f_bv_extend_defs_closure_5(struct bv_extend_defs_closure_5_s * closure, bv_extend_defs_funtype_0_t bvar);

bv_extend_defs_funtype_0_t m_bv_extend_defs_closure_5(struct bv_extend_defs_closure_5_s * closure, bv_extend_defs_funtype_0_t bvar);

extern bv_extend_defs_funtype_0_t h_bv_extend_defs_closure_5(bv_extend_defs_funtype_0_t ivar_5, mpz_ptr_t ivar_1, mpz_ptr_t bv_extend_defs__N);

bv_extend_defs_closure_5_t new_bv_extend_defs_closure_5(void);

void release_bv_extend_defs_closure_5(bv_extend_defs_funtype_1_t closure, mpz_ptr_t bv_extend_defs__N);

bv_extend_defs_closure_5_t copy_bv_extend_defs_closure_5(bv_extend_defs_closure_5_t x);




struct bv_extend_defs_closure_6_s;
        typedef struct bv_extend_defs_closure_6_s * bv_extend_defs_closure_6_t;

struct bv_extend_defs_closure_6_s {uint32_t count;
         bv_extend_defs_funtype_1_ftbl_t ftbl;
         bv_extend_defs_funtype_1_htbl_t htbl;
        mpz_t fvar_1;
        mpz_t fvar_2;
        bool_t fvar_3; mpz_ptr_t bv_extend_defs__N;};

bv_extend_defs_funtype_0_t f_bv_extend_defs_closure_6(struct bv_extend_defs_closure_6_s * closure, bv_extend_defs_funtype_0_t bvar);

bv_extend_defs_funtype_0_t m_bv_extend_defs_closure_6(struct bv_extend_defs_closure_6_s * closure, bv_extend_defs_funtype_0_t bvar);

extern bv_extend_defs_funtype_0_t h_bv_extend_defs_closure_6(bv_extend_defs_funtype_0_t ivar_6, mpz_ptr_t ivar_1, mpz_ptr_t bv_extend_defs__N, bool_t ivar_2);

bv_extend_defs_closure_6_t new_bv_extend_defs_closure_6(void);

void release_bv_extend_defs_closure_6(bv_extend_defs_funtype_1_t closure, mpz_ptr_t bv_extend_defs__N);

bv_extend_defs_closure_6_t copy_bv_extend_defs_closure_6(bv_extend_defs_closure_6_t x);




struct bv_extend_defs_closure_7_s;
        typedef struct bv_extend_defs_closure_7_s * bv_extend_defs_closure_7_t;

struct bv_extend_defs_closure_7_s {uint32_t count;
         bv_extend_defs_funtype_1_ftbl_t ftbl;
         bv_extend_defs_funtype_1_htbl_t htbl;
        mpz_t fvar_1;
        mpz_t fvar_2;
        bool_t fvar_3; mpz_ptr_t bv_extend_defs__N;};

bv_extend_defs_funtype_0_t f_bv_extend_defs_closure_7(struct bv_extend_defs_closure_7_s * closure, bv_extend_defs_funtype_0_t bvar);

bv_extend_defs_funtype_0_t m_bv_extend_defs_closure_7(struct bv_extend_defs_closure_7_s * closure, bv_extend_defs_funtype_0_t bvar);

extern bv_extend_defs_funtype_0_t h_bv_extend_defs_closure_7(bv_extend_defs_funtype_0_t ivar_6, mpz_ptr_t ivar_1, mpz_ptr_t bv_extend_defs__N, bool_t ivar_2);

bv_extend_defs_closure_7_t new_bv_extend_defs_closure_7(void);

void release_bv_extend_defs_closure_7(bv_extend_defs_funtype_1_t closure, mpz_ptr_t bv_extend_defs__N);

bv_extend_defs_closure_7_t copy_bv_extend_defs_closure_7(bv_extend_defs_closure_7_t x);



extern bv_extend_defs_funtype_1_t bv_extend_defs__zero_extend(mpz_ptr_t bv_extend_defs__N, mpz_ptr_t ivar_1);

extern bv_extend_defs_funtype_1_t bv_extend_defs__sign_extend(mpz_ptr_t bv_extend_defs__N, mpz_ptr_t ivar_1);

extern bv_extend_defs_funtype_1_t bv_extend_defs__zero_extend_lsend(mpz_ptr_t bv_extend_defs__N, mpz_ptr_t ivar_1);

extern bv_extend_defs_funtype_1_t bv_extend_defs__lsb_extend(mpz_ptr_t bv_extend_defs__N, mpz_ptr_t ivar_1);

extern bv_extend_defs_funtype_1_t bv_extend_defs__pad_left(mpz_ptr_t bv_extend_defs__N, mpz_ptr_t ivar_1, bool_t ivar_2);

extern bv_extend_defs_funtype_1_t bv_extend_defs__pad_right(mpz_ptr_t bv_extend_defs__N, mpz_ptr_t ivar_1, bool_t ivar_2);
#endif