//Code generated using pvs2ir
#ifndef _Milenage_h 
#define _Milenage_h

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

#include "charstrings_c.h"

#include "gen_strings_c.h"

#include "strings_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "finite_sequences_c.h"

#include "real_defs_c.h"

#include "rotate_c.h"

#include "byvconcat_c.h"

#include "bytevectors_c.h"

#include "hex_c.h"

//cc -O3 -Wall -o Milenage -I /Users/e21660/shankar/pvs.git/src/groundeval/ /Users/e21660/shankar/pvs.git/src/groundeval/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/bytestrings_c.c /Users/e21660/shankar/pvs.git/lib/charstrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/finite_sequences_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c Milenage_c.c rotate_c.c byvconcat_c.c bytevectors_c.c hex_c.c -lgmp 

struct Milenage_array_0_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint8_t elems[]; };
typedef struct Milenage_array_0_s * Milenage_array_0_t;

extern Milenage_array_0_t new_Milenage_array_0(uint32_t size);

extern void release_Milenage_array_0(Milenage_array_0_t x);

extern Milenage_array_0_t copy_Milenage_array_0(Milenage_array_0_t x);

extern bool_t equal_Milenage_array_0(Milenage_array_0_t x, Milenage_array_0_t y);
typedef struct actual_Milenage_array_0_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_Milenage_array_0_t;

void release_Milenage_array_0_ptr(pointer_t x, type_actual_t Milenage_array_0);
extern bool_t equal_Milenage_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T);

actual_Milenage_array_0_t actual_Milenage_array_0(void);

extern Milenage_array_0_t update_Milenage_array_0(Milenage_array_0_t x, uint32_t i, uint8_t v);

extern Milenage_array_0_t upgrade_Milenage_array_0(Milenage_array_0_t x, uint32_t i, uint8_t v);



struct Milenage_record_1_s {
        uint32_t count; 
        Milenage_array_0_t project_1;
        Milenage_array_0_t project_2;
        Milenage_array_0_t project_3;
        Milenage_array_0_t project_4;};
typedef struct Milenage_record_1_s * Milenage_record_1_t;

extern Milenage_record_1_t new_Milenage_record_1(void);

extern void release_Milenage_record_1(Milenage_record_1_t x);

extern Milenage_record_1_t copy_Milenage_record_1(Milenage_record_1_t x);

extern bool_t equal_Milenage_record_1(Milenage_record_1_t x, Milenage_record_1_t y);
typedef struct actual_Milenage_record_1_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_Milenage_record_1_t;

void release_Milenage_record_1_ptr(pointer_t x, type_actual_t Milenage_record_1);
extern bool_t equal_Milenage_record_1_ptr(pointer_t x, pointer_t y, actual_Milenage_record_1_t T);

actual_Milenage_record_1_t actual_Milenage_record_1(void);

extern Milenage_record_1_t update_Milenage_record_1_project_1(Milenage_record_1_t x, Milenage_array_0_t v);

extern Milenage_record_1_t update_Milenage_record_1_project_2(Milenage_record_1_t x, Milenage_array_0_t v);

extern Milenage_record_1_t update_Milenage_record_1_project_3(Milenage_record_1_t x, Milenage_array_0_t v);

extern Milenage_record_1_t update_Milenage_record_1_project_4(Milenage_record_1_t x, Milenage_array_0_t v);



struct Milenage_funtype_2_s;
        typedef struct Milenage_funtype_2_s * Milenage_funtype_2_t;

struct Milenage_funtype_2_ftbl_s {Milenage_array_0_t (* fptr)(struct Milenage_funtype_2_s *, Milenage_record_1_t);
        Milenage_array_0_t (* mptr)(struct Milenage_funtype_2_s *, Milenage_array_0_t, Milenage_array_0_t, Milenage_array_0_t, Milenage_array_0_t);
        void (* rptr)(struct Milenage_funtype_2_s *);
        struct Milenage_funtype_2_s * (* cptr)(struct Milenage_funtype_2_s *);};
typedef struct Milenage_funtype_2_ftbl_s * Milenage_funtype_2_ftbl_t;

struct Milenage_funtype_2_hashentry_s {uint32_t keyhash; Milenage_record_1_t key; Milenage_array_0_t value;}; 
typedef struct Milenage_funtype_2_hashentry_s Milenage_funtype_2_hashentry_t;

struct Milenage_funtype_2_htbl_s {uint32_t size; uint32_t num_entries; Milenage_funtype_2_hashentry_t * data;}; 
typedef struct Milenage_funtype_2_htbl_s * Milenage_funtype_2_htbl_t;

struct Milenage_funtype_2_s {uint32_t count;
        Milenage_funtype_2_ftbl_t ftbl;
        Milenage_funtype_2_htbl_t htbl;};
