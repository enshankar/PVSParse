//Code generated using pvs2ir2c
#include "transpose_c.h"

void release_transpose_funtype_0(transpose_funtype_0_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

transpose_funtype_0_t copy_transpose_funtype_0(transpose_funtype_0_t x){return x->ftbl->cptr(x);}

transpose_funtype_0_t equal_transpose_funtype_0(transpose_funtype_0_t x, transpose_funtype_0_t y){
        return false;}

void release_transpose_funtype_1(transpose_funtype_1_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

transpose_funtype_1_t copy_transpose_funtype_1(transpose_funtype_1_t x){return x->ftbl->cptr(x);}

transpose_funtype_1_t equal_transpose_funtype_1(transpose_funtype_1_t x, transpose_funtype_1_t y){
        return false;}

void release_transpose_funtype_2(transpose_funtype_2_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

transpose_funtype_2_t copy_transpose_funtype_2(transpose_funtype_2_t x){return x->ftbl->cptr(x);}

transpose_funtype_2_t equal_transpose_funtype_2(transpose_funtype_2_t x, transpose_funtype_2_t y){
        return false;}

void release_transpose_funtype_3(transpose_funtype_3_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

transpose_funtype_3_t copy_transpose_funtype_3(transpose_funtype_3_t x){return x->ftbl->cptr(x);}

transpose_funtype_3_t equal_transpose_funtype_3(transpose_funtype_3_t x, transpose_funtype_3_t y){
        return false;}


transpose_funtype_0_t f_transpose_closure_4(struct transpose_closure_4_s * closure, transpose__T2_t bvar){
        transpose_funtype_0_t result = h_transpose_closure_4(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

transpose_funtype_0_t m_transpose_closure_4(struct transpose_closure_4_s * closure, transpose__T2_t bvar){
        return h_transpose_closure_4(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern transpose_funtype_0_t h_transpose_closure_4(transpose__T2_t ivar_6, transpose_funtype_3_t ivar_1, type_actual_t transpose__T1, type_actual_t transpose__T3, type_actual_t transpose__T2){
        transpose_funtype_0_t result;
        transpose_closure_5_t cl14755;
        cl14755 = new_transpose_closure_5();
        cl14755->fvar_1 = (type_actual_t)transpose__T2;
        cl14755->fvar_2 = (type_actual_t)transpose__T3;
        cl14755->fvar_3 = (type_actual_t)transpose__T1;
        cl14755->fvar_4 = (transpose_funtype_3_t)ivar_1;
        cl14755->fvar_4->count++;
        cl14755->fvar_5 = (transpose__T2_t)ivar_6;
        transpose__T2->release_ptr(ivar_6, transpose__T2);
        result = (transpose_funtype_0_t)cl14755;

        return result;
}

transpose_closure_4_t new_transpose_closure_4(void){
        static struct transpose_funtype_1_ftbl_s ftbl = {.fptr = (transpose_funtype_0_t (*)(transpose_funtype_1_t, transpose__T2_t))&f_transpose_closure_4, .mptr = (transpose_funtype_0_t (*)(transpose_funtype_1_t, transpose__T2_t))&m_transpose_closure_4, .rptr =  (void (*)(transpose_funtype_1_t))&release_transpose_closure_4, .cptr = (transpose_funtype_1_t (*)(transpose_funtype_1_t))&copy_transpose_closure_4};
        transpose_closure_4_t tmp = (transpose_closure_4_t) safe_malloc(sizeof(struct transpose_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_transpose_closure_4(transpose_funtype_1_t closure){
        transpose_closure_4_t x = (transpose_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
         release_transpose_funtype_3(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

transpose_closure_4_t copy_transpose_closure_4(transpose_closure_4_t x){
        transpose_closure_4_t y = new_transpose_closure_4();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = (type_actual_t)x->fvar_3;
        y->fvar_4 = (type_actual_t)x->fvar_4;
        if (x->htbl != NULL){
            transpose_funtype_1_htbl_t new_htbl = (transpose_funtype_1_htbl_t) safe_malloc(sizeof(transpose_funtype_1_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            transpose_funtype_1_hashentry_t * new_data = (transpose_funtype_1_hashentry_t *) safe_malloc(new_htbl->size * sizeof(transpose_funtype_1_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(transpose_funtype_1_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


transpose__T3_t f_transpose_closure_5(struct transpose_closure_5_s * closure, transpose__T1_t bvar){
        transpose__T3_t result = h_transpose_closure_5(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

transpose__T3_t m_transpose_closure_5(struct transpose_closure_5_s * closure, transpose__T1_t bvar){
        return h_transpose_closure_5(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern transpose__T3_t h_transpose_closure_5(transpose__T1_t ivar_8, type_actual_t transpose__T2, type_actual_t transpose__T3, type_actual_t transpose__T1, transpose_funtype_3_t ivar_1, transpose__T2_t ivar_6){
        transpose__T3_t result;
        transpose_funtype_2_t ivar_12;
        transpose_funtype_2_t ivar_15;
        ivar_15 = (transpose_funtype_2_t)ivar_1->ftbl->fptr(ivar_1, ivar_8);
        //copying to transpose_funtype_2 from transpose_funtype_2;
        ivar_12 = (transpose_funtype_2_t)ivar_15;
        ivar_12->count++;
        release_transpose_funtype_2(ivar_15);
        ivar_6->count++;
        result = (transpose__T3_t)ivar_12->ftbl->fptr(ivar_12, ivar_6);
        ivar_12->ftbl->rptr(ivar_12);

        return result;
}

transpose_closure_5_t new_transpose_closure_5(void){
        static struct transpose_funtype_0_ftbl_s ftbl = {.fptr = (transpose__T3_t (*)(transpose_funtype_0_t, transpose__T1_t))&f_transpose_closure_5, .mptr = (transpose__T3_t (*)(transpose_funtype_0_t, transpose__T1_t))&m_transpose_closure_5, .rptr =  (void (*)(transpose_funtype_0_t))&release_transpose_closure_5, .cptr = (transpose_funtype_0_t (*)(transpose_funtype_0_t))&copy_transpose_closure_5};
        transpose_closure_5_t tmp = (transpose_closure_5_t) safe_malloc(sizeof(struct transpose_closure_5_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_transpose_closure_5(transpose_funtype_0_t closure){
        transpose_closure_5_t x = (transpose_closure_5_t)closure;
        x->count--;
        if (x->count <= 0){
         release_transpose_funtype_3(x->fvar_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

transpose_closure_5_t copy_transpose_closure_5(transpose_closure_5_t x){
        transpose_closure_5_t y = new_transpose_closure_5();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = (type_actual_t)x->fvar_3;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            transpose_funtype_0_htbl_t new_htbl = (transpose_funtype_0_htbl_t) safe_malloc(sizeof(transpose_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            transpose_funtype_0_hashentry_t * new_data = (transpose_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(transpose_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(transpose_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern transpose_funtype_1_t transpose__transpose(type_actual_t transpose__T1, type_actual_t transpose__T2, type_actual_t transpose__T3, transpose_funtype_3_t ivar_1){
        transpose_funtype_1_t result;
        transpose_closure_4_t cl14756;
        cl14756 = new_transpose_closure_4();
        cl14756->fvar_1 = (transpose_funtype_3_t)ivar_1;
        cl14756->fvar_1->count++;
        cl14756->fvar_2 = (type_actual_t)transpose__T1;
        cl14756->fvar_3 = (type_actual_t)transpose__T3;
        cl14756->fvar_4 = (type_actual_t)transpose__T2;
        release_transpose_funtype_3(ivar_1);
        result = (transpose_funtype_1_t)cl14756;

        return result;
}