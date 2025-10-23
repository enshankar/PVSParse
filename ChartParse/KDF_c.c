//Code generated using pvs2ir2c
#include "KDF_c.h"


KDF_array_0_t new_KDF_array_0(uint32_t size){
        KDF_array_0_t tmp = (KDF_array_0_t) safe_malloc(sizeof(struct KDF_array_0_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_KDF_array_0(KDF_array_0_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_KDF_array_0_ptr(pointer_t x, type_actual_t T){
        release_KDF_array_0((KDF_array_0_t)x);
}

KDF_array_0_t copy_KDF_array_0(KDF_array_0_t x){
        KDF_array_0_t tmp = new_KDF_array_0(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_KDF_array_0(KDF_array_0_t x, KDF_array_0_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

bool_t equal_KDF_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_KDF_array_0((KDF_array_0_t)x, (KDF_array_0_t)y);
}

actual_KDF_array_0_t actual_KDF_array_0(){
        actual_KDF_array_0_t new = (actual_KDF_array_0_t)safe_malloc(sizeof(struct actual_KDF_array_0_s));
        new->equal_ptr = (equal_ptr_t)(*equal_KDF_array_0_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_KDF_array_0_ptr);
 

 
        return new;
 };

KDF_array_0_t update_KDF_array_0(KDF_array_0_t x, uint32_t i, uint8_t v){
        KDF_array_0_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_KDF_array_0(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

KDF_array_0_t upgrade_KDF_array_0(KDF_array_0_t x, uint32_t i, uint8_t v){
        KDF_array_0_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_malloc(sizeof(struct KDF_array_0_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_KDF_array_0(x);}
           else {y = copy_KDF_array_0(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




KDF_record_1_t new_KDF_record_1(void){
        KDF_record_1_t tmp = (KDF_record_1_t) safe_malloc(sizeof(struct KDF_record_1_s));
        tmp->count = 1;
        return tmp;}

void release_KDF_record_1(KDF_record_1_t x){
        x->count--;
        if (x->count <= 0){
         release_bytestrings__bytestring(x->project_1);
         release_bytestrings__bytestring(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_KDF_record_1_ptr(pointer_t x, type_actual_t T){
        release_KDF_record_1((KDF_record_1_t)x);
}

KDF_record_1_t copy_KDF_record_1(KDF_record_1_t x){
        KDF_record_1_t y = new_KDF_record_1();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_KDF_record_1(KDF_record_1_t x, KDF_record_1_t y){
        bool_t tmp = true;
        tmp = tmp && equal_bytestrings__bytestring(x->project_1, y->project_1);
        tmp = tmp && equal_bytestrings__bytestring(x->project_2, y->project_2);
        return tmp;}

bool_t equal_KDF_record_1_ptr(pointer_t x, pointer_t y, actual_KDF_record_1_t T){
        return equal_KDF_record_1((KDF_record_1_t)x, (KDF_record_1_t)y);
}

actual_KDF_record_1_t actual_KDF_record_1(){
        actual_KDF_record_1_t new = (actual_KDF_record_1_t)safe_malloc(sizeof(struct actual_KDF_record_1_s));
        new->equal_ptr = (equal_ptr_t)(*equal_KDF_record_1_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_KDF_record_1_ptr);
 

 
        return new;
 };

KDF_record_1_t update_KDF_record_1_project_1(KDF_record_1_t x, bytestrings__bytestring_t v){
        KDF_record_1_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_bytestrings__bytestring(x->project_1);};}
        else {y = copy_KDF_record_1(x); x->count--; y->project_1->count--;};
        y->project_1 = (bytestrings__bytestring_t)v;
        return y;}

KDF_record_1_t update_KDF_record_1_project_2(KDF_record_1_t x, bytestrings__bytestring_t v){
        KDF_record_1_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_bytestrings__bytestring(x->project_2);};}
        else {y = copy_KDF_record_1(x); x->count--; y->project_2->count--;};
        y->project_2 = (bytestrings__bytestring_t)v;
        return y;}



void release_KDF_funtype_2(KDF_funtype_2_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

KDF_funtype_2_t copy_KDF_funtype_2(KDF_funtype_2_t x){return x->ftbl->cptr(x);}

bool_t equal_KDF_funtype_2(KDF_funtype_2_t x, KDF_funtype_2_t y){
        return false;}

void release_KDF_funtype_3(KDF_funtype_3_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

KDF_funtype_3_t copy_KDF_funtype_3(KDF_funtype_3_t x){return x->ftbl->cptr(x);}

uint32_t lookup_KDF_funtype_3(KDF_funtype_3_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; KDF_funtype_3_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp1259 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp1259 == 0);
        bool_t keymatch;
        int64_t tmp1260 = mpz_cmp(data.key, i);
        keymatch = (tmp1260 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp1259 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp1259 == 0);

        int64_t tmp1260 = mpz_cmp(data.key, i);
        keymatch = (tmp1260 == 0);
                }
        return hashindex;
        }

KDF_funtype_3_t dupdate_KDF_funtype_3(KDF_funtype_3_t a, mpz_ptr_t i, uint32_t v){
        KDF_funtype_3_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (KDF_funtype_3_htbl_t)safe_malloc(sizeof(struct KDF_funtype_3_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (KDF_funtype_3_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct KDF_funtype_3_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        KDF_funtype_3_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                KDF_funtype_3_hashentry_t * new_data = (KDF_funtype_3_hashentry_t *)safe_malloc(new_size * sizeof(struct KDF_funtype_3_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp1261 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp1261 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp1262 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp1262 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp1263 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp1263 == 0);
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
        uint32_t hashindex = lookup_KDF_funtype_3(htbl, i, ihash);
        KDF_funtype_3_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp1264 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp1264 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v; htbl->num_entries++;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint32_t)v;};
        return a;

}

KDF_funtype_3_t update_KDF_funtype_3(KDF_funtype_3_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_KDF_funtype_3(a, i, v);
            } else {
                KDF_funtype_3_t x = copy_KDF_funtype_3(a);
                a->count--;
                return dupdate_KDF_funtype_3(x, i, v);
            }}

bool_t equal_KDF_funtype_3(KDF_funtype_3_t x, KDF_funtype_3_t y){
        return false;}


KDF_record_4_t new_KDF_record_4(void){
        KDF_record_4_t tmp = (KDF_record_4_t) safe_malloc(sizeof(struct KDF_record_4_s));
        tmp->count = 1;
        return tmp;}

void release_KDF_record_4(KDF_record_4_t x){
        x->count--;
        if (x->count <= 0){
         release_KDF_funtype_3(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_KDF_record_4_ptr(pointer_t x, type_actual_t T){
        release_KDF_record_4((KDF_record_4_t)x);
}

KDF_record_4_t copy_KDF_record_4(KDF_record_4_t x){
        KDF_record_4_t y = new_KDF_record_4();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_KDF_record_4(KDF_record_4_t x, KDF_record_4_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_KDF_funtype_3(x->seq, y->seq);
        return tmp;}

bool_t equal_KDF_record_4_ptr(pointer_t x, pointer_t y, actual_KDF_record_4_t T){
        return equal_KDF_record_4((KDF_record_4_t)x, (KDF_record_4_t)y);
}

actual_KDF_record_4_t actual_KDF_record_4(){
        actual_KDF_record_4_t new = (actual_KDF_record_4_t)safe_malloc(sizeof(struct actual_KDF_record_4_s));
        new->equal_ptr = (equal_ptr_t)(*equal_KDF_record_4_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_KDF_record_4_ptr);
 

 
        return new;
 };

KDF_record_4_t update_KDF_record_4_length(KDF_record_4_t x, mpz_ptr_t v){
        KDF_record_4_t y;
        if (x->count == 1){y = x;}
        else {y = copy_KDF_record_4(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

KDF_record_4_t update_KDF_record_4_seq(KDF_record_4_t x, KDF_funtype_3_t v){
        KDF_record_4_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_KDF_funtype_3(x->seq);};}
        else {y = copy_KDF_record_4(x); x->count--; y->seq->count--;};
        y->seq = (KDF_funtype_3_t)v;
        return y;}



extern bytestrings__bytestring_t KDF__u8to_bstring(uint8_t ivar_2){
        bytestrings__bytestring_t  result;
        uint32_t ivar_3;
        ivar_3 = (uint32_t)1;
        KDF_array_0_t ivar_7;
        uint32_t size1247;
        //copying to uint32 from uint32;
        size1247 = (uint32_t)ivar_3;
        size1247 += 0;
        ivar_7 = new_KDF_array_0(size1247);
        uint8_t ivar_6;
        for (uint32_t index1246 = 0; index1246 < size1247; index1246++){
             ivar_6 = (uint8_t)index1246;
             //copying to uint8 from uint8;
             ivar_7->elems[index1246] = (uint8_t)ivar_2;
        };
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_3;
        result->seq = (KDF_array_0_t)ivar_7;

        
        return result;
}

extern bytestrings__bytestring_t KDF__u16to_bstring(uint16_t ivar_2){
        bytestrings__bytestring_t  result;
        uint32_t ivar_3;
        ivar_3 = (uint32_t)2;
        KDF_array_0_t ivar_21;
        uint32_t size1250;
        //copying to uint32 from uint32;
        size1250 = (uint32_t)ivar_3;
        size1250 += 0;
        ivar_21 = new_KDF_array_0(size1250);
        uint8_t ivar_6;
        for (uint32_t index1249 = 0; index1249 < size1250; index1249++){
             ivar_6 = (uint8_t)index1249;
             bool_t ivar_7;
             uint8_t ivar_9;
             ivar_9 = (uint8_t)0;
             ivar_7 = (ivar_6 == ivar_9);
             if (ivar_7){  
           uint16_t ivar_15;
           ivar_15 = (uint16_t)256;
           uint16_t ivar_13;
           ivar_13 = (uint16_t)integertypes__u16div((uint16_t)ivar_2, (uint16_t)ivar_15);
           //copying to uint8 from uint16;
           ivar_21->elems[index1249] = (uint8_t)ivar_13;
} else {
             
           uint16_t ivar_20;
           ivar_20 = (uint16_t)256;
           uint16_t ivar_18;
           ivar_18 = (uint16_t)integertypes__u16rem((uint16_t)ivar_2, (uint16_t)ivar_20);
           //copying to uint8 from uint16;
           ivar_21->elems[index1249] = (uint8_t)ivar_18;
};
        };
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_3;
        result->seq = (KDF_array_0_t)ivar_21;

        
        return result;
}

extern bytestrings__bytestring_t KDF__u32to_bstring(uint32_t ivar_2){
        bytestrings__bytestring_t  result;
        uint32_t ivar_3;
        ivar_3 = (uint32_t)4;
        KDF_array_0_t ivar_54;
        uint32_t size1253;
        //copying to uint32 from uint32;
        size1253 = (uint32_t)ivar_3;
        size1253 += 0;
        ivar_54 = new_KDF_array_0(size1253);
        uint8_t ivar_6;
        for (uint32_t index1252 = 0; index1252 < size1253; index1252++){
             ivar_6 = (uint8_t)index1252;
             bool_t ivar_7;
             uint8_t ivar_9;
             ivar_9 = (uint8_t)0;
             ivar_7 = (ivar_6 == ivar_9);
             if (ivar_7){  
           uint32_t ivar_19;
           uint8_t ivar_17;
           ivar_17 = (uint8_t)24;
           ivar_19 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_2, (uint32_t)ivar_17);
           uint32_t ivar_20;
           ivar_20 = (uint32_t)256;
           uint32_t ivar_18;
           ivar_18 = (uint32_t)integertypes__u32rem((uint32_t)ivar_19, (uint32_t)ivar_20);
           //copying to uint8 from uint32;
           ivar_54->elems[index1252] = (uint8_t)ivar_18;
} else {
             
           bool_t ivar_21;
           uint8_t ivar_23;
           ivar_23 = (uint8_t)1;
           ivar_21 = (ivar_6 == ivar_23);
           if (ivar_21){   
           uint32_t ivar_33;
           uint8_t ivar_31;
           ivar_31 = (uint8_t)16;
           ivar_33 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_2, (uint32_t)ivar_31);
           uint32_t ivar_34;
           ivar_34 = (uint32_t)256;
           uint32_t ivar_32;
           ivar_32 = (uint32_t)integertypes__u32rem((uint32_t)ivar_33, (uint32_t)ivar_34);
           //copying to uint8 from uint32;
           ivar_54->elems[index1252] = (uint8_t)ivar_32;
} else {
           
           bool_t ivar_35;
           uint8_t ivar_37;
           ivar_37 = (uint8_t)2;
           ivar_35 = (ivar_6 == ivar_37);
           if (ivar_35){    
            uint32_t ivar_47;
            uint8_t ivar_45;
            ivar_45 = (uint8_t)8;
            ivar_47 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_2, (uint32_t)ivar_45);
            uint32_t ivar_48;
            ivar_48 = (uint32_t)256;
            uint32_t ivar_46;
            ivar_46 = (uint32_t)integertypes__u32rem((uint32_t)ivar_47, (uint32_t)ivar_48);
            //copying to uint8 from uint32;
            ivar_54->elems[index1252] = (uint8_t)ivar_46;
} else {
           
            uint32_t ivar_53;
            ivar_53 = (uint32_t)256;
            uint32_t ivar_51;
            ivar_51 = (uint32_t)integertypes__u32rem((uint32_t)ivar_2, (uint32_t)ivar_53);
            //copying to uint8 from uint32;
            ivar_54->elems[index1252] = (uint8_t)ivar_51;
};
};
};
        };
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_3;
        result->seq = (KDF_array_0_t)ivar_54;

        
        return result;
}

extern bytestrings__bytestring_t KDF__u64to_bstring(uint64_t ivar_2){
        bytestrings__bytestring_t  result;
        uint32_t ivar_3;
        ivar_3 = (uint32_t)8;
        KDF_array_0_t ivar_110;
        uint32_t size1256;
        //copying to uint32 from uint32;
        size1256 = (uint32_t)ivar_3;
        size1256 += 0;
        ivar_110 = new_KDF_array_0(size1256);
        uint8_t ivar_6;
        for (uint32_t index1255 = 0; index1255 < size1256; index1255++){
             ivar_6 = (uint8_t)index1255;
             bool_t ivar_7;
             uint8_t ivar_9;
             ivar_9 = (uint8_t)0;
             ivar_7 = (ivar_6 == ivar_9);
             if (ivar_7){  
           uint64_t ivar_19;
           uint8_t ivar_17;
           ivar_17 = (uint8_t)56;
           ivar_19 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_2, (uint64_t)ivar_17);
           uint64_t ivar_20;
           ivar_20 = (uint64_t)256;
           uint64_t ivar_18;
           ivar_18 = (uint64_t)integertypes__u64rem((uint64_t)ivar_19, (uint64_t)ivar_20);
           //copying to uint8 from uint64;
           ivar_110->elems[index1255] = (uint8_t)ivar_18;
} else {
             
           bool_t ivar_21;
           uint8_t ivar_23;
           ivar_23 = (uint8_t)1;
           ivar_21 = (ivar_6 == ivar_23);
           if (ivar_21){   
           uint64_t ivar_33;
           uint8_t ivar_31;
           ivar_31 = (uint8_t)48;
           ivar_33 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_2, (uint64_t)ivar_31);
           uint64_t ivar_34;
           ivar_34 = (uint64_t)256;
           uint64_t ivar_32;
           ivar_32 = (uint64_t)integertypes__u64rem((uint64_t)ivar_33, (uint64_t)ivar_34);
           //copying to uint8 from uint64;
           ivar_110->elems[index1255] = (uint8_t)ivar_32;
} else {
           
           bool_t ivar_35;
           uint8_t ivar_37;
           ivar_37 = (uint8_t)2;
           ivar_35 = (ivar_6 == ivar_37);
           if (ivar_35){    
            uint64_t ivar_47;
            uint8_t ivar_45;
            ivar_45 = (uint8_t)40;
            ivar_47 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_2, (uint64_t)ivar_45);
            uint64_t ivar_48;
            ivar_48 = (uint64_t)256;
            uint64_t ivar_46;
            ivar_46 = (uint64_t)integertypes__u64rem((uint64_t)ivar_47, (uint64_t)ivar_48);
            //copying to uint8 from uint64;
            ivar_110->elems[index1255] = (uint8_t)ivar_46;
} else {
           
            bool_t ivar_49;
            uint8_t ivar_51;
            ivar_51 = (uint8_t)3;
            ivar_49 = (ivar_6 == ivar_51);
            if (ivar_49){     
             uint64_t ivar_61;
             uint8_t ivar_59;
             ivar_59 = (uint8_t)32;
             ivar_61 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_2, (uint64_t)ivar_59);
             uint64_t ivar_62;
             ivar_62 = (uint64_t)256;
             uint64_t ivar_60;
             ivar_60 = (uint64_t)integertypes__u64rem((uint64_t)ivar_61, (uint64_t)ivar_62);
             //copying to uint8 from uint64;
             ivar_110->elems[index1255] = (uint8_t)ivar_60;
} else {
            
             bool_t ivar_63;
             uint8_t ivar_65;
             ivar_65 = (uint8_t)4;
             ivar_63 = (ivar_6 == ivar_65);
             if (ivar_63){      
              uint64_t ivar_75;
              uint8_t ivar_73;
              ivar_73 = (uint8_t)24;
              ivar_75 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_2, (uint64_t)ivar_73);
              uint64_t ivar_76;
              ivar_76 = (uint64_t)256;
              uint64_t ivar_74;
              ivar_74 = (uint64_t)integertypes__u64rem((uint64_t)ivar_75, (uint64_t)ivar_76);
              //copying to uint8 from uint64;
              ivar_110->elems[index1255] = (uint8_t)ivar_74;
} else {
             
              bool_t ivar_77;
              uint8_t ivar_79;
              ivar_79 = (uint8_t)5;
              ivar_77 = (ivar_6 == ivar_79);
              if (ivar_77){       
               uint64_t ivar_89;
               uint8_t ivar_87;
               ivar_87 = (uint8_t)16;
               ivar_89 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_2, (uint64_t)ivar_87);
               uint64_t ivar_90;
               ivar_90 = (uint64_t)256;
               uint64_t ivar_88;
               ivar_88 = (uint64_t)integertypes__u64rem((uint64_t)ivar_89, (uint64_t)ivar_90);
               //copying to uint8 from uint64;
               ivar_110->elems[index1255] = (uint8_t)ivar_88;
} else {
              
               bool_t ivar_91;
               uint8_t ivar_93;
               ivar_93 = (uint8_t)6;
               ivar_91 = (ivar_6 == ivar_93);
               if (ivar_91){        
                uint64_t ivar_103;
                uint8_t ivar_101;
                ivar_101 = (uint8_t)8;
                ivar_103 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_2, (uint64_t)ivar_101);
                uint64_t ivar_104;
                ivar_104 = (uint64_t)256;
                uint64_t ivar_102;
                ivar_102 = (uint64_t)integertypes__u64rem((uint64_t)ivar_103, (uint64_t)ivar_104);
                //copying to uint8 from uint64;
                ivar_110->elems[index1255] = (uint8_t)ivar_102;
} else {
               
                uint64_t ivar_109;
                ivar_109 = (uint64_t)256;
                uint64_t ivar_107;
                ivar_107 = (uint64_t)integertypes__u64rem((uint64_t)ivar_2, (uint64_t)ivar_109);
                //copying to uint8 from uint64;
                ivar_110->elems[index1255] = (uint8_t)ivar_107;
};
};
};
};
};
};
};
        };
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_3;
        result->seq = (KDF_array_0_t)ivar_110;

        
        return result;
}

extern bytestrings__bytestring_t KDF__KDF1(bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3, bytestrings__bytestring_t ivar_4){
        bytestrings__bytestring_t  result;
        uint8_t ivar_23;
        ivar_23 = (uint8_t)64;
        bytestrings__bytestring_t ivar_25;
        bytestrings__bytestring_t ivar_20;
        bytestrings__bytestring_t ivar_12;
        ivar_4->count++;
        ivar_12 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_3, (bytestrings__bytestring_t)ivar_4);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_12;
        if (ivar_20 != NULL) ivar_20->count++;
        release_bytestrings__bytestring(ivar_12);
        bytestrings__bytestring_t ivar_21;
        uint16_t ivar_18;
        ivar_18 = (uint16_t)ivar_4->length;
        release_bytestrings__bytestring(ivar_4);
        bytestrings__bytestring_t ivar_17;
        ivar_17 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_18);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_17;
        if (ivar_21 != NULL) ivar_21->count++;
        release_bytestrings__bytestring(ivar_17);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_20, (bytestrings__bytestring_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_25 = (bytestrings__bytestring_t)ivar_19;
        if (ivar_25 != NULL) ivar_25->count++;
        release_bytestrings__bytestring(ivar_19);
        bytestrings__bytestring_t ivar_22;
        ivar_22 = (bytestrings__bytestring_t)HMAC__hmac256((uint8_t)ivar_23, (bytestrings__bytestring_t)ivar_2, (bytestrings__bytestring_t)ivar_25);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_22;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_22);

        
        return result;
}

extern bytestrings__bytestring_t KDF__KDF2(bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3, bytestrings__bytestring_t ivar_4, bytestrings__bytestring_t ivar_5){
        bytestrings__bytestring_t  result;
        uint8_t ivar_38;
        ivar_38 = (uint8_t)64;
        bytestrings__bytestring_t ivar_40;
        bytestrings__bytestring_t ivar_35;
        bytestrings__bytestring_t ivar_28;
        bytestrings__bytestring_t ivar_25;
        bytestrings__bytestring_t ivar_17;
        ivar_4->count++;
        ivar_17 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_3, (bytestrings__bytestring_t)ivar_4);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_25 = (bytestrings__bytestring_t)ivar_17;
        if (ivar_25 != NULL) ivar_25->count++;
        release_bytestrings__bytestring(ivar_17);
        bytestrings__bytestring_t ivar_26;
        uint16_t ivar_23;
        ivar_23 = (uint16_t)ivar_4->length;
        release_bytestrings__bytestring(ivar_4);
        bytestrings__bytestring_t ivar_22;
        ivar_22 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_23);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_26 = (bytestrings__bytestring_t)ivar_22;
        if (ivar_26 != NULL) ivar_26->count++;
        release_bytestrings__bytestring(ivar_22);
        bytestrings__bytestring_t ivar_24;
        ivar_24 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_25, (bytestrings__bytestring_t)ivar_26);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_28 = (bytestrings__bytestring_t)ivar_24;
        if (ivar_28 != NULL) ivar_28->count++;
        release_bytestrings__bytestring(ivar_24);
        bytestrings__bytestring_t ivar_27;
        ivar_5->count++;
        ivar_27 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_28, (bytestrings__bytestring_t)ivar_5);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_35 = (bytestrings__bytestring_t)ivar_27;
        if (ivar_35 != NULL) ivar_35->count++;
        release_bytestrings__bytestring(ivar_27);
        bytestrings__bytestring_t ivar_36;
        uint16_t ivar_33;
        ivar_33 = (uint16_t)ivar_5->length;
        release_bytestrings__bytestring(ivar_5);
        bytestrings__bytestring_t ivar_32;
        ivar_32 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_33);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_36 = (bytestrings__bytestring_t)ivar_32;
        if (ivar_36 != NULL) ivar_36->count++;
        release_bytestrings__bytestring(ivar_32);
        bytestrings__bytestring_t ivar_34;
        ivar_34 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_35, (bytestrings__bytestring_t)ivar_36);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_40 = (bytestrings__bytestring_t)ivar_34;
        if (ivar_40 != NULL) ivar_40->count++;
        release_bytestrings__bytestring(ivar_34);
        bytestrings__bytestring_t ivar_37;
        ivar_37 = (bytestrings__bytestring_t)HMAC__hmac256((uint8_t)ivar_38, (bytestrings__bytestring_t)ivar_2, (bytestrings__bytestring_t)ivar_40);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_37;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_37);

        
        return result;
}

