//Code generated using pvs2ir
#ifndef _finite_sequences_h 
#define _finite_sequences_h

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

#include "real_defs_c.h"

//cc -O3 -Wall -o finite_sequences -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/finite_sequences_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c -lgmp 

typedef pointer_t finite_sequences__T_t;
//empty_seq

struct finite_sequences_funtype_0_s;
        typedef struct finite_sequences_funtype_0_s * finite_sequences_funtype_0_t;

struct finite_sequences_funtype_0_ftbl_s {finite_sequences__T_t (* fptr)(struct finite_sequences_funtype_0_s *, mpz_ptr_t);
        finite_sequences__T_t (* mptr)(struct finite_sequences_funtype_0_s *, mpz_ptr_t);
        void (* rptr)(struct finite_sequences_funtype_0_s *);
        struct finite_sequences_funtype_0_s * (* cptr)(struct finite_sequences_funtype_0_s *);};
typedef struct finite_sequences_funtype_0_ftbl_s * finite_sequences_funtype_0_ftbl_t;

struct finite_sequences_funtype_0_hashentry_s {uint32_t keyhash; mpz_ptr_t key; finite_sequences__T_t value;}; 
typedef struct finite_sequences_funtype_0_hashentry_s finite_sequences_funtype_0_hashentry_t;

struct finite_sequences_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; finite_sequences_funtype_0_hashentry_t * data;}; 
typedef struct finite_sequences_funtype_0_htbl_s * finite_sequences_funtype_0_htbl_t;

struct finite_sequences_funtype_0_s {uint32_t count;
        finite_sequences_funtype_0_ftbl_t ftbl;
        finite_sequences_funtype_0_htbl_t htbl;};
typedef struct finite_sequences_funtype_0_s * finite_sequences_funtype_0_t;

extern void release_finite_sequences_funtype_0(finite_sequences_funtype_0_t x, type_actual_t finite_sequences__T);

extern finite_sequences_funtype_0_t copy_finite_sequences_funtype_0(finite_sequences_funtype_0_t x);

extern uint32_t lookup_finite_sequences_funtype_0(finite_sequences_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

extern finite_sequences_funtype_0_t dupdate_finite_sequences_funtype_0(finite_sequences_funtype_0_t a, mpz_ptr_t i, finite_sequences__T_t v, type_actual_t finite_sequences__T);

extern finite_sequences_funtype_0_t update_finite_sequences_funtype_0(finite_sequences_funtype_0_t a, mpz_ptr_t i, finite_sequences__T_t v, type_actual_t finite_sequences__T);

extern bool_t equal_finite_sequences_funtype_0(finite_sequences_funtype_0_t x, finite_sequences_funtype_0_t y, type_actual_t finite_sequences__T);

extern char* json_finite_sequences_funtype_0(finite_sequences_funtype_0_t x, type_actual_t finite_sequences__T);


//empty_seq

struct finite_sequences__finseq_s {
        uint32_t count; 
        mpz_t length;
        finite_sequences_funtype_0_t seq;};
typedef struct finite_sequences__finseq_s * finite_sequences__finseq_t;

extern finite_sequences__finseq_t new_finite_sequences__finseq(void);

extern void release_finite_sequences__finseq(finite_sequences__finseq_t x, type_actual_t finite_sequences__T);

extern finite_sequences__finseq_t copy_finite_sequences__finseq(finite_sequences__finseq_t x);

extern bool_t equal_finite_sequences__finseq(finite_sequences__finseq_t x, finite_sequences__finseq_t y, type_actual_t finite_sequences__T);
extern char * json_finite_sequences__finseq(finite_sequences__finseq_t x, type_actual_t finite_sequences__T);

typedef struct actual_finite_sequences__finseq_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t finite_sequences__T;} * actual_finite_sequences__finseq_t;
extern void release_finite_sequences__finseq_ptr(pointer_t x, type_actual_t finite_sequences__finseq);

extern bool_t equal_finite_sequences__finseq_ptr(pointer_t x, pointer_t y, actual_finite_sequences__finseq_t T);

extern char * json_finite_sequences__finseq_ptr(pointer_t x,  actual_finite_sequences__finseq_t T);

actual_finite_sequences__finseq_t actual_finite_sequences__finseq(type_actual_t finite_sequences__T);

extern finite_sequences__finseq_t update_finite_sequences__finseq_length(finite_sequences__finseq_t x, mpz_ptr_t v);

