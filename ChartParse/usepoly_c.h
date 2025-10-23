//Code generated using pvs2ir
#ifndef _usepoly_h 
#define _usepoly_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

#include "poly_c.h"

//cc -O3 -Wall -o usepoly -I /Users/e21660 1 2 3/shankar/pvs.git/src/groundeval/ pvslib.c  usepoly_c.c poly_c.c -lgmp 

typedef pointer_t usepoly__S_t;

typedef pointer_t usepoly__T_t;

struct usepoly__Ar_s { uint32_t count;
        uint16_t size;
         usepoly__T_t elems[]; };
typedef struct usepoly__Ar_s * usepoly__Ar_t;

extern usepoly__Ar_t new_usepoly__Ar(uint16_t size);

extern void release_usepoly__Ar(usepoly__Ar_t x, type_actual_t usepoly__S, type_actual_t usepoly__T);

void release_usepoly__Ar_ptr(pointer_t x, type_actual_t usepoly__Ar);

extern usepoly__Ar_t copy_usepoly__Ar(usepoly__Ar_t x);
extern bool_t equal_usepoly__Ar(usepoly__Ar_t x, usepoly__Ar_t y, type_actual_t usepoly__S, type_actual_t usepoly__T);

extern bool_t equal_usepoly__Ar_ptr(pointer_t x, pointer_t y, type_actual_t T);
typedef struct actual_usepoly__Ar_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; type_actual_t usepoly__S; type_actual_t usepoly__T;} * actual_usepoly__Ar_t;

actual_usepoly__Ar_t actual_usepoly__Ar(type_actual_t usepoly__S, type_actual_t usepoly__T);

extern usepoly__Ar_t update_usepoly__Ar(usepoly__Ar_t x, uint32_t i, usepoly__T_t v, type_actual_t usepoly__S, type_actual_t usepoly__T);



extern usepoly__T_t usepoly__checkidd(type_actual_t usepoly__S, type_actual_t usepoly__T, usepoly__Ar_t ivar_1, uint8_t ivar_2);
#endif