//Code generated using pvs2ir
#ifndef _sigma_uint32_h 
#define _sigma_uint32_h

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

#include "sigma_uint32_c.h"

//cc -O3 -Wall -o sigma_uint32 -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib sigma_uint32_c.c -lgmp 

struct sigma_uint32_funtype_0_s;
        typedef struct sigma_uint32_funtype_0_s * sigma_uint32_funtype_0_t;

struct sigma_uint32_funtype_0_ftbl_s {mpq_ptr_t (* fptr)(struct sigma_uint32_funtype_0_s *, uint32_t);
        mpq_ptr_t (* mptr)(struct sigma_uint32_funtype_0_s *, uint32_t);
        void (* rptr)(struct sigma_uint32_funtype_0_s *);
        struct sigma_uint32_funtype_0_s * (* cptr)(struct sigma_uint32_funtype_0_s *);};
typedef struct sigma_uint32_funtype_0_ftbl_s * sigma_uint32_funtype_0_ftbl_t;

struct sigma_uint32_funtype_0_hashentry_s {uint32_t keyhash; uint32_t key; mpq_t value;}; 
typedef struct sigma_uint32_funtype_0_hashentry_s sigma_uint32_funtype_0_hashentry_t;

struct sigma_uint32_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; sigma_uint32_funtype_0_hashentry_t * data;}; 
typedef struct sigma_uint32_funtype_0_htbl_s * sigma_uint32_funtype_0_htbl_t;

struct sigma_uint32_funtype_0_s {uint32_t count;
        sigma_uint32_funtype_0_ftbl_t ftbl;
        sigma_uint32_funtype_0_htbl_t htbl;};
typedef struct sigma_uint32_funtype_0_s * sigma_uint32_funtype_0_t;

extern void release_sigma_uint32_funtype_0(sigma_uint32_funtype_0_t x);

extern sigma_uint32_funtype_0_t copy_sigma_uint32_funtype_0(sigma_uint32_funtype_0_t x);

uint32_t lookup_sigma_uint32_funtype_0(sigma_uint32_funtype_0_htbl_t htbl, uint32_t i, uint32_t ihash);

sigma_uint32_funtype_0_t dupdate_sigma_uint32_funtype_0(sigma_uint32_funtype_0_t a, uint32_t i, mpq_ptr_t v);

extern sigma_uint32_funtype_0_t update_sigma_uint32_funtype_0(sigma_uint32_funtype_0_t a, uint32_t i, mpq_ptr_t v);

extern bool_t equal_sigma_uint32_funtype_0(sigma_uint32_funtype_0_t x, sigma_uint32_funtype_0_t y);

extern char* json_sigma_uint32_funtype_0(sigma_uint32_funtype_0_t x);




struct sigma_uint32_closure_1_s;
        typedef struct sigma_uint32_closure_1_s * sigma_uint32_closure_1_t;

struct sigma_uint32_closure_1_s {uint32_t count;
         sigma_uint32_funtype_0_ftbl_t ftbl;
         sigma_uint32_funtype_0_htbl_t htbl;
        mpz_t fvar_1;
        mpz_t fvar_2;
        sigma_uint32_funtype_0_t fvar_3;};

mpq_ptr_t f_sigma_uint32_closure_1(struct sigma_uint32_closure_1_s * closure, uint32_t bvar);

mpq_ptr_t m_sigma_uint32_closure_1(struct sigma_uint32_closure_1_s * closure, uint32_t bvar);

extern mpq_ptr_t h_sigma_uint32_closure_1(uint32_t ivar_6, mpz_ptr_t ivar_3, mpz_ptr_t ivar_4, sigma_uint32_funtype_0_t ivar_1);

extern sigma_uint32_closure_1_t new_sigma_uint32_closure_1(void);

extern void release_sigma_uint32_closure_1(sigma_uint32_funtype_0_t closure);

extern sigma_uint32_closure_1_t copy_sigma_uint32_closure_1(sigma_uint32_closure_1_t x);



extern bool_t sigma_uint32__T_lowp(mpz_ptr_t ivar_1);

extern bool_t sigma_uint32__T_highp(mpz_ptr_t ivar_1);

extern mpq_ptr_t sigma_uint32__sigma(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, sigma_uint32_funtype_0_t ivar_3);

extern mpq_ptr_t sigma_uint32__old_sigma(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, sigma_uint32_funtype_0_t ivar_3);

extern sigma_uint32_funtype_0_t sigma_uint32__restrict(sigma_uint32_funtype_0_t ivar_1, mpz_ptr_t ivar_3, mpz_ptr_t ivar_4);

extern mpq_ptr_t sigma_uint32__sum_it_def(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, sigma_uint32_funtype_0_t ivar_3, mpq_ptr_t ivar_5);

extern mpq_ptr_t sigma_uint32__sum_it(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, sigma_uint32_funtype_0_t ivar_3);

extern mpq_ptr_t sigma_uint32__sigma_it(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, sigma_uint32_funtype_0_t ivar_3);
#endif