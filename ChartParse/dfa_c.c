//Code generated using pvs2ir2c
#include "dfa_c.h"


dfa__dfaResult_adt_t new_dfa__dfaResult_adt(void){
        dfa__dfaResult_adt_t tmp = (dfa__dfaResult_adt_t) safe_malloc(sizeof(struct dfa__dfaResult_adt_s));
        tmp->count = 1;
        return tmp;}

void release_dfa__dfaResult_adt(dfa__dfaResult_adt_t x){
switch (x->dfa__dfaResult_adt_index) {
case 1:  release_dfa__success((dfa__success_t) x); break;
}}

void release_dfa__dfaResult_adt_ptr(pointer_t x, type_actual_t T){
        release_dfa__dfaResult_adt((dfa__dfaResult_adt_t)x);
}

dfa__dfaResult_adt_t copy_dfa__dfaResult_adt(dfa__dfaResult_adt_t x){
        dfa__dfaResult_adt_t y = new_dfa__dfaResult_adt();
        y->dfa__dfaResult_adt_index = (uint8_t)x->dfa__dfaResult_adt_index;
        y->count = 1;
        return y;}

bool_t equal_dfa__dfaResult_adt(dfa__dfaResult_adt_t x, dfa__dfaResult_adt_t y){
        bool_t tmp = x->dfa__dfaResult_adt_index == y->dfa__dfaResult_adt_index;
        switch  (x->dfa__dfaResult_adt_index) {
                case 1: tmp = tmp && equal_dfa__success((dfa__success_t) x, (dfa__success_t) y); break;
        }
        return tmp;
}

