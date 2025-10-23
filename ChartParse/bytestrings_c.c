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
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_bytestrings_array_0(bytestrings_array_0_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint8(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_bytestrings_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_bytestrings_array_0((bytestrings_array_0_t)x, (bytestrings_array_0_t)y);
}

char * json_bytestrings_array_0_ptr(pointer_t x, type_actual_t T){
        return json_bytestrings_array_0((bytestrings_array_0_t)x);
}

actual_bytestrings_array_0_t actual_bytestrings_array_0(){
        actual_bytestrings_array_0_t new = (actual_bytestrings_array_0_t)safe_malloc(sizeof(struct actual_bytestrings_array_0_s));
        new->equal_ptr = (equal_ptr_t)(*equal_bytestrings_array_0_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_bytestrings_array_0_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_bytestrings_array_0_ptr);
 

 
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
                y = safe_realloc(x, sizeof(struct bytestrings_array_0_s) + (newmax * sizeof(uint8_t)));
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

char * json_bytestrings__bytestring(bytestrings__bytestring_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(18);
         sprintf(fld0, "\"length\" : ");
        tmp[0] = safe_strcat(fld0, json_uint32(x->length));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"seq\" : ");
        tmp[1] = safe_strcat(fld1, json_bytestrings_array_0(x->seq));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_bytestrings__bytestring_ptr(pointer_t x, pointer_t y, actual_bytestrings__bytestring_t T){
        return equal_bytestrings__bytestring((bytestrings__bytestring_t)x, (bytestrings__bytestring_t)y);
}

char * json_bytestrings__bytestring_ptr(pointer_t x, actual_bytestrings__bytestring_t T){
        return json_bytestrings__bytestring((bytestrings__bytestring_t)x);
}

actual_bytestrings__bytestring_t actual_bytestrings__bytestring(){
        actual_bytestrings__bytestring_t new = (actual_bytestrings__bytestring_t)safe_malloc(sizeof(struct actual_bytestrings__bytestring_s));
        new->equal_ptr = (equal_ptr_t)(*equal_bytestrings__bytestring_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_bytestrings__bytestring_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_bytestrings__bytestring_ptr);
 

 
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



uint32_t bytestrings__bytestring_bound(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_5;
        ivar_5 = (uint8_t)28;
        mpz_ptr_t ivar_3;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_3, ivar_5);
        result = (uint32_t)mpz_get_ui(exp2__exp2((mpz_ptr_t)ivar_3));

        defined = true;};
        
        return result;
}

uint32_t bytestrings__length(bytestrings__bytestring_t ivar_1){
        uint32_t  result;
        result = (uint32_t)ivar_1->length;
        release_bytestrings__bytestring(ivar_1);

        
        return result;
}

uint8_t bytestrings__get(bytestrings__bytestring_t ivar_1, uint32_t ivar_2){
        uint8_t  result;
        bytestrings_array_0_t ivar_7;
        ivar_7 = (bytestrings_array_0_t)ivar_1->seq;
        ivar_7->count++;
        result = (uint8_t)ivar_7->elems[ivar_2];
        release_bytestrings_array_0(ivar_7);

        
        return result;
}

bytestrings__bytestring_t bytestrings__null(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_7;
        ivar_7 = (uint8_t)0;
        uint32_t ivar_1;
        //copying to uint32 from uint8;
        ivar_1 = (uint32_t)ivar_7;
        bytestrings_array_0_t ivar_6;
        uint32_t size69833;
        //copying to uint32 from uint32;
        size69833 = (uint32_t)ivar_1;
        size69833 += 0;
        ivar_6 = new_bytestrings_array_0(size69833);
        uint8_t ivar_5;
        for (uint32_t index69832 = 0; index69832 < size69833; index69832++){
             ivar_5 = (uint8_t)index69832;
             ivar_6->elems[index69832] = (uint8_t)0;
        };
        bytestrings__bytestring_t tmp69834 = new_bytestrings__bytestring();;
        result = (bytestrings__bytestring_t)tmp69834;
        tmp69834->length = (uint32_t)ivar_1;
        tmp69834->seq = (bytestrings_array_0_t)ivar_6;

        defined = true;};
        
        return result;
}

