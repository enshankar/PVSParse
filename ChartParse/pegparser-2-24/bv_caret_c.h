//Code generated using pvs2ir
#ifndef _bv_caret_h 
#define _bv_caret_h

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

//cc -O3 -Wall -o bv_caret -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bv_caret_c.c /Users/e21660/shankar/pvs.git/lib/bv_c.c /Users/e21660/shankar/pvs.git/lib/bit_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/modulo_arithmetic_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c -lgmp 
//^

struct bv_caret_funtype_0_s;
        typedef struct bv_caret_funtype_0_s * bv_caret_funtype_0_t;

struct bv_caret_funtype_0_ftbl_s {bool_t (* fptr)(struct bv_caret_funtype_0_s *, mpz_ptr_t);
        bool_t (* mptr)(struct bv_caret_funtype_0_s *, mpz_ptr_t);
        void (* rptr)(struct bv_caret_funtype_0_s *);
        struct bv_caret_funtype_0_s * (* cptr)(struct bv_caret_funtype_0_s *);};
typedef struct bv_caret_funtype_0_ftbl_s * bv_caret_funtype_0_ftbl_t;

struct bv_caret_funtype_0_hashentry_s {uint32_t keyhash; mpz_ptr_t key; bool_t value;}; 
typedef struct bv_caret_funtype_0_hashentry_s bv_caret_funtype_0_hashentry_t;

struct bv_caret_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; bv_caret_funtype_0_hashentry_t * data;}; 
typedef struct bv_caret_funtype_0_htbl_s * bv_caret_funtype_0_htbl_t;

struct bv_caret_funtype_0_s {uint32_t count;
        bv_caret_funtype_0_ftbl_t ftbl;
        bv_caret_funtype_0_htbl_t htbl;};
typedef struct bv_caret_funtype_0_s * bv_caret_funtype_0_t;

extern void release_bv_caret_funtype_0(bv_caret_funtype_0_t x, mpz_ptr_t bv_caret__N);

extern bv_caret_funtype_0_t copy_bv_caret_funtype_0(bv_caret_funtype_0_t x);

extern uint32_t lookup_bv_caret_funtype_0(bv_caret_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

extern bv_caret_funtype_0_t dupdate_bv_caret_funtype_0(bv_caret_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_caret__N);

extern bv_caret_funtype_0_t update_bv_caret_funtype_0(bv_caret_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_caret__N);

extern bool_t equal_bv_caret_funtype_0(bv_caret_funtype_0_t x, bv_caret_funtype_0_t y, mpz_ptr_t bv_caret__N);

extern char* json_bv_caret_funtype_0(bv_caret_funtype_0_t x, mpz_ptr_t bv_caret__N);


//^

struct bv_caret_record_1_s {
        uint32_t count; 
        mpz_t project_1;
        mpz_t project_2;};
typedef struct bv_caret_record_1_s * bv_caret_record_1_t;

extern bv_caret_record_1_t new_bv_caret_record_1(void);

extern void release_bv_caret_record_1(bv_caret_record_1_t x, mpz_ptr_t bv_caret__N);

extern bv_caret_record_1_t copy_bv_caret_record_1(bv_caret_record_1_t x);

extern bool_t equal_bv_caret_record_1(bv_caret_record_1_t x, bv_caret_record_1_t y, mpz_ptr_t bv_caret__N);
extern char * json_bv_caret_record_1(bv_caret_record_1_t x, mpz_ptr_t bv_caret__N);

typedef struct actual_bv_caret_record_1_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; mpz_ptr_t bv_caret__N;} * actual_bv_caret_record_1_t;
extern void release_bv_caret_record_1_ptr(pointer_t x, type_actual_t bv_caret_record_1);

extern bool_t equal_bv_caret_record_1_ptr(pointer_t x, pointer_t y, actual_bv_caret_record_1_t T);

extern char * json_bv_caret_record_1_ptr(pointer_t x,  actual_bv_caret_record_1_t T);

actual_bv_caret_record_1_t actual_bv_caret_record_1(mpz_ptr_t bv_caret__N);

extern bv_caret_record_1_t update_bv_caret_record_1_project_1(bv_caret_record_1_t x, mpz_ptr_t v);

extern bv_caret_record_1_t update_bv_caret_record_1_project_2(bv_caret_record_1_t x, mpz_ptr_t v);




struct bv_caret_closure_2_s;
        typedef struct bv_caret_closure_2_s * bv_caret_closure_2_t;

struct bv_caret_closure_2_s {uint32_t count;
         bv_caret_funtype_0_ftbl_t ftbl;
         bv_caret_funtype_0_htbl_t htbl;
        bv_caret_record_1_t fvar_1;
        mpz_t fvar_2;
        bv_caret_funtype_0_t fvar_3; mpz_ptr_t bv_caret__N;};

bool_t f_bv_caret_closure_2(struct bv_caret_closure_2_s * closure, mpz_ptr_t bvar);

bool_t m_bv_caret_closure_2(struct bv_caret_closure_2_s * closure, mpz_ptr_t bvar);

extern bool_t h_bv_caret_closure_2(mpz_ptr_t ivar_14, bv_caret_record_1_t ivar_3, mpz_ptr_t bv_caret__N, bv_caret_funtype_0_t ivar_1);

bv_caret_closure_2_t new_bv_caret_closure_2(void);

void release_bv_caret_closure_2(bv_caret_funtype_0_t closure, mpz_ptr_t bv_caret__N);

bv_caret_closure_2_t copy_bv_caret_closure_2(bv_caret_closure_2_t x);



extern bv_caret_funtype_0_t bv_caret__caret(mpz_ptr_t bv_caret__N, bv_caret_funtype_0_t ivar_1, bv_caret_record_1_t ivar_3);
#endif