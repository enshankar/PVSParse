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
        while (i < x->size && tmp){tmp = (x->elems[i] = y->elems[i]); i++;};
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

        int64_t tmp32455 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp32455 == 0);
        bool_t keymatch;
        int64_t tmp32456 = mpz_cmp(data.key, i);
        keymatch = (tmp32456 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp32455 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp32455 == 0);

        int64_t tmp32456 = mpz_cmp(data.key, i);
        keymatch = (tmp32456 == 0);
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
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp32457 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp32457 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp32458 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp32458 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp32459 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp32459 == 0);
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
        int64_t tmp32460 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp32460 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;tempvalue = (uint32_t)v;};
        return a;

}

KDF_funtype_3_t update_KDF_funtype_3(KDF_funtype_3_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_KDF_funtype_3(a, i, v);
            } else {
                KDF_funtype_3_t x = copy_KDF_funtype_3(a);
                x->count--;
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



extern bytestrings__bytestring_t KDF__u8to_bstring(uint8_t ivar_1){
        bytestrings__bytestring_t result;
        uint32_t ivar_2;
        ivar_2 = (uint32_t)1;
        KDF_array_0_t ivar_6;
        uint32_t size32443;
        //copying to uint32 from uint32;
        size32443 = (uint32_t)ivar_2;
        size32443 += 0;
        ivar_6 = new_KDF_array_0(size32443);
        uint8_t ivar_5;
        for (uint32_t index32442 = 0; index32442 < size32443; index32442++){
             ivar_5 = (uint8_t)index32442;
             //copying to uint8 from uint8;
             ivar_6->elems[index32442] = (uint8_t)ivar_1;
        };
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_2;
        result->seq = (KDF_array_0_t)ivar_6;

        return result;
}

extern bytestrings__bytestring_t KDF__u16to_bstring(uint16_t ivar_1){
        bytestrings__bytestring_t result;
        uint32_t ivar_2;
        ivar_2 = (uint32_t)2;
        KDF_array_0_t ivar_20;
        uint32_t size32446;
        //copying to uint32 from uint32;
        size32446 = (uint32_t)ivar_2;
        size32446 += 0;
        ivar_20 = new_KDF_array_0(size32446);
        uint8_t ivar_5;
        for (uint32_t index32445 = 0; index32445 < size32446; index32445++){
             ivar_5 = (uint8_t)index32445;
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)0;
             ivar_6 = (ivar_5 == ivar_8);
             if (ivar_6){  
           uint16_t ivar_14;
           ivar_14 = (uint16_t)256;
           uint16_t ivar_12;
           ivar_12 = (uint16_t)integertypes__u16div((uint16_t)ivar_1, (uint16_t)ivar_14);
           //copying to uint8 from uint16;
           ivar_20->elems[index32445] = (uint8_t)ivar_12;
} else {
             
           uint16_t ivar_19;
           ivar_19 = (uint16_t)256;
           uint16_t ivar_17;
           ivar_17 = (uint16_t)integertypes__u16rem((uint16_t)ivar_1, (uint16_t)ivar_19);
           //copying to uint8 from uint16;
           ivar_20->elems[index32445] = (uint8_t)ivar_17;
};
        };
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_2;
        result->seq = (KDF_array_0_t)ivar_20;

        return result;
}

extern bytestrings__bytestring_t KDF__u32to_bstring(uint32_t ivar_1){
        bytestrings__bytestring_t result;
        uint32_t ivar_2;
        ivar_2 = (uint32_t)4;
        KDF_array_0_t ivar_53;
        uint32_t size32449;
        //copying to uint32 from uint32;
        size32449 = (uint32_t)ivar_2;
        size32449 += 0;
        ivar_53 = new_KDF_array_0(size32449);
        uint8_t ivar_5;
        for (uint32_t index32448 = 0; index32448 < size32449; index32448++){
             ivar_5 = (uint8_t)index32448;
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)0;
             ivar_6 = (ivar_5 == ivar_8);
             if (ivar_6){  
           uint32_t ivar_18;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)24;
           ivar_18 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_16);
           uint32_t ivar_19;
           ivar_19 = (uint32_t)256;
           uint32_t ivar_17;
           ivar_17 = (uint32_t)integertypes__u32rem((uint32_t)ivar_18, (uint32_t)ivar_19);
           //copying to uint8 from uint32;
           ivar_53->elems[index32448] = (uint8_t)ivar_17;
} else {
             
           bool_t ivar_20;
           uint8_t ivar_22;
           ivar_22 = (uint8_t)1;
           ivar_20 = (ivar_5 == ivar_22);
           if (ivar_20){   
           uint32_t ivar_32;
           uint8_t ivar_30;
           ivar_30 = (uint8_t)16;
           ivar_32 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_30);
           uint32_t ivar_33;
           ivar_33 = (uint32_t)256;
           uint32_t ivar_31;
           ivar_31 = (uint32_t)integertypes__u32rem((uint32_t)ivar_32, (uint32_t)ivar_33);
           //copying to uint8 from uint32;
           ivar_53->elems[index32448] = (uint8_t)ivar_31;
} else {
           
           bool_t ivar_34;
           uint8_t ivar_36;
           ivar_36 = (uint8_t)2;
           ivar_34 = (ivar_5 == ivar_36);
           if (ivar_34){    
            uint32_t ivar_46;
            uint8_t ivar_44;
            ivar_44 = (uint8_t)8;
            ivar_46 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_44);
            uint32_t ivar_47;
            ivar_47 = (uint32_t)256;
            uint32_t ivar_45;
            ivar_45 = (uint32_t)integertypes__u32rem((uint32_t)ivar_46, (uint32_t)ivar_47);
            //copying to uint8 from uint32;
            ivar_53->elems[index32448] = (uint8_t)ivar_45;
} else {
           
            uint32_t ivar_52;
            ivar_52 = (uint32_t)256;
            uint32_t ivar_50;
            ivar_50 = (uint32_t)integertypes__u32rem((uint32_t)ivar_1, (uint32_t)ivar_52);
            //copying to uint8 from uint32;
            ivar_53->elems[index32448] = (uint8_t)ivar_50;
};
};
};
        };
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_2;
        result->seq = (KDF_array_0_t)ivar_53;

        return result;
}

