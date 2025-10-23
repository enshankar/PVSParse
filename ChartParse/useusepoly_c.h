//Code generated using pvs2ir
#ifndef _useusepoly_h 
#define _useusepoly_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

#include "usepoly_c.h"

#include "poly_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

//cc -O3 -Wall -o useusepoly -I /Users/e21660 1 2 3/shankar/pvs.git/src/groundeval/ pvslib.c  useusepoly_c.c usepoly_c.c poly_c.c integertypes_c.c exp2_c.c modulo_arithmetic_c.c euclidean_division_c.c -lgmp 

struct useusepoly__box_uint64_s { uint32_t count;
        uint16_t size;
         uint64_t elems[]; };
typedef struct useusepoly__box_uint64_s * useusepoly__box_uint64_t;

extern useusepoly__box_uint64_t new_useusepoly__box_uint64(uint16_t size);

extern void release_useusepoly__box_uint64(useusepoly__box_uint64_t x);

void release_useusepoly__box_uint64_ptr(pointer_t x, type_actual_t useusepoly__box_uint64);

extern useusepoly__box_uint64_t copy_useusepoly__box_uint64(useusepoly__box_uint64_t x);
extern bool_t equal_useusepoly__box_uint64(useusepoly__box_uint64_t x, useusepoly__box_uint64_t y);

extern bool_t equal_useusepoly__box_uint64_ptr(pointer_t x, pointer_t y, type_actual_t T);
typedef struct actual_useusepoly__box_uint64_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_useusepoly__box_uint64_t;

actual_useusepoly__box_uint64_t actual_useusepoly__box_uint64(void);

extern useusepoly__box_uint64_t update_useusepoly__box_uint64(useusepoly__box_uint64_t x, uint32_t i, uint64_t v);



struct useusepoly_array_1_s { uint32_t count;
        uint16_t size;
         useusepoly__box_uint64_t elems[]; };
typedef struct useusepoly_array_1_s * useusepoly_array_1_t;

extern useusepoly_array_1_t new_useusepoly_array_1(uint16_t size);

extern void release_useusepoly_array_1(useusepoly_array_1_t x);

void release_useusepoly_array_1_ptr(pointer_t x, type_actual_t useusepoly_array_1);

extern useusepoly_array_1_t copy_useusepoly_array_1(useusepoly_array_1_t x);
extern bool_t equal_useusepoly_array_1(useusepoly_array_1_t x, useusepoly_array_1_t y);

extern bool_t equal_useusepoly_array_1_ptr(pointer_t x, pointer_t y, type_actual_t T);
typedef struct actual_useusepoly_array_1_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_useusepoly_array_1_t;

actual_useusepoly_array_1_t actual_useusepoly_array_1(void);

extern useusepoly_array_1_t update_useusepoly_array_1(useusepoly_array_1_t x, uint32_t i, useusepoly__box_uint64_t v);



extern useusepoly__box_uint64_t useusepoly__square(uint8_t ivar_1);

extern uint64_t useusepoly__test(void);
#endif