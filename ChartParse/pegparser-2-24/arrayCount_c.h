//Code generated using pvs2ir
#ifndef _arrayCount_h 
#define _arrayCount_h

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

#include "sets_c.h"

//cc -O3 -Wall -o arrayCount -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/modulo_arithmetic_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c /Users/e21660/shankar/pvs.git/lib/sets_c.c arrayCount_c.c -lgmp 

typedef pointer_t arrayCount__T_t;
//count

struct arrayCount_funtype_0_s;
        typedef struct arrayCount_funtype_0_s * arrayCount_funtype_0_t;

struct arrayCount_funtype_0_ftbl_s {bool_t (* fptr)(struct arrayCount_funtype_0_s *, arrayCount__T_t);
        bool_t (* mptr)(struct arrayCount_funtype_0_s *, arrayCount__T_t);
        void (* rptr)(struct arrayCount_funtype_0_s *);
        struct arrayCount_funtype_0_s * (* cptr)(struct arrayCount_funtype_0_s *);};
typedef struct arrayCount_funtype_0_ftbl_s * arrayCount_funtype_0_ftbl_t;

struct arrayCount_funtype_0_hashentry_s {uint32_t keyhash; arrayCount__T_t key; bool_t value;}; 
typedef struct arrayCount_funtype_0_hashentry_s arrayCount_funtype_0_hashentry_t;

struct arrayCount_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; arrayCount_funtype_0_hashentry_t * data;}; 
typedef struct arrayCount_funtype_0_htbl_s * arrayCount_funtype_0_htbl_t;

struct arrayCount_funtype_0_s {uint32_t count;
        arrayCount_funtype_0_ftbl_t ftbl;
        arrayCount_funtype_0_htbl_t htbl;};
typedef struct arrayCount_funtype_0_s * arrayCount_funtype_0_t;

extern void release_arrayCount_funtype_0(arrayCount_funtype_0_t x, type_actual_t arrayCount__T);

extern arrayCount_funtype_0_t copy_arrayCount_funtype_0(arrayCount_funtype_0_t x);

extern bool_t equal_arrayCount_funtype_0(arrayCount_funtype_0_t x, arrayCount_funtype_0_t y, type_actual_t arrayCount__T);

extern char* json_arrayCount_funtype_0(arrayCount_funtype_0_t x, type_actual_t arrayCount__T);


//count

struct arrayCount_array_1_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         arrayCount__T_t elems[]; };
typedef struct arrayCount_array_1_s * arrayCount_array_1_t;

extern arrayCount_array_1_t new_arrayCount_array_1(uint32_t size);

extern void release_arrayCount_array_1(arrayCount_array_1_t x, type_actual_t arrayCount__T);

extern arrayCount_array_1_t copy_arrayCount_array_1(arrayCount_array_1_t x);

extern bool_t equal_arrayCount_array_1(arrayCount_array_1_t x, arrayCount_array_1_t y, type_actual_t arrayCount__T);
extern char * json_arrayCount_array_1(arrayCount_array_1_t x, type_actual_t arrayCount__T);

typedef struct actual_arrayCount_array_1_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t arrayCount__T;} * actual_arrayCount_array_1_t;
extern void release_arrayCount_array_1_ptr(pointer_t x, type_actual_t arrayCount_array_1);

extern bool_t equal_arrayCount_array_1_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_arrayCount_array_1_ptr(pointer_t x, type_actual_t T);

actual_arrayCount_array_1_t actual_arrayCount_array_1(type_actual_t arrayCount__T);

extern arrayCount_array_1_t update_arrayCount_array_1(arrayCount_array_1_t x, uint32_t i, arrayCount__T_t v, type_actual_t arrayCount__T);

extern arrayCount_array_1_t upgrade_arrayCount_array_1(arrayCount_array_1_t x, uint32_t i, arrayCount__T_t v, type_actual_t arrayCount__T);


//count

struct arrayCount_funtype_2_s;
        typedef struct arrayCount_funtype_2_s * arrayCount_funtype_2_t;

struct arrayCount_funtype_2_ftbl_s {uint32_t (* fptr)(struct arrayCount_funtype_2_s *, arrayCount_array_1_t);
        uint32_t (* mptr)(struct arrayCount_funtype_2_s *, arrayCount_array_1_t);
        void (* rptr)(struct arrayCount_funtype_2_s *);
        struct arrayCount_funtype_2_s * (* cptr)(struct arrayCount_funtype_2_s *);};
typedef struct arrayCount_funtype_2_ftbl_s * arrayCount_funtype_2_ftbl_t;

struct arrayCount_funtype_2_hashentry_s {uint32_t keyhash; arrayCount_array_1_t key; uint32_t value;}; 
typedef struct arrayCount_funtype_2_hashentry_s arrayCount_funtype_2_hashentry_t;

struct arrayCount_funtype_2_htbl_s {uint32_t size; uint32_t num_entries; arrayCount_funtype_2_hashentry_t * data;}; 
typedef struct arrayCount_funtype_2_htbl_s * arrayCount_funtype_2_htbl_t;

struct arrayCount_funtype_2_s {uint32_t count;
        arrayCount_funtype_2_ftbl_t ftbl;
        arrayCount_funtype_2_htbl_t htbl;};
