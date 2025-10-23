//Code generated using pvs2ir
#ifndef _lift_adt_h 
#define _lift_adt_h

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

//cc -O3 -Wall -o lift_adt -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/lift_adt_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c -lgmp 

typedef pointer_t lift_adt__T_t;
//lift

struct lift_adt__lift_adt_s {
         uint32_t count; 
        uint8_t lift_adt__lift_adt_index;};
typedef struct lift_adt__lift_adt_s * lift_adt__lift_adt_t;

extern lift_adt__lift_adt_t new_lift_adt__lift_adt(void);

extern void release_lift_adt__lift_adt(lift_adt__lift_adt_t x, type_actual_t lift_adt__T);

extern lift_adt__lift_adt_t copy_lift_adt__lift_adt(lift_adt__lift_adt_t x);

extern bool_t equal_lift_adt__lift_adt(lift_adt__lift_adt_t x, lift_adt__lift_adt_t y, type_actual_t lift_adt__T);
extern char * json_lift_adt__lift_adt(lift_adt__lift_adt_t x, type_actual_t lift_adt__T);

typedef struct actual_lift_adt__lift_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t lift_adt__T;} * actual_lift_adt__lift_adt_t;
extern void release_lift_adt__lift_adt_ptr(pointer_t x, type_actual_t lift_adt__lift_adt);

extern bool_t equal_lift_adt__lift_adt_ptr(pointer_t x, pointer_t y, actual_lift_adt__lift_adt_t T);

extern char * json_lift_adt__lift_adt_ptr(pointer_t x,  actual_lift_adt__lift_adt_t T);

actual_lift_adt__lift_adt_t actual_lift_adt__lift_adt(type_actual_t lift_adt__T);

extern lift_adt__lift_adt_t update_lift_adt__lift_adt_lift_adt__lift_adt_index(lift_adt__lift_adt_t x, uint8_t v);


//up

struct lift_adt__up_s {
        uint32_t count; 
        uint8_t lift_adt__lift_adt_index;
        lift_adt__T_t down;};
typedef struct lift_adt__up_s * lift_adt__up_t;

extern lift_adt__up_t new_lift_adt__up(void);

extern void release_lift_adt__up(lift_adt__up_t x, type_actual_t lift_adt__T);

extern lift_adt__up_t copy_lift_adt__up(lift_adt__up_t x);

extern bool_t equal_lift_adt__up(lift_adt__up_t x, lift_adt__up_t y, type_actual_t lift_adt__T);
extern char * json_lift_adt__up(lift_adt__up_t x, type_actual_t lift_adt__T);

typedef struct actual_lift_adt__up_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t lift_adt__T;} * actual_lift_adt__up_t;
extern void release_lift_adt__up_ptr(pointer_t x, type_actual_t lift_adt__up);

extern bool_t equal_lift_adt__up_ptr(pointer_t x, pointer_t y, actual_lift_adt__up_t T);

extern char * json_lift_adt__up_ptr(pointer_t x,  actual_lift_adt__up_t T);

actual_lift_adt__up_t actual_lift_adt__up(type_actual_t lift_adt__T);

extern lift_adt__up_t update_lift_adt__up_lift_adt__lift_adt_index(lift_adt__up_t x, uint8_t v);

extern lift_adt__up_t update_lift_adt__up_down(lift_adt__up_t x, lift_adt__T_t v, type_actual_t lift_adt__T);


//lift_ord

struct lift_adt_funtype_2_s;
        typedef struct lift_adt_funtype_2_s * lift_adt_funtype_2_t;

struct lift_adt_funtype_2_ftbl_s {uint8_t (* fptr)(struct lift_adt_funtype_2_s *, lift_adt__lift_adt_t);
        uint8_t (* mptr)(struct lift_adt_funtype_2_s *, lift_adt__lift_adt_t);
        void (* rptr)(struct lift_adt_funtype_2_s *);
        struct lift_adt_funtype_2_s * (* cptr)(struct lift_adt_funtype_2_s *);};
typedef struct lift_adt_funtype_2_ftbl_s * lift_adt_funtype_2_ftbl_t;

