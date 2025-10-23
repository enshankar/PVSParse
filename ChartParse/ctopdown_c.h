//Code generated using pvs2ir
#ifndef _ctopdown_h 
#define _ctopdown_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

#include "lex4_c.h"

#include "lex3_c.h"

#include "lex2_c.h"

#include "arrayCount_c.h"

#include "finite_sets_c.h"

#include "functions_c.h"

#include "nat_types_c.h"

#include "sets_c.h"

#include "min_nat_c.h"

#include "function_inverse_c.h"

#include "epsilons_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

//cc -O3 -Wall -o ctopdown -I /Users/e21660/shankar/pvs.git/src/groundeval/ pvslib.c  ctopdown_c.c lex4_c.c lex3_c.c lex2_c.c arrayCount_c.c finite_sets_c.c functions_c.c nat_types_c.c sets_c.c min_nat_c.c function_inverse_c.c epsilons_c.c integertypes_c.c exp2_c.c modulo_arithmetic_c.c euclidean_division_c.c ordinals_c.c ordstruct_adt_c.c -lgmp 

struct ctopdown_ent_adt_s {
         uint32_t count; 
        uint8_t ctopdown_ent_adt_index;};
typedef struct ctopdown_ent_adt_s * ctopdown_ent_adt_t;

extern ctopdown_ent_adt_t new_ctopdown_ent_adt(void);

extern void release_ctopdown_ent_adt(ctopdown_ent_adt_t x);

extern ctopdown_ent_adt_t copy_ctopdown_ent_adt(ctopdown_ent_adt_t x);

extern bool_t equal_ctopdown_ent_adt(ctopdown_ent_adt_t x, ctopdown_ent_adt_t y);

extern ctopdown_ent_adt_t update_ctopdown_ent_adt_ctopdown_ent_adt_index(ctopdown_ent_adt_t x, uint8_t v);



struct ctopdown_good_s {
        uint32_t count; 
        uint8_t ctopdown_ent_adt_index;
        mpz_t span;};
typedef struct ctopdown_good_s * ctopdown_good_t;

extern ctopdown_good_t new_ctopdown_good(void);

extern void release_ctopdown_good(ctopdown_good_t x);

extern ctopdown_good_t copy_ctopdown_good(ctopdown_good_t x);

extern bool_t equal_ctopdown_good(ctopdown_good_t x, ctopdown_good_t y);

extern ctopdown_good_t update_ctopdown_good_ctopdown_ent_adt_index(ctopdown_good_t x, uint8_t v);

extern ctopdown_good_t update_ctopdown_good_span(ctopdown_good_t x, mpz_t v);



struct ctopdown_funtype_2_s;
        typedef struct ctopdown_funtype_2_s * ctopdown_funtype_2_t;

struct ctopdown_funtype_2_ftbl_s {uint8_t (* fptr)(struct ctopdown_funtype_2_s *, ctopdown_ent_adt_t);
        uint8_t (* mptr)(struct ctopdown_funtype_2_s *, ctopdown_ent_adt_t);
        void (* rptr)(struct ctopdown_funtype_2_s *);
        struct ctopdown_funtype_2_s * (* cptr)(struct ctopdown_funtype_2_s *);};
typedef struct ctopdown_funtype_2_ftbl_s * ctopdown_funtype_2_ftbl_t;

struct ctopdown_funtype_2_hashentry_s {uint32_t keyhash; ctopdown_ent_adt_t key; uint8_t value;}; 
typedef struct ctopdown_funtype_2_hashentry_s ctopdown_funtype_2_hashentry_t;

struct ctopdown_funtype_2_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_2_hashentry_t * data;}; 
typedef struct ctopdown_funtype_2_htbl_s * ctopdown_funtype_2_htbl_t;

struct ctopdown_funtype_2_s {uint32_t count;
        ctopdown_funtype_2_ftbl_t ftbl;
        ctopdown_funtype_2_htbl_t htbl;};
typedef struct ctopdown_funtype_2_s * ctopdown_funtype_2_t;

extern void release_ctopdown_funtype_2(ctopdown_funtype_2_t x);

extern ctopdown_funtype_2_t copy_ctopdown_funtype_2(ctopdown_funtype_2_t x);



struct ctopdown_funtype_3_s;
        typedef struct ctopdown_funtype_3_s * ctopdown_funtype_3_t;

struct ctopdown_funtype_3_ftbl_s {mpz_ptr_t (* fptr)(struct ctopdown_funtype_3_s *, ctopdown_ent_adt_t);
        mpz_ptr_t (* mptr)(struct ctopdown_funtype_3_s *, ctopdown_ent_adt_t);
        void (* rptr)(struct ctopdown_funtype_3_s *);
        struct ctopdown_funtype_3_s * (* cptr)(struct ctopdown_funtype_3_s *);};
typedef struct ctopdown_funtype_3_ftbl_s * ctopdown_funtype_3_ftbl_t;

struct ctopdown_funtype_3_hashentry_s {uint32_t keyhash; ctopdown_ent_adt_t key; mpz_t value;}; 
typedef struct ctopdown_funtype_3_hashentry_s ctopdown_funtype_3_hashentry_t;

struct ctopdown_funtype_3_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_3_hashentry_t * data;}; 
typedef struct ctopdown_funtype_3_htbl_s * ctopdown_funtype_3_htbl_t;

struct ctopdown_funtype_3_s {uint32_t count;
        ctopdown_funtype_3_ftbl_t ftbl;
        ctopdown_funtype_3_htbl_t htbl;};
typedef struct ctopdown_funtype_3_s * ctopdown_funtype_3_t;

extern void release_ctopdown_funtype_3(ctopdown_funtype_3_t x);

extern ctopdown_funtype_3_t copy_ctopdown_funtype_3(ctopdown_funtype_3_t x);



struct ctopdown_funtype_4_s;
        typedef struct ctopdown_funtype_4_s * ctopdown_funtype_4_t;

struct ctopdown_funtype_4_ftbl_s {mpz_ptr_t (* fptr)(struct ctopdown_funtype_4_s *, mpz_t);
        mpz_ptr_t (* mptr)(struct ctopdown_funtype_4_s *, mpz_t);
        void (* rptr)(struct ctopdown_funtype_4_s *);
        struct ctopdown_funtype_4_s * (* cptr)(struct ctopdown_funtype_4_s *);};
typedef struct ctopdown_funtype_4_ftbl_s * ctopdown_funtype_4_ftbl_t;

struct ctopdown_funtype_4_hashentry_s {uint32_t keyhash; mpz_t key; mpz_t value;}; 
typedef struct ctopdown_funtype_4_hashentry_s ctopdown_funtype_4_hashentry_t;

struct ctopdown_funtype_4_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_4_hashentry_t * data;}; 
typedef struct ctopdown_funtype_4_htbl_s * ctopdown_funtype_4_htbl_t;

struct ctopdown_funtype_4_s {uint32_t count;
        ctopdown_funtype_4_ftbl_t ftbl;
        ctopdown_funtype_4_htbl_t htbl;};
typedef struct ctopdown_funtype_4_s * ctopdown_funtype_4_t;

extern void release_ctopdown_funtype_4(ctopdown_funtype_4_t x);

extern ctopdown_funtype_4_t copy_ctopdown_funtype_4(ctopdown_funtype_4_t x);




struct ctopdown_closure_5_s;
        typedef struct ctopdown_closure_5_s * ctopdown_closure_5_t;

struct ctopdown_closure_5_s {uint32_t count;
         ctopdown_funtype_3_ftbl_t ftbl;
         ctopdown_funtype_3_htbl_t htbl;
        ctopdown_funtype_4_t fvar_1;
        mpz_t fvar_2;
        mpz_t fvar_3;
        mpz_t fvar_4;};

mpz_ptr_t f_ctopdown_closure_5(struct ctopdown_closure_5_s * closure, ctopdown_ent_adt_t bvar);

mpz_ptr_t m_ctopdown_closure_5(struct ctopdown_closure_5_s * closure, ctopdown_ent_adt_t bvar);

extern mpz_ptr_t h_ctopdown_closure_5(ctopdown_ent_adt_t ivar_5, ctopdown_funtype_4_t ivar_4, mpz_t ivar_3, mpz_t ivar_2, mpz_t ivar_1);

extern ctopdown_closure_5_t new_ctopdown_closure_5(void);

extern void release_ctopdown_closure_5(ctopdown_funtype_3_t closure);

extern ctopdown_closure_5_t copy_ctopdown_closure_5(ctopdown_closure_5_t x);



struct ctopdown_record_6_s {
        uint32_t count; 
        mpz_t project_1;
        ctopdown_ent_adt_t project_2;};
typedef struct ctopdown_record_6_s * ctopdown_record_6_t;

extern ctopdown_record_6_t new_ctopdown_record_6(void);

extern void release_ctopdown_record_6(ctopdown_record_6_t x);

extern ctopdown_record_6_t copy_ctopdown_record_6(ctopdown_record_6_t x);

extern bool_t equal_ctopdown_record_6(ctopdown_record_6_t x, ctopdown_record_6_t y);

extern ctopdown_record_6_t update_ctopdown_record_6_project_1(ctopdown_record_6_t x, mpz_t v);

extern ctopdown_record_6_t update_ctopdown_record_6_project_2(ctopdown_record_6_t x, ctopdown_ent_adt_t v);



struct ctopdown_funtype_7_s;
        typedef struct ctopdown_funtype_7_s * ctopdown_funtype_7_t;

struct ctopdown_funtype_7_ftbl_s {mpz_ptr_t (* fptr)(struct ctopdown_funtype_7_s *, ctopdown_record_6_t);
        mpz_ptr_t (* mptr)(struct ctopdown_funtype_7_s *, mpz_t, ctopdown_ent_adt_t);
        void (* rptr)(struct ctopdown_funtype_7_s *);
        struct ctopdown_funtype_7_s * (* cptr)(struct ctopdown_funtype_7_s *);};
typedef struct ctopdown_funtype_7_ftbl_s * ctopdown_funtype_7_ftbl_t;

struct ctopdown_funtype_7_hashentry_s {uint32_t keyhash; ctopdown_record_6_t key; mpz_t value;}; 
typedef struct ctopdown_funtype_7_hashentry_s ctopdown_funtype_7_hashentry_t;

struct ctopdown_funtype_7_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_7_hashentry_t * data;}; 
typedef struct ctopdown_funtype_7_htbl_s * ctopdown_funtype_7_htbl_t;

struct ctopdown_funtype_7_s {uint32_t count;
        ctopdown_funtype_7_ftbl_t ftbl;
        ctopdown_funtype_7_htbl_t htbl;};
typedef struct ctopdown_funtype_7_s * ctopdown_funtype_7_t;

extern void release_ctopdown_funtype_7(ctopdown_funtype_7_t x);

extern ctopdown_funtype_7_t copy_ctopdown_funtype_7(ctopdown_funtype_7_t x);




struct ctopdown_closure_8_s;
        typedef struct ctopdown_closure_8_s * ctopdown_closure_8_t;

struct ctopdown_closure_8_s {uint32_t count;
         ctopdown_funtype_3_ftbl_t ftbl;
         ctopdown_funtype_3_htbl_t htbl;
        ctopdown_funtype_3_t fvar_1;
        ctopdown_funtype_7_t fvar_2;
        ctopdown_funtype_3_t fvar_3;
        ctopdown_funtype_3_t fvar_4;};

mpz_ptr_t f_ctopdown_closure_8(struct ctopdown_closure_8_s * closure, ctopdown_ent_adt_t bvar);

mpz_ptr_t m_ctopdown_closure_8(struct ctopdown_closure_8_s * closure, ctopdown_ent_adt_t bvar);

extern mpz_ptr_t h_ctopdown_closure_8(ctopdown_ent_adt_t ivar_5, ctopdown_funtype_3_t ivar_3, ctopdown_funtype_7_t ivar_4, ctopdown_funtype_3_t ivar_2, ctopdown_funtype_3_t ivar_1);

extern ctopdown_closure_8_t new_ctopdown_closure_8(void);

extern void release_ctopdown_closure_8(ctopdown_funtype_3_t closure);

extern ctopdown_closure_8_t copy_ctopdown_closure_8(ctopdown_closure_8_t x);



struct ctopdown_funtype_9_s;
        typedef struct ctopdown_funtype_9_s * ctopdown_funtype_9_t;

struct ctopdown_funtype_9_ftbl_s {ordstruct_adt_ordstruct_adt_t (* fptr)(struct ctopdown_funtype_9_s *, ctopdown_ent_adt_t);
        ordstruct_adt_ordstruct_adt_t (* mptr)(struct ctopdown_funtype_9_s *, ctopdown_ent_adt_t);
        void (* rptr)(struct ctopdown_funtype_9_s *);
        struct ctopdown_funtype_9_s * (* cptr)(struct ctopdown_funtype_9_s *);};
typedef struct ctopdown_funtype_9_ftbl_s * ctopdown_funtype_9_ftbl_t;

struct ctopdown_funtype_9_hashentry_s {uint32_t keyhash; ctopdown_ent_adt_t key; ordstruct_adt_ordstruct_adt_t value;}; 
typedef struct ctopdown_funtype_9_hashentry_s ctopdown_funtype_9_hashentry_t;

struct ctopdown_funtype_9_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_9_hashentry_t * data;}; 
typedef struct ctopdown_funtype_9_htbl_s * ctopdown_funtype_9_htbl_t;

struct ctopdown_funtype_9_s {uint32_t count;
        ctopdown_funtype_9_ftbl_t ftbl;
        ctopdown_funtype_9_htbl_t htbl;};
typedef struct ctopdown_funtype_9_s * ctopdown_funtype_9_t;

extern void release_ctopdown_funtype_9(ctopdown_funtype_9_t x);

extern ctopdown_funtype_9_t copy_ctopdown_funtype_9(ctopdown_funtype_9_t x);



struct ctopdown_funtype_10_s;
        typedef struct ctopdown_funtype_10_s * ctopdown_funtype_10_t;

struct ctopdown_funtype_10_ftbl_s {ordstruct_adt_ordstruct_adt_t (* fptr)(struct ctopdown_funtype_10_s *, mpz_t);
        ordstruct_adt_ordstruct_adt_t (* mptr)(struct ctopdown_funtype_10_s *, mpz_t);
        void (* rptr)(struct ctopdown_funtype_10_s *);
        struct ctopdown_funtype_10_s * (* cptr)(struct ctopdown_funtype_10_s *);};
typedef struct ctopdown_funtype_10_ftbl_s * ctopdown_funtype_10_ftbl_t;

struct ctopdown_funtype_10_hashentry_s {uint32_t keyhash; mpz_t key; ordstruct_adt_ordstruct_adt_t value;}; 
typedef struct ctopdown_funtype_10_hashentry_s ctopdown_funtype_10_hashentry_t;

struct ctopdown_funtype_10_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_10_hashentry_t * data;}; 
typedef struct ctopdown_funtype_10_htbl_s * ctopdown_funtype_10_htbl_t;

struct ctopdown_funtype_10_s {uint32_t count;
        ctopdown_funtype_10_ftbl_t ftbl;
        ctopdown_funtype_10_htbl_t htbl;};
typedef struct ctopdown_funtype_10_s * ctopdown_funtype_10_t;

extern void release_ctopdown_funtype_10(ctopdown_funtype_10_t x);

extern ctopdown_funtype_10_t copy_ctopdown_funtype_10(ctopdown_funtype_10_t x);




struct ctopdown_closure_11_s;
        typedef struct ctopdown_closure_11_s * ctopdown_closure_11_t;

struct ctopdown_closure_11_s {uint32_t count;
         ctopdown_funtype_9_ftbl_t ftbl;
         ctopdown_funtype_9_htbl_t htbl;
        ctopdown_funtype_10_t fvar_1;
        ordstruct_adt_ordstruct_adt_t fvar_2;
        ordstruct_adt_ordstruct_adt_t fvar_3;
        ordstruct_adt_ordstruct_adt_t fvar_4;};

ordstruct_adt_ordstruct_adt_t f_ctopdown_closure_11(struct ctopdown_closure_11_s * closure, ctopdown_ent_adt_t bvar);

ordstruct_adt_ordstruct_adt_t m_ctopdown_closure_11(struct ctopdown_closure_11_s * closure, ctopdown_ent_adt_t bvar);

extern ordstruct_adt_ordstruct_adt_t h_ctopdown_closure_11(ctopdown_ent_adt_t ivar_5, ctopdown_funtype_10_t ivar_4, ordstruct_adt_ordstruct_adt_t ivar_3, ordstruct_adt_ordstruct_adt_t ivar_2, ordstruct_adt_ordstruct_adt_t ivar_1);

extern ctopdown_closure_11_t new_ctopdown_closure_11(void);

