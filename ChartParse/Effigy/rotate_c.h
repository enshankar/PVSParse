//Code generated using pvs2ir
#ifndef _rotate_h 
#define _rotate_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

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

//cc -O3 -Wall -o rotate -I /Users/e21660/shankar/pvs.git/src/groundeval/ /Users/e21660/shankar/pvs.git/src/groundeval/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c rotate_c.c -lgmp 

struct rotate_array_0_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct rotate_array_0_s * rotate_array_0_t;

extern rotate_array_0_t new_rotate_array_0(uint32_t size);

extern void release_rotate_array_0(rotate_array_0_t x);

extern rotate_array_0_t copy_rotate_array_0(rotate_array_0_t x);

extern bool_t equal_rotate_array_0(rotate_array_0_t x, rotate_array_0_t y);
typedef struct actual_rotate_array_0_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_rotate_array_0_t;

void release_rotate_array_0_ptr(pointer_t x, type_actual_t rotate_array_0);
extern bool_t equal_rotate_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T);

actual_rotate_array_0_t actual_rotate_array_0(void);

extern rotate_array_0_t update_rotate_array_0(rotate_array_0_t x, uint32_t i, uint8_t v);

extern rotate_array_0_t upgrade_rotate_array_0(rotate_array_0_t x, uint32_t i, uint8_t v);



extern uint8_t rotate__u8rightrotate(uint8_t ivar_1, uint8_t ivar_2);

extern uint8_t rotate__test_u8rightrotate_0(void);

extern uint8_t rotate__test_u8rightrotate_1(void);

extern uint8_t rotate__test_u8rightrotate_2(void);

extern uint8_t rotate__test_u8rightrotate_3(void);

extern uint8_t rotate__test_u8rightrotate_4(void);

extern uint8_t rotate__test_u8rightrotate_5(void);

extern uint16_t rotate__u16rightrotate(uint16_t ivar_1, uint8_t ivar_2);

extern uint16_t rotate__test_u16rightrotate_0(void);

extern uint16_t rotate__test_u16rightrotate_1(void);

extern uint16_t rotate__test_u16rightrotate_2(void);

extern uint16_t rotate__test_u16rightrotate_3(void);

extern uint16_t rotate__test_u16rightrotate_4(void);

extern uint16_t rotate__test_u16rightrotate_5(void);

extern uint32_t rotate__u32rightrotate(uint32_t ivar_1, uint8_t ivar_2);

extern uint32_t rotate__test_u32rightrotate_0(void);

extern uint32_t rotate__test_u32rightrotate_1(void);

extern uint32_t rotate__test_u32rightrotate_2(void);

extern uint32_t rotate__test_u32rightrotate_3(void);

extern uint32_t rotate__test_u32rightrotate_4(void);

extern uint32_t rotate__test_u32rightrotate_5(void);

extern uint64_t rotate__u64rightrotate(uint64_t ivar_1, uint8_t ivar_2);

extern uint64_t rotate__test_u64rightrotate_0(void);

extern uint64_t rotate__test_u64rightrotate_1(void);

extern uint64_t rotate__test_u64rightrotate_2(void);

extern uint64_t rotate__test_u64rightrotate_3(void);

extern uint64_t rotate__test_u64rightrotate_4(void);

extern uint64_t rotate__test_u64rightrotate_5(void);

extern bytestrings__bytestring_t rotate__u8tobytestring(uint8_t ivar_1);

extern bytestrings__bytestring_t rotate__test_u8tobytestring_0(void);

extern bytestrings__bytestring_t rotate__test_u8tobytestring_1(void);

extern bytestrings__bytestring_t rotate__test_u8tobytestring_2(void);

extern bytestrings__bytestring_t rotate__test_u8tobytestring_3(void);

extern bytestrings__bytestring_t rotate__u16tobytestring(uint16_t ivar_1);

extern bytestrings__bytestring_t rotate__test_u16tobytestring_0(void);

extern bytestrings__bytestring_t rotate__test_u16tobytestring_1(void);

extern bytestrings__bytestring_t rotate__test_u16tobytestring_2(void);

extern bytestrings__bytestring_t rotate__test_u16tobytestring_3(void);

extern bytestrings__bytestring_t rotate__u32tobytestring(uint32_t ivar_1);

extern bytestrings__bytestring_t rotate__test_u32tobytestring_0(void);

extern bytestrings__bytestring_t rotate__test_u32tobytestring_1(void);

extern bytestrings__bytestring_t rotate__test_u32tobytestring_2(void);

extern bytestrings__bytestring_t rotate__test_u32tobytestring_3(void);

extern bytestrings__bytestring_t rotate__u64tobytestring(uint64_t ivar_1);

extern bytestrings__bytestring_t rotate__test_u64tobytestring_0(void);

extern bytestrings__bytestring_t rotate__test_u64tobytestring_1(void);

extern bytestrings__bytestring_t rotate__test_u64tobytestring_2(void);

extern bytestrings__bytestring_t rotate__test_u64tobytestring_3(void);
#endif