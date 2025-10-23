//Code generated using pvs2ir2c
#include "integertypes_c.h"

uint8_t integertypes__max8(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint8_t)255;

        defined = true;};
        
        return result;
}

uint16_t integertypes__max16(void){
        uint16_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint16_t)65535;

        defined = true;};
        
        return result;
}

uint32_t integertypes__max32(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint32_t)4294967295;

        defined = true;};
        
        return result;
}

uint64_t integertypes__max64(void){
        uint64_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_1;
        uint64_t ivar_3;
        ivar_3 = (uint64_t)9223372036854775807;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)2;
        ivar_1 = (uint64_t)((uint64_t)ivar_3 * (uint64_t)ivar_4);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)1;
        result = (uint64_t)(ivar_1 + ivar_2);

        defined = true;};
        
        return result;
}

int8_t integertypes__mini8(void){
        int8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    mpz_ptr_t ivar_1;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)7;
        mpz_ptr_t ivar_4;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_4, ivar_6);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_4);
        result = (int8_t) mpz_get_si(ivar_1);

        defined = true;};
        
        return result;
}

int16_t integertypes__mini16(void){
        int16_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    mpz_ptr_t ivar_1;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)15;
        mpz_ptr_t ivar_4;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_4, ivar_6);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_4);
        result = (int16_t) mpz_get_si(ivar_1);

        defined = true;};
        
        return result;
}

int32_t integertypes__mini32(void){
        int32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    mpz_ptr_t ivar_1;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)31;
        mpz_ptr_t ivar_4;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_4, ivar_6);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_4);
        result = (int32_t) mpz_get_si(ivar_1);

        defined = true;};
        
        return result;
}

int64_t integertypes__mini64(void){
        int64_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    mpz_ptr_t ivar_1;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)63;
        mpz_ptr_t ivar_4;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_4, ivar_6);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_4);
        result = (int64_t) mpz_get_si(ivar_1);

        defined = true;};
        
        return result;
}

int8_t integertypes__maxi8(void){
        int8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    mpz_ptr_t ivar_1;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)7;
        mpz_ptr_t ivar_5;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_5, ivar_7);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_5);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)1;
        mpz_t tmp1806;
        mpz_init(tmp1806);
        mpz_sub_ui(tmp1806, ivar_1, ivar_2);
        result = (int8_t) mpz_get_si(tmp1806);
        mpz_clear(tmp1806);

        defined = true;};
        
        return result;
}

int16_t integertypes__maxi16(void){
        int16_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    mpz_ptr_t ivar_1;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)15;
        mpz_ptr_t ivar_5;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_5, ivar_7);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_5);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)1;
        mpz_t tmp1807;
        mpz_init(tmp1807);
        mpz_sub_ui(tmp1807, ivar_1, ivar_2);
        result = (int16_t) mpz_get_si(tmp1807);
        mpz_clear(tmp1807);

        defined = true;};
        
        return result;
}

int32_t integertypes__maxi32(void){
        int32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    mpz_ptr_t ivar_1;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)31;
        mpz_ptr_t ivar_5;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_5, ivar_7);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_5);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)1;
        mpz_t tmp1808;
        mpz_init(tmp1808);
        mpz_sub_ui(tmp1808, ivar_1, ivar_2);
        result = (int32_t) mpz_get_si(tmp1808);
        mpz_clear(tmp1808);

        defined = true;};
        
        return result;
}

int64_t integertypes__maxi64(void){
        int64_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    mpz_ptr_t ivar_1;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)63;
        mpz_ptr_t ivar_5;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_5, ivar_7);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_5);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)1;
        mpz_t tmp1809;
        mpz_init(tmp1809);
        mpz_sub_ui(tmp1809, ivar_1, ivar_2);
        result = (int64_t) mpz_get_si(tmp1809);
        mpz_clear(tmp1809);

        defined = true;};
        
        return result;
}

uint32_t integertypes__maxindex(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    mpz_ptr_t ivar_1;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)28;
        mpz_ptr_t ivar_5;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_5, ivar_7);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_5);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)1;
        mpz_t tmp1810;
        mpz_init(tmp1810);
        mpz_sub_ui(tmp1810, ivar_1, ivar_2);
        result = (uint32_t) mpz_get_ui(tmp1810);
        mpz_clear(tmp1810);

        defined = true;};
        
        return result;
}

uint32_t integertypes__u32div(uint32_t ivar_1, uint32_t ivar_2){
        uint32_t  result;
        result = (uint32_t)div_uint32_uint32(ivar_1, ivar_2);

        
        return result;
}