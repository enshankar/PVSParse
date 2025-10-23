//Code generated using pvs2ir2c
#include "ordstruct_adt_c.h"


ordstruct_adt__ordstruct_adt_t new_ordstruct_adt__ordstruct_adt(void){
        ordstruct_adt__ordstruct_adt_t tmp = (ordstruct_adt__ordstruct_adt_t) safe_malloc(sizeof(struct ordstruct_adt__ordstruct_adt_s));
        tmp->count = 1;
        return tmp;}

void release_ordstruct_adt__ordstruct_adt(ordstruct_adt__ordstruct_adt_t x){
switch (x->ordstruct_adt__ordstruct_adt_index) {
case 1:  release_ordstruct_adt__add((ordstruct_adt__add_t) x); break;
}}

void release_ordstruct_adt__ordstruct_adt_ptr(pointer_t x, type_actual_t T){
        release_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)x);
}

ordstruct_adt__ordstruct_adt_t copy_ordstruct_adt__ordstruct_adt(ordstruct_adt__ordstruct_adt_t x){
        ordstruct_adt__ordstruct_adt_t y = new_ordstruct_adt__ordstruct_adt();
        y->ordstruct_adt__ordstruct_adt_index = (uint8_t)x->ordstruct_adt__ordstruct_adt_index;
        y->count = 1;
        return y;}

bool_t equal_ordstruct_adt__ordstruct_adt(ordstruct_adt__ordstruct_adt_t x, ordstruct_adt__ordstruct_adt_t y){
        bool_t tmp = x->ordstruct_adt__ordstruct_adt_index == y->ordstruct_adt__ordstruct_adt_index;
        switch  (x->ordstruct_adt__ordstruct_adt_index) {
                case 1: tmp = tmp && equal_ordstruct_adt__add((ordstruct_adt__add_t) x, (ordstruct_adt__add_t) y); break;
        }
        return tmp;
}

bool_t equal_ordstruct_adt__ordstruct_adt_ptr(pointer_t x, pointer_t y, actual_ordstruct_adt__ordstruct_adt_t T){
        return equal_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)x, (ordstruct_adt__ordstruct_adt_t)y);
}

actual_ordstruct_adt__ordstruct_adt_t actual_ordstruct_adt__ordstruct_adt(){
        actual_ordstruct_adt__ordstruct_adt_t new = (actual_ordstruct_adt__ordstruct_adt_t)safe_malloc(sizeof(struct actual_ordstruct_adt__ordstruct_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ordstruct_adt__ordstruct_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ordstruct_adt__ordstruct_adt_ptr);
 

 
        return new;
 };

ordstruct_adt__ordstruct_adt_t update_ordstruct_adt__ordstruct_adt_ordstruct_adt__ordstruct_adt_index(ordstruct_adt__ordstruct_adt_t x, uint8_t v){
        ordstruct_adt__ordstruct_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt__ordstruct_adt(x); x->count--;};
        y->ordstruct_adt__ordstruct_adt_index = (uint8_t)v;
        return y;}




ordstruct_adt__add_t new_ordstruct_adt__add(void){
        ordstruct_adt__add_t tmp = (ordstruct_adt__add_t) safe_malloc(sizeof(struct ordstruct_adt__add_s));
        tmp->count = 1;
        return tmp;}

void release_ordstruct_adt__add(ordstruct_adt__add_t x){
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt__ordstruct_adt(x->exp);
         release_ordstruct_adt__ordstruct_adt(x->rest);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ordstruct_adt__add_ptr(pointer_t x, type_actual_t T){
        release_ordstruct_adt__add((ordstruct_adt__add_t)x);
}

ordstruct_adt__add_t copy_ordstruct_adt__add(ordstruct_adt__add_t x){
        ordstruct_adt__add_t y = new_ordstruct_adt__add();
        y->ordstruct_adt__ordstruct_adt_index = (uint8_t)x->ordstruct_adt__ordstruct_adt_index;
        mpz_set(y->coef, x->coef);
        y->exp = x->exp;
        if (y->exp != NULL){y->exp->count++;};
        y->rest = x->rest;
        if (y->rest != NULL){y->rest->count++;};
        y->count = 1;
        return y;}

bool_t equal_ordstruct_adt__add(ordstruct_adt__add_t x, ordstruct_adt__add_t y){
        bool_t tmp = true;
        tmp = tmp && x->ordstruct_adt__ordstruct_adt_index == y->ordstruct_adt__ordstruct_adt_index;
        tmp = tmp && x->coef == y->coef;
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->exp, y->exp);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->rest, y->rest);
        return tmp;}

bool_t equal_ordstruct_adt__add_ptr(pointer_t x, pointer_t y, actual_ordstruct_adt__add_t T){
        return equal_ordstruct_adt__add((ordstruct_adt__add_t)x, (ordstruct_adt__add_t)y);
}

actual_ordstruct_adt__add_t actual_ordstruct_adt__add(){
        actual_ordstruct_adt__add_t new = (actual_ordstruct_adt__add_t)safe_malloc(sizeof(struct actual_ordstruct_adt__add_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ordstruct_adt__add_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ordstruct_adt__add_ptr);
 

 
        return new;
 };

ordstruct_adt__add_t update_ordstruct_adt__add_ordstruct_adt__ordstruct_adt_index(ordstruct_adt__add_t x, uint8_t v){
        ordstruct_adt__add_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt__add(x); x->count--;};
        y->ordstruct_adt__ordstruct_adt_index = (uint8_t)v;
        return y;}

ordstruct_adt__add_t update_ordstruct_adt__add_coef(ordstruct_adt__add_t x, mpz_ptr_t v){
        ordstruct_adt__add_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt__add(x); x->count--;};
        mpz_set(y->coef, v);
        return y;}

ordstruct_adt__add_t update_ordstruct_adt__add_exp(ordstruct_adt__add_t x, ordstruct_adt__ordstruct_adt_t v){
        ordstruct_adt__add_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->exp != NULL){release_ordstruct_adt__ordstruct_adt(x->exp);};}
        else {y = copy_ordstruct_adt__add(x); x->count--; y->exp->count--;};
        y->exp = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

ordstruct_adt__add_t update_ordstruct_adt__add_rest(ordstruct_adt__add_t x, ordstruct_adt__ordstruct_adt_t v){
        ordstruct_adt__add_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->rest != NULL){release_ordstruct_adt__ordstruct_adt(x->rest);};}
        else {y = copy_ordstruct_adt__add(x); x->count--; y->rest->count--;};
        y->rest = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}



