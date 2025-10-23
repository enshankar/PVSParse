//Code generated using pvs2ir
#ifndef _charstrings_h 
#define _charstrings_h

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

#include "gen_strings_c.h"

#include "strings_c.h"

#include "character_adt_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

//cc -O3 -Wall -o charstrings -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/charstrings_c.c /Users/e21660/shankar/pvs.git/lib/gen_strings_c.c /Users/e21660/shankar/pvs.git/lib/strings_c.c /Users/e21660/shankar/pvs.git/lib/character_adt_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/modulo_arithmetic_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c -lgmp 
//length

struct charstrings_array_0_s { uint32_t count;
        uint32_t size;
         uint32_t max;
         uint32_t elems[]; };
typedef struct charstrings_array_0_s * charstrings_array_0_t;

extern charstrings_array_0_t new_charstrings_array_0(uint32_t size);

extern void release_charstrings_array_0(charstrings_array_0_t x);

extern charstrings_array_0_t copy_charstrings_array_0(charstrings_array_0_t x);

extern bool_t equal_charstrings_array_0(charstrings_array_0_t x, charstrings_array_0_t y);
extern char * json_charstrings_array_0(charstrings_array_0_t x);

typedef struct actual_charstrings_array_0_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_charstrings_array_0_t;
extern void release_charstrings_array_0_ptr(pointer_t x, type_actual_t charstrings_array_0);

extern bool_t equal_charstrings_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T);

extern char * json_charstrings_array_0_ptr(pointer_t x, type_actual_t T);

actual_charstrings_array_0_t actual_charstrings_array_0(void);

extern charstrings_array_0_t update_charstrings_array_0(charstrings_array_0_t x, uint32_t i, uint32_t v);

extern charstrings_array_0_t upgrade_charstrings_array_0(charstrings_array_0_t x, uint32_t i, uint32_t v);


//length

struct charstrings__charstring_s {
        uint32_t count; 
        uint32_t length;
        charstrings_array_0_t seq;};
typedef struct charstrings__charstring_s * charstrings__charstring_t;

extern charstrings__charstring_t new_charstrings__charstring(void);

extern void release_charstrings__charstring(charstrings__charstring_t x);

extern charstrings__charstring_t copy_charstrings__charstring(charstrings__charstring_t x);

extern bool_t equal_charstrings__charstring(charstrings__charstring_t x, charstrings__charstring_t y);
extern char * json_charstrings__charstring(charstrings__charstring_t x);

typedef struct actual_charstrings__charstring_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_charstrings__charstring_t;
extern void release_charstrings__charstring_ptr(pointer_t x, type_actual_t charstrings__charstring);

extern bool_t equal_charstrings__charstring_ptr(pointer_t x, pointer_t y, actual_charstrings__charstring_t T);

extern char * json_charstrings__charstring_ptr(pointer_t x,  actual_charstrings__charstring_t T);

actual_charstrings__charstring_t actual_charstrings__charstring(void);

extern charstrings__charstring_t update_charstrings__charstring_length(charstrings__charstring_t x, uint32_t v);

extern charstrings__charstring_t update_charstrings__charstring_seq(charstrings__charstring_t x, charstrings_array_0_t v);


//addchar

struct charstrings_funtype_2_s;
        typedef struct charstrings_funtype_2_s * charstrings_funtype_2_t;

struct charstrings_funtype_2_ftbl_s {uint32_t (* fptr)(struct charstrings_funtype_2_s *, mpz_ptr_t);
        uint32_t (* mptr)(struct charstrings_funtype_2_s *, mpz_ptr_t);
        void (* rptr)(struct charstrings_funtype_2_s *);
        struct charstrings_funtype_2_s * (* cptr)(struct charstrings_funtype_2_s *);};
typedef struct charstrings_funtype_2_ftbl_s * charstrings_funtype_2_ftbl_t;

struct charstrings_funtype_2_hashentry_s {uint32_t keyhash; mpz_ptr_t key; uint32_t value;}; 
typedef struct charstrings_funtype_2_hashentry_s charstrings_funtype_2_hashentry_t;

struct charstrings_funtype_2_htbl_s {uint32_t size; uint32_t num_entries; charstrings_funtype_2_hashentry_t * data;}; 
typedef struct charstrings_funtype_2_htbl_s * charstrings_funtype_2_htbl_t;

