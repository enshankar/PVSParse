//Code generated using pvs2ir2c
#include "test_transpose_c.h"


test_transpose__rtype_t new_test_transpose__rtype(void){
        test_transpose__rtype_t tmp = (test_transpose__rtype_t) safe_malloc(sizeof(struct test_transpose__rtype_s));
        tmp->count = 1;
        return tmp;}

void release_test_transpose__rtype(test_transpose__rtype_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_test_transpose__rtype_ptr(pointer_t x, type_actual_t T){
        release_test_transpose__rtype((test_transpose__rtype_t)x);
}

test_transpose__rtype_t copy_test_transpose__rtype(test_transpose__rtype_t x){
        test_transpose__rtype_t y = new_test_transpose__rtype();
        y->x = (uint32_t)x->x;
        y->y = (uint32_t)x->y;
        y->count = 1;
        return y;}

bool_t equal_test_transpose__rtype(test_transpose__rtype_t x, test_transpose__rtype_t y){
        bool_t tmp = true;
        tmp = tmp && x->x == y->x;
        tmp = tmp && x->y == y->y;
        return tmp;}

bool_t equal_test_transpose__rtype_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_test_transpose__rtype((test_transpose__rtype_t)x, (test_transpose__rtype_t)y);
}

actual_test_transpose__rtype_t actual_test_transpose__rtype(){
        actual_test_transpose__rtype_t new = (actual_test_transpose__rtype_t)safe_malloc(sizeof(struct actual_test_transpose__rtype_s));
        new->equal_ptr = (*equal_test_transpose__rtype_ptr);
 
        new->release_ptr = (*release_test_transpose__rtype_ptr);
 

 
        return new;
 };

test_transpose__rtype_t update_test_transpose__rtype_x(test_transpose__rtype_t x, uint32_t v){
        test_transpose__rtype_t y;
        if (x->count == 1){y = x;}
        else {y = copy_test_transpose__rtype(x); x->count--;};
        y->x = (uint32_t)v;
        return y;}

test_transpose__rtype_t update_test_transpose__rtype_y(test_transpose__rtype_t x, uint32_t v){
        test_transpose__rtype_t y;
        if (x->count == 1){y = x;}
        else {y = copy_test_transpose__rtype(x); x->count--;};
        y->y = (uint32_t)v;
        return y;}



void release_test_transpose_funtype_1(test_transpose_funtype_1_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

test_transpose_funtype_1_t copy_test_transpose_funtype_1(test_transpose_funtype_1_t x){return x->ftbl->cptr(x);}

test_transpose_funtype_1_t equal_test_transpose_funtype_1(test_transpose_funtype_1_t x, test_transpose_funtype_1_t y){
        return false;}


test_transpose__rtype_t f_test_transpose_closure_2(struct test_transpose_closure_2_s * closure, test_transpose__rtype_t bvar){
        test_transpose__rtype_t result = h_test_transpose_closure_2(bvar, closure->fvar_1); 
        return result;}

test_transpose__rtype_t m_test_transpose_closure_2(struct test_transpose_closure_2_s * closure, test_transpose__rtype_t bvar){
        return h_test_transpose_closure_2(bvar, closure->fvar_1);}

extern test_transpose__rtype_t h_test_transpose_closure_2(test_transpose__rtype_t ivar_3, test_transpose__rtype_t ivar_1){
        test_transpose__rtype_t result;
        uint32_t ivar_4;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)ivar_1->x;
        uint32_t ivar_12;
        ivar_12 = (uint32_t)ivar_3->x;
        ivar_4 = (uint32_t)integertypes__u32minus((uint32_t)ivar_11, (uint32_t)ivar_12);
        uint32_t ivar_5;
        uint32_t ivar_18;
        ivar_18 = (uint32_t)ivar_1->y;
        uint32_t ivar_19;
        ivar_19 = (uint32_t)ivar_3->y;
        ivar_5 = (uint32_t)integertypes__u32minus((uint32_t)ivar_18, (uint32_t)ivar_19);
        test_transpose__rtype_t ivar_24;
        ivar_24 = (test_transpose__rtype_t)update_test_transpose__rtype_x(ivar_3, ivar_4);
        test_transpose__rtype_t ivar_28;
        ivar_28 = (test_transpose__rtype_t)update_test_transpose__rtype_y(ivar_24, ivar_5);
        //copying to test_transpose__rtype from test_transpose__rtype;
        result = (test_transpose__rtype_t)ivar_28;
        result->count++;
        release_test_transpose__rtype(ivar_28);

        return result;
}

