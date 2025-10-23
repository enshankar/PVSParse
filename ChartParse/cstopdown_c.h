//Code generated using pvs2ir
#ifndef _cstopdown_h 
#define _cstopdown_h

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

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "lex2_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "sigma_c.h"

#include "lex4_c.h"

#include "arrayCount_c.h"

#include "sigma_uint32_c.h"

//cc -O3 -Wall -o cstopdown -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c /Users/e21660/shankar/pvs.git/lib/lex2_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c cstopdown_c.c sigma_c.c lex4_c.c arrayCount_c.c -lgmp 

struct cstopdown__peg_adt_s {
         uint32_t count; 
        uint8_t cstopdown__peg_adt_index;};
typedef struct cstopdown__peg_adt_s * cstopdown__peg_adt_t;

extern cstopdown__peg_adt_t new_cstopdown__peg_adt(void);

extern void release_cstopdown__peg_adt(cstopdown__peg_adt_t x);

extern cstopdown__peg_adt_t copy_cstopdown__peg_adt(cstopdown__peg_adt_t x);

extern bool_t equal_cstopdown__peg_adt(cstopdown__peg_adt_t x, cstopdown__peg_adt_t y);
extern char * json_cstopdown__peg_adt(cstopdown__peg_adt_t x);

typedef struct actual_cstopdown__peg_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown__peg_adt_t;
void release_cstopdown__peg_adt_ptr(pointer_t x, type_actual_t cstopdown__peg_adt);

extern bool_t equal_cstopdown__peg_adt_ptr(pointer_t x, pointer_t y, actual_cstopdown__peg_adt_t T);

extern char * json_cstopdown__peg_adt_ptr(pointer_t x,  actual_cstopdown__peg_adt_t T);

actual_cstopdown__peg_adt_t actual_cstopdown__peg_adt(void);

extern cstopdown__peg_adt_t update_cstopdown__peg_adt_cstopdown__peg_adt_index(cstopdown__peg_adt_t x, uint8_t v);



struct cstopdown_funtype_1_s;
        typedef struct cstopdown_funtype_1_s * cstopdown_funtype_1_t;

struct cstopdown_funtype_1_ftbl_s {bool_t (* fptr)(struct cstopdown_funtype_1_s *, uint8_t);
        bool_t (* mptr)(struct cstopdown_funtype_1_s *, uint8_t);
        void (* rptr)(struct cstopdown_funtype_1_s *);
        struct cstopdown_funtype_1_s * (* cptr)(struct cstopdown_funtype_1_s *);};
typedef struct cstopdown_funtype_1_ftbl_s * cstopdown_funtype_1_ftbl_t;

struct cstopdown_funtype_1_hashentry_s {uint32_t keyhash; uint8_t key; bool_t value;}; 
typedef struct cstopdown_funtype_1_hashentry_s cstopdown_funtype_1_hashentry_t;

struct cstopdown_funtype_1_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_1_hashentry_t * data;}; 
typedef struct cstopdown_funtype_1_htbl_s * cstopdown_funtype_1_htbl_t;

struct cstopdown_funtype_1_s {uint32_t count;
        cstopdown_funtype_1_ftbl_t ftbl;
        cstopdown_funtype_1_htbl_t htbl;};
typedef struct cstopdown_funtype_1_s * cstopdown_funtype_1_t;

extern void release_cstopdown_funtype_1(cstopdown_funtype_1_t x);

extern cstopdown_funtype_1_t copy_cstopdown_funtype_1(cstopdown_funtype_1_t x);

uint32_t lookup_cstopdown_funtype_1(cstopdown_funtype_1_htbl_t htbl, uint8_t i, uint32_t ihash);

cstopdown_funtype_1_t dupdate_cstopdown_funtype_1(cstopdown_funtype_1_t a, uint8_t i, bool_t v);

extern cstopdown_funtype_1_t update_cstopdown_funtype_1(cstopdown_funtype_1_t a, uint8_t i, bool_t v);

extern bool_t equal_cstopdown_funtype_1(cstopdown_funtype_1_t x, cstopdown_funtype_1_t y);

extern char* json_cstopdown_funtype_1(cstopdown_funtype_1_t x);



struct cstopdown__any_s {
        uint32_t count; 
        uint8_t cstopdown__peg_adt_index;
        cstopdown_funtype_1_t p;};
typedef struct cstopdown__any_s * cstopdown__any_t;

extern cstopdown__any_t new_cstopdown__any(void);

extern void release_cstopdown__any(cstopdown__any_t x);

extern cstopdown__any_t copy_cstopdown__any(cstopdown__any_t x);

extern bool_t equal_cstopdown__any(cstopdown__any_t x, cstopdown__any_t y);
extern char * json_cstopdown__any(cstopdown__any_t x);

typedef struct actual_cstopdown__any_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown__any_t;
void release_cstopdown__any_ptr(pointer_t x, type_actual_t cstopdown__any);

extern bool_t equal_cstopdown__any_ptr(pointer_t x, pointer_t y, actual_cstopdown__any_t T);

extern char * json_cstopdown__any_ptr(pointer_t x,  actual_cstopdown__any_t T);

actual_cstopdown__any_t actual_cstopdown__any(void);

extern cstopdown__any_t update_cstopdown__any_cstopdown__peg_adt_index(cstopdown__any_t x, uint8_t v);

extern cstopdown__any_t update_cstopdown__any_p(cstopdown__any_t x, cstopdown_funtype_1_t v);



struct cstopdown__terminal_s {
        uint32_t count; 
        uint8_t cstopdown__peg_adt_index;
        uint8_t a;};
typedef struct cstopdown__terminal_s * cstopdown__terminal_t;

extern cstopdown__terminal_t new_cstopdown__terminal(void);

extern void release_cstopdown__terminal(cstopdown__terminal_t x);

extern cstopdown__terminal_t copy_cstopdown__terminal(cstopdown__terminal_t x);

extern bool_t equal_cstopdown__terminal(cstopdown__terminal_t x, cstopdown__terminal_t y);
extern char * json_cstopdown__terminal(cstopdown__terminal_t x);

typedef struct actual_cstopdown__terminal_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown__terminal_t;
void release_cstopdown__terminal_ptr(pointer_t x, type_actual_t cstopdown__terminal);

extern bool_t equal_cstopdown__terminal_ptr(pointer_t x, pointer_t y, actual_cstopdown__terminal_t T);

extern char * json_cstopdown__terminal_ptr(pointer_t x,  actual_cstopdown__terminal_t T);

actual_cstopdown__terminal_t actual_cstopdown__terminal(void);

extern cstopdown__terminal_t update_cstopdown__terminal_cstopdown__peg_adt_index(cstopdown__terminal_t x, uint8_t v);

extern cstopdown__terminal_t update_cstopdown__terminal_a(cstopdown__terminal_t x, uint8_t v);



struct cstopdown__concat_s {
        uint32_t count; 
        uint8_t cstopdown__peg_adt_index;
        uint8_t e1;
        uint8_t e2;};
typedef struct cstopdown__concat_s * cstopdown__concat_t;

extern cstopdown__concat_t new_cstopdown__concat(void);

extern void release_cstopdown__concat(cstopdown__concat_t x);

extern cstopdown__concat_t copy_cstopdown__concat(cstopdown__concat_t x);

extern bool_t equal_cstopdown__concat(cstopdown__concat_t x, cstopdown__concat_t y);
extern char * json_cstopdown__concat(cstopdown__concat_t x);

typedef struct actual_cstopdown__concat_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown__concat_t;
void release_cstopdown__concat_ptr(pointer_t x, type_actual_t cstopdown__concat);

extern bool_t equal_cstopdown__concat_ptr(pointer_t x, pointer_t y, actual_cstopdown__concat_t T);

extern char * json_cstopdown__concat_ptr(pointer_t x,  actual_cstopdown__concat_t T);

actual_cstopdown__concat_t actual_cstopdown__concat(void);

extern cstopdown__concat_t update_cstopdown__concat_cstopdown__peg_adt_index(cstopdown__concat_t x, uint8_t v);

extern cstopdown__concat_t update_cstopdown__concat_e1(cstopdown__concat_t x, uint8_t v);

extern cstopdown__concat_t update_cstopdown__concat_e2(cstopdown__concat_t x, uint8_t v);



struct cstopdown__choice_s {
        uint32_t count; 
        uint8_t cstopdown__peg_adt_index;
        uint8_t e1;
        uint8_t e2;};
typedef struct cstopdown__choice_s * cstopdown__choice_t;

extern cstopdown__choice_t new_cstopdown__choice(void);

extern void release_cstopdown__choice(cstopdown__choice_t x);

extern cstopdown__choice_t copy_cstopdown__choice(cstopdown__choice_t x);

extern bool_t equal_cstopdown__choice(cstopdown__choice_t x, cstopdown__choice_t y);
extern char * json_cstopdown__choice(cstopdown__choice_t x);

typedef struct actual_cstopdown__choice_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown__choice_t;
void release_cstopdown__choice_ptr(pointer_t x, type_actual_t cstopdown__choice);

extern bool_t equal_cstopdown__choice_ptr(pointer_t x, pointer_t y, actual_cstopdown__choice_t T);

extern char * json_cstopdown__choice_ptr(pointer_t x,  actual_cstopdown__choice_t T);

actual_cstopdown__choice_t actual_cstopdown__choice(void);

extern cstopdown__choice_t update_cstopdown__choice_cstopdown__peg_adt_index(cstopdown__choice_t x, uint8_t v);

extern cstopdown__choice_t update_cstopdown__choice_e1(cstopdown__choice_t x, uint8_t v);

extern cstopdown__choice_t update_cstopdown__choice_e2(cstopdown__choice_t x, uint8_t v);



struct cstopdown__check_s {
        uint32_t count; 
        uint8_t cstopdown__peg_adt_index;
        uint8_t e;};
typedef struct cstopdown__check_s * cstopdown__check_t;

extern cstopdown__check_t new_cstopdown__check(void);

extern void release_cstopdown__check(cstopdown__check_t x);

extern cstopdown__check_t copy_cstopdown__check(cstopdown__check_t x);

extern bool_t equal_cstopdown__check(cstopdown__check_t x, cstopdown__check_t y);
extern char * json_cstopdown__check(cstopdown__check_t x);

typedef struct actual_cstopdown__check_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown__check_t;
void release_cstopdown__check_ptr(pointer_t x, type_actual_t cstopdown__check);

extern bool_t equal_cstopdown__check_ptr(pointer_t x, pointer_t y, actual_cstopdown__check_t T);

extern char * json_cstopdown__check_ptr(pointer_t x,  actual_cstopdown__check_t T);

actual_cstopdown__check_t actual_cstopdown__check(void);

extern cstopdown__check_t update_cstopdown__check_cstopdown__peg_adt_index(cstopdown__check_t x, uint8_t v);

extern cstopdown__check_t update_cstopdown__check_e(cstopdown__check_t x, uint8_t v);



struct cstopdown__neg_s {
        uint32_t count; 
        uint8_t cstopdown__peg_adt_index;
        uint8_t e;};
typedef struct cstopdown__neg_s * cstopdown__neg_t;

extern cstopdown__neg_t new_cstopdown__neg(void);

extern void release_cstopdown__neg(cstopdown__neg_t x);

extern cstopdown__neg_t copy_cstopdown__neg(cstopdown__neg_t x);

extern bool_t equal_cstopdown__neg(cstopdown__neg_t x, cstopdown__neg_t y);
extern char * json_cstopdown__neg(cstopdown__neg_t x);

typedef struct actual_cstopdown__neg_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown__neg_t;
void release_cstopdown__neg_ptr(pointer_t x, type_actual_t cstopdown__neg);

extern bool_t equal_cstopdown__neg_ptr(pointer_t x, pointer_t y, actual_cstopdown__neg_t T);

extern char * json_cstopdown__neg_ptr(pointer_t x,  actual_cstopdown__neg_t T);

actual_cstopdown__neg_t actual_cstopdown__neg(void);

extern cstopdown__neg_t update_cstopdown__neg_cstopdown__peg_adt_index(cstopdown__neg_t x, uint8_t v);

extern cstopdown__neg_t update_cstopdown__neg_e(cstopdown__neg_t x, uint8_t v);



struct cstopdown_funtype_8_s;
        typedef struct cstopdown_funtype_8_s * cstopdown_funtype_8_t;

struct cstopdown_funtype_8_ftbl_s {uint8_t (* fptr)(struct cstopdown_funtype_8_s *, cstopdown__peg_adt_t);
        uint8_t (* mptr)(struct cstopdown_funtype_8_s *, cstopdown__peg_adt_t);
        void (* rptr)(struct cstopdown_funtype_8_s *);
        struct cstopdown_funtype_8_s * (* cptr)(struct cstopdown_funtype_8_s *);};
typedef struct cstopdown_funtype_8_ftbl_s * cstopdown_funtype_8_ftbl_t;

struct cstopdown_funtype_8_hashentry_s {uint32_t keyhash; cstopdown__peg_adt_t key; uint8_t value;}; 
typedef struct cstopdown_funtype_8_hashentry_s cstopdown_funtype_8_hashentry_t;

struct cstopdown_funtype_8_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_8_hashentry_t * data;}; 
typedef struct cstopdown_funtype_8_htbl_s * cstopdown_funtype_8_htbl_t;

struct cstopdown_funtype_8_s {uint32_t count;
        cstopdown_funtype_8_ftbl_t ftbl;
        cstopdown_funtype_8_htbl_t htbl;};
typedef struct cstopdown_funtype_8_s * cstopdown_funtype_8_t;

extern void release_cstopdown_funtype_8(cstopdown_funtype_8_t x);

extern cstopdown_funtype_8_t copy_cstopdown_funtype_8(cstopdown_funtype_8_t x);

extern bool_t equal_cstopdown_funtype_8(cstopdown_funtype_8_t x, cstopdown_funtype_8_t y);

extern char* json_cstopdown_funtype_8(cstopdown_funtype_8_t x);



struct cstopdown_funtype_9_s;
        typedef struct cstopdown_funtype_9_s * cstopdown_funtype_9_t;

struct cstopdown_funtype_9_ftbl_s {mpz_ptr_t (* fptr)(struct cstopdown_funtype_9_s *, cstopdown__peg_adt_t);
        mpz_ptr_t (* mptr)(struct cstopdown_funtype_9_s *, cstopdown__peg_adt_t);
        void (* rptr)(struct cstopdown_funtype_9_s *);
        struct cstopdown_funtype_9_s * (* cptr)(struct cstopdown_funtype_9_s *);};
typedef struct cstopdown_funtype_9_ftbl_s * cstopdown_funtype_9_ftbl_t;

struct cstopdown_funtype_9_hashentry_s {uint32_t keyhash; cstopdown__peg_adt_t key; mpz_t value;}; 
typedef struct cstopdown_funtype_9_hashentry_s cstopdown_funtype_9_hashentry_t;

struct cstopdown_funtype_9_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_9_hashentry_t * data;}; 
typedef struct cstopdown_funtype_9_htbl_s * cstopdown_funtype_9_htbl_t;

struct cstopdown_funtype_9_s {uint32_t count;
        cstopdown_funtype_9_ftbl_t ftbl;
        cstopdown_funtype_9_htbl_t htbl;};
typedef struct cstopdown_funtype_9_s * cstopdown_funtype_9_t;

extern void release_cstopdown_funtype_9(cstopdown_funtype_9_t x);

extern cstopdown_funtype_9_t copy_cstopdown_funtype_9(cstopdown_funtype_9_t x);

extern bool_t equal_cstopdown_funtype_9(cstopdown_funtype_9_t x, cstopdown_funtype_9_t y);

extern char* json_cstopdown_funtype_9(cstopdown_funtype_9_t x);



struct cstopdown_funtype_10_s;
        typedef struct cstopdown_funtype_10_s * cstopdown_funtype_10_t;

struct cstopdown_funtype_10_ftbl_s {mpz_ptr_t (* fptr)(struct cstopdown_funtype_10_s *, cstopdown_funtype_1_t);
        mpz_ptr_t (* mptr)(struct cstopdown_funtype_10_s *, cstopdown_funtype_1_t);
        void (* rptr)(struct cstopdown_funtype_10_s *);
        struct cstopdown_funtype_10_s * (* cptr)(struct cstopdown_funtype_10_s *);};
typedef struct cstopdown_funtype_10_ftbl_s * cstopdown_funtype_10_ftbl_t;

struct cstopdown_funtype_10_hashentry_s {uint32_t keyhash; cstopdown_funtype_1_t key; mpz_t value;}; 
typedef struct cstopdown_funtype_10_hashentry_s cstopdown_funtype_10_hashentry_t;

struct cstopdown_funtype_10_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_10_hashentry_t * data;}; 
typedef struct cstopdown_funtype_10_htbl_s * cstopdown_funtype_10_htbl_t;

struct cstopdown_funtype_10_s {uint32_t count;
        cstopdown_funtype_10_ftbl_t ftbl;
        cstopdown_funtype_10_htbl_t htbl;};
typedef struct cstopdown_funtype_10_s * cstopdown_funtype_10_t;

extern void release_cstopdown_funtype_10(cstopdown_funtype_10_t x);

extern cstopdown_funtype_10_t copy_cstopdown_funtype_10(cstopdown_funtype_10_t x);

extern bool_t equal_cstopdown_funtype_10(cstopdown_funtype_10_t x, cstopdown_funtype_10_t y);

extern char* json_cstopdown_funtype_10(cstopdown_funtype_10_t x);



struct cstopdown_funtype_11_s;
        typedef struct cstopdown_funtype_11_s * cstopdown_funtype_11_t;

struct cstopdown_funtype_11_ftbl_s {mpz_ptr_t (* fptr)(struct cstopdown_funtype_11_s *, uint8_t);
        mpz_ptr_t (* mptr)(struct cstopdown_funtype_11_s *, uint8_t);
        void (* rptr)(struct cstopdown_funtype_11_s *);
        struct cstopdown_funtype_11_s * (* cptr)(struct cstopdown_funtype_11_s *);};
typedef struct cstopdown_funtype_11_ftbl_s * cstopdown_funtype_11_ftbl_t;

struct cstopdown_funtype_11_hashentry_s {uint32_t keyhash; uint8_t key; mpz_t value;}; 
typedef struct cstopdown_funtype_11_hashentry_s cstopdown_funtype_11_hashentry_t;

struct cstopdown_funtype_11_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_11_hashentry_t * data;}; 
typedef struct cstopdown_funtype_11_htbl_s * cstopdown_funtype_11_htbl_t;

struct cstopdown_funtype_11_s {uint32_t count;
        cstopdown_funtype_11_ftbl_t ftbl;
        cstopdown_funtype_11_htbl_t htbl;};
typedef struct cstopdown_funtype_11_s * cstopdown_funtype_11_t;

extern void release_cstopdown_funtype_11(cstopdown_funtype_11_t x);

extern cstopdown_funtype_11_t copy_cstopdown_funtype_11(cstopdown_funtype_11_t x);

uint32_t lookup_cstopdown_funtype_11(cstopdown_funtype_11_htbl_t htbl, uint8_t i, uint32_t ihash);

cstopdown_funtype_11_t dupdate_cstopdown_funtype_11(cstopdown_funtype_11_t a, uint8_t i, mpz_ptr_t v);

extern cstopdown_funtype_11_t update_cstopdown_funtype_11(cstopdown_funtype_11_t a, uint8_t i, mpz_ptr_t v);

extern bool_t equal_cstopdown_funtype_11(cstopdown_funtype_11_t x, cstopdown_funtype_11_t y);

extern char* json_cstopdown_funtype_11(cstopdown_funtype_11_t x);



struct cstopdown_record_12_s {
        uint32_t count; 
        uint8_t project_1;
        uint8_t project_2;};
typedef struct cstopdown_record_12_s * cstopdown_record_12_t;

extern cstopdown_record_12_t new_cstopdown_record_12(void);

extern void release_cstopdown_record_12(cstopdown_record_12_t x);

extern cstopdown_record_12_t copy_cstopdown_record_12(cstopdown_record_12_t x);

extern bool_t equal_cstopdown_record_12(cstopdown_record_12_t x, cstopdown_record_12_t y);
extern char * json_cstopdown_record_12(cstopdown_record_12_t x);

typedef struct actual_cstopdown_record_12_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown_record_12_t;
void release_cstopdown_record_12_ptr(pointer_t x, type_actual_t cstopdown_record_12);

extern bool_t equal_cstopdown_record_12_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_12_t T);

extern char * json_cstopdown_record_12_ptr(pointer_t x,  actual_cstopdown_record_12_t T);

actual_cstopdown_record_12_t actual_cstopdown_record_12(void);

extern cstopdown_record_12_t update_cstopdown_record_12_project_1(cstopdown_record_12_t x, uint8_t v);

extern cstopdown_record_12_t update_cstopdown_record_12_project_2(cstopdown_record_12_t x, uint8_t v);



struct cstopdown_funtype_13_s;
        typedef struct cstopdown_funtype_13_s * cstopdown_funtype_13_t;

struct cstopdown_funtype_13_ftbl_s {mpz_ptr_t (* fptr)(struct cstopdown_funtype_13_s *, cstopdown_record_12_t);
        mpz_ptr_t (* mptr)(struct cstopdown_funtype_13_s *, uint8_t, uint8_t);
        void (* rptr)(struct cstopdown_funtype_13_s *);
        struct cstopdown_funtype_13_s * (* cptr)(struct cstopdown_funtype_13_s *);};
typedef struct cstopdown_funtype_13_ftbl_s * cstopdown_funtype_13_ftbl_t;

struct cstopdown_funtype_13_hashentry_s {uint32_t keyhash; cstopdown_record_12_t key; mpz_t value;}; 
typedef struct cstopdown_funtype_13_hashentry_s cstopdown_funtype_13_hashentry_t;

struct cstopdown_funtype_13_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_13_hashentry_t * data;}; 
typedef struct cstopdown_funtype_13_htbl_s * cstopdown_funtype_13_htbl_t;

struct cstopdown_funtype_13_s {uint32_t count;
        cstopdown_funtype_13_ftbl_t ftbl;
        cstopdown_funtype_13_htbl_t htbl;};
typedef struct cstopdown_funtype_13_s * cstopdown_funtype_13_t;

extern void release_cstopdown_funtype_13(cstopdown_funtype_13_t x);

extern cstopdown_funtype_13_t copy_cstopdown_funtype_13(cstopdown_funtype_13_t x);

extern bool_t equal_cstopdown_funtype_13(cstopdown_funtype_13_t x, cstopdown_funtype_13_t y);

extern char* json_cstopdown_funtype_13(cstopdown_funtype_13_t x);




struct cstopdown_closure_14_s;
        typedef struct cstopdown_closure_14_s * cstopdown_closure_14_t;

struct cstopdown_closure_14_s {uint32_t count;
         cstopdown_funtype_9_ftbl_t ftbl;
         cstopdown_funtype_9_htbl_t htbl;
        cstopdown_funtype_11_t fvar_1;
        cstopdown_funtype_11_t fvar_2;
        cstopdown_funtype_13_t fvar_3;
        cstopdown_funtype_13_t fvar_4;
        cstopdown_funtype_11_t fvar_5;
        cstopdown_funtype_10_t fvar_6;
        mpz_t fvar_7;
        mpz_t fvar_8;};

mpz_ptr_t f_cstopdown_closure_14(struct cstopdown_closure_14_s * closure, cstopdown__peg_adt_t bvar);

mpz_ptr_t m_cstopdown_closure_14(struct cstopdown_closure_14_s * closure, cstopdown__peg_adt_t bvar);

extern mpz_ptr_t h_cstopdown_closure_14(cstopdown__peg_adt_t ivar_17, cstopdown_funtype_11_t ivar_12, cstopdown_funtype_11_t ivar_14, cstopdown_funtype_13_t ivar_10, cstopdown_funtype_13_t ivar_8, cstopdown_funtype_11_t ivar_6, cstopdown_funtype_10_t ivar_3, mpz_ptr_t ivar_2, mpz_ptr_t ivar_1);

extern cstopdown_closure_14_t new_cstopdown_closure_14(void);

extern void release_cstopdown_closure_14(cstopdown_funtype_9_t closure);

extern cstopdown_closure_14_t copy_cstopdown_closure_14(cstopdown_closure_14_t x);



struct cstopdown_record_15_s {
        uint32_t count; 
        cstopdown_funtype_1_t project_1;
        cstopdown__peg_adt_t project_2;};
typedef struct cstopdown_record_15_s * cstopdown_record_15_t;

extern cstopdown_record_15_t new_cstopdown_record_15(void);

extern void release_cstopdown_record_15(cstopdown_record_15_t x);

extern cstopdown_record_15_t copy_cstopdown_record_15(cstopdown_record_15_t x);

extern bool_t equal_cstopdown_record_15(cstopdown_record_15_t x, cstopdown_record_15_t y);
extern char * json_cstopdown_record_15(cstopdown_record_15_t x);

typedef struct actual_cstopdown_record_15_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown_record_15_t;
void release_cstopdown_record_15_ptr(pointer_t x, type_actual_t cstopdown_record_15);

extern bool_t equal_cstopdown_record_15_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_15_t T);

extern char * json_cstopdown_record_15_ptr(pointer_t x,  actual_cstopdown_record_15_t T);

