//Code generated using pvs2ir
#ifndef _identity_h 
#define _identity_h

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

//cc -O3 -Wall -o identity -I /Users/e21660/shankar/pvs.git//include /Users/e21660/shankar/pvs.git//lib/pvslib.c  -I /Users/e21660/shankar/pvs.git/lib /Users/e21660/shankar/pvs.git/lib/identity_c.c -lgmp 

typedef pointer_t identity__T_t;

extern identity__T_t identity__I(type_actual_t identity__T, identity__T_t ivar_1);

extern identity__T_t identity__id(type_actual_t identity__T, identity__T_t ivar_1);

extern identity__T_t identity__identity(type_actual_t identity__T, identity__T_t ivar_1);
#endif