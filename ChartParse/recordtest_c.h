//Code generated using pvs2ir
#ifndef _recordtest_h 
#define _recordtest_h

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

#include "integertypes_c.h"

#include "exp2_c.h"

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

//cc -O3 -Wall -o recordtest -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/modulo_arithmetic_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c recordtest_c.c -lgmp 
//mkrec

struct recordtest__rec_s {
        uint32_t count; 
        uint8_t a;
        uint8_t b;
        mpz_t c;};
typedef struct recordtest__rec_s * recordtest__rec_t;

extern recordtest__rec_t new_recordtest__rec(void);

extern void release_recordtest__rec(recordtest__rec_t x);

extern recordtest__rec_t copy_recordtest__rec(recordtest__rec_t x);

extern bool_t equal_recordtest__rec(recordtest__rec_t x, recordtest__rec_t y);
extern char * json_recordtest__rec(recordtest__rec_t x);

typedef struct actual_recordtest__rec_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_recordtest__rec_t;
extern void release_recordtest__rec_ptr(pointer_t x, type_actual_t recordtest__rec);

extern bool_t equal_recordtest__rec_ptr(pointer_t x, pointer_t y, actual_recordtest__rec_t T);

extern char * json_recordtest__rec_ptr(pointer_t x,  actual_recordtest__rec_t T);

actual_recordtest__rec_t actual_recordtest__rec(void);

extern recordtest__rec_t update_recordtest__rec_a(recordtest__rec_t x, uint8_t v);

extern recordtest__rec_t update_recordtest__rec_b(recordtest__rec_t x, uint8_t v);

extern recordtest__rec_t update_recordtest__rec_c(recordtest__rec_t x, mpz_ptr_t v);


//mkrec2

struct recordtest_array_1_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct recordtest_array_1_s * recordtest_array_1_t;

extern recordtest_array_1_t new_recordtest_array_1(uint32_t size);

extern void release_recordtest_array_1(recordtest_array_1_t x);

extern recordtest_array_1_t copy_recordtest_array_1(recordtest_array_1_t x);

extern bool_t equal_recordtest_array_1(recordtest_array_1_t x, recordtest_array_1_t y);
extern char * json_recordtest_array_1(recordtest_array_1_t x);

typedef struct actual_recordtest_array_1_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_recordtest_array_1_t;
extern void release_recordtest_array_1_ptr(pointer_t x, type_actual_t recordtest_array_1);

extern bool_t equal_recordtest_array_1_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_recordtest_array_1_ptr(pointer_t x, type_actual_t T);

actual_recordtest_array_1_t actual_recordtest_array_1(void);

extern recordtest_array_1_t update_recordtest_array_1(recordtest_array_1_t x, uint32_t i, uint8_t v);

extern recordtest_array_1_t upgrade_recordtest_array_1(recordtest_array_1_t x, uint32_t i, uint8_t v);


//mkrec2

struct recordtest__rec2_s {
        uint32_t count; 
        uint8_t a;
        uint8_t b;
        recordtest_array_1_t c;
        uint8_t d;};
typedef struct recordtest__rec2_s * recordtest__rec2_t;

extern recordtest__rec2_t new_recordtest__rec2(void);

extern void release_recordtest__rec2(recordtest__rec2_t x);

extern recordtest__rec2_t copy_recordtest__rec2(recordtest__rec2_t x);

extern bool_t equal_recordtest__rec2(recordtest__rec2_t x, recordtest__rec2_t y);
extern char * json_recordtest__rec2(recordtest__rec2_t x);

typedef struct actual_recordtest__rec2_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_recordtest__rec2_t;
extern void release_recordtest__rec2_ptr(pointer_t x, type_actual_t recordtest__rec2);

extern bool_t equal_recordtest__rec2_ptr(pointer_t x, pointer_t y, actual_recordtest__rec2_t T);

extern char * json_recordtest__rec2_ptr(pointer_t x,  actual_recordtest__rec2_t T);

actual_recordtest__rec2_t actual_recordtest__rec2(void);

extern recordtest__rec2_t update_recordtest__rec2_a(recordtest__rec2_t x, uint8_t v);

