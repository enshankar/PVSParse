//Code generated using pvs2ir
#ifndef _list2finseq_uint32_h 
#define _list2finseq_uint32_h

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

//cc -O3 -Wall -o list2finseq_uint32 -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib list2finseq_uint32_c.c -lgmp 

struct list2finseq_uint32_funtype_0_s;
        typedef struct list2finseq_uint32_funtype_0_s * list2finseq_uint32_funtype_0_t;

struct list2finseq_uint32_funtype_0_ftbl_s {uint32_t (* fptr)(struct list2finseq_uint32_funtype_0_s *, mpz_ptr_t);
        uint32_t (* mptr)(struct list2finseq_uint32_funtype_0_s *, mpz_ptr_t);
        void (* rptr)(struct list2finseq_uint32_funtype_0_s *);
        struct list2finseq_uint32_funtype_0_s * (* cptr)(struct list2finseq_uint32_funtype_0_s *);};
typedef struct list2finseq_uint32_funtype_0_ftbl_s * list2finseq_uint32_funtype_0_ftbl_t;

struct list2finseq_uint32_funtype_0_hashentry_s {uint32_t keyhash; mpz_ptr_t key; uint32_t value;}; 
typedef struct list2finseq_uint32_funtype_0_hashentry_s list2finseq_uint32_funtype_0_hashentry_t;

struct list2finseq_uint32_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; list2finseq_uint32_funtype_0_hashentry_t * data;}; 
typedef struct list2finseq_uint32_funtype_0_htbl_s * list2finseq_uint32_funtype_0_htbl_t;

struct list2finseq_uint32_funtype_0_s {uint32_t count;
        list2finseq_uint32_funtype_0_ftbl_t ftbl;
        list2finseq_uint32_funtype_0_htbl_t htbl;};
typedef struct list2finseq_uint32_funtype_0_s * list2finseq_uint32_funtype_0_t;

extern void release_list2finseq_uint32_funtype_0(list2finseq_uint32_funtype_0_t x);

extern list2finseq_uint32_funtype_0_t copy_list2finseq_uint32_funtype_0(list2finseq_uint32_funtype_0_t x);

