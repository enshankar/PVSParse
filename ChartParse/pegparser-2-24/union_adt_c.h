//Code generated using pvs2ir
#ifndef _union_adt_h 
#define _union_adt_h

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

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

//cc -O3 -Wall -o union_adt -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/union_adt_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c -lgmp 

typedef pointer_t union_adt__T1_t;

typedef pointer_t union_adt__T2_t;
//union

struct union_adt__union_adt_s {
         uint32_t count; 
        uint8_t union_adt__union_adt_index;};
typedef struct union_adt__union_adt_s * union_adt__union_adt_t;

extern union_adt__union_adt_t new_union_adt__union_adt(void);

extern void release_union_adt__union_adt(union_adt__union_adt_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt__union_adt_t copy_union_adt__union_adt(union_adt__union_adt_t x);

extern bool_t equal_union_adt__union_adt(union_adt__union_adt_t x, union_adt__union_adt_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);
extern char * json_union_adt__union_adt(union_adt__union_adt_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

typedef struct actual_union_adt__union_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t union_adt__T1; type_actual_t union_adt__T2;} * actual_union_adt__union_adt_t;
extern void release_union_adt__union_adt_ptr(pointer_t x, type_actual_t union_adt__union_adt);

extern bool_t equal_union_adt__union_adt_ptr(pointer_t x, pointer_t y, actual_union_adt__union_adt_t T);

extern char * json_union_adt__union_adt_ptr(pointer_t x,  actual_union_adt__union_adt_t T);

actual_union_adt__union_adt_t actual_union_adt__union_adt(type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt__union_adt_t update_union_adt__union_adt_union_adt__union_adt_index(union_adt__union_adt_t x, uint8_t v);


//inl

struct union_adt__inl_s {
        uint32_t count; 
        uint8_t union_adt__union_adt_index;
        union_adt__T1_t left;};
typedef struct union_adt__inl_s * union_adt__inl_t;

extern union_adt__inl_t new_union_adt__inl(void);

extern void release_union_adt__inl(union_adt__inl_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt__inl_t copy_union_adt__inl(union_adt__inl_t x);

extern bool_t equal_union_adt__inl(union_adt__inl_t x, union_adt__inl_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);
extern char * json_union_adt__inl(union_adt__inl_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

typedef struct actual_union_adt__inl_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t union_adt__T1; type_actual_t union_adt__T2;} * actual_union_adt__inl_t;
extern void release_union_adt__inl_ptr(pointer_t x, type_actual_t union_adt__inl);

extern bool_t equal_union_adt__inl_ptr(pointer_t x, pointer_t y, actual_union_adt__inl_t T);

extern char * json_union_adt__inl_ptr(pointer_t x,  actual_union_adt__inl_t T);

actual_union_adt__inl_t actual_union_adt__inl(type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt__inl_t update_union_adt__inl_union_adt__union_adt_index(union_adt__inl_t x, uint8_t v);

extern union_adt__inl_t update_union_adt__inl_left(union_adt__inl_t x, union_adt__T1_t v, type_actual_t union_adt__T1, type_actual_t union_adt__T2);


//inr

struct union_adt__inr_s {
        uint32_t count; 
        uint8_t union_adt__union_adt_index;
        union_adt__T2_t right;};
typedef struct union_adt__inr_s * union_adt__inr_t;

extern union_adt__inr_t new_union_adt__inr(void);

extern void release_union_adt__inr(union_adt__inr_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt__inr_t copy_union_adt__inr(union_adt__inr_t x);

extern bool_t equal_union_adt__inr(union_adt__inr_t x, union_adt__inr_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);
extern char * json_union_adt__inr(union_adt__inr_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

typedef struct actual_union_adt__inr_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t union_adt__T1; type_actual_t union_adt__T2;} * actual_union_adt__inr_t;
extern void release_union_adt__inr_ptr(pointer_t x, type_actual_t union_adt__inr);

extern bool_t equal_union_adt__inr_ptr(pointer_t x, pointer_t y, actual_union_adt__inr_t T);

extern char * json_union_adt__inr_ptr(pointer_t x,  actual_union_adt__inr_t T);

actual_union_adt__inr_t actual_union_adt__inr(type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt__inr_t update_union_adt__inr_union_adt__union_adt_index(union_adt__inr_t x, uint8_t v);

extern union_adt__inr_t update_union_adt__inr_right(union_adt__inr_t x, union_adt__T2_t v, type_actual_t union_adt__T1, type_actual_t union_adt__T2);


//union_ord

struct union_adt_funtype_3_s;
        typedef struct union_adt_funtype_3_s * union_adt_funtype_3_t;

struct union_adt_funtype_3_ftbl_s {uint8_t (* fptr)(struct union_adt_funtype_3_s *, union_adt__union_adt_t);
        uint8_t (* mptr)(struct union_adt_funtype_3_s *, union_adt__union_adt_t);
        void (* rptr)(struct union_adt_funtype_3_s *);
        struct union_adt_funtype_3_s * (* cptr)(struct union_adt_funtype_3_s *);};
typedef struct union_adt_funtype_3_ftbl_s * union_adt_funtype_3_ftbl_t;

struct union_adt_funtype_3_hashentry_s {uint32_t keyhash; union_adt__union_adt_t key; uint8_t value;}; 
typedef struct union_adt_funtype_3_hashentry_s union_adt_funtype_3_hashentry_t;

struct union_adt_funtype_3_htbl_s {uint32_t size; uint32_t num_entries; union_adt_funtype_3_hashentry_t * data;}; 
typedef struct union_adt_funtype_3_htbl_s * union_adt_funtype_3_htbl_t;

struct union_adt_funtype_3_s {uint32_t count;
        union_adt_funtype_3_ftbl_t ftbl;
        union_adt_funtype_3_htbl_t htbl;};
typedef struct union_adt_funtype_3_s * union_adt_funtype_3_t;

extern void release_union_adt_funtype_3(union_adt_funtype_3_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_funtype_3_t copy_union_adt_funtype_3(union_adt_funtype_3_t x);

extern bool_t equal_union_adt_funtype_3(union_adt_funtype_3_t x, union_adt_funtype_3_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern char* json_union_adt_funtype_3(union_adt_funtype_3_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);


//every

struct union_adt_funtype_4_s;
        typedef struct union_adt_funtype_4_s * union_adt_funtype_4_t;

struct union_adt_funtype_4_ftbl_s {bool_t (* fptr)(struct union_adt_funtype_4_s *, union_adt__union_adt_t);
        bool_t (* mptr)(struct union_adt_funtype_4_s *, union_adt__union_adt_t);
        void (* rptr)(struct union_adt_funtype_4_s *);
        struct union_adt_funtype_4_s * (* cptr)(struct union_adt_funtype_4_s *);};
typedef struct union_adt_funtype_4_ftbl_s * union_adt_funtype_4_ftbl_t;

struct union_adt_funtype_4_hashentry_s {uint32_t keyhash; union_adt__union_adt_t key; bool_t value;}; 
typedef struct union_adt_funtype_4_hashentry_s union_adt_funtype_4_hashentry_t;

struct union_adt_funtype_4_htbl_s {uint32_t size; uint32_t num_entries; union_adt_funtype_4_hashentry_t * data;}; 
typedef struct union_adt_funtype_4_htbl_s * union_adt_funtype_4_htbl_t;

struct union_adt_funtype_4_s {uint32_t count;
        union_adt_funtype_4_ftbl_t ftbl;
        union_adt_funtype_4_htbl_t htbl;};
typedef struct union_adt_funtype_4_s * union_adt_funtype_4_t;

extern void release_union_adt_funtype_4(union_adt_funtype_4_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_funtype_4_t copy_union_adt_funtype_4(union_adt_funtype_4_t x);

extern bool_t equal_union_adt_funtype_4(union_adt_funtype_4_t x, union_adt_funtype_4_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern char* json_union_adt_funtype_4(union_adt_funtype_4_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);


//every

struct union_adt_funtype_5_s;
        typedef struct union_adt_funtype_5_s * union_adt_funtype_5_t;

struct union_adt_funtype_5_ftbl_s {bool_t (* fptr)(struct union_adt_funtype_5_s *, union_adt__T1_t);
        bool_t (* mptr)(struct union_adt_funtype_5_s *, union_adt__T1_t);
        void (* rptr)(struct union_adt_funtype_5_s *);
        struct union_adt_funtype_5_s * (* cptr)(struct union_adt_funtype_5_s *);};
typedef struct union_adt_funtype_5_ftbl_s * union_adt_funtype_5_ftbl_t;

struct union_adt_funtype_5_hashentry_s {uint32_t keyhash; union_adt__T1_t key; bool_t value;}; 
typedef struct union_adt_funtype_5_hashentry_s union_adt_funtype_5_hashentry_t;

struct union_adt_funtype_5_htbl_s {uint32_t size; uint32_t num_entries; union_adt_funtype_5_hashentry_t * data;}; 
typedef struct union_adt_funtype_5_htbl_s * union_adt_funtype_5_htbl_t;

struct union_adt_funtype_5_s {uint32_t count;
        union_adt_funtype_5_ftbl_t ftbl;
        union_adt_funtype_5_htbl_t htbl;};
typedef struct union_adt_funtype_5_s * union_adt_funtype_5_t;

extern void release_union_adt_funtype_5(union_adt_funtype_5_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_funtype_5_t copy_union_adt_funtype_5(union_adt_funtype_5_t x);

extern bool_t equal_union_adt_funtype_5(union_adt_funtype_5_t x, union_adt_funtype_5_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern char* json_union_adt_funtype_5(union_adt_funtype_5_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);


//every

struct union_adt_funtype_6_s;
        typedef struct union_adt_funtype_6_s * union_adt_funtype_6_t;

struct union_adt_funtype_6_ftbl_s {bool_t (* fptr)(struct union_adt_funtype_6_s *, union_adt__T2_t);
        bool_t (* mptr)(struct union_adt_funtype_6_s *, union_adt__T2_t);
        void (* rptr)(struct union_adt_funtype_6_s *);
        struct union_adt_funtype_6_s * (* cptr)(struct union_adt_funtype_6_s *);};
typedef struct union_adt_funtype_6_ftbl_s * union_adt_funtype_6_ftbl_t;

struct union_adt_funtype_6_hashentry_s {uint32_t keyhash; union_adt__T2_t key; bool_t value;}; 
typedef struct union_adt_funtype_6_hashentry_s union_adt_funtype_6_hashentry_t;

struct union_adt_funtype_6_htbl_s {uint32_t size; uint32_t num_entries; union_adt_funtype_6_hashentry_t * data;}; 
typedef struct union_adt_funtype_6_htbl_s * union_adt_funtype_6_htbl_t;

struct union_adt_funtype_6_s {uint32_t count;
        union_adt_funtype_6_ftbl_t ftbl;
        union_adt_funtype_6_htbl_t htbl;};
typedef struct union_adt_funtype_6_s * union_adt_funtype_6_t;

extern void release_union_adt_funtype_6(union_adt_funtype_6_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_funtype_6_t copy_union_adt_funtype_6(union_adt_funtype_6_t x);

extern bool_t equal_union_adt_funtype_6(union_adt_funtype_6_t x, union_adt_funtype_6_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern char* json_union_adt_funtype_6(union_adt_funtype_6_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);




struct union_adt_closure_7_s;
        typedef struct union_adt_closure_7_s * union_adt_closure_7_t;

struct union_adt_closure_7_s {uint32_t count;
         union_adt_funtype_4_ftbl_t ftbl;
         union_adt_funtype_4_htbl_t htbl;
        type_actual_t fvar_1;
        type_actual_t fvar_2;
        union_adt_funtype_5_t fvar_3;
        union_adt_funtype_6_t fvar_4; type_actual_t union_adt__T1; type_actual_t union_adt__T2;};

bool_t f_union_adt_closure_7(struct union_adt_closure_7_s * closure, union_adt__union_adt_t bvar);

bool_t m_union_adt_closure_7(struct union_adt_closure_7_s * closure, union_adt__union_adt_t bvar);

extern bool_t h_union_adt_closure_7(union_adt__union_adt_t ivar_6, type_actual_t union_adt__T2, type_actual_t union_adt__T1, union_adt_funtype_5_t ivar_1, union_adt_funtype_6_t ivar_3);

union_adt_closure_7_t new_union_adt_closure_7(void);

void release_union_adt_closure_7(union_adt_funtype_4_t closure, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

union_adt_closure_7_t copy_union_adt_closure_7(union_adt_closure_7_t x);




struct union_adt_closure_8_s;
        typedef struct union_adt_closure_8_s * union_adt_closure_8_t;

struct union_adt_closure_8_s {uint32_t count;
         union_adt_funtype_4_ftbl_t ftbl;
         union_adt_funtype_4_htbl_t htbl;
        type_actual_t fvar_1;
        type_actual_t fvar_2;
        union_adt_funtype_5_t fvar_3;
        union_adt_funtype_6_t fvar_4; type_actual_t union_adt__T1; type_actual_t union_adt__T2;};

bool_t f_union_adt_closure_8(struct union_adt_closure_8_s * closure, union_adt__union_adt_t bvar);

bool_t m_union_adt_closure_8(struct union_adt_closure_8_s * closure, union_adt__union_adt_t bvar);

extern bool_t h_union_adt_closure_8(union_adt__union_adt_t ivar_6, type_actual_t union_adt__T2, type_actual_t union_adt__T1, union_adt_funtype_5_t ivar_1, union_adt_funtype_6_t ivar_3);

union_adt_closure_8_t new_union_adt_closure_8(void);

void release_union_adt_closure_8(union_adt_funtype_4_t closure, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

union_adt_closure_8_t copy_union_adt_closure_8(union_adt_closure_8_t x);


//reduce_nat

struct union_adt_funtype_9_s;
        typedef struct union_adt_funtype_9_s * union_adt_funtype_9_t;

struct union_adt_funtype_9_ftbl_s {mpz_ptr_t (* fptr)(struct union_adt_funtype_9_s *, union_adt__union_adt_t);
        mpz_ptr_t (* mptr)(struct union_adt_funtype_9_s *, union_adt__union_adt_t);
        void (* rptr)(struct union_adt_funtype_9_s *);
        struct union_adt_funtype_9_s * (* cptr)(struct union_adt_funtype_9_s *);};
typedef struct union_adt_funtype_9_ftbl_s * union_adt_funtype_9_ftbl_t;

struct union_adt_funtype_9_hashentry_s {uint32_t keyhash; union_adt__union_adt_t key; mpz_t value;}; 
typedef struct union_adt_funtype_9_hashentry_s union_adt_funtype_9_hashentry_t;

struct union_adt_funtype_9_htbl_s {uint32_t size; uint32_t num_entries; union_adt_funtype_9_hashentry_t * data;}; 
typedef struct union_adt_funtype_9_htbl_s * union_adt_funtype_9_htbl_t;

struct union_adt_funtype_9_s {uint32_t count;
        union_adt_funtype_9_ftbl_t ftbl;
        union_adt_funtype_9_htbl_t htbl;};
typedef struct union_adt_funtype_9_s * union_adt_funtype_9_t;

extern void release_union_adt_funtype_9(union_adt_funtype_9_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_funtype_9_t copy_union_adt_funtype_9(union_adt_funtype_9_t x);

extern bool_t equal_union_adt_funtype_9(union_adt_funtype_9_t x, union_adt_funtype_9_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern char* json_union_adt_funtype_9(union_adt_funtype_9_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);


//reduce_nat

struct union_adt_funtype_10_s;
        typedef struct union_adt_funtype_10_s * union_adt_funtype_10_t;

struct union_adt_funtype_10_ftbl_s {mpz_ptr_t (* fptr)(struct union_adt_funtype_10_s *, union_adt__T1_t);
        mpz_ptr_t (* mptr)(struct union_adt_funtype_10_s *, union_adt__T1_t);
        void (* rptr)(struct union_adt_funtype_10_s *);
        struct union_adt_funtype_10_s * (* cptr)(struct union_adt_funtype_10_s *);};
typedef struct union_adt_funtype_10_ftbl_s * union_adt_funtype_10_ftbl_t;

struct union_adt_funtype_10_hashentry_s {uint32_t keyhash; union_adt__T1_t key; mpz_t value;}; 
typedef struct union_adt_funtype_10_hashentry_s union_adt_funtype_10_hashentry_t;

struct union_adt_funtype_10_htbl_s {uint32_t size; uint32_t num_entries; union_adt_funtype_10_hashentry_t * data;}; 
typedef struct union_adt_funtype_10_htbl_s * union_adt_funtype_10_htbl_t;

struct union_adt_funtype_10_s {uint32_t count;
        union_adt_funtype_10_ftbl_t ftbl;
        union_adt_funtype_10_htbl_t htbl;};
typedef struct union_adt_funtype_10_s * union_adt_funtype_10_t;

extern void release_union_adt_funtype_10(union_adt_funtype_10_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_funtype_10_t copy_union_adt_funtype_10(union_adt_funtype_10_t x);

extern bool_t equal_union_adt_funtype_10(union_adt_funtype_10_t x, union_adt_funtype_10_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern char* json_union_adt_funtype_10(union_adt_funtype_10_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);


//reduce_nat

struct union_adt_funtype_11_s;
        typedef struct union_adt_funtype_11_s * union_adt_funtype_11_t;

struct union_adt_funtype_11_ftbl_s {mpz_ptr_t (* fptr)(struct union_adt_funtype_11_s *, union_adt__T2_t);
        mpz_ptr_t (* mptr)(struct union_adt_funtype_11_s *, union_adt__T2_t);
        void (* rptr)(struct union_adt_funtype_11_s *);
        struct union_adt_funtype_11_s * (* cptr)(struct union_adt_funtype_11_s *);};
typedef struct union_adt_funtype_11_ftbl_s * union_adt_funtype_11_ftbl_t;

struct union_adt_funtype_11_hashentry_s {uint32_t keyhash; union_adt__T2_t key; mpz_t value;}; 
typedef struct union_adt_funtype_11_hashentry_s union_adt_funtype_11_hashentry_t;

struct union_adt_funtype_11_htbl_s {uint32_t size; uint32_t num_entries; union_adt_funtype_11_hashentry_t * data;}; 
typedef struct union_adt_funtype_11_htbl_s * union_adt_funtype_11_htbl_t;

struct union_adt_funtype_11_s {uint32_t count;
        union_adt_funtype_11_ftbl_t ftbl;
        union_adt_funtype_11_htbl_t htbl;};
typedef struct union_adt_funtype_11_s * union_adt_funtype_11_t;

extern void release_union_adt_funtype_11(union_adt_funtype_11_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_funtype_11_t copy_union_adt_funtype_11(union_adt_funtype_11_t x);

extern bool_t equal_union_adt_funtype_11(union_adt_funtype_11_t x, union_adt_funtype_11_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern char* json_union_adt_funtype_11(union_adt_funtype_11_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);




struct union_adt_closure_12_s;
        typedef struct union_adt_closure_12_s * union_adt_closure_12_t;

struct union_adt_closure_12_s {uint32_t count;
         union_adt_funtype_9_ftbl_t ftbl;
         union_adt_funtype_9_htbl_t htbl;
        type_actual_t fvar_1;
        type_actual_t fvar_2;
        union_adt_funtype_10_t fvar_3;
        union_adt_funtype_11_t fvar_4; type_actual_t union_adt__T1; type_actual_t union_adt__T2;};

mpz_ptr_t f_union_adt_closure_12(struct union_adt_closure_12_s * closure, union_adt__union_adt_t bvar);

mpz_ptr_t m_union_adt_closure_12(struct union_adt_closure_12_s * closure, union_adt__union_adt_t bvar);

extern mpz_ptr_t h_union_adt_closure_12(union_adt__union_adt_t ivar_6, type_actual_t union_adt__T2, type_actual_t union_adt__T1, union_adt_funtype_10_t ivar_1, union_adt_funtype_11_t ivar_3);

union_adt_closure_12_t new_union_adt_closure_12(void);

void release_union_adt_closure_12(union_adt_funtype_9_t closure, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

union_adt_closure_12_t copy_union_adt_closure_12(union_adt_closure_12_t x);


//REDUCE_nat

struct union_adt_record_13_s {
        uint32_t count; 
        union_adt__T1_t project_1;
        union_adt__union_adt_t project_2;};
typedef struct union_adt_record_13_s * union_adt_record_13_t;

extern union_adt_record_13_t new_union_adt_record_13(void);

extern void release_union_adt_record_13(union_adt_record_13_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_record_13_t copy_union_adt_record_13(union_adt_record_13_t x);

extern bool_t equal_union_adt_record_13(union_adt_record_13_t x, union_adt_record_13_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);
extern char * json_union_adt_record_13(union_adt_record_13_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

typedef struct actual_union_adt_record_13_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t union_adt__T1; type_actual_t union_adt__T2;} * actual_union_adt_record_13_t;
extern void release_union_adt_record_13_ptr(pointer_t x, type_actual_t union_adt_record_13);

extern bool_t equal_union_adt_record_13_ptr(pointer_t x, pointer_t y, actual_union_adt_record_13_t T);

extern char * json_union_adt_record_13_ptr(pointer_t x,  actual_union_adt_record_13_t T);

actual_union_adt_record_13_t actual_union_adt_record_13(type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_record_13_t update_union_adt_record_13_project_1(union_adt_record_13_t x, union_adt__T1_t v, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_record_13_t update_union_adt_record_13_project_2(union_adt_record_13_t x, union_adt__union_adt_t v, type_actual_t union_adt__T1, type_actual_t union_adt__T2);


//REDUCE_nat

struct union_adt_funtype_14_s;
        typedef struct union_adt_funtype_14_s * union_adt_funtype_14_t;

struct union_adt_funtype_14_ftbl_s {mpz_ptr_t (* fptr)(struct union_adt_funtype_14_s *, union_adt_record_13_t);
        mpz_ptr_t (* mptr)(struct union_adt_funtype_14_s *, union_adt__T1_t, union_adt__union_adt_t);
        void (* rptr)(struct union_adt_funtype_14_s *);
        struct union_adt_funtype_14_s * (* cptr)(struct union_adt_funtype_14_s *);};
typedef struct union_adt_funtype_14_ftbl_s * union_adt_funtype_14_ftbl_t;

struct union_adt_funtype_14_hashentry_s {uint32_t keyhash; union_adt_record_13_t key; mpz_t value;}; 
typedef struct union_adt_funtype_14_hashentry_s union_adt_funtype_14_hashentry_t;

struct union_adt_funtype_14_htbl_s {uint32_t size; uint32_t num_entries; union_adt_funtype_14_hashentry_t * data;}; 
typedef struct union_adt_funtype_14_htbl_s * union_adt_funtype_14_htbl_t;

struct union_adt_funtype_14_s {uint32_t count;
        union_adt_funtype_14_ftbl_t ftbl;
        union_adt_funtype_14_htbl_t htbl;};
typedef struct union_adt_funtype_14_s * union_adt_funtype_14_t;

extern void release_union_adt_funtype_14(union_adt_funtype_14_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_funtype_14_t copy_union_adt_funtype_14(union_adt_funtype_14_t x);

extern bool_t equal_union_adt_funtype_14(union_adt_funtype_14_t x, union_adt_funtype_14_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern char* json_union_adt_funtype_14(union_adt_funtype_14_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);


//REDUCE_nat

struct union_adt_record_15_s {
        uint32_t count; 
        union_adt__T2_t project_1;
        union_adt__union_adt_t project_2;};
typedef struct union_adt_record_15_s * union_adt_record_15_t;

extern union_adt_record_15_t new_union_adt_record_15(void);

extern void release_union_adt_record_15(union_adt_record_15_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_record_15_t copy_union_adt_record_15(union_adt_record_15_t x);

extern bool_t equal_union_adt_record_15(union_adt_record_15_t x, union_adt_record_15_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);
extern char * json_union_adt_record_15(union_adt_record_15_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

typedef struct actual_union_adt_record_15_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t union_adt__T1; type_actual_t union_adt__T2;} * actual_union_adt_record_15_t;
extern void release_union_adt_record_15_ptr(pointer_t x, type_actual_t union_adt_record_15);

extern bool_t equal_union_adt_record_15_ptr(pointer_t x, pointer_t y, actual_union_adt_record_15_t T);

extern char * json_union_adt_record_15_ptr(pointer_t x,  actual_union_adt_record_15_t T);

actual_union_adt_record_15_t actual_union_adt_record_15(type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_record_15_t update_union_adt_record_15_project_1(union_adt_record_15_t x, union_adt__T2_t v, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_record_15_t update_union_adt_record_15_project_2(union_adt_record_15_t x, union_adt__union_adt_t v, type_actual_t union_adt__T1, type_actual_t union_adt__T2);


//REDUCE_nat

struct union_adt_funtype_16_s;
        typedef struct union_adt_funtype_16_s * union_adt_funtype_16_t;

struct union_adt_funtype_16_ftbl_s {mpz_ptr_t (* fptr)(struct union_adt_funtype_16_s *, union_adt_record_15_t);
        mpz_ptr_t (* mptr)(struct union_adt_funtype_16_s *, union_adt__T2_t, union_adt__union_adt_t);
        void (* rptr)(struct union_adt_funtype_16_s *);
        struct union_adt_funtype_16_s * (* cptr)(struct union_adt_funtype_16_s *);};
typedef struct union_adt_funtype_16_ftbl_s * union_adt_funtype_16_ftbl_t;

struct union_adt_funtype_16_hashentry_s {uint32_t keyhash; union_adt_record_15_t key; mpz_t value;}; 
typedef struct union_adt_funtype_16_hashentry_s union_adt_funtype_16_hashentry_t;

struct union_adt_funtype_16_htbl_s {uint32_t size; uint32_t num_entries; union_adt_funtype_16_hashentry_t * data;}; 
typedef struct union_adt_funtype_16_htbl_s * union_adt_funtype_16_htbl_t;

struct union_adt_funtype_16_s {uint32_t count;
        union_adt_funtype_16_ftbl_t ftbl;
        union_adt_funtype_16_htbl_t htbl;};
typedef struct union_adt_funtype_16_s * union_adt_funtype_16_t;

extern void release_union_adt_funtype_16(union_adt_funtype_16_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_funtype_16_t copy_union_adt_funtype_16(union_adt_funtype_16_t x);

extern bool_t equal_union_adt_funtype_16(union_adt_funtype_16_t x, union_adt_funtype_16_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern char* json_union_adt_funtype_16(union_adt_funtype_16_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);




struct union_adt_closure_17_s;
        typedef struct union_adt_closure_17_s * union_adt_closure_17_t;

struct union_adt_closure_17_s {uint32_t count;
         union_adt_funtype_9_ftbl_t ftbl;
         union_adt_funtype_9_htbl_t htbl;
        type_actual_t fvar_1;
        type_actual_t fvar_2;
        union_adt_funtype_14_t fvar_3;
        union_adt_funtype_16_t fvar_4; type_actual_t union_adt__T1; type_actual_t union_adt__T2;};

mpz_ptr_t f_union_adt_closure_17(struct union_adt_closure_17_s * closure, union_adt__union_adt_t bvar);

mpz_ptr_t m_union_adt_closure_17(struct union_adt_closure_17_s * closure, union_adt__union_adt_t bvar);

extern mpz_ptr_t h_union_adt_closure_17(union_adt__union_adt_t ivar_6, type_actual_t union_adt__T2, type_actual_t union_adt__T1, union_adt_funtype_14_t ivar_1, union_adt_funtype_16_t ivar_3);

union_adt_closure_17_t new_union_adt_closure_17(void);

void release_union_adt_closure_17(union_adt_funtype_9_t closure, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

union_adt_closure_17_t copy_union_adt_closure_17(union_adt_closure_17_t x);


//reduce_ordinal

struct union_adt_funtype_18_s;
        typedef struct union_adt_funtype_18_s * union_adt_funtype_18_t;

struct union_adt_funtype_18_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct union_adt_funtype_18_s *, union_adt__union_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct union_adt_funtype_18_s *, union_adt__union_adt_t);
        void (* rptr)(struct union_adt_funtype_18_s *);
        struct union_adt_funtype_18_s * (* cptr)(struct union_adt_funtype_18_s *);};
typedef struct union_adt_funtype_18_ftbl_s * union_adt_funtype_18_ftbl_t;

struct union_adt_funtype_18_hashentry_s {uint32_t keyhash; union_adt__union_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct union_adt_funtype_18_hashentry_s union_adt_funtype_18_hashentry_t;

struct union_adt_funtype_18_htbl_s {uint32_t size; uint32_t num_entries; union_adt_funtype_18_hashentry_t * data;}; 
typedef struct union_adt_funtype_18_htbl_s * union_adt_funtype_18_htbl_t;

struct union_adt_funtype_18_s {uint32_t count;
        union_adt_funtype_18_ftbl_t ftbl;
        union_adt_funtype_18_htbl_t htbl;};
typedef struct union_adt_funtype_18_s * union_adt_funtype_18_t;

extern void release_union_adt_funtype_18(union_adt_funtype_18_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_funtype_18_t copy_union_adt_funtype_18(union_adt_funtype_18_t x);

extern bool_t equal_union_adt_funtype_18(union_adt_funtype_18_t x, union_adt_funtype_18_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern char* json_union_adt_funtype_18(union_adt_funtype_18_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);


//reduce_ordinal

struct union_adt_funtype_19_s;
        typedef struct union_adt_funtype_19_s * union_adt_funtype_19_t;

struct union_adt_funtype_19_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct union_adt_funtype_19_s *, union_adt__T1_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct union_adt_funtype_19_s *, union_adt__T1_t);
        void (* rptr)(struct union_adt_funtype_19_s *);
        struct union_adt_funtype_19_s * (* cptr)(struct union_adt_funtype_19_s *);};
typedef struct union_adt_funtype_19_ftbl_s * union_adt_funtype_19_ftbl_t;

struct union_adt_funtype_19_hashentry_s {uint32_t keyhash; union_adt__T1_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct union_adt_funtype_19_hashentry_s union_adt_funtype_19_hashentry_t;

struct union_adt_funtype_19_htbl_s {uint32_t size; uint32_t num_entries; union_adt_funtype_19_hashentry_t * data;}; 
typedef struct union_adt_funtype_19_htbl_s * union_adt_funtype_19_htbl_t;

struct union_adt_funtype_19_s {uint32_t count;
        union_adt_funtype_19_ftbl_t ftbl;
        union_adt_funtype_19_htbl_t htbl;};
typedef struct union_adt_funtype_19_s * union_adt_funtype_19_t;

extern void release_union_adt_funtype_19(union_adt_funtype_19_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_funtype_19_t copy_union_adt_funtype_19(union_adt_funtype_19_t x);

extern bool_t equal_union_adt_funtype_19(union_adt_funtype_19_t x, union_adt_funtype_19_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern char* json_union_adt_funtype_19(union_adt_funtype_19_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);


//reduce_ordinal

struct union_adt_funtype_20_s;
        typedef struct union_adt_funtype_20_s * union_adt_funtype_20_t;

struct union_adt_funtype_20_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct union_adt_funtype_20_s *, union_adt__T2_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct union_adt_funtype_20_s *, union_adt__T2_t);
        void (* rptr)(struct union_adt_funtype_20_s *);
        struct union_adt_funtype_20_s * (* cptr)(struct union_adt_funtype_20_s *);};
typedef struct union_adt_funtype_20_ftbl_s * union_adt_funtype_20_ftbl_t;

struct union_adt_funtype_20_hashentry_s {uint32_t keyhash; union_adt__T2_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct union_adt_funtype_20_hashentry_s union_adt_funtype_20_hashentry_t;

struct union_adt_funtype_20_htbl_s {uint32_t size; uint32_t num_entries; union_adt_funtype_20_hashentry_t * data;}; 
typedef struct union_adt_funtype_20_htbl_s * union_adt_funtype_20_htbl_t;

struct union_adt_funtype_20_s {uint32_t count;
        union_adt_funtype_20_ftbl_t ftbl;
        union_adt_funtype_20_htbl_t htbl;};
typedef struct union_adt_funtype_20_s * union_adt_funtype_20_t;

extern void release_union_adt_funtype_20(union_adt_funtype_20_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_funtype_20_t copy_union_adt_funtype_20(union_adt_funtype_20_t x);

extern bool_t equal_union_adt_funtype_20(union_adt_funtype_20_t x, union_adt_funtype_20_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern char* json_union_adt_funtype_20(union_adt_funtype_20_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);




struct union_adt_closure_21_s;
        typedef struct union_adt_closure_21_s * union_adt_closure_21_t;

struct union_adt_closure_21_s {uint32_t count;
         union_adt_funtype_18_ftbl_t ftbl;
         union_adt_funtype_18_htbl_t htbl;
        type_actual_t fvar_1;
        type_actual_t fvar_2;
        union_adt_funtype_19_t fvar_3;
        union_adt_funtype_20_t fvar_4; type_actual_t union_adt__T1; type_actual_t union_adt__T2;};

ordstruct_adt__ordstruct_adt_t f_union_adt_closure_21(struct union_adt_closure_21_s * closure, union_adt__union_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_union_adt_closure_21(struct union_adt_closure_21_s * closure, union_adt__union_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_union_adt_closure_21(union_adt__union_adt_t ivar_6, type_actual_t union_adt__T2, type_actual_t union_adt__T1, union_adt_funtype_19_t ivar_1, union_adt_funtype_20_t ivar_3);

union_adt_closure_21_t new_union_adt_closure_21(void);

void release_union_adt_closure_21(union_adt_funtype_18_t closure, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

union_adt_closure_21_t copy_union_adt_closure_21(union_adt_closure_21_t x);


//REDUCE_ordinal

struct union_adt_funtype_22_s;
        typedef struct union_adt_funtype_22_s * union_adt_funtype_22_t;

struct union_adt_funtype_22_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct union_adt_funtype_22_s *, union_adt_record_13_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct union_adt_funtype_22_s *, union_adt__T1_t, union_adt__union_adt_t);
        void (* rptr)(struct union_adt_funtype_22_s *);
        struct union_adt_funtype_22_s * (* cptr)(struct union_adt_funtype_22_s *);};
typedef struct union_adt_funtype_22_ftbl_s * union_adt_funtype_22_ftbl_t;

struct union_adt_funtype_22_hashentry_s {uint32_t keyhash; union_adt_record_13_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct union_adt_funtype_22_hashentry_s union_adt_funtype_22_hashentry_t;

struct union_adt_funtype_22_htbl_s {uint32_t size; uint32_t num_entries; union_adt_funtype_22_hashentry_t * data;}; 
typedef struct union_adt_funtype_22_htbl_s * union_adt_funtype_22_htbl_t;

struct union_adt_funtype_22_s {uint32_t count;
        union_adt_funtype_22_ftbl_t ftbl;
        union_adt_funtype_22_htbl_t htbl;};
typedef struct union_adt_funtype_22_s * union_adt_funtype_22_t;

extern void release_union_adt_funtype_22(union_adt_funtype_22_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_funtype_22_t copy_union_adt_funtype_22(union_adt_funtype_22_t x);

extern bool_t equal_union_adt_funtype_22(union_adt_funtype_22_t x, union_adt_funtype_22_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern char* json_union_adt_funtype_22(union_adt_funtype_22_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);


//REDUCE_ordinal

struct union_adt_funtype_23_s;
        typedef struct union_adt_funtype_23_s * union_adt_funtype_23_t;

struct union_adt_funtype_23_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct union_adt_funtype_23_s *, union_adt_record_15_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct union_adt_funtype_23_s *, union_adt__T2_t, union_adt__union_adt_t);
        void (* rptr)(struct union_adt_funtype_23_s *);
        struct union_adt_funtype_23_s * (* cptr)(struct union_adt_funtype_23_s *);};
typedef struct union_adt_funtype_23_ftbl_s * union_adt_funtype_23_ftbl_t;

struct union_adt_funtype_23_hashentry_s {uint32_t keyhash; union_adt_record_15_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct union_adt_funtype_23_hashentry_s union_adt_funtype_23_hashentry_t;

struct union_adt_funtype_23_htbl_s {uint32_t size; uint32_t num_entries; union_adt_funtype_23_hashentry_t * data;}; 
typedef struct union_adt_funtype_23_htbl_s * union_adt_funtype_23_htbl_t;

struct union_adt_funtype_23_s {uint32_t count;
        union_adt_funtype_23_ftbl_t ftbl;
        union_adt_funtype_23_htbl_t htbl;};
typedef struct union_adt_funtype_23_s * union_adt_funtype_23_t;

extern void release_union_adt_funtype_23(union_adt_funtype_23_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern union_adt_funtype_23_t copy_union_adt_funtype_23(union_adt_funtype_23_t x);

extern bool_t equal_union_adt_funtype_23(union_adt_funtype_23_t x, union_adt_funtype_23_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern char* json_union_adt_funtype_23(union_adt_funtype_23_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2);




struct union_adt_closure_24_s;
        typedef struct union_adt_closure_24_s * union_adt_closure_24_t;

struct union_adt_closure_24_s {uint32_t count;
         union_adt_funtype_18_ftbl_t ftbl;
         union_adt_funtype_18_htbl_t htbl;
        type_actual_t fvar_1;
        type_actual_t fvar_2;
        union_adt_funtype_22_t fvar_3;
        union_adt_funtype_23_t fvar_4; type_actual_t union_adt__T1; type_actual_t union_adt__T2;};

ordstruct_adt__ordstruct_adt_t f_union_adt_closure_24(struct union_adt_closure_24_s * closure, union_adt__union_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_union_adt_closure_24(struct union_adt_closure_24_s * closure, union_adt__union_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_union_adt_closure_24(union_adt__union_adt_t ivar_6, type_actual_t union_adt__T2, type_actual_t union_adt__T1, union_adt_funtype_22_t ivar_1, union_adt_funtype_23_t ivar_3);

union_adt_closure_24_t new_union_adt_closure_24(void);

void release_union_adt_closure_24(union_adt_funtype_18_t closure, type_actual_t union_adt__T1, type_actual_t union_adt__T2);

union_adt_closure_24_t copy_union_adt_closure_24(union_adt_closure_24_t x);



extern bool_t r_union_adt__inlp(union_adt__union_adt_t ivar_1);

extern bool_t r_union_adt__inrp(union_adt__union_adt_t ivar_1);

extern union_adt__inl_t update_union_adt__union_adt_left(union_adt__union_adt_t ivar_1, union_adt__T1_t ivar_3);

extern union_adt__T1_t union_adt__union_adt_left(union_adt__union_adt_t ivar_1);

extern union_adt__inr_t update_union_adt__union_adt_right(union_adt__union_adt_t ivar_1, union_adt__T2_t ivar_3);

extern union_adt__T2_t union_adt__union_adt_right(union_adt__union_adt_t ivar_1);

extern union_adt__union_adt_t union_adt__inl(union_adt__T1_t ivar_2);

extern union_adt__union_adt_t union_adt__inr(union_adt__T2_t ivar_2);

extern union_adt_funtype_3_t union_adt__union_ord(type_actual_t union_adt__T1, type_actual_t union_adt__T2);

extern uint8_t union_adt__ord(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt__union_adt_t ivar_1);

extern union_adt_funtype_4_t union_adt__every__1(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt_funtype_5_t ivar_1, union_adt_funtype_6_t ivar_3);

extern bool_t union_adt__every__2(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt_funtype_5_t ivar_1, union_adt_funtype_6_t ivar_3, union_adt__union_adt_t ivar_5);

extern union_adt_funtype_4_t union_adt__some__1(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt_funtype_5_t ivar_1, union_adt_funtype_6_t ivar_3);

extern bool_t union_adt__some__2(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt_funtype_5_t ivar_1, union_adt_funtype_6_t ivar_3, union_adt__union_adt_t ivar_5);

extern bool_t union_adt__subterm(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt__union_adt_t ivar_1, union_adt__union_adt_t ivar_2);

extern bool_t union_adt__doublelessp(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt__union_adt_t ivar_1, union_adt__union_adt_t ivar_2);

extern union_adt_funtype_9_t union_adt__reduce_nat(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt_funtype_10_t ivar_1, union_adt_funtype_11_t ivar_3);

extern union_adt_funtype_9_t union_adt__REDUCE_nat(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt_funtype_14_t ivar_1, union_adt_funtype_16_t ivar_3);

extern union_adt_funtype_18_t union_adt__reduce_ordinal(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt_funtype_19_t ivar_1, union_adt_funtype_20_t ivar_3);

extern union_adt_funtype_18_t union_adt__REDUCE_ordinal(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt_funtype_22_t ivar_1, union_adt_funtype_23_t ivar_3);
#endif