extern finite_sequences__finseq_t update_finite_sequences__finseq_seq(finite_sequences__finseq_t x, finite_sequences_funtype_0_t v, type_actual_t finite_sequences__T);


//empty_seq

struct finite_sequences_funtype_2_s;
        typedef struct finite_sequences_funtype_2_s * finite_sequences_funtype_2_t;

struct finite_sequences_funtype_2_ftbl_s {finite_sequences__T_t (* fptr)(struct finite_sequences_funtype_2_s *, uint8_t);
        finite_sequences__T_t (* mptr)(struct finite_sequences_funtype_2_s *, uint8_t);
        void (* rptr)(struct finite_sequences_funtype_2_s *);
        struct finite_sequences_funtype_2_s * (* cptr)(struct finite_sequences_funtype_2_s *);};
typedef struct finite_sequences_funtype_2_ftbl_s * finite_sequences_funtype_2_ftbl_t;

struct finite_sequences_funtype_2_hashentry_s {uint32_t keyhash; uint8_t key; finite_sequences__T_t value;}; 
typedef struct finite_sequences_funtype_2_hashentry_s finite_sequences_funtype_2_hashentry_t;

struct finite_sequences_funtype_2_htbl_s {uint32_t size; uint32_t num_entries; finite_sequences_funtype_2_hashentry_t * data;}; 
typedef struct finite_sequences_funtype_2_htbl_s * finite_sequences_funtype_2_htbl_t;

struct finite_sequences_funtype_2_s {uint32_t count;
        finite_sequences_funtype_2_ftbl_t ftbl;
        finite_sequences_funtype_2_htbl_t htbl;};
typedef struct finite_sequences_funtype_2_s * finite_sequences_funtype_2_t;

extern void release_finite_sequences_funtype_2(finite_sequences_funtype_2_t x, type_actual_t finite_sequences__T);

extern finite_sequences_funtype_2_t copy_finite_sequences_funtype_2(finite_sequences_funtype_2_t x);

extern uint32_t lookup_finite_sequences_funtype_2(finite_sequences_funtype_2_htbl_t htbl, uint8_t i, uint32_t ihash);

extern finite_sequences_funtype_2_t dupdate_finite_sequences_funtype_2(finite_sequences_funtype_2_t a, uint8_t i, finite_sequences__T_t v, type_actual_t finite_sequences__T);

extern finite_sequences_funtype_2_t update_finite_sequences_funtype_2(finite_sequences_funtype_2_t a, uint8_t i, finite_sequences__T_t v, type_actual_t finite_sequences__T);

extern bool_t equal_finite_sequences_funtype_2(finite_sequences_funtype_2_t x, finite_sequences_funtype_2_t y, type_actual_t finite_sequences__T);

extern char* json_finite_sequences_funtype_2(finite_sequences_funtype_2_t x, type_actual_t finite_sequences__T);




struct finite_sequences_closure_3_s;
        typedef struct finite_sequences_closure_3_s * finite_sequences_closure_3_t;

struct finite_sequences_closure_3_s {uint32_t count;
         finite_sequences_funtype_2_ftbl_t ftbl;
         finite_sequences_funtype_2_htbl_t htbl;
        type_actual_t fvar_1; type_actual_t finite_sequences__T;};

finite_sequences__T_t f_finite_sequences_closure_3(struct finite_sequences_closure_3_s * closure, uint8_t bvar);

finite_sequences__T_t m_finite_sequences_closure_3(struct finite_sequences_closure_3_s * closure, uint8_t bvar);

extern finite_sequences__T_t h_finite_sequences_closure_3(uint8_t ivar_4, type_actual_t finite_sequences__T);

finite_sequences_closure_3_t new_finite_sequences_closure_3(void);

void release_finite_sequences_closure_3(finite_sequences_funtype_2_t closure, type_actual_t finite_sequences__T);

finite_sequences_closure_3_t copy_finite_sequences_closure_3(finite_sequences_closure_3_t x);




struct finite_sequences_closure_4_s;
        typedef struct finite_sequences_closure_4_s * finite_sequences_closure_4_t;

struct finite_sequences_closure_4_s {uint32_t count;
         finite_sequences_funtype_0_ftbl_t ftbl;
         finite_sequences_funtype_0_htbl_t htbl;
        mpz_t fvar_1;
        type_actual_t fvar_2;
        finite_sequences_funtype_2_t fvar_3; type_actual_t finite_sequences__T;};

finite_sequences__T_t f_finite_sequences_closure_4(struct finite_sequences_closure_4_s * closure, mpz_ptr_t bvar);

