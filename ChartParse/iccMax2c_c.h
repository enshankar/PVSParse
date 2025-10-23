//Code generated using pvs2ir
#ifndef _iccMax2c_h 
#define _iccMax2c_h

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

#include "finite_sequences_c.h"

#include "bytestrings_c.h"

#include "gen_strings_c.h"

#include "strings_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "hex_c.h"

#include "rotate_c.h"

//cc -O3 -Wall -o iccMax2c -I /Users/e21660/shankar/pvs.git/src/groundeval/ /Users/e21660/shankar/pvs.git/src/groundeval/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/finite_sequences_c.c /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c iccMax2c_c.c hex_c.c rotate_c.c -lgmp 

struct iccMax2c__result_adt_s {
         uint32_t count; 
        uint8_t iccMax2c__result_adt_index;};
typedef struct iccMax2c__result_adt_s * iccMax2c__result_adt_t;

extern iccMax2c__result_adt_t new_iccMax2c__result_adt(void);

extern void release_iccMax2c__result_adt(iccMax2c__result_adt_t x);

extern iccMax2c__result_adt_t copy_iccMax2c__result_adt(iccMax2c__result_adt_t x);

extern bool_t equal_iccMax2c__result_adt(iccMax2c__result_adt_t x, iccMax2c__result_adt_t y);
typedef struct actual_iccMax2c__result_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_iccMax2c__result_adt_t;

void release_iccMax2c__result_adt_ptr(pointer_t x, type_actual_t iccMax2c__result_adt);
extern bool_t equal_iccMax2c__result_adt_ptr(pointer_t x, pointer_t y, actual_iccMax2c__result_adt_t T);

actual_iccMax2c__result_adt_t actual_iccMax2c__result_adt(void);

extern iccMax2c__result_adt_t update_iccMax2c__result_adt_iccMax2c__result_adt_index(iccMax2c__result_adt_t x, uint8_t v);



struct iccMax2c__error_s {
        uint32_t count; 
        uint8_t iccMax2c__result_adt_index;
        uint8_t code;
        uint32_t loc;
        uint8_t occ;};
typedef struct iccMax2c__error_s * iccMax2c__error_t;

extern iccMax2c__error_t new_iccMax2c__error(void);

extern void release_iccMax2c__error(iccMax2c__error_t x);

extern iccMax2c__error_t copy_iccMax2c__error(iccMax2c__error_t x);

extern bool_t equal_iccMax2c__error(iccMax2c__error_t x, iccMax2c__error_t y);
typedef struct actual_iccMax2c__error_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_iccMax2c__error_t;

void release_iccMax2c__error_ptr(pointer_t x, type_actual_t iccMax2c__error);
extern bool_t equal_iccMax2c__error_ptr(pointer_t x, pointer_t y, actual_iccMax2c__error_t T);

actual_iccMax2c__error_t actual_iccMax2c__error(void);

extern iccMax2c__error_t update_iccMax2c__error_iccMax2c__result_adt_index(iccMax2c__error_t x, uint8_t v);

extern iccMax2c__error_t update_iccMax2c__error_code(iccMax2c__error_t x, uint8_t v);

extern iccMax2c__error_t update_iccMax2c__error_loc(iccMax2c__error_t x, uint32_t v);

extern iccMax2c__error_t update_iccMax2c__error_occ(iccMax2c__error_t x, uint8_t v);



struct iccMax2c__value_s {
        uint32_t count; 
        uint8_t iccMax2c__result_adt_index;
        uint64_t vmax;
        uint64_t vmin;};
typedef struct iccMax2c__value_s * iccMax2c__value_t;

extern iccMax2c__value_t new_iccMax2c__value(void);

extern void release_iccMax2c__value(iccMax2c__value_t x);

extern iccMax2c__value_t copy_iccMax2c__value(iccMax2c__value_t x);

extern bool_t equal_iccMax2c__value(iccMax2c__value_t x, iccMax2c__value_t y);
typedef struct actual_iccMax2c__value_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_iccMax2c__value_t;

void release_iccMax2c__value_ptr(pointer_t x, type_actual_t iccMax2c__value);
extern bool_t equal_iccMax2c__value_ptr(pointer_t x, pointer_t y, actual_iccMax2c__value_t T);

actual_iccMax2c__value_t actual_iccMax2c__value(void);

extern iccMax2c__value_t update_iccMax2c__value_iccMax2c__result_adt_index(iccMax2c__value_t x, uint8_t v);

extern iccMax2c__value_t update_iccMax2c__value_vmax(iccMax2c__value_t x, uint64_t v);

extern iccMax2c__value_t update_iccMax2c__value_vmin(iccMax2c__value_t x, uint64_t v);



struct iccMax2c_funtype_3_s;
        typedef struct iccMax2c_funtype_3_s * iccMax2c_funtype_3_t;

struct iccMax2c_funtype_3_ftbl_s {uint8_t (* fptr)(struct iccMax2c_funtype_3_s *, iccMax2c__result_adt_t);
        uint8_t (* mptr)(struct iccMax2c_funtype_3_s *, iccMax2c__result_adt_t);
        void (* rptr)(struct iccMax2c_funtype_3_s *);
        struct iccMax2c_funtype_3_s * (* cptr)(struct iccMax2c_funtype_3_s *);};
typedef struct iccMax2c_funtype_3_ftbl_s * iccMax2c_funtype_3_ftbl_t;

struct iccMax2c_funtype_3_hashentry_s {uint32_t keyhash; iccMax2c__result_adt_t key; uint8_t value;}; 
typedef struct iccMax2c_funtype_3_hashentry_s iccMax2c_funtype_3_hashentry_t;

struct iccMax2c_funtype_3_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_3_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_3_htbl_s * iccMax2c_funtype_3_htbl_t;

struct iccMax2c_funtype_3_s {uint32_t count;
        iccMax2c_funtype_3_ftbl_t ftbl;
        iccMax2c_funtype_3_htbl_t htbl;};
typedef struct iccMax2c_funtype_3_s * iccMax2c_funtype_3_t;

extern void release_iccMax2c_funtype_3(iccMax2c_funtype_3_t x);

extern iccMax2c_funtype_3_t copy_iccMax2c_funtype_3(iccMax2c_funtype_3_t x);

extern bool_t equal_iccMax2c_funtype_3(iccMax2c_funtype_3_t x, iccMax2c_funtype_3_t y);



struct iccMax2c_funtype_4_s;
        typedef struct iccMax2c_funtype_4_s * iccMax2c_funtype_4_t;

struct iccMax2c_funtype_4_ftbl_s {mpz_ptr_t (* fptr)(struct iccMax2c_funtype_4_s *, iccMax2c__result_adt_t);
        mpz_ptr_t (* mptr)(struct iccMax2c_funtype_4_s *, iccMax2c__result_adt_t);
        void (* rptr)(struct iccMax2c_funtype_4_s *);
        struct iccMax2c_funtype_4_s * (* cptr)(struct iccMax2c_funtype_4_s *);};
typedef struct iccMax2c_funtype_4_ftbl_s * iccMax2c_funtype_4_ftbl_t;

struct iccMax2c_funtype_4_hashentry_s {uint32_t keyhash; iccMax2c__result_adt_t key; mpz_t value;}; 
typedef struct iccMax2c_funtype_4_hashentry_s iccMax2c_funtype_4_hashentry_t;

struct iccMax2c_funtype_4_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_4_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_4_htbl_s * iccMax2c_funtype_4_htbl_t;

struct iccMax2c_funtype_4_s {uint32_t count;
        iccMax2c_funtype_4_ftbl_t ftbl;
        iccMax2c_funtype_4_htbl_t htbl;};
typedef struct iccMax2c_funtype_4_s * iccMax2c_funtype_4_t;

extern void release_iccMax2c_funtype_4(iccMax2c_funtype_4_t x);

extern iccMax2c_funtype_4_t copy_iccMax2c_funtype_4(iccMax2c_funtype_4_t x);

extern bool_t equal_iccMax2c_funtype_4(iccMax2c_funtype_4_t x, iccMax2c_funtype_4_t y);



struct iccMax2c_record_5_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        uint8_t project_3;};
typedef struct iccMax2c_record_5_s * iccMax2c_record_5_t;

extern iccMax2c_record_5_t new_iccMax2c_record_5(void);

extern void release_iccMax2c_record_5(iccMax2c_record_5_t x);

extern iccMax2c_record_5_t copy_iccMax2c_record_5(iccMax2c_record_5_t x);

extern bool_t equal_iccMax2c_record_5(iccMax2c_record_5_t x, iccMax2c_record_5_t y);
typedef struct actual_iccMax2c_record_5_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_iccMax2c_record_5_t;

void release_iccMax2c_record_5_ptr(pointer_t x, type_actual_t iccMax2c_record_5);
extern bool_t equal_iccMax2c_record_5_ptr(pointer_t x, pointer_t y, actual_iccMax2c_record_5_t T);

actual_iccMax2c_record_5_t actual_iccMax2c_record_5(void);

extern iccMax2c_record_5_t update_iccMax2c_record_5_project_1(iccMax2c_record_5_t x, uint8_t v);

extern iccMax2c_record_5_t update_iccMax2c_record_5_project_2(iccMax2c_record_5_t x, uint32_t v);

extern iccMax2c_record_5_t update_iccMax2c_record_5_project_3(iccMax2c_record_5_t x, uint8_t v);



struct iccMax2c_funtype_6_s;
        typedef struct iccMax2c_funtype_6_s * iccMax2c_funtype_6_t;

struct iccMax2c_funtype_6_ftbl_s {mpz_ptr_t (* fptr)(struct iccMax2c_funtype_6_s *, iccMax2c_record_5_t);
        mpz_ptr_t (* mptr)(struct iccMax2c_funtype_6_s *, uint8_t, uint32_t, uint8_t);
        void (* rptr)(struct iccMax2c_funtype_6_s *);
        struct iccMax2c_funtype_6_s * (* cptr)(struct iccMax2c_funtype_6_s *);};
typedef struct iccMax2c_funtype_6_ftbl_s * iccMax2c_funtype_6_ftbl_t;

