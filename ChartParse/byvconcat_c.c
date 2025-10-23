//Code generated using pvs2ir2c
#include "byvconcat_c.h"


byvconcat_array_0_t new_byvconcat_array_0(uint32_t size){
        byvconcat_array_0_t tmp = (byvconcat_array_0_t) safe_malloc(sizeof(struct byvconcat_array_0_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_byvconcat_array_0(byvconcat_array_0_t x, uint32_t m, uint32_t n){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_byvconcat_array_0_ptr(pointer_t x, type_actual_t T){
        actual_byvconcat_array_0_t actual = (actual_byvconcat_array_0_t)T;
        uint32_t m = actual->m;
        uint32_t n = actual->n;
        release_byvconcat_array_0((byvconcat_array_0_t)x, m, n);
}

byvconcat_array_0_t copy_byvconcat_array_0(byvconcat_array_0_t x){
        byvconcat_array_0_t tmp = new_byvconcat_array_0(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_byvconcat_array_0(byvconcat_array_0_t x, byvconcat_array_0_t y, uint32_t m, uint32_t n){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

bool_t equal_byvconcat_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T){
        actual_byvconcat_array_0_t actual = (actual_byvconcat_array_0_t)T;
        uint32_t m = actual->m;
        uint32_t n = actual->n;
        return equal_byvconcat_array_0((byvconcat_array_0_t)x, (byvconcat_array_0_t)y, m, n);
}

actual_byvconcat_array_0_t actual_byvconcat_array_0(uint32_t m, uint32_t n){
        actual_byvconcat_array_0_t new = (actual_byvconcat_array_0_t)safe_malloc(sizeof(struct actual_byvconcat_array_0_s));
        new->equal_ptr = (equal_ptr_t)(*equal_byvconcat_array_0_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_byvconcat_array_0_ptr);
 

        new->m = m;
        new->n = n;
 
        return new;
 };

byvconcat_array_0_t update_byvconcat_array_0(byvconcat_array_0_t x, uint32_t i, uint8_t v, uint32_t m, uint32_t n){
        byvconcat_array_0_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_byvconcat_array_0(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

byvconcat_array_0_t upgrade_byvconcat_array_0(byvconcat_array_0_t x, uint32_t i, uint8_t v, uint32_t m, uint32_t n){
        byvconcat_array_0_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_malloc(sizeof(struct byvconcat_array_0_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_byvconcat_array_0(x, m, n);}
           else {y = copy_byvconcat_array_0(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}



extern byvconcat_array_0_t byvconcat__doubleplus(uint32_t m, uint32_t n, byvconcat_array_0_t ivar_5, byvconcat_array_0_t ivar_6){
        byvconcat_array_0_t  result;
        mpz_t ivar_13;
        mpz_init(ivar_13);
        uint32_t size18795;
        uint32_t ivar_7;
        //copying to uint32 from uint32;
        ivar_7 = (uint32_t)m;
        uint32_t ivar_8;
        //copying to uint32 from uint32;
        ivar_8 = (uint32_t)n;
        size18795 = (uint32_t)(ivar_7 + ivar_8);
        size18795 += 0;
        result = new_byvconcat_array_0(size18795);
        for (uint32_t index18792 = 0; index18792 < size18795; index18792++){
             mpz_t ivar_13;
             mpz_init(ivar_13);
             mpz_set_ui(ivar_13, index18792);
             bool_t ivar_17;
             mpz_ptr_t ivar_18;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_18, ivar_13);
             int64_t tmp18793 = mpz_cmp_ui(ivar_18, m);
             ivar_17 = (tmp18793 < 0);
             if (ivar_17){  
           uint32_t ivar_24;
           //copying to uint32 from mpz;
           ivar_24 = (uint32_t)mpz_get_ui(ivar_13);
           mpz_clear(ivar_13);
           result->elems[index18792] = (uint8_t)ivar_5->elems[ivar_24];
} else {
             
           uint32_t ivar_31;
           mpz_ptr_t ivar_26;
           //copying to mpz from mpz;
           mpz_mk_set(ivar_26, ivar_13);
           mpz_clear(ivar_13);
           mpz_t tmp18794;
           mpz_init(tmp18794);
           mpz_sub_ui(tmp18794, ivar_26, m);
           ivar_31 = (uint32_t) mpz_get_ui(tmp18794);
           mpz_clear(tmp18794);
           result->elems[index18792] = (uint8_t)ivar_6->elems[ivar_31];
};
        };
        release_byvconcat_array_0(ivar_6, m, n);
        release_byvconcat_array_0(ivar_5, m, n);

        
        return result;
}