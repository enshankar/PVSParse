//Code generated using pvs2ir
#ifndef _ordstruct_adt_h 
#define _ordstruct_adt_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

//cc -O3 -Wall -o ordstruct_adt -I /Users/e21660/shankar/pvs.git/src/groundeval/ /Users/e21660/shankar/pvs.git/src/groundeval/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib ordstruct_adt_c.c -lgmp 

struct ordstruct_adt__ordstruct_adt_s {
         uint32_t count; 
        uint8_t ordstruct_adt__ordstruct_adt_index;};
typedef struct ordstruct_adt__ordstruct_adt_s * ordstruct_adt__ordstruct_adt_t;

extern ordstruct_adt__ordstruct_adt_t new_ordstruct_adt__ordstruct_adt(void);

extern void release_ordstruct_adt__ordstruct_adt(ordstruct_adt__ordstruct_adt_t x);

extern ordstruct_adt__ordstruct_adt_t copy_ordstruct_adt__ordstruct_adt(ordstruct_adt__ordstruct_adt_t x);

extern bool_t equal_ordstruct_adt__ordstruct_adt(ordstruct_adt__ordstruct_adt_t x, ordstruct_adt__ordstruct_adt_t y);
typedef struct actual_ordstruct_adt__ordstruct_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_ordstruct_adt__ordstruct_adt_t;

void release_ordstruct_adt__ordstruct_adt_ptr(pointer_t x, type_actual_t ordstruct_adt__ordstruct_adt);
extern bool_t equal_ordstruct_adt__ordstruct_adt_ptr(pointer_t x, pointer_t y, actual_ordstruct_adt__ordstruct_adt_t T);

actual_ordstruct_adt__ordstruct_adt_t actual_ordstruct_adt__ordstruct_adt(void);

extern ordstruct_adt__ordstruct_adt_t update_ordstruct_adt__ordstruct_adt_ordstruct_adt__ordstruct_adt_index(ordstruct_adt__ordstruct_adt_t x, uint8_t v);



struct ordstruct_adt__add_s {
        uint32_t count; 
        uint8_t ordstruct_adt__ordstruct_adt_index;
        mpz_t coef;
        ordstruct_adt__ordstruct_adt_t exp;
        ordstruct_adt__ordstruct_adt_t rest;};
typedef struct ordstruct_adt__add_s * ordstruct_adt__add_t;

extern ordstruct_adt__add_t new_ordstruct_adt__add(void);

extern void release_ordstruct_adt__add(ordstruct_adt__add_t x);

extern ordstruct_adt__add_t copy_ordstruct_adt__add(ordstruct_adt__add_t x);

extern bool_t equal_ordstruct_adt__add(ordstruct_adt__add_t x, ordstruct_adt__add_t y);
typedef struct actual_ordstruct_adt__add_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_ordstruct_adt__add_t;

void release_ordstruct_adt__add_ptr(pointer_t x, type_actual_t ordstruct_adt__add);
extern bool_t equal_ordstruct_adt__add_ptr(pointer_t x, pointer_t y, actual_ordstruct_adt__add_t T);

actual_ordstruct_adt__add_t actual_ordstruct_adt__add(void);

extern ordstruct_adt__add_t update_ordstruct_adt__add_ordstruct_adt__ordstruct_adt_index(ordstruct_adt__add_t x, uint8_t v);

extern ordstruct_adt__add_t update_ordstruct_adt__add_coef(ordstruct_adt__add_t x, mpz_ptr_t v);

extern ordstruct_adt__add_t update_ordstruct_adt__add_exp(ordstruct_adt__add_t x, ordstruct_adt__ordstruct_adt_t v);

extern ordstruct_adt__add_t update_ordstruct_adt__add_rest(ordstruct_adt__add_t x, ordstruct_adt__ordstruct_adt_t v);



struct ordstruct_adt_funtype_2_s;
        typedef struct ordstruct_adt_funtype_2_s * ordstruct_adt_funtype_2_t;

