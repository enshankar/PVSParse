//Code generated using pvs2ir2c
#include "poly_c.h"

extern poly__T_t poly__idd(type_actual_t poly__T, poly__T_t ivar_1){
        poly__T_t result;
        //copying to poly__T from poly__T;
        result = (poly__T_t)ivar_1;
        result->count++;
        poly__T->release_ptr(ivar_1, poly__T);

        return result;
}