extern bytestrings__bytestring_t KDF__KDF3(bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3, bytestrings__bytestring_t ivar_4, bytestrings__bytestring_t ivar_5, bytestrings__bytestring_t ivar_6){
        bytestrings__bytestring_t  result;
        uint8_t ivar_53;
        ivar_53 = (uint8_t)64;
        bytestrings__bytestring_t ivar_55;
        bytestrings__bytestring_t ivar_50;
        bytestrings__bytestring_t ivar_43;
        bytestrings__bytestring_t ivar_40;
        bytestrings__bytestring_t ivar_33;
        bytestrings__bytestring_t ivar_30;
        bytestrings__bytestring_t ivar_22;
        ivar_4->count++;
        ivar_22 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_3, (bytestrings__bytestring_t)ivar_4);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_30 = (bytestrings__bytestring_t)ivar_22;
        if (ivar_30 != NULL) ivar_30->count++;
        release_bytestrings__bytestring(ivar_22);
        bytestrings__bytestring_t ivar_31;
        uint16_t ivar_28;
        ivar_28 = (uint16_t)ivar_4->length;
        release_bytestrings__bytestring(ivar_4);
        bytestrings__bytestring_t ivar_27;
        ivar_27 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_28);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_31 = (bytestrings__bytestring_t)ivar_27;
        if (ivar_31 != NULL) ivar_31->count++;
        release_bytestrings__bytestring(ivar_27);
        bytestrings__bytestring_t ivar_29;
        ivar_29 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_30, (bytestrings__bytestring_t)ivar_31);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_33 = (bytestrings__bytestring_t)ivar_29;
        if (ivar_33 != NULL) ivar_33->count++;
        release_bytestrings__bytestring(ivar_29);
        bytestrings__bytestring_t ivar_32;
        ivar_5->count++;
        ivar_32 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_33, (bytestrings__bytestring_t)ivar_5);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_40 = (bytestrings__bytestring_t)ivar_32;
        if (ivar_40 != NULL) ivar_40->count++;
        release_bytestrings__bytestring(ivar_32);
        bytestrings__bytestring_t ivar_41;
        uint16_t ivar_38;
        ivar_38 = (uint16_t)ivar_5->length;
        release_bytestrings__bytestring(ivar_5);
        bytestrings__bytestring_t ivar_37;
        ivar_37 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_38);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_41 = (bytestrings__bytestring_t)ivar_37;
        if (ivar_41 != NULL) ivar_41->count++;
        release_bytestrings__bytestring(ivar_37);
        bytestrings__bytestring_t ivar_39;
        ivar_39 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_40, (bytestrings__bytestring_t)ivar_41);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_43 = (bytestrings__bytestring_t)ivar_39;
        if (ivar_43 != NULL) ivar_43->count++;
        release_bytestrings__bytestring(ivar_39);
        bytestrings__bytestring_t ivar_42;
        ivar_6->count++;
        ivar_42 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_43, (bytestrings__bytestring_t)ivar_6);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_50 = (bytestrings__bytestring_t)ivar_42;
        if (ivar_50 != NULL) ivar_50->count++;
        release_bytestrings__bytestring(ivar_42);
        bytestrings__bytestring_t ivar_51;
        uint16_t ivar_48;
        ivar_48 = (uint16_t)ivar_6->length;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_47;
        ivar_47 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_48);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_51 = (bytestrings__bytestring_t)ivar_47;
        if (ivar_51 != NULL) ivar_51->count++;
        release_bytestrings__bytestring(ivar_47);
        bytestrings__bytestring_t ivar_49;
        ivar_49 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_50, (bytestrings__bytestring_t)ivar_51);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_55 = (bytestrings__bytestring_t)ivar_49;
        if (ivar_55 != NULL) ivar_55->count++;
        release_bytestrings__bytestring(ivar_49);
        bytestrings__bytestring_t ivar_52;
        ivar_52 = (bytestrings__bytestring_t)HMAC__hmac256((uint8_t)ivar_53, (bytestrings__bytestring_t)ivar_2, (bytestrings__bytestring_t)ivar_55);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_52;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_52);

        
        return result;
}

