//Code generated using pvs2ir2c
#include "charstrings_c.h"


charstrings_array_0_t new_charstrings_array_0(uint32_t size){
        charstrings_array_0_t tmp = (charstrings_array_0_t) safe_malloc(sizeof(struct charstrings_array_0_s) + (size * sizeof(uint32_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_charstrings_array_0(charstrings_array_0_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_charstrings_array_0_ptr(pointer_t x, type_actual_t T){
        release_charstrings_array_0((charstrings_array_0_t)x);
}

charstrings_array_0_t copy_charstrings_array_0(charstrings_array_0_t x){
        charstrings_array_0_t tmp = new_charstrings_array_0(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint32_t)x->elems[i];};
         return tmp;}

bool_t equal_charstrings_array_0(charstrings_array_0_t x, charstrings_array_0_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] = y->elems[i]); i++;};
        return tmp;}

bool_t equal_charstrings_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_charstrings_array_0((charstrings_array_0_t)x, (charstrings_array_0_t)y);
}

actual_charstrings_array_0_t actual_charstrings_array_0(){
        actual_charstrings_array_0_t new = (actual_charstrings_array_0_t)safe_malloc(sizeof(struct actual_charstrings_array_0_s));
        new->equal_ptr = (equal_ptr_t)(*equal_charstrings_array_0_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_charstrings_array_0_ptr);
 

 
        return new;
 };

charstrings_array_0_t update_charstrings_array_0(charstrings_array_0_t x, uint32_t i, uint32_t v){
        charstrings_array_0_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_charstrings_array_0(x );
                x->count--;};
        y->elems[i] = (uint32_t)v;
        return y;}

