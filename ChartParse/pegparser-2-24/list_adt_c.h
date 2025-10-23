//Code generated using pvs2ir
#ifndef _list_adt_h 
#define _list_adt_h

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

//cc -O3 -Wall -o list_adt -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib -lgmp 

typedef pointer_t list_adt__T_t;
//list

struct list_adt__list_adt_s {
         uint32_t count; 
        uint8_t list_adt__list_adt_index;};
typedef struct list_adt__list_adt_s * list_adt__list_adt_t;

extern list_adt__list_adt_t new_list_adt__list_adt(void);

extern void release_list_adt__list_adt(list_adt__list_adt_t x, type_actual_t list_adt__T);

extern list_adt__list_adt_t copy_list_adt__list_adt(list_adt__list_adt_t x);

extern bool_t equal_list_adt__list_adt(list_adt__list_adt_t x, list_adt__list_adt_t y, type_actual_t list_adt__T);
extern char * json_list_adt__list_adt(list_adt__list_adt_t x, type_actual_t list_adt__T);

typedef struct actual_list_adt__list_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t list_adt__T;} * actual_list_adt__list_adt_t;
extern void release_list_adt__list_adt_ptr(pointer_t x, type_actual_t list_adt__list_adt);

extern bool_t equal_list_adt__list_adt_ptr(pointer_t x, pointer_t y, actual_list_adt__list_adt_t T);

extern char * json_list_adt__list_adt_ptr(pointer_t x,  actual_list_adt__list_adt_t T);

actual_list_adt__list_adt_t actual_list_adt__list_adt(type_actual_t list_adt__T);

extern list_adt__list_adt_t update_list_adt__list_adt_list_adt__list_adt_index(list_adt__list_adt_t x, uint8_t v);


//cons

struct list_adt__cons_s {
        uint32_t count; 
        uint8_t list_adt__list_adt_index;
        list_adt__T_t car;
        list_adt__list_adt_t cdr;};
typedef struct list_adt__cons_s * list_adt__cons_t;

extern list_adt__cons_t new_list_adt__cons(void);

extern void release_list_adt__cons(list_adt__cons_t x, type_actual_t list_adt__T);

extern list_adt__cons_t copy_list_adt__cons(list_adt__cons_t x);

extern bool_t equal_list_adt__cons(list_adt__cons_t x, list_adt__cons_t y, type_actual_t list_adt__T);
extern char * json_list_adt__cons(list_adt__cons_t x, type_actual_t list_adt__T);

typedef struct actual_list_adt__cons_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t list_adt__T;} * actual_list_adt__cons_t;
extern void release_list_adt__cons_ptr(pointer_t x, type_actual_t list_adt__cons);

extern bool_t equal_list_adt__cons_ptr(pointer_t x, pointer_t y, actual_list_adt__cons_t T);

extern char * json_list_adt__cons_ptr(pointer_t x,  actual_list_adt__cons_t T);

actual_list_adt__cons_t actual_list_adt__cons(type_actual_t list_adt__T);

extern list_adt__cons_t update_list_adt__cons_list_adt__list_adt_index(list_adt__cons_t x, uint8_t v);

extern list_adt__cons_t update_list_adt__cons_car(list_adt__cons_t x, list_adt__T_t v, type_actual_t list_adt__T);

extern list_adt__cons_t update_list_adt__cons_cdr(list_adt__cons_t x, list_adt__list_adt_t v, type_actual_t list_adt__T);


//list_ord

struct list_adt_funtype_2_s;
        typedef struct list_adt_funtype_2_s * list_adt_funtype_2_t;

struct list_adt_funtype_2_ftbl_s {uint8_t (* fptr)(struct list_adt_funtype_2_s *, list_adt__list_adt_t);
        uint8_t (* mptr)(struct list_adt_funtype_2_s *, list_adt__list_adt_t);
        void (* rptr)(struct list_adt_funtype_2_s *);
        struct list_adt_funtype_2_s * (* cptr)(struct list_adt_funtype_2_s *);};
typedef struct list_adt_funtype_2_ftbl_s * list_adt_funtype_2_ftbl_t;

struct list_adt_funtype_2_hashentry_s {uint32_t keyhash; list_adt__list_adt_t key; uint8_t value;}; 
typedef struct list_adt_funtype_2_hashentry_s list_adt_funtype_2_hashentry_t;

struct list_adt_funtype_2_htbl_s {uint32_t size; uint32_t num_entries; list_adt_funtype_2_hashentry_t * data;}; 
typedef struct list_adt_funtype_2_htbl_s * list_adt_funtype_2_htbl_t;

