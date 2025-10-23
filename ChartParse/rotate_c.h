//Code generated using pvs2ir
#ifndef _rotate_h 
#define _rotate_h

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

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "integer_bv_ops_c.h"

#include "bv_c.h"

#include "bit_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

//cc -O3 -Wall -o rotate -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/integer_bv_ops_c.c /Users/e21660/shankar/pvs.git/lib/bv_c.c /Users/e21660/shankar/pvs.git/lib/bit_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c rotate_c.c -lgmp 
//padright

struct rotate_funtype_0_s;
        typedef struct rotate_funtype_0_s * rotate_funtype_0_t;

struct rotate_funtype_0_ftbl_s {bytestrings__bytestring_t (* fptr)(struct rotate_funtype_0_s *, bytestrings__bytestring_t);
        bytestrings__bytestring_t (* mptr)(struct rotate_funtype_0_s *, bytestrings__bytestring_t);
        void (* rptr)(struct rotate_funtype_0_s *);
        struct rotate_funtype_0_s * (* cptr)(struct rotate_funtype_0_s *);};
typedef struct rotate_funtype_0_ftbl_s * rotate_funtype_0_ftbl_t;

struct rotate_funtype_0_hashentry_s {uint32_t keyhash; bytestrings__bytestring_t key; bytestrings__bytestring_t value;}; 
typedef struct rotate_funtype_0_hashentry_s rotate_funtype_0_hashentry_t;

struct rotate_funtype_0_htbl_s {uint32_t size; uint32_t num_entries; rotate_funtype_0_hashentry_t * data;}; 
typedef struct rotate_funtype_0_htbl_s * rotate_funtype_0_htbl_t;

struct rotate_funtype_0_s {uint32_t count;
        rotate_funtype_0_ftbl_t ftbl;
        rotate_funtype_0_htbl_t htbl;};
typedef struct rotate_funtype_0_s * rotate_funtype_0_t;

extern void release_rotate_funtype_0(rotate_funtype_0_t x);

extern rotate_funtype_0_t copy_rotate_funtype_0(rotate_funtype_0_t x);

extern bool_t equal_rotate_funtype_0(rotate_funtype_0_t x, rotate_funtype_0_t y);

extern char* json_rotate_funtype_0(rotate_funtype_0_t x);




struct rotate_closure_1_s;
        typedef struct rotate_closure_1_s * rotate_closure_1_t;

struct rotate_closure_1_s {uint32_t count;
         rotate_funtype_0_ftbl_t ftbl;
         rotate_funtype_0_htbl_t htbl;
        uint8_t fvar_1;};

bytestrings__bytestring_t f_rotate_closure_1(struct rotate_closure_1_s * closure, bytestrings__bytestring_t bvar);

bytestrings__bytestring_t m_rotate_closure_1(struct rotate_closure_1_s * closure, bytestrings__bytestring_t bvar);

extern bytestrings__bytestring_t h_rotate_closure_1(bytestrings__bytestring_t ivar_3, uint8_t ivar_1);

extern rotate_closure_1_t new_rotate_closure_1(void);

extern void release_rotate_closure_1(rotate_funtype_0_t closure);

extern rotate_closure_1_t copy_rotate_closure_1(rotate_closure_1_t x);


//padright

struct rotate_array_2_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct rotate_array_2_s * rotate_array_2_t;

extern rotate_array_2_t new_rotate_array_2(uint32_t size);

extern void release_rotate_array_2(rotate_array_2_t x);

extern rotate_array_2_t copy_rotate_array_2(rotate_array_2_t x);

extern bool_t equal_rotate_array_2(rotate_array_2_t x, rotate_array_2_t y);
extern char * json_rotate_array_2(rotate_array_2_t x);

typedef struct actual_rotate_array_2_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_rotate_array_2_t;
void release_rotate_array_2_ptr(pointer_t x, type_actual_t rotate_array_2);

extern bool_t equal_rotate_array_2_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_rotate_array_2_ptr(pointer_t x, type_actual_t T);

