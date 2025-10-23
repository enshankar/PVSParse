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
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_charstrings_array_0(charstrings_array_0_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint32(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_charstrings_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_charstrings_array_0((charstrings_array_0_t)x, (charstrings_array_0_t)y);
}

char * json_charstrings_array_0_ptr(pointer_t x, type_actual_t T){
        return json_charstrings_array_0((charstrings_array_0_t)x);
}

actual_charstrings_array_0_t actual_charstrings_array_0(){
        actual_charstrings_array_0_t new = (actual_charstrings_array_0_t)safe_malloc(sizeof(struct actual_charstrings_array_0_s));
        new->equal_ptr = (equal_ptr_t)(*equal_charstrings_array_0_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_charstrings_array_0_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_charstrings_array_0_ptr);
 

 
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
                y = safe_realloc(x, sizeof(struct charstrings_array_0_s) + (newmax * sizeof(uint32_t)));
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

char * json_charstrings__charstring(charstrings__charstring_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(18);
         sprintf(fld0, "\"length\" : ");
        tmp[0] = safe_strcat(fld0, json_uint32(x->length));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"seq\" : ");
        tmp[1] = safe_strcat(fld1, json_charstrings_array_0(x->seq));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_charstrings__charstring_ptr(pointer_t x, pointer_t y, actual_charstrings__charstring_t T){
        return equal_charstrings__charstring((charstrings__charstring_t)x, (charstrings__charstring_t)y);
}

char * json_charstrings__charstring_ptr(pointer_t x, actual_charstrings__charstring_t T){
        return json_charstrings__charstring((charstrings__charstring_t)x);
}

actual_charstrings__charstring_t actual_charstrings__charstring(){
        actual_charstrings__charstring_t new = (actual_charstrings__charstring_t)safe_malloc(sizeof(struct actual_charstrings__charstring_s));
        new->equal_ptr = (equal_ptr_t)(*equal_charstrings__charstring_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_charstrings__charstring_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_charstrings__charstring_ptr);
 

 
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
        uint32_t hashindex = ihash & mask;
        charstrings_funtype_2_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp2206 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp2206 == 0);
        bool_t keymatch;
        int64_t tmp2207 = mpz_cmp(data.key, i);
        keymatch = (tmp2207 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                int64_t tmp2206 = mpz_cmp_ui(data.key, 0);
                keyzero = (tmp2206 == 0);

                int64_t tmp2207 = mpz_cmp(data.key, i);
                keymatch = (tmp2207 == 0);
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
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp2208 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp2208 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp2209 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp2209 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp2210 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp2210 == 0);
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
        int64_t tmp2211 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp2211 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v; htbl->num_entries++;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint32_t)v;};
        return a;

}

charstrings_funtype_2_t update_charstrings_funtype_2(charstrings_funtype_2_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_charstrings_funtype_2(a, i, v);
            } else {
                charstrings_funtype_2_t x = copy_charstrings_funtype_2(a);
                a->count--;
                return dupdate_charstrings_funtype_2(x, i, v);
            }}

bool_t equal_charstrings_funtype_2(charstrings_funtype_2_t x, charstrings_funtype_2_t y){
        return false;}

char* json_charstrings_funtype_2(charstrings_funtype_2_t x){char * result = safe_malloc(31); sprintf(result, "%s", "\"charstrings_funtype_2\""); return result;}


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
        bool_t tmp = true;tmp = tmp && (mpz_cmp(x->length, y->length) == 0);
        tmp = tmp && equal_charstrings_funtype_2(x->seq, y->seq);
        return tmp;}

char * json_charstrings_record_3(charstrings_record_3_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(18);
         sprintf(fld0, "\"length\" : ");
        tmp[0] = safe_strcat(fld0, json_mpz(x->length));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"seq\" : ");
        tmp[1] = safe_strcat(fld1, json_charstrings_funtype_2(x->seq));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_charstrings_record_3_ptr(pointer_t x, pointer_t y, actual_charstrings_record_3_t T){
        return equal_charstrings_record_3((charstrings_record_3_t)x, (charstrings_record_3_t)y);
}

char * json_charstrings_record_3_ptr(pointer_t x, actual_charstrings_record_3_t T){
        return json_charstrings_record_3((charstrings_record_3_t)x);
}