struct iccMax2c_funtype_6_hashentry_s {uint32_t keyhash; iccMax2c_record_5_t key; mpz_t value;}; 
typedef struct iccMax2c_funtype_6_hashentry_s iccMax2c_funtype_6_hashentry_t;

struct iccMax2c_funtype_6_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_6_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_6_htbl_s * iccMax2c_funtype_6_htbl_t;

struct iccMax2c_funtype_6_s {uint32_t count;
        iccMax2c_funtype_6_ftbl_t ftbl;
        iccMax2c_funtype_6_htbl_t htbl;};
typedef struct iccMax2c_funtype_6_s * iccMax2c_funtype_6_t;

extern void release_iccMax2c_funtype_6(iccMax2c_funtype_6_t x);

extern iccMax2c_funtype_6_t copy_iccMax2c_funtype_6(iccMax2c_funtype_6_t x);

extern bool_t equal_iccMax2c_funtype_6(iccMax2c_funtype_6_t x, iccMax2c_funtype_6_t y);



struct iccMax2c_record_7_s {
        uint32_t count; 
        uint64_t project_1;
        uint64_t project_2;};
typedef struct iccMax2c_record_7_s * iccMax2c_record_7_t;

extern iccMax2c_record_7_t new_iccMax2c_record_7(void);

extern void release_iccMax2c_record_7(iccMax2c_record_7_t x);

extern iccMax2c_record_7_t copy_iccMax2c_record_7(iccMax2c_record_7_t x);

extern bool_t equal_iccMax2c_record_7(iccMax2c_record_7_t x, iccMax2c_record_7_t y);
typedef struct actual_iccMax2c_record_7_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_iccMax2c_record_7_t;

void release_iccMax2c_record_7_ptr(pointer_t x, type_actual_t iccMax2c_record_7);
extern bool_t equal_iccMax2c_record_7_ptr(pointer_t x, pointer_t y, actual_iccMax2c_record_7_t T);

actual_iccMax2c_record_7_t actual_iccMax2c_record_7(void);

extern iccMax2c_record_7_t update_iccMax2c_record_7_project_1(iccMax2c_record_7_t x, uint64_t v);

extern iccMax2c_record_7_t update_iccMax2c_record_7_project_2(iccMax2c_record_7_t x, uint64_t v);



struct iccMax2c_funtype_8_s;
        typedef struct iccMax2c_funtype_8_s * iccMax2c_funtype_8_t;

struct iccMax2c_funtype_8_ftbl_s {mpz_ptr_t (* fptr)(struct iccMax2c_funtype_8_s *, iccMax2c_record_7_t);
        mpz_ptr_t (* mptr)(struct iccMax2c_funtype_8_s *, uint64_t, uint64_t);
        void (* rptr)(struct iccMax2c_funtype_8_s *);
        struct iccMax2c_funtype_8_s * (* cptr)(struct iccMax2c_funtype_8_s *);};
typedef struct iccMax2c_funtype_8_ftbl_s * iccMax2c_funtype_8_ftbl_t;

struct iccMax2c_funtype_8_hashentry_s {uint32_t keyhash; iccMax2c_record_7_t key; mpz_t value;}; 
typedef struct iccMax2c_funtype_8_hashentry_s iccMax2c_funtype_8_hashentry_t;

struct iccMax2c_funtype_8_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_8_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_8_htbl_s * iccMax2c_funtype_8_htbl_t;

struct iccMax2c_funtype_8_s {uint32_t count;
        iccMax2c_funtype_8_ftbl_t ftbl;
        iccMax2c_funtype_8_htbl_t htbl;};
typedef struct iccMax2c_funtype_8_s * iccMax2c_funtype_8_t;

extern void release_iccMax2c_funtype_8(iccMax2c_funtype_8_t x);

extern iccMax2c_funtype_8_t copy_iccMax2c_funtype_8(iccMax2c_funtype_8_t x);

extern bool_t equal_iccMax2c_funtype_8(iccMax2c_funtype_8_t x, iccMax2c_funtype_8_t y);




struct iccMax2c_closure_9_s;
        typedef struct iccMax2c_closure_9_s * iccMax2c_closure_9_t;

struct iccMax2c_closure_9_s {uint32_t count;
         iccMax2c_funtype_4_ftbl_t ftbl;
         iccMax2c_funtype_4_htbl_t htbl;
        iccMax2c_funtype_6_t fvar_1;
        iccMax2c_funtype_8_t fvar_2;};

mpz_ptr_t f_iccMax2c_closure_9(struct iccMax2c_closure_9_s * closure, iccMax2c__result_adt_t bvar);

mpz_ptr_t m_iccMax2c_closure_9(struct iccMax2c_closure_9_s * closure, iccMax2c__result_adt_t bvar);

extern mpz_ptr_t h_iccMax2c_closure_9(iccMax2c__result_adt_t ivar_6, iccMax2c_funtype_6_t ivar_1, iccMax2c_funtype_8_t ivar_3);

extern iccMax2c_closure_9_t new_iccMax2c_closure_9(void);

extern void release_iccMax2c_closure_9(iccMax2c_funtype_4_t closure);

extern iccMax2c_closure_9_t copy_iccMax2c_closure_9(iccMax2c_closure_9_t x);



struct iccMax2c_record_10_s {
        uint32_t count; 
        uint8_t project_1;
        uint32_t project_2;
        uint8_t project_3;
        iccMax2c__result_adt_t project_4;};
typedef struct iccMax2c_record_10_s * iccMax2c_record_10_t;

extern iccMax2c_record_10_t new_iccMax2c_record_10(void);

extern void release_iccMax2c_record_10(iccMax2c_record_10_t x);

extern iccMax2c_record_10_t copy_iccMax2c_record_10(iccMax2c_record_10_t x);

extern bool_t equal_iccMax2c_record_10(iccMax2c_record_10_t x, iccMax2c_record_10_t y);
typedef struct actual_iccMax2c_record_10_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_iccMax2c_record_10_t;

void release_iccMax2c_record_10_ptr(pointer_t x, type_actual_t iccMax2c_record_10);
extern bool_t equal_iccMax2c_record_10_ptr(pointer_t x, pointer_t y, actual_iccMax2c_record_10_t T);

actual_iccMax2c_record_10_t actual_iccMax2c_record_10(void);

extern iccMax2c_record_10_t update_iccMax2c_record_10_project_1(iccMax2c_record_10_t x, uint8_t v);

extern iccMax2c_record_10_t update_iccMax2c_record_10_project_2(iccMax2c_record_10_t x, uint32_t v);

extern iccMax2c_record_10_t update_iccMax2c_record_10_project_3(iccMax2c_record_10_t x, uint8_t v);

extern iccMax2c_record_10_t update_iccMax2c_record_10_project_4(iccMax2c_record_10_t x, iccMax2c__result_adt_t v);



struct iccMax2c_funtype_11_s;
        typedef struct iccMax2c_funtype_11_s * iccMax2c_funtype_11_t;

struct iccMax2c_funtype_11_ftbl_s {mpz_ptr_t (* fptr)(struct iccMax2c_funtype_11_s *, iccMax2c_record_10_t);
        mpz_ptr_t (* mptr)(struct iccMax2c_funtype_11_s *, uint8_t, uint32_t, uint8_t, iccMax2c__result_adt_t);
        void (* rptr)(struct iccMax2c_funtype_11_s *);
        struct iccMax2c_funtype_11_s * (* cptr)(struct iccMax2c_funtype_11_s *);};
typedef struct iccMax2c_funtype_11_ftbl_s * iccMax2c_funtype_11_ftbl_t;

struct iccMax2c_funtype_11_hashentry_s {uint32_t keyhash; iccMax2c_record_10_t key; mpz_t value;}; 
typedef struct iccMax2c_funtype_11_hashentry_s iccMax2c_funtype_11_hashentry_t;

struct iccMax2c_funtype_11_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_11_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_11_htbl_s * iccMax2c_funtype_11_htbl_t;

struct iccMax2c_funtype_11_s {uint32_t count;
        iccMax2c_funtype_11_ftbl_t ftbl;
        iccMax2c_funtype_11_htbl_t htbl;};
typedef struct iccMax2c_funtype_11_s * iccMax2c_funtype_11_t;

extern void release_iccMax2c_funtype_11(iccMax2c_funtype_11_t x);

extern iccMax2c_funtype_11_t copy_iccMax2c_funtype_11(iccMax2c_funtype_11_t x);

extern bool_t equal_iccMax2c_funtype_11(iccMax2c_funtype_11_t x, iccMax2c_funtype_11_t y);



struct iccMax2c_record_12_s {
        uint32_t count; 
        uint64_t project_1;
        uint64_t project_2;
        iccMax2c__result_adt_t project_3;};
typedef struct iccMax2c_record_12_s * iccMax2c_record_12_t;

extern iccMax2c_record_12_t new_iccMax2c_record_12(void);

extern void release_iccMax2c_record_12(iccMax2c_record_12_t x);

extern iccMax2c_record_12_t copy_iccMax2c_record_12(iccMax2c_record_12_t x);

extern bool_t equal_iccMax2c_record_12(iccMax2c_record_12_t x, iccMax2c_record_12_t y);
typedef struct actual_iccMax2c_record_12_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_iccMax2c_record_12_t;

void release_iccMax2c_record_12_ptr(pointer_t x, type_actual_t iccMax2c_record_12);
extern bool_t equal_iccMax2c_record_12_ptr(pointer_t x, pointer_t y, actual_iccMax2c_record_12_t T);

actual_iccMax2c_record_12_t actual_iccMax2c_record_12(void);

extern iccMax2c_record_12_t update_iccMax2c_record_12_project_1(iccMax2c_record_12_t x, uint64_t v);

extern iccMax2c_record_12_t update_iccMax2c_record_12_project_2(iccMax2c_record_12_t x, uint64_t v);

extern iccMax2c_record_12_t update_iccMax2c_record_12_project_3(iccMax2c_record_12_t x, iccMax2c__result_adt_t v);



struct iccMax2c_funtype_13_s;
        typedef struct iccMax2c_funtype_13_s * iccMax2c_funtype_13_t;