struct ordstruct_adt_funtype_2_ftbl_s {uint8_t (* fptr)(struct ordstruct_adt_funtype_2_s *, ordstruct_adt__ordstruct_adt_t);
        uint8_t (* mptr)(struct ordstruct_adt_funtype_2_s *, ordstruct_adt__ordstruct_adt_t);
        void (* rptr)(struct ordstruct_adt_funtype_2_s *);
        struct ordstruct_adt_funtype_2_s * (* cptr)(struct ordstruct_adt_funtype_2_s *);};
typedef struct ordstruct_adt_funtype_2_ftbl_s * ordstruct_adt_funtype_2_ftbl_t;

struct ordstruct_adt_funtype_2_hashentry_s {uint32_t keyhash; ordstruct_adt__ordstruct_adt_t key; uint8_t value;}; 
typedef struct ordstruct_adt_funtype_2_hashentry_s ordstruct_adt_funtype_2_hashentry_t;

struct ordstruct_adt_funtype_2_htbl_s {uint32_t size; uint32_t num_entries; ordstruct_adt_funtype_2_hashentry_t * data;}; 
typedef struct ordstruct_adt_funtype_2_htbl_s * ordstruct_adt_funtype_2_htbl_t;

struct ordstruct_adt_funtype_2_s {uint32_t count;
        ordstruct_adt_funtype_2_ftbl_t ftbl;
        ordstruct_adt_funtype_2_htbl_t htbl;};
typedef struct ordstruct_adt_funtype_2_s * ordstruct_adt_funtype_2_t;

extern void release_ordstruct_adt_funtype_2(ordstruct_adt_funtype_2_t x);

extern ordstruct_adt_funtype_2_t copy_ordstruct_adt_funtype_2(ordstruct_adt_funtype_2_t x);

extern bool_t equal_ordstruct_adt_funtype_2(ordstruct_adt_funtype_2_t x, ordstruct_adt_funtype_2_t y);



struct ordstruct_adt_funtype_3_s;
        typedef struct ordstruct_adt_funtype_3_s * ordstruct_adt_funtype_3_t;

struct ordstruct_adt_funtype_3_ftbl_s {mpz_ptr_t (* fptr)(struct ordstruct_adt_funtype_3_s *, ordstruct_adt__ordstruct_adt_t);
        mpz_ptr_t (* mptr)(struct ordstruct_adt_funtype_3_s *, ordstruct_adt__ordstruct_adt_t);
        void (* rptr)(struct ordstruct_adt_funtype_3_s *);
        struct ordstruct_adt_funtype_3_s * (* cptr)(struct ordstruct_adt_funtype_3_s *);};
typedef struct ordstruct_adt_funtype_3_ftbl_s * ordstruct_adt_funtype_3_ftbl_t;

struct ordstruct_adt_funtype_3_hashentry_s {uint32_t keyhash; ordstruct_adt__ordstruct_adt_t key; mpz_t value;}; 
typedef struct ordstruct_adt_funtype_3_hashentry_s ordstruct_adt_funtype_3_hashentry_t;

struct ordstruct_adt_funtype_3_htbl_s {uint32_t size; uint32_t num_entries; ordstruct_adt_funtype_3_hashentry_t * data;}; 
typedef struct ordstruct_adt_funtype_3_htbl_s * ordstruct_adt_funtype_3_htbl_t;

struct ordstruct_adt_funtype_3_s {uint32_t count;
        ordstruct_adt_funtype_3_ftbl_t ftbl;
        ordstruct_adt_funtype_3_htbl_t htbl;};
typedef struct ordstruct_adt_funtype_3_s * ordstruct_adt_funtype_3_t;

extern void release_ordstruct_adt_funtype_3(ordstruct_adt_funtype_3_t x);

extern ordstruct_adt_funtype_3_t copy_ordstruct_adt_funtype_3(ordstruct_adt_funtype_3_t x);

extern bool_t equal_ordstruct_adt_funtype_3(ordstruct_adt_funtype_3_t x, ordstruct_adt_funtype_3_t y);



struct ordstruct_adt_record_4_s {
        uint32_t count; 
        mpz_t project_1;
        mpz_t project_2;
        mpz_t project_3;};
typedef struct ordstruct_adt_record_4_s * ordstruct_adt_record_4_t;

