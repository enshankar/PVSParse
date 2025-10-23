//Code generated using pvs2ir2c
#include "test_real_defs_c.h"

bool_t test_real_defs__test_sgn1(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        mpz_ptr_t ivar_1;
        mpq_ptr_t ivar_8;
        int8_t ivar_4;
        ivar_4 = (int8_t)-3;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)17;
        mpq_t tmp18359;
        mpq_init(tmp18359);
        mpq_t tmp18360;
        mpq_init(tmp18360);
        mpq_set_si(tmp18359, (int64_t)ivar_4, 1);
        mpq_set_ui(tmp18360, ivar_5, 1);
        mpq_mk_div(ivar_8, tmp18359, tmp18360);
        mpq_clear(tmp18359);
        mpq_clear(tmp18360);
        ivar_1 = (mpz_ptr_t)real_defs__sgn((mpq_ptr_t)ivar_8);
        int8_t ivar_2;
        ivar_2 = (int8_t)-1;
        int64_t tmp18361 = mpz_cmp_si(ivar_1, ivar_2);
        result = (tmp18361 == 0);
        defined = true;};
        
        
        return result;
}

bool_t test_real_defs__test_sgn2(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        mpz_ptr_t ivar_1;
        mpq_ptr_t ivar_8;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)5;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)9;
        mpq_t tmp18362;
        mpq_init(tmp18362);
        mpq_t tmp18363;
        mpq_init(tmp18363);
        mpq_set_ui(tmp18362, (uint64_t)ivar_4, 1);
        mpq_set_ui(tmp18363, ivar_5, 1);
        mpq_mk_div(ivar_8, tmp18362, tmp18363);
        mpq_clear(tmp18362);
        mpq_clear(tmp18363);
        ivar_1 = (mpz_ptr_t)real_defs__sgn((mpq_ptr_t)ivar_8);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)1;
        int64_t tmp18364 = mpz_cmp_ui(ivar_1, ivar_2);
        result = (tmp18364 == 0);
        defined = true;};
        
        
        return result;
}

bool_t test_real_defs__test_sgn3(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        mpz_ptr_t ivar_1;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)0;
        mpq_ptr_t ivar_5;
        //copying to mpq from uint8;
        mpq_mk_set_ui(ivar_5, ivar_7);
        ivar_1 = (mpz_ptr_t)real_defs__sgn((mpq_ptr_t)ivar_5);
        int8_t ivar_2;
        ivar_2 = (int8_t)-1;
        int64_t tmp18365 = mpz_cmp_si(ivar_1, ivar_2);
        result = (tmp18365 == 0);
        defined = true;};
        
        
        return result;
}

bool_t test_real_defs__test_abs1(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        mpq_ptr_t ivar_1;
        mpq_ptr_t ivar_8;
        int8_t ivar_4;
        ivar_4 = (int8_t)-3;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)17;
        mpq_t tmp18366;
        mpq_init(tmp18366);
        mpq_t tmp18367;
        mpq_init(tmp18367);
        mpq_set_si(tmp18366, (int64_t)ivar_4, 1);
        mpq_set_ui(tmp18367, ivar_5, 1);
        mpq_mk_div(ivar_8, tmp18366, tmp18367);
        mpq_clear(tmp18366);
        mpq_clear(tmp18367);
        ivar_1 = (mpq_ptr_t)real_defs__abs((mpq_ptr_t)ivar_8);
        mpq_ptr_t ivar_2;
        uint8_t ivar_9;
        ivar_9 = (uint8_t)3;
        uint8_t ivar_10;
        ivar_10 = (uint8_t)17;
        mpq_t tmp18368;
        mpq_init(tmp18368);
        mpq_t tmp18369;
        mpq_init(tmp18369);
        mpq_set_ui(tmp18368, (uint64_t)ivar_9, 1);
        mpq_set_ui(tmp18369, ivar_10, 1);
        mpq_mk_div(ivar_2, tmp18368, tmp18369);
        mpq_clear(tmp18368);
        mpq_clear(tmp18369);
        int64_t tmp18370 = mpq_cmp(ivar_1, ivar_2);
        result = (tmp18370 == 0);
        defined = true;};
        
        
        return result;
}

