//Code generated using pvs2ir2c
#include "ordstruct_adt_c.h"


ordstruct_adt__ordstruct_adt_t new_ordstruct_adt__ordstruct_adt(void){
        ordstruct_adt__ordstruct_adt_t tmp = (ordstruct_adt__ordstruct_adt_t) safe_malloc(sizeof(struct ordstruct_adt__ordstruct_adt_s));
        tmp->count = 1;
        return tmp;}

void release_ordstruct_adt__ordstruct_adt(ordstruct_adt__ordstruct_adt_t x){
switch (x->ordstruct_adt__ordstruct_adt_index) {
case 1:  release_ordstruct_adt__add((ordstruct_adt__add_t) x); break;
}}

void release_ordstruct_adt__ordstruct_adt_ptr(pointer_t x, type_actual_t T){
        release_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)x);
}

ordstruct_adt__ordstruct_adt_t copy_ordstruct_adt__ordstruct_adt(ordstruct_adt__ordstruct_adt_t x){
        ordstruct_adt__ordstruct_adt_t y = new_ordstruct_adt__ordstruct_adt();
        y->ordstruct_adt__ordstruct_adt_index = (uint8_t)x->ordstruct_adt__ordstruct_adt_index;
        y->count = 1;
        return y;}

bool_t equal_ordstruct_adt__ordstruct_adt(ordstruct_adt__ordstruct_adt_t x, ordstruct_adt__ordstruct_adt_t y){
        bool_t tmp = x->ordstruct_adt__ordstruct_adt_index == y->ordstruct_adt__ordstruct_adt_index;
        switch  (x->ordstruct_adt__ordstruct_adt_index) {
                case 1: tmp = tmp && equal_ordstruct_adt__add((ordstruct_adt__add_t) x, (ordstruct_adt__add_t) y); break;
        }
        return tmp;
}

char * json_ordstruct_adt__ordstruct_adt(ordstruct_adt__ordstruct_adt_t x){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ \"constructor\" = %u,", x->ordstruct_adt__ordstruct_adt_index);
        switch  (x->ordstruct_adt__ordstruct_adt_index) {
                case 1: tmp = safe_strcat(tmp, json_ordstruct_adt__add((ordstruct_adt__add_t) x)); break;
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_ordstruct_adt__ordstruct_adt_ptr(pointer_t x, pointer_t y, actual_ordstruct_adt__ordstruct_adt_t T){
        return equal_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)x, (ordstruct_adt__ordstruct_adt_t)y);
}

char * json_ordstruct_adt__ordstruct_adt_ptr(pointer_t x, actual_ordstruct_adt__ordstruct_adt_t T){
        return json_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)x);
}

actual_ordstruct_adt__ordstruct_adt_t actual_ordstruct_adt__ordstruct_adt(){
        actual_ordstruct_adt__ordstruct_adt_t new = (actual_ordstruct_adt__ordstruct_adt_t)safe_malloc(sizeof(struct actual_ordstruct_adt__ordstruct_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ordstruct_adt__ordstruct_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ordstruct_adt__ordstruct_adt_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ordstruct_adt__ordstruct_adt_ptr);
 

 
        return new;
 };

ordstruct_adt__ordstruct_adt_t update_ordstruct_adt__ordstruct_adt_ordstruct_adt__ordstruct_adt_index(ordstruct_adt__ordstruct_adt_t x, uint8_t v){
        ordstruct_adt__ordstruct_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt__ordstruct_adt(x); x->count--;};
        y->ordstruct_adt__ordstruct_adt_index = (uint8_t)v;
        return y;}




ordstruct_adt__add_t new_ordstruct_adt__add(void){
        ordstruct_adt__add_t tmp = (ordstruct_adt__add_t) safe_malloc(sizeof(struct ordstruct_adt__add_s));
        tmp->count = 1;
        return tmp;}

void release_ordstruct_adt__add(ordstruct_adt__add_t x){
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt__ordstruct_adt(x->exp);
         release_ordstruct_adt__ordstruct_adt(x->rest);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ordstruct_adt__add_ptr(pointer_t x, type_actual_t T){
        release_ordstruct_adt__add((ordstruct_adt__add_t)x);
}

ordstruct_adt__add_t copy_ordstruct_adt__add(ordstruct_adt__add_t x){
        ordstruct_adt__add_t y = new_ordstruct_adt__add();
        y->ordstruct_adt__ordstruct_adt_index = (uint8_t)x->ordstruct_adt__ordstruct_adt_index;
        mpz_set(y->coef, x->coef);
        y->exp = x->exp;
        if (y->exp != NULL){y->exp->count++;};
        y->rest = x->rest;
        if (y->rest != NULL){y->rest->count++;};
        y->count = 1;
        return y;}

bool_t equal_ordstruct_adt__add(ordstruct_adt__add_t x, ordstruct_adt__add_t y){
        bool_t tmp = true;
        tmp = tmp && x->ordstruct_adt__ordstruct_adt_index == y->ordstruct_adt__ordstruct_adt_index;tmp = tmp && (mpz_cmp(x->coef, y->coef) == 0);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->exp, y->exp);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->rest, y->rest);
        return tmp;}