struct list_adt_funtype_2_s {uint32_t count;
        list_adt_funtype_2_ftbl_t ftbl;
        list_adt_funtype_2_htbl_t htbl;};
typedef struct list_adt_funtype_2_s * list_adt_funtype_2_t;

extern void release_list_adt_funtype_2(list_adt_funtype_2_t x, type_actual_t list_adt__T);

extern list_adt_funtype_2_t copy_list_adt_funtype_2(list_adt_funtype_2_t x);

extern bool_t equal_list_adt_funtype_2(list_adt_funtype_2_t x, list_adt_funtype_2_t y, type_actual_t list_adt__T);

extern char* json_list_adt_funtype_2(list_adt_funtype_2_t x, type_actual_t list_adt__T);


//every

struct list_adt_funtype_3_s;
        typedef struct list_adt_funtype_3_s * list_adt_funtype_3_t;

struct list_adt_funtype_3_ftbl_s {bool_t (* fptr)(struct list_adt_funtype_3_s *, list_adt__list_adt_t);
        bool_t (* mptr)(struct list_adt_funtype_3_s *, list_adt__list_adt_t);
        void (* rptr)(struct list_adt_funtype_3_s *);
        struct list_adt_funtype_3_s * (* cptr)(struct list_adt_funtype_3_s *);};
typedef struct list_adt_funtype_3_ftbl_s * list_adt_funtype_3_ftbl_t;

struct list_adt_funtype_3_hashentry_s {uint32_t keyhash; list_adt__list_adt_t key; bool_t value;}; 
typedef struct list_adt_funtype_3_hashentry_s list_adt_funtype_3_hashentry_t;

struct list_adt_funtype_3_htbl_s {uint32_t size; uint32_t num_entries; list_adt_funtype_3_hashentry_t * data;}; 
typedef struct list_adt_funtype_3_htbl_s * list_adt_funtype_3_htbl_t;

struct list_adt_funtype_3_s {uint32_t count;
        list_adt_funtype_3_ftbl_t ftbl;
        list_adt_funtype_3_htbl_t htbl;};
typedef struct list_adt_funtype_3_s * list_adt_funtype_3_t;

extern void release_list_adt_funtype_3(list_adt_funtype_3_t x, type_actual_t list_adt__T);

extern list_adt_funtype_3_t copy_list_adt_funtype_3(list_adt_funtype_3_t x);

extern bool_t equal_list_adt_funtype_3(list_adt_funtype_3_t x, list_adt_funtype_3_t y, type_actual_t list_adt__T);

extern char* json_list_adt_funtype_3(list_adt_funtype_3_t x, type_actual_t list_adt__T);


//every

struct list_adt_funtype_4_s;
        typedef struct list_adt_funtype_4_s * list_adt_funtype_4_t;

struct list_adt_funtype_4_ftbl_s {bool_t (* fptr)(struct list_adt_funtype_4_s *, list_adt__T_t);
        bool_t (* mptr)(struct list_adt_funtype_4_s *, list_adt__T_t);
        void (* rptr)(struct list_adt_funtype_4_s *);
        struct list_adt_funtype_4_s * (* cptr)(struct list_adt_funtype_4_s *);};
typedef struct list_adt_funtype_4_ftbl_s * list_adt_funtype_4_ftbl_t;

struct list_adt_funtype_4_hashentry_s {uint32_t keyhash; list_adt__T_t key; bool_t value;}; 
typedef struct list_adt_funtype_4_hashentry_s list_adt_funtype_4_hashentry_t;

struct list_adt_funtype_4_htbl_s {uint32_t size; uint32_t num_entries; list_adt_funtype_4_hashentry_t * data;}; 
typedef struct list_adt_funtype_4_htbl_s * list_adt_funtype_4_htbl_t;

struct list_adt_funtype_4_s {uint32_t count;
        list_adt_funtype_4_ftbl_t ftbl;
        list_adt_funtype_4_htbl_t htbl;};
typedef struct list_adt_funtype_4_s * list_adt_funtype_4_t;

extern void release_list_adt_funtype_4(list_adt_funtype_4_t x, type_actual_t list_adt__T);

extern list_adt_funtype_4_t copy_list_adt_funtype_4(list_adt_funtype_4_t x);

extern bool_t equal_list_adt_funtype_4(list_adt_funtype_4_t x, list_adt_funtype_4_t y, type_actual_t list_adt__T);

extern char* json_list_adt_funtype_4(list_adt_funtype_4_t x, type_actual_t list_adt__T);




struct list_adt_closure_5_s;
        typedef struct list_adt_closure_5_s * list_adt_closure_5_t;

