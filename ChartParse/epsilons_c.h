//Code generated using pvs2ir
#ifndef _epsilons_h 
#define _epsilons_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

//cc -O3 -Wall -o epsilons -I /Users/e21660/shankar/pvs.git/src/groundeval/ pvslib.c  epsilons_c.c -lgmp 

struct epsilons_uint8_funtype_0_s;
        typedef struct epsilons_uint8_funtype_0_s * epsilons_uint8_funtype_0_t;

struct epsilons_uint8_funtype_0_ftbl_s {bool_t (* fptr)(struct epsilons_uint8_funtype_0_s *, uint8_t);
        bool_t (* mptr)(struct epsilons_uint8_funtype_0_s *, uint8_t);
        void (* rptr)(struct epsilons_uint8_funtype_0_s *);
        struct epsilons_uint8_funtype_0_s * (* cptr)(struct epsilons_uint8_funtype_0_s *);};
typedef struct epsilons_uint8_funtype_0_ftbl_s * epsilons_uint8_funtype_0_ftbl_t;

struct epsilons_uint8_funtype_0_hashentry_s {uint32_t keyhash; uint8_t key; bool_t value;}; 
typedef struct epsilons_uint8_funtype_0_hashentry_s epsilons_uint8_funtype_0_hashentry_t;

struct epsilons_uint8_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; epsilons_uint8_funtype_0_hashentry_t * data;}; 
typedef struct epsilons_uint8_funtype_0_htbl_s * epsilons_uint8_funtype_0_htbl_t;

struct epsilons_uint8_funtype_0_s {uint32_t count;
        epsilons_uint8_funtype_0_ftbl_t ftbl;
        epsilons_uint8_funtype_0_htbl_t htbl;};
typedef struct epsilons_uint8_funtype_0_s * epsilons_uint8_funtype_0_t;

extern void release_epsilons_uint8_funtype_0(epsilons_uint8_funtype_0_t x);

extern epsilons_uint8_funtype_0_t copy_epsilons_uint8_funtype_0(epsilons_uint8_funtype_0_t x);

uint32_t lookup_epsilons_uint8_funtype_0(epsilons_uint8_funtype_0_htbl_t htbl, uint8_t i, uint32_t ihash);

epsilons_uint8_funtype_0_t dupdate_epsilons_uint8_funtype_0(epsilons_uint8_funtype_0_t a, uint8_t i, bool_t v);

extern epsilons_uint8_funtype_0_t update_epsilons_uint8_funtype_0(epsilons_uint8_funtype_0_t a, uint8_t i, bool_t v);

extern epsilons_uint8_funtype_0_t equal_epsilons_uint8_funtype_0(epsilons_uint8_funtype_0_t x, epsilons_uint8_funtype_0_t y);



extern uint8_t epsilons__epsilon(epsilons_uint8_funtype_0_t ivar_1);
#endif