struct lift_adt_funtype_2_hashentry_s {uint32_t keyhash; lift_adt__lift_adt_t key; uint8_t value;}; 
typedef struct lift_adt_funtype_2_hashentry_s lift_adt_funtype_2_hashentry_t;

struct lift_adt_funtype_2_htbl_s {uint32_t size; uint32_t num_entries; lift_adt_funtype_2_hashentry_t * data;}; 
typedef struct lift_adt_funtype_2_htbl_s * lift_adt_funtype_2_htbl_t;

struct lift_adt_funtype_2_s {uint32_t count;
        lift_adt_funtype_2_ftbl_t ftbl;
        lift_adt_funtype_2_htbl_t htbl;};
typedef struct lift_adt_funtype_2_s * lift_adt_funtype_2_t;

extern void release_lift_adt_funtype_2(lift_adt_funtype_2_t x, type_actual_t lift_adt__T);

extern lift_adt_funtype_2_t copy_lift_adt_funtype_2(lift_adt_funtype_2_t x);

extern bool_t equal_lift_adt_funtype_2(lift_adt_funtype_2_t x, lift_adt_funtype_2_t y, type_actual_t lift_adt__T);

extern char* json_lift_adt_funtype_2(lift_adt_funtype_2_t x, type_actual_t lift_adt__T);


//every

struct lift_adt_funtype_3_s;
        typedef struct lift_adt_funtype_3_s * lift_adt_funtype_3_t;

struct lift_adt_funtype_3_ftbl_s {bool_t (* fptr)(struct lift_adt_funtype_3_s *, lift_adt__lift_adt_t);
        bool_t (* mptr)(struct lift_adt_funtype_3_s *, lift_adt__lift_adt_t);
        void (* rptr)(struct lift_adt_funtype_3_s *);
        struct lift_adt_funtype_3_s * (* cptr)(struct lift_adt_funtype_3_s *);};
typedef struct lift_adt_funtype_3_ftbl_s * lift_adt_funtype_3_ftbl_t;

struct lift_adt_funtype_3_hashentry_s {uint32_t keyhash; lift_adt__lift_adt_t key; bool_t value;}; 
typedef struct lift_adt_funtype_3_hashentry_s lift_adt_funtype_3_hashentry_t;

struct lift_adt_funtype_3_htbl_s {uint32_t size; uint32_t num_entries; lift_adt_funtype_3_hashentry_t * data;}; 
typedef struct lift_adt_funtype_3_htbl_s * lift_adt_funtype_3_htbl_t;

struct lift_adt_funtype_3_s {uint32_t count;
        lift_adt_funtype_3_ftbl_t ftbl;
        lift_adt_funtype_3_htbl_t htbl;};
typedef struct lift_adt_funtype_3_s * lift_adt_funtype_3_t;

extern void release_lift_adt_funtype_3(lift_adt_funtype_3_t x, type_actual_t lift_adt__T);

extern lift_adt_funtype_3_t copy_lift_adt_funtype_3(lift_adt_funtype_3_t x);

extern bool_t equal_lift_adt_funtype_3(lift_adt_funtype_3_t x, lift_adt_funtype_3_t y, type_actual_t lift_adt__T);

extern char* json_lift_adt_funtype_3(lift_adt_funtype_3_t x, type_actual_t lift_adt__T);


//every

struct lift_adt_funtype_4_s;
        typedef struct lift_adt_funtype_4_s * lift_adt_funtype_4_t;

struct lift_adt_funtype_4_ftbl_s {bool_t (* fptr)(struct lift_adt_funtype_4_s *, lift_adt__T_t);
        bool_t (* mptr)(struct lift_adt_funtype_4_s *, lift_adt__T_t);
        void (* rptr)(struct lift_adt_funtype_4_s *);
        struct lift_adt_funtype_4_s * (* cptr)(struct lift_adt_funtype_4_s *);};
typedef struct lift_adt_funtype_4_ftbl_s * lift_adt_funtype_4_ftbl_t;

struct lift_adt_funtype_4_hashentry_s {uint32_t keyhash; lift_adt__T_t key; bool_t value;}; 
typedef struct lift_adt_funtype_4_hashentry_s lift_adt_funtype_4_hashentry_t;