extern ordstruct_adt_record_4_t new_ordstruct_adt_record_4(void);

extern void release_ordstruct_adt_record_4(ordstruct_adt_record_4_t x);

extern ordstruct_adt_record_4_t copy_ordstruct_adt_record_4(ordstruct_adt_record_4_t x);

extern bool_t equal_ordstruct_adt_record_4(ordstruct_adt_record_4_t x, ordstruct_adt_record_4_t y);
typedef struct actual_ordstruct_adt_record_4_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_ordstruct_adt_record_4_t;

void release_ordstruct_adt_record_4_ptr(pointer_t x, type_actual_t ordstruct_adt_record_4);
extern bool_t equal_ordstruct_adt_record_4_ptr(pointer_t x, pointer_t y, actual_ordstruct_adt_record_4_t T);

actual_ordstruct_adt_record_4_t actual_ordstruct_adt_record_4(void);

extern ordstruct_adt_record_4_t update_ordstruct_adt_record_4_project_1(ordstruct_adt_record_4_t x, mpz_ptr_t v);

extern ordstruct_adt_record_4_t update_ordstruct_adt_record_4_project_2(ordstruct_adt_record_4_t x, mpz_ptr_t v);

extern ordstruct_adt_record_4_t update_ordstruct_adt_record_4_project_3(ordstruct_adt_record_4_t x, mpz_ptr_t v);



struct ordstruct_adt_funtype_5_s;
        typedef struct ordstruct_adt_funtype_5_s * ordstruct_adt_funtype_5_t;

struct ordstruct_adt_funtype_5_ftbl_s {mpz_ptr_t (* fptr)(struct ordstruct_adt_funtype_5_s *, ordstruct_adt_record_4_t);
        mpz_ptr_t (* mptr)(struct ordstruct_adt_funtype_5_s *, mpz_ptr_t, mpz_ptr_t, mpz_ptr_t);
        void (* rptr)(struct ordstruct_adt_funtype_5_s *);
        struct ordstruct_adt_funtype_5_s * (* cptr)(struct ordstruct_adt_funtype_5_s *);};
typedef struct ordstruct_adt_funtype_5_ftbl_s * ordstruct_adt_funtype_5_ftbl_t;

struct ordstruct_adt_funtype_5_hashentry_s {uint32_t keyhash; ordstruct_adt_record_4_t key; mpz_t value;}; 
typedef struct ordstruct_adt_funtype_5_hashentry_s ordstruct_adt_funtype_5_hashentry_t;

struct ordstruct_adt_funtype_5_htbl_s {uint32_t size; uint32_t num_entries; ordstruct_adt_funtype_5_hashentry_t * data;}; 
typedef struct ordstruct_adt_funtype_5_htbl_s * ordstruct_adt_funtype_5_htbl_t;

struct ordstruct_adt_funtype_5_s {uint32_t count;
        ordstruct_adt_funtype_5_ftbl_t ftbl;
        ordstruct_adt_funtype_5_htbl_t htbl;};
typedef struct ordstruct_adt_funtype_5_s * ordstruct_adt_funtype_5_t;

extern void release_ordstruct_adt_funtype_5(ordstruct_adt_funtype_5_t x);

extern ordstruct_adt_funtype_5_t copy_ordstruct_adt_funtype_5(ordstruct_adt_funtype_5_t x);

extern bool_t equal_ordstruct_adt_funtype_5(ordstruct_adt_funtype_5_t x, ordstruct_adt_funtype_5_t y);




struct ordstruct_adt_closure_6_s;
        typedef struct ordstruct_adt_closure_6_s * ordstruct_adt_closure_6_t;

struct ordstruct_adt_closure_6_s {uint32_t count;
         ordstruct_adt_funtype_3_ftbl_t ftbl;
         ordstruct_adt_funtype_3_htbl_t htbl;
        ordstruct_adt_funtype_5_t fvar_1;
        mpz_t fvar_2;};

mpz_ptr_t f_ordstruct_adt_closure_6(struct ordstruct_adt_closure_6_s * closure, ordstruct_adt__ordstruct_adt_t bvar);

