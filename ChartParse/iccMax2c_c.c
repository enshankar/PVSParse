//Code generated using pvs2ir2c
#include "iccMax2c_c.h"


iccMax2c__result_adt_t new_iccMax2c__result_adt(void){
        iccMax2c__result_adt_t tmp = (iccMax2c__result_adt_t) safe_malloc(sizeof(struct iccMax2c__result_adt_s));
        tmp->count = 1;
        return tmp;}

void release_iccMax2c__result_adt(iccMax2c__result_adt_t x){
switch (x->iccMax2c__result_adt_index) {
case 0:  release_iccMax2c__error((iccMax2c__error_t) x); break;
case 1:  release_iccMax2c__value((iccMax2c__value_t) x); break;
}}

void release_iccMax2c__result_adt_ptr(pointer_t x, type_actual_t T){
        release_iccMax2c__result_adt((iccMax2c__result_adt_t)x);
}

iccMax2c__result_adt_t copy_iccMax2c__result_adt(iccMax2c__result_adt_t x){
        iccMax2c__result_adt_t y = new_iccMax2c__result_adt();
        y->iccMax2c__result_adt_index = (uint8_t)x->iccMax2c__result_adt_index;
        y->count = 1;
        return y;}

bool_t equal_iccMax2c__result_adt(iccMax2c__result_adt_t x, iccMax2c__result_adt_t y){
        bool_t tmp = x->iccMax2c__result_adt_index == y->iccMax2c__result_adt_index;
        switch  (x->iccMax2c__result_adt_index) {
                case 0: tmp = tmp && equal_iccMax2c__error((iccMax2c__error_t) x, (iccMax2c__error_t) y); break;
                case 1: tmp = tmp && equal_iccMax2c__value((iccMax2c__value_t) x, (iccMax2c__value_t) y); break;
        }
        return tmp;
}

bool_t equal_iccMax2c__result_adt_ptr(pointer_t x, pointer_t y, actual_iccMax2c__result_adt_t T){
        return equal_iccMax2c__result_adt((iccMax2c__result_adt_t)x, (iccMax2c__result_adt_t)y);
}

actual_iccMax2c__result_adt_t actual_iccMax2c__result_adt(){
        actual_iccMax2c__result_adt_t new = (actual_iccMax2c__result_adt_t)safe_malloc(sizeof(struct actual_iccMax2c__result_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_iccMax2c__result_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_iccMax2c__result_adt_ptr);
 

 
        return new;
 };

iccMax2c__result_adt_t update_iccMax2c__result_adt_iccMax2c__result_adt_index(iccMax2c__result_adt_t x, uint8_t v){
        iccMax2c__result_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c__result_adt(x); x->count--;};
        y->iccMax2c__result_adt_index = (uint8_t)v;
        return y;}




iccMax2c__error_t new_iccMax2c__error(void){
        iccMax2c__error_t tmp = (iccMax2c__error_t) safe_malloc(sizeof(struct iccMax2c__error_s));
        tmp->count = 1;
        return tmp;}

void release_iccMax2c__error(iccMax2c__error_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_iccMax2c__error_ptr(pointer_t x, type_actual_t T){
        release_iccMax2c__error((iccMax2c__error_t)x);
}

iccMax2c__error_t copy_iccMax2c__error(iccMax2c__error_t x){
        iccMax2c__error_t y = new_iccMax2c__error();
        y->iccMax2c__result_adt_index = (uint8_t)x->iccMax2c__result_adt_index;
        y->code = (uint8_t)x->code;
        y->loc = (uint32_t)x->loc;
        y->occ = (uint8_t)x->occ;
        y->count = 1;
        return y;}

bool_t equal_iccMax2c__error(iccMax2c__error_t x, iccMax2c__error_t y){
        bool_t tmp = true;
        tmp = tmp && x->iccMax2c__result_adt_index == y->iccMax2c__result_adt_index;
        tmp = tmp && x->code == y->code;
        tmp = tmp && x->loc == y->loc;
        tmp = tmp && x->occ == y->occ;
        return tmp;}

bool_t equal_iccMax2c__error_ptr(pointer_t x, pointer_t y, actual_iccMax2c__error_t T){
        return equal_iccMax2c__error((iccMax2c__error_t)x, (iccMax2c__error_t)y);
}

actual_iccMax2c__error_t actual_iccMax2c__error(){
        actual_iccMax2c__error_t new = (actual_iccMax2c__error_t)safe_malloc(sizeof(struct actual_iccMax2c__error_s));
        new->equal_ptr = (equal_ptr_t)(*equal_iccMax2c__error_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_iccMax2c__error_ptr);
 

 
        return new;
 };

iccMax2c__error_t update_iccMax2c__error_iccMax2c__result_adt_index(iccMax2c__error_t x, uint8_t v){
        iccMax2c__error_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c__error(x); x->count--;};
        y->iccMax2c__result_adt_index = (uint8_t)v;
        return y;}

iccMax2c__error_t update_iccMax2c__error_code(iccMax2c__error_t x, uint8_t v){
        iccMax2c__error_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c__error(x); x->count--;};
        y->code = (uint8_t)v;
        return y;}

iccMax2c__error_t update_iccMax2c__error_loc(iccMax2c__error_t x, uint32_t v){
        iccMax2c__error_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c__error(x); x->count--;};
        y->loc = (uint32_t)v;
        return y;}

iccMax2c__error_t update_iccMax2c__error_occ(iccMax2c__error_t x, uint8_t v){
        iccMax2c__error_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c__error(x); x->count--;};
        y->occ = (uint8_t)v;
        return y;}




iccMax2c__value_t new_iccMax2c__value(void){
        iccMax2c__value_t tmp = (iccMax2c__value_t) safe_malloc(sizeof(struct iccMax2c__value_s));
        tmp->count = 1;
        return tmp;}

void release_iccMax2c__value(iccMax2c__value_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_iccMax2c__value_ptr(pointer_t x, type_actual_t T){
        release_iccMax2c__value((iccMax2c__value_t)x);
}

iccMax2c__value_t copy_iccMax2c__value(iccMax2c__value_t x){
        iccMax2c__value_t y = new_iccMax2c__value();
        y->iccMax2c__result_adt_index = (uint8_t)x->iccMax2c__result_adt_index;
        y->vmax = (uint64_t)x->vmax;
        y->vmin = (uint64_t)x->vmin;
        y->count = 1;
        return y;}

bool_t equal_iccMax2c__value(iccMax2c__value_t x, iccMax2c__value_t y){
        bool_t tmp = true;
        tmp = tmp && x->iccMax2c__result_adt_index == y->iccMax2c__result_adt_index;
        tmp = tmp && x->vmax == y->vmax;
        tmp = tmp && x->vmin == y->vmin;
        return tmp;}

bool_t equal_iccMax2c__value_ptr(pointer_t x, pointer_t y, actual_iccMax2c__value_t T){
        return equal_iccMax2c__value((iccMax2c__value_t)x, (iccMax2c__value_t)y);
}

actual_iccMax2c__value_t actual_iccMax2c__value(){
        actual_iccMax2c__value_t new = (actual_iccMax2c__value_t)safe_malloc(sizeof(struct actual_iccMax2c__value_s));
        new->equal_ptr = (equal_ptr_t)(*equal_iccMax2c__value_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_iccMax2c__value_ptr);
 

 
        return new;
 };

iccMax2c__value_t update_iccMax2c__value_iccMax2c__result_adt_index(iccMax2c__value_t x, uint8_t v){
        iccMax2c__value_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c__value(x); x->count--;};
        y->iccMax2c__result_adt_index = (uint8_t)v;
        return y;}

iccMax2c__value_t update_iccMax2c__value_vmax(iccMax2c__value_t x, uint64_t v){
        iccMax2c__value_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c__value(x); x->count--;};
        y->vmax = (uint64_t)v;
        return y;}

iccMax2c__value_t update_iccMax2c__value_vmin(iccMax2c__value_t x, uint64_t v){
        iccMax2c__value_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c__value(x); x->count--;};
        y->vmin = (uint64_t)v;
        return y;}



