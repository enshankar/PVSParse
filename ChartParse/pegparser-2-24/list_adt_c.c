//Code generated using pvs2ir2c
#include "list_adt_c.h"


list_adt__list_adt_t new_list_adt__list_adt(void){
        list_adt__list_adt_t tmp = (list_adt__list_adt_t) safe_malloc(sizeof(struct list_adt__list_adt_s));
        tmp->count = 1;
        return tmp;}

void release_list_adt__list_adt(list_adt__list_adt_t x, type_actual_t list_adt__T){
switch (x->list_adt__list_adt_index) {
case 1:  release_list_adt__cons((list_adt__cons_t) x, list_adt__T); break;
}}

void release_list_adt__list_adt_ptr(pointer_t x, type_actual_t T){
        actual_list_adt__list_adt_t actual = (actual_list_adt__list_adt_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        release_list_adt__list_adt((list_adt__list_adt_t)x, list_adt__T);
}

list_adt__list_adt_t copy_list_adt__list_adt(list_adt__list_adt_t x){
        list_adt__list_adt_t y = new_list_adt__list_adt();
        y->list_adt__list_adt_index = (uint8_t)x->list_adt__list_adt_index;
        y->count = 1;
        return y;}

bool_t equal_list_adt__list_adt(list_adt__list_adt_t x, list_adt__list_adt_t y, type_actual_t list_adt__T){
        bool_t tmp = x->list_adt__list_adt_index == y->list_adt__list_adt_index;
        switch  (x->list_adt__list_adt_index) {
                case 1: tmp = tmp && equal_list_adt__cons((list_adt__cons_t) x, (list_adt__cons_t) y, list_adt__T); break;
        }
        return tmp;
}

char * json_list_adt__list_adt(list_adt__list_adt_t x, type_actual_t list_adt__T){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ \"constructor\" = %u,", x->list_adt__list_adt_index);
        switch  (x->list_adt__list_adt_index) {
                case 1: tmp = safe_strcat(tmp, json_list_adt__cons((list_adt__cons_t) x, list_adt__T)); break;
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_list_adt__list_adt_ptr(pointer_t x, pointer_t y, actual_list_adt__list_adt_t T){
        actual_list_adt__list_adt_t actual = (actual_list_adt__list_adt_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        return equal_list_adt__list_adt((list_adt__list_adt_t)x, (list_adt__list_adt_t)y, list_adt__T);
}

char * json_list_adt__list_adt_ptr(pointer_t x, actual_list_adt__list_adt_t T){
        actual_list_adt__list_adt_t actual = (actual_list_adt__list_adt_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        return json_list_adt__list_adt((list_adt__list_adt_t)x, list_adt__T);
}

actual_list_adt__list_adt_t actual_list_adt__list_adt(type_actual_t list_adt__T){
        actual_list_adt__list_adt_t new = (actual_list_adt__list_adt_t)safe_malloc(sizeof(struct actual_list_adt__list_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_list_adt__list_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_list_adt__list_adt_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_list_adt__list_adt_ptr);
 

        new->list_adt__T = list_adt__T;
 
        return new;
 };

list_adt__list_adt_t update_list_adt__list_adt_list_adt__list_adt_index(list_adt__list_adt_t x, uint8_t v){
        list_adt__list_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_list_adt__list_adt(x); x->count--;};
        y->list_adt__list_adt_index = (uint8_t)v;
        return y;}




list_adt__cons_t new_list_adt__cons(void){
        list_adt__cons_t tmp = (list_adt__cons_t) safe_malloc(sizeof(struct list_adt__cons_s));
        tmp->count = 1;
        return tmp;}

void release_list_adt__cons(list_adt__cons_t x, type_actual_t list_adt__T){
        x->count--;
        if (x->count <= 0){
         list_adt__T->release_ptr(x->car, list_adt__T);
         release_list_adt__list_adt(x->cdr, list_adt__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_list_adt__cons_ptr(pointer_t x, type_actual_t T){
        actual_list_adt__cons_t actual = (actual_list_adt__cons_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        release_list_adt__cons((list_adt__cons_t)x, list_adt__T);
}

list_adt__cons_t copy_list_adt__cons(list_adt__cons_t x){
        list_adt__cons_t y = new_list_adt__cons();
        y->list_adt__list_adt_index = (uint8_t)x->list_adt__list_adt_index;
        y->car = x->car;
        if (y->car != NULL){y->car->count++;};
        y->cdr = x->cdr;
        if (y->cdr != NULL){y->cdr->count++;};
        y->count = 1;
        return y;}

bool_t equal_list_adt__cons(list_adt__cons_t x, list_adt__cons_t y, type_actual_t list_adt__T){
        bool_t tmp = true;
        tmp = tmp && x->list_adt__list_adt_index == y->list_adt__list_adt_index;
        tmp = tmp && list_adt__T->equal_ptr(x->car, y->car, list_adt__T);
        tmp = tmp && equal_list_adt__list_adt(x->cdr, y->cdr, list_adt__T);
        return tmp;}

char * json_list_adt__cons(list_adt__cons_t x, type_actual_t list_adt__T){
        char * tmp[3]; 
        char * fld0 = safe_malloc(36);
         sprintf(fld0, "\"list_adt__list_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->list_adt__list_adt_index));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"car\" : ");
        tmp[1] = safe_strcat(fld1, list_adt__T->json_ptr(x->car, list_adt__T));
        char * fld2 = safe_malloc(15);
         sprintf(fld2, "\"cdr\" : ");
        tmp[2] = safe_strcat(fld2, json_list_adt__list_adt(x->cdr, list_adt__T));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_list_adt__cons_ptr(pointer_t x, pointer_t y, actual_list_adt__cons_t T){
        actual_list_adt__cons_t actual = (actual_list_adt__cons_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        return equal_list_adt__cons((list_adt__cons_t)x, (list_adt__cons_t)y, list_adt__T);
}

char * json_list_adt__cons_ptr(pointer_t x, actual_list_adt__cons_t T){
        actual_list_adt__cons_t actual = (actual_list_adt__cons_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        return json_list_adt__cons((list_adt__cons_t)x, list_adt__T);
}

actual_list_adt__cons_t actual_list_adt__cons(type_actual_t list_adt__T){
        actual_list_adt__cons_t new = (actual_list_adt__cons_t)safe_malloc(sizeof(struct actual_list_adt__cons_s));
        new->equal_ptr = (equal_ptr_t)(*equal_list_adt__cons_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_list_adt__cons_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_list_adt__cons_ptr);
 

        new->list_adt__T = list_adt__T;
 
        return new;
 };

list_adt__cons_t update_list_adt__cons_list_adt__list_adt_index(list_adt__cons_t x, uint8_t v){
        list_adt__cons_t y;
        if (x->count == 1){y = x;}
        else {y = copy_list_adt__cons(x); x->count--;};
        y->list_adt__list_adt_index = (uint8_t)v;
        return y;}

list_adt__cons_t update_list_adt__cons_car(list_adt__cons_t x, list_adt__T_t v, type_actual_t list_adt__T){
        list_adt__cons_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->car != NULL){list_adt__T->release_ptr(x->car, list_adt__T);};}
        else {y = copy_list_adt__cons(x); x->count--; y->car->count--;};
        y->car = (list_adt__T_t)v;
        return y;}

list_adt__cons_t update_list_adt__cons_cdr(list_adt__cons_t x, list_adt__list_adt_t v, type_actual_t list_adt__T){
        list_adt__cons_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->cdr != NULL){release_list_adt__list_adt(x->cdr, list_adt__T);};}
        else {y = copy_list_adt__cons(x); x->count--; y->cdr->count--;};
        y->cdr = (list_adt__list_adt_t)v;
        return y;}



void release_list_adt_funtype_2(list_adt_funtype_2_t x, type_actual_t list_adt__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

list_adt_funtype_2_t copy_list_adt_funtype_2(list_adt_funtype_2_t x){return x->ftbl->cptr(x);}

bool_t equal_list_adt_funtype_2(list_adt_funtype_2_t x, list_adt_funtype_2_t y, type_actual_t list_adt__T){
        return false;}

char* json_list_adt_funtype_2(list_adt_funtype_2_t x, type_actual_t list_adt__T){char * result = safe_malloc(28); sprintf(result, "%s", "\"list_adt_funtype_2\""); return result;}

void release_list_adt_funtype_3(list_adt_funtype_3_t x, type_actual_t list_adt__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

list_adt_funtype_3_t copy_list_adt_funtype_3(list_adt_funtype_3_t x){return x->ftbl->cptr(x);}

bool_t equal_list_adt_funtype_3(list_adt_funtype_3_t x, list_adt_funtype_3_t y, type_actual_t list_adt__T){
        return false;}

char* json_list_adt_funtype_3(list_adt_funtype_3_t x, type_actual_t list_adt__T){char * result = safe_malloc(28); sprintf(result, "%s", "\"list_adt_funtype_3\""); return result;}

void release_list_adt_funtype_4(list_adt_funtype_4_t x, type_actual_t list_adt__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

list_adt_funtype_4_t copy_list_adt_funtype_4(list_adt_funtype_4_t x){return x->ftbl->cptr(x);}

bool_t equal_list_adt_funtype_4(list_adt_funtype_4_t x, list_adt_funtype_4_t y, type_actual_t list_adt__T){
        return false;}

char* json_list_adt_funtype_4(list_adt_funtype_4_t x, type_actual_t list_adt__T){char * result = safe_malloc(28); sprintf(result, "%s", "\"list_adt_funtype_4\""); return result;}


bool_t f_list_adt_closure_5(struct list_adt_closure_5_s * closure, list_adt__list_adt_t bvar){
        bool_t result = h_list_adt_closure_5(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_list_adt_closure_5(struct list_adt_closure_5_s * closure, list_adt__list_adt_t bvar){
        return h_list_adt_closure_5(bvar, closure->fvar_1, closure->fvar_2);}

bool_t h_list_adt_closure_5(list_adt__list_adt_t ivar_4, list_adt_funtype_4_t ivar_1, type_actual_t list_adt__T){
        bool_t result;
        bool_t ivar_6;
        pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
        if (ivar_6){ 
             result = (bool_t) true;
} else {
        
             list_adt__T_t ivar_9;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             list_adt__list_adt_t ivar_10;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             bool_t ivar_15;
             ivar_15 = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_9);
             if (ivar_15){  
           list_adt_funtype_3_t ivar_25;
           pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
           result = (bool_t)ivar_25->ftbl->fptr(ivar_25, ivar_10);
           ivar_25->ftbl->rptr(ivar_25);
} else {
             
           release_list_adt__list_adt(ivar_10, list_adt__T);
           result = (bool_t) false;
};
};

        return result;
}

list_adt_closure_5_t new_list_adt_closure_5(void){
        static struct list_adt_funtype_3_ftbl_s ftbl = {.fptr = (bool_t (*)(list_adt_funtype_3_t, list_adt__list_adt_t))&f_list_adt_closure_5, .mptr = (bool_t (*)(list_adt_funtype_3_t, list_adt__list_adt_t))&m_list_adt_closure_5, .rptr =  (void (*)(list_adt_funtype_3_t))&release_list_adt_closure_5, .cptr = (list_adt_funtype_3_t (*)(list_adt_funtype_3_t))&copy_list_adt_closure_5};
        list_adt_closure_5_t tmp = (list_adt_closure_5_t) safe_malloc(sizeof(struct list_adt_closure_5_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_list_adt_closure_5(list_adt_funtype_3_t closure, type_actual_t list_adt__T){
        list_adt_closure_5_t x = (list_adt_closure_5_t)closure;
        x->count--;
        if (x->count <= 0){
         release_list_adt_funtype_4(x->fvar_1, list_adt__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

list_adt_closure_5_t copy_list_adt_closure_5(list_adt_closure_5_t x){
        list_adt_closure_5_t y = new_list_adt_closure_5();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        if (x->htbl != NULL){
            list_adt_funtype_3_htbl_t new_htbl = (list_adt_funtype_3_htbl_t) safe_malloc(sizeof(struct list_adt_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            list_adt_funtype_3_hashentry_t * new_data = (list_adt_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct list_adt_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct list_adt_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_list_adt_closure_6(struct list_adt_closure_6_s * closure, list_adt__list_adt_t bvar){
        bool_t result = h_list_adt_closure_6(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_list_adt_closure_6(struct list_adt_closure_6_s * closure, list_adt__list_adt_t bvar){
        return h_list_adt_closure_6(bvar, closure->fvar_1, closure->fvar_2);}

bool_t h_list_adt_closure_6(list_adt__list_adt_t ivar_4, list_adt_funtype_4_t ivar_1, type_actual_t list_adt__T){
        bool_t result;
        bool_t ivar_6;
        pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
        if (ivar_6){ 
             result = (bool_t) false;
} else {
        
             list_adt__T_t ivar_9;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             list_adt__list_adt_t ivar_10;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             bool_t ivar_15;
             ivar_15 = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_9);
             if (ivar_15){  
           release_list_adt__list_adt(ivar_10, list_adt__T);
           result = (bool_t) true;
} else {
             
           list_adt_funtype_3_t ivar_25;
           pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
           result = (bool_t)ivar_25->ftbl->fptr(ivar_25, ivar_10);
           ivar_25->ftbl->rptr(ivar_25);
};
};

        return result;
}

list_adt_closure_6_t new_list_adt_closure_6(void){
        static struct list_adt_funtype_3_ftbl_s ftbl = {.fptr = (bool_t (*)(list_adt_funtype_3_t, list_adt__list_adt_t))&f_list_adt_closure_6, .mptr = (bool_t (*)(list_adt_funtype_3_t, list_adt__list_adt_t))&m_list_adt_closure_6, .rptr =  (void (*)(list_adt_funtype_3_t))&release_list_adt_closure_6, .cptr = (list_adt_funtype_3_t (*)(list_adt_funtype_3_t))&copy_list_adt_closure_6};
        list_adt_closure_6_t tmp = (list_adt_closure_6_t) safe_malloc(sizeof(struct list_adt_closure_6_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_list_adt_closure_6(list_adt_funtype_3_t closure, type_actual_t list_adt__T){
        list_adt_closure_6_t x = (list_adt_closure_6_t)closure;
        x->count--;
        if (x->count <= 0){
         release_list_adt_funtype_4(x->fvar_1, list_adt__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

list_adt_closure_6_t copy_list_adt_closure_6(list_adt_closure_6_t x){
        list_adt_closure_6_t y = new_list_adt_closure_6();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        if (x->htbl != NULL){
            list_adt_funtype_3_htbl_t new_htbl = (list_adt_funtype_3_htbl_t) safe_malloc(sizeof(struct list_adt_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            list_adt_funtype_3_hashentry_t * new_data = (list_adt_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct list_adt_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct list_adt_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_list_adt_funtype_7(list_adt_funtype_7_t x, type_actual_t list_adt__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

list_adt_funtype_7_t copy_list_adt_funtype_7(list_adt_funtype_7_t x){return x->ftbl->cptr(x);}

bool_t equal_list_adt_funtype_7(list_adt_funtype_7_t x, list_adt_funtype_7_t y, type_actual_t list_adt__T){
        return false;}

char* json_list_adt_funtype_7(list_adt_funtype_7_t x, type_actual_t list_adt__T){char * result = safe_malloc(28); sprintf(result, "%s", "\"list_adt_funtype_7\""); return result;}


list_adt_record_8_t new_list_adt_record_8(void){
        list_adt_record_8_t tmp = (list_adt_record_8_t) safe_malloc(sizeof(struct list_adt_record_8_s));
        tmp->count = 1;
        return tmp;}

void release_list_adt_record_8(list_adt_record_8_t x, type_actual_t list_adt__T){
        x->count--;
        if (x->count <= 0){
         list_adt__T->release_ptr(x->project_1, list_adt__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_list_adt_record_8_ptr(pointer_t x, type_actual_t T){
        actual_list_adt_record_8_t actual = (actual_list_adt_record_8_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        release_list_adt_record_8((list_adt_record_8_t)x, list_adt__T);
}

list_adt_record_8_t copy_list_adt_record_8(list_adt_record_8_t x){
        list_adt_record_8_t y = new_list_adt_record_8();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        mpz_set(y->project_2, x->project_2);
        y->count = 1;
        return y;}

bool_t equal_list_adt_record_8(list_adt_record_8_t x, list_adt_record_8_t y, type_actual_t list_adt__T){
        bool_t tmp = true;
        tmp = tmp && list_adt__T->equal_ptr(x->project_1, y->project_1, list_adt__T);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);
        return tmp;}

char * json_list_adt_record_8(list_adt_record_8_t x, type_actual_t list_adt__T){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, list_adt__T->json_ptr(x->project_1, list_adt__T));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_list_adt_record_8_ptr(pointer_t x, pointer_t y, actual_list_adt_record_8_t T){
        actual_list_adt_record_8_t actual = (actual_list_adt_record_8_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        return equal_list_adt_record_8((list_adt_record_8_t)x, (list_adt_record_8_t)y, list_adt__T);
}

char * json_list_adt_record_8_ptr(pointer_t x, actual_list_adt_record_8_t T){
        actual_list_adt_record_8_t actual = (actual_list_adt_record_8_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        return json_list_adt_record_8((list_adt_record_8_t)x, list_adt__T);
}

actual_list_adt_record_8_t actual_list_adt_record_8(type_actual_t list_adt__T){
        actual_list_adt_record_8_t new = (actual_list_adt_record_8_t)safe_malloc(sizeof(struct actual_list_adt_record_8_s));
        new->equal_ptr = (equal_ptr_t)(*equal_list_adt_record_8_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_list_adt_record_8_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_list_adt_record_8_ptr);
 

        new->list_adt__T = list_adt__T;
 
        return new;
 };

list_adt_record_8_t update_list_adt_record_8_project_1(list_adt_record_8_t x, list_adt__T_t v, type_actual_t list_adt__T){
        list_adt_record_8_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){list_adt__T->release_ptr(x->project_1, list_adt__T);};}
        else {y = copy_list_adt_record_8(x); x->count--; y->project_1->count--;};
        y->project_1 = (list_adt__T_t)v;
        return y;}

list_adt_record_8_t update_list_adt_record_8_project_2(list_adt_record_8_t x, mpz_ptr_t v){
        list_adt_record_8_t y;
        if (x->count == 1){y = x;}
        else {y = copy_list_adt_record_8(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}



void release_list_adt_funtype_9(list_adt_funtype_9_t x, type_actual_t list_adt__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

list_adt_funtype_9_t copy_list_adt_funtype_9(list_adt_funtype_9_t x){return x->ftbl->cptr(x);}

bool_t equal_list_adt_funtype_9(list_adt_funtype_9_t x, list_adt_funtype_9_t y, type_actual_t list_adt__T){
        return false;}

char* json_list_adt_funtype_9(list_adt_funtype_9_t x, type_actual_t list_adt__T){char * result = safe_malloc(28); sprintf(result, "%s", "\"list_adt_funtype_9\""); return result;}


mpz_ptr_t f_list_adt_closure_10(struct list_adt_closure_10_s * closure, list_adt__list_adt_t bvar){
        mpz_ptr_t result = h_list_adt_closure_10(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

mpz_ptr_t m_list_adt_closure_10(struct list_adt_closure_10_s * closure, list_adt__list_adt_t bvar){
        return h_list_adt_closure_10(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

mpz_ptr_t h_list_adt_closure_10(list_adt__list_adt_t ivar_5, type_actual_t list_adt__T, list_adt_funtype_9_t ivar_2, mpz_ptr_t ivar_1){
        mpz_ptr_t result;
        /* red */ list_adt_funtype_7_t ivar_6;
        pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
        bool_t ivar_15;
        pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
        if (ivar_15){ 
             release_list_adt_funtype_7(ivar_6, list_adt__T);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_1);
} else {
        
             list_adt__T_t ivar_18;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             list_adt__list_adt_t ivar_19;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             mpz_ptr_t ivar_35;
             mpz_mk_set(ivar_35, ivar_6->ftbl->fptr(ivar_6, ivar_19));
             ivar_6->ftbl->rptr(ivar_6);
             mpz_mk_set(result, ivar_2->ftbl->mptr(ivar_2, ivar_18, ivar_35));
};

        return result;
}

list_adt_closure_10_t new_list_adt_closure_10(void){
        static struct list_adt_funtype_7_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(list_adt_funtype_7_t, list_adt__list_adt_t))&f_list_adt_closure_10, .mptr = (mpz_ptr_t (*)(list_adt_funtype_7_t, list_adt__list_adt_t))&m_list_adt_closure_10, .rptr =  (void (*)(list_adt_funtype_7_t))&release_list_adt_closure_10, .cptr = (list_adt_funtype_7_t (*)(list_adt_funtype_7_t))&copy_list_adt_closure_10};
        list_adt_closure_10_t tmp = (list_adt_closure_10_t) safe_malloc(sizeof(struct list_adt_closure_10_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_3);
        return tmp;}

void release_list_adt_closure_10(list_adt_funtype_7_t closure, type_actual_t list_adt__T){
        list_adt_closure_10_t x = (list_adt_closure_10_t)closure;
        x->count--;
        if (x->count <= 0){
         release_list_adt_funtype_9(x->fvar_2, list_adt__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

list_adt_closure_10_t copy_list_adt_closure_10(list_adt_closure_10_t x){
        list_adt_closure_10_t y = new_list_adt_closure_10();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        mpz_set(y->fvar_3, x->fvar_3);
        if (x->htbl != NULL){
            list_adt_funtype_7_htbl_t new_htbl = (list_adt_funtype_7_htbl_t) safe_malloc(sizeof(struct list_adt_funtype_7_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            list_adt_funtype_7_hashentry_t * new_data = (list_adt_funtype_7_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct list_adt_funtype_7_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct list_adt_funtype_7_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


list_adt_record_11_t new_list_adt_record_11(void){
        list_adt_record_11_t tmp = (list_adt_record_11_t) safe_malloc(sizeof(struct list_adt_record_11_s));
        tmp->count = 1;
        return tmp;}

void release_list_adt_record_11(list_adt_record_11_t x, type_actual_t list_adt__T){
        x->count--;
        if (x->count <= 0){
         list_adt__T->release_ptr(x->project_1, list_adt__T);
         release_list_adt__list_adt(x->project_3, list_adt__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_list_adt_record_11_ptr(pointer_t x, type_actual_t T){
        actual_list_adt_record_11_t actual = (actual_list_adt_record_11_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        release_list_adt_record_11((list_adt_record_11_t)x, list_adt__T);
}

list_adt_record_11_t copy_list_adt_record_11(list_adt_record_11_t x){
        list_adt_record_11_t y = new_list_adt_record_11();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        mpz_set(y->project_2, x->project_2);
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_list_adt_record_11(list_adt_record_11_t x, list_adt_record_11_t y, type_actual_t list_adt__T){
        bool_t tmp = true;
        tmp = tmp && list_adt__T->equal_ptr(x->project_1, y->project_1, list_adt__T);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);
        tmp = tmp && equal_list_adt__list_adt(x->project_3, y->project_3, list_adt__T);
        return tmp;}

char * json_list_adt_record_11(list_adt_record_11_t x, type_actual_t list_adt__T){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, list_adt__T->json_ptr(x->project_1, list_adt__T));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_list_adt__list_adt(x->project_3, list_adt__T));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_list_adt_record_11_ptr(pointer_t x, pointer_t y, actual_list_adt_record_11_t T){
        actual_list_adt_record_11_t actual = (actual_list_adt_record_11_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        return equal_list_adt_record_11((list_adt_record_11_t)x, (list_adt_record_11_t)y, list_adt__T);
}

char * json_list_adt_record_11_ptr(pointer_t x, actual_list_adt_record_11_t T){
        actual_list_adt_record_11_t actual = (actual_list_adt_record_11_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        return json_list_adt_record_11((list_adt_record_11_t)x, list_adt__T);
}

actual_list_adt_record_11_t actual_list_adt_record_11(type_actual_t list_adt__T){
        actual_list_adt_record_11_t new = (actual_list_adt_record_11_t)safe_malloc(sizeof(struct actual_list_adt_record_11_s));
        new->equal_ptr = (equal_ptr_t)(*equal_list_adt_record_11_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_list_adt_record_11_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_list_adt_record_11_ptr);
 

        new->list_adt__T = list_adt__T;
 
        return new;
 };

list_adt_record_11_t update_list_adt_record_11_project_1(list_adt_record_11_t x, list_adt__T_t v, type_actual_t list_adt__T){
        list_adt_record_11_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){list_adt__T->release_ptr(x->project_1, list_adt__T);};}
        else {y = copy_list_adt_record_11(x); x->count--; y->project_1->count--;};
        y->project_1 = (list_adt__T_t)v;
        return y;}

list_adt_record_11_t update_list_adt_record_11_project_2(list_adt_record_11_t x, mpz_ptr_t v){
        list_adt_record_11_t y;
        if (x->count == 1){y = x;}
        else {y = copy_list_adt_record_11(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}

list_adt_record_11_t update_list_adt_record_11_project_3(list_adt_record_11_t x, list_adt__list_adt_t v, type_actual_t list_adt__T){
        list_adt_record_11_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_list_adt__list_adt(x->project_3, list_adt__T);};}
        else {y = copy_list_adt_record_11(x); x->count--; y->project_3->count--;};
        y->project_3 = (list_adt__list_adt_t)v;
        return y;}



void release_list_adt_funtype_12(list_adt_funtype_12_t x, type_actual_t list_adt__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

list_adt_funtype_12_t copy_list_adt_funtype_12(list_adt_funtype_12_t x){return x->ftbl->cptr(x);}

bool_t equal_list_adt_funtype_12(list_adt_funtype_12_t x, list_adt_funtype_12_t y, type_actual_t list_adt__T){
        return false;}

char* json_list_adt_funtype_12(list_adt_funtype_12_t x, type_actual_t list_adt__T){char * result = safe_malloc(29); sprintf(result, "%s", "\"list_adt_funtype_12\""); return result;}


mpz_ptr_t f_list_adt_closure_13(struct list_adt_closure_13_s * closure, list_adt__list_adt_t bvar){
        mpz_ptr_t result = h_list_adt_closure_13(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

mpz_ptr_t m_list_adt_closure_13(struct list_adt_closure_13_s * closure, list_adt__list_adt_t bvar){
        return h_list_adt_closure_13(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

mpz_ptr_t h_list_adt_closure_13(list_adt__list_adt_t ivar_6, type_actual_t list_adt__T, list_adt_funtype_12_t ivar_3, list_adt_funtype_7_t ivar_1){
        mpz_ptr_t result;
        /* red */ list_adt_funtype_7_t ivar_7;
        pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
        bool_t ivar_21;
        pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
        if (ivar_21){ 
             release_list_adt_funtype_7(ivar_7, list_adt__T);
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_6));
} else {
        
             list_adt__T_t ivar_24;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             list_adt__list_adt_t ivar_25;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             mpz_ptr_t ivar_42;
             mpz_mk_set(ivar_42, ivar_7->ftbl->fptr(ivar_7, ivar_25));
             ivar_7->ftbl->rptr(ivar_7);
             mpz_mk_set(result, ivar_3->ftbl->mptr(ivar_3, ivar_24, ivar_42, ivar_6));
};

        return result;
}

list_adt_closure_13_t new_list_adt_closure_13(void){
        static struct list_adt_funtype_7_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(list_adt_funtype_7_t, list_adt__list_adt_t))&f_list_adt_closure_13, .mptr = (mpz_ptr_t (*)(list_adt_funtype_7_t, list_adt__list_adt_t))&m_list_adt_closure_13, .rptr =  (void (*)(list_adt_funtype_7_t))&release_list_adt_closure_13, .cptr = (list_adt_funtype_7_t (*)(list_adt_funtype_7_t))&copy_list_adt_closure_13};
        list_adt_closure_13_t tmp = (list_adt_closure_13_t) safe_malloc(sizeof(struct list_adt_closure_13_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_list_adt_closure_13(list_adt_funtype_7_t closure, type_actual_t list_adt__T){
        list_adt_closure_13_t x = (list_adt_closure_13_t)closure;
        x->count--;
        if (x->count <= 0){
         release_list_adt_funtype_12(x->fvar_2, list_adt__T);
         release_list_adt_funtype_7(x->fvar_3, list_adt__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

list_adt_closure_13_t copy_list_adt_closure_13(list_adt_closure_13_t x){
        list_adt_closure_13_t y = new_list_adt_closure_13();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            list_adt_funtype_7_htbl_t new_htbl = (list_adt_funtype_7_htbl_t) safe_malloc(sizeof(struct list_adt_funtype_7_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            list_adt_funtype_7_hashentry_t * new_data = (list_adt_funtype_7_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct list_adt_funtype_7_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct list_adt_funtype_7_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_list_adt_funtype_14(list_adt_funtype_14_t x, type_actual_t list_adt__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

list_adt_funtype_14_t copy_list_adt_funtype_14(list_adt_funtype_14_t x){return x->ftbl->cptr(x);}

bool_t equal_list_adt_funtype_14(list_adt_funtype_14_t x, list_adt_funtype_14_t y, type_actual_t list_adt__T){
        return false;}

char* json_list_adt_funtype_14(list_adt_funtype_14_t x, type_actual_t list_adt__T){char * result = safe_malloc(29); sprintf(result, "%s", "\"list_adt_funtype_14\""); return result;}


list_adt_record_15_t new_list_adt_record_15(void){
        list_adt_record_15_t tmp = (list_adt_record_15_t) safe_malloc(sizeof(struct list_adt_record_15_s));
        tmp->count = 1;
        return tmp;}

void release_list_adt_record_15(list_adt_record_15_t x, type_actual_t list_adt__T){
        x->count--;
        if (x->count <= 0){
         list_adt__T->release_ptr(x->project_1, list_adt__T);
         release_ordstruct_adt__ordstruct_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_list_adt_record_15_ptr(pointer_t x, type_actual_t T){
        actual_list_adt_record_15_t actual = (actual_list_adt_record_15_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        release_list_adt_record_15((list_adt_record_15_t)x, list_adt__T);
}

list_adt_record_15_t copy_list_adt_record_15(list_adt_record_15_t x){
        list_adt_record_15_t y = new_list_adt_record_15();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_list_adt_record_15(list_adt_record_15_t x, list_adt_record_15_t y, type_actual_t list_adt__T){
        bool_t tmp = true;
        tmp = tmp && list_adt__T->equal_ptr(x->project_1, y->project_1, list_adt__T);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_2, y->project_2, list_adt__T);
        return tmp;}

char * json_list_adt_record_15(list_adt_record_15_t x, type_actual_t list_adt__T){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, list_adt__T->json_ptr(x->project_1, list_adt__T));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ordstruct_adt__ordstruct_adt(x->project_2, list_adt__T));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_list_adt_record_15_ptr(pointer_t x, pointer_t y, actual_list_adt_record_15_t T){
        actual_list_adt_record_15_t actual = (actual_list_adt_record_15_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        return equal_list_adt_record_15((list_adt_record_15_t)x, (list_adt_record_15_t)y, list_adt__T);
}

char * json_list_adt_record_15_ptr(pointer_t x, actual_list_adt_record_15_t T){
        actual_list_adt_record_15_t actual = (actual_list_adt_record_15_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        return json_list_adt_record_15((list_adt_record_15_t)x, list_adt__T);
}

actual_list_adt_record_15_t actual_list_adt_record_15(type_actual_t list_adt__T){
        actual_list_adt_record_15_t new = (actual_list_adt_record_15_t)safe_malloc(sizeof(struct actual_list_adt_record_15_s));
        new->equal_ptr = (equal_ptr_t)(*equal_list_adt_record_15_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_list_adt_record_15_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_list_adt_record_15_ptr);
 

        new->list_adt__T = list_adt__T;
 
        return new;
 };

list_adt_record_15_t update_list_adt_record_15_project_1(list_adt_record_15_t x, list_adt__T_t v, type_actual_t list_adt__T){
        list_adt_record_15_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){list_adt__T->release_ptr(x->project_1, list_adt__T);};}
        else {y = copy_list_adt_record_15(x); x->count--; y->project_1->count--;};
        y->project_1 = (list_adt__T_t)v;
        return y;}

list_adt_record_15_t update_list_adt_record_15_project_2(list_adt_record_15_t x, ordstruct_adt__ordstruct_adt_t v, type_actual_t list_adt__T){
        list_adt_record_15_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_2);};}
        else {y = copy_list_adt_record_15(x); x->count--; y->project_2->count--;};
        y->project_2 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}



void release_list_adt_funtype_16(list_adt_funtype_16_t x, type_actual_t list_adt__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

list_adt_funtype_16_t copy_list_adt_funtype_16(list_adt_funtype_16_t x){return x->ftbl->cptr(x);}

bool_t equal_list_adt_funtype_16(list_adt_funtype_16_t x, list_adt_funtype_16_t y, type_actual_t list_adt__T){
        return false;}

char* json_list_adt_funtype_16(list_adt_funtype_16_t x, type_actual_t list_adt__T){char * result = safe_malloc(29); sprintf(result, "%s", "\"list_adt_funtype_16\""); return result;}


ordstruct_adt__ordstruct_adt_t f_list_adt_closure_17(struct list_adt_closure_17_s * closure, list_adt__list_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_list_adt_closure_17(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_list_adt_closure_17(struct list_adt_closure_17_s * closure, list_adt__list_adt_t bvar){
        return h_list_adt_closure_17(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

ordstruct_adt__ordstruct_adt_t h_list_adt_closure_17(list_adt__list_adt_t ivar_5, type_actual_t list_adt__T, list_adt_funtype_16_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ list_adt_funtype_14_t ivar_6;
        pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
        bool_t ivar_15;
        pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
        if (ivar_15){ 
             release_list_adt_funtype_14(ivar_6, list_adt__T);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1;
             if (result != NULL) result->count++;
} else {
        
             list_adt__T_t ivar_18;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             list_adt__list_adt_t ivar_19;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             ordstruct_adt__ordstruct_adt_t ivar_35;
             ivar_35 = (ordstruct_adt__ordstruct_adt_t)ivar_6->ftbl->fptr(ivar_6, ivar_19);
             ivar_6->ftbl->rptr(ivar_6);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_2->ftbl->mptr(ivar_2, ivar_18, ivar_35);
};

        return result;
}

list_adt_closure_17_t new_list_adt_closure_17(void){
        static struct list_adt_funtype_14_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(list_adt_funtype_14_t, list_adt__list_adt_t))&f_list_adt_closure_17, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(list_adt_funtype_14_t, list_adt__list_adt_t))&m_list_adt_closure_17, .rptr =  (void (*)(list_adt_funtype_14_t))&release_list_adt_closure_17, .cptr = (list_adt_funtype_14_t (*)(list_adt_funtype_14_t))&copy_list_adt_closure_17};
        list_adt_closure_17_t tmp = (list_adt_closure_17_t) safe_malloc(sizeof(struct list_adt_closure_17_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_list_adt_closure_17(list_adt_funtype_14_t closure, type_actual_t list_adt__T){
        list_adt_closure_17_t x = (list_adt_closure_17_t)closure;
        x->count--;
        if (x->count <= 0){
         release_list_adt_funtype_16(x->fvar_2, list_adt__T);
         release_ordstruct_adt__ordstruct_adt(x->fvar_3, list_adt__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

list_adt_closure_17_t copy_list_adt_closure_17(list_adt_closure_17_t x){
        list_adt_closure_17_t y = new_list_adt_closure_17();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            list_adt_funtype_14_htbl_t new_htbl = (list_adt_funtype_14_htbl_t) safe_malloc(sizeof(struct list_adt_funtype_14_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            list_adt_funtype_14_hashentry_t * new_data = (list_adt_funtype_14_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct list_adt_funtype_14_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct list_adt_funtype_14_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


list_adt_record_18_t new_list_adt_record_18(void){
        list_adt_record_18_t tmp = (list_adt_record_18_t) safe_malloc(sizeof(struct list_adt_record_18_s));
        tmp->count = 1;
        return tmp;}

void release_list_adt_record_18(list_adt_record_18_t x, type_actual_t list_adt__T){
        x->count--;
        if (x->count <= 0){
         list_adt__T->release_ptr(x->project_1, list_adt__T);
         release_ordstruct_adt__ordstruct_adt(x->project_2);
         release_list_adt__list_adt(x->project_3, list_adt__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_list_adt_record_18_ptr(pointer_t x, type_actual_t T){
        actual_list_adt_record_18_t actual = (actual_list_adt_record_18_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        release_list_adt_record_18((list_adt_record_18_t)x, list_adt__T);
}

list_adt_record_18_t copy_list_adt_record_18(list_adt_record_18_t x){
        list_adt_record_18_t y = new_list_adt_record_18();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_list_adt_record_18(list_adt_record_18_t x, list_adt_record_18_t y, type_actual_t list_adt__T){
        bool_t tmp = true;
        tmp = tmp && list_adt__T->equal_ptr(x->project_1, y->project_1, list_adt__T);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_2, y->project_2, list_adt__T);
        tmp = tmp && equal_list_adt__list_adt(x->project_3, y->project_3, list_adt__T);
        return tmp;}

char * json_list_adt_record_18(list_adt_record_18_t x, type_actual_t list_adt__T){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, list_adt__T->json_ptr(x->project_1, list_adt__T));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ordstruct_adt__ordstruct_adt(x->project_2, list_adt__T));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_list_adt__list_adt(x->project_3, list_adt__T));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_list_adt_record_18_ptr(pointer_t x, pointer_t y, actual_list_adt_record_18_t T){
        actual_list_adt_record_18_t actual = (actual_list_adt_record_18_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        return equal_list_adt_record_18((list_adt_record_18_t)x, (list_adt_record_18_t)y, list_adt__T);
}

char * json_list_adt_record_18_ptr(pointer_t x, actual_list_adt_record_18_t T){
        actual_list_adt_record_18_t actual = (actual_list_adt_record_18_t)T;
        type_actual_t list_adt__T = actual->list_adt__T;
        return json_list_adt_record_18((list_adt_record_18_t)x, list_adt__T);
}

actual_list_adt_record_18_t actual_list_adt_record_18(type_actual_t list_adt__T){
        actual_list_adt_record_18_t new = (actual_list_adt_record_18_t)safe_malloc(sizeof(struct actual_list_adt_record_18_s));
        new->equal_ptr = (equal_ptr_t)(*equal_list_adt_record_18_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_list_adt_record_18_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_list_adt_record_18_ptr);
 

        new->list_adt__T = list_adt__T;
 
        return new;
 };

list_adt_record_18_t update_list_adt_record_18_project_1(list_adt_record_18_t x, list_adt__T_t v, type_actual_t list_adt__T){
        list_adt_record_18_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){list_adt__T->release_ptr(x->project_1, list_adt__T);};}
        else {y = copy_list_adt_record_18(x); x->count--; y->project_1->count--;};
        y->project_1 = (list_adt__T_t)v;
        return y;}

list_adt_record_18_t update_list_adt_record_18_project_2(list_adt_record_18_t x, ordstruct_adt__ordstruct_adt_t v, type_actual_t list_adt__T){
        list_adt_record_18_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_2);};}
        else {y = copy_list_adt_record_18(x); x->count--; y->project_2->count--;};
        y->project_2 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

list_adt_record_18_t update_list_adt_record_18_project_3(list_adt_record_18_t x, list_adt__list_adt_t v, type_actual_t list_adt__T){
        list_adt_record_18_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_list_adt__list_adt(x->project_3, list_adt__T);};}
        else {y = copy_list_adt_record_18(x); x->count--; y->project_3->count--;};
        y->project_3 = (list_adt__list_adt_t)v;
        return y;}



void release_list_adt_funtype_19(list_adt_funtype_19_t x, type_actual_t list_adt__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

list_adt_funtype_19_t copy_list_adt_funtype_19(list_adt_funtype_19_t x){return x->ftbl->cptr(x);}

bool_t equal_list_adt_funtype_19(list_adt_funtype_19_t x, list_adt_funtype_19_t y, type_actual_t list_adt__T){
        return false;}

char* json_list_adt_funtype_19(list_adt_funtype_19_t x, type_actual_t list_adt__T){char * result = safe_malloc(29); sprintf(result, "%s", "\"list_adt_funtype_19\""); return result;}


ordstruct_adt__ordstruct_adt_t f_list_adt_closure_20(struct list_adt_closure_20_s * closure, list_adt__list_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_list_adt_closure_20(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_list_adt_closure_20(struct list_adt_closure_20_s * closure, list_adt__list_adt_t bvar){
        return h_list_adt_closure_20(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

ordstruct_adt__ordstruct_adt_t h_list_adt_closure_20(list_adt__list_adt_t ivar_6, type_actual_t list_adt__T, list_adt_funtype_19_t ivar_3, list_adt_funtype_14_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ list_adt_funtype_14_t ivar_7;
        pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
        bool_t ivar_21;
        pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
        if (ivar_21){ 
             release_list_adt_funtype_14(ivar_7, list_adt__T);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_6);
} else {
        
             list_adt__T_t ivar_24;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             list_adt__list_adt_t ivar_25;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             ordstruct_adt__ordstruct_adt_t ivar_42;
             ivar_42 = (ordstruct_adt__ordstruct_adt_t)ivar_7->ftbl->fptr(ivar_7, ivar_25);
             ivar_7->ftbl->rptr(ivar_7);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_24, ivar_42, ivar_6);
};

        return result;
}

list_adt_closure_20_t new_list_adt_closure_20(void){
        static struct list_adt_funtype_14_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(list_adt_funtype_14_t, list_adt__list_adt_t))&f_list_adt_closure_20, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(list_adt_funtype_14_t, list_adt__list_adt_t))&m_list_adt_closure_20, .rptr =  (void (*)(list_adt_funtype_14_t))&release_list_adt_closure_20, .cptr = (list_adt_funtype_14_t (*)(list_adt_funtype_14_t))&copy_list_adt_closure_20};
        list_adt_closure_20_t tmp = (list_adt_closure_20_t) safe_malloc(sizeof(struct list_adt_closure_20_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_list_adt_closure_20(list_adt_funtype_14_t closure, type_actual_t list_adt__T){
        list_adt_closure_20_t x = (list_adt_closure_20_t)closure;
        x->count--;
        if (x->count <= 0){
         release_list_adt_funtype_19(x->fvar_2, list_adt__T);
         release_list_adt_funtype_14(x->fvar_3, list_adt__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

list_adt_closure_20_t copy_list_adt_closure_20(list_adt_closure_20_t x){
        list_adt_closure_20_t y = new_list_adt_closure_20();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            list_adt_funtype_14_htbl_t new_htbl = (list_adt_funtype_14_htbl_t) safe_malloc(sizeof(struct list_adt_funtype_14_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            list_adt_funtype_14_hashentry_t * new_data = (list_adt_funtype_14_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct list_adt_funtype_14_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct list_adt_funtype_14_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

bool_t r_list_adt__nullp(list_adt__list_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->list_adt__list_adt_index;
        release_list_adt__list_adt(ivar_1, list_adt__T);
        result = (ivar_2 == ivar_3);

        
        return result;
}

bool_t r_list_adt__consp(list_adt__list_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->list_adt__list_adt_index;
        release_list_adt__list_adt(ivar_1, list_adt__T);
        result = (ivar_2 == ivar_3);

        
        return result;
}

list_adt__cons_t update_list_adt__list_adt_car(list_adt__list_adt_t ivar_1, list_adt__T_t ivar_3){
        list_adt__cons_t  result;
        list_adt__cons_t ivar_2;
        //copying to list_adt__cons from list_adt__list_adt;
        ivar_2 = (list_adt__cons_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_list_adt__list_adt(ivar_1, list_adt__T);
        result = (list_adt__cons_t)update_list_adt__cons_car(ivar_2, ivar_3, list_adt__T);

        
        return result;
}

list_adt__T_t list_adt__list_adt_car(list_adt__list_adt_t ivar_1){
        list_adt__T_t  result;
        list_adt__cons_t ivar_2;
        //copying to list_adt__cons from list_adt__list_adt;
        ivar_2 = (list_adt__cons_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_list_adt__list_adt(ivar_1, list_adt__T);
        result = (list_adt__T_t)ivar_2->car;
        result->count++;
        release_list_adt__cons(ivar_2);

        
        return result;
}

list_adt__cons_t update_list_adt__list_adt_cdr(list_adt__list_adt_t ivar_1, list_adt__list_adt_t ivar_3){
        list_adt__cons_t  result;
        list_adt__cons_t ivar_2;
        //copying to list_adt__cons from list_adt__list_adt;
        ivar_2 = (list_adt__cons_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_list_adt__list_adt(ivar_1, list_adt__T);
        result = (list_adt__cons_t)update_list_adt__cons_cdr(ivar_2, ivar_3, list_adt__T);

        
        return result;
}

list_adt__list_adt_t list_adt__list_adt_cdr(list_adt__list_adt_t ivar_1){
        list_adt__list_adt_t  result;
        list_adt__cons_t ivar_2;
        //copying to list_adt__cons from list_adt__list_adt;
        ivar_2 = (list_adt__cons_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_list_adt__list_adt(ivar_1, list_adt__T);
        result = (list_adt__list_adt_t)ivar_2->cdr;
        result->count++;
        release_list_adt__cons(ivar_2);

        
        return result;
}

list_adt__list_adt_t list_adt__null(void){
        list_adt__list_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        list_adt__list_adt_t tmp2012 = new_list_adt__list_adt();;
        result = (list_adt__list_adt_t)tmp2012;
        tmp2012->list_adt__list_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

list_adt__list_adt_t list_adt__cons(list_adt__T_t ivar_2, list_adt__list_adt_t ivar_3){
        list_adt__list_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        list_adt__cons_t tmp2013 = new_list_adt__cons();;
        result = (list_adt__list_adt_t)tmp2013;
        tmp2013->list_adt__list_adt_index = (uint8_t)ivar_1;
        tmp2013->car = (list_adt__T_t)ivar_2;
        tmp2013->cdr = (list_adt__list_adt_t)ivar_3;

        
        return result;
}

list_adt_funtype_2_t list_adt__list_ord(type_actual_t list_adt__T){
        list_adt_funtype_2_t  result;
        pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        
        return result;
}

uint8_t list_adt__ord(type_actual_t list_adt__T, list_adt__list_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
        if (ivar_3){ 
             result = (uint8_t)0;
} else {
        
             result = (uint8_t)1;
};

        
        return result;
}

list_adt_funtype_3_t list_adt__every__1(type_actual_t list_adt__T, list_adt_funtype_4_t ivar_1){
        list_adt_funtype_3_t  result;
        list_adt_closure_5_t cl2016;
        cl2016 = new_list_adt_closure_5();
        cl2016->fvar_1 = (list_adt_funtype_4_t)ivar_1;
        if (cl2016->fvar_1 != NULL) cl2016->fvar_1->count++;
        cl2016->fvar_2 = (type_actual_t)list_adt__T;
        release_list_adt_funtype_4(ivar_1, list_adt__T);
        result = (list_adt_funtype_3_t)cl2016;

        
        return result;
}

bool_t list_adt__every__2(type_actual_t list_adt__T, list_adt_funtype_4_t ivar_1, list_adt__list_adt_t ivar_3){
        bool_t  result;
        bool_t ivar_5;
        pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
        if (ivar_5){ 
             release_list_adt_funtype_4(ivar_1, list_adt__T);
             result = (bool_t) true;
} else {
        
             list_adt__T_t ivar_8;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             bool_t ivar_14;
             ivar_14 = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_8);
             ivar_1->ftbl->rptr(ivar_1);
             if (ivar_14){  
           pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
} else {
             
           result = (bool_t) false;
};
};

        
        return result;
}

list_adt_funtype_3_t list_adt__some__1(type_actual_t list_adt__T, list_adt_funtype_4_t ivar_1){
        list_adt_funtype_3_t  result;
        list_adt_closure_6_t cl2019;
        cl2019 = new_list_adt_closure_6();
        cl2019->fvar_1 = (list_adt_funtype_4_t)ivar_1;
        if (cl2019->fvar_1 != NULL) cl2019->fvar_1->count++;
        cl2019->fvar_2 = (type_actual_t)list_adt__T;
        release_list_adt_funtype_4(ivar_1, list_adt__T);
        result = (list_adt_funtype_3_t)cl2019;

        
        return result;
}

bool_t list_adt__some__2(type_actual_t list_adt__T, list_adt_funtype_4_t ivar_1, list_adt__list_adt_t ivar_3){
        bool_t  result;
        bool_t ivar_5;
        pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
        if (ivar_5){ 
             release_list_adt_funtype_4(ivar_1, list_adt__T);
             result = (bool_t) false;
} else {
        
             list_adt__T_t ivar_8;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             bool_t ivar_14;
             ivar_14 = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_8);
             ivar_1->ftbl->rptr(ivar_1);
             if (ivar_14){  
           result = (bool_t) true;
} else {
             
           pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
};
};

        
        return result;
}

bool_t list_adt__subterm(type_actual_t list_adt__T, list_adt__list_adt_t ivar_1, list_adt__list_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_3;
        ivar_2->count++;
        ivar_3 = (bool_t) equal_list_adt__list_adt(ivar_1, ivar_2, list_adt__T);
        if (ivar_3){ 
             result = (bool_t) true;
} else {
        
             bool_t ivar_9;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             if (ivar_9){  
           result = (bool_t) false;
} else {
             
           pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
};
};

        
        return result;
}

bool_t list_adt__doublelessp(type_actual_t list_adt__T, list_adt__list_adt_t ivar_1, list_adt__list_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_4;
        pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
        if (ivar_4){ 
             release_list_adt__list_adt(ivar_1, list_adt__T);
             result = (bool_t) false;
} else {
        
             list_adt__list_adt_t ivar_8;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             bool_t ivar_13;
             ivar_13 = (bool_t) equal_list_adt__list_adt(ivar_1, ivar_8, list_adt__T);
             if (ivar_13){  
           result = (bool_t) true;
} else {
             
           pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
};
};

        
        return result;
}

list_adt_funtype_7_t list_adt__reduce_nat(type_actual_t list_adt__T, mpz_ptr_t ivar_1, list_adt_funtype_9_t ivar_2){
        list_adt_funtype_7_t  result;
        list_adt_closure_10_t cl2028;
        cl2028 = new_list_adt_closure_10();
        cl2028->fvar_1 = (type_actual_t)list_adt__T;
        cl2028->fvar_2 = (list_adt_funtype_9_t)ivar_2;
        if (cl2028->fvar_2 != NULL) cl2028->fvar_2->count++;
        mpz_set(cl2028->fvar_3, ivar_1);
        release_list_adt_funtype_9(ivar_2, list_adt__T);
        result = (list_adt_funtype_7_t)cl2028;

        
        return result;
}

list_adt_funtype_7_t list_adt__REDUCE_nat(type_actual_t list_adt__T, list_adt_funtype_7_t ivar_1, list_adt_funtype_12_t ivar_3){
        list_adt_funtype_7_t  result;
        list_adt_closure_13_t cl2036;
        cl2036 = new_list_adt_closure_13();
        cl2036->fvar_1 = (type_actual_t)list_adt__T;
        cl2036->fvar_2 = (list_adt_funtype_12_t)ivar_3;
        if (cl2036->fvar_2 != NULL) cl2036->fvar_2->count++;
        cl2036->fvar_3 = (list_adt_funtype_7_t)ivar_1;
        if (cl2036->fvar_3 != NULL) cl2036->fvar_3->count++;
        release_list_adt_funtype_12(ivar_3, list_adt__T);
        release_list_adt_funtype_7(ivar_1, list_adt__T);
        result = (list_adt_funtype_7_t)cl2036;

        
        return result;
}

list_adt_funtype_14_t list_adt__reduce_ordinal(type_actual_t list_adt__T, ordstruct_adt__ordstruct_adt_t ivar_1, list_adt_funtype_16_t ivar_2){
        list_adt_funtype_14_t  result;
        list_adt_closure_17_t cl2042;
        cl2042 = new_list_adt_closure_17();
        cl2042->fvar_1 = (type_actual_t)list_adt__T;
        cl2042->fvar_2 = (list_adt_funtype_16_t)ivar_2;
        if (cl2042->fvar_2 != NULL) cl2042->fvar_2->count++;
        cl2042->fvar_3 = (ordstruct_adt__ordstruct_adt_t)ivar_1;
        if (cl2042->fvar_3 != NULL) cl2042->fvar_3->count++;
        release_list_adt_funtype_16(ivar_2, list_adt__T);
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (list_adt_funtype_14_t)cl2042;

        
        return result;
}

list_adt_funtype_14_t list_adt__REDUCE_ordinal(type_actual_t list_adt__T, list_adt_funtype_14_t ivar_1, list_adt_funtype_19_t ivar_3){
        list_adt_funtype_14_t  result;
        list_adt_closure_20_t cl2050;
        cl2050 = new_list_adt_closure_20();
        cl2050->fvar_1 = (type_actual_t)list_adt__T;
        cl2050->fvar_2 = (list_adt_funtype_19_t)ivar_3;
        if (cl2050->fvar_2 != NULL) cl2050->fvar_2->count++;
        cl2050->fvar_3 = (list_adt_funtype_14_t)ivar_1;
        if (cl2050->fvar_3 != NULL) cl2050->fvar_3->count++;
        release_list_adt_funtype_19(ivar_3, list_adt__T);
        release_list_adt_funtype_14(ivar_1, list_adt__T);
        result = (list_adt_funtype_14_t)cl2050;

        
        return result;
}