charstrings_array_0_t upgrade_charstrings_array_0(charstrings_array_0_t x, uint32_t i, uint32_t v){
        charstrings_array_0_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_malloc(sizeof(struct charstrings_array_0_s) + (newmax * sizeof(uint32_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_charstrings_array_0(x);}
           else {y = copy_charstrings_array_0(x );
                x->count--;};
        y->elems[i] = (uint32_t)v;
        return y;}




charstrings__charstring_t new_charstrings__charstring(void){
        charstrings__charstring_t tmp = (charstrings__charstring_t) safe_malloc(sizeof(struct charstrings__charstring_s));
        tmp->count = 1;
        return tmp;}

void release_charstrings__charstring(charstrings__charstring_t x){
        x->count--;
        if (x->count <= 0){
         release_charstrings_array_0(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_charstrings__charstring_ptr(pointer_t x, type_actual_t T){
        release_charstrings__charstring((charstrings__charstring_t)x);
}

charstrings__charstring_t copy_charstrings__charstring(charstrings__charstring_t x){
        charstrings__charstring_t y = new_charstrings__charstring();
        y->length = (uint32_t)x->length;
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_charstrings__charstring(charstrings__charstring_t x, charstrings__charstring_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_charstrings_array_0(x->seq, y->seq);
        return tmp;}

bool_t equal_charstrings__charstring_ptr(pointer_t x, pointer_t y, actual_charstrings__charstring_t T){
        return equal_charstrings__charstring((charstrings__charstring_t)x, (charstrings__charstring_t)y);
}

actual_charstrings__charstring_t actual_charstrings__charstring(){
        actual_charstrings__charstring_t new = (actual_charstrings__charstring_t)safe_malloc(sizeof(struct actual_charstrings__charstring_s));
        new->equal_ptr = (equal_ptr_t)(*equal_charstrings__charstring_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_charstrings__charstring_ptr);
 

 
        return new;
 };

charstrings__charstring_t update_charstrings__charstring_length(charstrings__charstring_t x, uint32_t v){
        charstrings__charstring_t y;
        if (x->count == 1){y = x;}
        else {y = copy_charstrings__charstring(x); x->count--;};
        y->length = (uint32_t)v;
        return y;}

charstrings__charstring_t update_charstrings__charstring_seq(charstrings__charstring_t x, charstrings_array_0_t v){
        charstrings__charstring_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_charstrings_array_0(x->seq);};}
        else {y = copy_charstrings__charstring(x); x->count--; y->seq->count--;};
        y->seq = (charstrings_array_0_t)v;
        return y;}



void release_charstrings_funtype_2(charstrings_funtype_2_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

charstrings_funtype_2_t copy_charstrings_funtype_2(charstrings_funtype_2_t x){return x->ftbl->cptr(x);}

uint32_t lookup_charstrings_funtype_2(charstrings_funtype_2_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; charstrings_funtype_2_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp22202 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp22202 == 0);
        bool_t keymatch;
        int64_t tmp22203 = mpz_cmp(data.key, i);
        keymatch = (tmp22203 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp22202 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp22202 == 0);

        int64_t tmp22203 = mpz_cmp(data.key, i);
        keymatch = (tmp22203 == 0);
                }
        return hashindex;
        }

charstrings_funtype_2_t dupdate_charstrings_funtype_2(charstrings_funtype_2_t a, mpz_ptr_t i, uint32_t v){
        charstrings_funtype_2_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (charstrings_funtype_2_htbl_t)safe_malloc(sizeof(struct charstrings_funtype_2_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (charstrings_funtype_2_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct charstrings_funtype_2_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        charstrings_funtype_2_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                charstrings_funtype_2_hashentry_t * new_data = (charstrings_funtype_2_hashentry_t *)safe_malloc(new_size * sizeof(struct charstrings_funtype_2_hashentry_s));
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp22204 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp22204 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp22205 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp22205 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp22206 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp22206 == 0);
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
        uint32_t hashindex = lookup_charstrings_funtype_2(htbl, i, ihash);
        charstrings_funtype_2_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp22207 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp22207 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;tempvalue = (uint32_t)v;};
        return a;

}

charstrings_funtype_2_t update_charstrings_funtype_2(charstrings_funtype_2_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_charstrings_funtype_2(a, i, v);
            } else {
                charstrings_funtype_2_t x = copy_charstrings_funtype_2(a);
                x->count--;
                return dupdate_charstrings_funtype_2(x, i, v);
            }}

bool_t equal_charstrings_funtype_2(charstrings_funtype_2_t x, charstrings_funtype_2_t y){
        return false;}


charstrings_record_3_t new_charstrings_record_3(void){
        charstrings_record_3_t tmp = (charstrings_record_3_t) safe_malloc(sizeof(struct charstrings_record_3_s));
        tmp->count = 1;
        return tmp;}

void release_charstrings_record_3(charstrings_record_3_t x){
        x->count--;
        if (x->count <= 0){
         release_charstrings_funtype_2(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_charstrings_record_3_ptr(pointer_t x, type_actual_t T){
        release_charstrings_record_3((charstrings_record_3_t)x);
}

charstrings_record_3_t copy_charstrings_record_3(charstrings_record_3_t x){
        charstrings_record_3_t y = new_charstrings_record_3();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_charstrings_record_3(charstrings_record_3_t x, charstrings_record_3_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_charstrings_funtype_2(x->seq, y->seq);
        return tmp;}

bool_t equal_charstrings_record_3_ptr(pointer_t x, pointer_t y, actual_charstrings_record_3_t T){
        return equal_charstrings_record_3((charstrings_record_3_t)x, (charstrings_record_3_t)y);
}

actual_charstrings_record_3_t actual_charstrings_record_3(){
        actual_charstrings_record_3_t new = (actual_charstrings_record_3_t)safe_malloc(sizeof(struct actual_charstrings_record_3_s));
        new->equal_ptr = (equal_ptr_t)(*equal_charstrings_record_3_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_charstrings_record_3_ptr);
 

 
        return new;
 };

charstrings_record_3_t update_charstrings_record_3_length(charstrings_record_3_t x, mpz_ptr_t v){
        charstrings_record_3_t y;
        if (x->count == 1){y = x;}
        else {y = copy_charstrings_record_3(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

charstrings_record_3_t update_charstrings_record_3_seq(charstrings_record_3_t x, charstrings_funtype_2_t v){
        charstrings_record_3_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_charstrings_funtype_2(x->seq);};}
        else {y = copy_charstrings_record_3(x); x->count--; y->seq->count--;};
        y->seq = (charstrings_funtype_2_t)v;
        return y;}



extern mpz_ptr_t charstrings__charstring_bound(void){
        mpz_ptr_t result;
        result = safe_malloc(sizeof(mpz_t));
        mpz_init(result);
        mpz_mk_set_ui(result, 268435456);

        return result;
}

extern uint32_t charstrings__length(charstrings__charstring_t ivar_1){
        uint32_t result;
        result = (uint32_t)ivar_1->length;
        release_charstrings__charstring(ivar_1);

        return result;
}

extern uint32_t charstrings__cget(charstrings__charstring_t ivar_1, uint32_t ivar_2){
        uint32_t result;
        charstrings_array_0_t ivar_7;
        ivar_7 = (charstrings_array_0_t)ivar_1->seq;
        ivar_7->count++;
        release_charstrings__charstring(ivar_1);
        uint32_t ivar_5;
        ivar_5 = (uint32_t)ivar_7->elems[ivar_2];
        release_charstrings_array_0(ivar_7);
        //copying to uint32 from uint32;
        result = (uint32_t)ivar_5;

        return result;
}

extern charstrings__charstring_t charstrings__null(void){
        charstrings__charstring_t result;
        uint32_t ivar_1;
        ivar_1 = (uint32_t)0;
        charstrings_array_0_t ivar_7;
        uint32_t size22194;
        //copying to uint32 from uint32;
        size22194 = (uint32_t)ivar_1;
        size22194 += 0;
        ivar_7 = new_charstrings_array_0(size22194);
        uint8_t ivar_4;
        for (uint32_t index22193 = 0; index22193 < size22194; index22193++){
             ivar_4 = (uint8_t)index22193;
             uint8_t ivar_5;
             ivar_5 = (uint8_t)0;
             ivar_7->elems[index22193] = (uint32_t) ivar_5;
        };
        result = (charstrings__charstring_t)new_charstrings__charstring();;
        result->length = (uint32_t)ivar_1;
        result->seq = (charstrings_array_0_t)ivar_7;

        return result;
}

extern charstrings__charstring_t charstrings__addchar(uint32_t ivar_1, charstrings__charstring_t ivar_2){
        charstrings__charstring_t result;
        mpz_ptr_t ivar_23;
        uint32_t ivar_3;
        ivar_3 = (uint32_t)ivar_2->length;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)1;
        mpz_mk_set_ui(ivar_23, (uint64_t)ivar_3);
        mpz_add_ui(ivar_23, ivar_23, (uint64_t)ivar_4);
        uint32_t ivar_7;
        //copying to uint32 from mpz;
        ivar_7 = (uint32_t)mpz_get_ui(ivar_23);
        mpz_clear(ivar_23);
        charstrings_array_0_t ivar_22;
        mpz_t ivar_10;
        mpz_init(ivar_10);
        uint32_t size22208;
        //copying to uint32 from uint32;
        size22208 = (uint32_t)ivar_7;
        size22208 += 0;
        ivar_22 = new_charstrings_array_0(size22208);
        for (uint32_t index22200 = 0; index22200 < size22208; index22200++){
             mpz_t ivar_10;
             mpz_init(ivar_10);
             mpz_set_ui(ivar_10, index22200);
             bool_t ivar_11;
             mpz_ptr_t ivar_12;
             ivar_12 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_12);
             //copying to mpz from mpz;
             mpz_mk_set(ivar_12, ivar_10);
             uint32_t ivar_13;
             ivar_13 = (uint32_t)ivar_2->length;
             int64_t tmp22201 = mpz_cmp_ui(ivar_12, ivar_13);
             ivar_11 = (tmp22201 == 0);
             if (ivar_11){  
           //copying to uint32 from uint32;
           ivar_22->elems[index22200] = (uint32_t)ivar_1;
} else {
             
           strings__string_t ivar_19;
           //copying to strings__string from charstrings__charstring;
           ivar_19 = new_charstrings_record_3();
           mpz_init(ivar_19->length);
           mpz_set_ui(ivar_19->length, ivar_2->length);
           ivar_19->seq = (charstrings_funtype_2_t)ivar_2->seq;
           ivar_19->seq->count++;
           mpz_ptr_t ivar_20;
           //copying to mpz from mpz;
           mpz_mk_set(ivar_20, ivar_10);
           mpz_clear(ivar_10);
           uint32_t ivar_18;
           ivar_18 = (uint32_t)gen_strings__get((strings__string_t)ivar_19, (mpz_ptr_t)ivar_20);
           //copying to uint32 from uint32;
           ivar_22->elems[index22200] = (uint32_t)ivar_18;
};
        };
        release_charstrings__charstring(ivar_2);
        result = (charstrings__charstring_t)new_charstrings__charstring();;
        result->length = (uint32_t)ivar_7;
        result->seq = (charstrings_array_0_t)ivar_22;

        return result;
}

extern charstrings__charstring_t charstrings__unit(uint32_t ivar_1){
        charstrings__charstring_t result;
        uint32_t ivar_2;
        ivar_2 = (uint32_t)1;
        charstrings_array_0_t ivar_6;
        uint32_t size22211;
        //copying to uint32 from uint32;
        size22211 = (uint32_t)ivar_2;
        size22211 += 0;
        ivar_6 = new_charstrings_array_0(size22211);
        uint8_t ivar_5;
        for (uint32_t index22210 = 0; index22210 < size22211; index22210++){
             ivar_5 = (uint8_t)index22210;
             //copying to uint32 from uint32;
             ivar_6->elems[index22210] = (uint32_t)ivar_1;
        };
        result = (charstrings__charstring_t)new_charstrings__charstring();;
        result->length = (uint32_t)ivar_2;
        result->seq = (charstrings_array_0_t)ivar_6;

        return result;
}

extern charstrings__charstring_t charstrings__mk_charstring(strings__string_t ivar_1){
        charstrings__charstring_t result;
        mpz_ptr_t ivar_17;
        strings__string_t ivar_2;
        //copying to strings__string from strings__string;
        ivar_2 = (strings__string_t)ivar_1;
        ivar_2->count++;
        ivar_17 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_17);
        mpz_set(ivar_17, ivar_2->length);
        release_strings__string(ivar_2);
        uint32_t ivar_3;
        //copying to uint32 from mpz;
        ivar_3 = (uint32_t)mpz_get_ui(ivar_17);
        mpz_clear(ivar_17);
        charstrings_array_0_t ivar_16;
        mpz_t ivar_8;
        mpz_init(ivar_8);
        uint32_t size22218;
        //copying to uint32 from uint32;
        size22218 = (uint32_t)ivar_3;
        size22218 += 0;
        ivar_16 = new_charstrings_array_0(size22218);
        for (uint32_t index22217 = 0; index22217 < size22218; index22217++){
             mpz_t ivar_8;
             mpz_init(ivar_8);
             mpz_set_ui(ivar_8, index22217);
             strings__string_t ivar_13;
             //copying to strings__string from strings__string;
             ivar_13 = (strings__string_t)ivar_1;
             ivar_13->count++;
             mpz_ptr_t ivar_14;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_14, ivar_8);
             mpz_clear(ivar_8);
             uint32_t ivar_12;
             ivar_12 = (uint32_t)gen_strings__get((strings__string_t)ivar_13, (mpz_ptr_t)ivar_14);
             //copying to uint32 from uint32;
             ivar_16->elems[index22217] = (uint32_t)ivar_12;
        };
        release_strings__string(ivar_1);
        result = (charstrings__charstring_t)new_charstrings__charstring();;
        result->length = (uint32_t)ivar_3;
        result->seq = (charstrings_array_0_t)ivar_16;

        return result;
}

extern charstrings__charstring_t charstrings__doubleplus(charstrings__charstring_t ivar_1, charstrings__charstring_t ivar_2){
        charstrings__charstring_t result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->length;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             release_charstrings__charstring(ivar_1);
             //copying to charstrings__charstring from charstrings__charstring;
             result = (charstrings__charstring_t)ivar_2;
             result->count++;
             release_charstrings__charstring(ivar_2);
} else {
        
             bool_t ivar_8;
             uint32_t ivar_9;
             ivar_9 = (uint32_t)ivar_2->length;
             uint8_t ivar_10;
             ivar_10 = (uint8_t)0;
             ivar_8 = (ivar_9 == ivar_10);
             if (ivar_8){  
           release_charstrings__charstring(ivar_2);
           //copying to charstrings__charstring from charstrings__charstring;
           result = (charstrings__charstring_t)ivar_1;
           result->count++;
           release_charstrings__charstring(ivar_1);
} else {
             
           /* n */ uint32_t ivar_13;
           uint32_t ivar_14;
           ivar_14 = (uint32_t)ivar_1->length;
           uint32_t ivar_15;
           ivar_15 = (uint32_t)ivar_2->length;
           ivar_13 = (uint32_t)(ivar_14 + ivar_15);
           charstrings_array_0_t ivar_44;
           uint32_t size22226;
           //copying to uint32 from uint32;
           size22226 = (uint32_t)ivar_13;
           size22226 += 0;
           ivar_44 = new_charstrings_array_0(size22226);
           uint32_t ivar_22;
           for (uint32_t index22225 = 0; index22225 < size22226; index22225++){
           ivar_22 = (uint32_t)index22225;
           bool_t ivar_23;
           uint32_t ivar_25;
           ivar_25 = (uint32_t)ivar_1->length;
           ivar_23 = (ivar_22 < ivar_25);
           if (ivar_23){    
            uint32_t ivar_30;
            ivar_1->count++;
            ivar_30 = (uint32_t)charstrings__cget((charstrings__charstring_t)ivar_1, (uint32_t)ivar_22);
            //copying to uint32 from uint32;
            ivar_44->elems[index22225] = (uint32_t)ivar_30;
} else {
           
            uint32_t ivar_42;
            uint32_t ivar_37;
            ivar_37 = (uint32_t)ivar_1->length;
            ivar_42 = (uint32_t)(ivar_22 - ivar_37);
            uint32_t ivar_40;
            ivar_2->count++;
            ivar_40 = (uint32_t)charstrings__cget((charstrings__charstring_t)ivar_2, (uint32_t)ivar_42);
            //copying to uint32 from uint32;
            ivar_44->elems[index22225] = (uint32_t)ivar_40;
};
           };
           release_charstrings__charstring(ivar_1);
           release_charstrings__charstring(ivar_2);
           result = (charstrings__charstring_t)new_charstrings__charstring();;
           result->length = (uint32_t)ivar_13;
           result->seq = (charstrings_array_0_t)ivar_44;
};
};

        return result;
}

extern mpz_ptr_t charstrings__strdiff_rec(charstrings__charstring_t ivar_1, charstrings__charstring_t ivar_2, mpz_ptr_t ivar_3){
        mpz_ptr_t result;
        bool_t ivar_4;
        bool_t ivar_5;
        mpz_ptr_t ivar_7;
        ivar_7 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_7);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_7, ivar_3);
        uint32_t ivar_8;
        ivar_8 = (uint32_t)ivar_1->length;
        int64_t tmp22237 = mpz_cmp_ui(ivar_7, ivar_8);
        ivar_5 = (tmp22237 == 0);
        bool_t ivar_6;
        bool_t ivar_11;
        mpz_ptr_t ivar_13;
        ivar_13 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_13);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_13, ivar_3);
        uint32_t ivar_14;
        ivar_14 = (uint32_t)ivar_2->length;
        int64_t tmp22238 = mpz_cmp_ui(ivar_13, ivar_14);
        ivar_11 = (tmp22238 == 0);
        bool_t ivar_12;
        uint32_t ivar_17;
        uint32_t ivar_23;
        //copying to uint32 from mpz;
        ivar_23 = (uint32_t)mpz_get_ui(ivar_3);
        uint32_t ivar_21;
        ivar_1->count++;
        ivar_21 = (uint32_t)charstrings__cget((charstrings__charstring_t)ivar_1, (uint32_t)ivar_23);
        //copying to uint32 from uint32;
        ivar_17 = (uint32_t)ivar_21;
        uint32_t ivar_18;
        uint32_t ivar_29;
        //copying to uint32 from mpz;
        ivar_29 = (uint32_t)mpz_get_ui(ivar_3);
        uint32_t ivar_27;
        ivar_2->count++;
        ivar_27 = (uint32_t)charstrings__cget((charstrings__charstring_t)ivar_2, (uint32_t)ivar_29);
        //copying to uint32 from uint32;
        ivar_18 = (uint32_t)ivar_27;
        ivar_12 = (ivar_17 != ivar_18);
        ivar_6 = ivar_11 || ivar_12;
        ivar_4 = ivar_5 || ivar_6;
        if (ivar_4){ 
             release_charstrings__charstring(ivar_2);
             release_charstrings__charstring(ivar_1);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_3);
             mpz_clear(ivar_3);
} else {
        
             mpz_ptr_t ivar_45;
             mpz_ptr_t ivar_37;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_37, ivar_3);
             mpz_clear(ivar_3);
             uint8_t ivar_38;
             ivar_38 = (uint8_t)1;
             mpz_mk_set_ui(ivar_45, (uint64_t)ivar_38);
             mpz_add(ivar_45, ivar_45, ivar_37);
             mpz_ptr_t ivar_43;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_43, ivar_45);
             mpz_clear(ivar_45);
             result = (mpz_ptr_t)charstrings__strdiff_rec((charstrings__charstring_t)ivar_1, (charstrings__charstring_t)ivar_2, ivar_43);
};

        return result;
}

