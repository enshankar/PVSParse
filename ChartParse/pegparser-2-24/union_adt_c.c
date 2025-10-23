//Code generated using pvs2ir2c
#include "union_adt_c.h"


union_adt__union_adt_t new_union_adt__union_adt(void){
        union_adt__union_adt_t tmp = (union_adt__union_adt_t) safe_malloc(sizeof(struct union_adt__union_adt_s));
        tmp->count = 1;
        return tmp;}

void release_union_adt__union_adt(union_adt__union_adt_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
switch (x->union_adt__union_adt_index) {
case 0:  release_union_adt__inl((union_adt__inl_t) x, union_adt__T1, union_adt__T2); break;
case 1:  release_union_adt__inr((union_adt__inr_t) x, union_adt__T1, union_adt__T2); break;
}}

void release_union_adt__union_adt_ptr(pointer_t x, type_actual_t T){
        actual_union_adt__union_adt_t actual = (actual_union_adt__union_adt_t)T;
        type_actual_t union_adt__T1 = actual->union_adt__T1;
        type_actual_t union_adt__T2 = actual->union_adt__T2;
        release_union_adt__union_adt((union_adt__union_adt_t)x, union_adt__T1, union_adt__T2);
}

union_adt__union_adt_t copy_union_adt__union_adt(union_adt__union_adt_t x){
        union_adt__union_adt_t y = new_union_adt__union_adt();
        y->union_adt__union_adt_index = (uint8_t)x->union_adt__union_adt_index;
        y->count = 1;
        return y;}

bool_t equal_union_adt__union_adt(union_adt__union_adt_t x, union_adt__union_adt_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        bool_t tmp = x->union_adt__union_adt_index == y->union_adt__union_adt_index;
        switch  (x->union_adt__union_adt_index) {
                case 0: tmp = tmp && equal_union_adt__inl((union_adt__inl_t) x, (union_adt__inl_t) y, union_adt__T1, union_adt__T2); break;
                case 1: tmp = tmp && equal_union_adt__inr((union_adt__inr_t) x, (union_adt__inr_t) y, union_adt__T1, union_adt__T2); break;
        }
        return tmp;
}