extern bytestrings__bytestring_t KDF__u64to_bstring(uint32_t ivar_1){
        bytestrings__bytestring_t result;
        uint32_t ivar_2;
        ivar_2 = (uint32_t)8;
        KDF_array_0_t ivar_109;
        uint32_t size32452;
        //copying to uint32 from uint32;
        size32452 = (uint32_t)ivar_2;
        size32452 += 0;
        ivar_109 = new_KDF_array_0(size32452);
        uint8_t ivar_5;
        for (uint32_t index32451 = 0; index32451 < size32452; index32451++){
             ivar_5 = (uint8_t)index32451;
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)0;
             ivar_6 = (ivar_5 == ivar_8);
             if (ivar_6){  
           uint32_t ivar_18;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)56;
           ivar_18 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_16);
           uint32_t ivar_19;
           ivar_19 = (uint32_t)256;
           uint32_t ivar_17;
           ivar_17 = (uint32_t)integertypes__u32rem((uint32_t)ivar_18, (uint32_t)ivar_19);
           //copying to uint8 from uint32;
           ivar_109->elems[index32451] = (uint8_t)ivar_17;
} else {
             
           bool_t ivar_20;
           uint8_t ivar_22;
           ivar_22 = (uint8_t)1;
           ivar_20 = (ivar_5 == ivar_22);
           if (ivar_20){   
           uint32_t ivar_32;
           uint8_t ivar_30;
           ivar_30 = (uint8_t)48;
           ivar_32 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_30);
           uint32_t ivar_33;
           ivar_33 = (uint32_t)256;
           uint32_t ivar_31;
           ivar_31 = (uint32_t)integertypes__u32rem((uint32_t)ivar_32, (uint32_t)ivar_33);
           //copying to uint8 from uint32;
           ivar_109->elems[index32451] = (uint8_t)ivar_31;
} else {
           
           bool_t ivar_34;
           uint8_t ivar_36;
           ivar_36 = (uint8_t)2;
           ivar_34 = (ivar_5 == ivar_36);
           if (ivar_34){    
            uint32_t ivar_46;
            uint8_t ivar_44;
            ivar_44 = (uint8_t)40;
            ivar_46 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_44);
            uint32_t ivar_47;
            ivar_47 = (uint32_t)256;
            uint32_t ivar_45;
            ivar_45 = (uint32_t)integertypes__u32rem((uint32_t)ivar_46, (uint32_t)ivar_47);
            //copying to uint8 from uint32;
            ivar_109->elems[index32451] = (uint8_t)ivar_45;
} else {
           
            bool_t ivar_48;
            uint8_t ivar_50;
            ivar_50 = (uint8_t)3;
            ivar_48 = (ivar_5 == ivar_50);
            if (ivar_48){     
             uint32_t ivar_60;
             uint8_t ivar_58;
             ivar_58 = (uint8_t)32;
             ivar_60 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_58);
             uint32_t ivar_61;
             ivar_61 = (uint32_t)256;
             uint32_t ivar_59;
             ivar_59 = (uint32_t)integertypes__u32rem((uint32_t)ivar_60, (uint32_t)ivar_61);
             //copying to uint8 from uint32;
             ivar_109->elems[index32451] = (uint8_t)ivar_59;
} else {
            
             bool_t ivar_62;
             uint8_t ivar_64;
             ivar_64 = (uint8_t)4;
             ivar_62 = (ivar_5 == ivar_64);
             if (ivar_62){      
              uint32_t ivar_74;
              uint8_t ivar_72;
              ivar_72 = (uint8_t)24;
              ivar_74 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_72);
              uint32_t ivar_75;
              ivar_75 = (uint32_t)256;
              uint32_t ivar_73;
              ivar_73 = (uint32_t)integertypes__u32rem((uint32_t)ivar_74, (uint32_t)ivar_75);
              //copying to uint8 from uint32;
              ivar_109->elems[index32451] = (uint8_t)ivar_73;
} else {
             
              bool_t ivar_76;
              uint8_t ivar_78;
              ivar_78 = (uint8_t)5;
              ivar_76 = (ivar_5 == ivar_78);
              if (ivar_76){       
               uint32_t ivar_88;
               uint8_t ivar_86;
               ivar_86 = (uint8_t)16;
               ivar_88 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_86);
               uint32_t ivar_89;
               ivar_89 = (uint32_t)256;
               uint32_t ivar_87;
               ivar_87 = (uint32_t)integertypes__u32rem((uint32_t)ivar_88, (uint32_t)ivar_89);
               //copying to uint8 from uint32;
               ivar_109->elems[index32451] = (uint8_t)ivar_87;
} else {
              
               bool_t ivar_90;
               uint8_t ivar_92;
               ivar_92 = (uint8_t)6;
               ivar_90 = (ivar_5 == ivar_92);
               if (ivar_90){        
                uint32_t ivar_102;
                uint8_t ivar_100;
                ivar_100 = (uint8_t)8;
                ivar_102 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_100);
                uint32_t ivar_103;
                ivar_103 = (uint32_t)256;
                uint32_t ivar_101;
                ivar_101 = (uint32_t)integertypes__u32rem((uint32_t)ivar_102, (uint32_t)ivar_103);
                //copying to uint8 from uint32;
                ivar_109->elems[index32451] = (uint8_t)ivar_101;
} else {
               
                uint32_t ivar_108;
                ivar_108 = (uint32_t)256;
                uint32_t ivar_106;
                ivar_106 = (uint32_t)integertypes__u32rem((uint32_t)ivar_1, (uint32_t)ivar_108);
                //copying to uint8 from uint32;
                ivar_109->elems[index32451] = (uint8_t)ivar_106;
};
};
};
};
};
};
};
        };
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_2;
        result->seq = (KDF_array_0_t)ivar_109;

        return result;
}