actual_charstrings_record_3_t actual_charstrings_record_3(){
        actual_charstrings_record_3_t new = (actual_charstrings_record_3_t)safe_malloc(sizeof(struct actual_charstrings_record_3_s));
        new->equal_ptr = (equal_ptr_t)(*equal_charstrings_record_3_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_charstrings_record_3_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_charstrings_record_3_ptr);
 

 
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



uint32_t charstrings__charstring_bound(void){
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

uint32_t charstrings__length(charstrings__charstring_t ivar_1){
        uint32_t  result;
        result = (uint32_t)ivar_1->length;
        release_charstrings__charstring(ivar_1);

        
        return result;
}

uint32_t charstrings__cget(charstrings__charstring_t ivar_1, uint32_t ivar_2){
        uint32_t  result;
        charstrings_array_0_t ivar_7;
        ivar_7 = (charstrings_array_0_t)ivar_1->seq;
        ivar_7->count++;
        result = (uint32_t)ivar_7->elems[ivar_2];
        release_charstrings_array_0(ivar_7);

        
        return result;
}

charstrings__charstring_t charstrings__null(void){
        charstrings__charstring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_8;
        ivar_8 = (uint8_t)0;
        uint32_t ivar_1;
        //copying to uint32 from uint8;
        ivar_1 = (uint32_t)ivar_8;
        charstrings_array_0_t ivar_7;
        uint32_t size2195;
        //copying to uint32 from uint32;
        size2195 = (uint32_t)ivar_1;
        size2195 += 0;
        ivar_7 = new_charstrings_array_0(size2195);
        uint8_t ivar_4;
        for (uint32_t index2194 = 0; index2194 < size2195; index2194++){
             ivar_4 = (uint8_t)index2194;
             uint8_t ivar_5;
             ivar_5 = (uint8_t)0;
             ivar_7->elems[index2194] = (uint32_t) ivar_5;
        };
        charstrings__charstring_t tmp2196 = new_charstrings__charstring();;
        result = (charstrings__charstring_t)tmp2196;
        tmp2196->length = (uint32_t)ivar_1;
        tmp2196->seq = (charstrings_array_0_t)ivar_7;

        defined = true;};
        
        return result;
}

charstrings__charstring_t charstrings__addchar(uint32_t ivar_1, charstrings__charstring_t ivar_2){
        charstrings__charstring_t  result;
        mpz_ptr_t ivar_35;
        uint32_t ivar_3;
        ivar_3 = (uint32_t)ivar_2->length;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)1;
        mpz_mk_set_ui(ivar_35, (uint64_t)ivar_3);
        mpz_add_ui(ivar_35, ivar_35, (uint64_t)ivar_4);
        uint32_t ivar_7;
        //copying to uint32 from mpz;
        ivar_7 = (uint32_t)mpz_get_ui(ivar_35);
        mpz_clear(ivar_35);
        charstrings_array_0_t ivar_34;
        mpz_t ivar_18;
        mpz_init(ivar_18);
        uint32_t size2212;
        //copying to uint32 from uint32;
        size2212 = (uint32_t)ivar_7;
        size2212 += 0;
        ivar_34 = new_charstrings_array_0(size2212);
        for (uint32_t index2204 = 0; index2204 < size2212; index2204++){
             mpz_t ivar_18;
             mpz_init(ivar_18);
             mpz_set_ui(ivar_18, index2204);
             bool_t ivar_23;
             uint32_t ivar_25;
             ivar_25 = (uint32_t)ivar_2->length;
             int64_t tmp2205 = mpz_cmp_ui(ivar_18, ivar_25);
             ivar_23 = (tmp2205 == 0);
             if (ivar_23){  
           //copying to uint32 from uint32;
           ivar_34->elems[index2204] = (uint32_t)ivar_1;
} else {
             
           strings__string_t ivar_31;
           //copying to strings__string from charstrings__charstring;
           {
           ivar_31 = new_charstrings_record_3();
           mpz_init(ivar_31->length);
           mpz_set_ui(ivar_31->length, ivar_2->length);
           mpz_t length2076;
           mpz_init(length2076);
           mpz_set(length2076, ivar_31->length);
           ivar_31->seq = (charstrings_funtype_2_t)ivar_2->seq;
           if (ivar_31->seq != NULL) ivar_31->seq->count++;
           charstrings_funtype_2_t seq2078;
           seq2078 = (charstrings_funtype_2_t)ivar_31->seq;
           };
           ivar_31->count++;
           ivar_34->elems[index2204] = (uint32_t)gen_strings__get((strings__string_t)ivar_31, (mpz_ptr_t)ivar_18);
};
        };
        release_charstrings__charstring(ivar_2);
        charstrings__charstring_t tmp2213 = new_charstrings__charstring();;
        result = (charstrings__charstring_t)tmp2213;
        tmp2213->length = (uint32_t)ivar_7;
        tmp2213->seq = (charstrings_array_0_t)ivar_34;

        
        return result;
}