actual_cstopdown_record_15_t actual_cstopdown_record_15(void);

extern cstopdown_record_15_t update_cstopdown_record_15_project_1(cstopdown_record_15_t x, cstopdown_funtype_1_t v);

extern cstopdown_record_15_t update_cstopdown_record_15_project_2(cstopdown_record_15_t x, cstopdown__peg_adt_t v);



struct cstopdown_funtype_16_s;
        typedef struct cstopdown_funtype_16_s * cstopdown_funtype_16_t;

struct cstopdown_funtype_16_ftbl_s {mpz_ptr_t (* fptr)(struct cstopdown_funtype_16_s *, cstopdown_record_15_t);
        mpz_ptr_t (* mptr)(struct cstopdown_funtype_16_s *, cstopdown_funtype_1_t, cstopdown__peg_adt_t);
        void (* rptr)(struct cstopdown_funtype_16_s *);
        struct cstopdown_funtype_16_s * (* cptr)(struct cstopdown_funtype_16_s *);};
typedef struct cstopdown_funtype_16_ftbl_s * cstopdown_funtype_16_ftbl_t;

struct cstopdown_funtype_16_hashentry_s {uint32_t keyhash; cstopdown_record_15_t key; mpz_t value;}; 
typedef struct cstopdown_funtype_16_hashentry_s cstopdown_funtype_16_hashentry_t;

struct cstopdown_funtype_16_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_16_hashentry_t * data;}; 
typedef struct cstopdown_funtype_16_htbl_s * cstopdown_funtype_16_htbl_t;

struct cstopdown_funtype_16_s {uint32_t count;
        cstopdown_funtype_16_ftbl_t ftbl;
        cstopdown_funtype_16_htbl_t htbl;};
typedef struct cstopdown_funtype_16_s * cstopdown_funtype_16_t;

extern void release_cstopdown_funtype_16(cstopdown_funtype_16_t x);

extern cstopdown_funtype_16_t copy_cstopdown_funtype_16(cstopdown_funtype_16_t x);

extern bool_t equal_cstopdown_funtype_16(cstopdown_funtype_16_t x, cstopdown_funtype_16_t y);

extern char* json_cstopdown_funtype_16(cstopdown_funtype_16_t x);



struct cstopdown_record_17_s {
        uint32_t count; 
        uint8_t project_1;
        cstopdown__peg_adt_t project_2;};
typedef struct cstopdown_record_17_s * cstopdown_record_17_t;

extern cstopdown_record_17_t new_cstopdown_record_17(void);

extern void release_cstopdown_record_17(cstopdown_record_17_t x);

extern cstopdown_record_17_t copy_cstopdown_record_17(cstopdown_record_17_t x);

extern bool_t equal_cstopdown_record_17(cstopdown_record_17_t x, cstopdown_record_17_t y);
extern char * json_cstopdown_record_17(cstopdown_record_17_t x);

typedef struct actual_cstopdown_record_17_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown_record_17_t;
void release_cstopdown_record_17_ptr(pointer_t x, type_actual_t cstopdown_record_17);

extern bool_t equal_cstopdown_record_17_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_17_t T);

extern char * json_cstopdown_record_17_ptr(pointer_t x,  actual_cstopdown_record_17_t T);

actual_cstopdown_record_17_t actual_cstopdown_record_17(void);

extern cstopdown_record_17_t update_cstopdown_record_17_project_1(cstopdown_record_17_t x, uint8_t v);

extern cstopdown_record_17_t update_cstopdown_record_17_project_2(cstopdown_record_17_t x, cstopdown__peg_adt_t v);



struct cstopdown_funtype_18_s;
        typedef struct cstopdown_funtype_18_s * cstopdown_funtype_18_t;

struct cstopdown_funtype_18_ftbl_s {mpz_ptr_t (* fptr)(struct cstopdown_funtype_18_s *, cstopdown_record_17_t);
        mpz_ptr_t (* mptr)(struct cstopdown_funtype_18_s *, uint8_t, cstopdown__peg_adt_t);
        void (* rptr)(struct cstopdown_funtype_18_s *);
        struct cstopdown_funtype_18_s * (* cptr)(struct cstopdown_funtype_18_s *);};
typedef struct cstopdown_funtype_18_ftbl_s * cstopdown_funtype_18_ftbl_t;

struct cstopdown_funtype_18_hashentry_s {uint32_t keyhash; cstopdown_record_17_t key; mpz_t value;}; 
typedef struct cstopdown_funtype_18_hashentry_s cstopdown_funtype_18_hashentry_t;

struct cstopdown_funtype_18_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_18_hashentry_t * data;}; 
typedef struct cstopdown_funtype_18_htbl_s * cstopdown_funtype_18_htbl_t;

struct cstopdown_funtype_18_s {uint32_t count;
        cstopdown_funtype_18_ftbl_t ftbl;
        cstopdown_funtype_18_htbl_t htbl;};
typedef struct cstopdown_funtype_18_s * cstopdown_funtype_18_t;

extern void release_cstopdown_funtype_18(cstopdown_funtype_18_t x);

extern cstopdown_funtype_18_t copy_cstopdown_funtype_18(cstopdown_funtype_18_t x);

extern bool_t equal_cstopdown_funtype_18(cstopdown_funtype_18_t x, cstopdown_funtype_18_t y);

extern char* json_cstopdown_funtype_18(cstopdown_funtype_18_t x);



struct cstopdown_record_19_s {
        uint32_t count; 
        uint8_t project_1;
        uint8_t project_2;
        cstopdown__peg_adt_t project_3;};
typedef struct cstopdown_record_19_s * cstopdown_record_19_t;

extern cstopdown_record_19_t new_cstopdown_record_19(void);

extern void release_cstopdown_record_19(cstopdown_record_19_t x);

extern cstopdown_record_19_t copy_cstopdown_record_19(cstopdown_record_19_t x);

extern bool_t equal_cstopdown_record_19(cstopdown_record_19_t x, cstopdown_record_19_t y);
extern char * json_cstopdown_record_19(cstopdown_record_19_t x);

typedef struct actual_cstopdown_record_19_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown_record_19_t;
void release_cstopdown_record_19_ptr(pointer_t x, type_actual_t cstopdown_record_19);

extern bool_t equal_cstopdown_record_19_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_19_t T);

extern char * json_cstopdown_record_19_ptr(pointer_t x,  actual_cstopdown_record_19_t T);

actual_cstopdown_record_19_t actual_cstopdown_record_19(void);

extern cstopdown_record_19_t update_cstopdown_record_19_project_1(cstopdown_record_19_t x, uint8_t v);

extern cstopdown_record_19_t update_cstopdown_record_19_project_2(cstopdown_record_19_t x, uint8_t v);

extern cstopdown_record_19_t update_cstopdown_record_19_project_3(cstopdown_record_19_t x, cstopdown__peg_adt_t v);



struct cstopdown_funtype_20_s;
        typedef struct cstopdown_funtype_20_s * cstopdown_funtype_20_t;

struct cstopdown_funtype_20_ftbl_s {mpz_ptr_t (* fptr)(struct cstopdown_funtype_20_s *, cstopdown_record_19_t);
        mpz_ptr_t (* mptr)(struct cstopdown_funtype_20_s *, uint8_t, uint8_t, cstopdown__peg_adt_t);
        void (* rptr)(struct cstopdown_funtype_20_s *);
        struct cstopdown_funtype_20_s * (* cptr)(struct cstopdown_funtype_20_s *);};
typedef struct cstopdown_funtype_20_ftbl_s * cstopdown_funtype_20_ftbl_t;

struct cstopdown_funtype_20_hashentry_s {uint32_t keyhash; cstopdown_record_19_t key; mpz_t value;}; 
typedef struct cstopdown_funtype_20_hashentry_s cstopdown_funtype_20_hashentry_t;

struct cstopdown_funtype_20_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_20_hashentry_t * data;}; 
typedef struct cstopdown_funtype_20_htbl_s * cstopdown_funtype_20_htbl_t;

struct cstopdown_funtype_20_s {uint32_t count;
        cstopdown_funtype_20_ftbl_t ftbl;
        cstopdown_funtype_20_htbl_t htbl;};
typedef struct cstopdown_funtype_20_s * cstopdown_funtype_20_t;

extern void release_cstopdown_funtype_20(cstopdown_funtype_20_t x);

extern cstopdown_funtype_20_t copy_cstopdown_funtype_20(cstopdown_funtype_20_t x);

extern bool_t equal_cstopdown_funtype_20(cstopdown_funtype_20_t x, cstopdown_funtype_20_t y);

extern char* json_cstopdown_funtype_20(cstopdown_funtype_20_t x);




struct cstopdown_closure_21_s;
        typedef struct cstopdown_closure_21_s * cstopdown_closure_21_t;

struct cstopdown_closure_21_s {uint32_t count;
         cstopdown_funtype_9_ftbl_t ftbl;
         cstopdown_funtype_9_htbl_t htbl;
        cstopdown_funtype_18_t fvar_1;
        cstopdown_funtype_18_t fvar_2;
        cstopdown_funtype_20_t fvar_3;
        cstopdown_funtype_20_t fvar_4;
        cstopdown_funtype_18_t fvar_5;
        cstopdown_funtype_16_t fvar_6;
        cstopdown_funtype_9_t fvar_7;
        cstopdown_funtype_9_t fvar_8;};

mpz_ptr_t f_cstopdown_closure_21(struct cstopdown_closure_21_s * closure, cstopdown__peg_adt_t bvar);

mpz_ptr_t m_cstopdown_closure_21(struct cstopdown_closure_21_s * closure, cstopdown__peg_adt_t bvar);

extern mpz_ptr_t h_cstopdown_closure_21(cstopdown__peg_adt_t ivar_19, cstopdown_funtype_18_t ivar_14, cstopdown_funtype_18_t ivar_16, cstopdown_funtype_20_t ivar_12, cstopdown_funtype_20_t ivar_10, cstopdown_funtype_18_t ivar_8, cstopdown_funtype_16_t ivar_5, cstopdown_funtype_9_t ivar_3, cstopdown_funtype_9_t ivar_1);

extern cstopdown_closure_21_t new_cstopdown_closure_21(void);

extern void release_cstopdown_closure_21(cstopdown_funtype_9_t closure);

extern cstopdown_closure_21_t copy_cstopdown_closure_21(cstopdown_closure_21_t x);



struct cstopdown_funtype_22_s;
        typedef struct cstopdown_funtype_22_s * cstopdown_funtype_22_t;

struct cstopdown_funtype_22_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct cstopdown_funtype_22_s *, cstopdown__peg_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct cstopdown_funtype_22_s *, cstopdown__peg_adt_t);
        void (* rptr)(struct cstopdown_funtype_22_s *);
        struct cstopdown_funtype_22_s * (* cptr)(struct cstopdown_funtype_22_s *);};
typedef struct cstopdown_funtype_22_ftbl_s * cstopdown_funtype_22_ftbl_t;

struct cstopdown_funtype_22_hashentry_s {uint32_t keyhash; cstopdown__peg_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct cstopdown_funtype_22_hashentry_s cstopdown_funtype_22_hashentry_t;

struct cstopdown_funtype_22_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_22_hashentry_t * data;}; 
typedef struct cstopdown_funtype_22_htbl_s * cstopdown_funtype_22_htbl_t;

struct cstopdown_funtype_22_s {uint32_t count;
        cstopdown_funtype_22_ftbl_t ftbl;
        cstopdown_funtype_22_htbl_t htbl;};
typedef struct cstopdown_funtype_22_s * cstopdown_funtype_22_t;

extern void release_cstopdown_funtype_22(cstopdown_funtype_22_t x);

extern cstopdown_funtype_22_t copy_cstopdown_funtype_22(cstopdown_funtype_22_t x);

extern bool_t equal_cstopdown_funtype_22(cstopdown_funtype_22_t x, cstopdown_funtype_22_t y);

extern char* json_cstopdown_funtype_22(cstopdown_funtype_22_t x);



struct cstopdown_funtype_23_s;
        typedef struct cstopdown_funtype_23_s * cstopdown_funtype_23_t;

struct cstopdown_funtype_23_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct cstopdown_funtype_23_s *, cstopdown_funtype_1_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct cstopdown_funtype_23_s *, cstopdown_funtype_1_t);
        void (* rptr)(struct cstopdown_funtype_23_s *);
        struct cstopdown_funtype_23_s * (* cptr)(struct cstopdown_funtype_23_s *);};
typedef struct cstopdown_funtype_23_ftbl_s * cstopdown_funtype_23_ftbl_t;

struct cstopdown_funtype_23_hashentry_s {uint32_t keyhash; cstopdown_funtype_1_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct cstopdown_funtype_23_hashentry_s cstopdown_funtype_23_hashentry_t;

struct cstopdown_funtype_23_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_23_hashentry_t * data;}; 
typedef struct cstopdown_funtype_23_htbl_s * cstopdown_funtype_23_htbl_t;

struct cstopdown_funtype_23_s {uint32_t count;
        cstopdown_funtype_23_ftbl_t ftbl;
        cstopdown_funtype_23_htbl_t htbl;};
typedef struct cstopdown_funtype_23_s * cstopdown_funtype_23_t;

extern void release_cstopdown_funtype_23(cstopdown_funtype_23_t x);

extern cstopdown_funtype_23_t copy_cstopdown_funtype_23(cstopdown_funtype_23_t x);

extern bool_t equal_cstopdown_funtype_23(cstopdown_funtype_23_t x, cstopdown_funtype_23_t y);

extern char* json_cstopdown_funtype_23(cstopdown_funtype_23_t x);



struct cstopdown_funtype_24_s;
        typedef struct cstopdown_funtype_24_s * cstopdown_funtype_24_t;

struct cstopdown_funtype_24_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct cstopdown_funtype_24_s *, uint8_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct cstopdown_funtype_24_s *, uint8_t);
        void (* rptr)(struct cstopdown_funtype_24_s *);
        struct cstopdown_funtype_24_s * (* cptr)(struct cstopdown_funtype_24_s *);};
typedef struct cstopdown_funtype_24_ftbl_s * cstopdown_funtype_24_ftbl_t;

struct cstopdown_funtype_24_hashentry_s {uint32_t keyhash; uint8_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct cstopdown_funtype_24_hashentry_s cstopdown_funtype_24_hashentry_t;

struct cstopdown_funtype_24_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_24_hashentry_t * data;}; 
typedef struct cstopdown_funtype_24_htbl_s * cstopdown_funtype_24_htbl_t;

struct cstopdown_funtype_24_s {uint32_t count;
        cstopdown_funtype_24_ftbl_t ftbl;
        cstopdown_funtype_24_htbl_t htbl;};
typedef struct cstopdown_funtype_24_s * cstopdown_funtype_24_t;

extern void release_cstopdown_funtype_24(cstopdown_funtype_24_t x);

extern cstopdown_funtype_24_t copy_cstopdown_funtype_24(cstopdown_funtype_24_t x);

uint32_t lookup_cstopdown_funtype_24(cstopdown_funtype_24_htbl_t htbl, uint8_t i, uint32_t ihash);

cstopdown_funtype_24_t dupdate_cstopdown_funtype_24(cstopdown_funtype_24_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v);

extern cstopdown_funtype_24_t update_cstopdown_funtype_24(cstopdown_funtype_24_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v);

extern bool_t equal_cstopdown_funtype_24(cstopdown_funtype_24_t x, cstopdown_funtype_24_t y);

extern char* json_cstopdown_funtype_24(cstopdown_funtype_24_t x);



struct cstopdown_funtype_25_s;
        typedef struct cstopdown_funtype_25_s * cstopdown_funtype_25_t;

struct cstopdown_funtype_25_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct cstopdown_funtype_25_s *, cstopdown_record_12_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct cstopdown_funtype_25_s *, uint8_t, uint8_t);
        void (* rptr)(struct cstopdown_funtype_25_s *);
        struct cstopdown_funtype_25_s * (* cptr)(struct cstopdown_funtype_25_s *);};
typedef struct cstopdown_funtype_25_ftbl_s * cstopdown_funtype_25_ftbl_t;

struct cstopdown_funtype_25_hashentry_s {uint32_t keyhash; cstopdown_record_12_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct cstopdown_funtype_25_hashentry_s cstopdown_funtype_25_hashentry_t;

struct cstopdown_funtype_25_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_25_hashentry_t * data;}; 
typedef struct cstopdown_funtype_25_htbl_s * cstopdown_funtype_25_htbl_t;

struct cstopdown_funtype_25_s {uint32_t count;
        cstopdown_funtype_25_ftbl_t ftbl;
        cstopdown_funtype_25_htbl_t htbl;};
typedef struct cstopdown_funtype_25_s * cstopdown_funtype_25_t;

extern void release_cstopdown_funtype_25(cstopdown_funtype_25_t x);

extern cstopdown_funtype_25_t copy_cstopdown_funtype_25(cstopdown_funtype_25_t x);

extern bool_t equal_cstopdown_funtype_25(cstopdown_funtype_25_t x, cstopdown_funtype_25_t y);

extern char* json_cstopdown_funtype_25(cstopdown_funtype_25_t x);




struct cstopdown_closure_26_s;
        typedef struct cstopdown_closure_26_s * cstopdown_closure_26_t;

struct cstopdown_closure_26_s {uint32_t count;
         cstopdown_funtype_22_ftbl_t ftbl;
         cstopdown_funtype_22_htbl_t htbl;
        cstopdown_funtype_24_t fvar_1;
        cstopdown_funtype_24_t fvar_2;
        cstopdown_funtype_25_t fvar_3;
        cstopdown_funtype_25_t fvar_4;
        cstopdown_funtype_24_t fvar_5;
        cstopdown_funtype_23_t fvar_6;
        ordstruct_adt__ordstruct_adt_t fvar_7;
        ordstruct_adt__ordstruct_adt_t fvar_8;};

ordstruct_adt__ordstruct_adt_t f_cstopdown_closure_26(struct cstopdown_closure_26_s * closure, cstopdown__peg_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_cstopdown_closure_26(struct cstopdown_closure_26_s * closure, cstopdown__peg_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_cstopdown_closure_26(cstopdown__peg_adt_t ivar_17, cstopdown_funtype_24_t ivar_12, cstopdown_funtype_24_t ivar_14, cstopdown_funtype_25_t ivar_10, cstopdown_funtype_25_t ivar_8, cstopdown_funtype_24_t ivar_6, cstopdown_funtype_23_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1);

extern cstopdown_closure_26_t new_cstopdown_closure_26(void);

extern void release_cstopdown_closure_26(cstopdown_funtype_22_t closure);

extern cstopdown_closure_26_t copy_cstopdown_closure_26(cstopdown_closure_26_t x);



struct cstopdown_funtype_27_s;
        typedef struct cstopdown_funtype_27_s * cstopdown_funtype_27_t;

struct cstopdown_funtype_27_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct cstopdown_funtype_27_s *, cstopdown_record_15_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct cstopdown_funtype_27_s *, cstopdown_funtype_1_t, cstopdown__peg_adt_t);
        void (* rptr)(struct cstopdown_funtype_27_s *);
        struct cstopdown_funtype_27_s * (* cptr)(struct cstopdown_funtype_27_s *);};
typedef struct cstopdown_funtype_27_ftbl_s * cstopdown_funtype_27_ftbl_t;

struct cstopdown_funtype_27_hashentry_s {uint32_t keyhash; cstopdown_record_15_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct cstopdown_funtype_27_hashentry_s cstopdown_funtype_27_hashentry_t;

struct cstopdown_funtype_27_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_27_hashentry_t * data;}; 
typedef struct cstopdown_funtype_27_htbl_s * cstopdown_funtype_27_htbl_t;

struct cstopdown_funtype_27_s {uint32_t count;
        cstopdown_funtype_27_ftbl_t ftbl;
        cstopdown_funtype_27_htbl_t htbl;};
typedef struct cstopdown_funtype_27_s * cstopdown_funtype_27_t;

extern void release_cstopdown_funtype_27(cstopdown_funtype_27_t x);

extern cstopdown_funtype_27_t copy_cstopdown_funtype_27(cstopdown_funtype_27_t x);

extern bool_t equal_cstopdown_funtype_27(cstopdown_funtype_27_t x, cstopdown_funtype_27_t y);

extern char* json_cstopdown_funtype_27(cstopdown_funtype_27_t x);



struct cstopdown_funtype_28_s;
        typedef struct cstopdown_funtype_28_s * cstopdown_funtype_28_t;

struct cstopdown_funtype_28_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct cstopdown_funtype_28_s *, cstopdown_record_17_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct cstopdown_funtype_28_s *, uint8_t, cstopdown__peg_adt_t);
        void (* rptr)(struct cstopdown_funtype_28_s *);
        struct cstopdown_funtype_28_s * (* cptr)(struct cstopdown_funtype_28_s *);};
typedef struct cstopdown_funtype_28_ftbl_s * cstopdown_funtype_28_ftbl_t;

struct cstopdown_funtype_28_hashentry_s {uint32_t keyhash; cstopdown_record_17_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct cstopdown_funtype_28_hashentry_s cstopdown_funtype_28_hashentry_t;

struct cstopdown_funtype_28_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_28_hashentry_t * data;}; 
typedef struct cstopdown_funtype_28_htbl_s * cstopdown_funtype_28_htbl_t;

struct cstopdown_funtype_28_s {uint32_t count;
        cstopdown_funtype_28_ftbl_t ftbl;
        cstopdown_funtype_28_htbl_t htbl;};
typedef struct cstopdown_funtype_28_s * cstopdown_funtype_28_t;

extern void release_cstopdown_funtype_28(cstopdown_funtype_28_t x);

extern cstopdown_funtype_28_t copy_cstopdown_funtype_28(cstopdown_funtype_28_t x);

extern bool_t equal_cstopdown_funtype_28(cstopdown_funtype_28_t x, cstopdown_funtype_28_t y);

extern char* json_cstopdown_funtype_28(cstopdown_funtype_28_t x);



struct cstopdown_funtype_29_s;
        typedef struct cstopdown_funtype_29_s * cstopdown_funtype_29_t;

struct cstopdown_funtype_29_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct cstopdown_funtype_29_s *, cstopdown_record_19_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct cstopdown_funtype_29_s *, uint8_t, uint8_t, cstopdown__peg_adt_t);
        void (* rptr)(struct cstopdown_funtype_29_s *);
        struct cstopdown_funtype_29_s * (* cptr)(struct cstopdown_funtype_29_s *);};
typedef struct cstopdown_funtype_29_ftbl_s * cstopdown_funtype_29_ftbl_t;

struct cstopdown_funtype_29_hashentry_s {uint32_t keyhash; cstopdown_record_19_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct cstopdown_funtype_29_hashentry_s cstopdown_funtype_29_hashentry_t;

struct cstopdown_funtype_29_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_29_hashentry_t * data;}; 
typedef struct cstopdown_funtype_29_htbl_s * cstopdown_funtype_29_htbl_t;

struct cstopdown_funtype_29_s {uint32_t count;
        cstopdown_funtype_29_ftbl_t ftbl;
        cstopdown_funtype_29_htbl_t htbl;};
typedef struct cstopdown_funtype_29_s * cstopdown_funtype_29_t;

extern void release_cstopdown_funtype_29(cstopdown_funtype_29_t x);

extern cstopdown_funtype_29_t copy_cstopdown_funtype_29(cstopdown_funtype_29_t x);

extern bool_t equal_cstopdown_funtype_29(cstopdown_funtype_29_t x, cstopdown_funtype_29_t y);

extern char* json_cstopdown_funtype_29(cstopdown_funtype_29_t x);




struct cstopdown_closure_30_s;
        typedef struct cstopdown_closure_30_s * cstopdown_closure_30_t;

struct cstopdown_closure_30_s {uint32_t count;
         cstopdown_funtype_22_ftbl_t ftbl;
         cstopdown_funtype_22_htbl_t htbl;
        cstopdown_funtype_28_t fvar_1;
        cstopdown_funtype_28_t fvar_2;
        cstopdown_funtype_29_t fvar_3;
        cstopdown_funtype_29_t fvar_4;
        cstopdown_funtype_28_t fvar_5;
        cstopdown_funtype_27_t fvar_6;
        cstopdown_funtype_22_t fvar_7;
        cstopdown_funtype_22_t fvar_8;};