extern recordtest__rec2_t update_recordtest__rec2_b(recordtest__rec2_t x, uint8_t v);

extern recordtest__rec2_t update_recordtest__rec2_c(recordtest__rec2_t x, recordtest_array_1_t v);

extern recordtest__rec2_t update_recordtest__rec2_d(recordtest__rec2_t x, uint8_t v);


//mkrec2

struct recordtest_funtype_3_s;
        typedef struct recordtest_funtype_3_s * recordtest_funtype_3_t;

struct recordtest_funtype_3_ftbl_s {mpz_ptr_t (* fptr)(struct recordtest_funtype_3_s *, uint8_t);
        mpz_ptr_t (* mptr)(struct recordtest_funtype_3_s *, uint8_t);
        void (* rptr)(struct recordtest_funtype_3_s *);
        struct recordtest_funtype_3_s * (* cptr)(struct recordtest_funtype_3_s *);};
typedef struct recordtest_funtype_3_ftbl_s * recordtest_funtype_3_ftbl_t;

struct recordtest_funtype_3_hashentry_s {uint32_t keyhash; uint8_t key; mpz_t value;}; 
typedef struct recordtest_funtype_3_hashentry_s recordtest_funtype_3_hashentry_t;

struct recordtest_funtype_3_htbl_s {uint32_t size; uint32_t num_entries; recordtest_funtype_3_hashentry_t * data;}; 
typedef struct recordtest_funtype_3_htbl_s * recordtest_funtype_3_htbl_t;

struct recordtest_funtype_3_s {uint32_t count;
        recordtest_funtype_3_ftbl_t ftbl;
        recordtest_funtype_3_htbl_t htbl;};
typedef struct recordtest_funtype_3_s * recordtest_funtype_3_t;

extern void release_recordtest_funtype_3(recordtest_funtype_3_t x);

extern recordtest_funtype_3_t copy_recordtest_funtype_3(recordtest_funtype_3_t x);

extern uint32_t lookup_recordtest_funtype_3(recordtest_funtype_3_htbl_t htbl, uint8_t i, uint32_t ihash);

extern recordtest_funtype_3_t dupdate_recordtest_funtype_3(recordtest_funtype_3_t a, uint8_t i, mpz_ptr_t v);

extern recordtest_funtype_3_t update_recordtest_funtype_3(recordtest_funtype_3_t a, uint8_t i, mpz_ptr_t v);

extern bool_t equal_recordtest_funtype_3(recordtest_funtype_3_t x, recordtest_funtype_3_t y);

extern char* json_recordtest_funtype_3(recordtest_funtype_3_t x);




struct recordtest_closure_4_s;
        typedef struct recordtest_closure_4_s * recordtest_closure_4_t;

struct recordtest_closure_4_s {uint32_t count;
         recordtest_funtype_3_ftbl_t ftbl;
         recordtest_funtype_3_htbl_t htbl;
        uint8_t fvar_1;
        uint8_t fvar_2;};

uint8_t f_recordtest_closure_4(struct recordtest_closure_4_s * closure, uint8_t bvar);

uint8_t m_recordtest_closure_4(struct recordtest_closure_4_s * closure, uint8_t bvar);

extern uint8_t h_recordtest_closure_4(uint8_t ivar_12, uint8_t ivar_1, uint8_t ivar_8);

recordtest_closure_4_t new_recordtest_closure_4(void);

void release_recordtest_closure_4(recordtest_funtype_3_t closure);

recordtest_closure_4_t copy_recordtest_closure_4(recordtest_closure_4_t x);


//mkrec3

struct recordtest_array_5_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         recordtest_array_1_t elems[]; };
typedef struct recordtest_array_5_s * recordtest_array_5_t;

extern recordtest_array_5_t new_recordtest_array_5(uint32_t size);

extern void release_recordtest_array_5(recordtest_array_5_t x);

extern recordtest_array_5_t copy_recordtest_array_5(recordtest_array_5_t x);

extern bool_t equal_recordtest_array_5(recordtest_array_5_t x, recordtest_array_5_t y);
extern char * json_recordtest_array_5(recordtest_array_5_t x);