typedef struct Milenage_funtype_2_s * Milenage_funtype_2_t;

extern void release_Milenage_funtype_2(Milenage_funtype_2_t x);

extern Milenage_funtype_2_t copy_Milenage_funtype_2(Milenage_funtype_2_t x);

extern bool_t equal_Milenage_funtype_2(Milenage_funtype_2_t x, Milenage_funtype_2_t y);



struct Milenage_record_3_s {
        uint32_t count; 
        Milenage_array_0_t project_1;
        Milenage_array_0_t project_2;};
typedef struct Milenage_record_3_s * Milenage_record_3_t;

extern Milenage_record_3_t new_Milenage_record_3(void);

extern void release_Milenage_record_3(Milenage_record_3_t x);

extern Milenage_record_3_t copy_Milenage_record_3(Milenage_record_3_t x);

extern bool_t equal_Milenage_record_3(Milenage_record_3_t x, Milenage_record_3_t y);
typedef struct actual_Milenage_record_3_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_Milenage_record_3_t;

void release_Milenage_record_3_ptr(pointer_t x, type_actual_t Milenage_record_3);
extern bool_t equal_Milenage_record_3_ptr(pointer_t x, pointer_t y, actual_Milenage_record_3_t T);

actual_Milenage_record_3_t actual_Milenage_record_3(void);

extern Milenage_record_3_t update_Milenage_record_3_project_1(Milenage_record_3_t x, Milenage_array_0_t v);

extern Milenage_record_3_t update_Milenage_record_3_project_2(Milenage_record_3_t x, Milenage_array_0_t v);



struct Milenage_funtype_4_s;
        typedef struct Milenage_funtype_4_s * Milenage_funtype_4_t;

struct Milenage_funtype_4_ftbl_s {Milenage_array_0_t (* fptr)(struct Milenage_funtype_4_s *, Milenage_record_3_t);
        Milenage_array_0_t (* mptr)(struct Milenage_funtype_4_s *, Milenage_array_0_t, Milenage_array_0_t);
        void (* rptr)(struct Milenage_funtype_4_s *);
        struct Milenage_funtype_4_s * (* cptr)(struct Milenage_funtype_4_s *);};
typedef struct Milenage_funtype_4_ftbl_s * Milenage_funtype_4_ftbl_t;

struct Milenage_funtype_4_hashentry_s {uint32_t keyhash; Milenage_record_3_t key; Milenage_array_0_t value;}; 
typedef struct Milenage_funtype_4_hashentry_s Milenage_funtype_4_hashentry_t;

struct Milenage_funtype_4_htbl_s {uint32_t size; uint32_t num_entries; Milenage_funtype_4_hashentry_t * data;}; 
typedef struct Milenage_funtype_4_htbl_s * Milenage_funtype_4_htbl_t;

struct Milenage_funtype_4_s {uint32_t count;
        Milenage_funtype_4_ftbl_t ftbl;
        Milenage_funtype_4_htbl_t htbl;};
typedef struct Milenage_funtype_4_s * Milenage_funtype_4_t;

extern void release_Milenage_funtype_4(Milenage_funtype_4_t x);

extern Milenage_funtype_4_t copy_Milenage_funtype_4(Milenage_funtype_4_t x);

extern bool_t equal_Milenage_funtype_4(Milenage_funtype_4_t x, Milenage_funtype_4_t y);




struct Milenage_closure_5_s;
        typedef struct Milenage_closure_5_s * Milenage_closure_5_t;

struct Milenage_closure_5_s {uint32_t count;
         Milenage_funtype_2_ftbl_t ftbl;
         Milenage_funtype_2_htbl_t htbl;
        Milenage_funtype_4_t fvar_1;};

Milenage_array_0_t f_Milenage_closure_5(struct Milenage_closure_5_s * closure, Milenage_record_1_t bvar);

Milenage_array_0_t m_Milenage_closure_5(struct Milenage_closure_5_s * closure, Milenage_array_0_t bvar_1, Milenage_array_0_t bvar_2, Milenage_array_0_t bvar_3, Milenage_array_0_t bvar_4);

extern Milenage_array_0_t h_Milenage_closure_5(Milenage_array_0_t ivar_8, Milenage_array_0_t ivar_9, Milenage_array_0_t ivar_10, Milenage_array_0_t ivar_11, Milenage_funtype_4_t ivar_4);

extern Milenage_closure_5_t new_Milenage_closure_5(void);

extern void release_Milenage_closure_5(Milenage_funtype_2_t closure);

extern Milenage_closure_5_t copy_Milenage_closure_5(Milenage_closure_5_t x);