struct charstrings_funtype_2_s {uint32_t count;
        charstrings_funtype_2_ftbl_t ftbl;
        charstrings_funtype_2_htbl_t htbl;};
typedef struct charstrings_funtype_2_s * charstrings_funtype_2_t;

extern void release_charstrings_funtype_2(charstrings_funtype_2_t x);

extern charstrings_funtype_2_t copy_charstrings_funtype_2(charstrings_funtype_2_t x);

extern uint32_t lookup_charstrings_funtype_2(charstrings_funtype_2_htbl_t htbl, mpz_ptr_t i, uint32_t ihash);

extern charstrings_funtype_2_t dupdate_charstrings_funtype_2(charstrings_funtype_2_t a, mpz_ptr_t i, uint32_t v);

extern charstrings_funtype_2_t update_charstrings_funtype_2(charstrings_funtype_2_t a, mpz_ptr_t i, uint32_t v);

extern bool_t equal_charstrings_funtype_2(charstrings_funtype_2_t x, charstrings_funtype_2_t y);

extern char* json_charstrings_funtype_2(charstrings_funtype_2_t x);


//addchar

struct charstrings_record_3_s {
        uint32_t count; 
        mpz_t length;
        charstrings_funtype_2_t seq;};
typedef struct charstrings_record_3_s * charstrings_record_3_t;

extern charstrings_record_3_t new_charstrings_record_3(void);

extern void release_charstrings_record_3(charstrings_record_3_t x);

extern charstrings_record_3_t copy_charstrings_record_3(charstrings_record_3_t x);

extern bool_t equal_charstrings_record_3(charstrings_record_3_t x, charstrings_record_3_t y);
extern char * json_charstrings_record_3(charstrings_record_3_t x);

typedef struct actual_charstrings_record_3_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_charstrings_record_3_t;
extern void release_charstrings_record_3_ptr(pointer_t x, type_actual_t charstrings_record_3);

extern bool_t equal_charstrings_record_3_ptr(pointer_t x, pointer_t y, actual_charstrings_record_3_t T);

extern char * json_charstrings_record_3_ptr(pointer_t x,  actual_charstrings_record_3_t T);

actual_charstrings_record_3_t actual_charstrings_record_3(void);

extern charstrings_record_3_t update_charstrings_record_3_length(charstrings_record_3_t x, mpz_ptr_t v);

extern charstrings_record_3_t update_charstrings_record_3_seq(charstrings_record_3_t x, charstrings_funtype_2_t v);



extern uint32_t charstrings__charstring_bound(void);

extern uint32_t charstrings__length(charstrings__charstring_t ivar_1);

extern uint32_t charstrings__cget(charstrings__charstring_t ivar_1, uint32_t ivar_2);

extern charstrings__charstring_t charstrings__null(void);

extern charstrings__charstring_t charstrings__addchar(uint32_t ivar_1, charstrings__charstring_t ivar_2);

extern charstrings__charstring_t charstrings__unit(uint32_t ivar_1);

extern charstrings__charstring_t charstrings__mk_charstring(strings__string_t ivar_1);

extern charstrings__charstring_t charstrings__doubleplus(charstrings__charstring_t ivar_1, charstrings__charstring_t ivar_2);

extern mpz_ptr_t charstrings__strdiff_rec(charstrings__charstring_t ivar_1, charstrings__charstring_t ivar_2, mpz_ptr_t ivar_3);

extern mpz_ptr_t charstrings__strdiff(charstrings__charstring_t ivar_1, charstrings__charstring_t ivar_2);

extern int8_t charstrings__strcmp(charstrings__charstring_t ivar_1, charstrings__charstring_t ivar_2);

extern charstrings__charstring_t charstrings__prefix(charstrings__charstring_t ivar_1, uint32_t ivar_2);

extern charstrings__charstring_t charstrings__suffix(charstrings__charstring_t ivar_1, uint32_t ivar_2);

extern charstrings__charstring_t charstrings__substr(charstrings__charstring_t ivar_1, uint32_t ivar_2, uint32_t ivar_4);

extern bool_t charstrings__ascii_charstringp(charstrings__charstring_t ivar_1);
#endif