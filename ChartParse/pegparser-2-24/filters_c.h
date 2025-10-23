//Code generated using pvs2ir
#ifndef _filters_h 
#define _filters_h

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

#include "sets_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

//cc -O3 -Wall -o filters -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/filters_c.c /Users/e21660/shankar/pvs.git/lib/sets_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c -lgmp 

typedef pointer_t filters__T_t;
//filter

struct filters_funtype_0_s;
        typedef struct filters_funtype_0_s * filters_funtype_0_t;

struct filters_funtype_0_ftbl_s {bool_t (* fptr)(struct filters_funtype_0_s *, filters__T_t);
        bool_t (* mptr)(struct filters_funtype_0_s *, filters__T_t);
        void (* rptr)(struct filters_funtype_0_s *);
        struct filters_funtype_0_s * (* cptr)(struct filters_funtype_0_s *);};
typedef struct filters_funtype_0_ftbl_s * filters_funtype_0_ftbl_t;

struct filters_funtype_0_hashentry_s {uint32_t keyhash; filters__T_t key; bool_t value;}; 
typedef struct filters_funtype_0_hashentry_s filters_funtype_0_hashentry_t;

struct filters_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; filters_funtype_0_hashentry_t * data;}; 
typedef struct filters_funtype_0_htbl_s * filters_funtype_0_htbl_t;

struct filters_funtype_0_s {uint32_t count;
        filters_funtype_0_ftbl_t ftbl;
        filters_funtype_0_htbl_t htbl;};
typedef struct filters_funtype_0_s * filters_funtype_0_t;

extern void release_filters_funtype_0(filters_funtype_0_t x, type_actual_t filters__T);

extern filters_funtype_0_t copy_filters_funtype_0(filters_funtype_0_t x);

extern bool_t equal_filters_funtype_0(filters_funtype_0_t x, filters_funtype_0_t y, type_actual_t filters__T);

extern char* json_filters_funtype_0(filters_funtype_0_t x, type_actual_t filters__T);




struct filters_closure_1_s;
        typedef struct filters_closure_1_s * filters_closure_1_t;

struct filters_closure_1_s {uint32_t count;
         filters_funtype_0_ftbl_t ftbl;
         filters_funtype_0_htbl_t htbl;
        filters_funtype_0_t fvar_1;
        type_actual_t fvar_2;
        filters_funtype_0_t fvar_3; type_actual_t filters__T;};

bool_t f_filters_closure_1(struct filters_closure_1_s * closure, filters__T_t bvar);

bool_t m_filters_closure_1(struct filters_closure_1_s * closure, filters__T_t bvar);

extern bool_t h_filters_closure_1(filters__T_t ivar_6, filters_funtype_0_t ivar_1, type_actual_t filters__T, filters_funtype_0_t ivar_3);

extern filters_closure_1_t new_filters_closure_1(void);

extern void release_filters_closure_1(filters_funtype_0_t closure, type_actual_t filters__T);

extern filters_closure_1_t copy_filters_closure_1(filters_closure_1_t x);


//filter

struct filters_funtype_2_s;
        typedef struct filters_funtype_2_s * filters_funtype_2_t;

struct filters_funtype_2_ftbl_s {filters_funtype_0_t (* fptr)(struct filters_funtype_2_s *, filters_funtype_0_t);
        filters_funtype_0_t (* mptr)(struct filters_funtype_2_s *, filters_funtype_0_t);
        void (* rptr)(struct filters_funtype_2_s *);
        struct filters_funtype_2_s * (* cptr)(struct filters_funtype_2_s *);};
typedef struct filters_funtype_2_ftbl_s * filters_funtype_2_ftbl_t;

struct filters_funtype_2_hashentry_s {uint32_t keyhash; filters_funtype_0_t key; filters_funtype_0_t value;}; 
typedef struct filters_funtype_2_hashentry_s filters_funtype_2_hashentry_t;

struct filters_funtype_2_htbl_s {uint32_t size; uint32_t num_entries; filters_funtype_2_hashentry_t * data;}; 
typedef struct filters_funtype_2_htbl_s * filters_funtype_2_htbl_t;

struct filters_funtype_2_s {uint32_t count;
        filters_funtype_2_ftbl_t ftbl;
        filters_funtype_2_htbl_t htbl;};
typedef struct filters_funtype_2_s * filters_funtype_2_t;

extern void release_filters_funtype_2(filters_funtype_2_t x, type_actual_t filters__T);

extern filters_funtype_2_t copy_filters_funtype_2(filters_funtype_2_t x);

extern bool_t equal_filters_funtype_2(filters_funtype_2_t x, filters_funtype_2_t y, type_actual_t filters__T);

extern char* json_filters_funtype_2(filters_funtype_2_t x, type_actual_t filters__T);




struct filters_closure_3_s;
        typedef struct filters_closure_3_s * filters_closure_3_t;

struct filters_closure_3_s {uint32_t count;
         filters_funtype_2_ftbl_t ftbl;
         filters_funtype_2_htbl_t htbl;
        filters_funtype_0_t fvar_1;
        type_actual_t fvar_2; type_actual_t filters__T;};

