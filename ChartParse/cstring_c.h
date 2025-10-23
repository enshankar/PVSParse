//Code generated using pvs2ir
#ifndef _cstring_h 
#define _cstring_h

#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <stdbool.h>

#include <string.h>

#include <math.h>

#include <gmp.h>

#include "pvslib.h"

#include "integertypes_c.h"

#include "exp2_c.h"

#include "modulo_arithmetic_c.h"

#include "euclidean_division_c.h"

#include "strings_c.h"

#include "character_adt_c.h"

#include "nat_types_c.h"

#include "ordinals_c.h"

#include "ordstruct_adt_c.h"

#include "real_defs_c.h"

#include "real_types_c.h"

//cc -O3 -Wall -o cstring -I /Users/e21660/shankar/pvs.git/src/groundeval/ pvslib.c  cstring_c.c integertypes_c.c exp2_c.c modulo_arithmetic_c.c euclidean_division_c.c strings_c.c character_adt_c.c nat_types_c.c ordinals_c.c ordstruct_adt_c.c real_defs_c.c real_types_c.c -lgmp 

typedef string_t cstring_cstring_t;



typedef char cstring_cchar_t;



static inline uint8_t cstring_code(cstring_cchar_t x){return (uint8_t)x;}

static inline uint16_t cstring_length(cstring_cstring_t s){uint16_t length = (uint16_t)strlen(s->strval);
         if (s->count > 1){s->count--;} else {safe_free(s);}
         return length;}

static inline cstring_cchar_t cstring_char(cstring_cstring_t s, uint16_t i){if (i < strlen(s)){char c = s->strval[i];
         if (s->count > 1){s->count--;} else {safe_free(s);}
         return c;}
     else return '0';}

static inline cstring_t cstring_mk_cstring(strings_string_t s){
        uint16_t length = (uint16_t)mpz_get_ui(s->length);
         cstring_cstring_t result = (cstring_cstring_t)safe_malloc(sizeof(string_s) + sizeof(length) + 1);
         result->count = 1; result->size = length + 1;
         uint16_t i;
         for (i = 0; i < length; i++){result->strval[i] = s->seq[i];};
         result->strval[i] = '\0'; return result;}

static inline cstring_cstring_t cstring_empty(void){
        cstring_cstring_t result = (cstring_cstring_t)safe_malloc(sizeof(string_s) + sizeof(char));
         result->count = 1; result->size = 1; result->strval[0] = '\0';
         return result;}

static inline cstring_cstring_t cstring_plus(cstring_cstring_t s1, cstring_cstring_t s2){
         uint16_t l1 = strlen(s1->strval);
         uint16_t l2 = strlen(s1->strval);
         if (l1  == 0){return s2;} else {if (l2 == 0) return s2;}

         uint16_t length = l1 + l2;
         uint16_t size = length + 1;
         result = (cstring_cstring_t)safe_malloc(sizeof(string_s) + size);
         result->count = 1;
         result->size = size;
         strcpy(result->strval, s1->strval);
         strcat(result->strval, s2->strval);
        if (s1->count > 1){s1->count--;} else {safe_free(s1)};
        if (s2->count > 1){s2->count--;} else {safe_free(s2)};
        return result;
}

static inline bool_t cstring_charcmp(cstring_cchar_t c1, cstring_cchar_t c2){return c1 < c2;}

static inline uint16_t cstring_strdiff(cstring_cstring_t s1, cstring_cstring_t s2){uint16_t i = 0;
        while ((i < strlen(s1->strval)) && (i < strlen(s2->strval)) && (s1->strval[i] == s2->strval[i])){i++;};
        if (s1->count > 1){s1->count--;} else {safe_free(s1);}
        if (s2->count > 1){s1->count--;} else {safe_free(s2);}
         return i;}

static inline int8_t cstring_strcmp(cstring_cstring_t s1, cstring_cstring_t s2){
         int8 cmp = strcmp(s1->strval, s2->strval);
        if (s1->count > 1){s1->count--;} else {safe_free(s1);}
        if (s2->count > 1){s2->count--;} else {safe_free(s2);}
        return (cmp < 0)? -1 : (cmp > 0) ?  1 : 0;
}

static inline cstring_cstring_t cstring_substr(cstring_cstring_t s, uint16_t i, uint16_t j){uint16_t length = (i > j) ? i - j : j - i;
         uint16_t start = (i > j) ?  j :  i;
         cstring_cstring_t result = (cstring_cstring_t)safe_malloc(sizeof(string_s) + length);
         result->count = 1; result->size = length;
         memcpy(result->strval, (char *)(s + start), length);

        if (s->count > 1){s->count--;} else {safe_free(s);}
         return result; }
#endif