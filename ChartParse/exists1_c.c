//Code generated using pvs2ir2c
#include "exists1_c.h"

void release_exists1_funtype_0(exists1_funtype_0_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

exists1_funtype_0_t copy_exists1_funtype_0(exists1_funtype_0_t x){return x->ftbl->cptr(x);}

exists1_funtype_0_t equal_exists1_funtype_0(exists1_funtype_0_t x, exists1_funtype_0_t y){
        return false;}

extern bool_t exists1__uniquep(type_actual_t exists1__T, exists1_funtype_0_t ivar_1){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}

extern bool_t exists1__exists1(type_actual_t exists1__T, exists1_funtype_0_t ivar_1){
        bool_t result;
        bool_t ivar_3;
        ivar_3 = (bool_t)u_undef_quant_expr();
        bool_t ivar_4;
        ivar_4 = (bool_t)exists1__uniquep((type_actual_t)exists1__T, (exists1_funtype_0_t)ivar_1);
        result = ivar_3 && ivar_4;

        return result;
}