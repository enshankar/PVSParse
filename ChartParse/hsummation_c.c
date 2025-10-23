//Code generated using pvs2ir2c
#include "hsummation_c.h"

void release_hsummation_funtype_0(hsummation_funtype_0_t x){
        if (x->htbl != NULL){

            if (x->htbl->data != NULL) safe_free(x->htbl->data);

            safe_free(x->htbl);}

        x->ftbl->rptr(x);}

hsummation_funtype_0_t copy_hsummation_funtype_0(hsummation_funtype_0_t x){return x->ftbl->cptr(x);}


mpz_ptr_t f_hsummation_closure_1(struct hsummation_closure_1_s * closure, mpz_t bvar){
        mpz_ptr_t result = h_hsummation_closure_1(bvar, closure->fvar_1); 
        return result;}

mpz_ptr_t m_hsummation_closure_1(struct hsummation_closure_1_s * closure, mpz_t bvar){
        return h_hsummation_closure_1(bvar, closure->fvar_1);}

extern mpz_ptr_t h_hsummation_closure_1(mpz_t ivar_2, hsummation_funtype_0_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_3;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        int64_t tmp4312 = mpz_cmp_ui(ivar_2, ivar_5);
        ivar_3 = (tmp4312 == 0);
        if (ivar_3){ 
             release_mpz(ivar_2);
             result = safe_malloc(sizeof(mpz_t));
             mpz_init(result);
             mpz_mk_set_ui(result, 0);
} else {
        
             mpz_ptr_t ivar_7;
             mpz_ptr_t ivar_15;
             uint8_t ivar_11;
             ivar_11 = (uint8_t)1;
             mpz_mk_sub_ui(ivar_15, ivar_2, (uint64_t)ivar_11);
             ivar_7 = (mpz_ptr_t)ivar_1->ftbl->fptr(ivar_1, ivar_15);
             mpz_ptr_t ivar_8;
             hsummation_funtype_0_t ivar_21;
             hsummation_funtype_0_t ivar_23;
             ivar_1->count++;
             ivar_23 = (hsummation_funtype_0_t)hsummation_hsum((hsummation_funtype_0_t)ivar_1);
             //copying to hsummation_funtype_0 from hsummation_funtype_0;
             ivar_21 = (hsummation_funtype_0_t)ivar_23;
             ivar_21->count++;
             release_hsummation_funtype_0(ivar_23);
             mpz_ptr_t ivar_25;
             uint8_t ivar_18;
             ivar_18 = (uint8_t)1;
             mpz_mk_sub_ui(ivar_25, ivar_2, (uint64_t)ivar_18);
             ivar_8 = (mpz_ptr_t)ivar_21->ftbl->fptr(ivar_21, ivar_25);
             ivar_21->ftbl->rptr(ivar_21);
             mpz_mk_add(result, ivar_8, ivar_7);
};

        return result;
}

