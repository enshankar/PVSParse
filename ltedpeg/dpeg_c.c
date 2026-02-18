//Code generated using pvs2ir2c
#include "dpeg_c.h"


dpeg__result_adt_t new_dpeg__result_adt(void){
        dpeg__result_adt_t tmp = (dpeg__result_adt_t) safe_malloc(sizeof(struct dpeg__result_adt_s));
        tmp->count = 1;
        return tmp;}

void release_dpeg__result_adt(dpeg__result_adt_t x){
switch (x->dpeg__result_adt_index) {
case 1:  release_dpeg__success((dpeg__success_t)x); break;
}}

void release_dpeg__result_adt_ptr(pointer_t x, type_actual_t T){
        release_dpeg__result_adt((dpeg__result_adt_t)x);
}

dpeg__result_adt_t copy_dpeg__result_adt(dpeg__result_adt_t x){
        dpeg__result_adt_t y = new_dpeg__result_adt();
        y->dpeg__result_adt_index = (uint8_t)x->dpeg__result_adt_index;
        y->count = 1;
        return y;}

bool_t equal_dpeg__result_adt(dpeg__result_adt_t x, dpeg__result_adt_t y){
        bool_t tmp = x->dpeg__result_adt_index == y->dpeg__result_adt_index;
        switch  (x->dpeg__result_adt_index) {
                case 1: tmp = tmp && equal_dpeg__success((dpeg__success_t)x, (dpeg__success_t)y); break;
        }
        return tmp;
}

