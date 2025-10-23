//Code generated using pvs2ir
#ifndef _bv_concat_def_h 
#define _bv_concat_def_h

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

#include "bv_c.h"

#include "bit_c.h"

#include "integertypes_c.h"

#include "real_defs_c.h"

#include "exp2_c.h"

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

//cc -O3 -Wall -o bv_concat_def -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bv_concat_def_c.c /Users/e21660/shankar/pvs.git/lib/bv_c.c /Users/e21660/shankar/pvs.git/lib/bit_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/modulo_arithmetic_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c -lgmp 
//O

struct bv_concat_def_funtype_0_s;
        typedef struct bv_concat_def_funtype_0_s * bv_concat_def_funtype_0_t;

struct bv_concat_def_funtype_0_ftbl_s {bool_t (* fptr)(struct bv_concat_def_funtype_0_s *, mpz_ptr_t);
        bool_t (* mptr)(struct bv_concat_def_funtype_0_s *, mpz_ptr_t);
        void (* rptr)(struct bv_concat_def_funtype_0_s *);
        struct bv_concat_def_funtype_0_s * (* cptr)(struct bv_concat_def_funtype_0_s *);};
typedef struct bv_concat_def_funtype_0_ftbl_s * bv_concat_def_funtype_0_ftbl_t;

struct bv_concat_def_funtype_0_hashentry_s {uint32_t keyhash; mpz_ptr_t key; bool_t value;}; 
typedef struct bv_concat_def_funtype_0_hashentry_s bv_concat_def_funtype_0_hashentry_t;

struct bv_concat_def_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; bv_concat_def_funtype_0_hashentry_t * data;}; 
typedef struct bv_concat_def_funtype_0_htbl_s * bv_concat_def_funtype_0_htbl_t;

struct bv_concat_def_funtype_0_s {uint32_t count;
        bv_concat_def_funtype_0_ftbl_t ftbl;
        bv_concat_def_funtype_0_htbl_t htbl;};
typedef struct bv_concat_def_funtype_0_s * bv_concat_def_funtype_0_t;

extern void release_bv_concat_def_funtype_0(bv_concat_def_funtype_0_t x, mpz_ptr_t bv_concat_def__n, mpz_ptr_t bv_concat_def__m);

extern bv_concat_def_funtype_0_t copy_bv_concat_def_funtype_0(bv_concat_def_funtype_0_t x);

extern uint32_t lookup_bv_concat_def_funtype_0(bv_concat_def_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

extern bv_concat_def_funtype_0_t dupdate_bv_concat_def_funtype_0(bv_concat_def_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_concat_def__n, mpz_ptr_t bv_concat_def__m);

extern bv_concat_def_funtype_0_t update_bv_concat_def_funtype_0(bv_concat_def_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_concat_def__n, mpz_ptr_t bv_concat_def__m);

extern bool_t equal_bv_concat_def_funtype_0(bv_concat_def_funtype_0_t x, bv_concat_def_funtype_0_t y, mpz_ptr_t bv_concat_def__n, mpz_ptr_t bv_concat_def__m);

extern char* json_bv_concat_def_funtype_0(bv_concat_def_funtype_0_t x, mpz_ptr_t bv_concat_def__n, mpz_ptr_t bv_concat_def__m);




struct bv_concat_def_closure_1_s;
        typedef struct bv_concat_def_closure_1_s * bv_concat_def_closure_1_t;

struct bv_concat_def_closure_1_s {uint32_t count;
         bv_concat_def_funtype_0_ftbl_t ftbl;
         bv_concat_def_funtype_0_htbl_t htbl;
        mpz_t fvar_1;
        mpz_t fvar_2;
        bv_concat_def_funtype_0_t fvar_3;
        bv_concat_def_funtype_0_t fvar_4; mpz_ptr_t bv_concat_def__n; mpz_ptr_t bv_concat_def__m;};

bool_t f_bv_concat_def_closure_1(struct bv_concat_def_closure_1_s * closure, mpz_ptr_t bvar);

bool_t m_bv_concat_def_closure_1(struct bv_concat_def_closure_1_s * closure, mpz_ptr_t bvar);

extern bool_t h_bv_concat_def_closure_1(mpz_ptr_t ivar_9, mpz_ptr_t bv_concat_def__m, mpz_ptr_t bv_concat_def__n, bv_concat_def_funtype_0_t ivar_3, bv_concat_def_funtype_0_t ivar_1);

bv_concat_def_closure_1_t new_bv_concat_def_closure_1(void);

void release_bv_concat_def_closure_1(bv_concat_def_funtype_0_t closure, mpz_ptr_t bv_concat_def__n, mpz_ptr_t bv_concat_def__m);

bv_concat_def_closure_1_t copy_bv_concat_def_closure_1(bv_concat_def_closure_1_t x);



extern bv_concat_def_funtype_0_t bv_concat_def__oh(mpz_ptr_t bv_concat_def__n, mpz_ptr_t bv_concat_def__m, bv_concat_def_funtype_0_t ivar_1, bv_concat_def_funtype_0_t ivar_3);
#endif