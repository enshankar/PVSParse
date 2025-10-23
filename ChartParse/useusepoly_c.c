//Code generated using pvs2ir2c
#include "useusepoly_c.h"


useusepoly__box_uint64_t new_useusepoly__box_uint64(uint16_t size){
        useusepoly__box_uint64_t tmp = (useusepoly__box_uint64_t) safe_malloc(sizeof(struct useusepoly__box_uint64_s) + (size * sizeof(uint64_t)));
        tmp->count = 1;
        tmp->size = size;
         return tmp;}

void release_useusepoly__box_uint64(useusepoly__box_uint64_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_useusepoly__box_uint64_ptr(pointer_t x, type_actual_t T){
        release_useusepoly__box_uint64((useusepoly__box_uint64_t)x);
}

useusepoly__box_uint64_t copy_useusepoly__box_uint64(useusepoly__box_uint64_t x){
        useusepoly__box_uint64_t tmp = new_useusepoly__box_uint64(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint64_t)x->elems[i];};
         return tmp;}

bool_t equal_useusepoly__box_uint64(useusepoly__box_uint64_t x, useusepoly__box_uint64_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] = y->elems[i]); i++;};
        return tmp;}

bool_t equal_useusepoly__box_uint64_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_useusepoly__box_uint64((useusepoly__box_uint64_t)x, (useusepoly__box_uint64_t)y);
}

actual_useusepoly__box_uint64_t actual_useusepoly__box_uint64(){
        actual_useusepoly__box_uint64_t new = (actual_useusepoly__box_uint64_t)safe_malloc(sizeof(struct actual_useusepoly__box_uint64_s));
        new->equal_ptr = (*equal_useusepoly__box_uint64_ptr);
 
        new->release_ptr = (*release_useusepoly__box_uint64_ptr);
 

 
        return new;
 };

useusepoly__box_uint64_t update_useusepoly__box_uint64(useusepoly__box_uint64_t x, uint32_t i, uint64_t v){
        useusepoly__box_uint64_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_useusepoly__box_uint64(x );
                x->count--;};
        y->elems[i] = (uint64_t)v;
        return y;}




useusepoly_array_1_t new_useusepoly_array_1(uint16_t size){
        useusepoly_array_1_t tmp = (useusepoly_array_1_t) safe_malloc(sizeof(struct useusepoly_array_1_s) + (size * sizeof(useusepoly__box_uint64_t)));
        tmp->count = 1;
        tmp->size = size;
        return tmp;}

void release_useusepoly_array_1(useusepoly_array_1_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < 4; i++){release_useusepoly__box_uint64(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_useusepoly_array_1_ptr(pointer_t x, type_actual_t T){
        release_useusepoly_array_1((useusepoly_array_1_t)x);
}

useusepoly_array_1_t copy_useusepoly_array_1(useusepoly_array_1_t x){
        useusepoly_array_1_t tmp = new_useusepoly_array_1(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_useusepoly_array_1(useusepoly_array_1_t x, useusepoly_array_1_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_useusepoly__box_uint64(x->elems[i], y->elems[i]);};
        return tmp;}

bool_t equal_useusepoly_array_1_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_useusepoly_array_1((useusepoly_array_1_t)x, (useusepoly_array_1_t)y);
}

actual_useusepoly_array_1_t actual_useusepoly_array_1(){
        actual_useusepoly_array_1_t new = (actual_useusepoly_array_1_t)safe_malloc(sizeof(struct actual_useusepoly_array_1_s));
        new->equal_ptr = (*equal_useusepoly_array_1_ptr);
 
        new->release_ptr = (*release_useusepoly_array_1_ptr);
 

 
        return new;
 };

useusepoly_array_1_t update_useusepoly_array_1(useusepoly_array_1_t x, uint32_t i, useusepoly__box_uint64_t v){
         useusepoly_array_1_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_useusepoly_array_1(x);
                      x->count--;};
        useusepoly__box_uint64_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_useusepoly__box_uint64(yelems[i]);};
         yelems[i] = v;
         return y;}



extern useusepoly__box_uint64_t useusepoly__square(uint8_t ivar_1){
        useusepoly__box_uint64_t result;
        result = new_useusepoly__box_uint64(1);
        for (uint32_t ivar_2 = 0; ivar_2 < 1; ivar_2++){
             result->elems[ivar_2] = (uint64_t)((uint64_t)ivar_1 * (uint64_t)ivar_1);
        };

        return result;
}

extern uint64_t useusepoly__test(void){
        uint64_t result;
        type_actual_t ivar_8;
        ivar_8 = (type_actual_t)actual_useusepoly__box_uint64();
        useusepoly__box_uint64_t ivar_3;
        useusepoly_array_1_t ivar_13;
        ivar_13 = new_useusepoly_array_1(4);
        for (uint32_t ivar_6 = 0; ivar_6 < 4; ivar_6++){
             ivar_13->elems[ivar_6] = (useusepoly__box_uint64_t)useusepoly__square((uint8_t)ivar_6);
        };
        usepoly__Ar_t ivar_11;
        //copying to usepoly__Ar from useusepoly_array_1;
        ivar_11 = (usepoly__Ar_t)ivar_13;
        ivar_11->count++;
        release_useusepoly_array_1(ivar_13);
        uint8_t ivar_12;
        ivar_12 = (uint8_t)3;
        useusepoly__box_uint64_t ivar_7;
        ivar_7 = (useusepoly__box_uint64_t)usepoly__checkidd((type_actual_t)ivar_8, (type_actual_t)ivar_8, (usepoly__Ar_t)ivar_11, (uint8_t)ivar_12);
        //copying to useusepoly__box_uint64 from useusepoly__box_uint64;
        ivar_3 = (useusepoly__box_uint64_t)ivar_7;
        ivar_3->count++;
        release_useusepoly__box_uint64(ivar_7);
        uint8_t ivar_14;
        ivar_14 = (uint8_t)0;
        result = (uint64_t)ivar_3->elems[ivar_14];
        release_useusepoly__box_uint64(ivar_3);
        safe_free(ivar_8);

        return result;
}