extern bytestrings__bytestring_t KDF__KDF(bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3){
        bytestrings__bytestring_t  result;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)64;
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)HMAC__hmac256((uint8_t)ivar_8, (bytestrings__bytestring_t)ivar_2, (bytestrings__bytestring_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_7;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_7);

        
        return result;
}

extern bytestrings__bytestring_t KDF__KAUSF(bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3, bytestrings__bytestring_t ivar_4, bytestrings__bytestring_t ivar_5, bytestrings__bytestring_t ivar_6){
        bytestrings__bytestring_t  result;
        /* KEY */ bytestrings__bytestring_t ivar_7;
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_2, (bytestrings__bytestring_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_7 = (bytestrings__bytestring_t)ivar_10;
        if (ivar_7 != NULL) ivar_7->count++;
        release_bytestrings__bytestring(ivar_10);
        /* FC */ uint8_t ivar_13;
        ivar_13 = (uint8_t)106;
        /* L0 */ bytestrings__bytestring_t ivar_15;
        uint16_t ivar_19;
        ivar_19 = (uint16_t)ivar_6->length;
        bytestrings__bytestring_t ivar_18;
        ivar_18 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_19);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_15 = (bytestrings__bytestring_t)ivar_18;
        if (ivar_15 != NULL) ivar_15->count++;
        release_bytestrings__bytestring(ivar_18);
        /* P1 */ bytestrings__bytestring_t ivar_20;
        KDF_funtype_2_t ivar_25;
        uint8_t ivar_29;
        ivar_29 = (uint8_t)6;
        KDF_funtype_2_t ivar_28;
        ivar_28 = (KDF_funtype_2_t)rotate__lbytesXOR((uint8_t)ivar_29);
        //copying to KDF_funtype_2 from KDF_funtype_2;
        ivar_25 = (KDF_funtype_2_t)ivar_28;
        if (ivar_25 != NULL) ivar_25->count++;
        release_KDF_funtype_2(ivar_28);
        bytestrings__bytestring_t ivar_23;
        ivar_23 = (bytestrings__bytestring_t)ivar_25->ftbl->mptr(ivar_25, ivar_4, ivar_5);
        ivar_25->ftbl->rptr(ivar_25);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_23;
        if (ivar_20 != NULL) ivar_20->count++;
        release_bytestrings__bytestring(ivar_23);
        /* L1 */ bytestrings__bytestring_t ivar_32;
        uint16_t ivar_36;
        ivar_36 = (uint16_t)ivar_20->length;
        bytestrings__bytestring_t ivar_35;
        ivar_35 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_36);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_32 = (bytestrings__bytestring_t)ivar_35;
        if (ivar_32 != NULL) ivar_32->count++;
        release_bytestrings__bytestring(ivar_35);
        /* S */ bytestrings__bytestring_t ivar_37;
        bytestrings__bytestring_t ivar_59;
        bytestrings__bytestring_t ivar_56;
        bytestrings__bytestring_t ivar_53;
        bytestrings__bytestring_t ivar_50;
        bytestrings__bytestring_t ivar_47;
        ivar_47 = (bytestrings__bytestring_t)bytestrings__unit((uint8_t)ivar_13);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_50 = (bytestrings__bytestring_t)ivar_47;
        if (ivar_50 != NULL) ivar_50->count++;
        release_bytestrings__bytestring(ivar_47);
        bytestrings__bytestring_t ivar_49;
        ivar_49 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_50, (bytestrings__bytestring_t)ivar_6);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_53 = (bytestrings__bytestring_t)ivar_49;
        if (ivar_53 != NULL) ivar_53->count++;
        release_bytestrings__bytestring(ivar_49);
        bytestrings__bytestring_t ivar_52;
        ivar_52 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_53, (bytestrings__bytestring_t)ivar_15);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_56 = (bytestrings__bytestring_t)ivar_52;
        if (ivar_56 != NULL) ivar_56->count++;
        release_bytestrings__bytestring(ivar_52);
        bytestrings__bytestring_t ivar_55;
        ivar_55 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_56, (bytestrings__bytestring_t)ivar_20);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_59 = (bytestrings__bytestring_t)ivar_55;
        if (ivar_59 != NULL) ivar_59->count++;
        release_bytestrings__bytestring(ivar_55);
        bytestrings__bytestring_t ivar_58;
        ivar_58 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_59, (bytestrings__bytestring_t)ivar_32);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_37 = (bytestrings__bytestring_t)ivar_58;
        if (ivar_37 != NULL) ivar_37->count++;
        release_bytestrings__bytestring(ivar_58);
        bytestrings__bytestring_t ivar_63;
        ivar_63 = (bytestrings__bytestring_t)KDF__KDF((bytestrings__bytestring_t)ivar_7, (bytestrings__bytestring_t)ivar_37);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_63;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_63);

        
        return result;
}