typedef struct arrayCount_funtype_2_s * arrayCount_funtype_2_t;

extern void release_arrayCount_funtype_2(arrayCount_funtype_2_t x, type_actual_t arrayCount__T);

extern arrayCount_funtype_2_t copy_arrayCount_funtype_2(arrayCount_funtype_2_t x);

extern bool_t equal_arrayCount_funtype_2(arrayCount_funtype_2_t x, arrayCount_funtype_2_t y, type_actual_t arrayCount__T);

extern char* json_arrayCount_funtype_2(arrayCount_funtype_2_t x, type_actual_t arrayCount__T);


//count

struct arrayCount_funtype_3_s;
        typedef struct arrayCount_funtype_3_s * arrayCount_funtype_3_t;

struct arrayCount_funtype_3_ftbl_s {arrayCount_funtype_2_t (* fptr)(struct arrayCount_funtype_3_s *, arrayCount_funtype_0_t);
        arrayCount_funtype_2_t (* mptr)(struct arrayCount_funtype_3_s *, arrayCount_funtype_0_t);
        void (* rptr)(struct arrayCount_funtype_3_s *);
        struct arrayCount_funtype_3_s * (* cptr)(struct arrayCount_funtype_3_s *);};
typedef struct arrayCount_funtype_3_ftbl_s * arrayCount_funtype_3_ftbl_t;

struct arrayCount_funtype_3_hashentry_s {uint32_t keyhash; arrayCount_funtype_0_t key; arrayCount_funtype_2_t value;}; 
typedef struct arrayCount_funtype_3_hashentry_s arrayCount_funtype_3_hashentry_t;

struct arrayCount_funtype_3_htbl_s {uint32_t size; uint32_t num_entries; arrayCount_funtype_3_hashentry_t * data;}; 
typedef struct arrayCount_funtype_3_htbl_s * arrayCount_funtype_3_htbl_t;

struct arrayCount_funtype_3_s {uint32_t count;
        arrayCount_funtype_3_ftbl_t ftbl;
        arrayCount_funtype_3_htbl_t htbl;};
typedef struct arrayCount_funtype_3_s * arrayCount_funtype_3_t;

extern void release_arrayCount_funtype_3(arrayCount_funtype_3_t x, type_actual_t arrayCount__T);

extern arrayCount_funtype_3_t copy_arrayCount_funtype_3(arrayCount_funtype_3_t x);

extern bool_t equal_arrayCount_funtype_3(arrayCount_funtype_3_t x, arrayCount_funtype_3_t y, type_actual_t arrayCount__T);

extern char* json_arrayCount_funtype_3(arrayCount_funtype_3_t x, type_actual_t arrayCount__T);




struct arrayCount_closure_4_s;
        typedef struct arrayCount_closure_4_s * arrayCount_closure_4_t;

struct arrayCount_closure_4_s {uint32_t count;
         arrayCount_funtype_3_ftbl_t ftbl;
         arrayCount_funtype_3_htbl_t htbl;
        type_actual_t fvar_1;
        uint32_t fvar_2; type_actual_t arrayCount__T;};

arrayCount_funtype_2_t f_arrayCount_closure_4(struct arrayCount_closure_4_s * closure, arrayCount_funtype_0_t bvar);

arrayCount_funtype_2_t m_arrayCount_closure_4(struct arrayCount_closure_4_s * closure, arrayCount_funtype_0_t bvar);

extern arrayCount_funtype_2_t h_arrayCount_closure_4(arrayCount_funtype_0_t ivar_5, type_actual_t arrayCount__T, uint32_t ivar_1);

arrayCount_closure_4_t new_arrayCount_closure_4(void);

void release_arrayCount_closure_4(arrayCount_funtype_3_t closure, type_actual_t arrayCount__T);

arrayCount_closure_4_t copy_arrayCount_closure_4(arrayCount_closure_4_t x);




struct arrayCount_closure_5_s;
        typedef struct arrayCount_closure_5_s * arrayCount_closure_5_t;

struct arrayCount_closure_5_s {uint32_t count;
         arrayCount_funtype_2_ftbl_t ftbl;
         arrayCount_funtype_2_htbl_t htbl;
        uint32_t fvar_1;
        type_actual_t fvar_2; type_actual_t arrayCount__T;};

uint32_t f_arrayCount_closure_5(struct arrayCount_closure_5_s * closure, arrayCount_array_1_t bvar);

uint32_t m_arrayCount_closure_5(struct arrayCount_closure_5_s * closure, arrayCount_array_1_t bvar);

extern uint32_t h_arrayCount_closure_5(arrayCount_array_1_t ivar_8, uint32_t ivar_1, type_actual_t arrayCount__T);

arrayCount_closure_5_t new_arrayCount_closure_5(void);

void release_arrayCount_closure_5(arrayCount_funtype_2_t closure, type_actual_t arrayCount__T);

arrayCount_closure_5_t copy_arrayCount_closure_5(arrayCount_closure_5_t x);



extern arrayCount_funtype_3_t arrayCount__count(type_actual_t arrayCount__T, uint32_t ivar_1);
#endif