struct Milenage_record_6_s {
        uint32_t count; 
        Milenage_array_0_t project_1;
        Milenage_array_0_t project_2;
        Milenage_array_0_t project_3;};
typedef struct Milenage_record_6_s * Milenage_record_6_t;

extern Milenage_record_6_t new_Milenage_record_6(void);

extern void release_Milenage_record_6(Milenage_record_6_t x);

extern Milenage_record_6_t copy_Milenage_record_6(Milenage_record_6_t x);

extern bool_t equal_Milenage_record_6(Milenage_record_6_t x, Milenage_record_6_t y);
typedef struct actual_Milenage_record_6_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_Milenage_record_6_t;

void release_Milenage_record_6_ptr(pointer_t x, type_actual_t Milenage_record_6);
extern bool_t equal_Milenage_record_6_ptr(pointer_t x, pointer_t y, actual_Milenage_record_6_t T);

actual_Milenage_record_6_t actual_Milenage_record_6(void);

extern Milenage_record_6_t update_Milenage_record_6_project_1(Milenage_record_6_t x, Milenage_array_0_t v);

extern Milenage_record_6_t update_Milenage_record_6_project_2(Milenage_record_6_t x, Milenage_array_0_t v);

extern Milenage_record_6_t update_Milenage_record_6_project_3(Milenage_record_6_t x, Milenage_array_0_t v);



struct Milenage_funtype_7_s;
        typedef struct Milenage_funtype_7_s * Milenage_funtype_7_t;

struct Milenage_funtype_7_ftbl_s {Milenage_array_0_t (* fptr)(struct Milenage_funtype_7_s *, Milenage_record_6_t);
        Milenage_array_0_t (* mptr)(struct Milenage_funtype_7_s *, Milenage_array_0_t, Milenage_array_0_t, Milenage_array_0_t);
        void (* rptr)(struct Milenage_funtype_7_s *);
        struct Milenage_funtype_7_s * (* cptr)(struct Milenage_funtype_7_s *);};
typedef struct Milenage_funtype_7_ftbl_s * Milenage_funtype_7_ftbl_t;

struct Milenage_funtype_7_hashentry_s {uint32_t keyhash; Milenage_record_6_t key; Milenage_array_0_t value;}; 
typedef struct Milenage_funtype_7_hashentry_s Milenage_funtype_7_hashentry_t;

struct Milenage_funtype_7_htbl_s {uint32_t size; uint32_t num_entries; Milenage_funtype_7_hashentry_t * data;}; 
typedef struct Milenage_funtype_7_htbl_s * Milenage_funtype_7_htbl_t;

struct Milenage_funtype_7_s {uint32_t count;
        Milenage_funtype_7_ftbl_t ftbl;
        Milenage_funtype_7_htbl_t htbl;};
typedef struct Milenage_funtype_7_s * Milenage_funtype_7_t;

extern void release_Milenage_funtype_7(Milenage_funtype_7_t x);

extern Milenage_funtype_7_t copy_Milenage_funtype_7(Milenage_funtype_7_t x);

extern bool_t equal_Milenage_funtype_7(Milenage_funtype_7_t x, Milenage_funtype_7_t y);




struct Milenage_closure_8_s;
        typedef struct Milenage_closure_8_s * Milenage_closure_8_t;

struct Milenage_closure_8_s {uint32_t count;
         Milenage_funtype_7_ftbl_t ftbl;
         Milenage_funtype_7_htbl_t htbl;
        Milenage_funtype_4_t fvar_1;};

Milenage_array_0_t f_Milenage_closure_8(struct Milenage_closure_8_s * closure, Milenage_record_6_t bvar);

Milenage_array_0_t m_Milenage_closure_8(struct Milenage_closure_8_s * closure, Milenage_array_0_t bvar_1, Milenage_array_0_t bvar_2, Milenage_array_0_t bvar_3);

extern Milenage_array_0_t h_Milenage_closure_8(Milenage_array_0_t ivar_8, Milenage_array_0_t ivar_9, Milenage_array_0_t ivar_10, Milenage_funtype_4_t ivar_4);

extern Milenage_closure_8_t new_Milenage_closure_8(void);

extern void release_Milenage_closure_8(Milenage_funtype_7_t closure);

extern Milenage_closure_8_t copy_Milenage_closure_8(Milenage_closure_8_t x);




struct Milenage_closure_9_s;
        typedef struct Milenage_closure_9_s * Milenage_closure_9_t;

struct Milenage_closure_9_s {uint32_t count;
         Milenage_funtype_7_ftbl_t ftbl;
         Milenage_funtype_7_htbl_t htbl;
        Milenage_funtype_4_t fvar_1;};

Milenage_array_0_t f_Milenage_closure_9(struct Milenage_closure_9_s * closure, Milenage_record_6_t bvar);