extern bytestrings__bytestring_t KDF__KSEAF(bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3){
        bytestrings__bytestring_t  result;
        /* FC */ uint8_t ivar_5;
        ivar_5 = (uint8_t)108;
        /* L0 */ bytestrings__bytestring_t ivar_7;
        uint16_t ivar_11;
        ivar_11 = (uint16_t)ivar_3->length;
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_7 = (bytestrings__bytestring_t)ivar_10;
        if (ivar_7 != NULL) ivar_7->count++;
        release_bytestrings__bytestring(ivar_10);
        /* S */ bytestrings__bytestring_t ivar_12;
        bytestrings__bytestring_t ivar_24;
        bytestrings__bytestring_t ivar_21;
        bytestrings__bytestring_t ivar_18;
        ivar_18 = (bytestrings__bytestring_t)bytestrings__unit((uint8_t)ivar_5);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_18;
        if (ivar_21 != NULL) ivar_21->count++;
        release_bytestrings__bytestring(ivar_18);
        bytestrings__bytestring_t ivar_20;
        ivar_20 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_21, (bytestrings__bytestring_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_24 = (bytestrings__bytestring_t)ivar_20;
        if (ivar_24 != NULL) ivar_24->count++;
        release_bytestrings__bytestring(ivar_20);
        bytestrings__bytestring_t ivar_23;
        ivar_23 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_24, (bytestrings__bytestring_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_12 = (bytestrings__bytestring_t)ivar_23;
        if (ivar_12 != NULL) ivar_12->count++;
        release_bytestrings__bytestring(ivar_23);
        bytestrings__bytestring_t ivar_28;
        ivar_28 = (bytestrings__bytestring_t)KDF__KDF((bytestrings__bytestring_t)ivar_2, (bytestrings__bytestring_t)ivar_12);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_28;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_28);

        
        return result;
}

extern bytestrings__bytestring_t KDF__KAMF(bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3, bytestrings__bytestring_t ivar_4){
        bytestrings__bytestring_t  result;
        /* FC */ uint8_t ivar_6;
        ivar_6 = (uint8_t)109;
        /* L0 */ bytestrings__bytestring_t ivar_8;
        uint16_t ivar_12;
        ivar_12 = (uint16_t)ivar_3->length;
        bytestrings__bytestring_t ivar_11;
        ivar_11 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_12);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_8 = (bytestrings__bytestring_t)ivar_11;
        if (ivar_8 != NULL) ivar_8->count++;
        release_bytestrings__bytestring(ivar_11);
        /* L1 */ bytestrings__bytestring_t ivar_14;
        uint16_t ivar_18;
        ivar_18 = (uint16_t)ivar_4->length;
        bytestrings__bytestring_t ivar_17;
        ivar_17 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_18);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_14 = (bytestrings__bytestring_t)ivar_17;
        if (ivar_14 != NULL) ivar_14->count++;
        release_bytestrings__bytestring(ivar_17);
        /* S */ bytestrings__bytestring_t ivar_19;
        bytestrings__bytestring_t ivar_41;
        bytestrings__bytestring_t ivar_38;
        bytestrings__bytestring_t ivar_35;
        bytestrings__bytestring_t ivar_32;
        bytestrings__bytestring_t ivar_29;
        ivar_29 = (bytestrings__bytestring_t)bytestrings__unit((uint8_t)ivar_6);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_32 = (bytestrings__bytestring_t)ivar_29;
        if (ivar_32 != NULL) ivar_32->count++;
        release_bytestrings__bytestring(ivar_29);
        bytestrings__bytestring_t ivar_31;
        ivar_31 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_32, (bytestrings__bytestring_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_35 = (bytestrings__bytestring_t)ivar_31;
        if (ivar_35 != NULL) ivar_35->count++;
        release_bytestrings__bytestring(ivar_31);
        bytestrings__bytestring_t ivar_34;
        ivar_34 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_35, (bytestrings__bytestring_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_38 = (bytestrings__bytestring_t)ivar_34;
        if (ivar_38 != NULL) ivar_38->count++;
        release_bytestrings__bytestring(ivar_34);
        bytestrings__bytestring_t ivar_37;
        ivar_37 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_38, (bytestrings__bytestring_t)ivar_4);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_41 = (bytestrings__bytestring_t)ivar_37;
        if (ivar_41 != NULL) ivar_41->count++;
        release_bytestrings__bytestring(ivar_37);
        bytestrings__bytestring_t ivar_40;
        ivar_40 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_41, (bytestrings__bytestring_t)ivar_14);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_19 = (bytestrings__bytestring_t)ivar_40;
        if (ivar_19 != NULL) ivar_19->count++;
        release_bytestrings__bytestring(ivar_40);
        bytestrings__bytestring_t ivar_45;
        ivar_45 = (bytestrings__bytestring_t)KDF__KDF((bytestrings__bytestring_t)ivar_2, (bytestrings__bytestring_t)ivar_19);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_45;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_45);

        
        return result;
}

