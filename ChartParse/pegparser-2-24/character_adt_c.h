//Code generated using pvs2ir
#ifndef _character_adt_h 
#define _character_adt_h

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

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

//cc -O3 -Wall -o character_adt -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/character_adt_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c -lgmp 
//character

struct character_adt__character_adt_s {
         uint32_t count; 
        uint8_t character_adt__character_adt_index;};
typedef struct character_adt__character_adt_s * character_adt__character_adt_t;

extern character_adt__character_adt_t new_character_adt__character_adt(void);

extern void release_character_adt__character_adt(character_adt__character_adt_t x);

extern character_adt__character_adt_t copy_character_adt__character_adt(character_adt__character_adt_t x);

extern bool_t equal_character_adt__character_adt(character_adt__character_adt_t x, character_adt__character_adt_t y);
extern char * json_character_adt__character_adt(character_adt__character_adt_t x);

typedef struct actual_character_adt__character_adt_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_character_adt__character_adt_t;
extern void release_character_adt__character_adt_ptr(pointer_t x, type_actual_t character_adt__character_adt);

extern bool_t equal_character_adt__character_adt_ptr(pointer_t x, pointer_t y, actual_character_adt__character_adt_t T);

extern char * json_character_adt__character_adt_ptr(pointer_t x,  actual_character_adt__character_adt_t T);

actual_character_adt__character_adt_t actual_character_adt__character_adt(void);

extern character_adt__character_adt_t update_character_adt__character_adt_character_adt__character_adt_index(character_adt__character_adt_t x, uint8_t v);


//char

struct character_adt__char_s {
        uint32_t count; 
        uint8_t character_adt__character_adt_index;
        uint32_t code;};
typedef struct character_adt__char_s * character_adt__char_t;

extern character_adt__char_t new_character_adt__char(void);

extern void release_character_adt__char(character_adt__char_t x);

extern character_adt__char_t copy_character_adt__char(character_adt__char_t x);

extern bool_t equal_character_adt__char(character_adt__char_t x, character_adt__char_t y);
extern char * json_character_adt__char(character_adt__char_t x);

typedef struct actual_character_adt__char_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_character_adt__char_t;
extern void release_character_adt__char_ptr(pointer_t x, type_actual_t character_adt__char);

extern bool_t equal_character_adt__char_ptr(pointer_t x, pointer_t y, actual_character_adt__char_t T);

extern char * json_character_adt__char_ptr(pointer_t x,  actual_character_adt__char_t T);

actual_character_adt__char_t actual_character_adt__char(void);

extern character_adt__char_t update_character_adt__char_character_adt__character_adt_index(character_adt__char_t x, uint8_t v);

extern character_adt__char_t update_character_adt__char_code(character_adt__char_t x, uint32_t v);


//character_ord

struct character_adt_funtype_2_s;
        typedef struct character_adt_funtype_2_s * character_adt_funtype_2_t;

struct character_adt_funtype_2_ftbl_s {uint8_t (* fptr)(struct character_adt_funtype_2_s *, uint32_t);
        uint8_t (* mptr)(struct character_adt_funtype_2_s *, uint32_t);
        void (* rptr)(struct character_adt_funtype_2_s *);
        struct character_adt_funtype_2_s * (* cptr)(struct character_adt_funtype_2_s *);};
typedef struct character_adt_funtype_2_ftbl_s * character_adt_funtype_2_ftbl_t;

struct character_adt_funtype_2_hashentry_s {uint32_t keyhash; uint32_t key; uint8_t value;}; 
typedef struct character_adt_funtype_2_hashentry_s character_adt_funtype_2_hashentry_t;

struct character_adt_funtype_2_htbl_s {uint32_t size; uint32_t num_entries; character_adt_funtype_2_hashentry_t * data;}; 
typedef struct character_adt_funtype_2_htbl_s * character_adt_funtype_2_htbl_t;

struct character_adt_funtype_2_s {uint32_t count;
        character_adt_funtype_2_ftbl_t ftbl;
        character_adt_funtype_2_htbl_t htbl;};
typedef struct character_adt_funtype_2_s * character_adt_funtype_2_t;

extern void release_character_adt_funtype_2(character_adt_funtype_2_t x);

extern character_adt_funtype_2_t copy_character_adt_funtype_2(character_adt_funtype_2_t x);

extern bool_t equal_character_adt_funtype_2(character_adt_funtype_2_t x, character_adt_funtype_2_t y);

extern char* json_character_adt_funtype_2(character_adt_funtype_2_t x);


//reduce_nat

