//Code generated using pvs2ir2c
#include "exp2_c.h"

extern mpz_ptr_t exp2__exp2(mpz_ptr_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_2;
        mpz_ptr_t ivar_3;
        ivar_3 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_3);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_3, ivar_1);
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        int64_t tmp21957 = mpz_cmp_ui(ivar_3, ivar_4);
        ivar_2 = (tmp21957 == 0);
        if (ivar_2){ 
             result = safe_malloc(sizeof(mpz_t));
             mpz_init(result);
             mpz_mk_set_ui(result, 1);
} else {
        
             uint8_t ivar_6;
             ivar_6 = (uint8_t)2;
             mpz_ptr_t ivar_7;
             mpz_ptr_t ivar_15;
             mpz_ptr_t ivar_9;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_9, ivar_1);
             mpz_clear(ivar_1);
             uint8_t ivar_10;
             ivar_10 = (uint8_t)1;
             mpz_mk_sub_ui(ivar_15, ivar_9, (uint64_t)ivar_10);
             mpz_ptr_t ivar_13;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_13, ivar_15);
             mpz_clear(ivar_15);
             ivar_7 = (mpz_ptr_t)exp2__exp2(ivar_13);
             mpz_mk_mul_ui(result, ivar_7, (uint64_t)ivar_6);
};

        return result;
}

extern mpz_ptr_t exp2__log2(mpz_ptr_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_2;
        mpz_ptr_t ivar_3;
        ivar_3 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_3);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_3, ivar_1);
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        int64_t tmp21958 = mpz_cmp_ui(ivar_3, ivar_4);
        ivar_2 = (tmp21958 == 0);
        if (ivar_2){ 
             result = safe_malloc(sizeof(mpz_t));
             mpz_init(result);
             mpz_mk_set_ui(result, 0);
} else {
        
             mpz_ptr_t ivar_6;
             mpz_ptr_t ivar_15;
             mpz_ptr_t ivar_9;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_9, ivar_1);
             mpz_clear(ivar_1);
             uint8_t ivar_10;
             ivar_10 = (uint8_t)2;
             mpz_mk_fdiv_q_ui(ivar_15, ivar_9, ivar_10);
             mpz_ptr_t ivar_13;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_13, ivar_15);
             mpz_clear(ivar_15);
             ivar_6 = (mpz_ptr_t)exp2__log2(ivar_13);
             uint8_t ivar_7;
             ivar_7 = (uint8_t)1;
             mpz_mk_set_ui(result, (uint64_t)ivar_7);
             mpz_add(result, result, ivar_6);
};

        return result;
}