mpz_ptr_t m_ordstruct_adt_closure_6(struct ordstruct_adt_closure_6_s * closure, ordstruct_adt__ordstruct_adt_t bvar);

extern mpz_ptr_t h_ordstruct_adt_closure_6(ordstruct_adt__ordstruct_adt_t ivar_5, ordstruct_adt_funtype_5_t ivar_2, mpz_ptr_t ivar_1);

extern ordstruct_adt_closure_6_t new_ordstruct_adt_closure_6(void);

extern void release_ordstruct_adt_closure_6(ordstruct_adt_funtype_3_t closure);

extern ordstruct_adt_closure_6_t copy_ordstruct_adt_closure_6(ordstruct_adt_closure_6_t x);




struct ordstruct_adt_closure_7_s;
        typedef struct ordstruct_adt_closure_7_s * ordstruct_adt_closure_7_t;

struct ordstruct_adt_closure_7_s {uint32_t count;
         ordstruct_adt_funtype_5_ftbl_t ftbl;
         ordstruct_adt_funtype_5_htbl_t htbl;
        ordstruct_adt_funtype_5_t fvar_1;};

mpz_ptr_t f_ordstruct_adt_closure_7(struct ordstruct_adt_closure_7_s * closure, ordstruct_adt_record_4_t bvar);

mpz_ptr_t m_ordstruct_adt_closure_7(struct ordstruct_adt_closure_7_s * closure, mpz_ptr_t bvar_1, mpz_ptr_t bvar_2, mpz_ptr_t bvar_3);

extern mpz_ptr_t h_ordstruct_adt_closure_7(mpz_ptr_t ivar_31, mpz_ptr_t ivar_32, mpz_ptr_t ivar_33, ordstruct_adt_funtype_5_t ivar_26);

extern ordstruct_adt_closure_7_t new_ordstruct_adt_closure_7(void);

extern void release_ordstruct_adt_closure_7(ordstruct_adt_funtype_5_t closure);

extern ordstruct_adt_closure_7_t copy_ordstruct_adt_closure_7(ordstruct_adt_closure_7_t x);



struct ordstruct_adt_record_8_s {
        uint32_t count; 
        mpz_t project_1;
        mpz_t project_2;
        mpz_t project_3;
        ordstruct_adt__ordstruct_adt_t project_4;};
typedef struct ordstruct_adt_record_8_s * ordstruct_adt_record_8_t;

extern ordstruct_adt_record_8_t new_ordstruct_adt_record_8(void);

extern void release_ordstruct_adt_record_8(ordstruct_adt_record_8_t x);

extern ordstruct_adt_record_8_t copy_ordstruct_adt_record_8(ordstruct_adt_record_8_t x);

extern bool_t equal_ordstruct_adt_record_8(ordstruct_adt_record_8_t x, ordstruct_adt_record_8_t y);
typedef struct actual_ordstruct_adt_record_8_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_ordstruct_adt_record_8_t;

void release_ordstruct_adt_record_8_ptr(pointer_t x, type_actual_t ordstruct_adt_record_8);
extern bool_t equal_ordstruct_adt_record_8_ptr(pointer_t x, pointer_t y, actual_ordstruct_adt_record_8_t T);

actual_ordstruct_adt_record_8_t actual_ordstruct_adt_record_8(void);

extern ordstruct_adt_record_8_t update_ordstruct_adt_record_8_project_1(ordstruct_adt_record_8_t x, mpz_ptr_t v);

extern ordstruct_adt_record_8_t update_ordstruct_adt_record_8_project_2(ordstruct_adt_record_8_t x, mpz_ptr_t v);

extern ordstruct_adt_record_8_t update_ordstruct_adt_record_8_project_3(ordstruct_adt_record_8_t x, mpz_ptr_t v);

extern ordstruct_adt_record_8_t update_ordstruct_adt_record_8_project_4(ordstruct_adt_record_8_t x, ordstruct_adt__ordstruct_adt_t v);



struct ordstruct_adt_funtype_9_s;
        typedef struct ordstruct_adt_funtype_9_s * ordstruct_adt_funtype_9_t;