extern void release_ctopdown_closure_11(ctopdown_funtype_9_t closure);

extern ctopdown_closure_11_t copy_ctopdown_closure_11(ctopdown_closure_11_t x);



struct ctopdown_funtype_12_s;
        typedef struct ctopdown_funtype_12_s * ctopdown_funtype_12_t;

struct ctopdown_funtype_12_ftbl_s {ordstruct_adt_ordstruct_adt_t (* fptr)(struct ctopdown_funtype_12_s *, ctopdown_record_6_t);
        ordstruct_adt_ordstruct_adt_t (* mptr)(struct ctopdown_funtype_12_s *, mpz_t, ctopdown_ent_adt_t);
        void (* rptr)(struct ctopdown_funtype_12_s *);
        struct ctopdown_funtype_12_s * (* cptr)(struct ctopdown_funtype_12_s *);};
typedef struct ctopdown_funtype_12_ftbl_s * ctopdown_funtype_12_ftbl_t;

struct ctopdown_funtype_12_hashentry_s {uint32_t keyhash; ctopdown_record_6_t key; ordstruct_adt_ordstruct_adt_t value;}; 
typedef struct ctopdown_funtype_12_hashentry_s ctopdown_funtype_12_hashentry_t;

struct ctopdown_funtype_12_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_12_hashentry_t * data;}; 
typedef struct ctopdown_funtype_12_htbl_s * ctopdown_funtype_12_htbl_t;

struct ctopdown_funtype_12_s {uint32_t count;
        ctopdown_funtype_12_ftbl_t ftbl;
        ctopdown_funtype_12_htbl_t htbl;};
typedef struct ctopdown_funtype_12_s * ctopdown_funtype_12_t;

extern void release_ctopdown_funtype_12(ctopdown_funtype_12_t x);

extern ctopdown_funtype_12_t copy_ctopdown_funtype_12(ctopdown_funtype_12_t x);




struct ctopdown_closure_13_s;
        typedef struct ctopdown_closure_13_s * ctopdown_closure_13_t;

struct ctopdown_closure_13_s {uint32_t count;
         ctopdown_funtype_9_ftbl_t ftbl;
         ctopdown_funtype_9_htbl_t htbl;
        ctopdown_funtype_9_t fvar_1;
        ctopdown_funtype_12_t fvar_2;
        ctopdown_funtype_9_t fvar_3;
        ctopdown_funtype_9_t fvar_4;};

ordstruct_adt_ordstruct_adt_t f_ctopdown_closure_13(struct ctopdown_closure_13_s * closure, ctopdown_ent_adt_t bvar);

ordstruct_adt_ordstruct_adt_t m_ctopdown_closure_13(struct ctopdown_closure_13_s * closure, ctopdown_ent_adt_t bvar);

extern ordstruct_adt_ordstruct_adt_t h_ctopdown_closure_13(ctopdown_ent_adt_t ivar_5, ctopdown_funtype_9_t ivar_3, ctopdown_funtype_12_t ivar_4, ctopdown_funtype_9_t ivar_2, ctopdown_funtype_9_t ivar_1);

extern ctopdown_closure_13_t new_ctopdown_closure_13(void);

extern void release_ctopdown_closure_13(ctopdown_funtype_9_t closure);

extern ctopdown_closure_13_t copy_ctopdown_closure_13(ctopdown_closure_13_t x);



struct ctopdown_peg_adt_s {
         uint32_t count; 
        uint8_t ctopdown_peg_adt_index;};
typedef struct ctopdown_peg_adt_s * ctopdown_peg_adt_t;

extern ctopdown_peg_adt_t new_ctopdown_peg_adt(void);

extern void release_ctopdown_peg_adt(ctopdown_peg_adt_t x);

extern ctopdown_peg_adt_t copy_ctopdown_peg_adt(ctopdown_peg_adt_t x);

extern bool_t equal_ctopdown_peg_adt(ctopdown_peg_adt_t x, ctopdown_peg_adt_t y);

extern ctopdown_peg_adt_t update_ctopdown_peg_adt_ctopdown_peg_adt_index(ctopdown_peg_adt_t x, uint8_t v);



struct ctopdown_array_15_s { uint32_t count;
        uint16_t size;
         bool_t elems[]; };
typedef struct ctopdown_array_15_s * ctopdown_array_15_t;

extern ctopdown_array_15_t new_ctopdown_array_15(uint16_t size);

extern void release_ctopdown_array_15(ctopdown_array_15_t x);

extern ctopdown_array_15_t copy_ctopdown_array_15(ctopdown_array_15_t x);

extern bool_t equal_ctopdown_array_15(ctopdown_array_15_t x, ctopdown_array_15_t y);

extern ctopdown_array_15_t update_ctopdown_array_15(ctopdown_array_15_t x, uint32_t i, bool_t v);



struct ctopdown_any_s {
        uint32_t count; 
        uint8_t ctopdown_peg_adt_index;
        ctopdown_array_15_t p;};
typedef struct ctopdown_any_s * ctopdown_any_t;

extern ctopdown_any_t new_ctopdown_any(void);

extern void release_ctopdown_any(ctopdown_any_t x);

extern ctopdown_any_t copy_ctopdown_any(ctopdown_any_t x);

extern bool_t equal_ctopdown_any(ctopdown_any_t x, ctopdown_any_t y);

extern ctopdown_any_t update_ctopdown_any_ctopdown_peg_adt_index(ctopdown_any_t x, uint8_t v);

extern ctopdown_any_t update_ctopdown_any_p(ctopdown_any_t x, ctopdown_array_15_t v);



struct ctopdown_terminal_s {
        uint32_t count; 
        uint8_t ctopdown_peg_adt_index;
        uint8_t a;};
typedef struct ctopdown_terminal_s * ctopdown_terminal_t;

extern ctopdown_terminal_t new_ctopdown_terminal(void);

extern void release_ctopdown_terminal(ctopdown_terminal_t x);

extern ctopdown_terminal_t copy_ctopdown_terminal(ctopdown_terminal_t x);

extern bool_t equal_ctopdown_terminal(ctopdown_terminal_t x, ctopdown_terminal_t y);

extern ctopdown_terminal_t update_ctopdown_terminal_ctopdown_peg_adt_index(ctopdown_terminal_t x, uint8_t v);

extern ctopdown_terminal_t update_ctopdown_terminal_a(ctopdown_terminal_t x, uint8_t v);



struct ctopdown_concat_s {
        uint32_t count; 
        uint8_t ctopdown_peg_adt_index;
        uint8_t e1;
        uint8_t e2;};
typedef struct ctopdown_concat_s * ctopdown_concat_t;

extern ctopdown_concat_t new_ctopdown_concat(void);

extern void release_ctopdown_concat(ctopdown_concat_t x);

extern ctopdown_concat_t copy_ctopdown_concat(ctopdown_concat_t x);

extern bool_t equal_ctopdown_concat(ctopdown_concat_t x, ctopdown_concat_t y);

extern ctopdown_concat_t update_ctopdown_concat_ctopdown_peg_adt_index(ctopdown_concat_t x, uint8_t v);

extern ctopdown_concat_t update_ctopdown_concat_e1(ctopdown_concat_t x, uint8_t v);

extern ctopdown_concat_t update_ctopdown_concat_e2(ctopdown_concat_t x, uint8_t v);



struct ctopdown_choice_s {
        uint32_t count; 
        uint8_t ctopdown_peg_adt_index;
        uint8_t e1;
        uint8_t e2;};
typedef struct ctopdown_choice_s * ctopdown_choice_t;

extern ctopdown_choice_t new_ctopdown_choice(void);

extern void release_ctopdown_choice(ctopdown_choice_t x);

extern ctopdown_choice_t copy_ctopdown_choice(ctopdown_choice_t x);

extern bool_t equal_ctopdown_choice(ctopdown_choice_t x, ctopdown_choice_t y);

extern ctopdown_choice_t update_ctopdown_choice_ctopdown_peg_adt_index(ctopdown_choice_t x, uint8_t v);

extern ctopdown_choice_t update_ctopdown_choice_e1(ctopdown_choice_t x, uint8_t v);

extern ctopdown_choice_t update_ctopdown_choice_e2(ctopdown_choice_t x, uint8_t v);



struct ctopdown_check_s {
        uint32_t count; 
        uint8_t ctopdown_peg_adt_index;
        uint8_t e;};
typedef struct ctopdown_check_s * ctopdown_check_t;

extern ctopdown_check_t new_ctopdown_check(void);

extern void release_ctopdown_check(ctopdown_check_t x);

extern ctopdown_check_t copy_ctopdown_check(ctopdown_check_t x);

extern bool_t equal_ctopdown_check(ctopdown_check_t x, ctopdown_check_t y);

extern ctopdown_check_t update_ctopdown_check_ctopdown_peg_adt_index(ctopdown_check_t x, uint8_t v);

extern ctopdown_check_t update_ctopdown_check_e(ctopdown_check_t x, uint8_t v);



struct ctopdown_neg_s {
        uint32_t count; 
        uint8_t ctopdown_peg_adt_index;
        uint8_t e;};
typedef struct ctopdown_neg_s * ctopdown_neg_t;

extern ctopdown_neg_t new_ctopdown_neg(void);

extern void release_ctopdown_neg(ctopdown_neg_t x);

extern ctopdown_neg_t copy_ctopdown_neg(ctopdown_neg_t x);

extern bool_t equal_ctopdown_neg(ctopdown_neg_t x, ctopdown_neg_t y);

extern ctopdown_neg_t update_ctopdown_neg_ctopdown_peg_adt_index(ctopdown_neg_t x, uint8_t v);

extern ctopdown_neg_t update_ctopdown_neg_e(ctopdown_neg_t x, uint8_t v);



struct ctopdown_funtype_22_s;
        typedef struct ctopdown_funtype_22_s * ctopdown_funtype_22_t;

struct ctopdown_funtype_22_ftbl_s {uint8_t (* fptr)(struct ctopdown_funtype_22_s *, ctopdown_peg_adt_t);
        uint8_t (* mptr)(struct ctopdown_funtype_22_s *, ctopdown_peg_adt_t);
        void (* rptr)(struct ctopdown_funtype_22_s *);
        struct ctopdown_funtype_22_s * (* cptr)(struct ctopdown_funtype_22_s *);};
typedef struct ctopdown_funtype_22_ftbl_s * ctopdown_funtype_22_ftbl_t;

struct ctopdown_funtype_22_hashentry_s {uint32_t keyhash; ctopdown_peg_adt_t key; uint8_t value;}; 
typedef struct ctopdown_funtype_22_hashentry_s ctopdown_funtype_22_hashentry_t;

struct ctopdown_funtype_22_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_22_hashentry_t * data;}; 
typedef struct ctopdown_funtype_22_htbl_s * ctopdown_funtype_22_htbl_t;

struct ctopdown_funtype_22_s {uint32_t count;
        ctopdown_funtype_22_ftbl_t ftbl;
        ctopdown_funtype_22_htbl_t htbl;};
typedef struct ctopdown_funtype_22_s * ctopdown_funtype_22_t;

extern void release_ctopdown_funtype_22(ctopdown_funtype_22_t x);

extern ctopdown_funtype_22_t copy_ctopdown_funtype_22(ctopdown_funtype_22_t x);



struct ctopdown_funtype_23_s;
        typedef struct ctopdown_funtype_23_s * ctopdown_funtype_23_t;

struct ctopdown_funtype_23_ftbl_s {mpz_ptr_t (* fptr)(struct ctopdown_funtype_23_s *, ctopdown_peg_adt_t);
        mpz_ptr_t (* mptr)(struct ctopdown_funtype_23_s *, ctopdown_peg_adt_t);
        void (* rptr)(struct ctopdown_funtype_23_s *);
        struct ctopdown_funtype_23_s * (* cptr)(struct ctopdown_funtype_23_s *);};
typedef struct ctopdown_funtype_23_ftbl_s * ctopdown_funtype_23_ftbl_t;

struct ctopdown_funtype_23_hashentry_s {uint32_t keyhash; ctopdown_peg_adt_t key; mpz_t value;}; 
typedef struct ctopdown_funtype_23_hashentry_s ctopdown_funtype_23_hashentry_t;

struct ctopdown_funtype_23_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_23_hashentry_t * data;}; 
typedef struct ctopdown_funtype_23_htbl_s * ctopdown_funtype_23_htbl_t;

struct ctopdown_funtype_23_s {uint32_t count;
        ctopdown_funtype_23_ftbl_t ftbl;
        ctopdown_funtype_23_htbl_t htbl;};
typedef struct ctopdown_funtype_23_s * ctopdown_funtype_23_t;

extern void release_ctopdown_funtype_23(ctopdown_funtype_23_t x);

extern ctopdown_funtype_23_t copy_ctopdown_funtype_23(ctopdown_funtype_23_t x);



struct ctopdown_funtype_24_s;
        typedef struct ctopdown_funtype_24_s * ctopdown_funtype_24_t;

struct ctopdown_funtype_24_ftbl_s {mpz_ptr_t (* fptr)(struct ctopdown_funtype_24_s *, ctopdown_array_15_t);
        mpz_ptr_t (* mptr)(struct ctopdown_funtype_24_s *, ctopdown_array_15_t);
        void (* rptr)(struct ctopdown_funtype_24_s *);
        struct ctopdown_funtype_24_s * (* cptr)(struct ctopdown_funtype_24_s *);};
typedef struct ctopdown_funtype_24_ftbl_s * ctopdown_funtype_24_ftbl_t;

struct ctopdown_funtype_24_hashentry_s {uint32_t keyhash; ctopdown_array_15_t key; mpz_t value;}; 
typedef struct ctopdown_funtype_24_hashentry_s ctopdown_funtype_24_hashentry_t;

struct ctopdown_funtype_24_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_24_hashentry_t * data;}; 
typedef struct ctopdown_funtype_24_htbl_s * ctopdown_funtype_24_htbl_t;

struct ctopdown_funtype_24_s {uint32_t count;
        ctopdown_funtype_24_ftbl_t ftbl;
        ctopdown_funtype_24_htbl_t htbl;};
typedef struct ctopdown_funtype_24_s * ctopdown_funtype_24_t;

extern void release_ctopdown_funtype_24(ctopdown_funtype_24_t x);

extern ctopdown_funtype_24_t copy_ctopdown_funtype_24(ctopdown_funtype_24_t x);



struct ctopdown_array_25_s { uint32_t count;
        uint16_t size;
         mpz_t elems[]; };
typedef struct ctopdown_array_25_s * ctopdown_array_25_t;

extern ctopdown_array_25_t new_ctopdown_array_25(uint16_t size);

extern void release_ctopdown_array_25(ctopdown_array_25_t x);

extern ctopdown_array_25_t copy_ctopdown_array_25(ctopdown_array_25_t x);

extern bool_t equal_ctopdown_array_25(ctopdown_array_25_t x, ctopdown_array_25_t y);

extern ctopdown_array_25_t update_ctopdown_array_25(ctopdown_array_25_t x, uint32_t i, mpz_t v);



struct ctopdown_record_26_s {
        uint32_t count; 
        uint8_t project_1;
        uint8_t project_2;};
typedef struct ctopdown_record_26_s * ctopdown_record_26_t;

extern ctopdown_record_26_t new_ctopdown_record_26(void);

extern void release_ctopdown_record_26(ctopdown_record_26_t x);

extern ctopdown_record_26_t copy_ctopdown_record_26(ctopdown_record_26_t x);

extern bool_t equal_ctopdown_record_26(ctopdown_record_26_t x, ctopdown_record_26_t y);

extern ctopdown_record_26_t update_ctopdown_record_26_project_1(ctopdown_record_26_t x, uint8_t v);

extern ctopdown_record_26_t update_ctopdown_record_26_project_2(ctopdown_record_26_t x, uint8_t v);



struct ctopdown_funtype_27_s;
        typedef struct ctopdown_funtype_27_s * ctopdown_funtype_27_t;

struct ctopdown_funtype_27_ftbl_s {mpz_ptr_t (* fptr)(struct ctopdown_funtype_27_s *, ctopdown_record_26_t);
        mpz_ptr_t (* mptr)(struct ctopdown_funtype_27_s *, uint8_t, uint8_t);
        void (* rptr)(struct ctopdown_funtype_27_s *);
        struct ctopdown_funtype_27_s * (* cptr)(struct ctopdown_funtype_27_s *);};
typedef struct ctopdown_funtype_27_ftbl_s * ctopdown_funtype_27_ftbl_t;

struct ctopdown_funtype_27_hashentry_s {uint32_t keyhash; ctopdown_record_26_t key; mpz_t value;}; 
typedef struct ctopdown_funtype_27_hashentry_s ctopdown_funtype_27_hashentry_t;