struct iccMax2c_funtype_13_ftbl_s {mpz_ptr_t (* fptr)(struct iccMax2c_funtype_13_s *, iccMax2c_record_12_t);
        mpz_ptr_t (* mptr)(struct iccMax2c_funtype_13_s *, uint64_t, uint64_t, iccMax2c__result_adt_t);
        void (* rptr)(struct iccMax2c_funtype_13_s *);
        struct iccMax2c_funtype_13_s * (* cptr)(struct iccMax2c_funtype_13_s *);};
typedef struct iccMax2c_funtype_13_ftbl_s * iccMax2c_funtype_13_ftbl_t;

struct iccMax2c_funtype_13_hashentry_s {uint32_t keyhash; iccMax2c_record_12_t key; mpz_t value;}; 
typedef struct iccMax2c_funtype_13_hashentry_s iccMax2c_funtype_13_hashentry_t;

struct iccMax2c_funtype_13_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_13_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_13_htbl_s * iccMax2c_funtype_13_htbl_t;

struct iccMax2c_funtype_13_s {uint32_t count;
        iccMax2c_funtype_13_ftbl_t ftbl;
        iccMax2c_funtype_13_htbl_t htbl;};
typedef struct iccMax2c_funtype_13_s * iccMax2c_funtype_13_t;

extern void release_iccMax2c_funtype_13(iccMax2c_funtype_13_t x);

extern iccMax2c_funtype_13_t copy_iccMax2c_funtype_13(iccMax2c_funtype_13_t x);

extern bool_t equal_iccMax2c_funtype_13(iccMax2c_funtype_13_t x, iccMax2c_funtype_13_t y);




struct iccMax2c_closure_14_s;
        typedef struct iccMax2c_closure_14_s * iccMax2c_closure_14_t;

struct iccMax2c_closure_14_s {uint32_t count;
         iccMax2c_funtype_4_ftbl_t ftbl;
         iccMax2c_funtype_4_htbl_t htbl;
        iccMax2c_funtype_11_t fvar_1;
        iccMax2c_funtype_13_t fvar_2;};

mpz_ptr_t f_iccMax2c_closure_14(struct iccMax2c_closure_14_s * closure, iccMax2c__result_adt_t bvar);

mpz_ptr_t m_iccMax2c_closure_14(struct iccMax2c_closure_14_s * closure, iccMax2c__result_adt_t bvar);

extern mpz_ptr_t h_iccMax2c_closure_14(iccMax2c__result_adt_t ivar_6, iccMax2c_funtype_11_t ivar_1, iccMax2c_funtype_13_t ivar_3);

extern iccMax2c_closure_14_t new_iccMax2c_closure_14(void);

extern void release_iccMax2c_closure_14(iccMax2c_funtype_4_t closure);

extern iccMax2c_closure_14_t copy_iccMax2c_closure_14(iccMax2c_closure_14_t x);



struct iccMax2c_funtype_15_s;
        typedef struct iccMax2c_funtype_15_s * iccMax2c_funtype_15_t;

struct iccMax2c_funtype_15_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct iccMax2c_funtype_15_s *, iccMax2c__result_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct iccMax2c_funtype_15_s *, iccMax2c__result_adt_t);
        void (* rptr)(struct iccMax2c_funtype_15_s *);
        struct iccMax2c_funtype_15_s * (* cptr)(struct iccMax2c_funtype_15_s *);};
typedef struct iccMax2c_funtype_15_ftbl_s * iccMax2c_funtype_15_ftbl_t;

struct iccMax2c_funtype_15_hashentry_s {uint32_t keyhash; iccMax2c__result_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct iccMax2c_funtype_15_hashentry_s iccMax2c_funtype_15_hashentry_t;

struct iccMax2c_funtype_15_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_15_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_15_htbl_s * iccMax2c_funtype_15_htbl_t;

struct iccMax2c_funtype_15_s {uint32_t count;
        iccMax2c_funtype_15_ftbl_t ftbl;
        iccMax2c_funtype_15_htbl_t htbl;};
typedef struct iccMax2c_funtype_15_s * iccMax2c_funtype_15_t;

extern void release_iccMax2c_funtype_15(iccMax2c_funtype_15_t x);

extern iccMax2c_funtype_15_t copy_iccMax2c_funtype_15(iccMax2c_funtype_15_t x);

extern bool_t equal_iccMax2c_funtype_15(iccMax2c_funtype_15_t x, iccMax2c_funtype_15_t y);



struct iccMax2c_funtype_16_s;
        typedef struct iccMax2c_funtype_16_s * iccMax2c_funtype_16_t;

struct iccMax2c_funtype_16_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct iccMax2c_funtype_16_s *, iccMax2c_record_5_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct iccMax2c_funtype_16_s *, uint8_t, uint32_t, uint8_t);
        void (* rptr)(struct iccMax2c_funtype_16_s *);
        struct iccMax2c_funtype_16_s * (* cptr)(struct iccMax2c_funtype_16_s *);};
typedef struct iccMax2c_funtype_16_ftbl_s * iccMax2c_funtype_16_ftbl_t;

struct iccMax2c_funtype_16_hashentry_s {uint32_t keyhash; iccMax2c_record_5_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct iccMax2c_funtype_16_hashentry_s iccMax2c_funtype_16_hashentry_t;

struct iccMax2c_funtype_16_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_16_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_16_htbl_s * iccMax2c_funtype_16_htbl_t;

struct iccMax2c_funtype_16_s {uint32_t count;
        iccMax2c_funtype_16_ftbl_t ftbl;
        iccMax2c_funtype_16_htbl_t htbl;};
typedef struct iccMax2c_funtype_16_s * iccMax2c_funtype_16_t;

extern void release_iccMax2c_funtype_16(iccMax2c_funtype_16_t x);

extern iccMax2c_funtype_16_t copy_iccMax2c_funtype_16(iccMax2c_funtype_16_t x);

extern bool_t equal_iccMax2c_funtype_16(iccMax2c_funtype_16_t x, iccMax2c_funtype_16_t y);



struct iccMax2c_funtype_17_s;
        typedef struct iccMax2c_funtype_17_s * iccMax2c_funtype_17_t;

struct iccMax2c_funtype_17_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct iccMax2c_funtype_17_s *, iccMax2c_record_7_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct iccMax2c_funtype_17_s *, uint64_t, uint64_t);
        void (* rptr)(struct iccMax2c_funtype_17_s *);
        struct iccMax2c_funtype_17_s * (* cptr)(struct iccMax2c_funtype_17_s *);};
typedef struct iccMax2c_funtype_17_ftbl_s * iccMax2c_funtype_17_ftbl_t;

struct iccMax2c_funtype_17_hashentry_s {uint32_t keyhash; iccMax2c_record_7_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct iccMax2c_funtype_17_hashentry_s iccMax2c_funtype_17_hashentry_t;

struct iccMax2c_funtype_17_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_17_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_17_htbl_s * iccMax2c_funtype_17_htbl_t;

struct iccMax2c_funtype_17_s {uint32_t count;
        iccMax2c_funtype_17_ftbl_t ftbl;
        iccMax2c_funtype_17_htbl_t htbl;};
typedef struct iccMax2c_funtype_17_s * iccMax2c_funtype_17_t;

extern void release_iccMax2c_funtype_17(iccMax2c_funtype_17_t x);

extern iccMax2c_funtype_17_t copy_iccMax2c_funtype_17(iccMax2c_funtype_17_t x);

extern bool_t equal_iccMax2c_funtype_17(iccMax2c_funtype_17_t x, iccMax2c_funtype_17_t y);




struct iccMax2c_closure_18_s;
        typedef struct iccMax2c_closure_18_s * iccMax2c_closure_18_t;

struct iccMax2c_closure_18_s {uint32_t count;
         iccMax2c_funtype_15_ftbl_t ftbl;
         iccMax2c_funtype_15_htbl_t htbl;
        iccMax2c_funtype_16_t fvar_1;
        iccMax2c_funtype_17_t fvar_2;};

ordstruct_adt__ordstruct_adt_t f_iccMax2c_closure_18(struct iccMax2c_closure_18_s * closure, iccMax2c__result_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_iccMax2c_closure_18(struct iccMax2c_closure_18_s * closure, iccMax2c__result_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_iccMax2c_closure_18(iccMax2c__result_adt_t ivar_6, iccMax2c_funtype_16_t ivar_1, iccMax2c_funtype_17_t ivar_3);

extern iccMax2c_closure_18_t new_iccMax2c_closure_18(void);

extern void release_iccMax2c_closure_18(iccMax2c_funtype_15_t closure);

extern iccMax2c_closure_18_t copy_iccMax2c_closure_18(iccMax2c_closure_18_t x);



struct iccMax2c_funtype_19_s;
        typedef struct iccMax2c_funtype_19_s * iccMax2c_funtype_19_t;

struct iccMax2c_funtype_19_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct iccMax2c_funtype_19_s *, iccMax2c_record_10_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct iccMax2c_funtype_19_s *, uint8_t, uint32_t, uint8_t, iccMax2c__result_adt_t);
        void (* rptr)(struct iccMax2c_funtype_19_s *);
        struct iccMax2c_funtype_19_s * (* cptr)(struct iccMax2c_funtype_19_s *);};
typedef struct iccMax2c_funtype_19_ftbl_s * iccMax2c_funtype_19_ftbl_t;

struct iccMax2c_funtype_19_hashentry_s {uint32_t keyhash; iccMax2c_record_10_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct iccMax2c_funtype_19_hashentry_s iccMax2c_funtype_19_hashentry_t;

struct iccMax2c_funtype_19_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_19_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_19_htbl_s * iccMax2c_funtype_19_htbl_t;

struct iccMax2c_funtype_19_s {uint32_t count;
        iccMax2c_funtype_19_ftbl_t ftbl;
        iccMax2c_funtype_19_htbl_t htbl;};
typedef struct iccMax2c_funtype_19_s * iccMax2c_funtype_19_t;

extern void release_iccMax2c_funtype_19(iccMax2c_funtype_19_t x);

extern iccMax2c_funtype_19_t copy_iccMax2c_funtype_19(iccMax2c_funtype_19_t x);

extern bool_t equal_iccMax2c_funtype_19(iccMax2c_funtype_19_t x, iccMax2c_funtype_19_t y);



struct iccMax2c_funtype_20_s;
        typedef struct iccMax2c_funtype_20_s * iccMax2c_funtype_20_t;

struct iccMax2c_funtype_20_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct iccMax2c_funtype_20_s *, iccMax2c_record_12_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct iccMax2c_funtype_20_s *, uint64_t, uint64_t, iccMax2c__result_adt_t);
        void (* rptr)(struct iccMax2c_funtype_20_s *);
        struct iccMax2c_funtype_20_s * (* cptr)(struct iccMax2c_funtype_20_s *);};