extern bytestrings__bytestring_t KDF__RESstar(bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3, bytestrings__bytestring_t ivar_4, bytestrings__bytestring_t ivar_5, bytestrings__bytestring_t ivar_6){
        bytestrings__bytestring_t  result;
        /* KEY */ bytestrings__bytestring_t ivar_7;
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_2, (bytestrings__bytestring_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_7 = (bytestrings__bytestring_t)ivar_10;
        if (ivar_7 != NULL) ivar_7->count++;
        release_bytestrings__bytestring(ivar_10);
        /* FC */ uint8_t ivar_13;
        ivar_13 = (uint8_t)107;
        /* L0 */ bytestrings__bytestring_t ivar_15;
        uint16_t ivar_19;
        ivar_19 = (uint16_t)ivar_4->length;
        bytestrings__bytestring_t ivar_18;
        ivar_18 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_19);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_15 = (bytestrings__bytestring_t)ivar_18;
        if (ivar_15 != NULL) ivar_15->count++;
        release_bytestrings__bytestring(ivar_18);
        /* L1 */ bytestrings__bytestring_t ivar_21;
        uint16_t ivar_25;
        ivar_25 = (uint16_t)ivar_5->length;
        bytestrings__bytestring_t ivar_24;
        ivar_24 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_25);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_24;
        if (ivar_21 != NULL) ivar_21->count++;
        release_bytestrings__bytestring(ivar_24);
        /* L2 */ bytestrings__bytestring_t ivar_27;
        uint16_t ivar_31;
        ivar_31 = (uint16_t)ivar_6->length;
        bytestrings__bytestring_t ivar_30;
        ivar_30 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_31);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_27 = (bytestrings__bytestring_t)ivar_30;
        if (ivar_27 != NULL) ivar_27->count++;
        release_bytestrings__bytestring(ivar_30);
        /* S */ bytestrings__bytestring_t ivar_32;
        bytestrings__bytestring_t ivar_64;
        bytestrings__bytestring_t ivar_61;
        bytestrings__bytestring_t ivar_58;
        bytestrings__bytestring_t ivar_55;
        bytestrings__bytestring_t ivar_52;
        bytestrings__bytestring_t ivar_49;
        bytestrings__bytestring_t ivar_46;
        ivar_46 = (bytestrings__bytestring_t)bytestrings__unit((uint8_t)ivar_13);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_49 = (bytestrings__bytestring_t)ivar_46;
        if (ivar_49 != NULL) ivar_49->count++;
        release_bytestrings__bytestring(ivar_46);
        bytestrings__bytestring_t ivar_48;
        ivar_48 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_49, (bytestrings__bytestring_t)ivar_4);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_52 = (bytestrings__bytestring_t)ivar_48;
        if (ivar_52 != NULL) ivar_52->count++;
        release_bytestrings__bytestring(ivar_48);
        bytestrings__bytestring_t ivar_51;
        ivar_51 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_52, (bytestrings__bytestring_t)ivar_15);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_55 = (bytestrings__bytestring_t)ivar_51;
        if (ivar_55 != NULL) ivar_55->count++;
        release_bytestrings__bytestring(ivar_51);
        bytestrings__bytestring_t ivar_54;
        ivar_54 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_55, (bytestrings__bytestring_t)ivar_5);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_58 = (bytestrings__bytestring_t)ivar_54;
        if (ivar_58 != NULL) ivar_58->count++;
        release_bytestrings__bytestring(ivar_54);
        bytestrings__bytestring_t ivar_57;
        ivar_57 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_58, (bytestrings__bytestring_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_61 = (bytestrings__bytestring_t)ivar_57;
        if (ivar_61 != NULL) ivar_61->count++;
        release_bytestrings__bytestring(ivar_57);
        bytestrings__bytestring_t ivar_60;
        ivar_60 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_61, (bytestrings__bytestring_t)ivar_6);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_64 = (bytestrings__bytestring_t)ivar_60;
        if (ivar_64 != NULL) ivar_64->count++;
        release_bytestrings__bytestring(ivar_60);
        bytestrings__bytestring_t ivar_63;
        ivar_63 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_64, (bytestrings__bytestring_t)ivar_27);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_32 = (bytestrings__bytestring_t)ivar_63;
        if (ivar_32 != NULL) ivar_32->count++;
        release_bytestrings__bytestring(ivar_63);
        /* kdf */ bytestrings__bytestring_t ivar_66;
        bytestrings__bytestring_t ivar_69;
        ivar_69 = (bytestrings__bytestring_t)KDF__KDF((bytestrings__bytestring_t)ivar_7, (bytestrings__bytestring_t)ivar_32);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_66 = (bytestrings__bytestring_t)ivar_69;
        if (ivar_66 != NULL) ivar_66->count++;
        release_bytestrings__bytestring(ivar_69);
        uint32_t ivar_76;
        ivar_76 = (uint32_t)16;
        bytestrings__bytestring_t ivar_74;
        ivar_74 = (bytestrings__bytestring_t)bytestrings__suffix((bytestrings__bytestring_t)ivar_66, (uint32_t)ivar_76);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_74;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_74);

        
        return result;
}