extern bytestrings__bytestring_t KDF__KDF1(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_24;
        bytestrings__bytestring_t ivar_20;
        bytestrings__bytestring_t ivar_12;
        ivar_3->count++;
        ivar_12 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_2, (bytestrings__bytestring_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_12;
        ivar_20->count++;
        release_bytestrings__bytestring(ivar_12);
        bytestrings__bytestring_t ivar_21;
        uint16_t ivar_18;
        ivar_18 = (uint16_t)ivar_3->length;
        release_bytestrings__bytestring(ivar_3);
        bytestrings__bytestring_t ivar_17;
        ivar_17 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_18);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_17;
        ivar_21->count++;
        release_bytestrings__bytestring(ivar_17);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_20, (bytestrings__bytestring_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_24 = (bytestrings__bytestring_t)ivar_19;
        ivar_24->count++;
        release_bytestrings__bytestring(ivar_19);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)64;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)32;
        bytestrings__bytestring_t ivar_22;
        ivar_22 = (bytestrings__bytestring_t)HMAC__hmac256((HMAC_record_3_t)ivar_1, (HMAC_record_3_t)ivar_24, (uint8_t)ivar_25, (uint8_t)ivar_26);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_22;
        result->count++;
        release_bytestrings__bytestring(ivar_22);

        return result;
}

extern bytestrings__bytestring_t KDF__KDF2(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3, bytestrings__bytestring_t ivar_4){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_39;
        bytestrings__bytestring_t ivar_35;
        bytestrings__bytestring_t ivar_28;
        bytestrings__bytestring_t ivar_25;
        bytestrings__bytestring_t ivar_17;
        ivar_3->count++;
        ivar_17 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_2, (bytestrings__bytestring_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_25 = (bytestrings__bytestring_t)ivar_17;
        ivar_25->count++;
        release_bytestrings__bytestring(ivar_17);
        bytestrings__bytestring_t ivar_26;
        uint16_t ivar_23;
        ivar_23 = (uint16_t)ivar_3->length;
        release_bytestrings__bytestring(ivar_3);
        bytestrings__bytestring_t ivar_22;
        ivar_22 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_23);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_26 = (bytestrings__bytestring_t)ivar_22;
        ivar_26->count++;
        release_bytestrings__bytestring(ivar_22);
        bytestrings__bytestring_t ivar_24;
        ivar_24 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_25, (bytestrings__bytestring_t)ivar_26);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_28 = (bytestrings__bytestring_t)ivar_24;
        ivar_28->count++;
        release_bytestrings__bytestring(ivar_24);
        bytestrings__bytestring_t ivar_27;
        ivar_4->count++;
        ivar_27 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_28, (bytestrings__bytestring_t)ivar_4);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_35 = (bytestrings__bytestring_t)ivar_27;
        ivar_35->count++;
        release_bytestrings__bytestring(ivar_27);
        bytestrings__bytestring_t ivar_36;
        uint16_t ivar_33;
        ivar_33 = (uint16_t)ivar_4->length;
        release_bytestrings__bytestring(ivar_4);
        bytestrings__bytestring_t ivar_32;
        ivar_32 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_33);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_36 = (bytestrings__bytestring_t)ivar_32;
        ivar_36->count++;
        release_bytestrings__bytestring(ivar_32);
        bytestrings__bytestring_t ivar_34;
        ivar_34 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_35, (bytestrings__bytestring_t)ivar_36);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_39 = (bytestrings__bytestring_t)ivar_34;
        ivar_39->count++;
        release_bytestrings__bytestring(ivar_34);
        uint8_t ivar_40;
        ivar_40 = (uint8_t)64;
        uint8_t ivar_41;
        ivar_41 = (uint8_t)32;
        bytestrings__bytestring_t ivar_37;
        ivar_37 = (bytestrings__bytestring_t)HMAC__hmac256((HMAC_record_3_t)ivar_1, (HMAC_record_3_t)ivar_39, (uint8_t)ivar_40, (uint8_t)ivar_41);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_37;
        result->count++;
        release_bytestrings__bytestring(ivar_37);

        return result;
}

