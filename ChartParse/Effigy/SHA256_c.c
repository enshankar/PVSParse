//Code generated using pvs2ir2c
#include "SHA256_c.h"


SHA256_array_0_t new_SHA256_array_0(uint32_t size){
        SHA256_array_0_t tmp = (SHA256_array_0_t) safe_malloc(sizeof(struct SHA256_array_0_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_SHA256_array_0(SHA256_array_0_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_SHA256_array_0_ptr(pointer_t x, type_actual_t T){
        release_SHA256_array_0((SHA256_array_0_t)x);
}

SHA256_array_0_t copy_SHA256_array_0(SHA256_array_0_t x){
        SHA256_array_0_t tmp = new_SHA256_array_0(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_SHA256_array_0(SHA256_array_0_t x, SHA256_array_0_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] = y->elems[i]); i++;};
        return tmp;}

bool_t equal_SHA256_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_SHA256_array_0((SHA256_array_0_t)x, (SHA256_array_0_t)y);
}

actual_SHA256_array_0_t actual_SHA256_array_0(){
        actual_SHA256_array_0_t new = (actual_SHA256_array_0_t)safe_malloc(sizeof(struct actual_SHA256_array_0_s));
        new->equal_ptr = (equal_ptr_t)(*equal_SHA256_array_0_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_SHA256_array_0_ptr);
 

 
        return new;
 };

SHA256_array_0_t update_SHA256_array_0(SHA256_array_0_t x, uint32_t i, uint8_t v){
        SHA256_array_0_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_SHA256_array_0(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

SHA256_array_0_t upgrade_SHA256_array_0(SHA256_array_0_t x, uint32_t i, uint8_t v){
        SHA256_array_0_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_malloc(sizeof(struct SHA256_array_0_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_SHA256_array_0(x);}
           else {y = copy_SHA256_array_0(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}



void release_SHA256_funtype_1(SHA256_funtype_1_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

SHA256_funtype_1_t copy_SHA256_funtype_1(SHA256_funtype_1_t x){return x->ftbl->cptr(x);}

uint32_t lookup_SHA256_funtype_1(SHA256_funtype_1_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; SHA256_funtype_1_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp1383 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp1383 == 0);
        bool_t keymatch;
        int64_t tmp1384 = mpz_cmp(data.key, i);
        keymatch = (tmp1384 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp1383 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp1383 == 0);

        int64_t tmp1384 = mpz_cmp(data.key, i);
        keymatch = (tmp1384 == 0);
                }
        return hashindex;
        }

SHA256_funtype_1_t dupdate_SHA256_funtype_1(SHA256_funtype_1_t a, mpz_ptr_t i, uint32_t v){
        SHA256_funtype_1_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (SHA256_funtype_1_htbl_t)safe_malloc(sizeof(struct SHA256_funtype_1_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (SHA256_funtype_1_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct SHA256_funtype_1_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        SHA256_funtype_1_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                SHA256_funtype_1_hashentry_t * new_data = (SHA256_funtype_1_hashentry_t *)safe_malloc(new_size * sizeof(struct SHA256_funtype_1_hashentry_s));
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp1385 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp1385 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp1386 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp1386 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp1387 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp1387 == 0);
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
        uint32_t hashindex = lookup_SHA256_funtype_1(htbl, i, ihash);
        SHA256_funtype_1_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp1388 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp1388 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;tempvalue = (uint32_t)v;};
        return a;

}

SHA256_funtype_1_t update_SHA256_funtype_1(SHA256_funtype_1_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_SHA256_funtype_1(a, i, v);
            } else {
                SHA256_funtype_1_t x = copy_SHA256_funtype_1(a);
                x->count--;
                return dupdate_SHA256_funtype_1(x, i, v);
            }}

bool_t equal_SHA256_funtype_1(SHA256_funtype_1_t x, SHA256_funtype_1_t y){
        return false;}


SHA256_record_2_t new_SHA256_record_2(void){
        SHA256_record_2_t tmp = (SHA256_record_2_t) safe_malloc(sizeof(struct SHA256_record_2_s));
        tmp->count = 1;
        return tmp;}

void release_SHA256_record_2(SHA256_record_2_t x){
        x->count--;
        if (x->count <= 0){
         release_SHA256_funtype_1(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_SHA256_record_2_ptr(pointer_t x, type_actual_t T){
        release_SHA256_record_2((SHA256_record_2_t)x);
}

SHA256_record_2_t copy_SHA256_record_2(SHA256_record_2_t x){
        SHA256_record_2_t y = new_SHA256_record_2();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_SHA256_record_2(SHA256_record_2_t x, SHA256_record_2_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_SHA256_funtype_1(x->seq, y->seq);
        return tmp;}

bool_t equal_SHA256_record_2_ptr(pointer_t x, pointer_t y, actual_SHA256_record_2_t T){
        return equal_SHA256_record_2((SHA256_record_2_t)x, (SHA256_record_2_t)y);
}

actual_SHA256_record_2_t actual_SHA256_record_2(){
        actual_SHA256_record_2_t new = (actual_SHA256_record_2_t)safe_malloc(sizeof(struct actual_SHA256_record_2_s));
        new->equal_ptr = (equal_ptr_t)(*equal_SHA256_record_2_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_SHA256_record_2_ptr);
 

 
        return new;
 };

SHA256_record_2_t update_SHA256_record_2_length(SHA256_record_2_t x, mpz_ptr_t v){
        SHA256_record_2_t y;
        if (x->count == 1){y = x;}
        else {y = copy_SHA256_record_2(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

SHA256_record_2_t update_SHA256_record_2_seq(SHA256_record_2_t x, SHA256_funtype_1_t v){
        SHA256_record_2_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_SHA256_funtype_1(x->seq);};}
        else {y = copy_SHA256_record_2(x); x->count--; y->seq->count--;};
        y->seq = (SHA256_funtype_1_t)v;
        return y;}




SHA256_array_3_t new_SHA256_array_3(uint32_t size){
        SHA256_array_3_t tmp = (SHA256_array_3_t) safe_malloc(sizeof(struct SHA256_array_3_s) + (size * sizeof(uint32_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_SHA256_array_3(SHA256_array_3_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_SHA256_array_3_ptr(pointer_t x, type_actual_t T){
        release_SHA256_array_3((SHA256_array_3_t)x);
}

SHA256_array_3_t copy_SHA256_array_3(SHA256_array_3_t x){
        SHA256_array_3_t tmp = new_SHA256_array_3(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint32_t)x->elems[i];};
         return tmp;}

bool_t equal_SHA256_array_3(SHA256_array_3_t x, SHA256_array_3_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] = y->elems[i]); i++;};
        return tmp;}

bool_t equal_SHA256_array_3_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_SHA256_array_3((SHA256_array_3_t)x, (SHA256_array_3_t)y);
}

actual_SHA256_array_3_t actual_SHA256_array_3(){
        actual_SHA256_array_3_t new = (actual_SHA256_array_3_t)safe_malloc(sizeof(struct actual_SHA256_array_3_s));
        new->equal_ptr = (equal_ptr_t)(*equal_SHA256_array_3_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_SHA256_array_3_ptr);
 

 
        return new;
 };

SHA256_array_3_t update_SHA256_array_3(SHA256_array_3_t x, uint32_t i, uint32_t v){
        SHA256_array_3_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_SHA256_array_3(x );
                x->count--;};
        y->elems[i] = (uint32_t)v;
        return y;}

SHA256_array_3_t upgrade_SHA256_array_3(SHA256_array_3_t x, uint32_t i, uint32_t v){
        SHA256_array_3_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_malloc(sizeof(struct SHA256_array_3_s) + (newmax * sizeof(uint32_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_SHA256_array_3(x);}
           else {y = copy_SHA256_array_3(x );
                x->count--;};
        y->elems[i] = (uint32_t)v;
        return y;}




SHA256_record_4_t new_SHA256_record_4(void){
        SHA256_record_4_t tmp = (SHA256_record_4_t) safe_malloc(sizeof(struct SHA256_record_4_s));
        tmp->count = 1;
        return tmp;}

void release_SHA256_record_4(SHA256_record_4_t x){
        x->count--;
        if (x->count <= 0){
         release_SHA256_array_0(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_SHA256_record_4_ptr(pointer_t x, type_actual_t T){
        release_SHA256_record_4((SHA256_record_4_t)x);
}

SHA256_record_4_t copy_SHA256_record_4(SHA256_record_4_t x){
        SHA256_record_4_t y = new_SHA256_record_4();
        y->length = (uint32_t)x->length;
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_SHA256_record_4(SHA256_record_4_t x, SHA256_record_4_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_SHA256_array_0(x->seq, y->seq);
        return tmp;}

bool_t equal_SHA256_record_4_ptr(pointer_t x, pointer_t y, actual_SHA256_record_4_t T){
        return equal_SHA256_record_4((SHA256_record_4_t)x, (SHA256_record_4_t)y);
}

actual_SHA256_record_4_t actual_SHA256_record_4(){
        actual_SHA256_record_4_t new = (actual_SHA256_record_4_t)safe_malloc(sizeof(struct actual_SHA256_record_4_s));
        new->equal_ptr = (equal_ptr_t)(*equal_SHA256_record_4_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_SHA256_record_4_ptr);
 

 
        return new;
 };

SHA256_record_4_t update_SHA256_record_4_length(SHA256_record_4_t x, uint32_t v){
        SHA256_record_4_t y;
        if (x->count == 1){y = x;}
        else {y = copy_SHA256_record_4(x); x->count--;};
        y->length = (uint32_t)v;
        return y;}

SHA256_record_4_t update_SHA256_record_4_seq(SHA256_record_4_t x, SHA256_array_0_t v){
        SHA256_record_4_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_SHA256_array_0(x->seq);};}
        else {y = copy_SHA256_record_4(x); x->count--; y->seq->count--;};
        y->seq = (SHA256_array_0_t)v;
        return y;}



void release_SHA256_funtype_5(SHA256_funtype_5_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

SHA256_funtype_5_t copy_SHA256_funtype_5(SHA256_funtype_5_t x){return x->ftbl->cptr(x);}

uint32_t lookup_SHA256_funtype_5(SHA256_funtype_5_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; SHA256_funtype_5_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        keyzero = (data.key == 0);
        bool_t keymatch;
        keymatch = (data.key == i);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        keyzero = (data.key == 0);

        keymatch = (data.key == i);
                }
        return hashindex;
        }

SHA256_funtype_5_t dupdate_SHA256_funtype_5(SHA256_funtype_5_t a, uint32_t i, SHA256_array_3_t v){
        SHA256_funtype_5_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (SHA256_funtype_5_htbl_t)safe_malloc(sizeof(struct SHA256_funtype_5_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (SHA256_funtype_5_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct SHA256_funtype_5_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        SHA256_funtype_5_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                SHA256_funtype_5_hashentry_t * new_data = (SHA256_funtype_5_hashentry_t *)safe_malloc(new_size * sizeof(struct SHA256_funtype_5_hashentry_s));
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        keyzero = (data[j].key == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                keyzero = (new_data[new_loc].key == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        keyzero = (new_data[new_loc].key == 0);
                                }
                                new_data[new_loc].key = (uint32_t)data[j].key;
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (SHA256_array_3_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_SHA256_funtype_5(htbl, i, ihash);
        SHA256_funtype_5_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (SHA256_array_3_t)v;}
            else {SHA256_array_3_t tempvalue;tempvalue = (SHA256_array_3_t)htbl->data[hashindex].value;tempvalue = (SHA256_array_3_t)v;release_SHA256_array_3(tempvalue);};
        return a;

}

SHA256_funtype_5_t update_SHA256_funtype_5(SHA256_funtype_5_t a, uint32_t i, SHA256_array_3_t v){
        if (a->count == 1){
                return dupdate_SHA256_funtype_5(a, i, v);
            } else {
                SHA256_funtype_5_t x = copy_SHA256_funtype_5(a);
                x->count--;
                return dupdate_SHA256_funtype_5(x, i, v);
            }}

bool_t equal_SHA256_funtype_5(SHA256_funtype_5_t x, SHA256_funtype_5_t y){
        return false;}


SHA256_array_3_t f_SHA256_closure_6(struct SHA256_closure_6_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        SHA256_funtype_5_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_SHA256_funtype_5(htbl, bvar, hash);
        SHA256_funtype_5_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero && entry.keyhash != 0){
            SHA256_array_3_t result;
            result = (SHA256_array_3_t)entry.value;
            result->count++;
            return result;}
        

        return h_SHA256_closure_6(bvar, closure->fvar_1);};

return h_SHA256_closure_6(bvar, closure->fvar_1);}

SHA256_array_3_t m_SHA256_closure_6(struct SHA256_closure_6_s * closure, uint32_t bvar){
        return h_SHA256_closure_6(bvar, closure->fvar_1);}

extern SHA256_array_3_t h_SHA256_closure_6(uint32_t ivar_13, SHA256_record_4_t ivar_1){
        SHA256_array_3_t result;
        result = new_SHA256_array_3(16);
        uint8_t ivar_24;
        for (uint32_t index1435 = 0; index1435 < 16; index1435++){
             ivar_24 = (uint8_t)index1435;
             /* cursor */ uint32_t ivar_25;
             uint32_t ivar_39;
             uint32_t ivar_31;
             ivar_31 = (uint32_t)64;
             ivar_39 = (uint32_t)integertypes__u32times((uint32_t)ivar_31, (uint32_t)ivar_13);
             uint32_t ivar_40;
             uint32_t ivar_36;
             ivar_36 = (uint32_t)4;
             ivar_40 = (uint32_t)integertypes__u32times((uint32_t)ivar_36, (uint32_t)ivar_24);
             ivar_25 = (uint32_t)integertypes__u32plus((uint32_t)ivar_39, (uint32_t)ivar_40);
             bool_t ivar_41;
             uint64_t ivar_42;
             uint8_t ivar_45;
             ivar_45 = (uint8_t)3;
             ivar_42 = (uint64_t)(ivar_25 + ivar_45);
             uint32_t ivar_43;
             ivar_43 = (uint32_t)ivar_1->length;
             ivar_41 = (ivar_42 < ivar_43);
             if (ivar_41){  
           ivar_1->count++;
           result->elems[index1435] = (uint32_t)SHA256__bytes2uint32((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_25);
} else {
             
           bool_t ivar_55;
           uint64_t ivar_56;
           uint8_t ivar_59;
           ivar_59 = (uint8_t)2;
           ivar_56 = (uint64_t)(ivar_25 + ivar_59);
           uint32_t ivar_57;
           ivar_57 = (uint32_t)ivar_1->length;
           ivar_55 = (ivar_56 < ivar_57);
           if (ivar_55){   
           uint32_t ivar_77;
           uint32_t ivar_74;
           ivar_1->count++;
           ivar_74 = (uint32_t)SHA256__bytes2uint32((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_25);
           uint8_t ivar_75;
           ivar_75 = (uint8_t)8;
           ivar_77 = (uint32_t)integertypes__u32lshift((uint32_t)ivar_74, (uint32_t)ivar_75);
           uint32_t ivar_78;
           ivar_78 = (uint32_t)128;
           result->elems[index1435] = (uint32_t)integertypes__u32plus((uint32_t)ivar_77, (uint32_t)ivar_78);
} else {
           
           bool_t ivar_79;
           uint64_t ivar_80;
           uint8_t ivar_83;
           ivar_83 = (uint8_t)1;
           ivar_80 = (uint64_t)(ivar_25 + ivar_83);
           uint32_t ivar_81;
           ivar_81 = (uint32_t)ivar_1->length;
           ivar_79 = (ivar_80 < ivar_81);
           if (ivar_79){    
            uint32_t ivar_101;
            uint32_t ivar_98;
            ivar_1->count++;
            ivar_98 = (uint32_t)SHA256__bytes2uint32((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_25);
            uint8_t ivar_99;
            ivar_99 = (uint8_t)16;
            ivar_101 = (uint32_t)integertypes__u32lshift((uint32_t)ivar_98, (uint32_t)ivar_99);
            uint32_t ivar_102;
            ivar_102 = (uint32_t)32768;
            result->elems[index1435] = (uint32_t)integertypes__u32plus((uint32_t)ivar_101, (uint32_t)ivar_102);
} else {
           
            bool_t ivar_103;
            uint32_t ivar_105;
            ivar_105 = (uint32_t)ivar_1->length;
            ivar_103 = (ivar_25 < ivar_105);
            if (ivar_103){     
             uint32_t ivar_122;
             uint32_t ivar_119;
             ivar_1->count++;
             ivar_119 = (uint32_t)SHA256__bytes2uint32((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_25);
             uint8_t ivar_120;
             ivar_120 = (uint8_t)24;
             ivar_122 = (uint32_t)integertypes__u32lshift((uint32_t)ivar_119, (uint32_t)ivar_120);
             uint32_t ivar_123;
             ivar_123 = (uint32_t)8388608;
             result->elems[index1435] = (uint32_t)integertypes__u32plus((uint32_t)ivar_122, (uint32_t)ivar_123);
} else {
            
             bool_t ivar_124;
             uint32_t ivar_126;
             ivar_126 = (uint32_t)ivar_1->length;
             ivar_124 = (ivar_25 == ivar_126);
             if (ivar_124){      
              result->elems[index1435] = (uint32_t)2147483648;
} else {
             
              bool_t ivar_129;
              uint8_t ivar_131;
              ivar_131 = (uint8_t)14;
              ivar_129 = (ivar_24 == ivar_131);
              if (ivar_129){       
               uint64_t ivar_140;
               uint8_t ivar_135;
               ivar_135 = (uint8_t)8;
               uint32_t ivar_136;
               ivar_136 = (uint32_t)ivar_1->length;
               ivar_140 = (uint64_t)((uint64_t)ivar_135 * (uint64_t)ivar_136);
               uint8_t ivar_141;
               ivar_141 = (uint8_t)32;
               uint64_t ivar_139;
               ivar_139 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_140, (uint64_t)ivar_141);
               //copying to uint32 from uint64;
               result->elems[index1435] = (uint32_t)ivar_139;
} else {
              
               bool_t ivar_142;
               uint8_t ivar_144;
               ivar_144 = (uint8_t)15;
               ivar_142 = (ivar_24 == ivar_144);
               if (ivar_142){        
                uint64_t ivar_158;
                uint64_t ivar_155;
                uint8_t ivar_150;
                ivar_150 = (uint8_t)8;
                uint32_t ivar_151;
                ivar_151 = (uint32_t)ivar_1->length;
                ivar_155 = (uint64_t)((uint64_t)ivar_150 * (uint64_t)ivar_151);
                uint8_t ivar_156;
                ivar_156 = (uint8_t)32;
                ivar_158 = (uint64_t)integertypes__u64lshift((uint64_t)ivar_155, (uint64_t)ivar_156);
                uint8_t ivar_159;
                ivar_159 = (uint8_t)32;
                uint64_t ivar_157;
                ivar_157 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_158, (uint64_t)ivar_159);
                //copying to uint32 from uint64;
                result->elems[index1435] = (uint32_t)ivar_157;
} else {
               
                result->elems[index1435] = (uint32_t)0;
};
};
};
};
};
};
};
        };

        return result;
}

SHA256_closure_6_t new_SHA256_closure_6(void){
        static struct SHA256_funtype_5_ftbl_s ftbl = {.fptr = (SHA256_array_3_t (*)(SHA256_funtype_5_t, uint32_t))&f_SHA256_closure_6, .mptr = (SHA256_array_3_t (*)(SHA256_funtype_5_t, uint32_t))&m_SHA256_closure_6, .rptr =  (void (*)(SHA256_funtype_5_t))&release_SHA256_closure_6, .cptr = (SHA256_funtype_5_t (*)(SHA256_funtype_5_t))&copy_SHA256_closure_6};
        SHA256_closure_6_t tmp = (SHA256_closure_6_t) safe_malloc(sizeof(struct SHA256_closure_6_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_SHA256_closure_6(SHA256_funtype_5_t closure){
        SHA256_closure_6_t x = (SHA256_closure_6_t)closure;
        x->count--;
        if (x->count <= 0){
         release_SHA256_record_4(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

SHA256_closure_6_t copy_SHA256_closure_6(SHA256_closure_6_t x){
        SHA256_closure_6_t y = new_SHA256_closure_6();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            SHA256_funtype_5_htbl_t new_htbl = (SHA256_funtype_5_htbl_t) safe_malloc(sizeof(SHA256_funtype_5_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            SHA256_funtype_5_hashentry_t * new_data = (SHA256_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(SHA256_funtype_5_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(SHA256_funtype_5_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern uint32_t SHA256__h0(void){
        uint32_t result;
        result = (uint32_t)1779033703;

        return result;
}

extern uint32_t SHA256__h1(void){
        uint32_t result;
        result = (uint32_t)3144134277;

        return result;
}

extern uint32_t SHA256__h2(void){
        uint32_t result;
        result = (uint32_t)1013904242;

        return result;
}

extern uint32_t SHA256__h3(void){
        uint32_t result;
        result = (uint32_t)2773480762;

        return result;
}

extern uint32_t SHA256__h4(void){
        uint32_t result;
        result = (uint32_t)1359893119;

        return result;
}

extern uint32_t SHA256__h5(void){
        uint32_t result;
        result = (uint32_t)2600822924;

        return result;
}

extern uint32_t SHA256__h6(void){
        uint32_t result;
        result = (uint32_t)528734635;

        return result;
}

extern uint32_t SHA256__h7(void){
        uint32_t result;
        result = (uint32_t)1541459225;

        return result;
}

extern uint32_t SHA256__h(uint8_t ivar_1){
        uint32_t result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint32_t)SHA256__h0();
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint32_t)SHA256__h1();
} else {
             
           bool_t ivar_10;
           uint8_t ivar_12;
           ivar_12 = (uint8_t)2;
           ivar_10 = (ivar_1 == ivar_12);
           if (ivar_10){   
           result = (uint32_t)SHA256__h2();
} else {
           
           bool_t ivar_14;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)3;
           ivar_14 = (ivar_1 == ivar_16);
           if (ivar_14){    
            result = (uint32_t)SHA256__h3();
} else {
           
            bool_t ivar_18;
            uint8_t ivar_20;
            ivar_20 = (uint8_t)4;
            ivar_18 = (ivar_1 == ivar_20);
            if (ivar_18){     
             result = (uint32_t)SHA256__h4();
} else {
            
             bool_t ivar_22;
             uint8_t ivar_24;
             ivar_24 = (uint8_t)5;
             ivar_22 = (ivar_1 == ivar_24);
             if (ivar_22){      
              result = (uint32_t)SHA256__h5();
} else {
             
              bool_t ivar_26;
              uint8_t ivar_28;
              ivar_28 = (uint8_t)6;
              ivar_26 = (ivar_1 == ivar_28);
              if (ivar_26){       
               result = (uint32_t)SHA256__h6();
} else {
              
               result = (uint32_t)SHA256__h7();
};
};
};
};
};
};
};

        return result;
}

extern uint32_t SHA256__k(uint8_t ivar_1){
        uint32_t result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint32_t)1116352408;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint32_t)1899447441;
} else {
             
           bool_t ivar_10;
           uint8_t ivar_12;
           ivar_12 = (uint8_t)2;
           ivar_10 = (ivar_1 == ivar_12);
           if (ivar_10){   
           result = (uint32_t)3049323471;
} else {
           
           bool_t ivar_14;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)3;
           ivar_14 = (ivar_1 == ivar_16);
           if (ivar_14){    
            result = (uint32_t)3921009573;
} else {
           
            bool_t ivar_18;
            uint8_t ivar_20;
            ivar_20 = (uint8_t)4;
            ivar_18 = (ivar_1 == ivar_20);
            if (ivar_18){     
             result = (uint32_t)961987163;
} else {
            
             bool_t ivar_22;
             uint8_t ivar_24;
             ivar_24 = (uint8_t)5;
             ivar_22 = (ivar_1 == ivar_24);
             if (ivar_22){      
              result = (uint32_t)1508970993;
} else {
             
              bool_t ivar_26;
              uint8_t ivar_28;
              ivar_28 = (uint8_t)6;
              ivar_26 = (ivar_1 == ivar_28);
              if (ivar_26){       
               result = (uint32_t)2453635748;
} else {
              
               bool_t ivar_30;
               uint8_t ivar_32;
               ivar_32 = (uint8_t)7;
               ivar_30 = (ivar_1 == ivar_32);
               if (ivar_30){        
                result = (uint32_t)2870763221;
} else {
               
                bool_t ivar_34;
                uint8_t ivar_36;
                ivar_36 = (uint8_t)8;
                ivar_34 = (ivar_1 == ivar_36);
                if (ivar_34){         
                 result = (uint32_t)3624381080;
} else {
                
                 bool_t ivar_38;
                 uint8_t ivar_40;
                 ivar_40 = (uint8_t)9;
                 ivar_38 = (ivar_1 == ivar_40);
                 if (ivar_38){          
                  result = (uint32_t)310598401;
} else {
                 
                  bool_t ivar_42;
                  uint8_t ivar_44;
                  ivar_44 = (uint8_t)10;
                  ivar_42 = (ivar_1 == ivar_44);
                  if (ivar_42){           
                   result = (uint32_t)607225278;
} else {
                  
                   bool_t ivar_46;
                   uint8_t ivar_48;
                   ivar_48 = (uint8_t)11;
                   ivar_46 = (ivar_1 == ivar_48);
                   if (ivar_46){            
                    result = (uint32_t)1426881987;
} else {
                   
                    bool_t ivar_50;
                    uint8_t ivar_52;
                    ivar_52 = (uint8_t)12;
                    ivar_50 = (ivar_1 == ivar_52);
                    if (ivar_50){             
                     result = (uint32_t)1925078388;
} else {
                    
                     bool_t ivar_54;
                     uint8_t ivar_56;
                     ivar_56 = (uint8_t)13;
                     ivar_54 = (ivar_1 == ivar_56);
                     if (ivar_54){              
                      result = (uint32_t)2162078206;
} else {
                     
                      bool_t ivar_58;
                      uint8_t ivar_60;
                      ivar_60 = (uint8_t)14;
                      ivar_58 = (ivar_1 == ivar_60);
                      if (ivar_58){               
                       result = (uint32_t)2614888103;
} else {
                      
                       bool_t ivar_62;
                       uint8_t ivar_64;
                       ivar_64 = (uint8_t)15;
                       ivar_62 = (ivar_1 == ivar_64);
                       if (ivar_62){                
                        result = (uint32_t)3248222580;
} else {
                       
                        bool_t ivar_66;
                        uint8_t ivar_68;
                        ivar_68 = (uint8_t)16;
                        ivar_66 = (ivar_1 == ivar_68);
                        if (ivar_66){                 
                         result = (uint32_t)3835390401;
} else {
                        
                         bool_t ivar_70;
                         uint8_t ivar_72;
                         ivar_72 = (uint8_t)17;
                         ivar_70 = (ivar_1 == ivar_72);
                         if (ivar_70){                  
                          result = (uint32_t)4022224774;
} else {
                         
                          bool_t ivar_74;
                          uint8_t ivar_76;
                          ivar_76 = (uint8_t)18;
                          ivar_74 = (ivar_1 == ivar_76);
                          if (ivar_74){                   
                           result = (uint32_t)264347078;
} else {
                          
                           bool_t ivar_78;
                           uint8_t ivar_80;
                           ivar_80 = (uint8_t)19;
                           ivar_78 = (ivar_1 == ivar_80);
                           if (ivar_78){                    
                            result = (uint32_t)604807628;
} else {
                           
                            bool_t ivar_82;
                            uint8_t ivar_84;
                            ivar_84 = (uint8_t)20;
                            ivar_82 = (ivar_1 == ivar_84);
                            if (ivar_82){                     
                             result = (uint32_t)770255983;
} else {
                            
                             bool_t ivar_86;
                             uint8_t ivar_88;
                             ivar_88 = (uint8_t)21;
                             ivar_86 = (ivar_1 == ivar_88);
                             if (ivar_86){                      
                              result = (uint32_t)1249150122;
} else {
                             
                              bool_t ivar_90;
                              uint8_t ivar_92;
                              ivar_92 = (uint8_t)22;
                              ivar_90 = (ivar_1 == ivar_92);
                              if (ivar_90){                       
                               result = (uint32_t)1555081692;
} else {
                              
                               bool_t ivar_94;
                               uint8_t ivar_96;
                               ivar_96 = (uint8_t)23;
                               ivar_94 = (ivar_1 == ivar_96);
                               if (ivar_94){                        
                                result = (uint32_t)1996064986;
} else {
                               
                                bool_t ivar_98;
                                uint8_t ivar_100;
                                ivar_100 = (uint8_t)24;
                                ivar_98 = (ivar_1 == ivar_100);
                                if (ivar_98){                         
                                 result = (uint32_t)2554220882;
} else {
                                
                                 bool_t ivar_102;
                                 uint8_t ivar_104;
                                 ivar_104 = (uint8_t)25;
                                 ivar_102 = (ivar_1 == ivar_104);
                                 if (ivar_102){                          
                                  result = (uint32_t)2821834349;
} else {
                                 
                                  bool_t ivar_106;
                                  uint8_t ivar_108;
                                  ivar_108 = (uint8_t)26;
                                  ivar_106 = (ivar_1 == ivar_108);
                                  if (ivar_106){                           
                                   result = (uint32_t)2952996808;
} else {
                                  
                                   bool_t ivar_110;
                                   uint8_t ivar_112;
                                   ivar_112 = (uint8_t)27;
                                   ivar_110 = (ivar_1 == ivar_112);
                                   if (ivar_110){                            
                                    result = (uint32_t)3210313671;
} else {
                                   
                                    bool_t ivar_114;
                                    uint8_t ivar_116;
                                    ivar_116 = (uint8_t)28;
                                    ivar_114 = (ivar_1 == ivar_116);
                                    if (ivar_114){                             
                                     result = (uint32_t)3336571891;
} else {
                                    
                                     bool_t ivar_118;
                                     uint8_t ivar_120;
                                     ivar_120 = (uint8_t)29;
                                     ivar_118 = (ivar_1 == ivar_120);
                                     if (ivar_118){                              
                                      result = (uint32_t)3584528711;
} else {
                                     
                                      bool_t ivar_122;
                                      uint8_t ivar_124;
                                      ivar_124 = (uint8_t)30;
                                      ivar_122 = (ivar_1 == ivar_124);
                                      if (ivar_122){                               
                                       result = (uint32_t)113926993;
} else {
                                      
                                       bool_t ivar_126;
                                       uint8_t ivar_128;
                                       ivar_128 = (uint8_t)31;
                                       ivar_126 = (ivar_1 == ivar_128);
                                       if (ivar_126){                                
                                        result = (uint32_t)338241895;
} else {
                                       
                                        bool_t ivar_130;
                                        uint8_t ivar_132;
                                        ivar_132 = (uint8_t)32;
                                        ivar_130 = (ivar_1 == ivar_132);
                                        if (ivar_130){                                 
                                         result = (uint32_t)666307205;
} else {
                                        
                                         bool_t ivar_134;
                                         uint8_t ivar_136;
                                         ivar_136 = (uint8_t)33;
                                         ivar_134 = (ivar_1 == ivar_136);
                                         if (ivar_134){                                  
                                          result = (uint32_t)773529912;
} else {
                                         
                                          bool_t ivar_138;
                                          uint8_t ivar_140;
                                          ivar_140 = (uint8_t)34;
                                          ivar_138 = (ivar_1 == ivar_140);
                                          if (ivar_138){                                   
                                           result = (uint32_t)1294757372;
} else {
                                          
                                           bool_t ivar_142;
                                           uint8_t ivar_144;
                                           ivar_144 = (uint8_t)35;
                                           ivar_142 = (ivar_1 == ivar_144);
                                           if (ivar_142){                                    
                                            result = (uint32_t)1396182291;
} else {
                                           
                                            bool_t ivar_146;
                                            uint8_t ivar_148;
                                            ivar_148 = (uint8_t)36;
                                            ivar_146 = (ivar_1 == ivar_148);
                                            if (ivar_146){                                     
                                             result = (uint32_t)1695183700;
} else {
                                            
                                             bool_t ivar_150;
                                             uint8_t ivar_152;
                                             ivar_152 = (uint8_t)37;
                                             ivar_150 = (ivar_1 == ivar_152);
                                             if (ivar_150){                                      
                                              result = (uint32_t)1986661051;
} else {
                                             
                                              bool_t ivar_154;
                                              uint8_t ivar_156;
                                              ivar_156 = (uint8_t)38;
                                              ivar_154 = (ivar_1 == ivar_156);
                                              if (ivar_154){                                       
                                               result = (uint32_t)2177026350;
} else {
                                              
                                               bool_t ivar_158;
                                               uint8_t ivar_160;
                                               ivar_160 = (uint8_t)39;
                                               ivar_158 = (ivar_1 == ivar_160);
                                               if (ivar_158){                                        
                                                result = (uint32_t)2456956037;
} else {
                                               
                                                bool_t ivar_162;
                                                uint8_t ivar_164;
                                                ivar_164 = (uint8_t)40;
                                                ivar_162 = (ivar_1 == ivar_164);
                                                if (ivar_162){                                         
                                                 result = (uint32_t)2730485921;
} else {
                                                
                                                 bool_t ivar_166;
                                                 uint8_t ivar_168;
                                                 ivar_168 = (uint8_t)41;
                                                 ivar_166 = (ivar_1 == ivar_168);
                                                 if (ivar_166){                                          
                                                  result = (uint32_t)2820302411;
} else {
                                                 
                                                  bool_t ivar_170;
                                                  uint8_t ivar_172;
                                                  ivar_172 = (uint8_t)42;
                                                  ivar_170 = (ivar_1 == ivar_172);
                                                  if (ivar_170){                                           
                                                   result = (uint32_t)3259730800;
} else {
                                                  
                                                   bool_t ivar_174;
                                                   uint8_t ivar_176;
                                                   ivar_176 = (uint8_t)43;
                                                   ivar_174 = (ivar_1 == ivar_176);
                                                   if (ivar_174){                                            
                                                    result = (uint32_t)3345764771;
} else {
                                                   
                                                    bool_t ivar_178;
                                                    uint8_t ivar_180;
                                                    ivar_180 = (uint8_t)44;
                                                    ivar_178 = (ivar_1 == ivar_180);
                                                    if (ivar_178){                                             
                                                     result = (uint32_t)3516065817;
} else {
                                                    
                                                     bool_t ivar_182;
                                                     uint8_t ivar_184;
                                                     ivar_184 = (uint8_t)45;
                                                     ivar_182 = (ivar_1 == ivar_184);
                                                     if (ivar_182){                                              
                                                      result = (uint32_t)3600352804;
} else {
                                                     
                                                      bool_t ivar_186;
                                                      uint8_t ivar_188;
                                                      ivar_188 = (uint8_t)46;
                                                      ivar_186 = (ivar_1 == ivar_188);
                                                      if (ivar_186){                                               
                                                       result = (uint32_t)4094571909;
} else {
                                                      
                                                       bool_t ivar_190;
                                                       uint8_t ivar_192;
                                                       ivar_192 = (uint8_t)47;
                                                       ivar_190 = (ivar_1 == ivar_192);
                                                       if (ivar_190){                                                
                                                        result = (uint32_t)275423344;
} else {
                                                       
                                                        bool_t ivar_194;
                                                        uint8_t ivar_196;
                                                        ivar_196 = (uint8_t)48;
                                                        ivar_194 = (ivar_1 == ivar_196);
                                                        if (ivar_194){                                                 
                                                         result = (uint32_t)430227734;
} else {
                                                        
                                                         bool_t ivar_198;
                                                         uint8_t ivar_200;
                                                         ivar_200 = (uint8_t)49;
                                                         ivar_198 = (ivar_1 == ivar_200);
                                                         if (ivar_198){                                                  
                                                          result = (uint32_t)506948616;
} else {
                                                         
                                                          bool_t ivar_202;
                                                          uint8_t ivar_204;
                                                          ivar_204 = (uint8_t)50;
                                                          ivar_202 = (ivar_1 == ivar_204);
                                                          if (ivar_202){                                                   
                                                           result = (uint32_t)659060556;
} else {
                                                          
                                                           bool_t ivar_206;
                                                           uint8_t ivar_208;
                                                           ivar_208 = (uint8_t)51;
                                                           ivar_206 = (ivar_1 == ivar_208);
                                                           if (ivar_206){                                                    
                                                            result = (uint32_t)883997877;
} else {
                                                           
                                                            bool_t ivar_210;
                                                            uint8_t ivar_212;
                                                            ivar_212 = (uint8_t)52;
                                                            ivar_210 = (ivar_1 == ivar_212);
                                                            if (ivar_210){                                                     
                                                             result = (uint32_t)958139571;
} else {
                                                            
                                                             bool_t ivar_214;
                                                             uint8_t ivar_216;
                                                             ivar_216 = (uint8_t)53;
                                                             ivar_214 = (ivar_1 == ivar_216);
                                                             if (ivar_214){                                                      
                                                              result = (uint32_t)1322822218;
} else {
                                                             
                                                              bool_t ivar_218;
                                                              uint8_t ivar_220;
                                                              ivar_220 = (uint8_t)54;
                                                              ivar_218 = (ivar_1 == ivar_220);
                                                              if (ivar_218){                                                       
                                                               result = (uint32_t)1537002063;
} else {
                                                              
                                                               bool_t ivar_222;
                                                               uint8_t ivar_224;
                                                               ivar_224 = (uint8_t)55;
                                                               ivar_222 = (ivar_1 == ivar_224);
                                                               if (ivar_222){                                                        
                                                                result = (uint32_t)1747873779;
} else {
                                                               
                                                                bool_t ivar_226;
                                                                uint8_t ivar_228;
                                                                ivar_228 = (uint8_t)56;
                                                                ivar_226 = (ivar_1 == ivar_228);
                                                                if (ivar_226){                                                         
                                                                 result = (uint32_t)1955562222;
} else {
                                                                
                                                                 bool_t ivar_230;
                                                                 uint8_t ivar_232;
                                                                 ivar_232 = (uint8_t)57;
                                                                 ivar_230 = (ivar_1 == ivar_232);
                                                                 if (ivar_230){                                                          
                                                                  result = (uint32_t)2024104815;
} else {
                                                                 
                                                                  bool_t ivar_234;
                                                                  uint8_t ivar_236;
                                                                  ivar_236 = (uint8_t)58;
                                                                  ivar_234 = (ivar_1 == ivar_236);
                                                                  if (ivar_234){                                                           
                                                                   result = (uint32_t)2227730452;
} else {
                                                                  
                                                                   bool_t ivar_238;
                                                                   uint8_t ivar_240;
                                                                   ivar_240 = (uint8_t)59;
                                                                   ivar_238 = (ivar_1 == ivar_240);
                                                                   if (ivar_238){                                                            
                                                                    result = (uint32_t)2361852424;
} else {
                                                                   
                                                                    bool_t ivar_242;
                                                                    uint8_t ivar_244;
                                                                    ivar_244 = (uint8_t)60;
                                                                    ivar_242 = (ivar_1 == ivar_244);
                                                                    if (ivar_242){                                                             
                                                                     result = (uint32_t)2428436474;
} else {
                                                                    
                                                                     bool_t ivar_246;
                                                                     uint8_t ivar_248;
                                                                     ivar_248 = (uint8_t)61;
                                                                     ivar_246 = (ivar_1 == ivar_248);
                                                                     if (ivar_246){                                                              
                                                                      result = (uint32_t)2756734187;
} else {
                                                                     
                                                                      bool_t ivar_250;
                                                                      uint8_t ivar_252;
                                                                      ivar_252 = (uint8_t)62;
                                                                      ivar_250 = (ivar_1 == ivar_252);
                                                                      if (ivar_250){                                                               
                                                                       result = (uint32_t)3204031479;
} else {
                                                                      
                                                                       result = (uint32_t)3329325298;
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};

        return result;
}

extern bool_t SHA256__digitp(uint8_t ivar_1){
        bool_t result;
        bool_t ivar_2;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)48;
        ivar_2 = (ivar_1 >= ivar_5);
        bool_t ivar_3;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)57;
        ivar_3 = (ivar_1 <= ivar_8);
        result = ivar_2 && ivar_3;

        return result;
}

extern bool_t SHA256__hexalphap(uint8_t ivar_1){
        bool_t result;
        bool_t ivar_2;
        bool_t ivar_4;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)65;
        ivar_4 = (ivar_1 >= ivar_7);
        bool_t ivar_5;
        uint8_t ivar_10;
        ivar_10 = (uint8_t)70;
        ivar_5 = (ivar_1 <= ivar_10);
        ivar_2 = ivar_4 && ivar_5;
        bool_t ivar_3;
        bool_t ivar_13;
        uint8_t ivar_16;
        ivar_16 = (uint8_t)97;
        ivar_13 = (ivar_1 >= ivar_16);
        bool_t ivar_14;
        uint8_t ivar_19;
        ivar_19 = (uint8_t)102;
        ivar_14 = (ivar_1 <= ivar_19);
        ivar_3 = ivar_13 && ivar_14;
        result = ivar_2 || ivar_3;

        return result;
}

extern bool_t SHA256__hexdigitp(uint8_t ivar_1){
        bool_t result;
        bool_t ivar_2;
        ivar_2 = (bool_t)SHA256__digitp((uint8_t)ivar_1);
        bool_t ivar_3;
        ivar_3 = (bool_t)SHA256__hexalphap((uint8_t)ivar_1);
        result = ivar_2 || ivar_3;

        return result;
}

extern uint8_t SHA256__hexvalue(uint8_t ivar_1){
        uint8_t result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)97;
        ivar_2 = (ivar_1 >= ivar_4);
        if (ivar_2){ 
             uint8_t ivar_7;
             ivar_7 = (uint8_t)87;
             result = (uint8_t)(ivar_1 - ivar_7);
} else {
        
             bool_t ivar_9;
             uint8_t ivar_11;
             ivar_11 = (uint8_t)65;
             ivar_9 = (ivar_1 >= ivar_11);
             if (ivar_9){  
           uint8_t ivar_14;
           ivar_14 = (uint8_t)55;
           result = (uint8_t)(ivar_1 - ivar_14);
} else {
             
           uint8_t ivar_17;
           ivar_17 = (uint8_t)48;
           result = (uint8_t)(ivar_1 - ivar_17);
};
};

        return result;
}

extern uint8_t SHA256__hex2byte(uint8_t ivar_1, uint8_t ivar_2){
        uint8_t result;
        uint8_t ivar_17;
        uint8_t ivar_11;
        ivar_11 = (uint8_t)SHA256__hexvalue((uint8_t)ivar_1);
        uint8_t ivar_12;
        ivar_12 = (uint8_t)4;
        ivar_17 = (uint8_t)integertypes__u8lshift((uint8_t)ivar_11, (uint8_t)ivar_12);
        uint8_t ivar_18;
        ivar_18 = (uint8_t)SHA256__hexvalue((uint8_t)ivar_2);
        result = (uint8_t)integertypes__u8plus((uint8_t)ivar_17, (uint8_t)ivar_18);

        return result;
}

extern bytestrings__bytestring_t SHA256__hex2bytestring(bytestrings__bytestring_t ivar_1){
        bytestrings__bytestring_t result;
        /* len */ uint32_t ivar_2;
        uint32_t ivar_10;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)ivar_1->length;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)1;
        ivar_10 = (uint32_t)(ivar_5 + ivar_6);
        uint32_t ivar_11;
        ivar_11 = (uint32_t)2;
        ivar_2 = (uint32_t)integertypes__u32div((uint32_t)ivar_10, (uint32_t)ivar_11);
        SHA256_array_0_t ivar_63;
        uint32_t size1381;
        //copying to uint32 from uint32;
        size1381 = (uint32_t)ivar_2;
        size1381 += 0;
        ivar_63 = new_SHA256_array_0(size1381);
        uint32_t ivar_15;
        for (uint32_t index1380 = 0; index1380 < size1381; index1380++){
             ivar_15 = (uint32_t)index1380;
             /* twoi */ uint32_t ivar_16;
             uint32_t ivar_21;
             ivar_21 = (uint32_t)2;
             ivar_16 = (uint32_t)integertypes__u32times((uint32_t)ivar_15, (uint32_t)ivar_21);
             bool_t ivar_22;
             uint32_t ivar_23;
             uint32_t ivar_29;
             ivar_29 = (uint32_t)1;
             ivar_23 = (uint32_t)integertypes__u32plus((uint32_t)ivar_16, (uint32_t)ivar_29);
             uint32_t ivar_24;
             ivar_24 = (uint32_t)ivar_1->length;
             ivar_22 = (ivar_23 == ivar_24);
             if (ivar_22){  
           uint8_t ivar_41;
           ivar_1->count++;
           ivar_41 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_16);
           uint8_t ivar_42;
           ivar_42 = (uint8_t)48;
           ivar_63->elems[index1380] = (uint8_t)SHA256__hex2byte((uint8_t)ivar_41, (uint8_t)ivar_42);
} else {
             
           uint8_t ivar_61;
           ivar_1->count++;
           ivar_61 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_16);
           uint8_t ivar_62;
           uint32_t ivar_58;
           uint8_t ivar_54;
           ivar_54 = (uint8_t)1;
           ivar_58 = (uint32_t)(ivar_16 + ivar_54);
           ivar_1->count++;
           ivar_62 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_58);
           ivar_63->elems[index1380] = (uint8_t)SHA256__hex2byte((uint8_t)ivar_61, (uint8_t)ivar_62);
};
        };
        release_bytestrings__bytestring(ivar_1);
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_2;
        result->seq = (SHA256_array_0_t)ivar_63;

        return result;
}

extern bytestrings__bytestring_t SHA256__test_hex2bytestring(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_11;
        SHA256_record_2_t ivar_9;
        uint32_t len1390 = 16;
        uint32_t characters1391[16] = {65, 66, 67, 68, 69, 70, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
        stringliteral_t string1389 = mk_string(16, characters1391);
        ivar_9 = (SHA256_record_2_t)strings__make_string(len1390, string1389);
        SHA256_record_2_t ivar_7;
        //copying to SHA256_record_2 from SHA256_record_2;
        ivar_7 = (SHA256_record_2_t)ivar_9;
        ivar_7->count++;
        release_SHA256_record_2(ivar_9);
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_6;
        ivar_11->count++;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)SHA256__hex2bytestring((bytestrings__bytestring_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_10;
        result->count++;
        release_bytestrings__bytestring(ivar_10);

        return result;
}

extern uint8_t SHA256__hex0(uint8_t ivar_1){
        uint8_t result;
        /* hnum */ uint8_t ivar_2;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)4;
        ivar_2 = (uint8_t)integertypes__u8rshift((uint8_t)ivar_1, (uint8_t)ivar_7);
        bool_t ivar_8;
        uint8_t ivar_10;
        ivar_10 = (uint8_t)10;
        ivar_8 = (ivar_2 < ivar_10);
        if (ivar_8){ 
             uint8_t ivar_12;
             ivar_12 = (uint8_t)48;
             result = (uint8_t)(ivar_12 + ivar_2);
} else {
        
             uint8_t ivar_18;
             ivar_18 = (uint8_t)55;
             result = (uint8_t)integertypes__u8plus((uint8_t)ivar_18, (uint8_t)ivar_2);
};

        return result;
}

extern uint8_t SHA256__hex1(uint8_t ivar_1){
        uint8_t result;
        /* hnum */ uint8_t ivar_2;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)16;
        ivar_2 = (uint8_t)integertypes__u8rem((uint8_t)ivar_1, (uint8_t)ivar_7);
        bool_t ivar_8;
        uint8_t ivar_10;
        ivar_10 = (uint8_t)10;
        ivar_8 = (ivar_2 < ivar_10);
        if (ivar_8){ 
             uint8_t ivar_12;
             ivar_12 = (uint8_t)48;
             result = (uint8_t)(ivar_12 + ivar_2);
} else {
        
             uint8_t ivar_18;
             ivar_18 = (uint8_t)55;
             result = (uint8_t)integertypes__u8plus((uint8_t)ivar_18, (uint8_t)ivar_2);
};

        return result;
}

extern bytestrings__bytestring_t SHA256__bytestring2hexstring(bytestrings__bytestring_t ivar_1){
        bytestrings__bytestring_t result;
        /* len */ uint32_t ivar_2;
        uint32_t ivar_7;
        ivar_7 = (uint32_t)ivar_1->length;
        uint32_t ivar_8;
        ivar_8 = (uint32_t)2;
        ivar_2 = (uint32_t)integertypes__u32times((uint32_t)ivar_7, (uint32_t)ivar_8);
        SHA256_array_0_t ivar_46;
        uint32_t size1399;
        //copying to uint32 from uint32;
        size1399 = (uint32_t)ivar_2;
        size1399 += 0;
        ivar_46 = new_SHA256_array_0(size1399);
        uint32_t ivar_12;
        for (uint32_t index1398 = 0; index1398 < size1399; index1398++){
             ivar_12 = (uint32_t)index1398;
             /* i2 */ uint8_t ivar_13;
             uint8_t ivar_18;
             ivar_18 = (uint8_t)2;
             ivar_13 = (uint8_t)integertypes__u8div((uint8_t)ivar_12, (uint8_t)ivar_18);
             bool_t ivar_19;
             uint8_t ivar_20;
             uint8_t ivar_26;
             ivar_26 = (uint8_t)2;
             ivar_20 = (uint8_t)integertypes__u8rem((uint8_t)ivar_12, (uint8_t)ivar_26);
             uint8_t ivar_21;
             ivar_21 = (uint8_t)0;
             ivar_19 = (ivar_20 == ivar_21);
             if (ivar_19){  
           uint8_t ivar_36;
           ivar_1->count++;
           ivar_36 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_13);
           ivar_46->elems[index1398] = (uint8_t)SHA256__hex0((uint8_t)ivar_36);
} else {
             
           uint8_t ivar_45;
           ivar_1->count++;
           ivar_45 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_13);
           ivar_46->elems[index1398] = (uint8_t)SHA256__hex1((uint8_t)ivar_45);
};
        };
        release_bytestrings__bytestring(ivar_1);
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_2;
        result->seq = (SHA256_array_0_t)ivar_46;

        return result;
}

extern bytestrings__bytestring_t SHA256__test_bytestring2hexstring(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_11;
        SHA256_record_2_t ivar_9;
        uint32_t len1402 = 16;
        uint32_t characters1403[16] = {65, 66, 67, 68, 69, 70, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
        stringliteral_t string1401 = mk_string(16, characters1403);
        ivar_9 = (SHA256_record_2_t)strings__make_string(len1402, string1401);
        SHA256_record_2_t ivar_7;
        //copying to SHA256_record_2 from SHA256_record_2;
        ivar_7 = (SHA256_record_2_t)ivar_9;
        ivar_7->count++;
        release_SHA256_record_2(ivar_9);
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_6;
        ivar_11->count++;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)SHA256__bytestring2hexstring((bytestrings__bytestring_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_10;
        result->count++;
        release_bytestrings__bytestring(ivar_10);

        return result;
}

extern uint32_t SHA256__bytes2uint32(bytestrings__bytestring_t ivar_1, uint32_t ivar_2){
        uint32_t result;
        bool_t ivar_4;
        uint64_t ivar_5;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)3;
        ivar_5 = (uint64_t)(ivar_2 + ivar_8);
        uint32_t ivar_6;
        ivar_6 = (uint32_t)ivar_1->length;
        ivar_4 = (ivar_5 < ivar_6);
        if (ivar_4){ 
             uint64_t ivar_12;
             uint64_t ivar_14;
             uint32_t ivar_16;
             uint32_t ivar_27;
             uint8_t ivar_22;
             ivar_1->count++;
             ivar_22 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_2);
             //copying to uint32 from uint8;
             ivar_27 = (uint32_t)ivar_22;
             uint8_t ivar_28;
             ivar_28 = (uint8_t)24;
             ivar_16 = (uint32_t)integertypes__u32lshift((uint32_t)ivar_27, (uint32_t)ivar_28);
             uint32_t ivar_17;
             uint32_t ivar_41;
             uint32_t ivar_38;
             uint8_t ivar_34;
             ivar_34 = (uint8_t)1;
             ivar_38 = (uint32_t)(ivar_2 + ivar_34);
             uint8_t ivar_36;
             ivar_1->count++;
             ivar_36 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_38);
             //copying to uint32 from uint8;
             ivar_41 = (uint32_t)ivar_36;
             uint8_t ivar_42;
             ivar_42 = (uint8_t)16;
             ivar_17 = (uint32_t)integertypes__u32lshift((uint32_t)ivar_41, (uint32_t)ivar_42);
             ivar_14 = (uint64_t)(ivar_16 + ivar_17);
             uint32_t ivar_15;
             uint32_t ivar_56;
             uint32_t ivar_53;
             uint8_t ivar_49;
             ivar_49 = (uint8_t)2;
             ivar_53 = (uint32_t)(ivar_2 + ivar_49);
             uint8_t ivar_51;
             ivar_1->count++;
             ivar_51 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_53);
             //copying to uint32 from uint8;
             ivar_56 = (uint32_t)ivar_51;
             uint8_t ivar_57;
             ivar_57 = (uint8_t)8;
             ivar_15 = (uint32_t)integertypes__u32lshift((uint32_t)ivar_56, (uint32_t)ivar_57);
             ivar_12 = (uint64_t)(ivar_14 + ivar_15);
             uint8_t ivar_13;
             uint32_t ivar_66;
             uint8_t ivar_62;
             ivar_62 = (uint8_t)3;
             ivar_66 = (uint32_t)(ivar_2 + ivar_62);
             ivar_13 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_66);
             result = (uint32_t)(ivar_12 + ivar_13);
} else {
        
             bool_t ivar_69;
             uint64_t ivar_70;
             uint8_t ivar_73;
             ivar_73 = (uint8_t)2;
             ivar_70 = (uint64_t)(ivar_2 + ivar_73);
             uint32_t ivar_71;
             ivar_71 = (uint32_t)ivar_1->length;
             ivar_69 = (ivar_70 < ivar_71);
             if (ivar_69){  
           uint64_t ivar_77;
           uint32_t ivar_79;
           uint32_t ivar_90;
           uint8_t ivar_85;
           ivar_1->count++;
           ivar_85 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_2);
           //copying to uint32 from uint8;
           ivar_90 = (uint32_t)ivar_85;
           uint8_t ivar_91;
           ivar_91 = (uint8_t)16;
           ivar_79 = (uint32_t)integertypes__u32lshift((uint32_t)ivar_90, (uint32_t)ivar_91);
           uint32_t ivar_80;
           uint32_t ivar_104;
           uint32_t ivar_101;
           uint8_t ivar_97;
           ivar_97 = (uint8_t)1;
           ivar_101 = (uint32_t)(ivar_2 + ivar_97);
           uint8_t ivar_99;
           ivar_1->count++;
           ivar_99 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_101);
           //copying to uint32 from uint8;
           ivar_104 = (uint32_t)ivar_99;
           uint8_t ivar_105;
           ivar_105 = (uint8_t)8;
           ivar_80 = (uint32_t)integertypes__u32lshift((uint32_t)ivar_104, (uint32_t)ivar_105);
           ivar_77 = (uint64_t)(ivar_79 + ivar_80);
           uint8_t ivar_78;
           uint32_t ivar_114;
           uint8_t ivar_110;
           ivar_110 = (uint8_t)2;
           ivar_114 = (uint32_t)(ivar_2 + ivar_110);
           ivar_78 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_114);
           result = (uint32_t)(ivar_77 + ivar_78);
} else {
             
           bool_t ivar_117;
           uint64_t ivar_118;
           uint8_t ivar_121;
           ivar_121 = (uint8_t)1;
           ivar_118 = (uint64_t)(ivar_2 + ivar_121);
           uint32_t ivar_119;
           ivar_119 = (uint32_t)ivar_1->length;
           ivar_117 = (ivar_118 < ivar_119);
           if (ivar_117){   
           uint32_t ivar_125;
           uint32_t ivar_136;
           uint8_t ivar_131;
           ivar_1->count++;
           ivar_131 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_2);
           //copying to uint32 from uint8;
           ivar_136 = (uint32_t)ivar_131;
           uint8_t ivar_137;
           ivar_137 = (uint8_t)8;
           ivar_125 = (uint32_t)integertypes__u32lshift((uint32_t)ivar_136, (uint32_t)ivar_137);
           uint8_t ivar_126;
           uint32_t ivar_145;
           uint8_t ivar_141;
           ivar_141 = (uint8_t)1;
           ivar_145 = (uint32_t)(ivar_2 + ivar_141);
           ivar_126 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_145);
           result = (uint32_t)(ivar_125 + ivar_126);
} else {
           
           uint8_t ivar_150;
           ivar_150 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_2);
           //copying to uint32 from uint8;
           result = (uint32_t)ivar_150;
};
};
};

        return result;
}

extern bool_t SHA256__equalUpto(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2, uint32_t ivar_3){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}

extern SHA256_array_3_t SHA256__bytes2uint32array(bytestrings__bytestring_t ivar_1){
        SHA256_array_3_t result;
        uint32_t size1419;
        mpq_ptr_t ivar_8;
        uint32_t ivar_3;
        bytestrings__bytestring_t ivar_5;
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_5 = (bytestrings__bytestring_t)ivar_1;
        ivar_5->count++;
        ivar_3 = (uint32_t)ivar_5->length;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)4;
        mpq_t tmp1420;
        mpq_init(tmp1420);
        mpq_t tmp1421;
        mpq_init(tmp1421);
        mpq_set_ui(tmp1420, (uint64_t)ivar_3, 1);
        mpq_set_ui(tmp1421, ivar_4, 1);
        mpq_mk_div(ivar_8, tmp1420, tmp1421);
        mpq_clear(tmp1420);
        mpq_clear(tmp1421);
        size1419 = (uint32_t)integertypes__u32ceiling(ivar_8);
        size1419 += 0;
        result = new_SHA256_array_3(size1419);
        uint32_t ivar_9;
        for (uint32_t index1418 = 0; index1418 < size1419; index1418++){
             ivar_9 = (uint32_t)index1418;
             uint32_t ivar_24;
             uint8_t ivar_19;
             ivar_19 = (uint8_t)4;
             ivar_24 = (uint32_t)((uint64_t)ivar_19 * (uint64_t)ivar_9);
             ivar_1->count++;
             result->elems[index1418] = (uint32_t)SHA256__bytes2uint32((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_24);
        };
        release_bytestrings__bytestring(ivar_1);

        return result;
}

extern bytestrings__bytestring_t SHA256__padMessage(bytestrings__bytestring_t ivar_1){
        bytestrings__bytestring_t result;
        uint32_t ivar_43;
        ivar_43 = (uint32_t)ivar_1->length;
        uint32_t ivar_42;
        uint32_t ivar_9;
        ivar_9 = (uint32_t)ivar_1->length;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)512;
        ivar_42 = (uint32_t)integertypes__u32rem((uint32_t)ivar_9, (uint32_t)ivar_10);
        /* n */ uint32_t ivar_11;
        uint32_t ivar_21;
        ivar_21 = (uint32_t)ivar_1->length;
        uint32_t ivar_22;
        uint16_t ivar_18;
        ivar_18 = (uint16_t)512;
        uint16_t ivar_17;
        ivar_17 = (uint16_t)integertypes__u16minus((uint16_t)ivar_18, (uint16_t)ivar_42);
        //copying to uint32 from uint16;
        ivar_22 = (uint32_t)ivar_17;
        ivar_11 = (uint32_t)integertypes__u32plus((uint32_t)ivar_21, (uint32_t)ivar_22);
        bool_t ivar_23;
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        ivar_23 = (ivar_42 == ivar_25);
        if (ivar_23){ 
             //copying to bytestrings__bytestring from bytestrings__bytestring;
             result = (bytestrings__bytestring_t)ivar_1;
             result->count++;
             release_bytestrings__bytestring(ivar_1);
} else {
        
             SHA256_array_0_t ivar_41;
             uint32_t size1428;
             //copying to uint32 from uint32;
             size1428 = (uint32_t)ivar_11;
             size1428 += 0;
             ivar_41 = new_SHA256_array_0(size1428);
             uint32_t ivar_30;
             for (uint32_t index1427 = 0; index1427 < size1428; index1427++){
           ivar_30 = (uint32_t)index1427;
           bool_t ivar_31;
           ivar_31 = (ivar_30 < ivar_42);
           if (ivar_31){   
           SHA256_array_0_t ivar_38;
           ivar_38 = (SHA256_array_0_t)ivar_1->seq;
           ivar_38->count++;
           ivar_41->elems[index1427] = (uint8_t)ivar_38->elems[ivar_30];
           release_SHA256_array_0(ivar_38);
} else {
           
           ivar_41->elems[index1427] = (uint8_t)0;
};
             };
             release_bytestrings__bytestring(ivar_1);
             result = (SHA256_record_4_t)new_SHA256_record_4();;
             result->length = (uint32_t)ivar_11;
             result->seq = (SHA256_array_0_t)ivar_41;
};

        return result;
}

extern SHA256_funtype_5_t SHA256__extractBlocks(SHA256_record_4_t ivar_1){
        SHA256_funtype_5_t result;
        SHA256_closure_6_t cl1436;
        cl1436 = new_SHA256_closure_6();
        cl1436->fvar_1 = (SHA256_record_4_t)ivar_1;
        cl1436->fvar_1->count++;
        release_SHA256_record_4(ivar_1);
        result = (SHA256_funtype_5_t)cl1436;

        return result;
}

extern SHA256_array_3_t SHA256__w0(SHA256_array_3_t ivar_1){
        SHA256_array_3_t result;
        result = new_SHA256_array_3(64);
        uint8_t ivar_2;
        for (uint32_t index1437 = 0; index1437 < 64; index1437++){
             ivar_2 = (uint8_t)index1437;
             bool_t ivar_3;
             uint8_t ivar_5;
             ivar_5 = (uint8_t)16;
             ivar_3 = (ivar_2 < ivar_5);
             if (ivar_3){  
           result->elems[index1437] = (uint32_t)ivar_1->elems[ivar_2];
} else {
             
           result->elems[index1437] = (uint32_t)0;
};
        };
        release_SHA256_array_3(ivar_1);

        return result;
}

extern SHA256_array_3_t SHA256__extendW(SHA256_array_3_t ivar_1, uint8_t ivar_2){
        SHA256_array_3_t result;
        bool_t ivar_3;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)64;
        ivar_3 = (ivar_2 == ivar_5);
        if (ivar_3){ 
             //copying to SHA256_array_3 from SHA256_array_3;
             result = (SHA256_array_3_t)ivar_1;
             result->count++;
             release_SHA256_array_3(ivar_1);
} else {
        
             /* s0 */ uint32_t ivar_7;
             uint32_t ivar_52;
             uint32_t ivar_37;
             uint32_t ivar_22;
             uint8_t ivar_20;
             uint8_t ivar_16;
             ivar_16 = (uint8_t)15;
             ivar_20 = (uint8_t)(ivar_2 - ivar_16);
             ivar_22 = (uint32_t)ivar_1->elems[ivar_20];
             uint8_t ivar_23;
             ivar_23 = (uint8_t)7;
             ivar_37 = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_22, (uint8_t)ivar_23);
             uint32_t ivar_38;
             uint32_t ivar_34;
             uint8_t ivar_32;
             uint8_t ivar_28;
             ivar_28 = (uint8_t)15;
             ivar_32 = (uint8_t)(ivar_2 - ivar_28);
             ivar_34 = (uint32_t)ivar_1->elems[ivar_32];
             uint8_t ivar_35;
             ivar_35 = (uint8_t)18;
             ivar_38 = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_34, (uint8_t)ivar_35);
             ivar_52 = (uint32_t)integer_bv_ops__u32xor((uint32_t)ivar_37, (uint32_t)ivar_38);
             uint32_t ivar_53;
             uint32_t ivar_49;
             uint8_t ivar_47;
             uint8_t ivar_43;
             ivar_43 = (uint8_t)15;
             ivar_47 = (uint8_t)(ivar_2 - ivar_43);
             ivar_49 = (uint32_t)ivar_1->elems[ivar_47];
             uint8_t ivar_50;
             ivar_50 = (uint8_t)3;
             ivar_53 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_49, (uint32_t)ivar_50);
             ivar_7 = (uint32_t)integer_bv_ops__u32xor((uint32_t)ivar_52, (uint32_t)ivar_53);
             /* s1 */ uint32_t ivar_54;
             uint32_t ivar_99;
             uint32_t ivar_84;
             uint32_t ivar_69;
             uint8_t ivar_67;
             uint8_t ivar_63;
             ivar_63 = (uint8_t)2;
             ivar_67 = (uint8_t)(ivar_2 - ivar_63);
             ivar_69 = (uint32_t)ivar_1->elems[ivar_67];
             uint8_t ivar_70;
             ivar_70 = (uint8_t)17;
             ivar_84 = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_69, (uint8_t)ivar_70);
             uint32_t ivar_85;
             uint32_t ivar_81;
             uint8_t ivar_79;
             uint8_t ivar_75;
             ivar_75 = (uint8_t)2;
             ivar_79 = (uint8_t)(ivar_2 - ivar_75);
             ivar_81 = (uint32_t)ivar_1->elems[ivar_79];
             uint8_t ivar_82;
             ivar_82 = (uint8_t)19;
             ivar_85 = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_81, (uint8_t)ivar_82);
             ivar_99 = (uint32_t)integer_bv_ops__u32xor((uint32_t)ivar_84, (uint32_t)ivar_85);
             uint32_t ivar_100;
             uint32_t ivar_96;
             uint8_t ivar_94;
             uint8_t ivar_90;
             ivar_90 = (uint8_t)2;
             ivar_94 = (uint8_t)(ivar_2 - ivar_90);
             ivar_96 = (uint32_t)ivar_1->elems[ivar_94];
             uint8_t ivar_97;
             ivar_97 = (uint8_t)10;
             ivar_100 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_96, (uint32_t)ivar_97);
             ivar_54 = (uint32_t)integer_bv_ops__u32xor((uint32_t)ivar_99, (uint32_t)ivar_100);
             /* vi */ uint32_t ivar_101;
             uint32_t ivar_129;
             uint32_t ivar_114;
             uint8_t ivar_112;
             uint8_t ivar_108;
             ivar_108 = (uint8_t)16;
             ivar_112 = (uint8_t)(ivar_2 - ivar_108);
             ivar_114 = (uint32_t)ivar_1->elems[ivar_112];
             ivar_129 = (uint32_t)integertypes__u32plus((uint32_t)ivar_114, (uint32_t)ivar_7);
             uint32_t ivar_130;
             uint32_t ivar_126;
             uint8_t ivar_124;
             uint8_t ivar_120;
             ivar_120 = (uint8_t)7;
             ivar_124 = (uint8_t)(ivar_2 - ivar_120);
             ivar_126 = (uint32_t)ivar_1->elems[ivar_124];
             ivar_130 = (uint32_t)integertypes__u32plus((uint32_t)ivar_126, (uint32_t)ivar_54);
             ivar_101 = (uint32_t)integertypes__u32plus((uint32_t)ivar_129, (uint32_t)ivar_130);
             SHA256_array_3_t ivar_144;
             SHA256_array_3_t ivar_139;
             ivar_139 = (SHA256_array_3_t)update_SHA256_array_3(ivar_1, ivar_2, ivar_101);
             //copying to SHA256_array_3 from SHA256_array_3;
             ivar_144 = (SHA256_array_3_t)ivar_139;
             ivar_144->count++;
             release_SHA256_array_3(ivar_139);
             uint8_t ivar_145;
             uint8_t ivar_141;
             ivar_141 = (uint8_t)1;
             ivar_145 = (uint8_t)(ivar_2 + ivar_141);
             SHA256_array_3_t ivar_143;
             ivar_143 = (SHA256_array_3_t)SHA256__extendW((SHA256_array_3_t)ivar_144, (uint8_t)ivar_145);
             //copying to SHA256_array_3 from SHA256_array_3;
             result = (SHA256_array_3_t)ivar_143;
             result->count++;
             release_SHA256_array_3(ivar_143);
};

        return result;
}

extern SHA256_array_3_t SHA256__sha256rec(SHA256_array_3_t ivar_1, SHA256_array_3_t ivar_2, uint8_t ivar_3){
        SHA256_array_3_t result;
        bool_t ivar_4;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)64;
        ivar_4 = (ivar_3 == ivar_6);
        if (ivar_4){ 
             release_SHA256_array_3(ivar_1);
             //copying to SHA256_array_3 from SHA256_array_3;
             result = (SHA256_array_3_t)ivar_2;
             result->count++;
             release_SHA256_array_3(ivar_2);
} else {
        
             /* S1 */ uint32_t ivar_8;
             uint32_t ivar_44;
             uint32_t ivar_32;
             uint32_t ivar_20;
             uint8_t ivar_18;
             ivar_18 = (uint8_t)4;
             ivar_20 = (uint32_t)ivar_2->elems[ivar_18];
             uint8_t ivar_21;
             ivar_21 = (uint8_t)6;
             ivar_32 = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_20, (uint8_t)ivar_21);
             uint32_t ivar_33;
             uint32_t ivar_29;
             uint8_t ivar_27;
             ivar_27 = (uint8_t)4;
             ivar_29 = (uint32_t)ivar_2->elems[ivar_27];
             uint8_t ivar_30;
             ivar_30 = (uint8_t)11;
             ivar_33 = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_29, (uint8_t)ivar_30);
             ivar_44 = (uint32_t)integer_bv_ops__u32xor((uint32_t)ivar_32, (uint32_t)ivar_33);
             uint32_t ivar_45;
             uint32_t ivar_41;
             uint8_t ivar_39;
             ivar_39 = (uint8_t)4;
             ivar_41 = (uint32_t)ivar_2->elems[ivar_39];
             uint8_t ivar_42;
             ivar_42 = (uint8_t)25;
             ivar_45 = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_41, (uint8_t)ivar_42);
             ivar_8 = (uint32_t)integer_bv_ops__u32xor((uint32_t)ivar_44, (uint32_t)ivar_45);
             /* ch */ uint32_t ivar_46;
             uint32_t ivar_79;
             uint32_t ivar_60;
             uint8_t ivar_54;
             ivar_54 = (uint8_t)4;
             ivar_60 = (uint32_t)ivar_2->elems[ivar_54];
             uint32_t ivar_61;
             uint8_t ivar_58;
             ivar_58 = (uint8_t)5;
             ivar_61 = (uint32_t)ivar_2->elems[ivar_58];
             ivar_79 = (uint32_t)integer_bv_ops__u32and((uint32_t)ivar_60, (uint32_t)ivar_61);
             uint32_t ivar_80;
             uint32_t ivar_76;
             uint32_t ivar_70;
             uint8_t ivar_68;
             ivar_68 = (uint8_t)4;
             ivar_70 = (uint32_t)ivar_2->elems[ivar_68];
             ivar_76 = (uint32_t)integer_bv_ops__u32not((uint32_t)ivar_70);
             uint32_t ivar_77;
             uint8_t ivar_74;
             ivar_74 = (uint8_t)6;
             ivar_77 = (uint32_t)ivar_2->elems[ivar_74];
             ivar_80 = (uint32_t)integer_bv_ops__u32and((uint32_t)ivar_76, (uint32_t)ivar_77);
             ivar_46 = (uint32_t)integer_bv_ops__u32xor((uint32_t)ivar_79, (uint32_t)ivar_80);
             /* temp1 */ uint32_t ivar_81;
             uint32_t ivar_111;
             uint8_t ivar_87;
             ivar_87 = (uint8_t)7;
             ivar_111 = (uint32_t)ivar_2->elems[ivar_87];
             uint32_t ivar_112;
             uint32_t ivar_109;
             uint32_t ivar_106;
             uint32_t ivar_102;
             ivar_102 = (uint32_t)SHA256__k((uint8_t)ivar_3);
             uint32_t ivar_103;
             ivar_103 = (uint32_t)ivar_1->elems[ivar_3];
             ivar_106 = (uint32_t)integertypes__u32plus((uint32_t)ivar_102, (uint32_t)ivar_103);
             ivar_109 = (uint32_t)integertypes__u32plus((uint32_t)ivar_46, (uint32_t)ivar_106);
             ivar_112 = (uint32_t)integertypes__u32plus((uint32_t)ivar_8, (uint32_t)ivar_109);
             ivar_81 = (uint32_t)integertypes__u32plus((uint32_t)ivar_111, (uint32_t)ivar_112);
             /* S0 */ uint32_t ivar_113;
             uint32_t ivar_149;
             uint32_t ivar_137;
             uint32_t ivar_125;
             uint8_t ivar_123;
             ivar_123 = (uint8_t)0;
             ivar_125 = (uint32_t)ivar_2->elems[ivar_123];
             uint8_t ivar_126;
             ivar_126 = (uint8_t)2;
             ivar_137 = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_125, (uint8_t)ivar_126);
             uint32_t ivar_138;
             uint32_t ivar_134;
             uint8_t ivar_132;
             ivar_132 = (uint8_t)0;
             ivar_134 = (uint32_t)ivar_2->elems[ivar_132];
             uint8_t ivar_135;
             ivar_135 = (uint8_t)13;
             ivar_138 = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_134, (uint8_t)ivar_135);
             ivar_149 = (uint32_t)integer_bv_ops__u32xor((uint32_t)ivar_137, (uint32_t)ivar_138);
             uint32_t ivar_150;
             uint32_t ivar_146;
             uint8_t ivar_144;
             ivar_144 = (uint8_t)0;
             ivar_146 = (uint32_t)ivar_2->elems[ivar_144];
             uint8_t ivar_147;
             ivar_147 = (uint8_t)22;
             ivar_150 = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_146, (uint8_t)ivar_147);
             ivar_113 = (uint32_t)integer_bv_ops__u32xor((uint32_t)ivar_149, (uint32_t)ivar_150);
             /* maj */ uint32_t ivar_151;
             uint32_t ivar_199;
             uint32_t ivar_183;
             uint32_t ivar_167;
             uint8_t ivar_161;
             ivar_161 = (uint8_t)0;
             ivar_167 = (uint32_t)ivar_2->elems[ivar_161];
             uint32_t ivar_168;
             uint8_t ivar_165;
             ivar_165 = (uint8_t)1;
             ivar_168 = (uint32_t)ivar_2->elems[ivar_165];
             ivar_183 = (uint32_t)integer_bv_ops__u32and((uint32_t)ivar_167, (uint32_t)ivar_168);
             uint32_t ivar_184;
             uint32_t ivar_180;
             uint8_t ivar_174;
             ivar_174 = (uint8_t)0;
             ivar_180 = (uint32_t)ivar_2->elems[ivar_174];
             uint32_t ivar_181;
             uint8_t ivar_178;
             ivar_178 = (uint8_t)2;
             ivar_181 = (uint32_t)ivar_2->elems[ivar_178];
             ivar_184 = (uint32_t)integer_bv_ops__u32and((uint32_t)ivar_180, (uint32_t)ivar_181);
             ivar_199 = (uint32_t)integer_bv_ops__u32xor((uint32_t)ivar_183, (uint32_t)ivar_184);
             uint32_t ivar_200;
             uint32_t ivar_196;
             uint8_t ivar_190;
             ivar_190 = (uint8_t)1;
             ivar_196 = (uint32_t)ivar_2->elems[ivar_190];
             uint32_t ivar_197;
             uint8_t ivar_194;
             ivar_194 = (uint8_t)2;
             ivar_197 = (uint32_t)ivar_2->elems[ivar_194];
             ivar_200 = (uint32_t)integer_bv_ops__u32and((uint32_t)ivar_196, (uint32_t)ivar_197);
             ivar_151 = (uint32_t)integer_bv_ops__u32xor((uint32_t)ivar_199, (uint32_t)ivar_200);
             /* temp2 */ uint32_t ivar_201;
             ivar_201 = (uint32_t)integertypes__u32plus((uint32_t)ivar_113, (uint32_t)ivar_151);
             SHA256_array_3_t ivar_302;
             uint32_t ivar_210;
             uint8_t ivar_221;
             ivar_221 = (uint8_t)6;
             ivar_210 = (uint32_t)ivar_2->elems[ivar_221];
             uint32_t ivar_211;
             uint8_t ivar_225;
             ivar_225 = (uint8_t)5;
             ivar_211 = (uint32_t)ivar_2->elems[ivar_225];
             uint32_t ivar_212;
             uint8_t ivar_229;
             ivar_229 = (uint8_t)4;
             ivar_212 = (uint32_t)ivar_2->elems[ivar_229];
             uint32_t ivar_213;
             uint32_t ivar_237;
             uint8_t ivar_235;
             ivar_235 = (uint8_t)3;
             ivar_237 = (uint32_t)ivar_2->elems[ivar_235];
             ivar_213 = (uint32_t)integertypes__u32plus((uint32_t)ivar_237, (uint32_t)ivar_81);
             uint32_t ivar_214;
             uint8_t ivar_242;
             ivar_242 = (uint8_t)2;
             ivar_214 = (uint32_t)ivar_2->elems[ivar_242];
             uint32_t ivar_215;
             uint8_t ivar_246;
             ivar_246 = (uint8_t)1;
             ivar_215 = (uint32_t)ivar_2->elems[ivar_246];
             uint32_t ivar_216;
             uint8_t ivar_250;
             ivar_250 = (uint8_t)0;
             ivar_216 = (uint32_t)ivar_2->elems[ivar_250];
             uint32_t ivar_217;
             ivar_217 = (uint32_t)integertypes__u32plus((uint32_t)ivar_81, (uint32_t)ivar_201);
             SHA256_array_3_t ivar_261;
             uint8_t ivar_258;
             ivar_258 = (uint8_t)7;
             ivar_261 = (SHA256_array_3_t)update_SHA256_array_3(ivar_2, ivar_258, ivar_210);
             SHA256_array_3_t ivar_266;
             uint8_t ivar_263;
             ivar_263 = (uint8_t)6;
             ivar_266 = (SHA256_array_3_t)update_SHA256_array_3(ivar_261, ivar_263, ivar_211);
             SHA256_array_3_t ivar_271;
             uint8_t ivar_268;
             ivar_268 = (uint8_t)5;
             ivar_271 = (SHA256_array_3_t)update_SHA256_array_3(ivar_266, ivar_268, ivar_212);
             SHA256_array_3_t ivar_276;
             uint8_t ivar_273;
             ivar_273 = (uint8_t)4;
             ivar_276 = (SHA256_array_3_t)update_SHA256_array_3(ivar_271, ivar_273, ivar_213);
             SHA256_array_3_t ivar_281;
             uint8_t ivar_278;
             ivar_278 = (uint8_t)3;
             ivar_281 = (SHA256_array_3_t)update_SHA256_array_3(ivar_276, ivar_278, ivar_214);
             SHA256_array_3_t ivar_286;
             uint8_t ivar_283;
             ivar_283 = (uint8_t)2;
             ivar_286 = (SHA256_array_3_t)update_SHA256_array_3(ivar_281, ivar_283, ivar_215);
             SHA256_array_3_t ivar_291;
             uint8_t ivar_288;
             ivar_288 = (uint8_t)1;
             ivar_291 = (SHA256_array_3_t)update_SHA256_array_3(ivar_286, ivar_288, ivar_216);
             SHA256_array_3_t ivar_296;
             uint8_t ivar_293;
             ivar_293 = (uint8_t)0;
             ivar_296 = (SHA256_array_3_t)update_SHA256_array_3(ivar_291, ivar_293, ivar_217);
             //copying to SHA256_array_3 from SHA256_array_3;
             ivar_302 = (SHA256_array_3_t)ivar_296;
             ivar_302->count++;
             release_SHA256_array_3(ivar_296);
             uint8_t ivar_303;
             uint8_t ivar_298;
             ivar_298 = (uint8_t)1;
             ivar_303 = (uint8_t)(ivar_3 + ivar_298);
             SHA256_array_3_t ivar_300;
             ivar_300 = (SHA256_array_3_t)SHA256__sha256rec((SHA256_array_3_t)ivar_1, (SHA256_array_3_t)ivar_302, (uint8_t)ivar_303);
             //copying to SHA256_array_3 from SHA256_array_3;
             result = (SHA256_array_3_t)ivar_300;
             result->count++;
             release_SHA256_array_3(ivar_300);
};

        return result;
}

extern SHA256_array_3_t SHA256__sha256(SHA256_array_3_t ivar_1, SHA256_array_3_t ivar_2){
        SHA256_array_3_t result;
        uint8_t ivar_9;
        ivar_9 = (uint8_t)0;
        SHA256_array_3_t ivar_6;
        ivar_6 = (SHA256_array_3_t)SHA256__sha256rec((SHA256_array_3_t)ivar_1, (SHA256_array_3_t)ivar_2, (uint8_t)ivar_9);
        //copying to SHA256_array_3 from SHA256_array_3;
        result = (SHA256_array_3_t)ivar_6;
        result->count++;
        release_SHA256_array_3(ivar_6);

        return result;
}

extern SHA256_record_4_t SHA256__digest(SHA256_array_3_t ivar_1){
        SHA256_record_4_t result;
        SHA256_record_4_t ivar_91;
        SHA256_record_4_t ivar_81;
        SHA256_record_4_t ivar_71;
        SHA256_record_4_t ivar_61;
        SHA256_record_4_t ivar_51;
        SHA256_record_4_t ivar_41;
        SHA256_record_4_t ivar_31;
        uint32_t ivar_22;
        uint8_t ivar_20;
        ivar_20 = (uint8_t)0;
        ivar_22 = (uint32_t)ivar_1->elems[ivar_20];
        SHA256_record_4_t ivar_21;
        ivar_21 = (SHA256_record_4_t)rotate__u32tobytestring((uint32_t)ivar_22);
        //copying to SHA256_record_4 from SHA256_record_4;
        ivar_31 = (SHA256_record_4_t)ivar_21;
        ivar_31->count++;
        release_SHA256_record_4(ivar_21);
        SHA256_record_4_t ivar_32;
        uint32_t ivar_29;
        uint8_t ivar_27;
        ivar_27 = (uint8_t)1;
        ivar_29 = (uint32_t)ivar_1->elems[ivar_27];
        SHA256_record_4_t ivar_28;
        ivar_28 = (SHA256_record_4_t)rotate__u32tobytestring((uint32_t)ivar_29);
        //copying to SHA256_record_4 from SHA256_record_4;
        ivar_32 = (SHA256_record_4_t)ivar_28;
        ivar_32->count++;
        release_SHA256_record_4(ivar_28);
        SHA256_record_4_t ivar_30;
        ivar_30 = (SHA256_record_4_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_31, (bytestrings__bytestring_t)ivar_32);
        //copying to SHA256_record_4 from SHA256_record_4;
        ivar_41 = (SHA256_record_4_t)ivar_30;
        ivar_41->count++;
        release_SHA256_record_4(ivar_30);
        SHA256_record_4_t ivar_42;
        uint32_t ivar_39;
        uint8_t ivar_37;
        ivar_37 = (uint8_t)2;
        ivar_39 = (uint32_t)ivar_1->elems[ivar_37];
        SHA256_record_4_t ivar_38;
        ivar_38 = (SHA256_record_4_t)rotate__u32tobytestring((uint32_t)ivar_39);
        //copying to SHA256_record_4 from SHA256_record_4;
        ivar_42 = (SHA256_record_4_t)ivar_38;
        ivar_42->count++;
        release_SHA256_record_4(ivar_38);
        SHA256_record_4_t ivar_40;
        ivar_40 = (SHA256_record_4_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_41, (bytestrings__bytestring_t)ivar_42);
        //copying to SHA256_record_4 from SHA256_record_4;
        ivar_51 = (SHA256_record_4_t)ivar_40;
        ivar_51->count++;
        release_SHA256_record_4(ivar_40);
        SHA256_record_4_t ivar_52;
        uint32_t ivar_49;
        uint8_t ivar_47;
        ivar_47 = (uint8_t)3;
        ivar_49 = (uint32_t)ivar_1->elems[ivar_47];
        SHA256_record_4_t ivar_48;
        ivar_48 = (SHA256_record_4_t)rotate__u32tobytestring((uint32_t)ivar_49);
        //copying to SHA256_record_4 from SHA256_record_4;
        ivar_52 = (SHA256_record_4_t)ivar_48;
        ivar_52->count++;
        release_SHA256_record_4(ivar_48);
        SHA256_record_4_t ivar_50;
        ivar_50 = (SHA256_record_4_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_51, (bytestrings__bytestring_t)ivar_52);
        //copying to SHA256_record_4 from SHA256_record_4;
        ivar_61 = (SHA256_record_4_t)ivar_50;
        ivar_61->count++;
        release_SHA256_record_4(ivar_50);
        SHA256_record_4_t ivar_62;
        uint32_t ivar_59;
        uint8_t ivar_57;
        ivar_57 = (uint8_t)4;
        ivar_59 = (uint32_t)ivar_1->elems[ivar_57];
        SHA256_record_4_t ivar_58;
        ivar_58 = (SHA256_record_4_t)rotate__u32tobytestring((uint32_t)ivar_59);
        //copying to SHA256_record_4 from SHA256_record_4;
        ivar_62 = (SHA256_record_4_t)ivar_58;
        ivar_62->count++;
        release_SHA256_record_4(ivar_58);
        SHA256_record_4_t ivar_60;
        ivar_60 = (SHA256_record_4_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_61, (bytestrings__bytestring_t)ivar_62);
        //copying to SHA256_record_4 from SHA256_record_4;
        ivar_71 = (SHA256_record_4_t)ivar_60;
        ivar_71->count++;
        release_SHA256_record_4(ivar_60);
        SHA256_record_4_t ivar_72;
        uint32_t ivar_69;
        uint8_t ivar_67;
        ivar_67 = (uint8_t)5;
        ivar_69 = (uint32_t)ivar_1->elems[ivar_67];
        SHA256_record_4_t ivar_68;
        ivar_68 = (SHA256_record_4_t)rotate__u32tobytestring((uint32_t)ivar_69);
        //copying to SHA256_record_4 from SHA256_record_4;
        ivar_72 = (SHA256_record_4_t)ivar_68;
        ivar_72->count++;
        release_SHA256_record_4(ivar_68);
        SHA256_record_4_t ivar_70;
        ivar_70 = (SHA256_record_4_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_71, (bytestrings__bytestring_t)ivar_72);
        //copying to SHA256_record_4 from SHA256_record_4;
        ivar_81 = (SHA256_record_4_t)ivar_70;
        ivar_81->count++;
        release_SHA256_record_4(ivar_70);
        SHA256_record_4_t ivar_82;
        uint32_t ivar_79;
        uint8_t ivar_77;
        ivar_77 = (uint8_t)6;
        ivar_79 = (uint32_t)ivar_1->elems[ivar_77];
        SHA256_record_4_t ivar_78;
        ivar_78 = (SHA256_record_4_t)rotate__u32tobytestring((uint32_t)ivar_79);
        //copying to SHA256_record_4 from SHA256_record_4;
        ivar_82 = (SHA256_record_4_t)ivar_78;
        ivar_82->count++;
        release_SHA256_record_4(ivar_78);
        SHA256_record_4_t ivar_80;
        ivar_80 = (SHA256_record_4_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_81, (bytestrings__bytestring_t)ivar_82);
        //copying to SHA256_record_4 from SHA256_record_4;
        ivar_91 = (SHA256_record_4_t)ivar_80;
        ivar_91->count++;
        release_SHA256_record_4(ivar_80);
        SHA256_record_4_t ivar_92;
        uint32_t ivar_89;
        uint8_t ivar_87;
        ivar_87 = (uint8_t)7;
        ivar_89 = (uint32_t)ivar_1->elems[ivar_87];
        release_SHA256_array_3(ivar_1);
        SHA256_record_4_t ivar_88;
        ivar_88 = (SHA256_record_4_t)rotate__u32tobytestring((uint32_t)ivar_89);
        //copying to SHA256_record_4 from SHA256_record_4;
        ivar_92 = (SHA256_record_4_t)ivar_88;
        ivar_92->count++;
        release_SHA256_record_4(ivar_88);
        SHA256_record_4_t ivar_90;
        ivar_90 = (SHA256_record_4_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_91, (bytestrings__bytestring_t)ivar_92);
        //copying to SHA256_record_4 from SHA256_record_4;
        result = (SHA256_record_4_t)ivar_90;
        result->count++;
        release_SHA256_record_4(ivar_90);

        return result;
}

extern SHA256_array_3_t SHA256__updateHash(SHA256_array_3_t ivar_1, SHA256_array_3_t ivar_2){
        SHA256_array_3_t result;
        /* H */ SHA256_array_3_t ivar_3;
        uint32_t ivar_4;
        uint32_t ivar_23;
        uint8_t ivar_17;
        ivar_17 = (uint8_t)0;
        ivar_23 = (uint32_t)ivar_1->elems[ivar_17];
        uint32_t ivar_24;
        uint8_t ivar_21;
        ivar_21 = (uint8_t)0;
        ivar_24 = (uint32_t)ivar_2->elems[ivar_21];
        ivar_4 = (uint32_t)integertypes__u32plus((uint32_t)ivar_23, (uint32_t)ivar_24);
        uint32_t ivar_5;
        uint32_t ivar_36;
        uint8_t ivar_30;
        ivar_30 = (uint8_t)1;
        ivar_36 = (uint32_t)ivar_1->elems[ivar_30];
        uint32_t ivar_37;
        uint8_t ivar_34;
        ivar_34 = (uint8_t)1;
        ivar_37 = (uint32_t)ivar_2->elems[ivar_34];
        ivar_5 = (uint32_t)integertypes__u32plus((uint32_t)ivar_36, (uint32_t)ivar_37);
        uint32_t ivar_6;
        uint32_t ivar_49;
        uint8_t ivar_43;
        ivar_43 = (uint8_t)2;
        ivar_49 = (uint32_t)ivar_1->elems[ivar_43];
        uint32_t ivar_50;
        uint8_t ivar_47;
        ivar_47 = (uint8_t)2;
        ivar_50 = (uint32_t)ivar_2->elems[ivar_47];
        ivar_6 = (uint32_t)integertypes__u32plus((uint32_t)ivar_49, (uint32_t)ivar_50);
        uint32_t ivar_7;
        uint32_t ivar_62;
        uint8_t ivar_56;
        ivar_56 = (uint8_t)3;
        ivar_62 = (uint32_t)ivar_1->elems[ivar_56];
        uint32_t ivar_63;
        uint8_t ivar_60;
        ivar_60 = (uint8_t)3;
        ivar_63 = (uint32_t)ivar_2->elems[ivar_60];
        ivar_7 = (uint32_t)integertypes__u32plus((uint32_t)ivar_62, (uint32_t)ivar_63);
        uint32_t ivar_8;
        uint32_t ivar_75;
        uint8_t ivar_69;
        ivar_69 = (uint8_t)4;
        ivar_75 = (uint32_t)ivar_1->elems[ivar_69];
        uint32_t ivar_76;
        uint8_t ivar_73;
        ivar_73 = (uint8_t)4;
        ivar_76 = (uint32_t)ivar_2->elems[ivar_73];
        ivar_8 = (uint32_t)integertypes__u32plus((uint32_t)ivar_75, (uint32_t)ivar_76);
        uint32_t ivar_9;
        uint32_t ivar_88;
        uint8_t ivar_82;
        ivar_82 = (uint8_t)5;
        ivar_88 = (uint32_t)ivar_1->elems[ivar_82];
        uint32_t ivar_89;
        uint8_t ivar_86;
        ivar_86 = (uint8_t)5;
        ivar_89 = (uint32_t)ivar_2->elems[ivar_86];
        ivar_9 = (uint32_t)integertypes__u32plus((uint32_t)ivar_88, (uint32_t)ivar_89);
        uint32_t ivar_10;
        uint32_t ivar_101;
        uint8_t ivar_95;
        ivar_95 = (uint8_t)6;
        ivar_101 = (uint32_t)ivar_1->elems[ivar_95];
        uint32_t ivar_102;
        uint8_t ivar_99;
        ivar_99 = (uint8_t)6;
        ivar_102 = (uint32_t)ivar_2->elems[ivar_99];
        ivar_10 = (uint32_t)integertypes__u32plus((uint32_t)ivar_101, (uint32_t)ivar_102);
        uint32_t ivar_11;
        uint32_t ivar_114;
        uint8_t ivar_108;
        ivar_108 = (uint8_t)7;
        ivar_114 = (uint32_t)ivar_1->elems[ivar_108];
        uint32_t ivar_115;
        uint8_t ivar_112;
        ivar_112 = (uint8_t)7;
        ivar_115 = (uint32_t)ivar_2->elems[ivar_112];
        release_SHA256_array_3(ivar_2);
        ivar_11 = (uint32_t)integertypes__u32plus((uint32_t)ivar_114, (uint32_t)ivar_115);
        SHA256_array_3_t ivar_121;
        uint8_t ivar_118;
        ivar_118 = (uint8_t)0;
        ivar_121 = (SHA256_array_3_t)update_SHA256_array_3(ivar_1, ivar_118, ivar_4);
        SHA256_array_3_t ivar_126;
        uint8_t ivar_123;
        ivar_123 = (uint8_t)1;
        ivar_126 = (SHA256_array_3_t)update_SHA256_array_3(ivar_121, ivar_123, ivar_5);
        SHA256_array_3_t ivar_131;
        uint8_t ivar_128;
        ivar_128 = (uint8_t)2;
        ivar_131 = (SHA256_array_3_t)update_SHA256_array_3(ivar_126, ivar_128, ivar_6);
        SHA256_array_3_t ivar_136;
        uint8_t ivar_133;
        ivar_133 = (uint8_t)3;
        ivar_136 = (SHA256_array_3_t)update_SHA256_array_3(ivar_131, ivar_133, ivar_7);
        SHA256_array_3_t ivar_141;
        uint8_t ivar_138;
        ivar_138 = (uint8_t)4;
        ivar_141 = (SHA256_array_3_t)update_SHA256_array_3(ivar_136, ivar_138, ivar_8);
        SHA256_array_3_t ivar_146;
        uint8_t ivar_143;
        ivar_143 = (uint8_t)5;
        ivar_146 = (SHA256_array_3_t)update_SHA256_array_3(ivar_141, ivar_143, ivar_9);
        SHA256_array_3_t ivar_151;
        uint8_t ivar_148;
        ivar_148 = (uint8_t)6;
        ivar_151 = (SHA256_array_3_t)update_SHA256_array_3(ivar_146, ivar_148, ivar_10);
        SHA256_array_3_t ivar_156;
        uint8_t ivar_153;
        ivar_153 = (uint8_t)7;
        ivar_156 = (SHA256_array_3_t)update_SHA256_array_3(ivar_151, ivar_153, ivar_11);
        //copying to SHA256_array_3 from SHA256_array_3;
        ivar_3 = (SHA256_array_3_t)ivar_156;
        ivar_3->count++;
        release_SHA256_array_3(ivar_156);
        //copying to SHA256_array_3 from SHA256_array_3;
        result = (SHA256_array_3_t)ivar_3;
        result->count++;
        release_SHA256_array_3(ivar_3);

        return result;
}

extern SHA256_array_3_t SHA256__sha256message_rec(SHA256_record_4_t ivar_1, uint32_t ivar_2, SHA256_array_3_t ivar_13){
        SHA256_array_3_t result;
        bool_t ivar_14;
        mpz_ptr_t ivar_16;
        mpq_ptr_t ivar_17;
        uint64_t ivar_18;
        uint32_t ivar_20;
        ivar_20 = (uint32_t)ivar_1->length;
        uint8_t ivar_21;
        ivar_21 = (uint8_t)9;
        ivar_18 = (uint64_t)(ivar_20 + ivar_21);
        uint8_t ivar_19;
        ivar_19 = (uint8_t)64;
        mpq_t tmp1442;
        mpq_init(tmp1442);
        mpq_t tmp1443;
        mpq_init(tmp1443);
        mpq_set_ui(tmp1442, (uint64_t)ivar_18, 1);
        mpq_set_ui(tmp1443, ivar_19, 1);
        mpq_mk_div(ivar_17, tmp1442, tmp1443);
        mpq_clear(tmp1442);
        mpq_clear(tmp1443);
        ivar_16 = (mpz_ptr_t)pvsceiling_q_z(ivar_17);
        int64_t tmp1444 = mpz_cmp_ui(ivar_16, ivar_2);
        ivar_14 = (tmp1444 == 0);
        if (ivar_14){ 
             release_SHA256_record_4(ivar_1);
             //copying to SHA256_array_3 from SHA256_array_3;
             result = (SHA256_array_3_t)ivar_13;
             result->count++;
             release_SHA256_array_3(ivar_13);
} else {
        
             /* w */ SHA256_array_3_t ivar_27;
             SHA256_funtype_5_t ivar_41;
             SHA256_funtype_5_t ivar_54;
             ivar_1->count++;
             ivar_54 = (SHA256_funtype_5_t)SHA256__extractBlocks((SHA256_record_4_t)ivar_1);
             //copying to SHA256_funtype_5 from SHA256_funtype_5;
             ivar_41 = (SHA256_funtype_5_t)ivar_54;
             ivar_41->count++;
             release_SHA256_funtype_5(ivar_54);
             SHA256_array_3_t ivar_29;
             ivar_29 = (SHA256_array_3_t)ivar_41->ftbl->fptr(ivar_41, ivar_2);
             ivar_41->ftbl->rptr(ivar_41);
             //copying to SHA256_array_3 from SHA256_array_3;
             ivar_27 = (SHA256_array_3_t)ivar_29;
             ivar_27->count++;
             release_SHA256_array_3(ivar_29);
             /* w64 */ SHA256_array_3_t ivar_57;
             SHA256_array_3_t ivar_59;
             ivar_59 = (SHA256_array_3_t)SHA256__w0((SHA256_array_3_t)ivar_27);
             //copying to SHA256_array_3 from SHA256_array_3;
             ivar_57 = (SHA256_array_3_t)ivar_59;
             ivar_57->count++;
             release_SHA256_array_3(ivar_59);
             /* v */ SHA256_array_3_t ivar_61;
             uint8_t ivar_66;
             ivar_66 = (uint8_t)16;
             SHA256_array_3_t ivar_64;
             ivar_64 = (SHA256_array_3_t)SHA256__extendW((SHA256_array_3_t)ivar_57, (uint8_t)ivar_66);
             //copying to SHA256_array_3 from SHA256_array_3;
             ivar_61 = (SHA256_array_3_t)ivar_64;
             ivar_61->count++;
             release_SHA256_array_3(ivar_64);
             /* G */ SHA256_array_3_t ivar_67;
             SHA256_array_3_t ivar_70;
             ivar_13->count++;
             ivar_70 = (SHA256_array_3_t)SHA256__sha256((SHA256_array_3_t)ivar_61, (SHA256_array_3_t)ivar_13);
             //copying to SHA256_array_3 from SHA256_array_3;
             ivar_67 = (SHA256_array_3_t)ivar_70;
             ivar_67->count++;
             release_SHA256_array_3(ivar_70);
             uint32_t ivar_86;
             uint8_t ivar_77;
             ivar_77 = (uint8_t)1;
             ivar_86 = (uint32_t)(ivar_2 + ivar_77);
             SHA256_array_3_t ivar_97;
             SHA256_array_3_t ivar_81;
             ivar_81 = (SHA256_array_3_t)SHA256__updateHash((SHA256_array_3_t)ivar_13, (SHA256_array_3_t)ivar_67);
             //copying to SHA256_array_3 from SHA256_array_3;
             ivar_97 = (SHA256_array_3_t)ivar_81;
             ivar_97->count++;
             release_SHA256_array_3(ivar_81);
             SHA256_array_3_t ivar_84;
             ivar_84 = (SHA256_array_3_t)SHA256__sha256message_rec((SHA256_record_4_t)ivar_1, (uint32_t)ivar_86, (SHA256_array_3_t)ivar_97);
             //copying to SHA256_array_3 from SHA256_array_3;
             result = (SHA256_array_3_t)ivar_84;
             result->count++;
             release_SHA256_array_3(ivar_84);
};

        return result;
}

extern SHA256_record_4_t SHA256__sha256message(SHA256_record_4_t ivar_1){
        SHA256_record_4_t result;
        SHA256_array_3_t ivar_25;
        uint32_t ivar_12;
        ivar_12 = (uint32_t)0;
        SHA256_array_3_t ivar_23;
        ivar_23 = new_SHA256_array_3(8);
        uint8_t ivar_7;
        for (uint32_t index1446 = 0; index1446 < 8; index1446++){
             ivar_7 = (uint8_t)index1446;
             ivar_23->elems[index1446] = (uint32_t)SHA256__h((uint8_t)ivar_7);
        };
        SHA256_array_3_t ivar_10;
        ivar_10 = (SHA256_array_3_t)SHA256__sha256message_rec((SHA256_record_4_t)ivar_1, (uint32_t)ivar_12, (SHA256_array_3_t)ivar_23);
        //copying to SHA256_array_3 from SHA256_array_3;
        ivar_25 = (SHA256_array_3_t)ivar_10;
        ivar_25->count++;
        release_SHA256_array_3(ivar_10);
        SHA256_record_4_t ivar_24;
        ivar_24 = (SHA256_record_4_t)SHA256__digest((SHA256_array_3_t)ivar_25);
        //copying to SHA256_record_4 from SHA256_record_4;
        result = (SHA256_record_4_t)ivar_24;
        result->count++;
        release_SHA256_record_4(ivar_24);

        return result;
}

extern SHA256_record_4_t SHA256__hexsha256message(SHA256_record_4_t ivar_1){
        SHA256_record_4_t result;
        SHA256_record_4_t ivar_7;
        SHA256_record_4_t ivar_4;
        ivar_4 = (SHA256_record_4_t)SHA256__hex2bytestring((bytestrings__bytestring_t)ivar_1);
        //copying to SHA256_record_4 from SHA256_record_4;
        ivar_7 = (SHA256_record_4_t)ivar_4;
        ivar_7->count++;
        release_SHA256_record_4(ivar_4);
        SHA256_record_4_t ivar_6;
        ivar_6 = (SHA256_record_4_t)SHA256__sha256message((SHA256_record_4_t)ivar_7);
        //copying to SHA256_record_4 from SHA256_record_4;
        result = (SHA256_record_4_t)ivar_6;
        result->count++;
        release_SHA256_record_4(ivar_6);

        return result;
}