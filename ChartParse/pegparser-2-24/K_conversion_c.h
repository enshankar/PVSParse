//Code generated using pvs2ir
#ifndef _K_conversion_h 
#define _K_conversion_h

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

//cc -O3 -Wall -o K_conversion -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/K_conversion_c.c -lgmp 

typedef pointer_t K_conversion__T1_t;

typedef pointer_t K_conversion__T2_t;
//K_conversion

struct K_conversion_funtype_0_s;
        typedef struct K_conversion_funtype_0_s * K_conversion_funtype_0_t;

struct K_conversion_funtype_0_ftbl_s {K_conversion__T1_t (* fptr)(struct K_conversion_funtype_0_s *, K_conversion__T2_t);
        K_conversion__T1_t (* mptr)(struct K_conversion_funtype_0_s *, K_conversion__T2_t);
        void (* rptr)(struct K_conversion_funtype_0_s *);
        struct K_conversion_funtype_0_s * (* cptr)(struct K_conversion_funtype_0_s *);};
typedef struct K_conversion_funtype_0_ftbl_s * K_conversion_funtype_0_ftbl_t;

struct K_conversion_funtype_0_hashentry_s {uint32_t keyhash; K_conversion__T2_t key; K_conversion__T1_t value;}; 
typedef struct K_conversion_funtype_0_hashentry_s K_conversion_funtype_0_hashentry_t;

struct K_conversion_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; K_conversion_funtype_0_hashentry_t * data;}; 
typedef struct K_conversion_funtype_0_htbl_s * K_conversion_funtype_0_htbl_t;

struct K_conversion_funtype_0_s {uint32_t count;
        K_conversion_funtype_0_ftbl_t ftbl;
        K_conversion_funtype_0_htbl_t htbl;};
typedef struct K_conversion_funtype_0_s * K_conversion_funtype_0_t;

extern void release_K_conversion_funtype_0(K_conversion_funtype_0_t x, type_actual_t K_conversion__T1, type_actual_t K_conversion__T2);

extern K_conversion_funtype_0_t copy_K_conversion_funtype_0(K_conversion_funtype_0_t x);

extern bool_t equal_K_conversion_funtype_0(K_conversion_funtype_0_t x, K_conversion_funtype_0_t y, type_actual_t K_conversion__T1, type_actual_t K_conversion__T2);

extern char* json_K_conversion_funtype_0(K_conversion_funtype_0_t x, type_actual_t K_conversion__T1, type_actual_t K_conversion__T2);




struct K_conversion_closure_1_s;
        typedef struct K_conversion_closure_1_s * K_conversion_closure_1_t;

struct K_conversion_closure_1_s {uint32_t count;
         K_conversion_funtype_0_ftbl_t ftbl;
         K_conversion_funtype_0_htbl_t htbl;
        type_actual_t fvar_1;
        type_actual_t fvar_2;
        K_conversion__T1_t fvar_3; type_actual_t K_conversion__T1; type_actual_t K_conversion__T2;};

K_conversion__T1_t f_K_conversion_closure_1(struct K_conversion_closure_1_s * closure, K_conversion__T2_t bvar);

K_conversion__T1_t m_K_conversion_closure_1(struct K_conversion_closure_1_s * closure, K_conversion__T2_t bvar);

extern K_conversion__T1_t h_K_conversion_closure_1(K_conversion__T2_t ivar_3, type_actual_t K_conversion__T2, type_actual_t K_conversion__T1, K_conversion__T1_t ivar_1);

K_conversion_closure_1_t new_K_conversion_closure_1(void);

void release_K_conversion_closure_1(K_conversion_funtype_0_t closure, type_actual_t K_conversion__T1, type_actual_t K_conversion__T2);

K_conversion_closure_1_t copy_K_conversion_closure_1(K_conversion_closure_1_t x);



extern K_conversion_funtype_0_t K_conversion__K_conversion(type_actual_t K_conversion__T1, type_actual_t K_conversion__T2, K_conversion__T1_t ivar_1);
#endif