void release_ordstruct_adt_funtype_2(ordstruct_adt_funtype_2_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ordstruct_adt_funtype_2_t copy_ordstruct_adt_funtype_2(ordstruct_adt_funtype_2_t x){return x->ftbl->cptr(x);}

bool_t equal_ordstruct_adt_funtype_2(ordstruct_adt_funtype_2_t x, ordstruct_adt_funtype_2_t y){
        return false;}

void release_ordstruct_adt_funtype_3(ordstruct_adt_funtype_3_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ordstruct_adt_funtype_3_t copy_ordstruct_adt_funtype_3(ordstruct_adt_funtype_3_t x){return x->ftbl->cptr(x);}

bool_t equal_ordstruct_adt_funtype_3(ordstruct_adt_funtype_3_t x, ordstruct_adt_funtype_3_t y){
        return false;}


ordstruct_adt_record_4_t new_ordstruct_adt_record_4(void){
        ordstruct_adt_record_4_t tmp = (ordstruct_adt_record_4_t) safe_malloc(sizeof(struct ordstruct_adt_record_4_s));
        tmp->count = 1;
        return tmp;}

void release_ordstruct_adt_record_4(ordstruct_adt_record_4_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ordstruct_adt_record_4_ptr(pointer_t x, type_actual_t T){
        release_ordstruct_adt_record_4((ordstruct_adt_record_4_t)x);
}

ordstruct_adt_record_4_t copy_ordstruct_adt_record_4(ordstruct_adt_record_4_t x){
        ordstruct_adt_record_4_t y = new_ordstruct_adt_record_4();
        mpz_set(y->project_1, x->project_1);
        mpz_set(y->project_2, x->project_2);
        mpz_set(y->project_3, x->project_3);
        y->count = 1;
        return y;}

bool_t equal_ordstruct_adt_record_4(ordstruct_adt_record_4_t x, ordstruct_adt_record_4_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        return tmp;}

bool_t equal_ordstruct_adt_record_4_ptr(pointer_t x, pointer_t y, actual_ordstruct_adt_record_4_t T){
        return equal_ordstruct_adt_record_4((ordstruct_adt_record_4_t)x, (ordstruct_adt_record_4_t)y);
}

actual_ordstruct_adt_record_4_t actual_ordstruct_adt_record_4(){
        actual_ordstruct_adt_record_4_t new = (actual_ordstruct_adt_record_4_t)safe_malloc(sizeof(struct actual_ordstruct_adt_record_4_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ordstruct_adt_record_4_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ordstruct_adt_record_4_ptr);
 

 
        return new;
 };

ordstruct_adt_record_4_t update_ordstruct_adt_record_4_project_1(ordstruct_adt_record_4_t x, mpz_ptr_t v){
        ordstruct_adt_record_4_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt_record_4(x); x->count--;};
        mpz_set(y->project_1, v);
        return y;}

ordstruct_adt_record_4_t update_ordstruct_adt_record_4_project_2(ordstruct_adt_record_4_t x, mpz_ptr_t v){
        ordstruct_adt_record_4_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt_record_4(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}

ordstruct_adt_record_4_t update_ordstruct_adt_record_4_project_3(ordstruct_adt_record_4_t x, mpz_ptr_t v){
        ordstruct_adt_record_4_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt_record_4(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}



void release_ordstruct_adt_funtype_5(ordstruct_adt_funtype_5_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ordstruct_adt_funtype_5_t copy_ordstruct_adt_funtype_5(ordstruct_adt_funtype_5_t x){return x->ftbl->cptr(x);}

bool_t equal_ordstruct_adt_funtype_5(ordstruct_adt_funtype_5_t x, ordstruct_adt_funtype_5_t y){
        return false;}


mpz_ptr_t f_ordstruct_adt_closure_6(struct ordstruct_adt_closure_6_s * closure, ordstruct_adt__ordstruct_adt_t bvar){
        mpz_ptr_t result = h_ordstruct_adt_closure_6(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_ordstruct_adt_closure_6(struct ordstruct_adt_closure_6_s * closure, ordstruct_adt__ordstruct_adt_t bvar){
        return h_ordstruct_adt_closure_6(bvar, closure->fvar_1, closure->fvar_2);}

extern mpz_ptr_t h_ordstruct_adt_closure_6(ordstruct_adt__ordstruct_adt_t ivar_5, ordstruct_adt_funtype_5_t ivar_2, mpz_ptr_t ivar_1){
        mpz_ptr_t result;
        /* red */ ordstruct_adt_funtype_3_t ivar_6;
        mpz_ptr_t ivar_13;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_13, ivar_1);
        ordstruct_adt_funtype_5_t ivar_26;
        //copying to ordstruct_adt_funtype_5 from ordstruct_adt_funtype_5;
        ivar_26 = (ordstruct_adt_funtype_5_t)ivar_2;
        ivar_26->count++;
        ordstruct_adt_funtype_5_t ivar_14;
        ordstruct_adt_closure_7_t cl22043;
        cl22043 = new_ordstruct_adt_closure_7();
        cl22043->fvar_1 = (ordstruct_adt_funtype_5_t)ivar_26;
        cl22043->fvar_1->count++;
        release_ordstruct_adt_funtype_5(ivar_26);
        ivar_14 = (ordstruct_adt_funtype_5_t)cl22043;
        ordstruct_adt_funtype_3_t ivar_12;
        ivar_12 = (ordstruct_adt_funtype_3_t)ordstruct_adt__reduce_nat(ivar_13, (ordstruct_adt_funtype_5_t)ivar_14);
        //copying to ordstruct_adt_funtype_3 from ordstruct_adt_funtype_3;
        ivar_6 = (ordstruct_adt_funtype_3_t)ivar_12;
        ivar_6->count++;
        release_ordstruct_adt_funtype_3(ivar_12);
        bool_t ivar_37;
        ivar_5->count++;
        ivar_37 = (bool_t)r_ordstruct_adt__zerop((ordstruct_adt__ordstruct_adt_t)ivar_5);
        if (ivar_37){ 
             release_ordstruct_adt_funtype_3(ivar_6);
             release_ordstruct_adt__ordstruct_adt(ivar_5);
             result = safe_malloc(sizeof(mpz_t));
             mpz_init(result);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_1);
} else {
        
             mpz_ptr_t ivar_41;
             ivar_5->count++;
             ivar_41 = (mpz_ptr_t)ordstruct_adt__ordstruct_adt_coef((ordstruct_adt__ordstruct_adt_t)ivar_5);
             ordstruct_adt__ordstruct_adt_t ivar_42;
             ordstruct_adt__ordstruct_adt_t ivar_48;
             ivar_5->count++;
             ivar_48 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_exp((ordstruct_adt__ordstruct_adt_t)ivar_5);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             ivar_42 = (ordstruct_adt__ordstruct_adt_t)ivar_48;
             ivar_42->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_48);
             ordstruct_adt__ordstruct_adt_t ivar_43;
             ordstruct_adt__ordstruct_adt_t ivar_51;
             ivar_51 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_rest((ordstruct_adt__ordstruct_adt_t)ivar_5);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             ivar_43 = (ordstruct_adt__ordstruct_adt_t)ivar_51;
             ivar_43->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_51);
             ordstruct_adt_funtype_5_t ivar_68;
             //copying to ordstruct_adt_funtype_5 from ordstruct_adt_funtype_5;
             ivar_68 = (ordstruct_adt_funtype_5_t)ivar_2;
             ivar_68->count++;
             mpz_ptr_t ivar_69;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_69, ivar_41);
             mpz_clear(ivar_41);
             mpz_ptr_t ivar_73;
             ordstruct_adt_funtype_3_t ivar_59;
             //copying to ordstruct_adt_funtype_3 from ordstruct_adt_funtype_3;
             ivar_59 = (ordstruct_adt_funtype_3_t)ivar_6;
             ivar_59->count++;
             ivar_73 = (mpz_ptr_t)ivar_59->ftbl->fptr(ivar_59, ivar_42);
             ivar_59->ftbl->rptr(ivar_59);
             mpz_ptr_t ivar_70;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_70, ivar_73);
             mpz_clear(ivar_73);
             mpz_ptr_t ivar_72;
             ordstruct_adt_funtype_3_t ivar_64;
             //copying to ordstruct_adt_funtype_3 from ordstruct_adt_funtype_3;
             ivar_64 = (ordstruct_adt_funtype_3_t)ivar_6;
             ivar_64->count++;
             release_ordstruct_adt_funtype_3(ivar_6);
             ivar_72 = (mpz_ptr_t)ivar_64->ftbl->fptr(ivar_64, ivar_43);
             ivar_64->ftbl->rptr(ivar_64);
             mpz_ptr_t ivar_71;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_71, ivar_72);
             mpz_clear(ivar_72);
             result = (mpz_ptr_t)ivar_68->ftbl->mptr(ivar_68, ivar_69, ivar_70, ivar_71);
             ivar_68->ftbl->rptr(ivar_68);
};

        return result;
}

ordstruct_adt_closure_6_t new_ordstruct_adt_closure_6(void){
        static struct ordstruct_adt_funtype_3_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ordstruct_adt_funtype_3_t, ordstruct_adt__ordstruct_adt_t))&f_ordstruct_adt_closure_6, .mptr = (mpz_ptr_t (*)(ordstruct_adt_funtype_3_t, ordstruct_adt__ordstruct_adt_t))&m_ordstruct_adt_closure_6, .rptr =  (void (*)(ordstruct_adt_funtype_3_t))&release_ordstruct_adt_closure_6, .cptr = (ordstruct_adt_funtype_3_t (*)(ordstruct_adt_funtype_3_t))&copy_ordstruct_adt_closure_6};
        ordstruct_adt_closure_6_t tmp = (ordstruct_adt_closure_6_t) safe_malloc(sizeof(struct ordstruct_adt_closure_6_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_ordstruct_adt_closure_6(ordstruct_adt_funtype_3_t closure){
        ordstruct_adt_closure_6_t x = (ordstruct_adt_closure_6_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt_funtype_5(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ordstruct_adt_closure_6_t copy_ordstruct_adt_closure_6(ordstruct_adt_closure_6_t x){
        ordstruct_adt_closure_6_t y = new_ordstruct_adt_closure_6();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        mpz_set(y->fvar_2, x->fvar_2);
        if (x->htbl != NULL){
            ordstruct_adt_funtype_3_htbl_t new_htbl = (ordstruct_adt_funtype_3_htbl_t) safe_malloc(sizeof(ordstruct_adt_funtype_3_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ordstruct_adt_funtype_3_hashentry_t * new_data = (ordstruct_adt_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ordstruct_adt_funtype_3_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(ordstruct_adt_funtype_3_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


mpz_ptr_t f_ordstruct_adt_closure_7(struct ordstruct_adt_closure_7_s * closure, ordstruct_adt_record_4_t bvar){
        mpz_t bvar_1;
        mpz_init(bvar_1);
        mpz_set(bvar_1, bvar->project_1);
        mpz_t bvar_2;
        mpz_init(bvar_2);
        mpz_set(bvar_2, bvar->project_2);
        mpz_t bvar_3;
        mpz_init(bvar_3);
        mpz_set(bvar_3, bvar->project_3);
        release_ordstruct_adt_record_4(bvar);
        mpz_ptr_t result = h_ordstruct_adt_closure_7(bvar_1, bvar_2, bvar_3, closure->fvar_1); 
        release_mpz(bvar_1);
        release_mpz(bvar_2);
        release_mpz(bvar_3);
        return result;}

mpz_ptr_t m_ordstruct_adt_closure_7(struct ordstruct_adt_closure_7_s * closure, mpz_ptr_t bvar_1, mpz_ptr_t bvar_2, mpz_ptr_t bvar_3){
        return h_ordstruct_adt_closure_7(bvar_1, bvar_2, bvar_3, closure->fvar_1);}

extern mpz_ptr_t h_ordstruct_adt_closure_7(mpz_ptr_t ivar_31, mpz_ptr_t ivar_32, mpz_ptr_t ivar_33, ordstruct_adt_funtype_5_t ivar_26){
        mpz_ptr_t result;
        mpz_ptr_t ivar_35;
        mpz_ptr_t ivar_28;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_28, ivar_31);
        mpz_clear(ivar_31);
        mpz_ptr_t ivar_29;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_29, ivar_32);
        mpz_clear(ivar_32);
        mpz_ptr_t ivar_30;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_30, ivar_33);
        mpz_clear(ivar_33);
        ivar_35 = (mpz_ptr_t)ivar_26->ftbl->mptr(ivar_26, ivar_28, ivar_29, ivar_30);
        mpz_ptr_t ivar_27;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_27, ivar_35);
        mpz_clear(ivar_35);
        mpz_ptr_t ivar_34;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_34, ivar_27);
        mpz_clear(ivar_27);
        //copying to mpz from mpz;
        mpz_mk_set(result, ivar_34);
        mpz_clear(ivar_34);

        return result;
}

ordstruct_adt_closure_7_t new_ordstruct_adt_closure_7(void){
        static struct ordstruct_adt_funtype_5_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ordstruct_adt_funtype_5_t, ordstruct_adt_record_4_t))&f_ordstruct_adt_closure_7, .mptr = (mpz_ptr_t (*)(ordstruct_adt_funtype_5_t, mpz_ptr_t, mpz_ptr_t, mpz_ptr_t))&m_ordstruct_adt_closure_7, .rptr =  (void (*)(ordstruct_adt_funtype_5_t))&release_ordstruct_adt_closure_7, .cptr = (ordstruct_adt_funtype_5_t (*)(ordstruct_adt_funtype_5_t))&copy_ordstruct_adt_closure_7};
        ordstruct_adt_closure_7_t tmp = (ordstruct_adt_closure_7_t) safe_malloc(sizeof(struct ordstruct_adt_closure_7_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ordstruct_adt_closure_7(ordstruct_adt_funtype_5_t closure){
        ordstruct_adt_closure_7_t x = (ordstruct_adt_closure_7_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt_funtype_5(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ordstruct_adt_closure_7_t copy_ordstruct_adt_closure_7(ordstruct_adt_closure_7_t x){
        ordstruct_adt_closure_7_t y = new_ordstruct_adt_closure_7();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            ordstruct_adt_funtype_5_htbl_t new_htbl = (ordstruct_adt_funtype_5_htbl_t) safe_malloc(sizeof(ordstruct_adt_funtype_5_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ordstruct_adt_funtype_5_hashentry_t * new_data = (ordstruct_adt_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ordstruct_adt_funtype_5_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(ordstruct_adt_funtype_5_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ordstruct_adt_record_8_t new_ordstruct_adt_record_8(void){
        ordstruct_adt_record_8_t tmp = (ordstruct_adt_record_8_t) safe_malloc(sizeof(struct ordstruct_adt_record_8_s));
        tmp->count = 1;
        return tmp;}

void release_ordstruct_adt_record_8(ordstruct_adt_record_8_t x){
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt__ordstruct_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ordstruct_adt_record_8_ptr(pointer_t x, type_actual_t T){
        release_ordstruct_adt_record_8((ordstruct_adt_record_8_t)x);
}

ordstruct_adt_record_8_t copy_ordstruct_adt_record_8(ordstruct_adt_record_8_t x){
        ordstruct_adt_record_8_t y = new_ordstruct_adt_record_8();
        mpz_set(y->project_1, x->project_1);
        mpz_set(y->project_2, x->project_2);
        mpz_set(y->project_3, x->project_3);
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ordstruct_adt_record_8(ordstruct_adt_record_8_t x, ordstruct_adt_record_8_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_4, y->project_4);
        return tmp;}

bool_t equal_ordstruct_adt_record_8_ptr(pointer_t x, pointer_t y, actual_ordstruct_adt_record_8_t T){
        return equal_ordstruct_adt_record_8((ordstruct_adt_record_8_t)x, (ordstruct_adt_record_8_t)y);
}

actual_ordstruct_adt_record_8_t actual_ordstruct_adt_record_8(){
        actual_ordstruct_adt_record_8_t new = (actual_ordstruct_adt_record_8_t)safe_malloc(sizeof(struct actual_ordstruct_adt_record_8_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ordstruct_adt_record_8_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ordstruct_adt_record_8_ptr);
 

 
        return new;
 };

ordstruct_adt_record_8_t update_ordstruct_adt_record_8_project_1(ordstruct_adt_record_8_t x, mpz_ptr_t v){
        ordstruct_adt_record_8_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt_record_8(x); x->count--;};
        mpz_set(y->project_1, v);
        return y;}

ordstruct_adt_record_8_t update_ordstruct_adt_record_8_project_2(ordstruct_adt_record_8_t x, mpz_ptr_t v){
        ordstruct_adt_record_8_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt_record_8(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}

ordstruct_adt_record_8_t update_ordstruct_adt_record_8_project_3(ordstruct_adt_record_8_t x, mpz_ptr_t v){
        ordstruct_adt_record_8_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt_record_8(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}

ordstruct_adt_record_8_t update_ordstruct_adt_record_8_project_4(ordstruct_adt_record_8_t x, ordstruct_adt__ordstruct_adt_t v){
        ordstruct_adt_record_8_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_4);};}
        else {y = copy_ordstruct_adt_record_8(x); x->count--; y->project_4->count--;};
        y->project_4 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}



void release_ordstruct_adt_funtype_9(ordstruct_adt_funtype_9_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ordstruct_adt_funtype_9_t copy_ordstruct_adt_funtype_9(ordstruct_adt_funtype_9_t x){return x->ftbl->cptr(x);}

bool_t equal_ordstruct_adt_funtype_9(ordstruct_adt_funtype_9_t x, ordstruct_adt_funtype_9_t y){
        return false;}


mpz_ptr_t f_ordstruct_adt_closure_10(struct ordstruct_adt_closure_10_s * closure, ordstruct_adt__ordstruct_adt_t bvar){
        mpz_ptr_t result = h_ordstruct_adt_closure_10(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_ordstruct_adt_closure_10(struct ordstruct_adt_closure_10_s * closure, ordstruct_adt__ordstruct_adt_t bvar){
        return h_ordstruct_adt_closure_10(bvar, closure->fvar_1, closure->fvar_2);}

extern mpz_ptr_t h_ordstruct_adt_closure_10(ordstruct_adt__ordstruct_adt_t ivar_6, ordstruct_adt_funtype_9_t ivar_3, ordstruct_adt_funtype_3_t ivar_1){
        mpz_ptr_t result;
        /* red */ ordstruct_adt_funtype_3_t ivar_7;
        ordstruct_adt_funtype_3_t ivar_48;
        //copying to ordstruct_adt_funtype_3 from ordstruct_adt_funtype_3;
        ivar_48 = (ordstruct_adt_funtype_3_t)ivar_1;
        ivar_48->count++;
        ordstruct_adt_funtype_3_t ivar_14;
        ordstruct_adt_closure_11_t cl22046;
        cl22046 = new_ordstruct_adt_closure_11();
        cl22046->fvar_1 = (ordstruct_adt_funtype_3_t)ivar_48;
        cl22046->fvar_1->count++;
        release_ordstruct_adt_funtype_3(ivar_48);
        ivar_14 = (ordstruct_adt_funtype_3_t)cl22046;
        ordstruct_adt_funtype_9_t ivar_36;
        //copying to ordstruct_adt_funtype_9 from ordstruct_adt_funtype_9;
        ivar_36 = (ordstruct_adt_funtype_9_t)ivar_3;
        ivar_36->count++;
        ordstruct_adt_funtype_9_t ivar_16;
        ordstruct_adt_closure_12_t cl22047;
        cl22047 = new_ordstruct_adt_closure_12();
        cl22047->fvar_1 = (ordstruct_adt_funtype_9_t)ivar_36;
        cl22047->fvar_1->count++;
        release_ordstruct_adt_funtype_9(ivar_36);
        ivar_16 = (ordstruct_adt_funtype_9_t)cl22047;
        ordstruct_adt_funtype_3_t ivar_13;
        ivar_13 = (ordstruct_adt_funtype_3_t)ordstruct_adt__REDUCE_nat((ordstruct_adt_funtype_3_t)ivar_14, (ordstruct_adt_funtype_9_t)ivar_16);
        //copying to ordstruct_adt_funtype_3 from ordstruct_adt_funtype_3;
        ivar_7 = (ordstruct_adt_funtype_3_t)ivar_13;
        ivar_7->count++;
        release_ordstruct_adt_funtype_3(ivar_13);
        bool_t ivar_60;
        ivar_6->count++;
        ivar_60 = (bool_t)r_ordstruct_adt__zerop((ordstruct_adt__ordstruct_adt_t)ivar_6);
        if (ivar_60){ 
             release_ordstruct_adt_funtype_3(ivar_7);
             ordstruct_adt_funtype_3_t ivar_58;
             //copying to ordstruct_adt_funtype_3 from ordstruct_adt_funtype_3;
             ivar_58 = (ordstruct_adt_funtype_3_t)ivar_1;
             ivar_58->count++;
             result = (mpz_ptr_t)ivar_58->ftbl->fptr(ivar_58, ivar_6);
             ivar_58->ftbl->rptr(ivar_58);
} else {
        
             mpz_ptr_t ivar_64;
             ivar_6->count++;
             ivar_64 = (mpz_ptr_t)ordstruct_adt__ordstruct_adt_coef((ordstruct_adt__ordstruct_adt_t)ivar_6);
             ordstruct_adt__ordstruct_adt_t ivar_65;
             ordstruct_adt__ordstruct_adt_t ivar_71;
             ivar_6->count++;
             ivar_71 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_exp((ordstruct_adt__ordstruct_adt_t)ivar_6);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             ivar_65 = (ordstruct_adt__ordstruct_adt_t)ivar_71;
             ivar_65->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_71);
             ordstruct_adt__ordstruct_adt_t ivar_66;
             ordstruct_adt__ordstruct_adt_t ivar_74;
             ivar_6->count++;
             ivar_74 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_rest((ordstruct_adt__ordstruct_adt_t)ivar_6);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             ivar_66 = (ordstruct_adt__ordstruct_adt_t)ivar_74;
             ivar_66->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_74);
             ordstruct_adt_funtype_9_t ivar_92;
             //copying to ordstruct_adt_funtype_9 from ordstruct_adt_funtype_9;
             ivar_92 = (ordstruct_adt_funtype_9_t)ivar_3;
             ivar_92->count++;
             mpz_ptr_t ivar_93;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_93, ivar_64);
             mpz_clear(ivar_64);
             mpz_ptr_t ivar_98;
             ordstruct_adt_funtype_3_t ivar_83;
             //copying to ordstruct_adt_funtype_3 from ordstruct_adt_funtype_3;
             ivar_83 = (ordstruct_adt_funtype_3_t)ivar_7;
             ivar_83->count++;
             ivar_98 = (mpz_ptr_t)ivar_83->ftbl->fptr(ivar_83, ivar_65);
             ivar_83->ftbl->rptr(ivar_83);
             mpz_ptr_t ivar_94;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_94, ivar_98);
             mpz_clear(ivar_98);
             mpz_ptr_t ivar_97;
             ordstruct_adt_funtype_3_t ivar_88;
             //copying to ordstruct_adt_funtype_3 from ordstruct_adt_funtype_3;
             ivar_88 = (ordstruct_adt_funtype_3_t)ivar_7;
             ivar_88->count++;
             release_ordstruct_adt_funtype_3(ivar_7);
             ivar_97 = (mpz_ptr_t)ivar_88->ftbl->fptr(ivar_88, ivar_66);
             ivar_88->ftbl->rptr(ivar_88);
             mpz_ptr_t ivar_95;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_95, ivar_97);
             mpz_clear(ivar_97);
             result = (mpz_ptr_t)ivar_92->ftbl->mptr(ivar_92, ivar_93, ivar_94, ivar_95, ivar_6);
             ivar_92->ftbl->rptr(ivar_92);
};

        return result;
}

ordstruct_adt_closure_10_t new_ordstruct_adt_closure_10(void){
        static struct ordstruct_adt_funtype_3_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ordstruct_adt_funtype_3_t, ordstruct_adt__ordstruct_adt_t))&f_ordstruct_adt_closure_10, .mptr = (mpz_ptr_t (*)(ordstruct_adt_funtype_3_t, ordstruct_adt__ordstruct_adt_t))&m_ordstruct_adt_closure_10, .rptr =  (void (*)(ordstruct_adt_funtype_3_t))&release_ordstruct_adt_closure_10, .cptr = (ordstruct_adt_funtype_3_t (*)(ordstruct_adt_funtype_3_t))&copy_ordstruct_adt_closure_10};
        ordstruct_adt_closure_10_t tmp = (ordstruct_adt_closure_10_t) safe_malloc(sizeof(struct ordstruct_adt_closure_10_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ordstruct_adt_closure_10(ordstruct_adt_funtype_3_t closure){
        ordstruct_adt_closure_10_t x = (ordstruct_adt_closure_10_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt_funtype_9(x->fvar_1);
         release_ordstruct_adt_funtype_3(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ordstruct_adt_closure_10_t copy_ordstruct_adt_closure_10(ordstruct_adt_closure_10_t x){
        ordstruct_adt_closure_10_t y = new_ordstruct_adt_closure_10();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ordstruct_adt_funtype_3_htbl_t new_htbl = (ordstruct_adt_funtype_3_htbl_t) safe_malloc(sizeof(ordstruct_adt_funtype_3_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ordstruct_adt_funtype_3_hashentry_t * new_data = (ordstruct_adt_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ordstruct_adt_funtype_3_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(ordstruct_adt_funtype_3_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


mpz_ptr_t f_ordstruct_adt_closure_11(struct ordstruct_adt_closure_11_s * closure, ordstruct_adt__ordstruct_adt_t bvar){
        mpz_ptr_t result = h_ordstruct_adt_closure_11(bvar, closure->fvar_1); 
        return result;}

mpz_ptr_t m_ordstruct_adt_closure_11(struct ordstruct_adt_closure_11_s * closure, ordstruct_adt__ordstruct_adt_t bvar){
        return h_ordstruct_adt_closure_11(bvar, closure->fvar_1);}

extern mpz_ptr_t h_ordstruct_adt_closure_11(ordstruct_adt__ordstruct_adt_t ivar_51, ordstruct_adt_funtype_3_t ivar_48){
        mpz_ptr_t result;
        mpz_ptr_t ivar_53;
        ivar_53 = (mpz_ptr_t)ivar_48->ftbl->fptr(ivar_48, ivar_51);
        mpz_ptr_t ivar_49;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_49, ivar_53);
        mpz_clear(ivar_53);
        mpz_ptr_t ivar_52;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_52, ivar_49);
        mpz_clear(ivar_49);
        //copying to mpz from mpz;
        mpz_mk_set(result, ivar_52);
        mpz_clear(ivar_52);

        return result;
}

ordstruct_adt_closure_11_t new_ordstruct_adt_closure_11(void){
        static struct ordstruct_adt_funtype_3_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ordstruct_adt_funtype_3_t, ordstruct_adt__ordstruct_adt_t))&f_ordstruct_adt_closure_11, .mptr = (mpz_ptr_t (*)(ordstruct_adt_funtype_3_t, ordstruct_adt__ordstruct_adt_t))&m_ordstruct_adt_closure_11, .rptr =  (void (*)(ordstruct_adt_funtype_3_t))&release_ordstruct_adt_closure_11, .cptr = (ordstruct_adt_funtype_3_t (*)(ordstruct_adt_funtype_3_t))&copy_ordstruct_adt_closure_11};
        ordstruct_adt_closure_11_t tmp = (ordstruct_adt_closure_11_t) safe_malloc(sizeof(struct ordstruct_adt_closure_11_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ordstruct_adt_closure_11(ordstruct_adt_funtype_3_t closure){
        ordstruct_adt_closure_11_t x = (ordstruct_adt_closure_11_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt_funtype_3(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ordstruct_adt_closure_11_t copy_ordstruct_adt_closure_11(ordstruct_adt_closure_11_t x){
        ordstruct_adt_closure_11_t y = new_ordstruct_adt_closure_11();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            ordstruct_adt_funtype_3_htbl_t new_htbl = (ordstruct_adt_funtype_3_htbl_t) safe_malloc(sizeof(ordstruct_adt_funtype_3_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ordstruct_adt_funtype_3_hashentry_t * new_data = (ordstruct_adt_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ordstruct_adt_funtype_3_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(ordstruct_adt_funtype_3_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


mpz_ptr_t f_ordstruct_adt_closure_12(struct ordstruct_adt_closure_12_s * closure, ordstruct_adt_record_8_t bvar){
        mpz_t bvar_1;
        mpz_init(bvar_1);
        mpz_set(bvar_1, bvar->project_1);
        mpz_t bvar_2;
        mpz_init(bvar_2);
        mpz_set(bvar_2, bvar->project_2);
        mpz_t bvar_3;
        mpz_init(bvar_3);
        mpz_set(bvar_3, bvar->project_3);
        ordstruct_adt__ordstruct_adt_t bvar_4;
        bvar_4 = (ordstruct_adt__ordstruct_adt_t)bvar->project_4;
        bvar->project_4->count++;
        release_ordstruct_adt_record_8(bvar);
        mpz_ptr_t result = h_ordstruct_adt_closure_12(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1); 
        release_mpz(bvar_1);
        release_mpz(bvar_2);
        release_mpz(bvar_3);
        release_ordstruct_adt__ordstruct_adt(bvar_4);
        return result;}

mpz_ptr_t m_ordstruct_adt_closure_12(struct ordstruct_adt_closure_12_s * closure, mpz_ptr_t bvar_1, mpz_ptr_t bvar_2, mpz_ptr_t bvar_3, ordstruct_adt__ordstruct_adt_t bvar_4){
        return h_ordstruct_adt_closure_12(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1);}

extern mpz_ptr_t h_ordstruct_adt_closure_12(mpz_ptr_t ivar_42, mpz_ptr_t ivar_43, mpz_ptr_t ivar_44, ordstruct_adt__ordstruct_adt_t ivar_45, ordstruct_adt_funtype_9_t ivar_36){
        mpz_ptr_t result;
        mpz_ptr_t ivar_47;
        mpz_ptr_t ivar_38;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_38, ivar_42);
        mpz_clear(ivar_42);
        mpz_ptr_t ivar_39;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_39, ivar_43);
        mpz_clear(ivar_43);
        mpz_ptr_t ivar_40;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_40, ivar_44);
        mpz_clear(ivar_44);
        ivar_47 = (mpz_ptr_t)ivar_36->ftbl->mptr(ivar_36, ivar_38, ivar_39, ivar_40, ivar_45);
        mpz_ptr_t ivar_37;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_37, ivar_47);
        mpz_clear(ivar_47);
        mpz_ptr_t ivar_46;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_46, ivar_37);
        mpz_clear(ivar_37);
        //copying to mpz from mpz;
        mpz_mk_set(result, ivar_46);
        mpz_clear(ivar_46);

        return result;
}

ordstruct_adt_closure_12_t new_ordstruct_adt_closure_12(void){
        static struct ordstruct_adt_funtype_9_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ordstruct_adt_funtype_9_t, ordstruct_adt_record_8_t))&f_ordstruct_adt_closure_12, .mptr = (mpz_ptr_t (*)(ordstruct_adt_funtype_9_t, mpz_ptr_t, mpz_ptr_t, mpz_ptr_t, ordstruct_adt__ordstruct_adt_t))&m_ordstruct_adt_closure_12, .rptr =  (void (*)(ordstruct_adt_funtype_9_t))&release_ordstruct_adt_closure_12, .cptr = (ordstruct_adt_funtype_9_t (*)(ordstruct_adt_funtype_9_t))&copy_ordstruct_adt_closure_12};
        ordstruct_adt_closure_12_t tmp = (ordstruct_adt_closure_12_t) safe_malloc(sizeof(struct ordstruct_adt_closure_12_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ordstruct_adt_closure_12(ordstruct_adt_funtype_9_t closure){
        ordstruct_adt_closure_12_t x = (ordstruct_adt_closure_12_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt_funtype_9(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ordstruct_adt_closure_12_t copy_ordstruct_adt_closure_12(ordstruct_adt_closure_12_t x){
        ordstruct_adt_closure_12_t y = new_ordstruct_adt_closure_12();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            ordstruct_adt_funtype_9_htbl_t new_htbl = (ordstruct_adt_funtype_9_htbl_t) safe_malloc(sizeof(ordstruct_adt_funtype_9_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ordstruct_adt_funtype_9_hashentry_t * new_data = (ordstruct_adt_funtype_9_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ordstruct_adt_funtype_9_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(ordstruct_adt_funtype_9_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern bool_t r_ordstruct_adt__zerop(ordstruct_adt__ordstruct_adt_t ivar_1){
        bool_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ordstruct_adt__ordstruct_adt_index;
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        return result;
}

extern bool_t r_ordstruct_adt__nonzerop(ordstruct_adt__ordstruct_adt_t ivar_1){
        bool_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ordstruct_adt__ordstruct_adt_index;
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        return result;
}

extern ordstruct_adt__add_t update_ordstruct_adt__ordstruct_adt_coef(ordstruct_adt__ordstruct_adt_t ivar_1, mpz_ptr_t ivar_3){
        ordstruct_adt__add_t result;
        ordstruct_adt__add_t ivar_2;
        //copying to ordstruct_adt__add from ordstruct_adt__ordstruct_adt;
        ivar_2 = (ordstruct_adt__add_t)ivar_1;
        ivar_2->count++;
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ordstruct_adt__add_t)update_ordstruct_adt__add_coef(ivar_2, ivar_3);

        return result;
}

extern mpz_ptr_t ordstruct_adt__ordstruct_adt_coef(ordstruct_adt__ordstruct_adt_t ivar_1){
        mpz_ptr_t result;
        ordstruct_adt__add_t ivar_2;
        //copying to ordstruct_adt__add from ordstruct_adt__ordstruct_adt;
        ivar_2 = (ordstruct_adt__add_t)ivar_1;
        ivar_2->count++;
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = safe_malloc(sizeof(mpz_t));
        mpz_init(result);
        mpz_set(result, ivar_2->coef);
        release_ordstruct_adt__add(ivar_2);

        return result;
}

extern ordstruct_adt__add_t update_ordstruct_adt__ordstruct_adt_exp(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_3){
        ordstruct_adt__add_t result;
        ordstruct_adt__add_t ivar_2;
        //copying to ordstruct_adt__add from ordstruct_adt__ordstruct_adt;
        ivar_2 = (ordstruct_adt__add_t)ivar_1;
        ivar_2->count++;
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ordstruct_adt__add_t)update_ordstruct_adt__add_exp(ivar_2, ivar_3);

        return result;
}

extern ordstruct_adt__ordstruct_adt_t ordstruct_adt__ordstruct_adt_exp(ordstruct_adt__ordstruct_adt_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        ordstruct_adt__add_t ivar_2;
        //copying to ordstruct_adt__add from ordstruct_adt__ordstruct_adt;
        ivar_2 = (ordstruct_adt__add_t)ivar_1;
        ivar_2->count++;
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ordstruct_adt__ordstruct_adt_t)ivar_2->exp;
        result->count++;
        release_ordstruct_adt__add(ivar_2);

        return result;
}

extern ordstruct_adt__add_t update_ordstruct_adt__ordstruct_adt_rest(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_3){
        ordstruct_adt__add_t result;
        ordstruct_adt__add_t ivar_2;
        //copying to ordstruct_adt__add from ordstruct_adt__ordstruct_adt;
        ivar_2 = (ordstruct_adt__add_t)ivar_1;
        ivar_2->count++;
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ordstruct_adt__add_t)update_ordstruct_adt__add_rest(ivar_2, ivar_3);

        return result;
}

extern ordstruct_adt__ordstruct_adt_t ordstruct_adt__ordstruct_adt_rest(ordstruct_adt__ordstruct_adt_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        ordstruct_adt__add_t ivar_2;
        //copying to ordstruct_adt__add from ordstruct_adt__ordstruct_adt;
        ivar_2 = (ordstruct_adt__add_t)ivar_1;
        ivar_2->count++;
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ordstruct_adt__ordstruct_adt_t)ivar_2->rest;
        result->count++;
        release_ordstruct_adt__add(ivar_2);

        return result;
}

extern ordstruct_adt__ordstruct_adt_t ordstruct_adt__zero(void){
        ordstruct_adt__ordstruct_adt_t result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        ordstruct_adt__ordstruct_adt_t ivar_2;
        ivar_2 = (ordstruct_adt__ordstruct_adt_t)new_ordstruct_adt__ordstruct_adt();;
        ivar_2->ordstruct_adt__ordstruct_adt_index = (uint8_t)ivar_1;
        //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
        result = (ordstruct_adt__ordstruct_adt_t)ivar_2;
        result->count++;
        release_ordstruct_adt__ordstruct_adt(ivar_2);

        return result;
}

extern ordstruct_adt__ordstruct_adt_t ordstruct_adt__add(mpz_ptr_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_4){
        ordstruct_adt__ordstruct_adt_t result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        ordstruct_adt__add_t ivar_5;
        ivar_5 = (ordstruct_adt__add_t)new_ordstruct_adt__add();;
        ivar_5->ordstruct_adt__ordstruct_adt_index = (uint8_t)ivar_1;
        mpz_init(ivar_5->coef);
        mpz_set(ivar_5->coef, ivar_2);
        mpz_clear(ivar_2);
        ivar_5->exp = (ordstruct_adt__ordstruct_adt_t)ivar_3;
        ivar_5->rest = (ordstruct_adt__ordstruct_adt_t)ivar_4;
        //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__add;
        result = (ordstruct_adt__ordstruct_adt_t)ivar_5;
        result->count++;
        release_ordstruct_adt__add(ivar_5);

        return result;
}

extern ordstruct_adt_funtype_2_t ordstruct_adt__ordstruct_ord(void){
        ordstruct_adt_funtype_2_t result;
        pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        return result;
}

extern uint8_t ordstruct_adt__ord(ordstruct_adt__ordstruct_adt_t ivar_1){
        uint8_t result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)r_ordstruct_adt__zerop((ordstruct_adt__ordstruct_adt_t)ivar_1);
        if (ivar_3){ 
             release_ordstruct_adt__ordstruct_adt(ivar_1);
             result = (uint8_t)0;
} else {
        
             result = (uint8_t)1;
};

        return result;
}

extern bool_t ordstruct_adt__subterm(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2){
        bool_t result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_2->count++;
        ivar_3 = (bool_t) equal_ordstruct_adt__ordstruct_adt(ivar_1, ivar_2);
        bool_t ivar_4;
        bool_t ivar_9;
        ivar_2->count++;
        ivar_9 = (bool_t)r_ordstruct_adt__zerop((ordstruct_adt__ordstruct_adt_t)ivar_2);
        if (ivar_9){ 
             release_ordstruct_adt__ordstruct_adt(ivar_2);
             release_ordstruct_adt__ordstruct_adt(ivar_1);
             ivar_4 = (bool_t) false;
} else {
        
             ordstruct_adt__ordstruct_adt_t ivar_14;
             ordstruct_adt__ordstruct_adt_t ivar_20;
             ivar_2->count++;
             ivar_20 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_exp((ordstruct_adt__ordstruct_adt_t)ivar_2);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             ivar_14 = (ordstruct_adt__ordstruct_adt_t)ivar_20;
             ivar_14->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_20);
             ordstruct_adt__ordstruct_adt_t ivar_15;
             ordstruct_adt__ordstruct_adt_t ivar_23;
             ivar_23 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_rest((ordstruct_adt__ordstruct_adt_t)ivar_2);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             ivar_15 = (ordstruct_adt__ordstruct_adt_t)ivar_23;
             ivar_15->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_23);
             bool_t ivar_25;
             ivar_1->count++;
             ivar_25 = (bool_t)ordstruct_adt__subterm((ordstruct_adt__ordstruct_adt_t)ivar_1, (ordstruct_adt__ordstruct_adt_t)ivar_14);
             bool_t ivar_26;
             ivar_26 = (bool_t)ordstruct_adt__subterm((ordstruct_adt__ordstruct_adt_t)ivar_1, (ordstruct_adt__ordstruct_adt_t)ivar_15);
             ivar_4 = ivar_25 || ivar_26;
};
        result = ivar_3 || ivar_4;

        return result;
}

extern bool_t ordstruct_adt__doublelessp(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2){
        bool_t result;
        bool_t ivar_4;
        ivar_2->count++;
        ivar_4 = (bool_t)r_ordstruct_adt__zerop((ordstruct_adt__ordstruct_adt_t)ivar_2);
        if (ivar_4){ 
             release_ordstruct_adt__ordstruct_adt(ivar_2);
             release_ordstruct_adt__ordstruct_adt(ivar_1);
             result = (bool_t) false;
} else {
        
             ordstruct_adt__ordstruct_adt_t ivar_9;
             ordstruct_adt__ordstruct_adt_t ivar_15;
             ivar_2->count++;
             ivar_15 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_exp((ordstruct_adt__ordstruct_adt_t)ivar_2);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             ivar_9 = (ordstruct_adt__ordstruct_adt_t)ivar_15;
             ivar_9->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_15);
             ordstruct_adt__ordstruct_adt_t ivar_10;
             ordstruct_adt__ordstruct_adt_t ivar_18;
             ivar_18 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_rest((ordstruct_adt__ordstruct_adt_t)ivar_2);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             ivar_10 = (ordstruct_adt__ordstruct_adt_t)ivar_18;
             ivar_10->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_18);
             bool_t ivar_20;
             bool_t ivar_27;
             ivar_1->count++;
             ivar_9->count++;
             ivar_27 = (bool_t) equal_ordstruct_adt__ordstruct_adt(ivar_1, ivar_9);
             bool_t ivar_28;
             ivar_1->count++;
             ivar_28 = (bool_t)ordstruct_adt__doublelessp((ordstruct_adt__ordstruct_adt_t)ivar_1, (ordstruct_adt__ordstruct_adt_t)ivar_9);
             ivar_20 = ivar_27 || ivar_28;
             bool_t ivar_21;
             bool_t ivar_44;
             ivar_1->count++;
             ivar_10->count++;
             ivar_44 = (bool_t) equal_ordstruct_adt__ordstruct_adt(ivar_1, ivar_10);
             bool_t ivar_45;
             ivar_45 = (bool_t)ordstruct_adt__doublelessp((ordstruct_adt__ordstruct_adt_t)ivar_1, (ordstruct_adt__ordstruct_adt_t)ivar_10);
             ivar_21 = ivar_44 || ivar_45;
             result = ivar_20 || ivar_21;
};

        return result;
}

extern ordstruct_adt_funtype_3_t ordstruct_adt__reduce_nat(mpz_ptr_t ivar_1, ordstruct_adt_funtype_5_t ivar_2){
        ordstruct_adt_funtype_3_t result;
        ordstruct_adt_closure_6_t cl22044;
        cl22044 = new_ordstruct_adt_closure_6();
        cl22044->fvar_1 = (ordstruct_adt_funtype_5_t)ivar_2;
        cl22044->fvar_1->count++;
        mpz_set(cl22044->fvar_2, ivar_1);
        release_ordstruct_adt_funtype_5(ivar_2);
        result = (ordstruct_adt_funtype_3_t)cl22044;

        return result;
}

extern ordstruct_adt_funtype_3_t ordstruct_adt__REDUCE_nat(ordstruct_adt_funtype_3_t ivar_1, ordstruct_adt_funtype_9_t ivar_3){
        ordstruct_adt_funtype_3_t result;
        ordstruct_adt_closure_10_t cl22048;
        cl22048 = new_ordstruct_adt_closure_10();
        cl22048->fvar_1 = (ordstruct_adt_funtype_9_t)ivar_3;
        cl22048->fvar_1->count++;
        cl22048->fvar_2 = (ordstruct_adt_funtype_3_t)ivar_1;
        cl22048->fvar_2->count++;
        release_ordstruct_adt_funtype_9(ivar_3);
        release_ordstruct_adt_funtype_3(ivar_1);
        result = (ordstruct_adt_funtype_3_t)cl22048;

        return result;
}