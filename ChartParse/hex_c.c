//Code generated using pvs2ir2c
#include "hex_c.h"


hex_array_0_t new_hex_array_0(uint32_t size){
        hex_array_0_t tmp = (hex_array_0_t) safe_malloc(sizeof(struct hex_array_0_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_hex_array_0(hex_array_0_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_hex_array_0_ptr(pointer_t x, type_actual_t T){
        release_hex_array_0((hex_array_0_t)x);
}

hex_array_0_t copy_hex_array_0(hex_array_0_t x){
        hex_array_0_t tmp = new_hex_array_0(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_hex_array_0(hex_array_0_t x, hex_array_0_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

bool_t equal_hex_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_hex_array_0((hex_array_0_t)x, (hex_array_0_t)y);
}

actual_hex_array_0_t actual_hex_array_0(){
        actual_hex_array_0_t new = (actual_hex_array_0_t)safe_malloc(sizeof(struct actual_hex_array_0_s));
        new->equal_ptr = (equal_ptr_t)(*equal_hex_array_0_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_hex_array_0_ptr);
 

 
        return new;
 };

hex_array_0_t update_hex_array_0(hex_array_0_t x, uint32_t i, uint8_t v){
        hex_array_0_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_hex_array_0(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

hex_array_0_t upgrade_hex_array_0(hex_array_0_t x, uint32_t i, uint8_t v){
        hex_array_0_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_malloc(sizeof(struct hex_array_0_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_hex_array_0(x);}
           else {y = copy_hex_array_0(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}



void release_hex_funtype_1(hex_funtype_1_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

hex_funtype_1_t copy_hex_funtype_1(hex_funtype_1_t x){return x->ftbl->cptr(x);}

uint32_t lookup_hex_funtype_1(hex_funtype_1_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; hex_funtype_1_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp1090 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp1090 == 0);
        bool_t keymatch;
        int64_t tmp1091 = mpz_cmp(data.key, i);
        keymatch = (tmp1091 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp1090 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp1090 == 0);

        int64_t tmp1091 = mpz_cmp(data.key, i);
        keymatch = (tmp1091 == 0);
                }
        return hashindex;
        }

hex_funtype_1_t dupdate_hex_funtype_1(hex_funtype_1_t a, mpz_ptr_t i, uint32_t v){
        hex_funtype_1_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (hex_funtype_1_htbl_t)safe_malloc(sizeof(struct hex_funtype_1_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (hex_funtype_1_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct hex_funtype_1_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        hex_funtype_1_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                hex_funtype_1_hashentry_t * new_data = (hex_funtype_1_hashentry_t *)safe_malloc(new_size * sizeof(struct hex_funtype_1_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp1092 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp1092 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp1093 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp1093 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp1094 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp1094 == 0);
                                }
                                mpz_set(new_data[new_loc].key, data[j].key);
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (uint32_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = mpz_hash(i);
        uint32_t hashindex = lookup_hex_funtype_1(htbl, i, ihash);
        hex_funtype_1_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp1095 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp1095 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v; htbl->num_entries++;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint32_t)v;};
        return a;

}

hex_funtype_1_t update_hex_funtype_1(hex_funtype_1_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_hex_funtype_1(a, i, v);
            } else {
                hex_funtype_1_t x = copy_hex_funtype_1(a);
                a->count--;
                return dupdate_hex_funtype_1(x, i, v);
            }}

bool_t equal_hex_funtype_1(hex_funtype_1_t x, hex_funtype_1_t y){
        return false;}


hex_record_2_t new_hex_record_2(void){
        hex_record_2_t tmp = (hex_record_2_t) safe_malloc(sizeof(struct hex_record_2_s));
        tmp->count = 1;
        return tmp;}

void release_hex_record_2(hex_record_2_t x){
        x->count--;
        if (x->count <= 0){
         release_hex_funtype_1(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_hex_record_2_ptr(pointer_t x, type_actual_t T){
        release_hex_record_2((hex_record_2_t)x);
}

hex_record_2_t copy_hex_record_2(hex_record_2_t x){
        hex_record_2_t y = new_hex_record_2();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_hex_record_2(hex_record_2_t x, hex_record_2_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_hex_funtype_1(x->seq, y->seq);
        return tmp;}

bool_t equal_hex_record_2_ptr(pointer_t x, pointer_t y, actual_hex_record_2_t T){
        return equal_hex_record_2((hex_record_2_t)x, (hex_record_2_t)y);
}

actual_hex_record_2_t actual_hex_record_2(){
        actual_hex_record_2_t new = (actual_hex_record_2_t)safe_malloc(sizeof(struct actual_hex_record_2_s));
        new->equal_ptr = (equal_ptr_t)(*equal_hex_record_2_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_hex_record_2_ptr);
 

 
        return new;
 };

hex_record_2_t update_hex_record_2_length(hex_record_2_t x, mpz_ptr_t v){
        hex_record_2_t y;
        if (x->count == 1){y = x;}
        else {y = copy_hex_record_2(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

hex_record_2_t update_hex_record_2_seq(hex_record_2_t x, hex_funtype_1_t v){
        hex_record_2_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_hex_funtype_1(x->seq);};}
        else {y = copy_hex_record_2(x); x->count--; y->seq->count--;};
        y->seq = (hex_funtype_1_t)v;
        return y;}




hex_array_3_t new_hex_array_3(uint32_t size){
        hex_array_3_t tmp = (hex_array_3_t) safe_malloc(sizeof(struct hex_array_3_s) + (size * sizeof(uint32_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_hex_array_3(hex_array_3_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_hex_array_3_ptr(pointer_t x, type_actual_t T){
        release_hex_array_3((hex_array_3_t)x);
}

hex_array_3_t copy_hex_array_3(hex_array_3_t x){
        hex_array_3_t tmp = new_hex_array_3(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint32_t)x->elems[i];};
         return tmp;}

bool_t equal_hex_array_3(hex_array_3_t x, hex_array_3_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

bool_t equal_hex_array_3_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_hex_array_3((hex_array_3_t)x, (hex_array_3_t)y);
}

actual_hex_array_3_t actual_hex_array_3(){
        actual_hex_array_3_t new = (actual_hex_array_3_t)safe_malloc(sizeof(struct actual_hex_array_3_s));
        new->equal_ptr = (equal_ptr_t)(*equal_hex_array_3_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_hex_array_3_ptr);
 

 
        return new;
 };

hex_array_3_t update_hex_array_3(hex_array_3_t x, uint32_t i, uint32_t v){
        hex_array_3_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_hex_array_3(x );
                x->count--;};
        y->elems[i] = (uint32_t)v;
        return y;}

hex_array_3_t upgrade_hex_array_3(hex_array_3_t x, uint32_t i, uint32_t v){
        hex_array_3_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_malloc(sizeof(struct hex_array_3_s) + (newmax * sizeof(uint32_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_hex_array_3(x);}
           else {y = copy_hex_array_3(x );
                x->count--;};
        y->elems[i] = (uint32_t)v;
        return y;}



extern bool_t hex__digitp(uint8_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)48;
        ivar_2 = (ivar_1 >= ivar_5);
        if (ivar_2){ 
             uint8_t ivar_8;
             ivar_8 = (uint8_t)57;
             result = (ivar_1 <= ivar_8);
} else {
        
             result = (bool_t) false;
};

        
        return result;
}

extern bool_t hex__hexalphap(uint8_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        bool_t ivar_4;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)65;
        ivar_4 = (ivar_1 >= ivar_7);
        if (ivar_4){ 
             uint8_t ivar_10;
             ivar_10 = (uint8_t)70;
             ivar_2 = (ivar_1 <= ivar_10);
} else {
        
             ivar_2 = (bool_t) false;
};
        if (ivar_2){ 
             result = (bool_t) true;
} else {
        
             bool_t ivar_13;
             uint8_t ivar_16;
             ivar_16 = (uint8_t)97;
             ivar_13 = (ivar_1 >= ivar_16);
             if (ivar_13){  
           uint8_t ivar_19;
           ivar_19 = (uint8_t)102;
           result = (ivar_1 <= ivar_19);
} else {
             
           result = (bool_t) false;
};
};

        
        return result;
}

extern bool_t hex__hexdigitp(uint8_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        ivar_2 = (bool_t)hex__digitp((uint8_t)ivar_1);
        if (ivar_2){ 
             result = (bool_t) true;
} else {
        
             result = (bool_t)hex__hexalphap((uint8_t)ivar_1);
};

        
        return result;
}

extern uint8_t hex__hexvalue(uint8_t ivar_2){
        uint8_t  result;
        bool_t ivar_3;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)97;
        ivar_3 = (ivar_2 >= ivar_5);
        if (ivar_3){ 
             uint8_t ivar_8;
             ivar_8 = (uint8_t)87;
             result = (uint8_t)(ivar_2 - ivar_8);
} else {
        
             bool_t ivar_10;
             uint8_t ivar_12;
             ivar_12 = (uint8_t)65;
             ivar_10 = (ivar_2 >= ivar_12);
             if (ivar_10){  
           uint8_t ivar_15;
           ivar_15 = (uint8_t)55;
           result = (uint8_t)(ivar_2 - ivar_15);
} else {
             
           uint8_t ivar_18;
           ivar_18 = (uint8_t)48;
           result = (uint8_t)(ivar_2 - ivar_18);
};
};

        
        return result;
}

extern uint8_t hex__hex2byte(uint8_t ivar_2, uint8_t ivar_3){
        uint8_t  result;
        uint8_t ivar_18;
        uint8_t ivar_12;
        ivar_12 = (uint8_t)hex__hexvalue((uint8_t)ivar_2);
        uint8_t ivar_13;
        ivar_13 = (uint8_t)4;
        ivar_18 = (uint8_t)integertypes__u8lshift((uint8_t)ivar_12, (uint8_t)ivar_13);
        uint8_t ivar_19;
        ivar_19 = (uint8_t)hex__hexvalue((uint8_t)ivar_3);
        result = (uint8_t)integertypes__u8plus((uint8_t)ivar_18, (uint8_t)ivar_19);

        
        return result;
}

extern bytestrings__bytestring_t hex__hex2bytestring(bytestrings__bytestring_t ivar_1){
        bytestrings__bytestring_t  result;
        /* len */ mpz_ptr_t ivar_2;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->length;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)integertypes__max32();
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             uint32_t ivar_8;
             uint32_t ivar_13;
             ivar_13 = (uint32_t)integertypes__max32();
             uint32_t ivar_14;
             ivar_14 = (uint32_t)2;
             ivar_8 = (uint32_t)integertypes__u32div((uint32_t)ivar_13, (uint32_t)ivar_14);
             uint8_t ivar_9;
             ivar_9 = (uint8_t)1;
             mpz_mk_set_ui(ivar_2, (uint64_t)ivar_8);
             mpz_add_ui(ivar_2, ivar_2, (uint64_t)ivar_9);
} else {
        
             uint32_t ivar_23;
             uint32_t ivar_18;
             ivar_18 = (uint32_t)ivar_1->length;
             uint8_t ivar_19;
             ivar_19 = (uint8_t)1;
             ivar_23 = (uint32_t)(ivar_18 + ivar_19);
             uint32_t ivar_24;
             ivar_24 = (uint32_t)2;
             uint32_t ivar_22;
             ivar_22 = (uint32_t)integertypes__u32div((uint32_t)ivar_23, (uint32_t)ivar_24);
             //copying to mpz from uint32;
             mpz_mk_set_ui(ivar_2, ivar_22);
};
        uint32_t ivar_25;
        //copying to uint32 from mpz;
        ivar_25 = (uint32_t)mpz_get_ui(ivar_2);
        mpz_clear(ivar_2);
        hex_array_0_t ivar_73;
        mpz_t ivar_28;
        mpz_init(ivar_28);
        uint32_t size1088;
        //copying to uint32 from uint32;
        size1088 = (uint32_t)ivar_25;
        size1088 += 0;
        ivar_73 = new_hex_array_0(size1088);
        for (uint32_t index1087 = 0; index1087 < size1088; index1087++){
             mpz_t ivar_28;
             mpz_init(ivar_28);
             mpz_set_ui(ivar_28, index1087);
             /* twoi */ uint32_t ivar_29;
             uint32_t ivar_33;
             //copying to uint32 from mpz;
             ivar_33 = (uint32_t)mpz_get_ui(ivar_28);
             mpz_clear(ivar_28);
             uint32_t ivar_34;
             ivar_34 = (uint32_t)2;
             ivar_29 = (uint32_t)integertypes__u32times((uint32_t)ivar_33, (uint32_t)ivar_34);
             bool_t ivar_35;
             uint32_t ivar_36;
             uint32_t ivar_42;
             ivar_42 = (uint32_t)1;
             ivar_36 = (uint32_t)integertypes__u32plus((uint32_t)ivar_29, (uint32_t)ivar_42);
             uint32_t ivar_37;
             ivar_37 = (uint32_t)ivar_1->length;
             ivar_35 = (ivar_36 == ivar_37);
             if (ivar_35){  
           uint8_t ivar_53;
           ivar_1->count++;
           ivar_53 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_29);
           uint8_t ivar_54;
           ivar_54 = (uint8_t)48;
           ivar_73->elems[index1087] = (uint8_t)hex__hex2byte((uint8_t)ivar_53, (uint8_t)ivar_54);
} else {
             
           uint8_t ivar_71;
           ivar_1->count++;
           ivar_71 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_29);
           uint8_t ivar_72;
           uint32_t ivar_69;
           uint8_t ivar_65;
           ivar_65 = (uint8_t)1;
           ivar_69 = (uint32_t)(ivar_29 + ivar_65);
           ivar_1->count++;
           ivar_72 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_69);
           ivar_73->elems[index1087] = (uint8_t)hex__hex2byte((uint8_t)ivar_71, (uint8_t)ivar_72);
};
        };
        release_bytestrings__bytestring(ivar_1);
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_25;
        result->seq = (hex_array_0_t)ivar_73;

        
        return result;
}

extern bytestrings__bytestring_t hex__test_hex2bytestring(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_9;
        hex_record_2_t ivar_7;
        uint32_t len1097 = 16;
        uint32_t characters1098[16] = {65, 66, 67, 68, 69, 70, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
        stringliteral_t string1096 = mk_string(16, characters1098);
        ivar_7 = (hex_record_2_t)strings__make_string(len1097, string1096);
        strings__string_t ivar_5;
        //copying to strings__string from hex_record_2;
        ivar_5 = (strings__string_t)ivar_7;
        if (ivar_5 != NULL) ivar_5->count++;
        release_hex_record_2(ivar_7);
        bytestrings__bytestring_t ivar_4;
        ivar_4 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_5);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_9 = (bytestrings__bytestring_t)ivar_4;
        if (ivar_9 != NULL) ivar_9->count++;
        release_bytestrings__bytestring(ivar_4);
        bytestrings__bytestring_t ivar_8;
        ivar_8 = (bytestrings__bytestring_t)hex__hex2bytestring((bytestrings__bytestring_t)ivar_9);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_8;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_8);

        defined = true;};
        
        return result;
}

extern uint8_t hex__hex0(uint8_t ivar_2){
        uint8_t  result;
        /* hnum */ uint8_t ivar_3;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)4;
        ivar_3 = (uint8_t)integertypes__u8rshift((uint8_t)ivar_2, (uint8_t)ivar_8);
        bool_t ivar_9;
        uint8_t ivar_11;
        ivar_11 = (uint8_t)10;
        ivar_9 = (ivar_3 < ivar_11);
        if (ivar_9){ 
             uint8_t ivar_13;
             ivar_13 = (uint8_t)48;
             result = (uint8_t)(ivar_13 + ivar_3);
} else {
        
             uint8_t ivar_19;
             ivar_19 = (uint8_t)55;
             result = (uint8_t)integertypes__u8plus((uint8_t)ivar_19, (uint8_t)ivar_3);
};

        
        return result;
}

extern uint8_t hex__hex1(uint8_t ivar_2){
        uint8_t  result;
        /* hnum */ uint8_t ivar_3;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)16;
        ivar_3 = (uint8_t)integertypes__u8rem((uint8_t)ivar_2, (uint8_t)ivar_8);
        bool_t ivar_9;
        uint8_t ivar_11;
        ivar_11 = (uint8_t)10;
        ivar_9 = (ivar_3 < ivar_11);
        if (ivar_9){ 
             uint8_t ivar_13;
             ivar_13 = (uint8_t)48;
             result = (uint8_t)(ivar_13 + ivar_3);
} else {
        
             uint8_t ivar_19;
             ivar_19 = (uint8_t)55;
             result = (uint8_t)integertypes__u8plus((uint8_t)ivar_19, (uint8_t)ivar_3);
};

        
        return result;
}

extern bytestrings__bytestring_t hex__bytestring2hexstring(bytestrings__bytestring_t ivar_2){
        bytestrings__bytestring_t  result;
        /* len */ uint32_t ivar_3;
        uint32_t ivar_8;
        ivar_8 = (uint32_t)ivar_2->length;
        uint32_t ivar_9;
        ivar_9 = (uint32_t)2;
        ivar_3 = (uint32_t)integertypes__u32times((uint32_t)ivar_8, (uint32_t)ivar_9);
        hex_array_0_t ivar_45;
        uint32_t size1104;
        //copying to uint32 from uint32;
        size1104 = (uint32_t)ivar_3;
        size1104 += 0;
        ivar_45 = new_hex_array_0(size1104);
        uint32_t ivar_13;
        for (uint32_t index1103 = 0; index1103 < size1104; index1103++){
             ivar_13 = (uint32_t)index1103;
             /* i2 */ uint32_t ivar_14;
             uint32_t ivar_19;
             ivar_19 = (uint32_t)2;
             ivar_14 = (uint32_t)integertypes__u32div((uint32_t)ivar_13, (uint32_t)ivar_19);
             bool_t ivar_20;
             uint32_t ivar_21;
             uint32_t ivar_27;
             ivar_27 = (uint32_t)2;
             ivar_21 = (uint32_t)integertypes__u32rem((uint32_t)ivar_13, (uint32_t)ivar_27);
             uint8_t ivar_22;
             ivar_22 = (uint8_t)0;
             ivar_20 = (ivar_21 == ivar_22);
             if (ivar_20){  
           uint8_t ivar_36;
           ivar_2->count++;
           ivar_36 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_14);
           ivar_45->elems[index1103] = (uint8_t)hex__hex0((uint8_t)ivar_36);
} else {
             
           uint8_t ivar_44;
           ivar_2->count++;
           ivar_44 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_14);
           ivar_45->elems[index1103] = (uint8_t)hex__hex1((uint8_t)ivar_44);
};
        };
        release_bytestrings__bytestring(ivar_2);
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_3;
        result->seq = (hex_array_0_t)ivar_45;

        
        return result;
}

extern bytestrings__bytestring_t hex__test_bytestring2hexstring(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_9;
        hex_record_2_t ivar_7;
        uint32_t len1107 = 16;
        uint32_t characters1108[16] = {65, 66, 67, 68, 69, 70, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
        stringliteral_t string1106 = mk_string(16, characters1108);
        ivar_7 = (hex_record_2_t)strings__make_string(len1107, string1106);
        strings__string_t ivar_5;
        //copying to strings__string from hex_record_2;
        ivar_5 = (strings__string_t)ivar_7;
        if (ivar_5 != NULL) ivar_5->count++;
        release_hex_record_2(ivar_7);
        bytestrings__bytestring_t ivar_4;
        ivar_4 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_5);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_9 = (bytestrings__bytestring_t)ivar_4;
        if (ivar_9 != NULL) ivar_9->count++;
        release_bytestrings__bytestring(ivar_4);
        bytestrings__bytestring_t ivar_8;
        ivar_8 = (bytestrings__bytestring_t)hex__bytestring2hexstring((bytestrings__bytestring_t)ivar_9);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_8;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_8);

        defined = true;};
        
        return result;
}

extern uint32_t hex__bytes2uint32(bytestrings__bytestring_t ivar_3, uint32_t ivar_4){
        uint32_t  result;
        bool_t ivar_6;
        uint32_t ivar_7;
        uint8_t ivar_10;
        ivar_10 = (uint8_t)3;
        ivar_7 = (uint32_t)(ivar_4 + ivar_10);
        uint32_t ivar_8;
        ivar_8 = (uint32_t)ivar_3->length;
        ivar_6 = (ivar_7 < ivar_8);
        if (ivar_6){ 
             mpz_ptr_t ivar_14;
             mpq_ptr_t ivar_16;
             uint32_t ivar_18;
             uint32_t ivar_28;
             uint8_t ivar_24;
             ivar_3->count++;
             ivar_24 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_4);
             //copying to uint32 from uint8;
             ivar_28 = (uint32_t)ivar_24;
             uint8_t ivar_29;
             ivar_29 = (uint8_t)24;
             ivar_18 = (uint32_t)integertypes__u32lshift((uint32_t)ivar_28, (uint32_t)ivar_29);
             uint32_t ivar_19;
             uint32_t ivar_41;
             uint32_t ivar_39;
             uint8_t ivar_35;
             ivar_35 = (uint8_t)1;
             ivar_39 = (uint32_t)(ivar_4 + ivar_35);
             uint8_t ivar_37;
             ivar_3->count++;
             ivar_37 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_39);
             //copying to uint32 from uint8;
             ivar_41 = (uint32_t)ivar_37;
             uint8_t ivar_42;
             ivar_42 = (uint8_t)16;
             ivar_19 = (uint32_t)integertypes__u32lshift((uint32_t)ivar_41, (uint32_t)ivar_42);
             mpz_t tmp1111;
             mpz_init(tmp1111);
             mpz_set_ui(tmp1111, (uint64_t)ivar_18);
             mpz_add_ui(tmp1111, tmp1111, (uint64_t)ivar_19);
             mpq_mk_set_z(ivar_16, tmp1111);
             mpz_clear(tmp1111);
             uint32_t ivar_17;
             uint32_t ivar_55;
             uint32_t ivar_53;
             uint8_t ivar_49;
             ivar_49 = (uint8_t)2;
             ivar_53 = (uint32_t)(ivar_4 + ivar_49);
             uint8_t ivar_51;
             ivar_3->count++;
             ivar_51 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_53);
             //copying to uint32 from uint8;
             ivar_55 = (uint32_t)ivar_51;
             uint8_t ivar_56;
             ivar_56 = (uint8_t)8;
             ivar_17 = (uint32_t)integertypes__u32lshift((uint32_t)ivar_55, (uint32_t)ivar_56);
             mpz_mk_set_q(ivar_14, ivar_16);
             mpz_add_ui(ivar_14, ivar_14, (uint64_t)ivar_17);
             uint8_t ivar_15;
             uint32_t ivar_65;
             uint8_t ivar_61;
             ivar_61 = (uint8_t)3;
             ivar_65 = (uint32_t)(ivar_4 + ivar_61);
             ivar_15 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_65);
             mpz_t tmp1112;
             mpz_init(tmp1112);
             mpz_add_ui(tmp1112, ivar_14, ivar_15);
             result = (uint32_t)mpz_get_ui(tmp1112);
             mpz_clear(tmp1112);
} else {
        
             bool_t ivar_67;
             uint32_t ivar_68;
             uint8_t ivar_71;
             ivar_71 = (uint8_t)2;
             ivar_68 = (uint32_t)(ivar_4 + ivar_71);
             uint32_t ivar_69;
             ivar_69 = (uint32_t)ivar_3->length;
             ivar_67 = (ivar_68 < ivar_69);
             if (ivar_67){  
           mpq_ptr_t ivar_75;
           uint32_t ivar_77;
           uint32_t ivar_87;
           uint8_t ivar_83;
           ivar_3->count++;
           ivar_83 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_4);
           //copying to uint32 from uint8;
           ivar_87 = (uint32_t)ivar_83;
           uint8_t ivar_88;
           ivar_88 = (uint8_t)16;
           ivar_77 = (uint32_t)integertypes__u32lshift((uint32_t)ivar_87, (uint32_t)ivar_88);
           uint32_t ivar_78;
           uint32_t ivar_100;
           uint32_t ivar_98;
           uint8_t ivar_94;
           ivar_94 = (uint8_t)1;
           ivar_98 = (uint32_t)(ivar_4 + ivar_94);
           uint8_t ivar_96;
           ivar_3->count++;
           ivar_96 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_98);
           //copying to uint32 from uint8;
           ivar_100 = (uint32_t)ivar_96;
           uint8_t ivar_101;
           ivar_101 = (uint8_t)8;
           ivar_78 = (uint32_t)integertypes__u32lshift((uint32_t)ivar_100, (uint32_t)ivar_101);
           mpz_t tmp1113;
           mpz_init(tmp1113);
           mpz_set_ui(tmp1113, (uint64_t)ivar_77);
           mpz_add_ui(tmp1113, tmp1113, (uint64_t)ivar_78);
           mpq_mk_set_z(ivar_75, tmp1113);
           mpz_clear(tmp1113);
           uint8_t ivar_76;
           uint32_t ivar_110;
           uint8_t ivar_106;
           ivar_106 = (uint8_t)2;
           ivar_110 = (uint32_t)(ivar_4 + ivar_106);
           ivar_76 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_110);
           mpz_t tmp1114;
           mpz_init(tmp1114);
           mpz_set_q(tmp1114, ivar_75);
           mpz_add_ui(tmp1114, tmp1114, ivar_76);
           result = (uint32_t)mpz_get_ui(tmp1114);
           mpz_clear(tmp1114);
} else {
             
           bool_t ivar_112;
           uint32_t ivar_113;
           uint8_t ivar_116;
           ivar_116 = (uint8_t)1;
           ivar_113 = (uint32_t)(ivar_4 + ivar_116);
           uint32_t ivar_114;
           ivar_114 = (uint32_t)ivar_3->length;
           ivar_112 = (ivar_113 < ivar_114);
           if (ivar_112){   
           uint32_t ivar_120;
           uint32_t ivar_130;
           uint8_t ivar_126;
           ivar_3->count++;
           ivar_126 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_4);
           //copying to uint32 from uint8;
           ivar_130 = (uint32_t)ivar_126;
           uint8_t ivar_131;
           ivar_131 = (uint8_t)8;
           ivar_120 = (uint32_t)integertypes__u32lshift((uint32_t)ivar_130, (uint32_t)ivar_131);
           uint8_t ivar_121;
           uint32_t ivar_139;
           uint8_t ivar_135;
           ivar_135 = (uint8_t)1;
           ivar_139 = (uint32_t)(ivar_4 + ivar_135);
           ivar_121 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_139);
           result = (uint32_t)(ivar_120 + ivar_121);
} else {
           
           uint8_t ivar_143;
           ivar_143 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_4);
           //copying to uint32 from uint8;
           result = (uint32_t)ivar_143;
};
};
};

        
        return result;
}

