//Code generated using pvs2ir
#ifndef _cstopdowntest_h 
#define _cstopdowntest_h

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

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "cstopdown_c.h"

#include "sigma_c.h"

#include "lex4_c.h"

#include "arrayCount_c.h"

//cc -O3 -Wall -o cstopdowntest -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c cstopdowntest_c.c cstopdown_c.c sigma_c.c lex4_c.c arrayCount_c.c -lgmp 

struct cstopdowntest_funtype_0_s;
        typedef struct cstopdowntest_funtype_0_s * cstopdowntest_funtype_0_t;

struct cstopdowntest_funtype_0_ftbl_s {bool_t (* fptr)(struct cstopdowntest_funtype_0_s *, uint8_t);
        bool_t (* mptr)(struct cstopdowntest_funtype_0_s *, uint8_t);
        void (* rptr)(struct cstopdowntest_funtype_0_s *);
        struct cstopdowntest_funtype_0_s * (* cptr)(struct cstopdowntest_funtype_0_s *);};
typedef struct cstopdowntest_funtype_0_ftbl_s * cstopdowntest_funtype_0_ftbl_t;

struct cstopdowntest_funtype_0_hashentry_s {uint32_t keyhash; uint8_t key; bool_t value;}; 
typedef struct cstopdowntest_funtype_0_hashentry_s cstopdowntest_funtype_0_hashentry_t;

struct cstopdowntest_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; cstopdowntest_funtype_0_hashentry_t * data;}; 
typedef struct cstopdowntest_funtype_0_htbl_s * cstopdowntest_funtype_0_htbl_t;

struct cstopdowntest_funtype_0_s {uint32_t count;
        cstopdowntest_funtype_0_ftbl_t ftbl;
        cstopdowntest_funtype_0_htbl_t htbl;};
typedef struct cstopdowntest_funtype_0_s * cstopdowntest_funtype_0_t;

extern void release_cstopdowntest_funtype_0(cstopdowntest_funtype_0_t x);

extern cstopdowntest_funtype_0_t copy_cstopdowntest_funtype_0(cstopdowntest_funtype_0_t x);

uint32_t lookup_cstopdowntest_funtype_0(cstopdowntest_funtype_0_htbl_t htbl, uint8_t i, uint32_t ihash);

cstopdowntest_funtype_0_t dupdate_cstopdowntest_funtype_0(cstopdowntest_funtype_0_t a, uint8_t i, bool_t v);

extern cstopdowntest_funtype_0_t update_cstopdowntest_funtype_0(cstopdowntest_funtype_0_t a, uint8_t i, bool_t v);

extern bool_t equal_cstopdowntest_funtype_0(cstopdowntest_funtype_0_t x, cstopdowntest_funtype_0_t y);

extern char* json_cstopdowntest_funtype_0(cstopdowntest_funtype_0_t x);




struct cstopdowntest_closure_1_s;
        typedef struct cstopdowntest_closure_1_s * cstopdowntest_closure_1_t;

struct cstopdowntest_closure_1_s {uint32_t count;
         cstopdowntest_funtype_0_ftbl_t ftbl;
         cstopdowntest_funtype_0_htbl_t htbl;};

bool_t f_cstopdowntest_closure_1(struct cstopdowntest_closure_1_s * closure, uint8_t bvar);

bool_t m_cstopdowntest_closure_1(struct cstopdowntest_closure_1_s * closure, uint8_t bvar);

extern bool_t h_cstopdowntest_closure_1(uint8_t ivar_26);

extern cstopdowntest_closure_1_t new_cstopdowntest_closure_1(void);

extern void release_cstopdowntest_closure_1(cstopdowntest_funtype_0_t closure);

extern cstopdowntest_closure_1_t copy_cstopdowntest_closure_1(cstopdowntest_closure_1_t x);




struct cstopdowntest_closure_2_s;
        typedef struct cstopdowntest_closure_2_s * cstopdowntest_closure_2_t;

struct cstopdowntest_closure_2_s {uint32_t count;
         cstopdowntest_funtype_0_ftbl_t ftbl;
         cstopdowntest_funtype_0_htbl_t htbl;};

bool_t f_cstopdowntest_closure_2(struct cstopdowntest_closure_2_s * closure, uint8_t bvar);

bool_t m_cstopdowntest_closure_2(struct cstopdowntest_closure_2_s * closure, uint8_t bvar);

extern bool_t h_cstopdowntest_closure_2(uint8_t ivar_238);

extern cstopdowntest_closure_2_t new_cstopdowntest_closure_2(void);

extern void release_cstopdowntest_closure_2(cstopdowntest_funtype_0_t closure);

extern cstopdowntest_closure_2_t copy_cstopdowntest_closure_2(cstopdowntest_closure_2_t x);



struct cstopdowntest_funtype_3_s;
        typedef struct cstopdowntest_funtype_3_s * cstopdowntest_funtype_3_t;

struct cstopdowntest_funtype_3_ftbl_s {uint8_t (* fptr)(struct cstopdowntest_funtype_3_s *, uint8_t);
        uint8_t (* mptr)(struct cstopdowntest_funtype_3_s *, uint8_t);
        void (* rptr)(struct cstopdowntest_funtype_3_s *);
        struct cstopdowntest_funtype_3_s * (* cptr)(struct cstopdowntest_funtype_3_s *);};
typedef struct cstopdowntest_funtype_3_ftbl_s * cstopdowntest_funtype_3_ftbl_t;

struct cstopdowntest_funtype_3_hashentry_s {uint32_t keyhash; uint8_t key; uint8_t value;}; 
typedef struct cstopdowntest_funtype_3_hashentry_s cstopdowntest_funtype_3_hashentry_t;

struct cstopdowntest_funtype_3_htbl_s {uint32_t size; uint32_t num_entries; cstopdowntest_funtype_3_hashentry_t * data;}; 
typedef struct cstopdowntest_funtype_3_htbl_s * cstopdowntest_funtype_3_htbl_t;

struct cstopdowntest_funtype_3_s {uint32_t count;
        cstopdowntest_funtype_3_ftbl_t ftbl;
        cstopdowntest_funtype_3_htbl_t htbl;};
typedef struct cstopdowntest_funtype_3_s * cstopdowntest_funtype_3_t;

extern void release_cstopdowntest_funtype_3(cstopdowntest_funtype_3_t x);

extern cstopdowntest_funtype_3_t copy_cstopdowntest_funtype_3(cstopdowntest_funtype_3_t x);

uint32_t lookup_cstopdowntest_funtype_3(cstopdowntest_funtype_3_htbl_t htbl, uint8_t i, uint32_t ihash);

cstopdowntest_funtype_3_t dupdate_cstopdowntest_funtype_3(cstopdowntest_funtype_3_t a, uint8_t i, uint8_t v);

extern cstopdowntest_funtype_3_t update_cstopdowntest_funtype_3(cstopdowntest_funtype_3_t a, uint8_t i, uint8_t v);

extern bool_t equal_cstopdowntest_funtype_3(cstopdowntest_funtype_3_t x, cstopdowntest_funtype_3_t y);

extern char* json_cstopdowntest_funtype_3(cstopdowntest_funtype_3_t x);




struct cstopdowntest_closure_4_s;
        typedef struct cstopdowntest_closure_4_s * cstopdowntest_closure_4_t;

struct cstopdowntest_closure_4_s {uint32_t count;
         cstopdowntest_funtype_3_ftbl_t ftbl;
         cstopdowntest_funtype_3_htbl_t htbl;};

uint8_t f_cstopdowntest_closure_4(struct cstopdowntest_closure_4_s * closure, uint8_t bvar);

uint8_t m_cstopdowntest_closure_4(struct cstopdowntest_closure_4_s * closure, uint8_t bvar);

extern uint8_t h_cstopdowntest_closure_4(uint8_t ivar_3);

extern cstopdowntest_closure_4_t new_cstopdowntest_closure_4(void);

extern void release_cstopdowntest_closure_4(cstopdowntest_funtype_3_t closure);

