//Code generated using pvs2ir2c
#include "bv_nat_c.h"

extern mpz_ptr_t bv_nat__bv2nat_rec(mpz_t N, mpz_t ivar_1, bv__bvec_t ivar_2){
        mpz_ptr_t result;
        bool_t ivar_3;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        int64_t tmp4152 = mpz_cmp_ui(ivar_1, ivar_5);
        ivar_3 = (tmp4152 == 0);
        if (ivar_3){ 
             release_bv__bvec(ivar_2, N);
             result = safe_malloc(sizeof(mpz_t));
             mpz_init(result);
             mpz_mk_set_ui(result, 0);
} else {
        
             mpz_ptr_t ivar_7;
             mpz_ptr_t ivar_9;
             mpz_ptr_t ivar_16;
             uint8_t ivar_13;
             ivar_13 = (uint8_t)1;
             mpz_mk_sub_ui(ivar_16, ivar_1, (uint64_t)ivar_13);
             ivar_9 = (mpz_ptr_t)exp2__exp2(ivar_16);
             uint8_t ivar_10;
             bool_t ivar_28;
             /* N */ mpz_ptr_t ivar_24;
             ivar_24 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_24);
             //copying to mpz from mpz;
             mpz_mk_set(ivar_24, N);
             mpz_ptr_t ivar_26;
             uint8_t ivar_21;
             ivar_21 = (uint8_t)1;
             mpz_mk_sub_ui(ivar_26, ivar_1, (uint64_t)ivar_21);
             ivar_2->count++;
             ivar_28 = (bool_t)bv__caret(ivar_24, (bv__bvec_t)ivar_2, ivar_26);
             ivar_10 = (uint8_t)bit__b2n((bool_t)ivar_28);
             mpz_mk_mul_ui(ivar_7, ivar_9, (uint64_t)ivar_10);
             mpz_ptr_t ivar_8;
             mpz_ptr_t ivar_36;
             uint8_t ivar_33;
             ivar_33 = (uint8_t)1;
             mpz_mk_sub_ui(ivar_36, ivar_1, (uint64_t)ivar_33);
             ivar_8 = (mpz_ptr_t)bv_nat__bv2nat_rec(N, ivar_36, (bv__bvec_t)ivar_2);
             mpz_mk_add(result, ivar_8, ivar_7);
};

        return result;
}

extern mpz_ptr_t bv_nat__bv2nat(mpz_t N, bv__bvec_t ivar_1){
        mpz_ptr_t result;
        result = (mpz_ptr_t)bv_nat__bv2nat_rec(N, N, (bv__bvec_t)ivar_1);

        return result;
}

extern bv__bvec_t bv_nat__nat2bv(mpz_t N, mpz_t ivar_1){
        bv__bvec_t result;
        pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        return result;
}