struct lift_adt_funtype_4_htbl_s {uint32_t size; uint32_t num_entries; lift_adt_funtype_4_hashentry_t * data;}; 
typedef struct lift_adt_funtype_4_htbl_s * lift_adt_funtype_4_htbl_t;

struct lift_adt_funtype_4_s {uint32_t count;
        lift_adt_funtype_4_ftbl_t ftbl;
        lift_adt_funtype_4_htbl_t htbl;};
typedef struct lift_adt_funtype_4_s * lift_adt_funtype_4_t;

extern void release_lift_adt_funtype_4(lift_adt_funtype_4_t x, type_actual_t lift_adt__T);

extern lift_adt_funtype_4_t copy_lift_adt_funtype_4(lift_adt_funtype_4_t x);

extern bool_t equal_lift_adt_funtype_4(lift_adt_funtype_4_t x, lift_adt_funtype_4_t y, type_actual_t lift_adt__T);

extern char* json_lift_adt_funtype_4(lift_adt_funtype_4_t x, type_actual_t lift_adt__T);




struct lift_adt_closure_5_s;
        typedef struct lift_adt_closure_5_s * lift_adt_closure_5_t;

struct lift_adt_closure_5_s {uint32_t count;
         lift_adt_funtype_3_ftbl_t ftbl;
         lift_adt_funtype_3_htbl_t htbl;
        type_actual_t fvar_1;
        lift_adt_funtype_4_t fvar_2; type_actual_t lift_adt__T;};

bool_t f_lift_adt_closure_5(struct lift_adt_closure_5_s * closure, lift_adt__lift_adt_t bvar);

bool_t m_lift_adt_closure_5(struct lift_adt_closure_5_s * closure, lift_adt__lift_adt_t bvar);

extern bool_t h_lift_adt_closure_5(lift_adt__lift_adt_t ivar_4, type_actual_t lift_adt__T, lift_adt_funtype_4_t ivar_1);

lift_adt_closure_5_t new_lift_adt_closure_5(void);

void release_lift_adt_closure_5(lift_adt_funtype_3_t closure, type_actual_t lift_adt__T);

lift_adt_closure_5_t copy_lift_adt_closure_5(lift_adt_closure_5_t x);




struct lift_adt_closure_6_s;
        typedef struct lift_adt_closure_6_s * lift_adt_closure_6_t;

struct lift_adt_closure_6_s {uint32_t count;
         lift_adt_funtype_3_ftbl_t ftbl;
         lift_adt_funtype_3_htbl_t htbl;
        type_actual_t fvar_1;
        lift_adt_funtype_4_t fvar_2; type_actual_t lift_adt__T;};

bool_t f_lift_adt_closure_6(struct lift_adt_closure_6_s * closure, lift_adt__lift_adt_t bvar);

bool_t m_lift_adt_closure_6(struct lift_adt_closure_6_s * closure, lift_adt__lift_adt_t bvar);

extern bool_t h_lift_adt_closure_6(lift_adt__lift_adt_t ivar_4, type_actual_t lift_adt__T, lift_adt_funtype_4_t ivar_1);

lift_adt_closure_6_t new_lift_adt_closure_6(void);

void release_lift_adt_closure_6(lift_adt_funtype_3_t closure, type_actual_t lift_adt__T);

lift_adt_closure_6_t copy_lift_adt_closure_6(lift_adt_closure_6_t x);


//reduce_nat

struct lift_adt_funtype_7_s;
        typedef struct lift_adt_funtype_7_s * lift_adt_funtype_7_t;

struct lift_adt_funtype_7_ftbl_s {mpz_ptr_t (* fptr)(struct lift_adt_funtype_7_s *, lift_adt__lift_adt_t);
        mpz_ptr_t (* mptr)(struct lift_adt_funtype_7_s *, lift_adt__lift_adt_t);
        void (* rptr)(struct lift_adt_funtype_7_s *);
        struct lift_adt_funtype_7_s * (* cptr)(struct lift_adt_funtype_7_s *);};
