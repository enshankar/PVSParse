//Code generated using pvs2ir2c
#include "testMilenage_c.h"

void release_testMilenage_funtype_0(testMilenage_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

testMilenage_funtype_0_t copy_testMilenage_funtype_0(testMilenage_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_testMilenage_funtype_0(testMilenage_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; testMilenage_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp18932 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp18932 == 0);
        bool_t keymatch;
        int64_t tmp18933 = mpz_cmp(data.key, i);
        keymatch = (tmp18933 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp18932 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp18932 == 0);

        int64_t tmp18933 = mpz_cmp(data.key, i);
        keymatch = (tmp18933 == 0);
                }
        return hashindex;
        }

testMilenage_funtype_0_t dupdate_testMilenage_funtype_0(testMilenage_funtype_0_t a, mpz_ptr_t i, uint32_t v){
        testMilenage_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (testMilenage_funtype_0_htbl_t)safe_malloc(sizeof(struct testMilenage_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (testMilenage_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct testMilenage_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        testMilenage_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                testMilenage_funtype_0_hashentry_t * new_data = (testMilenage_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct testMilenage_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp18934 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp18934 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp18935 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp18935 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp18936 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp18936 == 0);
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
        uint32_t hashindex = lookup_testMilenage_funtype_0(htbl, i, ihash);
        testMilenage_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp18937 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp18937 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v; htbl->num_entries++;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint32_t)v;};
        return a;

}

testMilenage_funtype_0_t update_testMilenage_funtype_0(testMilenage_funtype_0_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_testMilenage_funtype_0(a, i, v);
            } else {
                testMilenage_funtype_0_t x = copy_testMilenage_funtype_0(a);
                a->count--;
                return dupdate_testMilenage_funtype_0(x, i, v);
            }}

bool_t equal_testMilenage_funtype_0(testMilenage_funtype_0_t x, testMilenage_funtype_0_t y){
        return false;}


testMilenage_record_1_t new_testMilenage_record_1(void){
        testMilenage_record_1_t tmp = (testMilenage_record_1_t) safe_malloc(sizeof(struct testMilenage_record_1_s));
        tmp->count = 1;
        return tmp;}