Milenage_array_0_t m_Milenage_closure_9(struct Milenage_closure_9_s * closure, Milenage_array_0_t bvar_1, Milenage_array_0_t bvar_2, Milenage_array_0_t bvar_3);

extern Milenage_array_0_t h_Milenage_closure_9(Milenage_array_0_t ivar_8, Milenage_array_0_t ivar_9, Milenage_array_0_t ivar_10, Milenage_funtype_4_t ivar_4);

extern Milenage_closure_9_t new_Milenage_closure_9(void);

extern void release_Milenage_closure_9(Milenage_funtype_7_t closure);

extern Milenage_closure_9_t copy_Milenage_closure_9(Milenage_closure_9_t x);




struct Milenage_closure_10_s;
        typedef struct Milenage_closure_10_s * Milenage_closure_10_t;

struct Milenage_closure_10_s {uint32_t count;
         Milenage_funtype_7_ftbl_t ftbl;
         Milenage_funtype_7_htbl_t htbl;
        Milenage_funtype_4_t fvar_1;};

Milenage_array_0_t f_Milenage_closure_10(struct Milenage_closure_10_s * closure, Milenage_record_6_t bvar);

Milenage_array_0_t m_Milenage_closure_10(struct Milenage_closure_10_s * closure, Milenage_array_0_t bvar_1, Milenage_array_0_t bvar_2, Milenage_array_0_t bvar_3);

extern Milenage_array_0_t h_Milenage_closure_10(Milenage_array_0_t ivar_8, Milenage_array_0_t ivar_9, Milenage_array_0_t ivar_10, Milenage_funtype_4_t ivar_4);

extern Milenage_closure_10_t new_Milenage_closure_10(void);

extern void release_Milenage_closure_10(Milenage_funtype_7_t closure);

extern Milenage_closure_10_t copy_Milenage_closure_10(Milenage_closure_10_t x);




struct Milenage_closure_11_s;
        typedef struct Milenage_closure_11_s * Milenage_closure_11_t;

struct Milenage_closure_11_s {uint32_t count;
         Milenage_funtype_7_ftbl_t ftbl;
         Milenage_funtype_7_htbl_t htbl;
        Milenage_funtype_4_t fvar_1;};

Milenage_array_0_t f_Milenage_closure_11(struct Milenage_closure_11_s * closure, Milenage_record_6_t bvar);

Milenage_array_0_t m_Milenage_closure_11(struct Milenage_closure_11_s * closure, Milenage_array_0_t bvar_1, Milenage_array_0_t bvar_2, Milenage_array_0_t bvar_3);

extern Milenage_array_0_t h_Milenage_closure_11(Milenage_array_0_t ivar_8, Milenage_array_0_t ivar_9, Milenage_array_0_t ivar_10, Milenage_funtype_4_t ivar_4);

extern Milenage_closure_11_t new_Milenage_closure_11(void);

extern void release_Milenage_closure_11(Milenage_funtype_7_t closure);

extern Milenage_closure_11_t copy_Milenage_closure_11(Milenage_closure_11_t x);




struct Milenage_closure_12_s;
        typedef struct Milenage_closure_12_s * Milenage_closure_12_t;

struct Milenage_closure_12_s {uint32_t count;
         Milenage_funtype_4_ftbl_t ftbl;
         Milenage_funtype_4_htbl_t htbl;
        Milenage_funtype_4_t fvar_1;};

Milenage_array_0_t f_Milenage_closure_12(struct Milenage_closure_12_s * closure, Milenage_record_3_t bvar);

Milenage_array_0_t m_Milenage_closure_12(struct Milenage_closure_12_s * closure, Milenage_array_0_t bvar_1, Milenage_array_0_t bvar_2);

extern Milenage_array_0_t h_Milenage_closure_12(Milenage_array_0_t ivar_8, Milenage_array_0_t ivar_9, Milenage_funtype_4_t ivar_4);

extern Milenage_closure_12_t new_Milenage_closure_12(void);

extern void release_Milenage_closure_12(Milenage_funtype_4_t closure);

extern Milenage_closure_12_t copy_Milenage_closure_12(Milenage_closure_12_t x);




struct Milenage_closure_13_s;
        typedef struct Milenage_closure_13_s * Milenage_closure_13_t;

struct Milenage_closure_13_s {uint32_t count;
         Milenage_funtype_7_ftbl_t ftbl;
         Milenage_funtype_7_htbl_t htbl;
        Milenage_funtype_4_t fvar_1;};

Milenage_array_0_t f_Milenage_closure_13(struct Milenage_closure_13_s * closure, Milenage_record_6_t bvar);