bytestrings__bytestring_t bytestrings__unit(uint8_t ivar_1){
        bytestrings__bytestring_t  result;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)1;
        uint32_t ivar_2;
        //copying to uint32 from uint8;
        ivar_2 = (uint32_t)ivar_7;
        bytestrings_array_0_t ivar_6;
        uint32_t size69840;
        //copying to uint32 from uint32;
        size69840 = (uint32_t)ivar_2;
        size69840 += 0;
        ivar_6 = new_bytestrings_array_0(size69840);
        uint8_t ivar_5;
        for (uint32_t index69839 = 0; index69839 < size69840; index69839++){
             ivar_5 = (uint8_t)index69839;
             //copying to uint8 from uint8;
             ivar_6->elems[index69839] = (uint8_t)ivar_1;
        };
        bytestrings__bytestring_t tmp69841 = new_bytestrings__bytestring();;
        result = (bytestrings__bytestring_t)tmp69841;
        tmp69841->length = (uint32_t)ivar_2;
        tmp69841->seq = (bytestrings_array_0_t)ivar_6;

        
        return result;
}

bytestrings__bytestring_t bytestrings__mk_bytestring(strings__string_t ivar_1){
        bytestrings__bytestring_t  result;
        mpz_ptr_t ivar_19;
        ivar_19 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_19);
        mpz_set(ivar_19, ivar_1->length);
        uint32_t ivar_3;
        //copying to uint32 from mpz;
        ivar_3 = (uint32_t)mpz_get_ui(ivar_19);
        mpz_clear(ivar_19);
        bytestrings_array_0_t ivar_18;
        mpz_t ivar_8;
        mpz_init(ivar_8);
        uint32_t size69851;
        //copying to uint32 from uint32;
        size69851 = (uint32_t)ivar_3;
        size69851 += 0;
        ivar_18 = new_bytestrings_array_0(size69851);
        for (uint32_t index69850 = 0; index69850 < size69851; index69850++){
             mpz_t ivar_8;
             mpz_init(ivar_8);
             mpz_set_ui(ivar_8, index69850);
             uint32_t ivar_10;
             ivar_1->count++;
             ivar_10 = (uint32_t)gen_strings__get((strings__string_t)ivar_1, (mpz_ptr_t)ivar_8);
             ivar_18->elems[index69850] = (uint32_t) ivar_10;
        };
        release_strings__string(ivar_1);
        bytestrings__bytestring_t tmp69852 = new_bytestrings__bytestring();;
        result = (bytestrings__bytestring_t)tmp69852;
        tmp69852->length = (uint32_t)ivar_3;
        tmp69852->seq = (bytestrings_array_0_t)ivar_18;

        
        return result;
}

bytestrings__bytestring_t bytestrings__doubleplus(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2){
        bytestrings__bytestring_t  result;
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
             if (result != NULL) result->count++;
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
           if (result != NULL) result->count++;
           release_bytestrings__bytestring(ivar_1);
} else {
             
           /* n */ uint32_t ivar_13;
           uint32_t ivar_14;
           ivar_14 = (uint32_t)ivar_1->length;
           uint32_t ivar_15;
           ivar_15 = (uint32_t)ivar_2->length;
           ivar_13 = (uint32_t)(ivar_14 + ivar_15);
           bytestrings_array_0_t ivar_46;
           uint32_t size74354;
           //copying to uint32 from uint32;
           size74354 = (uint32_t)ivar_13;
           size74354 += 0;
           ivar_46 = new_bytestrings_array_0(size74354);
           uint32_t ivar_22;
           for (uint32_t index74353 = 0; index74353 < size74354; index74353++){
           ivar_22 = (uint32_t)index74353;
           bool_t ivar_23;
           uint32_t ivar_25;
           ivar_25 = (uint32_t)ivar_1->length;
           ivar_23 = (ivar_22 < ivar_25);
           if (ivar_23){    
            ivar_1->count++;
            ivar_46->elems[index74353] = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_22);
} else {
           
            int32_t ivar_45;
            uint32_t ivar_37;
            ivar_37 = (uint32_t)ivar_1->length;
            ivar_45 = (int32_t)((uint64_t)ivar_22 - (uint64_t)ivar_37);
            uint32_t ivar_42;
            //copying to uint32 from int32;
            ivar_42 = (uint32_t)ivar_45;
            ivar_2->count++;
            ivar_46->elems[index74353] = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_42);
};
           };
           release_bytestrings__bytestring(ivar_2);
           release_bytestrings__bytestring(ivar_1);
           bytestrings__bytestring_t tmp74355 = new_bytestrings__bytestring();;
           result = (bytestrings__bytestring_t)tmp74355;
           tmp74355->length = (uint32_t)ivar_13;
           tmp74355->seq = (bytestrings_array_0_t)ivar_46;
};
};

        
        return result;
}