void release_iccMax2c_funtype_3(iccMax2c_funtype_3_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_3_t copy_iccMax2c_funtype_3(iccMax2c_funtype_3_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_3(iccMax2c_funtype_3_t x, iccMax2c_funtype_3_t y){
        return false;}

void release_iccMax2c_funtype_4(iccMax2c_funtype_4_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_4_t copy_iccMax2c_funtype_4(iccMax2c_funtype_4_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_4(iccMax2c_funtype_4_t x, iccMax2c_funtype_4_t y){
        return false;}


iccMax2c_record_5_t new_iccMax2c_record_5(void){
        iccMax2c_record_5_t tmp = (iccMax2c_record_5_t) safe_malloc(sizeof(struct iccMax2c_record_5_s));
        tmp->count = 1;
        return tmp;}

void release_iccMax2c_record_5(iccMax2c_record_5_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_iccMax2c_record_5_ptr(pointer_t x, type_actual_t T){
        release_iccMax2c_record_5((iccMax2c_record_5_t)x);
}

iccMax2c_record_5_t copy_iccMax2c_record_5(iccMax2c_record_5_t x){
        iccMax2c_record_5_t y = new_iccMax2c_record_5();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->count = 1;
        return y;}

bool_t equal_iccMax2c_record_5(iccMax2c_record_5_t x, iccMax2c_record_5_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        return tmp;}

bool_t equal_iccMax2c_record_5_ptr(pointer_t x, pointer_t y, actual_iccMax2c_record_5_t T){
        return equal_iccMax2c_record_5((iccMax2c_record_5_t)x, (iccMax2c_record_5_t)y);
}

actual_iccMax2c_record_5_t actual_iccMax2c_record_5(){
        actual_iccMax2c_record_5_t new = (actual_iccMax2c_record_5_t)safe_malloc(sizeof(struct actual_iccMax2c_record_5_s));
        new->equal_ptr = (equal_ptr_t)(*equal_iccMax2c_record_5_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_iccMax2c_record_5_ptr);
 

 
        return new;
 };

iccMax2c_record_5_t update_iccMax2c_record_5_project_1(iccMax2c_record_5_t x, uint8_t v){
        iccMax2c_record_5_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c_record_5(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

iccMax2c_record_5_t update_iccMax2c_record_5_project_2(iccMax2c_record_5_t x, uint32_t v){
        iccMax2c_record_5_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c_record_5(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

iccMax2c_record_5_t update_iccMax2c_record_5_project_3(iccMax2c_record_5_t x, uint8_t v){
        iccMax2c_record_5_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c_record_5(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}



void release_iccMax2c_funtype_6(iccMax2c_funtype_6_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_6_t copy_iccMax2c_funtype_6(iccMax2c_funtype_6_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_6(iccMax2c_funtype_6_t x, iccMax2c_funtype_6_t y){
        return false;}


iccMax2c_record_7_t new_iccMax2c_record_7(void){
        iccMax2c_record_7_t tmp = (iccMax2c_record_7_t) safe_malloc(sizeof(struct iccMax2c_record_7_s));
        tmp->count = 1;
        return tmp;}

void release_iccMax2c_record_7(iccMax2c_record_7_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_iccMax2c_record_7_ptr(pointer_t x, type_actual_t T){
        release_iccMax2c_record_7((iccMax2c_record_7_t)x);
}

iccMax2c_record_7_t copy_iccMax2c_record_7(iccMax2c_record_7_t x){
        iccMax2c_record_7_t y = new_iccMax2c_record_7();
        y->project_1 = (uint64_t)x->project_1;
        y->project_2 = (uint64_t)x->project_2;
        y->count = 1;
        return y;}

bool_t equal_iccMax2c_record_7(iccMax2c_record_7_t x, iccMax2c_record_7_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

bool_t equal_iccMax2c_record_7_ptr(pointer_t x, pointer_t y, actual_iccMax2c_record_7_t T){
        return equal_iccMax2c_record_7((iccMax2c_record_7_t)x, (iccMax2c_record_7_t)y);
}

actual_iccMax2c_record_7_t actual_iccMax2c_record_7(){
        actual_iccMax2c_record_7_t new = (actual_iccMax2c_record_7_t)safe_malloc(sizeof(struct actual_iccMax2c_record_7_s));
        new->equal_ptr = (equal_ptr_t)(*equal_iccMax2c_record_7_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_iccMax2c_record_7_ptr);
 

 
        return new;
 };

iccMax2c_record_7_t update_iccMax2c_record_7_project_1(iccMax2c_record_7_t x, uint64_t v){
        iccMax2c_record_7_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c_record_7(x); x->count--;};
        y->project_1 = (uint64_t)v;
        return y;}

iccMax2c_record_7_t update_iccMax2c_record_7_project_2(iccMax2c_record_7_t x, uint64_t v){
        iccMax2c_record_7_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c_record_7(x); x->count--;};
        y->project_2 = (uint64_t)v;
        return y;}



void release_iccMax2c_funtype_8(iccMax2c_funtype_8_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_8_t copy_iccMax2c_funtype_8(iccMax2c_funtype_8_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_8(iccMax2c_funtype_8_t x, iccMax2c_funtype_8_t y){
        return false;}


mpz_ptr_t f_iccMax2c_closure_9(struct iccMax2c_closure_9_s * closure, iccMax2c__result_adt_t bvar){
        mpz_ptr_t result = h_iccMax2c_closure_9(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_iccMax2c_closure_9(struct iccMax2c_closure_9_s * closure, iccMax2c__result_adt_t bvar){
        return h_iccMax2c_closure_9(bvar, closure->fvar_1, closure->fvar_2);}

extern mpz_ptr_t h_iccMax2c_closure_9(iccMax2c__result_adt_t ivar_6, iccMax2c_funtype_6_t ivar_1, iccMax2c_funtype_8_t ivar_3){
        mpz_ptr_t result;
        bool_t ivar_76;
        ivar_6->count++;
        ivar_76 = (bool_t)r_iccMax2c__errorp((iccMax2c__result_adt_t)ivar_6);
        if (ivar_76){ 
             uint8_t ivar_55;
             ivar_6->count++;
             ivar_55 = (uint8_t)iccMax2c__result_adt_code((iccMax2c__result_adt_t)ivar_6);
             uint32_t ivar_56;
             ivar_6->count++;
             ivar_56 = (uint32_t)iccMax2c__result_adt_loc((iccMax2c__result_adt_t)ivar_6);
             uint8_t ivar_57;
             ivar_57 = (uint8_t)iccMax2c__result_adt_occ((iccMax2c__result_adt_t)ivar_6);
             iccMax2c_funtype_6_t ivar_72;
             //copying to iccMax2c_funtype_6 from iccMax2c_funtype_6;
             ivar_72 = (iccMax2c_funtype_6_t)ivar_1;
             if (ivar_72 != NULL) ivar_72->count++;
             result = (mpz_ptr_t)ivar_72->ftbl->mptr(ivar_72, ivar_55, ivar_56, ivar_57);
             ivar_72->ftbl->rptr(ivar_72);
} else {
        
             uint64_t ivar_80;
             ivar_6->count++;
             ivar_80 = (uint64_t)iccMax2c__result_adt_vmax((iccMax2c__result_adt_t)ivar_6);
             uint64_t ivar_81;
             ivar_81 = (uint64_t)iccMax2c__result_adt_vmin((iccMax2c__result_adt_t)ivar_6);
             iccMax2c_funtype_8_t ivar_92;
             //copying to iccMax2c_funtype_8 from iccMax2c_funtype_8;
             ivar_92 = (iccMax2c_funtype_8_t)ivar_3;
             if (ivar_92 != NULL) ivar_92->count++;
             result = (mpz_ptr_t)ivar_92->ftbl->mptr(ivar_92, ivar_80, ivar_81);
             ivar_92->ftbl->rptr(ivar_92);
};

        return result;
}

iccMax2c_closure_9_t new_iccMax2c_closure_9(void){
        static struct iccMax2c_funtype_4_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(iccMax2c_funtype_4_t, iccMax2c__result_adt_t))&f_iccMax2c_closure_9, .mptr = (mpz_ptr_t (*)(iccMax2c_funtype_4_t, iccMax2c__result_adt_t))&m_iccMax2c_closure_9, .rptr =  (void (*)(iccMax2c_funtype_4_t))&release_iccMax2c_closure_9, .cptr = (iccMax2c_funtype_4_t (*)(iccMax2c_funtype_4_t))&copy_iccMax2c_closure_9};
        iccMax2c_closure_9_t tmp = (iccMax2c_closure_9_t) safe_malloc(sizeof(struct iccMax2c_closure_9_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_iccMax2c_closure_9(iccMax2c_funtype_4_t closure){
        iccMax2c_closure_9_t x = (iccMax2c_closure_9_t)closure;
        x->count--;
        if (x->count <= 0){
         release_iccMax2c_funtype_6(x->fvar_1);
         release_iccMax2c_funtype_8(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

iccMax2c_closure_9_t copy_iccMax2c_closure_9(iccMax2c_closure_9_t x){
        iccMax2c_closure_9_t y = new_iccMax2c_closure_9();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            iccMax2c_funtype_4_htbl_t new_htbl = (iccMax2c_funtype_4_htbl_t) safe_malloc(sizeof(struct iccMax2c_funtype_4_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            iccMax2c_funtype_4_hashentry_t * new_data = (iccMax2c_funtype_4_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct iccMax2c_funtype_4_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct iccMax2c_funtype_4_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


iccMax2c_record_10_t new_iccMax2c_record_10(void){
        iccMax2c_record_10_t tmp = (iccMax2c_record_10_t) safe_malloc(sizeof(struct iccMax2c_record_10_s));
        tmp->count = 1;
        return tmp;}

void release_iccMax2c_record_10(iccMax2c_record_10_t x){
        x->count--;
        if (x->count <= 0){
         release_iccMax2c__result_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_iccMax2c_record_10_ptr(pointer_t x, type_actual_t T){
        release_iccMax2c_record_10((iccMax2c_record_10_t)x);
}

iccMax2c_record_10_t copy_iccMax2c_record_10(iccMax2c_record_10_t x){
        iccMax2c_record_10_t y = new_iccMax2c_record_10();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_iccMax2c_record_10(iccMax2c_record_10_t x, iccMax2c_record_10_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && equal_iccMax2c__result_adt(x->project_4, y->project_4);
        return tmp;}

bool_t equal_iccMax2c_record_10_ptr(pointer_t x, pointer_t y, actual_iccMax2c_record_10_t T){
        return equal_iccMax2c_record_10((iccMax2c_record_10_t)x, (iccMax2c_record_10_t)y);
}

actual_iccMax2c_record_10_t actual_iccMax2c_record_10(){
        actual_iccMax2c_record_10_t new = (actual_iccMax2c_record_10_t)safe_malloc(sizeof(struct actual_iccMax2c_record_10_s));
        new->equal_ptr = (equal_ptr_t)(*equal_iccMax2c_record_10_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_iccMax2c_record_10_ptr);
 

 
        return new;
 };

iccMax2c_record_10_t update_iccMax2c_record_10_project_1(iccMax2c_record_10_t x, uint8_t v){
        iccMax2c_record_10_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c_record_10(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

iccMax2c_record_10_t update_iccMax2c_record_10_project_2(iccMax2c_record_10_t x, uint32_t v){
        iccMax2c_record_10_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c_record_10(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

iccMax2c_record_10_t update_iccMax2c_record_10_project_3(iccMax2c_record_10_t x, uint8_t v){
        iccMax2c_record_10_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c_record_10(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}

iccMax2c_record_10_t update_iccMax2c_record_10_project_4(iccMax2c_record_10_t x, iccMax2c__result_adt_t v){
        iccMax2c_record_10_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_iccMax2c__result_adt(x->project_4);};}
        else {y = copy_iccMax2c_record_10(x); x->count--; y->project_4->count--;};
        y->project_4 = (iccMax2c__result_adt_t)v;
        return y;}



void release_iccMax2c_funtype_11(iccMax2c_funtype_11_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_11_t copy_iccMax2c_funtype_11(iccMax2c_funtype_11_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_11(iccMax2c_funtype_11_t x, iccMax2c_funtype_11_t y){
        return false;}


iccMax2c_record_12_t new_iccMax2c_record_12(void){
        iccMax2c_record_12_t tmp = (iccMax2c_record_12_t) safe_malloc(sizeof(struct iccMax2c_record_12_s));
        tmp->count = 1;
        return tmp;}

void release_iccMax2c_record_12(iccMax2c_record_12_t x){
        x->count--;
        if (x->count <= 0){
         release_iccMax2c__result_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_iccMax2c_record_12_ptr(pointer_t x, type_actual_t T){
        release_iccMax2c_record_12((iccMax2c_record_12_t)x);
}

iccMax2c_record_12_t copy_iccMax2c_record_12(iccMax2c_record_12_t x){
        iccMax2c_record_12_t y = new_iccMax2c_record_12();
        y->project_1 = (uint64_t)x->project_1;
        y->project_2 = (uint64_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_iccMax2c_record_12(iccMax2c_record_12_t x, iccMax2c_record_12_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_iccMax2c__result_adt(x->project_3, y->project_3);
        return tmp;}

bool_t equal_iccMax2c_record_12_ptr(pointer_t x, pointer_t y, actual_iccMax2c_record_12_t T){
        return equal_iccMax2c_record_12((iccMax2c_record_12_t)x, (iccMax2c_record_12_t)y);
}

actual_iccMax2c_record_12_t actual_iccMax2c_record_12(){
        actual_iccMax2c_record_12_t new = (actual_iccMax2c_record_12_t)safe_malloc(sizeof(struct actual_iccMax2c_record_12_s));
        new->equal_ptr = (equal_ptr_t)(*equal_iccMax2c_record_12_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_iccMax2c_record_12_ptr);
 

 
        return new;
 };

iccMax2c_record_12_t update_iccMax2c_record_12_project_1(iccMax2c_record_12_t x, uint64_t v){
        iccMax2c_record_12_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c_record_12(x); x->count--;};
        y->project_1 = (uint64_t)v;
        return y;}

iccMax2c_record_12_t update_iccMax2c_record_12_project_2(iccMax2c_record_12_t x, uint64_t v){
        iccMax2c_record_12_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c_record_12(x); x->count--;};
        y->project_2 = (uint64_t)v;
        return y;}

iccMax2c_record_12_t update_iccMax2c_record_12_project_3(iccMax2c_record_12_t x, iccMax2c__result_adt_t v){
        iccMax2c_record_12_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_iccMax2c__result_adt(x->project_3);};}
        else {y = copy_iccMax2c_record_12(x); x->count--; y->project_3->count--;};
        y->project_3 = (iccMax2c__result_adt_t)v;
        return y;}



void release_iccMax2c_funtype_13(iccMax2c_funtype_13_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_13_t copy_iccMax2c_funtype_13(iccMax2c_funtype_13_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_13(iccMax2c_funtype_13_t x, iccMax2c_funtype_13_t y){
        return false;}


mpz_ptr_t f_iccMax2c_closure_14(struct iccMax2c_closure_14_s * closure, iccMax2c__result_adt_t bvar){
        mpz_ptr_t result = h_iccMax2c_closure_14(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_iccMax2c_closure_14(struct iccMax2c_closure_14_s * closure, iccMax2c__result_adt_t bvar){
        return h_iccMax2c_closure_14(bvar, closure->fvar_1, closure->fvar_2);}

extern mpz_ptr_t h_iccMax2c_closure_14(iccMax2c__result_adt_t ivar_6, iccMax2c_funtype_11_t ivar_1, iccMax2c_funtype_13_t ivar_3){
        mpz_ptr_t result;
        bool_t ivar_86;
        ivar_6->count++;
        ivar_86 = (bool_t)r_iccMax2c__errorp((iccMax2c__result_adt_t)ivar_6);
        if (ivar_86){ 
             uint8_t ivar_63;
             ivar_6->count++;
             ivar_63 = (uint8_t)iccMax2c__result_adt_code((iccMax2c__result_adt_t)ivar_6);
             uint32_t ivar_64;
             ivar_6->count++;
             ivar_64 = (uint32_t)iccMax2c__result_adt_loc((iccMax2c__result_adt_t)ivar_6);
             uint8_t ivar_65;
             ivar_6->count++;
             ivar_65 = (uint8_t)iccMax2c__result_adt_occ((iccMax2c__result_adt_t)ivar_6);
             iccMax2c_funtype_11_t ivar_81;
             //copying to iccMax2c_funtype_11 from iccMax2c_funtype_11;
             ivar_81 = (iccMax2c_funtype_11_t)ivar_1;
             if (ivar_81 != NULL) ivar_81->count++;
             result = (mpz_ptr_t)ivar_81->ftbl->mptr(ivar_81, ivar_63, ivar_64, ivar_65, ivar_6);
             ivar_81->ftbl->rptr(ivar_81);
} else {
        
             uint64_t ivar_90;
             ivar_6->count++;
             ivar_90 = (uint64_t)iccMax2c__result_adt_vmax((iccMax2c__result_adt_t)ivar_6);
             uint64_t ivar_91;
             ivar_6->count++;
             ivar_91 = (uint64_t)iccMax2c__result_adt_vmin((iccMax2c__result_adt_t)ivar_6);
             iccMax2c_funtype_13_t ivar_103;
             //copying to iccMax2c_funtype_13 from iccMax2c_funtype_13;
             ivar_103 = (iccMax2c_funtype_13_t)ivar_3;
             if (ivar_103 != NULL) ivar_103->count++;
             result = (mpz_ptr_t)ivar_103->ftbl->mptr(ivar_103, ivar_90, ivar_91, ivar_6);
             ivar_103->ftbl->rptr(ivar_103);
};

        return result;
}

iccMax2c_closure_14_t new_iccMax2c_closure_14(void){
        static struct iccMax2c_funtype_4_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(iccMax2c_funtype_4_t, iccMax2c__result_adt_t))&f_iccMax2c_closure_14, .mptr = (mpz_ptr_t (*)(iccMax2c_funtype_4_t, iccMax2c__result_adt_t))&m_iccMax2c_closure_14, .rptr =  (void (*)(iccMax2c_funtype_4_t))&release_iccMax2c_closure_14, .cptr = (iccMax2c_funtype_4_t (*)(iccMax2c_funtype_4_t))&copy_iccMax2c_closure_14};
        iccMax2c_closure_14_t tmp = (iccMax2c_closure_14_t) safe_malloc(sizeof(struct iccMax2c_closure_14_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_iccMax2c_closure_14(iccMax2c_funtype_4_t closure){
        iccMax2c_closure_14_t x = (iccMax2c_closure_14_t)closure;
        x->count--;
        if (x->count <= 0){
         release_iccMax2c_funtype_11(x->fvar_1);
         release_iccMax2c_funtype_13(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

iccMax2c_closure_14_t copy_iccMax2c_closure_14(iccMax2c_closure_14_t x){
        iccMax2c_closure_14_t y = new_iccMax2c_closure_14();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            iccMax2c_funtype_4_htbl_t new_htbl = (iccMax2c_funtype_4_htbl_t) safe_malloc(sizeof(struct iccMax2c_funtype_4_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            iccMax2c_funtype_4_hashentry_t * new_data = (iccMax2c_funtype_4_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct iccMax2c_funtype_4_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct iccMax2c_funtype_4_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_iccMax2c_funtype_15(iccMax2c_funtype_15_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_15_t copy_iccMax2c_funtype_15(iccMax2c_funtype_15_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_15(iccMax2c_funtype_15_t x, iccMax2c_funtype_15_t y){
        return false;}

void release_iccMax2c_funtype_16(iccMax2c_funtype_16_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_16_t copy_iccMax2c_funtype_16(iccMax2c_funtype_16_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_16(iccMax2c_funtype_16_t x, iccMax2c_funtype_16_t y){
        return false;}

void release_iccMax2c_funtype_17(iccMax2c_funtype_17_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_17_t copy_iccMax2c_funtype_17(iccMax2c_funtype_17_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_17(iccMax2c_funtype_17_t x, iccMax2c_funtype_17_t y){
        return false;}


ordstruct_adt__ordstruct_adt_t f_iccMax2c_closure_18(struct iccMax2c_closure_18_s * closure, iccMax2c__result_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_iccMax2c_closure_18(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_iccMax2c_closure_18(struct iccMax2c_closure_18_s * closure, iccMax2c__result_adt_t bvar){
        return h_iccMax2c_closure_18(bvar, closure->fvar_1, closure->fvar_2);}

extern ordstruct_adt__ordstruct_adt_t h_iccMax2c_closure_18(iccMax2c__result_adt_t ivar_6, iccMax2c_funtype_16_t ivar_1, iccMax2c_funtype_17_t ivar_3){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_40;
        ivar_6->count++;
        ivar_40 = (bool_t)r_iccMax2c__errorp((iccMax2c__result_adt_t)ivar_6);
        if (ivar_40){ 
             uint8_t ivar_19;
             ivar_6->count++;
             ivar_19 = (uint8_t)iccMax2c__result_adt_code((iccMax2c__result_adt_t)ivar_6);
             uint32_t ivar_20;
             ivar_6->count++;
             ivar_20 = (uint32_t)iccMax2c__result_adt_loc((iccMax2c__result_adt_t)ivar_6);
             uint8_t ivar_21;
             ivar_21 = (uint8_t)iccMax2c__result_adt_occ((iccMax2c__result_adt_t)ivar_6);
             ordstruct_adt__ordstruct_adt_t ivar_34;
             ivar_34 = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->mptr(ivar_1, ivar_19, ivar_20, ivar_21);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_34;
             if (result != NULL) result->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_34);
} else {
        
             uint64_t ivar_44;
             ivar_6->count++;
             ivar_44 = (uint64_t)iccMax2c__result_adt_vmax((iccMax2c__result_adt_t)ivar_6);
             uint64_t ivar_45;
             ivar_45 = (uint64_t)iccMax2c__result_adt_vmin((iccMax2c__result_adt_t)ivar_6);
             ordstruct_adt__ordstruct_adt_t ivar_54;
             ivar_54 = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_44, ivar_45);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_54;
             if (result != NULL) result->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_54);
};

        return result;
}

iccMax2c_closure_18_t new_iccMax2c_closure_18(void){
        static struct iccMax2c_funtype_15_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(iccMax2c_funtype_15_t, iccMax2c__result_adt_t))&f_iccMax2c_closure_18, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(iccMax2c_funtype_15_t, iccMax2c__result_adt_t))&m_iccMax2c_closure_18, .rptr =  (void (*)(iccMax2c_funtype_15_t))&release_iccMax2c_closure_18, .cptr = (iccMax2c_funtype_15_t (*)(iccMax2c_funtype_15_t))&copy_iccMax2c_closure_18};
        iccMax2c_closure_18_t tmp = (iccMax2c_closure_18_t) safe_malloc(sizeof(struct iccMax2c_closure_18_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_iccMax2c_closure_18(iccMax2c_funtype_15_t closure){
        iccMax2c_closure_18_t x = (iccMax2c_closure_18_t)closure;
        x->count--;
        if (x->count <= 0){
         release_iccMax2c_funtype_16(x->fvar_1);
         release_iccMax2c_funtype_17(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

iccMax2c_closure_18_t copy_iccMax2c_closure_18(iccMax2c_closure_18_t x){
        iccMax2c_closure_18_t y = new_iccMax2c_closure_18();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            iccMax2c_funtype_15_htbl_t new_htbl = (iccMax2c_funtype_15_htbl_t) safe_malloc(sizeof(struct iccMax2c_funtype_15_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            iccMax2c_funtype_15_hashentry_t * new_data = (iccMax2c_funtype_15_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct iccMax2c_funtype_15_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct iccMax2c_funtype_15_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_iccMax2c_funtype_19(iccMax2c_funtype_19_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_19_t copy_iccMax2c_funtype_19(iccMax2c_funtype_19_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_19(iccMax2c_funtype_19_t x, iccMax2c_funtype_19_t y){
        return false;}

void release_iccMax2c_funtype_20(iccMax2c_funtype_20_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_20_t copy_iccMax2c_funtype_20(iccMax2c_funtype_20_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_20(iccMax2c_funtype_20_t x, iccMax2c_funtype_20_t y){
        return false;}


ordstruct_adt__ordstruct_adt_t f_iccMax2c_closure_21(struct iccMax2c_closure_21_s * closure, iccMax2c__result_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_iccMax2c_closure_21(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_iccMax2c_closure_21(struct iccMax2c_closure_21_s * closure, iccMax2c__result_adt_t bvar){
        return h_iccMax2c_closure_21(bvar, closure->fvar_1, closure->fvar_2);}

extern ordstruct_adt__ordstruct_adt_t h_iccMax2c_closure_21(iccMax2c__result_adt_t ivar_6, iccMax2c_funtype_19_t ivar_1, iccMax2c_funtype_20_t ivar_3){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_42;
        ivar_6->count++;
        ivar_42 = (bool_t)r_iccMax2c__errorp((iccMax2c__result_adt_t)ivar_6);
        if (ivar_42){ 
             uint8_t ivar_19;
             ivar_6->count++;
             ivar_19 = (uint8_t)iccMax2c__result_adt_code((iccMax2c__result_adt_t)ivar_6);
             uint32_t ivar_20;
             ivar_6->count++;
             ivar_20 = (uint32_t)iccMax2c__result_adt_loc((iccMax2c__result_adt_t)ivar_6);
             uint8_t ivar_21;
             ivar_6->count++;
             ivar_21 = (uint8_t)iccMax2c__result_adt_occ((iccMax2c__result_adt_t)ivar_6);
             ordstruct_adt__ordstruct_adt_t ivar_35;
             ivar_35 = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->mptr(ivar_1, ivar_19, ivar_20, ivar_21, ivar_6);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_35;
             if (result != NULL) result->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_35);
} else {
        
             uint64_t ivar_46;
             ivar_6->count++;
             ivar_46 = (uint64_t)iccMax2c__result_adt_vmax((iccMax2c__result_adt_t)ivar_6);
             uint64_t ivar_47;
             ivar_6->count++;
             ivar_47 = (uint64_t)iccMax2c__result_adt_vmin((iccMax2c__result_adt_t)ivar_6);
             ordstruct_adt__ordstruct_adt_t ivar_57;
             ivar_57 = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_46, ivar_47, ivar_6);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_57;
             if (result != NULL) result->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_57);
};

        return result;
}

iccMax2c_closure_21_t new_iccMax2c_closure_21(void){
        static struct iccMax2c_funtype_15_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(iccMax2c_funtype_15_t, iccMax2c__result_adt_t))&f_iccMax2c_closure_21, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(iccMax2c_funtype_15_t, iccMax2c__result_adt_t))&m_iccMax2c_closure_21, .rptr =  (void (*)(iccMax2c_funtype_15_t))&release_iccMax2c_closure_21, .cptr = (iccMax2c_funtype_15_t (*)(iccMax2c_funtype_15_t))&copy_iccMax2c_closure_21};
        iccMax2c_closure_21_t tmp = (iccMax2c_closure_21_t) safe_malloc(sizeof(struct iccMax2c_closure_21_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_iccMax2c_closure_21(iccMax2c_funtype_15_t closure){
        iccMax2c_closure_21_t x = (iccMax2c_closure_21_t)closure;
        x->count--;
        if (x->count <= 0){
         release_iccMax2c_funtype_19(x->fvar_1);
         release_iccMax2c_funtype_20(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

iccMax2c_closure_21_t copy_iccMax2c_closure_21(iccMax2c_closure_21_t x){
        iccMax2c_closure_21_t y = new_iccMax2c_closure_21();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            iccMax2c_funtype_15_htbl_t new_htbl = (iccMax2c_funtype_15_htbl_t) safe_malloc(sizeof(struct iccMax2c_funtype_15_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            iccMax2c_funtype_15_hashentry_t * new_data = (iccMax2c_funtype_15_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct iccMax2c_funtype_15_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct iccMax2c_funtype_15_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


iccMax2c__signature_adt_t new_iccMax2c__signature_adt(void){
        iccMax2c__signature_adt_t tmp = (iccMax2c__signature_adt_t) safe_malloc(sizeof(struct iccMax2c__signature_adt_s));
        tmp->count = 1;
        return tmp;}

void release_iccMax2c__signature_adt(iccMax2c__signature_adt_t x){
switch (x->iccMax2c__signature_adt_index) {
case 1:  release_iccMax2c__inout((iccMax2c__inout_t) x); break;
}}

void release_iccMax2c__signature_adt_ptr(pointer_t x, type_actual_t T){
        release_iccMax2c__signature_adt((iccMax2c__signature_adt_t)x);
}

iccMax2c__signature_adt_t copy_iccMax2c__signature_adt(iccMax2c__signature_adt_t x){
        iccMax2c__signature_adt_t y = new_iccMax2c__signature_adt();
        y->iccMax2c__signature_adt_index = (uint8_t)x->iccMax2c__signature_adt_index;
        y->count = 1;
        return y;}

bool_t equal_iccMax2c__signature_adt(iccMax2c__signature_adt_t x, iccMax2c__signature_adt_t y){
        bool_t tmp = x->iccMax2c__signature_adt_index == y->iccMax2c__signature_adt_index;
        switch  (x->iccMax2c__signature_adt_index) {
                case 1: tmp = tmp && equal_iccMax2c__inout((iccMax2c__inout_t) x, (iccMax2c__inout_t) y); break;
        }
        return tmp;
}

bool_t equal_iccMax2c__signature_adt_ptr(pointer_t x, pointer_t y, actual_iccMax2c__signature_adt_t T){
        return equal_iccMax2c__signature_adt((iccMax2c__signature_adt_t)x, (iccMax2c__signature_adt_t)y);
}

actual_iccMax2c__signature_adt_t actual_iccMax2c__signature_adt(){
        actual_iccMax2c__signature_adt_t new = (actual_iccMax2c__signature_adt_t)safe_malloc(sizeof(struct actual_iccMax2c__signature_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_iccMax2c__signature_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_iccMax2c__signature_adt_ptr);
 

 
        return new;
 };

iccMax2c__signature_adt_t update_iccMax2c__signature_adt_iccMax2c__signature_adt_index(iccMax2c__signature_adt_t x, uint8_t v){
        iccMax2c__signature_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c__signature_adt(x); x->count--;};
        y->iccMax2c__signature_adt_index = (uint8_t)v;
        return y;}




iccMax2c__window_t new_iccMax2c__window(void){
        iccMax2c__window_t tmp = (iccMax2c__window_t) safe_malloc(sizeof(struct iccMax2c__window_s));
        tmp->count = 1;
        return tmp;}

void release_iccMax2c__window(iccMax2c__window_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_iccMax2c__window_ptr(pointer_t x, type_actual_t T){
        release_iccMax2c__window((iccMax2c__window_t)x);
}

iccMax2c__window_t copy_iccMax2c__window(iccMax2c__window_t x){
        iccMax2c__window_t y = new_iccMax2c__window();
        y->endpos = (uint32_t)x->endpos;
        y->startpos = (uint32_t)x->startpos;
        y->count = 1;
        return y;}

bool_t equal_iccMax2c__window(iccMax2c__window_t x, iccMax2c__window_t y){
        bool_t tmp = true;
        tmp = tmp && x->endpos == y->endpos;
        tmp = tmp && x->startpos == y->startpos;
        return tmp;}

bool_t equal_iccMax2c__window_ptr(pointer_t x, pointer_t y, actual_iccMax2c__window_t T){
        return equal_iccMax2c__window((iccMax2c__window_t)x, (iccMax2c__window_t)y);
}

actual_iccMax2c__window_t actual_iccMax2c__window(){
        actual_iccMax2c__window_t new = (actual_iccMax2c__window_t)safe_malloc(sizeof(struct actual_iccMax2c__window_s));
        new->equal_ptr = (equal_ptr_t)(*equal_iccMax2c__window_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_iccMax2c__window_ptr);
 

 
        return new;
 };

iccMax2c__window_t update_iccMax2c__window_endpos(iccMax2c__window_t x, uint32_t v){
        iccMax2c__window_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c__window(x); x->count--;};
        y->endpos = (uint32_t)v;
        return y;}

iccMax2c__window_t update_iccMax2c__window_startpos(iccMax2c__window_t x, uint32_t v){
        iccMax2c__window_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c__window(x); x->count--;};
        y->startpos = (uint32_t)v;
        return y;}




iccMax2c__inout_t new_iccMax2c__inout(void){
        iccMax2c__inout_t tmp = (iccMax2c__inout_t) safe_malloc(sizeof(struct iccMax2c__inout_s));
        tmp->count = 1;
        return tmp;}

void release_iccMax2c__inout(iccMax2c__inout_t x){
        x->count--;
        if (x->count <= 0){
         release_iccMax2c__window(x->win);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_iccMax2c__inout_ptr(pointer_t x, type_actual_t T){
        release_iccMax2c__inout((iccMax2c__inout_t)x);
}

iccMax2c__inout_t copy_iccMax2c__inout(iccMax2c__inout_t x){
        iccMax2c__inout_t y = new_iccMax2c__inout();
        y->iccMax2c__signature_adt_index = (uint8_t)x->iccMax2c__signature_adt_index;
        y->input = (uint64_t)x->input;
        y->output = (uint64_t)x->output;
        y->win = x->win;
        if (y->win != NULL){y->win->count++;};
        y->count = 1;
        return y;}

bool_t equal_iccMax2c__inout(iccMax2c__inout_t x, iccMax2c__inout_t y){
        bool_t tmp = true;
        tmp = tmp && x->iccMax2c__signature_adt_index == y->iccMax2c__signature_adt_index;
        tmp = tmp && x->input == y->input;
        tmp = tmp && x->output == y->output;
        tmp = tmp && equal_iccMax2c__window(x->win, y->win);
        return tmp;}

bool_t equal_iccMax2c__inout_ptr(pointer_t x, pointer_t y, actual_iccMax2c__inout_t T){
        return equal_iccMax2c__inout((iccMax2c__inout_t)x, (iccMax2c__inout_t)y);
}

actual_iccMax2c__inout_t actual_iccMax2c__inout(){
        actual_iccMax2c__inout_t new = (actual_iccMax2c__inout_t)safe_malloc(sizeof(struct actual_iccMax2c__inout_s));
        new->equal_ptr = (equal_ptr_t)(*equal_iccMax2c__inout_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_iccMax2c__inout_ptr);
 

 
        return new;
 };

iccMax2c__inout_t update_iccMax2c__inout_iccMax2c__signature_adt_index(iccMax2c__inout_t x, uint8_t v){
        iccMax2c__inout_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c__inout(x); x->count--;};
        y->iccMax2c__signature_adt_index = (uint8_t)v;
        return y;}

iccMax2c__inout_t update_iccMax2c__inout_input(iccMax2c__inout_t x, uint64_t v){
        iccMax2c__inout_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c__inout(x); x->count--;};
        y->input = (uint64_t)v;
        return y;}

iccMax2c__inout_t update_iccMax2c__inout_output(iccMax2c__inout_t x, uint64_t v){
        iccMax2c__inout_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c__inout(x); x->count--;};
        y->output = (uint64_t)v;
        return y;}

iccMax2c__inout_t update_iccMax2c__inout_win(iccMax2c__inout_t x, iccMax2c__window_t v){
        iccMax2c__inout_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->win != NULL){release_iccMax2c__window(x->win);};}
        else {y = copy_iccMax2c__inout(x); x->count--; y->win->count--;};
        y->win = (iccMax2c__window_t)v;
        return y;}



void release_iccMax2c_funtype_25(iccMax2c_funtype_25_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_25_t copy_iccMax2c_funtype_25(iccMax2c_funtype_25_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_25(iccMax2c_funtype_25_t x, iccMax2c_funtype_25_t y){
        return false;}

void release_iccMax2c_funtype_26(iccMax2c_funtype_26_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_26_t copy_iccMax2c_funtype_26(iccMax2c_funtype_26_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_26(iccMax2c_funtype_26_t x, iccMax2c_funtype_26_t y){
        return false;}


iccMax2c_record_27_t new_iccMax2c_record_27(void){
        iccMax2c_record_27_t tmp = (iccMax2c_record_27_t) safe_malloc(sizeof(struct iccMax2c_record_27_s));
        tmp->count = 1;
        return tmp;}

void release_iccMax2c_record_27(iccMax2c_record_27_t x){
        x->count--;
        if (x->count <= 0){
         release_iccMax2c__window(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_iccMax2c_record_27_ptr(pointer_t x, type_actual_t T){
        release_iccMax2c_record_27((iccMax2c_record_27_t)x);
}

iccMax2c_record_27_t copy_iccMax2c_record_27(iccMax2c_record_27_t x){
        iccMax2c_record_27_t y = new_iccMax2c_record_27();
        y->project_1 = (uint64_t)x->project_1;
        y->project_2 = (uint64_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_iccMax2c_record_27(iccMax2c_record_27_t x, iccMax2c_record_27_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_iccMax2c__window(x->project_3, y->project_3);
        return tmp;}

bool_t equal_iccMax2c_record_27_ptr(pointer_t x, pointer_t y, actual_iccMax2c_record_27_t T){
        return equal_iccMax2c_record_27((iccMax2c_record_27_t)x, (iccMax2c_record_27_t)y);
}

actual_iccMax2c_record_27_t actual_iccMax2c_record_27(){
        actual_iccMax2c_record_27_t new = (actual_iccMax2c_record_27_t)safe_malloc(sizeof(struct actual_iccMax2c_record_27_s));
        new->equal_ptr = (equal_ptr_t)(*equal_iccMax2c_record_27_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_iccMax2c_record_27_ptr);
 

 
        return new;
 };

iccMax2c_record_27_t update_iccMax2c_record_27_project_1(iccMax2c_record_27_t x, uint64_t v){
        iccMax2c_record_27_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c_record_27(x); x->count--;};
        y->project_1 = (uint64_t)v;
        return y;}

iccMax2c_record_27_t update_iccMax2c_record_27_project_2(iccMax2c_record_27_t x, uint64_t v){
        iccMax2c_record_27_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c_record_27(x); x->count--;};
        y->project_2 = (uint64_t)v;
        return y;}

iccMax2c_record_27_t update_iccMax2c_record_27_project_3(iccMax2c_record_27_t x, iccMax2c__window_t v){
        iccMax2c_record_27_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_iccMax2c__window(x->project_3);};}
        else {y = copy_iccMax2c_record_27(x); x->count--; y->project_3->count--;};
        y->project_3 = (iccMax2c__window_t)v;
        return y;}



void release_iccMax2c_funtype_28(iccMax2c_funtype_28_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_28_t copy_iccMax2c_funtype_28(iccMax2c_funtype_28_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_28(iccMax2c_funtype_28_t x, iccMax2c_funtype_28_t y){
        return false;}


mpz_ptr_t f_iccMax2c_closure_29(struct iccMax2c_closure_29_s * closure, iccMax2c__signature_adt_t bvar){
        mpz_ptr_t result = h_iccMax2c_closure_29(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_iccMax2c_closure_29(struct iccMax2c_closure_29_s * closure, iccMax2c__signature_adt_t bvar){
        return h_iccMax2c_closure_29(bvar, closure->fvar_1, closure->fvar_2);}

extern mpz_ptr_t h_iccMax2c_closure_29(iccMax2c__signature_adt_t ivar_5, iccMax2c_funtype_28_t ivar_2, mpz_ptr_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_37;
        ivar_5->count++;
        ivar_37 = (bool_t)r_iccMax2c__undefinedp((iccMax2c__signature_adt_t)ivar_5);
        if (ivar_37){ 
             release_iccMax2c__signature_adt(ivar_5);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_1);
} else {
        
             uint64_t ivar_41;
             ivar_5->count++;
             ivar_41 = (uint64_t)iccMax2c__signature_adt_input((iccMax2c__signature_adt_t)ivar_5);
             uint64_t ivar_42;
             ivar_5->count++;
             ivar_42 = (uint64_t)iccMax2c__signature_adt_output((iccMax2c__signature_adt_t)ivar_5);
             iccMax2c__window_t ivar_43;
             iccMax2c__window_t ivar_51;
             ivar_51 = (iccMax2c__window_t)iccMax2c__signature_adt_win((iccMax2c__signature_adt_t)ivar_5);
             //copying to iccMax2c__window from iccMax2c__window;
             ivar_43 = (iccMax2c__window_t)ivar_51;
             if (ivar_43 != NULL) ivar_43->count++;
             release_iccMax2c__window(ivar_51);
             iccMax2c_funtype_28_t ivar_58;
             //copying to iccMax2c_funtype_28 from iccMax2c_funtype_28;
             ivar_58 = (iccMax2c_funtype_28_t)ivar_2;
             if (ivar_58 != NULL) ivar_58->count++;
             result = (mpz_ptr_t)ivar_58->ftbl->mptr(ivar_58, ivar_41, ivar_42, ivar_43);
             ivar_58->ftbl->rptr(ivar_58);
};

        return result;
}

iccMax2c_closure_29_t new_iccMax2c_closure_29(void){
        static struct iccMax2c_funtype_26_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(iccMax2c_funtype_26_t, iccMax2c__signature_adt_t))&f_iccMax2c_closure_29, .mptr = (mpz_ptr_t (*)(iccMax2c_funtype_26_t, iccMax2c__signature_adt_t))&m_iccMax2c_closure_29, .rptr =  (void (*)(iccMax2c_funtype_26_t))&release_iccMax2c_closure_29, .cptr = (iccMax2c_funtype_26_t (*)(iccMax2c_funtype_26_t))&copy_iccMax2c_closure_29};
        iccMax2c_closure_29_t tmp = (iccMax2c_closure_29_t) safe_malloc(sizeof(struct iccMax2c_closure_29_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_iccMax2c_closure_29(iccMax2c_funtype_26_t closure){
        iccMax2c_closure_29_t x = (iccMax2c_closure_29_t)closure;
        x->count--;
        if (x->count <= 0){
         release_iccMax2c_funtype_28(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

iccMax2c_closure_29_t copy_iccMax2c_closure_29(iccMax2c_closure_29_t x){
        iccMax2c_closure_29_t y = new_iccMax2c_closure_29();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        mpz_set(y->fvar_2, x->fvar_2);
        if (x->htbl != NULL){
            iccMax2c_funtype_26_htbl_t new_htbl = (iccMax2c_funtype_26_htbl_t) safe_malloc(sizeof(struct iccMax2c_funtype_26_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            iccMax2c_funtype_26_hashentry_t * new_data = (iccMax2c_funtype_26_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct iccMax2c_funtype_26_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct iccMax2c_funtype_26_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


iccMax2c_record_30_t new_iccMax2c_record_30(void){
        iccMax2c_record_30_t tmp = (iccMax2c_record_30_t) safe_malloc(sizeof(struct iccMax2c_record_30_s));
        tmp->count = 1;
        return tmp;}

void release_iccMax2c_record_30(iccMax2c_record_30_t x){
        x->count--;
        if (x->count <= 0){
         release_iccMax2c__window(x->project_3);
         release_iccMax2c__signature_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_iccMax2c_record_30_ptr(pointer_t x, type_actual_t T){
        release_iccMax2c_record_30((iccMax2c_record_30_t)x);
}

iccMax2c_record_30_t copy_iccMax2c_record_30(iccMax2c_record_30_t x){
        iccMax2c_record_30_t y = new_iccMax2c_record_30();
        y->project_1 = (uint64_t)x->project_1;
        y->project_2 = (uint64_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_iccMax2c_record_30(iccMax2c_record_30_t x, iccMax2c_record_30_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_iccMax2c__window(x->project_3, y->project_3);
        tmp = tmp && equal_iccMax2c__signature_adt(x->project_4, y->project_4);
        return tmp;}

bool_t equal_iccMax2c_record_30_ptr(pointer_t x, pointer_t y, actual_iccMax2c_record_30_t T){
        return equal_iccMax2c_record_30((iccMax2c_record_30_t)x, (iccMax2c_record_30_t)y);
}

actual_iccMax2c_record_30_t actual_iccMax2c_record_30(){
        actual_iccMax2c_record_30_t new = (actual_iccMax2c_record_30_t)safe_malloc(sizeof(struct actual_iccMax2c_record_30_s));
        new->equal_ptr = (equal_ptr_t)(*equal_iccMax2c_record_30_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_iccMax2c_record_30_ptr);
 

 
        return new;
 };

iccMax2c_record_30_t update_iccMax2c_record_30_project_1(iccMax2c_record_30_t x, uint64_t v){
        iccMax2c_record_30_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c_record_30(x); x->count--;};
        y->project_1 = (uint64_t)v;
        return y;}

iccMax2c_record_30_t update_iccMax2c_record_30_project_2(iccMax2c_record_30_t x, uint64_t v){
        iccMax2c_record_30_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c_record_30(x); x->count--;};
        y->project_2 = (uint64_t)v;
        return y;}

iccMax2c_record_30_t update_iccMax2c_record_30_project_3(iccMax2c_record_30_t x, iccMax2c__window_t v){
        iccMax2c_record_30_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_iccMax2c__window(x->project_3);};}
        else {y = copy_iccMax2c_record_30(x); x->count--; y->project_3->count--;};
        y->project_3 = (iccMax2c__window_t)v;
        return y;}

iccMax2c_record_30_t update_iccMax2c_record_30_project_4(iccMax2c_record_30_t x, iccMax2c__signature_adt_t v){
        iccMax2c_record_30_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_iccMax2c__signature_adt(x->project_4);};}
        else {y = copy_iccMax2c_record_30(x); x->count--; y->project_4->count--;};
        y->project_4 = (iccMax2c__signature_adt_t)v;
        return y;}



void release_iccMax2c_funtype_31(iccMax2c_funtype_31_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_31_t copy_iccMax2c_funtype_31(iccMax2c_funtype_31_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_31(iccMax2c_funtype_31_t x, iccMax2c_funtype_31_t y){
        return false;}


mpz_ptr_t f_iccMax2c_closure_32(struct iccMax2c_closure_32_s * closure, iccMax2c__signature_adt_t bvar){
        mpz_ptr_t result = h_iccMax2c_closure_32(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_iccMax2c_closure_32(struct iccMax2c_closure_32_s * closure, iccMax2c__signature_adt_t bvar){
        return h_iccMax2c_closure_32(bvar, closure->fvar_1, closure->fvar_2);}

extern mpz_ptr_t h_iccMax2c_closure_32(iccMax2c__signature_adt_t ivar_6, iccMax2c_funtype_26_t ivar_1, iccMax2c_funtype_31_t ivar_3){
        mpz_ptr_t result;
        bool_t ivar_60;
        ivar_6->count++;
        ivar_60 = (bool_t)r_iccMax2c__undefinedp((iccMax2c__signature_adt_t)ivar_6);
        if (ivar_60){ 
             iccMax2c_funtype_26_t ivar_58;
             //copying to iccMax2c_funtype_26 from iccMax2c_funtype_26;
             ivar_58 = (iccMax2c_funtype_26_t)ivar_1;
             if (ivar_58 != NULL) ivar_58->count++;
             result = (mpz_ptr_t)ivar_58->ftbl->fptr(ivar_58, ivar_6);
             ivar_58->ftbl->rptr(ivar_58);
} else {
        
             uint64_t ivar_64;
             ivar_6->count++;
             ivar_64 = (uint64_t)iccMax2c__signature_adt_input((iccMax2c__signature_adt_t)ivar_6);
             uint64_t ivar_65;
             ivar_6->count++;
             ivar_65 = (uint64_t)iccMax2c__signature_adt_output((iccMax2c__signature_adt_t)ivar_6);
             iccMax2c__window_t ivar_66;
             iccMax2c__window_t ivar_74;
             ivar_6->count++;
             ivar_74 = (iccMax2c__window_t)iccMax2c__signature_adt_win((iccMax2c__signature_adt_t)ivar_6);
             //copying to iccMax2c__window from iccMax2c__window;
             ivar_66 = (iccMax2c__window_t)ivar_74;
             if (ivar_66 != NULL) ivar_66->count++;
             release_iccMax2c__window(ivar_74);
             iccMax2c_funtype_31_t ivar_82;
             //copying to iccMax2c_funtype_31 from iccMax2c_funtype_31;
             ivar_82 = (iccMax2c_funtype_31_t)ivar_3;
             if (ivar_82 != NULL) ivar_82->count++;
             result = (mpz_ptr_t)ivar_82->ftbl->mptr(ivar_82, ivar_64, ivar_65, ivar_66, ivar_6);
             ivar_82->ftbl->rptr(ivar_82);
};

        return result;
}

iccMax2c_closure_32_t new_iccMax2c_closure_32(void){
        static struct iccMax2c_funtype_26_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(iccMax2c_funtype_26_t, iccMax2c__signature_adt_t))&f_iccMax2c_closure_32, .mptr = (mpz_ptr_t (*)(iccMax2c_funtype_26_t, iccMax2c__signature_adt_t))&m_iccMax2c_closure_32, .rptr =  (void (*)(iccMax2c_funtype_26_t))&release_iccMax2c_closure_32, .cptr = (iccMax2c_funtype_26_t (*)(iccMax2c_funtype_26_t))&copy_iccMax2c_closure_32};
        iccMax2c_closure_32_t tmp = (iccMax2c_closure_32_t) safe_malloc(sizeof(struct iccMax2c_closure_32_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_iccMax2c_closure_32(iccMax2c_funtype_26_t closure){
        iccMax2c_closure_32_t x = (iccMax2c_closure_32_t)closure;
        x->count--;
        if (x->count <= 0){
         release_iccMax2c_funtype_26(x->fvar_1);
         release_iccMax2c_funtype_31(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

iccMax2c_closure_32_t copy_iccMax2c_closure_32(iccMax2c_closure_32_t x){
        iccMax2c_closure_32_t y = new_iccMax2c_closure_32();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            iccMax2c_funtype_26_htbl_t new_htbl = (iccMax2c_funtype_26_htbl_t) safe_malloc(sizeof(struct iccMax2c_funtype_26_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            iccMax2c_funtype_26_hashentry_t * new_data = (iccMax2c_funtype_26_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct iccMax2c_funtype_26_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct iccMax2c_funtype_26_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_iccMax2c_funtype_33(iccMax2c_funtype_33_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_33_t copy_iccMax2c_funtype_33(iccMax2c_funtype_33_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_33(iccMax2c_funtype_33_t x, iccMax2c_funtype_33_t y){
        return false;}

void release_iccMax2c_funtype_34(iccMax2c_funtype_34_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_34_t copy_iccMax2c_funtype_34(iccMax2c_funtype_34_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_34(iccMax2c_funtype_34_t x, iccMax2c_funtype_34_t y){
        return false;}


ordstruct_adt__ordstruct_adt_t f_iccMax2c_closure_35(struct iccMax2c_closure_35_s * closure, iccMax2c__signature_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_iccMax2c_closure_35(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_iccMax2c_closure_35(struct iccMax2c_closure_35_s * closure, iccMax2c__signature_adt_t bvar){
        return h_iccMax2c_closure_35(bvar, closure->fvar_1, closure->fvar_2);}

extern ordstruct_adt__ordstruct_adt_t h_iccMax2c_closure_35(iccMax2c__signature_adt_t ivar_5, iccMax2c_funtype_34_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_17;
        ivar_5->count++;
        ivar_17 = (bool_t)r_iccMax2c__undefinedp((iccMax2c__signature_adt_t)ivar_5);
        if (ivar_17){ 
             release_iccMax2c__signature_adt(ivar_5);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1;
             if (result != NULL) result->count++;
} else {
        
             uint64_t ivar_21;
             ivar_5->count++;
             ivar_21 = (uint64_t)iccMax2c__signature_adt_input((iccMax2c__signature_adt_t)ivar_5);
             uint64_t ivar_22;
             ivar_5->count++;
             ivar_22 = (uint64_t)iccMax2c__signature_adt_output((iccMax2c__signature_adt_t)ivar_5);
             iccMax2c__window_t ivar_23;
             iccMax2c__window_t ivar_31;
             ivar_31 = (iccMax2c__window_t)iccMax2c__signature_adt_win((iccMax2c__signature_adt_t)ivar_5);
             //copying to iccMax2c__window from iccMax2c__window;
             ivar_23 = (iccMax2c__window_t)ivar_31;
             if (ivar_23 != NULL) ivar_23->count++;
             release_iccMax2c__window(ivar_31);
             ordstruct_adt__ordstruct_adt_t ivar_36;
             ivar_36 = (ordstruct_adt__ordstruct_adt_t)ivar_2->ftbl->mptr(ivar_2, ivar_21, ivar_22, ivar_23);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_36;
             if (result != NULL) result->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_36);
};

        return result;
}

iccMax2c_closure_35_t new_iccMax2c_closure_35(void){
        static struct iccMax2c_funtype_33_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(iccMax2c_funtype_33_t, iccMax2c__signature_adt_t))&f_iccMax2c_closure_35, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(iccMax2c_funtype_33_t, iccMax2c__signature_adt_t))&m_iccMax2c_closure_35, .rptr =  (void (*)(iccMax2c_funtype_33_t))&release_iccMax2c_closure_35, .cptr = (iccMax2c_funtype_33_t (*)(iccMax2c_funtype_33_t))&copy_iccMax2c_closure_35};
        iccMax2c_closure_35_t tmp = (iccMax2c_closure_35_t) safe_malloc(sizeof(struct iccMax2c_closure_35_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_iccMax2c_closure_35(iccMax2c_funtype_33_t closure){
        iccMax2c_closure_35_t x = (iccMax2c_closure_35_t)closure;
        x->count--;
        if (x->count <= 0){
         release_iccMax2c_funtype_34(x->fvar_1);
         release_ordstruct_adt__ordstruct_adt(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

iccMax2c_closure_35_t copy_iccMax2c_closure_35(iccMax2c_closure_35_t x){
        iccMax2c_closure_35_t y = new_iccMax2c_closure_35();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            iccMax2c_funtype_33_htbl_t new_htbl = (iccMax2c_funtype_33_htbl_t) safe_malloc(sizeof(struct iccMax2c_funtype_33_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            iccMax2c_funtype_33_hashentry_t * new_data = (iccMax2c_funtype_33_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct iccMax2c_funtype_33_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct iccMax2c_funtype_33_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_iccMax2c_funtype_36(iccMax2c_funtype_36_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_36_t copy_iccMax2c_funtype_36(iccMax2c_funtype_36_t x){return x->ftbl->cptr(x);}

bool_t equal_iccMax2c_funtype_36(iccMax2c_funtype_36_t x, iccMax2c_funtype_36_t y){
        return false;}


ordstruct_adt__ordstruct_adt_t f_iccMax2c_closure_37(struct iccMax2c_closure_37_s * closure, iccMax2c__signature_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_iccMax2c_closure_37(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_iccMax2c_closure_37(struct iccMax2c_closure_37_s * closure, iccMax2c__signature_adt_t bvar){
        return h_iccMax2c_closure_37(bvar, closure->fvar_1, closure->fvar_2);}

extern ordstruct_adt__ordstruct_adt_t h_iccMax2c_closure_37(iccMax2c__signature_adt_t ivar_6, iccMax2c_funtype_33_t ivar_1, iccMax2c_funtype_36_t ivar_3){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_24;
        ivar_6->count++;
        ivar_24 = (bool_t)r_iccMax2c__undefinedp((iccMax2c__signature_adt_t)ivar_6);
        if (ivar_24){ 
             ordstruct_adt__ordstruct_adt_t ivar_20;
             ivar_20 = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_6);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_20;
             if (result != NULL) result->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_20);
} else {
        
             uint64_t ivar_28;
             ivar_6->count++;
             ivar_28 = (uint64_t)iccMax2c__signature_adt_input((iccMax2c__signature_adt_t)ivar_6);
             uint64_t ivar_29;
             ivar_6->count++;
             ivar_29 = (uint64_t)iccMax2c__signature_adt_output((iccMax2c__signature_adt_t)ivar_6);
             iccMax2c__window_t ivar_30;
             iccMax2c__window_t ivar_38;
             ivar_6->count++;
             ivar_38 = (iccMax2c__window_t)iccMax2c__signature_adt_win((iccMax2c__signature_adt_t)ivar_6);
             //copying to iccMax2c__window from iccMax2c__window;
             ivar_30 = (iccMax2c__window_t)ivar_38;
             if (ivar_30 != NULL) ivar_30->count++;
             release_iccMax2c__window(ivar_38);
             ordstruct_adt__ordstruct_adt_t ivar_44;
             ivar_44 = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_28, ivar_29, ivar_30, ivar_6);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_44;
             if (result != NULL) result->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_44);
};

        return result;
}

iccMax2c_closure_37_t new_iccMax2c_closure_37(void){
        static struct iccMax2c_funtype_33_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(iccMax2c_funtype_33_t, iccMax2c__signature_adt_t))&f_iccMax2c_closure_37, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(iccMax2c_funtype_33_t, iccMax2c__signature_adt_t))&m_iccMax2c_closure_37, .rptr =  (void (*)(iccMax2c_funtype_33_t))&release_iccMax2c_closure_37, .cptr = (iccMax2c_funtype_33_t (*)(iccMax2c_funtype_33_t))&copy_iccMax2c_closure_37};
        iccMax2c_closure_37_t tmp = (iccMax2c_closure_37_t) safe_malloc(sizeof(struct iccMax2c_closure_37_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_iccMax2c_closure_37(iccMax2c_funtype_33_t closure){
        iccMax2c_closure_37_t x = (iccMax2c_closure_37_t)closure;
        x->count--;
        if (x->count <= 0){
         release_iccMax2c_funtype_33(x->fvar_1);
         release_iccMax2c_funtype_36(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

iccMax2c_closure_37_t copy_iccMax2c_closure_37(iccMax2c_closure_37_t x){
        iccMax2c_closure_37_t y = new_iccMax2c_closure_37();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            iccMax2c_funtype_33_htbl_t new_htbl = (iccMax2c_funtype_33_htbl_t) safe_malloc(sizeof(struct iccMax2c_funtype_33_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            iccMax2c_funtype_33_hashentry_t * new_data = (iccMax2c_funtype_33_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct iccMax2c_funtype_33_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct iccMax2c_funtype_33_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_iccMax2c__signatureMap(iccMax2c__signatureMap_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c__signatureMap_t copy_iccMax2c__signatureMap(iccMax2c__signatureMap_t x){return x->ftbl->cptr(x);}

uint32_t lookup_iccMax2c__signatureMap(iccMax2c__signatureMap_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; iccMax2c__signatureMap_hashentry_t data = htbl->data[hashindex];
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

iccMax2c__signatureMap_t dupdate_iccMax2c__signatureMap(iccMax2c__signatureMap_t a, uint32_t i, iccMax2c__signature_adt_t v){
        iccMax2c__signatureMap_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (iccMax2c__signatureMap_htbl_t)safe_malloc(sizeof(struct iccMax2c__signatureMap_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (iccMax2c__signatureMap_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct iccMax2c__signatureMap_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        iccMax2c__signatureMap_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                iccMax2c__signatureMap_hashentry_t * new_data = (iccMax2c__signatureMap_hashentry_t *)safe_malloc(new_size * sizeof(struct iccMax2c__signatureMap_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
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
                                new_data[new_loc].value = (iccMax2c__signature_adt_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_iccMax2c__signatureMap(htbl, i, ihash);
        iccMax2c__signatureMap_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (iccMax2c__signature_adt_t)v; htbl->num_entries++;}
            else {iccMax2c__signature_adt_t tempvalue;tempvalue = (iccMax2c__signature_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (iccMax2c__signature_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_iccMax2c__signature_adt(tempvalue);};
        return a;

}

iccMax2c__signatureMap_t update_iccMax2c__signatureMap(iccMax2c__signatureMap_t a, uint32_t i, iccMax2c__signature_adt_t v){
        if (a->count == 1){
                return dupdate_iccMax2c__signatureMap(a, i, v);
            } else {
                iccMax2c__signatureMap_t x = copy_iccMax2c__signatureMap(a);
                a->count--;
                return dupdate_iccMax2c__signatureMap(x, i, v);
            }}

bool_t equal_iccMax2c__signatureMap(iccMax2c__signatureMap_t x, iccMax2c__signatureMap_t y){
        return false;}

void release_iccMax2c_funtype_39(iccMax2c_funtype_39_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

iccMax2c_funtype_39_t copy_iccMax2c_funtype_39(iccMax2c_funtype_39_t x){return x->ftbl->cptr(x);}

uint32_t lookup_iccMax2c_funtype_39(iccMax2c_funtype_39_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; iccMax2c_funtype_39_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp268572 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp268572 == 0);
        bool_t keymatch;
        int64_t tmp268573 = mpz_cmp(data.key, i);
        keymatch = (tmp268573 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp268572 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp268572 == 0);

        int64_t tmp268573 = mpz_cmp(data.key, i);
        keymatch = (tmp268573 == 0);
                }
        return hashindex;
        }

iccMax2c_funtype_39_t dupdate_iccMax2c_funtype_39(iccMax2c_funtype_39_t a, mpz_ptr_t i, uint32_t v){
        iccMax2c_funtype_39_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (iccMax2c_funtype_39_htbl_t)safe_malloc(sizeof(struct iccMax2c_funtype_39_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (iccMax2c_funtype_39_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct iccMax2c_funtype_39_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        iccMax2c_funtype_39_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                iccMax2c_funtype_39_hashentry_t * new_data = (iccMax2c_funtype_39_hashentry_t *)safe_malloc(new_size * sizeof(struct iccMax2c_funtype_39_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp268574 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp268574 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp268575 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp268575 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp268576 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp268576 == 0);
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
        uint32_t hashindex = lookup_iccMax2c_funtype_39(htbl, i, ihash);
        iccMax2c_funtype_39_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp268577 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp268577 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v; htbl->num_entries++;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint32_t)v;};
        return a;

}

iccMax2c_funtype_39_t update_iccMax2c_funtype_39(iccMax2c_funtype_39_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_iccMax2c_funtype_39(a, i, v);
            } else {
                iccMax2c_funtype_39_t x = copy_iccMax2c_funtype_39(a);
                a->count--;
                return dupdate_iccMax2c_funtype_39(x, i, v);
            }}

bool_t equal_iccMax2c_funtype_39(iccMax2c_funtype_39_t x, iccMax2c_funtype_39_t y){
        return false;}


iccMax2c_record_40_t new_iccMax2c_record_40(void){
        iccMax2c_record_40_t tmp = (iccMax2c_record_40_t) safe_malloc(sizeof(struct iccMax2c_record_40_s));
        tmp->count = 1;
        return tmp;}

void release_iccMax2c_record_40(iccMax2c_record_40_t x){
        x->count--;
        if (x->count <= 0){
         release_iccMax2c_funtype_39(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_iccMax2c_record_40_ptr(pointer_t x, type_actual_t T){
        release_iccMax2c_record_40((iccMax2c_record_40_t)x);
}

iccMax2c_record_40_t copy_iccMax2c_record_40(iccMax2c_record_40_t x){
        iccMax2c_record_40_t y = new_iccMax2c_record_40();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_iccMax2c_record_40(iccMax2c_record_40_t x, iccMax2c_record_40_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_iccMax2c_funtype_39(x->seq, y->seq);
        return tmp;}

bool_t equal_iccMax2c_record_40_ptr(pointer_t x, pointer_t y, actual_iccMax2c_record_40_t T){
        return equal_iccMax2c_record_40((iccMax2c_record_40_t)x, (iccMax2c_record_40_t)y);
}

actual_iccMax2c_record_40_t actual_iccMax2c_record_40(){
        actual_iccMax2c_record_40_t new = (actual_iccMax2c_record_40_t)safe_malloc(sizeof(struct actual_iccMax2c_record_40_s));
        new->equal_ptr = (equal_ptr_t)(*equal_iccMax2c_record_40_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_iccMax2c_record_40_ptr);
 

 
        return new;
 };

iccMax2c_record_40_t update_iccMax2c_record_40_length(iccMax2c_record_40_t x, mpz_ptr_t v){
        iccMax2c_record_40_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c_record_40(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

iccMax2c_record_40_t update_iccMax2c_record_40_seq(iccMax2c_record_40_t x, iccMax2c_funtype_39_t v){
        iccMax2c_record_40_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_iccMax2c_funtype_39(x->seq);};}
        else {y = copy_iccMax2c_record_40(x); x->count--; y->seq->count--;};
        y->seq = (iccMax2c_funtype_39_t)v;
        return y;}




iccMax2c__signature_adt_t f_iccMax2c_closure_41(struct iccMax2c_closure_41_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        iccMax2c__signatureMap_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_iccMax2c__signatureMap(htbl, bvar, hash);
        iccMax2c__signatureMap_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            iccMax2c__signature_adt_t result;
            result = (iccMax2c__signature_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_iccMax2c_closure_41(bvar);};

return h_iccMax2c_closure_41(bvar);}

iccMax2c__signature_adt_t m_iccMax2c_closure_41(struct iccMax2c_closure_41_s * closure, uint32_t bvar){
        return h_iccMax2c_closure_41(bvar);}

extern iccMax2c__signature_adt_t h_iccMax2c_closure_41(uint32_t ivar_5){
        iccMax2c__signature_adt_t result;
        result = (iccMax2c__signature_adt_t)iccMax2c__subelemsig0((uint32_t)ivar_5);

        return result;
}

iccMax2c_closure_41_t new_iccMax2c_closure_41(void){
        static struct iccMax2c__signatureMap_ftbl_s ftbl = {.fptr = (iccMax2c__signature_adt_t (*)(iccMax2c__signatureMap_t, uint32_t))&f_iccMax2c_closure_41, .mptr = (iccMax2c__signature_adt_t (*)(iccMax2c__signatureMap_t, uint32_t))&m_iccMax2c_closure_41, .rptr =  (void (*)(iccMax2c__signatureMap_t))&release_iccMax2c_closure_41, .cptr = (iccMax2c__signatureMap_t (*)(iccMax2c__signatureMap_t))&copy_iccMax2c_closure_41};
        iccMax2c_closure_41_t tmp = (iccMax2c_closure_41_t) safe_malloc(sizeof(struct iccMax2c_closure_41_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_iccMax2c_closure_41(iccMax2c__signatureMap_t closure){
        iccMax2c_closure_41_t x = (iccMax2c_closure_41_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

iccMax2c_closure_41_t copy_iccMax2c_closure_41(iccMax2c_closure_41_t x){
        iccMax2c_closure_41_t y = new_iccMax2c_closure_41();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            iccMax2c__signatureMap_htbl_t new_htbl = (iccMax2c__signatureMap_htbl_t) safe_malloc(sizeof(struct iccMax2c__signatureMap_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            iccMax2c__signatureMap_hashentry_t * new_data = (iccMax2c__signatureMap_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct iccMax2c__signatureMap_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct iccMax2c__signatureMap_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


iccMax2c_record_42_t new_iccMax2c_record_42(void){
        iccMax2c_record_42_t tmp = (iccMax2c_record_42_t) safe_malloc(sizeof(struct iccMax2c_record_42_s));
        tmp->count = 1;
        return tmp;}

void release_iccMax2c_record_42(iccMax2c_record_42_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_iccMax2c_record_42_ptr(pointer_t x, type_actual_t T){
        release_iccMax2c_record_42((iccMax2c_record_42_t)x);
}

iccMax2c_record_42_t copy_iccMax2c_record_42(iccMax2c_record_42_t x){
        iccMax2c_record_42_t y = new_iccMax2c_record_42();
        y->endpos = (uint32_t)x->endpos;
        y->startpos = (uint8_t)x->startpos;
        y->count = 1;
        return y;}

bool_t equal_iccMax2c_record_42(iccMax2c_record_42_t x, iccMax2c_record_42_t y){
        bool_t tmp = true;
        tmp = tmp && x->endpos == y->endpos;
        tmp = tmp && x->startpos == y->startpos;
        return tmp;}

bool_t equal_iccMax2c_record_42_ptr(pointer_t x, pointer_t y, actual_iccMax2c_record_42_t T){
        return equal_iccMax2c_record_42((iccMax2c_record_42_t)x, (iccMax2c_record_42_t)y);
}

actual_iccMax2c_record_42_t actual_iccMax2c_record_42(){
        actual_iccMax2c_record_42_t new = (actual_iccMax2c_record_42_t)safe_malloc(sizeof(struct actual_iccMax2c_record_42_s));
        new->equal_ptr = (equal_ptr_t)(*equal_iccMax2c_record_42_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_iccMax2c_record_42_ptr);
 

 
        return new;
 };

iccMax2c_record_42_t update_iccMax2c_record_42_endpos(iccMax2c_record_42_t x, uint32_t v){
        iccMax2c_record_42_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c_record_42(x); x->count--;};
        y->endpos = (uint32_t)v;
        return y;}

iccMax2c_record_42_t update_iccMax2c_record_42_startpos(iccMax2c_record_42_t x, uint8_t v){
        iccMax2c_record_42_t y;
        if (x->count == 1){y = x;}
        else {y = copy_iccMax2c_record_42(x); x->count--;};
        y->startpos = (uint8_t)v;
        return y;}




iccMax2c__signature_adt_t f_iccMax2c_closure_43(struct iccMax2c_closure_43_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        iccMax2c__signatureMap_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_iccMax2c__signatureMap(htbl, bvar, hash);
        iccMax2c__signatureMap_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            iccMax2c__signature_adt_t result;
            result = (iccMax2c__signature_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_iccMax2c_closure_43(bvar);};

return h_iccMax2c_closure_43(bvar);}

iccMax2c__signature_adt_t m_iccMax2c_closure_43(struct iccMax2c_closure_43_s * closure, uint32_t bvar){
        return h_iccMax2c_closure_43(bvar);}

extern iccMax2c__signature_adt_t h_iccMax2c_closure_43(uint32_t ivar_5){
        iccMax2c__signature_adt_t result;
        result = (iccMax2c__signature_adt_t)iccMax2c__subelemsig0((uint32_t)ivar_5);

        return result;
}

iccMax2c_closure_43_t new_iccMax2c_closure_43(void){
        static struct iccMax2c__signatureMap_ftbl_s ftbl = {.fptr = (iccMax2c__signature_adt_t (*)(iccMax2c__signatureMap_t, uint32_t))&f_iccMax2c_closure_43, .mptr = (iccMax2c__signature_adt_t (*)(iccMax2c__signatureMap_t, uint32_t))&m_iccMax2c_closure_43, .rptr =  (void (*)(iccMax2c__signatureMap_t))&release_iccMax2c_closure_43, .cptr = (iccMax2c__signatureMap_t (*)(iccMax2c__signatureMap_t))&copy_iccMax2c_closure_43};
        iccMax2c_closure_43_t tmp = (iccMax2c_closure_43_t) safe_malloc(sizeof(struct iccMax2c_closure_43_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_iccMax2c_closure_43(iccMax2c__signatureMap_t closure){
        iccMax2c_closure_43_t x = (iccMax2c_closure_43_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

iccMax2c_closure_43_t copy_iccMax2c_closure_43(iccMax2c_closure_43_t x){
        iccMax2c_closure_43_t y = new_iccMax2c_closure_43();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            iccMax2c__signatureMap_htbl_t new_htbl = (iccMax2c__signatureMap_htbl_t) safe_malloc(sizeof(struct iccMax2c__signatureMap_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            iccMax2c__signatureMap_hashentry_t * new_data = (iccMax2c__signatureMap_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct iccMax2c__signatureMap_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct iccMax2c__signatureMap_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


iccMax2c__signature_adt_t f_iccMax2c_closure_44(struct iccMax2c_closure_44_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        iccMax2c__signatureMap_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_iccMax2c__signatureMap(htbl, bvar, hash);
        iccMax2c__signatureMap_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            iccMax2c__signature_adt_t result;
            result = (iccMax2c__signature_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_iccMax2c_closure_44(bvar);};

return h_iccMax2c_closure_44(bvar);}

iccMax2c__signature_adt_t m_iccMax2c_closure_44(struct iccMax2c_closure_44_s * closure, uint32_t bvar){
        return h_iccMax2c_closure_44(bvar);}

extern iccMax2c__signature_adt_t h_iccMax2c_closure_44(uint32_t ivar_5){
        iccMax2c__signature_adt_t result;
        result = (iccMax2c__signature_adt_t)iccMax2c__subelemsig0((uint32_t)ivar_5);

        return result;
}

iccMax2c_closure_44_t new_iccMax2c_closure_44(void){
        static struct iccMax2c__signatureMap_ftbl_s ftbl = {.fptr = (iccMax2c__signature_adt_t (*)(iccMax2c__signatureMap_t, uint32_t))&f_iccMax2c_closure_44, .mptr = (iccMax2c__signature_adt_t (*)(iccMax2c__signatureMap_t, uint32_t))&m_iccMax2c_closure_44, .rptr =  (void (*)(iccMax2c__signatureMap_t))&release_iccMax2c_closure_44, .cptr = (iccMax2c__signatureMap_t (*)(iccMax2c__signatureMap_t))&copy_iccMax2c_closure_44};
        iccMax2c_closure_44_t tmp = (iccMax2c_closure_44_t) safe_malloc(sizeof(struct iccMax2c_closure_44_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_iccMax2c_closure_44(iccMax2c__signatureMap_t closure){
        iccMax2c_closure_44_t x = (iccMax2c_closure_44_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

iccMax2c_closure_44_t copy_iccMax2c_closure_44(iccMax2c_closure_44_t x){
        iccMax2c_closure_44_t y = new_iccMax2c_closure_44();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            iccMax2c__signatureMap_htbl_t new_htbl = (iccMax2c__signatureMap_htbl_t) safe_malloc(sizeof(struct iccMax2c__signatureMap_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            iccMax2c__signatureMap_hashentry_t * new_data = (iccMax2c__signatureMap_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct iccMax2c__signatureMap_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct iccMax2c__signatureMap_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


iccMax2c__signature_adt_t f_iccMax2c_closure_45(struct iccMax2c_closure_45_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        iccMax2c__signatureMap_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_iccMax2c__signatureMap(htbl, bvar, hash);
        iccMax2c__signatureMap_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            iccMax2c__signature_adt_t result;
            result = (iccMax2c__signature_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_iccMax2c_closure_45(bvar);};

return h_iccMax2c_closure_45(bvar);}

iccMax2c__signature_adt_t m_iccMax2c_closure_45(struct iccMax2c_closure_45_s * closure, uint32_t bvar){
        return h_iccMax2c_closure_45(bvar);}

extern iccMax2c__signature_adt_t h_iccMax2c_closure_45(uint32_t ivar_5){
        iccMax2c__signature_adt_t result;
        result = (iccMax2c__signature_adt_t)iccMax2c__subelemsig0((uint32_t)ivar_5);

        return result;
}

iccMax2c_closure_45_t new_iccMax2c_closure_45(void){
        static struct iccMax2c__signatureMap_ftbl_s ftbl = {.fptr = (iccMax2c__signature_adt_t (*)(iccMax2c__signatureMap_t, uint32_t))&f_iccMax2c_closure_45, .mptr = (iccMax2c__signature_adt_t (*)(iccMax2c__signatureMap_t, uint32_t))&m_iccMax2c_closure_45, .rptr =  (void (*)(iccMax2c__signatureMap_t))&release_iccMax2c_closure_45, .cptr = (iccMax2c__signatureMap_t (*)(iccMax2c__signatureMap_t))&copy_iccMax2c_closure_45};
        iccMax2c_closure_45_t tmp = (iccMax2c_closure_45_t) safe_malloc(sizeof(struct iccMax2c_closure_45_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_iccMax2c_closure_45(iccMax2c__signatureMap_t closure){
        iccMax2c_closure_45_t x = (iccMax2c_closure_45_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

iccMax2c_closure_45_t copy_iccMax2c_closure_45(iccMax2c_closure_45_t x){
        iccMax2c_closure_45_t y = new_iccMax2c_closure_45();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            iccMax2c__signatureMap_htbl_t new_htbl = (iccMax2c__signatureMap_htbl_t) safe_malloc(sizeof(struct iccMax2c__signatureMap_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            iccMax2c__signatureMap_hashentry_t * new_data = (iccMax2c__signatureMap_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct iccMax2c__signatureMap_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct iccMax2c__signatureMap_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


iccMax2c_array_46_t new_iccMax2c_array_46(uint32_t size){
        iccMax2c_array_46_t tmp = (iccMax2c_array_46_t) safe_malloc(sizeof(struct iccMax2c_array_46_s) + (size * sizeof(iccMax2c__signature_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_iccMax2c_array_46(iccMax2c_array_46_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_iccMax2c__signature_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_iccMax2c_array_46_ptr(pointer_t x, type_actual_t T){
        release_iccMax2c_array_46((iccMax2c_array_46_t)x);
}

iccMax2c_array_46_t copy_iccMax2c_array_46(iccMax2c_array_46_t x){
        iccMax2c_array_46_t tmp = new_iccMax2c_array_46(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_iccMax2c_array_46(iccMax2c_array_46_t x, iccMax2c_array_46_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_iccMax2c__signature_adt(x->elems[i], y->elems[i]);};
        return tmp;}

bool_t equal_iccMax2c_array_46_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_iccMax2c_array_46((iccMax2c_array_46_t)x, (iccMax2c_array_46_t)y);
}

actual_iccMax2c_array_46_t actual_iccMax2c_array_46(){
        actual_iccMax2c_array_46_t new = (actual_iccMax2c_array_46_t)safe_malloc(sizeof(struct actual_iccMax2c_array_46_s));
        new->equal_ptr = (equal_ptr_t)(*equal_iccMax2c_array_46_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_iccMax2c_array_46_ptr);
 

 
        return new;
 };

iccMax2c_array_46_t update_iccMax2c_array_46(iccMax2c_array_46_t x, uint32_t i, iccMax2c__signature_adt_t v){
         iccMax2c_array_46_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_iccMax2c_array_46(x);
                      x->count--;};
        iccMax2c__signature_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_iccMax2c__signature_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

iccMax2c_array_46_t upgrade_iccMax2c_array_46(iccMax2c_array_46_t x, uint32_t i, iccMax2c__signature_adt_t v){
         iccMax2c_array_46_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_malloc(sizeof(struct iccMax2c_array_46_s) + (newmax * sizeof(iccMax2c__signature_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_iccMax2c_array_46(x);} else {y = copy_iccMax2c_array_46(x);
                      x->count--;};
        iccMax2c__signature_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_iccMax2c__signature_adt(yelems[i]);};
         yelems[i] = v;
         return y;}




iccMax2c__signature_adt_t f_iccMax2c_closure_47(struct iccMax2c_closure_47_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        iccMax2c__signatureMap_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_iccMax2c__signatureMap(htbl, bvar, hash);
        iccMax2c__signatureMap_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            iccMax2c__signature_adt_t result;
            result = (iccMax2c__signature_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_iccMax2c_closure_47(bvar);};

return h_iccMax2c_closure_47(bvar);}

iccMax2c__signature_adt_t m_iccMax2c_closure_47(struct iccMax2c_closure_47_s * closure, uint32_t bvar){
        return h_iccMax2c_closure_47(bvar);}

extern iccMax2c__signature_adt_t h_iccMax2c_closure_47(uint32_t ivar_8){
        iccMax2c__signature_adt_t result;
        result = (iccMax2c__signature_adt_t)iccMax2c__undefined();
        if (result != NULL) result->count++;

        return result;
}

iccMax2c_closure_47_t new_iccMax2c_closure_47(void){
        static struct iccMax2c__signatureMap_ftbl_s ftbl = {.fptr = (iccMax2c__signature_adt_t (*)(iccMax2c__signatureMap_t, uint32_t))&f_iccMax2c_closure_47, .mptr = (iccMax2c__signature_adt_t (*)(iccMax2c__signatureMap_t, uint32_t))&m_iccMax2c_closure_47, .rptr =  (void (*)(iccMax2c__signatureMap_t))&release_iccMax2c_closure_47, .cptr = (iccMax2c__signatureMap_t (*)(iccMax2c__signatureMap_t))&copy_iccMax2c_closure_47};
        iccMax2c_closure_47_t tmp = (iccMax2c_closure_47_t) safe_malloc(sizeof(struct iccMax2c_closure_47_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_iccMax2c_closure_47(iccMax2c__signatureMap_t closure){
        iccMax2c_closure_47_t x = (iccMax2c_closure_47_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

iccMax2c_closure_47_t copy_iccMax2c_closure_47(iccMax2c_closure_47_t x){
        iccMax2c_closure_47_t y = new_iccMax2c_closure_47();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            iccMax2c__signatureMap_htbl_t new_htbl = (iccMax2c__signatureMap_htbl_t) safe_malloc(sizeof(struct iccMax2c__signatureMap_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            iccMax2c__signatureMap_hashentry_t * new_data = (iccMax2c__signatureMap_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct iccMax2c__signatureMap_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct iccMax2c__signatureMap_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


iccMax2c__signature_adt_t f_iccMax2c_closure_48(struct iccMax2c_closure_48_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        iccMax2c__signatureMap_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_iccMax2c__signatureMap(htbl, bvar, hash);
        iccMax2c__signatureMap_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            iccMax2c__signature_adt_t result;
            result = (iccMax2c__signature_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_iccMax2c_closure_48(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);};

return h_iccMax2c_closure_48(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

iccMax2c__signature_adt_t m_iccMax2c_closure_48(struct iccMax2c_closure_48_s * closure, uint32_t bvar){
        return h_iccMax2c_closure_48(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern iccMax2c__signature_adt_t h_iccMax2c_closure_48(uint32_t ivar_190, uint64_t ivar_1, bytestrings__bytestring_t ivar_2, uint32_t ivar_16, uint32_t ivar_29){
        iccMax2c__signature_adt_t result;
        mpq_ptr_t ivar_259;
        uint64_t ivar_192;
        uint8_t ivar_195;
        ivar_195 = (uint8_t)16;
        ivar_192 = (uint64_t)(ivar_16 + ivar_195);
        uint64_t ivar_193;
        uint8_t ivar_197;
        ivar_197 = (uint8_t)8;
        ivar_193 = (uint64_t)((uint64_t)ivar_197 * (uint64_t)ivar_190);
        mpz_t tmp268694;
        mpz_init(tmp268694);
        mpz_set_ui(tmp268694, (uint64_t)ivar_192);
        mpz_add_ui(tmp268694, tmp268694, (uint64_t)ivar_193);
        mpq_mk_set_z(ivar_259, tmp268694);
        mpz_clear(tmp268694);
        /* j */ uint32_t ivar_191;
        //copying to uint32 from mpq;
        ivar_191 = (uint32_t)mpq_get_ui(ivar_259);
        mpq_clear(ivar_259);
        /* offseti */ uint32_t ivar_201;
        ivar_2->count++;
        ivar_201 = (uint32_t)iccMax2c__readU32((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_191);
        /* sizei */ uint32_t ivar_207;
        uint32_t ivar_215;
        uint8_t ivar_211;
        ivar_211 = (uint8_t)4;
        ivar_215 = (uint32_t)(ivar_191 + ivar_211);
        ivar_2->count++;
        ivar_207 = (uint32_t)iccMax2c__readU32((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_215);
        bool_t ivar_216;
        bool_t ivar_217;
        uint8_t ivar_220;
        ivar_220 = (uint8_t)0;
        ivar_217 = (ivar_201 == ivar_220);
        if (ivar_217){ 
             ivar_216 = (bool_t) true;
} else {
        
             ivar_216 = (ivar_201 >= ivar_29);
};
        if (ivar_216){ 
             result = (iccMax2c__signature_adt_t)iccMax2c__undefined();
             if (result != NULL) result->count++;
} else {
        
             bool_t ivar_226;
             uint32_t ivar_228;
             ivar_228 = (uint32_t)integertypes__u32minus((uint32_t)ivar_29, (uint32_t)ivar_201);
             ivar_226 = (ivar_207 >= ivar_228);
             if (ivar_226){  
           result = (iccMax2c__signature_adt_t)iccMax2c__undefined();
           if (result != NULL) result->count++;
} else {
             
           mpq_ptr_t ivar_258;
           mpz_t tmp268695;
           mpz_init(tmp268695);
           mpz_set_ui(tmp268695, (uint64_t)ivar_16);
           mpz_add_ui(tmp268695, tmp268695, (uint64_t)ivar_201);
           mpq_mk_set_z(ivar_258, tmp268695);
           mpz_clear(tmp268695);
           /* starti */ uint32_t ivar_235;
           //copying to uint32 from mpq;
           ivar_235 = (uint32_t)mpq_get_ui(ivar_258);
           mpq_clear(ivar_258);
           mpq_ptr_t ivar_257;
           mpz_t tmp268696;
           mpz_init(tmp268696);
           mpz_set_ui(tmp268696, (uint64_t)ivar_235);
           mpz_add_ui(tmp268696, tmp268696, (uint64_t)ivar_207);
           mpq_mk_set_z(ivar_257, tmp268696);
           mpz_clear(tmp268696);
           /* endi */ uint32_t ivar_239;
           //copying to uint32 from mpq;
           ivar_239 = (uint32_t)mpq_get_ui(ivar_257);
           mpq_clear(ivar_257);
           /* wi */ iccMax2c__window_t ivar_243;
           ivar_243 = (iccMax2c__window_t)new_iccMax2c__window();;
           ivar_243->endpos = (uint32_t)ivar_239;
           ivar_243->startpos = (uint32_t)ivar_235;
           iccMax2c__signature_adt_t ivar_253;
           ivar_2->count++;
           ivar_253 = (iccMax2c__signature_adt_t)iccMax2c__parsecalc((uint64_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (iccMax2c__window_t)ivar_243);
           //copying to iccMax2c__signature_adt from iccMax2c__signature_adt;
           result = (iccMax2c__signature_adt_t)ivar_253;
           if (result != NULL) result->count++;
           release_iccMax2c__signature_adt(ivar_253);
};
};

        return result;
}

iccMax2c_closure_48_t new_iccMax2c_closure_48(void){
        static struct iccMax2c__signatureMap_ftbl_s ftbl = {.fptr = (iccMax2c__signature_adt_t (*)(iccMax2c__signatureMap_t, uint32_t))&f_iccMax2c_closure_48, .mptr = (iccMax2c__signature_adt_t (*)(iccMax2c__signatureMap_t, uint32_t))&m_iccMax2c_closure_48, .rptr =  (void (*)(iccMax2c__signatureMap_t))&release_iccMax2c_closure_48, .cptr = (iccMax2c__signatureMap_t (*)(iccMax2c__signatureMap_t))&copy_iccMax2c_closure_48};
        iccMax2c_closure_48_t tmp = (iccMax2c_closure_48_t) safe_malloc(sizeof(struct iccMax2c_closure_48_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_iccMax2c_closure_48(iccMax2c__signatureMap_t closure){
        iccMax2c_closure_48_t x = (iccMax2c_closure_48_t)closure;
        x->count--;
        if (x->count <= 0){
         release_bytestrings__bytestring(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

iccMax2c_closure_48_t copy_iccMax2c_closure_48(iccMax2c_closure_48_t x){
        iccMax2c_closure_48_t y = new_iccMax2c_closure_48();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint64_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = (uint32_t)x->fvar_3;
        y->fvar_4 = (uint32_t)x->fvar_4;
        if (x->htbl != NULL){
            iccMax2c__signatureMap_htbl_t new_htbl = (iccMax2c__signatureMap_htbl_t) safe_malloc(sizeof(struct iccMax2c__signatureMap_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            iccMax2c__signatureMap_hashentry_t * new_data = (iccMax2c__signatureMap_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct iccMax2c__signatureMap_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct iccMax2c__signatureMap_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern bool_t r_iccMax2c__errorp(iccMax2c__result_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->iccMax2c__result_adt_index;
        release_iccMax2c__result_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_iccMax2c__valuep(iccMax2c__result_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->iccMax2c__result_adt_index;
        release_iccMax2c__result_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern iccMax2c__error_t update_iccMax2c__result_adt_code(iccMax2c__result_adt_t ivar_1, uint8_t ivar_3){
        iccMax2c__error_t  result;
        iccMax2c__error_t ivar_2;
        //copying to iccMax2c__error from iccMax2c__result_adt;
        ivar_2 = (iccMax2c__error_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_iccMax2c__result_adt(ivar_1);
        result = (iccMax2c__error_t)update_iccMax2c__error_code(ivar_2, ivar_3);

        
        return result;
}

extern uint8_t iccMax2c__result_adt_code(iccMax2c__result_adt_t ivar_1){
        uint8_t  result;
        iccMax2c__error_t ivar_2;
        //copying to iccMax2c__error from iccMax2c__result_adt;
        ivar_2 = (iccMax2c__error_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_iccMax2c__result_adt(ivar_1);
        result = (uint8_t)ivar_2->code;
        release_iccMax2c__error(ivar_2);

        
        return result;
}

extern iccMax2c__error_t update_iccMax2c__result_adt_loc(iccMax2c__result_adt_t ivar_1, uint32_t ivar_3){
        iccMax2c__error_t  result;
        iccMax2c__error_t ivar_2;
        //copying to iccMax2c__error from iccMax2c__result_adt;
        ivar_2 = (iccMax2c__error_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_iccMax2c__result_adt(ivar_1);
        result = (iccMax2c__error_t)update_iccMax2c__error_loc(ivar_2, ivar_3);

        
        return result;
}

extern uint32_t iccMax2c__result_adt_loc(iccMax2c__result_adt_t ivar_1){
        uint32_t  result;
        iccMax2c__error_t ivar_2;
        //copying to iccMax2c__error from iccMax2c__result_adt;
        ivar_2 = (iccMax2c__error_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_iccMax2c__result_adt(ivar_1);
        result = (uint32_t)ivar_2->loc;
        release_iccMax2c__error(ivar_2);

        
        return result;
}

extern iccMax2c__error_t update_iccMax2c__result_adt_occ(iccMax2c__result_adt_t ivar_1, uint8_t ivar_3){
        iccMax2c__error_t  result;
        iccMax2c__error_t ivar_2;
        //copying to iccMax2c__error from iccMax2c__result_adt;
        ivar_2 = (iccMax2c__error_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_iccMax2c__result_adt(ivar_1);
        result = (iccMax2c__error_t)update_iccMax2c__error_occ(ivar_2, ivar_3);

        
        return result;
}

extern uint8_t iccMax2c__result_adt_occ(iccMax2c__result_adt_t ivar_1){
        uint8_t  result;
        iccMax2c__error_t ivar_2;
        //copying to iccMax2c__error from iccMax2c__result_adt;
        ivar_2 = (iccMax2c__error_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_iccMax2c__result_adt(ivar_1);
        result = (uint8_t)ivar_2->occ;
        release_iccMax2c__error(ivar_2);

        
        return result;
}

extern iccMax2c__value_t update_iccMax2c__result_adt_vmax(iccMax2c__result_adt_t ivar_1, uint64_t ivar_3){
        iccMax2c__value_t  result;
        iccMax2c__value_t ivar_2;
        //copying to iccMax2c__value from iccMax2c__result_adt;
        ivar_2 = (iccMax2c__value_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_iccMax2c__result_adt(ivar_1);
        result = (iccMax2c__value_t)update_iccMax2c__value_vmax(ivar_2, ivar_3);

        
        return result;
}

extern uint64_t iccMax2c__result_adt_vmax(iccMax2c__result_adt_t ivar_1){
        uint64_t  result;
        iccMax2c__value_t ivar_2;
        //copying to iccMax2c__value from iccMax2c__result_adt;
        ivar_2 = (iccMax2c__value_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_iccMax2c__result_adt(ivar_1);
        result = (uint64_t)ivar_2->vmax;
        release_iccMax2c__value(ivar_2);

        
        return result;
}

extern iccMax2c__value_t update_iccMax2c__result_adt_vmin(iccMax2c__result_adt_t ivar_1, uint64_t ivar_3){
        iccMax2c__value_t  result;
        iccMax2c__value_t ivar_2;
        //copying to iccMax2c__value from iccMax2c__result_adt;
        ivar_2 = (iccMax2c__value_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_iccMax2c__result_adt(ivar_1);
        result = (iccMax2c__value_t)update_iccMax2c__value_vmin(ivar_2, ivar_3);

        
        return result;
}

extern uint64_t iccMax2c__result_adt_vmin(iccMax2c__result_adt_t ivar_1){
        uint64_t  result;
        iccMax2c__value_t ivar_2;
        //copying to iccMax2c__value from iccMax2c__result_adt;
        ivar_2 = (iccMax2c__value_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_iccMax2c__result_adt(ivar_1);
        result = (uint64_t)ivar_2->vmin;
        release_iccMax2c__value(ivar_2);

        
        return result;
}

extern iccMax2c__result_adt_t iccMax2c__error(uint8_t ivar_2, uint32_t ivar_3, uint8_t ivar_4){
        iccMax2c__result_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        iccMax2c__error_t ivar_5;
        ivar_5 = (iccMax2c__error_t)new_iccMax2c__error();;
        ivar_5->iccMax2c__result_adt_index = (uint8_t)ivar_1;
        ivar_5->code = (uint8_t)ivar_2;
        ivar_5->loc = (uint32_t)ivar_3;
        ivar_5->occ = (uint8_t)ivar_4;
        //copying to iccMax2c__result_adt from iccMax2c__error;
        result = (iccMax2c__result_adt_t)ivar_5;
        if (result != NULL) result->count++;
        release_iccMax2c__error(ivar_5);

        
        return result;
}

extern iccMax2c__result_adt_t iccMax2c__value(uint64_t ivar_2, uint64_t ivar_3){
        iccMax2c__result_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        iccMax2c__value_t ivar_4;
        ivar_4 = (iccMax2c__value_t)new_iccMax2c__value();;
        ivar_4->iccMax2c__result_adt_index = (uint8_t)ivar_1;
        ivar_4->vmax = (uint64_t)ivar_2;
        ivar_4->vmin = (uint64_t)ivar_3;
        //copying to iccMax2c__result_adt from iccMax2c__value;
        result = (iccMax2c__result_adt_t)ivar_4;
        if (result != NULL) result->count++;
        release_iccMax2c__value(ivar_4);

        
        return result;
}

extern iccMax2c_funtype_3_t iccMax2c__result_ord(void){
        iccMax2c_funtype_3_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

extern uint8_t iccMax2c__ord__1(iccMax2c__result_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_15;
        ivar_1->count++;
        ivar_15 = (bool_t)r_iccMax2c__errorp((iccMax2c__result_adt_t)ivar_1);
        if (ivar_15){ 
             result = (uint8_t)0;
} else {
        
             result = (uint8_t)1;
};

        
        return result;
}

extern bool_t iccMax2c__subterm__1(iccMax2c__result_adt_t ivar_1, iccMax2c__result_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) equal_iccMax2c__result_adt(ivar_1, ivar_2);

        
        return result;
}

extern bool_t iccMax2c__doublelessp__1(iccMax2c__result_adt_t ivar_1, iccMax2c__result_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) false;

        
        return result;
}

extern iccMax2c_funtype_4_t iccMax2c__reduce_nat__1(iccMax2c_funtype_6_t ivar_1, iccMax2c_funtype_8_t ivar_3){
        iccMax2c_funtype_4_t  result;
        iccMax2c_closure_9_t cl268534;
        cl268534 = new_iccMax2c_closure_9();
        cl268534->fvar_1 = (iccMax2c_funtype_6_t)ivar_1;
        if (cl268534->fvar_1 != NULL) cl268534->fvar_1->count++;
        cl268534->fvar_2 = (iccMax2c_funtype_8_t)ivar_3;
        if (cl268534->fvar_2 != NULL) cl268534->fvar_2->count++;
        release_iccMax2c_funtype_6(ivar_1);
        release_iccMax2c_funtype_8(ivar_3);
        result = (iccMax2c_funtype_4_t)cl268534;

        
        return result;
}

extern iccMax2c_funtype_4_t iccMax2c__REDUCE_nat__1(iccMax2c_funtype_11_t ivar_1, iccMax2c_funtype_13_t ivar_3){
        iccMax2c_funtype_4_t  result;
        iccMax2c_closure_14_t cl268536;
        cl268536 = new_iccMax2c_closure_14();
        cl268536->fvar_1 = (iccMax2c_funtype_11_t)ivar_1;
        if (cl268536->fvar_1 != NULL) cl268536->fvar_1->count++;
        cl268536->fvar_2 = (iccMax2c_funtype_13_t)ivar_3;
        if (cl268536->fvar_2 != NULL) cl268536->fvar_2->count++;
        release_iccMax2c_funtype_11(ivar_1);
        release_iccMax2c_funtype_13(ivar_3);
        result = (iccMax2c_funtype_4_t)cl268536;

        
        return result;
}

extern iccMax2c_funtype_15_t iccMax2c__reduce_ordinal__1(iccMax2c_funtype_16_t ivar_1, iccMax2c_funtype_17_t ivar_3){
        iccMax2c_funtype_15_t  result;
        iccMax2c_closure_18_t cl268538;
        cl268538 = new_iccMax2c_closure_18();
        cl268538->fvar_1 = (iccMax2c_funtype_16_t)ivar_1;
        if (cl268538->fvar_1 != NULL) cl268538->fvar_1->count++;
        cl268538->fvar_2 = (iccMax2c_funtype_17_t)ivar_3;
        if (cl268538->fvar_2 != NULL) cl268538->fvar_2->count++;
        release_iccMax2c_funtype_16(ivar_1);
        release_iccMax2c_funtype_17(ivar_3);
        result = (iccMax2c_funtype_15_t)cl268538;

        
        return result;
}

extern iccMax2c_funtype_15_t iccMax2c__REDUCE_ordinal__1(iccMax2c_funtype_19_t ivar_1, iccMax2c_funtype_20_t ivar_3){
        iccMax2c_funtype_15_t  result;
        iccMax2c_closure_21_t cl268540;
        cl268540 = new_iccMax2c_closure_21();
        cl268540->fvar_1 = (iccMax2c_funtype_19_t)ivar_1;
        if (cl268540->fvar_1 != NULL) cl268540->fvar_1->count++;
        cl268540->fvar_2 = (iccMax2c_funtype_20_t)ivar_3;
        if (cl268540->fvar_2 != NULL) cl268540->fvar_2->count++;
        release_iccMax2c_funtype_19(ivar_1);
        release_iccMax2c_funtype_20(ivar_3);
        result = (iccMax2c_funtype_15_t)cl268540;

        
        return result;
}

extern uint8_t iccMax2c__DefaultError(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint8_t)0;

        defined = true;};
        
        return result;
}

extern uint8_t iccMax2c__Underflow(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint8_t)1;

        defined = true;};
        
        return result;
}

extern uint8_t iccMax2c__Overflow(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint8_t)2;

        defined = true;};
        
        return result;
}

extern uint8_t iccMax2c__nonZero(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint8_t)3;

        defined = true;};
        
        return result;
}

extern uint8_t iccMax2c__Tval(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint8_t)4;

        defined = true;};
        
        return result;
}

extern uint8_t iccMax2c__Eval(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint8_t)5;

        defined = true;};
        
        return result;
}

extern uint8_t iccMax2c__UnexpectedEOF(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint8_t)6;

        defined = true;};
        
        return result;
}

extern uint8_t iccMax2c__badTag(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint8_t)7;

        defined = true;};
        
        return result;
}

extern uint8_t iccMax2c__Undefined(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint8_t)8;

        defined = true;};
        
        return result;
}

extern uint64_t iccMax2c__print64(strings__string_t ivar_1, uint64_t ivar_2){
        uint64_t  result;
        //copying to uint64 from uint64;
        result = (uint64_t)ivar_2;

        
        return result;
}

extern uint32_t iccMax2c__print32(strings__string_t ivar_1, uint32_t ivar_2){
        uint32_t  result;
        //copying to uint32 from uint32;
        result = (uint32_t)ivar_2;

        
        return result;
}

extern uint16_t iccMax2c__print16(strings__string_t ivar_1, uint16_t ivar_2){
        uint16_t  result;
        //copying to uint16 from uint16;
        result = (uint16_t)ivar_2;

        
        return result;
}

extern uint32_t iccMax2c__dataTag(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint32_t)1684108385;

        defined = true;};
        
        return result;
}

extern uint32_t iccMax2c__calcTag(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint32_t)1667329123;

        defined = true;};
        
        return result;
}

extern bool_t iccMax2c__channelVecOpp(uint32_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)1768824864;
        ivar_2 = (ivar_1 == ivar_5);
        if (ivar_2){ 
             result = (bool_t) true;
} else {
        
             bool_t ivar_7;
             uint32_t ivar_10;
             ivar_10 = (uint32_t)1869968416;
             ivar_7 = (ivar_1 == ivar_10);
             if (ivar_7){  
           result = (bool_t) true;
} else {
             
           bool_t ivar_12;
           uint32_t ivar_15;
           ivar_15 = (uint32_t)1952933236;
           ivar_12 = (ivar_1 == ivar_15);
           if (ivar_12){   
           result = (bool_t) true;
} else {
           
           bool_t ivar_17;
           uint32_t ivar_20;
           ivar_20 = (uint32_t)1953527156;
           ivar_17 = (ivar_1 == ivar_20);
           if (ivar_17){    
            result = (bool_t) true;
} else {
           
            uint32_t ivar_23;
            ivar_23 = (uint32_t)1953718646;
            result = (ivar_1 == ivar_23);
};
};
};
};

        
        return result;
}

extern iccMax2c__result_adt_t iccMax2c__ChannelVecOp(uint32_t ivar_1, uint64_t ivar_2, uint32_t ivar_3, uint64_t ivar_4, uint64_t ivar_5, uint16_t ivar_6, uint16_t ivar_7){
        iccMax2c__result_adt_t  result;
        bool_t ivar_8;
        bool_t ivar_9;
        uint32_t ivar_12;
        ivar_12 = (uint32_t)1768824864;
        ivar_9 = (ivar_1 == ivar_12);
        if (ivar_9){ 
             ivar_8 = (bool_t) true;
} else {
        
             uint32_t ivar_15;
             ivar_15 = (uint32_t)1952933236;
             ivar_8 = (ivar_1 == ivar_15);
};
        if (ivar_8){ 
             bool_t ivar_18;
             mpz_ptr_t ivar_19;
             mpz_ptr_t ivar_21;
             mpz_mk_set_ui(ivar_21, (uint64_t)ivar_4);
             mpz_add_ui(ivar_21, ivar_21, (uint64_t)ivar_7);
             uint8_t ivar_22;
             ivar_22 = (uint8_t)1;
             mpz_mk_set_ui(ivar_19, (uint64_t)ivar_22);
             mpz_add(ivar_19, ivar_19, ivar_21);
             int64_t tmp268544 = mpz_cmp_ui(ivar_19, ivar_2);
             ivar_18 = (tmp268544 < 0);
             if (ivar_18){  
           mpz_ptr_t ivar_48;
           mpz_ptr_t ivar_30;
           mpz_mk_set_ui(ivar_30, (uint64_t)ivar_4);
           mpz_add_ui(ivar_30, ivar_30, (uint64_t)ivar_7);
           uint8_t ivar_31;
           ivar_31 = (uint8_t)1;
           mpz_mk_set_ui(ivar_48, (uint64_t)ivar_31);
           mpz_add(ivar_48, ivar_48, ivar_30);
           uint64_t ivar_43;
           //copying to uint64 from mpz;
           ivar_43 = (uint64_t)mpz_get_ui(ivar_48);
           mpz_clear(ivar_48);
           mpz_ptr_t ivar_47;
           mpz_ptr_t ivar_36;
           mpz_mk_set_ui(ivar_36, (uint64_t)ivar_5);
           mpz_add_ui(ivar_36, ivar_36, (uint64_t)ivar_7);
           uint8_t ivar_37;
           ivar_37 = (uint8_t)1;
           mpz_mk_set_ui(ivar_47, (uint64_t)ivar_37);
           mpz_add(ivar_47, ivar_47, ivar_36);
           uint64_t ivar_44;
           //copying to uint64 from mpz;
           ivar_44 = (uint64_t)mpz_get_ui(ivar_47);
           mpz_clear(ivar_47);
           iccMax2c__result_adt_t ivar_42;
           ivar_42 = (iccMax2c__result_adt_t)iccMax2c__value((uint64_t)ivar_43, (uint64_t)ivar_44);
           //copying to iccMax2c__result_adt from iccMax2c__result_adt;
           result = (iccMax2c__result_adt_t)ivar_42;
           if (result != NULL) result->count++;
           release_iccMax2c__result_adt(ivar_42);
} else {
             
           uint8_t ivar_53;
           ivar_53 = (uint8_t)iccMax2c__Overflow();
           uint8_t ivar_55;
           ivar_55 = (uint8_t)21;
           iccMax2c__result_adt_t ivar_52;
           ivar_52 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_53, (uint32_t)ivar_3, (uint8_t)ivar_55);
           //copying to iccMax2c__result_adt from iccMax2c__result_adt;
           result = (iccMax2c__result_adt_t)ivar_52;
           if (result != NULL) result->count++;
           release_iccMax2c__result_adt(ivar_52);
};
} else {
        
             bool_t ivar_56;
             bool_t ivar_57;
             uint32_t ivar_60;
             ivar_60 = (uint32_t)1869968416;
             ivar_57 = (ivar_1 == ivar_60);
             if (ivar_57){  
           ivar_56 = (bool_t) true;
} else {
             
           uint32_t ivar_63;
           ivar_63 = (uint32_t)1953527156;
           ivar_56 = (ivar_1 == ivar_63);
};
             if (ivar_56){  
           bool_t ivar_66;
           uint32_t ivar_68;
           uint8_t ivar_70;
           ivar_70 = (uint8_t)1;
           ivar_68 = (uint32_t)(ivar_7 + ivar_70);
           ivar_66 = (ivar_5 < ivar_68);
           if (ivar_66){   
           uint8_t ivar_77;
           ivar_77 = (uint8_t)iccMax2c__Underflow();
           uint8_t ivar_79;
           ivar_79 = (uint8_t)22;
           iccMax2c__result_adt_t ivar_76;
           ivar_76 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_77, (uint32_t)ivar_3, (uint8_t)ivar_79);
           //copying to iccMax2c__result_adt from iccMax2c__result_adt;
           result = (iccMax2c__result_adt_t)ivar_76;
           if (result != NULL) result->count++;
           release_iccMax2c__result_adt(ivar_76);
} else {
           
           mpz_ptr_t ivar_100;
           mpz_ptr_t ivar_82;
           mpz_mk_set_ui(ivar_82, (uint64_t)ivar_4);
           mpz_sub_ui(ivar_82, ivar_82, (uint64_t)ivar_7);
           uint8_t ivar_83;
           ivar_83 = (uint8_t)1;
           mpz_mk_sub_ui(ivar_100, ivar_82, (uint64_t)ivar_83);
           uint64_t ivar_95;
           //copying to uint64 from mpz;
           ivar_95 = (uint64_t)mpz_get_ui(ivar_100);
           mpz_clear(ivar_100);
           mpz_ptr_t ivar_99;
           mpz_ptr_t ivar_88;
           mpz_mk_set_ui(ivar_88, (uint64_t)ivar_5);
           mpz_sub_ui(ivar_88, ivar_88, (uint64_t)ivar_7);
           uint8_t ivar_89;
           ivar_89 = (uint8_t)1;
           mpz_mk_sub_ui(ivar_99, ivar_88, (uint64_t)ivar_89);
           uint64_t ivar_96;
           //copying to uint64 from mpz;
           ivar_96 = (uint64_t)mpz_get_ui(ivar_99);
           mpz_clear(ivar_99);
           iccMax2c__result_adt_t ivar_94;
           ivar_94 = (iccMax2c__result_adt_t)iccMax2c__value((uint64_t)ivar_95, (uint64_t)ivar_96);
           //copying to iccMax2c__result_adt from iccMax2c__result_adt;
           result = (iccMax2c__result_adt_t)ivar_94;
           if (result != NULL) result->count++;
           release_iccMax2c__result_adt(ivar_94);
};
} else {
             
           bool_t ivar_101;
           uint32_t ivar_103;
           uint8_t ivar_105;
           ivar_105 = (uint8_t)1;
           ivar_103 = (uint32_t)(ivar_7 + ivar_105);
           ivar_101 = (ivar_5 < ivar_103);
           if (ivar_101){   
           uint8_t ivar_112;
           ivar_112 = (uint8_t)iccMax2c__Underflow();
           uint8_t ivar_114;
           ivar_114 = (uint8_t)23;
           iccMax2c__result_adt_t ivar_111;
           ivar_111 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_112, (uint32_t)ivar_3, (uint8_t)ivar_114);
           //copying to iccMax2c__result_adt from iccMax2c__result_adt;
           result = (iccMax2c__result_adt_t)ivar_111;
           if (result != NULL) result->count++;
           release_iccMax2c__result_adt(ivar_111);
} else {
           
           iccMax2c__result_adt_t ivar_117;
           ivar_117 = (iccMax2c__result_adt_t)iccMax2c__value((uint64_t)ivar_4, (uint64_t)ivar_5);
           //copying to iccMax2c__result_adt from iccMax2c__result_adt;
           result = (iccMax2c__result_adt_t)ivar_117;
           if (result != NULL) result->count++;
           release_iccMax2c__result_adt(ivar_117);
};
};
};

        
        return result;
}

extern bool_t iccMax2c__subElemTagp(uint32_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)1668641398;
        ivar_2 = (ivar_1 == ivar_5);
        if (ivar_2){ 
             result = (bool_t) true;
} else {
        
             bool_t ivar_7;
             uint32_t ivar_10;
             ivar_10 = (uint32_t)1836349472;
             ivar_7 = (ivar_1 == ivar_10);
             if (ivar_7){  
           result = (bool_t) true;
} else {
             
           bool_t ivar_12;
           uint32_t ivar_15;
           ivar_15 = (uint32_t)1668052340;
           ivar_12 = (ivar_1 == ivar_15);
           if (ivar_12){   
           result = (bool_t) true;
} else {
           
           bool_t ivar_17;
           uint32_t ivar_20;
           ivar_20 = (uint32_t)1667329123;
           ivar_17 = (ivar_1 == ivar_20);
           if (ivar_17){    
            result = (bool_t) true;
} else {
           
            bool_t ivar_22;
            uint32_t ivar_25;
            ivar_25 = (uint32_t)1953066612;
            ivar_22 = (ivar_1 == ivar_25);
            if (ivar_22){     
             result = (bool_t) true;
} else {
            
             uint32_t ivar_28;
             ivar_28 = (uint32_t)1701602669;
             result = (ivar_1 == ivar_28);
};
};
};
};
};

        
        return result;
}

extern bool_t iccMax2c__stackOpTagp(uint32_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)1668247673;
        ivar_2 = (ivar_1 == ivar_5);
        if (ivar_2){ 
             result = (bool_t) true;
} else {
        
             bool_t ivar_7;
             uint32_t ivar_10;
             ivar_10 = (uint32_t)1919906924;
             ivar_7 = (ivar_1 == ivar_10);
             if (ivar_7){  
           result = (bool_t) true;
} else {
             
           bool_t ivar_12;
           uint32_t ivar_15;
           ivar_15 = (uint32_t)1919906930;
           ivar_12 = (ivar_1 == ivar_15);
           if (ivar_12){   
           result = (bool_t) true;
} else {
           
           bool_t ivar_17;
           uint32_t ivar_20;
           ivar_20 = (uint32_t)1886352228;
           ivar_17 = (ivar_1 == ivar_20);
           if (ivar_17){    
            result = (bool_t) true;
} else {
           
            bool_t ivar_22;
            uint32_t ivar_25;
            ivar_25 = (uint32_t)1718380912;
            ivar_22 = (ivar_1 == ivar_25);
            if (ivar_22){     
             result = (bool_t) true;
} else {
            
             uint32_t ivar_28;
             ivar_28 = (uint32_t)1886351392;
             result = (ivar_1 == ivar_28);
};
};
};
};
};

        
        return result;
}

extern uint64_t iccMax2c__stackOut(uint32_t ivar_1, uint16_t ivar_2, uint16_t ivar_3){
        uint64_t  result;
        bool_t ivar_4;
        uint32_t ivar_6;
        ivar_6 = (uint32_t)1668247673;
        ivar_4 = (ivar_1 == ivar_6);
        if (ivar_4){ 
             uint32_t ivar_8;
             uint8_t ivar_11;
             ivar_11 = (uint8_t)1;
             ivar_8 = (uint32_t)(ivar_3 + ivar_11);
             uint32_t ivar_9;
             uint8_t ivar_14;
             ivar_14 = (uint8_t)1;
             ivar_9 = (uint32_t)(ivar_2 + ivar_14);
             result = (uint64_t)((uint64_t)ivar_8 * (uint64_t)ivar_9);
} else {
        
             bool_t ivar_17;
             uint32_t ivar_19;
             ivar_19 = (uint32_t)1919906924;
             ivar_17 = (ivar_1 == ivar_19);
             if (ivar_17){  
           uint8_t ivar_22;
           ivar_22 = (uint8_t)1;
           result = (uint64_t)(ivar_2 + ivar_22);
} else {
             
           bool_t ivar_24;
           uint32_t ivar_26;
           ivar_26 = (uint32_t)1919906930;
           ivar_24 = (ivar_1 == ivar_26);
           if (ivar_24){   
           uint8_t ivar_29;
           ivar_29 = (uint8_t)1;
           result = (uint64_t)(ivar_2 + ivar_29);
} else {
           
           bool_t ivar_31;
           uint32_t ivar_33;
           ivar_33 = (uint32_t)1886352228;
           ivar_31 = (ivar_1 == ivar_33);
           if (ivar_31){    
            uint32_t ivar_35;
            uint32_t ivar_37;
            uint8_t ivar_40;
            ivar_40 = (uint8_t)1;
            ivar_37 = (uint32_t)(ivar_2 + ivar_40);
            ivar_35 = (uint32_t)(ivar_37 + ivar_3);
            uint8_t ivar_36;
            ivar_36 = (uint8_t)1;
            result = (uint64_t)(ivar_35 + ivar_36);
} else {
           
            bool_t ivar_44;
            uint32_t ivar_46;
            ivar_46 = (uint32_t)1718380912;
            ivar_44 = (ivar_1 == ivar_46);
            if (ivar_44){     
             uint8_t ivar_49;
             ivar_49 = (uint8_t)1;
             result = (uint64_t)(ivar_2 + ivar_49);
} else {
            
             result = (uint64_t)0;
};
};
};
};
};

        
        return result;
}

extern bool_t iccMax2c__matrixOpTagp(uint32_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)1936682102;
        ivar_2 = (ivar_1 == ivar_5);
        if (ivar_2){ 
             result = (bool_t) true;
} else {
        
             uint32_t ivar_8;
             ivar_8 = (uint32_t)1953653102;
             result = (ivar_1 == ivar_8);
};

        
        return result;
}

extern uint64_t iccMax2c__matrixIn(uint32_t ivar_1, uint16_t ivar_2, uint16_t ivar_3){
        uint64_t  result;
        bool_t ivar_4;
        uint32_t ivar_6;
        ivar_6 = (uint32_t)1936682102;
        ivar_4 = (ivar_1 == ivar_6);
        if (ivar_4){ 
             uint64_t ivar_8;
             uint64_t ivar_10;
             uint32_t ivar_12;
             uint8_t ivar_15;
             ivar_15 = (uint8_t)1;
             ivar_12 = (uint32_t)(ivar_2 + ivar_15);
             uint32_t ivar_13;
             uint8_t ivar_18;
             ivar_18 = (uint8_t)1;
             ivar_13 = (uint32_t)(ivar_3 + ivar_18);
             ivar_10 = (uint64_t)((uint64_t)ivar_12 * (uint64_t)ivar_13);
             ivar_8 = (uint64_t)(ivar_10 + ivar_2);
             uint8_t ivar_9;
             ivar_9 = (uint8_t)1;
             result = (uint64_t)(ivar_8 + ivar_9);
} else {
        
             uint32_t ivar_23;
             uint8_t ivar_26;
             ivar_26 = (uint8_t)1;
             ivar_23 = (uint32_t)(ivar_2 + ivar_26);
             uint32_t ivar_24;
             uint8_t ivar_29;
             ivar_29 = (uint8_t)1;
             ivar_24 = (uint32_t)(ivar_3 + ivar_29);
             result = (uint64_t)((uint64_t)ivar_23 * (uint64_t)ivar_24);
};

        
        return result;
}

extern uint64_t iccMax2c__matrixOut(uint32_t ivar_1, uint16_t ivar_2, uint16_t ivar_3){
        uint64_t  result;
        bool_t ivar_4;
        uint32_t ivar_6;
        ivar_6 = (uint32_t)1936682102;
        ivar_4 = (ivar_1 == ivar_6);
        if (ivar_4){ 
             uint8_t ivar_9;
             ivar_9 = (uint8_t)1;
             result = (uint64_t)(ivar_3 + ivar_9);
} else {
        
             uint32_t ivar_11;
             uint8_t ivar_14;
             ivar_14 = (uint8_t)1;
             ivar_11 = (uint32_t)(ivar_2 + ivar_14);
             uint32_t ivar_12;
             uint8_t ivar_17;
             ivar_17 = (uint8_t)1;
             ivar_12 = (uint32_t)(ivar_3 + ivar_17);
             result = (uint64_t)((uint64_t)ivar_11 * (uint64_t)ivar_12);
};

        
        return result;
}

extern bool_t iccMax2c__seqFuncOpp(uint32_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)1937075488;
        ivar_2 = (ivar_1 == ivar_5);
        if (ivar_2){ 
             result = (bool_t) true;
} else {
        
             bool_t ivar_7;
             uint32_t ivar_10;
             ivar_10 = (uint32_t)1886547812;
             ivar_7 = (ivar_1 == ivar_10);
             if (ivar_7){  
           result = (bool_t) true;
} else {
             
           bool_t ivar_12;
           uint32_t ivar_15;
           ivar_15 = (uint32_t)1835626016;
           ivar_12 = (ivar_1 == ivar_15);
           if (ivar_12){   
           result = (bool_t) true;
} else {
           
           bool_t ivar_17;
           uint32_t ivar_20;
           ivar_20 = (uint32_t)1835104288;
           ivar_17 = (ivar_1 == ivar_20);
           if (ivar_17){    
            result = (bool_t) true;
} else {
           
            bool_t ivar_22;
            uint32_t ivar_25;
            ivar_25 = (uint32_t)1634624544;
            ivar_22 = (ivar_1 == ivar_25);
            if (ivar_22){     
             result = (bool_t) true;
} else {
            
             uint32_t ivar_28;
             ivar_28 = (uint32_t)1869750304;
             result = (ivar_1 == ivar_28);
};
};
};
};
};

        
        return result;
}

extern bool_t iccMax2c__FuncVecOpp(uint32_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)1885937696;
        ivar_2 = (ivar_1 == ivar_5);
        if (ivar_2){ 
             result = (bool_t) true;
} else {
        
             bool_t ivar_7;
             uint32_t ivar_10;
             ivar_10 = (uint32_t)726224454;
             ivar_7 = (ivar_1 == ivar_10);
             if (ivar_7){  
           result = (bool_t) true;
} else {
             
           bool_t ivar_12;
           uint32_t ivar_15;
           ivar_15 = (uint32_t)759778886;
           ivar_12 = (ivar_1 == ivar_15);
           if (ivar_12){   
           result = (bool_t) true;
} else {
           
           bool_t ivar_17;
           uint32_t ivar_20;
           ivar_20 = (uint32_t)1314999840;
           ivar_17 = (ivar_1 == ivar_20);
           if (ivar_17){    
            result = (bool_t) true;
} else {
           
            bool_t ivar_22;
            uint32_t ivar_25;
            ivar_25 = (uint32_t)1633969184;
            ivar_22 = (ivar_1 == ivar_25);
            if (ivar_22){     
             result = (bool_t) true;
} else {
            
             bool_t ivar_27;
             uint32_t ivar_30;
             ivar_30 = (uint32_t)1937072672;
             ivar_27 = (ivar_1 == ivar_30);
             if (ivar_27){      
              result = (bool_t) true;
} else {
             
              bool_t ivar_32;
              uint32_t ivar_35;
              ivar_35 = (uint32_t)1836411936;
              ivar_32 = (ivar_1 == ivar_35);
              if (ivar_32){       
               result = (bool_t) true;
} else {
              
               bool_t ivar_37;
               uint32_t ivar_40;
               ivar_40 = (uint32_t)1684633120;
               ivar_37 = (ivar_1 == ivar_40);
               if (ivar_37){        
                result = (bool_t) true;
} else {
               
                bool_t ivar_42;
                uint32_t ivar_45;
                ivar_45 = (uint32_t)1836016672;
                ivar_42 = (ivar_1 == ivar_45);
                if (ivar_42){         
                 result = (bool_t) true;
} else {
                
                 bool_t ivar_47;
                 uint32_t ivar_50;
                 ivar_50 = (uint32_t)1886353184;
                 ivar_47 = (ivar_1 == ivar_50);
                 if (ivar_47){          
                  result = (bool_t) true;
} else {
                 
                  bool_t ivar_52;
                  uint32_t ivar_55;
                  ivar_55 = (uint32_t)1734438241;
                  ivar_52 = (ivar_1 == ivar_55);
                  if (ivar_52){           
                   result = (bool_t) true;
} else {
                  
                   bool_t ivar_57;
                   uint32_t ivar_60;
                   ivar_60 = (uint32_t)1935762532;
                   ivar_57 = (ivar_1 == ivar_60);
                   if (ivar_57){            
                    result = (bool_t) true;
} else {
                   
                    bool_t ivar_62;
                    uint32_t ivar_65;
                    ivar_65 = (uint32_t)1936946530;
                    ivar_62 = (ivar_1 == ivar_65);
                    if (ivar_62){             
                     result = (bool_t) true;
} else {
                    
                     bool_t ivar_67;
                     uint32_t ivar_70;
                     ivar_70 = (uint32_t)1936553324;
                     ivar_67 = (ivar_1 == ivar_70);
                     if (ivar_67){              
                      result = (bool_t) true;
} else {
                     
                      bool_t ivar_72;
                      uint32_t ivar_75;
                      ivar_75 = (uint32_t)1935960438;
                      ivar_72 = (ivar_1 == ivar_75);
                      if (ivar_72){               
                       result = (bool_t) true;
} else {
                      
                       bool_t ivar_77;
                       uint32_t ivar_80;
                       ivar_80 = (uint32_t)1936793632;
                       ivar_77 = (ivar_1 == ivar_80);
                       if (ivar_77){                
                        result = (bool_t) true;
} else {
                       
                        bool_t ivar_82;
                        uint32_t ivar_85;
                        ivar_85 = (uint32_t)1936814708;
                        ivar_82 = (ivar_1 == ivar_85);
                        if (ivar_82){                 
                         result = (bool_t) true;
} else {
                        
                         bool_t ivar_87;
                         uint32_t ivar_90;
                         ivar_90 = (uint32_t)1667375136;
                         ivar_87 = (ivar_1 == ivar_90);
                         if (ivar_87){                  
                          result = (bool_t) true;
} else {
                         
                          bool_t ivar_92;
                          uint32_t ivar_95;
                          ivar_95 = (uint32_t)1667396212;
                          ivar_92 = (ivar_1 == ivar_95);
                          if (ivar_92){                   
                           result = (bool_t) true;
} else {
                          
                           bool_t ivar_97;
                           uint32_t ivar_100;
                           ivar_100 = (uint32_t)1633841952;
                           ivar_97 = (ivar_1 == ivar_100);
                           if (ivar_97){                    
                            result = (bool_t) true;
} else {
                           
                            bool_t ivar_102;
                            uint32_t ivar_105;
                            ivar_105 = (uint32_t)1852139296;
                            ivar_102 = (ivar_1 == ivar_105);
                            if (ivar_102){                     
                             result = (bool_t) true;
} else {
                            
                             bool_t ivar_107;
                             uint32_t ivar_110;
                             ivar_110 = (uint32_t)1919905380;
                             ivar_107 = (ivar_1 == ivar_110);
                             if (ivar_107){                      
                              result = (bool_t) true;
} else {
                             
                              bool_t ivar_112;
                              uint32_t ivar_115;
                              ivar_115 = (uint32_t)1718382450;
                              ivar_112 = (ivar_1 == ivar_115);
                              if (ivar_112){                       
                               result = (bool_t) true;
} else {
                              
                               bool_t ivar_117;
                               uint32_t ivar_120;
                               ivar_120 = (uint32_t)1667590508;
                               ivar_117 = (ivar_1 == ivar_120);
                               if (ivar_117){                        
                                result = (bool_t) true;
} else {
                               
                                bool_t ivar_122;
                                uint32_t ivar_125;
                                ivar_125 = (uint32_t)1953656419;
                                ivar_122 = (ivar_1 == ivar_125);
                                if (ivar_122){                         
                                 result = (bool_t) true;
} else {
                                
                                 bool_t ivar_127;
                                 uint32_t ivar_130;
                                 ivar_130 = (uint32_t)1936287598;
                                 ivar_127 = (ivar_1 == ivar_130);
                                 if (ivar_127){                          
                                  result = (bool_t) true;
} else {
                                 
                                  bool_t ivar_132;
                                  uint32_t ivar_135;
                                  ivar_135 = (uint32_t)1702391840;
                                  ivar_132 = (ivar_1 == ivar_135);
                                  if (ivar_132){                           
                                   result = (bool_t) true;
} else {
                                  
                                   bool_t ivar_137;
                                   uint32_t ivar_140;
                                   ivar_140 = (uint32_t)1819240224;
                                   ivar_137 = (ivar_1 == ivar_140);
                                   if (ivar_137){                            
                                    result = (bool_t) true;
} else {
                                   
                                    bool_t ivar_142;
                                    uint32_t ivar_145;
                                    ivar_145 = (uint32_t)1819156512;
                                    ivar_142 = (ivar_1 == ivar_145);
                                    if (ivar_142){                             
                                     result = (bool_t) true;
} else {
                                    
                                     bool_t ivar_147;
                                     uint32_t ivar_150;
                                     ivar_150 = (uint32_t)1936289312;
                                     ivar_147 = (ivar_1 == ivar_150);
                                     if (ivar_147){                              
                                      result = (bool_t) true;
} else {
                                     
                                      bool_t ivar_152;
                                      uint32_t ivar_155;
                                      ivar_155 = (uint32_t)1668248352;
                                      ivar_152 = (ivar_1 == ivar_155);
                                      if (ivar_152){                               
                                       result = (bool_t) true;
} else {
                                      
                                       bool_t ivar_157;
                                       uint32_t ivar_160;
                                       ivar_160 = (uint32_t)1952542240;
                                       ivar_157 = (ivar_1 == ivar_160);
                                       if (ivar_157){                                
                                        result = (bool_t) true;
} else {
                                       
                                        bool_t ivar_162;
                                        uint32_t ivar_165;
                                        ivar_165 = (uint32_t)1634953582;
                                        ivar_162 = (ivar_1 == ivar_165);
                                        if (ivar_162){                                 
                                         result = (bool_t) true;
} else {
                                        
                                         bool_t ivar_167;
                                         uint32_t ivar_170;
                                         ivar_170 = (uint32_t)1633906547;
                                         ivar_167 = (ivar_1 == ivar_170);
                                         if (ivar_167){                                  
                                          result = (bool_t) true;
} else {
                                         
                                          bool_t ivar_172;
                                          uint32_t ivar_175;
                                          ivar_175 = (uint32_t)1635017070;
                                          ivar_172 = (ivar_1 == ivar_175);
                                          if (ivar_172){                                   
                                           result = (bool_t) true;
} else {
                                          
                                           bool_t ivar_177;
                                           uint32_t ivar_180;
                                           ivar_180 = (uint32_t)1635020338;
                                           ivar_177 = (ivar_1 == ivar_180);
                                           if (ivar_177){                                    
                                            result = (bool_t) true;
} else {
                                           
                                            bool_t ivar_182;
                                            uint32_t ivar_185;
                                            ivar_185 = (uint32_t)1668575088;
                                            ivar_182 = (ivar_1 == ivar_185);
                                            if (ivar_182){                                     
                                             result = (bool_t) true;
} else {
                                            
                                             bool_t ivar_187;
                                             uint32_t ivar_190;
                                             ivar_190 = (uint32_t)1886678883;
                                             ivar_187 = (ivar_1 == ivar_190);
                                             if (ivar_187){                                      
                                              result = (bool_t) true;
} else {
                                             
                                              bool_t ivar_192;
                                              uint32_t ivar_195;
                                              ivar_195 = (uint32_t)1919841645;
                                              ivar_192 = (ivar_1 == ivar_195);
                                              if (ivar_192){                                       
                                               result = (bool_t) true;
} else {
                                              
                                               bool_t ivar_197;
                                               uint32_t ivar_200;
                                               ivar_200 = (uint32_t)1819549728;
                                               ivar_197 = (ivar_1 == ivar_200);
                                               if (ivar_197){                                        
                                                result = (bool_t) true;
} else {
                                               
                                                bool_t ivar_202;
                                                uint32_t ivar_205;
                                                ivar_205 = (uint32_t)1818566688;
                                                ivar_202 = (ivar_1 == ivar_205);
                                                if (ivar_202){                                         
                                                 result = (bool_t) true;
} else {
                                                
                                                 bool_t ivar_207;
                                                 uint32_t ivar_210;
                                                 ivar_210 = (uint32_t)1701912608;
                                                 ivar_207 = (ivar_1 == ivar_210);
                                                 if (ivar_207){                                          
                                                  result = (bool_t) true;
} else {
                                                 
                                                  bool_t ivar_212;
                                                  uint32_t ivar_215;
                                                  ivar_215 = (uint32_t)1852137842;
                                                  ivar_212 = (ivar_1 == ivar_215);
                                                  if (ivar_212){                                           
                                                   result = (bool_t) true;
} else {
                                                  
                                                   bool_t ivar_217;
                                                   uint32_t ivar_220;
                                                   ivar_220 = (uint32_t)1734680608;
                                                   ivar_217 = (ivar_1 == ivar_220);
                                                   if (ivar_217){                                            
                                                    result = (bool_t) true;
} else {
                                                   
                                                    bool_t ivar_222;
                                                    uint32_t ivar_225;
                                                    ivar_225 = (uint32_t)1735663648;
                                                    ivar_222 = (ivar_1 == ivar_225);
                                                    if (ivar_222){                                             
                                                     result = (bool_t) true;
} else {
                                                    
                                                     bool_t ivar_227;
                                                     uint32_t ivar_230;
                                                     ivar_230 = (uint32_t)1986881902;
                                                     ivar_227 = (ivar_1 == ivar_230);
                                                     if (ivar_227){                                              
                                                      result = (bool_t) true;
} else {
                                                     
                                                      bool_t ivar_232;
                                                      uint32_t ivar_235;
                                                      ivar_235 = (uint32_t)1986879864;
                                                      ivar_232 = (ivar_1 == ivar_235);
                                                      if (ivar_232){                                               
                                                       result = (bool_t) true;
} else {
                                                      
                                                       bool_t ivar_237;
                                                       uint32_t ivar_240;
                                                       ivar_240 = (uint32_t)1986096740;
                                                       ivar_237 = (ivar_1 == ivar_240);
                                                       if (ivar_237){                                                
                                                        result = (bool_t) true;
} else {
                                                       
                                                        bool_t ivar_242;
                                                        uint32_t ivar_245;
                                                        ivar_245 = (uint32_t)1987015200;
                                                        ivar_242 = (ivar_1 == ivar_245);
                                                        if (ivar_242){                                                 
                                                         result = (bool_t) true;
} else {
                                                        
                                                         bool_t ivar_247;
                                                         uint32_t ivar_250;
                                                         ivar_250 = (uint32_t)1951162722;
                                                         ivar_247 = (ivar_1 == ivar_250);
                                                         if (ivar_247){                                                  
                                                          result = (bool_t) true;
} else {
                                                         
                                                          uint32_t ivar_253;
                                                          ivar_253 = (uint32_t)1951947098;
                                                          result = (ivar_1 == ivar_253);
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

extern uint32_t iccMax2c__FuncVecIn(uint32_t ivar_1, uint16_t ivar_2){
        uint32_t  result;
        bool_t ivar_3;
        bool_t ivar_4;
        uint32_t ivar_7;
        ivar_7 = (uint32_t)1885937696;
        ivar_4 = (ivar_1 == ivar_7);
        if (ivar_4){ 
             ivar_3 = (bool_t) true;
} else {
        
             bool_t ivar_9;
             uint32_t ivar_12;
             ivar_12 = (uint32_t)726224454;
             ivar_9 = (ivar_1 == ivar_12);
             if (ivar_9){  
           ivar_3 = (bool_t) true;
} else {
             
           uint32_t ivar_15;
           ivar_15 = (uint32_t)759778886;
           ivar_3 = (ivar_1 == ivar_15);
};
};
        if (ivar_3){ 
             result = (uint32_t)0;
} else {
        
             bool_t ivar_19;
             bool_t ivar_20;
             uint32_t ivar_23;
             ivar_23 = (uint32_t)1734438241;
             ivar_20 = (ivar_1 == ivar_23);
             if (ivar_20){  
           ivar_19 = (bool_t) true;
} else {
             
           bool_t ivar_25;
           uint32_t ivar_28;
           ivar_28 = (uint32_t)1935762532;
           ivar_25 = (ivar_1 == ivar_28);
           if (ivar_25){   
           ivar_19 = (bool_t) true;
} else {
           
           bool_t ivar_30;
           uint32_t ivar_33;
           ivar_33 = (uint32_t)1936946530;
           ivar_30 = (ivar_1 == ivar_33);
           if (ivar_30){    
            ivar_19 = (bool_t) true;
} else {
           
            bool_t ivar_35;
            uint32_t ivar_38;
            ivar_38 = (uint32_t)1936553324;
            ivar_35 = (ivar_1 == ivar_38);
            if (ivar_35){     
             ivar_19 = (bool_t) true;
} else {
            
             uint32_t ivar_41;
             ivar_41 = (uint32_t)1935960438;
             ivar_19 = (ivar_1 == ivar_41);
};
};
};
};
             if (ivar_19){  
           uint8_t ivar_48;
           ivar_48 = (uint8_t)2;
           result = (uint32_t)(ivar_2 + ivar_48);
} else {
             
           bool_t ivar_50;
           bool_t ivar_51;
           uint32_t ivar_54;
           ivar_54 = (uint32_t)1951162722;
           ivar_51 = (ivar_1 == ivar_54);
           if (ivar_51){   
           ivar_50 = (bool_t) true;
} else {
           
           uint32_t ivar_57;
           ivar_57 = (uint32_t)1951947098;
           ivar_50 = (ivar_1 == ivar_57);
};
           if (ivar_50){   
           uint8_t ivar_60;
           ivar_60 = (uint8_t)3;
           uint32_t ivar_61;
           uint8_t ivar_63;
           ivar_63 = (uint8_t)1;
           ivar_61 = (uint32_t)(ivar_2 + ivar_63);
           result = (uint32_t)((uint64_t)ivar_60 * (uint64_t)ivar_61);
} else {
           
           bool_t ivar_66;
           bool_t ivar_67;
           uint32_t ivar_70;
           ivar_70 = (uint32_t)1936793632;
           ivar_67 = (ivar_1 == ivar_70);
           if (ivar_67){    
            ivar_66 = (bool_t) true;
} else {
           
            bool_t ivar_72;
            uint32_t ivar_75;
            ivar_75 = (uint32_t)1936814708;
            ivar_72 = (ivar_1 == ivar_75);
            if (ivar_72){     
             ivar_66 = (bool_t) true;
} else {
            
             bool_t ivar_77;
             uint32_t ivar_80;
             ivar_80 = (uint32_t)1667375136;
             ivar_77 = (ivar_1 == ivar_80);
             if (ivar_77){      
              ivar_66 = (bool_t) true;
} else {
             
              bool_t ivar_82;
              uint32_t ivar_85;
              ivar_85 = (uint32_t)1667396212;
              ivar_82 = (ivar_1 == ivar_85);
              if (ivar_82){       
               ivar_66 = (bool_t) true;
} else {
              
               bool_t ivar_87;
               uint32_t ivar_90;
               ivar_90 = (uint32_t)1633841952;
               ivar_87 = (ivar_1 == ivar_90);
               if (ivar_87){        
                ivar_66 = (bool_t) true;
} else {
               
                bool_t ivar_92;
                uint32_t ivar_95;
                ivar_95 = (uint32_t)1852139296;
                ivar_92 = (ivar_1 == ivar_95);
                if (ivar_92){         
                 ivar_66 = (bool_t) true;
} else {
                
                 bool_t ivar_97;
                 uint32_t ivar_100;
                 ivar_100 = (uint32_t)1919905380;
                 ivar_97 = (ivar_1 == ivar_100);
                 if (ivar_97){          
                  ivar_66 = (bool_t) true;
} else {
                 
                  bool_t ivar_102;
                  uint32_t ivar_105;
                  ivar_105 = (uint32_t)1718382450;
                  ivar_102 = (ivar_1 == ivar_105);
                  if (ivar_102){           
                   ivar_66 = (bool_t) true;
} else {
                  
                   bool_t ivar_107;
                   uint32_t ivar_110;
                   ivar_110 = (uint32_t)1667590508;
                   ivar_107 = (ivar_1 == ivar_110);
                   if (ivar_107){            
                    ivar_66 = (bool_t) true;
} else {
                   
                    bool_t ivar_112;
                    uint32_t ivar_115;
                    ivar_115 = (uint32_t)1953656419;
                    ivar_112 = (ivar_1 == ivar_115);
                    if (ivar_112){             
                     ivar_66 = (bool_t) true;
} else {
                    
                     bool_t ivar_117;
                     uint32_t ivar_120;
                     ivar_120 = (uint32_t)1936287598;
                     ivar_117 = (ivar_1 == ivar_120);
                     if (ivar_117){              
                      ivar_66 = (bool_t) true;
} else {
                     
                      bool_t ivar_122;
                      uint32_t ivar_125;
                      ivar_125 = (uint32_t)1702391840;
                      ivar_122 = (ivar_1 == ivar_125);
                      if (ivar_122){               
                       ivar_66 = (bool_t) true;
} else {
                      
                       bool_t ivar_127;
                       uint32_t ivar_130;
                       ivar_130 = (uint32_t)1819240224;
                       ivar_127 = (ivar_1 == ivar_130);
                       if (ivar_127){                
                        ivar_66 = (bool_t) true;
} else {
                       
                        bool_t ivar_132;
                        uint32_t ivar_135;
                        ivar_135 = (uint32_t)1819156512;
                        ivar_132 = (ivar_1 == ivar_135);
                        if (ivar_132){                 
                         ivar_66 = (bool_t) true;
} else {
                        
                         bool_t ivar_137;
                         uint32_t ivar_140;
                         ivar_140 = (uint32_t)1936289312;
                         ivar_137 = (ivar_1 == ivar_140);
                         if (ivar_137){                  
                          ivar_66 = (bool_t) true;
} else {
                         
                          bool_t ivar_142;
                          uint32_t ivar_145;
                          ivar_145 = (uint32_t)1668248352;
                          ivar_142 = (ivar_1 == ivar_145);
                          if (ivar_142){                   
                           ivar_66 = (bool_t) true;
} else {
                          
                           bool_t ivar_147;
                           uint32_t ivar_150;
                           ivar_150 = (uint32_t)1952542240;
                           ivar_147 = (ivar_1 == ivar_150);
                           if (ivar_147){                    
                            ivar_66 = (bool_t) true;
} else {
                           
                            bool_t ivar_152;
                            uint32_t ivar_155;
                            ivar_155 = (uint32_t)1634953582;
                            ivar_152 = (ivar_1 == ivar_155);
                            if (ivar_152){                     
                             ivar_66 = (bool_t) true;
} else {
                            
                             bool_t ivar_157;
                             uint32_t ivar_160;
                             ivar_160 = (uint32_t)1633906547;
                             ivar_157 = (ivar_1 == ivar_160);
                             if (ivar_157){                      
                              ivar_66 = (bool_t) true;
} else {
                             
                              bool_t ivar_162;
                              uint32_t ivar_165;
                              ivar_165 = (uint32_t)1635017070;
                              ivar_162 = (ivar_1 == ivar_165);
                              if (ivar_162){                       
                               ivar_66 = (bool_t) true;
} else {
                              
                               uint32_t ivar_168;
                               ivar_168 = (uint32_t)1919841645;
                               ivar_66 = (ivar_1 == ivar_168);
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
           if (ivar_66){    
            uint8_t ivar_191;
            ivar_191 = (uint8_t)1;
            result = (uint32_t)(ivar_2 + ivar_191);
} else {
           
            uint8_t ivar_193;
            ivar_193 = (uint8_t)2;
            uint32_t ivar_194;
            uint8_t ivar_196;
            ivar_196 = (uint8_t)1;
            ivar_194 = (uint32_t)(ivar_2 + ivar_196);
            result = (uint32_t)((uint64_t)ivar_193 * (uint64_t)ivar_194);
};
};
};
};

        
        return result;
}

extern uint32_t iccMax2c__FuncVecOut(uint32_t ivar_1, uint16_t ivar_2){
        uint32_t  result;
        bool_t ivar_3;
        bool_t ivar_4;
        uint32_t ivar_7;
        ivar_7 = (uint32_t)1885937696;
        ivar_4 = (ivar_1 == ivar_7);
        if (ivar_4){ 
             ivar_3 = (bool_t) true;
} else {
        
             bool_t ivar_9;
             uint32_t ivar_12;
             ivar_12 = (uint32_t)726224454;
             ivar_9 = (ivar_1 == ivar_12);
             if (ivar_9){  
           ivar_3 = (bool_t) true;
} else {
             
           uint32_t ivar_15;
           ivar_15 = (uint32_t)759778886;
           ivar_3 = (ivar_1 == ivar_15);
};
};
        if (ivar_3){ 
             result = (uint32_t)1;
} else {
        
             bool_t ivar_19;
             bool_t ivar_20;
             uint32_t ivar_23;
             ivar_23 = (uint32_t)1734438241;
             ivar_20 = (ivar_1 == ivar_23);
             if (ivar_20){  
           ivar_19 = (bool_t) true;
} else {
             
           bool_t ivar_25;
           uint32_t ivar_28;
           ivar_28 = (uint32_t)1935762532;
           ivar_25 = (ivar_1 == ivar_28);
           if (ivar_25){   
           ivar_19 = (bool_t) true;
} else {
           
           bool_t ivar_30;
           uint32_t ivar_33;
           ivar_33 = (uint32_t)1936946530;
           ivar_30 = (ivar_1 == ivar_33);
           if (ivar_30){    
            ivar_19 = (bool_t) true;
} else {
           
            bool_t ivar_35;
            uint32_t ivar_38;
            ivar_38 = (uint32_t)1936553324;
            ivar_35 = (ivar_1 == ivar_38);
            if (ivar_35){     
             ivar_19 = (bool_t) true;
} else {
            
             uint32_t ivar_41;
             ivar_41 = (uint32_t)1935960438;
             ivar_19 = (ivar_1 == ivar_41);
};
};
};
};
             if (ivar_19){  
           uint8_t ivar_48;
           ivar_48 = (uint8_t)1;
           result = (uint32_t)(ivar_2 + ivar_48);
} else {
             
           bool_t ivar_50;
           bool_t ivar_51;
           uint32_t ivar_54;
           ivar_54 = (uint32_t)1951162722;
           ivar_51 = (ivar_1 == ivar_54);
           if (ivar_51){   
           ivar_50 = (bool_t) true;
} else {
           
           uint32_t ivar_57;
           ivar_57 = (uint32_t)1951947098;
           ivar_50 = (ivar_1 == ivar_57);
};
           if (ivar_50){   
           uint8_t ivar_60;
           ivar_60 = (uint8_t)3;
           uint32_t ivar_61;
           uint8_t ivar_63;
           ivar_63 = (uint8_t)1;
           ivar_61 = (uint32_t)(ivar_2 + ivar_63);
           result = (uint32_t)((uint64_t)ivar_60 * (uint64_t)ivar_61);
} else {
           
           bool_t ivar_66;
           bool_t ivar_67;
           uint32_t ivar_70;
           ivar_70 = (uint32_t)1936793632;
           ivar_67 = (ivar_1 == ivar_70);
           if (ivar_67){    
            ivar_66 = (bool_t) true;
} else {
           
            bool_t ivar_72;
            uint32_t ivar_75;
            ivar_75 = (uint32_t)1936814708;
            ivar_72 = (ivar_1 == ivar_75);
            if (ivar_72){     
             ivar_66 = (bool_t) true;
} else {
            
             bool_t ivar_77;
             uint32_t ivar_80;
             ivar_80 = (uint32_t)1667375136;
             ivar_77 = (ivar_1 == ivar_80);
             if (ivar_77){      
              ivar_66 = (bool_t) true;
} else {
             
              bool_t ivar_82;
              uint32_t ivar_85;
              ivar_85 = (uint32_t)1667396212;
              ivar_82 = (ivar_1 == ivar_85);
              if (ivar_82){       
               ivar_66 = (bool_t) true;
} else {
              
               bool_t ivar_87;
               uint32_t ivar_90;
               ivar_90 = (uint32_t)1633841952;
               ivar_87 = (ivar_1 == ivar_90);
               if (ivar_87){        
                ivar_66 = (bool_t) true;
} else {
               
                bool_t ivar_92;
                uint32_t ivar_95;
                ivar_95 = (uint32_t)1852139296;
                ivar_92 = (ivar_1 == ivar_95);
                if (ivar_92){         
                 ivar_66 = (bool_t) true;
} else {
                
                 bool_t ivar_97;
                 uint32_t ivar_100;
                 ivar_100 = (uint32_t)1919905380;
                 ivar_97 = (ivar_1 == ivar_100);
                 if (ivar_97){          
                  ivar_66 = (bool_t) true;
} else {
                 
                  bool_t ivar_102;
                  uint32_t ivar_105;
                  ivar_105 = (uint32_t)1718382450;
                  ivar_102 = (ivar_1 == ivar_105);
                  if (ivar_102){           
                   ivar_66 = (bool_t) true;
} else {
                  
                   bool_t ivar_107;
                   uint32_t ivar_110;
                   ivar_110 = (uint32_t)1667590508;
                   ivar_107 = (ivar_1 == ivar_110);
                   if (ivar_107){            
                    ivar_66 = (bool_t) true;
} else {
                   
                    bool_t ivar_112;
                    uint32_t ivar_115;
                    ivar_115 = (uint32_t)1953656419;
                    ivar_112 = (ivar_1 == ivar_115);
                    if (ivar_112){             
                     ivar_66 = (bool_t) true;
} else {
                    
                     bool_t ivar_117;
                     uint32_t ivar_120;
                     ivar_120 = (uint32_t)1936287598;
                     ivar_117 = (ivar_1 == ivar_120);
                     if (ivar_117){              
                      ivar_66 = (bool_t) true;
} else {
                     
                      bool_t ivar_122;
                      uint32_t ivar_125;
                      ivar_125 = (uint32_t)1702391840;
                      ivar_122 = (ivar_1 == ivar_125);
                      if (ivar_122){               
                       ivar_66 = (bool_t) true;
} else {
                      
                       bool_t ivar_127;
                       uint32_t ivar_130;
                       ivar_130 = (uint32_t)1819240224;
                       ivar_127 = (ivar_1 == ivar_130);
                       if (ivar_127){                
                        ivar_66 = (bool_t) true;
} else {
                       
                        bool_t ivar_132;
                        uint32_t ivar_135;
                        ivar_135 = (uint32_t)1819156512;
                        ivar_132 = (ivar_1 == ivar_135);
                        if (ivar_132){                 
                         ivar_66 = (bool_t) true;
} else {
                        
                         bool_t ivar_137;
                         uint32_t ivar_140;
                         ivar_140 = (uint32_t)1936289312;
                         ivar_137 = (ivar_1 == ivar_140);
                         if (ivar_137){                  
                          ivar_66 = (bool_t) true;
} else {
                         
                          bool_t ivar_142;
                          uint32_t ivar_145;
                          ivar_145 = (uint32_t)1668248352;
                          ivar_142 = (ivar_1 == ivar_145);
                          if (ivar_142){                   
                           ivar_66 = (bool_t) true;
} else {
                          
                           bool_t ivar_147;
                           uint32_t ivar_150;
                           ivar_150 = (uint32_t)1952542240;
                           ivar_147 = (ivar_1 == ivar_150);
                           if (ivar_147){                    
                            ivar_66 = (bool_t) true;
} else {
                           
                            bool_t ivar_152;
                            uint32_t ivar_155;
                            ivar_155 = (uint32_t)1634953582;
                            ivar_152 = (ivar_1 == ivar_155);
                            if (ivar_152){                     
                             ivar_66 = (bool_t) true;
} else {
                            
                             bool_t ivar_157;
                             uint32_t ivar_160;
                             ivar_160 = (uint32_t)1633906547;
                             ivar_157 = (ivar_1 == ivar_160);
                             if (ivar_157){                      
                              ivar_66 = (bool_t) true;
} else {
                             
                              bool_t ivar_162;
                              uint32_t ivar_165;
                              ivar_165 = (uint32_t)1635017070;
                              ivar_162 = (ivar_1 == ivar_165);
                              if (ivar_162){                       
                               ivar_66 = (bool_t) true;
} else {
                              
                               uint32_t ivar_168;
                               ivar_168 = (uint32_t)1919841645;
                               ivar_66 = (ivar_1 == ivar_168);
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
           if (ivar_66){    
            uint8_t ivar_191;
            ivar_191 = (uint8_t)1;
            result = (uint32_t)(ivar_2 + ivar_191);
} else {
           
            bool_t ivar_193;
            bool_t ivar_194;
            uint32_t ivar_197;
            ivar_197 = (uint32_t)1668575088;
            ivar_194 = (ivar_1 == ivar_197);
            if (ivar_194){     
             ivar_193 = (bool_t) true;
} else {
            
             uint32_t ivar_200;
             ivar_200 = (uint32_t)1886678883;
             ivar_193 = (ivar_1 == ivar_200);
};
            if (ivar_193){     
             uint8_t ivar_203;
             ivar_203 = (uint8_t)2;
             uint32_t ivar_204;
             uint8_t ivar_206;
             ivar_206 = (uint8_t)1;
             ivar_204 = (uint32_t)(ivar_2 + ivar_206);
             result = (uint32_t)((uint64_t)ivar_203 * (uint64_t)ivar_204);
} else {
            
             uint8_t ivar_210;
             ivar_210 = (uint8_t)1;
             result = (uint32_t)(ivar_2 + ivar_210);
};
};
};
};
};

        
        return result;
}

extern uint32_t iccMax2c__envTag(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint32_t)1701738016;

        defined = true;};
        
        return result;
}

extern uint32_t iccMax2c__ifTag(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint32_t)1768300576;

        defined = true;};
        
        return result;
}

extern uint32_t iccMax2c__elseTag(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint32_t)1701606245;

        defined = true;};
        
        return result;
}

extern uint32_t iccMax2c__selTag(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint32_t)1936026656;

        defined = true;};
        
        return result;
}

extern uint32_t iccMax2c__dfltTag(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint32_t)1684434036;

        defined = true;};
        
        return result;
}

extern uint32_t iccMax2c__caseTag(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint32_t)1667330917;

        defined = true;};
        
        return result;
}

extern uint16_t iccMax2c__readU16(bytestrings__bytestring_t ivar_1, uint32_t ivar_2){
        uint16_t  result;
        result = (uint16_t)hex__bytes2uint16((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_2);

        
        return result;
}

extern uint32_t iccMax2c__readU32(bytestrings__bytestring_t ivar_1, uint32_t ivar_2){
        uint32_t  result;
        result = (uint32_t)hex__bytes2uint32((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_2);

        
        return result;
}

extern uint64_t iccMax2c__readU64(bytestrings__bytestring_t ivar_1, uint32_t ivar_2){
        uint64_t  result;
        result = (uint64_t)hex__bytes2uint64((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_2);

        
        return result;
}

extern bool_t r_iccMax2c__undefinedp(iccMax2c__signature_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->iccMax2c__signature_adt_index;
        release_iccMax2c__signature_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_iccMax2c__inoutp(iccMax2c__signature_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->iccMax2c__signature_adt_index;
        release_iccMax2c__signature_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern iccMax2c__inout_t update_iccMax2c__signature_adt_input(iccMax2c__signature_adt_t ivar_1, uint64_t ivar_3){
        iccMax2c__inout_t  result;
        iccMax2c__inout_t ivar_2;
        //copying to iccMax2c__inout from iccMax2c__signature_adt;
        ivar_2 = (iccMax2c__inout_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_iccMax2c__signature_adt(ivar_1);
        result = (iccMax2c__inout_t)update_iccMax2c__inout_input(ivar_2, ivar_3);

        
        return result;
}

extern uint64_t iccMax2c__signature_adt_input(iccMax2c__signature_adt_t ivar_1){
        uint64_t  result;
        iccMax2c__inout_t ivar_2;
        //copying to iccMax2c__inout from iccMax2c__signature_adt;
        ivar_2 = (iccMax2c__inout_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_iccMax2c__signature_adt(ivar_1);
        result = (uint64_t)ivar_2->input;
        release_iccMax2c__inout(ivar_2);

        
        return result;
}

extern iccMax2c__inout_t update_iccMax2c__signature_adt_output(iccMax2c__signature_adt_t ivar_1, uint64_t ivar_3){
        iccMax2c__inout_t  result;
        iccMax2c__inout_t ivar_2;
        //copying to iccMax2c__inout from iccMax2c__signature_adt;
        ivar_2 = (iccMax2c__inout_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_iccMax2c__signature_adt(ivar_1);
        result = (iccMax2c__inout_t)update_iccMax2c__inout_output(ivar_2, ivar_3);

        
        return result;
}

extern uint64_t iccMax2c__signature_adt_output(iccMax2c__signature_adt_t ivar_1){
        uint64_t  result;
        iccMax2c__inout_t ivar_2;
        //copying to iccMax2c__inout from iccMax2c__signature_adt;
        ivar_2 = (iccMax2c__inout_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_iccMax2c__signature_adt(ivar_1);
        result = (uint64_t)ivar_2->output;
        release_iccMax2c__inout(ivar_2);

        
        return result;
}

extern iccMax2c__inout_t update_iccMax2c__signature_adt_win(iccMax2c__signature_adt_t ivar_1, iccMax2c__window_t ivar_3){
        iccMax2c__inout_t  result;
        iccMax2c__inout_t ivar_2;
        //copying to iccMax2c__inout from iccMax2c__signature_adt;
        ivar_2 = (iccMax2c__inout_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_iccMax2c__signature_adt(ivar_1);
        result = (iccMax2c__inout_t)update_iccMax2c__inout_win(ivar_2, ivar_3);

        
        return result;
}

extern iccMax2c__window_t iccMax2c__signature_adt_win(iccMax2c__signature_adt_t ivar_1){
        iccMax2c__window_t  result;
        iccMax2c__inout_t ivar_2;
        //copying to iccMax2c__inout from iccMax2c__signature_adt;
        ivar_2 = (iccMax2c__inout_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_iccMax2c__signature_adt(ivar_1);
        result = (iccMax2c__window_t)ivar_2->win;
        result->count++;
        release_iccMax2c__inout(ivar_2);

        
        return result;
}

extern iccMax2c__signature_adt_t iccMax2c__undefined(void){
        iccMax2c__signature_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        iccMax2c__signature_adt_t ivar_2;
        ivar_2 = (iccMax2c__signature_adt_t)new_iccMax2c__signature_adt();;
        ivar_2->iccMax2c__signature_adt_index = (uint8_t)ivar_1;
        //copying to iccMax2c__signature_adt from iccMax2c__signature_adt;
        result = (iccMax2c__signature_adt_t)ivar_2;
        if (result != NULL) result->count++;
        release_iccMax2c__signature_adt(ivar_2);

        defined = true;};
        
        return result;
}

extern iccMax2c__signature_adt_t iccMax2c__inout(uint64_t ivar_2, uint64_t ivar_3, iccMax2c__window_t ivar_4){
        iccMax2c__signature_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        iccMax2c__inout_t ivar_5;
        ivar_5 = (iccMax2c__inout_t)new_iccMax2c__inout();;
        ivar_5->iccMax2c__signature_adt_index = (uint8_t)ivar_1;
        ivar_5->input = (uint64_t)ivar_2;
        ivar_5->output = (uint64_t)ivar_3;
        ivar_5->win = (iccMax2c__window_t)ivar_4;
        //copying to iccMax2c__signature_adt from iccMax2c__inout;
        result = (iccMax2c__signature_adt_t)ivar_5;
        if (result != NULL) result->count++;
        release_iccMax2c__inout(ivar_5);

        
        return result;
}

extern iccMax2c_funtype_25_t iccMax2c__signature_ord(void){
        iccMax2c_funtype_25_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

extern uint8_t iccMax2c__ord__2(iccMax2c__signature_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)r_iccMax2c__undefinedp((iccMax2c__signature_adt_t)ivar_1);
        if (ivar_3){ 
             release_iccMax2c__signature_adt(ivar_1);
             result = (uint8_t)0;
} else {
        
             result = (uint8_t)1;
};

        
        return result;
}

extern bool_t iccMax2c__subterm__2(iccMax2c__signature_adt_t ivar_1, iccMax2c__signature_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) equal_iccMax2c__signature_adt(ivar_1, ivar_2);

        
        return result;
}

extern bool_t iccMax2c__doublelessp__2(iccMax2c__signature_adt_t ivar_1, iccMax2c__signature_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) false;

        
        return result;
}

extern iccMax2c_funtype_26_t iccMax2c__reduce_nat__2(mpz_ptr_t ivar_1, iccMax2c_funtype_28_t ivar_2){
        iccMax2c_funtype_26_t  result;
        iccMax2c_closure_29_t cl268551;
        cl268551 = new_iccMax2c_closure_29();
        cl268551->fvar_1 = (iccMax2c_funtype_28_t)ivar_2;
        if (cl268551->fvar_1 != NULL) cl268551->fvar_1->count++;
        mpz_set(cl268551->fvar_2, ivar_1);
        release_iccMax2c_funtype_28(ivar_2);
        result = (iccMax2c_funtype_26_t)cl268551;

        
        return result;
}

extern iccMax2c_funtype_26_t iccMax2c__REDUCE_nat__2(iccMax2c_funtype_26_t ivar_1, iccMax2c_funtype_31_t ivar_3){
        iccMax2c_funtype_26_t  result;
        iccMax2c_closure_32_t cl268553;
        cl268553 = new_iccMax2c_closure_32();
        cl268553->fvar_1 = (iccMax2c_funtype_26_t)ivar_1;
        if (cl268553->fvar_1 != NULL) cl268553->fvar_1->count++;
        cl268553->fvar_2 = (iccMax2c_funtype_31_t)ivar_3;
        if (cl268553->fvar_2 != NULL) cl268553->fvar_2->count++;
        release_iccMax2c_funtype_31(ivar_3);
        release_iccMax2c_funtype_26(ivar_1);
        result = (iccMax2c_funtype_26_t)cl268553;

        
        return result;
}

extern iccMax2c_funtype_33_t iccMax2c__reduce_ordinal__2(ordstruct_adt__ordstruct_adt_t ivar_1, iccMax2c_funtype_34_t ivar_2){
        iccMax2c_funtype_33_t  result;
        iccMax2c_closure_35_t cl268555;
        cl268555 = new_iccMax2c_closure_35();
        cl268555->fvar_1 = (iccMax2c_funtype_34_t)ivar_2;
        if (cl268555->fvar_1 != NULL) cl268555->fvar_1->count++;
        cl268555->fvar_2 = (ordstruct_adt__ordstruct_adt_t)ivar_1;
        if (cl268555->fvar_2 != NULL) cl268555->fvar_2->count++;
        release_iccMax2c_funtype_34(ivar_2);
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (iccMax2c_funtype_33_t)cl268555;

        
        return result;
}

extern iccMax2c_funtype_33_t iccMax2c__REDUCE_ordinal__2(iccMax2c_funtype_33_t ivar_1, iccMax2c_funtype_36_t ivar_3){
        iccMax2c_funtype_33_t  result;
        iccMax2c_closure_37_t cl268557;
        cl268557 = new_iccMax2c_closure_37();
        cl268557->fvar_1 = (iccMax2c_funtype_33_t)ivar_1;
        if (cl268557->fvar_1 != NULL) cl268557->fvar_1->count++;
        cl268557->fvar_2 = (iccMax2c_funtype_36_t)ivar_3;
        if (cl268557->fvar_2 != NULL) cl268557->fvar_2->count++;
        release_iccMax2c_funtype_36(ivar_3);
        release_iccMax2c_funtype_33(ivar_1);
        result = (iccMax2c_funtype_33_t)cl268557;

        
        return result;
}

extern iccMax2c__result_adt_t iccMax2c__parseOperation(uint64_t ivar_1, bytestrings__bytestring_t ivar_2, iccMax2c__signatureMap_t ivar_3, uint64_t ivar_4, uint64_t ivar_5, iccMax2c__window_t ivar_6){
        iccMax2c__result_adt_t  result;
        /* endpos */ uint32_t ivar_7;
        iccMax2c_record_40_t ivar_18;
        uint32_t len268579 = 9;
        uint32_t characters268580[9] = {101, 110, 100, 112, 111, 115, 32, 61, 32};
        stringliteral_t string268578 = mk_string(9, characters268580);
        ivar_18 = (iccMax2c_record_40_t)strings__make_string(len268579, string268578);
        strings__string_t ivar_15;
        //copying to strings__string from iccMax2c_record_40;
        ivar_15 = (strings__string_t)ivar_18;
        if (ivar_15 != NULL) ivar_15->count++;
        release_iccMax2c_record_40(ivar_18);
        uint32_t ivar_16;
        ivar_16 = (uint32_t)ivar_6->endpos;
        ivar_7 = (uint32_t)iccMax2c__print32((strings__string_t)ivar_15, (uint32_t)ivar_16);
        /* startpos */ uint32_t ivar_19;
        iccMax2c_record_40_t ivar_31;
        uint32_t len268582 = 11;
        uint32_t characters268583[11] = {115, 116, 97, 114, 116, 112, 111, 115, 32, 61, 32};
        stringliteral_t string268581 = mk_string(11, characters268583);
        ivar_31 = (iccMax2c_record_40_t)strings__make_string(len268582, string268581);
        strings__string_t ivar_28;
        //copying to strings__string from iccMax2c_record_40;
        ivar_28 = (strings__string_t)ivar_31;
        if (ivar_28 != NULL) ivar_28->count++;
        release_iccMax2c_record_40(ivar_31);
        uint32_t ivar_29;
        ivar_29 = (uint32_t)ivar_6->startpos;
        ivar_19 = (uint32_t)iccMax2c__print32((strings__string_t)ivar_28, (uint32_t)ivar_29);
        bool_t ivar_32;
        ivar_32 = (ivar_19 >= ivar_7);
        if (ivar_32){ 
             release_iccMax2c__signatureMap(ivar_3);
             release_bytestrings__bytestring(ivar_2);
             release_iccMax2c__window(ivar_6);
             uint64_t ivar_59;
             iccMax2c_record_40_t ivar_47;
             uint32_t len268585 = 8;
             uint32_t characters268586[8] = {105, 110, 77, 97, 120, 32, 61, 32};
             stringliteral_t string268584 = mk_string(8, characters268586);
             ivar_47 = (iccMax2c_record_40_t)strings__make_string(len268585, string268584);
             strings__string_t ivar_44;
             //copying to strings__string from iccMax2c_record_40;
             ivar_44 = (strings__string_t)ivar_47;
             if (ivar_44 != NULL) ivar_44->count++;
             release_iccMax2c_record_40(ivar_47);
             ivar_59 = (uint64_t)iccMax2c__print64((strings__string_t)ivar_44, (uint64_t)ivar_4);
             uint64_t ivar_60;
             iccMax2c_record_40_t ivar_57;
             uint32_t len268588 = 8;
             uint32_t characters268589[8] = {105, 110, 77, 105, 110, 32, 61, 32};
             stringliteral_t string268587 = mk_string(8, characters268589);
             ivar_57 = (iccMax2c_record_40_t)strings__make_string(len268588, string268587);
             strings__string_t ivar_54;
             //copying to strings__string from iccMax2c_record_40;
             ivar_54 = (strings__string_t)ivar_57;
             if (ivar_54 != NULL) ivar_54->count++;
             release_iccMax2c_record_40(ivar_57);
             ivar_60 = (uint64_t)iccMax2c__print64((strings__string_t)ivar_54, (uint64_t)ivar_5);
             iccMax2c__result_adt_t ivar_58;
             ivar_58 = (iccMax2c__result_adt_t)iccMax2c__value((uint64_t)ivar_59, (uint64_t)ivar_60);
             //copying to iccMax2c__result_adt from iccMax2c__result_adt;
             result = (iccMax2c__result_adt_t)ivar_58;
             if (result != NULL) result->count++;
             release_iccMax2c__result_adt(ivar_58);
} else {
        
             bool_t ivar_61;
             uint32_t ivar_63;
             ivar_63 = (uint32_t)ivar_2->length;
             ivar_61 = (ivar_7 > ivar_63);
             if (ivar_61){  
           release_iccMax2c__signatureMap(ivar_3);
           release_iccMax2c__window(ivar_6);
           uint8_t ivar_71;
           ivar_71 = (uint8_t)iccMax2c__UnexpectedEOF();
           uint32_t ivar_72;
           ivar_72 = (uint32_t)ivar_2->length;
           release_bytestrings__bytestring(ivar_2);
           uint8_t ivar_73;
           ivar_73 = (uint8_t)0;
           iccMax2c__result_adt_t ivar_70;
           ivar_70 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_71, (uint32_t)ivar_72, (uint8_t)ivar_73);
           //copying to iccMax2c__result_adt from iccMax2c__result_adt;
           result = (iccMax2c__result_adt_t)ivar_70;
           if (result != NULL) result->count++;
           release_iccMax2c__result_adt(ivar_70);
} else {
             
           bool_t ivar_74;
           uint64_t ivar_75;
           uint8_t ivar_78;
           ivar_78 = (uint8_t)8;
           ivar_75 = (uint64_t)(ivar_19 + ivar_78);
           ivar_74 = (ivar_75 > ivar_7);
           if (ivar_74){   
           release_iccMax2c__signatureMap(ivar_3);
           release_bytestrings__bytestring(ivar_2);
           release_iccMax2c__window(ivar_6);
           uint8_t ivar_85;
           ivar_85 = (uint8_t)iccMax2c__UnexpectedEOF();
           uint8_t ivar_87;
           ivar_87 = (uint8_t)0;
           iccMax2c__result_adt_t ivar_84;
           ivar_84 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_85, (uint32_t)ivar_19, (uint8_t)ivar_87);
           //copying to iccMax2c__result_adt from iccMax2c__result_adt;
           result = (iccMax2c__result_adt_t)ivar_84;
           if (result != NULL) result->count++;
           release_iccMax2c__result_adt(ivar_84);
} else {
           
           /* tag */ uint32_t ivar_89;
           iccMax2c_record_40_t ivar_104;
           uint32_t len268591 = 6;
           uint32_t characters268592[6] = {116, 97, 103, 32, 61, 32};
           stringliteral_t string268590 = mk_string(6, characters268592);
           ivar_104 = (iccMax2c_record_40_t)strings__make_string(len268591, string268590);
           strings__string_t ivar_101;
           //copying to strings__string from iccMax2c_record_40;
           ivar_101 = (strings__string_t)ivar_104;
           if (ivar_101 != NULL) ivar_101->count++;
           release_iccMax2c_record_40(ivar_104);
           uint32_t ivar_102;
           ivar_2->count++;
           ivar_102 = (uint32_t)iccMax2c__readU32((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_19);
           ivar_89 = (uint32_t)iccMax2c__print32((strings__string_t)ivar_101, (uint32_t)ivar_102);
           /* inMin */ uint64_t ivar_105;
           iccMax2c_record_40_t ivar_115;
           uint32_t len268594 = 8;
           uint32_t characters268595[8] = {105, 110, 77, 105, 110, 32, 61, 32};
           stringliteral_t string268593 = mk_string(8, characters268595);
           ivar_115 = (iccMax2c_record_40_t)strings__make_string(len268594, string268593);
           strings__string_t ivar_112;
           //copying to strings__string from iccMax2c_record_40;
           ivar_112 = (strings__string_t)ivar_115;
           if (ivar_112 != NULL) ivar_112->count++;
           release_iccMax2c_record_40(ivar_115);
           ivar_105 = (uint64_t)iccMax2c__print64((strings__string_t)ivar_112, (uint64_t)ivar_5);
           /* inMax */ uint64_t ivar_116;
           iccMax2c_record_40_t ivar_126;
           uint32_t len268597 = 8;
           uint32_t characters268598[8] = {105, 110, 77, 97, 120, 32, 61, 32};
           stringliteral_t string268596 = mk_string(8, characters268598);
           ivar_126 = (iccMax2c_record_40_t)strings__make_string(len268597, string268596);
           strings__string_t ivar_123;
           //copying to strings__string from iccMax2c_record_40;
           ivar_123 = (strings__string_t)ivar_126;
           if (ivar_123 != NULL) ivar_123->count++;
           release_iccMax2c_record_40(ivar_126);
           ivar_116 = (uint64_t)iccMax2c__print64((strings__string_t)ivar_123, (uint64_t)ivar_4);
           /* newWindow */ iccMax2c__window_t ivar_127;
           uint32_t ivar_128;
           uint32_t ivar_129;
           ivar_129 = (uint32_t)ivar_6->startpos;
           uint8_t ivar_130;
           ivar_130 = (uint8_t)8;
           ivar_128 = (uint32_t)(ivar_129 + ivar_130);
           iccMax2c__window_t ivar_138;
           {ivar_138 = (iccMax2c__window_t)copy_iccMax2c__window(ivar_6); ivar_138 = (iccMax2c__window_t)update_iccMax2c__window_startpos(ivar_138, ivar_128);};
           //copying to iccMax2c__window from iccMax2c__window;
           ivar_127 = (iccMax2c__window_t)ivar_138;
           if (ivar_127 != NULL) ivar_127->count++;
           release_iccMax2c__window(ivar_138);
           bool_t ivar_139;
           uint32_t ivar_141;
           ivar_141 = (uint32_t)iccMax2c__dataTag();
           ivar_139 = (ivar_89 == ivar_141);
           if (ivar_139){    
            release_iccMax2c__window(ivar_6);
            bool_t ivar_143;
            ivar_143 = (ivar_116 >= ivar_1);
            if (ivar_143){     
             release_bytestrings__bytestring(ivar_2);
             release_iccMax2c__signatureMap(ivar_3);
             release_iccMax2c__window(ivar_127);
             uint8_t ivar_151;
             ivar_151 = (uint8_t)iccMax2c__Overflow();
             uint8_t ivar_153;
             ivar_153 = (uint8_t)11;
             iccMax2c__result_adt_t ivar_150;
             ivar_150 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_151, (uint32_t)ivar_19, (uint8_t)ivar_153);
             //copying to iccMax2c__result_adt from iccMax2c__result_adt;
             result = (iccMax2c__result_adt_t)ivar_150;
             if (result != NULL) result->count++;
             release_iccMax2c__result_adt(ivar_150);
} else {
            
             mpz_ptr_t ivar_176;
             uint8_t ivar_161;
             ivar_161 = (uint8_t)1;
             mpz_mk_set_ui(ivar_176, (uint64_t)ivar_116);
             mpz_add_ui(ivar_176, ivar_176, (uint64_t)ivar_161);
             uint64_t ivar_170;
             //copying to uint64 from mpz;
             ivar_170 = (uint64_t)mpz_get_ui(ivar_176);
             mpz_clear(ivar_176);
             mpz_ptr_t ivar_175;
             uint8_t ivar_164;
             ivar_164 = (uint8_t)1;
             mpz_mk_set_ui(ivar_175, (uint64_t)ivar_105);
             mpz_add_ui(ivar_175, ivar_175, (uint64_t)ivar_164);
             uint64_t ivar_171;
             //copying to uint64 from mpz;
             ivar_171 = (uint64_t)mpz_get_ui(ivar_175);
             mpz_clear(ivar_175);
             iccMax2c__result_adt_t ivar_166;
             ivar_166 = (iccMax2c__result_adt_t)iccMax2c__parseOperation((uint64_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (iccMax2c__signatureMap_t)ivar_3, (uint64_t)ivar_170, (uint64_t)ivar_171, (iccMax2c__window_t)ivar_127);
             //copying to iccMax2c__result_adt from iccMax2c__result_adt;
             result = (iccMax2c__result_adt_t)ivar_166;
             if (result != NULL) result->count++;
             release_iccMax2c__result_adt(ivar_166);
};
} else {
           
            bool_t ivar_177;
            ivar_177 = (bool_t)iccMax2c__channelVecOpp((uint32_t)ivar_89);
            if (ivar_177){     
             release_iccMax2c__window(ivar_6);
             /* res */ iccMax2c__result_adt_t ivar_181;
             uint16_t ivar_211;
             uint32_t ivar_196;
             uint8_t ivar_192;
             ivar_192 = (uint8_t)4;
             ivar_196 = (uint32_t)(ivar_19 + ivar_192);
             ivar_2->count++;
             ivar_211 = (uint16_t)iccMax2c__readU16((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_196);
             uint16_t ivar_212;
             uint32_t ivar_204;
             uint8_t ivar_200;
             ivar_200 = (uint8_t)6;
             ivar_204 = (uint32_t)(ivar_19 + ivar_200);
             ivar_2->count++;
             ivar_212 = (uint16_t)iccMax2c__readU16((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_204);
             iccMax2c__result_adt_t ivar_205;
             ivar_205 = (iccMax2c__result_adt_t)iccMax2c__ChannelVecOp((uint32_t)ivar_89, (uint64_t)ivar_1, (uint32_t)ivar_19, (uint64_t)ivar_116, (uint64_t)ivar_105, (uint16_t)ivar_211, (uint16_t)ivar_212);
             //copying to iccMax2c__result_adt from iccMax2c__result_adt;
             ivar_181 = (iccMax2c__result_adt_t)ivar_205;
             if (ivar_181 != NULL) ivar_181->count++;
             release_iccMax2c__result_adt(ivar_205);
             bool_t ivar_226;
             ivar_181->count++;
             ivar_226 = (bool_t)r_iccMax2c__errorp((iccMax2c__result_adt_t)ivar_181);
             if (ivar_226){      
              release_iccMax2c__window(ivar_127);
              release_iccMax2c__signatureMap(ivar_3);
              release_bytestrings__bytestring(ivar_2);
              //copying to iccMax2c__result_adt from iccMax2c__result_adt;
              result = (iccMax2c__result_adt_t)ivar_181;
              if (result != NULL) result->count++;
              release_iccMax2c__result_adt(ivar_181);
} else {
             
              uint64_t ivar_230;
              ivar_181->count++;
              ivar_230 = (uint64_t)iccMax2c__result_adt_vmax((iccMax2c__result_adt_t)ivar_181);
              uint64_t ivar_231;
              ivar_231 = (uint64_t)iccMax2c__result_adt_vmin((iccMax2c__result_adt_t)ivar_181);
              iccMax2c__result_adt_t ivar_244;
              ivar_244 = (iccMax2c__result_adt_t)iccMax2c__parseOperation((uint64_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (iccMax2c__signatureMap_t)ivar_3, (uint64_t)ivar_230, (uint64_t)ivar_231, (iccMax2c__window_t)ivar_127);
              //copying to iccMax2c__result_adt from iccMax2c__result_adt;
              result = (iccMax2c__result_adt_t)ivar_244;
              if (result != NULL) result->count++;
              release_iccMax2c__result_adt(ivar_244);
};
} else {
            
             bool_t ivar_251;
             uint32_t ivar_253;
             ivar_253 = (uint32_t)iccMax2c__envTag();
             ivar_251 = (ivar_89 == ivar_253);
             if (ivar_251){      
              release_iccMax2c__window(ivar_6);
              bool_t ivar_255;
              mpz_ptr_t ivar_256;
              uint8_t ivar_259;
              ivar_259 = (uint8_t)2;
              mpz_mk_set_ui(ivar_256, (uint64_t)ivar_116);
              mpz_add_ui(ivar_256, ivar_256, (uint64_t)ivar_259);
              int64_t tmp268599 = mpz_cmp_ui(ivar_256, ivar_1);
              ivar_255 = (tmp268599 > 0);
              if (ivar_255){       
               release_bytestrings__bytestring(ivar_2);
               release_iccMax2c__signatureMap(ivar_3);
               release_iccMax2c__window(ivar_127);
               uint8_t ivar_266;
               ivar_266 = (uint8_t)iccMax2c__Overflow();
               uint8_t ivar_268;
               ivar_268 = (uint8_t)31;
               iccMax2c__result_adt_t ivar_265;
               ivar_265 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_266, (uint32_t)ivar_19, (uint8_t)ivar_268);
               //copying to iccMax2c__result_adt from iccMax2c__result_adt;
               result = (iccMax2c__result_adt_t)ivar_265;
               if (result != NULL) result->count++;
               release_iccMax2c__result_adt(ivar_265);
} else {
              
               mpz_ptr_t ivar_291;
               uint8_t ivar_276;
               ivar_276 = (uint8_t)2;
               mpz_mk_set_ui(ivar_291, (uint64_t)ivar_116);
               mpz_add_ui(ivar_291, ivar_291, (uint64_t)ivar_276);
               uint64_t ivar_285;
               //copying to uint64 from mpz;
               ivar_285 = (uint64_t)mpz_get_ui(ivar_291);
               mpz_clear(ivar_291);
               mpz_ptr_t ivar_290;
               uint8_t ivar_279;
               ivar_279 = (uint8_t)2;
               mpz_mk_set_ui(ivar_290, (uint64_t)ivar_105);
               mpz_add_ui(ivar_290, ivar_290, (uint64_t)ivar_279);
               uint64_t ivar_286;
               //copying to uint64 from mpz;
               ivar_286 = (uint64_t)mpz_get_ui(ivar_290);
               mpz_clear(ivar_290);
               iccMax2c__result_adt_t ivar_281;
               ivar_281 = (iccMax2c__result_adt_t)iccMax2c__parseOperation((uint64_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (iccMax2c__signatureMap_t)ivar_3, (uint64_t)ivar_285, (uint64_t)ivar_286, (iccMax2c__window_t)ivar_127);
               //copying to iccMax2c__result_adt from iccMax2c__result_adt;
               result = (iccMax2c__result_adt_t)ivar_281;
               if (result != NULL) result->count++;
               release_iccMax2c__result_adt(ivar_281);
};
} else {
             
              bool_t ivar_292;
              ivar_292 = (bool_t)iccMax2c__subElemTagp((uint32_t)ivar_89);
              if (ivar_292){       
               release_iccMax2c__window(ivar_6);
               /* S */ uint32_t ivar_296;
               uint32_t ivar_304;
               uint8_t ivar_300;
               ivar_300 = (uint8_t)4;
               ivar_304 = (uint32_t)(ivar_19 + ivar_300);
               ivar_2->count++;
               ivar_296 = (uint32_t)iccMax2c__readU32((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_304);
               /* sig */ iccMax2c__signature_adt_t ivar_305;
               iccMax2c__signature_adt_t ivar_307;
               ivar_307 = (iccMax2c__signature_adt_t)ivar_3->ftbl->fptr(ivar_3, ivar_296);
               //copying to iccMax2c__signature_adt from iccMax2c__signature_adt;
               ivar_305 = (iccMax2c__signature_adt_t)ivar_307;
               if (ivar_305 != NULL) ivar_305->count++;
               release_iccMax2c__signature_adt(ivar_307);
               bool_t ivar_310;
               ivar_305->count++;
               ivar_310 = (bool_t)r_iccMax2c__undefinedp((iccMax2c__signature_adt_t)ivar_305);
               if (ivar_310){        
                release_iccMax2c__window(ivar_127);
                release_iccMax2c__signatureMap(ivar_3);
                release_bytestrings__bytestring(ivar_2);
                release_iccMax2c__signature_adt(ivar_305);
                uint8_t ivar_318;
                ivar_318 = (uint8_t)iccMax2c__Undefined();
                uint8_t ivar_320;
                ivar_320 = (uint8_t)41;
                iccMax2c__result_adt_t ivar_317;
                ivar_317 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_318, (uint32_t)ivar_19, (uint8_t)ivar_320);
                //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                result = (iccMax2c__result_adt_t)ivar_317;
                if (result != NULL) result->count++;
                release_iccMax2c__result_adt(ivar_317);
} else {
               
                /* input */ uint64_t ivar_321;
                ivar_305->count++;
                ivar_321 = (uint64_t)iccMax2c__signature_adt_input((iccMax2c__signature_adt_t)ivar_305);
                /* output */ uint64_t ivar_325;
                ivar_325 = (uint64_t)iccMax2c__signature_adt_output((iccMax2c__signature_adt_t)ivar_305);
                bool_t ivar_329;
                ivar_329 = (ivar_321 > ivar_105);
                if (ivar_329){         
                 release_iccMax2c__window(ivar_127);
                 release_iccMax2c__signatureMap(ivar_3);
                 release_bytestrings__bytestring(ivar_2);
                 uint8_t ivar_337;
                 ivar_337 = (uint8_t)iccMax2c__Underflow();
                 uint8_t ivar_339;
                 ivar_339 = (uint8_t)42;
                 iccMax2c__result_adt_t ivar_336;
                 ivar_336 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_337, (uint32_t)ivar_19, (uint8_t)ivar_339);
                 //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                 result = (iccMax2c__result_adt_t)ivar_336;
                 if (result != NULL) result->count++;
                 release_iccMax2c__result_adt(ivar_336);
} else {
                
                 bool_t ivar_340;
                 mpz_ptr_t ivar_341;
                 mpz_mk_set_ui(ivar_341, (uint64_t)ivar_1);
                 mpz_sub_ui(ivar_341, ivar_341, (uint64_t)ivar_116);
                 int64_t tmp268600 = mpz_cmp_ui(ivar_341, ivar_321);
                 ivar_340 = (tmp268600 < 0);
                 if (ivar_340){          
                  release_iccMax2c__window(ivar_127);
                  release_iccMax2c__signatureMap(ivar_3);
                  release_bytestrings__bytestring(ivar_2);
                  uint8_t ivar_351;
                  ivar_351 = (uint8_t)iccMax2c__Overflow();
                  uint8_t ivar_353;
                  ivar_353 = (uint8_t)43;
                  iccMax2c__result_adt_t ivar_350;
                  ivar_350 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_351, (uint32_t)ivar_19, (uint8_t)ivar_353);
                  //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                  result = (iccMax2c__result_adt_t)ivar_350;
                  if (result != NULL) result->count++;
                  release_iccMax2c__result_adt(ivar_350);
} else {
                 
                  mpq_ptr_t ivar_397;
                  mpz_t tmp268601;
                  mpz_init(tmp268601);
                  mpz_set_ui(tmp268601, (uint64_t)ivar_116);
                  mpz_sub_ui(tmp268601, tmp268601, (uint64_t)ivar_321);
                  mpq_mk_set_z(ivar_397, tmp268601);
                  mpz_clear(tmp268601);
                  /* maxInputleft */ uint64_t ivar_354;
                  //copying to uint64 from mpq;
                  ivar_354 = (uint64_t)mpq_get_ui(ivar_397);
                  mpq_clear(ivar_397);
                  bool_t ivar_358;
                  mpz_ptr_t ivar_360;
                  mpz_mk_set_ui(ivar_360, (uint64_t)ivar_1);
                  mpz_sub_ui(ivar_360, ivar_360, (uint64_t)ivar_354);
                  int64_t tmp268602 = mpz_cmp_ui(ivar_360, ivar_325);
                  ivar_358 = (tmp268602 > 0);
                  if (ivar_358){           
                   release_bytestrings__bytestring(ivar_2);
                   release_iccMax2c__signatureMap(ivar_3);
                   release_iccMax2c__window(ivar_127);
                   uint8_t ivar_369;
                   ivar_369 = (uint8_t)iccMax2c__Overflow();
                   uint8_t ivar_371;
                   ivar_371 = (uint8_t)44;
                   iccMax2c__result_adt_t ivar_368;
                   ivar_368 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_369, (uint32_t)ivar_19, (uint8_t)ivar_371);
                   //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                   result = (iccMax2c__result_adt_t)ivar_368;
                   if (result != NULL) result->count++;
                   release_iccMax2c__result_adt(ivar_368);
} else {
                  
                   /* newInMax */ uint64_t ivar_372;
                   ivar_372 = (uint64_t)(ivar_354 + ivar_325);
                   /* minInputleft */ uint64_t ivar_376;
                   ivar_376 = (uint64_t)(ivar_105 - ivar_321);
                   /* newInMin */ uint64_t ivar_380;
                   ivar_380 = (uint64_t)(ivar_376 + ivar_325);
                   iccMax2c__result_adt_t ivar_390;
                   ivar_390 = (iccMax2c__result_adt_t)iccMax2c__parseOperation((uint64_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (iccMax2c__signatureMap_t)ivar_3, (uint64_t)ivar_372, (uint64_t)ivar_380, (iccMax2c__window_t)ivar_127);
                   //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                   result = (iccMax2c__result_adt_t)ivar_390;
                   if (result != NULL) result->count++;
                   release_iccMax2c__result_adt(ivar_390);
};
};
};
};
} else {
              
               bool_t ivar_398;
               ivar_398 = (bool_t)iccMax2c__stackOpTagp((uint32_t)ivar_89);
               if (ivar_398){        
                release_iccMax2c__window(ivar_6);
                /* S */ uint16_t ivar_402;
                uint32_t ivar_410;
                uint8_t ivar_406;
                ivar_406 = (uint8_t)4;
                ivar_410 = (uint32_t)(ivar_19 + ivar_406);
                ivar_2->count++;
                ivar_402 = (uint16_t)iccMax2c__readU16((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_410);
                /* T */ uint16_t ivar_411;
                uint32_t ivar_419;
                uint8_t ivar_415;
                ivar_415 = (uint8_t)6;
                ivar_419 = (uint32_t)(ivar_19 + ivar_415);
                ivar_2->count++;
                ivar_411 = (uint16_t)iccMax2c__readU16((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_419);
                /* stackout */ uint64_t ivar_420;
                ivar_420 = (uint64_t)iccMax2c__stackOut((uint32_t)ivar_89, (uint16_t)ivar_402, (uint16_t)ivar_411);
                bool_t ivar_428;
                uint32_t ivar_429;
                uint8_t ivar_432;
                ivar_432 = (uint8_t)1;
                ivar_429 = (uint32_t)(ivar_402 + ivar_432);
                ivar_428 = (ivar_429 > ivar_105);
                if (ivar_428){         
                 release_iccMax2c__window(ivar_127);
                 release_iccMax2c__signatureMap(ivar_3);
                 release_bytestrings__bytestring(ivar_2);
                 uint8_t ivar_439;
                 ivar_439 = (uint8_t)iccMax2c__Underflow();
                 uint8_t ivar_441;
                 ivar_441 = (uint8_t)51;
                 iccMax2c__result_adt_t ivar_438;
                 ivar_438 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_439, (uint32_t)ivar_19, (uint8_t)ivar_441);
                 //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                 result = (iccMax2c__result_adt_t)ivar_438;
                 if (result != NULL) result->count++;
                 release_iccMax2c__result_adt(ivar_438);
} else {
                
                 bool_t ivar_442;
                 mpz_ptr_t ivar_443;
                 mpz_ptr_t ivar_445;
                 mpz_ptr_t ivar_447;
                 mpz_mk_set_ui(ivar_447, (uint64_t)ivar_116);
                 mpz_sub_ui(ivar_447, ivar_447, (uint64_t)ivar_402);
                 uint8_t ivar_448;
                 ivar_448 = (uint8_t)1;
                 mpz_mk_sub_ui(ivar_445, ivar_447, (uint64_t)ivar_448);
                 mpz_mk_set_ui(ivar_443, (uint64_t)ivar_420);
                 mpz_add(ivar_443, ivar_443, ivar_445);
                 int64_t tmp268603 = mpz_cmp_ui(ivar_443, ivar_1);
                 ivar_442 = (tmp268603 > 0);
                 if (ivar_442){          
                  release_iccMax2c__window(ivar_127);
                  release_iccMax2c__signatureMap(ivar_3);
                  release_bytestrings__bytestring(ivar_2);
                  uint8_t ivar_459;
                  ivar_459 = (uint8_t)iccMax2c__Overflow();
                  uint8_t ivar_461;
                  ivar_461 = (uint8_t)52;
                  iccMax2c__result_adt_t ivar_458;
                  ivar_458 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_459, (uint32_t)ivar_19, (uint8_t)ivar_461);
                  //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                  result = (iccMax2c__result_adt_t)ivar_458;
                  if (result != NULL) result->count++;
                  release_iccMax2c__result_adt(ivar_458);
} else {
                 
                  bool_t ivar_462;
                  bool_t ivar_463;
                  bool_t ivar_465;
                  uint32_t ivar_468;
                  ivar_468 = (uint32_t)1718380912;
                  ivar_465 = (ivar_89 == ivar_468);
                  if (ivar_465){           
                   ivar_463 = (bool_t) true;
} else {
                  
                   uint32_t ivar_471;
                   ivar_471 = (uint32_t)1886351392;
                   ivar_463 = (ivar_89 == ivar_471);
};
                  if (ivar_463){           
                   uint8_t ivar_475;
                   ivar_475 = (uint8_t)0;
                   ivar_462 = (ivar_411 != ivar_475);
} else {
                  
                   ivar_462 = (bool_t) false;
};
                  if (ivar_462){           
                   release_bytestrings__bytestring(ivar_2);
                   release_iccMax2c__signatureMap(ivar_3);
                   release_iccMax2c__window(ivar_127);
                   uint8_t ivar_482;
                   ivar_482 = (uint8_t)iccMax2c__nonZero();
                   uint8_t ivar_484;
                   ivar_484 = (uint8_t)53;
                   iccMax2c__result_adt_t ivar_481;
                   ivar_481 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_482, (uint32_t)ivar_19, (uint8_t)ivar_484);
                   //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                   result = (iccMax2c__result_adt_t)ivar_481;
                   if (result != NULL) result->count++;
                   release_iccMax2c__result_adt(ivar_481);
} else {
                  
                   mpz_ptr_t ivar_519;
                   mpz_ptr_t ivar_491;
                   mpz_ptr_t ivar_493;
                   mpz_mk_set_ui(ivar_493, (uint64_t)ivar_116);
                   mpz_sub_ui(ivar_493, ivar_493, (uint64_t)ivar_402);
                   uint8_t ivar_494;
                   ivar_494 = (uint8_t)1;
                   mpz_mk_sub_ui(ivar_491, ivar_493, (uint64_t)ivar_494);
                   mpz_mk_set_ui(ivar_519, (uint64_t)ivar_420);
                   mpz_add(ivar_519, ivar_519, ivar_491);
                   uint64_t ivar_513;
                   //copying to uint64 from mpz;
                   ivar_513 = (uint64_t)mpz_get_ui(ivar_519);
                   mpz_clear(ivar_519);
                   mpz_ptr_t ivar_518;
                   mpz_ptr_t ivar_500;
                   mpz_ptr_t ivar_502;
                   mpz_mk_set_ui(ivar_502, (uint64_t)ivar_105);
                   mpz_sub_ui(ivar_502, ivar_502, (uint64_t)ivar_402);
                   uint8_t ivar_503;
                   ivar_503 = (uint8_t)1;
                   mpz_mk_sub_ui(ivar_500, ivar_502, (uint64_t)ivar_503);
                   mpz_mk_set_ui(ivar_518, (uint64_t)ivar_420);
                   mpz_add(ivar_518, ivar_518, ivar_500);
                   uint64_t ivar_514;
                   //copying to uint64 from mpz;
                   ivar_514 = (uint64_t)mpz_get_ui(ivar_518);
                   mpz_clear(ivar_518);
                   iccMax2c__result_adt_t ivar_509;
                   ivar_509 = (iccMax2c__result_adt_t)iccMax2c__parseOperation((uint64_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (iccMax2c__signatureMap_t)ivar_3, (uint64_t)ivar_513, (uint64_t)ivar_514, (iccMax2c__window_t)ivar_127);
                   //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                   result = (iccMax2c__result_adt_t)ivar_509;
                   if (result != NULL) result->count++;
                   release_iccMax2c__result_adt(ivar_509);
};
};
};
} else {
               
                bool_t ivar_520;
                ivar_520 = (bool_t)iccMax2c__matrixOpTagp((uint32_t)ivar_89);
                if (ivar_520){         
                 release_iccMax2c__window(ivar_6);
                 /* S */ uint16_t ivar_524;
                 uint32_t ivar_532;
                 uint8_t ivar_528;
                 ivar_528 = (uint8_t)4;
                 ivar_532 = (uint32_t)(ivar_19 + ivar_528);
                 ivar_2->count++;
                 ivar_524 = (uint16_t)iccMax2c__readU16((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_532);
                 /* T */ uint16_t ivar_533;
                 uint32_t ivar_541;
                 uint8_t ivar_537;
                 ivar_537 = (uint8_t)6;
                 ivar_541 = (uint32_t)(ivar_19 + ivar_537);
                 ivar_2->count++;
                 ivar_533 = (uint16_t)iccMax2c__readU16((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_541);
                 /* stackin */ uint64_t ivar_542;
                 ivar_542 = (uint64_t)iccMax2c__matrixIn((uint32_t)ivar_89, (uint16_t)ivar_524, (uint16_t)ivar_533);
                 /* stackout */ uint64_t ivar_550;
                 ivar_550 = (uint64_t)iccMax2c__matrixOut((uint32_t)ivar_89, (uint16_t)ivar_524, (uint16_t)ivar_533);
                 bool_t ivar_558;
                 ivar_558 = (ivar_542 > ivar_105);
                 if (ivar_558){          
                  release_bytestrings__bytestring(ivar_2);
                  release_iccMax2c__signatureMap(ivar_3);
                  release_iccMax2c__window(ivar_127);
                  uint8_t ivar_566;
                  ivar_566 = (uint8_t)iccMax2c__Underflow();
                  uint8_t ivar_568;
                  ivar_568 = (uint8_t)61;
                  iccMax2c__result_adt_t ivar_565;
                  ivar_565 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_566, (uint32_t)ivar_19, (uint8_t)ivar_568);
                  //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                  result = (iccMax2c__result_adt_t)ivar_565;
                  if (result != NULL) result->count++;
                  release_iccMax2c__result_adt(ivar_565);
} else {
                 
                  mpz_ptr_t ivar_597;
                  mpz_ptr_t ivar_575;
                  mpz_mk_set_ui(ivar_575, (uint64_t)ivar_116);
                  mpz_sub_ui(ivar_575, ivar_575, (uint64_t)ivar_542);
                  mpz_mk_set_ui(ivar_597, (uint64_t)ivar_550);
                  mpz_add(ivar_597, ivar_597, ivar_575);
                  uint64_t ivar_591;
                  //copying to uint64 from mpz;
                  ivar_591 = (uint64_t)mpz_get_ui(ivar_597);
                  mpz_clear(ivar_597);
                  mpz_ptr_t ivar_596;
                  mpz_ptr_t ivar_581;
                  mpz_mk_set_ui(ivar_581, (uint64_t)ivar_105);
                  mpz_sub_ui(ivar_581, ivar_581, (uint64_t)ivar_542);
                  mpz_mk_set_ui(ivar_596, (uint64_t)ivar_550);
                  mpz_add(ivar_596, ivar_596, ivar_581);
                  uint64_t ivar_592;
                  //copying to uint64 from mpz;
                  ivar_592 = (uint64_t)mpz_get_ui(ivar_596);
                  mpz_clear(ivar_596);
                  iccMax2c__result_adt_t ivar_587;
                  ivar_587 = (iccMax2c__result_adt_t)iccMax2c__parseOperation((uint64_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (iccMax2c__signatureMap_t)ivar_3, (uint64_t)ivar_591, (uint64_t)ivar_592, (iccMax2c__window_t)ivar_127);
                  //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                  result = (iccMax2c__result_adt_t)ivar_587;
                  if (result != NULL) result->count++;
                  release_iccMax2c__result_adt(ivar_587);
};
} else {
                
                 bool_t ivar_598;
                 ivar_598 = (bool_t)iccMax2c__seqFuncOpp((uint32_t)ivar_89);
                 if (ivar_598){          
                  release_iccMax2c__window(ivar_6);
                  /* S */ uint16_t ivar_602;
                  uint32_t ivar_610;
                  uint8_t ivar_606;
                  ivar_606 = (uint8_t)4;
                  ivar_610 = (uint32_t)(ivar_19 + ivar_606);
                  ivar_2->count++;
                  ivar_602 = (uint16_t)iccMax2c__readU16((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_610);
                  /* T */ uint16_t ivar_611;
                  uint32_t ivar_619;
                  uint8_t ivar_615;
                  ivar_615 = (uint8_t)6;
                  ivar_619 = (uint32_t)(ivar_19 + ivar_615);
                  ivar_2->count++;
                  ivar_611 = (uint16_t)iccMax2c__readU16((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_619);
                  bool_t ivar_620;
                  uint8_t ivar_622;
                  ivar_622 = (uint8_t)0;
                  ivar_620 = (ivar_611 != ivar_622);
                  if (ivar_620){           
                   release_iccMax2c__window(ivar_127);
                   release_iccMax2c__signatureMap(ivar_3);
                   release_bytestrings__bytestring(ivar_2);
                   uint8_t ivar_628;
                   ivar_628 = (uint8_t)iccMax2c__nonZero();
                   uint8_t ivar_630;
                   ivar_630 = (uint8_t)71;
                   iccMax2c__result_adt_t ivar_627;
                   ivar_627 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_628, (uint32_t)ivar_19, (uint8_t)ivar_630);
                   //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                   result = (iccMax2c__result_adt_t)ivar_627;
                   if (result != NULL) result->count++;
                   release_iccMax2c__result_adt(ivar_627);
} else {
                  
                   bool_t ivar_631;
                   uint32_t ivar_632;
                   uint8_t ivar_635;
                   ivar_635 = (uint8_t)1;
                   ivar_632 = (uint32_t)(ivar_602 + ivar_635);
                   ivar_631 = (ivar_632 > ivar_105);
                   if (ivar_631){            
                    release_bytestrings__bytestring(ivar_2);
                    release_iccMax2c__signatureMap(ivar_3);
                    release_iccMax2c__window(ivar_127);
                    uint8_t ivar_642;
                    ivar_642 = (uint8_t)iccMax2c__Underflow();
                    uint8_t ivar_644;
                    ivar_644 = (uint8_t)72;
                    iccMax2c__result_adt_t ivar_641;
                    ivar_641 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_642, (uint32_t)ivar_19, (uint8_t)ivar_644);
                    //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                    result = (iccMax2c__result_adt_t)ivar_641;
                    if (result != NULL) result->count++;
                    release_iccMax2c__result_adt(ivar_641);
} else {
                   
                    mpz_ptr_t ivar_667;
                    mpz_mk_set_ui(ivar_667, (uint64_t)ivar_116);
                    mpz_sub_ui(ivar_667, ivar_667, (uint64_t)ivar_602);
                    uint64_t ivar_661;
                    //copying to uint64 from mpz;
                    ivar_661 = (uint64_t)mpz_get_ui(ivar_667);
                    mpz_clear(ivar_667);
                    mpz_ptr_t ivar_666;
                    mpz_mk_set_ui(ivar_666, (uint64_t)ivar_105);
                    mpz_sub_ui(ivar_666, ivar_666, (uint64_t)ivar_602);
                    uint64_t ivar_662;
                    //copying to uint64 from mpz;
                    ivar_662 = (uint64_t)mpz_get_ui(ivar_666);
                    mpz_clear(ivar_666);
                    iccMax2c__result_adt_t ivar_657;
                    ivar_657 = (iccMax2c__result_adt_t)iccMax2c__parseOperation((uint64_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (iccMax2c__signatureMap_t)ivar_3, (uint64_t)ivar_661, (uint64_t)ivar_662, (iccMax2c__window_t)ivar_127);
                    //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                    result = (iccMax2c__result_adt_t)ivar_657;
                    if (result != NULL) result->count++;
                    release_iccMax2c__result_adt(ivar_657);
};
};
} else {
                 
                  bool_t ivar_668;
                  ivar_668 = (bool_t)iccMax2c__FuncVecOpp((uint32_t)ivar_89);
                  if (ivar_668){           
                   release_iccMax2c__window(ivar_6);
                   /* S */ uint16_t ivar_672;
                   uint32_t ivar_680;
                   uint8_t ivar_676;
                   ivar_676 = (uint8_t)4;
                   ivar_680 = (uint32_t)(ivar_19 + ivar_676);
                   ivar_2->count++;
                   ivar_672 = (uint16_t)iccMax2c__readU16((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_680);
                   /* stackin */ uint32_t ivar_690;
                   ivar_690 = (uint32_t)iccMax2c__FuncVecIn((uint32_t)ivar_89, (uint16_t)ivar_672);
                   /* stackout */ uint32_t ivar_696;
                   ivar_696 = (uint32_t)iccMax2c__FuncVecOut((uint32_t)ivar_89, (uint16_t)ivar_672);
                   bool_t ivar_702;
                   ivar_702 = (ivar_690 > ivar_105);
                   if (ivar_702){            
                    release_iccMax2c__window(ivar_127);
                    release_iccMax2c__signatureMap(ivar_3);
                    release_bytestrings__bytestring(ivar_2);
                    uint8_t ivar_710;
                    ivar_710 = (uint8_t)iccMax2c__Underflow();
                    uint8_t ivar_712;
                    ivar_712 = (uint8_t)81;
                    iccMax2c__result_adt_t ivar_709;
                    ivar_709 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_710, (uint32_t)ivar_19, (uint8_t)ivar_712);
                    //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                    result = (iccMax2c__result_adt_t)ivar_709;
                    if (result != NULL) result->count++;
                    release_iccMax2c__result_adt(ivar_709);
} else {
                   
                    bool_t ivar_713;
                    mpz_ptr_t ivar_714;
                    mpz_ptr_t ivar_716;
                    mpz_mk_set_ui(ivar_716, (uint64_t)ivar_116);
                    mpz_sub_ui(ivar_716, ivar_716, (uint64_t)ivar_690);
                    mpz_mk_set_ui(ivar_714, (uint64_t)ivar_696);
                    mpz_add(ivar_714, ivar_714, ivar_716);
                    int64_t tmp268604 = mpz_cmp_ui(ivar_714, ivar_1);
                    ivar_713 = (tmp268604 >= 0);
                    if (ivar_713){             
                     release_bytestrings__bytestring(ivar_2);
                     release_iccMax2c__signatureMap(ivar_3);
                     release_iccMax2c__window(ivar_127);
                     uint8_t ivar_727;
                     ivar_727 = (uint8_t)iccMax2c__Overflow();
                     uint8_t ivar_729;
                     ivar_729 = (uint8_t)82;
                     iccMax2c__result_adt_t ivar_726;
                     ivar_726 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_727, (uint32_t)ivar_19, (uint8_t)ivar_729);
                     //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                     result = (iccMax2c__result_adt_t)ivar_726;
                     if (result != NULL) result->count++;
                     release_iccMax2c__result_adt(ivar_726);
} else {
                    
                     mpz_ptr_t ivar_758;
                     mpz_ptr_t ivar_736;
                     mpz_mk_set_ui(ivar_736, (uint64_t)ivar_116);
                     mpz_sub_ui(ivar_736, ivar_736, (uint64_t)ivar_690);
                     mpz_mk_set_ui(ivar_758, (uint64_t)ivar_696);
                     mpz_add(ivar_758, ivar_758, ivar_736);
                     uint64_t ivar_752;
                     //copying to uint64 from mpz;
                     ivar_752 = (uint64_t)mpz_get_ui(ivar_758);
                     mpz_clear(ivar_758);
                     mpz_ptr_t ivar_757;
                     mpz_ptr_t ivar_742;
                     mpz_mk_set_ui(ivar_742, (uint64_t)ivar_105);
                     mpz_sub_ui(ivar_742, ivar_742, (uint64_t)ivar_690);
                     mpz_mk_set_ui(ivar_757, (uint64_t)ivar_696);
                     mpz_add(ivar_757, ivar_757, ivar_742);
                     uint64_t ivar_753;
                     //copying to uint64 from mpz;
                     ivar_753 = (uint64_t)mpz_get_ui(ivar_757);
                     mpz_clear(ivar_757);
                     iccMax2c__result_adt_t ivar_748;
                     ivar_748 = (iccMax2c__result_adt_t)iccMax2c__parseOperation((uint64_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (iccMax2c__signatureMap_t)ivar_3, (uint64_t)ivar_752, (uint64_t)ivar_753, (iccMax2c__window_t)ivar_127);
                     //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                     result = (iccMax2c__result_adt_t)ivar_748;
                     if (result != NULL) result->count++;
                     release_iccMax2c__result_adt(ivar_748);
};
};
} else {
                  
                   release_iccMax2c__window(ivar_127);
                   bool_t ivar_759;
                   uint32_t ivar_761;
                   ivar_761 = (uint32_t)iccMax2c__ifTag();
                   ivar_759 = (ivar_89 == ivar_761);
                   if (ivar_759){            
                    /* T */ uint32_t ivar_763;
                    uint32_t ivar_771;
                    uint8_t ivar_767;
                    ivar_767 = (uint8_t)4;
                    ivar_771 = (uint32_t)(ivar_19 + ivar_767);
                    ivar_2->count++;
                    ivar_763 = (uint32_t)iccMax2c__readU32((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_771);
                    bool_t ivar_772;
                    bool_t ivar_773;
                    uint8_t ivar_775;
                    ivar_775 = (uint8_t)16;
                    mpq_ptr_t ivar_776;
                    mpz_t tmp268605;
                    mpz_init(tmp268605);
                    mpz_set_ui(tmp268605, (uint64_t)ivar_7);
                    mpz_sub_ui(tmp268605, tmp268605, (uint64_t)ivar_19);
                    mpq_mk_set_z(ivar_776, tmp268605);
                    mpz_clear(tmp268605);
                    int64_t tmp268606 = mpq_cmp_ui(ivar_776, ivar_775, 1);
                    ivar_773 = (tmp268606 <= 0);
                    if (ivar_773){             
                     uint32_t ivar_781;
                     uint32_t ivar_790;
                     uint8_t ivar_786;
                     ivar_786 = (uint8_t)8;
                     ivar_790 = (uint32_t)(ivar_19 + ivar_786);
                     ivar_2->count++;
                     ivar_781 = (uint32_t)iccMax2c__readU32((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_790);
                     uint32_t ivar_782;
                     ivar_782 = (uint32_t)iccMax2c__elseTag();
                     ivar_772 = (ivar_781 == ivar_782);
} else {
                    
                     ivar_772 = (bool_t) false;
};
                    if (ivar_772){             
                     /* U */ uint32_t ivar_793;
                     uint32_t ivar_801;
                     uint8_t ivar_797;
                     ivar_797 = (uint8_t)12;
                     ivar_801 = (uint32_t)(ivar_19 + ivar_797);
                     ivar_2->count++;
                     ivar_793 = (uint32_t)iccMax2c__readU32((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_801);
                     bool_t ivar_802;
                     uint32_t ivar_804;
                     mpz_ptr_t ivar_817;
                     mpq_ptr_t ivar_807;
                     mpz_t tmp268607;
                     mpz_init(tmp268607);
                     mpz_set_ui(tmp268607, (uint64_t)ivar_7);
                     mpz_sub_ui(tmp268607, tmp268607, (uint64_t)ivar_19);
                     mpq_mk_set_z(ivar_807, tmp268607);
                     mpz_clear(tmp268607);
                     uint8_t ivar_808;
                     ivar_808 = (uint8_t)16;
                     mpz_t tmp268608;
                     mpz_init(tmp268608);
                     mpz_set_q(tmp268608, ivar_807);
                     mpz_mk_sub_ui(ivar_817, tmp268608, (uint64_t)ivar_808);
                     mpz_clear(tmp268608);
                     uint32_t ivar_814;
                     //copying to uint32 from mpz;
                     ivar_814 = (uint32_t)mpz_get_ui(ivar_817);
                     mpz_clear(ivar_817);
                     uint32_t ivar_815;
                     ivar_815 = (uint32_t)8;
                     ivar_804 = (uint32_t)integertypes__u32div((uint32_t)ivar_814, (uint32_t)ivar_815);
                     ivar_802 = (ivar_763 <= ivar_804);
                     if (ivar_802){              
                      /* Twindow */ iccMax2c__window_t ivar_819;
                      uint32_t ivar_820;
                      uint64_t ivar_822;
                      uint8_t ivar_825;
                      ivar_825 = (uint8_t)16;
                      ivar_822 = (uint64_t)(ivar_19 + ivar_825);
                      uint64_t ivar_823;
                      uint8_t ivar_827;
                      ivar_827 = (uint8_t)8;
                      ivar_823 = (uint64_t)((uint64_t)ivar_827 * (uint64_t)ivar_763);
                      ivar_820 = (uint32_t)(ivar_822 + ivar_823);
                      uint32_t ivar_821;
                      uint8_t ivar_832;
                      ivar_832 = (uint8_t)16;
                      ivar_821 = (uint32_t)(ivar_19 + ivar_832);
                      iccMax2c__window_t ivar_838;
                      {ivar_838 = (iccMax2c__window_t)copy_iccMax2c__window(ivar_6); ivar_838 = (iccMax2c__window_t)update_iccMax2c__window_endpos(ivar_838, ivar_820);};
                      iccMax2c__window_t ivar_842;
                      ivar_842 = (iccMax2c__window_t)update_iccMax2c__window_startpos(ivar_838, ivar_821);
                      //copying to iccMax2c__window from iccMax2c__window;
                      ivar_819 = (iccMax2c__window_t)ivar_842;
                      if (ivar_819 != NULL) ivar_819->count++;
                      release_iccMax2c__window(ivar_842);
                      /* Tval */ iccMax2c__result_adt_t ivar_843;
                      iccMax2c__result_adt_t ivar_850;
                      ivar_2->count++;
                      ivar_3->count++;
                      ivar_850 = (iccMax2c__result_adt_t)iccMax2c__parseOperation((uint64_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (iccMax2c__signatureMap_t)ivar_3, (uint64_t)ivar_116, (uint64_t)ivar_105, (iccMax2c__window_t)ivar_819);
                      //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                      ivar_843 = (iccMax2c__result_adt_t)ivar_850;
                      if (ivar_843 != NULL) ivar_843->count++;
                      release_iccMax2c__result_adt(ivar_850);
                      bool_t ivar_857;
                      ivar_843->count++;
                      ivar_857 = (bool_t)r_iccMax2c__errorp((iccMax2c__result_adt_t)ivar_843);
                      if (ivar_857){               
                       release_iccMax2c__signatureMap(ivar_3);
                       release_bytestrings__bytestring(ivar_2);
                       release_iccMax2c__window(ivar_6);
                       //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                       result = (iccMax2c__result_adt_t)ivar_843;
                       if (result != NULL) result->count++;
                       release_iccMax2c__result_adt(ivar_843);
} else {
                      
                       bool_t ivar_861;
                       mpq_ptr_t ivar_862;
                       mpz_t tmp268609;
                       mpz_init(tmp268609);
                       mpz_set_ui(tmp268609, (uint64_t)ivar_763);
                       mpz_add_ui(tmp268609, tmp268609, (uint64_t)ivar_793);
                       mpq_mk_set_z(ivar_862, tmp268609);
                       mpz_clear(tmp268609);
                       uint32_t ivar_863;
                       mpz_ptr_t ivar_879;
                       mpq_ptr_t ivar_869;
                       mpz_t tmp268610;
                       mpz_init(tmp268610);
                       mpz_set_ui(tmp268610, (uint64_t)ivar_7);
                       mpz_sub_ui(tmp268610, tmp268610, (uint64_t)ivar_19);
                       mpq_mk_set_z(ivar_869, tmp268610);
                       mpz_clear(tmp268610);
                       uint8_t ivar_870;
                       ivar_870 = (uint8_t)16;
                       mpz_t tmp268611;
                       mpz_init(tmp268611);
                       mpz_set_q(tmp268611, ivar_869);
                       mpz_mk_sub_ui(ivar_879, tmp268611, (uint64_t)ivar_870);
                       mpz_clear(tmp268611);
                       uint32_t ivar_876;
                       //copying to uint32 from mpz;
                       ivar_876 = (uint32_t)mpz_get_ui(ivar_879);
                       mpz_clear(ivar_879);
                       uint32_t ivar_877;
                       ivar_877 = (uint32_t)8;
                       ivar_863 = (uint32_t)integertypes__u32div((uint32_t)ivar_876, (uint32_t)ivar_877);
                       int64_t tmp268612 = mpq_cmp_ui(ivar_862, ivar_863, 1);
                       ivar_861 = (tmp268612 <= 0);
                       if (ivar_861){                
                        /* w1 */ iccMax2c__window_t ivar_881;
                        uint32_t ivar_882;
                        uint64_t ivar_884;
                        uint8_t ivar_887;
                        ivar_887 = (uint8_t)16;
                        ivar_884 = (uint64_t)(ivar_19 + ivar_887);
                        mpz_ptr_t ivar_885;
                        uint8_t ivar_889;
                        ivar_889 = (uint8_t)8;
                        mpq_ptr_t ivar_890;
                        mpz_t tmp268613;
                        mpz_init(tmp268613);
                        mpz_set_ui(tmp268613, (uint64_t)ivar_763);
                        mpz_add_ui(tmp268613, tmp268613, (uint64_t)ivar_793);
                        mpq_mk_set_z(ivar_890, tmp268613);
                        mpz_clear(tmp268613);
                        mpz_t tmp268614;
                        mpq_init(tmp268614);
                        mpz_set_q(tmp268614, ivar_890);
                        mpz_mk_mul_ui(ivar_885, tmp268614, ivar_889);
                        mpq_clear(tmp268614);
                        mpz_t tmp268615;
                        mpz_init(tmp268615);
                        mpz_add_ui(tmp268615, ivar_885, ivar_884);
                        ivar_882 = (uint32_t)mpz_get_ui(tmp268615);
                        mpz_clear(tmp268615);
                        uint32_t ivar_883;
                        uint64_t ivar_897;
                        uint8_t ivar_898;
                        ivar_898 = (uint8_t)8;
                        uint64_t ivar_899;
                        uint8_t ivar_901;
                        ivar_901 = (uint8_t)2;
                        ivar_899 = (uint64_t)(ivar_763 + ivar_901);
                        ivar_897 = (uint64_t)((uint64_t)ivar_898 * (uint64_t)ivar_899);
                        ivar_883 = (uint32_t)(ivar_19 + ivar_897);
                        iccMax2c__window_t ivar_909;
                        {ivar_909 = (iccMax2c__window_t)copy_iccMax2c__window(ivar_6); ivar_909 = (iccMax2c__window_t)update_iccMax2c__window_endpos(ivar_909, ivar_882);};
                        iccMax2c__window_t ivar_913;
                        ivar_913 = (iccMax2c__window_t)update_iccMax2c__window_startpos(ivar_909, ivar_883);
                        //copying to iccMax2c__window from iccMax2c__window;
                        ivar_881 = (iccMax2c__window_t)ivar_913;
                        if (ivar_881 != NULL) ivar_881->count++;
                        release_iccMax2c__window(ivar_913);
                        /* Eval */ iccMax2c__result_adt_t ivar_914;
                        iccMax2c__result_adt_t ivar_921;
                        ivar_2->count++;
                        ivar_3->count++;
                        ivar_921 = (iccMax2c__result_adt_t)iccMax2c__parseOperation((uint64_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (iccMax2c__signatureMap_t)ivar_3, (uint64_t)ivar_116, (uint64_t)ivar_105, (iccMax2c__window_t)ivar_881);
                        //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                        ivar_914 = (iccMax2c__result_adt_t)ivar_921;
                        if (ivar_914 != NULL) ivar_914->count++;
                        release_iccMax2c__result_adt(ivar_921);
                        bool_t ivar_928;
                        ivar_914->count++;
                        ivar_928 = (bool_t)r_iccMax2c__errorp((iccMax2c__result_adt_t)ivar_914);
                        if (ivar_928){                 
                         release_iccMax2c__result_adt(ivar_843);
                         release_iccMax2c__signatureMap(ivar_3);
                         release_bytestrings__bytestring(ivar_2);
                         release_iccMax2c__window(ivar_6);
                         //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                         result = (iccMax2c__result_adt_t)ivar_914;
                         if (result != NULL) result->count++;
                         release_iccMax2c__result_adt(ivar_914);
} else {
                        
                         /* w2 */ iccMax2c__window_t ivar_932;
                         uint32_t ivar_933;
                         mpz_ptr_t ivar_935;
                         uint8_t ivar_936;
                         ivar_936 = (uint8_t)8;
                         mpz_ptr_t ivar_937;
                         mpq_ptr_t ivar_938;
                         mpz_t tmp268616;
                         mpz_init(tmp268616);
                         mpz_set_ui(tmp268616, (uint64_t)ivar_763);
                         mpz_add_ui(tmp268616, tmp268616, (uint64_t)ivar_793);
                         mpq_mk_set_z(ivar_938, tmp268616);
                         mpz_clear(tmp268616);
                         uint8_t ivar_939;
                         ivar_939 = (uint8_t)2;
                         mpz_mk_set_q(ivar_937, ivar_938);
                         mpz_add_ui(ivar_937, ivar_937, (uint64_t)ivar_939);
                         mpz_mk_mul_ui(ivar_935, ivar_937, (uint64_t)ivar_936);
                         mpz_t tmp268617;
                         mpz_init(tmp268617);
                         mpz_add_ui(tmp268617, ivar_935, ivar_19);
                         ivar_933 = (uint32_t)mpz_get_ui(tmp268617);
                         mpz_clear(tmp268617);
                         iccMax2c__window_t ivar_950;
                         ivar_950 = (iccMax2c__window_t)update_iccMax2c__window_startpos(ivar_6, ivar_933);
                         //copying to iccMax2c__window from iccMax2c__window;
                         ivar_932 = (iccMax2c__window_t)ivar_950;
                         if (ivar_932 != NULL) ivar_932->count++;
                         release_iccMax2c__window(ivar_950);
                         uint64_t ivar_983;
                         uint64_t ivar_966;
                         ivar_843->count++;
                         ivar_966 = (uint64_t)iccMax2c__result_adt_vmax((iccMax2c__result_adt_t)ivar_843);
                         uint64_t ivar_967;
                         ivar_914->count++;
                         ivar_967 = (uint64_t)iccMax2c__result_adt_vmax((iccMax2c__result_adt_t)ivar_914);
                         ivar_983 = (uint64_t)integertypes__u64max((uint64_t)ivar_966, (uint64_t)ivar_967);
                         uint64_t ivar_984;
                         uint64_t ivar_977;
                         ivar_977 = (uint64_t)iccMax2c__result_adt_vmin((iccMax2c__result_adt_t)ivar_843);
                         uint64_t ivar_978;
                         ivar_978 = (uint64_t)iccMax2c__result_adt_vmin((iccMax2c__result_adt_t)ivar_914);
                         ivar_984 = (uint64_t)integertypes__u64min((uint64_t)ivar_977, (uint64_t)ivar_978);
                         iccMax2c__result_adt_t ivar_979;
                         ivar_979 = (iccMax2c__result_adt_t)iccMax2c__parseOperation((uint64_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (iccMax2c__signatureMap_t)ivar_3, (uint64_t)ivar_983, (uint64_t)ivar_984, (iccMax2c__window_t)ivar_932);
                         //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                         result = (iccMax2c__result_adt_t)ivar_979;
                         if (result != NULL) result->count++;
                         release_iccMax2c__result_adt(ivar_979);
};
} else {
                       
                        release_iccMax2c__result_adt(ivar_843);
                        release_iccMax2c__signatureMap(ivar_3);
                        release_bytestrings__bytestring(ivar_2);
                        release_iccMax2c__window(ivar_6);
                        uint8_t ivar_990;
                        ivar_990 = (uint8_t)iccMax2c__Overflow();
                        uint8_t ivar_992;
                        ivar_992 = (uint8_t)92;
                        iccMax2c__result_adt_t ivar_989;
                        ivar_989 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_990, (uint32_t)ivar_19, (uint8_t)ivar_992);
                        //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                        result = (iccMax2c__result_adt_t)ivar_989;
                        if (result != NULL) result->count++;
                        release_iccMax2c__result_adt(ivar_989);
};
};
} else {
                     
                      release_iccMax2c__signatureMap(ivar_3);
                      release_bytestrings__bytestring(ivar_2);
                      release_iccMax2c__window(ivar_6);
                      uint8_t ivar_997;
                      ivar_997 = (uint8_t)iccMax2c__Overflow();
                      uint8_t ivar_999;
                      ivar_999 = (uint8_t)93;
                      iccMax2c__result_adt_t ivar_996;
                      ivar_996 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_997, (uint32_t)ivar_19, (uint8_t)ivar_999);
                      //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                      result = (iccMax2c__result_adt_t)ivar_996;
                      if (result != NULL) result->count++;
                      release_iccMax2c__result_adt(ivar_996);
};
} else {
                    
                     bool_t ivar_1000;
                     uint32_t ivar_1002;
                     mpz_ptr_t ivar_1015;
                     mpq_ptr_t ivar_1005;
                     mpz_t tmp268618;
                     mpz_init(tmp268618);
                     mpz_set_ui(tmp268618, (uint64_t)ivar_7);
                     mpz_sub_ui(tmp268618, tmp268618, (uint64_t)ivar_19);
                     mpq_mk_set_z(ivar_1005, tmp268618);
                     mpz_clear(tmp268618);
                     uint8_t ivar_1006;
                     ivar_1006 = (uint8_t)8;
                     mpz_t tmp268619;
                     mpz_init(tmp268619);
                     mpz_set_q(tmp268619, ivar_1005);
                     mpz_mk_sub_ui(ivar_1015, tmp268619, (uint64_t)ivar_1006);
                     mpz_clear(tmp268619);
                     uint32_t ivar_1012;
                     //copying to uint32 from mpz;
                     ivar_1012 = (uint32_t)mpz_get_ui(ivar_1015);
                     mpz_clear(ivar_1015);
                     uint32_t ivar_1013;
                     ivar_1013 = (uint32_t)8;
                     ivar_1002 = (uint32_t)integertypes__u32div((uint32_t)ivar_1012, (uint32_t)ivar_1013);
                     ivar_1000 = (ivar_763 <= ivar_1002);
                     if (ivar_1000){              
                      /* Twindow */ iccMax2c__window_t ivar_1017;
                      uint32_t ivar_1018;
                      uint64_t ivar_1020;
                      uint8_t ivar_1023;
                      ivar_1023 = (uint8_t)8;
                      ivar_1020 = (uint64_t)(ivar_19 + ivar_1023);
                      uint64_t ivar_1021;
                      uint8_t ivar_1025;
                      ivar_1025 = (uint8_t)8;
                      ivar_1021 = (uint64_t)((uint64_t)ivar_1025 * (uint64_t)ivar_763);
                      ivar_1018 = (uint32_t)(ivar_1020 + ivar_1021);
                      uint32_t ivar_1019;
                      uint8_t ivar_1030;
                      ivar_1030 = (uint8_t)8;
                      ivar_1019 = (uint32_t)(ivar_19 + ivar_1030);
                      iccMax2c__window_t ivar_1036;
                      {ivar_1036 = (iccMax2c__window_t)copy_iccMax2c__window(ivar_6); ivar_1036 = (iccMax2c__window_t)update_iccMax2c__window_endpos(ivar_1036, ivar_1018);};
                      iccMax2c__window_t ivar_1040;
                      ivar_1040 = (iccMax2c__window_t)update_iccMax2c__window_startpos(ivar_1036, ivar_1019);
                      //copying to iccMax2c__window from iccMax2c__window;
                      ivar_1017 = (iccMax2c__window_t)ivar_1040;
                      if (ivar_1017 != NULL) ivar_1017->count++;
                      release_iccMax2c__window(ivar_1040);
                      /* Tval */ iccMax2c__result_adt_t ivar_1041;
                      iccMax2c__result_adt_t ivar_1048;
                      ivar_2->count++;
                      ivar_3->count++;
                      ivar_1048 = (iccMax2c__result_adt_t)iccMax2c__parseOperation((uint64_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (iccMax2c__signatureMap_t)ivar_3, (uint64_t)ivar_116, (uint64_t)ivar_105, (iccMax2c__window_t)ivar_1017);
                      //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                      ivar_1041 = (iccMax2c__result_adt_t)ivar_1048;
                      if (ivar_1041 != NULL) ivar_1041->count++;
                      release_iccMax2c__result_adt(ivar_1048);
                      bool_t ivar_1055;
                      ivar_1041->count++;
                      ivar_1055 = (bool_t)r_iccMax2c__errorp((iccMax2c__result_adt_t)ivar_1041);
                      if (ivar_1055){               
                       release_iccMax2c__signatureMap(ivar_3);
                       release_bytestrings__bytestring(ivar_2);
                       release_iccMax2c__window(ivar_6);
                       //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                       result = (iccMax2c__result_adt_t)ivar_1041;
                       if (result != NULL) result->count++;
                       release_iccMax2c__result_adt(ivar_1041);
} else {
                      
                       /* w1 */ iccMax2c__window_t ivar_1059;
                       uint32_t ivar_1060;
                       uint64_t ivar_1062;
                       uint8_t ivar_1063;
                       ivar_1063 = (uint8_t)8;
                       uint64_t ivar_1064;
                       uint8_t ivar_1066;
                       ivar_1066 = (uint8_t)1;
                       ivar_1064 = (uint64_t)(ivar_763 + ivar_1066);
                       ivar_1062 = (uint64_t)((uint64_t)ivar_1063 * (uint64_t)ivar_1064);
                       ivar_1060 = (uint32_t)(ivar_19 + ivar_1062);
                       iccMax2c__window_t ivar_1074;
                       ivar_1074 = (iccMax2c__window_t)update_iccMax2c__window_startpos(ivar_6, ivar_1060);
                       //copying to iccMax2c__window from iccMax2c__window;
                       ivar_1059 = (iccMax2c__window_t)ivar_1074;
                       if (ivar_1059 != NULL) ivar_1059->count++;
                       release_iccMax2c__window(ivar_1074);
                       uint64_t ivar_1091;
                       ivar_1041->count++;
                       ivar_1091 = (uint64_t)iccMax2c__result_adt_vmax((iccMax2c__result_adt_t)ivar_1041);
                       uint64_t ivar_1092;
                       ivar_1092 = (uint64_t)iccMax2c__result_adt_vmin((iccMax2c__result_adt_t)ivar_1041);
                       iccMax2c__result_adt_t ivar_1087;
                       ivar_1087 = (iccMax2c__result_adt_t)iccMax2c__parseOperation((uint64_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (iccMax2c__signatureMap_t)ivar_3, (uint64_t)ivar_1091, (uint64_t)ivar_1092, (iccMax2c__window_t)ivar_1059);
                       //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                       result = (iccMax2c__result_adt_t)ivar_1087;
                       if (result != NULL) result->count++;
                       release_iccMax2c__result_adt(ivar_1087);
};
} else {
                     
                      release_iccMax2c__signatureMap(ivar_3);
                      release_bytestrings__bytestring(ivar_2);
                      release_iccMax2c__window(ivar_6);
                      uint8_t ivar_1098;
                      ivar_1098 = (uint8_t)iccMax2c__Underflow();
                      uint8_t ivar_1100;
                      ivar_1100 = (uint8_t)94;
                      iccMax2c__result_adt_t ivar_1097;
                      ivar_1097 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_1098, (uint32_t)ivar_19, (uint8_t)ivar_1100);
                      //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                      result = (iccMax2c__result_adt_t)ivar_1097;
                      if (result != NULL) result->count++;
                      release_iccMax2c__result_adt(ivar_1097);
};
};
} else {
                   
                    release_iccMax2c__signatureMap(ivar_3);
                    release_bytestrings__bytestring(ivar_2);
                    release_iccMax2c__window(ivar_6);
                    uint8_t ivar_1105;
                    ivar_1105 = (uint8_t)iccMax2c__DefaultError();
                    uint8_t ivar_1107;
                    ivar_1107 = (uint8_t)100;
                    iccMax2c__result_adt_t ivar_1104;
                    ivar_1104 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_1105, (uint32_t)ivar_19, (uint8_t)ivar_1107);
                    //copying to iccMax2c__result_adt from iccMax2c__result_adt;
                    result = (iccMax2c__result_adt_t)ivar_1104;
                    if (result != NULL) result->count++;
                    release_iccMax2c__result_adt(ivar_1104);
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

extern iccMax2c__result_adt_t iccMax2c__parsefunc(uint64_t ivar_1, bytestrings__bytestring_t ivar_2, iccMax2c__signatureMap_t ivar_3, iccMax2c__window_t ivar_5){
        iccMax2c__result_adt_t  result;
        /* endpos */ uint32_t ivar_6;
        ivar_6 = (uint32_t)ivar_5->endpos;
        /* startpos */ uint32_t ivar_8;
        ivar_8 = (uint32_t)ivar_5->startpos;
        bool_t ivar_12;
        uint32_t ivar_14;
        ivar_14 = (uint32_t)ivar_2->length;
        ivar_12 = (ivar_6 > ivar_14);
        if (ivar_12){ 
             release_iccMax2c__window(ivar_5);
             release_iccMax2c__signatureMap(ivar_3);
             uint8_t ivar_22;
             ivar_22 = (uint8_t)iccMax2c__UnexpectedEOF();
             uint32_t ivar_23;
             ivar_23 = (uint32_t)ivar_2->length;
             release_bytestrings__bytestring(ivar_2);
             uint8_t ivar_24;
             ivar_24 = (uint8_t)0;
             iccMax2c__result_adt_t ivar_21;
             ivar_21 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_22, (uint32_t)ivar_23, (uint8_t)ivar_24);
             //copying to iccMax2c__result_adt from iccMax2c__result_adt;
             result = (iccMax2c__result_adt_t)ivar_21;
             if (result != NULL) result->count++;
             release_iccMax2c__result_adt(ivar_21);
} else {
        
             bool_t ivar_25;
             uint8_t ivar_27;
             ivar_27 = (uint8_t)12;
             ivar_25 = (ivar_6 < ivar_27);
             if (ivar_25){  
           release_iccMax2c__window(ivar_5);
           release_iccMax2c__signatureMap(ivar_3);
           release_bytestrings__bytestring(ivar_2);
           uint8_t ivar_33;
           ivar_33 = (uint8_t)iccMax2c__UnexpectedEOF();
           uint8_t ivar_35;
           ivar_35 = (uint8_t)0;
           iccMax2c__result_adt_t ivar_32;
           ivar_32 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_33, (uint32_t)ivar_8, (uint8_t)ivar_35);
           //copying to iccMax2c__result_adt from iccMax2c__result_adt;
           result = (iccMax2c__result_adt_t)ivar_32;
           if (result != NULL) result->count++;
           release_iccMax2c__result_adt(ivar_32);
} else {
             
           bool_t ivar_36;
           int64_t ivar_37;
           uint8_t ivar_40;
           ivar_40 = (uint8_t)12;
           ivar_37 = (int64_t)((uint64_t)ivar_6 - (uint64_t)ivar_40);
           if ((ivar_37 < 0)){   
           ivar_36 = true;
} else {
           
           ivar_36 = ((uint32_t)ivar_37 <= ivar_8);
};
           if (ivar_36){   
           release_iccMax2c__window(ivar_5);
           release_iccMax2c__signatureMap(ivar_3);
           release_bytestrings__bytestring(ivar_2);
           uint8_t ivar_47;
           ivar_47 = (uint8_t)iccMax2c__UnexpectedEOF();
           uint8_t ivar_49;
           ivar_49 = (uint8_t)0;
           iccMax2c__result_adt_t ivar_46;
           ivar_46 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_47, (uint32_t)ivar_8, (uint8_t)ivar_49);
           //copying to iccMax2c__result_adt from iccMax2c__result_adt;
           result = (iccMax2c__result_adt_t)ivar_46;
           if (result != NULL) result->count++;
           release_iccMax2c__result_adt(ivar_46);
} else {
           
           /* tag */ uint32_t ivar_53;
           ivar_2->count++;
           ivar_53 = (uint32_t)iccMax2c__readU32((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_8);
           /* S */ uint32_t ivar_59;
           uint32_t ivar_67;
           uint8_t ivar_63;
           ivar_63 = (uint8_t)4;
           ivar_67 = (uint32_t)(ivar_8 + ivar_63);
           ivar_2->count++;
           ivar_59 = (uint32_t)iccMax2c__readU32((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_67);
           /* N */ uint32_t ivar_68;
           uint32_t ivar_76;
           uint8_t ivar_72;
           ivar_72 = (uint8_t)8;
           ivar_76 = (uint32_t)(ivar_8 + ivar_72);
           ivar_2->count++;
           ivar_68 = (uint32_t)iccMax2c__readU32((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_76);
           mpq_ptr_t ivar_166;
           uint8_t ivar_79;
           ivar_79 = (uint8_t)12;
           mpz_t tmp268624;
           mpz_init(tmp268624);
           mpz_set_ui(tmp268624, (uint64_t)ivar_8);
           mpz_add_ui(tmp268624, tmp268624, (uint64_t)ivar_79);
           mpq_mk_set_z(ivar_166, tmp268624);
           mpz_clear(tmp268624);
           /* B */ uint32_t ivar_77;
           //copying to uint32 from mpq;
           ivar_77 = (uint32_t)mpq_get_ui(ivar_166);
           mpq_clear(ivar_166);
           bool_t ivar_81;
           uint32_t ivar_83;
           mpq_ptr_t ivar_93;
           mpz_t tmp268625;
           mpz_init(tmp268625);
           mpz_set_ui(tmp268625, (uint64_t)ivar_6);
           mpz_sub_ui(tmp268625, tmp268625, (uint64_t)ivar_77);
           mpq_mk_set_z(ivar_93, tmp268625);
           mpz_clear(tmp268625);
           uint32_t ivar_90;
           //copying to uint32 from mpq;
           ivar_90 = (uint32_t)mpq_get_ui(ivar_93);
           mpq_clear(ivar_93);
           uint32_t ivar_91;
           ivar_91 = (uint32_t)8;
           ivar_83 = (uint32_t)integertypes__u32div((uint32_t)ivar_90, (uint32_t)ivar_91);
           ivar_81 = (ivar_68 > ivar_83);
           if (ivar_81){    
            release_iccMax2c__window(ivar_5);
            release_iccMax2c__signatureMap(ivar_3);
            release_bytestrings__bytestring(ivar_2);
            uint8_t ivar_99;
            ivar_99 = (uint8_t)iccMax2c__UnexpectedEOF();
            uint8_t ivar_101;
            ivar_101 = (uint8_t)0;
            iccMax2c__result_adt_t ivar_98;
            ivar_98 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_99, (uint32_t)ivar_8, (uint8_t)ivar_101);
            //copying to iccMax2c__result_adt from iccMax2c__result_adt;
            result = (iccMax2c__result_adt_t)ivar_98;
            if (result != NULL) result->count++;
            release_iccMax2c__result_adt(ivar_98);
} else {
           
            /* E */ mpz_ptr_t ivar_102;
            uint64_t ivar_104;
            uint8_t ivar_105;
            ivar_105 = (uint8_t)8;
            ivar_104 = (uint64_t)((uint64_t)ivar_105 * (uint64_t)ivar_68);
            mpz_mk_set_ui(ivar_102, (uint64_t)ivar_77);
            mpz_add_ui(ivar_102, ivar_102, (uint64_t)ivar_104);
            bool_t ivar_109;
            uint32_t ivar_111;
            ivar_111 = (uint32_t)1718972003;
            ivar_109 = (ivar_53 == ivar_111);
            if (ivar_109){     
             bool_t ivar_113;
             uint8_t ivar_115;
             ivar_115 = (uint8_t)0;
             ivar_113 = (ivar_59 == ivar_115);
             if (ivar_113){      
              bool_t ivar_117;
              mpz_ptr_t ivar_118;
              //copying to mpz from mpz;
              mpz_mk_set(ivar_118, ivar_102);
              int64_t tmp268626 = mpz_cmp_ui(ivar_118, ivar_6);
              ivar_117 = (tmp268626 <= 0);
              if (ivar_117){       
               uint64_t ivar_142;
               ivar_142 = (uint64_t)0;
               uint64_t ivar_143;
               ivar_143 = (uint64_t)0;
               iccMax2c__window_t ivar_144;
               uint32_t ivar_127;
               //copying to uint32 from mpz;
               ivar_127 = (uint32_t)mpz_get_ui(ivar_102);
               mpz_clear(ivar_102);
               iccMax2c__window_t ivar_133;
               ivar_133 = (iccMax2c__window_t)update_iccMax2c__window_endpos(ivar_5, ivar_127);
               iccMax2c__window_t ivar_137;
               ivar_137 = (iccMax2c__window_t)update_iccMax2c__window_startpos(ivar_133, ivar_77);
               //copying to iccMax2c__window from iccMax2c__window;
               ivar_144 = (iccMax2c__window_t)ivar_137;
               if (ivar_144 != NULL) ivar_144->count++;
               release_iccMax2c__window(ivar_137);
               iccMax2c__result_adt_t ivar_138;
               ivar_138 = (iccMax2c__result_adt_t)iccMax2c__parseOperation((uint64_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (iccMax2c__signatureMap_t)ivar_3, (uint64_t)ivar_142, (uint64_t)ivar_143, (iccMax2c__window_t)ivar_144);
               //copying to iccMax2c__result_adt from iccMax2c__result_adt;
               result = (iccMax2c__result_adt_t)ivar_138;
               if (result != NULL) result->count++;
               release_iccMax2c__result_adt(ivar_138);
} else {
              
               release_bytestrings__bytestring(ivar_2);
               release_iccMax2c__signatureMap(ivar_3);
               release_iccMax2c__window(ivar_5);
               uint8_t ivar_149;
               ivar_149 = (uint8_t)iccMax2c__UnexpectedEOF();
               uint8_t ivar_151;
               ivar_151 = (uint8_t)0;
               iccMax2c__result_adt_t ivar_148;
               ivar_148 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_149, (uint32_t)ivar_8, (uint8_t)ivar_151);
               //copying to iccMax2c__result_adt from iccMax2c__result_adt;
               result = (iccMax2c__result_adt_t)ivar_148;
               if (result != NULL) result->count++;
               release_iccMax2c__result_adt(ivar_148);
};
} else {
             
              release_iccMax2c__window(ivar_5);
              release_iccMax2c__signatureMap(ivar_3);
              release_bytestrings__bytestring(ivar_2);
              uint8_t ivar_156;
              ivar_156 = (uint8_t)iccMax2c__nonZero();
              uint8_t ivar_158;
              ivar_158 = (uint8_t)0;
              iccMax2c__result_adt_t ivar_155;
              ivar_155 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_156, (uint32_t)ivar_8, (uint8_t)ivar_158);
              //copying to iccMax2c__result_adt from iccMax2c__result_adt;
              result = (iccMax2c__result_adt_t)ivar_155;
              if (result != NULL) result->count++;
              release_iccMax2c__result_adt(ivar_155);
};
} else {
            
             release_iccMax2c__window(ivar_5);
             release_iccMax2c__signatureMap(ivar_3);
             release_bytestrings__bytestring(ivar_2);
             uint8_t ivar_163;
             ivar_163 = (uint8_t)iccMax2c__badTag();
             uint8_t ivar_165;
             ivar_165 = (uint8_t)0;
             iccMax2c__result_adt_t ivar_162;
             ivar_162 = (iccMax2c__result_adt_t)iccMax2c__error((uint8_t)ivar_163, (uint32_t)ivar_8, (uint8_t)ivar_165);
             //copying to iccMax2c__result_adt from iccMax2c__result_adt;
             result = (iccMax2c__result_adt_t)ivar_162;
             if (result != NULL) result->count++;
             release_iccMax2c__result_adt(ivar_162);
};
};
};
};
};

        
        return result;
}

extern bytestrings__bytestring_t iccMax2c__iccteststring1(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_11;
        iccMax2c_record_40_t ivar_9;
        uint32_t len268629 = 632;
        uint32_t characters268630[632] = {54, 54, 55, 53, 54, 101, 54, 51, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 50, 54, 54, 57, 54, 101, 50, 48, 50, 48, 48, 48, 48, 48, 48, 48, 48, 50, 54, 52, 54, 49, 55, 52, 54, 49, 52, 48, 48, 99, 99, 48, 48, 48, 54, 55, 54, 49, 54, 100, 54, 49, 48, 48, 48, 50, 48, 48, 48, 48, 55, 52, 55, 51, 54, 49, 55, 54, 48, 48, 48, 48, 48, 48, 48, 50, 54, 52, 54, 49, 55, 52, 54, 49, 48, 48, 48, 48, 48, 48, 48, 48, 54, 52, 54, 49, 55, 52, 54, 49, 48, 48, 48, 48, 48, 48, 48, 48, 54, 52, 54, 49, 55, 52, 54, 49, 48, 48, 48, 48, 48, 48, 48, 48, 54, 53, 55, 49, 50, 48, 50, 48, 48, 48, 48, 50, 48, 48, 48, 48, 55, 51, 55, 53, 54, 100, 50, 48, 48, 48, 48, 49, 48, 48, 48, 48, 54, 52, 54, 49, 55, 52, 54, 49, 52, 48, 52, 48, 48, 48, 48, 48, 54, 53, 55, 49, 50, 48, 50, 48, 48, 48, 48, 48, 48, 48, 48, 48, 54, 57, 54, 54, 50, 48, 50, 48, 48, 48, 48, 48, 48, 48, 48, 55, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 56, 48, 48, 48, 48, 48, 54, 52, 54, 49, 55, 52, 54, 49, 52, 48, 48, 48, 48, 48, 48, 48, 55, 51, 55, 53, 54, 100, 50, 48, 48, 48, 48, 50, 48, 48, 48, 48, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 56, 48, 48, 48, 48, 48, 55, 52, 55, 48, 55, 53, 55, 52, 48, 48, 48, 55, 48, 48, 48, 48, 55, 48, 54, 57, 50, 48, 50, 48, 48, 48, 48, 48, 48, 48, 48, 48, 55, 48, 54, 102, 55, 48, 50, 48, 48, 48, 48, 48, 48, 48, 48, 48, 55, 52, 54, 55, 54, 53, 55, 52, 48, 48, 48, 48, 48, 48, 48, 50, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 49, 51, 97, 48, 56, 101, 54, 52, 54, 49, 55, 52, 54, 49, 51, 101, 51, 101, 48, 51, 48, 100, 54, 52, 54, 49, 55, 52, 54, 49, 51, 101, 52, 48, 98, 101, 99, 55, 54, 100, 55, 53, 54, 99, 50, 48, 48, 48, 48, 50, 48, 48, 48, 48, 55, 51, 55, 53, 54, 100, 50, 48, 48, 48, 48, 49, 48, 48, 48, 48, 55, 52, 54, 55, 54, 53, 55, 52, 48, 48, 48, 48, 48, 48, 48, 50, 54, 52, 54, 49, 55, 52, 54, 49, 51, 101, 57, 56, 51, 100, 53, 99, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 50, 48, 57, 97, 100, 49, 54, 52, 54, 49, 55, 52, 54, 49, 51, 100, 57, 97, 51, 48, 55, 102, 54, 100, 55, 53, 54, 99, 50, 48, 48, 48, 48, 50, 48, 48, 48, 48, 55, 51, 55, 53, 54, 100, 50, 48, 48, 48, 48, 49, 48, 48, 48, 48, 55, 52, 54, 55, 54, 53, 55, 52, 48, 48, 48, 48, 48, 48, 48, 50, 54, 52, 54, 49, 55, 52, 54, 49, 51, 99, 100, 100, 55, 52, 53, 57, 54, 52, 54, 49, 55, 52, 54, 49, 51, 100, 57, 48, 99, 53, 48, 102, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 55, 100, 99, 56, 97, 49, 54, 100, 55, 53, 54, 99, 50, 48, 48, 48, 48, 50, 48, 48, 48, 48, 55, 51, 55, 53, 54, 100, 50, 48, 48, 48, 48, 49, 48, 48, 48, 48, 54, 102, 55, 53, 55, 52, 50, 48, 48, 48, 48, 48, 48, 48, 48, 50};
        stringliteral_t string268628 = mk_string(632, characters268630);
        ivar_9 = (iccMax2c_record_40_t)strings__make_string(len268629, string268628);
        strings__string_t ivar_7;
        //copying to strings__string from iccMax2c_record_40;
        ivar_7 = (strings__string_t)ivar_9;
        if (ivar_7 != NULL) ivar_7->count++;
        release_iccMax2c_record_40(ivar_9);
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_6;
        if (ivar_11 != NULL) ivar_11->count++;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)hex__hex2bytestring((bytestrings__bytestring_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_10;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_10);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t iccMax2c__iccteststring2(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_11;
        iccMax2c_record_40_t ivar_9;
        uint32_t len268633 = 120;
        uint32_t characters268634[120] = {54, 54, 55, 53, 54, 101, 54, 51, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 54, 54, 57, 54, 101, 50, 48, 50, 48, 48, 48, 48, 48, 48, 48, 48, 50, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 56, 48, 48, 48, 48, 48, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 56, 48, 48, 48, 48, 48, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 56, 48, 48, 48, 48, 48, 54, 49, 54, 52, 54, 52, 50, 48, 48, 48, 48, 50, 48, 48, 48, 48, 54, 102, 55, 53, 55, 52, 50, 48, 48, 48, 48, 48, 48, 48, 48, 50};
        stringliteral_t string268632 = mk_string(120, characters268634);
        ivar_9 = (iccMax2c_record_40_t)strings__make_string(len268633, string268632);
        strings__string_t ivar_7;
        //copying to strings__string from iccMax2c_record_40;
        ivar_7 = (strings__string_t)ivar_9;
        if (ivar_7 != NULL) ivar_7->count++;
        release_iccMax2c_record_40(ivar_9);
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_6;
        if (ivar_11 != NULL) ivar_11->count++;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)hex__hex2bytestring((bytestrings__bytestring_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_10;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_10);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t iccMax2c__iccteststring3(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_11;
        iccMax2c_record_40_t ivar_9;
        uint32_t len268637 = 632;
        uint32_t characters268638[632] = {54, 54, 55, 53, 54, 101, 54, 51, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 50, 54, 54, 57, 54, 101, 50, 48, 50, 48, 48, 48, 48, 48, 48, 48, 48, 50, 55, 52, 55, 51, 54, 49, 55, 54, 48, 48, 48, 48, 48, 48, 48, 50, 54, 52, 54, 49, 55, 52, 54, 49, 48, 48, 48, 48, 48, 48, 48, 48, 54, 52, 54, 49, 55, 52, 54, 49, 48, 48, 48, 48, 48, 48, 48, 48, 54, 52, 54, 49, 55, 52, 54, 49, 48, 48, 48, 48, 48, 48, 48, 48, 54, 53, 55, 49, 50, 48, 50, 48, 48, 48, 48, 50, 48, 48, 48, 48, 55, 51, 55, 53, 54, 100, 50, 48, 48, 48, 48, 49, 48, 48, 48, 48, 54, 52, 54, 49, 55, 52, 54, 49, 52, 48, 52, 48, 48, 48, 48, 48, 54, 53, 55, 49, 50, 48, 50, 48, 48, 48, 48, 48, 48, 48, 48, 48, 54, 57, 54, 54, 50, 48, 50, 48, 48, 48, 48, 48, 48, 48, 48, 55, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 56, 48, 48, 48, 48, 48, 54, 52, 54, 49, 55, 52, 54, 49, 52, 48, 48, 48, 48, 48, 48, 48, 55, 51, 55, 53, 54, 100, 50, 48, 48, 48, 48, 50, 48, 48, 48, 48, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 56, 48, 48, 48, 48, 48, 55, 52, 55, 48, 55, 53, 55, 52, 48, 48, 48, 55, 48, 48, 48, 48, 55, 48, 54, 57, 50, 48, 50, 48, 48, 48, 48, 48, 48, 48, 48, 48, 55, 48, 54, 102, 55, 48, 50, 48, 48, 48, 48, 48, 48, 48, 48, 48, 55, 52, 54, 55, 54, 53, 55, 52, 48, 48, 48, 48, 48, 48, 48, 50, 54, 52, 54, 49, 55, 52, 54, 49, 52, 48, 48, 50, 97, 57, 54, 57, 54, 52, 54, 49, 55, 52, 54, 49, 98, 102, 49, 48, 97, 52, 55, 102, 54, 52, 54, 49, 55, 52, 54, 49, 98, 101, 98, 48, 56, 48, 55, 51, 54, 100, 55, 53, 54, 99, 50, 48, 48, 48, 48, 50, 48, 48, 48, 48, 55, 51, 55, 53, 54, 100, 50, 48, 48, 48, 48, 49, 48, 48, 48, 48, 54, 57, 54, 101, 50, 48, 50, 48, 48, 48, 48, 48, 48, 48, 48, 50, 54, 52, 54, 49, 55, 52, 54, 49, 98, 102, 55, 56, 50, 48, 49, 100, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 102, 48, 49, 102, 99, 57, 54, 52, 54, 49, 55, 52, 54, 49, 51, 100, 50, 97, 51, 97, 100, 50, 54, 100, 55, 53, 54, 99, 50, 48, 48, 48, 48, 50, 48, 48, 48, 48, 55, 51, 55, 53, 54, 100, 50, 48, 48, 48, 48, 49, 48, 48, 48, 48, 54, 57, 54, 101, 50, 48, 50, 48, 48, 48, 48, 48, 48, 48, 48, 50, 54, 52, 54, 49, 55, 52, 54, 49, 51, 99, 53, 99, 51, 51, 55, 50, 54, 52, 54, 49, 55, 52, 54, 49, 98, 100, 102, 50, 54, 54, 98, 97, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 56, 49, 102, 49, 49, 55, 54, 100, 55, 53, 54, 99, 50, 48, 48, 48, 48, 50, 48, 48, 48, 48, 55, 51, 55, 53, 54, 100, 50, 48, 48, 48, 48, 49, 48, 48, 48, 48, 54, 52, 54, 49, 55, 52, 54, 49, 51, 101, 101, 56, 99, 102, 53, 57, 54, 55, 54, 49, 54, 100, 54, 49, 48, 48, 48, 50, 48, 48, 48, 48, 54, 102, 55, 53, 55, 52, 50, 48, 48, 48, 48, 48, 48, 48, 48, 50};
        stringliteral_t string268636 = mk_string(632, characters268638);
        ivar_9 = (iccMax2c_record_40_t)strings__make_string(len268637, string268636);
        strings__string_t ivar_7;
        //copying to strings__string from iccMax2c_record_40;
        ivar_7 = (strings__string_t)ivar_9;
        if (ivar_7 != NULL) ivar_7->count++;
        release_iccMax2c_record_40(ivar_9);
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_6;
        if (ivar_11 != NULL) ivar_11->count++;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)hex__hex2bytestring((bytestrings__bytestring_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_10;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_10);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t iccMax2c__iccteststring4(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_11;
        iccMax2c_record_40_t ivar_9;
        uint32_t len268641 = 120;
        uint32_t characters268642[120] = {54, 54, 55, 53, 54, 101, 54, 51, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 54, 54, 57, 54, 101, 50, 48, 50, 48, 48, 48, 48, 48, 48, 48, 48, 50, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 56, 48, 48, 48, 48, 48, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 56, 48, 48, 48, 48, 48, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 56, 48, 48, 48, 48, 48, 54, 49, 54, 52, 54, 52, 50, 48, 48, 48, 48, 50, 48, 48, 48, 48, 54, 102, 55, 53, 55, 52, 50, 48, 48, 48, 48, 48, 48, 48, 48, 50};
        stringliteral_t string268640 = mk_string(120, characters268642);
        ivar_9 = (iccMax2c_record_40_t)strings__make_string(len268641, string268640);
        strings__string_t ivar_7;
        //copying to strings__string from iccMax2c_record_40;
        ivar_7 = (strings__string_t)ivar_9;
        if (ivar_7 != NULL) ivar_7->count++;
        release_iccMax2c_record_40(ivar_9);
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_6;
        if (ivar_11 != NULL) ivar_11->count++;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)hex__hex2bytestring((bytestrings__bytestring_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_10;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_10);

        defined = true;};
        
        return result;
}

extern iccMax2c__signature_adt_t iccMax2c__subelemsig0(uint32_t ivar_1){
        iccMax2c__signature_adt_t  result;
        result = (iccMax2c__signature_adt_t)iccMax2c__undefined();
        if (result != NULL) result->count++;

        
        return result;
}

extern iccMax2c__result_adt_t iccMax2c__test1(void){
        iccMax2c__result_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_10;
        ivar_10 = (uint64_t)65535;
        bytestrings__bytestring_t ivar_11;
        ivar_11 = (bytestrings__bytestring_t)iccMax2c__iccteststring1();
        if (ivar_11 != NULL) ivar_11->count++;
        iccMax2c__signatureMap_t ivar_12;
        iccMax2c_closure_41_t cl268643;
        cl268643 = new_iccMax2c_closure_41();
        ivar_12 = (iccMax2c__signatureMap_t)cl268643;
        iccMax2c__window_t ivar_13;
        uint32_t ivar_7;
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)iccMax2c__iccteststring1();
        if (ivar_6 != NULL) ivar_6->count++;
        ivar_7 = (uint32_t)ivar_6->length;
        release_bytestrings__bytestring(ivar_6);
        uint8_t ivar_8;
        ivar_8 = (uint8_t)0;
        ivar_13 = (iccMax2c__window_t)new_iccMax2c_record_42();;
        ivar_13->endpos = (uint32_t)ivar_7;
        ivar_13->startpos = (uint32_t)ivar_8;
        iccMax2c__result_adt_t ivar_9;
        ivar_9 = (iccMax2c__result_adt_t)iccMax2c__parsefunc((uint64_t)ivar_10, (bytestrings__bytestring_t)ivar_11, (iccMax2c__signatureMap_t)ivar_12, (iccMax2c__window_t)ivar_13);
        //copying to iccMax2c__result_adt from iccMax2c__result_adt;
        result = (iccMax2c__result_adt_t)ivar_9;
        if (result != NULL) result->count++;
        release_iccMax2c__result_adt(ivar_9);

        defined = true;};
        
        return result;
}

extern iccMax2c__result_adt_t iccMax2c__test2(void){
        iccMax2c__result_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_10;
        ivar_10 = (uint64_t)65535;
        bytestrings__bytestring_t ivar_11;
        ivar_11 = (bytestrings__bytestring_t)iccMax2c__iccteststring2();
        if (ivar_11 != NULL) ivar_11->count++;
        iccMax2c__signatureMap_t ivar_12;
        iccMax2c_closure_43_t cl268644;
        cl268644 = new_iccMax2c_closure_43();
        ivar_12 = (iccMax2c__signatureMap_t)cl268644;
        iccMax2c__window_t ivar_13;
        uint32_t ivar_7;
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)iccMax2c__iccteststring2();
        if (ivar_6 != NULL) ivar_6->count++;
        ivar_7 = (uint32_t)ivar_6->length;
        release_bytestrings__bytestring(ivar_6);
        uint8_t ivar_8;
        ivar_8 = (uint8_t)0;
        ivar_13 = (iccMax2c__window_t)new_iccMax2c_record_42();;
        ivar_13->endpos = (uint32_t)ivar_7;
        ivar_13->startpos = (uint32_t)ivar_8;
        iccMax2c__result_adt_t ivar_9;
        ivar_9 = (iccMax2c__result_adt_t)iccMax2c__parsefunc((uint64_t)ivar_10, (bytestrings__bytestring_t)ivar_11, (iccMax2c__signatureMap_t)ivar_12, (iccMax2c__window_t)ivar_13);
        //copying to iccMax2c__result_adt from iccMax2c__result_adt;
        result = (iccMax2c__result_adt_t)ivar_9;
        if (result != NULL) result->count++;
        release_iccMax2c__result_adt(ivar_9);

        defined = true;};
        
        return result;
}

extern iccMax2c__result_adt_t iccMax2c__test3(void){
        iccMax2c__result_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_10;
        ivar_10 = (uint64_t)65535;
        bytestrings__bytestring_t ivar_11;
        ivar_11 = (bytestrings__bytestring_t)iccMax2c__iccteststring3();
        if (ivar_11 != NULL) ivar_11->count++;
        iccMax2c__signatureMap_t ivar_12;
        iccMax2c_closure_44_t cl268645;
        cl268645 = new_iccMax2c_closure_44();
        ivar_12 = (iccMax2c__signatureMap_t)cl268645;
        iccMax2c__window_t ivar_13;
        uint32_t ivar_7;
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)iccMax2c__iccteststring3();
        if (ivar_6 != NULL) ivar_6->count++;
        ivar_7 = (uint32_t)ivar_6->length;
        release_bytestrings__bytestring(ivar_6);
        uint8_t ivar_8;
        ivar_8 = (uint8_t)0;
        ivar_13 = (iccMax2c__window_t)new_iccMax2c_record_42();;
        ivar_13->endpos = (uint32_t)ivar_7;
        ivar_13->startpos = (uint32_t)ivar_8;
        iccMax2c__result_adt_t ivar_9;
        ivar_9 = (iccMax2c__result_adt_t)iccMax2c__parsefunc((uint64_t)ivar_10, (bytestrings__bytestring_t)ivar_11, (iccMax2c__signatureMap_t)ivar_12, (iccMax2c__window_t)ivar_13);
        //copying to iccMax2c__result_adt from iccMax2c__result_adt;
        result = (iccMax2c__result_adt_t)ivar_9;
        if (result != NULL) result->count++;
        release_iccMax2c__result_adt(ivar_9);

        defined = true;};
        
        return result;
}

extern iccMax2c__result_adt_t iccMax2c__test4(void){
        iccMax2c__result_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_10;
        ivar_10 = (uint64_t)65535;
        bytestrings__bytestring_t ivar_11;
        ivar_11 = (bytestrings__bytestring_t)iccMax2c__iccteststring4();
        if (ivar_11 != NULL) ivar_11->count++;
        iccMax2c__signatureMap_t ivar_12;
        iccMax2c_closure_45_t cl268646;
        cl268646 = new_iccMax2c_closure_45();
        ivar_12 = (iccMax2c__signatureMap_t)cl268646;
        iccMax2c__window_t ivar_13;
        uint32_t ivar_7;
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)iccMax2c__iccteststring4();
        if (ivar_6 != NULL) ivar_6->count++;
        ivar_7 = (uint32_t)ivar_6->length;
        release_bytestrings__bytestring(ivar_6);
        uint8_t ivar_8;
        ivar_8 = (uint8_t)0;
        ivar_13 = (iccMax2c__window_t)new_iccMax2c_record_42();;
        ivar_13->endpos = (uint32_t)ivar_7;
        ivar_13->startpos = (uint32_t)ivar_8;
        iccMax2c__result_adt_t ivar_9;
        ivar_9 = (iccMax2c__result_adt_t)iccMax2c__parsefunc((uint64_t)ivar_10, (bytestrings__bytestring_t)ivar_11, (iccMax2c__signatureMap_t)ivar_12, (iccMax2c__window_t)ivar_13);
        //copying to iccMax2c__result_adt from iccMax2c__result_adt;
        result = (iccMax2c__result_adt_t)ivar_9;
        if (result != NULL) result->count++;
        release_iccMax2c__result_adt(ivar_9);

        defined = true;};
        
        return result;
}

extern iccMax2c__signatureMap_t iccMax2c__makesubelementsig(uint32_t ivar_1, iccMax2c_array_46_t ivar_2, uint32_t ivar_3){
        iccMax2c__signatureMap_t  result;
        bool_t ivar_4;
        ivar_4 = (ivar_3 == ivar_1);
        if (ivar_4){ 
             release_iccMax2c_array_46(ivar_2);
             iccMax2c_closure_47_t cl268655;
             cl268655 = new_iccMax2c_closure_47();
             result = (iccMax2c__signatureMap_t)cl268655;
} else {
        
             /* sigi */ iccMax2c__signature_adt_t ivar_9;
             iccMax2c__signature_adt_t ivar_11;
             ivar_11 = (iccMax2c__signature_adt_t)ivar_2->elems[ivar_3];
             ivar_11->count++;
             //copying to iccMax2c__signature_adt from iccMax2c__signature_adt;
             ivar_9 = (iccMax2c__signature_adt_t)ivar_11;
             if (ivar_9 != NULL) ivar_9->count++;
             release_iccMax2c__signature_adt(ivar_11);
             bool_t ivar_25;
             ivar_9->count++;
             ivar_25 = (bool_t)r_iccMax2c__undefinedp((iccMax2c__signature_adt_t)ivar_9);
             if (ivar_25){  
           release_iccMax2c__signature_adt(ivar_9);
           release_iccMax2c__signature_adt(ivar_9);
           uint32_t ivar_24;
           uint8_t ivar_19;
           ivar_19 = (uint8_t)1;
           ivar_24 = (uint32_t)(ivar_3 + ivar_19);
           iccMax2c__signatureMap_t ivar_21;
           ivar_21 = (iccMax2c__signatureMap_t)iccMax2c__makesubelementsig((uint32_t)ivar_1, (iccMax2c_array_46_t)ivar_2, (uint32_t)ivar_24);
           //copying to iccMax2c__signatureMap from iccMax2c__signatureMap;
           result = (iccMax2c__signatureMap_t)ivar_21;
           if (result != NULL) result->count++;
           release_iccMax2c__signatureMap(ivar_21);
} else {
             
           iccMax2c__window_t ivar_31;
           iccMax2c__window_t ivar_39;
           ivar_9->count++;
           ivar_39 = (iccMax2c__window_t)iccMax2c__signature_adt_win((iccMax2c__signature_adt_t)ivar_9);
           //copying to iccMax2c__window from iccMax2c__window;
           ivar_31 = (iccMax2c__window_t)ivar_39;
           if (ivar_31 != NULL) ivar_31->count++;
           release_iccMax2c__window(ivar_39);
           iccMax2c__signatureMap_t ivar_52;
           uint32_t ivar_50;
           uint8_t ivar_45;
           ivar_45 = (uint8_t)1;
           ivar_50 = (uint32_t)(ivar_3 + ivar_45);
           iccMax2c__signatureMap_t ivar_47;
           ivar_47 = (iccMax2c__signatureMap_t)iccMax2c__makesubelementsig((uint32_t)ivar_1, (iccMax2c_array_46_t)ivar_2, (uint32_t)ivar_50);
           //copying to iccMax2c__signatureMap from iccMax2c__signatureMap;
           ivar_52 = (iccMax2c__signatureMap_t)ivar_47;
           if (ivar_52 != NULL) ivar_52->count++;
           release_iccMax2c__signatureMap(ivar_47);
           iccMax2c__signatureMap_t ivar_59;
           uint32_t ivar_54;
           ivar_54 = (uint32_t)ivar_31->startpos;
           release_iccMax2c__window(ivar_31);
           iccMax2c__signatureMap_t ivar_56;
           iccMax2c__signature_adt_t ivar_58;
           ivar_58 = NULL;
           ivar_56 = (iccMax2c__signatureMap_t)update_iccMax2c__signatureMap(ivar_52, ivar_54, ivar_58);
           if (ivar_58 != NULL) ivar_58->count--;
           ivar_59 = (iccMax2c__signatureMap_t)update_iccMax2c__signatureMap(ivar_56, ivar_54, ivar_9);
           if (ivar_9 != NULL) ivar_9->count--;
           //copying to iccMax2c__signatureMap from iccMax2c__signatureMap;
           result = (iccMax2c__signatureMap_t)ivar_59;
           if (result != NULL) result->count++;
           release_iccMax2c__signatureMap(ivar_59);
};
};

        
        return result;
}

extern iccMax2c__signature_adt_t iccMax2c__parsecalc(uint64_t ivar_1, bytestrings__bytestring_t ivar_2, iccMax2c__window_t ivar_3){
        iccMax2c__signature_adt_t  result;
        /* endpos */ uint32_t ivar_4;
        iccMax2c_record_40_t ivar_15;
        uint32_t len268670 = 9;
        uint32_t characters268671[9] = {101, 110, 100, 112, 111, 115, 32, 61, 32};
        stringliteral_t string268669 = mk_string(9, characters268671);
        ivar_15 = (iccMax2c_record_40_t)strings__make_string(len268670, string268669);
        strings__string_t ivar_12;
        //copying to strings__string from iccMax2c_record_40;
        ivar_12 = (strings__string_t)ivar_15;
        if (ivar_12 != NULL) ivar_12->count++;
        release_iccMax2c_record_40(ivar_15);
        uint32_t ivar_13;
        ivar_13 = (uint32_t)ivar_3->endpos;
        ivar_4 = (uint32_t)iccMax2c__print32((strings__string_t)ivar_12, (uint32_t)ivar_13);
        /* startpos */ uint32_t ivar_16;
        iccMax2c_record_40_t ivar_28;
        uint32_t len268673 = 11;
        uint32_t characters268674[11] = {115, 116, 97, 114, 116, 112, 111, 115, 32, 61, 32};
        stringliteral_t string268672 = mk_string(11, characters268674);
        ivar_28 = (iccMax2c_record_40_t)strings__make_string(len268673, string268672);
        strings__string_t ivar_25;
        //copying to strings__string from iccMax2c_record_40;
        ivar_25 = (strings__string_t)ivar_28;
        if (ivar_25 != NULL) ivar_25->count++;
        release_iccMax2c_record_40(ivar_28);
        uint32_t ivar_26;
        ivar_26 = (uint32_t)ivar_3->startpos;
        ivar_16 = (uint32_t)iccMax2c__print32((strings__string_t)ivar_25, (uint32_t)ivar_26);
        mpq_ptr_t ivar_324;
        mpz_t tmp268675;
        mpz_init(tmp268675);
        mpz_set_ui(tmp268675, (uint64_t)ivar_4);
        mpz_sub_ui(tmp268675, tmp268675, (uint64_t)ivar_16);
        mpq_mk_set_z(ivar_324, tmp268675);
        mpz_clear(tmp268675);
        /* wsize */ uint32_t ivar_29;
        //copying to uint32 from mpq;
        ivar_29 = (uint32_t)mpq_get_ui(ivar_324);
        mpq_clear(ivar_324);
        bool_t ivar_33;
        uint32_t ivar_35;
        ivar_35 = (uint32_t)ivar_2->length;
        ivar_33 = (ivar_4 > ivar_35);
        if (ivar_33){ 
             release_bytestrings__bytestring(ivar_2);
             release_iccMax2c__window(ivar_3);
             result = (iccMax2c__signature_adt_t)iccMax2c__undefined();
             if (result != NULL) result->count++;
} else {
        
             bool_t ivar_38;
             uint8_t ivar_40;
             ivar_40 = (uint8_t)24;
             ivar_38 = (ivar_29 <= ivar_40);
             if (ivar_38){  
           release_bytestrings__bytestring(ivar_2);
           release_iccMax2c__window(ivar_3);
           result = (iccMax2c__signature_adt_t)iccMax2c__undefined();
           if (result != NULL) result->count++;
} else {
             
           /* tag */ uint32_t ivar_42;
           iccMax2c_record_40_t ivar_57;
           uint32_t len268677 = 6;
           uint32_t characters268678[6] = {116, 97, 103, 32, 61, 32};
           stringliteral_t string268676 = mk_string(6, characters268678);
           ivar_57 = (iccMax2c_record_40_t)strings__make_string(len268677, string268676);
           strings__string_t ivar_54;
           //copying to strings__string from iccMax2c_record_40;
           ivar_54 = (strings__string_t)ivar_57;
           if (ivar_54 != NULL) ivar_54->count++;
           release_iccMax2c_record_40(ivar_57);
           uint32_t ivar_55;
           ivar_2->count++;
           ivar_55 = (uint32_t)iccMax2c__readU32((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_16);
           ivar_42 = (uint32_t)iccMax2c__print32((strings__string_t)ivar_54, (uint32_t)ivar_55);
           /* P */ uint16_t ivar_77;
           iccMax2c_record_40_t ivar_95;
           uint32_t len268680 = 21;
           uint32_t characters268681[21] = {110, 117, 109, 32, 105, 110, 112, 117, 116, 32, 99, 104, 97, 110, 110, 101, 108, 115, 32, 61, 32};
           stringliteral_t string268679 = mk_string(21, characters268681);
           ivar_95 = (iccMax2c_record_40_t)strings__make_string(len268680, string268679);
           strings__string_t ivar_92;
           //copying to strings__string from iccMax2c_record_40;
           ivar_92 = (strings__string_t)ivar_95;
           if (ivar_92 != NULL) ivar_92->count++;
           release_iccMax2c_record_40(ivar_95);
           uint16_t ivar_93;
           uint32_t ivar_87;
           uint8_t ivar_83;
           ivar_83 = (uint8_t)8;
           ivar_87 = (uint32_t)(ivar_16 + ivar_83);
           ivar_2->count++;
           ivar_93 = (uint16_t)iccMax2c__readU16((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_87);
           ivar_77 = (uint16_t)iccMax2c__print16((strings__string_t)ivar_92, (uint16_t)ivar_93);
           /* Q */ uint16_t ivar_96;
           iccMax2c_record_40_t ivar_114;
           uint32_t len268683 = 22;
           uint32_t characters268684[22] = {110, 117, 109, 32, 111, 117, 116, 112, 117, 116, 32, 99, 104, 97, 110, 110, 101, 108, 115, 32, 61, 32};
           stringliteral_t string268682 = mk_string(22, characters268684);
           ivar_114 = (iccMax2c_record_40_t)strings__make_string(len268683, string268682);
           strings__string_t ivar_111;
           //copying to strings__string from iccMax2c_record_40;
           ivar_111 = (strings__string_t)ivar_114;
           if (ivar_111 != NULL) ivar_111->count++;
           release_iccMax2c_record_40(ivar_114);
           uint16_t ivar_112;
           uint32_t ivar_106;
           uint8_t ivar_102;
           ivar_102 = (uint8_t)10;
           ivar_106 = (uint32_t)(ivar_16 + ivar_102);
           ivar_2->count++;
           ivar_112 = (uint16_t)iccMax2c__readU16((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_106);
           ivar_96 = (uint16_t)iccMax2c__print16((strings__string_t)ivar_111, (uint16_t)ivar_112);
           /* E */ uint32_t ivar_115;
           iccMax2c_record_40_t ivar_133;
           uint32_t len268686 = 4;
           uint32_t characters268687[4] = {69, 32, 61, 32};
           stringliteral_t string268685 = mk_string(4, characters268687);
           ivar_133 = (iccMax2c_record_40_t)strings__make_string(len268686, string268685);
           strings__string_t ivar_130;
           //copying to strings__string from iccMax2c_record_40;
           ivar_130 = (strings__string_t)ivar_133;
           if (ivar_130 != NULL) ivar_130->count++;
           release_iccMax2c_record_40(ivar_133);
           uint32_t ivar_131;
           uint32_t ivar_125;
           uint8_t ivar_121;
           ivar_121 = (uint8_t)12;
           ivar_125 = (uint32_t)(ivar_16 + ivar_121);
           ivar_2->count++;
           ivar_131 = (uint32_t)iccMax2c__readU32((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_125);
           ivar_115 = (uint32_t)iccMax2c__print32((strings__string_t)ivar_130, (uint32_t)ivar_131);
           /* Moffset */ uint32_t ivar_134;
           iccMax2c_record_40_t ivar_152;
           uint32_t len268689 = 4;
           uint32_t characters268690[4] = {77, 32, 61, 32};
           stringliteral_t string268688 = mk_string(4, characters268690);
           ivar_152 = (iccMax2c_record_40_t)strings__make_string(len268689, string268688);
           strings__string_t ivar_149;
           //copying to strings__string from iccMax2c_record_40;
           ivar_149 = (strings__string_t)ivar_152;
           if (ivar_149 != NULL) ivar_149->count++;
           release_iccMax2c_record_40(ivar_152);
           uint32_t ivar_150;
           uint32_t ivar_144;
           uint8_t ivar_140;
           ivar_140 = (uint8_t)16;
           ivar_144 = (uint32_t)(ivar_16 + ivar_140);
           ivar_2->count++;
           ivar_150 = (uint32_t)iccMax2c__readU32((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_144);
           ivar_134 = (uint32_t)iccMax2c__print32((strings__string_t)ivar_149, (uint32_t)ivar_150);
           /* Msize */ uint32_t ivar_153;
           iccMax2c_record_40_t ivar_171;
           uint32_t len268692 = 4;
           uint32_t characters268693[4] = {77, 32, 61, 32};
           stringliteral_t string268691 = mk_string(4, characters268693);
           ivar_171 = (iccMax2c_record_40_t)strings__make_string(len268692, string268691);
           strings__string_t ivar_168;
           //copying to strings__string from iccMax2c_record_40;
           ivar_168 = (strings__string_t)ivar_171;
           if (ivar_168 != NULL) ivar_168->count++;
           release_iccMax2c_record_40(ivar_171);
           uint32_t ivar_169;
           uint32_t ivar_163;
           uint8_t ivar_159;
           ivar_159 = (uint8_t)20;
           ivar_163 = (uint32_t)(ivar_16 + ivar_159);
           ivar_2->count++;
           ivar_169 = (uint32_t)iccMax2c__readU32((bytestrings__bytestring_t)ivar_2, (uint32_t)ivar_163);
           ivar_153 = (uint32_t)iccMax2c__print32((strings__string_t)ivar_168, (uint32_t)ivar_169);
           bool_t ivar_172;
           uint32_t ivar_174;
           ivar_174 = (uint32_t)iccMax2c__calcTag();
           ivar_172 = (ivar_42 != ivar_174);
           if (ivar_172){   
           release_bytestrings__bytestring(ivar_2);
           release_iccMax2c__window(ivar_3);
           result = (iccMax2c__signature_adt_t)iccMax2c__undefined();
           if (result != NULL) result->count++;
} else {
           
           bool_t ivar_176;
           uint32_t ivar_177;
           uint32_t ivar_185;
           uint8_t ivar_182;
           ivar_182 = (uint8_t)16;
           ivar_185 = (uint32_t)(ivar_29 - ivar_182);
           uint32_t ivar_186;
           ivar_186 = (uint32_t)8;
           ivar_177 = (uint32_t)integertypes__u32div((uint32_t)ivar_185, (uint32_t)ivar_186);
           ivar_176 = (ivar_177 < ivar_115);
           if (ivar_176){    
            release_bytestrings__bytestring(ivar_2);
            release_iccMax2c__window(ivar_3);
            result = (iccMax2c__signature_adt_t)iccMax2c__undefined();
            if (result != NULL) result->count++;
} else {
           
            iccMax2c__signatureMap_t ivar_323;
            iccMax2c_closure_48_t cl268697;
            cl268697 = new_iccMax2c_closure_48();
            cl268697->fvar_1 = (uint64_t)ivar_1;
            cl268697->fvar_2 = (bytestrings__bytestring_t)ivar_2;
            if (cl268697->fvar_2 != NULL) cl268697->fvar_2->count++;
            cl268697->fvar_3 = (uint32_t)ivar_16;
            cl268697->fvar_4 = (uint32_t)ivar_29;
            ivar_323 = (iccMax2c__signatureMap_t)cl268697;
            /* sigarray */ iccMax2c_array_46_t ivar_188;
            //copying to iccMax2c_array_46 from iccMax2c__signatureMap;
            uint32_t tmp268698;
            //copying to uint32 from uint32;
            tmp268698 = (uint32_t)ivar_115;
            tmp268698 += 0;
            ivar_188 = new_iccMax2c_array_46(tmp268698);
            for (uint32_t index_1 = 0; index_1 < tmp268698; index_1++){
             ivar_188->elems[index_1] = (iccMax2c__signature_adt_t)ivar_323->ftbl->fptr(ivar_323, index_1);
             if (ivar_188->elems[index_1] != NULL) ivar_188->elems[index_1]->count++;
            };
            release_iccMax2c__signatureMap(ivar_323);
            /* subelemsig */ iccMax2c__signatureMap_t ivar_260;
            uint32_t ivar_267;
            ivar_267 = (uint32_t)0;
            iccMax2c__signatureMap_t ivar_264;
            ivar_264 = (iccMax2c__signatureMap_t)iccMax2c__makesubelementsig((uint32_t)ivar_115, (iccMax2c_array_46_t)ivar_188, (uint32_t)ivar_267);
            //copying to iccMax2c__signatureMap from iccMax2c__signatureMap;
            ivar_260 = (iccMax2c__signatureMap_t)ivar_264;
            if (ivar_260 != NULL) ivar_260->count++;
            release_iccMax2c__signatureMap(ivar_264);
            bool_t ivar_268;
            ivar_268 = (ivar_29 < ivar_134);
            if (ivar_268){     
             release_bytestrings__bytestring(ivar_2);
             release_iccMax2c__signatureMap(ivar_260);
             release_iccMax2c__window(ivar_3);
             result = (iccMax2c__signature_adt_t)iccMax2c__undefined();
             if (result != NULL) result->count++;
} else {
            
             bool_t ivar_272;
             uint32_t ivar_274;
             ivar_274 = (uint32_t)integertypes__u32minus((uint32_t)ivar_29, (uint32_t)ivar_134);
             ivar_272 = (ivar_153 > ivar_274);
             if (ivar_272){      
              release_bytestrings__bytestring(ivar_2);
              release_iccMax2c__signatureMap(ivar_260);
              release_iccMax2c__window(ivar_3);
              result = (iccMax2c__signature_adt_t)iccMax2c__undefined();
              if (result != NULL) result->count++;
} else {
             
              mpq_ptr_t ivar_322;
              mpz_t tmp268699;
              mpz_init(tmp268699);
              mpz_set_ui(tmp268699, (uint64_t)ivar_16);
              mpz_add_ui(tmp268699, tmp268699, (uint64_t)ivar_134);
              mpq_mk_set_z(ivar_322, tmp268699);
              mpz_clear(tmp268699);
              /* Mstart */ uint32_t ivar_281;
              //copying to uint32 from mpq;
              ivar_281 = (uint32_t)mpq_get_ui(ivar_322);
              mpq_clear(ivar_322);
              mpq_ptr_t ivar_321;
              mpz_t tmp268700;
              mpz_init(tmp268700);
              mpz_set_ui(tmp268700, (uint64_t)ivar_281);
              mpz_add_ui(tmp268700, tmp268700, (uint64_t)ivar_153);
              mpq_mk_set_z(ivar_321, tmp268700);
              mpz_clear(tmp268700);
              /* Mend */ uint32_t ivar_285;
              //copying to uint32 from mpq;
              ivar_285 = (uint32_t)mpq_get_ui(ivar_321);
              mpq_clear(ivar_321);
              /* result */ iccMax2c__result_adt_t ivar_289;
              iccMax2c__window_t ivar_309;
              iccMax2c__window_t ivar_300;
              {ivar_300 = (iccMax2c__window_t)copy_iccMax2c__window(ivar_3); ivar_300 = (iccMax2c__window_t)update_iccMax2c__window_startpos(ivar_300, ivar_281);};
              iccMax2c__window_t ivar_304;
              ivar_304 = (iccMax2c__window_t)update_iccMax2c__window_endpos(ivar_300, ivar_285);
              //copying to iccMax2c__window from iccMax2c__window;
              ivar_309 = (iccMax2c__window_t)ivar_304;
              if (ivar_309 != NULL) ivar_309->count++;
              release_iccMax2c__window(ivar_304);
              iccMax2c__result_adt_t ivar_305;
              ivar_305 = (iccMax2c__result_adt_t)iccMax2c__parsefunc((uint64_t)ivar_1, (bytestrings__bytestring_t)ivar_2, (iccMax2c__signatureMap_t)ivar_260, (iccMax2c__window_t)ivar_309);
              //copying to iccMax2c__result_adt from iccMax2c__result_adt;
              ivar_289 = (iccMax2c__result_adt_t)ivar_305;
              if (ivar_289 != NULL) ivar_289->count++;
              release_iccMax2c__result_adt(ivar_305);
              bool_t ivar_310;
              ivar_310 = (bool_t)r_iccMax2c__errorp((iccMax2c__result_adt_t)ivar_289);
              if (ivar_310){       
               release_iccMax2c__window(ivar_3);
               result = (iccMax2c__signature_adt_t)iccMax2c__undefined();
               if (result != NULL) result->count++;
} else {
              
               iccMax2c__signature_adt_t ivar_317;
               ivar_317 = (iccMax2c__signature_adt_t)iccMax2c__inout((uint64_t)ivar_77, (uint64_t)ivar_96, (iccMax2c__window_t)ivar_3);
               //copying to iccMax2c__signature_adt from iccMax2c__signature_adt;
               result = (iccMax2c__signature_adt_t)ivar_317;
               if (result != NULL) result->count++;
               release_iccMax2c__signature_adt(ivar_317);
};
};
};
};
};
};
};

        
        return result;
}

extern bytestrings__bytestring_t iccMax2c__iccteststring5(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_11;
        iccMax2c_record_40_t ivar_9;
        uint32_t len268703 = 168;
        uint32_t characters268704[168] = {54, 51, 54, 49, 54, 67, 54, 51, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 51, 48, 48, 48, 51, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 49, 56, 48, 48, 48, 48, 48, 48, 51, 99, 54, 54, 55, 53, 54, 101, 54, 51, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 54, 54, 57, 54, 101, 50, 48, 50, 48, 48, 48, 48, 48, 48, 48, 48, 50, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 56, 48, 48, 48, 48, 48, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 56, 48, 48, 48, 48, 48, 54, 52, 54, 49, 55, 52, 54, 49, 51, 102, 56, 48, 48, 48, 48, 48, 54, 49, 54, 52, 54, 52, 50, 48, 48, 48, 48, 50, 48, 48, 48, 48, 54, 102, 55, 53, 55, 52, 50, 48, 48, 48, 48, 48, 48, 48, 48, 50};
        stringliteral_t string268702 = mk_string(168, characters268704);
        ivar_9 = (iccMax2c_record_40_t)strings__make_string(len268703, string268702);
        strings__string_t ivar_7;
        //copying to strings__string from iccMax2c_record_40;
        ivar_7 = (strings__string_t)ivar_9;
        if (ivar_7 != NULL) ivar_7->count++;
        release_iccMax2c_record_40(ivar_9);
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_6;
        if (ivar_11 != NULL) ivar_11->count++;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)hex__hex2bytestring((bytestrings__bytestring_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_10;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_10);

        defined = true;};
        
        return result;
}

extern iccMax2c__signature_adt_t iccMax2c__test5(void){
        iccMax2c__signature_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_8;
        ivar_8 = (uint64_t)65535;
        bytestrings__bytestring_t ivar_9;
        ivar_9 = (bytestrings__bytestring_t)iccMax2c__iccteststring5();
        if (ivar_9 != NULL) ivar_9->count++;
        iccMax2c__window_t ivar_10;
        uint32_t ivar_5;
        bytestrings__bytestring_t ivar_4;
        ivar_4 = (bytestrings__bytestring_t)iccMax2c__iccteststring5();
        if (ivar_4 != NULL) ivar_4->count++;
        ivar_5 = (uint32_t)ivar_4->length;
        release_bytestrings__bytestring(ivar_4);
        uint8_t ivar_6;
        ivar_6 = (uint8_t)0;
        ivar_10 = (iccMax2c__window_t)new_iccMax2c_record_42();;
        ivar_10->endpos = (uint32_t)ivar_5;
        ivar_10->startpos = (uint32_t)ivar_6;
        iccMax2c__signature_adt_t ivar_7;
        ivar_7 = (iccMax2c__signature_adt_t)iccMax2c__parsecalc((uint64_t)ivar_8, (bytestrings__bytestring_t)ivar_9, (iccMax2c__window_t)ivar_10);
        //copying to iccMax2c__signature_adt from iccMax2c__signature_adt;
        result = (iccMax2c__signature_adt_t)ivar_7;
        if (result != NULL) result->count++;
        release_iccMax2c__signature_adt(ivar_7);

        defined = true;};
        
        return result;
}