char * json_dpeg__result_adt(dpeg__result_adt_t x){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ \"constructor\": %u,", x->dpeg__result_adt_index); tmp = safe_strcat(tmp, " \"value\": ");
        switch  (x->dpeg__result_adt_index) {
                case 1: tmp = safe_strcat(tmp, json_dpeg__success((dpeg__success_t)x)); break;
                default: tmp = safe_strcat(tmp, "null");
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_dpeg__result_adt_ptr(pointer_t x, pointer_t y, actual_dpeg__result_adt_t T){
        return equal_dpeg__result_adt((dpeg__result_adt_t)x, (dpeg__result_adt_t)y);
}

char * json_dpeg__result_adt_ptr(pointer_t x, actual_dpeg__result_adt_t T){
        return json_dpeg__result_adt((dpeg__result_adt_t)x);
}

actual_dpeg__result_adt_t actual_dpeg__result_adt(){
        actual_dpeg__result_adt_t new = (actual_dpeg__result_adt_t)safe_malloc(sizeof(struct actual_dpeg__result_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dpeg__result_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dpeg__result_adt_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dpeg__result_adt_ptr);
 

 
        return new;
 };

dpeg__result_adt_t update_dpeg__result_adt_dpeg__result_adt_index(dpeg__result_adt_t x, uint8_t v){
        dpeg__result_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dpeg__result_adt(x); x->count--;};
        y->dpeg__result_adt_index = (uint8_t)v;
        return y;}




dpeg__success_t new_dpeg__success(void){
        dpeg__success_t tmp = (dpeg__success_t) safe_malloc(sizeof(struct dpeg__success_s));
        tmp->count = 1;
        return tmp;}

void release_dpeg__success(dpeg__success_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_dpeg__success_ptr(pointer_t x, type_actual_t T){
        release_dpeg__success((dpeg__success_t)x);
}

dpeg__success_t copy_dpeg__success(dpeg__success_t x){
        dpeg__success_t y = new_dpeg__success();
        y->dpeg__result_adt_index = (uint8_t)x->dpeg__result_adt_index;
        y->span = (uint32_t)x->span;
        y->count = 1;
        return y;}

bool_t equal_dpeg__success(dpeg__success_t x, dpeg__success_t y){
        bool_t tmp = true; tmp = tmp && x->dpeg__result_adt_index == y->dpeg__result_adt_index; tmp = tmp && x->span == y->span;
        return tmp;}

char * json_dpeg__success(dpeg__success_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(34);
         sprintf(fld0, "\"dpeg__result_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->dpeg__result_adt_index));
        char * fld1 = safe_malloc(16);
         sprintf(fld1, "\"span\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->span));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_dpeg__success_ptr(pointer_t x, pointer_t y, actual_dpeg__success_t T){
        return equal_dpeg__success((dpeg__success_t)x, (dpeg__success_t)y);
}

char * json_dpeg__success_ptr(pointer_t x, actual_dpeg__success_t T){
        return json_dpeg__success((dpeg__success_t)x);
}

actual_dpeg__success_t actual_dpeg__success(){
        actual_dpeg__success_t new = (actual_dpeg__success_t)safe_malloc(sizeof(struct actual_dpeg__success_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dpeg__success_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dpeg__success_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dpeg__success_ptr);
 

 
        return new;
 };

dpeg__success_t update_dpeg__success_dpeg__result_adt_index(dpeg__success_t x, uint8_t v){
        dpeg__success_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dpeg__success(x); x->count--;};
        y->dpeg__result_adt_index = (uint8_t)v;
        return y;}

dpeg__success_t update_dpeg__success_span(dpeg__success_t x, uint32_t v){
        dpeg__success_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dpeg__success(x); x->count--;};
        y->span = (uint32_t)v;
        return y;}



void release_dpeg_funtype_2(dpeg_funtype_2_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dpeg_funtype_2_t copy_dpeg_funtype_2(dpeg_funtype_2_t x){return x->ftbl->cptr(x);}

bool_t equal_dpeg_funtype_2(dpeg_funtype_2_t x, dpeg_funtype_2_t y){
        return false;}

char* json_dpeg_funtype_2(dpeg_funtype_2_t x){char * result = safe_malloc(24); sprintf(result, "%s", "\"dpeg_funtype_2\""); return result;}

void release_dpeg_funtype_3(dpeg_funtype_3_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dpeg_funtype_3_t copy_dpeg_funtype_3(dpeg_funtype_3_t x){return x->ftbl->cptr(x);}

uint32_t lookup_dpeg_funtype_3(dpeg_funtype_3_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        dpeg_funtype_3_hashentry_t data = htbl->data[hashindex];
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

dpeg_funtype_3_t dupdate_dpeg_funtype_3(dpeg_funtype_3_t a, uint32_t i, mpz_ptr_t v){
        dpeg_funtype_3_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (dpeg_funtype_3_htbl_t)safe_malloc(sizeof(struct dpeg_funtype_3_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (dpeg_funtype_3_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct dpeg_funtype_3_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        dpeg_funtype_3_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                dpeg_funtype_3_hashentry_t * new_data = (dpeg_funtype_3_hashentry_t *)safe_malloc(new_size * sizeof(struct dpeg_funtype_3_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        keyzero = (data[j].key == 0);

                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                bool_t newkeyzero;
                                newkeyzero = (new_data[new_loc].key == 0);

                                while (!newkeyzero || new_data[new_loc].keyhash != 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        newkeyzero = (new_data[new_loc].key == 0);

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
        uint32_t hashindex = lookup_dpeg_funtype_3(htbl, i, ihash);
        dpeg_funtype_3_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; mpz_set(htbl->data[hashindex].value, v); htbl->num_entries++;}
            else {mpz_set(htbl->data[hashindex].value, v);};
        return a;

}

dpeg_funtype_3_t update_dpeg_funtype_3(dpeg_funtype_3_t a, uint32_t i, mpz_ptr_t v){
        if (a->count == 1){
                return dupdate_dpeg_funtype_3(a, i, v);
            } else {
                dpeg_funtype_3_t x = copy_dpeg_funtype_3(a);
                a->count--;
                return dupdate_dpeg_funtype_3(x, i, v);
            }}

bool_t equal_dpeg_funtype_3(dpeg_funtype_3_t x, dpeg_funtype_3_t y){
        return false;}

char* json_dpeg_funtype_3(dpeg_funtype_3_t x){char * result = safe_malloc(24); sprintf(result, "%s", "\"dpeg_funtype_3\""); return result;}


mpz_ptr_t f_dpeg_closure_4(struct dpeg_closure_4_s * closure, dpeg__result_adt_t bvar){
        dpeg_funtype_3_t fvar_1 = closure->fvar_1;
        mpz_ptr_t fvar_2 = closure->fvar_2;
        fvar_1->count++;
        release_dpeg_closure_4(closure);
        mpz_ptr_t result;
        result = (mpz_ptr_t)h_dpeg_closure_4(bvar, fvar_1, fvar_2);
        return result;
}

mpz_ptr_t m_dpeg_closure_4(struct dpeg_closure_4_s * closure, dpeg__result_adt_t bvar){
        dpeg_funtype_3_t fvar_1 = closure->fvar_1;
        mpz_ptr_t fvar_2 = closure->fvar_2;
        fvar_1->count++;
        release_dpeg_closure_4(closure);
        return h_dpeg_closure_4(bvar, fvar_1, fvar_2);}

mpz_ptr_t h_dpeg_closure_4(dpeg__result_adt_t ivar_6, dpeg_funtype_3_t ivar_2, mpz_ptr_t ivar_1){
        mpz_ptr_t result;

        bool_t ivar_17;
        ivar_6->count++;
        ivar_17 = (bool_t)rec_dpeg__failurep((dpeg__result_adt_t)ivar_6);
        if (ivar_17){
             release_dpeg_funtype_3((dpeg_funtype_3_t)ivar_2);
             release_dpeg__result_adt((dpeg__result_adt_t)ivar_6);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_1);
             mpz_clear(ivar_1);
        } else {
             uint32_t ivar_21;
             ivar_21 = (uint32_t)acc_dpeg__result_adt_span((dpeg__result_adt_t)ivar_6);
             mpz_mk_set(result, ivar_2->ftbl->fptr(ivar_2, ivar_21));};
        return result;
}

dpeg_closure_4_t new_dpeg_closure_4(void){
        static struct dpeg_funtype_2_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(dpeg_funtype_2_t, dpeg__result_adt_t))&f_dpeg_closure_4, .mptr = (mpz_ptr_t (*)(dpeg_funtype_2_t, dpeg__result_adt_t))&m_dpeg_closure_4, .rptr =  (void (*)(dpeg_funtype_2_t))&release_dpeg_closure_4, .cptr = (dpeg_funtype_2_t (*)(dpeg_funtype_2_t))&copy_dpeg_closure_4};
        dpeg_closure_4_t tmp = (dpeg_closure_4_t) safe_malloc(sizeof(struct dpeg_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_dpeg_closure_4(dpeg_funtype_2_t closure){
        dpeg_closure_4_t x = (dpeg_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_3((dpeg_funtype_3_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_4_t copy_dpeg_closure_4(dpeg_closure_4_t x){
        dpeg_closure_4_t y = new_dpeg_closure_4();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        mpz_set(y->fvar_2, x->fvar_2);
        if (x->htbl != NULL){
            dpeg_funtype_2_htbl_t new_htbl = (dpeg_funtype_2_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_2_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_2_hashentry_t * new_data = (dpeg_funtype_2_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_2_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_2_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


dpeg_record_5_t new_dpeg_record_5(void){
        dpeg_record_5_t tmp = (dpeg_record_5_t) safe_malloc(sizeof(struct dpeg_record_5_s));
        tmp->count = 1;
        return tmp;}

void release_dpeg_record_5(dpeg_record_5_t x){
        x->count--;
        if (x->count <= 0){
         release_dpeg__result_adt((dpeg__result_adt_t)x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_dpeg_record_5_ptr(pointer_t x, type_actual_t T){
        release_dpeg_record_5((dpeg_record_5_t)x);
}

dpeg_record_5_t copy_dpeg_record_5(dpeg_record_5_t x){
        dpeg_record_5_t y = new_dpeg_record_5();
        y->project_1 = (uint32_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_dpeg_record_5(dpeg_record_5_t x, dpeg_record_5_t y){
        bool_t tmp = true; tmp = tmp && x->project_1 == y->project_1; tmp = tmp && equal_dpeg__result_adt((dpeg__result_adt_t)x->project_2, (dpeg__result_adt_t)y->project_2);
        return tmp;}

char * json_dpeg_record_5(dpeg_record_5_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint32(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_dpeg__result_adt((dpeg__result_adt_t)x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_dpeg_record_5_ptr(pointer_t x, pointer_t y, actual_dpeg_record_5_t T){
        return equal_dpeg_record_5((dpeg_record_5_t)x, (dpeg_record_5_t)y);
}

char * json_dpeg_record_5_ptr(pointer_t x, actual_dpeg_record_5_t T){
        return json_dpeg_record_5((dpeg_record_5_t)x);
}

actual_dpeg_record_5_t actual_dpeg_record_5(){
        actual_dpeg_record_5_t new = (actual_dpeg_record_5_t)safe_malloc(sizeof(struct actual_dpeg_record_5_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dpeg_record_5_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dpeg_record_5_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dpeg_record_5_ptr);
 

 
        return new;
 };

dpeg_record_5_t update_dpeg_record_5_project_1(dpeg_record_5_t x, uint32_t v){
        dpeg_record_5_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dpeg_record_5(x); x->count--;};
        y->project_1 = (uint32_t)v;
        return y;}

dpeg_record_5_t update_dpeg_record_5_project_2(dpeg_record_5_t x, dpeg__result_adt_t v){
        dpeg_record_5_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_dpeg__result_adt((dpeg__result_adt_t)x->project_2);};}
        else {y = copy_dpeg_record_5(x); x->count--; y->project_2->count--;};
        y->project_2 = (dpeg__result_adt_t)v;
        return y;}



void release_dpeg_funtype_6(dpeg_funtype_6_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dpeg_funtype_6_t copy_dpeg_funtype_6(dpeg_funtype_6_t x){return x->ftbl->cptr(x);}

bool_t equal_dpeg_funtype_6(dpeg_funtype_6_t x, dpeg_funtype_6_t y){
        return false;}

char* json_dpeg_funtype_6(dpeg_funtype_6_t x){char * result = safe_malloc(24); sprintf(result, "%s", "\"dpeg_funtype_6\""); return result;}


mpz_ptr_t f_dpeg_closure_7(struct dpeg_closure_7_s * closure, dpeg__result_adt_t bvar){
        dpeg_funtype_2_t fvar_1 = closure->fvar_1;
        dpeg_funtype_6_t fvar_2 = closure->fvar_2;
        fvar_1->count++;
        fvar_2->count++;
        release_dpeg_closure_7(closure);
        mpz_ptr_t result;
        result = (mpz_ptr_t)h_dpeg_closure_7(bvar, fvar_1, fvar_2);
        return result;
}

mpz_ptr_t m_dpeg_closure_7(struct dpeg_closure_7_s * closure, dpeg__result_adt_t bvar){
        dpeg_funtype_2_t fvar_1 = closure->fvar_1;
        dpeg_funtype_6_t fvar_2 = closure->fvar_2;
        fvar_1->count++;
        fvar_2->count++;
        release_dpeg_closure_7(closure);
        return h_dpeg_closure_7(bvar, fvar_1, fvar_2);}

mpz_ptr_t h_dpeg_closure_7(dpeg__result_adt_t ivar_7, dpeg_funtype_2_t ivar_1, dpeg_funtype_6_t ivar_3){
        mpz_ptr_t result;

        bool_t ivar_25;
        ivar_7->count++;
        ivar_25 = (bool_t)rec_dpeg__failurep((dpeg__result_adt_t)ivar_7);
        if (ivar_25){
             release_dpeg_funtype_6((dpeg_funtype_6_t)ivar_3);
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_7));
        } else {
             release_dpeg_funtype_2((dpeg_funtype_2_t)ivar_1);
             uint32_t ivar_29;
             ivar_7->count++;
             ivar_29 = (uint32_t)acc_dpeg__result_adt_span((dpeg__result_adt_t)ivar_7);
             mpz_mk_set(result, ivar_3->ftbl->mptr(ivar_3, ivar_29, ivar_7));};
        return result;
}

dpeg_closure_7_t new_dpeg_closure_7(void){
        static struct dpeg_funtype_2_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(dpeg_funtype_2_t, dpeg__result_adt_t))&f_dpeg_closure_7, .mptr = (mpz_ptr_t (*)(dpeg_funtype_2_t, dpeg__result_adt_t))&m_dpeg_closure_7, .rptr =  (void (*)(dpeg_funtype_2_t))&release_dpeg_closure_7, .cptr = (dpeg_funtype_2_t (*)(dpeg_funtype_2_t))&copy_dpeg_closure_7};
        dpeg_closure_7_t tmp = (dpeg_closure_7_t) safe_malloc(sizeof(struct dpeg_closure_7_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_7(dpeg_funtype_2_t closure){
        dpeg_closure_7_t x = (dpeg_closure_7_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_2((dpeg_funtype_2_t)x->fvar_1);
         release_dpeg_funtype_6((dpeg_funtype_6_t)x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_7_t copy_dpeg_closure_7(dpeg_closure_7_t x){
        dpeg_closure_7_t y = new_dpeg_closure_7();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            dpeg_funtype_2_htbl_t new_htbl = (dpeg_funtype_2_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_2_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_2_hashentry_t * new_data = (dpeg_funtype_2_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_2_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_2_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_dpeg_funtype_8(dpeg_funtype_8_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dpeg_funtype_8_t copy_dpeg_funtype_8(dpeg_funtype_8_t x){return x->ftbl->cptr(x);}

bool_t equal_dpeg_funtype_8(dpeg_funtype_8_t x, dpeg_funtype_8_t y){
        return false;}

char* json_dpeg_funtype_8(dpeg_funtype_8_t x){char * result = safe_malloc(24); sprintf(result, "%s", "\"dpeg_funtype_8\""); return result;}

void release_dpeg_funtype_9(dpeg_funtype_9_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dpeg_funtype_9_t copy_dpeg_funtype_9(dpeg_funtype_9_t x){return x->ftbl->cptr(x);}

uint32_t lookup_dpeg_funtype_9(dpeg_funtype_9_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        dpeg_funtype_9_hashentry_t data = htbl->data[hashindex];
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

dpeg_funtype_9_t dupdate_dpeg_funtype_9(dpeg_funtype_9_t a, uint32_t i, ordstruct_adt__ordstruct_adt_t v){
        dpeg_funtype_9_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (dpeg_funtype_9_htbl_t)safe_malloc(sizeof(struct dpeg_funtype_9_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (dpeg_funtype_9_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct dpeg_funtype_9_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        dpeg_funtype_9_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                dpeg_funtype_9_hashentry_t * new_data = (dpeg_funtype_9_hashentry_t *)safe_malloc(new_size * sizeof(struct dpeg_funtype_9_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        keyzero = (data[j].key == 0);

                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                bool_t newkeyzero;
                                newkeyzero = (new_data[new_loc].key == 0);

                                while (!newkeyzero || new_data[new_loc].keyhash != 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        newkeyzero = (new_data[new_loc].key == 0);

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
        uint32_t hashindex = lookup_dpeg_funtype_9(htbl, i, ihash);
        dpeg_funtype_9_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v; htbl->num_entries++;}
            else {ordstruct_adt__ordstruct_adt_t tempvalue;tempvalue = (ordstruct_adt__ordstruct_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ordstruct_adt__ordstruct_adt(tempvalue);};
        return a;

}

dpeg_funtype_9_t update_dpeg_funtype_9(dpeg_funtype_9_t a, uint32_t i, ordstruct_adt__ordstruct_adt_t v){
        if (a->count == 1){
                return dupdate_dpeg_funtype_9(a, i, v);
            } else {
                dpeg_funtype_9_t x = copy_dpeg_funtype_9(a);
                a->count--;
                return dupdate_dpeg_funtype_9(x, i, v);
            }}

bool_t equal_dpeg_funtype_9(dpeg_funtype_9_t x, dpeg_funtype_9_t y){
        return false;}

char* json_dpeg_funtype_9(dpeg_funtype_9_t x){char * result = safe_malloc(24); sprintf(result, "%s", "\"dpeg_funtype_9\""); return result;}


ordstruct_adt__ordstruct_adt_t f_dpeg_closure_10(struct dpeg_closure_10_s * closure, dpeg__result_adt_t bvar){
        dpeg_funtype_9_t fvar_1 = closure->fvar_1;
        ordstruct_adt__ordstruct_adt_t fvar_2 = closure->fvar_2;
        fvar_1->count++;
        fvar_2->count++;
        release_dpeg_closure_10(closure);
        ordstruct_adt__ordstruct_adt_t result;
        result = (ordstruct_adt__ordstruct_adt_t)h_dpeg_closure_10(bvar, fvar_1, fvar_2);
        return result;
}

ordstruct_adt__ordstruct_adt_t m_dpeg_closure_10(struct dpeg_closure_10_s * closure, dpeg__result_adt_t bvar){
        dpeg_funtype_9_t fvar_1 = closure->fvar_1;
        ordstruct_adt__ordstruct_adt_t fvar_2 = closure->fvar_2;
        fvar_1->count++;
        fvar_2->count++;
        release_dpeg_closure_10(closure);
        return h_dpeg_closure_10(bvar, fvar_1, fvar_2);}

ordstruct_adt__ordstruct_adt_t h_dpeg_closure_10(dpeg__result_adt_t ivar_6, dpeg_funtype_9_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;

        bool_t ivar_17;
        ivar_6->count++;
        ivar_17 = (bool_t)rec_dpeg__failurep((dpeg__result_adt_t)ivar_6);
        if (ivar_17){
             release_dpeg_funtype_9((dpeg_funtype_9_t)ivar_2);
             release_dpeg__result_adt((dpeg__result_adt_t)ivar_6);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1;
             if (result != NULL) result->count++;
             release_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)ivar_1);
        } else {
             release_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)ivar_1);
             uint32_t ivar_21;
             ivar_21 = (uint32_t)acc_dpeg__result_adt_span((dpeg__result_adt_t)ivar_6);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_2->ftbl->fptr(ivar_2, ivar_21);};
        return result;
}

dpeg_closure_10_t new_dpeg_closure_10(void){
        static struct dpeg_funtype_8_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(dpeg_funtype_8_t, dpeg__result_adt_t))&f_dpeg_closure_10, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(dpeg_funtype_8_t, dpeg__result_adt_t))&m_dpeg_closure_10, .rptr =  (void (*)(dpeg_funtype_8_t))&release_dpeg_closure_10, .cptr = (dpeg_funtype_8_t (*)(dpeg_funtype_8_t))&copy_dpeg_closure_10};
        dpeg_closure_10_t tmp = (dpeg_closure_10_t) safe_malloc(sizeof(struct dpeg_closure_10_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_10(dpeg_funtype_8_t closure){
        dpeg_closure_10_t x = (dpeg_closure_10_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_9((dpeg_funtype_9_t)x->fvar_1);
         release_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_10_t copy_dpeg_closure_10(dpeg_closure_10_t x){
        dpeg_closure_10_t y = new_dpeg_closure_10();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            dpeg_funtype_8_htbl_t new_htbl = (dpeg_funtype_8_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_8_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_8_hashentry_t * new_data = (dpeg_funtype_8_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_8_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_8_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_dpeg_funtype_11(dpeg_funtype_11_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dpeg_funtype_11_t copy_dpeg_funtype_11(dpeg_funtype_11_t x){return x->ftbl->cptr(x);}

bool_t equal_dpeg_funtype_11(dpeg_funtype_11_t x, dpeg_funtype_11_t y){
        return false;}

char* json_dpeg_funtype_11(dpeg_funtype_11_t x){char * result = safe_malloc(25); sprintf(result, "%s", "\"dpeg_funtype_11\""); return result;}


ordstruct_adt__ordstruct_adt_t f_dpeg_closure_12(struct dpeg_closure_12_s * closure, dpeg__result_adt_t bvar){
        dpeg_funtype_8_t fvar_1 = closure->fvar_1;
        dpeg_funtype_11_t fvar_2 = closure->fvar_2;
        fvar_1->count++;
        fvar_2->count++;
        release_dpeg_closure_12(closure);
        ordstruct_adt__ordstruct_adt_t result;
        result = (ordstruct_adt__ordstruct_adt_t)h_dpeg_closure_12(bvar, fvar_1, fvar_2);
        return result;
}

ordstruct_adt__ordstruct_adt_t m_dpeg_closure_12(struct dpeg_closure_12_s * closure, dpeg__result_adt_t bvar){
        dpeg_funtype_8_t fvar_1 = closure->fvar_1;
        dpeg_funtype_11_t fvar_2 = closure->fvar_2;
        fvar_1->count++;
        fvar_2->count++;
        release_dpeg_closure_12(closure);
        return h_dpeg_closure_12(bvar, fvar_1, fvar_2);}

ordstruct_adt__ordstruct_adt_t h_dpeg_closure_12(dpeg__result_adt_t ivar_7, dpeg_funtype_8_t ivar_1, dpeg_funtype_11_t ivar_3){
        ordstruct_adt__ordstruct_adt_t result;

        bool_t ivar_25;
        ivar_7->count++;
        ivar_25 = (bool_t)rec_dpeg__failurep((dpeg__result_adt_t)ivar_7);
        if (ivar_25){
             release_dpeg_funtype_11((dpeg_funtype_11_t)ivar_3);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_7);
        } else {
             release_dpeg_funtype_8((dpeg_funtype_8_t)ivar_1);
             uint32_t ivar_29;
             ivar_7->count++;
             ivar_29 = (uint32_t)acc_dpeg__result_adt_span((dpeg__result_adt_t)ivar_7);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_29, ivar_7);};
        return result;
}

dpeg_closure_12_t new_dpeg_closure_12(void){
        static struct dpeg_funtype_8_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(dpeg_funtype_8_t, dpeg__result_adt_t))&f_dpeg_closure_12, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(dpeg_funtype_8_t, dpeg__result_adt_t))&m_dpeg_closure_12, .rptr =  (void (*)(dpeg_funtype_8_t))&release_dpeg_closure_12, .cptr = (dpeg_funtype_8_t (*)(dpeg_funtype_8_t))&copy_dpeg_closure_12};
        dpeg_closure_12_t tmp = (dpeg_closure_12_t) safe_malloc(sizeof(struct dpeg_closure_12_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_12(dpeg_funtype_8_t closure){
        dpeg_closure_12_t x = (dpeg_closure_12_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_8((dpeg_funtype_8_t)x->fvar_1);
         release_dpeg_funtype_11((dpeg_funtype_11_t)x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_12_t copy_dpeg_closure_12(dpeg_closure_12_t x){
        dpeg_closure_12_t y = new_dpeg_closure_12();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            dpeg_funtype_8_htbl_t new_htbl = (dpeg_funtype_8_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_8_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_8_hashentry_t * new_data = (dpeg_funtype_8_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_8_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_8_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


dpeg_record_13_t new_dpeg_record_13(void){
        dpeg_record_13_t tmp = (dpeg_record_13_t) safe_malloc(sizeof(struct dpeg_record_13_s));
        tmp->count = 1;
        return tmp;}

void release_dpeg_record_13(dpeg_record_13_t x){
        x->count--;
        if (x->count <= 0){
         release_bytestrings__bytestring((bytestrings__bytestring_t)x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_dpeg_record_13_ptr(pointer_t x, type_actual_t T){
        release_dpeg_record_13((dpeg_record_13_t)x);
}

dpeg_record_13_t copy_dpeg_record_13(dpeg_record_13_t x){
        dpeg_record_13_t y = new_dpeg_record_13();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->count = 1;
        return y;}

bool_t equal_dpeg_record_13(dpeg_record_13_t x, dpeg_record_13_t y){
        bool_t tmp = true; tmp = tmp && equal_bytestrings__bytestring((bytestrings__bytestring_t)x->project_1, (bytestrings__bytestring_t)y->project_1); tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

char * json_dpeg_record_13(dpeg_record_13_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_bytestrings__bytestring((bytestrings__bytestring_t)x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_dpeg_record_13_ptr(pointer_t x, pointer_t y, actual_dpeg_record_13_t T){
        return equal_dpeg_record_13((dpeg_record_13_t)x, (dpeg_record_13_t)y);
}

char * json_dpeg_record_13_ptr(pointer_t x, actual_dpeg_record_13_t T){
        return json_dpeg_record_13((dpeg_record_13_t)x);
}

actual_dpeg_record_13_t actual_dpeg_record_13(){
        actual_dpeg_record_13_t new = (actual_dpeg_record_13_t)safe_malloc(sizeof(struct actual_dpeg_record_13_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dpeg_record_13_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dpeg_record_13_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dpeg_record_13_ptr);
 

 
        return new;
 };

dpeg_record_13_t update_dpeg_record_13_project_1(dpeg_record_13_t x, bytestrings__bytestring_t v){
        dpeg_record_13_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_bytestrings__bytestring((bytestrings__bytestring_t)x->project_1);};}
        else {y = copy_dpeg_record_13(x); x->count--; y->project_1->count--;};
        y->project_1 = (bytestrings__bytestring_t)v;
        return y;}

dpeg_record_13_t update_dpeg_record_13_project_2(dpeg_record_13_t x, uint32_t v){
        dpeg_record_13_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dpeg_record_13(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}



void release_dpeg__guard(dpeg__guard_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dpeg__guard_t copy_dpeg__guard(dpeg__guard_t x){return x->ftbl->cptr(x);}

bool_t equal_dpeg__guard(dpeg__guard_t x, dpeg__guard_t y){
        return false;}

char* json_dpeg__guard(dpeg__guard_t x){char * result = safe_malloc(21); sprintf(result, "%s", "\"dpeg__guard\""); return result;}


dpeg__dpeg_expr_adt_t new_dpeg__dpeg_expr_adt(void){
        dpeg__dpeg_expr_adt_t tmp = (dpeg__dpeg_expr_adt_t) safe_malloc(sizeof(struct dpeg__dpeg_expr_adt_s));
        tmp->count = 1;
        return tmp;}

void release_dpeg__dpeg_expr_adt(dpeg__dpeg_expr_adt_t x){
switch (x->dpeg__dpeg_expr_adt_index) {
case 2:  release_dpeg__glte((dpeg__glte_t)x); break;
}}

void release_dpeg__dpeg_expr_adt_ptr(pointer_t x, type_actual_t T){
        release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)x);
}

dpeg__dpeg_expr_adt_t copy_dpeg__dpeg_expr_adt(dpeg__dpeg_expr_adt_t x){
        dpeg__dpeg_expr_adt_t y = new_dpeg__dpeg_expr_adt();
        y->dpeg__dpeg_expr_adt_index = (uint8_t)x->dpeg__dpeg_expr_adt_index;
        y->count = 1;
        return y;}

bool_t equal_dpeg__dpeg_expr_adt(dpeg__dpeg_expr_adt_t x, dpeg__dpeg_expr_adt_t y){
        bool_t tmp = x->dpeg__dpeg_expr_adt_index == y->dpeg__dpeg_expr_adt_index;
        switch  (x->dpeg__dpeg_expr_adt_index) {
                case 2: tmp = tmp && equal_dpeg__glte((dpeg__glte_t)x, (dpeg__glte_t)y); break;
        }
        return tmp;
}

char * json_dpeg__dpeg_expr_adt(dpeg__dpeg_expr_adt_t x){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ \"constructor\": %u,", x->dpeg__dpeg_expr_adt_index); tmp = safe_strcat(tmp, " \"value\": ");
        switch  (x->dpeg__dpeg_expr_adt_index) {
                case 2: tmp = safe_strcat(tmp, json_dpeg__glte((dpeg__glte_t)x)); break;
                default: tmp = safe_strcat(tmp, "null");
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_dpeg__dpeg_expr_adt_ptr(pointer_t x, pointer_t y, actual_dpeg__dpeg_expr_adt_t T){
        return equal_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)x, (dpeg__dpeg_expr_adt_t)y);
}

char * json_dpeg__dpeg_expr_adt_ptr(pointer_t x, actual_dpeg__dpeg_expr_adt_t T){
        return json_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)x);
}

actual_dpeg__dpeg_expr_adt_t actual_dpeg__dpeg_expr_adt(){
        actual_dpeg__dpeg_expr_adt_t new = (actual_dpeg__dpeg_expr_adt_t)safe_malloc(sizeof(struct actual_dpeg__dpeg_expr_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dpeg__dpeg_expr_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dpeg__dpeg_expr_adt_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dpeg__dpeg_expr_adt_ptr);
 

 
        return new;
 };

dpeg__dpeg_expr_adt_t update_dpeg__dpeg_expr_adt_dpeg__dpeg_expr_adt_index(dpeg__dpeg_expr_adt_t x, uint8_t v){
        dpeg__dpeg_expr_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dpeg__dpeg_expr_adt(x); x->count--;};
        y->dpeg__dpeg_expr_adt_index = (uint8_t)v;
        return y;}




dpeg__glte_t new_dpeg__glte(void){
        dpeg__glte_t tmp = (dpeg__glte_t) safe_malloc(sizeof(struct dpeg__glte_s));
        tmp->count = 1;
        return tmp;}

void release_dpeg__glte(dpeg__glte_t x){
        x->count--;
        if (x->count <= 0){
         release_dpeg__guard((dpeg__guard_t)x->p);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_dpeg__glte_ptr(pointer_t x, type_actual_t T){
        release_dpeg__glte((dpeg__glte_t)x);
}

dpeg__glte_t copy_dpeg__glte(dpeg__glte_t x){
        dpeg__glte_t y = new_dpeg__glte();
        y->dpeg__dpeg_expr_adt_index = (uint8_t)x->dpeg__dpeg_expr_adt_index;
        y->p = x->p;
        if (y->p != NULL){y->p->count++;};
        y->b = (uint32_t)x->b;
        y->c = (uint32_t)x->c;
        y->count = 1;
        return y;}

bool_t equal_dpeg__glte(dpeg__glte_t x, dpeg__glte_t y){
        bool_t tmp = true; tmp = tmp && x->dpeg__dpeg_expr_adt_index == y->dpeg__dpeg_expr_adt_index; tmp = tmp && equal_dpeg__guard((dpeg__guard_t)x->p, (dpeg__guard_t)y->p); tmp = tmp && x->b == y->b; tmp = tmp && x->c == y->c;
        return tmp;}

char * json_dpeg__glte(dpeg__glte_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(37);
         sprintf(fld0, "\"dpeg__dpeg_expr_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->dpeg__dpeg_expr_adt_index));
        char * fld1 = safe_malloc(13);
         sprintf(fld1, "\"p\" : ");
        tmp[1] = safe_strcat(fld1, json_dpeg__guard((dpeg__guard_t)x->p));
        char * fld2 = safe_malloc(13);
         sprintf(fld2, "\"b\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->b));
        char * fld3 = safe_malloc(13);
         sprintf(fld3, "\"c\" : ");
        tmp[3] = safe_strcat(fld3, json_uint32(x->c));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_dpeg__glte_ptr(pointer_t x, pointer_t y, actual_dpeg__glte_t T){
        return equal_dpeg__glte((dpeg__glte_t)x, (dpeg__glte_t)y);
}

char * json_dpeg__glte_ptr(pointer_t x, actual_dpeg__glte_t T){
        return json_dpeg__glte((dpeg__glte_t)x);
}

actual_dpeg__glte_t actual_dpeg__glte(){
        actual_dpeg__glte_t new = (actual_dpeg__glte_t)safe_malloc(sizeof(struct actual_dpeg__glte_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dpeg__glte_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dpeg__glte_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dpeg__glte_ptr);
 

 
        return new;
 };

dpeg__glte_t update_dpeg__glte_dpeg__dpeg_expr_adt_index(dpeg__glte_t x, uint8_t v){
        dpeg__glte_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dpeg__glte(x); x->count--;};
        y->dpeg__dpeg_expr_adt_index = (uint8_t)v;
        return y;}

dpeg__glte_t update_dpeg__glte_p(dpeg__glte_t x, dpeg__guard_t v){
        dpeg__glte_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->p != NULL){release_dpeg__guard((dpeg__guard_t)x->p);};}
        else {y = copy_dpeg__glte(x); x->count--; y->p->count--;};
        y->p = (dpeg__guard_t)v;
        return y;}

dpeg__glte_t update_dpeg__glte_b(dpeg__glte_t x, uint32_t v){
        dpeg__glte_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dpeg__glte(x); x->count--;};
        y->b = (uint32_t)v;
        return y;}

dpeg__glte_t update_dpeg__glte_c(dpeg__glte_t x, uint32_t v){
        dpeg__glte_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dpeg__glte(x); x->count--;};
        y->c = (uint32_t)v;
        return y;}



void release_dpeg_funtype_17(dpeg_funtype_17_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dpeg_funtype_17_t copy_dpeg_funtype_17(dpeg_funtype_17_t x){return x->ftbl->cptr(x);}

bool_t equal_dpeg_funtype_17(dpeg_funtype_17_t x, dpeg_funtype_17_t y){
        return false;}

char* json_dpeg_funtype_17(dpeg_funtype_17_t x){char * result = safe_malloc(25); sprintf(result, "%s", "\"dpeg_funtype_17\""); return result;}


dpeg_record_18_t new_dpeg_record_18(void){
        dpeg_record_18_t tmp = (dpeg_record_18_t) safe_malloc(sizeof(struct dpeg_record_18_s));
        tmp->count = 1;
        return tmp;}

void release_dpeg_record_18(dpeg_record_18_t x){
        x->count--;
        if (x->count <= 0){
         release_dpeg__guard((dpeg__guard_t)x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_dpeg_record_18_ptr(pointer_t x, type_actual_t T){
        release_dpeg_record_18((dpeg_record_18_t)x);
}

dpeg_record_18_t copy_dpeg_record_18(dpeg_record_18_t x){
        dpeg_record_18_t y = new_dpeg_record_18();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint32_t)x->project_3;
        y->count = 1;
        return y;}

bool_t equal_dpeg_record_18(dpeg_record_18_t x, dpeg_record_18_t y){
        bool_t tmp = true; tmp = tmp && equal_dpeg__guard((dpeg__guard_t)x->project_1, (dpeg__guard_t)y->project_1); tmp = tmp && x->project_2 == y->project_2; tmp = tmp && x->project_3 == y->project_3;
        return tmp;}

char * json_dpeg_record_18(dpeg_record_18_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_dpeg__guard((dpeg__guard_t)x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_dpeg_record_18_ptr(pointer_t x, pointer_t y, actual_dpeg_record_18_t T){
        return equal_dpeg_record_18((dpeg_record_18_t)x, (dpeg_record_18_t)y);
}

char * json_dpeg_record_18_ptr(pointer_t x, actual_dpeg_record_18_t T){
        return json_dpeg_record_18((dpeg_record_18_t)x);
}

actual_dpeg_record_18_t actual_dpeg_record_18(){
        actual_dpeg_record_18_t new = (actual_dpeg_record_18_t)safe_malloc(sizeof(struct actual_dpeg_record_18_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dpeg_record_18_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dpeg_record_18_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dpeg_record_18_ptr);
 

 
        return new;
 };

dpeg_record_18_t update_dpeg_record_18_project_1(dpeg_record_18_t x, dpeg__guard_t v){
        dpeg_record_18_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_dpeg__guard((dpeg__guard_t)x->project_1);};}
        else {y = copy_dpeg_record_18(x); x->count--; y->project_1->count--;};
        y->project_1 = (dpeg__guard_t)v;
        return y;}

dpeg_record_18_t update_dpeg_record_18_project_2(dpeg_record_18_t x, uint32_t v){
        dpeg_record_18_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dpeg_record_18(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

dpeg_record_18_t update_dpeg_record_18_project_3(dpeg_record_18_t x, uint32_t v){
        dpeg_record_18_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dpeg_record_18(x); x->count--;};
        y->project_3 = (uint32_t)v;
        return y;}



void release_dpeg_funtype_19(dpeg_funtype_19_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dpeg_funtype_19_t copy_dpeg_funtype_19(dpeg_funtype_19_t x){return x->ftbl->cptr(x);}

bool_t equal_dpeg_funtype_19(dpeg_funtype_19_t x, dpeg_funtype_19_t y){
        return false;}

char* json_dpeg_funtype_19(dpeg_funtype_19_t x){char * result = safe_malloc(25); sprintf(result, "%s", "\"dpeg_funtype_19\""); return result;}


mpz_ptr_t f_dpeg_closure_20(struct dpeg_closure_20_s * closure, dpeg__dpeg_expr_adt_t bvar){
        mpz_ptr_t fvar_1 = closure->fvar_1;
        dpeg_funtype_19_t fvar_2 = closure->fvar_2;
        mpz_ptr_t fvar_3 = closure->fvar_3;
        fvar_2->count++;
        release_dpeg_closure_20(closure);
        mpz_ptr_t result;
        result = (mpz_ptr_t)h_dpeg_closure_20(bvar, fvar_1, fvar_2, fvar_3);
        return result;
}

mpz_ptr_t m_dpeg_closure_20(struct dpeg_closure_20_s * closure, dpeg__dpeg_expr_adt_t bvar){
        mpz_ptr_t fvar_1 = closure->fvar_1;
        dpeg_funtype_19_t fvar_2 = closure->fvar_2;
        mpz_ptr_t fvar_3 = closure->fvar_3;
        fvar_2->count++;
        release_dpeg_closure_20(closure);
        return h_dpeg_closure_20(bvar, fvar_1, fvar_2, fvar_3);}

mpz_ptr_t h_dpeg_closure_20(dpeg__dpeg_expr_adt_t ivar_7, mpz_ptr_t ivar_2, dpeg_funtype_19_t ivar_3, mpz_ptr_t ivar_1){
        mpz_ptr_t result;

        bool_t ivar_20;
        ivar_7->count++;
        ivar_20 = (bool_t)rec_dpeg__failp((dpeg__dpeg_expr_adt_t)ivar_7);
        if (ivar_20){
             release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_7);
             release_dpeg_funtype_19((dpeg_funtype_19_t)ivar_3);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_1);
             mpz_clear(ivar_1);
        } else {
             bool_t ivar_24;
             ivar_7->count++;
             ivar_24 = (bool_t)rec_dpeg__skipp((dpeg__dpeg_expr_adt_t)ivar_7);
             if (ivar_24){
           release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_7);
           release_dpeg_funtype_19((dpeg_funtype_19_t)ivar_3);
           //copying to mpz from mpz;
           mpz_mk_set(result, ivar_2);
           mpz_clear(ivar_2);
             } else {
           dpeg__guard_t ivar_28;
           ivar_7->count++;
           ivar_28 = (dpeg__guard_t)acc_dpeg__dpeg_expr_adt_p((dpeg__dpeg_expr_adt_t)ivar_7);
           uint32_t ivar_29;
           ivar_7->count++;
           ivar_29 = (uint32_t)acc_dpeg__dpeg_expr_adt_b((dpeg__dpeg_expr_adt_t)ivar_7);
           uint32_t ivar_30;
           ivar_30 = (uint32_t)acc_dpeg__dpeg_expr_adt_c((dpeg__dpeg_expr_adt_t)ivar_7);
           mpz_mk_set(result, ivar_3->ftbl->mptr(ivar_3, ivar_28, ivar_29, ivar_30));};};
        return result;
}

dpeg_closure_20_t new_dpeg_closure_20(void){
        static struct dpeg_funtype_17_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(dpeg_funtype_17_t, dpeg__dpeg_expr_adt_t))&f_dpeg_closure_20, .mptr = (mpz_ptr_t (*)(dpeg_funtype_17_t, dpeg__dpeg_expr_adt_t))&m_dpeg_closure_20, .rptr =  (void (*)(dpeg_funtype_17_t))&release_dpeg_closure_20, .cptr = (dpeg_funtype_17_t (*)(dpeg_funtype_17_t))&copy_dpeg_closure_20};
        dpeg_closure_20_t tmp = (dpeg_closure_20_t) safe_malloc(sizeof(struct dpeg_closure_20_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        mpz_init(tmp->fvar_3);
        return tmp;}

void release_dpeg_closure_20(dpeg_funtype_17_t closure){
        dpeg_closure_20_t x = (dpeg_closure_20_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_19((dpeg_funtype_19_t)x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_20_t copy_dpeg_closure_20(dpeg_closure_20_t x){
        dpeg_closure_20_t y = new_dpeg_closure_20();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        mpz_set(y->fvar_3, x->fvar_3);
        if (x->htbl != NULL){
            dpeg_funtype_17_htbl_t new_htbl = (dpeg_funtype_17_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_17_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_17_hashentry_t * new_data = (dpeg_funtype_17_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_17_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_17_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


dpeg_record_21_t new_dpeg_record_21(void){
        dpeg_record_21_t tmp = (dpeg_record_21_t) safe_malloc(sizeof(struct dpeg_record_21_s));
        tmp->count = 1;
        return tmp;}

void release_dpeg_record_21(dpeg_record_21_t x){
        x->count--;
        if (x->count <= 0){
         release_dpeg__guard((dpeg__guard_t)x->project_1);
         release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_dpeg_record_21_ptr(pointer_t x, type_actual_t T){
        release_dpeg_record_21((dpeg_record_21_t)x);
}

dpeg_record_21_t copy_dpeg_record_21(dpeg_record_21_t x){
        dpeg_record_21_t y = new_dpeg_record_21();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint32_t)x->project_3;
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_dpeg_record_21(dpeg_record_21_t x, dpeg_record_21_t y){
        bool_t tmp = true; tmp = tmp && equal_dpeg__guard((dpeg__guard_t)x->project_1, (dpeg__guard_t)y->project_1); tmp = tmp && x->project_2 == y->project_2; tmp = tmp && x->project_3 == y->project_3; tmp = tmp && equal_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)x->project_4, (dpeg__dpeg_expr_adt_t)y->project_4);
        return tmp;}

char * json_dpeg_record_21(dpeg_record_21_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_dpeg__guard((dpeg__guard_t)x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_dpeg_record_21_ptr(pointer_t x, pointer_t y, actual_dpeg_record_21_t T){
        return equal_dpeg_record_21((dpeg_record_21_t)x, (dpeg_record_21_t)y);
}

char * json_dpeg_record_21_ptr(pointer_t x, actual_dpeg_record_21_t T){
        return json_dpeg_record_21((dpeg_record_21_t)x);
}

actual_dpeg_record_21_t actual_dpeg_record_21(){
        actual_dpeg_record_21_t new = (actual_dpeg_record_21_t)safe_malloc(sizeof(struct actual_dpeg_record_21_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dpeg_record_21_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dpeg_record_21_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dpeg_record_21_ptr);
 

 
        return new;
 };

dpeg_record_21_t update_dpeg_record_21_project_1(dpeg_record_21_t x, dpeg__guard_t v){
        dpeg_record_21_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_dpeg__guard((dpeg__guard_t)x->project_1);};}
        else {y = copy_dpeg_record_21(x); x->count--; y->project_1->count--;};
        y->project_1 = (dpeg__guard_t)v;
        return y;}

dpeg_record_21_t update_dpeg_record_21_project_2(dpeg_record_21_t x, uint32_t v){
        dpeg_record_21_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dpeg_record_21(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

dpeg_record_21_t update_dpeg_record_21_project_3(dpeg_record_21_t x, uint32_t v){
        dpeg_record_21_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dpeg_record_21(x); x->count--;};
        y->project_3 = (uint32_t)v;
        return y;}

dpeg_record_21_t update_dpeg_record_21_project_4(dpeg_record_21_t x, dpeg__dpeg_expr_adt_t v){
        dpeg_record_21_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)x->project_4);};}
        else {y = copy_dpeg_record_21(x); x->count--; y->project_4->count--;};
        y->project_4 = (dpeg__dpeg_expr_adt_t)v;
        return y;}



void release_dpeg_funtype_22(dpeg_funtype_22_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dpeg_funtype_22_t copy_dpeg_funtype_22(dpeg_funtype_22_t x){return x->ftbl->cptr(x);}

bool_t equal_dpeg_funtype_22(dpeg_funtype_22_t x, dpeg_funtype_22_t y){
        return false;}

char* json_dpeg_funtype_22(dpeg_funtype_22_t x){char * result = safe_malloc(25); sprintf(result, "%s", "\"dpeg_funtype_22\""); return result;}


mpz_ptr_t f_dpeg_closure_23(struct dpeg_closure_23_s * closure, dpeg__dpeg_expr_adt_t bvar){
        dpeg_funtype_22_t fvar_1 = closure->fvar_1;
        dpeg_funtype_17_t fvar_2 = closure->fvar_2;
        dpeg_funtype_17_t fvar_3 = closure->fvar_3;
        fvar_1->count++;
        fvar_2->count++;
        fvar_3->count++;
        release_dpeg_closure_23(closure);
        mpz_ptr_t result;
        result = (mpz_ptr_t)h_dpeg_closure_23(bvar, fvar_1, fvar_2, fvar_3);
        return result;
}

mpz_ptr_t m_dpeg_closure_23(struct dpeg_closure_23_s * closure, dpeg__dpeg_expr_adt_t bvar){
        dpeg_funtype_22_t fvar_1 = closure->fvar_1;
        dpeg_funtype_17_t fvar_2 = closure->fvar_2;
        dpeg_funtype_17_t fvar_3 = closure->fvar_3;
        fvar_1->count++;
        fvar_2->count++;
        fvar_3->count++;
        release_dpeg_closure_23(closure);
        return h_dpeg_closure_23(bvar, fvar_1, fvar_2, fvar_3);}

mpz_ptr_t h_dpeg_closure_23(dpeg__dpeg_expr_adt_t ivar_9, dpeg_funtype_22_t ivar_5, dpeg_funtype_17_t ivar_3, dpeg_funtype_17_t ivar_1){
        mpz_ptr_t result;

        bool_t ivar_30;
        ivar_9->count++;
        ivar_30 = (bool_t)rec_dpeg__failp((dpeg__dpeg_expr_adt_t)ivar_9);
        if (ivar_30){
             release_dpeg_funtype_22((dpeg_funtype_22_t)ivar_5);
             release_dpeg_funtype_17((dpeg_funtype_17_t)ivar_3);
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_9));
        } else {
             release_dpeg_funtype_17((dpeg_funtype_17_t)ivar_1);
             bool_t ivar_40;
             ivar_9->count++;
             ivar_40 = (bool_t)rec_dpeg__skipp((dpeg__dpeg_expr_adt_t)ivar_9);
             if (ivar_40){
           release_dpeg_funtype_22((dpeg_funtype_22_t)ivar_5);
           mpz_mk_set(result, ivar_3->ftbl->fptr(ivar_3, ivar_9));
             } else {
           release_dpeg_funtype_17((dpeg_funtype_17_t)ivar_3);
           dpeg__guard_t ivar_44;
           ivar_9->count++;
           ivar_44 = (dpeg__guard_t)acc_dpeg__dpeg_expr_adt_p((dpeg__dpeg_expr_adt_t)ivar_9);
           uint32_t ivar_45;
           ivar_9->count++;
           ivar_45 = (uint32_t)acc_dpeg__dpeg_expr_adt_b((dpeg__dpeg_expr_adt_t)ivar_9);
           uint32_t ivar_46;
           ivar_9->count++;
           ivar_46 = (uint32_t)acc_dpeg__dpeg_expr_adt_c((dpeg__dpeg_expr_adt_t)ivar_9);
           mpz_mk_set(result, ivar_5->ftbl->mptr(ivar_5, ivar_44, ivar_45, ivar_46, ivar_9));};};
        return result;
}

dpeg_closure_23_t new_dpeg_closure_23(void){
        static struct dpeg_funtype_17_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(dpeg_funtype_17_t, dpeg__dpeg_expr_adt_t))&f_dpeg_closure_23, .mptr = (mpz_ptr_t (*)(dpeg_funtype_17_t, dpeg__dpeg_expr_adt_t))&m_dpeg_closure_23, .rptr =  (void (*)(dpeg_funtype_17_t))&release_dpeg_closure_23, .cptr = (dpeg_funtype_17_t (*)(dpeg_funtype_17_t))&copy_dpeg_closure_23};
        dpeg_closure_23_t tmp = (dpeg_closure_23_t) safe_malloc(sizeof(struct dpeg_closure_23_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_23(dpeg_funtype_17_t closure){
        dpeg_closure_23_t x = (dpeg_closure_23_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_22((dpeg_funtype_22_t)x->fvar_1);
         release_dpeg_funtype_17((dpeg_funtype_17_t)x->fvar_2);
         release_dpeg_funtype_17((dpeg_funtype_17_t)x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_23_t copy_dpeg_closure_23(dpeg_closure_23_t x){
        dpeg_closure_23_t y = new_dpeg_closure_23();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            dpeg_funtype_17_htbl_t new_htbl = (dpeg_funtype_17_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_17_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_17_hashentry_t * new_data = (dpeg_funtype_17_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_17_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_17_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_dpeg_funtype_24(dpeg_funtype_24_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dpeg_funtype_24_t copy_dpeg_funtype_24(dpeg_funtype_24_t x){return x->ftbl->cptr(x);}

bool_t equal_dpeg_funtype_24(dpeg_funtype_24_t x, dpeg_funtype_24_t y){
        return false;}

char* json_dpeg_funtype_24(dpeg_funtype_24_t x){char * result = safe_malloc(25); sprintf(result, "%s", "\"dpeg_funtype_24\""); return result;}

void release_dpeg_funtype_25(dpeg_funtype_25_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dpeg_funtype_25_t copy_dpeg_funtype_25(dpeg_funtype_25_t x){return x->ftbl->cptr(x);}

bool_t equal_dpeg_funtype_25(dpeg_funtype_25_t x, dpeg_funtype_25_t y){
        return false;}

char* json_dpeg_funtype_25(dpeg_funtype_25_t x){char * result = safe_malloc(25); sprintf(result, "%s", "\"dpeg_funtype_25\""); return result;}


ordstruct_adt__ordstruct_adt_t f_dpeg_closure_26(struct dpeg_closure_26_s * closure, dpeg__dpeg_expr_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t fvar_1 = closure->fvar_1;
        dpeg_funtype_25_t fvar_2 = closure->fvar_2;
        ordstruct_adt__ordstruct_adt_t fvar_3 = closure->fvar_3;
        fvar_1->count++;
        fvar_2->count++;
        fvar_3->count++;
        release_dpeg_closure_26(closure);
        ordstruct_adt__ordstruct_adt_t result;
        result = (ordstruct_adt__ordstruct_adt_t)h_dpeg_closure_26(bvar, fvar_1, fvar_2, fvar_3);
        return result;
}

ordstruct_adt__ordstruct_adt_t m_dpeg_closure_26(struct dpeg_closure_26_s * closure, dpeg__dpeg_expr_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t fvar_1 = closure->fvar_1;
        dpeg_funtype_25_t fvar_2 = closure->fvar_2;
        ordstruct_adt__ordstruct_adt_t fvar_3 = closure->fvar_3;
        fvar_1->count++;
        fvar_2->count++;
        fvar_3->count++;
        release_dpeg_closure_26(closure);
        return h_dpeg_closure_26(bvar, fvar_1, fvar_2, fvar_3);}

ordstruct_adt__ordstruct_adt_t h_dpeg_closure_26(dpeg__dpeg_expr_adt_t ivar_7, ordstruct_adt__ordstruct_adt_t ivar_2, dpeg_funtype_25_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;

        bool_t ivar_20;
        ivar_7->count++;
        ivar_20 = (bool_t)rec_dpeg__failp((dpeg__dpeg_expr_adt_t)ivar_7);
        if (ivar_20){
             release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_7);
             release_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)ivar_2);
             release_dpeg_funtype_25((dpeg_funtype_25_t)ivar_3);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1;
             if (result != NULL) result->count++;
             release_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)ivar_1);
        } else {
             release_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)ivar_1);
             bool_t ivar_24;
             ivar_7->count++;
             ivar_24 = (bool_t)rec_dpeg__skipp((dpeg__dpeg_expr_adt_t)ivar_7);
             if (ivar_24){
           release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_7);
           release_dpeg_funtype_25((dpeg_funtype_25_t)ivar_3);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           result = (ordstruct_adt__ordstruct_adt_t)ivar_2;
           if (result != NULL) result->count++;
           release_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)ivar_2);
             } else {
           release_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)ivar_2);
           dpeg__guard_t ivar_28;
           ivar_7->count++;
           ivar_28 = (dpeg__guard_t)acc_dpeg__dpeg_expr_adt_p((dpeg__dpeg_expr_adt_t)ivar_7);
           uint32_t ivar_29;
           ivar_7->count++;
           ivar_29 = (uint32_t)acc_dpeg__dpeg_expr_adt_b((dpeg__dpeg_expr_adt_t)ivar_7);
           uint32_t ivar_30;
           ivar_30 = (uint32_t)acc_dpeg__dpeg_expr_adt_c((dpeg__dpeg_expr_adt_t)ivar_7);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_28, ivar_29, ivar_30);};};
        return result;
}

dpeg_closure_26_t new_dpeg_closure_26(void){
        static struct dpeg_funtype_24_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(dpeg_funtype_24_t, dpeg__dpeg_expr_adt_t))&f_dpeg_closure_26, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(dpeg_funtype_24_t, dpeg__dpeg_expr_adt_t))&m_dpeg_closure_26, .rptr =  (void (*)(dpeg_funtype_24_t))&release_dpeg_closure_26, .cptr = (dpeg_funtype_24_t (*)(dpeg_funtype_24_t))&copy_dpeg_closure_26};
        dpeg_closure_26_t tmp = (dpeg_closure_26_t) safe_malloc(sizeof(struct dpeg_closure_26_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_26(dpeg_funtype_24_t closure){
        dpeg_closure_26_t x = (dpeg_closure_26_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)x->fvar_1);
         release_dpeg_funtype_25((dpeg_funtype_25_t)x->fvar_2);
         release_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_26_t copy_dpeg_closure_26(dpeg_closure_26_t x){
        dpeg_closure_26_t y = new_dpeg_closure_26();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            dpeg_funtype_24_htbl_t new_htbl = (dpeg_funtype_24_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_24_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_24_hashentry_t * new_data = (dpeg_funtype_24_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_24_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_24_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_dpeg_funtype_27(dpeg_funtype_27_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dpeg_funtype_27_t copy_dpeg_funtype_27(dpeg_funtype_27_t x){return x->ftbl->cptr(x);}

bool_t equal_dpeg_funtype_27(dpeg_funtype_27_t x, dpeg_funtype_27_t y){
        return false;}

char* json_dpeg_funtype_27(dpeg_funtype_27_t x){char * result = safe_malloc(25); sprintf(result, "%s", "\"dpeg_funtype_27\""); return result;}


ordstruct_adt__ordstruct_adt_t f_dpeg_closure_28(struct dpeg_closure_28_s * closure, dpeg__dpeg_expr_adt_t bvar){
        dpeg_funtype_27_t fvar_1 = closure->fvar_1;
        dpeg_funtype_24_t fvar_2 = closure->fvar_2;
        dpeg_funtype_24_t fvar_3 = closure->fvar_3;
        fvar_1->count++;
        fvar_2->count++;
        fvar_3->count++;
        release_dpeg_closure_28(closure);
        ordstruct_adt__ordstruct_adt_t result;
        result = (ordstruct_adt__ordstruct_adt_t)h_dpeg_closure_28(bvar, fvar_1, fvar_2, fvar_3);
        return result;
}

ordstruct_adt__ordstruct_adt_t m_dpeg_closure_28(struct dpeg_closure_28_s * closure, dpeg__dpeg_expr_adt_t bvar){
        dpeg_funtype_27_t fvar_1 = closure->fvar_1;
        dpeg_funtype_24_t fvar_2 = closure->fvar_2;
        dpeg_funtype_24_t fvar_3 = closure->fvar_3;
        fvar_1->count++;
        fvar_2->count++;
        fvar_3->count++;
        release_dpeg_closure_28(closure);
        return h_dpeg_closure_28(bvar, fvar_1, fvar_2, fvar_3);}

ordstruct_adt__ordstruct_adt_t h_dpeg_closure_28(dpeg__dpeg_expr_adt_t ivar_9, dpeg_funtype_27_t ivar_5, dpeg_funtype_24_t ivar_3, dpeg_funtype_24_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;

        bool_t ivar_30;
        ivar_9->count++;
        ivar_30 = (bool_t)rec_dpeg__failp((dpeg__dpeg_expr_adt_t)ivar_9);
        if (ivar_30){
             release_dpeg_funtype_27((dpeg_funtype_27_t)ivar_5);
             release_dpeg_funtype_24((dpeg_funtype_24_t)ivar_3);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_9);
        } else {
             release_dpeg_funtype_24((dpeg_funtype_24_t)ivar_1);
             bool_t ivar_40;
             ivar_9->count++;
             ivar_40 = (bool_t)rec_dpeg__skipp((dpeg__dpeg_expr_adt_t)ivar_9);
             if (ivar_40){
           release_dpeg_funtype_27((dpeg_funtype_27_t)ivar_5);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->fptr(ivar_3, ivar_9);
             } else {
           release_dpeg_funtype_24((dpeg_funtype_24_t)ivar_3);
           dpeg__guard_t ivar_44;
           ivar_9->count++;
           ivar_44 = (dpeg__guard_t)acc_dpeg__dpeg_expr_adt_p((dpeg__dpeg_expr_adt_t)ivar_9);
           uint32_t ivar_45;
           ivar_9->count++;
           ivar_45 = (uint32_t)acc_dpeg__dpeg_expr_adt_b((dpeg__dpeg_expr_adt_t)ivar_9);
           uint32_t ivar_46;
           ivar_9->count++;
           ivar_46 = (uint32_t)acc_dpeg__dpeg_expr_adt_c((dpeg__dpeg_expr_adt_t)ivar_9);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_5->ftbl->mptr(ivar_5, ivar_44, ivar_45, ivar_46, ivar_9);};};
        return result;
}

dpeg_closure_28_t new_dpeg_closure_28(void){
        static struct dpeg_funtype_24_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(dpeg_funtype_24_t, dpeg__dpeg_expr_adt_t))&f_dpeg_closure_28, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(dpeg_funtype_24_t, dpeg__dpeg_expr_adt_t))&m_dpeg_closure_28, .rptr =  (void (*)(dpeg_funtype_24_t))&release_dpeg_closure_28, .cptr = (dpeg_funtype_24_t (*)(dpeg_funtype_24_t))&copy_dpeg_closure_28};
        dpeg_closure_28_t tmp = (dpeg_closure_28_t) safe_malloc(sizeof(struct dpeg_closure_28_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_28(dpeg_funtype_24_t closure){
        dpeg_closure_28_t x = (dpeg_closure_28_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_27((dpeg_funtype_27_t)x->fvar_1);
         release_dpeg_funtype_24((dpeg_funtype_24_t)x->fvar_2);
         release_dpeg_funtype_24((dpeg_funtype_24_t)x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_28_t copy_dpeg_closure_28(dpeg_closure_28_t x){
        dpeg_closure_28_t y = new_dpeg_closure_28();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            dpeg_funtype_24_htbl_t new_htbl = (dpeg_funtype_24_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_24_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_24_hashentry_t * new_data = (dpeg_funtype_24_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_24_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_24_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


dpeg_array_29_t new_dpeg_array_29(uint32_t size){
        dpeg_array_29_t tmp = (dpeg_array_29_t) safe_malloc(sizeof(struct dpeg_array_29_s) + (size * sizeof(dpeg__dpeg_expr_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_dpeg_array_29(dpeg_array_29_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_dpeg_array_29_ptr(pointer_t x, type_actual_t T){
        release_dpeg_array_29((dpeg_array_29_t)x);
}

dpeg_array_29_t copy_dpeg_array_29(dpeg_array_29_t x){
        dpeg_array_29_t tmp = new_dpeg_array_29(x->max);
        tmp->count = 1;
        tmp->size = x->max;
        for (uint32_t i = 0; i < x->max; i++){tmp->elems[i] = x->elems[i];
                if (i < x->size) x->elems[i]->count++;};
         return tmp;}

bool_t equal_dpeg_array_29(dpeg_array_29_t x, dpeg_array_29_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_dpeg__dpeg_expr_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_dpeg_array_29(dpeg_array_29_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_dpeg__dpeg_expr_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_dpeg_array_29_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_dpeg_array_29((dpeg_array_29_t)x, (dpeg_array_29_t)y);
}

char * json_dpeg_array_29_ptr(pointer_t x, type_actual_t T){
        return json_dpeg_array_29((dpeg_array_29_t)x);
}

actual_dpeg_array_29_t actual_dpeg_array_29(){
        actual_dpeg_array_29_t new = (actual_dpeg_array_29_t)safe_malloc(sizeof(struct actual_dpeg_array_29_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dpeg_array_29_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dpeg_array_29_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dpeg_array_29_ptr);
 

 
        return new;
 };

dpeg_array_29_t update_dpeg_array_29(dpeg_array_29_t x, uint32_t i, dpeg__dpeg_expr_adt_t v){
         dpeg_array_29_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_dpeg_array_29(x);
                      x->count--;};
        dpeg__dpeg_expr_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)yelems[i]);};
         yelems[i] = v;
         return y;}

dpeg_array_29_t upgrade_dpeg_array_29(dpeg_array_29_t x, uint32_t i, dpeg__dpeg_expr_adt_t v){
         dpeg_array_29_t y;
        uint32_t xmax = x->max;
        uint32_t xsize = x->size;
         if (x->count == 1 && i < xmax){y = x;}
                 else if (i >= xmax){
                            uint32_t newmax = ((xmax < UINT32_MAX/2)  ? ((i < 2 * (xmax + 1))  ? 2 * (xmax + 1) : i + 1) : UINT32_MAX);
                            y = safe_realloc(x, sizeof(struct dpeg_array_29_s) + (newmax * sizeof(dpeg__dpeg_expr_adt_t)));
                            y->count = 1;
                            y->max = newmax;
                            for (uint32_t j = xsize; j < newmax; j++){y->elems[j] = NULL;};}
                         else {y = copy_dpeg_array_29(x);
                            x->count--;};
        dpeg__dpeg_expr_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;};
        y->size = xsize > i ? xsize : i + 1;
        if (i < xmax && yelems[i] != NULL){release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)yelems[i]);};
         yelems[i] = v;
         return y;}




dpeg__dpeg_grammar_t new_dpeg__dpeg_grammar(void){
        dpeg__dpeg_grammar_t tmp = (dpeg__dpeg_grammar_t) safe_malloc(sizeof(struct dpeg__dpeg_grammar_s));
        tmp->count = 1;
        return tmp;}

void release_dpeg__dpeg_grammar(dpeg__dpeg_grammar_t x){
        x->count--;
        if (x->count <= 0){
         release_dpeg_array_29((dpeg_array_29_t)x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_dpeg__dpeg_grammar_ptr(pointer_t x, type_actual_t T){
        release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)x);
}

dpeg__dpeg_grammar_t copy_dpeg__dpeg_grammar(dpeg__dpeg_grammar_t x){
        dpeg__dpeg_grammar_t y = new_dpeg__dpeg_grammar();
        y->length = (uint32_t)x->length;
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_dpeg__dpeg_grammar(dpeg__dpeg_grammar_t x, dpeg__dpeg_grammar_t y){
        bool_t tmp = true; tmp = tmp && x->length == y->length; tmp = tmp && equal_dpeg_array_29((dpeg_array_29_t)x->seq, (dpeg_array_29_t)y->seq);
        return tmp;}

char * json_dpeg__dpeg_grammar(dpeg__dpeg_grammar_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(18);
         sprintf(fld0, "\"length\" : ");
        tmp[0] = safe_strcat(fld0, json_uint32(x->length));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"seq\" : ");
        tmp[1] = safe_strcat(fld1, json_dpeg_array_29((dpeg_array_29_t)x->seq));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_dpeg__dpeg_grammar_ptr(pointer_t x, pointer_t y, actual_dpeg__dpeg_grammar_t T){
        return equal_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)x, (dpeg__dpeg_grammar_t)y);
}

char * json_dpeg__dpeg_grammar_ptr(pointer_t x, actual_dpeg__dpeg_grammar_t T){
        return json_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)x);
}

actual_dpeg__dpeg_grammar_t actual_dpeg__dpeg_grammar(){
        actual_dpeg__dpeg_grammar_t new = (actual_dpeg__dpeg_grammar_t)safe_malloc(sizeof(struct actual_dpeg__dpeg_grammar_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dpeg__dpeg_grammar_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dpeg__dpeg_grammar_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dpeg__dpeg_grammar_ptr);
 

 
        return new;
 };

dpeg__dpeg_grammar_t update_dpeg__dpeg_grammar_length(dpeg__dpeg_grammar_t x, uint32_t v){
        dpeg__dpeg_grammar_t y;
        if (x->count == 1){y = x;}
        else {y = copy_dpeg__dpeg_grammar(x); x->count--;};
        y->length = (uint32_t)v;
        return y;}

dpeg__dpeg_grammar_t update_dpeg__dpeg_grammar_seq(dpeg__dpeg_grammar_t x, dpeg_array_29_t v){
        dpeg__dpeg_grammar_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_dpeg_array_29((dpeg_array_29_t)x->seq);};}
        else {y = copy_dpeg__dpeg_grammar(x); x->count--; y->seq->count--;};
        y->seq = (dpeg_array_29_t)v;
        return y;}



void release_dpeg_funtype_31(dpeg_funtype_31_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dpeg_funtype_31_t copy_dpeg_funtype_31(dpeg_funtype_31_t x){return x->ftbl->cptr(x);}

bool_t equal_dpeg_funtype_31(dpeg_funtype_31_t x, dpeg_funtype_31_t y){
        return false;}

char* json_dpeg_funtype_31(dpeg_funtype_31_t x){char * result = safe_malloc(25); sprintf(result, "%s", "\"dpeg_funtype_31\""); return result;}


dpeg__result_adt_t f_dpeg_closure_32(struct dpeg_closure_32_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        uint32_t fvar_1 = closure->fvar_1;
        dpeg__dpeg_grammar_t fvar_2 = closure->fvar_2;
        fvar_2->count++;
        release_dpeg_closure_32(closure);
        dpeg__result_adt_t result;
        result = (dpeg__result_adt_t)h_dpeg_closure_32(bvar_1, bvar_2, fvar_1, fvar_2);
        return result;
}

dpeg__result_adt_t m_dpeg_closure_32(struct dpeg_closure_32_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        uint32_t fvar_1 = closure->fvar_1;
        dpeg__dpeg_grammar_t fvar_2 = closure->fvar_2;
        fvar_2->count++;
        release_dpeg_closure_32(closure);
        return h_dpeg_closure_32(bvar_1, bvar_2, fvar_1, fvar_2);}

dpeg__result_adt_t h_dpeg_closure_32(bytestrings__bytestring_t ivar_9, uint32_t ivar_10, uint32_t ivar_2, dpeg__dpeg_grammar_t ivar_1){
        dpeg__result_adt_t result;

        dpeg__dpeg_expr_adt_t ivar_12;
        dpeg_array_29_t ivar_15;
        dpeg_array_29_t ivar_20;
        ivar_20 = (dpeg_array_29_t)ivar_1->seq;
        ivar_20->count++;
        //copying to dpeg_array_29 from dpeg_array_29;
        ivar_15 = (dpeg_array_29_t)ivar_20;
        if (ivar_15 != NULL) ivar_15->count++;
        release_dpeg_array_29((dpeg_array_29_t)ivar_20);
        ivar_12 = (dpeg__dpeg_expr_adt_t)ivar_15->elems[ivar_2];
        ivar_12->count++;
        release_dpeg_array_29((dpeg_array_29_t)ivar_15);
        bool_t ivar_22;
        ivar_12->count++;
        ivar_22 = (bool_t)rec_dpeg__failp((dpeg__dpeg_expr_adt_t)ivar_12);
        if (ivar_22){
             release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_9);
             release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)ivar_1);
             release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_12);
             result = (dpeg__result_adt_t)con_dpeg__failure();
             if (result != NULL) result->count++;
        } else {
             bool_t ivar_31;
             ivar_12->count++;
             ivar_31 = (bool_t)rec_dpeg__skipp((dpeg__dpeg_expr_adt_t)ivar_12);
             if (ivar_31){
           release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_9);
           release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)ivar_1);
           release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_12);
           uint8_t ivar_30;
           ivar_30 = (uint8_t)0;
           uint32_t ivar_28;
           //copying to uint32 from uint8;
           ivar_28 = (uint32_t)ivar_30;
           result = (dpeg__result_adt_t)con_dpeg__success((uint32_t)ivar_28);
             } else {
           dpeg__guard_t ivar_35;
           ivar_12->count++;
           ivar_35 = (dpeg__guard_t)acc_dpeg__dpeg_expr_adt_p((dpeg__dpeg_expr_adt_t)ivar_12);
           uint32_t ivar_36;
           ivar_12->count++;
           ivar_36 = (uint32_t)acc_dpeg__dpeg_expr_adt_b((dpeg__dpeg_expr_adt_t)ivar_12);
           uint32_t ivar_37;
           ivar_37 = (uint32_t)acc_dpeg__dpeg_expr_adt_c((dpeg__dpeg_expr_adt_t)ivar_12);
           /* i */ uint32_t ivar_47;
           ivar_9->count++;
           ivar_47 = (uint32_t)ivar_35->ftbl->mptr(ivar_35, ivar_9, ivar_10);
           bool_t ivar_54;
           uint8_t ivar_56;
           ivar_56 = (uint8_t)0;
           ivar_54 = (ivar_47 == ivar_56);
           if (ivar_54){
           bool_t ivar_58;
           ivar_58 = (ivar_37 < ivar_2);
           if (ivar_58){
            dpeg_funtype_31_t ivar_67;
            ivar_67 = (dpeg_funtype_31_t)dpeg__matches((dpeg__dpeg_grammar_t)ivar_1, (uint32_t)ivar_37);
            result = (dpeg__result_adt_t)ivar_67->ftbl->mptr(ivar_67, ivar_9, ivar_10);
           } else {
            release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)ivar_1);
            release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_9);
            result = (dpeg__result_adt_t)con_dpeg__failure();
            if (result != NULL) result->count++;};
           } else {
           bool_t ivar_78;
           bool_t ivar_79;
           uint8_t ivar_82;
           ivar_82 = (uint8_t)1;
           ivar_79 = (ivar_47 > ivar_82);
           if (ivar_79){
            bool_t ivar_84;
            int64_t ivar_86;
            uint8_t ivar_89;
            ivar_89 = (uint8_t)1;
            ivar_86 = (int64_t)((uint64_t)ivar_47 - (uint64_t)ivar_89);
            int32_t ivar_87;
            uint32_t ivar_91;
            ivar_91 = (uint32_t)ivar_9->length;
            ivar_87 = (int32_t)((uint64_t)ivar_91 - (uint64_t)ivar_10);
            ivar_84 = (ivar_86 <= ivar_87);
            if (ivar_84){
             uint32_t ivar_97;
             ivar_97 = (uint32_t)ivar_1->length;
             ivar_78 = (ivar_36 < ivar_97);
            } else {
             ivar_78 = (bool_t) false;};
           } else {
            ivar_78 = (bool_t) false;};
           if (ivar_78){
            dpeg__result_adt_t ivar_102;
            dpeg_funtype_31_t ivar_114;
            ivar_114 = (dpeg_funtype_31_t)dpeg__matches((dpeg__dpeg_grammar_t)ivar_1, (uint32_t)ivar_36);
            int64_t ivar_125;
            uint64_t ivar_105;
            ivar_105 = (uint64_t)(ivar_10 + ivar_47);
            uint8_t ivar_106;
            ivar_106 = (uint8_t)1;
            ivar_125 = (int64_t)((uint64_t)ivar_105 - (uint64_t)ivar_106);
            uint32_t ivar_124;
            //copying to uint32 from int64;
            ivar_124 = (uint32_t)ivar_125;
            ivar_102 = (dpeg__result_adt_t)ivar_114->ftbl->mptr(ivar_114, ivar_9, ivar_124);
            bool_t ivar_141;
            ivar_102->count++;
            ivar_141 = (bool_t)rec_dpeg__successp((dpeg__result_adt_t)ivar_102);
            if (ivar_141){
             uint32_t ivar_126;
             ivar_126 = (uint32_t)acc_dpeg__result_adt_span((dpeg__result_adt_t)ivar_102);
             int64_t ivar_140;
             uint64_t ivar_131;
             ivar_131 = (uint64_t)(ivar_126 + ivar_47);
             uint8_t ivar_132;
             ivar_132 = (uint8_t)1;
             ivar_140 = (int64_t)((uint64_t)ivar_131 - (uint64_t)ivar_132);
             uint32_t ivar_138;
             //copying to uint32 from int64;
             ivar_138 = (uint32_t)ivar_140;
             result = (dpeg__result_adt_t)con_dpeg__success((uint32_t)ivar_138);
            } else {
             release_dpeg__result_adt((dpeg__result_adt_t)ivar_102);
             result = (dpeg__result_adt_t)con_dpeg__failure();
             if (result != NULL) result->count++;};
           } else {
            release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)ivar_1);
            release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_9);
            result = (dpeg__result_adt_t)con_dpeg__failure();
            if (result != NULL) result->count++;};};};};
        return result;
}

dpeg_closure_32_t new_dpeg_closure_32(void){
        static struct dpeg_funtype_31_ftbl_s ftbl = {.fptr = (dpeg__result_adt_t (*)(dpeg_funtype_31_t, dpeg_record_13_t))&f_dpeg_closure_32, .mptr = (dpeg__result_adt_t (*)(dpeg_funtype_31_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_32, .rptr =  (void (*)(dpeg_funtype_31_t))&release_dpeg_closure_32, .cptr = (dpeg_funtype_31_t (*)(dpeg_funtype_31_t))&copy_dpeg_closure_32};
        dpeg_closure_32_t tmp = (dpeg_closure_32_t) safe_malloc(sizeof(struct dpeg_closure_32_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_32(dpeg_funtype_31_t closure){
        dpeg_closure_32_t x = (dpeg_closure_32_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_32_t copy_dpeg_closure_32(dpeg_closure_32_t x){
        dpeg_closure_32_t y = new_dpeg_closure_32();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            dpeg_funtype_31_htbl_t new_htbl = (dpeg_funtype_31_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_31_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_31_hashentry_t * new_data = (dpeg_funtype_31_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_31_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_31_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_dpeg_funtype_33(dpeg_funtype_33_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dpeg_funtype_33_t copy_dpeg_funtype_33(dpeg_funtype_33_t x){return x->ftbl->cptr(x);}

uint32_t lookup_dpeg_funtype_33(dpeg_funtype_33_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        dpeg_funtype_33_hashentry_t data = htbl->data[hashindex];
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

dpeg_funtype_33_t dupdate_dpeg_funtype_33(dpeg_funtype_33_t a, uint32_t i, bool_t v){
        dpeg_funtype_33_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (dpeg_funtype_33_htbl_t)safe_malloc(sizeof(struct dpeg_funtype_33_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (dpeg_funtype_33_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct dpeg_funtype_33_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        dpeg_funtype_33_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                dpeg_funtype_33_hashentry_t * new_data = (dpeg_funtype_33_hashentry_t *)safe_malloc(new_size * sizeof(struct dpeg_funtype_33_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        keyzero = (data[j].key == 0);

                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                bool_t newkeyzero;
                                newkeyzero = (new_data[new_loc].key == 0);

                                while (!newkeyzero || new_data[new_loc].keyhash != 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        newkeyzero = (new_data[new_loc].key == 0);

                                }
                                new_data[new_loc].key = (uint32_t)data[j].key;
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (bool_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_dpeg_funtype_33(htbl, i, ihash);
        dpeg_funtype_33_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

dpeg_funtype_33_t update_dpeg_funtype_33(dpeg_funtype_33_t a, uint32_t i, bool_t v){
        if (a->count == 1){
                return dupdate_dpeg_funtype_33(a, i, v);
            } else {
                dpeg_funtype_33_t x = copy_dpeg_funtype_33(a);
                a->count--;
                return dupdate_dpeg_funtype_33(x, i, v);
            }}

bool_t equal_dpeg_funtype_33(dpeg_funtype_33_t x, dpeg_funtype_33_t y){
        return false;}

char* json_dpeg_funtype_33(dpeg_funtype_33_t x){char * result = safe_malloc(25); sprintf(result, "%s", "\"dpeg_funtype_33\""); return result;}


bool_t f_dpeg_closure_34(struct dpeg_closure_34_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_33_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_33(htbl, bvar, hash);
        dpeg_funtype_33_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_34(closure);
                result = (bool_t)entry.value;
                return result;}
        else {
            uint32_t fvar_1 = closure->fvar_1;
            dpeg__dpeg_grammar_t fvar_2 = closure->fvar_2;

            fvar_2->count++;
            release_dpeg_closure_34(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_34(bvar, fvar_1, fvar_2);
            return result;};
        }

      else {
        uint32_t fvar_1 = closure->fvar_1;
        dpeg__dpeg_grammar_t fvar_2 = closure->fvar_2;
        fvar_2->count++;
        release_dpeg_closure_34(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_34(bvar, fvar_1, fvar_2);
        return result;}
}

bool_t m_dpeg_closure_34(struct dpeg_closure_34_s * closure, uint32_t bvar){
        uint32_t fvar_1 = closure->fvar_1;
        dpeg__dpeg_grammar_t fvar_2 = closure->fvar_2;
        fvar_2->count++;
        release_dpeg_closure_34(closure);
        return h_dpeg_closure_34(bvar, fvar_1, fvar_2);}

bool_t h_dpeg_closure_34(uint32_t ivar_8, uint32_t ivar_2, dpeg__dpeg_grammar_t ivar_1){
        bool_t result;

        dpeg__dpeg_expr_adt_t ivar_10;
        dpeg_array_29_t ivar_13;
        dpeg_array_29_t ivar_18;
        ivar_18 = (dpeg_array_29_t)ivar_1->seq;
        ivar_18->count++;
        //copying to dpeg_array_29 from dpeg_array_29;
        ivar_13 = (dpeg_array_29_t)ivar_18;
        if (ivar_13 != NULL) ivar_13->count++;
        release_dpeg_array_29((dpeg_array_29_t)ivar_18);
        ivar_10 = (dpeg__dpeg_expr_adt_t)ivar_13->elems[ivar_2];
        ivar_10->count++;
        release_dpeg_array_29((dpeg_array_29_t)ivar_13);
        bool_t ivar_57;
        ivar_10->count++;
        ivar_57 = (bool_t)rec_dpeg__gltep((dpeg__dpeg_expr_adt_t)ivar_10);
        if (ivar_57){
             uint32_t ivar_22;
             ivar_22 = (uint32_t)acc_dpeg__dpeg_expr_adt_c((dpeg__dpeg_expr_adt_t)ivar_10);
             bool_t ivar_32;
             ivar_32 = (ivar_8 == ivar_22);
             if (ivar_32){
           release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)ivar_1);
           result = (bool_t) true;
             } else {
           bool_t ivar_37;
           ivar_37 = (ivar_22 < ivar_2);
           if (ivar_37){
           dpeg_funtype_33_t ivar_45;
           ivar_45 = (dpeg_funtype_33_t)dpeg__zreachable((dpeg__dpeg_grammar_t)ivar_1, (uint32_t)ivar_22);
           result = (bool_t)ivar_45->ftbl->fptr(ivar_45, ivar_8);
           } else {
           release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)ivar_1);
           result = (bool_t) false;};};
        } else {
             release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)ivar_1);
             release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_10);
             result = (bool_t) false;};
        return result;
}

dpeg_closure_34_t new_dpeg_closure_34(void){
        static struct dpeg_funtype_33_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_33_t, uint32_t))&f_dpeg_closure_34, .mptr = (bool_t (*)(dpeg_funtype_33_t, uint32_t))&m_dpeg_closure_34, .rptr =  (void (*)(dpeg_funtype_33_t))&release_dpeg_closure_34, .cptr = (dpeg_funtype_33_t (*)(dpeg_funtype_33_t))&copy_dpeg_closure_34};
        dpeg_closure_34_t tmp = (dpeg_closure_34_t) safe_malloc(sizeof(struct dpeg_closure_34_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_34(dpeg_funtype_33_t closure){
        dpeg_closure_34_t x = (dpeg_closure_34_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_34_t copy_dpeg_closure_34(dpeg_closure_34_t x){
        dpeg_closure_34_t y = new_dpeg_closure_34();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            dpeg_funtype_33_htbl_t new_htbl = (dpeg_funtype_33_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_33_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_33_hashentry_t * new_data = (dpeg_funtype_33_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_33_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_33_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_dpeg_funtype_35(dpeg_funtype_35_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dpeg_funtype_35_t copy_dpeg_funtype_35(dpeg_funtype_35_t x){return x->ftbl->cptr(x);}

bool_t equal_dpeg_funtype_35(dpeg_funtype_35_t x, dpeg_funtype_35_t y){
        return false;}

char* json_dpeg_funtype_35(dpeg_funtype_35_t x){char * result = safe_malloc(25); sprintf(result, "%s", "\"dpeg_funtype_35\""); return result;}

void release_dpeg_funtype_36(dpeg_funtype_36_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

dpeg_funtype_36_t copy_dpeg_funtype_36(dpeg_funtype_36_t x){return x->ftbl->cptr(x);}

uint32_t lookup_dpeg_funtype_36(dpeg_funtype_36_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        dpeg_funtype_36_hashentry_t data = htbl->data[hashindex];
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

dpeg_funtype_36_t dupdate_dpeg_funtype_36(dpeg_funtype_36_t a, uint8_t i, bool_t v){
        dpeg_funtype_36_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (dpeg_funtype_36_htbl_t)safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (dpeg_funtype_36_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct dpeg_funtype_36_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        dpeg_funtype_36_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *)safe_malloc(new_size * sizeof(struct dpeg_funtype_36_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        keyzero = (data[j].key == 0);

                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                bool_t newkeyzero;
                                newkeyzero = (new_data[new_loc].key == 0);

                                while (!newkeyzero || new_data[new_loc].keyhash != 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        newkeyzero = (new_data[new_loc].key == 0);

                                }
                                new_data[new_loc].key = (uint8_t)data[j].key;
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (bool_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, i, ihash);
        dpeg_funtype_36_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

dpeg_funtype_36_t update_dpeg_funtype_36(dpeg_funtype_36_t a, uint8_t i, bool_t v){
        if (a->count == 1){
                return dupdate_dpeg_funtype_36(a, i, v);
            } else {
                dpeg_funtype_36_t x = copy_dpeg_funtype_36(a);
                a->count--;
                return dupdate_dpeg_funtype_36(x, i, v);
            }}

bool_t equal_dpeg_funtype_36(dpeg_funtype_36_t x, dpeg_funtype_36_t y){
        return false;}

char* json_dpeg_funtype_36(dpeg_funtype_36_t x){char * result = safe_malloc(25); sprintf(result, "%s", "\"dpeg_funtype_36\""); return result;}


uint8_t f_dpeg_closure_37(struct dpeg_closure_37_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_36_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_37(closure);
        uint8_t result;
        result = (uint8_t)h_dpeg_closure_37(bvar_1, bvar_2, fvar_1);
        return result;
}

uint8_t m_dpeg_closure_37(struct dpeg_closure_37_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_36_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_37(closure);
        return h_dpeg_closure_37(bvar_1, bvar_2, fvar_1);}

uint8_t h_dpeg_closure_37(bytestrings__bytestring_t ivar_8, uint32_t ivar_9, dpeg_funtype_36_t ivar_1){
        uint8_t result;

        bool_t ivar_11;
        bool_t ivar_12;
        uint32_t ivar_15;
        ivar_15 = (uint32_t)ivar_8->length;
        ivar_12 = (ivar_9 < ivar_15);
        if (ivar_12){
             uint8_t ivar_32;
             dpeg_array_38_t ivar_21;
             dpeg_array_38_t ivar_26;
             ivar_26 = (dpeg_array_38_t)ivar_8->seq;
             ivar_26->count++;
             //copying to dpeg_array_38 from dpeg_array_38;
             ivar_21 = (dpeg_array_38_t)ivar_26;
             if (ivar_21 != NULL) ivar_21->count++;
             release_dpeg_array_38((dpeg_array_38_t)ivar_26);
             ivar_32 = (uint8_t)ivar_21->elems[ivar_9];
             release_dpeg_array_38((dpeg_array_38_t)ivar_21);
             ivar_11 = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_32);
        } else {
             release_dpeg_funtype_36((dpeg_funtype_36_t)ivar_1);
             release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_8);
             ivar_11 = (bool_t) false;};
        if (ivar_11){
             result = (uint8_t)2;
        } else {
             result = (uint8_t)0;};
        return result;
}

dpeg_closure_37_t new_dpeg_closure_37(void){
        static struct dpeg_funtype_35_ftbl_s ftbl = {.fptr = (uint8_t (*)(dpeg_funtype_35_t, dpeg_record_13_t))&f_dpeg_closure_37, .mptr = (uint8_t (*)(dpeg_funtype_35_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_37, .rptr =  (void (*)(dpeg_funtype_35_t))&release_dpeg_closure_37, .cptr = (dpeg_funtype_35_t (*)(dpeg_funtype_35_t))&copy_dpeg_closure_37};
        dpeg_closure_37_t tmp = (dpeg_closure_37_t) safe_malloc(sizeof(struct dpeg_closure_37_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_37(dpeg_funtype_35_t closure){
        dpeg_closure_37_t x = (dpeg_closure_37_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_36((dpeg_funtype_36_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_37_t copy_dpeg_closure_37(dpeg_closure_37_t x){
        dpeg_closure_37_t y = new_dpeg_closure_37();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg_funtype_35_htbl_t new_htbl = (dpeg_funtype_35_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_35_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_35_hashentry_t * new_data = (dpeg_funtype_35_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_35_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_35_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


dpeg_array_38_t new_dpeg_array_38(uint32_t size){
        dpeg_array_38_t tmp = (dpeg_array_38_t) safe_malloc(sizeof(struct dpeg_array_38_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_dpeg_array_38(dpeg_array_38_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_dpeg_array_38_ptr(pointer_t x, type_actual_t T){
        release_dpeg_array_38((dpeg_array_38_t)x);
}

dpeg_array_38_t copy_dpeg_array_38(dpeg_array_38_t x){
        dpeg_array_38_t tmp = new_dpeg_array_38(x->max);
        tmp->count = 1;
        tmp->size = x->max;
        for (uint32_t i = 0; i < x->max; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_dpeg_array_38(dpeg_array_38_t x, dpeg_array_38_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_dpeg_array_38(dpeg_array_38_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint8(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_dpeg_array_38_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_dpeg_array_38((dpeg_array_38_t)x, (dpeg_array_38_t)y);
}

char * json_dpeg_array_38_ptr(pointer_t x, type_actual_t T){
        return json_dpeg_array_38((dpeg_array_38_t)x);
}

actual_dpeg_array_38_t actual_dpeg_array_38(){
        actual_dpeg_array_38_t new = (actual_dpeg_array_38_t)safe_malloc(sizeof(struct actual_dpeg_array_38_s));
        new->equal_ptr = (equal_ptr_t)(*equal_dpeg_array_38_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_dpeg_array_38_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_dpeg_array_38_ptr);
 

 
        return new;
 };

dpeg_array_38_t update_dpeg_array_38(dpeg_array_38_t x, uint32_t i, uint8_t v){
        dpeg_array_38_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_dpeg_array_38(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

dpeg_array_38_t upgrade_dpeg_array_38(dpeg_array_38_t x, uint32_t i, uint8_t v){
        dpeg_array_38_t y;
        uint32_t xmax = x->max;
         if (x->count == 1 && i < xmax){y = x;}
           else if (i >= xmax){uint32_t newmax = ((xmax < UINT32_MAX/2) ? ((i < 2 * (xmax + 1)) ? 2 * (xmax + 1) : i + 1) : UINT32_MAX);
                y = safe_realloc(x, sizeof(struct dpeg_array_38_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;}
           else {y = copy_dpeg_array_38(x );
                x->count--;};
        ;
        return y;}




bool_t f_dpeg_closure_39(struct dpeg_closure_39_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_39(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_39(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_39(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_39(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_39(bvar);
        return result;}
}

bool_t m_dpeg_closure_39(struct dpeg_closure_39_s * closure, uint8_t bvar){
        release_dpeg_closure_39(closure);
        return h_dpeg_closure_39(bvar);}

bool_t h_dpeg_closure_39(uint8_t ivar_12){
        bool_t result;

        result = (bool_t)stringutils__whitespace((uint8_t)ivar_12);
        return result;
}

dpeg_closure_39_t new_dpeg_closure_39(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_39, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_39, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_39, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_39};
        dpeg_closure_39_t tmp = (dpeg_closure_39_t) safe_malloc(sizeof(struct dpeg_closure_39_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_39(dpeg_funtype_36_t closure){
        dpeg_closure_39_t x = (dpeg_closure_39_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_39_t copy_dpeg_closure_39(dpeg_closure_39_t x){
        dpeg_closure_39_t y = new_dpeg_closure_39();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_40(struct dpeg_closure_40_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_40(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_40(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_40(struct dpeg_closure_40_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_40(closure);
        return h_dpeg_closure_40(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_40(bytestrings__bytestring_t ivar_41, uint32_t ivar_42, dpeg_funtype_35_t ivar_37){
        uint32_t result;

        uint8_t ivar_38;
        ivar_38 = (uint8_t)ivar_37->ftbl->mptr(ivar_37, ivar_41, ivar_42);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_38;
        return result;
}

dpeg_closure_40_t new_dpeg_closure_40(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_40, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_40, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_40, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_40};
        dpeg_closure_40_t tmp = (dpeg_closure_40_t) safe_malloc(sizeof(struct dpeg_closure_40_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_40(dpeg__guard_t closure){
        dpeg_closure_40_t x = (dpeg_closure_40_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_40_t copy_dpeg_closure_40(dpeg_closure_40_t x){
        dpeg_closure_40_t y = new_dpeg_closure_40();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_41(struct dpeg_closure_41_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_41(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_41(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_41(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_41(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_41(bvar);
        return result;}
}

bool_t m_dpeg_closure_41(struct dpeg_closure_41_s * closure, uint8_t bvar){
        release_dpeg_closure_41(closure);
        return h_dpeg_closure_41(bvar);}

bool_t h_dpeg_closure_41(uint8_t ivar_22){
        bool_t result;

        result = (bool_t)stringutils__whitespace((uint8_t)ivar_22);
        return result;
}

dpeg_closure_41_t new_dpeg_closure_41(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_41, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_41, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_41, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_41};
        dpeg_closure_41_t tmp = (dpeg_closure_41_t) safe_malloc(sizeof(struct dpeg_closure_41_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_41(dpeg_funtype_36_t closure){
        dpeg_closure_41_t x = (dpeg_closure_41_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_41_t copy_dpeg_closure_41(dpeg_closure_41_t x){
        dpeg_closure_41_t y = new_dpeg_closure_41();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_42(struct dpeg_closure_42_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_42(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_42(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_42(struct dpeg_closure_42_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_42(closure);
        return h_dpeg_closure_42(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_42(bytestrings__bytestring_t ivar_51, uint32_t ivar_52, dpeg_funtype_35_t ivar_47){
        uint32_t result;

        uint8_t ivar_48;
        ivar_48 = (uint8_t)ivar_47->ftbl->mptr(ivar_47, ivar_51, ivar_52);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_48;
        return result;
}

dpeg_closure_42_t new_dpeg_closure_42(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_42, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_42, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_42, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_42};
        dpeg_closure_42_t tmp = (dpeg_closure_42_t) safe_malloc(sizeof(struct dpeg_closure_42_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_42(dpeg__guard_t closure){
        dpeg_closure_42_t x = (dpeg_closure_42_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_42_t copy_dpeg_closure_42(dpeg_closure_42_t x){
        dpeg_closure_42_t y = new_dpeg_closure_42();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_43(struct dpeg_closure_43_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_43(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_43(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_43(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_43(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_43(bvar);
        return result;}
}

bool_t m_dpeg_closure_43(struct dpeg_closure_43_s * closure, uint8_t bvar){
        release_dpeg_closure_43(closure);
        return h_dpeg_closure_43(bvar);}

bool_t h_dpeg_closure_43(uint8_t ivar_61){
        bool_t result;

        result = (bool_t)stringutils__digit((uint8_t)ivar_61);
        return result;
}

dpeg_closure_43_t new_dpeg_closure_43(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_43, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_43, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_43, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_43};
        dpeg_closure_43_t tmp = (dpeg_closure_43_t) safe_malloc(sizeof(struct dpeg_closure_43_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_43(dpeg_funtype_36_t closure){
        dpeg_closure_43_t x = (dpeg_closure_43_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_43_t copy_dpeg_closure_43(dpeg_closure_43_t x){
        dpeg_closure_43_t y = new_dpeg_closure_43();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_44(struct dpeg_closure_44_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_44(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_44(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_44(struct dpeg_closure_44_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_44(closure);
        return h_dpeg_closure_44(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_44(bytestrings__bytestring_t ivar_90, uint32_t ivar_91, dpeg_funtype_35_t ivar_86){
        uint32_t result;

        uint8_t ivar_87;
        ivar_87 = (uint8_t)ivar_86->ftbl->mptr(ivar_86, ivar_90, ivar_91);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_87;
        return result;
}

dpeg_closure_44_t new_dpeg_closure_44(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_44, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_44, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_44, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_44};
        dpeg_closure_44_t tmp = (dpeg_closure_44_t) safe_malloc(sizeof(struct dpeg_closure_44_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_44(dpeg__guard_t closure){
        dpeg_closure_44_t x = (dpeg_closure_44_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_44_t copy_dpeg_closure_44(dpeg_closure_44_t x){
        dpeg_closure_44_t y = new_dpeg_closure_44();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_45(struct dpeg_closure_45_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_45(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_45(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_45(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_45(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_45(bvar);
        return result;}
}

bool_t m_dpeg_closure_45(struct dpeg_closure_45_s * closure, uint8_t bvar){
        release_dpeg_closure_45(closure);
        return h_dpeg_closure_45(bvar);}

bool_t h_dpeg_closure_45(uint8_t ivar_100){
        bool_t result;

        result = (bool_t)stringutils__digit((uint8_t)ivar_100);
        return result;
}

dpeg_closure_45_t new_dpeg_closure_45(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_45, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_45, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_45, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_45};
        dpeg_closure_45_t tmp = (dpeg_closure_45_t) safe_malloc(sizeof(struct dpeg_closure_45_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_45(dpeg_funtype_36_t closure){
        dpeg_closure_45_t x = (dpeg_closure_45_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_45_t copy_dpeg_closure_45(dpeg_closure_45_t x){
        dpeg_closure_45_t y = new_dpeg_closure_45();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_46(struct dpeg_closure_46_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_46(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_46(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_46(struct dpeg_closure_46_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_46(closure);
        return h_dpeg_closure_46(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_46(bytestrings__bytestring_t ivar_129, uint32_t ivar_130, dpeg_funtype_35_t ivar_125){
        uint32_t result;

        uint8_t ivar_126;
        ivar_126 = (uint8_t)ivar_125->ftbl->mptr(ivar_125, ivar_129, ivar_130);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_126;
        return result;
}

dpeg_closure_46_t new_dpeg_closure_46(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_46, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_46, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_46, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_46};
        dpeg_closure_46_t tmp = (dpeg_closure_46_t) safe_malloc(sizeof(struct dpeg_closure_46_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_46(dpeg__guard_t closure){
        dpeg_closure_46_t x = (dpeg_closure_46_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_46_t copy_dpeg_closure_46(dpeg_closure_46_t x){
        dpeg_closure_46_t y = new_dpeg_closure_46();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_47(struct dpeg_closure_47_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_47(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_47(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_47(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_47(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_47(bvar);
        return result;}
}

bool_t m_dpeg_closure_47(struct dpeg_closure_47_s * closure, uint8_t bvar){
        release_dpeg_closure_47(closure);
        return h_dpeg_closure_47(bvar);}

bool_t h_dpeg_closure_47(uint8_t ivar_139){
        bool_t result;

        result = (bool_t)dpeg__is_plus_minus((uint8_t)ivar_139);
        return result;
}

dpeg_closure_47_t new_dpeg_closure_47(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_47, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_47, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_47, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_47};
        dpeg_closure_47_t tmp = (dpeg_closure_47_t) safe_malloc(sizeof(struct dpeg_closure_47_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_47(dpeg_funtype_36_t closure){
        dpeg_closure_47_t x = (dpeg_closure_47_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_47_t copy_dpeg_closure_47(dpeg_closure_47_t x){
        dpeg_closure_47_t y = new_dpeg_closure_47();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_48(struct dpeg_closure_48_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_48(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_48(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_48(struct dpeg_closure_48_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_48(closure);
        return h_dpeg_closure_48(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_48(bytestrings__bytestring_t ivar_168, uint32_t ivar_169, dpeg_funtype_35_t ivar_164){
        uint32_t result;

        uint8_t ivar_165;
        ivar_165 = (uint8_t)ivar_164->ftbl->mptr(ivar_164, ivar_168, ivar_169);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_165;
        return result;
}

dpeg_closure_48_t new_dpeg_closure_48(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_48, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_48, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_48, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_48};
        dpeg_closure_48_t tmp = (dpeg_closure_48_t) safe_malloc(sizeof(struct dpeg_closure_48_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_48(dpeg__guard_t closure){
        dpeg_closure_48_t x = (dpeg_closure_48_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_48_t copy_dpeg_closure_48(dpeg_closure_48_t x){
        dpeg_closure_48_t y = new_dpeg_closure_48();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_49(struct dpeg_closure_49_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_49(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_49(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_49(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_49(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_49(bvar);
        return result;}
}

bool_t m_dpeg_closure_49(struct dpeg_closure_49_s * closure, uint8_t bvar){
        release_dpeg_closure_49(closure);
        return h_dpeg_closure_49(bvar);}

bool_t h_dpeg_closure_49(uint8_t ivar_178){
        bool_t result;

        result = (bool_t)stringutils__is_eE((uint8_t)ivar_178);
        return result;
}

dpeg_closure_49_t new_dpeg_closure_49(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_49, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_49, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_49, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_49};
        dpeg_closure_49_t tmp = (dpeg_closure_49_t) safe_malloc(sizeof(struct dpeg_closure_49_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_49(dpeg_funtype_36_t closure){
        dpeg_closure_49_t x = (dpeg_closure_49_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_49_t copy_dpeg_closure_49(dpeg_closure_49_t x){
        dpeg_closure_49_t y = new_dpeg_closure_49();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_50(struct dpeg_closure_50_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_50(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_50(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_50(struct dpeg_closure_50_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_50(closure);
        return h_dpeg_closure_50(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_50(bytestrings__bytestring_t ivar_207, uint32_t ivar_208, dpeg_funtype_35_t ivar_203){
        uint32_t result;

        uint8_t ivar_204;
        ivar_204 = (uint8_t)ivar_203->ftbl->mptr(ivar_203, ivar_207, ivar_208);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_204;
        return result;
}

dpeg_closure_50_t new_dpeg_closure_50(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_50, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_50, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_50, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_50};
        dpeg_closure_50_t tmp = (dpeg_closure_50_t) safe_malloc(sizeof(struct dpeg_closure_50_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_50(dpeg__guard_t closure){
        dpeg_closure_50_t x = (dpeg_closure_50_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_50_t copy_dpeg_closure_50(dpeg_closure_50_t x){
        dpeg_closure_50_t y = new_dpeg_closure_50();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_51(struct dpeg_closure_51_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_51(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_51(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_51(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_51(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_51(bvar);
        return result;}
}

bool_t m_dpeg_closure_51(struct dpeg_closure_51_s * closure, uint8_t bvar){
        release_dpeg_closure_51(closure);
        return h_dpeg_closure_51(bvar);}

bool_t h_dpeg_closure_51(uint8_t ivar_217){
        bool_t result;

        result = (bool_t)stringutils__digit((uint8_t)ivar_217);
        return result;
}

dpeg_closure_51_t new_dpeg_closure_51(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_51, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_51, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_51, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_51};
        dpeg_closure_51_t tmp = (dpeg_closure_51_t) safe_malloc(sizeof(struct dpeg_closure_51_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_51(dpeg_funtype_36_t closure){
        dpeg_closure_51_t x = (dpeg_closure_51_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_51_t copy_dpeg_closure_51(dpeg_closure_51_t x){
        dpeg_closure_51_t y = new_dpeg_closure_51();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_52(struct dpeg_closure_52_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_52(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_52(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_52(struct dpeg_closure_52_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_52(closure);
        return h_dpeg_closure_52(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_52(bytestrings__bytestring_t ivar_246, uint32_t ivar_247, dpeg_funtype_35_t ivar_242){
        uint32_t result;

        uint8_t ivar_243;
        ivar_243 = (uint8_t)ivar_242->ftbl->mptr(ivar_242, ivar_246, ivar_247);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_243;
        return result;
}

dpeg_closure_52_t new_dpeg_closure_52(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_52, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_52, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_52, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_52};
        dpeg_closure_52_t tmp = (dpeg_closure_52_t) safe_malloc(sizeof(struct dpeg_closure_52_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_52(dpeg__guard_t closure){
        dpeg_closure_52_t x = (dpeg_closure_52_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_52_t copy_dpeg_closure_52(dpeg_closure_52_t x){
        dpeg_closure_52_t y = new_dpeg_closure_52();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_53(struct dpeg_closure_53_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_53(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_53(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_53(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_53(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_53(bvar);
        return result;}
}

bool_t m_dpeg_closure_53(struct dpeg_closure_53_s * closure, uint8_t bvar){
        release_dpeg_closure_53(closure);
        return h_dpeg_closure_53(bvar);}

bool_t h_dpeg_closure_53(uint8_t ivar_256){
        bool_t result;

        result = (bool_t)stringutils__digit((uint8_t)ivar_256);
        return result;
}

dpeg_closure_53_t new_dpeg_closure_53(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_53, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_53, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_53, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_53};
        dpeg_closure_53_t tmp = (dpeg_closure_53_t) safe_malloc(sizeof(struct dpeg_closure_53_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_53(dpeg_funtype_36_t closure){
        dpeg_closure_53_t x = (dpeg_closure_53_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_53_t copy_dpeg_closure_53(dpeg_closure_53_t x){
        dpeg_closure_53_t y = new_dpeg_closure_53();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_54(struct dpeg_closure_54_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_54(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_54(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_54(struct dpeg_closure_54_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_54(closure);
        return h_dpeg_closure_54(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_54(bytestrings__bytestring_t ivar_285, uint32_t ivar_286, dpeg_funtype_35_t ivar_281){
        uint32_t result;

        uint8_t ivar_282;
        ivar_282 = (uint8_t)ivar_281->ftbl->mptr(ivar_281, ivar_285, ivar_286);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_282;
        return result;
}

dpeg_closure_54_t new_dpeg_closure_54(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_54, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_54, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_54, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_54};
        dpeg_closure_54_t tmp = (dpeg_closure_54_t) safe_malloc(sizeof(struct dpeg_closure_54_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_54(dpeg__guard_t closure){
        dpeg_closure_54_t x = (dpeg_closure_54_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_54_t copy_dpeg_closure_54(dpeg_closure_54_t x){
        dpeg_closure_54_t y = new_dpeg_closure_54();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_55(struct dpeg_closure_55_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_55(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_55(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_55(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_55(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_55(bvar);
        return result;}
}

bool_t m_dpeg_closure_55(struct dpeg_closure_55_s * closure, uint8_t bvar){
        release_dpeg_closure_55(closure);
        return h_dpeg_closure_55(bvar);}

bool_t h_dpeg_closure_55(uint8_t ivar_295){
        bool_t result;

        result = (bool_t)stringutils__is_dot((uint8_t)ivar_295);
        return result;
}

dpeg_closure_55_t new_dpeg_closure_55(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_55, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_55, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_55, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_55};
        dpeg_closure_55_t tmp = (dpeg_closure_55_t) safe_malloc(sizeof(struct dpeg_closure_55_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_55(dpeg_funtype_36_t closure){
        dpeg_closure_55_t x = (dpeg_closure_55_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_55_t copy_dpeg_closure_55(dpeg_closure_55_t x){
        dpeg_closure_55_t y = new_dpeg_closure_55();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_56(struct dpeg_closure_56_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_56(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_56(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_56(struct dpeg_closure_56_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_56(closure);
        return h_dpeg_closure_56(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_56(bytestrings__bytestring_t ivar_324, uint32_t ivar_325, dpeg_funtype_35_t ivar_320){
        uint32_t result;

        uint8_t ivar_321;
        ivar_321 = (uint8_t)ivar_320->ftbl->mptr(ivar_320, ivar_324, ivar_325);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_321;
        return result;
}

dpeg_closure_56_t new_dpeg_closure_56(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_56, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_56, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_56, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_56};
        dpeg_closure_56_t tmp = (dpeg_closure_56_t) safe_malloc(sizeof(struct dpeg_closure_56_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_56(dpeg__guard_t closure){
        dpeg_closure_56_t x = (dpeg_closure_56_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_56_t copy_dpeg_closure_56(dpeg_closure_56_t x){
        dpeg_closure_56_t y = new_dpeg_closure_56();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_57(struct dpeg_closure_57_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_57(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_57(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_57(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_57(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_57(bvar);
        return result;}
}

bool_t m_dpeg_closure_57(struct dpeg_closure_57_s * closure, uint8_t bvar){
        release_dpeg_closure_57(closure);
        return h_dpeg_closure_57(bvar);}

bool_t h_dpeg_closure_57(uint8_t ivar_334){
        bool_t result;

        result = (bool_t)stringutils__digit((uint8_t)ivar_334);
        return result;
}

dpeg_closure_57_t new_dpeg_closure_57(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_57, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_57, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_57, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_57};
        dpeg_closure_57_t tmp = (dpeg_closure_57_t) safe_malloc(sizeof(struct dpeg_closure_57_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_57(dpeg_funtype_36_t closure){
        dpeg_closure_57_t x = (dpeg_closure_57_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_57_t copy_dpeg_closure_57(dpeg_closure_57_t x){
        dpeg_closure_57_t y = new_dpeg_closure_57();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_58(struct dpeg_closure_58_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_58(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_58(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_58(struct dpeg_closure_58_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_58(closure);
        return h_dpeg_closure_58(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_58(bytestrings__bytestring_t ivar_363, uint32_t ivar_364, dpeg_funtype_35_t ivar_359){
        uint32_t result;

        uint8_t ivar_360;
        ivar_360 = (uint8_t)ivar_359->ftbl->mptr(ivar_359, ivar_363, ivar_364);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_360;
        return result;
}

dpeg_closure_58_t new_dpeg_closure_58(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_58, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_58, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_58, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_58};
        dpeg_closure_58_t tmp = (dpeg_closure_58_t) safe_malloc(sizeof(struct dpeg_closure_58_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_58(dpeg__guard_t closure){
        dpeg_closure_58_t x = (dpeg_closure_58_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_58_t copy_dpeg_closure_58(dpeg_closure_58_t x){
        dpeg_closure_58_t y = new_dpeg_closure_58();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_59(struct dpeg_closure_59_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_59(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_59(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_59(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_59(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_59(bvar);
        return result;}
}

bool_t m_dpeg_closure_59(struct dpeg_closure_59_s * closure, uint8_t bvar){
        release_dpeg_closure_59(closure);
        return h_dpeg_closure_59(bvar);}

bool_t h_dpeg_closure_59(uint8_t ivar_373){
        bool_t result;

        result = (bool_t)stringutils__digit((uint8_t)ivar_373);
        return result;
}

dpeg_closure_59_t new_dpeg_closure_59(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_59, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_59, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_59, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_59};
        dpeg_closure_59_t tmp = (dpeg_closure_59_t) safe_malloc(sizeof(struct dpeg_closure_59_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_59(dpeg_funtype_36_t closure){
        dpeg_closure_59_t x = (dpeg_closure_59_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_59_t copy_dpeg_closure_59(dpeg_closure_59_t x){
        dpeg_closure_59_t y = new_dpeg_closure_59();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_60(struct dpeg_closure_60_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_60(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_60(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_60(struct dpeg_closure_60_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_60(closure);
        return h_dpeg_closure_60(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_60(bytestrings__bytestring_t ivar_402, uint32_t ivar_403, dpeg_funtype_35_t ivar_398){
        uint32_t result;

        uint8_t ivar_399;
        ivar_399 = (uint8_t)ivar_398->ftbl->mptr(ivar_398, ivar_402, ivar_403);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_399;
        return result;
}

dpeg_closure_60_t new_dpeg_closure_60(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_60, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_60, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_60, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_60};
        dpeg_closure_60_t tmp = (dpeg_closure_60_t) safe_malloc(sizeof(struct dpeg_closure_60_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_60(dpeg__guard_t closure){
        dpeg_closure_60_t x = (dpeg_closure_60_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_60_t copy_dpeg_closure_60(dpeg_closure_60_t x){
        dpeg_closure_60_t y = new_dpeg_closure_60();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_61(struct dpeg_closure_61_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_61(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_61(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_61(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_61(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_61(bvar);
        return result;}
}

bool_t m_dpeg_closure_61(struct dpeg_closure_61_s * closure, uint8_t bvar){
        release_dpeg_closure_61(closure);
        return h_dpeg_closure_61(bvar);}

bool_t h_dpeg_closure_61(uint8_t ivar_412){
        bool_t result;

        result = (bool_t)stringutils__is_minus((uint8_t)ivar_412);
        return result;
}

dpeg_closure_61_t new_dpeg_closure_61(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_61, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_61, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_61, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_61};
        dpeg_closure_61_t tmp = (dpeg_closure_61_t) safe_malloc(sizeof(struct dpeg_closure_61_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_61(dpeg_funtype_36_t closure){
        dpeg_closure_61_t x = (dpeg_closure_61_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_61_t copy_dpeg_closure_61(dpeg_closure_61_t x){
        dpeg_closure_61_t y = new_dpeg_closure_61();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_62(struct dpeg_closure_62_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_62(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_62(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_62(struct dpeg_closure_62_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_62(closure);
        return h_dpeg_closure_62(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_62(bytestrings__bytestring_t ivar_441, uint32_t ivar_442, dpeg_funtype_35_t ivar_437){
        uint32_t result;

        uint8_t ivar_438;
        ivar_438 = (uint8_t)ivar_437->ftbl->mptr(ivar_437, ivar_441, ivar_442);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_438;
        return result;
}

dpeg_closure_62_t new_dpeg_closure_62(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_62, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_62, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_62, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_62};
        dpeg_closure_62_t tmp = (dpeg_closure_62_t) safe_malloc(sizeof(struct dpeg_closure_62_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_62(dpeg__guard_t closure){
        dpeg_closure_62_t x = (dpeg_closure_62_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_62_t copy_dpeg_closure_62(dpeg_closure_62_t x){
        dpeg_closure_62_t y = new_dpeg_closure_62();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_63(struct dpeg_closure_63_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_63(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_63(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_63(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_63(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_63(bvar);
        return result;}
}

bool_t m_dpeg_closure_63(struct dpeg_closure_63_s * closure, uint8_t bvar){
        release_dpeg_closure_63(closure);
        return h_dpeg_closure_63(bvar);}

bool_t h_dpeg_closure_63(uint8_t ivar_15){
        bool_t result;

        result = (bool_t)stringutils__whitespace((uint8_t)ivar_15);
        return result;
}

dpeg_closure_63_t new_dpeg_closure_63(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_63, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_63, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_63, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_63};
        dpeg_closure_63_t tmp = (dpeg_closure_63_t) safe_malloc(sizeof(struct dpeg_closure_63_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_63(dpeg_funtype_36_t closure){
        dpeg_closure_63_t x = (dpeg_closure_63_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_63_t copy_dpeg_closure_63(dpeg_closure_63_t x){
        dpeg_closure_63_t y = new_dpeg_closure_63();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_64(struct dpeg_closure_64_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_64(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_64(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_64(struct dpeg_closure_64_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_64(closure);
        return h_dpeg_closure_64(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_64(bytestrings__bytestring_t ivar_44, uint32_t ivar_45, dpeg_funtype_35_t ivar_40){
        uint32_t result;

        uint8_t ivar_41;
        ivar_41 = (uint8_t)ivar_40->ftbl->mptr(ivar_40, ivar_44, ivar_45);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_41;
        return result;
}

dpeg_closure_64_t new_dpeg_closure_64(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_64, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_64, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_64, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_64};
        dpeg_closure_64_t tmp = (dpeg_closure_64_t) safe_malloc(sizeof(struct dpeg_closure_64_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_64(dpeg__guard_t closure){
        dpeg_closure_64_t x = (dpeg_closure_64_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_64_t copy_dpeg_closure_64(dpeg_closure_64_t x){
        dpeg_closure_64_t y = new_dpeg_closure_64();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_dpeg_closure_65(struct dpeg_closure_65_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        release_dpeg_closure_65(closure);
        uint8_t result;
        result = (uint8_t)h_dpeg_closure_65(bvar_1, bvar_2);
        return result;
}

uint8_t m_dpeg_closure_65(struct dpeg_closure_65_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        release_dpeg_closure_65(closure);
        return h_dpeg_closure_65(bvar_1, bvar_2);}

uint8_t h_dpeg_closure_65(bytestrings__bytestring_t ivar_52, uint32_t ivar_53){
        uint8_t result;

        result = (uint8_t)dpeg__key_null_guard((bytestrings__bytestring_t)ivar_52, (uint32_t)ivar_53);
        return result;
}

dpeg_closure_65_t new_dpeg_closure_65(void){
        static struct dpeg_funtype_35_ftbl_s ftbl = {.fptr = (uint8_t (*)(dpeg_funtype_35_t, dpeg_record_13_t))&f_dpeg_closure_65, .mptr = (uint8_t (*)(dpeg_funtype_35_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_65, .rptr =  (void (*)(dpeg_funtype_35_t))&release_dpeg_closure_65, .cptr = (dpeg_funtype_35_t (*)(dpeg_funtype_35_t))&copy_dpeg_closure_65};
        dpeg_closure_65_t tmp = (dpeg_closure_65_t) safe_malloc(sizeof(struct dpeg_closure_65_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_65(dpeg_funtype_35_t closure){
        dpeg_closure_65_t x = (dpeg_closure_65_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_65_t copy_dpeg_closure_65(dpeg_closure_65_t x){
        dpeg_closure_65_t y = new_dpeg_closure_65();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_35_htbl_t new_htbl = (dpeg_funtype_35_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_35_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_35_hashentry_t * new_data = (dpeg_funtype_35_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_35_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_35_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_66(struct dpeg_closure_66_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_66(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_66(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_66(struct dpeg_closure_66_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_66(closure);
        return h_dpeg_closure_66(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_66(bytestrings__bytestring_t ivar_77, uint32_t ivar_78, dpeg_funtype_35_t ivar_73){
        uint32_t result;

        uint8_t ivar_74;
        ivar_74 = (uint8_t)ivar_73->ftbl->mptr(ivar_73, ivar_77, ivar_78);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_74;
        return result;
}

dpeg_closure_66_t new_dpeg_closure_66(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_66, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_66, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_66, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_66};
        dpeg_closure_66_t tmp = (dpeg_closure_66_t) safe_malloc(sizeof(struct dpeg_closure_66_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_66(dpeg__guard_t closure){
        dpeg_closure_66_t x = (dpeg_closure_66_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_66_t copy_dpeg_closure_66(dpeg_closure_66_t x){
        dpeg_closure_66_t y = new_dpeg_closure_66();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_dpeg_closure_67(struct dpeg_closure_67_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        release_dpeg_closure_67(closure);
        uint8_t result;
        result = (uint8_t)h_dpeg_closure_67(bvar_1, bvar_2);
        return result;
}

uint8_t m_dpeg_closure_67(struct dpeg_closure_67_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        release_dpeg_closure_67(closure);
        return h_dpeg_closure_67(bvar_1, bvar_2);}

uint8_t h_dpeg_closure_67(bytestrings__bytestring_t ivar_85, uint32_t ivar_86){
        uint8_t result;

        result = (uint8_t)dpeg__key_false_guard((bytestrings__bytestring_t)ivar_85, (uint32_t)ivar_86);
        return result;
}

dpeg_closure_67_t new_dpeg_closure_67(void){
        static struct dpeg_funtype_35_ftbl_s ftbl = {.fptr = (uint8_t (*)(dpeg_funtype_35_t, dpeg_record_13_t))&f_dpeg_closure_67, .mptr = (uint8_t (*)(dpeg_funtype_35_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_67, .rptr =  (void (*)(dpeg_funtype_35_t))&release_dpeg_closure_67, .cptr = (dpeg_funtype_35_t (*)(dpeg_funtype_35_t))&copy_dpeg_closure_67};
        dpeg_closure_67_t tmp = (dpeg_closure_67_t) safe_malloc(sizeof(struct dpeg_closure_67_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_67(dpeg_funtype_35_t closure){
        dpeg_closure_67_t x = (dpeg_closure_67_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_67_t copy_dpeg_closure_67(dpeg_closure_67_t x){
        dpeg_closure_67_t y = new_dpeg_closure_67();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_35_htbl_t new_htbl = (dpeg_funtype_35_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_35_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_35_hashentry_t * new_data = (dpeg_funtype_35_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_35_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_35_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_68(struct dpeg_closure_68_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_68(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_68(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_68(struct dpeg_closure_68_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_68(closure);
        return h_dpeg_closure_68(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_68(bytestrings__bytestring_t ivar_110, uint32_t ivar_111, dpeg_funtype_35_t ivar_106){
        uint32_t result;

        uint8_t ivar_107;
        ivar_107 = (uint8_t)ivar_106->ftbl->mptr(ivar_106, ivar_110, ivar_111);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_107;
        return result;
}

dpeg_closure_68_t new_dpeg_closure_68(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_68, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_68, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_68, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_68};
        dpeg_closure_68_t tmp = (dpeg_closure_68_t) safe_malloc(sizeof(struct dpeg_closure_68_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_68(dpeg__guard_t closure){
        dpeg_closure_68_t x = (dpeg_closure_68_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_68_t copy_dpeg_closure_68(dpeg_closure_68_t x){
        dpeg_closure_68_t y = new_dpeg_closure_68();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_dpeg_closure_69(struct dpeg_closure_69_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        release_dpeg_closure_69(closure);
        uint8_t result;
        result = (uint8_t)h_dpeg_closure_69(bvar_1, bvar_2);
        return result;
}

uint8_t m_dpeg_closure_69(struct dpeg_closure_69_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        release_dpeg_closure_69(closure);
        return h_dpeg_closure_69(bvar_1, bvar_2);}

uint8_t h_dpeg_closure_69(bytestrings__bytestring_t ivar_118, uint32_t ivar_119){
        uint8_t result;

        result = (uint8_t)dpeg__key_true_guard((bytestrings__bytestring_t)ivar_118, (uint32_t)ivar_119);
        return result;
}

dpeg_closure_69_t new_dpeg_closure_69(void){
        static struct dpeg_funtype_35_ftbl_s ftbl = {.fptr = (uint8_t (*)(dpeg_funtype_35_t, dpeg_record_13_t))&f_dpeg_closure_69, .mptr = (uint8_t (*)(dpeg_funtype_35_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_69, .rptr =  (void (*)(dpeg_funtype_35_t))&release_dpeg_closure_69, .cptr = (dpeg_funtype_35_t (*)(dpeg_funtype_35_t))&copy_dpeg_closure_69};
        dpeg_closure_69_t tmp = (dpeg_closure_69_t) safe_malloc(sizeof(struct dpeg_closure_69_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_69(dpeg_funtype_35_t closure){
        dpeg_closure_69_t x = (dpeg_closure_69_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_69_t copy_dpeg_closure_69(dpeg_closure_69_t x){
        dpeg_closure_69_t y = new_dpeg_closure_69();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_35_htbl_t new_htbl = (dpeg_funtype_35_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_35_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_35_hashentry_t * new_data = (dpeg_funtype_35_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_35_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_35_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_70(struct dpeg_closure_70_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_70(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_70(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_70(struct dpeg_closure_70_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_70(closure);
        return h_dpeg_closure_70(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_70(bytestrings__bytestring_t ivar_143, uint32_t ivar_144, dpeg_funtype_35_t ivar_139){
        uint32_t result;

        uint8_t ivar_140;
        ivar_140 = (uint8_t)ivar_139->ftbl->mptr(ivar_139, ivar_143, ivar_144);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_140;
        return result;
}

dpeg_closure_70_t new_dpeg_closure_70(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_70, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_70, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_70, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_70};
        dpeg_closure_70_t tmp = (dpeg_closure_70_t) safe_malloc(sizeof(struct dpeg_closure_70_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_70(dpeg__guard_t closure){
        dpeg_closure_70_t x = (dpeg_closure_70_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_70_t copy_dpeg_closure_70(dpeg_closure_70_t x){
        dpeg_closure_70_t y = new_dpeg_closure_70();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_71(struct dpeg_closure_71_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_71(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_71(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_71(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_71(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_71(bvar);
        return result;}
}

bool_t m_dpeg_closure_71(struct dpeg_closure_71_s * closure, uint8_t bvar){
        release_dpeg_closure_71(closure);
        return h_dpeg_closure_71(bvar);}

bool_t h_dpeg_closure_71(uint8_t ivar_17){
        bool_t result;

        result = (bool_t)stringutils__whitespace((uint8_t)ivar_17);
        return result;
}

dpeg_closure_71_t new_dpeg_closure_71(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_71, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_71, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_71, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_71};
        dpeg_closure_71_t tmp = (dpeg_closure_71_t) safe_malloc(sizeof(struct dpeg_closure_71_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_71(dpeg_funtype_36_t closure){
        dpeg_closure_71_t x = (dpeg_closure_71_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_71_t copy_dpeg_closure_71(dpeg_closure_71_t x){
        dpeg_closure_71_t y = new_dpeg_closure_71();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_72(struct dpeg_closure_72_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_72(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_72(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_72(struct dpeg_closure_72_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_72(closure);
        return h_dpeg_closure_72(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_72(bytestrings__bytestring_t ivar_46, uint32_t ivar_47, dpeg_funtype_35_t ivar_42){
        uint32_t result;

        uint8_t ivar_43;
        ivar_43 = (uint8_t)ivar_42->ftbl->mptr(ivar_42, ivar_46, ivar_47);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_43;
        return result;
}

dpeg_closure_72_t new_dpeg_closure_72(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_72, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_72, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_72, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_72};
        dpeg_closure_72_t tmp = (dpeg_closure_72_t) safe_malloc(sizeof(struct dpeg_closure_72_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_72(dpeg__guard_t closure){
        dpeg_closure_72_t x = (dpeg_closure_72_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_72_t copy_dpeg_closure_72(dpeg_closure_72_t x){
        dpeg_closure_72_t y = new_dpeg_closure_72();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_73(struct dpeg_closure_73_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_73(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_73(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_73(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_73(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_73(bvar);
        return result;}
}

bool_t m_dpeg_closure_73(struct dpeg_closure_73_s * closure, uint8_t bvar){
        release_dpeg_closure_73(closure);
        return h_dpeg_closure_73(bvar);}

bool_t h_dpeg_closure_73(uint8_t ivar_56){
        bool_t result;

        result = (bool_t)stringutils__any((uint8_t)ivar_56);
        return result;
}

dpeg_closure_73_t new_dpeg_closure_73(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_73, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_73, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_73, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_73};
        dpeg_closure_73_t tmp = (dpeg_closure_73_t) safe_malloc(sizeof(struct dpeg_closure_73_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_73(dpeg_funtype_36_t closure){
        dpeg_closure_73_t x = (dpeg_closure_73_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_73_t copy_dpeg_closure_73(dpeg_closure_73_t x){
        dpeg_closure_73_t y = new_dpeg_closure_73();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_74(struct dpeg_closure_74_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_74(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_74(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_74(struct dpeg_closure_74_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_74(closure);
        return h_dpeg_closure_74(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_74(bytestrings__bytestring_t ivar_85, uint32_t ivar_86, dpeg_funtype_35_t ivar_81){
        uint32_t result;

        uint8_t ivar_82;
        ivar_82 = (uint8_t)ivar_81->ftbl->mptr(ivar_81, ivar_85, ivar_86);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_82;
        return result;
}

dpeg_closure_74_t new_dpeg_closure_74(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_74, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_74, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_74, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_74};
        dpeg_closure_74_t tmp = (dpeg_closure_74_t) safe_malloc(sizeof(struct dpeg_closure_74_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_74(dpeg__guard_t closure){
        dpeg_closure_74_t x = (dpeg_closure_74_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_74_t copy_dpeg_closure_74(dpeg_closure_74_t x){
        dpeg_closure_74_t y = new_dpeg_closure_74();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_75(struct dpeg_closure_75_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_75(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_75(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_75(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_75(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_75(bvar);
        return result;}
}

bool_t m_dpeg_closure_75(struct dpeg_closure_75_s * closure, uint8_t bvar){
        release_dpeg_closure_75(closure);
        return h_dpeg_closure_75(bvar);}

bool_t h_dpeg_closure_75(uint8_t ivar_95){
        bool_t result;

        result = (bool_t)stringutils__is_quote((uint8_t)ivar_95);
        return result;
}

dpeg_closure_75_t new_dpeg_closure_75(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_75, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_75, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_75, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_75};
        dpeg_closure_75_t tmp = (dpeg_closure_75_t) safe_malloc(sizeof(struct dpeg_closure_75_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_75(dpeg_funtype_36_t closure){
        dpeg_closure_75_t x = (dpeg_closure_75_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_75_t copy_dpeg_closure_75(dpeg_closure_75_t x){
        dpeg_closure_75_t y = new_dpeg_closure_75();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_76(struct dpeg_closure_76_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_76(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_76(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_76(struct dpeg_closure_76_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_76(closure);
        return h_dpeg_closure_76(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_76(bytestrings__bytestring_t ivar_124, uint32_t ivar_125, dpeg_funtype_35_t ivar_120){
        uint32_t result;

        uint8_t ivar_121;
        ivar_121 = (uint8_t)ivar_120->ftbl->mptr(ivar_120, ivar_124, ivar_125);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_121;
        return result;
}

dpeg_closure_76_t new_dpeg_closure_76(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_76, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_76, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_76, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_76};
        dpeg_closure_76_t tmp = (dpeg_closure_76_t) safe_malloc(sizeof(struct dpeg_closure_76_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_76(dpeg__guard_t closure){
        dpeg_closure_76_t x = (dpeg_closure_76_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_76_t copy_dpeg_closure_76(dpeg_closure_76_t x){
        dpeg_closure_76_t y = new_dpeg_closure_76();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_77(struct dpeg_closure_77_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_77(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_77(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_77(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_77(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_77(bvar);
        return result;}
}

bool_t m_dpeg_closure_77(struct dpeg_closure_77_s * closure, uint8_t bvar){
        release_dpeg_closure_77(closure);
        return h_dpeg_closure_77(bvar);}

bool_t h_dpeg_closure_77(uint8_t ivar_134){
        bool_t result;

        result = (bool_t)stringutils__escapable((uint8_t)ivar_134);
        return result;
}

dpeg_closure_77_t new_dpeg_closure_77(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_77, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_77, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_77, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_77};
        dpeg_closure_77_t tmp = (dpeg_closure_77_t) safe_malloc(sizeof(struct dpeg_closure_77_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_77(dpeg_funtype_36_t closure){
        dpeg_closure_77_t x = (dpeg_closure_77_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_77_t copy_dpeg_closure_77(dpeg_closure_77_t x){
        dpeg_closure_77_t y = new_dpeg_closure_77();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_78(struct dpeg_closure_78_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_78(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_78(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_78(struct dpeg_closure_78_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_78(closure);
        return h_dpeg_closure_78(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_78(bytestrings__bytestring_t ivar_163, uint32_t ivar_164, dpeg_funtype_35_t ivar_159){
        uint32_t result;

        uint8_t ivar_160;
        ivar_160 = (uint8_t)ivar_159->ftbl->mptr(ivar_159, ivar_163, ivar_164);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_160;
        return result;
}

dpeg_closure_78_t new_dpeg_closure_78(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_78, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_78, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_78, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_78};
        dpeg_closure_78_t tmp = (dpeg_closure_78_t) safe_malloc(sizeof(struct dpeg_closure_78_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_78(dpeg__guard_t closure){
        dpeg_closure_78_t x = (dpeg_closure_78_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_78_t copy_dpeg_closure_78(dpeg_closure_78_t x){
        dpeg_closure_78_t y = new_dpeg_closure_78();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_79(struct dpeg_closure_79_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_79(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_79(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_79(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_79(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_79(bvar);
        return result;}
}

bool_t m_dpeg_closure_79(struct dpeg_closure_79_s * closure, uint8_t bvar){
        release_dpeg_closure_79(closure);
        return h_dpeg_closure_79(bvar);}

bool_t h_dpeg_closure_79(uint8_t ivar_173){
        bool_t result;

        result = (bool_t)stringutils__is_backslash((uint8_t)ivar_173);
        return result;
}

dpeg_closure_79_t new_dpeg_closure_79(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_79, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_79, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_79, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_79};
        dpeg_closure_79_t tmp = (dpeg_closure_79_t) safe_malloc(sizeof(struct dpeg_closure_79_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_79(dpeg_funtype_36_t closure){
        dpeg_closure_79_t x = (dpeg_closure_79_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_79_t copy_dpeg_closure_79(dpeg_closure_79_t x){
        dpeg_closure_79_t y = new_dpeg_closure_79();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_80(struct dpeg_closure_80_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_80(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_80(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_80(struct dpeg_closure_80_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_80(closure);
        return h_dpeg_closure_80(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_80(bytestrings__bytestring_t ivar_202, uint32_t ivar_203, dpeg_funtype_35_t ivar_198){
        uint32_t result;

        uint8_t ivar_199;
        ivar_199 = (uint8_t)ivar_198->ftbl->mptr(ivar_198, ivar_202, ivar_203);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_199;
        return result;
}

dpeg_closure_80_t new_dpeg_closure_80(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_80, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_80, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_80, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_80};
        dpeg_closure_80_t tmp = (dpeg_closure_80_t) safe_malloc(sizeof(struct dpeg_closure_80_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_80(dpeg__guard_t closure){
        dpeg_closure_80_t x = (dpeg_closure_80_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_80_t copy_dpeg_closure_80(dpeg_closure_80_t x){
        dpeg_closure_80_t y = new_dpeg_closure_80();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_dpeg_closure_81(struct dpeg_closure_81_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        dpeg_funtype_36_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_dpeg_funtype_36(htbl, bvar, hash);
        dpeg_funtype_36_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
                bool_t result;
                release_dpeg_closure_81(closure);
                result = (bool_t)entry.value;
                return result;}
        else {

            release_dpeg_closure_81(closure);
            bool_t result;
            result = (bool_t)h_dpeg_closure_81(bvar);
            return result;};
        }

      else {
        release_dpeg_closure_81(closure);
        bool_t result;
        result = (bool_t)h_dpeg_closure_81(bvar);
        return result;}
}

bool_t m_dpeg_closure_81(struct dpeg_closure_81_s * closure, uint8_t bvar){
        release_dpeg_closure_81(closure);
        return h_dpeg_closure_81(bvar);}

bool_t h_dpeg_closure_81(uint8_t ivar_212){
        bool_t result;

        result = (bool_t)stringutils__is_quote((uint8_t)ivar_212);
        return result;
}

dpeg_closure_81_t new_dpeg_closure_81(void){
        static struct dpeg_funtype_36_ftbl_s ftbl = {.fptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&f_dpeg_closure_81, .mptr = (bool_t (*)(dpeg_funtype_36_t, uint8_t))&m_dpeg_closure_81, .rptr =  (void (*)(dpeg_funtype_36_t))&release_dpeg_closure_81, .cptr = (dpeg_funtype_36_t (*)(dpeg_funtype_36_t))&copy_dpeg_closure_81};
        dpeg_closure_81_t tmp = (dpeg_closure_81_t) safe_malloc(sizeof(struct dpeg_closure_81_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_81(dpeg_funtype_36_t closure){
        dpeg_closure_81_t x = (dpeg_closure_81_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_81_t copy_dpeg_closure_81(dpeg_closure_81_t x){
        dpeg_closure_81_t y = new_dpeg_closure_81();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            dpeg_funtype_36_htbl_t new_htbl = (dpeg_funtype_36_htbl_t) safe_malloc(sizeof(struct dpeg_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg_funtype_36_hashentry_t * new_data = (dpeg_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_dpeg_closure_82(struct dpeg_closure_82_s * closure, dpeg_record_13_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        release_dpeg_record_13(bvar);
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_82(closure);
        uint32_t result;
        result = (uint32_t)h_dpeg_closure_82(bvar_1, bvar_2, fvar_1);
        return result;
}

uint32_t m_dpeg_closure_82(struct dpeg_closure_82_s * closure, bytestrings__bytestring_t bvar_1, uint32_t bvar_2){
        dpeg_funtype_35_t fvar_1 = closure->fvar_1;
        fvar_1->count++;
        release_dpeg_closure_82(closure);
        return h_dpeg_closure_82(bvar_1, bvar_2, fvar_1);}

uint32_t h_dpeg_closure_82(bytestrings__bytestring_t ivar_241, uint32_t ivar_242, dpeg_funtype_35_t ivar_237){
        uint32_t result;

        uint8_t ivar_238;
        ivar_238 = (uint8_t)ivar_237->ftbl->mptr(ivar_237, ivar_241, ivar_242);
        //copying to uint32 from uint8;
        result = (uint32_t)ivar_238;
        return result;
}

dpeg_closure_82_t new_dpeg_closure_82(void){
        static struct dpeg__guard_ftbl_s ftbl = {.fptr = (uint32_t (*)(dpeg__guard_t, dpeg_record_13_t))&f_dpeg_closure_82, .mptr = (uint32_t (*)(dpeg__guard_t, bytestrings__bytestring_t, uint32_t))&m_dpeg_closure_82, .rptr =  (void (*)(dpeg__guard_t))&release_dpeg_closure_82, .cptr = (dpeg__guard_t (*)(dpeg__guard_t))&copy_dpeg_closure_82};
        dpeg_closure_82_t tmp = (dpeg_closure_82_t) safe_malloc(sizeof(struct dpeg_closure_82_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_dpeg_closure_82(dpeg__guard_t closure){
        dpeg_closure_82_t x = (dpeg_closure_82_t)closure;
        x->count--;
        if (x->count <= 0){
         release_dpeg_funtype_35((dpeg_funtype_35_t)x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

dpeg_closure_82_t copy_dpeg_closure_82(dpeg_closure_82_t x){
        dpeg_closure_82_t y = new_dpeg_closure_82();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            dpeg__guard_htbl_t new_htbl = (dpeg__guard_htbl_t) safe_malloc(sizeof(struct dpeg__guard_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            dpeg__guard_hashentry_t * new_data = (dpeg__guard_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct dpeg__guard_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct dpeg__guard_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

bool_t rec_dpeg__failurep(dpeg__result_adt_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->dpeg__result_adt_index;
        release_dpeg__result_adt((dpeg__result_adt_t)ivar_1);
        result = (ivar_2 == ivar_3);
        
        
        return result;
}

bool_t rec_dpeg__successp(dpeg__result_adt_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->dpeg__result_adt_index;
        release_dpeg__result_adt((dpeg__result_adt_t)ivar_1);
        result = (ivar_2 == ivar_3);
        
        
        return result;
}

dpeg__success_t update_dpeg__result_adt_span(dpeg__result_adt_t ivar_1, uint32_t ivar_3){
        dpeg__success_t  result;

        dpeg__success_t ivar_2;
        //copying to dpeg__success from dpeg__result_adt;
        ivar_2 = (dpeg__success_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_dpeg__result_adt((dpeg__result_adt_t)ivar_1);
        result = (dpeg__success_t)update_dpeg__success_span(ivar_2, ivar_3);
        
        result->count++;
        return result;
}

uint32_t acc_dpeg__result_adt_span(dpeg__result_adt_t ivar_1){
        uint32_t  result;

        dpeg__success_t ivar_2;
        //copying to dpeg__success from dpeg__result_adt;
        ivar_2 = (dpeg__success_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_dpeg__result_adt((dpeg__result_adt_t)ivar_1);
        result = (uint32_t)ivar_2->span;
        release_dpeg__success((dpeg__success_t)ivar_2);
        
        
        return result;
}

dpeg__result_adt_t con_dpeg__failure(void){
        dpeg__result_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        dpeg__result_adt_t tmp34456 = new_dpeg__result_adt();;
        result = (dpeg__result_adt_t)tmp34456;
        tmp34456->dpeg__result_adt_index = (uint8_t)ivar_1;
        defined = true;};
        
        result->count++;
        return result;
}

dpeg__result_adt_t con_dpeg__success(uint32_t ivar_2){
        dpeg__result_adt_t  result;

        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        dpeg__success_t tmp34457 = new_dpeg__success();;
        result = (dpeg__result_adt_t)tmp34457;
        tmp34457->dpeg__result_adt_index = (uint8_t)ivar_1;
        tmp34457->span = (uint32_t)ivar_2;
        
        result->count++;
        return result;
}

uint8_t dpeg__ord_1(dpeg__result_adt_t ivar_1){
        uint8_t  result;

        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)rec_dpeg__failurep((dpeg__result_adt_t)ivar_1);
        if (ivar_3){
             result = (uint8_t)0;
        } else {
             result = (uint8_t)1;};
        
        
        return result;
}

bool_t dpeg__subterm_1(dpeg__result_adt_t ivar_1, dpeg__result_adt_t ivar_2){
        bool_t  result;

        result = (bool_t) equal_dpeg__result_adt(ivar_1, ivar_2);
        
        
        return result;
}

bool_t dpeg__doublelessp_1(dpeg__result_adt_t ivar_1, dpeg__result_adt_t ivar_2){
        bool_t  result;

        result = (bool_t) false;
        
        
        return result;
}

dpeg_funtype_2_t dpeg__reduce_nat_1(mpz_ptr_t ivar_1, dpeg_funtype_3_t ivar_2){
        dpeg_funtype_2_t  result;

        dpeg_closure_4_t cl34460;
        cl34460 = new_dpeg_closure_4();
        cl34460->fvar_1 = (dpeg_funtype_3_t)ivar_2;
        if (cl34460->fvar_1 != NULL) cl34460->fvar_1->count++;
        mpz_set(cl34460->fvar_2, ivar_1);
        release_dpeg_funtype_3((dpeg_funtype_3_t)ivar_2);
        result = (dpeg_funtype_2_t)cl34460;
        
        result->count++;
        return result;
}

dpeg_funtype_2_t dpeg__REDUCE_nat_1(dpeg_funtype_2_t ivar_1, dpeg_funtype_6_t ivar_3){
        dpeg_funtype_2_t  result;

        dpeg_closure_7_t cl34470;
        cl34470 = new_dpeg_closure_7();
        cl34470->fvar_1 = (dpeg_funtype_2_t)ivar_1;
        if (cl34470->fvar_1 != NULL) cl34470->fvar_1->count++;
        cl34470->fvar_2 = (dpeg_funtype_6_t)ivar_3;
        if (cl34470->fvar_2 != NULL) cl34470->fvar_2->count++;
        release_dpeg_funtype_6((dpeg_funtype_6_t)ivar_3);
        release_dpeg_funtype_2((dpeg_funtype_2_t)ivar_1);
        result = (dpeg_funtype_2_t)cl34470;
        
        result->count++;
        return result;
}

dpeg_funtype_8_t dpeg__reduce_ordinal_1(ordstruct_adt__ordstruct_adt_t ivar_1, dpeg_funtype_9_t ivar_2){
        dpeg_funtype_8_t  result;

        dpeg_closure_10_t cl34472;
        cl34472 = new_dpeg_closure_10();
        cl34472->fvar_1 = (dpeg_funtype_9_t)ivar_2;
        if (cl34472->fvar_1 != NULL) cl34472->fvar_1->count++;
        cl34472->fvar_2 = (ordstruct_adt__ordstruct_adt_t)ivar_1;
        if (cl34472->fvar_2 != NULL) cl34472->fvar_2->count++;
        release_dpeg_funtype_9((dpeg_funtype_9_t)ivar_2);
        release_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)ivar_1);
        result = (dpeg_funtype_8_t)cl34472;
        
        result->count++;
        return result;
}

dpeg_funtype_8_t dpeg__REDUCE_ordinal_1(dpeg_funtype_8_t ivar_1, dpeg_funtype_11_t ivar_3){
        dpeg_funtype_8_t  result;

        dpeg_closure_12_t cl34482;
        cl34482 = new_dpeg_closure_12();
        cl34482->fvar_1 = (dpeg_funtype_8_t)ivar_1;
        if (cl34482->fvar_1 != NULL) cl34482->fvar_1->count++;
        cl34482->fvar_2 = (dpeg_funtype_11_t)ivar_3;
        if (cl34482->fvar_2 != NULL) cl34482->fvar_2->count++;
        release_dpeg_funtype_11((dpeg_funtype_11_t)ivar_3);
        release_dpeg_funtype_8((dpeg_funtype_8_t)ivar_1);
        result = (dpeg_funtype_8_t)cl34482;
        
        result->count++;
        return result;
}

bool_t rec_dpeg__failp(dpeg__dpeg_expr_adt_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->dpeg__dpeg_expr_adt_index;
        release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_1);
        result = (ivar_2 == ivar_3);
        
        
        return result;
}

bool_t rec_dpeg__skipp(dpeg__dpeg_expr_adt_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->dpeg__dpeg_expr_adt_index;
        release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_1);
        result = (ivar_2 == ivar_3);
        
        
        return result;
}

bool_t rec_dpeg__gltep(dpeg__dpeg_expr_adt_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)2;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->dpeg__dpeg_expr_adt_index;
        release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_1);
        result = (ivar_2 == ivar_3);
        
        
        return result;
}

dpeg__glte_t update_dpeg__dpeg_expr_adt_p(dpeg__dpeg_expr_adt_t ivar_1, dpeg__guard_t ivar_3){
        dpeg__glte_t  result;

        dpeg__glte_t ivar_2;
        //copying to dpeg__glte from dpeg__dpeg_expr_adt;
        ivar_2 = (dpeg__glte_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_1);
        result = (dpeg__glte_t)update_dpeg__glte_p(ivar_2, ivar_3);
        
        result->count++;
        return result;
}

dpeg__guard_t acc_dpeg__dpeg_expr_adt_p(dpeg__dpeg_expr_adt_t ivar_1){
        dpeg__guard_t  result;

        dpeg__glte_t ivar_2;
        //copying to dpeg__glte from dpeg__dpeg_expr_adt;
        ivar_2 = (dpeg__glte_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_1);
        result = (dpeg__guard_t)ivar_2->p;
        result->count++;
        release_dpeg__glte((dpeg__glte_t)ivar_2);
        
        result->count++;
        return result;
}

dpeg__glte_t update_dpeg__dpeg_expr_adt_b(dpeg__dpeg_expr_adt_t ivar_1, uint32_t ivar_3){
        dpeg__glte_t  result;

        dpeg__glte_t ivar_2;
        //copying to dpeg__glte from dpeg__dpeg_expr_adt;
        ivar_2 = (dpeg__glte_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_1);
        result = (dpeg__glte_t)update_dpeg__glte_b(ivar_2, ivar_3);
        
        result->count++;
        return result;
}

uint32_t acc_dpeg__dpeg_expr_adt_b(dpeg__dpeg_expr_adt_t ivar_1){
        uint32_t  result;

        dpeg__glte_t ivar_2;
        //copying to dpeg__glte from dpeg__dpeg_expr_adt;
        ivar_2 = (dpeg__glte_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_1);
        result = (uint32_t)ivar_2->b;
        release_dpeg__glte((dpeg__glte_t)ivar_2);
        
        
        return result;
}

dpeg__glte_t update_dpeg__dpeg_expr_adt_c(dpeg__dpeg_expr_adt_t ivar_1, uint32_t ivar_3){
        dpeg__glte_t  result;

        dpeg__glte_t ivar_2;
        //copying to dpeg__glte from dpeg__dpeg_expr_adt;
        ivar_2 = (dpeg__glte_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_1);
        result = (dpeg__glte_t)update_dpeg__glte_c(ivar_2, ivar_3);
        
        result->count++;
        return result;
}

uint32_t acc_dpeg__dpeg_expr_adt_c(dpeg__dpeg_expr_adt_t ivar_1){
        uint32_t  result;

        dpeg__glte_t ivar_2;
        //copying to dpeg__glte from dpeg__dpeg_expr_adt;
        ivar_2 = (dpeg__glte_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_1);
        result = (uint32_t)ivar_2->c;
        release_dpeg__glte((dpeg__glte_t)ivar_2);
        
        
        return result;
}

dpeg__dpeg_expr_adt_t con_dpeg__fail(void){
        dpeg__dpeg_expr_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        dpeg__dpeg_expr_adt_t tmp34492 = new_dpeg__dpeg_expr_adt();;
        result = (dpeg__dpeg_expr_adt_t)tmp34492;
        tmp34492->dpeg__dpeg_expr_adt_index = (uint8_t)ivar_1;
        defined = true;};
        
        result->count++;
        return result;
}

dpeg__dpeg_expr_adt_t con_dpeg__skip(void){
        dpeg__dpeg_expr_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        dpeg__dpeg_expr_adt_t tmp34493 = new_dpeg__dpeg_expr_adt();;
        result = (dpeg__dpeg_expr_adt_t)tmp34493;
        tmp34493->dpeg__dpeg_expr_adt_index = (uint8_t)ivar_1;
        defined = true;};
        
        result->count++;
        return result;
}

dpeg__dpeg_expr_adt_t con_dpeg__glte(dpeg__guard_t ivar_2, uint32_t ivar_3, uint32_t ivar_4){
        dpeg__dpeg_expr_adt_t  result;

        uint8_t ivar_1;
        ivar_1 = (uint8_t)2;
        dpeg__glte_t tmp34494 = new_dpeg__glte();;
        result = (dpeg__dpeg_expr_adt_t)tmp34494;
        tmp34494->dpeg__dpeg_expr_adt_index = (uint8_t)ivar_1;
        tmp34494->p = (dpeg__guard_t)ivar_2;
        tmp34494->b = (uint32_t)ivar_3;
        tmp34494->c = (uint32_t)ivar_4;
        
        result->count++;
        return result;
}

uint8_t dpeg__ord_2(dpeg__dpeg_expr_adt_t ivar_1){
        uint8_t  result;

        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)rec_dpeg__failp((dpeg__dpeg_expr_adt_t)ivar_1);
        if (ivar_3){
             release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_1);
             result = (uint8_t)0;
        } else {
             bool_t ivar_7;
             ivar_1->count++;
             ivar_7 = (bool_t)rec_dpeg__skipp((dpeg__dpeg_expr_adt_t)ivar_1);
             if (ivar_7){
           result = (uint8_t)1;
             } else {
           result = (uint8_t)2;};};
        
        
        return result;
}

bool_t dpeg__subterm_2(dpeg__dpeg_expr_adt_t ivar_1, dpeg__dpeg_expr_adt_t ivar_2){
        bool_t  result;

        result = (bool_t) equal_dpeg__dpeg_expr_adt(ivar_1, ivar_2);
        
        
        return result;
}

bool_t dpeg__doublelessp_2(dpeg__dpeg_expr_adt_t ivar_1, dpeg__dpeg_expr_adt_t ivar_2){
        bool_t  result;

        result = (bool_t) false;
        
        
        return result;
}

dpeg_funtype_17_t dpeg__reduce_nat_2(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, dpeg_funtype_19_t ivar_3){
        dpeg_funtype_17_t  result;

        dpeg_closure_20_t cl34509;
        cl34509 = new_dpeg_closure_20();
        mpz_set(cl34509->fvar_1, ivar_2);
        cl34509->fvar_2 = (dpeg_funtype_19_t)ivar_3;
        if (cl34509->fvar_2 != NULL) cl34509->fvar_2->count++;
        mpz_set(cl34509->fvar_3, ivar_1);
        release_dpeg_funtype_19((dpeg_funtype_19_t)ivar_3);
        result = (dpeg_funtype_17_t)cl34509;
        
        result->count++;
        return result;
}

dpeg_funtype_17_t dpeg__REDUCE_nat_2(dpeg_funtype_17_t ivar_1, dpeg_funtype_17_t ivar_3, dpeg_funtype_22_t ivar_5){
        dpeg_funtype_17_t  result;

        dpeg_closure_23_t cl34527;
        cl34527 = new_dpeg_closure_23();
        cl34527->fvar_1 = (dpeg_funtype_22_t)ivar_5;
        if (cl34527->fvar_1 != NULL) cl34527->fvar_1->count++;
        cl34527->fvar_2 = (dpeg_funtype_17_t)ivar_3;
        if (cl34527->fvar_2 != NULL) cl34527->fvar_2->count++;
        cl34527->fvar_3 = (dpeg_funtype_17_t)ivar_1;
        if (cl34527->fvar_3 != NULL) cl34527->fvar_3->count++;
        release_dpeg_funtype_17((dpeg_funtype_17_t)ivar_1);
        release_dpeg_funtype_22((dpeg_funtype_22_t)ivar_5);
        release_dpeg_funtype_17((dpeg_funtype_17_t)ivar_3);
        result = (dpeg_funtype_17_t)cl34527;
        
        result->count++;
        return result;
}

dpeg_funtype_24_t dpeg__reduce_ordinal_2(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2, dpeg_funtype_25_t ivar_3){
        dpeg_funtype_24_t  result;

        dpeg_closure_26_t cl34541;
        cl34541 = new_dpeg_closure_26();
        cl34541->fvar_1 = (ordstruct_adt__ordstruct_adt_t)ivar_2;
        if (cl34541->fvar_1 != NULL) cl34541->fvar_1->count++;
        cl34541->fvar_2 = (dpeg_funtype_25_t)ivar_3;
        if (cl34541->fvar_2 != NULL) cl34541->fvar_2->count++;
        cl34541->fvar_3 = (ordstruct_adt__ordstruct_adt_t)ivar_1;
        if (cl34541->fvar_3 != NULL) cl34541->fvar_3->count++;
        release_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)ivar_1);
        release_dpeg_funtype_25((dpeg_funtype_25_t)ivar_3);
        release_ordstruct_adt__ordstruct_adt((ordstruct_adt__ordstruct_adt_t)ivar_2);
        result = (dpeg_funtype_24_t)cl34541;
        
        result->count++;
        return result;
}

dpeg_funtype_24_t dpeg__REDUCE_ordinal_2(dpeg_funtype_24_t ivar_1, dpeg_funtype_24_t ivar_3, dpeg_funtype_27_t ivar_5){
        dpeg_funtype_24_t  result;

        dpeg_closure_28_t cl34559;
        cl34559 = new_dpeg_closure_28();
        cl34559->fvar_1 = (dpeg_funtype_27_t)ivar_5;
        if (cl34559->fvar_1 != NULL) cl34559->fvar_1->count++;
        cl34559->fvar_2 = (dpeg_funtype_24_t)ivar_3;
        if (cl34559->fvar_2 != NULL) cl34559->fvar_2->count++;
        cl34559->fvar_3 = (dpeg_funtype_24_t)ivar_1;
        if (cl34559->fvar_3 != NULL) cl34559->fvar_3->count++;
        release_dpeg_funtype_24((dpeg_funtype_24_t)ivar_1);
        release_dpeg_funtype_27((dpeg_funtype_27_t)ivar_5);
        release_dpeg_funtype_24((dpeg_funtype_24_t)ivar_3);
        result = (dpeg_funtype_24_t)cl34559;
        
        result->count++;
        return result;
}

dpeg_funtype_31_t dpeg__matches(dpeg__dpeg_grammar_t ivar_1, uint32_t ivar_2){
        dpeg_funtype_31_t  result;

        dpeg_closure_32_t cl34581;
        cl34581 = new_dpeg_closure_32();
        cl34581->fvar_1 = (uint32_t)ivar_2;
        cl34581->fvar_2 = (dpeg__dpeg_grammar_t)ivar_1;
        if (cl34581->fvar_2 != NULL) cl34581->fvar_2->count++;
        release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)ivar_1);
        result = (dpeg_funtype_31_t)cl34581;
        
        result->count++;
        return result;
}

dpeg__result_adt_t dpeg__result_sofar(uint32_t ivar_1, dpeg__result_adt_t ivar_2){
        dpeg__result_adt_t  result;

        bool_t ivar_4;
        ivar_2->count++;
        ivar_4 = (bool_t)rec_dpeg__failurep((dpeg__result_adt_t)ivar_2);
        if (ivar_4){
             release_dpeg__result_adt((dpeg__result_adt_t)ivar_2);
             result = (dpeg__result_adt_t)con_dpeg__failure();
             if (result != NULL) result->count++;
        } else {
             uint32_t ivar_8;
             ivar_8 = (uint32_t)acc_dpeg__result_adt_span((dpeg__result_adt_t)ivar_2);
             uint32_t ivar_17;
             ivar_17 = (uint32_t)(ivar_8 + ivar_1);
             result = (dpeg__result_adt_t)con_dpeg__success((uint32_t)ivar_17);};
        
        result->count++;
        return result;
}

mpz_ptr_t dpeg__encode_result(uint32_t ivar_1, dpeg__result_adt_t ivar_2){
         mpz_ptr_t  result;

        bool_t ivar_7;
        ivar_2->count++;
        ivar_7 = (bool_t)rec_dpeg__failurep((dpeg__result_adt_t)ivar_2);
        if (ivar_7){
             release_dpeg__result_adt((dpeg__result_adt_t)ivar_2);
             result = safe_malloc(sizeof(mpz_t));
             mpz_init(result);
             mpz_mk_set_ui(result, 0);
        } else {
             uint32_t ivar_11;
             ivar_11 = (uint32_t)acc_dpeg__result_adt_span((dpeg__result_adt_t)ivar_2);
             uint8_t ivar_16;
             ivar_16 = (uint8_t)1;
             mpz_mk_set_ui(result, (uint64_t)ivar_11);
             mpz_add_ui(result, result, (uint64_t)ivar_16);};
        
        
        return result;
}

dpeg__result_adt_t dpeg__decode_result(uint32_t ivar_1){
        dpeg__result_adt_t  result;

        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){
             result = (dpeg__result_adt_t)con_dpeg__failure();
             if (result != NULL) result->count++;
        } else {
             int32_t ivar_13;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_13 = (int32_t)((uint64_t)ivar_1 - (uint64_t)ivar_8);
             uint32_t ivar_11;
             //copying to uint32 from int32;
             ivar_11 = (uint32_t)ivar_13;
             result = (dpeg__result_adt_t)con_dpeg__success((uint32_t)ivar_11);};
        
        result->count++;
        return result;
}

uint32_t dpeg__dpeg_parse(dpeg__dpeg_grammar_t ivar_1, uint32_t ivar_2, bytestrings__bytestring_t ivar_4, uint32_t ivar_5, uint32_t ivar_7){
        uint32_t  result;

        dpeg__dpeg_expr_adt_t ivar_9;
        dpeg_array_29_t ivar_12;
        dpeg_array_29_t ivar_17;
        ivar_17 = (dpeg_array_29_t)ivar_1->seq;
        ivar_17->count++;
        //copying to dpeg_array_29 from dpeg_array_29;
        ivar_12 = (dpeg_array_29_t)ivar_17;
        if (ivar_12 != NULL) ivar_12->count++;
        release_dpeg_array_29((dpeg_array_29_t)ivar_17);
        ivar_9 = (dpeg__dpeg_expr_adt_t)ivar_12->elems[ivar_2];
        ivar_9->count++;
        release_dpeg_array_29((dpeg_array_29_t)ivar_12);
        bool_t ivar_19;
        ivar_9->count++;
        ivar_19 = (bool_t)rec_dpeg__failp((dpeg__dpeg_expr_adt_t)ivar_9);
        if (ivar_19){
             release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)ivar_1);
             release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_4);
             release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_9);
             result = (uint32_t)0;
        } else {
             bool_t ivar_26;
             ivar_9->count++;
             ivar_26 = (bool_t)rec_dpeg__skipp((dpeg__dpeg_expr_adt_t)ivar_9);
             if (ivar_26){
           release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_9);
           release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)ivar_1);
           release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_4);
           uint8_t ivar_24;
           ivar_24 = (uint8_t)1;
           result = (uint32_t)(ivar_5 + ivar_24);
             } else {
           dpeg__guard_t ivar_30;
           ivar_9->count++;
           ivar_30 = (dpeg__guard_t)acc_dpeg__dpeg_expr_adt_p((dpeg__dpeg_expr_adt_t)ivar_9);
           uint32_t ivar_31;
           ivar_9->count++;
           ivar_31 = (uint32_t)acc_dpeg__dpeg_expr_adt_b((dpeg__dpeg_expr_adt_t)ivar_9);
           uint32_t ivar_32;
           ivar_32 = (uint32_t)acc_dpeg__dpeg_expr_adt_c((dpeg__dpeg_expr_adt_t)ivar_9);
           /* i */ uint32_t ivar_42;
           ivar_4->count++;
           ivar_42 = (uint32_t)ivar_30->ftbl->mptr(ivar_30, ivar_4, ivar_7);
           bool_t ivar_49;
           uint8_t ivar_51;
           ivar_51 = (uint8_t)0;
           ivar_49 = (ivar_42 == ivar_51);
           if (ivar_49){
           bool_t ivar_53;
           ivar_53 = (ivar_32 < ivar_2);
           if (ivar_53){
            result = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_1, (uint32_t)ivar_32, (bytestrings__bytestring_t)ivar_4, (uint32_t)ivar_5, (uint32_t)ivar_7);
           } else {
            release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_4);
            release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)ivar_1);
            result = (uint32_t)0;};
           } else {
           bool_t ivar_71;
           bool_t ivar_72;
           uint8_t ivar_75;
           ivar_75 = (uint8_t)1;
           ivar_72 = (ivar_42 > ivar_75);
           if (ivar_72){
            bool_t ivar_77;
            int64_t ivar_79;
            uint8_t ivar_82;
            ivar_82 = (uint8_t)1;
            ivar_79 = (int64_t)((uint64_t)ivar_42 - (uint64_t)ivar_82);
            int32_t ivar_80;
            uint32_t ivar_84;
            ivar_84 = (uint32_t)ivar_4->length;
            ivar_80 = (int32_t)((uint64_t)ivar_84 - (uint64_t)ivar_7);
            ivar_77 = (ivar_79 <= ivar_80);
            if (ivar_77){
             uint32_t ivar_90;
             ivar_90 = (uint32_t)ivar_1->length;
             ivar_71 = (ivar_31 < ivar_90);
            } else {
             ivar_71 = (bool_t) false;};
           } else {
            ivar_71 = (bool_t) false;};
           if (ivar_71){
            int64_t ivar_124;
            uint64_t ivar_100;
            ivar_100 = (uint64_t)(ivar_5 + ivar_42);
            uint8_t ivar_101;
            ivar_101 = (uint8_t)1;
            ivar_124 = (int64_t)((uint64_t)ivar_100 - (uint64_t)ivar_101);
            uint32_t ivar_117;
            //copying to uint32 from int64;
            ivar_117 = (uint32_t)ivar_124;
            int64_t ivar_123;
            uint64_t ivar_106;
            ivar_106 = (uint64_t)(ivar_7 + ivar_42);
            uint8_t ivar_107;
            ivar_107 = (uint8_t)1;
            ivar_123 = (int64_t)((uint64_t)ivar_106 - (uint64_t)ivar_107);
            uint32_t ivar_119;
            //copying to uint32 from int64;
            ivar_119 = (uint32_t)ivar_123;
            result = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_1, (uint32_t)ivar_31, (bytestrings__bytestring_t)ivar_4, (uint32_t)ivar_117, (uint32_t)ivar_119);
           } else {
            release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)ivar_1);
            release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_4);
            result = (uint32_t)0;};};};};
        
        
        __attribute__((musttail)) return result;
}

dpeg_funtype_33_t dpeg__zreachable(dpeg__dpeg_grammar_t ivar_1, uint32_t ivar_2){
        dpeg_funtype_33_t  result;

        dpeg_closure_34_t cl34586;
        cl34586 = new_dpeg_closure_34();
        cl34586->fvar_1 = (uint32_t)ivar_2;
        cl34586->fvar_2 = (dpeg__dpeg_grammar_t)ivar_1;
        if (cl34586->fvar_2 != NULL) cl34586->fvar_2->count++;
        release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)ivar_1);
        result = (dpeg_funtype_33_t)cl34586;
        
        result->count++;
        return result;
}

bool_t dpeg__skipzreachable(dpeg__dpeg_grammar_t ivar_1, uint32_t ivar_2){
        bool_t  result;

        dpeg__dpeg_expr_adt_t ivar_4;
        dpeg_array_29_t ivar_7;
        dpeg_array_29_t ivar_12;
        ivar_12 = (dpeg_array_29_t)ivar_1->seq;
        ivar_12->count++;
        //copying to dpeg_array_29 from dpeg_array_29;
        ivar_7 = (dpeg_array_29_t)ivar_12;
        if (ivar_7 != NULL) ivar_7->count++;
        release_dpeg_array_29((dpeg_array_29_t)ivar_12);
        ivar_4 = (dpeg__dpeg_expr_adt_t)ivar_7->elems[ivar_2];
        ivar_4->count++;
        release_dpeg_array_29((dpeg_array_29_t)ivar_7);
        bool_t ivar_14;
        ivar_4->count++;
        ivar_14 = (bool_t)rec_dpeg__skipp((dpeg__dpeg_expr_adt_t)ivar_4);
        if (ivar_14){
             release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)ivar_1);
             release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_4);
             result = (bool_t) true;
        } else {
             bool_t ivar_42;
             ivar_4->count++;
             ivar_42 = (bool_t)rec_dpeg__gltep((dpeg__dpeg_expr_adt_t)ivar_4);
             if (ivar_42){
           uint32_t ivar_20;
           ivar_20 = (uint32_t)acc_dpeg__dpeg_expr_adt_c((dpeg__dpeg_expr_adt_t)ivar_4);
           bool_t ivar_30;
           ivar_30 = (ivar_20 < ivar_2);
           if (ivar_30){
           result = (bool_t)dpeg__skipzreachable((dpeg__dpeg_grammar_t)ivar_1, (uint32_t)ivar_20);
           } else {
           release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)ivar_1);
           result = (bool_t) false;};
             } else {
           release_dpeg__dpeg_grammar((dpeg__dpeg_grammar_t)ivar_1);
           release_dpeg__dpeg_expr_adt((dpeg__dpeg_expr_adt_t)ivar_4);
           result = (bool_t) false;};};
        
        
        return result;
}

dpeg_funtype_35_t dpeg__mk_guard(dpeg_funtype_36_t ivar_1){
        dpeg_funtype_35_t  result;

        dpeg_closure_37_t cl34592;
        cl34592 = new_dpeg_closure_37();
        cl34592->fvar_1 = (dpeg_funtype_36_t)ivar_1;
        if (cl34592->fvar_1 != NULL) cl34592->fvar_1->count++;
        release_dpeg_funtype_36((dpeg_funtype_36_t)ivar_1);
        result = (dpeg_funtype_35_t)cl34592;
        
        result->count++;
        return result;
}

dpeg__dpeg_grammar_t dpeg__wspace_grammar(void){
        dpeg__dpeg_grammar_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        ivar_1 = (uint32_t)3;
        dpeg_array_29_t ivar_44;
        dpeg__dpeg_expr_adt_t ivar_2;
        ivar_2 = (dpeg__dpeg_expr_adt_t)con_dpeg__fail();
        if (ivar_2 != NULL) ivar_2->count++;
        dpeg__dpeg_expr_adt_t ivar_3;
        ivar_3 = (dpeg__dpeg_expr_adt_t)con_dpeg__skip();
        if (ivar_3 != NULL) ivar_3->count++;
        dpeg__dpeg_expr_adt_t ivar_4;
        dpeg_funtype_35_t ivar_37;
        dpeg_funtype_36_t ivar_16;
        dpeg_closure_39_t cl34601;
        cl34601 = new_dpeg_closure_39();
        ivar_16 = (dpeg_funtype_36_t)cl34601;
        ivar_37 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_16);
        dpeg__guard_t ivar_23;
        dpeg_closure_40_t cl34604;
        cl34604 = new_dpeg_closure_40();
        cl34604->fvar_1 = (dpeg_funtype_35_t)ivar_37;
        if (cl34604->fvar_1 != NULL) cl34604->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_37);
        ivar_23 = (dpeg__guard_t)cl34604;
        uint8_t ivar_36;
        ivar_36 = (uint8_t)2;
        uint32_t ivar_24;
        //copying to uint32 from uint8;
        ivar_24 = (uint32_t)ivar_36;
        uint8_t ivar_35;
        ivar_35 = (uint8_t)1;
        uint32_t ivar_25;
        //copying to uint32 from uint8;
        ivar_25 = (uint32_t)ivar_35;
        ivar_4 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_23, (uint32_t)ivar_24, (uint32_t)ivar_25);
        ivar_44 = (dpeg_array_29_t)new_dpeg_array_29(3);
        ivar_44->elems[0]= ivar_2;
        ivar_44->elems[1]= ivar_3;
        ivar_44->elems[2]= ivar_4;
        dpeg__dpeg_grammar_t tmp34605 = new_dpeg__dpeg_grammar();;
        result = (dpeg__dpeg_grammar_t)tmp34605;
        tmp34605->length = (uint32_t)ivar_1;
        tmp34605->seq = (dpeg_array_29_t)ivar_44;
        defined = true;};
        
        result->count++;
        return result;
}

bool_t dpeg__test_wspace1(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__wspace_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)2;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34609 = 0;
        uint32_t characters34610[0] = {};
        stringliteral_t string34608 = mk_string(0, characters34610);
        ivar_11 = (strings__string_t)strings__make_string(len34609, string34608);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)1;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_wspace2(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__wspace_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)2;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34614 = 1;
        uint32_t characters34615[1] = {97};
        stringliteral_t string34613 = mk_string(1, characters34615);
        ivar_11 = (strings__string_t)strings__make_string(len34614, string34613);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)1;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_wspace3(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__wspace_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)2;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34619 = 3;
        uint32_t characters34620[3] = {32, 32, 32};
        stringliteral_t string34618 = mk_string(3, characters34620);
        ivar_11 = (strings__string_t)strings__make_string(len34619, string34618);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)4;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_wspace4(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__wspace_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)2;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34624 = 10;
        uint32_t characters34625[10] = {32, 32, 32, 32, 32, 32, 32, 32, 57, 57};
        stringliteral_t string34623 = mk_string(10, characters34625);
        ivar_11 = (strings__string_t)strings__make_string(len34624, string34623);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)9;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__is_plus_minus(uint8_t ivar_1){
        bool_t  result;

        bool_t ivar_2;
        ivar_2 = (bool_t)stringutils__is_minus((uint8_t)ivar_1);
        if (ivar_2){
             result = (bool_t) true;
        } else {
             result = (bool_t)stringutils__is_plus((uint8_t)ivar_1);};
        
        
        return result;
}

dpeg__dpeg_grammar_t dpeg__numeral_grammar(void){
        dpeg__dpeg_grammar_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        ivar_1 = (uint32_t)13;
        dpeg_array_29_t ivar_444;
        dpeg__dpeg_expr_adt_t ivar_2;
        ivar_2 = (dpeg__dpeg_expr_adt_t)con_dpeg__fail();
        if (ivar_2 != NULL) ivar_2->count++;
        dpeg__dpeg_expr_adt_t ivar_3;
        ivar_3 = (dpeg__dpeg_expr_adt_t)con_dpeg__skip();
        if (ivar_3 != NULL) ivar_3->count++;
        dpeg__dpeg_expr_adt_t ivar_4;
        dpeg_funtype_35_t ivar_47;
        dpeg_funtype_36_t ivar_26;
        dpeg_closure_41_t cl34694;
        cl34694 = new_dpeg_closure_41();
        ivar_26 = (dpeg_funtype_36_t)cl34694;
        ivar_47 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_26);
        dpeg__guard_t ivar_33;
        dpeg_closure_42_t cl34697;
        cl34697 = new_dpeg_closure_42();
        cl34697->fvar_1 = (dpeg_funtype_35_t)ivar_47;
        if (cl34697->fvar_1 != NULL) cl34697->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_47);
        ivar_33 = (dpeg__guard_t)cl34697;
        uint8_t ivar_46;
        ivar_46 = (uint8_t)2;
        uint32_t ivar_34;
        //copying to uint32 from uint8;
        ivar_34 = (uint32_t)ivar_46;
        uint8_t ivar_45;
        ivar_45 = (uint8_t)1;
        uint32_t ivar_35;
        //copying to uint32 from uint8;
        ivar_35 = (uint32_t)ivar_45;
        ivar_4 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_33, (uint32_t)ivar_34, (uint32_t)ivar_35);
        dpeg__dpeg_expr_adt_t ivar_5;
        dpeg_funtype_35_t ivar_86;
        dpeg_funtype_36_t ivar_65;
        dpeg_closure_43_t cl34698;
        cl34698 = new_dpeg_closure_43();
        ivar_65 = (dpeg_funtype_36_t)cl34698;
        ivar_86 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_65);
        dpeg__guard_t ivar_72;
        dpeg_closure_44_t cl34701;
        cl34701 = new_dpeg_closure_44();
        cl34701->fvar_1 = (dpeg_funtype_35_t)ivar_86;
        if (cl34701->fvar_1 != NULL) cl34701->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_86);
        ivar_72 = (dpeg__guard_t)cl34701;
        uint8_t ivar_85;
        ivar_85 = (uint8_t)3;
        uint32_t ivar_73;
        //copying to uint32 from uint8;
        ivar_73 = (uint32_t)ivar_85;
        uint8_t ivar_84;
        ivar_84 = (uint8_t)2;
        uint32_t ivar_74;
        //copying to uint32 from uint8;
        ivar_74 = (uint32_t)ivar_84;
        ivar_5 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_72, (uint32_t)ivar_73, (uint32_t)ivar_74);
        dpeg__dpeg_expr_adt_t ivar_6;
        dpeg_funtype_35_t ivar_125;
        dpeg_funtype_36_t ivar_104;
        dpeg_closure_45_t cl34702;
        cl34702 = new_dpeg_closure_45();
        ivar_104 = (dpeg_funtype_36_t)cl34702;
        ivar_125 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_104);
        dpeg__guard_t ivar_111;
        dpeg_closure_46_t cl34705;
        cl34705 = new_dpeg_closure_46();
        cl34705->fvar_1 = (dpeg_funtype_35_t)ivar_125;
        if (cl34705->fvar_1 != NULL) cl34705->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_125);
        ivar_111 = (dpeg__guard_t)cl34705;
        uint8_t ivar_124;
        ivar_124 = (uint8_t)3;
        uint32_t ivar_112;
        //copying to uint32 from uint8;
        ivar_112 = (uint32_t)ivar_124;
        uint8_t ivar_123;
        ivar_123 = (uint8_t)0;
        uint32_t ivar_113;
        //copying to uint32 from uint8;
        ivar_113 = (uint32_t)ivar_123;
        ivar_6 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_111, (uint32_t)ivar_112, (uint32_t)ivar_113);
        dpeg__dpeg_expr_adt_t ivar_7;
        dpeg_funtype_35_t ivar_164;
        dpeg_funtype_36_t ivar_143;
        dpeg_closure_47_t cl34706;
        cl34706 = new_dpeg_closure_47();
        ivar_143 = (dpeg_funtype_36_t)cl34706;
        ivar_164 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_143);
        dpeg__guard_t ivar_150;
        dpeg_closure_48_t cl34709;
        cl34709 = new_dpeg_closure_48();
        cl34709->fvar_1 = (dpeg_funtype_35_t)ivar_164;
        if (cl34709->fvar_1 != NULL) cl34709->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_164);
        ivar_150 = (dpeg__guard_t)cl34709;
        uint8_t ivar_163;
        ivar_163 = (uint8_t)4;
        uint32_t ivar_151;
        //copying to uint32 from uint8;
        ivar_151 = (uint32_t)ivar_163;
        uint8_t ivar_162;
        ivar_162 = (uint8_t)4;
        uint32_t ivar_152;
        //copying to uint32 from uint8;
        ivar_152 = (uint32_t)ivar_162;
        ivar_7 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_150, (uint32_t)ivar_151, (uint32_t)ivar_152);
        dpeg__dpeg_expr_adt_t ivar_8;
        dpeg_funtype_35_t ivar_203;
        dpeg_funtype_36_t ivar_182;
        dpeg_closure_49_t cl34710;
        cl34710 = new_dpeg_closure_49();
        ivar_182 = (dpeg_funtype_36_t)cl34710;
        ivar_203 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_182);
        dpeg__guard_t ivar_189;
        dpeg_closure_50_t cl34713;
        cl34713 = new_dpeg_closure_50();
        cl34713->fvar_1 = (dpeg_funtype_35_t)ivar_203;
        if (cl34713->fvar_1 != NULL) cl34713->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_203);
        ivar_189 = (dpeg__guard_t)cl34713;
        uint8_t ivar_202;
        ivar_202 = (uint8_t)5;
        uint32_t ivar_190;
        //copying to uint32 from uint8;
        ivar_190 = (uint32_t)ivar_202;
        uint8_t ivar_201;
        ivar_201 = (uint8_t)2;
        uint32_t ivar_191;
        //copying to uint32 from uint8;
        ivar_191 = (uint32_t)ivar_201;
        ivar_8 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_189, (uint32_t)ivar_190, (uint32_t)ivar_191);
        dpeg__dpeg_expr_adt_t ivar_9;
        dpeg_funtype_35_t ivar_242;
        dpeg_funtype_36_t ivar_221;
        dpeg_closure_51_t cl34714;
        cl34714 = new_dpeg_closure_51();
        ivar_221 = (dpeg_funtype_36_t)cl34714;
        ivar_242 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_221);
        dpeg__guard_t ivar_228;
        dpeg_closure_52_t cl34717;
        cl34717 = new_dpeg_closure_52();
        cl34717->fvar_1 = (dpeg_funtype_35_t)ivar_242;
        if (cl34717->fvar_1 != NULL) cl34717->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_242);
        ivar_228 = (dpeg__guard_t)cl34717;
        uint8_t ivar_241;
        ivar_241 = (uint8_t)7;
        uint32_t ivar_229;
        //copying to uint32 from uint8;
        ivar_229 = (uint32_t)ivar_241;
        uint8_t ivar_240;
        ivar_240 = (uint8_t)6;
        uint32_t ivar_230;
        //copying to uint32 from uint8;
        ivar_230 = (uint32_t)ivar_240;
        ivar_9 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_228, (uint32_t)ivar_229, (uint32_t)ivar_230);
        dpeg__dpeg_expr_adt_t ivar_10;
        dpeg_funtype_35_t ivar_281;
        dpeg_funtype_36_t ivar_260;
        dpeg_closure_53_t cl34718;
        cl34718 = new_dpeg_closure_53();
        ivar_260 = (dpeg_funtype_36_t)cl34718;
        ivar_281 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_260);
        dpeg__guard_t ivar_267;
        dpeg_closure_54_t cl34721;
        cl34721 = new_dpeg_closure_54();
        cl34721->fvar_1 = (dpeg_funtype_35_t)ivar_281;
        if (cl34721->fvar_1 != NULL) cl34721->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_281);
        ivar_267 = (dpeg__guard_t)cl34721;
        uint8_t ivar_280;
        ivar_280 = (uint8_t)7;
        uint32_t ivar_268;
        //copying to uint32 from uint8;
        ivar_268 = (uint32_t)ivar_280;
        uint8_t ivar_279;
        ivar_279 = (uint8_t)0;
        uint32_t ivar_269;
        //copying to uint32 from uint8;
        ivar_269 = (uint32_t)ivar_279;
        ivar_10 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_267, (uint32_t)ivar_268, (uint32_t)ivar_269);
        dpeg__dpeg_expr_adt_t ivar_11;
        dpeg_funtype_35_t ivar_320;
        dpeg_funtype_36_t ivar_299;
        dpeg_closure_55_t cl34722;
        cl34722 = new_dpeg_closure_55();
        ivar_299 = (dpeg_funtype_36_t)cl34722;
        ivar_320 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_299);
        dpeg__guard_t ivar_306;
        dpeg_closure_56_t cl34725;
        cl34725 = new_dpeg_closure_56();
        cl34725->fvar_1 = (dpeg_funtype_35_t)ivar_320;
        if (cl34725->fvar_1 != NULL) cl34725->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_320);
        ivar_306 = (dpeg__guard_t)cl34725;
        uint8_t ivar_319;
        ivar_319 = (uint8_t)8;
        uint32_t ivar_307;
        //copying to uint32 from uint8;
        ivar_307 = (uint32_t)ivar_319;
        uint8_t ivar_318;
        ivar_318 = (uint8_t)2;
        uint32_t ivar_308;
        //copying to uint32 from uint8;
        ivar_308 = (uint32_t)ivar_318;
        ivar_11 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_306, (uint32_t)ivar_307, (uint32_t)ivar_308);
        dpeg__dpeg_expr_adt_t ivar_12;
        dpeg_funtype_35_t ivar_359;
        dpeg_funtype_36_t ivar_338;
        dpeg_closure_57_t cl34726;
        cl34726 = new_dpeg_closure_57();
        ivar_338 = (dpeg_funtype_36_t)cl34726;
        ivar_359 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_338);
        dpeg__guard_t ivar_345;
        dpeg_closure_58_t cl34729;
        cl34729 = new_dpeg_closure_58();
        cl34729->fvar_1 = (dpeg_funtype_35_t)ivar_359;
        if (cl34729->fvar_1 != NULL) cl34729->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_359);
        ivar_345 = (dpeg__guard_t)cl34729;
        uint8_t ivar_358;
        ivar_358 = (uint8_t)10;
        uint32_t ivar_346;
        //copying to uint32 from uint8;
        ivar_346 = (uint32_t)ivar_358;
        uint8_t ivar_357;
        ivar_357 = (uint8_t)9;
        uint32_t ivar_347;
        //copying to uint32 from uint8;
        ivar_347 = (uint32_t)ivar_357;
        ivar_12 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_345, (uint32_t)ivar_346, (uint32_t)ivar_347);
        dpeg__dpeg_expr_adt_t ivar_13;
        dpeg_funtype_35_t ivar_398;
        dpeg_funtype_36_t ivar_377;
        dpeg_closure_59_t cl34730;
        cl34730 = new_dpeg_closure_59();
        ivar_377 = (dpeg_funtype_36_t)cl34730;
        ivar_398 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_377);
        dpeg__guard_t ivar_384;
        dpeg_closure_60_t cl34733;
        cl34733 = new_dpeg_closure_60();
        cl34733->fvar_1 = (dpeg_funtype_35_t)ivar_398;
        if (cl34733->fvar_1 != NULL) cl34733->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_398);
        ivar_384 = (dpeg__guard_t)cl34733;
        uint8_t ivar_397;
        ivar_397 = (uint8_t)10;
        uint32_t ivar_385;
        //copying to uint32 from uint8;
        ivar_385 = (uint32_t)ivar_397;
        uint8_t ivar_396;
        ivar_396 = (uint8_t)0;
        uint32_t ivar_386;
        //copying to uint32 from uint8;
        ivar_386 = (uint32_t)ivar_396;
        ivar_13 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_384, (uint32_t)ivar_385, (uint32_t)ivar_386);
        dpeg__dpeg_expr_adt_t ivar_14;
        dpeg_funtype_35_t ivar_437;
        dpeg_funtype_36_t ivar_416;
        dpeg_closure_61_t cl34734;
        cl34734 = new_dpeg_closure_61();
        ivar_416 = (dpeg_funtype_36_t)cl34734;
        ivar_437 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_416);
        dpeg__guard_t ivar_423;
        dpeg_closure_62_t cl34737;
        cl34737 = new_dpeg_closure_62();
        cl34737->fvar_1 = (dpeg_funtype_35_t)ivar_437;
        if (cl34737->fvar_1 != NULL) cl34737->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_437);
        ivar_423 = (dpeg__guard_t)cl34737;
        uint8_t ivar_436;
        ivar_436 = (uint8_t)11;
        uint32_t ivar_424;
        //copying to uint32 from uint8;
        ivar_424 = (uint32_t)ivar_436;
        uint8_t ivar_435;
        ivar_435 = (uint8_t)11;
        uint32_t ivar_425;
        //copying to uint32 from uint8;
        ivar_425 = (uint32_t)ivar_435;
        ivar_14 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_423, (uint32_t)ivar_424, (uint32_t)ivar_425);
        ivar_444 = (dpeg_array_29_t)new_dpeg_array_29(13);
        ivar_444->elems[0]= ivar_2;
        ivar_444->elems[1]= ivar_3;
        ivar_444->elems[2]= ivar_4;
        ivar_444->elems[3]= ivar_5;
        ivar_444->elems[4]= ivar_6;
        ivar_444->elems[5]= ivar_7;
        ivar_444->elems[6]= ivar_8;
        ivar_444->elems[7]= ivar_9;
        ivar_444->elems[8]= ivar_10;
        ivar_444->elems[9]= ivar_11;
        ivar_444->elems[10]= ivar_12;
        ivar_444->elems[11]= ivar_13;
        ivar_444->elems[12]= ivar_14;
        dpeg__dpeg_grammar_t tmp34738 = new_dpeg__dpeg_grammar();;
        result = (dpeg__dpeg_grammar_t)tmp34738;
        tmp34738->length = (uint32_t)ivar_1;
        tmp34738->seq = (dpeg_array_29_t)ivar_444;
        defined = true;};
        
        result->count++;
        return result;
}

bool_t dpeg__test_numeral1(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__numeral_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)12;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34742 = 0;
        uint32_t characters34743[0] = {};
        stringliteral_t string34741 = mk_string(0, characters34743);
        ivar_11 = (strings__string_t)strings__make_string(len34742, string34741);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)0;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_numeral2(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__numeral_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)12;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34747 = 3;
        uint32_t characters34748[3] = {48, 32, 32};
        stringliteral_t string34746 = mk_string(3, characters34748);
        ivar_11 = (strings__string_t)strings__make_string(len34747, string34746);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)4;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_numeral3(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__numeral_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)12;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34752 = 3;
        uint32_t characters34753[3] = {45, 48, 32};
        stringliteral_t string34751 = mk_string(3, characters34753);
        ivar_11 = (strings__string_t)strings__make_string(len34752, string34751);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)4;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_numeral4(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__numeral_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)12;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34757 = 6;
        uint32_t characters34758[6] = {57, 57, 46, 57, 57, 32};
        stringliteral_t string34756 = mk_string(6, characters34758);
        ivar_11 = (strings__string_t)strings__make_string(len34757, string34756);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)7;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_numeral5(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__numeral_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)12;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34762 = 7;
        uint32_t characters34763[7] = {45, 57, 57, 46, 57, 57, 32};
        stringliteral_t string34761 = mk_string(7, characters34763);
        ivar_11 = (strings__string_t)strings__make_string(len34762, string34761);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)8;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_numeral6(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__numeral_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)12;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34767 = 7;
        uint32_t characters34768[7] = {57, 57, 46, 101, 45, 55, 32};
        stringliteral_t string34766 = mk_string(7, characters34768);
        ivar_11 = (strings__string_t)strings__make_string(len34767, string34766);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)0;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_numeral7(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__numeral_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)12;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34772 = 7;
        uint32_t characters34773[7] = {57, 57, 46, 57, 101, 57, 32};
        stringliteral_t string34771 = mk_string(7, characters34773);
        ivar_11 = (strings__string_t)strings__make_string(len34772, string34771);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)8;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_numeral8(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__numeral_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)12;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34777 = 7;
        uint32_t characters34778[7] = {45, 48, 46, 57, 101, 57, 32};
        stringliteral_t string34776 = mk_string(7, characters34778);
        ivar_11 = (strings__string_t)strings__make_string(len34777, string34776);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)8;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

uint8_t dpeg__key_true_guard(bytestrings__bytestring_t ivar_1, uint32_t ivar_2){
        uint8_t  result;

        bool_t ivar_4;
        bool_t ivar_5;
        int32_t ivar_7;
        uint32_t ivar_9;
        ivar_9 = (uint32_t)ivar_1->length;
        ivar_7 = (int32_t)((uint64_t)ivar_9 - (uint64_t)ivar_2);
        uint8_t ivar_8;
        ivar_8 = (uint8_t)4;
        if ((ivar_7 < 0)){
             ivar_5 = false;
        } else {
             ivar_5 = (ivar_7 >= ivar_8);};
        if (ivar_5){
             bool_t ivar_14;
             uint8_t ivar_27;
             dpeg_array_38_t ivar_19;
             dpeg_array_38_t ivar_24;
             ivar_24 = (dpeg_array_38_t)ivar_1->seq;
             ivar_24->count++;
             //copying to dpeg_array_38 from dpeg_array_38;
             ivar_19 = (dpeg_array_38_t)ivar_24;
             if (ivar_19 != NULL) ivar_19->count++;
             release_dpeg_array_38((dpeg_array_38_t)ivar_24);
             ivar_27 = (uint8_t)ivar_19->elems[ivar_2];
             release_dpeg_array_38((dpeg_array_38_t)ivar_19);
             ivar_14 = (bool_t)stringutils__is_t((uint8_t)ivar_27);
             if (ivar_14){
           bool_t ivar_28;
           uint8_t ivar_44;
           dpeg_array_38_t ivar_36;
           dpeg_array_38_t ivar_41;
           ivar_41 = (dpeg_array_38_t)ivar_1->seq;
           ivar_41->count++;
           //copying to dpeg_array_38 from dpeg_array_38;
           ivar_36 = (dpeg_array_38_t)ivar_41;
           if (ivar_36 != NULL) ivar_36->count++;
           release_dpeg_array_38((dpeg_array_38_t)ivar_41);
           uint32_t ivar_42;
           uint8_t ivar_33;
           ivar_33 = (uint8_t)1;
           ivar_42 = (uint32_t)(ivar_2 + ivar_33);
           ivar_44 = (uint8_t)ivar_36->elems[ivar_42];
           release_dpeg_array_38((dpeg_array_38_t)ivar_36);
           ivar_28 = (bool_t)stringutils__is_r((uint8_t)ivar_44);
           if (ivar_28){
           bool_t ivar_45;
           uint8_t ivar_61;
           dpeg_array_38_t ivar_53;
           dpeg_array_38_t ivar_58;
           ivar_58 = (dpeg_array_38_t)ivar_1->seq;
           ivar_58->count++;
           //copying to dpeg_array_38 from dpeg_array_38;
           ivar_53 = (dpeg_array_38_t)ivar_58;
           if (ivar_53 != NULL) ivar_53->count++;
           release_dpeg_array_38((dpeg_array_38_t)ivar_58);
           uint32_t ivar_59;
           uint8_t ivar_50;
           ivar_50 = (uint8_t)2;
           ivar_59 = (uint32_t)(ivar_2 + ivar_50);
           ivar_61 = (uint8_t)ivar_53->elems[ivar_59];
           release_dpeg_array_38((dpeg_array_38_t)ivar_53);
           ivar_45 = (bool_t)stringutils__is_u((uint8_t)ivar_61);
           if (ivar_45){
            uint8_t ivar_76;
            dpeg_array_38_t ivar_68;
            dpeg_array_38_t ivar_73;
            ivar_73 = (dpeg_array_38_t)ivar_1->seq;
            ivar_73->count++;
            //copying to dpeg_array_38 from dpeg_array_38;
            ivar_68 = (dpeg_array_38_t)ivar_73;
            if (ivar_68 != NULL) ivar_68->count++;
            release_dpeg_array_38((dpeg_array_38_t)ivar_73);
            uint32_t ivar_74;
            uint8_t ivar_65;
            ivar_65 = (uint8_t)3;
            ivar_74 = (uint32_t)(ivar_2 + ivar_65);
            ivar_76 = (uint8_t)ivar_68->elems[ivar_74];
            release_dpeg_array_38((dpeg_array_38_t)ivar_68);
            ivar_4 = (bool_t)stringutils__is_e((uint8_t)ivar_76);
           } else {
            release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
            ivar_4 = (bool_t) false;};
           } else {
           release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
           ivar_4 = (bool_t) false;};
             } else {
           release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
           ivar_4 = (bool_t) false;};
        } else {
             release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
             ivar_4 = (bool_t) false;};
        if (ivar_4){
             result = (uint8_t)5;
        } else {
             result = (uint8_t)0;};
        
        
        return result;
}

uint8_t dpeg__key_false_guard(bytestrings__bytestring_t ivar_1, uint32_t ivar_2){
        uint8_t  result;

        bool_t ivar_4;
        bool_t ivar_5;
        int32_t ivar_7;
        uint32_t ivar_9;
        ivar_9 = (uint32_t)ivar_1->length;
        ivar_7 = (int32_t)((uint64_t)ivar_9 - (uint64_t)ivar_2);
        uint8_t ivar_8;
        ivar_8 = (uint8_t)5;
        if ((ivar_7 < 0)){
             ivar_5 = false;
        } else {
             ivar_5 = (ivar_7 >= ivar_8);};
        if (ivar_5){
             bool_t ivar_14;
             uint8_t ivar_27;
             dpeg_array_38_t ivar_19;
             dpeg_array_38_t ivar_24;
             ivar_24 = (dpeg_array_38_t)ivar_1->seq;
             ivar_24->count++;
             //copying to dpeg_array_38 from dpeg_array_38;
             ivar_19 = (dpeg_array_38_t)ivar_24;
             if (ivar_19 != NULL) ivar_19->count++;
             release_dpeg_array_38((dpeg_array_38_t)ivar_24);
             ivar_27 = (uint8_t)ivar_19->elems[ivar_2];
             release_dpeg_array_38((dpeg_array_38_t)ivar_19);
             ivar_14 = (bool_t)stringutils__is_f((uint8_t)ivar_27);
             if (ivar_14){
           bool_t ivar_28;
           uint8_t ivar_44;
           dpeg_array_38_t ivar_36;
           dpeg_array_38_t ivar_41;
           ivar_41 = (dpeg_array_38_t)ivar_1->seq;
           ivar_41->count++;
           //copying to dpeg_array_38 from dpeg_array_38;
           ivar_36 = (dpeg_array_38_t)ivar_41;
           if (ivar_36 != NULL) ivar_36->count++;
           release_dpeg_array_38((dpeg_array_38_t)ivar_41);
           uint32_t ivar_42;
           uint8_t ivar_33;
           ivar_33 = (uint8_t)1;
           ivar_42 = (uint32_t)(ivar_2 + ivar_33);
           ivar_44 = (uint8_t)ivar_36->elems[ivar_42];
           release_dpeg_array_38((dpeg_array_38_t)ivar_36);
           ivar_28 = (bool_t)stringutils__is_a((uint8_t)ivar_44);
           if (ivar_28){
           bool_t ivar_45;
           uint8_t ivar_61;
           dpeg_array_38_t ivar_53;
           dpeg_array_38_t ivar_58;
           ivar_58 = (dpeg_array_38_t)ivar_1->seq;
           ivar_58->count++;
           //copying to dpeg_array_38 from dpeg_array_38;
           ivar_53 = (dpeg_array_38_t)ivar_58;
           if (ivar_53 != NULL) ivar_53->count++;
           release_dpeg_array_38((dpeg_array_38_t)ivar_58);
           uint32_t ivar_59;
           uint8_t ivar_50;
           ivar_50 = (uint8_t)2;
           ivar_59 = (uint32_t)(ivar_2 + ivar_50);
           ivar_61 = (uint8_t)ivar_53->elems[ivar_59];
           release_dpeg_array_38((dpeg_array_38_t)ivar_53);
           ivar_45 = (bool_t)stringutils__is_l((uint8_t)ivar_61);
           if (ivar_45){
            bool_t ivar_62;
            uint8_t ivar_78;
            dpeg_array_38_t ivar_70;
            dpeg_array_38_t ivar_75;
            ivar_75 = (dpeg_array_38_t)ivar_1->seq;
            ivar_75->count++;
            //copying to dpeg_array_38 from dpeg_array_38;
            ivar_70 = (dpeg_array_38_t)ivar_75;
            if (ivar_70 != NULL) ivar_70->count++;
            release_dpeg_array_38((dpeg_array_38_t)ivar_75);
            uint32_t ivar_76;
            uint8_t ivar_67;
            ivar_67 = (uint8_t)3;
            ivar_76 = (uint32_t)(ivar_2 + ivar_67);
            ivar_78 = (uint8_t)ivar_70->elems[ivar_76];
            release_dpeg_array_38((dpeg_array_38_t)ivar_70);
            ivar_62 = (bool_t)stringutils__is_s((uint8_t)ivar_78);
            if (ivar_62){
             uint8_t ivar_93;
             dpeg_array_38_t ivar_85;
             dpeg_array_38_t ivar_90;
             ivar_90 = (dpeg_array_38_t)ivar_1->seq;
             ivar_90->count++;
             //copying to dpeg_array_38 from dpeg_array_38;
             ivar_85 = (dpeg_array_38_t)ivar_90;
             if (ivar_85 != NULL) ivar_85->count++;
             release_dpeg_array_38((dpeg_array_38_t)ivar_90);
             uint32_t ivar_91;
             uint8_t ivar_82;
             ivar_82 = (uint8_t)4;
             ivar_91 = (uint32_t)(ivar_2 + ivar_82);
             ivar_93 = (uint8_t)ivar_85->elems[ivar_91];
             release_dpeg_array_38((dpeg_array_38_t)ivar_85);
             ivar_4 = (bool_t)stringutils__is_e((uint8_t)ivar_93);
            } else {
             release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
             ivar_4 = (bool_t) false;};
           } else {
            release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
            ivar_4 = (bool_t) false;};
           } else {
           release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
           ivar_4 = (bool_t) false;};
             } else {
           release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
           ivar_4 = (bool_t) false;};
        } else {
             release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
             ivar_4 = (bool_t) false;};
        if (ivar_4){
             result = (uint8_t)6;
        } else {
             result = (uint8_t)0;};
        
        
        return result;
}

uint8_t dpeg__key_null_guard(bytestrings__bytestring_t ivar_1, uint32_t ivar_2){
        uint8_t  result;

        bool_t ivar_4;
        bool_t ivar_5;
        int32_t ivar_7;
        uint32_t ivar_9;
        ivar_9 = (uint32_t)ivar_1->length;
        ivar_7 = (int32_t)((uint64_t)ivar_9 - (uint64_t)ivar_2);
        uint8_t ivar_8;
        ivar_8 = (uint8_t)4;
        if ((ivar_7 < 0)){
             ivar_5 = false;
        } else {
             ivar_5 = (ivar_7 >= ivar_8);};
        if (ivar_5){
             bool_t ivar_14;
             uint8_t ivar_27;
             dpeg_array_38_t ivar_19;
             dpeg_array_38_t ivar_24;
             ivar_24 = (dpeg_array_38_t)ivar_1->seq;
             ivar_24->count++;
             //copying to dpeg_array_38 from dpeg_array_38;
             ivar_19 = (dpeg_array_38_t)ivar_24;
             if (ivar_19 != NULL) ivar_19->count++;
             release_dpeg_array_38((dpeg_array_38_t)ivar_24);
             ivar_27 = (uint8_t)ivar_19->elems[ivar_2];
             release_dpeg_array_38((dpeg_array_38_t)ivar_19);
             ivar_14 = (bool_t)stringutils__is_n((uint8_t)ivar_27);
             if (ivar_14){
           bool_t ivar_28;
           uint8_t ivar_44;
           dpeg_array_38_t ivar_36;
           dpeg_array_38_t ivar_41;
           ivar_41 = (dpeg_array_38_t)ivar_1->seq;
           ivar_41->count++;
           //copying to dpeg_array_38 from dpeg_array_38;
           ivar_36 = (dpeg_array_38_t)ivar_41;
           if (ivar_36 != NULL) ivar_36->count++;
           release_dpeg_array_38((dpeg_array_38_t)ivar_41);
           uint32_t ivar_42;
           uint8_t ivar_33;
           ivar_33 = (uint8_t)1;
           ivar_42 = (uint32_t)(ivar_2 + ivar_33);
           ivar_44 = (uint8_t)ivar_36->elems[ivar_42];
           release_dpeg_array_38((dpeg_array_38_t)ivar_36);
           ivar_28 = (bool_t)stringutils__is_u((uint8_t)ivar_44);
           if (ivar_28){
           bool_t ivar_45;
           uint8_t ivar_61;
           dpeg_array_38_t ivar_53;
           dpeg_array_38_t ivar_58;
           ivar_58 = (dpeg_array_38_t)ivar_1->seq;
           ivar_58->count++;
           //copying to dpeg_array_38 from dpeg_array_38;
           ivar_53 = (dpeg_array_38_t)ivar_58;
           if (ivar_53 != NULL) ivar_53->count++;
           release_dpeg_array_38((dpeg_array_38_t)ivar_58);
           uint32_t ivar_59;
           uint8_t ivar_50;
           ivar_50 = (uint8_t)2;
           ivar_59 = (uint32_t)(ivar_2 + ivar_50);
           ivar_61 = (uint8_t)ivar_53->elems[ivar_59];
           release_dpeg_array_38((dpeg_array_38_t)ivar_53);
           ivar_45 = (bool_t)stringutils__is_l((uint8_t)ivar_61);
           if (ivar_45){
            uint8_t ivar_76;
            dpeg_array_38_t ivar_68;
            dpeg_array_38_t ivar_73;
            ivar_73 = (dpeg_array_38_t)ivar_1->seq;
            ivar_73->count++;
            //copying to dpeg_array_38 from dpeg_array_38;
            ivar_68 = (dpeg_array_38_t)ivar_73;
            if (ivar_68 != NULL) ivar_68->count++;
            release_dpeg_array_38((dpeg_array_38_t)ivar_73);
            uint32_t ivar_74;
            uint8_t ivar_65;
            ivar_65 = (uint8_t)3;
            ivar_74 = (uint32_t)(ivar_2 + ivar_65);
            ivar_76 = (uint8_t)ivar_68->elems[ivar_74];
            release_dpeg_array_38((dpeg_array_38_t)ivar_68);
            ivar_4 = (bool_t)stringutils__is_l((uint8_t)ivar_76);
           } else {
            release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
            ivar_4 = (bool_t) false;};
           } else {
           release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
           ivar_4 = (bool_t) false;};
             } else {
           release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
           ivar_4 = (bool_t) false;};
        } else {
             release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
             ivar_4 = (bool_t) false;};
        if (ivar_4){
             result = (uint8_t)5;
        } else {
             result = (uint8_t)0;};
        
        
        return result;
}

dpeg__dpeg_grammar_t dpeg__key_grammar(void){
        dpeg__dpeg_grammar_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        ivar_1 = (uint32_t)6;
        dpeg_array_29_t ivar_146;
        dpeg__dpeg_expr_adt_t ivar_2;
        ivar_2 = (dpeg__dpeg_expr_adt_t)con_dpeg__fail();
        if (ivar_2 != NULL) ivar_2->count++;
        dpeg__dpeg_expr_adt_t ivar_3;
        ivar_3 = (dpeg__dpeg_expr_adt_t)con_dpeg__skip();
        if (ivar_3 != NULL) ivar_3->count++;
        dpeg__dpeg_expr_adt_t ivar_4;
        dpeg_funtype_35_t ivar_40;
        dpeg_funtype_36_t ivar_19;
        dpeg_closure_63_t cl34805;
        cl34805 = new_dpeg_closure_63();
        ivar_19 = (dpeg_funtype_36_t)cl34805;
        ivar_40 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_19);
        dpeg__guard_t ivar_26;
        dpeg_closure_64_t cl34808;
        cl34808 = new_dpeg_closure_64();
        cl34808->fvar_1 = (dpeg_funtype_35_t)ivar_40;
        if (cl34808->fvar_1 != NULL) cl34808->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_40);
        ivar_26 = (dpeg__guard_t)cl34808;
        uint8_t ivar_39;
        ivar_39 = (uint8_t)2;
        uint32_t ivar_27;
        //copying to uint32 from uint8;
        ivar_27 = (uint32_t)ivar_39;
        uint8_t ivar_38;
        ivar_38 = (uint8_t)1;
        uint32_t ivar_28;
        //copying to uint32 from uint8;
        ivar_28 = (uint32_t)ivar_38;
        ivar_4 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_26, (uint32_t)ivar_27, (uint32_t)ivar_28);
        dpeg__dpeg_expr_adt_t ivar_5;
        dpeg_funtype_35_t ivar_73;
        dpeg_closure_65_t cl34811;
        cl34811 = new_dpeg_closure_65();
        ivar_73 = (dpeg_funtype_35_t)cl34811;
        dpeg__guard_t ivar_59;
        dpeg_closure_66_t cl34814;
        cl34814 = new_dpeg_closure_66();
        cl34814->fvar_1 = (dpeg_funtype_35_t)ivar_73;
        if (cl34814->fvar_1 != NULL) cl34814->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_73);
        ivar_59 = (dpeg__guard_t)cl34814;
        uint8_t ivar_72;
        ivar_72 = (uint8_t)2;
        uint32_t ivar_60;
        //copying to uint32 from uint8;
        ivar_60 = (uint32_t)ivar_72;
        uint8_t ivar_71;
        ivar_71 = (uint8_t)0;
        uint32_t ivar_61;
        //copying to uint32 from uint8;
        ivar_61 = (uint32_t)ivar_71;
        ivar_5 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_59, (uint32_t)ivar_60, (uint32_t)ivar_61);
        dpeg__dpeg_expr_adt_t ivar_6;
        dpeg_funtype_35_t ivar_106;
        dpeg_closure_67_t cl34817;
        cl34817 = new_dpeg_closure_67();
        ivar_106 = (dpeg_funtype_35_t)cl34817;
        dpeg__guard_t ivar_92;
        dpeg_closure_68_t cl34820;
        cl34820 = new_dpeg_closure_68();
        cl34820->fvar_1 = (dpeg_funtype_35_t)ivar_106;
        if (cl34820->fvar_1 != NULL) cl34820->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_106);
        ivar_92 = (dpeg__guard_t)cl34820;
        uint8_t ivar_105;
        ivar_105 = (uint8_t)2;
        uint32_t ivar_93;
        //copying to uint32 from uint8;
        ivar_93 = (uint32_t)ivar_105;
        uint8_t ivar_104;
        ivar_104 = (uint8_t)3;
        uint32_t ivar_94;
        //copying to uint32 from uint8;
        ivar_94 = (uint32_t)ivar_104;
        ivar_6 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_92, (uint32_t)ivar_93, (uint32_t)ivar_94);
        dpeg__dpeg_expr_adt_t ivar_7;
        dpeg_funtype_35_t ivar_139;
        dpeg_closure_69_t cl34823;
        cl34823 = new_dpeg_closure_69();
        ivar_139 = (dpeg_funtype_35_t)cl34823;
        dpeg__guard_t ivar_125;
        dpeg_closure_70_t cl34826;
        cl34826 = new_dpeg_closure_70();
        cl34826->fvar_1 = (dpeg_funtype_35_t)ivar_139;
        if (cl34826->fvar_1 != NULL) cl34826->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_139);
        ivar_125 = (dpeg__guard_t)cl34826;
        uint8_t ivar_138;
        ivar_138 = (uint8_t)2;
        uint32_t ivar_126;
        //copying to uint32 from uint8;
        ivar_126 = (uint32_t)ivar_138;
        uint8_t ivar_137;
        ivar_137 = (uint8_t)4;
        uint32_t ivar_127;
        //copying to uint32 from uint8;
        ivar_127 = (uint32_t)ivar_137;
        ivar_7 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_125, (uint32_t)ivar_126, (uint32_t)ivar_127);
        ivar_146 = (dpeg_array_29_t)new_dpeg_array_29(6);
        ivar_146->elems[0]= ivar_2;
        ivar_146->elems[1]= ivar_3;
        ivar_146->elems[2]= ivar_4;
        ivar_146->elems[3]= ivar_5;
        ivar_146->elems[4]= ivar_6;
        ivar_146->elems[5]= ivar_7;
        dpeg__dpeg_grammar_t tmp34827 = new_dpeg__dpeg_grammar();;
        result = (dpeg__dpeg_grammar_t)tmp34827;
        tmp34827->length = (uint32_t)ivar_1;
        tmp34827->seq = (dpeg_array_29_t)ivar_146;
        defined = true;};
        
        result->count++;
        return result;
}

bool_t dpeg__test_key1(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__key_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)5;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34831 = 0;
        uint32_t characters34832[0] = {};
        stringliteral_t string34830 = mk_string(0, characters34832);
        ivar_11 = (strings__string_t)strings__make_string(len34831, string34830);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)0;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_key2(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__key_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)5;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34836 = 5;
        uint32_t characters34837[5] = {110, 117, 108, 108, 32};
        stringliteral_t string34835 = mk_string(5, characters34837);
        ivar_11 = (strings__string_t)strings__make_string(len34836, string34835);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)6;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_key3(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__key_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)5;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34841 = 5;
        uint32_t characters34842[5] = {116, 114, 117, 101, 32};
        stringliteral_t string34840 = mk_string(5, characters34842);
        ivar_11 = (strings__string_t)strings__make_string(len34841, string34840);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)6;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_key4(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__key_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)5;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34846 = 8;
        uint32_t characters34847[8] = {32, 32, 102, 97, 108, 115, 101, 32};
        stringliteral_t string34845 = mk_string(8, characters34847);
        ivar_11 = (strings__string_t)strings__make_string(len34846, string34845);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)2;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)7;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_key5(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__key_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)5;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34851 = 4;
        uint32_t characters34852[4] = {107, 101, 121, 32};
        stringliteral_t string34850 = mk_string(4, characters34852);
        ivar_11 = (strings__string_t)strings__make_string(len34851, string34850);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)0;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

uint8_t dpeg__ebackslash(bytestrings__bytestring_t ivar_1, uint32_t ivar_2){
        uint8_t  result;

        bool_t ivar_4;
        bool_t ivar_5;
        int32_t ivar_7;
        uint32_t ivar_9;
        ivar_9 = (uint32_t)ivar_1->length;
        ivar_7 = (int32_t)((uint64_t)ivar_9 - (uint64_t)ivar_2);
        uint8_t ivar_8;
        ivar_8 = (uint8_t)2;
        if ((ivar_7 < 0)){
             ivar_5 = false;
        } else {
             ivar_5 = (ivar_7 >= ivar_8);};
        if (ivar_5){
             bool_t ivar_14;
             uint8_t ivar_27;
             dpeg_array_38_t ivar_19;
             dpeg_array_38_t ivar_24;
             ivar_24 = (dpeg_array_38_t)ivar_1->seq;
             ivar_24->count++;
             //copying to dpeg_array_38 from dpeg_array_38;
             ivar_19 = (dpeg_array_38_t)ivar_24;
             if (ivar_19 != NULL) ivar_19->count++;
             release_dpeg_array_38((dpeg_array_38_t)ivar_24);
             ivar_27 = (uint8_t)ivar_19->elems[ivar_2];
             release_dpeg_array_38((dpeg_array_38_t)ivar_19);
             ivar_14 = (bool_t)stringutils__is_backslash((uint8_t)ivar_27);
             if (ivar_14){
           uint8_t ivar_42;
           dpeg_array_38_t ivar_34;
           dpeg_array_38_t ivar_39;
           ivar_39 = (dpeg_array_38_t)ivar_1->seq;
           ivar_39->count++;
           //copying to dpeg_array_38 from dpeg_array_38;
           ivar_34 = (dpeg_array_38_t)ivar_39;
           if (ivar_34 != NULL) ivar_34->count++;
           release_dpeg_array_38((dpeg_array_38_t)ivar_39);
           uint32_t ivar_40;
           uint8_t ivar_31;
           ivar_31 = (uint8_t)1;
           ivar_40 = (uint32_t)(ivar_2 + ivar_31);
           ivar_42 = (uint8_t)ivar_34->elems[ivar_40];
           release_dpeg_array_38((dpeg_array_38_t)ivar_34);
           ivar_4 = (bool_t)stringutils__is_backslash((uint8_t)ivar_42);
             } else {
           release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
           ivar_4 = (bool_t) false;};
        } else {
             release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
             ivar_4 = (bool_t) false;};
        if (ivar_4){
             result = (uint8_t)2;
        } else {
             result = (uint8_t)0;};
        
        
        return result;
}

uint8_t dpeg__equote(bytestrings__bytestring_t ivar_1, uint32_t ivar_2){
        uint8_t  result;

        bool_t ivar_4;
        bool_t ivar_5;
        int32_t ivar_7;
        uint32_t ivar_9;
        ivar_9 = (uint32_t)ivar_1->length;
        ivar_7 = (int32_t)((uint64_t)ivar_9 - (uint64_t)ivar_2);
        uint8_t ivar_8;
        ivar_8 = (uint8_t)2;
        if ((ivar_7 < 0)){
             ivar_5 = false;
        } else {
             ivar_5 = (ivar_7 >= ivar_8);};
        if (ivar_5){
             bool_t ivar_14;
             uint8_t ivar_27;
             dpeg_array_38_t ivar_19;
             dpeg_array_38_t ivar_24;
             ivar_24 = (dpeg_array_38_t)ivar_1->seq;
             ivar_24->count++;
             //copying to dpeg_array_38 from dpeg_array_38;
             ivar_19 = (dpeg_array_38_t)ivar_24;
             if (ivar_19 != NULL) ivar_19->count++;
             release_dpeg_array_38((dpeg_array_38_t)ivar_24);
             ivar_27 = (uint8_t)ivar_19->elems[ivar_2];
             release_dpeg_array_38((dpeg_array_38_t)ivar_19);
             ivar_14 = (bool_t)stringutils__is_backslash((uint8_t)ivar_27);
             if (ivar_14){
           uint8_t ivar_42;
           dpeg_array_38_t ivar_34;
           dpeg_array_38_t ivar_39;
           ivar_39 = (dpeg_array_38_t)ivar_1->seq;
           ivar_39->count++;
           //copying to dpeg_array_38 from dpeg_array_38;
           ivar_34 = (dpeg_array_38_t)ivar_39;
           if (ivar_34 != NULL) ivar_34->count++;
           release_dpeg_array_38((dpeg_array_38_t)ivar_39);
           uint32_t ivar_40;
           uint8_t ivar_31;
           ivar_31 = (uint8_t)1;
           ivar_40 = (uint32_t)(ivar_2 + ivar_31);
           ivar_42 = (uint8_t)ivar_34->elems[ivar_40];
           release_dpeg_array_38((dpeg_array_38_t)ivar_34);
           ivar_4 = (bool_t)stringutils__is_quote((uint8_t)ivar_42);
             } else {
           release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
           ivar_4 = (bool_t) false;};
        } else {
             release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
             ivar_4 = (bool_t) false;};
        if (ivar_4){
             result = (uint8_t)2;
        } else {
             result = (uint8_t)0;};
        
        
        return result;
}

dpeg__dpeg_grammar_t dpeg__string_grammar(void){
        dpeg__dpeg_grammar_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        ivar_1 = (uint32_t)8;
        dpeg_array_29_t ivar_244;
        dpeg__dpeg_expr_adt_t ivar_2;
        ivar_2 = (dpeg__dpeg_expr_adt_t)con_dpeg__fail();
        if (ivar_2 != NULL) ivar_2->count++;
        dpeg__dpeg_expr_adt_t ivar_3;
        ivar_3 = (dpeg__dpeg_expr_adt_t)con_dpeg__skip();
        if (ivar_3 != NULL) ivar_3->count++;
        dpeg__dpeg_expr_adt_t ivar_4;
        dpeg_funtype_35_t ivar_42;
        dpeg_funtype_36_t ivar_21;
        dpeg_closure_71_t cl34891;
        cl34891 = new_dpeg_closure_71();
        ivar_21 = (dpeg_funtype_36_t)cl34891;
        ivar_42 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_21);
        dpeg__guard_t ivar_28;
        dpeg_closure_72_t cl34894;
        cl34894 = new_dpeg_closure_72();
        cl34894->fvar_1 = (dpeg_funtype_35_t)ivar_42;
        if (cl34894->fvar_1 != NULL) cl34894->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_42);
        ivar_28 = (dpeg__guard_t)cl34894;
        uint8_t ivar_41;
        ivar_41 = (uint8_t)2;
        uint32_t ivar_29;
        //copying to uint32 from uint8;
        ivar_29 = (uint32_t)ivar_41;
        uint8_t ivar_40;
        ivar_40 = (uint8_t)1;
        uint32_t ivar_30;
        //copying to uint32 from uint8;
        ivar_30 = (uint32_t)ivar_40;
        ivar_4 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_28, (uint32_t)ivar_29, (uint32_t)ivar_30);
        dpeg__dpeg_expr_adt_t ivar_5;
        dpeg_funtype_35_t ivar_81;
        dpeg_funtype_36_t ivar_60;
        dpeg_closure_73_t cl34895;
        cl34895 = new_dpeg_closure_73();
        ivar_60 = (dpeg_funtype_36_t)cl34895;
        ivar_81 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_60);
        dpeg__guard_t ivar_67;
        dpeg_closure_74_t cl34898;
        cl34898 = new_dpeg_closure_74();
        cl34898->fvar_1 = (dpeg_funtype_35_t)ivar_81;
        if (cl34898->fvar_1 != NULL) cl34898->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_81);
        ivar_67 = (dpeg__guard_t)cl34898;
        uint8_t ivar_80;
        ivar_80 = (uint8_t)6;
        uint32_t ivar_68;
        //copying to uint32 from uint8;
        ivar_68 = (uint32_t)ivar_80;
        uint8_t ivar_79;
        ivar_79 = (uint8_t)0;
        uint32_t ivar_69;
        //copying to uint32 from uint8;
        ivar_69 = (uint32_t)ivar_79;
        ivar_5 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_67, (uint32_t)ivar_68, (uint32_t)ivar_69);
        dpeg__dpeg_expr_adt_t ivar_6;
        dpeg_funtype_35_t ivar_120;
        dpeg_funtype_36_t ivar_99;
        dpeg_closure_75_t cl34899;
        cl34899 = new_dpeg_closure_75();
        ivar_99 = (dpeg_funtype_36_t)cl34899;
        ivar_120 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_99);
        dpeg__guard_t ivar_106;
        dpeg_closure_76_t cl34902;
        cl34902 = new_dpeg_closure_76();
        cl34902->fvar_1 = (dpeg_funtype_35_t)ivar_120;
        if (cl34902->fvar_1 != NULL) cl34902->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_120);
        ivar_106 = (dpeg__guard_t)cl34902;
        uint8_t ivar_119;
        ivar_119 = (uint8_t)2;
        uint32_t ivar_107;
        //copying to uint32 from uint8;
        ivar_107 = (uint32_t)ivar_119;
        uint8_t ivar_118;
        ivar_118 = (uint8_t)3;
        uint32_t ivar_108;
        //copying to uint32 from uint8;
        ivar_108 = (uint32_t)ivar_118;
        ivar_6 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_106, (uint32_t)ivar_107, (uint32_t)ivar_108);
        dpeg__dpeg_expr_adt_t ivar_7;
        dpeg_funtype_35_t ivar_159;
        dpeg_funtype_36_t ivar_138;
        dpeg_closure_77_t cl34903;
        cl34903 = new_dpeg_closure_77();
        ivar_138 = (dpeg_funtype_36_t)cl34903;
        ivar_159 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_138);
        dpeg__guard_t ivar_145;
        dpeg_closure_78_t cl34906;
        cl34906 = new_dpeg_closure_78();
        cl34906->fvar_1 = (dpeg_funtype_35_t)ivar_159;
        if (cl34906->fvar_1 != NULL) cl34906->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_159);
        ivar_145 = (dpeg__guard_t)cl34906;
        uint8_t ivar_158;
        ivar_158 = (uint8_t)6;
        uint32_t ivar_146;
        //copying to uint32 from uint8;
        ivar_146 = (uint32_t)ivar_158;
        uint8_t ivar_157;
        ivar_157 = (uint8_t)0;
        uint32_t ivar_147;
        //copying to uint32 from uint8;
        ivar_147 = (uint32_t)ivar_157;
        ivar_7 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_145, (uint32_t)ivar_146, (uint32_t)ivar_147);
        dpeg__dpeg_expr_adt_t ivar_8;
        dpeg_funtype_35_t ivar_198;
        dpeg_funtype_36_t ivar_177;
        dpeg_closure_79_t cl34907;
        cl34907 = new_dpeg_closure_79();
        ivar_177 = (dpeg_funtype_36_t)cl34907;
        ivar_198 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_177);
        dpeg__guard_t ivar_184;
        dpeg_closure_80_t cl34910;
        cl34910 = new_dpeg_closure_80();
        cl34910->fvar_1 = (dpeg_funtype_35_t)ivar_198;
        if (cl34910->fvar_1 != NULL) cl34910->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_198);
        ivar_184 = (dpeg__guard_t)cl34910;
        uint8_t ivar_197;
        ivar_197 = (uint8_t)5;
        uint32_t ivar_185;
        //copying to uint32 from uint8;
        ivar_185 = (uint32_t)ivar_197;
        uint8_t ivar_196;
        ivar_196 = (uint8_t)4;
        uint32_t ivar_186;
        //copying to uint32 from uint8;
        ivar_186 = (uint32_t)ivar_196;
        ivar_8 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_184, (uint32_t)ivar_185, (uint32_t)ivar_186);
        dpeg__dpeg_expr_adt_t ivar_9;
        dpeg_funtype_35_t ivar_237;
        dpeg_funtype_36_t ivar_216;
        dpeg_closure_81_t cl34911;
        cl34911 = new_dpeg_closure_81();
        ivar_216 = (dpeg_funtype_36_t)cl34911;
        ivar_237 = (dpeg_funtype_35_t)dpeg__mk_guard((dpeg_funtype_36_t)ivar_216);
        dpeg__guard_t ivar_223;
        dpeg_closure_82_t cl34914;
        cl34914 = new_dpeg_closure_82();
        cl34914->fvar_1 = (dpeg_funtype_35_t)ivar_237;
        if (cl34914->fvar_1 != NULL) cl34914->fvar_1->count++;
        release_dpeg_funtype_35((dpeg_funtype_35_t)ivar_237);
        ivar_223 = (dpeg__guard_t)cl34914;
        uint8_t ivar_236;
        ivar_236 = (uint8_t)6;
        uint32_t ivar_224;
        //copying to uint32 from uint8;
        ivar_224 = (uint32_t)ivar_236;
        uint8_t ivar_235;
        ivar_235 = (uint8_t)0;
        uint32_t ivar_225;
        //copying to uint32 from uint8;
        ivar_225 = (uint32_t)ivar_235;
        ivar_9 = (dpeg__dpeg_expr_adt_t)con_dpeg__glte((dpeg__guard_t)ivar_223, (uint32_t)ivar_224, (uint32_t)ivar_225);
        ivar_244 = (dpeg_array_29_t)new_dpeg_array_29(8);
        ivar_244->elems[0]= ivar_2;
        ivar_244->elems[1]= ivar_3;
        ivar_244->elems[2]= ivar_4;
        ivar_244->elems[3]= ivar_5;
        ivar_244->elems[4]= ivar_6;
        ivar_244->elems[5]= ivar_7;
        ivar_244->elems[6]= ivar_8;
        ivar_244->elems[7]= ivar_9;
        dpeg__dpeg_grammar_t tmp34915 = new_dpeg__dpeg_grammar();;
        result = (dpeg__dpeg_grammar_t)tmp34915;
        tmp34915->length = (uint32_t)ivar_1;
        tmp34915->seq = (dpeg_array_29_t)ivar_244;
        defined = true;};
        
        result->count++;
        return result;
}

bool_t dpeg__test_string1(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__string_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)7;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34919 = 0;
        uint32_t characters34920[0] = {};
        stringliteral_t string34918 = mk_string(0, characters34920);
        ivar_11 = (strings__string_t)strings__make_string(len34919, string34918);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)0;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_string1_1(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__string_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)7;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34924 = 2;
        uint32_t characters34925[2] = {34, 34};
        stringliteral_t string34923 = mk_string(2, characters34925);
        ivar_11 = (strings__string_t)strings__make_string(len34924, string34923);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)3;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_string2(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__string_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)7;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34929 = 6;
        uint32_t characters34930[6] = {34, 110, 117, 108, 108, 34};
        stringliteral_t string34928 = mk_string(6, characters34930);
        ivar_11 = (strings__string_t)strings__make_string(len34929, string34928);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)7;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_string3(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__string_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)7;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34934 = 13;
        uint32_t characters34935[13] = {34, 115, 116, 114, 8, 116, 110, 105, 110, 103, 92, 34, 32};
        stringliteral_t string34933 = mk_string(13, characters34935);
        ivar_11 = (strings__string_t)strings__make_string(len34934, string34933);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)0;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_string3_1(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__string_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)7;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34939 = 14;
        uint32_t characters34940[14] = {34, 115, 116, 114, 8, 116, 110, 105, 110, 103, 92, 34, 34, 32};
        stringliteral_t string34938 = mk_string(14, characters34940);
        ivar_11 = (strings__string_t)strings__make_string(len34939, string34938);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)15;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_string4(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__string_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)7;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34944 = 13;
        uint32_t characters34945[13] = {34, 102, 97, 108, 115, 101, 32, 102, 97, 108, 115, 101, 34};
        stringliteral_t string34943 = mk_string(13, characters34945);
        ivar_11 = (strings__string_t)strings__make_string(len34944, string34943);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)2;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)0;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_string4_1(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__string_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)7;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34949 = 13;
        uint32_t characters34950[13] = {34, 102, 97, 108, 115, 101, 32, 102, 97, 108, 115, 101, 34};
        stringliteral_t string34948 = mk_string(13, characters34950);
        ivar_11 = (strings__string_t)strings__make_string(len34949, string34948);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)14;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_string5(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__string_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)7;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34954 = 11;
        uint32_t characters34955[11] = {34, 92, 34, 92, 34, 92, 107, 101, 121, 34, 32};
        stringliteral_t string34953 = mk_string(11, characters34955);
        ivar_11 = (strings__string_t)strings__make_string(len34954, string34953);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)0;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_string5_1(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__string_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)7;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34959 = 11;
        uint32_t characters34960[11] = {34, 92, 34, 92, 34, 10, 107, 101, 121, 34, 32};
        stringliteral_t string34958 = mk_string(11, characters34960);
        ivar_11 = (strings__string_t)strings__make_string(len34959, string34958);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)12;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_string6(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__string_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)7;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34964 = 29;
        uint32_t characters34965[29] = {34, 102, 97, 108, 115, 101, 32, 102, 97, 108, 115, 101, 34, 32, 32, 32, 34, 116, 114, 117, 101, 32, 116, 114, 117, 101, 34, 32, 32};
        stringliteral_t string34963 = mk_string(29, characters34965);
        ivar_11 = (strings__string_t)strings__make_string(len34964, string34963);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)0;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)17;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t dpeg__test_string6_1(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        uint32_t ivar_1;
        dpeg__dpeg_grammar_t ivar_13;
        ivar_13 = (dpeg__dpeg_grammar_t)dpeg__string_grammar();
        if (ivar_13 != NULL) ivar_13->count++;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)7;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_26;
        bytestrings__bytestring_t ivar_16;
        strings__string_t ivar_11;
        uint32_t len34969 = 29;
        uint32_t characters34970[29] = {34, 102, 97, 108, 115, 101, 32, 102, 97, 108, 115, 101, 34, 32, 32, 32, 34, 116, 114, 117, 101, 32, 116, 114, 117, 101, 34, 32, 32};
        stringliteral_t string34968 = mk_string(29, characters34970);
        ivar_11 = (strings__string_t)strings__make_string(len34969, string34968);
        ivar_16 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_11);
        uint8_t ivar_25;
        ivar_25 = (uint8_t)0;
        uint32_t ivar_17;
        //copying to uint32 from uint8;
        ivar_17 = (uint32_t)ivar_25;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)16;
        uint32_t ivar_19;
        //copying to uint32 from uint8;
        ivar_19 = (uint32_t)ivar_24;
        ivar_1 = (uint32_t)dpeg__dpeg_parse((dpeg__dpeg_grammar_t)ivar_13, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_16, (uint32_t)ivar_17, (uint32_t)ivar_19);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)14;
        result = (ivar_1 == ivar_2);
        defined = true;};
        
        
        return result;
}
