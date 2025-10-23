//Code generated using pvs2ir
#ifndef _restrict_h 
#define _restrict_h

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

//cc -O3 -Wall -o restrict -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/restrict_c.c -lgmp 

typedef pointer_t restrict__T_t;

typedef pointer_t restrict__S_t;

typedef pointer_t restrict__R_t;
//restrict

struct restrict_funtype_0_s;
        typedef struct restrict_funtype_0_s * restrict_funtype_0_t;

struct restrict_funtype_0_ftbl_s {restrict__R_t (* fptr)(struct restrict_funtype_0_s *, restrict__S_t);
        restrict__R_t (* mptr)(struct restrict_funtype_0_s *, restrict__S_t);
        void (* rptr)(struct restrict_funtype_0_s *);
        struct restrict_funtype_0_s * (* cptr)(struct restrict_funtype_0_s *);};
typedef struct restrict_funtype_0_ftbl_s * restrict_funtype_0_ftbl_t;

struct restrict_funtype_0_hashentry_s {uint32_t keyhash; restrict__S_t key; restrict__R_t value;}; 
typedef struct restrict_funtype_0_hashentry_s restrict_funtype_0_hashentry_t;

struct restrict_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; restrict_funtype_0_hashentry_t * data;}; 
typedef struct restrict_funtype_0_htbl_s * restrict_funtype_0_htbl_t;

struct restrict_funtype_0_s {uint32_t count;
        restrict_funtype_0_ftbl_t ftbl;
        restrict_funtype_0_htbl_t htbl;};
typedef struct restrict_funtype_0_s * restrict_funtype_0_t;

extern void release_restrict_funtype_0(restrict_funtype_0_t x, type_actual_t restrict__T, type_actual_t restrict__S, type_actual_t restrict__R);

extern restrict_funtype_0_t copy_restrict_funtype_0(restrict_funtype_0_t x);

extern bool_t equal_restrict_funtype_0(restrict_funtype_0_t x, restrict_funtype_0_t y, type_actual_t restrict__T, type_actual_t restrict__S, type_actual_t restrict__R);

extern char* json_restrict_funtype_0(restrict_funtype_0_t x, type_actual_t restrict__T, type_actual_t restrict__S, type_actual_t restrict__R);


//restrict

struct restrict_funtype_1_s;
        typedef struct restrict_funtype_1_s * restrict_funtype_1_t;

struct restrict_funtype_1_ftbl_s {restrict__R_t (* fptr)(struct restrict_funtype_1_s *, restrict__T_t);
        restrict__R_t (* mptr)(struct restrict_funtype_1_s *, restrict__T_t);
        void (* rptr)(struct restrict_funtype_1_s *);
        struct restrict_funtype_1_s * (* cptr)(struct restrict_funtype_1_s *);};
typedef struct restrict_funtype_1_ftbl_s * restrict_funtype_1_ftbl_t;

struct restrict_funtype_1_hashentry_s {uint32_t keyhash; restrict__T_t key; restrict__R_t value;}; 
typedef struct restrict_funtype_1_hashentry_s restrict_funtype_1_hashentry_t;

struct restrict_funtype_1_htbl_s {uint32_t size; uint32_t num_entries; restrict_funtype_1_hashentry_t * data;}; 
typedef struct restrict_funtype_1_htbl_s * restrict_funtype_1_htbl_t;

struct restrict_funtype_1_s {uint32_t count;
        restrict_funtype_1_ftbl_t ftbl;
        restrict_funtype_1_htbl_t htbl;};
typedef struct restrict_funtype_1_s * restrict_funtype_1_t;

extern void release_restrict_funtype_1(restrict_funtype_1_t x, type_actual_t restrict__T, type_actual_t restrict__S, type_actual_t restrict__R);

extern restrict_funtype_1_t copy_restrict_funtype_1(restrict_funtype_1_t x);

extern bool_t equal_restrict_funtype_1(restrict_funtype_1_t x, restrict_funtype_1_t y, type_actual_t restrict__T, type_actual_t restrict__S, type_actual_t restrict__R);

extern char* json_restrict_funtype_1(restrict_funtype_1_t x, type_actual_t restrict__T, type_actual_t restrict__S, type_actual_t restrict__R);




struct restrict_closure_2_s;
        typedef struct restrict_closure_2_s * restrict_closure_2_t;

struct restrict_closure_2_s {uint32_t count;
         restrict_funtype_0_ftbl_t ftbl;
         restrict_funtype_0_htbl_t htbl;
        type_actual_t fvar_1;
        type_actual_t fvar_2;
        restrict_funtype_1_t fvar_3;
        type_actual_t fvar_4; type_actual_t restrict__T; type_actual_t restrict__S; type_actual_t restrict__R;};

restrict__R_t f_restrict_closure_2(struct restrict_closure_2_s * closure, restrict__S_t bvar);

restrict__R_t m_restrict_closure_2(struct restrict_closure_2_s * closure, restrict__S_t bvar);

extern restrict__R_t h_restrict_closure_2(restrict__S_t ivar_4, type_actual_t restrict__T, type_actual_t restrict__R, restrict_funtype_1_t ivar_1, type_actual_t restrict__S);

restrict_closure_2_t new_restrict_closure_2(void);

void release_restrict_closure_2(restrict_funtype_0_t closure, type_actual_t restrict__T, type_actual_t restrict__S, type_actual_t restrict__R);

restrict_closure_2_t copy_restrict_closure_2(restrict_closure_2_t x);



extern restrict_funtype_0_t restrict__restrict(type_actual_t restrict__T, type_actual_t restrict__S, type_actual_t restrict__R, restrict_funtype_1_t ivar_1);
#endif