typedef struct lift_adt_funtype_7_ftbl_s * lift_adt_funtype_7_ftbl_t;

struct lift_adt_funtype_7_hashentry_s {uint32_t keyhash; lift_adt__lift_adt_t key; mpz_t value;}; 
typedef struct lift_adt_funtype_7_hashentry_s lift_adt_funtype_7_hashentry_t;

struct lift_adt_funtype_7_htbl_s {uint32_t size; uint32_t num_entries; lift_adt_funtype_7_hashentry_t * data;}; 
typedef struct lift_adt_funtype_7_htbl_s * lift_adt_funtype_7_htbl_t;

struct lift_adt_funtype_7_s {uint32_t count;
        lift_adt_funtype_7_ftbl_t ftbl;
        lift_adt_funtype_7_htbl_t htbl;};
typedef struct lift_adt_funtype_7_s * lift_adt_funtype_7_t;

extern void release_lift_adt_funtype_7(lift_adt_funtype_7_t x, type_actual_t lift_adt__T);

extern lift_adt_funtype_7_t copy_lift_adt_funtype_7(lift_adt_funtype_7_t x);

extern bool_t equal_lift_adt_funtype_7(lift_adt_funtype_7_t x, lift_adt_funtype_7_t y, type_actual_t lift_adt__T);

extern char* json_lift_adt_funtype_7(lift_adt_funtype_7_t x, type_actual_t lift_adt__T);


//reduce_nat

struct lift_adt_funtype_8_s;
        typedef struct lift_adt_funtype_8_s * lift_adt_funtype_8_t;

struct lift_adt_funtype_8_ftbl_s {mpz_ptr_t (* fptr)(struct lift_adt_funtype_8_s *, lift_adt__T_t);
        mpz_ptr_t (* mptr)(struct lift_adt_funtype_8_s *, lift_adt__T_t);
        void (* rptr)(struct lift_adt_funtype_8_s *);
        struct lift_adt_funtype_8_s * (* cptr)(struct lift_adt_funtype_8_s *);};
typedef struct lift_adt_funtype_8_ftbl_s * lift_adt_funtype_8_ftbl_t;

struct lift_adt_funtype_8_hashentry_s {uint32_t keyhash; lift_adt__T_t key; mpz_t value;}; 
typedef struct lift_adt_funtype_8_hashentry_s lift_adt_funtype_8_hashentry_t;

struct lift_adt_funtype_8_htbl_s {uint32_t size; uint32_t num_entries; lift_adt_funtype_8_hashentry_t * data;}; 
typedef struct lift_adt_funtype_8_htbl_s * lift_adt_funtype_8_htbl_t;

struct lift_adt_funtype_8_s {uint32_t count;
        lift_adt_funtype_8_ftbl_t ftbl;
        lift_adt_funtype_8_htbl_t htbl;};
typedef struct lift_adt_funtype_8_s * lift_adt_funtype_8_t;

extern void release_lift_adt_funtype_8(lift_adt_funtype_8_t x, type_actual_t lift_adt__T);

extern lift_adt_funtype_8_t copy_lift_adt_funtype_8(lift_adt_funtype_8_t x);

extern bool_t equal_lift_adt_funtype_8(lift_adt_funtype_8_t x, lift_adt_funtype_8_t y, type_actual_t lift_adt__T);

extern char* json_lift_adt_funtype_8(lift_adt_funtype_8_t x, type_actual_t lift_adt__T);




struct lift_adt_closure_9_s;
        typedef struct lift_adt_closure_9_s * lift_adt_closure_9_t;

struct lift_adt_closure_9_s {uint32_t count;
         lift_adt_funtype_7_ftbl_t ftbl;
         lift_adt_funtype_7_htbl_t htbl;
        type_actual_t fvar_1;
        lift_adt_funtype_8_t fvar_2;
        mpz_t fvar_3; type_actual_t lift_adt__T;};

mpz_ptr_t f_lift_adt_closure_9(struct lift_adt_closure_9_s * closure, lift_adt__lift_adt_t bvar);

mpz_ptr_t m_lift_adt_closure_9(struct lift_adt_closure_9_s * closure, lift_adt__lift_adt_t bvar);