extern bytestrings__bytestring_t KDF__KDF3(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3, bytestrings__bytestring_t ivar_4, bytestrings__bytestring_t ivar_5){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_54;
        bytestrings__bytestring_t ivar_50;
        bytestrings__bytestring_t ivar_43;
        bytestrings__bytestring_t ivar_40;
        bytestrings__bytestring_t ivar_33;
        bytestrings__bytestring_t ivar_30;
        bytestrings__bytestring_t ivar_22;
        ivar_3->count++;
        ivar_22 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_2, (bytestrings__bytestring_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_30 = (bytestrings__bytestring_t)ivar_22;
        ivar_30->count++;
        release_bytestrings__bytestring(ivar_22);
        bytestrings__bytestring_t ivar_31;
        uint16_t ivar_28;
        ivar_28 = (uint16_t)ivar_3->length;
        release_bytestrings__bytestring(ivar_3);
        bytestrings__bytestring_t ivar_27;
        ivar_27 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_28);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_31 = (bytestrings__bytestring_t)ivar_27;
        ivar_31->count++;
        release_bytestrings__bytestring(ivar_27);
        bytestrings__bytestring_t ivar_29;
        ivar_29 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_30, (bytestrings__bytestring_t)ivar_31);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_33 = (bytestrings__bytestring_t)ivar_29;
        ivar_33->count++;
        release_bytestrings__bytestring(ivar_29);
        bytestrings__bytestring_t ivar_32;
        ivar_4->count++;
        ivar_32 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_33, (bytestrings__bytestring_t)ivar_4);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_40 = (bytestrings__bytestring_t)ivar_32;
        ivar_40->count++;
        release_bytestrings__bytestring(ivar_32);
        bytestrings__bytestring_t ivar_41;
        uint16_t ivar_38;
        ivar_38 = (uint16_t)ivar_4->length;
        release_bytestrings__bytestring(ivar_4);
        bytestrings__bytestring_t ivar_37;
        ivar_37 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_38);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_41 = (bytestrings__bytestring_t)ivar_37;
        ivar_41->count++;
        release_bytestrings__bytestring(ivar_37);
        bytestrings__bytestring_t ivar_39;
        ivar_39 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_40, (bytestrings__bytestring_t)ivar_41);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_43 = (bytestrings__bytestring_t)ivar_39;
        ivar_43->count++;
        release_bytestrings__bytestring(ivar_39);
        bytestrings__bytestring_t ivar_42;
        ivar_5->count++;
        ivar_42 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_43, (bytestrings__bytestring_t)ivar_5);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_50 = (bytestrings__bytestring_t)ivar_42;
        ivar_50->count++;
        release_bytestrings__bytestring(ivar_42);
        bytestrings__bytestring_t ivar_51;
        uint16_t ivar_48;
        ivar_48 = (uint16_t)ivar_5->length;
        release_bytestrings__bytestring(ivar_5);
        bytestrings__bytestring_t ivar_47;
        ivar_47 = (bytestrings__bytestring_t)KDF__u16to_bstring((uint16_t)ivar_48);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_51 = (bytestrings__bytestring_t)ivar_47;
        ivar_51->count++;
        release_bytestrings__bytestring(ivar_47);
        bytestrings__bytestring_t ivar_49;
        ivar_49 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_50, (bytestrings__bytestring_t)ivar_51);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_54 = (bytestrings__bytestring_t)ivar_49;
        ivar_54->count++;
        release_bytestrings__bytestring(ivar_49);
        uint8_t ivar_55;
        ivar_55 = (uint8_t)64;
        uint8_t ivar_56;
        ivar_56 = (uint8_t)32;
        bytestrings__bytestring_t ivar_52;
        ivar_52 = (bytestrings__bytestring_t)HMAC__hmac256((HMAC_record_3_t)ivar_1, (HMAC_record_3_t)ivar_54, (uint8_t)ivar_55, (uint8_t)ivar_56);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_52;
        result->count++;
        release_bytestrings__bytestring(ivar_52);

        return result;
}

