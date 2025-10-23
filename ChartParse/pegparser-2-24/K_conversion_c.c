//Code generated using pvs2ir2c
#include "K_conversion_c.h"

void release_K_conversion_funtype_0(K_conversion_funtype_0_t x, type_actual_t K_conversion__T1, type_actual_t K_conversion__T2){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

K_conversion_funtype_0_t copy_K_conversion_funtype_0(K_conversion_funtype_0_t x){return x->ftbl->cptr(x);}

bool_t equal_K_conversion_funtype_0(K_conversion_funtype_0_t x, K_conversion_funtype_0_t y, type_actual_t K_conversion__T1, type_actual_t K_conversion__T2){
        return false;}

char* json_K_conversion_funtype_0(K_conversion_funtype_0_t x, type_actual_t K_conversion__T1, type_actual_t K_conversion__T2){char * result = safe_malloc(32); sprintf(result, "%s", "\"K_conversion_funtype_0\""); return result;}


K_conversion__T1_t f_K_conversion_closure_1(struct K_conversion_closure_1_s * closure, K_conversion__T2_t bvar){
        K_conversion__T1_t result = h_K_conversion_closure_1(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

K_conversion__T1_t m_K_conversion_closure_1(struct K_conversion_closure_1_s * closure, K_conversion__T2_t bvar){
        return h_K_conversion_closure_1(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

K_conversion__T1_t h_K_conversion_closure_1(K_conversion__T2_t ivar_3, type_actual_t K_conversion__T2, type_actual_t K_conversion__T1, K_conversion__T1_t ivar_1){
        K_conversion__T1_t result;
        //copying to K_conversion__T1 from K_conversion__T1;
        result = (K_conversion__T1_t)ivar_1;

        return result;
}

K_conversion_closure_1_t new_K_conversion_closure_1(void){
        static struct K_conversion_funtype_0_ftbl_s ftbl = {.fptr = (K_conversion__T1_t (*)(K_conversion_funtype_0_t, K_conversion__T2_t))&f_K_conversion_closure_1, .mptr = (K_conversion__T1_t (*)(K_conversion_funtype_0_t, K_conversion__T2_t))&m_K_conversion_closure_1, .rptr =  (void (*)(K_conversion_funtype_0_t))&release_K_conversion_closure_1, .cptr = (K_conversion_funtype_0_t (*)(K_conversion_funtype_0_t))&copy_K_conversion_closure_1};
        K_conversion_closure_1_t tmp = (K_conversion_closure_1_t) safe_malloc(sizeof(struct K_conversion_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_K_conversion_closure_1(K_conversion_funtype_0_t closure, type_actual_t K_conversion__T1, type_actual_t K_conversion__T2){
        K_conversion_closure_1_t x = (K_conversion_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

K_conversion_closure_1_t copy_K_conversion_closure_1(K_conversion_closure_1_t x){
        K_conversion_closure_1_t y = new_K_conversion_closure_1();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            K_conversion_funtype_0_htbl_t new_htbl = (K_conversion_funtype_0_htbl_t) safe_malloc(sizeof(struct K_conversion_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            K_conversion_funtype_0_hashentry_t * new_data = (K_conversion_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct K_conversion_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct K_conversion_funtype_0_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

K_conversion_funtype_0_t K_conversion__K_conversion(type_actual_t K_conversion__T1, type_actual_t K_conversion__T2, K_conversion__T1_t ivar_1){
        K_conversion_funtype_0_t  result;
        K_conversion_closure_1_t cl1766;
        cl1766 = new_K_conversion_closure_1();
        cl1766->fvar_1 = (type_actual_t)K_conversion__T2;
        cl1766->fvar_2 = (type_actual_t)K_conversion__T1;
        cl1766->fvar_3 = (K_conversion__T1_t)ivar_1;
        K_conversion__T1->release_ptr(ivar_1, K_conversion__T1);
        result = (K_conversion_funtype_0_t)cl1766;

        
        return result;
}