extern mpz_ptr_t charstrings__strdiff(charstrings__charstring_t ivar_1, charstrings__charstring_t ivar_2){
        mpz_ptr_t result;
        uint8_t ivar_11;
        ivar_11 = (uint8_t)0;
        mpz_ptr_t ivar_9;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_9, ivar_11);
        result = (mpz_ptr_t)charstrings__strdiff_rec((charstrings__charstring_t)ivar_1, (charstrings__charstring_t)ivar_2, (mpz_ptr_t)ivar_9);

        return result;
}

extern int8_t charstrings__strcmp(charstrings__charstring_t ivar_1, charstrings__charstring_t ivar_2){
        int8_t result;
        /* i */ mpz_ptr_t ivar_3;
        ivar_1->count++;
        ivar_2->count++;
        ivar_3 = (mpz_ptr_t)charstrings__strdiff((charstrings__charstring_t)ivar_1, (charstrings__charstring_t)ivar_2);
        bool_t ivar_9;
        mpz_ptr_t ivar_10;
        ivar_10 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_10);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_10, ivar_3);
        mpq_ptr_t ivar_11;
        uint32_t ivar_22;
        ivar_22 = (uint32_t)ivar_1->length;
        mpq_ptr_t ivar_17;
        //copying to mpq from uint32;
        mpq_mk_set_ui(ivar_17, ivar_22);
        uint32_t ivar_21;
        ivar_21 = (uint32_t)ivar_2->length;
        mpq_ptr_t ivar_18;
        //copying to mpq from uint32;
        mpq_mk_set_ui(ivar_18, ivar_21);
        ivar_11 = (mpq_ptr_t)real_defs__min((mpq_ptr_t)ivar_17, (mpq_ptr_t)ivar_18);
        int64_t tmp22253 = mpq_cmp_z(ivar_11, ivar_10);
        ivar_9 = (tmp22253 == 0);
        if (ivar_9){ 
             bool_t ivar_24;
             uint32_t ivar_25;
             ivar_25 = (uint32_t)ivar_1->length;
             uint32_t ivar_26;
             ivar_26 = (uint32_t)ivar_2->length;
             ivar_24 = (ivar_25 < ivar_26);
             if (ivar_24){  
           release_charstrings__charstring(ivar_2);
           release_charstrings__charstring(ivar_1);
           result = (int8_t)-1;
} else {
             
           bool_t ivar_30;
           uint32_t ivar_31;
           ivar_31 = (uint32_t)ivar_1->length;
           release_charstrings__charstring(ivar_1);
           uint32_t ivar_32;
           ivar_32 = (uint32_t)ivar_2->length;
           release_charstrings__charstring(ivar_2);
           ivar_30 = (ivar_31 > ivar_32);
           if (ivar_30){   
           result = (int8_t)1;
} else {
           
           result = (int8_t)0;
};
};
} else {
        
             bool_t ivar_36;
             uint32_t ivar_37;
             uint32_t ivar_39;
             uint32_t ivar_44;
             //copying to uint32 from mpz;
             ivar_44 = (uint32_t)mpz_get_ui(ivar_3);
             uint32_t ivar_42;
             ivar_42 = (uint32_t)charstrings__cget((charstrings__charstring_t)ivar_1, (uint32_t)ivar_44);
             //copying to uint32 from uint32;
             ivar_39 = (uint32_t)ivar_42;
             ivar_37 = (uint32_t) ivar_39;
             uint32_t ivar_38;
             uint32_t ivar_47;
             uint32_t ivar_52;
             //copying to uint32 from mpz;
             ivar_52 = (uint32_t)mpz_get_ui(ivar_3);
             mpz_clear(ivar_3);
             uint32_t ivar_50;
             ivar_50 = (uint32_t)charstrings__cget((charstrings__charstring_t)ivar_2, (uint32_t)ivar_52);
             //copying to uint32 from uint32;
             ivar_47 = (uint32_t)ivar_50;
             ivar_38 = (uint32_t) ivar_47;
             ivar_36 = (ivar_37 < ivar_38);
             if (ivar_36){  
           result = (int8_t)-1;
} else {
             
           result = (int8_t)1;
};
};

        return result;
}