extern uint16_t hex__bytes2uint16(bytestrings__bytestring_t ivar_3, uint32_t ivar_4){
        uint16_t  result;
        bool_t ivar_6;
        uint32_t ivar_7;
        uint8_t ivar_10;
        ivar_10 = (uint8_t)1;
        ivar_7 = (uint32_t)(ivar_4 + ivar_10);
        uint32_t ivar_8;
        ivar_8 = (uint32_t)ivar_3->length;
        ivar_6 = (ivar_7 < ivar_8);
        if (ivar_6){ 
             uint16_t ivar_14;
             uint16_t ivar_24;
             uint8_t ivar_20;
             ivar_3->count++;
             ivar_20 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_4);
             //copying to uint16 from uint8;
             ivar_24 = (uint16_t)ivar_20;
             uint8_t ivar_25;
             ivar_25 = (uint8_t)8;
             ivar_14 = (uint16_t)integertypes__u16lshift((uint16_t)ivar_24, (uint16_t)ivar_25);
             uint8_t ivar_15;
             uint32_t ivar_33;
             uint8_t ivar_29;
             ivar_29 = (uint8_t)1;
             ivar_33 = (uint32_t)(ivar_4 + ivar_29);
             ivar_15 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_33);
             result = (uint16_t)(ivar_14 + ivar_15);
} else {
        
             uint8_t ivar_37;
             ivar_37 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_4);
             //copying to uint16 from uint8;
             result = (uint16_t)ivar_37;
};

        
        return result;
}

