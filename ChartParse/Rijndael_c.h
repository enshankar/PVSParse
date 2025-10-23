//Code generated using pvs2ir
#ifndef _Rijndael_h 
#define _Rijndael_h

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

#include "bytestrings_c.h"

#include "gen_strings_c.h"

#include "strings_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "finite_sequences_c.h"

#include "integer_bv_ops_c.h"

#include "bv_c.h"

#include "bit_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "bytevectors_c.h"

#include "hex_c.h"

//cc -O3 -Wall -o Rijndael -I /Users/e21660/shankar/pvs.git/src/groundeval/ /Users/e21660/shankar/pvs.git/src/groundeval/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/finite_sequences_c.c /Users/e21660/shankar/pvs.git/lib/integer_bv_ops_c.c /Users/e21660/shankar/pvs.git/lib/bv_c.c /Users/e21660/shankar/pvs.git/lib/bit_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c Rijndael_c.c bytevectors_c.c hex_c.c -lgmp 

struct Rijndael_record_0_s {
        uint32_t count; 
        uint8_t project_1;
        uint8_t project_2;};
typedef struct Rijndael_record_0_s * Rijndael_record_0_t;

extern Rijndael_record_0_t new_Rijndael_record_0(void);

extern void release_Rijndael_record_0(Rijndael_record_0_t x);

extern Rijndael_record_0_t copy_Rijndael_record_0(Rijndael_record_0_t x);

extern bool_t equal_Rijndael_record_0(Rijndael_record_0_t x, Rijndael_record_0_t y);
typedef struct actual_Rijndael_record_0_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_Rijndael_record_0_t;

void release_Rijndael_record_0_ptr(pointer_t x, type_actual_t Rijndael_record_0);
extern bool_t equal_Rijndael_record_0_ptr(pointer_t x, pointer_t y, actual_Rijndael_record_0_t T);

actual_Rijndael_record_0_t actual_Rijndael_record_0(void);

extern Rijndael_record_0_t update_Rijndael_record_0_project_1(Rijndael_record_0_t x, uint8_t v);

extern Rijndael_record_0_t update_Rijndael_record_0_project_2(Rijndael_record_0_t x, uint8_t v);



struct Rijndael_funtype_1_s;
        typedef struct Rijndael_funtype_1_s * Rijndael_funtype_1_t;

struct Rijndael_funtype_1_ftbl_s {uint8_t (* fptr)(struct Rijndael_funtype_1_s *, Rijndael_record_0_t);
        uint8_t (* mptr)(struct Rijndael_funtype_1_s *, uint8_t, uint8_t);
        void (* rptr)(struct Rijndael_funtype_1_s *);
        struct Rijndael_funtype_1_s * (* cptr)(struct Rijndael_funtype_1_s *);};
typedef struct Rijndael_funtype_1_ftbl_s * Rijndael_funtype_1_ftbl_t;

struct Rijndael_funtype_1_hashentry_s {uint32_t keyhash; Rijndael_record_0_t key; uint8_t value;}; 
typedef struct Rijndael_funtype_1_hashentry_s Rijndael_funtype_1_hashentry_t;

struct Rijndael_funtype_1_htbl_s {uint32_t size; uint32_t num_entries; Rijndael_funtype_1_hashentry_t * data;}; 
typedef struct Rijndael_funtype_1_htbl_s * Rijndael_funtype_1_htbl_t;

struct Rijndael_funtype_1_s {uint32_t count;
        Rijndael_funtype_1_ftbl_t ftbl;
        Rijndael_funtype_1_htbl_t htbl;};
typedef struct Rijndael_funtype_1_s * Rijndael_funtype_1_t;

extern void release_Rijndael_funtype_1(Rijndael_funtype_1_t x);

extern Rijndael_funtype_1_t copy_Rijndael_funtype_1(Rijndael_funtype_1_t x);

extern bool_t equal_Rijndael_funtype_1(Rijndael_funtype_1_t x, Rijndael_funtype_1_t y);



struct Rijndael_array_2_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct Rijndael_array_2_s * Rijndael_array_2_t;

extern Rijndael_array_2_t new_Rijndael_array_2(uint32_t size);

extern void release_Rijndael_array_2(Rijndael_array_2_t x);

extern Rijndael_array_2_t copy_Rijndael_array_2(Rijndael_array_2_t x);

extern bool_t equal_Rijndael_array_2(Rijndael_array_2_t x, Rijndael_array_2_t y);
typedef struct actual_Rijndael_array_2_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_Rijndael_array_2_t;