struct character_adt_funtype_3_s;
        typedef struct character_adt_funtype_3_s * character_adt_funtype_3_t;

struct character_adt_funtype_3_ftbl_s {mpz_ptr_t (* fptr)(struct character_adt_funtype_3_s *, uint32_t);
        mpz_ptr_t (* mptr)(struct character_adt_funtype_3_s *, uint32_t);
        void (* rptr)(struct character_adt_funtype_3_s *);
        struct character_adt_funtype_3_s * (* cptr)(struct character_adt_funtype_3_s *);};
typedef struct character_adt_funtype_3_ftbl_s * character_adt_funtype_3_ftbl_t;

struct character_adt_funtype_3_hashentry_s {uint32_t keyhash; uint32_t key; mpz_t value;}; 
typedef struct character_adt_funtype_3_hashentry_s character_adt_funtype_3_hashentry_t;

struct character_adt_funtype_3_htbl_s {uint32_t size; uint32_t num_entries; character_adt_funtype_3_hashentry_t * data;}; 
typedef struct character_adt_funtype_3_htbl_s * character_adt_funtype_3_htbl_t;

struct character_adt_funtype_3_s {uint32_t count;
        character_adt_funtype_3_ftbl_t ftbl;
        character_adt_funtype_3_htbl_t htbl;};
typedef struct character_adt_funtype_3_s * character_adt_funtype_3_t;

extern void release_character_adt_funtype_3(character_adt_funtype_3_t x);

extern character_adt_funtype_3_t copy_character_adt_funtype_3(character_adt_funtype_3_t x);

extern bool_t equal_character_adt_funtype_3(character_adt_funtype_3_t x, character_adt_funtype_3_t y);

extern char* json_character_adt_funtype_3(character_adt_funtype_3_t x);


//reduce_nat

struct character_adt_funtype_4_s;
        typedef struct character_adt_funtype_4_s * character_adt_funtype_4_t;

struct character_adt_funtype_4_ftbl_s {mpz_ptr_t (* fptr)(struct character_adt_funtype_4_s *, uint32_t);
        mpz_ptr_t (* mptr)(struct character_adt_funtype_4_s *, uint32_t);
        void (* rptr)(struct character_adt_funtype_4_s *);
        struct character_adt_funtype_4_s * (* cptr)(struct character_adt_funtype_4_s *);};
typedef struct character_adt_funtype_4_ftbl_s * character_adt_funtype_4_ftbl_t;

struct character_adt_funtype_4_hashentry_s {uint32_t keyhash; uint32_t key; mpz_t value;}; 
typedef struct character_adt_funtype_4_hashentry_s character_adt_funtype_4_hashentry_t;

struct character_adt_funtype_4_htbl_s {uint32_t size; uint32_t num_entries; character_adt_funtype_4_hashentry_t * data;}; 
typedef struct character_adt_funtype_4_htbl_s * character_adt_funtype_4_htbl_t;

struct character_adt_funtype_4_s {uint32_t count;
        character_adt_funtype_4_ftbl_t ftbl;
        character_adt_funtype_4_htbl_t htbl;};
typedef struct character_adt_funtype_4_s * character_adt_funtype_4_t;

extern void release_character_adt_funtype_4(character_adt_funtype_4_t x);

extern character_adt_funtype_4_t copy_character_adt_funtype_4(character_adt_funtype_4_t x);

extern uint32_t lookup_character_adt_funtype_4(character_adt_funtype_4_htbl_t htbl, uint32_t i, uint32_t ihash);

extern character_adt_funtype_4_t dupdate_character_adt_funtype_4(character_adt_funtype_4_t a, uint32_t i, mpz_ptr_t v);

extern character_adt_funtype_4_t update_character_adt_funtype_4(character_adt_funtype_4_t a, uint32_t i, mpz_ptr_t v);

extern bool_t equal_character_adt_funtype_4(character_adt_funtype_4_t x, character_adt_funtype_4_t y);

extern char* json_character_adt_funtype_4(character_adt_funtype_4_t x);




struct character_adt_closure_5_s;
        typedef struct character_adt_closure_5_s * character_adt_closure_5_t;

struct character_adt_closure_5_s {uint32_t count;
         character_adt_funtype_3_ftbl_t ftbl;
         character_adt_funtype_3_htbl_t htbl;
        character_adt_funtype_4_t fvar_1;};

mpz_ptr_t f_character_adt_closure_5(struct character_adt_closure_5_s * closure, uint32_t bvar);