extern cstopdowntest_closure_4_t copy_cstopdowntest_closure_4(cstopdowntest_closure_4_t x);



struct cstopdowntest_funtype_5_s;
        typedef struct cstopdowntest_funtype_5_s * cstopdowntest_funtype_5_t;

struct cstopdowntest_funtype_5_ftbl_s {uint8_t (* fptr)(struct cstopdowntest_funtype_5_s *, mpz_ptr_t);
        uint8_t (* mptr)(struct cstopdowntest_funtype_5_s *, mpz_ptr_t);
        void (* rptr)(struct cstopdowntest_funtype_5_s *);
        struct cstopdowntest_funtype_5_s * (* cptr)(struct cstopdowntest_funtype_5_s *);};
typedef struct cstopdowntest_funtype_5_ftbl_s * cstopdowntest_funtype_5_ftbl_t;

struct cstopdowntest_funtype_5_hashentry_s {uint32_t keyhash; mpz_ptr_t key; uint8_t value;}; 
typedef struct cstopdowntest_funtype_5_hashentry_s cstopdowntest_funtype_5_hashentry_t;

struct cstopdowntest_funtype_5_htbl_s {uint32_t size; uint32_t num_entries; cstopdowntest_funtype_5_hashentry_t * data;}; 
typedef struct cstopdowntest_funtype_5_htbl_s * cstopdowntest_funtype_5_htbl_t;

struct cstopdowntest_funtype_5_s {uint32_t count;
        cstopdowntest_funtype_5_ftbl_t ftbl;
        cstopdowntest_funtype_5_htbl_t htbl;};
typedef struct cstopdowntest_funtype_5_s * cstopdowntest_funtype_5_t;

extern void release_cstopdowntest_funtype_5(cstopdowntest_funtype_5_t x);

extern cstopdowntest_funtype_5_t copy_cstopdowntest_funtype_5(cstopdowntest_funtype_5_t x);