uint32_t bytestrings__strdiff_rec(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2, uint32_t ivar_3){
        uint32_t  result;
        bool_t ivar_8;
        bool_t ivar_9;
        uint32_t ivar_12;
        ivar_12 = (uint32_t)ivar_1->length;
        ivar_9 = (ivar_3 == ivar_12);
        if (ivar_9){ 
             ivar_8 = (bool_t) true;
} else {
        
             bool_t ivar_15;
             uint32_t ivar_18;
             ivar_18 = (uint32_t)ivar_2->length;
             ivar_15 = (ivar_3 == ivar_18);
             if (ivar_15){  
           ivar_8 = (bool_t) true;
} else {
             
           uint8_t ivar_21;
           ivar_1->count++;
           ivar_21 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_3);
           uint8_t ivar_22;
           ivar_2->count++;
           ivar_22 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_3);
           ivar_8 = (ivar_21 != ivar_22);
};
};
        if (ivar_8){ 
             release_bytestrings__bytestring(ivar_47);
             release_bytestrings__bytestring(ivar_2);
             //copying to uint32 from uint32;
             result = (uint32_t)ivar_3;
} else {
        
             uint32_t ivar_49;
             uint8_t ivar_44;
             ivar_44 = (uint8_t)1;
             ivar_49 = (uint32_t)(ivar_3 + ivar_44);
             ivar_1->count++;
             result = (uint32_t)bytestrings__strdiff_rec((bytestrings__bytestring_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_49);
};

        
        return result;
}

uint32_t bytestrings__strdiff(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2){
        uint32_t  result;
        uint8_t ivar_17;
        ivar_17 = (uint8_t)0;
        uint32_t ivar_13;
        //copying to uint32 from uint8;
        ivar_13 = (uint32_t)ivar_17;
        ivar_1->count++;
        result = (uint32_t)bytestrings__strdiff_rec((bytestrings__bytestring_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_13);

        
        return result;
}

int8_t bytestrings__strcmp(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2){
        int8_t  result;
        /* i */ uint32_t ivar_3;
        ivar_1->count++;
        ivar_2->count++;
        ivar_3 = (uint32_t)bytestrings__strdiff((bytestrings__bytestring_t)ivar_1, (bytestrings__bytestring_t)ivar_2);
        bool_t ivar_15;
        bool_t ivar_16;
        uint32_t ivar_19;
        ivar_19 = (uint32_t)ivar_1->length;
        ivar_16 = (ivar_3 == ivar_19);
        if (ivar_16){ 
             ivar_15 = (bool_t) true;
} else {
        
             uint32_t ivar_23;
             ivar_23 = (uint32_t)ivar_2->length;
             ivar_15 = (ivar_3 == ivar_23);
};
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
             ivar_1->count++;
             ivar_40 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_3);
             uint8_t ivar_41;
             ivar_2->count++;
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

bytestrings__bytestring_t bytestrings__prefix(bytestrings__bytestring_t ivar_1, uint32_t ivar_2){
        bytestrings__bytestring_t  result;
        bool_t ivar_4;
        uint32_t ivar_6;
        ivar_6 = (uint32_t)ivar_1->length;
        ivar_4 = (ivar_2 == ivar_6);
        if (ivar_4){ 
             //copying to bytestrings__bytestring from bytestrings__bytestring;
             result = (bytestrings__bytestring_t)ivar_1;
             if (result != NULL) result->count++;
             release_bytestrings__bytestring(ivar_1);
} else {
        
             bytestrings_array_0_t ivar_22;
             uint32_t size69904;
             //copying to uint32 from uint32;
             size69904 = (uint32_t)ivar_2;
             size69904 += 0;
             ivar_22 = new_bytestrings_array_0(size69904);
             uint32_t ivar_14;
             for (uint32_t index69903 = 0; index69903 < size69904; index69903++){
           ivar_14 = (uint32_t)index69903;
           ivar_1->count++;
           ivar_22->elems[index69903] = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_14);
             };
             release_bytestrings__bytestring(ivar_1);
             bytestrings__bytestring_t tmp69905 = new_bytestrings__bytestring();;
             result = (bytestrings__bytestring_t)tmp69905;
             tmp69905->length = (uint32_t)ivar_2;
             tmp69905->seq = (bytestrings_array_0_t)ivar_22;
};

        
        return result;
}