mpz_ptr_t m_character_adt_closure_5(struct character_adt_closure_5_s * closure, uint32_t bvar);

extern mpz_ptr_t h_character_adt_closure_5(uint32_t ivar_4, character_adt_funtype_4_t ivar_1);

character_adt_closure_5_t new_character_adt_closure_5(void);

void release_character_adt_closure_5(character_adt_funtype_3_t closure);

character_adt_closure_5_t copy_character_adt_closure_5(character_adt_closure_5_t x);


//REDUCE_nat

struct character_adt_record_6_s {
        uint32_t count; 
        uint32_t project_1;
        uint32_t project_2;};
typedef struct character_adt_record_6_s * character_adt_record_6_t;

extern character_adt_record_6_t new_character_adt_record_6(void);

extern void release_character_adt_record_6(character_adt_record_6_t x);

extern character_adt_record_6_t copy_character_adt_record_6(character_adt_record_6_t x);

extern bool_t equal_character_adt_record_6(character_adt_record_6_t x, character_adt_record_6_t y);
extern char * json_character_adt_record_6(character_adt_record_6_t x);

typedef struct actual_character_adt_record_6_s {equal_ptr_t equal_ptr; release_ptr_t release_ptr; json_ptr_t json_ptr;} * actual_character_adt_record_6_t;
extern void release_character_adt_record_6_ptr(pointer_t x, type_actual_t character_adt_record_6);

extern bool_t equal_character_adt_record_6_ptr(pointer_t x, pointer_t y, actual_character_adt_record_6_t T);

extern char * json_character_adt_record_6_ptr(pointer_t x,  actual_character_adt_record_6_t T);

actual_character_adt_record_6_t actual_character_adt_record_6(void);

extern character_adt_record_6_t update_character_adt_record_6_project_1(character_adt_record_6_t x, uint32_t v);

extern character_adt_record_6_t update_character_adt_record_6_project_2(character_adt_record_6_t x, uint32_t v);


//REDUCE_nat

struct character_adt_funtype_7_s;
        typedef struct character_adt_funtype_7_s * character_adt_funtype_7_t;

struct character_adt_funtype_7_ftbl_s {mpz_ptr_t (* fptr)(struct character_adt_funtype_7_s *, character_adt_record_6_t);
        mpz_ptr_t (* mptr)(struct character_adt_funtype_7_s *, uint32_t, uint32_t);
        void (* rptr)(struct character_adt_funtype_7_s *);
        struct character_adt_funtype_7_s * (* cptr)(struct character_adt_funtype_7_s *);};
typedef struct character_adt_funtype_7_ftbl_s * character_adt_funtype_7_ftbl_t;

struct character_adt_funtype_7_hashentry_s {uint32_t keyhash; character_adt_record_6_t key; mpz_t value;}; 
typedef struct character_adt_funtype_7_hashentry_s character_adt_funtype_7_hashentry_t;

struct character_adt_funtype_7_htbl_s {uint32_t size; uint32_t num_entries; character_adt_funtype_7_hashentry_t * data;}; 
typedef struct character_adt_funtype_7_htbl_s * character_adt_funtype_7_htbl_t;

struct character_adt_funtype_7_s {uint32_t count;
        character_adt_funtype_7_ftbl_t ftbl;
        character_adt_funtype_7_htbl_t htbl;};
typedef struct character_adt_funtype_7_s * character_adt_funtype_7_t;

extern void release_character_adt_funtype_7(character_adt_funtype_7_t x);

extern character_adt_funtype_7_t copy_character_adt_funtype_7(character_adt_funtype_7_t x);

extern bool_t equal_character_adt_funtype_7(character_adt_funtype_7_t x, character_adt_funtype_7_t y);

extern char* json_character_adt_funtype_7(character_adt_funtype_7_t x);




struct character_adt_closure_8_s;
        typedef struct character_adt_closure_8_s * character_adt_closure_8_t;

struct character_adt_closure_8_s {uint32_t count;
         character_adt_funtype_3_ftbl_t ftbl;
         character_adt_funtype_3_htbl_t htbl;
        character_adt_funtype_7_t fvar_1;};

mpz_ptr_t f_character_adt_closure_8(struct character_adt_closure_8_s * closure, uint32_t bvar);

mpz_ptr_t m_character_adt_closure_8(struct character_adt_closure_8_s * closure, uint32_t bvar);

extern mpz_ptr_t h_character_adt_closure_8(uint32_t ivar_4, character_adt_funtype_7_t ivar_1);

character_adt_closure_8_t new_character_adt_closure_8(void);