extern uint8_t hex__bytes2uint8(bytestrings__bytestring_t ivar_3, uint32_t ivar_4){
        uint8_t  result;
        result = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_4);

        
        return result;
}

extern uint64_t hex__bytes2uint64(bytestrings__bytestring_t ivar_3, uint32_t ivar_4){
        uint64_t  result;
        bool_t ivar_6;
        uint32_t ivar_7;
        uint8_t ivar_10;
        ivar_10 = (uint8_t)3;
        ivar_7 = (uint32_t)(ivar_4 + ivar_10);
        uint32_t ivar_8;
        ivar_8 = (uint32_t)ivar_3->length;
        ivar_6 = (ivar_7 <= ivar_8);
        if (ivar_6){ 
             /* msw */ uint32_t ivar_14;
             ivar_3->count++;
             ivar_14 = (uint32_t)hex__bytes2uint32((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_4);
             /* lsw */ uint32_t ivar_20;
             uint32_t ivar_28;
             uint8_t ivar_24;
             ivar_24 = (uint8_t)4;
             ivar_28 = (uint32_t)(ivar_4 + ivar_24);
             ivar_20 = (uint32_t)hex__bytes2uint32((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_28);
             mpz_ptr_t ivar_29;
             mpz_ptr_t ivar_31;
             uint8_t ivar_37;
             ivar_37 = (uint8_t)8;
             mpz_ptr_t ivar_35;
             //copying to mpz from uint8;
             mpz_mk_set_ui(ivar_35, ivar_37);
             ivar_31 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_35);
             mpz_mk_mul_ui(ivar_29, ivar_31, (uint64_t)ivar_14);
             mpz_t tmp1121;
             mpz_init(tmp1121);
             mpz_add_ui(tmp1121, ivar_29, ivar_20);
             result = (uint64_t)mpz_get_ui(tmp1121);
             mpz_clear(tmp1121);
} else {
        
             uint32_t ivar_42;
             ivar_42 = (uint32_t)hex__bytes2uint32((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_4);
             //copying to uint64 from uint32;
             result = (uint64_t)ivar_42;
};

        
        return result;
}

extern bool_t hex__equalUpto(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2, uint32_t ivar_3){
        bool_t  result;
        result = (bool_t)u_undef_quant_expr();

        
        return result;
}

extern hex_array_3_t hex__bytes2uint32array(bytestrings__bytestring_t ivar_9){
        hex_array_3_t  result;
        uint32_t size1127;
        mpq_ptr_t ivar_16;
        uint32_t ivar_11;
        bytestrings__bytestring_t ivar_13;
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_13 = (bytestrings__bytestring_t)ivar_9;
        if (ivar_13 != NULL) ivar_13->count++;
        ivar_11 = (uint32_t)ivar_13->length;
        uint8_t ivar_12;
        ivar_12 = (uint8_t)4;
        mpq_t tmp1128;
        mpq_init(tmp1128);
        mpq_t tmp1129;
        mpq_init(tmp1129);
        mpq_set_ui(tmp1128, (uint64_t)ivar_11, 1);
        mpq_set_ui(tmp1129, ivar_12, 1);
        mpq_mk_div(ivar_16, tmp1128, tmp1129);
        mpq_clear(tmp1128);
        mpq_clear(tmp1129);
        size1127 = (uint32_t)integertypes__u32ceiling(ivar_16);
        size1127 += 0;
        result = new_hex_array_3(size1127);
        uint32_t ivar_24;
        for (uint32_t index1126 = 0; index1126 < size1127; index1126++){
             ivar_24 = (uint32_t)index1126;
             uint32_t ivar_39;
             uint8_t ivar_34;
             ivar_34 = (uint8_t)4;
             ivar_39 = (uint32_t)((uint64_t)ivar_34 * (uint64_t)ivar_24);
             ivar_9->count++;
             result->elems[index1126] = (uint32_t)hex__bytes2uint32((bytestrings__bytestring_t)ivar_9, (uint32_t)ivar_39);
        };
        release_bytestrings__bytestring(ivar_9);

        
        return result;
}