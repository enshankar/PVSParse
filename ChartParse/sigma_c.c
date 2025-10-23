//Code generated using pvs2ir2c
#include "sigma_c.h"

void release_sigma_funtype_2(sigma_funtype_2_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

sigma_funtype_2_t copy_sigma_funtype_2(sigma_funtype_2_t x){return x->ftbl->cptr(x);}

sigma_funtype_2_t equal_sigma_funtype_2(sigma_funtype_2_t x, sigma_funtype_2_t y){
        return false;}


mpq_ptr_t f_sigma_closure_3(struct sigma_closure_3_s * closure, sigma__T_t bvar){
        mpq_ptr_t result = h_sigma_closure_3(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

mpq_ptr_t m_sigma_closure_3(struct sigma_closure_3_s * closure, sigma__T_t bvar){
        return h_sigma_closure_3(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern mpq_ptr_t h_sigma_closure_3(sigma__T_t ivar_6, mpz_t ivar_3, mpz_t ivar_4, sigma_funtype_2_t ivar_1){
        mpq_ptr_t result;
        bool_t ivar_7;
        bool_t ivar_8;
        ivar_6->count++;
        bool_t ivar_9;
        ivar_6->count++;
        ivar_7 = ivar_8 || ivar_9;
        if (ivar_7){ 
             sigma__T->release_ptr(ivar_6, sigma__T);
             result = safe_malloc(sizeof(mpq_t));
             mpq_init(result);
             mpq_mk_set_ui(result, 0);
} else {
        
             result = (mpq_ptr_t)ivar_1->ftbl->fptr(ivar_1, ivar_6);
};

        return result;
}

sigma_closure_3_t new_sigma_closure_3(void){
        static struct sigma_funtype_2_ftbl_s ftbl = {.fptr = (mpq_ptr_t (*)(sigma_funtype_2_t, sigma__T_t))&f_sigma_closure_3, .mptr = (mpq_ptr_t (*)(sigma_funtype_2_t, sigma__T_t))&m_sigma_closure_3, .rptr =  (void (*)(sigma_funtype_2_t))&release_sigma_closure_3, .cptr = (sigma_funtype_2_t (*)(sigma_funtype_2_t))&copy_sigma_closure_3};
        sigma_closure_3_t tmp = (sigma_closure_3_t) safe_malloc(sizeof(struct sigma_closure_3_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_sigma_closure_3(sigma_funtype_2_t closure){
        sigma_closure_3_t x = (sigma_closure_3_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigma_funtype_2(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigma_closure_3_t copy_sigma_closure_3(sigma_closure_3_t x){
        sigma_closure_3_t y = new_sigma_closure_3();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        mpz_set(y->fvar_2, x->fvar_2);
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sigma_funtype_2_htbl_t new_htbl = (sigma_funtype_2_htbl_t) safe_malloc(sizeof(sigma_funtype_2_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigma_funtype_2_hashentry_t * new_data = (sigma_funtype_2_hashentry_t *) safe_malloc(new_htbl->size * sizeof(sigma_funtype_2_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(sigma_funtype_2_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern bool_t sigma__T_lowp(type_actual_t sigma__T, mpz_t ivar_1){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}

extern bool_t sigma__T_highp(type_actual_t sigma__T, mpz_t ivar_1){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}

extern mpq_ptr_t sigma__sigma(type_actual_t sigma__T, mpz_t ivar_1, mpz_t ivar_2, sigma_funtype_2_t ivar_3){
        mpq_ptr_t result;
        bool_t ivar_5;
        int64_t tmp3561 = mpz_cmp(ivar_1, ivar_2);
        ivar_5 = (tmp3561 > 0);
        if (ivar_5){ 
             release_sigma_funtype_2(ivar_3, sigma__T);
             result = safe_malloc(sizeof(mpq_t));
             mpq_init(result);
             mpq_mk_set_ui(result, 0);
} else {
        
             mpq_ptr_t ivar_9;
             sigma__T_t ivar_15;
             //copying to sigma__T from mpz;
             ivar_15 = (sigma__T_t)ivar_2;
             ivar_15->count++;
             ivar_9 = (mpq_ptr_t)ivar_3->ftbl->fptr(ivar_3, ivar_15);
             mpq_ptr_t ivar_10;
             mpz_ptr_t ivar_24;
             uint8_t ivar_20;
             ivar_20 = (uint8_t)1;
             mpz_mk_sub_ui(ivar_24, ivar_2, (uint64_t)ivar_20);
             ivar_10 = (mpq_ptr_t)sigma__sigma((type_actual_t)sigma__T, ivar_1, ivar_24, (sigma_funtype_2_t)ivar_3);
             mpq_mk_set(result ivar_9);
             mpq_add(result, result, ivar_10);
};

        return result;
}

extern mpq_ptr_t sigma__old_sigma(type_actual_t sigma__T, mpz_t ivar_1, mpz_t ivar_2, sigma_funtype_2_t ivar_3){
        mpq_ptr_t result;
        bool_t ivar_5;
        int64_t tmp3562 = mpz_cmp(ivar_1, ivar_2);
        ivar_5 = (tmp3562 > 0);
        if (ivar_5){ 
             release_sigma_funtype_2(ivar_3, sigma__T);
             result = safe_malloc(sizeof(mpq_t));
             mpq_init(result);
             mpq_mk_set_ui(result, 0);
} else {
        
             bool_t ivar_9;
             int64_t tmp3563 = mpz_cmp(ivar_2, ivar_1);
             ivar_9 = (tmp3563 == 0);
             if (ivar_9){  
           sigma__T_t ivar_17;
           //copying to sigma__T from mpz;
           ivar_17 = (sigma__T_t)ivar_1;
           ivar_17->count++;
           mpz_clear(ivar_1);
           result = (mpq_ptr_t)ivar_3->ftbl->fptr(ivar_3, ivar_17);
           ivar_3->ftbl->rptr(ivar_3);
} else {
             
           mpq_ptr_t ivar_18;
           sigma__T_t ivar_24;
           //copying to sigma__T from mpz;
           ivar_24 = (sigma__T_t)ivar_2;
           ivar_24->count++;
           ivar_18 = (mpq_ptr_t)ivar_3->ftbl->fptr(ivar_3, ivar_24);
           mpq_ptr_t ivar_19;
           mpz_ptr_t ivar_33;
           uint8_t ivar_29;
           ivar_29 = (uint8_t)1;
           mpz_mk_sub_ui(ivar_33, ivar_2, (uint64_t)ivar_29);
           ivar_19 = (mpq_ptr_t)sigma__old_sigma((type_actual_t)sigma__T, ivar_1, ivar_33, (sigma_funtype_2_t)ivar_3);
           mpq_mk_set(result ivar_18);
           mpq_add(result, result, ivar_19);
};
};

        return result;
}

extern sigma_funtype_2_t sigma__restrict(type_actual_t sigma__T, sigma_funtype_2_t ivar_1, mpz_t ivar_3, mpz_t ivar_4){
        sigma_funtype_2_t result;
        sigma_closure_3_t cl3564;
        cl3564 = new_sigma_closure_3();
        mpz_set(cl3564->fvar_1, ivar_3);
        mpz_set(cl3564->fvar_2, ivar_4);
        cl3564->fvar_3 = (sigma_funtype_2_t)ivar_1;
        cl3564->fvar_3->count++;
        release_sigma_funtype_2(ivar_1, sigma__T);
        result = (sigma_funtype_2_t)cl3564;

        return result;
}

extern mpq_ptr_t sigma__sum_it_def(sigma_closure_3_t sigma__T, mpz_t ivar_1, mpz_t ivar_2, sigma_funtype_2_t ivar_3, mpq_t ivar_5){
        mpq_ptr_t result;
        bool_t ivar_6;
        int64_t tmp3565 = mpz_cmp(ivar_1, ivar_2);
        ivar_6 = (tmp3565 > 0);
        if (ivar_6){ 
             release_sigma_funtype_2(ivar_3, sigma__T);
             result = safe_malloc(sizeof(mpq_t));
             mpq_init(result);
             //copying to mpq from mpq;
             mpq_mk_set(result, ivar_5);
} else {
        
             mpz_ptr_t ivar_26;
             uint8_t ivar_15;
             ivar_15 = (uint8_t)1;
             mpz_mk_set_ui(ivar_26, (uint64_t)ivar_15);
             mpz_add(ivar_26, ivar_26, ivar_1);
             mpq_ptr_t ivar_30;
             mpq_ptr_t ivar_17;
             ivar_17 = safe_malloc(sizeof(mpq_t));
             mpq_init(ivar_17);
             //copying to mpq from mpq;
             mpq_mk_set(ivar_17, ivar_5);
             mpq_ptr_t ivar_18;
             sigma__T_t ivar_23;
             //copying to sigma__T from mpz;
             ivar_23 = (sigma__T_t)ivar_1;
             ivar_23->count++;
             mpz_clear(ivar_1);
             ivar_18 = (mpq_ptr_t)ivar_3->ftbl->fptr(ivar_3, ivar_23);
             mpq_mk_set(ivar_30 ivar_17);
             mpq_add(ivar_30, ivar_30, ivar_18);
             result = (mpq_ptr_t)sigma__sum_it_def((sigma_closure_3_t)sigma__T, ivar_26, ivar_2, (sigma_funtype_2_t)ivar_3, ivar_30);
};

        return result;
}

extern mpq_ptr_t sigma__sum_it(sigma_closure_3_t sigma__T, mpz_t ivar_1, mpz_t ivar_2, sigma_funtype_2_t ivar_3){
        mpq_ptr_t result;
        uint8_t ivar_15;
        ivar_15 = (uint8_t)0;
        mpq_ptr_t ivar_14;
        //copying to mpq from uint8;
        mpq_mk_set_ui(ivar_14, ivar_15);
        result = (mpq_ptr_t)sigma__sum_it_def((sigma_closure_3_t)sigma__T, ivar_1, ivar_2, (sigma_funtype_2_t)ivar_3, ivar_14);

        return result;
}

extern mpq_ptr_t sigma__sigma_it(sigma_closure_3_t sigma__T, mpz_t ivar_1, mpz_t ivar_2, sigma_funtype_2_t ivar_3){
        mpq_ptr_t result;
        result = (mpq_ptr_t)sigma__sum_it((sigma_closure_3_t)sigma__T, ivar_1, ivar_2, (sigma_funtype_2_t)ivar_3);

        return result;
}