extern bytestrings__bytestring_t KDF__KAUSF(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3, bytestrings__bytestring_t ivar_4, bytestrings__bytestring_t ivar_5){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_30;
        bytestrings__bytestring_t ivar_12;
        ivar_12 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_1, (bytestrings__bytestring_t)ivar_2);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_30 = (bytestrings__bytestring_t)ivar_12;
        ivar_30->count++;
        release_bytestrings__bytestring(ivar_12);
        bytestrings__bytestring_t ivar_31;
        uint8_t ivar_17;
        ivar_17 = (uint8_t)106;
        bytestrings__bytestring_t ivar_16;
        ivar_16 = (bytestrings__bytestring_t)bytestrings__unit((uint8_t)ivar_17);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_31 = (bytestrings__bytestring_t)ivar_16;
        ivar_31->count++;
        release_bytestrings__bytestring(ivar_16);
        bytestrings__bytestring_t ivar_33;
        KDF_funtype_2_t ivar_22;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)6;
        KDF_funtype_2_t ivar_25;
        ivar_25 = (KDF_funtype_2_t)HMAC__lbytesXOR((uint8_t)ivar_26);
        //copying to KDF_funtype_2 from KDF_funtype_2;
        ivar_22 = (KDF_funtype_2_t)ivar_25;
        ivar_22->count++;
        release_KDF_funtype_2(ivar_25);
        bytestrings__bytestring_t ivar_20;
        ivar_20 = (bytestrings__bytestring_t)ivar_22->ftbl->mptr(ivar_22, ivar_3, ivar_4);
        ivar_22->ftbl->rptr(ivar_22);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_33 = (bytestrings__bytestring_t)ivar_20;
        ivar_33->count++;
        release_bytestrings__bytestring(ivar_20);
        bytestrings__bytestring_t ivar_29;
        ivar_29 = (bytestrings__bytestring_t)KDF__KDF2((bytestrings__bytestring_t)ivar_30, (bytestrings__bytestring_t)ivar_31, (bytestrings__bytestring_t)ivar_5, (bytestrings__bytestring_t)ivar_33);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_29;
        result->count++;
        release_bytestrings__bytestring(ivar_29);

        return result;
}