void release_Rijndael_array_2_ptr(pointer_t x, type_actual_t Rijndael_array_2);
extern bool_t equal_Rijndael_array_2_ptr(pointer_t x, pointer_t y, type_actual_t T);

actual_Rijndael_array_2_t actual_Rijndael_array_2(void);

extern Rijndael_array_2_t update_Rijndael_array_2(Rijndael_array_2_t x, uint32_t i, uint8_t v);

extern Rijndael_array_2_t upgrade_Rijndael_array_2(Rijndael_array_2_t x, uint32_t i, uint8_t v);




struct Rijndael_closure_3_s;
        typedef struct Rijndael_closure_3_s * Rijndael_closure_3_t;

struct Rijndael_closure_3_s {uint32_t count;
         Rijndael_funtype_1_ftbl_t ftbl;
         Rijndael_funtype_1_htbl_t htbl;
        Rijndael_array_2_t fvar_1;};

uint8_t f_Rijndael_closure_3(struct Rijndael_closure_3_s * closure, Rijndael_record_0_t bvar);

uint8_t m_Rijndael_closure_3(struct Rijndael_closure_3_s * closure, uint8_t bvar_1, uint8_t bvar_2);

extern uint8_t h_Rijndael_closure_3(uint8_t ivar_6, uint8_t ivar_7, Rijndael_array_2_t ivar_3);

extern Rijndael_closure_3_t new_Rijndael_closure_3(void);

extern void release_Rijndael_closure_3(Rijndael_funtype_1_t closure);

extern Rijndael_closure_3_t copy_Rijndael_closure_3(Rijndael_closure_3_t x);



struct Rijndael_funtype_4_s;
        typedef struct Rijndael_funtype_4_s * Rijndael_funtype_4_t;

struct Rijndael_funtype_4_ftbl_s {uint32_t (* fptr)(struct Rijndael_funtype_4_s *, mpz_ptr_t);
        uint32_t (* mptr)(struct Rijndael_funtype_4_s *, mpz_ptr_t);
        void (* rptr)(struct Rijndael_funtype_4_s *);
        struct Rijndael_funtype_4_s * (* cptr)(struct Rijndael_funtype_4_s *);};
typedef struct Rijndael_funtype_4_ftbl_s * Rijndael_funtype_4_ftbl_t;

struct Rijndael_funtype_4_hashentry_s {uint32_t keyhash; mpz_ptr_t key; uint32_t value;}; 
typedef struct Rijndael_funtype_4_hashentry_s Rijndael_funtype_4_hashentry_t;

struct Rijndael_funtype_4_htbl_s {uint32_t size; uint32_t num_entries; Rijndael_funtype_4_hashentry_t * data;}; 
typedef struct Rijndael_funtype_4_htbl_s * Rijndael_funtype_4_htbl_t;

struct Rijndael_funtype_4_s {uint32_t count;
        Rijndael_funtype_4_ftbl_t ftbl;
        Rijndael_funtype_4_htbl_t htbl;};
typedef struct Rijndael_funtype_4_s * Rijndael_funtype_4_t;

extern void release_Rijndael_funtype_4(Rijndael_funtype_4_t x);

extern Rijndael_funtype_4_t copy_Rijndael_funtype_4(Rijndael_funtype_4_t x);