ordstruct_adt__ordstruct_adt_t f_cstopdown_closure_30(struct cstopdown_closure_30_s * closure, cstopdown__peg_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_cstopdown_closure_30(struct cstopdown_closure_30_s * closure, cstopdown__peg_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_cstopdown_closure_30(cstopdown__peg_adt_t ivar_19, cstopdown_funtype_28_t ivar_14, cstopdown_funtype_28_t ivar_16, cstopdown_funtype_29_t ivar_12, cstopdown_funtype_29_t ivar_10, cstopdown_funtype_28_t ivar_8, cstopdown_funtype_27_t ivar_5, cstopdown_funtype_22_t ivar_3, cstopdown_funtype_22_t ivar_1);

extern cstopdown_closure_30_t new_cstopdown_closure_30(void);

extern void release_cstopdown_closure_30(cstopdown_funtype_22_t closure);

extern cstopdown_closure_30_t copy_cstopdown_closure_30(cstopdown_closure_30_t x);



struct cstopdown__ent_adt_s {
         uint32_t count; 
        uint8_t cstopdown__ent_adt_index;};
typedef struct cstopdown__ent_adt_s * cstopdown__ent_adt_t;

extern cstopdown__ent_adt_t new_cstopdown__ent_adt(void);

extern void release_cstopdown__ent_adt(cstopdown__ent_adt_t x);

extern cstopdown__ent_adt_t copy_cstopdown__ent_adt(cstopdown__ent_adt_t x);

extern bool_t equal_cstopdown__ent_adt(cstopdown__ent_adt_t x, cstopdown__ent_adt_t y);
extern char * json_cstopdown__ent_adt(cstopdown__ent_adt_t x);

typedef struct actual_cstopdown__ent_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown__ent_adt_t;
void release_cstopdown__ent_adt_ptr(pointer_t x, type_actual_t cstopdown__ent_adt);

extern bool_t equal_cstopdown__ent_adt_ptr(pointer_t x, pointer_t y, actual_cstopdown__ent_adt_t T);

extern char * json_cstopdown__ent_adt_ptr(pointer_t x,  actual_cstopdown__ent_adt_t T);

actual_cstopdown__ent_adt_t actual_cstopdown__ent_adt(void);

extern cstopdown__ent_adt_t update_cstopdown__ent_adt_cstopdown__ent_adt_index(cstopdown__ent_adt_t x, uint8_t v);



struct cstopdown__fail_s {
        uint32_t count; 
        uint8_t cstopdown__ent_adt_index;
        uint64_t dep;};
typedef struct cstopdown__fail_s * cstopdown__fail_t;

extern cstopdown__fail_t new_cstopdown__fail(void);

extern void release_cstopdown__fail(cstopdown__fail_t x);

extern cstopdown__fail_t copy_cstopdown__fail(cstopdown__fail_t x);

extern bool_t equal_cstopdown__fail(cstopdown__fail_t x, cstopdown__fail_t y);
extern char * json_cstopdown__fail(cstopdown__fail_t x);

typedef struct actual_cstopdown__fail_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown__fail_t;
void release_cstopdown__fail_ptr(pointer_t x, type_actual_t cstopdown__fail);

extern bool_t equal_cstopdown__fail_ptr(pointer_t x, pointer_t y, actual_cstopdown__fail_t T);

extern char * json_cstopdown__fail_ptr(pointer_t x,  actual_cstopdown__fail_t T);

actual_cstopdown__fail_t actual_cstopdown__fail(void);

extern cstopdown__fail_t update_cstopdown__fail_cstopdown__ent_adt_index(cstopdown__fail_t x, uint8_t v);

extern cstopdown__fail_t update_cstopdown__fail_dep(cstopdown__fail_t x, uint64_t v);



struct cstopdown__good_s {
        uint32_t count; 
        uint8_t cstopdown__ent_adt_index;
        uint64_t dep;
        uint32_t span;};
typedef struct cstopdown__good_s * cstopdown__good_t;

extern cstopdown__good_t new_cstopdown__good(void);

extern void release_cstopdown__good(cstopdown__good_t x);

extern cstopdown__good_t copy_cstopdown__good(cstopdown__good_t x);

extern bool_t equal_cstopdown__good(cstopdown__good_t x, cstopdown__good_t y);
extern char * json_cstopdown__good(cstopdown__good_t x);

typedef struct actual_cstopdown__good_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown__good_t;
void release_cstopdown__good_ptr(pointer_t x, type_actual_t cstopdown__good);

extern bool_t equal_cstopdown__good_ptr(pointer_t x, pointer_t y, actual_cstopdown__good_t T);

extern char * json_cstopdown__good_ptr(pointer_t x,  actual_cstopdown__good_t T);

actual_cstopdown__good_t actual_cstopdown__good(void);

extern cstopdown__good_t update_cstopdown__good_cstopdown__ent_adt_index(cstopdown__good_t x, uint8_t v);

extern cstopdown__good_t update_cstopdown__good_dep(cstopdown__good_t x, uint64_t v);

extern cstopdown__good_t update_cstopdown__good_span(cstopdown__good_t x, uint32_t v);



struct cstopdown__push_s {
        uint32_t count; 
        uint8_t cstopdown__ent_adt_index;
        uint32_t pos;
        uint8_t nt;};
typedef struct cstopdown__push_s * cstopdown__push_t;

extern cstopdown__push_t new_cstopdown__push(void);

extern void release_cstopdown__push(cstopdown__push_t x);

extern cstopdown__push_t copy_cstopdown__push(cstopdown__push_t x);

extern bool_t equal_cstopdown__push(cstopdown__push_t x, cstopdown__push_t y);
extern char * json_cstopdown__push(cstopdown__push_t x);

typedef struct actual_cstopdown__push_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown__push_t;
void release_cstopdown__push_ptr(pointer_t x, type_actual_t cstopdown__push);

extern bool_t equal_cstopdown__push_ptr(pointer_t x, pointer_t y, actual_cstopdown__push_t T);

extern char * json_cstopdown__push_ptr(pointer_t x,  actual_cstopdown__push_t T);

actual_cstopdown__push_t actual_cstopdown__push(void);

extern cstopdown__push_t update_cstopdown__push_cstopdown__ent_adt_index(cstopdown__push_t x, uint8_t v);

extern cstopdown__push_t update_cstopdown__push_pos(cstopdown__push_t x, uint32_t v);

extern cstopdown__push_t update_cstopdown__push_nt(cstopdown__push_t x, uint8_t v);



struct cstopdown_funtype_35_s;
        typedef struct cstopdown_funtype_35_s * cstopdown_funtype_35_t;

struct cstopdown_funtype_35_ftbl_s {uint8_t (* fptr)(struct cstopdown_funtype_35_s *, cstopdown__ent_adt_t);
        uint8_t (* mptr)(struct cstopdown_funtype_35_s *, cstopdown__ent_adt_t);
        void (* rptr)(struct cstopdown_funtype_35_s *);
        struct cstopdown_funtype_35_s * (* cptr)(struct cstopdown_funtype_35_s *);};
typedef struct cstopdown_funtype_35_ftbl_s * cstopdown_funtype_35_ftbl_t;

struct cstopdown_funtype_35_hashentry_s {uint32_t keyhash; cstopdown__ent_adt_t key; uint8_t value;}; 
typedef struct cstopdown_funtype_35_hashentry_s cstopdown_funtype_35_hashentry_t;

struct cstopdown_funtype_35_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_35_hashentry_t * data;}; 
typedef struct cstopdown_funtype_35_htbl_s * cstopdown_funtype_35_htbl_t;

struct cstopdown_funtype_35_s {uint32_t count;
        cstopdown_funtype_35_ftbl_t ftbl;
        cstopdown_funtype_35_htbl_t htbl;};
typedef struct cstopdown_funtype_35_s * cstopdown_funtype_35_t;

extern void release_cstopdown_funtype_35(cstopdown_funtype_35_t x);

extern cstopdown_funtype_35_t copy_cstopdown_funtype_35(cstopdown_funtype_35_t x);

extern bool_t equal_cstopdown_funtype_35(cstopdown_funtype_35_t x, cstopdown_funtype_35_t y);

extern char* json_cstopdown_funtype_35(cstopdown_funtype_35_t x);



struct cstopdown_funtype_36_s;
        typedef struct cstopdown_funtype_36_s * cstopdown_funtype_36_t;

struct cstopdown_funtype_36_ftbl_s {mpz_ptr_t (* fptr)(struct cstopdown_funtype_36_s *, cstopdown__ent_adt_t);
        mpz_ptr_t (* mptr)(struct cstopdown_funtype_36_s *, cstopdown__ent_adt_t);
        void (* rptr)(struct cstopdown_funtype_36_s *);
        struct cstopdown_funtype_36_s * (* cptr)(struct cstopdown_funtype_36_s *);};
typedef struct cstopdown_funtype_36_ftbl_s * cstopdown_funtype_36_ftbl_t;

struct cstopdown_funtype_36_hashentry_s {uint32_t keyhash; cstopdown__ent_adt_t key; mpz_t value;}; 
typedef struct cstopdown_funtype_36_hashentry_s cstopdown_funtype_36_hashentry_t;

struct cstopdown_funtype_36_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_36_hashentry_t * data;}; 
typedef struct cstopdown_funtype_36_htbl_s * cstopdown_funtype_36_htbl_t;

struct cstopdown_funtype_36_s {uint32_t count;
        cstopdown_funtype_36_ftbl_t ftbl;
        cstopdown_funtype_36_htbl_t htbl;};
typedef struct cstopdown_funtype_36_s * cstopdown_funtype_36_t;

extern void release_cstopdown_funtype_36(cstopdown_funtype_36_t x);

extern cstopdown_funtype_36_t copy_cstopdown_funtype_36(cstopdown_funtype_36_t x);

extern bool_t equal_cstopdown_funtype_36(cstopdown_funtype_36_t x, cstopdown_funtype_36_t y);

extern char* json_cstopdown_funtype_36(cstopdown_funtype_36_t x);



struct cstopdown_funtype_37_s;
        typedef struct cstopdown_funtype_37_s * cstopdown_funtype_37_t;

struct cstopdown_funtype_37_ftbl_s {mpz_ptr_t (* fptr)(struct cstopdown_funtype_37_s *, uint64_t);
        mpz_ptr_t (* mptr)(struct cstopdown_funtype_37_s *, uint64_t);
        void (* rptr)(struct cstopdown_funtype_37_s *);
        struct cstopdown_funtype_37_s * (* cptr)(struct cstopdown_funtype_37_s *);};
typedef struct cstopdown_funtype_37_ftbl_s * cstopdown_funtype_37_ftbl_t;

struct cstopdown_funtype_37_hashentry_s {uint32_t keyhash; uint64_t key; mpz_t value;}; 
typedef struct cstopdown_funtype_37_hashentry_s cstopdown_funtype_37_hashentry_t;

struct cstopdown_funtype_37_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_37_hashentry_t * data;}; 
typedef struct cstopdown_funtype_37_htbl_s * cstopdown_funtype_37_htbl_t;

struct cstopdown_funtype_37_s {uint32_t count;
        cstopdown_funtype_37_ftbl_t ftbl;
        cstopdown_funtype_37_htbl_t htbl;};
typedef struct cstopdown_funtype_37_s * cstopdown_funtype_37_t;

extern void release_cstopdown_funtype_37(cstopdown_funtype_37_t x);

extern cstopdown_funtype_37_t copy_cstopdown_funtype_37(cstopdown_funtype_37_t x);

uint32_t lookup_cstopdown_funtype_37(cstopdown_funtype_37_htbl_t htbl, uint64_t i, uint32_t ihash);

cstopdown_funtype_37_t dupdate_cstopdown_funtype_37(cstopdown_funtype_37_t a, uint64_t i, mpz_ptr_t v);

extern cstopdown_funtype_37_t update_cstopdown_funtype_37(cstopdown_funtype_37_t a, uint64_t i, mpz_ptr_t v);

extern bool_t equal_cstopdown_funtype_37(cstopdown_funtype_37_t x, cstopdown_funtype_37_t y);

extern char* json_cstopdown_funtype_37(cstopdown_funtype_37_t x);



struct cstopdown_record_38_s {
        uint32_t count; 
        uint64_t project_1;
        uint32_t project_2;};
typedef struct cstopdown_record_38_s * cstopdown_record_38_t;

extern cstopdown_record_38_t new_cstopdown_record_38(void);

extern void release_cstopdown_record_38(cstopdown_record_38_t x);

extern cstopdown_record_38_t copy_cstopdown_record_38(cstopdown_record_38_t x);

extern bool_t equal_cstopdown_record_38(cstopdown_record_38_t x, cstopdown_record_38_t y);
extern char * json_cstopdown_record_38(cstopdown_record_38_t x);

typedef struct actual_cstopdown_record_38_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown_record_38_t;
void release_cstopdown_record_38_ptr(pointer_t x, type_actual_t cstopdown_record_38);

extern bool_t equal_cstopdown_record_38_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_38_t T);

extern char * json_cstopdown_record_38_ptr(pointer_t x,  actual_cstopdown_record_38_t T);

actual_cstopdown_record_38_t actual_cstopdown_record_38(void);

extern cstopdown_record_38_t update_cstopdown_record_38_project_1(cstopdown_record_38_t x, uint64_t v);

extern cstopdown_record_38_t update_cstopdown_record_38_project_2(cstopdown_record_38_t x, uint32_t v);



struct cstopdown_funtype_39_s;
        typedef struct cstopdown_funtype_39_s * cstopdown_funtype_39_t;

struct cstopdown_funtype_39_ftbl_s {mpz_ptr_t (* fptr)(struct cstopdown_funtype_39_s *, cstopdown_record_38_t);
        mpz_ptr_t (* mptr)(struct cstopdown_funtype_39_s *, uint64_t, uint32_t);
        void (* rptr)(struct cstopdown_funtype_39_s *);
        struct cstopdown_funtype_39_s * (* cptr)(struct cstopdown_funtype_39_s *);};
typedef struct cstopdown_funtype_39_ftbl_s * cstopdown_funtype_39_ftbl_t;

struct cstopdown_funtype_39_hashentry_s {uint32_t keyhash; cstopdown_record_38_t key; mpz_t value;}; 
typedef struct cstopdown_funtype_39_hashentry_s cstopdown_funtype_39_hashentry_t;

struct cstopdown_funtype_39_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_39_hashentry_t * data;}; 
typedef struct cstopdown_funtype_39_htbl_s * cstopdown_funtype_39_htbl_t;

struct cstopdown_funtype_39_s {uint32_t count;
        cstopdown_funtype_39_ftbl_t ftbl;
        cstopdown_funtype_39_htbl_t htbl;};
typedef struct cstopdown_funtype_39_s * cstopdown_funtype_39_t;

extern void release_cstopdown_funtype_39(cstopdown_funtype_39_t x);

extern cstopdown_funtype_39_t copy_cstopdown_funtype_39(cstopdown_funtype_39_t x);

extern bool_t equal_cstopdown_funtype_39(cstopdown_funtype_39_t x, cstopdown_funtype_39_t y);

extern char* json_cstopdown_funtype_39(cstopdown_funtype_39_t x);



struct cstopdown_record_40_s {
        uint32_t count; 
        uint32_t project_1;
        uint8_t project_2;};
typedef struct cstopdown_record_40_s * cstopdown_record_40_t;

extern cstopdown_record_40_t new_cstopdown_record_40(void);

extern void release_cstopdown_record_40(cstopdown_record_40_t x);

extern cstopdown_record_40_t copy_cstopdown_record_40(cstopdown_record_40_t x);

extern bool_t equal_cstopdown_record_40(cstopdown_record_40_t x, cstopdown_record_40_t y);
extern char * json_cstopdown_record_40(cstopdown_record_40_t x);

typedef struct actual_cstopdown_record_40_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown_record_40_t;
void release_cstopdown_record_40_ptr(pointer_t x, type_actual_t cstopdown_record_40);

extern bool_t equal_cstopdown_record_40_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_40_t T);

extern char * json_cstopdown_record_40_ptr(pointer_t x,  actual_cstopdown_record_40_t T);

actual_cstopdown_record_40_t actual_cstopdown_record_40(void);

extern cstopdown_record_40_t update_cstopdown_record_40_project_1(cstopdown_record_40_t x, uint32_t v);

extern cstopdown_record_40_t update_cstopdown_record_40_project_2(cstopdown_record_40_t x, uint8_t v);



struct cstopdown_funtype_41_s;
        typedef struct cstopdown_funtype_41_s * cstopdown_funtype_41_t;

struct cstopdown_funtype_41_ftbl_s {mpz_ptr_t (* fptr)(struct cstopdown_funtype_41_s *, cstopdown_record_40_t);
        mpz_ptr_t (* mptr)(struct cstopdown_funtype_41_s *, uint32_t, uint8_t);
        void (* rptr)(struct cstopdown_funtype_41_s *);
        struct cstopdown_funtype_41_s * (* cptr)(struct cstopdown_funtype_41_s *);};
typedef struct cstopdown_funtype_41_ftbl_s * cstopdown_funtype_41_ftbl_t;

struct cstopdown_funtype_41_hashentry_s {uint32_t keyhash; cstopdown_record_40_t key; mpz_t value;}; 
typedef struct cstopdown_funtype_41_hashentry_s cstopdown_funtype_41_hashentry_t;

struct cstopdown_funtype_41_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_41_hashentry_t * data;}; 
typedef struct cstopdown_funtype_41_htbl_s * cstopdown_funtype_41_htbl_t;

struct cstopdown_funtype_41_s {uint32_t count;
        cstopdown_funtype_41_ftbl_t ftbl;
        cstopdown_funtype_41_htbl_t htbl;};
typedef struct cstopdown_funtype_41_s * cstopdown_funtype_41_t;

extern void release_cstopdown_funtype_41(cstopdown_funtype_41_t x);

extern cstopdown_funtype_41_t copy_cstopdown_funtype_41(cstopdown_funtype_41_t x);

extern bool_t equal_cstopdown_funtype_41(cstopdown_funtype_41_t x, cstopdown_funtype_41_t y);

extern char* json_cstopdown_funtype_41(cstopdown_funtype_41_t x);




struct cstopdown_closure_42_s;
        typedef struct cstopdown_closure_42_s * cstopdown_closure_42_t;

struct cstopdown_closure_42_s {uint32_t count;
         cstopdown_funtype_36_ftbl_t ftbl;
         cstopdown_funtype_36_htbl_t htbl;
        cstopdown_funtype_39_t fvar_1;
        cstopdown_funtype_41_t fvar_2;
        mpz_t fvar_3;
        mpz_t fvar_4;
        cstopdown_funtype_37_t fvar_5;};

mpz_ptr_t f_cstopdown_closure_42(struct cstopdown_closure_42_s * closure, cstopdown__ent_adt_t bvar);

mpz_ptr_t m_cstopdown_closure_42(struct cstopdown_closure_42_s * closure, cstopdown__ent_adt_t bvar);

extern mpz_ptr_t h_cstopdown_closure_42(cstopdown__ent_adt_t ivar_10, cstopdown_funtype_39_t ivar_5, cstopdown_funtype_41_t ivar_7, mpz_ptr_t ivar_4, mpz_ptr_t ivar_3, cstopdown_funtype_37_t ivar_1);

extern cstopdown_closure_42_t new_cstopdown_closure_42(void);

extern void release_cstopdown_closure_42(cstopdown_funtype_36_t closure);

extern cstopdown_closure_42_t copy_cstopdown_closure_42(cstopdown_closure_42_t x);



struct cstopdown_record_43_s {
        uint32_t count; 
        uint64_t project_1;
        cstopdown__ent_adt_t project_2;};
typedef struct cstopdown_record_43_s * cstopdown_record_43_t;

extern cstopdown_record_43_t new_cstopdown_record_43(void);

extern void release_cstopdown_record_43(cstopdown_record_43_t x);

extern cstopdown_record_43_t copy_cstopdown_record_43(cstopdown_record_43_t x);

extern bool_t equal_cstopdown_record_43(cstopdown_record_43_t x, cstopdown_record_43_t y);
extern char * json_cstopdown_record_43(cstopdown_record_43_t x);

typedef struct actual_cstopdown_record_43_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown_record_43_t;
void release_cstopdown_record_43_ptr(pointer_t x, type_actual_t cstopdown_record_43);

extern bool_t equal_cstopdown_record_43_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_43_t T);

extern char * json_cstopdown_record_43_ptr(pointer_t x,  actual_cstopdown_record_43_t T);

actual_cstopdown_record_43_t actual_cstopdown_record_43(void);

extern cstopdown_record_43_t update_cstopdown_record_43_project_1(cstopdown_record_43_t x, uint64_t v);

extern cstopdown_record_43_t update_cstopdown_record_43_project_2(cstopdown_record_43_t x, cstopdown__ent_adt_t v);



struct cstopdown_funtype_44_s;
        typedef struct cstopdown_funtype_44_s * cstopdown_funtype_44_t;

struct cstopdown_funtype_44_ftbl_s {mpz_ptr_t (* fptr)(struct cstopdown_funtype_44_s *, cstopdown_record_43_t);
        mpz_ptr_t (* mptr)(struct cstopdown_funtype_44_s *, uint64_t, cstopdown__ent_adt_t);
        void (* rptr)(struct cstopdown_funtype_44_s *);
        struct cstopdown_funtype_44_s * (* cptr)(struct cstopdown_funtype_44_s *);};
typedef struct cstopdown_funtype_44_ftbl_s * cstopdown_funtype_44_ftbl_t;

struct cstopdown_funtype_44_hashentry_s {uint32_t keyhash; cstopdown_record_43_t key; mpz_t value;}; 
typedef struct cstopdown_funtype_44_hashentry_s cstopdown_funtype_44_hashentry_t;

struct cstopdown_funtype_44_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_44_hashentry_t * data;}; 
typedef struct cstopdown_funtype_44_htbl_s * cstopdown_funtype_44_htbl_t;

struct cstopdown_funtype_44_s {uint32_t count;
        cstopdown_funtype_44_ftbl_t ftbl;
        cstopdown_funtype_44_htbl_t htbl;};
typedef struct cstopdown_funtype_44_s * cstopdown_funtype_44_t;

extern void release_cstopdown_funtype_44(cstopdown_funtype_44_t x);

extern cstopdown_funtype_44_t copy_cstopdown_funtype_44(cstopdown_funtype_44_t x);

extern bool_t equal_cstopdown_funtype_44(cstopdown_funtype_44_t x, cstopdown_funtype_44_t y);

extern char* json_cstopdown_funtype_44(cstopdown_funtype_44_t x);



struct cstopdown_record_45_s {
        uint32_t count; 
        uint64_t project_1;
        uint32_t project_2;
        cstopdown__ent_adt_t project_3;};
typedef struct cstopdown_record_45_s * cstopdown_record_45_t;

extern cstopdown_record_45_t new_cstopdown_record_45(void);

extern void release_cstopdown_record_45(cstopdown_record_45_t x);

extern cstopdown_record_45_t copy_cstopdown_record_45(cstopdown_record_45_t x);

extern bool_t equal_cstopdown_record_45(cstopdown_record_45_t x, cstopdown_record_45_t y);
extern char * json_cstopdown_record_45(cstopdown_record_45_t x);

typedef struct actual_cstopdown_record_45_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown_record_45_t;
void release_cstopdown_record_45_ptr(pointer_t x, type_actual_t cstopdown_record_45);

extern bool_t equal_cstopdown_record_45_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_45_t T);

extern char * json_cstopdown_record_45_ptr(pointer_t x,  actual_cstopdown_record_45_t T);

actual_cstopdown_record_45_t actual_cstopdown_record_45(void);

extern cstopdown_record_45_t update_cstopdown_record_45_project_1(cstopdown_record_45_t x, uint64_t v);

extern cstopdown_record_45_t update_cstopdown_record_45_project_2(cstopdown_record_45_t x, uint32_t v);

extern cstopdown_record_45_t update_cstopdown_record_45_project_3(cstopdown_record_45_t x, cstopdown__ent_adt_t v);



struct cstopdown_funtype_46_s;
        typedef struct cstopdown_funtype_46_s * cstopdown_funtype_46_t;

struct cstopdown_funtype_46_ftbl_s {mpz_ptr_t (* fptr)(struct cstopdown_funtype_46_s *, cstopdown_record_45_t);
        mpz_ptr_t (* mptr)(struct cstopdown_funtype_46_s *, uint64_t, uint32_t, cstopdown__ent_adt_t);
        void (* rptr)(struct cstopdown_funtype_46_s *);
        struct cstopdown_funtype_46_s * (* cptr)(struct cstopdown_funtype_46_s *);};
typedef struct cstopdown_funtype_46_ftbl_s * cstopdown_funtype_46_ftbl_t;

struct cstopdown_funtype_46_hashentry_s {uint32_t keyhash; cstopdown_record_45_t key; mpz_t value;}; 
typedef struct cstopdown_funtype_46_hashentry_s cstopdown_funtype_46_hashentry_t;

struct cstopdown_funtype_46_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_46_hashentry_t * data;}; 
typedef struct cstopdown_funtype_46_htbl_s * cstopdown_funtype_46_htbl_t;

struct cstopdown_funtype_46_s {uint32_t count;
        cstopdown_funtype_46_ftbl_t ftbl;
        cstopdown_funtype_46_htbl_t htbl;};
typedef struct cstopdown_funtype_46_s * cstopdown_funtype_46_t;

extern void release_cstopdown_funtype_46(cstopdown_funtype_46_t x);

extern cstopdown_funtype_46_t copy_cstopdown_funtype_46(cstopdown_funtype_46_t x);

extern bool_t equal_cstopdown_funtype_46(cstopdown_funtype_46_t x, cstopdown_funtype_46_t y);

extern char* json_cstopdown_funtype_46(cstopdown_funtype_46_t x);



struct cstopdown_record_47_s {
        uint32_t count; 
        uint32_t project_1;
        uint8_t project_2;
        cstopdown__ent_adt_t project_3;};
typedef struct cstopdown_record_47_s * cstopdown_record_47_t;

extern cstopdown_record_47_t new_cstopdown_record_47(void);

extern void release_cstopdown_record_47(cstopdown_record_47_t x);

extern cstopdown_record_47_t copy_cstopdown_record_47(cstopdown_record_47_t x);