extern bytestrings__bytestring_t KDF__KSEAF(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_11;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)108;
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__unit((uint8_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_7;
        ivar_11->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_9;
        ivar_9 = (bytestrings__bytestring_t)KDF__KDF1((bytestrings__bytestring_t)ivar_1, (bytestrings__bytestring_t)ivar_11, (bytestrings__bytestring_t)ivar_2);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_9;
        result->count++;
        release_bytestrings__bytestring(ivar_9);

        return result;
}

extern bytestrings__bytestring_t KDF__KAMF(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2, bytestrings__bytestring_t ivar_3){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_13;
        uint8_t ivar_10;
        ivar_10 = (uint8_t)109;
        bytestrings__bytestring_t ivar_9;
        ivar_9 = (bytestrings__bytestring_t)bytestrings__unit((uint8_t)ivar_10);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_13 = (bytestrings__bytestring_t)ivar_9;
        ivar_13->count++;
        release_bytestrings__bytestring(ivar_9);
        bytestrings__bytestring_t ivar_11;
        ivar_11 = (bytestrings__bytestring_t)KDF__KDF2((bytestrings__bytestring_t)ivar_1, (bytestrings__bytestring_t)ivar_13, (bytestrings__bytestring_t)ivar_2, (bytestrings__bytestring_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_11;
        result->count++;
        release_bytestrings__bytestring(ivar_11);

        return result;
}

extern bytestrings__bytestring_t KDF__test_KDF1(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_24;
        KDF_record_4_t ivar_11;
        uint32_t len32462 = 3;
        uint32_t characters32463[3] = {107, 101, 121};
        stringliteral_t string32461 = mk_string(3, characters32463);
        ivar_11 = (KDF_record_4_t)strings__make_string(len32462, string32461);
        KDF_record_4_t ivar_9;
        //copying to KDF_record_4 from KDF_record_4;
        ivar_9 = (KDF_record_4_t)ivar_11;
        ivar_9->count++;
        release_KDF_record_4(ivar_11);
        bytestrings__bytestring_t ivar_8;
        ivar_8 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_9);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_24 = (bytestrings__bytestring_t)ivar_8;
        ivar_24->count++;
        release_bytestrings__bytestring(ivar_8);
        bytestrings__bytestring_t ivar_25;
        uint8_t ivar_14;
        ivar_14 = (uint8_t)108;
        bytestrings__bytestring_t ivar_13;
        ivar_13 = (bytestrings__bytestring_t)bytestrings__unit((uint8_t)ivar_14);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_25 = (bytestrings__bytestring_t)ivar_13;
        ivar_25->count++;
        release_bytestrings__bytestring(ivar_13);
        bytestrings__bytestring_t ivar_26;
        KDF_record_4_t ivar_22;
        uint32_t len32465 = 18;
        uint32_t characters32466[18] = {84, 104, 105, 115, 32, 105, 115, 32, 97, 32, 109, 101, 115, 115, 97, 103, 101, 46};
        stringliteral_t string32464 = mk_string(18, characters32466);
        ivar_22 = (KDF_record_4_t)strings__make_string(len32465, string32464);
        KDF_record_4_t ivar_20;
        //copying to KDF_record_4 from KDF_record_4;
        ivar_20 = (KDF_record_4_t)ivar_22;
        ivar_20->count++;
        release_KDF_record_4(ivar_22);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_20);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_26 = (bytestrings__bytestring_t)ivar_19;
        ivar_26->count++;
        release_bytestrings__bytestring(ivar_19);
        bytestrings__bytestring_t ivar_23;
        ivar_23 = (bytestrings__bytestring_t)KDF__KDF1((bytestrings__bytestring_t)ivar_24, (bytestrings__bytestring_t)ivar_25, (bytestrings__bytestring_t)ivar_26);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_23;
        result->count++;
        release_bytestrings__bytestring(ivar_23);

        return result;
}

extern bytestrings__bytestring_t KDF__test_KDF2(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_33;
        KDF_record_4_t ivar_12;
        uint32_t len32471 = 3;
        uint32_t characters32472[3] = {107, 101, 121};
        stringliteral_t string32470 = mk_string(3, characters32472);
        ivar_12 = (KDF_record_4_t)strings__make_string(len32471, string32470);
        KDF_record_4_t ivar_10;
        //copying to KDF_record_4 from KDF_record_4;
        ivar_10 = (KDF_record_4_t)ivar_12;
        ivar_10->count++;
        release_KDF_record_4(ivar_12);
        bytestrings__bytestring_t ivar_9;
        ivar_9 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_10);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_33 = (bytestrings__bytestring_t)ivar_9;
        ivar_33->count++;
        release_bytestrings__bytestring(ivar_9);
        bytestrings__bytestring_t ivar_34;
        uint8_t ivar_15;
        ivar_15 = (uint8_t)109;
        bytestrings__bytestring_t ivar_14;
        ivar_14 = (bytestrings__bytestring_t)bytestrings__unit((uint8_t)ivar_15);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_34 = (bytestrings__bytestring_t)ivar_14;
        ivar_34->count++;
        release_bytestrings__bytestring(ivar_14);
        bytestrings__bytestring_t ivar_35;
        KDF_record_4_t ivar_23;
        uint32_t len32474 = 18;
        uint32_t characters32475[18] = {84, 104, 105, 115, 32, 105, 115, 32, 97, 32, 109, 101, 115, 115, 97, 103, 101, 46};
        stringliteral_t string32473 = mk_string(18, characters32475);
        ivar_23 = (KDF_record_4_t)strings__make_string(len32474, string32473);
        KDF_record_4_t ivar_21;
        //copying to KDF_record_4 from KDF_record_4;
        ivar_21 = (KDF_record_4_t)ivar_23;
        ivar_21->count++;
        release_KDF_record_4(ivar_23);
        bytestrings__bytestring_t ivar_20;
        ivar_20 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_35 = (bytestrings__bytestring_t)ivar_20;
        ivar_35->count++;
        release_bytestrings__bytestring(ivar_20);
        bytestrings__bytestring_t ivar_36;
        KDF_record_4_t ivar_31;
        uint32_t len32477 = 24;
        uint32_t characters32478[24] = {84, 104, 105, 115, 32, 105, 115, 32, 97, 110, 111, 116, 104, 101, 114, 32, 109, 101, 115, 115, 97, 103, 101, 46};
        stringliteral_t string32476 = mk_string(24, characters32478);
        ivar_31 = (KDF_record_4_t)strings__make_string(len32477, string32476);
        KDF_record_4_t ivar_29;
        //copying to KDF_record_4 from KDF_record_4;
        ivar_29 = (KDF_record_4_t)ivar_31;
        ivar_29->count++;
        release_KDF_record_4(ivar_31);
        bytestrings__bytestring_t ivar_28;
        ivar_28 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_29);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_36 = (bytestrings__bytestring_t)ivar_28;
        ivar_36->count++;
        release_bytestrings__bytestring(ivar_28);
        bytestrings__bytestring_t ivar_32;
        ivar_32 = (bytestrings__bytestring_t)KDF__KDF2((bytestrings__bytestring_t)ivar_33, (bytestrings__bytestring_t)ivar_34, (bytestrings__bytestring_t)ivar_35, (bytestrings__bytestring_t)ivar_36);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_32;
        result->count++;
        release_bytestrings__bytestring(ivar_32);

        return result;
}