uint32_t lookup_Rijndael_funtype_4(Rijndael_funtype_4_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

Rijndael_funtype_4_t dupdate_Rijndael_funtype_4(Rijndael_funtype_4_t a, mpz_ptr_t i, uint32_t v);

extern Rijndael_funtype_4_t update_Rijndael_funtype_4(Rijndael_funtype_4_t a, mpz_ptr_t i, uint32_t v);

extern bool_t equal_Rijndael_funtype_4(Rijndael_funtype_4_t x, Rijndael_funtype_4_t y);



struct Rijndael_record_5_s {
        uint32_t count; 
        mpz_t length;
        Rijndael_funtype_4_t seq;};
typedef struct Rijndael_record_5_s * Rijndael_record_5_t;

extern Rijndael_record_5_t new_Rijndael_record_5(void);

extern void release_Rijndael_record_5(Rijndael_record_5_t x);

extern Rijndael_record_5_t copy_Rijndael_record_5(Rijndael_record_5_t x);

extern bool_t equal_Rijndael_record_5(Rijndael_record_5_t x, Rijndael_record_5_t y);
typedef struct actual_Rijndael_record_5_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_Rijndael_record_5_t;

void release_Rijndael_record_5_ptr(pointer_t x, type_actual_t Rijndael_record_5);
extern bool_t equal_Rijndael_record_5_ptr(pointer_t x, pointer_t y, actual_Rijndael_record_5_t T);

actual_Rijndael_record_5_t actual_Rijndael_record_5(void);

extern Rijndael_record_5_t update_Rijndael_record_5_length(Rijndael_record_5_t x, mpz_ptr_t v);

extern Rijndael_record_5_t update_Rijndael_record_5_seq(Rijndael_record_5_t x, Rijndael_funtype_4_t v);



struct Rijndael_funtype_6_s;
        typedef struct Rijndael_funtype_6_s * Rijndael_funtype_6_t;

struct Rijndael_funtype_6_ftbl_s {uint8_t (* fptr)(struct Rijndael_funtype_6_s *, uint8_t);
        uint8_t (* mptr)(struct Rijndael_funtype_6_s *, uint8_t);
        void (* rptr)(struct Rijndael_funtype_6_s *);
        struct Rijndael_funtype_6_s * (* cptr)(struct Rijndael_funtype_6_s *);};
typedef struct Rijndael_funtype_6_ftbl_s * Rijndael_funtype_6_ftbl_t;

struct Rijndael_funtype_6_hashentry_s {uint32_t keyhash; uint8_t key; uint8_t value;}; 
typedef struct Rijndael_funtype_6_hashentry_s Rijndael_funtype_6_hashentry_t;

struct Rijndael_funtype_6_htbl_s {uint32_t size; uint32_t num_entries; Rijndael_funtype_6_hashentry_t * data;}; 
typedef struct Rijndael_funtype_6_htbl_s * Rijndael_funtype_6_htbl_t;

struct Rijndael_funtype_6_s {uint32_t count;
        Rijndael_funtype_6_ftbl_t ftbl;
        Rijndael_funtype_6_htbl_t htbl;};
typedef struct Rijndael_funtype_6_s * Rijndael_funtype_6_t;

extern void release_Rijndael_funtype_6(Rijndael_funtype_6_t x);

extern Rijndael_funtype_6_t copy_Rijndael_funtype_6(Rijndael_funtype_6_t x);

uint32_t lookup_Rijndael_funtype_6(Rijndael_funtype_6_htbl_t htbl, uint8_t i, uint32_t ihash);

Rijndael_funtype_6_t dupdate_Rijndael_funtype_6(Rijndael_funtype_6_t a, uint8_t i, uint8_t v);

extern Rijndael_funtype_6_t update_Rijndael_funtype_6(Rijndael_funtype_6_t a, uint8_t i, uint8_t v);

extern bool_t equal_Rijndael_funtype_6(Rijndael_funtype_6_t x, Rijndael_funtype_6_t y);




struct Rijndael_closure_7_s;
        typedef struct Rijndael_closure_7_s * Rijndael_closure_7_t;

struct Rijndael_closure_7_s {uint32_t count;
         Rijndael_funtype_6_ftbl_t ftbl;
         Rijndael_funtype_6_htbl_t htbl;
        Rijndael_array_2_t fvar_1;
        uint8_t fvar_2;};

uint8_t f_Rijndael_closure_7(struct Rijndael_closure_7_s * closure, uint8_t bvar);

uint8_t m_Rijndael_closure_7(struct Rijndael_closure_7_s * closure, uint8_t bvar);

extern uint8_t h_Rijndael_closure_7(uint8_t ivar_11, Rijndael_array_2_t ivar_2, uint8_t ivar_3);

extern Rijndael_closure_7_t new_Rijndael_closure_7(void);

extern void release_Rijndael_closure_7(Rijndael_funtype_6_t closure);

extern Rijndael_closure_7_t copy_Rijndael_closure_7(Rijndael_closure_7_t x);




struct Rijndael_closure_8_s;
        typedef struct Rijndael_closure_8_s * Rijndael_closure_8_t;

struct Rijndael_closure_8_s {uint32_t count;
         Rijndael_funtype_6_ftbl_t ftbl;
         Rijndael_funtype_6_htbl_t htbl;
        Rijndael_array_2_t fvar_1;
        Rijndael_array_2_t fvar_2;};

uint8_t f_Rijndael_closure_8(struct Rijndael_closure_8_s * closure, uint8_t bvar);

uint8_t m_Rijndael_closure_8(struct Rijndael_closure_8_s * closure, uint8_t bvar);

extern uint8_t h_Rijndael_closure_8(uint8_t ivar_91, Rijndael_array_2_t ivar_2, Rijndael_array_2_t ivar_9);

extern Rijndael_closure_8_t new_Rijndael_closure_8(void);

extern void release_Rijndael_closure_8(Rijndael_funtype_6_t closure);

extern Rijndael_closure_8_t copy_Rijndael_closure_8(Rijndael_closure_8_t x);




struct Rijndael_closure_9_s;
        typedef struct Rijndael_closure_9_s * Rijndael_closure_9_t;

struct Rijndael_closure_9_s {uint32_t count;
         Rijndael_funtype_6_ftbl_t ftbl;
         Rijndael_funtype_6_htbl_t htbl;
        Rijndael_array_2_t fvar_1;
        Rijndael_array_2_t fvar_2;};

uint8_t f_Rijndael_closure_9(struct Rijndael_closure_9_s * closure, uint8_t bvar);

uint8_t m_Rijndael_closure_9(struct Rijndael_closure_9_s * closure, uint8_t bvar);

extern uint8_t h_Rijndael_closure_9(uint8_t ivar_114, Rijndael_array_2_t ivar_2, Rijndael_array_2_t ivar_89);

extern Rijndael_closure_9_t new_Rijndael_closure_9(void);

extern void release_Rijndael_closure_9(Rijndael_funtype_6_t closure);

extern Rijndael_closure_9_t copy_Rijndael_closure_9(Rijndael_closure_9_t x);




struct Rijndael_closure_10_s;
        typedef struct Rijndael_closure_10_s * Rijndael_closure_10_t;

struct Rijndael_closure_10_s {uint32_t count;
         Rijndael_funtype_6_ftbl_t ftbl;
         Rijndael_funtype_6_htbl_t htbl;
        Rijndael_array_2_t fvar_1;
        Rijndael_array_2_t fvar_2;};

uint8_t f_Rijndael_closure_10(struct Rijndael_closure_10_s * closure, uint8_t bvar);

uint8_t m_Rijndael_closure_10(struct Rijndael_closure_10_s * closure, uint8_t bvar);

extern uint8_t h_Rijndael_closure_10(uint8_t ivar_137, Rijndael_array_2_t ivar_2, Rijndael_array_2_t ivar_112);

extern Rijndael_closure_10_t new_Rijndael_closure_10(void);

extern void release_Rijndael_closure_10(Rijndael_funtype_6_t closure);

extern Rijndael_closure_10_t copy_Rijndael_closure_10(Rijndael_closure_10_t x);



struct Rijndael_array_11_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         Rijndael_array_2_t elems[]; };
typedef struct Rijndael_array_11_s * Rijndael_array_11_t;