extern bool_t equal_cstopdown_record_47(cstopdown_record_47_t x, cstopdown_record_47_t y);
extern char * json_cstopdown_record_47(cstopdown_record_47_t x);

typedef struct actual_cstopdown_record_47_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown_record_47_t;
void release_cstopdown_record_47_ptr(pointer_t x, type_actual_t cstopdown_record_47);

extern bool_t equal_cstopdown_record_47_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_47_t T);

extern char * json_cstopdown_record_47_ptr(pointer_t x,  actual_cstopdown_record_47_t T);

actual_cstopdown_record_47_t actual_cstopdown_record_47(void);

extern cstopdown_record_47_t update_cstopdown_record_47_project_1(cstopdown_record_47_t x, uint32_t v);

extern cstopdown_record_47_t update_cstopdown_record_47_project_2(cstopdown_record_47_t x, uint8_t v);

extern cstopdown_record_47_t update_cstopdown_record_47_project_3(cstopdown_record_47_t x, cstopdown__ent_adt_t v);



struct cstopdown_funtype_48_s;
        typedef struct cstopdown_funtype_48_s * cstopdown_funtype_48_t;

struct cstopdown_funtype_48_ftbl_s {mpz_ptr_t (* fptr)(struct cstopdown_funtype_48_s *, cstopdown_record_47_t);
        mpz_ptr_t (* mptr)(struct cstopdown_funtype_48_s *, uint32_t, uint8_t, cstopdown__ent_adt_t);
        void (* rptr)(struct cstopdown_funtype_48_s *);
        struct cstopdown_funtype_48_s * (* cptr)(struct cstopdown_funtype_48_s *);};
typedef struct cstopdown_funtype_48_ftbl_s * cstopdown_funtype_48_ftbl_t;

struct cstopdown_funtype_48_hashentry_s {uint32_t keyhash; cstopdown_record_47_t key; mpz_t value;}; 
typedef struct cstopdown_funtype_48_hashentry_s cstopdown_funtype_48_hashentry_t;

struct cstopdown_funtype_48_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_48_hashentry_t * data;}; 
typedef struct cstopdown_funtype_48_htbl_s * cstopdown_funtype_48_htbl_t;

struct cstopdown_funtype_48_s {uint32_t count;
        cstopdown_funtype_48_ftbl_t ftbl;
        cstopdown_funtype_48_htbl_t htbl;};
typedef struct cstopdown_funtype_48_s * cstopdown_funtype_48_t;

extern void release_cstopdown_funtype_48(cstopdown_funtype_48_t x);

extern cstopdown_funtype_48_t copy_cstopdown_funtype_48(cstopdown_funtype_48_t x);

extern bool_t equal_cstopdown_funtype_48(cstopdown_funtype_48_t x, cstopdown_funtype_48_t y);

extern char* json_cstopdown_funtype_48(cstopdown_funtype_48_t x);




struct cstopdown_closure_49_s;
        typedef struct cstopdown_closure_49_s * cstopdown_closure_49_t;

struct cstopdown_closure_49_s {uint32_t count;
         cstopdown_funtype_36_ftbl_t ftbl;
         cstopdown_funtype_36_htbl_t htbl;
        cstopdown_funtype_46_t fvar_1;
        cstopdown_funtype_48_t fvar_2;
        cstopdown_funtype_36_t fvar_3;
        cstopdown_funtype_36_t fvar_4;
        cstopdown_funtype_44_t fvar_5;};

mpz_ptr_t f_cstopdown_closure_49(struct cstopdown_closure_49_s * closure, cstopdown__ent_adt_t bvar);

mpz_ptr_t m_cstopdown_closure_49(struct cstopdown_closure_49_s * closure, cstopdown__ent_adt_t bvar);

extern mpz_ptr_t h_cstopdown_closure_49(cstopdown__ent_adt_t ivar_12, cstopdown_funtype_46_t ivar_7, cstopdown_funtype_48_t ivar_9, cstopdown_funtype_36_t ivar_5, cstopdown_funtype_36_t ivar_3, cstopdown_funtype_44_t ivar_1);

extern cstopdown_closure_49_t new_cstopdown_closure_49(void);

extern void release_cstopdown_closure_49(cstopdown_funtype_36_t closure);

extern cstopdown_closure_49_t copy_cstopdown_closure_49(cstopdown_closure_49_t x);



struct cstopdown_funtype_50_s;
        typedef struct cstopdown_funtype_50_s * cstopdown_funtype_50_t;

struct cstopdown_funtype_50_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct cstopdown_funtype_50_s *, cstopdown__ent_adt_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct cstopdown_funtype_50_s *, cstopdown__ent_adt_t);
        void (* rptr)(struct cstopdown_funtype_50_s *);
        struct cstopdown_funtype_50_s * (* cptr)(struct cstopdown_funtype_50_s *);};
typedef struct cstopdown_funtype_50_ftbl_s * cstopdown_funtype_50_ftbl_t;

struct cstopdown_funtype_50_hashentry_s {uint32_t keyhash; cstopdown__ent_adt_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct cstopdown_funtype_50_hashentry_s cstopdown_funtype_50_hashentry_t;

struct cstopdown_funtype_50_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_50_hashentry_t * data;}; 
typedef struct cstopdown_funtype_50_htbl_s * cstopdown_funtype_50_htbl_t;

struct cstopdown_funtype_50_s {uint32_t count;
        cstopdown_funtype_50_ftbl_t ftbl;
        cstopdown_funtype_50_htbl_t htbl;};
typedef struct cstopdown_funtype_50_s * cstopdown_funtype_50_t;

extern void release_cstopdown_funtype_50(cstopdown_funtype_50_t x);

extern cstopdown_funtype_50_t copy_cstopdown_funtype_50(cstopdown_funtype_50_t x);

extern bool_t equal_cstopdown_funtype_50(cstopdown_funtype_50_t x, cstopdown_funtype_50_t y);

extern char* json_cstopdown_funtype_50(cstopdown_funtype_50_t x);



struct cstopdown_funtype_51_s;
        typedef struct cstopdown_funtype_51_s * cstopdown_funtype_51_t;

struct cstopdown_funtype_51_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct cstopdown_funtype_51_s *, uint64_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct cstopdown_funtype_51_s *, uint64_t);
        void (* rptr)(struct cstopdown_funtype_51_s *);
        struct cstopdown_funtype_51_s * (* cptr)(struct cstopdown_funtype_51_s *);};
typedef struct cstopdown_funtype_51_ftbl_s * cstopdown_funtype_51_ftbl_t;

struct cstopdown_funtype_51_hashentry_s {uint32_t keyhash; uint64_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct cstopdown_funtype_51_hashentry_s cstopdown_funtype_51_hashentry_t;

struct cstopdown_funtype_51_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_51_hashentry_t * data;}; 
typedef struct cstopdown_funtype_51_htbl_s * cstopdown_funtype_51_htbl_t;

struct cstopdown_funtype_51_s {uint32_t count;
        cstopdown_funtype_51_ftbl_t ftbl;
        cstopdown_funtype_51_htbl_t htbl;};
typedef struct cstopdown_funtype_51_s * cstopdown_funtype_51_t;

extern void release_cstopdown_funtype_51(cstopdown_funtype_51_t x);

extern cstopdown_funtype_51_t copy_cstopdown_funtype_51(cstopdown_funtype_51_t x);

uint32_t lookup_cstopdown_funtype_51(cstopdown_funtype_51_htbl_t htbl, uint64_t i, uint32_t ihash);

cstopdown_funtype_51_t dupdate_cstopdown_funtype_51(cstopdown_funtype_51_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v);

extern cstopdown_funtype_51_t update_cstopdown_funtype_51(cstopdown_funtype_51_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v);

extern bool_t equal_cstopdown_funtype_51(cstopdown_funtype_51_t x, cstopdown_funtype_51_t y);

extern char* json_cstopdown_funtype_51(cstopdown_funtype_51_t x);



struct cstopdown_funtype_52_s;
        typedef struct cstopdown_funtype_52_s * cstopdown_funtype_52_t;

struct cstopdown_funtype_52_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct cstopdown_funtype_52_s *, cstopdown_record_38_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct cstopdown_funtype_52_s *, uint64_t, uint32_t);
        void (* rptr)(struct cstopdown_funtype_52_s *);
        struct cstopdown_funtype_52_s * (* cptr)(struct cstopdown_funtype_52_s *);};
typedef struct cstopdown_funtype_52_ftbl_s * cstopdown_funtype_52_ftbl_t;

struct cstopdown_funtype_52_hashentry_s {uint32_t keyhash; cstopdown_record_38_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct cstopdown_funtype_52_hashentry_s cstopdown_funtype_52_hashentry_t;

struct cstopdown_funtype_52_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_52_hashentry_t * data;}; 
typedef struct cstopdown_funtype_52_htbl_s * cstopdown_funtype_52_htbl_t;

struct cstopdown_funtype_52_s {uint32_t count;
        cstopdown_funtype_52_ftbl_t ftbl;
        cstopdown_funtype_52_htbl_t htbl;};
typedef struct cstopdown_funtype_52_s * cstopdown_funtype_52_t;

extern void release_cstopdown_funtype_52(cstopdown_funtype_52_t x);

extern cstopdown_funtype_52_t copy_cstopdown_funtype_52(cstopdown_funtype_52_t x);

extern bool_t equal_cstopdown_funtype_52(cstopdown_funtype_52_t x, cstopdown_funtype_52_t y);

extern char* json_cstopdown_funtype_52(cstopdown_funtype_52_t x);



struct cstopdown_funtype_53_s;
        typedef struct cstopdown_funtype_53_s * cstopdown_funtype_53_t;

struct cstopdown_funtype_53_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct cstopdown_funtype_53_s *, cstopdown_record_40_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct cstopdown_funtype_53_s *, uint32_t, uint8_t);
        void (* rptr)(struct cstopdown_funtype_53_s *);
        struct cstopdown_funtype_53_s * (* cptr)(struct cstopdown_funtype_53_s *);};
typedef struct cstopdown_funtype_53_ftbl_s * cstopdown_funtype_53_ftbl_t;

struct cstopdown_funtype_53_hashentry_s {uint32_t keyhash; cstopdown_record_40_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct cstopdown_funtype_53_hashentry_s cstopdown_funtype_53_hashentry_t;

struct cstopdown_funtype_53_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_53_hashentry_t * data;}; 
typedef struct cstopdown_funtype_53_htbl_s * cstopdown_funtype_53_htbl_t;

struct cstopdown_funtype_53_s {uint32_t count;
        cstopdown_funtype_53_ftbl_t ftbl;
        cstopdown_funtype_53_htbl_t htbl;};
typedef struct cstopdown_funtype_53_s * cstopdown_funtype_53_t;

extern void release_cstopdown_funtype_53(cstopdown_funtype_53_t x);

extern cstopdown_funtype_53_t copy_cstopdown_funtype_53(cstopdown_funtype_53_t x);

extern bool_t equal_cstopdown_funtype_53(cstopdown_funtype_53_t x, cstopdown_funtype_53_t y);

extern char* json_cstopdown_funtype_53(cstopdown_funtype_53_t x);




struct cstopdown_closure_54_s;
        typedef struct cstopdown_closure_54_s * cstopdown_closure_54_t;

struct cstopdown_closure_54_s {uint32_t count;
         cstopdown_funtype_50_ftbl_t ftbl;
         cstopdown_funtype_50_htbl_t htbl;
        cstopdown_funtype_52_t fvar_1;
        cstopdown_funtype_53_t fvar_2;
        ordstruct_adt__ordstruct_adt_t fvar_3;
        ordstruct_adt__ordstruct_adt_t fvar_4;
        cstopdown_funtype_51_t fvar_5;};

ordstruct_adt__ordstruct_adt_t f_cstopdown_closure_54(struct cstopdown_closure_54_s * closure, cstopdown__ent_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_cstopdown_closure_54(struct cstopdown_closure_54_s * closure, cstopdown__ent_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_cstopdown_closure_54(cstopdown__ent_adt_t ivar_10, cstopdown_funtype_52_t ivar_5, cstopdown_funtype_53_t ivar_7, ordstruct_adt__ordstruct_adt_t ivar_4, ordstruct_adt__ordstruct_adt_t ivar_3, cstopdown_funtype_51_t ivar_1);

extern cstopdown_closure_54_t new_cstopdown_closure_54(void);

extern void release_cstopdown_closure_54(cstopdown_funtype_50_t closure);

extern cstopdown_closure_54_t copy_cstopdown_closure_54(cstopdown_closure_54_t x);



struct cstopdown_funtype_55_s;
        typedef struct cstopdown_funtype_55_s * cstopdown_funtype_55_t;

struct cstopdown_funtype_55_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct cstopdown_funtype_55_s *, cstopdown_record_43_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct cstopdown_funtype_55_s *, uint64_t, cstopdown__ent_adt_t);
        void (* rptr)(struct cstopdown_funtype_55_s *);
        struct cstopdown_funtype_55_s * (* cptr)(struct cstopdown_funtype_55_s *);};
typedef struct cstopdown_funtype_55_ftbl_s * cstopdown_funtype_55_ftbl_t;

struct cstopdown_funtype_55_hashentry_s {uint32_t keyhash; cstopdown_record_43_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct cstopdown_funtype_55_hashentry_s cstopdown_funtype_55_hashentry_t;

struct cstopdown_funtype_55_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_55_hashentry_t * data;}; 
typedef struct cstopdown_funtype_55_htbl_s * cstopdown_funtype_55_htbl_t;

struct cstopdown_funtype_55_s {uint32_t count;
        cstopdown_funtype_55_ftbl_t ftbl;
        cstopdown_funtype_55_htbl_t htbl;};
typedef struct cstopdown_funtype_55_s * cstopdown_funtype_55_t;

extern void release_cstopdown_funtype_55(cstopdown_funtype_55_t x);

extern cstopdown_funtype_55_t copy_cstopdown_funtype_55(cstopdown_funtype_55_t x);

extern bool_t equal_cstopdown_funtype_55(cstopdown_funtype_55_t x, cstopdown_funtype_55_t y);

extern char* json_cstopdown_funtype_55(cstopdown_funtype_55_t x);



struct cstopdown_funtype_56_s;
        typedef struct cstopdown_funtype_56_s * cstopdown_funtype_56_t;

struct cstopdown_funtype_56_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct cstopdown_funtype_56_s *, cstopdown_record_45_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct cstopdown_funtype_56_s *, uint64_t, uint32_t, cstopdown__ent_adt_t);
        void (* rptr)(struct cstopdown_funtype_56_s *);
        struct cstopdown_funtype_56_s * (* cptr)(struct cstopdown_funtype_56_s *);};
typedef struct cstopdown_funtype_56_ftbl_s * cstopdown_funtype_56_ftbl_t;

struct cstopdown_funtype_56_hashentry_s {uint32_t keyhash; cstopdown_record_45_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct cstopdown_funtype_56_hashentry_s cstopdown_funtype_56_hashentry_t;

struct cstopdown_funtype_56_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_56_hashentry_t * data;}; 
typedef struct cstopdown_funtype_56_htbl_s * cstopdown_funtype_56_htbl_t;

struct cstopdown_funtype_56_s {uint32_t count;
        cstopdown_funtype_56_ftbl_t ftbl;
        cstopdown_funtype_56_htbl_t htbl;};
typedef struct cstopdown_funtype_56_s * cstopdown_funtype_56_t;

extern void release_cstopdown_funtype_56(cstopdown_funtype_56_t x);

extern cstopdown_funtype_56_t copy_cstopdown_funtype_56(cstopdown_funtype_56_t x);

extern bool_t equal_cstopdown_funtype_56(cstopdown_funtype_56_t x, cstopdown_funtype_56_t y);

extern char* json_cstopdown_funtype_56(cstopdown_funtype_56_t x);



struct cstopdown_funtype_57_s;
        typedef struct cstopdown_funtype_57_s * cstopdown_funtype_57_t;

struct cstopdown_funtype_57_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct cstopdown_funtype_57_s *, cstopdown_record_47_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct cstopdown_funtype_57_s *, uint32_t, uint8_t, cstopdown__ent_adt_t);
        void (* rptr)(struct cstopdown_funtype_57_s *);
        struct cstopdown_funtype_57_s * (* cptr)(struct cstopdown_funtype_57_s *);};
typedef struct cstopdown_funtype_57_ftbl_s * cstopdown_funtype_57_ftbl_t;

struct cstopdown_funtype_57_hashentry_s {uint32_t keyhash; cstopdown_record_47_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct cstopdown_funtype_57_hashentry_s cstopdown_funtype_57_hashentry_t;

struct cstopdown_funtype_57_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_57_hashentry_t * data;}; 
typedef struct cstopdown_funtype_57_htbl_s * cstopdown_funtype_57_htbl_t;

struct cstopdown_funtype_57_s {uint32_t count;
        cstopdown_funtype_57_ftbl_t ftbl;
        cstopdown_funtype_57_htbl_t htbl;};
typedef struct cstopdown_funtype_57_s * cstopdown_funtype_57_t;

extern void release_cstopdown_funtype_57(cstopdown_funtype_57_t x);

extern cstopdown_funtype_57_t copy_cstopdown_funtype_57(cstopdown_funtype_57_t x);

extern bool_t equal_cstopdown_funtype_57(cstopdown_funtype_57_t x, cstopdown_funtype_57_t y);

extern char* json_cstopdown_funtype_57(cstopdown_funtype_57_t x);




struct cstopdown_closure_58_s;
        typedef struct cstopdown_closure_58_s * cstopdown_closure_58_t;

struct cstopdown_closure_58_s {uint32_t count;
         cstopdown_funtype_50_ftbl_t ftbl;
         cstopdown_funtype_50_htbl_t htbl;
        cstopdown_funtype_56_t fvar_1;
        cstopdown_funtype_57_t fvar_2;
        cstopdown_funtype_50_t fvar_3;
        cstopdown_funtype_50_t fvar_4;
        cstopdown_funtype_55_t fvar_5;};

ordstruct_adt__ordstruct_adt_t f_cstopdown_closure_58(struct cstopdown_closure_58_s * closure, cstopdown__ent_adt_t bvar);

ordstruct_adt__ordstruct_adt_t m_cstopdown_closure_58(struct cstopdown_closure_58_s * closure, cstopdown__ent_adt_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_cstopdown_closure_58(cstopdown__ent_adt_t ivar_12, cstopdown_funtype_56_t ivar_7, cstopdown_funtype_57_t ivar_9, cstopdown_funtype_50_t ivar_5, cstopdown_funtype_50_t ivar_3, cstopdown_funtype_55_t ivar_1);

extern cstopdown_closure_58_t new_cstopdown_closure_58(void);

extern void release_cstopdown_closure_58(cstopdown_funtype_50_t closure);

extern cstopdown_closure_58_t copy_cstopdown_closure_58(cstopdown_closure_58_t x);



struct cstopdown_funtype_59_s;
        typedef struct cstopdown_funtype_59_s * cstopdown_funtype_59_t;

struct cstopdown_funtype_59_ftbl_s {bool_t (* fptr)(struct cstopdown_funtype_59_s *, cstopdown__ent_adt_t);
        bool_t (* mptr)(struct cstopdown_funtype_59_s *, cstopdown__ent_adt_t);
        void (* rptr)(struct cstopdown_funtype_59_s *);
        struct cstopdown_funtype_59_s * (* cptr)(struct cstopdown_funtype_59_s *);};
typedef struct cstopdown_funtype_59_ftbl_s * cstopdown_funtype_59_ftbl_t;

struct cstopdown_funtype_59_hashentry_s {uint32_t keyhash; cstopdown__ent_adt_t key; bool_t value;}; 
typedef struct cstopdown_funtype_59_hashentry_s cstopdown_funtype_59_hashentry_t;

struct cstopdown_funtype_59_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_59_hashentry_t * data;}; 
typedef struct cstopdown_funtype_59_htbl_s * cstopdown_funtype_59_htbl_t;

struct cstopdown_funtype_59_s {uint32_t count;
        cstopdown_funtype_59_ftbl_t ftbl;
        cstopdown_funtype_59_htbl_t htbl;};
typedef struct cstopdown_funtype_59_s * cstopdown_funtype_59_t;

extern void release_cstopdown_funtype_59(cstopdown_funtype_59_t x);

extern cstopdown_funtype_59_t copy_cstopdown_funtype_59(cstopdown_funtype_59_t x);

extern bool_t equal_cstopdown_funtype_59(cstopdown_funtype_59_t x, cstopdown_funtype_59_t y);

extern char* json_cstopdown_funtype_59(cstopdown_funtype_59_t x);




struct cstopdown_closure_60_s;
        typedef struct cstopdown_closure_60_s * cstopdown_closure_60_t;

struct cstopdown_closure_60_s {uint32_t count;
         cstopdown_funtype_59_ftbl_t ftbl;
         cstopdown_funtype_59_htbl_t htbl;
        uint32_t fvar_1;
        uint32_t fvar_2;};

bool_t f_cstopdown_closure_60(struct cstopdown_closure_60_s * closure, cstopdown__ent_adt_t bvar);

bool_t m_cstopdown_closure_60(struct cstopdown_closure_60_s * closure, cstopdown__ent_adt_t bvar);

extern bool_t h_cstopdown_closure_60(cstopdown__ent_adt_t ivar_4, uint32_t ivar_2, uint32_t ivar_1);

extern cstopdown_closure_60_t new_cstopdown_closure_60(void);

extern void release_cstopdown_closure_60(cstopdown_funtype_59_t closure);

extern cstopdown_closure_60_t copy_cstopdown_closure_60(cstopdown_closure_60_t x);




struct cstopdown_closure_61_s;
        typedef struct cstopdown_closure_61_s * cstopdown_closure_61_t;

struct cstopdown_closure_61_s {uint32_t count;
         cstopdown_funtype_59_ftbl_t ftbl;
         cstopdown_funtype_59_htbl_t htbl;
        uint32_t fvar_1;};

bool_t f_cstopdown_closure_61(struct cstopdown_closure_61_s * closure, cstopdown__ent_adt_t bvar);

bool_t m_cstopdown_closure_61(struct cstopdown_closure_61_s * closure, cstopdown__ent_adt_t bvar);

extern bool_t h_cstopdown_closure_61(cstopdown__ent_adt_t ivar_3, uint32_t ivar_1);

extern cstopdown_closure_61_t new_cstopdown_closure_61(void);

extern void release_cstopdown_closure_61(cstopdown_funtype_59_t closure);

extern cstopdown_closure_61_t copy_cstopdown_closure_61(cstopdown_closure_61_t x);




struct cstopdown_closure_62_s;
        typedef struct cstopdown_closure_62_s * cstopdown_closure_62_t;

struct cstopdown_closure_62_s {uint32_t count;
         cstopdown_funtype_59_ftbl_t ftbl;
         cstopdown_funtype_59_htbl_t htbl;
        uint32_t fvar_1;};

bool_t f_cstopdown_closure_62(struct cstopdown_closure_62_s * closure, cstopdown__ent_adt_t bvar);

bool_t m_cstopdown_closure_62(struct cstopdown_closure_62_s * closure, cstopdown__ent_adt_t bvar);

extern bool_t h_cstopdown_closure_62(cstopdown__ent_adt_t ivar_3, uint32_t ivar_1);

extern cstopdown_closure_62_t new_cstopdown_closure_62(void);

extern void release_cstopdown_closure_62(cstopdown_funtype_59_t closure);

extern cstopdown_closure_62_t copy_cstopdown_closure_62(cstopdown_closure_62_t x);




struct cstopdown_closure_63_s;
        typedef struct cstopdown_closure_63_s * cstopdown_closure_63_t;

struct cstopdown_closure_63_s {uint32_t count;
         cstopdown_funtype_59_ftbl_t ftbl;
         cstopdown_funtype_59_htbl_t htbl;
        uint32_t fvar_1;
        uint32_t fvar_2;};

bool_t f_cstopdown_closure_63(struct cstopdown_closure_63_s * closure, cstopdown__ent_adt_t bvar);

bool_t m_cstopdown_closure_63(struct cstopdown_closure_63_s * closure, cstopdown__ent_adt_t bvar);

extern bool_t h_cstopdown_closure_63(cstopdown__ent_adt_t ivar_4, uint32_t ivar_1, uint32_t ivar_2);

extern cstopdown_closure_63_t new_cstopdown_closure_63(void);

extern void release_cstopdown_closure_63(cstopdown_funtype_59_t closure);

extern cstopdown_closure_63_t copy_cstopdown_closure_63(cstopdown_closure_63_t x);



struct cstopdown_funtype_64_s;
        typedef struct cstopdown_funtype_64_s * cstopdown_funtype_64_t;

struct cstopdown_funtype_64_ftbl_s {bool_t (* fptr)(struct cstopdown_funtype_64_s *, cstopdown_record_40_t);
        bool_t (* mptr)(struct cstopdown_funtype_64_s *, uint32_t, uint8_t);
        void (* rptr)(struct cstopdown_funtype_64_s *);
        struct cstopdown_funtype_64_s * (* cptr)(struct cstopdown_funtype_64_s *);};
typedef struct cstopdown_funtype_64_ftbl_s * cstopdown_funtype_64_ftbl_t;