typedef struct actual_recordtest_array_5_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_recordtest_array_5_t;
extern void release_recordtest_array_5_ptr(pointer_t x, type_actual_t recordtest_array_5);

extern bool_t equal_recordtest_array_5_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_recordtest_array_5_ptr(pointer_t x, type_actual_t T);

actual_recordtest_array_5_t actual_recordtest_array_5(void);

extern recordtest_array_5_t update_recordtest_array_5(recordtest_array_5_t x, uint32_t i, recordtest_array_1_t v);

extern recordtest_array_5_t upgrade_recordtest_array_5(recordtest_array_5_t x, uint32_t i, recordtest_array_1_t v);


//mkrec3

struct recordtest__rec3_s {
        uint32_t count; 
        uint8_t a;
        recordtest_array_1_t b;
        recordtest_array_5_t c;};
typedef struct recordtest__rec3_s * recordtest__rec3_t;

extern recordtest__rec3_t new_recordtest__rec3(void);

extern void release_recordtest__rec3(recordtest__rec3_t x);

extern recordtest__rec3_t copy_recordtest__rec3(recordtest__rec3_t x);

extern bool_t equal_recordtest__rec3(recordtest__rec3_t x, recordtest__rec3_t y);
extern char * json_recordtest__rec3(recordtest__rec3_t x);

typedef struct actual_recordtest__rec3_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_recordtest__rec3_t;
extern void release_recordtest__rec3_ptr(pointer_t x, type_actual_t recordtest__rec3);

extern bool_t equal_recordtest__rec3_ptr(pointer_t x, pointer_t y, actual_recordtest__rec3_t T);

extern char * json_recordtest__rec3_ptr(pointer_t x,  actual_recordtest__rec3_t T);

actual_recordtest__rec3_t actual_recordtest__rec3(void);

extern recordtest__rec3_t update_recordtest__rec3_a(recordtest__rec3_t x, uint8_t v);

extern recordtest__rec3_t update_recordtest__rec3_b(recordtest__rec3_t x, recordtest_array_1_t v);

extern recordtest__rec3_t update_recordtest__rec3_c(recordtest__rec3_t x, recordtest_array_5_t v);


//mkrec3

struct recordtest_funtype_7_s;
        typedef struct recordtest_funtype_7_s * recordtest_funtype_7_t;

struct recordtest_funtype_7_ftbl_s {uint8_t (* fptr)(struct recordtest_funtype_7_s *, uint8_t);
        uint8_t (* mptr)(struct recordtest_funtype_7_s *, uint8_t);
        void (* rptr)(struct recordtest_funtype_7_s *);
        struct recordtest_funtype_7_s * (* cptr)(struct recordtest_funtype_7_s *);};
typedef struct recordtest_funtype_7_ftbl_s * recordtest_funtype_7_ftbl_t;

struct recordtest_funtype_7_hashentry_s {uint32_t keyhash; uint8_t key; uint8_t value;}; 
typedef struct recordtest_funtype_7_hashentry_s recordtest_funtype_7_hashentry_t;

struct recordtest_funtype_7_htbl_s {uint32_t size; uint32_t num_entries; recordtest_funtype_7_hashentry_t * data;}; 
typedef struct recordtest_funtype_7_htbl_s * recordtest_funtype_7_htbl_t;

struct recordtest_funtype_7_s {uint32_t count;
        recordtest_funtype_7_ftbl_t ftbl;
        recordtest_funtype_7_htbl_t htbl;};
typedef struct recordtest_funtype_7_s * recordtest_funtype_7_t;

extern void release_recordtest_funtype_7(recordtest_funtype_7_t x);

extern recordtest_funtype_7_t copy_recordtest_funtype_7(recordtest_funtype_7_t x);

extern uint32_t lookup_recordtest_funtype_7(recordtest_funtype_7_htbl_t htbl, uint8_t i, uint32_t ihash);

extern recordtest_funtype_7_t dupdate_recordtest_funtype_7(recordtest_funtype_7_t a, uint8_t i, uint8_t v);

