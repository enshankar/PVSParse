//Code generated using pvs2ir
#ifndef _sigma_h 
#define _sigma_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

#include "real_defs_c.h"

//cc -O3 -Wall -o sigma -I /Users/e21660/shankar/pvs.git/src/groundeval/ pvslib.c  sigma_c.c real_defs_c.c -lgmp 

typedef pointer_t sigma__T_t;

typedef mpz_t sigma__T_low_t;



typedef mpz_t sigma__T_high_t;



struct sigma_funtype_2_s;
        typedef struct sigma_funtype_2_s * sigma_funtype_2_t;

struct sigma_funtype_2_ftbl_s {mpq_ptr_t (* fptr)(struct sigma_funtype_2_s *, sigma__T_t);
        mpq_ptr_t (* mptr)(struct sigma_funtype_2_s *, sigma__T_t);
        void (* rptr)(struct sigma_funtype_2_s *);
        struct sigma_funtype_2_s * (* cptr)(struct sigma_funtype_2_s *);};
typedef struct sigma_funtype_2_ftbl_s * sigma_funtype_2_ftbl_t;

struct sigma_funtype_2_hashentry_s {uint32_t keyhash; sigma__T_t key; mpq_t value;}; 
typedef struct sigma_funtype_2_hashentry_s sigma_funtype_2_hashentry_t;

struct sigma_funtype_2_htbl_s {uint32_t size; uint32_t num_entries; sigma_funtype_2_hashentry_t * data;}; 
typedef struct sigma_funtype_2_htbl_s * sigma_funtype_2_htbl_t;

struct sigma_funtype_2_s {uint32_t count;
        sigma_funtype_2_ftbl_t ftbl;
        sigma_funtype_2_htbl_t htbl;};
typedef struct sigma_funtype_2_s * sigma_funtype_2_t;

extern void release_sigma_funtype_2(sigma_funtype_2_t x);

extern sigma_funtype_2_t copy_sigma_funtype_2(sigma_funtype_2_t x);

extern sigma_funtype_2_t equal_sigma_funtype_2(sigma_funtype_2_t x, sigma_funtype_2_t y);




struct sigma_closure_3_s;
        typedef struct sigma_closure_3_s * sigma_closure_3_t;

struct sigma_closure_3_s {uint32_t count;
         sigma_funtype_2_ftbl_t ftbl;
         sigma_funtype_2_htbl_t htbl;
        mpz_t fvar_1;
        mpz_t fvar_2;
        sigma_funtype_2_t fvar_3;};

mpq_ptr_t f_sigma_closure_3(struct sigma_closure_3_s * closure, sigma__T_t bvar);

mpq_ptr_t m_sigma_closure_3(struct sigma_closure_3_s * closure, sigma__T_t bvar);

extern mpq_ptr_t h_sigma_closure_3(sigma__T_t ivar_6, mpz_t ivar_3, mpz_t ivar_4, sigma_funtype_2_t ivar_1);

extern sigma_closure_3_t new_sigma_closure_3(void);

extern void release_sigma_closure_3(sigma_funtype_2_t closure);

extern sigma_closure_3_t copy_sigma_closure_3(sigma_closure_3_t x);



extern bool_t sigma__T_lowp(type_actual_t sigma__T, mpz_t ivar_1);

extern bool_t sigma__T_highp(type_actual_t sigma__T, mpz_t ivar_1);

extern mpq_ptr_t sigma__sigma(type_actual_t sigma__T, mpz_t ivar_1, mpz_t ivar_2, sigma_funtype_2_t ivar_3);

extern mpq_ptr_t sigma__old_sigma(type_actual_t sigma__T, mpz_t ivar_1, mpz_t ivar_2, sigma_funtype_2_t ivar_3);

extern sigma_funtype_2_t sigma__restrict(type_actual_t sigma__T, sigma_funtype_2_t ivar_1, mpz_t ivar_3, mpz_t ivar_4);

extern mpq_ptr_t sigma__sum_it_def(sigma_closure_3_t sigma__T, mpz_t ivar_1, mpz_t ivar_2, sigma_funtype_2_t ivar_3, mpq_t ivar_5);

extern mpq_ptr_t sigma__sum_it(sigma_closure_3_t sigma__T, mpz_t ivar_1, mpz_t ivar_2, sigma_funtype_2_t ivar_3);

extern mpq_ptr_t sigma__sigma_it(sigma_closure_3_t sigma__T, mpz_t ivar_1, mpz_t ivar_2, sigma_funtype_2_t ivar_3);
#endif