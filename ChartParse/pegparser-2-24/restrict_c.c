//Code generated using pvs2ir2c
#include "restrict_c.h"

void release_restrict_funtype_0(restrict_funtype_0_t x, type_actual_t restrict__T, type_actual_t restrict__S, type_actual_t restrict__R){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

restrict_funtype_0_t copy_restrict_funtype_0(restrict_funtype_0_t x){return x->ftbl->cptr(x);}

bool_t equal_restrict_funtype_0(restrict_funtype_0_t x, restrict_funtype_0_t y, type_actual_t restrict__T, type_actual_t restrict__S, type_actual_t restrict__R){
        return false;}

char* json_restrict_funtype_0(restrict_funtype_0_t x, type_actual_t restrict__T, type_actual_t restrict__S, type_actual_t restrict__R){char * result = safe_malloc(28); sprintf(result, "%s", "\"restrict_funtype_0\""); return result;}

void release_restrict_funtype_1(restrict_funtype_1_t x, type_actual_t restrict__T, type_actual_t restrict__S, type_actual_t restrict__R){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

restrict_funtype_1_t copy_restrict_funtype_1(restrict_funtype_1_t x){return x->ftbl->cptr(x);}

bool_t equal_restrict_funtype_1(restrict_funtype_1_t x, restrict_funtype_1_t y, type_actual_t restrict__T, type_actual_t restrict__S, type_actual_t restrict__R){
        return false;}

char* json_restrict_funtype_1(restrict_funtype_1_t x, type_actual_t restrict__T, type_actual_t restrict__S, type_actual_t restrict__R){char * result = safe_malloc(28); sprintf(result, "%s", "\"restrict_funtype_1\""); return result;}


restrict__R_t f_restrict_closure_2(struct restrict_closure_2_s * closure, restrict__S_t bvar){
        restrict__R_t result = h_restrict_closure_2(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

restrict__R_t m_restrict_closure_2(struct restrict_closure_2_s * closure, restrict__S_t bvar){
        return h_restrict_closure_2(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

restrict__R_t h_restrict_closure_2(restrict__S_t ivar_4, type_actual_t restrict__T, type_actual_t restrict__R, restrict_funtype_1_t ivar_1, type_actual_t restrict__S){
        restrict__R_t result;
        result = (restrict__R_t)ivar_1->ftbl->fptr(ivar_1, ivar_4);

        return result;
}

restrict_closure_2_t new_restrict_closure_2(void){
        static struct restrict_funtype_0_ftbl_s ftbl = {.fptr = (restrict__R_t (*)(restrict_funtype_0_t, restrict__S_t))&f_restrict_closure_2, .mptr = (restrict__R_t (*)(restrict_funtype_0_t, restrict__S_t))&m_restrict_closure_2, .rptr =  (void (*)(restrict_funtype_0_t))&release_restrict_closure_2, .cptr = (restrict_funtype_0_t (*)(restrict_funtype_0_t))&copy_restrict_closure_2};
        restrict_closure_2_t tmp = (restrict_closure_2_t) safe_malloc(sizeof(struct restrict_closure_2_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_restrict_closure_2(restrict_funtype_0_t closure, type_actual_t restrict__T, type_actual_t restrict__S, type_actual_t restrict__R){
        restrict_closure_2_t x = (restrict_closure_2_t)closure;
        x->count--;
        if (x->count <= 0){
         release_restrict_funtype_1(x->fvar_3, restrict__T, restrict__S, restrict__R);
        //printf("\nFreeing\n");
        safe_free(x);}}

restrict_closure_2_t copy_restrict_closure_2(restrict_closure_2_t x){
        restrict_closure_2_t y = new_restrict_closure_2();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = (type_actual_t)x->fvar_4;
        if (x->htbl != NULL){
            restrict_funtype_0_htbl_t new_htbl = (restrict_funtype_0_htbl_t) safe_malloc(sizeof(struct restrict_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            restrict_funtype_0_hashentry_t * new_data = (restrict_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct restrict_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct restrict_funtype_0_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

restrict_funtype_0_t restrict__restrict(type_actual_t restrict__T, type_actual_t restrict__S, type_actual_t restrict__R, restrict_funtype_1_t ivar_1){
        restrict_funtype_0_t  result;
        restrict_closure_2_t cl1765;
        cl1765 = new_restrict_closure_2();
        cl1765->fvar_1 = (type_actual_t)restrict__T;
        cl1765->fvar_2 = (type_actual_t)restrict__R;
        cl1765->fvar_3 = (restrict_funtype_1_t)ivar_1;
        if (cl1765->fvar_3 != NULL) cl1765->fvar_3->count++;
        cl1765->fvar_4 = (type_actual_t)restrict__S;
        release_restrict_funtype_1(ivar_1, restrict__T, restrict__S, restrict__R);
        result = (restrict_funtype_0_t)cl1765;

        
        return result;
}