struct list_adt_closure_5_s {uint32_t count;
         list_adt_funtype_3_ftbl_t ftbl;
         list_adt_funtype_3_htbl_t htbl;
        list_adt_funtype_4_t fvar_1;
        type_actual_t fvar_2; type_actual_t list_adt__T;};

bool_t f_list_adt_closure_5(struct list_adt_closure_5_s * closure, list_adt__list_adt_t bvar);

bool_t m_list_adt_closure_5(struct list_adt_closure_5_s * closure, list_adt__list_adt_t bvar);

extern bool_t h_list_adt_closure_5(list_adt__list_adt_t ivar_4, list_adt_funtype_4_t ivar_1, type_actual_t list_adt__T);

list_adt_closure_5_t new_list_adt_closure_5(void);

void release_list_adt_closure_5(list_adt_funtype_3_t closure, type_actual_t list_adt__T);

list_adt_closure_5_t copy_list_adt_closure_5(list_adt_closure_5_t x);




struct list_adt_closure_6_s;
        typedef struct list_adt_closure_6_s * list_adt_closure_6_t;

struct list_adt_closure_6_s {uint32_t count;
         list_adt_funtype_3_ftbl_t ftbl;
         list_adt_funtype_3_htbl_t htbl;
        list_adt_funtype_4_t fvar_1;
        type_actual_t fvar_2; type_actual_t list_adt__T;};

bool_t f_list_adt_closure_6(struct list_adt_closure_6_s * closure, list_adt__list_adt_t bvar);

bool_t m_list_adt_closure_6(struct list_adt_closure_6_s * closure, list_adt__list_adt_t bvar);

extern bool_t h_list_adt_closure_6(list_adt__list_adt_t ivar_4, list_adt_funtype_4_t ivar_1, type_actual_t list_adt__T);

list_adt_closure_6_t new_list_adt_closure_6(void);

void release_list_adt_closure_6(list_adt_funtype_3_t closure, type_actual_t list_adt__T);

list_adt_closure_6_t copy_list_adt_closure_6(list_adt_closure_6_t x);


//reduce_nat

struct list_adt_funtype_7_s;
        typedef struct list_adt_funtype_7_s * list_adt_funtype_7_t;

struct list_adt_funtype_7_ftbl_s {mpz_ptr_t (* fptr)(struct list_adt_funtype_7_s *, list_adt__list_adt_t);
        mpz_ptr_t (* mptr)(struct list_adt_funtype_7_s *, list_adt__list_adt_t);
        void (* rptr)(struct list_adt_funtype_7_s *);
        struct list_adt_funtype_7_s * (* cptr)(struct list_adt_funtype_7_s *);};
typedef struct list_adt_funtype_7_ftbl_s * list_adt_funtype_7_ftbl_t;

struct list_adt_funtype_7_hashentry_s {uint32_t keyhash; list_adt__list_adt_t key; mpz_t value;}; 
typedef struct list_adt_funtype_7_hashentry_s list_adt_funtype_7_hashentry_t;

struct list_adt_funtype_7_htbl_s {uint32_t size; uint32_t num_entries; list_adt_funtype_7_hashentry_t * data;}; 
typedef struct list_adt_funtype_7_htbl_s * list_adt_funtype_7_htbl_t;

struct list_adt_funtype_7_s {uint32_t count;
        list_adt_funtype_7_ftbl_t ftbl;
        list_adt_funtype_7_htbl_t htbl;};
typedef struct list_adt_funtype_7_s * list_adt_funtype_7_t;

extern void release_list_adt_funtype_7(list_adt_funtype_7_t x, type_actual_t list_adt__T);

extern list_adt_funtype_7_t copy_list_adt_funtype_7(list_adt_funtype_7_t x);

extern bool_t equal_list_adt_funtype_7(list_adt_funtype_7_t x, list_adt_funtype_7_t y, type_actual_t list_adt__T);

extern char* json_list_adt_funtype_7(list_adt_funtype_7_t x, type_actual_t list_adt__T);


//reduce_nat

struct list_adt_record_8_s {
        uint32_t count; 
        list_adt__T_t project_1;
        mpz_t project_2;};
typedef struct list_adt_record_8_s * list_adt_record_8_t;

extern list_adt_record_8_t new_list_adt_record_8(void);

extern void release_list_adt_record_8(list_adt_record_8_t x, type_actual_t list_adt__T);

extern list_adt_record_8_t copy_list_adt_record_8(list_adt_record_8_t x);

extern bool_t equal_list_adt_record_8(list_adt_record_8_t x, list_adt_record_8_t y, type_actual_t list_adt__T);
extern char * json_list_adt_record_8(list_adt_record_8_t x, type_actual_t list_adt__T);