bool_t test_real_defs__test_abs2(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        mpq_ptr_t ivar_1;
        mpq_ptr_t ivar_8;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)5;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)9;
        mpq_t tmp18371;
        mpq_init(tmp18371);
        mpq_t tmp18372;
        mpq_init(tmp18372);
        mpq_set_ui(tmp18371, (uint64_t)ivar_4, 1);
        mpq_set_ui(tmp18372, ivar_5, 1);
        mpq_mk_div(ivar_8, tmp18371, tmp18372);
        mpq_clear(tmp18371);
        mpq_clear(tmp18372);
        ivar_1 = (mpq_ptr_t)real_defs__abs((mpq_ptr_t)ivar_8);
        mpq_ptr_t ivar_2;
        uint8_t ivar_9;
        ivar_9 = (uint8_t)5;
        uint8_t ivar_10;
        ivar_10 = (uint8_t)9;
        mpq_t tmp18373;
        mpq_init(tmp18373);
        mpq_t tmp18374;
        mpq_init(tmp18374);
        mpq_set_ui(tmp18373, (uint64_t)ivar_9, 1);
        mpq_set_ui(tmp18374, ivar_10, 1);
        mpq_mk_div(ivar_2, tmp18373, tmp18374);
        mpq_clear(tmp18373);
        mpq_clear(tmp18374);
        int64_t tmp18375 = mpq_cmp(ivar_1, ivar_2);
        result = (tmp18375 == 0);
        defined = true;};
        
        
        return result;
}

bool_t test_real_defs__test_abs3(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        mpq_ptr_t ivar_1;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)0;
        mpq_ptr_t ivar_5;
        //copying to mpq from uint8;
        mpq_mk_set_ui(ivar_5, ivar_7);
        ivar_1 = (mpq_ptr_t)real_defs__abs((mpq_ptr_t)ivar_5);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)0;
        int64_t tmp18376 = mpq_cmp_ui(ivar_1, ivar_2, 1);
        result = (tmp18376 == 0);
        defined = true;};
        
        
        return result;
}

bool_t test_real_defs__test_max1(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        mpq_ptr_t ivar_1;
        mpq_ptr_t ivar_12;
        int8_t ivar_5;
        ivar_5 = (int8_t)-3;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)17;
        mpq_t tmp18377;
        mpq_init(tmp18377);
        mpq_t tmp18378;
        mpq_init(tmp18378);
        mpq_set_si(tmp18377, (int64_t)ivar_5, 1);
        mpq_set_ui(tmp18378, ivar_6, 1);
        mpq_mk_div(ivar_12, tmp18377, tmp18378);
        mpq_clear(tmp18377);
        mpq_clear(tmp18378);
        mpq_ptr_t ivar_13;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)5;
        uint8_t ivar_9;
        ivar_9 = (uint8_t)9;
        mpq_t tmp18379;
        mpq_init(tmp18379);
        mpq_t tmp18380;
        mpq_init(tmp18380);
        mpq_set_ui(tmp18379, (uint64_t)ivar_8, 1);
        mpq_set_ui(tmp18380, ivar_9, 1);
        mpq_mk_div(ivar_13, tmp18379, tmp18380);
        mpq_clear(tmp18379);
        mpq_clear(tmp18380);
        ivar_1 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_12, (mpq_ptr_t)ivar_13);
        mpq_ptr_t ivar_2;
        uint8_t ivar_14;
        ivar_14 = (uint8_t)5;
        uint8_t ivar_15;
        ivar_15 = (uint8_t)9;
        mpq_t tmp18381;
        mpq_init(tmp18381);
        mpq_t tmp18382;
        mpq_init(tmp18382);
        mpq_set_ui(tmp18381, (uint64_t)ivar_14, 1);
        mpq_set_ui(tmp18382, ivar_15, 1);
        mpq_mk_div(ivar_2, tmp18381, tmp18382);
        mpq_clear(tmp18381);
        mpq_clear(tmp18382);
        int64_t tmp18383 = mpq_cmp(ivar_1, ivar_2);
        result = (tmp18383 == 0);
        defined = true;};
        
        
        return result;
}

