//Code generated using pvs2ir2c
#include "usepoly_c.h"


usepoly__Ar_t new_usepoly__Ar(uint16_t size){
        usepoly__Ar_t tmp = (usepoly__Ar_t) safe_malloc(sizeof(struct usepoly__Ar_s) + (size * sizeof(usepoly__T_t)));
        tmp->count = 1;
        tmp->size = size;
        return tmp;}

void release_usepoly__Ar(usepoly__Ar_t x, type_actual_t usepoly__S, type_actual_t usepoly__T){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < 4; i++){usepoly__T->release_ptr(x->elems[i], usepoly__T);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_usepoly__Ar_ptr(pointer_t x, type_actual_t T){
        actual_usepoly__Ar_t actual = (actual_usepoly__Ar_t)T;
        type_actual_t usepoly__S = actual->usepoly__S;
        type_actual_t usepoly__T = actual->usepoly__T;
        release_usepoly__Ar((usepoly__Ar_t)x, usepoly__S, usepoly__T);
}

usepoly__Ar_t copy_usepoly__Ar(usepoly__Ar_t x){
        usepoly__Ar_t tmp = new_usepoly__Ar(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_usepoly__Ar(usepoly__Ar_t x, usepoly__Ar_t y, type_actual_t usepoly__S, type_actual_t usepoly__T){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = usepoly__T->equal_ptr(x->elems[i], y->elems[i], usepoly__T);};
        return tmp;}

bool_t equal_usepoly__Ar_ptr(pointer_t x, pointer_t y, type_actual_t T){
        actual_usepoly__Ar_t actual = (actual_usepoly__Ar_t)T;
        type_actual_t usepoly__S = actual->usepoly__S;
        type_actual_t usepoly__T = actual->usepoly__T;
        return equal_usepoly__Ar((usepoly__Ar_t)x, (usepoly__Ar_t)y, usepoly__S, usepoly__T);
}

actual_usepoly__Ar_t actual_usepoly__Ar(type_actual_t usepoly__S, type_actual_t usepoly__T){
        actual_usepoly__Ar_t new = (actual_usepoly__Ar_t)safe_malloc(sizeof(struct actual_usepoly__Ar_s));
        new->equal_ptr = (*equal_usepoly__Ar_ptr);
 
        new->release_ptr = (*release_usepoly__Ar_ptr);
 

        new->usepoly__S = usepoly__S;
        new->usepoly__T = usepoly__T;
 
        return new;
 };

usepoly__Ar_t update_usepoly__Ar(usepoly__Ar_t x, uint32_t i, usepoly__T_t v, type_actual_t usepoly__S, type_actual_t usepoly__T){
         usepoly__Ar_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_usepoly__Ar(x);
                      x->count--;};
        usepoly__T_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){usepoly__T->release_ptr(yelems[i], usepoly__T);};
         yelems[i] = v;
         return y;}



extern usepoly__T_t usepoly__checkidd(type_actual_t usepoly__S, type_actual_t usepoly__T, usepoly__Ar_t ivar_1, uint8_t ivar_2){
        usepoly__T_t result;
        type_actual_t ivar_8;
        ivar_8 = (type_actual_t)actual_usepoly__Ar(usepoly__S,usepoly__T);
        usepoly__Ar_t ivar_5;
        poly__T_t ivar_10;
        //copying to poly__T from usepoly__Ar;
        ivar_10 = (poly__T_t)ivar_1;
        ivar_10->count++;
        release_usepoly__Ar(ivar_1, usepoly__S, usepoly__T);
        usepoly__Ar_t ivar_7;
        ivar_7 = (usepoly__Ar_t)poly__idd((type_actual_t)ivar_8, (poly__T_t)ivar_10);
        //copying to usepoly__Ar from usepoly__Ar;
        ivar_5 = (usepoly__Ar_t)ivar_7;
        ivar_5->count++;
        release_usepoly__Ar(ivar_7, usepoly__S, usepoly__T);
        result = (usepoly__T_t)ivar_5->elems[ivar_2];
        result->count++;
        release_usepoly__Ar(ivar_5, usepoly__S, usepoly__T);
        safe_free(ivar_8);

        return result;
}