uint32_t lookup_list2finseq_uint32_funtype_0(list2finseq_uint32_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

list2finseq_uint32_funtype_0_t dupdate_list2finseq_uint32_funtype_0(list2finseq_uint32_funtype_0_t a, mpz_ptr_t i, uint32_t v);

extern list2finseq_uint32_funtype_0_t update_list2finseq_uint32_funtype_0(list2finseq_uint32_funtype_0_t a, mpz_ptr_t i, uint32_t v);

extern bool_t equal_list2finseq_uint32_funtype_0(list2finseq_uint32_funtype_0_t x, list2finseq_uint32_funtype_0_t y);

extern char* json_list2finseq_uint32_funtype_0(list2finseq_uint32_funtype_0_t x);



struct list2finseq_uint32_record_1_s {
        uint32_t count; 
        mpz_t length;
        list2finseq_uint32_funtype_0_t seq;};
typedef struct list2finseq_uint32_record_1_s * list2finseq_uint32_record_1_t;

extern list2finseq_uint32_record_1_t new_list2finseq_uint32_record_1(void);

extern void release_list2finseq_uint32_record_1(list2finseq_uint32_record_1_t x);

extern list2finseq_uint32_record_1_t copy_list2finseq_uint32_record_1(list2finseq_uint32_record_1_t x);

extern bool_t equal_list2finseq_uint32_record_1(list2finseq_uint32_record_1_t x, list2finseq_uint32_record_1_t y);
extern char * json_list2finseq_uint32_record_1(list2finseq_uint32_record_1_t x);

typedef struct actual_list2finseq_uint32_record_1_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_list2finseq_uint32_record_1_t;
void release_list2finseq_uint32_record_1_ptr(pointer_t x, type_actual_t list2finseq_uint32_record_1);

extern bool_t equal_list2finseq_uint32_record_1_ptr(pointer_t x, pointer_t y, actual_list2finseq_uint32_record_1_t T);

extern char * json_list2finseq_uint32_record_1_ptr(pointer_t x,  actual_list2finseq_uint32_record_1_t T);

actual_list2finseq_uint32_record_1_t actual_list2finseq_uint32_record_1(void);

extern list2finseq_uint32_record_1_t update_list2finseq_uint32_record_1_length(list2finseq_uint32_record_1_t x, mpz_ptr_t v);

extern list2finseq_uint32_record_1_t update_list2finseq_uint32_record_1_seq(list2finseq_uint32_record_1_t x, list2finseq_uint32_funtype_0_t v);



struct list2finseq_uint32_funtype_2_s;
        typedef struct list2finseq_uint32_funtype_2_s * list2finseq_uint32_funtype_2_t;

struct list2finseq_uint32_funtype_2_ftbl_s {list2finseq_uint32_record_1_t (* fptr)(struct list2finseq_uint32_funtype_2_s *, list_adt__list_adt_t);
        list2finseq_uint32_record_1_t (* mptr)(struct list2finseq_uint32_funtype_2_s *, list_adt__list_adt_t);
        void (* rptr)(struct list2finseq_uint32_funtype_2_s *);
        struct list2finseq_uint32_funtype_2_s * (* cptr)(struct list2finseq_uint32_funtype_2_s *);};
typedef struct list2finseq_uint32_funtype_2_ftbl_s * list2finseq_uint32_funtype_2_ftbl_t;

struct list2finseq_uint32_funtype_2_hashentry_s {uint32_t keyhash; list_adt__list_adt_t key; list2finseq_uint32_record_1_t value;}; 
typedef struct list2finseq_uint32_funtype_2_hashentry_s list2finseq_uint32_funtype_2_hashentry_t;

struct list2finseq_uint32_funtype_2_htbl_s {uint32_t size; uint32_t num_entries; list2finseq_uint32_funtype_2_hashentry_t * data;}; 
typedef struct list2finseq_uint32_funtype_2_htbl_s * list2finseq_uint32_funtype_2_htbl_t;

struct list2finseq_uint32_funtype_2_s {uint32_t count;
        list2finseq_uint32_funtype_2_ftbl_t ftbl;
        list2finseq_uint32_funtype_2_htbl_t htbl;};
typedef struct list2finseq_uint32_funtype_2_s * list2finseq_uint32_funtype_2_t;

extern void release_list2finseq_uint32_funtype_2(list2finseq_uint32_funtype_2_t x);

extern list2finseq_uint32_funtype_2_t copy_list2finseq_uint32_funtype_2(list2finseq_uint32_funtype_2_t x);

extern bool_t equal_list2finseq_uint32_funtype_2(list2finseq_uint32_funtype_2_t x, list2finseq_uint32_funtype_2_t y);

extern char* json_list2finseq_uint32_funtype_2(list2finseq_uint32_funtype_2_t x);




struct list2finseq_uint32_closure_3_s;
        typedef struct list2finseq_uint32_closure_3_s * list2finseq_uint32_closure_3_t;

struct list2finseq_uint32_closure_3_s {uint32_t count;
         list2finseq_uint32_funtype_2_ftbl_t ftbl;
         list2finseq_uint32_funtype_2_htbl_t htbl;};

list2finseq_uint32_record_1_t f_list2finseq_uint32_closure_3(struct list2finseq_uint32_closure_3_s * closure, list_adt__list_adt_t bvar);

list2finseq_uint32_record_1_t m_list2finseq_uint32_closure_3(struct list2finseq_uint32_closure_3_s * closure, list_adt__list_adt_t bvar);

extern list2finseq_uint32_record_1_t h_list2finseq_uint32_closure_3(list_adt__list_adt_t ivar_5);

extern list2finseq_uint32_closure_3_t new_list2finseq_uint32_closure_3(void);

extern void release_list2finseq_uint32_closure_3(list2finseq_uint32_funtype_2_t closure);

extern list2finseq_uint32_closure_3_t copy_list2finseq_uint32_closure_3(list2finseq_uint32_closure_3_t x);




struct list2finseq_uint32_closure_4_s;
        typedef struct list2finseq_uint32_closure_4_s * list2finseq_uint32_closure_4_t;

struct list2finseq_uint32_closure_4_s {uint32_t count;
         list2finseq_uint32_funtype_0_ftbl_t ftbl;
         list2finseq_uint32_funtype_0_htbl_t htbl;
        list_adt__list_adt_t fvar_1;};

uint32_t f_list2finseq_uint32_closure_4(struct list2finseq_uint32_closure_4_s * closure, mpz_ptr_t bvar);

uint32_t m_list2finseq_uint32_closure_4(struct list2finseq_uint32_closure_4_s * closure, mpz_ptr_t bvar);

extern uint32_t h_list2finseq_uint32_closure_4(mpz_ptr_t ivar_26, list_adt__list_adt_t ivar_5);

extern list2finseq_uint32_closure_4_t new_list2finseq_uint32_closure_4(void);

extern void release_list2finseq_uint32_closure_4(list2finseq_uint32_funtype_0_t closure);

extern list2finseq_uint32_closure_4_t copy_list2finseq_uint32_closure_4(list2finseq_uint32_closure_4_t x);



struct list2finseq_uint32_funtype_5_s;
        typedef struct list2finseq_uint32_funtype_5_s * list2finseq_uint32_funtype_5_t;

struct list2finseq_uint32_funtype_5_ftbl_s {list_adt__list_adt_t (* fptr)(struct list2finseq_uint32_funtype_5_s *, list2finseq_uint32_record_1_t);
        list_adt__list_adt_t (* mptr)(struct list2finseq_uint32_funtype_5_s *, list2finseq_uint32_record_1_t);
        void (* rptr)(struct list2finseq_uint32_funtype_5_s *);
        struct list2finseq_uint32_funtype_5_s * (* cptr)(struct list2finseq_uint32_funtype_5_s *);};
typedef struct list2finseq_uint32_funtype_5_ftbl_s * list2finseq_uint32_funtype_5_ftbl_t;

struct list2finseq_uint32_funtype_5_hashentry_s {uint32_t keyhash; list2finseq_uint32_record_1_t key; list_adt__list_adt_t value;}; 
typedef struct list2finseq_uint32_funtype_5_hashentry_s list2finseq_uint32_funtype_5_hashentry_t;

struct list2finseq_uint32_funtype_5_htbl_s {uint32_t size; uint32_t num_entries; list2finseq_uint32_funtype_5_hashentry_t * data;}; 
typedef struct list2finseq_uint32_funtype_5_htbl_s * list2finseq_uint32_funtype_5_htbl_t;

struct list2finseq_uint32_funtype_5_s {uint32_t count;
        list2finseq_uint32_funtype_5_ftbl_t ftbl;
        list2finseq_uint32_funtype_5_htbl_t htbl;};
typedef struct list2finseq_uint32_funtype_5_s * list2finseq_uint32_funtype_5_t;

extern void release_list2finseq_uint32_funtype_5(list2finseq_uint32_funtype_5_t x);

extern list2finseq_uint32_funtype_5_t copy_list2finseq_uint32_funtype_5(list2finseq_uint32_funtype_5_t x);

extern bool_t equal_list2finseq_uint32_funtype_5(list2finseq_uint32_funtype_5_t x, list2finseq_uint32_funtype_5_t y);

extern char* json_list2finseq_uint32_funtype_5(list2finseq_uint32_funtype_5_t x);




struct list2finseq_uint32_closure_6_s;
        typedef struct list2finseq_uint32_closure_6_s * list2finseq_uint32_closure_6_t;

struct list2finseq_uint32_closure_6_s {uint32_t count;
         list2finseq_uint32_funtype_5_ftbl_t ftbl;
         list2finseq_uint32_funtype_5_htbl_t htbl;};

list_adt__list_adt_t f_list2finseq_uint32_closure_6(struct list2finseq_uint32_closure_6_s * closure, list2finseq_uint32_record_1_t bvar);

list_adt__list_adt_t m_list2finseq_uint32_closure_6(struct list2finseq_uint32_closure_6_s * closure, list2finseq_uint32_record_1_t bvar);

extern list_adt__list_adt_t h_list2finseq_uint32_closure_6(list2finseq_uint32_record_1_t ivar_5);

extern list2finseq_uint32_closure_6_t new_list2finseq_uint32_closure_6(void);

extern void release_list2finseq_uint32_closure_6(list2finseq_uint32_funtype_5_t closure);

extern list2finseq_uint32_closure_6_t copy_list2finseq_uint32_closure_6(list2finseq_uint32_closure_6_t x);



extern list2finseq_uint32_funtype_2_t list2finseq_uint32__list2finseq(void);

extern list_adt__list_adt_t list2finseq_uint32__finseq2list_rec(list2finseq_uint32_record_1_t ivar_1, mpz_ptr_t ivar_3);

extern list2finseq_uint32_funtype_5_t list2finseq_uint32__finseq2list(void);
#endif