bool_t test_real_defs__test_max2(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        mpq_ptr_t ivar_1;
        mpq_ptr_t ivar_12;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)5;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)9;
        mpq_t tmp18384;
        mpq_init(tmp18384);
        mpq_t tmp18385;
        mpq_init(tmp18385);
        mpq_set_ui(tmp18384, (uint64_t)ivar_5, 1);
        mpq_set_ui(tmp18385, ivar_6, 1);
        mpq_mk_div(ivar_12, tmp18384, tmp18385);
        mpq_clear(tmp18384);
        mpq_clear(tmp18385);
        mpq_ptr_t ivar_13;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)9;
        uint8_t ivar_9;
        ivar_9 = (uint8_t)5;
        mpq_t tmp18386;
        mpq_init(tmp18386);
        mpq_t tmp18387;
        mpq_init(tmp18387);
        mpq_set_ui(tmp18386, (uint64_t)ivar_8, 1);
        mpq_set_ui(tmp18387, ivar_9, 1);
        mpq_mk_div(ivar_13, tmp18386, tmp18387);
        mpq_clear(tmp18386);
        mpq_clear(tmp18387);
        ivar_1 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_12, (mpq_ptr_t)ivar_13);
        mpq_ptr_t ivar_2;
        uint8_t ivar_14;
        ivar_14 = (uint8_t)9;
        uint8_t ivar_15;
        ivar_15 = (uint8_t)5;
        mpq_t tmp18388;
        mpq_init(tmp18388);
        mpq_t tmp18389;
        mpq_init(tmp18389);
        mpq_set_ui(tmp18388, (uint64_t)ivar_14, 1);
        mpq_set_ui(tmp18389, ivar_15, 1);
        mpq_mk_div(ivar_2, tmp18388, tmp18389);
        mpq_clear(tmp18388);
        mpq_clear(tmp18389);
        int64_t tmp18390 = mpq_cmp(ivar_1, ivar_2);
        result = (tmp18390 == 0);
        defined = true;};
        
        
        return result;
}

bool_t test_real_defs__test_max3(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        mpq_ptr_t ivar_1;
        uint8_t ivar_12;
        ivar_12 = (uint8_t)0;
        mpq_ptr_t ivar_9;
        //copying to mpq from uint8;
        mpq_mk_set_ui(ivar_9, ivar_12);
        mpq_ptr_t ivar_10;
        int8_t ivar_5;
        ivar_5 = (int8_t)-3;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)17;
        mpq_t tmp18391;
        mpq_init(tmp18391);
        mpq_t tmp18392;
        mpq_init(tmp18392);
        mpq_set_si(tmp18391, (int64_t)ivar_5, 1);
        mpq_set_ui(tmp18392, ivar_6, 1);
        mpq_mk_div(ivar_10, tmp18391, tmp18392);
        mpq_clear(tmp18391);
        mpq_clear(tmp18392);
        ivar_1 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_9, (mpq_ptr_t)ivar_10);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)0;
        int64_t tmp18393 = mpq_cmp_ui(ivar_1, ivar_2, 1);
        result = (tmp18393 == 0);
        defined = true;};
        
        
        return result;
}

bool_t test_real_defs__test_min1(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        mpq_ptr_t ivar_1;
        mpq_ptr_t ivar_12;
        int8_t ivar_5;
        ivar_5 = (int8_t)-3;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)17;
        mpq_t tmp18394;
        mpq_init(tmp18394);
        mpq_t tmp18395;
        mpq_init(tmp18395);
        mpq_set_si(tmp18394, (int64_t)ivar_5, 1);
        mpq_set_ui(tmp18395, ivar_6, 1);
        mpq_mk_div(ivar_12, tmp18394, tmp18395);
        mpq_clear(tmp18394);
        mpq_clear(tmp18395);
        mpq_ptr_t ivar_13;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)5;
        uint8_t ivar_9;
        ivar_9 = (uint8_t)9;
        mpq_t tmp18396;
        mpq_init(tmp18396);
        mpq_t tmp18397;
        mpq_init(tmp18397);
        mpq_set_ui(tmp18396, (uint64_t)ivar_8, 1);
        mpq_set_ui(tmp18397, ivar_9, 1);
        mpq_mk_div(ivar_13, tmp18396, tmp18397);
        mpq_clear(tmp18396);
        mpq_clear(tmp18397);
        ivar_1 = (mpq_ptr_t)real_defs__min((mpq_ptr_t)ivar_12, (mpq_ptr_t)ivar_13);
        mpq_ptr_t ivar_2;
        int8_t ivar_14;
        ivar_14 = (int8_t)-3;
        uint8_t ivar_15;
        ivar_15 = (uint8_t)17;
        mpq_t tmp18398;
        mpq_init(tmp18398);
        mpq_t tmp18399;
        mpq_init(tmp18399);
        mpq_set_si(tmp18398, (int64_t)ivar_14, 1);
        mpq_set_ui(tmp18399, ivar_15, 1);
        mpq_mk_div(ivar_2, tmp18398, tmp18399);
        mpq_clear(tmp18398);
        mpq_clear(tmp18399);
        int64_t tmp18400 = mpq_cmp(ivar_1, ivar_2);
        result = (tmp18400 == 0);
        defined = true;};
        
        
        return result;
}

