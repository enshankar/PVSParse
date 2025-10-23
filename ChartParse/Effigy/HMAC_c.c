//Code generated using pvs2ir2c
#include "HMAC_c.h"

void release_HMAC_funtype_0(HMAC_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

HMAC_funtype_0_t copy_HMAC_funtype_0(HMAC_funtype_0_t x){return x->ftbl->cptr(x);}

bool_t equal_HMAC_funtype_0(HMAC_funtype_0_t x, HMAC_funtype_0_t y){
        return false;}


bytestrings__bytestring_t f_HMAC_closure_1(struct HMAC_closure_1_s * closure, bytestrings__bytestring_t bvar){
        bytestrings__bytestring_t result = h_HMAC_closure_1(bvar, closure->fvar_1); 
        return result;}

bytestrings__bytestring_t m_HMAC_closure_1(struct HMAC_closure_1_s * closure, bytestrings__bytestring_t bvar){
        return h_HMAC_closure_1(bvar, closure->fvar_1);}

extern bytestrings__bytestring_t h_HMAC_closure_1(bytestrings__bytestring_t ivar_3, uint8_t ivar_1){
        bytestrings__bytestring_t result;
        HMAC_array_2_t ivar_19;
        uint32_t size1450;
        //copying to uint32 from uint8;
        size1450 = (uint32_t)ivar_1;
        size1450 += 0;
        ivar_19 = new_HMAC_array_2(size1450);
        uint8_t ivar_7;
        for (uint32_t index1449 = 0; index1449 < size1450; index1449++){
             ivar_7 = (uint8_t)index1449;
             bool_t ivar_8;
             uint32_t ivar_10;
             ivar_10 = (uint32_t)ivar_3->length;
             ivar_8 = (ivar_7 < ivar_10);
             if (ivar_8){  
           HMAC_array_2_t ivar_16;
           ivar_16 = (HMAC_array_2_t)ivar_3->seq;
           ivar_16->count++;
           ivar_19->elems[index1449] = (uint8_t)ivar_16->elems[ivar_7];
           release_HMAC_array_2(ivar_16);
} else {
             
           ivar_19->elems[index1449] = (uint8_t)0;
};
        };
        release_bytestrings__bytestring(ivar_3);
        result = (HMAC_record_3_t)new_HMAC_record_3();;
        result->length = (uint32_t)ivar_1;
        result->seq = (HMAC_array_2_t)ivar_19;

        return result;
}

HMAC_closure_1_t new_HMAC_closure_1(void){
        static struct HMAC_funtype_0_ftbl_s ftbl = {.fptr = (bytestrings__bytestring_t (*)(HMAC_funtype_0_t, bytestrings__bytestring_t))&f_HMAC_closure_1, .mptr = (bytestrings__bytestring_t (*)(HMAC_funtype_0_t, bytestrings__bytestring_t))&m_HMAC_closure_1, .rptr =  (void (*)(HMAC_funtype_0_t))&release_HMAC_closure_1, .cptr = (HMAC_funtype_0_t (*)(HMAC_funtype_0_t))&copy_HMAC_closure_1};
        HMAC_closure_1_t tmp = (HMAC_closure_1_t) safe_malloc(sizeof(struct HMAC_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_HMAC_closure_1(HMAC_funtype_0_t closure){
        HMAC_closure_1_t x = (HMAC_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

HMAC_closure_1_t copy_HMAC_closure_1(HMAC_closure_1_t x){
        HMAC_closure_1_t y = new_HMAC_closure_1();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint8_t)x->fvar_1;
        if (x->htbl != NULL){
            HMAC_funtype_0_htbl_t new_htbl = (HMAC_funtype_0_htbl_t) safe_malloc(sizeof(HMAC_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            HMAC_funtype_0_hashentry_t * new_data = (HMAC_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(HMAC_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(HMAC_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


HMAC_array_2_t new_HMAC_array_2(uint32_t size){
        HMAC_array_2_t tmp = (HMAC_array_2_t) safe_malloc(sizeof(struct HMAC_array_2_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_HMAC_array_2(HMAC_array_2_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_HMAC_array_2_ptr(pointer_t x, type_actual_t T){
        release_HMAC_array_2((HMAC_array_2_t)x);
}

HMAC_array_2_t copy_HMAC_array_2(HMAC_array_2_t x){
        HMAC_array_2_t tmp = new_HMAC_array_2(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_HMAC_array_2(HMAC_array_2_t x, HMAC_array_2_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] = y->elems[i]); i++;};
        return tmp;}

bool_t equal_HMAC_array_2_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_HMAC_array_2((HMAC_array_2_t)x, (HMAC_array_2_t)y);
}

actual_HMAC_array_2_t actual_HMAC_array_2(){
        actual_HMAC_array_2_t new = (actual_HMAC_array_2_t)safe_malloc(sizeof(struct actual_HMAC_array_2_s));
        new->equal_ptr = (equal_ptr_t)(*equal_HMAC_array_2_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_HMAC_array_2_ptr);
 

 
        return new;
 };

HMAC_array_2_t update_HMAC_array_2(HMAC_array_2_t x, uint32_t i, uint8_t v){
        HMAC_array_2_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_HMAC_array_2(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

HMAC_array_2_t upgrade_HMAC_array_2(HMAC_array_2_t x, uint32_t i, uint8_t v){
        HMAC_array_2_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_malloc(sizeof(struct HMAC_array_2_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_HMAC_array_2(x);}
           else {y = copy_HMAC_array_2(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




HMAC_record_3_t new_HMAC_record_3(void){
        HMAC_record_3_t tmp = (HMAC_record_3_t) safe_malloc(sizeof(struct HMAC_record_3_s));
        tmp->count = 1;
        return tmp;}

void release_HMAC_record_3(HMAC_record_3_t x){
        x->count--;
        if (x->count <= 0){
         release_HMAC_array_2(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_HMAC_record_3_ptr(pointer_t x, type_actual_t T){
        release_HMAC_record_3((HMAC_record_3_t)x);
}

HMAC_record_3_t copy_HMAC_record_3(HMAC_record_3_t x){
        HMAC_record_3_t y = new_HMAC_record_3();
        y->length = (uint32_t)x->length;
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_HMAC_record_3(HMAC_record_3_t x, HMAC_record_3_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_HMAC_array_2(x->seq, y->seq);
        return tmp;}

bool_t equal_HMAC_record_3_ptr(pointer_t x, pointer_t y, actual_HMAC_record_3_t T){
        return equal_HMAC_record_3((HMAC_record_3_t)x, (HMAC_record_3_t)y);
}

actual_HMAC_record_3_t actual_HMAC_record_3(){
        actual_HMAC_record_3_t new = (actual_HMAC_record_3_t)safe_malloc(sizeof(struct actual_HMAC_record_3_s));
        new->equal_ptr = (equal_ptr_t)(*equal_HMAC_record_3_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_HMAC_record_3_ptr);
 

 
        return new;
 };

HMAC_record_3_t update_HMAC_record_3_length(HMAC_record_3_t x, uint32_t v){
        HMAC_record_3_t y;
        if (x->count == 1){y = x;}
        else {y = copy_HMAC_record_3(x); x->count--;};
        y->length = (uint32_t)v;
        return y;}

HMAC_record_3_t update_HMAC_record_3_seq(HMAC_record_3_t x, HMAC_array_2_t v){
        HMAC_record_3_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_HMAC_array_2(x->seq);};}
        else {y = copy_HMAC_record_3(x); x->count--; y->seq->count--;};
        y->seq = (HMAC_array_2_t)v;
        return y;}




HMAC_record_4_t new_HMAC_record_4(void){
        HMAC_record_4_t tmp = (HMAC_record_4_t) safe_malloc(sizeof(struct HMAC_record_4_s));
        tmp->count = 1;
        return tmp;}

void release_HMAC_record_4(HMAC_record_4_t x){
        x->count--;
        if (x->count <= 0){
         release_HMAC_record_3(x->project_1);
         release_HMAC_record_3(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_HMAC_record_4_ptr(pointer_t x, type_actual_t T){
        release_HMAC_record_4((HMAC_record_4_t)x);
}

HMAC_record_4_t copy_HMAC_record_4(HMAC_record_4_t x){
        HMAC_record_4_t y = new_HMAC_record_4();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_HMAC_record_4(HMAC_record_4_t x, HMAC_record_4_t y){
        bool_t tmp = true;
        tmp = tmp && equal_HMAC_record_3(x->project_1, y->project_1);
        tmp = tmp && equal_HMAC_record_3(x->project_2, y->project_2);
        return tmp;}

bool_t equal_HMAC_record_4_ptr(pointer_t x, pointer_t y, actual_HMAC_record_4_t T){
        return equal_HMAC_record_4((HMAC_record_4_t)x, (HMAC_record_4_t)y);
}

actual_HMAC_record_4_t actual_HMAC_record_4(){
        actual_HMAC_record_4_t new = (actual_HMAC_record_4_t)safe_malloc(sizeof(struct actual_HMAC_record_4_s));
        new->equal_ptr = (equal_ptr_t)(*equal_HMAC_record_4_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_HMAC_record_4_ptr);
 

 
        return new;
 };

HMAC_record_4_t update_HMAC_record_4_project_1(HMAC_record_4_t x, HMAC_record_3_t v){
        HMAC_record_4_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_HMAC_record_3(x->project_1);};}
        else {y = copy_HMAC_record_4(x); x->count--; y->project_1->count--;};
        y->project_1 = (HMAC_record_3_t)v;
        return y;}

HMAC_record_4_t update_HMAC_record_4_project_2(HMAC_record_4_t x, HMAC_record_3_t v){
        HMAC_record_4_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_HMAC_record_3(x->project_2);};}
        else {y = copy_HMAC_record_4(x); x->count--; y->project_2->count--;};
        y->project_2 = (HMAC_record_3_t)v;
        return y;}



void release_HMAC_funtype_5(HMAC_funtype_5_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

HMAC_funtype_5_t copy_HMAC_funtype_5(HMAC_funtype_5_t x){return x->ftbl->cptr(x);}

bool_t equal_HMAC_funtype_5(HMAC_funtype_5_t x, HMAC_funtype_5_t y){
        return false;}


HMAC_record_3_t f_HMAC_closure_6(struct HMAC_closure_6_s * closure, HMAC_record_4_t bvar){
        HMAC_record_3_t bvar_1;
        bvar_1 = (HMAC_record_3_t)bvar->project_1;
        bvar->project_1->count++;
        HMAC_record_3_t bvar_2;
        bvar_2 = (HMAC_record_3_t)bvar->project_2;
        bvar->project_2->count++;
        release_HMAC_record_4(bvar);
        HMAC_record_3_t result = h_HMAC_closure_6(bvar_1, bvar_2, closure->fvar_1); 
        release_HMAC_record_3(bvar_1);
        release_HMAC_record_3(bvar_2);
        return result;}

HMAC_record_3_t m_HMAC_closure_6(struct HMAC_closure_6_s * closure, HMAC_record_3_t bvar_1, HMAC_record_3_t bvar_2){
        return h_HMAC_closure_6(bvar_1, bvar_2, closure->fvar_1);}

extern HMAC_record_3_t h_HMAC_closure_6(HMAC_record_3_t ivar_3, HMAC_record_3_t ivar_4, uint8_t ivar_1){
        HMAC_record_3_t result;
        HMAC_array_2_t ivar_26;
        uint32_t size1459;
        //copying to uint32 from uint8;
        size1459 = (uint32_t)ivar_1;
        size1459 += 0;
        ivar_26 = new_HMAC_array_2(size1459);
        uint8_t ivar_8;
        for (uint32_t index1458 = 0; index1458 < size1459; index1458++){
             ivar_8 = (uint8_t)index1458;
             uint8_t ivar_24;
             HMAC_array_2_t ivar_14;
             ivar_14 = (HMAC_array_2_t)ivar_3->seq;
             ivar_14->count++;
             ivar_24 = (uint8_t)ivar_14->elems[ivar_8];
             release_HMAC_array_2(ivar_14);
             uint8_t ivar_25;
             HMAC_array_2_t ivar_20;
             ivar_20 = (HMAC_array_2_t)ivar_4->seq;
             ivar_20->count++;
             ivar_25 = (uint8_t)ivar_20->elems[ivar_8];
             release_HMAC_array_2(ivar_20);
             ivar_26->elems[index1458] = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_24, (uint8_t)ivar_25);
        };
        release_HMAC_record_3(ivar_3);
        release_HMAC_record_3(ivar_4);
        result = (HMAC_record_3_t)new_HMAC_record_3();;
        result->length = (uint32_t)ivar_1;
        result->seq = (HMAC_array_2_t)ivar_26;

        return result;
}

HMAC_closure_6_t new_HMAC_closure_6(void){
        static struct HMAC_funtype_5_ftbl_s ftbl = {.fptr = (HMAC_record_3_t (*)(HMAC_funtype_5_t, HMAC_record_4_t))&f_HMAC_closure_6, .mptr = (HMAC_record_3_t (*)(HMAC_funtype_5_t, HMAC_record_3_t, HMAC_record_3_t))&m_HMAC_closure_6, .rptr =  (void (*)(HMAC_funtype_5_t))&release_HMAC_closure_6, .cptr = (HMAC_funtype_5_t (*)(HMAC_funtype_5_t))&copy_HMAC_closure_6};
        HMAC_closure_6_t tmp = (HMAC_closure_6_t) safe_malloc(sizeof(struct HMAC_closure_6_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_HMAC_closure_6(HMAC_funtype_5_t closure){
        HMAC_closure_6_t x = (HMAC_closure_6_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

HMAC_closure_6_t copy_HMAC_closure_6(HMAC_closure_6_t x){
        HMAC_closure_6_t y = new_HMAC_closure_6();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint8_t)x->fvar_1;
        if (x->htbl != NULL){
            HMAC_funtype_5_htbl_t new_htbl = (HMAC_funtype_5_htbl_t) safe_malloc(sizeof(HMAC_funtype_5_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            HMAC_funtype_5_hashentry_t * new_data = (HMAC_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(HMAC_funtype_5_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(HMAC_funtype_5_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


HMAC_record_3_t f_HMAC_closure_7(struct HMAC_closure_7_s * closure, HMAC_record_3_t bvar){
        HMAC_record_3_t result = h_HMAC_closure_7(bvar); 
        return result;}

HMAC_record_3_t m_HMAC_closure_7(struct HMAC_closure_7_s * closure, HMAC_record_3_t bvar){
        return h_HMAC_closure_7(bvar);}

extern HMAC_record_3_t h_HMAC_closure_7(HMAC_record_3_t ivar_11){
        HMAC_record_3_t result;
        result = (HMAC_record_3_t)SHA256__sha256message((SHA256_record_4_t)ivar_11);

        return result;
}

HMAC_closure_7_t new_HMAC_closure_7(void){
        static struct HMAC_funtype_0_ftbl_s ftbl = {.fptr = (HMAC_record_3_t (*)(HMAC_funtype_0_t, HMAC_record_3_t))&f_HMAC_closure_7, .mptr = (HMAC_record_3_t (*)(HMAC_funtype_0_t, HMAC_record_3_t))&m_HMAC_closure_7, .rptr =  (void (*)(HMAC_funtype_0_t))&release_HMAC_closure_7, .cptr = (HMAC_funtype_0_t (*)(HMAC_funtype_0_t))&copy_HMAC_closure_7};
        HMAC_closure_7_t tmp = (HMAC_closure_7_t) safe_malloc(sizeof(struct HMAC_closure_7_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_HMAC_closure_7(HMAC_funtype_0_t closure){
        HMAC_closure_7_t x = (HMAC_closure_7_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

HMAC_closure_7_t copy_HMAC_closure_7(HMAC_closure_7_t x){
        HMAC_closure_7_t y = new_HMAC_closure_7();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            HMAC_funtype_0_htbl_t new_htbl = (HMAC_funtype_0_htbl_t) safe_malloc(sizeof(HMAC_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            HMAC_funtype_0_hashentry_t * new_data = (HMAC_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(HMAC_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(HMAC_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_HMAC_funtype_8(HMAC_funtype_8_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

HMAC_funtype_8_t copy_HMAC_funtype_8(HMAC_funtype_8_t x){return x->ftbl->cptr(x);}

uint32_t lookup_HMAC_funtype_8(HMAC_funtype_8_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; HMAC_funtype_8_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp1470 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp1470 == 0);
        bool_t keymatch;
        int64_t tmp1471 = mpz_cmp(data.key, i);
        keymatch = (tmp1471 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp1470 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp1470 == 0);

        int64_t tmp1471 = mpz_cmp(data.key, i);
        keymatch = (tmp1471 == 0);
                }
        return hashindex;
        }

HMAC_funtype_8_t dupdate_HMAC_funtype_8(HMAC_funtype_8_t a, mpz_ptr_t i, uint32_t v){
        HMAC_funtype_8_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (HMAC_funtype_8_htbl_t)safe_malloc(sizeof(struct HMAC_funtype_8_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (HMAC_funtype_8_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct HMAC_funtype_8_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        HMAC_funtype_8_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                HMAC_funtype_8_hashentry_t * new_data = (HMAC_funtype_8_hashentry_t *)safe_malloc(new_size * sizeof(struct HMAC_funtype_8_hashentry_s));
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp1472 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp1472 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp1473 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp1473 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp1474 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp1474 == 0);
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
        uint32_t hashindex = lookup_HMAC_funtype_8(htbl, i, ihash);
        HMAC_funtype_8_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp1475 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp1475 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;tempvalue = (uint32_t)v;};
        return a;

}

HMAC_funtype_8_t update_HMAC_funtype_8(HMAC_funtype_8_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_HMAC_funtype_8(a, i, v);
            } else {
                HMAC_funtype_8_t x = copy_HMAC_funtype_8(a);
                x->count--;
                return dupdate_HMAC_funtype_8(x, i, v);
            }}

bool_t equal_HMAC_funtype_8(HMAC_funtype_8_t x, HMAC_funtype_8_t y){
        return false;}


HMAC_record_9_t new_HMAC_record_9(void){
        HMAC_record_9_t tmp = (HMAC_record_9_t) safe_malloc(sizeof(struct HMAC_record_9_s));
        tmp->count = 1;
        return tmp;}

void release_HMAC_record_9(HMAC_record_9_t x){
        x->count--;
        if (x->count <= 0){
         release_HMAC_funtype_8(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_HMAC_record_9_ptr(pointer_t x, type_actual_t T){
        release_HMAC_record_9((HMAC_record_9_t)x);
}

HMAC_record_9_t copy_HMAC_record_9(HMAC_record_9_t x){
        HMAC_record_9_t y = new_HMAC_record_9();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_HMAC_record_9(HMAC_record_9_t x, HMAC_record_9_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_HMAC_funtype_8(x->seq, y->seq);
        return tmp;}

bool_t equal_HMAC_record_9_ptr(pointer_t x, pointer_t y, actual_HMAC_record_9_t T){
        return equal_HMAC_record_9((HMAC_record_9_t)x, (HMAC_record_9_t)y);
}

actual_HMAC_record_9_t actual_HMAC_record_9(){
        actual_HMAC_record_9_t new = (actual_HMAC_record_9_t)safe_malloc(sizeof(struct actual_HMAC_record_9_s));
        new->equal_ptr = (equal_ptr_t)(*equal_HMAC_record_9_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_HMAC_record_9_ptr);
 

 
        return new;
 };

HMAC_record_9_t update_HMAC_record_9_length(HMAC_record_9_t x, mpz_ptr_t v){
        HMAC_record_9_t y;
        if (x->count == 1){y = x;}
        else {y = copy_HMAC_record_9(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

HMAC_record_9_t update_HMAC_record_9_seq(HMAC_record_9_t x, HMAC_funtype_8_t v){
        HMAC_record_9_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_HMAC_funtype_8(x->seq);};}
        else {y = copy_HMAC_record_9(x); x->count--; y->seq->count--;};
        y->seq = (HMAC_funtype_8_t)v;
        return y;}



extern HMAC_funtype_0_t HMAC__padright(uint8_t ivar_1){
        HMAC_funtype_0_t result;
        HMAC_closure_1_t cl1451;
        cl1451 = new_HMAC_closure_1();
        cl1451->fvar_1 = (uint8_t)ivar_1;
        result = (HMAC_funtype_0_t)cl1451;

        return result;
}

extern HMAC_funtype_5_t HMAC__lbytesXOR(uint8_t ivar_1){
        HMAC_funtype_5_t result;
        HMAC_closure_6_t cl1460;
        cl1460 = new_HMAC_closure_6();
        cl1460->fvar_1 = (uint8_t)ivar_1;
        result = (HMAC_funtype_5_t)cl1460;

        return result;
}

extern HMAC_record_3_t HMAC__nbytes(uint8_t ivar_1, uint8_t ivar_2){
        HMAC_record_3_t result;
        HMAC_array_2_t ivar_7;
        uint32_t size1466;
        //copying to uint32 from uint8;
        size1466 = (uint32_t)ivar_2;
        size1466 += 0;
        ivar_7 = new_HMAC_array_2(size1466);
        uint8_t ivar_6;
        for (uint32_t index1465 = 0; index1465 < size1466; index1465++){
             ivar_6 = (uint8_t)index1465;
             //copying to uint8 from uint8;
             ivar_7->elems[index1465] = (uint8_t)ivar_1;
        };
        result = (HMAC_record_3_t)new_HMAC_record_3();;
        result->length = (uint32_t)ivar_2;
        result->seq = (HMAC_array_2_t)ivar_7;

        return result;
}

extern HMAC_record_3_t HMAC__hmac(HMAC_record_3_t ivar_1, HMAC_record_3_t ivar_2, uint8_t ivar_3, uint8_t ivar_4, HMAC_funtype_0_t ivar_5){
        HMAC_record_3_t result;
        /* newkey */ HMAC_record_3_t ivar_7;
        bool_t ivar_8;
        uint32_t ivar_9;
        ivar_9 = (uint32_t)ivar_1->length;
        ivar_8 = (ivar_9 > ivar_3);
        if (ivar_8){ 
             HMAC_record_3_t ivar_14;
             ivar_14 = (HMAC_record_3_t)ivar_5->ftbl->fptr(ivar_5, ivar_1);
             //copying to HMAC_record_3 from HMAC_record_3;
             ivar_7 = (HMAC_record_3_t)ivar_14;
             ivar_7->count++;
             release_HMAC_record_3(ivar_14);
} else {
        
             //copying to HMAC_record_3 from HMAC_record_3;
             ivar_7 = (HMAC_record_3_t)ivar_1;
             ivar_7->count++;
             release_HMAC_record_3(ivar_1);
};
        /* newerkey */ HMAC_record_3_t ivar_18;
        bool_t ivar_19;
        uint32_t ivar_20;
        ivar_20 = (uint32_t)ivar_7->length;
        ivar_19 = (ivar_20 < ivar_3);
        if (ivar_19){ 
             HMAC_funtype_0_t ivar_27;
             HMAC_funtype_0_t ivar_30;
             ivar_30 = (HMAC_funtype_0_t)HMAC__padright((uint8_t)ivar_3);
             //copying to HMAC_funtype_0 from HMAC_funtype_0;
             ivar_27 = (HMAC_funtype_0_t)ivar_30;
             ivar_27->count++;
             release_HMAC_funtype_0(ivar_30);
             HMAC_record_3_t ivar_25;
             ivar_25 = (HMAC_record_3_t)ivar_27->ftbl->fptr(ivar_27, ivar_7);
             ivar_27->ftbl->rptr(ivar_27);
             //copying to HMAC_record_3 from HMAC_record_3;
             ivar_18 = (HMAC_record_3_t)ivar_25;
             ivar_18->count++;
             release_HMAC_record_3(ivar_25);
} else {
        
             //copying to HMAC_record_3 from HMAC_record_3;
             ivar_18 = (HMAC_record_3_t)ivar_7;
             ivar_18->count++;
             release_HMAC_record_3(ivar_7);
};
        /* oKeyPad */ HMAC_record_3_t ivar_33;
        HMAC_funtype_5_t ivar_43;
        HMAC_funtype_5_t ivar_46;
        ivar_46 = (HMAC_funtype_5_t)HMAC__lbytesXOR((uint8_t)ivar_3);
        //copying to HMAC_funtype_5 from HMAC_funtype_5;
        ivar_43 = (HMAC_funtype_5_t)ivar_46;
        ivar_43->count++;
        release_HMAC_funtype_5(ivar_46);
        HMAC_record_3_t ivar_49;
        uint8_t ivar_39;
        ivar_39 = (uint8_t)92;
        HMAC_record_3_t ivar_38;
        ivar_38 = (HMAC_record_3_t)HMAC__nbytes((uint8_t)ivar_39, (uint8_t)ivar_3);
        //copying to HMAC_record_3 from HMAC_record_3;
        ivar_49 = (HMAC_record_3_t)ivar_38;
        ivar_49->count++;
        release_HMAC_record_3(ivar_38);
        HMAC_record_3_t ivar_41;
        ivar_18->count++;
        ivar_41 = (HMAC_record_3_t)ivar_43->ftbl->mptr(ivar_43, ivar_18, ivar_49);
        ivar_43->ftbl->rptr(ivar_43);
        //copying to HMAC_record_3 from HMAC_record_3;
        ivar_33 = (HMAC_record_3_t)ivar_41;
        ivar_33->count++;
        release_HMAC_record_3(ivar_41);
        /* iKeyPad */ HMAC_record_3_t ivar_50;
        HMAC_funtype_5_t ivar_60;
        HMAC_funtype_5_t ivar_63;
        ivar_63 = (HMAC_funtype_5_t)HMAC__lbytesXOR((uint8_t)ivar_3);
        //copying to HMAC_funtype_5 from HMAC_funtype_5;
        ivar_60 = (HMAC_funtype_5_t)ivar_63;
        ivar_60->count++;
        release_HMAC_funtype_5(ivar_63);
        HMAC_record_3_t ivar_66;
        uint8_t ivar_56;
        ivar_56 = (uint8_t)54;
        HMAC_record_3_t ivar_55;
        ivar_55 = (HMAC_record_3_t)HMAC__nbytes((uint8_t)ivar_56, (uint8_t)ivar_3);
        //copying to HMAC_record_3 from HMAC_record_3;
        ivar_66 = (HMAC_record_3_t)ivar_55;
        ivar_66->count++;
        release_HMAC_record_3(ivar_55);
        HMAC_record_3_t ivar_58;
        ivar_58 = (HMAC_record_3_t)ivar_60->ftbl->mptr(ivar_60, ivar_18, ivar_66);
        ivar_60->ftbl->rptr(ivar_60);
        //copying to HMAC_record_3 from HMAC_record_3;
        ivar_50 = (HMAC_record_3_t)ivar_58;
        ivar_50->count++;
        release_HMAC_record_3(ivar_58);
        HMAC_record_3_t ivar_86;
        HMAC_record_3_t ivar_82;
        HMAC_record_3_t ivar_79;
        HMAC_record_3_t ivar_73;
        ivar_73 = (HMAC_record_3_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_50, (bytestrings__bytestring_t)ivar_2);
        //copying to HMAC_record_3 from HMAC_record_3;
        ivar_79 = (HMAC_record_3_t)ivar_73;
        ivar_79->count++;
        release_HMAC_record_3(ivar_73);
        HMAC_record_3_t ivar_76;
        ivar_76 = (HMAC_record_3_t)ivar_5->ftbl->fptr(ivar_5, ivar_79);
        //copying to HMAC_record_3 from HMAC_record_3;
        ivar_82 = (HMAC_record_3_t)ivar_76;
        ivar_82->count++;
        release_HMAC_record_3(ivar_76);
        HMAC_record_3_t ivar_80;
        ivar_80 = (HMAC_record_3_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_33, (bytestrings__bytestring_t)ivar_82);
        //copying to HMAC_record_3 from HMAC_record_3;
        ivar_86 = (HMAC_record_3_t)ivar_80;
        ivar_86->count++;
        release_HMAC_record_3(ivar_80);
        HMAC_record_3_t ivar_83;
        ivar_83 = (HMAC_record_3_t)ivar_5->ftbl->fptr(ivar_5, ivar_86);
        ivar_5->ftbl->rptr(ivar_5);
        //copying to HMAC_record_3 from HMAC_record_3;
        result = (HMAC_record_3_t)ivar_83;
        result->count++;
        release_HMAC_record_3(ivar_83);

        return result;
}

extern HMAC_record_3_t HMAC__hmac256(HMAC_record_3_t ivar_1, HMAC_record_3_t ivar_2, uint8_t ivar_3, uint8_t ivar_4){
        HMAC_record_3_t result;
        HMAC_funtype_0_t ivar_19;
        HMAC_closure_7_t cl1467;
        cl1467 = new_HMAC_closure_7();
        ivar_19 = (HMAC_funtype_0_t)cl1467;
        HMAC_record_3_t ivar_14;
        ivar_14 = (HMAC_record_3_t)HMAC__hmac((HMAC_record_3_t)ivar_1, (HMAC_record_3_t)ivar_2, (uint8_t)ivar_3, (uint8_t)ivar_4, (HMAC_funtype_0_t)ivar_19);
        //copying to HMAC_record_3 from HMAC_record_3;
        result = (HMAC_record_3_t)ivar_14;
        result->count++;
        release_HMAC_record_3(ivar_14);

        return result;
}

extern HMAC_record_3_t HMAC__test1(void){
        HMAC_record_3_t result;
        HMAC_record_3_t ivar_22;
        HMAC_record_9_t ivar_12;
        uint32_t len1477 = 3;
        uint32_t characters1478[3] = {107, 101, 121};
        stringliteral_t string1476 = mk_string(3, characters1478);
        ivar_12 = (HMAC_record_9_t)strings__make_string(len1477, string1476);
        HMAC_record_9_t ivar_10;
        //copying to HMAC_record_9 from HMAC_record_9;
        ivar_10 = (HMAC_record_9_t)ivar_12;
        ivar_10->count++;
        release_HMAC_record_9(ivar_12);
        HMAC_record_3_t ivar_9;
        ivar_9 = (HMAC_record_3_t)bytestrings__mk_bytestring((strings__string_t)ivar_10);
        //copying to HMAC_record_3 from HMAC_record_3;
        ivar_22 = (HMAC_record_3_t)ivar_9;
        ivar_22->count++;
        release_HMAC_record_3(ivar_9);
        HMAC_record_3_t ivar_23;
        HMAC_record_9_t ivar_20;
        uint32_t len1480 = 43;
        uint32_t characters1481[43] = {84, 104, 101, 32, 113, 117, 105, 99, 107, 32, 98, 114, 111, 119, 110, 32, 102, 111, 120, 32, 106, 117, 109, 112, 115, 32, 111, 118, 101, 114, 32, 116, 104, 101, 32, 108, 97, 122, 121, 32, 100, 111, 103};
        stringliteral_t string1479 = mk_string(43, characters1481);
        ivar_20 = (HMAC_record_9_t)strings__make_string(len1480, string1479);
        HMAC_record_9_t ivar_18;
        //copying to HMAC_record_9 from HMAC_record_9;
        ivar_18 = (HMAC_record_9_t)ivar_20;
        ivar_18->count++;
        release_HMAC_record_9(ivar_20);
        HMAC_record_3_t ivar_17;
        ivar_17 = (HMAC_record_3_t)bytestrings__mk_bytestring((strings__string_t)ivar_18);
        //copying to HMAC_record_3 from HMAC_record_3;
        ivar_23 = (HMAC_record_3_t)ivar_17;
        ivar_23->count++;
        release_HMAC_record_3(ivar_17);
        uint8_t ivar_24;
        ivar_24 = (uint8_t)64;
        uint8_t ivar_25;
        ivar_25 = (uint8_t)32;
        HMAC_record_3_t ivar_21;
        ivar_21 = (HMAC_record_3_t)HMAC__hmac256((HMAC_record_3_t)ivar_22, (HMAC_record_3_t)ivar_23, (uint8_t)ivar_24, (uint8_t)ivar_25);
        //copying to HMAC_record_3 from HMAC_record_3;
        result = (HMAC_record_3_t)ivar_21;
        result->count++;
        release_HMAC_record_3(ivar_21);

        return result;
}