actual_rotate_array_2_t actual_rotate_array_2(void);

extern rotate_array_2_t update_rotate_array_2(rotate_array_2_t x, uint32_t i, uint8_t v);

extern rotate_array_2_t upgrade_rotate_array_2(rotate_array_2_t x, uint32_t i, uint8_t v);


//padright

struct rotate_record_3_s {
        uint32_t count; 
        uint32_t length;
        rotate_array_2_t seq;};
typedef struct rotate_record_3_s * rotate_record_3_t;

extern rotate_record_3_t new_rotate_record_3(void);

extern void release_rotate_record_3(rotate_record_3_t x);

extern rotate_record_3_t copy_rotate_record_3(rotate_record_3_t x);

extern bool_t equal_rotate_record_3(rotate_record_3_t x, rotate_record_3_t y);
extern char * json_rotate_record_3(rotate_record_3_t x);

typedef struct actual_rotate_record_3_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_rotate_record_3_t;
void release_rotate_record_3_ptr(pointer_t x, type_actual_t rotate_record_3);

extern bool_t equal_rotate_record_3_ptr(pointer_t x, pointer_t y, actual_rotate_record_3_t T);

extern char * json_rotate_record_3_ptr(pointer_t x,  actual_rotate_record_3_t T);

actual_rotate_record_3_t actual_rotate_record_3(void);

extern rotate_record_3_t update_rotate_record_3_length(rotate_record_3_t x, uint32_t v);

extern rotate_record_3_t update_rotate_record_3_seq(rotate_record_3_t x, rotate_array_2_t v);


//lbytesXOR

struct rotate_record_4_s {
        uint32_t count; 
        bytestrings__bytestring_t project_1;
        bytestrings__bytestring_t project_2;};
typedef struct rotate_record_4_s * rotate_record_4_t;

extern rotate_record_4_t new_rotate_record_4(void);

extern void release_rotate_record_4(rotate_record_4_t x);

extern rotate_record_4_t copy_rotate_record_4(rotate_record_4_t x);

extern bool_t equal_rotate_record_4(rotate_record_4_t x, rotate_record_4_t y);
extern char * json_rotate_record_4(rotate_record_4_t x);

typedef struct actual_rotate_record_4_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_rotate_record_4_t;
void release_rotate_record_4_ptr(pointer_t x, type_actual_t rotate_record_4);

extern bool_t equal_rotate_record_4_ptr(pointer_t x, pointer_t y, actual_rotate_record_4_t T);

extern char * json_rotate_record_4_ptr(pointer_t x,  actual_rotate_record_4_t T);

actual_rotate_record_4_t actual_rotate_record_4(void);

extern rotate_record_4_t update_rotate_record_4_project_1(rotate_record_4_t x, bytestrings__bytestring_t v);

extern rotate_record_4_t update_rotate_record_4_project_2(rotate_record_4_t x, bytestrings__bytestring_t v);


//lbytesXOR

struct rotate_funtype_5_s;
        typedef struct rotate_funtype_5_s * rotate_funtype_5_t;

struct rotate_funtype_5_ftbl_s {bytestrings__bytestring_t (* fptr)(struct rotate_funtype_5_s *, rotate_record_4_t);
        bytestrings__bytestring_t (* mptr)(struct rotate_funtype_5_s *, bytestrings__bytestring_t, bytestrings__bytestring_t);
        void (* rptr)(struct rotate_funtype_5_s *);
        struct rotate_funtype_5_s * (* cptr)(struct rotate_funtype_5_s *);};
typedef struct rotate_funtype_5_ftbl_s * rotate_funtype_5_ftbl_t;

struct rotate_funtype_5_hashentry_s {uint32_t keyhash; rotate_record_4_t key; bytestrings__bytestring_t value;}; 
typedef struct rotate_funtype_5_hashentry_s rotate_funtype_5_hashentry_t;

struct rotate_funtype_5_htbl_s {uint32_t size; uint32_t num_entries; rotate_funtype_5_hashentry_t * data;}; 
typedef struct rotate_funtype_5_htbl_s * rotate_funtype_5_htbl_t;

