//Code generated using pvs2ir
#ifndef _exists1_h 
#define _exists1_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

//cc -O3 -Wall -o exists1 -I /Users/e21660/shankar/pvs.git/src/groundeval/ pvslib.c  exists1_c.c -lgmp 

typedef pointer_t exists1__T_t;

struct exists1_funtype_0_s;
        typedef struct exists1_funtype_0_s * exists1_funtype_0_t;

struct exists1_funtype_0_ftbl_s {bool_t (* fptr)(struct exists1_funtype_0_s *, exists1__T_t);
        bool_t (* mptr)(struct exists1_funtype_0_s *, exists1__T_t);
        void (* rptr)(struct exists1_funtype_0_s *);
        struct exists1_funtype_0_s * (* cptr)(struct exists1_funtype_0_s *);};
typedef struct exists1_funtype_0_ftbl_s * exists1_funtype_0_ftbl_t;

struct exists1_funtype_0_hashentry_s {uint32_t keyhash; exists1__T_t key; bool_t value;}; 
typedef struct exists1_funtype_0_hashentry_s exists1_funtype_0_hashentry_t;

struct exists1_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; exists1_funtype_0_hashentry_t * data;}; 
typedef struct exists1_funtype_0_htbl_s * exists1_funtype_0_htbl_t;

struct exists1_funtype_0_s {uint32_t count;
        exists1_funtype_0_ftbl_t ftbl;
        exists1_funtype_0_htbl_t htbl;};
typedef struct exists1_funtype_0_s * exists1_funtype_0_t;

extern void release_exists1_funtype_0(exists1_funtype_0_t x);

extern exists1_funtype_0_t copy_exists1_funtype_0(exists1_funtype_0_t x);

extern exists1_funtype_0_t equal_exists1_funtype_0(exists1_funtype_0_t x, exists1_funtype_0_t y);



extern bool_t exists1__uniquep(type_actual_t exists1__T, exists1_funtype_0_t ivar_1);

extern bool_t exists1__exists1(type_actual_t exists1__T, exists1_funtype_0_t ivar_1);
#endif