charstrings__charstring_t charstrings__unit(uint32_t ivar_1){
        charstrings__charstring_t  result;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)1;
        uint32_t ivar_2;
        //copying to uint32 from uint8;
        ivar_2 = (uint32_t)ivar_7;
        charstrings_array_0_t ivar_6;
        uint32_t size2218;
        //copying to uint32 from uint32;
        size2218 = (uint32_t)ivar_2;
        size2218 += 0;
        ivar_6 = new_charstrings_array_0(size2218);
        uint8_t ivar_5;
        for (uint32_t index2217 = 0; index2217 < size2218; index2217++){
             ivar_5 = (uint8_t)index2217;
             //copying to uint32 from uint32;
             ivar_6->elems[index2217] = (uint32_t)ivar_1;
        };
        charstrings__charstring_t tmp2219 = new_charstrings__charstring();;
        result = (charstrings__charstring_t)tmp2219;
        tmp2219->length = (uint32_t)ivar_2;
        tmp2219->seq = (charstrings_array_0_t)ivar_6;

        
        return result;
}

charstrings__charstring_t charstrings__mk_charstring(strings__string_t ivar_1){
        charstrings__charstring_t  result;
        mpz_ptr_t ivar_17;
        ivar_17 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_17);
        mpz_set(ivar_17, ivar_1->length);
        uint32_t ivar_3;
        //copying to uint32 from mpz;
        ivar_3 = (uint32_t)mpz_get_ui(ivar_17);
        mpz_clear(ivar_17);
        charstrings_array_0_t ivar_16;
        mpz_t ivar_8;
        mpz_init(ivar_8);
        uint32_t size2228;
        //copying to uint32 from uint32;
        size2228 = (uint32_t)ivar_3;
        size2228 += 0;
        ivar_16 = new_charstrings_array_0(size2228);
        for (uint32_t index2227 = 0; index2227 < size2228; index2227++){
             mpz_t ivar_8;
             mpz_init(ivar_8);
             mpz_set_ui(ivar_8, index2227);
             ivar_1->count++;
             ivar_16->elems[index2227] = (uint32_t)gen_strings__get((strings__string_t)ivar_1, (mpz_ptr_t)ivar_8);
        };
        release_strings__string(ivar_1);
        charstrings__charstring_t tmp2229 = new_charstrings__charstring();;
        result = (charstrings__charstring_t)tmp2229;
        tmp2229->length = (uint32_t)ivar_3;
        tmp2229->seq = (charstrings_array_0_t)ivar_16;

        
        return result;
}