Milenage_array_0_t m_Milenage_closure_13(struct Milenage_closure_13_s * closure, Milenage_array_0_t bvar_1, Milenage_array_0_t bvar_2, Milenage_array_0_t bvar_3);

extern Milenage_array_0_t h_Milenage_closure_13(Milenage_array_0_t ivar_8, Milenage_array_0_t ivar_9, Milenage_array_0_t ivar_10, Milenage_funtype_4_t ivar_4);

extern Milenage_closure_13_t new_Milenage_closure_13(void);

extern void release_Milenage_closure_13(Milenage_funtype_7_t closure);

extern Milenage_closure_13_t copy_Milenage_closure_13(Milenage_closure_13_t x);



struct Milenage_record_14_s {
        uint32_t count; 
        bytestrings__bytestring_t project_1;
        bytestrings__bytestring_t project_2;
        Milenage_array_0_t project_3;
        Milenage_array_0_t project_4;
        Milenage_array_0_t project_5;};
typedef struct Milenage_record_14_s * Milenage_record_14_t;

extern Milenage_record_14_t new_Milenage_record_14(void);

extern void release_Milenage_record_14(Milenage_record_14_t x);

extern Milenage_record_14_t copy_Milenage_record_14(Milenage_record_14_t x);

extern bool_t equal_Milenage_record_14(Milenage_record_14_t x, Milenage_record_14_t y);
typedef struct actual_Milenage_record_14_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_Milenage_record_14_t;

void release_Milenage_record_14_ptr(pointer_t x, type_actual_t Milenage_record_14);
extern bool_t equal_Milenage_record_14_ptr(pointer_t x, pointer_t y, actual_Milenage_record_14_t T);

actual_Milenage_record_14_t actual_Milenage_record_14(void);

extern Milenage_record_14_t update_Milenage_record_14_project_1(Milenage_record_14_t x, bytestrings__bytestring_t v);

extern Milenage_record_14_t update_Milenage_record_14_project_2(Milenage_record_14_t x, bytestrings__bytestring_t v);

extern Milenage_record_14_t update_Milenage_record_14_project_3(Milenage_record_14_t x, Milenage_array_0_t v);

extern Milenage_record_14_t update_Milenage_record_14_project_4(Milenage_record_14_t x, Milenage_array_0_t v);

extern Milenage_record_14_t update_Milenage_record_14_project_5(Milenage_record_14_t x, Milenage_array_0_t v);



struct Milenage__Output_s {
        uint32_t count; 
        Milenage_array_0_t f1;
        Milenage_array_0_t f1star;
        Milenage_array_0_t f2;
        Milenage_array_0_t f3;
        Milenage_array_0_t f4;
        Milenage_array_0_t f5;
        Milenage_array_0_t f5star;};
typedef struct Milenage__Output_s * Milenage__Output_t;

extern Milenage__Output_t new_Milenage__Output(void);

extern void release_Milenage__Output(Milenage__Output_t x);

extern Milenage__Output_t copy_Milenage__Output(Milenage__Output_t x);

extern bool_t equal_Milenage__Output(Milenage__Output_t x, Milenage__Output_t y);
typedef struct actual_Milenage__Output_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_Milenage__Output_t;

void release_Milenage__Output_ptr(pointer_t x, type_actual_t Milenage__Output);
extern bool_t equal_Milenage__Output_ptr(pointer_t x, pointer_t y, actual_Milenage__Output_t T);

actual_Milenage__Output_t actual_Milenage__Output(void);

extern Milenage__Output_t update_Milenage__Output_f1(Milenage__Output_t x, Milenage_array_0_t v);

extern Milenage__Output_t update_Milenage__Output_f1star(Milenage__Output_t x, Milenage_array_0_t v);

extern Milenage__Output_t update_Milenage__Output_f2(Milenage__Output_t x, Milenage_array_0_t v);

extern Milenage__Output_t update_Milenage__Output_f3(Milenage__Output_t x, Milenage_array_0_t v);

extern Milenage__Output_t update_Milenage__Output_f4(Milenage__Output_t x, Milenage_array_0_t v);

extern Milenage__Output_t update_Milenage__Output_f5(Milenage__Output_t x, Milenage_array_0_t v);

extern Milenage__Output_t update_Milenage__Output_f5star(Milenage__Output_t x, Milenage_array_0_t v);



struct Milenage_funtype_16_s;
        typedef struct Milenage_funtype_16_s * Milenage_funtype_16_t;

struct Milenage_funtype_16_ftbl_s {Milenage__Output_t (* fptr)(struct Milenage_funtype_16_s *, Milenage_record_14_t);
        Milenage__Output_t (* mptr)(struct Milenage_funtype_16_s *, bytestrings__bytestring_t, bytestrings__bytestring_t, Milenage_array_0_t, Milenage_array_0_t, Milenage_array_0_t);
        void (* rptr)(struct Milenage_funtype_16_s *);
        struct Milenage_funtype_16_s * (* cptr)(struct Milenage_funtype_16_s *);};
