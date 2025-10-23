//Code generated using pvs2ir
#ifndef _list_props_uint32_h 
#define _list_props_uint32_h

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

#include "list_props_c.h"

#include "list_adt_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

//cc -O3 -Wall -o list_props_uint32 -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/list_props_c.c /Users/e21660/shankar/pvs.git/lib/list_adt_c.c /Users/e21660/shankar/pvs.git/lib/ordinals_c.c /Users/e21660/shankar/pvs.git/lib/ordstruct_adt_c.c /Users/e21660/shankar/pvs.git/lib/integertypes_c.c /Users/e21660/shankar/pvs.git/lib/exp2_c.c /Users/e21660/shankar/pvs.git/lib/euclidean_division_c.c /Users/e21660/shankar/pvs.git/lib/real_defs_c.c list_props_uint32_c.c -lgmp 

extern mpz_ptr_t list_props_uint32__length(list_adt__list_adt_t ivar_1);

extern bool_t list_props_uint32__member(uint32_t ivar_1, list_adt__list_adt_t ivar_2);

extern uint32_t list_props_uint32__nth(list_adt__list_adt_t ivar_1, mpz_ptr_t ivar_2);

extern list_adt__list_adt_t list_props_uint32__append(list_adt__list_adt_t ivar_1, list_adt__list_adt_t ivar_2);

extern list_adt__list_adt_t list_props_uint32__reverse(list_adt__list_adt_t ivar_1);
#endif