struct ordstruct_adt_funtype_9_ftbl_s {mpz_ptr_t (* fptr)(struct ordstruct_adt_funtype_9_s *, ordstruct_adt_record_8_t);
        mpz_ptr_t (* mptr)(struct ordstruct_adt_funtype_9_s *, mpz_ptr_t, mpz_ptr_t, mpz_ptr_t, ordstruct_adt__ordstruct_adt_t);
        void (* rptr)(struct ordstruct_adt_funtype_9_s *);
        struct ordstruct_adt_funtype_9_s * (* cptr)(struct ordstruct_adt_funtype_9_s *);};
typedef struct ordstruct_adt_funtype_9_ftbl_s * ordstruct_adt_funtype_9_ftbl_t;

struct ordstruct_adt_funtype_9_hashentry_s {uint32_t keyhash; ordstruct_adt_record_8_t key; mpz_t value;}; 
typedef struct ordstruct_adt_funtype_9_hashentry_s ordstruct_adt_funtype_9_hashentry_t;

struct ordstruct_adt_funtype_9_htbl_s {uint32_t size; uint32_t num_entries; ordstruct_adt_funtype_9_hashentry_t * data;}; 
typedef struct ordstruct_adt_funtype_9_htbl_s * ordstruct_adt_funtype_9_htbl_t;

struct ordstruct_adt_funtype_9_s {uint32_t count;
        ordstruct_adt_funtype_9_ftbl_t ftbl;
        ordstruct_adt_funtype_9_htbl_t htbl;};
typedef struct ordstruct_adt_funtype_9_s * ordstruct_adt_funtype_9_t;

extern void release_ordstruct_adt_funtype_9(ordstruct_adt_funtype_9_t x);

extern ordstruct_adt_funtype_9_t copy_ordstruct_adt_funtype_9(ordstruct_adt_funtype_9_t x);

extern bool_t equal_ordstruct_adt_funtype_9(ordstruct_adt_funtype_9_t x, ordstruct_adt_funtype_9_t y);




struct ordstruct_adt_closure_10_s;
        typedef struct ordstruct_adt_closure_10_s * ordstruct_adt_closure_10_t;

struct ordstruct_adt_closure_10_s {uint32_t count;
         ordstruct_adt_funtype_3_ftbl_t ftbl;
         ordstruct_adt_funtype_3_htbl_t htbl;
        ordstruct_adt_funtype_9_t fvar_1;
        ordstruct_adt_funtype_3_t fvar_2;};

mpz_ptr_t f_ordstruct_adt_closure_10(struct ordstruct_adt_closure_10_s * closure, ordstruct_adt__ordstruct_adt_t bvar);

mpz_ptr_t m_ordstruct_adt_closure_10(struct ordstruct_adt_closure_10_s * closure, ordstruct_adt__ordstruct_adt_t bvar);

extern mpz_ptr_t h_ordstruct_adt_closure_10(ordstruct_adt__ordstruct_adt_t ivar_6, ordstruct_adt_funtype_9_t ivar_3, ordstruct_adt_funtype_3_t ivar_1);

extern ordstruct_adt_closure_10_t new_ordstruct_adt_closure_10(void);

extern void release_ordstruct_adt_closure_10(ordstruct_adt_funtype_3_t closure);

extern ordstruct_adt_closure_10_t copy_ordstruct_adt_closure_10(ordstruct_adt_closure_10_t x);




struct ordstruct_adt_closure_11_s;
        typedef struct ordstruct_adt_closure_11_s * ordstruct_adt_closure_11_t;

struct ordstruct_adt_closure_11_s {uint32_t count;
         ordstruct_adt_funtype_3_ftbl_t ftbl;
         ordstruct_adt_funtype_3_htbl_t htbl;
        ordstruct_adt_funtype_3_t fvar_1;};

mpz_ptr_t f_ordstruct_adt_closure_11(struct ordstruct_adt_closure_11_s * closure, ordstruct_adt__ordstruct_adt_t bvar);

mpz_ptr_t m_ordstruct_adt_closure_11(struct ordstruct_adt_closure_11_s * closure, ordstruct_adt__ordstruct_adt_t bvar);