bytestrings__bytestring_t bytestrings__suffix(bytestrings__bytestring_t ivar_1, uint32_t ivar_2){
        bytestrings__bytestring_t  result;
        bool_t ivar_4;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)0;
        ivar_4 = (ivar_2 == ivar_6);
        if (ivar_4){ 
             release_bytestrings__bytestring(ivar_34);
             //copying to bytestrings__bytestring from bytestrings__bytestring;
             result = (bytestrings__bytestring_t)ivar_1;
             if (result != NULL) result->count++;
             release_bytestrings__bytestring(ivar_1);
} else {
        
             mpz_ptr_t ivar_40;
             uint32_t ivar_8;
             ivar_8 = (uint32_t)ivar_1->length;
             mpz_mk_set_ui(ivar_40, (uint64_t)ivar_8);
             mpz_sub_ui(ivar_40, ivar_40, (uint64_t)ivar_2);
             uint32_t ivar_12;
             //copying to uint32 from mpz;
             ivar_12 = (uint32_t)mpz_get_ui(ivar_40);
             mpz_clear(ivar_40);
             bytestrings_array_0_t ivar_39;
             mpz_t ivar_23;
             mpz_init(ivar_23);
             uint32_t size69919;
             //copying to uint32 from uint32;
             size69919 = (uint32_t)ivar_12;
             size69919 += 0;
             ivar_39 = new_bytestrings_array_0(size69919);
             for (uint32_t index69918 = 0; index69918 < size69919; index69918++){
           mpz_t ivar_23;
           mpz_init(ivar_23);
           mpz_set_ui(ivar_23, index69918);
           mpz_ptr_t ivar_38;
           mpz_mk_add_ui(ivar_38, ivar_23, (uint64_t)ivar_2);
           uint32_t ivar_35;
           //copying to uint32 from mpz;
           ivar_35 = (uint32_t)mpz_get_ui(ivar_38);
           mpz_clear(ivar_38);
           ivar_1->count++;
           ivar_39->elems[index69918] = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_35);
             };
             release_bytestrings__bytestring(ivar_1);
             bytestrings__bytestring_t tmp69920 = new_bytestrings__bytestring();;
             result = (bytestrings__bytestring_t)tmp69920;
             tmp69920->length = (uint32_t)ivar_12;
             tmp69920->seq = (bytestrings_array_0_t)ivar_39;
};

        
        return result;
}

bytestrings__bytestring_t bytestrings__substr(bytestrings__bytestring_t ivar_1, uint32_t ivar_2, uint32_t ivar_4){
        bytestrings__bytestring_t  result;
        bytestrings__bytestring_t ivar_18;
        ivar_1->count++;
        ivar_18 = (bytestrings__bytestring_t)bytestrings__suffix((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_2);
        int32_t ivar_22;
        ivar_22 = (int32_t)((uint64_t)ivar_4 - (uint64_t)ivar_2);
        uint32_t ivar_19;
        //copying to uint32 from int32;
        ivar_19 = (uint32_t)ivar_22;
        ivar_18->count++;
        result = (bytestrings__bytestring_t)bytestrings__prefix((bytestrings__bytestring_t)ivar_18, (uint32_t)ivar_19);

        
        return result;
}

bool_t bytestrings__ascii_bytestringp(bytestrings__bytestring_t ivar_1){
        bool_t  result;
        uint32_t low69929;
        uint32_t highvar69930;
        result = true;
        low69929 = (uint32_t) 0;
        bytestrings__bytestring_t ivar_3;
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_3 = (bytestrings__bytestring_t)ivar_1;
        if (ivar_3 != NULL) ivar_3->count++;
        highvar69930 = (uint32_t)ivar_3->length;
        highvar69930 += 0;
        for (uint32_t ivar_2 = low69929; ivar_2 < highvar69930; ivar_2++){
             uint8_t ivar_4;
             ivar_1->count++;
             ivar_4 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_2);
             uint8_t ivar_5;
             ivar_5 = (uint8_t)128;
             result = (ivar_4 < ivar_5);
             if (!result) break;
        };

        
        return result;
}