//Code generated using pvs2ir
#ifndef _array_sequences_h 
#define _array_sequences_h

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

//cc -O3 -Wall -o array_sequences -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/array_sequences_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/modulo_arithmetic_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c -lgmp 

typedef pointer_t array_sequences__T_t;
//empty_aseq

struct array_sequences_array_0_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         array_sequences__T_t elems[]; };
typedef struct array_sequences_array_0_s * array_sequences_array_0_t;

extern array_sequences_array_0_t new_array_sequences_array_0(uint32_t size);

extern void release_array_sequences_array_0(array_sequences_array_0_t x, type_actual_t array_sequences__T);

extern array_sequences_array_0_t copy_array_sequences_array_0(array_sequences_array_0_t x);

extern bool_t equal_array_sequences_array_0(array_sequences_array_0_t x, array_sequences_array_0_t y, type_actual_t array_sequences__T);
extern char * json_array_sequences_array_0(array_sequences_array_0_t x, type_actual_t array_sequences__T);

typedef struct actual_array_sequences_array_0_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t array_sequences__T;} * actual_array_sequences_array_0_t;
extern void release_array_sequences_array_0_ptr(pointer_t x, type_actual_t array_sequences_array_0);

extern bool_t equal_array_sequences_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_array_sequences_array_0_ptr(pointer_t x, type_actual_t T);

actual_array_sequences_array_0_t actual_array_sequences_array_0(type_actual_t array_sequences__T);

extern array_sequences_array_0_t update_array_sequences_array_0(array_sequences_array_0_t x, uint32_t i, array_sequences__T_t v, type_actual_t array_sequences__T);

extern array_sequences_array_0_t upgrade_array_sequences_array_0(array_sequences_array_0_t x, uint32_t i, array_sequences__T_t v, type_actual_t array_sequences__T);


//empty_aseq

struct array_sequences__aseq_s {
        uint32_t count; 
        uint32_t length;
        array_sequences_array_0_t seq;};
typedef struct array_sequences__aseq_s * array_sequences__aseq_t;

extern array_sequences__aseq_t new_array_sequences__aseq(void);

extern void release_array_sequences__aseq(array_sequences__aseq_t x, type_actual_t array_sequences__T);

extern array_sequences__aseq_t copy_array_sequences__aseq(array_sequences__aseq_t x);

extern bool_t equal_array_sequences__aseq(array_sequences__aseq_t x, array_sequences__aseq_t y, type_actual_t array_sequences__T);
extern char * json_array_sequences__aseq(array_sequences__aseq_t x, type_actual_t array_sequences__T);

typedef struct actual_array_sequences__aseq_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr; type_actual_t array_sequences__T;} * actual_array_sequences__aseq_t;
extern void release_array_sequences__aseq_ptr(pointer_t x, type_actual_t array_sequences__aseq);

extern bool_t equal_array_sequences__aseq_ptr(pointer_t x, pointer_t y, actual_array_sequences__aseq_t T);

extern char * json_array_sequences__aseq_ptr(pointer_t x,  actual_array_sequences__aseq_t T);

actual_array_sequences__aseq_t actual_array_sequences__aseq(type_actual_t array_sequences__T);

extern array_sequences__aseq_t update_array_sequences__aseq_length(array_sequences__aseq_t x, uint32_t v);

extern array_sequences__aseq_t update_array_sequences__aseq_seq(array_sequences__aseq_t x, array_sequences_array_0_t v, type_actual_t array_sequences__T);


//aseq_appl

struct array_sequences_funtype_2_s;
        typedef struct array_sequences_funtype_2_s * array_sequences_funtype_2_t;

struct array_sequences_funtype_2_ftbl_s {array_sequences__T_t (* fptr)(struct array_sequences_funtype_2_s *, uint32_t);
        array_sequences__T_t (* mptr)(struct array_sequences_funtype_2_s *, uint32_t);
        void (* rptr)(struct array_sequences_funtype_2_s *);
        struct array_sequences_funtype_2_s * (* cptr)(struct array_sequences_funtype_2_s *);};
typedef struct array_sequences_funtype_2_ftbl_s * array_sequences_funtype_2_ftbl_t;

struct array_sequences_funtype_2_hashentry_s {uint32_t keyhash; uint32_t key; array_sequences__T_t value;}; 
typedef struct array_sequences_funtype_2_hashentry_s array_sequences_funtype_2_hashentry_t;

struct array_sequences_funtype_2_htbl_s {uint32_t size; uint32_t num_entries; array_sequences_funtype_2_hashentry_t * data;}; 
typedef struct array_sequences_funtype_2_htbl_s * array_sequences_funtype_2_htbl_t;

struct array_sequences_funtype_2_s {uint32_t count;
        array_sequences_funtype_2_ftbl_t ftbl;
        array_sequences_funtype_2_htbl_t htbl;};
typedef struct array_sequences_funtype_2_s * array_sequences_funtype_2_t;

extern void release_array_sequences_funtype_2(array_sequences_funtype_2_t x, type_actual_t array_sequences__T);

extern array_sequences_funtype_2_t copy_array_sequences_funtype_2(array_sequences_funtype_2_t x);

extern uint32_t lookup_array_sequences_funtype_2(array_sequences_funtype_2_htbl_t htbl, uint32_t i, uint32_t ihash);

extern array_sequences_funtype_2_t dupdate_array_sequences_funtype_2(array_sequences_funtype_2_t a, uint32_t i, array_sequences__T_t v, type_actual_t array_sequences__T);

extern array_sequences_funtype_2_t update_array_sequences_funtype_2(array_sequences_funtype_2_t a, uint32_t i, array_sequences__T_t v, type_actual_t array_sequences__T);

extern bool_t equal_array_sequences_funtype_2(array_sequences_funtype_2_t x, array_sequences_funtype_2_t y, type_actual_t array_sequences__T);

extern char* json_array_sequences_funtype_2(array_sequences_funtype_2_t x, type_actual_t array_sequences__T);



extern array_sequences__aseq_t array_sequences__empty_aseq(type_actual_t array_sequences__T);

extern array_sequences_funtype_2_t array_sequences__aseq_appl(type_actual_t array_sequences__T, array_sequences__aseq_t ivar_1);
#endif