bool_t test_real_defs__test_min2(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        mpq_ptr_t ivar_1;
        mpq_ptr_t ivar_12;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)5;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)9;
        mpq_t tmp18401;
        mpq_init(tmp18401);
        mpq_t tmp18402;
        mpq_init(tmp18402);
        mpq_set_ui(tmp18401, (uint64_t)ivar_5, 1);
        mpq_set_ui(tmp18402, ivar_6, 1);
        mpq_mk_div(ivar_12, tmp18401, tmp18402);
        mpq_clear(tmp18401);
        mpq_clear(tmp18402);
        mpq_ptr_t ivar_13;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)9;
        uint8_t ivar_9;
        ivar_9 = (uint8_t)5;
        mpq_t tmp18403;
        mpq_init(tmp18403);
        mpq_t tmp18404;
        mpq_init(tmp18404);
        mpq_set_ui(tmp18403, (uint64_t)ivar_8, 1);
        mpq_set_ui(tmp18404, ivar_9, 1);
        mpq_mk_div(ivar_13, tmp18403, tmp18404);
        mpq_clear(tmp18403);
        mpq_clear(tmp18404);
        ivar_1 = (mpq_ptr_t)real_defs__min((mpq_ptr_t)ivar_12, (mpq_ptr_t)ivar_13);
        mpq_ptr_t ivar_2;
        uint8_t ivar_14;
        ivar_14 = (uint8_t)5;
        uint8_t ivar_15;
        ivar_15 = (uint8_t)9;
        mpq_t tmp18405;
        mpq_init(tmp18405);
        mpq_t tmp18406;
        mpq_init(tmp18406);
        mpq_set_ui(tmp18405, (uint64_t)ivar_14, 1);
        mpq_set_ui(tmp18406, ivar_15, 1);
        mpq_mk_div(ivar_2, tmp18405, tmp18406);
        mpq_clear(tmp18405);
        mpq_clear(tmp18406);
        int64_t tmp18407 = mpq_cmp(ivar_1, ivar_2);
        result = (tmp18407 == 0);
        defined = true;};
        
        
        return result;
}

bool_t test_real_defs__test_min3(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        mpq_ptr_t ivar_1;
        uint8_t ivar_12;
        ivar_12 = (uint8_t)0;
        mpq_ptr_t ivar_9;
        //copying to mpq from uint8;
        mpq_mk_set_ui(ivar_9, ivar_12);
        mpq_ptr_t ivar_10;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)5;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)9;
        mpq_t tmp18408;
        mpq_init(tmp18408);
        mpq_t tmp18409;
        mpq_init(tmp18409);
        mpq_set_ui(tmp18408, (uint64_t)ivar_5, 1);
        mpq_set_ui(tmp18409, ivar_6, 1);
        mpq_mk_div(ivar_10, tmp18408, tmp18409);
        mpq_clear(tmp18408);
        mpq_clear(tmp18409);
        ivar_1 = (mpq_ptr_t)real_defs__min((mpq_ptr_t)ivar_9, (mpq_ptr_t)ivar_10);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)0;
        int64_t tmp18410 = mpq_cmp_ui(ivar_1, ivar_2, 1);
        result = (tmp18410 == 0);
        defined = true;};
        
        
        return result;
}