typedef struct Milenage_funtype_16_ftbl_s * Milenage_funtype_16_ftbl_t;

struct Milenage_funtype_16_hashentry_s {uint32_t keyhash; Milenage_record_14_t key; Milenage__Output_t value;}; 
typedef struct Milenage_funtype_16_hashentry_s Milenage_funtype_16_hashentry_t;

struct Milenage_funtype_16_htbl_s {uint32_t size; uint32_t num_entries; Milenage_funtype_16_hashentry_t * data;}; 
typedef struct Milenage_funtype_16_htbl_s * Milenage_funtype_16_htbl_t;

struct Milenage_funtype_16_s {uint32_t count;
        Milenage_funtype_16_ftbl_t ftbl;
        Milenage_funtype_16_htbl_t htbl;};
typedef struct Milenage_funtype_16_s * Milenage_funtype_16_t;

extern void release_Milenage_funtype_16(Milenage_funtype_16_t x);

extern Milenage_funtype_16_t copy_Milenage_funtype_16(Milenage_funtype_16_t x);

extern bool_t equal_Milenage_funtype_16(Milenage_funtype_16_t x, Milenage_funtype_16_t y);




struct Milenage_closure_17_s;
        typedef struct Milenage_closure_17_s * Milenage_closure_17_t;

struct Milenage_closure_17_s {uint32_t count;
         Milenage_funtype_16_ftbl_t ftbl;
         Milenage_funtype_16_htbl_t htbl;
        Milenage_funtype_4_t fvar_1;};

Milenage__Output_t f_Milenage_closure_17(struct Milenage_closure_17_s * closure, Milenage_record_14_t bvar);

Milenage__Output_t m_Milenage_closure_17(struct Milenage_closure_17_s * closure, bytestrings__bytestring_t bvar_1, bytestrings__bytestring_t bvar_2, Milenage_array_0_t bvar_3, Milenage_array_0_t bvar_4, Milenage_array_0_t bvar_5);

extern Milenage__Output_t h_Milenage_closure_17(bytestrings__bytestring_t ivar_4, bytestrings__bytestring_t ivar_5, Milenage_array_0_t ivar_6, Milenage_array_0_t ivar_7, Milenage_array_0_t ivar_8, Milenage_funtype_4_t ivar_1);

extern Milenage_closure_17_t new_Milenage_closure_17(void);

extern void release_Milenage_closure_17(Milenage_funtype_16_t closure);

extern Milenage_closure_17_t copy_Milenage_closure_17(Milenage_closure_17_t x);




struct Milenage_closure_18_s;
        typedef struct Milenage_closure_18_s * Milenage_closure_18_t;

struct Milenage_closure_18_s {uint32_t count;
         Milenage_funtype_16_ftbl_t ftbl;
         Milenage_funtype_16_htbl_t htbl;
        Milenage_funtype_4_t fvar_1;};

Milenage__Output_t f_Milenage_closure_18(struct Milenage_closure_18_s * closure, Milenage_record_14_t bvar);

Milenage__Output_t m_Milenage_closure_18(struct Milenage_closure_18_s * closure, bytestrings__bytestring_t bvar_1, bytestrings__bytestring_t bvar_2, Milenage_array_0_t bvar_3, Milenage_array_0_t bvar_4, Milenage_array_0_t bvar_5);

extern Milenage__Output_t h_Milenage_closure_18(bytestrings__bytestring_t ivar_4, bytestrings__bytestring_t ivar_5, Milenage_array_0_t ivar_6, Milenage_array_0_t ivar_7, Milenage_array_0_t ivar_8, Milenage_funtype_4_t ivar_1);

extern Milenage_closure_18_t new_Milenage_closure_18(void);

extern void release_Milenage_closure_18(Milenage_funtype_16_t closure);

extern Milenage_closure_18_t copy_Milenage_closure_18(Milenage_closure_18_t x);



struct Milenage_funtype_19_s;
        typedef struct Milenage_funtype_19_s * Milenage_funtype_19_t;

struct Milenage_funtype_19_ftbl_s {bytestrings__bytestring_t (* fptr)(struct Milenage_funtype_19_s *, Milenage_record_14_t);
        bytestrings__bytestring_t (* mptr)(struct Milenage_funtype_19_s *, bytestrings__bytestring_t, bytestrings__bytestring_t, Milenage_array_0_t, Milenage_array_0_t, Milenage_array_0_t);
        void (* rptr)(struct Milenage_funtype_19_s *);
        struct Milenage_funtype_19_s * (* cptr)(struct Milenage_funtype_19_s *);};