extern bytestrings__bytestring_t KDF__XRESstar(bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3, bytestrings__bytestring_t ivar_4, bytestrings__bytestring_t ivar_5, bytestrings__bytestring_t ivar_6){
        bytestrings__bytestring_t  result;
        /* KEY */ bytestrings__bytestring_t ivar_7;
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_2, (bytestrings__bytestring_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_7 = (bytestrings__bytestring_t)ivar_10;
        if (ivar_7 != NULL) ivar_7->count++;
        release_bytestrings__bytestring(ivar_10);
        /* FC */ uint8_t ivar_13;
        ivar_13 = (uint8_t)107;
        /* L0 */ bytestrings__bytestring_t ivar_15;
        uint16_t ivar_19;
        ivar_19 = (uint16_t)ivar_4->length;
        bytestrings__bytestring_t ivar_18;
        ivar_18 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_19);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_15 = (bytestrings__bytestring_t)ivar_18;
        if (ivar_15 != NULL) ivar_15->count++;
        release_bytestrings__bytestring(ivar_18);
        /* L1 */ bytestrings__bytestring_t ivar_21;
        uint16_t ivar_25;
        ivar_25 = (uint16_t)ivar_5->length;
        bytestrings__bytestring_t ivar_24;
        ivar_24 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_25);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_24;
        if (ivar_21 != NULL) ivar_21->count++;
        release_bytestrings__bytestring(ivar_24);
        /* L2 */ bytestrings__bytestring_t ivar_27;
        uint16_t ivar_31;
        ivar_31 = (uint16_t)ivar_6->length;
        bytestrings__bytestring_t ivar_30;
        ivar_30 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_31);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_27 = (bytestrings__bytestring_t)ivar_30;
        if (ivar_27 != NULL) ivar_27->count++;
        release_bytestrings__bytestring(ivar_30);
        /* S */ bytestrings__bytestring_t ivar_32;
        bytestrings__bytestring_t ivar_64;
        bytestrings__bytestring_t ivar_61;
        bytestrings__bytestring_t ivar_58;
        bytestrings__bytestring_t ivar_55;
        bytestrings__bytestring_t ivar_52;
        bytestrings__bytestring_t ivar_49;
        bytestrings__bytestring_t ivar_46;
        ivar_46 = (bytestrings__bytestring_t)bytestrings__unit((uint8_t)ivar_13);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_49 = (bytestrings__bytestring_t)ivar_46;
        if (ivar_49 != NULL) ivar_49->count++;
        release_bytestrings__bytestring(ivar_46);
        bytestrings__bytestring_t ivar_48;
        ivar_48 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_49, (bytestrings__bytestring_t)ivar_4);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_52 = (bytestrings__bytestring_t)ivar_48;
        if (ivar_52 != NULL) ivar_52->count++;
        release_bytestrings__bytestring(ivar_48);
        bytestrings__bytestring_t ivar_51;
        ivar_51 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_52, (bytestrings__bytestring_t)ivar_15);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_55 = (bytestrings__bytestring_t)ivar_51;
        if (ivar_55 != NULL) ivar_55->count++;
        release_bytestrings__bytestring(ivar_51);
        bytestrings__bytestring_t ivar_54;
        ivar_54 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_55, (bytestrings__bytestring_t)ivar_5);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_58 = (bytestrings__bytestring_t)ivar_54;
        if (ivar_58 != NULL) ivar_58->count++;
        release_bytestrings__bytestring(ivar_54);
        bytestrings__bytestring_t ivar_57;
        ivar_57 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_58, (bytestrings__bytestring_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_61 = (bytestrings__bytestring_t)ivar_57;
        if (ivar_61 != NULL) ivar_61->count++;
        release_bytestrings__bytestring(ivar_57);
        bytestrings__bytestring_t ivar_60;
        ivar_60 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_61, (bytestrings__bytestring_t)ivar_6);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_64 = (bytestrings__bytestring_t)ivar_60;
        if (ivar_64 != NULL) ivar_64->count++;
        release_bytestrings__bytestring(ivar_60);
        bytestrings__bytestring_t ivar_63;
        ivar_63 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_64, (bytestrings__bytestring_t)ivar_27);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_32 = (bytestrings__bytestring_t)ivar_63;
        if (ivar_32 != NULL) ivar_32->count++;
        release_bytestrings__bytestring(ivar_63);
        /* kdf */ bytestrings__bytestring_t ivar_66;
        bytestrings__bytestring_t ivar_69;
        ivar_69 = (bytestrings__bytestring_t)KDF__KDF((bytestrings__bytestring_t)ivar_7, (bytestrings__bytestring_t)ivar_32);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_66 = (bytestrings__bytestring_t)ivar_69;
        if (ivar_66 != NULL) ivar_66->count++;
        release_bytestrings__bytestring(ivar_69);
        uint32_t ivar_76;
        ivar_76 = (uint32_t)16;
        bytestrings__bytestring_t ivar_74;
        ivar_74 = (bytestrings__bytestring_t)bytestrings__suffix((bytestrings__bytestring_t)ivar_66, (uint32_t)ivar_76);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_74;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_74);

        
        return result;
}