char * json_ordstruct_adt__add(ordstruct_adt__add_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(46);
         sprintf(fld0, "\"ordstruct_adt__ordstruct_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ordstruct_adt__ordstruct_adt_index));
        char * fld1 = safe_malloc(16);
         sprintf(fld1, "\"coef\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->coef));
        char * fld2 = safe_malloc(15);
         sprintf(fld2, "\"exp\" : ");
        tmp[2] = safe_strcat(fld2, json_ordstruct_adt__ordstruct_adt(x->exp));
        char * fld3 = safe_malloc(16);
         sprintf(fld3, "\"rest\" : ");
        tmp[3] = safe_strcat(fld3, json_ordstruct_adt__ordstruct_adt(x->rest));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ordstruct_adt__add_ptr(pointer_t x, pointer_t y, actual_ordstruct_adt__add_t T){
        return equal_ordstruct_adt__add((ordstruct_adt__add_t)x, (ordstruct_adt__add_t)y);
}

char * json_ordstruct_adt__add_ptr(pointer_t x, actual_ordstruct_adt__add_t T){
        return json_ordstruct_adt__add((ordstruct_adt__add_t)x);
}

actual_ordstruct_adt__add_t actual_ordstruct_adt__add(){
        actual_ordstruct_adt__add_t new = (actual_ordstruct_adt__add_t)safe_malloc(sizeof(struct actual_ordstruct_adt__add_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ordstruct_adt__add_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ordstruct_adt__add_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ordstruct_adt__add_ptr);
 

 
        return new;
 };

ordstruct_adt__add_t update_ordstruct_adt__add_ordstruct_adt__ordstruct_adt_index(ordstruct_adt__add_t x, uint8_t v){
        ordstruct_adt__add_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt__add(x); x->count--;};
        y->ordstruct_adt__ordstruct_adt_index = (uint8_t)v;
        return y;}

ordstruct_adt__add_t update_ordstruct_adt__add_coef(ordstruct_adt__add_t x, mpz_ptr_t v){
        ordstruct_adt__add_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt__add(x); x->count--;};
        mpz_set(y->coef, v);
        return y;}

ordstruct_adt__add_t update_ordstruct_adt__add_exp(ordstruct_adt__add_t x, ordstruct_adt__ordstruct_adt_t v){
        ordstruct_adt__add_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->exp != NULL){release_ordstruct_adt__ordstruct_adt(x->exp);};}
        else {y = copy_ordstruct_adt__add(x); x->count--; y->exp->count--;};
        y->exp = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

ordstruct_adt__add_t update_ordstruct_adt__add_rest(ordstruct_adt__add_t x, ordstruct_adt__ordstruct_adt_t v){
        ordstruct_adt__add_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->rest != NULL){release_ordstruct_adt__ordstruct_adt(x->rest);};}
        else {y = copy_ordstruct_adt__add(x); x->count--; y->rest->count--;};
        y->rest = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}



void release_ordstruct_adt_funtype_2(ordstruct_adt_funtype_2_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ordstruct_adt_funtype_2_t copy_ordstruct_adt_funtype_2(ordstruct_adt_funtype_2_t x){return x->ftbl->cptr(x);}

bool_t equal_ordstruct_adt_funtype_2(ordstruct_adt_funtype_2_t x, ordstruct_adt_funtype_2_t y){
        return false;}

char* json_ordstruct_adt_funtype_2(ordstruct_adt_funtype_2_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"ordstruct_adt_funtype_2\""); return result;}

void release_ordstruct_adt_funtype_3(ordstruct_adt_funtype_3_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ordstruct_adt_funtype_3_t copy_ordstruct_adt_funtype_3(ordstruct_adt_funtype_3_t x){return x->ftbl->cptr(x);}

bool_t equal_ordstruct_adt_funtype_3(ordstruct_adt_funtype_3_t x, ordstruct_adt_funtype_3_t y){
        return false;}

char* json_ordstruct_adt_funtype_3(ordstruct_adt_funtype_3_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"ordstruct_adt_funtype_3\""); return result;}