extern charstrings__charstring_t charstrings__prefix(charstrings__charstring_t ivar_1, uint32_t ivar_2){
        charstrings__charstring_t result;
        bool_t ivar_4;
        uint32_t ivar_6;
        ivar_6 = (uint32_t)ivar_1->length;
        ivar_4 = (ivar_2 == ivar_6);
        if (ivar_4){ 
             //copying to charstrings__charstring from charstrings__charstring;
             result = (charstrings__charstring_t)ivar_1;
             result->count++;
             release_charstrings__charstring(ivar_1);
} else {
        
             charstrings_array_0_t ivar_22;
             uint32_t size22264;
             //copying to uint32 from uint32;
             size22264 = (uint32_t)ivar_2;
             size22264 += 0;
             ivar_22 = new_charstrings_array_0(size22264);
             uint32_t ivar_14;
             for (uint32_t index22263 = 0; index22263 < size22264; index22263++){
           ivar_14 = (uint32_t)index22263;
           uint32_t ivar_18;
           ivar_1->count++;
           ivar_18 = (uint32_t)charstrings__cget((charstrings__charstring_t)ivar_1, (uint32_t)ivar_14);
           //copying to uint32 from uint32;
           ivar_22->elems[index22263] = (uint32_t)ivar_18;
             };
             release_charstrings__charstring(ivar_1);
             result = (charstrings__charstring_t)new_charstrings__charstring();;
             result->length = (uint32_t)ivar_2;
             result->seq = (charstrings_array_0_t)ivar_22;
};

        return result;
}