uint32_t lookup_cstopdowntest_funtype_5(cstopdowntest_funtype_5_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

cstopdowntest_funtype_5_t dupdate_cstopdowntest_funtype_5(cstopdowntest_funtype_5_t a, mpz_ptr_t i, uint8_t v);

extern cstopdowntest_funtype_5_t update_cstopdowntest_funtype_5(cstopdowntest_funtype_5_t a, mpz_ptr_t i, uint8_t v);

extern bool_t equal_cstopdowntest_funtype_5(cstopdowntest_funtype_5_t x, cstopdowntest_funtype_5_t y);

extern char* json_cstopdowntest_funtype_5(cstopdowntest_funtype_5_t x);



struct cstopdowntest_record_6_s {
        uint32_t count; 
        cstopdowntest_funtype_3_t project_1;
        cstopdowntest_funtype_5_t project_2;};
typedef struct cstopdowntest_record_6_s * cstopdowntest_record_6_t;

extern cstopdowntest_record_6_t new_cstopdowntest_record_6(void);

extern void release_cstopdowntest_record_6(cstopdowntest_record_6_t x);

extern cstopdowntest_record_6_t copy_cstopdowntest_record_6(cstopdowntest_record_6_t x);

extern bool_t equal_cstopdowntest_record_6(cstopdowntest_record_6_t x, cstopdowntest_record_6_t y);
extern char * json_cstopdowntest_record_6(cstopdowntest_record_6_t x);

typedef struct actual_cstopdowntest_record_6_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdowntest_record_6_t;
void release_cstopdowntest_record_6_ptr(pointer_t x, type_actual_t cstopdowntest_record_6);

extern bool_t equal_cstopdowntest_record_6_ptr(pointer_t x, pointer_t y, actual_cstopdowntest_record_6_t T);

extern char * json_cstopdowntest_record_6_ptr(pointer_t x,  actual_cstopdowntest_record_6_t T);

actual_cstopdowntest_record_6_t actual_cstopdowntest_record_6(void);

extern cstopdowntest_record_6_t update_cstopdowntest_record_6_project_1(cstopdowntest_record_6_t x, cstopdowntest_funtype_3_t v);

extern cstopdowntest_record_6_t update_cstopdowntest_record_6_project_2(cstopdowntest_record_6_t x, cstopdowntest_funtype_5_t v);



struct cstopdowntest_funtype_7_s;
        typedef struct cstopdowntest_funtype_7_s * cstopdowntest_funtype_7_t;

struct cstopdowntest_funtype_7_ftbl_s {cstopdowntest_funtype_5_t (* fptr)(struct cstopdowntest_funtype_7_s *, cstopdowntest_record_6_t);
        cstopdowntest_funtype_5_t (* mptr)(struct cstopdowntest_funtype_7_s *, cstopdowntest_funtype_3_t, cstopdowntest_funtype_5_t);
        void (* rptr)(struct cstopdowntest_funtype_7_s *);
        struct cstopdowntest_funtype_7_s * (* cptr)(struct cstopdowntest_funtype_7_s *);};
typedef struct cstopdowntest_funtype_7_ftbl_s * cstopdowntest_funtype_7_ftbl_t;

struct cstopdowntest_funtype_7_hashentry_s {uint32_t keyhash; cstopdowntest_record_6_t key; cstopdowntest_funtype_5_t value;}; 
typedef struct cstopdowntest_funtype_7_hashentry_s cstopdowntest_funtype_7_hashentry_t;

struct cstopdowntest_funtype_7_htbl_s {uint32_t size; uint32_t num_entries; cstopdowntest_funtype_7_hashentry_t * data;}; 
typedef struct cstopdowntest_funtype_7_htbl_s * cstopdowntest_funtype_7_htbl_t;

struct cstopdowntest_funtype_7_s {uint32_t count;
        cstopdowntest_funtype_7_ftbl_t ftbl;
        cstopdowntest_funtype_7_htbl_t htbl;};
typedef struct cstopdowntest_funtype_7_s * cstopdowntest_funtype_7_t;

extern void release_cstopdowntest_funtype_7(cstopdowntest_funtype_7_t x);

extern cstopdowntest_funtype_7_t copy_cstopdowntest_funtype_7(cstopdowntest_funtype_7_t x);

extern bool_t equal_cstopdowntest_funtype_7(cstopdowntest_funtype_7_t x, cstopdowntest_funtype_7_t y);

extern char* json_cstopdowntest_funtype_7(cstopdowntest_funtype_7_t x);




struct cstopdowntest_closure_8_s;
        typedef struct cstopdowntest_closure_8_s * cstopdowntest_closure_8_t;

struct cstopdowntest_closure_8_s {uint32_t count;
         cstopdowntest_funtype_7_ftbl_t ftbl;
         cstopdowntest_funtype_7_htbl_t htbl;
        uint8_t fvar_1;};

cstopdowntest_funtype_5_t f_cstopdowntest_closure_8(struct cstopdowntest_closure_8_s * closure, cstopdowntest_record_6_t bvar);

cstopdowntest_funtype_5_t m_cstopdowntest_closure_8(struct cstopdowntest_closure_8_s * closure, cstopdowntest_funtype_3_t bvar_1, cstopdowntest_funtype_5_t bvar_2);

extern cstopdowntest_funtype_5_t h_cstopdowntest_closure_8(cstopdowntest_funtype_3_t ivar_26, cstopdowntest_funtype_5_t ivar_28, uint8_t ivar_1);

extern cstopdowntest_closure_8_t new_cstopdowntest_closure_8(void);

extern void release_cstopdowntest_closure_8(cstopdowntest_funtype_7_t closure);

extern cstopdowntest_closure_8_t copy_cstopdowntest_closure_8(cstopdowntest_closure_8_t x);




struct cstopdowntest_closure_9_s;
        typedef struct cstopdowntest_closure_9_s * cstopdowntest_closure_9_t;

struct cstopdowntest_closure_9_s {uint32_t count;
         cstopdowntest_funtype_5_ftbl_t ftbl;
         cstopdowntest_funtype_5_htbl_t htbl;
        uint8_t fvar_1;
        cstopdowntest_funtype_5_t fvar_2;
        cstopdowntest_funtype_3_t fvar_3;};

uint8_t f_cstopdowntest_closure_9(struct cstopdowntest_closure_9_s * closure, mpz_ptr_t bvar);

uint8_t m_cstopdowntest_closure_9(struct cstopdowntest_closure_9_s * closure, mpz_ptr_t bvar);

extern uint8_t h_cstopdowntest_closure_9(mpz_ptr_t ivar_42, uint8_t ivar_1, cstopdowntest_funtype_5_t ivar_28, cstopdowntest_funtype_3_t ivar_26);

extern cstopdowntest_closure_9_t new_cstopdowntest_closure_9(void);

extern void release_cstopdowntest_closure_9(cstopdowntest_funtype_5_t closure);

extern cstopdowntest_closure_9_t copy_cstopdowntest_closure_9(cstopdowntest_closure_9_t x);



struct cstopdowntest_record_10_s {
        uint32_t count; 
        cstopdowntest_funtype_3_t project_1;
        cstopdowntest_funtype_3_t project_2;};
typedef struct cstopdowntest_record_10_s * cstopdowntest_record_10_t;

extern cstopdowntest_record_10_t new_cstopdowntest_record_10(void);

extern void release_cstopdowntest_record_10(cstopdowntest_record_10_t x);

extern cstopdowntest_record_10_t copy_cstopdowntest_record_10(cstopdowntest_record_10_t x);

extern bool_t equal_cstopdowntest_record_10(cstopdowntest_record_10_t x, cstopdowntest_record_10_t y);
extern char * json_cstopdowntest_record_10(cstopdowntest_record_10_t x);

typedef struct actual_cstopdowntest_record_10_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdowntest_record_10_t;
void release_cstopdowntest_record_10_ptr(pointer_t x, type_actual_t cstopdowntest_record_10);

extern bool_t equal_cstopdowntest_record_10_ptr(pointer_t x, pointer_t y, actual_cstopdowntest_record_10_t T);

extern char * json_cstopdowntest_record_10_ptr(pointer_t x,  actual_cstopdowntest_record_10_t T);

actual_cstopdowntest_record_10_t actual_cstopdowntest_record_10(void);

extern cstopdowntest_record_10_t update_cstopdowntest_record_10_project_1(cstopdowntest_record_10_t x, cstopdowntest_funtype_3_t v);

extern cstopdowntest_record_10_t update_cstopdowntest_record_10_project_2(cstopdowntest_record_10_t x, cstopdowntest_funtype_3_t v);



struct cstopdowntest_funtype_11_s;
        typedef struct cstopdowntest_funtype_11_s * cstopdowntest_funtype_11_t;

struct cstopdowntest_funtype_11_ftbl_s {cstopdowntest_funtype_3_t (* fptr)(struct cstopdowntest_funtype_11_s *, cstopdowntest_record_10_t);
        cstopdowntest_funtype_3_t (* mptr)(struct cstopdowntest_funtype_11_s *, cstopdowntest_funtype_3_t, cstopdowntest_funtype_3_t);
        void (* rptr)(struct cstopdowntest_funtype_11_s *);
        struct cstopdowntest_funtype_11_s * (* cptr)(struct cstopdowntest_funtype_11_s *);};
typedef struct cstopdowntest_funtype_11_ftbl_s * cstopdowntest_funtype_11_ftbl_t;

struct cstopdowntest_funtype_11_hashentry_s {uint32_t keyhash; cstopdowntest_record_10_t key; cstopdowntest_funtype_3_t value;}; 
typedef struct cstopdowntest_funtype_11_hashentry_s cstopdowntest_funtype_11_hashentry_t;

struct cstopdowntest_funtype_11_htbl_s {uint32_t size; uint32_t num_entries; cstopdowntest_funtype_11_hashentry_t * data;}; 
typedef struct cstopdowntest_funtype_11_htbl_s * cstopdowntest_funtype_11_htbl_t;

struct cstopdowntest_funtype_11_s {uint32_t count;
        cstopdowntest_funtype_11_ftbl_t ftbl;
        cstopdowntest_funtype_11_htbl_t htbl;};
typedef struct cstopdowntest_funtype_11_s * cstopdowntest_funtype_11_t;

extern void release_cstopdowntest_funtype_11(cstopdowntest_funtype_11_t x);

extern cstopdowntest_funtype_11_t copy_cstopdowntest_funtype_11(cstopdowntest_funtype_11_t x);

extern bool_t equal_cstopdowntest_funtype_11(cstopdowntest_funtype_11_t x, cstopdowntest_funtype_11_t y);

extern char* json_cstopdowntest_funtype_11(cstopdowntest_funtype_11_t x);




struct cstopdowntest_closure_12_s;
        typedef struct cstopdowntest_closure_12_s * cstopdowntest_closure_12_t;

struct cstopdowntest_closure_12_s {uint32_t count;
         cstopdowntest_funtype_3_ftbl_t ftbl;
         cstopdowntest_funtype_3_htbl_t htbl;};

uint8_t f_cstopdowntest_closure_12(struct cstopdowntest_closure_12_s * closure, uint8_t bvar);

uint8_t m_cstopdowntest_closure_12(struct cstopdowntest_closure_12_s * closure, uint8_t bvar);

extern uint8_t h_cstopdowntest_closure_12(uint8_t ivar_5);

extern cstopdowntest_closure_12_t new_cstopdowntest_closure_12(void);

extern void release_cstopdowntest_closure_12(cstopdowntest_funtype_3_t closure);

extern cstopdowntest_closure_12_t copy_cstopdowntest_closure_12(cstopdowntest_closure_12_t x);




struct cstopdowntest_closure_13_s;
        typedef struct cstopdowntest_closure_13_s * cstopdowntest_closure_13_t;

struct cstopdowntest_closure_13_s {uint32_t count;
         cstopdowntest_funtype_3_ftbl_t ftbl;
         cstopdowntest_funtype_3_htbl_t htbl;};

uint8_t f_cstopdowntest_closure_13(struct cstopdowntest_closure_13_s * closure, uint8_t bvar);

uint8_t m_cstopdowntest_closure_13(struct cstopdowntest_closure_13_s * closure, uint8_t bvar);

extern uint8_t h_cstopdowntest_closure_13(uint8_t ivar_7);

extern cstopdowntest_closure_13_t new_cstopdowntest_closure_13(void);

extern void release_cstopdowntest_closure_13(cstopdowntest_funtype_3_t closure);

extern cstopdowntest_closure_13_t copy_cstopdowntest_closure_13(cstopdowntest_closure_13_t x);




struct cstopdowntest_closure_14_s;
        typedef struct cstopdowntest_closure_14_s * cstopdowntest_closure_14_t;

struct cstopdowntest_closure_14_s {uint32_t count;
         cstopdowntest_funtype_3_ftbl_t ftbl;
         cstopdowntest_funtype_3_htbl_t htbl;};

uint8_t f_cstopdowntest_closure_14(struct cstopdowntest_closure_14_s * closure, uint8_t bvar);

uint8_t m_cstopdowntest_closure_14(struct cstopdowntest_closure_14_s * closure, uint8_t bvar);

extern uint8_t h_cstopdowntest_closure_14(uint8_t ivar_5);

extern cstopdowntest_closure_14_t new_cstopdowntest_closure_14(void);

extern void release_cstopdowntest_closure_14(cstopdowntest_funtype_3_t closure);

extern cstopdowntest_closure_14_t copy_cstopdowntest_closure_14(cstopdowntest_closure_14_t x);




struct cstopdowntest_closure_15_s;
        typedef struct cstopdowntest_closure_15_s * cstopdowntest_closure_15_t;

struct cstopdowntest_closure_15_s {uint32_t count;
         cstopdowntest_funtype_3_ftbl_t ftbl;
         cstopdowntest_funtype_3_htbl_t htbl;};

uint8_t f_cstopdowntest_closure_15(struct cstopdowntest_closure_15_s * closure, uint8_t bvar);

uint8_t m_cstopdowntest_closure_15(struct cstopdowntest_closure_15_s * closure, uint8_t bvar);

extern uint8_t h_cstopdowntest_closure_15(uint8_t ivar_10);

extern cstopdowntest_closure_15_t new_cstopdowntest_closure_15(void);

extern void release_cstopdowntest_closure_15(cstopdowntest_funtype_3_t closure);

extern cstopdowntest_closure_15_t copy_cstopdowntest_closure_15(cstopdowntest_closure_15_t x);




struct cstopdowntest_closure_16_s;
        typedef struct cstopdowntest_closure_16_s * cstopdowntest_closure_16_t;

struct cstopdowntest_closure_16_s {uint32_t count;
         cstopdowntest_funtype_3_ftbl_t ftbl;
         cstopdowntest_funtype_3_htbl_t htbl;};

uint8_t f_cstopdowntest_closure_16(struct cstopdowntest_closure_16_s * closure, uint8_t bvar);

uint8_t m_cstopdowntest_closure_16(struct cstopdowntest_closure_16_s * closure, uint8_t bvar);

extern uint8_t h_cstopdowntest_closure_16(uint8_t ivar_15);

extern cstopdowntest_closure_16_t new_cstopdowntest_closure_16(void);

extern void release_cstopdowntest_closure_16(cstopdowntest_funtype_3_t closure);

extern cstopdowntest_closure_16_t copy_cstopdowntest_closure_16(cstopdowntest_closure_16_t x);




struct cstopdowntest_closure_17_s;
        typedef struct cstopdowntest_closure_17_s * cstopdowntest_closure_17_t;

struct cstopdowntest_closure_17_s {uint32_t count;
         cstopdowntest_funtype_3_ftbl_t ftbl;
         cstopdowntest_funtype_3_htbl_t htbl;};

uint8_t f_cstopdowntest_closure_17(struct cstopdowntest_closure_17_s * closure, uint8_t bvar);

uint8_t m_cstopdowntest_closure_17(struct cstopdowntest_closure_17_s * closure, uint8_t bvar);

extern uint8_t h_cstopdowntest_closure_17(uint8_t ivar_45);

extern cstopdowntest_closure_17_t new_cstopdowntest_closure_17(void);

extern void release_cstopdowntest_closure_17(cstopdowntest_funtype_3_t closure);

extern cstopdowntest_closure_17_t copy_cstopdowntest_closure_17(cstopdowntest_closure_17_t x);




struct cstopdowntest_closure_18_s;
        typedef struct cstopdowntest_closure_18_s * cstopdowntest_closure_18_t;

struct cstopdowntest_closure_18_s {uint32_t count;
         cstopdowntest_funtype_3_ftbl_t ftbl;
         cstopdowntest_funtype_3_htbl_t htbl;};

uint8_t f_cstopdowntest_closure_18(struct cstopdowntest_closure_18_s * closure, uint8_t bvar);

uint8_t m_cstopdowntest_closure_18(struct cstopdowntest_closure_18_s * closure, uint8_t bvar);

extern uint8_t h_cstopdowntest_closure_18(uint8_t ivar_21);

extern cstopdowntest_closure_18_t new_cstopdowntest_closure_18(void);

extern void release_cstopdowntest_closure_18(cstopdowntest_funtype_3_t closure);

extern cstopdowntest_closure_18_t copy_cstopdowntest_closure_18(cstopdowntest_closure_18_t x);



struct cstopdowntest_array_19_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct cstopdowntest_array_19_s * cstopdowntest_array_19_t;

extern cstopdowntest_array_19_t new_cstopdowntest_array_19(uint32_t size);

extern void release_cstopdowntest_array_19(cstopdowntest_array_19_t x);

extern cstopdowntest_array_19_t copy_cstopdowntest_array_19(cstopdowntest_array_19_t x);

extern bool_t equal_cstopdowntest_array_19(cstopdowntest_array_19_t x, cstopdowntest_array_19_t y);
extern char * json_cstopdowntest_array_19(cstopdowntest_array_19_t x);

typedef struct actual_cstopdowntest_array_19_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdowntest_array_19_t;
void release_cstopdowntest_array_19_ptr(pointer_t x, type_actual_t cstopdowntest_array_19);

extern bool_t equal_cstopdowntest_array_19_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_cstopdowntest_array_19_ptr(pointer_t x, type_actual_t T);

actual_cstopdowntest_array_19_t actual_cstopdowntest_array_19(void);

extern cstopdowntest_array_19_t update_cstopdowntest_array_19(cstopdowntest_array_19_t x, uint32_t i, uint8_t v);

extern cstopdowntest_array_19_t upgrade_cstopdowntest_array_19(cstopdowntest_array_19_t x, uint32_t i, uint8_t v);



struct cstopdowntest_funtype_20_s;
        typedef struct cstopdowntest_funtype_20_s * cstopdowntest_funtype_20_t;

struct cstopdowntest_funtype_20_ftbl_s {cstopdown__ent_adt_t (* fptr)(struct cstopdowntest_funtype_20_s *, uint8_t);
        cstopdown__ent_adt_t (* mptr)(struct cstopdowntest_funtype_20_s *, uint8_t);
        void (* rptr)(struct cstopdowntest_funtype_20_s *);
        struct cstopdowntest_funtype_20_s * (* cptr)(struct cstopdowntest_funtype_20_s *);};
typedef struct cstopdowntest_funtype_20_ftbl_s * cstopdowntest_funtype_20_ftbl_t;

struct cstopdowntest_funtype_20_hashentry_s {uint32_t keyhash; uint8_t key; cstopdown__ent_adt_t value;}; 
typedef struct cstopdowntest_funtype_20_hashentry_s cstopdowntest_funtype_20_hashentry_t;

struct cstopdowntest_funtype_20_htbl_s {uint32_t size; uint32_t num_entries; cstopdowntest_funtype_20_hashentry_t * data;}; 
typedef struct cstopdowntest_funtype_20_htbl_s * cstopdowntest_funtype_20_htbl_t;

struct cstopdowntest_funtype_20_s {uint32_t count;
        cstopdowntest_funtype_20_ftbl_t ftbl;
        cstopdowntest_funtype_20_htbl_t htbl;};
typedef struct cstopdowntest_funtype_20_s * cstopdowntest_funtype_20_t;

extern void release_cstopdowntest_funtype_20(cstopdowntest_funtype_20_t x);

extern cstopdowntest_funtype_20_t copy_cstopdowntest_funtype_20(cstopdowntest_funtype_20_t x);

uint32_t lookup_cstopdowntest_funtype_20(cstopdowntest_funtype_20_htbl_t htbl, uint8_t i, uint32_t ihash);

cstopdowntest_funtype_20_t dupdate_cstopdowntest_funtype_20(cstopdowntest_funtype_20_t a, uint8_t i, cstopdown__ent_adt_t v);

extern cstopdowntest_funtype_20_t update_cstopdowntest_funtype_20(cstopdowntest_funtype_20_t a, uint8_t i, cstopdown__ent_adt_t v);

extern bool_t equal_cstopdowntest_funtype_20(cstopdowntest_funtype_20_t x, cstopdowntest_funtype_20_t y);

extern char* json_cstopdowntest_funtype_20(cstopdowntest_funtype_20_t x);



struct cstopdowntest_funtype_21_s;
        typedef struct cstopdowntest_funtype_21_s * cstopdowntest_funtype_21_t;

struct cstopdowntest_funtype_21_ftbl_s {cstopdowntest_funtype_20_t (* fptr)(struct cstopdowntest_funtype_21_s *, uint8_t);
        cstopdowntest_funtype_20_t (* mptr)(struct cstopdowntest_funtype_21_s *, uint8_t);
        void (* rptr)(struct cstopdowntest_funtype_21_s *);
        struct cstopdowntest_funtype_21_s * (* cptr)(struct cstopdowntest_funtype_21_s *);};
typedef struct cstopdowntest_funtype_21_ftbl_s * cstopdowntest_funtype_21_ftbl_t;

struct cstopdowntest_funtype_21_hashentry_s {uint32_t keyhash; uint8_t key; cstopdowntest_funtype_20_t value;}; 
typedef struct cstopdowntest_funtype_21_hashentry_s cstopdowntest_funtype_21_hashentry_t;

struct cstopdowntest_funtype_21_htbl_s {uint32_t size; uint32_t num_entries; cstopdowntest_funtype_21_hashentry_t * data;}; 
typedef struct cstopdowntest_funtype_21_htbl_s * cstopdowntest_funtype_21_htbl_t;

struct cstopdowntest_funtype_21_s {uint32_t count;
        cstopdowntest_funtype_21_ftbl_t ftbl;
        cstopdowntest_funtype_21_htbl_t htbl;};
typedef struct cstopdowntest_funtype_21_s * cstopdowntest_funtype_21_t;

extern void release_cstopdowntest_funtype_21(cstopdowntest_funtype_21_t x);

extern cstopdowntest_funtype_21_t copy_cstopdowntest_funtype_21(cstopdowntest_funtype_21_t x);

uint32_t lookup_cstopdowntest_funtype_21(cstopdowntest_funtype_21_htbl_t htbl, uint8_t i, uint32_t ihash);

cstopdowntest_funtype_21_t dupdate_cstopdowntest_funtype_21(cstopdowntest_funtype_21_t a, uint8_t i, cstopdowntest_funtype_20_t v);

extern cstopdowntest_funtype_21_t update_cstopdowntest_funtype_21(cstopdowntest_funtype_21_t a, uint8_t i, cstopdowntest_funtype_20_t v);

extern bool_t equal_cstopdowntest_funtype_21(cstopdowntest_funtype_21_t x, cstopdowntest_funtype_21_t y);

extern char* json_cstopdowntest_funtype_21(cstopdowntest_funtype_21_t x);



struct cstopdowntest_record_22_s {
        uint32_t count; 
        cstopdowntest_funtype_21_t scaf;
        uint64_t depth;
        cstopdown__ent_adt_t stack;
        bool_t lflag;};
typedef struct cstopdowntest_record_22_s * cstopdowntest_record_22_t;

extern cstopdowntest_record_22_t new_cstopdowntest_record_22(void);

extern void release_cstopdowntest_record_22(cstopdowntest_record_22_t x);

extern cstopdowntest_record_22_t copy_cstopdowntest_record_22(cstopdowntest_record_22_t x);

extern bool_t equal_cstopdowntest_record_22(cstopdowntest_record_22_t x, cstopdowntest_record_22_t y);
extern char * json_cstopdowntest_record_22(cstopdowntest_record_22_t x);

typedef struct actual_cstopdowntest_record_22_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdowntest_record_22_t;
void release_cstopdowntest_record_22_ptr(pointer_t x, type_actual_t cstopdowntest_record_22);

extern bool_t equal_cstopdowntest_record_22_ptr(pointer_t x, pointer_t y, actual_cstopdowntest_record_22_t T);

extern char * json_cstopdowntest_record_22_ptr(pointer_t x,  actual_cstopdowntest_record_22_t T);

actual_cstopdowntest_record_22_t actual_cstopdowntest_record_22(void);

extern cstopdowntest_record_22_t update_cstopdowntest_record_22_scaf(cstopdowntest_record_22_t x, cstopdowntest_funtype_21_t v);

extern cstopdowntest_record_22_t update_cstopdowntest_record_22_depth(cstopdowntest_record_22_t x, uint64_t v);

extern cstopdowntest_record_22_t update_cstopdowntest_record_22_stack(cstopdowntest_record_22_t x, cstopdown__ent_adt_t v);

extern cstopdowntest_record_22_t update_cstopdowntest_record_22_lflag(cstopdowntest_record_22_t x, bool_t v);




struct cstopdowntest_closure_23_s;
        typedef struct cstopdowntest_closure_23_s * cstopdowntest_closure_23_t;

struct cstopdowntest_closure_23_s {uint32_t count;
         cstopdown__lang_spec_ftbl_t ftbl;
         cstopdown__lang_spec_htbl_t htbl;};

cstopdown__peg_adt_t f_cstopdowntest_closure_23(struct cstopdowntest_closure_23_s * closure, uint8_t bvar);

cstopdown__peg_adt_t m_cstopdowntest_closure_23(struct cstopdowntest_closure_23_s * closure, uint8_t bvar);

extern cstopdown__peg_adt_t h_cstopdowntest_closure_23(uint8_t ivar_18);

extern cstopdowntest_closure_23_t new_cstopdowntest_closure_23(void);

extern void release_cstopdowntest_closure_23(cstopdown__lang_spec_t closure);

extern cstopdowntest_closure_23_t copy_cstopdowntest_closure_23(cstopdowntest_closure_23_t x);




struct cstopdowntest_closure_24_s;
        typedef struct cstopdowntest_closure_24_s * cstopdowntest_closure_24_t;

struct cstopdowntest_closure_24_s {uint32_t count;
         cstopdowntest_funtype_3_ftbl_t ftbl;
         cstopdowntest_funtype_3_htbl_t htbl;};

uint8_t f_cstopdowntest_closure_24(struct cstopdowntest_closure_24_s * closure, uint8_t bvar);

uint8_t m_cstopdowntest_closure_24(struct cstopdowntest_closure_24_s * closure, uint8_t bvar);

extern uint8_t h_cstopdowntest_closure_24(uint8_t ivar_41);

extern cstopdowntest_closure_24_t new_cstopdowntest_closure_24(void);

extern void release_cstopdowntest_closure_24(cstopdowntest_funtype_3_t closure);

extern cstopdowntest_closure_24_t copy_cstopdowntest_closure_24(cstopdowntest_closure_24_t x);



struct cstopdowntest_funtype_25_s;
        typedef struct cstopdowntest_funtype_25_s * cstopdowntest_funtype_25_t;

struct cstopdowntest_funtype_25_ftbl_s {uint8_t (* fptr)(struct cstopdowntest_funtype_25_s *, uint32_t);
        uint8_t (* mptr)(struct cstopdowntest_funtype_25_s *, uint32_t);
        void (* rptr)(struct cstopdowntest_funtype_25_s *);
        struct cstopdowntest_funtype_25_s * (* cptr)(struct cstopdowntest_funtype_25_s *);};
typedef struct cstopdowntest_funtype_25_ftbl_s * cstopdowntest_funtype_25_ftbl_t;

struct cstopdowntest_funtype_25_hashentry_s {uint32_t keyhash; uint32_t key; uint8_t value;}; 
typedef struct cstopdowntest_funtype_25_hashentry_s cstopdowntest_funtype_25_hashentry_t;

struct cstopdowntest_funtype_25_htbl_s {uint32_t size; uint32_t num_entries; cstopdowntest_funtype_25_hashentry_t * data;}; 
typedef struct cstopdowntest_funtype_25_htbl_s * cstopdowntest_funtype_25_htbl_t;

struct cstopdowntest_funtype_25_s {uint32_t count;
        cstopdowntest_funtype_25_ftbl_t ftbl;
        cstopdowntest_funtype_25_htbl_t htbl;};
typedef struct cstopdowntest_funtype_25_s * cstopdowntest_funtype_25_t;

extern void release_cstopdowntest_funtype_25(cstopdowntest_funtype_25_t x);

extern cstopdowntest_funtype_25_t copy_cstopdowntest_funtype_25(cstopdowntest_funtype_25_t x);

uint32_t lookup_cstopdowntest_funtype_25(cstopdowntest_funtype_25_htbl_t htbl, uint32_t i, uint32_t ihash);

cstopdowntest_funtype_25_t dupdate_cstopdowntest_funtype_25(cstopdowntest_funtype_25_t a, uint32_t i, uint8_t v);

extern cstopdowntest_funtype_25_t update_cstopdowntest_funtype_25(cstopdowntest_funtype_25_t a, uint32_t i, uint8_t v);

extern bool_t equal_cstopdowntest_funtype_25(cstopdowntest_funtype_25_t x, cstopdowntest_funtype_25_t y);

extern char* json_cstopdowntest_funtype_25(cstopdowntest_funtype_25_t x);




struct cstopdowntest_closure_26_s;
        typedef struct cstopdowntest_closure_26_s * cstopdowntest_closure_26_t;

struct cstopdowntest_closure_26_s {uint32_t count;
         cstopdowntest_funtype_25_ftbl_t ftbl;
         cstopdowntest_funtype_25_htbl_t htbl;
        cstopdowntest_funtype_3_t fvar_1;};

uint8_t f_cstopdowntest_closure_26(struct cstopdowntest_closure_26_s * closure, uint32_t bvar);

uint8_t m_cstopdowntest_closure_26(struct cstopdowntest_closure_26_s * closure, uint32_t bvar);

extern uint8_t h_cstopdowntest_closure_26(uint32_t ivar_39, cstopdowntest_funtype_3_t ivar_36);

extern cstopdowntest_closure_26_t new_cstopdowntest_closure_26(void);

extern void release_cstopdowntest_closure_26(cstopdowntest_funtype_25_t closure);

extern cstopdowntest_closure_26_t copy_cstopdowntest_closure_26(cstopdowntest_closure_26_t x);




struct cstopdowntest_closure_27_s;
        typedef struct cstopdowntest_closure_27_s * cstopdowntest_closure_27_t;

struct cstopdowntest_closure_27_s {uint32_t count;
         cstopdown__lang_spec_ftbl_t ftbl;
         cstopdown__lang_spec_htbl_t htbl;};

cstopdown__peg_adt_t f_cstopdowntest_closure_27(struct cstopdowntest_closure_27_s * closure, uint8_t bvar);

cstopdown__peg_adt_t m_cstopdowntest_closure_27(struct cstopdowntest_closure_27_s * closure, uint8_t bvar);

extern cstopdown__peg_adt_t h_cstopdowntest_closure_27(uint8_t ivar_18);

extern cstopdowntest_closure_27_t new_cstopdowntest_closure_27(void);

extern void release_cstopdowntest_closure_27(cstopdown__lang_spec_t closure);

extern cstopdowntest_closure_27_t copy_cstopdowntest_closure_27(cstopdowntest_closure_27_t x);




struct cstopdowntest_closure_28_s;
        typedef struct cstopdowntest_closure_28_s * cstopdowntest_closure_28_t;

struct cstopdowntest_closure_28_s {uint32_t count;
         cstopdowntest_funtype_3_ftbl_t ftbl;
         cstopdowntest_funtype_3_htbl_t htbl;};

uint8_t f_cstopdowntest_closure_28(struct cstopdowntest_closure_28_s * closure, uint8_t bvar);

uint8_t m_cstopdowntest_closure_28(struct cstopdowntest_closure_28_s * closure, uint8_t bvar);

extern uint8_t h_cstopdowntest_closure_28(uint8_t ivar_20);

extern cstopdowntest_closure_28_t new_cstopdowntest_closure_28(void);

extern void release_cstopdowntest_closure_28(cstopdowntest_funtype_3_t closure);

extern cstopdowntest_closure_28_t copy_cstopdowntest_closure_28(cstopdowntest_closure_28_t x);




struct cstopdowntest_closure_29_s;
        typedef struct cstopdowntest_closure_29_s * cstopdowntest_closure_29_t;

struct cstopdowntest_closure_29_s {uint32_t count;
         cstopdowntest_funtype_25_ftbl_t ftbl;
         cstopdowntest_funtype_25_htbl_t htbl;
        cstopdowntest_funtype_3_t fvar_1;};

uint8_t f_cstopdowntest_closure_29(struct cstopdowntest_closure_29_s * closure, uint32_t bvar);

uint8_t m_cstopdowntest_closure_29(struct cstopdowntest_closure_29_s * closure, uint32_t bvar);

extern uint8_t h_cstopdowntest_closure_29(uint32_t ivar_39, cstopdowntest_funtype_3_t ivar_36);

extern cstopdowntest_closure_29_t new_cstopdowntest_closure_29(void);

extern void release_cstopdowntest_closure_29(cstopdowntest_funtype_25_t closure);

extern cstopdowntest_closure_29_t copy_cstopdowntest_closure_29(cstopdowntest_closure_29_t x);




struct cstopdowntest_closure_30_s;
        typedef struct cstopdowntest_closure_30_s * cstopdowntest_closure_30_t;

struct cstopdowntest_closure_30_s {uint32_t count;
         cstopdown__lang_spec_ftbl_t ftbl;
         cstopdown__lang_spec_htbl_t htbl;};

cstopdown__peg_adt_t f_cstopdowntest_closure_30(struct cstopdowntest_closure_30_s * closure, uint8_t bvar);

cstopdown__peg_adt_t m_cstopdowntest_closure_30(struct cstopdowntest_closure_30_s * closure, uint8_t bvar);

extern cstopdown__peg_adt_t h_cstopdowntest_closure_30(uint8_t ivar_18);

extern cstopdowntest_closure_30_t new_cstopdowntest_closure_30(void);

extern void release_cstopdowntest_closure_30(cstopdown__lang_spec_t closure);

extern cstopdowntest_closure_30_t copy_cstopdowntest_closure_30(cstopdowntest_closure_30_t x);




struct cstopdowntest_closure_31_s;
        typedef struct cstopdowntest_closure_31_s * cstopdowntest_closure_31_t;

struct cstopdowntest_closure_31_s {uint32_t count;
         cstopdowntest_funtype_3_ftbl_t ftbl;
         cstopdowntest_funtype_3_htbl_t htbl;};

uint8_t f_cstopdowntest_closure_31(struct cstopdowntest_closure_31_s * closure, uint8_t bvar);

uint8_t m_cstopdowntest_closure_31(struct cstopdowntest_closure_31_s * closure, uint8_t bvar);

extern uint8_t h_cstopdowntest_closure_31(uint8_t ivar_20);

extern cstopdowntest_closure_31_t new_cstopdowntest_closure_31(void);

extern void release_cstopdowntest_closure_31(cstopdowntest_funtype_3_t closure);

extern cstopdowntest_closure_31_t copy_cstopdowntest_closure_31(cstopdowntest_closure_31_t x);




struct cstopdowntest_closure_32_s;
        typedef struct cstopdowntest_closure_32_s * cstopdowntest_closure_32_t;

struct cstopdowntest_closure_32_s {uint32_t count;
         cstopdowntest_funtype_25_ftbl_t ftbl;
         cstopdowntest_funtype_25_htbl_t htbl;
        cstopdowntest_funtype_3_t fvar_1;};

uint8_t f_cstopdowntest_closure_32(struct cstopdowntest_closure_32_s * closure, uint32_t bvar);

uint8_t m_cstopdowntest_closure_32(struct cstopdowntest_closure_32_s * closure, uint32_t bvar);

extern uint8_t h_cstopdowntest_closure_32(uint32_t ivar_39, cstopdowntest_funtype_3_t ivar_36);

extern cstopdowntest_closure_32_t new_cstopdowntest_closure_32(void);

extern void release_cstopdowntest_closure_32(cstopdowntest_funtype_25_t closure);

extern cstopdowntest_closure_32_t copy_cstopdowntest_closure_32(cstopdowntest_closure_32_t x);




struct cstopdowntest_closure_33_s;
        typedef struct cstopdowntest_closure_33_s * cstopdowntest_closure_33_t;

struct cstopdowntest_closure_33_s {uint32_t count;
         cstopdown__lang_spec_ftbl_t ftbl;
         cstopdown__lang_spec_htbl_t htbl;};

cstopdown__peg_adt_t f_cstopdowntest_closure_33(struct cstopdowntest_closure_33_s * closure, uint8_t bvar);

cstopdown__peg_adt_t m_cstopdowntest_closure_33(struct cstopdowntest_closure_33_s * closure, uint8_t bvar);

extern cstopdown__peg_adt_t h_cstopdowntest_closure_33(uint8_t ivar_18);

extern cstopdowntest_closure_33_t new_cstopdowntest_closure_33(void);

extern void release_cstopdowntest_closure_33(cstopdown__lang_spec_t closure);

extern cstopdowntest_closure_33_t copy_cstopdowntest_closure_33(cstopdowntest_closure_33_t x);




struct cstopdowntest_closure_34_s;
        typedef struct cstopdowntest_closure_34_s * cstopdowntest_closure_34_t;

struct cstopdowntest_closure_34_s {uint32_t count;
         cstopdowntest_funtype_3_ftbl_t ftbl;
         cstopdowntest_funtype_3_htbl_t htbl;};

uint8_t f_cstopdowntest_closure_34(struct cstopdowntest_closure_34_s * closure, uint8_t bvar);

uint8_t m_cstopdowntest_closure_34(struct cstopdowntest_closure_34_s * closure, uint8_t bvar);

extern uint8_t h_cstopdowntest_closure_34(uint8_t ivar_41);

extern cstopdowntest_closure_34_t new_cstopdowntest_closure_34(void);

extern void release_cstopdowntest_closure_34(cstopdowntest_funtype_3_t closure);

extern cstopdowntest_closure_34_t copy_cstopdowntest_closure_34(cstopdowntest_closure_34_t x);




struct cstopdowntest_closure_35_s;
        typedef struct cstopdowntest_closure_35_s * cstopdowntest_closure_35_t;

struct cstopdowntest_closure_35_s {uint32_t count;
         cstopdowntest_funtype_25_ftbl_t ftbl;
         cstopdowntest_funtype_25_htbl_t htbl;
        cstopdowntest_funtype_3_t fvar_1;};

uint8_t f_cstopdowntest_closure_35(struct cstopdowntest_closure_35_s * closure, uint32_t bvar);

uint8_t m_cstopdowntest_closure_35(struct cstopdowntest_closure_35_s * closure, uint32_t bvar);

extern uint8_t h_cstopdowntest_closure_35(uint32_t ivar_39, cstopdowntest_funtype_3_t ivar_36);

extern cstopdowntest_closure_35_t new_cstopdowntest_closure_35(void);

extern void release_cstopdowntest_closure_35(cstopdowntest_funtype_25_t closure);

extern cstopdowntest_closure_35_t copy_cstopdowntest_closure_35(cstopdowntest_closure_35_t x);




struct cstopdowntest_closure_36_s;
        typedef struct cstopdowntest_closure_36_s * cstopdowntest_closure_36_t;

struct cstopdowntest_closure_36_s {uint32_t count;
         cstopdowntest_funtype_20_ftbl_t ftbl;
         cstopdowntest_funtype_20_htbl_t htbl;};

cstopdown__ent_adt_t f_cstopdowntest_closure_36(struct cstopdowntest_closure_36_s * closure, uint8_t bvar);

cstopdown__ent_adt_t m_cstopdowntest_closure_36(struct cstopdowntest_closure_36_s * closure, uint8_t bvar);

extern cstopdown__ent_adt_t h_cstopdowntest_closure_36(uint8_t ivar_7);

extern cstopdowntest_closure_36_t new_cstopdowntest_closure_36(void);

extern void release_cstopdowntest_closure_36(cstopdowntest_funtype_20_t closure);

extern cstopdowntest_closure_36_t copy_cstopdowntest_closure_36(cstopdowntest_closure_36_t x);



struct cstopdowntest_funtype_37_s;
        typedef struct cstopdowntest_funtype_37_s * cstopdowntest_funtype_37_t;

struct cstopdowntest_funtype_37_ftbl_s {cstopdowntest_funtype_20_t (* fptr)(struct cstopdowntest_funtype_37_s *, uint32_t);
        cstopdowntest_funtype_20_t (* mptr)(struct cstopdowntest_funtype_37_s *, uint32_t);
        void (* rptr)(struct cstopdowntest_funtype_37_s *);
        struct cstopdowntest_funtype_37_s * (* cptr)(struct cstopdowntest_funtype_37_s *);};
typedef struct cstopdowntest_funtype_37_ftbl_s * cstopdowntest_funtype_37_ftbl_t;

struct cstopdowntest_funtype_37_hashentry_s {uint32_t keyhash; uint32_t key; cstopdowntest_funtype_20_t value;}; 
typedef struct cstopdowntest_funtype_37_hashentry_s cstopdowntest_funtype_37_hashentry_t;

struct cstopdowntest_funtype_37_htbl_s {uint32_t size; uint32_t num_entries; cstopdowntest_funtype_37_hashentry_t * data;}; 
typedef struct cstopdowntest_funtype_37_htbl_s * cstopdowntest_funtype_37_htbl_t;

struct cstopdowntest_funtype_37_s {uint32_t count;
        cstopdowntest_funtype_37_ftbl_t ftbl;
        cstopdowntest_funtype_37_htbl_t htbl;};
typedef struct cstopdowntest_funtype_37_s * cstopdowntest_funtype_37_t;

extern void release_cstopdowntest_funtype_37(cstopdowntest_funtype_37_t x);

extern cstopdowntest_funtype_37_t copy_cstopdowntest_funtype_37(cstopdowntest_funtype_37_t x);

uint32_t lookup_cstopdowntest_funtype_37(cstopdowntest_funtype_37_htbl_t htbl, uint32_t i, uint32_t ihash);

cstopdowntest_funtype_37_t dupdate_cstopdowntest_funtype_37(cstopdowntest_funtype_37_t a, uint32_t i, cstopdowntest_funtype_20_t v);

extern cstopdowntest_funtype_37_t update_cstopdowntest_funtype_37(cstopdowntest_funtype_37_t a, uint32_t i, cstopdowntest_funtype_20_t v);

extern bool_t equal_cstopdowntest_funtype_37(cstopdowntest_funtype_37_t x, cstopdowntest_funtype_37_t y);

extern char* json_cstopdowntest_funtype_37(cstopdowntest_funtype_37_t x);



struct cstopdowntest_record_38_s {
        uint32_t count; 
        uint8_t depth;
        bool_t lflag;
        cstopdowntest_funtype_37_t scaf;
        cstopdown__ent_adt_t stack;};
typedef struct cstopdowntest_record_38_s * cstopdowntest_record_38_t;

extern cstopdowntest_record_38_t new_cstopdowntest_record_38(void);

extern void release_cstopdowntest_record_38(cstopdowntest_record_38_t x);

extern cstopdowntest_record_38_t copy_cstopdowntest_record_38(cstopdowntest_record_38_t x);

extern bool_t equal_cstopdowntest_record_38(cstopdowntest_record_38_t x, cstopdowntest_record_38_t y);
extern char * json_cstopdowntest_record_38(cstopdowntest_record_38_t x);

typedef struct actual_cstopdowntest_record_38_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdowntest_record_38_t;
void release_cstopdowntest_record_38_ptr(pointer_t x, type_actual_t cstopdowntest_record_38);

extern bool_t equal_cstopdowntest_record_38_ptr(pointer_t x, pointer_t y, actual_cstopdowntest_record_38_t T);

extern char * json_cstopdowntest_record_38_ptr(pointer_t x,  actual_cstopdowntest_record_38_t T);

actual_cstopdowntest_record_38_t actual_cstopdowntest_record_38(void);

extern cstopdowntest_record_38_t update_cstopdowntest_record_38_depth(cstopdowntest_record_38_t x, uint8_t v);

extern cstopdowntest_record_38_t update_cstopdowntest_record_38_lflag(cstopdowntest_record_38_t x, bool_t v);

extern cstopdowntest_record_38_t update_cstopdowntest_record_38_scaf(cstopdowntest_record_38_t x, cstopdowntest_funtype_37_t v);

extern cstopdowntest_record_38_t update_cstopdowntest_record_38_stack(cstopdowntest_record_38_t x, cstopdown__ent_adt_t v);




struct cstopdowntest_closure_39_s;
        typedef struct cstopdowntest_closure_39_s * cstopdowntest_closure_39_t;

struct cstopdowntest_closure_39_s {uint32_t count;
         cstopdowntest_funtype_37_ftbl_t ftbl;
         cstopdowntest_funtype_37_htbl_t htbl;
        cstopdowntest_funtype_20_t fvar_1;};

cstopdowntest_funtype_20_t f_cstopdowntest_closure_39(struct cstopdowntest_closure_39_s * closure, uint32_t bvar);

cstopdowntest_funtype_20_t m_cstopdowntest_closure_39(struct cstopdowntest_closure_39_s * closure, uint32_t bvar);

extern cstopdowntest_funtype_20_t h_cstopdowntest_closure_39(uint32_t ivar_26, cstopdowntest_funtype_20_t ivar_4);

extern cstopdowntest_closure_39_t new_cstopdowntest_closure_39(void);

extern void release_cstopdowntest_closure_39(cstopdowntest_funtype_37_t closure);

extern cstopdowntest_closure_39_t copy_cstopdowntest_closure_39(cstopdowntest_closure_39_t x);



struct cstopdowntest_record_40_s {
        uint32_t count; 
        cstopdowntest_funtype_37_t scaf;
        uint64_t depth;
        cstopdown__ent_adt_t stack;
        bool_t lflag;};
typedef struct cstopdowntest_record_40_s * cstopdowntest_record_40_t;

extern cstopdowntest_record_40_t new_cstopdowntest_record_40(void);

extern void release_cstopdowntest_record_40(cstopdowntest_record_40_t x);

extern cstopdowntest_record_40_t copy_cstopdowntest_record_40(cstopdowntest_record_40_t x);

extern bool_t equal_cstopdowntest_record_40(cstopdowntest_record_40_t x, cstopdowntest_record_40_t y);
extern char * json_cstopdowntest_record_40(cstopdowntest_record_40_t x);

typedef struct actual_cstopdowntest_record_40_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_cstopdowntest_record_40_t;
void release_cstopdowntest_record_40_ptr(pointer_t x, type_actual_t cstopdowntest_record_40);

extern bool_t equal_cstopdowntest_record_40_ptr(pointer_t x, pointer_t y, actual_cstopdowntest_record_40_t T);

extern char * json_cstopdowntest_record_40_ptr(pointer_t x,  actual_cstopdowntest_record_40_t T);

actual_cstopdowntest_record_40_t actual_cstopdowntest_record_40(void);

extern cstopdowntest_record_40_t update_cstopdowntest_record_40_scaf(cstopdowntest_record_40_t x, cstopdowntest_funtype_37_t v);

extern cstopdowntest_record_40_t update_cstopdowntest_record_40_depth(cstopdowntest_record_40_t x, uint64_t v);

extern cstopdowntest_record_40_t update_cstopdowntest_record_40_stack(cstopdowntest_record_40_t x, cstopdown__ent_adt_t v);

extern cstopdowntest_record_40_t update_cstopdowntest_record_40_lflag(cstopdowntest_record_40_t x, bool_t v);



struct cstopdowntest_funtype_41_s;
        typedef struct cstopdowntest_funtype_41_s * cstopdowntest_funtype_41_t;

struct cstopdowntest_funtype_41_ftbl_s {cstopdowntest_record_40_t (* fptr)(struct cstopdowntest_funtype_41_s *, cstopdowntest_record_40_t);
        cstopdowntest_record_40_t (* mptr)(struct cstopdowntest_funtype_41_s *, cstopdowntest_record_40_t);
        void (* rptr)(struct cstopdowntest_funtype_41_s *);
        struct cstopdowntest_funtype_41_s * (* cptr)(struct cstopdowntest_funtype_41_s *);};
typedef struct cstopdowntest_funtype_41_ftbl_s * cstopdowntest_funtype_41_ftbl_t;

struct cstopdowntest_funtype_41_hashentry_s {uint32_t keyhash; cstopdowntest_record_40_t key; cstopdowntest_record_40_t value;}; 
typedef struct cstopdowntest_funtype_41_hashentry_s cstopdowntest_funtype_41_hashentry_t;

struct cstopdowntest_funtype_41_htbl_s {uint32_t size; uint32_t num_entries; cstopdowntest_funtype_41_hashentry_t * data;}; 
typedef struct cstopdowntest_funtype_41_htbl_s * cstopdowntest_funtype_41_htbl_t;

struct cstopdowntest_funtype_41_s {uint32_t count;
        cstopdowntest_funtype_41_ftbl_t ftbl;
        cstopdowntest_funtype_41_htbl_t htbl;};
typedef struct cstopdowntest_funtype_41_s * cstopdowntest_funtype_41_t;

extern void release_cstopdowntest_funtype_41(cstopdowntest_funtype_41_t x);

extern cstopdowntest_funtype_41_t copy_cstopdowntest_funtype_41(cstopdowntest_funtype_41_t x);

extern bool_t equal_cstopdowntest_funtype_41(cstopdowntest_funtype_41_t x, cstopdowntest_funtype_41_t y);

extern char* json_cstopdowntest_funtype_41(cstopdowntest_funtype_41_t x);




struct cstopdowntest_closure_42_s;
        typedef struct cstopdowntest_closure_42_s * cstopdowntest_closure_42_t;

struct cstopdowntest_closure_42_s {uint32_t count;
         cstopdown__lang_spec_ftbl_t ftbl;
         cstopdown__lang_spec_htbl_t htbl;};

cstopdown__peg_adt_t f_cstopdowntest_closure_42(struct cstopdowntest_closure_42_s * closure, uint8_t bvar);

cstopdown__peg_adt_t m_cstopdowntest_closure_42(struct cstopdowntest_closure_42_s * closure, uint8_t bvar);

extern cstopdown__peg_adt_t h_cstopdowntest_closure_42(uint8_t ivar_5);

extern cstopdowntest_closure_42_t new_cstopdowntest_closure_42(void);

extern void release_cstopdowntest_closure_42(cstopdown__lang_spec_t closure);

extern cstopdowntest_closure_42_t copy_cstopdowntest_closure_42(cstopdowntest_closure_42_t x);



extern bool_t cstopdowntest__digit(uint8_t ivar_1);

extern bool_t cstopdowntest__any(uint8_t ivar_1);

extern cstopdown__peg_adt_t cstopdowntest__pyaml(uint8_t ivar_1);

extern cstopdowntest_funtype_3_t cstopdowntest__empty(uint8_t ivar_1);

extern cstopdowntest_funtype_7_t cstopdowntest__cat(uint8_t ivar_1, mpz_ptr_t ivar_2);

extern uint8_t cstopdowntest__tok0(uint8_t ivar_1);

extern uint8_t cstopdowntest__tok1(uint8_t ivar_1);

extern uint8_t cstopdowntest__emptydict(uint8_t ivar_1);

extern uint8_t cstopdowntest__obrace(uint8_t ivar_1);

extern uint8_t cstopdowntest__cbrace(uint8_t ivar_1);

extern uint8_t cstopdowntest__colon(uint8_t ivar_1);

extern cstopdowntest_funtype_3_t cstopdowntest__emptydict2(void);

extern cstopdowntest_funtype_3_t cstopdowntest__dict1(void);

extern bytestrings__bytestring_t cstopdowntest__bdict1(void);

extern cstopdowntest_funtype_3_t cstopdowntest__st2(void);

extern cstopdown__ent_adt_t cstopdowntest__test0(void);

extern cstopdown__ent_adt_t cstopdowntest__test1(void);

extern cstopdown__ent_adt_t cstopdowntest__test11(void);

extern cstopdown__ent_adt_t cstopdowntest__test2(void);

extern cstopdown__ent_adt_t cstopdowntest__bparse(cstopdown__lang_spec_t ivar_1, bytestrings__bytestring_t ivar_2, uint8_t ivar_3);

extern cstopdown__ent_adt_t cstopdowntest__btest1(void);
#endif