typedef struct iccMax2c_funtype_20_ftbl_s * iccMax2c_funtype_20_ftbl_t;

struct iccMax2c_funtype_20_hashentry_s {uint32_t keyhash; iccMax2c_record_12_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct iccMax2c_funtype_20_hashentry_s iccMax2c_funtype_20_hashentry_t;

struct iccMax2c_funtype_20_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_20_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_20_htbl_s * iccMax2c_funtype_20_htbl_t;

struct iccMax2c_funtype_20_s {uint32_t count;
        iccMax2c_funtype_20_ftbl_t ftbl;
        iccMax2c_funtype_20_htbl_t htbl;};
typedef struct iccMax2c_funtype_20_s * iccMax2c_funtype_20_t;

extern void release_iccMax2c_funtype_20(iccMax2c_funtype_20_t x);

extern iccMax2c_funtype_20_t copy_iccMax2c_funtype_20(iccMax2c_funtype_20_t x);

extern bool_t equal_iccMax2c_funtype_20(iccMax2c_funtype_20_t x, iccMax2c_funtype_20_t y);




struct iccMax2c_closure_21_s;
        typedef struct iccMax2c_closure_21_s * iccMax2c_closure_21_t;

struct iccMax2c_closure_21_s {uint32_t count;
         iccMax2c_funtype_15_ftbl_t ftbl;
         iccMax2c_funtype_15_htbl_t htbl;
        iccMax2c_funtype_19_t fvar_1;
        iccMax2c_funtype_20_t fvar_2;};

ordstruct_adt__ordstruct_adt_t f_iccMax2c_closure_21(struct iccMax2c_closure_21_s * closure, iccMax2c__result_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_iccMax2c_closure_21(struct iccMax2c_closure_21_s * closure, iccMax2c__result_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_iccMax2c_closure_21(iccMax2c__result_adt_t ivar_6, iccMax2c_funtype_19_t ivar_1, iccMax2c_funtype_20_t ivar_3);

extern iccMax2c_closure_21_t new_iccMax2c_closure_21(void);

extern void release_iccMax2c_closure_21(iccMax2c_funtype_15_t closure);

extern iccMax2c_closure_21_t copy_iccMax2c_closure_21(iccMax2c_closure_21_t x);



struct iccMax2c__signature_adt_s {
         uint32_t count; 
        uint8_t iccMax2c__signature_adt_index;};
typedef struct iccMax2c__signature_adt_s * iccMax2c__signature_adt_t;

extern iccMax2c__signature_adt_t new_iccMax2c__signature_adt(void);

extern void release_iccMax2c__signature_adt(iccMax2c__signature_adt_t x);

extern iccMax2c__signature_adt_t copy_iccMax2c__signature_adt(iccMax2c__signature_adt_t x);

extern bool_t equal_iccMax2c__signature_adt(iccMax2c__signature_adt_t x, iccMax2c__signature_adt_t y);
typedef struct actual_iccMax2c__signature_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_iccMax2c__signature_adt_t;

void release_iccMax2c__signature_adt_ptr(pointer_t x, type_actual_t iccMax2c__signature_adt);
extern bool_t equal_iccMax2c__signature_adt_ptr(pointer_t x, pointer_t y, actual_iccMax2c__signature_adt_t T);

actual_iccMax2c__signature_adt_t actual_iccMax2c__signature_adt(void);

extern iccMax2c__signature_adt_t update_iccMax2c__signature_adt_iccMax2c__signature_adt_index(iccMax2c__signature_adt_t x, uint8_t v);



struct iccMax2c__window_s {
        uint32_t count; 
        uint32_t endpos;
        uint32_t startpos;};
typedef struct iccMax2c__window_s * iccMax2c__window_t;

extern iccMax2c__window_t new_iccMax2c__window(void);

extern void release_iccMax2c__window(iccMax2c__window_t x);

extern iccMax2c__window_t copy_iccMax2c__window(iccMax2c__window_t x);

extern bool_t equal_iccMax2c__window(iccMax2c__window_t x, iccMax2c__window_t y);
typedef struct actual_iccMax2c__window_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_iccMax2c__window_t;

void release_iccMax2c__window_ptr(pointer_t x, type_actual_t iccMax2c__window);
extern bool_t equal_iccMax2c__window_ptr(pointer_t x, pointer_t y, actual_iccMax2c__window_t T);

actual_iccMax2c__window_t actual_iccMax2c__window(void);

extern iccMax2c__window_t update_iccMax2c__window_endpos(iccMax2c__window_t x, uint32_t v);

extern iccMax2c__window_t update_iccMax2c__window_startpos(iccMax2c__window_t x, uint32_t v);



struct iccMax2c__inout_s {
        uint32_t count; 
        uint8_t iccMax2c__signature_adt_index;
        uint64_t input;
        uint64_t output;
        iccMax2c__window_t win;};
typedef struct iccMax2c__inout_s * iccMax2c__inout_t;

extern iccMax2c__inout_t new_iccMax2c__inout(void);

extern void release_iccMax2c__inout(iccMax2c__inout_t x);

extern iccMax2c__inout_t copy_iccMax2c__inout(iccMax2c__inout_t x);

extern bool_t equal_iccMax2c__inout(iccMax2c__inout_t x, iccMax2c__inout_t y);
typedef struct actual_iccMax2c__inout_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_iccMax2c__inout_t;

void release_iccMax2c__inout_ptr(pointer_t x, type_actual_t iccMax2c__inout);
extern bool_t equal_iccMax2c__inout_ptr(pointer_t x, pointer_t y, actual_iccMax2c__inout_t T);

actual_iccMax2c__inout_t actual_iccMax2c__inout(void);

extern iccMax2c__inout_t update_iccMax2c__inout_iccMax2c__signature_adt_index(iccMax2c__inout_t x, uint8_t v);

extern iccMax2c__inout_t update_iccMax2c__inout_input(iccMax2c__inout_t x, uint64_t v);

extern iccMax2c__inout_t update_iccMax2c__inout_output(iccMax2c__inout_t x, uint64_t v);

extern iccMax2c__inout_t update_iccMax2c__inout_win(iccMax2c__inout_t x, iccMax2c__window_t v);



struct iccMax2c_funtype_25_s;
        typedef struct iccMax2c_funtype_25_s * iccMax2c_funtype_25_t;

struct iccMax2c_funtype_25_ftbl_s {uint8_t (* fptr)(struct iccMax2c_funtype_25_s *, iccMax2c__signature_adt_t);
        uint8_t (* mptr)(struct iccMax2c_funtype_25_s *, iccMax2c__signature_adt_t);
        void (* rptr)(struct iccMax2c_funtype_25_s *);
        struct iccMax2c_funtype_25_s * (* cptr)(struct iccMax2c_funtype_25_s *);};
typedef struct iccMax2c_funtype_25_ftbl_s * iccMax2c_funtype_25_ftbl_t;

struct iccMax2c_funtype_25_hashentry_s {uint32_t keyhash; iccMax2c__signature_adt_t key; uint8_t value;}; 
typedef struct iccMax2c_funtype_25_hashentry_s iccMax2c_funtype_25_hashentry_t;

struct iccMax2c_funtype_25_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_25_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_25_htbl_s * iccMax2c_funtype_25_htbl_t;

struct iccMax2c_funtype_25_s {uint32_t count;
        iccMax2c_funtype_25_ftbl_t ftbl;
        iccMax2c_funtype_25_htbl_t htbl;};
typedef struct iccMax2c_funtype_25_s * iccMax2c_funtype_25_t;

extern void release_iccMax2c_funtype_25(iccMax2c_funtype_25_t x);

extern iccMax2c_funtype_25_t copy_iccMax2c_funtype_25(iccMax2c_funtype_25_t x);

extern bool_t equal_iccMax2c_funtype_25(iccMax2c_funtype_25_t x, iccMax2c_funtype_25_t y);



struct iccMax2c_funtype_26_s;
        typedef struct iccMax2c_funtype_26_s * iccMax2c_funtype_26_t;

struct iccMax2c_funtype_26_ftbl_s {mpz_ptr_t (* fptr)(struct iccMax2c_funtype_26_s *, iccMax2c__signature_adt_t);
        mpz_ptr_t (* mptr)(struct iccMax2c_funtype_26_s *, iccMax2c__signature_adt_t);
        void (* rptr)(struct iccMax2c_funtype_26_s *);
        struct iccMax2c_funtype_26_s * (* cptr)(struct iccMax2c_funtype_26_s *);};
typedef struct iccMax2c_funtype_26_ftbl_s * iccMax2c_funtype_26_ftbl_t;

struct iccMax2c_funtype_26_hashentry_s {uint32_t keyhash; iccMax2c__signature_adt_t key; mpz_t value;}; 
typedef struct iccMax2c_funtype_26_hashentry_s iccMax2c_funtype_26_hashentry_t;

struct iccMax2c_funtype_26_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_26_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_26_htbl_s * iccMax2c_funtype_26_htbl_t;

struct iccMax2c_funtype_26_s {uint32_t count;
        iccMax2c_funtype_26_ftbl_t ftbl;
        iccMax2c_funtype_26_htbl_t htbl;};
typedef struct iccMax2c_funtype_26_s * iccMax2c_funtype_26_t;

extern void release_iccMax2c_funtype_26(iccMax2c_funtype_26_t x);

extern iccMax2c_funtype_26_t copy_iccMax2c_funtype_26(iccMax2c_funtype_26_t x);

extern bool_t equal_iccMax2c_funtype_26(iccMax2c_funtype_26_t x, iccMax2c_funtype_26_t y);



struct iccMax2c_record_27_s {
        uint32_t count; 
        uint64_t project_1;
        uint64_t project_2;
        iccMax2c__window_t project_3;};
typedef struct iccMax2c_record_27_s * iccMax2c_record_27_t;

extern iccMax2c_record_27_t new_iccMax2c_record_27(void);

extern void release_iccMax2c_record_27(iccMax2c_record_27_t x);

extern iccMax2c_record_27_t copy_iccMax2c_record_27(iccMax2c_record_27_t x);

extern bool_t equal_iccMax2c_record_27(iccMax2c_record_27_t x, iccMax2c_record_27_t y);
typedef struct actual_iccMax2c_record_27_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_iccMax2c_record_27_t;

void release_iccMax2c_record_27_ptr(pointer_t x, type_actual_t iccMax2c_record_27);
extern bool_t equal_iccMax2c_record_27_ptr(pointer_t x, pointer_t y, actual_iccMax2c_record_27_t T);

actual_iccMax2c_record_27_t actual_iccMax2c_record_27(void);

extern iccMax2c_record_27_t update_iccMax2c_record_27_project_1(iccMax2c_record_27_t x, uint64_t v);

extern iccMax2c_record_27_t update_iccMax2c_record_27_project_2(iccMax2c_record_27_t x, uint64_t v);

extern iccMax2c_record_27_t update_iccMax2c_record_27_project_3(iccMax2c_record_27_t x, iccMax2c__window_t v);



struct iccMax2c_funtype_28_s;
        typedef struct iccMax2c_funtype_28_s * iccMax2c_funtype_28_t;

struct iccMax2c_funtype_28_ftbl_s {mpz_ptr_t (* fptr)(struct iccMax2c_funtype_28_s *, iccMax2c_record_27_t);
        mpz_ptr_t (* mptr)(struct iccMax2c_funtype_28_s *, uint64_t, uint64_t, iccMax2c__window_t);
        void (* rptr)(struct iccMax2c_funtype_28_s *);
        struct iccMax2c_funtype_28_s * (* cptr)(struct iccMax2c_funtype_28_s *);};
typedef struct iccMax2c_funtype_28_ftbl_s * iccMax2c_funtype_28_ftbl_t;

struct iccMax2c_funtype_28_hashentry_s {uint32_t keyhash; iccMax2c_record_27_t key; mpz_t value;}; 
typedef struct iccMax2c_funtype_28_hashentry_s iccMax2c_funtype_28_hashentry_t;

struct iccMax2c_funtype_28_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_28_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_28_htbl_s * iccMax2c_funtype_28_htbl_t;

struct iccMax2c_funtype_28_s {uint32_t count;
        iccMax2c_funtype_28_ftbl_t ftbl;
        iccMax2c_funtype_28_htbl_t htbl;};
typedef struct iccMax2c_funtype_28_s * iccMax2c_funtype_28_t;

extern void release_iccMax2c_funtype_28(iccMax2c_funtype_28_t x);

extern iccMax2c_funtype_28_t copy_iccMax2c_funtype_28(iccMax2c_funtype_28_t x);

extern bool_t equal_iccMax2c_funtype_28(iccMax2c_funtype_28_t x, iccMax2c_funtype_28_t y);




struct iccMax2c_closure_29_s;
        typedef struct iccMax2c_closure_29_s * iccMax2c_closure_29_t;

struct iccMax2c_closure_29_s {uint32_t count;
         iccMax2c_funtype_26_ftbl_t ftbl;
         iccMax2c_funtype_26_htbl_t htbl;
        iccMax2c_funtype_28_t fvar_1;
        mpz_t fvar_2;};

mpz_ptr_t f_iccMax2c_closure_29(struct iccMax2c_closure_29_s * closure, iccMax2c__signature_adt_t bvar);

mpz_ptr_t m_iccMax2c_closure_29(struct iccMax2c_closure_29_s * closure, iccMax2c__signature_adt_t bvar);

extern mpz_ptr_t h_iccMax2c_closure_29(iccMax2c__signature_adt_t ivar_5, iccMax2c_funtype_28_t ivar_2, mpz_ptr_t ivar_1);

extern iccMax2c_closure_29_t new_iccMax2c_closure_29(void);

extern void release_iccMax2c_closure_29(iccMax2c_funtype_26_t closure);

extern iccMax2c_closure_29_t copy_iccMax2c_closure_29(iccMax2c_closure_29_t x);



struct iccMax2c_record_30_s {
        uint32_t count; 
        uint64_t project_1;
        uint64_t project_2;
        iccMax2c__window_t project_3;
        iccMax2c__signature_adt_t project_4;};
typedef struct iccMax2c_record_30_s * iccMax2c_record_30_t;

extern iccMax2c_record_30_t new_iccMax2c_record_30(void);

extern void release_iccMax2c_record_30(iccMax2c_record_30_t x);

extern iccMax2c_record_30_t copy_iccMax2c_record_30(iccMax2c_record_30_t x);

extern bool_t equal_iccMax2c_record_30(iccMax2c_record_30_t x, iccMax2c_record_30_t y);
typedef struct actual_iccMax2c_record_30_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_iccMax2c_record_30_t;

void release_iccMax2c_record_30_ptr(pointer_t x, type_actual_t iccMax2c_record_30);
extern bool_t equal_iccMax2c_record_30_ptr(pointer_t x, pointer_t y, actual_iccMax2c_record_30_t T);

actual_iccMax2c_record_30_t actual_iccMax2c_record_30(void);

extern iccMax2c_record_30_t update_iccMax2c_record_30_project_1(iccMax2c_record_30_t x, uint64_t v);

extern iccMax2c_record_30_t update_iccMax2c_record_30_project_2(iccMax2c_record_30_t x, uint64_t v);

extern iccMax2c_record_30_t update_iccMax2c_record_30_project_3(iccMax2c_record_30_t x, iccMax2c__window_t v);

extern iccMax2c_record_30_t update_iccMax2c_record_30_project_4(iccMax2c_record_30_t x, iccMax2c__signature_adt_t v);



struct iccMax2c_funtype_31_s;
        typedef struct iccMax2c_funtype_31_s * iccMax2c_funtype_31_t;

struct iccMax2c_funtype_31_ftbl_s {mpz_ptr_t (* fptr)(struct iccMax2c_funtype_31_s *, iccMax2c_record_30_t);
        mpz_ptr_t (* mptr)(struct iccMax2c_funtype_31_s *, uint64_t, uint64_t, iccMax2c__window_t, iccMax2c__signature_adt_t);
        void (* rptr)(struct iccMax2c_funtype_31_s *);
        struct iccMax2c_funtype_31_s * (* cptr)(struct iccMax2c_funtype_31_s *);};
typedef struct iccMax2c_funtype_31_ftbl_s * iccMax2c_funtype_31_ftbl_t;

struct iccMax2c_funtype_31_hashentry_s {uint32_t keyhash; iccMax2c_record_30_t key; mpz_t value;}; 
typedef struct iccMax2c_funtype_31_hashentry_s iccMax2c_funtype_31_hashentry_t;

struct iccMax2c_funtype_31_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_31_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_31_htbl_s * iccMax2c_funtype_31_htbl_t;

struct iccMax2c_funtype_31_s {uint32_t count;
        iccMax2c_funtype_31_ftbl_t ftbl;
        iccMax2c_funtype_31_htbl_t htbl;};
typedef struct iccMax2c_funtype_31_s * iccMax2c_funtype_31_t;

extern void release_iccMax2c_funtype_31(iccMax2c_funtype_31_t x);

extern iccMax2c_funtype_31_t copy_iccMax2c_funtype_31(iccMax2c_funtype_31_t x);

extern bool_t equal_iccMax2c_funtype_31(iccMax2c_funtype_31_t x, iccMax2c_funtype_31_t y);




struct iccMax2c_closure_32_s;
        typedef struct iccMax2c_closure_32_s * iccMax2c_closure_32_t;

struct iccMax2c_closure_32_s {uint32_t count;
         iccMax2c_funtype_26_ftbl_t ftbl;
         iccMax2c_funtype_26_htbl_t htbl;
        iccMax2c_funtype_26_t fvar_1;
        iccMax2c_funtype_31_t fvar_2;};

mpz_ptr_t f_iccMax2c_closure_32(struct iccMax2c_closure_32_s * closure, iccMax2c__signature_adt_t bvar);

mpz_ptr_t m_iccMax2c_closure_32(struct iccMax2c_closure_32_s * closure, iccMax2c__signature_adt_t bvar);

extern mpz_ptr_t h_iccMax2c_closure_32(iccMax2c__signature_adt_t ivar_6, iccMax2c_funtype_26_t ivar_1, iccMax2c_funtype_31_t ivar_3);

extern iccMax2c_closure_32_t new_iccMax2c_closure_32(void);

extern void release_iccMax2c_closure_32(iccMax2c_funtype_26_t closure);

extern iccMax2c_closure_32_t copy_iccMax2c_closure_32(iccMax2c_closure_32_t x);



struct iccMax2c_funtype_33_s;
        typedef struct iccMax2c_funtype_33_s * iccMax2c_funtype_33_t;

struct iccMax2c_funtype_33_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct iccMax2c_funtype_33_s *, iccMax2c__signature_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct iccMax2c_funtype_33_s *, iccMax2c__signature_adt_t);
        void (* rptr)(struct iccMax2c_funtype_33_s *);
        struct iccMax2c_funtype_33_s * (* cptr)(struct iccMax2c_funtype_33_s *);};
typedef struct iccMax2c_funtype_33_ftbl_s * iccMax2c_funtype_33_ftbl_t;

struct iccMax2c_funtype_33_hashentry_s {uint32_t keyhash; iccMax2c__signature_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct iccMax2c_funtype_33_hashentry_s iccMax2c_funtype_33_hashentry_t;

struct iccMax2c_funtype_33_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_33_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_33_htbl_s * iccMax2c_funtype_33_htbl_t;

struct iccMax2c_funtype_33_s {uint32_t count;
        iccMax2c_funtype_33_ftbl_t ftbl;
        iccMax2c_funtype_33_htbl_t htbl;};
typedef struct iccMax2c_funtype_33_s * iccMax2c_funtype_33_t;

extern void release_iccMax2c_funtype_33(iccMax2c_funtype_33_t x);

extern iccMax2c_funtype_33_t copy_iccMax2c_funtype_33(iccMax2c_funtype_33_t x);

extern bool_t equal_iccMax2c_funtype_33(iccMax2c_funtype_33_t x, iccMax2c_funtype_33_t y);



struct iccMax2c_funtype_34_s;
        typedef struct iccMax2c_funtype_34_s * iccMax2c_funtype_34_t;

struct iccMax2c_funtype_34_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct iccMax2c_funtype_34_s *, iccMax2c_record_27_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct iccMax2c_funtype_34_s *, uint64_t, uint64_t, iccMax2c__window_t);
        void (* rptr)(struct iccMax2c_funtype_34_s *);
        struct iccMax2c_funtype_34_s * (* cptr)(struct iccMax2c_funtype_34_s *);};