typedef struct actual_list_adt_record_8_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t list_adt__T;} * actual_list_adt_record_8_t;
extern void release_list_adt_record_8_ptr(pointer_t x, type_actual_t list_adt_record_8);

extern bool_t equal_list_adt_record_8_ptr(pointer_t x, pointer_t y, actual_list_adt_record_8_t T);

extern char * json_list_adt_record_8_ptr(pointer_t x,  actual_list_adt_record_8_t T);

actual_list_adt_record_8_t actual_list_adt_record_8(type_actual_t list_adt__T);

extern list_adt_record_8_t update_list_adt_record_8_project_1(list_adt_record_8_t x, list_adt__T_t v, type_actual_t list_adt__T);

extern list_adt_record_8_t update_list_adt_record_8_project_2(list_adt_record_8_t x, mpz_ptr_t v);


//reduce_nat

struct list_adt_funtype_9_s;
        typedef struct list_adt_funtype_9_s * list_adt_funtype_9_t;

struct list_adt_funtype_9_ftbl_s {mpz_ptr_t (* fptr)(struct list_adt_funtype_9_s *, list_adt_record_8_t);
        mpz_ptr_t (* mptr)(struct list_adt_funtype_9_s *, list_adt__T_t, mpz_ptr_t);
        void (* rptr)(struct list_adt_funtype_9_s *);
        struct list_adt_funtype_9_s * (* cptr)(struct list_adt_funtype_9_s *);};
typedef struct list_adt_funtype_9_ftbl_s * list_adt_funtype_9_ftbl_t;

struct list_adt_funtype_9_hashentry_s {uint32_t keyhash; list_adt_record_8_t key; mpz_t value;}; 
typedef struct list_adt_funtype_9_hashentry_s list_adt_funtype_9_hashentry_t;

struct list_adt_funtype_9_htbl_s {uint32_t size; uint32_t num_entries; list_adt_funtype_9_hashentry_t * data;}; 
typedef struct list_adt_funtype_9_htbl_s * list_adt_funtype_9_htbl_t;

struct list_adt_funtype_9_s {uint32_t count;
        list_adt_funtype_9_ftbl_t ftbl;
        list_adt_funtype_9_htbl_t htbl;};
typedef struct list_adt_funtype_9_s * list_adt_funtype_9_t;

extern void release_list_adt_funtype_9(list_adt_funtype_9_t x, type_actual_t list_adt__T);

extern list_adt_funtype_9_t copy_list_adt_funtype_9(list_adt_funtype_9_t x);

extern bool_t equal_list_adt_funtype_9(list_adt_funtype_9_t x, list_adt_funtype_9_t y, type_actual_t list_adt__T);

extern char* json_list_adt_funtype_9(list_adt_funtype_9_t x, type_actual_t list_adt__T);




struct list_adt_closure_10_s;
        typedef struct list_adt_closure_10_s * list_adt_closure_10_t;

struct list_adt_closure_10_s {uint32_t count;
         list_adt_funtype_7_ftbl_t ftbl;
         list_adt_funtype_7_htbl_t htbl;
        type_actual_t fvar_1;
        list_adt_funtype_9_t fvar_2;
        mpz_t fvar_3; type_actual_t list_adt__T;};

mpz_ptr_t f_list_adt_closure_10(struct list_adt_closure_10_s * closure, list_adt__list_adt_t bvar);

mpz_ptr_t m_list_adt_closure_10(struct list_adt_closure_10_s * closure, list_adt__list_adt_t bvar);

extern mpz_ptr_t h_list_adt_closure_10(list_adt__list_adt_t ivar_5, type_actual_t list_adt__T, list_adt_funtype_9_t ivar_2, mpz_ptr_t ivar_1);

list_adt_closure_10_t new_list_adt_closure_10(void);

void release_list_adt_closure_10(list_adt_funtype_7_t closure, type_actual_t list_adt__T);

list_adt_closure_10_t copy_list_adt_closure_10(list_adt_closure_10_t x);


//REDUCE_nat

struct list_adt_record_11_s {
        uint32_t count; 
        list_adt__T_t project_1;
        mpz_t project_2;
        list_adt__list_adt_t project_3;};
typedef struct list_adt_record_11_s * list_adt_record_11_t;

extern list_adt_record_11_t new_list_adt_record_11(void);

extern void release_list_adt_record_11(list_adt_record_11_t x, type_actual_t list_adt__T);

extern list_adt_record_11_t copy_list_adt_record_11(list_adt_record_11_t x);