extern mpz_ptr_t h_ordstruct_adt_closure_11(ordstruct_adt__ordstruct_adt_t ivar_51, ordstruct_adt_funtype_3_t ivar_48);

extern ordstruct_adt_closure_11_t new_ordstruct_adt_closure_11(void);

extern void release_ordstruct_adt_closure_11(ordstruct_adt_funtype_3_t closure);

extern ordstruct_adt_closure_11_t copy_ordstruct_adt_closure_11(ordstruct_adt_closure_11_t x);




struct ordstruct_adt_closure_12_s;
        typedef struct ordstruct_adt_closure_12_s * ordstruct_adt_closure_12_t;

struct ordstruct_adt_closure_12_s {uint32_t count;
         ordstruct_adt_funtype_9_ftbl_t ftbl;
         ordstruct_adt_funtype_9_htbl_t htbl;
        ordstruct_adt_funtype_9_t fvar_1;};

mpz_ptr_t f_ordstruct_adt_closure_12(struct ordstruct_adt_closure_12_s * closure, ordstruct_adt_record_8_t bvar);

mpz_ptr_t m_ordstruct_adt_closure_12(struct ordstruct_adt_closure_12_s * closure, mpz_ptr_t bvar_1, mpz_ptr_t bvar_2, mpz_ptr_t bvar_3, ordstruct_adt__ordstruct_adt_t bvar_4);

extern mpz_ptr_t h_ordstruct_adt_closure_12(mpz_ptr_t ivar_42, mpz_ptr_t ivar_43, mpz_ptr_t ivar_44, ordstruct_adt__ordstruct_adt_t ivar_45, ordstruct_adt_funtype_9_t ivar_36);

extern ordstruct_adt_closure_12_t new_ordstruct_adt_closure_12(void);

extern void release_ordstruct_adt_closure_12(ordstruct_adt_funtype_9_t closure);

extern ordstruct_adt_closure_12_t copy_ordstruct_adt_closure_12(ordstruct_adt_closure_12_t x);



extern bool_t r_ordstruct_adt__zerop(ordstruct_adt__ordstruct_adt_t ivar_1);

extern bool_t r_ordstruct_adt__nonzerop(ordstruct_adt__ordstruct_adt_t ivar_1);

extern ordstruct_adt__add_t update_ordstruct_adt__ordstruct_adt_coef(ordstruct_adt__ordstruct_adt_t ivar_1, mpz_ptr_t ivar_3);

extern mpz_ptr_t ordstruct_adt__ordstruct_adt_coef(ordstruct_adt__ordstruct_adt_t ivar_1);

extern ordstruct_adt__add_t update_ordstruct_adt__ordstruct_adt_exp(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_3);

extern ordstruct_adt__ordstruct_adt_t ordstruct_adt__ordstruct_adt_exp(ordstruct_adt__ordstruct_adt_t ivar_1);

extern ordstruct_adt__add_t update_ordstruct_adt__ordstruct_adt_rest(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_3);

extern ordstruct_adt__ordstruct_adt_t ordstruct_adt__ordstruct_adt_rest(ordstruct_adt__ordstruct_adt_t ivar_1);

extern ordstruct_adt__ordstruct_adt_t ordstruct_adt__zero(void);

extern ordstruct_adt__ordstruct_adt_t ordstruct_adt__add(mpz_ptr_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_4);

extern ordstruct_adt_funtype_2_t ordstruct_adt__ordstruct_ord(void);

extern uint8_t ordstruct_adt__ord(ordstruct_adt__ordstruct_adt_t ivar_1);

extern bool_t ordstruct_adt__subterm(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2);

extern bool_t ordstruct_adt__doublelessp(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2);

extern ordstruct_adt_funtype_3_t ordstruct_adt__reduce_nat(mpz_ptr_t ivar_1, ordstruct_adt_funtype_5_t ivar_2);

extern ordstruct_adt_funtype_3_t ordstruct_adt__REDUCE_nat(ordstruct_adt_funtype_3_t ivar_1, ordstruct_adt_funtype_9_t ivar_3);
#endif