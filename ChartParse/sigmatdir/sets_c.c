//Code generated using pvs2ir2c
#include "sets_c.h"

void release_sets__set(sets__set_t x, type_actual_t sets__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sets__set_t copy_sets__set(sets__set_t x){return x->ftbl->cptr(x);}

bool_t equal_sets__set(sets__set_t x, sets__set_t y, type_actual_t sets__T){
        return false;}

char* json_sets__set(sets__set_t x, type_actual_t sets__T){char * result = safe_malloc(19); sprintf(result, "%s", "\"sets__set\""); return result;}


bool_t f_sets_closure_1(struct sets_closure_1_s * closure, sets__T_t bvar){
        bool_t result = h_sets_closure_1(bvar, closure->fvar_1); 
        return result;}

bool_t m_sets_closure_1(struct sets_closure_1_s * closure, sets__T_t bvar){
        return h_sets_closure_1(bvar, closure->fvar_1);}

extern bool_t h_sets_closure_1(sets__T_t ivar_7, type_actual_t sets__T){
        bool_t result;
        result = (bool_t)sets__emptyset((type_actual_t)sets__T, (sets__T_t)ivar_7);

        return result;
}

sets_closure_1_t new_sets_closure_1(void){
        static struct sets__set_ftbl_s ftbl = {.fptr = (bool_t (*)(sets__set_t, sets__T_t))&f_sets_closure_1, .mptr = (bool_t (*)(sets__set_t, sets__T_t))&m_sets_closure_1, .rptr =  (void (*)(sets__set_t))&release_sets_closure_1, .cptr = (sets__set_t (*)(sets__set_t))&copy_sets_closure_1};
        sets_closure_1_t tmp = (sets_closure_1_t) safe_malloc(sizeof(struct sets_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sets_closure_1(sets__set_t closure, type_actual_t sets__T){
        sets_closure_1_t x = (sets_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sets_closure_1_t copy_sets_closure_1(sets_closure_1_t x){
        sets_closure_1_t y = new_sets_closure_1();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        if (x->htbl != NULL){
            sets__set_htbl_t new_htbl = (sets__set_htbl_t) safe_malloc(sizeof(struct sets__set_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sets__set_hashentry_t * new_data = (sets__set_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sets__set_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sets__set_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sets_closure_2(struct sets_closure_2_s * closure, sets__T_t bvar){
        bool_t result = h_sets_closure_2(bvar, closure->fvar_1); 
        return result;}

bool_t m_sets_closure_2(struct sets_closure_2_s * closure, sets__T_t bvar){
        return h_sets_closure_2(bvar, closure->fvar_1);}

extern bool_t h_sets_closure_2(sets__T_t ivar_12, type_actual_t sets__T){
        bool_t result;
        result = (bool_t)sets__fullset((type_actual_t)sets__T, (sets__T_t)ivar_12);

        return result;
}

sets_closure_2_t new_sets_closure_2(void){
        static struct sets__set_ftbl_s ftbl = {.fptr = (bool_t (*)(sets__set_t, sets__T_t))&f_sets_closure_2, .mptr = (bool_t (*)(sets__set_t, sets__T_t))&m_sets_closure_2, .rptr =  (void (*)(sets__set_t))&release_sets_closure_2, .cptr = (sets__set_t (*)(sets__set_t))&copy_sets_closure_2};
        sets_closure_2_t tmp = (sets_closure_2_t) safe_malloc(sizeof(struct sets_closure_2_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sets_closure_2(sets__set_t closure, type_actual_t sets__T){
        sets_closure_2_t x = (sets_closure_2_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sets_closure_2_t copy_sets_closure_2(sets_closure_2_t x){
        sets_closure_2_t y = new_sets_closure_2();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        if (x->htbl != NULL){
            sets__set_htbl_t new_htbl = (sets__set_htbl_t) safe_malloc(sizeof(struct sets__set_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sets__set_hashentry_t * new_data = (sets__set_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sets__set_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sets__set_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sets_closure_3(struct sets_closure_3_s * closure, sets__T_t bvar){
        bool_t result = h_sets_closure_3(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

bool_t m_sets_closure_3(struct sets_closure_3_s * closure, sets__T_t bvar){
        return h_sets_closure_3(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_sets_closure_3(sets__T_t ivar_3, type_actual_t sets__T, sets__set_t ivar_1, sets__set_t ivar_2){
        bool_t result;
        bool_t ivar_4;
        /* T */ type_actual_t ivar_9;
        ivar_9 = (type_actual_t)sets__T;
        ivar_3->count++;
        ivar_1->count++;
        ivar_4 = (bool_t)sets__member((type_actual_t)ivar_9, (sets__T_t)ivar_3, (sets__set_t)ivar_1);
        if (ivar_4){ 
             sets__T->release_ptr(ivar_3, sets__T);
             result = (bool_t) true;
} else {
        
             /* T */ type_actual_t ivar_15;
             ivar_15 = (type_actual_t)sets__T;
             ivar_2->count++;
             result = (bool_t)sets__member((type_actual_t)ivar_15, (sets__T_t)ivar_3, (sets__set_t)ivar_2);
};

        return result;
}

sets_closure_3_t new_sets_closure_3(void){
        static struct sets__set_ftbl_s ftbl = {.fptr = (bool_t (*)(sets__set_t, sets__T_t))&f_sets_closure_3, .mptr = (bool_t (*)(sets__set_t, sets__T_t))&m_sets_closure_3, .rptr =  (void (*)(sets__set_t))&release_sets_closure_3, .cptr = (sets__set_t (*)(sets__set_t))&copy_sets_closure_3};
        sets_closure_3_t tmp = (sets_closure_3_t) safe_malloc(sizeof(struct sets_closure_3_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sets_closure_3(sets__set_t closure, type_actual_t sets__T){
        sets_closure_3_t x = (sets_closure_3_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sets__set(x->fvar_2, sets__T);
         release_sets__set(x->fvar_3, sets__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

sets_closure_3_t copy_sets_closure_3(sets_closure_3_t x){
        sets_closure_3_t y = new_sets_closure_3();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sets__set_htbl_t new_htbl = (sets__set_htbl_t) safe_malloc(sizeof(struct sets__set_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sets__set_hashentry_t * new_data = (sets__set_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sets__set_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sets__set_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sets_closure_4(struct sets_closure_4_s * closure, sets__T_t bvar){
        bool_t result = h_sets_closure_4(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

bool_t m_sets_closure_4(struct sets_closure_4_s * closure, sets__T_t bvar){
        return h_sets_closure_4(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_sets_closure_4(sets__T_t ivar_3, type_actual_t sets__T, sets__set_t ivar_1, sets__set_t ivar_2){
        bool_t result;
        bool_t ivar_4;
        /* T */ type_actual_t ivar_9;
        ivar_9 = (type_actual_t)sets__T;
        ivar_3->count++;
        ivar_1->count++;
        ivar_4 = (bool_t)sets__member((type_actual_t)ivar_9, (sets__T_t)ivar_3, (sets__set_t)ivar_1);
        if (ivar_4){ 
             /* T */ type_actual_t ivar_15;
             ivar_15 = (type_actual_t)sets__T;
             ivar_2->count++;
             result = (bool_t)sets__member((type_actual_t)ivar_15, (sets__T_t)ivar_3, (sets__set_t)ivar_2);
} else {
        
             sets__T->release_ptr(ivar_3, sets__T);
             result = (bool_t) false;
};

        return result;
}

sets_closure_4_t new_sets_closure_4(void){
        static struct sets__set_ftbl_s ftbl = {.fptr = (bool_t (*)(sets__set_t, sets__T_t))&f_sets_closure_4, .mptr = (bool_t (*)(sets__set_t, sets__T_t))&m_sets_closure_4, .rptr =  (void (*)(sets__set_t))&release_sets_closure_4, .cptr = (sets__set_t (*)(sets__set_t))&copy_sets_closure_4};
        sets_closure_4_t tmp = (sets_closure_4_t) safe_malloc(sizeof(struct sets_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sets_closure_4(sets__set_t closure, type_actual_t sets__T){
        sets_closure_4_t x = (sets_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sets__set(x->fvar_2, sets__T);
         release_sets__set(x->fvar_3, sets__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

sets_closure_4_t copy_sets_closure_4(sets_closure_4_t x){
        sets_closure_4_t y = new_sets_closure_4();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sets__set_htbl_t new_htbl = (sets__set_htbl_t) safe_malloc(sizeof(struct sets__set_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sets__set_hashentry_t * new_data = (sets__set_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sets__set_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sets__set_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sets_closure_5(struct sets_closure_5_s * closure, sets__T_t bvar){
        bool_t result = h_sets_closure_5(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_sets_closure_5(struct sets_closure_5_s * closure, sets__T_t bvar){
        return h_sets_closure_5(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_sets_closure_5(sets__T_t ivar_2, sets__set_t ivar_1, type_actual_t sets__T){
        bool_t result;
        bool_t ivar_3;
        /* T */ type_actual_t ivar_7;
        ivar_7 = (type_actual_t)sets__T;
        ivar_1->count++;
        ivar_3 = (bool_t)sets__member((type_actual_t)ivar_7, (sets__T_t)ivar_2, (sets__set_t)ivar_1);
        result = !ivar_3;

        return result;
}

sets_closure_5_t new_sets_closure_5(void){
        static struct sets__set_ftbl_s ftbl = {.fptr = (bool_t (*)(sets__set_t, sets__T_t))&f_sets_closure_5, .mptr = (bool_t (*)(sets__set_t, sets__T_t))&m_sets_closure_5, .rptr =  (void (*)(sets__set_t))&release_sets_closure_5, .cptr = (sets__set_t (*)(sets__set_t))&copy_sets_closure_5};
        sets_closure_5_t tmp = (sets_closure_5_t) safe_malloc(sizeof(struct sets_closure_5_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sets_closure_5(sets__set_t closure, type_actual_t sets__T){
        sets_closure_5_t x = (sets_closure_5_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sets__set(x->fvar_1, sets__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

sets_closure_5_t copy_sets_closure_5(sets_closure_5_t x){
        sets_closure_5_t y = new_sets_closure_5();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        if (x->htbl != NULL){
            sets__set_htbl_t new_htbl = (sets__set_htbl_t) safe_malloc(sizeof(struct sets__set_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sets__set_hashentry_t * new_data = (sets__set_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sets__set_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sets__set_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sets_closure_6(struct sets_closure_6_s * closure, sets__T_t bvar){
        bool_t result = h_sets_closure_6(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

bool_t m_sets_closure_6(struct sets_closure_6_s * closure, sets__T_t bvar){
        return h_sets_closure_6(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_sets_closure_6(sets__T_t ivar_3, type_actual_t sets__T, sets__set_t ivar_1, sets__set_t ivar_2){
        bool_t result;
        bool_t ivar_4;
        /* T */ type_actual_t ivar_9;
        ivar_9 = (type_actual_t)sets__T;
        ivar_3->count++;
        ivar_1->count++;
        ivar_4 = (bool_t)sets__member((type_actual_t)ivar_9, (sets__T_t)ivar_3, (sets__set_t)ivar_1);
        if (ivar_4){ 
             bool_t ivar_12;
             /* T */ type_actual_t ivar_16;
             ivar_16 = (type_actual_t)sets__T;
             ivar_2->count++;
             ivar_12 = (bool_t)sets__member((type_actual_t)ivar_16, (sets__T_t)ivar_3, (sets__set_t)ivar_2);
             result = !ivar_12;
} else {
        
             sets__T->release_ptr(ivar_3, sets__T);
             result = (bool_t) false;
};

        return result;
}

sets_closure_6_t new_sets_closure_6(void){
        static struct sets__set_ftbl_s ftbl = {.fptr = (bool_t (*)(sets__set_t, sets__T_t))&f_sets_closure_6, .mptr = (bool_t (*)(sets__set_t, sets__T_t))&m_sets_closure_6, .rptr =  (void (*)(sets__set_t))&release_sets_closure_6, .cptr = (sets__set_t (*)(sets__set_t))&copy_sets_closure_6};
        sets_closure_6_t tmp = (sets_closure_6_t) safe_malloc(sizeof(struct sets_closure_6_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sets_closure_6(sets__set_t closure, type_actual_t sets__T){
        sets_closure_6_t x = (sets_closure_6_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sets__set(x->fvar_2, sets__T);
         release_sets__set(x->fvar_3, sets__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

sets_closure_6_t copy_sets_closure_6(sets_closure_6_t x){
        sets_closure_6_t y = new_sets_closure_6();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sets__set_htbl_t new_htbl = (sets__set_htbl_t) safe_malloc(sizeof(struct sets__set_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sets__set_hashentry_t * new_data = (sets__set_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sets__set_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sets__set_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sets_funtype_7(sets_funtype_7_t x, type_actual_t sets__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sets_funtype_7_t copy_sets_funtype_7(sets_funtype_7_t x){return x->ftbl->cptr(x);}

bool_t equal_sets_funtype_7(sets_funtype_7_t x, sets_funtype_7_t y, type_actual_t sets__T){
        return false;}

char* json_sets_funtype_7(sets_funtype_7_t x, type_actual_t sets__T){char * result = safe_malloc(24); sprintf(result, "%s", "\"sets_funtype_7\""); return result;}


bool_t f_sets_closure_8(struct sets_closure_8_s * closure, sets__set_t bvar){
        bool_t result = h_sets_closure_8(bvar); 
        return result;}

bool_t m_sets_closure_8(struct sets_closure_8_s * closure, sets__set_t bvar){
        return h_sets_closure_8(bvar);}

extern bool_t h_sets_closure_8(sets__set_t ivar_4){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}

sets_closure_8_t new_sets_closure_8(void){
        static struct sets_funtype_7_ftbl_s ftbl = {.fptr = (bool_t (*)(sets_funtype_7_t, sets__set_t))&f_sets_closure_8, .mptr = (bool_t (*)(sets_funtype_7_t, sets__set_t))&m_sets_closure_8, .rptr =  (void (*)(sets_funtype_7_t))&release_sets_closure_8, .cptr = (sets_funtype_7_t (*)(sets_funtype_7_t))&copy_sets_closure_8};
        sets_closure_8_t tmp = (sets_closure_8_t) safe_malloc(sizeof(struct sets_closure_8_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sets_closure_8(sets_funtype_7_t closure, type_actual_t sets__T){
        sets_closure_8_t x = (sets_closure_8_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sets_closure_8_t copy_sets_closure_8(sets_closure_8_t x){
        sets_closure_8_t y = new_sets_closure_8();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sets_funtype_7_htbl_t new_htbl = (sets_funtype_7_htbl_t) safe_malloc(sizeof(struct sets_funtype_7_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sets_funtype_7_hashentry_t * new_data = (sets_funtype_7_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sets_funtype_7_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sets_funtype_7_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sets_closure_9(struct sets_closure_9_s * closure, sets__set_t bvar){
        bool_t result = h_sets_closure_9(bvar); 
        return result;}

bool_t m_sets_closure_9(struct sets_closure_9_s * closure, sets__set_t bvar){
        return h_sets_closure_9(bvar);}

extern bool_t h_sets_closure_9(sets__set_t ivar_4){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}

sets_closure_9_t new_sets_closure_9(void){
        static struct sets_funtype_7_ftbl_s ftbl = {.fptr = (bool_t (*)(sets_funtype_7_t, sets__set_t))&f_sets_closure_9, .mptr = (bool_t (*)(sets_funtype_7_t, sets__set_t))&m_sets_closure_9, .rptr =  (void (*)(sets_funtype_7_t))&release_sets_closure_9, .cptr = (sets_funtype_7_t (*)(sets_funtype_7_t))&copy_sets_closure_9};
        sets_closure_9_t tmp = (sets_closure_9_t) safe_malloc(sizeof(struct sets_closure_9_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sets_closure_9(sets_funtype_7_t closure, type_actual_t sets__T){
        sets_closure_9_t x = (sets_closure_9_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sets_closure_9_t copy_sets_closure_9(sets_closure_9_t x){
        sets_closure_9_t y = new_sets_closure_9();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sets_funtype_7_htbl_t new_htbl = (sets_funtype_7_htbl_t) safe_malloc(sizeof(struct sets_funtype_7_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sets_funtype_7_hashentry_t * new_data = (sets_funtype_7_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sets_funtype_7_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sets_funtype_7_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sets_closure_10(struct sets_closure_10_s * closure, sets__T_t bvar){
        bool_t result = h_sets_closure_10(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_sets_closure_10(struct sets_closure_10_s * closure, sets__T_t bvar){
        return h_sets_closure_10(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_sets_closure_10(sets__T_t ivar_2, sets__T_t ivar_1, type_actual_t sets__T){
        bool_t result;
        ivar_1->count++;
        result = (bool_t) sets__T->equal_ptr(ivar_2, ivar_1, sets__T);

        return result;
}

sets_closure_10_t new_sets_closure_10(void){
        static struct sets__set_ftbl_s ftbl = {.fptr = (bool_t (*)(sets__set_t, sets__T_t))&f_sets_closure_10, .mptr = (bool_t (*)(sets__set_t, sets__T_t))&m_sets_closure_10, .rptr =  (void (*)(sets__set_t))&release_sets_closure_10, .cptr = (sets__set_t (*)(sets__set_t))&copy_sets_closure_10};
        sets_closure_10_t tmp = (sets_closure_10_t) safe_malloc(sizeof(struct sets_closure_10_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sets_closure_10(sets__set_t closure, type_actual_t sets__T){
        sets_closure_10_t x = (sets_closure_10_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sets_closure_10_t copy_sets_closure_10(sets_closure_10_t x){
        sets_closure_10_t y = new_sets_closure_10();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        if (x->htbl != NULL){
            sets__set_htbl_t new_htbl = (sets__set_htbl_t) safe_malloc(sizeof(struct sets__set_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sets__set_hashentry_t * new_data = (sets__set_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sets__set_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sets__set_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sets_closure_11(struct sets_closure_11_s * closure, sets__T_t bvar){
        bool_t result = h_sets_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

bool_t m_sets_closure_11(struct sets_closure_11_s * closure, sets__T_t bvar){
        return h_sets_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_sets_closure_11(sets__T_t ivar_3, sets__T_t ivar_1, type_actual_t sets__T, sets__set_t ivar_2){
        bool_t result;
        bool_t ivar_4;
        ivar_1->count++;
        ivar_3->count++;
        ivar_4 = (bool_t) sets__T->equal_ptr(ivar_1, ivar_3, sets__T);
        if (ivar_4){ 
             sets__T->release_ptr(ivar_3, sets__T);
             result = (bool_t) true;
} else {
        
             /* T */ type_actual_t ivar_12;
             ivar_12 = (type_actual_t)sets__T;
             ivar_2->count++;
             result = (bool_t)sets__member((type_actual_t)ivar_12, (sets__T_t)ivar_3, (sets__set_t)ivar_2);
};

        return result;
}

sets_closure_11_t new_sets_closure_11(void){
        static struct sets__set_ftbl_s ftbl = {.fptr = (bool_t (*)(sets__set_t, sets__T_t))&f_sets_closure_11, .mptr = (bool_t (*)(sets__set_t, sets__T_t))&m_sets_closure_11, .rptr =  (void (*)(sets__set_t))&release_sets_closure_11, .cptr = (sets__set_t (*)(sets__set_t))&copy_sets_closure_11};
        sets_closure_11_t tmp = (sets_closure_11_t) safe_malloc(sizeof(struct sets_closure_11_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sets_closure_11(sets__set_t closure, type_actual_t sets__T){
        sets_closure_11_t x = (sets_closure_11_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sets__set(x->fvar_3, sets__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

sets_closure_11_t copy_sets_closure_11(sets_closure_11_t x){
        sets_closure_11_t y = new_sets_closure_11();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sets__set_htbl_t new_htbl = (sets__set_htbl_t) safe_malloc(sizeof(struct sets__set_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sets__set_hashentry_t * new_data = (sets__set_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sets__set_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sets__set_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sets_closure_12(struct sets_closure_12_s * closure, sets__T_t bvar){
        bool_t result = h_sets_closure_12(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

bool_t m_sets_closure_12(struct sets_closure_12_s * closure, sets__T_t bvar){
        return h_sets_closure_12(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_sets_closure_12(sets__T_t ivar_3, sets__T_t ivar_1, type_actual_t sets__T, sets__set_t ivar_2){
        bool_t result;
        bool_t ivar_4;
        ivar_1->count++;
        ivar_3->count++;
        ivar_4 = (bool_t) !sets__T->equal_ptr(ivar_1, ivar_3, sets__T);
        if (ivar_4){ 
             /* T */ type_actual_t ivar_12;
             ivar_12 = (type_actual_t)sets__T;
             ivar_2->count++;
             result = (bool_t)sets__member((type_actual_t)ivar_12, (sets__T_t)ivar_3, (sets__set_t)ivar_2);
} else {
        
             sets__T->release_ptr(ivar_3, sets__T);
             result = (bool_t) false;
};

        return result;
}

sets_closure_12_t new_sets_closure_12(void){
        static struct sets__set_ftbl_s ftbl = {.fptr = (bool_t (*)(sets__set_t, sets__T_t))&f_sets_closure_12, .mptr = (bool_t (*)(sets__set_t, sets__T_t))&m_sets_closure_12, .rptr =  (void (*)(sets__set_t))&release_sets_closure_12, .cptr = (sets__set_t (*)(sets__set_t))&copy_sets_closure_12};
        sets_closure_12_t tmp = (sets_closure_12_t) safe_malloc(sizeof(struct sets_closure_12_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sets_closure_12(sets__set_t closure, type_actual_t sets__T){
        sets_closure_12_t x = (sets_closure_12_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sets__set(x->fvar_3, sets__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

sets_closure_12_t copy_sets_closure_12(sets_closure_12_t x){
        sets_closure_12_t y = new_sets_closure_12();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sets__set_htbl_t new_htbl = (sets__set_htbl_t) safe_malloc(sizeof(struct sets__set_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sets__set_hashentry_t * new_data = (sets__set_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sets__set_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sets__set_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sets_closure_13(struct sets_closure_13_s * closure, sets__T_t bvar){
        bool_t result = h_sets_closure_13(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_sets_closure_13(struct sets_closure_13_s * closure, sets__T_t bvar){
        return h_sets_closure_13(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_sets_closure_13(sets__T_t ivar_3, sets__set_t ivar_1, type_actual_t sets__T){
        bool_t result;
        /* T */ type_actual_t ivar_7;
        ivar_7 = (type_actual_t)sets__T;
        ivar_1->count++;
        result = (bool_t)sets__member((type_actual_t)ivar_7, (sets__T_t)ivar_3, (sets__set_t)ivar_1);

        return result;
}

sets_closure_13_t new_sets_closure_13(void){
        static struct sets__set_ftbl_s ftbl = {.fptr = (bool_t (*)(sets__set_t, sets__T_t))&f_sets_closure_13, .mptr = (bool_t (*)(sets__set_t, sets__T_t))&m_sets_closure_13, .rptr =  (void (*)(sets__set_t))&release_sets_closure_13, .cptr = (sets__set_t (*)(sets__set_t))&copy_sets_closure_13};
        sets_closure_13_t tmp = (sets_closure_13_t) safe_malloc(sizeof(struct sets_closure_13_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sets_closure_13(sets__set_t closure, type_actual_t sets__T){
        sets_closure_13_t x = (sets_closure_13_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sets__set(x->fvar_1, sets__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

sets_closure_13_t copy_sets_closure_13(sets_closure_13_t x){
        sets_closure_13_t y = new_sets_closure_13();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        if (x->htbl != NULL){
            sets__set_htbl_t new_htbl = (sets__set_htbl_t) safe_malloc(sizeof(struct sets__set_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sets__set_hashentry_t * new_data = (sets__set_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sets__set_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sets__set_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sets_closure_14(struct sets_closure_14_s * closure, sets__set_t bvar){
        bool_t result = h_sets_closure_14(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_sets_closure_14(struct sets_closure_14_s * closure, sets__set_t bvar){
        return h_sets_closure_14(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_sets_closure_14(sets__set_t ivar_2, sets__set_t ivar_1, type_actual_t sets__T){
        bool_t result;
        /* T */ type_actual_t ivar_6;
        ivar_6 = (type_actual_t)sets__T;
        ivar_1->count++;
        result = (bool_t)sets__subsetp((type_actual_t)ivar_6, (sets__set_t)ivar_2, (sets__set_t)ivar_1);

        return result;
}

sets_closure_14_t new_sets_closure_14(void){
        static struct sets_funtype_7_ftbl_s ftbl = {.fptr = (bool_t (*)(sets_funtype_7_t, sets__set_t))&f_sets_closure_14, .mptr = (bool_t (*)(sets_funtype_7_t, sets__set_t))&m_sets_closure_14, .rptr =  (void (*)(sets_funtype_7_t))&release_sets_closure_14, .cptr = (sets_funtype_7_t (*)(sets_funtype_7_t))&copy_sets_closure_14};
        sets_closure_14_t tmp = (sets_closure_14_t) safe_malloc(sizeof(struct sets_closure_14_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sets_closure_14(sets_funtype_7_t closure, type_actual_t sets__T){
        sets_closure_14_t x = (sets_closure_14_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sets__set(x->fvar_1, sets__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

sets_closure_14_t copy_sets_closure_14(sets_closure_14_t x){
        sets_closure_14_t y = new_sets_closure_14();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        if (x->htbl != NULL){
            sets_funtype_7_htbl_t new_htbl = (sets_funtype_7_htbl_t) safe_malloc(sizeof(struct sets_funtype_7_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sets_funtype_7_hashentry_t * new_data = (sets_funtype_7_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sets_funtype_7_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sets_funtype_7_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sets_closure_15(struct sets_closure_15_s * closure, sets__T_t bvar){
        bool_t result = h_sets_closure_15(bvar, closure->fvar_1); 
        return result;}

bool_t m_sets_closure_15(struct sets_closure_15_s * closure, sets__T_t bvar){
        return h_sets_closure_15(bvar, closure->fvar_1);}

extern bool_t h_sets_closure_15(sets__T_t ivar_2, type_actual_t sets__T){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}

sets_closure_15_t new_sets_closure_15(void){
        static struct sets__set_ftbl_s ftbl = {.fptr = (bool_t (*)(sets__set_t, sets__T_t))&f_sets_closure_15, .mptr = (bool_t (*)(sets__set_t, sets__T_t))&m_sets_closure_15, .rptr =  (void (*)(sets__set_t))&release_sets_closure_15, .cptr = (sets__set_t (*)(sets__set_t))&copy_sets_closure_15};
        sets_closure_15_t tmp = (sets_closure_15_t) safe_malloc(sizeof(struct sets_closure_15_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sets_closure_15(sets__set_t closure, type_actual_t sets__T){
        sets_closure_15_t x = (sets_closure_15_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sets_closure_15_t copy_sets_closure_15(sets_closure_15_t x){
        sets_closure_15_t y = new_sets_closure_15();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        if (x->htbl != NULL){
            sets__set_htbl_t new_htbl = (sets__set_htbl_t) safe_malloc(sizeof(struct sets__set_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sets__set_hashentry_t * new_data = (sets__set_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sets__set_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sets__set_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sets_closure_16(struct sets_closure_16_s * closure, sets__T_t bvar){
        bool_t result = h_sets_closure_16(bvar, closure->fvar_1); 
        return result;}

bool_t m_sets_closure_16(struct sets_closure_16_s * closure, sets__T_t bvar){
        return h_sets_closure_16(bvar, closure->fvar_1);}

extern bool_t h_sets_closure_16(sets__T_t ivar_2, type_actual_t sets__T){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}

sets_closure_16_t new_sets_closure_16(void){
        static struct sets__set_ftbl_s ftbl = {.fptr = (bool_t (*)(sets__set_t, sets__T_t))&f_sets_closure_16, .mptr = (bool_t (*)(sets__set_t, sets__T_t))&m_sets_closure_16, .rptr =  (void (*)(sets__set_t))&release_sets_closure_16, .cptr = (sets__set_t (*)(sets__set_t))&copy_sets_closure_16};
        sets_closure_16_t tmp = (sets_closure_16_t) safe_malloc(sizeof(struct sets_closure_16_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sets_closure_16(sets__set_t closure, type_actual_t sets__T){
        sets_closure_16_t x = (sets_closure_16_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sets_closure_16_t copy_sets_closure_16(sets_closure_16_t x){
        sets_closure_16_t y = new_sets_closure_16();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        if (x->htbl != NULL){
            sets__set_htbl_t new_htbl = (sets__set_htbl_t) safe_malloc(sizeof(struct sets__set_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sets__set_hashentry_t * new_data = (sets__set_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sets__set_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sets__set_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern bool_t sets__member(type_actual_t sets__T, sets__T_t ivar_1, sets__set_t ivar_2){
        bool_t  result;
        result = (bool_t)ivar_2->ftbl->fptr(ivar_2, ivar_1);
        ivar_2->ftbl->rptr(ivar_2);

        
        return result;
}

extern bool_t sets__emptyp(type_actual_t sets__T, sets__set_t ivar_1){
        bool_t  result;
        result = (bool_t)u_undef_quant_expr();

        
        return result;
}

extern bool_t sets__emptyset(type_actual_t sets__T, sets__T_t ivar_1){
        bool_t  result;
        result = (bool_t) false;

        
        return result;
}

extern bool_t sets__nonemptyp(type_actual_t sets__T, sets__set_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        /* T */ type_actual_t ivar_5;
        ivar_5 = (type_actual_t)sets__T;
        ivar_2 = (bool_t)sets__emptyp((type_actual_t)ivar_5, (sets__set_t)ivar_1);
        result = !ivar_2;

        
        return result;
}

extern bool_t sets__fullp(type_actual_t sets__T, sets__set_t ivar_1){
        bool_t  result;
        result = (bool_t)u_undef_quant_expr();

        
        return result;
}

extern bool_t sets__fullset(type_actual_t sets__T, sets__T_t ivar_1){
        bool_t  result;
        result = (bool_t) true;

        
        return result;
}

extern bool_t sets__nontrivialp(type_actual_t sets__T, sets__set_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        sets__set_t ivar_5;
        sets_closure_1_t cl22242;
        cl22242 = new_sets_closure_1();
        cl22242->fvar_1 = (type_actual_t)sets__T;
        ivar_5 = (sets__set_t)cl22242;
        ivar_1->count++;
        ivar_2 = (bool_t) !equal_sets__set(ivar_1, ivar_5, sets__T);
        if (ivar_2){ 
             sets__set_t ivar_10;
             sets_closure_2_t cl22243;
             cl22243 = new_sets_closure_2();
             cl22243->fvar_1 = (type_actual_t)sets__T;
             ivar_10 = (sets__set_t)cl22243;
             result = (bool_t) !equal_sets__set(ivar_1, ivar_10, sets__T);
} else {
        
             release_sets__set(ivar_1, sets__T);
             result = (bool_t) false;
};

        
        return result;
}

extern bool_t sets__subsetp(type_actual_t sets__T, sets__set_t ivar_1, sets__set_t ivar_2){
        bool_t  result;
        result = (bool_t)u_undef_quant_expr();

        
        return result;
}

extern bool_t sets__strict_subsetp(type_actual_t sets__T, sets__set_t ivar_1, sets__set_t ivar_2){
        bool_t  result;
        bool_t ivar_3;
        /* T */ type_actual_t ivar_8;
        ivar_8 = (type_actual_t)sets__T;
        ivar_1->count++;
        ivar_2->count++;
        ivar_3 = (bool_t)sets__subsetp((type_actual_t)ivar_8, (sets__set_t)ivar_1, (sets__set_t)ivar_2);
        if (ivar_3){ 
             result = (bool_t) !equal_sets__set(ivar_1, ivar_2, sets__T);
} else {
        
             release_sets__set(ivar_2, sets__T);
             release_sets__set(ivar_1, sets__T);
             result = (bool_t) false;
};

        
        return result;
}

extern sets__set_t sets__union(type_actual_t sets__T, sets__set_t ivar_1, sets__set_t ivar_2){
        sets__set_t  result;
        sets_closure_3_t cl22244;
        cl22244 = new_sets_closure_3();
        cl22244->fvar_1 = (type_actual_t)sets__T;
        cl22244->fvar_2 = (sets__set_t)ivar_1;
        if (cl22244->fvar_2 != NULL) cl22244->fvar_2->count++;
        cl22244->fvar_3 = (sets__set_t)ivar_2;
        if (cl22244->fvar_3 != NULL) cl22244->fvar_3->count++;
        release_sets__set(ivar_1, sets__T);
        release_sets__set(ivar_2, sets__T);
        result = (sets__set_t)cl22244;

        
        return result;
}

extern sets__set_t sets__intersection(type_actual_t sets__T, sets__set_t ivar_1, sets__set_t ivar_2){
        sets__set_t  result;
        sets_closure_4_t cl22245;
        cl22245 = new_sets_closure_4();
        cl22245->fvar_1 = (type_actual_t)sets__T;
        cl22245->fvar_2 = (sets__set_t)ivar_1;
        if (cl22245->fvar_2 != NULL) cl22245->fvar_2->count++;
        cl22245->fvar_3 = (sets__set_t)ivar_2;
        if (cl22245->fvar_3 != NULL) cl22245->fvar_3->count++;
        release_sets__set(ivar_1, sets__T);
        release_sets__set(ivar_2, sets__T);
        result = (sets__set_t)cl22245;

        
        return result;
}

extern bool_t sets__disjointp(type_actual_t sets__T, sets__set_t ivar_1, sets__set_t ivar_2){
        bool_t  result;
        /* T */ type_actual_t ivar_11;
        ivar_11 = (type_actual_t)sets__T;
        sets__set_t ivar_12;
        /* T */ type_actual_t ivar_7;
        ivar_7 = (type_actual_t)sets__T;
        ivar_12 = (sets__set_t)sets__intersection((type_actual_t)ivar_7, (sets__set_t)ivar_1, (sets__set_t)ivar_2);
        result = (bool_t)sets__emptyp((type_actual_t)ivar_11, (sets__set_t)ivar_12);

        
        return result;
}

extern sets__set_t sets__complement(type_actual_t sets__T, sets__set_t ivar_1){
        sets__set_t  result;
        sets_closure_5_t cl22246;
        cl22246 = new_sets_closure_5();
        cl22246->fvar_1 = (sets__set_t)ivar_1;
        if (cl22246->fvar_1 != NULL) cl22246->fvar_1->count++;
        cl22246->fvar_2 = (type_actual_t)sets__T;
        release_sets__set(ivar_1, sets__T);
        result = (sets__set_t)cl22246;

        
        return result;
}

extern sets__set_t sets__difference(type_actual_t sets__T, sets__set_t ivar_1, sets__set_t ivar_2){
        sets__set_t  result;
        sets_closure_6_t cl22247;
        cl22247 = new_sets_closure_6();
        cl22247->fvar_1 = (type_actual_t)sets__T;
        cl22247->fvar_2 = (sets__set_t)ivar_1;
        if (cl22247->fvar_2 != NULL) cl22247->fvar_2->count++;
        cl22247->fvar_3 = (sets__set_t)ivar_2;
        if (cl22247->fvar_3 != NULL) cl22247->fvar_3->count++;
        release_sets__set(ivar_1, sets__T);
        release_sets__set(ivar_2, sets__T);
        result = (sets__set_t)cl22247;

        
        return result;
}

extern sets__set_t sets__symmetric_difference(type_actual_t sets__T, sets__set_t ivar_1, sets__set_t ivar_2){
        sets__set_t  result;
        /* T */ type_actual_t ivar_18;
        ivar_18 = (type_actual_t)sets__T;
        sets__set_t ivar_19;
        /* T */ type_actual_t ivar_8;
        ivar_8 = (type_actual_t)sets__T;
        ivar_1->count++;
        ivar_2->count++;
        ivar_19 = (sets__set_t)sets__difference((type_actual_t)ivar_8, (sets__set_t)ivar_1, (sets__set_t)ivar_2);
        sets__set_t ivar_20;
        /* T */ type_actual_t ivar_14;
        ivar_14 = (type_actual_t)sets__T;
        ivar_20 = (sets__set_t)sets__difference((type_actual_t)ivar_14, (sets__set_t)ivar_2, (sets__set_t)ivar_1);
        result = (sets__set_t)sets__union((type_actual_t)ivar_18, (sets__set_t)ivar_19, (sets__set_t)ivar_20);

        
        return result;
}

extern sets_funtype_7_t sets__every__1(type_actual_t sets__T, sets__set_t ivar_1){
        sets_funtype_7_t  result;
        sets_closure_8_t cl22248;
        cl22248 = new_sets_closure_8();
        result = (sets_funtype_7_t)cl22248;

        
        return result;
}

extern bool_t sets__every__2(type_actual_t sets__T, sets__set_t ivar_1, sets__set_t ivar_3){
        bool_t  result;
        result = (bool_t)u_undef_quant_expr();

        
        return result;
}

extern sets_funtype_7_t sets__some__1(type_actual_t sets__T, sets__set_t ivar_1){
        sets_funtype_7_t  result;
        sets_closure_9_t cl22249;
        cl22249 = new_sets_closure_9();
        result = (sets_funtype_7_t)cl22249;

        
        return result;
}

extern bool_t sets__some__2(type_actual_t sets__T, sets__set_t ivar_1, sets__set_t ivar_3){
        bool_t  result;
        result = (bool_t)u_undef_quant_expr();

        
        return result;
}

extern bool_t sets__singletonp(type_actual_t sets__T, sets__set_t ivar_1){
        bool_t  result;
        result = (bool_t)u_undef_quant_expr();

        
        return result;
}

extern sets__set_t sets__singleton(type_actual_t sets__T, sets__T_t ivar_1){
        sets__set_t  result;
        sets_closure_10_t cl22250;
        cl22250 = new_sets_closure_10();
        cl22250->fvar_1 = (sets__T_t)ivar_1;
        cl22250->fvar_2 = (type_actual_t)sets__T;
        sets__T->release_ptr(ivar_1, sets__T);
        result = (sets__set_t)cl22250;

        
        return result;
}

extern sets__set_t sets__add(type_actual_t sets__T, sets__T_t ivar_1, sets__set_t ivar_2){
        sets__set_t  result;
        sets_closure_11_t cl22251;
        cl22251 = new_sets_closure_11();
        cl22251->fvar_1 = (sets__T_t)ivar_1;
        cl22251->fvar_2 = (type_actual_t)sets__T;
        cl22251->fvar_3 = (sets__set_t)ivar_2;
        if (cl22251->fvar_3 != NULL) cl22251->fvar_3->count++;
        sets__T->release_ptr(ivar_1, sets__T);
        release_sets__set(ivar_2, sets__T);
        result = (sets__set_t)cl22251;

        
        return result;
}

extern sets__set_t sets__remove(type_actual_t sets__T, sets__T_t ivar_1, sets__set_t ivar_2){
        sets__set_t  result;
        sets_closure_12_t cl22252;
        cl22252 = new_sets_closure_12();
        cl22252->fvar_1 = (sets__T_t)ivar_1;
        cl22252->fvar_2 = (type_actual_t)sets__T;
        cl22252->fvar_3 = (sets__set_t)ivar_2;
        if (cl22252->fvar_3 != NULL) cl22252->fvar_3->count++;
        sets__T->release_ptr(ivar_1, sets__T);
        release_sets__set(ivar_2, sets__T);
        result = (sets__set_t)cl22252;

        
        return result;
}

extern sets__T_t sets__choose(type_actual_t sets__T, sets__set_t ivar_1){
        sets__T_t  result;
        pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        
        return result;
}

extern sets__T_t sets__the(type_actual_t sets__T, sets__set_t ivar_1){
        sets__T_t  result;
        pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        
        return result;
}

extern sets__T_t sets__singleton_elt(type_actual_t sets__T, sets__set_t ivar_1){
        sets__T_t  result;
        /* T */ type_actual_t ivar_13;
        ivar_13 = (type_actual_t)sets__T;
        sets__set_t ivar_14;
        sets_closure_13_t cl22255;
        cl22255 = new_sets_closure_13();
        cl22255->fvar_1 = (sets__set_t)ivar_1;
        if (cl22255->fvar_1 != NULL) cl22255->fvar_1->count++;
        cl22255->fvar_2 = (type_actual_t)sets__T;
        release_sets__set(ivar_1, sets__T);
        ivar_14 = (sets__set_t)cl22255;
        result = (sets__T_t)sets__the((type_actual_t)ivar_13, (sets__set_t)ivar_14);

        
        return result;
}

extern sets__set_t sets__rest(type_actual_t sets__T, sets__set_t ivar_1){
        sets__set_t  result;
        bool_t ivar_2;
        /* T */ type_actual_t ivar_5;
        ivar_5 = (type_actual_t)sets__T;
        ivar_1->count++;
        ivar_2 = (bool_t)sets__emptyp((type_actual_t)ivar_5, (sets__set_t)ivar_1);
        if (ivar_2){ 
             //copying to sets__set from sets__set;
             result = (sets__set_t)ivar_1;
             if (result != NULL) result->count++;
             release_sets__set(ivar_1, sets__T);
} else {
        
             /* T */ type_actual_t ivar_14;
             ivar_14 = (type_actual_t)sets__T;
             sets__T_t ivar_15;
             /* T */ type_actual_t ivar_11;
             ivar_11 = (type_actual_t)sets__T;
             ivar_1->count++;
             ivar_15 = (sets__T_t)sets__choose((type_actual_t)ivar_11, (sets__set_t)ivar_1);
             result = (sets__set_t)sets__remove((type_actual_t)ivar_14, (sets__T_t)ivar_15, (sets__set_t)ivar_1);
};

        
        return result;
}

extern sets_funtype_7_t sets__powerset(type_actual_t sets__T, sets__set_t ivar_1){
        sets_funtype_7_t  result;
        sets_closure_14_t cl22256;
        cl22256 = new_sets_closure_14();
        cl22256->fvar_1 = (sets__set_t)ivar_1;
        if (cl22256->fvar_1 != NULL) cl22256->fvar_1->count++;
        cl22256->fvar_2 = (type_actual_t)sets__T;
        release_sets__set(ivar_1, sets__T);
        result = (sets_funtype_7_t)cl22256;

        
        return result;
}

extern sets__set_t sets__Union(type_actual_t sets__T, sets_funtype_7_t ivar_1){
        sets__set_t  result;
        sets_closure_15_t cl22257;
        cl22257 = new_sets_closure_15();
        cl22257->fvar_1 = (type_actual_t)sets__T;
        result = (sets__set_t)cl22257;

        
        return result;
}

extern sets__set_t sets__Intersection(type_actual_t sets__T, sets_funtype_7_t ivar_1){
        sets__set_t  result;
        sets_closure_16_t cl22258;
        cl22258 = new_sets_closure_16();
        cl22258->fvar_1 = (type_actual_t)sets__T;
        result = (sets__set_t)cl22258;

        
        return result;
}