struct cstopdown_funtype_64_hashentry_s {uint32_t keyhash; cstopdown_record_40_t key; bool_t value;}; 
typedef struct cstopdown_funtype_64_hashentry_s cstopdown_funtype_64_hashentry_t;

struct cstopdown_funtype_64_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_64_hashentry_t * data;}; 
typedef struct cstopdown_funtype_64_htbl_s * cstopdown_funtype_64_htbl_t;

struct cstopdown_funtype_64_s {uint32_t count;
        cstopdown_funtype_64_ftbl_t ftbl;
        cstopdown_funtype_64_htbl_t htbl;};
typedef struct cstopdown_funtype_64_s * cstopdown_funtype_64_t;

extern void release_cstopdown_funtype_64(cstopdown_funtype_64_t x);

extern cstopdown_funtype_64_t copy_cstopdown_funtype_64(cstopdown_funtype_64_t x);

extern bool_t equal_cstopdown_funtype_64(cstopdown_funtype_64_t x, cstopdown_funtype_64_t y);

extern char* json_cstopdown_funtype_64(cstopdown_funtype_64_t x);



struct cstopdown_funtype_65_s;
        typedef struct cstopdown_funtype_65_s * cstopdown_funtype_65_t;

struct cstopdown_funtype_65_ftbl_s {cstopdown__ent_adt_t (* fptr)(struct cstopdown_funtype_65_s *, uint8_t);
        cstopdown__ent_adt_t (* mptr)(struct cstopdown_funtype_65_s *, uint8_t);
        void (* rptr)(struct cstopdown_funtype_65_s *);
        struct cstopdown_funtype_65_s * (* cptr)(struct cstopdown_funtype_65_s *);};
typedef struct cstopdown_funtype_65_ftbl_s * cstopdown_funtype_65_ftbl_t;

struct cstopdown_funtype_65_hashentry_s {uint32_t keyhash; uint8_t key; cstopdown__ent_adt_t value;}; 
typedef struct cstopdown_funtype_65_hashentry_s cstopdown_funtype_65_hashentry_t;

struct cstopdown_funtype_65_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_65_hashentry_t * data;}; 
typedef struct cstopdown_funtype_65_htbl_s * cstopdown_funtype_65_htbl_t;

struct cstopdown_funtype_65_s {uint32_t count;
        cstopdown_funtype_65_ftbl_t ftbl;
        cstopdown_funtype_65_htbl_t htbl;};
typedef struct cstopdown_funtype_65_s * cstopdown_funtype_65_t;

extern void release_cstopdown_funtype_65(cstopdown_funtype_65_t x);

extern cstopdown_funtype_65_t copy_cstopdown_funtype_65(cstopdown_funtype_65_t x);

uint32_t lookup_cstopdown_funtype_65(cstopdown_funtype_65_htbl_t htbl, uint8_t i, uint32_t ihash);

cstopdown_funtype_65_t dupdate_cstopdown_funtype_65(cstopdown_funtype_65_t a, uint8_t i, cstopdown__ent_adt_t v);

extern cstopdown_funtype_65_t update_cstopdown_funtype_65(cstopdown_funtype_65_t a, uint8_t i, cstopdown__ent_adt_t v);

extern bool_t equal_cstopdown_funtype_65(cstopdown_funtype_65_t x, cstopdown_funtype_65_t y);

extern char* json_cstopdown_funtype_65(cstopdown_funtype_65_t x);



struct cstopdown_funtype_66_s;
        typedef struct cstopdown_funtype_66_s * cstopdown_funtype_66_t;

struct cstopdown_funtype_66_ftbl_s {cstopdown_funtype_65_t (* fptr)(struct cstopdown_funtype_66_s *, uint32_t);
        cstopdown_funtype_65_t (* mptr)(struct cstopdown_funtype_66_s *, uint32_t);
        void (* rptr)(struct cstopdown_funtype_66_s *);
        struct cstopdown_funtype_66_s * (* cptr)(struct cstopdown_funtype_66_s *);};
typedef struct cstopdown_funtype_66_ftbl_s * cstopdown_funtype_66_ftbl_t;

struct cstopdown_funtype_66_hashentry_s {uint32_t keyhash; uint32_t key; cstopdown_funtype_65_t value;}; 
typedef struct cstopdown_funtype_66_hashentry_s cstopdown_funtype_66_hashentry_t;

struct cstopdown_funtype_66_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_66_hashentry_t * data;}; 
typedef struct cstopdown_funtype_66_htbl_s * cstopdown_funtype_66_htbl_t;

struct cstopdown_funtype_66_s {uint32_t count;
        cstopdown_funtype_66_ftbl_t ftbl;
        cstopdown_funtype_66_htbl_t htbl;};
typedef struct cstopdown_funtype_66_s * cstopdown_funtype_66_t;

extern void release_cstopdown_funtype_66(cstopdown_funtype_66_t x);

extern cstopdown_funtype_66_t copy_cstopdown_funtype_66(cstopdown_funtype_66_t x);

uint32_t lookup_cstopdown_funtype_66(cstopdown_funtype_66_htbl_t htbl, uint32_t i, uint32_t ihash);

cstopdown_funtype_66_t dupdate_cstopdown_funtype_66(cstopdown_funtype_66_t a, uint32_t i, cstopdown_funtype_65_t v);

extern cstopdown_funtype_66_t update_cstopdown_funtype_66(cstopdown_funtype_66_t a, uint32_t i, cstopdown_funtype_65_t v);

extern bool_t equal_cstopdown_funtype_66(cstopdown_funtype_66_t x, cstopdown_funtype_66_t y);

extern char* json_cstopdown_funtype_66(cstopdown_funtype_66_t x);




struct cstopdown_closure_67_s;
        typedef struct cstopdown_closure_67_s * cstopdown_closure_67_t;

struct cstopdown_closure_67_s {uint32_t count;
         cstopdown_funtype_64_ftbl_t ftbl;
         cstopdown_funtype_64_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;};

bool_t f_cstopdown_closure_67(struct cstopdown_closure_67_s * closure, cstopdown_record_40_t bvar);

bool_t m_cstopdown_closure_67(struct cstopdown_closure_67_s * closure, uint32_t bvar_1, uint8_t bvar_2);

extern bool_t h_cstopdown_closure_67(uint32_t ivar_6, uint8_t ivar_7, cstopdown_funtype_66_t ivar_2);

extern cstopdown_closure_67_t new_cstopdown_closure_67(void);

extern void release_cstopdown_closure_67(cstopdown_funtype_64_t closure);

extern cstopdown_closure_67_t copy_cstopdown_closure_67(cstopdown_closure_67_t x);



struct cstopdown_record_68_s {
        uint32_t count; 
        cstopdown__ent_adt_t project_1;
        cstopdown__ent_adt_t project_2;};
typedef struct cstopdown_record_68_s * cstopdown_record_68_t;

extern cstopdown_record_68_t new_cstopdown_record_68(void);

extern void release_cstopdown_record_68(cstopdown_record_68_t x);

extern cstopdown_record_68_t copy_cstopdown_record_68(cstopdown_record_68_t x);

extern bool_t equal_cstopdown_record_68(cstopdown_record_68_t x, cstopdown_record_68_t y);
extern char * json_cstopdown_record_68(cstopdown_record_68_t x);

typedef struct actual_cstopdown_record_68_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown_record_68_t;
void release_cstopdown_record_68_ptr(pointer_t x, type_actual_t cstopdown_record_68);

extern bool_t equal_cstopdown_record_68_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_68_t T);

extern char * json_cstopdown_record_68_ptr(pointer_t x,  actual_cstopdown_record_68_t T);

actual_cstopdown_record_68_t actual_cstopdown_record_68(void);

extern cstopdown_record_68_t update_cstopdown_record_68_project_1(cstopdown_record_68_t x, cstopdown__ent_adt_t v);

extern cstopdown_record_68_t update_cstopdown_record_68_project_2(cstopdown_record_68_t x, cstopdown__ent_adt_t v);



struct cstopdown_funtype_69_s;
        typedef struct cstopdown_funtype_69_s * cstopdown_funtype_69_t;

struct cstopdown_funtype_69_ftbl_s {bool_t (* fptr)(struct cstopdown_funtype_69_s *, cstopdown_record_68_t);
        bool_t (* mptr)(struct cstopdown_funtype_69_s *, cstopdown__ent_adt_t, cstopdown__ent_adt_t);
        void (* rptr)(struct cstopdown_funtype_69_s *);
        struct cstopdown_funtype_69_s * (* cptr)(struct cstopdown_funtype_69_s *);};
typedef struct cstopdown_funtype_69_ftbl_s * cstopdown_funtype_69_ftbl_t;

struct cstopdown_funtype_69_hashentry_s {uint32_t keyhash; cstopdown_record_68_t key; bool_t value;}; 
typedef struct cstopdown_funtype_69_hashentry_s cstopdown_funtype_69_hashentry_t;

struct cstopdown_funtype_69_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_69_hashentry_t * data;}; 
typedef struct cstopdown_funtype_69_htbl_s * cstopdown_funtype_69_htbl_t;

struct cstopdown_funtype_69_s {uint32_t count;
        cstopdown_funtype_69_ftbl_t ftbl;
        cstopdown_funtype_69_htbl_t htbl;};
typedef struct cstopdown_funtype_69_s * cstopdown_funtype_69_t;

extern void release_cstopdown_funtype_69(cstopdown_funtype_69_t x);

extern cstopdown_funtype_69_t copy_cstopdown_funtype_69(cstopdown_funtype_69_t x);

extern bool_t equal_cstopdown_funtype_69(cstopdown_funtype_69_t x, cstopdown_funtype_69_t y);

extern char* json_cstopdown_funtype_69(cstopdown_funtype_69_t x);



struct cstopdown__lang_spec_s;
        typedef struct cstopdown__lang_spec_s * cstopdown__lang_spec_t;

struct cstopdown__lang_spec_ftbl_s {cstopdown__peg_adt_t (* fptr)(struct cstopdown__lang_spec_s *, uint8_t);
        cstopdown__peg_adt_t (* mptr)(struct cstopdown__lang_spec_s *, uint8_t);
        void (* rptr)(struct cstopdown__lang_spec_s *);
        struct cstopdown__lang_spec_s * (* cptr)(struct cstopdown__lang_spec_s *);};
typedef struct cstopdown__lang_spec_ftbl_s * cstopdown__lang_spec_ftbl_t;

struct cstopdown__lang_spec_hashentry_s {uint32_t keyhash; uint8_t key; cstopdown__peg_adt_t value;}; 
typedef struct cstopdown__lang_spec_hashentry_s cstopdown__lang_spec_hashentry_t;

struct cstopdown__lang_spec_htbl_s {uint32_t size; uint32_t num_entries; cstopdown__lang_spec_hashentry_t * data;}; 
typedef struct cstopdown__lang_spec_htbl_s * cstopdown__lang_spec_htbl_t;

struct cstopdown__lang_spec_s {uint32_t count;
        cstopdown__lang_spec_ftbl_t ftbl;
        cstopdown__lang_spec_htbl_t htbl;};
typedef struct cstopdown__lang_spec_s * cstopdown__lang_spec_t;

extern void release_cstopdown__lang_spec(cstopdown__lang_spec_t x);

extern cstopdown__lang_spec_t copy_cstopdown__lang_spec(cstopdown__lang_spec_t x);

uint32_t lookup_cstopdown__lang_spec(cstopdown__lang_spec_htbl_t htbl, uint8_t i, uint32_t ihash);

cstopdown__lang_spec_t dupdate_cstopdown__lang_spec(cstopdown__lang_spec_t a, uint8_t i, cstopdown__peg_adt_t v);

extern cstopdown__lang_spec_t update_cstopdown__lang_spec(cstopdown__lang_spec_t a, uint8_t i, cstopdown__peg_adt_t v);

extern bool_t equal_cstopdown__lang_spec(cstopdown__lang_spec_t x, cstopdown__lang_spec_t y);

extern char* json_cstopdown__lang_spec(cstopdown__lang_spec_t x);




struct cstopdown_closure_71_s;
        typedef struct cstopdown_closure_71_s * cstopdown_closure_71_t;

struct cstopdown_closure_71_s {uint32_t count;
         cstopdown_funtype_69_ftbl_t ftbl;
         cstopdown_funtype_69_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;
        cstopdown__lang_spec_t fvar_2;};

bool_t f_cstopdown_closure_71(struct cstopdown_closure_71_s * closure, cstopdown_record_68_t bvar);

bool_t m_cstopdown_closure_71(struct cstopdown_closure_71_s * closure, cstopdown__ent_adt_t bvar_1, cstopdown__ent_adt_t bvar_2);

extern bool_t h_cstopdown_closure_71(cstopdown__ent_adt_t ivar_7, cstopdown__ent_adt_t ivar_8, cstopdown_funtype_66_t ivar_3, cstopdown__lang_spec_t ivar_2);

extern cstopdown_closure_71_t new_cstopdown_closure_71(void);

extern void release_cstopdown_closure_71(cstopdown_funtype_69_t closure);

extern cstopdown_closure_71_t copy_cstopdown_closure_71(cstopdown_closure_71_t x);



struct cstopdown_funtype_72_s;
        typedef struct cstopdown_funtype_72_s * cstopdown_funtype_72_t;

struct cstopdown_funtype_72_ftbl_s {uint8_t (* fptr)(struct cstopdown_funtype_72_s *, uint32_t);
        uint8_t (* mptr)(struct cstopdown_funtype_72_s *, uint32_t);
        void (* rptr)(struct cstopdown_funtype_72_s *);
        struct cstopdown_funtype_72_s * (* cptr)(struct cstopdown_funtype_72_s *);};
typedef struct cstopdown_funtype_72_ftbl_s * cstopdown_funtype_72_ftbl_t;

struct cstopdown_funtype_72_hashentry_s {uint32_t keyhash; uint32_t key; uint8_t value;}; 
typedef struct cstopdown_funtype_72_hashentry_s cstopdown_funtype_72_hashentry_t;

struct cstopdown_funtype_72_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_72_hashentry_t * data;}; 
typedef struct cstopdown_funtype_72_htbl_s * cstopdown_funtype_72_htbl_t;

struct cstopdown_funtype_72_s {uint32_t count;
        cstopdown_funtype_72_ftbl_t ftbl;
        cstopdown_funtype_72_htbl_t htbl;};
typedef struct cstopdown_funtype_72_s * cstopdown_funtype_72_t;

extern void release_cstopdown_funtype_72(cstopdown_funtype_72_t x);

extern cstopdown_funtype_72_t copy_cstopdown_funtype_72(cstopdown_funtype_72_t x);

uint32_t lookup_cstopdown_funtype_72(cstopdown_funtype_72_htbl_t htbl, uint32_t i, uint32_t ihash);

cstopdown_funtype_72_t dupdate_cstopdown_funtype_72(cstopdown_funtype_72_t a, uint32_t i, uint8_t v);

extern cstopdown_funtype_72_t update_cstopdown_funtype_72(cstopdown_funtype_72_t a, uint32_t i, uint8_t v);

extern bool_t equal_cstopdown_funtype_72(cstopdown_funtype_72_t x, cstopdown_funtype_72_t y);

extern char* json_cstopdown_funtype_72(cstopdown_funtype_72_t x);




struct cstopdown_closure_73_s;
        typedef struct cstopdown_closure_73_s * cstopdown_closure_73_t;

struct cstopdown_closure_73_s {uint32_t count;
         cstopdown_funtype_72_ftbl_t ftbl;
         cstopdown_funtype_72_htbl_t htbl;
        type_actual_t fvar_1;
        cstopdown_funtype_59_t fvar_2;
        cstopdown_funtype_66_t fvar_3;};

uint8_t f_cstopdown_closure_73(struct cstopdown_closure_73_s * closure, uint32_t bvar);

uint8_t m_cstopdown_closure_73(struct cstopdown_closure_73_s * closure, uint32_t bvar);

extern uint8_t h_cstopdown_closure_73(uint32_t ivar_11, type_actual_t ivar_37, cstopdown_funtype_59_t ivar_5, cstopdown_funtype_66_t ivar_2);

extern cstopdown_closure_73_t new_cstopdown_closure_73(void);

extern void release_cstopdown_closure_73(cstopdown_funtype_72_t closure);

extern cstopdown_closure_73_t copy_cstopdown_closure_73(cstopdown_closure_73_t x);



struct cstopdown_array_74_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         cstopdown__ent_adt_t elems[]; };
typedef struct cstopdown_array_74_s * cstopdown_array_74_t;

extern cstopdown_array_74_t new_cstopdown_array_74(uint32_t size);

extern void release_cstopdown_array_74(cstopdown_array_74_t x);

extern cstopdown_array_74_t copy_cstopdown_array_74(cstopdown_array_74_t x);

extern bool_t equal_cstopdown_array_74(cstopdown_array_74_t x, cstopdown_array_74_t y);
extern char * json_cstopdown_array_74(cstopdown_array_74_t x);

typedef struct actual_cstopdown_array_74_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown_array_74_t;
void release_cstopdown_array_74_ptr(pointer_t x, type_actual_t cstopdown_array_74);

extern bool_t equal_cstopdown_array_74_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_cstopdown_array_74_ptr(pointer_t x, type_actual_t T);

actual_cstopdown_array_74_t actual_cstopdown_array_74(void);

extern cstopdown_array_74_t update_cstopdown_array_74(cstopdown_array_74_t x, uint32_t i, cstopdown__ent_adt_t v);

extern cstopdown_array_74_t upgrade_cstopdown_array_74(cstopdown_array_74_t x, uint32_t i, cstopdown__ent_adt_t v);



struct cstopdown_funtype_75_s;
        typedef struct cstopdown_funtype_75_s * cstopdown_funtype_75_t;

struct cstopdown_funtype_75_ftbl_s {uint8_t (* fptr)(struct cstopdown_funtype_75_s *, cstopdown_array_74_t);
        uint8_t (* mptr)(struct cstopdown_funtype_75_s *, cstopdown_array_74_t);
        void (* rptr)(struct cstopdown_funtype_75_s *);
        struct cstopdown_funtype_75_s * (* cptr)(struct cstopdown_funtype_75_s *);};
typedef struct cstopdown_funtype_75_ftbl_s * cstopdown_funtype_75_ftbl_t;

struct cstopdown_funtype_75_hashentry_s {uint32_t keyhash; cstopdown_array_74_t key; uint8_t value;}; 
typedef struct cstopdown_funtype_75_hashentry_s cstopdown_funtype_75_hashentry_t;

struct cstopdown_funtype_75_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_75_hashentry_t * data;}; 
typedef struct cstopdown_funtype_75_htbl_s * cstopdown_funtype_75_htbl_t;

struct cstopdown_funtype_75_s {uint32_t count;
        cstopdown_funtype_75_ftbl_t ftbl;
        cstopdown_funtype_75_htbl_t htbl;};
typedef struct cstopdown_funtype_75_s * cstopdown_funtype_75_t;

extern void release_cstopdown_funtype_75(cstopdown_funtype_75_t x);

extern cstopdown_funtype_75_t copy_cstopdown_funtype_75(cstopdown_funtype_75_t x);

extern bool_t equal_cstopdown_funtype_75(cstopdown_funtype_75_t x, cstopdown_funtype_75_t y);

extern char* json_cstopdown_funtype_75(cstopdown_funtype_75_t x);



struct cstopdown_funtype_76_s;
        typedef struct cstopdown_funtype_76_s * cstopdown_funtype_76_t;

struct cstopdown_funtype_76_ftbl_s {cstopdown_funtype_75_t (* fptr)(struct cstopdown_funtype_76_s *, cstopdown_funtype_59_t);
        cstopdown_funtype_75_t (* mptr)(struct cstopdown_funtype_76_s *, cstopdown_funtype_59_t);
        void (* rptr)(struct cstopdown_funtype_76_s *);
        struct cstopdown_funtype_76_s * (* cptr)(struct cstopdown_funtype_76_s *);};
typedef struct cstopdown_funtype_76_ftbl_s * cstopdown_funtype_76_ftbl_t;

struct cstopdown_funtype_76_hashentry_s {uint32_t keyhash; cstopdown_funtype_59_t key; cstopdown_funtype_75_t value;}; 
typedef struct cstopdown_funtype_76_hashentry_s cstopdown_funtype_76_hashentry_t;

struct cstopdown_funtype_76_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_76_hashentry_t * data;}; 
typedef struct cstopdown_funtype_76_htbl_s * cstopdown_funtype_76_htbl_t;

struct cstopdown_funtype_76_s {uint32_t count;
        cstopdown_funtype_76_ftbl_t ftbl;
        cstopdown_funtype_76_htbl_t htbl;};
typedef struct cstopdown_funtype_76_s * cstopdown_funtype_76_t;

extern void release_cstopdown_funtype_76(cstopdown_funtype_76_t x);

extern cstopdown_funtype_76_t copy_cstopdown_funtype_76(cstopdown_funtype_76_t x);

extern bool_t equal_cstopdown_funtype_76(cstopdown_funtype_76_t x, cstopdown_funtype_76_t y);

extern char* json_cstopdown_funtype_76(cstopdown_funtype_76_t x);



struct cstopdown_funtype_77_s;
        typedef struct cstopdown_funtype_77_s * cstopdown_funtype_77_t;

struct cstopdown_funtype_77_ftbl_s {mpq_ptr_t (* fptr)(struct cstopdown_funtype_77_s *, sigma__T_t);
        mpq_ptr_t (* mptr)(struct cstopdown_funtype_77_s *, sigma__T_t);
        void (* rptr)(struct cstopdown_funtype_77_s *);
        struct cstopdown_funtype_77_s * (* cptr)(struct cstopdown_funtype_77_s *);};
typedef struct cstopdown_funtype_77_ftbl_s * cstopdown_funtype_77_ftbl_t;

struct cstopdown_funtype_77_hashentry_s {uint32_t keyhash; sigma__T_t key; mpq_t value;}; 
typedef struct cstopdown_funtype_77_hashentry_s cstopdown_funtype_77_hashentry_t;

struct cstopdown_funtype_77_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_77_hashentry_t * data;}; 
typedef struct cstopdown_funtype_77_htbl_s * cstopdown_funtype_77_htbl_t;

struct cstopdown_funtype_77_s {uint32_t count;
        cstopdown_funtype_77_ftbl_t ftbl;
        cstopdown_funtype_77_htbl_t htbl;};
typedef struct cstopdown_funtype_77_s * cstopdown_funtype_77_t;

extern void release_cstopdown_funtype_77(cstopdown_funtype_77_t x);

extern cstopdown_funtype_77_t copy_cstopdown_funtype_77(cstopdown_funtype_77_t x);

extern bool_t equal_cstopdown_funtype_77(cstopdown_funtype_77_t x, cstopdown_funtype_77_t y);

extern char* json_cstopdown_funtype_77(cstopdown_funtype_77_t x);




struct cstopdown_closure_78_s;
        typedef struct cstopdown_closure_78_s * cstopdown_closure_78_t;

struct cstopdown_closure_78_s {uint32_t count;
         cstopdown_funtype_72_ftbl_t ftbl;
         cstopdown_funtype_72_htbl_t htbl;
        type_actual_t fvar_1;
        cstopdown_funtype_59_t fvar_2;
        cstopdown_funtype_66_t fvar_3;};

uint8_t f_cstopdown_closure_78(struct cstopdown_closure_78_s * closure, uint32_t bvar);

uint8_t m_cstopdown_closure_78(struct cstopdown_closure_78_s * closure, uint32_t bvar);

extern uint8_t h_cstopdown_closure_78(uint32_t ivar_11, type_actual_t ivar_37, cstopdown_funtype_59_t ivar_5, cstopdown_funtype_66_t ivar_2);

extern cstopdown_closure_78_t new_cstopdown_closure_78(void);

extern void release_cstopdown_closure_78(cstopdown_funtype_72_t closure);

extern cstopdown_closure_78_t copy_cstopdown_closure_78(cstopdown_closure_78_t x);



struct cstopdown_funtype_79_s;
        typedef struct cstopdown_funtype_79_s * cstopdown_funtype_79_t;

struct cstopdown_funtype_79_ftbl_s {mpq_ptr_t (* fptr)(struct cstopdown_funtype_79_s *, uint32_t);
        mpq_ptr_t (* mptr)(struct cstopdown_funtype_79_s *, uint32_t);
        void (* rptr)(struct cstopdown_funtype_79_s *);
        struct cstopdown_funtype_79_s * (* cptr)(struct cstopdown_funtype_79_s *);};
typedef struct cstopdown_funtype_79_ftbl_s * cstopdown_funtype_79_ftbl_t;

struct cstopdown_funtype_79_hashentry_s {uint32_t keyhash; uint32_t key; mpq_t value;}; 
typedef struct cstopdown_funtype_79_hashentry_s cstopdown_funtype_79_hashentry_t;

struct cstopdown_funtype_79_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_79_hashentry_t * data;}; 
typedef struct cstopdown_funtype_79_htbl_s * cstopdown_funtype_79_htbl_t;

struct cstopdown_funtype_79_s {uint32_t count;
        cstopdown_funtype_79_ftbl_t ftbl;
        cstopdown_funtype_79_htbl_t htbl;};
typedef struct cstopdown_funtype_79_s * cstopdown_funtype_79_t;

extern void release_cstopdown_funtype_79(cstopdown_funtype_79_t x);

