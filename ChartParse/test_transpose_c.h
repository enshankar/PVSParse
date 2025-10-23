//Code generated using pvs2ir
#ifndef _test_transpose_h 
#define _test_transpose_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "transpose_c.h"

//cc -O3 -Wall -o test_transpose -I /Users/e21660/shankar/pvs.git/src/groundeval/ /Users/e21660/shankar/pvs.git/src/groundeval/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c /Users/e21660/shankar/pvs.git/lib/transpose_c.c test_transpose_c.c -lgmp 

struct test_transpose__rtype_s {
        uint32_t count; 
        uint32_t x;
        uint32_t y;};
typedef struct test_transpose__rtype_s * test_transpose__rtype_t;

extern test_transpose__rtype_t new_test_transpose__rtype(void);

extern void release_test_transpose__rtype(test_transpose__rtype_t x);

void release_test_transpose__rtype_ptr(pointer_t x, type_actual_t test_transpose__rtype);

extern test_transpose__rtype_t copy_test_transpose__rtype(test_transpose__rtype_t x);
extern bool_t equal_test_transpose__rtype(test_transpose__rtype_t x, test_transpose__rtype_t y);

extern bool_t equal_test_transpose__rtype_ptr(pointer_t x, pointer_t y, type_actual_t T);
typedef struct actual_test_transpose__rtype_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_test_transpose__rtype_t;

actual_test_transpose__rtype_t actual_test_transpose__rtype(void);

extern test_transpose__rtype_t update_test_transpose__rtype_x(test_transpose__rtype_t x, uint32_t v);

extern test_transpose__rtype_t update_test_transpose__rtype_y(test_transpose__rtype_t x, uint32_t v);



struct test_transpose_funtype_1_s;
        typedef struct test_transpose_funtype_1_s * test_transpose_funtype_1_t;

struct test_transpose_funtype_1_ftbl_s {test_transpose__rtype_t (* fptr)(struct test_transpose_funtype_1_s *, test_transpose__rtype_t);
        test_transpose__rtype_t (* mptr)(struct test_transpose_funtype_1_s *, test_transpose__rtype_t);
        void (* rptr)(struct test_transpose_funtype_1_s *);
        struct test_transpose_funtype_1_s * (* cptr)(struct test_transpose_funtype_1_s *);};
typedef struct test_transpose_funtype_1_ftbl_s * test_transpose_funtype_1_ftbl_t;

struct test_transpose_funtype_1_hashentry_s {uint32_t keyhash; test_transpose__rtype_t key; test_transpose__rtype_t value;}; 
typedef struct test_transpose_funtype_1_hashentry_s test_transpose_funtype_1_hashentry_t;

struct test_transpose_funtype_1_htbl_s {uint32_t size; uint32_t num_entries; test_transpose_funtype_1_hashentry_t * data;}; 
typedef struct test_transpose_funtype_1_htbl_s * test_transpose_funtype_1_htbl_t;

struct test_transpose_funtype_1_s {uint32_t count;
        test_transpose_funtype_1_ftbl_t ftbl;
        test_transpose_funtype_1_htbl_t htbl;};
typedef struct test_transpose_funtype_1_s * test_transpose_funtype_1_t;

extern void release_test_transpose_funtype_1(test_transpose_funtype_1_t x);

extern test_transpose_funtype_1_t copy_test_transpose_funtype_1(test_transpose_funtype_1_t x);

extern test_transpose_funtype_1_t equal_test_transpose_funtype_1(test_transpose_funtype_1_t x, test_transpose_funtype_1_t y);




struct test_transpose_closure_2_s;
        typedef struct test_transpose_closure_2_s * test_transpose_closure_2_t;

struct test_transpose_closure_2_s {uint32_t count;
         test_transpose_funtype_1_ftbl_t ftbl;
         test_transpose_funtype_1_htbl_t htbl;
        test_transpose__rtype_t fvar_1;};

test_transpose__rtype_t f_test_transpose_closure_2(struct test_transpose_closure_2_s * closure, test_transpose__rtype_t bvar);

test_transpose__rtype_t m_test_transpose_closure_2(struct test_transpose_closure_2_s * closure, test_transpose__rtype_t bvar);

extern test_transpose__rtype_t h_test_transpose_closure_2(test_transpose__rtype_t ivar_3, test_transpose__rtype_t ivar_1);

extern test_transpose_closure_2_t new_test_transpose_closure_2(void);

extern void release_test_transpose_closure_2(test_transpose_funtype_1_t closure);

extern test_transpose_closure_2_t copy_test_transpose_closure_2(test_transpose_closure_2_t x);



struct test_transpose_funtype_3_s;
        typedef struct test_transpose_funtype_3_s * test_transpose_funtype_3_t;

struct test_transpose_funtype_3_ftbl_s {test_transpose_funtype_1_t (* fptr)(struct test_transpose_funtype_3_s *, test_transpose__rtype_t);
        test_transpose_funtype_1_t (* mptr)(struct test_transpose_funtype_3_s *, test_transpose__rtype_t);
        void (* rptr)(struct test_transpose_funtype_3_s *);
        struct test_transpose_funtype_3_s * (* cptr)(struct test_transpose_funtype_3_s *);};
typedef struct test_transpose_funtype_3_ftbl_s * test_transpose_funtype_3_ftbl_t;

struct test_transpose_funtype_3_hashentry_s {uint32_t keyhash; test_transpose__rtype_t key; test_transpose_funtype_1_t value;}; 
typedef struct test_transpose_funtype_3_hashentry_s test_transpose_funtype_3_hashentry_t;