struct ctopdown_funtype_27_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_27_hashentry_t * data;}; 
typedef struct ctopdown_funtype_27_htbl_s * ctopdown_funtype_27_htbl_t;

struct ctopdown_funtype_27_s {uint32_t count;
        ctopdown_funtype_27_ftbl_t ftbl;
        ctopdown_funtype_27_htbl_t htbl;};
typedef struct ctopdown_funtype_27_s * ctopdown_funtype_27_t;

extern void release_ctopdown_funtype_27(ctopdown_funtype_27_t x);

extern ctopdown_funtype_27_t copy_ctopdown_funtype_27(ctopdown_funtype_27_t x);




struct ctopdown_closure_28_s;
        typedef struct ctopdown_closure_28_s * ctopdown_closure_28_t;

struct ctopdown_closure_28_s {uint32_t count;
         ctopdown_funtype_23_ftbl_t ftbl;
         ctopdown_funtype_23_htbl_t htbl;
        ctopdown_array_25_t fvar_1;
        ctopdown_array_25_t fvar_2;
        ctopdown_funtype_27_t fvar_3;
        ctopdown_funtype_27_t fvar_4;
        ctopdown_array_25_t fvar_5;
        ctopdown_funtype_24_t fvar_6;
        mpz_t fvar_7;
        mpz_t fvar_8;};

mpz_ptr_t f_ctopdown_closure_28(struct ctopdown_closure_28_s * closure, ctopdown_peg_adt_t bvar);

mpz_ptr_t m_ctopdown_closure_28(struct ctopdown_closure_28_s * closure, ctopdown_peg_adt_t bvar);

extern mpz_ptr_t h_ctopdown_closure_28(ctopdown_peg_adt_t ivar_9, ctopdown_array_25_t ivar_7, ctopdown_array_25_t ivar_8, ctopdown_funtype_27_t ivar_6, ctopdown_funtype_27_t ivar_5, ctopdown_array_25_t ivar_4, ctopdown_funtype_24_t ivar_3, mpz_t ivar_2, mpz_t ivar_1);

extern ctopdown_closure_28_t new_ctopdown_closure_28(void);

extern void release_ctopdown_closure_28(ctopdown_funtype_23_t closure);

extern ctopdown_closure_28_t copy_ctopdown_closure_28(ctopdown_closure_28_t x);



struct ctopdown_record_29_s {
        uint32_t count; 
        ctopdown_array_15_t project_1;
        ctopdown_peg_adt_t project_2;};
typedef struct ctopdown_record_29_s * ctopdown_record_29_t;

extern ctopdown_record_29_t new_ctopdown_record_29(void);

extern void release_ctopdown_record_29(ctopdown_record_29_t x);

extern ctopdown_record_29_t copy_ctopdown_record_29(ctopdown_record_29_t x);

extern bool_t equal_ctopdown_record_29(ctopdown_record_29_t x, ctopdown_record_29_t y);

extern ctopdown_record_29_t update_ctopdown_record_29_project_1(ctopdown_record_29_t x, ctopdown_array_15_t v);

extern ctopdown_record_29_t update_ctopdown_record_29_project_2(ctopdown_record_29_t x, ctopdown_peg_adt_t v);



struct ctopdown_funtype_30_s;
        typedef struct ctopdown_funtype_30_s * ctopdown_funtype_30_t;

struct ctopdown_funtype_30_ftbl_s {mpz_ptr_t (* fptr)(struct ctopdown_funtype_30_s *, ctopdown_record_29_t);
        mpz_ptr_t (* mptr)(struct ctopdown_funtype_30_s *, ctopdown_array_15_t, ctopdown_peg_adt_t);
        void (* rptr)(struct ctopdown_funtype_30_s *);
        struct ctopdown_funtype_30_s * (* cptr)(struct ctopdown_funtype_30_s *);};
typedef struct ctopdown_funtype_30_ftbl_s * ctopdown_funtype_30_ftbl_t;

struct ctopdown_funtype_30_hashentry_s {uint32_t keyhash; ctopdown_record_29_t key; mpz_t value;}; 
typedef struct ctopdown_funtype_30_hashentry_s ctopdown_funtype_30_hashentry_t;

struct ctopdown_funtype_30_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_30_hashentry_t * data;}; 
typedef struct ctopdown_funtype_30_htbl_s * ctopdown_funtype_30_htbl_t;

struct ctopdown_funtype_30_s {uint32_t count;
        ctopdown_funtype_30_ftbl_t ftbl;
        ctopdown_funtype_30_htbl_t htbl;};
typedef struct ctopdown_funtype_30_s * ctopdown_funtype_30_t;

extern void release_ctopdown_funtype_30(ctopdown_funtype_30_t x);

extern ctopdown_funtype_30_t copy_ctopdown_funtype_30(ctopdown_funtype_30_t x);



struct ctopdown_record_31_s {
        uint32_t count; 
        uint8_t project_1;
        ctopdown_peg_adt_t project_2;};
typedef struct ctopdown_record_31_s * ctopdown_record_31_t;

extern ctopdown_record_31_t new_ctopdown_record_31(void);

extern void release_ctopdown_record_31(ctopdown_record_31_t x);

extern ctopdown_record_31_t copy_ctopdown_record_31(ctopdown_record_31_t x);

extern bool_t equal_ctopdown_record_31(ctopdown_record_31_t x, ctopdown_record_31_t y);

extern ctopdown_record_31_t update_ctopdown_record_31_project_1(ctopdown_record_31_t x, uint8_t v);

extern ctopdown_record_31_t update_ctopdown_record_31_project_2(ctopdown_record_31_t x, ctopdown_peg_adt_t v);



struct ctopdown_funtype_32_s;
        typedef struct ctopdown_funtype_32_s * ctopdown_funtype_32_t;

struct ctopdown_funtype_32_ftbl_s {mpz_ptr_t (* fptr)(struct ctopdown_funtype_32_s *, ctopdown_record_31_t);
        mpz_ptr_t (* mptr)(struct ctopdown_funtype_32_s *, uint8_t, ctopdown_peg_adt_t);
        void (* rptr)(struct ctopdown_funtype_32_s *);
        struct ctopdown_funtype_32_s * (* cptr)(struct ctopdown_funtype_32_s *);};
typedef struct ctopdown_funtype_32_ftbl_s * ctopdown_funtype_32_ftbl_t;

struct ctopdown_funtype_32_hashentry_s {uint32_t keyhash; ctopdown_record_31_t key; mpz_t value;}; 
typedef struct ctopdown_funtype_32_hashentry_s ctopdown_funtype_32_hashentry_t;

struct ctopdown_funtype_32_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_32_hashentry_t * data;}; 
typedef struct ctopdown_funtype_32_htbl_s * ctopdown_funtype_32_htbl_t;

struct ctopdown_funtype_32_s {uint32_t count;
        ctopdown_funtype_32_ftbl_t ftbl;
        ctopdown_funtype_32_htbl_t htbl;};
typedef struct ctopdown_funtype_32_s * ctopdown_funtype_32_t;

extern void release_ctopdown_funtype_32(ctopdown_funtype_32_t x);

extern ctopdown_funtype_32_t copy_ctopdown_funtype_32(ctopdown_funtype_32_t x);



struct ctopdown_record_33_s {
        uint32_t count; 
        uint8_t project_1;
        uint8_t project_2;
        ctopdown_peg_adt_t project_3;};
typedef struct ctopdown_record_33_s * ctopdown_record_33_t;

extern ctopdown_record_33_t new_ctopdown_record_33(void);

extern void release_ctopdown_record_33(ctopdown_record_33_t x);

extern ctopdown_record_33_t copy_ctopdown_record_33(ctopdown_record_33_t x);

extern bool_t equal_ctopdown_record_33(ctopdown_record_33_t x, ctopdown_record_33_t y);

extern ctopdown_record_33_t update_ctopdown_record_33_project_1(ctopdown_record_33_t x, uint8_t v);

extern ctopdown_record_33_t update_ctopdown_record_33_project_2(ctopdown_record_33_t x, uint8_t v);

extern ctopdown_record_33_t update_ctopdown_record_33_project_3(ctopdown_record_33_t x, ctopdown_peg_adt_t v);



struct ctopdown_funtype_34_s;
        typedef struct ctopdown_funtype_34_s * ctopdown_funtype_34_t;

struct ctopdown_funtype_34_ftbl_s {mpz_ptr_t (* fptr)(struct ctopdown_funtype_34_s *, ctopdown_record_33_t);
        mpz_ptr_t (* mptr)(struct ctopdown_funtype_34_s *, uint8_t, uint8_t, ctopdown_peg_adt_t);
        void (* rptr)(struct ctopdown_funtype_34_s *);
        struct ctopdown_funtype_34_s * (* cptr)(struct ctopdown_funtype_34_s *);};
typedef struct ctopdown_funtype_34_ftbl_s * ctopdown_funtype_34_ftbl_t;

struct ctopdown_funtype_34_hashentry_s {uint32_t keyhash; ctopdown_record_33_t key; mpz_t value;}; 
typedef struct ctopdown_funtype_34_hashentry_s ctopdown_funtype_34_hashentry_t;

struct ctopdown_funtype_34_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_34_hashentry_t * data;}; 
typedef struct ctopdown_funtype_34_htbl_s * ctopdown_funtype_34_htbl_t;

struct ctopdown_funtype_34_s {uint32_t count;
        ctopdown_funtype_34_ftbl_t ftbl;
        ctopdown_funtype_34_htbl_t htbl;};
typedef struct ctopdown_funtype_34_s * ctopdown_funtype_34_t;

extern void release_ctopdown_funtype_34(ctopdown_funtype_34_t x);

extern ctopdown_funtype_34_t copy_ctopdown_funtype_34(ctopdown_funtype_34_t x);




struct ctopdown_closure_35_s;
        typedef struct ctopdown_closure_35_s * ctopdown_closure_35_t;

struct ctopdown_closure_35_s {uint32_t count;
         ctopdown_funtype_23_ftbl_t ftbl;
         ctopdown_funtype_23_htbl_t htbl;
        ctopdown_funtype_32_t fvar_1;
        ctopdown_funtype_32_t fvar_2;
        ctopdown_funtype_34_t fvar_3;
        ctopdown_funtype_34_t fvar_4;
        ctopdown_funtype_32_t fvar_5;
        ctopdown_funtype_30_t fvar_6;
        ctopdown_funtype_23_t fvar_7;
        ctopdown_funtype_23_t fvar_8;};

mpz_ptr_t f_ctopdown_closure_35(struct ctopdown_closure_35_s * closure, ctopdown_peg_adt_t bvar);

mpz_ptr_t m_ctopdown_closure_35(struct ctopdown_closure_35_s * closure, ctopdown_peg_adt_t bvar);

extern mpz_ptr_t h_ctopdown_closure_35(ctopdown_peg_adt_t ivar_9, ctopdown_funtype_32_t ivar_7, ctopdown_funtype_32_t ivar_8, ctopdown_funtype_34_t ivar_6, ctopdown_funtype_34_t ivar_5, ctopdown_funtype_32_t ivar_4, ctopdown_funtype_30_t ivar_3, ctopdown_funtype_23_t ivar_2, ctopdown_funtype_23_t ivar_1);

extern ctopdown_closure_35_t new_ctopdown_closure_35(void);

extern void release_ctopdown_closure_35(ctopdown_funtype_23_t closure);

extern ctopdown_closure_35_t copy_ctopdown_closure_35(ctopdown_closure_35_t x);



struct ctopdown_funtype_36_s;
        typedef struct ctopdown_funtype_36_s * ctopdown_funtype_36_t;

struct ctopdown_funtype_36_ftbl_s {ordstruct_adt_ordstruct_adt_t (* fptr)(struct ctopdown_funtype_36_s *, ctopdown_peg_adt_t);
        ordstruct_adt_ordstruct_adt_t (* mptr)(struct ctopdown_funtype_36_s *, ctopdown_peg_adt_t);
        void (* rptr)(struct ctopdown_funtype_36_s *);
        struct ctopdown_funtype_36_s * (* cptr)(struct ctopdown_funtype_36_s *);};
typedef struct ctopdown_funtype_36_ftbl_s * ctopdown_funtype_36_ftbl_t;

struct ctopdown_funtype_36_hashentry_s {uint32_t keyhash; ctopdown_peg_adt_t key; ordstruct_adt_ordstruct_adt_t value;}; 
typedef struct ctopdown_funtype_36_hashentry_s ctopdown_funtype_36_hashentry_t;

struct ctopdown_funtype_36_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_36_hashentry_t * data;}; 
typedef struct ctopdown_funtype_36_htbl_s * ctopdown_funtype_36_htbl_t;

struct ctopdown_funtype_36_s {uint32_t count;
        ctopdown_funtype_36_ftbl_t ftbl;
        ctopdown_funtype_36_htbl_t htbl;};
typedef struct ctopdown_funtype_36_s * ctopdown_funtype_36_t;

extern void release_ctopdown_funtype_36(ctopdown_funtype_36_t x);

extern ctopdown_funtype_36_t copy_ctopdown_funtype_36(ctopdown_funtype_36_t x);



struct ctopdown_funtype_37_s;
        typedef struct ctopdown_funtype_37_s * ctopdown_funtype_37_t;

struct ctopdown_funtype_37_ftbl_s {ordstruct_adt_ordstruct_adt_t (* fptr)(struct ctopdown_funtype_37_s *, ctopdown_array_15_t);
        ordstruct_adt_ordstruct_adt_t (* mptr)(struct ctopdown_funtype_37_s *, ctopdown_array_15_t);
        void (* rptr)(struct ctopdown_funtype_37_s *);
        struct ctopdown_funtype_37_s * (* cptr)(struct ctopdown_funtype_37_s *);};
typedef struct ctopdown_funtype_37_ftbl_s * ctopdown_funtype_37_ftbl_t;

struct ctopdown_funtype_37_hashentry_s {uint32_t keyhash; ctopdown_array_15_t key; ordstruct_adt_ordstruct_adt_t value;}; 
typedef struct ctopdown_funtype_37_hashentry_s ctopdown_funtype_37_hashentry_t;

struct ctopdown_funtype_37_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_37_hashentry_t * data;}; 
typedef struct ctopdown_funtype_37_htbl_s * ctopdown_funtype_37_htbl_t;

struct ctopdown_funtype_37_s {uint32_t count;
        ctopdown_funtype_37_ftbl_t ftbl;
        ctopdown_funtype_37_htbl_t htbl;};
typedef struct ctopdown_funtype_37_s * ctopdown_funtype_37_t;

extern void release_ctopdown_funtype_37(ctopdown_funtype_37_t x);

extern ctopdown_funtype_37_t copy_ctopdown_funtype_37(ctopdown_funtype_37_t x);



struct ctopdown_array_38_s { uint32_t count;
        uint16_t size;
         ordstruct_adt_ordstruct_adt_t elems[]; };
typedef struct ctopdown_array_38_s * ctopdown_array_38_t;

extern ctopdown_array_38_t new_ctopdown_array_38(uint16_t size);

extern void release_ctopdown_array_38(ctopdown_array_38_t x);

extern ctopdown_array_38_t copy_ctopdown_array_38(ctopdown_array_38_t x);

extern bool_t equal_ctopdown_array_38(ctopdown_array_38_t x, ctopdown_array_38_t y);

extern ctopdown_array_38_t update_ctopdown_array_38(ctopdown_array_38_t x, uint32_t i, #<ir-typename
                                                                                         >_t v);



struct ctopdown_funtype_39_s;
        typedef struct ctopdown_funtype_39_s * ctopdown_funtype_39_t;

struct ctopdown_funtype_39_ftbl_s {ordstruct_adt_ordstruct_adt_t (* fptr)(struct ctopdown_funtype_39_s *, ctopdown_record_26_t);
        ordstruct_adt_ordstruct_adt_t (* mptr)(struct ctopdown_funtype_39_s *, uint8_t, uint8_t);
        void (* rptr)(struct ctopdown_funtype_39_s *);
        struct ctopdown_funtype_39_s * (* cptr)(struct ctopdown_funtype_39_s *);};
typedef struct ctopdown_funtype_39_ftbl_s * ctopdown_funtype_39_ftbl_t;

struct ctopdown_funtype_39_hashentry_s {uint32_t keyhash; ctopdown_record_26_t key; ordstruct_adt_ordstruct_adt_t value;}; 
typedef struct ctopdown_funtype_39_hashentry_s ctopdown_funtype_39_hashentry_t;

struct ctopdown_funtype_39_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_39_hashentry_t * data;}; 
typedef struct ctopdown_funtype_39_htbl_s * ctopdown_funtype_39_htbl_t;

struct ctopdown_funtype_39_s {uint32_t count;
        ctopdown_funtype_39_ftbl_t ftbl;
        ctopdown_funtype_39_htbl_t htbl;};