extern cstopdown_funtype_79_t copy_cstopdown_funtype_79(cstopdown_funtype_79_t x);

uint32_t lookup_cstopdown_funtype_79(cstopdown_funtype_79_htbl_t htbl, uint32_t i, uint32_t ihash);

cstopdown_funtype_79_t dupdate_cstopdown_funtype_79(cstopdown_funtype_79_t a, uint32_t i, mpq_ptr_t v);

extern cstopdown_funtype_79_t update_cstopdown_funtype_79(cstopdown_funtype_79_t a, uint32_t i, mpq_ptr_t v);

extern bool_t equal_cstopdown_funtype_79(cstopdown_funtype_79_t x, cstopdown_funtype_79_t y);

extern char* json_cstopdown_funtype_79(cstopdown_funtype_79_t x);




struct cstopdown_closure_80_s;
        typedef struct cstopdown_closure_80_s * cstopdown_closure_80_t;

struct cstopdown_closure_80_s {uint32_t count;
         cstopdown_funtype_79_ftbl_t ftbl;
         cstopdown_funtype_79_htbl_t htbl;
        cstopdown_funtype_72_t fvar_1;};

mpq_ptr_t f_cstopdown_closure_80(struct cstopdown_closure_80_s * closure, uint32_t bvar);

mpq_ptr_t m_cstopdown_closure_80(struct cstopdown_closure_80_s * closure, uint32_t bvar);

extern mpq_ptr_t h_cstopdown_closure_80(uint32_t ivar_58, cstopdown_funtype_72_t ivar_55);

extern cstopdown_closure_80_t new_cstopdown_closure_80(void);

extern void release_cstopdown_closure_80(cstopdown_funtype_79_t closure);

extern cstopdown_closure_80_t copy_cstopdown_closure_80(cstopdown_closure_80_t x);




struct cstopdown_closure_81_s;
        typedef struct cstopdown_closure_81_s * cstopdown_closure_81_t;

struct cstopdown_closure_81_s {uint32_t count;
         cstopdown_funtype_59_ftbl_t ftbl;
         cstopdown_funtype_59_htbl_t htbl;};

bool_t f_cstopdown_closure_81(struct cstopdown_closure_81_s * closure, cstopdown__ent_adt_t bvar);

bool_t m_cstopdown_closure_81(struct cstopdown_closure_81_s * closure, cstopdown__ent_adt_t bvar);

extern bool_t h_cstopdown_closure_81(cstopdown__ent_adt_t ivar_18);

extern cstopdown_closure_81_t new_cstopdown_closure_81(void);

extern void release_cstopdown_closure_81(cstopdown_funtype_59_t closure);

extern cstopdown_closure_81_t copy_cstopdown_closure_81(cstopdown_closure_81_t x);




struct cstopdown_closure_82_s;
        typedef struct cstopdown_closure_82_s * cstopdown_closure_82_t;

struct cstopdown_closure_82_s {uint32_t count;
         cstopdown_funtype_59_ftbl_t ftbl;
         cstopdown_funtype_59_htbl_t htbl;};

bool_t f_cstopdown_closure_82(struct cstopdown_closure_82_s * closure, cstopdown__ent_adt_t bvar);

bool_t m_cstopdown_closure_82(struct cstopdown_closure_82_s * closure, cstopdown__ent_adt_t bvar);

extern bool_t h_cstopdown_closure_82(cstopdown__ent_adt_t ivar_10);

extern cstopdown_closure_82_t new_cstopdown_closure_82(void);

extern void release_cstopdown_closure_82(cstopdown_funtype_59_t closure);

extern cstopdown_closure_82_t copy_cstopdown_closure_82(cstopdown_closure_82_t x);



struct cstopdown_funtype_83_s;
        typedef struct cstopdown_funtype_83_s * cstopdown_funtype_83_t;

struct cstopdown_funtype_83_ftbl_s {bool_t (* fptr)(struct cstopdown_funtype_83_s *, uint64_t);
        bool_t (* mptr)(struct cstopdown_funtype_83_s *, uint64_t);
        void (* rptr)(struct cstopdown_funtype_83_s *);
        struct cstopdown_funtype_83_s * (* cptr)(struct cstopdown_funtype_83_s *);};
typedef struct cstopdown_funtype_83_ftbl_s * cstopdown_funtype_83_ftbl_t;

struct cstopdown_funtype_83_hashentry_s {uint32_t keyhash; uint64_t key; bool_t value;}; 
typedef struct cstopdown_funtype_83_hashentry_s cstopdown_funtype_83_hashentry_t;

struct cstopdown_funtype_83_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_83_hashentry_t * data;}; 
typedef struct cstopdown_funtype_83_htbl_s * cstopdown_funtype_83_htbl_t;

struct cstopdown_funtype_83_s {uint32_t count;
        cstopdown_funtype_83_ftbl_t ftbl;
        cstopdown_funtype_83_htbl_t htbl;};
typedef struct cstopdown_funtype_83_s * cstopdown_funtype_83_t;

extern void release_cstopdown_funtype_83(cstopdown_funtype_83_t x);

extern cstopdown_funtype_83_t copy_cstopdown_funtype_83(cstopdown_funtype_83_t x);

uint32_t lookup_cstopdown_funtype_83(cstopdown_funtype_83_htbl_t htbl, uint64_t i, uint32_t ihash);

cstopdown_funtype_83_t dupdate_cstopdown_funtype_83(cstopdown_funtype_83_t a, uint64_t i, bool_t v);

extern cstopdown_funtype_83_t update_cstopdown_funtype_83(cstopdown_funtype_83_t a, uint64_t i, bool_t v);

extern bool_t equal_cstopdown_funtype_83(cstopdown_funtype_83_t x, cstopdown_funtype_83_t y);

extern char* json_cstopdown_funtype_83(cstopdown_funtype_83_t x);




struct cstopdown_closure_84_s;
        typedef struct cstopdown_closure_84_s * cstopdown_closure_84_t;

struct cstopdown_closure_84_s {uint32_t count;
         cstopdown_funtype_83_ftbl_t ftbl;
         cstopdown_funtype_83_htbl_t htbl;
        uint32_t fvar_1;
        cstopdown_funtype_66_t fvar_2;};

bool_t f_cstopdown_closure_84(struct cstopdown_closure_84_s * closure, uint64_t bvar);

bool_t m_cstopdown_closure_84(struct cstopdown_closure_84_s * closure, uint64_t bvar);

extern bool_t h_cstopdown_closure_84(uint64_t ivar_6, uint32_t ivar_1, cstopdown_funtype_66_t ivar_2);

extern cstopdown_closure_84_t new_cstopdown_closure_84(void);

extern void release_cstopdown_closure_84(cstopdown_funtype_83_t closure);

extern cstopdown_closure_84_t copy_cstopdown_closure_84(cstopdown_closure_84_t x);




struct cstopdown_closure_85_s;
        typedef struct cstopdown_closure_85_s * cstopdown_closure_85_t;

struct cstopdown_closure_85_s {uint32_t count;
         cstopdown_funtype_59_ftbl_t ftbl;
         cstopdown_funtype_59_htbl_t htbl;
        cstopdown__lang_spec_t fvar_1;
        uint32_t fvar_2;
        cstopdown_funtype_66_t fvar_3;
        uint64_t fvar_4;};

bool_t f_cstopdown_closure_85(struct cstopdown_closure_85_s * closure, cstopdown__ent_adt_t bvar);

bool_t m_cstopdown_closure_85(struct cstopdown_closure_85_s * closure, cstopdown__ent_adt_t bvar);

extern bool_t h_cstopdown_closure_85(cstopdown__ent_adt_t ivar_8, cstopdown__lang_spec_t ivar_2, uint32_t ivar_1, cstopdown_funtype_66_t ivar_4, uint64_t ivar_3);

extern cstopdown_closure_85_t new_cstopdown_closure_85(void);

extern void release_cstopdown_closure_85(cstopdown_funtype_59_t closure);

extern cstopdown_closure_85_t copy_cstopdown_closure_85(cstopdown_closure_85_t x);




struct cstopdown_closure_86_s;
        typedef struct cstopdown_closure_86_s * cstopdown_closure_86_t;

struct cstopdown_closure_86_s {uint32_t count;
         cstopdown_funtype_66_ftbl_t ftbl;
         cstopdown_funtype_66_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;};

cstopdown_funtype_65_t f_cstopdown_closure_86(struct cstopdown_closure_86_s * closure, uint32_t bvar);

cstopdown_funtype_65_t m_cstopdown_closure_86(struct cstopdown_closure_86_s * closure, uint32_t bvar);

extern cstopdown_funtype_65_t h_cstopdown_closure_86(uint32_t ivar_81, cstopdown_funtype_66_t ivar_4);

extern cstopdown_closure_86_t new_cstopdown_closure_86(void);

extern void release_cstopdown_closure_86(cstopdown_funtype_66_t closure);

extern cstopdown_closure_86_t copy_cstopdown_closure_86(cstopdown_closure_86_t x);




struct cstopdown_closure_87_s;
        typedef struct cstopdown_closure_87_s * cstopdown_closure_87_t;

struct cstopdown_closure_87_s {uint32_t count;
         cstopdown_funtype_66_ftbl_t ftbl;
         cstopdown_funtype_66_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;};

cstopdown_funtype_65_t f_cstopdown_closure_87(struct cstopdown_closure_87_s * closure, uint32_t bvar);

cstopdown_funtype_65_t m_cstopdown_closure_87(struct cstopdown_closure_87_s * closure, uint32_t bvar);

extern cstopdown_funtype_65_t h_cstopdown_closure_87(uint32_t ivar_119, cstopdown_funtype_66_t ivar_4);

extern cstopdown_closure_87_t new_cstopdown_closure_87(void);

extern void release_cstopdown_closure_87(cstopdown_funtype_66_t closure);

extern cstopdown_closure_87_t copy_cstopdown_closure_87(cstopdown_closure_87_t x);




struct cstopdown_closure_88_s;
        typedef struct cstopdown_closure_88_s * cstopdown_closure_88_t;

struct cstopdown_closure_88_s {uint32_t count;
         cstopdown_funtype_69_ftbl_t ftbl;
         cstopdown_funtype_69_htbl_t htbl;
        cstopdown__lang_spec_t fvar_1;
        uint32_t fvar_2;
        cstopdown_funtype_66_t fvar_3;
        uint64_t fvar_4;};

bool_t f_cstopdown_closure_88(struct cstopdown_closure_88_s * closure, cstopdown_record_68_t bvar);

bool_t m_cstopdown_closure_88(struct cstopdown_closure_88_s * closure, cstopdown__ent_adt_t bvar_1, cstopdown__ent_adt_t bvar_2);

extern bool_t h_cstopdown_closure_88(cstopdown__ent_adt_t ivar_8, cstopdown__ent_adt_t ivar_9, cstopdown__lang_spec_t ivar_2, uint32_t ivar_1, cstopdown_funtype_66_t ivar_4, uint64_t ivar_3);

extern cstopdown_closure_88_t new_cstopdown_closure_88(void);

extern void release_cstopdown_closure_88(cstopdown_funtype_69_t closure);

extern cstopdown_closure_88_t copy_cstopdown_closure_88(cstopdown_closure_88_t x);




struct cstopdown_closure_89_s;
        typedef struct cstopdown_closure_89_s * cstopdown_closure_89_t;

struct cstopdown_closure_89_s {uint32_t count;
         cstopdown_funtype_66_ftbl_t ftbl;
         cstopdown_funtype_66_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;};

cstopdown_funtype_65_t f_cstopdown_closure_89(struct cstopdown_closure_89_s * closure, uint32_t bvar);

cstopdown_funtype_65_t m_cstopdown_closure_89(struct cstopdown_closure_89_s * closure, uint32_t bvar);

extern cstopdown_funtype_65_t h_cstopdown_closure_89(uint32_t ivar_70, cstopdown_funtype_66_t ivar_4);

extern cstopdown_closure_89_t new_cstopdown_closure_89(void);

extern void release_cstopdown_closure_89(cstopdown_funtype_66_t closure);

extern cstopdown_closure_89_t copy_cstopdown_closure_89(cstopdown_closure_89_t x);




struct cstopdown_closure_90_s;
        typedef struct cstopdown_closure_90_s * cstopdown_closure_90_t;

struct cstopdown_closure_90_s {uint32_t count;
         cstopdown_funtype_59_ftbl_t ftbl;
         cstopdown_funtype_59_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;
        cstopdown__lang_spec_t fvar_2;
        uint32_t fvar_3;
        uint64_t fvar_4;};

bool_t f_cstopdown_closure_90(struct cstopdown_closure_90_s * closure, cstopdown__ent_adt_t bvar);

bool_t m_cstopdown_closure_90(struct cstopdown_closure_90_s * closure, cstopdown__ent_adt_t bvar);

extern bool_t h_cstopdown_closure_90(cstopdown__ent_adt_t ivar_8, cstopdown_funtype_66_t ivar_4, cstopdown__lang_spec_t ivar_2, uint32_t ivar_1, uint64_t ivar_3);

extern cstopdown_closure_90_t new_cstopdown_closure_90(void);

extern void release_cstopdown_closure_90(cstopdown_funtype_59_t closure);

extern cstopdown_closure_90_t copy_cstopdown_closure_90(cstopdown_closure_90_t x);




struct cstopdown_closure_91_s;
        typedef struct cstopdown_closure_91_s * cstopdown_closure_91_t;

struct cstopdown_closure_91_s {uint32_t count;
         cstopdown_funtype_66_ftbl_t ftbl;
         cstopdown_funtype_66_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;};

cstopdown_funtype_65_t f_cstopdown_closure_91(struct cstopdown_closure_91_s * closure, uint32_t bvar);

cstopdown_funtype_65_t m_cstopdown_closure_91(struct cstopdown_closure_91_s * closure, uint32_t bvar);

extern cstopdown_funtype_65_t h_cstopdown_closure_91(uint32_t ivar_109, cstopdown_funtype_66_t ivar_4);

extern cstopdown_closure_91_t new_cstopdown_closure_91(void);

extern void release_cstopdown_closure_91(cstopdown_funtype_66_t closure);

extern cstopdown_closure_91_t copy_cstopdown_closure_91(cstopdown_closure_91_t x);



struct cstopdown_record_92_s {
        uint32_t count; 
        cstopdown_funtype_66_t project_1;
        uint32_t project_2;
        uint8_t project_3;
        uint64_t project_4;};
typedef struct cstopdown_record_92_s * cstopdown_record_92_t;

extern cstopdown_record_92_t new_cstopdown_record_92(void);

extern void release_cstopdown_record_92(cstopdown_record_92_t x);

extern cstopdown_record_92_t copy_cstopdown_record_92(cstopdown_record_92_t x);

extern bool_t equal_cstopdown_record_92(cstopdown_record_92_t x, cstopdown_record_92_t y);
extern char * json_cstopdown_record_92(cstopdown_record_92_t x);

typedef struct actual_cstopdown_record_92_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown_record_92_t;
void release_cstopdown_record_92_ptr(pointer_t x, type_actual_t cstopdown_record_92);

extern bool_t equal_cstopdown_record_92_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_92_t T);

extern char * json_cstopdown_record_92_ptr(pointer_t x,  actual_cstopdown_record_92_t T);

actual_cstopdown_record_92_t actual_cstopdown_record_92(void);

extern cstopdown_record_92_t update_cstopdown_record_92_project_1(cstopdown_record_92_t x, cstopdown_funtype_66_t v);

extern cstopdown_record_92_t update_cstopdown_record_92_project_2(cstopdown_record_92_t x, uint32_t v);

extern cstopdown_record_92_t update_cstopdown_record_92_project_3(cstopdown_record_92_t x, uint8_t v);

extern cstopdown_record_92_t update_cstopdown_record_92_project_4(cstopdown_record_92_t x, uint64_t v);



struct cstopdown_funtype_93_s;
        typedef struct cstopdown_funtype_93_s * cstopdown_funtype_93_t;

struct cstopdown_funtype_93_ftbl_s {bool_t (* fptr)(struct cstopdown_funtype_93_s *, cstopdown_record_92_t);
        bool_t (* mptr)(struct cstopdown_funtype_93_s *, cstopdown_funtype_66_t, uint32_t, uint8_t, uint64_t);
        void (* rptr)(struct cstopdown_funtype_93_s *);
        struct cstopdown_funtype_93_s * (* cptr)(struct cstopdown_funtype_93_s *);};
typedef struct cstopdown_funtype_93_ftbl_s * cstopdown_funtype_93_ftbl_t;

struct cstopdown_funtype_93_hashentry_s {uint32_t keyhash; cstopdown_record_92_t key; bool_t value;}; 
typedef struct cstopdown_funtype_93_hashentry_s cstopdown_funtype_93_hashentry_t;

struct cstopdown_funtype_93_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_93_hashentry_t * data;}; 
typedef struct cstopdown_funtype_93_htbl_s * cstopdown_funtype_93_htbl_t;

struct cstopdown_funtype_93_s {uint32_t count;
        cstopdown_funtype_93_ftbl_t ftbl;
        cstopdown_funtype_93_htbl_t htbl;};
typedef struct cstopdown_funtype_93_s * cstopdown_funtype_93_t;

extern void release_cstopdown_funtype_93(cstopdown_funtype_93_t x);

extern cstopdown_funtype_93_t copy_cstopdown_funtype_93(cstopdown_funtype_93_t x);

extern bool_t equal_cstopdown_funtype_93(cstopdown_funtype_93_t x, cstopdown_funtype_93_t y);

extern char* json_cstopdown_funtype_93(cstopdown_funtype_93_t x);




struct cstopdown_closure_94_s;
        typedef struct cstopdown_closure_94_s * cstopdown_closure_94_t;

struct cstopdown_closure_94_s {uint32_t count;
         cstopdown_funtype_93_ftbl_t ftbl;
         cstopdown_funtype_93_htbl_t htbl;
        cstopdown_funtype_72_t fvar_1;
        uint32_t fvar_2;
        cstopdown__lang_spec_t fvar_3;};

bool_t f_cstopdown_closure_94(struct cstopdown_closure_94_s * closure, cstopdown_record_92_t bvar);

bool_t m_cstopdown_closure_94(struct cstopdown_closure_94_s * closure, cstopdown_funtype_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4);

extern bool_t h_cstopdown_closure_94(cstopdown_funtype_66_t ivar_8, uint32_t ivar_11, uint8_t ivar_12, uint64_t ivar_13, cstopdown_funtype_72_t ivar_3, uint32_t ivar_1, cstopdown__lang_spec_t ivar_2);

extern cstopdown_closure_94_t new_cstopdown_closure_94(void);

extern void release_cstopdown_closure_94(cstopdown_funtype_93_t closure);

extern cstopdown_closure_94_t copy_cstopdown_closure_94(cstopdown_closure_94_t x);



struct cstopdown_record_95_s {
        uint32_t count; 
        cstopdown_funtype_66_t project_1;
        uint32_t project_2;
        uint8_t project_3;};
typedef struct cstopdown_record_95_s * cstopdown_record_95_t;

extern cstopdown_record_95_t new_cstopdown_record_95(void);

extern void release_cstopdown_record_95(cstopdown_record_95_t x);

extern cstopdown_record_95_t copy_cstopdown_record_95(cstopdown_record_95_t x);

extern bool_t equal_cstopdown_record_95(cstopdown_record_95_t x, cstopdown_record_95_t y);
extern char * json_cstopdown_record_95(cstopdown_record_95_t x);

typedef struct actual_cstopdown_record_95_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown_record_95_t;
void release_cstopdown_record_95_ptr(pointer_t x, type_actual_t cstopdown_record_95);

extern bool_t equal_cstopdown_record_95_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_95_t T);

extern char * json_cstopdown_record_95_ptr(pointer_t x,  actual_cstopdown_record_95_t T);

actual_cstopdown_record_95_t actual_cstopdown_record_95(void);

extern cstopdown_record_95_t update_cstopdown_record_95_project_1(cstopdown_record_95_t x, cstopdown_funtype_66_t v);

extern cstopdown_record_95_t update_cstopdown_record_95_project_2(cstopdown_record_95_t x, uint32_t v);

extern cstopdown_record_95_t update_cstopdown_record_95_project_3(cstopdown_record_95_t x, uint8_t v);



struct cstopdown_funtype_96_s;
        typedef struct cstopdown_funtype_96_s * cstopdown_funtype_96_t;

struct cstopdown_funtype_96_ftbl_s {bool_t (* fptr)(struct cstopdown_funtype_96_s *, cstopdown_record_95_t);
        bool_t (* mptr)(struct cstopdown_funtype_96_s *, cstopdown_funtype_66_t, uint32_t, uint8_t);
        void (* rptr)(struct cstopdown_funtype_96_s *);
        struct cstopdown_funtype_96_s * (* cptr)(struct cstopdown_funtype_96_s *);};
typedef struct cstopdown_funtype_96_ftbl_s * cstopdown_funtype_96_ftbl_t;

struct cstopdown_funtype_96_hashentry_s {uint32_t keyhash; cstopdown_record_95_t key; bool_t value;}; 
typedef struct cstopdown_funtype_96_hashentry_s cstopdown_funtype_96_hashentry_t;

struct cstopdown_funtype_96_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_96_hashentry_t * data;}; 
typedef struct cstopdown_funtype_96_htbl_s * cstopdown_funtype_96_htbl_t;

struct cstopdown_funtype_96_s {uint32_t count;
        cstopdown_funtype_96_ftbl_t ftbl;
        cstopdown_funtype_96_htbl_t htbl;};
typedef struct cstopdown_funtype_96_s * cstopdown_funtype_96_t;

extern void release_cstopdown_funtype_96(cstopdown_funtype_96_t x);

extern cstopdown_funtype_96_t copy_cstopdown_funtype_96(cstopdown_funtype_96_t x);

extern bool_t equal_cstopdown_funtype_96(cstopdown_funtype_96_t x, cstopdown_funtype_96_t y);

extern char* json_cstopdown_funtype_96(cstopdown_funtype_96_t x);




struct cstopdown_closure_97_s;
        typedef struct cstopdown_closure_97_s * cstopdown_closure_97_t;

struct cstopdown_closure_97_s {uint32_t count;
         cstopdown_funtype_96_ftbl_t ftbl;
         cstopdown_funtype_96_htbl_t htbl;
        cstopdown__lang_spec_t fvar_1;};

bool_t f_cstopdown_closure_97(struct cstopdown_closure_97_s * closure, cstopdown_record_95_t bvar);

bool_t m_cstopdown_closure_97(struct cstopdown_closure_97_s * closure, cstopdown_funtype_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3);

extern bool_t h_cstopdown_closure_97(cstopdown_funtype_66_t ivar_6, uint32_t ivar_9, uint8_t ivar_10, cstopdown__lang_spec_t ivar_2);

extern cstopdown_closure_97_t new_cstopdown_closure_97(void);

extern void release_cstopdown_closure_97(cstopdown_funtype_96_t closure);

extern cstopdown_closure_97_t copy_cstopdown_closure_97(cstopdown_closure_97_t x);



struct cstopdown_record_98_s {
        uint32_t count; 
        cstopdown_funtype_66_t project_1;
        uint32_t project_2;
        uint8_t project_3;
        uint64_t project_4;
        mpz_t project_5;};
typedef struct cstopdown_record_98_s * cstopdown_record_98_t;

extern cstopdown_record_98_t new_cstopdown_record_98(void);

extern void release_cstopdown_record_98(cstopdown_record_98_t x);

extern cstopdown_record_98_t copy_cstopdown_record_98(cstopdown_record_98_t x);

extern bool_t equal_cstopdown_record_98(cstopdown_record_98_t x, cstopdown_record_98_t y);
extern char * json_cstopdown_record_98(cstopdown_record_98_t x);

typedef struct actual_cstopdown_record_98_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown_record_98_t;
void release_cstopdown_record_98_ptr(pointer_t x, type_actual_t cstopdown_record_98);

extern bool_t equal_cstopdown_record_98_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_98_t T);

extern char * json_cstopdown_record_98_ptr(pointer_t x,  actual_cstopdown_record_98_t T);

actual_cstopdown_record_98_t actual_cstopdown_record_98(void);

extern cstopdown_record_98_t update_cstopdown_record_98_project_1(cstopdown_record_98_t x, cstopdown_funtype_66_t v);

extern cstopdown_record_98_t update_cstopdown_record_98_project_2(cstopdown_record_98_t x, uint32_t v);

extern cstopdown_record_98_t update_cstopdown_record_98_project_3(cstopdown_record_98_t x, uint8_t v);

extern cstopdown_record_98_t update_cstopdown_record_98_project_4(cstopdown_record_98_t x, uint64_t v);

extern cstopdown_record_98_t update_cstopdown_record_98_project_5(cstopdown_record_98_t x, mpz_ptr_t v);



struct cstopdown_funtype_99_s;
        typedef struct cstopdown_funtype_99_s * cstopdown_funtype_99_t;

struct cstopdown_funtype_99_ftbl_s {bool_t (* fptr)(struct cstopdown_funtype_99_s *, cstopdown_record_98_t);
        bool_t (* mptr)(struct cstopdown_funtype_99_s *, cstopdown_funtype_66_t, uint32_t, uint8_t, uint64_t, mpz_ptr_t);
        void (* rptr)(struct cstopdown_funtype_99_s *);
        struct cstopdown_funtype_99_s * (* cptr)(struct cstopdown_funtype_99_s *);};