typedef struct iccMax2c_funtype_34_ftbl_s * iccMax2c_funtype_34_ftbl_t;

struct iccMax2c_funtype_34_hashentry_s {uint32_t keyhash; iccMax2c_record_27_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct iccMax2c_funtype_34_hashentry_s iccMax2c_funtype_34_hashentry_t;

struct iccMax2c_funtype_34_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_34_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_34_htbl_s * iccMax2c_funtype_34_htbl_t;

struct iccMax2c_funtype_34_s {uint32_t count;
        iccMax2c_funtype_34_ftbl_t ftbl;
        iccMax2c_funtype_34_htbl_t htbl;};
typedef struct iccMax2c_funtype_34_s * iccMax2c_funtype_34_t;

extern void release_iccMax2c_funtype_34(iccMax2c_funtype_34_t x);

extern iccMax2c_funtype_34_t copy_iccMax2c_funtype_34(iccMax2c_funtype_34_t x);

extern bool_t equal_iccMax2c_funtype_34(iccMax2c_funtype_34_t x, iccMax2c_funtype_34_t y);




struct iccMax2c_closure_35_s;
        typedef struct iccMax2c_closure_35_s * iccMax2c_closure_35_t;

struct iccMax2c_closure_35_s {uint32_t count;
         iccMax2c_funtype_33_ftbl_t ftbl;
         iccMax2c_funtype_33_htbl_t htbl;
        iccMax2c_funtype_34_t fvar_1;
        ordstruct_adt__ordstruct_adt_t fvar_2;};

ordstruct_adt__ordstruct_adt_t f_iccMax2c_closure_35(struct iccMax2c_closure_35_s * closure, iccMax2c__signature_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_iccMax2c_closure_35(struct iccMax2c_closure_35_s * closure, iccMax2c__signature_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_iccMax2c_closure_35(iccMax2c__signature_adt_t ivar_5, iccMax2c_funtype_34_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1);

extern iccMax2c_closure_35_t new_iccMax2c_closure_35(void);

extern void release_iccMax2c_closure_35(iccMax2c_funtype_33_t closure);

extern iccMax2c_closure_35_t copy_iccMax2c_closure_35(iccMax2c_closure_35_t x);



struct iccMax2c_funtype_36_s;
        typedef struct iccMax2c_funtype_36_s * iccMax2c_funtype_36_t;

struct iccMax2c_funtype_36_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct iccMax2c_funtype_36_s *, iccMax2c_record_30_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct iccMax2c_funtype_36_s *, uint64_t, uint64_t, iccMax2c__window_t, iccMax2c__signature_adt_t);
        void (* rptr)(struct iccMax2c_funtype_36_s *);
        struct iccMax2c_funtype_36_s * (* cptr)(struct iccMax2c_funtype_36_s *);};
typedef struct iccMax2c_funtype_36_ftbl_s * iccMax2c_funtype_36_ftbl_t;

struct iccMax2c_funtype_36_hashentry_s {uint32_t keyhash; iccMax2c_record_30_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct iccMax2c_funtype_36_hashentry_s iccMax2c_funtype_36_hashentry_t;

struct iccMax2c_funtype_36_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_36_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_36_htbl_s * iccMax2c_funtype_36_htbl_t;

struct iccMax2c_funtype_36_s {uint32_t count;
        iccMax2c_funtype_36_ftbl_t ftbl;
        iccMax2c_funtype_36_htbl_t htbl;};
typedef struct iccMax2c_funtype_36_s * iccMax2c_funtype_36_t;

extern void release_iccMax2c_funtype_36(iccMax2c_funtype_36_t x);

extern iccMax2c_funtype_36_t copy_iccMax2c_funtype_36(iccMax2c_funtype_36_t x);

extern bool_t equal_iccMax2c_funtype_36(iccMax2c_funtype_36_t x, iccMax2c_funtype_36_t y);




struct iccMax2c_closure_37_s;
        typedef struct iccMax2c_closure_37_s * iccMax2c_closure_37_t;

struct iccMax2c_closure_37_s {uint32_t count;
         iccMax2c_funtype_33_ftbl_t ftbl;
         iccMax2c_funtype_33_htbl_t htbl;
        iccMax2c_funtype_33_t fvar_1;
        iccMax2c_funtype_36_t fvar_2;};

ordstruct_adt__ordstruct_adt_t f_iccMax2c_closure_37(struct iccMax2c_closure_37_s * closure, iccMax2c__signature_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_iccMax2c_closure_37(struct iccMax2c_closure_37_s * closure, iccMax2c__signature_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_iccMax2c_closure_37(iccMax2c__signature_adt_t ivar_6, iccMax2c_funtype_33_t ivar_1, iccMax2c_funtype_36_t ivar_3);

extern iccMax2c_closure_37_t new_iccMax2c_closure_37(void);

extern void release_iccMax2c_closure_37(iccMax2c_funtype_33_t closure);

extern iccMax2c_closure_37_t copy_iccMax2c_closure_37(iccMax2c_closure_37_t x);



struct iccMax2c__signatureMap_s;
        typedef struct iccMax2c__signatureMap_s * iccMax2c__signatureMap_t;

struct iccMax2c__signatureMap_ftbl_s {iccMax2c__signature_adt_t (* fptr)(struct iccMax2c__signatureMap_s *, uint32_t);
        iccMax2c__signature_adt_t (* mptr)(struct iccMax2c__signatureMap_s *, uint32_t);
        void (* rptr)(struct iccMax2c__signatureMap_s *);
        struct iccMax2c__signatureMap_s * (* cptr)(struct iccMax2c__signatureMap_s *);};
typedef struct iccMax2c__signatureMap_ftbl_s * iccMax2c__signatureMap_ftbl_t;

struct iccMax2c__signatureMap_hashentry_s {uint32_t keyhash; uint32_t key; iccMax2c__signature_adt_t value;}; 
typedef struct iccMax2c__signatureMap_hashentry_s iccMax2c__signatureMap_hashentry_t;

struct iccMax2c__signatureMap_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c__signatureMap_hashentry_t * data;}; 
typedef struct iccMax2c__signatureMap_htbl_s * iccMax2c__signatureMap_htbl_t;

struct iccMax2c__signatureMap_s {uint32_t count;
        iccMax2c__signatureMap_ftbl_t ftbl;
        iccMax2c__signatureMap_htbl_t htbl;};
typedef struct iccMax2c__signatureMap_s * iccMax2c__signatureMap_t;

extern void release_iccMax2c__signatureMap(iccMax2c__signatureMap_t x);

extern iccMax2c__signatureMap_t copy_iccMax2c__signatureMap(iccMax2c__signatureMap_t x);

uint32_t lookup_iccMax2c__signatureMap(iccMax2c__signatureMap_htbl_t htbl, uint32_t i, uint32_t ihash);

iccMax2c__signatureMap_t dupdate_iccMax2c__signatureMap(iccMax2c__signatureMap_t a, uint32_t i, iccMax2c__signature_adt_t v);

extern iccMax2c__signatureMap_t update_iccMax2c__signatureMap(iccMax2c__signatureMap_t a, uint32_t i, iccMax2c__signature_adt_t v);

extern bool_t equal_iccMax2c__signatureMap(iccMax2c__signatureMap_t x, iccMax2c__signatureMap_t y);



struct iccMax2c_funtype_39_s;
        typedef struct iccMax2c_funtype_39_s * iccMax2c_funtype_39_t;

struct iccMax2c_funtype_39_ftbl_s {uint32_t (* fptr)(struct iccMax2c_funtype_39_s *, mpz_ptr_t);
        uint32_t (* mptr)(struct iccMax2c_funtype_39_s *, mpz_ptr_t);
        void (* rptr)(struct iccMax2c_funtype_39_s *);
        struct iccMax2c_funtype_39_s * (* cptr)(struct iccMax2c_funtype_39_s *);};
typedef struct iccMax2c_funtype_39_ftbl_s * iccMax2c_funtype_39_ftbl_t;

struct iccMax2c_funtype_39_hashentry_s {uint32_t keyhash; mpz_ptr_t key; uint32_t value;}; 
typedef struct iccMax2c_funtype_39_hashentry_s iccMax2c_funtype_39_hashentry_t;

struct iccMax2c_funtype_39_htbl_s {uint32_t size; uint32_t num_entries; iccMax2c_funtype_39_hashentry_t * data;}; 
typedef struct iccMax2c_funtype_39_htbl_s * iccMax2c_funtype_39_htbl_t;

struct iccMax2c_funtype_39_s {uint32_t count;
        iccMax2c_funtype_39_ftbl_t ftbl;
        iccMax2c_funtype_39_htbl_t htbl;};
typedef struct iccMax2c_funtype_39_s * iccMax2c_funtype_39_t;

extern void release_iccMax2c_funtype_39(iccMax2c_funtype_39_t x);

extern iccMax2c_funtype_39_t copy_iccMax2c_funtype_39(iccMax2c_funtype_39_t x);

uint32_t lookup_iccMax2c_funtype_39(iccMax2c_funtype_39_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

iccMax2c_funtype_39_t dupdate_iccMax2c_funtype_39(iccMax2c_funtype_39_t a, mpz_ptr_t i, uint32_t v);

extern iccMax2c_funtype_39_t update_iccMax2c_funtype_39(iccMax2c_funtype_39_t a, mpz_ptr_t i, uint32_t v);

extern bool_t equal_iccMax2c_funtype_39(iccMax2c_funtype_39_t x, iccMax2c_funtype_39_t y);



struct iccMax2c_record_40_s {
        uint32_t count; 
        mpz_t length;
        iccMax2c_funtype_39_t seq;};
typedef struct iccMax2c_record_40_s * iccMax2c_record_40_t;

extern iccMax2c_record_40_t new_iccMax2c_record_40(void);

extern void release_iccMax2c_record_40(iccMax2c_record_40_t x);

extern iccMax2c_record_40_t copy_iccMax2c_record_40(iccMax2c_record_40_t x);

extern bool_t equal_iccMax2c_record_40(iccMax2c_record_40_t x, iccMax2c_record_40_t y);
typedef struct actual_iccMax2c_record_40_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_iccMax2c_record_40_t;

void release_iccMax2c_record_40_ptr(pointer_t x, type_actual_t iccMax2c_record_40);
extern bool_t equal_iccMax2c_record_40_ptr(pointer_t x, pointer_t y, actual_iccMax2c_record_40_t T);

actual_iccMax2c_record_40_t actual_iccMax2c_record_40(void);

extern iccMax2c_record_40_t update_iccMax2c_record_40_length(iccMax2c_record_40_t x, mpz_ptr_t v);

extern iccMax2c_record_40_t update_iccMax2c_record_40_seq(iccMax2c_record_40_t x, iccMax2c_funtype_39_t v);




struct iccMax2c_closure_41_s;
        typedef struct iccMax2c_closure_41_s * iccMax2c_closure_41_t;

struct iccMax2c_closure_41_s {uint32_t count;
         iccMax2c__signatureMap_ftbl_t ftbl;
         iccMax2c__signatureMap_htbl_t htbl;};

iccMax2c__signature_adt_t f_iccMax2c_closure_41(struct iccMax2c_closure_41_s * closure, uint32_t bvar);

iccMax2c__signature_adt_t m_iccMax2c_closure_41(struct iccMax2c_closure_41_s * closure, uint32_t bvar);

extern iccMax2c__signature_adt_t h_iccMax2c_closure_41(uint32_t ivar_5);

extern iccMax2c_closure_41_t new_iccMax2c_closure_41(void);

extern void release_iccMax2c_closure_41(iccMax2c__signatureMap_t closure);

extern iccMax2c_closure_41_t copy_iccMax2c_closure_41(iccMax2c_closure_41_t x);



struct iccMax2c_record_42_s {
        uint32_t count; 
        uint32_t endpos;
        uint8_t startpos;};
typedef struct iccMax2c_record_42_s * iccMax2c_record_42_t;

extern iccMax2c_record_42_t new_iccMax2c_record_42(void);

extern void release_iccMax2c_record_42(iccMax2c_record_42_t x);

extern iccMax2c_record_42_t copy_iccMax2c_record_42(iccMax2c_record_42_t x);

extern bool_t equal_iccMax2c_record_42(iccMax2c_record_42_t x, iccMax2c_record_42_t y);
typedef struct actual_iccMax2c_record_42_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_iccMax2c_record_42_t;

void release_iccMax2c_record_42_ptr(pointer_t x, type_actual_t iccMax2c_record_42);
extern bool_t equal_iccMax2c_record_42_ptr(pointer_t x, pointer_t y, actual_iccMax2c_record_42_t T);

actual_iccMax2c_record_42_t actual_iccMax2c_record_42(void);

extern iccMax2c_record_42_t update_iccMax2c_record_42_endpos(iccMax2c_record_42_t x, uint32_t v);

extern iccMax2c_record_42_t update_iccMax2c_record_42_startpos(iccMax2c_record_42_t x, uint8_t v);




struct iccMax2c_closure_43_s;
        typedef struct iccMax2c_closure_43_s * iccMax2c_closure_43_t;

struct iccMax2c_closure_43_s {uint32_t count;
         iccMax2c__signatureMap_ftbl_t ftbl;
         iccMax2c__signatureMap_htbl_t htbl;};

iccMax2c__signature_adt_t f_iccMax2c_closure_43(struct iccMax2c_closure_43_s * closure, uint32_t bvar);

iccMax2c__signature_adt_t m_iccMax2c_closure_43(struct iccMax2c_closure_43_s * closure, uint32_t bvar);

extern iccMax2c__signature_adt_t h_iccMax2c_closure_43(uint32_t ivar_5);

extern iccMax2c_closure_43_t new_iccMax2c_closure_43(void);

extern void release_iccMax2c_closure_43(iccMax2c__signatureMap_t closure);

extern iccMax2c_closure_43_t copy_iccMax2c_closure_43(iccMax2c_closure_43_t x);




struct iccMax2c_closure_44_s;
        typedef struct iccMax2c_closure_44_s * iccMax2c_closure_44_t;

struct iccMax2c_closure_44_s {uint32_t count;
         iccMax2c__signatureMap_ftbl_t ftbl;
         iccMax2c__signatureMap_htbl_t htbl;};

iccMax2c__signature_adt_t f_iccMax2c_closure_44(struct iccMax2c_closure_44_s * closure, uint32_t bvar);

iccMax2c__signature_adt_t m_iccMax2c_closure_44(struct iccMax2c_closure_44_s * closure, uint32_t bvar);

extern iccMax2c__signature_adt_t h_iccMax2c_closure_44(uint32_t ivar_5);

extern iccMax2c_closure_44_t new_iccMax2c_closure_44(void);

extern void release_iccMax2c_closure_44(iccMax2c__signatureMap_t closure);

extern iccMax2c_closure_44_t copy_iccMax2c_closure_44(iccMax2c_closure_44_t x);




struct iccMax2c_closure_45_s;
        typedef struct iccMax2c_closure_45_s * iccMax2c_closure_45_t;

struct iccMax2c_closure_45_s {uint32_t count;
         iccMax2c__signatureMap_ftbl_t ftbl;
         iccMax2c__signatureMap_htbl_t htbl;};

iccMax2c__signature_adt_t f_iccMax2c_closure_45(struct iccMax2c_closure_45_s * closure, uint32_t bvar);

iccMax2c__signature_adt_t m_iccMax2c_closure_45(struct iccMax2c_closure_45_s * closure, uint32_t bvar);

extern iccMax2c__signature_adt_t h_iccMax2c_closure_45(uint32_t ivar_5);

extern iccMax2c_closure_45_t new_iccMax2c_closure_45(void);

extern void release_iccMax2c_closure_45(iccMax2c__signatureMap_t closure);

extern iccMax2c_closure_45_t copy_iccMax2c_closure_45(iccMax2c_closure_45_t x);



struct iccMax2c_array_46_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         iccMax2c__signature_adt_t elems[]; };
typedef struct iccMax2c_array_46_s * iccMax2c_array_46_t;

extern iccMax2c_array_46_t new_iccMax2c_array_46(uint32_t size);

extern void release_iccMax2c_array_46(iccMax2c_array_46_t x);

extern iccMax2c_array_46_t copy_iccMax2c_array_46(iccMax2c_array_46_t x);

extern bool_t equal_iccMax2c_array_46(iccMax2c_array_46_t x, iccMax2c_array_46_t y);
typedef struct actual_iccMax2c_array_46_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_iccMax2c_array_46_t;

void release_iccMax2c_array_46_ptr(pointer_t x, type_actual_t iccMax2c_array_46);
extern bool_t equal_iccMax2c_array_46_ptr(pointer_t x, pointer_t y, type_actual_t T);

actual_iccMax2c_array_46_t actual_iccMax2c_array_46(void);

extern iccMax2c_array_46_t update_iccMax2c_array_46(iccMax2c_array_46_t x, uint32_t i, iccMax2c__signature_adt_t v);

extern iccMax2c_array_46_t upgrade_iccMax2c_array_46(iccMax2c_array_46_t x, uint32_t i, iccMax2c__signature_adt_t v);




struct iccMax2c_closure_47_s;
        typedef struct iccMax2c_closure_47_s * iccMax2c_closure_47_t;

struct iccMax2c_closure_47_s {uint32_t count;
         iccMax2c__signatureMap_ftbl_t ftbl;
         iccMax2c__signatureMap_htbl_t htbl;};

iccMax2c__signature_adt_t f_iccMax2c_closure_47(struct iccMax2c_closure_47_s * closure, uint32_t bvar);

iccMax2c__signature_adt_t m_iccMax2c_closure_47(struct iccMax2c_closure_47_s * closure, uint32_t bvar);

extern iccMax2c__signature_adt_t h_iccMax2c_closure_47(uint32_t ivar_8);

extern iccMax2c_closure_47_t new_iccMax2c_closure_47(void);

extern void release_iccMax2c_closure_47(iccMax2c__signatureMap_t closure);

extern iccMax2c_closure_47_t copy_iccMax2c_closure_47(iccMax2c_closure_47_t x);




struct iccMax2c_closure_48_s;
        typedef struct iccMax2c_closure_48_s * iccMax2c_closure_48_t;

struct iccMax2c_closure_48_s {uint32_t count;
         iccMax2c__signatureMap_ftbl_t ftbl;
         iccMax2c__signatureMap_htbl_t htbl;
        uint64_t fvar_1;
        bytestrings__bytestring_t fvar_2;
        uint32_t fvar_3;
        uint32_t fvar_4;};

iccMax2c__signature_adt_t f_iccMax2c_closure_48(struct iccMax2c_closure_48_s * closure, uint32_t bvar);

iccMax2c__signature_adt_t m_iccMax2c_closure_48(struct iccMax2c_closure_48_s * closure, uint32_t bvar);

extern iccMax2c__signature_adt_t h_iccMax2c_closure_48(uint32_t ivar_190, uint64_t ivar_1, bytestrings__bytestring_t ivar_2, uint32_t ivar_16, uint32_t ivar_29);

extern iccMax2c_closure_48_t new_iccMax2c_closure_48(void);

extern void release_iccMax2c_closure_48(iccMax2c__signatureMap_t closure);

extern iccMax2c_closure_48_t copy_iccMax2c_closure_48(iccMax2c_closure_48_t x);



extern bool_t r_iccMax2c__errorp(iccMax2c__result_adt_t ivar_1);

extern bool_t r_iccMax2c__valuep(iccMax2c__result_adt_t ivar_1);

extern iccMax2c__error_t update_iccMax2c__result_adt_code(iccMax2c__result_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t iccMax2c__result_adt_code(iccMax2c__result_adt_t ivar_1);

extern iccMax2c__error_t update_iccMax2c__result_adt_loc(iccMax2c__result_adt_t ivar_1, uint32_t ivar_3);

extern uint32_t iccMax2c__result_adt_loc(iccMax2c__result_adt_t ivar_1);

extern iccMax2c__error_t update_iccMax2c__result_adt_occ(iccMax2c__result_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t iccMax2c__result_adt_occ(iccMax2c__result_adt_t ivar_1);

extern iccMax2c__value_t update_iccMax2c__result_adt_vmax(iccMax2c__result_adt_t ivar_1, uint64_t ivar_3);

extern uint64_t iccMax2c__result_adt_vmax(iccMax2c__result_adt_t ivar_1);

extern iccMax2c__value_t update_iccMax2c__result_adt_vmin(iccMax2c__result_adt_t ivar_1, uint64_t ivar_3);

extern uint64_t iccMax2c__result_adt_vmin(iccMax2c__result_adt_t ivar_1);

extern iccMax2c__result_adt_t iccMax2c__error(uint8_t ivar_2, uint32_t ivar_3, uint8_t ivar_4);

extern iccMax2c__result_adt_t iccMax2c__value(uint64_t ivar_2, uint64_t ivar_3);

extern iccMax2c_funtype_3_t iccMax2c__result_ord(void);

extern uint8_t iccMax2c__ord__1(iccMax2c__result_adt_t ivar_1);

extern bool_t iccMax2c__subterm__1(iccMax2c__result_adt_t ivar_1, iccMax2c__result_adt_t ivar_2);

extern bool_t iccMax2c__doublelessp__1(iccMax2c__result_adt_t ivar_1, iccMax2c__result_adt_t ivar_2);

extern iccMax2c_funtype_4_t iccMax2c__reduce_nat__1(iccMax2c_funtype_6_t ivar_1, iccMax2c_funtype_8_t ivar_3);

extern iccMax2c_funtype_4_t iccMax2c__REDUCE_nat__1(iccMax2c_funtype_11_t ivar_1, iccMax2c_funtype_13_t ivar_3);

extern iccMax2c_funtype_15_t iccMax2c__reduce_ordinal__1(iccMax2c_funtype_16_t ivar_1, iccMax2c_funtype_17_t ivar_3);

extern iccMax2c_funtype_15_t iccMax2c__REDUCE_ordinal__1(iccMax2c_funtype_19_t ivar_1, iccMax2c_funtype_20_t ivar_3);

extern uint8_t iccMax2c__DefaultError(void);

extern uint8_t iccMax2c__Underflow(void);

extern uint8_t iccMax2c__Overflow(void);

extern uint8_t iccMax2c__nonZero(void);

extern uint8_t iccMax2c__Tval(void);

extern uint8_t iccMax2c__Eval(void);

extern uint8_t iccMax2c__UnexpectedEOF(void);

extern uint8_t iccMax2c__badTag(void);

extern uint8_t iccMax2c__Undefined(void);

extern uint64_t iccMax2c__print64(strings__string_t ivar_1, uint64_t ivar_2);

extern uint32_t iccMax2c__print32(strings__string_t ivar_1, uint32_t ivar_2);

extern uint16_t iccMax2c__print16(strings__string_t ivar_1, uint16_t ivar_2);

extern uint32_t iccMax2c__dataTag(void);

extern uint32_t iccMax2c__calcTag(void);

extern bool_t iccMax2c__channelVecOpp(uint32_t ivar_1);

extern iccMax2c__result_adt_t iccMax2c__ChannelVecOp(uint32_t ivar_1, uint64_t ivar_2, uint32_t ivar_3, uint64_t ivar_4, uint64_t ivar_5, uint16_t ivar_6, uint16_t ivar_7);

extern bool_t iccMax2c__subElemTagp(uint32_t ivar_1);

extern bool_t iccMax2c__stackOpTagp(uint32_t ivar_1);

extern uint64_t iccMax2c__stackOut(uint32_t ivar_1, uint16_t ivar_2, uint16_t ivar_3);

extern bool_t iccMax2c__matrixOpTagp(uint32_t ivar_1);

extern uint64_t iccMax2c__matrixIn(uint32_t ivar_1, uint16_t ivar_2, uint16_t ivar_3);

extern uint64_t iccMax2c__matrixOut(uint32_t ivar_1, uint16_t ivar_2, uint16_t ivar_3);

extern bool_t iccMax2c__seqFuncOpp(uint32_t ivar_1);

extern bool_t iccMax2c__FuncVecOpp(uint32_t ivar_1);

extern uint32_t iccMax2c__FuncVecIn(uint32_t ivar_1, uint16_t ivar_2);

extern uint32_t iccMax2c__FuncVecOut(uint32_t ivar_1, uint16_t ivar_2);

extern uint32_t iccMax2c__envTag(void);

extern uint32_t iccMax2c__ifTag(void);

extern uint32_t iccMax2c__elseTag(void);

extern uint32_t iccMax2c__selTag(void);

extern uint32_t iccMax2c__dfltTag(void);

extern uint32_t iccMax2c__caseTag(void);

extern uint16_t iccMax2c__readU16(bytestrings__bytestring_t ivar_1, uint32_t ivar_2);

extern uint32_t iccMax2c__readU32(bytestrings__bytestring_t ivar_1, uint32_t ivar_2);

extern uint64_t iccMax2c__readU64(bytestrings__bytestring_t ivar_1, uint32_t ivar_2);

extern bool_t r_iccMax2c__undefinedp(iccMax2c__signature_adt_t ivar_1);

extern bool_t r_iccMax2c__inoutp(iccMax2c__signature_adt_t ivar_1);

extern iccMax2c__inout_t update_iccMax2c__signature_adt_input(iccMax2c__signature_adt_t ivar_1, uint64_t ivar_3);

extern uint64_t iccMax2c__signature_adt_input(iccMax2c__signature_adt_t ivar_1);

extern iccMax2c__inout_t update_iccMax2c__signature_adt_output(iccMax2c__signature_adt_t ivar_1, uint64_t ivar_3);

extern uint64_t iccMax2c__signature_adt_output(iccMax2c__signature_adt_t ivar_1);

extern iccMax2c__inout_t update_iccMax2c__signature_adt_win(iccMax2c__signature_adt_t ivar_1, iccMax2c__window_t ivar_3);

extern iccMax2c__window_t iccMax2c__signature_adt_win(iccMax2c__signature_adt_t ivar_1);

extern iccMax2c__signature_adt_t iccMax2c__undefined(void);

extern iccMax2c__signature_adt_t iccMax2c__inout(uint64_t ivar_2, uint64_t ivar_3, iccMax2c__window_t ivar_4);

extern iccMax2c_funtype_25_t iccMax2c__signature_ord(void);

extern uint8_t iccMax2c__ord__2(iccMax2c__signature_adt_t ivar_1);

extern bool_t iccMax2c__subterm__2(iccMax2c__signature_adt_t ivar_1, iccMax2c__signature_adt_t ivar_2);

extern bool_t iccMax2c__doublelessp__2(iccMax2c__signature_adt_t ivar_1, iccMax2c__signature_adt_t ivar_2);

extern iccMax2c_funtype_26_t iccMax2c__reduce_nat__2(mpz_ptr_t ivar_1, iccMax2c_funtype_28_t ivar_2);

extern iccMax2c_funtype_26_t iccMax2c__REDUCE_nat__2(iccMax2c_funtype_26_t ivar_1, iccMax2c_funtype_31_t ivar_3);

extern iccMax2c_funtype_33_t iccMax2c__reduce_ordinal__2(ordstruct_adt__ordstruct_adt_t ivar_1, iccMax2c_funtype_34_t ivar_2);

extern iccMax2c_funtype_33_t iccMax2c__REDUCE_ordinal__2(iccMax2c_funtype_33_t ivar_1, iccMax2c_funtype_36_t ivar_3);

extern iccMax2c__result_adt_t iccMax2c__parseOperation(uint64_t ivar_1, bytestrings__bytestring_t ivar_2, iccMax2c__signatureMap_t ivar_3, uint64_t ivar_4, uint64_t ivar_5, iccMax2c__window_t ivar_6);

extern iccMax2c__result_adt_t iccMax2c__parsefunc(uint64_t ivar_1, bytestrings__bytestring_t ivar_2, iccMax2c__signatureMap_t ivar_3, iccMax2c__window_t ivar_5);

extern bytestrings__bytestring_t iccMax2c__iccteststring1(void);

extern bytestrings__bytestring_t iccMax2c__iccteststring2(void);

extern bytestrings__bytestring_t iccMax2c__iccteststring3(void);

extern bytestrings__bytestring_t iccMax2c__iccteststring4(void);

extern iccMax2c__signature_adt_t iccMax2c__subelemsig0(uint32_t ivar_1);

extern iccMax2c__result_adt_t iccMax2c__test1(void);

extern iccMax2c__result_adt_t iccMax2c__test2(void);

extern iccMax2c__result_adt_t iccMax2c__test3(void);

extern iccMax2c__result_adt_t iccMax2c__test4(void);

extern iccMax2c__signatureMap_t iccMax2c__makesubelementsig(uint32_t ivar_1, iccMax2c_array_46_t ivar_2, uint32_t ivar_3);

extern iccMax2c__signature_adt_t iccMax2c__parsecalc(uint64_t ivar_1, bytestrings__bytestring_t ivar_2, iccMax2c__window_t ivar_3);

extern bytestrings__bytestring_t iccMax2c__iccteststring5(void);

extern iccMax2c__signature_adt_t iccMax2c__test5(void);
#endif