typedef struct ctopdown_funtype_39_s * ctopdown_funtype_39_t;

extern void release_ctopdown_funtype_39(ctopdown_funtype_39_t x);

extern ctopdown_funtype_39_t copy_ctopdown_funtype_39(ctopdown_funtype_39_t x);




struct ctopdown_closure_40_s;
        typedef struct ctopdown_closure_40_s * ctopdown_closure_40_t;

struct ctopdown_closure_40_s {uint32_t count;
         ctopdown_funtype_36_ftbl_t ftbl;
         ctopdown_funtype_36_htbl_t htbl;
        ctopdown_array_38_t fvar_1;
        ctopdown_array_38_t fvar_2;
        ctopdown_funtype_39_t fvar_3;
        ctopdown_funtype_39_t fvar_4;
        ctopdown_array_38_t fvar_5;
        ctopdown_funtype_37_t fvar_6;
        ordstruct_adt_ordstruct_adt_t fvar_7;
        ordstruct_adt_ordstruct_adt_t fvar_8;};

ordstruct_adt_ordstruct_adt_t f_ctopdown_closure_40(struct ctopdown_closure_40_s * closure, ctopdown_peg_adt_t bvar);

ordstruct_adt_ordstruct_adt_t m_ctopdown_closure_40(struct ctopdown_closure_40_s * closure, ctopdown_peg_adt_t bvar);

extern ordstruct_adt_ordstruct_adt_t h_ctopdown_closure_40(ctopdown_peg_adt_t ivar_9, ctopdown_array_38_t ivar_7, ctopdown_array_38_t ivar_8, ctopdown_funtype_39_t ivar_6, ctopdown_funtype_39_t ivar_5, ctopdown_array_38_t ivar_4, ctopdown_funtype_37_t ivar_3, ordstruct_adt_ordstruct_adt_t ivar_2, ordstruct_adt_ordstruct_adt_t ivar_1);

extern ctopdown_closure_40_t new_ctopdown_closure_40(void);

extern void release_ctopdown_closure_40(ctopdown_funtype_36_t closure);

extern ctopdown_closure_40_t copy_ctopdown_closure_40(ctopdown_closure_40_t x);



struct ctopdown_funtype_41_s;
        typedef struct ctopdown_funtype_41_s * ctopdown_funtype_41_t;

struct ctopdown_funtype_41_ftbl_s {ordstruct_adt_ordstruct_adt_t (* fptr)(struct ctopdown_funtype_41_s *, ctopdown_record_29_t);
        ordstruct_adt_ordstruct_adt_t (* mptr)(struct ctopdown_funtype_41_s *, ctopdown_array_15_t, ctopdown_peg_adt_t);
        void (* rptr)(struct ctopdown_funtype_41_s *);
        struct ctopdown_funtype_41_s * (* cptr)(struct ctopdown_funtype_41_s *);};
typedef struct ctopdown_funtype_41_ftbl_s * ctopdown_funtype_41_ftbl_t;

struct ctopdown_funtype_41_hashentry_s {uint32_t keyhash; ctopdown_record_29_t key; ordstruct_adt_ordstruct_adt_t value;}; 
typedef struct ctopdown_funtype_41_hashentry_s ctopdown_funtype_41_hashentry_t;

struct ctopdown_funtype_41_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_41_hashentry_t * data;}; 
typedef struct ctopdown_funtype_41_htbl_s * ctopdown_funtype_41_htbl_t;

struct ctopdown_funtype_41_s {uint32_t count;
        ctopdown_funtype_41_ftbl_t ftbl;
        ctopdown_funtype_41_htbl_t htbl;};
typedef struct ctopdown_funtype_41_s * ctopdown_funtype_41_t;

extern void release_ctopdown_funtype_41(ctopdown_funtype_41_t x);

extern ctopdown_funtype_41_t copy_ctopdown_funtype_41(ctopdown_funtype_41_t x);



struct ctopdown_funtype_42_s;
        typedef struct ctopdown_funtype_42_s * ctopdown_funtype_42_t;

struct ctopdown_funtype_42_ftbl_s {ordstruct_adt_ordstruct_adt_t (* fptr)(struct ctopdown_funtype_42_s *, ctopdown_record_31_t);
        ordstruct_adt_ordstruct_adt_t (* mptr)(struct ctopdown_funtype_42_s *, uint8_t, ctopdown_peg_adt_t);
        void (* rptr)(struct ctopdown_funtype_42_s *);
        struct ctopdown_funtype_42_s * (* cptr)(struct ctopdown_funtype_42_s *);};
typedef struct ctopdown_funtype_42_ftbl_s * ctopdown_funtype_42_ftbl_t;

struct ctopdown_funtype_42_hashentry_s {uint32_t keyhash; ctopdown_record_31_t key; ordstruct_adt_ordstruct_adt_t value;}; 
typedef struct ctopdown_funtype_42_hashentry_s ctopdown_funtype_42_hashentry_t;

struct ctopdown_funtype_42_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_42_hashentry_t * data;}; 
typedef struct ctopdown_funtype_42_htbl_s * ctopdown_funtype_42_htbl_t;

struct ctopdown_funtype_42_s {uint32_t count;
        ctopdown_funtype_42_ftbl_t ftbl;
        ctopdown_funtype_42_htbl_t htbl;};
typedef struct ctopdown_funtype_42_s * ctopdown_funtype_42_t;

extern void release_ctopdown_funtype_42(ctopdown_funtype_42_t x);

extern ctopdown_funtype_42_t copy_ctopdown_funtype_42(ctopdown_funtype_42_t x);



struct ctopdown_funtype_43_s;
        typedef struct ctopdown_funtype_43_s * ctopdown_funtype_43_t;

struct ctopdown_funtype_43_ftbl_s {ordstruct_adt_ordstruct_adt_t (* fptr)(struct ctopdown_funtype_43_s *, ctopdown_record_33_t);
        ordstruct_adt_ordstruct_adt_t (* mptr)(struct ctopdown_funtype_43_s *, uint8_t, uint8_t, ctopdown_peg_adt_t);
        void (* rptr)(struct ctopdown_funtype_43_s *);
        struct ctopdown_funtype_43_s * (* cptr)(struct ctopdown_funtype_43_s *);};
typedef struct ctopdown_funtype_43_ftbl_s * ctopdown_funtype_43_ftbl_t;

struct ctopdown_funtype_43_hashentry_s {uint32_t keyhash; ctopdown_record_33_t key; ordstruct_adt_ordstruct_adt_t value;}; 
typedef struct ctopdown_funtype_43_hashentry_s ctopdown_funtype_43_hashentry_t;

struct ctopdown_funtype_43_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_43_hashentry_t * data;}; 
typedef struct ctopdown_funtype_43_htbl_s * ctopdown_funtype_43_htbl_t;

struct ctopdown_funtype_43_s {uint32_t count;
        ctopdown_funtype_43_ftbl_t ftbl;
        ctopdown_funtype_43_htbl_t htbl;};
typedef struct ctopdown_funtype_43_s * ctopdown_funtype_43_t;

extern void release_ctopdown_funtype_43(ctopdown_funtype_43_t x);

extern ctopdown_funtype_43_t copy_ctopdown_funtype_43(ctopdown_funtype_43_t x);




struct ctopdown_closure_44_s;
        typedef struct ctopdown_closure_44_s * ctopdown_closure_44_t;

struct ctopdown_closure_44_s {uint32_t count;
         ctopdown_funtype_36_ftbl_t ftbl;
         ctopdown_funtype_36_htbl_t htbl;
        ctopdown_funtype_42_t fvar_1;
        ctopdown_funtype_42_t fvar_2;
        ctopdown_funtype_43_t fvar_3;
        ctopdown_funtype_43_t fvar_4;
        ctopdown_funtype_42_t fvar_5;
        ctopdown_funtype_41_t fvar_6;
        ctopdown_funtype_36_t fvar_7;
        ctopdown_funtype_36_t fvar_8;};

ordstruct_adt_ordstruct_adt_t f_ctopdown_closure_44(struct ctopdown_closure_44_s * closure, ctopdown_peg_adt_t bvar);

ordstruct_adt_ordstruct_adt_t m_ctopdown_closure_44(struct ctopdown_closure_44_s * closure, ctopdown_peg_adt_t bvar);

extern ordstruct_adt_ordstruct_adt_t h_ctopdown_closure_44(ctopdown_peg_adt_t ivar_9, ctopdown_funtype_42_t ivar_7, ctopdown_funtype_42_t ivar_8, ctopdown_funtype_43_t ivar_6, ctopdown_funtype_43_t ivar_5, ctopdown_funtype_42_t ivar_4, ctopdown_funtype_41_t ivar_3, ctopdown_funtype_36_t ivar_2, ctopdown_funtype_36_t ivar_1);

extern ctopdown_closure_44_t new_ctopdown_closure_44(void);

extern void release_ctopdown_closure_44(ctopdown_funtype_36_t closure);

extern ctopdown_closure_44_t copy_ctopdown_closure_44(ctopdown_closure_44_t x);



struct ctopdown_funtype_45_s;
        typedef struct ctopdown_funtype_45_s * ctopdown_funtype_45_t;

struct ctopdown_funtype_45_ftbl_s {bool_t (* fptr)(struct ctopdown_funtype_45_s *, ctopdown_ent_adt_t);
        bool_t (* mptr)(struct ctopdown_funtype_45_s *, ctopdown_ent_adt_t);
        void (* rptr)(struct ctopdown_funtype_45_s *);
        struct ctopdown_funtype_45_s * (* cptr)(struct ctopdown_funtype_45_s *);};
typedef struct ctopdown_funtype_45_ftbl_s * ctopdown_funtype_45_ftbl_t;

struct ctopdown_funtype_45_hashentry_s {uint32_t keyhash; ctopdown_ent_adt_t key; bool_t value;}; 
typedef struct ctopdown_funtype_45_hashentry_s ctopdown_funtype_45_hashentry_t;

struct ctopdown_funtype_45_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_45_hashentry_t * data;}; 
typedef struct ctopdown_funtype_45_htbl_s * ctopdown_funtype_45_htbl_t;

struct ctopdown_funtype_45_s {uint32_t count;
        ctopdown_funtype_45_ftbl_t ftbl;
        ctopdown_funtype_45_htbl_t htbl;};
typedef struct ctopdown_funtype_45_s * ctopdown_funtype_45_t;

extern void release_ctopdown_funtype_45(ctopdown_funtype_45_t x);

extern ctopdown_funtype_45_t copy_ctopdown_funtype_45(ctopdown_funtype_45_t x);




struct ctopdown_closure_46_s;
        typedef struct ctopdown_closure_46_s * ctopdown_closure_46_t;

struct ctopdown_closure_46_s {uint32_t count;
         ctopdown_funtype_45_ftbl_t ftbl;
         ctopdown_funtype_45_htbl_t htbl;
        mpz_t fvar_1;
        mpz_t fvar_2;};

bool_t f_ctopdown_closure_46(struct ctopdown_closure_46_s * closure, ctopdown_ent_adt_t bvar);

bool_t m_ctopdown_closure_46(struct ctopdown_closure_46_s * closure, ctopdown_ent_adt_t bvar);

extern bool_t h_ctopdown_closure_46(ctopdown_ent_adt_t ivar_3, mpz_t ivar_2, mpz_t ivar_1);

extern ctopdown_closure_46_t new_ctopdown_closure_46(void);

extern void release_ctopdown_closure_46(ctopdown_funtype_45_t closure);

extern ctopdown_closure_46_t copy_ctopdown_closure_46(ctopdown_closure_46_t x);



struct ctopdown_lang_spec_s { uint32_t count;
        uint16_t size;
         ctopdown_peg_adt_t elems[]; };
typedef struct ctopdown_lang_spec_s * ctopdown_lang_spec_t;

extern ctopdown_lang_spec_t new_ctopdown_lang_spec(uint16_t size);

extern void release_ctopdown_lang_spec(ctopdown_lang_spec_t x);

extern ctopdown_lang_spec_t copy_ctopdown_lang_spec(ctopdown_lang_spec_t x);

extern bool_t equal_ctopdown_lang_spec(ctopdown_lang_spec_t x, ctopdown_lang_spec_t y);

extern ctopdown_lang_spec_t update_ctopdown_lang_spec(ctopdown_lang_spec_t x, uint32_t i, ctopdown_peg_adt_t v);



struct ctopdown_array_48_s { uint32_t count;
        uint16_t size;
         ctopdown_ent_adt_t elems[]; };
typedef struct ctopdown_array_48_s * ctopdown_array_48_t;

extern ctopdown_array_48_t new_ctopdown_array_48(uint16_t size);

extern void release_ctopdown_array_48(ctopdown_array_48_t x);

extern ctopdown_array_48_t copy_ctopdown_array_48(ctopdown_array_48_t x);

extern bool_t equal_ctopdown_array_48(ctopdown_array_48_t x, ctopdown_array_48_t y);

extern ctopdown_array_48_t update_ctopdown_array_48(ctopdown_array_48_t x, uint32_t i, ctopdown_ent_adt_t v);



struct ctopdown_funtype_49_s;
        typedef struct ctopdown_funtype_49_s * ctopdown_funtype_49_t;

struct ctopdown_funtype_49_ftbl_s {ctopdown_array_48_t (* fptr)(struct ctopdown_funtype_49_s *, mpz_t);
        ctopdown_array_48_t (* mptr)(struct ctopdown_funtype_49_s *, mpz_t);
        void (* rptr)(struct ctopdown_funtype_49_s *);
        struct ctopdown_funtype_49_s * (* cptr)(struct ctopdown_funtype_49_s *);};
typedef struct ctopdown_funtype_49_ftbl_s * ctopdown_funtype_49_ftbl_t;

struct ctopdown_funtype_49_hashentry_s {uint32_t keyhash; mpz_t key; ctopdown_array_48_t value;}; 
typedef struct ctopdown_funtype_49_hashentry_s ctopdown_funtype_49_hashentry_t;

struct ctopdown_funtype_49_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_49_hashentry_t * data;}; 
typedef struct ctopdown_funtype_49_htbl_s * ctopdown_funtype_49_htbl_t;

struct ctopdown_funtype_49_s {uint32_t count;
        ctopdown_funtype_49_ftbl_t ftbl;
        ctopdown_funtype_49_htbl_t htbl;};
typedef struct ctopdown_funtype_49_s * ctopdown_funtype_49_t;

extern void release_ctopdown_funtype_49(ctopdown_funtype_49_t x);

extern ctopdown_funtype_49_t copy_ctopdown_funtype_49(ctopdown_funtype_49_t x);



struct ctopdown_record_50_s {
        uint32_t count; 
        ctopdown_funtype_49_t project_1;
        mpz_t project_2;
        uint8_t project_3;};
typedef struct ctopdown_record_50_s * ctopdown_record_50_t;

extern ctopdown_record_50_t new_ctopdown_record_50(void);

extern void release_ctopdown_record_50(ctopdown_record_50_t x);

extern ctopdown_record_50_t copy_ctopdown_record_50(ctopdown_record_50_t x);

extern bool_t equal_ctopdown_record_50(ctopdown_record_50_t x, ctopdown_record_50_t y);

extern ctopdown_record_50_t update_ctopdown_record_50_project_1(ctopdown_record_50_t x, ctopdown_funtype_49_t v);

extern ctopdown_record_50_t update_ctopdown_record_50_project_2(ctopdown_record_50_t x, mpz_t v);

extern ctopdown_record_50_t update_ctopdown_record_50_project_3(ctopdown_record_50_t x, uint8_t v);



struct ctopdown_funtype_51_s;
        typedef struct ctopdown_funtype_51_s * ctopdown_funtype_51_t;

struct ctopdown_funtype_51_ftbl_s {bool_t (* fptr)(struct ctopdown_funtype_51_s *, ctopdown_record_50_t);
        bool_t (* mptr)(struct ctopdown_funtype_51_s *, ctopdown_funtype_49_t, mpz_t, uint8_t);
        void (* rptr)(struct ctopdown_funtype_51_s *);
        struct ctopdown_funtype_51_s * (* cptr)(struct ctopdown_funtype_51_s *);};
typedef struct ctopdown_funtype_51_ftbl_s * ctopdown_funtype_51_ftbl_t;

struct ctopdown_funtype_51_hashentry_s {uint32_t keyhash; ctopdown_record_50_t key; bool_t value;}; 
typedef struct ctopdown_funtype_51_hashentry_s ctopdown_funtype_51_hashentry_t;

struct ctopdown_funtype_51_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_51_hashentry_t * data;}; 
typedef struct ctopdown_funtype_51_htbl_s * ctopdown_funtype_51_htbl_t;