void release_testMilenage_record_1(testMilenage_record_1_t x){
        x->count--;
        if (x->count <= 0){
         release_testMilenage_funtype_0(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_testMilenage_record_1_ptr(pointer_t x, type_actual_t T){
        release_testMilenage_record_1((testMilenage_record_1_t)x);
}

testMilenage_record_1_t copy_testMilenage_record_1(testMilenage_record_1_t x){
        testMilenage_record_1_t y = new_testMilenage_record_1();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_testMilenage_record_1(testMilenage_record_1_t x, testMilenage_record_1_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_testMilenage_funtype_0(x->seq, y->seq);
        return tmp;}

bool_t equal_testMilenage_record_1_ptr(pointer_t x, pointer_t y, actual_testMilenage_record_1_t T){
        return equal_testMilenage_record_1((testMilenage_record_1_t)x, (testMilenage_record_1_t)y);
}

actual_testMilenage_record_1_t actual_testMilenage_record_1(){
        actual_testMilenage_record_1_t new = (actual_testMilenage_record_1_t)safe_malloc(sizeof(struct actual_testMilenage_record_1_s));
        new->equal_ptr = (equal_ptr_t)(*equal_testMilenage_record_1_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_testMilenage_record_1_ptr);
 

 
        return new;
 };

testMilenage_record_1_t update_testMilenage_record_1_length(testMilenage_record_1_t x, mpz_ptr_t v){
        testMilenage_record_1_t y;
        if (x->count == 1){y = x;}
        else {y = copy_testMilenage_record_1(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

testMilenage_record_1_t update_testMilenage_record_1_seq(testMilenage_record_1_t x, testMilenage_funtype_0_t v){
        testMilenage_record_1_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_testMilenage_funtype_0(x->seq);};}
        else {y = copy_testMilenage_record_1(x); x->count--; y->seq->count--;};
        y->seq = (testMilenage_funtype_0_t)v;
        return y;}




testMilenage_array_2_t new_testMilenage_array_2(uint32_t size){
        testMilenage_array_2_t tmp = (testMilenage_array_2_t) safe_malloc(sizeof(struct testMilenage_array_2_s) + (size * sizeof(uint32_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_testMilenage_array_2(testMilenage_array_2_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_testMilenage_array_2_ptr(pointer_t x, type_actual_t T){
        release_testMilenage_array_2((testMilenage_array_2_t)x);
}

testMilenage_array_2_t copy_testMilenage_array_2(testMilenage_array_2_t x){
        testMilenage_array_2_t tmp = new_testMilenage_array_2(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint32_t)x->elems[i];};
         return tmp;}

bool_t equal_testMilenage_array_2(testMilenage_array_2_t x, testMilenage_array_2_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

bool_t equal_testMilenage_array_2_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_testMilenage_array_2((testMilenage_array_2_t)x, (testMilenage_array_2_t)y);
}

actual_testMilenage_array_2_t actual_testMilenage_array_2(){
        actual_testMilenage_array_2_t new = (actual_testMilenage_array_2_t)safe_malloc(sizeof(struct actual_testMilenage_array_2_s));
        new->equal_ptr = (equal_ptr_t)(*equal_testMilenage_array_2_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_testMilenage_array_2_ptr);
 

 
        return new;
 };

testMilenage_array_2_t update_testMilenage_array_2(testMilenage_array_2_t x, uint32_t i, uint32_t v){
        testMilenage_array_2_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_testMilenage_array_2(x );
                x->count--;};
        y->elems[i] = (uint32_t)v;
        return y;}

testMilenage_array_2_t upgrade_testMilenage_array_2(testMilenage_array_2_t x, uint32_t i, uint32_t v){
        testMilenage_array_2_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_malloc(sizeof(struct testMilenage_array_2_s) + (newmax * sizeof(uint32_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_testMilenage_array_2(x);}
           else {y = copy_testMilenage_array_2(x );
                x->count--;};
        y->elems[i] = (uint32_t)v;
        return y;}




testMilenage_record_3_t new_testMilenage_record_3(void){
        testMilenage_record_3_t tmp = (testMilenage_record_3_t) safe_malloc(sizeof(struct testMilenage_record_3_s));
        tmp->count = 1;
        return tmp;}

void release_testMilenage_record_3(testMilenage_record_3_t x){
        x->count--;
        if (x->count <= 0){
         release_testMilenage_array_2(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_testMilenage_record_3_ptr(pointer_t x, type_actual_t T){
        release_testMilenage_record_3((testMilenage_record_3_t)x);
}

testMilenage_record_3_t copy_testMilenage_record_3(testMilenage_record_3_t x){
        testMilenage_record_3_t y = new_testMilenage_record_3();
        y->length = (uint32_t)x->length;
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_testMilenage_record_3(testMilenage_record_3_t x, testMilenage_record_3_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_testMilenage_array_2(x->seq, y->seq);
        return tmp;}

bool_t equal_testMilenage_record_3_ptr(pointer_t x, pointer_t y, actual_testMilenage_record_3_t T){
        return equal_testMilenage_record_3((testMilenage_record_3_t)x, (testMilenage_record_3_t)y);
}

actual_testMilenage_record_3_t actual_testMilenage_record_3(){
        actual_testMilenage_record_3_t new = (actual_testMilenage_record_3_t)safe_malloc(sizeof(struct actual_testMilenage_record_3_s));
        new->equal_ptr = (equal_ptr_t)(*equal_testMilenage_record_3_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_testMilenage_record_3_ptr);
 

 
        return new;
 };

testMilenage_record_3_t update_testMilenage_record_3_length(testMilenage_record_3_t x, uint32_t v){
        testMilenage_record_3_t y;
        if (x->count == 1){y = x;}
        else {y = copy_testMilenage_record_3(x); x->count--;};
        y->length = (uint32_t)v;
        return y;}

testMilenage_record_3_t update_testMilenage_record_3_seq(testMilenage_record_3_t x, testMilenage_array_2_t v){
        testMilenage_record_3_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_testMilenage_array_2(x->seq);};}
        else {y = copy_testMilenage_record_3(x); x->count--; y->seq->count--;};
        y->seq = (testMilenage_array_2_t)v;
        return y;}




testMilenage_array_4_t new_testMilenage_array_4(uint32_t size){
        testMilenage_array_4_t tmp = (testMilenage_array_4_t) safe_malloc(sizeof(struct testMilenage_array_4_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_testMilenage_array_4(testMilenage_array_4_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_testMilenage_array_4_ptr(pointer_t x, type_actual_t T){
        release_testMilenage_array_4((testMilenage_array_4_t)x);
}

testMilenage_array_4_t copy_testMilenage_array_4(testMilenage_array_4_t x){
        testMilenage_array_4_t tmp = new_testMilenage_array_4(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_testMilenage_array_4(testMilenage_array_4_t x, testMilenage_array_4_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

bool_t equal_testMilenage_array_4_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_testMilenage_array_4((testMilenage_array_4_t)x, (testMilenage_array_4_t)y);
}

actual_testMilenage_array_4_t actual_testMilenage_array_4(){
        actual_testMilenage_array_4_t new = (actual_testMilenage_array_4_t)safe_malloc(sizeof(struct actual_testMilenage_array_4_s));
        new->equal_ptr = (equal_ptr_t)(*equal_testMilenage_array_4_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_testMilenage_array_4_ptr);
 

 
        return new;
 };

testMilenage_array_4_t update_testMilenage_array_4(testMilenage_array_4_t x, uint32_t i, uint8_t v){
        testMilenage_array_4_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_testMilenage_array_4(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

testMilenage_array_4_t upgrade_testMilenage_array_4(testMilenage_array_4_t x, uint32_t i, uint8_t v){
        testMilenage_array_4_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_malloc(sizeof(struct testMilenage_array_4_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_testMilenage_array_4(x);}
           else {y = copy_testMilenage_array_4(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




testMilenage_record_5_t new_testMilenage_record_5(void){
        testMilenage_record_5_t tmp = (testMilenage_record_5_t) safe_malloc(sizeof(struct testMilenage_record_5_s));
        tmp->count = 1;
        return tmp;}

void release_testMilenage_record_5(testMilenage_record_5_t x){
        x->count--;
        if (x->count <= 0){
         release_bytestrings__bytestring(x->project_1);
         release_bytestrings__bytestring(x->project_2);
         release_testMilenage_array_4(x->project_3);
         release_testMilenage_array_4(x->project_4);
         release_testMilenage_array_4(x->project_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_testMilenage_record_5_ptr(pointer_t x, type_actual_t T){
        release_testMilenage_record_5((testMilenage_record_5_t)x);
}

testMilenage_record_5_t copy_testMilenage_record_5(testMilenage_record_5_t x){
        testMilenage_record_5_t y = new_testMilenage_record_5();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->project_5 = x->project_5;
        if (y->project_5 != NULL){y->project_5->count++;};
        y->count = 1;
        return y;}

bool_t equal_testMilenage_record_5(testMilenage_record_5_t x, testMilenage_record_5_t y){
        bool_t tmp = true;
        tmp = tmp && equal_bytestrings__bytestring(x->project_1, y->project_1);
        tmp = tmp && equal_bytestrings__bytestring(x->project_2, y->project_2);
        tmp = tmp && equal_testMilenage_array_4(x->project_3, y->project_3);
        tmp = tmp && equal_testMilenage_array_4(x->project_4, y->project_4);
        tmp = tmp && equal_testMilenage_array_4(x->project_5, y->project_5);
        return tmp;}

bool_t equal_testMilenage_record_5_ptr(pointer_t x, pointer_t y, actual_testMilenage_record_5_t T){
        return equal_testMilenage_record_5((testMilenage_record_5_t)x, (testMilenage_record_5_t)y);
}

actual_testMilenage_record_5_t actual_testMilenage_record_5(){
        actual_testMilenage_record_5_t new = (actual_testMilenage_record_5_t)safe_malloc(sizeof(struct actual_testMilenage_record_5_s));
        new->equal_ptr = (equal_ptr_t)(*equal_testMilenage_record_5_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_testMilenage_record_5_ptr);
 

 
        return new;
 };

testMilenage_record_5_t update_testMilenage_record_5_project_1(testMilenage_record_5_t x, bytestrings__bytestring_t v){
        testMilenage_record_5_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_bytestrings__bytestring(x->project_1);};}
        else {y = copy_testMilenage_record_5(x); x->count--; y->project_1->count--;};
        y->project_1 = (bytestrings__bytestring_t)v;
        return y;}

testMilenage_record_5_t update_testMilenage_record_5_project_2(testMilenage_record_5_t x, bytestrings__bytestring_t v){
        testMilenage_record_5_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_bytestrings__bytestring(x->project_2);};}
        else {y = copy_testMilenage_record_5(x); x->count--; y->project_2->count--;};
        y->project_2 = (bytestrings__bytestring_t)v;
        return y;}

testMilenage_record_5_t update_testMilenage_record_5_project_3(testMilenage_record_5_t x, testMilenage_array_4_t v){
        testMilenage_record_5_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_testMilenage_array_4(x->project_3);};}
        else {y = copy_testMilenage_record_5(x); x->count--; y->project_3->count--;};
        y->project_3 = (testMilenage_array_4_t)v;
        return y;}

testMilenage_record_5_t update_testMilenage_record_5_project_4(testMilenage_record_5_t x, testMilenage_array_4_t v){
        testMilenage_record_5_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_testMilenage_array_4(x->project_4);};}
        else {y = copy_testMilenage_record_5(x); x->count--; y->project_4->count--;};
        y->project_4 = (testMilenage_array_4_t)v;
        return y;}

testMilenage_record_5_t update_testMilenage_record_5_project_5(testMilenage_record_5_t x, testMilenage_array_4_t v){
        testMilenage_record_5_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_5 != NULL){release_testMilenage_array_4(x->project_5);};}
        else {y = copy_testMilenage_record_5(x); x->count--; y->project_5->count--;};
        y->project_5 = (testMilenage_array_4_t)v;
        return y;}



void release_testMilenage_funtype_6(testMilenage_funtype_6_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

testMilenage_funtype_6_t copy_testMilenage_funtype_6(testMilenage_funtype_6_t x){return x->ftbl->cptr(x);}

bool_t equal_testMilenage_funtype_6(testMilenage_funtype_6_t x, testMilenage_funtype_6_t y){
        return false;}


testMilenage_record_7_t new_testMilenage_record_7(void){
        testMilenage_record_7_t tmp = (testMilenage_record_7_t) safe_malloc(sizeof(struct testMilenage_record_7_s));
        tmp->count = 1;
        return tmp;}

void release_testMilenage_record_7(testMilenage_record_7_t x){
        x->count--;
        if (x->count <= 0){
         release_testMilenage_array_4(x->project_1);
         release_testMilenage_array_4(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_testMilenage_record_7_ptr(pointer_t x, type_actual_t T){
        release_testMilenage_record_7((testMilenage_record_7_t)x);
}

testMilenage_record_7_t copy_testMilenage_record_7(testMilenage_record_7_t x){
        testMilenage_record_7_t y = new_testMilenage_record_7();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_testMilenage_record_7(testMilenage_record_7_t x, testMilenage_record_7_t y){
        bool_t tmp = true;
        tmp = tmp && equal_testMilenage_array_4(x->project_1, y->project_1);
        tmp = tmp && equal_testMilenage_array_4(x->project_2, y->project_2);
        return tmp;}

bool_t equal_testMilenage_record_7_ptr(pointer_t x, pointer_t y, actual_testMilenage_record_7_t T){
        return equal_testMilenage_record_7((testMilenage_record_7_t)x, (testMilenage_record_7_t)y);
}

actual_testMilenage_record_7_t actual_testMilenage_record_7(){
        actual_testMilenage_record_7_t new = (actual_testMilenage_record_7_t)safe_malloc(sizeof(struct actual_testMilenage_record_7_s));
        new->equal_ptr = (equal_ptr_t)(*equal_testMilenage_record_7_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_testMilenage_record_7_ptr);
 

 
        return new;
 };

testMilenage_record_7_t update_testMilenage_record_7_project_1(testMilenage_record_7_t x, testMilenage_array_4_t v){
        testMilenage_record_7_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_testMilenage_array_4(x->project_1);};}
        else {y = copy_testMilenage_record_7(x); x->count--; y->project_1->count--;};
        y->project_1 = (testMilenage_array_4_t)v;
        return y;}

testMilenage_record_7_t update_testMilenage_record_7_project_2(testMilenage_record_7_t x, testMilenage_array_4_t v){
        testMilenage_record_7_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_testMilenage_array_4(x->project_2);};}
        else {y = copy_testMilenage_record_7(x); x->count--; y->project_2->count--;};
        y->project_2 = (testMilenage_array_4_t)v;
        return y;}



void release_testMilenage_funtype_8(testMilenage_funtype_8_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

testMilenage_funtype_8_t copy_testMilenage_funtype_8(testMilenage_funtype_8_t x){return x->ftbl->cptr(x);}

bool_t equal_testMilenage_funtype_8(testMilenage_funtype_8_t x, testMilenage_funtype_8_t y){
        return false;}


testMilenage_array_4_t f_testMilenage_closure_9(struct testMilenage_closure_9_s * closure, testMilenage_record_7_t bvar){
        testMilenage_array_4_t bvar_1;
        bvar_1 = (testMilenage_array_4_t)bvar->project_1;
        bvar->project_1->count++;
        testMilenage_array_4_t bvar_2;
        bvar_2 = (testMilenage_array_4_t)bvar->project_2;
        bvar->project_2->count++;
        release_testMilenage_record_7(bvar);
        testMilenage_array_4_t result = h_testMilenage_closure_9(bvar_1, bvar_2); 
        release_testMilenage_array_4(bvar_1);
        release_testMilenage_array_4(bvar_2);
        return result;}

testMilenage_array_4_t m_testMilenage_closure_9(struct testMilenage_closure_9_s * closure, testMilenage_array_4_t bvar_1, testMilenage_array_4_t bvar_2){
        return h_testMilenage_closure_9(bvar_1, bvar_2);}

extern testMilenage_array_4_t h_testMilenage_closure_9(testMilenage_array_4_t ivar_12, testMilenage_array_4_t ivar_13){
        testMilenage_array_4_t result;
        result = (testMilenage_array_4_t)Rijndael__Rijndael((Rijndael_array_2_t)ivar_12, (Rijndael_array_2_t)ivar_13);

        return result;
}

testMilenage_closure_9_t new_testMilenage_closure_9(void){
        static struct testMilenage_funtype_8_ftbl_s ftbl = {.fptr = (testMilenage_array_4_t (*)(testMilenage_funtype_8_t, testMilenage_record_7_t))&f_testMilenage_closure_9, .mptr = (testMilenage_array_4_t (*)(testMilenage_funtype_8_t, testMilenage_array_4_t, testMilenage_array_4_t))&m_testMilenage_closure_9, .rptr =  (void (*)(testMilenage_funtype_8_t))&release_testMilenage_closure_9, .cptr = (testMilenage_funtype_8_t (*)(testMilenage_funtype_8_t))&copy_testMilenage_closure_9};
        testMilenage_closure_9_t tmp = (testMilenage_closure_9_t) safe_malloc(sizeof(struct testMilenage_closure_9_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_testMilenage_closure_9(testMilenage_funtype_8_t closure){
        testMilenage_closure_9_t x = (testMilenage_closure_9_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

testMilenage_closure_9_t copy_testMilenage_closure_9(testMilenage_closure_9_t x){
        testMilenage_closure_9_t y = new_testMilenage_closure_9();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            testMilenage_funtype_8_htbl_t new_htbl = (testMilenage_funtype_8_htbl_t) safe_malloc(sizeof(struct testMilenage_funtype_8_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            testMilenage_funtype_8_hashentry_t * new_data = (testMilenage_funtype_8_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct testMilenage_funtype_8_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct testMilenage_funtype_8_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


testMilenage_record_10_t new_testMilenage_record_10(void){
        testMilenage_record_10_t tmp = (testMilenage_record_10_t) safe_malloc(sizeof(struct testMilenage_record_10_s));
        tmp->count = 1;
        return tmp;}

void release_testMilenage_record_10(testMilenage_record_10_t x){
        x->count--;
        if (x->count <= 0){
         release_testMilenage_array_4(x->project_1);
         release_testMilenage_array_4(x->project_2);
         release_testMilenage_array_4(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_testMilenage_record_10_ptr(pointer_t x, type_actual_t T){
        release_testMilenage_record_10((testMilenage_record_10_t)x);
}

testMilenage_record_10_t copy_testMilenage_record_10(testMilenage_record_10_t x){
        testMilenage_record_10_t y = new_testMilenage_record_10();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_testMilenage_record_10(testMilenage_record_10_t x, testMilenage_record_10_t y){
        bool_t tmp = true;
        tmp = tmp && equal_testMilenage_array_4(x->project_1, y->project_1);
        tmp = tmp && equal_testMilenage_array_4(x->project_2, y->project_2);
        tmp = tmp && equal_testMilenage_array_4(x->project_3, y->project_3);
        return tmp;}

bool_t equal_testMilenage_record_10_ptr(pointer_t x, pointer_t y, actual_testMilenage_record_10_t T){
        return equal_testMilenage_record_10((testMilenage_record_10_t)x, (testMilenage_record_10_t)y);
}

actual_testMilenage_record_10_t actual_testMilenage_record_10(){
        actual_testMilenage_record_10_t new = (actual_testMilenage_record_10_t)safe_malloc(sizeof(struct actual_testMilenage_record_10_s));
        new->equal_ptr = (equal_ptr_t)(*equal_testMilenage_record_10_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_testMilenage_record_10_ptr);
 

 
        return new;
 };

testMilenage_record_10_t update_testMilenage_record_10_project_1(testMilenage_record_10_t x, testMilenage_array_4_t v){
        testMilenage_record_10_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_testMilenage_array_4(x->project_1);};}
        else {y = copy_testMilenage_record_10(x); x->count--; y->project_1->count--;};
        y->project_1 = (testMilenage_array_4_t)v;
        return y;}

testMilenage_record_10_t update_testMilenage_record_10_project_2(testMilenage_record_10_t x, testMilenage_array_4_t v){
        testMilenage_record_10_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_testMilenage_array_4(x->project_2);};}
        else {y = copy_testMilenage_record_10(x); x->count--; y->project_2->count--;};
        y->project_2 = (testMilenage_array_4_t)v;
        return y;}

testMilenage_record_10_t update_testMilenage_record_10_project_3(testMilenage_record_10_t x, testMilenage_array_4_t v){
        testMilenage_record_10_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_testMilenage_array_4(x->project_3);};}
        else {y = copy_testMilenage_record_10(x); x->count--; y->project_3->count--;};
        y->project_3 = (testMilenage_array_4_t)v;
        return y;}



void release_testMilenage_funtype_11(testMilenage_funtype_11_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

testMilenage_funtype_11_t copy_testMilenage_funtype_11(testMilenage_funtype_11_t x){return x->ftbl->cptr(x);}

bool_t equal_testMilenage_funtype_11(testMilenage_funtype_11_t x, testMilenage_funtype_11_t y){
        return false;}


testMilenage_array_4_t f_testMilenage_closure_12(struct testMilenage_closure_12_s * closure, testMilenage_record_7_t bvar){
        testMilenage_array_4_t bvar_1;
        bvar_1 = (testMilenage_array_4_t)bvar->project_1;
        bvar->project_1->count++;
        testMilenage_array_4_t bvar_2;
        bvar_2 = (testMilenage_array_4_t)bvar->project_2;
        bvar->project_2->count++;
        release_testMilenage_record_7(bvar);
        testMilenage_array_4_t result = h_testMilenage_closure_12(bvar_1, bvar_2); 
        release_testMilenage_array_4(bvar_1);
        release_testMilenage_array_4(bvar_2);
        return result;}

testMilenage_array_4_t m_testMilenage_closure_12(struct testMilenage_closure_12_s * closure, testMilenage_array_4_t bvar_1, testMilenage_array_4_t bvar_2){
        return h_testMilenage_closure_12(bvar_1, bvar_2);}

extern testMilenage_array_4_t h_testMilenage_closure_12(testMilenage_array_4_t ivar_10, testMilenage_array_4_t ivar_11){
        testMilenage_array_4_t result;
        result = (testMilenage_array_4_t)Rijndael__Rijndael((Rijndael_array_2_t)ivar_10, (Rijndael_array_2_t)ivar_11);

        return result;
}

testMilenage_closure_12_t new_testMilenage_closure_12(void){
        static struct testMilenage_funtype_8_ftbl_s ftbl = {.fptr = (testMilenage_array_4_t (*)(testMilenage_funtype_8_t, testMilenage_record_7_t))&f_testMilenage_closure_12, .mptr = (testMilenage_array_4_t (*)(testMilenage_funtype_8_t, testMilenage_array_4_t, testMilenage_array_4_t))&m_testMilenage_closure_12, .rptr =  (void (*)(testMilenage_funtype_8_t))&release_testMilenage_closure_12, .cptr = (testMilenage_funtype_8_t (*)(testMilenage_funtype_8_t))&copy_testMilenage_closure_12};
        testMilenage_closure_12_t tmp = (testMilenage_closure_12_t) safe_malloc(sizeof(struct testMilenage_closure_12_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_testMilenage_closure_12(testMilenage_funtype_8_t closure){
        testMilenage_closure_12_t x = (testMilenage_closure_12_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

testMilenage_closure_12_t copy_testMilenage_closure_12(testMilenage_closure_12_t x){
        testMilenage_closure_12_t y = new_testMilenage_closure_12();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            testMilenage_funtype_8_htbl_t new_htbl = (testMilenage_funtype_8_htbl_t) safe_malloc(sizeof(struct testMilenage_funtype_8_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            testMilenage_funtype_8_hashentry_t * new_data = (testMilenage_funtype_8_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct testMilenage_funtype_8_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct testMilenage_funtype_8_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


testMilenage_record_13_t new_testMilenage_record_13(void){
        testMilenage_record_13_t tmp = (testMilenage_record_13_t) safe_malloc(sizeof(struct testMilenage_record_13_s));
        tmp->count = 1;
        return tmp;}

void release_testMilenage_record_13(testMilenage_record_13_t x){
        x->count--;
        if (x->count <= 0){
         release_testMilenage_array_4(x->project_1);
         release_testMilenage_array_4(x->project_2);
         release_testMilenage_array_4(x->project_3);
         release_testMilenage_array_4(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_testMilenage_record_13_ptr(pointer_t x, type_actual_t T){
        release_testMilenage_record_13((testMilenage_record_13_t)x);
}

testMilenage_record_13_t copy_testMilenage_record_13(testMilenage_record_13_t x){
        testMilenage_record_13_t y = new_testMilenage_record_13();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_testMilenage_record_13(testMilenage_record_13_t x, testMilenage_record_13_t y){
        bool_t tmp = true;
        tmp = tmp && equal_testMilenage_array_4(x->project_1, y->project_1);
        tmp = tmp && equal_testMilenage_array_4(x->project_2, y->project_2);
        tmp = tmp && equal_testMilenage_array_4(x->project_3, y->project_3);
        tmp = tmp && equal_testMilenage_array_4(x->project_4, y->project_4);
        return tmp;}

bool_t equal_testMilenage_record_13_ptr(pointer_t x, pointer_t y, actual_testMilenage_record_13_t T){
        return equal_testMilenage_record_13((testMilenage_record_13_t)x, (testMilenage_record_13_t)y);
}

actual_testMilenage_record_13_t actual_testMilenage_record_13(){
        actual_testMilenage_record_13_t new = (actual_testMilenage_record_13_t)safe_malloc(sizeof(struct actual_testMilenage_record_13_s));
        new->equal_ptr = (equal_ptr_t)(*equal_testMilenage_record_13_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_testMilenage_record_13_ptr);
 

 
        return new;
 };

testMilenage_record_13_t update_testMilenage_record_13_project_1(testMilenage_record_13_t x, testMilenage_array_4_t v){
        testMilenage_record_13_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_testMilenage_array_4(x->project_1);};}
        else {y = copy_testMilenage_record_13(x); x->count--; y->project_1->count--;};
        y->project_1 = (testMilenage_array_4_t)v;
        return y;}

testMilenage_record_13_t update_testMilenage_record_13_project_2(testMilenage_record_13_t x, testMilenage_array_4_t v){
        testMilenage_record_13_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_testMilenage_array_4(x->project_2);};}
        else {y = copy_testMilenage_record_13(x); x->count--; y->project_2->count--;};
        y->project_2 = (testMilenage_array_4_t)v;
        return y;}

testMilenage_record_13_t update_testMilenage_record_13_project_3(testMilenage_record_13_t x, testMilenage_array_4_t v){
        testMilenage_record_13_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_testMilenage_array_4(x->project_3);};}
        else {y = copy_testMilenage_record_13(x); x->count--; y->project_3->count--;};
        y->project_3 = (testMilenage_array_4_t)v;
        return y;}

testMilenage_record_13_t update_testMilenage_record_13_project_4(testMilenage_record_13_t x, testMilenage_array_4_t v){
        testMilenage_record_13_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_testMilenage_array_4(x->project_4);};}
        else {y = copy_testMilenage_record_13(x); x->count--; y->project_4->count--;};
        y->project_4 = (testMilenage_array_4_t)v;
        return y;}



void release_testMilenage_funtype_14(testMilenage_funtype_14_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

testMilenage_funtype_14_t copy_testMilenage_funtype_14(testMilenage_funtype_14_t x){return x->ftbl->cptr(x);}

bool_t equal_testMilenage_funtype_14(testMilenage_funtype_14_t x, testMilenage_funtype_14_t y){
        return false;}


testMilenage_array_4_t f_testMilenage_closure_15(struct testMilenage_closure_15_s * closure, testMilenage_record_7_t bvar){
        testMilenage_array_4_t bvar_1;
        bvar_1 = (testMilenage_array_4_t)bvar->project_1;
        bvar->project_1->count++;
        testMilenage_array_4_t bvar_2;
        bvar_2 = (testMilenage_array_4_t)bvar->project_2;
        bvar->project_2->count++;
        release_testMilenage_record_7(bvar);
        testMilenage_array_4_t result = h_testMilenage_closure_15(bvar_1, bvar_2); 
        release_testMilenage_array_4(bvar_1);
        release_testMilenage_array_4(bvar_2);
        return result;}

testMilenage_array_4_t m_testMilenage_closure_15(struct testMilenage_closure_15_s * closure, testMilenage_array_4_t bvar_1, testMilenage_array_4_t bvar_2){
        return h_testMilenage_closure_15(bvar_1, bvar_2);}

extern testMilenage_array_4_t h_testMilenage_closure_15(testMilenage_array_4_t ivar_11, testMilenage_array_4_t ivar_12){
        testMilenage_array_4_t result;
        result = (testMilenage_array_4_t)Rijndael__Rijndael((Rijndael_array_2_t)ivar_11, (Rijndael_array_2_t)ivar_12);

        return result;
}

testMilenage_closure_15_t new_testMilenage_closure_15(void){
        static struct testMilenage_funtype_8_ftbl_s ftbl = {.fptr = (testMilenage_array_4_t (*)(testMilenage_funtype_8_t, testMilenage_record_7_t))&f_testMilenage_closure_15, .mptr = (testMilenage_array_4_t (*)(testMilenage_funtype_8_t, testMilenage_array_4_t, testMilenage_array_4_t))&m_testMilenage_closure_15, .rptr =  (void (*)(testMilenage_funtype_8_t))&release_testMilenage_closure_15, .cptr = (testMilenage_funtype_8_t (*)(testMilenage_funtype_8_t))&copy_testMilenage_closure_15};
        testMilenage_closure_15_t tmp = (testMilenage_closure_15_t) safe_malloc(sizeof(struct testMilenage_closure_15_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_testMilenage_closure_15(testMilenage_funtype_8_t closure){
        testMilenage_closure_15_t x = (testMilenage_closure_15_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

testMilenage_closure_15_t copy_testMilenage_closure_15(testMilenage_closure_15_t x){
        testMilenage_closure_15_t y = new_testMilenage_closure_15();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            testMilenage_funtype_8_htbl_t new_htbl = (testMilenage_funtype_8_htbl_t) safe_malloc(sizeof(struct testMilenage_funtype_8_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            testMilenage_funtype_8_hashentry_t * new_data = (testMilenage_funtype_8_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct testMilenage_funtype_8_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct testMilenage_funtype_8_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


testMilenage_array_4_t f_testMilenage_closure_16(struct testMilenage_closure_16_s * closure, testMilenage_record_7_t bvar){
        testMilenage_array_4_t bvar_1;
        bvar_1 = (testMilenage_array_4_t)bvar->project_1;
        bvar->project_1->count++;
        testMilenage_array_4_t bvar_2;
        bvar_2 = (testMilenage_array_4_t)bvar->project_2;
        bvar->project_2->count++;
        release_testMilenage_record_7(bvar);
        testMilenage_array_4_t result = h_testMilenage_closure_16(bvar_1, bvar_2); 
        release_testMilenage_array_4(bvar_1);
        release_testMilenage_array_4(bvar_2);
        return result;}

testMilenage_array_4_t m_testMilenage_closure_16(struct testMilenage_closure_16_s * closure, testMilenage_array_4_t bvar_1, testMilenage_array_4_t bvar_2){
        return h_testMilenage_closure_16(bvar_1, bvar_2);}

extern testMilenage_array_4_t h_testMilenage_closure_16(testMilenage_array_4_t ivar_12, testMilenage_array_4_t ivar_13){
        testMilenage_array_4_t result;
        result = (testMilenage_array_4_t)Rijndael__Rijndael((Rijndael_array_2_t)ivar_12, (Rijndael_array_2_t)ivar_13);

        return result;
}

testMilenage_closure_16_t new_testMilenage_closure_16(void){
        static struct testMilenage_funtype_8_ftbl_s ftbl = {.fptr = (testMilenage_array_4_t (*)(testMilenage_funtype_8_t, testMilenage_record_7_t))&f_testMilenage_closure_16, .mptr = (testMilenage_array_4_t (*)(testMilenage_funtype_8_t, testMilenage_array_4_t, testMilenage_array_4_t))&m_testMilenage_closure_16, .rptr =  (void (*)(testMilenage_funtype_8_t))&release_testMilenage_closure_16, .cptr = (testMilenage_funtype_8_t (*)(testMilenage_funtype_8_t))&copy_testMilenage_closure_16};
        testMilenage_closure_16_t tmp = (testMilenage_closure_16_t) safe_malloc(sizeof(struct testMilenage_closure_16_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_testMilenage_closure_16(testMilenage_funtype_8_t closure){
        testMilenage_closure_16_t x = (testMilenage_closure_16_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

testMilenage_closure_16_t copy_testMilenage_closure_16(testMilenage_closure_16_t x){
        testMilenage_closure_16_t y = new_testMilenage_closure_16();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            testMilenage_funtype_8_htbl_t new_htbl = (testMilenage_funtype_8_htbl_t) safe_malloc(sizeof(struct testMilenage_funtype_8_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            testMilenage_funtype_8_hashentry_t * new_data = (testMilenage_funtype_8_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct testMilenage_funtype_8_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct testMilenage_funtype_8_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern bool_t testMilenage__testAllFunc_test0(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bool_t ivar_1;
        uint32_t ivar_3;
        charstrings__charstring_t ivar_16;
        testMilenage_record_1_t ivar_15;
        uint32_t len18939 = 10;
        uint32_t characters18940[10] = {92, 92, 110, 105, 110, 112, 117, 116, 58, 32};
        stringliteral_t string18938 = mk_string(10, characters18940);
        ivar_15 = (testMilenage_record_1_t)strings__make_string(len18939, string18938);
        charstrings__charstring_t ivar_10;
        //copying to charstrings__charstring from testMilenage_record_1;
        {
         ivar_10 = new_testMilenage_record_3();
         ivar_10->length = (uint32_t)mpz_get_ui(ivar_15->length);
         uint32_t record304394_length;
         record304394_length = (uint32_t)ivar_10->length;
         uint32_t tmp18941;
         //copying to uint32 from uint32;
         tmp18941 = (uint32_t)record304394_length;
         tmp18941 += 0;
         ivar_10->seq = new_testMilenage_array_2(tmp18941);
         mpz_t index_20;
         mpz_init(index_20);
         for (uint32_t index_19 = 0; index_19 < tmp18941; index_19++){
                 mpz_set_ui(index_20, index_19);
                 ivar_10->seq->elems[index_19] = (uint32_t)ivar_15->seq->ftbl->fptr(ivar_15->seq, index_20);
         };
         mpz_clear(index_20);
         testMilenage_array_2_t record304394_seq = (testMilenage_array_2_t)ivar_10->seq;
         if (record304394_seq != NULL) record304394_seq->count++;
        };
        release_testMilenage_record_1(ivar_15);
        testMilenage_record_1_t ivar_14;
        uint32_t len18943 = 6;
        uint32_t characters18944[6] = {32, 83, 81, 78, 58, 32};
        stringliteral_t string18942 = mk_string(6, characters18944);
        ivar_14 = (testMilenage_record_1_t)strings__make_string(len18943, string18942);
        charstrings__charstring_t ivar_11;
        //copying to charstrings__charstring from testMilenage_record_1;
        {
         ivar_11 = new_testMilenage_record_3();
         ivar_11->length = (uint32_t)mpz_get_ui(ivar_14->length);
         uint32_t record304394_length;
         record304394_length = (uint32_t)ivar_11->length;
         uint32_t tmp18945;
         //copying to uint32 from uint32;
         tmp18945 = (uint32_t)record304394_length;
         tmp18945 += 0;
         ivar_11->seq = new_testMilenage_array_2(tmp18945);
         mpz_t index_22;
         mpz_init(index_22);
         for (uint32_t index_21 = 0; index_21 < tmp18945; index_21++){
                 mpz_set_ui(index_22, index_21);
                 ivar_11->seq->elems[index_21] = (uint32_t)ivar_14->seq->ftbl->fptr(ivar_14->seq, index_22);
         };
         mpz_clear(index_22);
         testMilenage_array_2_t record304394_seq = (testMilenage_array_2_t)ivar_11->seq;
         if (record304394_seq != NULL) record304394_seq->count++;
        };
        release_testMilenage_record_1(ivar_14);
        charstrings__charstring_t ivar_9;
        ivar_9 = (charstrings__charstring_t)charstrings__doubleplus((charstrings__charstring_t)ivar_10, (charstrings__charstring_t)ivar_11);
        //copying to charstrings__charstring from charstrings__charstring;
        ivar_16 = (charstrings__charstring_t)ivar_9;
        if (ivar_16 != NULL) ivar_16->count++;
        release_charstrings__charstring(ivar_9);
        ivar_3 = (uint32_t)ivar_16->length;
        release_charstrings__charstring(ivar_16);
        uint64_t ivar_4;
        ivar_4 = (uint64_t)4294967296;
        ivar_1 = (ivar_3 < ivar_4);
        if (ivar_1){ 
             result = (bool_t)u_undef_quant_expr();
} else {
        
             result = (bool_t) false;
};

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t testMilenage__test0SQN(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_1;
        ivar_1 = (uint32_t)6;
        testMilenage_array_4_t ivar_6;
        uint32_t size18948;
        //copying to uint32 from uint32;
        size18948 = (uint32_t)ivar_1;
        size18948 += 0;
        ivar_6 = new_testMilenage_array_4(size18948);
        uint8_t ivar_5;
        for (uint32_t index18947 = 0; index18947 < size18948; index18947++){
             ivar_5 = (uint8_t)index18947;
             ivar_6->elems[index18947] = (uint8_t)63;
        };
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_1;
        result->seq = (testMilenage_array_4_t)ivar_6;

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t testMilenage__test0AMF(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_1;
        ivar_1 = (uint32_t)2;
        testMilenage_array_4_t ivar_6;
        uint32_t size18951;
        //copying to uint32 from uint32;
        size18951 = (uint32_t)ivar_1;
        size18951 += 0;
        ivar_6 = new_testMilenage_array_4(size18951);
        uint8_t ivar_5;
        for (uint32_t index18950 = 0; index18950 < size18951; index18950++){
             ivar_5 = (uint8_t)index18950;
             ivar_6->elems[index18950] = (uint8_t)27;
        };
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_1;
        result->seq = (testMilenage_array_4_t)ivar_6;

        defined = true;};
        
        return result;
}

extern testMilenage_array_4_t testMilenage__test0K(void){
        testMilenage_array_4_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_4;
        ivar_4 = (uint8_t)173;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)16;
        testMilenage_array_4_t ivar_3;
        ivar_3 = (testMilenage_array_4_t)Milenage__nbyv((uint8_t)ivar_4, (uint32_t)ivar_5);
        //copying to testMilenage_array_4 from testMilenage_array_4;
        result = (testMilenage_array_4_t)ivar_3;
        if (result != NULL) result->count++;
        release_testMilenage_array_4(ivar_3);

        defined = true;};
        
        return result;
}

extern testMilenage_array_4_t testMilenage__test0RAND(void){
        testMilenage_array_4_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_4;
        ivar_4 = (uint8_t)82;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)16;
        testMilenage_array_4_t ivar_3;
        ivar_3 = (testMilenage_array_4_t)Milenage__nbyv((uint8_t)ivar_4, (uint32_t)ivar_5);
        //copying to testMilenage_array_4 from testMilenage_array_4;
        result = (testMilenage_array_4_t)ivar_3;
        if (result != NULL) result->count++;
        release_testMilenage_array_4(ivar_3);

        defined = true;};
        
        return result;
}

extern testMilenage_array_4_t testMilenage__test0OP(void){
        testMilenage_array_4_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_4;
        ivar_4 = (uint8_t)99;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)16;
        testMilenage_array_4_t ivar_3;
        ivar_3 = (testMilenage_array_4_t)Milenage__nbyv((uint8_t)ivar_4, (uint32_t)ivar_5);
        //copying to testMilenage_array_4 from testMilenage_array_4;
        result = (testMilenage_array_4_t)ivar_3;
        if (result != NULL) result->count++;
        release_testMilenage_array_4(ivar_3);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t testMilenage__test0allfun(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    testMilenage_funtype_6_t ivar_8;
        testMilenage_funtype_8_t ivar_17;
        testMilenage_closure_9_t cl18952;
        cl18952 = new_testMilenage_closure_9();
        ivar_17 = (testMilenage_funtype_8_t)cl18952;
        testMilenage_funtype_6_t ivar_16;
        ivar_16 = (testMilenage_funtype_6_t)Milenage__testAllFun((Milenage_funtype_4_t)ivar_17);
        //copying to testMilenage_funtype_6 from testMilenage_funtype_6;
        ivar_8 = (testMilenage_funtype_6_t)ivar_16;
        if (ivar_8 != NULL) ivar_8->count++;
        release_testMilenage_funtype_6(ivar_16);
        bytestrings__bytestring_t ivar_18;
        ivar_18 = (bytestrings__bytestring_t)testMilenage__test0SQN();
        if (ivar_18 != NULL) ivar_18->count++;
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)testMilenage__test0AMF();
        if (ivar_19 != NULL) ivar_19->count++;
        testMilenage_array_4_t ivar_20;
        ivar_20 = (testMilenage_array_4_t)testMilenage__test0K();
        if (ivar_20 != NULL) ivar_20->count++;
        testMilenage_array_4_t ivar_21;
        ivar_21 = (testMilenage_array_4_t)testMilenage__test0RAND();
        if (ivar_21 != NULL) ivar_21->count++;
        testMilenage_array_4_t ivar_22;
        ivar_22 = (testMilenage_array_4_t)testMilenage__test0OP();
        if (ivar_22 != NULL) ivar_22->count++;
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)ivar_8->ftbl->mptr(ivar_8, ivar_18, ivar_19, ivar_20, ivar_21, ivar_22);
        ivar_8->ftbl->rptr(ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_6;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_6);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t testMilenage__test1SQN(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_9;
        testMilenage_record_1_t ivar_7;
        uint32_t len18955 = 12;
        uint32_t characters18956[12] = {48, 48, 48, 48, 48, 48, 48, 97, 100, 48, 49, 48};
        stringliteral_t string18954 = mk_string(12, characters18956);
        ivar_7 = (testMilenage_record_1_t)strings__make_string(len18955, string18954);
        strings__string_t ivar_5;
        //copying to strings__string from testMilenage_record_1;
        ivar_5 = (strings__string_t)ivar_7;
        if (ivar_5 != NULL) ivar_5->count++;
        release_testMilenage_record_1(ivar_7);
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

extern bytestrings__bytestring_t testMilenage__test1AMF(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_9;
        testMilenage_record_1_t ivar_7;
        uint32_t len18959 = 4;
        uint32_t characters18960[4] = {56, 48, 48, 48};
        stringliteral_t string18958 = mk_string(4, characters18960);
        ivar_7 = (testMilenage_record_1_t)strings__make_string(len18959, string18958);
        strings__string_t ivar_5;
        //copying to strings__string from testMilenage_record_1;
        ivar_5 = (strings__string_t)ivar_7;
        if (ivar_5 != NULL) ivar_5->count++;
        release_testMilenage_record_1(ivar_7);
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

extern testMilenage_array_4_t testMilenage__test1K(void){
        testMilenage_array_4_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_10;
        bytestrings__bytestring_t ivar_9;
        testMilenage_record_1_t ivar_7;
        uint32_t len18963 = 32;
        uint32_t characters18964[32] = {49, 50, 51, 52, 53, 53, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48};
        stringliteral_t string18962 = mk_string(32, characters18964);
        ivar_7 = (testMilenage_record_1_t)strings__make_string(len18963, string18962);
        strings__string_t ivar_5;
        //copying to strings__string from testMilenage_record_1;
        ivar_5 = (strings__string_t)ivar_7;
        if (ivar_5 != NULL) ivar_5->count++;
        release_testMilenage_record_1(ivar_7);
        bytestrings__bytestring_t ivar_4;
        ivar_4 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_5);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_9 = (bytestrings__bytestring_t)ivar_4;
        if (ivar_9 != NULL) ivar_9->count++;
        release_bytestrings__bytestring(ivar_4);
        bytestrings__bytestring_t ivar_8;
        ivar_8 = (bytestrings__bytestring_t)hex__hex2bytestring((bytestrings__bytestring_t)ivar_9);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_10 = (bytestrings__bytestring_t)ivar_8;
        if (ivar_10 != NULL) ivar_10->count++;
        release_bytestrings__bytestring(ivar_8);
        result = (testMilenage_array_4_t)ivar_10->seq;
        result->count++;
        release_bytestrings__bytestring(ivar_10);

        defined = true;};
        
        return result;
}

extern testMilenage_array_4_t testMilenage__test1RAND(void){
        testMilenage_array_4_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_10;
        bytestrings__bytestring_t ivar_9;
        testMilenage_record_1_t ivar_7;
        uint32_t len18967 = 32;
        uint32_t characters18968[32] = {48, 52, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 100, 54, 97, 98, 102, 56, 49, 51, 97, 56, 102, 57, 101, 101, 49};
        stringliteral_t string18966 = mk_string(32, characters18968);
        ivar_7 = (testMilenage_record_1_t)strings__make_string(len18967, string18966);
        strings__string_t ivar_5;
        //copying to strings__string from testMilenage_record_1;
        ivar_5 = (strings__string_t)ivar_7;
        if (ivar_5 != NULL) ivar_5->count++;
        release_testMilenage_record_1(ivar_7);
        bytestrings__bytestring_t ivar_4;
        ivar_4 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_5);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_9 = (bytestrings__bytestring_t)ivar_4;
        if (ivar_9 != NULL) ivar_9->count++;
        release_bytestrings__bytestring(ivar_4);
        bytestrings__bytestring_t ivar_8;
        ivar_8 = (bytestrings__bytestring_t)hex__hex2bytestring((bytestrings__bytestring_t)ivar_9);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_10 = (bytestrings__bytestring_t)ivar_8;
        if (ivar_10 != NULL) ivar_10->count++;
        release_bytestrings__bytestring(ivar_8);
        result = (testMilenage_array_4_t)ivar_10->seq;
        result->count++;
        release_bytestrings__bytestring(ivar_10);

        defined = true;};
        
        return result;
}

extern testMilenage_array_4_t testMilenage__test1OPc(void){
        testMilenage_array_4_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    /* inOPc */ bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_10;
        testMilenage_record_1_t ivar_8;
        uint32_t len18971 = 32;
        uint32_t characters18972[32] = {54, 51, 98, 102, 97, 53, 48, 101, 101, 54, 53, 50, 51, 51, 54, 53, 102, 102, 49, 52, 99, 49, 102, 52, 53, 102, 56, 56, 55, 51, 55, 100};
        stringliteral_t string18970 = mk_string(32, characters18972);
        ivar_8 = (testMilenage_record_1_t)strings__make_string(len18971, string18970);
        strings__string_t ivar_6;
        //copying to strings__string from testMilenage_record_1;
        ivar_6 = (strings__string_t)ivar_8;
        if (ivar_6 != NULL) ivar_6->count++;
        release_testMilenage_record_1(ivar_8);
        bytestrings__bytestring_t ivar_5;
        ivar_5 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_6);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_10 = (bytestrings__bytestring_t)ivar_5;
        if (ivar_10 != NULL) ivar_10->count++;
        release_bytestrings__bytestring(ivar_5);
        bytestrings__bytestring_t ivar_9;
        ivar_9 = (bytestrings__bytestring_t)hex__hex2bytestring((bytestrings__bytestring_t)ivar_10);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_1 = (bytestrings__bytestring_t)ivar_9;
        if (ivar_1 != NULL) ivar_1->count++;
        release_bytestrings__bytestring(ivar_9);
        result = (testMilenage_array_4_t)ivar_1->seq;
        result->count++;
        release_bytestrings__bytestring(ivar_1);

        defined = true;};
        
        return result;
}

extern testMilenage_array_4_t testMilenage__test1temp(void){
        testMilenage_array_4_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    testMilenage_funtype_11_t ivar_6;
        testMilenage_funtype_8_t ivar_15;
        testMilenage_closure_12_t cl18973;
        cl18973 = new_testMilenage_closure_12();
        ivar_15 = (testMilenage_funtype_8_t)cl18973;
        testMilenage_funtype_11_t ivar_14;
        ivar_14 = (testMilenage_funtype_11_t)Milenage__TEMP((Milenage_funtype_4_t)ivar_15);
        //copying to testMilenage_funtype_11 from testMilenage_funtype_11;
        ivar_6 = (testMilenage_funtype_11_t)ivar_14;
        if (ivar_6 != NULL) ivar_6->count++;
        release_testMilenage_funtype_11(ivar_14);
        testMilenage_array_4_t ivar_16;
        ivar_16 = (testMilenage_array_4_t)testMilenage__test1K();
        if (ivar_16 != NULL) ivar_16->count++;
        testMilenage_array_4_t ivar_17;
        ivar_17 = (testMilenage_array_4_t)testMilenage__test1RAND();
        if (ivar_17 != NULL) ivar_17->count++;
        testMilenage_array_4_t ivar_18;
        ivar_18 = (testMilenage_array_4_t)testMilenage__test1OPc();
        if (ivar_18 != NULL) ivar_18->count++;
        testMilenage_array_4_t ivar_4;
        ivar_4 = (testMilenage_array_4_t)ivar_6->ftbl->mptr(ivar_6, ivar_16, ivar_17, ivar_18);
        ivar_6->ftbl->rptr(ivar_6);
        //copying to testMilenage_array_4 from testMilenage_array_4;
        result = (testMilenage_array_4_t)ivar_4;
        if (result != NULL) result->count++;
        release_testMilenage_array_4(ivar_4);

        defined = true;};
        
        return result;
}

extern testMilenage_array_4_t testMilenage__test1IN1(void){
        testMilenage_array_4_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_4;
        ivar_4 = (bytestrings__bytestring_t)testMilenage__test1SQN();
        if (ivar_4 != NULL) ivar_4->count++;
        bytestrings__bytestring_t ivar_5;
        ivar_5 = (bytestrings__bytestring_t)testMilenage__test1AMF();
        if (ivar_5 != NULL) ivar_5->count++;
        testMilenage_array_4_t ivar_3;
        ivar_3 = (testMilenage_array_4_t)Milenage__IN1((bytestrings__bytestring_t)ivar_4, (bytestrings__bytestring_t)ivar_5);
        //copying to testMilenage_array_4 from testMilenage_array_4;
        result = (testMilenage_array_4_t)ivar_3;
        if (result != NULL) result->count++;
        release_testMilenage_array_4(ivar_3);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t testMilenage__testIN(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_8;
        bytestrings__bytestring_t ivar_5;
        ivar_5 = (bytestrings__bytestring_t)testMilenage__test1SQN();
        if (ivar_5 != NULL) ivar_5->count++;
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)testMilenage__test1AMF();
        if (ivar_6 != NULL) ivar_6->count++;
        bytestrings__bytestring_t ivar_4;
        ivar_4 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_5, (bytestrings__bytestring_t)ivar_6);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_8 = (bytestrings__bytestring_t)ivar_4;
        if (ivar_8 != NULL) ivar_8->count++;
        release_bytestrings__bytestring(ivar_4);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)hex__bytestring2hexstring((bytestrings__bytestring_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_7;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_7);

        defined = true;};
        
        return result;
}

extern testMilenage_array_4_t testMilenage__test1OUT1(void){
        testMilenage_array_4_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    testMilenage_funtype_14_t ivar_7;
        testMilenage_funtype_8_t ivar_16;
        testMilenage_closure_15_t cl18974;
        cl18974 = new_testMilenage_closure_15();
        ivar_16 = (testMilenage_funtype_8_t)cl18974;
        testMilenage_funtype_14_t ivar_15;
        ivar_15 = (testMilenage_funtype_14_t)Milenage__OUT1((Milenage_funtype_4_t)ivar_16);
        //copying to testMilenage_funtype_14 from testMilenage_funtype_14;
        ivar_7 = (testMilenage_funtype_14_t)ivar_15;
        if (ivar_7 != NULL) ivar_7->count++;
        release_testMilenage_funtype_14(ivar_15);
        testMilenage_array_4_t ivar_17;
        ivar_17 = (testMilenage_array_4_t)testMilenage__test1K();
        if (ivar_17 != NULL) ivar_17->count++;
        testMilenage_array_4_t ivar_18;
        ivar_18 = (testMilenage_array_4_t)testMilenage__test1temp();
        if (ivar_18 != NULL) ivar_18->count++;
        testMilenage_array_4_t ivar_19;
        ivar_19 = (testMilenage_array_4_t)testMilenage__test1IN1();
        if (ivar_19 != NULL) ivar_19->count++;
        testMilenage_array_4_t ivar_20;
        ivar_20 = (testMilenage_array_4_t)testMilenage__test1OPc();
        if (ivar_20 != NULL) ivar_20->count++;
        testMilenage_array_4_t ivar_5;
        ivar_5 = (testMilenage_array_4_t)ivar_7->ftbl->mptr(ivar_7, ivar_17, ivar_18, ivar_19, ivar_20);
        ivar_7->ftbl->rptr(ivar_7);
        //copying to testMilenage_array_4 from testMilenage_array_4;
        result = (testMilenage_array_4_t)ivar_5;
        if (result != NULL) result->count++;
        release_testMilenage_array_4(ivar_5);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t testMilenage__test1tempIN1OUT1(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_101;
        bytestrings__bytestring_t ivar_91;
        bytestrings__bytestring_t ivar_82;
        bytestrings__bytestring_t ivar_72;
        bytestrings__bytestring_t ivar_63;
        bytestrings__bytestring_t ivar_57;
        bytestrings__bytestring_t ivar_48;
        bytestrings__bytestring_t ivar_42;
        bytestrings__bytestring_t ivar_33;
        testMilenage_record_1_t ivar_24;
        uint32_t len18981 = 7;
        uint32_t characters18982[7] = {116, 101, 109, 112, 32, 61, 32};
        stringliteral_t string18980 = mk_string(7, characters18982);
        ivar_24 = (testMilenage_record_1_t)strings__make_string(len18981, string18980);
        strings__string_t ivar_22;
        //copying to strings__string from testMilenage_record_1;
        ivar_22 = (strings__string_t)ivar_24;
        if (ivar_22 != NULL) ivar_22->count++;
        release_testMilenage_record_1(ivar_24);
        bytestrings__bytestring_t ivar_21;
        ivar_21 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_22);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_33 = (bytestrings__bytestring_t)ivar_21;
        if (ivar_33 != NULL) ivar_33->count++;
        release_bytestrings__bytestring(ivar_21);
        bytestrings__bytestring_t ivar_34;
        bytestrings__bytestring_t ivar_31;
        /* n */ uint32_t ivar_28;
        ivar_28 = (uint32_t)16;
        testMilenage_array_4_t ivar_29;
        ivar_29 = (testMilenage_array_4_t)testMilenage__test1temp();
        if (ivar_29 != NULL) ivar_29->count++;
        bytestrings__bytestring_t ivar_27;
        ivar_27 = (bytestrings__bytestring_t)bytevectors__byv2bytestring((uint32_t)ivar_28, (bytevectors__byv_t)ivar_29);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_31 = (bytestrings__bytestring_t)ivar_27;
        if (ivar_31 != NULL) ivar_31->count++;
        release_bytestrings__bytestring(ivar_27);
        bytestrings__bytestring_t ivar_30;
        ivar_30 = (bytestrings__bytestring_t)hex__bytestring2hexstring((bytestrings__bytestring_t)ivar_31);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_34 = (bytestrings__bytestring_t)ivar_30;
        if (ivar_34 != NULL) ivar_34->count++;
        release_bytestrings__bytestring(ivar_30);
        bytestrings__bytestring_t ivar_32;
        ivar_32 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_33, (bytestrings__bytestring_t)ivar_34);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_42 = (bytestrings__bytestring_t)ivar_32;
        if (ivar_42 != NULL) ivar_42->count++;
        release_bytestrings__bytestring(ivar_32);
        bytestrings__bytestring_t ivar_43;
        testMilenage_record_1_t ivar_40;
        uint32_t len18984 = 5;
        uint32_t characters18985[5] = {32, 83, 81, 78, 32};
        stringliteral_t string18983 = mk_string(5, characters18985);
        ivar_40 = (testMilenage_record_1_t)strings__make_string(len18984, string18983);
        strings__string_t ivar_38;
        //copying to strings__string from testMilenage_record_1;
        ivar_38 = (strings__string_t)ivar_40;
        if (ivar_38 != NULL) ivar_38->count++;
        release_testMilenage_record_1(ivar_40);
        bytestrings__bytestring_t ivar_37;
        ivar_37 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_38);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_43 = (bytestrings__bytestring_t)ivar_37;
        if (ivar_43 != NULL) ivar_43->count++;
        release_bytestrings__bytestring(ivar_37);
        bytestrings__bytestring_t ivar_41;
        ivar_41 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_42, (bytestrings__bytestring_t)ivar_43);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_48 = (bytestrings__bytestring_t)ivar_41;
        if (ivar_48 != NULL) ivar_48->count++;
        release_bytestrings__bytestring(ivar_41);
        bytestrings__bytestring_t ivar_49;
        bytestrings__bytestring_t ivar_46;
        ivar_46 = (bytestrings__bytestring_t)testMilenage__test1SQN();
        if (ivar_46 != NULL) ivar_46->count++;
        bytestrings__bytestring_t ivar_45;
        ivar_45 = (bytestrings__bytestring_t)hex__bytestring2hexstring((bytestrings__bytestring_t)ivar_46);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_49 = (bytestrings__bytestring_t)ivar_45;
        if (ivar_49 != NULL) ivar_49->count++;
        release_bytestrings__bytestring(ivar_45);
        bytestrings__bytestring_t ivar_47;
        ivar_47 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_48, (bytestrings__bytestring_t)ivar_49);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_57 = (bytestrings__bytestring_t)ivar_47;
        if (ivar_57 != NULL) ivar_57->count++;
        release_bytestrings__bytestring(ivar_47);
        bytestrings__bytestring_t ivar_58;
        testMilenage_record_1_t ivar_55;
        uint32_t len18987 = 5;
        uint32_t characters18988[5] = {32, 65, 77, 70, 32};
        stringliteral_t string18986 = mk_string(5, characters18988);
        ivar_55 = (testMilenage_record_1_t)strings__make_string(len18987, string18986);
        strings__string_t ivar_53;
        //copying to strings__string from testMilenage_record_1;
        ivar_53 = (strings__string_t)ivar_55;
        if (ivar_53 != NULL) ivar_53->count++;
        release_testMilenage_record_1(ivar_55);
        bytestrings__bytestring_t ivar_52;
        ivar_52 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_53);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_58 = (bytestrings__bytestring_t)ivar_52;
        if (ivar_58 != NULL) ivar_58->count++;
        release_bytestrings__bytestring(ivar_52);
        bytestrings__bytestring_t ivar_56;
        ivar_56 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_57, (bytestrings__bytestring_t)ivar_58);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_63 = (bytestrings__bytestring_t)ivar_56;
        if (ivar_63 != NULL) ivar_63->count++;
        release_bytestrings__bytestring(ivar_56);
        bytestrings__bytestring_t ivar_64;
        bytestrings__bytestring_t ivar_61;
        ivar_61 = (bytestrings__bytestring_t)testMilenage__test1AMF();
        if (ivar_61 != NULL) ivar_61->count++;
        bytestrings__bytestring_t ivar_60;
        ivar_60 = (bytestrings__bytestring_t)hex__bytestring2hexstring((bytestrings__bytestring_t)ivar_61);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_64 = (bytestrings__bytestring_t)ivar_60;
        if (ivar_64 != NULL) ivar_64->count++;
        release_bytestrings__bytestring(ivar_60);
        bytestrings__bytestring_t ivar_62;
        ivar_62 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_63, (bytestrings__bytestring_t)ivar_64);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_72 = (bytestrings__bytestring_t)ivar_62;
        if (ivar_72 != NULL) ivar_72->count++;
        release_bytestrings__bytestring(ivar_62);
        bytestrings__bytestring_t ivar_73;
        testMilenage_record_1_t ivar_70;
        uint32_t len18990 = 7;
        uint32_t characters18991[7] = {32, 73, 78, 49, 32, 61, 32};
        stringliteral_t string18989 = mk_string(7, characters18991);
        ivar_70 = (testMilenage_record_1_t)strings__make_string(len18990, string18989);
        strings__string_t ivar_68;
        //copying to strings__string from testMilenage_record_1;
        ivar_68 = (strings__string_t)ivar_70;
        if (ivar_68 != NULL) ivar_68->count++;
        release_testMilenage_record_1(ivar_70);
        bytestrings__bytestring_t ivar_67;
        ivar_67 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_68);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_73 = (bytestrings__bytestring_t)ivar_67;
        if (ivar_73 != NULL) ivar_73->count++;
        release_bytestrings__bytestring(ivar_67);
        bytestrings__bytestring_t ivar_71;
        ivar_71 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_72, (bytestrings__bytestring_t)ivar_73);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_82 = (bytestrings__bytestring_t)ivar_71;
        if (ivar_82 != NULL) ivar_82->count++;
        release_bytestrings__bytestring(ivar_71);
        bytestrings__bytestring_t ivar_83;
        bytestrings__bytestring_t ivar_80;
        /* n */ uint32_t ivar_77;
        ivar_77 = (uint32_t)16;
        testMilenage_array_4_t ivar_78;
        ivar_78 = (testMilenage_array_4_t)testMilenage__test1IN1();
        if (ivar_78 != NULL) ivar_78->count++;
        bytestrings__bytestring_t ivar_76;
        ivar_76 = (bytestrings__bytestring_t)bytevectors__byv2bytestring((uint32_t)ivar_77, (bytevectors__byv_t)ivar_78);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_80 = (bytestrings__bytestring_t)ivar_76;
        if (ivar_80 != NULL) ivar_80->count++;
        release_bytestrings__bytestring(ivar_76);
        bytestrings__bytestring_t ivar_79;
        ivar_79 = (bytestrings__bytestring_t)hex__bytestring2hexstring((bytestrings__bytestring_t)ivar_80);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_83 = (bytestrings__bytestring_t)ivar_79;
        if (ivar_83 != NULL) ivar_83->count++;
        release_bytestrings__bytestring(ivar_79);
        bytestrings__bytestring_t ivar_81;
        ivar_81 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_82, (bytestrings__bytestring_t)ivar_83);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_91 = (bytestrings__bytestring_t)ivar_81;
        if (ivar_91 != NULL) ivar_91->count++;
        release_bytestrings__bytestring(ivar_81);
        bytestrings__bytestring_t ivar_92;
        testMilenage_record_1_t ivar_89;
        uint32_t len18993 = 8;
        uint32_t characters18994[8] = {32, 79, 85, 84, 49, 32, 61, 32};
        stringliteral_t string18992 = mk_string(8, characters18994);
        ivar_89 = (testMilenage_record_1_t)strings__make_string(len18993, string18992);
        strings__string_t ivar_87;
        //copying to strings__string from testMilenage_record_1;
        ivar_87 = (strings__string_t)ivar_89;
        if (ivar_87 != NULL) ivar_87->count++;
        release_testMilenage_record_1(ivar_89);
        bytestrings__bytestring_t ivar_86;
        ivar_86 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_87);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_92 = (bytestrings__bytestring_t)ivar_86;
        if (ivar_92 != NULL) ivar_92->count++;
        release_bytestrings__bytestring(ivar_86);
        bytestrings__bytestring_t ivar_90;
        ivar_90 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_91, (bytestrings__bytestring_t)ivar_92);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_101 = (bytestrings__bytestring_t)ivar_90;
        if (ivar_101 != NULL) ivar_101->count++;
        release_bytestrings__bytestring(ivar_90);
        bytestrings__bytestring_t ivar_102;
        bytestrings__bytestring_t ivar_99;
        /* n */ uint32_t ivar_96;
        ivar_96 = (uint32_t)16;
        testMilenage_array_4_t ivar_97;
        ivar_97 = (testMilenage_array_4_t)testMilenage__test1OUT1();
        if (ivar_97 != NULL) ivar_97->count++;
        bytestrings__bytestring_t ivar_95;
        ivar_95 = (bytestrings__bytestring_t)bytevectors__byv2bytestring((uint32_t)ivar_96, (bytevectors__byv_t)ivar_97);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_99 = (bytestrings__bytestring_t)ivar_95;
        if (ivar_99 != NULL) ivar_99->count++;
        release_bytestrings__bytestring(ivar_95);
        bytestrings__bytestring_t ivar_98;
        ivar_98 = (bytestrings__bytestring_t)hex__bytestring2hexstring((bytestrings__bytestring_t)ivar_99);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_102 = (bytestrings__bytestring_t)ivar_98;
        if (ivar_102 != NULL) ivar_102->count++;
        release_bytestrings__bytestring(ivar_98);
        bytestrings__bytestring_t ivar_100;
        ivar_100 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_101, (bytestrings__bytestring_t)ivar_102);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_100;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_100);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t testMilenage__test1allfunc(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    testMilenage_funtype_6_t ivar_8;
        testMilenage_funtype_8_t ivar_17;
        testMilenage_closure_16_t cl18995;
        cl18995 = new_testMilenage_closure_16();
        ivar_17 = (testMilenage_funtype_8_t)cl18995;
        testMilenage_funtype_6_t ivar_16;
        ivar_16 = (testMilenage_funtype_6_t)Milenage__testAllFunc((Milenage_funtype_4_t)ivar_17);
        //copying to testMilenage_funtype_6 from testMilenage_funtype_6;
        ivar_8 = (testMilenage_funtype_6_t)ivar_16;
        if (ivar_8 != NULL) ivar_8->count++;
        release_testMilenage_funtype_6(ivar_16);
        bytestrings__bytestring_t ivar_18;
        ivar_18 = (bytestrings__bytestring_t)testMilenage__test1SQN();
        if (ivar_18 != NULL) ivar_18->count++;
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)testMilenage__test1AMF();
        if (ivar_19 != NULL) ivar_19->count++;
        testMilenage_array_4_t ivar_20;
        ivar_20 = (testMilenage_array_4_t)testMilenage__test1K();
        if (ivar_20 != NULL) ivar_20->count++;
        testMilenage_array_4_t ivar_21;
        ivar_21 = (testMilenage_array_4_t)testMilenage__test1RAND();
        if (ivar_21 != NULL) ivar_21->count++;
        testMilenage_array_4_t ivar_22;
        ivar_22 = (testMilenage_array_4_t)testMilenage__test1OPc();
        if (ivar_22 != NULL) ivar_22->count++;
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)ivar_8->ftbl->mptr(ivar_8, ivar_18, ivar_19, ivar_20, ivar_21, ivar_22);
        ivar_8->ftbl->rptr(ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_6;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_6);

        defined = true;};
        
        return result;
}