extern bool_t equal_list_adt_record_11(list_adt_record_11_t x, list_adt_record_11_t y, type_actual_t list_adt__T);
extern char * json_list_adt_record_11(list_adt_record_11_t x, type_actual_t list_adt__T);

typedef struct actual_list_adt_record_11_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t list_adt__T;} * actual_list_adt_record_11_t;
extern void release_list_adt_record_11_ptr(pointer_t x, type_actual_t list_adt_record_11);

extern bool_t equal_list_adt_record_11_ptr(pointer_t x, pointer_t y, actual_list_adt_record_11_t T);

extern char * json_list_adt_record_11_ptr(pointer_t x,  actual_list_adt_record_11_t T);

actual_list_adt_record_11_t actual_list_adt_record_11(type_actual_t list_adt__T);

extern list_adt_record_11_t update_list_adt_record_11_project_1(list_adt_record_11_t x, list_adt__T_t v, type_actual_t list_adt__T);

extern list_adt_record_11_t update_list_adt_record_11_project_2(list_adt_record_11_t x, mpz_ptr_t v);

extern list_adt_record_11_t update_list_adt_record_11_project_3(list_adt_record_11_t x, list_adt__list_adt_t v, type_actual_t list_adt__T);


//REDUCE_nat

struct list_adt_funtype_12_s;
        typedef struct list_adt_funtype_12_s * list_adt_funtype_12_t;

struct list_adt_funtype_12_ftbl_s {mpz_ptr_t (* fptr)(struct list_adt_funtype_12_s *, list_adt_record_11_t);
        mpz_ptr_t (* mptr)(struct list_adt_funtype_12_s *, list_adt__T_t, mpz_ptr_t, list_adt__list_adt_t);
        void (* rptr)(struct list_adt_funtype_12_s *);
        struct list_adt_funtype_12_s * (* cptr)(struct list_adt_funtype_12_s *);};
typedef struct list_adt_funtype_12_ftbl_s * list_adt_funtype_12_ftbl_t;

struct list_adt_funtype_12_hashentry_s {uint32_t keyhash; list_adt_record_11_t key; mpz_t value;}; 
typedef struct list_adt_funtype_12_hashentry_s list_adt_funtype_12_hashentry_t;

struct list_adt_funtype_12_htbl_s {uint32_t size; uint32_t num_entries; list_adt_funtype_12_hashentry_t * data;}; 
typedef struct list_adt_funtype_12_htbl_s * list_adt_funtype_12_htbl_t;

struct list_adt_funtype_12_s {uint32_t count;
        list_adt_funtype_12_ftbl_t ftbl;
        list_adt_funtype_12_htbl_t htbl;};
typedef struct list_adt_funtype_12_s * list_adt_funtype_12_t;

extern void release_list_adt_funtype_12(list_adt_funtype_12_t x, type_actual_t list_adt__T);

extern list_adt_funtype_12_t copy_list_adt_funtype_12(list_adt_funtype_12_t x);

extern bool_t equal_list_adt_funtype_12(list_adt_funtype_12_t x, list_adt_funtype_12_t y, type_actual_t list_adt__T);

extern char* json_list_adt_funtype_12(list_adt_funtype_12_t x, type_actual_t list_adt__T);




struct list_adt_closure_13_s;
        typedef struct list_adt_closure_13_s * list_adt_closure_13_t;

struct list_adt_closure_13_s {uint32_t count;
         list_adt_funtype_7_ftbl_t ftbl;
         list_adt_funtype_7_htbl_t htbl;
        type_actual_t fvar_1;
        list_adt_funtype_12_t fvar_2;
        list_adt_funtype_7_t fvar_3; type_actual_t list_adt__T;};

mpz_ptr_t f_list_adt_closure_13(struct list_adt_closure_13_s * closure, list_adt__list_adt_t bvar);

mpz_ptr_t m_list_adt_closure_13(struct list_adt_closure_13_s * closure, list_adt__list_adt_t bvar);

extern mpz_ptr_t h_list_adt_closure_13(list_adt__list_adt_t ivar_6, type_actual_t list_adt__T, list_adt_funtype_12_t ivar_3, list_adt_funtype_7_t ivar_1);

list_adt_closure_13_t new_list_adt_closure_13(void);

void release_list_adt_closure_13(list_adt_funtype_7_t closure, type_actual_t list_adt__T);

list_adt_closure_13_t copy_list_adt_closure_13(list_adt_closure_13_t x);


//reduce_ordinal

struct list_adt_funtype_14_s;
        typedef struct list_adt_funtype_14_s * list_adt_funtype_14_t;