struct ctopdown_funtype_51_s {uint32_t count;
        ctopdown_funtype_51_ftbl_t ftbl;
        ctopdown_funtype_51_htbl_t htbl;};
typedef struct ctopdown_funtype_51_s * ctopdown_funtype_51_t;

extern void release_ctopdown_funtype_51(ctopdown_funtype_51_t x);

extern ctopdown_funtype_51_t copy_ctopdown_funtype_51(ctopdown_funtype_51_t x);



struct ctopdown_funtype_52_s;
        typedef struct ctopdown_funtype_52_s * ctopdown_funtype_52_t;

struct ctopdown_funtype_52_ftbl_s {uint8_t (* fptr)(struct ctopdown_funtype_52_s *, mpz_t);
        uint8_t (* mptr)(struct ctopdown_funtype_52_s *, mpz_t);
        void (* rptr)(struct ctopdown_funtype_52_s *);
        struct ctopdown_funtype_52_s * (* cptr)(struct ctopdown_funtype_52_s *);};
typedef struct ctopdown_funtype_52_ftbl_s * ctopdown_funtype_52_ftbl_t;

struct ctopdown_funtype_52_hashentry_s {uint32_t keyhash; mpz_t key; uint8_t value;}; 
typedef struct ctopdown_funtype_52_hashentry_s ctopdown_funtype_52_hashentry_t;

struct ctopdown_funtype_52_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_52_hashentry_t * data;}; 
typedef struct ctopdown_funtype_52_htbl_s * ctopdown_funtype_52_htbl_t;

struct ctopdown_funtype_52_s {uint32_t count;
        ctopdown_funtype_52_ftbl_t ftbl;
        ctopdown_funtype_52_htbl_t htbl;};
typedef struct ctopdown_funtype_52_s * ctopdown_funtype_52_t;

extern void release_ctopdown_funtype_52(ctopdown_funtype_52_t x);

extern ctopdown_funtype_52_t copy_ctopdown_funtype_52(ctopdown_funtype_52_t x);




struct ctopdown_closure_53_s;
        typedef struct ctopdown_closure_53_s * ctopdown_closure_53_t;

struct ctopdown_closure_53_s {uint32_t count;
         ctopdown_funtype_51_ftbl_t ftbl;
         ctopdown_funtype_51_htbl_t htbl;
        ctopdown_funtype_52_t fvar_1;
        mpz_t fvar_2;
        ctopdown_lang_spec_t fvar_3;};

bool_t f_ctopdown_closure_53(struct ctopdown_closure_53_s * closure, ctopdown_record_50_t bvar);

bool_t m_ctopdown_closure_53(struct ctopdown_closure_53_s * closure, ctopdown_funtype_49_t bvar_1, mpz_t bvar_2, uint8_t bvar_3);

extern bool_t h_ctopdown_closure_53(ctopdown_funtype_49_t ivar_6, mpz_t ivar_8, uint8_t ivar_9, ctopdown_funtype_52_t ivar_3, mpz_t ivar_1, ctopdown_lang_spec_t ivar_2);

extern ctopdown_closure_53_t new_ctopdown_closure_53(void);

extern void release_ctopdown_closure_53(ctopdown_funtype_51_t closure);

extern ctopdown_closure_53_t copy_ctopdown_closure_53(ctopdown_closure_53_t x);




struct ctopdown_closure_54_s;
        typedef struct ctopdown_closure_54_s * ctopdown_closure_54_t;

struct ctopdown_closure_54_s {uint32_t count;
         ctopdown_funtype_51_ftbl_t ftbl;
         ctopdown_funtype_51_htbl_t htbl;
        ctopdown_lang_spec_t fvar_1;};

bool_t f_ctopdown_closure_54(struct ctopdown_closure_54_s * closure, ctopdown_record_50_t bvar);

bool_t m_ctopdown_closure_54(struct ctopdown_closure_54_s * closure, ctopdown_funtype_49_t bvar_1, mpz_t bvar_2, uint8_t bvar_3);

extern bool_t h_ctopdown_closure_54(ctopdown_funtype_49_t ivar_6, mpz_t ivar_8, uint8_t ivar_9, ctopdown_lang_spec_t ivar_2);

extern ctopdown_closure_54_t new_ctopdown_closure_54(void);

extern void release_ctopdown_closure_54(ctopdown_funtype_51_t closure);

extern ctopdown_closure_54_t copy_ctopdown_closure_54(ctopdown_closure_54_t x);



struct ctopdown_record_55_s {
        uint32_t count; 
        ctopdown_funtype_49_t project_1;
        mpz_t project_2;
        uint8_t project_3;
        mpz_t project_4;};
typedef struct ctopdown_record_55_s * ctopdown_record_55_t;

extern ctopdown_record_55_t new_ctopdown_record_55(void);

extern void release_ctopdown_record_55(ctopdown_record_55_t x);

extern ctopdown_record_55_t copy_ctopdown_record_55(ctopdown_record_55_t x);

extern bool_t equal_ctopdown_record_55(ctopdown_record_55_t x, ctopdown_record_55_t y);

extern ctopdown_record_55_t update_ctopdown_record_55_project_1(ctopdown_record_55_t x, ctopdown_funtype_49_t v);

extern ctopdown_record_55_t update_ctopdown_record_55_project_2(ctopdown_record_55_t x, mpz_t v);

extern ctopdown_record_55_t update_ctopdown_record_55_project_3(ctopdown_record_55_t x, uint8_t v);

extern ctopdown_record_55_t update_ctopdown_record_55_project_4(ctopdown_record_55_t x, mpz_t v);



struct ctopdown_funtype_56_s;
        typedef struct ctopdown_funtype_56_s * ctopdown_funtype_56_t;

struct ctopdown_funtype_56_ftbl_s {bool_t (* fptr)(struct ctopdown_funtype_56_s *, ctopdown_record_55_t);
        bool_t (* mptr)(struct ctopdown_funtype_56_s *, ctopdown_funtype_49_t, mpz_t, uint8_t, mpz_t);
        void (* rptr)(struct ctopdown_funtype_56_s *);
        struct ctopdown_funtype_56_s * (* cptr)(struct ctopdown_funtype_56_s *);};
typedef struct ctopdown_funtype_56_ftbl_s * ctopdown_funtype_56_ftbl_t;

struct ctopdown_funtype_56_hashentry_s {uint32_t keyhash; ctopdown_record_55_t key; bool_t value;}; 
typedef struct ctopdown_funtype_56_hashentry_s ctopdown_funtype_56_hashentry_t;

struct ctopdown_funtype_56_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_56_hashentry_t * data;}; 
typedef struct ctopdown_funtype_56_htbl_s * ctopdown_funtype_56_htbl_t;

struct ctopdown_funtype_56_s {uint32_t count;
        ctopdown_funtype_56_ftbl_t ftbl;
        ctopdown_funtype_56_htbl_t htbl;};
typedef struct ctopdown_funtype_56_s * ctopdown_funtype_56_t;

extern void release_ctopdown_funtype_56(ctopdown_funtype_56_t x);

extern ctopdown_funtype_56_t copy_ctopdown_funtype_56(ctopdown_funtype_56_t x);




struct ctopdown_closure_57_s;
        typedef struct ctopdown_closure_57_s * ctopdown_closure_57_t;

struct ctopdown_closure_57_s {uint32_t count;
         ctopdown_funtype_56_ftbl_t ftbl;
         ctopdown_funtype_56_htbl_t htbl;
        ctopdown_funtype_52_t fvar_1;
        ctopdown_lang_spec_t fvar_2;};

bool_t f_ctopdown_closure_57(struct ctopdown_closure_57_s * closure, ctopdown_record_55_t bvar);

bool_t m_ctopdown_closure_57(struct ctopdown_closure_57_s * closure, ctopdown_funtype_49_t bvar_1, mpz_t bvar_2, uint8_t bvar_3, mpz_t bvar_4);

extern bool_t h_ctopdown_closure_57(ctopdown_funtype_49_t ivar_8, mpz_t ivar_10, uint8_t ivar_11, mpz_t ivar_12, ctopdown_funtype_52_t ivar_3, ctopdown_lang_spec_t ivar_2);

extern ctopdown_closure_57_t new_ctopdown_closure_57(void);

extern void release_ctopdown_closure_57(ctopdown_funtype_56_t closure);

extern ctopdown_closure_57_t copy_ctopdown_closure_57(ctopdown_closure_57_t x);



struct ctopdown_stackADT_adt_s {
         uint32_t count; 
        uint8_t ctopdown_stackADT_adt_index;};
typedef struct ctopdown_stackADT_adt_s * ctopdown_stackADT_adt_t;

extern ctopdown_stackADT_adt_t new_ctopdown_stackADT_adt(void);

extern void release_ctopdown_stackADT_adt(ctopdown_stackADT_adt_t x);

extern ctopdown_stackADT_adt_t copy_ctopdown_stackADT_adt(ctopdown_stackADT_adt_t x);

extern bool_t equal_ctopdown_stackADT_adt(ctopdown_stackADT_adt_t x, ctopdown_stackADT_adt_t y);

extern ctopdown_stackADT_adt_t update_ctopdown_stackADT_adt_ctopdown_stackADT_adt_index(ctopdown_stackADT_adt_t x, uint8_t v);



struct ctopdown_push_s {
        uint32_t count; 
        uint8_t ctopdown_stackADT_adt_index;
        uint32_t pos;
        uint8_t nt;
        ctopdown_stackADT_adt_t rest;};
typedef struct ctopdown_push_s * ctopdown_push_t;

extern ctopdown_push_t new_ctopdown_push(void);

extern void release_ctopdown_push(ctopdown_push_t x);

extern ctopdown_push_t copy_ctopdown_push(ctopdown_push_t x);

extern bool_t equal_ctopdown_push(ctopdown_push_t x, ctopdown_push_t y);

extern ctopdown_push_t update_ctopdown_push_ctopdown_stackADT_adt_index(ctopdown_push_t x, uint8_t v);

extern ctopdown_push_t update_ctopdown_push_pos(ctopdown_push_t x, uint32_t v);

extern ctopdown_push_t update_ctopdown_push_nt(ctopdown_push_t x, uint8_t v);

extern ctopdown_push_t update_ctopdown_push_rest(ctopdown_push_t x, ctopdown_stackADT_adt_t v);



struct ctopdown_funtype_60_s;
        typedef struct ctopdown_funtype_60_s * ctopdown_funtype_60_t;

struct ctopdown_funtype_60_ftbl_s {uint8_t (* fptr)(struct ctopdown_funtype_60_s *, ctopdown_stackADT_adt_t);
        uint8_t (* mptr)(struct ctopdown_funtype_60_s *, ctopdown_stackADT_adt_t);
        void (* rptr)(struct ctopdown_funtype_60_s *);
        struct ctopdown_funtype_60_s * (* cptr)(struct ctopdown_funtype_60_s *);};
typedef struct ctopdown_funtype_60_ftbl_s * ctopdown_funtype_60_ftbl_t;

struct ctopdown_funtype_60_hashentry_s {uint32_t keyhash; ctopdown_stackADT_adt_t key; uint8_t value;}; 
typedef struct ctopdown_funtype_60_hashentry_s ctopdown_funtype_60_hashentry_t;

struct ctopdown_funtype_60_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_60_hashentry_t * data;}; 
typedef struct ctopdown_funtype_60_htbl_s * ctopdown_funtype_60_htbl_t;

struct ctopdown_funtype_60_s {uint32_t count;
        ctopdown_funtype_60_ftbl_t ftbl;
        ctopdown_funtype_60_htbl_t htbl;};
typedef struct ctopdown_funtype_60_s * ctopdown_funtype_60_t;

extern void release_ctopdown_funtype_60(ctopdown_funtype_60_t x);

extern ctopdown_funtype_60_t copy_ctopdown_funtype_60(ctopdown_funtype_60_t x);



struct ctopdown_funtype_61_s;
        typedef struct ctopdown_funtype_61_s * ctopdown_funtype_61_t;

struct ctopdown_funtype_61_ftbl_s {mpz_ptr_t (* fptr)(struct ctopdown_funtype_61_s *, ctopdown_stackADT_adt_t);
        mpz_ptr_t (* mptr)(struct ctopdown_funtype_61_s *, ctopdown_stackADT_adt_t);
        void (* rptr)(struct ctopdown_funtype_61_s *);
        struct ctopdown_funtype_61_s * (* cptr)(struct ctopdown_funtype_61_s *);};
typedef struct ctopdown_funtype_61_ftbl_s * ctopdown_funtype_61_ftbl_t;

struct ctopdown_funtype_61_hashentry_s {uint32_t keyhash; ctopdown_stackADT_adt_t key; mpz_t value;}; 
typedef struct ctopdown_funtype_61_hashentry_s ctopdown_funtype_61_hashentry_t;

struct ctopdown_funtype_61_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_61_hashentry_t * data;}; 
typedef struct ctopdown_funtype_61_htbl_s * ctopdown_funtype_61_htbl_t;

struct ctopdown_funtype_61_s {uint32_t count;
        ctopdown_funtype_61_ftbl_t ftbl;
        ctopdown_funtype_61_htbl_t htbl;};
typedef struct ctopdown_funtype_61_s * ctopdown_funtype_61_t;

extern void release_ctopdown_funtype_61(ctopdown_funtype_61_t x);

extern ctopdown_funtype_61_t copy_ctopdown_funtype_61(ctopdown_funtype_61_t x);



struct ctopdown_record_62_s {
        uint32_t count; 
        uint32_t project_1;
        uint8_t project_2;
        mpz_t project_3;};
typedef struct ctopdown_record_62_s * ctopdown_record_62_t;

extern ctopdown_record_62_t new_ctopdown_record_62(void);

extern void release_ctopdown_record_62(ctopdown_record_62_t x);

extern ctopdown_record_62_t copy_ctopdown_record_62(ctopdown_record_62_t x);

extern bool_t equal_ctopdown_record_62(ctopdown_record_62_t x, ctopdown_record_62_t y);

extern ctopdown_record_62_t update_ctopdown_record_62_project_1(ctopdown_record_62_t x, uint32_t v);

extern ctopdown_record_62_t update_ctopdown_record_62_project_2(ctopdown_record_62_t x, uint8_t v);

extern ctopdown_record_62_t update_ctopdown_record_62_project_3(ctopdown_record_62_t x, mpz_t v);



struct ctopdown_funtype_63_s;
        typedef struct ctopdown_funtype_63_s * ctopdown_funtype_63_t;

struct ctopdown_funtype_63_ftbl_s {mpz_ptr_t (* fptr)(struct ctopdown_funtype_63_s *, ctopdown_record_62_t);
        mpz_ptr_t (* mptr)(struct ctopdown_funtype_63_s *, uint32_t, uint8_t, mpz_t);
        void (* rptr)(struct ctopdown_funtype_63_s *);
        struct ctopdown_funtype_63_s * (* cptr)(struct ctopdown_funtype_63_s *);};
typedef struct ctopdown_funtype_63_ftbl_s * ctopdown_funtype_63_ftbl_t;

struct ctopdown_funtype_63_hashentry_s {uint32_t keyhash; ctopdown_record_62_t key; mpz_t value;}; 
typedef struct ctopdown_funtype_63_hashentry_s ctopdown_funtype_63_hashentry_t;

struct ctopdown_funtype_63_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_63_hashentry_t * data;}; 
typedef struct ctopdown_funtype_63_htbl_s * ctopdown_funtype_63_htbl_t;

struct ctopdown_funtype_63_s {uint32_t count;
        ctopdown_funtype_63_ftbl_t ftbl;
        ctopdown_funtype_63_htbl_t htbl;};
typedef struct ctopdown_funtype_63_s * ctopdown_funtype_63_t;

extern void release_ctopdown_funtype_63(ctopdown_funtype_63_t x);

extern ctopdown_funtype_63_t copy_ctopdown_funtype_63(ctopdown_funtype_63_t x);




struct ctopdown_closure_64_s;
        typedef struct ctopdown_closure_64_s * ctopdown_closure_64_t;

struct ctopdown_closure_64_s {uint32_t count;
         ctopdown_funtype_61_ftbl_t ftbl;
         ctopdown_funtype_61_htbl_t htbl;
        ctopdown_funtype_63_t fvar_1;
        mpz_t fvar_2;};

mpz_ptr_t f_ctopdown_closure_64(struct ctopdown_closure_64_s * closure, ctopdown_stackADT_adt_t bvar);

mpz_ptr_t m_ctopdown_closure_64(struct ctopdown_closure_64_s * closure, ctopdown_stackADT_adt_t bvar);

extern mpz_ptr_t h_ctopdown_closure_64(ctopdown_stackADT_adt_t ivar_3, ctopdown_funtype_63_t ivar_2, mpz_t ivar_1);

extern ctopdown_closure_64_t new_ctopdown_closure_64(void);