charstrings__charstring_t charstrings__doubleplus(charstrings__charstring_t ivar_1, charstrings__charstring_t ivar_2){
        charstrings__charstring_t  result;
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
             if (result != NULL) result->count++;
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
           if (result != NULL) result->count++;
           release_charstrings__charstring(ivar_1);
} else {
             
           /* n */ uint32_t ivar_13;
           uint32_t ivar_14;
           ivar_14 = (uint32_t)ivar_1->length;
           uint32_t ivar_15;
           ivar_15 = (uint32_t)ivar_2->length;
           ivar_13 = (uint32_t)(ivar_14 + ivar_15);
           charstrings_array_0_t ivar_46;
           uint32_t size2239;
           //copying to uint32 from uint32;
           size2239 = (uint32_t)ivar_13;
           size2239 += 0;
           ivar_46 = new_charstrings_array_0(size2239);
           uint32_t ivar_22;
           for (uint32_t index2238 = 0; index2238 < size2239; index2238++){
           ivar_22 = (uint32_t)index2238;
           bool_t ivar_23;
           uint32_t ivar_25;
           ivar_25 = (uint32_t)ivar_1->length;
           ivar_23 = (ivar_22 < ivar_25);
           if (ivar_23){    
            ivar_1->count++;
            ivar_46->elems[index2238] = (uint32_t)charstrings__cget((charstrings__charstring_t)ivar_1, (uint32_t)ivar_22);
} else {
           
            int32_t ivar_45;
            uint32_t ivar_37;
            ivar_37 = (uint32_t)ivar_1->length;
            ivar_45 = (int32_t)((uint64_t)ivar_22 - (uint64_t)ivar_37);
            uint32_t ivar_42;
            //copying to uint32 from int32;
            ivar_42 = (uint32_t)ivar_45;
            ivar_2->count++;
            ivar_46->elems[index2238] = (uint32_t)charstrings__cget((charstrings__charstring_t)ivar_2, (uint32_t)ivar_42);
};
           };
           release_charstrings__charstring(ivar_2);
           release_charstrings__charstring(ivar_1);
           charstrings__charstring_t tmp2240 = new_charstrings__charstring();;
           result = (charstrings__charstring_t)tmp2240;
           tmp2240->length = (uint32_t)ivar_13;
           tmp2240->seq = (charstrings_array_0_t)ivar_46;
};
};

        
        return result;
}

mpz_ptr_t charstrings__strdiff_rec(charstrings__charstring_t ivar_1, charstrings__charstring_t ivar_2, mpz_ptr_t ivar_3){
        mpz_ptr_t  result;
        bool_t ivar_26;
        bool_t ivar_27;
        uint32_t ivar_30;
        ivar_30 = (uint32_t)ivar_1->length;
        int64_t tmp2253 = mpz_cmp_ui(ivar_3, ivar_30);
        ivar_27 = (tmp2253 == 0);
        if (ivar_27){ 
             ivar_26 = (bool_t) true;
} else {
        
             bool_t ivar_33;
             uint32_t ivar_36;
             ivar_36 = (uint32_t)ivar_2->length;
             int64_t tmp2254 = mpz_cmp_ui(ivar_3, ivar_36);
             ivar_33 = (tmp2254 == 0);
             if (ivar_33){  
           ivar_26 = (bool_t) true;
} else {
             
           uint32_t ivar_39;
           uint32_t ivar_45;
           //copying to uint32 from mpz;
           ivar_45 = (uint32_t)mpz_get_ui(ivar_3);
           ivar_1->count++;
           ivar_39 = (uint32_t)charstrings__cget((charstrings__charstring_t)ivar_1, (uint32_t)ivar_45);
           uint32_t ivar_40;
           uint32_t ivar_51;
           //copying to uint32 from mpz;
           ivar_51 = (uint32_t)mpz_get_ui(ivar_3);
           ivar_2->count++;
           ivar_40 = (uint32_t)charstrings__cget((charstrings__charstring_t)ivar_2, (uint32_t)ivar_51);
           ivar_26 = (ivar_39 != ivar_40);
};
};
        if (ivar_26){ 
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_3);
             mpz_clear(ivar_3);
} else {
        
             mpz_ptr_t ivar_76;
             uint8_t ivar_71;
             ivar_71 = (uint8_t)1;
             mpz_mk_set_ui(ivar_76, (uint64_t)ivar_71);
             mpz_add(ivar_76, ivar_76, ivar_3);
             ivar_1->count++;
             ivar_2->count++;
             result = (mpz_ptr_t)charstrings__strdiff_rec((charstrings__charstring_t)ivar_1, (charstrings__charstring_t)ivar_2, ivar_76);
};

        
        return result;
}

mpz_ptr_t charstrings__strdiff(charstrings__charstring_t ivar_1, charstrings__charstring_t ivar_2){
        mpz_ptr_t  result;
        uint8_t ivar_44;
        ivar_44 = (uint8_t)0;
        mpz_ptr_t ivar_31;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_31, ivar_44);
        ivar_1->count++;
        ivar_2->count++;
        result = (mpz_ptr_t)charstrings__strdiff_rec((charstrings__charstring_t)ivar_1, (charstrings__charstring_t)ivar_2, (mpz_ptr_t)ivar_31);

        
        return result;
}

