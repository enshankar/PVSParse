//Code generated using pvs2ir
#ifndef _min_nat_h 
#define _min_nat_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

//cc -O3 -Wall -o min_nat -I /Users/e21660/shankar/pvs.git/src/groundeval/ pvslib.c  min_nat_c.c -lgmp 

typedef pointer_t min_nat__T_t;

struct min_nat_funtype_0_s;
        typedef struct min_nat_funtype_0_s * min_nat_funtype_0_t;

struct min_nat_funtype_0_ftbl_s {bool_t (* fptr)(struct min_nat_funtype_0_s *, min_nat__T_t);
        bool_t (* mptr)(struct min_nat_funtype_0_s *, min_nat__T_t);
        void (* rptr)(struct min_nat_funtype_0_s *);
        struct min_nat_funtype_0_s * (* cptr)(struct min_nat_funtype_0_s *);};
typedef struct min_nat_funtype_0_ftbl_s * min_nat_funtype_0_ftbl_t;

struct min_nat_funtype_0_hashentry_s {uint32_t keyhash; min_nat__T_t key; bool_t value;}; 
typedef struct min_nat_funtype_0_hashentry_s min_nat_funtype_0_hashentry_t;

struct min_nat_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; min_nat_funtype_0_hashentry_t * data;}; 
typedef struct min_nat_funtype_0_htbl_s * min_nat_funtype_0_htbl_t;

struct min_nat_funtype_0_s {uint32_t count;
        min_nat_funtype_0_ftbl_t ftbl;
        min_nat_funtype_0_htbl_t htbl;};
typedef struct min_nat_funtype_0_s * min_nat_funtype_0_t;

extern void release_min_nat_funtype_0(min_nat_funtype_0_t x);

extern min_nat_funtype_0_t copy_min_nat_funtype_0(min_nat_funtype_0_t x);

extern min_nat_funtype_0_t equal_min_nat_funtype_0(min_nat_funtype_0_t x, min_nat_funtype_0_t y);



extern mpz_ptr_t min_nat__min(type_actual_t min_nat__T, min_nat_funtype_0_t ivar_1);

extern bool_t min_nat__minimump(type_actual_t min_nat__T, min_nat__T_t ivar_1, min_nat_funtype_0_t ivar_2);
#endif