extern mpz_ptr_t h_lift_adt_closure_9(lift_adt__lift_adt_t ivar_5, type_actual_t lift_adt__T, lift_adt_funtype_8_t ivar_2, mpz_ptr_t ivar_1);

lift_adt_closure_9_t new_lift_adt_closure_9(void);

void release_lift_adt_closure_9(lift_adt_funtype_7_t closure, type_actual_t lift_adt__T);

lift_adt_closure_9_t copy_lift_adt_closure_9(lift_adt_closure_9_t x);


//REDUCE_nat

struct lift_adt_record_10_s {
        uint32_t count; 
        lift_adt__T_t project_1;
        lift_adt__lift_adt_t project_2;};
typedef struct lift_adt_record_10_s * lift_adt_record_10_t;

extern lift_adt_record_10_t new_lift_adt_record_10(void);

extern void release_lift_adt_record_10(lift_adt_record_10_t x, type_actual_t lift_adt__T);

extern lift_adt_record_10_t copy_lift_adt_record_10(lift_adt_record_10_t x);

extern bool_t equal_lift_adt_record_10(lift_adt_record_10_t x, lift_adt_record_10_t y, type_actual_t lift_adt__T);
extern char * json_lift_adt_record_10(lift_adt_record_10_t x, type_actual_t lift_adt__T);

typedef struct actual_lift_adt_record_10_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t lift_adt__T;} * actual_lift_adt_record_10_t;
extern void release_lift_adt_record_10_ptr(pointer_t x, type_actual_t lift_adt_record_10);

extern bool_t equal_lift_adt_record_10_ptr(pointer_t x, pointer_t y, actual_lift_adt_record_10_t T);

extern char * json_lift_adt_record_10_ptr(pointer_t x,  actual_lift_adt_record_10_t T);

actual_lift_adt_record_10_t actual_lift_adt_record_10(type_actual_t lift_adt__T);

extern lift_adt_record_10_t update_lift_adt_record_10_project_1(lift_adt_record_10_t x, lift_adt__T_t v, type_actual_t lift_adt__T);

extern lift_adt_record_10_t update_lift_adt_record_10_project_2(lift_adt_record_10_t x, lift_adt__lift_adt_t v, type_actual_t lift_adt__T);


//REDUCE_nat

struct lift_adt_funtype_11_s;
        typedef struct lift_adt_funtype_11_s * lift_adt_funtype_11_t;

struct lift_adt_funtype_11_ftbl_s {mpz_ptr_t (* fptr)(struct lift_adt_funtype_11_s *, lift_adt_record_10_t);
        mpz_ptr_t (* mptr)(struct lift_adt_funtype_11_s *, lift_adt__T_t, lift_adt__lift_adt_t);
        void (* rptr)(struct lift_adt_funtype_11_s *);
        struct lift_adt_funtype_11_s * (* cptr)(struct lift_adt_funtype_11_s *);};
typedef struct lift_adt_funtype_11_ftbl_s * lift_adt_funtype_11_ftbl_t;

struct lift_adt_funtype_11_hashentry_s {uint32_t keyhash; lift_adt_record_10_t key; mpz_t value;}; 
typedef struct lift_adt_funtype_11_hashentry_s lift_adt_funtype_11_hashentry_t;

struct lift_adt_funtype_11_htbl_s {uint32_t size; uint32_t num_entries; lift_adt_funtype_11_hashentry_t * data;}; 
typedef struct lift_adt_funtype_11_htbl_s * lift_adt_funtype_11_htbl_t;

struct lift_adt_funtype_11_s {uint32_t count;
        lift_adt_funtype_11_ftbl_t ftbl;
        lift_adt_funtype_11_htbl_t htbl;};
typedef struct lift_adt_funtype_11_s * lift_adt_funtype_11_t;

extern void release_lift_adt_funtype_11(lift_adt_funtype_11_t x, type_actual_t lift_adt__T);

extern lift_adt_funtype_11_t copy_lift_adt_funtype_11(lift_adt_funtype_11_t x);

