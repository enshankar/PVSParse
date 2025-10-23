//Code generated using pvs2ir2c
#include "integertypes_c.h"

extern uint8_t integertypes__max8(void){
        uint8_t result;
        result = (uint8_t)255;

        return result;
}

extern uint16_t integertypes__max16(void){
        uint16_t result;
        result = (uint16_t)65535;

        return result;
}

extern uint32_t integertypes__max32(void){
        uint32_t result;
        result = (uint32_t)4294967295;

        return result;
}

extern uint64_t integertypes__max64(void){
        uint64_t result;
        uint64_t ivar_1;
        uint64_t ivar_3;
        ivar_3 = (uint64_t)9223372036854775807;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)2;
        ivar_1 = (uint64_t)((uint64_t)ivar_3 * (uint64_t)ivar_4);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)1;
        result = (uint64_t)(ivar_1 + ivar_2);

        return result;
}

extern int8_t integertypes__mini8(void){
        int8_t result;
        mpz_ptr_t ivar_1;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)7;
        mpz_ptr_t ivar_4;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_4, ivar_6);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_4);
        result = (int8_t) mpz_get_si(ivar_1);

        return result;
}

extern int16_t integertypes__mini16(void){
        int16_t result;
        mpz_ptr_t ivar_1;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)15;
        mpz_ptr_t ivar_4;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_4, ivar_6);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_4);
        result = (int16_t) mpz_get_si(ivar_1);

        return result;
}

extern int32_t integertypes__mini32(void){
        int32_t result;
        mpz_ptr_t ivar_1;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)31;
        mpz_ptr_t ivar_4;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_4, ivar_6);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_4);
        result = (int32_t) mpz_get_si(ivar_1);

        return result;
}

extern int64_t integertypes__mini64(void){
        int64_t result;
        mpz_ptr_t ivar_1;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)63;
        mpz_ptr_t ivar_4;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_4, ivar_6);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_4);
        result = (int64_t) mpz_get_si(ivar_1);

        return result;
}

extern int8_t integertypes__maxi8(void){
        int8_t result;
        mpz_ptr_t ivar_1;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)7;
        mpz_ptr_t ivar_5;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_5, ivar_7);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_5);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)1;
        mpz_t tmp21959;
        mpz_init(tmp21959);
        mpz_sub_ui(tmp21959, ivar_1, ivar_2);
        result = (int8_t) mpz_get_si(tmp21959);
        mpz_clear(tmp21959);

        return result;
}

extern int16_t integertypes__maxi16(void){
        int16_t result;
        mpz_ptr_t ivar_1;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)15;
        mpz_ptr_t ivar_5;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_5, ivar_7);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_5);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)1;
        mpz_t tmp21960;
        mpz_init(tmp21960);
        mpz_sub_ui(tmp21960, ivar_1, ivar_2);
        result = (int16_t) mpz_get_si(tmp21960);
        mpz_clear(tmp21960);

        return result;
}

extern int32_t integertypes__maxi32(void){
        int32_t result;
        mpz_ptr_t ivar_1;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)31;
        mpz_ptr_t ivar_5;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_5, ivar_7);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_5);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)1;
        mpz_t tmp21961;
        mpz_init(tmp21961);
        mpz_sub_ui(tmp21961, ivar_1, ivar_2);
        result = (int32_t) mpz_get_si(tmp21961);
        mpz_clear(tmp21961);

        return result;
}

extern int64_t integertypes__maxi64(void){
        int64_t result;
        mpz_ptr_t ivar_1;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)63;
        mpz_ptr_t ivar_5;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_5, ivar_7);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_5);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)1;
        mpz_t tmp21962;
        mpz_init(tmp21962);
        mpz_sub_ui(tmp21962, ivar_1, ivar_2);
        result = (int64_t) mpz_get_si(tmp21962);
        mpz_clear(tmp21962);

        return result;
}

extern uint32_t integertypes__maxindex(void){
        uint32_t result;
        mpz_ptr_t ivar_1;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)28;
        mpz_ptr_t ivar_5;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_5, ivar_7);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_5);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)1;
        mpz_t tmp21963;
        mpz_init(tmp21963);
        mpz_sub_ui(tmp21963, ivar_1, ivar_2);
        result = (uint32_t) mpz_get_ui(tmp21963);
        mpz_clear(tmp21963);

        return result;
}

extern uint32_t integertypes__u32div(uint32_t ivar_1, uint32_t ivar_2){
        uint32_t result;
        result = (uint32_t)div_uint32_uint32(ivar_1, ivar_2);

        return result;
}

extern int16_t integertypes__i16max(int16_t ivar_1, int16_t ivar_2){
        int16_t result;
        mpq_ptr_t ivar_6;
        //copying to mpq from int16;
        mpq_mk_set_si(ivar_6, ivar_1);
        mpq_ptr_t ivar_7;
        //copying to mpq from int16;
        mpq_mk_set_si(ivar_7, ivar_2);
        mpq_ptr_t ivar_5;
        ivar_5 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_6, (mpq_ptr_t)ivar_7);
        //copying to int16 from mpq;
        result = (int16_t)mpq_get_si(ivar_5);
        mpq_clear(ivar_5);

        return result;
}