typedef struct Milenage_funtype_19_ftbl_s * Milenage_funtype_19_ftbl_t;

struct Milenage_funtype_19_hashentry_s {uint32_t keyhash; Milenage_record_14_t key; bytestrings__bytestring_t value;}; 
typedef struct Milenage_funtype_19_hashentry_s Milenage_funtype_19_hashentry_t;

struct Milenage_funtype_19_htbl_s {uint32_t size; uint32_t num_entries; Milenage_funtype_19_hashentry_t * data;}; 
typedef struct Milenage_funtype_19_htbl_s * Milenage_funtype_19_htbl_t;

struct Milenage_funtype_19_s {uint32_t count;
        Milenage_funtype_19_ftbl_t ftbl;
        Milenage_funtype_19_htbl_t htbl;};
typedef struct Milenage_funtype_19_s * Milenage_funtype_19_t;

extern void release_Milenage_funtype_19(Milenage_funtype_19_t x);

extern Milenage_funtype_19_t copy_Milenage_funtype_19(Milenage_funtype_19_t x);

extern bool_t equal_Milenage_funtype_19(Milenage_funtype_19_t x, Milenage_funtype_19_t y);




struct Milenage_closure_20_s;
        typedef struct Milenage_closure_20_s * Milenage_closure_20_t;

struct Milenage_closure_20_s {uint32_t count;
         Milenage_funtype_19_ftbl_t ftbl;
         Milenage_funtype_19_htbl_t htbl;
        Milenage_funtype_4_t fvar_1;};

bytestrings__bytestring_t f_Milenage_closure_20(struct Milenage_closure_20_s * closure, Milenage_record_14_t bvar);

bytestrings__bytestring_t m_Milenage_closure_20(struct Milenage_closure_20_s * closure, bytestrings__bytestring_t bvar_1, bytestrings__bytestring_t bvar_2, Milenage_array_0_t bvar_3, Milenage_array_0_t bvar_4, Milenage_array_0_t bvar_5);

extern bytestrings__bytestring_t h_Milenage_closure_20(bytestrings__bytestring_t ivar_4, bytestrings__bytestring_t ivar_5, Milenage_array_0_t ivar_6, Milenage_array_0_t ivar_7, Milenage_array_0_t ivar_8, Milenage_funtype_4_t ivar_1);

extern Milenage_closure_20_t new_Milenage_closure_20(void);

extern void release_Milenage_closure_20(Milenage_funtype_19_t closure);

extern Milenage_closure_20_t copy_Milenage_closure_20(Milenage_closure_20_t x);



struct Milenage_funtype_21_s;
        typedef struct Milenage_funtype_21_s * Milenage_funtype_21_t;

struct Milenage_funtype_21_ftbl_s {uint32_t (* fptr)(struct Milenage_funtype_21_s *, mpz_ptr_t);
        uint32_t (* mptr)(struct Milenage_funtype_21_s *, mpz_ptr_t);
        void (* rptr)(struct Milenage_funtype_21_s *);
        struct Milenage_funtype_21_s * (* cptr)(struct Milenage_funtype_21_s *);};
typedef struct Milenage_funtype_21_ftbl_s * Milenage_funtype_21_ftbl_t;

struct Milenage_funtype_21_hashentry_s {uint32_t keyhash; mpz_ptr_t key; uint32_t value;}; 
typedef struct Milenage_funtype_21_hashentry_s Milenage_funtype_21_hashentry_t;

struct Milenage_funtype_21_htbl_s {uint32_t size; uint32_t num_entries; Milenage_funtype_21_hashentry_t * data;}; 
typedef struct Milenage_funtype_21_htbl_s * Milenage_funtype_21_htbl_t;

struct Milenage_funtype_21_s {uint32_t count;
        Milenage_funtype_21_ftbl_t ftbl;
        Milenage_funtype_21_htbl_t htbl;};
typedef struct Milenage_funtype_21_s * Milenage_funtype_21_t;

extern void release_Milenage_funtype_21(Milenage_funtype_21_t x);

extern Milenage_funtype_21_t copy_Milenage_funtype_21(Milenage_funtype_21_t x);