struct test_transpose_funtype_3_htbl_s {uint32_t size; uint32_t num_entries; test_transpose_funtype_3_hashentry_t * data;}; 
typedef struct test_transpose_funtype_3_htbl_s * test_transpose_funtype_3_htbl_t;

struct test_transpose_funtype_3_s {uint32_t count;
        test_transpose_funtype_3_ftbl_t ftbl;
        test_transpose_funtype_3_htbl_t htbl;};
typedef struct test_transpose_funtype_3_s * test_transpose_funtype_3_t;

extern void release_test_transpose_funtype_3(test_transpose_funtype_3_t x);

extern test_transpose_funtype_3_t copy_test_transpose_funtype_3(test_transpose_funtype_3_t x);

extern test_transpose_funtype_3_t equal_test_transpose_funtype_3(test_transpose_funtype_3_t x, test_transpose_funtype_3_t y);




struct test_transpose_closure_4_s;
        typedef struct test_transpose_closure_4_s * test_transpose_closure_4_t;

struct test_transpose_closure_4_s {uint32_t count;
         test_transpose_funtype_3_ftbl_t ftbl;
         test_transpose_funtype_3_htbl_t htbl;};

test_transpose_funtype_1_t f_test_transpose_closure_4(struct test_transpose_closure_4_s * closure, test_transpose__rtype_t bvar);

test_transpose_funtype_1_t m_test_transpose_closure_4(struct test_transpose_closure_4_s * closure, test_transpose__rtype_t bvar);

extern test_transpose_funtype_1_t h_test_transpose_closure_4(test_transpose__rtype_t ivar_16);

extern test_transpose_closure_4_t new_test_transpose_closure_4(void);

extern void release_test_transpose_closure_4(test_transpose_funtype_3_t closure);

extern test_transpose_closure_4_t copy_test_transpose_closure_4(test_transpose_closure_4_t x);




struct test_transpose_closure_5_s;
        typedef struct test_transpose_closure_5_s * test_transpose_closure_5_t;

struct test_transpose_closure_5_s {uint32_t count;
         test_transpose_funtype_3_ftbl_t ftbl;
         test_transpose_funtype_3_htbl_t htbl;};

test_transpose_funtype_1_t f_test_transpose_closure_5(struct test_transpose_closure_5_s * closure, test_transpose__rtype_t bvar);

test_transpose_funtype_1_t m_test_transpose_closure_5(struct test_transpose_closure_5_s * closure, test_transpose__rtype_t bvar);

extern test_transpose_funtype_1_t h_test_transpose_closure_5(test_transpose__rtype_t ivar_16);

extern test_transpose_closure_5_t new_test_transpose_closure_5(void);

extern void release_test_transpose_closure_5(test_transpose_funtype_3_t closure);

extern test_transpose_closure_5_t copy_test_transpose_closure_5(test_transpose_closure_5_t x);




struct test_transpose_closure_6_s;
        typedef struct test_transpose_closure_6_s * test_transpose_closure_6_t;

struct test_transpose_closure_6_s {uint32_t count;
         test_transpose_funtype_3_ftbl_t ftbl;
         test_transpose_funtype_3_htbl_t htbl;};

test_transpose_funtype_1_t f_test_transpose_closure_6(struct test_transpose_closure_6_s * closure, test_transpose__rtype_t bvar);

test_transpose_funtype_1_t m_test_transpose_closure_6(struct test_transpose_closure_6_s * closure, test_transpose__rtype_t bvar);

extern test_transpose_funtype_1_t h_test_transpose_closure_6(test_transpose__rtype_t ivar_16);

extern test_transpose_closure_6_t new_test_transpose_closure_6(void);

extern void release_test_transpose_closure_6(test_transpose_funtype_3_t closure);

extern test_transpose_closure_6_t copy_test_transpose_closure_6(test_transpose_closure_6_t x);




struct test_transpose_closure_7_s;
        typedef struct test_transpose_closure_7_s * test_transpose_closure_7_t;

struct test_transpose_closure_7_s {uint32_t count;
         test_transpose_funtype_3_ftbl_t ftbl;
         test_transpose_funtype_3_htbl_t htbl;};

test_transpose_funtype_1_t f_test_transpose_closure_7(struct test_transpose_closure_7_s * closure, test_transpose__rtype_t bvar);

test_transpose_funtype_1_t m_test_transpose_closure_7(struct test_transpose_closure_7_s * closure, test_transpose__rtype_t bvar);

extern test_transpose_funtype_1_t h_test_transpose_closure_7(test_transpose__rtype_t ivar_16);

extern test_transpose_closure_7_t new_test_transpose_closure_7(void);

extern void release_test_transpose_closure_7(test_transpose_funtype_3_t closure);

extern test_transpose_closure_7_t copy_test_transpose_closure_7(test_transpose_closure_7_t x);



extern test_transpose__rtype_t test_transpose__swap(test_transpose__rtype_t ivar_1);

extern test_transpose__rtype_t test_transpose__R1(void);

extern test_transpose__rtype_t test_transpose__R2(void);

extern test_transpose_funtype_1_t test_transpose__sub(test_transpose__rtype_t ivar_1);

extern int32_t test_transpose__test1(void);

extern int32_t test_transpose__test2(void);

extern int32_t test_transpose__test3(void);

extern int32_t test_transpose__test4(void);
#endif