hsummation_closure_1_t new_hsummation_closure_1(void){
        static struct hsummation_funtype_0_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(hsummation_funtype_0_t, mpz_t))&f_hsummation_closure_1, .mptr = (mpz_ptr_t (*)(hsummation_funtype_0_t, mpz_t))&m_hsummation_closure_1, .rptr =  (void (*)(hsummation_funtype_0_t))&release_hsummation_closure_1, .cptr = (hsummation_funtype_0_t (*)(hsummation_funtype_0_t))&copy_hsummation_closure_1};
        hsummation_closure_1_t tmp = (hsummation_closure_1_t) safe_malloc(sizeof(struct hsummation_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_hsummation_closure_1(hsummation_funtype_0_t closure){
        hsummation_closure_1_t x = (hsummation_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
         release_hsummation_funtype_0(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

hsummation_closure_1_t copy_hsummation_closure_1(hsummation_closure_1_t x){
        hsummation_closure_1_t y = new_hsummation_closure_1();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            hsummation_funtype_0_htbl_t new_htbl = (hsummation_funtype_0_htbl_t) safe_malloc(sizeof(hsummation_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            hsummation_funtype_0_hashentry_t * new_data = (hsummation_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(hsummation_funtype_0_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(hsummation_funtype_0_hashentry_t)));
        }
        return y;
}


mpz_ptr_t f_hsummation_closure_2(struct hsummation_closure_2_s * closure, mpz_t bvar){
        mpz_ptr_t result = h_hsummation_closure_2(bvar); 
        return result;}

mpz_ptr_t m_hsummation_closure_2(struct hsummation_closure_2_s * closure, mpz_t bvar){
        return h_hsummation_closure_2(bvar);}

extern mpz_ptr_t h_hsummation_closure_2(mpz_t ivar_6){
        mpz_ptr_t result;
        result = (mpz_ptr_t)hsummation_id(ivar_6);

        return result;
}

hsummation_closure_2_t new_hsummation_closure_2(void){
        static struct hsummation_funtype_0_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(hsummation_funtype_0_t, mpz_t))&f_hsummation_closure_2, .mptr = (mpz_ptr_t (*)(hsummation_funtype_0_t, mpz_t))&m_hsummation_closure_2, .rptr =  (void (*)(hsummation_funtype_0_t))&release_hsummation_closure_2, .cptr = (hsummation_funtype_0_t (*)(hsummation_funtype_0_t))&copy_hsummation_closure_2};
        hsummation_closure_2_t tmp = (hsummation_closure_2_t) safe_malloc(sizeof(struct hsummation_closure_2_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_hsummation_closure_2(hsummation_funtype_0_t closure){
        hsummation_closure_2_t x = (hsummation_closure_2_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

hsummation_closure_2_t copy_hsummation_closure_2(hsummation_closure_2_t x){
        hsummation_closure_2_t y = new_hsummation_closure_2();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            hsummation_funtype_0_htbl_t new_htbl = (hsummation_funtype_0_htbl_t) safe_malloc(sizeof(hsummation_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            hsummation_funtype_0_hashentry_t * new_data = (hsummation_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(hsummation_funtype_0_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(hsummation_funtype_0_hashentry_t)));
        }
        return y;
}


mpz_ptr_t f_hsummation_closure_3(struct hsummation_closure_3_s * closure, mpz_t bvar){
        mpz_ptr_t result = h_hsummation_closure_3(bvar); 
        return result;}

mpz_ptr_t m_hsummation_closure_3(struct hsummation_closure_3_s * closure, mpz_t bvar){
        return h_hsummation_closure_3(bvar);}

extern mpz_ptr_t h_hsummation_closure_3(mpz_t ivar_6){
        mpz_ptr_t result;
        result = (mpz_ptr_t)hsummation_square(ivar_6);

        return result;
}

hsummation_closure_3_t new_hsummation_closure_3(void){
        static struct hsummation_funtype_0_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(hsummation_funtype_0_t, mpz_t))&f_hsummation_closure_3, .mptr = (mpz_ptr_t (*)(hsummation_funtype_0_t, mpz_t))&m_hsummation_closure_3, .rptr =  (void (*)(hsummation_funtype_0_t))&release_hsummation_closure_3, .cptr = (hsummation_funtype_0_t (*)(hsummation_funtype_0_t))&copy_hsummation_closure_3};
        hsummation_closure_3_t tmp = (hsummation_closure_3_t) safe_malloc(sizeof(struct hsummation_closure_3_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_hsummation_closure_3(hsummation_funtype_0_t closure){
        hsummation_closure_3_t x = (hsummation_closure_3_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

hsummation_closure_3_t copy_hsummation_closure_3(hsummation_closure_3_t x){
        hsummation_closure_3_t y = new_hsummation_closure_3();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            hsummation_funtype_0_htbl_t new_htbl = (hsummation_funtype_0_htbl_t) safe_malloc(sizeof(hsummation_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            hsummation_funtype_0_hashentry_t * new_data = (hsummation_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(hsummation_funtype_0_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(hsummation_funtype_0_hashentry_t)));
        }
        return y;
}


mpz_ptr_t f_hsummation_closure_4(struct hsummation_closure_4_s * closure, mpz_t bvar){
        mpz_ptr_t result = h_hsummation_closure_4(bvar); 
        return result;}

mpz_ptr_t m_hsummation_closure_4(struct hsummation_closure_4_s * closure, mpz_t bvar){
        return h_hsummation_closure_4(bvar);}

extern mpz_ptr_t h_hsummation_closure_4(mpz_t ivar_6){
        mpz_ptr_t result;
        result = (mpz_ptr_t)hsummation_cube(ivar_6);

        return result;
}

hsummation_closure_4_t new_hsummation_closure_4(void){
        static struct hsummation_funtype_0_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(hsummation_funtype_0_t, mpz_t))&f_hsummation_closure_4, .mptr = (mpz_ptr_t (*)(hsummation_funtype_0_t, mpz_t))&m_hsummation_closure_4, .rptr =  (void (*)(hsummation_funtype_0_t))&release_hsummation_closure_4, .cptr = (hsummation_funtype_0_t (*)(hsummation_funtype_0_t))&copy_hsummation_closure_4};
        hsummation_closure_4_t tmp = (hsummation_closure_4_t) safe_malloc(sizeof(struct hsummation_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_hsummation_closure_4(hsummation_funtype_0_t closure){
        hsummation_closure_4_t x = (hsummation_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

hsummation_closure_4_t copy_hsummation_closure_4(hsummation_closure_4_t x){
        hsummation_closure_4_t y = new_hsummation_closure_4();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            hsummation_funtype_0_htbl_t new_htbl = (hsummation_funtype_0_htbl_t) safe_malloc(sizeof(hsummation_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            hsummation_funtype_0_hashentry_t * new_data = (hsummation_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(hsummation_funtype_0_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(hsummation_funtype_0_hashentry_t)));
        }
        return y;
}


mpz_ptr_t f_hsummation_closure_5(struct hsummation_closure_5_s * closure, mpz_t bvar){
        mpz_ptr_t result = h_hsummation_closure_5(bvar); 
        return result;}

mpz_ptr_t m_hsummation_closure_5(struct hsummation_closure_5_s * closure, mpz_t bvar){
        return h_hsummation_closure_5(bvar);}

extern mpz_ptr_t h_hsummation_closure_5(mpz_t ivar_6){
        mpz_ptr_t result;
        result = (mpz_ptr_t)hsummation_quart(ivar_6);

        return result;
}

hsummation_closure_5_t new_hsummation_closure_5(void){
        static struct hsummation_funtype_0_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(hsummation_funtype_0_t, mpz_t))&f_hsummation_closure_5, .mptr = (mpz_ptr_t (*)(hsummation_funtype_0_t, mpz_t))&m_hsummation_closure_5, .rptr =  (void (*)(hsummation_funtype_0_t))&release_hsummation_closure_5, .cptr = (hsummation_funtype_0_t (*)(hsummation_funtype_0_t))&copy_hsummation_closure_5};
        hsummation_closure_5_t tmp = (hsummation_closure_5_t) safe_malloc(sizeof(struct hsummation_closure_5_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_hsummation_closure_5(hsummation_funtype_0_t closure){
        hsummation_closure_5_t x = (hsummation_closure_5_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

hsummation_closure_5_t copy_hsummation_closure_5(hsummation_closure_5_t x){
        hsummation_closure_5_t y = new_hsummation_closure_5();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            hsummation_funtype_0_htbl_t new_htbl = (hsummation_funtype_0_htbl_t) safe_malloc(sizeof(hsummation_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            hsummation_funtype_0_hashentry_t * new_data = (hsummation_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(hsummation_funtype_0_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(hsummation_funtype_0_hashentry_t)));
        }
        return y;
}

extern hsummation_funtype_0_t hsummation_hsum(hsummation_funtype_0_t ivar_1){
        hsummation_funtype_0_t result;
        hsummation_closure_1_t cl4313;
        cl4313 = new_hsummation_closure_1();
        cl4313->fvar_1 = (hsummation_funtype_0_t)ivar_1;
        result = (hsummation_funtype_0_t)cl4313;

        return result;
}

extern mpz_ptr_t hsummation_id(mpz_t ivar_1){
        mpz_ptr_t result;
        //copying to mpz from mpz;
        mpz_mk_set(result, ivar_1);
        mpz_clear(ivar_1);

        return result;
}

extern mpz_ptr_t hsummation_square(mpz_t ivar_1){
        mpz_ptr_t result;
        mpz_mk_mul(result, ivar_1, ivar_1);

        return result;
}

extern mpz_ptr_t hsummation_cube(mpz_t ivar_1){
        mpz_ptr_t result;
        mpz_ptr_t ivar_2;
        mpz_mk_mul(ivar_2, ivar_1, ivar_1);
        mpz_mk_mul(result, ivar_1, ivar_2);

        return result;
}

extern mpz_ptr_t hsummation_quart(mpz_t ivar_1){
        mpz_ptr_t result;
        mpz_ptr_t ivar_7;
        ivar_7 = (mpz_ptr_t)hsummation_square(ivar_1);
        result = (mpz_ptr_t)hsummation_square(ivar_7);

        return result;
}

extern mpz_ptr_t hsummation_sum_id(mpz_t ivar_1){
        mpz_ptr_t result;
        hsummation_funtype_0_t ivar_4;
        hsummation_funtype_0_t ivar_8;
        hsummation_closure_2_t cl4314;
        cl4314 = new_hsummation_closure_2();
        ivar_8 = (hsummation_funtype_0_t)cl4314;
        hsummation_funtype_0_t ivar_7;
        ivar_7 = (hsummation_funtype_0_t)hsummation_hsum((hsummation_funtype_0_t)ivar_8);
        //copying to hsummation_funtype_0 from hsummation_funtype_0;
        ivar_4 = (hsummation_funtype_0_t)ivar_7;
        ivar_4->count++;
        release_hsummation_funtype_0(ivar_7);
        result = (mpz_ptr_t)ivar_4->ftbl->fptr(ivar_4, ivar_1);
        ivar_4->ftbl->rptr(ivar_4);

        return result;
}

extern mpz_ptr_t hsummation_sum_square(mpz_t ivar_1){
        mpz_ptr_t result;
        hsummation_funtype_0_t ivar_4;
        hsummation_funtype_0_t ivar_8;
        hsummation_closure_3_t cl4315;
        cl4315 = new_hsummation_closure_3();
        ivar_8 = (hsummation_funtype_0_t)cl4315;
        hsummation_funtype_0_t ivar_7;
        ivar_7 = (hsummation_funtype_0_t)hsummation_hsum((hsummation_funtype_0_t)ivar_8);
        //copying to hsummation_funtype_0 from hsummation_funtype_0;
        ivar_4 = (hsummation_funtype_0_t)ivar_7;
        ivar_4->count++;
        release_hsummation_funtype_0(ivar_7);
        result = (mpz_ptr_t)ivar_4->ftbl->fptr(ivar_4, ivar_1);
        ivar_4->ftbl->rptr(ivar_4);

        return result;
}

extern mpz_ptr_t hsummation_sum_cube(mpz_t ivar_1){
        mpz_ptr_t result;
        hsummation_funtype_0_t ivar_4;
        hsummation_funtype_0_t ivar_8;
        hsummation_closure_4_t cl4316;
        cl4316 = new_hsummation_closure_4();
        ivar_8 = (hsummation_funtype_0_t)cl4316;
        hsummation_funtype_0_t ivar_7;
        ivar_7 = (hsummation_funtype_0_t)hsummation_hsum((hsummation_funtype_0_t)ivar_8);
        //copying to hsummation_funtype_0 from hsummation_funtype_0;
        ivar_4 = (hsummation_funtype_0_t)ivar_7;
        ivar_4->count++;
        release_hsummation_funtype_0(ivar_7);
        result = (mpz_ptr_t)ivar_4->ftbl->fptr(ivar_4, ivar_1);
        ivar_4->ftbl->rptr(ivar_4);

        return result;
}

extern mpz_ptr_t hsummation_sum_quart(mpz_t ivar_1){
        mpz_ptr_t result;
        hsummation_funtype_0_t ivar_4;
        hsummation_funtype_0_t ivar_8;
        hsummation_closure_5_t cl4317;
        cl4317 = new_hsummation_closure_5();
        ivar_8 = (hsummation_funtype_0_t)cl4317;
        hsummation_funtype_0_t ivar_7;
        ivar_7 = (hsummation_funtype_0_t)hsummation_hsum((hsummation_funtype_0_t)ivar_8);
        //copying to hsummation_funtype_0 from hsummation_funtype_0;
        ivar_4 = (hsummation_funtype_0_t)ivar_7;
        ivar_4->count++;
        release_hsummation_funtype_0(ivar_7);
        result = (mpz_ptr_t)ivar_4->ftbl->fptr(ivar_4, ivar_1);
        ivar_4->ftbl->rptr(ivar_4);

        return result;
}