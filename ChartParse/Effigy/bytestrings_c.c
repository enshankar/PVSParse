//Code generated using pvs2ir2c
#include "bytestrings_c.h"


bytestrings_array_0_t new_bytestrings_array_0(uint32_t size){
        bytestrings_array_0_t tmp = (bytestrings_array_0_t) safe_malloc(sizeof(struct bytestrings_array_0_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_bytestrings_array_0(bytestrings_array_0_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_bytestrings_array_0_ptr(pointer_t x, type_actual_t T){
        release_bytestrings_array_0((bytestrings_array_0_t)x);
}

bytestrings_array_0_t copy_bytestrings_array_0(bytestrings_array_0_t x){
        bytestrings_array_0_t tmp = new_bytestrings_array_0(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_bytestrings_array_0(bytestrings_array_0_t x, bytestrings_array_0_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] = y->elems[i]); i++;};
        return tmp;}

bool_t equal_bytestrings_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_bytestrings_array_0((bytestrings_array_0_t)x, (bytestrings_array_0_t)y);
}

actual_bytestrings_array_0_t actual_bytestrings_array_0(){
        actual_bytestrings_array_0_t new = (actual_bytestrings_array_0_t)safe_malloc(sizeof(struct actual_bytestrings_array_0_s));
        new->equal_ptr = (equal_ptr_t)(*equal_bytestrings_array_0_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_bytestrings_array_0_ptr);
 

 
        return new;
 };

bytestrings_array_0_t update_bytestrings_array_0(bytestrings_array_0_t x, uint32_t i, uint8_t v){
        bytestrings_array_0_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_bytestrings_array_0(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

bytestrings_array_0_t upgrade_bytestrings_array_0(bytestrings_array_0_t x, uint32_t i, uint8_t v){
        bytestrings_array_0_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_malloc(sizeof(struct bytestrings_array_0_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_bytestrings_array_0(x);}
           else {y = copy_bytestrings_array_0(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




bytestrings__bytestring_t new_bytestrings__bytestring(void){
        bytestrings__bytestring_t tmp = (bytestrings__bytestring_t) safe_malloc(sizeof(struct bytestrings__bytestring_s));
        tmp->count = 1;
        return tmp;}

void release_bytestrings__bytestring(bytestrings__bytestring_t x){
        x->count--;
        if (x->count <= 0){
         release_bytestrings_array_0(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_bytestrings__bytestring_ptr(pointer_t x, type_actual_t T){
        release_bytestrings__bytestring((bytestrings__bytestring_t)x);
}

bytestrings__bytestring_t copy_bytestrings__bytestring(bytestrings__bytestring_t x){
        bytestrings__bytestring_t y = new_bytestrings__bytestring();
        y->length = (uint32_t)x->length;
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_bytestrings__bytestring(bytestrings__bytestring_t x, bytestrings__bytestring_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_bytestrings_array_0(x->seq, y->seq);
        return tmp;}

bool_t equal_bytestrings__bytestring_ptr(pointer_t x, pointer_t y, actual_bytestrings__bytestring_t T){
        return equal_bytestrings__bytestring((bytestrings__bytestring_t)x, (bytestrings__bytestring_t)y);
}

actual_bytestrings__bytestring_t actual_bytestrings__bytestring(){
        actual_bytestrings__bytestring_t new = (actual_bytestrings__bytestring_t)safe_malloc(sizeof(struct actual_bytestrings__bytestring_s));
        new->equal_ptr = (equal_ptr_t)(*equal_bytestrings__bytestring_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_bytestrings__bytestring_ptr);
 

 
        return new;
 };

bytestrings__bytestring_t update_bytestrings__bytestring_length(bytestrings__bytestring_t x, uint32_t v){
        bytestrings__bytestring_t y;
        if (x->count == 1){y = x;}
        else {y = copy_bytestrings__bytestring(x); x->count--;};
        y->length = (uint32_t)v;
        return y;}

bytestrings__bytestring_t update_bytestrings__bytestring_seq(bytestrings__bytestring_t x, bytestrings_array_0_t v){
        bytestrings__bytestring_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_bytestrings_array_0(x->seq);};}
        else {y = copy_bytestrings__bytestring(x); x->count--; y->seq->count--;};
        y->seq = (bytestrings_array_0_t)v;
        return y;}



extern mpz_ptr_t bytestrings__bytestring_bound(void){
        mpz_ptr_t result;
        result = safe_malloc(sizeof(mpz_t));
        mpz_init(result);
        mpz_mk_set_ui(result, 4294967296);

        return result;
}

extern uint32_t bytestrings__length(bytestrings__bytestring_t ivar_1){
        uint32_t result;
        result = (uint32_t)ivar_1->length;
        release_bytestrings__bytestring(ivar_1);

        return result;
}

extern uint8_t bytestrings__get(bytestrings__bytestring_t ivar_1, uint32_t ivar_2){
        uint8_t result;
        bytestrings_array_0_t ivar_7;
        ivar_7 = (bytestrings_array_0_t)ivar_1->seq;
        ivar_7->count++;
        release_bytestrings__bytestring(ivar_1);
        result = (uint8_t)ivar_7->elems[ivar_2];
        release_bytestrings_array_0(ivar_7);

        return result;
}

extern bytestrings__bytestring_t bytestrings__null(void){
        bytestrings__bytestring_t result;
        uint32_t ivar_1;
        ivar_1 = (uint32_t)0;
        bytestrings_array_0_t ivar_6;
        uint32_t size22287;
        //copying to uint32 from uint32;
        size22287 = (uint32_t)ivar_1;
        size22287 += 0;
        ivar_6 = new_bytestrings_array_0(size22287);
        uint8_t ivar_5;
        for (uint32_t index22286 = 0; index22286 < size22287; index22286++){
             ivar_5 = (uint8_t)index22286;
             ivar_6->elems[index22286] = (uint8_t)0;
        };
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_1;
        result->seq = (bytestrings_array_0_t)ivar_6;

        return result;
}

extern bytestrings__bytestring_t bytestrings__unit(uint8_t ivar_1){
        bytestrings__bytestring_t result;
        uint32_t ivar_2;
        ivar_2 = (uint32_t)1;
        bytestrings_array_0_t ivar_6;
        uint32_t size22290;
        //copying to uint32 from uint32;
        size22290 = (uint32_t)ivar_2;
        size22290 += 0;
        ivar_6 = new_bytestrings_array_0(size22290);
        uint8_t ivar_5;
        for (uint32_t index22289 = 0; index22289 < size22290; index22289++){
             ivar_5 = (uint8_t)index22289;
             //copying to uint8 from uint8;
             ivar_6->elems[index22289] = (uint8_t)ivar_1;
        };
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_2;
        result->seq = (bytestrings_array_0_t)ivar_6;

        return result;
}

extern bytestrings__bytestring_t bytestrings__mk_bytestring(strings__string_t ivar_1){
        bytestrings__bytestring_t result;
        mpz_ptr_t ivar_19;
        strings__string_t ivar_2;
        //copying to strings__string from strings__string;
        ivar_2 = (strings__string_t)ivar_1;
        ivar_2->count++;
        ivar_19 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_19);
        mpz_set(ivar_19, ivar_2->length);
        release_strings__string(ivar_2);
        uint32_t ivar_3;
        //copying to uint32 from mpz;
        ivar_3 = (uint32_t)mpz_get_ui(ivar_19);
        mpz_clear(ivar_19);
        bytestrings_array_0_t ivar_18;
        mpz_t ivar_8;
        mpz_init(ivar_8);
        uint32_t size22297;
        //copying to uint32 from uint32;
        size22297 = (uint32_t)ivar_3;
        size22297 += 0;
        ivar_18 = new_bytestrings_array_0(size22297);
        for (uint32_t index22296 = 0; index22296 < size22297; index22296++){
             mpz_t ivar_8;
             mpz_init(ivar_8);
             mpz_set_ui(ivar_8, index22296);
             uint32_t ivar_10;
             strings__string_t ivar_14;
             //copying to strings__string from strings__string;
             ivar_14 = (strings__string_t)ivar_1;
             ivar_14->count++;
             mpz_ptr_t ivar_15;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_15, ivar_8);
             mpz_clear(ivar_8);
             uint32_t ivar_13;
             ivar_13 = (uint32_t)gen_strings__get((strings__string_t)ivar_14, (mpz_ptr_t)ivar_15);
             //copying to uint32 from uint32;
             ivar_10 = (uint32_t)ivar_13;
             ivar_18->elems[index22296] = (uint32_t) ivar_10;
        };
        release_strings__string(ivar_1);
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_3;
        result->seq = (bytestrings_array_0_t)ivar_18;

        return result;
}

extern bytestrings__bytestring_t bytestrings__doubleplus(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2){
        bytestrings__bytestring_t result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->length;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             release_bytestrings__bytestring(ivar_1);
             //copying to bytestrings__bytestring from bytestrings__bytestring;
             result = (bytestrings__bytestring_t)ivar_2;
             result->count++;
             release_bytestrings__bytestring(ivar_2);
} else {
        
             bool_t ivar_8;
             uint32_t ivar_9;
             ivar_9 = (uint32_t)ivar_2->length;
             uint8_t ivar_10;
             ivar_10 = (uint8_t)0;
             ivar_8 = (ivar_9 == ivar_10);
             if (ivar_8){  
           release_bytestrings__bytestring(ivar_2);
           //copying to bytestrings__bytestring from bytestrings__bytestring;
           result = (bytestrings__bytestring_t)ivar_1;
           result->count++;
           release_bytestrings__bytestring(ivar_1);
} else {
             
           /* n */ uint32_t ivar_13;
           uint32_t ivar_14;
           ivar_14 = (uint32_t)ivar_1->length;
           uint32_t ivar_15;
           ivar_15 = (uint32_t)ivar_2->length;
           ivar_13 = (uint32_t)(ivar_14 + ivar_15);
           bytestrings_array_0_t ivar_44;
           uint32_t size22305;
           //copying to uint32 from uint32;
           size22305 = (uint32_t)ivar_13;
           size22305 += 0;
           ivar_44 = new_bytestrings_array_0(size22305);
           uint32_t ivar_22;
           for (uint32_t index22304 = 0; index22304 < size22305; index22304++){
           ivar_22 = (uint32_t)index22304;
           bool_t ivar_23;
           uint32_t ivar_25;
           ivar_25 = (uint32_t)ivar_1->length;
           ivar_23 = (ivar_22 < ivar_25);
           if (ivar_23){    
            ivar_1->count++;
            ivar_44->elems[index22304] = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_22);
} else {
           
            uint32_t ivar_42;
            uint32_t ivar_37;
            ivar_37 = (uint32_t)ivar_1->length;
            ivar_42 = (uint32_t)(ivar_22 - ivar_37);
            ivar_2->count++;
            ivar_44->elems[index22304] = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_42);
};
           };
           release_bytestrings__bytestring(ivar_1);
           release_bytestrings__bytestring(ivar_2);
           result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
           result->length = (uint32_t)ivar_13;
           result->seq = (bytestrings_array_0_t)ivar_44;
};
};

        return result;
}

extern uint32_t bytestrings__strdiff_rec(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2, uint32_t ivar_3){
        uint32_t result;
        bool_t ivar_8;
        bool_t ivar_9;
        uint32_t ivar_12;
        ivar_12 = (uint32_t)ivar_1->length;
        ivar_9 = (ivar_3 == ivar_12);
        bool_t ivar_10;
        bool_t ivar_15;
        uint32_t ivar_18;
        ivar_18 = (uint32_t)ivar_2->length;
        ivar_15 = (ivar_3 == ivar_18);
        bool_t ivar_16;
        uint8_t ivar_21;
        ivar_1->count++;
        ivar_21 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_3);
        uint8_t ivar_22;
        ivar_2->count++;
        ivar_22 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_3);
        ivar_16 = (ivar_21 != ivar_22);
        ivar_10 = ivar_15 || ivar_16;
        ivar_8 = ivar_9 || ivar_10;
        if (ivar_8){ 
             release_bytestrings__bytestring(ivar_2);
             release_bytestrings__bytestring(ivar_1);
             //copying to uint32 from uint32;
             result = (uint32_t)ivar_3;
} else {
        
             uint32_t ivar_49;
             uint8_t ivar_44;
             ivar_44 = (uint8_t)1;
             ivar_49 = (uint32_t)(ivar_3 + ivar_44);
             result = (uint32_t)bytestrings__strdiff_rec((bytestrings__bytestring_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_49);
};

        return result;
}

extern uint32_t bytestrings__strdiff(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2){
        uint32_t result;
        uint32_t ivar_13;
        ivar_13 = (uint32_t)0;
        result = (uint32_t)bytestrings__strdiff_rec((bytestrings__bytestring_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_13);

        return result;
}

extern int8_t bytestrings__strcmp(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2){
        int8_t result;
        /* i */ uint32_t ivar_3;
        ivar_1->count++;
        ivar_2->count++;
        ivar_3 = (uint32_t)bytestrings__strdiff((bytestrings__bytestring_t)ivar_1, (bytestrings__bytestring_t)ivar_2);
        bool_t ivar_15;
        bool_t ivar_16;
        uint32_t ivar_19;
        ivar_19 = (uint32_t)ivar_1->length;
        ivar_16 = (ivar_3 == ivar_19);
        bool_t ivar_17;
        uint32_t ivar_23;
        ivar_23 = (uint32_t)ivar_2->length;
        ivar_17 = (ivar_3 == ivar_23);
        ivar_15 = ivar_16 || ivar_17;
        if (ivar_15){ 
             bool_t ivar_27;
             uint32_t ivar_28;
             ivar_28 = (uint32_t)ivar_1->length;
             uint32_t ivar_29;
             ivar_29 = (uint32_t)ivar_2->length;
             ivar_27 = (ivar_28 < ivar_29);
             if (ivar_27){  
           release_bytestrings__bytestring(ivar_2);
           release_bytestrings__bytestring(ivar_1);
           result = (int8_t)-1;
} else {
             
           bool_t ivar_33;
           uint32_t ivar_34;
           ivar_34 = (uint32_t)ivar_1->length;
           release_bytestrings__bytestring(ivar_1);
           uint32_t ivar_35;
           ivar_35 = (uint32_t)ivar_2->length;
           release_bytestrings__bytestring(ivar_2);
           ivar_33 = (ivar_34 > ivar_35);
           if (ivar_33){   
           result = (int8_t)1;
} else {
           
           result = (int8_t)0;
};
};
} else {
        
             bool_t ivar_39;
             uint8_t ivar_40;
             ivar_40 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_3);
             uint8_t ivar_41;
             ivar_41 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_3);
             ivar_39 = (ivar_40 < ivar_41);
             if (ivar_39){  
           result = (int8_t)-1;
} else {
             
           result = (int8_t)1;
};
};

        return result;
}

extern bytestrings__bytestring_t bytestrings__prefix(bytestrings__bytestring_t ivar_1, uint32_t ivar_2){
        bytestrings__bytestring_t result;
        bool_t ivar_4;
        uint32_t ivar_6;
        ivar_6 = (uint32_t)ivar_1->length;
        ivar_4 = (ivar_2 == ivar_6);
        if (ivar_4){ 
             //copying to bytestrings__bytestring from bytestrings__bytestring;
             result = (bytestrings__bytestring_t)ivar_1;
             result->count++;
             release_bytestrings__bytestring(ivar_1);
} else {
        
             bytestrings_array_0_t ivar_22;
             uint32_t size22340;
             //copying to uint32 from uint32;
             size22340 = (uint32_t)ivar_2;
             size22340 += 0;
             ivar_22 = new_bytestrings_array_0(size22340);
             uint32_t ivar_14;
             for (uint32_t index22339 = 0; index22339 < size22340; index22339++){
           ivar_14 = (uint32_t)index22339;
           ivar_1->count++;
           ivar_22->elems[index22339] = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_14);
             };
             release_bytestrings__bytestring(ivar_1);
             result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
             result->length = (uint32_t)ivar_2;
             result->seq = (bytestrings_array_0_t)ivar_22;
};

        return result;
}

extern bytestrings__bytestring_t bytestrings__suffix(bytestrings__bytestring_t ivar_1, uint32_t ivar_2){
        bytestrings__bytestring_t result;
        bool_t ivar_4;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)0;
        ivar_4 = (ivar_2 == ivar_6);
        if (ivar_4){ 
             //copying to bytestrings__bytestring from bytestrings__bytestring;
             result = (bytestrings__bytestring_t)ivar_1;
             result->count++;
             release_bytestrings__bytestring(ivar_1);
} else {
        
             mpz_ptr_t ivar_28;
             uint32_t ivar_8;
             ivar_8 = (uint32_t)ivar_1->length;
             mpz_mk_set_ui(ivar_28, (uint64_t)ivar_8);
             mpz_sub_ui(ivar_28, ivar_28, (uint64_t)ivar_2);
             uint32_t ivar_12;
             //copying to uint32 from mpz;
             ivar_12 = (uint32_t)mpz_get_ui(ivar_28);
             mpz_clear(ivar_28);
             bytestrings_array_0_t ivar_27;
             mpz_t ivar_15;
             mpz_init(ivar_15);
             uint32_t size22351;
             //copying to uint32 from uint32;
             size22351 = (uint32_t)ivar_12;
             size22351 += 0;
             ivar_27 = new_bytestrings_array_0(size22351);
             for (uint32_t index22350 = 0; index22350 < size22351; index22350++){
           mpz_t ivar_15;
           mpz_init(ivar_15);
           mpz_set_ui(ivar_15, index22350);
           mpz_ptr_t ivar_26;
           mpz_ptr_t ivar_19;
           //copying to mpz from mpz;
           mpz_mk_set(ivar_19, ivar_15);
           mpz_clear(ivar_15);
           mpz_mk_add_ui(ivar_26, ivar_19, (uint64_t)ivar_2);
           uint32_t ivar_23;
           //copying to uint32 from mpz;
           ivar_23 = (uint32_t)mpz_get_ui(ivar_26);
           mpz_clear(ivar_26);
           ivar_1->count++;
           ivar_27->elems[index22350] = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_23);
             };
             release_bytestrings__bytestring(ivar_1);
             result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
             result->length = (uint32_t)ivar_12;
             result->seq = (bytestrings_array_0_t)ivar_27;
};

        return result;
}

extern bytestrings__bytestring_t bytestrings__substr(bytestrings__bytestring_t ivar_1, uint32_t ivar_2, uint32_t ivar_4){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_18;
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)bytestrings__suffix((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_2);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_18 = (bytestrings__bytestring_t)ivar_10;
        ivar_18->count++;
        release_bytestrings__bytestring(ivar_10);
        uint32_t ivar_19;
        ivar_19 = (uint32_t)(ivar_4 - ivar_2);
        bytestrings__bytestring_t ivar_17;
        ivar_17 = (bytestrings__bytestring_t)bytestrings__prefix((bytestrings__bytestring_t)ivar_18, (uint32_t)ivar_19);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_17;
        result->count++;
        release_bytestrings__bytestring(ivar_17);

        return result;
}

extern bool_t bytestrings__ascii_bytestringp(bytestrings__bytestring_t ivar_1){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}