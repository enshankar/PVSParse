//Code generated using pvs2ir
#ifndef _integer_bv_ops_h 
#define _integer_bv_ops_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <stdarg.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

#include "bv_nat_c.h"

#include "bv_c.h"

#include "bit_c.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

#include "real_defs_c.h"

//cc -O3 -Wall -o integer_bv_ops -I /Users/e21660/shankar/pvs.git/src/groundeval/ pvslib.c  integer_bv_ops_c.c bv_nat_c.c bv_c.c bit_c.c integertypes_c.c exp2_c.c modulo_arithmetic_c.c euclidean_division_c.c real_defs_c.c -lgmp 

static inline uint8_t integer_bv_ops__u8xor(uint8_t x8, uint8_t y8){return x8^y8;}

static inline uint16_t integer_bv_ops__u16xor(uint16_t x16, uint16_t y16){return x16^y16;}

static inline uint32_t integer_bv_ops__u32xor(uint32_t x32, uint32_t y32){return x32^y32;}

static inline uint64_t integer_bv_ops__u64xor(uint64_t x64, uint64_t y64){return x64 & y64;}

static inline uint8_t integer_bv_ops__u8and(uint8_t x8, uint8_t y8){return x8 & y8;}

static inline uint16_t integer_bv_ops__u16and(uint16_t x16, uint16_t y16){return x16 & y16;}

static inline uint32_t integer_bv_ops__u32and(uint32_t x32, uint32_t y32){return x32 & y32;}

static inline uint64_t integer_bv_ops__u64and(uint64_t x64, uint64_t y64){return x64 & y64;}

static inline uint8_t integer_bv_ops__u8or(uint8_t x8, uint8_t y8){return x8 | y8;}

static inline uint16_t integer_bv_ops__u16or(uint16_t x16, uint16_t y16){return x16 | y16;}

static inline uint32_t integer_bv_ops__u32or(uint32_t x32, uint32_t y32){return x32 | y32;}

static inline uint64_t integer_bv_ops__u64or(uint64_t x64, uint64_t y64){return x64 | y64;}

static inline uint8_t integer_bv_ops__u8not(uint8_t x8){return ~x8;}

static inline uint16_t integer_bv_ops__u16not(uint16_t x16){return ~x16;}

static inline uint32_t integer_bv_ops__u32not(uint32_t x32){return ~x32;}

static inline uint64_t integer_bv_ops__u64not(uint64_t x64){return ~x64;}
#endif