ordstruct_adt_record_4_t new_ordstruct_adt_record_4(void){
        ordstruct_adt_record_4_t tmp = (ordstruct_adt_record_4_t) safe_malloc(sizeof(struct ordstruct_adt_record_4_s));
        tmp->count = 1;
        return tmp;}

void release_ordstruct_adt_record_4(ordstruct_adt_record_4_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ordstruct_adt_record_4_ptr(pointer_t x, type_actual_t T){
        release_ordstruct_adt_record_4((ordstruct_adt_record_4_t)x);
}

ordstruct_adt_record_4_t copy_ordstruct_adt_record_4(ordstruct_adt_record_4_t x){
        ordstruct_adt_record_4_t y = new_ordstruct_adt_record_4();
        mpz_set(y->project_1, x->project_1);
        mpz_set(y->project_2, x->project_2);
        mpz_set(y->project_3, x->project_3);
        y->count = 1;
        return y;}

bool_t equal_ordstruct_adt_record_4(ordstruct_adt_record_4_t x, ordstruct_adt_record_4_t y){
        bool_t tmp = true;tmp = tmp && (mpz_cmp(x->project_1, y->project_1) == 0);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        return tmp;}

char * json_ordstruct_adt_record_4(ordstruct_adt_record_4_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_mpz(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_mpz(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ordstruct_adt_record_4_ptr(pointer_t x, pointer_t y, actual_ordstruct_adt_record_4_t T){
        return equal_ordstruct_adt_record_4((ordstruct_adt_record_4_t)x, (ordstruct_adt_record_4_t)y);
}

char * json_ordstruct_adt_record_4_ptr(pointer_t x, actual_ordstruct_adt_record_4_t T){
        return json_ordstruct_adt_record_4((ordstruct_adt_record_4_t)x);
}

actual_ordstruct_adt_record_4_t actual_ordstruct_adt_record_4(){
        actual_ordstruct_adt_record_4_t new = (actual_ordstruct_adt_record_4_t)safe_malloc(sizeof(struct actual_ordstruct_adt_record_4_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ordstruct_adt_record_4_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ordstruct_adt_record_4_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ordstruct_adt_record_4_ptr);
 

 
        return new;
 };

ordstruct_adt_record_4_t update_ordstruct_adt_record_4_project_1(ordstruct_adt_record_4_t x, mpz_ptr_t v){
        ordstruct_adt_record_4_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt_record_4(x); x->count--;};
        mpz_set(y->project_1, v);
        return y;}

ordstruct_adt_record_4_t update_ordstruct_adt_record_4_project_2(ordstruct_adt_record_4_t x, mpz_ptr_t v){
        ordstruct_adt_record_4_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt_record_4(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}

ordstruct_adt_record_4_t update_ordstruct_adt_record_4_project_3(ordstruct_adt_record_4_t x, mpz_ptr_t v){
        ordstruct_adt_record_4_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt_record_4(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}



void release_ordstruct_adt_funtype_5(ordstruct_adt_funtype_5_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ordstruct_adt_funtype_5_t copy_ordstruct_adt_funtype_5(ordstruct_adt_funtype_5_t x){return x->ftbl->cptr(x);}

bool_t equal_ordstruct_adt_funtype_5(ordstruct_adt_funtype_5_t x, ordstruct_adt_funtype_5_t y){
        return false;}

char* json_ordstruct_adt_funtype_5(ordstruct_adt_funtype_5_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"ordstruct_adt_funtype_5\""); return result;}


mpz_ptr_t f_ordstruct_adt_closure_6(struct ordstruct_adt_closure_6_s * closure, ordstruct_adt__ordstruct_adt_t bvar){
        mpz_ptr_t result = h_ordstruct_adt_closure_6(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_ordstruct_adt_closure_6(struct ordstruct_adt_closure_6_s * closure, ordstruct_adt__ordstruct_adt_t bvar){
        return h_ordstruct_adt_closure_6(bvar, closure->fvar_1, closure->fvar_2);}

mpz_ptr_t h_ordstruct_adt_closure_6(ordstruct_adt__ordstruct_adt_t ivar_5, ordstruct_adt_funtype_5_t ivar_2, mpz_ptr_t ivar_1){
        mpz_ptr_t result;
        /* red */ ordstruct_adt_funtype_3_t ivar_6;
        ivar_2->count++;
        ivar_6 = (ordstruct_adt_funtype_3_t)ordstruct_adt__reduce_nat(ivar_1, (ordstruct_adt_funtype_5_t)ivar_2);
        bool_t ivar_18;
        ivar_5->count++;
        ivar_18 = (bool_t)r_ordstruct_adt__zerop((ordstruct_adt__ordstruct_adt_t)ivar_5);
        if (ivar_18){ 
             release_ordstruct_adt_funtype_3(ivar_6);
             release_ordstruct_adt__ordstruct_adt(ivar_5);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_1);
} else {
        
             mpz_ptr_t ivar_22;
             ivar_5->count++;
             ivar_22 = (mpz_ptr_t)ordstruct_adt__ordstruct_adt_coef((ordstruct_adt__ordstruct_adt_t)ivar_5);
             ordstruct_adt__ordstruct_adt_t ivar_23;
             ivar_5->count++;
             ivar_23 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_exp((ordstruct_adt__ordstruct_adt_t)ivar_5);
             ordstruct_adt__ordstruct_adt_t ivar_24;
             ivar_24 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_rest((ordstruct_adt__ordstruct_adt_t)ivar_5);
             mpz_ptr_t ivar_51;
             mpz_mk_set(ivar_51, ivar_6->ftbl->fptr(ivar_6, ivar_23));
             mpz_ptr_t ivar_52;
             mpz_mk_set(ivar_52, ivar_6->ftbl->fptr(ivar_6, ivar_24));
             ivar_6->ftbl->rptr(ivar_6);
             mpz_mk_set(result, ivar_2->ftbl->mptr(ivar_2, ivar_22, ivar_51, ivar_52));
};

        return result;
}

ordstruct_adt_closure_6_t new_ordstruct_adt_closure_6(void){
        static struct ordstruct_adt_funtype_3_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ordstruct_adt_funtype_3_t, ordstruct_adt__ordstruct_adt_t))&f_ordstruct_adt_closure_6, .mptr = (mpz_ptr_t (*)(ordstruct_adt_funtype_3_t, ordstruct_adt__ordstruct_adt_t))&m_ordstruct_adt_closure_6, .rptr =  (void (*)(ordstruct_adt_funtype_3_t))&release_ordstruct_adt_closure_6, .cptr = (ordstruct_adt_funtype_3_t (*)(ordstruct_adt_funtype_3_t))&copy_ordstruct_adt_closure_6};
        ordstruct_adt_closure_6_t tmp = (ordstruct_adt_closure_6_t) safe_malloc(sizeof(struct ordstruct_adt_closure_6_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_ordstruct_adt_closure_6(ordstruct_adt_funtype_3_t closure){
        ordstruct_adt_closure_6_t x = (ordstruct_adt_closure_6_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt_funtype_5(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ordstruct_adt_closure_6_t copy_ordstruct_adt_closure_6(ordstruct_adt_closure_6_t x){
        ordstruct_adt_closure_6_t y = new_ordstruct_adt_closure_6();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        mpz_set(y->fvar_2, x->fvar_2);
        if (x->htbl != NULL){
            ordstruct_adt_funtype_3_htbl_t new_htbl = (ordstruct_adt_funtype_3_htbl_t) safe_malloc(sizeof(struct ordstruct_adt_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ordstruct_adt_funtype_3_hashentry_t * new_data = (ordstruct_adt_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ordstruct_adt_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ordstruct_adt_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ordstruct_adt_record_7_t new_ordstruct_adt_record_7(void){
        ordstruct_adt_record_7_t tmp = (ordstruct_adt_record_7_t) safe_malloc(sizeof(struct ordstruct_adt_record_7_s));
        tmp->count = 1;
        return tmp;}

void release_ordstruct_adt_record_7(ordstruct_adt_record_7_t x){
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt__ordstruct_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ordstruct_adt_record_7_ptr(pointer_t x, type_actual_t T){
        release_ordstruct_adt_record_7((ordstruct_adt_record_7_t)x);
}

ordstruct_adt_record_7_t copy_ordstruct_adt_record_7(ordstruct_adt_record_7_t x){
        ordstruct_adt_record_7_t y = new_ordstruct_adt_record_7();
        mpz_set(y->project_1, x->project_1);
        mpz_set(y->project_2, x->project_2);
        mpz_set(y->project_3, x->project_3);
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ordstruct_adt_record_7(ordstruct_adt_record_7_t x, ordstruct_adt_record_7_t y){
        bool_t tmp = true;tmp = tmp && (mpz_cmp(x->project_1, y->project_1) == 0);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ordstruct_adt_record_7(ordstruct_adt_record_7_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_mpz(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_mpz(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_ordstruct_adt__ordstruct_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ordstruct_adt_record_7_ptr(pointer_t x, pointer_t y, actual_ordstruct_adt_record_7_t T){
        return equal_ordstruct_adt_record_7((ordstruct_adt_record_7_t)x, (ordstruct_adt_record_7_t)y);
}

char * json_ordstruct_adt_record_7_ptr(pointer_t x, actual_ordstruct_adt_record_7_t T){
        return json_ordstruct_adt_record_7((ordstruct_adt_record_7_t)x);
}

actual_ordstruct_adt_record_7_t actual_ordstruct_adt_record_7(){
        actual_ordstruct_adt_record_7_t new = (actual_ordstruct_adt_record_7_t)safe_malloc(sizeof(struct actual_ordstruct_adt_record_7_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ordstruct_adt_record_7_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ordstruct_adt_record_7_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ordstruct_adt_record_7_ptr);
 

 
        return new;
 };

ordstruct_adt_record_7_t update_ordstruct_adt_record_7_project_1(ordstruct_adt_record_7_t x, mpz_ptr_t v){
        ordstruct_adt_record_7_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt_record_7(x); x->count--;};
        mpz_set(y->project_1, v);
        return y;}

ordstruct_adt_record_7_t update_ordstruct_adt_record_7_project_2(ordstruct_adt_record_7_t x, mpz_ptr_t v){
        ordstruct_adt_record_7_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt_record_7(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}

ordstruct_adt_record_7_t update_ordstruct_adt_record_7_project_3(ordstruct_adt_record_7_t x, mpz_ptr_t v){
        ordstruct_adt_record_7_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ordstruct_adt_record_7(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}

ordstruct_adt_record_7_t update_ordstruct_adt_record_7_project_4(ordstruct_adt_record_7_t x, ordstruct_adt__ordstruct_adt_t v){
        ordstruct_adt_record_7_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_4);};}
        else {y = copy_ordstruct_adt_record_7(x); x->count--; y->project_4->count--;};
        y->project_4 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}



void release_ordstruct_adt_funtype_8(ordstruct_adt_funtype_8_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ordstruct_adt_funtype_8_t copy_ordstruct_adt_funtype_8(ordstruct_adt_funtype_8_t x){return x->ftbl->cptr(x);}

bool_t equal_ordstruct_adt_funtype_8(ordstruct_adt_funtype_8_t x, ordstruct_adt_funtype_8_t y){
        return false;}

char* json_ordstruct_adt_funtype_8(ordstruct_adt_funtype_8_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"ordstruct_adt_funtype_8\""); return result;}


mpz_ptr_t f_ordstruct_adt_closure_9(struct ordstruct_adt_closure_9_s * closure, ordstruct_adt__ordstruct_adt_t bvar){
        mpz_ptr_t result = h_ordstruct_adt_closure_9(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_ordstruct_adt_closure_9(struct ordstruct_adt_closure_9_s * closure, ordstruct_adt__ordstruct_adt_t bvar){
        return h_ordstruct_adt_closure_9(bvar, closure->fvar_1, closure->fvar_2);}

mpz_ptr_t h_ordstruct_adt_closure_9(ordstruct_adt__ordstruct_adt_t ivar_6, ordstruct_adt_funtype_8_t ivar_3, ordstruct_adt_funtype_3_t ivar_1){
        mpz_ptr_t result;
        /* red */ ordstruct_adt_funtype_3_t ivar_7;
        ivar_1->count++;
        ivar_3->count++;
        ivar_7 = (ordstruct_adt_funtype_3_t)ordstruct_adt__REDUCE_nat((ordstruct_adt_funtype_3_t)ivar_1, (ordstruct_adt_funtype_8_t)ivar_3);
        bool_t ivar_25;
        ivar_6->count++;
        ivar_25 = (bool_t)r_ordstruct_adt__zerop((ordstruct_adt__ordstruct_adt_t)ivar_6);
        if (ivar_25){ 
             release_ordstruct_adt_funtype_3(ivar_7);
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_6));
} else {
        
             mpz_ptr_t ivar_29;
             ivar_6->count++;
             ivar_29 = (mpz_ptr_t)ordstruct_adt__ordstruct_adt_coef((ordstruct_adt__ordstruct_adt_t)ivar_6);
             ordstruct_adt__ordstruct_adt_t ivar_30;
             ivar_6->count++;
             ivar_30 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_exp((ordstruct_adt__ordstruct_adt_t)ivar_6);
             ordstruct_adt__ordstruct_adt_t ivar_31;
             ivar_6->count++;
             ivar_31 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_rest((ordstruct_adt__ordstruct_adt_t)ivar_6);
             mpz_ptr_t ivar_59;
             mpz_mk_set(ivar_59, ivar_7->ftbl->fptr(ivar_7, ivar_30));
             mpz_ptr_t ivar_60;
             mpz_mk_set(ivar_60, ivar_7->ftbl->fptr(ivar_7, ivar_31));
             ivar_7->ftbl->rptr(ivar_7);
             mpz_mk_set(result, ivar_3->ftbl->mptr(ivar_3, ivar_29, ivar_59, ivar_60, ivar_6));
};

        return result;
}

ordstruct_adt_closure_9_t new_ordstruct_adt_closure_9(void){
        static struct ordstruct_adt_funtype_3_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ordstruct_adt_funtype_3_t, ordstruct_adt__ordstruct_adt_t))&f_ordstruct_adt_closure_9, .mptr = (mpz_ptr_t (*)(ordstruct_adt_funtype_3_t, ordstruct_adt__ordstruct_adt_t))&m_ordstruct_adt_closure_9, .rptr =  (void (*)(ordstruct_adt_funtype_3_t))&release_ordstruct_adt_closure_9, .cptr = (ordstruct_adt_funtype_3_t (*)(ordstruct_adt_funtype_3_t))&copy_ordstruct_adt_closure_9};
        ordstruct_adt_closure_9_t tmp = (ordstruct_adt_closure_9_t) safe_malloc(sizeof(struct ordstruct_adt_closure_9_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ordstruct_adt_closure_9(ordstruct_adt_funtype_3_t closure){
        ordstruct_adt_closure_9_t x = (ordstruct_adt_closure_9_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt_funtype_8(x->fvar_1);
         release_ordstruct_adt_funtype_3(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ordstruct_adt_closure_9_t copy_ordstruct_adt_closure_9(ordstruct_adt_closure_9_t x){
        ordstruct_adt_closure_9_t y = new_ordstruct_adt_closure_9();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ordstruct_adt_funtype_3_htbl_t new_htbl = (ordstruct_adt_funtype_3_htbl_t) safe_malloc(sizeof(struct ordstruct_adt_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ordstruct_adt_funtype_3_hashentry_t * new_data = (ordstruct_adt_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ordstruct_adt_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ordstruct_adt_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

bool_t r_ordstruct_adt__zerop(ordstruct_adt__ordstruct_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ordstruct_adt__ordstruct_adt_index;
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

bool_t r_ordstruct_adt__nonzerop(ordstruct_adt__ordstruct_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ordstruct_adt__ordstruct_adt_index;
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

ordstruct_adt__add_t update_ordstruct_adt__ordstruct_adt_coef(ordstruct_adt__ordstruct_adt_t ivar_1, mpz_ptr_t ivar_3){
        ordstruct_adt__add_t  result;
        ordstruct_adt__add_t ivar_2;
        //copying to ordstruct_adt__add from ordstruct_adt__ordstruct_adt;
        ivar_2 = (ordstruct_adt__add_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ordstruct_adt__add_t)update_ordstruct_adt__add_coef(ivar_2, ivar_3);

        
        return result;
}

mpz_ptr_t ordstruct_adt__ordstruct_adt_coef(ordstruct_adt__ordstruct_adt_t ivar_1){
        mpz_ptr_t  result;
        ordstruct_adt__add_t ivar_2;
        //copying to ordstruct_adt__add from ordstruct_adt__ordstruct_adt;
        ivar_2 = (ordstruct_adt__add_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = safe_malloc(sizeof(mpz_t));
        mpz_init(result);
        mpz_set(result, ivar_2->coef);
        release_ordstruct_adt__add(ivar_2);

        
        return result;
}

ordstruct_adt__add_t update_ordstruct_adt__ordstruct_adt_exp(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_3){
        ordstruct_adt__add_t  result;
        ordstruct_adt__add_t ivar_2;
        //copying to ordstruct_adt__add from ordstruct_adt__ordstruct_adt;
        ivar_2 = (ordstruct_adt__add_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ordstruct_adt__add_t)update_ordstruct_adt__add_exp(ivar_2, ivar_3);

        
        return result;
}

ordstruct_adt__ordstruct_adt_t ordstruct_adt__ordstruct_adt_exp(ordstruct_adt__ordstruct_adt_t ivar_1){
        ordstruct_adt__ordstruct_adt_t  result;
        ordstruct_adt__add_t ivar_2;
        //copying to ordstruct_adt__add from ordstruct_adt__ordstruct_adt;
        ivar_2 = (ordstruct_adt__add_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ordstruct_adt__ordstruct_adt_t)ivar_2->exp;
        result->count++;
        release_ordstruct_adt__add(ivar_2);

        
        return result;
}

ordstruct_adt__add_t update_ordstruct_adt__ordstruct_adt_rest(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_3){
        ordstruct_adt__add_t  result;
        ordstruct_adt__add_t ivar_2;
        //copying to ordstruct_adt__add from ordstruct_adt__ordstruct_adt;
        ivar_2 = (ordstruct_adt__add_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ordstruct_adt__add_t)update_ordstruct_adt__add_rest(ivar_2, ivar_3);

        
        return result;
}

ordstruct_adt__ordstruct_adt_t ordstruct_adt__ordstruct_adt_rest(ordstruct_adt__ordstruct_adt_t ivar_1){
        ordstruct_adt__ordstruct_adt_t  result;
        ordstruct_adt__add_t ivar_2;
        //copying to ordstruct_adt__add from ordstruct_adt__ordstruct_adt;
        ivar_2 = (ordstruct_adt__add_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ordstruct_adt__ordstruct_adt_t)ivar_2->rest;
        result->count++;
        release_ordstruct_adt__add(ivar_2);

        
        return result;
}

ordstruct_adt__ordstruct_adt_t ordstruct_adt__zero(void){
        ordstruct_adt__ordstruct_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        ordstruct_adt__ordstruct_adt_t tmp1953 = new_ordstruct_adt__ordstruct_adt();;
        result = (ordstruct_adt__ordstruct_adt_t)tmp1953;
        tmp1953->ordstruct_adt__ordstruct_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

ordstruct_adt__ordstruct_adt_t ordstruct_adt__add(mpz_ptr_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_4){
        ordstruct_adt__ordstruct_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        ordstruct_adt__add_t tmp1954 = new_ordstruct_adt__add();;
        result = (ordstruct_adt__ordstruct_adt_t)tmp1954;
        tmp1954->ordstruct_adt__ordstruct_adt_index = (uint8_t)ivar_1;
        mpz_init(tmp1954->coef);
        mpz_set(tmp1954->coef, ivar_2);
        mpz_clear(ivar_2);
        tmp1954->exp = (ordstruct_adt__ordstruct_adt_t)ivar_3;
        tmp1954->rest = (ordstruct_adt__ordstruct_adt_t)ivar_4;

        
        return result;
}

ordstruct_adt_funtype_2_t ordstruct_adt__ordstruct_ord(void){
        ordstruct_adt_funtype_2_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

uint8_t ordstruct_adt__ord(ordstruct_adt__ordstruct_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)r_ordstruct_adt__zerop((ordstruct_adt__ordstruct_adt_t)ivar_1);
        if (ivar_3){ 
             result = (uint8_t)0;
} else {
        
             result = (uint8_t)1;
};

        
        return result;
}

bool_t ordstruct_adt__subterm(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_2->count++;
        ivar_3 = (bool_t) equal_ordstruct_adt__ordstruct_adt(ivar_1, ivar_2);
        if (ivar_3){ 
             release_ordstruct_adt__ordstruct_adt(ivar_2);
             release_ordstruct_adt__ordstruct_adt(ivar_1);
             result = (bool_t) true;
} else {
        
             bool_t ivar_9;
             ivar_2->count++;
             ivar_9 = (bool_t)r_ordstruct_adt__zerop((ordstruct_adt__ordstruct_adt_t)ivar_2);
             if (ivar_9){  
           release_ordstruct_adt__ordstruct_adt(ivar_2);
           release_ordstruct_adt__ordstruct_adt(ivar_1);
           result = (bool_t) false;
} else {
             
           ordstruct_adt__ordstruct_adt_t ivar_14;
           ivar_2->count++;
           ivar_14 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_exp((ordstruct_adt__ordstruct_adt_t)ivar_2);
           ordstruct_adt__ordstruct_adt_t ivar_15;
           ivar_15 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_rest((ordstruct_adt__ordstruct_adt_t)ivar_2);
           bool_t ivar_25;
           ivar_1->count++;
           ivar_25 = (bool_t)ordstruct_adt__subterm((ordstruct_adt__ordstruct_adt_t)ivar_1, (ordstruct_adt__ordstruct_adt_t)ivar_14);
           if (ivar_25){   
           release_ordstruct_adt__ordstruct_adt(ivar_15);
           release_ordstruct_adt__ordstruct_adt(ivar_1);
           result = (bool_t) true;
} else {
           
           result = (bool_t)ordstruct_adt__subterm((ordstruct_adt__ordstruct_adt_t)ivar_1, (ordstruct_adt__ordstruct_adt_t)ivar_15);
};
};
};

        
        return result;
}

bool_t ordstruct_adt__doublelessp(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_4;
        ivar_2->count++;
        ivar_4 = (bool_t)r_ordstruct_adt__zerop((ordstruct_adt__ordstruct_adt_t)ivar_2);
        if (ivar_4){ 
             release_ordstruct_adt__ordstruct_adt(ivar_2);
             release_ordstruct_adt__ordstruct_adt(ivar_1);
             result = (bool_t) false;
} else {
        
             ordstruct_adt__ordstruct_adt_t ivar_9;
             ivar_2->count++;
             ivar_9 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_exp((ordstruct_adt__ordstruct_adt_t)ivar_2);
             ordstruct_adt__ordstruct_adt_t ivar_10;
             ivar_10 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__ordstruct_adt_rest((ordstruct_adt__ordstruct_adt_t)ivar_2);
             bool_t ivar_20;
             bool_t ivar_22;
             ivar_1->count++;
             ivar_9->count++;
             ivar_22 = (bool_t) equal_ordstruct_adt__ordstruct_adt(ivar_1, ivar_9);
             if (ivar_22){  
           release_ordstruct_adt__ordstruct_adt(ivar_9);
           ivar_20 = (bool_t) true;
} else {
             
           ivar_1->count++;
           ivar_20 = (bool_t)ordstruct_adt__doublelessp((ordstruct_adt__ordstruct_adt_t)ivar_1, (ordstruct_adt__ordstruct_adt_t)ivar_9);
};
             if (ivar_20){  
           release_ordstruct_adt__ordstruct_adt(ivar_10);
           release_ordstruct_adt__ordstruct_adt(ivar_1);
           result = (bool_t) true;
} else {
             
           bool_t ivar_33;
           ivar_1->count++;
           ivar_10->count++;
           ivar_33 = (bool_t) equal_ordstruct_adt__ordstruct_adt(ivar_1, ivar_10);
           if (ivar_33){   
           release_ordstruct_adt__ordstruct_adt(ivar_10);
           release_ordstruct_adt__ordstruct_adt(ivar_1);
           result = (bool_t) true;
} else {
           
           result = (bool_t)ordstruct_adt__doublelessp((ordstruct_adt__ordstruct_adt_t)ivar_1, (ordstruct_adt__ordstruct_adt_t)ivar_10);
};
};
};

        
        return result;
}

ordstruct_adt_funtype_3_t ordstruct_adt__reduce_nat(mpz_ptr_t ivar_1, ordstruct_adt_funtype_5_t ivar_2){
        ordstruct_adt_funtype_3_t  result;
        ordstruct_adt_closure_6_t cl1968;
        cl1968 = new_ordstruct_adt_closure_6();
        cl1968->fvar_1 = (ordstruct_adt_funtype_5_t)ivar_2;
        if (cl1968->fvar_1 != NULL) cl1968->fvar_1->count++;
        mpz_set(cl1968->fvar_2, ivar_1);
        release_ordstruct_adt_funtype_5(ivar_2);
        result = (ordstruct_adt_funtype_3_t)cl1968;

        
        return result;
}

ordstruct_adt_funtype_3_t ordstruct_adt__REDUCE_nat(ordstruct_adt_funtype_3_t ivar_1, ordstruct_adt_funtype_8_t ivar_3){
        ordstruct_adt_funtype_3_t  result;
        ordstruct_adt_closure_9_t cl1982;
        cl1982 = new_ordstruct_adt_closure_9();
        cl1982->fvar_1 = (ordstruct_adt_funtype_8_t)ivar_3;
        if (cl1982->fvar_1 != NULL) cl1982->fvar_1->count++;
        cl1982->fvar_2 = (ordstruct_adt_funtype_3_t)ivar_1;
        if (cl1982->fvar_2 != NULL) cl1982->fvar_2->count++;
        release_ordstruct_adt_funtype_8(ivar_3);
        release_ordstruct_adt_funtype_3(ivar_1);
        result = (ordstruct_adt_funtype_3_t)cl1982;

        
        return result;
}