typedef struct cstopdown_funtype_99_ftbl_s * cstopdown_funtype_99_ftbl_t;

struct cstopdown_funtype_99_hashentry_s {uint32_t keyhash; cstopdown_record_98_t key; bool_t value;}; 
typedef struct cstopdown_funtype_99_hashentry_s cstopdown_funtype_99_hashentry_t;

struct cstopdown_funtype_99_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_99_hashentry_t * data;}; 
typedef struct cstopdown_funtype_99_htbl_s * cstopdown_funtype_99_htbl_t;

struct cstopdown_funtype_99_s {uint32_t count;
        cstopdown_funtype_99_ftbl_t ftbl;
        cstopdown_funtype_99_htbl_t htbl;};
typedef struct cstopdown_funtype_99_s * cstopdown_funtype_99_t;

extern void release_cstopdown_funtype_99(cstopdown_funtype_99_t x);

extern cstopdown_funtype_99_t copy_cstopdown_funtype_99(cstopdown_funtype_99_t x);

extern bool_t equal_cstopdown_funtype_99(cstopdown_funtype_99_t x, cstopdown_funtype_99_t y);

extern char* json_cstopdown_funtype_99(cstopdown_funtype_99_t x);




struct cstopdown_closure_100_s;
        typedef struct cstopdown_closure_100_s * cstopdown_closure_100_t;

struct cstopdown_closure_100_s {uint32_t count;
         cstopdown_funtype_99_ftbl_t ftbl;
         cstopdown_funtype_99_htbl_t htbl;
        cstopdown_funtype_72_t fvar_1;
        cstopdown__lang_spec_t fvar_2;};

bool_t f_cstopdown_closure_100(struct cstopdown_closure_100_s * closure, cstopdown_record_98_t bvar);

bool_t m_cstopdown_closure_100(struct cstopdown_closure_100_s * closure, cstopdown_funtype_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4, mpz_ptr_t bvar_5);

extern bool_t h_cstopdown_closure_100(cstopdown_funtype_66_t ivar_11, uint32_t ivar_14, uint8_t ivar_15, uint64_t ivar_16, mpz_ptr_t ivar_17, cstopdown_funtype_72_t ivar_3, cstopdown__lang_spec_t ivar_2);

extern cstopdown_closure_100_t new_cstopdown_closure_100(void);

extern void release_cstopdown_closure_100(cstopdown_funtype_99_t closure);

extern cstopdown_closure_100_t copy_cstopdown_closure_100(cstopdown_closure_100_t x);



struct cstopdown_record_101_s {
        uint32_t count; 
        cstopdown_funtype_66_t project_1;
        uint32_t project_2;
        uint8_t project_3;
        cstopdown__ent_adt_t project_4;};
typedef struct cstopdown_record_101_s * cstopdown_record_101_t;

extern cstopdown_record_101_t new_cstopdown_record_101(void);

extern void release_cstopdown_record_101(cstopdown_record_101_t x);

extern cstopdown_record_101_t copy_cstopdown_record_101(cstopdown_record_101_t x);

extern bool_t equal_cstopdown_record_101(cstopdown_record_101_t x, cstopdown_record_101_t y);
extern char * json_cstopdown_record_101(cstopdown_record_101_t x);

typedef struct actual_cstopdown_record_101_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown_record_101_t;
void release_cstopdown_record_101_ptr(pointer_t x, type_actual_t cstopdown_record_101);

extern bool_t equal_cstopdown_record_101_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_101_t T);

extern char * json_cstopdown_record_101_ptr(pointer_t x,  actual_cstopdown_record_101_t T);

actual_cstopdown_record_101_t actual_cstopdown_record_101(void);

extern cstopdown_record_101_t update_cstopdown_record_101_project_1(cstopdown_record_101_t x, cstopdown_funtype_66_t v);

extern cstopdown_record_101_t update_cstopdown_record_101_project_2(cstopdown_record_101_t x, uint32_t v);

extern cstopdown_record_101_t update_cstopdown_record_101_project_3(cstopdown_record_101_t x, uint8_t v);

extern cstopdown_record_101_t update_cstopdown_record_101_project_4(cstopdown_record_101_t x, cstopdown__ent_adt_t v);



struct cstopdown_funtype_102_s;
        typedef struct cstopdown_funtype_102_s * cstopdown_funtype_102_t;

struct cstopdown_funtype_102_ftbl_s {bool_t (* fptr)(struct cstopdown_funtype_102_s *, cstopdown_record_101_t);
        bool_t (* mptr)(struct cstopdown_funtype_102_s *, cstopdown_funtype_66_t, uint32_t, uint8_t, cstopdown__ent_adt_t);
        void (* rptr)(struct cstopdown_funtype_102_s *);
        struct cstopdown_funtype_102_s * (* cptr)(struct cstopdown_funtype_102_s *);};
typedef struct cstopdown_funtype_102_ftbl_s * cstopdown_funtype_102_ftbl_t;

struct cstopdown_funtype_102_hashentry_s {uint32_t keyhash; cstopdown_record_101_t key; bool_t value;}; 
typedef struct cstopdown_funtype_102_hashentry_s cstopdown_funtype_102_hashentry_t;

struct cstopdown_funtype_102_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_102_hashentry_t * data;}; 
typedef struct cstopdown_funtype_102_htbl_s * cstopdown_funtype_102_htbl_t;

struct cstopdown_funtype_102_s {uint32_t count;
        cstopdown_funtype_102_ftbl_t ftbl;
        cstopdown_funtype_102_htbl_t htbl;};
typedef struct cstopdown_funtype_102_s * cstopdown_funtype_102_t;

extern void release_cstopdown_funtype_102(cstopdown_funtype_102_t x);

extern cstopdown_funtype_102_t copy_cstopdown_funtype_102(cstopdown_funtype_102_t x);

extern bool_t equal_cstopdown_funtype_102(cstopdown_funtype_102_t x, cstopdown_funtype_102_t y);

extern char* json_cstopdown_funtype_102(cstopdown_funtype_102_t x);




struct cstopdown_closure_103_s;
        typedef struct cstopdown_closure_103_s * cstopdown_closure_103_t;

struct cstopdown_closure_103_s {uint32_t count;
         cstopdown_funtype_102_ftbl_t ftbl;
         cstopdown_funtype_102_htbl_t htbl;
        uint32_t fvar_1;
        cstopdown_funtype_72_t fvar_2;
        cstopdown__lang_spec_t fvar_3;};

bool_t f_cstopdown_closure_103(struct cstopdown_closure_103_s * closure, cstopdown_record_101_t bvar);

bool_t m_cstopdown_closure_103(struct cstopdown_closure_103_s * closure, cstopdown_funtype_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, cstopdown__ent_adt_t bvar_4);

extern bool_t h_cstopdown_closure_103(cstopdown_funtype_66_t ivar_8, uint32_t ivar_11, uint8_t ivar_12, cstopdown__ent_adt_t ivar_13, uint32_t ivar_1, cstopdown_funtype_72_t ivar_3, cstopdown__lang_spec_t ivar_2);

extern cstopdown_closure_103_t new_cstopdown_closure_103(void);

extern void release_cstopdown_closure_103(cstopdown_funtype_102_t closure);

extern cstopdown_closure_103_t copy_cstopdown_closure_103(cstopdown_closure_103_t x);




struct cstopdown_closure_104_s;
        typedef struct cstopdown_closure_104_s * cstopdown_closure_104_t;

struct cstopdown_closure_104_s {uint32_t count;
         cstopdown_funtype_66_ftbl_t ftbl;
         cstopdown_funtype_66_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;};

cstopdown_funtype_65_t f_cstopdown_closure_104(struct cstopdown_closure_104_s * closure, uint32_t bvar);

cstopdown_funtype_65_t m_cstopdown_closure_104(struct cstopdown_closure_104_s * closure, uint32_t bvar);

extern cstopdown_funtype_65_t h_cstopdown_closure_104(uint32_t ivar_45, cstopdown_funtype_66_t ivar_8);

extern cstopdown_closure_104_t new_cstopdown_closure_104(void);

extern void release_cstopdown_closure_104(cstopdown_funtype_66_t closure);

extern cstopdown_closure_104_t copy_cstopdown_closure_104(cstopdown_closure_104_t x);




struct cstopdown_closure_105_s;
        typedef struct cstopdown_closure_105_s * cstopdown_closure_105_t;

struct cstopdown_closure_105_s {uint32_t count;
         cstopdown_funtype_66_ftbl_t ftbl;
         cstopdown_funtype_66_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;};

cstopdown_funtype_65_t f_cstopdown_closure_105(struct cstopdown_closure_105_s * closure, uint32_t bvar);

cstopdown_funtype_65_t m_cstopdown_closure_105(struct cstopdown_closure_105_s * closure, uint32_t bvar);

extern cstopdown_funtype_65_t h_cstopdown_closure_105(uint32_t ivar_70, cstopdown_funtype_66_t ivar_8);

extern cstopdown_closure_105_t new_cstopdown_closure_105(void);

extern void release_cstopdown_closure_105(cstopdown_funtype_66_t closure);

extern cstopdown_closure_105_t copy_cstopdown_closure_105(cstopdown_closure_105_t x);




struct cstopdown_closure_106_s;
        typedef struct cstopdown_closure_106_s * cstopdown_closure_106_t;

struct cstopdown_closure_106_s {uint32_t count;
         cstopdown_funtype_66_ftbl_t ftbl;
         cstopdown_funtype_66_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;};

cstopdown_funtype_65_t f_cstopdown_closure_106(struct cstopdown_closure_106_s * closure, uint32_t bvar);

cstopdown_funtype_65_t m_cstopdown_closure_106(struct cstopdown_closure_106_s * closure, uint32_t bvar);

extern cstopdown_funtype_65_t h_cstopdown_closure_106(uint32_t ivar_126, cstopdown_funtype_66_t ivar_8);

extern cstopdown_closure_106_t new_cstopdown_closure_106(void);

extern void release_cstopdown_closure_106(cstopdown_funtype_66_t closure);

extern cstopdown_closure_106_t copy_cstopdown_closure_106(cstopdown_closure_106_t x);




struct cstopdown_closure_107_s;
        typedef struct cstopdown_closure_107_s * cstopdown_closure_107_t;

struct cstopdown_closure_107_s {uint32_t count;
         cstopdown_funtype_102_ftbl_t ftbl;
         cstopdown_funtype_102_htbl_t htbl;
        uint32_t fvar_1;
        cstopdown_funtype_72_t fvar_2;
        cstopdown__lang_spec_t fvar_3;};

bool_t f_cstopdown_closure_107(struct cstopdown_closure_107_s * closure, cstopdown_record_101_t bvar);

bool_t m_cstopdown_closure_107(struct cstopdown_closure_107_s * closure, cstopdown_funtype_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, cstopdown__ent_adt_t bvar_4);

extern bool_t h_cstopdown_closure_107(cstopdown_funtype_66_t ivar_8, uint32_t ivar_11, uint8_t ivar_12, cstopdown__ent_adt_t ivar_13, uint32_t ivar_1, cstopdown_funtype_72_t ivar_3, cstopdown__lang_spec_t ivar_2);

extern cstopdown_closure_107_t new_cstopdown_closure_107(void);

extern void release_cstopdown_closure_107(cstopdown_funtype_102_t closure);

extern cstopdown_closure_107_t copy_cstopdown_closure_107(cstopdown_closure_107_t x);




struct cstopdown_closure_108_s;
        typedef struct cstopdown_closure_108_s * cstopdown_closure_108_t;

struct cstopdown_closure_108_s {uint32_t count;
         cstopdown_funtype_66_ftbl_t ftbl;
         cstopdown_funtype_66_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;};

cstopdown_funtype_65_t f_cstopdown_closure_108(struct cstopdown_closure_108_s * closure, uint32_t bvar);

cstopdown_funtype_65_t m_cstopdown_closure_108(struct cstopdown_closure_108_s * closure, uint32_t bvar);

extern cstopdown_funtype_65_t h_cstopdown_closure_108(uint32_t ivar_45, cstopdown_funtype_66_t ivar_8);

extern cstopdown_closure_108_t new_cstopdown_closure_108(void);

extern void release_cstopdown_closure_108(cstopdown_funtype_66_t closure);

extern cstopdown_closure_108_t copy_cstopdown_closure_108(cstopdown_closure_108_t x);




struct cstopdown_closure_109_s;
        typedef struct cstopdown_closure_109_s * cstopdown_closure_109_t;

struct cstopdown_closure_109_s {uint32_t count;
         cstopdown_funtype_66_ftbl_t ftbl;
         cstopdown_funtype_66_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;};

cstopdown_funtype_65_t f_cstopdown_closure_109(struct cstopdown_closure_109_s * closure, uint32_t bvar);

cstopdown_funtype_65_t m_cstopdown_closure_109(struct cstopdown_closure_109_s * closure, uint32_t bvar);

extern cstopdown_funtype_65_t h_cstopdown_closure_109(uint32_t ivar_70, cstopdown_funtype_66_t ivar_8);

extern cstopdown_closure_109_t new_cstopdown_closure_109(void);

extern void release_cstopdown_closure_109(cstopdown_funtype_66_t closure);

extern cstopdown_closure_109_t copy_cstopdown_closure_109(cstopdown_closure_109_t x);




struct cstopdown_closure_110_s;
        typedef struct cstopdown_closure_110_s * cstopdown_closure_110_t;

struct cstopdown_closure_110_s {uint32_t count;
         cstopdown_funtype_66_ftbl_t ftbl;
         cstopdown_funtype_66_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;};

cstopdown_funtype_65_t f_cstopdown_closure_110(struct cstopdown_closure_110_s * closure, uint32_t bvar);

cstopdown_funtype_65_t m_cstopdown_closure_110(struct cstopdown_closure_110_s * closure, uint32_t bvar);

extern cstopdown_funtype_65_t h_cstopdown_closure_110(uint32_t ivar_126, cstopdown_funtype_66_t ivar_8);

extern cstopdown_closure_110_t new_cstopdown_closure_110(void);

extern void release_cstopdown_closure_110(cstopdown_funtype_66_t closure);

extern cstopdown_closure_110_t copy_cstopdown_closure_110(cstopdown_closure_110_t x);



struct cstopdown_funtype_111_s;
        typedef struct cstopdown_funtype_111_s * cstopdown_funtype_111_t;

struct cstopdown_funtype_111_ftbl_s {bool_t (* fptr)(struct cstopdown_funtype_111_s *, cstopdown_funtype_66_t);
        bool_t (* mptr)(struct cstopdown_funtype_111_s *, cstopdown_funtype_66_t);
        void (* rptr)(struct cstopdown_funtype_111_s *);
        struct cstopdown_funtype_111_s * (* cptr)(struct cstopdown_funtype_111_s *);};
typedef struct cstopdown_funtype_111_ftbl_s * cstopdown_funtype_111_ftbl_t;

struct cstopdown_funtype_111_hashentry_s {uint32_t keyhash; cstopdown_funtype_66_t key; bool_t value;}; 
typedef struct cstopdown_funtype_111_hashentry_s cstopdown_funtype_111_hashentry_t;

struct cstopdown_funtype_111_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_111_hashentry_t * data;}; 
typedef struct cstopdown_funtype_111_htbl_s * cstopdown_funtype_111_htbl_t;

struct cstopdown_funtype_111_s {uint32_t count;
        cstopdown_funtype_111_ftbl_t ftbl;
        cstopdown_funtype_111_htbl_t htbl;};
typedef struct cstopdown_funtype_111_s * cstopdown_funtype_111_t;

extern void release_cstopdown_funtype_111(cstopdown_funtype_111_t x);

extern cstopdown_funtype_111_t copy_cstopdown_funtype_111(cstopdown_funtype_111_t x);

extern bool_t equal_cstopdown_funtype_111(cstopdown_funtype_111_t x, cstopdown_funtype_111_t y);

extern char* json_cstopdown_funtype_111(cstopdown_funtype_111_t x);




struct cstopdown_closure_112_s;
        typedef struct cstopdown_closure_112_s * cstopdown_closure_112_t;

struct cstopdown_closure_112_s {uint32_t count;
         cstopdown_funtype_111_ftbl_t ftbl;
         cstopdown_funtype_111_htbl_t htbl;};

bool_t f_cstopdown_closure_112(struct cstopdown_closure_112_s * closure, cstopdown_funtype_66_t bvar);

bool_t m_cstopdown_closure_112(struct cstopdown_closure_112_s * closure, cstopdown_funtype_66_t bvar);

extern bool_t h_cstopdown_closure_112(cstopdown_funtype_66_t ivar_8);

extern cstopdown_closure_112_t new_cstopdown_closure_112(void);

extern void release_cstopdown_closure_112(cstopdown_funtype_111_t closure);

extern cstopdown_closure_112_t copy_cstopdown_closure_112(cstopdown_closure_112_t x);




struct cstopdown_closure_113_s;
        typedef struct cstopdown_closure_113_s * cstopdown_closure_113_t;

struct cstopdown_closure_113_s {uint32_t count;
         cstopdown_funtype_64_ftbl_t ftbl;
         cstopdown_funtype_64_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;};

bool_t f_cstopdown_closure_113(struct cstopdown_closure_113_s * closure, cstopdown_record_40_t bvar);

bool_t m_cstopdown_closure_113(struct cstopdown_closure_113_s * closure, uint32_t bvar_1, uint8_t bvar_2);

extern bool_t h_cstopdown_closure_113(uint32_t ivar_6, uint8_t ivar_7, cstopdown_funtype_66_t ivar_2);

extern cstopdown_closure_113_t new_cstopdown_closure_113(void);

extern void release_cstopdown_closure_113(cstopdown_funtype_64_t closure);

extern cstopdown_closure_113_t copy_cstopdown_closure_113(cstopdown_closure_113_t x);



struct cstopdown_funtype_114_s;
        typedef struct cstopdown_funtype_114_s * cstopdown_funtype_114_t;

struct cstopdown_funtype_114_ftbl_s {cstopdown_funtype_111_t (* fptr)(struct cstopdown_funtype_114_s *, cstopdown_record_40_t);
        cstopdown_funtype_111_t (* mptr)(struct cstopdown_funtype_114_s *, uint32_t, uint8_t);
        void (* rptr)(struct cstopdown_funtype_114_s *);
        struct cstopdown_funtype_114_s * (* cptr)(struct cstopdown_funtype_114_s *);};
typedef struct cstopdown_funtype_114_ftbl_s * cstopdown_funtype_114_ftbl_t;

struct cstopdown_funtype_114_hashentry_s {uint32_t keyhash; cstopdown_record_40_t key; cstopdown_funtype_111_t value;}; 
typedef struct cstopdown_funtype_114_hashentry_s cstopdown_funtype_114_hashentry_t;

struct cstopdown_funtype_114_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_114_hashentry_t * data;}; 
typedef struct cstopdown_funtype_114_htbl_s * cstopdown_funtype_114_htbl_t;

struct cstopdown_funtype_114_s {uint32_t count;
        cstopdown_funtype_114_ftbl_t ftbl;
        cstopdown_funtype_114_htbl_t htbl;};
typedef struct cstopdown_funtype_114_s * cstopdown_funtype_114_t;

extern void release_cstopdown_funtype_114(cstopdown_funtype_114_t x);

extern cstopdown_funtype_114_t copy_cstopdown_funtype_114(cstopdown_funtype_114_t x);

extern bool_t equal_cstopdown_funtype_114(cstopdown_funtype_114_t x, cstopdown_funtype_114_t y);

extern char* json_cstopdown_funtype_114(cstopdown_funtype_114_t x);




struct cstopdown_closure_115_s;
        typedef struct cstopdown_closure_115_s * cstopdown_closure_115_t;

struct cstopdown_closure_115_s {uint32_t count;
         cstopdown_funtype_114_ftbl_t ftbl;
         cstopdown_funtype_114_htbl_t htbl;
        cstopdown__lang_spec_t fvar_1;
        cstopdown_funtype_72_t fvar_2;
        uint32_t fvar_3;};

cstopdown_funtype_111_t f_cstopdown_closure_115(struct cstopdown_closure_115_s * closure, cstopdown_record_40_t bvar);

cstopdown_funtype_111_t m_cstopdown_closure_115(struct cstopdown_closure_115_s * closure, uint32_t bvar_1, uint8_t bvar_2);

extern cstopdown_funtype_111_t h_cstopdown_closure_115(uint32_t ivar_9, uint8_t ivar_10, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3, uint32_t ivar_1);

extern cstopdown_closure_115_t new_cstopdown_closure_115(void);

extern void release_cstopdown_closure_115(cstopdown_funtype_114_t closure);

extern cstopdown_closure_115_t copy_cstopdown_closure_115(cstopdown_closure_115_t x);




struct cstopdown_closure_116_s;
        typedef struct cstopdown_closure_116_s * cstopdown_closure_116_t;

struct cstopdown_closure_116_s {uint32_t count;
         cstopdown_funtype_111_ftbl_t ftbl;
         cstopdown_funtype_111_htbl_t htbl;
        uint32_t fvar_1;
        uint8_t fvar_2;
        uint32_t fvar_3;
        cstopdown_funtype_72_t fvar_4;
        cstopdown__lang_spec_t fvar_5;};

bool_t f_cstopdown_closure_116(struct cstopdown_closure_116_s * closure, cstopdown_funtype_66_t bvar);

bool_t m_cstopdown_closure_116(struct cstopdown_closure_116_s * closure, cstopdown_funtype_66_t bvar);

extern bool_t h_cstopdown_closure_116(cstopdown_funtype_66_t ivar_14, uint32_t ivar_1, uint8_t ivar_10, uint32_t ivar_9, cstopdown_funtype_72_t ivar_3, cstopdown__lang_spec_t ivar_2);

extern cstopdown_closure_116_t new_cstopdown_closure_116(void);

extern void release_cstopdown_closure_116(cstopdown_funtype_111_t closure);

extern cstopdown_closure_116_t copy_cstopdown_closure_116(cstopdown_closure_116_t x);




struct cstopdown_closure_117_s;
        typedef struct cstopdown_closure_117_s * cstopdown_closure_117_t;

struct cstopdown_closure_117_s {uint32_t count;
         cstopdown_funtype_66_ftbl_t ftbl;
         cstopdown_funtype_66_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;};

cstopdown_funtype_65_t f_cstopdown_closure_117(struct cstopdown_closure_117_s * closure, uint32_t bvar);

cstopdown_funtype_65_t m_cstopdown_closure_117(struct cstopdown_closure_117_s * closure, uint32_t bvar);

extern cstopdown_funtype_65_t h_cstopdown_closure_117(uint32_t ivar_38, cstopdown_funtype_66_t ivar_14);

extern cstopdown_closure_117_t new_cstopdown_closure_117(void);

extern void release_cstopdown_closure_117(cstopdown_funtype_66_t closure);

extern cstopdown_closure_117_t copy_cstopdown_closure_117(cstopdown_closure_117_t x);




struct cstopdown_closure_118_s;
        typedef struct cstopdown_closure_118_s * cstopdown_closure_118_t;

struct cstopdown_closure_118_s {uint32_t count;
         cstopdown_funtype_66_ftbl_t ftbl;
         cstopdown_funtype_66_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;};

cstopdown_funtype_65_t f_cstopdown_closure_118(struct cstopdown_closure_118_s * closure, uint32_t bvar);

cstopdown_funtype_65_t m_cstopdown_closure_118(struct cstopdown_closure_118_s * closure, uint32_t bvar);

extern cstopdown_funtype_65_t h_cstopdown_closure_118(uint32_t ivar_62, cstopdown_funtype_66_t ivar_14);

extern cstopdown_closure_118_t new_cstopdown_closure_118(void);

extern void release_cstopdown_closure_118(cstopdown_funtype_66_t closure);

extern cstopdown_closure_118_t copy_cstopdown_closure_118(cstopdown_closure_118_t x);



struct cstopdown_record_119_s {
        uint32_t count; 
        cstopdown_funtype_66_t scaf;
        uint64_t depth;
        cstopdown__ent_adt_t stack;
        bool_t lflag;};
typedef struct cstopdown_record_119_s * cstopdown_record_119_t;

extern cstopdown_record_119_t new_cstopdown_record_119(void);

extern void release_cstopdown_record_119(cstopdown_record_119_t x);

extern cstopdown_record_119_t copy_cstopdown_record_119(cstopdown_record_119_t x);

extern bool_t equal_cstopdown_record_119(cstopdown_record_119_t x, cstopdown_record_119_t y);
extern char * json_cstopdown_record_119(cstopdown_record_119_t x);

typedef struct actual_cstopdown_record_119_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown_record_119_t;
void release_cstopdown_record_119_ptr(pointer_t x, type_actual_t cstopdown_record_119);

extern bool_t equal_cstopdown_record_119_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_119_t T);

extern char * json_cstopdown_record_119_ptr(pointer_t x,  actual_cstopdown_record_119_t T);

actual_cstopdown_record_119_t actual_cstopdown_record_119(void);

extern cstopdown_record_119_t update_cstopdown_record_119_scaf(cstopdown_record_119_t x, cstopdown_funtype_66_t v);

extern cstopdown_record_119_t update_cstopdown_record_119_depth(cstopdown_record_119_t x, uint64_t v);