char * json_union_adt__union_adt(union_adt__union_adt_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ \"constructor\" = %u,", x->union_adt__union_adt_index);
        switch  (x->union_adt__union_adt_index) {
                case 0: tmp = safe_strcat(tmp, json_union_adt__inl((union_adt__inl_t) x, union_adt__T1, union_adt__T2)); break;
                case 1: tmp = safe_strcat(tmp, json_union_adt__inr((union_adt__inr_t) x, union_adt__T1, union_adt__T2)); break;
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_union_adt__union_adt_ptr(pointer_t x, pointer_t y, actual_union_adt__union_adt_t T){
        actual_union_adt__union_adt_t actual = (actual_union_adt__union_adt_t)T;
        type_actual_t union_adt__T1 = actual->union_adt__T1;
        type_actual_t union_adt__T2 = actual->union_adt__T2;
        return equal_union_adt__union_adt((union_adt__union_adt_t)x, (union_adt__union_adt_t)y, union_adt__T1, union_adt__T2);
}

char * json_union_adt__union_adt_ptr(pointer_t x, actual_union_adt__union_adt_t T){
        actual_union_adt__union_adt_t actual = (actual_union_adt__union_adt_t)T;
        type_actual_t union_adt__T1 = actual->union_adt__T1;
        type_actual_t union_adt__T2 = actual->union_adt__T2;
        return json_union_adt__union_adt((union_adt__union_adt_t)x, union_adt__T1, union_adt__T2);
}

actual_union_adt__union_adt_t actual_union_adt__union_adt(type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        actual_union_adt__union_adt_t new = (actual_union_adt__union_adt_t)safe_malloc(sizeof(struct actual_union_adt__union_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_union_adt__union_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_union_adt__union_adt_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_union_adt__union_adt_ptr);
 

        new->union_adt__T1 = union_adt__T1;
        new->union_adt__T2 = union_adt__T2;
 
        return new;
 };

union_adt__union_adt_t update_union_adt__union_adt_union_adt__union_adt_index(union_adt__union_adt_t x, uint8_t v){
        union_adt__union_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_union_adt__union_adt(x); x->count--;};
        y->union_adt__union_adt_index = (uint8_t)v;
        return y;}




union_adt__inl_t new_union_adt__inl(void){
        union_adt__inl_t tmp = (union_adt__inl_t) safe_malloc(sizeof(struct union_adt__inl_s));
        tmp->count = 1;
        return tmp;}

void release_union_adt__inl(union_adt__inl_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
        if (x->count <= 0){
         union_adt__T1->release_ptr(x->left, union_adt__T1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_union_adt__inl_ptr(pointer_t x, type_actual_t T){
        actual_union_adt__inl_t actual = (actual_union_adt__inl_t)T;
        type_actual_t union_adt__T1 = actual->union_adt__T1;
        type_actual_t union_adt__T2 = actual->union_adt__T2;
        release_union_adt__inl((union_adt__inl_t)x, union_adt__T1, union_adt__T2);
}

union_adt__inl_t copy_union_adt__inl(union_adt__inl_t x){
        union_adt__inl_t y = new_union_adt__inl();
        y->union_adt__union_adt_index = (uint8_t)x->union_adt__union_adt_index;
        y->left = x->left;
        if (y->left != NULL){y->left->count++;};
        y->count = 1;
        return y;}

bool_t equal_union_adt__inl(union_adt__inl_t x, union_adt__inl_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        bool_t tmp = true;
        tmp = tmp && x->union_adt__union_adt_index == y->union_adt__union_adt_index;
        tmp = tmp && union_adt__T1->equal_ptr(x->left, y->left, union_adt__T1);
        return tmp;}

char * json_union_adt__inl(union_adt__inl_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        char * tmp[2]; 
        char * fld0 = safe_malloc(38);
         sprintf(fld0, "\"union_adt__union_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->union_adt__union_adt_index));
        char * fld1 = safe_malloc(16);
         sprintf(fld1, "\"left\" : ");
        tmp[1] = safe_strcat(fld1, union_adt__T1->json_ptr(x->left, union_adt__T1));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_union_adt__inl_ptr(pointer_t x, pointer_t y, actual_union_adt__inl_t T){
        actual_union_adt__inl_t actual = (actual_union_adt__inl_t)T;
        type_actual_t union_adt__T1 = actual->union_adt__T1;
        type_actual_t union_adt__T2 = actual->union_adt__T2;
        return equal_union_adt__inl((union_adt__inl_t)x, (union_adt__inl_t)y, union_adt__T1, union_adt__T2);
}

char * json_union_adt__inl_ptr(pointer_t x, actual_union_adt__inl_t T){
        actual_union_adt__inl_t actual = (actual_union_adt__inl_t)T;
        type_actual_t union_adt__T1 = actual->union_adt__T1;
        type_actual_t union_adt__T2 = actual->union_adt__T2;
        return json_union_adt__inl((union_adt__inl_t)x, union_adt__T1, union_adt__T2);
}

actual_union_adt__inl_t actual_union_adt__inl(type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        actual_union_adt__inl_t new = (actual_union_adt__inl_t)safe_malloc(sizeof(struct actual_union_adt__inl_s));
        new->equal_ptr = (equal_ptr_t)(*equal_union_adt__inl_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_union_adt__inl_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_union_adt__inl_ptr);
 

        new->union_adt__T1 = union_adt__T1;
        new->union_adt__T2 = union_adt__T2;
 
        return new;
 };

union_adt__inl_t update_union_adt__inl_union_adt__union_adt_index(union_adt__inl_t x, uint8_t v){
        union_adt__inl_t y;
        if (x->count == 1){y = x;}
        else {y = copy_union_adt__inl(x); x->count--;};
        y->union_adt__union_adt_index = (uint8_t)v;
        return y;}

union_adt__inl_t update_union_adt__inl_left(union_adt__inl_t x, union_adt__T1_t v, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        union_adt__inl_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->left != NULL){union_adt__T1->release_ptr(x->left, union_adt__T1);};}
        else {y = copy_union_adt__inl(x); x->count--; y->left->count--;};
        y->left = (union_adt__T1_t)v;
        return y;}




union_adt__inr_t new_union_adt__inr(void){
        union_adt__inr_t tmp = (union_adt__inr_t) safe_malloc(sizeof(struct union_adt__inr_s));
        tmp->count = 1;
        return tmp;}

void release_union_adt__inr(union_adt__inr_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
        if (x->count <= 0){
         union_adt__T2->release_ptr(x->right, union_adt__T2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_union_adt__inr_ptr(pointer_t x, type_actual_t T){
        actual_union_adt__inr_t actual = (actual_union_adt__inr_t)T;
        type_actual_t union_adt__T1 = actual->union_adt__T1;
        type_actual_t union_adt__T2 = actual->union_adt__T2;
        release_union_adt__inr((union_adt__inr_t)x, union_adt__T1, union_adt__T2);
}

union_adt__inr_t copy_union_adt__inr(union_adt__inr_t x){
        union_adt__inr_t y = new_union_adt__inr();
        y->union_adt__union_adt_index = (uint8_t)x->union_adt__union_adt_index;
        y->right = x->right;
        if (y->right != NULL){y->right->count++;};
        y->count = 1;
        return y;}

bool_t equal_union_adt__inr(union_adt__inr_t x, union_adt__inr_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        bool_t tmp = true;
        tmp = tmp && x->union_adt__union_adt_index == y->union_adt__union_adt_index;
        tmp = tmp && union_adt__T2->equal_ptr(x->right, y->right, union_adt__T2);
        return tmp;}

char * json_union_adt__inr(union_adt__inr_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        char * tmp[2]; 
        char * fld0 = safe_malloc(38);
         sprintf(fld0, "\"union_adt__union_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->union_adt__union_adt_index));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"right\" : ");
        tmp[1] = safe_strcat(fld1, union_adt__T2->json_ptr(x->right, union_adt__T2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_union_adt__inr_ptr(pointer_t x, pointer_t y, actual_union_adt__inr_t T){
        actual_union_adt__inr_t actual = (actual_union_adt__inr_t)T;
        type_actual_t union_adt__T1 = actual->union_adt__T1;
        type_actual_t union_adt__T2 = actual->union_adt__T2;
        return equal_union_adt__inr((union_adt__inr_t)x, (union_adt__inr_t)y, union_adt__T1, union_adt__T2);
}

char * json_union_adt__inr_ptr(pointer_t x, actual_union_adt__inr_t T){
        actual_union_adt__inr_t actual = (actual_union_adt__inr_t)T;
        type_actual_t union_adt__T1 = actual->union_adt__T1;
        type_actual_t union_adt__T2 = actual->union_adt__T2;
        return json_union_adt__inr((union_adt__inr_t)x, union_adt__T1, union_adt__T2);
}

actual_union_adt__inr_t actual_union_adt__inr(type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        actual_union_adt__inr_t new = (actual_union_adt__inr_t)safe_malloc(sizeof(struct actual_union_adt__inr_s));
        new->equal_ptr = (equal_ptr_t)(*equal_union_adt__inr_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_union_adt__inr_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_union_adt__inr_ptr);
 

        new->union_adt__T1 = union_adt__T1;
        new->union_adt__T2 = union_adt__T2;
 
        return new;
 };

union_adt__inr_t update_union_adt__inr_union_adt__union_adt_index(union_adt__inr_t x, uint8_t v){
        union_adt__inr_t y;
        if (x->count == 1){y = x;}
        else {y = copy_union_adt__inr(x); x->count--;};
        y->union_adt__union_adt_index = (uint8_t)v;
        return y;}

union_adt__inr_t update_union_adt__inr_right(union_adt__inr_t x, union_adt__T2_t v, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        union_adt__inr_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->right != NULL){union_adt__T2->release_ptr(x->right, union_adt__T2);};}
        else {y = copy_union_adt__inr(x); x->count--; y->right->count--;};
        y->right = (union_adt__T2_t)v;
        return y;}



void release_union_adt_funtype_3(union_adt_funtype_3_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

union_adt_funtype_3_t copy_union_adt_funtype_3(union_adt_funtype_3_t x){return x->ftbl->cptr(x);}

bool_t equal_union_adt_funtype_3(union_adt_funtype_3_t x, union_adt_funtype_3_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        return false;}

char* json_union_adt_funtype_3(union_adt_funtype_3_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){char * result = safe_malloc(29); sprintf(result, "%s", "\"union_adt_funtype_3\""); return result;}

void release_union_adt_funtype_4(union_adt_funtype_4_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

union_adt_funtype_4_t copy_union_adt_funtype_4(union_adt_funtype_4_t x){return x->ftbl->cptr(x);}

bool_t equal_union_adt_funtype_4(union_adt_funtype_4_t x, union_adt_funtype_4_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        return false;}

char* json_union_adt_funtype_4(union_adt_funtype_4_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){char * result = safe_malloc(29); sprintf(result, "%s", "\"union_adt_funtype_4\""); return result;}

void release_union_adt_funtype_5(union_adt_funtype_5_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

union_adt_funtype_5_t copy_union_adt_funtype_5(union_adt_funtype_5_t x){return x->ftbl->cptr(x);}

bool_t equal_union_adt_funtype_5(union_adt_funtype_5_t x, union_adt_funtype_5_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        return false;}

char* json_union_adt_funtype_5(union_adt_funtype_5_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){char * result = safe_malloc(29); sprintf(result, "%s", "\"union_adt_funtype_5\""); return result;}

void release_union_adt_funtype_6(union_adt_funtype_6_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

union_adt_funtype_6_t copy_union_adt_funtype_6(union_adt_funtype_6_t x){return x->ftbl->cptr(x);}

bool_t equal_union_adt_funtype_6(union_adt_funtype_6_t x, union_adt_funtype_6_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        return false;}

char* json_union_adt_funtype_6(union_adt_funtype_6_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){char * result = safe_malloc(29); sprintf(result, "%s", "\"union_adt_funtype_6\""); return result;}


bool_t f_union_adt_closure_7(struct union_adt_closure_7_s * closure, union_adt__union_adt_t bvar){
        bool_t result = h_union_adt_closure_7(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

bool_t m_union_adt_closure_7(struct union_adt_closure_7_s * closure, union_adt__union_adt_t bvar){
        return h_union_adt_closure_7(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

bool_t h_union_adt_closure_7(union_adt__union_adt_t ivar_6, type_actual_t union_adt__T2, type_actual_t union_adt__T1, union_adt_funtype_5_t ivar_1, union_adt_funtype_6_t ivar_3){
        bool_t result;
        bool_t ivar_19;
        /* T1 */ type_actual_t ivar_22;
        ivar_22 = (type_actual_t)union_adt__T1;
        /* T2 */ type_actual_t ivar_23;
        ivar_23 = (type_actual_t)union_adt__T2;
        ivar_6->count++;
        ivar_19 = (bool_t)r_union_adt__inlp((union_adt__union_adt_t)ivar_22);
        if (ivar_19){ 
             union_adt__T1_t ivar_8;
             /* T1 */ type_actual_t ivar_11;
             ivar_11 = (type_actual_t)union_adt__T1;
             /* T2 */ type_actual_t ivar_12;
             ivar_12 = (type_actual_t)union_adt__T2;
             ivar_8 = (union_adt__T1_t)union_adt__union_adt_left((union_adt__union_adt_t)ivar_11);
             result = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_8);
} else {
        
             union_adt__T2_t ivar_25;
             /* T1 */ type_actual_t ivar_28;
             ivar_28 = (type_actual_t)union_adt__T1;
             /* T2 */ type_actual_t ivar_29;
             ivar_29 = (type_actual_t)union_adt__T2;
             ivar_25 = (union_adt__T2_t)union_adt__union_adt_right((union_adt__union_adt_t)ivar_28);
             result = (bool_t)ivar_3->ftbl->fptr(ivar_3, ivar_25);
};

        return result;
}

union_adt_closure_7_t new_union_adt_closure_7(void){
        static struct union_adt_funtype_4_ftbl_s ftbl = {.fptr = (bool_t (*)(union_adt_funtype_4_t, union_adt__union_adt_t))&f_union_adt_closure_7, .mptr = (bool_t (*)(union_adt_funtype_4_t, union_adt__union_adt_t))&m_union_adt_closure_7, .rptr =  (void (*)(union_adt_funtype_4_t))&release_union_adt_closure_7, .cptr = (union_adt_funtype_4_t (*)(union_adt_funtype_4_t))&copy_union_adt_closure_7};
        union_adt_closure_7_t tmp = (union_adt_closure_7_t) safe_malloc(sizeof(struct union_adt_closure_7_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_union_adt_closure_7(union_adt_funtype_4_t closure, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        union_adt_closure_7_t x = (union_adt_closure_7_t)closure;
        x->count--;
        if (x->count <= 0){
         release_union_adt_funtype_5(x->fvar_3, union_adt__T1, union_adt__T2);
         release_union_adt_funtype_6(x->fvar_4, union_adt__T1, union_adt__T2);
        //printf("\nFreeing\n");
        safe_free(x);}}

union_adt_closure_7_t copy_union_adt_closure_7(union_adt_closure_7_t x){
        union_adt_closure_7_t y = new_union_adt_closure_7();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        if (x->htbl != NULL){
            union_adt_funtype_4_htbl_t new_htbl = (union_adt_funtype_4_htbl_t) safe_malloc(sizeof(struct union_adt_funtype_4_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            union_adt_funtype_4_hashentry_t * new_data = (union_adt_funtype_4_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct union_adt_funtype_4_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct union_adt_funtype_4_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_union_adt_closure_8(struct union_adt_closure_8_s * closure, union_adt__union_adt_t bvar){
        bool_t result = h_union_adt_closure_8(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

bool_t m_union_adt_closure_8(struct union_adt_closure_8_s * closure, union_adt__union_adt_t bvar){
        return h_union_adt_closure_8(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

bool_t h_union_adt_closure_8(union_adt__union_adt_t ivar_6, type_actual_t union_adt__T2, type_actual_t union_adt__T1, union_adt_funtype_5_t ivar_1, union_adt_funtype_6_t ivar_3){
        bool_t result;
        bool_t ivar_19;
        /* T1 */ type_actual_t ivar_22;
        ivar_22 = (type_actual_t)union_adt__T1;
        /* T2 */ type_actual_t ivar_23;
        ivar_23 = (type_actual_t)union_adt__T2;
        ivar_6->count++;
        ivar_19 = (bool_t)r_union_adt__inlp((union_adt__union_adt_t)ivar_22);
        if (ivar_19){ 
             union_adt__T1_t ivar_8;
             /* T1 */ type_actual_t ivar_11;
             ivar_11 = (type_actual_t)union_adt__T1;
             /* T2 */ type_actual_t ivar_12;
             ivar_12 = (type_actual_t)union_adt__T2;
             ivar_8 = (union_adt__T1_t)union_adt__union_adt_left((union_adt__union_adt_t)ivar_11);
             result = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_8);
} else {
        
             union_adt__T2_t ivar_25;
             /* T1 */ type_actual_t ivar_28;
             ivar_28 = (type_actual_t)union_adt__T1;
             /* T2 */ type_actual_t ivar_29;
             ivar_29 = (type_actual_t)union_adt__T2;
             ivar_25 = (union_adt__T2_t)union_adt__union_adt_right((union_adt__union_adt_t)ivar_28);
             result = (bool_t)ivar_3->ftbl->fptr(ivar_3, ivar_25);
};

        return result;
}

union_adt_closure_8_t new_union_adt_closure_8(void){
        static struct union_adt_funtype_4_ftbl_s ftbl = {.fptr = (bool_t (*)(union_adt_funtype_4_t, union_adt__union_adt_t))&f_union_adt_closure_8, .mptr = (bool_t (*)(union_adt_funtype_4_t, union_adt__union_adt_t))&m_union_adt_closure_8, .rptr =  (void (*)(union_adt_funtype_4_t))&release_union_adt_closure_8, .cptr = (union_adt_funtype_4_t (*)(union_adt_funtype_4_t))&copy_union_adt_closure_8};
        union_adt_closure_8_t tmp = (union_adt_closure_8_t) safe_malloc(sizeof(struct union_adt_closure_8_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_union_adt_closure_8(union_adt_funtype_4_t closure, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        union_adt_closure_8_t x = (union_adt_closure_8_t)closure;
        x->count--;
        if (x->count <= 0){
         release_union_adt_funtype_5(x->fvar_3, union_adt__T1, union_adt__T2);
         release_union_adt_funtype_6(x->fvar_4, union_adt__T1, union_adt__T2);
        //printf("\nFreeing\n");
        safe_free(x);}}

union_adt_closure_8_t copy_union_adt_closure_8(union_adt_closure_8_t x){
        union_adt_closure_8_t y = new_union_adt_closure_8();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        if (x->htbl != NULL){
            union_adt_funtype_4_htbl_t new_htbl = (union_adt_funtype_4_htbl_t) safe_malloc(sizeof(struct union_adt_funtype_4_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            union_adt_funtype_4_hashentry_t * new_data = (union_adt_funtype_4_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct union_adt_funtype_4_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct union_adt_funtype_4_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_union_adt_funtype_9(union_adt_funtype_9_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

union_adt_funtype_9_t copy_union_adt_funtype_9(union_adt_funtype_9_t x){return x->ftbl->cptr(x);}

bool_t equal_union_adt_funtype_9(union_adt_funtype_9_t x, union_adt_funtype_9_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        return false;}

char* json_union_adt_funtype_9(union_adt_funtype_9_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){char * result = safe_malloc(29); sprintf(result, "%s", "\"union_adt_funtype_9\""); return result;}

void release_union_adt_funtype_10(union_adt_funtype_10_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

union_adt_funtype_10_t copy_union_adt_funtype_10(union_adt_funtype_10_t x){return x->ftbl->cptr(x);}

bool_t equal_union_adt_funtype_10(union_adt_funtype_10_t x, union_adt_funtype_10_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        return false;}

char* json_union_adt_funtype_10(union_adt_funtype_10_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){char * result = safe_malloc(30); sprintf(result, "%s", "\"union_adt_funtype_10\""); return result;}

void release_union_adt_funtype_11(union_adt_funtype_11_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

union_adt_funtype_11_t copy_union_adt_funtype_11(union_adt_funtype_11_t x){return x->ftbl->cptr(x);}

bool_t equal_union_adt_funtype_11(union_adt_funtype_11_t x, union_adt_funtype_11_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        return false;}

char* json_union_adt_funtype_11(union_adt_funtype_11_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){char * result = safe_malloc(30); sprintf(result, "%s", "\"union_adt_funtype_11\""); return result;}


mpz_ptr_t f_union_adt_closure_12(struct union_adt_closure_12_s * closure, union_adt__union_adt_t bvar){
        mpz_ptr_t result = h_union_adt_closure_12(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

mpz_ptr_t m_union_adt_closure_12(struct union_adt_closure_12_s * closure, union_adt__union_adt_t bvar){
        return h_union_adt_closure_12(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

mpz_ptr_t h_union_adt_closure_12(union_adt__union_adt_t ivar_6, type_actual_t union_adt__T2, type_actual_t union_adt__T1, union_adt_funtype_10_t ivar_1, union_adt_funtype_11_t ivar_3){
        mpz_ptr_t result;
        bool_t ivar_33;
        /* T1 */ type_actual_t ivar_36;
        ivar_36 = (type_actual_t)union_adt__T1;
        /* T2 */ type_actual_t ivar_37;
        ivar_37 = (type_actual_t)union_adt__T2;
        ivar_6->count++;
        ivar_33 = (bool_t)r_union_adt__inlp((union_adt__union_adt_t)ivar_36);
        if (ivar_33){ 
             union_adt__T1_t ivar_22;
             /* T1 */ type_actual_t ivar_25;
             ivar_25 = (type_actual_t)union_adt__T1;
             /* T2 */ type_actual_t ivar_26;
             ivar_26 = (type_actual_t)union_adt__T2;
             ivar_22 = (union_adt__T1_t)union_adt__union_adt_left((union_adt__union_adt_t)ivar_25);
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_22));
} else {
        
             union_adt__T2_t ivar_39;
             /* T1 */ type_actual_t ivar_42;
             ivar_42 = (type_actual_t)union_adt__T1;
             /* T2 */ type_actual_t ivar_43;
             ivar_43 = (type_actual_t)union_adt__T2;
             ivar_39 = (union_adt__T2_t)union_adt__union_adt_right((union_adt__union_adt_t)ivar_42);
             mpz_mk_set(result, ivar_3->ftbl->fptr(ivar_3, ivar_39));
};

        return result;
}

union_adt_closure_12_t new_union_adt_closure_12(void){
        static struct union_adt_funtype_9_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(union_adt_funtype_9_t, union_adt__union_adt_t))&f_union_adt_closure_12, .mptr = (mpz_ptr_t (*)(union_adt_funtype_9_t, union_adt__union_adt_t))&m_union_adt_closure_12, .rptr =  (void (*)(union_adt_funtype_9_t))&release_union_adt_closure_12, .cptr = (union_adt_funtype_9_t (*)(union_adt_funtype_9_t))&copy_union_adt_closure_12};
        union_adt_closure_12_t tmp = (union_adt_closure_12_t) safe_malloc(sizeof(struct union_adt_closure_12_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_union_adt_closure_12(union_adt_funtype_9_t closure, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        union_adt_closure_12_t x = (union_adt_closure_12_t)closure;
        x->count--;
        if (x->count <= 0){
         release_union_adt_funtype_10(x->fvar_3, union_adt__T1, union_adt__T2);
         release_union_adt_funtype_11(x->fvar_4, union_adt__T1, union_adt__T2);
        //printf("\nFreeing\n");
        safe_free(x);}}

union_adt_closure_12_t copy_union_adt_closure_12(union_adt_closure_12_t x){
        union_adt_closure_12_t y = new_union_adt_closure_12();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        if (x->htbl != NULL){
            union_adt_funtype_9_htbl_t new_htbl = (union_adt_funtype_9_htbl_t) safe_malloc(sizeof(struct union_adt_funtype_9_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            union_adt_funtype_9_hashentry_t * new_data = (union_adt_funtype_9_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct union_adt_funtype_9_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct union_adt_funtype_9_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


union_adt_record_13_t new_union_adt_record_13(void){
        union_adt_record_13_t tmp = (union_adt_record_13_t) safe_malloc(sizeof(struct union_adt_record_13_s));
        tmp->count = 1;
        return tmp;}

void release_union_adt_record_13(union_adt_record_13_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
        if (x->count <= 0){
         union_adt__T1->release_ptr(x->project_1, union_adt__T1);
         release_union_adt__union_adt(x->project_2, union_adt__T1, union_adt__T2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_union_adt_record_13_ptr(pointer_t x, type_actual_t T){
        actual_union_adt_record_13_t actual = (actual_union_adt_record_13_t)T;
        type_actual_t union_adt__T1 = actual->union_adt__T1;
        type_actual_t union_adt__T2 = actual->union_adt__T2;
        release_union_adt_record_13((union_adt_record_13_t)x, union_adt__T1, union_adt__T2);
}

union_adt_record_13_t copy_union_adt_record_13(union_adt_record_13_t x){
        union_adt_record_13_t y = new_union_adt_record_13();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_union_adt_record_13(union_adt_record_13_t x, union_adt_record_13_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        bool_t tmp = true;
        tmp = tmp && union_adt__T1->equal_ptr(x->project_1, y->project_1, union_adt__T1);
        tmp = tmp && equal_union_adt__union_adt(x->project_2, y->project_2, union_adt__T1, union_adt__T2);
        return tmp;}

char * json_union_adt_record_13(union_adt_record_13_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, union_adt__T1->json_ptr(x->project_1, union_adt__T1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_union_adt__union_adt(x->project_2, union_adt__T1, union_adt__T2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_union_adt_record_13_ptr(pointer_t x, pointer_t y, actual_union_adt_record_13_t T){
        actual_union_adt_record_13_t actual = (actual_union_adt_record_13_t)T;
        type_actual_t union_adt__T1 = actual->union_adt__T1;
        type_actual_t union_adt__T2 = actual->union_adt__T2;
        return equal_union_adt_record_13((union_adt_record_13_t)x, (union_adt_record_13_t)y, union_adt__T1, union_adt__T2);
}

char * json_union_adt_record_13_ptr(pointer_t x, actual_union_adt_record_13_t T){
        actual_union_adt_record_13_t actual = (actual_union_adt_record_13_t)T;
        type_actual_t union_adt__T1 = actual->union_adt__T1;
        type_actual_t union_adt__T2 = actual->union_adt__T2;
        return json_union_adt_record_13((union_adt_record_13_t)x, union_adt__T1, union_adt__T2);
}

actual_union_adt_record_13_t actual_union_adt_record_13(type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        actual_union_adt_record_13_t new = (actual_union_adt_record_13_t)safe_malloc(sizeof(struct actual_union_adt_record_13_s));
        new->equal_ptr = (equal_ptr_t)(*equal_union_adt_record_13_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_union_adt_record_13_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_union_adt_record_13_ptr);
 

        new->union_adt__T1 = union_adt__T1;
        new->union_adt__T2 = union_adt__T2;
 
        return new;
 };

union_adt_record_13_t update_union_adt_record_13_project_1(union_adt_record_13_t x, union_adt__T1_t v, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        union_adt_record_13_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){union_adt__T1->release_ptr(x->project_1, union_adt__T1);};}
        else {y = copy_union_adt_record_13(x); x->count--; y->project_1->count--;};
        y->project_1 = (union_adt__T1_t)v;
        return y;}

union_adt_record_13_t update_union_adt_record_13_project_2(union_adt_record_13_t x, union_adt__union_adt_t v, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        union_adt_record_13_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_union_adt__union_adt(x->project_2, union_adt__T1, union_adt__T2);};}
        else {y = copy_union_adt_record_13(x); x->count--; y->project_2->count--;};
        y->project_2 = (union_adt__union_adt_t)v;
        return y;}



void release_union_adt_funtype_14(union_adt_funtype_14_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

union_adt_funtype_14_t copy_union_adt_funtype_14(union_adt_funtype_14_t x){return x->ftbl->cptr(x);}

bool_t equal_union_adt_funtype_14(union_adt_funtype_14_t x, union_adt_funtype_14_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        return false;}

char* json_union_adt_funtype_14(union_adt_funtype_14_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){char * result = safe_malloc(30); sprintf(result, "%s", "\"union_adt_funtype_14\""); return result;}


union_adt_record_15_t new_union_adt_record_15(void){
        union_adt_record_15_t tmp = (union_adt_record_15_t) safe_malloc(sizeof(struct union_adt_record_15_s));
        tmp->count = 1;
        return tmp;}

void release_union_adt_record_15(union_adt_record_15_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
        if (x->count <= 0){
         union_adt__T2->release_ptr(x->project_1, union_adt__T2);
         release_union_adt__union_adt(x->project_2, union_adt__T1, union_adt__T2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_union_adt_record_15_ptr(pointer_t x, type_actual_t T){
        actual_union_adt_record_15_t actual = (actual_union_adt_record_15_t)T;
        type_actual_t union_adt__T1 = actual->union_adt__T1;
        type_actual_t union_adt__T2 = actual->union_adt__T2;
        release_union_adt_record_15((union_adt_record_15_t)x, union_adt__T1, union_adt__T2);
}

union_adt_record_15_t copy_union_adt_record_15(union_adt_record_15_t x){
        union_adt_record_15_t y = new_union_adt_record_15();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_union_adt_record_15(union_adt_record_15_t x, union_adt_record_15_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        bool_t tmp = true;
        tmp = tmp && union_adt__T2->equal_ptr(x->project_1, y->project_1, union_adt__T2);
        tmp = tmp && equal_union_adt__union_adt(x->project_2, y->project_2, union_adt__T1, union_adt__T2);
        return tmp;}

char * json_union_adt_record_15(union_adt_record_15_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, union_adt__T2->json_ptr(x->project_1, union_adt__T2));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_union_adt__union_adt(x->project_2, union_adt__T1, union_adt__T2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_union_adt_record_15_ptr(pointer_t x, pointer_t y, actual_union_adt_record_15_t T){
        actual_union_adt_record_15_t actual = (actual_union_adt_record_15_t)T;
        type_actual_t union_adt__T1 = actual->union_adt__T1;
        type_actual_t union_adt__T2 = actual->union_adt__T2;
        return equal_union_adt_record_15((union_adt_record_15_t)x, (union_adt_record_15_t)y, union_adt__T1, union_adt__T2);
}

char * json_union_adt_record_15_ptr(pointer_t x, actual_union_adt_record_15_t T){
        actual_union_adt_record_15_t actual = (actual_union_adt_record_15_t)T;
        type_actual_t union_adt__T1 = actual->union_adt__T1;
        type_actual_t union_adt__T2 = actual->union_adt__T2;
        return json_union_adt_record_15((union_adt_record_15_t)x, union_adt__T1, union_adt__T2);
}

actual_union_adt_record_15_t actual_union_adt_record_15(type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        actual_union_adt_record_15_t new = (actual_union_adt_record_15_t)safe_malloc(sizeof(struct actual_union_adt_record_15_s));
        new->equal_ptr = (equal_ptr_t)(*equal_union_adt_record_15_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_union_adt_record_15_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_union_adt_record_15_ptr);
 

        new->union_adt__T1 = union_adt__T1;
        new->union_adt__T2 = union_adt__T2;
 
        return new;
 };

union_adt_record_15_t update_union_adt_record_15_project_1(union_adt_record_15_t x, union_adt__T2_t v, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        union_adt_record_15_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){union_adt__T2->release_ptr(x->project_1, union_adt__T2);};}
        else {y = copy_union_adt_record_15(x); x->count--; y->project_1->count--;};
        y->project_1 = (union_adt__T2_t)v;
        return y;}

union_adt_record_15_t update_union_adt_record_15_project_2(union_adt_record_15_t x, union_adt__union_adt_t v, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        union_adt_record_15_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_union_adt__union_adt(x->project_2, union_adt__T1, union_adt__T2);};}
        else {y = copy_union_adt_record_15(x); x->count--; y->project_2->count--;};
        y->project_2 = (union_adt__union_adt_t)v;
        return y;}



void release_union_adt_funtype_16(union_adt_funtype_16_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

union_adt_funtype_16_t copy_union_adt_funtype_16(union_adt_funtype_16_t x){return x->ftbl->cptr(x);}

bool_t equal_union_adt_funtype_16(union_adt_funtype_16_t x, union_adt_funtype_16_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        return false;}

char* json_union_adt_funtype_16(union_adt_funtype_16_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){char * result = safe_malloc(30); sprintf(result, "%s", "\"union_adt_funtype_16\""); return result;}


mpz_ptr_t f_union_adt_closure_17(struct union_adt_closure_17_s * closure, union_adt__union_adt_t bvar){
        mpz_ptr_t result = h_union_adt_closure_17(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

mpz_ptr_t m_union_adt_closure_17(struct union_adt_closure_17_s * closure, union_adt__union_adt_t bvar){
        return h_union_adt_closure_17(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

mpz_ptr_t h_union_adt_closure_17(union_adt__union_adt_t ivar_6, type_actual_t union_adt__T2, type_actual_t union_adt__T1, union_adt_funtype_14_t ivar_1, union_adt_funtype_16_t ivar_3){
        mpz_ptr_t result;
        bool_t ivar_35;
        /* T1 */ type_actual_t ivar_38;
        ivar_38 = (type_actual_t)union_adt__T1;
        /* T2 */ type_actual_t ivar_39;
        ivar_39 = (type_actual_t)union_adt__T2;
        ivar_6->count++;
        ivar_35 = (bool_t)r_union_adt__inlp((union_adt__union_adt_t)ivar_38);
        if (ivar_35){ 
             union_adt__T1_t ivar_22;
             /* T1 */ type_actual_t ivar_25;
             ivar_25 = (type_actual_t)union_adt__T1;
             /* T2 */ type_actual_t ivar_26;
             ivar_26 = (type_actual_t)union_adt__T2;
             ivar_6->count++;
             ivar_22 = (union_adt__T1_t)union_adt__union_adt_left((union_adt__union_adt_t)ivar_25);
             mpz_mk_set(result, ivar_1->ftbl->mptr(ivar_1, ivar_22, ivar_6));
} else {
        
             union_adt__T2_t ivar_41;
             /* T1 */ type_actual_t ivar_44;
             ivar_44 = (type_actual_t)union_adt__T1;
             /* T2 */ type_actual_t ivar_45;
             ivar_45 = (type_actual_t)union_adt__T2;
             ivar_6->count++;
             ivar_41 = (union_adt__T2_t)union_adt__union_adt_right((union_adt__union_adt_t)ivar_44);
             mpz_mk_set(result, ivar_3->ftbl->mptr(ivar_3, ivar_41, ivar_6));
};

        return result;
}

union_adt_closure_17_t new_union_adt_closure_17(void){
        static struct union_adt_funtype_9_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(union_adt_funtype_9_t, union_adt__union_adt_t))&f_union_adt_closure_17, .mptr = (mpz_ptr_t (*)(union_adt_funtype_9_t, union_adt__union_adt_t))&m_union_adt_closure_17, .rptr =  (void (*)(union_adt_funtype_9_t))&release_union_adt_closure_17, .cptr = (union_adt_funtype_9_t (*)(union_adt_funtype_9_t))&copy_union_adt_closure_17};
        union_adt_closure_17_t tmp = (union_adt_closure_17_t) safe_malloc(sizeof(struct union_adt_closure_17_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_union_adt_closure_17(union_adt_funtype_9_t closure, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        union_adt_closure_17_t x = (union_adt_closure_17_t)closure;
        x->count--;
        if (x->count <= 0){
         release_union_adt_funtype_14(x->fvar_3, union_adt__T1, union_adt__T2);
         release_union_adt_funtype_16(x->fvar_4, union_adt__T1, union_adt__T2);
        //printf("\nFreeing\n");
        safe_free(x);}}

union_adt_closure_17_t copy_union_adt_closure_17(union_adt_closure_17_t x){
        union_adt_closure_17_t y = new_union_adt_closure_17();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        if (x->htbl != NULL){
            union_adt_funtype_9_htbl_t new_htbl = (union_adt_funtype_9_htbl_t) safe_malloc(sizeof(struct union_adt_funtype_9_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            union_adt_funtype_9_hashentry_t * new_data = (union_adt_funtype_9_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct union_adt_funtype_9_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct union_adt_funtype_9_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_union_adt_funtype_18(union_adt_funtype_18_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

union_adt_funtype_18_t copy_union_adt_funtype_18(union_adt_funtype_18_t x){return x->ftbl->cptr(x);}

bool_t equal_union_adt_funtype_18(union_adt_funtype_18_t x, union_adt_funtype_18_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        return false;}

char* json_union_adt_funtype_18(union_adt_funtype_18_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){char * result = safe_malloc(30); sprintf(result, "%s", "\"union_adt_funtype_18\""); return result;}

void release_union_adt_funtype_19(union_adt_funtype_19_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

union_adt_funtype_19_t copy_union_adt_funtype_19(union_adt_funtype_19_t x){return x->ftbl->cptr(x);}

bool_t equal_union_adt_funtype_19(union_adt_funtype_19_t x, union_adt_funtype_19_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        return false;}

char* json_union_adt_funtype_19(union_adt_funtype_19_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){char * result = safe_malloc(30); sprintf(result, "%s", "\"union_adt_funtype_19\""); return result;}

void release_union_adt_funtype_20(union_adt_funtype_20_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

union_adt_funtype_20_t copy_union_adt_funtype_20(union_adt_funtype_20_t x){return x->ftbl->cptr(x);}

bool_t equal_union_adt_funtype_20(union_adt_funtype_20_t x, union_adt_funtype_20_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        return false;}

char* json_union_adt_funtype_20(union_adt_funtype_20_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){char * result = safe_malloc(30); sprintf(result, "%s", "\"union_adt_funtype_20\""); return result;}


ordstruct_adt__ordstruct_adt_t f_union_adt_closure_21(struct union_adt_closure_21_s * closure, union_adt__union_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_union_adt_closure_21(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_union_adt_closure_21(struct union_adt_closure_21_s * closure, union_adt__union_adt_t bvar){
        return h_union_adt_closure_21(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

ordstruct_adt__ordstruct_adt_t h_union_adt_closure_21(union_adt__union_adt_t ivar_6, type_actual_t union_adt__T2, type_actual_t union_adt__T1, union_adt_funtype_19_t ivar_1, union_adt_funtype_20_t ivar_3){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_33;
        /* T1 */ type_actual_t ivar_36;
        ivar_36 = (type_actual_t)union_adt__T1;
        /* T2 */ type_actual_t ivar_37;
        ivar_37 = (type_actual_t)union_adt__T2;
        ivar_6->count++;
        ivar_33 = (bool_t)r_union_adt__inlp((union_adt__union_adt_t)ivar_36);
        if (ivar_33){ 
             union_adt__T1_t ivar_22;
             /* T1 */ type_actual_t ivar_25;
             ivar_25 = (type_actual_t)union_adt__T1;
             /* T2 */ type_actual_t ivar_26;
             ivar_26 = (type_actual_t)union_adt__T2;
             ivar_22 = (union_adt__T1_t)union_adt__union_adt_left((union_adt__union_adt_t)ivar_25);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_22);
} else {
        
             union_adt__T2_t ivar_39;
             /* T1 */ type_actual_t ivar_42;
             ivar_42 = (type_actual_t)union_adt__T1;
             /* T2 */ type_actual_t ivar_43;
             ivar_43 = (type_actual_t)union_adt__T2;
             ivar_39 = (union_adt__T2_t)union_adt__union_adt_right((union_adt__union_adt_t)ivar_42);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->fptr(ivar_3, ivar_39);
};

        return result;
}

union_adt_closure_21_t new_union_adt_closure_21(void){
        static struct union_adt_funtype_18_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(union_adt_funtype_18_t, union_adt__union_adt_t))&f_union_adt_closure_21, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(union_adt_funtype_18_t, union_adt__union_adt_t))&m_union_adt_closure_21, .rptr =  (void (*)(union_adt_funtype_18_t))&release_union_adt_closure_21, .cptr = (union_adt_funtype_18_t (*)(union_adt_funtype_18_t))&copy_union_adt_closure_21};
        union_adt_closure_21_t tmp = (union_adt_closure_21_t) safe_malloc(sizeof(struct union_adt_closure_21_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_union_adt_closure_21(union_adt_funtype_18_t closure, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        union_adt_closure_21_t x = (union_adt_closure_21_t)closure;
        x->count--;
        if (x->count <= 0){
         release_union_adt_funtype_19(x->fvar_3, union_adt__T1, union_adt__T2);
         release_union_adt_funtype_20(x->fvar_4, union_adt__T1, union_adt__T2);
        //printf("\nFreeing\n");
        safe_free(x);}}

union_adt_closure_21_t copy_union_adt_closure_21(union_adt_closure_21_t x){
        union_adt_closure_21_t y = new_union_adt_closure_21();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        if (x->htbl != NULL){
            union_adt_funtype_18_htbl_t new_htbl = (union_adt_funtype_18_htbl_t) safe_malloc(sizeof(struct union_adt_funtype_18_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            union_adt_funtype_18_hashentry_t * new_data = (union_adt_funtype_18_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct union_adt_funtype_18_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct union_adt_funtype_18_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_union_adt_funtype_22(union_adt_funtype_22_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

union_adt_funtype_22_t copy_union_adt_funtype_22(union_adt_funtype_22_t x){return x->ftbl->cptr(x);}

bool_t equal_union_adt_funtype_22(union_adt_funtype_22_t x, union_adt_funtype_22_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        return false;}

char* json_union_adt_funtype_22(union_adt_funtype_22_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){char * result = safe_malloc(30); sprintf(result, "%s", "\"union_adt_funtype_22\""); return result;}

void release_union_adt_funtype_23(union_adt_funtype_23_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

union_adt_funtype_23_t copy_union_adt_funtype_23(union_adt_funtype_23_t x){return x->ftbl->cptr(x);}

bool_t equal_union_adt_funtype_23(union_adt_funtype_23_t x, union_adt_funtype_23_t y, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        return false;}

char* json_union_adt_funtype_23(union_adt_funtype_23_t x, type_actual_t union_adt__T1, type_actual_t union_adt__T2){char * result = safe_malloc(30); sprintf(result, "%s", "\"union_adt_funtype_23\""); return result;}


ordstruct_adt__ordstruct_adt_t f_union_adt_closure_24(struct union_adt_closure_24_s * closure, union_adt__union_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_union_adt_closure_24(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_union_adt_closure_24(struct union_adt_closure_24_s * closure, union_adt__union_adt_t bvar){
        return h_union_adt_closure_24(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

ordstruct_adt__ordstruct_adt_t h_union_adt_closure_24(union_adt__union_adt_t ivar_6, type_actual_t union_adt__T2, type_actual_t union_adt__T1, union_adt_funtype_22_t ivar_1, union_adt_funtype_23_t ivar_3){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_35;
        /* T1 */ type_actual_t ivar_38;
        ivar_38 = (type_actual_t)union_adt__T1;
        /* T2 */ type_actual_t ivar_39;
        ivar_39 = (type_actual_t)union_adt__T2;
        ivar_6->count++;
        ivar_35 = (bool_t)r_union_adt__inlp((union_adt__union_adt_t)ivar_38);
        if (ivar_35){ 
             union_adt__T1_t ivar_22;
             /* T1 */ type_actual_t ivar_25;
             ivar_25 = (type_actual_t)union_adt__T1;
             /* T2 */ type_actual_t ivar_26;
             ivar_26 = (type_actual_t)union_adt__T2;
             ivar_6->count++;
             ivar_22 = (union_adt__T1_t)union_adt__union_adt_left((union_adt__union_adt_t)ivar_25);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->mptr(ivar_1, ivar_22, ivar_6);
} else {
        
             union_adt__T2_t ivar_41;
             /* T1 */ type_actual_t ivar_44;
             ivar_44 = (type_actual_t)union_adt__T1;
             /* T2 */ type_actual_t ivar_45;
             ivar_45 = (type_actual_t)union_adt__T2;
             ivar_6->count++;
             ivar_41 = (union_adt__T2_t)union_adt__union_adt_right((union_adt__union_adt_t)ivar_44);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_41, ivar_6);
};

        return result;
}

union_adt_closure_24_t new_union_adt_closure_24(void){
        static struct union_adt_funtype_18_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(union_adt_funtype_18_t, union_adt__union_adt_t))&f_union_adt_closure_24, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(union_adt_funtype_18_t, union_adt__union_adt_t))&m_union_adt_closure_24, .rptr =  (void (*)(union_adt_funtype_18_t))&release_union_adt_closure_24, .cptr = (union_adt_funtype_18_t (*)(union_adt_funtype_18_t))&copy_union_adt_closure_24};
        union_adt_closure_24_t tmp = (union_adt_closure_24_t) safe_malloc(sizeof(struct union_adt_closure_24_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_union_adt_closure_24(union_adt_funtype_18_t closure, type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        union_adt_closure_24_t x = (union_adt_closure_24_t)closure;
        x->count--;
        if (x->count <= 0){
         release_union_adt_funtype_22(x->fvar_3, union_adt__T1, union_adt__T2);
         release_union_adt_funtype_23(x->fvar_4, union_adt__T1, union_adt__T2);
        //printf("\nFreeing\n");
        safe_free(x);}}

union_adt_closure_24_t copy_union_adt_closure_24(union_adt_closure_24_t x){
        union_adt_closure_24_t y = new_union_adt_closure_24();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        if (x->htbl != NULL){
            union_adt_funtype_18_htbl_t new_htbl = (union_adt_funtype_18_htbl_t) safe_malloc(sizeof(struct union_adt_funtype_18_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            union_adt_funtype_18_hashentry_t * new_data = (union_adt_funtype_18_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct union_adt_funtype_18_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct union_adt_funtype_18_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

bool_t r_union_adt__inlp(union_adt__union_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->union_adt__union_adt_index;
        release_union_adt__union_adt(ivar_1, union_adt__T1, union_adt__T2);
        result = (ivar_2 == ivar_3);

        
        return result;
}

bool_t r_union_adt__inrp(union_adt__union_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->union_adt__union_adt_index;
        release_union_adt__union_adt(ivar_1, union_adt__T1, union_adt__T2);
        result = (ivar_2 == ivar_3);

        
        return result;
}

union_adt__inl_t update_union_adt__union_adt_left(union_adt__union_adt_t ivar_1, union_adt__T1_t ivar_3){
        union_adt__inl_t  result;
        union_adt__inl_t ivar_2;
        //copying to union_adt__inl from union_adt__union_adt;
        ivar_2 = (union_adt__inl_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_union_adt__union_adt(ivar_1, union_adt__T1, union_adt__T2);
        result = (union_adt__inl_t)update_union_adt__inl_left(ivar_2, ivar_3, union_adt__T1, union_adt__T2);

        
        return result;
}

union_adt__T1_t union_adt__union_adt_left(union_adt__union_adt_t ivar_1){
        union_adt__T1_t  result;
        union_adt__inl_t ivar_2;
        //copying to union_adt__inl from union_adt__union_adt;
        ivar_2 = (union_adt__inl_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_union_adt__union_adt(ivar_1, union_adt__T1, union_adt__T2);
        result = (union_adt__T1_t)ivar_2->left;
        result->count++;
        release_union_adt__inl(ivar_2);

        
        return result;
}

union_adt__inr_t update_union_adt__union_adt_right(union_adt__union_adt_t ivar_1, union_adt__T2_t ivar_3){
        union_adt__inr_t  result;
        union_adt__inr_t ivar_2;
        //copying to union_adt__inr from union_adt__union_adt;
        ivar_2 = (union_adt__inr_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_union_adt__union_adt(ivar_1, union_adt__T1, union_adt__T2);
        result = (union_adt__inr_t)update_union_adt__inr_right(ivar_2, ivar_3, union_adt__T1, union_adt__T2);

        
        return result;
}

union_adt__T2_t union_adt__union_adt_right(union_adt__union_adt_t ivar_1){
        union_adt__T2_t  result;
        union_adt__inr_t ivar_2;
        //copying to union_adt__inr from union_adt__union_adt;
        ivar_2 = (union_adt__inr_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_union_adt__union_adt(ivar_1, union_adt__T1, union_adt__T2);
        result = (union_adt__T2_t)ivar_2->right;
        result->count++;
        release_union_adt__inr(ivar_2);

        
        return result;
}

union_adt__union_adt_t union_adt__inl(union_adt__T1_t ivar_2){
        union_adt__union_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        union_adt__inl_t tmp2453 = new_union_adt__inl();;
        result = (union_adt__union_adt_t)tmp2453;
        tmp2453->union_adt__union_adt_index = (uint8_t)ivar_1;
        tmp2453->left = (union_adt__T1_t)ivar_2;

        
        return result;
}

union_adt__union_adt_t union_adt__inr(union_adt__T2_t ivar_2){
        union_adt__union_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        union_adt__inr_t tmp2454 = new_union_adt__inr();;
        result = (union_adt__union_adt_t)tmp2454;
        tmp2454->union_adt__union_adt_index = (uint8_t)ivar_1;
        tmp2454->right = (union_adt__T2_t)ivar_2;

        
        return result;
}

union_adt_funtype_3_t union_adt__union_ord(type_actual_t union_adt__T1, type_actual_t union_adt__T2){
        union_adt_funtype_3_t  result;
        pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        
        return result;
}

uint8_t union_adt__ord(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt__union_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_9;
        /* T1 */ type_actual_t ivar_12;
        ivar_12 = (type_actual_t)union_adt__T1;
        /* T2 */ type_actual_t ivar_13;
        ivar_13 = (type_actual_t)union_adt__T2;
        ivar_1->count++;
        ivar_9 = (bool_t)r_union_adt__inlp((union_adt__union_adt_t)ivar_12);
        if (ivar_9){ 
             result = (uint8_t)0;
} else {
        
             result = (uint8_t)1;
};

        
        return result;
}

union_adt_funtype_4_t union_adt__every__1(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt_funtype_5_t ivar_1, union_adt_funtype_6_t ivar_3){
        union_adt_funtype_4_t  result;
        union_adt_closure_7_t cl2457;
        cl2457 = new_union_adt_closure_7();
        cl2457->fvar_1 = (type_actual_t)union_adt__T2;
        cl2457->fvar_2 = (type_actual_t)union_adt__T1;
        cl2457->fvar_3 = (union_adt_funtype_5_t)ivar_1;
        if (cl2457->fvar_3 != NULL) cl2457->fvar_3->count++;
        cl2457->fvar_4 = (union_adt_funtype_6_t)ivar_3;
        if (cl2457->fvar_4 != NULL) cl2457->fvar_4->count++;
        release_union_adt_funtype_5(ivar_1, union_adt__T1, union_adt__T2);
        release_union_adt_funtype_6(ivar_3, union_adt__T1, union_adt__T2);
        result = (union_adt_funtype_4_t)cl2457;

        
        return result;
}

bool_t union_adt__every__2(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt_funtype_5_t ivar_1, union_adt_funtype_6_t ivar_3, union_adt__union_adt_t ivar_5){
        bool_t  result;
        bool_t ivar_18;
        /* T1 */ type_actual_t ivar_21;
        ivar_21 = (type_actual_t)union_adt__T1;
        /* T2 */ type_actual_t ivar_22;
        ivar_22 = (type_actual_t)union_adt__T2;
        ivar_5->count++;
        ivar_18 = (bool_t)r_union_adt__inlp((union_adt__union_adt_t)ivar_21);
        if (ivar_18){ 
             release_union_adt_funtype_6(ivar_3, union_adt__T1, union_adt__T2);
             union_adt__T1_t ivar_7;
             /* T1 */ type_actual_t ivar_10;
             ivar_10 = (type_actual_t)union_adt__T1;
             /* T2 */ type_actual_t ivar_11;
             ivar_11 = (type_actual_t)union_adt__T2;
             ivar_7 = (union_adt__T1_t)union_adt__union_adt_left((union_adt__union_adt_t)ivar_10);
             result = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_7);
             ivar_1->ftbl->rptr(ivar_1);
} else {
        
             release_union_adt_funtype_5(ivar_1, union_adt__T1, union_adt__T2);
             union_adt__T2_t ivar_24;
             /* T1 */ type_actual_t ivar_27;
             ivar_27 = (type_actual_t)union_adt__T1;
             /* T2 */ type_actual_t ivar_28;
             ivar_28 = (type_actual_t)union_adt__T2;
             ivar_24 = (union_adt__T2_t)union_adt__union_adt_right((union_adt__union_adt_t)ivar_27);
             result = (bool_t)ivar_3->ftbl->fptr(ivar_3, ivar_24);
             ivar_3->ftbl->rptr(ivar_3);
};

        
        return result;
}

union_adt_funtype_4_t union_adt__some__1(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt_funtype_5_t ivar_1, union_adt_funtype_6_t ivar_3){
        union_adt_funtype_4_t  result;
        union_adt_closure_8_t cl2460;
        cl2460 = new_union_adt_closure_8();
        cl2460->fvar_1 = (type_actual_t)union_adt__T2;
        cl2460->fvar_2 = (type_actual_t)union_adt__T1;
        cl2460->fvar_3 = (union_adt_funtype_5_t)ivar_1;
        if (cl2460->fvar_3 != NULL) cl2460->fvar_3->count++;
        cl2460->fvar_4 = (union_adt_funtype_6_t)ivar_3;
        if (cl2460->fvar_4 != NULL) cl2460->fvar_4->count++;
        release_union_adt_funtype_5(ivar_1, union_adt__T1, union_adt__T2);
        release_union_adt_funtype_6(ivar_3, union_adt__T1, union_adt__T2);
        result = (union_adt_funtype_4_t)cl2460;

        
        return result;
}

bool_t union_adt__some__2(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt_funtype_5_t ivar_1, union_adt_funtype_6_t ivar_3, union_adt__union_adt_t ivar_5){
        bool_t  result;
        bool_t ivar_18;
        /* T1 */ type_actual_t ivar_21;
        ivar_21 = (type_actual_t)union_adt__T1;
        /* T2 */ type_actual_t ivar_22;
        ivar_22 = (type_actual_t)union_adt__T2;
        ivar_5->count++;
        ivar_18 = (bool_t)r_union_adt__inlp((union_adt__union_adt_t)ivar_21);
        if (ivar_18){ 
             release_union_adt_funtype_6(ivar_3, union_adt__T1, union_adt__T2);
             union_adt__T1_t ivar_7;
             /* T1 */ type_actual_t ivar_10;
             ivar_10 = (type_actual_t)union_adt__T1;
             /* T2 */ type_actual_t ivar_11;
             ivar_11 = (type_actual_t)union_adt__T2;
             ivar_7 = (union_adt__T1_t)union_adt__union_adt_left((union_adt__union_adt_t)ivar_10);
             result = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_7);
             ivar_1->ftbl->rptr(ivar_1);
} else {
        
             release_union_adt_funtype_5(ivar_1, union_adt__T1, union_adt__T2);
             union_adt__T2_t ivar_24;
             /* T1 */ type_actual_t ivar_27;
             ivar_27 = (type_actual_t)union_adt__T1;
             /* T2 */ type_actual_t ivar_28;
             ivar_28 = (type_actual_t)union_adt__T2;
             ivar_24 = (union_adt__T2_t)union_adt__union_adt_right((union_adt__union_adt_t)ivar_27);
             result = (bool_t)ivar_3->ftbl->fptr(ivar_3, ivar_24);
             ivar_3->ftbl->rptr(ivar_3);
};

        
        return result;
}

bool_t union_adt__subterm(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt__union_adt_t ivar_1, union_adt__union_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) equal_union_adt__union_adt(ivar_1, ivar_2, union_adt__T1, union_adt__T2);

        
        return result;
}

bool_t union_adt__doublelessp(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt__union_adt_t ivar_1, union_adt__union_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) false;

        
        return result;
}

union_adt_funtype_9_t union_adt__reduce_nat(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt_funtype_10_t ivar_1, union_adt_funtype_11_t ivar_3){
        union_adt_funtype_9_t  result;
        union_adt_closure_12_t cl2463;
        cl2463 = new_union_adt_closure_12();
        cl2463->fvar_1 = (type_actual_t)union_adt__T2;
        cl2463->fvar_2 = (type_actual_t)union_adt__T1;
        cl2463->fvar_3 = (union_adt_funtype_10_t)ivar_1;
        if (cl2463->fvar_3 != NULL) cl2463->fvar_3->count++;
        cl2463->fvar_4 = (union_adt_funtype_11_t)ivar_3;
        if (cl2463->fvar_4 != NULL) cl2463->fvar_4->count++;
        release_union_adt_funtype_10(ivar_1, union_adt__T1, union_adt__T2);
        release_union_adt_funtype_11(ivar_3, union_adt__T1, union_adt__T2);
        result = (union_adt_funtype_9_t)cl2463;

        
        return result;
}

union_adt_funtype_9_t union_adt__REDUCE_nat(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt_funtype_14_t ivar_1, union_adt_funtype_16_t ivar_3){
        union_adt_funtype_9_t  result;
        union_adt_closure_17_t cl2477;
        cl2477 = new_union_adt_closure_17();
        cl2477->fvar_1 = (type_actual_t)union_adt__T2;
        cl2477->fvar_2 = (type_actual_t)union_adt__T1;
        cl2477->fvar_3 = (union_adt_funtype_14_t)ivar_1;
        if (cl2477->fvar_3 != NULL) cl2477->fvar_3->count++;
        cl2477->fvar_4 = (union_adt_funtype_16_t)ivar_3;
        if (cl2477->fvar_4 != NULL) cl2477->fvar_4->count++;
        release_union_adt_funtype_14(ivar_1, union_adt__T1, union_adt__T2);
        release_union_adt_funtype_16(ivar_3, union_adt__T1, union_adt__T2);
        result = (union_adt_funtype_9_t)cl2477;

        
        return result;
}

union_adt_funtype_18_t union_adt__reduce_ordinal(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt_funtype_19_t ivar_1, union_adt_funtype_20_t ivar_3){
        union_adt_funtype_18_t  result;
        union_adt_closure_21_t cl2479;
        cl2479 = new_union_adt_closure_21();
        cl2479->fvar_1 = (type_actual_t)union_adt__T2;
        cl2479->fvar_2 = (type_actual_t)union_adt__T1;
        cl2479->fvar_3 = (union_adt_funtype_19_t)ivar_1;
        if (cl2479->fvar_3 != NULL) cl2479->fvar_3->count++;
        cl2479->fvar_4 = (union_adt_funtype_20_t)ivar_3;
        if (cl2479->fvar_4 != NULL) cl2479->fvar_4->count++;
        release_union_adt_funtype_19(ivar_1, union_adt__T1, union_adt__T2);
        release_union_adt_funtype_20(ivar_3, union_adt__T1, union_adt__T2);
        result = (union_adt_funtype_18_t)cl2479;

        
        return result;
}

union_adt_funtype_18_t union_adt__REDUCE_ordinal(type_actual_t union_adt__T1, type_actual_t union_adt__T2, union_adt_funtype_22_t ivar_1, union_adt_funtype_23_t ivar_3){
        union_adt_funtype_18_t  result;
        union_adt_closure_24_t cl2493;
        cl2493 = new_union_adt_closure_24();
        cl2493->fvar_1 = (type_actual_t)union_adt__T2;
        cl2493->fvar_2 = (type_actual_t)union_adt__T1;
        cl2493->fvar_3 = (union_adt_funtype_22_t)ivar_1;
        if (cl2493->fvar_3 != NULL) cl2493->fvar_3->count++;
        cl2493->fvar_4 = (union_adt_funtype_23_t)ivar_3;
        if (cl2493->fvar_4 != NULL) cl2493->fvar_4->count++;
        release_union_adt_funtype_22(ivar_1, union_adt__T1, union_adt__T2);
        release_union_adt_funtype_23(ivar_3, union_adt__T1, union_adt__T2);
        result = (union_adt_funtype_18_t)cl2493;

        
        return result;
}