extern void release_ctopdown_closure_64(ctopdown_funtype_61_t closure);

extern ctopdown_closure_64_t copy_ctopdown_closure_64(ctopdown_closure_64_t x);



struct ctopdown_record_65_s {
        uint32_t count; 
        uint32_t project_1;
        uint8_t project_2;
        mpz_t project_3;
        ctopdown_stackADT_adt_t project_4;};
typedef struct ctopdown_record_65_s * ctopdown_record_65_t;

extern ctopdown_record_65_t new_ctopdown_record_65(void);

extern void release_ctopdown_record_65(ctopdown_record_65_t x);

extern ctopdown_record_65_t copy_ctopdown_record_65(ctopdown_record_65_t x);

extern bool_t equal_ctopdown_record_65(ctopdown_record_65_t x, ctopdown_record_65_t y);

extern ctopdown_record_65_t update_ctopdown_record_65_project_1(ctopdown_record_65_t x, uint32_t v);

extern ctopdown_record_65_t update_ctopdown_record_65_project_2(ctopdown_record_65_t x, uint8_t v);

extern ctopdown_record_65_t update_ctopdown_record_65_project_3(ctopdown_record_65_t x, mpz_t v);

extern ctopdown_record_65_t update_ctopdown_record_65_project_4(ctopdown_record_65_t x, ctopdown_stackADT_adt_t v);



struct ctopdown_funtype_66_s;
        typedef struct ctopdown_funtype_66_s * ctopdown_funtype_66_t;

struct ctopdown_funtype_66_ftbl_s {mpz_ptr_t (* fptr)(struct ctopdown_funtype_66_s *, ctopdown_record_65_t);
        mpz_ptr_t (* mptr)(struct ctopdown_funtype_66_s *, uint32_t, uint8_t, mpz_t, ctopdown_stackADT_adt_t);
        void (* rptr)(struct ctopdown_funtype_66_s *);
        struct ctopdown_funtype_66_s * (* cptr)(struct ctopdown_funtype_66_s *);};
typedef struct ctopdown_funtype_66_ftbl_s * ctopdown_funtype_66_ftbl_t;

struct ctopdown_funtype_66_hashentry_s {uint32_t keyhash; ctopdown_record_65_t key; mpz_t value;}; 
typedef struct ctopdown_funtype_66_hashentry_s ctopdown_funtype_66_hashentry_t;

struct ctopdown_funtype_66_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_66_hashentry_t * data;}; 
typedef struct ctopdown_funtype_66_htbl_s * ctopdown_funtype_66_htbl_t;

struct ctopdown_funtype_66_s {uint32_t count;
        ctopdown_funtype_66_ftbl_t ftbl;
        ctopdown_funtype_66_htbl_t htbl;};
typedef struct ctopdown_funtype_66_s * ctopdown_funtype_66_t;

extern void release_ctopdown_funtype_66(ctopdown_funtype_66_t x);

extern ctopdown_funtype_66_t copy_ctopdown_funtype_66(ctopdown_funtype_66_t x);




struct ctopdown_closure_67_s;
        typedef struct ctopdown_closure_67_s * ctopdown_closure_67_t;

struct ctopdown_closure_67_s {uint32_t count;
         ctopdown_funtype_61_ftbl_t ftbl;
         ctopdown_funtype_61_htbl_t htbl;
        ctopdown_funtype_66_t fvar_1;
        ctopdown_funtype_61_t fvar_2;};

mpz_ptr_t f_ctopdown_closure_67(struct ctopdown_closure_67_s * closure, ctopdown_stackADT_adt_t bvar);

mpz_ptr_t m_ctopdown_closure_67(struct ctopdown_closure_67_s * closure, ctopdown_stackADT_adt_t bvar);

extern mpz_ptr_t h_ctopdown_closure_67(ctopdown_stackADT_adt_t ivar_3, ctopdown_funtype_66_t ivar_2, ctopdown_funtype_61_t ivar_1);

extern ctopdown_closure_67_t new_ctopdown_closure_67(void);

extern void release_ctopdown_closure_67(ctopdown_funtype_61_t closure);

extern ctopdown_closure_67_t copy_ctopdown_closure_67(ctopdown_closure_67_t x);



struct ctopdown_funtype_68_s;
        typedef struct ctopdown_funtype_68_s * ctopdown_funtype_68_t;

struct ctopdown_funtype_68_ftbl_s {ordstruct_adt_ordstruct_adt_t (* fptr)(struct ctopdown_funtype_68_s *, ctopdown_stackADT_adt_t);
        ordstruct_adt_ordstruct_adt_t (* mptr)(struct ctopdown_funtype_68_s *, ctopdown_stackADT_adt_t);
        void (* rptr)(struct ctopdown_funtype_68_s *);
        struct ctopdown_funtype_68_s * (* cptr)(struct ctopdown_funtype_68_s *);};
typedef struct ctopdown_funtype_68_ftbl_s * ctopdown_funtype_68_ftbl_t;

struct ctopdown_funtype_68_hashentry_s {uint32_t keyhash; ctopdown_stackADT_adt_t key; ordstruct_adt_ordstruct_adt_t value;}; 
typedef struct ctopdown_funtype_68_hashentry_s ctopdown_funtype_68_hashentry_t;

struct ctopdown_funtype_68_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_68_hashentry_t * data;}; 
typedef struct ctopdown_funtype_68_htbl_s * ctopdown_funtype_68_htbl_t;

struct ctopdown_funtype_68_s {uint32_t count;
        ctopdown_funtype_68_ftbl_t ftbl;
        ctopdown_funtype_68_htbl_t htbl;};
typedef struct ctopdown_funtype_68_s * ctopdown_funtype_68_t;

extern void release_ctopdown_funtype_68(ctopdown_funtype_68_t x);

extern ctopdown_funtype_68_t copy_ctopdown_funtype_68(ctopdown_funtype_68_t x);



struct ctopdown_record_69_s {
        uint32_t count; 
        uint32_t project_1;
        uint8_t project_2;
        ordstruct_adt_ordstruct_adt_t project_3;};
typedef struct ctopdown_record_69_s * ctopdown_record_69_t;

extern ctopdown_record_69_t new_ctopdown_record_69(void);

extern void release_ctopdown_record_69(ctopdown_record_69_t x);

extern ctopdown_record_69_t copy_ctopdown_record_69(ctopdown_record_69_t x);

extern bool_t equal_ctopdown_record_69(ctopdown_record_69_t x, ctopdown_record_69_t y);

extern ctopdown_record_69_t update_ctopdown_record_69_project_1(ctopdown_record_69_t x, uint32_t v);

extern ctopdown_record_69_t update_ctopdown_record_69_project_2(ctopdown_record_69_t x, uint8_t v);

extern ctopdown_record_69_t update_ctopdown_record_69_project_3(ctopdown_record_69_t x, ordstruct_adt_ordstruct_adt_t v);



struct ctopdown_funtype_70_s;
        typedef struct ctopdown_funtype_70_s * ctopdown_funtype_70_t;

struct ctopdown_funtype_70_ftbl_s {ordstruct_adt_ordstruct_adt_t (* fptr)(struct ctopdown_funtype_70_s *, ctopdown_record_69_t);
        ordstruct_adt_ordstruct_adt_t (* mptr)(struct ctopdown_funtype_70_s *, uint32_t, uint8_t, ordstruct_adt_ordstruct_adt_t);
        void (* rptr)(struct ctopdown_funtype_70_s *);
        struct ctopdown_funtype_70_s * (* cptr)(struct ctopdown_funtype_70_s *);};
typedef struct ctopdown_funtype_70_ftbl_s * ctopdown_funtype_70_ftbl_t;

struct ctopdown_funtype_70_hashentry_s {uint32_t keyhash; ctopdown_record_69_t key; ordstruct_adt_ordstruct_adt_t value;}; 
typedef struct ctopdown_funtype_70_hashentry_s ctopdown_funtype_70_hashentry_t;

struct ctopdown_funtype_70_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_70_hashentry_t * data;}; 
typedef struct ctopdown_funtype_70_htbl_s * ctopdown_funtype_70_htbl_t;

struct ctopdown_funtype_70_s {uint32_t count;
        ctopdown_funtype_70_ftbl_t ftbl;
        ctopdown_funtype_70_htbl_t htbl;};
typedef struct ctopdown_funtype_70_s * ctopdown_funtype_70_t;

extern void release_ctopdown_funtype_70(ctopdown_funtype_70_t x);

extern ctopdown_funtype_70_t copy_ctopdown_funtype_70(ctopdown_funtype_70_t x);




struct ctopdown_closure_71_s;
        typedef struct ctopdown_closure_71_s * ctopdown_closure_71_t;

struct ctopdown_closure_71_s {uint32_t count;
         ctopdown_funtype_68_ftbl_t ftbl;
         ctopdown_funtype_68_htbl_t htbl;
        ctopdown_funtype_70_t fvar_1;
        ordstruct_adt_ordstruct_adt_t fvar_2;};

ordstruct_adt_ordstruct_adt_t f_ctopdown_closure_71(struct ctopdown_closure_71_s * closure, ctopdown_stackADT_adt_t bvar);

ordstruct_adt_ordstruct_adt_t m_ctopdown_closure_71(struct ctopdown_closure_71_s * closure, ctopdown_stackADT_adt_t bvar);

extern ordstruct_adt_ordstruct_adt_t h_ctopdown_closure_71(ctopdown_stackADT_adt_t ivar_3, ctopdown_funtype_70_t ivar_2, ordstruct_adt_ordstruct_adt_t ivar_1);

extern ctopdown_closure_71_t new_ctopdown_closure_71(void);

extern void release_ctopdown_closure_71(ctopdown_funtype_68_t closure);

extern ctopdown_closure_71_t copy_ctopdown_closure_71(ctopdown_closure_71_t x);



struct ctopdown_record_72_s {
        uint32_t count; 
        uint32_t project_1;
        uint8_t project_2;
        ordstruct_adt_ordstruct_adt_t project_3;
        ctopdown_stackADT_adt_t project_4;};
typedef struct ctopdown_record_72_s * ctopdown_record_72_t;

extern ctopdown_record_72_t new_ctopdown_record_72(void);

extern void release_ctopdown_record_72(ctopdown_record_72_t x);

extern ctopdown_record_72_t copy_ctopdown_record_72(ctopdown_record_72_t x);

extern bool_t equal_ctopdown_record_72(ctopdown_record_72_t x, ctopdown_record_72_t y);

extern ctopdown_record_72_t update_ctopdown_record_72_project_1(ctopdown_record_72_t x, uint32_t v);

extern ctopdown_record_72_t update_ctopdown_record_72_project_2(ctopdown_record_72_t x, uint8_t v);

extern ctopdown_record_72_t update_ctopdown_record_72_project_3(ctopdown_record_72_t x, ordstruct_adt_ordstruct_adt_t v);

extern ctopdown_record_72_t update_ctopdown_record_72_project_4(ctopdown_record_72_t x, ctopdown_stackADT_adt_t v);



struct ctopdown_funtype_73_s;
        typedef struct ctopdown_funtype_73_s * ctopdown_funtype_73_t;

struct ctopdown_funtype_73_ftbl_s {ordstruct_adt_ordstruct_adt_t (* fptr)(struct ctopdown_funtype_73_s *, ctopdown_record_72_t);
        ordstruct_adt_ordstruct_adt_t (* mptr)(struct ctopdown_funtype_73_s *, uint32_t, uint8_t, ordstruct_adt_ordstruct_adt_t, ctopdown_stackADT_adt_t);
        void (* rptr)(struct ctopdown_funtype_73_s *);
        struct ctopdown_funtype_73_s * (* cptr)(struct ctopdown_funtype_73_s *);};
typedef struct ctopdown_funtype_73_ftbl_s * ctopdown_funtype_73_ftbl_t;

struct ctopdown_funtype_73_hashentry_s {uint32_t keyhash; ctopdown_record_72_t key; ordstruct_adt_ordstruct_adt_t value;}; 
typedef struct ctopdown_funtype_73_hashentry_s ctopdown_funtype_73_hashentry_t;

struct ctopdown_funtype_73_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_73_hashentry_t * data;}; 
typedef struct ctopdown_funtype_73_htbl_s * ctopdown_funtype_73_htbl_t;

struct ctopdown_funtype_73_s {uint32_t count;
        ctopdown_funtype_73_ftbl_t ftbl;
        ctopdown_funtype_73_htbl_t htbl;};
typedef struct ctopdown_funtype_73_s * ctopdown_funtype_73_t;

extern void release_ctopdown_funtype_73(ctopdown_funtype_73_t x);

extern ctopdown_funtype_73_t copy_ctopdown_funtype_73(ctopdown_funtype_73_t x);




struct ctopdown_closure_74_s;
        typedef struct ctopdown_closure_74_s * ctopdown_closure_74_t;

struct ctopdown_closure_74_s {uint32_t count;
         ctopdown_funtype_68_ftbl_t ftbl;
         ctopdown_funtype_68_htbl_t htbl;
        ctopdown_funtype_73_t fvar_1;
        ctopdown_funtype_68_t fvar_2;};

ordstruct_adt_ordstruct_adt_t f_ctopdown_closure_74(struct ctopdown_closure_74_s * closure, ctopdown_stackADT_adt_t bvar);

ordstruct_adt_ordstruct_adt_t m_ctopdown_closure_74(struct ctopdown_closure_74_s * closure, ctopdown_stackADT_adt_t bvar);

extern ordstruct_adt_ordstruct_adt_t h_ctopdown_closure_74(ctopdown_stackADT_adt_t ivar_3, ctopdown_funtype_73_t ivar_2, ctopdown_funtype_68_t ivar_1);

extern ctopdown_closure_74_t new_ctopdown_closure_74(void);

extern void release_ctopdown_closure_74(ctopdown_funtype_68_t closure);

extern ctopdown_closure_74_t copy_ctopdown_closure_74(ctopdown_closure_74_t x);



struct ctopdown_funtype_75_s;
        typedef struct ctopdown_funtype_75_s * ctopdown_funtype_75_t;

struct ctopdown_funtype_75_ftbl_s {bool_t (* fptr)(struct ctopdown_funtype_75_s *, ctopdown_funtype_49_t);
        bool_t (* mptr)(struct ctopdown_funtype_75_s *, ctopdown_funtype_49_t);
        void (* rptr)(struct ctopdown_funtype_75_s *);
        struct ctopdown_funtype_75_s * (* cptr)(struct ctopdown_funtype_75_s *);};
typedef struct ctopdown_funtype_75_ftbl_s * ctopdown_funtype_75_ftbl_t;

struct ctopdown_funtype_75_hashentry_s {uint32_t keyhash; ctopdown_funtype_49_t key; bool_t value;}; 
typedef struct ctopdown_funtype_75_hashentry_s ctopdown_funtype_75_hashentry_t;

struct ctopdown_funtype_75_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_75_hashentry_t * data;}; 
typedef struct ctopdown_funtype_75_htbl_s * ctopdown_funtype_75_htbl_t;

struct ctopdown_funtype_75_s {uint32_t count;
        ctopdown_funtype_75_ftbl_t ftbl;
        ctopdown_funtype_75_htbl_t htbl;};
typedef struct ctopdown_funtype_75_s * ctopdown_funtype_75_t;

extern void release_ctopdown_funtype_75(ctopdown_funtype_75_t x);

extern ctopdown_funtype_75_t copy_ctopdown_funtype_75(ctopdown_funtype_75_t x);




struct ctopdown_closure_76_s;
        typedef struct ctopdown_closure_76_s * ctopdown_closure_76_t;

struct ctopdown_closure_76_s {uint32_t count;
         ctopdown_funtype_75_ftbl_t ftbl;
         ctopdown_funtype_75_htbl_t htbl;};

bool_t f_ctopdown_closure_76(struct ctopdown_closure_76_s * closure, ctopdown_funtype_49_t bvar);

bool_t m_ctopdown_closure_76(struct ctopdown_closure_76_s * closure, ctopdown_funtype_49_t bvar);

extern bool_t h_ctopdown_closure_76(ctopdown_funtype_49_t ivar_7);

extern ctopdown_closure_76_t new_ctopdown_closure_76(void);

extern void release_ctopdown_closure_76(ctopdown_funtype_75_t closure);

extern ctopdown_closure_76_t copy_ctopdown_closure_76(ctopdown_closure_76_t x);




struct ctopdown_closure_77_s;
        typedef struct ctopdown_closure_77_s * ctopdown_closure_77_t;

struct ctopdown_closure_77_s {uint32_t count;
         ctopdown_funtype_75_ftbl_t ftbl;
         ctopdown_funtype_75_htbl_t htbl;};

bool_t f_ctopdown_closure_77(struct ctopdown_closure_77_s * closure, ctopdown_funtype_49_t bvar);