extern recordtest_funtype_7_t update_recordtest_funtype_7(recordtest_funtype_7_t a, uint8_t i, uint8_t v);

extern bool_t equal_recordtest_funtype_7(recordtest_funtype_7_t x, recordtest_funtype_7_t y);

extern char* json_recordtest_funtype_7(recordtest_funtype_7_t x);


//mkrec3

struct recordtest_funtype_8_s;
        typedef struct recordtest_funtype_8_s * recordtest_funtype_8_t;

struct recordtest_funtype_8_ftbl_s {recordtest_funtype_7_t (* fptr)(struct recordtest_funtype_8_s *, uint8_t);
        recordtest_funtype_7_t (* mptr)(struct recordtest_funtype_8_s *, uint8_t);
        void (* rptr)(struct recordtest_funtype_8_s *);
        struct recordtest_funtype_8_s * (* cptr)(struct recordtest_funtype_8_s *);};
typedef struct recordtest_funtype_8_ftbl_s * recordtest_funtype_8_ftbl_t;

struct recordtest_funtype_8_hashentry_s {uint32_t keyhash; uint8_t key; recordtest_funtype_7_t value;}; 
typedef struct recordtest_funtype_8_hashentry_s recordtest_funtype_8_hashentry_t;

struct recordtest_funtype_8_htbl_s {uint32_t size; uint32_t num_entries; recordtest_funtype_8_hashentry_t * data;}; 
typedef struct recordtest_funtype_8_htbl_s * recordtest_funtype_8_htbl_t;

struct recordtest_funtype_8_s {uint32_t count;
        recordtest_funtype_8_ftbl_t ftbl;
        recordtest_funtype_8_htbl_t htbl;};
typedef struct recordtest_funtype_8_s * recordtest_funtype_8_t;

extern void release_recordtest_funtype_8(recordtest_funtype_8_t x);

extern recordtest_funtype_8_t copy_recordtest_funtype_8(recordtest_funtype_8_t x);

extern uint32_t lookup_recordtest_funtype_8(recordtest_funtype_8_htbl_t htbl, uint8_t i, uint32_t ihash);

extern recordtest_funtype_8_t dupdate_recordtest_funtype_8(recordtest_funtype_8_t a, uint8_t i, recordtest_funtype_7_t v);

extern recordtest_funtype_8_t update_recordtest_funtype_8(recordtest_funtype_8_t a, uint8_t i, recordtest_funtype_7_t v);

extern bool_t equal_recordtest_funtype_8(recordtest_funtype_8_t x, recordtest_funtype_8_t y);

extern char* json_recordtest_funtype_8(recordtest_funtype_8_t x);




struct recordtest_closure_9_s;
        typedef struct recordtest_closure_9_s * recordtest_closure_9_t;

struct recordtest_closure_9_s {uint32_t count;
         recordtest_funtype_8_ftbl_t ftbl;
         recordtest_funtype_8_htbl_t htbl;
        uint8_t fvar_1;
        recordtest_array_1_t fvar_2;
        uint8_t fvar_3;
        recordtest_array_1_t fvar_4;};

recordtest_array_1_t f_recordtest_closure_9(struct recordtest_closure_9_s * closure, uint8_t bvar);

recordtest_array_1_t m_recordtest_closure_9(struct recordtest_closure_9_s * closure, uint8_t bvar);

extern recordtest_array_1_t h_recordtest_closure_9(uint8_t ivar_49, uint8_t ivar_27, recordtest_array_1_t ivar_2, uint8_t ivar_1, recordtest_array_1_t ivar_28);

recordtest_closure_9_t new_recordtest_closure_9(void);

void release_recordtest_closure_9(recordtest_funtype_8_t closure);

recordtest_closure_9_t copy_recordtest_closure_9(recordtest_closure_9_t x);



extern recordtest__rec_t recordtest__mkrec(uint8_t ivar_1);

extern recordtest__rec2_t recordtest__mkrec2(uint8_t ivar_1);

extern recordtest__rec3_t recordtest__mkrec3(uint8_t ivar_1);
#endif