finite_sequences__T_t m_finite_sequences_closure_4(struct finite_sequences_closure_4_s * closure, mpz_ptr_t bvar);

extern finite_sequences__T_t h_finite_sequences_closure_4(mpz_ptr_t ivar_15, mpz_ptr_t ivar_1, type_actual_t finite_sequences__T, finite_sequences_funtype_2_t ivar_12);

finite_sequences_closure_4_t new_finite_sequences_closure_4(void);

void release_finite_sequences_closure_4(finite_sequences_funtype_0_t closure, type_actual_t finite_sequences__T);

finite_sequences_closure_4_t copy_finite_sequences_closure_4(finite_sequences_closure_4_t x);


//every

struct finite_sequences_funtype_5_s;
        typedef struct finite_sequences_funtype_5_s * finite_sequences_funtype_5_t;

struct finite_sequences_funtype_5_ftbl_s {bool_t (* fptr)(struct finite_sequences_funtype_5_s *, finite_sequences__finseq_t);
        bool_t (* mptr)(struct finite_sequences_funtype_5_s *, finite_sequences__finseq_t);
        void (* rptr)(struct finite_sequences_funtype_5_s *);
        struct finite_sequences_funtype_5_s * (* cptr)(struct finite_sequences_funtype_5_s *);};
typedef struct finite_sequences_funtype_5_ftbl_s * finite_sequences_funtype_5_ftbl_t;

struct finite_sequences_funtype_5_hashentry_s {uint32_t keyhash; finite_sequences__finseq_t key; bool_t value;}; 
typedef struct finite_sequences_funtype_5_hashentry_s finite_sequences_funtype_5_hashentry_t;

struct finite_sequences_funtype_5_htbl_s {uint32_t size; uint32_t num_entries; finite_sequences_funtype_5_hashentry_t * data;}; 
typedef struct finite_sequences_funtype_5_htbl_s * finite_sequences_funtype_5_htbl_t;

struct finite_sequences_funtype_5_s {uint32_t count;
        finite_sequences_funtype_5_ftbl_t ftbl;
        finite_sequences_funtype_5_htbl_t htbl;};
typedef struct finite_sequences_funtype_5_s * finite_sequences_funtype_5_t;

extern void release_finite_sequences_funtype_5(finite_sequences_funtype_5_t x, type_actual_t finite_sequences__T);

extern finite_sequences_funtype_5_t copy_finite_sequences_funtype_5(finite_sequences_funtype_5_t x);

extern bool_t equal_finite_sequences_funtype_5(finite_sequences_funtype_5_t x, finite_sequences_funtype_5_t y, type_actual_t finite_sequences__T);

extern char* json_finite_sequences_funtype_5(finite_sequences_funtype_5_t x, type_actual_t finite_sequences__T);


//every

struct finite_sequences_funtype_6_s;
        typedef struct finite_sequences_funtype_6_s * finite_sequences_funtype_6_t;

struct finite_sequences_funtype_6_ftbl_s {bool_t (* fptr)(struct finite_sequences_funtype_6_s *, finite_sequences__T_t);
        bool_t (* mptr)(struct finite_sequences_funtype_6_s *, finite_sequences__T_t);
        void (* rptr)(struct finite_sequences_funtype_6_s *);
        struct finite_sequences_funtype_6_s * (* cptr)(struct finite_sequences_funtype_6_s *);};
typedef struct finite_sequences_funtype_6_ftbl_s * finite_sequences_funtype_6_ftbl_t;

struct finite_sequences_funtype_6_hashentry_s {uint32_t keyhash; finite_sequences__T_t key; bool_t value;}; 
typedef struct finite_sequences_funtype_6_hashentry_s finite_sequences_funtype_6_hashentry_t;

struct finite_sequences_funtype_6_htbl_s {uint32_t size; uint32_t num_entries; finite_sequences_funtype_6_hashentry_t * data;}; 
typedef struct finite_sequences_funtype_6_htbl_s * finite_sequences_funtype_6_htbl_t;

struct finite_sequences_funtype_6_s {uint32_t count;
        finite_sequences_funtype_6_ftbl_t ftbl;
        finite_sequences_funtype_6_htbl_t htbl;};
typedef struct finite_sequences_funtype_6_s * finite_sequences_funtype_6_t;

extern void release_finite_sequences_funtype_6(finite_sequences_funtype_6_t x, type_actual_t finite_sequences__T);

extern finite_sequences_funtype_6_t copy_finite_sequences_funtype_6(finite_sequences_funtype_6_t x);