extern Rijndael_array_11_t new_Rijndael_array_11(uint32_t size);

extern void release_Rijndael_array_11(Rijndael_array_11_t x);

extern Rijndael_array_11_t copy_Rijndael_array_11(Rijndael_array_11_t x);

extern bool_t equal_Rijndael_array_11(Rijndael_array_11_t x, Rijndael_array_11_t y);
typedef struct actual_Rijndael_array_11_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_Rijndael_array_11_t;

void release_Rijndael_array_11_ptr(pointer_t x, type_actual_t Rijndael_array_11);
extern bool_t equal_Rijndael_array_11_ptr(pointer_t x, pointer_t y, type_actual_t T);

actual_Rijndael_array_11_t actual_Rijndael_array_11(void);

extern Rijndael_array_11_t update_Rijndael_array_11(Rijndael_array_11_t x, uint32_t i, Rijndael_array_2_t v);

extern Rijndael_array_11_t upgrade_Rijndael_array_11(Rijndael_array_11_t x, uint32_t i, Rijndael_array_2_t v);



struct Rijndael_funtype_12_s;
        typedef struct Rijndael_funtype_12_s * Rijndael_funtype_12_t;

struct Rijndael_funtype_12_ftbl_s {Rijndael_array_2_t (* fptr)(struct Rijndael_funtype_12_s *, uint8_t);
        Rijndael_array_2_t (* mptr)(struct Rijndael_funtype_12_s *, uint8_t);
        void (* rptr)(struct Rijndael_funtype_12_s *);
        struct Rijndael_funtype_12_s * (* cptr)(struct Rijndael_funtype_12_s *);};
typedef struct Rijndael_funtype_12_ftbl_s * Rijndael_funtype_12_ftbl_t;

struct Rijndael_funtype_12_hashentry_s {uint32_t keyhash; uint8_t key; Rijndael_array_2_t value;}; 
typedef struct Rijndael_funtype_12_hashentry_s Rijndael_funtype_12_hashentry_t;

