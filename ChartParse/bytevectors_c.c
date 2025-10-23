//Code generated using pvs2ir2c
#include "bytevectors_c.h"


bytevectors__byv_t new_bytevectors__byv(uint32_t size){
        bytevectors__byv_t tmp = (bytevectors__byv_t) safe_malloc(sizeof(struct bytevectors__byv_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_bytevectors__byv(bytevectors__byv_t x, uint32_t n){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_bytevectors__byv_ptr(pointer_t x, type_actual_t T){
        actual_bytevectors__byv_t actual = (actual_bytevectors__byv_t)T;
        uint32_t n = actual->n;
        release_bytevectors__byv((bytevectors__byv_t)x, n);
}

bytevectors__byv_t copy_bytevectors__byv(bytevectors__byv_t x){
        bytevectors__byv_t tmp = new_bytevectors__byv(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_bytevectors__byv(bytevectors__byv_t x, bytevectors__byv_t y, uint32_t n){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

bool_t equal_bytevectors__byv_ptr(pointer_t x, pointer_t y, type_actual_t T){
        actual_bytevectors__byv_t actual = (actual_bytevectors__byv_t)T;
        uint32_t n = actual->n;
        return equal_bytevectors__byv((bytevectors__byv_t)x, (bytevectors__byv_t)y, n);
}

actual_bytevectors__byv_t actual_bytevectors__byv(uint32_t n){
        actual_bytevectors__byv_t new = (actual_bytevectors__byv_t)safe_malloc(sizeof(struct actual_bytevectors__byv_s));
        new->equal_ptr = (equal_ptr_t)(*equal_bytevectors__byv_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_bytevectors__byv_ptr);
 

        new->n = n;
 
        return new;
 };

bytevectors__byv_t update_bytevectors__byv(bytevectors__byv_t x, uint32_t i, uint8_t v, uint32_t n){
        bytevectors__byv_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_bytevectors__byv(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

bytevectors__byv_t upgrade_bytevectors__byv(bytevectors__byv_t x, uint32_t i, uint8_t v, uint32_t n){
        bytevectors__byv_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_malloc(sizeof(struct bytevectors__byv_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_bytevectors__byv(x, n);}
           else {y = copy_bytevectors__byv(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}



extern bytevectors__byv_t bytevectors__byvand(uint32_t n, bytevectors__byv_t ivar_2, bytevectors__byv_t ivar_3){
        bytevectors__byv_t  result;
        uint32_t size21307;
        //copying to uint32 from uint32;
        size21307 = (uint32_t)n;
        size21307 += 0;
        result = new_bytevectors__byv(size21307);
        uint32_t ivar_4;
        for (uint32_t index21306 = 0; index21306 < size21307; index21306++){
             ivar_4 = (uint32_t)index21306;
             uint8_t ivar_16;
             ivar_16 = (uint8_t)ivar_2->elems[ivar_4];
             uint8_t ivar_17;
             ivar_17 = (uint8_t)ivar_3->elems[ivar_4];
             result->elems[index21306] = (uint8_t)integer_bv_ops__u8and((uint8_t)ivar_16, (uint8_t)ivar_17);
        };
        release_bytevectors__byv(ivar_2, n);
        release_bytevectors__byv(ivar_3, n);

        
        return result;
}

extern bytevectors__byv_t bytevectors__byvor(uint32_t n, bytevectors__byv_t ivar_2, bytevectors__byv_t ivar_3){
        bytevectors__byv_t  result;
        uint32_t size21310;
        //copying to uint32 from uint32;
        size21310 = (uint32_t)n;
        size21310 += 0;
        result = new_bytevectors__byv(size21310);
        uint32_t ivar_4;
        for (uint32_t index21309 = 0; index21309 < size21310; index21309++){
             ivar_4 = (uint32_t)index21309;
             uint8_t ivar_16;
             ivar_16 = (uint8_t)ivar_2->elems[ivar_4];
             uint8_t ivar_17;
             ivar_17 = (uint8_t)ivar_3->elems[ivar_4];
             result->elems[index21309] = (uint8_t)integer_bv_ops__u8or((uint8_t)ivar_16, (uint8_t)ivar_17);
        };
        release_bytevectors__byv(ivar_2, n);
        release_bytevectors__byv(ivar_3, n);

        
        return result;
}

extern bytevectors__byv_t bytevectors__byvxor(uint32_t n, bytevectors__byv_t ivar_2, bytevectors__byv_t ivar_3){
        bytevectors__byv_t  result;
        uint32_t size21313;
        //copying to uint32 from uint32;
        size21313 = (uint32_t)n;
        size21313 += 0;
        result = new_bytevectors__byv(size21313);
        uint32_t ivar_4;
        for (uint32_t index21312 = 0; index21312 < size21313; index21312++){
             ivar_4 = (uint32_t)index21312;
             uint8_t ivar_16;
             ivar_16 = (uint8_t)ivar_2->elems[ivar_4];
             uint8_t ivar_17;
             ivar_17 = (uint8_t)ivar_3->elems[ivar_4];
             result->elems[index21312] = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_16, (uint8_t)ivar_17);
        };
        release_bytevectors__byv(ivar_2, n);
        release_bytevectors__byv(ivar_3, n);

        
        return result;
}

extern bytevectors__byv_t bytevectors__byvnot(uint32_t n, bytevectors__byv_t ivar_2){
        bytevectors__byv_t  result;
        uint32_t size21316;
        //copying to uint32 from uint32;
        size21316 = (uint32_t)n;
        size21316 += 0;
        result = new_bytevectors__byv(size21316);
        uint32_t ivar_3;
        for (uint32_t index21315 = 0; index21315 < size21316; index21315++){
             ivar_3 = (uint32_t)index21315;
             uint8_t ivar_10;
             ivar_10 = (uint8_t)ivar_2->elems[ivar_3];
             result->elems[index21315] = (uint8_t)integer_bv_ops__u8not((uint8_t)ivar_10);
        };
        release_bytevectors__byv(ivar_2, n);

        
        return result;
}

extern bytevectors__byv_t bytevectors__byvleftrot(uint32_t n, bytevectors__byv_t ivar_2, uint32_t ivar_3){
        bytevectors__byv_t  result;
        uint32_t size21325;
        //copying to uint32 from uint32;
        size21325 = (uint32_t)n;
        size21325 += 0;
        result = new_bytevectors__byv(size21325);
        uint32_t ivar_4;
        for (uint32_t index21324 = 0; index21324 < size21325; index21324++){
             ivar_4 = (uint32_t)index21324;
             uint32_t ivar_16;
             uint32_t ivar_6;
             ivar_6 = (uint32_t)integertypes__u32plus((uint32_t)ivar_3, (uint32_t)ivar_4);
             ivar_16 = (uint32_t)rem_uint32_uint32(ivar_6, n);
             result->elems[index21324] = (uint8_t)ivar_2->elems[ivar_16];
        };
        release_bytevectors__byv(ivar_2, n);

        
        return result;
}

extern uint32_t bytevectors__nextindex(uint32_t n, uint32_t ivar_2){
        uint32_t  result;
        /* j */ uint32_t ivar_3;
        uint32_t ivar_8;
        ivar_8 = (uint32_t)1;
        ivar_3 = (uint32_t)integertypes__u32plus((uint32_t)ivar_2, (uint32_t)ivar_8);
        bool_t ivar_9;
        ivar_9 = (ivar_3 == n);
        if (ivar_9){ 
             result = (uint32_t)0;
} else {
        
             //copying to uint32 from uint32;
             result = (uint32_t)ivar_3;
};

        
        return result;
}

extern uint32_t bytevectors__precindex(uint32_t n, uint32_t ivar_2){
        uint32_t  result;
        bool_t ivar_3;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        ivar_3 = (ivar_2 == ivar_5);
        if (ivar_3){ 
             uint32_t ivar_11;
             ivar_11 = (uint32_t)1;
             result = (uint32_t)integertypes__u32minus((uint32_t)n, (uint32_t)ivar_11);
} else {
        
             uint32_t ivar_16;
             ivar_16 = (uint32_t)1;
             result = (uint32_t)integertypes__u32minus((uint32_t)ivar_2, (uint32_t)ivar_16);
};

        
        return result;
}

extern bytevectors__byv_t bytevectors__byvrightrot(uint32_t n, bytevectors__byv_t ivar_2, uint32_t ivar_3){
        bytevectors__byv_t  result;
        uint32_t size21342;
        //copying to uint32 from uint32;
        size21342 = (uint32_t)n;
        size21342 += 0;
        result = new_bytevectors__byv(size21342);
        uint32_t ivar_4;
        for (uint32_t index21341 = 0; index21341 < size21342; index21341++){
             ivar_4 = (uint32_t)index21341;
             uint32_t ivar_21;
             uint32_t ivar_6;
             uint32_t ivar_17;
             ivar_17 = (uint32_t)integertypes__u32minus((uint32_t)n, (uint32_t)ivar_4);
             ivar_6 = (uint32_t)integertypes__u32plus((uint32_t)ivar_3, (uint32_t)ivar_17);
             ivar_21 = (uint32_t)rem_uint32_uint32(ivar_6, n);
             result->elems[index21341] = (uint8_t)ivar_2->elems[ivar_21];
        };
        release_bytevectors__byv(ivar_2, n);

        
        return result;
}

extern bytevectors__byv_t bytevectors__byvbitleftrot(uint32_t n, bytevectors__byv_t ivar_2, uint8_t ivar_3){
        bytevectors__byv_t  result;
        uint32_t size21347;
        //copying to uint32 from uint32;
        size21347 = (uint32_t)n;
        size21347 += 0;
        result = new_bytevectors__byv(size21347);
        uint32_t ivar_4;
        for (uint32_t index21346 = 0; index21346 < size21347; index21346++){
             ivar_4 = (uint32_t)index21346;
             uint8_t ivar_34;
             uint8_t ivar_22;
             uint32_t ivar_15;
             ivar_15 = (uint32_t)bytevectors__nextindex((uint32_t)n, (uint32_t)ivar_4);
             ivar_22 = (uint8_t)ivar_2->elems[ivar_15];
             uint8_t ivar_23;
             uint8_t ivar_19;
             ivar_19 = (uint8_t)8;
             ivar_23 = (uint8_t)integertypes__u8minus((uint8_t)ivar_19, (uint8_t)ivar_3);
             ivar_34 = (uint8_t)integertypes__u8lshift((uint8_t)ivar_22, (uint8_t)ivar_23);
             uint8_t ivar_35;
             uint8_t ivar_31;
             ivar_31 = (uint8_t)ivar_2->elems[ivar_4];
             ivar_35 = (uint8_t)integertypes__u8rshift((uint8_t)ivar_31, (uint8_t)ivar_3);
             result->elems[index21346] = (uint8_t)integertypes__u8plus((uint8_t)ivar_34, (uint8_t)ivar_35);
        };
        release_bytevectors__byv(ivar_2, n);

        
        return result;
}

extern bytevectors__byv_t bytevectors__byvbitrightrot(uint32_t n, bytevectors__byv_t ivar_2, uint8_t ivar_3){
        bytevectors__byv_t  result;
        uint32_t size21352;
        //copying to uint32 from uint32;
        size21352 = (uint32_t)n;
        size21352 += 0;
        result = new_bytevectors__byv(size21352);
        uint32_t ivar_4;
        for (uint32_t index21351 = 0; index21351 < size21352; index21351++){
             ivar_4 = (uint32_t)index21351;
             uint8_t ivar_34;
             uint8_t ivar_14;
             ivar_14 = (uint8_t)ivar_2->elems[ivar_4];
             ivar_34 = (uint8_t)integertypes__u8lshift((uint8_t)ivar_14, (uint8_t)ivar_3);
             uint8_t ivar_35;
             uint8_t ivar_31;
             uint32_t ivar_24;
             ivar_24 = (uint32_t)bytevectors__precindex((uint32_t)n, (uint32_t)ivar_4);
             ivar_31 = (uint8_t)ivar_2->elems[ivar_24];
             uint8_t ivar_32;
             uint8_t ivar_28;
             ivar_28 = (uint8_t)8;
             ivar_32 = (uint8_t)integertypes__u8minus((uint8_t)ivar_28, (uint8_t)ivar_3);
             ivar_35 = (uint8_t)integertypes__u8rshift((uint8_t)ivar_31, (uint8_t)ivar_32);
             result->elems[index21351] = (uint8_t)integertypes__u8plus((uint8_t)ivar_34, (uint8_t)ivar_35);
        };
        release_bytevectors__byv(ivar_2, n);

        
        return result;
}

extern bytevectors__byv_t bytevectors__byvleftrotate(uint32_t n, bytevectors__byv_t ivar_5, mpz_ptr_t ivar_6){
        bytevectors__byv_t  result;
        bytevectors__byv_t ivar_25;
        mpz_ptr_t ivar_20;
        mpz_ptr_t ivar_14;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_14, ivar_6);
        uint8_t ivar_15;
        ivar_15 = (uint8_t)8;
        mpz_mk_fdiv_q_ui(ivar_20, ivar_14, ivar_15);
        uint32_t ivar_19;
        //copying to uint32 from mpz;
        ivar_19 = (uint32_t)mpz_get_ui(ivar_20);
        mpz_clear(ivar_20);
        bytevectors__byv_t ivar_17;
        ivar_17 = (bytevectors__byv_t)bytevectors__byvrightrot((uint32_t)n, (bytevectors__byv_t)ivar_5, (uint32_t)ivar_19);
        //copying to bytevectors__byv from bytevectors__byv;
        ivar_25 = (bytevectors__byv_t)ivar_17;
        if (ivar_25 != NULL) ivar_25->count++;
        release_bytevectors__byv(ivar_17, n);
        uint8_t ivar_26;
        mpz_ptr_t ivar_21;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_21, ivar_6);
        mpz_clear(ivar_6);
        uint8_t ivar_22;
        ivar_22 = (uint8_t)8;
        ivar_26 = (uint8_t)rem_mpz_uint32(ivar_21, ivar_22);
        bytevectors__byv_t ivar_24;
        ivar_24 = (bytevectors__byv_t)bytevectors__byvbitrightrot((uint32_t)n, (bytevectors__byv_t)ivar_25, (uint8_t)ivar_26);
        //copying to bytevectors__byv from bytevectors__byv;
        result = (bytevectors__byv_t)ivar_24;
        if (result != NULL) result->count++;
        release_bytevectors__byv(ivar_24, n);

        
        return result;
}

extern bytevectors__byv_t bytevectors__byvrightrotate(uint32_t n, bytevectors__byv_t ivar_5, mpz_ptr_t ivar_6){
        bytevectors__byv_t  result;
        bytevectors__byv_t ivar_25;
        mpz_ptr_t ivar_20;
        mpz_ptr_t ivar_14;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_14, ivar_6);
        uint8_t ivar_15;
        ivar_15 = (uint8_t)8;
        mpz_mk_fdiv_q_ui(ivar_20, ivar_14, ivar_15);
        uint32_t ivar_19;
        //copying to uint32 from mpz;
        ivar_19 = (uint32_t)mpz_get_ui(ivar_20);
        mpz_clear(ivar_20);
        bytevectors__byv_t ivar_17;
        ivar_17 = (bytevectors__byv_t)bytevectors__byvleftrot((uint32_t)n, (bytevectors__byv_t)ivar_5, (uint32_t)ivar_19);
        //copying to bytevectors__byv from bytevectors__byv;
        ivar_25 = (bytevectors__byv_t)ivar_17;
        if (ivar_25 != NULL) ivar_25->count++;
        release_bytevectors__byv(ivar_17, n);
        uint8_t ivar_26;
        mpz_ptr_t ivar_21;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_21, ivar_6);
        mpz_clear(ivar_6);
        uint8_t ivar_22;
        ivar_22 = (uint8_t)8;
        ivar_26 = (uint8_t)rem_mpz_uint32(ivar_21, ivar_22);
        bytevectors__byv_t ivar_24;
        ivar_24 = (bytevectors__byv_t)bytevectors__byvbitleftrot((uint32_t)n, (bytevectors__byv_t)ivar_25, (uint8_t)ivar_26);
        //copying to bytevectors__byv from bytevectors__byv;
        result = (bytevectors__byv_t)ivar_24;
        if (result != NULL) result->count++;
        release_bytevectors__byv(ivar_24, n);

        
        return result;
}

extern bytevectors__byv_t bytevectors__byvXOR(uint32_t n, bytevectors__byv_t ivar_2, bytevectors__byv_t ivar_3){
        bytevectors__byv_t  result;
        uint32_t size21359;
        //copying to uint32 from uint32;
        size21359 = (uint32_t)n;
        size21359 += 0;
        result = new_bytevectors__byv(size21359);
        uint32_t ivar_4;
        for (uint32_t index21358 = 0; index21358 < size21359; index21358++){
             ivar_4 = (uint32_t)index21358;
             uint8_t ivar_16;
             ivar_16 = (uint8_t)ivar_2->elems[ivar_4];
             uint8_t ivar_17;
             ivar_17 = (uint8_t)ivar_3->elems[ivar_4];
             result->elems[index21358] = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_16, (uint8_t)ivar_17);
        };
        release_bytevectors__byv(ivar_2, n);
        release_bytevectors__byv(ivar_3, n);

        
        return result;
}

extern bytestrings__bytestring_t bytevectors__byv2bytestring(uint32_t n, bytevectors__byv_t ivar_1){
        bytestrings__bytestring_t  result;
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)n;
        result->seq = (bytevectors__byv_t)ivar_1;

        
        return result;
}