extern bool_t equal_lift_adt_funtype_11(lift_adt_funtype_11_t x, lift_adt_funtype_11_t y, type_actual_t lift_adt__T);

extern char* json_lift_adt_funtype_11(lift_adt_funtype_11_t x, type_actual_t lift_adt__T);




struct lift_adt_closure_12_s;
        typedef struct lift_adt_closure_12_s * lift_adt_closure_12_t;

struct lift_adt_closure_12_s {uint32_t count;
         lift_adt_funtype_7_ftbl_t ftbl;
         lift_adt_funtype_7_htbl_t htbl;
        type_actual_t fvar_1;
        lift_adt_funtype_11_t fvar_2;
        lift_adt_funtype_7_t fvar_3; type_actual_t lift_adt__T;};

mpz_ptr_t f_lift_adt_closure_12(struct lift_adt_closure_12_s * closure, lift_adt__lift_adt_t bvar);

mpz_ptr_t m_lift_adt_closure_12(struct lift_adt_closure_12_s * closure, lift_adt__lift_adt_t bvar);

extern mpz_ptr_t h_lift_adt_closure_12(lift_adt__lift_adt_t ivar_6, type_actual_t lift_adt__T, lift_adt_funtype_11_t ivar_3, lift_adt_funtype_7_t ivar_1);

lift_adt_closure_12_t new_lift_adt_closure_12(void);

void release_lift_adt_closure_12(lift_adt_funtype_7_t closure, type_actual_t lift_adt__T);

lift_adt_closure_12_t copy_lift_adt_closure_12(lift_adt_closure_12_t x);


//reduce_ordinal

struct lift_adt_funtype_13_s;
        typedef struct lift_adt_funtype_13_s * lift_adt_funtype_13_t;

struct lift_adt_funtype_13_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct lift_adt_funtype_13_s *, lift_adt__lift_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct lift_adt_funtype_13_s *, lift_adt__lift_adt_t);
        void (* rptr)(struct lift_adt_funtype_13_s *);
        struct lift_adt_funtype_13_s * (* cptr)(struct lift_adt_funtype_13_s *);};
typedef struct lift_adt_funtype_13_ftbl_s * lift_adt_funtype_13_ftbl_t;

struct lift_adt_funtype_13_hashentry_s {uint32_t keyhash; lift_adt__lift_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct lift_adt_funtype_13_hashentry_s lift_adt_funtype_13_hashentry_t;

struct lift_adt_funtype_13_htbl_s {uint32_t size; uint32_t num_entries; lift_adt_funtype_13_hashentry_t * data;}; 
typedef struct lift_adt_funtype_13_htbl_s * lift_adt_funtype_13_htbl_t;

struct lift_adt_funtype_13_s {uint32_t count;
        lift_adt_funtype_13_ftbl_t ftbl;
        lift_adt_funtype_13_htbl_t htbl;};
typedef struct lift_adt_funtype_13_s * lift_adt_funtype_13_t;

extern void release_lift_adt_funtype_13(lift_adt_funtype_13_t x, type_actual_t lift_adt__T);

extern lift_adt_funtype_13_t copy_lift_adt_funtype_13(lift_adt_funtype_13_t x);

extern bool_t equal_lift_adt_funtype_13(lift_adt_funtype_13_t x, lift_adt_funtype_13_t y, type_actual_t lift_adt__T);

extern char* json_lift_adt_funtype_13(lift_adt_funtype_13_t x, type_actual_t lift_adt__T);


//reduce_ordinal

struct lift_adt_funtype_14_s;
        typedef struct lift_adt_funtype_14_s * lift_adt_funtype_14_t;

struct lift_adt_funtype_14_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct lift_adt_funtype_14_s *, lift_adt__T_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct lift_adt_funtype_14_s *, lift_adt__T_t);
        void (* rptr)(struct lift_adt_funtype_14_s *);
        struct lift_adt_funtype_14_s * (* cptr)(struct lift_adt_funtype_14_s *);};
typedef struct lift_adt_funtype_14_ftbl_s * lift_adt_funtype_14_ftbl_t;