extern bool_t equal_finite_sequences_funtype_6(finite_sequences_funtype_6_t x, finite_sequences_funtype_6_t y, type_actual_t finite_sequences__T);

extern char* json_finite_sequences_funtype_6(finite_sequences_funtype_6_t x, type_actual_t finite_sequences__T);




struct finite_sequences_closure_7_s;
        typedef struct finite_sequences_closure_7_s * finite_sequences_closure_7_t;

struct finite_sequences_closure_7_s {uint32_t count;
         finite_sequences_funtype_5_ftbl_t ftbl;
         finite_sequences_funtype_5_htbl_t htbl; type_actual_t finite_sequences__T;};

bool_t f_finite_sequences_closure_7(struct finite_sequences_closure_7_s * closure, finite_sequences__finseq_t bvar);

bool_t m_finite_sequences_closure_7(struct finite_sequences_closure_7_s * closure, finite_sequences__finseq_t bvar);

extern bool_t h_finite_sequences_closure_7(finite_sequences__finseq_t ivar_4);

finite_sequences_closure_7_t new_finite_sequences_closure_7(void);

void release_finite_sequences_closure_7(finite_sequences_funtype_5_t closure, type_actual_t finite_sequences__T);

finite_sequences_closure_7_t copy_finite_sequences_closure_7(finite_sequences_closure_7_t x);




struct finite_sequences_closure_8_s;
        typedef struct finite_sequences_closure_8_s * finite_sequences_closure_8_t;

struct finite_sequences_closure_8_s {uint32_t count;
         finite_sequences_funtype_5_ftbl_t ftbl;
         finite_sequences_funtype_5_htbl_t htbl; type_actual_t finite_sequences__T;};

bool_t f_finite_sequences_closure_8(struct finite_sequences_closure_8_s * closure, finite_sequences__finseq_t bvar);

bool_t m_finite_sequences_closure_8(struct finite_sequences_closure_8_s * closure, finite_sequences__finseq_t bvar);

extern bool_t h_finite_sequences_closure_8(finite_sequences__finseq_t ivar_4);

finite_sequences_closure_8_t new_finite_sequences_closure_8(void);

void release_finite_sequences_closure_8(finite_sequences_funtype_5_t closure, type_actual_t finite_sequences__T);

finite_sequences_closure_8_t copy_finite_sequences_closure_8(finite_sequences_closure_8_t x);




struct finite_sequences_closure_9_s;
        typedef struct finite_sequences_closure_9_s * finite_sequences_closure_9_t;

struct finite_sequences_closure_9_s {uint32_t count;
         finite_sequences_funtype_0_ftbl_t ftbl;
         finite_sequences_funtype_0_htbl_t htbl;
        mpz_t fvar_1;
        mpz_t fvar_2;
        type_actual_t fvar_3;
        finite_sequences__finseq_t fvar_4;
        finite_sequences__finseq_t fvar_5; type_actual_t finite_sequences__T;};

finite_sequences__T_t f_finite_sequences_closure_9(struct finite_sequences_closure_9_s * closure, mpz_ptr_t bvar);

finite_sequences__T_t m_finite_sequences_closure_9(struct finite_sequences_closure_9_s * closure, mpz_ptr_t bvar);

extern finite_sequences__T_t h_finite_sequences_closure_9(mpz_ptr_t ivar_13, mpz_ptr_t ivar_5, mpz_ptr_t ivar_3, type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_2, finite_sequences__finseq_t ivar_1);

finite_sequences_closure_9_t new_finite_sequences_closure_9(void);

void release_finite_sequences_closure_9(finite_sequences_funtype_0_t closure, type_actual_t finite_sequences__T);

finite_sequences_closure_9_t copy_finite_sequences_closure_9(finite_sequences_closure_9_t x);


//^

struct finite_sequences_record_10_s {
        uint32_t count; 
        mpz_t project_1;
        mpz_t project_2;};
typedef struct finite_sequences_record_10_s * finite_sequences_record_10_t;

extern finite_sequences_record_10_t new_finite_sequences_record_10(void);

extern void release_finite_sequences_record_10(finite_sequences_record_10_t x, type_actual_t finite_sequences__T);

extern finite_sequences_record_10_t copy_finite_sequences_record_10(finite_sequences_record_10_t x);

extern bool_t equal_finite_sequences_record_10(finite_sequences_record_10_t x, finite_sequences_record_10_t y, type_actual_t finite_sequences__T);
extern char * json_finite_sequences_record_10(finite_sequences_record_10_t x, type_actual_t finite_sequences__T);