void release_character_adt_closure_8(character_adt_funtype_3_t closure);

character_adt_closure_8_t copy_character_adt_closure_8(character_adt_closure_8_t x);


//reduce_ordinal

struct character_adt_funtype_9_s;
        typedef struct character_adt_funtype_9_s * character_adt_funtype_9_t;

struct character_adt_funtype_9_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct character_adt_funtype_9_s *, uint32_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct character_adt_funtype_9_s *, uint32_t);
        void (* rptr)(struct character_adt_funtype_9_s *);
        struct character_adt_funtype_9_s * (* cptr)(struct character_adt_funtype_9_s *);};
typedef struct character_adt_funtype_9_ftbl_s * character_adt_funtype_9_ftbl_t;

struct character_adt_funtype_9_hashentry_s {uint32_t keyhash; uint32_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct character_adt_funtype_9_hashentry_s character_adt_funtype_9_hashentry_t;

struct character_adt_funtype_9_htbl_s {uint32_t size; uint32_t num_entries; character_adt_funtype_9_hashentry_t * data;}; 
typedef struct character_adt_funtype_9_htbl_s * character_adt_funtype_9_htbl_t;

struct character_adt_funtype_9_s {uint32_t count;
        character_adt_funtype_9_ftbl_t ftbl;
        character_adt_funtype_9_htbl_t htbl;};
typedef struct character_adt_funtype_9_s * character_adt_funtype_9_t;

extern void release_character_adt_funtype_9(character_adt_funtype_9_t x);

extern character_adt_funtype_9_t copy_character_adt_funtype_9(character_adt_funtype_9_t x);

extern bool_t equal_character_adt_funtype_9(character_adt_funtype_9_t x, character_adt_funtype_9_t y);

extern char* json_character_adt_funtype_9(character_adt_funtype_9_t x);


//reduce_ordinal

struct character_adt_funtype_10_s;
        typedef struct character_adt_funtype_10_s * character_adt_funtype_10_t;

struct character_adt_funtype_10_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct character_adt_funtype_10_s *, uint32_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct character_adt_funtype_10_s *, uint32_t);
        void (* rptr)(struct character_adt_funtype_10_s *);
        struct character_adt_funtype_10_s * (* cptr)(struct character_adt_funtype_10_s *);};
typedef struct character_adt_funtype_10_ftbl_s * character_adt_funtype_10_ftbl_t;