struct lift_adt_funtype_14_hashentry_s {uint32_t keyhash; lift_adt__T_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct lift_adt_funtype_14_hashentry_s lift_adt_funtype_14_hashentry_t;

struct lift_adt_funtype_14_htbl_s {uint32_t size; uint32_t num_entries; lift_adt_funtype_14_hashentry_t * data;}; 
typedef struct lift_adt_funtype_14_htbl_s * lift_adt_funtype_14_htbl_t;

struct lift_adt_funtype_14_s {uint32_t count;
        lift_adt_funtype_14_ftbl_t ftbl;
        lift_adt_funtype_14_htbl_t htbl;};
typedef struct lift_adt_funtype_14_s * lift_adt_funtype_14_t;

extern void release_lift_adt_funtype_14(lift_adt_funtype_14_t x, type_actual_t lift_adt__T);

extern lift_adt_funtype_14_t copy_lift_adt_funtype_14(lift_adt_funtype_14_t x);

extern bool_t equal_lift_adt_funtype_14(lift_adt_funtype_14_t x, lift_adt_funtype_14_t y, type_actual_t lift_adt__T);

extern char* json_lift_adt_funtype_14(lift_adt_funtype_14_t x, type_actual_t lift_adt__T);




struct lift_adt_closure_15_s;
        typedef struct lift_adt_closure_15_s * lift_adt_closure_15_t;

struct lift_adt_closure_15_s {uint32_t count;
         lift_adt_funtype_13_ftbl_t ftbl;
         lift_adt_funtype_13_htbl_t htbl;
        type_actual_t fvar_1;
        lift_adt_funtype_14_t fvar_2;
        ordstruct_adt__ordstruct_adt_t fvar_3; type_actual_t lift_adt__T;};

ordstruct_adt__ordstruct_adt_t f_lift_adt_closure_15(struct lift_adt_closure_15_s * closure, lift_adt__lift_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_lift_adt_closure_15(struct lift_adt_closure_15_s * closure, lift_adt__lift_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_lift_adt_closure_15(lift_adt__lift_adt_t ivar_5, type_actual_t lift_adt__T, lift_adt_funtype_14_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1);

lift_adt_closure_15_t new_lift_adt_closure_15(void);

void release_lift_adt_closure_15(lift_adt_funtype_13_t closure, type_actual_t lift_adt__T);

lift_adt_closure_15_t copy_lift_adt_closure_15(lift_adt_closure_15_t x);


//REDUCE_ordinal

struct lift_adt_funtype_16_s;
        typedef struct lift_adt_funtype_16_s * lift_adt_funtype_16_t;

struct lift_adt_funtype_16_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct lift_adt_funtype_16_s *, lift_adt_record_10_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct lift_adt_funtype_16_s *, lift_adt__T_t, lift_adt__lift_adt_t);
        void (* rptr)(struct lift_adt_funtype_16_s *);
        struct lift_adt_funtype_16_s * (* cptr)(struct lift_adt_funtype_16_s *);};
typedef struct lift_adt_funtype_16_ftbl_s * lift_adt_funtype_16_ftbl_t;

struct lift_adt_funtype_16_hashentry_s {uint32_t keyhash; lift_adt_record_10_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct lift_adt_funtype_16_hashentry_s lift_adt_funtype_16_hashentry_t;

struct lift_adt_funtype_16_htbl_s {uint32_t size; uint32_t num_entries; lift_adt_funtype_16_hashentry_t * data;}; 
typedef struct lift_adt_funtype_16_htbl_s * lift_adt_funtype_16_htbl_t;

struct lift_adt_funtype_16_s {uint32_t count;
        lift_adt_funtype_16_ftbl_t ftbl;
        lift_adt_funtype_16_htbl_t htbl;};
typedef struct lift_adt_funtype_16_s * lift_adt_funtype_16_t;

extern void release_lift_adt_funtype_16(lift_adt_funtype_16_t x, type_actual_t lift_adt__T);

extern lift_adt_funtype_16_t copy_lift_adt_funtype_16(lift_adt_funtype_16_t x);

extern bool_t equal_lift_adt_funtype_16(lift_adt_funtype_16_t x, lift_adt_funtype_16_t y, type_actual_t lift_adt__T);

extern char* json_lift_adt_funtype_16(lift_adt_funtype_16_t x, type_actual_t lift_adt__T);




struct lift_adt_closure_17_s;
        typedef struct lift_adt_closure_17_s * lift_adt_closure_17_t;

struct lift_adt_closure_17_s {uint32_t count;
         lift_adt_funtype_13_ftbl_t ftbl;
         lift_adt_funtype_13_htbl_t htbl;
        type_actual_t fvar_1;
        lift_adt_funtype_16_t fvar_2;
        lift_adt_funtype_13_t fvar_3; type_actual_t lift_adt__T;};

ordstruct_adt__ordstruct_adt_t f_lift_adt_closure_17(struct lift_adt_closure_17_s * closure, lift_adt__lift_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_lift_adt_closure_17(struct lift_adt_closure_17_s * closure, lift_adt__lift_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_lift_adt_closure_17(lift_adt__lift_adt_t ivar_6, type_actual_t lift_adt__T, lift_adt_funtype_16_t ivar_3, lift_adt_funtype_13_t ivar_1);

lift_adt_closure_17_t new_lift_adt_closure_17(void);

void release_lift_adt_closure_17(lift_adt_funtype_13_t closure, type_actual_t lift_adt__T);

lift_adt_closure_17_t copy_lift_adt_closure_17(lift_adt_closure_17_t x);



extern bool_t r_lift_adt__bottomp(lift_adt__lift_adt_t ivar_1);

extern bool_t r_lift_adt__upp(lift_adt__lift_adt_t ivar_1);

extern lift_adt__up_t update_lift_adt__lift_adt_down(lift_adt__lift_adt_t ivar_1, lift_adt__T_t ivar_3);

extern lift_adt__T_t lift_adt__lift_adt_down(lift_adt__lift_adt_t ivar_1);

extern lift_adt__lift_adt_t lift_adt__bottom(void);

extern lift_adt__lift_adt_t lift_adt__up(lift_adt__T_t ivar_2);

extern lift_adt_funtype_2_t lift_adt__lift_ord(type_actual_t lift_adt__T);

extern uint8_t lift_adt__ord(type_actual_t lift_adt__T, lift_adt__lift_adt_t ivar_1);

extern lift_adt_funtype_3_t lift_adt__every__1(type_actual_t lift_adt__T, lift_adt_funtype_4_t ivar_1);

extern bool_t lift_adt__every__2(type_actual_t lift_adt__T, lift_adt_funtype_4_t ivar_1, lift_adt__lift_adt_t ivar_3);

extern lift_adt_funtype_3_t lift_adt__some__1(type_actual_t lift_adt__T, lift_adt_funtype_4_t ivar_1);

extern bool_t lift_adt__some__2(type_actual_t lift_adt__T, lift_adt_funtype_4_t ivar_1, lift_adt__lift_adt_t ivar_3);

extern bool_t lift_adt__subterm(type_actual_t lift_adt__T, lift_adt__lift_adt_t ivar_1, lift_adt__lift_adt_t ivar_2);

extern bool_t lift_adt__doublelessp(type_actual_t lift_adt__T, lift_adt__lift_adt_t ivar_1, lift_adt__lift_adt_t ivar_2);

extern lift_adt_funtype_7_t lift_adt__reduce_nat(type_actual_t lift_adt__T, mpz_ptr_t ivar_1, lift_adt_funtype_8_t ivar_2);

extern lift_adt_funtype_7_t lift_adt__REDUCE_nat(type_actual_t lift_adt__T, lift_adt_funtype_7_t ivar_1, lift_adt_funtype_11_t ivar_3);

extern lift_adt_funtype_13_t lift_adt__reduce_ordinal(type_actual_t lift_adt__T, ordstruct_adt__ordstruct_adt_t ivar_1, lift_adt_funtype_14_t ivar_2);

extern lift_adt_funtype_13_t lift_adt__REDUCE_ordinal(type_actual_t lift_adt__T, lift_adt_funtype_13_t ivar_1, lift_adt_funtype_16_t ivar_3);
#endif