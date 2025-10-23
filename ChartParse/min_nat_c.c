//Code generated using pvs2ir2c
#include "min_nat_c.h"

void release_min_nat_funtype_0(min_nat_funtype_0_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

min_nat_funtype_0_t copy_min_nat_funtype_0(min_nat_funtype_0_t x){return x->ftbl->cptr(x);}

min_nat_funtype_0_t equal_min_nat_funtype_0(min_nat_funtype_0_t x, min_nat_funtype_0_t y){
        return false;}

extern mpz_ptr_t min_nat__min(type_actual_t min_nat__T, min_nat_funtype_0_t ivar_1){
        mpz_ptr_t result;
        pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        return result;
}

extern bool_t min_nat__minimump(type_actual_t min_nat__T, min_nat__T_t ivar_1, min_nat_funtype_0_t ivar_2){
        bool_t result;
        bool_t ivar_4;
        ivar_4 = (bool_t)ivar_2->ftbl->fptr(ivar_2, ivar_1);
        ivar_2->ftbl->rptr(ivar_2);
        bool_t ivar_5;
        ivar_5 = (bool_t)u_undef_quant_expr();
        result = ivar_4 && ivar_5;

        return result;
}