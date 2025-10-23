//Code generated using pvs2ir2c
#include "ordinals_c.h"

void release_ordinals_funtype_0(ordinals_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ordinals_funtype_0_t copy_ordinals_funtype_0(ordinals_funtype_0_t x){return x->ftbl->cptr(x);}

bool_t equal_ordinals_funtype_0(ordinals_funtype_0_t x, ordinals_funtype_0_t y){
        return false;}


ordinals_record_1_t new_ordinals_record_1(void){
        ordinals_record_1_t tmp = (ordinals_record_1_t) safe_malloc(sizeof(struct ordinals_record_1_s));
        tmp->count = 1;
        return tmp;}

void release_ordinals_record_1(ordinals_record_1_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ordinals_record_1_ptr(pointer_t x, type_actual_t T){
        release_ordinals_record_1((ordinals_record_1_t)x);
}

ordinals_record_1_t copy_ordinals_record_1(ordinals_record_1_t x){
        ordinals_record_1_t y = new_ordinals_record_1();
        mpz_set(y->project_1, x->project_1);
        mpz_set(y->project_2, x->project_2);
        mpz_set(y->project_3, x->project_3);
        y->count = 1;
        return y;}

bool_t equal_ordinals_record_1(ordinals_record_1_t x, ordinals_record_1_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        return tmp;}

bool_t equal_ordinals_record_1_ptr(pointer_t x, pointer_t y, actual_ordinals_record_1_t T){
        return equal_ordinals_record_1((ordinals_record_1_t)x, (ordinals_record_1_t)y);
}

actual_ordinals_record_1_t actual_ordinals_record_1(){
        actual_ordinals_record_1_t new = (actual_ordinals_record_1_t)safe_malloc(sizeof(struct actual_ordinals_record_1_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ordinals_record_1_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ordinals_record_1_ptr);
 

 
        return new;
 };

ordinals_record_1_t update_ordinals_record_1_project_1(ordinals_record_1_t x, mpz_ptr_t v){
        ordinals_record_1_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordinals_record_1(x); x->count--;};
        mpz_set(y->project_1, v);
        return y;}

ordinals_record_1_t update_ordinals_record_1_project_2(ordinals_record_1_t x, mpz_ptr_t v){
        ordinals_record_1_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordinals_record_1(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}

ordinals_record_1_t update_ordinals_record_1_project_3(ordinals_record_1_t x, mpz_ptr_t v){
        ordinals_record_1_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordinals_record_1(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}



void release_ordinals_funtype_2(ordinals_funtype_2_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ordinals_funtype_2_t copy_ordinals_funtype_2(ordinals_funtype_2_t x){return x->ftbl->cptr(x);}

bool_t equal_ordinals_funtype_2(ordinals_funtype_2_t x, ordinals_funtype_2_t y){
        return false;}


mpz_ptr_t f_ordinals_closure_3(struct ordinals_closure_3_s * closure, ordinals_record_1_t bvar){
        mpz_t bvar_1;
        mpz_init(bvar_1);
        mpz_set(bvar_1, bvar->project_1);
        mpz_t bvar_2;
        mpz_init(bvar_2);
        mpz_set(bvar_2, bvar->project_2);
        mpz_t bvar_3;
        mpz_init(bvar_3);
        mpz_set(bvar_3, bvar->project_3);
        release_ordinals_record_1(bvar);
        mpz_ptr_t result = h_ordinals_closure_3(bvar_1, bvar_2, bvar_3); 
        release_mpz(bvar_1);
        release_mpz(bvar_2);
        release_mpz(bvar_3);
        return result;}

mpz_ptr_t m_ordinals_closure_3(struct ordinals_closure_3_s * closure, mpz_ptr_t bvar_1, mpz_ptr_t bvar_2, mpz_ptr_t bvar_3){
        return h_ordinals_closure_3(bvar_1, bvar_2, bvar_3);}

extern mpz_ptr_t h_ordinals_closure_3(mpz_ptr_t ivar_4, mpz_ptr_t ivar_5, mpz_ptr_t ivar_6){
        mpz_ptr_t result;
        mpz_ptr_t ivar_7;
        uint8_t ivar_9;
        ivar_9 = (uint8_t)1;
        mpz_ptr_t ivar_10;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_10, ivar_5);
        mpz_clear(ivar_5);
        mpz_mk_add_ui(ivar_7, ivar_10, (uint64_t)ivar_9);
        mpz_ptr_t ivar_8;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_8, ivar_6);
        mpz_clear(ivar_6);
        mpz_mk_add(result, ivar_8, ivar_7);

        return result;
}

ordinals_closure_3_t new_ordinals_closure_3(void){
        static struct ordinals_funtype_2_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ordinals_funtype_2_t, ordinals_record_1_t))&f_ordinals_closure_3, .mptr = (mpz_ptr_t (*)(ordinals_funtype_2_t, mpz_ptr_t, mpz_ptr_t, mpz_ptr_t))&m_ordinals_closure_3, .rptr =  (void (*)(ordinals_funtype_2_t))&release_ordinals_closure_3, .cptr = (ordinals_funtype_2_t (*)(ordinals_funtype_2_t))&copy_ordinals_closure_3};
        ordinals_closure_3_t tmp = (ordinals_closure_3_t) safe_malloc(sizeof(struct ordinals_closure_3_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ordinals_closure_3(ordinals_funtype_2_t closure){
        ordinals_closure_3_t x = (ordinals_closure_3_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ordinals_closure_3_t copy_ordinals_closure_3(ordinals_closure_3_t x){
        ordinals_closure_3_t y = new_ordinals_closure_3();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            ordinals_funtype_2_htbl_t new_htbl = (ordinals_funtype_2_htbl_t) safe_malloc(sizeof(ordinals_funtype_2_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ordinals_funtype_2_hashentry_t * new_data = (ordinals_funtype_2_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ordinals_funtype_2_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(ordinals_funtype_2_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


mpz_ptr_t f_ordinals_closure_4(struct ordinals_closure_4_s * closure, ordinals_record_1_t bvar){
        mpz_t bvar_1;
        mpz_init(bvar_1);
        mpz_set(bvar_1, bvar->project_1);
        mpz_t bvar_2;
        mpz_init(bvar_2);
        mpz_set(bvar_2, bvar->project_2);
        mpz_t bvar_3;
        mpz_init(bvar_3);
        mpz_set(bvar_3, bvar->project_3);
        release_ordinals_record_1(bvar);
        mpz_ptr_t result = h_ordinals_closure_4(bvar_1, bvar_2, bvar_3, closure->fvar_1); 
        release_mpz(bvar_1);
        release_mpz(bvar_2);
        release_mpz(bvar_3);
        return result;}

mpz_ptr_t m_ordinals_closure_4(struct ordinals_closure_4_s * closure, mpz_ptr_t bvar_1, mpz_ptr_t bvar_2, mpz_ptr_t bvar_3){
        return h_ordinals_closure_4(bvar_1, bvar_2, bvar_3, closure->fvar_1);}

extern mpz_ptr_t h_ordinals_closure_4(mpz_ptr_t ivar_35, mpz_ptr_t ivar_36, mpz_ptr_t ivar_37, ordinals_funtype_2_t ivar_30){
        mpz_ptr_t result;
        mpz_ptr_t ivar_39;
        mpz_ptr_t ivar_32;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_32, ivar_35);
        mpz_clear(ivar_35);
        mpz_ptr_t ivar_33;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_33, ivar_36);
        mpz_clear(ivar_36);
        mpz_ptr_t ivar_34;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_34, ivar_37);
        mpz_clear(ivar_37);
        ivar_39 = (mpz_ptr_t)ivar_30->ftbl->mptr(ivar_30, ivar_32, ivar_33, ivar_34);
        mpz_ptr_t ivar_31;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_31, ivar_39);
        mpz_clear(ivar_39);
        mpz_ptr_t ivar_38;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_38, ivar_31);
        mpz_clear(ivar_31);
        //copying to mpz from mpz;
        mpz_mk_set(result, ivar_38);
        mpz_clear(ivar_38);

        return result;
}

ordinals_closure_4_t new_ordinals_closure_4(void){
        static struct ordinals_funtype_2_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ordinals_funtype_2_t, ordinals_record_1_t))&f_ordinals_closure_4, .mptr = (mpz_ptr_t (*)(ordinals_funtype_2_t, mpz_ptr_t, mpz_ptr_t, mpz_ptr_t))&m_ordinals_closure_4, .rptr =  (void (*)(ordinals_funtype_2_t))&release_ordinals_closure_4, .cptr = (ordinals_funtype_2_t (*)(ordinals_funtype_2_t))&copy_ordinals_closure_4};
        ordinals_closure_4_t tmp = (ordinals_closure_4_t) safe_malloc(sizeof(struct ordinals_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ordinals_closure_4(ordinals_funtype_2_t closure){
        ordinals_closure_4_t x = (ordinals_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ordinals_funtype_2(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ordinals_closure_4_t copy_ordinals_closure_4(ordinals_closure_4_t x){
        ordinals_closure_4_t y = new_ordinals_closure_4();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            ordinals_funtype_2_htbl_t new_htbl = (ordinals_funtype_2_htbl_t) safe_malloc(sizeof(ordinals_funtype_2_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ordinals_funtype_2_hashentry_t * new_data = (ordinals_funtype_2_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ordinals_funtype_2_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(ordinals_funtype_2_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern ordinals_funtype_0_t ordinals__size(void){
        ordinals_funtype_0_t result;
        uint8_t ivar_40;
        ivar_40 = (uint8_t)0;
        mpz_ptr_t ivar_16;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_16, ivar_40);
        ordinals_funtype_2_t ivar_30;
        ordinals_closure_3_t cl22049;
        cl22049 = new_ordinals_closure_3();
        ivar_30 = (ordinals_funtype_2_t)cl22049;
        ordinals_funtype_2_t ivar_17;
        ordinals_closure_4_t cl22050;
        cl22050 = new_ordinals_closure_4();
        cl22050->fvar_1 = (ordinals_funtype_2_t)ivar_30;
        cl22050->fvar_1->count++;
        release_ordinals_funtype_2(ivar_30);
        ivar_17 = (ordinals_funtype_2_t)cl22050;
        ordinals_funtype_0_t ivar_15;
        ivar_15 = (ordinals_funtype_0_t)ordstruct_adt__reduce_nat((mpz_ptr_t)ivar_16, (ordstruct_adt_funtype_5_t)ivar_17);
        //copying to ordinals_funtype_0 from ordinals_funtype_0;
        result = (ordinals_funtype_0_t)ivar_15;
        result->count++;
        release_ordinals_funtype_0(ivar_15);

        return result;
}

extern bool_t ordinals__lessp(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2){
        bool_t result;
        bool_t ivar_9;
        ivar_1->count++;
        ivar_9 = (bool_t)r_ordstruct_adt__zerop((ordstruct_adt__ordstruct_adt_t)ivar_1);
        if (ivar_9){ 
             release_ordstruct_adt__ordstruct_adt(ivar_1);
             bool_t ivar_4;
             ivar_4 = (bool_t)r_ordstruct_adt__zerop((ordstruct_adt__ordstruct_adt_t)ivar_2);
             result = !ivar_4;
} else {
        
             mpz_ptr_t ivar_13;
             ivar_1->count++;
             ivar_13 = (mpz_ptr_t)ordstruct_adt__ordstruct_adt_coef((ordstruct_adt__ordstruct_adt_t)ivar_1);
             ordstruct_adt__ordstruct_adt_t ivar_14;
             ordstruct_adt__ordstruct_adt_t ivar_20;
             ivar_1->count++;
             ivar_20 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_exp((ordstruct_adt__ordstruct_adt_t)ivar_1);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             ivar_14 = (ordstruct_adt__ordstruct_adt_t)ivar_20;
             ivar_14->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_20);
             ordstruct_adt__ordstruct_adt_t ivar_15;
             ordstruct_adt__ordstruct_adt_t ivar_23;
             ivar_23 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_rest((ordstruct_adt__ordstruct_adt_t)ivar_1);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             ivar_15 = (ordstruct_adt__ordstruct_adt_t)ivar_23;
             ivar_15->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_23);
             bool_t ivar_26;
             ivar_2->count++;
             ivar_26 = (bool_t)r_ordstruct_adt__zerop((ordstruct_adt__ordstruct_adt_t)ivar_2);
             if (ivar_26){  
           release_ordstruct_adt__ordstruct_adt(ivar_2);
           release_ordstruct_adt__ordstruct_adt(ivar_14);
           release_ordstruct_adt__ordstruct_adt(ivar_15);
           result = (bool_t) false;
} else {
             
           mpz_ptr_t ivar_30;
           ivar_2->count++;
           ivar_30 = (mpz_ptr_t)ordstruct_adt__ordstruct_adt_coef((ordstruct_adt__ordstruct_adt_t)ivar_2);
           ordstruct_adt__ordstruct_adt_t ivar_31;
           ordstruct_adt__ordstruct_adt_t ivar_37;
           ivar_2->count++;
           ivar_37 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_exp((ordstruct_adt__ordstruct_adt_t)ivar_2);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           ivar_31 = (ordstruct_adt__ordstruct_adt_t)ivar_37;
           ivar_31->count++;
           release_ordstruct_adt__ordstruct_adt(ivar_37);
           ordstruct_adt__ordstruct_adt_t ivar_32;
           ordstruct_adt__ordstruct_adt_t ivar_40;
           ivar_40 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_rest((ordstruct_adt__ordstruct_adt_t)ivar_2);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           ivar_32 = (ordstruct_adt__ordstruct_adt_t)ivar_40;
           ivar_32->count++;
           release_ordstruct_adt__ordstruct_adt(ivar_40);
           bool_t ivar_42;
           ivar_14->count++;
           ivar_31->count++;
           ivar_42 = (bool_t)ordinals__lessp((ordstruct_adt__ordstruct_adt_t)ivar_14, (ordstruct_adt__ordstruct_adt_t)ivar_31);
           bool_t ivar_43;
           bool_t ivar_49;
           bool_t ivar_51;
           ivar_14->count++;
           ivar_31->count++;
           ivar_51 = (bool_t) equal_ordstruct_adt__ordstruct_adt(ivar_14, ivar_31);
           bool_t ivar_52;
           mpz_ptr_t ivar_56;
           ivar_56 = safe_malloc(sizeof(mpz_t));
           mpz_init(ivar_56);
           //copying to mpz from mpz;
           mpz_mk_set(ivar_56, ivar_13);
           mpz_ptr_t ivar_57;
           ivar_57 = safe_malloc(sizeof(mpz_t));
           mpz_init(ivar_57);
           //copying to mpz from mpz;
           mpz_mk_set(ivar_57, ivar_30);
           int64_t tmp22053 = mpz_cmp(ivar_56, ivar_57);
           ivar_52 = (tmp22053 < 0);
           ivar_49 = ivar_51 && ivar_52;
           bool_t ivar_50;
           bool_t ivar_60;
           ivar_60 = (bool_t) equal_ordstruct_adt__ordstruct_adt(ivar_14, ivar_31);
           bool_t ivar_61;
           bool_t ivar_65;
           mpz_ptr_t ivar_67;
           //copying to mpz from mpz;
           mpz_mk_set(ivar_67, ivar_13);
           mpz_clear(ivar_13);
           mpz_ptr_t ivar_68;
           //copying to mpz from mpz;
           mpz_mk_set(ivar_68, ivar_30);
           mpz_clear(ivar_30);
           int64_t tmp22054 = mpz_cmp(ivar_67, ivar_68);
           ivar_65 = (tmp22054 == 0);
           bool_t ivar_66;
           ivar_66 = (bool_t)ordinals__lessp((ordstruct_adt__ordstruct_adt_t)ivar_15, (ordstruct_adt__ordstruct_adt_t)ivar_32);
           ivar_61 = ivar_65 && ivar_66;
           ivar_50 = ivar_60 && ivar_61;
           ivar_43 = ivar_49 || ivar_50;
           result = ivar_42 || ivar_43;
};
};

        return result;
}

extern bool_t ordinals__greaterp(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2){
        bool_t result;
        result = (bool_t)ordinals__lessp((ordstruct_adt__ordstruct_adt_t)ivar_2, (ordstruct_adt__ordstruct_adt_t)ivar_1);

        return result;
}

extern bool_t ordinals__lesseqp(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2){
        bool_t result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_2->count++;
        ivar_3 = (bool_t)ordinals__lessp((ordstruct_adt__ordstruct_adt_t)ivar_1, (ordstruct_adt__ordstruct_adt_t)ivar_2);
        bool_t ivar_4;
        ivar_4 = (bool_t) equal_ordstruct_adt__ordstruct_adt(ivar_1, ivar_2);
        result = ivar_3 || ivar_4;

        return result;
}

extern bool_t ordinals__greatereqp(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2){
        bool_t result;
        bool_t ivar_3;
        ivar_2->count++;
        ivar_1->count++;
        ivar_3 = (bool_t)ordinals__lessp((ordstruct_adt__ordstruct_adt_t)ivar_2, (ordstruct_adt__ordstruct_adt_t)ivar_1);
        bool_t ivar_4;
        ivar_4 = (bool_t) equal_ordstruct_adt__ordstruct_adt(ivar_2, ivar_1);
        result = ivar_3 || ivar_4;

        return result;
}

extern bool_t ordinals__ordinalp(ordstruct_adt__ordstruct_adt_t ivar_1){
        bool_t result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)r_ordstruct_adt__zerop((ordstruct_adt__ordstruct_adt_t)ivar_1);
        if (ivar_3){ 
             release_ordstruct_adt__ordstruct_adt(ivar_1);
             result = (bool_t) true;
} else {
        
             ordstruct_adt__ordstruct_adt_t ivar_8;
             ordstruct_adt__ordstruct_adt_t ivar_14;
             ivar_1->count++;
             ivar_14 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_exp((ordstruct_adt__ordstruct_adt_t)ivar_1);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             ivar_8 = (ordstruct_adt__ordstruct_adt_t)ivar_14;
             ivar_8->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_14);
             ordstruct_adt__ordstruct_adt_t ivar_9;
             ordstruct_adt__ordstruct_adt_t ivar_17;
             ivar_17 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_rest((ordstruct_adt__ordstruct_adt_t)ivar_1);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             ivar_9 = (ordstruct_adt__ordstruct_adt_t)ivar_17;
             ivar_9->count++;
             release_ordstruct_adt__ordstruct_adt(ivar_17);
             bool_t ivar_19;
             ivar_8->count++;
             ivar_19 = (bool_t)ordinals__ordinalp((ordstruct_adt__ordstruct_adt_t)ivar_8);
             bool_t ivar_20;
             bool_t ivar_24;
             ivar_9->count++;
             ivar_24 = (bool_t)ordinals__ordinalp((ordstruct_adt__ordstruct_adt_t)ivar_9);
             bool_t ivar_25;
             bool_t ivar_30;
             ivar_9->count++;
             ivar_30 = (bool_t)r_ordstruct_adt__zerop((ordstruct_adt__ordstruct_adt_t)ivar_9);
             if (ivar_30){  
           release_ordstruct_adt__ordstruct_adt(ivar_9);
           release_ordstruct_adt__ordstruct_adt(ivar_8);
           ivar_25 = (bool_t) true;
} else {
             
           ordstruct_adt__ordstruct_adt_t ivar_35;
           ordstruct_adt__ordstruct_adt_t ivar_41;
           ivar_9->count++;
           ivar_41 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_exp((ordstruct_adt__ordstruct_adt_t)ivar_9);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           ivar_35 = (ordstruct_adt__ordstruct_adt_t)ivar_41;
           ivar_35->count++;
           release_ordstruct_adt__ordstruct_adt(ivar_41);
           ivar_25 = (bool_t)ordinals__lessp((ordstruct_adt__ordstruct_adt_t)ivar_35, (ordstruct_adt__ordstruct_adt_t)ivar_8);
};
             ivar_20 = ivar_24 && ivar_25;
             result = ivar_19 && ivar_20;
};

        return result;
}