extern cstopdown_record_119_t update_cstopdown_record_119_stack(cstopdown_record_119_t x, cstopdown__ent_adt_t v);

extern cstopdown_record_119_t update_cstopdown_record_119_lflag(cstopdown_record_119_t x, bool_t v);



struct cstopdown_funtype_120_s;
        typedef struct cstopdown_funtype_120_s * cstopdown_funtype_120_t;

struct cstopdown_funtype_120_ftbl_s {cstopdown_record_119_t (* fptr)(struct cstopdown_funtype_120_s *, cstopdown_record_119_t);
        cstopdown_record_119_t (* mptr)(struct cstopdown_funtype_120_s *, cstopdown_record_119_t);
        void (* rptr)(struct cstopdown_funtype_120_s *);
        struct cstopdown_funtype_120_s * (* cptr)(struct cstopdown_funtype_120_s *);};
typedef struct cstopdown_funtype_120_ftbl_s * cstopdown_funtype_120_ftbl_t;

struct cstopdown_funtype_120_hashentry_s {uint32_t keyhash; cstopdown_record_119_t key; cstopdown_record_119_t value;}; 
typedef struct cstopdown_funtype_120_hashentry_s cstopdown_funtype_120_hashentry_t;

struct cstopdown_funtype_120_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_120_hashentry_t * data;}; 
typedef struct cstopdown_funtype_120_htbl_s * cstopdown_funtype_120_htbl_t;

struct cstopdown_funtype_120_s {uint32_t count;
        cstopdown_funtype_120_ftbl_t ftbl;
        cstopdown_funtype_120_htbl_t htbl;};
typedef struct cstopdown_funtype_120_s * cstopdown_funtype_120_t;

extern void release_cstopdown_funtype_120(cstopdown_funtype_120_t x);

extern cstopdown_funtype_120_t copy_cstopdown_funtype_120(cstopdown_funtype_120_t x);

extern bool_t equal_cstopdown_funtype_120(cstopdown_funtype_120_t x, cstopdown_funtype_120_t y);

extern char* json_cstopdown_funtype_120(cstopdown_funtype_120_t x);




struct cstopdown_closure_121_s;
        typedef struct cstopdown_closure_121_s * cstopdown_closure_121_t;

struct cstopdown_closure_121_s {uint32_t count;
         cstopdown_funtype_120_ftbl_t ftbl;
         cstopdown_funtype_120_htbl_t htbl;
        uint32_t fvar_1;
        cstopdown_funtype_72_t fvar_2;
        cstopdown__lang_spec_t fvar_3;};

cstopdown_record_119_t f_cstopdown_closure_121(struct cstopdown_closure_121_s * closure, cstopdown_record_119_t bvar);

cstopdown_record_119_t m_cstopdown_closure_121(struct cstopdown_closure_121_s * closure, cstopdown_record_119_t bvar);

extern cstopdown_record_119_t h_cstopdown_closure_121(cstopdown_record_119_t ivar_12, uint32_t ivar_1, cstopdown_funtype_72_t ivar_3, cstopdown__lang_spec_t ivar_2);

extern cstopdown_closure_121_t new_cstopdown_closure_121(void);

extern void release_cstopdown_closure_121(cstopdown_funtype_120_t closure);

extern cstopdown_closure_121_t copy_cstopdown_closure_121(cstopdown_closure_121_t x);




struct cstopdown_closure_122_s;
        typedef struct cstopdown_closure_122_s * cstopdown_closure_122_t;

struct cstopdown_closure_122_s {uint32_t count;
         cstopdown_funtype_66_ftbl_t ftbl;
         cstopdown_funtype_66_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;};

cstopdown_funtype_65_t f_cstopdown_closure_122(struct cstopdown_closure_122_s * closure, uint32_t bvar);

cstopdown_funtype_65_t m_cstopdown_closure_122(struct cstopdown_closure_122_s * closure, uint32_t bvar);

extern cstopdown_funtype_65_t h_cstopdown_closure_122(uint32_t ivar_1494, cstopdown_funtype_66_t ivar_1491);

extern cstopdown_closure_122_t new_cstopdown_closure_122(void);

extern void release_cstopdown_closure_122(cstopdown_funtype_66_t closure);

extern cstopdown_closure_122_t copy_cstopdown_closure_122(cstopdown_closure_122_t x);



struct cstopdown_funtype_123_s;
        typedef struct cstopdown_funtype_123_s * cstopdown_funtype_123_t;

struct cstopdown_funtype_123_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct cstopdown_funtype_123_s *, cstopdown_record_119_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct cstopdown_funtype_123_s *, cstopdown_record_119_t);
        void (* rptr)(struct cstopdown_funtype_123_s *);
        struct cstopdown_funtype_123_s * (* cptr)(struct cstopdown_funtype_123_s *);};
typedef struct cstopdown_funtype_123_ftbl_s * cstopdown_funtype_123_ftbl_t;

struct cstopdown_funtype_123_hashentry_s {uint32_t keyhash; cstopdown_record_119_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct cstopdown_funtype_123_hashentry_s cstopdown_funtype_123_hashentry_t;

struct cstopdown_funtype_123_htbl_s {uint32_t size; uint32_t num_entries; cstopdown_funtype_123_hashentry_t * data;}; 
typedef struct cstopdown_funtype_123_htbl_s * cstopdown_funtype_123_htbl_t;

struct cstopdown_funtype_123_s {uint32_t count;
        cstopdown_funtype_123_ftbl_t ftbl;
        cstopdown_funtype_123_htbl_t htbl;};
typedef struct cstopdown_funtype_123_s * cstopdown_funtype_123_t;

extern void release_cstopdown_funtype_123(cstopdown_funtype_123_t x);

extern cstopdown_funtype_123_t copy_cstopdown_funtype_123(cstopdown_funtype_123_t x);

extern bool_t equal_cstopdown_funtype_123(cstopdown_funtype_123_t x, cstopdown_funtype_123_t y);

extern char* json_cstopdown_funtype_123(cstopdown_funtype_123_t x);




struct cstopdown_closure_124_s;
        typedef struct cstopdown_closure_124_s * cstopdown_closure_124_t;

struct cstopdown_closure_124_s {uint32_t count;
         cstopdown_funtype_123_ftbl_t ftbl;
         cstopdown_funtype_123_htbl_t htbl;
        uint32_t fvar_1;};

ordstruct_adt__ordstruct_adt_t f_cstopdown_closure_124(struct cstopdown_closure_124_s * closure, cstopdown_record_119_t bvar);

ordstruct_adt__ordstruct_adt_t m_cstopdown_closure_124(struct cstopdown_closure_124_s * closure, cstopdown_record_119_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_cstopdown_closure_124(cstopdown_record_119_t ivar_10, uint32_t ivar_1);

extern cstopdown_closure_124_t new_cstopdown_closure_124(void);

extern void release_cstopdown_closure_124(cstopdown_funtype_123_t closure);

extern cstopdown_closure_124_t copy_cstopdown_closure_124(cstopdown_closure_124_t x);




struct cstopdown_closure_125_s;
        typedef struct cstopdown_closure_125_s * cstopdown_closure_125_t;

struct cstopdown_closure_125_s {uint32_t count;
         cstopdown_funtype_66_ftbl_t ftbl;
         cstopdown_funtype_66_htbl_t htbl;
        cstopdown_funtype_66_t fvar_1;};

cstopdown_funtype_65_t f_cstopdown_closure_125(struct cstopdown_closure_125_s * closure, uint32_t bvar);

cstopdown_funtype_65_t m_cstopdown_closure_125(struct cstopdown_closure_125_s * closure, uint32_t bvar);

extern cstopdown_funtype_65_t h_cstopdown_closure_125(uint32_t ivar_41, cstopdown_funtype_66_t ivar_38);

extern cstopdown_closure_125_t new_cstopdown_closure_125(void);

extern void release_cstopdown_closure_125(cstopdown_funtype_66_t closure);

extern cstopdown_closure_125_t copy_cstopdown_closure_125(cstopdown_closure_125_t x);




struct cstopdown_closure_126_s;
        typedef struct cstopdown_closure_126_s * cstopdown_closure_126_t;

struct cstopdown_closure_126_s {uint32_t count;
         cstopdown_funtype_59_ftbl_t ftbl;
         cstopdown_funtype_59_htbl_t htbl;};

bool_t f_cstopdown_closure_126(struct cstopdown_closure_126_s * closure, cstopdown__ent_adt_t bvar);

bool_t m_cstopdown_closure_126(struct cstopdown_closure_126_s * closure, cstopdown__ent_adt_t bvar);

extern bool_t h_cstopdown_closure_126(cstopdown__ent_adt_t ivar_23);

extern cstopdown_closure_126_t new_cstopdown_closure_126(void);

extern void release_cstopdown_closure_126(cstopdown_funtype_59_t closure);

extern cstopdown_closure_126_t copy_cstopdown_closure_126(cstopdown_closure_126_t x);




struct cstopdown_closure_127_s;
        typedef struct cstopdown_closure_127_s * cstopdown_closure_127_t;

struct cstopdown_closure_127_s {uint32_t count;
         cstopdown_funtype_120_ftbl_t ftbl;
         cstopdown_funtype_120_htbl_t htbl;
        uint32_t fvar_1;
        uint8_t fvar_2;
        cstopdown_funtype_72_t fvar_3;
        cstopdown__lang_spec_t fvar_4;
        uint32_t fvar_5;};

cstopdown_record_119_t f_cstopdown_closure_127(struct cstopdown_closure_127_s * closure, cstopdown_record_119_t bvar);

cstopdown_record_119_t m_cstopdown_closure_127(struct cstopdown_closure_127_s * closure, cstopdown_record_119_t bvar);

extern cstopdown_record_119_t h_cstopdown_closure_127(cstopdown_record_119_t ivar_12, uint32_t ivar_5, uint8_t ivar_6, cstopdown_funtype_72_t ivar_3, cstopdown__lang_spec_t ivar_2, uint32_t ivar_1);

extern cstopdown_closure_127_t new_cstopdown_closure_127(void);

extern void release_cstopdown_closure_127(cstopdown_funtype_120_t closure);

extern cstopdown_closure_127_t copy_cstopdown_closure_127(cstopdown_closure_127_t x);




struct cstopdown_closure_128_s;
        typedef struct cstopdown_closure_128_s * cstopdown_closure_128_t;

struct cstopdown_closure_128_s {uint32_t count;
         cstopdown_funtype_65_ftbl_t ftbl;
         cstopdown_funtype_65_htbl_t htbl;};

cstopdown__ent_adt_t f_cstopdown_closure_128(struct cstopdown_closure_128_s * closure, uint8_t bvar);

cstopdown__ent_adt_t m_cstopdown_closure_128(struct cstopdown_closure_128_s * closure, uint8_t bvar);

extern cstopdown__ent_adt_t h_cstopdown_closure_128(uint8_t ivar_11);

extern cstopdown_closure_128_t new_cstopdown_closure_128(void);

extern void release_cstopdown_closure_128(cstopdown_funtype_65_t closure);

extern cstopdown_closure_128_t copy_cstopdown_closure_128(cstopdown_closure_128_t x);



struct cstopdown_record_129_s {
        uint32_t count; 
        uint8_t depth;
        bool_t lflag;
        cstopdown_funtype_66_t scaf;
        cstopdown__ent_adt_t stack;};
typedef struct cstopdown_record_129_s * cstopdown_record_129_t;

extern cstopdown_record_129_t new_cstopdown_record_129(void);

extern void release_cstopdown_record_129(cstopdown_record_129_t x);

extern cstopdown_record_129_t copy_cstopdown_record_129(cstopdown_record_129_t x);

extern bool_t equal_cstopdown_record_129(cstopdown_record_129_t x, cstopdown_record_129_t y);
extern char * json_cstopdown_record_129(cstopdown_record_129_t x);

typedef struct actual_cstopdown_record_129_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdown_record_129_t;
void release_cstopdown_record_129_ptr(pointer_t x, type_actual_t cstopdown_record_129);

extern bool_t equal_cstopdown_record_129_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_129_t T);

extern char * json_cstopdown_record_129_ptr(pointer_t x,  actual_cstopdown_record_129_t T);

actual_cstopdown_record_129_t actual_cstopdown_record_129(void);

extern cstopdown_record_129_t update_cstopdown_record_129_depth(cstopdown_record_129_t x, uint8_t v);

extern cstopdown_record_129_t update_cstopdown_record_129_lflag(cstopdown_record_129_t x, bool_t v);

extern cstopdown_record_129_t update_cstopdown_record_129_scaf(cstopdown_record_129_t x, cstopdown_funtype_66_t v);

extern cstopdown_record_129_t update_cstopdown_record_129_stack(cstopdown_record_129_t x, cstopdown__ent_adt_t v);




struct cstopdown_closure_130_s;
        typedef struct cstopdown_closure_130_s * cstopdown_closure_130_t;

struct cstopdown_closure_130_s {uint32_t count;
         cstopdown_funtype_66_ftbl_t ftbl;
         cstopdown_funtype_66_htbl_t htbl;
        cstopdown_funtype_65_t fvar_1;};

cstopdown_funtype_65_t f_cstopdown_closure_130(struct cstopdown_closure_130_s * closure, uint32_t bvar);

cstopdown_funtype_65_t m_cstopdown_closure_130(struct cstopdown_closure_130_s * closure, uint32_t bvar);

extern cstopdown_funtype_65_t h_cstopdown_closure_130(uint32_t ivar_23, cstopdown_funtype_65_t ivar_8);

extern cstopdown_closure_130_t new_cstopdown_closure_130(void);

extern void release_cstopdown_closure_130(cstopdown_funtype_66_t closure);

extern cstopdown_closure_130_t copy_cstopdown_closure_130(cstopdown_closure_130_t x);



extern uint8_t cstopdown__num_non_terminals(void);

extern bool_t r_cstopdown__epsilonp(cstopdown__peg_adt_t ivar_1);

extern bool_t r_cstopdown__failurep(cstopdown__peg_adt_t ivar_1);

extern bool_t r_cstopdown__anyp(cstopdown__peg_adt_t ivar_1);

extern bool_t r_cstopdown__terminalp(cstopdown__peg_adt_t ivar_1);

extern bool_t r_cstopdown__concatp(cstopdown__peg_adt_t ivar_1);

extern bool_t r_cstopdown__orp(cstopdown__peg_adt_t ivar_1);

extern bool_t r_cstopdown__andp(cstopdown__peg_adt_t ivar_1);

extern bool_t r_cstopdown__notp(cstopdown__peg_adt_t ivar_1);

extern cstopdown__any_t update_cstopdown__peg_adt_p(cstopdown__peg_adt_t ivar_1, cstopdown_funtype_1_t ivar_4);

extern cstopdown_funtype_1_t cstopdown__peg_adt_p(cstopdown__peg_adt_t ivar_1);

extern cstopdown__terminal_t update_cstopdown__peg_adt_a(cstopdown__peg_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t cstopdown__peg_adt_a(cstopdown__peg_adt_t ivar_1);

extern cstopdown__peg_adt_t update_cstopdown__peg_adt_e1(cstopdown__peg_adt_t ivar_1, uint8_t ivar_7);

extern uint8_t cstopdown__peg_adt_e1(cstopdown__peg_adt_t ivar_1);

extern cstopdown__peg_adt_t update_cstopdown__peg_adt_e2(cstopdown__peg_adt_t ivar_1, uint8_t ivar_7);

extern uint8_t cstopdown__peg_adt_e2(cstopdown__peg_adt_t ivar_1);

extern cstopdown__peg_adt_t update_cstopdown__peg_adt_e(cstopdown__peg_adt_t ivar_1, uint8_t ivar_7);

extern uint8_t cstopdown__peg_adt_e(cstopdown__peg_adt_t ivar_1);

extern cstopdown__peg_adt_t cstopdown__epsilon(void);

extern cstopdown__peg_adt_t cstopdown__failure(void);

extern cstopdown__peg_adt_t cstopdown__any(cstopdown_funtype_1_t ivar_2);

extern cstopdown__peg_adt_t cstopdown__terminal(uint8_t ivar_2);

extern cstopdown__peg_adt_t cstopdown__concat(uint8_t ivar_2, uint8_t ivar_3);

extern cstopdown__peg_adt_t cstopdown__choice(uint8_t ivar_2, uint8_t ivar_3);

extern cstopdown__peg_adt_t cstopdown__check(uint8_t ivar_2);

extern cstopdown__peg_adt_t cstopdown__neg(uint8_t ivar_2);

extern cstopdown_funtype_8_t cstopdown__peg_ord(void);

extern uint8_t cstopdown__ord__1(cstopdown__peg_adt_t ivar_1);

extern bool_t cstopdown__subterm__1(cstopdown__peg_adt_t ivar_1, cstopdown__peg_adt_t ivar_2);

extern bool_t cstopdown__doublelessp__1(cstopdown__peg_adt_t ivar_1, cstopdown__peg_adt_t ivar_2);

extern cstopdown_funtype_9_t cstopdown__reduce_nat__1(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, cstopdown_funtype_10_t ivar_3, cstopdown_funtype_11_t ivar_6, cstopdown_funtype_13_t ivar_8, cstopdown_funtype_13_t ivar_10, cstopdown_funtype_11_t ivar_12, cstopdown_funtype_11_t ivar_14);

extern cstopdown_funtype_9_t cstopdown__REDUCE_nat__1(cstopdown_funtype_9_t ivar_1, cstopdown_funtype_9_t ivar_3, cstopdown_funtype_16_t ivar_5, cstopdown_funtype_18_t ivar_8, cstopdown_funtype_20_t ivar_10, cstopdown_funtype_20_t ivar_12, cstopdown_funtype_18_t ivar_14, cstopdown_funtype_18_t ivar_16);

extern cstopdown_funtype_22_t cstopdown__reduce_ordinal__1(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2, cstopdown_funtype_23_t ivar_3, cstopdown_funtype_24_t ivar_6, cstopdown_funtype_25_t ivar_8, cstopdown_funtype_25_t ivar_10, cstopdown_funtype_24_t ivar_12, cstopdown_funtype_24_t ivar_14);

extern cstopdown_funtype_22_t cstopdown__REDUCE_ordinal__1(cstopdown_funtype_22_t ivar_1, cstopdown_funtype_22_t ivar_3, cstopdown_funtype_27_t ivar_5, cstopdown_funtype_28_t ivar_8, cstopdown_funtype_29_t ivar_10, cstopdown_funtype_29_t ivar_12, cstopdown_funtype_28_t ivar_14, cstopdown_funtype_28_t ivar_16);

extern bool_t r_cstopdown__failp(cstopdown__ent_adt_t ivar_1);

extern bool_t r_cstopdown__pendingp(cstopdown__ent_adt_t ivar_1);

extern bool_t r_cstopdown__loopp(cstopdown__ent_adt_t ivar_1);

extern bool_t r_cstopdown__goodp(cstopdown__ent_adt_t ivar_1);

extern bool_t r_cstopdown__pushp(cstopdown__ent_adt_t ivar_1);

extern cstopdown__ent_adt_t update_cstopdown__ent_adt_dep(cstopdown__ent_adt_t ivar_1, uint64_t ivar_7);

extern uint64_t cstopdown__ent_adt_dep(cstopdown__ent_adt_t ivar_1);

extern cstopdown__good_t update_cstopdown__ent_adt_span(cstopdown__ent_adt_t ivar_1, uint32_t ivar_3);

extern uint32_t cstopdown__ent_adt_span(cstopdown__ent_adt_t ivar_1);

extern cstopdown__push_t update_cstopdown__ent_adt_pos(cstopdown__ent_adt_t ivar_1, uint32_t ivar_3);

extern uint32_t cstopdown__ent_adt_pos(cstopdown__ent_adt_t ivar_1);

extern cstopdown__push_t update_cstopdown__ent_adt_nt(cstopdown__ent_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t cstopdown__ent_adt_nt(cstopdown__ent_adt_t ivar_1);

extern cstopdown__ent_adt_t cstopdown__fail(uint64_t ivar_2);

extern cstopdown__ent_adt_t cstopdown__pending(void);

extern cstopdown__ent_adt_t cstopdown__loop(void);

extern cstopdown__ent_adt_t cstopdown__good(uint64_t ivar_2, uint32_t ivar_3);

extern cstopdown__ent_adt_t cstopdown__push(uint32_t ivar_2, uint8_t ivar_3);

extern cstopdown_funtype_35_t cstopdown__ent_ord(void);

extern uint8_t cstopdown__ord__2(cstopdown__ent_adt_t ivar_1);

extern bool_t cstopdown__subterm__2(cstopdown__ent_adt_t ivar_1, cstopdown__ent_adt_t ivar_2);

extern bool_t cstopdown__doublelessp__2(cstopdown__ent_adt_t ivar_1, cstopdown__ent_adt_t ivar_2);

extern cstopdown_funtype_36_t cstopdown__reduce_nat__2(cstopdown_funtype_37_t ivar_1, mpz_ptr_t ivar_3, mpz_ptr_t ivar_4, cstopdown_funtype_39_t ivar_5, cstopdown_funtype_41_t ivar_7);

extern cstopdown_funtype_36_t cstopdown__REDUCE_nat__2(cstopdown_funtype_44_t ivar_1, cstopdown_funtype_36_t ivar_3, cstopdown_funtype_36_t ivar_5, cstopdown_funtype_46_t ivar_7, cstopdown_funtype_48_t ivar_9);

extern cstopdown_funtype_50_t cstopdown__reduce_ordinal__2(cstopdown_funtype_51_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_4, cstopdown_funtype_52_t ivar_5, cstopdown_funtype_53_t ivar_7);

extern cstopdown_funtype_50_t cstopdown__REDUCE_ordinal__2(cstopdown_funtype_55_t ivar_1, cstopdown_funtype_50_t ivar_3, cstopdown_funtype_50_t ivar_5, cstopdown_funtype_56_t ivar_7, cstopdown_funtype_57_t ivar_9);

extern cstopdown_funtype_59_t cstopdown__good_good_entryp(uint32_t ivar_1, uint32_t ivar_2);

extern cstopdown_funtype_59_t cstopdown__good_push_entryp(uint32_t ivar_1);

extern cstopdown_funtype_59_t cstopdown__fine_push_entryp(uint32_t ivar_1);

extern cstopdown_funtype_59_t cstopdown__nice_entryp(uint32_t ivar_1, uint32_t ivar_2);

extern bool_t cstopdown__loop_or_pushp(cstopdown__ent_adt_t ivar_1);

extern cstopdown_funtype_64_t cstopdown__instack(uint32_t ivar_1, cstopdown_funtype_66_t ivar_2);

extern cstopdown_funtype_69_t cstopdown__successor(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_66_t ivar_3);

extern uint64_t cstopdown__scafcount(uint32_t ivar_1, cstopdown_funtype_66_t ivar_2, cstopdown_funtype_59_t ivar_5, uint32_t ivar_7);

extern uint64_t cstopdown__pushcount(uint32_t ivar_1, cstopdown_funtype_66_t ivar_2);

extern bool_t cstopdown__good_or_failp(cstopdown__ent_adt_t ivar_1);

extern uint64_t cstopdown__gfcount(uint32_t ivar_1, cstopdown_funtype_66_t ivar_2);

extern cstopdown_funtype_83_t cstopdown__good_depthp(uint32_t ivar_1, cstopdown_funtype_66_t ivar_2);

extern cstopdown_funtype_59_t cstopdown__good_stackp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, uint64_t ivar_3, cstopdown_funtype_66_t ivar_4);

extern cstopdown_funtype_69_t cstopdown__mem_stackp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, uint64_t ivar_3, cstopdown_funtype_66_t ivar_4);

extern bool_t cstopdown__push_or_pendingp(cstopdown__ent_adt_t ivar_1);

extern cstopdown_funtype_59_t cstopdown__fine_stackp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, uint64_t ivar_3, cstopdown_funtype_66_t ivar_4);

extern bool_t cstopdown__loop_readyp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_66_t ivar_3, uint32_t ivar_6, uint8_t ivar_7);

extern cstopdown_funtype_93_t cstopdown__good_failp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3);

extern cstopdown_funtype_96_t cstopdown__good_loopp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2);

extern cstopdown_funtype_99_t cstopdown__good_goodp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3);

extern cstopdown_funtype_102_t cstopdown__good_entryp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3);

extern cstopdown_funtype_102_t cstopdown__fine_entryp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3);

extern cstopdown_funtype_111_t cstopdown__good_tscaffoldp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3);

extern cstopdown_funtype_64_t cstopdown__good_rootp(uint32_t ivar_1, cstopdown_funtype_66_t ivar_2);

extern cstopdown_funtype_114_t cstopdown__fine_scaffoldp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3);

extern bool_t cstopdown__emptyp(cstopdown__ent_adt_t ivar_1);

extern cstopdown_funtype_120_t cstopdown__step(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3, uint32_t ivar_5, uint8_t ivar_6);

extern cstopdown_funtype_123_t cstopdown__size(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3, uint32_t ivar_5, uint8_t ivar_6);

extern cstopdown_funtype_120_t cstopdown__parse(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3, uint32_t ivar_5, uint8_t ivar_6);

extern cstopdown_record_119_t cstopdown__doparse(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3, uint8_t ivar_5);
#endif