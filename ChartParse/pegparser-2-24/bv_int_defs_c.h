//Code generated using pvs2ir
#ifndef _bv_int_defs_h 
#define _bv_int_defs_h

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

//cc -O3 -Wall -o bv_int_defs -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bv_int_defs_c.c /Users/e21660/shankar/pvs.git/lib/bv_c.c /Users/e21660/shankar/pvs.git/lib/bit_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/modulo_arithmetic_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c -lgmp 
//bv2int

struct bv_int_defs_funtype_0_s;
        typedef struct bv_int_defs_funtype_0_s * bv_int_defs_funtype_0_t;

struct bv_int_defs_funtype_0_ftbl_s {bool_t (* fptr)(struct bv_int_defs_funtype_0_s *, mpz_ptr_t);
        bool_t (* mptr)(struct bv_int_defs_funtype_0_s *, mpz_ptr_t);
        void (* rptr)(struct bv_int_defs_funtype_0_s *);
        struct bv_int_defs_funtype_0_s * (* cptr)(struct bv_int_defs_funtype_0_s *);};
typedef struct bv_int_defs_funtype_0_ftbl_s * bv_int_defs_funtype_0_ftbl_t;

struct bv_int_defs_funtype_0_hashentry_s {uint32_t keyhash; mpz_ptr_t key; bool_t value;}; 
typedef struct bv_int_defs_funtype_0_hashentry_s bv_int_defs_funtype_0_hashentry_t;

struct bv_int_defs_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; bv_int_defs_funtype_0_hashentry_t * data;}; 
typedef struct bv_int_defs_funtype_0_htbl_s * bv_int_defs_funtype_0_htbl_t;

struct bv_int_defs_funtype_0_s {uint32_t count;
        bv_int_defs_funtype_0_ftbl_t ftbl;
        bv_int_defs_funtype_0_htbl_t htbl;};
typedef struct bv_int_defs_funtype_0_s * bv_int_defs_funtype_0_t;

extern void release_bv_int_defs_funtype_0(bv_int_defs_funtype_0_t x, mpz_ptr_t bv_int_defs__N);

extern bv_int_defs_funtype_0_t copy_bv_int_defs_funtype_0(bv_int_defs_funtype_0_t x);

extern uint32_t lookup_bv_int_defs_funtype_0(bv_int_defs_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

extern bv_int_defs_funtype_0_t dupdate_bv_int_defs_funtype_0(bv_int_defs_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_int_defs__N);

extern bv_int_defs_funtype_0_t update_bv_int_defs_funtype_0(bv_int_defs_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_int_defs__N);

extern bool_t equal_bv_int_defs_funtype_0(bv_int_defs_funtype_0_t x, bv_int_defs_funtype_0_t y, mpz_ptr_t bv_int_defs__N);

extern char* json_bv_int_defs_funtype_0(bv_int_defs_funtype_0_t x, mpz_ptr_t bv_int_defs__N);



extern mpz_ptr_t bv_int_defs__minint(mpz_ptr_t bv_int_defs__N);

extern mpz_ptr_t bv_int_defs__maxint(mpz_ptr_t bv_int_defs__N);

extern bool_t bv_int_defs__in_rng_2s_comp(mpz_ptr_t bv_int_defs__N, mpz_ptr_t ivar_1);

extern mpz_ptr_t bv_int_defs__bv2int(mpz_ptr_t bv_int_defs__N, bv_int_defs_funtype_0_t ivar_1);

extern bv_int_defs_funtype_0_t bv_int_defs__int2bv(mpz_ptr_t bv_int_defs__N, mpz_ptr_t ivar_1);
#endif