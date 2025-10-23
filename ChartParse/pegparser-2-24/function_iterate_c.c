//Code generated using pvs2ir2c
#include "function_iterate_c.h"

void release_function_iterate_funtype_0(function_iterate_funtype_0_t x, type_actual_t function_iterate__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

function_iterate_funtype_0_t copy_function_iterate_funtype_0(function_iterate_funtype_0_t x){return x->ftbl->cptr(x);}

bool_t equal_function_iterate_funtype_0(function_iterate_funtype_0_t x, function_iterate_funtype_0_t y, type_actual_t function_iterate__T){
        return false;}

char* json_function_iterate_funtype_0(function_iterate_funtype_0_t x, type_actual_t function_iterate__T){char * result = safe_malloc(36); sprintf(result, "%s", "\"function_iterate_funtype_0\""); return result;}


function_iterate__T_t f_function_iterate_closure_1(struct function_iterate_closure_1_s * closure, function_iterate__T_t bvar){
        function_iterate__T_t result = h_function_iterate_closure_1(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

function_iterate__T_t m_function_iterate_closure_1(struct function_iterate_closure_1_s * closure, function_iterate__T_t bvar){
        return h_function_iterate_closure_1(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

function_iterate__T_t h_function_iterate_closure_1(function_iterate__T_t ivar_5, function_iterate_funtype_0_t ivar_1, type_actual_t function_iterate__T, mpz_ptr_t ivar_3){
        function_iterate__T_t result;
        bool_t ivar_6;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)0;
        int64_t tmp1811 = mpz_cmp_ui(ivar_3, ivar_8);
        ivar_6 = (tmp1811 == 0);
        if (ivar_6){ 
             //copying to function_iterate__T from function_iterate__T;
             result = (function_iterate__T_t)ivar_5;
             function_iterate__T->release_ptr(ivar_5, function_iterate__T);
} else {
        
             function_iterate__T_t ivar_30;
             function_iterate_funtype_0_t ivar_14;
             /* T */ type_actual_t ivar_22;
             ivar_22 = (type_actual_t)function_iterate__T;
             mpz_ptr_t ivar_25;
             uint8_t ivar_19;
             ivar_19 = (uint8_t)1;
             mpz_mk_sub_ui(ivar_25, ivar_3, (uint64_t)ivar_19);
             ivar_1->count++;
             ivar_14 = (function_iterate_funtype_0_t)function_iterate__iterate((type_actual_t)ivar_22, (function_iterate_funtype_0_t)ivar_1, ivar_25);
             ivar_30 = (function_iterate__T_t)ivar_14->ftbl->fptr(ivar_14, ivar_5);
             ivar_14->ftbl->rptr(ivar_14);
             result = (function_iterate__T_t)ivar_1->ftbl->fptr(ivar_1, ivar_30);
};

        return result;
}

function_iterate_closure_1_t new_function_iterate_closure_1(void){
        static struct function_iterate_funtype_0_ftbl_s ftbl = {.fptr = (function_iterate__T_t (*)(function_iterate_funtype_0_t, function_iterate__T_t))&f_function_iterate_closure_1, .mptr = (function_iterate__T_t (*)(function_iterate_funtype_0_t, function_iterate__T_t))&m_function_iterate_closure_1, .rptr =  (void (*)(function_iterate_funtype_0_t))&release_function_iterate_closure_1, .cptr = (function_iterate_funtype_0_t (*)(function_iterate_funtype_0_t))&copy_function_iterate_closure_1};
        function_iterate_closure_1_t tmp = (function_iterate_closure_1_t) safe_malloc(sizeof(struct function_iterate_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_3);
        return tmp;}

void release_function_iterate_closure_1(function_iterate_funtype_0_t closure, type_actual_t function_iterate__T){
        function_iterate_closure_1_t x = (function_iterate_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
         release_function_iterate_funtype_0(x->fvar_1, function_iterate__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

function_iterate_closure_1_t copy_function_iterate_closure_1(function_iterate_closure_1_t x){
        function_iterate_closure_1_t y = new_function_iterate_closure_1();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        mpz_set(y->fvar_3, x->fvar_3);
        if (x->htbl != NULL){
            function_iterate_funtype_0_htbl_t new_htbl = (function_iterate_funtype_0_htbl_t) safe_malloc(sizeof(struct function_iterate_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            function_iterate_funtype_0_hashentry_t * new_data = (function_iterate_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct function_iterate_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct function_iterate_funtype_0_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

function_iterate_funtype_0_t function_iterate__iterate(type_actual_t function_iterate__T, function_iterate_funtype_0_t ivar_1, mpz_ptr_t ivar_3){
        function_iterate_funtype_0_t  result;
        function_iterate_closure_1_t cl1812;
        cl1812 = new_function_iterate_closure_1();
        cl1812->fvar_1 = (function_iterate_funtype_0_t)ivar_1;
        if (cl1812->fvar_1 != NULL) cl1812->fvar_1->count++;
        cl1812->fvar_2 = (type_actual_t)function_iterate__T;
        mpz_set(cl1812->fvar_3, ivar_3);
        release_function_iterate_funtype_0(ivar_1, function_iterate__T);
        result = (function_iterate_funtype_0_t)cl1812;

        
        return result;
}