extern charstrings__charstring_t charstrings__suffix(charstrings__charstring_t ivar_1, uint32_t ivar_2){
        charstrings__charstring_t result;
        bool_t ivar_4;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)0;
        ivar_4 = (ivar_2 == ivar_6);
        if (ivar_4){ 
             //copying to charstrings__charstring from charstrings__charstring;
             result = (charstrings__charstring_t)ivar_1;
             result->count++;
             release_charstrings__charstring(ivar_1);
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
             charstrings_array_0_t ivar_27;
             mpz_t ivar_15;
             mpz_init(ivar_15);
             uint32_t size22275;
             //copying to uint32 from uint32;
             size22275 = (uint32_t)ivar_12;
             size22275 += 0;
             ivar_27 = new_charstrings_array_0(size22275);
             for (uint32_t index22274 = 0; index22274 < size22275; index22274++){
           mpz_t ivar_15;
           mpz_init(ivar_15);
           mpz_set_ui(ivar_15, index22274);
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
           uint32_t ivar_21;
           ivar_1->count++;
           ivar_21 = (uint32_t)charstrings__cget((charstrings__charstring_t)ivar_1, (uint32_t)ivar_23);
           //copying to uint32 from uint32;
           ivar_27->elems[index22274] = (uint32_t)ivar_21;
             };
             release_charstrings__charstring(ivar_1);
             result = (charstrings__charstring_t)new_charstrings__charstring();;
             result->length = (uint32_t)ivar_12;
             result->seq = (charstrings_array_0_t)ivar_27;
};

        return result;
}

extern charstrings__charstring_t charstrings__substr(charstrings__charstring_t ivar_1, uint32_t ivar_2, uint32_t ivar_4){
        charstrings__charstring_t result;
        charstrings__charstring_t ivar_18;
        charstrings__charstring_t ivar_10;
        ivar_10 = (charstrings__charstring_t)charstrings__suffix((charstrings__charstring_t)ivar_1, (uint32_t)ivar_2);
        //copying to charstrings__charstring from charstrings__charstring;
        ivar_18 = (charstrings__charstring_t)ivar_10;
        ivar_18->count++;
        release_charstrings__charstring(ivar_10);
        uint32_t ivar_19;
        ivar_19 = (uint32_t)(ivar_4 - ivar_2);
        charstrings__charstring_t ivar_17;
        ivar_17 = (charstrings__charstring_t)charstrings__prefix((charstrings__charstring_t)ivar_18, (uint32_t)ivar_19);
        //copying to charstrings__charstring from charstrings__charstring;
        result = (charstrings__charstring_t)ivar_17;
        result->count++;
        release_charstrings__charstring(ivar_17);

        return result;
}

extern bool_t charstrings__ascii_charstringp(charstrings__charstring_t ivar_1){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}