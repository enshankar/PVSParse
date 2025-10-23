//Code generated using pvs2ir2c
#include "filters_c.h"

void release_filters_funtype_0(filters_funtype_0_t x, type_actual_t filters__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

filters_funtype_0_t copy_filters_funtype_0(filters_funtype_0_t x){return x->ftbl->cptr(x);}

bool_t equal_filters_funtype_0(filters_funtype_0_t x, filters_funtype_0_t y, type_actual_t filters__T){
        return false;}

char* json_filters_funtype_0(filters_funtype_0_t x, type_actual_t filters__T){char * result = safe_malloc(27); sprintf(result, "%s", "\"filters_funtype_0\""); return result;}


bool_t f_filters_closure_1(struct filters_closure_1_s * closure, filters__T_t bvar){
        bool_t result = h_filters_closure_1(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

bool_t m_filters_closure_1(struct filters_closure_1_s * closure, filters__T_t bvar){
        return h_filters_closure_1(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_filters_closure_1(filters__T_t ivar_6, filters_funtype_0_t ivar_1, type_actual_t filters__T, filters_funtype_0_t ivar_3){
        bool_t result;
        bool_t ivar_7;
        ivar_6->count++;
        ivar_7 = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_6);
        if (ivar_7){ 
             result = (bool_t)ivar_3->ftbl->fptr(ivar_3, ivar_6);
} else {
        
             filters__T->release_ptr(ivar_6, filters__T);
             result = (bool_t) false;
};

        return result;
}

filters_closure_1_t new_filters_closure_1(void){
        static struct filters_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(filters_funtype_0_t, filters__T_t))&f_filters_closure_1, .mptr = (bool_t (*)(filters_funtype_0_t, filters__T_t))&m_filters_closure_1, .rptr =  (void (*)(filters_funtype_0_t))&release_filters_closure_1, .cptr = (filters_funtype_0_t (*)(filters_funtype_0_t))&copy_filters_closure_1};
        filters_closure_1_t tmp = (filters_closure_1_t) safe_malloc(sizeof(struct filters_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_filters_closure_1(filters_funtype_0_t closure, type_actual_t filters__T){
        filters_closure_1_t x = (filters_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
         release_filters_funtype_0(x->fvar_1, filters__T);
         release_filters_funtype_0(x->fvar_3, filters__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

filters_closure_1_t copy_filters_closure_1(filters_closure_1_t x){
        filters_closure_1_t y = new_filters_closure_1();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            filters_funtype_0_htbl_t new_htbl = (filters_funtype_0_htbl_t) safe_malloc(sizeof(struct filters_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            filters_funtype_0_hashentry_t * new_data = (filters_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct filters_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct filters_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_filters_funtype_2(filters_funtype_2_t x, type_actual_t filters__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

filters_funtype_2_t copy_filters_funtype_2(filters_funtype_2_t x){return x->ftbl->cptr(x);}

bool_t equal_filters_funtype_2(filters_funtype_2_t x, filters_funtype_2_t y, type_actual_t filters__T){
        return false;}

char* json_filters_funtype_2(filters_funtype_2_t x, type_actual_t filters__T){char * result = safe_malloc(27); sprintf(result, "%s", "\"filters_funtype_2\""); return result;}


filters_funtype_0_t f_filters_closure_3(struct filters_closure_3_s * closure, filters_funtype_0_t bvar){
        filters_funtype_0_t result = h_filters_closure_3(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

filters_funtype_0_t m_filters_closure_3(struct filters_closure_3_s * closure, filters_funtype_0_t bvar){
        return h_filters_closure_3(bvar, closure->fvar_1, closure->fvar_2);}

extern filters_funtype_0_t h_filters_closure_3(filters_funtype_0_t ivar_6, filters_funtype_0_t ivar_1, type_actual_t filters__T){
        filters_funtype_0_t result;
        filters_closure_4_t cl10253;
        cl10253 = new_filters_closure_4();
        cl10253->fvar_1 = (filters_funtype_0_t)ivar_6;
        if (cl10253->fvar_1 != NULL) cl10253->fvar_1->count++;
        cl10253->fvar_2 = (type_actual_t)filters__T;
        cl10253->fvar_3 = (filters_funtype_0_t)ivar_1;
        if (cl10253->fvar_3 != NULL) cl10253->fvar_3->count++;
        release_filters_funtype_0(ivar_6, filters__T);
        result = (filters_funtype_0_t)cl10253;

        return result;
}

filters_closure_3_t new_filters_closure_3(void){
        static struct filters_funtype_2_ftbl_s ftbl = {.fptr = (filters_funtype_0_t (*)(filters_funtype_2_t, filters_funtype_0_t))&f_filters_closure_3, .mptr = (filters_funtype_0_t (*)(filters_funtype_2_t, filters_funtype_0_t))&m_filters_closure_3, .rptr =  (void (*)(filters_funtype_2_t))&release_filters_closure_3, .cptr = (filters_funtype_2_t (*)(filters_funtype_2_t))&copy_filters_closure_3};
        filters_closure_3_t tmp = (filters_closure_3_t) safe_malloc(sizeof(struct filters_closure_3_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_filters_closure_3(filters_funtype_2_t closure, type_actual_t filters__T){
        filters_closure_3_t x = (filters_closure_3_t)closure;
        x->count--;
        if (x->count <= 0){
         release_filters_funtype_0(x->fvar_1, filters__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

filters_closure_3_t copy_filters_closure_3(filters_closure_3_t x){
        filters_closure_3_t y = new_filters_closure_3();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        if (x->htbl != NULL){
            filters_funtype_2_htbl_t new_htbl = (filters_funtype_2_htbl_t) safe_malloc(sizeof(struct filters_funtype_2_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            filters_funtype_2_hashentry_t * new_data = (filters_funtype_2_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct filters_funtype_2_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct filters_funtype_2_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_filters_closure_4(struct filters_closure_4_s * closure, filters__T_t bvar){
        bool_t result = h_filters_closure_4(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

bool_t m_filters_closure_4(struct filters_closure_4_s * closure, filters__T_t bvar){
        return h_filters_closure_4(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_filters_closure_4(filters__T_t ivar_9, filters_funtype_0_t ivar_6, type_actual_t filters__T, filters_funtype_0_t ivar_1){
        bool_t result;
        bool_t ivar_10;
        ivar_9->count++;
        ivar_10 = (bool_t)ivar_6->ftbl->fptr(ivar_6, ivar_9);
        if (ivar_10){ 
             result = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_9);
} else {
        
             filters__T->release_ptr(ivar_9, filters__T);
             result = (bool_t) false;
};

        return result;
}

filters_closure_4_t new_filters_closure_4(void){
        static struct filters_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(filters_funtype_0_t, filters__T_t))&f_filters_closure_4, .mptr = (bool_t (*)(filters_funtype_0_t, filters__T_t))&m_filters_closure_4, .rptr =  (void (*)(filters_funtype_0_t))&release_filters_closure_4, .cptr = (filters_funtype_0_t (*)(filters_funtype_0_t))&copy_filters_closure_4};
        filters_closure_4_t tmp = (filters_closure_4_t) safe_malloc(sizeof(struct filters_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_filters_closure_4(filters_funtype_0_t closure, type_actual_t filters__T){
        filters_closure_4_t x = (filters_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
         release_filters_funtype_0(x->fvar_1, filters__T);
         release_filters_funtype_0(x->fvar_3, filters__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

filters_closure_4_t copy_filters_closure_4(filters_closure_4_t x){
        filters_closure_4_t y = new_filters_closure_4();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            filters_funtype_0_htbl_t new_htbl = (filters_funtype_0_htbl_t) safe_malloc(sizeof(struct filters_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            filters_funtype_0_hashentry_t * new_data = (filters_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct filters_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct filters_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_filters_funtype_5(filters_funtype_5_t x, type_actual_t filters__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

filters_funtype_5_t copy_filters_funtype_5(filters_funtype_5_t x){return x->ftbl->cptr(x);}

bool_t equal_filters_funtype_5(filters_funtype_5_t x, filters_funtype_5_t y, type_actual_t filters__T){
        return false;}

char* json_filters_funtype_5(filters_funtype_5_t x, type_actual_t filters__T){char * result = safe_malloc(27); sprintf(result, "%s", "\"filters_funtype_5\""); return result;}


list_adt__list_adt_t f_filters_closure_6(struct filters_closure_6_s * closure, list_adt__list_adt_t bvar){
        list_adt__list_adt_t result = h_filters_closure_6(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

list_adt__list_adt_t m_filters_closure_6(struct filters_closure_6_s * closure, list_adt__list_adt_t bvar){
        return h_filters_closure_6(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern list_adt__list_adt_t h_filters_closure_6(list_adt__list_adt_t ivar_4, filters_funtype_0_t ivar_1, type_actual_t filters__T, type_actual_t ivar_6){
        list_adt__list_adt_t result;
        bool_t ivar_8;
        pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
        if (ivar_8){ 
             result = (list_adt__list_adt_t)list_adt__null();
} else {
        
             filters__T_t ivar_11;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             list_adt__list_adt_t ivar_12;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             bool_t ivar_17;
             ivar_17 = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_11);
             if (ivar_17){  
           release_list_adt__list_adt(ivar_12);
           pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
} else {
             
           filters_funtype_5_t ivar_40;
           /* T */ type_actual_t ivar_44;
           ivar_44 = (type_actual_t)filters__T;
           ivar_1->count++;
           ivar_40 = (filters_funtype_5_t)filters__filter__4((type_actual_t)ivar_44, (filters_funtype_0_t)ivar_1);
           result = (list_adt__list_adt_t)ivar_40->ftbl->fptr(ivar_40, ivar_12);
           ivar_40->ftbl->rptr(ivar_40);
};
};

        return result;
}

filters_closure_6_t new_filters_closure_6(void){
        static struct filters_funtype_5_ftbl_s ftbl = {.fptr = (list_adt__list_adt_t (*)(filters_funtype_5_t, list_adt__list_adt_t))&f_filters_closure_6, .mptr = (list_adt__list_adt_t (*)(filters_funtype_5_t, list_adt__list_adt_t))&m_filters_closure_6, .rptr =  (void (*)(filters_funtype_5_t))&release_filters_closure_6, .cptr = (filters_funtype_5_t (*)(filters_funtype_5_t))&copy_filters_closure_6};
        filters_closure_6_t tmp = (filters_closure_6_t) safe_malloc(sizeof(struct filters_closure_6_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_filters_closure_6(filters_funtype_5_t closure, type_actual_t filters__T){
        filters_closure_6_t x = (filters_closure_6_t)closure;
        x->count--;
        if (x->count <= 0){
         release_filters_funtype_0(x->fvar_1, filters__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

filters_closure_6_t copy_filters_closure_6(filters_closure_6_t x){
        filters_closure_6_t y = new_filters_closure_6();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = (type_actual_t)x->fvar_3;
        if (x->htbl != NULL){
            filters_funtype_5_htbl_t new_htbl = (filters_funtype_5_htbl_t) safe_malloc(sizeof(struct filters_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            filters_funtype_5_hashentry_t * new_data = (filters_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct filters_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct filters_funtype_5_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern filters_funtype_0_t filters__filter__1(type_actual_t filters__T, filters_funtype_0_t ivar_1, filters_funtype_0_t ivar_3){
        filters_funtype_0_t  result;
        filters_closure_1_t cl10252;
        cl10252 = new_filters_closure_1();
        cl10252->fvar_1 = (filters_funtype_0_t)ivar_1;
        if (cl10252->fvar_1 != NULL) cl10252->fvar_1->count++;
        cl10252->fvar_2 = (type_actual_t)filters__T;
        cl10252->fvar_3 = (filters_funtype_0_t)ivar_3;
        if (cl10252->fvar_3 != NULL) cl10252->fvar_3->count++;
        release_filters_funtype_0(ivar_1, filters__T);
        release_filters_funtype_0(ivar_3, filters__T);
        result = (filters_funtype_0_t)cl10252;

        
        return result;
}

extern filters_funtype_2_t filters__filter__2(type_actual_t filters__T, filters_funtype_0_t ivar_1){
        filters_funtype_2_t  result;
        filters_closure_3_t cl10254;
        cl10254 = new_filters_closure_3();
        cl10254->fvar_1 = (filters_funtype_0_t)ivar_1;
        if (cl10254->fvar_1 != NULL) cl10254->fvar_1->count++;
        cl10254->fvar_2 = (type_actual_t)filters__T;
        release_filters_funtype_0(ivar_1, filters__T);
        result = (filters_funtype_2_t)cl10254;

        
        return result;
}

extern list_adt__list_adt_t filters__filter__3(type_actual_t filters__T, list_adt__list_adt_t ivar_1, filters_funtype_0_t ivar_2){
        list_adt__list_adt_t  result;
        type_actual_t ivar_5;
        ivar_5 = (type_actual_t)actual_filters__T(filters__T);
        bool_t ivar_7;
        pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
        if (ivar_7){ 
             release_filters_funtype_0(ivar_2, filters__T);
             result = (list_adt__list_adt_t)list_adt__null();
} else {
        
             filters__T_t ivar_10;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             list_adt__list_adt_t ivar_11;
             pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
             bool_t ivar_16;
             ivar_16 = (bool_t)ivar_2->ftbl->fptr(ivar_2, ivar_10);
             if (ivar_16){  
           release_list_adt__list_adt(ivar_11);
           release_filters_funtype_0(ivar_2, filters__T);
           pvs2cerror("Non-executable theory: list_adt", PVS2C_EXIT_ERROR);
} else {
             
           /* T */ type_actual_t ivar_35;
           ivar_35 = (type_actual_t)filters__T;
           result = (list_adt__list_adt_t)filters__filter__3((type_actual_t)ivar_35, (list_adt__list_adt_t)ivar_11, (filters_funtype_0_t)ivar_2);
};
};
        safe_free(ivar_5);

        
        return result;
}

extern filters_funtype_5_t filters__filter__4(type_actual_t filters__T, filters_funtype_0_t ivar_1){
        filters_funtype_5_t  result;
        type_actual_t ivar_6;
        ivar_6 = (type_actual_t)actual_filters__T(filters__T);
        filters_closure_6_t cl10294;
        cl10294 = new_filters_closure_6();
        cl10294->fvar_1 = (filters_funtype_0_t)ivar_1;
        if (cl10294->fvar_1 != NULL) cl10294->fvar_1->count++;
        cl10294->fvar_2 = (type_actual_t)filters__T;
        cl10294->fvar_3 = (type_actual_t)ivar_6;
        release_filters_funtype_0(ivar_1, filters__T);
        result = (filters_funtype_5_t)cl10294;
        safe_free(ivar_6);

        
        return result;
}