struct rotate_funtype_5_s {uint32_t count;
        rotate_funtype_5_ftbl_t ftbl;
        rotate_funtype_5_htbl_t htbl;};
typedef struct rotate_funtype_5_s * rotate_funtype_5_t;

extern void release_rotate_funtype_5(rotate_funtype_5_t x);

extern rotate_funtype_5_t copy_rotate_funtype_5(rotate_funtype_5_t x);

extern bool_t equal_rotate_funtype_5(rotate_funtype_5_t x, rotate_funtype_5_t y);

extern char* json_rotate_funtype_5(rotate_funtype_5_t x);




struct rotate_closure_6_s;
        typedef struct rotate_closure_6_s * rotate_closure_6_t;

struct rotate_closure_6_s {uint32_t count;
         rotate_funtype_5_ftbl_t ftbl;
         rotate_funtype_5_htbl_t htbl;
        uint8_t fvar_1;};

bytestrings__bytestring_t f_rotate_closure_6(struct rotate_closure_6_s * closure, rotate_record_4_t bvar);

bytestrings__bytestring_t m_rotate_closure_6(struct rotate_closure_6_s * closure, bytestrings__bytestring_t bvar_1, bytestrings__bytestring_t bvar_2);

extern bytestrings__bytestring_t h_rotate_closure_6(bytestrings__bytestring_t ivar_3, bytestrings__bytestring_t ivar_4, uint8_t ivar_1);

extern rotate_closure_6_t new_rotate_closure_6(void);

extern void release_rotate_closure_6(rotate_funtype_5_t closure);

extern rotate_closure_6_t copy_rotate_closure_6(rotate_closure_6_t x);



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

extern uint8_t rotate__u8leftrotate(uint8_t ivar_1, uint8_t ivar_2);

extern uint8_t rotate__test_u8leftrotate_0(void);

extern uint8_t rotate__test_u8leftrotate_1(void);

extern uint8_t rotate__test_u8leftrotate_2(void);

extern uint8_t rotate__test_u8leftrotate_3(void);

extern uint8_t rotate__test_u8leftrotate_4(void);

extern uint8_t rotate__test_u8leftrotate_5(void);

extern uint16_t rotate__u16leftrotate(uint16_t ivar_1, uint8_t ivar_2);

extern uint16_t rotate__test_u16leftrotate_0(void);

extern uint16_t rotate__test_u16leftrotate_1(void);

extern uint16_t rotate__test_u16leftrotate_2(void);

extern uint16_t rotate__test_u16leftrotate_3(void);

extern uint16_t rotate__test_u16leftrotate_4(void);

extern uint16_t rotate__test_u16leftrotate_5(void);

extern uint32_t rotate__u32leftrotate(uint32_t ivar_1, uint8_t ivar_2);

extern uint32_t rotate__test_u32leftrotate_0(void);

extern uint32_t rotate__test_u32leftrotate_1(void);

extern uint32_t rotate__test_u32leftrotate_2(void);

extern uint32_t rotate__test_u32leftrotate_3(void);

extern uint32_t rotate__test_u32leftrotate_4(void);

extern uint32_t rotate__test_u32leftrotate_5(void);

extern uint64_t rotate__u64leftrotate(uint64_t ivar_1, uint8_t ivar_2);

extern uint64_t rotate__test_u64leftrotate_0(void);

extern uint64_t rotate__test_u64leftrotate_1(void);

extern uint64_t rotate__test_u64leftrotate_2(void);

extern uint64_t rotate__test_u64leftrotate_3(void);

extern uint64_t rotate__test_u64leftrotate_4(void);

extern uint64_t rotate__test_u64leftrotate_5(void);

extern rotate_funtype_0_t rotate__padright(uint8_t ivar_1);

extern rotate_funtype_5_t rotate__lbytesXOR(uint8_t ivar_1);

extern bytestrings__bytestring_t rotate__nbytes(uint8_t ivar_1, uint8_t ivar_2);

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