int8_t charstrings__strcmp(charstrings__charstring_t ivar_1, charstrings__charstring_t ivar_2){
        int8_t  result;
        /* i */ mpz_ptr_t ivar_3;
        ivar_1->count++;
        ivar_2->count++;
        ivar_3 = (mpz_ptr_t)charstrings__strdiff((charstrings__charstring_t)ivar_1, (charstrings__charstring_t)ivar_2);
        bool_t ivar_42;
        mpq_ptr_t ivar_44;
        uint32_t ivar_55;
        ivar_55 = (uint32_t)ivar_1->length;
        mpq_ptr_t ivar_50;
        //copying to mpq from uint32;
        mpq_mk_set_ui(ivar_50, ivar_55);
        uint32_t ivar_54;
        ivar_54 = (uint32_t)ivar_2->length;
        mpq_ptr_t ivar_51;
        //copying to mpq from uint32;
        mpq_mk_set_ui(ivar_51, ivar_54);
        ivar_44 = (mpq_ptr_t)real_defs__min((mpq_ptr_t)ivar_50, (mpq_ptr_t)ivar_51);
        int64_t tmp2269 = mpq_cmp_z(ivar_44, ivar_3);
        ivar_42 = (tmp2269 == 0);
        if (ivar_42){ 
             bool_t ivar_57;
             uint32_t ivar_58;
             ivar_58 = (uint32_t)ivar_1->length;
             uint32_t ivar_59;
             ivar_59 = (uint32_t)ivar_2->length;
             ivar_57 = (ivar_58 < ivar_59);
             if (ivar_57){  
           release_charstrings__charstring(ivar_2);
           release_charstrings__charstring(ivar_1);
           result = (int8_t)-1;
} else {
             
           bool_t ivar_63;
           uint32_t ivar_64;
           ivar_64 = (uint32_t)ivar_1->length;
           release_charstrings__charstring(ivar_1);
           uint32_t ivar_65;
           ivar_65 = (uint32_t)ivar_2->length;
           release_charstrings__charstring(ivar_2);
           ivar_63 = (ivar_64 > ivar_65);
           if (ivar_63){   
           result = (int8_t)1;
} else {
           
           result = (int8_t)0;
};
};
} else {
        
             bool_t ivar_69;
             uint32_t ivar_70;
             uint32_t ivar_72;
             uint32_t ivar_77;
             //copying to uint32 from mpz;
             ivar_77 = (uint32_t)mpz_get_ui(ivar_3);
             ivar_1->count++;
             ivar_72 = (uint32_t)charstrings__cget((charstrings__charstring_t)ivar_1, (uint32_t)ivar_77);
             ivar_70 = (uint32_t) ivar_72;
             uint32_t ivar_71;
             uint32_t ivar_80;
             uint32_t ivar_85;
             //copying to uint32 from mpz;
             ivar_85 = (uint32_t)mpz_get_ui(ivar_3);
             mpz_clear(ivar_3);
             ivar_2->count++;
             ivar_80 = (uint32_t)charstrings__cget((charstrings__charstring_t)ivar_2, (uint32_t)ivar_85);
             ivar_71 = (uint32_t) ivar_80;
             ivar_69 = (ivar_70 < ivar_71);
             if (ivar_69){  
           result = (int8_t)-1;
} else {
             
           result = (int8_t)1;
};
};

        
        return result;
}

charstrings__charstring_t charstrings__prefix(charstrings__charstring_t ivar_1, uint32_t ivar_2){
        charstrings__charstring_t  result;
        bool_t ivar_4;
        uint32_t ivar_6;
        ivar_6 = (uint32_t)ivar_1->length;
        ivar_4 = (ivar_2 == ivar_6);
        if (ivar_4){ 
             //copying to charstrings__charstring from charstrings__charstring;
             result = (charstrings__charstring_t)ivar_1;
             if (result != NULL) result->count++;
             release_charstrings__charstring(ivar_1);
} else {
        
             charstrings_array_0_t ivar_22;
             uint32_t size2282;
             //copying to uint32 from uint32;
             size2282 = (uint32_t)ivar_2;
             size2282 += 0;
             ivar_22 = new_charstrings_array_0(size2282);
             uint32_t ivar_14;
             for (uint32_t index2281 = 0; index2281 < size2282; index2281++){
           ivar_14 = (uint32_t)index2281;
           ivar_1->count++;
           ivar_22->elems[index2281] = (uint32_t)charstrings__cget((charstrings__charstring_t)ivar_1, (uint32_t)ivar_14);
             };
             release_charstrings__charstring(ivar_1);
             charstrings__charstring_t tmp2283 = new_charstrings__charstring();;
             result = (charstrings__charstring_t)tmp2283;
             tmp2283->length = (uint32_t)ivar_2;
             tmp2283->seq = (charstrings_array_0_t)ivar_22;
};

        
        return result;
}

