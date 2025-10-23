//Code generated using pvs2ir2c
#include "arrayCount_c.h"

void release_arrayCount_funtype_0(arrayCount_funtype_0_t x, type_actual_t arrayCount__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arrayCount_funtype_0_t copy_arrayCount_funtype_0(arrayCount_funtype_0_t x){return x->ftbl->cptr(x);}

bool_t equal_arrayCount_funtype_0(arrayCount_funtype_0_t x, arrayCount_funtype_0_t y, type_actual_t arrayCount__T){
        return false;}

char* json_arrayCount_funtype_0(arrayCount_funtype_0_t x, type_actual_t arrayCount__T){char * result = safe_malloc(30); sprintf(result, "%s", "\"arrayCount_funtype_0\""); return result;}


arrayCount_array_1_t new_arrayCount_array_1(uint32_t size){
        arrayCount_array_1_t tmp = (arrayCount_array_1_t) safe_malloc(sizeof(struct arrayCount_array_1_s) + (size * sizeof(arrayCount__T_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_arrayCount_array_1(arrayCount_array_1_t x, type_actual_t arrayCount__T){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){arrayCount__T->release_ptr(x->elems[i], arrayCount__T);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_arrayCount_array_1_ptr(pointer_t x, type_actual_t T){
        actual_arrayCount_array_1_t actual = (actual_arrayCount_array_1_t)T;
        type_actual_t arrayCount__T = actual->arrayCount__T;
        release_arrayCount_array_1((arrayCount_array_1_t)x, arrayCount__T);
}

arrayCount_array_1_t copy_arrayCount_array_1(arrayCount_array_1_t x){
        arrayCount_array_1_t tmp = new_arrayCount_array_1(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_arrayCount_array_1(arrayCount_array_1_t x, arrayCount_array_1_t y, type_actual_t arrayCount__T){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = arrayCount__T->equal_ptr(x->elems[i], y->elems[i], arrayCount__T); i++;};
        return tmp;}

char * json_arrayCount_array_1(arrayCount_array_1_t x, type_actual_t arrayCount__T){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = arrayCount__T->json_ptr(x->elems[i], arrayCount__T);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_arrayCount_array_1_ptr(pointer_t x, pointer_t y, type_actual_t T){
        actual_arrayCount_array_1_t actual = (actual_arrayCount_array_1_t)T;
        type_actual_t arrayCount__T = actual->arrayCount__T;
        return equal_arrayCount_array_1((arrayCount_array_1_t)x, (arrayCount_array_1_t)y, arrayCount__T);
}

char * json_arrayCount_array_1_ptr(pointer_t x, type_actual_t T){
        actual_arrayCount_array_1_t actual = (actual_arrayCount_array_1_t)T;
        type_actual_t arrayCount__T = actual->arrayCount__T;
        return json_arrayCount_array_1((arrayCount_array_1_t)x, arrayCount__T);
}

actual_arrayCount_array_1_t actual_arrayCount_array_1(type_actual_t arrayCount__T){
        actual_arrayCount_array_1_t new = (actual_arrayCount_array_1_t)safe_malloc(sizeof(struct actual_arrayCount_array_1_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arrayCount_array_1_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arrayCount_array_1_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_arrayCount_array_1_ptr);
 

        new->arrayCount__T = arrayCount__T;
 
        return new;
 };

arrayCount_array_1_t update_arrayCount_array_1(arrayCount_array_1_t x, uint32_t i, arrayCount__T_t v, type_actual_t arrayCount__T){
         arrayCount_array_1_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_arrayCount_array_1(x);
                      x->count--;};
        arrayCount__T_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){arrayCount__T->release_ptr(yelems[i], arrayCount__T);};
         yelems[i] = v;
         return y;}

arrayCount_array_1_t upgrade_arrayCount_array_1(arrayCount_array_1_t x, uint32_t i, arrayCount__T_t v, type_actual_t arrayCount__T){
         arrayCount_array_1_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct arrayCount_array_1_s) + (newmax * sizeof(arrayCount__T_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_arrayCount_array_1(x, arrayCount__T);} else {y = copy_arrayCount_array_1(x);
                      x->count--;};
        arrayCount__T_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){arrayCount__T->release_ptr(yelems[i], arrayCount__T);};
         yelems[i] = v;
         return y;}



void release_arrayCount_funtype_2(arrayCount_funtype_2_t x, type_actual_t arrayCount__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arrayCount_funtype_2_t copy_arrayCount_funtype_2(arrayCount_funtype_2_t x){return x->ftbl->cptr(x);}

bool_t equal_arrayCount_funtype_2(arrayCount_funtype_2_t x, arrayCount_funtype_2_t y, type_actual_t arrayCount__T){
        return false;}

char* json_arrayCount_funtype_2(arrayCount_funtype_2_t x, type_actual_t arrayCount__T){char * result = safe_malloc(30); sprintf(result, "%s", "\"arrayCount_funtype_2\""); return result;}

void release_arrayCount_funtype_3(arrayCount_funtype_3_t x, type_actual_t arrayCount__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arrayCount_funtype_3_t copy_arrayCount_funtype_3(arrayCount_funtype_3_t x){return x->ftbl->cptr(x);}

bool_t equal_arrayCount_funtype_3(arrayCount_funtype_3_t x, arrayCount_funtype_3_t y, type_actual_t arrayCount__T){
        return false;}

char* json_arrayCount_funtype_3(arrayCount_funtype_3_t x, type_actual_t arrayCount__T){char * result = safe_malloc(30); sprintf(result, "%s", "\"arrayCount_funtype_3\""); return result;}


arrayCount_funtype_2_t f_arrayCount_closure_4(struct arrayCount_closure_4_s * closure, arrayCount_funtype_0_t bvar){
        arrayCount_funtype_2_t result = h_arrayCount_closure_4(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

arrayCount_funtype_2_t m_arrayCount_closure_4(struct arrayCount_closure_4_s * closure, arrayCount_funtype_0_t bvar){
        return h_arrayCount_closure_4(bvar, closure->fvar_1, closure->fvar_2);}

arrayCount_funtype_2_t h_arrayCount_closure_4(arrayCount_funtype_0_t ivar_5, type_actual_t arrayCount__T, uint32_t ivar_1){
        arrayCount_funtype_2_t result;
        arrayCount_closure_5_t cl6523;
        cl6523 = new_arrayCount_closure_5();
        cl6523->fvar_1 = (uint32_t)ivar_1;
        cl6523->fvar_2 = (type_actual_t)arrayCount__T;
        result = (arrayCount_funtype_2_t)cl6523;

        return result;
}

arrayCount_closure_4_t new_arrayCount_closure_4(void){
        static struct arrayCount_funtype_3_ftbl_s ftbl = {.fptr = (arrayCount_funtype_2_t (*)(arrayCount_funtype_3_t, arrayCount_funtype_0_t))&f_arrayCount_closure_4, .mptr = (arrayCount_funtype_2_t (*)(arrayCount_funtype_3_t, arrayCount_funtype_0_t))&m_arrayCount_closure_4, .rptr =  (void (*)(arrayCount_funtype_3_t))&release_arrayCount_closure_4, .cptr = (arrayCount_funtype_3_t (*)(arrayCount_funtype_3_t))&copy_arrayCount_closure_4};
        arrayCount_closure_4_t tmp = (arrayCount_closure_4_t) safe_malloc(sizeof(struct arrayCount_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arrayCount_closure_4(arrayCount_funtype_3_t closure, type_actual_t arrayCount__T){
        arrayCount_closure_4_t x = (arrayCount_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arrayCount_closure_4_t copy_arrayCount_closure_4(arrayCount_closure_4_t x){
        arrayCount_closure_4_t y = new_arrayCount_closure_4();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            arrayCount_funtype_3_htbl_t new_htbl = (arrayCount_funtype_3_htbl_t) safe_malloc(sizeof(struct arrayCount_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arrayCount_funtype_3_hashentry_t * new_data = (arrayCount_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arrayCount_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arrayCount_funtype_3_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_arrayCount_closure_5(struct arrayCount_closure_5_s * closure, arrayCount_array_1_t bvar){
        uint32_t result = h_arrayCount_closure_5(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

uint32_t m_arrayCount_closure_5(struct arrayCount_closure_5_s * closure, arrayCount_array_1_t bvar){
        return h_arrayCount_closure_5(bvar, closure->fvar_1, closure->fvar_2);}

uint32_t h_arrayCount_closure_5(arrayCount_array_1_t ivar_8, uint32_t ivar_1, type_actual_t arrayCount__T){
        uint32_t result;
        pvs2cerror("Non-executable theory: finite_sets", PVS2C_EXIT_ERROR);

        return result;
}

arrayCount_closure_5_t new_arrayCount_closure_5(void){
        static struct arrayCount_funtype_2_ftbl_s ftbl = {.fptr = (uint32_t (*)(arrayCount_funtype_2_t, arrayCount_array_1_t))&f_arrayCount_closure_5, .mptr = (uint32_t (*)(arrayCount_funtype_2_t, arrayCount_array_1_t))&m_arrayCount_closure_5, .rptr =  (void (*)(arrayCount_funtype_2_t))&release_arrayCount_closure_5, .cptr = (arrayCount_funtype_2_t (*)(arrayCount_funtype_2_t))&copy_arrayCount_closure_5};
        arrayCount_closure_5_t tmp = (arrayCount_closure_5_t) safe_malloc(sizeof(struct arrayCount_closure_5_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arrayCount_closure_5(arrayCount_funtype_2_t closure, type_actual_t arrayCount__T){
        arrayCount_closure_5_t x = (arrayCount_closure_5_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arrayCount_closure_5_t copy_arrayCount_closure_5(arrayCount_closure_5_t x){
        arrayCount_closure_5_t y = new_arrayCount_closure_5();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        if (x->htbl != NULL){
            arrayCount_funtype_2_htbl_t new_htbl = (arrayCount_funtype_2_htbl_t) safe_malloc(sizeof(struct arrayCount_funtype_2_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arrayCount_funtype_2_hashentry_t * new_data = (arrayCount_funtype_2_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arrayCount_funtype_2_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arrayCount_funtype_2_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

arrayCount_funtype_3_t arrayCount__count(type_actual_t arrayCount__T, uint32_t ivar_1){
        arrayCount_funtype_3_t  result;
        arrayCount_closure_4_t cl6524;
        cl6524 = new_arrayCount_closure_4();
        cl6524->fvar_1 = (type_actual_t)arrayCount__T;
        cl6524->fvar_2 = (uint32_t)ivar_1;
        result = (arrayCount_funtype_3_t)cl6524;

        
        return result;
}