uint32_t lookup_Milenage_funtype_21(Milenage_funtype_21_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

Milenage_funtype_21_t dupdate_Milenage_funtype_21(Milenage_funtype_21_t a, mpz_ptr_t i, uint32_t v);

extern Milenage_funtype_21_t update_Milenage_funtype_21(Milenage_funtype_21_t a, mpz_ptr_t i, uint32_t v);

extern bool_t equal_Milenage_funtype_21(Milenage_funtype_21_t x, Milenage_funtype_21_t y);



struct Milenage_record_22_s {
        uint32_t count; 
        mpz_t length;
        Milenage_funtype_21_t seq;};
typedef struct Milenage_record_22_s * Milenage_record_22_t;

extern Milenage_record_22_t new_Milenage_record_22(void);

extern void release_Milenage_record_22(Milenage_record_22_t x);

extern Milenage_record_22_t copy_Milenage_record_22(Milenage_record_22_t x);

extern bool_t equal_Milenage_record_22(Milenage_record_22_t x, Milenage_record_22_t y);
typedef struct actual_Milenage_record_22_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr;} * actual_Milenage_record_22_t;

void release_Milenage_record_22_ptr(pointer_t x, type_actual_t Milenage_record_22);
extern bool_t equal_Milenage_record_22_ptr(pointer_t x, pointer_t y, actual_Milenage_record_22_t T);

actual_Milenage_record_22_t actual_Milenage_record_22(void);

extern Milenage_record_22_t update_Milenage_record_22_length(Milenage_record_22_t x, mpz_ptr_t v);

extern Milenage_record_22_t update_Milenage_record_22_seq(Milenage_record_22_t x, Milenage_funtype_21_t v);




struct Milenage_closure_23_s;
        typedef struct Milenage_closure_23_s * Milenage_closure_23_t;

struct Milenage_closure_23_s {uint32_t count;
         Milenage_funtype_19_ftbl_t ftbl;
         Milenage_funtype_19_htbl_t htbl;
        Milenage_funtype_4_t fvar_1;};

bytestrings__bytestring_t f_Milenage_closure_23(struct Milenage_closure_23_s * closure, Milenage_record_14_t bvar);

bytestrings__bytestring_t m_Milenage_closure_23(struct Milenage_closure_23_s * closure, bytestrings__bytestring_t bvar_1, bytestrings__bytestring_t bvar_2, Milenage_array_0_t bvar_3, Milenage_array_0_t bvar_4, Milenage_array_0_t bvar_5);

extern bytestrings__bytestring_t h_Milenage_closure_23(bytestrings__bytestring_t ivar_4, bytestrings__bytestring_t ivar_5, Milenage_array_0_t ivar_6, Milenage_array_0_t ivar_7, Milenage_array_0_t ivar_8, Milenage_funtype_4_t ivar_1);

extern Milenage_closure_23_t new_Milenage_closure_23(void);

extern void release_Milenage_closure_23(Milenage_funtype_19_t closure);

extern Milenage_closure_23_t copy_Milenage_closure_23(Milenage_closure_23_t x);



extern Milenage_array_0_t Milenage__nbyv(uint8_t ivar_3, uint32_t ivar_4);

extern Milenage_array_0_t Milenage__c1(void);

extern Milenage_array_0_t Milenage__c2(void);

extern Milenage_array_0_t Milenage__c3(void);

extern Milenage_array_0_t Milenage__c4(void);

extern Milenage_array_0_t Milenage__c5(void);

extern uint8_t Milenage__r1(void);

extern uint8_t Milenage__r2(void);

extern uint8_t Milenage__r3(void);

extern uint8_t Milenage__r4(void);

extern uint8_t Milenage__r5(void);

extern Milenage_array_0_t Milenage__byvto(uint32_t ivar_4, Milenage_array_0_t ivar_5, uint32_t ivar_6);

extern Milenage_array_0_t Milenage__byvfrom(uint32_t ivar_8, Milenage_array_0_t ivar_9, uint32_t ivar_10);

extern Milenage_funtype_2_t Milenage__OUT1(Milenage_funtype_4_t ivar_4);

extern Milenage_funtype_7_t Milenage__OUT2(Milenage_funtype_4_t ivar_4);

extern Milenage_funtype_7_t Milenage__OUT3(Milenage_funtype_4_t ivar_4);

extern Milenage_funtype_7_t Milenage__OUT4(Milenage_funtype_4_t ivar_4);

extern Milenage_funtype_7_t Milenage__OUT5(Milenage_funtype_4_t ivar_4);

extern Milenage_array_0_t Milenage__IN1(bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3);

extern Milenage_funtype_4_t Milenage__OPC(Milenage_funtype_4_t ivar_4);

extern Milenage_funtype_7_t Milenage__TEMP(Milenage_funtype_4_t ivar_4);

extern Milenage_funtype_16_t Milenage__allfunc(Milenage_funtype_4_t ivar_1);

extern Milenage_funtype_16_t Milenage__allfun(Milenage_funtype_4_t ivar_1);

extern Milenage_funtype_19_t Milenage__testAllFunc(Milenage_funtype_4_t ivar_1);

extern Milenage_funtype_19_t Milenage__testAllFun(Milenage_funtype_4_t ivar_1);
#endif