charstrings__charstring_t charstrings__suffix(charstrings__charstring_t ivar_1, uint32_t ivar_2){
        charstrings__charstring_t  result;
        bool_t ivar_4;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)0;
        ivar_4 = (ivar_2 == ivar_6);
        if (ivar_4){ 
             //copying to charstrings__charstring from charstrings__charstring;
             result = (charstrings__charstring_t)ivar_1;
             if (result != NULL) result->count++;
             release_charstrings__charstring(ivar_1);
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
             charstrings_array_0_t ivar_39;
             mpz_t ivar_23;
             mpz_init(ivar_23);
             uint32_t size2296;
             //copying to uint32 from uint32;
             size2296 = (uint32_t)ivar_12;
             size2296 += 0;
             ivar_39 = new_charstrings_array_0(size2296);
             for (uint32_t index2295 = 0; index2295 < size2296; index2295++){
           mpz_t ivar_23;
           mpz_init(ivar_23);
           mpz_set_ui(ivar_23, index2295);
           mpz_ptr_t ivar_38;
           mpz_mk_add_ui(ivar_38, ivar_23, (uint64_t)ivar_2);
           uint32_t ivar_35;
           //copying to uint32 from mpz;
           ivar_35 = (uint32_t)mpz_get_ui(ivar_38);
           mpz_clear(ivar_38);
           ivar_1->count++;
           ivar_39->elems[index2295] = (uint32_t)charstrings__cget((charstrings__charstring_t)ivar_1, (uint32_t)ivar_35);
             };
             release_charstrings__charstring(ivar_1);
             charstrings__charstring_t tmp2297 = new_charstrings__charstring();;
             result = (charstrings__charstring_t)tmp2297;
             tmp2297->length = (uint32_t)ivar_12;
             tmp2297->seq = (charstrings_array_0_t)ivar_39;
};

        
        return result;
}

charstrings__charstring_t charstrings__substr(charstrings__charstring_t ivar_1, uint32_t ivar_2, uint32_t ivar_4){
        charstrings__charstring_t  result;
        charstrings__charstring_t ivar_18;
        ivar_1->count++;
        ivar_18 = (charstrings__charstring_t)charstrings__suffix((charstrings__charstring_t)ivar_1, (uint32_t)ivar_2);
        int32_t ivar_22;
        ivar_22 = (int32_t)((uint64_t)ivar_4 - (uint64_t)ivar_2);
        uint32_t ivar_19;
        //copying to uint32 from int32;
        ivar_19 = (uint32_t)ivar_22;
        ivar_18->count++;
        result = (charstrings__charstring_t)charstrings__prefix((charstrings__charstring_t)ivar_18, (uint32_t)ivar_19);

        
        return result;
}

bool_t charstrings__ascii_charstringp(charstrings__charstring_t ivar_1){
        bool_t  result;
        uint32_t low2306;
        uint32_t highvar2307;
        result = true;
        low2306 = (uint32_t) 0;
        charstrings__charstring_t ivar_3;
        //copying to charstrings__charstring from charstrings__charstring;
        ivar_3 = (charstrings__charstring_t)ivar_1;
        if (ivar_3 != NULL) ivar_3->count++;
        highvar2307 = (uint32_t)ivar_3->length;
        highvar2307 += 0;
        for (uint32_t ivar_2 = low2306; ivar_2 < highvar2307; ivar_2++){
             uint32_t ivar_4;
             uint32_t ivar_6;
             ivar_1->count++;
             ivar_6 = (uint32_t)charstrings__cget((charstrings__charstring_t)ivar_1, (uint32_t)ivar_2);
             ivar_4 = (uint32_t) ivar_6;
             uint8_t ivar_5;
             ivar_5 = (uint8_t)128;
             result = (ivar_4 < ivar_5);
             if (!result) break;
        };

        
        return result;
}