typedef struct actual_finite_sequences_record_10_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t finite_sequences__T;} * actual_finite_sequences_record_10_t;
extern void release_finite_sequences_record_10_ptr(pointer_t x, type_actual_t finite_sequences_record_10);

extern bool_t equal_finite_sequences_record_10_ptr(pointer_t x, pointer_t y, actual_finite_sequences_record_10_t T);

extern char * json_finite_sequences_record_10_ptr(pointer_t x,  actual_finite_sequences_record_10_t T);

actual_finite_sequences_record_10_t actual_finite_sequences_record_10(type_actual_t finite_sequences__T);

extern finite_sequences_record_10_t update_finite_sequences_record_10_project_1(finite_sequences_record_10_t x, mpz_ptr_t v);

extern finite_sequences_record_10_t update_finite_sequences_record_10_project_2(finite_sequences_record_10_t x, mpz_ptr_t v);




struct finite_sequences_closure_11_s;
        typedef struct finite_sequences_closure_11_s * finite_sequences_closure_11_t;

struct finite_sequences_closure_11_s {uint32_t count;
         finite_sequences_funtype_0_ftbl_t ftbl;
         finite_sequences_funtype_0_htbl_t htbl;
        mpz_t fvar_1;
        mpz_t fvar_2;
        type_actual_t fvar_3;
        finite_sequences__finseq_t fvar_4; type_actual_t finite_sequences__T;};

finite_sequences__T_t f_finite_sequences_closure_11(struct finite_sequences_closure_11_s * closure, mpz_ptr_t bvar);

finite_sequences__T_t m_finite_sequences_closure_11(struct finite_sequences_closure_11_s * closure, mpz_ptr_t bvar);

extern finite_sequences__T_t h_finite_sequences_closure_11(mpz_ptr_t ivar_42, mpz_ptr_t ivar_19, mpz_ptr_t ivar_3, type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1);

finite_sequences_closure_11_t new_finite_sequences_closure_11(void);

void release_finite_sequences_closure_11(finite_sequences_funtype_0_t closure, type_actual_t finite_sequences__T);

finite_sequences_closure_11_t copy_finite_sequences_closure_11(finite_sequences_closure_11_t x);




struct finite_sequences_closure_12_s;
        typedef struct finite_sequences_closure_12_s * finite_sequences_closure_12_t;

struct finite_sequences_closure_12_s {uint32_t count;
         finite_sequences_funtype_0_ftbl_t ftbl;
         finite_sequences_funtype_0_htbl_t htbl;
        mpz_t fvar_1;
        mpz_t fvar_2;
        type_actual_t fvar_3;
        finite_sequences__finseq_t fvar_4; type_actual_t finite_sequences__T;};

finite_sequences__T_t f_finite_sequences_closure_12(struct finite_sequences_closure_12_s * closure, mpz_ptr_t bvar);

finite_sequences__T_t m_finite_sequences_closure_12(struct finite_sequences_closure_12_s * closure, mpz_ptr_t bvar);

extern finite_sequences__T_t h_finite_sequences_closure_12(mpz_ptr_t ivar_39, mpz_ptr_t ivar_19, mpz_ptr_t ivar_3, type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1);

finite_sequences_closure_12_t new_finite_sequences_closure_12(void);

void release_finite_sequences_closure_12(finite_sequences_funtype_0_t closure, type_actual_t finite_sequences__T);

finite_sequences_closure_12_t copy_finite_sequences_closure_12(finite_sequences_closure_12_t x);



extern finite_sequences__finseq_t finite_sequences__empty_seq(type_actual_t finite_sequences__T);

extern finite_sequences_funtype_0_t finite_sequences__finseq_appl(type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1);

extern finite_sequences_funtype_5_t finite_sequences__every(type_actual_t finite_sequences__T, finite_sequences_funtype_6_t ivar_1);

extern finite_sequences_funtype_5_t finite_sequences__some(type_actual_t finite_sequences__T, finite_sequences_funtype_6_t ivar_1);

extern finite_sequences__finseq_t finite_sequences__oh(type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1, finite_sequences__finseq_t ivar_2);

extern finite_sequences__finseq_t finite_sequences__caret(type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1, finite_sequences_record_10_t ivar_2);

extern finite_sequences__finseq_t finite_sequences__doublecaret(type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1, finite_sequences_record_10_t ivar_2);

extern finite_sequences__T_t finite_sequences__extract1(type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1);
#endif