struct character_adt_funtype_10_hashentry_s {uint32_t keyhash; uint32_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct character_adt_funtype_10_hashentry_s character_adt_funtype_10_hashentry_t;

struct character_adt_funtype_10_htbl_s {uint32_t size; uint32_t num_entries; character_adt_funtype_10_hashentry_t * data;}; 
typedef struct character_adt_funtype_10_htbl_s * character_adt_funtype_10_htbl_t;

struct character_adt_funtype_10_s {uint32_t count;
        character_adt_funtype_10_ftbl_t ftbl;
        character_adt_funtype_10_htbl_t htbl;};
typedef struct character_adt_funtype_10_s * character_adt_funtype_10_t;

extern void release_character_adt_funtype_10(character_adt_funtype_10_t x);

extern character_adt_funtype_10_t copy_character_adt_funtype_10(character_adt_funtype_10_t x);

extern uint32_t lookup_character_adt_funtype_10(character_adt_funtype_10_htbl_t htbl, uint32_t i, uint32_t ihash);

extern character_adt_funtype_10_t dupdate_character_adt_funtype_10(character_adt_funtype_10_t a, uint32_t i, ordstruct_adt__ordstruct_adt_t v);

extern character_adt_funtype_10_t update_character_adt_funtype_10(character_adt_funtype_10_t a, uint32_t i, ordstruct_adt__ordstruct_adt_t v);

extern bool_t equal_character_adt_funtype_10(character_adt_funtype_10_t x, character_adt_funtype_10_t y);

extern char* json_character_adt_funtype_10(character_adt_funtype_10_t x);




struct character_adt_closure_11_s;
        typedef struct character_adt_closure_11_s * character_adt_closure_11_t;

struct character_adt_closure_11_s {uint32_t count;
         character_adt_funtype_9_ftbl_t ftbl;
         character_adt_funtype_9_htbl_t htbl;
        character_adt_funtype_10_t fvar_1;};

ordstruct_adt__ordstruct_adt_t f_character_adt_closure_11(struct character_adt_closure_11_s * closure, uint32_t bvar);

ordstruct_adt__ordstruct_adt_t m_character_adt_closure_11(struct character_adt_closure_11_s * closure, uint32_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_character_adt_closure_11(uint32_t ivar_4, character_adt_funtype_10_t ivar_1);

character_adt_closure_11_t new_character_adt_closure_11(void);

void release_character_adt_closure_11(character_adt_funtype_9_t closure);

character_adt_closure_11_t copy_character_adt_closure_11(character_adt_closure_11_t x);


//REDUCE_ordinal

struct character_adt_funtype_12_s;
        typedef struct character_adt_funtype_12_s * character_adt_funtype_12_t;

struct character_adt_funtype_12_ftbl_s {ordstruct_adt__ordstruct_adt_t (* fptr)(struct character_adt_funtype_12_s *, character_adt_record_6_t);
        ordstruct_adt__ordstruct_adt_t (* mptr)(struct character_adt_funtype_12_s *, uint32_t, uint32_t);
        void (* rptr)(struct character_adt_funtype_12_s *);
        struct character_adt_funtype_12_s * (* cptr)(struct character_adt_funtype_12_s *);};
typedef struct character_adt_funtype_12_ftbl_s * character_adt_funtype_12_ftbl_t;

struct character_adt_funtype_12_hashentry_s {uint32_t keyhash; character_adt_record_6_t key; ordstruct_adt__ordstruct_adt_t value;}; 
typedef struct character_adt_funtype_12_hashentry_s character_adt_funtype_12_hashentry_t;

struct character_adt_funtype_12_htbl_s {uint32_t size; uint32_t num_entries; character_adt_funtype_12_hashentry_t * data;}; 
typedef struct character_adt_funtype_12_htbl_s * character_adt_funtype_12_htbl_t;

struct character_adt_funtype_12_s {uint32_t count;
        character_adt_funtype_12_ftbl_t ftbl;
        character_adt_funtype_12_htbl_t htbl;};
typedef struct character_adt_funtype_12_s * character_adt_funtype_12_t;

extern void release_character_adt_funtype_12(character_adt_funtype_12_t x);

extern character_adt_funtype_12_t copy_character_adt_funtype_12(character_adt_funtype_12_t x);

extern bool_t equal_character_adt_funtype_12(character_adt_funtype_12_t x, character_adt_funtype_12_t y);

extern char* json_character_adt_funtype_12(character_adt_funtype_12_t x);




struct character_adt_closure_13_s;
        typedef struct character_adt_closure_13_s * character_adt_closure_13_t;

struct character_adt_closure_13_s {uint32_t count;
         character_adt_funtype_9_ftbl_t ftbl;
         character_adt_funtype_9_htbl_t htbl;
        character_adt_funtype_12_t fvar_1;};

ordstruct_adt__ordstruct_adt_t f_character_adt_closure_13(struct character_adt_closure_13_s * closure, uint32_t bvar);

ordstruct_adt__ordstruct_adt_t m_character_adt_closure_13(struct character_adt_closure_13_s * closure, uint32_t bvar);

extern ordstruct_adt__ordstruct_adt_t h_character_adt_closure_13(uint32_t ivar_4, character_adt_funtype_12_t ivar_1);

character_adt_closure_13_t new_character_adt_closure_13(void);

void release_character_adt_closure_13(character_adt_funtype_9_t closure);

character_adt_closure_13_t copy_character_adt_closure_13(character_adt_closure_13_t x);



extern bool_t r_character_adt__charp(character_adt__character_adt_t ivar_1);

extern character_adt__char_t update_character_adt__character_adt_code(character_adt__character_adt_t ivar_1, uint32_t ivar_3);

extern uint32_t character_adt__character_adt_code(character_adt__character_adt_t ivar_1);

extern character_adt__character_adt_t character_adt__char(uint32_t ivar_2);

extern character_adt_funtype_2_t character_adt__character_ord(void);

extern uint8_t character_adt__ord(uint32_t ivar_1);

extern bool_t character_adt__subterm(uint32_t ivar_1, uint32_t ivar_2);

extern bool_t character_adt__doublelessp(uint32_t ivar_1, uint32_t ivar_2);

extern character_adt_funtype_3_t character_adt__reduce_nat(character_adt_funtype_4_t ivar_1);

extern character_adt_funtype_3_t character_adt__REDUCE_nat(character_adt_funtype_7_t ivar_1);

extern character_adt_funtype_9_t character_adt__reduce_ordinal(character_adt_funtype_10_t ivar_1);

extern character_adt_funtype_9_t character_adt__REDUCE_ordinal(character_adt_funtype_12_t ivar_1);
#endif