extern bytestrings__bytestring_t KDF__test_KDF3(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_42;
        KDF_record_4_t ivar_13;
        uint32_t len32484 = 3;
        uint32_t characters32485[3] = {107, 101, 121};
        stringliteral_t string32483 = mk_string(3, characters32485);
        ivar_13 = (KDF_record_4_t)strings__make_string(len32484, string32483);
        KDF_record_4_t ivar_11;
        //copying to KDF_record_4 from KDF_record_4;
        ivar_11 = (KDF_record_4_t)ivar_13;
        ivar_11->count++;
        release_KDF_record_4(ivar_13);
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_42 = (bytestrings__bytestring_t)ivar_10;
        ivar_42->count++;
        release_bytestrings__bytestring(ivar_10);
        bytestrings__bytestring_t ivar_43;
        uint8_t ivar_16;
        ivar_16 = (uint8_t)109;
        bytestrings__bytestring_t ivar_15;
        ivar_15 = (bytestrings__bytestring_t)bytestrings__unit((uint8_t)ivar_16);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_43 = (bytestrings__bytestring_t)ivar_15;
        ivar_43->count++;
        release_bytestrings__bytestring(ivar_15);
        bytestrings__bytestring_t ivar_44;
        KDF_record_4_t ivar_24;
        uint32_t len32487 = 18;
        uint32_t characters32488[18] = {84, 104, 105, 115, 32, 105, 115, 32, 97, 32, 109, 101, 115, 115, 97, 103, 101, 46};
        stringliteral_t string32486 = mk_string(18, characters32488);
        ivar_24 = (KDF_record_4_t)strings__make_string(len32487, string32486);
        KDF_record_4_t ivar_22;
        //copying to KDF_record_4 from KDF_record_4;
        ivar_22 = (KDF_record_4_t)ivar_24;
        ivar_22->count++;
        release_KDF_record_4(ivar_24);
        bytestrings__bytestring_t ivar_21;
        ivar_21 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_22);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_44 = (bytestrings__bytestring_t)ivar_21;
        ivar_44->count++;
        release_bytestrings__bytestring(ivar_21);
        bytestrings__bytestring_t ivar_45;
        KDF_record_4_t ivar_32;
        uint32_t len32490 = 24;
        uint32_t characters32491[24] = {84, 104, 105, 115, 32, 105, 115, 32, 97, 110, 111, 116, 104, 101, 114, 32, 109, 101, 115, 115, 97, 103, 101, 46};
        stringliteral_t string32489 = mk_string(24, characters32491);
        ivar_32 = (KDF_record_4_t)strings__make_string(len32490, string32489);
        KDF_record_4_t ivar_30;
        //copying to KDF_record_4 from KDF_record_4;
        ivar_30 = (KDF_record_4_t)ivar_32;
        ivar_30->count++;
        release_KDF_record_4(ivar_32);
        bytestrings__bytestring_t ivar_29;
        ivar_29 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_30);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_45 = (bytestrings__bytestring_t)ivar_29;
        ivar_45->count++;
        release_bytestrings__bytestring(ivar_29);
        bytestrings__bytestring_t ivar_46;
        KDF_record_4_t ivar_40;
        uint32_t len32493 = 26;
        uint32_t characters32494[26] = {84, 104, 105, 115, 32, 105, 115, 32, 116, 104, 101, 32, 102, 105, 110, 97, 108, 32, 109, 101, 115, 115, 97, 103, 101, 46};
        stringliteral_t string32492 = mk_string(26, characters32494);
        ivar_40 = (KDF_record_4_t)strings__make_string(len32493, string32492);
        KDF_record_4_t ivar_38;
        //copying to KDF_record_4 from KDF_record_4;
        ivar_38 = (KDF_record_4_t)ivar_40;
        ivar_38->count++;
        release_KDF_record_4(ivar_40);
        bytestrings__bytestring_t ivar_37;
        ivar_37 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_38);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_46 = (bytestrings__bytestring_t)ivar_37;
        ivar_46->count++;
        release_bytestrings__bytestring(ivar_37);
        bytestrings__bytestring_t ivar_41;
        ivar_41 = (bytestrings__bytestring_t)KDF__KDF3((bytestrings__bytestring_t)ivar_42, (bytestrings__bytestring_t)ivar_43, (bytestrings__bytestring_t)ivar_44, (bytestrings__bytestring_t)ivar_45, (bytestrings__bytestring_t)ivar_46);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_41;
        result->count++;
        release_bytestrings__bytestring(ivar_41);

        return result;
}

