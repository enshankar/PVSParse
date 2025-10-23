//Code generated using pvs2ir2c
#include "ctopdown_c.h"


ctopdown_ent_adt_t new_ctopdown_ent_adt(void){
        ctopdown_ent_adt_t tmp = (ctopdown_ent_adt_t) safe_malloc(sizeof(struct ctopdown_ent_adt_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_ent_adt(ctopdown_ent_adt_t x){
switch (x->ctopdown_ent_adt_index) {
case 3:  release_ctopdown_good((ctopdown_good_t) x); break;
}}

ctopdown_ent_adt_t copy_ctopdown_ent_adt(ctopdown_ent_adt_t x){
        ctopdown_ent_adt_t y = new_ctopdown_ent_adt();
        y->ctopdown_ent_adt_index = (uint8_t)x->ctopdown_ent_adt_index;
        y->count = 1;
        return y;}

bool_t equal_ctopdown_ent_adt(ctopdown_ent_adt_t x, ctopdown_ent_adt_t y){
        bool_t tmp = x->ctopdown_ent_adt_index == y->ctopdown_ent_adt_index;
        switch  (x->ctopdown_ent_adt_index) {
                case 3: tmp = tmp && equal_ctopdown_good((ctopdown_good_t) x, (ctopdown_good_t) y); break;
        }
        return tmp;
}

ctopdown_ent_adt_t update_ctopdown_ent_adt_ctopdown_ent_adt_index(ctopdown_ent_adt_t x, uint8_t v){
        ctopdown_ent_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_ent_adt(x); x->count--;};
        y->ctopdown_ent_adt_index = (uint8_t)v;
        return y;}




ctopdown_good_t new_ctopdown_good(void){
        ctopdown_good_t tmp = (ctopdown_good_t) safe_malloc(sizeof(struct ctopdown_good_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_good(ctopdown_good_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_good_t copy_ctopdown_good(ctopdown_good_t x){
        ctopdown_good_t y = new_ctopdown_good();
        y->ctopdown_ent_adt_index = (uint8_t)x->ctopdown_ent_adt_index;
        mpz_set(y->span, x->span);
        y->count = 1;
        return y;}

bool_t equal_ctopdown_good(ctopdown_good_t x, ctopdown_good_t y){
        bool_t tmp = true;
        tmp = tmp && x->ctopdown_ent_adt_index == y->ctopdown_ent_adt_index;
        tmp = tmp && x->span == y->span;
        return tmp;}

ctopdown_good_t update_ctopdown_good_ctopdown_ent_adt_index(ctopdown_good_t x, uint8_t v){
        ctopdown_good_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_good(x); x->count--;};
        y->ctopdown_ent_adt_index = (uint8_t)v;
        return y;}

ctopdown_good_t update_ctopdown_good_span(ctopdown_good_t x, mpz_t v){
        ctopdown_good_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_good(x); x->count--;};
        mpz_set(y->span, v);
        return y;}



void release_ctopdown_funtype_2(ctopdown_funtype_2_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_2_t copy_ctopdown_funtype_2(ctopdown_funtype_2_t x){return x->ftbl->cptr(x);}

void release_ctopdown_funtype_3(ctopdown_funtype_3_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_3_t copy_ctopdown_funtype_3(ctopdown_funtype_3_t x){return x->ftbl->cptr(x);}

void release_ctopdown_funtype_4(ctopdown_funtype_4_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_4_t copy_ctopdown_funtype_4(ctopdown_funtype_4_t x){return x->ftbl->cptr(x);}


mpz_ptr_t f_ctopdown_closure_5(struct ctopdown_closure_5_s * closure, ctopdown_ent_adt_t bvar){
        mpz_ptr_t result = h_ctopdown_closure_5(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

mpz_ptr_t m_ctopdown_closure_5(struct ctopdown_closure_5_s * closure, ctopdown_ent_adt_t bvar){
        return h_ctopdown_closure_5(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern mpz_ptr_t h_ctopdown_closure_5(ctopdown_ent_adt_t ivar_5, ctopdown_funtype_4_t ivar_4, mpz_t ivar_3, mpz_t ivar_2, mpz_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_17;
        ivar_5->count++;
        ivar_17 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_5);
        if (ivar_17){ 
             release_ctopdown_ent_adt(ivar_5);
             result = safe_malloc(sizeof(mpz_t));
             mpz_init(result);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_1);
} else {
        
             bool_t ivar_21;
             ivar_5->count++;
             ivar_21 = (bool_t)r_ctopdown_pendingp((ctopdown_ent_adt_t)ivar_5);
             if (ivar_21){  
           release_ctopdown_ent_adt(ivar_5);
           result = safe_malloc(sizeof(mpz_t));
           mpz_init(result);
           //copying to mpz from mpz;
           mpz_mk_set(result, ivar_2);
} else {
             
           bool_t ivar_25;
           ivar_5->count++;
           ivar_25 = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_5);
           if (ivar_25){   
           release_ctopdown_ent_adt(ivar_5);
           result = safe_malloc(sizeof(mpz_t));
           mpz_init(result);
           //copying to mpz from mpz;
           mpz_mk_set(result, ivar_3);
} else {
           
           mpz_ptr_t ivar_29;
           ivar_29 = (mpz_ptr_t)ctopdown_ent_adt_span((ctopdown_ent_adt_t)ivar_5);
           result = (mpz_ptr_t)ivar_4->ftbl->fptr(ivar_4, ivar_29);
};
};
};

        return result;
}

ctopdown_closure_5_t new_ctopdown_closure_5(void){
        static struct ctopdown_funtype_3_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ctopdown_funtype_3_t, ctopdown_ent_adt_t))&f_ctopdown_closure_5, .mptr = (mpz_ptr_t (*)(ctopdown_funtype_3_t, ctopdown_ent_adt_t))&m_ctopdown_closure_5, .rptr =  (void (*)(ctopdown_funtype_3_t))&release_ctopdown_closure_5, .cptr = (ctopdown_funtype_3_t (*)(ctopdown_funtype_3_t))&copy_ctopdown_closure_5};
        ctopdown_closure_5_t tmp = (ctopdown_closure_5_t) safe_malloc(sizeof(struct ctopdown_closure_5_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        mpz_init(tmp->fvar_3);
        mpz_init(tmp->fvar_4);
        return tmp;}

void release_ctopdown_closure_5(ctopdown_funtype_3_t closure){
        ctopdown_closure_5_t x = (ctopdown_closure_5_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_funtype_4(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_5_t copy_ctopdown_closure_5(ctopdown_closure_5_t x){
        ctopdown_closure_5_t y = new_ctopdown_closure_5();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        mpz_set(y->fvar_2, x->fvar_2);
        mpz_set(y->fvar_3, x->fvar_3);
        mpz_set(y->fvar_4, x->fvar_4);
        if (x->htbl != NULL){
            ctopdown_funtype_3_htbl_t new_htbl = (ctopdown_funtype_3_htbl_t) safe_malloc(sizeof(ctopdown_funtype_3_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_3_hashentry_t * new_data = (ctopdown_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_3_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_3_hashentry_t)));
        }
        return y;
}


ctopdown_record_6_t new_ctopdown_record_6(void){
        ctopdown_record_6_t tmp = (ctopdown_record_6_t) safe_malloc(sizeof(struct ctopdown_record_6_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_record_6(ctopdown_record_6_t x){
        x->count--;
        if (x->count <= 0){
         release_ctopdown_ent_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_record_6_t copy_ctopdown_record_6(ctopdown_record_6_t x){
        ctopdown_record_6_t y = new_ctopdown_record_6();
        mpz_set(y->project_1, x->project_1);
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_ctopdown_record_6(ctopdown_record_6_t x, ctopdown_record_6_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_ctopdown_ent_adt(x->project_2, y->project_2);
        return tmp;}

ctopdown_record_6_t update_ctopdown_record_6_project_1(ctopdown_record_6_t x, mpz_t v){
        ctopdown_record_6_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_6(x); x->count--;};
        mpz_set(y->project_1, v);
        return y;}

ctopdown_record_6_t update_ctopdown_record_6_project_2(ctopdown_record_6_t x, ctopdown_ent_adt_t v){
        ctopdown_record_6_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ctopdown_ent_adt(x->project_2);};}
        else {y = copy_ctopdown_record_6(x); x->count--; y->project_2->count--;};
        y->project_2 = (ctopdown_ent_adt_t)v;
        return y;}



void release_ctopdown_funtype_7(ctopdown_funtype_7_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_7_t copy_ctopdown_funtype_7(ctopdown_funtype_7_t x){return x->ftbl->cptr(x);}


mpz_ptr_t f_ctopdown_closure_8(struct ctopdown_closure_8_s * closure, ctopdown_ent_adt_t bvar){
        mpz_ptr_t result = h_ctopdown_closure_8(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

mpz_ptr_t m_ctopdown_closure_8(struct ctopdown_closure_8_s * closure, ctopdown_ent_adt_t bvar){
        return h_ctopdown_closure_8(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern mpz_ptr_t h_ctopdown_closure_8(ctopdown_ent_adt_t ivar_5, ctopdown_funtype_3_t ivar_3, ctopdown_funtype_7_t ivar_4, ctopdown_funtype_3_t ivar_2, ctopdown_funtype_3_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_21;
        ivar_5->count++;
        ivar_21 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_5);
        if (ivar_21){ 
             result = (mpz_ptr_t)ivar_1->ftbl->fptr(ivar_1, ivar_5);
} else {
        
             bool_t ivar_29;
             ivar_5->count++;
             ivar_29 = (bool_t)r_ctopdown_pendingp((ctopdown_ent_adt_t)ivar_5);
             if (ivar_29){  
           result = (mpz_ptr_t)ivar_2->ftbl->fptr(ivar_2, ivar_5);
} else {
             
           bool_t ivar_37;
           ivar_5->count++;
           ivar_37 = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_5);
           if (ivar_37){   
           result = (mpz_ptr_t)ivar_3->ftbl->fptr(ivar_3, ivar_5);
} else {
           
           mpz_ptr_t ivar_41;
           ivar_5->count++;
           ivar_41 = (mpz_ptr_t)ctopdown_ent_adt_span((ctopdown_ent_adt_t)ivar_5);
           result = (mpz_ptr_t)ivar_4->ftbl->mptr(ivar_4, ivar_41, ivar_5);
};
};
};

        return result;
}

ctopdown_closure_8_t new_ctopdown_closure_8(void){
        static struct ctopdown_funtype_3_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ctopdown_funtype_3_t, ctopdown_ent_adt_t))&f_ctopdown_closure_8, .mptr = (mpz_ptr_t (*)(ctopdown_funtype_3_t, ctopdown_ent_adt_t))&m_ctopdown_closure_8, .rptr =  (void (*)(ctopdown_funtype_3_t))&release_ctopdown_closure_8, .cptr = (ctopdown_funtype_3_t (*)(ctopdown_funtype_3_t))&copy_ctopdown_closure_8};
        ctopdown_closure_8_t tmp = (ctopdown_closure_8_t) safe_malloc(sizeof(struct ctopdown_closure_8_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ctopdown_closure_8(ctopdown_funtype_3_t closure){
        ctopdown_closure_8_t x = (ctopdown_closure_8_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_funtype_3(x->fvar_1);
         release_ctopdown_funtype_7(x->fvar_2);
         release_ctopdown_funtype_3(x->fvar_3);
         release_ctopdown_funtype_3(x->fvar_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_8_t copy_ctopdown_closure_8(ctopdown_closure_8_t x){
        ctopdown_closure_8_t y = new_ctopdown_closure_8();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        if (x->htbl != NULL){
            ctopdown_funtype_3_htbl_t new_htbl = (ctopdown_funtype_3_htbl_t) safe_malloc(sizeof(ctopdown_funtype_3_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_3_hashentry_t * new_data = (ctopdown_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_3_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_3_hashentry_t)));
        }
        return y;
}

void release_ctopdown_funtype_9(ctopdown_funtype_9_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_9_t copy_ctopdown_funtype_9(ctopdown_funtype_9_t x){return x->ftbl->cptr(x);}

void release_ctopdown_funtype_10(ctopdown_funtype_10_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_10_t copy_ctopdown_funtype_10(ctopdown_funtype_10_t x){return x->ftbl->cptr(x);}


ordstruct_adt_ordstruct_adt_t f_ctopdown_closure_11(struct ctopdown_closure_11_s * closure, ctopdown_ent_adt_t bvar){
        ordstruct_adt_ordstruct_adt_t result = h_ctopdown_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

ordstruct_adt_ordstruct_adt_t m_ctopdown_closure_11(struct ctopdown_closure_11_s * closure, ctopdown_ent_adt_t bvar){
        return h_ctopdown_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern ordstruct_adt_ordstruct_adt_t h_ctopdown_closure_11(ctopdown_ent_adt_t ivar_5, ctopdown_funtype_10_t ivar_4, ordstruct_adt_ordstruct_adt_t ivar_3, ordstruct_adt_ordstruct_adt_t ivar_2, ordstruct_adt_ordstruct_adt_t ivar_1){
        ordstruct_adt_ordstruct_adt_t result;
        bool_t ivar_17;
        ivar_5->count++;
        ivar_17 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_5);
        if (ivar_17){ 
             release_ctopdown_ent_adt(ivar_5);
             //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
             result = (ordstruct_adt_ordstruct_adt_t)ivar_1;
             result->count++;
} else {
        
             bool_t ivar_21;
             ivar_5->count++;
             ivar_21 = (bool_t)r_ctopdown_pendingp((ctopdown_ent_adt_t)ivar_5);
             if (ivar_21){  
           release_ctopdown_ent_adt(ivar_5);
           //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
           result = (ordstruct_adt_ordstruct_adt_t)ivar_2;
           result->count++;
} else {
             
           bool_t ivar_25;
           ivar_5->count++;
           ivar_25 = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_5);
           if (ivar_25){   
           release_ctopdown_ent_adt(ivar_5);
           //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
           result = (ordstruct_adt_ordstruct_adt_t)ivar_3;
           result->count++;
} else {
           
           mpz_ptr_t ivar_29;
           ivar_29 = (mpz_ptr_t)ctopdown_ent_adt_span((ctopdown_ent_adt_t)ivar_5);
           ordstruct_adt_ordstruct_adt_t ivar_34;
           ivar_34 = (ordstruct_adt_ordstruct_adt_t)ivar_4->ftbl->fptr(ivar_4, ivar_29);
           //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
           result = (ordstruct_adt_ordstruct_adt_t)ivar_34;
           result->count++;
           release_ordstruct_adt_ordstruct_adt(ivar_34);
};
};
};

        return result;
}

ctopdown_closure_11_t new_ctopdown_closure_11(void){
        static struct ctopdown_funtype_9_ftbl_s ftbl = {.fptr = (ordstruct_adt_ordstruct_adt_t (*)(ctopdown_funtype_9_t, ctopdown_ent_adt_t))&f_ctopdown_closure_11, .mptr = (ordstruct_adt_ordstruct_adt_t (*)(ctopdown_funtype_9_t, ctopdown_ent_adt_t))&m_ctopdown_closure_11, .rptr =  (void (*)(ctopdown_funtype_9_t))&release_ctopdown_closure_11, .cptr = (ctopdown_funtype_9_t (*)(ctopdown_funtype_9_t))&copy_ctopdown_closure_11};
        ctopdown_closure_11_t tmp = (ctopdown_closure_11_t) safe_malloc(sizeof(struct ctopdown_closure_11_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ctopdown_closure_11(ctopdown_funtype_9_t closure){
        ctopdown_closure_11_t x = (ctopdown_closure_11_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_funtype_10(x->fvar_1);
         release_ordstruct_adt_ordstruct_adt(x->fvar_2);
         release_ordstruct_adt_ordstruct_adt(x->fvar_3);
         release_ordstruct_adt_ordstruct_adt(x->fvar_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_11_t copy_ctopdown_closure_11(ctopdown_closure_11_t x){
        ctopdown_closure_11_t y = new_ctopdown_closure_11();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        if (x->htbl != NULL){
            ctopdown_funtype_9_htbl_t new_htbl = (ctopdown_funtype_9_htbl_t) safe_malloc(sizeof(ctopdown_funtype_9_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_9_hashentry_t * new_data = (ctopdown_funtype_9_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_9_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_9_hashentry_t)));
        }
        return y;
}

void release_ctopdown_funtype_12(ctopdown_funtype_12_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_12_t copy_ctopdown_funtype_12(ctopdown_funtype_12_t x){return x->ftbl->cptr(x);}


ordstruct_adt_ordstruct_adt_t f_ctopdown_closure_13(struct ctopdown_closure_13_s * closure, ctopdown_ent_adt_t bvar){
        ordstruct_adt_ordstruct_adt_t result = h_ctopdown_closure_13(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

ordstruct_adt_ordstruct_adt_t m_ctopdown_closure_13(struct ctopdown_closure_13_s * closure, ctopdown_ent_adt_t bvar){
        return h_ctopdown_closure_13(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern ordstruct_adt_ordstruct_adt_t h_ctopdown_closure_13(ctopdown_ent_adt_t ivar_5, ctopdown_funtype_9_t ivar_3, ctopdown_funtype_12_t ivar_4, ctopdown_funtype_9_t ivar_2, ctopdown_funtype_9_t ivar_1){
        ordstruct_adt_ordstruct_adt_t result;
        bool_t ivar_21;
        ivar_5->count++;
        ivar_21 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_5);
        if (ivar_21){ 
             ordstruct_adt_ordstruct_adt_t ivar_18;
             ivar_18 = (ordstruct_adt_ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_5);
             //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
             result = (ordstruct_adt_ordstruct_adt_t)ivar_18;
             result->count++;
             release_ordstruct_adt_ordstruct_adt(ivar_18);
} else {
        
             bool_t ivar_29;
             ivar_5->count++;
             ivar_29 = (bool_t)r_ctopdown_pendingp((ctopdown_ent_adt_t)ivar_5);
             if (ivar_29){  
           ordstruct_adt_ordstruct_adt_t ivar_26;
           ivar_26 = (ordstruct_adt_ordstruct_adt_t)ivar_2->ftbl->fptr(ivar_2, ivar_5);
           //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
           result = (ordstruct_adt_ordstruct_adt_t)ivar_26;
           result->count++;
           release_ordstruct_adt_ordstruct_adt(ivar_26);
} else {
             
           bool_t ivar_37;
           ivar_5->count++;
           ivar_37 = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_5);
           if (ivar_37){   
           ordstruct_adt_ordstruct_adt_t ivar_34;
           ivar_34 = (ordstruct_adt_ordstruct_adt_t)ivar_3->ftbl->fptr(ivar_3, ivar_5);
           //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
           result = (ordstruct_adt_ordstruct_adt_t)ivar_34;
           result->count++;
           release_ordstruct_adt_ordstruct_adt(ivar_34);
} else {
           
           mpz_ptr_t ivar_41;
           ivar_5->count++;
           ivar_41 = (mpz_ptr_t)ctopdown_ent_adt_span((ctopdown_ent_adt_t)ivar_5);
           ordstruct_adt_ordstruct_adt_t ivar_47;
           ivar_47 = (ordstruct_adt_ordstruct_adt_t)ivar_4->ftbl->mptr(ivar_4, ivar_41, ivar_5);
           //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
           result = (ordstruct_adt_ordstruct_adt_t)ivar_47;
           result->count++;
           release_ordstruct_adt_ordstruct_adt(ivar_47);
};
};
};

        return result;
}

ctopdown_closure_13_t new_ctopdown_closure_13(void){
        static struct ctopdown_funtype_9_ftbl_s ftbl = {.fptr = (ordstruct_adt_ordstruct_adt_t (*)(ctopdown_funtype_9_t, ctopdown_ent_adt_t))&f_ctopdown_closure_13, .mptr = (ordstruct_adt_ordstruct_adt_t (*)(ctopdown_funtype_9_t, ctopdown_ent_adt_t))&m_ctopdown_closure_13, .rptr =  (void (*)(ctopdown_funtype_9_t))&release_ctopdown_closure_13, .cptr = (ctopdown_funtype_9_t (*)(ctopdown_funtype_9_t))&copy_ctopdown_closure_13};
        ctopdown_closure_13_t tmp = (ctopdown_closure_13_t) safe_malloc(sizeof(struct ctopdown_closure_13_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ctopdown_closure_13(ctopdown_funtype_9_t closure){
        ctopdown_closure_13_t x = (ctopdown_closure_13_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_funtype_9(x->fvar_1);
         release_ctopdown_funtype_12(x->fvar_2);
         release_ctopdown_funtype_9(x->fvar_3);
         release_ctopdown_funtype_9(x->fvar_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_13_t copy_ctopdown_closure_13(ctopdown_closure_13_t x){
        ctopdown_closure_13_t y = new_ctopdown_closure_13();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        if (x->htbl != NULL){
            ctopdown_funtype_9_htbl_t new_htbl = (ctopdown_funtype_9_htbl_t) safe_malloc(sizeof(ctopdown_funtype_9_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_9_hashentry_t * new_data = (ctopdown_funtype_9_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_9_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_9_hashentry_t)));
        }
        return y;
}


ctopdown_peg_adt_t new_ctopdown_peg_adt(void){
        ctopdown_peg_adt_t tmp = (ctopdown_peg_adt_t) safe_malloc(sizeof(struct ctopdown_peg_adt_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_peg_adt(ctopdown_peg_adt_t x){
switch (x->ctopdown_peg_adt_index) {
case 2:  release_ctopdown_any((ctopdown_any_t) x); break;
case 3:  release_ctopdown_terminal((ctopdown_terminal_t) x); break;
case 4:  release_ctopdown_concat((ctopdown_concat_t) x); break;
case 5:  release_ctopdown_choice((ctopdown_choice_t) x); break;
case 6:  release_ctopdown_check((ctopdown_check_t) x); break;
case 7:  release_ctopdown_neg((ctopdown_neg_t) x); break;
}}

ctopdown_peg_adt_t copy_ctopdown_peg_adt(ctopdown_peg_adt_t x){
        ctopdown_peg_adt_t y = new_ctopdown_peg_adt();
        y->ctopdown_peg_adt_index = (uint8_t)x->ctopdown_peg_adt_index;
        y->count = 1;
        return y;}

bool_t equal_ctopdown_peg_adt(ctopdown_peg_adt_t x, ctopdown_peg_adt_t y){
        bool_t tmp = x->ctopdown_peg_adt_index == y->ctopdown_peg_adt_index;
        switch  (x->ctopdown_peg_adt_index) {
                case 2: tmp = tmp && equal_ctopdown_any((ctopdown_any_t) x, (ctopdown_any_t) y); break;
                case 3: tmp = tmp && equal_ctopdown_terminal((ctopdown_terminal_t) x, (ctopdown_terminal_t) y); break;
                case 4: tmp = tmp && equal_ctopdown_concat((ctopdown_concat_t) x, (ctopdown_concat_t) y); break;
                case 5: tmp = tmp && equal_ctopdown_choice((ctopdown_choice_t) x, (ctopdown_choice_t) y); break;
                case 6: tmp = tmp && equal_ctopdown_check((ctopdown_check_t) x, (ctopdown_check_t) y); break;
                case 7: tmp = tmp && equal_ctopdown_neg((ctopdown_neg_t) x, (ctopdown_neg_t) y); break;
        }
        return tmp;
}

ctopdown_peg_adt_t update_ctopdown_peg_adt_ctopdown_peg_adt_index(ctopdown_peg_adt_t x, uint8_t v){
        ctopdown_peg_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_peg_adt(x); x->count--;};
        y->ctopdown_peg_adt_index = (uint8_t)v;
        return y;}




ctopdown_array_15_t new_ctopdown_array_15(uint16_t size){
        ctopdown_array_15_t tmp = (ctopdown_array_15_t) safe_malloc(sizeof(struct ctopdown_array_15_s) + (size * sizeof(bool_t)));
        tmp->count = 1;
        tmp->size = size;
         return tmp;}

void release_ctopdown_array_15(ctopdown_array_15_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

ctopdown_array_15_t copy_ctopdown_array_15(ctopdown_array_15_t x){
        ctopdown_array_15_t tmp = new_ctopdown_array_15(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (bool_t)x->elems[i];};
         return tmp;}

bool_t equal_ctopdown_array_15(ctopdown_array_15_t x, ctopdown_array_15_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] != y->elems[i]); i++;};
        return tmp;}

ctopdown_array_15_t update_ctopdown_array_15(ctopdown_array_15_t x, uint32_t i, bool_t v){
        ctopdown_array_15_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_ctopdown_array_15(x);
                x->count--;};
        y->elems[i] = (bool_t)v;
        return y;}




ctopdown_any_t new_ctopdown_any(void){
        ctopdown_any_t tmp = (ctopdown_any_t) safe_malloc(sizeof(struct ctopdown_any_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_any(ctopdown_any_t x){
        x->count--;
        if (x->count <= 0){
         release_ctopdown_array_15(x->p);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_any_t copy_ctopdown_any(ctopdown_any_t x){
        ctopdown_any_t y = new_ctopdown_any();
        y->ctopdown_peg_adt_index = (uint8_t)x->ctopdown_peg_adt_index;
        y->p = x->p;
        if (y->p != NULL){y->p->count++;};
        y->count = 1;
        return y;}

bool_t equal_ctopdown_any(ctopdown_any_t x, ctopdown_any_t y){
        bool_t tmp = true;
        tmp = tmp && x->ctopdown_peg_adt_index == y->ctopdown_peg_adt_index;
        tmp = tmp && equal_ctopdown_array_15(x->p, y->p);
        return tmp;}

ctopdown_any_t update_ctopdown_any_ctopdown_peg_adt_index(ctopdown_any_t x, uint8_t v){
        ctopdown_any_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_any(x); x->count--;};
        y->ctopdown_peg_adt_index = (uint8_t)v;
        return y;}

ctopdown_any_t update_ctopdown_any_p(ctopdown_any_t x, ctopdown_array_15_t v){
        ctopdown_any_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->p != NULL){release_ctopdown_array_15(x->p);};}
        else {y = copy_ctopdown_any(x); x->count--; y->p->count--;};
        y->p = (ctopdown_array_15_t)v;
        return y;}




ctopdown_terminal_t new_ctopdown_terminal(void){
        ctopdown_terminal_t tmp = (ctopdown_terminal_t) safe_malloc(sizeof(struct ctopdown_terminal_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_terminal(ctopdown_terminal_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_terminal_t copy_ctopdown_terminal(ctopdown_terminal_t x){
        ctopdown_terminal_t y = new_ctopdown_terminal();
        y->ctopdown_peg_adt_index = (uint8_t)x->ctopdown_peg_adt_index;
        y->a = (uint8_t)x->a;
        y->count = 1;
        return y;}

bool_t equal_ctopdown_terminal(ctopdown_terminal_t x, ctopdown_terminal_t y){
        bool_t tmp = true;
        tmp = tmp && x->ctopdown_peg_adt_index == y->ctopdown_peg_adt_index;
        tmp = tmp && x->a == y->a;
        return tmp;}

ctopdown_terminal_t update_ctopdown_terminal_ctopdown_peg_adt_index(ctopdown_terminal_t x, uint8_t v){
        ctopdown_terminal_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_terminal(x); x->count--;};
        y->ctopdown_peg_adt_index = (uint8_t)v;
        return y;}

ctopdown_terminal_t update_ctopdown_terminal_a(ctopdown_terminal_t x, uint8_t v){
        ctopdown_terminal_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_terminal(x); x->count--;};
        y->a = (uint8_t)v;
        return y;}




ctopdown_concat_t new_ctopdown_concat(void){
        ctopdown_concat_t tmp = (ctopdown_concat_t) safe_malloc(sizeof(struct ctopdown_concat_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_concat(ctopdown_concat_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_concat_t copy_ctopdown_concat(ctopdown_concat_t x){
        ctopdown_concat_t y = new_ctopdown_concat();
        y->ctopdown_peg_adt_index = (uint8_t)x->ctopdown_peg_adt_index;
        y->e1 = (uint8_t)x->e1;
        y->e2 = (uint8_t)x->e2;
        y->count = 1;
        return y;}

bool_t equal_ctopdown_concat(ctopdown_concat_t x, ctopdown_concat_t y){
        bool_t tmp = true;
        tmp = tmp && x->ctopdown_peg_adt_index == y->ctopdown_peg_adt_index;
        tmp = tmp && x->e1 == y->e1;
        tmp = tmp && x->e2 == y->e2;
        return tmp;}

ctopdown_concat_t update_ctopdown_concat_ctopdown_peg_adt_index(ctopdown_concat_t x, uint8_t v){
        ctopdown_concat_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_concat(x); x->count--;};
        y->ctopdown_peg_adt_index = (uint8_t)v;
        return y;}

ctopdown_concat_t update_ctopdown_concat_e1(ctopdown_concat_t x, uint8_t v){
        ctopdown_concat_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_concat(x); x->count--;};
        y->e1 = (uint8_t)v;
        return y;}

ctopdown_concat_t update_ctopdown_concat_e2(ctopdown_concat_t x, uint8_t v){
        ctopdown_concat_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_concat(x); x->count--;};
        y->e2 = (uint8_t)v;
        return y;}




ctopdown_choice_t new_ctopdown_choice(void){
        ctopdown_choice_t tmp = (ctopdown_choice_t) safe_malloc(sizeof(struct ctopdown_choice_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_choice(ctopdown_choice_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_choice_t copy_ctopdown_choice(ctopdown_choice_t x){
        ctopdown_choice_t y = new_ctopdown_choice();
        y->ctopdown_peg_adt_index = (uint8_t)x->ctopdown_peg_adt_index;
        y->e1 = (uint8_t)x->e1;
        y->e2 = (uint8_t)x->e2;
        y->count = 1;
        return y;}

bool_t equal_ctopdown_choice(ctopdown_choice_t x, ctopdown_choice_t y){
        bool_t tmp = true;
        tmp = tmp && x->ctopdown_peg_adt_index == y->ctopdown_peg_adt_index;
        tmp = tmp && x->e1 == y->e1;
        tmp = tmp && x->e2 == y->e2;
        return tmp;}

ctopdown_choice_t update_ctopdown_choice_ctopdown_peg_adt_index(ctopdown_choice_t x, uint8_t v){
        ctopdown_choice_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_choice(x); x->count--;};
        y->ctopdown_peg_adt_index = (uint8_t)v;
        return y;}

ctopdown_choice_t update_ctopdown_choice_e1(ctopdown_choice_t x, uint8_t v){
        ctopdown_choice_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_choice(x); x->count--;};
        y->e1 = (uint8_t)v;
        return y;}

ctopdown_choice_t update_ctopdown_choice_e2(ctopdown_choice_t x, uint8_t v){
        ctopdown_choice_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_choice(x); x->count--;};
        y->e2 = (uint8_t)v;
        return y;}




ctopdown_check_t new_ctopdown_check(void){
        ctopdown_check_t tmp = (ctopdown_check_t) safe_malloc(sizeof(struct ctopdown_check_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_check(ctopdown_check_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_check_t copy_ctopdown_check(ctopdown_check_t x){
        ctopdown_check_t y = new_ctopdown_check();
        y->ctopdown_peg_adt_index = (uint8_t)x->ctopdown_peg_adt_index;
        y->e = (uint8_t)x->e;
        y->count = 1;
        return y;}

bool_t equal_ctopdown_check(ctopdown_check_t x, ctopdown_check_t y){
        bool_t tmp = true;
        tmp = tmp && x->ctopdown_peg_adt_index == y->ctopdown_peg_adt_index;
        tmp = tmp && x->e == y->e;
        return tmp;}

ctopdown_check_t update_ctopdown_check_ctopdown_peg_adt_index(ctopdown_check_t x, uint8_t v){
        ctopdown_check_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_check(x); x->count--;};
        y->ctopdown_peg_adt_index = (uint8_t)v;
        return y;}

ctopdown_check_t update_ctopdown_check_e(ctopdown_check_t x, uint8_t v){
        ctopdown_check_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_check(x); x->count--;};
        y->e = (uint8_t)v;
        return y;}




ctopdown_neg_t new_ctopdown_neg(void){
        ctopdown_neg_t tmp = (ctopdown_neg_t) safe_malloc(sizeof(struct ctopdown_neg_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_neg(ctopdown_neg_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_neg_t copy_ctopdown_neg(ctopdown_neg_t x){
        ctopdown_neg_t y = new_ctopdown_neg();
        y->ctopdown_peg_adt_index = (uint8_t)x->ctopdown_peg_adt_index;
        y->e = (uint8_t)x->e;
        y->count = 1;
        return y;}

bool_t equal_ctopdown_neg(ctopdown_neg_t x, ctopdown_neg_t y){
        bool_t tmp = true;
        tmp = tmp && x->ctopdown_peg_adt_index == y->ctopdown_peg_adt_index;
        tmp = tmp && x->e == y->e;
        return tmp;}

ctopdown_neg_t update_ctopdown_neg_ctopdown_peg_adt_index(ctopdown_neg_t x, uint8_t v){
        ctopdown_neg_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_neg(x); x->count--;};
        y->ctopdown_peg_adt_index = (uint8_t)v;
        return y;}

ctopdown_neg_t update_ctopdown_neg_e(ctopdown_neg_t x, uint8_t v){
        ctopdown_neg_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_neg(x); x->count--;};
        y->e = (uint8_t)v;
        return y;}



void release_ctopdown_funtype_22(ctopdown_funtype_22_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_22_t copy_ctopdown_funtype_22(ctopdown_funtype_22_t x){return x->ftbl->cptr(x);}

void release_ctopdown_funtype_23(ctopdown_funtype_23_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_23_t copy_ctopdown_funtype_23(ctopdown_funtype_23_t x){return x->ftbl->cptr(x);}

void release_ctopdown_funtype_24(ctopdown_funtype_24_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_24_t copy_ctopdown_funtype_24(ctopdown_funtype_24_t x){return x->ftbl->cptr(x);}


ctopdown_array_25_t new_ctopdown_array_25(uint16_t size){
        ctopdown_array_25_t tmp = (ctopdown_array_25_t) safe_malloc(sizeof(struct ctopdown_array_25_s) + (size * sizeof(mpz_t)));
        tmp->count = 1;
        tmp->size = size;
         return tmp;}

void release_ctopdown_array_25(ctopdown_array_25_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

ctopdown_array_25_t copy_ctopdown_array_25(ctopdown_array_25_t x){
        ctopdown_array_25_t tmp = new_ctopdown_array_25(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){mpz_set(tmp->elems[i], x->elems[i]);};
         return tmp;}

bool_t equal_ctopdown_array_25(ctopdown_array_25_t x, ctopdown_array_25_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] != y->elems[i]); i++;};
        return tmp;}

ctopdown_array_25_t update_ctopdown_array_25(ctopdown_array_25_t x, uint32_t i, mpz_t v){
        ctopdown_array_25_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_ctopdown_array_25(x);
                x->count--;};
        mpz_set(y->elems[i], v);
        return y;}




ctopdown_record_26_t new_ctopdown_record_26(void){
        ctopdown_record_26_t tmp = (ctopdown_record_26_t) safe_malloc(sizeof(struct ctopdown_record_26_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_record_26(ctopdown_record_26_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_record_26_t copy_ctopdown_record_26(ctopdown_record_26_t x){
        ctopdown_record_26_t y = new_ctopdown_record_26();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->count = 1;
        return y;}

bool_t equal_ctopdown_record_26(ctopdown_record_26_t x, ctopdown_record_26_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

ctopdown_record_26_t update_ctopdown_record_26_project_1(ctopdown_record_26_t x, uint8_t v){
        ctopdown_record_26_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_26(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ctopdown_record_26_t update_ctopdown_record_26_project_2(ctopdown_record_26_t x, uint8_t v){
        ctopdown_record_26_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_26(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}



void release_ctopdown_funtype_27(ctopdown_funtype_27_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_27_t copy_ctopdown_funtype_27(ctopdown_funtype_27_t x){return x->ftbl->cptr(x);}


mpz_ptr_t f_ctopdown_closure_28(struct ctopdown_closure_28_s * closure, ctopdown_peg_adt_t bvar){
        mpz_ptr_t result = h_ctopdown_closure_28(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8); 
        return result;}

mpz_ptr_t m_ctopdown_closure_28(struct ctopdown_closure_28_s * closure, ctopdown_peg_adt_t bvar){
        return h_ctopdown_closure_28(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8);}

extern mpz_ptr_t h_ctopdown_closure_28(ctopdown_peg_adt_t ivar_9, ctopdown_array_25_t ivar_7, ctopdown_array_25_t ivar_8, ctopdown_funtype_27_t ivar_6, ctopdown_funtype_27_t ivar_5, ctopdown_array_25_t ivar_4, ctopdown_funtype_24_t ivar_3, mpz_t ivar_2, mpz_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_29;
        ivar_9->count++;
        ivar_29 = (bool_t)r_ctopdown_epsilonp((ctopdown_peg_adt_t)ivar_9);
        if (ivar_29){ 
             release_ctopdown_peg_adt(ivar_9);
             result = safe_malloc(sizeof(mpz_t));
             mpz_init(result);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_1);
} else {
        
             bool_t ivar_33;
             ivar_9->count++;
             ivar_33 = (bool_t)r_ctopdown_failurep((ctopdown_peg_adt_t)ivar_9);
             if (ivar_33){  
           release_ctopdown_peg_adt(ivar_9);
           result = safe_malloc(sizeof(mpz_t));
           mpz_init(result);
           //copying to mpz from mpz;
           mpz_mk_set(result, ivar_2);
} else {
             
           bool_t ivar_45;
           ivar_9->count++;
           ivar_45 = (bool_t)r_ctopdown_anyp((ctopdown_peg_adt_t)ivar_9);
           if (ivar_45){   
           ctopdown_array_15_t ivar_37;
           ctopdown_array_15_t ivar_39;
           ivar_39 = (ctopdown_array_15_t)ctopdown_peg_adt_p((ctopdown_peg_adt_t)ivar_9);
           //copying to ctopdown_array_15 from ctopdown_array_15;
           ivar_37 = (ctopdown_array_15_t)ivar_39;
           ivar_37->count++;
           release_ctopdown_array_15(ivar_39);
           result = (mpz_ptr_t)ivar_3->ftbl->fptr(ivar_3, ivar_37);
} else {
           
           bool_t ivar_57;
           ivar_9->count++;
           ivar_57 = (bool_t)r_ctopdown_terminalp((ctopdown_peg_adt_t)ivar_9);
           if (ivar_57){    
            uint8_t ivar_49;
            ivar_49 = (uint8_t)ctopdown_peg_adt_a((ctopdown_peg_adt_t)ivar_9);
            result = safe_malloc(sizeof(mpz_t));
            mpz_init(result);
            mpz_mk_set(result, ivar_4->elems[ivar_49]);
} else {
           
            bool_t ivar_75;
            ivar_9->count++;
            ivar_75 = (bool_t)r_ctopdown_concatp((ctopdown_peg_adt_t)ivar_9);
            if (ivar_75){     
             uint8_t ivar_61;
             ivar_9->count++;
             ivar_61 = (uint8_t)ctopdown_peg_adt_e1((ctopdown_peg_adt_t)ivar_9);
             uint8_t ivar_62;
             ivar_62 = (uint8_t)ctopdown_peg_adt_e2((ctopdown_peg_adt_t)ivar_9);
             result = (mpz_ptr_t)ivar_5->ftbl->mptr(ivar_5, ivar_61, ivar_62);
} else {
            
             bool_t ivar_93;
             ivar_9->count++;
             ivar_93 = (bool_t)r_ctopdown_orp((ctopdown_peg_adt_t)ivar_9);
             if (ivar_93){      
              uint8_t ivar_79;
              ivar_9->count++;
              ivar_79 = (uint8_t)ctopdown_peg_adt_e1((ctopdown_peg_adt_t)ivar_9);
              uint8_t ivar_80;
              ivar_80 = (uint8_t)ctopdown_peg_adt_e2((ctopdown_peg_adt_t)ivar_9);
              result = (mpz_ptr_t)ivar_6->ftbl->mptr(ivar_6, ivar_79, ivar_80);
} else {
             
              bool_t ivar_105;
              ivar_9->count++;
              ivar_105 = (bool_t)r_ctopdown_andp((ctopdown_peg_adt_t)ivar_9);
              if (ivar_105){       
               uint8_t ivar_97;
               ivar_97 = (uint8_t)ctopdown_peg_adt_e((ctopdown_peg_adt_t)ivar_9);
               result = safe_malloc(sizeof(mpz_t));
               mpz_init(result);
               mpz_mk_set(result, ivar_7->elems[ivar_97]);
} else {
              
               uint8_t ivar_109;
               ivar_109 = (uint8_t)ctopdown_peg_adt_e((ctopdown_peg_adt_t)ivar_9);
               result = safe_malloc(sizeof(mpz_t));
               mpz_init(result);
               mpz_mk_set(result, ivar_8->elems[ivar_109]);
};
};
};
};
};
};
};

        return result;
}

ctopdown_closure_28_t new_ctopdown_closure_28(void){
        static struct ctopdown_funtype_23_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ctopdown_funtype_23_t, ctopdown_peg_adt_t))&f_ctopdown_closure_28, .mptr = (mpz_ptr_t (*)(ctopdown_funtype_23_t, ctopdown_peg_adt_t))&m_ctopdown_closure_28, .rptr =  (void (*)(ctopdown_funtype_23_t))&release_ctopdown_closure_28, .cptr = (ctopdown_funtype_23_t (*)(ctopdown_funtype_23_t))&copy_ctopdown_closure_28};
        ctopdown_closure_28_t tmp = (ctopdown_closure_28_t) safe_malloc(sizeof(struct ctopdown_closure_28_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_7);
        mpz_init(tmp->fvar_8);
        return tmp;}

void release_ctopdown_closure_28(ctopdown_funtype_23_t closure){
        ctopdown_closure_28_t x = (ctopdown_closure_28_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_array_25(x->fvar_1);
         release_ctopdown_array_25(x->fvar_2);
         release_ctopdown_funtype_27(x->fvar_3);
         release_ctopdown_funtype_27(x->fvar_4);
         release_ctopdown_array_25(x->fvar_5);
         release_ctopdown_funtype_24(x->fvar_6);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_28_t copy_ctopdown_closure_28(ctopdown_closure_28_t x){
        ctopdown_closure_28_t y = new_ctopdown_closure_28();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        y->fvar_6 = x->fvar_6; x->fvar_6->count++;
        mpz_set(y->fvar_7, x->fvar_7);
        mpz_set(y->fvar_8, x->fvar_8);
        if (x->htbl != NULL){
            ctopdown_funtype_23_htbl_t new_htbl = (ctopdown_funtype_23_htbl_t) safe_malloc(sizeof(ctopdown_funtype_23_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_23_hashentry_t * new_data = (ctopdown_funtype_23_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_23_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_23_hashentry_t)));
        }
        return y;
}


ctopdown_record_29_t new_ctopdown_record_29(void){
        ctopdown_record_29_t tmp = (ctopdown_record_29_t) safe_malloc(sizeof(struct ctopdown_record_29_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_record_29(ctopdown_record_29_t x){
        x->count--;
        if (x->count <= 0){
         release_ctopdown_array_15(x->project_1);
         release_ctopdown_peg_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_record_29_t copy_ctopdown_record_29(ctopdown_record_29_t x){
        ctopdown_record_29_t y = new_ctopdown_record_29();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_ctopdown_record_29(ctopdown_record_29_t x, ctopdown_record_29_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ctopdown_array_15(x->project_1, y->project_1);
        tmp = tmp && equal_ctopdown_peg_adt(x->project_2, y->project_2);
        return tmp;}

ctopdown_record_29_t update_ctopdown_record_29_project_1(ctopdown_record_29_t x, ctopdown_array_15_t v){
        ctopdown_record_29_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ctopdown_array_15(x->project_1);};}
        else {y = copy_ctopdown_record_29(x); x->count--; y->project_1->count--;};
        y->project_1 = (ctopdown_array_15_t)v;
        return y;}

ctopdown_record_29_t update_ctopdown_record_29_project_2(ctopdown_record_29_t x, ctopdown_peg_adt_t v){
        ctopdown_record_29_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ctopdown_peg_adt(x->project_2);};}
        else {y = copy_ctopdown_record_29(x); x->count--; y->project_2->count--;};
        y->project_2 = (ctopdown_peg_adt_t)v;
        return y;}



void release_ctopdown_funtype_30(ctopdown_funtype_30_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_30_t copy_ctopdown_funtype_30(ctopdown_funtype_30_t x){return x->ftbl->cptr(x);}


ctopdown_record_31_t new_ctopdown_record_31(void){
        ctopdown_record_31_t tmp = (ctopdown_record_31_t) safe_malloc(sizeof(struct ctopdown_record_31_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_record_31(ctopdown_record_31_t x){
        x->count--;
        if (x->count <= 0){
         release_ctopdown_peg_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_record_31_t copy_ctopdown_record_31(ctopdown_record_31_t x){
        ctopdown_record_31_t y = new_ctopdown_record_31();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_ctopdown_record_31(ctopdown_record_31_t x, ctopdown_record_31_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_ctopdown_peg_adt(x->project_2, y->project_2);
        return tmp;}

ctopdown_record_31_t update_ctopdown_record_31_project_1(ctopdown_record_31_t x, uint8_t v){
        ctopdown_record_31_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_31(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ctopdown_record_31_t update_ctopdown_record_31_project_2(ctopdown_record_31_t x, ctopdown_peg_adt_t v){
        ctopdown_record_31_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ctopdown_peg_adt(x->project_2);};}
        else {y = copy_ctopdown_record_31(x); x->count--; y->project_2->count--;};
        y->project_2 = (ctopdown_peg_adt_t)v;
        return y;}



void release_ctopdown_funtype_32(ctopdown_funtype_32_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_32_t copy_ctopdown_funtype_32(ctopdown_funtype_32_t x){return x->ftbl->cptr(x);}


ctopdown_record_33_t new_ctopdown_record_33(void){
        ctopdown_record_33_t tmp = (ctopdown_record_33_t) safe_malloc(sizeof(struct ctopdown_record_33_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_record_33(ctopdown_record_33_t x){
        x->count--;
        if (x->count <= 0){
         release_ctopdown_peg_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_record_33_t copy_ctopdown_record_33(ctopdown_record_33_t x){
        ctopdown_record_33_t y = new_ctopdown_record_33();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_ctopdown_record_33(ctopdown_record_33_t x, ctopdown_record_33_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_ctopdown_peg_adt(x->project_3, y->project_3);
        return tmp;}

ctopdown_record_33_t update_ctopdown_record_33_project_1(ctopdown_record_33_t x, uint8_t v){
        ctopdown_record_33_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_33(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ctopdown_record_33_t update_ctopdown_record_33_project_2(ctopdown_record_33_t x, uint8_t v){
        ctopdown_record_33_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_33(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

ctopdown_record_33_t update_ctopdown_record_33_project_3(ctopdown_record_33_t x, ctopdown_peg_adt_t v){
        ctopdown_record_33_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ctopdown_peg_adt(x->project_3);};}
        else {y = copy_ctopdown_record_33(x); x->count--; y->project_3->count--;};
        y->project_3 = (ctopdown_peg_adt_t)v;
        return y;}



void release_ctopdown_funtype_34(ctopdown_funtype_34_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_34_t copy_ctopdown_funtype_34(ctopdown_funtype_34_t x){return x->ftbl->cptr(x);}


mpz_ptr_t f_ctopdown_closure_35(struct ctopdown_closure_35_s * closure, ctopdown_peg_adt_t bvar){
        mpz_ptr_t result = h_ctopdown_closure_35(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8); 
        return result;}

mpz_ptr_t m_ctopdown_closure_35(struct ctopdown_closure_35_s * closure, ctopdown_peg_adt_t bvar){
        return h_ctopdown_closure_35(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8);}

extern mpz_ptr_t h_ctopdown_closure_35(ctopdown_peg_adt_t ivar_9, ctopdown_funtype_32_t ivar_7, ctopdown_funtype_32_t ivar_8, ctopdown_funtype_34_t ivar_6, ctopdown_funtype_34_t ivar_5, ctopdown_funtype_32_t ivar_4, ctopdown_funtype_30_t ivar_3, ctopdown_funtype_23_t ivar_2, ctopdown_funtype_23_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_33;
        ivar_9->count++;
        ivar_33 = (bool_t)r_ctopdown_epsilonp((ctopdown_peg_adt_t)ivar_9);
        if (ivar_33){ 
             result = (mpz_ptr_t)ivar_1->ftbl->fptr(ivar_1, ivar_9);
} else {
        
             bool_t ivar_41;
             ivar_9->count++;
             ivar_41 = (bool_t)r_ctopdown_failurep((ctopdown_peg_adt_t)ivar_9);
             if (ivar_41){  
           result = (mpz_ptr_t)ivar_2->ftbl->fptr(ivar_2, ivar_9);
} else {
             
           bool_t ivar_55;
           ivar_9->count++;
           ivar_55 = (bool_t)r_ctopdown_anyp((ctopdown_peg_adt_t)ivar_9);
           if (ivar_55){   
           ctopdown_array_15_t ivar_45;
           ctopdown_array_15_t ivar_47;
           ivar_9->count++;
           ivar_47 = (ctopdown_array_15_t)ctopdown_peg_adt_p((ctopdown_peg_adt_t)ivar_9);
           //copying to ctopdown_array_15 from ctopdown_array_15;
           ivar_45 = (ctopdown_array_15_t)ivar_47;
           ivar_45->count++;
           release_ctopdown_array_15(ivar_47);
           result = (mpz_ptr_t)ivar_3->ftbl->mptr(ivar_3, ivar_45, ivar_9);
} else {
           
           bool_t ivar_69;
           ivar_9->count++;
           ivar_69 = (bool_t)r_ctopdown_terminalp((ctopdown_peg_adt_t)ivar_9);
           if (ivar_69){    
            uint8_t ivar_59;
            ivar_9->count++;
            ivar_59 = (uint8_t)ctopdown_peg_adt_a((ctopdown_peg_adt_t)ivar_9);
            result = (mpz_ptr_t)ivar_4->ftbl->mptr(ivar_4, ivar_59, ivar_9);
} else {
           
            bool_t ivar_89;
            ivar_9->count++;
            ivar_89 = (bool_t)r_ctopdown_concatp((ctopdown_peg_adt_t)ivar_9);
            if (ivar_89){     
             uint8_t ivar_73;
             ivar_9->count++;
             ivar_73 = (uint8_t)ctopdown_peg_adt_e1((ctopdown_peg_adt_t)ivar_9);
             uint8_t ivar_74;
             ivar_9->count++;
             ivar_74 = (uint8_t)ctopdown_peg_adt_e2((ctopdown_peg_adt_t)ivar_9);
             result = (mpz_ptr_t)ivar_5->ftbl->mptr(ivar_5, ivar_73, ivar_74, ivar_9);
} else {
            
             bool_t ivar_109;
             ivar_9->count++;
             ivar_109 = (bool_t)r_ctopdown_orp((ctopdown_peg_adt_t)ivar_9);
             if (ivar_109){      
              uint8_t ivar_93;
              ivar_9->count++;
              ivar_93 = (uint8_t)ctopdown_peg_adt_e1((ctopdown_peg_adt_t)ivar_9);
              uint8_t ivar_94;
              ivar_9->count++;
              ivar_94 = (uint8_t)ctopdown_peg_adt_e2((ctopdown_peg_adt_t)ivar_9);
              result = (mpz_ptr_t)ivar_6->ftbl->mptr(ivar_6, ivar_93, ivar_94, ivar_9);
} else {
             
              bool_t ivar_123;
              ivar_9->count++;
              ivar_123 = (bool_t)r_ctopdown_andp((ctopdown_peg_adt_t)ivar_9);
              if (ivar_123){       
               uint8_t ivar_113;
               ivar_9->count++;
               ivar_113 = (uint8_t)ctopdown_peg_adt_e((ctopdown_peg_adt_t)ivar_9);
               result = (mpz_ptr_t)ivar_7->ftbl->mptr(ivar_7, ivar_113, ivar_9);
} else {
              
               uint8_t ivar_127;
               ivar_9->count++;
               ivar_127 = (uint8_t)ctopdown_peg_adt_e((ctopdown_peg_adt_t)ivar_9);
               result = (mpz_ptr_t)ivar_8->ftbl->mptr(ivar_8, ivar_127, ivar_9);
};
};
};
};
};
};
};

        return result;
}

ctopdown_closure_35_t new_ctopdown_closure_35(void){
        static struct ctopdown_funtype_23_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ctopdown_funtype_23_t, ctopdown_peg_adt_t))&f_ctopdown_closure_35, .mptr = (mpz_ptr_t (*)(ctopdown_funtype_23_t, ctopdown_peg_adt_t))&m_ctopdown_closure_35, .rptr =  (void (*)(ctopdown_funtype_23_t))&release_ctopdown_closure_35, .cptr = (ctopdown_funtype_23_t (*)(ctopdown_funtype_23_t))&copy_ctopdown_closure_35};
        ctopdown_closure_35_t tmp = (ctopdown_closure_35_t) safe_malloc(sizeof(struct ctopdown_closure_35_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ctopdown_closure_35(ctopdown_funtype_23_t closure){
        ctopdown_closure_35_t x = (ctopdown_closure_35_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_funtype_32(x->fvar_1);
         release_ctopdown_funtype_32(x->fvar_2);
         release_ctopdown_funtype_34(x->fvar_3);
         release_ctopdown_funtype_34(x->fvar_4);
         release_ctopdown_funtype_32(x->fvar_5);
         release_ctopdown_funtype_30(x->fvar_6);
         release_ctopdown_funtype_23(x->fvar_7);
         release_ctopdown_funtype_23(x->fvar_8);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_35_t copy_ctopdown_closure_35(ctopdown_closure_35_t x){
        ctopdown_closure_35_t y = new_ctopdown_closure_35();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        y->fvar_6 = x->fvar_6; x->fvar_6->count++;
        y->fvar_7 = x->fvar_7; x->fvar_7->count++;
        y->fvar_8 = x->fvar_8; x->fvar_8->count++;
        if (x->htbl != NULL){
            ctopdown_funtype_23_htbl_t new_htbl = (ctopdown_funtype_23_htbl_t) safe_malloc(sizeof(ctopdown_funtype_23_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_23_hashentry_t * new_data = (ctopdown_funtype_23_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_23_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_23_hashentry_t)));
        }
        return y;
}

void release_ctopdown_funtype_36(ctopdown_funtype_36_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_36_t copy_ctopdown_funtype_36(ctopdown_funtype_36_t x){return x->ftbl->cptr(x);}

void release_ctopdown_funtype_37(ctopdown_funtype_37_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_37_t copy_ctopdown_funtype_37(ctopdown_funtype_37_t x){return x->ftbl->cptr(x);}


ctopdown_array_38_t new_ctopdown_array_38(uint16_t size){
        ctopdown_array_38_t tmp = (ctopdown_array_38_t) safe_malloc(sizeof(struct ctopdown_array_38_s) + (size * sizeof(ordstruct_adt_ordstruct_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        return tmp;}

void release_ctopdown_array_38(ctopdown_array_38_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < 256; i++){release_ordstruct_adt_ordstruct_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

ctopdown_array_38_t copy_ctopdown_array_38(ctopdown_array_38_t x){
        ctopdown_array_38_t tmp = new_ctopdown_array_38(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ctopdown_array_38(ctopdown_array_38_t x, ctopdown_array_38_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = !equal_ordstruct_adt_ordstruct_adt(x->elems[i], y->elems[i]);};
        return tmp;}

ctopdown_array_38_t update_ctopdown_array_38(ctopdown_array_38_t x, uint32_t i, #<ir-typename
                                                                                  >_t v){
         ctopdown_array_38_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ctopdown_array_38(x);
                      x->count--;};
        #<ir-typename >_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_#<ir-typename >(yelems[i]);};
         yelems[i] = v;
         return y;}



void release_ctopdown_funtype_39(ctopdown_funtype_39_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_39_t copy_ctopdown_funtype_39(ctopdown_funtype_39_t x){return x->ftbl->cptr(x);}


ordstruct_adt_ordstruct_adt_t f_ctopdown_closure_40(struct ctopdown_closure_40_s * closure, ctopdown_peg_adt_t bvar){
        ordstruct_adt_ordstruct_adt_t result = h_ctopdown_closure_40(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8); 
        return result;}

ordstruct_adt_ordstruct_adt_t m_ctopdown_closure_40(struct ctopdown_closure_40_s * closure, ctopdown_peg_adt_t bvar){
        return h_ctopdown_closure_40(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8);}

extern ordstruct_adt_ordstruct_adt_t h_ctopdown_closure_40(ctopdown_peg_adt_t ivar_9, ctopdown_array_38_t ivar_7, ctopdown_array_38_t ivar_8, ctopdown_funtype_39_t ivar_6, ctopdown_funtype_39_t ivar_5, ctopdown_array_38_t ivar_4, ctopdown_funtype_37_t ivar_3, ordstruct_adt_ordstruct_adt_t ivar_2, ordstruct_adt_ordstruct_adt_t ivar_1){
        ordstruct_adt_ordstruct_adt_t result;
        bool_t ivar_29;
        ivar_9->count++;
        ivar_29 = (bool_t)r_ctopdown_epsilonp((ctopdown_peg_adt_t)ivar_9);
        if (ivar_29){ 
             release_ctopdown_peg_adt(ivar_9);
             //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
             result = (ordstruct_adt_ordstruct_adt_t)ivar_1;
             result->count++;
} else {
        
             bool_t ivar_33;
             ivar_9->count++;
             ivar_33 = (bool_t)r_ctopdown_failurep((ctopdown_peg_adt_t)ivar_9);
             if (ivar_33){  
           release_ctopdown_peg_adt(ivar_9);
           //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
           result = (ordstruct_adt_ordstruct_adt_t)ivar_2;
           result->count++;
} else {
             
           bool_t ivar_45;
           ivar_9->count++;
           ivar_45 = (bool_t)r_ctopdown_anyp((ctopdown_peg_adt_t)ivar_9);
           if (ivar_45){   
           ctopdown_array_15_t ivar_37;
           ctopdown_array_15_t ivar_39;
           ivar_39 = (ctopdown_array_15_t)ctopdown_peg_adt_p((ctopdown_peg_adt_t)ivar_9);
           //copying to ctopdown_array_15 from ctopdown_array_15;
           ivar_37 = (ctopdown_array_15_t)ivar_39;
           ivar_37->count++;
           release_ctopdown_array_15(ivar_39);
           ordstruct_adt_ordstruct_adt_t ivar_42;
           ivar_42 = (ordstruct_adt_ordstruct_adt_t)ivar_3->ftbl->fptr(ivar_3, ivar_37);
           //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
           result = (ordstruct_adt_ordstruct_adt_t)ivar_42;
           result->count++;
           release_ordstruct_adt_ordstruct_adt(ivar_42);
} else {
           
           bool_t ivar_57;
           ivar_9->count++;
           ivar_57 = (bool_t)r_ctopdown_terminalp((ctopdown_peg_adt_t)ivar_9);
           if (ivar_57){    
            uint8_t ivar_49;
            ivar_49 = (uint8_t)ctopdown_peg_adt_a((ctopdown_peg_adt_t)ivar_9);
            ordstruct_adt_ordstruct_adt_t ivar_54;
            ivar_54 = (ordstruct_adt_ordstruct_adt_t)ivar_4->elems[ivar_49];
            ivar_54->count++;
            //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
            result = (ordstruct_adt_ordstruct_adt_t)ivar_54;
            result->count++;
            release_ordstruct_adt_ordstruct_adt(ivar_54);
} else {
           
            bool_t ivar_75;
            ivar_9->count++;
            ivar_75 = (bool_t)r_ctopdown_concatp((ctopdown_peg_adt_t)ivar_9);
            if (ivar_75){     
             uint8_t ivar_61;
             ivar_9->count++;
             ivar_61 = (uint8_t)ctopdown_peg_adt_e1((ctopdown_peg_adt_t)ivar_9);
             uint8_t ivar_62;
             ivar_62 = (uint8_t)ctopdown_peg_adt_e2((ctopdown_peg_adt_t)ivar_9);
             ordstruct_adt_ordstruct_adt_t ivar_71;
             ivar_71 = (ordstruct_adt_ordstruct_adt_t)ivar_5->ftbl->mptr(ivar_5, ivar_61, ivar_62);
             //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
             result = (ordstruct_adt_ordstruct_adt_t)ivar_71;
             result->count++;
             release_ordstruct_adt_ordstruct_adt(ivar_71);
} else {
            
             bool_t ivar_93;
             ivar_9->count++;
             ivar_93 = (bool_t)r_ctopdown_orp((ctopdown_peg_adt_t)ivar_9);
             if (ivar_93){      
              uint8_t ivar_79;
              ivar_9->count++;
              ivar_79 = (uint8_t)ctopdown_peg_adt_e1((ctopdown_peg_adt_t)ivar_9);
              uint8_t ivar_80;
              ivar_80 = (uint8_t)ctopdown_peg_adt_e2((ctopdown_peg_adt_t)ivar_9);
              ordstruct_adt_ordstruct_adt_t ivar_89;
              ivar_89 = (ordstruct_adt_ordstruct_adt_t)ivar_6->ftbl->mptr(ivar_6, ivar_79, ivar_80);
              //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
              result = (ordstruct_adt_ordstruct_adt_t)ivar_89;
              result->count++;
              release_ordstruct_adt_ordstruct_adt(ivar_89);
} else {
             
              bool_t ivar_105;
              ivar_9->count++;
              ivar_105 = (bool_t)r_ctopdown_andp((ctopdown_peg_adt_t)ivar_9);
              if (ivar_105){       
               uint8_t ivar_97;
               ivar_97 = (uint8_t)ctopdown_peg_adt_e((ctopdown_peg_adt_t)ivar_9);
               ordstruct_adt_ordstruct_adt_t ivar_102;
               ivar_102 = (ordstruct_adt_ordstruct_adt_t)ivar_7->elems[ivar_97];
               ivar_102->count++;
               //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
               result = (ordstruct_adt_ordstruct_adt_t)ivar_102;
               result->count++;
               release_ordstruct_adt_ordstruct_adt(ivar_102);
} else {
              
               uint8_t ivar_109;
               ivar_109 = (uint8_t)ctopdown_peg_adt_e((ctopdown_peg_adt_t)ivar_9);
               ordstruct_adt_ordstruct_adt_t ivar_114;
               ivar_114 = (ordstruct_adt_ordstruct_adt_t)ivar_8->elems[ivar_109];
               ivar_114->count++;
               //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
               result = (ordstruct_adt_ordstruct_adt_t)ivar_114;
               result->count++;
               release_ordstruct_adt_ordstruct_adt(ivar_114);
};
};
};
};
};
};
};

        return result;
}

ctopdown_closure_40_t new_ctopdown_closure_40(void){
        static struct ctopdown_funtype_36_ftbl_s ftbl = {.fptr = (ordstruct_adt_ordstruct_adt_t (*)(ctopdown_funtype_36_t, ctopdown_peg_adt_t))&f_ctopdown_closure_40, .mptr = (ordstruct_adt_ordstruct_adt_t (*)(ctopdown_funtype_36_t, ctopdown_peg_adt_t))&m_ctopdown_closure_40, .rptr =  (void (*)(ctopdown_funtype_36_t))&release_ctopdown_closure_40, .cptr = (ctopdown_funtype_36_t (*)(ctopdown_funtype_36_t))&copy_ctopdown_closure_40};
        ctopdown_closure_40_t tmp = (ctopdown_closure_40_t) safe_malloc(sizeof(struct ctopdown_closure_40_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ctopdown_closure_40(ctopdown_funtype_36_t closure){
        ctopdown_closure_40_t x = (ctopdown_closure_40_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_array_38(x->fvar_1);
         release_ctopdown_array_38(x->fvar_2);
         release_ctopdown_funtype_39(x->fvar_3);
         release_ctopdown_funtype_39(x->fvar_4);
         release_ctopdown_array_38(x->fvar_5);
         release_ctopdown_funtype_37(x->fvar_6);
         release_ordstruct_adt_ordstruct_adt(x->fvar_7);
         release_ordstruct_adt_ordstruct_adt(x->fvar_8);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_40_t copy_ctopdown_closure_40(ctopdown_closure_40_t x){
        ctopdown_closure_40_t y = new_ctopdown_closure_40();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        y->fvar_6 = x->fvar_6; x->fvar_6->count++;
        y->fvar_7 = x->fvar_7; x->fvar_7->count++;
        y->fvar_8 = x->fvar_8; x->fvar_8->count++;
        if (x->htbl != NULL){
            ctopdown_funtype_36_htbl_t new_htbl = (ctopdown_funtype_36_htbl_t) safe_malloc(sizeof(ctopdown_funtype_36_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_36_hashentry_t * new_data = (ctopdown_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_36_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_36_hashentry_t)));
        }
        return y;
}

void release_ctopdown_funtype_41(ctopdown_funtype_41_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_41_t copy_ctopdown_funtype_41(ctopdown_funtype_41_t x){return x->ftbl->cptr(x);}

void release_ctopdown_funtype_42(ctopdown_funtype_42_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_42_t copy_ctopdown_funtype_42(ctopdown_funtype_42_t x){return x->ftbl->cptr(x);}

void release_ctopdown_funtype_43(ctopdown_funtype_43_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_43_t copy_ctopdown_funtype_43(ctopdown_funtype_43_t x){return x->ftbl->cptr(x);}


ordstruct_adt_ordstruct_adt_t f_ctopdown_closure_44(struct ctopdown_closure_44_s * closure, ctopdown_peg_adt_t bvar){
        ordstruct_adt_ordstruct_adt_t result = h_ctopdown_closure_44(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8); 
        return result;}

ordstruct_adt_ordstruct_adt_t m_ctopdown_closure_44(struct ctopdown_closure_44_s * closure, ctopdown_peg_adt_t bvar){
        return h_ctopdown_closure_44(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8);}

extern ordstruct_adt_ordstruct_adt_t h_ctopdown_closure_44(ctopdown_peg_adt_t ivar_9, ctopdown_funtype_42_t ivar_7, ctopdown_funtype_42_t ivar_8, ctopdown_funtype_43_t ivar_6, ctopdown_funtype_43_t ivar_5, ctopdown_funtype_42_t ivar_4, ctopdown_funtype_41_t ivar_3, ctopdown_funtype_36_t ivar_2, ctopdown_funtype_36_t ivar_1){
        ordstruct_adt_ordstruct_adt_t result;
        bool_t ivar_33;
        ivar_9->count++;
        ivar_33 = (bool_t)r_ctopdown_epsilonp((ctopdown_peg_adt_t)ivar_9);
        if (ivar_33){ 
             ordstruct_adt_ordstruct_adt_t ivar_30;
             ivar_30 = (ordstruct_adt_ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_9);
             //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
             result = (ordstruct_adt_ordstruct_adt_t)ivar_30;
             result->count++;
             release_ordstruct_adt_ordstruct_adt(ivar_30);
} else {
        
             bool_t ivar_41;
             ivar_9->count++;
             ivar_41 = (bool_t)r_ctopdown_failurep((ctopdown_peg_adt_t)ivar_9);
             if (ivar_41){  
           ordstruct_adt_ordstruct_adt_t ivar_38;
           ivar_38 = (ordstruct_adt_ordstruct_adt_t)ivar_2->ftbl->fptr(ivar_2, ivar_9);
           //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
           result = (ordstruct_adt_ordstruct_adt_t)ivar_38;
           result->count++;
           release_ordstruct_adt_ordstruct_adt(ivar_38);
} else {
             
           bool_t ivar_55;
           ivar_9->count++;
           ivar_55 = (bool_t)r_ctopdown_anyp((ctopdown_peg_adt_t)ivar_9);
           if (ivar_55){   
           ctopdown_array_15_t ivar_45;
           ctopdown_array_15_t ivar_47;
           ivar_9->count++;
           ivar_47 = (ctopdown_array_15_t)ctopdown_peg_adt_p((ctopdown_peg_adt_t)ivar_9);
           //copying to ctopdown_array_15 from ctopdown_array_15;
           ivar_45 = (ctopdown_array_15_t)ivar_47;
           ivar_45->count++;
           release_ctopdown_array_15(ivar_47);
           ordstruct_adt_ordstruct_adt_t ivar_51;
           ivar_51 = (ordstruct_adt_ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_45, ivar_9);
           //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
           result = (ordstruct_adt_ordstruct_adt_t)ivar_51;
           result->count++;
           release_ordstruct_adt_ordstruct_adt(ivar_51);
} else {
           
           bool_t ivar_69;
           ivar_9->count++;
           ivar_69 = (bool_t)r_ctopdown_terminalp((ctopdown_peg_adt_t)ivar_9);
           if (ivar_69){    
            uint8_t ivar_59;
            ivar_9->count++;
            ivar_59 = (uint8_t)ctopdown_peg_adt_a((ctopdown_peg_adt_t)ivar_9);
            ordstruct_adt_ordstruct_adt_t ivar_65;
            ivar_65 = (ordstruct_adt_ordstruct_adt_t)ivar_4->ftbl->mptr(ivar_4, ivar_59, ivar_9);
            //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
            result = (ordstruct_adt_ordstruct_adt_t)ivar_65;
            result->count++;
            release_ordstruct_adt_ordstruct_adt(ivar_65);
} else {
           
            bool_t ivar_89;
            ivar_9->count++;
            ivar_89 = (bool_t)r_ctopdown_concatp((ctopdown_peg_adt_t)ivar_9);
            if (ivar_89){     
             uint8_t ivar_73;
             ivar_9->count++;
             ivar_73 = (uint8_t)ctopdown_peg_adt_e1((ctopdown_peg_adt_t)ivar_9);
             uint8_t ivar_74;
             ivar_9->count++;
             ivar_74 = (uint8_t)ctopdown_peg_adt_e2((ctopdown_peg_adt_t)ivar_9);
             ordstruct_adt_ordstruct_adt_t ivar_84;
             ivar_84 = (ordstruct_adt_ordstruct_adt_t)ivar_5->ftbl->mptr(ivar_5, ivar_73, ivar_74, ivar_9);
             //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
             result = (ordstruct_adt_ordstruct_adt_t)ivar_84;
             result->count++;
             release_ordstruct_adt_ordstruct_adt(ivar_84);
} else {
            
             bool_t ivar_109;
             ivar_9->count++;
             ivar_109 = (bool_t)r_ctopdown_orp((ctopdown_peg_adt_t)ivar_9);
             if (ivar_109){      
              uint8_t ivar_93;
              ivar_9->count++;
              ivar_93 = (uint8_t)ctopdown_peg_adt_e1((ctopdown_peg_adt_t)ivar_9);
              uint8_t ivar_94;
              ivar_9->count++;
              ivar_94 = (uint8_t)ctopdown_peg_adt_e2((ctopdown_peg_adt_t)ivar_9);
              ordstruct_adt_ordstruct_adt_t ivar_104;
              ivar_104 = (ordstruct_adt_ordstruct_adt_t)ivar_6->ftbl->mptr(ivar_6, ivar_93, ivar_94, ivar_9);
              //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
              result = (ordstruct_adt_ordstruct_adt_t)ivar_104;
              result->count++;
              release_ordstruct_adt_ordstruct_adt(ivar_104);
} else {
             
              bool_t ivar_123;
              ivar_9->count++;
              ivar_123 = (bool_t)r_ctopdown_andp((ctopdown_peg_adt_t)ivar_9);
              if (ivar_123){       
               uint8_t ivar_113;
               ivar_9->count++;
               ivar_113 = (uint8_t)ctopdown_peg_adt_e((ctopdown_peg_adt_t)ivar_9);
               ordstruct_adt_ordstruct_adt_t ivar_119;
               ivar_119 = (ordstruct_adt_ordstruct_adt_t)ivar_7->ftbl->mptr(ivar_7, ivar_113, ivar_9);
               //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
               result = (ordstruct_adt_ordstruct_adt_t)ivar_119;
               result->count++;
               release_ordstruct_adt_ordstruct_adt(ivar_119);
} else {
              
               uint8_t ivar_127;
               ivar_9->count++;
               ivar_127 = (uint8_t)ctopdown_peg_adt_e((ctopdown_peg_adt_t)ivar_9);
               ordstruct_adt_ordstruct_adt_t ivar_133;
               ivar_133 = (ordstruct_adt_ordstruct_adt_t)ivar_8->ftbl->mptr(ivar_8, ivar_127, ivar_9);
               //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
               result = (ordstruct_adt_ordstruct_adt_t)ivar_133;
               result->count++;
               release_ordstruct_adt_ordstruct_adt(ivar_133);
};
};
};
};
};
};
};

        return result;
}

ctopdown_closure_44_t new_ctopdown_closure_44(void){
        static struct ctopdown_funtype_36_ftbl_s ftbl = {.fptr = (ordstruct_adt_ordstruct_adt_t (*)(ctopdown_funtype_36_t, ctopdown_peg_adt_t))&f_ctopdown_closure_44, .mptr = (ordstruct_adt_ordstruct_adt_t (*)(ctopdown_funtype_36_t, ctopdown_peg_adt_t))&m_ctopdown_closure_44, .rptr =  (void (*)(ctopdown_funtype_36_t))&release_ctopdown_closure_44, .cptr = (ctopdown_funtype_36_t (*)(ctopdown_funtype_36_t))&copy_ctopdown_closure_44};
        ctopdown_closure_44_t tmp = (ctopdown_closure_44_t) safe_malloc(sizeof(struct ctopdown_closure_44_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ctopdown_closure_44(ctopdown_funtype_36_t closure){
        ctopdown_closure_44_t x = (ctopdown_closure_44_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_funtype_42(x->fvar_1);
         release_ctopdown_funtype_42(x->fvar_2);
         release_ctopdown_funtype_43(x->fvar_3);
         release_ctopdown_funtype_43(x->fvar_4);
         release_ctopdown_funtype_42(x->fvar_5);
         release_ctopdown_funtype_41(x->fvar_6);
         release_ctopdown_funtype_36(x->fvar_7);
         release_ctopdown_funtype_36(x->fvar_8);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_44_t copy_ctopdown_closure_44(ctopdown_closure_44_t x){
        ctopdown_closure_44_t y = new_ctopdown_closure_44();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        y->fvar_6 = x->fvar_6; x->fvar_6->count++;
        y->fvar_7 = x->fvar_7; x->fvar_7->count++;
        y->fvar_8 = x->fvar_8; x->fvar_8->count++;
        if (x->htbl != NULL){
            ctopdown_funtype_36_htbl_t new_htbl = (ctopdown_funtype_36_htbl_t) safe_malloc(sizeof(ctopdown_funtype_36_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_36_hashentry_t * new_data = (ctopdown_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_36_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_36_hashentry_t)));
        }
        return y;
}

void release_ctopdown_funtype_45(ctopdown_funtype_45_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_45_t copy_ctopdown_funtype_45(ctopdown_funtype_45_t x){return x->ftbl->cptr(x);}


bool_t f_ctopdown_closure_46(struct ctopdown_closure_46_s * closure, ctopdown_ent_adt_t bvar){
        bool_t result = h_ctopdown_closure_46(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_ctopdown_closure_46(struct ctopdown_closure_46_s * closure, ctopdown_ent_adt_t bvar){
        return h_ctopdown_closure_46(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_ctopdown_closure_46(ctopdown_ent_adt_t ivar_3, mpz_t ivar_2, mpz_t ivar_1){
        bool_t result;
        bool_t ivar_4;
        ivar_3->count++;
        ivar_4 = (bool_t)r_ctopdown_goodp((ctopdown_ent_adt_t)ivar_3);
        bool_t ivar_5;
        mpz_ptr_t ivar_9;
        mpz_ptr_t ivar_12;
        ivar_12 = (mpz_ptr_t)ctopdown_ent_adt_span((ctopdown_ent_adt_t)ivar_3);
        mpz_mk_add(ivar_9, ivar_12, ivar_2);
        int64_t tmp1364 = mpz_cmp(ivar_9, ivar_1);
        ivar_5 = (tmp1364 <= 0);
        result = (!ivar_4) ||  ivar_5;

        return result;
}

ctopdown_closure_46_t new_ctopdown_closure_46(void){
        static struct ctopdown_funtype_45_ftbl_s ftbl = {.fptr = (bool_t (*)(ctopdown_funtype_45_t, ctopdown_ent_adt_t))&f_ctopdown_closure_46, .mptr = (bool_t (*)(ctopdown_funtype_45_t, ctopdown_ent_adt_t))&m_ctopdown_closure_46, .rptr =  (void (*)(ctopdown_funtype_45_t))&release_ctopdown_closure_46, .cptr = (ctopdown_funtype_45_t (*)(ctopdown_funtype_45_t))&copy_ctopdown_closure_46};
        ctopdown_closure_46_t tmp = (ctopdown_closure_46_t) safe_malloc(sizeof(struct ctopdown_closure_46_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_ctopdown_closure_46(ctopdown_funtype_45_t closure){
        ctopdown_closure_46_t x = (ctopdown_closure_46_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_46_t copy_ctopdown_closure_46(ctopdown_closure_46_t x){
        ctopdown_closure_46_t y = new_ctopdown_closure_46();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        mpz_set(y->fvar_2, x->fvar_2);
        if (x->htbl != NULL){
            ctopdown_funtype_45_htbl_t new_htbl = (ctopdown_funtype_45_htbl_t) safe_malloc(sizeof(ctopdown_funtype_45_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_45_hashentry_t * new_data = (ctopdown_funtype_45_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_45_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_45_hashentry_t)));
        }
        return y;
}


ctopdown_lang_spec_t new_ctopdown_lang_spec(uint16_t size){
        ctopdown_lang_spec_t tmp = (ctopdown_lang_spec_t) safe_malloc(sizeof(struct ctopdown_lang_spec_s) + (size * sizeof(ctopdown_peg_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        return tmp;}

void release_ctopdown_lang_spec(ctopdown_lang_spec_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < 256; i++){release_ctopdown_peg_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

ctopdown_lang_spec_t copy_ctopdown_lang_spec(ctopdown_lang_spec_t x){
        ctopdown_lang_spec_t tmp = new_ctopdown_lang_spec(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ctopdown_lang_spec(ctopdown_lang_spec_t x, ctopdown_lang_spec_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = !equal_ctopdown_peg_adt(x->elems[i], y->elems[i]);};
        return tmp;}

ctopdown_lang_spec_t update_ctopdown_lang_spec(ctopdown_lang_spec_t x, uint32_t i, ctopdown_peg_adt_t v){
         ctopdown_lang_spec_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ctopdown_lang_spec(x);
                      x->count--;};
        ctopdown_peg_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ctopdown_peg_adt(yelems[i]);};
         yelems[i] = v;
         return y;}




ctopdown_array_48_t new_ctopdown_array_48(uint16_t size){
        ctopdown_array_48_t tmp = (ctopdown_array_48_t) safe_malloc(sizeof(struct ctopdown_array_48_s) + (size * sizeof(ctopdown_ent_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        return tmp;}

void release_ctopdown_array_48(ctopdown_array_48_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < 256; i++){release_ctopdown_ent_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

ctopdown_array_48_t copy_ctopdown_array_48(ctopdown_array_48_t x){
        ctopdown_array_48_t tmp = new_ctopdown_array_48(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ctopdown_array_48(ctopdown_array_48_t x, ctopdown_array_48_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = !equal_ctopdown_ent_adt(x->elems[i], y->elems[i]);};
        return tmp;}

ctopdown_array_48_t update_ctopdown_array_48(ctopdown_array_48_t x, uint32_t i, ctopdown_ent_adt_t v){
         ctopdown_array_48_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ctopdown_array_48(x);
                      x->count--;};
        ctopdown_ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ctopdown_ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}



void release_ctopdown_funtype_49(ctopdown_funtype_49_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_49_t copy_ctopdown_funtype_49(ctopdown_funtype_49_t x){return x->ftbl->cptr(x);}


ctopdown_record_50_t new_ctopdown_record_50(void){
        ctopdown_record_50_t tmp = (ctopdown_record_50_t) safe_malloc(sizeof(struct ctopdown_record_50_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_record_50(ctopdown_record_50_t x){
        x->count--;
        if (x->count <= 0){
         release_ctopdown_funtype_49(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_record_50_t copy_ctopdown_record_50(ctopdown_record_50_t x){
        ctopdown_record_50_t y = new_ctopdown_record_50();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        mpz_set(y->project_2, x->project_2);
        y->project_3 = (uint8_t)x->project_3;
        y->count = 1;
        return y;}

bool_t equal_ctopdown_record_50(ctopdown_record_50_t x, ctopdown_record_50_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ctopdown_funtype_49(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        return tmp;}

ctopdown_record_50_t update_ctopdown_record_50_project_1(ctopdown_record_50_t x, ctopdown_funtype_49_t v){
        ctopdown_record_50_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ctopdown_funtype_49(x->project_1);};}
        else {y = copy_ctopdown_record_50(x); x->count--; y->project_1->count--;};
        y->project_1 = (ctopdown_funtype_49_t)v;
        return y;}

ctopdown_record_50_t update_ctopdown_record_50_project_2(ctopdown_record_50_t x, mpz_t v){
        ctopdown_record_50_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_50(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}

ctopdown_record_50_t update_ctopdown_record_50_project_3(ctopdown_record_50_t x, uint8_t v){
        ctopdown_record_50_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_50(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}



void release_ctopdown_funtype_51(ctopdown_funtype_51_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_51_t copy_ctopdown_funtype_51(ctopdown_funtype_51_t x){return x->ftbl->cptr(x);}

void release_ctopdown_funtype_52(ctopdown_funtype_52_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_52_t copy_ctopdown_funtype_52(ctopdown_funtype_52_t x){return x->ftbl->cptr(x);}


bool_t f_ctopdown_closure_53(struct ctopdown_closure_53_s * closure, ctopdown_record_50_t bvar){
        ctopdown_funtype_49_t bvar_1;
        bvar_1 = (ctopdown_funtype_49_t)bvar->project_1;
        bvar->project_1->count++;
        mpz_t bvar_2;
        mpz_set(bvar_2, bvar->project_2);
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        release_ctopdown_record_50(bvar);
        bool_t result = h_ctopdown_closure_53(bvar_1, bvar_2, bvar_3, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_ctopdown_funtype_49(bvar_1);
        release_mpz(bvar_2);
        return result;}

bool_t m_ctopdown_closure_53(struct ctopdown_closure_53_s * closure, ctopdown_funtype_49_t bvar_1, mpz_t bvar_2, uint8_t bvar_3){
        return h_ctopdown_closure_53(bvar_1, bvar_2, bvar_3, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_ctopdown_closure_53(ctopdown_funtype_49_t ivar_6, mpz_t ivar_8, uint8_t ivar_9, ctopdown_funtype_52_t ivar_3, mpz_t ivar_1, ctopdown_lang_spec_t ivar_2){
        bool_t result;
        ctopdown_peg_adt_t ivar_10;
        ctopdown_peg_adt_t ivar_12;
        ivar_12 = (ctopdown_peg_adt_t)ivar_2->elems[ivar_9];
        ivar_12->count++;
        //copying to ctopdown_peg_adt from ctopdown_peg_adt;
        ivar_10 = (ctopdown_peg_adt_t)ivar_12;
        ivar_10->count++;
        release_ctopdown_peg_adt(ivar_12);
        bool_t ivar_35;
        ivar_10->count++;
        ivar_35 = (bool_t)r_ctopdown_anyp((ctopdown_peg_adt_t)ivar_10);
        if (ivar_35){ 
             release_ctopdown_funtype_49(ivar_6);
             ctopdown_array_15_t ivar_15;
             ctopdown_array_15_t ivar_17;
             ivar_17 = (ctopdown_array_15_t)ctopdown_peg_adt_p((ctopdown_peg_adt_t)ivar_10);
             //copying to ctopdown_array_15 from ctopdown_array_15;
             ivar_15 = (ctopdown_array_15_t)ivar_17;
             ivar_15->count++;
             release_ctopdown_array_15(ivar_17);
             bool_t ivar_19;
             int64_t tmp1396 = mpz_cmp(ivar_8, ivar_1);
             ivar_19 = (tmp1396 == 0);
             bool_t ivar_20;
             bool_t ivar_24;
             uint8_t ivar_32;
             ivar_32 = (uint8_t)ivar_3->ftbl->fptr(ivar_3, ivar_8);
             ivar_24 = (bool_t)ivar_15->elems[ivar_32];
             release_ctopdown_array_15(ivar_15);
             ivar_20 = !ivar_24;
             result = ivar_19 || ivar_20;
} else {
        
             bool_t ivar_56;
             ivar_10->count++;
             ivar_56 = (bool_t)r_ctopdown_terminalp((ctopdown_peg_adt_t)ivar_10);
             if (ivar_56){  
           release_ctopdown_funtype_49(ivar_6);
           uint8_t ivar_39;
           ivar_39 = (uint8_t)ctopdown_peg_adt_a((ctopdown_peg_adt_t)ivar_10);
           bool_t ivar_43;
           int64_t tmp1397 = mpz_cmp(ivar_8, ivar_1);
           ivar_43 = (tmp1397 == 0);
           bool_t ivar_44;
           uint8_t ivar_49;
           ivar_49 = (uint8_t)ivar_3->ftbl->fptr(ivar_3, ivar_8);
           ivar_44 = (ivar_39 != ivar_49);
           result = ivar_43 || ivar_44;
} else {
             
           bool_t ivar_125;
           ivar_10->count++;
           ivar_125 = (bool_t)r_ctopdown_concatp((ctopdown_peg_adt_t)ivar_10);
           if (ivar_125){   
           uint8_t ivar_60;
           ivar_10->count++;
           ivar_60 = (uint8_t)ctopdown_peg_adt_e1((ctopdown_peg_adt_t)ivar_10);
           uint8_t ivar_61;
           ivar_61 = (uint8_t)ctopdown_peg_adt_e2((ctopdown_peg_adt_t)ivar_10);
           bool_t ivar_68;
           ctopdown_ent_adt_t ivar_81;
           ctopdown_array_48_t ivar_73;
           ctopdown_array_48_t ivar_75;
           ivar_75 = (ctopdown_array_48_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
           //copying to ctopdown_array_48 from ctopdown_array_48;
           ivar_73 = (ctopdown_array_48_t)ivar_75;
           ivar_73->count++;
           release_ctopdown_array_48(ivar_75);
           ctopdown_ent_adt_t ivar_72;
           ivar_72 = (ctopdown_ent_adt_t)ivar_73->elems[ivar_60];
           ivar_72->count++;
           release_ctopdown_array_48(ivar_73);
           //copying to ctopdown_ent_adt from ctopdown_ent_adt;
           ivar_81 = (ctopdown_ent_adt_t)ivar_72;
           ivar_81->count++;
           release_ctopdown_ent_adt(ivar_72);
           ivar_68 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_81);
           bool_t ivar_69;
           bool_t ivar_82;
           ctopdown_ent_adt_t ivar_95;
           ctopdown_array_48_t ivar_87;
           ctopdown_array_48_t ivar_89;
           ivar_89 = (ctopdown_array_48_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
           //copying to ctopdown_array_48 from ctopdown_array_48;
           ivar_87 = (ctopdown_array_48_t)ivar_89;
           ivar_87->count++;
           release_ctopdown_array_48(ivar_89);
           ctopdown_ent_adt_t ivar_86;
           ivar_86 = (ctopdown_ent_adt_t)ivar_87->elems[ivar_60];
           ivar_86->count++;
           release_ctopdown_array_48(ivar_87);
           //copying to ctopdown_ent_adt from ctopdown_ent_adt;
           ivar_95 = (ctopdown_ent_adt_t)ivar_86;
           ivar_95->count++;
           release_ctopdown_ent_adt(ivar_86);
           ivar_82 = (bool_t)r_ctopdown_goodp((ctopdown_ent_adt_t)ivar_95);
           bool_t ivar_83;
           ctopdown_ent_adt_t ivar_122;
           ctopdown_array_48_t ivar_99;
           mpz_ptr_t ivar_119;
           mpz_ptr_t ivar_102;
           ctopdown_ent_adt_t ivar_114;
           ctopdown_array_48_t ivar_106;
           ctopdown_array_48_t ivar_108;
           ivar_108 = (ctopdown_array_48_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
           //copying to ctopdown_array_48 from ctopdown_array_48;
           ivar_106 = (ctopdown_array_48_t)ivar_108;
           ivar_106->count++;
           release_ctopdown_array_48(ivar_108);
           ctopdown_ent_adt_t ivar_105;
           ivar_105 = (ctopdown_ent_adt_t)ivar_106->elems[ivar_60];
           ivar_105->count++;
           release_ctopdown_array_48(ivar_106);
           //copying to ctopdown_ent_adt from ctopdown_ent_adt;
           ivar_114 = (ctopdown_ent_adt_t)ivar_105;
           ivar_114->count++;
           release_ctopdown_ent_adt(ivar_105);
           ivar_102 = (mpz_ptr_t)ctopdown_ent_adt_span((ctopdown_ent_adt_t)ivar_114);
           mpz_mk_add(ivar_119, ivar_102, ivar_8);
           ctopdown_array_48_t ivar_116;
           ivar_116 = (ctopdown_array_48_t)ivar_6->ftbl->fptr(ivar_6, ivar_119);
           ivar_6->ftbl->rptr(ivar_6);
           //copying to ctopdown_array_48 from ctopdown_array_48;
           ivar_99 = (ctopdown_array_48_t)ivar_116;
           ivar_99->count++;
           release_ctopdown_array_48(ivar_116);
           ctopdown_ent_adt_t ivar_98;
           ivar_98 = (ctopdown_ent_adt_t)ivar_99->elems[ivar_61];
           ivar_98->count++;
           release_ctopdown_array_48(ivar_99);
           //copying to ctopdown_ent_adt from ctopdown_ent_adt;
           ivar_122 = (ctopdown_ent_adt_t)ivar_98;
           ivar_122->count++;
           release_ctopdown_ent_adt(ivar_98);
           ivar_83 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_122);
           ivar_69 = ivar_82 && ivar_83;
           result = ivar_68 || ivar_69;
} else {
           
           bool_t ivar_164;
           ivar_10->count++;
           ivar_164 = (bool_t)r_ctopdown_orp((ctopdown_peg_adt_t)ivar_10);
           if (ivar_164){    
            uint8_t ivar_129;
            ivar_10->count++;
            ivar_129 = (uint8_t)ctopdown_peg_adt_e1((ctopdown_peg_adt_t)ivar_10);
            uint8_t ivar_130;
            ivar_130 = (uint8_t)ctopdown_peg_adt_e2((ctopdown_peg_adt_t)ivar_10);
            bool_t ivar_137;
            ctopdown_ent_adt_t ivar_150;
            ctopdown_array_48_t ivar_142;
            ctopdown_array_48_t ivar_144;
            ivar_144 = (ctopdown_array_48_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
            //copying to ctopdown_array_48 from ctopdown_array_48;
            ivar_142 = (ctopdown_array_48_t)ivar_144;
            ivar_142->count++;
            release_ctopdown_array_48(ivar_144);
            ctopdown_ent_adt_t ivar_141;
            ivar_141 = (ctopdown_ent_adt_t)ivar_142->elems[ivar_129];
            ivar_141->count++;
            release_ctopdown_array_48(ivar_142);
            //copying to ctopdown_ent_adt from ctopdown_ent_adt;
            ivar_150 = (ctopdown_ent_adt_t)ivar_141;
            ivar_150->count++;
            release_ctopdown_ent_adt(ivar_141);
            ivar_137 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_150);
            bool_t ivar_138;
            ctopdown_ent_adt_t ivar_162;
            ctopdown_array_48_t ivar_154;
            ctopdown_array_48_t ivar_156;
            ivar_156 = (ctopdown_array_48_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
            ivar_6->ftbl->rptr(ivar_6);
            //copying to ctopdown_array_48 from ctopdown_array_48;
            ivar_154 = (ctopdown_array_48_t)ivar_156;
            ivar_154->count++;
            release_ctopdown_array_48(ivar_156);
            ctopdown_ent_adt_t ivar_153;
            ivar_153 = (ctopdown_ent_adt_t)ivar_154->elems[ivar_130];
            ivar_153->count++;
            release_ctopdown_array_48(ivar_154);
            //copying to ctopdown_ent_adt from ctopdown_ent_adt;
            ivar_162 = (ctopdown_ent_adt_t)ivar_153;
            ivar_162->count++;
            release_ctopdown_ent_adt(ivar_153);
            ivar_138 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_162);
            result = ivar_137 && ivar_138;
} else {
           
            bool_t ivar_184;
            ivar_10->count++;
            ivar_184 = (bool_t)r_ctopdown_andp((ctopdown_peg_adt_t)ivar_10);
            if (ivar_184){     
             uint8_t ivar_168;
             ivar_168 = (uint8_t)ctopdown_peg_adt_e((ctopdown_peg_adt_t)ivar_10);
             ctopdown_ent_adt_t ivar_183;
             ctopdown_array_48_t ivar_175;
             ctopdown_array_48_t ivar_177;
             ivar_177 = (ctopdown_array_48_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
             ivar_6->ftbl->rptr(ivar_6);
             //copying to ctopdown_array_48 from ctopdown_array_48;
             ivar_175 = (ctopdown_array_48_t)ivar_177;
             ivar_175->count++;
             release_ctopdown_array_48(ivar_177);
             ctopdown_ent_adt_t ivar_174;
             ivar_174 = (ctopdown_ent_adt_t)ivar_175->elems[ivar_168];
             ivar_174->count++;
             release_ctopdown_array_48(ivar_175);
             //copying to ctopdown_ent_adt from ctopdown_ent_adt;
             ivar_183 = (ctopdown_ent_adt_t)ivar_174;
             ivar_183->count++;
             release_ctopdown_ent_adt(ivar_174);
             result = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_183);
} else {
            
             bool_t ivar_204;
             ivar_10->count++;
             ivar_204 = (bool_t)r_ctopdown_notp((ctopdown_peg_adt_t)ivar_10);
             if (ivar_204){      
              uint8_t ivar_188;
              ivar_188 = (uint8_t)ctopdown_peg_adt_e((ctopdown_peg_adt_t)ivar_10);
              ctopdown_ent_adt_t ivar_203;
              ctopdown_array_48_t ivar_195;
              ctopdown_array_48_t ivar_197;
              ivar_197 = (ctopdown_array_48_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
              ivar_6->ftbl->rptr(ivar_6);
              //copying to ctopdown_array_48 from ctopdown_array_48;
              ivar_195 = (ctopdown_array_48_t)ivar_197;
              ivar_195->count++;
              release_ctopdown_array_48(ivar_197);
              ctopdown_ent_adt_t ivar_194;
              ivar_194 = (ctopdown_ent_adt_t)ivar_195->elems[ivar_188];
              ivar_194->count++;
              release_ctopdown_array_48(ivar_195);
              //copying to ctopdown_ent_adt from ctopdown_ent_adt;
              ivar_203 = (ctopdown_ent_adt_t)ivar_194;
              ivar_203->count++;
              release_ctopdown_ent_adt(ivar_194);
              result = (bool_t)r_ctopdown_goodp((ctopdown_ent_adt_t)ivar_203);
} else {
             
              release_ctopdown_funtype_49(ivar_6);
              release_mpz(ivar_8);
              bool_t ivar_208;
              ivar_208 = (bool_t)r_ctopdown_failurep((ctopdown_peg_adt_t)ivar_10);
              if (ivar_208){       
               result = (bool_t) true;
} else {
              
               result = (bool_t) false;
};
};
};
};
};
};
};

        return result;
}

ctopdown_closure_53_t new_ctopdown_closure_53(void){
        static struct ctopdown_funtype_51_ftbl_s ftbl = {.fptr = (bool_t (*)(ctopdown_funtype_51_t, ctopdown_record_50_t))&f_ctopdown_closure_53, .mptr = (bool_t (*)(ctopdown_funtype_51_t, ctopdown_funtype_49_t, mpz_t, uint8_t))&m_ctopdown_closure_53, .rptr =  (void (*)(ctopdown_funtype_51_t))&release_ctopdown_closure_53, .cptr = (ctopdown_funtype_51_t (*)(ctopdown_funtype_51_t))&copy_ctopdown_closure_53};
        ctopdown_closure_53_t tmp = (ctopdown_closure_53_t) safe_malloc(sizeof(struct ctopdown_closure_53_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_ctopdown_closure_53(ctopdown_funtype_51_t closure){
        ctopdown_closure_53_t x = (ctopdown_closure_53_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_funtype_52(x->fvar_1);
         release_ctopdown_lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_53_t copy_ctopdown_closure_53(ctopdown_closure_53_t x){
        ctopdown_closure_53_t y = new_ctopdown_closure_53();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        mpz_set(y->fvar_2, x->fvar_2);
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ctopdown_funtype_51_htbl_t new_htbl = (ctopdown_funtype_51_htbl_t) safe_malloc(sizeof(ctopdown_funtype_51_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_51_hashentry_t * new_data = (ctopdown_funtype_51_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_51_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_51_hashentry_t)));
        }
        return y;
}


bool_t f_ctopdown_closure_54(struct ctopdown_closure_54_s * closure, ctopdown_record_50_t bvar){
        ctopdown_funtype_49_t bvar_1;
        bvar_1 = (ctopdown_funtype_49_t)bvar->project_1;
        bvar->project_1->count++;
        mpz_t bvar_2;
        mpz_set(bvar_2, bvar->project_2);
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        release_ctopdown_record_50(bvar);
        bool_t result = h_ctopdown_closure_54(bvar_1, bvar_2, bvar_3, closure->fvar_1); 
        release_ctopdown_funtype_49(bvar_1);
        release_mpz(bvar_2);
        return result;}

bool_t m_ctopdown_closure_54(struct ctopdown_closure_54_s * closure, ctopdown_funtype_49_t bvar_1, mpz_t bvar_2, uint8_t bvar_3){
        return h_ctopdown_closure_54(bvar_1, bvar_2, bvar_3, closure->fvar_1);}

extern bool_t h_ctopdown_closure_54(ctopdown_funtype_49_t ivar_6, mpz_t ivar_8, uint8_t ivar_9, ctopdown_lang_spec_t ivar_2){
        bool_t result;
        ctopdown_peg_adt_t ivar_10;
        ctopdown_peg_adt_t ivar_12;
        ivar_12 = (ctopdown_peg_adt_t)ivar_2->elems[ivar_9];
        ivar_12->count++;
        //copying to ctopdown_peg_adt from ctopdown_peg_adt;
        ivar_10 = (ctopdown_peg_adt_t)ivar_12;
        ivar_10->count++;
        release_ctopdown_peg_adt(ivar_12);
        bool_t ivar_80;
        ivar_10->count++;
        ivar_80 = (bool_t)r_ctopdown_concatp((ctopdown_peg_adt_t)ivar_10);
        if (ivar_80){ 
             uint8_t ivar_15;
             ivar_10->count++;
             ivar_15 = (uint8_t)ctopdown_peg_adt_e1((ctopdown_peg_adt_t)ivar_10);
             uint8_t ivar_16;
             ivar_16 = (uint8_t)ctopdown_peg_adt_e2((ctopdown_peg_adt_t)ivar_10);
             bool_t ivar_23;
             ctopdown_ent_adt_t ivar_36;
             ctopdown_array_48_t ivar_28;
             ctopdown_array_48_t ivar_30;
             ivar_30 = (ctopdown_array_48_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
             //copying to ctopdown_array_48 from ctopdown_array_48;
             ivar_28 = (ctopdown_array_48_t)ivar_30;
             ivar_28->count++;
             release_ctopdown_array_48(ivar_30);
             ctopdown_ent_adt_t ivar_27;
             ivar_27 = (ctopdown_ent_adt_t)ivar_28->elems[ivar_15];
             ivar_27->count++;
             release_ctopdown_array_48(ivar_28);
             //copying to ctopdown_ent_adt from ctopdown_ent_adt;
             ivar_36 = (ctopdown_ent_adt_t)ivar_27;
             ivar_36->count++;
             release_ctopdown_ent_adt(ivar_27);
             ivar_23 = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_36);
             bool_t ivar_24;
             bool_t ivar_37;
             ctopdown_ent_adt_t ivar_50;
             ctopdown_array_48_t ivar_42;
             ctopdown_array_48_t ivar_44;
             ivar_44 = (ctopdown_array_48_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
             //copying to ctopdown_array_48 from ctopdown_array_48;
             ivar_42 = (ctopdown_array_48_t)ivar_44;
             ivar_42->count++;
             release_ctopdown_array_48(ivar_44);
             ctopdown_ent_adt_t ivar_41;
             ivar_41 = (ctopdown_ent_adt_t)ivar_42->elems[ivar_15];
             ivar_41->count++;
             release_ctopdown_array_48(ivar_42);
             //copying to ctopdown_ent_adt from ctopdown_ent_adt;
             ivar_50 = (ctopdown_ent_adt_t)ivar_41;
             ivar_50->count++;
             release_ctopdown_ent_adt(ivar_41);
             ivar_37 = (bool_t)r_ctopdown_goodp((ctopdown_ent_adt_t)ivar_50);
             bool_t ivar_38;
             ctopdown_ent_adt_t ivar_77;
             ctopdown_array_48_t ivar_54;
             mpz_ptr_t ivar_74;
             mpz_ptr_t ivar_57;
             ctopdown_ent_adt_t ivar_69;
             ctopdown_array_48_t ivar_61;
             ctopdown_array_48_t ivar_63;
             ivar_63 = (ctopdown_array_48_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
             //copying to ctopdown_array_48 from ctopdown_array_48;
             ivar_61 = (ctopdown_array_48_t)ivar_63;
             ivar_61->count++;
             release_ctopdown_array_48(ivar_63);
             ctopdown_ent_adt_t ivar_60;
             ivar_60 = (ctopdown_ent_adt_t)ivar_61->elems[ivar_15];
             ivar_60->count++;
             release_ctopdown_array_48(ivar_61);
             //copying to ctopdown_ent_adt from ctopdown_ent_adt;
             ivar_69 = (ctopdown_ent_adt_t)ivar_60;
             ivar_69->count++;
             release_ctopdown_ent_adt(ivar_60);
             ivar_57 = (mpz_ptr_t)ctopdown_ent_adt_span((ctopdown_ent_adt_t)ivar_69);
             mpz_mk_add(ivar_74, ivar_57, ivar_8);
             ctopdown_array_48_t ivar_71;
             ivar_71 = (ctopdown_array_48_t)ivar_6->ftbl->fptr(ivar_6, ivar_74);
             ivar_6->ftbl->rptr(ivar_6);
             //copying to ctopdown_array_48 from ctopdown_array_48;
             ivar_54 = (ctopdown_array_48_t)ivar_71;
             ivar_54->count++;
             release_ctopdown_array_48(ivar_71);
             ctopdown_ent_adt_t ivar_53;
             ivar_53 = (ctopdown_ent_adt_t)ivar_54->elems[ivar_16];
             ivar_53->count++;
             release_ctopdown_array_48(ivar_54);
             //copying to ctopdown_ent_adt from ctopdown_ent_adt;
             ivar_77 = (ctopdown_ent_adt_t)ivar_53;
             ivar_77->count++;
             release_ctopdown_ent_adt(ivar_53);
             ivar_38 = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_77);
             ivar_24 = ivar_37 && ivar_38;
             result = ivar_23 || ivar_24;
} else {
        
             bool_t ivar_134;
             ivar_10->count++;
             ivar_134 = (bool_t)r_ctopdown_orp((ctopdown_peg_adt_t)ivar_10);
             if (ivar_134){  
           uint8_t ivar_84;
           ivar_10->count++;
           ivar_84 = (uint8_t)ctopdown_peg_adt_e1((ctopdown_peg_adt_t)ivar_10);
           uint8_t ivar_85;
           ivar_85 = (uint8_t)ctopdown_peg_adt_e2((ctopdown_peg_adt_t)ivar_10);
           bool_t ivar_92;
           ctopdown_ent_adt_t ivar_105;
           ctopdown_array_48_t ivar_97;
           ctopdown_array_48_t ivar_99;
           ivar_99 = (ctopdown_array_48_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
           //copying to ctopdown_array_48 from ctopdown_array_48;
           ivar_97 = (ctopdown_array_48_t)ivar_99;
           ivar_97->count++;
           release_ctopdown_array_48(ivar_99);
           ctopdown_ent_adt_t ivar_96;
           ivar_96 = (ctopdown_ent_adt_t)ivar_97->elems[ivar_84];
           ivar_96->count++;
           release_ctopdown_array_48(ivar_97);
           //copying to ctopdown_ent_adt from ctopdown_ent_adt;
           ivar_105 = (ctopdown_ent_adt_t)ivar_96;
           ivar_105->count++;
           release_ctopdown_ent_adt(ivar_96);
           ivar_92 = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_105);
           bool_t ivar_93;
           bool_t ivar_106;
           ctopdown_ent_adt_t ivar_119;
           ctopdown_array_48_t ivar_111;
           ctopdown_array_48_t ivar_113;
           ivar_113 = (ctopdown_array_48_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
           //copying to ctopdown_array_48 from ctopdown_array_48;
           ivar_111 = (ctopdown_array_48_t)ivar_113;
           ivar_111->count++;
           release_ctopdown_array_48(ivar_113);
           ctopdown_ent_adt_t ivar_110;
           ivar_110 = (ctopdown_ent_adt_t)ivar_111->elems[ivar_84];
           ivar_110->count++;
           release_ctopdown_array_48(ivar_111);
           //copying to ctopdown_ent_adt from ctopdown_ent_adt;
           ivar_119 = (ctopdown_ent_adt_t)ivar_110;
           ivar_119->count++;
           release_ctopdown_ent_adt(ivar_110);
           ivar_106 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_119);
           bool_t ivar_107;
           ctopdown_ent_adt_t ivar_131;
           ctopdown_array_48_t ivar_123;
           ctopdown_array_48_t ivar_125;
           ivar_125 = (ctopdown_array_48_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
           ivar_6->ftbl->rptr(ivar_6);
           //copying to ctopdown_array_48 from ctopdown_array_48;
           ivar_123 = (ctopdown_array_48_t)ivar_125;
           ivar_123->count++;
           release_ctopdown_array_48(ivar_125);
           ctopdown_ent_adt_t ivar_122;
           ivar_122 = (ctopdown_ent_adt_t)ivar_123->elems[ivar_85];
           ivar_122->count++;
           release_ctopdown_array_48(ivar_123);
           //copying to ctopdown_ent_adt from ctopdown_ent_adt;
           ivar_131 = (ctopdown_ent_adt_t)ivar_122;
           ivar_131->count++;
           release_ctopdown_ent_adt(ivar_122);
           ivar_107 = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_131);
           ivar_93 = ivar_106 && ivar_107;
           result = ivar_92 || ivar_93;
} else {
             
           bool_t ivar_154;
           ivar_10->count++;
           ivar_154 = (bool_t)r_ctopdown_andp((ctopdown_peg_adt_t)ivar_10);
           if (ivar_154){   
           uint8_t ivar_138;
           ivar_138 = (uint8_t)ctopdown_peg_adt_e((ctopdown_peg_adt_t)ivar_10);
           ctopdown_ent_adt_t ivar_153;
           ctopdown_array_48_t ivar_145;
           ctopdown_array_48_t ivar_147;
           ivar_147 = (ctopdown_array_48_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
           ivar_6->ftbl->rptr(ivar_6);
           //copying to ctopdown_array_48 from ctopdown_array_48;
           ivar_145 = (ctopdown_array_48_t)ivar_147;
           ivar_145->count++;
           release_ctopdown_array_48(ivar_147);
           ctopdown_ent_adt_t ivar_144;
           ivar_144 = (ctopdown_ent_adt_t)ivar_145->elems[ivar_138];
           ivar_144->count++;
           release_ctopdown_array_48(ivar_145);
           //copying to ctopdown_ent_adt from ctopdown_ent_adt;
           ivar_153 = (ctopdown_ent_adt_t)ivar_144;
           ivar_153->count++;
           release_ctopdown_ent_adt(ivar_144);
           result = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_153);
} else {
           
           bool_t ivar_174;
           ivar_10->count++;
           ivar_174 = (bool_t)r_ctopdown_notp((ctopdown_peg_adt_t)ivar_10);
           if (ivar_174){    
            uint8_t ivar_158;
            ivar_158 = (uint8_t)ctopdown_peg_adt_e((ctopdown_peg_adt_t)ivar_10);
            ctopdown_ent_adt_t ivar_173;
            ctopdown_array_48_t ivar_165;
            ctopdown_array_48_t ivar_167;
            ivar_167 = (ctopdown_array_48_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
            ivar_6->ftbl->rptr(ivar_6);
            //copying to ctopdown_array_48 from ctopdown_array_48;
            ivar_165 = (ctopdown_array_48_t)ivar_167;
            ivar_165->count++;
            release_ctopdown_array_48(ivar_167);
            ctopdown_ent_adt_t ivar_164;
            ivar_164 = (ctopdown_ent_adt_t)ivar_165->elems[ivar_158];
            ivar_164->count++;
            release_ctopdown_array_48(ivar_165);
            //copying to ctopdown_ent_adt from ctopdown_ent_adt;
            ivar_173 = (ctopdown_ent_adt_t)ivar_164;
            ivar_173->count++;
            release_ctopdown_ent_adt(ivar_164);
            result = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_173);
} else {
           
            release_ctopdown_peg_adt(ivar_10);
            release_mpz(ivar_8);
            release_ctopdown_funtype_49(ivar_6);
            result = (bool_t) false;
};
};
};
};

        return result;
}

ctopdown_closure_54_t new_ctopdown_closure_54(void){
        static struct ctopdown_funtype_51_ftbl_s ftbl = {.fptr = (bool_t (*)(ctopdown_funtype_51_t, ctopdown_record_50_t))&f_ctopdown_closure_54, .mptr = (bool_t (*)(ctopdown_funtype_51_t, ctopdown_funtype_49_t, mpz_t, uint8_t))&m_ctopdown_closure_54, .rptr =  (void (*)(ctopdown_funtype_51_t))&release_ctopdown_closure_54, .cptr = (ctopdown_funtype_51_t (*)(ctopdown_funtype_51_t))&copy_ctopdown_closure_54};
        ctopdown_closure_54_t tmp = (ctopdown_closure_54_t) safe_malloc(sizeof(struct ctopdown_closure_54_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ctopdown_closure_54(ctopdown_funtype_51_t closure){
        ctopdown_closure_54_t x = (ctopdown_closure_54_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_lang_spec(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_54_t copy_ctopdown_closure_54(ctopdown_closure_54_t x){
        ctopdown_closure_54_t y = new_ctopdown_closure_54();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            ctopdown_funtype_51_htbl_t new_htbl = (ctopdown_funtype_51_htbl_t) safe_malloc(sizeof(ctopdown_funtype_51_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_51_hashentry_t * new_data = (ctopdown_funtype_51_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_51_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_51_hashentry_t)));
        }
        return y;
}


ctopdown_record_55_t new_ctopdown_record_55(void){
        ctopdown_record_55_t tmp = (ctopdown_record_55_t) safe_malloc(sizeof(struct ctopdown_record_55_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_record_55(ctopdown_record_55_t x){
        x->count--;
        if (x->count <= 0){
         release_ctopdown_funtype_49(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_record_55_t copy_ctopdown_record_55(ctopdown_record_55_t x){
        ctopdown_record_55_t y = new_ctopdown_record_55();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        mpz_set(y->project_2, x->project_2);
        y->project_3 = (uint8_t)x->project_3;
        mpz_set(y->project_4, x->project_4);
        y->count = 1;
        return y;}

bool_t equal_ctopdown_record_55(ctopdown_record_55_t x, ctopdown_record_55_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ctopdown_funtype_49(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && x->project_4 == y->project_4;
        return tmp;}

ctopdown_record_55_t update_ctopdown_record_55_project_1(ctopdown_record_55_t x, ctopdown_funtype_49_t v){
        ctopdown_record_55_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ctopdown_funtype_49(x->project_1);};}
        else {y = copy_ctopdown_record_55(x); x->count--; y->project_1->count--;};
        y->project_1 = (ctopdown_funtype_49_t)v;
        return y;}

ctopdown_record_55_t update_ctopdown_record_55_project_2(ctopdown_record_55_t x, mpz_t v){
        ctopdown_record_55_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_55(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}

ctopdown_record_55_t update_ctopdown_record_55_project_3(ctopdown_record_55_t x, uint8_t v){
        ctopdown_record_55_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_55(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}

ctopdown_record_55_t update_ctopdown_record_55_project_4(ctopdown_record_55_t x, mpz_t v){
        ctopdown_record_55_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_55(x); x->count--;};
        mpz_set(y->project_4, v);
        return y;}



void release_ctopdown_funtype_56(ctopdown_funtype_56_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_56_t copy_ctopdown_funtype_56(ctopdown_funtype_56_t x){return x->ftbl->cptr(x);}


bool_t f_ctopdown_closure_57(struct ctopdown_closure_57_s * closure, ctopdown_record_55_t bvar){
        ctopdown_funtype_49_t bvar_1;
        bvar_1 = (ctopdown_funtype_49_t)bvar->project_1;
        bvar->project_1->count++;
        mpz_t bvar_2;
        mpz_set(bvar_2, bvar->project_2);
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        mpz_t bvar_4;
        mpz_set(bvar_4, bvar->project_4);
        release_ctopdown_record_55(bvar);
        bool_t result = h_ctopdown_closure_57(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2); 
        release_ctopdown_funtype_49(bvar_1);
        release_mpz(bvar_2);
        release_mpz(bvar_4);
        return result;}

bool_t m_ctopdown_closure_57(struct ctopdown_closure_57_s * closure, ctopdown_funtype_49_t bvar_1, mpz_t bvar_2, uint8_t bvar_3, mpz_t bvar_4){
        return h_ctopdown_closure_57(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2);}

extern bool_t h_ctopdown_closure_57(ctopdown_funtype_49_t ivar_8, mpz_t ivar_10, uint8_t ivar_11, mpz_t ivar_12, ctopdown_funtype_52_t ivar_3, ctopdown_lang_spec_t ivar_2){
        bool_t result;
        ctopdown_peg_adt_t ivar_13;
        ctopdown_peg_adt_t ivar_15;
        ivar_15 = (ctopdown_peg_adt_t)ivar_2->elems[ivar_11];
        ivar_15->count++;
        //copying to ctopdown_peg_adt from ctopdown_peg_adt;
        ivar_13 = (ctopdown_peg_adt_t)ivar_15;
        ivar_13->count++;
        release_ctopdown_peg_adt(ivar_15);
        bool_t ivar_21;
        ivar_13->count++;
        ivar_21 = (bool_t)r_ctopdown_epsilonp((ctopdown_peg_adt_t)ivar_13);
        if (ivar_21){ 
             release_ctopdown_funtype_49(ivar_8);
             release_ctopdown_peg_adt(ivar_13);
             release_mpz(ivar_10);
             uint8_t ivar_19;
             ivar_19 = (uint8_t)0;
             int64_t tmp1470 = mpz_cmp_ui(ivar_12, ivar_19);
             result = (tmp1470 == 0);
} else {
        
             bool_t ivar_43;
             ivar_13->count++;
             ivar_43 = (bool_t)r_ctopdown_anyp((ctopdown_peg_adt_t)ivar_13);
             if (ivar_43){  
           release_ctopdown_funtype_49(ivar_8);
           ctopdown_array_15_t ivar_25;
           ctopdown_array_15_t ivar_27;
           ivar_27 = (ctopdown_array_15_t)ctopdown_peg_adt_p((ctopdown_peg_adt_t)ivar_13);
           //copying to ctopdown_array_15 from ctopdown_array_15;
           ivar_25 = (ctopdown_array_15_t)ivar_27;
           ivar_25->count++;
           release_ctopdown_array_15(ivar_27);
           bool_t ivar_29;
           uint8_t ivar_32;
           ivar_32 = (uint8_t)1;
           int64_t tmp1471 = mpz_cmp_ui(ivar_12, ivar_32);
           ivar_29 = (tmp1471 == 0);
           bool_t ivar_30;
           uint8_t ivar_41;
           ivar_41 = (uint8_t)ivar_3->ftbl->fptr(ivar_3, ivar_10);
           ivar_30 = (bool_t)ivar_25->elems[ivar_41];
           release_ctopdown_array_15(ivar_25);
           result = ivar_29 && ivar_30;
} else {
             
           bool_t ivar_64;
           ivar_13->count++;
           ivar_64 = (bool_t)r_ctopdown_terminalp((ctopdown_peg_adt_t)ivar_13);
           if (ivar_64){   
           release_ctopdown_funtype_49(ivar_8);
           uint8_t ivar_47;
           ivar_47 = (uint8_t)ctopdown_peg_adt_a((ctopdown_peg_adt_t)ivar_13);
           bool_t ivar_51;
           uint8_t ivar_54;
           ivar_54 = (uint8_t)1;
           int64_t tmp1472 = mpz_cmp_ui(ivar_12, ivar_54);
           ivar_51 = (tmp1472 == 0);
           bool_t ivar_52;
           uint8_t ivar_56;
           ivar_56 = (uint8_t)ivar_3->ftbl->fptr(ivar_3, ivar_10);
           ivar_52 = (ivar_56 == ivar_47);
           result = ivar_51 && ivar_52;
} else {
           
           bool_t ivar_118;
           ivar_13->count++;
           ivar_118 = (bool_t)r_ctopdown_concatp((ctopdown_peg_adt_t)ivar_13);
           if (ivar_118){    
            release_mpz(ivar_12);
            uint8_t ivar_68;
            ivar_13->count++;
            ivar_68 = (uint8_t)ctopdown_peg_adt_e1((ctopdown_peg_adt_t)ivar_13);
            uint8_t ivar_69;
            ivar_69 = (uint8_t)ctopdown_peg_adt_e2((ctopdown_peg_adt_t)ivar_13);
            bool_t ivar_76;
            ctopdown_ent_adt_t ivar_89;
            ctopdown_array_48_t ivar_81;
            ctopdown_array_48_t ivar_83;
            ivar_83 = (ctopdown_array_48_t)ivar_8->ftbl->fptr(ivar_8, ivar_10);
            //copying to ctopdown_array_48 from ctopdown_array_48;
            ivar_81 = (ctopdown_array_48_t)ivar_83;
            ivar_81->count++;
            release_ctopdown_array_48(ivar_83);
            ctopdown_ent_adt_t ivar_80;
            ivar_80 = (ctopdown_ent_adt_t)ivar_81->elems[ivar_68];
            ivar_80->count++;
            release_ctopdown_array_48(ivar_81);
            //copying to ctopdown_ent_adt from ctopdown_ent_adt;
            ivar_89 = (ctopdown_ent_adt_t)ivar_80;
            ivar_89->count++;
            release_ctopdown_ent_adt(ivar_80);
            ivar_76 = (bool_t)r_ctopdown_goodp((ctopdown_ent_adt_t)ivar_89);
            bool_t ivar_77;
            ctopdown_ent_adt_t ivar_116;
            ctopdown_array_48_t ivar_93;
            mpz_ptr_t ivar_113;
            mpz_ptr_t ivar_96;
            ctopdown_ent_adt_t ivar_108;
            ctopdown_array_48_t ivar_100;
            ctopdown_array_48_t ivar_102;
            ivar_102 = (ctopdown_array_48_t)ivar_8->ftbl->fptr(ivar_8, ivar_10);
            //copying to ctopdown_array_48 from ctopdown_array_48;
            ivar_100 = (ctopdown_array_48_t)ivar_102;
            ivar_100->count++;
            release_ctopdown_array_48(ivar_102);
            ctopdown_ent_adt_t ivar_99;
            ivar_99 = (ctopdown_ent_adt_t)ivar_100->elems[ivar_68];
            ivar_99->count++;
            release_ctopdown_array_48(ivar_100);
            //copying to ctopdown_ent_adt from ctopdown_ent_adt;
            ivar_108 = (ctopdown_ent_adt_t)ivar_99;
            ivar_108->count++;
            release_ctopdown_ent_adt(ivar_99);
            ivar_96 = (mpz_ptr_t)ctopdown_ent_adt_span((ctopdown_ent_adt_t)ivar_108);
            mpz_mk_add(ivar_113, ivar_96, ivar_10);
            ctopdown_array_48_t ivar_110;
            ivar_110 = (ctopdown_array_48_t)ivar_8->ftbl->fptr(ivar_8, ivar_113);
            ivar_8->ftbl->rptr(ivar_8);
            //copying to ctopdown_array_48 from ctopdown_array_48;
            ivar_93 = (ctopdown_array_48_t)ivar_110;
            ivar_93->count++;
            release_ctopdown_array_48(ivar_110);
            ctopdown_ent_adt_t ivar_92;
            ivar_92 = (ctopdown_ent_adt_t)ivar_93->elems[ivar_69];
            ivar_92->count++;
            release_ctopdown_array_48(ivar_93);
            //copying to ctopdown_ent_adt from ctopdown_ent_adt;
            ivar_116 = (ctopdown_ent_adt_t)ivar_92;
            ivar_116->count++;
            release_ctopdown_ent_adt(ivar_92);
            ivar_77 = (bool_t)r_ctopdown_goodp((ctopdown_ent_adt_t)ivar_116);
            result = ivar_76 && ivar_77;
} else {
           
            bool_t ivar_172;
            ivar_13->count++;
            ivar_172 = (bool_t)r_ctopdown_orp((ctopdown_peg_adt_t)ivar_13);
            if (ivar_172){     
             release_mpz(ivar_12);
             uint8_t ivar_122;
             ivar_13->count++;
             ivar_122 = (uint8_t)ctopdown_peg_adt_e1((ctopdown_peg_adt_t)ivar_13);
             uint8_t ivar_123;
             ivar_123 = (uint8_t)ctopdown_peg_adt_e2((ctopdown_peg_adt_t)ivar_13);
             bool_t ivar_130;
             ctopdown_ent_adt_t ivar_143;
             ctopdown_array_48_t ivar_135;
             ctopdown_array_48_t ivar_137;
             ivar_137 = (ctopdown_array_48_t)ivar_8->ftbl->fptr(ivar_8, ivar_10);
             //copying to ctopdown_array_48 from ctopdown_array_48;
             ivar_135 = (ctopdown_array_48_t)ivar_137;
             ivar_135->count++;
             release_ctopdown_array_48(ivar_137);
             ctopdown_ent_adt_t ivar_134;
             ivar_134 = (ctopdown_ent_adt_t)ivar_135->elems[ivar_122];
             ivar_134->count++;
             release_ctopdown_array_48(ivar_135);
             //copying to ctopdown_ent_adt from ctopdown_ent_adt;
             ivar_143 = (ctopdown_ent_adt_t)ivar_134;
             ivar_143->count++;
             release_ctopdown_ent_adt(ivar_134);
             ivar_130 = (bool_t)r_ctopdown_goodp((ctopdown_ent_adt_t)ivar_143);
             bool_t ivar_131;
             bool_t ivar_144;
             ctopdown_ent_adt_t ivar_157;
             ctopdown_array_48_t ivar_149;
             ctopdown_array_48_t ivar_151;
             ivar_151 = (ctopdown_array_48_t)ivar_8->ftbl->fptr(ivar_8, ivar_10);
             //copying to ctopdown_array_48 from ctopdown_array_48;
             ivar_149 = (ctopdown_array_48_t)ivar_151;
             ivar_149->count++;
             release_ctopdown_array_48(ivar_151);
             ctopdown_ent_adt_t ivar_148;
             ivar_148 = (ctopdown_ent_adt_t)ivar_149->elems[ivar_122];
             ivar_148->count++;
             release_ctopdown_array_48(ivar_149);
             //copying to ctopdown_ent_adt from ctopdown_ent_adt;
             ivar_157 = (ctopdown_ent_adt_t)ivar_148;
             ivar_157->count++;
             release_ctopdown_ent_adt(ivar_148);
             ivar_144 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_157);
             bool_t ivar_145;
             ctopdown_ent_adt_t ivar_169;
             ctopdown_array_48_t ivar_161;
             ctopdown_array_48_t ivar_163;
             ivar_163 = (ctopdown_array_48_t)ivar_8->ftbl->fptr(ivar_8, ivar_10);
             ivar_8->ftbl->rptr(ivar_8);
             //copying to ctopdown_array_48 from ctopdown_array_48;
             ivar_161 = (ctopdown_array_48_t)ivar_163;
             ivar_161->count++;
             release_ctopdown_array_48(ivar_163);
             ctopdown_ent_adt_t ivar_160;
             ivar_160 = (ctopdown_ent_adt_t)ivar_161->elems[ivar_123];
             ivar_160->count++;
             release_ctopdown_array_48(ivar_161);
             //copying to ctopdown_ent_adt from ctopdown_ent_adt;
             ivar_169 = (ctopdown_ent_adt_t)ivar_160;
             ivar_169->count++;
             release_ctopdown_ent_adt(ivar_160);
             ivar_145 = (bool_t)r_ctopdown_goodp((ctopdown_ent_adt_t)ivar_169);
             ivar_131 = ivar_144 && ivar_145;
             result = ivar_130 || ivar_131;
} else {
            
             bool_t ivar_198;
             ivar_13->count++;
             ivar_198 = (bool_t)r_ctopdown_andp((ctopdown_peg_adt_t)ivar_13);
             if (ivar_198){      
              uint8_t ivar_176;
              ivar_176 = (uint8_t)ctopdown_peg_adt_e((ctopdown_peg_adt_t)ivar_13);
              bool_t ivar_180;
              ctopdown_ent_adt_t ivar_193;
              ctopdown_array_48_t ivar_185;
              ctopdown_array_48_t ivar_187;
              ivar_187 = (ctopdown_array_48_t)ivar_8->ftbl->fptr(ivar_8, ivar_10);
              ivar_8->ftbl->rptr(ivar_8);
              //copying to ctopdown_array_48 from ctopdown_array_48;
              ivar_185 = (ctopdown_array_48_t)ivar_187;
              ivar_185->count++;
              release_ctopdown_array_48(ivar_187);
              ctopdown_ent_adt_t ivar_184;
              ivar_184 = (ctopdown_ent_adt_t)ivar_185->elems[ivar_176];
              ivar_184->count++;
              release_ctopdown_array_48(ivar_185);
              //copying to ctopdown_ent_adt from ctopdown_ent_adt;
              ivar_193 = (ctopdown_ent_adt_t)ivar_184;
              ivar_193->count++;
              release_ctopdown_ent_adt(ivar_184);
              ivar_180 = (bool_t)r_ctopdown_goodp((ctopdown_ent_adt_t)ivar_193);
              bool_t ivar_181;
              uint8_t ivar_195;
              ivar_195 = (uint8_t)0;
              int64_t tmp1473 = mpz_cmp_ui(ivar_12, ivar_195);
              ivar_181 = (tmp1473 == 0);
              result = ivar_180 && ivar_181;
} else {
             
              bool_t ivar_224;
              ivar_13->count++;
              ivar_224 = (bool_t)r_ctopdown_notp((ctopdown_peg_adt_t)ivar_13);
              if (ivar_224){       
               uint8_t ivar_202;
               ivar_202 = (uint8_t)ctopdown_peg_adt_e((ctopdown_peg_adt_t)ivar_13);
               bool_t ivar_206;
               ctopdown_ent_adt_t ivar_219;
               ctopdown_array_48_t ivar_211;
               ctopdown_array_48_t ivar_213;
               ivar_213 = (ctopdown_array_48_t)ivar_8->ftbl->fptr(ivar_8, ivar_10);
               ivar_8->ftbl->rptr(ivar_8);
               //copying to ctopdown_array_48 from ctopdown_array_48;
               ivar_211 = (ctopdown_array_48_t)ivar_213;
               ivar_211->count++;
               release_ctopdown_array_48(ivar_213);
               ctopdown_ent_adt_t ivar_210;
               ivar_210 = (ctopdown_ent_adt_t)ivar_211->elems[ivar_202];
               ivar_210->count++;
               release_ctopdown_array_48(ivar_211);
               //copying to ctopdown_ent_adt from ctopdown_ent_adt;
               ivar_219 = (ctopdown_ent_adt_t)ivar_210;
               ivar_219->count++;
               release_ctopdown_ent_adt(ivar_210);
               ivar_206 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_219);
               bool_t ivar_207;
               uint8_t ivar_221;
               ivar_221 = (uint8_t)0;
               int64_t tmp1474 = mpz_cmp_ui(ivar_12, ivar_221);
               ivar_207 = (tmp1474 == 0);
               result = ivar_206 && ivar_207;
} else {
              
               release_ctopdown_peg_adt(ivar_13);
               release_mpz(ivar_12);
               release_mpz(ivar_10);
               release_ctopdown_funtype_49(ivar_8);
               result = (bool_t) false;
};
};
};
};
};
};
};

        return result;
}

ctopdown_closure_57_t new_ctopdown_closure_57(void){
        static struct ctopdown_funtype_56_ftbl_s ftbl = {.fptr = (bool_t (*)(ctopdown_funtype_56_t, ctopdown_record_55_t))&f_ctopdown_closure_57, .mptr = (bool_t (*)(ctopdown_funtype_56_t, ctopdown_funtype_49_t, mpz_t, uint8_t, mpz_t))&m_ctopdown_closure_57, .rptr =  (void (*)(ctopdown_funtype_56_t))&release_ctopdown_closure_57, .cptr = (ctopdown_funtype_56_t (*)(ctopdown_funtype_56_t))&copy_ctopdown_closure_57};
        ctopdown_closure_57_t tmp = (ctopdown_closure_57_t) safe_malloc(sizeof(struct ctopdown_closure_57_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ctopdown_closure_57(ctopdown_funtype_56_t closure){
        ctopdown_closure_57_t x = (ctopdown_closure_57_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_funtype_52(x->fvar_1);
         release_ctopdown_lang_spec(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_57_t copy_ctopdown_closure_57(ctopdown_closure_57_t x){
        ctopdown_closure_57_t y = new_ctopdown_closure_57();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ctopdown_funtype_56_htbl_t new_htbl = (ctopdown_funtype_56_htbl_t) safe_malloc(sizeof(ctopdown_funtype_56_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_56_hashentry_t * new_data = (ctopdown_funtype_56_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_56_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_56_hashentry_t)));
        }
        return y;
}


ctopdown_stackADT_adt_t new_ctopdown_stackADT_adt(void){
        ctopdown_stackADT_adt_t tmp = (ctopdown_stackADT_adt_t) safe_malloc(sizeof(struct ctopdown_stackADT_adt_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_stackADT_adt(ctopdown_stackADT_adt_t x){
switch (x->ctopdown_stackADT_adt_index) {
case 1:  release_ctopdown_push((ctopdown_push_t) x); break;
}}

ctopdown_stackADT_adt_t copy_ctopdown_stackADT_adt(ctopdown_stackADT_adt_t x){
        ctopdown_stackADT_adt_t y = new_ctopdown_stackADT_adt();
        y->ctopdown_stackADT_adt_index = (uint8_t)x->ctopdown_stackADT_adt_index;
        y->count = 1;
        return y;}

bool_t equal_ctopdown_stackADT_adt(ctopdown_stackADT_adt_t x, ctopdown_stackADT_adt_t y){
        bool_t tmp = x->ctopdown_stackADT_adt_index == y->ctopdown_stackADT_adt_index;
        switch  (x->ctopdown_stackADT_adt_index) {
                case 1: tmp = tmp && equal_ctopdown_push((ctopdown_push_t) x, (ctopdown_push_t) y); break;
        }
        return tmp;
}

ctopdown_stackADT_adt_t update_ctopdown_stackADT_adt_ctopdown_stackADT_adt_index(ctopdown_stackADT_adt_t x, uint8_t v){
        ctopdown_stackADT_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_stackADT_adt(x); x->count--;};
        y->ctopdown_stackADT_adt_index = (uint8_t)v;
        return y;}




ctopdown_push_t new_ctopdown_push(void){
        ctopdown_push_t tmp = (ctopdown_push_t) safe_malloc(sizeof(struct ctopdown_push_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_push(ctopdown_push_t x){
        x->count--;
        if (x->count <= 0){
         release_ctopdown_stackADT_adt(x->rest);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_push_t copy_ctopdown_push(ctopdown_push_t x){
        ctopdown_push_t y = new_ctopdown_push();
        y->ctopdown_stackADT_adt_index = (uint8_t)x->ctopdown_stackADT_adt_index;
        y->pos = (uint32_t)x->pos;
        y->nt = (uint8_t)x->nt;
        y->rest = x->rest;
        if (y->rest != NULL){y->rest->count++;};
        y->count = 1;
        return y;}

bool_t equal_ctopdown_push(ctopdown_push_t x, ctopdown_push_t y){
        bool_t tmp = true;
        tmp = tmp && x->ctopdown_stackADT_adt_index == y->ctopdown_stackADT_adt_index;
        tmp = tmp && x->pos == y->pos;
        tmp = tmp && x->nt == y->nt;
        tmp = tmp && equal_ctopdown_stackADT_adt(x->rest, y->rest);
        return tmp;}

ctopdown_push_t update_ctopdown_push_ctopdown_stackADT_adt_index(ctopdown_push_t x, uint8_t v){
        ctopdown_push_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_push(x); x->count--;};
        y->ctopdown_stackADT_adt_index = (uint8_t)v;
        return y;}

ctopdown_push_t update_ctopdown_push_pos(ctopdown_push_t x, uint32_t v){
        ctopdown_push_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_push(x); x->count--;};
        y->pos = (uint32_t)v;
        return y;}

ctopdown_push_t update_ctopdown_push_nt(ctopdown_push_t x, uint8_t v){
        ctopdown_push_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_push(x); x->count--;};
        y->nt = (uint8_t)v;
        return y;}

ctopdown_push_t update_ctopdown_push_rest(ctopdown_push_t x, ctopdown_stackADT_adt_t v){
        ctopdown_push_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->rest != NULL){release_ctopdown_stackADT_adt(x->rest);};}
        else {y = copy_ctopdown_push(x); x->count--; y->rest->count--;};
        y->rest = (ctopdown_stackADT_adt_t)v;
        return y;}



void release_ctopdown_funtype_60(ctopdown_funtype_60_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_60_t copy_ctopdown_funtype_60(ctopdown_funtype_60_t x){return x->ftbl->cptr(x);}

void release_ctopdown_funtype_61(ctopdown_funtype_61_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_61_t copy_ctopdown_funtype_61(ctopdown_funtype_61_t x){return x->ftbl->cptr(x);}


ctopdown_record_62_t new_ctopdown_record_62(void){
        ctopdown_record_62_t tmp = (ctopdown_record_62_t) safe_malloc(sizeof(struct ctopdown_record_62_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_record_62(ctopdown_record_62_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_record_62_t copy_ctopdown_record_62(ctopdown_record_62_t x){
        ctopdown_record_62_t y = new_ctopdown_record_62();
        y->project_1 = (uint32_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        mpz_set(y->project_3, x->project_3);
        y->count = 1;
        return y;}

bool_t equal_ctopdown_record_62(ctopdown_record_62_t x, ctopdown_record_62_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        return tmp;}

ctopdown_record_62_t update_ctopdown_record_62_project_1(ctopdown_record_62_t x, uint32_t v){
        ctopdown_record_62_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_62(x); x->count--;};
        y->project_1 = (uint32_t)v;
        return y;}

ctopdown_record_62_t update_ctopdown_record_62_project_2(ctopdown_record_62_t x, uint8_t v){
        ctopdown_record_62_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_62(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

ctopdown_record_62_t update_ctopdown_record_62_project_3(ctopdown_record_62_t x, mpz_t v){
        ctopdown_record_62_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_62(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}



void release_ctopdown_funtype_63(ctopdown_funtype_63_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_63_t copy_ctopdown_funtype_63(ctopdown_funtype_63_t x){return x->ftbl->cptr(x);}


mpz_ptr_t f_ctopdown_closure_64(struct ctopdown_closure_64_s * closure, ctopdown_stackADT_adt_t bvar){
        mpz_ptr_t result = h_ctopdown_closure_64(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_ctopdown_closure_64(struct ctopdown_closure_64_s * closure, ctopdown_stackADT_adt_t bvar){
        return h_ctopdown_closure_64(bvar, closure->fvar_1, closure->fvar_2);}

extern mpz_ptr_t h_ctopdown_closure_64(ctopdown_stackADT_adt_t ivar_3, ctopdown_funtype_63_t ivar_2, mpz_t ivar_1){
        mpz_ptr_t result;
        /* red */ ctopdown_funtype_61_t ivar_4;
        ctopdown_funtype_61_t ivar_7;
        ivar_2->count++;
        ivar_7 = (ctopdown_funtype_61_t)ctopdown_reduce_nat_3(ivar_1, (ctopdown_funtype_63_t)ivar_2);
        //copying to ctopdown_funtype_61 from ctopdown_funtype_61;
        ivar_4 = (ctopdown_funtype_61_t)ivar_7;
        ivar_4->count++;
        release_ctopdown_funtype_61(ivar_7);
        bool_t ivar_11;
        ivar_3->count++;
        ivar_11 = (bool_t)r_ctopdown_emptyp((ctopdown_stackADT_adt_t)ivar_3);
        if (ivar_11){ 
             release_ctopdown_funtype_61(ivar_4);
             release_ctopdown_stackADT_adt(ivar_3);
             result = safe_malloc(sizeof(mpz_t));
             mpz_init(result);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_1);
} else {
        
             uint32_t ivar_15;
             ivar_3->count++;
             ivar_15 = (uint32_t)ctopdown_stackADT_adt_pos((ctopdown_stackADT_adt_t)ivar_3);
             uint8_t ivar_16;
             ivar_3->count++;
             ivar_16 = (uint8_t)ctopdown_stackADT_adt_nt((ctopdown_stackADT_adt_t)ivar_3);
             ctopdown_stackADT_adt_t ivar_17;
             ctopdown_stackADT_adt_t ivar_25;
             ivar_25 = (ctopdown_stackADT_adt_t)ctopdown_stackADT_adt_rest((ctopdown_stackADT_adt_t)ivar_3);
             //copying to ctopdown_stackADT_adt from ctopdown_stackADT_adt;
             ivar_17 = (ctopdown_stackADT_adt_t)ivar_25;
             ivar_17->count++;
             release_ctopdown_stackADT_adt(ivar_25);
             mpz_ptr_t ivar_38;
             ivar_38 = (mpz_ptr_t)ivar_4->ftbl->fptr(ivar_4, ivar_17);
             ivar_4->ftbl->rptr(ivar_4);
             result = (mpz_ptr_t)ivar_2->ftbl->mptr(ivar_2, ivar_15, ivar_16, ivar_38);
};

        return result;
}

ctopdown_closure_64_t new_ctopdown_closure_64(void){
        static struct ctopdown_funtype_61_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ctopdown_funtype_61_t, ctopdown_stackADT_adt_t))&f_ctopdown_closure_64, .mptr = (mpz_ptr_t (*)(ctopdown_funtype_61_t, ctopdown_stackADT_adt_t))&m_ctopdown_closure_64, .rptr =  (void (*)(ctopdown_funtype_61_t))&release_ctopdown_closure_64, .cptr = (ctopdown_funtype_61_t (*)(ctopdown_funtype_61_t))&copy_ctopdown_closure_64};
        ctopdown_closure_64_t tmp = (ctopdown_closure_64_t) safe_malloc(sizeof(struct ctopdown_closure_64_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_ctopdown_closure_64(ctopdown_funtype_61_t closure){
        ctopdown_closure_64_t x = (ctopdown_closure_64_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_funtype_63(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_64_t copy_ctopdown_closure_64(ctopdown_closure_64_t x){
        ctopdown_closure_64_t y = new_ctopdown_closure_64();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        mpz_set(y->fvar_2, x->fvar_2);
        if (x->htbl != NULL){
            ctopdown_funtype_61_htbl_t new_htbl = (ctopdown_funtype_61_htbl_t) safe_malloc(sizeof(ctopdown_funtype_61_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_61_hashentry_t * new_data = (ctopdown_funtype_61_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_61_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_61_hashentry_t)));
        }
        return y;
}


ctopdown_record_65_t new_ctopdown_record_65(void){
        ctopdown_record_65_t tmp = (ctopdown_record_65_t) safe_malloc(sizeof(struct ctopdown_record_65_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_record_65(ctopdown_record_65_t x){
        x->count--;
        if (x->count <= 0){
         release_ctopdown_stackADT_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_record_65_t copy_ctopdown_record_65(ctopdown_record_65_t x){
        ctopdown_record_65_t y = new_ctopdown_record_65();
        y->project_1 = (uint32_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        mpz_set(y->project_3, x->project_3);
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ctopdown_record_65(ctopdown_record_65_t x, ctopdown_record_65_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && equal_ctopdown_stackADT_adt(x->project_4, y->project_4);
        return tmp;}

ctopdown_record_65_t update_ctopdown_record_65_project_1(ctopdown_record_65_t x, uint32_t v){
        ctopdown_record_65_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_65(x); x->count--;};
        y->project_1 = (uint32_t)v;
        return y;}

ctopdown_record_65_t update_ctopdown_record_65_project_2(ctopdown_record_65_t x, uint8_t v){
        ctopdown_record_65_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_65(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

ctopdown_record_65_t update_ctopdown_record_65_project_3(ctopdown_record_65_t x, mpz_t v){
        ctopdown_record_65_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_65(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}

ctopdown_record_65_t update_ctopdown_record_65_project_4(ctopdown_record_65_t x, ctopdown_stackADT_adt_t v){
        ctopdown_record_65_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ctopdown_stackADT_adt(x->project_4);};}
        else {y = copy_ctopdown_record_65(x); x->count--; y->project_4->count--;};
        y->project_4 = (ctopdown_stackADT_adt_t)v;
        return y;}



void release_ctopdown_funtype_66(ctopdown_funtype_66_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_66_t copy_ctopdown_funtype_66(ctopdown_funtype_66_t x){return x->ftbl->cptr(x);}


mpz_ptr_t f_ctopdown_closure_67(struct ctopdown_closure_67_s * closure, ctopdown_stackADT_adt_t bvar){
        mpz_ptr_t result = h_ctopdown_closure_67(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_ctopdown_closure_67(struct ctopdown_closure_67_s * closure, ctopdown_stackADT_adt_t bvar){
        return h_ctopdown_closure_67(bvar, closure->fvar_1, closure->fvar_2);}

extern mpz_ptr_t h_ctopdown_closure_67(ctopdown_stackADT_adt_t ivar_3, ctopdown_funtype_66_t ivar_2, ctopdown_funtype_61_t ivar_1){
        mpz_ptr_t result;
        /* red */ ctopdown_funtype_61_t ivar_4;
        ctopdown_funtype_61_t ivar_7;
        ivar_1->count++;
        ivar_2->count++;
        ivar_7 = (ctopdown_funtype_61_t)ctopdown_REDUCE_nat_3((ctopdown_funtype_61_t)ivar_1, (ctopdown_funtype_66_t)ivar_2);
        //copying to ctopdown_funtype_61 from ctopdown_funtype_61;
        ivar_4 = (ctopdown_funtype_61_t)ivar_7;
        ivar_4->count++;
        release_ctopdown_funtype_61(ivar_7);
        bool_t ivar_15;
        ivar_3->count++;
        ivar_15 = (bool_t)r_ctopdown_emptyp((ctopdown_stackADT_adt_t)ivar_3);
        if (ivar_15){ 
             release_ctopdown_funtype_61(ivar_4);
             result = (mpz_ptr_t)ivar_1->ftbl->fptr(ivar_1, ivar_3);
} else {
        
             uint32_t ivar_19;
             ivar_3->count++;
             ivar_19 = (uint32_t)ctopdown_stackADT_adt_pos((ctopdown_stackADT_adt_t)ivar_3);
             uint8_t ivar_20;
             ivar_3->count++;
             ivar_20 = (uint8_t)ctopdown_stackADT_adt_nt((ctopdown_stackADT_adt_t)ivar_3);
             ctopdown_stackADT_adt_t ivar_21;
             ctopdown_stackADT_adt_t ivar_29;
             ivar_3->count++;
             ivar_29 = (ctopdown_stackADT_adt_t)ctopdown_stackADT_adt_rest((ctopdown_stackADT_adt_t)ivar_3);
             //copying to ctopdown_stackADT_adt from ctopdown_stackADT_adt;
             ivar_21 = (ctopdown_stackADT_adt_t)ivar_29;
             ivar_21->count++;
             release_ctopdown_stackADT_adt(ivar_29);
             mpz_ptr_t ivar_43;
             ivar_43 = (mpz_ptr_t)ivar_4->ftbl->fptr(ivar_4, ivar_21);
             ivar_4->ftbl->rptr(ivar_4);
             result = (mpz_ptr_t)ivar_2->ftbl->mptr(ivar_2, ivar_19, ivar_20, ivar_43, ivar_3);
};

        return result;
}

ctopdown_closure_67_t new_ctopdown_closure_67(void){
        static struct ctopdown_funtype_61_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ctopdown_funtype_61_t, ctopdown_stackADT_adt_t))&f_ctopdown_closure_67, .mptr = (mpz_ptr_t (*)(ctopdown_funtype_61_t, ctopdown_stackADT_adt_t))&m_ctopdown_closure_67, .rptr =  (void (*)(ctopdown_funtype_61_t))&release_ctopdown_closure_67, .cptr = (ctopdown_funtype_61_t (*)(ctopdown_funtype_61_t))&copy_ctopdown_closure_67};
        ctopdown_closure_67_t tmp = (ctopdown_closure_67_t) safe_malloc(sizeof(struct ctopdown_closure_67_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ctopdown_closure_67(ctopdown_funtype_61_t closure){
        ctopdown_closure_67_t x = (ctopdown_closure_67_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_funtype_66(x->fvar_1);
         release_ctopdown_funtype_61(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_67_t copy_ctopdown_closure_67(ctopdown_closure_67_t x){
        ctopdown_closure_67_t y = new_ctopdown_closure_67();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ctopdown_funtype_61_htbl_t new_htbl = (ctopdown_funtype_61_htbl_t) safe_malloc(sizeof(ctopdown_funtype_61_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_61_hashentry_t * new_data = (ctopdown_funtype_61_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_61_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_61_hashentry_t)));
        }
        return y;
}

void release_ctopdown_funtype_68(ctopdown_funtype_68_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_68_t copy_ctopdown_funtype_68(ctopdown_funtype_68_t x){return x->ftbl->cptr(x);}


ctopdown_record_69_t new_ctopdown_record_69(void){
        ctopdown_record_69_t tmp = (ctopdown_record_69_t) safe_malloc(sizeof(struct ctopdown_record_69_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_record_69(ctopdown_record_69_t x){
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt_ordstruct_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_record_69_t copy_ctopdown_record_69(ctopdown_record_69_t x){
        ctopdown_record_69_t y = new_ctopdown_record_69();
        y->project_1 = (uint32_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_ctopdown_record_69(ctopdown_record_69_t x, ctopdown_record_69_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_ordstruct_adt_ordstruct_adt(x->project_3, y->project_3);
        return tmp;}

ctopdown_record_69_t update_ctopdown_record_69_project_1(ctopdown_record_69_t x, uint32_t v){
        ctopdown_record_69_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_69(x); x->count--;};
        y->project_1 = (uint32_t)v;
        return y;}

ctopdown_record_69_t update_ctopdown_record_69_project_2(ctopdown_record_69_t x, uint8_t v){
        ctopdown_record_69_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_69(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

ctopdown_record_69_t update_ctopdown_record_69_project_3(ctopdown_record_69_t x, ordstruct_adt_ordstruct_adt_t v){
        ctopdown_record_69_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt_ordstruct_adt(x->project_3);};}
        else {y = copy_ctopdown_record_69(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt_ordstruct_adt_t)v;
        return y;}



void release_ctopdown_funtype_70(ctopdown_funtype_70_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_70_t copy_ctopdown_funtype_70(ctopdown_funtype_70_t x){return x->ftbl->cptr(x);}


ordstruct_adt_ordstruct_adt_t f_ctopdown_closure_71(struct ctopdown_closure_71_s * closure, ctopdown_stackADT_adt_t bvar){
        ordstruct_adt_ordstruct_adt_t result = h_ctopdown_closure_71(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

ordstruct_adt_ordstruct_adt_t m_ctopdown_closure_71(struct ctopdown_closure_71_s * closure, ctopdown_stackADT_adt_t bvar){
        return h_ctopdown_closure_71(bvar, closure->fvar_1, closure->fvar_2);}

extern ordstruct_adt_ordstruct_adt_t h_ctopdown_closure_71(ctopdown_stackADT_adt_t ivar_3, ctopdown_funtype_70_t ivar_2, ordstruct_adt_ordstruct_adt_t ivar_1){
        ordstruct_adt_ordstruct_adt_t result;
        /* red */ ctopdown_funtype_68_t ivar_4;
        ctopdown_funtype_68_t ivar_7;
        ivar_1->count++;
        ivar_2->count++;
        ivar_7 = (ctopdown_funtype_68_t)ctopdown_reduce_ordinal_3((ordstruct_adt_ordstruct_adt_t)ivar_1, (ctopdown_funtype_70_t)ivar_2);
        //copying to ctopdown_funtype_68 from ctopdown_funtype_68;
        ivar_4 = (ctopdown_funtype_68_t)ivar_7;
        ivar_4->count++;
        release_ctopdown_funtype_68(ivar_7);
        bool_t ivar_11;
        ivar_3->count++;
        ivar_11 = (bool_t)r_ctopdown_emptyp((ctopdown_stackADT_adt_t)ivar_3);
        if (ivar_11){ 
             release_ctopdown_funtype_68(ivar_4);
             release_ctopdown_stackADT_adt(ivar_3);
             //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
             result = (ordstruct_adt_ordstruct_adt_t)ivar_1;
             result->count++;
} else {
        
             uint32_t ivar_15;
             ivar_3->count++;
             ivar_15 = (uint32_t)ctopdown_stackADT_adt_pos((ctopdown_stackADT_adt_t)ivar_3);
             uint8_t ivar_16;
             ivar_3->count++;
             ivar_16 = (uint8_t)ctopdown_stackADT_adt_nt((ctopdown_stackADT_adt_t)ivar_3);
             ctopdown_stackADT_adt_t ivar_17;
             ctopdown_stackADT_adt_t ivar_25;
             ivar_25 = (ctopdown_stackADT_adt_t)ctopdown_stackADT_adt_rest((ctopdown_stackADT_adt_t)ivar_3);
             //copying to ctopdown_stackADT_adt from ctopdown_stackADT_adt;
             ivar_17 = (ctopdown_stackADT_adt_t)ivar_25;
             ivar_17->count++;
             release_ctopdown_stackADT_adt(ivar_25);
             ordstruct_adt_ordstruct_adt_t ivar_38;
             ordstruct_adt_ordstruct_adt_t ivar_31;
             ivar_31 = (ordstruct_adt_ordstruct_adt_t)ivar_4->ftbl->fptr(ivar_4, ivar_17);
             ivar_4->ftbl->rptr(ivar_4);
             //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
             ivar_38 = (ordstruct_adt_ordstruct_adt_t)ivar_31;
             ivar_38->count++;
             release_ordstruct_adt_ordstruct_adt(ivar_31);
             ordstruct_adt_ordstruct_adt_t ivar_34;
             ivar_34 = (ordstruct_adt_ordstruct_adt_t)ivar_2->ftbl->mptr(ivar_2, ivar_15, ivar_16, ivar_38);
             //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
             result = (ordstruct_adt_ordstruct_adt_t)ivar_34;
             result->count++;
             release_ordstruct_adt_ordstruct_adt(ivar_34);
};

        return result;
}

ctopdown_closure_71_t new_ctopdown_closure_71(void){
        static struct ctopdown_funtype_68_ftbl_s ftbl = {.fptr = (ordstruct_adt_ordstruct_adt_t (*)(ctopdown_funtype_68_t, ctopdown_stackADT_adt_t))&f_ctopdown_closure_71, .mptr = (ordstruct_adt_ordstruct_adt_t (*)(ctopdown_funtype_68_t, ctopdown_stackADT_adt_t))&m_ctopdown_closure_71, .rptr =  (void (*)(ctopdown_funtype_68_t))&release_ctopdown_closure_71, .cptr = (ctopdown_funtype_68_t (*)(ctopdown_funtype_68_t))&copy_ctopdown_closure_71};
        ctopdown_closure_71_t tmp = (ctopdown_closure_71_t) safe_malloc(sizeof(struct ctopdown_closure_71_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ctopdown_closure_71(ctopdown_funtype_68_t closure){
        ctopdown_closure_71_t x = (ctopdown_closure_71_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_funtype_70(x->fvar_1);
         release_ordstruct_adt_ordstruct_adt(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_71_t copy_ctopdown_closure_71(ctopdown_closure_71_t x){
        ctopdown_closure_71_t y = new_ctopdown_closure_71();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ctopdown_funtype_68_htbl_t new_htbl = (ctopdown_funtype_68_htbl_t) safe_malloc(sizeof(ctopdown_funtype_68_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_68_hashentry_t * new_data = (ctopdown_funtype_68_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_68_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_68_hashentry_t)));
        }
        return y;
}


ctopdown_record_72_t new_ctopdown_record_72(void){
        ctopdown_record_72_t tmp = (ctopdown_record_72_t) safe_malloc(sizeof(struct ctopdown_record_72_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_record_72(ctopdown_record_72_t x){
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt_ordstruct_adt(x->project_3);
         release_ctopdown_stackADT_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_record_72_t copy_ctopdown_record_72(ctopdown_record_72_t x){
        ctopdown_record_72_t y = new_ctopdown_record_72();
        y->project_1 = (uint32_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ctopdown_record_72(ctopdown_record_72_t x, ctopdown_record_72_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_ordstruct_adt_ordstruct_adt(x->project_3, y->project_3);
        tmp = tmp && equal_ctopdown_stackADT_adt(x->project_4, y->project_4);
        return tmp;}

ctopdown_record_72_t update_ctopdown_record_72_project_1(ctopdown_record_72_t x, uint32_t v){
        ctopdown_record_72_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_72(x); x->count--;};
        y->project_1 = (uint32_t)v;
        return y;}

ctopdown_record_72_t update_ctopdown_record_72_project_2(ctopdown_record_72_t x, uint8_t v){
        ctopdown_record_72_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_72(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

ctopdown_record_72_t update_ctopdown_record_72_project_3(ctopdown_record_72_t x, ordstruct_adt_ordstruct_adt_t v){
        ctopdown_record_72_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt_ordstruct_adt(x->project_3);};}
        else {y = copy_ctopdown_record_72(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt_ordstruct_adt_t)v;
        return y;}

ctopdown_record_72_t update_ctopdown_record_72_project_4(ctopdown_record_72_t x, ctopdown_stackADT_adt_t v){
        ctopdown_record_72_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ctopdown_stackADT_adt(x->project_4);};}
        else {y = copy_ctopdown_record_72(x); x->count--; y->project_4->count--;};
        y->project_4 = (ctopdown_stackADT_adt_t)v;
        return y;}



void release_ctopdown_funtype_73(ctopdown_funtype_73_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_73_t copy_ctopdown_funtype_73(ctopdown_funtype_73_t x){return x->ftbl->cptr(x);}


ordstruct_adt_ordstruct_adt_t f_ctopdown_closure_74(struct ctopdown_closure_74_s * closure, ctopdown_stackADT_adt_t bvar){
        ordstruct_adt_ordstruct_adt_t result = h_ctopdown_closure_74(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

ordstruct_adt_ordstruct_adt_t m_ctopdown_closure_74(struct ctopdown_closure_74_s * closure, ctopdown_stackADT_adt_t bvar){
        return h_ctopdown_closure_74(bvar, closure->fvar_1, closure->fvar_2);}

extern ordstruct_adt_ordstruct_adt_t h_ctopdown_closure_74(ctopdown_stackADT_adt_t ivar_3, ctopdown_funtype_73_t ivar_2, ctopdown_funtype_68_t ivar_1){
        ordstruct_adt_ordstruct_adt_t result;
        /* red */ ctopdown_funtype_68_t ivar_4;
        ctopdown_funtype_68_t ivar_7;
        ivar_1->count++;
        ivar_2->count++;
        ivar_7 = (ctopdown_funtype_68_t)ctopdown_REDUCE_ordinal_3((ctopdown_funtype_68_t)ivar_1, (ctopdown_funtype_73_t)ivar_2);
        //copying to ctopdown_funtype_68 from ctopdown_funtype_68;
        ivar_4 = (ctopdown_funtype_68_t)ivar_7;
        ivar_4->count++;
        release_ctopdown_funtype_68(ivar_7);
        bool_t ivar_15;
        ivar_3->count++;
        ivar_15 = (bool_t)r_ctopdown_emptyp((ctopdown_stackADT_adt_t)ivar_3);
        if (ivar_15){ 
             release_ctopdown_funtype_68(ivar_4);
             ordstruct_adt_ordstruct_adt_t ivar_12;
             ivar_12 = (ordstruct_adt_ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_3);
             //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
             result = (ordstruct_adt_ordstruct_adt_t)ivar_12;
             result->count++;
             release_ordstruct_adt_ordstruct_adt(ivar_12);
} else {
        
             uint32_t ivar_19;
             ivar_3->count++;
             ivar_19 = (uint32_t)ctopdown_stackADT_adt_pos((ctopdown_stackADT_adt_t)ivar_3);
             uint8_t ivar_20;
             ivar_3->count++;
             ivar_20 = (uint8_t)ctopdown_stackADT_adt_nt((ctopdown_stackADT_adt_t)ivar_3);
             ctopdown_stackADT_adt_t ivar_21;
             ctopdown_stackADT_adt_t ivar_29;
             ivar_3->count++;
             ivar_29 = (ctopdown_stackADT_adt_t)ctopdown_stackADT_adt_rest((ctopdown_stackADT_adt_t)ivar_3);
             //copying to ctopdown_stackADT_adt from ctopdown_stackADT_adt;
             ivar_21 = (ctopdown_stackADT_adt_t)ivar_29;
             ivar_21->count++;
             release_ctopdown_stackADT_adt(ivar_29);
             ordstruct_adt_ordstruct_adt_t ivar_43;
             ordstruct_adt_ordstruct_adt_t ivar_36;
             ivar_36 = (ordstruct_adt_ordstruct_adt_t)ivar_4->ftbl->fptr(ivar_4, ivar_21);
             ivar_4->ftbl->rptr(ivar_4);
             //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
             ivar_43 = (ordstruct_adt_ordstruct_adt_t)ivar_36;
             ivar_43->count++;
             release_ordstruct_adt_ordstruct_adt(ivar_36);
             ordstruct_adt_ordstruct_adt_t ivar_39;
             ivar_39 = (ordstruct_adt_ordstruct_adt_t)ivar_2->ftbl->mptr(ivar_2, ivar_19, ivar_20, ivar_43, ivar_3);
             //copying to ordstruct_adt_ordstruct_adt from ordstruct_adt_ordstruct_adt;
             result = (ordstruct_adt_ordstruct_adt_t)ivar_39;
             result->count++;
             release_ordstruct_adt_ordstruct_adt(ivar_39);
};

        return result;
}

ctopdown_closure_74_t new_ctopdown_closure_74(void){
        static struct ctopdown_funtype_68_ftbl_s ftbl = {.fptr = (ordstruct_adt_ordstruct_adt_t (*)(ctopdown_funtype_68_t, ctopdown_stackADT_adt_t))&f_ctopdown_closure_74, .mptr = (ordstruct_adt_ordstruct_adt_t (*)(ctopdown_funtype_68_t, ctopdown_stackADT_adt_t))&m_ctopdown_closure_74, .rptr =  (void (*)(ctopdown_funtype_68_t))&release_ctopdown_closure_74, .cptr = (ctopdown_funtype_68_t (*)(ctopdown_funtype_68_t))&copy_ctopdown_closure_74};
        ctopdown_closure_74_t tmp = (ctopdown_closure_74_t) safe_malloc(sizeof(struct ctopdown_closure_74_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ctopdown_closure_74(ctopdown_funtype_68_t closure){
        ctopdown_closure_74_t x = (ctopdown_closure_74_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_funtype_73(x->fvar_1);
         release_ctopdown_funtype_68(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_74_t copy_ctopdown_closure_74(ctopdown_closure_74_t x){
        ctopdown_closure_74_t y = new_ctopdown_closure_74();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ctopdown_funtype_68_htbl_t new_htbl = (ctopdown_funtype_68_htbl_t) safe_malloc(sizeof(ctopdown_funtype_68_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_68_hashentry_t * new_data = (ctopdown_funtype_68_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_68_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_68_hashentry_t)));
        }
        return y;
}

void release_ctopdown_funtype_75(ctopdown_funtype_75_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_75_t copy_ctopdown_funtype_75(ctopdown_funtype_75_t x){return x->ftbl->cptr(x);}


bool_t f_ctopdown_closure_76(struct ctopdown_closure_76_s * closure, ctopdown_funtype_49_t bvar){
        bool_t result = h_ctopdown_closure_76(bvar); 
        return result;}

bool_t m_ctopdown_closure_76(struct ctopdown_closure_76_s * closure, ctopdown_funtype_49_t bvar){
        return h_ctopdown_closure_76(bvar);}

extern bool_t h_ctopdown_closure_76(ctopdown_funtype_49_t ivar_7){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}

ctopdown_closure_76_t new_ctopdown_closure_76(void){
        static struct ctopdown_funtype_75_ftbl_s ftbl = {.fptr = (bool_t (*)(ctopdown_funtype_75_t, ctopdown_funtype_49_t))&f_ctopdown_closure_76, .mptr = (bool_t (*)(ctopdown_funtype_75_t, ctopdown_funtype_49_t))&m_ctopdown_closure_76, .rptr =  (void (*)(ctopdown_funtype_75_t))&release_ctopdown_closure_76, .cptr = (ctopdown_funtype_75_t (*)(ctopdown_funtype_75_t))&copy_ctopdown_closure_76};
        ctopdown_closure_76_t tmp = (ctopdown_closure_76_t) safe_malloc(sizeof(struct ctopdown_closure_76_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ctopdown_closure_76(ctopdown_funtype_75_t closure){
        ctopdown_closure_76_t x = (ctopdown_closure_76_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_76_t copy_ctopdown_closure_76(ctopdown_closure_76_t x){
        ctopdown_closure_76_t y = new_ctopdown_closure_76();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            ctopdown_funtype_75_htbl_t new_htbl = (ctopdown_funtype_75_htbl_t) safe_malloc(sizeof(ctopdown_funtype_75_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_75_hashentry_t * new_data = (ctopdown_funtype_75_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_75_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_75_hashentry_t)));
        }
        return y;
}


bool_t f_ctopdown_closure_77(struct ctopdown_closure_77_s * closure, ctopdown_funtype_49_t bvar){
        bool_t result = h_ctopdown_closure_77(bvar); 
        return result;}

bool_t m_ctopdown_closure_77(struct ctopdown_closure_77_s * closure, ctopdown_funtype_49_t bvar){
        return h_ctopdown_closure_77(bvar);}

extern bool_t h_ctopdown_closure_77(ctopdown_funtype_49_t ivar_8){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}

ctopdown_closure_77_t new_ctopdown_closure_77(void){
        static struct ctopdown_funtype_75_ftbl_s ftbl = {.fptr = (bool_t (*)(ctopdown_funtype_75_t, ctopdown_funtype_49_t))&f_ctopdown_closure_77, .mptr = (bool_t (*)(ctopdown_funtype_75_t, ctopdown_funtype_49_t))&m_ctopdown_closure_77, .rptr =  (void (*)(ctopdown_funtype_75_t))&release_ctopdown_closure_77, .cptr = (ctopdown_funtype_75_t (*)(ctopdown_funtype_75_t))&copy_ctopdown_closure_77};
        ctopdown_closure_77_t tmp = (ctopdown_closure_77_t) safe_malloc(sizeof(struct ctopdown_closure_77_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ctopdown_closure_77(ctopdown_funtype_75_t closure){
        ctopdown_closure_77_t x = (ctopdown_closure_77_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_77_t copy_ctopdown_closure_77(ctopdown_closure_77_t x){
        ctopdown_closure_77_t y = new_ctopdown_closure_77();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            ctopdown_funtype_75_htbl_t new_htbl = (ctopdown_funtype_75_htbl_t) safe_malloc(sizeof(ctopdown_funtype_75_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_75_hashentry_t * new_data = (ctopdown_funtype_75_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_75_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_75_hashentry_t)));
        }
        return y;
}


ctopdown_record_78_t new_ctopdown_record_78(void){
        ctopdown_record_78_t tmp = (ctopdown_record_78_t) safe_malloc(sizeof(struct ctopdown_record_78_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_record_78(ctopdown_record_78_t x){
        x->count--;
        if (x->count <= 0){
         release_ctopdown_stackADT_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_record_78_t copy_ctopdown_record_78(ctopdown_record_78_t x){
        ctopdown_record_78_t y = new_ctopdown_record_78();
        mpz_set(y->project_1, x->project_1);
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_ctopdown_record_78(ctopdown_record_78_t x, ctopdown_record_78_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_ctopdown_stackADT_adt(x->project_3, y->project_3);
        return tmp;}

ctopdown_record_78_t update_ctopdown_record_78_project_1(ctopdown_record_78_t x, mpz_t v){
        ctopdown_record_78_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_78(x); x->count--;};
        mpz_set(y->project_1, v);
        return y;}

ctopdown_record_78_t update_ctopdown_record_78_project_2(ctopdown_record_78_t x, uint8_t v){
        ctopdown_record_78_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_78(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

ctopdown_record_78_t update_ctopdown_record_78_project_3(ctopdown_record_78_t x, ctopdown_stackADT_adt_t v){
        ctopdown_record_78_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ctopdown_stackADT_adt(x->project_3);};}
        else {y = copy_ctopdown_record_78(x); x->count--; y->project_3->count--;};
        y->project_3 = (ctopdown_stackADT_adt_t)v;
        return y;}



void release_ctopdown_funtype_79(ctopdown_funtype_79_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_79_t copy_ctopdown_funtype_79(ctopdown_funtype_79_t x){return x->ftbl->cptr(x);}


ctopdown_funtype_75_t f_ctopdown_closure_80(struct ctopdown_closure_80_s * closure, ctopdown_record_78_t bvar){
        mpz_t bvar_1;
        mpz_set(bvar_1, bvar->project_1);
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        ctopdown_stackADT_adt_t bvar_3;
        bvar_3 = (ctopdown_stackADT_adt_t)bvar->project_3;
        bvar->project_3->count++;
        release_ctopdown_record_78(bvar);
        ctopdown_funtype_75_t result = h_ctopdown_closure_80(bvar_1, bvar_2, bvar_3, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_mpz(bvar_1);
        release_ctopdown_stackADT_adt(bvar_3);
        return result;}

ctopdown_funtype_75_t m_ctopdown_closure_80(struct ctopdown_closure_80_s * closure, mpz_t bvar_1, uint8_t bvar_2, ctopdown_stackADT_adt_t bvar_3){
        return h_ctopdown_closure_80(bvar_1, bvar_2, bvar_3, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern ctopdown_funtype_75_t h_ctopdown_closure_80(mpz_t ivar_6, uint8_t ivar_7, ctopdown_stackADT_adt_t ivar_8, mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3){
        ctopdown_funtype_75_t result;
        ctopdown_closure_81_t cl1525;
        cl1525 = new_ctopdown_closure_81();
        cl1525->fvar_1 = (ctopdown_stackADT_adt_t)ivar_8;
        cl1525->fvar_1->count++;
        mpz_set(cl1525->fvar_2, ivar_6);
        cl1525->fvar_3 = (ctopdown_funtype_52_t)ivar_3;
        cl1525->fvar_3->count++;
        cl1525->fvar_4 = (ctopdown_lang_spec_t)ivar_2;
        cl1525->fvar_4->count++;
        mpz_set(cl1525->fvar_5, ivar_1);
        cl1525->fvar_6 = (uint8_t)ivar_7;
        result = (ctopdown_funtype_75_t)cl1525;

        return result;
}

ctopdown_closure_80_t new_ctopdown_closure_80(void){
        static struct ctopdown_funtype_79_ftbl_s ftbl = {.fptr = (ctopdown_funtype_75_t (*)(ctopdown_funtype_79_t, ctopdown_record_78_t))&f_ctopdown_closure_80, .mptr = (ctopdown_funtype_75_t (*)(ctopdown_funtype_79_t, mpz_t, uint8_t, ctopdown_stackADT_adt_t))&m_ctopdown_closure_80, .rptr =  (void (*)(ctopdown_funtype_79_t))&release_ctopdown_closure_80, .cptr = (ctopdown_funtype_79_t (*)(ctopdown_funtype_79_t))&copy_ctopdown_closure_80};
        ctopdown_closure_80_t tmp = (ctopdown_closure_80_t) safe_malloc(sizeof(struct ctopdown_closure_80_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        return tmp;}

void release_ctopdown_closure_80(ctopdown_funtype_79_t closure){
        ctopdown_closure_80_t x = (ctopdown_closure_80_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_lang_spec(x->fvar_2);
         release_ctopdown_funtype_52(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_80_t copy_ctopdown_closure_80(ctopdown_closure_80_t x){
        ctopdown_closure_80_t y = new_ctopdown_closure_80();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ctopdown_funtype_79_htbl_t new_htbl = (ctopdown_funtype_79_htbl_t) safe_malloc(sizeof(ctopdown_funtype_79_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_79_hashentry_t * new_data = (ctopdown_funtype_79_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_79_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_79_hashentry_t)));
        }
        return y;
}


bool_t f_ctopdown_closure_81(struct ctopdown_closure_81_s * closure, ctopdown_funtype_49_t bvar){
        bool_t result = h_ctopdown_closure_81(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6); 
        return result;}

bool_t m_ctopdown_closure_81(struct ctopdown_closure_81_s * closure, ctopdown_funtype_49_t bvar){
        return h_ctopdown_closure_81(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6);}

extern bool_t h_ctopdown_closure_81(ctopdown_funtype_49_t ivar_11, ctopdown_stackADT_adt_t ivar_8, mpz_t ivar_6, ctopdown_funtype_52_t ivar_3, ctopdown_lang_spec_t ivar_2, mpz_t ivar_1, uint8_t ivar_7){
        bool_t result;
        bool_t ivar_13;
        ctopdown_funtype_75_t ivar_20;
        ctopdown_funtype_75_t ivar_26;
        ivar_2->count++;
        ivar_3->count++;
        ivar_8->count++;
        ivar_26 = (ctopdown_funtype_75_t)ctopdown_good_tscaffoldp(ivar_1, (ctopdown_lang_spec_t)ivar_2, (ctopdown_funtype_52_t)ivar_3, (ctopdown_stackADT_adt_t)ivar_8);
        //copying to ctopdown_funtype_75 from ctopdown_funtype_75;
        ivar_20 = (ctopdown_funtype_75_t)ivar_26;
        ivar_20->count++;
        release_ctopdown_funtype_75(ivar_26);
        ivar_11->count++;
        ivar_13 = (bool_t)ivar_20->ftbl->fptr(ivar_20, ivar_11);
        ivar_20->ftbl->rptr(ivar_20);
        bool_t ivar_14;
        bool_t ivar_32;
        ctopdown_funtype_75_t ivar_39;
        ctopdown_funtype_75_t ivar_46;
        ivar_2->count++;
        ivar_3->count++;
        ivar_8->count++;
        ivar_46 = (ctopdown_funtype_75_t)ctopdown_tdstack_scaffoldp(ivar_1, (ctopdown_lang_spec_t)ivar_2, (ctopdown_funtype_52_t)ivar_3, ivar_6, (ctopdown_stackADT_adt_t)ivar_8);
        //copying to ctopdown_funtype_75 from ctopdown_funtype_75;
        ivar_39 = (ctopdown_funtype_75_t)ivar_46;
        ivar_39->count++;
        release_ctopdown_funtype_75(ivar_46);
        ivar_32 = (bool_t)ivar_39->ftbl->fptr(ivar_39, ivar_11);
        ivar_39->ftbl->rptr(ivar_39);
        bool_t ivar_33;
        bool_t ivar_53;
        ivar_8->count++;
        ivar_53 = (bool_t)r_ctopdown_pushp((ctopdown_stackADT_adt_t)ivar_8);
        bool_t ivar_54;
        uint32_t ivar_62;
        //copying to uint32 from mpz;
        ivar_62 = (uint32_t)mpz_get_ui(ivar_6);
        ivar_8->count++;
        ivar_54 = (bool_t)ctopdown_instack((uint32_t)ivar_62, (uint8_t)ivar_7, (ctopdown_stackADT_adt_t)ivar_8);
        ivar_33 = =>(ivar_53, ivar_54);
        ivar_14 = ivar_32 && ivar_33;
        result = ivar_13 && ivar_14;

        return result;
}

ctopdown_closure_81_t new_ctopdown_closure_81(void){
        static struct ctopdown_funtype_75_ftbl_s ftbl = {.fptr = (bool_t (*)(ctopdown_funtype_75_t, ctopdown_funtype_49_t))&f_ctopdown_closure_81, .mptr = (bool_t (*)(ctopdown_funtype_75_t, ctopdown_funtype_49_t))&m_ctopdown_closure_81, .rptr =  (void (*)(ctopdown_funtype_75_t))&release_ctopdown_closure_81, .cptr = (ctopdown_funtype_75_t (*)(ctopdown_funtype_75_t))&copy_ctopdown_closure_81};
        ctopdown_closure_81_t tmp = (ctopdown_closure_81_t) safe_malloc(sizeof(struct ctopdown_closure_81_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        mpz_init(tmp->fvar_5);
        return tmp;}

void release_ctopdown_closure_81(ctopdown_funtype_75_t closure){
        ctopdown_closure_81_t x = (ctopdown_closure_81_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_stackADT_adt(x->fvar_1);
         release_ctopdown_funtype_52(x->fvar_3);
         release_ctopdown_lang_spec(x->fvar_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_81_t copy_ctopdown_closure_81(ctopdown_closure_81_t x){
        ctopdown_closure_81_t y = new_ctopdown_closure_81();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        mpz_set(y->fvar_2, x->fvar_2);
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        mpz_set(y->fvar_5, x->fvar_5);
        y->fvar_6 = (uint8_t)x->fvar_6;
        if (x->htbl != NULL){
            ctopdown_funtype_75_htbl_t new_htbl = (ctopdown_funtype_75_htbl_t) safe_malloc(sizeof(ctopdown_funtype_75_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_75_hashentry_t * new_data = (ctopdown_funtype_75_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_75_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_75_hashentry_t)));
        }
        return y;
}


ctopdown_record_82_t new_ctopdown_record_82(void){
        ctopdown_record_82_t tmp = (ctopdown_record_82_t) safe_malloc(sizeof(struct ctopdown_record_82_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_record_82(ctopdown_record_82_t x){
        x->count--;
        if (x->count <= 0){
         release_ctopdown_stackADT_adt(x->stack);
         release_ctopdown_funtype_49(x->scaf);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_record_82_t copy_ctopdown_record_82(ctopdown_record_82_t x){
        ctopdown_record_82_t y = new_ctopdown_record_82();
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->count = 1;
        return y;}

bool_t equal_ctopdown_record_82(ctopdown_record_82_t x, ctopdown_record_82_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ctopdown_stackADT_adt(x->stack, y->stack);
        tmp = tmp && equal_ctopdown_funtype_49(x->scaf, y->scaf);
        return tmp;}

ctopdown_record_82_t update_ctopdown_record_82_stack(ctopdown_record_82_t x, ctopdown_stackADT_adt_t v){
        ctopdown_record_82_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_ctopdown_stackADT_adt(x->stack);};}
        else {y = copy_ctopdown_record_82(x); x->count--; y->stack->count--;};
        y->stack = (ctopdown_stackADT_adt_t)v;
        return y;}

ctopdown_record_82_t update_ctopdown_record_82_scaf(ctopdown_record_82_t x, ctopdown_funtype_49_t v){
        ctopdown_record_82_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_ctopdown_funtype_49(x->scaf);};}
        else {y = copy_ctopdown_record_82(x); x->count--; y->scaf->count--;};
        y->scaf = (ctopdown_funtype_49_t)v;
        return y;}




ctopdown_record_83_t new_ctopdown_record_83(void){
        ctopdown_record_83_t tmp = (ctopdown_record_83_t) safe_malloc(sizeof(struct ctopdown_record_83_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_record_83(ctopdown_record_83_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_record_83_t copy_ctopdown_record_83(ctopdown_record_83_t x){
        ctopdown_record_83_t y = new_ctopdown_record_83();
        y->project_1 = (uint32_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->count = 1;
        return y;}

bool_t equal_ctopdown_record_83(ctopdown_record_83_t x, ctopdown_record_83_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

ctopdown_record_83_t update_ctopdown_record_83_project_1(ctopdown_record_83_t x, uint32_t v){
        ctopdown_record_83_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_83(x); x->count--;};
        y->project_1 = (uint32_t)v;
        return y;}

ctopdown_record_83_t update_ctopdown_record_83_project_2(ctopdown_record_83_t x, uint8_t v){
        ctopdown_record_83_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ctopdown_record_83(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}



void release_ctopdown_funtype_84(ctopdown_funtype_84_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_84_t copy_ctopdown_funtype_84(ctopdown_funtype_84_t x){return x->ftbl->cptr(x);}

void release_ctopdown_funtype_85(ctopdown_funtype_85_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_85_t copy_ctopdown_funtype_85(ctopdown_funtype_85_t x){return x->ftbl->cptr(x);}


ctopdown_funtype_84_t f_ctopdown_closure_86(struct ctopdown_closure_86_s * closure, ctopdown_record_82_t bvar){
        ctopdown_funtype_84_t result = h_ctopdown_closure_86(bvar, closure->fvar_1); 
        return result;}

ctopdown_funtype_84_t m_ctopdown_closure_86(struct ctopdown_closure_86_s * closure, ctopdown_record_82_t bvar){
        return h_ctopdown_closure_86(bvar, closure->fvar_1);}

extern ctopdown_funtype_84_t h_ctopdown_closure_86(ctopdown_record_82_t ivar_22, mpz_t ivar_4){
        ctopdown_funtype_84_t result;
        ctopdown_closure_87_t cl1543;
        cl1543 = new_ctopdown_closure_87();
        cl1543->fvar_1 = (ctopdown_record_82_t)ivar_22;
        cl1543->fvar_1->count++;
        mpz_set(cl1543->fvar_2, ivar_4);
        release_ctopdown_record_82(ivar_22);
        result = (ctopdown_funtype_84_t)cl1543;

        return result;
}

ctopdown_closure_86_t new_ctopdown_closure_86(void){
        static struct ctopdown_funtype_85_ftbl_s ftbl = {.fptr = (ctopdown_funtype_84_t (*)(ctopdown_funtype_85_t, ctopdown_record_82_t))&f_ctopdown_closure_86, .mptr = (ctopdown_funtype_84_t (*)(ctopdown_funtype_85_t, ctopdown_record_82_t))&m_ctopdown_closure_86, .rptr =  (void (*)(ctopdown_funtype_85_t))&release_ctopdown_closure_86, .cptr = (ctopdown_funtype_85_t (*)(ctopdown_funtype_85_t))&copy_ctopdown_closure_86};
        ctopdown_closure_86_t tmp = (ctopdown_closure_86_t) safe_malloc(sizeof(struct ctopdown_closure_86_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        return tmp;}

void release_ctopdown_closure_86(ctopdown_funtype_85_t closure){
        ctopdown_closure_86_t x = (ctopdown_closure_86_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_86_t copy_ctopdown_closure_86(ctopdown_closure_86_t x){
        ctopdown_closure_86_t y = new_ctopdown_closure_86();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        if (x->htbl != NULL){
            ctopdown_funtype_85_htbl_t new_htbl = (ctopdown_funtype_85_htbl_t) safe_malloc(sizeof(ctopdown_funtype_85_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_85_hashentry_t * new_data = (ctopdown_funtype_85_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_85_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_85_hashentry_t)));
        }
        return y;
}


ctopdown_record_82_t f_ctopdown_closure_87(struct ctopdown_closure_87_s * closure, ctopdown_record_83_t bvar){
        uint32_t bvar_1;
        bvar_1 = (uint32_t)bvar->project_1;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        release_ctopdown_record_83(bvar);
        ctopdown_record_82_t result = h_ctopdown_closure_87(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2); 
        return result;}

ctopdown_record_82_t m_ctopdown_closure_87(struct ctopdown_closure_87_s * closure, uint32_t bvar_1, uint8_t bvar_2){
        return h_ctopdown_closure_87(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2);}

extern ctopdown_record_82_t h_ctopdown_closure_87(uint32_t ivar_34, uint8_t ivar_35, ctopdown_record_82_t ivar_22, mpz_t ivar_4){
        ctopdown_record_82_t result;
        bool_t ivar_39;
        uint32_t ivar_48;
        //copying to uint32 from mpz;
        ivar_48 = (uint32_t)mpz_get_ui(ivar_4);
        ctopdown_stackADT_adt_t ivar_50;
        ivar_50 = (ctopdown_stackADT_adt_t)ivar_22->stack;
        ivar_50->count++;
        ivar_39 = (bool_t)ctopdown_instack((uint32_t)ivar_48, (uint8_t)ivar_35, (ctopdown_stackADT_adt_t)ivar_50);
        if (ivar_39){ 
             ctopdown_ent_adt_t ivar_54;
             ivar_54 = (ctopdown_ent_adt_t)ctopdown_loop();
             ivar_54->count++;
             ctopdown_record_82_t ivar_70;
             ctopdown_funtype_49_t ivar_56;
             ivar_56 = (ctopdown_funtype_49_t)ivar_22->scaf;
             ivar_56->count++;
             ctopdown_record_82_t ivar_67;
             ctopdown_funtype_49_t ivar_69;
             ivar_69 = NULL;
             {ivar_67 = (ctopdown_record_82_t)copy_ctopdown_record_82(ivar_22); ivar_67 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_22, ivar_69);};
             if (ivar_69 != NULL) ivar_69->count--;
             ctopdown_funtype_49_t ivar_68;
             ctopdown_array_48_t ivar_57;
             ivar_57 = (ctopdown_array_48_t)ivar_56->ftbl->fptr(ivar_56, ivar_4);
             ctopdown_funtype_49_t ivar_64;
             ctopdown_array_48_t ivar_66;
             ivar_66 = NULL;
             ivar_64 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_56, ivar_4, ivar_66);
             if (ivar_66 != NULL) ivar_66->count--;
             ctopdown_array_48_t ivar_65;
             ctopdown_array_48_t ivar_60;
             ctopdown_ent_adt_t ivar_62;
             ivar_62 = NULL;
             ivar_60 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_57, ivar_35, ivar_62);
             if (ivar_62 != NULL) ivar_62->count--;
             ivar_65 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_60, ivar_35, ivar_54);
             if (ivar_54 != NULL) ivar_54->count--;
             ivar_68 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_64, ivar_4, ivar_65);
             if (ivar_65 != NULL) ivar_65->count--;
             ivar_70 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_67, ivar_68);
             if (ivar_68 != NULL) ivar_68->count--;
             //copying to ctopdown_record_82 from ctopdown_record_82;
             result = (ctopdown_record_82_t)ivar_70;
             result->count++;
             release_ctopdown_record_82(ivar_70);
} else {
        
             ctopdown_stackADT_adt_t ivar_74;
             uint32_t ivar_83;
             //copying to uint32 from mpz;
             ivar_83 = (uint32_t)mpz_get_ui(ivar_4);
             ctopdown_stackADT_adt_t ivar_85;
             ivar_85 = (ctopdown_stackADT_adt_t)ivar_22->stack;
             ivar_85->count++;
             ctopdown_stackADT_adt_t ivar_82;
             ivar_82 = (ctopdown_stackADT_adt_t)ctopdown_push((uint32_t)ivar_83, (uint8_t)ivar_35, (ctopdown_stackADT_adt_t)ivar_85);
             //copying to ctopdown_stackADT_adt from ctopdown_stackADT_adt;
             ivar_74 = (ctopdown_stackADT_adt_t)ivar_82;
             ivar_74->count++;
             release_ctopdown_stackADT_adt(ivar_82);
             ctopdown_record_82_t ivar_91;
             ctopdown_record_82_t ivar_88;
             ctopdown_stackADT_adt_t ivar_90;
             ivar_90 = NULL;
             {ivar_88 = (ctopdown_record_82_t)copy_ctopdown_record_82(ivar_22); ivar_88 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_22, ivar_90);};
             if (ivar_90 != NULL) ivar_90->count--;
             ivar_91 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_88, ivar_74);
             if (ivar_74 != NULL) ivar_74->count--;
             //copying to ctopdown_record_82 from ctopdown_record_82;
             result = (ctopdown_record_82_t)ivar_91;
             result->count++;
             release_ctopdown_record_82(ivar_91);
};

        return result;
}

ctopdown_closure_87_t new_ctopdown_closure_87(void){
        static struct ctopdown_funtype_84_ftbl_s ftbl = {.fptr = (ctopdown_record_82_t (*)(ctopdown_funtype_84_t, ctopdown_record_83_t))&f_ctopdown_closure_87, .mptr = (ctopdown_record_82_t (*)(ctopdown_funtype_84_t, uint32_t, uint8_t))&m_ctopdown_closure_87, .rptr =  (void (*)(ctopdown_funtype_84_t))&release_ctopdown_closure_87, .cptr = (ctopdown_funtype_84_t (*)(ctopdown_funtype_84_t))&copy_ctopdown_closure_87};
        ctopdown_closure_87_t tmp = (ctopdown_closure_87_t) safe_malloc(sizeof(struct ctopdown_closure_87_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_ctopdown_closure_87(ctopdown_funtype_84_t closure){
        ctopdown_closure_87_t x = (ctopdown_closure_87_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_record_82(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_87_t copy_ctopdown_closure_87(ctopdown_closure_87_t x){
        ctopdown_closure_87_t y = new_ctopdown_closure_87();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        mpz_set(y->fvar_2, x->fvar_2);
        if (x->htbl != NULL){
            ctopdown_funtype_84_htbl_t new_htbl = (ctopdown_funtype_84_htbl_t) safe_malloc(sizeof(ctopdown_funtype_84_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_84_hashentry_t * new_data = (ctopdown_funtype_84_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_84_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_84_hashentry_t)));
        }
        return y;
}

void release_ctopdown_funtype_88(ctopdown_funtype_88_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_88_t copy_ctopdown_funtype_88(ctopdown_funtype_88_t x){return x->ftbl->cptr(x);}


ctopdown_record_82_t f_ctopdown_closure_89(struct ctopdown_closure_89_s * closure, ctopdown_record_82_t bvar){
        ctopdown_record_82_t result = h_ctopdown_closure_89(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

ctopdown_record_82_t m_ctopdown_closure_89(struct ctopdown_closure_89_s * closure, ctopdown_record_82_t bvar){
        return h_ctopdown_closure_89(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern ctopdown_record_82_t h_ctopdown_closure_89(ctopdown_record_82_t ivar_18, uint8_t ivar_5, mpz_t ivar_4, ctopdown_funtype_52_t ivar_3, ctopdown_lang_spec_t ivar_2, mpz_t ivar_1){
        ctopdown_record_82_t result;
        /* scaf */ ctopdown_funtype_49_t ivar_25;
        ivar_25 = (ctopdown_funtype_49_t)ivar_18->scaf;
        ivar_25->count++;
        /* stack */ ctopdown_stackADT_adt_t ivar_32;
        ivar_32 = (ctopdown_stackADT_adt_t)ivar_18->stack;
        ivar_32->count++;
        bool_t ivar_37;
        ivar_32->count++;
        ivar_37 = (bool_t)r_ctopdown_emptyp((ctopdown_stackADT_adt_t)ivar_32);
        if (ivar_37){ 
             release_ctopdown_stackADT_adt(ivar_32);
             bool_t ivar_41;
             ctopdown_ent_adt_t ivar_53;
             ctopdown_array_48_t ivar_45;
             ctopdown_array_48_t ivar_47;
             ivar_47 = (ctopdown_array_48_t)ivar_25->ftbl->fptr(ivar_25, ivar_4);
             ivar_25->ftbl->rptr(ivar_25);
             //copying to ctopdown_array_48 from ctopdown_array_48;
             ivar_45 = (ctopdown_array_48_t)ivar_47;
             ivar_45->count++;
             release_ctopdown_array_48(ivar_47);
             ctopdown_ent_adt_t ivar_44;
             ivar_44 = (ctopdown_ent_adt_t)ivar_45->elems[ivar_5];
             ivar_44->count++;
             release_ctopdown_array_48(ivar_45);
             //copying to ctopdown_ent_adt from ctopdown_ent_adt;
             ivar_53 = (ctopdown_ent_adt_t)ivar_44;
             ivar_53->count++;
             release_ctopdown_ent_adt(ivar_44);
             ivar_41 = (bool_t)r_ctopdown_pendingp((ctopdown_ent_adt_t)ivar_53);
             if (ivar_41){  
           ctopdown_stackADT_adt_t ivar_57;
           uint32_t ivar_62;
           //copying to uint32 from mpz;
           ivar_62 = (uint32_t)mpz_get_ui(ivar_4);
           ctopdown_stackADT_adt_t ivar_64;
           ivar_64 = (ctopdown_stackADT_adt_t)ctopdown_empty();
           ivar_64->count++;
           ctopdown_stackADT_adt_t ivar_61;
           ivar_61 = (ctopdown_stackADT_adt_t)ctopdown_push((uint32_t)ivar_62, (uint8_t)ivar_5, (ctopdown_stackADT_adt_t)ivar_64);
           //copying to ctopdown_stackADT_adt from ctopdown_stackADT_adt;
           ivar_57 = (ctopdown_stackADT_adt_t)ivar_61;
           ivar_57->count++;
           release_ctopdown_stackADT_adt(ivar_61);
           ctopdown_record_82_t ivar_70;
           ctopdown_record_82_t ivar_67;
           ctopdown_stackADT_adt_t ivar_69;
           ivar_69 = NULL;
           ivar_67 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_18, ivar_69);
           if (ivar_69 != NULL) ivar_69->count--;
           ivar_70 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_67, ivar_57);
           if (ivar_57 != NULL) ivar_57->count--;
           //copying to ctopdown_record_82 from ctopdown_record_82;
           result = (ctopdown_record_82_t)ivar_70;
           result->count++;
           release_ctopdown_record_82(ivar_70);
} else {
             
           //copying to ctopdown_record_82 from ctopdown_record_82;
           result = (ctopdown_record_82_t)ivar_18;
           result->count++;
           release_ctopdown_record_82(ivar_18);
};
} else {
        
             /* pos */ uint32_t ivar_71;
             ivar_32->count++;
             ivar_71 = (uint32_t)ctopdown_stackADT_adt_pos((ctopdown_stackADT_adt_t)ivar_32);
             /* cur */ uint8_t ivar_75;
             ivar_32->count++;
             ivar_75 = (uint8_t)ctopdown_stackADT_adt_nt((ctopdown_stackADT_adt_t)ivar_32);
             /* rest */ ctopdown_stackADT_adt_t ivar_79;
             ctopdown_stackADT_adt_t ivar_81;
             ivar_81 = (ctopdown_stackADT_adt_t)ctopdown_stackADT_adt_rest((ctopdown_stackADT_adt_t)ivar_32);
             //copying to ctopdown_stackADT_adt from ctopdown_stackADT_adt;
             ivar_79 = (ctopdown_stackADT_adt_t)ivar_81;
             ivar_79->count++;
             release_ctopdown_stackADT_adt(ivar_81);
             ctopdown_peg_adt_t ivar_83;
             ctopdown_peg_adt_t ivar_85;
             ivar_85 = (ctopdown_peg_adt_t)ivar_2->elems[ivar_75];
             ivar_85->count++;
             //copying to ctopdown_peg_adt from ctopdown_peg_adt;
             ivar_83 = (ctopdown_peg_adt_t)ivar_85;
             ivar_83->count++;
             release_ctopdown_peg_adt(ivar_85);
             bool_t ivar_119;
             ivar_83->count++;
             ivar_119 = (bool_t)r_ctopdown_epsilonp((ctopdown_peg_adt_t)ivar_83);
             if (ivar_119){  
           release_ctopdown_peg_adt(ivar_83);
           release_ctopdown_funtype_49(ivar_25);
           ctopdown_ent_adt_t ivar_91;
           uint8_t ivar_97;
           ivar_97 = (uint8_t)0;
           mpz_ptr_t ivar_95;
           //copying to mpz from uint8;
           mpz_mk_set_ui(ivar_95, ivar_97);
           ctopdown_ent_adt_t ivar_94;
           ivar_94 = (ctopdown_ent_adt_t)ctopdown_good(ivar_95);
           //copying to ctopdown_ent_adt from ctopdown_ent_adt;
           ivar_91 = (ctopdown_ent_adt_t)ivar_94;
           ivar_91->count++;
           release_ctopdown_ent_adt(ivar_94);
           ctopdown_record_82_t ivar_113;
           ctopdown_funtype_49_t ivar_99;
           ivar_99 = (ctopdown_funtype_49_t)ivar_18->scaf;
           ivar_99->count++;
           ctopdown_record_82_t ivar_110;
           ctopdown_funtype_49_t ivar_112;
           ivar_112 = NULL;
           ivar_110 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_112);
           if (ivar_112 != NULL) ivar_112->count--;
           ctopdown_funtype_49_t ivar_111;
           mpz_ptr_t ivar_106;
           //copying to mpz from uint32;
           mpz_mk_set_ui(ivar_106, ivar_71);
           ctopdown_array_48_t ivar_100;
           ivar_100 = (ctopdown_array_48_t)ivar_99->ftbl->fptr(ivar_99, ivar_106);
           ctopdown_funtype_49_t ivar_107;
           ctopdown_array_48_t ivar_109;
           ivar_109 = NULL;
           ivar_107 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_99, ivar_106, ivar_109);
           if (ivar_109 != NULL) ivar_109->count--;
           ctopdown_array_48_t ivar_108;
           ctopdown_array_48_t ivar_103;
           ctopdown_ent_adt_t ivar_105;
           ivar_105 = NULL;
           ivar_103 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_100, ivar_75, ivar_105);
           if (ivar_105 != NULL) ivar_105->count--;
           ivar_108 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_103, ivar_75, ivar_91);
           if (ivar_91 != NULL) ivar_91->count--;
           ivar_111 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_107, ivar_106, ivar_108);
           if (ivar_108 != NULL) ivar_108->count--;
           ivar_113 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_110, ivar_111);
           if (ivar_111 != NULL) ivar_111->count--;
           ctopdown_record_82_t ivar_118;
           ctopdown_record_82_t ivar_115;
           ctopdown_stackADT_adt_t ivar_117;
           ivar_117 = NULL;
           ivar_115 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_113, ivar_117);
           if (ivar_117 != NULL) ivar_117->count--;
           ivar_118 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_115, ivar_79);
           if (ivar_79 != NULL) ivar_79->count--;
           //copying to ctopdown_record_82 from ctopdown_record_82;
           result = (ctopdown_record_82_t)ivar_118;
           result->count++;
           release_ctopdown_record_82(ivar_118);
} else {
             
           bool_t ivar_149;
           ivar_83->count++;
           ivar_149 = (bool_t)r_ctopdown_failurep((ctopdown_peg_adt_t)ivar_83);
           if (ivar_149){   
           release_ctopdown_peg_adt(ivar_83);
           release_ctopdown_funtype_49(ivar_25);
           ctopdown_ent_adt_t ivar_126;
           ivar_126 = (ctopdown_ent_adt_t)ctopdown_fail();
           ivar_126->count++;
           ctopdown_record_82_t ivar_143;
           ctopdown_funtype_49_t ivar_129;
           ivar_129 = (ctopdown_funtype_49_t)ivar_18->scaf;
           ivar_129->count++;
           ctopdown_record_82_t ivar_140;
           ctopdown_funtype_49_t ivar_142;
           ivar_142 = NULL;
           ivar_140 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_142);
           if (ivar_142 != NULL) ivar_142->count--;
           ctopdown_funtype_49_t ivar_141;
           mpz_ptr_t ivar_136;
           //copying to mpz from uint32;
           mpz_mk_set_ui(ivar_136, ivar_71);
           ctopdown_array_48_t ivar_130;
           ivar_130 = (ctopdown_array_48_t)ivar_129->ftbl->fptr(ivar_129, ivar_136);
           ctopdown_funtype_49_t ivar_137;
           ctopdown_array_48_t ivar_139;
           ivar_139 = NULL;
           ivar_137 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_129, ivar_136, ivar_139);
           if (ivar_139 != NULL) ivar_139->count--;
           ctopdown_array_48_t ivar_138;
           ctopdown_array_48_t ivar_133;
           ctopdown_ent_adt_t ivar_135;
           ivar_135 = NULL;
           ivar_133 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_130, ivar_75, ivar_135);
           if (ivar_135 != NULL) ivar_135->count--;
           ivar_138 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_133, ivar_75, ivar_126);
           if (ivar_126 != NULL) ivar_126->count--;
           ivar_141 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_137, ivar_136, ivar_138);
           if (ivar_138 != NULL) ivar_138->count--;
           ivar_143 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_140, ivar_141);
           if (ivar_141 != NULL) ivar_141->count--;
           ctopdown_record_82_t ivar_148;
           ctopdown_record_82_t ivar_145;
           ctopdown_stackADT_adt_t ivar_147;
           ivar_147 = NULL;
           ivar_145 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_143, ivar_147);
           if (ivar_147 != NULL) ivar_147->count--;
           ivar_148 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_145, ivar_79);
           if (ivar_79 != NULL) ivar_79->count--;
           //copying to ctopdown_record_82 from ctopdown_record_82;
           result = (ctopdown_record_82_t)ivar_148;
           result->count++;
           release_ctopdown_record_82(ivar_148);
} else {
           
           bool_t ivar_206;
           ivar_83->count++;
           ivar_206 = (bool_t)r_ctopdown_anyp((ctopdown_peg_adt_t)ivar_83);
           if (ivar_206){    
            release_ctopdown_funtype_49(ivar_25);
            ctopdown_array_15_t ivar_153;
            ctopdown_array_15_t ivar_155;
            ivar_155 = (ctopdown_array_15_t)ctopdown_peg_adt_p((ctopdown_peg_adt_t)ivar_83);
            //copying to ctopdown_array_15 from ctopdown_array_15;
            ivar_153 = (ctopdown_array_15_t)ivar_155;
            ivar_153->count++;
            release_ctopdown_array_15(ivar_155);
            /* v */ ctopdown_ent_adt_t ivar_157;
            bool_t ivar_158;
            bool_t ivar_159;
            int64_t tmp1724 = mpz_cmp_ui(ivar_1, ivar_71);
            ivar_159 = (tmp1724 == 0);
            bool_t ivar_160;
            bool_t ivar_164;
            uint8_t ivar_172;
            mpz_ptr_t ivar_169;
            //copying to mpz from uint32;
            mpz_mk_set_ui(ivar_169, ivar_71);
            ivar_172 = (uint8_t)ivar_3->ftbl->fptr(ivar_3, ivar_169);
            ivar_164 = (bool_t)ivar_153->elems[ivar_172];
            release_ctopdown_array_15(ivar_153);
            ivar_160 = !ivar_164;
            ivar_158 = ivar_159 || ivar_160;
            if (ivar_158){     
             ivar_157 = (ctopdown_ent_adt_t)ctopdown_fail();
             ivar_157->count++;
} else {
            
             uint8_t ivar_179;
             ivar_179 = (uint8_t)1;
             mpz_ptr_t ivar_177;
             //copying to mpz from uint8;
             mpz_mk_set_ui(ivar_177, ivar_179);
             ctopdown_ent_adt_t ivar_176;
             ivar_176 = (ctopdown_ent_adt_t)ctopdown_good(ivar_177);
             //copying to ctopdown_ent_adt from ctopdown_ent_adt;
             ivar_157 = (ctopdown_ent_adt_t)ivar_176;
             ivar_157->count++;
             release_ctopdown_ent_adt(ivar_176);
};
            ctopdown_record_82_t ivar_200;
            ctopdown_funtype_49_t ivar_186;
            ivar_186 = (ctopdown_funtype_49_t)ivar_18->scaf;
            ivar_186->count++;
            ctopdown_record_82_t ivar_197;
            ctopdown_funtype_49_t ivar_199;
            ivar_199 = NULL;
            ivar_197 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_199);
            if (ivar_199 != NULL) ivar_199->count--;
            ctopdown_funtype_49_t ivar_198;
            mpz_ptr_t ivar_193;
            //copying to mpz from uint32;
            mpz_mk_set_ui(ivar_193, ivar_71);
            ctopdown_array_48_t ivar_187;
            ivar_187 = (ctopdown_array_48_t)ivar_186->ftbl->fptr(ivar_186, ivar_193);
            ctopdown_funtype_49_t ivar_194;
            ctopdown_array_48_t ivar_196;
            ivar_196 = NULL;
            ivar_194 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_186, ivar_193, ivar_196);
            if (ivar_196 != NULL) ivar_196->count--;
            ctopdown_array_48_t ivar_195;
            ctopdown_array_48_t ivar_190;
            ctopdown_ent_adt_t ivar_192;
            ivar_192 = NULL;
            ivar_190 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_187, ivar_75, ivar_192);
            if (ivar_192 != NULL) ivar_192->count--;
            ivar_195 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_190, ivar_75, ivar_157);
            if (ivar_157 != NULL) ivar_157->count--;
            ivar_198 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_194, ivar_193, ivar_195);
            if (ivar_195 != NULL) ivar_195->count--;
            ivar_200 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_197, ivar_198);
            if (ivar_198 != NULL) ivar_198->count--;
            ctopdown_record_82_t ivar_205;
            ctopdown_record_82_t ivar_202;
            ctopdown_stackADT_adt_t ivar_204;
            ivar_204 = NULL;
            ivar_202 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_200, ivar_204);
            if (ivar_204 != NULL) ivar_204->count--;
            ivar_205 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_202, ivar_79);
            if (ivar_79 != NULL) ivar_79->count--;
            //copying to ctopdown_record_82 from ctopdown_record_82;
            result = (ctopdown_record_82_t)ivar_205;
            result->count++;
            release_ctopdown_record_82(ivar_205);
} else {
           
            bool_t ivar_260;
            ivar_83->count++;
            ivar_260 = (bool_t)r_ctopdown_terminalp((ctopdown_peg_adt_t)ivar_83);
            if (ivar_260){     
             release_ctopdown_funtype_49(ivar_25);
             uint8_t ivar_210;
             ivar_210 = (uint8_t)ctopdown_peg_adt_a((ctopdown_peg_adt_t)ivar_83);
             /* v */ ctopdown_ent_adt_t ivar_214;
             bool_t ivar_215;
             bool_t ivar_216;
             int64_t tmp1725 = mpz_cmp_ui(ivar_1, ivar_71);
             ivar_216 = (tmp1725 == 0);
             bool_t ivar_217;
             uint8_t ivar_222;
             mpz_ptr_t ivar_226;
             //copying to mpz from uint32;
             mpz_mk_set_ui(ivar_226, ivar_71);
             ivar_222 = (uint8_t)ivar_3->ftbl->fptr(ivar_3, ivar_226);
             ivar_217 = (ivar_210 != ivar_222);
             ivar_215 = ivar_216 || ivar_217;
             if (ivar_215){      
              ivar_214 = (ctopdown_ent_adt_t)ctopdown_fail();
              ivar_214->count++;
} else {
             
              uint8_t ivar_233;
              ivar_233 = (uint8_t)1;
              mpz_ptr_t ivar_231;
              //copying to mpz from uint8;
              mpz_mk_set_ui(ivar_231, ivar_233);
              ctopdown_ent_adt_t ivar_230;
              ivar_230 = (ctopdown_ent_adt_t)ctopdown_good(ivar_231);
              //copying to ctopdown_ent_adt from ctopdown_ent_adt;
              ivar_214 = (ctopdown_ent_adt_t)ivar_230;
              ivar_214->count++;
              release_ctopdown_ent_adt(ivar_230);
};
             ctopdown_record_82_t ivar_254;
             ctopdown_funtype_49_t ivar_240;
             ivar_240 = (ctopdown_funtype_49_t)ivar_18->scaf;
             ivar_240->count++;
             ctopdown_record_82_t ivar_251;
             ctopdown_funtype_49_t ivar_253;
             ivar_253 = NULL;
             ivar_251 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_253);
             if (ivar_253 != NULL) ivar_253->count--;
             ctopdown_funtype_49_t ivar_252;
             mpz_ptr_t ivar_247;
             //copying to mpz from uint32;
             mpz_mk_set_ui(ivar_247, ivar_71);
             ctopdown_array_48_t ivar_241;
             ivar_241 = (ctopdown_array_48_t)ivar_240->ftbl->fptr(ivar_240, ivar_247);
             ctopdown_funtype_49_t ivar_248;
             ctopdown_array_48_t ivar_250;
             ivar_250 = NULL;
             ivar_248 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_240, ivar_247, ivar_250);
             if (ivar_250 != NULL) ivar_250->count--;
             ctopdown_array_48_t ivar_249;
             ctopdown_array_48_t ivar_244;
             ctopdown_ent_adt_t ivar_246;
             ivar_246 = NULL;
             ivar_244 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_241, ivar_75, ivar_246);
             if (ivar_246 != NULL) ivar_246->count--;
             ivar_249 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_244, ivar_75, ivar_214);
             if (ivar_214 != NULL) ivar_214->count--;
             ivar_252 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_248, ivar_247, ivar_249);
             if (ivar_249 != NULL) ivar_249->count--;
             ivar_254 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_251, ivar_252);
             if (ivar_252 != NULL) ivar_252->count--;
             ctopdown_record_82_t ivar_259;
             ctopdown_record_82_t ivar_256;
             ctopdown_stackADT_adt_t ivar_258;
             ivar_258 = NULL;
             ivar_256 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_254, ivar_258);
             if (ivar_258 != NULL) ivar_258->count--;
             ivar_259 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_256, ivar_79);
             if (ivar_79 != NULL) ivar_79->count--;
             //copying to ctopdown_record_82 from ctopdown_record_82;
             result = (ctopdown_record_82_t)ivar_259;
             result->count++;
             release_ctopdown_record_82(ivar_259);
} else {
            
             bool_t ivar_757;
             ivar_83->count++;
             ivar_757 = (bool_t)r_ctopdown_concatp((ctopdown_peg_adt_t)ivar_83);
             if (ivar_757){      
              release_ctopdown_funtype_49(ivar_25);
              uint8_t ivar_264;
              ivar_83->count++;
              ivar_264 = (uint8_t)ctopdown_peg_adt_e1((ctopdown_peg_adt_t)ivar_83);
              uint8_t ivar_265;
              ivar_265 = (uint8_t)ctopdown_peg_adt_e2((ctopdown_peg_adt_t)ivar_83);
              ctopdown_ent_adt_t ivar_272;
              ctopdown_array_48_t ivar_275;
              ctopdown_funtype_49_t ivar_279;
              ivar_279 = (ctopdown_funtype_49_t)ivar_18->scaf;
              ivar_279->count++;
              mpz_ptr_t ivar_284;
              //copying to mpz from uint32;
              mpz_mk_set_ui(ivar_284, ivar_71);
              ctopdown_array_48_t ivar_277;
              ivar_277 = (ctopdown_array_48_t)ivar_279->ftbl->fptr(ivar_279, ivar_284);
              ivar_279->ftbl->rptr(ivar_279);
              //copying to ctopdown_array_48 from ctopdown_array_48;
              ivar_275 = (ctopdown_array_48_t)ivar_277;
              ivar_275->count++;
              release_ctopdown_array_48(ivar_277);
              ctopdown_ent_adt_t ivar_274;
              ivar_274 = (ctopdown_ent_adt_t)ivar_275->elems[ivar_264];
              ivar_274->count++;
              release_ctopdown_array_48(ivar_275);
              //copying to ctopdown_ent_adt from ctopdown_ent_adt;
              ivar_272 = (ctopdown_ent_adt_t)ivar_274;
              ivar_272->count++;
              release_ctopdown_ent_adt(ivar_274);
              bool_t ivar_312;
              ivar_272->count++;
              ivar_312 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_272);
              if (ivar_312){       
               ctopdown_ent_adt_t ivar_289;
               ivar_289 = (ctopdown_ent_adt_t)ctopdown_fail();
               ivar_289->count++;
               ctopdown_record_82_t ivar_306;
               ctopdown_funtype_49_t ivar_292;
               ivar_292 = (ctopdown_funtype_49_t)ivar_18->scaf;
               ivar_292->count++;
               ctopdown_record_82_t ivar_303;
               ctopdown_funtype_49_t ivar_305;
               ivar_305 = NULL;
               ivar_303 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_305);
               if (ivar_305 != NULL) ivar_305->count--;
               ctopdown_funtype_49_t ivar_304;
               mpz_ptr_t ivar_299;
               //copying to mpz from uint32;
               mpz_mk_set_ui(ivar_299, ivar_71);
               ctopdown_array_48_t ivar_293;
               ivar_293 = (ctopdown_array_48_t)ivar_292->ftbl->fptr(ivar_292, ivar_299);
               ctopdown_funtype_49_t ivar_300;
               ctopdown_array_48_t ivar_302;
               ivar_302 = NULL;
               ivar_300 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_292, ivar_299, ivar_302);
               if (ivar_302 != NULL) ivar_302->count--;
               ctopdown_array_48_t ivar_301;
               ctopdown_array_48_t ivar_296;
               ctopdown_ent_adt_t ivar_298;
               ivar_298 = NULL;
               ivar_296 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_293, ivar_75, ivar_298);
               if (ivar_298 != NULL) ivar_298->count--;
               ivar_301 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_296, ivar_75, ivar_289);
               if (ivar_289 != NULL) ivar_289->count--;
               ivar_304 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_300, ivar_299, ivar_301);
               if (ivar_301 != NULL) ivar_301->count--;
               ivar_306 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_303, ivar_304);
               if (ivar_304 != NULL) ivar_304->count--;
               ctopdown_record_82_t ivar_311;
               ctopdown_record_82_t ivar_308;
               ctopdown_stackADT_adt_t ivar_310;
               ivar_310 = NULL;
               ivar_308 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_306, ivar_310);
               if (ivar_310 != NULL) ivar_310->count--;
               ivar_311 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_308, ivar_79);
               if (ivar_79 != NULL) ivar_79->count--;
               //copying to ctopdown_record_82 from ctopdown_record_82;
               result = (ctopdown_record_82_t)ivar_311;
               result->count++;
               release_ctopdown_record_82(ivar_311);
} else {
              
               bool_t ivar_342;
               ivar_272->count++;
               ivar_342 = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_272);
               if (ivar_342){        
                ctopdown_ent_adt_t ivar_319;
                ivar_319 = (ctopdown_ent_adt_t)ctopdown_loop();
                ivar_319->count++;
                ctopdown_record_82_t ivar_336;
                ctopdown_funtype_49_t ivar_322;
                ivar_322 = (ctopdown_funtype_49_t)ivar_18->scaf;
                ivar_322->count++;
                ctopdown_record_82_t ivar_333;
                ctopdown_funtype_49_t ivar_335;
                ivar_335 = NULL;
                ivar_333 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_335);
                if (ivar_335 != NULL) ivar_335->count--;
                ctopdown_funtype_49_t ivar_334;
                mpz_ptr_t ivar_329;
                //copying to mpz from uint32;
                mpz_mk_set_ui(ivar_329, ivar_71);
                ctopdown_array_48_t ivar_323;
                ivar_323 = (ctopdown_array_48_t)ivar_322->ftbl->fptr(ivar_322, ivar_329);
                ctopdown_funtype_49_t ivar_330;
                ctopdown_array_48_t ivar_332;
                ivar_332 = NULL;
                ivar_330 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_322, ivar_329, ivar_332);
                if (ivar_332 != NULL) ivar_332->count--;
                ctopdown_array_48_t ivar_331;
                ctopdown_array_48_t ivar_326;
                ctopdown_ent_adt_t ivar_328;
                ivar_328 = NULL;
                ivar_326 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_323, ivar_75, ivar_328);
                if (ivar_328 != NULL) ivar_328->count--;
                ivar_331 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_326, ivar_75, ivar_319);
                if (ivar_319 != NULL) ivar_319->count--;
                ivar_334 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_330, ivar_329, ivar_331);
                if (ivar_331 != NULL) ivar_331->count--;
                ivar_336 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_333, ivar_334);
                if (ivar_334 != NULL) ivar_334->count--;
                ctopdown_record_82_t ivar_341;
                ctopdown_record_82_t ivar_338;
                ctopdown_stackADT_adt_t ivar_340;
                ivar_340 = NULL;
                ivar_338 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_336, ivar_340);
                if (ivar_340 != NULL) ivar_340->count--;
                ivar_341 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_338, ivar_79);
                if (ivar_79 != NULL) ivar_79->count--;
                //copying to ctopdown_record_82 from ctopdown_record_82;
                result = (ctopdown_record_82_t)ivar_341;
                result->count++;
                release_ctopdown_record_82(ivar_341);
} else {
               
                bool_t ivar_702;
                ivar_272->count++;
                ivar_702 = (bool_t)r_ctopdown_goodp((ctopdown_ent_adt_t)ivar_272);
                if (ivar_702){         
                 mpz_ptr_t ivar_346;
                 ivar_346 = (mpz_ptr_t)ctopdown_ent_adt_span((ctopdown_ent_adt_t)ivar_272);
                 ctopdown_ent_adt_t ivar_350;
                 ctopdown_array_48_t ivar_353;
                 ctopdown_funtype_49_t ivar_360;
                 ivar_360 = (ctopdown_funtype_49_t)ivar_18->scaf;
                 ivar_360->count++;
                 mpz_ptr_t ivar_365;
                 mpz_mk_add_ui(ivar_365, ivar_346, (uint64_t)ivar_71);
                 ctopdown_array_48_t ivar_358;
                 ivar_358 = (ctopdown_array_48_t)ivar_360->ftbl->fptr(ivar_360, ivar_365);
                 ivar_360->ftbl->rptr(ivar_360);
                 //copying to ctopdown_array_48 from ctopdown_array_48;
                 ivar_353 = (ctopdown_array_48_t)ivar_358;
                 ivar_353->count++;
                 release_ctopdown_array_48(ivar_358);
                 ctopdown_ent_adt_t ivar_352;
                 ivar_352 = (ctopdown_ent_adt_t)ivar_353->elems[ivar_265];
                 ivar_352->count++;
                 release_ctopdown_array_48(ivar_353);
                 //copying to ctopdown_ent_adt from ctopdown_ent_adt;
                 ivar_350 = (ctopdown_ent_adt_t)ivar_352;
                 ivar_350->count++;
                 release_ctopdown_ent_adt(ivar_352);
                 bool_t ivar_393;
                 ivar_350->count++;
                 ivar_393 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_350);
                 if (ivar_393){          
                  release_ctopdown_ent_adt(ivar_350);
                  release_mpz(ivar_346);
                  ctopdown_ent_adt_t ivar_370;
                  ivar_370 = (ctopdown_ent_adt_t)ctopdown_fail();
                  ivar_370->count++;
                  ctopdown_record_82_t ivar_387;
                  ctopdown_funtype_49_t ivar_373;
                  ivar_373 = (ctopdown_funtype_49_t)ivar_18->scaf;
                  ivar_373->count++;
                  ctopdown_record_82_t ivar_384;
                  ctopdown_funtype_49_t ivar_386;
                  ivar_386 = NULL;
                  ivar_384 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_386);
                  if (ivar_386 != NULL) ivar_386->count--;
                  ctopdown_funtype_49_t ivar_385;
                  mpz_ptr_t ivar_380;
                  //copying to mpz from uint32;
                  mpz_mk_set_ui(ivar_380, ivar_71);
                  ctopdown_array_48_t ivar_374;
                  ivar_374 = (ctopdown_array_48_t)ivar_373->ftbl->fptr(ivar_373, ivar_380);
                  ctopdown_funtype_49_t ivar_381;
                  ctopdown_array_48_t ivar_383;
                  ivar_383 = NULL;
                  ivar_381 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_373, ivar_380, ivar_383);
                  if (ivar_383 != NULL) ivar_383->count--;
                  ctopdown_array_48_t ivar_382;
                  ctopdown_array_48_t ivar_377;
                  ctopdown_ent_adt_t ivar_379;
                  ivar_379 = NULL;
                  ivar_377 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_374, ivar_75, ivar_379);
                  if (ivar_379 != NULL) ivar_379->count--;
                  ivar_382 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_377, ivar_75, ivar_370);
                  if (ivar_370 != NULL) ivar_370->count--;
                  ivar_385 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_381, ivar_380, ivar_382);
                  if (ivar_382 != NULL) ivar_382->count--;
                  ivar_387 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_384, ivar_385);
                  if (ivar_385 != NULL) ivar_385->count--;
                  ctopdown_record_82_t ivar_392;
                  ctopdown_record_82_t ivar_389;
                  ctopdown_stackADT_adt_t ivar_391;
                  ivar_391 = NULL;
                  ivar_389 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_387, ivar_391);
                  if (ivar_391 != NULL) ivar_391->count--;
                  ivar_392 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_389, ivar_79);
                  if (ivar_79 != NULL) ivar_79->count--;
                  //copying to ctopdown_record_82 from ctopdown_record_82;
                  result = (ctopdown_record_82_t)ivar_392;
                  result->count++;
                  release_ctopdown_record_82(ivar_392);
} else {
                 
                  bool_t ivar_423;
                  ivar_350->count++;
                  ivar_423 = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_350);
                  if (ivar_423){           
                   release_ctopdown_ent_adt(ivar_350);
                   release_mpz(ivar_346);
                   ctopdown_ent_adt_t ivar_400;
                   ivar_400 = (ctopdown_ent_adt_t)ctopdown_loop();
                   ivar_400->count++;
                   ctopdown_record_82_t ivar_417;
                   ctopdown_funtype_49_t ivar_403;
                   ivar_403 = (ctopdown_funtype_49_t)ivar_18->scaf;
                   ivar_403->count++;
                   ctopdown_record_82_t ivar_414;
                   ctopdown_funtype_49_t ivar_416;
                   ivar_416 = NULL;
                   ivar_414 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_416);
                   if (ivar_416 != NULL) ivar_416->count--;
                   ctopdown_funtype_49_t ivar_415;
                   mpz_ptr_t ivar_410;
                   //copying to mpz from uint32;
                   mpz_mk_set_ui(ivar_410, ivar_71);
                   ctopdown_array_48_t ivar_404;
                   ivar_404 = (ctopdown_array_48_t)ivar_403->ftbl->fptr(ivar_403, ivar_410);
                   ctopdown_funtype_49_t ivar_411;
                   ctopdown_array_48_t ivar_413;
                   ivar_413 = NULL;
                   ivar_411 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_403, ivar_410, ivar_413);
                   if (ivar_413 != NULL) ivar_413->count--;
                   ctopdown_array_48_t ivar_412;
                   ctopdown_array_48_t ivar_407;
                   ctopdown_ent_adt_t ivar_409;
                   ivar_409 = NULL;
                   ivar_407 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_404, ivar_75, ivar_409);
                   if (ivar_409 != NULL) ivar_409->count--;
                   ivar_412 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_407, ivar_75, ivar_400);
                   if (ivar_400 != NULL) ivar_400->count--;
                   ivar_415 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_411, ivar_410, ivar_412);
                   if (ivar_412 != NULL) ivar_412->count--;
                   ivar_417 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_414, ivar_415);
                   if (ivar_415 != NULL) ivar_415->count--;
                   ctopdown_record_82_t ivar_422;
                   ctopdown_record_82_t ivar_419;
                   ctopdown_stackADT_adt_t ivar_421;
                   ivar_421 = NULL;
                   ivar_419 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_417, ivar_421);
                   if (ivar_421 != NULL) ivar_421->count--;
                   ivar_422 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_419, ivar_79);
                   if (ivar_79 != NULL) ivar_79->count--;
                   //copying to ctopdown_record_82 from ctopdown_record_82;
                   result = (ctopdown_record_82_t)ivar_422;
                   result->count++;
                   release_ctopdown_record_82(ivar_422);
} else {
                  
                   bool_t ivar_463;
                   ivar_350->count++;
                   ivar_463 = (bool_t)r_ctopdown_goodp((ctopdown_ent_adt_t)ivar_350);
                   if (ivar_463){            
                    mpz_ptr_t ivar_427;
                    ivar_427 = (mpz_ptr_t)ctopdown_ent_adt_span((ctopdown_ent_adt_t)ivar_350);
                    ctopdown_ent_adt_t ivar_434;
                    mpz_ptr_t ivar_441;
                    mpz_mk_add(ivar_441, ivar_427, ivar_346);
                    ctopdown_ent_adt_t ivar_440;
                    ivar_440 = (ctopdown_ent_adt_t)ctopdown_good(ivar_441);
                    //copying to ctopdown_ent_adt from ctopdown_ent_adt;
                    ivar_434 = (ctopdown_ent_adt_t)ivar_440;
                    ivar_434->count++;
                    release_ctopdown_ent_adt(ivar_440);
                    ctopdown_record_82_t ivar_457;
                    ctopdown_funtype_49_t ivar_443;
                    ivar_443 = (ctopdown_funtype_49_t)ivar_18->scaf;
                    ivar_443->count++;
                    ctopdown_record_82_t ivar_454;
                    ctopdown_funtype_49_t ivar_456;
                    ivar_456 = NULL;
                    ivar_454 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_456);
                    if (ivar_456 != NULL) ivar_456->count--;
                    ctopdown_funtype_49_t ivar_455;
                    mpz_ptr_t ivar_450;
                    //copying to mpz from uint32;
                    mpz_mk_set_ui(ivar_450, ivar_71);
                    ctopdown_array_48_t ivar_444;
                    ivar_444 = (ctopdown_array_48_t)ivar_443->ftbl->fptr(ivar_443, ivar_450);
                    ctopdown_funtype_49_t ivar_451;
                    ctopdown_array_48_t ivar_453;
                    ivar_453 = NULL;
                    ivar_451 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_443, ivar_450, ivar_453);
                    if (ivar_453 != NULL) ivar_453->count--;
                    ctopdown_array_48_t ivar_452;
                    ctopdown_array_48_t ivar_447;
                    ctopdown_ent_adt_t ivar_449;
                    ivar_449 = NULL;
                    ivar_447 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_444, ivar_75, ivar_449);
                    if (ivar_449 != NULL) ivar_449->count--;
                    ivar_452 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_447, ivar_75, ivar_434);
                    if (ivar_434 != NULL) ivar_434->count--;
                    ivar_455 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_451, ivar_450, ivar_452);
                    if (ivar_452 != NULL) ivar_452->count--;
                    ivar_457 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_454, ivar_455);
                    if (ivar_455 != NULL) ivar_455->count--;
                    ctopdown_record_82_t ivar_462;
                    ctopdown_record_82_t ivar_459;
                    ctopdown_stackADT_adt_t ivar_461;
                    ivar_461 = NULL;
                    ivar_459 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_457, ivar_461);
                    if (ivar_461 != NULL) ivar_461->count--;
                    ivar_462 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_459, ivar_79);
                    if (ivar_79 != NULL) ivar_79->count--;
                    //copying to ctopdown_record_82 from ctopdown_record_82;
                    result = (ctopdown_record_82_t)ivar_462;
                    result->count++;
                    release_ctopdown_record_82(ivar_462);
} else {
                   
                    ctopdown_funtype_84_t ivar_660;
                    ctopdown_funtype_85_t ivar_678;
                    ctopdown_funtype_85_t ivar_692;
                    ivar_2->count++;
                    ivar_3->count++;
                    ivar_692 = (ctopdown_funtype_85_t)ctopdown_putstack(ivar_1, (ctopdown_lang_spec_t)ivar_2, (ctopdown_funtype_52_t)ivar_3, ivar_4, (uint8_t)ivar_5);
                    //copying to ctopdown_funtype_85 from ctopdown_funtype_85;
                    ivar_678 = (ctopdown_funtype_85_t)ivar_692;
                    ivar_678->count++;
                    release_ctopdown_funtype_85(ivar_692);
                    ctopdown_funtype_84_t ivar_669;
                    ivar_669 = (ctopdown_funtype_84_t)ivar_678->ftbl->fptr(ivar_678, ivar_18);
                    ivar_678->ftbl->rptr(ivar_678);
                    //copying to ctopdown_funtype_84 from ctopdown_funtype_84;
                    ivar_660 = (ctopdown_funtype_84_t)ivar_669;
                    ivar_660->count++;
                    release_ctopdown_funtype_84(ivar_669);
                    mpz_ptr_t ivar_701;
                    mpz_mk_add_ui(ivar_701, ivar_346, (uint64_t)ivar_71);
                    uint32_t ivar_699;
                    //copying to uint32 from mpz;
                    ivar_699 = (uint32_t)mpz_get_ui(ivar_701);
                    mpz_clear(ivar_701);
                    ctopdown_record_82_t ivar_655;
                    ivar_655 = (ctopdown_record_82_t)ivar_660->ftbl->mptr(ivar_660, ivar_699, ivar_265);
                    ivar_660->ftbl->rptr(ivar_660);
                    //copying to ctopdown_record_82 from ctopdown_record_82;
                    result = (ctopdown_record_82_t)ivar_655;
                    result->count++;
                    release_ctopdown_record_82(ivar_655);
};
};
};
} else {
                
                 release_ctopdown_ent_adt(ivar_272);
                 ctopdown_funtype_84_t ivar_716;
                 ctopdown_funtype_85_t ivar_734;
                 ctopdown_funtype_85_t ivar_748;
                 ivar_2->count++;
                 ivar_3->count++;
                 ivar_748 = (ctopdown_funtype_85_t)ctopdown_putstack(ivar_1, (ctopdown_lang_spec_t)ivar_2, (ctopdown_funtype_52_t)ivar_3, ivar_4, (uint8_t)ivar_5);
                 //copying to ctopdown_funtype_85 from ctopdown_funtype_85;
                 ivar_734 = (ctopdown_funtype_85_t)ivar_748;
                 ivar_734->count++;
                 release_ctopdown_funtype_85(ivar_748);
                 ctopdown_funtype_84_t ivar_725;
                 ivar_725 = (ctopdown_funtype_84_t)ivar_734->ftbl->fptr(ivar_734, ivar_18);
                 ivar_734->ftbl->rptr(ivar_734);
                 //copying to ctopdown_funtype_84 from ctopdown_funtype_84;
                 ivar_716 = (ctopdown_funtype_84_t)ivar_725;
                 ivar_716->count++;
                 release_ctopdown_funtype_84(ivar_725);
                 ctopdown_record_82_t ivar_711;
                 ivar_711 = (ctopdown_record_82_t)ivar_716->ftbl->mptr(ivar_716, ivar_71, ivar_264);
                 ivar_716->ftbl->rptr(ivar_716);
                 //copying to ctopdown_record_82 from ctopdown_record_82;
                 result = (ctopdown_record_82_t)ivar_711;
                 result->count++;
                 release_ctopdown_record_82(ivar_711);
};
};
};
} else {
             
              bool_t ivar_1059;
              ivar_83->count++;
              ivar_1059 = (bool_t)r_ctopdown_orp((ctopdown_peg_adt_t)ivar_83);
              if (ivar_1059){       
               uint8_t ivar_761;
               ivar_83->count++;
               ivar_761 = (uint8_t)ctopdown_peg_adt_e1((ctopdown_peg_adt_t)ivar_83);
               uint8_t ivar_762;
               ivar_762 = (uint8_t)ctopdown_peg_adt_e2((ctopdown_peg_adt_t)ivar_83);
               ctopdown_ent_adt_t ivar_769;
               ctopdown_array_48_t ivar_772;
               mpz_ptr_t ivar_777;
               //copying to mpz from uint32;
               mpz_mk_set_ui(ivar_777, ivar_71);
               ctopdown_array_48_t ivar_774;
               ivar_774 = (ctopdown_array_48_t)ivar_25->ftbl->fptr(ivar_25, ivar_777);
               //copying to ctopdown_array_48 from ctopdown_array_48;
               ivar_772 = (ctopdown_array_48_t)ivar_774;
               ivar_772->count++;
               release_ctopdown_array_48(ivar_774);
               ctopdown_ent_adt_t ivar_771;
               ivar_771 = (ctopdown_ent_adt_t)ivar_772->elems[ivar_761];
               ivar_771->count++;
               release_ctopdown_array_48(ivar_772);
               //copying to ctopdown_ent_adt from ctopdown_ent_adt;
               ivar_769 = (ctopdown_ent_adt_t)ivar_771;
               ivar_769->count++;
               release_ctopdown_ent_adt(ivar_771);
               bool_t ivar_937;
               ivar_769->count++;
               ivar_937 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_769);
               if (ivar_937){        
                release_ctopdown_ent_adt(ivar_769);
                ctopdown_ent_adt_t ivar_779;
                ctopdown_array_48_t ivar_782;
                mpz_ptr_t ivar_787;
                //copying to mpz from uint32;
                mpz_mk_set_ui(ivar_787, ivar_71);
                ctopdown_array_48_t ivar_784;
                ivar_784 = (ctopdown_array_48_t)ivar_25->ftbl->fptr(ivar_25, ivar_787);
                ivar_25->ftbl->rptr(ivar_25);
                //copying to ctopdown_array_48 from ctopdown_array_48;
                ivar_782 = (ctopdown_array_48_t)ivar_784;
                ivar_782->count++;
                release_ctopdown_array_48(ivar_784);
                ctopdown_ent_adt_t ivar_781;
                ivar_781 = (ctopdown_ent_adt_t)ivar_782->elems[ivar_762];
                ivar_781->count++;
                release_ctopdown_array_48(ivar_782);
                //copying to ctopdown_ent_adt from ctopdown_ent_adt;
                ivar_779 = (ctopdown_ent_adt_t)ivar_781;
                ivar_779->count++;
                release_ctopdown_ent_adt(ivar_781);
                bool_t ivar_815;
                ivar_779->count++;
                ivar_815 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_779);
                if (ivar_815){         
                 release_ctopdown_ent_adt(ivar_779);
                 ctopdown_ent_adt_t ivar_792;
                 ivar_792 = (ctopdown_ent_adt_t)ctopdown_fail();
                 ivar_792->count++;
                 ctopdown_record_82_t ivar_809;
                 ctopdown_funtype_49_t ivar_795;
                 ivar_795 = (ctopdown_funtype_49_t)ivar_18->scaf;
                 ivar_795->count++;
                 ctopdown_record_82_t ivar_806;
                 ctopdown_funtype_49_t ivar_808;
                 ivar_808 = NULL;
                 ivar_806 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_808);
                 if (ivar_808 != NULL) ivar_808->count--;
                 ctopdown_funtype_49_t ivar_807;
                 mpz_ptr_t ivar_802;
                 //copying to mpz from uint32;
                 mpz_mk_set_ui(ivar_802, ivar_71);
                 ctopdown_array_48_t ivar_796;
                 ivar_796 = (ctopdown_array_48_t)ivar_795->ftbl->fptr(ivar_795, ivar_802);
                 ctopdown_funtype_49_t ivar_803;
                 ctopdown_array_48_t ivar_805;
                 ivar_805 = NULL;
                 ivar_803 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_795, ivar_802, ivar_805);
                 if (ivar_805 != NULL) ivar_805->count--;
                 ctopdown_array_48_t ivar_804;
                 ctopdown_array_48_t ivar_799;
                 ctopdown_ent_adt_t ivar_801;
                 ivar_801 = NULL;
                 ivar_799 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_796, ivar_75, ivar_801);
                 if (ivar_801 != NULL) ivar_801->count--;
                 ivar_804 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_799, ivar_75, ivar_792);
                 if (ivar_792 != NULL) ivar_792->count--;
                 ivar_807 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_803, ivar_802, ivar_804);
                 if (ivar_804 != NULL) ivar_804->count--;
                 ivar_809 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_806, ivar_807);
                 if (ivar_807 != NULL) ivar_807->count--;
                 ctopdown_record_82_t ivar_814;
                 ctopdown_record_82_t ivar_811;
                 ctopdown_stackADT_adt_t ivar_813;
                 ivar_813 = NULL;
                 ivar_811 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_809, ivar_813);
                 if (ivar_813 != NULL) ivar_813->count--;
                 ivar_814 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_811, ivar_79);
                 if (ivar_79 != NULL) ivar_79->count--;
                 //copying to ctopdown_record_82 from ctopdown_record_82;
                 result = (ctopdown_record_82_t)ivar_814;
                 result->count++;
                 release_ctopdown_record_82(ivar_814);
} else {
                
                 bool_t ivar_845;
                 ivar_779->count++;
                 ivar_845 = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_779);
                 if (ivar_845){          
                  release_ctopdown_ent_adt(ivar_779);
                  ctopdown_ent_adt_t ivar_822;
                  ivar_822 = (ctopdown_ent_adt_t)ctopdown_loop();
                  ivar_822->count++;
                  ctopdown_record_82_t ivar_839;
                  ctopdown_funtype_49_t ivar_825;
                  ivar_825 = (ctopdown_funtype_49_t)ivar_18->scaf;
                  ivar_825->count++;
                  ctopdown_record_82_t ivar_836;
                  ctopdown_funtype_49_t ivar_838;
                  ivar_838 = NULL;
                  ivar_836 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_838);
                  if (ivar_838 != NULL) ivar_838->count--;
                  ctopdown_funtype_49_t ivar_837;
                  mpz_ptr_t ivar_832;
                  //copying to mpz from uint32;
                  mpz_mk_set_ui(ivar_832, ivar_71);
                  ctopdown_array_48_t ivar_826;
                  ivar_826 = (ctopdown_array_48_t)ivar_825->ftbl->fptr(ivar_825, ivar_832);
                  ctopdown_funtype_49_t ivar_833;
                  ctopdown_array_48_t ivar_835;
                  ivar_835 = NULL;
                  ivar_833 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_825, ivar_832, ivar_835);
                  if (ivar_835 != NULL) ivar_835->count--;
                  ctopdown_array_48_t ivar_834;
                  ctopdown_array_48_t ivar_829;
                  ctopdown_ent_adt_t ivar_831;
                  ivar_831 = NULL;
                  ivar_829 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_826, ivar_75, ivar_831);
                  if (ivar_831 != NULL) ivar_831->count--;
                  ivar_834 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_829, ivar_75, ivar_822);
                  if (ivar_822 != NULL) ivar_822->count--;
                  ivar_837 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_833, ivar_832, ivar_834);
                  if (ivar_834 != NULL) ivar_834->count--;
                  ivar_839 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_836, ivar_837);
                  if (ivar_837 != NULL) ivar_837->count--;
                  ctopdown_record_82_t ivar_844;
                  ctopdown_record_82_t ivar_841;
                  ctopdown_stackADT_adt_t ivar_843;
                  ivar_843 = NULL;
                  ivar_841 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_839, ivar_843);
                  if (ivar_843 != NULL) ivar_843->count--;
                  ivar_844 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_841, ivar_79);
                  if (ivar_79 != NULL) ivar_79->count--;
                  //copying to ctopdown_record_82 from ctopdown_record_82;
                  result = (ctopdown_record_82_t)ivar_844;
                  result->count++;
                  release_ctopdown_record_82(ivar_844);
} else {
                 
                  bool_t ivar_882;
                  ivar_779->count++;
                  ivar_882 = (bool_t)r_ctopdown_goodp((ctopdown_ent_adt_t)ivar_779);
                  if (ivar_882){           
                   mpz_ptr_t ivar_849;
                   ivar_849 = (mpz_ptr_t)ctopdown_ent_adt_span((ctopdown_ent_adt_t)ivar_779);
                   ctopdown_ent_adt_t ivar_856;
                   ctopdown_ent_adt_t ivar_859;
                   ivar_859 = (ctopdown_ent_adt_t)ctopdown_good(ivar_849);
                   //copying to ctopdown_ent_adt from ctopdown_ent_adt;
                   ivar_856 = (ctopdown_ent_adt_t)ivar_859;
                   ivar_856->count++;
                   release_ctopdown_ent_adt(ivar_859);
                   ctopdown_record_82_t ivar_876;
                   ctopdown_funtype_49_t ivar_862;
                   ivar_862 = (ctopdown_funtype_49_t)ivar_18->scaf;
                   ivar_862->count++;
                   ctopdown_record_82_t ivar_873;
                   ctopdown_funtype_49_t ivar_875;
                   ivar_875 = NULL;
                   ivar_873 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_875);
                   if (ivar_875 != NULL) ivar_875->count--;
                   ctopdown_funtype_49_t ivar_874;
                   mpz_ptr_t ivar_869;
                   //copying to mpz from uint32;
                   mpz_mk_set_ui(ivar_869, ivar_71);
                   ctopdown_array_48_t ivar_863;
                   ivar_863 = (ctopdown_array_48_t)ivar_862->ftbl->fptr(ivar_862, ivar_869);
                   ctopdown_funtype_49_t ivar_870;
                   ctopdown_array_48_t ivar_872;
                   ivar_872 = NULL;
                   ivar_870 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_862, ivar_869, ivar_872);
                   if (ivar_872 != NULL) ivar_872->count--;
                   ctopdown_array_48_t ivar_871;
                   ctopdown_array_48_t ivar_866;
                   ctopdown_ent_adt_t ivar_868;
                   ivar_868 = NULL;
                   ivar_866 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_863, ivar_75, ivar_868);
                   if (ivar_868 != NULL) ivar_868->count--;
                   ivar_871 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_866, ivar_75, ivar_856);
                   if (ivar_856 != NULL) ivar_856->count--;
                   ivar_874 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_870, ivar_869, ivar_871);
                   if (ivar_871 != NULL) ivar_871->count--;
                   ivar_876 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_873, ivar_874);
                   if (ivar_874 != NULL) ivar_874->count--;
                   ctopdown_record_82_t ivar_881;
                   ctopdown_record_82_t ivar_878;
                   ctopdown_stackADT_adt_t ivar_880;
                   ivar_880 = NULL;
                   ivar_878 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_876, ivar_880);
                   if (ivar_880 != NULL) ivar_880->count--;
                   ivar_881 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_878, ivar_79);
                   if (ivar_79 != NULL) ivar_79->count--;
                   //copying to ctopdown_record_82 from ctopdown_record_82;
                   result = (ctopdown_record_82_t)ivar_881;
                   result->count++;
                   release_ctopdown_record_82(ivar_881);
} else {
                  
                   ctopdown_funtype_84_t ivar_896;
                   ctopdown_funtype_85_t ivar_914;
                   ctopdown_funtype_85_t ivar_928;
                   ivar_2->count++;
                   ivar_3->count++;
                   ivar_928 = (ctopdown_funtype_85_t)ctopdown_putstack(ivar_1, (ctopdown_lang_spec_t)ivar_2, (ctopdown_funtype_52_t)ivar_3, ivar_4, (uint8_t)ivar_5);
                   //copying to ctopdown_funtype_85 from ctopdown_funtype_85;
                   ivar_914 = (ctopdown_funtype_85_t)ivar_928;
                   ivar_914->count++;
                   release_ctopdown_funtype_85(ivar_928);
                   ctopdown_funtype_84_t ivar_905;
                   ivar_905 = (ctopdown_funtype_84_t)ivar_914->ftbl->fptr(ivar_914, ivar_18);
                   ivar_914->ftbl->rptr(ivar_914);
                   //copying to ctopdown_funtype_84 from ctopdown_funtype_84;
                   ivar_896 = (ctopdown_funtype_84_t)ivar_905;
                   ivar_896->count++;
                   release_ctopdown_funtype_84(ivar_905);
                   ctopdown_record_82_t ivar_891;
                   ivar_891 = (ctopdown_record_82_t)ivar_896->ftbl->mptr(ivar_896, ivar_71, ivar_762);
                   ivar_896->ftbl->rptr(ivar_896);
                   //copying to ctopdown_record_82 from ctopdown_record_82;
                   result = (ctopdown_record_82_t)ivar_891;
                   result->count++;
                   release_ctopdown_record_82(ivar_891);
};
};
};
} else {
               
                release_ctopdown_funtype_49(ivar_25);
                bool_t ivar_967;
                ivar_769->count++;
                ivar_967 = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_769);
                if (ivar_967){         
                 release_ctopdown_ent_adt(ivar_769);
                 ctopdown_ent_adt_t ivar_944;
                 ivar_944 = (ctopdown_ent_adt_t)ctopdown_loop();
                 ivar_944->count++;
                 ctopdown_record_82_t ivar_961;
                 ctopdown_funtype_49_t ivar_947;
                 ivar_947 = (ctopdown_funtype_49_t)ivar_18->scaf;
                 ivar_947->count++;
                 ctopdown_record_82_t ivar_958;
                 ctopdown_funtype_49_t ivar_960;
                 ivar_960 = NULL;
                 ivar_958 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_960);
                 if (ivar_960 != NULL) ivar_960->count--;
                 ctopdown_funtype_49_t ivar_959;
                 mpz_ptr_t ivar_954;
                 //copying to mpz from uint32;
                 mpz_mk_set_ui(ivar_954, ivar_71);
                 ctopdown_array_48_t ivar_948;
                 ivar_948 = (ctopdown_array_48_t)ivar_947->ftbl->fptr(ivar_947, ivar_954);
                 ctopdown_funtype_49_t ivar_955;
                 ctopdown_array_48_t ivar_957;
                 ivar_957 = NULL;
                 ivar_955 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_947, ivar_954, ivar_957);
                 if (ivar_957 != NULL) ivar_957->count--;
                 ctopdown_array_48_t ivar_956;
                 ctopdown_array_48_t ivar_951;
                 ctopdown_ent_adt_t ivar_953;
                 ivar_953 = NULL;
                 ivar_951 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_948, ivar_75, ivar_953);
                 if (ivar_953 != NULL) ivar_953->count--;
                 ivar_956 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_951, ivar_75, ivar_944);
                 if (ivar_944 != NULL) ivar_944->count--;
                 ivar_959 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_955, ivar_954, ivar_956);
                 if (ivar_956 != NULL) ivar_956->count--;
                 ivar_961 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_958, ivar_959);
                 if (ivar_959 != NULL) ivar_959->count--;
                 ctopdown_record_82_t ivar_966;
                 ctopdown_record_82_t ivar_963;
                 ctopdown_stackADT_adt_t ivar_965;
                 ivar_965 = NULL;
                 ivar_963 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_961, ivar_965);
                 if (ivar_965 != NULL) ivar_965->count--;
                 ivar_966 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_963, ivar_79);
                 if (ivar_79 != NULL) ivar_79->count--;
                 //copying to ctopdown_record_82 from ctopdown_record_82;
                 result = (ctopdown_record_82_t)ivar_966;
                 result->count++;
                 release_ctopdown_record_82(ivar_966);
} else {
                
                 bool_t ivar_1004;
                 ivar_769->count++;
                 ivar_1004 = (bool_t)r_ctopdown_goodp((ctopdown_ent_adt_t)ivar_769);
                 if (ivar_1004){          
                  mpz_ptr_t ivar_971;
                  ivar_971 = (mpz_ptr_t)ctopdown_ent_adt_span((ctopdown_ent_adt_t)ivar_769);
                  ctopdown_ent_adt_t ivar_978;
                  ctopdown_ent_adt_t ivar_981;
                  ivar_981 = (ctopdown_ent_adt_t)ctopdown_good(ivar_971);
                  //copying to ctopdown_ent_adt from ctopdown_ent_adt;
                  ivar_978 = (ctopdown_ent_adt_t)ivar_981;
                  ivar_978->count++;
                  release_ctopdown_ent_adt(ivar_981);
                  ctopdown_record_82_t ivar_998;
                  ctopdown_funtype_49_t ivar_984;
                  ivar_984 = (ctopdown_funtype_49_t)ivar_18->scaf;
                  ivar_984->count++;
                  ctopdown_record_82_t ivar_995;
                  ctopdown_funtype_49_t ivar_997;
                  ivar_997 = NULL;
                  ivar_995 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_997);
                  if (ivar_997 != NULL) ivar_997->count--;
                  ctopdown_funtype_49_t ivar_996;
                  mpz_ptr_t ivar_991;
                  //copying to mpz from uint32;
                  mpz_mk_set_ui(ivar_991, ivar_71);
                  ctopdown_array_48_t ivar_985;
                  ivar_985 = (ctopdown_array_48_t)ivar_984->ftbl->fptr(ivar_984, ivar_991);
                  ctopdown_funtype_49_t ivar_992;
                  ctopdown_array_48_t ivar_994;
                  ivar_994 = NULL;
                  ivar_992 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_984, ivar_991, ivar_994);
                  if (ivar_994 != NULL) ivar_994->count--;
                  ctopdown_array_48_t ivar_993;
                  ctopdown_array_48_t ivar_988;
                  ctopdown_ent_adt_t ivar_990;
                  ivar_990 = NULL;
                  ivar_988 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_985, ivar_75, ivar_990);
                  if (ivar_990 != NULL) ivar_990->count--;
                  ivar_993 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_988, ivar_75, ivar_978);
                  if (ivar_978 != NULL) ivar_978->count--;
                  ivar_996 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_992, ivar_991, ivar_993);
                  if (ivar_993 != NULL) ivar_993->count--;
                  ivar_998 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_995, ivar_996);
                  if (ivar_996 != NULL) ivar_996->count--;
                  ctopdown_record_82_t ivar_1003;
                  ctopdown_record_82_t ivar_1000;
                  ctopdown_stackADT_adt_t ivar_1002;
                  ivar_1002 = NULL;
                  ivar_1000 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_998, ivar_1002);
                  if (ivar_1002 != NULL) ivar_1002->count--;
                  ivar_1003 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_1000, ivar_79);
                  if (ivar_79 != NULL) ivar_79->count--;
                  //copying to ctopdown_record_82 from ctopdown_record_82;
                  result = (ctopdown_record_82_t)ivar_1003;
                  result->count++;
                  release_ctopdown_record_82(ivar_1003);
} else {
                 
                  ctopdown_funtype_84_t ivar_1018;
                  ctopdown_funtype_85_t ivar_1036;
                  ctopdown_funtype_85_t ivar_1050;
                  ivar_2->count++;
                  ivar_3->count++;
                  ivar_1050 = (ctopdown_funtype_85_t)ctopdown_putstack(ivar_1, (ctopdown_lang_spec_t)ivar_2, (ctopdown_funtype_52_t)ivar_3, ivar_4, (uint8_t)ivar_5);
                  //copying to ctopdown_funtype_85 from ctopdown_funtype_85;
                  ivar_1036 = (ctopdown_funtype_85_t)ivar_1050;
                  ivar_1036->count++;
                  release_ctopdown_funtype_85(ivar_1050);
                  ctopdown_funtype_84_t ivar_1027;
                  ivar_1027 = (ctopdown_funtype_84_t)ivar_1036->ftbl->fptr(ivar_1036, ivar_18);
                  ivar_1036->ftbl->rptr(ivar_1036);
                  //copying to ctopdown_funtype_84 from ctopdown_funtype_84;
                  ivar_1018 = (ctopdown_funtype_84_t)ivar_1027;
                  ivar_1018->count++;
                  release_ctopdown_funtype_84(ivar_1027);
                  ctopdown_record_82_t ivar_1013;
                  ivar_1013 = (ctopdown_record_82_t)ivar_1018->ftbl->mptr(ivar_1018, ivar_71, ivar_761);
                  ivar_1018->ftbl->rptr(ivar_1018);
                  //copying to ctopdown_record_82 from ctopdown_record_82;
                  result = (ctopdown_record_82_t)ivar_1013;
                  result->count++;
                  release_ctopdown_record_82(ivar_1013);
};
};
};
} else {
              
               bool_t ivar_1227;
               ivar_83->count++;
               ivar_1227 = (bool_t)r_ctopdown_andp((ctopdown_peg_adt_t)ivar_83);
               if (ivar_1227){        
                uint8_t ivar_1063;
                ivar_1063 = (uint8_t)ctopdown_peg_adt_e((ctopdown_peg_adt_t)ivar_83);
                ctopdown_ent_adt_t ivar_1067;
                ctopdown_array_48_t ivar_1070;
                mpz_ptr_t ivar_1075;
                //copying to mpz from uint32;
                mpz_mk_set_ui(ivar_1075, ivar_71);
                ctopdown_array_48_t ivar_1072;
                ivar_1072 = (ctopdown_array_48_t)ivar_25->ftbl->fptr(ivar_25, ivar_1075);
                ivar_25->ftbl->rptr(ivar_25);
                //copying to ctopdown_array_48 from ctopdown_array_48;
                ivar_1070 = (ctopdown_array_48_t)ivar_1072;
                ivar_1070->count++;
                release_ctopdown_array_48(ivar_1072);
                ctopdown_ent_adt_t ivar_1069;
                ivar_1069 = (ctopdown_ent_adt_t)ivar_1070->elems[ivar_1063];
                ivar_1069->count++;
                release_ctopdown_array_48(ivar_1070);
                //copying to ctopdown_ent_adt from ctopdown_ent_adt;
                ivar_1067 = (ctopdown_ent_adt_t)ivar_1069;
                ivar_1067->count++;
                release_ctopdown_ent_adt(ivar_1069);
                bool_t ivar_1103;
                ivar_1067->count++;
                ivar_1103 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_1067);
                if (ivar_1103){         
                 release_ctopdown_ent_adt(ivar_1067);
                 ctopdown_ent_adt_t ivar_1080;
                 ivar_1080 = (ctopdown_ent_adt_t)ctopdown_fail();
                 ivar_1080->count++;
                 ctopdown_record_82_t ivar_1097;
                 ctopdown_funtype_49_t ivar_1083;
                 ivar_1083 = (ctopdown_funtype_49_t)ivar_18->scaf;
                 ivar_1083->count++;
                 ctopdown_record_82_t ivar_1094;
                 ctopdown_funtype_49_t ivar_1096;
                 ivar_1096 = NULL;
                 ivar_1094 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_1096);
                 if (ivar_1096 != NULL) ivar_1096->count--;
                 ctopdown_funtype_49_t ivar_1095;
                 mpz_ptr_t ivar_1090;
                 //copying to mpz from uint32;
                 mpz_mk_set_ui(ivar_1090, ivar_71);
                 ctopdown_array_48_t ivar_1084;
                 ivar_1084 = (ctopdown_array_48_t)ivar_1083->ftbl->fptr(ivar_1083, ivar_1090);
                 ctopdown_funtype_49_t ivar_1091;
                 ctopdown_array_48_t ivar_1093;
                 ivar_1093 = NULL;
                 ivar_1091 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_1083, ivar_1090, ivar_1093);
                 if (ivar_1093 != NULL) ivar_1093->count--;
                 ctopdown_array_48_t ivar_1092;
                 ctopdown_array_48_t ivar_1087;
                 ctopdown_ent_adt_t ivar_1089;
                 ivar_1089 = NULL;
                 ivar_1087 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_1084, ivar_75, ivar_1089);
                 if (ivar_1089 != NULL) ivar_1089->count--;
                 ivar_1092 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_1087, ivar_75, ivar_1080);
                 if (ivar_1080 != NULL) ivar_1080->count--;
                 ivar_1095 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_1091, ivar_1090, ivar_1092);
                 if (ivar_1092 != NULL) ivar_1092->count--;
                 ivar_1097 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_1094, ivar_1095);
                 if (ivar_1095 != NULL) ivar_1095->count--;
                 ctopdown_record_82_t ivar_1102;
                 ctopdown_record_82_t ivar_1099;
                 ctopdown_stackADT_adt_t ivar_1101;
                 ivar_1101 = NULL;
                 ivar_1099 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_1097, ivar_1101);
                 if (ivar_1101 != NULL) ivar_1101->count--;
                 ivar_1102 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_1099, ivar_79);
                 if (ivar_79 != NULL) ivar_79->count--;
                 //copying to ctopdown_record_82 from ctopdown_record_82;
                 result = (ctopdown_record_82_t)ivar_1102;
                 result->count++;
                 release_ctopdown_record_82(ivar_1102);
} else {
                
                 bool_t ivar_1133;
                 ivar_1067->count++;
                 ivar_1133 = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_1067);
                 if (ivar_1133){          
                  release_ctopdown_ent_adt(ivar_1067);
                  ctopdown_ent_adt_t ivar_1110;
                  ivar_1110 = (ctopdown_ent_adt_t)ctopdown_loop();
                  ivar_1110->count++;
                  ctopdown_record_82_t ivar_1127;
                  ctopdown_funtype_49_t ivar_1113;
                  ivar_1113 = (ctopdown_funtype_49_t)ivar_18->scaf;
                  ivar_1113->count++;
                  ctopdown_record_82_t ivar_1124;
                  ctopdown_funtype_49_t ivar_1126;
                  ivar_1126 = NULL;
                  ivar_1124 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_1126);
                  if (ivar_1126 != NULL) ivar_1126->count--;
                  ctopdown_funtype_49_t ivar_1125;
                  mpz_ptr_t ivar_1120;
                  //copying to mpz from uint32;
                  mpz_mk_set_ui(ivar_1120, ivar_71);
                  ctopdown_array_48_t ivar_1114;
                  ivar_1114 = (ctopdown_array_48_t)ivar_1113->ftbl->fptr(ivar_1113, ivar_1120);
                  ctopdown_funtype_49_t ivar_1121;
                  ctopdown_array_48_t ivar_1123;
                  ivar_1123 = NULL;
                  ivar_1121 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_1113, ivar_1120, ivar_1123);
                  if (ivar_1123 != NULL) ivar_1123->count--;
                  ctopdown_array_48_t ivar_1122;
                  ctopdown_array_48_t ivar_1117;
                  ctopdown_ent_adt_t ivar_1119;
                  ivar_1119 = NULL;
                  ivar_1117 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_1114, ivar_75, ivar_1119);
                  if (ivar_1119 != NULL) ivar_1119->count--;
                  ivar_1122 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_1117, ivar_75, ivar_1110);
                  if (ivar_1110 != NULL) ivar_1110->count--;
                  ivar_1125 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_1121, ivar_1120, ivar_1122);
                  if (ivar_1122 != NULL) ivar_1122->count--;
                  ivar_1127 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_1124, ivar_1125);
                  if (ivar_1125 != NULL) ivar_1125->count--;
                  ctopdown_record_82_t ivar_1132;
                  ctopdown_record_82_t ivar_1129;
                  ctopdown_stackADT_adt_t ivar_1131;
                  ivar_1131 = NULL;
                  ivar_1129 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_1127, ivar_1131);
                  if (ivar_1131 != NULL) ivar_1131->count--;
                  ivar_1132 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_1129, ivar_79);
                  if (ivar_79 != NULL) ivar_79->count--;
                  //copying to ctopdown_record_82 from ctopdown_record_82;
                  result = (ctopdown_record_82_t)ivar_1132;
                  result->count++;
                  release_ctopdown_record_82(ivar_1132);
} else {
                 
                  bool_t ivar_1172;
                  ivar_1067->count++;
                  ivar_1172 = (bool_t)r_ctopdown_goodp((ctopdown_ent_adt_t)ivar_1067);
                  if (ivar_1172){           
                   ctopdown_ent_adt_t ivar_1144;
                   uint8_t ivar_1150;
                   ivar_1150 = (uint8_t)0;
                   mpz_ptr_t ivar_1148;
                   //copying to mpz from uint8;
                   mpz_mk_set_ui(ivar_1148, ivar_1150);
                   ctopdown_ent_adt_t ivar_1147;
                   ivar_1147 = (ctopdown_ent_adt_t)ctopdown_good(ivar_1148);
                   //copying to ctopdown_ent_adt from ctopdown_ent_adt;
                   ivar_1144 = (ctopdown_ent_adt_t)ivar_1147;
                   ivar_1144->count++;
                   release_ctopdown_ent_adt(ivar_1147);
                   ctopdown_record_82_t ivar_1166;
                   ctopdown_funtype_49_t ivar_1152;
                   ivar_1152 = (ctopdown_funtype_49_t)ivar_18->scaf;
                   ivar_1152->count++;
                   ctopdown_record_82_t ivar_1163;
                   ctopdown_funtype_49_t ivar_1165;
                   ivar_1165 = NULL;
                   ivar_1163 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_1165);
                   if (ivar_1165 != NULL) ivar_1165->count--;
                   ctopdown_funtype_49_t ivar_1164;
                   mpz_ptr_t ivar_1159;
                   //copying to mpz from uint32;
                   mpz_mk_set_ui(ivar_1159, ivar_71);
                   ctopdown_array_48_t ivar_1153;
                   ivar_1153 = (ctopdown_array_48_t)ivar_1152->ftbl->fptr(ivar_1152, ivar_1159);
                   ctopdown_funtype_49_t ivar_1160;
                   ctopdown_array_48_t ivar_1162;
                   ivar_1162 = NULL;
                   ivar_1160 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_1152, ivar_1159, ivar_1162);
                   if (ivar_1162 != NULL) ivar_1162->count--;
                   ctopdown_array_48_t ivar_1161;
                   ctopdown_array_48_t ivar_1156;
                   ctopdown_ent_adt_t ivar_1158;
                   ivar_1158 = NULL;
                   ivar_1156 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_1153, ivar_75, ivar_1158);
                   if (ivar_1158 != NULL) ivar_1158->count--;
                   ivar_1161 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_1156, ivar_75, ivar_1144);
                   if (ivar_1144 != NULL) ivar_1144->count--;
                   ivar_1164 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_1160, ivar_1159, ivar_1161);
                   if (ivar_1161 != NULL) ivar_1161->count--;
                   ivar_1166 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_1163, ivar_1164);
                   if (ivar_1164 != NULL) ivar_1164->count--;
                   ctopdown_record_82_t ivar_1171;
                   ctopdown_record_82_t ivar_1168;
                   ctopdown_stackADT_adt_t ivar_1170;
                   ivar_1170 = NULL;
                   ivar_1168 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_1166, ivar_1170);
                   if (ivar_1170 != NULL) ivar_1170->count--;
                   ivar_1171 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_1168, ivar_79);
                   if (ivar_79 != NULL) ivar_79->count--;
                   //copying to ctopdown_record_82 from ctopdown_record_82;
                   result = (ctopdown_record_82_t)ivar_1171;
                   result->count++;
                   release_ctopdown_record_82(ivar_1171);
} else {
                  
                   ctopdown_funtype_84_t ivar_1186;
                   ctopdown_funtype_85_t ivar_1204;
                   ctopdown_funtype_85_t ivar_1218;
                   ivar_2->count++;
                   ivar_3->count++;
                   ivar_1218 = (ctopdown_funtype_85_t)ctopdown_putstack(ivar_1, (ctopdown_lang_spec_t)ivar_2, (ctopdown_funtype_52_t)ivar_3, ivar_4, (uint8_t)ivar_5);
                   //copying to ctopdown_funtype_85 from ctopdown_funtype_85;
                   ivar_1204 = (ctopdown_funtype_85_t)ivar_1218;
                   ivar_1204->count++;
                   release_ctopdown_funtype_85(ivar_1218);
                   ctopdown_funtype_84_t ivar_1195;
                   ivar_1195 = (ctopdown_funtype_84_t)ivar_1204->ftbl->fptr(ivar_1204, ivar_18);
                   ivar_1204->ftbl->rptr(ivar_1204);
                   //copying to ctopdown_funtype_84 from ctopdown_funtype_84;
                   ivar_1186 = (ctopdown_funtype_84_t)ivar_1195;
                   ivar_1186->count++;
                   release_ctopdown_funtype_84(ivar_1195);
                   ctopdown_record_82_t ivar_1181;
                   ivar_1181 = (ctopdown_record_82_t)ivar_1186->ftbl->mptr(ivar_1186, ivar_71, ivar_1063);
                   ivar_1186->ftbl->rptr(ivar_1186);
                   //copying to ctopdown_record_82 from ctopdown_record_82;
                   result = (ctopdown_record_82_t)ivar_1181;
                   result->count++;
                   release_ctopdown_record_82(ivar_1181);
};
};
};
} else {
               
                uint8_t ivar_1231;
                ivar_1231 = (uint8_t)ctopdown_peg_adt_e((ctopdown_peg_adt_t)ivar_83);
                ctopdown_ent_adt_t ivar_1235;
                ctopdown_array_48_t ivar_1238;
                mpz_ptr_t ivar_1243;
                //copying to mpz from uint32;
                mpz_mk_set_ui(ivar_1243, ivar_71);
                ctopdown_array_48_t ivar_1240;
                ivar_1240 = (ctopdown_array_48_t)ivar_25->ftbl->fptr(ivar_25, ivar_1243);
                ivar_25->ftbl->rptr(ivar_25);
                //copying to ctopdown_array_48 from ctopdown_array_48;
                ivar_1238 = (ctopdown_array_48_t)ivar_1240;
                ivar_1238->count++;
                release_ctopdown_array_48(ivar_1240);
                ctopdown_ent_adt_t ivar_1237;
                ivar_1237 = (ctopdown_ent_adt_t)ivar_1238->elems[ivar_1231];
                ivar_1237->count++;
                release_ctopdown_array_48(ivar_1238);
                //copying to ctopdown_ent_adt from ctopdown_ent_adt;
                ivar_1235 = (ctopdown_ent_adt_t)ivar_1237;
                ivar_1235->count++;
                release_ctopdown_ent_adt(ivar_1237);
                bool_t ivar_1276;
                ivar_1235->count++;
                ivar_1276 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_1235);
                if (ivar_1276){         
                 release_ctopdown_ent_adt(ivar_1235);
                 ctopdown_ent_adt_t ivar_1248;
                 uint8_t ivar_1254;
                 ivar_1254 = (uint8_t)0;
                 mpz_ptr_t ivar_1252;
                 //copying to mpz from uint8;
                 mpz_mk_set_ui(ivar_1252, ivar_1254);
                 ctopdown_ent_adt_t ivar_1251;
                 ivar_1251 = (ctopdown_ent_adt_t)ctopdown_good(ivar_1252);
                 //copying to ctopdown_ent_adt from ctopdown_ent_adt;
                 ivar_1248 = (ctopdown_ent_adt_t)ivar_1251;
                 ivar_1248->count++;
                 release_ctopdown_ent_adt(ivar_1251);
                 ctopdown_record_82_t ivar_1270;
                 ctopdown_funtype_49_t ivar_1256;
                 ivar_1256 = (ctopdown_funtype_49_t)ivar_18->scaf;
                 ivar_1256->count++;
                 ctopdown_record_82_t ivar_1267;
                 ctopdown_funtype_49_t ivar_1269;
                 ivar_1269 = NULL;
                 ivar_1267 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_1269);
                 if (ivar_1269 != NULL) ivar_1269->count--;
                 ctopdown_funtype_49_t ivar_1268;
                 mpz_ptr_t ivar_1263;
                 //copying to mpz from uint32;
                 mpz_mk_set_ui(ivar_1263, ivar_71);
                 ctopdown_array_48_t ivar_1257;
                 ivar_1257 = (ctopdown_array_48_t)ivar_1256->ftbl->fptr(ivar_1256, ivar_1263);
                 ctopdown_funtype_49_t ivar_1264;
                 ctopdown_array_48_t ivar_1266;
                 ivar_1266 = NULL;
                 ivar_1264 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_1256, ivar_1263, ivar_1266);
                 if (ivar_1266 != NULL) ivar_1266->count--;
                 ctopdown_array_48_t ivar_1265;
                 ctopdown_array_48_t ivar_1260;
                 ctopdown_ent_adt_t ivar_1262;
                 ivar_1262 = NULL;
                 ivar_1260 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_1257, ivar_75, ivar_1262);
                 if (ivar_1262 != NULL) ivar_1262->count--;
                 ivar_1265 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_1260, ivar_75, ivar_1248);
                 if (ivar_1248 != NULL) ivar_1248->count--;
                 ivar_1268 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_1264, ivar_1263, ivar_1265);
                 if (ivar_1265 != NULL) ivar_1265->count--;
                 ivar_1270 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_1267, ivar_1268);
                 if (ivar_1268 != NULL) ivar_1268->count--;
                 ctopdown_record_82_t ivar_1275;
                 ctopdown_record_82_t ivar_1272;
                 ctopdown_stackADT_adt_t ivar_1274;
                 ivar_1274 = NULL;
                 ivar_1272 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_1270, ivar_1274);
                 if (ivar_1274 != NULL) ivar_1274->count--;
                 ivar_1275 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_1272, ivar_79);
                 if (ivar_79 != NULL) ivar_79->count--;
                 //copying to ctopdown_record_82 from ctopdown_record_82;
                 result = (ctopdown_record_82_t)ivar_1275;
                 result->count++;
                 release_ctopdown_record_82(ivar_1275);
} else {
                
                 bool_t ivar_1306;
                 ivar_1235->count++;
                 ivar_1306 = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_1235);
                 if (ivar_1306){          
                  release_ctopdown_ent_adt(ivar_1235);
                  ctopdown_ent_adt_t ivar_1283;
                  ivar_1283 = (ctopdown_ent_adt_t)ctopdown_loop();
                  ivar_1283->count++;
                  ctopdown_record_82_t ivar_1300;
                  ctopdown_funtype_49_t ivar_1286;
                  ivar_1286 = (ctopdown_funtype_49_t)ivar_18->scaf;
                  ivar_1286->count++;
                  ctopdown_record_82_t ivar_1297;
                  ctopdown_funtype_49_t ivar_1299;
                  ivar_1299 = NULL;
                  ivar_1297 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_1299);
                  if (ivar_1299 != NULL) ivar_1299->count--;
                  ctopdown_funtype_49_t ivar_1298;
                  mpz_ptr_t ivar_1293;
                  //copying to mpz from uint32;
                  mpz_mk_set_ui(ivar_1293, ivar_71);
                  ctopdown_array_48_t ivar_1287;
                  ivar_1287 = (ctopdown_array_48_t)ivar_1286->ftbl->fptr(ivar_1286, ivar_1293);
                  ctopdown_funtype_49_t ivar_1294;
                  ctopdown_array_48_t ivar_1296;
                  ivar_1296 = NULL;
                  ivar_1294 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_1286, ivar_1293, ivar_1296);
                  if (ivar_1296 != NULL) ivar_1296->count--;
                  ctopdown_array_48_t ivar_1295;
                  ctopdown_array_48_t ivar_1290;
                  ctopdown_ent_adt_t ivar_1292;
                  ivar_1292 = NULL;
                  ivar_1290 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_1287, ivar_75, ivar_1292);
                  if (ivar_1292 != NULL) ivar_1292->count--;
                  ivar_1295 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_1290, ivar_75, ivar_1283);
                  if (ivar_1283 != NULL) ivar_1283->count--;
                  ivar_1298 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_1294, ivar_1293, ivar_1295);
                  if (ivar_1295 != NULL) ivar_1295->count--;
                  ivar_1300 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_1297, ivar_1298);
                  if (ivar_1298 != NULL) ivar_1298->count--;
                  ctopdown_record_82_t ivar_1305;
                  ctopdown_record_82_t ivar_1302;
                  ctopdown_stackADT_adt_t ivar_1304;
                  ivar_1304 = NULL;
                  ivar_1302 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_1300, ivar_1304);
                  if (ivar_1304 != NULL) ivar_1304->count--;
                  ivar_1305 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_1302, ivar_79);
                  if (ivar_79 != NULL) ivar_79->count--;
                  //copying to ctopdown_record_82 from ctopdown_record_82;
                  result = (ctopdown_record_82_t)ivar_1305;
                  result->count++;
                  release_ctopdown_record_82(ivar_1305);
} else {
                 
                  bool_t ivar_1340;
                  ivar_1235->count++;
                  ivar_1340 = (bool_t)r_ctopdown_goodp((ctopdown_ent_adt_t)ivar_1235);
                  if (ivar_1340){           
                   ctopdown_ent_adt_t ivar_1317;
                   ivar_1317 = (ctopdown_ent_adt_t)ctopdown_fail();
                   ivar_1317->count++;
                   ctopdown_record_82_t ivar_1334;
                   ctopdown_funtype_49_t ivar_1320;
                   ivar_1320 = (ctopdown_funtype_49_t)ivar_18->scaf;
                   ivar_1320->count++;
                   ctopdown_record_82_t ivar_1331;
                   ctopdown_funtype_49_t ivar_1333;
                   ivar_1333 = NULL;
                   ivar_1331 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_18, ivar_1333);
                   if (ivar_1333 != NULL) ivar_1333->count--;
                   ctopdown_funtype_49_t ivar_1332;
                   mpz_ptr_t ivar_1327;
                   //copying to mpz from uint32;
                   mpz_mk_set_ui(ivar_1327, ivar_71);
                   ctopdown_array_48_t ivar_1321;
                   ivar_1321 = (ctopdown_array_48_t)ivar_1320->ftbl->fptr(ivar_1320, ivar_1327);
                   ctopdown_funtype_49_t ivar_1328;
                   ctopdown_array_48_t ivar_1330;
                   ivar_1330 = NULL;
                   ivar_1328 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_1320, ivar_1327, ivar_1330);
                   if (ivar_1330 != NULL) ivar_1330->count--;
                   ctopdown_array_48_t ivar_1329;
                   ctopdown_array_48_t ivar_1324;
                   ctopdown_ent_adt_t ivar_1326;
                   ivar_1326 = NULL;
                   ivar_1324 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_1321, ivar_75, ivar_1326);
                   if (ivar_1326 != NULL) ivar_1326->count--;
                   ivar_1329 = (ctopdown_array_48_t)update_ctopdown_array_48(ivar_1324, ivar_75, ivar_1317);
                   if (ivar_1317 != NULL) ivar_1317->count--;
                   ivar_1332 = (ctopdown_funtype_49_t)update_ctopdown_funtype_49(ivar_1328, ivar_1327, ivar_1329);
                   if (ivar_1329 != NULL) ivar_1329->count--;
                   ivar_1334 = (ctopdown_record_82_t)update_ctopdown_record_82_scaf(ivar_1331, ivar_1332);
                   if (ivar_1332 != NULL) ivar_1332->count--;
                   ctopdown_record_82_t ivar_1339;
                   ctopdown_record_82_t ivar_1336;
                   ctopdown_stackADT_adt_t ivar_1338;
                   ivar_1338 = NULL;
                   ivar_1336 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_1334, ivar_1338);
                   if (ivar_1338 != NULL) ivar_1338->count--;
                   ivar_1339 = (ctopdown_record_82_t)update_ctopdown_record_82_stack(ivar_1336, ivar_79);
                   if (ivar_79 != NULL) ivar_79->count--;
                   //copying to ctopdown_record_82 from ctopdown_record_82;
                   result = (ctopdown_record_82_t)ivar_1339;
                   result->count++;
                   release_ctopdown_record_82(ivar_1339);
} else {
                  
                   ctopdown_funtype_84_t ivar_1354;
                   ctopdown_funtype_85_t ivar_1372;
                   ctopdown_funtype_85_t ivar_1386;
                   ivar_2->count++;
                   ivar_3->count++;
                   ivar_1386 = (ctopdown_funtype_85_t)ctopdown_putstack(ivar_1, (ctopdown_lang_spec_t)ivar_2, (ctopdown_funtype_52_t)ivar_3, ivar_4, (uint8_t)ivar_5);
                   //copying to ctopdown_funtype_85 from ctopdown_funtype_85;
                   ivar_1372 = (ctopdown_funtype_85_t)ivar_1386;
                   ivar_1372->count++;
                   release_ctopdown_funtype_85(ivar_1386);
                   ctopdown_funtype_84_t ivar_1363;
                   ivar_1363 = (ctopdown_funtype_84_t)ivar_1372->ftbl->fptr(ivar_1372, ivar_18);
                   ivar_1372->ftbl->rptr(ivar_1372);
                   //copying to ctopdown_funtype_84 from ctopdown_funtype_84;
                   ivar_1354 = (ctopdown_funtype_84_t)ivar_1363;
                   ivar_1354->count++;
                   release_ctopdown_funtype_84(ivar_1363);
                   ctopdown_record_82_t ivar_1349;
                   ivar_1349 = (ctopdown_record_82_t)ivar_1354->ftbl->mptr(ivar_1354, ivar_71, ivar_1231);
                   ivar_1354->ftbl->rptr(ivar_1354);
                   //copying to ctopdown_record_82 from ctopdown_record_82;
                   result = (ctopdown_record_82_t)ivar_1349;
                   result->count++;
                   release_ctopdown_record_82(ivar_1349);
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

ctopdown_closure_89_t new_ctopdown_closure_89(void){
        static struct ctopdown_funtype_88_ftbl_s ftbl = {.fptr = (ctopdown_record_82_t (*)(ctopdown_funtype_88_t, ctopdown_record_82_t))&f_ctopdown_closure_89, .mptr = (ctopdown_record_82_t (*)(ctopdown_funtype_88_t, ctopdown_record_82_t))&m_ctopdown_closure_89, .rptr =  (void (*)(ctopdown_funtype_88_t))&release_ctopdown_closure_89, .cptr = (ctopdown_funtype_88_t (*)(ctopdown_funtype_88_t))&copy_ctopdown_closure_89};
        ctopdown_closure_89_t tmp = (ctopdown_closure_89_t) safe_malloc(sizeof(struct ctopdown_closure_89_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        mpz_init(tmp->fvar_5);
        return tmp;}

void release_ctopdown_closure_89(ctopdown_funtype_88_t closure){
        ctopdown_closure_89_t x = (ctopdown_closure_89_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_funtype_52(x->fvar_3);
         release_ctopdown_lang_spec(x->fvar_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_89_t copy_ctopdown_closure_89(ctopdown_closure_89_t x){
        ctopdown_closure_89_t y = new_ctopdown_closure_89();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint8_t)x->fvar_1;
        mpz_set(y->fvar_2, x->fvar_2);
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        mpz_set(y->fvar_5, x->fvar_5);
        if (x->htbl != NULL){
            ctopdown_funtype_88_htbl_t new_htbl = (ctopdown_funtype_88_htbl_t) safe_malloc(sizeof(ctopdown_funtype_88_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_88_hashentry_t * new_data = (ctopdown_funtype_88_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_88_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_88_hashentry_t)));
        }
        return y;
}

void release_ctopdown_funtype_90(ctopdown_funtype_90_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_90_t copy_ctopdown_funtype_90(ctopdown_funtype_90_t x){return x->ftbl->cptr(x);}


ctopdown_record_91_t new_ctopdown_record_91(void){
        ctopdown_record_91_t tmp = (ctopdown_record_91_t) safe_malloc(sizeof(struct ctopdown_record_91_s));
        tmp->count = 1;
        return tmp;}

void release_ctopdown_record_91(ctopdown_record_91_t x){
        x->count--;
        if (x->count <= 0){
         release_ctopdown_funtype_49(x->scaf);
         release_ctopdown_stackADT_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_record_91_t copy_ctopdown_record_91(ctopdown_record_91_t x){
        ctopdown_record_91_t y = new_ctopdown_record_91();
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->count = 1;
        return y;}

bool_t equal_ctopdown_record_91(ctopdown_record_91_t x, ctopdown_record_91_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ctopdown_funtype_49(x->scaf, y->scaf);
        tmp = tmp && equal_ctopdown_stackADT_adt(x->stack, y->stack);
        return tmp;}

ctopdown_record_91_t update_ctopdown_record_91_scaf(ctopdown_record_91_t x, ctopdown_funtype_49_t v){
        ctopdown_record_91_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_ctopdown_funtype_49(x->scaf);};}
        else {y = copy_ctopdown_record_91(x); x->count--; y->scaf->count--;};
        y->scaf = (ctopdown_funtype_49_t)v;
        return y;}

ctopdown_record_91_t update_ctopdown_record_91_stack(ctopdown_record_91_t x, ctopdown_stackADT_adt_t v){
        ctopdown_record_91_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_ctopdown_stackADT_adt(x->stack);};}
        else {y = copy_ctopdown_record_91(x); x->count--; y->stack->count--;};
        y->stack = (ctopdown_stackADT_adt_t)v;
        return y;}



void release_ctopdown_funtype_92(ctopdown_funtype_92_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

ctopdown_funtype_92_t copy_ctopdown_funtype_92(ctopdown_funtype_92_t x){return x->ftbl->cptr(x);}


ctopdown_record_91_t f_ctopdown_closure_93(struct ctopdown_closure_93_s * closure, ctopdown_record_82_t bvar){
        ctopdown_record_91_t result = h_ctopdown_closure_93(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

ctopdown_record_91_t m_ctopdown_closure_93(struct ctopdown_closure_93_s * closure, ctopdown_record_82_t bvar){
        return h_ctopdown_closure_93(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern ctopdown_record_91_t h_ctopdown_closure_93(ctopdown_record_82_t ivar_18, uint8_t ivar_5, mpz_t ivar_4, ctopdown_funtype_52_t ivar_3, ctopdown_lang_spec_t ivar_2, mpz_t ivar_1){
        ctopdown_record_91_t result;
        bool_t ivar_25;
        bool_t ivar_26;
        ctopdown_ent_adt_t ivar_42;
        ctopdown_array_48_t ivar_30;
        ctopdown_funtype_49_t ivar_34;
        ivar_34 = (ctopdown_funtype_49_t)ivar_18->scaf;
        ivar_34->count++;
        ctopdown_array_48_t ivar_32;
        ivar_32 = (ctopdown_array_48_t)ivar_34->ftbl->fptr(ivar_34, ivar_4);
        ivar_34->ftbl->rptr(ivar_34);
        //copying to ctopdown_array_48 from ctopdown_array_48;
        ivar_30 = (ctopdown_array_48_t)ivar_32;
        ivar_30->count++;
        release_ctopdown_array_48(ivar_32);
        ctopdown_ent_adt_t ivar_29;
        ivar_29 = (ctopdown_ent_adt_t)ivar_30->elems[ivar_5];
        ivar_29->count++;
        release_ctopdown_array_48(ivar_30);
        //copying to ctopdown_ent_adt from ctopdown_ent_adt;
        ivar_42 = (ctopdown_ent_adt_t)ivar_29;
        ivar_42->count++;
        release_ctopdown_ent_adt(ivar_29);
        ivar_26 = (bool_t)r_ctopdown_pendingp((ctopdown_ent_adt_t)ivar_42);
        ivar_25 = !ivar_26;
        if (ivar_25){ 
             //copying to ctopdown_record_91 from ctopdown_record_82;
             result = new_ctopdown_record_91();
             result->scaf = (ctopdown_funtype_49_t)ivar_18->stack;
             result->scaf->count++;
             result->stack = (ctopdown_stackADT_adt_t)ivar_18->scaf;
             result->stack->count++;
             release_ctopdown_record_82(ivar_18);
} else {
        
             ctopdown_funtype_88_t ivar_91;
             ctopdown_funtype_88_t ivar_103;
             ivar_2->count++;
             ivar_3->count++;
             ivar_103 = (ctopdown_funtype_88_t)ctopdown_parse(ivar_1, (ctopdown_lang_spec_t)ivar_2, (ctopdown_funtype_52_t)ivar_3, ivar_4, (uint8_t)ivar_5);
             //copying to ctopdown_funtype_88 from ctopdown_funtype_88;
             ivar_91 = (ctopdown_funtype_88_t)ivar_103;
             ivar_91->count++;
             release_ctopdown_funtype_88(ivar_103);
             ctopdown_record_82_t ivar_109;
             ctopdown_funtype_88_t ivar_62;
             ctopdown_funtype_88_t ivar_74;
             ivar_2->count++;
             ivar_3->count++;
             ivar_74 = (ctopdown_funtype_88_t)ctopdown_step(ivar_1, (ctopdown_lang_spec_t)ivar_2, (ctopdown_funtype_52_t)ivar_3, ivar_4, (uint8_t)ivar_5);
             //copying to ctopdown_funtype_88 from ctopdown_funtype_88;
             ivar_62 = (ctopdown_funtype_88_t)ivar_74;
             ivar_62->count++;
             release_ctopdown_funtype_88(ivar_74);
             ctopdown_record_82_t ivar_55;
             ivar_55 = (ctopdown_record_82_t)ivar_62->ftbl->fptr(ivar_62, ivar_18);
             ivar_62->ftbl->rptr(ivar_62);
             //copying to ctopdown_record_82 from ctopdown_record_82;
             ivar_109 = (ctopdown_record_82_t)ivar_55;
             ivar_109->count++;
             release_ctopdown_record_82(ivar_55);
             ctopdown_record_82_t ivar_84;
             ivar_84 = (ctopdown_record_82_t)ivar_91->ftbl->fptr(ivar_91, ivar_109);
             ivar_91->ftbl->rptr(ivar_91);
             //copying to ctopdown_record_91 from ctopdown_record_82;
             result = new_ctopdown_record_91();
             result->scaf = (ctopdown_funtype_49_t)ivar_84->stack;
             result->scaf->count++;
             result->stack = (ctopdown_stackADT_adt_t)ivar_84->scaf;
             result->stack->count++;
             release_ctopdown_record_82(ivar_84);
};

        return result;
}

ctopdown_closure_93_t new_ctopdown_closure_93(void){
        static struct ctopdown_funtype_92_ftbl_s ftbl = {.fptr = (ctopdown_record_91_t (*)(ctopdown_funtype_92_t, ctopdown_record_82_t))&f_ctopdown_closure_93, .mptr = (ctopdown_record_91_t (*)(ctopdown_funtype_92_t, ctopdown_record_82_t))&m_ctopdown_closure_93, .rptr =  (void (*)(ctopdown_funtype_92_t))&release_ctopdown_closure_93, .cptr = (ctopdown_funtype_92_t (*)(ctopdown_funtype_92_t))&copy_ctopdown_closure_93};
        ctopdown_closure_93_t tmp = (ctopdown_closure_93_t) safe_malloc(sizeof(struct ctopdown_closure_93_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        mpz_init(tmp->fvar_5);
        return tmp;}

void release_ctopdown_closure_93(ctopdown_funtype_92_t closure){
        ctopdown_closure_93_t x = (ctopdown_closure_93_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ctopdown_funtype_52(x->fvar_3);
         release_ctopdown_lang_spec(x->fvar_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_93_t copy_ctopdown_closure_93(ctopdown_closure_93_t x){
        ctopdown_closure_93_t y = new_ctopdown_closure_93();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint8_t)x->fvar_1;
        mpz_set(y->fvar_2, x->fvar_2);
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        mpz_set(y->fvar_5, x->fvar_5);
        if (x->htbl != NULL){
            ctopdown_funtype_92_htbl_t new_htbl = (ctopdown_funtype_92_htbl_t) safe_malloc(sizeof(ctopdown_funtype_92_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_92_hashentry_t * new_data = (ctopdown_funtype_92_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_92_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_92_hashentry_t)));
        }
        return y;
}


ctopdown_array_48_t f_ctopdown_closure_94(struct ctopdown_closure_94_s * closure, mpz_t bvar){
        ctopdown_array_48_t result = h_ctopdown_closure_94(bvar); 
        return result;}

ctopdown_array_48_t m_ctopdown_closure_94(struct ctopdown_closure_94_s * closure, mpz_t bvar){
        return h_ctopdown_closure_94(bvar);}

extern ctopdown_array_48_t h_ctopdown_closure_94(mpz_t ivar_11){
        ctopdown_array_48_t result;
        result = new_ctopdown_array_48(256);
        for (uint32_t ivar_12 = 0; ivar_12 < 256; ivar_12++){
             result->elems[ivar_12] = (ctopdown_ent_adt_t)ctopdown_pending();
             result->elems[ivar_12]->count++;
        };

        return result;
}

ctopdown_closure_94_t new_ctopdown_closure_94(void){
        static struct ctopdown_funtype_49_ftbl_s ftbl = {.fptr = (ctopdown_array_48_t (*)(ctopdown_funtype_49_t, mpz_t))&f_ctopdown_closure_94, .mptr = (ctopdown_array_48_t (*)(ctopdown_funtype_49_t, mpz_t))&m_ctopdown_closure_94, .rptr =  (void (*)(ctopdown_funtype_49_t))&release_ctopdown_closure_94, .cptr = (ctopdown_funtype_49_t (*)(ctopdown_funtype_49_t))&copy_ctopdown_closure_94};
        ctopdown_closure_94_t tmp = (ctopdown_closure_94_t) safe_malloc(sizeof(struct ctopdown_closure_94_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ctopdown_closure_94(ctopdown_funtype_49_t closure){
        ctopdown_closure_94_t x = (ctopdown_closure_94_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ctopdown_closure_94_t copy_ctopdown_closure_94(ctopdown_closure_94_t x){
        ctopdown_closure_94_t y = new_ctopdown_closure_94();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            ctopdown_funtype_49_htbl_t new_htbl = (ctopdown_funtype_49_htbl_t) safe_malloc(sizeof(ctopdown_funtype_49_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ctopdown_funtype_49_hashentry_t * new_data = (ctopdown_funtype_49_hashentry_t *) safe_malloc(new_htbl->size * sizeof(ctopdown_funtype_49_hashentry_t));
            memcpy(new_data, new_htbl->data, (new_htbl->size * sizeof(ctopdown_funtype_49_hashentry_t)));
        }
        return y;
}

extern uint8_t ctopdown_num_non_terminals(void){
        uint8_t result;
        result = (uint8_t)255;

        return result;
}

extern bool_t r_ctopdown_failp(ctopdown_ent_adt_t ivar_1){
        bool_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ctopdown_ent_adt_index;
        release_ctopdown_ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        return result;
}

extern bool_t r_ctopdown_pendingp(ctopdown_ent_adt_t ivar_1){
        bool_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ctopdown_ent_adt_index;
        release_ctopdown_ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        return result;
}

extern bool_t r_ctopdown_loopp(ctopdown_ent_adt_t ivar_1){
        bool_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)2;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ctopdown_ent_adt_index;
        release_ctopdown_ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        return result;
}

extern bool_t r_ctopdown_goodp(ctopdown_ent_adt_t ivar_1){
        bool_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)3;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ctopdown_ent_adt_index;
        release_ctopdown_ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        return result;
}

extern ctopdown_good_t update_ctopdown_ent_adt_span(ctopdown_ent_adt_t ivar_1, mpz_t ivar_3){
        ctopdown_good_t result;
        ctopdown_good_t ivar_2;
        //copying to ctopdown_good from ctopdown_ent_adt;
        ivar_2 = (ctopdown_good_t)ivar_1;
        ivar_2->count++;
        release_ctopdown_ent_adt(ivar_1);
        result = (ctopdown_good_t)update_ctopdown_good_span(ivar_2, ivar_3);

        return result;
}

extern mpz_ptr_t ctopdown_ent_adt_span(ctopdown_ent_adt_t ivar_1){
        mpz_ptr_t result;
        ctopdown_good_t ivar_2;
        //copying to ctopdown_good from ctopdown_ent_adt;
        ivar_2 = (ctopdown_good_t)ivar_1;
        ivar_2->count++;
        release_ctopdown_ent_adt(ivar_1);
        result = safe_malloc(sizeof(mpz_t));
        mpz_init(result);
        mpz_set(result, ivar_2->span);
        release_ctopdown_good(ivar_2);

        return result;
}

extern ctopdown_ent_adt_t ctopdown_fail(void){
        ctopdown_ent_adt_t result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        ctopdown_ent_adt_t ivar_2;
        ivar_2 = new_ctopdown_ent_adt();;
        ivar_2->ctopdown_ent_adt_index = (uint8_t)ivar_1;
        //copying to ctopdown_ent_adt from ctopdown_ent_adt;
        result = (ctopdown_ent_adt_t)ivar_2;
        result->count++;
        release_ctopdown_ent_adt(ivar_2);

        return result;
}

extern ctopdown_ent_adt_t ctopdown_pending(void){
        ctopdown_ent_adt_t result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        ctopdown_ent_adt_t ivar_2;
        ivar_2 = new_ctopdown_ent_adt();;
        ivar_2->ctopdown_ent_adt_index = (uint8_t)ivar_1;
        //copying to ctopdown_ent_adt from ctopdown_ent_adt;
        result = (ctopdown_ent_adt_t)ivar_2;
        result->count++;
        release_ctopdown_ent_adt(ivar_2);

        return result;
}

extern ctopdown_ent_adt_t ctopdown_loop(void){
        ctopdown_ent_adt_t result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)2;
        ctopdown_ent_adt_t ivar_2;
        ivar_2 = new_ctopdown_ent_adt();;
        ivar_2->ctopdown_ent_adt_index = (uint8_t)ivar_1;
        //copying to ctopdown_ent_adt from ctopdown_ent_adt;
        result = (ctopdown_ent_adt_t)ivar_2;
        result->count++;
        release_ctopdown_ent_adt(ivar_2);

        return result;
}

extern ctopdown_ent_adt_t ctopdown_good(mpz_t ivar_2){
        ctopdown_ent_adt_t result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)3;
        ctopdown_good_t ivar_3;
        ivar_3 = new_ctopdown_good();;
        ivar_3->ctopdown_ent_adt_index = (uint8_t)ivar_1;
        mpz_set(ivar_3->span, ivar_2);
        mpz_clear(ivar_2);
        //copying to ctopdown_ent_adt from ctopdown_good;
        result = (ctopdown_ent_adt_t)ivar_3;
        result->count++;
        release_ctopdown_good(ivar_3);

        return result;
}

extern uint8_t ctopdown_ord_1(ctopdown_ent_adt_t ivar_1){
        uint8_t result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)r_ctopdown_failp((ctopdown_ent_adt_t)ivar_1);
        if (ivar_3){ 
             release_ctopdown_ent_adt(ivar_1);
             result = (uint8_t)0;
} else {
        
             bool_t ivar_7;
             ivar_1->count++;
             ivar_7 = (bool_t)r_ctopdown_pendingp((ctopdown_ent_adt_t)ivar_1);
             if (ivar_7){  
           release_ctopdown_ent_adt(ivar_1);
           result = (uint8_t)1;
} else {
             
           bool_t ivar_11;
           ivar_1->count++;
           ivar_11 = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_1);
           if (ivar_11){   
           release_ctopdown_ent_adt(ivar_1);
           result = (uint8_t)2;
} else {
           
           result = (uint8_t)3;
};
};
};

        return result;
}

extern bool_t ctopdown_subterm_1(ctopdown_ent_adt_t ivar_1, ctopdown_ent_adt_t ivar_2){
        bool_t result;
        result = (bool_t) equal_ctopdown_ent_adt(ivar_1, ivar_2);

        return result;
}

extern bool_t ctopdown_doublelessp_1(ctopdown_ent_adt_t ivar_1, ctopdown_ent_adt_t ivar_2){
        bool_t result;
        result = (bool_t) false;

        return result;
}

extern ctopdown_funtype_3_t ctopdown_reduce_nat_1(mpz_t ivar_1, mpz_t ivar_2, mpz_t ivar_3, ctopdown_funtype_4_t ivar_4){
        ctopdown_funtype_3_t result;
        ctopdown_closure_5_t cl1346;
        cl1346 = new_ctopdown_closure_5();
        cl1346->fvar_1 = (ctopdown_funtype_4_t)ivar_4;
        cl1346->fvar_1->count++;
        mpz_set(cl1346->fvar_2, ivar_3);
        mpz_set(cl1346->fvar_3, ivar_2);
        mpz_set(cl1346->fvar_4, ivar_1);
        release_ctopdown_funtype_4(ivar_4);
        release_mpz(ivar_3);
        release_mpz(ivar_2);
        release_mpz(ivar_1);
        result = (ctopdown_funtype_3_t)cl1346;

        return result;
}

extern ctopdown_funtype_3_t ctopdown_REDUCE_nat_1(ctopdown_funtype_3_t ivar_1, ctopdown_funtype_3_t ivar_2, ctopdown_funtype_3_t ivar_3, ctopdown_funtype_7_t ivar_4){
        ctopdown_funtype_3_t result;
        ctopdown_closure_8_t cl1348;
        cl1348 = new_ctopdown_closure_8();
        cl1348->fvar_1 = (ctopdown_funtype_3_t)ivar_3;
        cl1348->fvar_1->count++;
        cl1348->fvar_2 = (ctopdown_funtype_7_t)ivar_4;
        cl1348->fvar_2->count++;
        cl1348->fvar_3 = (ctopdown_funtype_3_t)ivar_2;
        cl1348->fvar_3->count++;
        cl1348->fvar_4 = (ctopdown_funtype_3_t)ivar_1;
        cl1348->fvar_4->count++;
        release_ctopdown_funtype_7(ivar_4);
        release_ctopdown_funtype_3(ivar_3);
        release_ctopdown_funtype_3(ivar_2);
        release_ctopdown_funtype_3(ivar_1);
        result = (ctopdown_funtype_3_t)cl1348;

        return result;
}

extern ctopdown_funtype_9_t ctopdown_reduce_ordinal_1(ordstruct_adt_ordstruct_adt_t ivar_1, ordstruct_adt_ordstruct_adt_t ivar_2, ordstruct_adt_ordstruct_adt_t ivar_3, ctopdown_funtype_10_t ivar_4){
        ctopdown_funtype_9_t result;
        ctopdown_closure_11_t cl1350;
        cl1350 = new_ctopdown_closure_11();
        cl1350->fvar_1 = (ctopdown_funtype_10_t)ivar_4;
        cl1350->fvar_1->count++;
        cl1350->fvar_2 = (ordstruct_adt_ordstruct_adt_t)ivar_3;
        cl1350->fvar_2->count++;
        cl1350->fvar_3 = (ordstruct_adt_ordstruct_adt_t)ivar_2;
        cl1350->fvar_3->count++;
        cl1350->fvar_4 = (ordstruct_adt_ordstruct_adt_t)ivar_1;
        cl1350->fvar_4->count++;
        release_ctopdown_funtype_10(ivar_4);
        release_ordstruct_adt_ordstruct_adt(ivar_3);
        release_ordstruct_adt_ordstruct_adt(ivar_2);
        release_ordstruct_adt_ordstruct_adt(ivar_1);
        result = (ctopdown_funtype_9_t)cl1350;

        return result;
}

extern ctopdown_funtype_9_t ctopdown_REDUCE_ordinal_1(ctopdown_funtype_9_t ivar_1, ctopdown_funtype_9_t ivar_2, ctopdown_funtype_9_t ivar_3, ctopdown_funtype_12_t ivar_4){
        ctopdown_funtype_9_t result;
        ctopdown_closure_13_t cl1352;
        cl1352 = new_ctopdown_closure_13();
        cl1352->fvar_1 = (ctopdown_funtype_9_t)ivar_3;
        cl1352->fvar_1->count++;
        cl1352->fvar_2 = (ctopdown_funtype_12_t)ivar_4;
        cl1352->fvar_2->count++;
        cl1352->fvar_3 = (ctopdown_funtype_9_t)ivar_2;
        cl1352->fvar_3->count++;
        cl1352->fvar_4 = (ctopdown_funtype_9_t)ivar_1;
        cl1352->fvar_4->count++;
        release_ctopdown_funtype_12(ivar_4);
        release_ctopdown_funtype_9(ivar_3);
        release_ctopdown_funtype_9(ivar_2);
        release_ctopdown_funtype_9(ivar_1);
        result = (ctopdown_funtype_9_t)cl1352;

        return result;
}

extern bool_t r_ctopdown_epsilonp(ctopdown_peg_adt_t ivar_1){
        bool_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ctopdown_peg_adt_index;
        release_ctopdown_peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        return result;
}

extern bool_t r_ctopdown_failurep(ctopdown_peg_adt_t ivar_1){
        bool_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ctopdown_peg_adt_index;
        release_ctopdown_peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        return result;
}

extern bool_t r_ctopdown_anyp(ctopdown_peg_adt_t ivar_1){
        bool_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)2;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ctopdown_peg_adt_index;
        release_ctopdown_peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        return result;
}

extern bool_t r_ctopdown_terminalp(ctopdown_peg_adt_t ivar_1){
        bool_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)3;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ctopdown_peg_adt_index;
        release_ctopdown_peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        return result;
}

extern bool_t r_ctopdown_concatp(ctopdown_peg_adt_t ivar_1){
        bool_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)4;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ctopdown_peg_adt_index;
        release_ctopdown_peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        return result;
}

extern bool_t r_ctopdown_orp(ctopdown_peg_adt_t ivar_1){
        bool_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)5;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ctopdown_peg_adt_index;
        release_ctopdown_peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        return result;
}

extern bool_t r_ctopdown_andp(ctopdown_peg_adt_t ivar_1){
        bool_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)6;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ctopdown_peg_adt_index;
        release_ctopdown_peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        return result;
}

extern bool_t r_ctopdown_notp(ctopdown_peg_adt_t ivar_1){
        bool_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)7;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ctopdown_peg_adt_index;
        release_ctopdown_peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        return result;
}

extern ctopdown_any_t update_ctopdown_peg_adt_p(ctopdown_peg_adt_t ivar_1, ctopdown_array_15_t ivar_3){
        ctopdown_any_t result;
        ctopdown_any_t ivar_2;
        //copying to ctopdown_any from ctopdown_peg_adt;
        ivar_2 = (ctopdown_any_t)ivar_1;
        ivar_2->count++;
        release_ctopdown_peg_adt(ivar_1);
        result = (ctopdown_any_t)update_ctopdown_any_p(ivar_2, ivar_3);

        return result;
}

extern ctopdown_array_15_t ctopdown_peg_adt_p(ctopdown_peg_adt_t ivar_1){
        ctopdown_array_15_t result;
        ctopdown_any_t ivar_2;
        //copying to ctopdown_any from ctopdown_peg_adt;
        ivar_2 = (ctopdown_any_t)ivar_1;
        ivar_2->count++;
        release_ctopdown_peg_adt(ivar_1);
        result = (ctopdown_array_15_t)ivar_2->p;
        result->count++;
        release_ctopdown_any(ivar_2);

        return result;
}

extern ctopdown_terminal_t update_ctopdown_peg_adt_a(ctopdown_peg_adt_t ivar_1, uint8_t ivar_3){
        ctopdown_terminal_t result;
        ctopdown_terminal_t ivar_2;
        //copying to ctopdown_terminal from ctopdown_peg_adt;
        ivar_2 = (ctopdown_terminal_t)ivar_1;
        ivar_2->count++;
        release_ctopdown_peg_adt(ivar_1);
        result = (ctopdown_terminal_t)update_ctopdown_terminal_a(ivar_2, ivar_3);

        return result;
}

extern uint8_t ctopdown_peg_adt_a(ctopdown_peg_adt_t ivar_1){
        uint8_t result;
        ctopdown_terminal_t ivar_2;
        //copying to ctopdown_terminal from ctopdown_peg_adt;
        ivar_2 = (ctopdown_terminal_t)ivar_1;
        ivar_2->count++;
        release_ctopdown_peg_adt(ivar_1);
        result = (uint8_t)ivar_2->a;
        release_ctopdown_terminal(ivar_2);

        return result;
}

extern ctopdown_peg_adt_t update_ctopdown_peg_adt_e1(ctopdown_peg_adt_t ivar_1, uint8_t ivar_7){
        ctopdown_peg_adt_t result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->ctopdown_peg_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)4;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             ctopdown_concat_t ivar_8;
             //copying to ctopdown_concat from ctopdown_peg_adt;
             ivar_8 = (ctopdown_concat_t)ivar_1;
             ivar_8->count++;
             release_ctopdown_peg_adt(ivar_1);
             result = (ctopdown_peg_adt_t)update_ctopdown_concat_e1(ivar_8, ivar_7);
} else {
        
             ctopdown_choice_t ivar_12;
             //copying to ctopdown_choice from ctopdown_peg_adt;
             ivar_12 = (ctopdown_choice_t)ivar_1;
             ivar_12->count++;
             release_ctopdown_peg_adt(ivar_1);
             result = (ctopdown_peg_adt_t)update_ctopdown_choice_e1(ivar_12, ivar_7);
};

        return result;
}

extern uint8_t ctopdown_peg_adt_e1(ctopdown_peg_adt_t ivar_1){
        uint8_t result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->ctopdown_peg_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)4;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             ctopdown_concat_t ivar_2;
             //copying to ctopdown_concat from ctopdown_peg_adt;
             ivar_2 = (ctopdown_concat_t)ivar_1;
             ivar_2->count++;
             release_ctopdown_peg_adt(ivar_1);
             result = (uint8_t)ivar_2->e1;
             release_ctopdown_concat(ivar_2);
} else {
        
             ctopdown_choice_t ivar_6;
             //copying to ctopdown_choice from ctopdown_peg_adt;
             ivar_6 = (ctopdown_choice_t)ivar_1;
             ivar_6->count++;
             release_ctopdown_peg_adt(ivar_1);
             result = (uint8_t)ivar_6->e1;
             release_ctopdown_choice(ivar_6);
};

        return result;
}

extern ctopdown_peg_adt_t update_ctopdown_peg_adt_e2(ctopdown_peg_adt_t ivar_1, uint8_t ivar_7){
        ctopdown_peg_adt_t result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->ctopdown_peg_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)4;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             ctopdown_concat_t ivar_8;
             //copying to ctopdown_concat from ctopdown_peg_adt;
             ivar_8 = (ctopdown_concat_t)ivar_1;
             ivar_8->count++;
             release_ctopdown_peg_adt(ivar_1);
             result = (ctopdown_peg_adt_t)update_ctopdown_concat_e2(ivar_8, ivar_7);
} else {
        
             ctopdown_choice_t ivar_12;
             //copying to ctopdown_choice from ctopdown_peg_adt;
             ivar_12 = (ctopdown_choice_t)ivar_1;
             ivar_12->count++;
             release_ctopdown_peg_adt(ivar_1);
             result = (ctopdown_peg_adt_t)update_ctopdown_choice_e2(ivar_12, ivar_7);
};

        return result;
}

extern uint8_t ctopdown_peg_adt_e2(ctopdown_peg_adt_t ivar_1){
        uint8_t result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->ctopdown_peg_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)4;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             ctopdown_concat_t ivar_2;
             //copying to ctopdown_concat from ctopdown_peg_adt;
             ivar_2 = (ctopdown_concat_t)ivar_1;
             ivar_2->count++;
             release_ctopdown_peg_adt(ivar_1);
             result = (uint8_t)ivar_2->e2;
             release_ctopdown_concat(ivar_2);
} else {
        
             ctopdown_choice_t ivar_6;
             //copying to ctopdown_choice from ctopdown_peg_adt;
             ivar_6 = (ctopdown_choice_t)ivar_1;
             ivar_6->count++;
             release_ctopdown_peg_adt(ivar_1);
             result = (uint8_t)ivar_6->e2;
             release_ctopdown_choice(ivar_6);
};

        return result;
}

extern ctopdown_peg_adt_t update_ctopdown_peg_adt_e(ctopdown_peg_adt_t ivar_1, uint8_t ivar_7){
        ctopdown_peg_adt_t result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->ctopdown_peg_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)6;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             ctopdown_check_t ivar_8;
             //copying to ctopdown_check from ctopdown_peg_adt;
             ivar_8 = (ctopdown_check_t)ivar_1;
             ivar_8->count++;
             release_ctopdown_peg_adt(ivar_1);
             result = (ctopdown_peg_adt_t)update_ctopdown_check_e(ivar_8, ivar_7);
} else {
        
             ctopdown_neg_t ivar_12;
             //copying to ctopdown_neg from ctopdown_peg_adt;
             ivar_12 = (ctopdown_neg_t)ivar_1;
             ivar_12->count++;
             release_ctopdown_peg_adt(ivar_1);
             result = (ctopdown_peg_adt_t)update_ctopdown_neg_e(ivar_12, ivar_7);
};

        return result;
}

extern uint8_t ctopdown_peg_adt_e(ctopdown_peg_adt_t ivar_1){
        uint8_t result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->ctopdown_peg_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)6;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             ctopdown_check_t ivar_2;
             //copying to ctopdown_check from ctopdown_peg_adt;
             ivar_2 = (ctopdown_check_t)ivar_1;
             ivar_2->count++;
             release_ctopdown_peg_adt(ivar_1);
             result = (uint8_t)ivar_2->e;
             release_ctopdown_check(ivar_2);
} else {
        
             ctopdown_neg_t ivar_6;
             //copying to ctopdown_neg from ctopdown_peg_adt;
             ivar_6 = (ctopdown_neg_t)ivar_1;
             ivar_6->count++;
             release_ctopdown_peg_adt(ivar_1);
             result = (uint8_t)ivar_6->e;
             release_ctopdown_neg(ivar_6);
};

        return result;
}

extern ctopdown_peg_adt_t ctopdown_epsilon(void){
        ctopdown_peg_adt_t result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        ctopdown_peg_adt_t ivar_2;
        ivar_2 = new_ctopdown_peg_adt();;
        ivar_2->ctopdown_peg_adt_index = (uint8_t)ivar_1;
        //copying to ctopdown_peg_adt from ctopdown_peg_adt;
        result = (ctopdown_peg_adt_t)ivar_2;
        result->count++;
        release_ctopdown_peg_adt(ivar_2);

        return result;
}

extern ctopdown_peg_adt_t ctopdown_failure(void){
        ctopdown_peg_adt_t result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        ctopdown_peg_adt_t ivar_2;
        ivar_2 = new_ctopdown_peg_adt();;
        ivar_2->ctopdown_peg_adt_index = (uint8_t)ivar_1;
        //copying to ctopdown_peg_adt from ctopdown_peg_adt;
        result = (ctopdown_peg_adt_t)ivar_2;
        result->count++;
        release_ctopdown_peg_adt(ivar_2);

        return result;
}

extern ctopdown_peg_adt_t ctopdown_any(ctopdown_array_15_t ivar_2){
        ctopdown_peg_adt_t result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)2;
        ctopdown_any_t ivar_3;
        ivar_3 = new_ctopdown_any();;
        ivar_3->ctopdown_peg_adt_index = (uint8_t)ivar_1;
        ivar_3->p = (ctopdown_array_15_t)ivar_2;
        //copying to ctopdown_peg_adt from ctopdown_any;
        result = (ctopdown_peg_adt_t)ivar_3;
        result->count++;
        release_ctopdown_any(ivar_3);

        return result;
}

extern ctopdown_peg_adt_t ctopdown_terminal(uint8_t ivar_2){
        ctopdown_peg_adt_t result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)3;
        ctopdown_terminal_t ivar_3;
        ivar_3 = new_ctopdown_terminal();;
        ivar_3->ctopdown_peg_adt_index = (uint8_t)ivar_1;
        ivar_3->a = (uint8_t)ivar_2;
        //copying to ctopdown_peg_adt from ctopdown_terminal;
        result = (ctopdown_peg_adt_t)ivar_3;
        result->count++;
        release_ctopdown_terminal(ivar_3);

        return result;
}

extern ctopdown_peg_adt_t ctopdown_concat(uint8_t ivar_2, uint8_t ivar_3){
        ctopdown_peg_adt_t result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)4;
        ctopdown_concat_t ivar_4;
        ivar_4 = new_ctopdown_concat();;
        ivar_4->ctopdown_peg_adt_index = (uint8_t)ivar_1;
        ivar_4->e1 = (uint8_t)ivar_2;
        ivar_4->e2 = (uint8_t)ivar_3;
        //copying to ctopdown_peg_adt from ctopdown_concat;
        result = (ctopdown_peg_adt_t)ivar_4;
        result->count++;
        release_ctopdown_concat(ivar_4);

        return result;
}

extern ctopdown_peg_adt_t ctopdown_choice(uint8_t ivar_2, uint8_t ivar_3){
        ctopdown_peg_adt_t result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)5;
        ctopdown_choice_t ivar_4;
        ivar_4 = new_ctopdown_choice();;
        ivar_4->ctopdown_peg_adt_index = (uint8_t)ivar_1;
        ivar_4->e1 = (uint8_t)ivar_2;
        ivar_4->e2 = (uint8_t)ivar_3;
        //copying to ctopdown_peg_adt from ctopdown_choice;
        result = (ctopdown_peg_adt_t)ivar_4;
        result->count++;
        release_ctopdown_choice(ivar_4);

        return result;
}

extern ctopdown_peg_adt_t ctopdown_check(uint8_t ivar_2){
        ctopdown_peg_adt_t result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)6;
        ctopdown_check_t ivar_3;
        ivar_3 = new_ctopdown_check();;
        ivar_3->ctopdown_peg_adt_index = (uint8_t)ivar_1;
        ivar_3->e = (uint8_t)ivar_2;
        //copying to ctopdown_peg_adt from ctopdown_check;
        result = (ctopdown_peg_adt_t)ivar_3;
        result->count++;
        release_ctopdown_check(ivar_3);

        return result;
}

extern ctopdown_peg_adt_t ctopdown_neg(uint8_t ivar_2){
        ctopdown_peg_adt_t result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)7;
        ctopdown_neg_t ivar_3;
        ivar_3 = new_ctopdown_neg();;
        ivar_3->ctopdown_peg_adt_index = (uint8_t)ivar_1;
        ivar_3->e = (uint8_t)ivar_2;
        //copying to ctopdown_peg_adt from ctopdown_neg;
        result = (ctopdown_peg_adt_t)ivar_3;
        result->count++;
        release_ctopdown_neg(ivar_3);

        return result;
}

extern uint8_t ctopdown_ord_2(ctopdown_peg_adt_t ivar_1){
        uint8_t result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)r_ctopdown_epsilonp((ctopdown_peg_adt_t)ivar_1);
        if (ivar_3){ 
             release_ctopdown_peg_adt(ivar_1);
             result = (uint8_t)0;
} else {
        
             bool_t ivar_7;
             ivar_1->count++;
             ivar_7 = (bool_t)r_ctopdown_failurep((ctopdown_peg_adt_t)ivar_1);
             if (ivar_7){  
           release_ctopdown_peg_adt(ivar_1);
           result = (uint8_t)1;
} else {
             
           bool_t ivar_15;
           ivar_1->count++;
           ivar_15 = (bool_t)r_ctopdown_anyp((ctopdown_peg_adt_t)ivar_1);
           if (ivar_15){   
           result = (uint8_t)2;
} else {
           
           bool_t ivar_23;
           ivar_1->count++;
           ivar_23 = (bool_t)r_ctopdown_terminalp((ctopdown_peg_adt_t)ivar_1);
           if (ivar_23){    
            result = (uint8_t)3;
} else {
           
            bool_t ivar_35;
            ivar_1->count++;
            ivar_35 = (bool_t)r_ctopdown_concatp((ctopdown_peg_adt_t)ivar_1);
            if (ivar_35){     
             result = (uint8_t)4;
} else {
            
             bool_t ivar_47;
             ivar_1->count++;
             ivar_47 = (bool_t)r_ctopdown_orp((ctopdown_peg_adt_t)ivar_1);
             if (ivar_47){      
              result = (uint8_t)5;
} else {
             
              bool_t ivar_55;
              ivar_1->count++;
              ivar_55 = (bool_t)r_ctopdown_andp((ctopdown_peg_adt_t)ivar_1);
              if (ivar_55){       
               result = (uint8_t)6;
} else {
              
               result = (uint8_t)7;
};
};
};
};
};
};
};

        return result;
}

extern bool_t ctopdown_subterm_2(ctopdown_peg_adt_t ivar_1, ctopdown_peg_adt_t ivar_2){
        bool_t result;
        result = (bool_t) equal_ctopdown_peg_adt(ivar_1, ivar_2);

        return result;
}

extern bool_t ctopdown_doublelessp_2(ctopdown_peg_adt_t ivar_1, ctopdown_peg_adt_t ivar_2){
        bool_t result;
        result = (bool_t) false;

        return result;
}

extern ctopdown_funtype_23_t ctopdown_reduce_nat_2(mpz_t ivar_1, mpz_t ivar_2, ctopdown_funtype_24_t ivar_3, ctopdown_array_25_t ivar_4, ctopdown_funtype_27_t ivar_5, ctopdown_funtype_27_t ivar_6, ctopdown_array_25_t ivar_7, ctopdown_array_25_t ivar_8){
        ctopdown_funtype_23_t result;
        ctopdown_closure_28_t cl1355;
        cl1355 = new_ctopdown_closure_28();
        cl1355->fvar_1 = (ctopdown_array_25_t)ivar_7;
        cl1355->fvar_1->count++;
        cl1355->fvar_2 = (ctopdown_array_25_t)ivar_8;
        cl1355->fvar_2->count++;
        cl1355->fvar_3 = (ctopdown_funtype_27_t)ivar_6;
        cl1355->fvar_3->count++;
        cl1355->fvar_4 = (ctopdown_funtype_27_t)ivar_5;
        cl1355->fvar_4->count++;
        cl1355->fvar_5 = (ctopdown_array_25_t)ivar_4;
        cl1355->fvar_5->count++;
        cl1355->fvar_6 = (ctopdown_funtype_24_t)ivar_3;
        cl1355->fvar_6->count++;
        mpz_set(cl1355->fvar_7, ivar_2);
        mpz_set(cl1355->fvar_8, ivar_1);
        release_ctopdown_array_25(ivar_7);
        release_ctopdown_array_25(ivar_8);
        release_ctopdown_funtype_27(ivar_6);
        release_ctopdown_funtype_27(ivar_5);
        release_ctopdown_array_25(ivar_4);
        release_ctopdown_funtype_24(ivar_3);
        release_mpz(ivar_2);
        release_mpz(ivar_1);
        result = (ctopdown_funtype_23_t)cl1355;

        return result;
}

extern ctopdown_funtype_23_t ctopdown_REDUCE_nat_2(ctopdown_funtype_23_t ivar_1, ctopdown_funtype_23_t ivar_2, ctopdown_funtype_30_t ivar_3, ctopdown_funtype_32_t ivar_4, ctopdown_funtype_34_t ivar_5, ctopdown_funtype_34_t ivar_6, ctopdown_funtype_32_t ivar_7, ctopdown_funtype_32_t ivar_8){
        ctopdown_funtype_23_t result;
        ctopdown_closure_35_t cl1357;
        cl1357 = new_ctopdown_closure_35();
        cl1357->fvar_1 = (ctopdown_funtype_32_t)ivar_7;
        cl1357->fvar_1->count++;
        cl1357->fvar_2 = (ctopdown_funtype_32_t)ivar_8;
        cl1357->fvar_2->count++;
        cl1357->fvar_3 = (ctopdown_funtype_34_t)ivar_6;
        cl1357->fvar_3->count++;
        cl1357->fvar_4 = (ctopdown_funtype_34_t)ivar_5;
        cl1357->fvar_4->count++;
        cl1357->fvar_5 = (ctopdown_funtype_32_t)ivar_4;
        cl1357->fvar_5->count++;
        cl1357->fvar_6 = (ctopdown_funtype_30_t)ivar_3;
        cl1357->fvar_6->count++;
        cl1357->fvar_7 = (ctopdown_funtype_23_t)ivar_2;
        cl1357->fvar_7->count++;
        cl1357->fvar_8 = (ctopdown_funtype_23_t)ivar_1;
        cl1357->fvar_8->count++;
        release_ctopdown_funtype_32(ivar_7);
        release_ctopdown_funtype_32(ivar_8);
        release_ctopdown_funtype_34(ivar_6);
        release_ctopdown_funtype_34(ivar_5);
        release_ctopdown_funtype_32(ivar_4);
        release_ctopdown_funtype_30(ivar_3);
        release_ctopdown_funtype_23(ivar_2);
        release_ctopdown_funtype_23(ivar_1);
        result = (ctopdown_funtype_23_t)cl1357;

        return result;
}

extern ctopdown_funtype_36_t ctopdown_reduce_ordinal_2(ordstruct_adt_ordstruct_adt_t ivar_1, ordstruct_adt_ordstruct_adt_t ivar_2, ctopdown_funtype_37_t ivar_3, ctopdown_array_38_t ivar_4, ctopdown_funtype_39_t ivar_5, ctopdown_funtype_39_t ivar_6, ctopdown_array_38_t ivar_7, ctopdown_array_38_t ivar_8){
        ctopdown_funtype_36_t result;
        ctopdown_closure_40_t cl1359;
        cl1359 = new_ctopdown_closure_40();
        cl1359->fvar_1 = (ctopdown_array_38_t)ivar_7;
        cl1359->fvar_1->count++;
        cl1359->fvar_2 = (ctopdown_array_38_t)ivar_8;
        cl1359->fvar_2->count++;
        cl1359->fvar_3 = (ctopdown_funtype_39_t)ivar_6;
        cl1359->fvar_3->count++;
        cl1359->fvar_4 = (ctopdown_funtype_39_t)ivar_5;
        cl1359->fvar_4->count++;
        cl1359->fvar_5 = (ctopdown_array_38_t)ivar_4;
        cl1359->fvar_5->count++;
        cl1359->fvar_6 = (ctopdown_funtype_37_t)ivar_3;
        cl1359->fvar_6->count++;
        cl1359->fvar_7 = (ordstruct_adt_ordstruct_adt_t)ivar_2;
        cl1359->fvar_7->count++;
        cl1359->fvar_8 = (ordstruct_adt_ordstruct_adt_t)ivar_1;
        cl1359->fvar_8->count++;
        release_ctopdown_array_38(ivar_7);
        release_ctopdown_array_38(ivar_8);
        release_ctopdown_funtype_39(ivar_6);
        release_ctopdown_funtype_39(ivar_5);
        release_ctopdown_array_38(ivar_4);
        release_ctopdown_funtype_37(ivar_3);
        release_ordstruct_adt_ordstruct_adt(ivar_2);
        release_ordstruct_adt_ordstruct_adt(ivar_1);
        result = (ctopdown_funtype_36_t)cl1359;

        return result;
}

extern ctopdown_funtype_36_t ctopdown_REDUCE_ordinal_2(ctopdown_funtype_36_t ivar_1, ctopdown_funtype_36_t ivar_2, ctopdown_funtype_41_t ivar_3, ctopdown_funtype_42_t ivar_4, ctopdown_funtype_43_t ivar_5, ctopdown_funtype_43_t ivar_6, ctopdown_funtype_42_t ivar_7, ctopdown_funtype_42_t ivar_8){
        ctopdown_funtype_36_t result;
        ctopdown_closure_44_t cl1361;
        cl1361 = new_ctopdown_closure_44();
        cl1361->fvar_1 = (ctopdown_funtype_42_t)ivar_7;
        cl1361->fvar_1->count++;
        cl1361->fvar_2 = (ctopdown_funtype_42_t)ivar_8;
        cl1361->fvar_2->count++;
        cl1361->fvar_3 = (ctopdown_funtype_43_t)ivar_6;
        cl1361->fvar_3->count++;
        cl1361->fvar_4 = (ctopdown_funtype_43_t)ivar_5;
        cl1361->fvar_4->count++;
        cl1361->fvar_5 = (ctopdown_funtype_42_t)ivar_4;
        cl1361->fvar_5->count++;
        cl1361->fvar_6 = (ctopdown_funtype_41_t)ivar_3;
        cl1361->fvar_6->count++;
        cl1361->fvar_7 = (ctopdown_funtype_36_t)ivar_2;
        cl1361->fvar_7->count++;
        cl1361->fvar_8 = (ctopdown_funtype_36_t)ivar_1;
        cl1361->fvar_8->count++;
        release_ctopdown_funtype_42(ivar_7);
        release_ctopdown_funtype_42(ivar_8);
        release_ctopdown_funtype_43(ivar_6);
        release_ctopdown_funtype_43(ivar_5);
        release_ctopdown_funtype_42(ivar_4);
        release_ctopdown_funtype_41(ivar_3);
        release_ctopdown_funtype_36(ivar_2);
        release_ctopdown_funtype_36(ivar_1);
        result = (ctopdown_funtype_36_t)cl1361;

        return result;
}

extern ctopdown_funtype_45_t ctopdown_good_entryp(mpz_t ivar_1, mpz_t ivar_2){
        ctopdown_funtype_45_t result;
        ctopdown_closure_46_t cl1365;
        cl1365 = new_ctopdown_closure_46();
        mpz_set(cl1365->fvar_1, ivar_2);
        mpz_set(cl1365->fvar_2, ivar_1);
        release_mpz(ivar_2);
        release_mpz(ivar_1);
        result = (ctopdown_funtype_45_t)cl1365;

        return result;
}

extern bool_t ctopdown_loop_or_pendingp(ctopdown_ent_adt_t ivar_1){
        bool_t result;
        bool_t ivar_2;
        ivar_1->count++;
        ivar_2 = (bool_t)r_ctopdown_loopp((ctopdown_ent_adt_t)ivar_1);
        bool_t ivar_3;
        ivar_3 = (bool_t)r_ctopdown_pendingp((ctopdown_ent_adt_t)ivar_1);
        result = ivar_2 || ivar_3;

        return result;
}

extern ctopdown_funtype_51_t ctopdown_good_failp(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3){
        ctopdown_funtype_51_t result;
        ctopdown_closure_53_t cl1398;
        cl1398 = new_ctopdown_closure_53();
        cl1398->fvar_1 = (ctopdown_funtype_52_t)ivar_3;
        cl1398->fvar_1->count++;
        mpz_set(cl1398->fvar_2, ivar_1);
        cl1398->fvar_3 = (ctopdown_lang_spec_t)ivar_2;
        cl1398->fvar_3->count++;
        release_ctopdown_funtype_52(ivar_3);
        release_mpz(ivar_1);
        release_ctopdown_lang_spec(ivar_2);
        result = (ctopdown_funtype_51_t)cl1398;

        return result;
}

extern ctopdown_funtype_51_t ctopdown_good_loopp(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3){
        ctopdown_funtype_51_t result;
        ctopdown_closure_54_t cl1425;
        cl1425 = new_ctopdown_closure_54();
        cl1425->fvar_1 = (ctopdown_lang_spec_t)ivar_2;
        cl1425->fvar_1->count++;
        release_ctopdown_lang_spec(ivar_2);
        result = (ctopdown_funtype_51_t)cl1425;

        return result;
}

extern ctopdown_funtype_56_t ctopdown_good_goodp(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3){
        ctopdown_funtype_56_t result;
        ctopdown_closure_57_t cl1475;
        cl1475 = new_ctopdown_closure_57();
        cl1475->fvar_1 = (ctopdown_funtype_52_t)ivar_3;
        cl1475->fvar_1->count++;
        cl1475->fvar_2 = (ctopdown_lang_spec_t)ivar_2;
        cl1475->fvar_2->count++;
        release_ctopdown_funtype_52(ivar_3);
        release_ctopdown_lang_spec(ivar_2);
        result = (ctopdown_funtype_56_t)cl1475;

        return result;
}

extern bool_t r_ctopdown_emptyp(ctopdown_stackADT_adt_t ivar_1){
        bool_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ctopdown_stackADT_adt_index;
        release_ctopdown_stackADT_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        return result;
}

extern bool_t r_ctopdown_pushp(ctopdown_stackADT_adt_t ivar_1){
        bool_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ctopdown_stackADT_adt_index;
        release_ctopdown_stackADT_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        return result;
}

extern ctopdown_push_t update_ctopdown_stackADT_adt_pos(ctopdown_stackADT_adt_t ivar_1, uint32_t ivar_3){
        ctopdown_push_t result;
        ctopdown_push_t ivar_2;
        //copying to ctopdown_push from ctopdown_stackADT_adt;
        ivar_2 = (ctopdown_push_t)ivar_1;
        ivar_2->count++;
        release_ctopdown_stackADT_adt(ivar_1);
        result = (ctopdown_push_t)update_ctopdown_push_pos(ivar_2, ivar_3);

        return result;
}

extern uint32_t ctopdown_stackADT_adt_pos(ctopdown_stackADT_adt_t ivar_1){
        uint32_t result;
        ctopdown_push_t ivar_2;
        //copying to ctopdown_push from ctopdown_stackADT_adt;
        ivar_2 = (ctopdown_push_t)ivar_1;
        ivar_2->count++;
        release_ctopdown_stackADT_adt(ivar_1);
        result = (uint32_t)ivar_2->pos;
        release_ctopdown_push(ivar_2);

        return result;
}

extern ctopdown_push_t update_ctopdown_stackADT_adt_nt(ctopdown_stackADT_adt_t ivar_1, uint8_t ivar_3){
        ctopdown_push_t result;
        ctopdown_push_t ivar_2;
        //copying to ctopdown_push from ctopdown_stackADT_adt;
        ivar_2 = (ctopdown_push_t)ivar_1;
        ivar_2->count++;
        release_ctopdown_stackADT_adt(ivar_1);
        result = (ctopdown_push_t)update_ctopdown_push_nt(ivar_2, ivar_3);

        return result;
}

extern uint8_t ctopdown_stackADT_adt_nt(ctopdown_stackADT_adt_t ivar_1){
        uint8_t result;
        ctopdown_push_t ivar_2;
        //copying to ctopdown_push from ctopdown_stackADT_adt;
        ivar_2 = (ctopdown_push_t)ivar_1;
        ivar_2->count++;
        release_ctopdown_stackADT_adt(ivar_1);
        result = (uint8_t)ivar_2->nt;
        release_ctopdown_push(ivar_2);

        return result;
}

extern ctopdown_push_t update_ctopdown_stackADT_adt_rest(ctopdown_stackADT_adt_t ivar_1, ctopdown_stackADT_adt_t ivar_3){
        ctopdown_push_t result;
        ctopdown_push_t ivar_2;
        //copying to ctopdown_push from ctopdown_stackADT_adt;
        ivar_2 = (ctopdown_push_t)ivar_1;
        ivar_2->count++;
        release_ctopdown_stackADT_adt(ivar_1);
        result = (ctopdown_push_t)update_ctopdown_push_rest(ivar_2, ivar_3);

        return result;
}

extern ctopdown_stackADT_adt_t ctopdown_stackADT_adt_rest(ctopdown_stackADT_adt_t ivar_1){
        ctopdown_stackADT_adt_t result;
        ctopdown_push_t ivar_2;
        //copying to ctopdown_push from ctopdown_stackADT_adt;
        ivar_2 = (ctopdown_push_t)ivar_1;
        ivar_2->count++;
        release_ctopdown_stackADT_adt(ivar_1);
        result = (ctopdown_stackADT_adt_t)ivar_2->rest;
        result->count++;
        release_ctopdown_push(ivar_2);

        return result;
}

extern ctopdown_stackADT_adt_t ctopdown_empty(void){
        ctopdown_stackADT_adt_t result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        ctopdown_stackADT_adt_t ivar_2;
        ivar_2 = new_ctopdown_stackADT_adt();;
        ivar_2->ctopdown_stackADT_adt_index = (uint8_t)ivar_1;
        //copying to ctopdown_stackADT_adt from ctopdown_stackADT_adt;
        result = (ctopdown_stackADT_adt_t)ivar_2;
        result->count++;
        release_ctopdown_stackADT_adt(ivar_2);

        return result;
}

extern ctopdown_stackADT_adt_t ctopdown_push(uint32_t ivar_2, uint8_t ivar_3, ctopdown_stackADT_adt_t ivar_4){
        ctopdown_stackADT_adt_t result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        ctopdown_push_t ivar_5;
        ivar_5 = new_ctopdown_push();;
        ivar_5->ctopdown_stackADT_adt_index = (uint8_t)ivar_1;
        ivar_5->pos = (uint32_t)ivar_2;
        ivar_5->nt = (uint8_t)ivar_3;
        ivar_5->rest = (ctopdown_stackADT_adt_t)ivar_4;
        //copying to ctopdown_stackADT_adt from ctopdown_push;
        result = (ctopdown_stackADT_adt_t)ivar_5;
        result->count++;
        release_ctopdown_push(ivar_5);

        return result;
}

extern uint8_t ctopdown_ord_3(ctopdown_stackADT_adt_t ivar_1){
        uint8_t result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)r_ctopdown_emptyp((ctopdown_stackADT_adt_t)ivar_1);
        if (ivar_3){ 
             release_ctopdown_stackADT_adt(ivar_1);
             result = (uint8_t)0;
} else {
        
             result = (uint8_t)1;
};

        return result;
}

extern bool_t ctopdown_subterm_3(ctopdown_stackADT_adt_t ivar_1, ctopdown_stackADT_adt_t ivar_2){
        bool_t result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_2->count++;
        ivar_3 = (bool_t) equal_ctopdown_stackADT_adt(ivar_1, ivar_2);
        bool_t ivar_4;
        bool_t ivar_9;
        ivar_2->count++;
        ivar_9 = (bool_t)r_ctopdown_emptyp((ctopdown_stackADT_adt_t)ivar_2);
        if (ivar_9){ 
             release_ctopdown_stackADT_adt(ivar_1);
             release_ctopdown_stackADT_adt(ivar_2);
             ivar_4 = (bool_t) false;
} else {
        
             ctopdown_stackADT_adt_t ivar_15;
             ctopdown_stackADT_adt_t ivar_23;
             ivar_23 = (ctopdown_stackADT_adt_t)ctopdown_stackADT_adt_rest((ctopdown_stackADT_adt_t)ivar_2);
             //copying to ctopdown_stackADT_adt from ctopdown_stackADT_adt;
             ivar_15 = (ctopdown_stackADT_adt_t)ivar_23;
             ivar_15->count++;
             release_ctopdown_stackADT_adt(ivar_23);
             ivar_4 = (bool_t)ctopdown_subterm_3((ctopdown_stackADT_adt_t)ivar_1, (ctopdown_stackADT_adt_t)ivar_15);
};
        result = ivar_3 || ivar_4;

        return result;
}

extern bool_t ctopdown_doublelessp_3(ctopdown_stackADT_adt_t ivar_1, ctopdown_stackADT_adt_t ivar_2){
        bool_t result;
        bool_t ivar_4;
        ivar_2->count++;
        ivar_4 = (bool_t)r_ctopdown_emptyp((ctopdown_stackADT_adt_t)ivar_2);
        if (ivar_4){ 
             release_ctopdown_stackADT_adt(ivar_1);
             release_ctopdown_stackADT_adt(ivar_2);
             result = (bool_t) false;
} else {
        
             ctopdown_stackADT_adt_t ivar_10;
             ctopdown_stackADT_adt_t ivar_18;
             ivar_18 = (ctopdown_stackADT_adt_t)ctopdown_stackADT_adt_rest((ctopdown_stackADT_adt_t)ivar_2);
             //copying to ctopdown_stackADT_adt from ctopdown_stackADT_adt;
             ivar_10 = (ctopdown_stackADT_adt_t)ivar_18;
             ivar_10->count++;
             release_ctopdown_stackADT_adt(ivar_18);
             bool_t ivar_24;
             ivar_1->count++;
             ivar_10->count++;
             ivar_24 = (bool_t) equal_ctopdown_stackADT_adt(ivar_1, ivar_10);
             bool_t ivar_25;
             ivar_25 = (bool_t)ctopdown_doublelessp_3((ctopdown_stackADT_adt_t)ivar_1, (ctopdown_stackADT_adt_t)ivar_10);
             result = ivar_24 || ivar_25;
};

        return result;
}

extern ctopdown_funtype_61_t ctopdown_reduce_nat_3(mpz_t ivar_1, ctopdown_funtype_63_t ivar_2){
        ctopdown_funtype_61_t result;
        ctopdown_closure_64_t cl1480;
        cl1480 = new_ctopdown_closure_64();
        cl1480->fvar_1 = (ctopdown_funtype_63_t)ivar_2;
        cl1480->fvar_1->count++;
        mpz_set(cl1480->fvar_2, ivar_1);
        release_ctopdown_funtype_63(ivar_2);
        release_mpz(ivar_1);
        result = (ctopdown_funtype_61_t)cl1480;

        return result;
}

extern ctopdown_funtype_61_t ctopdown_REDUCE_nat_3(ctopdown_funtype_61_t ivar_1, ctopdown_funtype_66_t ivar_2){
        ctopdown_funtype_61_t result;
        ctopdown_closure_67_t cl1482;
        cl1482 = new_ctopdown_closure_67();
        cl1482->fvar_1 = (ctopdown_funtype_66_t)ivar_2;
        cl1482->fvar_1->count++;
        cl1482->fvar_2 = (ctopdown_funtype_61_t)ivar_1;
        cl1482->fvar_2->count++;
        release_ctopdown_funtype_66(ivar_2);
        release_ctopdown_funtype_61(ivar_1);
        result = (ctopdown_funtype_61_t)cl1482;

        return result;
}

extern ctopdown_funtype_68_t ctopdown_reduce_ordinal_3(ordstruct_adt_ordstruct_adt_t ivar_1, ctopdown_funtype_70_t ivar_2){
        ctopdown_funtype_68_t result;
        ctopdown_closure_71_t cl1484;
        cl1484 = new_ctopdown_closure_71();
        cl1484->fvar_1 = (ctopdown_funtype_70_t)ivar_2;
        cl1484->fvar_1->count++;
        cl1484->fvar_2 = (ordstruct_adt_ordstruct_adt_t)ivar_1;
        cl1484->fvar_2->count++;
        release_ctopdown_funtype_70(ivar_2);
        release_ordstruct_adt_ordstruct_adt(ivar_1);
        result = (ctopdown_funtype_68_t)cl1484;

        return result;
}

extern ctopdown_funtype_68_t ctopdown_REDUCE_ordinal_3(ctopdown_funtype_68_t ivar_1, ctopdown_funtype_73_t ivar_2){
        ctopdown_funtype_68_t result;
        ctopdown_closure_74_t cl1486;
        cl1486 = new_ctopdown_closure_74();
        cl1486->fvar_1 = (ctopdown_funtype_73_t)ivar_2;
        cl1486->fvar_1->count++;
        cl1486->fvar_2 = (ctopdown_funtype_68_t)ivar_1;
        cl1486->fvar_2->count++;
        release_ctopdown_funtype_73(ivar_2);
        release_ctopdown_funtype_68(ivar_1);
        result = (ctopdown_funtype_68_t)cl1486;

        return result;
}

extern bool_t ctopdown_instack(uint32_t ivar_1, uint8_t ivar_2, ctopdown_stackADT_adt_t ivar_3){
        bool_t result;
        bool_t ivar_5;
        ivar_3->count++;
        ivar_5 = (bool_t)r_ctopdown_emptyp((ctopdown_stackADT_adt_t)ivar_3);
        if (ivar_5){ 
             release_ctopdown_stackADT_adt(ivar_3);
             release_ctopdown_stackADT_adt(ivar_3);
             result = (bool_t) false;
} else {
        
             uint32_t ivar_9;
             ivar_3->count++;
             ivar_9 = (uint32_t)ctopdown_stackADT_adt_pos((ctopdown_stackADT_adt_t)ivar_3);
             uint8_t ivar_10;
             ivar_3->count++;
             ivar_10 = (uint8_t)ctopdown_stackADT_adt_nt((ctopdown_stackADT_adt_t)ivar_3);
             bool_t ivar_21;
             bool_t ivar_23;
             ivar_23 = (ivar_9 == ivar_1);
             bool_t ivar_24;
             ivar_24 = (ivar_10 == ivar_2);
             ivar_21 = ivar_23 && ivar_24;
             bool_t ivar_22;
             ivar_22 = (bool_t)ctopdown_instack((uint32_t)ivar_1, (uint8_t)ivar_2, (ctopdown_stackADT_adt_t)ivar_3);
             result = ivar_21 || ivar_22;
};

        return result;
}

extern ctopdown_funtype_75_t ctopdown_good_tscaffoldp(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3, ctopdown_stackADT_adt_t ivar_4){
        ctopdown_funtype_75_t result;
        ctopdown_closure_76_t cl1492;
        cl1492 = new_ctopdown_closure_76();
        result = (ctopdown_funtype_75_t)cl1492;

        return result;
}

extern ctopdown_funtype_75_t ctopdown_tdstack_scaffoldp(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3, mpz_t ivar_4, ctopdown_stackADT_adt_t ivar_5){
        ctopdown_funtype_75_t result;
        ctopdown_closure_77_t cl1498;
        cl1498 = new_ctopdown_closure_77();
        result = (ctopdown_funtype_75_t)cl1498;

        return result;
}

extern ctopdown_funtype_79_t ctopdown_fine_tdstack_scaffoldp(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3){
        ctopdown_funtype_79_t result;
        ctopdown_closure_80_t cl1526;
        cl1526 = new_ctopdown_closure_80();
        mpz_set(cl1526->fvar_1, ivar_1);
        cl1526->fvar_2 = (ctopdown_lang_spec_t)ivar_2;
        cl1526->fvar_2->count++;
        cl1526->fvar_3 = (ctopdown_funtype_52_t)ivar_3;
        cl1526->fvar_3->count++;
        release_mpz(ivar_1);
        release_ctopdown_lang_spec(ivar_2);
        release_ctopdown_funtype_52(ivar_3);
        result = (ctopdown_funtype_79_t)cl1526;

        return result;
}

extern ctopdown_funtype_85_t ctopdown_putstack(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3, mpz_t ivar_4, uint8_t ivar_5){
        ctopdown_funtype_85_t result;
        ctopdown_closure_86_t cl1544;
        cl1544 = new_ctopdown_closure_86();
        mpz_set(cl1544->fvar_1, ivar_4);
        release_mpz(ivar_4);
        result = (ctopdown_funtype_85_t)cl1544;

        return result;
}

extern ctopdown_funtype_88_t ctopdown_step(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3, mpz_t ivar_4, uint8_t ivar_5){
        ctopdown_funtype_88_t result;
        ctopdown_closure_89_t cl1726;
        cl1726 = new_ctopdown_closure_89();
        cl1726->fvar_1 = (uint8_t)ivar_5;
        mpz_set(cl1726->fvar_2, ivar_4);
        cl1726->fvar_3 = (ctopdown_funtype_52_t)ivar_3;
        cl1726->fvar_3->count++;
        cl1726->fvar_4 = (ctopdown_lang_spec_t)ivar_2;
        cl1726->fvar_4->count++;
        mpz_set(cl1726->fvar_5, ivar_1);
        result = (ctopdown_funtype_88_t)cl1726;

        return result;
}

extern ctopdown_funtype_92_t ctopdown_parse(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3, mpz_t ivar_4, uint8_t ivar_5){
        ctopdown_funtype_92_t result;
        ctopdown_closure_93_t cl1765;
        cl1765 = new_ctopdown_closure_93();
        cl1765->fvar_1 = (uint8_t)ivar_5;
        mpz_set(cl1765->fvar_2, ivar_4);
        cl1765->fvar_3 = (ctopdown_funtype_52_t)ivar_3;
        cl1765->fvar_3->count++;
        cl1765->fvar_4 = (ctopdown_lang_spec_t)ivar_2;
        cl1765->fvar_4->count++;
        mpz_set(cl1765->fvar_5, ivar_1);
        result = (ctopdown_funtype_92_t)cl1765;

        return result;
}

extern ctopdown_ent_adt_t ctopdown_doparse(mpz_t ivar_1, ctopdown_lang_spec_t ivar_2, ctopdown_funtype_52_t ivar_3, uint8_t ivar_4){
        ctopdown_ent_adt_t result;
        ctopdown_record_91_t ivar_64;
        ctopdown_funtype_49_t ivar_13;
        ctopdown_closure_94_t cl1784;
        cl1784 = new_ctopdown_closure_94();
        ivar_13 = (ctopdown_funtype_49_t)cl1784;
        ctopdown_stackADT_adt_t ivar_14;
        ivar_14 = (ctopdown_stackADT_adt_t)ctopdown_empty();
        ivar_14->count++;
        ivar_64 = new_ctopdown_record_91();;
        ivar_64->scaf = (ctopdown_funtype_49_t)ivar_13;
        ivar_64->stack = (ctopdown_stackADT_adt_t)ivar_14;
        /* St */ ctopdown_record_82_t ivar_5;
        //copying to ctopdown_record_82 from ctopdown_record_91;
        ivar_5 = new_ctopdown_record_82();
        ivar_5->stack = (ctopdown_stackADT_adt_t)ivar_64->scaf;
        ivar_5->stack->count++;
        ivar_5->scaf = (ctopdown_funtype_49_t)ivar_64->stack;
        ivar_5->scaf->count++;
        release_ctopdown_record_91(ivar_64);
        ctopdown_array_48_t ivar_17;
        ctopdown_funtype_49_t ivar_21;
        ctopdown_record_82_t ivar_57;
        ctopdown_funtype_88_t ivar_36;
        uint8_t ivar_55;
        ivar_55 = (uint8_t)0;
        mpz_ptr_t ivar_52;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_52, ivar_55);
        ctopdown_funtype_88_t ivar_48;
        ivar_48 = (ctopdown_funtype_88_t)ctopdown_parse(ivar_1, (ctopdown_lang_spec_t)ivar_2, (ctopdown_funtype_52_t)ivar_3, ivar_52, (uint8_t)ivar_4);
        //copying to ctopdown_funtype_88 from ctopdown_funtype_88;
        ivar_36 = (ctopdown_funtype_88_t)ivar_48;
        ivar_36->count++;
        release_ctopdown_funtype_88(ivar_48);
        ctopdown_record_82_t ivar_29;
        ivar_29 = (ctopdown_record_82_t)ivar_36->ftbl->fptr(ivar_36, ivar_5);
        ivar_36->ftbl->rptr(ivar_36);
        //copying to ctopdown_record_82 from ctopdown_record_82;
        ivar_57 = (ctopdown_record_82_t)ivar_29;
        ivar_57->count++;
        release_ctopdown_record_82(ivar_29);
        ivar_21 = (ctopdown_funtype_49_t)ivar_57->scaf;
        ivar_21->count++;
        release_ctopdown_record_82(ivar_57);
        uint8_t ivar_62;
        ivar_62 = (uint8_t)0;
        mpz_ptr_t ivar_61;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_61, ivar_62);
        ctopdown_array_48_t ivar_19;
        ivar_19 = (ctopdown_array_48_t)ivar_21->ftbl->fptr(ivar_21, ivar_61);
        ivar_21->ftbl->rptr(ivar_21);
        //copying to ctopdown_array_48 from ctopdown_array_48;
        ivar_17 = (ctopdown_array_48_t)ivar_19;
        ivar_17->count++;
        release_ctopdown_array_48(ivar_19);
        ctopdown_ent_adt_t ivar_16;
        ivar_16 = (ctopdown_ent_adt_t)ivar_17->elems[ivar_4];
        ivar_16->count++;
        release_ctopdown_array_48(ivar_17);
        //copying to ctopdown_ent_adt from ctopdown_ent_adt;
        result = (ctopdown_ent_adt_t)ivar_16;
        result->count++;
        release_ctopdown_ent_adt(ivar_16);

        return result;
}