struct Rijndael_funtype_12_htbl_s {uint32_t size; uint32_t num_entries; Rijndael_funtype_12_hashentry_t * data;}; 
typedef struct Rijndael_funtype_12_htbl_s * Rijndael_funtype_12_htbl_t;

struct Rijndael_funtype_12_s {uint32_t count;
        Rijndael_funtype_12_ftbl_t ftbl;
        Rijndael_funtype_12_htbl_t htbl;};
typedef struct Rijndael_funtype_12_s * Rijndael_funtype_12_t;

extern void release_Rijndael_funtype_12(Rijndael_funtype_12_t x);

extern Rijndael_funtype_12_t copy_Rijndael_funtype_12(Rijndael_funtype_12_t x);

uint32_t lookup_Rijndael_funtype_12(Rijndael_funtype_12_htbl_t htbl, uint8_t i, uint32_t ihash);

Rijndael_funtype_12_t dupdate_Rijndael_funtype_12(Rijndael_funtype_12_t a, uint8_t i, Rijndael_array_2_t v);

extern Rijndael_funtype_12_t update_Rijndael_funtype_12(Rijndael_funtype_12_t a, uint8_t i, Rijndael_array_2_t v);

extern bool_t equal_Rijndael_funtype_12(Rijndael_funtype_12_t x, Rijndael_funtype_12_t y);



struct Rijndael_record_13_s {
        uint32_t count; 
        uint8_t length;
        Rijndael_array_2_t seq;};
typedef struct Rijndael_record_13_s * Rijndael_record_13_t;

extern Rijndael_record_13_t new_Rijndael_record_13(void);

extern void release_Rijndael_record_13(Rijndael_record_13_t x);

extern Rijndael_record_13_t copy_Rijndael_record_13(Rijndael_record_13_t x);

extern bool_t equal_Rijndael_record_13(Rijndael_record_13_t x, Rijndael_record_13_t y);
typedef struct actual_Rijndael_record_13_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_Rijndael_record_13_t;

void release_Rijndael_record_13_ptr(pointer_t x, type_actual_t Rijndael_record_13);
extern bool_t equal_Rijndael_record_13_ptr(pointer_t x, pointer_t y, actual_Rijndael_record_13_t T);

actual_Rijndael_record_13_t actual_Rijndael_record_13(void);

extern Rijndael_record_13_t update_Rijndael_record_13_length(Rijndael_record_13_t x, uint8_t v);

extern Rijndael_record_13_t update_Rijndael_record_13_seq(Rijndael_record_13_t x, Rijndael_array_2_t v);



extern Rijndael_funtype_1_t Rijndael__get(Rijndael_array_2_t ivar_3);

extern bytestrings__bytestring_t Rijndael__SboxHex(void);

extern Rijndael_array_2_t Rijndael__Sbox(void);

extern Rijndael_array_2_t Rijndael__byteSubst(Rijndael_array_2_t ivar_2);

extern Rijndael_array_2_t Rijndael__shiftRow(Rijndael_array_2_t ivar_2);

extern uint8_t Rijndael__T2(uint8_t ivar_2);

extern uint8_t Rijndael__T3(uint8_t ivar_2);

extern Rijndael_array_2_t Rijndael__mixColumn(Rijndael_array_2_t ivar_2);

extern Rijndael_array_2_t Rijndael__roundkeyXOR(Rijndael_array_2_t ivar_2, Rijndael_array_2_t ivar_3);

extern uint8_t Rijndael__roundConst(uint8_t ivar_2);

extern Rijndael_array_2_t Rijndael__nextRoundKey(Rijndael_array_2_t ivar_2, uint8_t ivar_3);

extern Rijndael_array_11_t Rijndael__allKeys(Rijndael_array_11_t ivar_2, uint8_t ivar_3, uint8_t ivar_4);

extern Rijndael_array_2_t Rijndael__Rijndael_step(Rijndael_array_2_t ivar_2, Rijndael_array_2_t ivar_3);

extern Rijndael_array_2_t Rijndael__Rijndael_rec(Rijndael_array_2_t ivar_3, Rijndael_funtype_12_t ivar_4, uint8_t ivar_6);

extern Rijndael_array_2_t Rijndael__Rijndael(Rijndael_array_2_t ivar_2, Rijndael_array_2_t ivar_3);

extern bytestrings__bytestring_t Rijndael__hex16(Rijndael_array_2_t ivar_2);

extern bytestrings__bytestring_t Rijndael__test0RD(void);

extern bytestrings__bytestring_t Rijndael__testRijndael1(void);
#endif