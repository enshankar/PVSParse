//Code generated using pvs2ir
#ifndef _function_iterate_h 
#define _function_iterate_h

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

//cc -O3 -Wall -o function_iterate -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/function_iterate_c.c -lgmp 

typedef pointer_t function_iterate__T_t;
//iterate

struct function_iterate_funtype_0_s;
        typedef struct function_iterate_funtype_0_s * function_iterate_funtype_0_t;

struct function_iterate_funtype_0_ftbl_s {function_iterate__T_t (* fptr)(struct function_iterate_funtype_0_s *, function_iterate__T_t);
        function_iterate__T_t (* mptr)(struct function_iterate_funtype_0_s *, function_iterate__T_t);
        void (* rptr)(struct function_iterate_funtype_0_s *);
        struct function_iterate_funtype_0_s * (* cptr)(struct function_iterate_funtype_0_s *);};
typedef struct function_iterate_funtype_0_ftbl_s * function_iterate_funtype_0_ftbl_t;

struct function_iterate_funtype_0_hashentry_s {uint32_t keyhash; function_iterate__T_t key; function_iterate__T_t value;}; 
typedef struct function_iterate_funtype_0_hashentry_s function_iterate_funtype_0_hashentry_t;

struct function_iterate_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; function_iterate_funtype_0_hashentry_t * data;}; 
typedef struct function_iterate_funtype_0_htbl_s * function_iterate_funtype_0_htbl_t;

struct function_iterate_funtype_0_s {uint32_t count;
        function_iterate_funtype_0_ftbl_t ftbl;
        function_iterate_funtype_0_htbl_t htbl;};
typedef struct function_iterate_funtype_0_s * function_iterate_funtype_0_t;

extern void release_function_iterate_funtype_0(function_iterate_funtype_0_t x, type_actual_t function_iterate__T);

extern function_iterate_funtype_0_t copy_function_iterate_funtype_0(function_iterate_funtype_0_t x);

extern bool_t equal_function_iterate_funtype_0(function_iterate_funtype_0_t x, function_iterate_funtype_0_t y, type_actual_t function_iterate__T);

extern char* json_function_iterate_funtype_0(function_iterate_funtype_0_t x, type_actual_t function_iterate__T);




struct function_iterate_closure_1_s;
        typedef struct function_iterate_closure_1_s * function_iterate_closure_1_t;

struct function_iterate_closure_1_s {uint32_t count;
         function_iterate_funtype_0_ftbl_t ftbl;
         function_iterate_funtype_0_htbl_t htbl;
        function_iterate_funtype_0_t fvar_1;
        type_actual_t fvar_2;
        mpz_t fvar_3; type_actual_t function_iterate__T;};

function_iterate__T_t f_function_iterate_closure_1(struct function_iterate_closure_1_s * closure, function_iterate__T_t bvar);

function_iterate__T_t m_function_iterate_closure_1(struct function_iterate_closure_1_s * closure, function_iterate__T_t bvar);

extern function_iterate__T_t h_function_iterate_closure_1(function_iterate__T_t ivar_5, function_iterate_funtype_0_t ivar_1, type_actual_t function_iterate__T, mpz_ptr_t ivar_3);

function_iterate_closure_1_t new_function_iterate_closure_1(void);

void release_function_iterate_closure_1(function_iterate_funtype_0_t closure, type_actual_t function_iterate__T);

function_iterate_closure_1_t copy_function_iterate_closure_1(function_iterate_closure_1_t x);



extern function_iterate_funtype_0_t function_iterate__iterate(type_actual_t function_iterate__T, function_iterate_funtype_0_t ivar_1, mpz_ptr_t ivar_3);
#endif