struct list_adt_funtype_14_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct list_adt_funtype_14_s *, list_adt__list_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct list_adt_funtype_14_s *, list_adt__list_adt_t);
        void (* rptr)(struct list_adt_funtype_14_s *);
        struct list_adt_funtype_14_s * (* cptr)(struct list_adt_funtype_14_s *);};
typedef struct list_adt_funtype_14_ftbl_s * list_adt_funtype_14_ftbl_t;

struct list_adt_funtype_14_hashentry_s {uint32_t keyhash; list_adt__list_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct list_adt_funtype_14_hashentry_s list_adt_funtype_14_hashentry_t;

struct list_adt_funtype_14_htbl_s {uint32_t size; uint32_t num_entries; list_adt_funtype_14_hashentry_t * data;}; 
typedef struct list_adt_funtype_14_htbl_s * list_adt_funtype_14_htbl_t;

struct list_adt_funtype_14_s {uint32_t count;
        list_adt_funtype_14_ftbl_t ftbl;
        list_adt_funtype_14_htbl_t htbl;};
typedef struct list_adt_funtype_14_s * list_adt_funtype_14_t;

extern void release_list_adt_funtype_14(list_adt_funtype_14_t x, type_actual_t list_adt__T);

extern list_adt_funtype_14_t copy_list_adt_funtype_14(list_adt_funtype_14_t x);

extern bool_t equal_list_adt_funtype_14(list_adt_funtype_14_t x, list_adt_funtype_14_t y, type_actual_t list_adt__T);

extern char* json_list_adt_funtype_14(list_adt_funtype_14_t x, type_actual_t list_adt__T);


//reduce_ordinal

struct list_adt_record_15_s {
        uint32_t count; 
        list_adt__T_t project_1;
        ordstruct_adt__ordstruct_adt_t project_2;};
typedef struct list_adt_record_15_s * list_adt_record_15_t;

extern list_adt_record_15_t new_list_adt_record_15(void);

extern void release_list_adt_record_15(list_adt_record_15_t x, type_actual_t list_adt__T);

extern list_adt_record_15_t copy_list_adt_record_15(list_adt_record_15_t x);

extern bool_t equal_list_adt_record_15(list_adt_record_15_t x, list_adt_record_15_t y, type_actual_t list_adt__T);
extern char * json_list_adt_record_15(list_adt_record_15_t x, type_actual_t list_adt__T);

typedef struct actual_list_adt_record_15_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t list_adt__T;} * actual_list_adt_record_15_t;
extern void release_list_adt_record_15_ptr(pointer_t x, type_actual_t list_adt_record_15);

extern bool_t equal_list_adt_record_15_ptr(pointer_t x, pointer_t y, actual_list_adt_record_15_t T);

extern char * json_list_adt_record_15_ptr(pointer_t x,  actual_list_adt_record_15_t T);

actual_list_adt_record_15_t actual_list_adt_record_15(type_actual_t list_adt__T);

extern list_adt_record_15_t update_list_adt_record_15_project_1(list_adt_record_15_t x, list_adt__T_t v, type_actual_t list_adt__T);

extern list_adt_record_15_t update_list_adt_record_15_project_2(list_adt_record_15_t x, ordstruct_adt__ordstruct_adt_t v, type_actual_t list_adt__T);


//reduce_ordinal

struct list_adt_funtype_16_s;
        typedef struct list_adt_funtype_16_s * list_adt_funtype_16_t;

struct list_adt_funtype_16_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct list_adt_funtype_16_s *, list_adt_record_15_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct list_adt_funtype_16_s *, list_adt__T_t, ordstruct_adt__ordstruct_adt_t);
        void (* rptr)(struct list_adt_funtype_16_s *);
        struct list_adt_funtype_16_s * (* cptr)(struct list_adt_funtype_16_s *);};
typedef struct list_adt_funtype_16_ftbl_s * list_adt_funtype_16_ftbl_t;