test_transpose_closure_2_t new_test_transpose_closure_2(void){
        static struct test_transpose_funtype_1_ftbl_s ftbl = {.fptr = (test_transpose__rtype_t (*)(test_transpose_funtype_1_t, test_transpose__rtype_t))&f_test_transpose_closure_2, .mptr = (test_transpose__rtype_t (*)(test_transpose_funtype_1_t, test_transpose__rtype_t))&m_test_transpose_closure_2, .rptr =  (void (*)(test_transpose_funtype_1_t))&release_test_transpose_closure_2, .cptr = (test_transpose_funtype_1_t (*)(test_transpose_funtype_1_t))&copy_test_transpose_closure_2};
        test_transpose_closure_2_t tmp = (test_transpose_closure_2_t) safe_malloc(sizeof(struct test_transpose_closure_2_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_test_transpose_closure_2(test_transpose_funtype_1_t closure){
        test_transpose_closure_2_t x = (test_transpose_closure_2_t)closure;
        x->count--;
        if (x->count <= 0){
         release_test_transpose__rtype(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

test_transpose_closure_2_t copy_test_transpose_closure_2(test_transpose_closure_2_t x){
        test_transpose_closure_2_t y = new_test_transpose_closure_2();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            test_transpose_funtype_1_htbl_t new_htbl = (test_transpose_funtype_1_htbl_t) safe_malloc(sizeof(test_transpose_funtype_1_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            test_transpose_funtype_1_hashentry_t * new_data = (test_transpose_funtype_1_hashentry_t *) safe_malloc(new_htbl->size * sizeof(test_transpose_funtype_1_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(test_transpose_funtype_1_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_test_transpose_funtype_3(test_transpose_funtype_3_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

test_transpose_funtype_3_t copy_test_transpose_funtype_3(test_transpose_funtype_3_t x){return x->ftbl->cptr(x);}

test_transpose_funtype_3_t equal_test_transpose_funtype_3(test_transpose_funtype_3_t x, test_transpose_funtype_3_t y){
        return false;}


test_transpose_funtype_1_t f_test_transpose_closure_4(struct test_transpose_closure_4_s * closure, test_transpose__rtype_t bvar){
        test_transpose_funtype_1_t result = h_test_transpose_closure_4(bvar); 
        return result;}

test_transpose_funtype_1_t m_test_transpose_closure_4(struct test_transpose_closure_4_s * closure, test_transpose__rtype_t bvar){
        return h_test_transpose_closure_4(bvar);}

extern test_transpose_funtype_1_t h_test_transpose_closure_4(test_transpose__rtype_t ivar_16){
        test_transpose_funtype_1_t result;
        result = (test_transpose_funtype_1_t)test_transpose__sub((test_transpose__rtype_t)ivar_16);

        return result;
}

test_transpose_closure_4_t new_test_transpose_closure_4(void){
        static struct test_transpose_funtype_3_ftbl_s ftbl = {.fptr = (test_transpose_funtype_1_t (*)(test_transpose_funtype_3_t, test_transpose__rtype_t))&f_test_transpose_closure_4, .mptr = (test_transpose_funtype_1_t (*)(test_transpose_funtype_3_t, test_transpose__rtype_t))&m_test_transpose_closure_4, .rptr =  (void (*)(test_transpose_funtype_3_t))&release_test_transpose_closure_4, .cptr = (test_transpose_funtype_3_t (*)(test_transpose_funtype_3_t))&copy_test_transpose_closure_4};
        test_transpose_closure_4_t tmp = (test_transpose_closure_4_t) safe_malloc(sizeof(struct test_transpose_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_test_transpose_closure_4(test_transpose_funtype_3_t closure){
        test_transpose_closure_4_t x = (test_transpose_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

test_transpose_closure_4_t copy_test_transpose_closure_4(test_transpose_closure_4_t x){
        test_transpose_closure_4_t y = new_test_transpose_closure_4();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            test_transpose_funtype_3_htbl_t new_htbl = (test_transpose_funtype_3_htbl_t) safe_malloc(sizeof(test_transpose_funtype_3_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            test_transpose_funtype_3_hashentry_t * new_data = (test_transpose_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(test_transpose_funtype_3_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(test_transpose_funtype_3_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


test_transpose_funtype_1_t f_test_transpose_closure_5(struct test_transpose_closure_5_s * closure, test_transpose__rtype_t bvar){
        test_transpose_funtype_1_t result = h_test_transpose_closure_5(bvar); 
        return result;}

test_transpose_funtype_1_t m_test_transpose_closure_5(struct test_transpose_closure_5_s * closure, test_transpose__rtype_t bvar){
        return h_test_transpose_closure_5(bvar);}

extern test_transpose_funtype_1_t h_test_transpose_closure_5(test_transpose__rtype_t ivar_16){
        test_transpose_funtype_1_t result;
        result = (test_transpose_funtype_1_t)test_transpose__sub((test_transpose__rtype_t)ivar_16);

        return result;
}

test_transpose_closure_5_t new_test_transpose_closure_5(void){
        static struct test_transpose_funtype_3_ftbl_s ftbl = {.fptr = (test_transpose_funtype_1_t (*)(test_transpose_funtype_3_t, test_transpose__rtype_t))&f_test_transpose_closure_5, .mptr = (test_transpose_funtype_1_t (*)(test_transpose_funtype_3_t, test_transpose__rtype_t))&m_test_transpose_closure_5, .rptr =  (void (*)(test_transpose_funtype_3_t))&release_test_transpose_closure_5, .cptr = (test_transpose_funtype_3_t (*)(test_transpose_funtype_3_t))&copy_test_transpose_closure_5};
        test_transpose_closure_5_t tmp = (test_transpose_closure_5_t) safe_malloc(sizeof(struct test_transpose_closure_5_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_test_transpose_closure_5(test_transpose_funtype_3_t closure){
        test_transpose_closure_5_t x = (test_transpose_closure_5_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

test_transpose_closure_5_t copy_test_transpose_closure_5(test_transpose_closure_5_t x){
        test_transpose_closure_5_t y = new_test_transpose_closure_5();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            test_transpose_funtype_3_htbl_t new_htbl = (test_transpose_funtype_3_htbl_t) safe_malloc(sizeof(test_transpose_funtype_3_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            test_transpose_funtype_3_hashentry_t * new_data = (test_transpose_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(test_transpose_funtype_3_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(test_transpose_funtype_3_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


test_transpose_funtype_1_t f_test_transpose_closure_6(struct test_transpose_closure_6_s * closure, test_transpose__rtype_t bvar){
        test_transpose_funtype_1_t result = h_test_transpose_closure_6(bvar); 
        return result;}

test_transpose_funtype_1_t m_test_transpose_closure_6(struct test_transpose_closure_6_s * closure, test_transpose__rtype_t bvar){
        return h_test_transpose_closure_6(bvar);}

extern test_transpose_funtype_1_t h_test_transpose_closure_6(test_transpose__rtype_t ivar_16){
        test_transpose_funtype_1_t result;
        result = (test_transpose_funtype_1_t)test_transpose__sub((test_transpose__rtype_t)ivar_16);

        return result;
}

test_transpose_closure_6_t new_test_transpose_closure_6(void){
        static struct test_transpose_funtype_3_ftbl_s ftbl = {.fptr = (test_transpose_funtype_1_t (*)(test_transpose_funtype_3_t, test_transpose__rtype_t))&f_test_transpose_closure_6, .mptr = (test_transpose_funtype_1_t (*)(test_transpose_funtype_3_t, test_transpose__rtype_t))&m_test_transpose_closure_6, .rptr =  (void (*)(test_transpose_funtype_3_t))&release_test_transpose_closure_6, .cptr = (test_transpose_funtype_3_t (*)(test_transpose_funtype_3_t))&copy_test_transpose_closure_6};
        test_transpose_closure_6_t tmp = (test_transpose_closure_6_t) safe_malloc(sizeof(struct test_transpose_closure_6_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_test_transpose_closure_6(test_transpose_funtype_3_t closure){
        test_transpose_closure_6_t x = (test_transpose_closure_6_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

test_transpose_closure_6_t copy_test_transpose_closure_6(test_transpose_closure_6_t x){
        test_transpose_closure_6_t y = new_test_transpose_closure_6();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            test_transpose_funtype_3_htbl_t new_htbl = (test_transpose_funtype_3_htbl_t) safe_malloc(sizeof(test_transpose_funtype_3_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            test_transpose_funtype_3_hashentry_t * new_data = (test_transpose_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(test_transpose_funtype_3_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(test_transpose_funtype_3_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


test_transpose_funtype_1_t f_test_transpose_closure_7(struct test_transpose_closure_7_s * closure, test_transpose__rtype_t bvar){
        test_transpose_funtype_1_t result = h_test_transpose_closure_7(bvar); 
        return result;}

test_transpose_funtype_1_t m_test_transpose_closure_7(struct test_transpose_closure_7_s * closure, test_transpose__rtype_t bvar){
        return h_test_transpose_closure_7(bvar);}

extern test_transpose_funtype_1_t h_test_transpose_closure_7(test_transpose__rtype_t ivar_16){
        test_transpose_funtype_1_t result;
        result = (test_transpose_funtype_1_t)test_transpose__sub((test_transpose__rtype_t)ivar_16);

        return result;
}

test_transpose_closure_7_t new_test_transpose_closure_7(void){
        static struct test_transpose_funtype_3_ftbl_s ftbl = {.fptr = (test_transpose_funtype_1_t (*)(test_transpose_funtype_3_t, test_transpose__rtype_t))&f_test_transpose_closure_7, .mptr = (test_transpose_funtype_1_t (*)(test_transpose_funtype_3_t, test_transpose__rtype_t))&m_test_transpose_closure_7, .rptr =  (void (*)(test_transpose_funtype_3_t))&release_test_transpose_closure_7, .cptr = (test_transpose_funtype_3_t (*)(test_transpose_funtype_3_t))&copy_test_transpose_closure_7};
        test_transpose_closure_7_t tmp = (test_transpose_closure_7_t) safe_malloc(sizeof(struct test_transpose_closure_7_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_test_transpose_closure_7(test_transpose_funtype_3_t closure){
        test_transpose_closure_7_t x = (test_transpose_closure_7_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

test_transpose_closure_7_t copy_test_transpose_closure_7(test_transpose_closure_7_t x){
        test_transpose_closure_7_t y = new_test_transpose_closure_7();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            test_transpose_funtype_3_htbl_t new_htbl = (test_transpose_funtype_3_htbl_t) safe_malloc(sizeof(test_transpose_funtype_3_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            test_transpose_funtype_3_hashentry_t * new_data = (test_transpose_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(test_transpose_funtype_3_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(test_transpose_funtype_3_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern test_transpose__rtype_t test_transpose__swap(test_transpose__rtype_t ivar_1){
        test_transpose__rtype_t result;
        uint32_t ivar_2;
        ivar_2 = (uint32_t)ivar_1->x;
        uint32_t ivar_3;
        ivar_3 = (uint32_t)ivar_1->y;
        test_transpose__rtype_t ivar_10;
        ivar_10 = (test_transpose__rtype_t)update_test_transpose__rtype_x(ivar_1, ivar_2);
        test_transpose__rtype_t ivar_14;
        ivar_14 = (test_transpose__rtype_t)update_test_transpose__rtype_y(ivar_10, ivar_3);
        //copying to test_transpose__rtype from test_transpose__rtype;
        result = (test_transpose__rtype_t)ivar_14;
        result->count++;
        release_test_transpose__rtype(ivar_14);

        return result;
}

extern test_transpose__rtype_t test_transpose__R1(void){
        test_transpose__rtype_t result;
        uint32_t ivar_1;
        ivar_1 = (uint32_t)3;
        uint32_t ivar_2;
        ivar_2 = (uint32_t)5;
        result = new_test_transpose__rtype();;
        result->x = (uint32_t)ivar_1;
        result->y = (uint32_t)ivar_2;

        return result;
}

extern test_transpose__rtype_t test_transpose__R2(void){
        test_transpose__rtype_t result;
        uint32_t ivar_1;
        ivar_1 = (uint32_t)5;
        uint32_t ivar_2;
        ivar_2 = (uint32_t)2;
        result = new_test_transpose__rtype();;
        result->x = (uint32_t)ivar_1;
        result->y = (uint32_t)ivar_2;

        return result;
}

extern test_transpose_funtype_1_t test_transpose__sub(test_transpose__rtype_t ivar_1){
        test_transpose_funtype_1_t result;
        test_transpose_closure_2_t cl13646;
        cl13646 = new_test_transpose_closure_2();
        cl13646->fvar_1 = (test_transpose__rtype_t)ivar_1;
        cl13646->fvar_1->count++;
        release_test_transpose__rtype(ivar_1);
        result = (test_transpose_funtype_1_t)cl13646;

        return result;
}

extern int32_t test_transpose__test1(void){
        int32_t result;
        type_actual_t ivar_22;
        ivar_22 = (type_actual_t)actual_test_transpose__rtype();
        test_transpose__rtype_t ivar_31;
        test_transpose_funtype_1_t ivar_4;
        test_transpose_funtype_3_t ivar_10;
        test_transpose_funtype_3_t ivar_26;
        test_transpose_closure_4_t cl13647;
        cl13647 = new_test_transpose_closure_4();
        ivar_26 = (test_transpose_funtype_3_t)cl13647;
        test_transpose_funtype_3_t ivar_21;
        ivar_21 = (test_transpose_funtype_3_t)transpose__transpose((type_actual_t)ivar_22, (type_actual_t)ivar_22, (type_actual_t)ivar_22, (transpose_funtype_3_t)ivar_26);
        //copying to test_transpose_funtype_3 from test_transpose_funtype_3;
        ivar_10 = (test_transpose_funtype_3_t)ivar_21;
        ivar_10->count++;
        release_test_transpose_funtype_3(ivar_21);
        test_transpose__rtype_t ivar_29;
        ivar_29 = (test_transpose__rtype_t)test_transpose__R1();
        ivar_29->count++;
        test_transpose_funtype_1_t ivar_7;
        ivar_7 = (test_transpose_funtype_1_t)ivar_10->ftbl->fptr(ivar_10, ivar_29);
        ivar_10->ftbl->rptr(ivar_10);
        //copying to test_transpose_funtype_1 from test_transpose_funtype_1;
        ivar_4 = (test_transpose_funtype_1_t)ivar_7;
        ivar_4->count++;
        release_test_transpose_funtype_1(ivar_7);
        test_transpose__rtype_t ivar_30;
        ivar_30 = (test_transpose__rtype_t)test_transpose__R2();
        ivar_30->count++;
        test_transpose__rtype_t ivar_2;
        ivar_2 = (test_transpose__rtype_t)ivar_4->ftbl->fptr(ivar_4, ivar_30);
        ivar_4->ftbl->rptr(ivar_4);
        //copying to test_transpose__rtype from test_transpose__rtype;
        ivar_31 = (test_transpose__rtype_t)ivar_2;
        ivar_31->count++;
        release_test_transpose__rtype(ivar_2);
        result = (int32_t)ivar_31->x;
        release_test_transpose__rtype(ivar_31);
        safe_free(ivar_22);

        return result;
}

extern int32_t test_transpose__test2(void){
        int32_t result;
        type_actual_t ivar_22;
        ivar_22 = (type_actual_t)actual_test_transpose__rtype();
        test_transpose__rtype_t ivar_31;
        test_transpose_funtype_1_t ivar_4;
        test_transpose_funtype_3_t ivar_10;
        test_transpose_funtype_3_t ivar_26;
        test_transpose_closure_5_t cl13648;
        cl13648 = new_test_transpose_closure_5();
        ivar_26 = (test_transpose_funtype_3_t)cl13648;
        test_transpose_funtype_3_t ivar_21;
        ivar_21 = (test_transpose_funtype_3_t)transpose__transpose((type_actual_t)ivar_22, (type_actual_t)ivar_22, (type_actual_t)ivar_22, (transpose_funtype_3_t)ivar_26);
        //copying to test_transpose_funtype_3 from test_transpose_funtype_3;
        ivar_10 = (test_transpose_funtype_3_t)ivar_21;
        ivar_10->count++;
        release_test_transpose_funtype_3(ivar_21);
        test_transpose__rtype_t ivar_29;
        ivar_29 = (test_transpose__rtype_t)test_transpose__R1();
        ivar_29->count++;
        test_transpose_funtype_1_t ivar_7;
        ivar_7 = (test_transpose_funtype_1_t)ivar_10->ftbl->fptr(ivar_10, ivar_29);
        ivar_10->ftbl->rptr(ivar_10);
        //copying to test_transpose_funtype_1 from test_transpose_funtype_1;
        ivar_4 = (test_transpose_funtype_1_t)ivar_7;
        ivar_4->count++;
        release_test_transpose_funtype_1(ivar_7);
        test_transpose__rtype_t ivar_30;
        ivar_30 = (test_transpose__rtype_t)test_transpose__R2();
        ivar_30->count++;
        test_transpose__rtype_t ivar_2;
        ivar_2 = (test_transpose__rtype_t)ivar_4->ftbl->fptr(ivar_4, ivar_30);
        ivar_4->ftbl->rptr(ivar_4);
        //copying to test_transpose__rtype from test_transpose__rtype;
        ivar_31 = (test_transpose__rtype_t)ivar_2;
        ivar_31->count++;
        release_test_transpose__rtype(ivar_2);
        result = (int32_t)ivar_31->y;
        release_test_transpose__rtype(ivar_31);
        safe_free(ivar_22);

        return result;
}

extern int32_t test_transpose__test3(void){
        int32_t result;
        type_actual_t ivar_22;
        ivar_22 = (type_actual_t)actual_test_transpose__rtype();
        test_transpose__rtype_t ivar_31;
        test_transpose_funtype_1_t ivar_4;
        test_transpose_funtype_3_t ivar_10;
        test_transpose_funtype_3_t ivar_26;
        test_transpose_closure_6_t cl13649;
        cl13649 = new_test_transpose_closure_6();
        ivar_26 = (test_transpose_funtype_3_t)cl13649;
        test_transpose_funtype_3_t ivar_21;
        ivar_21 = (test_transpose_funtype_3_t)transpose__transpose((type_actual_t)ivar_22, (type_actual_t)ivar_22, (type_actual_t)ivar_22, (transpose_funtype_3_t)ivar_26);
        //copying to test_transpose_funtype_3 from test_transpose_funtype_3;
        ivar_10 = (test_transpose_funtype_3_t)ivar_21;
        ivar_10->count++;
        release_test_transpose_funtype_3(ivar_21);
        test_transpose__rtype_t ivar_29;
        ivar_29 = (test_transpose__rtype_t)test_transpose__R2();
        ivar_29->count++;
        test_transpose_funtype_1_t ivar_7;
        ivar_7 = (test_transpose_funtype_1_t)ivar_10->ftbl->fptr(ivar_10, ivar_29);
        ivar_10->ftbl->rptr(ivar_10);
        //copying to test_transpose_funtype_1 from test_transpose_funtype_1;
        ivar_4 = (test_transpose_funtype_1_t)ivar_7;
        ivar_4->count++;
        release_test_transpose_funtype_1(ivar_7);
        test_transpose__rtype_t ivar_30;
        ivar_30 = (test_transpose__rtype_t)test_transpose__R1();
        ivar_30->count++;
        test_transpose__rtype_t ivar_2;
        ivar_2 = (test_transpose__rtype_t)ivar_4->ftbl->fptr(ivar_4, ivar_30);
        ivar_4->ftbl->rptr(ivar_4);
        //copying to test_transpose__rtype from test_transpose__rtype;
        ivar_31 = (test_transpose__rtype_t)ivar_2;
        ivar_31->count++;
        release_test_transpose__rtype(ivar_2);
        result = (int32_t)ivar_31->x;
        release_test_transpose__rtype(ivar_31);
        safe_free(ivar_22);

        return result;
}

extern int32_t test_transpose__test4(void){
        int32_t result;
        type_actual_t ivar_22;
        ivar_22 = (type_actual_t)actual_test_transpose__rtype();
        test_transpose__rtype_t ivar_31;
        test_transpose_funtype_1_t ivar_4;
        test_transpose_funtype_3_t ivar_10;
        test_transpose_funtype_3_t ivar_26;
        test_transpose_closure_7_t cl13650;
        cl13650 = new_test_transpose_closure_7();
        ivar_26 = (test_transpose_funtype_3_t)cl13650;
        test_transpose_funtype_3_t ivar_21;
        ivar_21 = (test_transpose_funtype_3_t)transpose__transpose((type_actual_t)ivar_22, (type_actual_t)ivar_22, (type_actual_t)ivar_22, (transpose_funtype_3_t)ivar_26);
        //copying to test_transpose_funtype_3 from test_transpose_funtype_3;
        ivar_10 = (test_transpose_funtype_3_t)ivar_21;
        ivar_10->count++;
        release_test_transpose_funtype_3(ivar_21);
        test_transpose__rtype_t ivar_29;
        ivar_29 = (test_transpose__rtype_t)test_transpose__R2();
        ivar_29->count++;
        test_transpose_funtype_1_t ivar_7;
        ivar_7 = (test_transpose_funtype_1_t)ivar_10->ftbl->fptr(ivar_10, ivar_29);
        ivar_10->ftbl->rptr(ivar_10);
        //copying to test_transpose_funtype_1 from test_transpose_funtype_1;
        ivar_4 = (test_transpose_funtype_1_t)ivar_7;
        ivar_4->count++;
        release_test_transpose_funtype_1(ivar_7);
        test_transpose__rtype_t ivar_30;
        ivar_30 = (test_transpose__rtype_t)test_transpose__R1();
        ivar_30->count++;
        test_transpose__rtype_t ivar_2;
        ivar_2 = (test_transpose__rtype_t)ivar_4->ftbl->fptr(ivar_4, ivar_30);
        ivar_4->ftbl->rptr(ivar_4);
        //copying to test_transpose__rtype from test_transpose__rtype;
        ivar_31 = (test_transpose__rtype_t)ivar_2;
        ivar_31->count++;
        release_test_transpose__rtype(ivar_2);
        result = (int32_t)ivar_31->y;
        release_test_transpose__rtype(ivar_31);
        safe_free(ivar_22);

        return result;
}