filters_funtype_0_t f_filters_closure_3(struct filters_closure_3_s * closure, filters_funtype_0_t bvar);

filters_funtype_0_t m_filters_closure_3(struct filters_closure_3_s * closure, filters_funtype_0_t bvar);

extern filters_funtype_0_t h_filters_closure_3(filters_funtype_0_t ivar_6, filters_funtype_0_t ivar_1, type_actual_t filters__T);

extern filters_closure_3_t new_filters_closure_3(void);

extern void release_filters_closure_3(filters_funtype_2_t closure, type_actual_t filters__T);

extern filters_closure_3_t copy_filters_closure_3(filters_closure_3_t x);




struct filters_closure_4_s;
        typedef struct filters_closure_4_s * filters_closure_4_t;

struct filters_closure_4_s {uint32_t count;
         filters_funtype_0_ftbl_t ftbl;
         filters_funtype_0_htbl_t htbl;
        filters_funtype_0_t fvar_1;
        type_actual_t fvar_2;
        filters_funtype_0_t fvar_3; type_actual_t filters__T;};

bool_t f_filters_closure_4(struct filters_closure_4_s * closure, filters__T_t bvar);

bool_t m_filters_closure_4(struct filters_closure_4_s * closure, filters__T_t bvar);

extern bool_t h_filters_closure_4(filters__T_t ivar_9, filters_funtype_0_t ivar_6, type_actual_t filters__T, filters_funtype_0_t ivar_1);

extern filters_closure_4_t new_filters_closure_4(void);

extern void release_filters_closure_4(filters_funtype_0_t closure, type_actual_t filters__T);

extern filters_closure_4_t copy_filters_closure_4(filters_closure_4_t x);


//filter

struct filters_funtype_5_s;
        typedef struct filters_funtype_5_s * filters_funtype_5_t;

struct filters_funtype_5_ftbl_s {list_adt__list_adt_t (* fptr)(struct filters_funtype_5_s *, list_adt__list_adt_t);
        list_adt__list_adt_t (* mptr)(struct filters_funtype_5_s *, list_adt__list_adt_t);
        void (* rptr)(struct filters_funtype_5_s *);
        struct filters_funtype_5_s * (* cptr)(struct filters_funtype_5_s *);};
typedef struct filters_funtype_5_ftbl_s * filters_funtype_5_ftbl_t;

struct filters_funtype_5_hashentry_s {uint32_t keyhash; list_adt__list_adt_t key; list_adt__list_adt_t value;}; 
typedef struct filters_funtype_5_hashentry_s filters_funtype_5_hashentry_t;

struct filters_funtype_5_htbl_s {uint32_t size; uint32_t num_entries; filters_funtype_5_hashentry_t * data;}; 
typedef struct filters_funtype_5_htbl_s * filters_funtype_5_htbl_t;

struct filters_funtype_5_s {uint32_t count;
        filters_funtype_5_ftbl_t ftbl;
        filters_funtype_5_htbl_t htbl;};
typedef struct filters_funtype_5_s * filters_funtype_5_t;

extern void release_filters_funtype_5(filters_funtype_5_t x, type_actual_t filters__T);

extern filters_funtype_5_t copy_filters_funtype_5(filters_funtype_5_t x);

extern bool_t equal_filters_funtype_5(filters_funtype_5_t x, filters_funtype_5_t y, type_actual_t filters__T);

extern char* json_filters_funtype_5(filters_funtype_5_t x, type_actual_t filters__T);




struct filters_closure_6_s;
        typedef struct filters_closure_6_s * filters_closure_6_t;

struct filters_closure_6_s {uint32_t count;
         filters_funtype_5_ftbl_t ftbl;
         filters_funtype_5_htbl_t htbl;
        filters_funtype_0_t fvar_1;
        type_actual_t fvar_2;
        type_actual_t fvar_3; type_actual_t filters__T;};

list_adt__list_adt_t f_filters_closure_6(struct filters_closure_6_s * closure, list_adt__list_adt_t bvar);

list_adt__list_adt_t m_filters_closure_6(struct filters_closure_6_s * closure, list_adt__list_adt_t bvar);

extern list_adt__list_adt_t h_filters_closure_6(list_adt__list_adt_t ivar_4, filters_funtype_0_t ivar_1, type_actual_t filters__T, type_actual_t ivar_6);

extern filters_closure_6_t new_filters_closure_6(void);

extern void release_filters_closure_6(filters_funtype_5_t closure, type_actual_t filters__T);

extern filters_closure_6_t copy_filters_closure_6(filters_closure_6_t x);



extern filters_funtype_0_t filters__filter__1(type_actual_t filters__T, filters_funtype_0_t ivar_1, filters_funtype_0_t ivar_3);

extern filters_funtype_2_t filters__filter__2(type_actual_t filters__T, filters_funtype_0_t ivar_1);

extern list_adt__list_adt_t filters__filter__3(type_actual_t filters__T, list_adt__list_adt_t ivar_1, filters_funtype_0_t ivar_2);

extern filters_funtype_5_t filters__filter__4(type_actual_t filters__T, filters_funtype_0_t ivar_1);
#endif