struct list_adt_funtype_16_hashentry_s {uint32_t keyhash; list_adt_record_15_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct list_adt_funtype_16_hashentry_s list_adt_funtype_16_hashentry_t;

struct list_adt_funtype_16_htbl_s {uint32_t size; uint32_t num_entries; list_adt_funtype_16_hashentry_t * data;}; 
typedef struct list_adt_funtype_16_htbl_s * list_adt_funtype_16_htbl_t;

struct list_adt_funtype_16_s {uint32_t count;
        list_adt_funtype_16_ftbl_t ftbl;
        list_adt_funtype_16_htbl_t htbl;};
typedef struct list_adt_funtype_16_s * list_adt_funtype_16_t;

extern void release_list_adt_funtype_16(list_adt_funtype_16_t x, type_actual_t list_adt__T);

extern list_adt_funtype_16_t copy_list_adt_funtype_16(list_adt_funtype_16_t x);

extern bool_t equal_list_adt_funtype_16(list_adt_funtype_16_t x, list_adt_funtype_16_t y, type_actual_t list_adt__T);

extern char* json_list_adt_funtype_16(list_adt_funtype_16_t x, type_actual_t list_adt__T);




struct list_adt_closure_17_s;
        typedef struct list_adt_closure_17_s * list_adt_closure_17_t;

struct list_adt_closure_17_s {uint32_t count;
         list_adt_funtype_14_ftbl_t ftbl;
         list_adt_funtype_14_htbl_t htbl;
        type_actual_t fvar_1;
        list_adt_funtype_16_t fvar_2;
        ordstruct_adt__ordstruct_adt_t fvar_3; type_actual_t list_adt__T;};

ordstruct_adt__ordstruct_adt_t f_list_adt_closure_17(struct list_adt_closure_17_s * closure, list_adt__list_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_list_adt_closure_17(struct list_adt_closure_17_s * closure, list_adt__list_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_list_adt_closure_17(list_adt__list_adt_t ivar_5, type_actual_t list_adt__T, list_adt_funtype_16_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1);

list_adt_closure_17_t new_list_adt_closure_17(void);

void release_list_adt_closure_17(list_adt_funtype_14_t closure, type_actual_t list_adt__T);

list_adt_closure_17_t copy_list_adt_closure_17(list_adt_closure_17_t x);


//REDUCE_ordinal

struct list_adt_record_18_s {
        uint32_t count; 
        list_adt__T_t project_1;
        ordstruct_adt__ordstruct_adt_t project_2;
        list_adt__list_adt_t project_3;};
typedef struct list_adt_record_18_s * list_adt_record_18_t;

extern list_adt_record_18_t new_list_adt_record_18(void);

extern void release_list_adt_record_18(list_adt_record_18_t x, type_actual_t list_adt__T);

extern list_adt_record_18_t copy_list_adt_record_18(list_adt_record_18_t x);

extern bool_t equal_list_adt_record_18(list_adt_record_18_t x, list_adt_record_18_t y, type_actual_t list_adt__T);
extern char * json_list_adt_record_18(list_adt_record_18_t x, type_actual_t list_adt__T);

typedef struct actual_list_adt_record_18_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t list_adt__T;} * actual_list_adt_record_18_t;
extern void release_list_adt_record_18_ptr(pointer_t x, type_actual_t list_adt_record_18);

extern bool_t equal_list_adt_record_18_ptr(pointer_t x, pointer_t y, actual_list_adt_record_18_t T);

extern char * json_list_adt_record_18_ptr(pointer_t x,  actual_list_adt_record_18_t T);

actual_list_adt_record_18_t actual_list_adt_record_18(type_actual_t list_adt__T);

extern list_adt_record_18_t update_list_adt_record_18_project_1(list_adt_record_18_t x, list_adt__T_t v, type_actual_t list_adt__T);

extern list_adt_record_18_t update_list_adt_record_18_project_2(list_adt_record_18_t x, ordstruct_adt__ordstruct_adt_t v, type_actual_t list_adt__T);

extern list_adt_record_18_t update_list_adt_record_18_project_3(list_adt_record_18_t x, list_adt__list_adt_t v, type_actual_t list_adt__T);


//REDUCE_ordinal

struct list_adt_funtype_19_s;
        typedef struct list_adt_funtype_19_s * list_adt_funtype_19_t;

struct list_adt_funtype_19_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct list_adt_funtype_19_s *, list_adt_record_18_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct list_adt_funtype_19_s *, list_adt__T_t, ordstruct_adt__ordstruct_adt_t, list_adt__list_adt_t);
        void (* rptr)(struct list_adt_funtype_19_s *);
        struct list_adt_funtype_19_s * (* cptr)(struct list_adt_funtype_19_s *);};
typedef struct list_adt_funtype_19_ftbl_s * list_adt_funtype_19_ftbl_t;

