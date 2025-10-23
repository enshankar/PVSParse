//Code generated using pvs2ir
#ifndef _nil_h 
#define _nil_h

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

#include "lex2_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "sets_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

#include "sigmatopdowntest_c.h"

#include "sigmatopdown_c.h"

#include "arrayCount_c.h"

//cc -O3 -Wall -o nil -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/lex2_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/sets_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c sigmatopdowntest_c.c sigmatopdown_c.c arrayCount_c.c -lgmp 

extern bool_t sigmatopdowntest__digit(uint8_t ivar_1);

extern bool_t sigmatopdowntest__any(uint8_t ivar_1);

extern sigmatopdown__peg_adt_t sigmatopdowntest__pyaml(uint8_t ivar_1);

extern sigmatopdowntest_array_3_t sigmatopdowntest__empty(uint8_t ivar_1);

extern sigmatopdowntest_funtype_6_t sigmatopdowntest__cat(uint8_t ivar_1, mpz_ptr_t ivar_2);

extern uint8_t sigmatopdowntest__tok0(uint8_t ivar_1);

extern uint8_t sigmatopdowntest__tok1(uint8_t ivar_1);

extern uint8_t sigmatopdowntest__emptydict(uint8_t ivar_1);

extern uint8_t sigmatopdowntest__obrace(uint8_t ivar_1);

extern uint8_t sigmatopdowntest__cbrace(uint8_t ivar_1);

extern uint8_t sigmatopdowntest__colon(uint8_t ivar_1);

extern sigmatopdowntest_array_3_t sigmatopdowntest__emptydict2(void);

extern sigmatopdowntest_array_3_t sigmatopdowntest__dict1(void);

extern sigmatopdown__ent_adt_t sigmatopdowntest__test0(void);

extern sigmatopdown__ent_adt_t sigmatopdowntest__test1(void);

extern sigmatopdown__ent_adt_t sigmatopdowntest__test11(void);

extern sigmatopdown__ent_adt_t sigmatopdowntest__test2(void);

extern sigmatopdown__ent_adt_t sigmatopdowntest__iparse(uint8_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdowntest_array_3_t ivar_3, uint8_t ivar_4, uint8_t ivar_5);
#endif