extern bytestrings__bytestring_t KDF__test_KAUSF(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_35;
        uint8_t ivar_9;
        ivar_9 = (uint8_t)51;
        uint8_t ivar_10;
        ivar_10 = (uint8_t)16;
        bytestrings__bytestring_t ivar_8;
        ivar_8 = (bytestrings__bytestring_t)HMAC__nbytes((uint8_t)ivar_9, (uint8_t)ivar_10);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_35 = (bytestrings__bytestring_t)ivar_8;
        ivar_35->count++;
        release_bytestrings__bytestring(ivar_8);
        bytestrings__bytestring_t ivar_36;
        uint8_t ivar_14;
        ivar_14 = (uint8_t)170;
        uint8_t ivar_15;
        ivar_15 = (uint8_t)16;
        bytestrings__bytestring_t ivar_13;
        ivar_13 = (bytestrings__bytestring_t)HMAC__nbytes((uint8_t)ivar_14, (uint8_t)ivar_15);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_36 = (bytestrings__bytestring_t)ivar_13;
        ivar_36->count++;
        release_bytestrings__bytestring(ivar_13);
        bytestrings__bytestring_t ivar_37;
        uint8_t ivar_19;
        ivar_19 = (uint8_t)5;
        uint8_t ivar_20;
        ivar_20 = (uint8_t)6;
        bytestrings__bytestring_t ivar_18;
        ivar_18 = (bytestrings__bytestring_t)HMAC__nbytes((uint8_t)ivar_19, (uint8_t)ivar_20);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_37 = (bytestrings__bytestring_t)ivar_18;
        ivar_37->count++;
        release_bytestrings__bytestring(ivar_18);
        bytestrings__bytestring_t ivar_38;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint8_t ivar_25;
        ivar_25 = (uint8_t)6;
        bytestrings__bytestring_t ivar_23;
        ivar_23 = (bytestrings__bytestring_t)HMAC__nbytes((uint8_t)ivar_24, (uint8_t)ivar_25);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_38 = (bytestrings__bytestring_t)ivar_23;
        ivar_38->count++;
        release_bytestrings__bytestring(ivar_23);
        bytestrings__bytestring_t ivar_39;
        KDF_record_4_t ivar_33;
        uint32_t len32497 = 13;
        uint32_t characters32498[13] = {83, 101, 114, 118, 101, 114, 78, 101, 116, 119, 111, 114, 107};
        stringliteral_t string32496 = mk_string(13, characters32498);
        ivar_33 = (KDF_record_4_t)strings__make_string(len32497, string32496);
        KDF_record_4_t ivar_31;
        //copying to KDF_record_4 from KDF_record_4;
        ivar_31 = (KDF_record_4_t)ivar_33;
        ivar_31->count++;
        release_KDF_record_4(ivar_33);
        bytestrings__bytestring_t ivar_30;
        ivar_30 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_31);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_39 = (bytestrings__bytestring_t)ivar_30;
        ivar_39->count++;
        release_bytestrings__bytestring(ivar_30);
        bytestrings__bytestring_t ivar_34;
        ivar_34 = (bytestrings__bytestring_t)KDF__KAUSF((bytestrings__bytestring_t)ivar_35, (bytestrings__bytestring_t)ivar_36, (bytestrings__bytestring_t)ivar_37, (bytestrings__bytestring_t)ivar_38, (bytestrings__bytestring_t)ivar_39);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_34;
        result->count++;
        release_bytestrings__bytestring(ivar_34);

        return result;
}

extern bytestrings__bytestring_t KDF__test_KSEAF(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_12;
        ivar_12 = (bytestrings__bytestring_t)KDF__test_KAUSF();
        ivar_12->count++;
        bytestrings__bytestring_t ivar_13;
        KDF_record_4_t ivar_10;
        uint32_t len32501 = 10;
        uint32_t characters32502[10] = {77, 121, 83, 101, 99, 114, 101, 116, 73, 68};
        stringliteral_t string32500 = mk_string(10, characters32502);
        ivar_10 = (KDF_record_4_t)strings__make_string(len32501, string32500);
        KDF_record_4_t ivar_8;
        //copying to KDF_record_4 from KDF_record_4;
        ivar_8 = (KDF_record_4_t)ivar_10;
        ivar_8->count++;
        release_KDF_record_4(ivar_10);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_13 = (bytestrings__bytestring_t)ivar_7;
        ivar_13->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_11;
        ivar_11 = (bytestrings__bytestring_t)KDF__KSEAF((bytestrings__bytestring_t)ivar_12, (bytestrings__bytestring_t)ivar_13);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_11;
        result->count++;
        release_bytestrings__bytestring(ivar_11);

        return result;
}

extern bytestrings__bytestring_t KDF__test_KAMF(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_21;
        ivar_21 = (bytestrings__bytestring_t)KDF__test_KSEAF();
        ivar_21->count++;
        bytestrings__bytestring_t ivar_22;
        KDF_record_4_t ivar_11;
        uint32_t len32506 = 6;
        uint32_t characters32507[6] = {65, 77, 70, 95, 73, 68};
        stringliteral_t string32505 = mk_string(6, characters32507);
        ivar_11 = (KDF_record_4_t)strings__make_string(len32506, string32505);
        KDF_record_4_t ivar_9;
        //copying to KDF_record_4 from KDF_record_4;
        ivar_9 = (KDF_record_4_t)ivar_11;
        ivar_9->count++;
        release_KDF_record_4(ivar_11);
        bytestrings__bytestring_t ivar_8;
        ivar_8 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_9);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_22 = (bytestrings__bytestring_t)ivar_8;
        ivar_22->count++;
        release_bytestrings__bytestring(ivar_8);
        bytestrings__bytestring_t ivar_23;
        KDF_record_4_t ivar_19;
        uint32_t len32509 = 4;
        uint32_t characters32510[4] = {65, 66, 66, 65};
        stringliteral_t string32508 = mk_string(4, characters32510);
        ivar_19 = (KDF_record_4_t)strings__make_string(len32509, string32508);
        KDF_record_4_t ivar_17;
        //copying to KDF_record_4 from KDF_record_4;
        ivar_17 = (KDF_record_4_t)ivar_19;
        ivar_17->count++;
        release_KDF_record_4(ivar_19);
        bytestrings__bytestring_t ivar_16;
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_17);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_23 = (bytestrings__bytestring_t)ivar_16;
        ivar_23->count++;
        release_bytestrings__bytestring(ivar_16);
        bytestrings__bytestring_t ivar_20;
        ivar_20 = (bytestrings__bytestring_t)KDF__KAMF((bytestrings__bytestring_t)ivar_21, (bytestrings__bytestring_t)ivar_22, (bytestrings__bytestring_t)ivar_23);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_20;
        result->count++;
        release_bytestrings__bytestring(ivar_20);

        return result;
}