struct list_adt_funtype_19_hashentry_s {uint32_t keyhash; list_adt_record_18_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct list_adt_funtype_19_hashentry_s list_adt_funtype_19_hashentry_t;

struct list_adt_funtype_19_htbl_s {uint32_t size; uint32_t num_entries; list_adt_funtype_19_hashentry_t * data;}; 
typedef struct list_adt_funtype_19_htbl_s * list_adt_funtype_19_htbl_t;

struct list_adt_funtype_19_s {uint32_t count;
        list_adt_funtype_19_ftbl_t ftbl;
        list_adt_funtype_19_htbl_t htbl;};
typedef struct list_adt_funtype_19_s * list_adt_funtype_19_t;

extern void release_list_adt_funtype_19(list_adt_funtype_19_t x, type_actual_t list_adt__T);

extern list_adt_funtype_19_t copy_list_adt_funtype_19(list_adt_funtype_19_t x);

extern bool_t equal_list_adt_funtype_19(list_adt_funtype_19_t x, list_adt_funtype_19_t y, type_actual_t list_adt__T);

extern char* json_list_adt_funtype_19(list_adt_funtype_19_t x, type_actual_t list_adt__T);




struct list_adt_closure_20_s;
        typedef struct list_adt_closure_20_s * list_adt_closure_20_t;

struct list_adt_closure_20_s {uint32_t count;
         list_adt_funtype_14_ftbl_t ftbl;
         list_adt_funtype_14_htbl_t htbl;
        type_actual_t fvar_1;
        list_adt_funtype_19_t fvar_2;
        list_adt_funtype_14_t fvar_3; type_actual_t list_adt__T;};

ordstruct_adt__ordstruct_adt_t f_list_adt_closure_20(struct list_adt_closure_20_s * closure, list_adt__list_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_list_adt_closure_20(struct list_adt_closure_20_s * closure, list_adt__list_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_list_adt_closure_20(list_adt__list_adt_t ivar_6, type_actual_t list_adt__T, list_adt_funtype_19_t ivar_3, list_adt_funtype_14_t ivar_1);

list_adt_closure_20_t new_list_adt_closure_20(void);

void release_list_adt_closure_20(list_adt_funtype_14_t closure, type_actual_t list_adt__T);

list_adt_closure_20_t copy_list_adt_closure_20(list_adt_closure_20_t x);



extern bool_t r_list_adt__nullp(list_adt__list_adt_t ivar_1);

extern bool_t r_list_adt__consp(list_adt__list_adt_t ivar_1);

extern list_adt__cons_t update_list_adt__list_adt_car(list_adt__list_adt_t ivar_1, list_adt__T_t ivar_3);

extern list_adt__T_t list_adt__list_adt_car(list_adt__list_adt_t ivar_1);

extern list_adt__cons_t update_list_adt__list_adt_cdr(list_adt__list_adt_t ivar_1, list_adt__list_adt_t ivar_3);

extern list_adt__list_adt_t list_adt__list_adt_cdr(list_adt__list_adt_t ivar_1);

extern list_adt__list_adt_t list_adt__null(void);

extern list_adt__list_adt_t list_adt__cons(list_adt__T_t ivar_2, list_adt__list_adt_t ivar_3);

extern list_adt_funtype_2_t list_adt__list_ord(type_actual_t list_adt__T);

extern uint8_t list_adt__ord(type_actual_t list_adt__T, list_adt__list_adt_t ivar_1);

extern list_adt_funtype_3_t list_adt__every__1(type_actual_t list_adt__T, list_adt_funtype_4_t ivar_1);

extern bool_t list_adt__every__2(type_actual_t list_adt__T, list_adt_funtype_4_t ivar_1, list_adt__list_adt_t ivar_3);

extern list_adt_funtype_3_t list_adt__some__1(type_actual_t list_adt__T, list_adt_funtype_4_t ivar_1);

extern bool_t list_adt__some__2(type_actual_t list_adt__T, list_adt_funtype_4_t ivar_1, list_adt__list_adt_t ivar_3);

extern bool_t list_adt__subterm(type_actual_t list_adt__T, list_adt__list_adt_t ivar_1, list_adt__list_adt_t ivar_2);

extern bool_t list_adt__doublelessp(type_actual_t list_adt__T, list_adt__list_adt_t ivar_1, list_adt__list_adt_t ivar_2);

extern list_adt_funtype_7_t list_adt__reduce_nat(type_actual_t list_adt__T, mpz_ptr_t ivar_1, list_adt_funtype_9_t ivar_2);

extern list_adt_funtype_7_t list_adt__REDUCE_nat(type_actual_t list_adt__T, list_adt_funtype_7_t ivar_1, list_adt_funtype_12_t ivar_3);

extern list_adt_funtype_14_t list_adt__reduce_ordinal(type_actual_t list_adt__T, ordstruct_adt__ordstruct_adt_t ivar_1, list_adt_funtype_16_t ivar_2);

extern list_adt_funtype_14_t list_adt__REDUCE_ordinal(type_actual_t list_adt__T, list_adt_funtype_14_t ivar_1, list_adt_funtype_19_t ivar_3);
#endif