bool_t m_ctopdown_closure_77(struct ctopdown_closure_77_s * closure, ctopdown_funtype_49_t bvar);

extern bool_t h_ctopdown_closure_77(ctopdown_funtype_49_t ivar_8);

extern ctopdown_closure_77_t new_ctopdown_closure_77(void);

extern void release_ctopdown_closure_77(ctopdown_funtype_75_t closure);

extern ctopdown_closure_77_t copy_ctopdown_closure_77(ctopdown_closure_77_t x);



struct ctopdown_record_78_s {
        uint32_t count; 
        mpz_t project_1;
        uint8_t project_2;
        ctopdown_stackADT_adt_t project_3;};
typedef struct ctopdown_record_78_s * ctopdown_record_78_t;

extern ctopdown_record_78_t new_ctopdown_record_78(void);

extern void release_ctopdown_record_78(ctopdown_record_78_t x);

extern ctopdown_record_78_t copy_ctopdown_record_78(ctopdown_record_78_t x);

extern bool_t equal_ctopdown_record_78(ctopdown_record_78_t x, ctopdown_record_78_t y);

extern ctopdown_record_78_t update_ctopdown_record_78_project_1(ctopdown_record_78_t x, mpz_t v);

extern ctopdown_record_78_t update_ctopdown_record_78_project_2(ctopdown_record_78_t x, uint8_t v);

extern ctopdown_record_78_t update_ctopdown_record_78_project_3(ctopdown_record_78_t x, ctopdown_stackADT_adt_t v);



struct ctopdown_funtype_79_s;
        typedef struct ctopdown_funtype_79_s * ctopdown_funtype_79_t;

struct ctopdown_funtype_79_ftbl_s {ctopdown_funtype_75_t (* fptr)(struct ctopdown_funtype_79_s *, ctopdown_record_78_t);
        ctopdown_funtype_75_t (* mptr)(struct ctopdown_funtype_79_s *, mpz_t, uint8_t, ctopdown_stackADT_adt_t);
        void (* rptr)(struct ctopdown_funtype_79_s *);
        struct ctopdown_funtype_79_s * (* cptr)(struct ctopdown_funtype_79_s *);};
typedef struct ctopdown_funtype_79_ftbl_s * ctopdown_funtype_79_ftbl_t;

struct ctopdown_funtype_79_hashentry_s {uint32_t keyhash; ctopdown_record_78_t key; ctopdown_funtype_75_t value;}; 
typedef struct ctopdown_funtype_79_hashentry_s ctopdown_funtype_79_hashentry_t;

struct ctopdown_funtype_79_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_79_hashentry_t * data;}; 
typedef struct ctopdown_funtype_79_htbl_s * ctopdown_funtype_79_htbl_t;

struct ctopdown_funtype_79_s {uint32_t count;
        ctopdown_funtype_79_ftbl_t ftbl;
        ctopdown_funtype_79_htbl_t htbl;};
typedef struct ctopdown_funtype_79_s * ctopdown_funtype_79_t;

extern void release_ctopdown_funtype_79(ctopdown_funtype_79_t x);

extern ctopdown_funtype_79_t copy_ctopdown_funtype_79(ctopdown_funtype_79_t x);




struct ctopdown_closure_80_s;
        typedef struct ctopdown_closure_80_s * ctopdown_closure_80_t;

struct ctopdown_closure_80_s {uint32_t count;
         ctopdown_funtype_79_ftbl_t ftbl;
         ctopdown_funtype_79_htbl_t htbl;
        mpz_t fvar_1;
        ctopdown_lang_spec_t fvar_2;
        ctopdown_funtype_52_t fvar_3;};

ctopdown_funtype_75_t f_ctopdown_closure_80(struct ctopdown_closure_80_s * closure, ctopdown_record_78_t bvar);

ctopdown_funtype_75_t m_ctopdown_closure_80(struct ctopdown_closure_80_s * closure, mpz_t bvar_1, uint8_t bvar_2, ctopdown_stackADT_adt_t bvar_3);

extern ctopdown_funtype_75_t h_ctopdown_closure_80(mpz_t ivar_6, uint8_t ivar_7, ctopdown_stackADT_adt_t ivar_8, mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3);

extern ctopdown_closure_80_t new_ctopdown_closure_80(void);

extern void release_ctopdown_closure_80(ctopdown_funtype_79_t closure);

extern ctopdown_closure_80_t copy_ctopdown_closure_80(ctopdown_closure_80_t x);




struct ctopdown_closure_81_s;
        typedef struct ctopdown_closure_81_s * ctopdown_closure_81_t;

struct ctopdown_closure_81_s {uint32_t count;
         ctopdown_funtype_75_ftbl_t ftbl;
         ctopdown_funtype_75_htbl_t htbl;
        ctopdown_stackADT_adt_t fvar_1;
        mpz_t fvar_2;
        ctopdown_funtype_52_t fvar_3;
        ctopdown_lang_spec_t fvar_4;
        mpz_t fvar_5;
        uint8_t fvar_6;};

bool_t f_ctopdown_closure_81(struct ctopdown_closure_81_s * closure, ctopdown_funtype_49_t bvar);

bool_t m_ctopdown_closure_81(struct ctopdown_closure_81_s * closure, ctopdown_funtype_49_t bvar);

extern bool_t h_ctopdown_closure_81(ctopdown_funtype_49_t ivar_11, ctopdown_stackADT_adt_t ivar_8, mpz_t ivar_6, ctopdown_funtype_52_t ivar_3, ctopdown_lang_spec_t ivar_2, mpz_t ivar_1, uint8_t ivar_7);

extern ctopdown_closure_81_t new_ctopdown_closure_81(void);

extern void release_ctopdown_closure_81(ctopdown_funtype_75_t closure);

extern ctopdown_closure_81_t copy_ctopdown_closure_81(ctopdown_closure_81_t x);



struct ctopdown_record_82_s {
        uint32_t count; 
        ctopdown_stackADT_adt_t stack;
        ctopdown_funtype_49_t scaf;};
typedef struct ctopdown_record_82_s * ctopdown_record_82_t;

extern ctopdown_record_82_t new_ctopdown_record_82(void);

extern void release_ctopdown_record_82(ctopdown_record_82_t x);

extern ctopdown_record_82_t copy_ctopdown_record_82(ctopdown_record_82_t x);

extern bool_t equal_ctopdown_record_82(ctopdown_record_82_t x, ctopdown_record_82_t y);

extern ctopdown_record_82_t update_ctopdown_record_82_stack(ctopdown_record_82_t x, ctopdown_stackADT_adt_t v);

extern ctopdown_record_82_t update_ctopdown_record_82_scaf(ctopdown_record_82_t x, ctopdown_funtype_49_t v);



struct ctopdown_record_83_s {
        uint32_t count; 
        uint32_t project_1;
        uint8_t project_2;};
typedef struct ctopdown_record_83_s * ctopdown_record_83_t;

extern ctopdown_record_83_t new_ctopdown_record_83(void);

extern void release_ctopdown_record_83(ctopdown_record_83_t x);

extern ctopdown_record_83_t copy_ctopdown_record_83(ctopdown_record_83_t x);

extern bool_t equal_ctopdown_record_83(ctopdown_record_83_t x, ctopdown_record_83_t y);

extern ctopdown_record_83_t update_ctopdown_record_83_project_1(ctopdown_record_83_t x, uint32_t v);

extern ctopdown_record_83_t update_ctopdown_record_83_project_2(ctopdown_record_83_t x, uint8_t v);



struct ctopdown_funtype_84_s;
        typedef struct ctopdown_funtype_84_s * ctopdown_funtype_84_t;

struct ctopdown_funtype_84_ftbl_s {ctopdown_record_82_t (* fptr)(struct ctopdown_funtype_84_s *, ctopdown_record_83_t);
        ctopdown_record_82_t (* mptr)(struct ctopdown_funtype_84_s *, uint32_t, uint8_t);
        void (* rptr)(struct ctopdown_funtype_84_s *);
        struct ctopdown_funtype_84_s * (* cptr)(struct ctopdown_funtype_84_s *);};
typedef struct ctopdown_funtype_84_ftbl_s * ctopdown_funtype_84_ftbl_t;

struct ctopdown_funtype_84_hashentry_s {uint32_t keyhash; ctopdown_record_83_t key; ctopdown_record_82_t value;}; 
typedef struct ctopdown_funtype_84_hashentry_s ctopdown_funtype_84_hashentry_t;

struct ctopdown_funtype_84_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_84_hashentry_t * data;}; 
typedef struct ctopdown_funtype_84_htbl_s * ctopdown_funtype_84_htbl_t;

struct ctopdown_funtype_84_s {uint32_t count;
        ctopdown_funtype_84_ftbl_t ftbl;
        ctopdown_funtype_84_htbl_t htbl;};
typedef struct ctopdown_funtype_84_s * ctopdown_funtype_84_t;

extern void release_ctopdown_funtype_84(ctopdown_funtype_84_t x);

extern ctopdown_funtype_84_t copy_ctopdown_funtype_84(ctopdown_funtype_84_t x);



struct ctopdown_funtype_85_s;
        typedef struct ctopdown_funtype_85_s * ctopdown_funtype_85_t;

struct ctopdown_funtype_85_ftbl_s {ctopdown_funtype_84_t (* fptr)(struct ctopdown_funtype_85_s *, ctopdown_record_82_t);
        ctopdown_funtype_84_t (* mptr)(struct ctopdown_funtype_85_s *, ctopdown_record_82_t);
        void (* rptr)(struct ctopdown_funtype_85_s *);
        struct ctopdown_funtype_85_s * (* cptr)(struct ctopdown_funtype_85_s *);};
typedef struct ctopdown_funtype_85_ftbl_s * ctopdown_funtype_85_ftbl_t;

struct ctopdown_funtype_85_hashentry_s {uint32_t keyhash; ctopdown_record_82_t key; ctopdown_funtype_84_t value;}; 
typedef struct ctopdown_funtype_85_hashentry_s ctopdown_funtype_85_hashentry_t;

struct ctopdown_funtype_85_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_85_hashentry_t * data;}; 
typedef struct ctopdown_funtype_85_htbl_s * ctopdown_funtype_85_htbl_t;

struct ctopdown_funtype_85_s {uint32_t count;
        ctopdown_funtype_85_ftbl_t ftbl;
        ctopdown_funtype_85_htbl_t htbl;};
typedef struct ctopdown_funtype_85_s * ctopdown_funtype_85_t;

extern void release_ctopdown_funtype_85(ctopdown_funtype_85_t x);

extern ctopdown_funtype_85_t copy_ctopdown_funtype_85(ctopdown_funtype_85_t x);




struct ctopdown_closure_86_s;
        typedef struct ctopdown_closure_86_s * ctopdown_closure_86_t;

struct ctopdown_closure_86_s {uint32_t count;
         ctopdown_funtype_85_ftbl_t ftbl;
         ctopdown_funtype_85_htbl_t htbl;
        mpz_t fvar_1;};

ctopdown_funtype_84_t f_ctopdown_closure_86(struct ctopdown_closure_86_s * closure, ctopdown_record_82_t bvar);

ctopdown_funtype_84_t m_ctopdown_closure_86(struct ctopdown_closure_86_s * closure, ctopdown_record_82_t bvar);

extern ctopdown_funtype_84_t h_ctopdown_closure_86(ctopdown_record_82_t ivar_22, mpz_t ivar_4);

extern ctopdown_closure_86_t new_ctopdown_closure_86(void);

extern void release_ctopdown_closure_86(ctopdown_funtype_85_t closure);

extern ctopdown_closure_86_t copy_ctopdown_closure_86(ctopdown_closure_86_t x);




struct ctopdown_closure_87_s;
        typedef struct ctopdown_closure_87_s * ctopdown_closure_87_t;

struct ctopdown_closure_87_s {uint32_t count;
         ctopdown_funtype_84_ftbl_t ftbl;
         ctopdown_funtype_84_htbl_t htbl;
        ctopdown_record_82_t fvar_1;
        mpz_t fvar_2;};

ctopdown_record_82_t f_ctopdown_closure_87(struct ctopdown_closure_87_s * closure, ctopdown_record_83_t bvar);

ctopdown_record_82_t m_ctopdown_closure_87(struct ctopdown_closure_87_s * closure, uint32_t bvar_1, uint8_t bvar_2);

extern ctopdown_record_82_t h_ctopdown_closure_87(uint32_t ivar_34, uint8_t ivar_35, ctopdown_record_82_t ivar_22, mpz_t ivar_4);

extern ctopdown_closure_87_t new_ctopdown_closure_87(void);

extern void release_ctopdown_closure_87(ctopdown_funtype_84_t closure);

extern ctopdown_closure_87_t copy_ctopdown_closure_87(ctopdown_closure_87_t x);



struct ctopdown_funtype_88_s;
        typedef struct ctopdown_funtype_88_s * ctopdown_funtype_88_t;

struct ctopdown_funtype_88_ftbl_s {ctopdown_record_82_t (* fptr)(struct ctopdown_funtype_88_s *, ctopdown_record_82_t);
        ctopdown_record_82_t (* mptr)(struct ctopdown_funtype_88_s *, ctopdown_record_82_t);
        void (* rptr)(struct ctopdown_funtype_88_s *);
        struct ctopdown_funtype_88_s * (* cptr)(struct ctopdown_funtype_88_s *);};
typedef struct ctopdown_funtype_88_ftbl_s * ctopdown_funtype_88_ftbl_t;

struct ctopdown_funtype_88_hashentry_s {uint32_t keyhash; ctopdown_record_82_t key; ctopdown_record_82_t value;}; 
typedef struct ctopdown_funtype_88_hashentry_s ctopdown_funtype_88_hashentry_t;

struct ctopdown_funtype_88_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_88_hashentry_t * data;}; 
typedef struct ctopdown_funtype_88_htbl_s * ctopdown_funtype_88_htbl_t;

struct ctopdown_funtype_88_s {uint32_t count;
        ctopdown_funtype_88_ftbl_t ftbl;
        ctopdown_funtype_88_htbl_t htbl;};
typedef struct ctopdown_funtype_88_s * ctopdown_funtype_88_t;

extern void release_ctopdown_funtype_88(ctopdown_funtype_88_t x);

extern ctopdown_funtype_88_t copy_ctopdown_funtype_88(ctopdown_funtype_88_t x);




struct ctopdown_closure_89_s;
        typedef struct ctopdown_closure_89_s * ctopdown_closure_89_t;

struct ctopdown_closure_89_s {uint32_t count;
         ctopdown_funtype_88_ftbl_t ftbl;
         ctopdown_funtype_88_htbl_t htbl;
        uint8_t fvar_1;
        mpz_t fvar_2;
        ctopdown_funtype_52_t fvar_3;
        ctopdown_lang_spec_t fvar_4;
        mpz_t fvar_5;};

ctopdown_record_82_t f_ctopdown_closure_89(struct ctopdown_closure_89_s * closure, ctopdown_record_82_t bvar);

ctopdown_record_82_t m_ctopdown_closure_89(struct ctopdown_closure_89_s * closure, ctopdown_record_82_t bvar);

extern ctopdown_record_82_t h_ctopdown_closure_89(ctopdown_record_82_t ivar_18, uint8_t ivar_5, mpz_t ivar_4, ctopdown_funtype_52_t ivar_3, ctopdown_lang_spec_t ivar_2, mpz_t ivar_1);

extern ctopdown_closure_89_t new_ctopdown_closure_89(void);

extern void release_ctopdown_closure_89(ctopdown_funtype_88_t closure);

extern ctopdown_closure_89_t copy_ctopdown_closure_89(ctopdown_closure_89_t x);



struct ctopdown_funtype_90_s;
        typedef struct ctopdown_funtype_90_s * ctopdown_funtype_90_t;

struct ctopdown_funtype_90_ftbl_s {ordstruct_adt_ordstruct_adt_t (* fptr)(struct ctopdown_funtype_90_s *, ctopdown_record_82_t);
        ordstruct_adt_ordstruct_adt_t (* mptr)(struct ctopdown_funtype_90_s *, ctopdown_record_82_t);
        void (* rptr)(struct ctopdown_funtype_90_s *);
        struct ctopdown_funtype_90_s * (* cptr)(struct ctopdown_funtype_90_s *);};
typedef struct ctopdown_funtype_90_ftbl_s * ctopdown_funtype_90_ftbl_t;

struct ctopdown_funtype_90_hashentry_s {uint32_t keyhash; ctopdown_record_82_t key; ordstruct_adt_ordstruct_adt_t value;}; 
typedef struct ctopdown_funtype_90_hashentry_s ctopdown_funtype_90_hashentry_t;