extern bytestrings__bytestring_t KDF__test_KDF1(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_25;
        bytestrings__bytestring_t ivar_21;
        KDF_record_4_t ivar_10;
        uint32_t len1266 = 3;
        uint32_t characters1267[3] = {107, 101, 121};
        stringliteral_t string1265 = mk_string(3, characters1267);
        ivar_10 = (KDF_record_4_t)strings__make_string(len1266, string1265);
        strings__string_t ivar_8;
        //copying to strings__string from KDF_record_4;
        ivar_8 = (strings__string_t)ivar_10;
        if (ivar_8 != NULL) ivar_8->count++;
        release_KDF_record_4(ivar_10);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_7;
        if (ivar_21 != NULL) ivar_21->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_22;
        uint8_t ivar_13;
        ivar_13 = (uint8_t)108;
        bytestrings__bytestring_t ivar_12;
        ivar_12 = (bytestrings__bytestring_t)bytestrings__unit((uint8_t)ivar_13);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_22 = (bytestrings__bytestring_t)ivar_12;
        if (ivar_22 != NULL) ivar_22->count++;
        release_bytestrings__bytestring(ivar_12);
        bytestrings__bytestring_t ivar_23;
        KDF_record_4_t ivar_19;
        uint32_t len1269 = 18;
        uint32_t characters1270[18] = {84, 104, 105, 115, 32, 105, 115, 32, 97, 32, 109, 101, 115, 115, 97, 103, 101, 46};
        stringliteral_t string1268 = mk_string(18, characters1270);
        ivar_19 = (KDF_record_4_t)strings__make_string(len1269, string1268);
        strings__string_t ivar_17;
        //copying to strings__string from KDF_record_4;
        ivar_17 = (strings__string_t)ivar_19;
        if (ivar_17 != NULL) ivar_17->count++;
        release_KDF_record_4(ivar_19);
        bytestrings__bytestring_t ivar_16;
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_17);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_23 = (bytestrings__bytestring_t)ivar_16;
        if (ivar_23 != NULL) ivar_23->count++;
        release_bytestrings__bytestring(ivar_16);
        bytestrings__bytestring_t ivar_20;
        ivar_20 = (bytestrings__bytestring_t)KDF__KDF1((bytestrings__bytestring_t)ivar_21, (bytestrings__bytestring_t)ivar_22, (bytestrings__bytestring_t)ivar_23);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_25 = (bytestrings__bytestring_t)ivar_20;
        if (ivar_25 != NULL) ivar_25->count++;
        release_bytestrings__bytestring(ivar_20);
        bytestrings__bytestring_t ivar_24;
        ivar_24 = (bytestrings__bytestring_t)SHA256__bytestring2hexstring((bytestrings__bytestring_t)ivar_25);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_24;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_24);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t KDF__test_KDF2(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_33;
        bytestrings__bytestring_t ivar_28;
        KDF_record_4_t ivar_11;
        uint32_t len1275 = 3;
        uint32_t characters1276[3] = {107, 101, 121};
        stringliteral_t string1274 = mk_string(3, characters1276);
        ivar_11 = (KDF_record_4_t)strings__make_string(len1275, string1274);
        strings__string_t ivar_9;
        //copying to strings__string from KDF_record_4;
        ivar_9 = (strings__string_t)ivar_11;
        if (ivar_9 != NULL) ivar_9->count++;
        release_KDF_record_4(ivar_11);
        bytestrings__bytestring_t ivar_8;
        ivar_8 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_9);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_28 = (bytestrings__bytestring_t)ivar_8;
        if (ivar_28 != NULL) ivar_28->count++;
        release_bytestrings__bytestring(ivar_8);
        bytestrings__bytestring_t ivar_29;
        uint8_t ivar_14;
        ivar_14 = (uint8_t)109;
        bytestrings__bytestring_t ivar_13;
        ivar_13 = (bytestrings__bytestring_t)bytestrings__unit((uint8_t)ivar_14);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_29 = (bytestrings__bytestring_t)ivar_13;
        if (ivar_29 != NULL) ivar_29->count++;
        release_bytestrings__bytestring(ivar_13);
        bytestrings__bytestring_t ivar_30;
        KDF_record_4_t ivar_20;
        uint32_t len1278 = 18;
        uint32_t characters1279[18] = {84, 104, 105, 115, 32, 105, 115, 32, 97, 32, 109, 101, 115, 115, 97, 103, 101, 46};
        stringliteral_t string1277 = mk_string(18, characters1279);
        ivar_20 = (KDF_record_4_t)strings__make_string(len1278, string1277);
        strings__string_t ivar_18;
        //copying to strings__string from KDF_record_4;
        ivar_18 = (strings__string_t)ivar_20;
        if (ivar_18 != NULL) ivar_18->count++;
        release_KDF_record_4(ivar_20);
        bytestrings__bytestring_t ivar_17;
        ivar_17 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_18);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_30 = (bytestrings__bytestring_t)ivar_17;
        if (ivar_30 != NULL) ivar_30->count++;
        release_bytestrings__bytestring(ivar_17);
        bytestrings__bytestring_t ivar_31;
        KDF_record_4_t ivar_26;
        uint32_t len1281 = 24;
        uint32_t characters1282[24] = {84, 104, 105, 115, 32, 105, 115, 32, 97, 110, 111, 116, 104, 101, 114, 32, 109, 101, 115, 115, 97, 103, 101, 46};
        stringliteral_t string1280 = mk_string(24, characters1282);
        ivar_26 = (KDF_record_4_t)strings__make_string(len1281, string1280);
        strings__string_t ivar_24;
        //copying to strings__string from KDF_record_4;
        ivar_24 = (strings__string_t)ivar_26;
        if (ivar_24 != NULL) ivar_24->count++;
        release_KDF_record_4(ivar_26);
        bytestrings__bytestring_t ivar_23;
        ivar_23 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_24);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_31 = (bytestrings__bytestring_t)ivar_23;
        if (ivar_31 != NULL) ivar_31->count++;
        release_bytestrings__bytestring(ivar_23);
        bytestrings__bytestring_t ivar_27;
        ivar_27 = (bytestrings__bytestring_t)KDF__KDF2((bytestrings__bytestring_t)ivar_28, (bytestrings__bytestring_t)ivar_29, (bytestrings__bytestring_t)ivar_30, (bytestrings__bytestring_t)ivar_31);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_33 = (bytestrings__bytestring_t)ivar_27;
        if (ivar_33 != NULL) ivar_33->count++;
        release_bytestrings__bytestring(ivar_27);
        bytestrings__bytestring_t ivar_32;
        ivar_32 = (bytestrings__bytestring_t)SHA256__bytestring2hexstring((bytestrings__bytestring_t)ivar_33);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_32;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_32);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t KDF__test_KDF3(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_41;
        bytestrings__bytestring_t ivar_35;
        KDF_record_4_t ivar_12;
        uint32_t len1288 = 3;
        uint32_t characters1289[3] = {107, 101, 121};
        stringliteral_t string1287 = mk_string(3, characters1289);
        ivar_12 = (KDF_record_4_t)strings__make_string(len1288, string1287);
        strings__string_t ivar_10;
        //copying to strings__string from KDF_record_4;
        ivar_10 = (strings__string_t)ivar_12;
        if (ivar_10 != NULL) ivar_10->count++;
        release_KDF_record_4(ivar_12);
        bytestrings__bytestring_t ivar_9;
        ivar_9 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_10);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_35 = (bytestrings__bytestring_t)ivar_9;
        if (ivar_35 != NULL) ivar_35->count++;
        release_bytestrings__bytestring(ivar_9);
        bytestrings__bytestring_t ivar_36;
        uint8_t ivar_15;
        ivar_15 = (uint8_t)109;
        bytestrings__bytestring_t ivar_14;
        ivar_14 = (bytestrings__bytestring_t)bytestrings__unit((uint8_t)ivar_15);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_36 = (bytestrings__bytestring_t)ivar_14;
        if (ivar_36 != NULL) ivar_36->count++;
        release_bytestrings__bytestring(ivar_14);
        bytestrings__bytestring_t ivar_37;
        KDF_record_4_t ivar_21;
        uint32_t len1291 = 18;
        uint32_t characters1292[18] = {84, 104, 105, 115, 32, 105, 115, 32, 97, 32, 109, 101, 115, 115, 97, 103, 101, 46};
        stringliteral_t string1290 = mk_string(18, characters1292);
        ivar_21 = (KDF_record_4_t)strings__make_string(len1291, string1290);
        strings__string_t ivar_19;
        //copying to strings__string from KDF_record_4;
        ivar_19 = (strings__string_t)ivar_21;
        if (ivar_19 != NULL) ivar_19->count++;
        release_KDF_record_4(ivar_21);
        bytestrings__bytestring_t ivar_18;
        ivar_18 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_19);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_37 = (bytestrings__bytestring_t)ivar_18;
        if (ivar_37 != NULL) ivar_37->count++;
        release_bytestrings__bytestring(ivar_18);
        bytestrings__bytestring_t ivar_38;
        KDF_record_4_t ivar_27;
        uint32_t len1294 = 24;
        uint32_t characters1295[24] = {84, 104, 105, 115, 32, 105, 115, 32, 97, 110, 111, 116, 104, 101, 114, 32, 109, 101, 115, 115, 97, 103, 101, 46};
        stringliteral_t string1293 = mk_string(24, characters1295);
        ivar_27 = (KDF_record_4_t)strings__make_string(len1294, string1293);
        strings__string_t ivar_25;
        //copying to strings__string from KDF_record_4;
        ivar_25 = (strings__string_t)ivar_27;
        if (ivar_25 != NULL) ivar_25->count++;
        release_KDF_record_4(ivar_27);
        bytestrings__bytestring_t ivar_24;
        ivar_24 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_25);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_38 = (bytestrings__bytestring_t)ivar_24;
        if (ivar_38 != NULL) ivar_38->count++;
        release_bytestrings__bytestring(ivar_24);
        bytestrings__bytestring_t ivar_39;
        KDF_record_4_t ivar_33;
        uint32_t len1297 = 26;
        uint32_t characters1298[26] = {84, 104, 105, 115, 32, 105, 115, 32, 116, 104, 101, 32, 102, 105, 110, 97, 108, 32, 109, 101, 115, 115, 97, 103, 101, 46};
        stringliteral_t string1296 = mk_string(26, characters1298);
        ivar_33 = (KDF_record_4_t)strings__make_string(len1297, string1296);
        strings__string_t ivar_31;
        //copying to strings__string from KDF_record_4;
        ivar_31 = (strings__string_t)ivar_33;
        if (ivar_31 != NULL) ivar_31->count++;
        release_KDF_record_4(ivar_33);
        bytestrings__bytestring_t ivar_30;
        ivar_30 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_31);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_39 = (bytestrings__bytestring_t)ivar_30;
        if (ivar_39 != NULL) ivar_39->count++;
        release_bytestrings__bytestring(ivar_30);
        bytestrings__bytestring_t ivar_34;
        ivar_34 = (bytestrings__bytestring_t)KDF__KDF3((bytestrings__bytestring_t)ivar_35, (bytestrings__bytestring_t)ivar_36, (bytestrings__bytestring_t)ivar_37, (bytestrings__bytestring_t)ivar_38, (bytestrings__bytestring_t)ivar_39);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_41 = (bytestrings__bytestring_t)ivar_34;
        if (ivar_41 != NULL) ivar_41->count++;
        release_bytestrings__bytestring(ivar_34);
        bytestrings__bytestring_t ivar_40;
        ivar_40 = (bytestrings__bytestring_t)SHA256__bytestring2hexstring((bytestrings__bytestring_t)ivar_41);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_40;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_40);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t KDF__test_KAUSF(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_40;
        bytestrings__bytestring_t ivar_34;
        uint8_t ivar_10;
        ivar_10 = (uint8_t)51;
        uint8_t ivar_11;
        ivar_11 = (uint8_t)16;
        bytestrings__bytestring_t ivar_9;
        ivar_9 = (bytestrings__bytestring_t)rotate__nbytes((uint8_t)ivar_10, (uint8_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_34 = (bytestrings__bytestring_t)ivar_9;
        if (ivar_34 != NULL) ivar_34->count++;
        release_bytestrings__bytestring(ivar_9);
        bytestrings__bytestring_t ivar_35;
        uint8_t ivar_15;
        ivar_15 = (uint8_t)170;
        uint8_t ivar_16;
        ivar_16 = (uint8_t)16;
        bytestrings__bytestring_t ivar_14;
        ivar_14 = (bytestrings__bytestring_t)rotate__nbytes((uint8_t)ivar_15, (uint8_t)ivar_16);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_35 = (bytestrings__bytestring_t)ivar_14;
        if (ivar_35 != NULL) ivar_35->count++;
        release_bytestrings__bytestring(ivar_14);
        bytestrings__bytestring_t ivar_36;
        uint8_t ivar_20;
        ivar_20 = (uint8_t)5;
        uint8_t ivar_21;
        ivar_21 = (uint8_t)6;
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)rotate__nbytes((uint8_t)ivar_20, (uint8_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_36 = (bytestrings__bytestring_t)ivar_19;
        if (ivar_36 != NULL) ivar_36->count++;
        release_bytestrings__bytestring(ivar_19);
        bytestrings__bytestring_t ivar_37;
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)6;
        bytestrings__bytestring_t ivar_24;
        ivar_24 = (bytestrings__bytestring_t)rotate__nbytes((uint8_t)ivar_25, (uint8_t)ivar_26);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_37 = (bytestrings__bytestring_t)ivar_24;
        if (ivar_37 != NULL) ivar_37->count++;
        release_bytestrings__bytestring(ivar_24);
        bytestrings__bytestring_t ivar_38;
        KDF_record_4_t ivar_32;
        uint32_t len1301 = 13;
        uint32_t characters1302[13] = {83, 101, 114, 118, 101, 114, 78, 101, 116, 119, 111, 114, 107};
        stringliteral_t string1300 = mk_string(13, characters1302);
        ivar_32 = (KDF_record_4_t)strings__make_string(len1301, string1300);
        strings__string_t ivar_30;
        //copying to strings__string from KDF_record_4;
        ivar_30 = (strings__string_t)ivar_32;
        if (ivar_30 != NULL) ivar_30->count++;
        release_KDF_record_4(ivar_32);
        bytestrings__bytestring_t ivar_29;
        ivar_29 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_30);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_38 = (bytestrings__bytestring_t)ivar_29;
        if (ivar_38 != NULL) ivar_38->count++;
        release_bytestrings__bytestring(ivar_29);
        bytestrings__bytestring_t ivar_33;
        ivar_33 = (bytestrings__bytestring_t)KDF__KAUSF((bytestrings__bytestring_t)ivar_34, (bytestrings__bytestring_t)ivar_35, (bytestrings__bytestring_t)ivar_36, (bytestrings__bytestring_t)ivar_37, (bytestrings__bytestring_t)ivar_38);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_40 = (bytestrings__bytestring_t)ivar_33;
        if (ivar_40 != NULL) ivar_40->count++;
        release_bytestrings__bytestring(ivar_33);
        bytestrings__bytestring_t ivar_39;
        ivar_39 = (bytestrings__bytestring_t)SHA256__bytestring2hexstring((bytestrings__bytestring_t)ivar_40);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_39;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_39);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t KDF__test_KSEAF(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_14;
        bytestrings__bytestring_t ivar_11;
        ivar_11 = (bytestrings__bytestring_t)KDF__test_KAUSF();
        if (ivar_11 != NULL) ivar_11->count++;
        bytestrings__bytestring_t ivar_12;
        KDF_record_4_t ivar_9;
        uint32_t len1305 = 10;
        uint32_t characters1306[10] = {77, 121, 83, 101, 99, 114, 101, 116, 73, 68};
        stringliteral_t string1304 = mk_string(10, characters1306);
        ivar_9 = (KDF_record_4_t)strings__make_string(len1305, string1304);
        strings__string_t ivar_7;
        //copying to strings__string from KDF_record_4;
        ivar_7 = (strings__string_t)ivar_9;
        if (ivar_7 != NULL) ivar_7->count++;
        release_KDF_record_4(ivar_9);
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_12 = (bytestrings__bytestring_t)ivar_6;
        if (ivar_12 != NULL) ivar_12->count++;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)KDF__KSEAF((bytestrings__bytestring_t)ivar_11, (bytestrings__bytestring_t)ivar_12);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_14 = (bytestrings__bytestring_t)ivar_10;
        if (ivar_14 != NULL) ivar_14->count++;
        release_bytestrings__bytestring(ivar_10);
        bytestrings__bytestring_t ivar_13;
        ivar_13 = (bytestrings__bytestring_t)SHA256__bytestring2hexstring((bytestrings__bytestring_t)ivar_14);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_13;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_13);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t KDF__test_KAMF(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_22;
        bytestrings__bytestring_t ivar_18;
        ivar_18 = (bytestrings__bytestring_t)KDF__test_KSEAF();
        if (ivar_18 != NULL) ivar_18->count++;
        bytestrings__bytestring_t ivar_19;
        KDF_record_4_t ivar_10;
        uint32_t len1310 = 6;
        uint32_t characters1311[6] = {65, 77, 70, 95, 73, 68};
        stringliteral_t string1309 = mk_string(6, characters1311);
        ivar_10 = (KDF_record_4_t)strings__make_string(len1310, string1309);
        strings__string_t ivar_8;
        //copying to strings__string from KDF_record_4;
        ivar_8 = (strings__string_t)ivar_10;
        if (ivar_8 != NULL) ivar_8->count++;
        release_KDF_record_4(ivar_10);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_19 = (bytestrings__bytestring_t)ivar_7;
        if (ivar_19 != NULL) ivar_19->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_20;
        KDF_record_4_t ivar_16;
        uint32_t len1313 = 4;
        uint32_t characters1314[4] = {65, 66, 66, 65};
        stringliteral_t string1312 = mk_string(4, characters1314);
        ivar_16 = (KDF_record_4_t)strings__make_string(len1313, string1312);
        strings__string_t ivar_14;
        //copying to strings__string from KDF_record_4;
        ivar_14 = (strings__string_t)ivar_16;
        if (ivar_14 != NULL) ivar_14->count++;
        release_KDF_record_4(ivar_16);
        bytestrings__bytestring_t ivar_13;
        ivar_13 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_14);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_13;
        if (ivar_20 != NULL) ivar_20->count++;
        release_bytestrings__bytestring(ivar_13);
        bytestrings__bytestring_t ivar_17;
        ivar_17 = (bytestrings__bytestring_t)KDF__KAMF((bytestrings__bytestring_t)ivar_18, (bytestrings__bytestring_t)ivar_19, (bytestrings__bytestring_t)ivar_20);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_22 = (bytestrings__bytestring_t)ivar_17;
        if (ivar_22 != NULL) ivar_22->count++;
        release_bytestrings__bytestring(ivar_17);
        bytestrings__bytestring_t ivar_21;
        ivar_21 = (bytestrings__bytestring_t)SHA256__bytestring2hexstring((bytestrings__bytestring_t)ivar_22);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_21;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_21);

        defined = true;};
        
        return result;
}