char * json_dfa__dfaResult_adt(dfa__dfaResult_adt_t x){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ \"constructor\" = %u,", x->dfa__dfaResult_adt_index);
        switch  (x->dfa__dfaResult_adt_index) {
                case 1: tmp = safe_strcat(tmp, json_dfa__success((dfa__success_t) x)); break;
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_dfa__dfaResult_adt_ptr(pointer_t x, pointer_t y, actual_dfa__dfaResult_adt_t T){
        return equal_dfa__dfaResult_adt((dfa__dfaResult_adt_t)x, (dfa__dfaResult_adt_t)y);
}

char * json_dfa__dfaResult_adt_ptr(pointer_t x, actual_dfa__dfaResult_adt_t T){
        return json_dfa__dfaResult_adt((dfa__dfaResult_adt_t)x);
}

actual_dfa__dfaResult_adt_t actual_dfa__dfaResult_adt(){
        actual_dfa__dfaResult_adt_t new = (actual_dfa__dfaResult_adt_t)safe_malloc(sizeof(struct actual_dfa__dfaResult_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dfa__dfaResult_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dfa__dfaResult_adt_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dfa__dfaResult_adt_ptr);
 

 
        return new;
 };

dfa__dfaResult_adt_t update_dfa__dfaResult_adt_dfa__dfaResult_adt_index(dfa__dfaResult_adt_t x, uint8_t v){
        dfa__dfaResult_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dfa__dfaResult_adt(x); x->count--;};
        y->dfa__dfaResult_adt_index = (uint8_t)v;
        return y;}




dfa__success_t new_dfa__success(void){
        dfa__success_t tmp = (dfa__success_t) safe_malloc(sizeof(struct dfa__success_s));
        tmp->count = 1;
        return tmp;}

void release_dfa__success(dfa__success_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_dfa__success_ptr(pointer_t x, type_actual_t T){
        release_dfa__success((dfa__success_t)x);
}

dfa__success_t copy_dfa__success(dfa__success_t x){
        dfa__success_t y = new_dfa__success();
        y->dfa__dfaResult_adt_index = (uint8_t)x->dfa__dfaResult_adt_index;
        y->span = (uint32_t)x->span;
        y->count = 1;
        return y;}

bool_t equal_dfa__success(dfa__success_t x, dfa__success_t y){
        bool_t tmp = true;
        tmp = tmp && x->dfa__dfaResult_adt_index == y->dfa__dfaResult_adt_index;
        tmp = tmp && x->span == y->span;
        return tmp;}

char * json_dfa__success(dfa__success_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(36);
         sprintf(fld0, "\"dfa__dfaResult_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->dfa__dfaResult_adt_index));
        char * fld1 = safe_malloc(16);
         sprintf(fld1, "\"span\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->span));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_dfa__success_ptr(pointer_t x, pointer_t y, actual_dfa__success_t T){
        return equal_dfa__success((dfa__success_t)x, (dfa__success_t)y);
}

char * json_dfa__success_ptr(pointer_t x, actual_dfa__success_t T){
        return json_dfa__success((dfa__success_t)x);
}

actual_dfa__success_t actual_dfa__success(){
        actual_dfa__success_t new = (actual_dfa__success_t)safe_malloc(sizeof(struct actual_dfa__success_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dfa__success_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dfa__success_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dfa__success_ptr);
 

 
        return new;
 };

dfa__success_t update_dfa__success_dfa__dfaResult_adt_index(dfa__success_t x, uint8_t v){
        dfa__success_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dfa__success(x); x->count--;};
        y->dfa__dfaResult_adt_index = (uint8_t)v;
        return y;}

dfa__success_t update_dfa__success_span(dfa__success_t x, uint32_t v){
        dfa__success_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dfa__success(x); x->count--;};
        y->span = (uint32_t)v;
        return y;}



void release_dfa_funtype_2(dfa_funtype_2_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dfa_funtype_2_t copy_dfa_funtype_2(dfa_funtype_2_t x){return x->ftbl->cptr(x);}

bool_t equal_dfa_funtype_2(dfa_funtype_2_t x, dfa_funtype_2_t y){
        return false;}

char* json_dfa_funtype_2(dfa_funtype_2_t x){char * result = safe_malloc(23); sprintf(result, "%s", "\"dfa_funtype_2\""); return result;}

void release_dfa_funtype_3(dfa_funtype_3_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dfa_funtype_3_t copy_dfa_funtype_3(dfa_funtype_3_t x){return x->ftbl->cptr(x);}

bool_t equal_dfa_funtype_3(dfa_funtype_3_t x, dfa_funtype_3_t y){
        return false;}

char* json_dfa_funtype_3(dfa_funtype_3_t x){char * result = safe_malloc(23); sprintf(result, "%s", "\"dfa_funtype_3\""); return result;}

void release_dfa_funtype_4(dfa_funtype_4_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dfa_funtype_4_t copy_dfa_funtype_4(dfa_funtype_4_t x){return x->ftbl->cptr(x);}

uint32_t lookup_dfa_funtype_4(dfa_funtype_4_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        dfa_funtype_4_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        keyzero = (data.key == 0);
        bool_t keymatch;
        keymatch = (data.key == i);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                keyzero = (data.key == 0);

                keymatch = (data.key == i);
                }
        return hashindex;
        }

dfa_funtype_4_t dupdate_dfa_funtype_4(dfa_funtype_4_t a, uint32_t i, mpz_ptr_t v){
        dfa_funtype_4_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (dfa_funtype_4_htbl_t)safe_malloc(sizeof(struct dfa_funtype_4_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (dfa_funtype_4_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct dfa_funtype_4_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        dfa_funtype_4_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                dfa_funtype_4_hashentry_t * new_data = (dfa_funtype_4_hashentry_t *)safe_malloc(new_size * sizeof(struct dfa_funtype_4_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        keyzero = (data[j].key == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                keyzero = (new_data[new_loc].key == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        keyzero = (new_data[new_loc].key == 0);
                                }
                                new_data[new_loc].key = (uint32_t)data[j].key;
                                new_data[new_loc].keyhash = keyhash;
                                mpz_set(new_data[new_loc].value, data[j].value);
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_dfa_funtype_4(htbl, i, ihash);
        dfa_funtype_4_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; mpz_set(htbl->data[hashindex].value, v); htbl->num_entries++;}
            else {mpz_set(htbl->data[hashindex].value, v);};
        return a;

}

dfa_funtype_4_t update_dfa_funtype_4(dfa_funtype_4_t a, uint32_t i, mpz_ptr_t v){
        if (a->count == 1){
                return dupdate_dfa_funtype_4(a, i, v);
            } else {
                dfa_funtype_4_t x = copy_dfa_funtype_4(a);
                a->count--;
                return dupdate_dfa_funtype_4(x, i, v);
            }}

bool_t equal_dfa_funtype_4(dfa_funtype_4_t x, dfa_funtype_4_t y){
        return false;}

char* json_dfa_funtype_4(dfa_funtype_4_t x){char * result = safe_malloc(23); sprintf(result, "%s", "\"dfa_funtype_4\""); return result;}


mpz_ptr_t f_dfa_closure_5(struct dfa_closure_5_s * closure, dfa__dfaResult_adt_t bvar){
        mpz_ptr_t result = h_dfa_closure_5(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_dfa_closure_5(struct dfa_closure_5_s * closure, dfa__dfaResult_adt_t bvar){
        return h_dfa_closure_5(bvar, closure->fvar_1, closure->fvar_2);}

mpz_ptr_t h_dfa_closure_5(dfa__dfaResult_adt_t ivar_5, dfa_funtype_4_t ivar_2, mpz_ptr_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_18;
        ivar_5->count++;
        ivar_18 = (bool_t)r_dfa__failedp((dfa__dfaResult_adt_t)ivar_5);
        if (ivar_18){ 
             release_dfa__dfaResult_adt(ivar_5);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_1);
} else {
        
             uint32_t ivar_22;
             ivar_22 = (uint32_t)dfa__dfaResult_adt_span((dfa__dfaResult_adt_t)ivar_5);
             mpz_mk_set(result, ivar_2->ftbl->fptr(ivar_2, ivar_22));
};

        return result;
}

dfa_closure_5_t new_dfa_closure_5(void){
        static struct dfa_funtype_3_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(dfa_funtype_3_t, dfa__dfaResult_adt_t))&f_dfa_closure_5, .mptr = (mpz_ptr_t (*)(dfa_funtype_3_t, dfa__dfaResult_adt_t))&m_dfa_closure_5, .rptr =  (void (*)(dfa_funtype_3_t))&release_dfa_closure_5, .cptr = (dfa_funtype_3_t (*)(dfa_funtype_3_t))&copy_dfa_closure_5};
        dfa_closure_5_t tmp = (dfa_closure_5_t) safe_malloc(sizeof(struct dfa_closure_5_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_dfa_closure_5(dfa_funtype_3_t closure){
        dfa_closure_5_t x = (dfa_closure_5_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dfa_funtype_4(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dfa_closure_5_t copy_dfa_closure_5(dfa_closure_5_t x){
        dfa_closure_5_t y = new_dfa_closure_5();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        mpz_set(y->fvar_2, x->fvar_2);
        if (x->htbl != NULL){
            dfa_funtype_3_htbl_t new_htbl = (dfa_funtype_3_htbl_t) safe_malloc(sizeof(struct dfa_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dfa_funtype_3_hashentry_t * new_data = (dfa_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dfa_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dfa_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


dfa_record_6_t new_dfa_record_6(void){
        dfa_record_6_t tmp = (dfa_record_6_t) safe_malloc(sizeof(struct dfa_record_6_s));
        tmp->count = 1;
        return tmp;}

void release_dfa_record_6(dfa_record_6_t x){
        x->count--;
        if (x->count <= 0){
         release_dfa__dfaResult_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_dfa_record_6_ptr(pointer_t x, type_actual_t T){
        release_dfa_record_6((dfa_record_6_t)x);
}

dfa_record_6_t copy_dfa_record_6(dfa_record_6_t x){
        dfa_record_6_t y = new_dfa_record_6();
        y->project_1 = (uint32_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_dfa_record_6(dfa_record_6_t x, dfa_record_6_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_dfa__dfaResult_adt(x->project_2, y->project_2);
        return tmp;}

char * json_dfa_record_6(dfa_record_6_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint32(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_dfa__dfaResult_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_dfa_record_6_ptr(pointer_t x, pointer_t y, actual_dfa_record_6_t T){
        return equal_dfa_record_6((dfa_record_6_t)x, (dfa_record_6_t)y);
}

char * json_dfa_record_6_ptr(pointer_t x, actual_dfa_record_6_t T){
        return json_dfa_record_6((dfa_record_6_t)x);
}

actual_dfa_record_6_t actual_dfa_record_6(){
        actual_dfa_record_6_t new = (actual_dfa_record_6_t)safe_malloc(sizeof(struct actual_dfa_record_6_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dfa_record_6_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dfa_record_6_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dfa_record_6_ptr);
 

 
        return new;
 };

dfa_record_6_t update_dfa_record_6_project_1(dfa_record_6_t x, uint32_t v){
        dfa_record_6_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dfa_record_6(x); x->count--;};
        y->project_1 = (uint32_t)v;
        return y;}

dfa_record_6_t update_dfa_record_6_project_2(dfa_record_6_t x, dfa__dfaResult_adt_t v){
        dfa_record_6_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_dfa__dfaResult_adt(x->project_2);};}
        else {y = copy_dfa_record_6(x); x->count--; y->project_2->count--;};
        y->project_2 = (dfa__dfaResult_adt_t)v;
        return y;}



void release_dfa_funtype_7(dfa_funtype_7_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dfa_funtype_7_t copy_dfa_funtype_7(dfa_funtype_7_t x){return x->ftbl->cptr(x);}

bool_t equal_dfa_funtype_7(dfa_funtype_7_t x, dfa_funtype_7_t y){
        return false;}

char* json_dfa_funtype_7(dfa_funtype_7_t x){char * result = safe_malloc(23); sprintf(result, "%s", "\"dfa_funtype_7\""); return result;}


mpz_ptr_t f_dfa_closure_8(struct dfa_closure_8_s * closure, dfa__dfaResult_adt_t bvar){
        mpz_ptr_t result = h_dfa_closure_8(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_dfa_closure_8(struct dfa_closure_8_s * closure, dfa__dfaResult_adt_t bvar){
        return h_dfa_closure_8(bvar, closure->fvar_1, closure->fvar_2);}

mpz_ptr_t h_dfa_closure_8(dfa__dfaResult_adt_t ivar_6, dfa_funtype_3_t ivar_1, dfa_funtype_7_t ivar_3){
        mpz_ptr_t result;
        bool_t ivar_25;
        ivar_6->count++;
        ivar_25 = (bool_t)r_dfa__failedp((dfa__dfaResult_adt_t)ivar_6);
        if (ivar_25){ 
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_6));
} else {
        
             uint32_t ivar_29;
             ivar_6->count++;
             ivar_29 = (uint32_t)dfa__dfaResult_adt_span((dfa__dfaResult_adt_t)ivar_6);
             mpz_mk_set(result, ivar_3->ftbl->mptr(ivar_3, ivar_29, ivar_6));
};

        return result;
}

dfa_closure_8_t new_dfa_closure_8(void){
        static struct dfa_funtype_3_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(dfa_funtype_3_t, dfa__dfaResult_adt_t))&f_dfa_closure_8, .mptr = (mpz_ptr_t (*)(dfa_funtype_3_t, dfa__dfaResult_adt_t))&m_dfa_closure_8, .rptr =  (void (*)(dfa_funtype_3_t))&release_dfa_closure_8, .cptr = (dfa_funtype_3_t (*)(dfa_funtype_3_t))&copy_dfa_closure_8};
        dfa_closure_8_t tmp = (dfa_closure_8_t) safe_malloc(sizeof(struct dfa_closure_8_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dfa_closure_8(dfa_funtype_3_t closure){
        dfa_closure_8_t x = (dfa_closure_8_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dfa_funtype_3(x->fvar_1);
         release_dfa_funtype_7(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

dfa_closure_8_t copy_dfa_closure_8(dfa_closure_8_t x){
        dfa_closure_8_t y = new_dfa_closure_8();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            dfa_funtype_3_htbl_t new_htbl = (dfa_funtype_3_htbl_t) safe_malloc(sizeof(struct dfa_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dfa_funtype_3_hashentry_t * new_data = (dfa_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dfa_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dfa_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_dfa_funtype_9(dfa_funtype_9_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dfa_funtype_9_t copy_dfa_funtype_9(dfa_funtype_9_t x){return x->ftbl->cptr(x);}

bool_t equal_dfa_funtype_9(dfa_funtype_9_t x, dfa_funtype_9_t y){
        return false;}

char* json_dfa_funtype_9(dfa_funtype_9_t x){char * result = safe_malloc(23); sprintf(result, "%s", "\"dfa_funtype_9\""); return result;}

void release_dfa_funtype_10(dfa_funtype_10_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dfa_funtype_10_t copy_dfa_funtype_10(dfa_funtype_10_t x){return x->ftbl->cptr(x);}

uint32_t lookup_dfa_funtype_10(dfa_funtype_10_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        dfa_funtype_10_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        keyzero = (data.key == 0);
        bool_t keymatch;
        keymatch = (data.key == i);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                keyzero = (data.key == 0);

                keymatch = (data.key == i);
                }
        return hashindex;
        }

dfa_funtype_10_t dupdate_dfa_funtype_10(dfa_funtype_10_t a, uint32_t i, ordstruct_adt__ordstruct_adt_t v){
        dfa_funtype_10_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (dfa_funtype_10_htbl_t)safe_malloc(sizeof(struct dfa_funtype_10_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (dfa_funtype_10_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct dfa_funtype_10_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        dfa_funtype_10_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                dfa_funtype_10_hashentry_t * new_data = (dfa_funtype_10_hashentry_t *)safe_malloc(new_size * sizeof(struct dfa_funtype_10_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        keyzero = (data[j].key == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                keyzero = (new_data[new_loc].key == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        keyzero = (new_data[new_loc].key == 0);
                                }
                                new_data[new_loc].key = (uint32_t)data[j].key;
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (ordstruct_adt__ordstruct_adt_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_dfa_funtype_10(htbl, i, ihash);
        dfa_funtype_10_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v; htbl->num_entries++;}
            else {ordstruct_adt__ordstruct_adt_t tempvalue;tempvalue = (ordstruct_adt__ordstruct_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ordstruct_adt__ordstruct_adt(tempvalue);};
        return a;

}

dfa_funtype_10_t update_dfa_funtype_10(dfa_funtype_10_t a, uint32_t i, ordstruct_adt__ordstruct_adt_t v){
        if (a->count == 1){
                return dupdate_dfa_funtype_10(a, i, v);
            } else {
                dfa_funtype_10_t x = copy_dfa_funtype_10(a);
                a->count--;
                return dupdate_dfa_funtype_10(x, i, v);
            }}

bool_t equal_dfa_funtype_10(dfa_funtype_10_t x, dfa_funtype_10_t y){
        return false;}

char* json_dfa_funtype_10(dfa_funtype_10_t x){char * result = safe_malloc(24); sprintf(result, "%s", "\"dfa_funtype_10\""); return result;}


ordstruct_adt__ordstruct_adt_t f_dfa_closure_11(struct dfa_closure_11_s * closure, dfa__dfaResult_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_dfa_closure_11(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_dfa_closure_11(struct dfa_closure_11_s * closure, dfa__dfaResult_adt_t bvar){
        return h_dfa_closure_11(bvar, closure->fvar_1, closure->fvar_2);}

ordstruct_adt__ordstruct_adt_t h_dfa_closure_11(dfa__dfaResult_adt_t ivar_5, dfa_funtype_10_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_18;
        ivar_5->count++;
        ivar_18 = (bool_t)r_dfa__failedp((dfa__dfaResult_adt_t)ivar_5);
        if (ivar_18){ 
             release_dfa__dfaResult_adt(ivar_5);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1;
             if (result != NULL) result->count++;
} else {
        
             uint32_t ivar_22;
             ivar_22 = (uint32_t)dfa__dfaResult_adt_span((dfa__dfaResult_adt_t)ivar_5);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_2->ftbl->fptr(ivar_2, ivar_22);
};

        return result;
}

dfa_closure_11_t new_dfa_closure_11(void){
        static struct dfa_funtype_9_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(dfa_funtype_9_t, dfa__dfaResult_adt_t))&f_dfa_closure_11, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(dfa_funtype_9_t, dfa__dfaResult_adt_t))&m_dfa_closure_11, .rptr =  (void (*)(dfa_funtype_9_t))&release_dfa_closure_11, .cptr = (dfa_funtype_9_t (*)(dfa_funtype_9_t))&copy_dfa_closure_11};
        dfa_closure_11_t tmp = (dfa_closure_11_t) safe_malloc(sizeof(struct dfa_closure_11_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dfa_closure_11(dfa_funtype_9_t closure){
        dfa_closure_11_t x = (dfa_closure_11_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dfa_funtype_10(x->fvar_1);
         release_ordstruct_adt__ordstruct_adt(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

dfa_closure_11_t copy_dfa_closure_11(dfa_closure_11_t x){
        dfa_closure_11_t y = new_dfa_closure_11();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            dfa_funtype_9_htbl_t new_htbl = (dfa_funtype_9_htbl_t) safe_malloc(sizeof(struct dfa_funtype_9_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dfa_funtype_9_hashentry_t * new_data = (dfa_funtype_9_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dfa_funtype_9_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dfa_funtype_9_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_dfa_funtype_12(dfa_funtype_12_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dfa_funtype_12_t copy_dfa_funtype_12(dfa_funtype_12_t x){return x->ftbl->cptr(x);}

bool_t equal_dfa_funtype_12(dfa_funtype_12_t x, dfa_funtype_12_t y){
        return false;}

char* json_dfa_funtype_12(dfa_funtype_12_t x){char * result = safe_malloc(24); sprintf(result, "%s", "\"dfa_funtype_12\""); return result;}


ordstruct_adt__ordstruct_adt_t f_dfa_closure_13(struct dfa_closure_13_s * closure, dfa__dfaResult_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_dfa_closure_13(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_dfa_closure_13(struct dfa_closure_13_s * closure, dfa__dfaResult_adt_t bvar){
        return h_dfa_closure_13(bvar, closure->fvar_1, closure->fvar_2);}

ordstruct_adt__ordstruct_adt_t h_dfa_closure_13(dfa__dfaResult_adt_t ivar_6, dfa_funtype_9_t ivar_1, dfa_funtype_12_t ivar_3){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_25;
        ivar_6->count++;
        ivar_25 = (bool_t)r_dfa__failedp((dfa__dfaResult_adt_t)ivar_6);
        if (ivar_25){ 
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_6);
} else {
        
             uint32_t ivar_29;
             ivar_6->count++;
             ivar_29 = (uint32_t)dfa__dfaResult_adt_span((dfa__dfaResult_adt_t)ivar_6);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_29, ivar_6);
};

        return result;
}

dfa_closure_13_t new_dfa_closure_13(void){
        static struct dfa_funtype_9_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(dfa_funtype_9_t, dfa__dfaResult_adt_t))&f_dfa_closure_13, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(dfa_funtype_9_t, dfa__dfaResult_adt_t))&m_dfa_closure_13, .rptr =  (void (*)(dfa_funtype_9_t))&release_dfa_closure_13, .cptr = (dfa_funtype_9_t (*)(dfa_funtype_9_t))&copy_dfa_closure_13};
        dfa_closure_13_t tmp = (dfa_closure_13_t) safe_malloc(sizeof(struct dfa_closure_13_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dfa_closure_13(dfa_funtype_9_t closure){
        dfa_closure_13_t x = (dfa_closure_13_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dfa_funtype_9(x->fvar_1);
         release_dfa_funtype_12(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

dfa_closure_13_t copy_dfa_closure_13(dfa_closure_13_t x){
        dfa_closure_13_t y = new_dfa_closure_13();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            dfa_funtype_9_htbl_t new_htbl = (dfa_funtype_9_htbl_t) safe_malloc(sizeof(struct dfa_funtype_9_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dfa_funtype_9_hashentry_t * new_data = (dfa_funtype_9_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dfa_funtype_9_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dfa_funtype_9_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_dfa_funtype_14(dfa_funtype_14_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dfa_funtype_14_t copy_dfa_funtype_14(dfa_funtype_14_t x){return x->ftbl->cptr(x);}

bool_t equal_dfa_funtype_14(dfa_funtype_14_t x, dfa_funtype_14_t y){
        return false;}

char* json_dfa_funtype_14(dfa_funtype_14_t x){char * result = safe_malloc(24); sprintf(result, "%s", "\"dfa_funtype_14\""); return result;}


bool_t f_dfa_closure_15(struct dfa_closure_15_s * closure, dfa__dfaResult_adt_t bvar){
        bool_t result = h_dfa_closure_15(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_dfa_closure_15(struct dfa_closure_15_s * closure, dfa__dfaResult_adt_t bvar){
        return h_dfa_closure_15(bvar, closure->fvar_1, closure->fvar_2);}

bool_t h_dfa_closure_15(dfa__dfaResult_adt_t ivar_4, uint32_t ivar_2, uint32_t ivar_1){
        bool_t result;
        bool_t ivar_5;
        ivar_4->count++;
        ivar_5 = (bool_t)r_dfa__successp((dfa__dfaResult_adt_t)ivar_4);
        if (ivar_5){ 
             uint32_t ivar_10;
             uint32_t ivar_13;
             ivar_13 = (uint32_t)dfa__dfaResult_adt_span((dfa__dfaResult_adt_t)ivar_4);
             ivar_10 = (uint32_t)(ivar_2 + ivar_13);
             result = (ivar_10 <= ivar_1);
} else {
        
             release_dfa__dfaResult_adt(ivar_4);
             result = (bool_t) true;
};

        return result;
}

dfa_closure_15_t new_dfa_closure_15(void){
        static struct dfa_funtype_14_ftbl_s ftbl = {.fptr = (bool_t (*)(dfa_funtype_14_t, dfa__dfaResult_adt_t))&f_dfa_closure_15, .mptr = (bool_t (*)(dfa_funtype_14_t, dfa__dfaResult_adt_t))&m_dfa_closure_15, .rptr =  (void (*)(dfa_funtype_14_t))&release_dfa_closure_15, .cptr = (dfa_funtype_14_t (*)(dfa_funtype_14_t))&copy_dfa_closure_15};
        dfa_closure_15_t tmp = (dfa_closure_15_t) safe_malloc(sizeof(struct dfa_closure_15_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dfa_closure_15(dfa_funtype_14_t closure){
        dfa_closure_15_t x = (dfa_closure_15_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dfa_closure_15_t copy_dfa_closure_15(dfa_closure_15_t x){
        dfa_closure_15_t y = new_dfa_closure_15();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            dfa_funtype_14_htbl_t new_htbl = (dfa_funtype_14_htbl_t) safe_malloc(sizeof(struct dfa_funtype_14_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dfa_funtype_14_hashentry_t * new_data = (dfa_funtype_14_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dfa_funtype_14_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dfa_funtype_14_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


dfa_array_16_t new_dfa_array_16(uint32_t size){
        dfa_array_16_t tmp = (dfa_array_16_t) safe_malloc(sizeof(struct dfa_array_16_s) + (size * sizeof(bool_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_dfa_array_16(dfa_array_16_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_dfa_array_16_ptr(pointer_t x, type_actual_t T){
        release_dfa_array_16((dfa_array_16_t)x);
}

dfa_array_16_t copy_dfa_array_16(dfa_array_16_t x){
        dfa_array_16_t tmp = new_dfa_array_16(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (bool_t)x->elems[i];};
         return tmp;}

bool_t equal_dfa_array_16(dfa_array_16_t x, dfa_array_16_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_dfa_array_16(dfa_array_16_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_bool(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_dfa_array_16_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_dfa_array_16((dfa_array_16_t)x, (dfa_array_16_t)y);
}

char * json_dfa_array_16_ptr(pointer_t x, type_actual_t T){
        return json_dfa_array_16((dfa_array_16_t)x);
}

actual_dfa_array_16_t actual_dfa_array_16(){
        actual_dfa_array_16_t new = (actual_dfa_array_16_t)safe_malloc(sizeof(struct actual_dfa_array_16_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dfa_array_16_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dfa_array_16_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dfa_array_16_ptr);
 

 
        return new;
 };

dfa_array_16_t update_dfa_array_16(dfa_array_16_t x, uint32_t i, bool_t v){
        dfa_array_16_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_dfa_array_16(x );
                x->count--;};
        y->elems[i] = (bool_t)v;
        return y;}

dfa_array_16_t upgrade_dfa_array_16(dfa_array_16_t x, uint32_t i, bool_t v){
        dfa_array_16_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct dfa_array_16_s) + (newmax * sizeof(bool_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_dfa_array_16(x);}
           else {y = copy_dfa_array_16(x );
                x->count--;};
        y->elems[i] = (bool_t)v;
        return y;}




dfa_array_17_t new_dfa_array_17(uint32_t size){
        dfa_array_17_t tmp = (dfa_array_17_t) safe_malloc(sizeof(struct dfa_array_17_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_dfa_array_17(dfa_array_17_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_dfa_array_17_ptr(pointer_t x, type_actual_t T){
        release_dfa_array_17((dfa_array_17_t)x);
}

dfa_array_17_t copy_dfa_array_17(dfa_array_17_t x){
        dfa_array_17_t tmp = new_dfa_array_17(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_dfa_array_17(dfa_array_17_t x, dfa_array_17_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_dfa_array_17(dfa_array_17_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint8(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_dfa_array_17_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_dfa_array_17((dfa_array_17_t)x, (dfa_array_17_t)y);
}

char * json_dfa_array_17_ptr(pointer_t x, type_actual_t T){
        return json_dfa_array_17((dfa_array_17_t)x);
}

actual_dfa_array_17_t actual_dfa_array_17(){
        actual_dfa_array_17_t new = (actual_dfa_array_17_t)safe_malloc(sizeof(struct actual_dfa_array_17_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dfa_array_17_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dfa_array_17_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dfa_array_17_ptr);
 

 
        return new;
 };

dfa_array_17_t update_dfa_array_17(dfa_array_17_t x, uint32_t i, uint8_t v){
        dfa_array_17_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_dfa_array_17(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

dfa_array_17_t upgrade_dfa_array_17(dfa_array_17_t x, uint32_t i, uint8_t v){
        dfa_array_17_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct dfa_array_17_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_dfa_array_17(x);}
           else {y = copy_dfa_array_17(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




dfa_array_18_t new_dfa_array_18(uint32_t size){
        dfa_array_18_t tmp = (dfa_array_18_t) safe_malloc(sizeof(struct dfa_array_18_s) + (size * sizeof(dfa_array_17_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_dfa_array_18(dfa_array_18_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_dfa_array_17(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_dfa_array_18_ptr(pointer_t x, type_actual_t T){
        release_dfa_array_18((dfa_array_18_t)x);
}

dfa_array_18_t copy_dfa_array_18(dfa_array_18_t x){
        dfa_array_18_t tmp = new_dfa_array_18(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_dfa_array_18(dfa_array_18_t x, dfa_array_18_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_dfa_array_17(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_dfa_array_18(dfa_array_18_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_dfa_array_17(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_dfa_array_18_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_dfa_array_18((dfa_array_18_t)x, (dfa_array_18_t)y);
}

char * json_dfa_array_18_ptr(pointer_t x, type_actual_t T){
        return json_dfa_array_18((dfa_array_18_t)x);
}

actual_dfa_array_18_t actual_dfa_array_18(){
        actual_dfa_array_18_t new = (actual_dfa_array_18_t)safe_malloc(sizeof(struct actual_dfa_array_18_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dfa_array_18_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dfa_array_18_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dfa_array_18_ptr);
 

 
        return new;
 };

dfa_array_18_t update_dfa_array_18(dfa_array_18_t x, uint32_t i, dfa_array_17_t v){
         dfa_array_18_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_dfa_array_18(x);
                      x->count--;};
        dfa_array_17_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_dfa_array_17(yelems[i]);};
         yelems[i] = v;
         return y;}

dfa_array_18_t upgrade_dfa_array_18(dfa_array_18_t x, uint32_t i, dfa_array_17_t v){
         dfa_array_18_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct dfa_array_18_s) + (newmax * sizeof(dfa_array_17_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_dfa_array_18(x);} else {y = copy_dfa_array_18(x);
                      x->count--;};
        dfa_array_17_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_dfa_array_17(yelems[i]);};
         yelems[i] = v;
         return y;}




dfa__dfa_t new_dfa__dfa(void){
        dfa__dfa_t tmp = (dfa__dfa_t) safe_malloc(sizeof(struct dfa__dfa_s));
        tmp->count = 1;
        return tmp;}

void release_dfa__dfa(dfa__dfa_t x){
        x->count--;
        if (x->count <= 0){
         release_dfa_array_16(x->goodstate);
         release_dfa_array_18(x->tbl);
         release_dfa_array_16(x->terminal);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_dfa__dfa_ptr(pointer_t x, type_actual_t T){
        release_dfa__dfa((dfa__dfa_t)x);
}

dfa__dfa_t copy_dfa__dfa(dfa__dfa_t x){
        dfa__dfa_t y = new_dfa__dfa();
        y->numstates = (uint8_t)x->numstates;
        y->goodstate = x->goodstate;
        if (y->goodstate != NULL){y->goodstate->count++;};
        y->tbl = x->tbl;
        if (y->tbl != NULL){y->tbl->count++;};
        y->terminal = x->terminal;
        if (y->terminal != NULL){y->terminal->count++;};
        y->count = 1;
        return y;}

bool_t equal_dfa__dfa(dfa__dfa_t x, dfa__dfa_t y){
        bool_t tmp = true;
        tmp = tmp && x->numstates == y->numstates;
        tmp = tmp && equal_dfa_array_16(x->goodstate, y->goodstate);
        tmp = tmp && equal_dfa_array_18(x->tbl, y->tbl);
        tmp = tmp && equal_dfa_array_16(x->terminal, y->terminal);
        return tmp;}

char * json_dfa__dfa(dfa__dfa_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"numstates\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->numstates));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"goodstate\" : ");
        tmp[1] = safe_strcat(fld1, json_dfa_array_16(x->goodstate));
        char * fld2 = safe_malloc(15);
         sprintf(fld2, "\"tbl\" : ");
        tmp[2] = safe_strcat(fld2, json_dfa_array_18(x->tbl));
        char * fld3 = safe_malloc(20);
         sprintf(fld3, "\"terminal\" : ");
        tmp[3] = safe_strcat(fld3, json_dfa_array_16(x->terminal));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_dfa__dfa_ptr(pointer_t x, pointer_t y, actual_dfa__dfa_t T){
        return equal_dfa__dfa((dfa__dfa_t)x, (dfa__dfa_t)y);
}

char * json_dfa__dfa_ptr(pointer_t x, actual_dfa__dfa_t T){
        return json_dfa__dfa((dfa__dfa_t)x);
}

actual_dfa__dfa_t actual_dfa__dfa(){
        actual_dfa__dfa_t new = (actual_dfa__dfa_t)safe_malloc(sizeof(struct actual_dfa__dfa_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dfa__dfa_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dfa__dfa_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dfa__dfa_ptr);
 

 
        return new;
 };

dfa__dfa_t update_dfa__dfa_numstates(dfa__dfa_t x, uint8_t v){
        dfa__dfa_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dfa__dfa(x); x->count--;};
        y->numstates = (uint8_t)v;
        return y;}

dfa__dfa_t update_dfa__dfa_goodstate(dfa__dfa_t x, dfa_array_16_t v){
        dfa__dfa_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->goodstate != NULL){release_dfa_array_16(x->goodstate);};}
        else {y = copy_dfa__dfa(x); x->count--; y->goodstate->count--;};
        y->goodstate = (dfa_array_16_t)v;
        return y;}

dfa__dfa_t update_dfa__dfa_tbl(dfa__dfa_t x, dfa_array_18_t v){
        dfa__dfa_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->tbl != NULL){release_dfa_array_18(x->tbl);};}
        else {y = copy_dfa__dfa(x); x->count--; y->tbl->count--;};
        y->tbl = (dfa_array_18_t)v;
        return y;}

dfa__dfa_t update_dfa__dfa_terminal(dfa__dfa_t x, dfa_array_16_t v){
        dfa__dfa_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->terminal != NULL){release_dfa_array_16(x->terminal);};}
        else {y = copy_dfa__dfa(x); x->count--; y->terminal->count--;};
        y->terminal = (dfa_array_16_t)v;
        return y;}



bool_t r_dfa__failedp(dfa__dfaResult_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->dfa__dfaResult_adt_index;
        release_dfa__dfaResult_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

bool_t r_dfa__successp(dfa__dfaResult_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->dfa__dfaResult_adt_index;
        release_dfa__dfaResult_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

dfa__success_t update_dfa__dfaResult_adt_span(dfa__dfaResult_adt_t ivar_1, uint32_t ivar_3){
        dfa__success_t  result;
        dfa__success_t ivar_2;
        //copying to dfa__success from dfa__dfaResult_adt;
        ivar_2 = (dfa__success_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_dfa__dfaResult_adt(ivar_1);
        result = (dfa__success_t)update_dfa__success_span(ivar_2, ivar_3);

        
        return result;
}

uint32_t dfa__dfaResult_adt_span(dfa__dfaResult_adt_t ivar_1){
        uint32_t  result;
        dfa__success_t ivar_2;
        //copying to dfa__success from dfa__dfaResult_adt;
        ivar_2 = (dfa__success_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_dfa__dfaResult_adt(ivar_1);
        result = (uint32_t)ivar_2->span;
        release_dfa__success(ivar_2);

        
        return result;
}

dfa__dfaResult_adt_t dfa__failed(void){
        dfa__dfaResult_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        dfa__dfaResult_adt_t tmp41257 = new_dfa__dfaResult_adt();;
        result = (dfa__dfaResult_adt_t)tmp41257;
        tmp41257->dfa__dfaResult_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

dfa__dfaResult_adt_t dfa__success(uint32_t ivar_2){
        dfa__dfaResult_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        dfa__success_t tmp41258 = new_dfa__success();;
        result = (dfa__dfaResult_adt_t)tmp41258;
        tmp41258->dfa__dfaResult_adt_index = (uint8_t)ivar_1;
        tmp41258->span = (uint32_t)ivar_2;

        
        return result;
}

dfa_funtype_2_t dfa__dfaResult_ord(void){
        dfa_funtype_2_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

uint8_t dfa__ord(dfa__dfaResult_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)r_dfa__failedp((dfa__dfaResult_adt_t)ivar_1);
        if (ivar_3){ 
             result = (uint8_t)0;
} else {
        
             result = (uint8_t)1;
};

        
        return result;
}

bool_t dfa__subterm(dfa__dfaResult_adt_t ivar_1, dfa__dfaResult_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) equal_dfa__dfaResult_adt(ivar_1, ivar_2);

        
        return result;
}

bool_t dfa__doublelessp(dfa__dfaResult_adt_t ivar_1, dfa__dfaResult_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) false;

        
        return result;
}

dfa_funtype_3_t dfa__reduce_nat(mpz_ptr_t ivar_1, dfa_funtype_4_t ivar_2){
        dfa_funtype_3_t  result;
        dfa_closure_5_t cl41261;
        cl41261 = new_dfa_closure_5();
        cl41261->fvar_1 = (dfa_funtype_4_t)ivar_2;
        if (cl41261->fvar_1 != NULL) cl41261->fvar_1->count++;
        mpz_set(cl41261->fvar_2, ivar_1);
        release_dfa_funtype_4(ivar_2);
        result = (dfa_funtype_3_t)cl41261;

        
        return result;
}

dfa_funtype_3_t dfa__REDUCE_nat(dfa_funtype_3_t ivar_1, dfa_funtype_7_t ivar_3){
        dfa_funtype_3_t  result;
        dfa_closure_8_t cl41269;
        cl41269 = new_dfa_closure_8();
        cl41269->fvar_1 = (dfa_funtype_3_t)ivar_1;
        if (cl41269->fvar_1 != NULL) cl41269->fvar_1->count++;
        cl41269->fvar_2 = (dfa_funtype_7_t)ivar_3;
        if (cl41269->fvar_2 != NULL) cl41269->fvar_2->count++;
        release_dfa_funtype_7(ivar_3);
        release_dfa_funtype_3(ivar_1);
        result = (dfa_funtype_3_t)cl41269;

        
        return result;
}

dfa_funtype_9_t dfa__reduce_ordinal(ordstruct_adt__ordstruct_adt_t ivar_1, dfa_funtype_10_t ivar_2){
        dfa_funtype_9_t  result;
        dfa_closure_11_t cl41271;
        cl41271 = new_dfa_closure_11();
        cl41271->fvar_1 = (dfa_funtype_10_t)ivar_2;
        if (cl41271->fvar_1 != NULL) cl41271->fvar_1->count++;
        cl41271->fvar_2 = (ordstruct_adt__ordstruct_adt_t)ivar_1;
        if (cl41271->fvar_2 != NULL) cl41271->fvar_2->count++;
        release_dfa_funtype_10(ivar_2);
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (dfa_funtype_9_t)cl41271;

        
        return result;
}

dfa_funtype_9_t dfa__REDUCE_ordinal(dfa_funtype_9_t ivar_1, dfa_funtype_12_t ivar_3){
        dfa_funtype_9_t  result;
        dfa_closure_13_t cl41279;
        cl41279 = new_dfa_closure_13();
        cl41279->fvar_1 = (dfa_funtype_9_t)ivar_1;
        if (cl41279->fvar_1 != NULL) cl41279->fvar_1->count++;
        cl41279->fvar_2 = (dfa_funtype_12_t)ivar_3;
        if (cl41279->fvar_2 != NULL) cl41279->fvar_2->count++;
        release_dfa_funtype_12(ivar_3);
        release_dfa_funtype_9(ivar_1);
        result = (dfa_funtype_9_t)cl41279;

        
        return result;
}

uint8_t dfa__offset(uint8_t ivar_1){
        uint8_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)2;
        result = (uint8_t)(ivar_1 - ivar_3);

        
        return result;
}

dfa_funtype_14_t dfa__goodDfaResultp(uint32_t ivar_1, uint32_t ivar_2){
        dfa_funtype_14_t  result;
        dfa_closure_15_t cl41288;
        cl41288 = new_dfa_closure_15();
        cl41288->fvar_1 = (uint32_t)ivar_2;
        cl41288->fvar_2 = (uint32_t)ivar_1;
        result = (dfa_funtype_14_t)cl41288;

        
        return result;
}

dfa__dfaResult_adt_t dfa__dfaparse(dfa__dfa_t ivar_1, uint32_t ivar_2, dfa_array_17_t ivar_3, uint32_t ivar_4, uint8_t ivar_5, uint32_t ivar_7){
        dfa__dfaResult_adt_t  result;
        bool_t ivar_8;
        ivar_8 = (ivar_7 < ivar_2);
        if (ivar_8){ 
             bool_t ivar_12;
             uint8_t ivar_14;
             ivar_14 = (uint8_t)0;
             ivar_12 = (ivar_5 == ivar_14);
             if (ivar_12){  
           release_dfa__dfa(ivar_1);
           release_dfa_array_17(ivar_3);
           result = (dfa__dfaResult_adt_t)dfa__failed();
           if (result != NULL) result->count++;
} else {
             
           bool_t ivar_16;
           uint8_t ivar_18;
           ivar_18 = (uint8_t)1;
           ivar_16 = (ivar_5 == ivar_18);
           if (ivar_16){   
           bool_t ivar_20;
           dfa_array_16_t ivar_27;
           ivar_27 = (dfa_array_16_t)ivar_1->terminal;
           ivar_27->count++;
           uint8_t ivar_29;
           ivar_29 = (uint8_t)ivar_3->elems[ivar_7];
           ivar_20 = (bool_t)ivar_27->elems[ivar_29];
           release_dfa_array_16(ivar_27);
           if (ivar_20){    
            release_dfa_array_17(ivar_3);
            release_dfa__dfa(ivar_1);
            int32_t ivar_37;
            ivar_37 = (int32_t)((uint64_t)ivar_7 - (uint64_t)ivar_4);
            uint32_t ivar_35;
            //copying to uint32 from int32;
            ivar_35 = (uint32_t)ivar_37;
            result = (dfa__dfaResult_adt_t)dfa__success((uint32_t)ivar_35);
} else {
           
            uint32_t ivar_54;
            uint8_t ivar_45;
            ivar_45 = (uint8_t)1;
            ivar_54 = (uint32_t)(ivar_7 + ivar_45);
            result = (dfa__dfaResult_adt_t)dfa__dfaparse((dfa__dfa_t)ivar_1, (uint32_t)ivar_2, (dfa_array_17_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (uint32_t)ivar_54);
};
} else {
           
           /* newstate */ uint8_t ivar_55;
           dfa_array_17_t ivar_66;
           dfa_array_18_t ivar_78;
           ivar_78 = (dfa_array_18_t)ivar_1->tbl;
           ivar_78->count++;
           uint8_t ivar_80;
           uint8_t ivar_70;
           ivar_70 = (uint8_t)2;
           ivar_80 = (uint8_t)(ivar_5 - ivar_70);
           ivar_66 = (dfa_array_17_t)ivar_78->elems[ivar_80];
           ivar_66->count++;
           release_dfa_array_18(ivar_78);
           uint8_t ivar_81;
           ivar_81 = (uint8_t)ivar_3->elems[ivar_7];
           ivar_55 = (uint8_t)ivar_66->elems[ivar_81];
           release_dfa_array_17(ivar_66);
           bool_t ivar_82;
           uint8_t ivar_84;
           ivar_84 = (uint8_t)1;
           ivar_82 = (ivar_55 <= ivar_84);
           if (ivar_82){    
            result = (dfa__dfaResult_adt_t)dfa__dfaparse((dfa__dfa_t)ivar_1, (uint32_t)ivar_2, (dfa_array_17_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_55, (uint32_t)ivar_7);
} else {
           
            uint32_t ivar_116;
            uint8_t ivar_107;
            ivar_107 = (uint8_t)1;
            ivar_116 = (uint32_t)(ivar_7 + ivar_107);
            result = (dfa__dfaResult_adt_t)dfa__dfaparse((dfa__dfa_t)ivar_1, (uint32_t)ivar_2, (dfa_array_17_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_55, (uint32_t)ivar_116);
};
};
};
} else {
        
             release_dfa_array_17(ivar_3);
             bool_t ivar_117;
             uint8_t ivar_119;
             ivar_119 = (uint8_t)0;
             ivar_117 = (ivar_5 == ivar_119);
             if (ivar_117){  
           release_dfa__dfa(ivar_1);
           result = (dfa__dfaResult_adt_t)dfa__failed();
           if (result != NULL) result->count++;
} else {
             
           bool_t ivar_121;
           bool_t ivar_122;
           uint8_t ivar_125;
           ivar_125 = (uint8_t)1;
           ivar_122 = (ivar_5 == ivar_125);
           if (ivar_122){   
           release_dfa__dfa(ivar_1);
           ivar_121 = (bool_t) true;
} else {
           
           dfa_array_16_t ivar_130;
           ivar_130 = (dfa_array_16_t)ivar_1->goodstate;
           ivar_130->count++;
           release_dfa__dfa(ivar_1);
           ivar_121 = (bool_t)ivar_130->elems[ivar_5];
           release_dfa_array_16(ivar_130);
};
           if (ivar_121){   
           int32_t ivar_141;
           ivar_141 = (int32_t)((uint64_t)ivar_7 - (uint64_t)ivar_4);
           uint32_t ivar_139;
           //copying to uint32 from int32;
           ivar_139 = (uint32_t)ivar_141;
           result = (dfa__dfaResult_adt_t)dfa__success((uint32_t)ivar_139);
} else {
           
           result = (dfa__dfaResult_adt_t)dfa__failed();
           if (result != NULL) result->count++;
};
};
};

        
        return result;
}

dfa__dfaResult_adt_t dfa__DfaParse(dfa__dfa_t ivar_1, uint32_t ivar_2, dfa_array_17_t ivar_3, uint32_t ivar_4){
        dfa__dfaResult_adt_t  result;
        uint8_t ivar_16;
        ivar_16 = (uint8_t)2;
        result = (dfa__dfaResult_adt_t)dfa__dfaparse((dfa__dfa_t)ivar_1, (uint32_t)ivar_2, (dfa_array_17_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_16, (uint32_t)ivar_4);

        
        return result;
}

bool_t dfa__digit(uint8_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)48;
        ivar_2 = (ivar_1 >= ivar_5);
        if (ivar_2){ 
             uint8_t ivar_8;
             ivar_8 = (uint8_t)57;
             result = (ivar_1 <= ivar_8);
} else {
        
             result = (bool_t) false;
};

        
        return result;
}

bool_t dfa__any(uint8_t ivar_1){
        bool_t  result;
        result = (bool_t) true;

        
        return result;
}

bool_t dfa__whitespace(uint8_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)32;
        ivar_2 = (ivar_1 == ivar_5);
        if (ivar_2){ 
             result = (bool_t) true;
} else {
        
             bool_t ivar_7;
             uint8_t ivar_10;
             ivar_10 = (uint8_t)9;
             ivar_7 = (ivar_1 >= ivar_10);
             if (ivar_7){  
           uint8_t ivar_13;
           ivar_13 = (uint8_t)13;
           result = (ivar_1 <= ivar_13);
} else {
             
           result = (bool_t) false;
};
};

        
        return result;
}

bool_t dfa__quote(uint8_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)34;
        result = (ivar_1 == ivar_3);

        
        return result;
}

uint8_t dfa__digitstate2(uint8_t ivar_4){
        uint8_t  result;
        bool_t ivar_5;
        ivar_5 = (bool_t)dfa__digit((uint8_t)ivar_4);
        if (ivar_5){ 
             result = (uint8_t)3;
} else {
        
             result = (uint8_t)0;
};

        
        return result;
}

uint8_t dfa__digitstate3(uint8_t ivar_5){
        uint8_t  result;
        bool_t ivar_6;
        ivar_6 = (bool_t)dfa__digit((uint8_t)ivar_5);
        if (ivar_6){ 
             result = (uint8_t)3;
} else {
        
             result = (uint8_t)1;
};

        
        return result;
}

dfa__dfa_t dfa__digitDfa(void){
        dfa__dfa_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)4;
        dfa_array_16_t ivar_8;
        uint32_t size41340;
        //copying to uint32 from uint8;
        size41340 = (uint32_t)ivar_1;
        size41340 += 0;
        ivar_8 = new_dfa_array_16(size41340);
        uint8_t ivar_4;
        for (uint32_t index41339 = 0; index41339 < size41340; index41339++){
             ivar_4 = (uint8_t)index41339;
             uint8_t ivar_6;
             ivar_6 = (uint8_t)3;
             ivar_8->elems[ivar_4] = (ivar_4 == ivar_6);
        };
        dfa_array_18_t ivar_13;
        dfa_array_17_t ivar_11;
        ivar_11 = (dfa_array_17_t)dfa__digitstate2();
        if (ivar_11 != NULL) ivar_11->count++;
        dfa_array_17_t ivar_12;
        ivar_12 = (dfa_array_17_t)dfa__digitstate3();
        if (ivar_12 != NULL) ivar_12->count++;
        ivar_13 = (dfa_array_18_t)new_dfa_array_18(2);
        ivar_13->elems[0]= ivar_11;
        ivar_13->elems[1]= ivar_12;
        dfa_array_16_t ivar_25;
        ivar_25 = new_dfa_array_16(256);
        uint8_t ivar_19;
        for (uint32_t index41341 = 0; index41341 < 256; index41341++){
             ivar_19 = (uint8_t)index41341;
             bool_t ivar_20;
             ivar_20 = (bool_t)dfa__whitespace((uint8_t)ivar_19);
             ivar_25->elems[ivar_19] = !ivar_20;
        };
        dfa__dfa_t tmp41342 = new_dfa__dfa();;
        result = (dfa__dfa_t)tmp41342;
        tmp41342->numstates = (uint8_t)ivar_1;
        tmp41342->goodstate = (dfa_array_16_t)ivar_8;
        tmp41342->tbl = (dfa_array_18_t)ivar_13;
        tmp41342->terminal = (dfa_array_16_t)ivar_25;

        defined = true;};
        
        return result;
}

uint8_t dfa__tokenstate1(uint8_t ivar_4){
        uint8_t  result;
        bool_t ivar_5;
        ivar_5 = (bool_t)dfa__quote((uint8_t)ivar_4);
        if (ivar_5){ 
             result = (uint8_t)3;
} else {
        
             result = (uint8_t)0;
};

        
        return result;
}

uint8_t dfa__tokenstate2(uint8_t ivar_5){
        uint8_t  result;
        bool_t ivar_6;
        ivar_6 = (bool_t)dfa__quote((uint8_t)ivar_5);
        if (ivar_6){ 
             result = (uint8_t)4;
} else {
        
             result = (uint8_t)3;
};

        
        return result;
}

uint8_t dfa__tokenstate3(uint8_t ivar_5){
        uint8_t  result;
        result = (uint8_t)1;

        
        return result;
}

dfa__dfa_t dfa__tokenDfa(void){
        dfa__dfa_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)5;
        dfa_array_16_t ivar_5;
        uint32_t size41352;
        //copying to uint32 from uint8;
        size41352 = (uint32_t)ivar_1;
        size41352 += 0;
        ivar_5 = new_dfa_array_16(size41352);
        uint8_t ivar_4;
        for (uint32_t index41351 = 0; index41351 < size41352; index41351++){
             ivar_4 = (uint8_t)index41351;
             ivar_5->elems[ivar_4] = (bool_t) false;
        };
        dfa_array_18_t ivar_11;
        dfa_array_17_t ivar_8;
        ivar_8 = (dfa_array_17_t)dfa__tokenstate1();
        if (ivar_8 != NULL) ivar_8->count++;
        dfa_array_17_t ivar_9;
        ivar_9 = (dfa_array_17_t)dfa__tokenstate2();
        if (ivar_9 != NULL) ivar_9->count++;
        dfa_array_17_t ivar_10;
        ivar_10 = (dfa_array_17_t)dfa__tokenstate3();
        if (ivar_10 != NULL) ivar_10->count++;
        ivar_11 = (dfa_array_18_t)new_dfa_array_18(3);
        ivar_11->elems[0]= ivar_8;
        ivar_11->elems[1]= ivar_9;
        ivar_11->elems[2]= ivar_10;
        dfa_array_16_t ivar_23;
        ivar_23 = new_dfa_array_16(256);
        uint8_t ivar_17;
        for (uint32_t index41353 = 0; index41353 < 256; index41353++){
             ivar_17 = (uint8_t)index41353;
             bool_t ivar_18;
             ivar_18 = (bool_t)dfa__whitespace((uint8_t)ivar_17);
             ivar_23->elems[ivar_17] = !ivar_18;
        };
        dfa__dfa_t tmp41354 = new_dfa__dfa();;
        result = (dfa__dfa_t)tmp41354;
        tmp41354->numstates = (uint8_t)ivar_1;
        tmp41354->goodstate = (dfa_array_16_t)ivar_5;
        tmp41354->tbl = (dfa_array_18_t)ivar_11;
        tmp41354->terminal = (dfa_array_16_t)ivar_23;

        defined = true;};
        
        return result;
}

uint8_t dfa__wspacestate1(uint8_t ivar_5){
        uint8_t  result;
        result = (uint8_t)1;

        
        return result;
}

dfa__dfa_t dfa__wspaceDfa(void){
        dfa__dfa_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)3;
        dfa_array_16_t ivar_8;
        uint32_t size41364;
        //copying to uint32 from uint8;
        size41364 = (uint32_t)ivar_1;
        size41364 += 0;
        ivar_8 = new_dfa_array_16(size41364);
        uint8_t ivar_4;
        for (uint32_t index41363 = 0; index41363 < size41364; index41363++){
             ivar_4 = (uint8_t)index41363;
             uint8_t ivar_6;
             ivar_6 = (uint8_t)2;
             ivar_8->elems[ivar_4] = (ivar_4 == ivar_6);
        };
        dfa_array_18_t ivar_12;
        dfa_array_17_t ivar_11;
        ivar_11 = (dfa_array_17_t)dfa__wspacestate1();
        if (ivar_11 != NULL) ivar_11->count++;
        ivar_12 = (dfa_array_18_t)new_dfa_array_18(1);
        ivar_12->elems[0]= ivar_11;
        dfa_array_16_t ivar_24;
        ivar_24 = new_dfa_array_16(256);
        uint8_t ivar_18;
        for (uint32_t index41365 = 0; index41365 < 256; index41365++){
             ivar_18 = (uint8_t)index41365;
             bool_t ivar_19;
             ivar_19 = (bool_t)dfa__whitespace((uint8_t)ivar_18);
             ivar_24->elems[ivar_18] = !ivar_19;
        };
        dfa__dfa_t tmp41366 = new_dfa__dfa();;
        result = (dfa__dfa_t)tmp41366;
        tmp41366->numstates = (uint8_t)ivar_1;
        tmp41366->goodstate = (dfa_array_16_t)ivar_8;
        tmp41366->tbl = (dfa_array_18_t)ivar_12;
        tmp41366->terminal = (dfa_array_16_t)ivar_24;

        defined = true;};
        
        return result;
}