struct ctopdown_funtype_90_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_90_hashentry_t * data;}; 
typedef struct ctopdown_funtype_90_htbl_s * ctopdown_funtype_90_htbl_t;

struct ctopdown_funtype_90_s {uint32_t count;
        ctopdown_funtype_90_ftbl_t ftbl;
        ctopdown_funtype_90_htbl_t htbl;};
typedef struct ctopdown_funtype_90_s * ctopdown_funtype_90_t;

extern void release_ctopdown_funtype_90(ctopdown_funtype_90_t x);

extern ctopdown_funtype_90_t copy_ctopdown_funtype_90(ctopdown_funtype_90_t x);



struct ctopdown_record_91_s {
        uint32_t count; 
        ctopdown_funtype_49_t scaf;
        ctopdown_stackADT_adt_t stack;};
typedef struct ctopdown_record_91_s * ctopdown_record_91_t;

extern ctopdown_record_91_t new_ctopdown_record_91(void);

extern void release_ctopdown_record_91(ctopdown_record_91_t x);

extern ctopdown_record_91_t copy_ctopdown_record_91(ctopdown_record_91_t x);

extern bool_t equal_ctopdown_record_91(ctopdown_record_91_t x, ctopdown_record_91_t y);

extern ctopdown_record_91_t update_ctopdown_record_91_scaf(ctopdown_record_91_t x, ctopdown_funtype_49_t v);

extern ctopdown_record_91_t update_ctopdown_record_91_stack(ctopdown_record_91_t x, ctopdown_stackADT_adt_t v);



struct ctopdown_funtype_92_s;
        typedef struct ctopdown_funtype_92_s * ctopdown_funtype_92_t;

struct ctopdown_funtype_92_ftbl_s {ctopdown_record_91_t (* fptr)(struct ctopdown_funtype_92_s *, ctopdown_record_82_t);
        ctopdown_record_91_t (* mptr)(struct ctopdown_funtype_92_s *, ctopdown_record_82_t);
        void (* rptr)(struct ctopdown_funtype_92_s *);
        struct ctopdown_funtype_92_s * (* cptr)(struct ctopdown_funtype_92_s *);};
typedef struct ctopdown_funtype_92_ftbl_s * ctopdown_funtype_92_ftbl_t;

struct ctopdown_funtype_92_hashentry_s {uint32_t keyhash; ctopdown_record_82_t key; ctopdown_record_91_t value;}; 
typedef struct ctopdown_funtype_92_hashentry_s ctopdown_funtype_92_hashentry_t;

struct ctopdown_funtype_92_htbl_s {uint32_t size; uint32_t num_entries; ctopdown_funtype_92_hashentry_t * data;}; 
typedef struct ctopdown_funtype_92_htbl_s * ctopdown_funtype_92_htbl_t;

struct ctopdown_funtype_92_s {uint32_t count;
        ctopdown_funtype_92_ftbl_t ftbl;
        ctopdown_funtype_92_htbl_t htbl;};
typedef struct ctopdown_funtype_92_s * ctopdown_funtype_92_t;

extern void release_ctopdown_funtype_92(ctopdown_funtype_92_t x);

extern ctopdown_funtype_92_t copy_ctopdown_funtype_92(ctopdown_funtype_92_t x);




struct ctopdown_closure_93_s;
        typedef struct ctopdown_closure_93_s * ctopdown_closure_93_t;

struct ctopdown_closure_93_s {uint32_t count;
         ctopdown_funtype_92_ftbl_t ftbl;
         ctopdown_funtype_92_htbl_t htbl;
        uint8_t fvar_1;
        mpz_t fvar_2;
        ctopdown_funtype_52_t fvar_3;
        ctopdown_lang_spec_t fvar_4;
        mpz_t fvar_5;};

ctopdown_record_91_t f_ctopdown_closure_93(struct ctopdown_closure_93_s * closure, ctopdown_record_82_t bvar);

ctopdown_record_91_t m_ctopdown_closure_93(struct ctopdown_closure_93_s * closure, ctopdown_record_82_t bvar);

extern ctopdown_record_91_t h_ctopdown_closure_93(ctopdown_record_82_t ivar_18, uint8_t ivar_5, mpz_t ivar_4, ctopdown_funtype_52_t ivar_3, ctopdown_lang_spec_t ivar_2, mpz_t ivar_1);

extern ctopdown_closure_93_t new_ctopdown_closure_93(void);

extern void release_ctopdown_closure_93(ctopdown_funtype_92_t closure);

extern ctopdown_closure_93_t copy_ctopdown_closure_93(ctopdown_closure_93_t x);




struct ctopdown_closure_94_s;
        typedef struct ctopdown_closure_94_s * ctopdown_closure_94_t;

struct ctopdown_closure_94_s {uint32_t count;
         ctopdown_funtype_49_ftbl_t ftbl;
         ctopdown_funtype_49_htbl_t htbl;};

ctopdown_array_48_t f_ctopdown_closure_94(struct ctopdown_closure_94_s * closure, mpz_t bvar);

ctopdown_array_48_t m_ctopdown_closure_94(struct ctopdown_closure_94_s * closure, mpz_t bvar);

extern ctopdown_array_48_t h_ctopdown_closure_94(mpz_t ivar_11);

extern ctopdown_closure_94_t new_ctopdown_closure_94(void);

extern void release_ctopdown_closure_94(ctopdown_funtype_49_t closure);

extern ctopdown_closure_94_t copy_ctopdown_closure_94(ctopdown_closure_94_t x);



extern uint8_t ctopdown_num_non_terminals(void);

extern bool_t r_ctopdown_failp(ctopdown_ent_adt_t ivar_1);

extern bool_t r_ctopdown_pendingp(ctopdown_ent_adt_t ivar_1);

extern bool_t r_ctopdown_loopp(ctopdown_ent_adt_t ivar_1);

extern bool_t r_ctopdown_goodp(ctopdown_ent_adt_t ivar_1);

extern ctopdown_good_t update_ctopdown_ent_adt_span(ctopdown_ent_adt_t ivar_1, mpz_t ivar_3);

extern mpz_ptr_t ctopdown_ent_adt_span(ctopdown_ent_adt_t ivar_1);

extern ctopdown_ent_adt_t ctopdown_fail(void);

extern ctopdown_ent_adt_t ctopdown_pending(void);

extern ctopdown_ent_adt_t ctopdown_loop(void);

extern ctopdown_ent_adt_t ctopdown_good(mpz_t ivar_2);

extern ctopdown_funtype_2_t ctopdown_ent_ord(void);

extern uint8_t ctopdown_ord_1(ctopdown_ent_adt_t ivar_1);

extern bool_t ctopdown_subterm_1(ctopdown_ent_adt_t ivar_1, ctopdown_ent_adt_t ivar_2);

extern bool_t ctopdown_doublelessp_1(ctopdown_ent_adt_t ivar_1, ctopdown_ent_adt_t ivar_2);

extern ctopdown_funtype_3_t ctopdown_reduce_nat_1(mpz_t ivar_1, mpz_t ivar_2, mpz_t ivar_3, ctopdown_funtype_4_t ivar_4);

extern ctopdown_funtype_3_t ctopdown_REDUCE_nat_1(ctopdown_funtype_3_t ivar_1, ctopdown_funtype_3_t ivar_2, ctopdown_funtype_3_t ivar_3, ctopdown_funtype_7_t ivar_4);

extern ctopdown_funtype_9_t ctopdown_reduce_ordinal_1(ordstruct_adt_ordstruct_adt_t ivar_1, ordstruct_adt_ordstruct_adt_t ivar_2, ordstruct_adt_ordstruct_adt_t ivar_3, ctopdown_funtype_10_t ivar_4);

extern ctopdown_funtype_9_t ctopdown_REDUCE_ordinal_1(ctopdown_funtype_9_t ivar_1, ctopdown_funtype_9_t ivar_2, ctopdown_funtype_9_t ivar_3, ctopdown_funtype_12_t ivar_4);

extern bool_t r_ctopdown_epsilonp(ctopdown_peg_adt_t ivar_1);

extern bool_t r_ctopdown_failurep(ctopdown_peg_adt_t ivar_1);

extern bool_t r_ctopdown_anyp(ctopdown_peg_adt_t ivar_1);

extern bool_t r_ctopdown_terminalp(ctopdown_peg_adt_t ivar_1);

extern bool_t r_ctopdown_concatp(ctopdown_peg_adt_t ivar_1);

extern bool_t r_ctopdown_orp(ctopdown_peg_adt_t ivar_1);

extern bool_t r_ctopdown_andp(ctopdown_peg_adt_t ivar_1);

extern bool_t r_ctopdown_notp(ctopdown_peg_adt_t ivar_1);

extern ctopdown_any_t update_ctopdown_peg_adt_p(ctopdown_peg_adt_t ivar_1, ctopdown_array_15_t ivar_3);

extern ctopdown_array_15_t ctopdown_peg_adt_p(ctopdown_peg_adt_t ivar_1);

extern ctopdown_terminal_t update_ctopdown_peg_adt_a(ctopdown_peg_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t ctopdown_peg_adt_a(ctopdown_peg_adt_t ivar_1);

extern ctopdown_peg_adt_t update_ctopdown_peg_adt_e1(ctopdown_peg_adt_t ivar_1, uint8_t ivar_7);

extern uint8_t ctopdown_peg_adt_e1(ctopdown_peg_adt_t ivar_1);

extern ctopdown_peg_adt_t update_ctopdown_peg_adt_e2(ctopdown_peg_adt_t ivar_1, uint8_t ivar_7);

extern uint8_t ctopdown_peg_adt_e2(ctopdown_peg_adt_t ivar_1);

extern ctopdown_peg_adt_t update_ctopdown_peg_adt_e(ctopdown_peg_adt_t ivar_1, uint8_t ivar_7);

extern uint8_t ctopdown_peg_adt_e(ctopdown_peg_adt_t ivar_1);

extern ctopdown_peg_adt_t ctopdown_epsilon(void);

extern ctopdown_peg_adt_t ctopdown_failure(void);

extern ctopdown_peg_adt_t ctopdown_any(ctopdown_array_15_t ivar_2);

extern ctopdown_peg_adt_t ctopdown_terminal(uint8_t ivar_2);

extern ctopdown_peg_adt_t ctopdown_concat(uint8_t ivar_2, uint8_t ivar_3);

extern ctopdown_peg_adt_t ctopdown_choice(uint8_t ivar_2, uint8_t ivar_3);

extern ctopdown_peg_adt_t ctopdown_check(uint8_t ivar_2);

extern ctopdown_peg_adt_t ctopdown_neg(uint8_t ivar_2);

extern ctopdown_funtype_22_t ctopdown_peg_ord(void);

extern uint8_t ctopdown_ord_2(ctopdown_peg_adt_t ivar_1);

extern bool_t ctopdown_subterm_2(ctopdown_peg_adt_t ivar_1, ctopdown_peg_adt_t ivar_2);

extern bool_t ctopdown_doublelessp_2(ctopdown_peg_adt_t ivar_1, ctopdown_peg_adt_t ivar_2);

extern ctopdown_funtype_23_t ctopdown_reduce_nat_2(mpz_t ivar_1, mpz_t ivar_2, ctopdown_funtype_24_t ivar_3, ctopdown_array_25_t ivar_4, ctopdown_funtype_27_t ivar_5, ctopdown_funtype_27_t ivar_6, ctopdown_array_25_t ivar_7, ctopdown_array_25_t ivar_8);

extern ctopdown_funtype_23_t ctopdown_REDUCE_nat_2(ctopdown_funtype_23_t ivar_1, ctopdown_funtype_23_t ivar_2, ctopdown_funtype_30_t ivar_3, ctopdown_funtype_32_t ivar_4, ctopdown_funtype_34_t ivar_5, ctopdown_funtype_34_t ivar_6, ctopdown_funtype_32_t ivar_7, ctopdown_funtype_32_t ivar_8);

extern ctopdown_funtype_36_t ctopdown_reduce_ordinal_2(ordstruct_adt_ordstruct_adt_t ivar_1, ordstruct_adt_ordstruct_adt_t ivar_2, ctopdown_funtype_37_t ivar_3, ctopdown_array_38_t ivar_4, ctopdown_funtype_39_t ivar_5, ctopdown_funtype_39_t ivar_6, ctopdown_array_38_t ivar_7, ctopdown_array_38_t ivar_8);

extern ctopdown_funtype_36_t ctopdown_REDUCE_ordinal_2(ctopdown_funtype_36_t ivar_1, ctopdown_funtype_36_t ivar_2, ctopdown_funtype_41_t ivar_3, ctopdown_funtype_42_t ivar_4, ctopdown_funtype_43_t ivar_5, ctopdown_funtype_43_t ivar_6, ctopdown_funtype_42_t ivar_7, ctopdown_funtype_42_t ivar_8);

extern ctopdown_funtype_45_t ctopdown_good_entryp(mpz_t ivar_1, mpz_t ivar_2);

extern bool_t ctopdown_loop_or_pendingp(ctopdown_ent_adt_t ivar_1);

extern ctopdown_funtype_51_t ctopdown_good_failp(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3);

extern ctopdown_funtype_51_t ctopdown_good_loopp(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3);

extern ctopdown_funtype_56_t ctopdown_good_goodp(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3);

extern bool_t r_ctopdown_emptyp(ctopdown_stackADT_adt_t ivar_1);

extern bool_t r_ctopdown_pushp(ctopdown_stackADT_adt_t ivar_1);

extern ctopdown_push_t update_ctopdown_stackADT_adt_pos(ctopdown_stackADT_adt_t ivar_1, uint32_t ivar_3);

extern uint32_t ctopdown_stackADT_adt_pos(ctopdown_stackADT_adt_t ivar_1);

extern ctopdown_push_t update_ctopdown_stackADT_adt_nt(ctopdown_stackADT_adt_t ivar_1, uint8_t ivar_3);

extern uint8_t ctopdown_stackADT_adt_nt(ctopdown_stackADT_adt_t ivar_1);

extern ctopdown_push_t update_ctopdown_stackADT_adt_rest(ctopdown_stackADT_adt_t ivar_1, ctopdown_stackADT_adt_t ivar_3);

extern ctopdown_stackADT_adt_t ctopdown_stackADT_adt_rest(ctopdown_stackADT_adt_t ivar_1);

extern ctopdown_stackADT_adt_t ctopdown_empty(void);

extern ctopdown_stackADT_adt_t ctopdown_push(uint32_t ivar_2, uint8_t ivar_3, ctopdown_stackADT_adt_t ivar_4);

extern ctopdown_funtype_60_t ctopdown_stackADT_ord(void);

extern uint8_t ctopdown_ord_3(ctopdown_stackADT_adt_t ivar_1);

extern bool_t ctopdown_subterm_3(ctopdown_stackADT_adt_t ivar_1, ctopdown_stackADT_adt_t ivar_2);

extern bool_t ctopdown_doublelessp_3(ctopdown_stackADT_adt_t ivar_1, ctopdown_stackADT_adt_t ivar_2);

extern ctopdown_funtype_61_t ctopdown_reduce_nat_3(mpz_t ivar_1, ctopdown_funtype_63_t ivar_2);

extern ctopdown_funtype_61_t ctopdown_REDUCE_nat_3(ctopdown_funtype_61_t ivar_1, ctopdown_funtype_66_t ivar_2);

extern ctopdown_funtype_68_t ctopdown_reduce_ordinal_3(ordstruct_adt_ordstruct_adt_t ivar_1, ctopdown_funtype_70_t ivar_2);

extern ctopdown_funtype_68_t ctopdown_REDUCE_ordinal_3(ctopdown_funtype_68_t ivar_1, ctopdown_funtype_73_t ivar_2);

extern bool_t ctopdown_instack(uint32_t ivar_1, uint8_t ivar_2, ctopdown_stackADT_adt_t ivar_3);

extern ctopdown_funtype_75_t ctopdown_good_tscaffoldp(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3, ctopdown_stackADT_adt_t ivar_4);

extern ctopdown_funtype_75_t ctopdown_tdstack_scaffoldp(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3, mpz_t ivar_4, ctopdown_stackADT_adt_t ivar_5);

extern ctopdown_funtype_79_t ctopdown_fine_tdstack_scaffoldp(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3);

extern ctopdown_funtype_85_t ctopdown_putstack(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3, mpz_t ivar_4, uint8_t ivar_5);

extern ctopdown_funtype_88_t ctopdown_step(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3, mpz_t ivar_4, uint8_t ivar_5);

extern ctopdown_funtype_90_t ctopdown_size(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3, mpz_t ivar_4, uint8_t ivar_5);

extern ctopdown_funtype_92_t ctopdown_parse(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3, mpz_t ivar_4, uint8_t ivar_5);

extern ctopdown_ent_adt_t ctopdown_doparse(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3, uint8_t ivar_4);
#endif