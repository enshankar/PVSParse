//Code generated using pvs2ir2c
#include "sigmatopdown_c.h"


sigmatopdown__ent_adt_t new_sigmatopdown__ent_adt(void){
        sigmatopdown__ent_adt_t tmp = (sigmatopdown__ent_adt_t) safe_malloc(sizeof(struct sigmatopdown__ent_adt_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown__ent_adt(sigmatopdown__ent_adt_t x){
switch (x->sigmatopdown__ent_adt_index) {
case 0:  release_sigmatopdown__fail((sigmatopdown__fail_t) x); break;
case 3:  release_sigmatopdown__good((sigmatopdown__good_t) x); break;
case 4:  release_sigmatopdown__push((sigmatopdown__push_t) x); break;
}}

void release_sigmatopdown__ent_adt_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown__ent_adt((sigmatopdown__ent_adt_t)x);
}

sigmatopdown__ent_adt_t copy_sigmatopdown__ent_adt(sigmatopdown__ent_adt_t x){
        sigmatopdown__ent_adt_t y = new_sigmatopdown__ent_adt();
        y->sigmatopdown__ent_adt_index = (uint8_t)x->sigmatopdown__ent_adt_index;
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown__ent_adt(sigmatopdown__ent_adt_t x, sigmatopdown__ent_adt_t y){
        bool_t tmp = x->sigmatopdown__ent_adt_index == y->sigmatopdown__ent_adt_index;
        switch  (x->sigmatopdown__ent_adt_index) {
                case 0: tmp = tmp && equal_sigmatopdown__fail((sigmatopdown__fail_t) x, (sigmatopdown__fail_t) y); break;
                case 3: tmp = tmp && equal_sigmatopdown__good((sigmatopdown__good_t) x, (sigmatopdown__good_t) y); break;
                case 4: tmp = tmp && equal_sigmatopdown__push((sigmatopdown__push_t) x, (sigmatopdown__push_t) y); break;
        }
        return tmp;
}

char * json_sigmatopdown__ent_adt(sigmatopdown__ent_adt_t x){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ constructor = %u", x->sigmatopdown__ent_adt_index);
        switch  (x->sigmatopdown__ent_adt_index) {
                case 0: tmp = safe_strcat(tmp, json_sigmatopdown__fail((sigmatopdown__fail_t) x)); break;
                case 3: tmp = safe_strcat(tmp, json_sigmatopdown__good((sigmatopdown__good_t) x)); break;
                case 4: tmp = safe_strcat(tmp, json_sigmatopdown__push((sigmatopdown__push_t) x)); break;
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_sigmatopdown__ent_adt_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__ent_adt_t T){
        return equal_sigmatopdown__ent_adt((sigmatopdown__ent_adt_t)x, (sigmatopdown__ent_adt_t)y);
}

char * json_sigmatopdown__ent_adt_ptr(pointer_t x, actual_sigmatopdown__ent_adt_t T){
        return json_sigmatopdown__ent_adt((sigmatopdown__ent_adt_t)x);
}

actual_sigmatopdown__ent_adt_t actual_sigmatopdown__ent_adt(){
        actual_sigmatopdown__ent_adt_t new = (actual_sigmatopdown__ent_adt_t)safe_malloc(sizeof(struct actual_sigmatopdown__ent_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown__ent_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown__ent_adt_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown__ent_adt_ptr);
 

 
        return new;
 };

sigmatopdown__ent_adt_t update_sigmatopdown__ent_adt_sigmatopdown__ent_adt_index(sigmatopdown__ent_adt_t x, uint8_t v){
        sigmatopdown__ent_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__ent_adt(x); x->count--;};
        y->sigmatopdown__ent_adt_index = (uint8_t)v;
        return y;}




sigmatopdown__fail_t new_sigmatopdown__fail(void){
        sigmatopdown__fail_t tmp = (sigmatopdown__fail_t) safe_malloc(sizeof(struct sigmatopdown__fail_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown__fail(sigmatopdown__fail_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown__fail_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown__fail((sigmatopdown__fail_t)x);
}

sigmatopdown__fail_t copy_sigmatopdown__fail(sigmatopdown__fail_t x){
        sigmatopdown__fail_t y = new_sigmatopdown__fail();
        y->sigmatopdown__ent_adt_index = (uint8_t)x->sigmatopdown__ent_adt_index;
        y->dep = (uint64_t)x->dep;
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown__fail(sigmatopdown__fail_t x, sigmatopdown__fail_t y){
        bool_t tmp = true;
        tmp = tmp && x->sigmatopdown__ent_adt_index == y->sigmatopdown__ent_adt_index;
        tmp = tmp && x->dep == y->dep;
        return tmp;}

char * json_sigmatopdown__fail(sigmatopdown__fail_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(39);
         sprintf(fld0, "\"sigmatopdown__ent_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->sigmatopdown__ent_adt_index));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"dep\" : ");
        tmp[1] = safe_strcat(fld1, json_uint64(x->dep));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown__fail_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__fail_t T){
        return equal_sigmatopdown__fail((sigmatopdown__fail_t)x, (sigmatopdown__fail_t)y);
}

char * json_sigmatopdown__fail_ptr(pointer_t x, actual_sigmatopdown__fail_t T){
        return json_sigmatopdown__fail((sigmatopdown__fail_t)x);
}

actual_sigmatopdown__fail_t actual_sigmatopdown__fail(){
        actual_sigmatopdown__fail_t new = (actual_sigmatopdown__fail_t)safe_malloc(sizeof(struct actual_sigmatopdown__fail_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown__fail_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown__fail_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown__fail_ptr);
 

 
        return new;
 };

sigmatopdown__fail_t update_sigmatopdown__fail_sigmatopdown__ent_adt_index(sigmatopdown__fail_t x, uint8_t v){
        sigmatopdown__fail_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__fail(x); x->count--;};
        y->sigmatopdown__ent_adt_index = (uint8_t)v;
        return y;}

sigmatopdown__fail_t update_sigmatopdown__fail_dep(sigmatopdown__fail_t x, uint64_t v){
        sigmatopdown__fail_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__fail(x); x->count--;};
        y->dep = (uint64_t)v;
        return y;}




sigmatopdown__good_t new_sigmatopdown__good(void){
        sigmatopdown__good_t tmp = (sigmatopdown__good_t) safe_malloc(sizeof(struct sigmatopdown__good_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown__good(sigmatopdown__good_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown__good_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown__good((sigmatopdown__good_t)x);
}

sigmatopdown__good_t copy_sigmatopdown__good(sigmatopdown__good_t x){
        sigmatopdown__good_t y = new_sigmatopdown__good();
        y->sigmatopdown__ent_adt_index = (uint8_t)x->sigmatopdown__ent_adt_index;
        y->dep = (uint64_t)x->dep;
        y->span = (uint32_t)x->span;
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown__good(sigmatopdown__good_t x, sigmatopdown__good_t y){
        bool_t tmp = true;
        tmp = tmp && x->sigmatopdown__ent_adt_index == y->sigmatopdown__ent_adt_index;
        tmp = tmp && x->dep == y->dep;
        tmp = tmp && x->span == y->span;
        return tmp;}

char * json_sigmatopdown__good(sigmatopdown__good_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(39);
         sprintf(fld0, "\"sigmatopdown__ent_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->sigmatopdown__ent_adt_index));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"dep\" : ");
        tmp[1] = safe_strcat(fld1, json_uint64(x->dep));
        char * fld2 = safe_malloc(16);
         sprintf(fld2, "\"span\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->span));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown__good_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__good_t T){
        return equal_sigmatopdown__good((sigmatopdown__good_t)x, (sigmatopdown__good_t)y);
}

char * json_sigmatopdown__good_ptr(pointer_t x, actual_sigmatopdown__good_t T){
        return json_sigmatopdown__good((sigmatopdown__good_t)x);
}

actual_sigmatopdown__good_t actual_sigmatopdown__good(){
        actual_sigmatopdown__good_t new = (actual_sigmatopdown__good_t)safe_malloc(sizeof(struct actual_sigmatopdown__good_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown__good_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown__good_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown__good_ptr);
 

 
        return new;
 };

sigmatopdown__good_t update_sigmatopdown__good_sigmatopdown__ent_adt_index(sigmatopdown__good_t x, uint8_t v){
        sigmatopdown__good_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__good(x); x->count--;};
        y->sigmatopdown__ent_adt_index = (uint8_t)v;
        return y;}

sigmatopdown__good_t update_sigmatopdown__good_dep(sigmatopdown__good_t x, uint64_t v){
        sigmatopdown__good_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__good(x); x->count--;};
        y->dep = (uint64_t)v;
        return y;}

sigmatopdown__good_t update_sigmatopdown__good_span(sigmatopdown__good_t x, uint32_t v){
        sigmatopdown__good_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__good(x); x->count--;};
        y->span = (uint32_t)v;
        return y;}




sigmatopdown__push_t new_sigmatopdown__push(void){
        sigmatopdown__push_t tmp = (sigmatopdown__push_t) safe_malloc(sizeof(struct sigmatopdown__push_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown__push(sigmatopdown__push_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown__push_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown__push((sigmatopdown__push_t)x);
}

sigmatopdown__push_t copy_sigmatopdown__push(sigmatopdown__push_t x){
        sigmatopdown__push_t y = new_sigmatopdown__push();
        y->sigmatopdown__ent_adt_index = (uint8_t)x->sigmatopdown__ent_adt_index;
        y->pos = (uint32_t)x->pos;
        y->nt = (uint8_t)x->nt;
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown__push(sigmatopdown__push_t x, sigmatopdown__push_t y){
        bool_t tmp = true;
        tmp = tmp && x->sigmatopdown__ent_adt_index == y->sigmatopdown__ent_adt_index;
        tmp = tmp && x->pos == y->pos;
        tmp = tmp && x->nt == y->nt;
        return tmp;}

char * json_sigmatopdown__push(sigmatopdown__push_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(39);
         sprintf(fld0, "\"sigmatopdown__ent_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->sigmatopdown__ent_adt_index));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"pos\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->pos));
        char * fld2 = safe_malloc(14);
         sprintf(fld2, "\"nt\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->nt));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown__push_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__push_t T){
        return equal_sigmatopdown__push((sigmatopdown__push_t)x, (sigmatopdown__push_t)y);
}

char * json_sigmatopdown__push_ptr(pointer_t x, actual_sigmatopdown__push_t T){
        return json_sigmatopdown__push((sigmatopdown__push_t)x);
}

actual_sigmatopdown__push_t actual_sigmatopdown__push(){
        actual_sigmatopdown__push_t new = (actual_sigmatopdown__push_t)safe_malloc(sizeof(struct actual_sigmatopdown__push_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown__push_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown__push_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown__push_ptr);
 

 
        return new;
 };

sigmatopdown__push_t update_sigmatopdown__push_sigmatopdown__ent_adt_index(sigmatopdown__push_t x, uint8_t v){
        sigmatopdown__push_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__push(x); x->count--;};
        y->sigmatopdown__ent_adt_index = (uint8_t)v;
        return y;}

sigmatopdown__push_t update_sigmatopdown__push_pos(sigmatopdown__push_t x, uint32_t v){
        sigmatopdown__push_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__push(x); x->count--;};
        y->pos = (uint32_t)v;
        return y;}

sigmatopdown__push_t update_sigmatopdown__push_nt(sigmatopdown__push_t x, uint8_t v){
        sigmatopdown__push_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__push(x); x->count--;};
        y->nt = (uint8_t)v;
        return y;}



void release_sigmatopdown_funtype_4(sigmatopdown_funtype_4_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_4_t copy_sigmatopdown_funtype_4(sigmatopdown_funtype_4_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_4(sigmatopdown_funtype_4_t x, sigmatopdown_funtype_4_t y){
        return false;}

char* json_sigmatopdown_funtype_4(sigmatopdown_funtype_4_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"sigmatopdown_funtype_4\""); return result;}

void release_sigmatopdown_funtype_5(sigmatopdown_funtype_5_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_5_t copy_sigmatopdown_funtype_5(sigmatopdown_funtype_5_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_5(sigmatopdown_funtype_5_t x, sigmatopdown_funtype_5_t y){
        return false;}

char* json_sigmatopdown_funtype_5(sigmatopdown_funtype_5_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"sigmatopdown_funtype_5\""); return result;}

void release_sigmatopdown_funtype_6(sigmatopdown_funtype_6_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_6_t copy_sigmatopdown_funtype_6(sigmatopdown_funtype_6_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatopdown_funtype_6(sigmatopdown_funtype_6_htbl_t htbl, uint64_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatopdown_funtype_6_hashentry_t data = htbl->data[hashindex];
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

sigmatopdown_funtype_6_t dupdate_sigmatopdown_funtype_6(sigmatopdown_funtype_6_t a, uint64_t i, mpz_ptr_t v){
        sigmatopdown_funtype_6_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatopdown_funtype_6_htbl_t)safe_malloc(sizeof(struct sigmatopdown_funtype_6_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatopdown_funtype_6_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatopdown_funtype_6_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint64_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatopdown_funtype_6_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatopdown_funtype_6_hashentry_t * new_data = (sigmatopdown_funtype_6_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatopdown_funtype_6_hashentry_s));
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
                                new_data[new_loc].key = (uint64_t)data[j].key;
                                new_data[new_loc].keyhash = keyhash;
                                mpz_set(new_data[new_loc].value, data[j].value);
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint64_hash(i);
        uint32_t hashindex = lookup_sigmatopdown_funtype_6(htbl, i, ihash);
        sigmatopdown_funtype_6_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint64_t)i; htbl->data[hashindex].keyhash = ihash; mpz_set(htbl->data[hashindex].value, v); htbl->num_entries++;}
            else {mpz_ptr_t tempvalue;mpz_mk_set(tempvalue, htbl->data[hashindex].value);mpz_set(htbl->data[hashindex].value, v);};
        return a;

}

sigmatopdown_funtype_6_t update_sigmatopdown_funtype_6(sigmatopdown_funtype_6_t a, uint64_t i, mpz_ptr_t v){
        if (a->count == 1){
                return dupdate_sigmatopdown_funtype_6(a, i, v);
            } else {
                sigmatopdown_funtype_6_t x = copy_sigmatopdown_funtype_6(a);
                a->count--;
                return dupdate_sigmatopdown_funtype_6(x, i, v);
            }}

bool_t equal_sigmatopdown_funtype_6(sigmatopdown_funtype_6_t x, sigmatopdown_funtype_6_t y){
        return false;}

char* json_sigmatopdown_funtype_6(sigmatopdown_funtype_6_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"sigmatopdown_funtype_6\""); return result;}


sigmatopdown_record_7_t new_sigmatopdown_record_7(void){
        sigmatopdown_record_7_t tmp = (sigmatopdown_record_7_t) safe_malloc(sizeof(struct sigmatopdown_record_7_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown_record_7(sigmatopdown_record_7_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown_record_7_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_record_7((sigmatopdown_record_7_t)x);
}

sigmatopdown_record_7_t copy_sigmatopdown_record_7(sigmatopdown_record_7_t x){
        sigmatopdown_record_7_t y = new_sigmatopdown_record_7();
        y->project_1 = (uint64_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown_record_7(sigmatopdown_record_7_t x, sigmatopdown_record_7_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

char * json_sigmatopdown_record_7(sigmatopdown_record_7_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint64(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown_record_7_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_7_t T){
        return equal_sigmatopdown_record_7((sigmatopdown_record_7_t)x, (sigmatopdown_record_7_t)y);
}

char * json_sigmatopdown_record_7_ptr(pointer_t x, actual_sigmatopdown_record_7_t T){
        return json_sigmatopdown_record_7((sigmatopdown_record_7_t)x);
}

actual_sigmatopdown_record_7_t actual_sigmatopdown_record_7(){
        actual_sigmatopdown_record_7_t new = (actual_sigmatopdown_record_7_t)safe_malloc(sizeof(struct actual_sigmatopdown_record_7_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_record_7_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_record_7_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_record_7_ptr);
 

 
        return new;
 };

sigmatopdown_record_7_t update_sigmatopdown_record_7_project_1(sigmatopdown_record_7_t x, uint64_t v){
        sigmatopdown_record_7_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_7(x); x->count--;};
        y->project_1 = (uint64_t)v;
        return y;}

sigmatopdown_record_7_t update_sigmatopdown_record_7_project_2(sigmatopdown_record_7_t x, uint32_t v){
        sigmatopdown_record_7_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_7(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}



void release_sigmatopdown_funtype_8(sigmatopdown_funtype_8_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_8_t copy_sigmatopdown_funtype_8(sigmatopdown_funtype_8_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_8(sigmatopdown_funtype_8_t x, sigmatopdown_funtype_8_t y){
        return false;}

char* json_sigmatopdown_funtype_8(sigmatopdown_funtype_8_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"sigmatopdown_funtype_8\""); return result;}


sigmatopdown_record_9_t new_sigmatopdown_record_9(void){
        sigmatopdown_record_9_t tmp = (sigmatopdown_record_9_t) safe_malloc(sizeof(struct sigmatopdown_record_9_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown_record_9(sigmatopdown_record_9_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown_record_9_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_record_9((sigmatopdown_record_9_t)x);
}

sigmatopdown_record_9_t copy_sigmatopdown_record_9(sigmatopdown_record_9_t x){
        sigmatopdown_record_9_t y = new_sigmatopdown_record_9();
        y->project_1 = (uint32_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown_record_9(sigmatopdown_record_9_t x, sigmatopdown_record_9_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

char * json_sigmatopdown_record_9(sigmatopdown_record_9_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint32(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown_record_9_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_9_t T){
        return equal_sigmatopdown_record_9((sigmatopdown_record_9_t)x, (sigmatopdown_record_9_t)y);
}

char * json_sigmatopdown_record_9_ptr(pointer_t x, actual_sigmatopdown_record_9_t T){
        return json_sigmatopdown_record_9((sigmatopdown_record_9_t)x);
}

actual_sigmatopdown_record_9_t actual_sigmatopdown_record_9(){
        actual_sigmatopdown_record_9_t new = (actual_sigmatopdown_record_9_t)safe_malloc(sizeof(struct actual_sigmatopdown_record_9_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_record_9_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_record_9_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_record_9_ptr);
 

 
        return new;
 };

sigmatopdown_record_9_t update_sigmatopdown_record_9_project_1(sigmatopdown_record_9_t x, uint32_t v){
        sigmatopdown_record_9_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_9(x); x->count--;};
        y->project_1 = (uint32_t)v;
        return y;}

sigmatopdown_record_9_t update_sigmatopdown_record_9_project_2(sigmatopdown_record_9_t x, uint8_t v){
        sigmatopdown_record_9_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_9(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}



void release_sigmatopdown_funtype_10(sigmatopdown_funtype_10_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_10_t copy_sigmatopdown_funtype_10(sigmatopdown_funtype_10_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_10(sigmatopdown_funtype_10_t x, sigmatopdown_funtype_10_t y){
        return false;}

char* json_sigmatopdown_funtype_10(sigmatopdown_funtype_10_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_10\""); return result;}


mpz_ptr_t f_sigmatopdown_closure_11(struct sigmatopdown_closure_11_s * closure, sigmatopdown__ent_adt_t bvar){
        mpz_ptr_t result = h_sigmatopdown_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

mpz_ptr_t m_sigmatopdown_closure_11(struct sigmatopdown_closure_11_s * closure, sigmatopdown__ent_adt_t bvar){
        return h_sigmatopdown_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern mpz_ptr_t h_sigmatopdown_closure_11(sigmatopdown__ent_adt_t ivar_10, sigmatopdown_funtype_8_t ivar_5, sigmatopdown_funtype_10_t ivar_7, mpz_ptr_t ivar_4, mpz_ptr_t ivar_3, sigmatopdown_funtype_6_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_40;
        ivar_10->count++;
        ivar_40 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_10);
        if (ivar_40){ 
             uint64_t ivar_31;
             ivar_31 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_10);
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_31));
} else {
        
             bool_t ivar_44;
             ivar_10->count++;
             ivar_44 = (bool_t)r_sigmatopdown__pendingp((sigmatopdown__ent_adt_t)ivar_10);
             if (ivar_44){  
           release_sigmatopdown__ent_adt(ivar_10);
           //copying to mpz from mpz;
           mpz_mk_set(result, ivar_3);
} else {
             
           bool_t ivar_48;
           ivar_10->count++;
           ivar_48 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_10);
           if (ivar_48){   
           release_sigmatopdown__ent_adt(ivar_10);
           //copying to mpz from mpz;
           mpz_mk_set(result, ivar_4);
} else {
           
           bool_t ivar_67;
           ivar_10->count++;
           ivar_67 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_10);
           if (ivar_67){    
            uint64_t ivar_52;
            ivar_10->count++;
            ivar_52 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_10);
            uint32_t ivar_53;
            ivar_53 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_10);
            mpz_mk_set(result, ivar_5->ftbl->mptr(ivar_5, ivar_52, ivar_53));
} else {
           
            uint32_t ivar_71;
            ivar_10->count++;
            ivar_71 = (uint32_t)sigmatopdown__ent_adt_pos((sigmatopdown__ent_adt_t)ivar_10);
            uint8_t ivar_72;
            ivar_72 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_10);
            mpz_mk_set(result, ivar_7->ftbl->mptr(ivar_7, ivar_71, ivar_72));
};
};
};
};

        return result;
}

sigmatopdown_closure_11_t new_sigmatopdown_closure_11(void){
        static struct sigmatopdown_funtype_5_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(sigmatopdown_funtype_5_t, sigmatopdown__ent_adt_t))&f_sigmatopdown_closure_11, .mptr = (mpz_ptr_t (*)(sigmatopdown_funtype_5_t, sigmatopdown__ent_adt_t))&m_sigmatopdown_closure_11, .rptr =  (void (*)(sigmatopdown_funtype_5_t))&release_sigmatopdown_closure_11, .cptr = (sigmatopdown_funtype_5_t (*)(sigmatopdown_funtype_5_t))&copy_sigmatopdown_closure_11};
        sigmatopdown_closure_11_t tmp = (sigmatopdown_closure_11_t) safe_malloc(sizeof(struct sigmatopdown_closure_11_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_3);
        mpz_init(tmp->fvar_4);
        return tmp;}

void release_sigmatopdown_closure_11(sigmatopdown_funtype_5_t closure){
        sigmatopdown_closure_11_t x = (sigmatopdown_closure_11_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_funtype_8(x->fvar_1);
         release_sigmatopdown_funtype_10(x->fvar_2);
         release_sigmatopdown_funtype_6(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_11_t copy_sigmatopdown_closure_11(sigmatopdown_closure_11_t x){
        sigmatopdown_closure_11_t y = new_sigmatopdown_closure_11();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        mpz_set(y->fvar_3, x->fvar_3);
        mpz_set(y->fvar_4, x->fvar_4);
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            sigmatopdown_funtype_5_htbl_t new_htbl = (sigmatopdown_funtype_5_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_5_hashentry_t * new_data = (sigmatopdown_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_5_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatopdown_record_12_t new_sigmatopdown_record_12(void){
        sigmatopdown_record_12_t tmp = (sigmatopdown_record_12_t) safe_malloc(sizeof(struct sigmatopdown_record_12_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown_record_12(sigmatopdown_record_12_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__ent_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown_record_12_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_record_12((sigmatopdown_record_12_t)x);
}

sigmatopdown_record_12_t copy_sigmatopdown_record_12(sigmatopdown_record_12_t x){
        sigmatopdown_record_12_t y = new_sigmatopdown_record_12();
        y->project_1 = (uint64_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown_record_12(sigmatopdown_record_12_t x, sigmatopdown_record_12_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->project_2, y->project_2);
        return tmp;}

char * json_sigmatopdown_record_12(sigmatopdown_record_12_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint64(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_sigmatopdown__ent_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown_record_12_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_12_t T){
        return equal_sigmatopdown_record_12((sigmatopdown_record_12_t)x, (sigmatopdown_record_12_t)y);
}

char * json_sigmatopdown_record_12_ptr(pointer_t x, actual_sigmatopdown_record_12_t T){
        return json_sigmatopdown_record_12((sigmatopdown_record_12_t)x);
}

actual_sigmatopdown_record_12_t actual_sigmatopdown_record_12(){
        actual_sigmatopdown_record_12_t new = (actual_sigmatopdown_record_12_t)safe_malloc(sizeof(struct actual_sigmatopdown_record_12_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_record_12_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_record_12_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_record_12_ptr);
 

 
        return new;
 };

sigmatopdown_record_12_t update_sigmatopdown_record_12_project_1(sigmatopdown_record_12_t x, uint64_t v){
        sigmatopdown_record_12_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_12(x); x->count--;};
        y->project_1 = (uint64_t)v;
        return y;}

sigmatopdown_record_12_t update_sigmatopdown_record_12_project_2(sigmatopdown_record_12_t x, sigmatopdown__ent_adt_t v){
        sigmatopdown_record_12_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_sigmatopdown__ent_adt(x->project_2);};}
        else {y = copy_sigmatopdown_record_12(x); x->count--; y->project_2->count--;};
        y->project_2 = (sigmatopdown__ent_adt_t)v;
        return y;}



void release_sigmatopdown_funtype_13(sigmatopdown_funtype_13_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_13_t copy_sigmatopdown_funtype_13(sigmatopdown_funtype_13_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_13(sigmatopdown_funtype_13_t x, sigmatopdown_funtype_13_t y){
        return false;}

char* json_sigmatopdown_funtype_13(sigmatopdown_funtype_13_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_13\""); return result;}


sigmatopdown_record_14_t new_sigmatopdown_record_14(void){
        sigmatopdown_record_14_t tmp = (sigmatopdown_record_14_t) safe_malloc(sizeof(struct sigmatopdown_record_14_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown_record_14(sigmatopdown_record_14_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__ent_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown_record_14_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_record_14((sigmatopdown_record_14_t)x);
}

sigmatopdown_record_14_t copy_sigmatopdown_record_14(sigmatopdown_record_14_t x){
        sigmatopdown_record_14_t y = new_sigmatopdown_record_14();
        y->project_1 = (uint64_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown_record_14(sigmatopdown_record_14_t x, sigmatopdown_record_14_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->project_3, y->project_3);
        return tmp;}

char * json_sigmatopdown_record_14(sigmatopdown_record_14_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint64(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_sigmatopdown__ent_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown_record_14_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_14_t T){
        return equal_sigmatopdown_record_14((sigmatopdown_record_14_t)x, (sigmatopdown_record_14_t)y);
}

char * json_sigmatopdown_record_14_ptr(pointer_t x, actual_sigmatopdown_record_14_t T){
        return json_sigmatopdown_record_14((sigmatopdown_record_14_t)x);
}

actual_sigmatopdown_record_14_t actual_sigmatopdown_record_14(){
        actual_sigmatopdown_record_14_t new = (actual_sigmatopdown_record_14_t)safe_malloc(sizeof(struct actual_sigmatopdown_record_14_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_record_14_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_record_14_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_record_14_ptr);
 

 
        return new;
 };

sigmatopdown_record_14_t update_sigmatopdown_record_14_project_1(sigmatopdown_record_14_t x, uint64_t v){
        sigmatopdown_record_14_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_14(x); x->count--;};
        y->project_1 = (uint64_t)v;
        return y;}

sigmatopdown_record_14_t update_sigmatopdown_record_14_project_2(sigmatopdown_record_14_t x, uint32_t v){
        sigmatopdown_record_14_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_14(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

sigmatopdown_record_14_t update_sigmatopdown_record_14_project_3(sigmatopdown_record_14_t x, sigmatopdown__ent_adt_t v){
        sigmatopdown_record_14_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_sigmatopdown__ent_adt(x->project_3);};}
        else {y = copy_sigmatopdown_record_14(x); x->count--; y->project_3->count--;};
        y->project_3 = (sigmatopdown__ent_adt_t)v;
        return y;}



void release_sigmatopdown_funtype_15(sigmatopdown_funtype_15_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_15_t copy_sigmatopdown_funtype_15(sigmatopdown_funtype_15_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_15(sigmatopdown_funtype_15_t x, sigmatopdown_funtype_15_t y){
        return false;}

char* json_sigmatopdown_funtype_15(sigmatopdown_funtype_15_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_15\""); return result;}


sigmatopdown_record_16_t new_sigmatopdown_record_16(void){
        sigmatopdown_record_16_t tmp = (sigmatopdown_record_16_t) safe_malloc(sizeof(struct sigmatopdown_record_16_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown_record_16(sigmatopdown_record_16_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__ent_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown_record_16_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_record_16((sigmatopdown_record_16_t)x);
}

sigmatopdown_record_16_t copy_sigmatopdown_record_16(sigmatopdown_record_16_t x){
        sigmatopdown_record_16_t y = new_sigmatopdown_record_16();
        y->project_1 = (uint32_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown_record_16(sigmatopdown_record_16_t x, sigmatopdown_record_16_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->project_3, y->project_3);
        return tmp;}

char * json_sigmatopdown_record_16(sigmatopdown_record_16_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint32(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_sigmatopdown__ent_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown_record_16_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_16_t T){
        return equal_sigmatopdown_record_16((sigmatopdown_record_16_t)x, (sigmatopdown_record_16_t)y);
}

char * json_sigmatopdown_record_16_ptr(pointer_t x, actual_sigmatopdown_record_16_t T){
        return json_sigmatopdown_record_16((sigmatopdown_record_16_t)x);
}

actual_sigmatopdown_record_16_t actual_sigmatopdown_record_16(){
        actual_sigmatopdown_record_16_t new = (actual_sigmatopdown_record_16_t)safe_malloc(sizeof(struct actual_sigmatopdown_record_16_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_record_16_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_record_16_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_record_16_ptr);
 

 
        return new;
 };

sigmatopdown_record_16_t update_sigmatopdown_record_16_project_1(sigmatopdown_record_16_t x, uint32_t v){
        sigmatopdown_record_16_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_16(x); x->count--;};
        y->project_1 = (uint32_t)v;
        return y;}

sigmatopdown_record_16_t update_sigmatopdown_record_16_project_2(sigmatopdown_record_16_t x, uint8_t v){
        sigmatopdown_record_16_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_16(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

sigmatopdown_record_16_t update_sigmatopdown_record_16_project_3(sigmatopdown_record_16_t x, sigmatopdown__ent_adt_t v){
        sigmatopdown_record_16_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_sigmatopdown__ent_adt(x->project_3);};}
        else {y = copy_sigmatopdown_record_16(x); x->count--; y->project_3->count--;};
        y->project_3 = (sigmatopdown__ent_adt_t)v;
        return y;}



void release_sigmatopdown_funtype_17(sigmatopdown_funtype_17_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_17_t copy_sigmatopdown_funtype_17(sigmatopdown_funtype_17_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_17(sigmatopdown_funtype_17_t x, sigmatopdown_funtype_17_t y){
        return false;}

char* json_sigmatopdown_funtype_17(sigmatopdown_funtype_17_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_17\""); return result;}


mpz_ptr_t f_sigmatopdown_closure_18(struct sigmatopdown_closure_18_s * closure, sigmatopdown__ent_adt_t bvar){
        mpz_ptr_t result = h_sigmatopdown_closure_18(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

mpz_ptr_t m_sigmatopdown_closure_18(struct sigmatopdown_closure_18_s * closure, sigmatopdown__ent_adt_t bvar){
        return h_sigmatopdown_closure_18(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern mpz_ptr_t h_sigmatopdown_closure_18(sigmatopdown__ent_adt_t ivar_12, sigmatopdown_funtype_15_t ivar_7, sigmatopdown_funtype_17_t ivar_9, sigmatopdown_funtype_5_t ivar_5, sigmatopdown_funtype_5_t ivar_3, sigmatopdown_funtype_13_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_46;
        ivar_12->count++;
        ivar_46 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_12);
        if (ivar_46){ 
             uint64_t ivar_35;
             ivar_12->count++;
             ivar_35 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_12);
             mpz_mk_set(result, ivar_1->ftbl->mptr(ivar_1, ivar_35, ivar_12));
} else {
        
             bool_t ivar_55;
             ivar_12->count++;
             ivar_55 = (bool_t)r_sigmatopdown__pendingp((sigmatopdown__ent_adt_t)ivar_12);
             if (ivar_55){  
           mpz_mk_set(result, ivar_3->ftbl->fptr(ivar_3, ivar_12));
} else {
             
           bool_t ivar_64;
           ivar_12->count++;
           ivar_64 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_12);
           if (ivar_64){   
           mpz_mk_set(result, ivar_5->ftbl->fptr(ivar_5, ivar_12));
} else {
           
           bool_t ivar_85;
           ivar_12->count++;
           ivar_85 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_12);
           if (ivar_85){    
            uint64_t ivar_68;
            ivar_12->count++;
            ivar_68 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_12);
            uint32_t ivar_69;
            ivar_12->count++;
            ivar_69 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_12);
            mpz_mk_set(result, ivar_7->ftbl->mptr(ivar_7, ivar_68, ivar_69, ivar_12));
} else {
           
            uint32_t ivar_89;
            ivar_12->count++;
            ivar_89 = (uint32_t)sigmatopdown__ent_adt_pos((sigmatopdown__ent_adt_t)ivar_12);
            uint8_t ivar_90;
            ivar_12->count++;
            ivar_90 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_12);
            mpz_mk_set(result, ivar_9->ftbl->mptr(ivar_9, ivar_89, ivar_90, ivar_12));
};
};
};
};

        return result;
}

sigmatopdown_closure_18_t new_sigmatopdown_closure_18(void){
        static struct sigmatopdown_funtype_5_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(sigmatopdown_funtype_5_t, sigmatopdown__ent_adt_t))&f_sigmatopdown_closure_18, .mptr = (mpz_ptr_t (*)(sigmatopdown_funtype_5_t, sigmatopdown__ent_adt_t))&m_sigmatopdown_closure_18, .rptr =  (void (*)(sigmatopdown_funtype_5_t))&release_sigmatopdown_closure_18, .cptr = (sigmatopdown_funtype_5_t (*)(sigmatopdown_funtype_5_t))&copy_sigmatopdown_closure_18};
        sigmatopdown_closure_18_t tmp = (sigmatopdown_closure_18_t) safe_malloc(sizeof(struct sigmatopdown_closure_18_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_18(sigmatopdown_funtype_5_t closure){
        sigmatopdown_closure_18_t x = (sigmatopdown_closure_18_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_funtype_15(x->fvar_1);
         release_sigmatopdown_funtype_17(x->fvar_2);
         release_sigmatopdown_funtype_5(x->fvar_3);
         release_sigmatopdown_funtype_5(x->fvar_4);
         release_sigmatopdown_funtype_13(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_18_t copy_sigmatopdown_closure_18(sigmatopdown_closure_18_t x){
        sigmatopdown_closure_18_t y = new_sigmatopdown_closure_18();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            sigmatopdown_funtype_5_htbl_t new_htbl = (sigmatopdown_funtype_5_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_5_hashentry_t * new_data = (sigmatopdown_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_5_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatopdown_funtype_19(sigmatopdown_funtype_19_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_19_t copy_sigmatopdown_funtype_19(sigmatopdown_funtype_19_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_19(sigmatopdown_funtype_19_t x, sigmatopdown_funtype_19_t y){
        return false;}

char* json_sigmatopdown_funtype_19(sigmatopdown_funtype_19_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_19\""); return result;}

void release_sigmatopdown_funtype_20(sigmatopdown_funtype_20_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_20_t copy_sigmatopdown_funtype_20(sigmatopdown_funtype_20_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatopdown_funtype_20(sigmatopdown_funtype_20_htbl_t htbl, uint64_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatopdown_funtype_20_hashentry_t data = htbl->data[hashindex];
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

sigmatopdown_funtype_20_t dupdate_sigmatopdown_funtype_20(sigmatopdown_funtype_20_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v){
        sigmatopdown_funtype_20_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatopdown_funtype_20_htbl_t)safe_malloc(sizeof(struct sigmatopdown_funtype_20_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatopdown_funtype_20_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatopdown_funtype_20_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint64_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatopdown_funtype_20_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatopdown_funtype_20_hashentry_t * new_data = (sigmatopdown_funtype_20_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatopdown_funtype_20_hashentry_s));
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
                                new_data[new_loc].key = (uint64_t)data[j].key;
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (ordstruct_adt__ordstruct_adt_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint64_hash(i);
        uint32_t hashindex = lookup_sigmatopdown_funtype_20(htbl, i, ihash);
        sigmatopdown_funtype_20_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint64_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v; htbl->num_entries++;}
            else {ordstruct_adt__ordstruct_adt_t tempvalue;tempvalue = (ordstruct_adt__ordstruct_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ordstruct_adt__ordstruct_adt(tempvalue);};
        return a;

}

sigmatopdown_funtype_20_t update_sigmatopdown_funtype_20(sigmatopdown_funtype_20_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v){
        if (a->count == 1){
                return dupdate_sigmatopdown_funtype_20(a, i, v);
            } else {
                sigmatopdown_funtype_20_t x = copy_sigmatopdown_funtype_20(a);
                a->count--;
                return dupdate_sigmatopdown_funtype_20(x, i, v);
            }}

bool_t equal_sigmatopdown_funtype_20(sigmatopdown_funtype_20_t x, sigmatopdown_funtype_20_t y){
        return false;}

char* json_sigmatopdown_funtype_20(sigmatopdown_funtype_20_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_20\""); return result;}

void release_sigmatopdown_funtype_21(sigmatopdown_funtype_21_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_21_t copy_sigmatopdown_funtype_21(sigmatopdown_funtype_21_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_21(sigmatopdown_funtype_21_t x, sigmatopdown_funtype_21_t y){
        return false;}

char* json_sigmatopdown_funtype_21(sigmatopdown_funtype_21_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_21\""); return result;}

void release_sigmatopdown_funtype_22(sigmatopdown_funtype_22_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_22_t copy_sigmatopdown_funtype_22(sigmatopdown_funtype_22_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_22(sigmatopdown_funtype_22_t x, sigmatopdown_funtype_22_t y){
        return false;}

char* json_sigmatopdown_funtype_22(sigmatopdown_funtype_22_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_22\""); return result;}


ordstruct_adt__ordstruct_adt_t f_sigmatopdown_closure_23(struct sigmatopdown_closure_23_s * closure, sigmatopdown__ent_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_sigmatopdown_closure_23(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_sigmatopdown_closure_23(struct sigmatopdown_closure_23_s * closure, sigmatopdown__ent_adt_t bvar){
        return h_sigmatopdown_closure_23(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern ordstruct_adt__ordstruct_adt_t h_sigmatopdown_closure_23(sigmatopdown__ent_adt_t ivar_10, sigmatopdown_funtype_21_t ivar_5, sigmatopdown_funtype_22_t ivar_7, ordstruct_adt__ordstruct_adt_t ivar_4, ordstruct_adt__ordstruct_adt_t ivar_3, sigmatopdown_funtype_20_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_40;
        ivar_10->count++;
        ivar_40 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_10);
        if (ivar_40){ 
             uint64_t ivar_31;
             ivar_31 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_10);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_31);
} else {
        
             bool_t ivar_44;
             ivar_10->count++;
             ivar_44 = (bool_t)r_sigmatopdown__pendingp((sigmatopdown__ent_adt_t)ivar_10);
             if (ivar_44){  
           release_sigmatopdown__ent_adt(ivar_10);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3;
           if (result != NULL) result->count++;
} else {
             
           bool_t ivar_48;
           ivar_10->count++;
           ivar_48 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_10);
           if (ivar_48){   
           release_sigmatopdown__ent_adt(ivar_10);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           result = (ordstruct_adt__ordstruct_adt_t)ivar_4;
           if (result != NULL) result->count++;
} else {
           
           bool_t ivar_67;
           ivar_10->count++;
           ivar_67 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_10);
           if (ivar_67){    
            uint64_t ivar_52;
            ivar_10->count++;
            ivar_52 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_10);
            uint32_t ivar_53;
            ivar_53 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_10);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_5->ftbl->mptr(ivar_5, ivar_52, ivar_53);
} else {
           
            uint32_t ivar_71;
            ivar_10->count++;
            ivar_71 = (uint32_t)sigmatopdown__ent_adt_pos((sigmatopdown__ent_adt_t)ivar_10);
            uint8_t ivar_72;
            ivar_72 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_10);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_7->ftbl->mptr(ivar_7, ivar_71, ivar_72);
};
};
};
};

        return result;
}

sigmatopdown_closure_23_t new_sigmatopdown_closure_23(void){
        static struct sigmatopdown_funtype_19_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatopdown_funtype_19_t, sigmatopdown__ent_adt_t))&f_sigmatopdown_closure_23, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatopdown_funtype_19_t, sigmatopdown__ent_adt_t))&m_sigmatopdown_closure_23, .rptr =  (void (*)(sigmatopdown_funtype_19_t))&release_sigmatopdown_closure_23, .cptr = (sigmatopdown_funtype_19_t (*)(sigmatopdown_funtype_19_t))&copy_sigmatopdown_closure_23};
        sigmatopdown_closure_23_t tmp = (sigmatopdown_closure_23_t) safe_malloc(sizeof(struct sigmatopdown_closure_23_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_23(sigmatopdown_funtype_19_t closure){
        sigmatopdown_closure_23_t x = (sigmatopdown_closure_23_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_funtype_21(x->fvar_1);
         release_sigmatopdown_funtype_22(x->fvar_2);
         release_ordstruct_adt__ordstruct_adt(x->fvar_3);
         release_ordstruct_adt__ordstruct_adt(x->fvar_4);
         release_sigmatopdown_funtype_20(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_23_t copy_sigmatopdown_closure_23(sigmatopdown_closure_23_t x){
        sigmatopdown_closure_23_t y = new_sigmatopdown_closure_23();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            sigmatopdown_funtype_19_htbl_t new_htbl = (sigmatopdown_funtype_19_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_19_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_19_hashentry_t * new_data = (sigmatopdown_funtype_19_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_19_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_19_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatopdown_funtype_24(sigmatopdown_funtype_24_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_24_t copy_sigmatopdown_funtype_24(sigmatopdown_funtype_24_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_24(sigmatopdown_funtype_24_t x, sigmatopdown_funtype_24_t y){
        return false;}

char* json_sigmatopdown_funtype_24(sigmatopdown_funtype_24_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_24\""); return result;}

void release_sigmatopdown_funtype_25(sigmatopdown_funtype_25_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_25_t copy_sigmatopdown_funtype_25(sigmatopdown_funtype_25_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_25(sigmatopdown_funtype_25_t x, sigmatopdown_funtype_25_t y){
        return false;}

char* json_sigmatopdown_funtype_25(sigmatopdown_funtype_25_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_25\""); return result;}

void release_sigmatopdown_funtype_26(sigmatopdown_funtype_26_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_26_t copy_sigmatopdown_funtype_26(sigmatopdown_funtype_26_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_26(sigmatopdown_funtype_26_t x, sigmatopdown_funtype_26_t y){
        return false;}

char* json_sigmatopdown_funtype_26(sigmatopdown_funtype_26_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_26\""); return result;}


ordstruct_adt__ordstruct_adt_t f_sigmatopdown_closure_27(struct sigmatopdown_closure_27_s * closure, sigmatopdown__ent_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_sigmatopdown_closure_27(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_sigmatopdown_closure_27(struct sigmatopdown_closure_27_s * closure, sigmatopdown__ent_adt_t bvar){
        return h_sigmatopdown_closure_27(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern ordstruct_adt__ordstruct_adt_t h_sigmatopdown_closure_27(sigmatopdown__ent_adt_t ivar_12, sigmatopdown_funtype_25_t ivar_7, sigmatopdown_funtype_26_t ivar_9, sigmatopdown_funtype_19_t ivar_5, sigmatopdown_funtype_19_t ivar_3, sigmatopdown_funtype_24_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_46;
        ivar_12->count++;
        ivar_46 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_12);
        if (ivar_46){ 
             uint64_t ivar_35;
             ivar_12->count++;
             ivar_35 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_12);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->mptr(ivar_1, ivar_35, ivar_12);
} else {
        
             bool_t ivar_55;
             ivar_12->count++;
             ivar_55 = (bool_t)r_sigmatopdown__pendingp((sigmatopdown__ent_adt_t)ivar_12);
             if (ivar_55){  
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->fptr(ivar_3, ivar_12);
} else {
             
           bool_t ivar_64;
           ivar_12->count++;
           ivar_64 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_12);
           if (ivar_64){   
           result = (ordstruct_adt__ordstruct_adt_t)ivar_5->ftbl->fptr(ivar_5, ivar_12);
} else {
           
           bool_t ivar_85;
           ivar_12->count++;
           ivar_85 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_12);
           if (ivar_85){    
            uint64_t ivar_68;
            ivar_12->count++;
            ivar_68 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_12);
            uint32_t ivar_69;
            ivar_12->count++;
            ivar_69 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_12);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_7->ftbl->mptr(ivar_7, ivar_68, ivar_69, ivar_12);
} else {
           
            uint32_t ivar_89;
            ivar_12->count++;
            ivar_89 = (uint32_t)sigmatopdown__ent_adt_pos((sigmatopdown__ent_adt_t)ivar_12);
            uint8_t ivar_90;
            ivar_12->count++;
            ivar_90 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_12);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->mptr(ivar_9, ivar_89, ivar_90, ivar_12);
};
};
};
};

        return result;
}

sigmatopdown_closure_27_t new_sigmatopdown_closure_27(void){
        static struct sigmatopdown_funtype_19_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatopdown_funtype_19_t, sigmatopdown__ent_adt_t))&f_sigmatopdown_closure_27, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatopdown_funtype_19_t, sigmatopdown__ent_adt_t))&m_sigmatopdown_closure_27, .rptr =  (void (*)(sigmatopdown_funtype_19_t))&release_sigmatopdown_closure_27, .cptr = (sigmatopdown_funtype_19_t (*)(sigmatopdown_funtype_19_t))&copy_sigmatopdown_closure_27};
        sigmatopdown_closure_27_t tmp = (sigmatopdown_closure_27_t) safe_malloc(sizeof(struct sigmatopdown_closure_27_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_27(sigmatopdown_funtype_19_t closure){
        sigmatopdown_closure_27_t x = (sigmatopdown_closure_27_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_funtype_25(x->fvar_1);
         release_sigmatopdown_funtype_26(x->fvar_2);
         release_sigmatopdown_funtype_19(x->fvar_3);
         release_sigmatopdown_funtype_19(x->fvar_4);
         release_sigmatopdown_funtype_24(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_27_t copy_sigmatopdown_closure_27(sigmatopdown_closure_27_t x){
        sigmatopdown_closure_27_t y = new_sigmatopdown_closure_27();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            sigmatopdown_funtype_19_htbl_t new_htbl = (sigmatopdown_funtype_19_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_19_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_19_hashentry_t * new_data = (sigmatopdown_funtype_19_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_19_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_19_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatopdown__peg_adt_t new_sigmatopdown__peg_adt(void){
        sigmatopdown__peg_adt_t tmp = (sigmatopdown__peg_adt_t) safe_malloc(sizeof(struct sigmatopdown__peg_adt_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown__peg_adt(sigmatopdown__peg_adt_t x){
switch (x->sigmatopdown__peg_adt_index) {
case 2:  release_sigmatopdown__any((sigmatopdown__any_t) x); break;
case 3:  release_sigmatopdown__terminal((sigmatopdown__terminal_t) x); break;
case 4:  release_sigmatopdown__concat((sigmatopdown__concat_t) x); break;
case 5:  release_sigmatopdown__choice((sigmatopdown__choice_t) x); break;
case 6:  release_sigmatopdown__check((sigmatopdown__check_t) x); break;
case 7:  release_sigmatopdown__neg((sigmatopdown__neg_t) x); break;
}}

void release_sigmatopdown__peg_adt_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown__peg_adt((sigmatopdown__peg_adt_t)x);
}

sigmatopdown__peg_adt_t copy_sigmatopdown__peg_adt(sigmatopdown__peg_adt_t x){
        sigmatopdown__peg_adt_t y = new_sigmatopdown__peg_adt();
        y->sigmatopdown__peg_adt_index = (uint8_t)x->sigmatopdown__peg_adt_index;
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown__peg_adt(sigmatopdown__peg_adt_t x, sigmatopdown__peg_adt_t y){
        bool_t tmp = x->sigmatopdown__peg_adt_index == y->sigmatopdown__peg_adt_index;
        switch  (x->sigmatopdown__peg_adt_index) {
                case 2: tmp = tmp && equal_sigmatopdown__any((sigmatopdown__any_t) x, (sigmatopdown__any_t) y); break;
                case 3: tmp = tmp && equal_sigmatopdown__terminal((sigmatopdown__terminal_t) x, (sigmatopdown__terminal_t) y); break;
                case 4: tmp = tmp && equal_sigmatopdown__concat((sigmatopdown__concat_t) x, (sigmatopdown__concat_t) y); break;
                case 5: tmp = tmp && equal_sigmatopdown__choice((sigmatopdown__choice_t) x, (sigmatopdown__choice_t) y); break;
                case 6: tmp = tmp && equal_sigmatopdown__check((sigmatopdown__check_t) x, (sigmatopdown__check_t) y); break;
                case 7: tmp = tmp && equal_sigmatopdown__neg((sigmatopdown__neg_t) x, (sigmatopdown__neg_t) y); break;
        }
        return tmp;
}

char * json_sigmatopdown__peg_adt(sigmatopdown__peg_adt_t x){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ constructor = %u", x->sigmatopdown__peg_adt_index);
        switch  (x->sigmatopdown__peg_adt_index) {
                case 2: tmp = safe_strcat(tmp, json_sigmatopdown__any((sigmatopdown__any_t) x)); break;
                case 3: tmp = safe_strcat(tmp, json_sigmatopdown__terminal((sigmatopdown__terminal_t) x)); break;
                case 4: tmp = safe_strcat(tmp, json_sigmatopdown__concat((sigmatopdown__concat_t) x)); break;
                case 5: tmp = safe_strcat(tmp, json_sigmatopdown__choice((sigmatopdown__choice_t) x)); break;
                case 6: tmp = safe_strcat(tmp, json_sigmatopdown__check((sigmatopdown__check_t) x)); break;
                case 7: tmp = safe_strcat(tmp, json_sigmatopdown__neg((sigmatopdown__neg_t) x)); break;
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_sigmatopdown__peg_adt_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__peg_adt_t T){
        return equal_sigmatopdown__peg_adt((sigmatopdown__peg_adt_t)x, (sigmatopdown__peg_adt_t)y);
}

char * json_sigmatopdown__peg_adt_ptr(pointer_t x, actual_sigmatopdown__peg_adt_t T){
        return json_sigmatopdown__peg_adt((sigmatopdown__peg_adt_t)x);
}

actual_sigmatopdown__peg_adt_t actual_sigmatopdown__peg_adt(){
        actual_sigmatopdown__peg_adt_t new = (actual_sigmatopdown__peg_adt_t)safe_malloc(sizeof(struct actual_sigmatopdown__peg_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown__peg_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown__peg_adt_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown__peg_adt_ptr);
 

 
        return new;
 };

sigmatopdown__peg_adt_t update_sigmatopdown__peg_adt_sigmatopdown__peg_adt_index(sigmatopdown__peg_adt_t x, uint8_t v){
        sigmatopdown__peg_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__peg_adt(x); x->count--;};
        y->sigmatopdown__peg_adt_index = (uint8_t)v;
        return y;}



void release_sigmatopdown_funtype_29(sigmatopdown_funtype_29_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_29_t copy_sigmatopdown_funtype_29(sigmatopdown_funtype_29_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatopdown_funtype_29(sigmatopdown_funtype_29_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatopdown_funtype_29_hashentry_t data = htbl->data[hashindex];
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

sigmatopdown_funtype_29_t dupdate_sigmatopdown_funtype_29(sigmatopdown_funtype_29_t a, uint8_t i, bool_t v){
        sigmatopdown_funtype_29_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatopdown_funtype_29_htbl_t)safe_malloc(sizeof(struct sigmatopdown_funtype_29_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatopdown_funtype_29_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatopdown_funtype_29_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatopdown_funtype_29_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatopdown_funtype_29_hashentry_t * new_data = (sigmatopdown_funtype_29_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatopdown_funtype_29_hashentry_s));
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
                                new_data[new_loc].key = (uint8_t)data[j].key;
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (bool_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_sigmatopdown_funtype_29(htbl, i, ihash);
        sigmatopdown_funtype_29_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

sigmatopdown_funtype_29_t update_sigmatopdown_funtype_29(sigmatopdown_funtype_29_t a, uint8_t i, bool_t v){
        if (a->count == 1){
                return dupdate_sigmatopdown_funtype_29(a, i, v);
            } else {
                sigmatopdown_funtype_29_t x = copy_sigmatopdown_funtype_29(a);
                a->count--;
                return dupdate_sigmatopdown_funtype_29(x, i, v);
            }}

bool_t equal_sigmatopdown_funtype_29(sigmatopdown_funtype_29_t x, sigmatopdown_funtype_29_t y){
        return false;}

char* json_sigmatopdown_funtype_29(sigmatopdown_funtype_29_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_29\""); return result;}


sigmatopdown__any_t new_sigmatopdown__any(void){
        sigmatopdown__any_t tmp = (sigmatopdown__any_t) safe_malloc(sizeof(struct sigmatopdown__any_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown__any(sigmatopdown__any_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_funtype_29(x->p);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown__any_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown__any((sigmatopdown__any_t)x);
}

sigmatopdown__any_t copy_sigmatopdown__any(sigmatopdown__any_t x){
        sigmatopdown__any_t y = new_sigmatopdown__any();
        y->sigmatopdown__peg_adt_index = (uint8_t)x->sigmatopdown__peg_adt_index;
        y->p = x->p;
        if (y->p != NULL){y->p->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown__any(sigmatopdown__any_t x, sigmatopdown__any_t y){
        bool_t tmp = true;
        tmp = tmp && x->sigmatopdown__peg_adt_index == y->sigmatopdown__peg_adt_index;
        tmp = tmp && equal_sigmatopdown_funtype_29(x->p, y->p);
        return tmp;}

char * json_sigmatopdown__any(sigmatopdown__any_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(39);
         sprintf(fld0, "\"sigmatopdown__peg_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->sigmatopdown__peg_adt_index));
        char * fld1 = safe_malloc(13);
         sprintf(fld1, "\"p\" : ");
        tmp[1] = safe_strcat(fld1, json_sigmatopdown_funtype_29(x->p));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown__any_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__any_t T){
        return equal_sigmatopdown__any((sigmatopdown__any_t)x, (sigmatopdown__any_t)y);
}

char * json_sigmatopdown__any_ptr(pointer_t x, actual_sigmatopdown__any_t T){
        return json_sigmatopdown__any((sigmatopdown__any_t)x);
}

actual_sigmatopdown__any_t actual_sigmatopdown__any(){
        actual_sigmatopdown__any_t new = (actual_sigmatopdown__any_t)safe_malloc(sizeof(struct actual_sigmatopdown__any_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown__any_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown__any_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown__any_ptr);
 

 
        return new;
 };

sigmatopdown__any_t update_sigmatopdown__any_sigmatopdown__peg_adt_index(sigmatopdown__any_t x, uint8_t v){
        sigmatopdown__any_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__any(x); x->count--;};
        y->sigmatopdown__peg_adt_index = (uint8_t)v;
        return y;}

sigmatopdown__any_t update_sigmatopdown__any_p(sigmatopdown__any_t x, sigmatopdown_funtype_29_t v){
        sigmatopdown__any_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->p != NULL){release_sigmatopdown_funtype_29(x->p);};}
        else {y = copy_sigmatopdown__any(x); x->count--; y->p->count--;};
        y->p = (sigmatopdown_funtype_29_t)v;
        return y;}




sigmatopdown__terminal_t new_sigmatopdown__terminal(void){
        sigmatopdown__terminal_t tmp = (sigmatopdown__terminal_t) safe_malloc(sizeof(struct sigmatopdown__terminal_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown__terminal(sigmatopdown__terminal_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown__terminal_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown__terminal((sigmatopdown__terminal_t)x);
}

sigmatopdown__terminal_t copy_sigmatopdown__terminal(sigmatopdown__terminal_t x){
        sigmatopdown__terminal_t y = new_sigmatopdown__terminal();
        y->sigmatopdown__peg_adt_index = (uint8_t)x->sigmatopdown__peg_adt_index;
        y->a = (uint8_t)x->a;
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown__terminal(sigmatopdown__terminal_t x, sigmatopdown__terminal_t y){
        bool_t tmp = true;
        tmp = tmp && x->sigmatopdown__peg_adt_index == y->sigmatopdown__peg_adt_index;
        tmp = tmp && x->a == y->a;
        return tmp;}

char * json_sigmatopdown__terminal(sigmatopdown__terminal_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(39);
         sprintf(fld0, "\"sigmatopdown__peg_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->sigmatopdown__peg_adt_index));
        char * fld1 = safe_malloc(13);
         sprintf(fld1, "\"a\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->a));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown__terminal_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__terminal_t T){
        return equal_sigmatopdown__terminal((sigmatopdown__terminal_t)x, (sigmatopdown__terminal_t)y);
}

char * json_sigmatopdown__terminal_ptr(pointer_t x, actual_sigmatopdown__terminal_t T){
        return json_sigmatopdown__terminal((sigmatopdown__terminal_t)x);
}

actual_sigmatopdown__terminal_t actual_sigmatopdown__terminal(){
        actual_sigmatopdown__terminal_t new = (actual_sigmatopdown__terminal_t)safe_malloc(sizeof(struct actual_sigmatopdown__terminal_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown__terminal_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown__terminal_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown__terminal_ptr);
 

 
        return new;
 };

sigmatopdown__terminal_t update_sigmatopdown__terminal_sigmatopdown__peg_adt_index(sigmatopdown__terminal_t x, uint8_t v){
        sigmatopdown__terminal_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__terminal(x); x->count--;};
        y->sigmatopdown__peg_adt_index = (uint8_t)v;
        return y;}

sigmatopdown__terminal_t update_sigmatopdown__terminal_a(sigmatopdown__terminal_t x, uint8_t v){
        sigmatopdown__terminal_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__terminal(x); x->count--;};
        y->a = (uint8_t)v;
        return y;}




sigmatopdown__concat_t new_sigmatopdown__concat(void){
        sigmatopdown__concat_t tmp = (sigmatopdown__concat_t) safe_malloc(sizeof(struct sigmatopdown__concat_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown__concat(sigmatopdown__concat_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown__concat_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown__concat((sigmatopdown__concat_t)x);
}

sigmatopdown__concat_t copy_sigmatopdown__concat(sigmatopdown__concat_t x){
        sigmatopdown__concat_t y = new_sigmatopdown__concat();
        y->sigmatopdown__peg_adt_index = (uint8_t)x->sigmatopdown__peg_adt_index;
        y->e1 = (uint8_t)x->e1;
        y->e2 = (uint8_t)x->e2;
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown__concat(sigmatopdown__concat_t x, sigmatopdown__concat_t y){
        bool_t tmp = true;
        tmp = tmp && x->sigmatopdown__peg_adt_index == y->sigmatopdown__peg_adt_index;
        tmp = tmp && x->e1 == y->e1;
        tmp = tmp && x->e2 == y->e2;
        return tmp;}

char * json_sigmatopdown__concat(sigmatopdown__concat_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(39);
         sprintf(fld0, "\"sigmatopdown__peg_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->sigmatopdown__peg_adt_index));
        char * fld1 = safe_malloc(14);
         sprintf(fld1, "\"e1\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->e1));
        char * fld2 = safe_malloc(14);
         sprintf(fld2, "\"e2\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->e2));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown__concat_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__concat_t T){
        return equal_sigmatopdown__concat((sigmatopdown__concat_t)x, (sigmatopdown__concat_t)y);
}

char * json_sigmatopdown__concat_ptr(pointer_t x, actual_sigmatopdown__concat_t T){
        return json_sigmatopdown__concat((sigmatopdown__concat_t)x);
}

actual_sigmatopdown__concat_t actual_sigmatopdown__concat(){
        actual_sigmatopdown__concat_t new = (actual_sigmatopdown__concat_t)safe_malloc(sizeof(struct actual_sigmatopdown__concat_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown__concat_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown__concat_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown__concat_ptr);
 

 
        return new;
 };

sigmatopdown__concat_t update_sigmatopdown__concat_sigmatopdown__peg_adt_index(sigmatopdown__concat_t x, uint8_t v){
        sigmatopdown__concat_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__concat(x); x->count--;};
        y->sigmatopdown__peg_adt_index = (uint8_t)v;
        return y;}

sigmatopdown__concat_t update_sigmatopdown__concat_e1(sigmatopdown__concat_t x, uint8_t v){
        sigmatopdown__concat_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__concat(x); x->count--;};
        y->e1 = (uint8_t)v;
        return y;}

sigmatopdown__concat_t update_sigmatopdown__concat_e2(sigmatopdown__concat_t x, uint8_t v){
        sigmatopdown__concat_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__concat(x); x->count--;};
        y->e2 = (uint8_t)v;
        return y;}




sigmatopdown__choice_t new_sigmatopdown__choice(void){
        sigmatopdown__choice_t tmp = (sigmatopdown__choice_t) safe_malloc(sizeof(struct sigmatopdown__choice_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown__choice(sigmatopdown__choice_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown__choice_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown__choice((sigmatopdown__choice_t)x);
}

sigmatopdown__choice_t copy_sigmatopdown__choice(sigmatopdown__choice_t x){
        sigmatopdown__choice_t y = new_sigmatopdown__choice();
        y->sigmatopdown__peg_adt_index = (uint8_t)x->sigmatopdown__peg_adt_index;
        y->e1 = (uint8_t)x->e1;
        y->e2 = (uint8_t)x->e2;
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown__choice(sigmatopdown__choice_t x, sigmatopdown__choice_t y){
        bool_t tmp = true;
        tmp = tmp && x->sigmatopdown__peg_adt_index == y->sigmatopdown__peg_adt_index;
        tmp = tmp && x->e1 == y->e1;
        tmp = tmp && x->e2 == y->e2;
        return tmp;}

char * json_sigmatopdown__choice(sigmatopdown__choice_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(39);
         sprintf(fld0, "\"sigmatopdown__peg_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->sigmatopdown__peg_adt_index));
        char * fld1 = safe_malloc(14);
         sprintf(fld1, "\"e1\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->e1));
        char * fld2 = safe_malloc(14);
         sprintf(fld2, "\"e2\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->e2));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown__choice_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__choice_t T){
        return equal_sigmatopdown__choice((sigmatopdown__choice_t)x, (sigmatopdown__choice_t)y);
}

char * json_sigmatopdown__choice_ptr(pointer_t x, actual_sigmatopdown__choice_t T){
        return json_sigmatopdown__choice((sigmatopdown__choice_t)x);
}

actual_sigmatopdown__choice_t actual_sigmatopdown__choice(){
        actual_sigmatopdown__choice_t new = (actual_sigmatopdown__choice_t)safe_malloc(sizeof(struct actual_sigmatopdown__choice_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown__choice_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown__choice_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown__choice_ptr);
 

 
        return new;
 };

sigmatopdown__choice_t update_sigmatopdown__choice_sigmatopdown__peg_adt_index(sigmatopdown__choice_t x, uint8_t v){
        sigmatopdown__choice_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__choice(x); x->count--;};
        y->sigmatopdown__peg_adt_index = (uint8_t)v;
        return y;}

sigmatopdown__choice_t update_sigmatopdown__choice_e1(sigmatopdown__choice_t x, uint8_t v){
        sigmatopdown__choice_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__choice(x); x->count--;};
        y->e1 = (uint8_t)v;
        return y;}

sigmatopdown__choice_t update_sigmatopdown__choice_e2(sigmatopdown__choice_t x, uint8_t v){
        sigmatopdown__choice_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__choice(x); x->count--;};
        y->e2 = (uint8_t)v;
        return y;}




sigmatopdown__check_t new_sigmatopdown__check(void){
        sigmatopdown__check_t tmp = (sigmatopdown__check_t) safe_malloc(sizeof(struct sigmatopdown__check_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown__check(sigmatopdown__check_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown__check_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown__check((sigmatopdown__check_t)x);
}

sigmatopdown__check_t copy_sigmatopdown__check(sigmatopdown__check_t x){
        sigmatopdown__check_t y = new_sigmatopdown__check();
        y->sigmatopdown__peg_adt_index = (uint8_t)x->sigmatopdown__peg_adt_index;
        y->e = (uint8_t)x->e;
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown__check(sigmatopdown__check_t x, sigmatopdown__check_t y){
        bool_t tmp = true;
        tmp = tmp && x->sigmatopdown__peg_adt_index == y->sigmatopdown__peg_adt_index;
        tmp = tmp && x->e == y->e;
        return tmp;}

char * json_sigmatopdown__check(sigmatopdown__check_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(39);
         sprintf(fld0, "\"sigmatopdown__peg_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->sigmatopdown__peg_adt_index));
        char * fld1 = safe_malloc(13);
         sprintf(fld1, "\"e\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->e));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown__check_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__check_t T){
        return equal_sigmatopdown__check((sigmatopdown__check_t)x, (sigmatopdown__check_t)y);
}

char * json_sigmatopdown__check_ptr(pointer_t x, actual_sigmatopdown__check_t T){
        return json_sigmatopdown__check((sigmatopdown__check_t)x);
}

actual_sigmatopdown__check_t actual_sigmatopdown__check(){
        actual_sigmatopdown__check_t new = (actual_sigmatopdown__check_t)safe_malloc(sizeof(struct actual_sigmatopdown__check_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown__check_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown__check_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown__check_ptr);
 

 
        return new;
 };

sigmatopdown__check_t update_sigmatopdown__check_sigmatopdown__peg_adt_index(sigmatopdown__check_t x, uint8_t v){
        sigmatopdown__check_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__check(x); x->count--;};
        y->sigmatopdown__peg_adt_index = (uint8_t)v;
        return y;}

sigmatopdown__check_t update_sigmatopdown__check_e(sigmatopdown__check_t x, uint8_t v){
        sigmatopdown__check_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__check(x); x->count--;};
        y->e = (uint8_t)v;
        return y;}




sigmatopdown__neg_t new_sigmatopdown__neg(void){
        sigmatopdown__neg_t tmp = (sigmatopdown__neg_t) safe_malloc(sizeof(struct sigmatopdown__neg_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown__neg(sigmatopdown__neg_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown__neg_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown__neg((sigmatopdown__neg_t)x);
}

sigmatopdown__neg_t copy_sigmatopdown__neg(sigmatopdown__neg_t x){
        sigmatopdown__neg_t y = new_sigmatopdown__neg();
        y->sigmatopdown__peg_adt_index = (uint8_t)x->sigmatopdown__peg_adt_index;
        y->e = (uint8_t)x->e;
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown__neg(sigmatopdown__neg_t x, sigmatopdown__neg_t y){
        bool_t tmp = true;
        tmp = tmp && x->sigmatopdown__peg_adt_index == y->sigmatopdown__peg_adt_index;
        tmp = tmp && x->e == y->e;
        return tmp;}

char * json_sigmatopdown__neg(sigmatopdown__neg_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(39);
         sprintf(fld0, "\"sigmatopdown__peg_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->sigmatopdown__peg_adt_index));
        char * fld1 = safe_malloc(13);
         sprintf(fld1, "\"e\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->e));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown__neg_ptr(pointer_t x, pointer_t y, actual_sigmatopdown__neg_t T){
        return equal_sigmatopdown__neg((sigmatopdown__neg_t)x, (sigmatopdown__neg_t)y);
}

char * json_sigmatopdown__neg_ptr(pointer_t x, actual_sigmatopdown__neg_t T){
        return json_sigmatopdown__neg((sigmatopdown__neg_t)x);
}

actual_sigmatopdown__neg_t actual_sigmatopdown__neg(){
        actual_sigmatopdown__neg_t new = (actual_sigmatopdown__neg_t)safe_malloc(sizeof(struct actual_sigmatopdown__neg_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown__neg_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown__neg_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown__neg_ptr);
 

 
        return new;
 };

sigmatopdown__neg_t update_sigmatopdown__neg_sigmatopdown__peg_adt_index(sigmatopdown__neg_t x, uint8_t v){
        sigmatopdown__neg_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__neg(x); x->count--;};
        y->sigmatopdown__peg_adt_index = (uint8_t)v;
        return y;}

sigmatopdown__neg_t update_sigmatopdown__neg_e(sigmatopdown__neg_t x, uint8_t v){
        sigmatopdown__neg_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown__neg(x); x->count--;};
        y->e = (uint8_t)v;
        return y;}



void release_sigmatopdown_funtype_36(sigmatopdown_funtype_36_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_36_t copy_sigmatopdown_funtype_36(sigmatopdown_funtype_36_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_36(sigmatopdown_funtype_36_t x, sigmatopdown_funtype_36_t y){
        return false;}

char* json_sigmatopdown_funtype_36(sigmatopdown_funtype_36_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_36\""); return result;}

void release_sigmatopdown_funtype_37(sigmatopdown_funtype_37_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_37_t copy_sigmatopdown_funtype_37(sigmatopdown_funtype_37_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_37(sigmatopdown_funtype_37_t x, sigmatopdown_funtype_37_t y){
        return false;}

char* json_sigmatopdown_funtype_37(sigmatopdown_funtype_37_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_37\""); return result;}

void release_sigmatopdown_funtype_38(sigmatopdown_funtype_38_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_38_t copy_sigmatopdown_funtype_38(sigmatopdown_funtype_38_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_38(sigmatopdown_funtype_38_t x, sigmatopdown_funtype_38_t y){
        return false;}

char* json_sigmatopdown_funtype_38(sigmatopdown_funtype_38_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_38\""); return result;}

void release_sigmatopdown_funtype_39(sigmatopdown_funtype_39_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_39_t copy_sigmatopdown_funtype_39(sigmatopdown_funtype_39_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatopdown_funtype_39(sigmatopdown_funtype_39_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatopdown_funtype_39_hashentry_t data = htbl->data[hashindex];
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

sigmatopdown_funtype_39_t dupdate_sigmatopdown_funtype_39(sigmatopdown_funtype_39_t a, uint8_t i, mpz_ptr_t v){
        sigmatopdown_funtype_39_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatopdown_funtype_39_htbl_t)safe_malloc(sizeof(struct sigmatopdown_funtype_39_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatopdown_funtype_39_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatopdown_funtype_39_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatopdown_funtype_39_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatopdown_funtype_39_hashentry_t * new_data = (sigmatopdown_funtype_39_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatopdown_funtype_39_hashentry_s));
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
                                new_data[new_loc].key = (uint8_t)data[j].key;
                                new_data[new_loc].keyhash = keyhash;
                                mpz_set(new_data[new_loc].value, data[j].value);
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_sigmatopdown_funtype_39(htbl, i, ihash);
        sigmatopdown_funtype_39_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; mpz_set(htbl->data[hashindex].value, v); htbl->num_entries++;}
            else {mpz_ptr_t tempvalue;mpz_mk_set(tempvalue, htbl->data[hashindex].value);mpz_set(htbl->data[hashindex].value, v);};
        return a;

}

sigmatopdown_funtype_39_t update_sigmatopdown_funtype_39(sigmatopdown_funtype_39_t a, uint8_t i, mpz_ptr_t v){
        if (a->count == 1){
                return dupdate_sigmatopdown_funtype_39(a, i, v);
            } else {
                sigmatopdown_funtype_39_t x = copy_sigmatopdown_funtype_39(a);
                a->count--;
                return dupdate_sigmatopdown_funtype_39(x, i, v);
            }}

bool_t equal_sigmatopdown_funtype_39(sigmatopdown_funtype_39_t x, sigmatopdown_funtype_39_t y){
        return false;}

char* json_sigmatopdown_funtype_39(sigmatopdown_funtype_39_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_39\""); return result;}


sigmatopdown_record_40_t new_sigmatopdown_record_40(void){
        sigmatopdown_record_40_t tmp = (sigmatopdown_record_40_t) safe_malloc(sizeof(struct sigmatopdown_record_40_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown_record_40(sigmatopdown_record_40_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown_record_40_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_record_40((sigmatopdown_record_40_t)x);
}

sigmatopdown_record_40_t copy_sigmatopdown_record_40(sigmatopdown_record_40_t x){
        sigmatopdown_record_40_t y = new_sigmatopdown_record_40();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown_record_40(sigmatopdown_record_40_t x, sigmatopdown_record_40_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

char * json_sigmatopdown_record_40(sigmatopdown_record_40_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown_record_40_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_40_t T){
        return equal_sigmatopdown_record_40((sigmatopdown_record_40_t)x, (sigmatopdown_record_40_t)y);
}

char * json_sigmatopdown_record_40_ptr(pointer_t x, actual_sigmatopdown_record_40_t T){
        return json_sigmatopdown_record_40((sigmatopdown_record_40_t)x);
}

actual_sigmatopdown_record_40_t actual_sigmatopdown_record_40(){
        actual_sigmatopdown_record_40_t new = (actual_sigmatopdown_record_40_t)safe_malloc(sizeof(struct actual_sigmatopdown_record_40_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_record_40_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_record_40_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_record_40_ptr);
 

 
        return new;
 };

sigmatopdown_record_40_t update_sigmatopdown_record_40_project_1(sigmatopdown_record_40_t x, uint8_t v){
        sigmatopdown_record_40_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_40(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

sigmatopdown_record_40_t update_sigmatopdown_record_40_project_2(sigmatopdown_record_40_t x, uint8_t v){
        sigmatopdown_record_40_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_40(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}



void release_sigmatopdown_funtype_41(sigmatopdown_funtype_41_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_41_t copy_sigmatopdown_funtype_41(sigmatopdown_funtype_41_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_41(sigmatopdown_funtype_41_t x, sigmatopdown_funtype_41_t y){
        return false;}

char* json_sigmatopdown_funtype_41(sigmatopdown_funtype_41_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_41\""); return result;}


mpz_ptr_t f_sigmatopdown_closure_42(struct sigmatopdown_closure_42_s * closure, sigmatopdown__peg_adt_t bvar){
        mpz_ptr_t result = h_sigmatopdown_closure_42(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8); 
        return result;}

mpz_ptr_t m_sigmatopdown_closure_42(struct sigmatopdown_closure_42_s * closure, sigmatopdown__peg_adt_t bvar){
        return h_sigmatopdown_closure_42(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8);}

extern mpz_ptr_t h_sigmatopdown_closure_42(sigmatopdown__peg_adt_t ivar_17, sigmatopdown_funtype_39_t ivar_12, sigmatopdown_funtype_39_t ivar_14, sigmatopdown_funtype_41_t ivar_10, sigmatopdown_funtype_41_t ivar_8, sigmatopdown_funtype_39_t ivar_6, sigmatopdown_funtype_38_t ivar_3, mpz_ptr_t ivar_2, mpz_ptr_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_48;
        ivar_17->count++;
        ivar_48 = (bool_t)r_sigmatopdown__epsilonp((sigmatopdown__peg_adt_t)ivar_17);
        if (ivar_48){ 
             release_sigmatopdown__peg_adt(ivar_17);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_1);
} else {
        
             bool_t ivar_52;
             ivar_17->count++;
             ivar_52 = (bool_t)r_sigmatopdown__failurep((sigmatopdown__peg_adt_t)ivar_17);
             if (ivar_52){  
           release_sigmatopdown__peg_adt(ivar_17);
           //copying to mpz from mpz;
           mpz_mk_set(result, ivar_2);
} else {
             
           bool_t ivar_68;
           ivar_17->count++;
           ivar_68 = (bool_t)r_sigmatopdown__anyp((sigmatopdown__peg_adt_t)ivar_17);
           if (ivar_68){   
           sigmatopdown_funtype_29_t ivar_56;
           ivar_56 = (sigmatopdown_funtype_29_t)sigmatopdown__peg_adt_p((sigmatopdown__peg_adt_t)ivar_17);
           mpz_mk_set(result, ivar_3->ftbl->fptr(ivar_3, ivar_56));
} else {
           
           bool_t ivar_81;
           ivar_17->count++;
           ivar_81 = (bool_t)r_sigmatopdown__terminalp((sigmatopdown__peg_adt_t)ivar_17);
           if (ivar_81){    
            uint8_t ivar_72;
            ivar_72 = (uint8_t)sigmatopdown__peg_adt_a((sigmatopdown__peg_adt_t)ivar_17);
            mpz_mk_set(result, ivar_6->ftbl->fptr(ivar_6, ivar_72));
} else {
           
            bool_t ivar_100;
            ivar_17->count++;
            ivar_100 = (bool_t)r_sigmatopdown__concatp((sigmatopdown__peg_adt_t)ivar_17);
            if (ivar_100){     
             uint8_t ivar_85;
             ivar_17->count++;
             ivar_85 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_17);
             uint8_t ivar_86;
             ivar_86 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_17);
             mpz_mk_set(result, ivar_8->ftbl->mptr(ivar_8, ivar_85, ivar_86));
} else {
            
             bool_t ivar_119;
             ivar_17->count++;
             ivar_119 = (bool_t)r_sigmatopdown__orp((sigmatopdown__peg_adt_t)ivar_17);
             if (ivar_119){      
              uint8_t ivar_104;
              ivar_17->count++;
              ivar_104 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_17);
              uint8_t ivar_105;
              ivar_105 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_17);
              mpz_mk_set(result, ivar_10->ftbl->mptr(ivar_10, ivar_104, ivar_105));
} else {
             
              bool_t ivar_132;
              ivar_17->count++;
              ivar_132 = (bool_t)r_sigmatopdown__andp((sigmatopdown__peg_adt_t)ivar_17);
              if (ivar_132){       
               uint8_t ivar_123;
               ivar_123 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_17);
               mpz_mk_set(result, ivar_12->ftbl->fptr(ivar_12, ivar_123));
} else {
              
               uint8_t ivar_136;
               ivar_136 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_17);
               mpz_mk_set(result, ivar_14->ftbl->fptr(ivar_14, ivar_136));
};
};
};
};
};
};
};

        return result;
}

sigmatopdown_closure_42_t new_sigmatopdown_closure_42(void){
        static struct sigmatopdown_funtype_37_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(sigmatopdown_funtype_37_t, sigmatopdown__peg_adt_t))&f_sigmatopdown_closure_42, .mptr = (mpz_ptr_t (*)(sigmatopdown_funtype_37_t, sigmatopdown__peg_adt_t))&m_sigmatopdown_closure_42, .rptr =  (void (*)(sigmatopdown_funtype_37_t))&release_sigmatopdown_closure_42, .cptr = (sigmatopdown_funtype_37_t (*)(sigmatopdown_funtype_37_t))&copy_sigmatopdown_closure_42};
        sigmatopdown_closure_42_t tmp = (sigmatopdown_closure_42_t) safe_malloc(sizeof(struct sigmatopdown_closure_42_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_7);
        mpz_init(tmp->fvar_8);
        return tmp;}

void release_sigmatopdown_closure_42(sigmatopdown_funtype_37_t closure){
        sigmatopdown_closure_42_t x = (sigmatopdown_closure_42_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_funtype_39(x->fvar_1);
         release_sigmatopdown_funtype_39(x->fvar_2);
         release_sigmatopdown_funtype_41(x->fvar_3);
         release_sigmatopdown_funtype_41(x->fvar_4);
         release_sigmatopdown_funtype_39(x->fvar_5);
         release_sigmatopdown_funtype_38(x->fvar_6);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_42_t copy_sigmatopdown_closure_42(sigmatopdown_closure_42_t x){
        sigmatopdown_closure_42_t y = new_sigmatopdown_closure_42();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        y->fvar_6 = x->fvar_6; x->fvar_6->count++;
        mpz_set(y->fvar_7, x->fvar_7);
        mpz_set(y->fvar_8, x->fvar_8);
        if (x->htbl != NULL){
            sigmatopdown_funtype_37_htbl_t new_htbl = (sigmatopdown_funtype_37_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_37_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_37_hashentry_t * new_data = (sigmatopdown_funtype_37_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_37_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_37_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatopdown_record_43_t new_sigmatopdown_record_43(void){
        sigmatopdown_record_43_t tmp = (sigmatopdown_record_43_t) safe_malloc(sizeof(struct sigmatopdown_record_43_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown_record_43(sigmatopdown_record_43_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_funtype_29(x->project_1);
         release_sigmatopdown__peg_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown_record_43_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_record_43((sigmatopdown_record_43_t)x);
}

sigmatopdown_record_43_t copy_sigmatopdown_record_43(sigmatopdown_record_43_t x){
        sigmatopdown_record_43_t y = new_sigmatopdown_record_43();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown_record_43(sigmatopdown_record_43_t x, sigmatopdown_record_43_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdown_funtype_29(x->project_1, y->project_1);
        tmp = tmp && equal_sigmatopdown__peg_adt(x->project_2, y->project_2);
        return tmp;}

char * json_sigmatopdown_record_43(sigmatopdown_record_43_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdown_funtype_29(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_sigmatopdown__peg_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown_record_43_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_43_t T){
        return equal_sigmatopdown_record_43((sigmatopdown_record_43_t)x, (sigmatopdown_record_43_t)y);
}

char * json_sigmatopdown_record_43_ptr(pointer_t x, actual_sigmatopdown_record_43_t T){
        return json_sigmatopdown_record_43((sigmatopdown_record_43_t)x);
}

actual_sigmatopdown_record_43_t actual_sigmatopdown_record_43(){
        actual_sigmatopdown_record_43_t new = (actual_sigmatopdown_record_43_t)safe_malloc(sizeof(struct actual_sigmatopdown_record_43_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_record_43_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_record_43_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_record_43_ptr);
 

 
        return new;
 };

sigmatopdown_record_43_t update_sigmatopdown_record_43_project_1(sigmatopdown_record_43_t x, sigmatopdown_funtype_29_t v){
        sigmatopdown_record_43_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatopdown_funtype_29(x->project_1);};}
        else {y = copy_sigmatopdown_record_43(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatopdown_funtype_29_t)v;
        return y;}

sigmatopdown_record_43_t update_sigmatopdown_record_43_project_2(sigmatopdown_record_43_t x, sigmatopdown__peg_adt_t v){
        sigmatopdown_record_43_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_sigmatopdown__peg_adt(x->project_2);};}
        else {y = copy_sigmatopdown_record_43(x); x->count--; y->project_2->count--;};
        y->project_2 = (sigmatopdown__peg_adt_t)v;
        return y;}



void release_sigmatopdown_funtype_44(sigmatopdown_funtype_44_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_44_t copy_sigmatopdown_funtype_44(sigmatopdown_funtype_44_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_44(sigmatopdown_funtype_44_t x, sigmatopdown_funtype_44_t y){
        return false;}

char* json_sigmatopdown_funtype_44(sigmatopdown_funtype_44_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_44\""); return result;}


sigmatopdown_record_45_t new_sigmatopdown_record_45(void){
        sigmatopdown_record_45_t tmp = (sigmatopdown_record_45_t) safe_malloc(sizeof(struct sigmatopdown_record_45_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown_record_45(sigmatopdown_record_45_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__peg_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown_record_45_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_record_45((sigmatopdown_record_45_t)x);
}

sigmatopdown_record_45_t copy_sigmatopdown_record_45(sigmatopdown_record_45_t x){
        sigmatopdown_record_45_t y = new_sigmatopdown_record_45();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown_record_45(sigmatopdown_record_45_t x, sigmatopdown_record_45_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_sigmatopdown__peg_adt(x->project_2, y->project_2);
        return tmp;}

char * json_sigmatopdown_record_45(sigmatopdown_record_45_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_sigmatopdown__peg_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown_record_45_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_45_t T){
        return equal_sigmatopdown_record_45((sigmatopdown_record_45_t)x, (sigmatopdown_record_45_t)y);
}

char * json_sigmatopdown_record_45_ptr(pointer_t x, actual_sigmatopdown_record_45_t T){
        return json_sigmatopdown_record_45((sigmatopdown_record_45_t)x);
}

actual_sigmatopdown_record_45_t actual_sigmatopdown_record_45(){
        actual_sigmatopdown_record_45_t new = (actual_sigmatopdown_record_45_t)safe_malloc(sizeof(struct actual_sigmatopdown_record_45_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_record_45_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_record_45_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_record_45_ptr);
 

 
        return new;
 };

sigmatopdown_record_45_t update_sigmatopdown_record_45_project_1(sigmatopdown_record_45_t x, uint8_t v){
        sigmatopdown_record_45_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_45(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

sigmatopdown_record_45_t update_sigmatopdown_record_45_project_2(sigmatopdown_record_45_t x, sigmatopdown__peg_adt_t v){
        sigmatopdown_record_45_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_sigmatopdown__peg_adt(x->project_2);};}
        else {y = copy_sigmatopdown_record_45(x); x->count--; y->project_2->count--;};
        y->project_2 = (sigmatopdown__peg_adt_t)v;
        return y;}



void release_sigmatopdown_funtype_46(sigmatopdown_funtype_46_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_46_t copy_sigmatopdown_funtype_46(sigmatopdown_funtype_46_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_46(sigmatopdown_funtype_46_t x, sigmatopdown_funtype_46_t y){
        return false;}

char* json_sigmatopdown_funtype_46(sigmatopdown_funtype_46_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_46\""); return result;}


sigmatopdown_record_47_t new_sigmatopdown_record_47(void){
        sigmatopdown_record_47_t tmp = (sigmatopdown_record_47_t) safe_malloc(sizeof(struct sigmatopdown_record_47_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown_record_47(sigmatopdown_record_47_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__peg_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown_record_47_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_record_47((sigmatopdown_record_47_t)x);
}

sigmatopdown_record_47_t copy_sigmatopdown_record_47(sigmatopdown_record_47_t x){
        sigmatopdown_record_47_t y = new_sigmatopdown_record_47();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown_record_47(sigmatopdown_record_47_t x, sigmatopdown_record_47_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_sigmatopdown__peg_adt(x->project_3, y->project_3);
        return tmp;}

char * json_sigmatopdown_record_47(sigmatopdown_record_47_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_sigmatopdown__peg_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown_record_47_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_47_t T){
        return equal_sigmatopdown_record_47((sigmatopdown_record_47_t)x, (sigmatopdown_record_47_t)y);
}

char * json_sigmatopdown_record_47_ptr(pointer_t x, actual_sigmatopdown_record_47_t T){
        return json_sigmatopdown_record_47((sigmatopdown_record_47_t)x);
}

actual_sigmatopdown_record_47_t actual_sigmatopdown_record_47(){
        actual_sigmatopdown_record_47_t new = (actual_sigmatopdown_record_47_t)safe_malloc(sizeof(struct actual_sigmatopdown_record_47_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_record_47_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_record_47_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_record_47_ptr);
 

 
        return new;
 };

sigmatopdown_record_47_t update_sigmatopdown_record_47_project_1(sigmatopdown_record_47_t x, uint8_t v){
        sigmatopdown_record_47_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_47(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

sigmatopdown_record_47_t update_sigmatopdown_record_47_project_2(sigmatopdown_record_47_t x, uint8_t v){
        sigmatopdown_record_47_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_47(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

sigmatopdown_record_47_t update_sigmatopdown_record_47_project_3(sigmatopdown_record_47_t x, sigmatopdown__peg_adt_t v){
        sigmatopdown_record_47_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_sigmatopdown__peg_adt(x->project_3);};}
        else {y = copy_sigmatopdown_record_47(x); x->count--; y->project_3->count--;};
        y->project_3 = (sigmatopdown__peg_adt_t)v;
        return y;}



void release_sigmatopdown_funtype_48(sigmatopdown_funtype_48_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_48_t copy_sigmatopdown_funtype_48(sigmatopdown_funtype_48_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_48(sigmatopdown_funtype_48_t x, sigmatopdown_funtype_48_t y){
        return false;}

char* json_sigmatopdown_funtype_48(sigmatopdown_funtype_48_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_48\""); return result;}


mpz_ptr_t f_sigmatopdown_closure_49(struct sigmatopdown_closure_49_s * closure, sigmatopdown__peg_adt_t bvar){
        mpz_ptr_t result = h_sigmatopdown_closure_49(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8); 
        return result;}

mpz_ptr_t m_sigmatopdown_closure_49(struct sigmatopdown_closure_49_s * closure, sigmatopdown__peg_adt_t bvar){
        return h_sigmatopdown_closure_49(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8);}

extern mpz_ptr_t h_sigmatopdown_closure_49(sigmatopdown__peg_adt_t ivar_19, sigmatopdown_funtype_46_t ivar_14, sigmatopdown_funtype_46_t ivar_16, sigmatopdown_funtype_48_t ivar_12, sigmatopdown_funtype_48_t ivar_10, sigmatopdown_funtype_46_t ivar_8, sigmatopdown_funtype_44_t ivar_5, sigmatopdown_funtype_37_t ivar_3, sigmatopdown_funtype_37_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_57;
        ivar_19->count++;
        ivar_57 = (bool_t)r_sigmatopdown__epsilonp((sigmatopdown__peg_adt_t)ivar_19);
        if (ivar_57){ 
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_19));
} else {
        
             bool_t ivar_66;
             ivar_19->count++;
             ivar_66 = (bool_t)r_sigmatopdown__failurep((sigmatopdown__peg_adt_t)ivar_19);
             if (ivar_66){  
           mpz_mk_set(result, ivar_3->ftbl->fptr(ivar_3, ivar_19));
} else {
             
           bool_t ivar_84;
           ivar_19->count++;
           ivar_84 = (bool_t)r_sigmatopdown__anyp((sigmatopdown__peg_adt_t)ivar_19);
           if (ivar_84){   
           sigmatopdown_funtype_29_t ivar_70;
           ivar_19->count++;
           ivar_70 = (sigmatopdown_funtype_29_t)sigmatopdown__peg_adt_p((sigmatopdown__peg_adt_t)ivar_19);
           mpz_mk_set(result, ivar_5->ftbl->mptr(ivar_5, ivar_70, ivar_19));
} else {
           
           bool_t ivar_99;
           ivar_19->count++;
           ivar_99 = (bool_t)r_sigmatopdown__terminalp((sigmatopdown__peg_adt_t)ivar_19);
           if (ivar_99){    
            uint8_t ivar_88;
            ivar_19->count++;
            ivar_88 = (uint8_t)sigmatopdown__peg_adt_a((sigmatopdown__peg_adt_t)ivar_19);
            mpz_mk_set(result, ivar_8->ftbl->mptr(ivar_8, ivar_88, ivar_19));
} else {
           
            bool_t ivar_120;
            ivar_19->count++;
            ivar_120 = (bool_t)r_sigmatopdown__concatp((sigmatopdown__peg_adt_t)ivar_19);
            if (ivar_120){     
             uint8_t ivar_103;
             ivar_19->count++;
             ivar_103 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_19);
             uint8_t ivar_104;
             ivar_19->count++;
             ivar_104 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_19);
             mpz_mk_set(result, ivar_10->ftbl->mptr(ivar_10, ivar_103, ivar_104, ivar_19));
} else {
            
             bool_t ivar_141;
             ivar_19->count++;
             ivar_141 = (bool_t)r_sigmatopdown__orp((sigmatopdown__peg_adt_t)ivar_19);
             if (ivar_141){      
              uint8_t ivar_124;
              ivar_19->count++;
              ivar_124 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_19);
              uint8_t ivar_125;
              ivar_19->count++;
              ivar_125 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_19);
              mpz_mk_set(result, ivar_12->ftbl->mptr(ivar_12, ivar_124, ivar_125, ivar_19));
} else {
             
              bool_t ivar_156;
              ivar_19->count++;
              ivar_156 = (bool_t)r_sigmatopdown__andp((sigmatopdown__peg_adt_t)ivar_19);
              if (ivar_156){       
               uint8_t ivar_145;
               ivar_19->count++;
               ivar_145 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_19);
               mpz_mk_set(result, ivar_14->ftbl->mptr(ivar_14, ivar_145, ivar_19));
} else {
              
               uint8_t ivar_160;
               ivar_19->count++;
               ivar_160 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_19);
               mpz_mk_set(result, ivar_16->ftbl->mptr(ivar_16, ivar_160, ivar_19));
};
};
};
};
};
};
};

        return result;
}

sigmatopdown_closure_49_t new_sigmatopdown_closure_49(void){
        static struct sigmatopdown_funtype_37_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(sigmatopdown_funtype_37_t, sigmatopdown__peg_adt_t))&f_sigmatopdown_closure_49, .mptr = (mpz_ptr_t (*)(sigmatopdown_funtype_37_t, sigmatopdown__peg_adt_t))&m_sigmatopdown_closure_49, .rptr =  (void (*)(sigmatopdown_funtype_37_t))&release_sigmatopdown_closure_49, .cptr = (sigmatopdown_funtype_37_t (*)(sigmatopdown_funtype_37_t))&copy_sigmatopdown_closure_49};
        sigmatopdown_closure_49_t tmp = (sigmatopdown_closure_49_t) safe_malloc(sizeof(struct sigmatopdown_closure_49_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_49(sigmatopdown_funtype_37_t closure){
        sigmatopdown_closure_49_t x = (sigmatopdown_closure_49_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_funtype_46(x->fvar_1);
         release_sigmatopdown_funtype_46(x->fvar_2);
         release_sigmatopdown_funtype_48(x->fvar_3);
         release_sigmatopdown_funtype_48(x->fvar_4);
         release_sigmatopdown_funtype_46(x->fvar_5);
         release_sigmatopdown_funtype_44(x->fvar_6);
         release_sigmatopdown_funtype_37(x->fvar_7);
         release_sigmatopdown_funtype_37(x->fvar_8);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_49_t copy_sigmatopdown_closure_49(sigmatopdown_closure_49_t x){
        sigmatopdown_closure_49_t y = new_sigmatopdown_closure_49();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        y->fvar_6 = x->fvar_6; x->fvar_6->count++;
        y->fvar_7 = x->fvar_7; x->fvar_7->count++;
        y->fvar_8 = x->fvar_8; x->fvar_8->count++;
        if (x->htbl != NULL){
            sigmatopdown_funtype_37_htbl_t new_htbl = (sigmatopdown_funtype_37_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_37_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_37_hashentry_t * new_data = (sigmatopdown_funtype_37_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_37_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_37_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatopdown_funtype_50(sigmatopdown_funtype_50_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_50_t copy_sigmatopdown_funtype_50(sigmatopdown_funtype_50_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_50(sigmatopdown_funtype_50_t x, sigmatopdown_funtype_50_t y){
        return false;}

char* json_sigmatopdown_funtype_50(sigmatopdown_funtype_50_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_50\""); return result;}

void release_sigmatopdown_funtype_51(sigmatopdown_funtype_51_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_51_t copy_sigmatopdown_funtype_51(sigmatopdown_funtype_51_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_51(sigmatopdown_funtype_51_t x, sigmatopdown_funtype_51_t y){
        return false;}

char* json_sigmatopdown_funtype_51(sigmatopdown_funtype_51_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_51\""); return result;}

void release_sigmatopdown_funtype_52(sigmatopdown_funtype_52_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_52_t copy_sigmatopdown_funtype_52(sigmatopdown_funtype_52_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatopdown_funtype_52(sigmatopdown_funtype_52_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatopdown_funtype_52_hashentry_t data = htbl->data[hashindex];
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

sigmatopdown_funtype_52_t dupdate_sigmatopdown_funtype_52(sigmatopdown_funtype_52_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v){
        sigmatopdown_funtype_52_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatopdown_funtype_52_htbl_t)safe_malloc(sizeof(struct sigmatopdown_funtype_52_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatopdown_funtype_52_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatopdown_funtype_52_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatopdown_funtype_52_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatopdown_funtype_52_hashentry_t * new_data = (sigmatopdown_funtype_52_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatopdown_funtype_52_hashentry_s));
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
                                new_data[new_loc].key = (uint8_t)data[j].key;
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (ordstruct_adt__ordstruct_adt_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_sigmatopdown_funtype_52(htbl, i, ihash);
        sigmatopdown_funtype_52_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v; htbl->num_entries++;}
            else {ordstruct_adt__ordstruct_adt_t tempvalue;tempvalue = (ordstruct_adt__ordstruct_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ordstruct_adt__ordstruct_adt(tempvalue);};
        return a;

}

sigmatopdown_funtype_52_t update_sigmatopdown_funtype_52(sigmatopdown_funtype_52_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v){
        if (a->count == 1){
                return dupdate_sigmatopdown_funtype_52(a, i, v);
            } else {
                sigmatopdown_funtype_52_t x = copy_sigmatopdown_funtype_52(a);
                a->count--;
                return dupdate_sigmatopdown_funtype_52(x, i, v);
            }}

bool_t equal_sigmatopdown_funtype_52(sigmatopdown_funtype_52_t x, sigmatopdown_funtype_52_t y){
        return false;}

char* json_sigmatopdown_funtype_52(sigmatopdown_funtype_52_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_52\""); return result;}

void release_sigmatopdown_funtype_53(sigmatopdown_funtype_53_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_53_t copy_sigmatopdown_funtype_53(sigmatopdown_funtype_53_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_53(sigmatopdown_funtype_53_t x, sigmatopdown_funtype_53_t y){
        return false;}

char* json_sigmatopdown_funtype_53(sigmatopdown_funtype_53_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_53\""); return result;}


ordstruct_adt__ordstruct_adt_t f_sigmatopdown_closure_54(struct sigmatopdown_closure_54_s * closure, sigmatopdown__peg_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_sigmatopdown_closure_54(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_sigmatopdown_closure_54(struct sigmatopdown_closure_54_s * closure, sigmatopdown__peg_adt_t bvar){
        return h_sigmatopdown_closure_54(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8);}

extern ordstruct_adt__ordstruct_adt_t h_sigmatopdown_closure_54(sigmatopdown__peg_adt_t ivar_17, sigmatopdown_funtype_52_t ivar_12, sigmatopdown_funtype_52_t ivar_14, sigmatopdown_funtype_53_t ivar_10, sigmatopdown_funtype_53_t ivar_8, sigmatopdown_funtype_52_t ivar_6, sigmatopdown_funtype_51_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_48;
        ivar_17->count++;
        ivar_48 = (bool_t)r_sigmatopdown__epsilonp((sigmatopdown__peg_adt_t)ivar_17);
        if (ivar_48){ 
             release_sigmatopdown__peg_adt(ivar_17);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1;
             if (result != NULL) result->count++;
} else {
        
             bool_t ivar_52;
             ivar_17->count++;
             ivar_52 = (bool_t)r_sigmatopdown__failurep((sigmatopdown__peg_adt_t)ivar_17);
             if (ivar_52){  
           release_sigmatopdown__peg_adt(ivar_17);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           result = (ordstruct_adt__ordstruct_adt_t)ivar_2;
           if (result != NULL) result->count++;
} else {
             
           bool_t ivar_68;
           ivar_17->count++;
           ivar_68 = (bool_t)r_sigmatopdown__anyp((sigmatopdown__peg_adt_t)ivar_17);
           if (ivar_68){   
           sigmatopdown_funtype_29_t ivar_56;
           ivar_56 = (sigmatopdown_funtype_29_t)sigmatopdown__peg_adt_p((sigmatopdown__peg_adt_t)ivar_17);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->fptr(ivar_3, ivar_56);
} else {
           
           bool_t ivar_81;
           ivar_17->count++;
           ivar_81 = (bool_t)r_sigmatopdown__terminalp((sigmatopdown__peg_adt_t)ivar_17);
           if (ivar_81){    
            uint8_t ivar_72;
            ivar_72 = (uint8_t)sigmatopdown__peg_adt_a((sigmatopdown__peg_adt_t)ivar_17);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_6->ftbl->fptr(ivar_6, ivar_72);
} else {
           
            bool_t ivar_100;
            ivar_17->count++;
            ivar_100 = (bool_t)r_sigmatopdown__concatp((sigmatopdown__peg_adt_t)ivar_17);
            if (ivar_100){     
             uint8_t ivar_85;
             ivar_17->count++;
             ivar_85 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_17);
             uint8_t ivar_86;
             ivar_86 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_17);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_8->ftbl->mptr(ivar_8, ivar_85, ivar_86);
} else {
            
             bool_t ivar_119;
             ivar_17->count++;
             ivar_119 = (bool_t)r_sigmatopdown__orp((sigmatopdown__peg_adt_t)ivar_17);
             if (ivar_119){      
              uint8_t ivar_104;
              ivar_17->count++;
              ivar_104 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_17);
              uint8_t ivar_105;
              ivar_105 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_17);
              result = (ordstruct_adt__ordstruct_adt_t)ivar_10->ftbl->mptr(ivar_10, ivar_104, ivar_105);
} else {
             
              bool_t ivar_132;
              ivar_17->count++;
              ivar_132 = (bool_t)r_sigmatopdown__andp((sigmatopdown__peg_adt_t)ivar_17);
              if (ivar_132){       
               uint8_t ivar_123;
               ivar_123 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_17);
               result = (ordstruct_adt__ordstruct_adt_t)ivar_12->ftbl->fptr(ivar_12, ivar_123);
} else {
              
               uint8_t ivar_136;
               ivar_136 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_17);
               result = (ordstruct_adt__ordstruct_adt_t)ivar_14->ftbl->fptr(ivar_14, ivar_136);
};
};
};
};
};
};
};

        return result;
}

sigmatopdown_closure_54_t new_sigmatopdown_closure_54(void){
        static struct sigmatopdown_funtype_50_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatopdown_funtype_50_t, sigmatopdown__peg_adt_t))&f_sigmatopdown_closure_54, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatopdown_funtype_50_t, sigmatopdown__peg_adt_t))&m_sigmatopdown_closure_54, .rptr =  (void (*)(sigmatopdown_funtype_50_t))&release_sigmatopdown_closure_54, .cptr = (sigmatopdown_funtype_50_t (*)(sigmatopdown_funtype_50_t))&copy_sigmatopdown_closure_54};
        sigmatopdown_closure_54_t tmp = (sigmatopdown_closure_54_t) safe_malloc(sizeof(struct sigmatopdown_closure_54_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_54(sigmatopdown_funtype_50_t closure){
        sigmatopdown_closure_54_t x = (sigmatopdown_closure_54_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_funtype_52(x->fvar_1);
         release_sigmatopdown_funtype_52(x->fvar_2);
         release_sigmatopdown_funtype_53(x->fvar_3);
         release_sigmatopdown_funtype_53(x->fvar_4);
         release_sigmatopdown_funtype_52(x->fvar_5);
         release_sigmatopdown_funtype_51(x->fvar_6);
         release_ordstruct_adt__ordstruct_adt(x->fvar_7);
         release_ordstruct_adt__ordstruct_adt(x->fvar_8);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_54_t copy_sigmatopdown_closure_54(sigmatopdown_closure_54_t x){
        sigmatopdown_closure_54_t y = new_sigmatopdown_closure_54();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        y->fvar_6 = x->fvar_6; x->fvar_6->count++;
        y->fvar_7 = x->fvar_7; x->fvar_7->count++;
        y->fvar_8 = x->fvar_8; x->fvar_8->count++;
        if (x->htbl != NULL){
            sigmatopdown_funtype_50_htbl_t new_htbl = (sigmatopdown_funtype_50_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_50_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_50_hashentry_t * new_data = (sigmatopdown_funtype_50_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_50_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_50_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatopdown_funtype_55(sigmatopdown_funtype_55_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_55_t copy_sigmatopdown_funtype_55(sigmatopdown_funtype_55_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_55(sigmatopdown_funtype_55_t x, sigmatopdown_funtype_55_t y){
        return false;}

char* json_sigmatopdown_funtype_55(sigmatopdown_funtype_55_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_55\""); return result;}

void release_sigmatopdown_funtype_56(sigmatopdown_funtype_56_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_56_t copy_sigmatopdown_funtype_56(sigmatopdown_funtype_56_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_56(sigmatopdown_funtype_56_t x, sigmatopdown_funtype_56_t y){
        return false;}

char* json_sigmatopdown_funtype_56(sigmatopdown_funtype_56_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_56\""); return result;}

void release_sigmatopdown_funtype_57(sigmatopdown_funtype_57_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_57_t copy_sigmatopdown_funtype_57(sigmatopdown_funtype_57_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_57(sigmatopdown_funtype_57_t x, sigmatopdown_funtype_57_t y){
        return false;}

char* json_sigmatopdown_funtype_57(sigmatopdown_funtype_57_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_57\""); return result;}


ordstruct_adt__ordstruct_adt_t f_sigmatopdown_closure_58(struct sigmatopdown_closure_58_s * closure, sigmatopdown__peg_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_sigmatopdown_closure_58(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_sigmatopdown_closure_58(struct sigmatopdown_closure_58_s * closure, sigmatopdown__peg_adt_t bvar){
        return h_sigmatopdown_closure_58(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8);}

extern ordstruct_adt__ordstruct_adt_t h_sigmatopdown_closure_58(sigmatopdown__peg_adt_t ivar_19, sigmatopdown_funtype_56_t ivar_14, sigmatopdown_funtype_56_t ivar_16, sigmatopdown_funtype_57_t ivar_12, sigmatopdown_funtype_57_t ivar_10, sigmatopdown_funtype_56_t ivar_8, sigmatopdown_funtype_55_t ivar_5, sigmatopdown_funtype_50_t ivar_3, sigmatopdown_funtype_50_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_57;
        ivar_19->count++;
        ivar_57 = (bool_t)r_sigmatopdown__epsilonp((sigmatopdown__peg_adt_t)ivar_19);
        if (ivar_57){ 
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_19);
} else {
        
             bool_t ivar_66;
             ivar_19->count++;
             ivar_66 = (bool_t)r_sigmatopdown__failurep((sigmatopdown__peg_adt_t)ivar_19);
             if (ivar_66){  
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->fptr(ivar_3, ivar_19);
} else {
             
           bool_t ivar_84;
           ivar_19->count++;
           ivar_84 = (bool_t)r_sigmatopdown__anyp((sigmatopdown__peg_adt_t)ivar_19);
           if (ivar_84){   
           sigmatopdown_funtype_29_t ivar_70;
           ivar_19->count++;
           ivar_70 = (sigmatopdown_funtype_29_t)sigmatopdown__peg_adt_p((sigmatopdown__peg_adt_t)ivar_19);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_5->ftbl->mptr(ivar_5, ivar_70, ivar_19);
} else {
           
           bool_t ivar_99;
           ivar_19->count++;
           ivar_99 = (bool_t)r_sigmatopdown__terminalp((sigmatopdown__peg_adt_t)ivar_19);
           if (ivar_99){    
            uint8_t ivar_88;
            ivar_19->count++;
            ivar_88 = (uint8_t)sigmatopdown__peg_adt_a((sigmatopdown__peg_adt_t)ivar_19);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_8->ftbl->mptr(ivar_8, ivar_88, ivar_19);
} else {
           
            bool_t ivar_120;
            ivar_19->count++;
            ivar_120 = (bool_t)r_sigmatopdown__concatp((sigmatopdown__peg_adt_t)ivar_19);
            if (ivar_120){     
             uint8_t ivar_103;
             ivar_19->count++;
             ivar_103 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_19);
             uint8_t ivar_104;
             ivar_19->count++;
             ivar_104 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_19);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_10->ftbl->mptr(ivar_10, ivar_103, ivar_104, ivar_19);
} else {
            
             bool_t ivar_141;
             ivar_19->count++;
             ivar_141 = (bool_t)r_sigmatopdown__orp((sigmatopdown__peg_adt_t)ivar_19);
             if (ivar_141){      
              uint8_t ivar_124;
              ivar_19->count++;
              ivar_124 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_19);
              uint8_t ivar_125;
              ivar_19->count++;
              ivar_125 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_19);
              result = (ordstruct_adt__ordstruct_adt_t)ivar_12->ftbl->mptr(ivar_12, ivar_124, ivar_125, ivar_19);
} else {
             
              bool_t ivar_156;
              ivar_19->count++;
              ivar_156 = (bool_t)r_sigmatopdown__andp((sigmatopdown__peg_adt_t)ivar_19);
              if (ivar_156){       
               uint8_t ivar_145;
               ivar_19->count++;
               ivar_145 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_19);
               result = (ordstruct_adt__ordstruct_adt_t)ivar_14->ftbl->mptr(ivar_14, ivar_145, ivar_19);
} else {
              
               uint8_t ivar_160;
               ivar_19->count++;
               ivar_160 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_19);
               result = (ordstruct_adt__ordstruct_adt_t)ivar_16->ftbl->mptr(ivar_16, ivar_160, ivar_19);
};
};
};
};
};
};
};

        return result;
}

sigmatopdown_closure_58_t new_sigmatopdown_closure_58(void){
        static struct sigmatopdown_funtype_50_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatopdown_funtype_50_t, sigmatopdown__peg_adt_t))&f_sigmatopdown_closure_58, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatopdown_funtype_50_t, sigmatopdown__peg_adt_t))&m_sigmatopdown_closure_58, .rptr =  (void (*)(sigmatopdown_funtype_50_t))&release_sigmatopdown_closure_58, .cptr = (sigmatopdown_funtype_50_t (*)(sigmatopdown_funtype_50_t))&copy_sigmatopdown_closure_58};
        sigmatopdown_closure_58_t tmp = (sigmatopdown_closure_58_t) safe_malloc(sizeof(struct sigmatopdown_closure_58_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_58(sigmatopdown_funtype_50_t closure){
        sigmatopdown_closure_58_t x = (sigmatopdown_closure_58_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_funtype_56(x->fvar_1);
         release_sigmatopdown_funtype_56(x->fvar_2);
         release_sigmatopdown_funtype_57(x->fvar_3);
         release_sigmatopdown_funtype_57(x->fvar_4);
         release_sigmatopdown_funtype_56(x->fvar_5);
         release_sigmatopdown_funtype_55(x->fvar_6);
         release_sigmatopdown_funtype_50(x->fvar_7);
         release_sigmatopdown_funtype_50(x->fvar_8);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_58_t copy_sigmatopdown_closure_58(sigmatopdown_closure_58_t x){
        sigmatopdown_closure_58_t y = new_sigmatopdown_closure_58();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        y->fvar_6 = x->fvar_6; x->fvar_6->count++;
        y->fvar_7 = x->fvar_7; x->fvar_7->count++;
        y->fvar_8 = x->fvar_8; x->fvar_8->count++;
        if (x->htbl != NULL){
            sigmatopdown_funtype_50_htbl_t new_htbl = (sigmatopdown_funtype_50_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_50_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_50_hashentry_t * new_data = (sigmatopdown_funtype_50_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_50_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_50_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatopdown_funtype_59(sigmatopdown_funtype_59_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_59_t copy_sigmatopdown_funtype_59(sigmatopdown_funtype_59_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_59(sigmatopdown_funtype_59_t x, sigmatopdown_funtype_59_t y){
        return false;}

char* json_sigmatopdown_funtype_59(sigmatopdown_funtype_59_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_59\""); return result;}


bool_t f_sigmatopdown_closure_60(struct sigmatopdown_closure_60_s * closure, sigmatopdown__ent_adt_t bvar){
        bool_t result = h_sigmatopdown_closure_60(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_sigmatopdown_closure_60(struct sigmatopdown_closure_60_s * closure, sigmatopdown__ent_adt_t bvar){
        return h_sigmatopdown_closure_60(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_sigmatopdown_closure_60(sigmatopdown__ent_adt_t ivar_4, uint32_t ivar_2, uint32_t ivar_1){
        bool_t result;
        mpq_ptr_t ivar_5;
        uint32_t ivar_8;
        ivar_8 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_4);
        mpz_t tmp28548;
        mpz_init(tmp28548);
        mpz_set_ui(tmp28548, (uint64_t)ivar_2);
        mpz_add_ui(tmp28548, tmp28548, (uint64_t)ivar_8);
        mpq_mk_set_z(ivar_5, tmp28548);
        mpz_clear(tmp28548);
        int64_t tmp28549 = mpq_cmp_ui(ivar_5, ivar_1, 1);
        result = (tmp28549 <= 0);

        return result;
}

sigmatopdown_closure_60_t new_sigmatopdown_closure_60(void){
        static struct sigmatopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&f_sigmatopdown_closure_60, .mptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&m_sigmatopdown_closure_60, .rptr =  (void (*)(sigmatopdown_funtype_59_t))&release_sigmatopdown_closure_60, .cptr = (sigmatopdown_funtype_59_t (*)(sigmatopdown_funtype_59_t))&copy_sigmatopdown_closure_60};
        sigmatopdown_closure_60_t tmp = (sigmatopdown_closure_60_t) safe_malloc(sizeof(struct sigmatopdown_closure_60_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_60(sigmatopdown_funtype_59_t closure){
        sigmatopdown_closure_60_t x = (sigmatopdown_closure_60_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_60_t copy_sigmatopdown_closure_60(sigmatopdown_closure_60_t x){
        sigmatopdown_closure_60_t y = new_sigmatopdown_closure_60();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            sigmatopdown_funtype_59_htbl_t new_htbl = (sigmatopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_59_hashentry_t * new_data = (sigmatopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatopdown_closure_61(struct sigmatopdown_closure_61_s * closure, sigmatopdown__ent_adt_t bvar){
        bool_t result = h_sigmatopdown_closure_61(bvar, closure->fvar_1); 
        return result;}

bool_t m_sigmatopdown_closure_61(struct sigmatopdown_closure_61_s * closure, sigmatopdown__ent_adt_t bvar){
        return h_sigmatopdown_closure_61(bvar, closure->fvar_1);}

extern bool_t h_sigmatopdown_closure_61(sigmatopdown__ent_adt_t ivar_3, uint32_t ivar_1){
        bool_t result;
        bool_t ivar_4;
        ivar_3->count++;
        ivar_4 = (bool_t)r_sigmatopdown__pushp((sigmatopdown__ent_adt_t)ivar_3);
        if (ivar_4){ 
             bool_t ivar_9;
             uint32_t ivar_11;
             ivar_3->count++;
             ivar_11 = (uint32_t)sigmatopdown__ent_adt_pos((sigmatopdown__ent_adt_t)ivar_3);
             ivar_9 = (ivar_11 <= ivar_1);
             if (ivar_9){  
           uint8_t ivar_17;
           ivar_17 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_3);
           uint8_t ivar_18;
           ivar_18 = (uint8_t)sigmatopdown__num_non_terminals();
           result = (ivar_17 <= ivar_18);
} else {
             
           release_sigmatopdown__ent_adt(ivar_3);
           result = (bool_t) false;
};
} else {
        
             release_sigmatopdown__ent_adt(ivar_3);
             result = (bool_t) false;
};

        return result;
}

sigmatopdown_closure_61_t new_sigmatopdown_closure_61(void){
        static struct sigmatopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&f_sigmatopdown_closure_61, .mptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&m_sigmatopdown_closure_61, .rptr =  (void (*)(sigmatopdown_funtype_59_t))&release_sigmatopdown_closure_61, .cptr = (sigmatopdown_funtype_59_t (*)(sigmatopdown_funtype_59_t))&copy_sigmatopdown_closure_61};
        sigmatopdown_closure_61_t tmp = (sigmatopdown_closure_61_t) safe_malloc(sizeof(struct sigmatopdown_closure_61_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_61(sigmatopdown_funtype_59_t closure){
        sigmatopdown_closure_61_t x = (sigmatopdown_closure_61_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_61_t copy_sigmatopdown_closure_61(sigmatopdown_closure_61_t x){
        sigmatopdown_closure_61_t y = new_sigmatopdown_closure_61();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        if (x->htbl != NULL){
            sigmatopdown_funtype_59_htbl_t new_htbl = (sigmatopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_59_hashentry_t * new_data = (sigmatopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatopdown_closure_62(struct sigmatopdown_closure_62_s * closure, sigmatopdown__ent_adt_t bvar){
        bool_t result = h_sigmatopdown_closure_62(bvar, closure->fvar_1); 
        return result;}

bool_t m_sigmatopdown_closure_62(struct sigmatopdown_closure_62_s * closure, sigmatopdown__ent_adt_t bvar){
        return h_sigmatopdown_closure_62(bvar, closure->fvar_1);}

extern bool_t h_sigmatopdown_closure_62(sigmatopdown__ent_adt_t ivar_3, uint32_t ivar_1){
        bool_t result;
        bool_t ivar_4;
        sigmatopdown_funtype_59_t ivar_9;
        ivar_9 = (sigmatopdown_funtype_59_t)sigmatopdown__good_push_entryp((uint32_t)ivar_1);
        ivar_3->count++;
        ivar_4 = (bool_t)ivar_9->ftbl->fptr(ivar_9, ivar_3);
        ivar_9->ftbl->rptr(ivar_9);
        if (ivar_4){ 
             uint8_t ivar_15;
             ivar_15 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_3);
             uint8_t ivar_16;
             ivar_16 = (uint8_t)sigmatopdown__num_non_terminals();
             result = (ivar_15 < ivar_16);
} else {
        
             release_sigmatopdown__ent_adt(ivar_3);
             result = (bool_t) false;
};

        return result;
}

sigmatopdown_closure_62_t new_sigmatopdown_closure_62(void){
        static struct sigmatopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&f_sigmatopdown_closure_62, .mptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&m_sigmatopdown_closure_62, .rptr =  (void (*)(sigmatopdown_funtype_59_t))&release_sigmatopdown_closure_62, .cptr = (sigmatopdown_funtype_59_t (*)(sigmatopdown_funtype_59_t))&copy_sigmatopdown_closure_62};
        sigmatopdown_closure_62_t tmp = (sigmatopdown_closure_62_t) safe_malloc(sizeof(struct sigmatopdown_closure_62_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_62(sigmatopdown_funtype_59_t closure){
        sigmatopdown_closure_62_t x = (sigmatopdown_closure_62_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_62_t copy_sigmatopdown_closure_62(sigmatopdown_closure_62_t x){
        sigmatopdown_closure_62_t y = new_sigmatopdown_closure_62();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        if (x->htbl != NULL){
            sigmatopdown_funtype_59_htbl_t new_htbl = (sigmatopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_59_hashentry_t * new_data = (sigmatopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatopdown_closure_63(struct sigmatopdown_closure_63_s * closure, sigmatopdown__ent_adt_t bvar){
        bool_t result = h_sigmatopdown_closure_63(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_sigmatopdown_closure_63(struct sigmatopdown_closure_63_s * closure, sigmatopdown__ent_adt_t bvar){
        return h_sigmatopdown_closure_63(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_sigmatopdown_closure_63(sigmatopdown__ent_adt_t ivar_4, uint32_t ivar_2, uint32_t ivar_1){
        bool_t result;
        bool_t ivar_5;
        bool_t ivar_7;
        ivar_4->count++;
        ivar_7 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_4);
        if (ivar_7){ 
             sigmatopdown_funtype_59_t ivar_15;
             ivar_15 = (sigmatopdown_funtype_59_t)sigmatopdown__good_good_entryp((uint32_t)ivar_1, (uint32_t)ivar_2);
             ivar_4->count++;
             ivar_5 = (bool_t)ivar_15->ftbl->fptr(ivar_15, ivar_4);
             ivar_15->ftbl->rptr(ivar_15);
} else {
        
             ivar_5 = (bool_t) true;
};
        if (ivar_5){ 
             bool_t ivar_24;
             ivar_4->count++;
             ivar_24 = (bool_t)r_sigmatopdown__pushp((sigmatopdown__ent_adt_t)ivar_4);
             if (ivar_24){  
           sigmatopdown_funtype_59_t ivar_32;
           ivar_32 = (sigmatopdown_funtype_59_t)sigmatopdown__good_push_entryp((uint32_t)ivar_1);
           result = (bool_t)ivar_32->ftbl->fptr(ivar_32, ivar_4);
           ivar_32->ftbl->rptr(ivar_32);
} else {
             
           release_sigmatopdown__ent_adt(ivar_4);
           result = (bool_t) true;
};
} else {
        
             release_sigmatopdown__ent_adt(ivar_4);
             result = (bool_t) false;
};

        return result;
}

sigmatopdown_closure_63_t new_sigmatopdown_closure_63(void){
        static struct sigmatopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&f_sigmatopdown_closure_63, .mptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&m_sigmatopdown_closure_63, .rptr =  (void (*)(sigmatopdown_funtype_59_t))&release_sigmatopdown_closure_63, .cptr = (sigmatopdown_funtype_59_t (*)(sigmatopdown_funtype_59_t))&copy_sigmatopdown_closure_63};
        sigmatopdown_closure_63_t tmp = (sigmatopdown_closure_63_t) safe_malloc(sizeof(struct sigmatopdown_closure_63_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_63(sigmatopdown_funtype_59_t closure){
        sigmatopdown_closure_63_t x = (sigmatopdown_closure_63_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_63_t copy_sigmatopdown_closure_63(sigmatopdown_closure_63_t x){
        sigmatopdown_closure_63_t y = new_sigmatopdown_closure_63();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            sigmatopdown_funtype_59_htbl_t new_htbl = (sigmatopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_59_hashentry_t * new_data = (sigmatopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatopdown_funtype_64(sigmatopdown_funtype_64_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_64_t copy_sigmatopdown_funtype_64(sigmatopdown_funtype_64_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_64(sigmatopdown_funtype_64_t x, sigmatopdown_funtype_64_t y){
        return false;}

char* json_sigmatopdown_funtype_64(sigmatopdown_funtype_64_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_64\""); return result;}


sigmatopdown_array_65_t new_sigmatopdown_array_65(uint32_t size){
        sigmatopdown_array_65_t tmp = (sigmatopdown_array_65_t) safe_malloc(sizeof(struct sigmatopdown_array_65_s) + (size * sizeof(sigmatopdown__ent_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_sigmatopdown_array_65(sigmatopdown_array_65_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_sigmatopdown__ent_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_sigmatopdown_array_65_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_array_65((sigmatopdown_array_65_t)x);
}

sigmatopdown_array_65_t copy_sigmatopdown_array_65(sigmatopdown_array_65_t x){
        sigmatopdown_array_65_t tmp = new_sigmatopdown_array_65(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_sigmatopdown_array_65(sigmatopdown_array_65_t x, sigmatopdown_array_65_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_sigmatopdown__ent_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_sigmatopdown_array_65(sigmatopdown_array_65_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_sigmatopdown__ent_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatopdown_array_65_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatopdown_array_65((sigmatopdown_array_65_t)x, (sigmatopdown_array_65_t)y);
}

char * json_sigmatopdown_array_65_ptr(pointer_t x, type_actual_t T){
        return json_sigmatopdown_array_65((sigmatopdown_array_65_t)x);
}

actual_sigmatopdown_array_65_t actual_sigmatopdown_array_65(){
        actual_sigmatopdown_array_65_t new = (actual_sigmatopdown_array_65_t)safe_malloc(sizeof(struct actual_sigmatopdown_array_65_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_array_65_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_array_65_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_array_65_ptr);
 

 
        return new;
 };

sigmatopdown_array_65_t update_sigmatopdown_array_65(sigmatopdown_array_65_t x, uint32_t i, sigmatopdown__ent_adt_t v){
         sigmatopdown_array_65_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_sigmatopdown_array_65(x);
                      x->count--;};
        sigmatopdown__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

sigmatopdown_array_65_t upgrade_sigmatopdown_array_65(sigmatopdown_array_65_t x, uint32_t i, sigmatopdown__ent_adt_t v){
         sigmatopdown_array_65_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatopdown_array_65_s) + (newmax * sizeof(sigmatopdown__ent_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatopdown_array_65(x);} else {y = copy_sigmatopdown_array_65(x);
                      x->count--;};
        sigmatopdown__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}




sigmatopdown_array_66_t new_sigmatopdown_array_66(uint32_t size){
        sigmatopdown_array_66_t tmp = (sigmatopdown_array_66_t) safe_malloc(sizeof(struct sigmatopdown_array_66_s) + (size * sizeof(sigmatopdown_array_65_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_sigmatopdown_array_66(sigmatopdown_array_66_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_sigmatopdown_array_65(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_sigmatopdown_array_66_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_array_66((sigmatopdown_array_66_t)x);
}

sigmatopdown_array_66_t copy_sigmatopdown_array_66(sigmatopdown_array_66_t x){
        sigmatopdown_array_66_t tmp = new_sigmatopdown_array_66(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_sigmatopdown_array_66(sigmatopdown_array_66_t x, sigmatopdown_array_66_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_sigmatopdown_array_65(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_sigmatopdown_array_66(sigmatopdown_array_66_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_sigmatopdown_array_65(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatopdown_array_66_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatopdown_array_66((sigmatopdown_array_66_t)x, (sigmatopdown_array_66_t)y);
}

char * json_sigmatopdown_array_66_ptr(pointer_t x, type_actual_t T){
        return json_sigmatopdown_array_66((sigmatopdown_array_66_t)x);
}

actual_sigmatopdown_array_66_t actual_sigmatopdown_array_66(){
        actual_sigmatopdown_array_66_t new = (actual_sigmatopdown_array_66_t)safe_malloc(sizeof(struct actual_sigmatopdown_array_66_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_array_66_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_array_66_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_array_66_ptr);
 

 
        return new;
 };

sigmatopdown_array_66_t update_sigmatopdown_array_66(sigmatopdown_array_66_t x, uint32_t i, sigmatopdown_array_65_t v){
         sigmatopdown_array_66_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_sigmatopdown_array_66(x);
                      x->count--;};
        sigmatopdown_array_65_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown_array_65(yelems[i]);};
         yelems[i] = v;
         return y;}

sigmatopdown_array_66_t upgrade_sigmatopdown_array_66(sigmatopdown_array_66_t x, uint32_t i, sigmatopdown_array_65_t v){
         sigmatopdown_array_66_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatopdown_array_66_s) + (newmax * sizeof(sigmatopdown_array_65_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatopdown_array_66(x);} else {y = copy_sigmatopdown_array_66(x);
                      x->count--;};
        sigmatopdown_array_65_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown_array_65(yelems[i]);};
         yelems[i] = v;
         return y;}




bool_t f_sigmatopdown_closure_67(struct sigmatopdown_closure_67_s * closure, sigmatopdown_record_9_t bvar){
        uint32_t bvar_1;
        bvar_1 = (uint32_t)bvar->project_1;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        release_sigmatopdown_record_9(bvar);
        bool_t result = h_sigmatopdown_closure_67(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_sigmatopdown_closure_67(struct sigmatopdown_closure_67_s * closure, uint32_t bvar_1, uint8_t bvar_2){
        return h_sigmatopdown_closure_67(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2);}

extern bool_t h_sigmatopdown_closure_67(uint32_t ivar_5, uint8_t ivar_6, sigmatopdown_array_66_t ivar_2, uint32_t ivar_1){
        bool_t result;
        sigmatopdown__ent_adt_t ivar_18;
        sigmatopdown_array_65_t ivar_10;
        ivar_10 = (sigmatopdown_array_65_t)ivar_2->elems[ivar_5];
        ivar_10->count++;
        ivar_18 = (sigmatopdown__ent_adt_t)ivar_10->elems[ivar_6];
        ivar_18->count++;
        release_sigmatopdown_array_65(ivar_10);
        result = (bool_t)r_sigmatopdown__pushp((sigmatopdown__ent_adt_t)ivar_18);

        return result;
}

sigmatopdown_closure_67_t new_sigmatopdown_closure_67(void){
        static struct sigmatopdown_funtype_64_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_64_t, sigmatopdown_record_9_t))&f_sigmatopdown_closure_67, .mptr = (bool_t (*)(sigmatopdown_funtype_64_t, uint32_t, uint8_t))&m_sigmatopdown_closure_67, .rptr =  (void (*)(sigmatopdown_funtype_64_t))&release_sigmatopdown_closure_67, .cptr = (sigmatopdown_funtype_64_t (*)(sigmatopdown_funtype_64_t))&copy_sigmatopdown_closure_67};
        sigmatopdown_closure_67_t tmp = (sigmatopdown_closure_67_t) safe_malloc(sizeof(struct sigmatopdown_closure_67_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_67(sigmatopdown_funtype_64_t closure){
        sigmatopdown_closure_67_t x = (sigmatopdown_closure_67_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_array_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_67_t copy_sigmatopdown_closure_67(sigmatopdown_closure_67_t x){
        sigmatopdown_closure_67_t y = new_sigmatopdown_closure_67();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            sigmatopdown_funtype_64_htbl_t new_htbl = (sigmatopdown_funtype_64_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_64_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_64_hashentry_t * new_data = (sigmatopdown_funtype_64_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_64_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_64_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatopdown_record_68_t new_sigmatopdown_record_68(void){
        sigmatopdown_record_68_t tmp = (sigmatopdown_record_68_t) safe_malloc(sizeof(struct sigmatopdown_record_68_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown_record_68(sigmatopdown_record_68_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__ent_adt(x->project_1);
         release_sigmatopdown__ent_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown_record_68_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_record_68((sigmatopdown_record_68_t)x);
}

sigmatopdown_record_68_t copy_sigmatopdown_record_68(sigmatopdown_record_68_t x){
        sigmatopdown_record_68_t y = new_sigmatopdown_record_68();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown_record_68(sigmatopdown_record_68_t x, sigmatopdown_record_68_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_sigmatopdown__ent_adt(x->project_2, y->project_2);
        return tmp;}

char * json_sigmatopdown_record_68(sigmatopdown_record_68_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdown__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_sigmatopdown__ent_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown_record_68_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_68_t T){
        return equal_sigmatopdown_record_68((sigmatopdown_record_68_t)x, (sigmatopdown_record_68_t)y);
}

char * json_sigmatopdown_record_68_ptr(pointer_t x, actual_sigmatopdown_record_68_t T){
        return json_sigmatopdown_record_68((sigmatopdown_record_68_t)x);
}

actual_sigmatopdown_record_68_t actual_sigmatopdown_record_68(){
        actual_sigmatopdown_record_68_t new = (actual_sigmatopdown_record_68_t)safe_malloc(sizeof(struct actual_sigmatopdown_record_68_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_record_68_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_record_68_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_record_68_ptr);
 

 
        return new;
 };

sigmatopdown_record_68_t update_sigmatopdown_record_68_project_1(sigmatopdown_record_68_t x, sigmatopdown__ent_adt_t v){
        sigmatopdown_record_68_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatopdown__ent_adt(x->project_1);};}
        else {y = copy_sigmatopdown_record_68(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatopdown__ent_adt_t)v;
        return y;}

sigmatopdown_record_68_t update_sigmatopdown_record_68_project_2(sigmatopdown_record_68_t x, sigmatopdown__ent_adt_t v){
        sigmatopdown_record_68_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_sigmatopdown__ent_adt(x->project_2);};}
        else {y = copy_sigmatopdown_record_68(x); x->count--; y->project_2->count--;};
        y->project_2 = (sigmatopdown__ent_adt_t)v;
        return y;}



void release_sigmatopdown_funtype_69(sigmatopdown_funtype_69_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_69_t copy_sigmatopdown_funtype_69(sigmatopdown_funtype_69_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_69(sigmatopdown_funtype_69_t x, sigmatopdown_funtype_69_t y){
        return false;}

char* json_sigmatopdown_funtype_69(sigmatopdown_funtype_69_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_69\""); return result;}


sigmatopdown__lang_spec_t new_sigmatopdown__lang_spec(uint32_t size){
        sigmatopdown__lang_spec_t tmp = (sigmatopdown__lang_spec_t) safe_malloc(sizeof(struct sigmatopdown__lang_spec_s) + (size * sizeof(sigmatopdown__peg_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_sigmatopdown__lang_spec(sigmatopdown__lang_spec_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_sigmatopdown__peg_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_sigmatopdown__lang_spec_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown__lang_spec((sigmatopdown__lang_spec_t)x);
}

sigmatopdown__lang_spec_t copy_sigmatopdown__lang_spec(sigmatopdown__lang_spec_t x){
        sigmatopdown__lang_spec_t tmp = new_sigmatopdown__lang_spec(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_sigmatopdown__lang_spec(sigmatopdown__lang_spec_t x, sigmatopdown__lang_spec_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_sigmatopdown__peg_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_sigmatopdown__lang_spec(sigmatopdown__lang_spec_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_sigmatopdown__peg_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatopdown__lang_spec_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatopdown__lang_spec((sigmatopdown__lang_spec_t)x, (sigmatopdown__lang_spec_t)y);
}

char * json_sigmatopdown__lang_spec_ptr(pointer_t x, type_actual_t T){
        return json_sigmatopdown__lang_spec((sigmatopdown__lang_spec_t)x);
}

actual_sigmatopdown__lang_spec_t actual_sigmatopdown__lang_spec(){
        actual_sigmatopdown__lang_spec_t new = (actual_sigmatopdown__lang_spec_t)safe_malloc(sizeof(struct actual_sigmatopdown__lang_spec_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown__lang_spec_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown__lang_spec_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown__lang_spec_ptr);
 

 
        return new;
 };

sigmatopdown__lang_spec_t update_sigmatopdown__lang_spec(sigmatopdown__lang_spec_t x, uint32_t i, sigmatopdown__peg_adt_t v){
         sigmatopdown__lang_spec_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_sigmatopdown__lang_spec(x);
                      x->count--;};
        sigmatopdown__peg_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__peg_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

sigmatopdown__lang_spec_t upgrade_sigmatopdown__lang_spec(sigmatopdown__lang_spec_t x, uint32_t i, sigmatopdown__peg_adt_t v){
         sigmatopdown__lang_spec_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatopdown__lang_spec_s) + (newmax * sizeof(sigmatopdown__peg_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatopdown__lang_spec(x);} else {y = copy_sigmatopdown__lang_spec(x);
                      x->count--;};
        sigmatopdown__peg_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__peg_adt(yelems[i]);};
         yelems[i] = v;
         return y;}




bool_t f_sigmatopdown_closure_71(struct sigmatopdown_closure_71_s * closure, sigmatopdown_record_68_t bvar){
        sigmatopdown__ent_adt_t bvar_1;
        bvar_1 = (sigmatopdown__ent_adt_t)bvar->project_1;
        bvar->project_1->count++;
        sigmatopdown__ent_adt_t bvar_2;
        bvar_2 = (sigmatopdown__ent_adt_t)bvar->project_2;
        bvar->project_2->count++;
        release_sigmatopdown_record_68(bvar);
        bool_t result = h_sigmatopdown_closure_71(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_sigmatopdown__ent_adt(bvar_1);
        release_sigmatopdown__ent_adt(bvar_2);
        return result;}

bool_t m_sigmatopdown_closure_71(struct sigmatopdown_closure_71_s * closure, sigmatopdown__ent_adt_t bvar_1, sigmatopdown__ent_adt_t bvar_2){
        return h_sigmatopdown_closure_71(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_sigmatopdown_closure_71(sigmatopdown__ent_adt_t ivar_6, sigmatopdown__ent_adt_t ivar_7, sigmatopdown_array_66_t ivar_3, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2){
        bool_t result;
        /* p1 */ uint32_t ivar_8;
        ivar_6->count++;
        ivar_8 = (uint32_t)sigmatopdown__ent_adt_pos((sigmatopdown__ent_adt_t)ivar_6);
        /* nt1 */ uint8_t ivar_12;
        ivar_12 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_6);
        /* p2 */ uint32_t ivar_16;
        ivar_7->count++;
        ivar_16 = (uint32_t)sigmatopdown__ent_adt_pos((sigmatopdown__ent_adt_t)ivar_7);
        /* nt2 */ uint8_t ivar_20;
        ivar_20 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_7);
        bool_t ivar_24;
        uint8_t ivar_27;
        ivar_27 = (uint8_t)sigmatopdown__num_non_terminals();
        ivar_24 = (ivar_12 >= ivar_27);
        if (ivar_24){ 
             result = (bool_t) true;
} else {
        
             sigmatopdown__peg_adt_t ivar_29;
             ivar_29 = (sigmatopdown__peg_adt_t)ivar_2->elems[ivar_12];
             ivar_29->count++;
             bool_t ivar_93;
             ivar_29->count++;
             ivar_93 = (bool_t)r_sigmatopdown__concatp((sigmatopdown__peg_adt_t)ivar_29);
             if (ivar_93){  
           uint8_t ivar_34;
           ivar_29->count++;
           ivar_34 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_29);
           uint8_t ivar_35;
           ivar_35 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_29);
           bool_t ivar_42;
           bool_t ivar_44;
           ivar_44 = (ivar_16 == ivar_8);
           if (ivar_44){   
           ivar_42 = (ivar_20 == ivar_34);
} else {
           
           ivar_42 = (bool_t) false;
};
           if (ivar_42){   
           result = (bool_t) true;
} else {
           
           bool_t ivar_53;
           sigmatopdown__ent_adt_t ivar_66;
           sigmatopdown_array_65_t ivar_58;
           ivar_58 = (sigmatopdown_array_65_t)ivar_3->elems[ivar_8];
           ivar_58->count++;
           ivar_66 = (sigmatopdown__ent_adt_t)ivar_58->elems[ivar_34];
           ivar_66->count++;
           release_sigmatopdown_array_65(ivar_58);
           ivar_53 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_66);
           if (ivar_53){    
            bool_t ivar_67;
            ivar_67 = (ivar_20 == ivar_35);
            if (ivar_67){     
             mpq_ptr_t ivar_73;
             uint32_t ivar_75;
             sigmatopdown__ent_adt_t ivar_87;
             sigmatopdown_array_65_t ivar_79;
             ivar_79 = (sigmatopdown_array_65_t)ivar_3->elems[ivar_8];
             ivar_79->count++;
             ivar_87 = (sigmatopdown__ent_adt_t)ivar_79->elems[ivar_34];
             ivar_87->count++;
             release_sigmatopdown_array_65(ivar_79);
             ivar_75 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_87);
             mpz_t tmp28710;
             mpz_init(tmp28710);
             mpz_set_ui(tmp28710, (uint64_t)ivar_8);
             mpz_add_ui(tmp28710, tmp28710, (uint64_t)ivar_75);
             mpq_mk_set_z(ivar_73, tmp28710);
             mpz_clear(tmp28710);
             int64_t tmp28711 = mpq_cmp_ui(ivar_73, ivar_16, 1);
             result = (tmp28711 == 0);
} else {
            
             result = (bool_t) false;
};
} else {
           
            result = (bool_t) false;
};
};
} else {
             
           bool_t ivar_141;
           ivar_29->count++;
           ivar_141 = (bool_t)r_sigmatopdown__orp((sigmatopdown__peg_adt_t)ivar_29);
           if (ivar_141){   
           uint8_t ivar_97;
           ivar_29->count++;
           ivar_97 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_29);
           uint8_t ivar_98;
           ivar_98 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_29);
           bool_t ivar_105;
           bool_t ivar_107;
           ivar_107 = (ivar_16 == ivar_8);
           if (ivar_107){    
            ivar_105 = (ivar_20 == ivar_97);
} else {
           
            ivar_105 = (bool_t) false;
};
           if (ivar_105){    
            result = (bool_t) true;
} else {
           
            bool_t ivar_116;
            sigmatopdown__ent_adt_t ivar_129;
            sigmatopdown_array_65_t ivar_121;
            ivar_121 = (sigmatopdown_array_65_t)ivar_3->elems[ivar_8];
            ivar_121->count++;
            ivar_129 = (sigmatopdown__ent_adt_t)ivar_121->elems[ivar_97];
            ivar_129->count++;
            release_sigmatopdown_array_65(ivar_121);
            ivar_116 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_129);
            if (ivar_116){     
             bool_t ivar_130;
             ivar_130 = (ivar_20 == ivar_98);
             if (ivar_130){      
              result = (ivar_16 == ivar_8);
} else {
             
              result = (bool_t) false;
};
} else {
            
             result = (bool_t) false;
};
};
} else {
           
           bool_t ivar_158;
           ivar_29->count++;
           ivar_158 = (bool_t)r_sigmatopdown__andp((sigmatopdown__peg_adt_t)ivar_29);
           if (ivar_158){    
            uint8_t ivar_145;
            ivar_145 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_29);
            bool_t ivar_149;
            ivar_149 = (ivar_20 == ivar_145);
            if (ivar_149){     
             result = (ivar_16 == ivar_8);
} else {
            
             result = (bool_t) false;
};
} else {
           
            bool_t ivar_175;
            ivar_29->count++;
            ivar_175 = (bool_t)r_sigmatopdown__notp((sigmatopdown__peg_adt_t)ivar_29);
            if (ivar_175){     
             uint8_t ivar_162;
             ivar_162 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_29);
             bool_t ivar_166;
             ivar_166 = (ivar_20 == ivar_162);
             if (ivar_166){      
              result = (ivar_16 == ivar_8);
} else {
             
              result = (bool_t) false;
};
} else {
            
             release_sigmatopdown__peg_adt(ivar_29);
             result = (bool_t) false;
};
};
};
};
};

        return result;
}

sigmatopdown_closure_71_t new_sigmatopdown_closure_71(void){
        static struct sigmatopdown_funtype_69_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_69_t, sigmatopdown_record_68_t))&f_sigmatopdown_closure_71, .mptr = (bool_t (*)(sigmatopdown_funtype_69_t, sigmatopdown__ent_adt_t, sigmatopdown__ent_adt_t))&m_sigmatopdown_closure_71, .rptr =  (void (*)(sigmatopdown_funtype_69_t))&release_sigmatopdown_closure_71, .cptr = (sigmatopdown_funtype_69_t (*)(sigmatopdown_funtype_69_t))&copy_sigmatopdown_closure_71};
        sigmatopdown_closure_71_t tmp = (sigmatopdown_closure_71_t) safe_malloc(sizeof(struct sigmatopdown_closure_71_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_71(sigmatopdown_funtype_69_t closure){
        sigmatopdown_closure_71_t x = (sigmatopdown_closure_71_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_array_66(x->fvar_1);
         release_sigmatopdown__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_71_t copy_sigmatopdown_closure_71(sigmatopdown_closure_71_t x){
        sigmatopdown_closure_71_t y = new_sigmatopdown_closure_71();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sigmatopdown_funtype_69_htbl_t new_htbl = (sigmatopdown_funtype_69_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_69_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_69_hashentry_t * new_data = (sigmatopdown_funtype_69_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_69_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_69_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatopdown_funtype_72(sigmatopdown_funtype_72_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_72_t copy_sigmatopdown_funtype_72(sigmatopdown_funtype_72_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatopdown_funtype_72(sigmatopdown_funtype_72_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatopdown_funtype_72_hashentry_t data = htbl->data[hashindex];
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

sigmatopdown_funtype_72_t dupdate_sigmatopdown_funtype_72(sigmatopdown_funtype_72_t a, uint32_t i, mpz_ptr_t v){
        sigmatopdown_funtype_72_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatopdown_funtype_72_htbl_t)safe_malloc(sizeof(struct sigmatopdown_funtype_72_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatopdown_funtype_72_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatopdown_funtype_72_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatopdown_funtype_72_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatopdown_funtype_72_hashentry_t * new_data = (sigmatopdown_funtype_72_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatopdown_funtype_72_hashentry_s));
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
        uint32_t hashindex = lookup_sigmatopdown_funtype_72(htbl, i, ihash);
        sigmatopdown_funtype_72_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; mpz_set(htbl->data[hashindex].value, v); htbl->num_entries++;}
            else {mpz_ptr_t tempvalue;mpz_mk_set(tempvalue, htbl->data[hashindex].value);mpz_set(htbl->data[hashindex].value, v);};
        return a;

}

sigmatopdown_funtype_72_t update_sigmatopdown_funtype_72(sigmatopdown_funtype_72_t a, uint32_t i, mpz_ptr_t v){
        if (a->count == 1){
                return dupdate_sigmatopdown_funtype_72(a, i, v);
            } else {
                sigmatopdown_funtype_72_t x = copy_sigmatopdown_funtype_72(a);
                a->count--;
                return dupdate_sigmatopdown_funtype_72(x, i, v);
            }}

bool_t equal_sigmatopdown_funtype_72(sigmatopdown_funtype_72_t x, sigmatopdown_funtype_72_t y){
        return false;}

char* json_sigmatopdown_funtype_72(sigmatopdown_funtype_72_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_72\""); return result;}


sigmatopdown_array_73_t new_sigmatopdown_array_73(uint32_t size){
        sigmatopdown_array_73_t tmp = (sigmatopdown_array_73_t) safe_malloc(sizeof(struct sigmatopdown_array_73_s) + (size * sizeof(mpz_ptr_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_sigmatopdown_array_73(sigmatopdown_array_73_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_sigmatopdown_array_73_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_array_73((sigmatopdown_array_73_t)x);
}

sigmatopdown_array_73_t copy_sigmatopdown_array_73(sigmatopdown_array_73_t x){
        sigmatopdown_array_73_t tmp = new_sigmatopdown_array_73(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){mpz_set(tmp->elems[i], x->elems[i]);};
         return tmp;}

bool_t equal_sigmatopdown_array_73(sigmatopdown_array_73_t x, sigmatopdown_array_73_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        tmp = (mpz_cmp(x->elems[i], y->elems[i]) == 0);
        return tmp;}

char * json_sigmatopdown_array_73(sigmatopdown_array_73_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_mpz(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatopdown_array_73_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatopdown_array_73((sigmatopdown_array_73_t)x, (sigmatopdown_array_73_t)y);
}

char * json_sigmatopdown_array_73_ptr(pointer_t x, type_actual_t T){
        return json_sigmatopdown_array_73((sigmatopdown_array_73_t)x);
}

actual_sigmatopdown_array_73_t actual_sigmatopdown_array_73(){
        actual_sigmatopdown_array_73_t new = (actual_sigmatopdown_array_73_t)safe_malloc(sizeof(struct actual_sigmatopdown_array_73_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_array_73_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_array_73_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_array_73_ptr);
 

 
        return new;
 };

sigmatopdown_array_73_t update_sigmatopdown_array_73(sigmatopdown_array_73_t x, uint32_t i, mpz_t v){
        sigmatopdown_array_73_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_sigmatopdown_array_73(x );
                x->count--;};
        mpz_set(y->elems[i], v);
        return y;}

sigmatopdown_array_73_t upgrade_sigmatopdown_array_73(sigmatopdown_array_73_t x, uint32_t i, mpz_t v){
        sigmatopdown_array_73_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatopdown_array_73_s) + (newmax * sizeof(mpz_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatopdown_array_73(x);}
           else {y = copy_sigmatopdown_array_73(x );
                x->count--;};
        mpz_set(y->elems[i], v);
        return y;}




mpz_ptr_t f_sigmatopdown_closure_74(struct sigmatopdown_closure_74_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        sigmatopdown_funtype_72_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatopdown_funtype_72(htbl, bvar, hash);
        sigmatopdown_funtype_72_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            mpz_ptr_t result;
            mpz_mk_set(result, entry.value);
            return result;}
        

        return h_sigmatopdown_closure_74(bvar, closure->fvar_1, closure->fvar_2);};

return h_sigmatopdown_closure_74(bvar, closure->fvar_1, closure->fvar_2);}

mpz_ptr_t m_sigmatopdown_closure_74(struct sigmatopdown_closure_74_s * closure, uint32_t bvar){
        return h_sigmatopdown_closure_74(bvar, closure->fvar_1, closure->fvar_2);}

extern mpz_ptr_t h_sigmatopdown_closure_74(uint32_t ivar_4, sigmatopdown_array_73_t ivar_2, uint32_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_5;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)0;
        ivar_5 = (ivar_4 == ivar_7);
        if (ivar_5){ 
             uint32_t ivar_12;
             ivar_12 = (uint32_t)0;
             result = safe_malloc(sizeof(mpz_t));
             mpz_init(result);
             mpz_set(result, ivar_2->elems[ivar_12]);
} else {
        
             mpz_ptr_t ivar_13;
             ivar_13 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_13);
             mpz_set(ivar_13, ivar_2->elems[ivar_4]);
             mpz_ptr_t ivar_14;
             sigmatopdown_funtype_72_t ivar_25;
             ivar_2->count++;
             ivar_25 = (sigmatopdown_funtype_72_t)sigmatopdown__sigma((uint32_t)ivar_1, (sigmatopdown_array_73_t)ivar_2);
             int32_t ivar_33;
             uint8_t ivar_21;
             ivar_21 = (uint8_t)1;
             ivar_33 = (int32_t)((uint64_t)ivar_4 - (uint64_t)ivar_21);
             uint32_t ivar_32;
             //copying to uint32 from int32;
             ivar_32 = (uint32_t)ivar_33;
             mpz_mk_set(ivar_14, ivar_25->ftbl->fptr(ivar_25, ivar_32));
             ivar_25->ftbl->rptr(ivar_25);
             mpz_mk_add(result, ivar_14, ivar_13);
};

        return result;
}

sigmatopdown_closure_74_t new_sigmatopdown_closure_74(void){
        static struct sigmatopdown_funtype_72_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(sigmatopdown_funtype_72_t, uint32_t))&f_sigmatopdown_closure_74, .mptr = (mpz_ptr_t (*)(sigmatopdown_funtype_72_t, uint32_t))&m_sigmatopdown_closure_74, .rptr =  (void (*)(sigmatopdown_funtype_72_t))&release_sigmatopdown_closure_74, .cptr = (sigmatopdown_funtype_72_t (*)(sigmatopdown_funtype_72_t))&copy_sigmatopdown_closure_74};
        sigmatopdown_closure_74_t tmp = (sigmatopdown_closure_74_t) safe_malloc(sizeof(struct sigmatopdown_closure_74_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_74(sigmatopdown_funtype_72_t closure){
        sigmatopdown_closure_74_t x = (sigmatopdown_closure_74_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_array_73(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_74_t copy_sigmatopdown_closure_74(sigmatopdown_closure_74_t x){
        sigmatopdown_closure_74_t y = new_sigmatopdown_closure_74();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            sigmatopdown_funtype_72_htbl_t new_htbl = (sigmatopdown_funtype_72_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_72_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_72_hashentry_t * new_data = (sigmatopdown_funtype_72_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_72_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_72_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatopdown_funtype_75(sigmatopdown_funtype_75_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_75_t copy_sigmatopdown_funtype_75(sigmatopdown_funtype_75_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_75(sigmatopdown_funtype_75_t x, sigmatopdown_funtype_75_t y){
        return false;}

char* json_sigmatopdown_funtype_75(sigmatopdown_funtype_75_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_75\""); return result;}

void release_sigmatopdown_funtype_76(sigmatopdown_funtype_76_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_76_t copy_sigmatopdown_funtype_76(sigmatopdown_funtype_76_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_76(sigmatopdown_funtype_76_t x, sigmatopdown_funtype_76_t y){
        return false;}

char* json_sigmatopdown_funtype_76(sigmatopdown_funtype_76_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_76\""); return result;}


bool_t f_sigmatopdown_closure_77(struct sigmatopdown_closure_77_s * closure, sigmatopdown__ent_adt_t bvar){
        bool_t result = h_sigmatopdown_closure_77(bvar); 
        return result;}

bool_t m_sigmatopdown_closure_77(struct sigmatopdown_closure_77_s * closure, sigmatopdown__ent_adt_t bvar){
        return h_sigmatopdown_closure_77(bvar);}

extern bool_t h_sigmatopdown_closure_77(sigmatopdown__ent_adt_t ivar_19){
        bool_t result;
        result = (bool_t)r_sigmatopdown__pushp((sigmatopdown__ent_adt_t)ivar_19);

        return result;
}

sigmatopdown_closure_77_t new_sigmatopdown_closure_77(void){
        static struct sigmatopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&f_sigmatopdown_closure_77, .mptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&m_sigmatopdown_closure_77, .rptr =  (void (*)(sigmatopdown_funtype_59_t))&release_sigmatopdown_closure_77, .cptr = (sigmatopdown_funtype_59_t (*)(sigmatopdown_funtype_59_t))&copy_sigmatopdown_closure_77};
        sigmatopdown_closure_77_t tmp = (sigmatopdown_closure_77_t) safe_malloc(sizeof(struct sigmatopdown_closure_77_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_77(sigmatopdown_funtype_59_t closure){
        sigmatopdown_closure_77_t x = (sigmatopdown_closure_77_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_77_t copy_sigmatopdown_closure_77(sigmatopdown_closure_77_t x){
        sigmatopdown_closure_77_t y = new_sigmatopdown_closure_77();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatopdown_funtype_59_htbl_t new_htbl = (sigmatopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_59_hashentry_t * new_data = (sigmatopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatopdown_closure_78(struct sigmatopdown_closure_78_s * closure, sigmatopdown__ent_adt_t bvar){
        bool_t result = h_sigmatopdown_closure_78(bvar); 
        return result;}

bool_t m_sigmatopdown_closure_78(struct sigmatopdown_closure_78_s * closure, sigmatopdown__ent_adt_t bvar){
        return h_sigmatopdown_closure_78(bvar);}

extern bool_t h_sigmatopdown_closure_78(sigmatopdown__ent_adt_t ivar_9){
        bool_t result;
        result = (bool_t)sigmatopdown__good_or_failp((sigmatopdown__ent_adt_t)ivar_9);

        return result;
}

sigmatopdown_closure_78_t new_sigmatopdown_closure_78(void){
        static struct sigmatopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&f_sigmatopdown_closure_78, .mptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&m_sigmatopdown_closure_78, .rptr =  (void (*)(sigmatopdown_funtype_59_t))&release_sigmatopdown_closure_78, .cptr = (sigmatopdown_funtype_59_t (*)(sigmatopdown_funtype_59_t))&copy_sigmatopdown_closure_78};
        sigmatopdown_closure_78_t tmp = (sigmatopdown_closure_78_t) safe_malloc(sizeof(struct sigmatopdown_closure_78_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_78(sigmatopdown_funtype_59_t closure){
        sigmatopdown_closure_78_t x = (sigmatopdown_closure_78_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_78_t copy_sigmatopdown_closure_78(sigmatopdown_closure_78_t x){
        sigmatopdown_closure_78_t y = new_sigmatopdown_closure_78();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatopdown_funtype_59_htbl_t new_htbl = (sigmatopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_59_hashentry_t * new_data = (sigmatopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatopdown_funtype_79(sigmatopdown_funtype_79_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_79_t copy_sigmatopdown_funtype_79(sigmatopdown_funtype_79_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatopdown_funtype_79(sigmatopdown_funtype_79_htbl_t htbl, uint64_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatopdown_funtype_79_hashentry_t data = htbl->data[hashindex];
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

sigmatopdown_funtype_79_t dupdate_sigmatopdown_funtype_79(sigmatopdown_funtype_79_t a, uint64_t i, bool_t v){
        sigmatopdown_funtype_79_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatopdown_funtype_79_htbl_t)safe_malloc(sizeof(struct sigmatopdown_funtype_79_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatopdown_funtype_79_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatopdown_funtype_79_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint64_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatopdown_funtype_79_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatopdown_funtype_79_hashentry_t * new_data = (sigmatopdown_funtype_79_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatopdown_funtype_79_hashentry_s));
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
                                new_data[new_loc].key = (uint64_t)data[j].key;
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (bool_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint64_hash(i);
        uint32_t hashindex = lookup_sigmatopdown_funtype_79(htbl, i, ihash);
        sigmatopdown_funtype_79_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint64_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

sigmatopdown_funtype_79_t update_sigmatopdown_funtype_79(sigmatopdown_funtype_79_t a, uint64_t i, bool_t v){
        if (a->count == 1){
                return dupdate_sigmatopdown_funtype_79(a, i, v);
            } else {
                sigmatopdown_funtype_79_t x = copy_sigmatopdown_funtype_79(a);
                a->count--;
                return dupdate_sigmatopdown_funtype_79(x, i, v);
            }}

bool_t equal_sigmatopdown_funtype_79(sigmatopdown_funtype_79_t x, sigmatopdown_funtype_79_t y){
        return false;}

char* json_sigmatopdown_funtype_79(sigmatopdown_funtype_79_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_79\""); return result;}


bool_t f_sigmatopdown_closure_80(struct sigmatopdown_closure_80_s * closure, uint64_t bvar){
if (closure->htbl != NULL){
        sigmatopdown_funtype_79_htbl_t htbl = closure->htbl;
        uint32_t hash = uint64_hash(bvar);
        uint32_t hashindex = lookup_sigmatopdown_funtype_79(htbl, bvar, hash);
        sigmatopdown_funtype_79_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_sigmatopdown_closure_80(bvar, closure->fvar_1, closure->fvar_2);};

return h_sigmatopdown_closure_80(bvar, closure->fvar_1, closure->fvar_2);}

bool_t m_sigmatopdown_closure_80(struct sigmatopdown_closure_80_s * closure, uint64_t bvar){
        return h_sigmatopdown_closure_80(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_sigmatopdown_closure_80(uint64_t ivar_5, sigmatopdown_array_66_t ivar_2, uint32_t ivar_1){
        bool_t result;
        uint64_t ivar_6;
        ivar_2->count++;
        ivar_6 = (uint64_t)sigmatopdown__pushcount((uint32_t)ivar_1, (sigmatopdown_array_66_t)ivar_2);
        result = (ivar_6 == ivar_5);

        return result;
}

sigmatopdown_closure_80_t new_sigmatopdown_closure_80(void){
        static struct sigmatopdown_funtype_79_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_79_t, uint64_t))&f_sigmatopdown_closure_80, .mptr = (bool_t (*)(sigmatopdown_funtype_79_t, uint64_t))&m_sigmatopdown_closure_80, .rptr =  (void (*)(sigmatopdown_funtype_79_t))&release_sigmatopdown_closure_80, .cptr = (sigmatopdown_funtype_79_t (*)(sigmatopdown_funtype_79_t))&copy_sigmatopdown_closure_80};
        sigmatopdown_closure_80_t tmp = (sigmatopdown_closure_80_t) safe_malloc(sizeof(struct sigmatopdown_closure_80_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_80(sigmatopdown_funtype_79_t closure){
        sigmatopdown_closure_80_t x = (sigmatopdown_closure_80_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_array_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_80_t copy_sigmatopdown_closure_80(sigmatopdown_closure_80_t x){
        sigmatopdown_closure_80_t y = new_sigmatopdown_closure_80();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            sigmatopdown_funtype_79_htbl_t new_htbl = (sigmatopdown_funtype_79_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_79_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_79_hashentry_t * new_data = (sigmatopdown_funtype_79_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_79_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_79_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatopdown_closure_81(struct sigmatopdown_closure_81_s * closure, sigmatopdown__ent_adt_t bvar){
        bool_t result = h_sigmatopdown_closure_81(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

bool_t m_sigmatopdown_closure_81(struct sigmatopdown_closure_81_s * closure, sigmatopdown__ent_adt_t bvar){
        return h_sigmatopdown_closure_81(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern bool_t h_sigmatopdown_closure_81(sigmatopdown__ent_adt_t ivar_7, sigmatopdown_array_66_t ivar_4, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, uint64_t ivar_3){
        bool_t result;
        bool_t ivar_8;
        uint8_t ivar_9;
        ivar_7->count++;
        ivar_9 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_7);
        uint8_t ivar_10;
        ivar_10 = (uint8_t)sigmatopdown__num_non_terminals();
        ivar_8 = (ivar_9 >= ivar_10);
        if (ivar_8){ 
             release_sigmatopdown__ent_adt(ivar_7);
             uint8_t ivar_16;
             ivar_16 = (uint8_t)0;
             result = (ivar_3 == ivar_16);
} else {
        
             /* entry */ sigmatopdown__ent_adt_t ivar_18;
             sigmatopdown_array_65_t ivar_24;
             uint32_t ivar_32;
             ivar_7->count++;
             ivar_32 = (uint32_t)sigmatopdown__ent_adt_pos((sigmatopdown__ent_adt_t)ivar_7);
             ivar_24 = (sigmatopdown_array_65_t)ivar_4->elems[ivar_32];
             ivar_24->count++;
             uint8_t ivar_33;
             ivar_7->count++;
             ivar_33 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_7);
             ivar_18 = (sigmatopdown__ent_adt_t)ivar_24->elems[ivar_33];
             ivar_18->count++;
             release_sigmatopdown_array_65(ivar_24);
             bool_t ivar_34;
             sigmatopdown_funtype_59_t ivar_39;
             ivar_39 = (sigmatopdown_funtype_59_t)sigmatopdown__good_push_entryp((uint32_t)ivar_1);
             ivar_18->count++;
             ivar_34 = (bool_t)ivar_39->ftbl->fptr(ivar_39, ivar_18);
             ivar_39->ftbl->rptr(ivar_39);
             if (ivar_34){  
           bool_t ivar_45;
           bool_t ivar_47;
           uint8_t ivar_49;
           ivar_18->count++;
           ivar_49 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_18);
           uint8_t ivar_50;
           ivar_50 = (uint8_t)sigmatopdown__num_non_terminals();
           ivar_47 = (ivar_49 == ivar_50);
           if (ivar_47){   
           release_sigmatopdown__ent_adt(ivar_7);
           ivar_45 = (bool_t) true;
} else {
           
           sigmatopdown_funtype_69_t ivar_59;
           ivar_2->count++;
           ivar_4->count++;
           ivar_59 = (sigmatopdown_funtype_69_t)sigmatopdown__successor((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatopdown_array_66_t)ivar_4);
           ivar_18->count++;
           ivar_45 = (bool_t)ivar_59->ftbl->mptr(ivar_59, ivar_18, ivar_7);
           ivar_59->ftbl->rptr(ivar_59);
};
           if (ivar_45){   
           bool_t ivar_72;
           uint8_t ivar_75;
           ivar_75 = (uint8_t)0;
           ivar_72 = (ivar_3 > ivar_75);
           if (ivar_72){    
            sigmatopdown_funtype_59_t ivar_80;
            mpz_ptr_t ivar_96;
            uint8_t ivar_87;
            ivar_87 = (uint8_t)1;
            mpz_mk_set_ui(ivar_96, (uint64_t)ivar_3);
            mpz_sub_ui(ivar_96, ivar_96, (uint64_t)ivar_87);
            uint64_t ivar_92;
            //copying to uint64 from mpz;
            ivar_92 = (uint64_t)mpz_get_ui(ivar_96);
            mpz_clear(ivar_96);
            ivar_2->count++;
            ivar_4->count++;
            ivar_80 = (sigmatopdown_funtype_59_t)sigmatopdown__good_stackp((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (uint64_t)ivar_92, (sigmatopdown_array_66_t)ivar_4);
            result = (bool_t)ivar_80->ftbl->fptr(ivar_80, ivar_18);
            ivar_80->ftbl->rptr(ivar_80);
} else {
           
            release_sigmatopdown__ent_adt(ivar_18);
            result = (bool_t) false;
};
} else {
           
           release_sigmatopdown__ent_adt(ivar_18);
           result = (bool_t) false;
};
} else {
             
           release_sigmatopdown__ent_adt(ivar_18);
           release_sigmatopdown__ent_adt(ivar_7);
           result = (bool_t) false;
};
};

        return result;
}

sigmatopdown_closure_81_t new_sigmatopdown_closure_81(void){
        static struct sigmatopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&f_sigmatopdown_closure_81, .mptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&m_sigmatopdown_closure_81, .rptr =  (void (*)(sigmatopdown_funtype_59_t))&release_sigmatopdown_closure_81, .cptr = (sigmatopdown_funtype_59_t (*)(sigmatopdown_funtype_59_t))&copy_sigmatopdown_closure_81};
        sigmatopdown_closure_81_t tmp = (sigmatopdown_closure_81_t) safe_malloc(sizeof(struct sigmatopdown_closure_81_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_81(sigmatopdown_funtype_59_t closure){
        sigmatopdown_closure_81_t x = (sigmatopdown_closure_81_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_array_66(x->fvar_1);
         release_sigmatopdown__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_81_t copy_sigmatopdown_closure_81(sigmatopdown_closure_81_t x){
        sigmatopdown_closure_81_t y = new_sigmatopdown_closure_81();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = (uint64_t)x->fvar_4;
        if (x->htbl != NULL){
            sigmatopdown_funtype_59_htbl_t new_htbl = (sigmatopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_59_hashentry_t * new_data = (sigmatopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatopdown_closure_82(struct sigmatopdown_closure_82_s * closure, sigmatopdown_record_68_t bvar){
        sigmatopdown__ent_adt_t bvar_1;
        bvar_1 = (sigmatopdown__ent_adt_t)bvar->project_1;
        bvar->project_1->count++;
        sigmatopdown__ent_adt_t bvar_2;
        bvar_2 = (sigmatopdown__ent_adt_t)bvar->project_2;
        bvar->project_2->count++;
        release_sigmatopdown_record_68(bvar);
        bool_t result = h_sigmatopdown_closure_82(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        release_sigmatopdown__ent_adt(bvar_1);
        release_sigmatopdown__ent_adt(bvar_2);
        return result;}

bool_t m_sigmatopdown_closure_82(struct sigmatopdown_closure_82_s * closure, sigmatopdown__ent_adt_t bvar_1, sigmatopdown__ent_adt_t bvar_2){
        return h_sigmatopdown_closure_82(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern bool_t h_sigmatopdown_closure_82(sigmatopdown__ent_adt_t ivar_7, sigmatopdown__ent_adt_t ivar_8, sigmatopdown_array_66_t ivar_4, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, uint64_t ivar_3){
        bool_t result;
        bool_t ivar_9;
        uint8_t ivar_10;
        ivar_8->count++;
        ivar_10 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_8);
        uint8_t ivar_11;
        ivar_11 = (uint8_t)sigmatopdown__num_non_terminals();
        ivar_9 = (ivar_10 >= ivar_11);
        if (ivar_9){ 
             release_sigmatopdown__ent_adt(ivar_7);
             release_sigmatopdown__ent_adt(ivar_8);
             result = (bool_t) false;
} else {
        
             bool_t ivar_16;
             ivar_7->count++;
             ivar_8->count++;
             ivar_16 = (bool_t) equal_sigmatopdown__ent_adt(ivar_7, ivar_8);
             if (ivar_16){  
           release_sigmatopdown__ent_adt(ivar_7);
           release_sigmatopdown__ent_adt(ivar_8);
           result = (bool_t) true;
} else {
             
           sigmatopdown_funtype_69_t ivar_40;
           mpz_ptr_t ivar_56;
           uint8_t ivar_47;
           ivar_47 = (uint8_t)1;
           mpz_mk_set_ui(ivar_56, (uint64_t)ivar_3);
           mpz_sub_ui(ivar_56, ivar_56, (uint64_t)ivar_47);
           uint64_t ivar_52;
           //copying to uint64 from mpz;
           ivar_52 = (uint64_t)mpz_get_ui(ivar_56);
           mpz_clear(ivar_56);
           ivar_2->count++;
           ivar_4->count++;
           ivar_40 = (sigmatopdown_funtype_69_t)sigmatopdown__mem_stackp((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (uint64_t)ivar_52, (sigmatopdown_array_66_t)ivar_4);
           sigmatopdown__ent_adt_t ivar_58;
           sigmatopdown_array_65_t ivar_28;
           uint32_t ivar_36;
           ivar_8->count++;
           ivar_36 = (uint32_t)sigmatopdown__ent_adt_pos((sigmatopdown__ent_adt_t)ivar_8);
           ivar_28 = (sigmatopdown_array_65_t)ivar_4->elems[ivar_36];
           ivar_28->count++;
           uint8_t ivar_37;
           ivar_37 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_8);
           ivar_58 = (sigmatopdown__ent_adt_t)ivar_28->elems[ivar_37];
           ivar_58->count++;
           release_sigmatopdown_array_65(ivar_28);
           result = (bool_t)ivar_40->ftbl->mptr(ivar_40, ivar_7, ivar_58);
           ivar_40->ftbl->rptr(ivar_40);
};
};

        return result;
}

sigmatopdown_closure_82_t new_sigmatopdown_closure_82(void){
        static struct sigmatopdown_funtype_69_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_69_t, sigmatopdown_record_68_t))&f_sigmatopdown_closure_82, .mptr = (bool_t (*)(sigmatopdown_funtype_69_t, sigmatopdown__ent_adt_t, sigmatopdown__ent_adt_t))&m_sigmatopdown_closure_82, .rptr =  (void (*)(sigmatopdown_funtype_69_t))&release_sigmatopdown_closure_82, .cptr = (sigmatopdown_funtype_69_t (*)(sigmatopdown_funtype_69_t))&copy_sigmatopdown_closure_82};
        sigmatopdown_closure_82_t tmp = (sigmatopdown_closure_82_t) safe_malloc(sizeof(struct sigmatopdown_closure_82_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_82(sigmatopdown_funtype_69_t closure){
        sigmatopdown_closure_82_t x = (sigmatopdown_closure_82_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_array_66(x->fvar_1);
         release_sigmatopdown__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_82_t copy_sigmatopdown_closure_82(sigmatopdown_closure_82_t x){
        sigmatopdown_closure_82_t y = new_sigmatopdown_closure_82();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = (uint64_t)x->fvar_4;
        if (x->htbl != NULL){
            sigmatopdown_funtype_69_htbl_t new_htbl = (sigmatopdown_funtype_69_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_69_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_69_hashentry_t * new_data = (sigmatopdown_funtype_69_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_69_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_69_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatopdown_closure_83(struct sigmatopdown_closure_83_s * closure, sigmatopdown__ent_adt_t bvar){
        bool_t result = h_sigmatopdown_closure_83(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

bool_t m_sigmatopdown_closure_83(struct sigmatopdown_closure_83_s * closure, sigmatopdown__ent_adt_t bvar){
        return h_sigmatopdown_closure_83(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern bool_t h_sigmatopdown_closure_83(sigmatopdown__ent_adt_t ivar_7, sigmatopdown_array_66_t ivar_4, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, uint64_t ivar_3){
        bool_t result;
        bool_t ivar_8;
        uint8_t ivar_9;
        ivar_7->count++;
        ivar_9 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_7);
        uint8_t ivar_10;
        ivar_10 = (uint8_t)sigmatopdown__num_non_terminals();
        ivar_8 = (ivar_9 >= ivar_10);
        if (ivar_8){ 
             release_sigmatopdown__ent_adt(ivar_7);
             result = (bool_t) true;
} else {
        
             /* rest */ sigmatopdown__ent_adt_t ivar_15;
             sigmatopdown_array_65_t ivar_21;
             uint32_t ivar_29;
             ivar_7->count++;
             ivar_29 = (uint32_t)sigmatopdown__ent_adt_pos((sigmatopdown__ent_adt_t)ivar_7);
             ivar_21 = (sigmatopdown_array_65_t)ivar_4->elems[ivar_29];
             ivar_21->count++;
             uint8_t ivar_30;
             ivar_7->count++;
             ivar_30 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_7);
             ivar_15 = (sigmatopdown__ent_adt_t)ivar_21->elems[ivar_30];
             ivar_15->count++;
             release_sigmatopdown_array_65(ivar_21);
             bool_t ivar_31;
             bool_t ivar_33;
             sigmatopdown_funtype_69_t ivar_38;
             mpz_ptr_t ivar_54;
             uint8_t ivar_45;
             ivar_45 = (uint8_t)1;
             mpz_mk_set_ui(ivar_54, (uint64_t)ivar_3);
             mpz_sub_ui(ivar_54, ivar_54, (uint64_t)ivar_45);
             uint64_t ivar_50;
             //copying to uint64 from mpz;
             ivar_50 = (uint64_t)mpz_get_ui(ivar_54);
             mpz_clear(ivar_54);
             ivar_2->count++;
             ivar_4->count++;
             ivar_38 = (sigmatopdown_funtype_69_t)sigmatopdown__mem_stackp((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (uint64_t)ivar_50, (sigmatopdown_array_66_t)ivar_4);
             ivar_7->count++;
             ivar_33 = (bool_t)ivar_38->ftbl->mptr(ivar_38, ivar_7, ivar_15);
             ivar_38->ftbl->rptr(ivar_38);
             ivar_31 = !ivar_33;
             if (ivar_31){  
           sigmatopdown_funtype_59_t ivar_76;
           mpz_ptr_t ivar_92;
           uint8_t ivar_83;
           ivar_83 = (uint8_t)1;
           mpz_mk_set_ui(ivar_92, (uint64_t)ivar_3);
           mpz_sub_ui(ivar_92, ivar_92, (uint64_t)ivar_83);
           uint64_t ivar_88;
           //copying to uint64 from mpz;
           ivar_88 = (uint64_t)mpz_get_ui(ivar_92);
           mpz_clear(ivar_92);
           ivar_2->count++;
           ivar_4->count++;
           ivar_76 = (sigmatopdown_funtype_59_t)sigmatopdown__fine_stackp((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (uint64_t)ivar_88, (sigmatopdown_array_66_t)ivar_4);
           sigmatopdown__ent_adt_t ivar_93;
           sigmatopdown_array_65_t ivar_64;
           uint32_t ivar_72;
           ivar_7->count++;
           ivar_72 = (uint32_t)sigmatopdown__ent_adt_pos((sigmatopdown__ent_adt_t)ivar_7);
           ivar_64 = (sigmatopdown_array_65_t)ivar_4->elems[ivar_72];
           ivar_64->count++;
           uint8_t ivar_73;
           ivar_73 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_7);
           ivar_93 = (sigmatopdown__ent_adt_t)ivar_64->elems[ivar_73];
           ivar_93->count++;
           release_sigmatopdown_array_65(ivar_64);
           result = (bool_t)ivar_76->ftbl->fptr(ivar_76, ivar_93);
           ivar_76->ftbl->rptr(ivar_76);
} else {
             
           release_sigmatopdown__ent_adt(ivar_7);
           result = (bool_t) false;
};
};

        return result;
}

sigmatopdown_closure_83_t new_sigmatopdown_closure_83(void){
        static struct sigmatopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&f_sigmatopdown_closure_83, .mptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&m_sigmatopdown_closure_83, .rptr =  (void (*)(sigmatopdown_funtype_59_t))&release_sigmatopdown_closure_83, .cptr = (sigmatopdown_funtype_59_t (*)(sigmatopdown_funtype_59_t))&copy_sigmatopdown_closure_83};
        sigmatopdown_closure_83_t tmp = (sigmatopdown_closure_83_t) safe_malloc(sizeof(struct sigmatopdown_closure_83_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_83(sigmatopdown_funtype_59_t closure){
        sigmatopdown_closure_83_t x = (sigmatopdown_closure_83_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_array_66(x->fvar_1);
         release_sigmatopdown__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_83_t copy_sigmatopdown_closure_83(sigmatopdown_closure_83_t x){
        sigmatopdown_closure_83_t y = new_sigmatopdown_closure_83();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = (uint64_t)x->fvar_4;
        if (x->htbl != NULL){
            sigmatopdown_funtype_59_htbl_t new_htbl = (sigmatopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_59_hashentry_t * new_data = (sigmatopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatopdown_record_84_t new_sigmatopdown_record_84(void){
        sigmatopdown_record_84_t tmp = (sigmatopdown_record_84_t) safe_malloc(sizeof(struct sigmatopdown_record_84_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown_record_84(sigmatopdown_record_84_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_array_66(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown_record_84_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_record_84((sigmatopdown_record_84_t)x);
}

sigmatopdown_record_84_t copy_sigmatopdown_record_84(sigmatopdown_record_84_t x){
        sigmatopdown_record_84_t y = new_sigmatopdown_record_84();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->project_4 = (uint64_t)x->project_4;
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown_record_84(sigmatopdown_record_84_t x, sigmatopdown_record_84_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdown_array_66(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && x->project_4 == y->project_4;
        return tmp;}

char * json_sigmatopdown_record_84(sigmatopdown_record_84_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdown_array_66(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_uint64(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown_record_84_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_84_t T){
        return equal_sigmatopdown_record_84((sigmatopdown_record_84_t)x, (sigmatopdown_record_84_t)y);
}

char * json_sigmatopdown_record_84_ptr(pointer_t x, actual_sigmatopdown_record_84_t T){
        return json_sigmatopdown_record_84((sigmatopdown_record_84_t)x);
}

actual_sigmatopdown_record_84_t actual_sigmatopdown_record_84(){
        actual_sigmatopdown_record_84_t new = (actual_sigmatopdown_record_84_t)safe_malloc(sizeof(struct actual_sigmatopdown_record_84_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_record_84_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_record_84_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_record_84_ptr);
 

 
        return new;
 };

sigmatopdown_record_84_t update_sigmatopdown_record_84_project_1(sigmatopdown_record_84_t x, sigmatopdown_array_66_t v){
        sigmatopdown_record_84_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatopdown_array_66(x->project_1);};}
        else {y = copy_sigmatopdown_record_84(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatopdown_array_66_t)v;
        return y;}

sigmatopdown_record_84_t update_sigmatopdown_record_84_project_2(sigmatopdown_record_84_t x, uint32_t v){
        sigmatopdown_record_84_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_84(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

sigmatopdown_record_84_t update_sigmatopdown_record_84_project_3(sigmatopdown_record_84_t x, uint8_t v){
        sigmatopdown_record_84_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_84(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}

sigmatopdown_record_84_t update_sigmatopdown_record_84_project_4(sigmatopdown_record_84_t x, uint64_t v){
        sigmatopdown_record_84_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_84(x); x->count--;};
        y->project_4 = (uint64_t)v;
        return y;}



void release_sigmatopdown_funtype_85(sigmatopdown_funtype_85_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_85_t copy_sigmatopdown_funtype_85(sigmatopdown_funtype_85_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_85(sigmatopdown_funtype_85_t x, sigmatopdown_funtype_85_t y){
        return false;}

char* json_sigmatopdown_funtype_85(sigmatopdown_funtype_85_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_85\""); return result;}


sigmatopdown_array_86_t new_sigmatopdown_array_86(uint32_t size){
        sigmatopdown_array_86_t tmp = (sigmatopdown_array_86_t) safe_malloc(sizeof(struct sigmatopdown_array_86_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_sigmatopdown_array_86(sigmatopdown_array_86_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_sigmatopdown_array_86_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_array_86((sigmatopdown_array_86_t)x);
}

sigmatopdown_array_86_t copy_sigmatopdown_array_86(sigmatopdown_array_86_t x){
        sigmatopdown_array_86_t tmp = new_sigmatopdown_array_86(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_sigmatopdown_array_86(sigmatopdown_array_86_t x, sigmatopdown_array_86_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_sigmatopdown_array_86(sigmatopdown_array_86_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint8(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatopdown_array_86_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatopdown_array_86((sigmatopdown_array_86_t)x, (sigmatopdown_array_86_t)y);
}

char * json_sigmatopdown_array_86_ptr(pointer_t x, type_actual_t T){
        return json_sigmatopdown_array_86((sigmatopdown_array_86_t)x);
}

actual_sigmatopdown_array_86_t actual_sigmatopdown_array_86(){
        actual_sigmatopdown_array_86_t new = (actual_sigmatopdown_array_86_t)safe_malloc(sizeof(struct actual_sigmatopdown_array_86_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_array_86_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_array_86_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_array_86_ptr);
 

 
        return new;
 };

sigmatopdown_array_86_t update_sigmatopdown_array_86(sigmatopdown_array_86_t x, uint32_t i, uint8_t v){
        sigmatopdown_array_86_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_sigmatopdown_array_86(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

sigmatopdown_array_86_t upgrade_sigmatopdown_array_86(sigmatopdown_array_86_t x, uint32_t i, uint8_t v){
        sigmatopdown_array_86_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatopdown_array_86_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatopdown_array_86(x);}
           else {y = copy_sigmatopdown_array_86(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




bool_t f_sigmatopdown_closure_87(struct sigmatopdown_closure_87_s * closure, sigmatopdown_record_84_t bvar){
        sigmatopdown_array_66_t bvar_1;
        bvar_1 = (sigmatopdown_array_66_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        uint64_t bvar_4;
        bvar_4 = (uint64_t)bvar->project_4;
        release_sigmatopdown_record_84(bvar);
        bool_t result = h_sigmatopdown_closure_87(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_sigmatopdown_array_66(bvar_1);
        return result;}

bool_t m_sigmatopdown_closure_87(struct sigmatopdown_closure_87_s * closure, sigmatopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4){
        return h_sigmatopdown_closure_87(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_sigmatopdown_closure_87(sigmatopdown_array_66_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, uint64_t ivar_10, sigmatopdown_array_86_t ivar_3, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2){
        bool_t result;
        sigmatopdown__peg_adt_t ivar_11;
        ivar_11 = (sigmatopdown__peg_adt_t)ivar_2->elems[ivar_9];
        ivar_11->count++;
        bool_t ivar_45;
        ivar_11->count++;
        ivar_45 = (bool_t)r_sigmatopdown__anyp((sigmatopdown__peg_adt_t)ivar_11);
        if (ivar_45){ 
             release_sigmatopdown_array_66(ivar_6);
             sigmatopdown_funtype_29_t ivar_16;
             ivar_16 = (sigmatopdown_funtype_29_t)sigmatopdown__peg_adt_p((sigmatopdown__peg_adt_t)ivar_11);
             bool_t ivar_22;
             bool_t ivar_24;
             ivar_24 = (ivar_8 == ivar_1);
             if (ivar_24){  
           release_sigmatopdown_funtype_29(ivar_16);
           ivar_22 = (bool_t) true;
} else {
             
           bool_t ivar_29;
           uint8_t ivar_38;
           ivar_38 = (uint8_t)ivar_3->elems[ivar_8];
           ivar_29 = (bool_t)ivar_16->ftbl->fptr(ivar_16, ivar_38);
           ivar_16->ftbl->rptr(ivar_16);
           ivar_22 = !ivar_29;
};
             if (ivar_22){  
           uint8_t ivar_42;
           ivar_42 = (uint8_t)0;
           result = (ivar_10 == ivar_42);
} else {
             
           result = (bool_t) false;
};
} else {
        
             bool_t ivar_72;
             ivar_11->count++;
             ivar_72 = (bool_t)r_sigmatopdown__terminalp((sigmatopdown__peg_adt_t)ivar_11);
             if (ivar_72){  
           release_sigmatopdown_array_66(ivar_6);
           uint8_t ivar_49;
           ivar_49 = (uint8_t)sigmatopdown__peg_adt_a((sigmatopdown__peg_adt_t)ivar_11);
           bool_t ivar_53;
           bool_t ivar_55;
           ivar_55 = (ivar_8 == ivar_1);
           if (ivar_55){   
           ivar_53 = (bool_t) true;
} else {
           
           uint8_t ivar_61;
           ivar_61 = (uint8_t)ivar_3->elems[ivar_8];
           ivar_53 = (ivar_49 != ivar_61);
};
           if (ivar_53){   
           uint8_t ivar_69;
           ivar_69 = (uint8_t)0;
           result = (ivar_10 == ivar_69);
} else {
           
           result = (bool_t) false;
};
} else {
             
           bool_t ivar_219;
           ivar_11->count++;
           ivar_219 = (bool_t)r_sigmatopdown__concatp((sigmatopdown__peg_adt_t)ivar_11);
           if (ivar_219){   
           uint8_t ivar_76;
           ivar_11->count++;
           ivar_76 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_11);
           uint8_t ivar_77;
           ivar_77 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_11);
           bool_t ivar_84;
           bool_t ivar_86;
           sigmatopdown__ent_adt_t ivar_99;
           sigmatopdown_array_65_t ivar_91;
           ivar_91 = (sigmatopdown_array_65_t)ivar_6->elems[ivar_8];
           ivar_91->count++;
           ivar_99 = (sigmatopdown__ent_adt_t)ivar_91->elems[ivar_76];
           ivar_99->count++;
           release_sigmatopdown_array_65(ivar_91);
           ivar_86 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_99);
           if (ivar_86){    
            mpz_ptr_t ivar_101;
            uint8_t ivar_102;
            ivar_102 = (uint8_t)1;
            uint64_t ivar_103;
            sigmatopdown__ent_adt_t ivar_115;
            sigmatopdown_array_65_t ivar_107;
            ivar_107 = (sigmatopdown_array_65_t)ivar_6->elems[ivar_8];
            ivar_107->count++;
            ivar_115 = (sigmatopdown__ent_adt_t)ivar_107->elems[ivar_76];
            ivar_115->count++;
            release_sigmatopdown_array_65(ivar_107);
            ivar_103 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_115);
            mpz_mk_set_ui(ivar_101, (uint64_t)ivar_102);
            mpz_add_ui(ivar_101, ivar_101, (uint64_t)ivar_103);
            int64_t tmp29231 = mpz_cmp_ui(ivar_101, ivar_10);
            ivar_84 = (tmp29231 == 0);
} else {
           
            ivar_84 = (bool_t) false;
};
           if (ivar_84){    
            release_sigmatopdown_array_66(ivar_6);
            result = (bool_t) true;
} else {
           
            bool_t ivar_119;
            sigmatopdown__ent_adt_t ivar_132;
            sigmatopdown_array_65_t ivar_124;
            ivar_124 = (sigmatopdown_array_65_t)ivar_6->elems[ivar_8];
            ivar_124->count++;
            ivar_132 = (sigmatopdown__ent_adt_t)ivar_124->elems[ivar_76];
            ivar_132->count++;
            release_sigmatopdown_array_65(ivar_124);
            ivar_119 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_132);
            if (ivar_119){     
             bool_t ivar_133;
             sigmatopdown__ent_adt_t ivar_161;
             sigmatopdown_array_65_t ivar_138;
             uint32_t ivar_158;
             uint32_t ivar_141;
             sigmatopdown__ent_adt_t ivar_153;
             sigmatopdown_array_65_t ivar_145;
             ivar_145 = (sigmatopdown_array_65_t)ivar_6->elems[ivar_8];
             ivar_145->count++;
             ivar_153 = (sigmatopdown__ent_adt_t)ivar_145->elems[ivar_76];
             ivar_153->count++;
             release_sigmatopdown_array_65(ivar_145);
             ivar_141 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_153);
             ivar_158 = (uint32_t)(ivar_8 + ivar_141);
             ivar_138 = (sigmatopdown_array_65_t)ivar_6->elems[ivar_158];
             ivar_138->count++;
             ivar_161 = (sigmatopdown__ent_adt_t)ivar_138->elems[ivar_77];
             ivar_161->count++;
             release_sigmatopdown_array_65(ivar_138);
             ivar_133 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_161);
             if (ivar_133){      
              mpz_ptr_t ivar_163;
              uint8_t ivar_164;
              ivar_164 = (uint8_t)1;
              mpq_ptr_t ivar_165;
              uint64_t ivar_213;
              sigmatopdown__ent_adt_t ivar_179;
              sigmatopdown_array_65_t ivar_171;
              ivar_171 = (sigmatopdown_array_65_t)ivar_6->elems[ivar_8];
              ivar_171->count++;
              ivar_179 = (sigmatopdown__ent_adt_t)ivar_171->elems[ivar_76];
              ivar_179->count++;
              release_sigmatopdown_array_65(ivar_171);
              ivar_213 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_179);
              mpq_ptr_t ivar_208;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_208, ivar_213);
              uint64_t ivar_212;
              sigmatopdown__ent_adt_t ivar_206;
              sigmatopdown_array_65_t ivar_183;
              uint32_t ivar_203;
              uint32_t ivar_186;
              sigmatopdown__ent_adt_t ivar_198;
              sigmatopdown_array_65_t ivar_190;
              ivar_190 = (sigmatopdown_array_65_t)ivar_6->elems[ivar_8];
              ivar_190->count++;
              ivar_198 = (sigmatopdown__ent_adt_t)ivar_190->elems[ivar_76];
              ivar_198->count++;
              release_sigmatopdown_array_65(ivar_190);
              ivar_186 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_198);
              ivar_203 = (uint32_t)(ivar_8 + ivar_186);
              ivar_183 = (sigmatopdown_array_65_t)ivar_6->elems[ivar_203];
              ivar_183->count++;
              release_sigmatopdown_array_66(ivar_6);
              ivar_206 = (sigmatopdown__ent_adt_t)ivar_183->elems[ivar_77];
              ivar_206->count++;
              release_sigmatopdown_array_65(ivar_183);
              ivar_212 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_206);
              mpq_ptr_t ivar_209;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_209, ivar_212);
              ivar_165 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_208, (mpq_ptr_t)ivar_209);
              mpz_mk_set_q(ivar_163, ivar_165);
              mpz_add_ui(ivar_163, ivar_163, ivar_164);
              int64_t tmp29277 = mpz_cmp_ui(ivar_163, ivar_10);
              result = (tmp29277 == 0);
} else {
             
              release_sigmatopdown_array_66(ivar_6);
              result = (bool_t) false;
};
} else {
            
             release_sigmatopdown_array_66(ivar_6);
             result = (bool_t) false;
};
};
} else {
           
           bool_t ivar_300;
           ivar_11->count++;
           ivar_300 = (bool_t)r_sigmatopdown__orp((sigmatopdown__peg_adt_t)ivar_11);
           if (ivar_300){    
            uint8_t ivar_223;
            ivar_11->count++;
            ivar_223 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_11);
            uint8_t ivar_224;
            ivar_224 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_11);
            bool_t ivar_231;
            sigmatopdown__ent_adt_t ivar_244;
            sigmatopdown_array_65_t ivar_236;
            ivar_236 = (sigmatopdown_array_65_t)ivar_6->elems[ivar_8];
            ivar_236->count++;
            ivar_244 = (sigmatopdown__ent_adt_t)ivar_236->elems[ivar_223];
            ivar_244->count++;
            release_sigmatopdown_array_65(ivar_236);
            ivar_231 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_244);
            if (ivar_231){     
             bool_t ivar_245;
             sigmatopdown__ent_adt_t ivar_258;
             sigmatopdown_array_65_t ivar_250;
             ivar_250 = (sigmatopdown_array_65_t)ivar_6->elems[ivar_8];
             ivar_250->count++;
             ivar_258 = (sigmatopdown__ent_adt_t)ivar_250->elems[ivar_224];
             ivar_258->count++;
             release_sigmatopdown_array_65(ivar_250);
             ivar_245 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_258);
             if (ivar_245){      
              mpz_ptr_t ivar_260;
              uint8_t ivar_261;
              ivar_261 = (uint8_t)1;
              mpq_ptr_t ivar_262;
              uint64_t ivar_295;
              sigmatopdown__ent_adt_t ivar_276;
              sigmatopdown_array_65_t ivar_268;
              ivar_268 = (sigmatopdown_array_65_t)ivar_6->elems[ivar_8];
              ivar_268->count++;
              ivar_276 = (sigmatopdown__ent_adt_t)ivar_268->elems[ivar_223];
              ivar_276->count++;
              release_sigmatopdown_array_65(ivar_268);
              ivar_295 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_276);
              mpq_ptr_t ivar_290;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_290, ivar_295);
              uint64_t ivar_294;
              sigmatopdown__ent_adt_t ivar_288;
              sigmatopdown_array_65_t ivar_280;
              ivar_280 = (sigmatopdown_array_65_t)ivar_6->elems[ivar_8];
              ivar_280->count++;
              release_sigmatopdown_array_66(ivar_6);
              ivar_288 = (sigmatopdown__ent_adt_t)ivar_280->elems[ivar_224];
              ivar_288->count++;
              release_sigmatopdown_array_65(ivar_280);
              ivar_294 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_288);
              mpq_ptr_t ivar_291;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_291, ivar_294);
              ivar_262 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_290, (mpq_ptr_t)ivar_291);
              mpz_mk_set_q(ivar_260, ivar_262);
              mpz_add_ui(ivar_260, ivar_260, ivar_261);
              int64_t tmp29311 = mpz_cmp_ui(ivar_260, ivar_10);
              result = (tmp29311 == 0);
} else {
             
              release_sigmatopdown_array_66(ivar_6);
              result = (bool_t) false;
};
} else {
            
             release_sigmatopdown_array_66(ivar_6);
             result = (bool_t) false;
};
} else {
           
            bool_t ivar_341;
            ivar_11->count++;
            ivar_341 = (bool_t)r_sigmatopdown__andp((sigmatopdown__peg_adt_t)ivar_11);
            if (ivar_341){     
             uint8_t ivar_304;
             ivar_304 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_11);
             bool_t ivar_308;
             sigmatopdown__ent_adt_t ivar_321;
             sigmatopdown_array_65_t ivar_313;
             ivar_313 = (sigmatopdown_array_65_t)ivar_6->elems[ivar_8];
             ivar_313->count++;
             ivar_321 = (sigmatopdown__ent_adt_t)ivar_313->elems[ivar_304];
             ivar_321->count++;
             release_sigmatopdown_array_65(ivar_313);
             ivar_308 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_321);
             if (ivar_308){      
              mpz_ptr_t ivar_323;
              uint8_t ivar_324;
              ivar_324 = (uint8_t)1;
              uint64_t ivar_325;
              sigmatopdown__ent_adt_t ivar_337;
              sigmatopdown_array_65_t ivar_329;
              ivar_329 = (sigmatopdown_array_65_t)ivar_6->elems[ivar_8];
              ivar_329->count++;
              release_sigmatopdown_array_66(ivar_6);
              ivar_337 = (sigmatopdown__ent_adt_t)ivar_329->elems[ivar_304];
              ivar_337->count++;
              release_sigmatopdown_array_65(ivar_329);
              ivar_325 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_337);
              mpz_mk_set_ui(ivar_323, (uint64_t)ivar_324);
              mpz_add_ui(ivar_323, ivar_323, (uint64_t)ivar_325);
              int64_t tmp29331 = mpz_cmp_ui(ivar_323, ivar_10);
              result = (tmp29331 == 0);
} else {
             
              release_sigmatopdown_array_66(ivar_6);
              result = (bool_t) false;
};
} else {
            
             bool_t ivar_382;
             ivar_11->count++;
             ivar_382 = (bool_t)r_sigmatopdown__notp((sigmatopdown__peg_adt_t)ivar_11);
             if (ivar_382){      
              uint8_t ivar_345;
              ivar_345 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_11);
              bool_t ivar_349;
              sigmatopdown__ent_adt_t ivar_362;
              sigmatopdown_array_65_t ivar_354;
              ivar_354 = (sigmatopdown_array_65_t)ivar_6->elems[ivar_8];
              ivar_354->count++;
              ivar_362 = (sigmatopdown__ent_adt_t)ivar_354->elems[ivar_345];
              ivar_362->count++;
              release_sigmatopdown_array_65(ivar_354);
              ivar_349 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_362);
              if (ivar_349){       
               mpz_ptr_t ivar_364;
               uint8_t ivar_365;
               ivar_365 = (uint8_t)1;
               uint64_t ivar_366;
               sigmatopdown__ent_adt_t ivar_378;
               sigmatopdown_array_65_t ivar_370;
               ivar_370 = (sigmatopdown_array_65_t)ivar_6->elems[ivar_8];
               ivar_370->count++;
               release_sigmatopdown_array_66(ivar_6);
               ivar_378 = (sigmatopdown__ent_adt_t)ivar_370->elems[ivar_345];
               ivar_378->count++;
               release_sigmatopdown_array_65(ivar_370);
               ivar_366 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_378);
               mpz_mk_set_ui(ivar_364, (uint64_t)ivar_365);
               mpz_add_ui(ivar_364, ivar_364, (uint64_t)ivar_366);
               int64_t tmp29349 = mpz_cmp_ui(ivar_364, ivar_10);
               result = (tmp29349 == 0);
} else {
              
               release_sigmatopdown_array_66(ivar_6);
               result = (bool_t) false;
};
} else {
             
              release_sigmatopdown_array_66(ivar_6);
              bool_t ivar_389;
              ivar_389 = (bool_t)r_sigmatopdown__failurep((sigmatopdown__peg_adt_t)ivar_11);
              if (ivar_389){       
               uint8_t ivar_387;
               ivar_387 = (uint8_t)0;
               result = (ivar_10 == ivar_387);
} else {
              
               result = (bool_t) false;
};
};
};
};
};
};
};

        return result;
}

sigmatopdown_closure_87_t new_sigmatopdown_closure_87(void){
        static struct sigmatopdown_funtype_85_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_85_t, sigmatopdown_record_84_t))&f_sigmatopdown_closure_87, .mptr = (bool_t (*)(sigmatopdown_funtype_85_t, sigmatopdown_array_66_t, uint32_t, uint8_t, uint64_t))&m_sigmatopdown_closure_87, .rptr =  (void (*)(sigmatopdown_funtype_85_t))&release_sigmatopdown_closure_87, .cptr = (sigmatopdown_funtype_85_t (*)(sigmatopdown_funtype_85_t))&copy_sigmatopdown_closure_87};
        sigmatopdown_closure_87_t tmp = (sigmatopdown_closure_87_t) safe_malloc(sizeof(struct sigmatopdown_closure_87_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_87(sigmatopdown_funtype_85_t closure){
        sigmatopdown_closure_87_t x = (sigmatopdown_closure_87_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_array_86(x->fvar_1);
         release_sigmatopdown__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_87_t copy_sigmatopdown_closure_87(sigmatopdown_closure_87_t x){
        sigmatopdown_closure_87_t y = new_sigmatopdown_closure_87();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sigmatopdown_funtype_85_htbl_t new_htbl = (sigmatopdown_funtype_85_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_85_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_85_hashentry_t * new_data = (sigmatopdown_funtype_85_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_85_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_85_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatopdown_record_88_t new_sigmatopdown_record_88(void){
        sigmatopdown_record_88_t tmp = (sigmatopdown_record_88_t) safe_malloc(sizeof(struct sigmatopdown_record_88_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown_record_88(sigmatopdown_record_88_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_array_66(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown_record_88_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_record_88((sigmatopdown_record_88_t)x);
}

sigmatopdown_record_88_t copy_sigmatopdown_record_88(sigmatopdown_record_88_t x){
        sigmatopdown_record_88_t y = new_sigmatopdown_record_88();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown_record_88(sigmatopdown_record_88_t x, sigmatopdown_record_88_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdown_array_66(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        return tmp;}

char * json_sigmatopdown_record_88(sigmatopdown_record_88_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdown_array_66(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown_record_88_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_88_t T){
        return equal_sigmatopdown_record_88((sigmatopdown_record_88_t)x, (sigmatopdown_record_88_t)y);
}

char * json_sigmatopdown_record_88_ptr(pointer_t x, actual_sigmatopdown_record_88_t T){
        return json_sigmatopdown_record_88((sigmatopdown_record_88_t)x);
}

actual_sigmatopdown_record_88_t actual_sigmatopdown_record_88(){
        actual_sigmatopdown_record_88_t new = (actual_sigmatopdown_record_88_t)safe_malloc(sizeof(struct actual_sigmatopdown_record_88_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_record_88_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_record_88_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_record_88_ptr);
 

 
        return new;
 };

sigmatopdown_record_88_t update_sigmatopdown_record_88_project_1(sigmatopdown_record_88_t x, sigmatopdown_array_66_t v){
        sigmatopdown_record_88_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatopdown_array_66(x->project_1);};}
        else {y = copy_sigmatopdown_record_88(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatopdown_array_66_t)v;
        return y;}

sigmatopdown_record_88_t update_sigmatopdown_record_88_project_2(sigmatopdown_record_88_t x, uint32_t v){
        sigmatopdown_record_88_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_88(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

sigmatopdown_record_88_t update_sigmatopdown_record_88_project_3(sigmatopdown_record_88_t x, uint8_t v){
        sigmatopdown_record_88_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_88(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}



void release_sigmatopdown_funtype_89(sigmatopdown_funtype_89_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_89_t copy_sigmatopdown_funtype_89(sigmatopdown_funtype_89_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_89(sigmatopdown_funtype_89_t x, sigmatopdown_funtype_89_t y){
        return false;}

char* json_sigmatopdown_funtype_89(sigmatopdown_funtype_89_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_89\""); return result;}


bool_t f_sigmatopdown_closure_90(struct sigmatopdown_closure_90_s * closure, sigmatopdown_record_88_t bvar){
        sigmatopdown_array_66_t bvar_1;
        bvar_1 = (sigmatopdown_array_66_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        release_sigmatopdown_record_88(bvar);
        bool_t result = h_sigmatopdown_closure_90(bvar_1, bvar_2, bvar_3, closure->fvar_1, closure->fvar_2); 
        release_sigmatopdown_array_66(bvar_1);
        return result;}

bool_t m_sigmatopdown_closure_90(struct sigmatopdown_closure_90_s * closure, sigmatopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3){
        return h_sigmatopdown_closure_90(bvar_1, bvar_2, bvar_3, closure->fvar_1, closure->fvar_2);}

extern bool_t h_sigmatopdown_closure_90(sigmatopdown_array_66_t ivar_5, uint32_t ivar_7, uint8_t ivar_8, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2){
        bool_t result;
        sigmatopdown__peg_adt_t ivar_9;
        ivar_9 = (sigmatopdown__peg_adt_t)ivar_2->elems[ivar_8];
        ivar_9->count++;
        bool_t ivar_79;
        ivar_9->count++;
        ivar_79 = (bool_t)r_sigmatopdown__concatp((sigmatopdown__peg_adt_t)ivar_9);
        if (ivar_79){ 
             uint8_t ivar_14;
             ivar_9->count++;
             ivar_14 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_9);
             uint8_t ivar_15;
             ivar_15 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_9);
             bool_t ivar_22;
             sigmatopdown__ent_adt_t ivar_35;
             sigmatopdown_array_65_t ivar_27;
             ivar_27 = (sigmatopdown_array_65_t)ivar_5->elems[ivar_7];
             ivar_27->count++;
             ivar_35 = (sigmatopdown__ent_adt_t)ivar_27->elems[ivar_14];
             ivar_35->count++;
             release_sigmatopdown_array_65(ivar_27);
             ivar_22 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_35);
             if (ivar_22){  
           release_sigmatopdown_array_66(ivar_5);
           result = (bool_t) true;
} else {
             
           bool_t ivar_36;
           sigmatopdown__ent_adt_t ivar_49;
           sigmatopdown_array_65_t ivar_41;
           ivar_41 = (sigmatopdown_array_65_t)ivar_5->elems[ivar_7];
           ivar_41->count++;
           ivar_49 = (sigmatopdown__ent_adt_t)ivar_41->elems[ivar_14];
           ivar_49->count++;
           release_sigmatopdown_array_65(ivar_41);
           ivar_36 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_49);
           if (ivar_36){   
           sigmatopdown__ent_adt_t ivar_76;
           sigmatopdown_array_65_t ivar_53;
           uint32_t ivar_73;
           uint32_t ivar_56;
           sigmatopdown__ent_adt_t ivar_68;
           sigmatopdown_array_65_t ivar_60;
           ivar_60 = (sigmatopdown_array_65_t)ivar_5->elems[ivar_7];
           ivar_60->count++;
           ivar_68 = (sigmatopdown__ent_adt_t)ivar_60->elems[ivar_14];
           ivar_68->count++;
           release_sigmatopdown_array_65(ivar_60);
           ivar_56 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_68);
           ivar_73 = (uint32_t)(ivar_7 + ivar_56);
           ivar_53 = (sigmatopdown_array_65_t)ivar_5->elems[ivar_73];
           ivar_53->count++;
           release_sigmatopdown_array_66(ivar_5);
           ivar_76 = (sigmatopdown__ent_adt_t)ivar_53->elems[ivar_15];
           ivar_76->count++;
           release_sigmatopdown_array_65(ivar_53);
           result = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_76);
} else {
           
           release_sigmatopdown_array_66(ivar_5);
           result = (bool_t) false;
};
};
} else {
        
             bool_t ivar_133;
             ivar_9->count++;
             ivar_133 = (bool_t)r_sigmatopdown__orp((sigmatopdown__peg_adt_t)ivar_9);
             if (ivar_133){  
           uint8_t ivar_83;
           ivar_9->count++;
           ivar_83 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_9);
           uint8_t ivar_84;
           ivar_84 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_9);
           bool_t ivar_91;
           sigmatopdown__ent_adt_t ivar_104;
           sigmatopdown_array_65_t ivar_96;
           ivar_96 = (sigmatopdown_array_65_t)ivar_5->elems[ivar_7];
           ivar_96->count++;
           ivar_104 = (sigmatopdown__ent_adt_t)ivar_96->elems[ivar_83];
           ivar_104->count++;
           release_sigmatopdown_array_65(ivar_96);
           ivar_91 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_104);
           if (ivar_91){   
           release_sigmatopdown_array_66(ivar_5);
           result = (bool_t) true;
} else {
           
           bool_t ivar_105;
           sigmatopdown__ent_adt_t ivar_118;
           sigmatopdown_array_65_t ivar_110;
           ivar_110 = (sigmatopdown_array_65_t)ivar_5->elems[ivar_7];
           ivar_110->count++;
           ivar_118 = (sigmatopdown__ent_adt_t)ivar_110->elems[ivar_83];
           ivar_118->count++;
           release_sigmatopdown_array_65(ivar_110);
           ivar_105 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_118);
           if (ivar_105){    
            sigmatopdown__ent_adt_t ivar_130;
            sigmatopdown_array_65_t ivar_122;
            ivar_122 = (sigmatopdown_array_65_t)ivar_5->elems[ivar_7];
            ivar_122->count++;
            release_sigmatopdown_array_66(ivar_5);
            ivar_130 = (sigmatopdown__ent_adt_t)ivar_122->elems[ivar_84];
            ivar_130->count++;
            release_sigmatopdown_array_65(ivar_122);
            result = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_130);
} else {
           
            release_sigmatopdown_array_66(ivar_5);
            result = (bool_t) false;
};
};
} else {
             
           bool_t ivar_153;
           ivar_9->count++;
           ivar_153 = (bool_t)r_sigmatopdown__andp((sigmatopdown__peg_adt_t)ivar_9);
           if (ivar_153){   
           uint8_t ivar_137;
           ivar_137 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_9);
           sigmatopdown__ent_adt_t ivar_152;
           sigmatopdown_array_65_t ivar_144;
           ivar_144 = (sigmatopdown_array_65_t)ivar_5->elems[ivar_7];
           ivar_144->count++;
           release_sigmatopdown_array_66(ivar_5);
           ivar_152 = (sigmatopdown__ent_adt_t)ivar_144->elems[ivar_137];
           ivar_152->count++;
           release_sigmatopdown_array_65(ivar_144);
           result = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_152);
} else {
           
           bool_t ivar_173;
           ivar_9->count++;
           ivar_173 = (bool_t)r_sigmatopdown__notp((sigmatopdown__peg_adt_t)ivar_9);
           if (ivar_173){    
            uint8_t ivar_157;
            ivar_157 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_9);
            sigmatopdown__ent_adt_t ivar_172;
            sigmatopdown_array_65_t ivar_164;
            ivar_164 = (sigmatopdown_array_65_t)ivar_5->elems[ivar_7];
            ivar_164->count++;
            release_sigmatopdown_array_66(ivar_5);
            ivar_172 = (sigmatopdown__ent_adt_t)ivar_164->elems[ivar_157];
            ivar_172->count++;
            release_sigmatopdown_array_65(ivar_164);
            result = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_172);
} else {
           
            release_sigmatopdown_array_66(ivar_5);
            release_sigmatopdown__peg_adt(ivar_9);
            result = (bool_t) false;
};
};
};
};

        return result;
}

sigmatopdown_closure_90_t new_sigmatopdown_closure_90(void){
        static struct sigmatopdown_funtype_89_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_89_t, sigmatopdown_record_88_t))&f_sigmatopdown_closure_90, .mptr = (bool_t (*)(sigmatopdown_funtype_89_t, sigmatopdown_array_66_t, uint32_t, uint8_t))&m_sigmatopdown_closure_90, .rptr =  (void (*)(sigmatopdown_funtype_89_t))&release_sigmatopdown_closure_90, .cptr = (sigmatopdown_funtype_89_t (*)(sigmatopdown_funtype_89_t))&copy_sigmatopdown_closure_90};
        sigmatopdown_closure_90_t tmp = (sigmatopdown_closure_90_t) safe_malloc(sizeof(struct sigmatopdown_closure_90_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_90(sigmatopdown_funtype_89_t closure){
        sigmatopdown_closure_90_t x = (sigmatopdown_closure_90_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__lang_spec(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_90_t copy_sigmatopdown_closure_90(sigmatopdown_closure_90_t x){
        sigmatopdown_closure_90_t y = new_sigmatopdown_closure_90();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            sigmatopdown_funtype_89_htbl_t new_htbl = (sigmatopdown_funtype_89_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_89_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_89_hashentry_t * new_data = (sigmatopdown_funtype_89_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_89_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_89_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatopdown_record_91_t new_sigmatopdown_record_91(void){
        sigmatopdown_record_91_t tmp = (sigmatopdown_record_91_t) safe_malloc(sizeof(struct sigmatopdown_record_91_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown_record_91(sigmatopdown_record_91_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_array_66(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown_record_91_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_record_91((sigmatopdown_record_91_t)x);
}

sigmatopdown_record_91_t copy_sigmatopdown_record_91(sigmatopdown_record_91_t x){
        sigmatopdown_record_91_t y = new_sigmatopdown_record_91();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->project_4 = (uint64_t)x->project_4;
        mpz_set(y->project_5, x->project_5);
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown_record_91(sigmatopdown_record_91_t x, sigmatopdown_record_91_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdown_array_66(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && x->project_4 == y->project_4;tmp = tmp && (mpz_cmp(x->project_5, y->project_5) == 0);
        return tmp;}

char * json_sigmatopdown_record_91(sigmatopdown_record_91_t x){
        char * tmp[5]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdown_array_66(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_uint64(x->project_4));
        char * fld4 = safe_malloc(21);
         sprintf(fld4, "\"project_5\" : ");
        tmp[4] = safe_strcat(fld4, json_mpz(x->project_5));
         char * result = json_list_with_sep(tmp, 5,  '{', ',', '}');
         for (uint32_t i = 0; i < 5; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown_record_91_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_91_t T){
        return equal_sigmatopdown_record_91((sigmatopdown_record_91_t)x, (sigmatopdown_record_91_t)y);
}

char * json_sigmatopdown_record_91_ptr(pointer_t x, actual_sigmatopdown_record_91_t T){
        return json_sigmatopdown_record_91((sigmatopdown_record_91_t)x);
}

actual_sigmatopdown_record_91_t actual_sigmatopdown_record_91(){
        actual_sigmatopdown_record_91_t new = (actual_sigmatopdown_record_91_t)safe_malloc(sizeof(struct actual_sigmatopdown_record_91_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_record_91_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_record_91_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_record_91_ptr);
 

 
        return new;
 };

sigmatopdown_record_91_t update_sigmatopdown_record_91_project_1(sigmatopdown_record_91_t x, sigmatopdown_array_66_t v){
        sigmatopdown_record_91_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatopdown_array_66(x->project_1);};}
        else {y = copy_sigmatopdown_record_91(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatopdown_array_66_t)v;
        return y;}

sigmatopdown_record_91_t update_sigmatopdown_record_91_project_2(sigmatopdown_record_91_t x, uint32_t v){
        sigmatopdown_record_91_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_91(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

sigmatopdown_record_91_t update_sigmatopdown_record_91_project_3(sigmatopdown_record_91_t x, uint8_t v){
        sigmatopdown_record_91_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_91(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}

sigmatopdown_record_91_t update_sigmatopdown_record_91_project_4(sigmatopdown_record_91_t x, uint64_t v){
        sigmatopdown_record_91_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_91(x); x->count--;};
        y->project_4 = (uint64_t)v;
        return y;}

sigmatopdown_record_91_t update_sigmatopdown_record_91_project_5(sigmatopdown_record_91_t x, mpz_ptr_t v){
        sigmatopdown_record_91_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_91(x); x->count--;};
        mpz_set(y->project_5, v);
        return y;}



void release_sigmatopdown_funtype_92(sigmatopdown_funtype_92_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_92_t copy_sigmatopdown_funtype_92(sigmatopdown_funtype_92_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_92(sigmatopdown_funtype_92_t x, sigmatopdown_funtype_92_t y){
        return false;}

char* json_sigmatopdown_funtype_92(sigmatopdown_funtype_92_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_92\""); return result;}


bool_t f_sigmatopdown_closure_93(struct sigmatopdown_closure_93_s * closure, sigmatopdown_record_91_t bvar){
        sigmatopdown_array_66_t bvar_1;
        bvar_1 = (sigmatopdown_array_66_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        uint64_t bvar_4;
        bvar_4 = (uint64_t)bvar->project_4;
        mpz_t bvar_5;
        mpz_init(bvar_5);
        mpz_set(bvar_5, bvar->project_5);
        release_sigmatopdown_record_91(bvar);
        bool_t result = h_sigmatopdown_closure_93(bvar_1, bvar_2, bvar_3, bvar_4, bvar_5, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_sigmatopdown_array_66(bvar_1);
        release_mpz(bvar_5);
        return result;}

bool_t m_sigmatopdown_closure_93(struct sigmatopdown_closure_93_s * closure, sigmatopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4, mpz_ptr_t bvar_5){
        return h_sigmatopdown_closure_93(bvar_1, bvar_2, bvar_3, bvar_4, bvar_5, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_sigmatopdown_closure_93(sigmatopdown_array_66_t ivar_9, uint32_t ivar_11, uint8_t ivar_12, uint64_t ivar_13, mpz_ptr_t ivar_14, sigmatopdown_array_86_t ivar_3, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2){
        bool_t result;
        sigmatopdown__peg_adt_t ivar_18;
        ivar_18 = (sigmatopdown__peg_adt_t)ivar_2->elems[ivar_12];
        ivar_18->count++;
        bool_t ivar_32;
        ivar_18->count++;
        ivar_32 = (bool_t)r_sigmatopdown__epsilonp((sigmatopdown__peg_adt_t)ivar_18);
        if (ivar_32){ 
             release_sigmatopdown_array_66(ivar_9);
             release_sigmatopdown__peg_adt(ivar_18);
             bool_t ivar_23;
             uint8_t ivar_26;
             ivar_26 = (uint8_t)0;
             int64_t tmp29579 = mpz_cmp_ui(ivar_14, ivar_26);
             ivar_23 = (tmp29579 == 0);
             if (ivar_23){  
           uint8_t ivar_29;
           ivar_29 = (uint8_t)0;
           result = (ivar_13 == ivar_29);
} else {
             
           result = (bool_t) false;
};
} else {
        
             bool_t ivar_63;
             ivar_18->count++;
             ivar_63 = (bool_t)r_sigmatopdown__anyp((sigmatopdown__peg_adt_t)ivar_18);
             if (ivar_63){  
           release_sigmatopdown_array_66(ivar_9);
           sigmatopdown_funtype_29_t ivar_36;
           ivar_36 = (sigmatopdown_funtype_29_t)sigmatopdown__peg_adt_p((sigmatopdown__peg_adt_t)ivar_18);
           bool_t ivar_42;
           uint8_t ivar_45;
           ivar_45 = (uint8_t)1;
           int64_t tmp29584 = mpz_cmp_ui(ivar_14, ivar_45);
           ivar_42 = (tmp29584 == 0);
           if (ivar_42){   
           bool_t ivar_47;
           uint8_t ivar_57;
           ivar_57 = (uint8_t)ivar_3->elems[ivar_11];
           ivar_47 = (bool_t)ivar_36->ftbl->fptr(ivar_36, ivar_57);
           ivar_36->ftbl->rptr(ivar_36);
           if (ivar_47){    
            uint8_t ivar_59;
            ivar_59 = (uint8_t)0;
            result = (ivar_13 == ivar_59);
} else {
           
            result = (bool_t) false;
};
} else {
           
           release_sigmatopdown_funtype_29(ivar_36);
           result = (bool_t) false;
};
} else {
             
           bool_t ivar_90;
           ivar_18->count++;
           ivar_90 = (bool_t)r_sigmatopdown__terminalp((sigmatopdown__peg_adt_t)ivar_18);
           if (ivar_90){   
           release_sigmatopdown_array_66(ivar_9);
           uint8_t ivar_67;
           ivar_67 = (uint8_t)sigmatopdown__peg_adt_a((sigmatopdown__peg_adt_t)ivar_18);
           bool_t ivar_71;
           uint8_t ivar_74;
           ivar_74 = (uint8_t)1;
           int64_t tmp29587 = mpz_cmp_ui(ivar_14, ivar_74);
           ivar_71 = (tmp29587 == 0);
           if (ivar_71){    
            bool_t ivar_76;
            uint8_t ivar_78;
            ivar_78 = (uint8_t)ivar_3->elems[ivar_11];
            ivar_76 = (ivar_78 == ivar_67);
            if (ivar_76){     
             uint8_t ivar_86;
             ivar_86 = (uint8_t)0;
             result = (ivar_13 == ivar_86);
} else {
            
             result = (bool_t) false;
};
} else {
           
            result = (bool_t) false;
};
} else {
           
           bool_t ivar_201;
           ivar_18->count++;
           ivar_201 = (bool_t)r_sigmatopdown__concatp((sigmatopdown__peg_adt_t)ivar_18);
           if (ivar_201){    
            uint8_t ivar_94;
            ivar_18->count++;
            ivar_94 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_18);
            uint8_t ivar_95;
            ivar_95 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_18);
            bool_t ivar_102;
            sigmatopdown__ent_adt_t ivar_115;
            sigmatopdown_array_65_t ivar_107;
            ivar_107 = (sigmatopdown_array_65_t)ivar_9->elems[ivar_11];
            ivar_107->count++;
            ivar_115 = (sigmatopdown__ent_adt_t)ivar_107->elems[ivar_94];
            ivar_115->count++;
            release_sigmatopdown_array_65(ivar_107);
            ivar_102 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_115);
            if (ivar_102){     
             bool_t ivar_116;
             sigmatopdown__ent_adt_t ivar_144;
             sigmatopdown_array_65_t ivar_121;
             uint32_t ivar_141;
             uint32_t ivar_124;
             sigmatopdown__ent_adt_t ivar_136;
             sigmatopdown_array_65_t ivar_128;
             ivar_128 = (sigmatopdown_array_65_t)ivar_9->elems[ivar_11];
             ivar_128->count++;
             ivar_136 = (sigmatopdown__ent_adt_t)ivar_128->elems[ivar_94];
             ivar_136->count++;
             release_sigmatopdown_array_65(ivar_128);
             ivar_124 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_136);
             ivar_141 = (uint32_t)(ivar_11 + ivar_124);
             ivar_121 = (sigmatopdown_array_65_t)ivar_9->elems[ivar_141];
             ivar_121->count++;
             ivar_144 = (sigmatopdown__ent_adt_t)ivar_121->elems[ivar_95];
             ivar_144->count++;
             release_sigmatopdown_array_65(ivar_121);
             ivar_116 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_144);
             if (ivar_116){      
              mpz_ptr_t ivar_146;
              uint8_t ivar_147;
              ivar_147 = (uint8_t)1;
              mpq_ptr_t ivar_148;
              uint64_t ivar_196;
              sigmatopdown__ent_adt_t ivar_162;
              sigmatopdown_array_65_t ivar_154;
              ivar_154 = (sigmatopdown_array_65_t)ivar_9->elems[ivar_11];
              ivar_154->count++;
              ivar_162 = (sigmatopdown__ent_adt_t)ivar_154->elems[ivar_94];
              ivar_162->count++;
              release_sigmatopdown_array_65(ivar_154);
              ivar_196 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_162);
              mpq_ptr_t ivar_191;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_191, ivar_196);
              uint64_t ivar_195;
              sigmatopdown__ent_adt_t ivar_189;
              sigmatopdown_array_65_t ivar_166;
              uint32_t ivar_186;
              uint32_t ivar_169;
              sigmatopdown__ent_adt_t ivar_181;
              sigmatopdown_array_65_t ivar_173;
              ivar_173 = (sigmatopdown_array_65_t)ivar_9->elems[ivar_11];
              ivar_173->count++;
              ivar_181 = (sigmatopdown__ent_adt_t)ivar_173->elems[ivar_94];
              ivar_181->count++;
              release_sigmatopdown_array_65(ivar_173);
              ivar_169 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_181);
              ivar_186 = (uint32_t)(ivar_11 + ivar_169);
              ivar_166 = (sigmatopdown_array_65_t)ivar_9->elems[ivar_186];
              ivar_166->count++;
              release_sigmatopdown_array_66(ivar_9);
              ivar_189 = (sigmatopdown__ent_adt_t)ivar_166->elems[ivar_95];
              ivar_189->count++;
              release_sigmatopdown_array_65(ivar_166);
              ivar_195 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_189);
              mpq_ptr_t ivar_192;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_192, ivar_195);
              ivar_148 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_191, (mpq_ptr_t)ivar_192);
              mpz_mk_set_q(ivar_146, ivar_148);
              mpz_add_ui(ivar_146, ivar_146, ivar_147);
              int64_t tmp29633 = mpz_cmp_ui(ivar_146, ivar_13);
              result = (tmp29633 == 0);
} else {
             
              release_sigmatopdown_array_66(ivar_9);
              result = (bool_t) false;
};
} else {
            
             release_sigmatopdown_array_66(ivar_9);
             result = (bool_t) false;
};
} else {
           
            bool_t ivar_318;
            ivar_18->count++;
            ivar_318 = (bool_t)r_sigmatopdown__orp((sigmatopdown__peg_adt_t)ivar_18);
            if (ivar_318){     
             uint8_t ivar_205;
             ivar_18->count++;
             ivar_205 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_18);
             uint8_t ivar_206;
             ivar_206 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_18);
             bool_t ivar_213;
             bool_t ivar_215;
             sigmatopdown__ent_adt_t ivar_228;
             sigmatopdown_array_65_t ivar_220;
             ivar_220 = (sigmatopdown_array_65_t)ivar_9->elems[ivar_11];
             ivar_220->count++;
             ivar_228 = (sigmatopdown__ent_adt_t)ivar_220->elems[ivar_205];
             ivar_228->count++;
             release_sigmatopdown_array_65(ivar_220);
             ivar_215 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_228);
             if (ivar_215){      
              mpz_ptr_t ivar_230;
              uint8_t ivar_231;
              ivar_231 = (uint8_t)1;
              uint64_t ivar_232;
              sigmatopdown__ent_adt_t ivar_244;
              sigmatopdown_array_65_t ivar_236;
              ivar_236 = (sigmatopdown_array_65_t)ivar_9->elems[ivar_11];
              ivar_236->count++;
              ivar_244 = (sigmatopdown__ent_adt_t)ivar_236->elems[ivar_205];
              ivar_244->count++;
              release_sigmatopdown_array_65(ivar_236);
              ivar_232 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_244);
              mpz_mk_set_ui(ivar_230, (uint64_t)ivar_231);
              mpz_add_ui(ivar_230, ivar_230, (uint64_t)ivar_232);
              int64_t tmp29652 = mpz_cmp_ui(ivar_230, ivar_13);
              ivar_213 = (tmp29652 == 0);
} else {
             
              ivar_213 = (bool_t) false;
};
             if (ivar_213){      
              release_sigmatopdown_array_66(ivar_9);
              result = (bool_t) true;
} else {
             
              bool_t ivar_248;
              sigmatopdown__ent_adt_t ivar_261;
              sigmatopdown_array_65_t ivar_253;
              ivar_253 = (sigmatopdown_array_65_t)ivar_9->elems[ivar_11];
              ivar_253->count++;
              ivar_261 = (sigmatopdown__ent_adt_t)ivar_253->elems[ivar_205];
              ivar_261->count++;
              release_sigmatopdown_array_65(ivar_253);
              ivar_248 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_261);
              if (ivar_248){       
               bool_t ivar_262;
               sigmatopdown__ent_adt_t ivar_275;
               sigmatopdown_array_65_t ivar_267;
               ivar_267 = (sigmatopdown_array_65_t)ivar_9->elems[ivar_11];
               ivar_267->count++;
               ivar_275 = (sigmatopdown__ent_adt_t)ivar_267->elems[ivar_206];
               ivar_275->count++;
               release_sigmatopdown_array_65(ivar_267);
               ivar_262 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_275);
               if (ivar_262){        
                mpz_ptr_t ivar_277;
                uint8_t ivar_278;
                ivar_278 = (uint8_t)1;
                mpq_ptr_t ivar_279;
                uint64_t ivar_312;
                sigmatopdown__ent_adt_t ivar_293;
                sigmatopdown_array_65_t ivar_285;
                ivar_285 = (sigmatopdown_array_65_t)ivar_9->elems[ivar_11];
                ivar_285->count++;
                ivar_293 = (sigmatopdown__ent_adt_t)ivar_285->elems[ivar_205];
                ivar_293->count++;
                release_sigmatopdown_array_65(ivar_285);
                ivar_312 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_293);
                mpq_ptr_t ivar_307;
                //copying to mpq from uint64;
                mpq_mk_set_ui(ivar_307, ivar_312);
                uint64_t ivar_311;
                sigmatopdown__ent_adt_t ivar_305;
                sigmatopdown_array_65_t ivar_297;
                ivar_297 = (sigmatopdown_array_65_t)ivar_9->elems[ivar_11];
                ivar_297->count++;
                release_sigmatopdown_array_66(ivar_9);
                ivar_305 = (sigmatopdown__ent_adt_t)ivar_297->elems[ivar_206];
                ivar_305->count++;
                release_sigmatopdown_array_65(ivar_297);
                ivar_311 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_305);
                mpq_ptr_t ivar_308;
                //copying to mpq from uint64;
                mpq_mk_set_ui(ivar_308, ivar_311);
                ivar_279 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_307, (mpq_ptr_t)ivar_308);
                mpz_mk_set_q(ivar_277, ivar_279);
                mpz_add_ui(ivar_277, ivar_277, ivar_278);
                int64_t tmp29684 = mpz_cmp_ui(ivar_277, ivar_13);
                result = (tmp29684 == 0);
} else {
               
                release_sigmatopdown_array_66(ivar_9);
                result = (bool_t) false;
};
} else {
              
               release_sigmatopdown_array_66(ivar_9);
               result = (bool_t) false;
};
};
} else {
            
             bool_t ivar_365;
             ivar_18->count++;
             ivar_365 = (bool_t)r_sigmatopdown__andp((sigmatopdown__peg_adt_t)ivar_18);
             if (ivar_365){      
              uint8_t ivar_322;
              ivar_322 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_18);
              bool_t ivar_326;
              sigmatopdown__ent_adt_t ivar_339;
              sigmatopdown_array_65_t ivar_331;
              ivar_331 = (sigmatopdown_array_65_t)ivar_9->elems[ivar_11];
              ivar_331->count++;
              ivar_339 = (sigmatopdown__ent_adt_t)ivar_331->elems[ivar_322];
              ivar_339->count++;
              release_sigmatopdown_array_65(ivar_331);
              ivar_326 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_339);
              if (ivar_326){       
               bool_t ivar_340;
               uint8_t ivar_343;
               ivar_343 = (uint8_t)0;
               int64_t tmp29696 = mpz_cmp_ui(ivar_14, ivar_343);
               ivar_340 = (tmp29696 == 0);
               if (ivar_340){        
                mpz_ptr_t ivar_346;
                uint8_t ivar_347;
                ivar_347 = (uint8_t)1;
                uint64_t ivar_348;
                sigmatopdown__ent_adt_t ivar_360;
                sigmatopdown_array_65_t ivar_352;
                ivar_352 = (sigmatopdown_array_65_t)ivar_9->elems[ivar_11];
                ivar_352->count++;
                release_sigmatopdown_array_66(ivar_9);
                ivar_360 = (sigmatopdown__ent_adt_t)ivar_352->elems[ivar_322];
                ivar_360->count++;
                release_sigmatopdown_array_65(ivar_352);
                ivar_348 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_360);
                mpz_mk_set_ui(ivar_346, (uint64_t)ivar_347);
                mpz_add_ui(ivar_346, ivar_346, (uint64_t)ivar_348);
                int64_t tmp29705 = mpz_cmp_ui(ivar_346, ivar_13);
                result = (tmp29705 == 0);
} else {
               
                release_sigmatopdown_array_66(ivar_9);
                result = (bool_t) false;
};
} else {
              
               release_sigmatopdown_array_66(ivar_9);
               result = (bool_t) false;
};
} else {
             
              bool_t ivar_412;
              ivar_18->count++;
              ivar_412 = (bool_t)r_sigmatopdown__notp((sigmatopdown__peg_adt_t)ivar_18);
              if (ivar_412){       
               uint8_t ivar_369;
               ivar_369 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_18);
               bool_t ivar_373;
               sigmatopdown__ent_adt_t ivar_386;
               sigmatopdown_array_65_t ivar_378;
               ivar_378 = (sigmatopdown_array_65_t)ivar_9->elems[ivar_11];
               ivar_378->count++;
               ivar_386 = (sigmatopdown__ent_adt_t)ivar_378->elems[ivar_369];
               ivar_386->count++;
               release_sigmatopdown_array_65(ivar_378);
               ivar_373 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_386);
               if (ivar_373){        
                bool_t ivar_387;
                uint8_t ivar_390;
                ivar_390 = (uint8_t)0;
                int64_t tmp29717 = mpz_cmp_ui(ivar_14, ivar_390);
                ivar_387 = (tmp29717 == 0);
                if (ivar_387){         
                 mpz_ptr_t ivar_393;
                 uint8_t ivar_394;
                 ivar_394 = (uint8_t)1;
                 uint64_t ivar_395;
                 sigmatopdown__ent_adt_t ivar_407;
                 sigmatopdown_array_65_t ivar_399;
                 ivar_399 = (sigmatopdown_array_65_t)ivar_9->elems[ivar_11];
                 ivar_399->count++;
                 release_sigmatopdown_array_66(ivar_9);
                 ivar_407 = (sigmatopdown__ent_adt_t)ivar_399->elems[ivar_369];
                 ivar_407->count++;
                 release_sigmatopdown_array_65(ivar_399);
                 ivar_395 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_407);
                 mpz_mk_set_ui(ivar_393, (uint64_t)ivar_394);
                 mpz_add_ui(ivar_393, ivar_393, (uint64_t)ivar_395);
                 int64_t tmp29726 = mpz_cmp_ui(ivar_393, ivar_13);
                 result = (tmp29726 == 0);
} else {
                
                 release_sigmatopdown_array_66(ivar_9);
                 result = (bool_t) false;
};
} else {
               
                release_sigmatopdown_array_66(ivar_9);
                result = (bool_t) false;
};
} else {
              
               release_sigmatopdown_array_66(ivar_9);
               release_sigmatopdown__peg_adt(ivar_18);
               result = (bool_t) false;
};
};
};
};
};
};
};

        return result;
}

sigmatopdown_closure_93_t new_sigmatopdown_closure_93(void){
        static struct sigmatopdown_funtype_92_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_92_t, sigmatopdown_record_91_t))&f_sigmatopdown_closure_93, .mptr = (bool_t (*)(sigmatopdown_funtype_92_t, sigmatopdown_array_66_t, uint32_t, uint8_t, uint64_t, mpz_ptr_t))&m_sigmatopdown_closure_93, .rptr =  (void (*)(sigmatopdown_funtype_92_t))&release_sigmatopdown_closure_93, .cptr = (sigmatopdown_funtype_92_t (*)(sigmatopdown_funtype_92_t))&copy_sigmatopdown_closure_93};
        sigmatopdown_closure_93_t tmp = (sigmatopdown_closure_93_t) safe_malloc(sizeof(struct sigmatopdown_closure_93_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_93(sigmatopdown_funtype_92_t closure){
        sigmatopdown_closure_93_t x = (sigmatopdown_closure_93_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_array_86(x->fvar_1);
         release_sigmatopdown__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_93_t copy_sigmatopdown_closure_93(sigmatopdown_closure_93_t x){
        sigmatopdown_closure_93_t y = new_sigmatopdown_closure_93();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sigmatopdown_funtype_92_htbl_t new_htbl = (sigmatopdown_funtype_92_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_92_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_92_hashentry_t * new_data = (sigmatopdown_funtype_92_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_92_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_92_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatopdown_record_94_t new_sigmatopdown_record_94(void){
        sigmatopdown_record_94_t tmp = (sigmatopdown_record_94_t) safe_malloc(sizeof(struct sigmatopdown_record_94_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown_record_94(sigmatopdown_record_94_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_array_66(x->project_1);
         release_sigmatopdown__ent_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown_record_94_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_record_94((sigmatopdown_record_94_t)x);
}

sigmatopdown_record_94_t copy_sigmatopdown_record_94(sigmatopdown_record_94_t x){
        sigmatopdown_record_94_t y = new_sigmatopdown_record_94();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown_record_94(sigmatopdown_record_94_t x, sigmatopdown_record_94_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdown_array_66(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->project_4, y->project_4);
        return tmp;}

char * json_sigmatopdown_record_94(sigmatopdown_record_94_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdown_array_66(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_sigmatopdown__ent_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown_record_94_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_94_t T){
        return equal_sigmatopdown_record_94((sigmatopdown_record_94_t)x, (sigmatopdown_record_94_t)y);
}

char * json_sigmatopdown_record_94_ptr(pointer_t x, actual_sigmatopdown_record_94_t T){
        return json_sigmatopdown_record_94((sigmatopdown_record_94_t)x);
}

actual_sigmatopdown_record_94_t actual_sigmatopdown_record_94(){
        actual_sigmatopdown_record_94_t new = (actual_sigmatopdown_record_94_t)safe_malloc(sizeof(struct actual_sigmatopdown_record_94_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_record_94_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_record_94_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_record_94_ptr);
 

 
        return new;
 };

sigmatopdown_record_94_t update_sigmatopdown_record_94_project_1(sigmatopdown_record_94_t x, sigmatopdown_array_66_t v){
        sigmatopdown_record_94_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatopdown_array_66(x->project_1);};}
        else {y = copy_sigmatopdown_record_94(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatopdown_array_66_t)v;
        return y;}

sigmatopdown_record_94_t update_sigmatopdown_record_94_project_2(sigmatopdown_record_94_t x, uint32_t v){
        sigmatopdown_record_94_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_94(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

sigmatopdown_record_94_t update_sigmatopdown_record_94_project_3(sigmatopdown_record_94_t x, uint8_t v){
        sigmatopdown_record_94_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_94(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}

sigmatopdown_record_94_t update_sigmatopdown_record_94_project_4(sigmatopdown_record_94_t x, sigmatopdown__ent_adt_t v){
        sigmatopdown_record_94_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_sigmatopdown__ent_adt(x->project_4);};}
        else {y = copy_sigmatopdown_record_94(x); x->count--; y->project_4->count--;};
        y->project_4 = (sigmatopdown__ent_adt_t)v;
        return y;}



void release_sigmatopdown_funtype_95(sigmatopdown_funtype_95_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_95_t copy_sigmatopdown_funtype_95(sigmatopdown_funtype_95_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_95(sigmatopdown_funtype_95_t x, sigmatopdown_funtype_95_t y){
        return false;}

char* json_sigmatopdown_funtype_95(sigmatopdown_funtype_95_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_95\""); return result;}


bool_t f_sigmatopdown_closure_96(struct sigmatopdown_closure_96_s * closure, sigmatopdown_record_94_t bvar){
        sigmatopdown_array_66_t bvar_1;
        bvar_1 = (sigmatopdown_array_66_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        sigmatopdown__ent_adt_t bvar_4;
        bvar_4 = (sigmatopdown__ent_adt_t)bvar->project_4;
        bvar->project_4->count++;
        release_sigmatopdown_record_94(bvar);
        bool_t result = h_sigmatopdown_closure_96(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_sigmatopdown_array_66(bvar_1);
        release_sigmatopdown__ent_adt(bvar_4);
        return result;}

bool_t m_sigmatopdown_closure_96(struct sigmatopdown_closure_96_s * closure, sigmatopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, sigmatopdown__ent_adt_t bvar_4){
        return h_sigmatopdown_closure_96(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_sigmatopdown_closure_96(sigmatopdown_array_66_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, sigmatopdown__ent_adt_t ivar_10, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3){
        bool_t result;
        bool_t ivar_37;
        ivar_10->count++;
        ivar_37 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_10);
        if (ivar_37){ 
             uint64_t ivar_12;
             ivar_12 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_10);
             sigmatopdown_funtype_85_t ivar_23;
             ivar_2->count++;
             ivar_3->count++;
             ivar_23 = (sigmatopdown_funtype_85_t)sigmatopdown__good_failp((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatopdown_array_86_t)ivar_3);
             result = (bool_t)ivar_23->ftbl->mptr(ivar_23, ivar_6, ivar_8, ivar_9, ivar_12);
             ivar_23->ftbl->rptr(ivar_23);
} else {
        
             bool_t ivar_53;
             ivar_10->count++;
             ivar_53 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_10);
             if (ivar_53){  
           release_sigmatopdown__ent_adt(ivar_10);
           ivar_2->count++;
           result = (bool_t)sigmatopdown__loop_readyp((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatopdown_array_66_t)ivar_6, (uint32_t)ivar_8, (uint8_t)ivar_9);
} else {
             
           bool_t ivar_103;
           ivar_10->count++;
           ivar_103 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_10);
           if (ivar_103){   
           uint64_t ivar_57;
           ivar_10->count++;
           ivar_57 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_10);
           uint32_t ivar_58;
           ivar_58 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_10);
           bool_t ivar_65;
           int32_t ivar_68;
           ivar_68 = (int32_t)((uint64_t)ivar_1 - (uint64_t)ivar_8);
           if ((ivar_68 < 0)){    
            ivar_65 = false;
} else {
           
            ivar_65 = (ivar_58 <= (uint32_t)ivar_68);
};
           if (ivar_65){    
            sigmatopdown_funtype_92_t ivar_84;
            ivar_2->count++;
            ivar_3->count++;
            ivar_84 = (sigmatopdown_funtype_92_t)sigmatopdown__good_goodp((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatopdown_array_86_t)ivar_3);
            mpz_ptr_t ivar_101;
            //copying to mpz from uint32;
            mpz_mk_set_ui(ivar_101, ivar_58);
            result = (bool_t)ivar_84->ftbl->mptr(ivar_84, ivar_6, ivar_8, ivar_9, ivar_57, ivar_101);
            ivar_84->ftbl->rptr(ivar_84);
} else {
           
            release_sigmatopdown_array_66(ivar_6);
            result = (bool_t) false;
};
} else {
           
           release_sigmatopdown_array_66(ivar_6);
           release_sigmatopdown__ent_adt(ivar_10);
           result = (bool_t) true;
};
};
};

        return result;
}

sigmatopdown_closure_96_t new_sigmatopdown_closure_96(void){
        static struct sigmatopdown_funtype_95_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_95_t, sigmatopdown_record_94_t))&f_sigmatopdown_closure_96, .mptr = (bool_t (*)(sigmatopdown_funtype_95_t, sigmatopdown_array_66_t, uint32_t, uint8_t, sigmatopdown__ent_adt_t))&m_sigmatopdown_closure_96, .rptr =  (void (*)(sigmatopdown_funtype_95_t))&release_sigmatopdown_closure_96, .cptr = (sigmatopdown_funtype_95_t (*)(sigmatopdown_funtype_95_t))&copy_sigmatopdown_closure_96};
        sigmatopdown_closure_96_t tmp = (sigmatopdown_closure_96_t) safe_malloc(sizeof(struct sigmatopdown_closure_96_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_96(sigmatopdown_funtype_95_t closure){
        sigmatopdown_closure_96_t x = (sigmatopdown_closure_96_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__lang_spec(x->fvar_2);
         release_sigmatopdown_array_86(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_96_t copy_sigmatopdown_closure_96(sigmatopdown_closure_96_t x){
        sigmatopdown_closure_96_t y = new_sigmatopdown_closure_96();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sigmatopdown_funtype_95_htbl_t new_htbl = (sigmatopdown_funtype_95_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_95_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_95_hashentry_t * new_data = (sigmatopdown_funtype_95_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_95_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_95_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatopdown_closure_97(struct sigmatopdown_closure_97_s * closure, sigmatopdown_record_94_t bvar){
        sigmatopdown_array_66_t bvar_1;
        bvar_1 = (sigmatopdown_array_66_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        sigmatopdown__ent_adt_t bvar_4;
        bvar_4 = (sigmatopdown__ent_adt_t)bvar->project_4;
        bvar->project_4->count++;
        release_sigmatopdown_record_94(bvar);
        bool_t result = h_sigmatopdown_closure_97(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_sigmatopdown_array_66(bvar_1);
        release_sigmatopdown__ent_adt(bvar_4);
        return result;}

bool_t m_sigmatopdown_closure_97(struct sigmatopdown_closure_97_s * closure, sigmatopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, sigmatopdown__ent_adt_t bvar_4){
        return h_sigmatopdown_closure_97(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_sigmatopdown_closure_97(sigmatopdown_array_66_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, sigmatopdown__ent_adt_t ivar_10, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3){
        bool_t result;
        bool_t ivar_37;
        ivar_10->count++;
        ivar_37 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_10);
        if (ivar_37){ 
             uint64_t ivar_12;
             ivar_12 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_10);
             sigmatopdown_funtype_85_t ivar_23;
             ivar_2->count++;
             ivar_3->count++;
             ivar_23 = (sigmatopdown_funtype_85_t)sigmatopdown__good_failp((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatopdown_array_86_t)ivar_3);
             result = (bool_t)ivar_23->ftbl->mptr(ivar_23, ivar_6, ivar_8, ivar_9, ivar_12);
             ivar_23->ftbl->rptr(ivar_23);
} else {
        
             bool_t ivar_53;
             ivar_10->count++;
             ivar_53 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_10);
             if (ivar_53){  
           release_sigmatopdown__ent_adt(ivar_10);
           release_sigmatopdown__ent_adt(ivar_10);
           ivar_2->count++;
           result = (bool_t)sigmatopdown__loop_readyp((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatopdown_array_66_t)ivar_6, (uint32_t)ivar_8, (uint8_t)ivar_9);
} else {
             
           bool_t ivar_103;
           ivar_10->count++;
           ivar_103 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_10);
           if (ivar_103){   
           uint64_t ivar_57;
           ivar_10->count++;
           ivar_57 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_10);
           uint32_t ivar_58;
           ivar_58 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_10);
           bool_t ivar_65;
           int32_t ivar_68;
           ivar_68 = (int32_t)((uint64_t)ivar_1 - (uint64_t)ivar_8);
           if ((ivar_68 < 0)){    
            ivar_65 = false;
} else {
           
            ivar_65 = (ivar_58 <= (uint32_t)ivar_68);
};
           if (ivar_65){    
            sigmatopdown_funtype_92_t ivar_84;
            ivar_2->count++;
            ivar_3->count++;
            ivar_84 = (sigmatopdown_funtype_92_t)sigmatopdown__good_goodp((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatopdown_array_86_t)ivar_3);
            mpz_ptr_t ivar_101;
            //copying to mpz from uint32;
            mpz_mk_set_ui(ivar_101, ivar_58);
            result = (bool_t)ivar_84->ftbl->mptr(ivar_84, ivar_6, ivar_8, ivar_9, ivar_57, ivar_101);
            ivar_84->ftbl->rptr(ivar_84);
} else {
           
            release_sigmatopdown_array_66(ivar_6);
            result = (bool_t) false;
};
} else {
           
           bool_t ivar_107;
           ivar_107 = (bool_t)r_sigmatopdown__pushp((sigmatopdown__ent_adt_t)ivar_10);
           if (ivar_107){    
            sigmatopdown__ent_adt_t ivar_123;
            sigmatopdown_array_65_t ivar_115;
            ivar_115 = (sigmatopdown_array_65_t)ivar_6->elems[ivar_8];
            ivar_115->count++;
            release_sigmatopdown_array_66(ivar_6);
            ivar_123 = (sigmatopdown__ent_adt_t)ivar_115->elems[ivar_9];
            ivar_123->count++;
            release_sigmatopdown_array_65(ivar_115);
            result = (bool_t)r_sigmatopdown__pendingp((sigmatopdown__ent_adt_t)ivar_123);
} else {
           
            release_sigmatopdown_array_66(ivar_6);
            result = (bool_t) false;
};
};
};
};

        return result;
}

sigmatopdown_closure_97_t new_sigmatopdown_closure_97(void){
        static struct sigmatopdown_funtype_95_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_95_t, sigmatopdown_record_94_t))&f_sigmatopdown_closure_97, .mptr = (bool_t (*)(sigmatopdown_funtype_95_t, sigmatopdown_array_66_t, uint32_t, uint8_t, sigmatopdown__ent_adt_t))&m_sigmatopdown_closure_97, .rptr =  (void (*)(sigmatopdown_funtype_95_t))&release_sigmatopdown_closure_97, .cptr = (sigmatopdown_funtype_95_t (*)(sigmatopdown_funtype_95_t))&copy_sigmatopdown_closure_97};
        sigmatopdown_closure_97_t tmp = (sigmatopdown_closure_97_t) safe_malloc(sizeof(struct sigmatopdown_closure_97_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_97(sigmatopdown_funtype_95_t closure){
        sigmatopdown_closure_97_t x = (sigmatopdown_closure_97_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__lang_spec(x->fvar_2);
         release_sigmatopdown_array_86(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_97_t copy_sigmatopdown_closure_97(sigmatopdown_closure_97_t x){
        sigmatopdown_closure_97_t y = new_sigmatopdown_closure_97();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sigmatopdown_funtype_95_htbl_t new_htbl = (sigmatopdown_funtype_95_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_95_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_95_hashentry_t * new_data = (sigmatopdown_funtype_95_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_95_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_95_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatopdown_funtype_98(sigmatopdown_funtype_98_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_98_t copy_sigmatopdown_funtype_98(sigmatopdown_funtype_98_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_98(sigmatopdown_funtype_98_t x, sigmatopdown_funtype_98_t y){
        return false;}

char* json_sigmatopdown_funtype_98(sigmatopdown_funtype_98_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatopdown_funtype_98\""); return result;}


bool_t f_sigmatopdown_closure_99(struct sigmatopdown_closure_99_s * closure, sigmatopdown_array_66_t bvar){
        bool_t result = h_sigmatopdown_closure_99(bvar, closure->fvar_1); 
        return result;}

bool_t m_sigmatopdown_closure_99(struct sigmatopdown_closure_99_s * closure, sigmatopdown_array_66_t bvar){
        return h_sigmatopdown_closure_99(bvar, closure->fvar_1);}

extern bool_t h_sigmatopdown_closure_99(sigmatopdown_array_66_t ivar_6, uint32_t ivar_1){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}

sigmatopdown_closure_99_t new_sigmatopdown_closure_99(void){
        static struct sigmatopdown_funtype_98_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_98_t, sigmatopdown_array_66_t))&f_sigmatopdown_closure_99, .mptr = (bool_t (*)(sigmatopdown_funtype_98_t, sigmatopdown_array_66_t))&m_sigmatopdown_closure_99, .rptr =  (void (*)(sigmatopdown_funtype_98_t))&release_sigmatopdown_closure_99, .cptr = (sigmatopdown_funtype_98_t (*)(sigmatopdown_funtype_98_t))&copy_sigmatopdown_closure_99};
        sigmatopdown_closure_99_t tmp = (sigmatopdown_closure_99_t) safe_malloc(sizeof(struct sigmatopdown_closure_99_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_99(sigmatopdown_funtype_98_t closure){
        sigmatopdown_closure_99_t x = (sigmatopdown_closure_99_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_99_t copy_sigmatopdown_closure_99(sigmatopdown_closure_99_t x){
        sigmatopdown_closure_99_t y = new_sigmatopdown_closure_99();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        if (x->htbl != NULL){
            sigmatopdown_funtype_98_htbl_t new_htbl = (sigmatopdown_funtype_98_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_98_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_98_hashentry_t * new_data = (sigmatopdown_funtype_98_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_98_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_98_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatopdown_closure_100(struct sigmatopdown_closure_100_s * closure, sigmatopdown_record_9_t bvar){
        uint32_t bvar_1;
        bvar_1 = (uint32_t)bvar->project_1;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        release_sigmatopdown_record_9(bvar);
        bool_t result = h_sigmatopdown_closure_100(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_sigmatopdown_closure_100(struct sigmatopdown_closure_100_s * closure, uint32_t bvar_1, uint8_t bvar_2){
        return h_sigmatopdown_closure_100(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2);}

extern bool_t h_sigmatopdown_closure_100(uint32_t ivar_5, uint8_t ivar_6, sigmatopdown_array_66_t ivar_2, uint32_t ivar_1){
        bool_t result;
        bool_t ivar_7;
        sigmatopdown__ent_adt_t ivar_19;
        sigmatopdown_array_65_t ivar_11;
        ivar_11 = (sigmatopdown_array_65_t)ivar_2->elems[ivar_5];
        ivar_11->count++;
        ivar_19 = (sigmatopdown__ent_adt_t)ivar_11->elems[ivar_6];
        ivar_19->count++;
        release_sigmatopdown_array_65(ivar_11);
        ivar_7 = (bool_t)r_sigmatopdown__pendingp((sigmatopdown__ent_adt_t)ivar_19);
        result = !ivar_7;

        return result;
}

sigmatopdown_closure_100_t new_sigmatopdown_closure_100(void){
        static struct sigmatopdown_funtype_64_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_64_t, sigmatopdown_record_9_t))&f_sigmatopdown_closure_100, .mptr = (bool_t (*)(sigmatopdown_funtype_64_t, uint32_t, uint8_t))&m_sigmatopdown_closure_100, .rptr =  (void (*)(sigmatopdown_funtype_64_t))&release_sigmatopdown_closure_100, .cptr = (sigmatopdown_funtype_64_t (*)(sigmatopdown_funtype_64_t))&copy_sigmatopdown_closure_100};
        sigmatopdown_closure_100_t tmp = (sigmatopdown_closure_100_t) safe_malloc(sizeof(struct sigmatopdown_closure_100_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_100(sigmatopdown_funtype_64_t closure){
        sigmatopdown_closure_100_t x = (sigmatopdown_closure_100_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_array_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_100_t copy_sigmatopdown_closure_100(sigmatopdown_closure_100_t x){
        sigmatopdown_closure_100_t y = new_sigmatopdown_closure_100();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            sigmatopdown_funtype_64_htbl_t new_htbl = (sigmatopdown_funtype_64_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_64_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_64_hashentry_t * new_data = (sigmatopdown_funtype_64_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_64_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_64_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatopdown_funtype_101(sigmatopdown_funtype_101_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_101_t copy_sigmatopdown_funtype_101(sigmatopdown_funtype_101_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_101(sigmatopdown_funtype_101_t x, sigmatopdown_funtype_101_t y){
        return false;}

char* json_sigmatopdown_funtype_101(sigmatopdown_funtype_101_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"sigmatopdown_funtype_101\""); return result;}


sigmatopdown_funtype_98_t f_sigmatopdown_closure_102(struct sigmatopdown_closure_102_s * closure, sigmatopdown_record_9_t bvar){
        uint32_t bvar_1;
        bvar_1 = (uint32_t)bvar->project_1;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        release_sigmatopdown_record_9(bvar);
        sigmatopdown_funtype_98_t result = h_sigmatopdown_closure_102(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

sigmatopdown_funtype_98_t m_sigmatopdown_closure_102(struct sigmatopdown_closure_102_s * closure, uint32_t bvar_1, uint8_t bvar_2){
        return h_sigmatopdown_closure_102(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern sigmatopdown_funtype_98_t h_sigmatopdown_closure_102(uint32_t ivar_7, uint8_t ivar_8, sigmatopdown_array_86_t ivar_3, sigmatopdown__lang_spec_t ivar_2, uint32_t ivar_1){
        sigmatopdown_funtype_98_t result;
        sigmatopdown_closure_103_t cl30127;
        cl30127 = new_sigmatopdown_closure_103();
        cl30127->fvar_1 = (uint32_t)ivar_7;
        cl30127->fvar_2 = (uint32_t)ivar_1;
        cl30127->fvar_3 = (uint8_t)ivar_8;
        cl30127->fvar_4 = (sigmatopdown__lang_spec_t)ivar_2;
        if (cl30127->fvar_4 != NULL) cl30127->fvar_4->count++;
        cl30127->fvar_5 = (sigmatopdown_array_86_t)ivar_3;
        if (cl30127->fvar_5 != NULL) cl30127->fvar_5->count++;
        result = (sigmatopdown_funtype_98_t)cl30127;

        return result;
}

sigmatopdown_closure_102_t new_sigmatopdown_closure_102(void){
        static struct sigmatopdown_funtype_101_ftbl_s ftbl = {.fptr = (sigmatopdown_funtype_98_t (*)(sigmatopdown_funtype_101_t, sigmatopdown_record_9_t))&f_sigmatopdown_closure_102, .mptr = (sigmatopdown_funtype_98_t (*)(sigmatopdown_funtype_101_t, uint32_t, uint8_t))&m_sigmatopdown_closure_102, .rptr =  (void (*)(sigmatopdown_funtype_101_t))&release_sigmatopdown_closure_102, .cptr = (sigmatopdown_funtype_101_t (*)(sigmatopdown_funtype_101_t))&copy_sigmatopdown_closure_102};
        sigmatopdown_closure_102_t tmp = (sigmatopdown_closure_102_t) safe_malloc(sizeof(struct sigmatopdown_closure_102_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_102(sigmatopdown_funtype_101_t closure){
        sigmatopdown_closure_102_t x = (sigmatopdown_closure_102_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_array_86(x->fvar_1);
         release_sigmatopdown__lang_spec(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_102_t copy_sigmatopdown_closure_102(sigmatopdown_closure_102_t x){
        sigmatopdown_closure_102_t y = new_sigmatopdown_closure_102();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = (uint32_t)x->fvar_3;
        if (x->htbl != NULL){
            sigmatopdown_funtype_101_htbl_t new_htbl = (sigmatopdown_funtype_101_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_101_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_101_hashentry_t * new_data = (sigmatopdown_funtype_101_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_101_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_101_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatopdown_closure_103(struct sigmatopdown_closure_103_s * closure, sigmatopdown_array_66_t bvar){
        bool_t result = h_sigmatopdown_closure_103(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

bool_t m_sigmatopdown_closure_103(struct sigmatopdown_closure_103_s * closure, sigmatopdown_array_66_t bvar){
        return h_sigmatopdown_closure_103(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern bool_t h_sigmatopdown_closure_103(sigmatopdown_array_66_t ivar_11, uint32_t ivar_7, uint32_t ivar_1, uint8_t ivar_8, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3){
        bool_t result;
        bool_t ivar_13;
        sigmatopdown_funtype_64_t ivar_19;
        ivar_11->count++;
        ivar_19 = (sigmatopdown_funtype_64_t)sigmatopdown__good_rootp((uint32_t)ivar_1, (sigmatopdown_array_66_t)ivar_11);
        ivar_13 = (bool_t)ivar_19->ftbl->mptr(ivar_19, ivar_7, ivar_8);
        ivar_19->ftbl->rptr(ivar_19);
        if (ivar_13){ 
             sigmatopdown_funtype_98_t ivar_33;
             ivar_2->count++;
             ivar_3->count++;
             ivar_33 = (sigmatopdown_funtype_98_t)sigmatopdown__good_tscaffoldp((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatopdown_array_86_t)ivar_3);
             result = (bool_t)ivar_33->ftbl->fptr(ivar_33, ivar_11);
             ivar_33->ftbl->rptr(ivar_33);
} else {
        
             release_sigmatopdown_array_66(ivar_11);
             result = (bool_t) false;
};

        return result;
}

sigmatopdown_closure_103_t new_sigmatopdown_closure_103(void){
        static struct sigmatopdown_funtype_98_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_98_t, sigmatopdown_array_66_t))&f_sigmatopdown_closure_103, .mptr = (bool_t (*)(sigmatopdown_funtype_98_t, sigmatopdown_array_66_t))&m_sigmatopdown_closure_103, .rptr =  (void (*)(sigmatopdown_funtype_98_t))&release_sigmatopdown_closure_103, .cptr = (sigmatopdown_funtype_98_t (*)(sigmatopdown_funtype_98_t))&copy_sigmatopdown_closure_103};
        sigmatopdown_closure_103_t tmp = (sigmatopdown_closure_103_t) safe_malloc(sizeof(struct sigmatopdown_closure_103_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_103(sigmatopdown_funtype_98_t closure){
        sigmatopdown_closure_103_t x = (sigmatopdown_closure_103_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__lang_spec(x->fvar_4);
         release_sigmatopdown_array_86(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_103_t copy_sigmatopdown_closure_103(sigmatopdown_closure_103_t x){
        sigmatopdown_closure_103_t y = new_sigmatopdown_closure_103();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = (uint8_t)x->fvar_3;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            sigmatopdown_funtype_98_htbl_t new_htbl = (sigmatopdown_funtype_98_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_98_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_98_hashentry_t * new_data = (sigmatopdown_funtype_98_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_98_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_98_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatopdown_record_104_t new_sigmatopdown_record_104(void){
        sigmatopdown_record_104_t tmp = (sigmatopdown_record_104_t) safe_malloc(sizeof(struct sigmatopdown_record_104_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown_record_104(sigmatopdown_record_104_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_array_66(x->scaf);
         release_sigmatopdown__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown_record_104_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_record_104((sigmatopdown_record_104_t)x);
}

sigmatopdown_record_104_t copy_sigmatopdown_record_104(sigmatopdown_record_104_t x){
        sigmatopdown_record_104_t y = new_sigmatopdown_record_104();
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->depth = (uint64_t)x->depth;
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->lflag = (bool_t)x->lflag;
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown_record_104(sigmatopdown_record_104_t x, sigmatopdown_record_104_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdown_array_66(x->scaf, y->scaf);
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->stack, y->stack);
        tmp = tmp && x->lflag == y->lflag;
        return tmp;}

char * json_sigmatopdown_record_104(sigmatopdown_record_104_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(16);
         sprintf(fld0, "\"scaf\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdown_array_66(x->scaf));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"depth\" : ");
        tmp[1] = safe_strcat(fld1, json_uint64(x->depth));
        char * fld2 = safe_malloc(17);
         sprintf(fld2, "\"stack\" : ");
        tmp[2] = safe_strcat(fld2, json_sigmatopdown__ent_adt(x->stack));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"lflag\" : ");
        tmp[3] = safe_strcat(fld3, json_bool(x->lflag));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown_record_104_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_104_t T){
        return equal_sigmatopdown_record_104((sigmatopdown_record_104_t)x, (sigmatopdown_record_104_t)y);
}

char * json_sigmatopdown_record_104_ptr(pointer_t x, actual_sigmatopdown_record_104_t T){
        return json_sigmatopdown_record_104((sigmatopdown_record_104_t)x);
}

actual_sigmatopdown_record_104_t actual_sigmatopdown_record_104(){
        actual_sigmatopdown_record_104_t new = (actual_sigmatopdown_record_104_t)safe_malloc(sizeof(struct actual_sigmatopdown_record_104_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_record_104_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_record_104_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_record_104_ptr);
 

 
        return new;
 };

sigmatopdown_record_104_t update_sigmatopdown_record_104_scaf(sigmatopdown_record_104_t x, sigmatopdown_array_66_t v){
        sigmatopdown_record_104_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_sigmatopdown_array_66(x->scaf);};}
        else {y = copy_sigmatopdown_record_104(x); x->count--; y->scaf->count--;};
        y->scaf = (sigmatopdown_array_66_t)v;
        return y;}

sigmatopdown_record_104_t update_sigmatopdown_record_104_depth(sigmatopdown_record_104_t x, uint64_t v){
        sigmatopdown_record_104_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_104(x); x->count--;};
        y->depth = (uint64_t)v;
        return y;}

sigmatopdown_record_104_t update_sigmatopdown_record_104_stack(sigmatopdown_record_104_t x, sigmatopdown__ent_adt_t v){
        sigmatopdown_record_104_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_sigmatopdown__ent_adt(x->stack);};}
        else {y = copy_sigmatopdown_record_104(x); x->count--; y->stack->count--;};
        y->stack = (sigmatopdown__ent_adt_t)v;
        return y;}

sigmatopdown_record_104_t update_sigmatopdown_record_104_lflag(sigmatopdown_record_104_t x, bool_t v){
        sigmatopdown_record_104_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_104(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}



void release_sigmatopdown_funtype_105(sigmatopdown_funtype_105_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_105_t copy_sigmatopdown_funtype_105(sigmatopdown_funtype_105_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_105(sigmatopdown_funtype_105_t x, sigmatopdown_funtype_105_t y){
        return false;}

char* json_sigmatopdown_funtype_105(sigmatopdown_funtype_105_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"sigmatopdown_funtype_105\""); return result;}


sigmatopdown_record_104_t f_sigmatopdown_closure_106(struct sigmatopdown_closure_106_s * closure, sigmatopdown_record_104_t bvar){
        sigmatopdown_record_104_t result = h_sigmatopdown_closure_106(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

sigmatopdown_record_104_t m_sigmatopdown_closure_106(struct sigmatopdown_closure_106_s * closure, sigmatopdown_record_104_t bvar){
        return h_sigmatopdown_closure_106(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern sigmatopdown_record_104_t h_sigmatopdown_closure_106(sigmatopdown_record_104_t ivar_9, uint32_t ivar_1, sigmatopdown_array_86_t ivar_3, sigmatopdown__lang_spec_t ivar_2){
        sigmatopdown_record_104_t result;
        /* scaf */ sigmatopdown_array_66_t ivar_12;
        ivar_12 = (sigmatopdown_array_66_t)ivar_9->scaf;
        ivar_12->count++;
        /* stack */ sigmatopdown__ent_adt_t ivar_17;
        ivar_17 = (sigmatopdown__ent_adt_t)ivar_9->stack;
        ivar_17->count++;
        /* depth */ uint64_t ivar_20;
        ivar_20 = (uint64_t)ivar_9->depth;
        bool_t ivar_26;
        ivar_17->count++;
        ivar_26 = (bool_t)sigmatopdown__emptyp((sigmatopdown__ent_adt_t)ivar_17);
        if (ivar_26){ 
             release_sigmatopdown_array_66(ivar_12);
             release_sigmatopdown__ent_adt(ivar_17);
             //copying to sigmatopdown_record_104 from sigmatopdown_record_104;
             result = (sigmatopdown_record_104_t)ivar_9;
             if (result != NULL) result->count++;
             release_sigmatopdown_record_104(ivar_9);
} else {
        
             /* pos */ uint32_t ivar_31;
             ivar_17->count++;
             ivar_31 = (uint32_t)sigmatopdown__ent_adt_pos((sigmatopdown__ent_adt_t)ivar_17);
             /* cur */ uint8_t ivar_35;
             ivar_17->count++;
             ivar_35 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_17);
             /* rest */ sigmatopdown__ent_adt_t ivar_39;
             sigmatopdown_array_65_t ivar_42;
             ivar_42 = (sigmatopdown_array_65_t)ivar_12->elems[ivar_31];
             ivar_42->count++;
             ivar_39 = (sigmatopdown__ent_adt_t)ivar_42->elems[ivar_35];
             ivar_39->count++;
             release_sigmatopdown_array_65(ivar_42);
             sigmatopdown__peg_adt_t ivar_49;
             ivar_49 = (sigmatopdown__peg_adt_t)ivar_2->elems[ivar_35];
             ivar_49->count++;
             bool_t ivar_95;
             ivar_49->count++;
             ivar_95 = (bool_t)r_sigmatopdown__epsilonp((sigmatopdown__peg_adt_t)ivar_49);
             if (ivar_95){  
           release_sigmatopdown__peg_adt(ivar_49);
           release_sigmatopdown_array_66(ivar_12);
           release_sigmatopdown__ent_adt(ivar_17);
           sigmatopdown__ent_adt_t ivar_55;
           uint8_t ivar_66;
           ivar_66 = (uint8_t)0;
           uint64_t ivar_61;
           //copying to uint64 from uint8;
           ivar_61 = (uint64_t)ivar_66;
           uint8_t ivar_65;
           ivar_65 = (uint8_t)0;
           uint32_t ivar_62;
           //copying to uint32 from uint8;
           ivar_62 = (uint32_t)ivar_65;
           ivar_55 = (sigmatopdown__ent_adt_t)sigmatopdown__good((uint64_t)ivar_61, (uint32_t)ivar_62);
           uint64_t ivar_57;
           uint8_t ivar_68;
           ivar_68 = (uint8_t)1;
           ivar_57 = (uint64_t)(ivar_20 - ivar_68);
           sigmatopdown_record_104_t ivar_85;
           sigmatopdown_array_66_t ivar_71;
           ivar_71 = (sigmatopdown_array_66_t)ivar_9->scaf;
           ivar_71->count++;
           sigmatopdown_record_104_t ivar_82;
           sigmatopdown_array_66_t ivar_84;
           ivar_84 = NULL;
           ivar_82 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_84);
           if (ivar_84 != NULL) ivar_84->count--;
           sigmatopdown_array_66_t ivar_83;
           sigmatopdown_array_65_t ivar_72;
           ivar_72 = (sigmatopdown_array_65_t)ivar_71->elems[ivar_31];
           ivar_72->count++;
           sigmatopdown_array_66_t ivar_79;
           sigmatopdown_array_65_t ivar_81;
           ivar_81 = NULL;
           ivar_79 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_71, ivar_31, ivar_81);
           if (ivar_81 != NULL) ivar_81->count--;
           sigmatopdown_array_65_t ivar_80;
           sigmatopdown_array_65_t ivar_75;
           sigmatopdown__ent_adt_t ivar_77;
           ivar_77 = NULL;
           ivar_75 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_72, ivar_35, ivar_77);
           if (ivar_77 != NULL) ivar_77->count--;
           ivar_80 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_75, ivar_35, ivar_55);
           if (ivar_55 != NULL) ivar_55->count--;
           ivar_83 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_79, ivar_31, ivar_80);
           if (ivar_80 != NULL) ivar_80->count--;
           ivar_85 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_82, ivar_83);
           if (ivar_83 != NULL) ivar_83->count--;
           sigmatopdown_record_104_t ivar_90;
           sigmatopdown_record_104_t ivar_87;
           sigmatopdown__ent_adt_t ivar_89;
           ivar_89 = NULL;
           ivar_87 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_85, ivar_89);
           if (ivar_89 != NULL) ivar_89->count--;
           ivar_90 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_87, ivar_39);
           if (ivar_39 != NULL) ivar_39->count--;
           result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_90, ivar_57);
} else {
             
           bool_t ivar_136;
           ivar_49->count++;
           ivar_136 = (bool_t)r_sigmatopdown__failurep((sigmatopdown__peg_adt_t)ivar_49);
           if (ivar_136){   
           release_sigmatopdown__peg_adt(ivar_49);
           release_sigmatopdown_array_66(ivar_12);
           release_sigmatopdown__ent_adt(ivar_17);
           sigmatopdown__ent_adt_t ivar_100;
           uint8_t ivar_107;
           ivar_107 = (uint8_t)0;
           uint64_t ivar_105;
           //copying to uint64 from uint8;
           ivar_105 = (uint64_t)ivar_107;
           ivar_100 = (sigmatopdown__ent_adt_t)sigmatopdown__fail((uint64_t)ivar_105);
           uint64_t ivar_102;
           uint8_t ivar_109;
           ivar_109 = (uint8_t)1;
           ivar_102 = (uint64_t)(ivar_20 - ivar_109);
           sigmatopdown_record_104_t ivar_126;
           sigmatopdown_array_66_t ivar_112;
           ivar_112 = (sigmatopdown_array_66_t)ivar_9->scaf;
           ivar_112->count++;
           sigmatopdown_record_104_t ivar_123;
           sigmatopdown_array_66_t ivar_125;
           ivar_125 = NULL;
           ivar_123 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_125);
           if (ivar_125 != NULL) ivar_125->count--;
           sigmatopdown_array_66_t ivar_124;
           sigmatopdown_array_65_t ivar_113;
           ivar_113 = (sigmatopdown_array_65_t)ivar_112->elems[ivar_31];
           ivar_113->count++;
           sigmatopdown_array_66_t ivar_120;
           sigmatopdown_array_65_t ivar_122;
           ivar_122 = NULL;
           ivar_120 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_112, ivar_31, ivar_122);
           if (ivar_122 != NULL) ivar_122->count--;
           sigmatopdown_array_65_t ivar_121;
           sigmatopdown_array_65_t ivar_116;
           sigmatopdown__ent_adt_t ivar_118;
           ivar_118 = NULL;
           ivar_116 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_113, ivar_35, ivar_118);
           if (ivar_118 != NULL) ivar_118->count--;
           ivar_121 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_116, ivar_35, ivar_100);
           if (ivar_100 != NULL) ivar_100->count--;
           ivar_124 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_120, ivar_31, ivar_121);
           if (ivar_121 != NULL) ivar_121->count--;
           ivar_126 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_123, ivar_124);
           if (ivar_124 != NULL) ivar_124->count--;
           sigmatopdown_record_104_t ivar_131;
           sigmatopdown_record_104_t ivar_128;
           sigmatopdown__ent_adt_t ivar_130;
           ivar_130 = NULL;
           ivar_128 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_126, ivar_130);
           if (ivar_130 != NULL) ivar_130->count--;
           ivar_131 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_128, ivar_39);
           if (ivar_39 != NULL) ivar_39->count--;
           result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_131, ivar_102);
} else {
           
           bool_t ivar_211;
           ivar_49->count++;
           ivar_211 = (bool_t)r_sigmatopdown__anyp((sigmatopdown__peg_adt_t)ivar_49);
           if (ivar_211){    
            release_sigmatopdown_array_66(ivar_12);
            release_sigmatopdown__ent_adt(ivar_17);
            sigmatopdown_funtype_29_t ivar_140;
            ivar_140 = (sigmatopdown_funtype_29_t)sigmatopdown__peg_adt_p((sigmatopdown__peg_adt_t)ivar_49);
            /* v */ sigmatopdown__ent_adt_t ivar_146;
            bool_t ivar_147;
            bool_t ivar_148;
            ivar_148 = (ivar_31 == ivar_1);
            if (ivar_148){     
             release_sigmatopdown_funtype_29(ivar_140);
             ivar_147 = (bool_t) true;
} else {
            
             bool_t ivar_153;
             uint8_t ivar_162;
             ivar_162 = (uint8_t)ivar_3->elems[ivar_31];
             ivar_153 = (bool_t)ivar_140->ftbl->fptr(ivar_140, ivar_162);
             ivar_140->ftbl->rptr(ivar_140);
             ivar_147 = !ivar_153;
};
            if (ivar_147){     
             uint8_t ivar_169;
             ivar_169 = (uint8_t)0;
             uint64_t ivar_167;
             //copying to uint64 from uint8;
             ivar_167 = (uint64_t)ivar_169;
             ivar_146 = (sigmatopdown__ent_adt_t)sigmatopdown__fail((uint64_t)ivar_167);
} else {
            
             uint8_t ivar_178;
             ivar_178 = (uint8_t)0;
             uint64_t ivar_173;
             //copying to uint64 from uint8;
             ivar_173 = (uint64_t)ivar_178;
             uint8_t ivar_177;
             ivar_177 = (uint8_t)1;
             uint32_t ivar_174;
             //copying to uint32 from uint8;
             ivar_174 = (uint32_t)ivar_177;
             ivar_146 = (sigmatopdown__ent_adt_t)sigmatopdown__good((uint64_t)ivar_173, (uint32_t)ivar_174);
};
            uint64_t ivar_182;
            uint8_t ivar_184;
            ivar_184 = (uint8_t)1;
            ivar_182 = (uint64_t)(ivar_20 - ivar_184);
            sigmatopdown_record_104_t ivar_201;
            sigmatopdown_array_66_t ivar_187;
            ivar_187 = (sigmatopdown_array_66_t)ivar_9->scaf;
            ivar_187->count++;
            sigmatopdown_record_104_t ivar_198;
            sigmatopdown_array_66_t ivar_200;
            ivar_200 = NULL;
            ivar_198 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_200);
            if (ivar_200 != NULL) ivar_200->count--;
            sigmatopdown_array_66_t ivar_199;
            sigmatopdown_array_65_t ivar_188;
            ivar_188 = (sigmatopdown_array_65_t)ivar_187->elems[ivar_31];
            ivar_188->count++;
            sigmatopdown_array_66_t ivar_195;
            sigmatopdown_array_65_t ivar_197;
            ivar_197 = NULL;
            ivar_195 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_187, ivar_31, ivar_197);
            if (ivar_197 != NULL) ivar_197->count--;
            sigmatopdown_array_65_t ivar_196;
            sigmatopdown_array_65_t ivar_191;
            sigmatopdown__ent_adt_t ivar_193;
            ivar_193 = NULL;
            ivar_191 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_188, ivar_35, ivar_193);
            if (ivar_193 != NULL) ivar_193->count--;
            ivar_196 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_191, ivar_35, ivar_146);
            if (ivar_146 != NULL) ivar_146->count--;
            ivar_199 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_195, ivar_31, ivar_196);
            if (ivar_196 != NULL) ivar_196->count--;
            ivar_201 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_198, ivar_199);
            if (ivar_199 != NULL) ivar_199->count--;
            sigmatopdown_record_104_t ivar_206;
            sigmatopdown_record_104_t ivar_203;
            sigmatopdown__ent_adt_t ivar_205;
            ivar_205 = NULL;
            ivar_203 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_201, ivar_205);
            if (ivar_205 != NULL) ivar_205->count--;
            ivar_206 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_203, ivar_39);
            if (ivar_39 != NULL) ivar_39->count--;
            result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_206, ivar_182);
} else {
           
            bool_t ivar_280;
            ivar_49->count++;
            ivar_280 = (bool_t)r_sigmatopdown__terminalp((sigmatopdown__peg_adt_t)ivar_49);
            if (ivar_280){     
             release_sigmatopdown_array_66(ivar_12);
             release_sigmatopdown__ent_adt(ivar_17);
             uint8_t ivar_215;
             ivar_215 = (uint8_t)sigmatopdown__peg_adt_a((sigmatopdown__peg_adt_t)ivar_49);
             /* v */ sigmatopdown__ent_adt_t ivar_219;
             bool_t ivar_220;
             bool_t ivar_221;
             ivar_221 = (ivar_31 == ivar_1);
             if (ivar_221){      
              ivar_220 = (bool_t) true;
} else {
             
              uint8_t ivar_227;
              ivar_227 = (uint8_t)ivar_3->elems[ivar_31];
              ivar_220 = (ivar_215 != ivar_227);
};
             if (ivar_220){      
              uint8_t ivar_238;
              ivar_238 = (uint8_t)0;
              uint64_t ivar_236;
              //copying to uint64 from uint8;
              ivar_236 = (uint64_t)ivar_238;
              ivar_219 = (sigmatopdown__ent_adt_t)sigmatopdown__fail((uint64_t)ivar_236);
} else {
             
              uint8_t ivar_247;
              ivar_247 = (uint8_t)0;
              uint64_t ivar_242;
              //copying to uint64 from uint8;
              ivar_242 = (uint64_t)ivar_247;
              uint8_t ivar_246;
              ivar_246 = (uint8_t)1;
              uint32_t ivar_243;
              //copying to uint32 from uint8;
              ivar_243 = (uint32_t)ivar_246;
              ivar_219 = (sigmatopdown__ent_adt_t)sigmatopdown__good((uint64_t)ivar_242, (uint32_t)ivar_243);
};
             uint64_t ivar_251;
             uint8_t ivar_253;
             ivar_253 = (uint8_t)1;
             ivar_251 = (uint64_t)(ivar_20 - ivar_253);
             sigmatopdown_record_104_t ivar_270;
             sigmatopdown_array_66_t ivar_256;
             ivar_256 = (sigmatopdown_array_66_t)ivar_9->scaf;
             ivar_256->count++;
             sigmatopdown_record_104_t ivar_267;
             sigmatopdown_array_66_t ivar_269;
             ivar_269 = NULL;
             ivar_267 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_269);
             if (ivar_269 != NULL) ivar_269->count--;
             sigmatopdown_array_66_t ivar_268;
             sigmatopdown_array_65_t ivar_257;
             ivar_257 = (sigmatopdown_array_65_t)ivar_256->elems[ivar_31];
             ivar_257->count++;
             sigmatopdown_array_66_t ivar_264;
             sigmatopdown_array_65_t ivar_266;
             ivar_266 = NULL;
             ivar_264 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_256, ivar_31, ivar_266);
             if (ivar_266 != NULL) ivar_266->count--;
             sigmatopdown_array_65_t ivar_265;
             sigmatopdown_array_65_t ivar_260;
             sigmatopdown__ent_adt_t ivar_262;
             ivar_262 = NULL;
             ivar_260 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_257, ivar_35, ivar_262);
             if (ivar_262 != NULL) ivar_262->count--;
             ivar_265 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_260, ivar_35, ivar_219);
             if (ivar_219 != NULL) ivar_219->count--;
             ivar_268 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_264, ivar_31, ivar_265);
             if (ivar_265 != NULL) ivar_265->count--;
             ivar_270 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_267, ivar_268);
             if (ivar_268 != NULL) ivar_268->count--;
             sigmatopdown_record_104_t ivar_275;
             sigmatopdown_record_104_t ivar_272;
             sigmatopdown__ent_adt_t ivar_274;
             ivar_274 = NULL;
             ivar_272 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_270, ivar_274);
             if (ivar_274 != NULL) ivar_274->count--;
             ivar_275 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_272, ivar_39);
             if (ivar_39 != NULL) ivar_39->count--;
             result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_275, ivar_251);
} else {
            
             bool_t ivar_664;
             ivar_49->count++;
             ivar_664 = (bool_t)r_sigmatopdown__concatp((sigmatopdown__peg_adt_t)ivar_49);
             if (ivar_664){      
              release_sigmatopdown_array_66(ivar_12);
              uint8_t ivar_284;
              ivar_49->count++;
              ivar_284 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_49);
              uint8_t ivar_285;
              ivar_285 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_49);
              sigmatopdown__ent_adt_t ivar_292;
              sigmatopdown_array_65_t ivar_295;
              sigmatopdown_array_66_t ivar_299;
              ivar_299 = (sigmatopdown_array_66_t)ivar_9->scaf;
              ivar_299->count++;
              ivar_295 = (sigmatopdown_array_65_t)ivar_299->elems[ivar_31];
              ivar_295->count++;
              release_sigmatopdown_array_66(ivar_299);
              ivar_292 = (sigmatopdown__ent_adt_t)ivar_295->elems[ivar_284];
              ivar_292->count++;
              release_sigmatopdown_array_65(ivar_295);
              bool_t ivar_348;
              ivar_292->count++;
              ivar_348 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_292);
              if (ivar_348){       
               release_sigmatopdown__ent_adt(ivar_17);
               uint64_t ivar_304;
               ivar_304 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_292);
               sigmatopdown__ent_adt_t ivar_309;
               mpz_ptr_t ivar_319;
               uint8_t ivar_314;
               ivar_314 = (uint8_t)1;
               mpz_mk_set_ui(ivar_319, (uint64_t)ivar_304);
               mpz_add_ui(ivar_319, ivar_319, (uint64_t)ivar_314);
               uint64_t ivar_317;
               //copying to uint64 from mpz;
               ivar_317 = (uint64_t)mpz_get_ui(ivar_319);
               mpz_clear(ivar_319);
               ivar_309 = (sigmatopdown__ent_adt_t)sigmatopdown__fail((uint64_t)ivar_317);
               uint64_t ivar_311;
               uint8_t ivar_321;
               ivar_321 = (uint8_t)1;
               ivar_311 = (uint64_t)(ivar_20 - ivar_321);
               sigmatopdown_record_104_t ivar_338;
               sigmatopdown_array_66_t ivar_324;
               ivar_324 = (sigmatopdown_array_66_t)ivar_9->scaf;
               ivar_324->count++;
               sigmatopdown_record_104_t ivar_335;
               sigmatopdown_array_66_t ivar_337;
               ivar_337 = NULL;
               ivar_335 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_337);
               if (ivar_337 != NULL) ivar_337->count--;
               sigmatopdown_array_66_t ivar_336;
               sigmatopdown_array_65_t ivar_325;
               ivar_325 = (sigmatopdown_array_65_t)ivar_324->elems[ivar_31];
               ivar_325->count++;
               sigmatopdown_array_66_t ivar_332;
               sigmatopdown_array_65_t ivar_334;
               ivar_334 = NULL;
               ivar_332 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_324, ivar_31, ivar_334);
               if (ivar_334 != NULL) ivar_334->count--;
               sigmatopdown_array_65_t ivar_333;
               sigmatopdown_array_65_t ivar_328;
               sigmatopdown__ent_adt_t ivar_330;
               ivar_330 = NULL;
               ivar_328 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_325, ivar_35, ivar_330);
               if (ivar_330 != NULL) ivar_330->count--;
               ivar_333 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_328, ivar_35, ivar_309);
               if (ivar_309 != NULL) ivar_309->count--;
               ivar_336 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_332, ivar_31, ivar_333);
               if (ivar_333 != NULL) ivar_333->count--;
               ivar_338 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_335, ivar_336);
               if (ivar_336 != NULL) ivar_336->count--;
               sigmatopdown_record_104_t ivar_343;
               sigmatopdown_record_104_t ivar_340;
               sigmatopdown__ent_adt_t ivar_342;
               ivar_342 = NULL;
               ivar_340 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_338, ivar_342);
               if (ivar_342 != NULL) ivar_342->count--;
               ivar_343 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_340, ivar_39);
               if (ivar_39 != NULL) ivar_39->count--;
               result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_343, ivar_311);
} else {
              
               bool_t ivar_582;
               ivar_292->count++;
               ivar_582 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_292);
               if (ivar_582){        
                release_sigmatopdown__ent_adt(ivar_17);
                uint64_t ivar_352;
                ivar_292->count++;
                ivar_352 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_292);
                uint32_t ivar_353;
                ivar_353 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_292);
                sigmatopdown__ent_adt_t ivar_360;
                sigmatopdown_array_65_t ivar_363;
                sigmatopdown_array_66_t ivar_370;
                ivar_370 = (sigmatopdown_array_66_t)ivar_9->scaf;
                ivar_370->count++;
                uint32_t ivar_373;
                ivar_373 = (uint32_t)(ivar_31 + ivar_353);
                ivar_363 = (sigmatopdown_array_65_t)ivar_370->elems[ivar_373];
                ivar_363->count++;
                release_sigmatopdown_array_66(ivar_370);
                ivar_360 = (sigmatopdown__ent_adt_t)ivar_363->elems[ivar_285];
                ivar_360->count++;
                release_sigmatopdown_array_65(ivar_363);
                bool_t ivar_424;
                ivar_360->count++;
                ivar_424 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_360);
                if (ivar_424){         
                 uint64_t ivar_375;
                 ivar_375 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_360);
                 sigmatopdown__ent_adt_t ivar_380;
                 mpz_ptr_t ivar_395;
                 uint8_t ivar_384;
                 ivar_384 = (uint8_t)1;
                 mpq_ptr_t ivar_385;
                 mpq_ptr_t ivar_389;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_389, ivar_352);
                 mpq_ptr_t ivar_390;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_390, ivar_375);
                 ivar_385 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_389, (mpq_ptr_t)ivar_390);
                 mpz_mk_set_q(ivar_395, ivar_385);
                 mpz_add_ui(ivar_395, ivar_395, ivar_384);
                 uint64_t ivar_393;
                 //copying to uint64 from mpz;
                 ivar_393 = (uint64_t)mpz_get_ui(ivar_395);
                 mpz_clear(ivar_395);
                 ivar_380 = (sigmatopdown__ent_adt_t)sigmatopdown__fail((uint64_t)ivar_393);
                 uint64_t ivar_382;
                 uint8_t ivar_397;
                 ivar_397 = (uint8_t)1;
                 ivar_382 = (uint64_t)(ivar_20 - ivar_397);
                 sigmatopdown_record_104_t ivar_414;
                 sigmatopdown_array_66_t ivar_400;
                 ivar_400 = (sigmatopdown_array_66_t)ivar_9->scaf;
                 ivar_400->count++;
                 sigmatopdown_record_104_t ivar_411;
                 sigmatopdown_array_66_t ivar_413;
                 ivar_413 = NULL;
                 ivar_411 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_413);
                 if (ivar_413 != NULL) ivar_413->count--;
                 sigmatopdown_array_66_t ivar_412;
                 sigmatopdown_array_65_t ivar_401;
                 ivar_401 = (sigmatopdown_array_65_t)ivar_400->elems[ivar_31];
                 ivar_401->count++;
                 sigmatopdown_array_66_t ivar_408;
                 sigmatopdown_array_65_t ivar_410;
                 ivar_410 = NULL;
                 ivar_408 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_400, ivar_31, ivar_410);
                 if (ivar_410 != NULL) ivar_410->count--;
                 sigmatopdown_array_65_t ivar_409;
                 sigmatopdown_array_65_t ivar_404;
                 sigmatopdown__ent_adt_t ivar_406;
                 ivar_406 = NULL;
                 ivar_404 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_401, ivar_35, ivar_406);
                 if (ivar_406 != NULL) ivar_406->count--;
                 ivar_409 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_404, ivar_35, ivar_380);
                 if (ivar_380 != NULL) ivar_380->count--;
                 ivar_412 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_408, ivar_31, ivar_409);
                 if (ivar_409 != NULL) ivar_409->count--;
                 ivar_414 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_411, ivar_412);
                 if (ivar_412 != NULL) ivar_412->count--;
                 sigmatopdown_record_104_t ivar_419;
                 sigmatopdown_record_104_t ivar_416;
                 sigmatopdown__ent_adt_t ivar_418;
                 ivar_418 = NULL;
                 ivar_416 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_414, ivar_418);
                 if (ivar_418 != NULL) ivar_418->count--;
                 ivar_419 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_416, ivar_39);
                 if (ivar_39 != NULL) ivar_39->count--;
                 result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_419, ivar_382);
} else {
                
                 bool_t ivar_488;
                 ivar_360->count++;
                 ivar_488 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_360);
                 if (ivar_488){          
                  uint64_t ivar_428;
                  ivar_360->count++;
                  ivar_428 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_360);
                  uint32_t ivar_429;
                  ivar_429 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_360);
                  sigmatopdown__ent_adt_t ivar_437;
                  mpz_ptr_t ivar_459;
                  uint8_t ivar_442;
                  ivar_442 = (uint8_t)1;
                  mpq_ptr_t ivar_443;
                  mpq_ptr_t ivar_447;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_447, ivar_352);
                  mpq_ptr_t ivar_448;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_448, ivar_428);
                  ivar_443 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_447, (mpq_ptr_t)ivar_448);
                  mpz_mk_set_q(ivar_459, ivar_443);
                  mpz_add_ui(ivar_459, ivar_459, ivar_442);
                  uint64_t ivar_454;
                  //copying to uint64 from mpz;
                  ivar_454 = (uint64_t)mpz_get_ui(ivar_459);
                  mpz_clear(ivar_459);
                  mpq_ptr_t ivar_458;
                  mpz_t tmp31177;
                  mpz_init(tmp31177);
                  mpz_set_ui(tmp31177, (uint64_t)ivar_353);
                  mpz_add_ui(tmp31177, tmp31177, (uint64_t)ivar_429);
                  mpq_mk_set_z(ivar_458, tmp31177);
                  mpz_clear(tmp31177);
                  uint32_t ivar_455;
                  //copying to uint32 from mpq;
                  ivar_455 = (uint32_t)mpq_get_ui(ivar_458);
                  mpq_clear(ivar_458);
                  ivar_437 = (sigmatopdown__ent_adt_t)sigmatopdown__good((uint64_t)ivar_454, (uint32_t)ivar_455);
                  uint64_t ivar_439;
                  uint8_t ivar_461;
                  ivar_461 = (uint8_t)1;
                  ivar_439 = (uint64_t)(ivar_20 - ivar_461);
                  sigmatopdown_record_104_t ivar_478;
                  sigmatopdown_array_66_t ivar_464;
                  ivar_464 = (sigmatopdown_array_66_t)ivar_9->scaf;
                  ivar_464->count++;
                  sigmatopdown_record_104_t ivar_475;
                  sigmatopdown_array_66_t ivar_477;
                  ivar_477 = NULL;
                  ivar_475 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_477);
                  if (ivar_477 != NULL) ivar_477->count--;
                  sigmatopdown_array_66_t ivar_476;
                  sigmatopdown_array_65_t ivar_465;
                  ivar_465 = (sigmatopdown_array_65_t)ivar_464->elems[ivar_31];
                  ivar_465->count++;
                  sigmatopdown_array_66_t ivar_472;
                  sigmatopdown_array_65_t ivar_474;
                  ivar_474 = NULL;
                  ivar_472 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_464, ivar_31, ivar_474);
                  if (ivar_474 != NULL) ivar_474->count--;
                  sigmatopdown_array_65_t ivar_473;
                  sigmatopdown_array_65_t ivar_468;
                  sigmatopdown__ent_adt_t ivar_470;
                  ivar_470 = NULL;
                  ivar_468 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_465, ivar_35, ivar_470);
                  if (ivar_470 != NULL) ivar_470->count--;
                  ivar_473 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_468, ivar_35, ivar_437);
                  if (ivar_437 != NULL) ivar_437->count--;
                  ivar_476 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_472, ivar_31, ivar_473);
                  if (ivar_473 != NULL) ivar_473->count--;
                  ivar_478 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_475, ivar_476);
                  if (ivar_476 != NULL) ivar_476->count--;
                  sigmatopdown_record_104_t ivar_483;
                  sigmatopdown_record_104_t ivar_480;
                  sigmatopdown__ent_adt_t ivar_482;
                  ivar_482 = NULL;
                  ivar_480 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_478, ivar_482);
                  if (ivar_482 != NULL) ivar_482->count--;
                  ivar_483 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_480, ivar_39);
                  if (ivar_39 != NULL) ivar_39->count--;
                  result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_483, ivar_439);
} else {
                 
                  bool_t ivar_541;
                  ivar_541 = (bool_t)r_sigmatopdown__pendingp((sigmatopdown__ent_adt_t)ivar_360);
                  if (ivar_541){           
                   release_sigmatopdown__ent_adt(ivar_39);
                   sigmatopdown__ent_adt_t ivar_493;
                   mpq_ptr_t ivar_505;
                   mpz_t tmp31285;
                   mpz_init(tmp31285);
                   mpz_set_ui(tmp31285, (uint64_t)ivar_31);
                   mpz_add_ui(tmp31285, tmp31285, (uint64_t)ivar_353);
                   mpq_mk_set_z(ivar_505, tmp31285);
                   mpz_clear(tmp31285);
                   uint32_t ivar_502;
                   //copying to uint32 from mpq;
                   ivar_502 = (uint32_t)mpq_get_ui(ivar_505);
                   mpq_clear(ivar_505);
                   ivar_493 = (sigmatopdown__ent_adt_t)sigmatopdown__push((uint32_t)ivar_502, (uint8_t)ivar_285);
                   uint64_t ivar_494;
                   uint64_t ivar_506;
                   ivar_506 = (uint64_t)ivar_9->depth;
                   uint8_t ivar_507;
                   ivar_507 = (uint8_t)1;
                   ivar_494 = (uint64_t)(ivar_506 + ivar_507);
                   sigmatopdown__ent_adt_t ivar_495;
                   ivar_495 = (sigmatopdown__ent_adt_t)ivar_9->stack;
                   ivar_495->count++;
                   sigmatopdown_record_104_t ivar_518;
                   sigmatopdown_record_104_t ivar_515;
                   sigmatopdown__ent_adt_t ivar_517;
                   ivar_517 = NULL;
                   ivar_515 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_9, ivar_517);
                   if (ivar_517 != NULL) ivar_517->count--;
                   ivar_518 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_515, ivar_493);
                   if (ivar_493 != NULL) ivar_493->count--;
                   sigmatopdown_record_104_t ivar_522;
                   ivar_522 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_518, ivar_494);
                   sigmatopdown_array_66_t ivar_523;
                   ivar_523 = (sigmatopdown_array_66_t)ivar_522->scaf;
                   ivar_523->count++;
                   sigmatopdown_record_104_t ivar_537;
                   sigmatopdown_array_66_t ivar_539;
                   ivar_539 = NULL;
                   ivar_537 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_522, ivar_539);
                   if (ivar_539 != NULL) ivar_539->count--;
                   sigmatopdown_array_66_t ivar_538;
                   uint32_t ivar_530;
                   ivar_530 = (uint32_t)(ivar_31 + ivar_353);
                   sigmatopdown_array_65_t ivar_524;
                   ivar_524 = (sigmatopdown_array_65_t)ivar_523->elems[ivar_530];
                   ivar_524->count++;
                   sigmatopdown_array_66_t ivar_534;
                   sigmatopdown_array_65_t ivar_536;
                   ivar_536 = NULL;
                   ivar_534 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_523, ivar_530, ivar_536);
                   if (ivar_536 != NULL) ivar_536->count--;
                   sigmatopdown_array_65_t ivar_535;
                   sigmatopdown_array_65_t ivar_527;
                   sigmatopdown__ent_adt_t ivar_529;
                   ivar_529 = NULL;
                   ivar_527 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_524, ivar_285, ivar_529);
                   if (ivar_529 != NULL) ivar_529->count--;
                   ivar_535 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_527, ivar_285, ivar_495);
                   if (ivar_495 != NULL) ivar_495->count--;
                   ivar_538 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_534, ivar_530, ivar_535);
                   if (ivar_535 != NULL) ivar_535->count--;
                   result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_537, ivar_538);
                   if (ivar_538 != NULL) ivar_538->count--;
} else {
                  
                   sigmatopdown__ent_adt_t ivar_546;
                   ivar_546 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
                   if (ivar_546 != NULL) ivar_546->count++;
                   uint64_t ivar_547;
                   uint8_t ivar_551;
                   ivar_551 = (uint8_t)1;
                   ivar_547 = (uint64_t)(ivar_20 - ivar_551);
                   bool_t ivar_549;
                   ivar_549 = (bool_t) true;
                   sigmatopdown_record_104_t ivar_568;
                   sigmatopdown_array_66_t ivar_554;
                   ivar_554 = (sigmatopdown_array_66_t)ivar_9->scaf;
                   ivar_554->count++;
                   sigmatopdown_record_104_t ivar_565;
                   sigmatopdown_array_66_t ivar_567;
                   ivar_567 = NULL;
                   ivar_565 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_567);
                   if (ivar_567 != NULL) ivar_567->count--;
                   sigmatopdown_array_66_t ivar_566;
                   sigmatopdown_array_65_t ivar_555;
                   ivar_555 = (sigmatopdown_array_65_t)ivar_554->elems[ivar_31];
                   ivar_555->count++;
                   sigmatopdown_array_66_t ivar_562;
                   sigmatopdown_array_65_t ivar_564;
                   ivar_564 = NULL;
                   ivar_562 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_554, ivar_31, ivar_564);
                   if (ivar_564 != NULL) ivar_564->count--;
                   sigmatopdown_array_65_t ivar_563;
                   sigmatopdown_array_65_t ivar_558;
                   sigmatopdown__ent_adt_t ivar_560;
                   ivar_560 = NULL;
                   ivar_558 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_555, ivar_35, ivar_560);
                   if (ivar_560 != NULL) ivar_560->count--;
                   ivar_563 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_558, ivar_35, ivar_546);
                   if (ivar_546 != NULL) ivar_546->count--;
                   ivar_566 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_562, ivar_31, ivar_563);
                   if (ivar_563 != NULL) ivar_563->count--;
                   ivar_568 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_565, ivar_566);
                   if (ivar_566 != NULL) ivar_566->count--;
                   sigmatopdown_record_104_t ivar_572;
                   ivar_572 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_568, ivar_547);
                   sigmatopdown_record_104_t ivar_577;
                   sigmatopdown_record_104_t ivar_574;
                   sigmatopdown__ent_adt_t ivar_576;
                   ivar_576 = NULL;
                   ivar_574 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_572, ivar_576);
                   if (ivar_576 != NULL) ivar_576->count--;
                   ivar_577 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_574, ivar_39);
                   if (ivar_39 != NULL) ivar_39->count--;
                   result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_lflag(ivar_577, ivar_549);
};
};
};
} else {
               
                bool_t ivar_623;
                ivar_623 = (bool_t)r_sigmatopdown__pendingp((sigmatopdown__ent_adt_t)ivar_292);
                if (ivar_623){         
                 release_sigmatopdown__ent_adt(ivar_39);
                 sigmatopdown__ent_adt_t ivar_587;
                 ivar_587 = (sigmatopdown__ent_adt_t)sigmatopdown__push((uint32_t)ivar_31, (uint8_t)ivar_284);
                 uint64_t ivar_588;
                 uint8_t ivar_596;
                 ivar_596 = (uint8_t)1;
                 ivar_588 = (uint64_t)(ivar_20 + ivar_596);
                 sigmatopdown_record_104_t ivar_603;
                 sigmatopdown_record_104_t ivar_600;
                 sigmatopdown__ent_adt_t ivar_602;
                 ivar_602 = NULL;
                 ivar_600 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_9, ivar_602);
                 if (ivar_602 != NULL) ivar_602->count--;
                 ivar_603 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_600, ivar_587);
                 if (ivar_587 != NULL) ivar_587->count--;
                 sigmatopdown_record_104_t ivar_607;
                 ivar_607 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_603, ivar_588);
                 sigmatopdown_array_66_t ivar_608;
                 ivar_608 = (sigmatopdown_array_66_t)ivar_607->scaf;
                 ivar_608->count++;
                 sigmatopdown_record_104_t ivar_619;
                 sigmatopdown_array_66_t ivar_621;
                 ivar_621 = NULL;
                 ivar_619 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_607, ivar_621);
                 if (ivar_621 != NULL) ivar_621->count--;
                 sigmatopdown_array_66_t ivar_620;
                 sigmatopdown_array_65_t ivar_609;
                 ivar_609 = (sigmatopdown_array_65_t)ivar_608->elems[ivar_31];
                 ivar_609->count++;
                 sigmatopdown_array_66_t ivar_616;
                 sigmatopdown_array_65_t ivar_618;
                 ivar_618 = NULL;
                 ivar_616 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_608, ivar_31, ivar_618);
                 if (ivar_618 != NULL) ivar_618->count--;
                 sigmatopdown_array_65_t ivar_617;
                 sigmatopdown_array_65_t ivar_612;
                 sigmatopdown__ent_adt_t ivar_614;
                 ivar_614 = NULL;
                 ivar_612 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_609, ivar_284, ivar_614);
                 if (ivar_614 != NULL) ivar_614->count--;
                 ivar_617 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_612, ivar_284, ivar_17);
                 if (ivar_17 != NULL) ivar_17->count--;
                 ivar_620 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_616, ivar_31, ivar_617);
                 if (ivar_617 != NULL) ivar_617->count--;
                 result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_619, ivar_620);
                 if (ivar_620 != NULL) ivar_620->count--;
} else {
                
                 release_sigmatopdown__ent_adt(ivar_17);
                 sigmatopdown__ent_adt_t ivar_628;
                 ivar_628 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
                 if (ivar_628 != NULL) ivar_628->count++;
                 uint64_t ivar_629;
                 uint8_t ivar_633;
                 ivar_633 = (uint8_t)1;
                 ivar_629 = (uint64_t)(ivar_20 - ivar_633);
                 bool_t ivar_631;
                 ivar_631 = (bool_t) true;
                 sigmatopdown_record_104_t ivar_650;
                 sigmatopdown_array_66_t ivar_636;
                 ivar_636 = (sigmatopdown_array_66_t)ivar_9->scaf;
                 ivar_636->count++;
                 sigmatopdown_record_104_t ivar_647;
                 sigmatopdown_array_66_t ivar_649;
                 ivar_649 = NULL;
                 ivar_647 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_649);
                 if (ivar_649 != NULL) ivar_649->count--;
                 sigmatopdown_array_66_t ivar_648;
                 sigmatopdown_array_65_t ivar_637;
                 ivar_637 = (sigmatopdown_array_65_t)ivar_636->elems[ivar_31];
                 ivar_637->count++;
                 sigmatopdown_array_66_t ivar_644;
                 sigmatopdown_array_65_t ivar_646;
                 ivar_646 = NULL;
                 ivar_644 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_636, ivar_31, ivar_646);
                 if (ivar_646 != NULL) ivar_646->count--;
                 sigmatopdown_array_65_t ivar_645;
                 sigmatopdown_array_65_t ivar_640;
                 sigmatopdown__ent_adt_t ivar_642;
                 ivar_642 = NULL;
                 ivar_640 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_637, ivar_35, ivar_642);
                 if (ivar_642 != NULL) ivar_642->count--;
                 ivar_645 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_640, ivar_35, ivar_628);
                 if (ivar_628 != NULL) ivar_628->count--;
                 ivar_648 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_644, ivar_31, ivar_645);
                 if (ivar_645 != NULL) ivar_645->count--;
                 ivar_650 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_647, ivar_648);
                 if (ivar_648 != NULL) ivar_648->count--;
                 sigmatopdown_record_104_t ivar_654;
                 ivar_654 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_650, ivar_629);
                 sigmatopdown_record_104_t ivar_659;
                 sigmatopdown_record_104_t ivar_656;
                 sigmatopdown__ent_adt_t ivar_658;
                 ivar_658 = NULL;
                 ivar_656 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_654, ivar_658);
                 if (ivar_658 != NULL) ivar_658->count--;
                 ivar_659 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_656, ivar_39);
                 if (ivar_39 != NULL) ivar_39->count--;
                 result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_lflag(ivar_659, ivar_631);
};
};
};
} else {
             
              bool_t ivar_1026;
              ivar_49->count++;
              ivar_1026 = (bool_t)r_sigmatopdown__orp((sigmatopdown__peg_adt_t)ivar_49);
              if (ivar_1026){       
               uint8_t ivar_668;
               ivar_49->count++;
               ivar_668 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_49);
               uint8_t ivar_669;
               ivar_669 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_49);
               sigmatopdown__ent_adt_t ivar_676;
               sigmatopdown_array_65_t ivar_679;
               ivar_679 = (sigmatopdown_array_65_t)ivar_12->elems[ivar_31];
               ivar_679->count++;
               ivar_676 = (sigmatopdown__ent_adt_t)ivar_679->elems[ivar_668];
               ivar_676->count++;
               release_sigmatopdown_array_65(ivar_679);
               bool_t ivar_890;
               ivar_676->count++;
               ivar_890 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_676);
               if (ivar_890){        
                uint64_t ivar_686;
                ivar_686 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_676);
                sigmatopdown__ent_adt_t ivar_690;
                sigmatopdown_array_65_t ivar_693;
                ivar_693 = (sigmatopdown_array_65_t)ivar_12->elems[ivar_31];
                ivar_693->count++;
                release_sigmatopdown_array_66(ivar_12);
                ivar_690 = (sigmatopdown__ent_adt_t)ivar_693->elems[ivar_669];
                ivar_690->count++;
                release_sigmatopdown_array_65(ivar_693);
                bool_t ivar_749;
                ivar_690->count++;
                ivar_749 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_690);
                if (ivar_749){         
                 release_sigmatopdown__ent_adt(ivar_17);
                 uint64_t ivar_700;
                 ivar_700 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_690);
                 sigmatopdown__ent_adt_t ivar_705;
                 mpz_ptr_t ivar_720;
                 mpq_ptr_t ivar_709;
                 mpq_ptr_t ivar_714;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_714, ivar_686);
                 mpq_ptr_t ivar_715;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_715, ivar_700);
                 ivar_709 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_714, (mpq_ptr_t)ivar_715);
                 uint8_t ivar_710;
                 ivar_710 = (uint8_t)1;
                 mpz_mk_set_q(ivar_720, ivar_709);
                 mpz_add_ui(ivar_720, ivar_720, (uint64_t)ivar_710);
                 uint64_t ivar_718;
                 //copying to uint64 from mpz;
                 ivar_718 = (uint64_t)mpz_get_ui(ivar_720);
                 mpz_clear(ivar_720);
                 ivar_705 = (sigmatopdown__ent_adt_t)sigmatopdown__fail((uint64_t)ivar_718);
                 uint64_t ivar_707;
                 uint8_t ivar_722;
                 ivar_722 = (uint8_t)1;
                 ivar_707 = (uint64_t)(ivar_20 - ivar_722);
                 sigmatopdown_record_104_t ivar_739;
                 sigmatopdown_array_66_t ivar_725;
                 ivar_725 = (sigmatopdown_array_66_t)ivar_9->scaf;
                 ivar_725->count++;
                 sigmatopdown_record_104_t ivar_736;
                 sigmatopdown_array_66_t ivar_738;
                 ivar_738 = NULL;
                 ivar_736 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_738);
                 if (ivar_738 != NULL) ivar_738->count--;
                 sigmatopdown_array_66_t ivar_737;
                 sigmatopdown_array_65_t ivar_726;
                 ivar_726 = (sigmatopdown_array_65_t)ivar_725->elems[ivar_31];
                 ivar_726->count++;
                 sigmatopdown_array_66_t ivar_733;
                 sigmatopdown_array_65_t ivar_735;
                 ivar_735 = NULL;
                 ivar_733 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_725, ivar_31, ivar_735);
                 if (ivar_735 != NULL) ivar_735->count--;
                 sigmatopdown_array_65_t ivar_734;
                 sigmatopdown_array_65_t ivar_729;
                 sigmatopdown__ent_adt_t ivar_731;
                 ivar_731 = NULL;
                 ivar_729 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_726, ivar_35, ivar_731);
                 if (ivar_731 != NULL) ivar_731->count--;
                 ivar_734 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_729, ivar_35, ivar_705);
                 if (ivar_705 != NULL) ivar_705->count--;
                 ivar_737 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_733, ivar_31, ivar_734);
                 if (ivar_734 != NULL) ivar_734->count--;
                 ivar_739 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_736, ivar_737);
                 if (ivar_737 != NULL) ivar_737->count--;
                 sigmatopdown_record_104_t ivar_744;
                 sigmatopdown_record_104_t ivar_741;
                 sigmatopdown__ent_adt_t ivar_743;
                 ivar_743 = NULL;
                 ivar_741 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_739, ivar_743);
                 if (ivar_743 != NULL) ivar_743->count--;
                 ivar_744 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_741, ivar_39);
                 if (ivar_39 != NULL) ivar_39->count--;
                 result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_744, ivar_707);
} else {
                
                 bool_t ivar_808;
                 ivar_690->count++;
                 ivar_808 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_690);
                 if (ivar_808){          
                  release_sigmatopdown__ent_adt(ivar_17);
                  uint64_t ivar_753;
                  ivar_690->count++;
                  ivar_753 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_690);
                  uint32_t ivar_754;
                  ivar_754 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_690);
                  sigmatopdown__ent_adt_t ivar_762;
                  mpz_ptr_t ivar_779;
                  mpq_ptr_t ivar_767;
                  mpq_ptr_t ivar_772;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_772, ivar_686);
                  mpq_ptr_t ivar_773;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_773, ivar_753);
                  ivar_767 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_772, (mpq_ptr_t)ivar_773);
                  uint8_t ivar_768;
                  ivar_768 = (uint8_t)1;
                  mpz_mk_set_q(ivar_779, ivar_767);
                  mpz_add_ui(ivar_779, ivar_779, (uint64_t)ivar_768);
                  uint64_t ivar_776;
                  //copying to uint64 from mpz;
                  ivar_776 = (uint64_t)mpz_get_ui(ivar_779);
                  mpz_clear(ivar_779);
                  ivar_762 = (sigmatopdown__ent_adt_t)sigmatopdown__good((uint64_t)ivar_776, (uint32_t)ivar_754);
                  uint64_t ivar_764;
                  uint8_t ivar_781;
                  ivar_781 = (uint8_t)1;
                  ivar_764 = (uint64_t)(ivar_20 - ivar_781);
                  sigmatopdown_record_104_t ivar_798;
                  sigmatopdown_array_66_t ivar_784;
                  ivar_784 = (sigmatopdown_array_66_t)ivar_9->scaf;
                  ivar_784->count++;
                  sigmatopdown_record_104_t ivar_795;
                  sigmatopdown_array_66_t ivar_797;
                  ivar_797 = NULL;
                  ivar_795 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_797);
                  if (ivar_797 != NULL) ivar_797->count--;
                  sigmatopdown_array_66_t ivar_796;
                  sigmatopdown_array_65_t ivar_785;
                  ivar_785 = (sigmatopdown_array_65_t)ivar_784->elems[ivar_31];
                  ivar_785->count++;
                  sigmatopdown_array_66_t ivar_792;
                  sigmatopdown_array_65_t ivar_794;
                  ivar_794 = NULL;
                  ivar_792 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_784, ivar_31, ivar_794);
                  if (ivar_794 != NULL) ivar_794->count--;
                  sigmatopdown_array_65_t ivar_793;
                  sigmatopdown_array_65_t ivar_788;
                  sigmatopdown__ent_adt_t ivar_790;
                  ivar_790 = NULL;
                  ivar_788 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_785, ivar_35, ivar_790);
                  if (ivar_790 != NULL) ivar_790->count--;
                  ivar_793 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_788, ivar_35, ivar_762);
                  if (ivar_762 != NULL) ivar_762->count--;
                  ivar_796 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_792, ivar_31, ivar_793);
                  if (ivar_793 != NULL) ivar_793->count--;
                  ivar_798 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_795, ivar_796);
                  if (ivar_796 != NULL) ivar_796->count--;
                  sigmatopdown_record_104_t ivar_803;
                  sigmatopdown_record_104_t ivar_800;
                  sigmatopdown__ent_adt_t ivar_802;
                  ivar_802 = NULL;
                  ivar_800 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_798, ivar_802);
                  if (ivar_802 != NULL) ivar_802->count--;
                  ivar_803 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_800, ivar_39);
                  if (ivar_39 != NULL) ivar_39->count--;
                  result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_803, ivar_764);
} else {
                 
                  bool_t ivar_849;
                  ivar_849 = (bool_t)r_sigmatopdown__pendingp((sigmatopdown__ent_adt_t)ivar_690);
                  if (ivar_849){           
                   release_sigmatopdown__ent_adt(ivar_39);
                   sigmatopdown__ent_adt_t ivar_813;
                   ivar_813 = (sigmatopdown__ent_adt_t)sigmatopdown__push((uint32_t)ivar_31, (uint8_t)ivar_669);
                   uint64_t ivar_814;
                   uint8_t ivar_822;
                   ivar_822 = (uint8_t)1;
                   ivar_814 = (uint64_t)(ivar_20 + ivar_822);
                   sigmatopdown_record_104_t ivar_829;
                   sigmatopdown_record_104_t ivar_826;
                   sigmatopdown__ent_adt_t ivar_828;
                   ivar_828 = NULL;
                   ivar_826 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_9, ivar_828);
                   if (ivar_828 != NULL) ivar_828->count--;
                   ivar_829 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_826, ivar_813);
                   if (ivar_813 != NULL) ivar_813->count--;
                   sigmatopdown_record_104_t ivar_833;
                   ivar_833 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_829, ivar_814);
                   sigmatopdown_array_66_t ivar_834;
                   ivar_834 = (sigmatopdown_array_66_t)ivar_833->scaf;
                   ivar_834->count++;
                   sigmatopdown_record_104_t ivar_845;
                   sigmatopdown_array_66_t ivar_847;
                   ivar_847 = NULL;
                   ivar_845 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_833, ivar_847);
                   if (ivar_847 != NULL) ivar_847->count--;
                   sigmatopdown_array_66_t ivar_846;
                   sigmatopdown_array_65_t ivar_835;
                   ivar_835 = (sigmatopdown_array_65_t)ivar_834->elems[ivar_31];
                   ivar_835->count++;
                   sigmatopdown_array_66_t ivar_842;
                   sigmatopdown_array_65_t ivar_844;
                   ivar_844 = NULL;
                   ivar_842 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_834, ivar_31, ivar_844);
                   if (ivar_844 != NULL) ivar_844->count--;
                   sigmatopdown_array_65_t ivar_843;
                   sigmatopdown_array_65_t ivar_838;
                   sigmatopdown__ent_adt_t ivar_840;
                   ivar_840 = NULL;
                   ivar_838 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_835, ivar_669, ivar_840);
                   if (ivar_840 != NULL) ivar_840->count--;
                   ivar_843 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_838, ivar_669, ivar_17);
                   if (ivar_17 != NULL) ivar_17->count--;
                   ivar_846 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_842, ivar_31, ivar_843);
                   if (ivar_843 != NULL) ivar_843->count--;
                   result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_845, ivar_846);
                   if (ivar_846 != NULL) ivar_846->count--;
} else {
                  
                   release_sigmatopdown__ent_adt(ivar_17);
                   sigmatopdown__ent_adt_t ivar_854;
                   ivar_854 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
                   if (ivar_854 != NULL) ivar_854->count++;
                   uint64_t ivar_855;
                   uint8_t ivar_859;
                   ivar_859 = (uint8_t)1;
                   ivar_855 = (uint64_t)(ivar_20 - ivar_859);
                   bool_t ivar_857;
                   ivar_857 = (bool_t) true;
                   sigmatopdown_record_104_t ivar_876;
                   sigmatopdown_array_66_t ivar_862;
                   ivar_862 = (sigmatopdown_array_66_t)ivar_9->scaf;
                   ivar_862->count++;
                   sigmatopdown_record_104_t ivar_873;
                   sigmatopdown_array_66_t ivar_875;
                   ivar_875 = NULL;
                   ivar_873 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_875);
                   if (ivar_875 != NULL) ivar_875->count--;
                   sigmatopdown_array_66_t ivar_874;
                   sigmatopdown_array_65_t ivar_863;
                   ivar_863 = (sigmatopdown_array_65_t)ivar_862->elems[ivar_31];
                   ivar_863->count++;
                   sigmatopdown_array_66_t ivar_870;
                   sigmatopdown_array_65_t ivar_872;
                   ivar_872 = NULL;
                   ivar_870 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_862, ivar_31, ivar_872);
                   if (ivar_872 != NULL) ivar_872->count--;
                   sigmatopdown_array_65_t ivar_871;
                   sigmatopdown_array_65_t ivar_866;
                   sigmatopdown__ent_adt_t ivar_868;
                   ivar_868 = NULL;
                   ivar_866 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_863, ivar_35, ivar_868);
                   if (ivar_868 != NULL) ivar_868->count--;
                   ivar_871 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_866, ivar_35, ivar_854);
                   if (ivar_854 != NULL) ivar_854->count--;
                   ivar_874 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_870, ivar_31, ivar_871);
                   if (ivar_871 != NULL) ivar_871->count--;
                   ivar_876 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_873, ivar_874);
                   if (ivar_874 != NULL) ivar_874->count--;
                   sigmatopdown_record_104_t ivar_880;
                   ivar_880 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_876, ivar_855);
                   sigmatopdown_record_104_t ivar_885;
                   sigmatopdown_record_104_t ivar_882;
                   sigmatopdown__ent_adt_t ivar_884;
                   ivar_884 = NULL;
                   ivar_882 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_880, ivar_884);
                   if (ivar_884 != NULL) ivar_884->count--;
                   ivar_885 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_882, ivar_39);
                   if (ivar_39 != NULL) ivar_39->count--;
                   result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_lflag(ivar_885, ivar_857);
};
};
};
} else {
               
                release_sigmatopdown_array_66(ivar_12);
                bool_t ivar_944;
                ivar_676->count++;
                ivar_944 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_676);
                if (ivar_944){         
                 release_sigmatopdown__ent_adt(ivar_17);
                 uint64_t ivar_894;
                 ivar_676->count++;
                 ivar_894 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_676);
                 uint32_t ivar_895;
                 ivar_895 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_676);
                 sigmatopdown__ent_adt_t ivar_903;
                 mpz_ptr_t ivar_915;
                 uint8_t ivar_909;
                 ivar_909 = (uint8_t)1;
                 mpz_mk_set_ui(ivar_915, (uint64_t)ivar_894);
                 mpz_add_ui(ivar_915, ivar_915, (uint64_t)ivar_909);
                 uint64_t ivar_912;
                 //copying to uint64 from mpz;
                 ivar_912 = (uint64_t)mpz_get_ui(ivar_915);
                 mpz_clear(ivar_915);
                 ivar_903 = (sigmatopdown__ent_adt_t)sigmatopdown__good((uint64_t)ivar_912, (uint32_t)ivar_895);
                 uint64_t ivar_905;
                 uint8_t ivar_917;
                 ivar_917 = (uint8_t)1;
                 ivar_905 = (uint64_t)(ivar_20 - ivar_917);
                 sigmatopdown_record_104_t ivar_934;
                 sigmatopdown_array_66_t ivar_920;
                 ivar_920 = (sigmatopdown_array_66_t)ivar_9->scaf;
                 ivar_920->count++;
                 sigmatopdown_record_104_t ivar_931;
                 sigmatopdown_array_66_t ivar_933;
                 ivar_933 = NULL;
                 ivar_931 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_933);
                 if (ivar_933 != NULL) ivar_933->count--;
                 sigmatopdown_array_66_t ivar_932;
                 sigmatopdown_array_65_t ivar_921;
                 ivar_921 = (sigmatopdown_array_65_t)ivar_920->elems[ivar_31];
                 ivar_921->count++;
                 sigmatopdown_array_66_t ivar_928;
                 sigmatopdown_array_65_t ivar_930;
                 ivar_930 = NULL;
                 ivar_928 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_920, ivar_31, ivar_930);
                 if (ivar_930 != NULL) ivar_930->count--;
                 sigmatopdown_array_65_t ivar_929;
                 sigmatopdown_array_65_t ivar_924;
                 sigmatopdown__ent_adt_t ivar_926;
                 ivar_926 = NULL;
                 ivar_924 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_921, ivar_35, ivar_926);
                 if (ivar_926 != NULL) ivar_926->count--;
                 ivar_929 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_924, ivar_35, ivar_903);
                 if (ivar_903 != NULL) ivar_903->count--;
                 ivar_932 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_928, ivar_31, ivar_929);
                 if (ivar_929 != NULL) ivar_929->count--;
                 ivar_934 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_931, ivar_932);
                 if (ivar_932 != NULL) ivar_932->count--;
                 sigmatopdown_record_104_t ivar_939;
                 sigmatopdown_record_104_t ivar_936;
                 sigmatopdown__ent_adt_t ivar_938;
                 ivar_938 = NULL;
                 ivar_936 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_934, ivar_938);
                 if (ivar_938 != NULL) ivar_938->count--;
                 ivar_939 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_936, ivar_39);
                 if (ivar_39 != NULL) ivar_39->count--;
                 result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_939, ivar_905);
} else {
                
                 bool_t ivar_985;
                 ivar_985 = (bool_t)r_sigmatopdown__pendingp((sigmatopdown__ent_adt_t)ivar_676);
                 if (ivar_985){          
                  release_sigmatopdown__ent_adt(ivar_39);
                  sigmatopdown__ent_adt_t ivar_949;
                  ivar_949 = (sigmatopdown__ent_adt_t)sigmatopdown__push((uint32_t)ivar_31, (uint8_t)ivar_668);
                  uint64_t ivar_950;
                  uint8_t ivar_958;
                  ivar_958 = (uint8_t)1;
                  ivar_950 = (uint64_t)(ivar_20 + ivar_958);
                  sigmatopdown_record_104_t ivar_965;
                  sigmatopdown_record_104_t ivar_962;
                  sigmatopdown__ent_adt_t ivar_964;
                  ivar_964 = NULL;
                  ivar_962 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_9, ivar_964);
                  if (ivar_964 != NULL) ivar_964->count--;
                  ivar_965 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_962, ivar_949);
                  if (ivar_949 != NULL) ivar_949->count--;
                  sigmatopdown_record_104_t ivar_969;
                  ivar_969 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_965, ivar_950);
                  sigmatopdown_array_66_t ivar_970;
                  ivar_970 = (sigmatopdown_array_66_t)ivar_969->scaf;
                  ivar_970->count++;
                  sigmatopdown_record_104_t ivar_981;
                  sigmatopdown_array_66_t ivar_983;
                  ivar_983 = NULL;
                  ivar_981 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_969, ivar_983);
                  if (ivar_983 != NULL) ivar_983->count--;
                  sigmatopdown_array_66_t ivar_982;
                  sigmatopdown_array_65_t ivar_971;
                  ivar_971 = (sigmatopdown_array_65_t)ivar_970->elems[ivar_31];
                  ivar_971->count++;
                  sigmatopdown_array_66_t ivar_978;
                  sigmatopdown_array_65_t ivar_980;
                  ivar_980 = NULL;
                  ivar_978 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_970, ivar_31, ivar_980);
                  if (ivar_980 != NULL) ivar_980->count--;
                  sigmatopdown_array_65_t ivar_979;
                  sigmatopdown_array_65_t ivar_974;
                  sigmatopdown__ent_adt_t ivar_976;
                  ivar_976 = NULL;
                  ivar_974 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_971, ivar_668, ivar_976);
                  if (ivar_976 != NULL) ivar_976->count--;
                  ivar_979 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_974, ivar_668, ivar_17);
                  if (ivar_17 != NULL) ivar_17->count--;
                  ivar_982 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_978, ivar_31, ivar_979);
                  if (ivar_979 != NULL) ivar_979->count--;
                  result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_981, ivar_982);
                  if (ivar_982 != NULL) ivar_982->count--;
} else {
                 
                  release_sigmatopdown__ent_adt(ivar_17);
                  sigmatopdown__ent_adt_t ivar_990;
                  ivar_990 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
                  if (ivar_990 != NULL) ivar_990->count++;
                  uint64_t ivar_991;
                  uint8_t ivar_995;
                  ivar_995 = (uint8_t)1;
                  ivar_991 = (uint64_t)(ivar_20 - ivar_995);
                  bool_t ivar_993;
                  ivar_993 = (bool_t) true;
                  sigmatopdown_record_104_t ivar_1012;
                  sigmatopdown_array_66_t ivar_998;
                  ivar_998 = (sigmatopdown_array_66_t)ivar_9->scaf;
                  ivar_998->count++;
                  sigmatopdown_record_104_t ivar_1009;
                  sigmatopdown_array_66_t ivar_1011;
                  ivar_1011 = NULL;
                  ivar_1009 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_1011);
                  if (ivar_1011 != NULL) ivar_1011->count--;
                  sigmatopdown_array_66_t ivar_1010;
                  sigmatopdown_array_65_t ivar_999;
                  ivar_999 = (sigmatopdown_array_65_t)ivar_998->elems[ivar_31];
                  ivar_999->count++;
                  sigmatopdown_array_66_t ivar_1006;
                  sigmatopdown_array_65_t ivar_1008;
                  ivar_1008 = NULL;
                  ivar_1006 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_998, ivar_31, ivar_1008);
                  if (ivar_1008 != NULL) ivar_1008->count--;
                  sigmatopdown_array_65_t ivar_1007;
                  sigmatopdown_array_65_t ivar_1002;
                  sigmatopdown__ent_adt_t ivar_1004;
                  ivar_1004 = NULL;
                  ivar_1002 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_999, ivar_35, ivar_1004);
                  if (ivar_1004 != NULL) ivar_1004->count--;
                  ivar_1007 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_1002, ivar_35, ivar_990);
                  if (ivar_990 != NULL) ivar_990->count--;
                  ivar_1010 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_1006, ivar_31, ivar_1007);
                  if (ivar_1007 != NULL) ivar_1007->count--;
                  ivar_1012 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_1009, ivar_1010);
                  if (ivar_1010 != NULL) ivar_1010->count--;
                  sigmatopdown_record_104_t ivar_1016;
                  ivar_1016 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_1012, ivar_991);
                  sigmatopdown_record_104_t ivar_1021;
                  sigmatopdown_record_104_t ivar_1018;
                  sigmatopdown__ent_adt_t ivar_1020;
                  ivar_1020 = NULL;
                  ivar_1018 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_1016, ivar_1020);
                  if (ivar_1020 != NULL) ivar_1020->count--;
                  ivar_1021 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_1018, ivar_39);
                  if (ivar_39 != NULL) ivar_39->count--;
                  result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_lflag(ivar_1021, ivar_993);
};
};
};
} else {
              
               bool_t ivar_1226;
               ivar_49->count++;
               ivar_1226 = (bool_t)r_sigmatopdown__andp((sigmatopdown__peg_adt_t)ivar_49);
               if (ivar_1226){        
                uint8_t ivar_1030;
                ivar_1030 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_49);
                sigmatopdown__ent_adt_t ivar_1034;
                sigmatopdown_array_65_t ivar_1037;
                ivar_1037 = (sigmatopdown_array_65_t)ivar_12->elems[ivar_31];
                ivar_1037->count++;
                release_sigmatopdown_array_66(ivar_12);
                ivar_1034 = (sigmatopdown__ent_adt_t)ivar_1037->elems[ivar_1030];
                ivar_1034->count++;
                release_sigmatopdown_array_65(ivar_1037);
                bool_t ivar_1088;
                ivar_1034->count++;
                ivar_1088 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_1034);
                if (ivar_1088){         
                 release_sigmatopdown__ent_adt(ivar_17);
                 uint64_t ivar_1044;
                 ivar_1044 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_1034);
                 sigmatopdown__ent_adt_t ivar_1049;
                 mpz_ptr_t ivar_1059;
                 uint8_t ivar_1054;
                 ivar_1054 = (uint8_t)1;
                 mpz_mk_set_ui(ivar_1059, (uint64_t)ivar_1044);
                 mpz_add_ui(ivar_1059, ivar_1059, (uint64_t)ivar_1054);
                 uint64_t ivar_1057;
                 //copying to uint64 from mpz;
                 ivar_1057 = (uint64_t)mpz_get_ui(ivar_1059);
                 mpz_clear(ivar_1059);
                 ivar_1049 = (sigmatopdown__ent_adt_t)sigmatopdown__fail((uint64_t)ivar_1057);
                 uint64_t ivar_1051;
                 uint8_t ivar_1061;
                 ivar_1061 = (uint8_t)1;
                 ivar_1051 = (uint64_t)(ivar_20 - ivar_1061);
                 sigmatopdown_record_104_t ivar_1078;
                 sigmatopdown_array_66_t ivar_1064;
                 ivar_1064 = (sigmatopdown_array_66_t)ivar_9->scaf;
                 ivar_1064->count++;
                 sigmatopdown_record_104_t ivar_1075;
                 sigmatopdown_array_66_t ivar_1077;
                 ivar_1077 = NULL;
                 ivar_1075 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_1077);
                 if (ivar_1077 != NULL) ivar_1077->count--;
                 sigmatopdown_array_66_t ivar_1076;
                 sigmatopdown_array_65_t ivar_1065;
                 ivar_1065 = (sigmatopdown_array_65_t)ivar_1064->elems[ivar_31];
                 ivar_1065->count++;
                 sigmatopdown_array_66_t ivar_1072;
                 sigmatopdown_array_65_t ivar_1074;
                 ivar_1074 = NULL;
                 ivar_1072 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_1064, ivar_31, ivar_1074);
                 if (ivar_1074 != NULL) ivar_1074->count--;
                 sigmatopdown_array_65_t ivar_1073;
                 sigmatopdown_array_65_t ivar_1068;
                 sigmatopdown__ent_adt_t ivar_1070;
                 ivar_1070 = NULL;
                 ivar_1068 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_1065, ivar_35, ivar_1070);
                 if (ivar_1070 != NULL) ivar_1070->count--;
                 ivar_1073 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_1068, ivar_35, ivar_1049);
                 if (ivar_1049 != NULL) ivar_1049->count--;
                 ivar_1076 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_1072, ivar_31, ivar_1073);
                 if (ivar_1073 != NULL) ivar_1073->count--;
                 ivar_1078 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_1075, ivar_1076);
                 if (ivar_1076 != NULL) ivar_1076->count--;
                 sigmatopdown_record_104_t ivar_1083;
                 sigmatopdown_record_104_t ivar_1080;
                 sigmatopdown__ent_adt_t ivar_1082;
                 ivar_1082 = NULL;
                 ivar_1080 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_1078, ivar_1082);
                 if (ivar_1082 != NULL) ivar_1082->count--;
                 ivar_1083 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_1080, ivar_39);
                 if (ivar_39 != NULL) ivar_39->count--;
                 result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_1083, ivar_1051);
} else {
                
                 bool_t ivar_1144;
                 ivar_1034->count++;
                 ivar_1144 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_1034);
                 if (ivar_1144){          
                  release_sigmatopdown__ent_adt(ivar_17);
                  uint64_t ivar_1092;
                  ivar_1034->count++;
                  ivar_1092 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_1034);
                  sigmatopdown__ent_adt_t ivar_1101;
                  mpz_ptr_t ivar_1115;
                  uint8_t ivar_1107;
                  ivar_1107 = (uint8_t)1;
                  mpz_mk_set_ui(ivar_1115, (uint64_t)ivar_1092);
                  mpz_add_ui(ivar_1115, ivar_1115, (uint64_t)ivar_1107);
                  uint64_t ivar_1110;
                  //copying to uint64 from mpz;
                  ivar_1110 = (uint64_t)mpz_get_ui(ivar_1115);
                  mpz_clear(ivar_1115);
                  uint8_t ivar_1114;
                  ivar_1114 = (uint8_t)0;
                  uint32_t ivar_1111;
                  //copying to uint32 from uint8;
                  ivar_1111 = (uint32_t)ivar_1114;
                  ivar_1101 = (sigmatopdown__ent_adt_t)sigmatopdown__good((uint64_t)ivar_1110, (uint32_t)ivar_1111);
                  uint64_t ivar_1103;
                  uint8_t ivar_1117;
                  ivar_1117 = (uint8_t)1;
                  ivar_1103 = (uint64_t)(ivar_20 - ivar_1117);
                  sigmatopdown_record_104_t ivar_1134;
                  sigmatopdown_array_66_t ivar_1120;
                  ivar_1120 = (sigmatopdown_array_66_t)ivar_9->scaf;
                  ivar_1120->count++;
                  sigmatopdown_record_104_t ivar_1131;
                  sigmatopdown_array_66_t ivar_1133;
                  ivar_1133 = NULL;
                  ivar_1131 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_1133);
                  if (ivar_1133 != NULL) ivar_1133->count--;
                  sigmatopdown_array_66_t ivar_1132;
                  sigmatopdown_array_65_t ivar_1121;
                  ivar_1121 = (sigmatopdown_array_65_t)ivar_1120->elems[ivar_31];
                  ivar_1121->count++;
                  sigmatopdown_array_66_t ivar_1128;
                  sigmatopdown_array_65_t ivar_1130;
                  ivar_1130 = NULL;
                  ivar_1128 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_1120, ivar_31, ivar_1130);
                  if (ivar_1130 != NULL) ivar_1130->count--;
                  sigmatopdown_array_65_t ivar_1129;
                  sigmatopdown_array_65_t ivar_1124;
                  sigmatopdown__ent_adt_t ivar_1126;
                  ivar_1126 = NULL;
                  ivar_1124 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_1121, ivar_35, ivar_1126);
                  if (ivar_1126 != NULL) ivar_1126->count--;
                  ivar_1129 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_1124, ivar_35, ivar_1101);
                  if (ivar_1101 != NULL) ivar_1101->count--;
                  ivar_1132 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_1128, ivar_31, ivar_1129);
                  if (ivar_1129 != NULL) ivar_1129->count--;
                  ivar_1134 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_1131, ivar_1132);
                  if (ivar_1132 != NULL) ivar_1132->count--;
                  sigmatopdown_record_104_t ivar_1139;
                  sigmatopdown_record_104_t ivar_1136;
                  sigmatopdown__ent_adt_t ivar_1138;
                  ivar_1138 = NULL;
                  ivar_1136 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_1134, ivar_1138);
                  if (ivar_1138 != NULL) ivar_1138->count--;
                  ivar_1139 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_1136, ivar_39);
                  if (ivar_39 != NULL) ivar_39->count--;
                  result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_1139, ivar_1103);
} else {
                 
                  bool_t ivar_1185;
                  ivar_1185 = (bool_t)r_sigmatopdown__pendingp((sigmatopdown__ent_adt_t)ivar_1034);
                  if (ivar_1185){           
                   release_sigmatopdown__ent_adt(ivar_39);
                   sigmatopdown__ent_adt_t ivar_1149;
                   ivar_1149 = (sigmatopdown__ent_adt_t)sigmatopdown__push((uint32_t)ivar_31, (uint8_t)ivar_1030);
                   uint64_t ivar_1150;
                   uint8_t ivar_1158;
                   ivar_1158 = (uint8_t)1;
                   ivar_1150 = (uint64_t)(ivar_20 + ivar_1158);
                   sigmatopdown_record_104_t ivar_1165;
                   sigmatopdown_record_104_t ivar_1162;
                   sigmatopdown__ent_adt_t ivar_1164;
                   ivar_1164 = NULL;
                   ivar_1162 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_9, ivar_1164);
                   if (ivar_1164 != NULL) ivar_1164->count--;
                   ivar_1165 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_1162, ivar_1149);
                   if (ivar_1149 != NULL) ivar_1149->count--;
                   sigmatopdown_record_104_t ivar_1169;
                   ivar_1169 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_1165, ivar_1150);
                   sigmatopdown_array_66_t ivar_1170;
                   ivar_1170 = (sigmatopdown_array_66_t)ivar_1169->scaf;
                   ivar_1170->count++;
                   sigmatopdown_record_104_t ivar_1181;
                   sigmatopdown_array_66_t ivar_1183;
                   ivar_1183 = NULL;
                   ivar_1181 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_1169, ivar_1183);
                   if (ivar_1183 != NULL) ivar_1183->count--;
                   sigmatopdown_array_66_t ivar_1182;
                   sigmatopdown_array_65_t ivar_1171;
                   ivar_1171 = (sigmatopdown_array_65_t)ivar_1170->elems[ivar_31];
                   ivar_1171->count++;
                   sigmatopdown_array_66_t ivar_1178;
                   sigmatopdown_array_65_t ivar_1180;
                   ivar_1180 = NULL;
                   ivar_1178 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_1170, ivar_31, ivar_1180);
                   if (ivar_1180 != NULL) ivar_1180->count--;
                   sigmatopdown_array_65_t ivar_1179;
                   sigmatopdown_array_65_t ivar_1174;
                   sigmatopdown__ent_adt_t ivar_1176;
                   ivar_1176 = NULL;
                   ivar_1174 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_1171, ivar_1030, ivar_1176);
                   if (ivar_1176 != NULL) ivar_1176->count--;
                   ivar_1179 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_1174, ivar_1030, ivar_17);
                   if (ivar_17 != NULL) ivar_17->count--;
                   ivar_1182 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_1178, ivar_31, ivar_1179);
                   if (ivar_1179 != NULL) ivar_1179->count--;
                   result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_1181, ivar_1182);
                   if (ivar_1182 != NULL) ivar_1182->count--;
} else {
                  
                   release_sigmatopdown__ent_adt(ivar_17);
                   sigmatopdown__ent_adt_t ivar_1190;
                   ivar_1190 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
                   if (ivar_1190 != NULL) ivar_1190->count++;
                   uint64_t ivar_1191;
                   uint8_t ivar_1195;
                   ivar_1195 = (uint8_t)1;
                   ivar_1191 = (uint64_t)(ivar_20 - ivar_1195);
                   bool_t ivar_1193;
                   ivar_1193 = (bool_t) true;
                   sigmatopdown_record_104_t ivar_1212;
                   sigmatopdown_array_66_t ivar_1198;
                   ivar_1198 = (sigmatopdown_array_66_t)ivar_9->scaf;
                   ivar_1198->count++;
                   sigmatopdown_record_104_t ivar_1209;
                   sigmatopdown_array_66_t ivar_1211;
                   ivar_1211 = NULL;
                   ivar_1209 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_1211);
                   if (ivar_1211 != NULL) ivar_1211->count--;
                   sigmatopdown_array_66_t ivar_1210;
                   sigmatopdown_array_65_t ivar_1199;
                   ivar_1199 = (sigmatopdown_array_65_t)ivar_1198->elems[ivar_31];
                   ivar_1199->count++;
                   sigmatopdown_array_66_t ivar_1206;
                   sigmatopdown_array_65_t ivar_1208;
                   ivar_1208 = NULL;
                   ivar_1206 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_1198, ivar_31, ivar_1208);
                   if (ivar_1208 != NULL) ivar_1208->count--;
                   sigmatopdown_array_65_t ivar_1207;
                   sigmatopdown_array_65_t ivar_1202;
                   sigmatopdown__ent_adt_t ivar_1204;
                   ivar_1204 = NULL;
                   ivar_1202 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_1199, ivar_35, ivar_1204);
                   if (ivar_1204 != NULL) ivar_1204->count--;
                   ivar_1207 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_1202, ivar_35, ivar_1190);
                   if (ivar_1190 != NULL) ivar_1190->count--;
                   ivar_1210 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_1206, ivar_31, ivar_1207);
                   if (ivar_1207 != NULL) ivar_1207->count--;
                   ivar_1212 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_1209, ivar_1210);
                   if (ivar_1210 != NULL) ivar_1210->count--;
                   sigmatopdown_record_104_t ivar_1216;
                   ivar_1216 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_1212, ivar_1191);
                   sigmatopdown_record_104_t ivar_1221;
                   sigmatopdown_record_104_t ivar_1218;
                   sigmatopdown__ent_adt_t ivar_1220;
                   ivar_1220 = NULL;
                   ivar_1218 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_1216, ivar_1220);
                   if (ivar_1220 != NULL) ivar_1220->count--;
                   ivar_1221 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_1218, ivar_39);
                   if (ivar_39 != NULL) ivar_39->count--;
                   result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_lflag(ivar_1221, ivar_1193);
};
};
};
} else {
               
                uint8_t ivar_1230;
                ivar_1230 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_49);
                sigmatopdown__ent_adt_t ivar_1234;
                sigmatopdown_array_65_t ivar_1237;
                ivar_1237 = (sigmatopdown_array_65_t)ivar_12->elems[ivar_31];
                ivar_1237->count++;
                release_sigmatopdown_array_66(ivar_12);
                ivar_1234 = (sigmatopdown__ent_adt_t)ivar_1237->elems[ivar_1230];
                ivar_1234->count++;
                release_sigmatopdown_array_65(ivar_1237);
                bool_t ivar_1292;
                ivar_1234->count++;
                ivar_1292 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_1234);
                if (ivar_1292){         
                 release_sigmatopdown__ent_adt(ivar_17);
                 uint64_t ivar_1244;
                 ivar_1244 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_1234);
                 sigmatopdown__ent_adt_t ivar_1249;
                 mpz_ptr_t ivar_1263;
                 uint8_t ivar_1255;
                 ivar_1255 = (uint8_t)1;
                 mpz_mk_set_ui(ivar_1263, (uint64_t)ivar_1244);
                 mpz_add_ui(ivar_1263, ivar_1263, (uint64_t)ivar_1255);
                 uint64_t ivar_1258;
                 //copying to uint64 from mpz;
                 ivar_1258 = (uint64_t)mpz_get_ui(ivar_1263);
                 mpz_clear(ivar_1263);
                 uint8_t ivar_1262;
                 ivar_1262 = (uint8_t)0;
                 uint32_t ivar_1259;
                 //copying to uint32 from uint8;
                 ivar_1259 = (uint32_t)ivar_1262;
                 ivar_1249 = (sigmatopdown__ent_adt_t)sigmatopdown__good((uint64_t)ivar_1258, (uint32_t)ivar_1259);
                 uint64_t ivar_1251;
                 uint8_t ivar_1265;
                 ivar_1265 = (uint8_t)1;
                 ivar_1251 = (uint64_t)(ivar_20 - ivar_1265);
                 sigmatopdown_record_104_t ivar_1282;
                 sigmatopdown_array_66_t ivar_1268;
                 ivar_1268 = (sigmatopdown_array_66_t)ivar_9->scaf;
                 ivar_1268->count++;
                 sigmatopdown_record_104_t ivar_1279;
                 sigmatopdown_array_66_t ivar_1281;
                 ivar_1281 = NULL;
                 ivar_1279 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_1281);
                 if (ivar_1281 != NULL) ivar_1281->count--;
                 sigmatopdown_array_66_t ivar_1280;
                 sigmatopdown_array_65_t ivar_1269;
                 ivar_1269 = (sigmatopdown_array_65_t)ivar_1268->elems[ivar_31];
                 ivar_1269->count++;
                 sigmatopdown_array_66_t ivar_1276;
                 sigmatopdown_array_65_t ivar_1278;
                 ivar_1278 = NULL;
                 ivar_1276 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_1268, ivar_31, ivar_1278);
                 if (ivar_1278 != NULL) ivar_1278->count--;
                 sigmatopdown_array_65_t ivar_1277;
                 sigmatopdown_array_65_t ivar_1272;
                 sigmatopdown__ent_adt_t ivar_1274;
                 ivar_1274 = NULL;
                 ivar_1272 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_1269, ivar_35, ivar_1274);
                 if (ivar_1274 != NULL) ivar_1274->count--;
                 ivar_1277 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_1272, ivar_35, ivar_1249);
                 if (ivar_1249 != NULL) ivar_1249->count--;
                 ivar_1280 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_1276, ivar_31, ivar_1277);
                 if (ivar_1277 != NULL) ivar_1277->count--;
                 ivar_1282 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_1279, ivar_1280);
                 if (ivar_1280 != NULL) ivar_1280->count--;
                 sigmatopdown_record_104_t ivar_1287;
                 sigmatopdown_record_104_t ivar_1284;
                 sigmatopdown__ent_adt_t ivar_1286;
                 ivar_1286 = NULL;
                 ivar_1284 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_1282, ivar_1286);
                 if (ivar_1286 != NULL) ivar_1286->count--;
                 ivar_1287 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_1284, ivar_39);
                 if (ivar_39 != NULL) ivar_39->count--;
                 result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_1287, ivar_1251);
} else {
                
                 bool_t ivar_1344;
                 ivar_1234->count++;
                 ivar_1344 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_1234);
                 if (ivar_1344){          
                  release_sigmatopdown__ent_adt(ivar_17);
                  uint64_t ivar_1296;
                  ivar_1234->count++;
                  ivar_1296 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_1234);
                  sigmatopdown__ent_adt_t ivar_1305;
                  mpz_ptr_t ivar_1315;
                  uint8_t ivar_1310;
                  ivar_1310 = (uint8_t)1;
                  mpz_mk_set_ui(ivar_1315, (uint64_t)ivar_1296);
                  mpz_add_ui(ivar_1315, ivar_1315, (uint64_t)ivar_1310);
                  uint64_t ivar_1313;
                  //copying to uint64 from mpz;
                  ivar_1313 = (uint64_t)mpz_get_ui(ivar_1315);
                  mpz_clear(ivar_1315);
                  ivar_1305 = (sigmatopdown__ent_adt_t)sigmatopdown__fail((uint64_t)ivar_1313);
                  uint64_t ivar_1307;
                  uint8_t ivar_1317;
                  ivar_1317 = (uint8_t)1;
                  ivar_1307 = (uint64_t)(ivar_20 - ivar_1317);
                  sigmatopdown_record_104_t ivar_1334;
                  sigmatopdown_array_66_t ivar_1320;
                  ivar_1320 = (sigmatopdown_array_66_t)ivar_9->scaf;
                  ivar_1320->count++;
                  sigmatopdown_record_104_t ivar_1331;
                  sigmatopdown_array_66_t ivar_1333;
                  ivar_1333 = NULL;
                  ivar_1331 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_1333);
                  if (ivar_1333 != NULL) ivar_1333->count--;
                  sigmatopdown_array_66_t ivar_1332;
                  sigmatopdown_array_65_t ivar_1321;
                  ivar_1321 = (sigmatopdown_array_65_t)ivar_1320->elems[ivar_31];
                  ivar_1321->count++;
                  sigmatopdown_array_66_t ivar_1328;
                  sigmatopdown_array_65_t ivar_1330;
                  ivar_1330 = NULL;
                  ivar_1328 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_1320, ivar_31, ivar_1330);
                  if (ivar_1330 != NULL) ivar_1330->count--;
                  sigmatopdown_array_65_t ivar_1329;
                  sigmatopdown_array_65_t ivar_1324;
                  sigmatopdown__ent_adt_t ivar_1326;
                  ivar_1326 = NULL;
                  ivar_1324 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_1321, ivar_35, ivar_1326);
                  if (ivar_1326 != NULL) ivar_1326->count--;
                  ivar_1329 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_1324, ivar_35, ivar_1305);
                  if (ivar_1305 != NULL) ivar_1305->count--;
                  ivar_1332 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_1328, ivar_31, ivar_1329);
                  if (ivar_1329 != NULL) ivar_1329->count--;
                  ivar_1334 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_1331, ivar_1332);
                  if (ivar_1332 != NULL) ivar_1332->count--;
                  sigmatopdown_record_104_t ivar_1339;
                  sigmatopdown_record_104_t ivar_1336;
                  sigmatopdown__ent_adt_t ivar_1338;
                  ivar_1338 = NULL;
                  ivar_1336 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_1334, ivar_1338);
                  if (ivar_1338 != NULL) ivar_1338->count--;
                  ivar_1339 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_1336, ivar_39);
                  if (ivar_39 != NULL) ivar_39->count--;
                  result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_1339, ivar_1307);
} else {
                 
                  bool_t ivar_1385;
                  ivar_1385 = (bool_t)r_sigmatopdown__pendingp((sigmatopdown__ent_adt_t)ivar_1234);
                  if (ivar_1385){           
                   release_sigmatopdown__ent_adt(ivar_39);
                   sigmatopdown__ent_adt_t ivar_1349;
                   ivar_1349 = (sigmatopdown__ent_adt_t)sigmatopdown__push((uint32_t)ivar_31, (uint8_t)ivar_1230);
                   uint64_t ivar_1350;
                   uint8_t ivar_1358;
                   ivar_1358 = (uint8_t)1;
                   ivar_1350 = (uint64_t)(ivar_20 + ivar_1358);
                   sigmatopdown_record_104_t ivar_1365;
                   sigmatopdown_record_104_t ivar_1362;
                   sigmatopdown__ent_adt_t ivar_1364;
                   ivar_1364 = NULL;
                   ivar_1362 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_9, ivar_1364);
                   if (ivar_1364 != NULL) ivar_1364->count--;
                   ivar_1365 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_1362, ivar_1349);
                   if (ivar_1349 != NULL) ivar_1349->count--;
                   sigmatopdown_record_104_t ivar_1369;
                   ivar_1369 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_1365, ivar_1350);
                   sigmatopdown_array_66_t ivar_1370;
                   ivar_1370 = (sigmatopdown_array_66_t)ivar_1369->scaf;
                   ivar_1370->count++;
                   sigmatopdown_record_104_t ivar_1381;
                   sigmatopdown_array_66_t ivar_1383;
                   ivar_1383 = NULL;
                   ivar_1381 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_1369, ivar_1383);
                   if (ivar_1383 != NULL) ivar_1383->count--;
                   sigmatopdown_array_66_t ivar_1382;
                   sigmatopdown_array_65_t ivar_1371;
                   ivar_1371 = (sigmatopdown_array_65_t)ivar_1370->elems[ivar_31];
                   ivar_1371->count++;
                   sigmatopdown_array_66_t ivar_1378;
                   sigmatopdown_array_65_t ivar_1380;
                   ivar_1380 = NULL;
                   ivar_1378 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_1370, ivar_31, ivar_1380);
                   if (ivar_1380 != NULL) ivar_1380->count--;
                   sigmatopdown_array_65_t ivar_1379;
                   sigmatopdown_array_65_t ivar_1374;
                   sigmatopdown__ent_adt_t ivar_1376;
                   ivar_1376 = NULL;
                   ivar_1374 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_1371, ivar_1230, ivar_1376);
                   if (ivar_1376 != NULL) ivar_1376->count--;
                   ivar_1379 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_1374, ivar_1230, ivar_17);
                   if (ivar_17 != NULL) ivar_17->count--;
                   ivar_1382 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_1378, ivar_31, ivar_1379);
                   if (ivar_1379 != NULL) ivar_1379->count--;
                   result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_1381, ivar_1382);
                   if (ivar_1382 != NULL) ivar_1382->count--;
} else {
                  
                   release_sigmatopdown__ent_adt(ivar_17);
                   sigmatopdown__ent_adt_t ivar_1390;
                   ivar_1390 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
                   if (ivar_1390 != NULL) ivar_1390->count++;
                   uint64_t ivar_1391;
                   uint8_t ivar_1395;
                   ivar_1395 = (uint8_t)1;
                   ivar_1391 = (uint64_t)(ivar_20 - ivar_1395);
                   bool_t ivar_1393;
                   ivar_1393 = (bool_t) true;
                   sigmatopdown_record_104_t ivar_1412;
                   sigmatopdown_array_66_t ivar_1398;
                   ivar_1398 = (sigmatopdown_array_66_t)ivar_9->scaf;
                   ivar_1398->count++;
                   sigmatopdown_record_104_t ivar_1409;
                   sigmatopdown_array_66_t ivar_1411;
                   ivar_1411 = NULL;
                   ivar_1409 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_9, ivar_1411);
                   if (ivar_1411 != NULL) ivar_1411->count--;
                   sigmatopdown_array_66_t ivar_1410;
                   sigmatopdown_array_65_t ivar_1399;
                   ivar_1399 = (sigmatopdown_array_65_t)ivar_1398->elems[ivar_31];
                   ivar_1399->count++;
                   sigmatopdown_array_66_t ivar_1406;
                   sigmatopdown_array_65_t ivar_1408;
                   ivar_1408 = NULL;
                   ivar_1406 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_1398, ivar_31, ivar_1408);
                   if (ivar_1408 != NULL) ivar_1408->count--;
                   sigmatopdown_array_65_t ivar_1407;
                   sigmatopdown_array_65_t ivar_1402;
                   sigmatopdown__ent_adt_t ivar_1404;
                   ivar_1404 = NULL;
                   ivar_1402 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_1399, ivar_35, ivar_1404);
                   if (ivar_1404 != NULL) ivar_1404->count--;
                   ivar_1407 = (sigmatopdown_array_65_t)update_sigmatopdown_array_65(ivar_1402, ivar_35, ivar_1390);
                   if (ivar_1390 != NULL) ivar_1390->count--;
                   ivar_1410 = (sigmatopdown_array_66_t)update_sigmatopdown_array_66(ivar_1406, ivar_31, ivar_1407);
                   if (ivar_1407 != NULL) ivar_1407->count--;
                   ivar_1412 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_scaf(ivar_1409, ivar_1410);
                   if (ivar_1410 != NULL) ivar_1410->count--;
                   sigmatopdown_record_104_t ivar_1416;
                   ivar_1416 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_depth(ivar_1412, ivar_1391);
                   sigmatopdown_record_104_t ivar_1421;
                   sigmatopdown_record_104_t ivar_1418;
                   sigmatopdown__ent_adt_t ivar_1420;
                   ivar_1420 = NULL;
                   ivar_1418 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_1416, ivar_1420);
                   if (ivar_1420 != NULL) ivar_1420->count--;
                   ivar_1421 = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_stack(ivar_1418, ivar_39);
                   if (ivar_39 != NULL) ivar_39->count--;
                   result = (sigmatopdown_record_104_t)update_sigmatopdown_record_104_lflag(ivar_1421, ivar_1393);
};
};
};
};
};
};
};
};
};
};
};

        return result;
}

sigmatopdown_closure_106_t new_sigmatopdown_closure_106(void){
        static struct sigmatopdown_funtype_105_ftbl_s ftbl = {.fptr = (sigmatopdown_record_104_t (*)(sigmatopdown_funtype_105_t, sigmatopdown_record_104_t))&f_sigmatopdown_closure_106, .mptr = (sigmatopdown_record_104_t (*)(sigmatopdown_funtype_105_t, sigmatopdown_record_104_t))&m_sigmatopdown_closure_106, .rptr =  (void (*)(sigmatopdown_funtype_105_t))&release_sigmatopdown_closure_106, .cptr = (sigmatopdown_funtype_105_t (*)(sigmatopdown_funtype_105_t))&copy_sigmatopdown_closure_106};
        sigmatopdown_closure_106_t tmp = (sigmatopdown_closure_106_t) safe_malloc(sizeof(struct sigmatopdown_closure_106_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_106(sigmatopdown_funtype_105_t closure){
        sigmatopdown_closure_106_t x = (sigmatopdown_closure_106_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_array_86(x->fvar_2);
         release_sigmatopdown__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_106_t copy_sigmatopdown_closure_106(sigmatopdown_closure_106_t x){
        sigmatopdown_closure_106_t y = new_sigmatopdown_closure_106();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sigmatopdown_funtype_105_htbl_t new_htbl = (sigmatopdown_funtype_105_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_105_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_105_hashentry_t * new_data = (sigmatopdown_funtype_105_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_105_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_105_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatopdown_array_107_t new_sigmatopdown_array_107(uint32_t size){
        sigmatopdown_array_107_t tmp = (sigmatopdown_array_107_t) safe_malloc(sizeof(struct sigmatopdown_array_107_s) + (size * sizeof(sigmatopdown__ent_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_sigmatopdown_array_107(sigmatopdown_array_107_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_sigmatopdown__ent_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_sigmatopdown_array_107_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_array_107((sigmatopdown_array_107_t)x);
}

sigmatopdown_array_107_t copy_sigmatopdown_array_107(sigmatopdown_array_107_t x){
        sigmatopdown_array_107_t tmp = new_sigmatopdown_array_107(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_sigmatopdown_array_107(sigmatopdown_array_107_t x, sigmatopdown_array_107_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_sigmatopdown__ent_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_sigmatopdown_array_107(sigmatopdown_array_107_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_sigmatopdown__ent_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatopdown_array_107_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatopdown_array_107((sigmatopdown_array_107_t)x, (sigmatopdown_array_107_t)y);
}

char * json_sigmatopdown_array_107_ptr(pointer_t x, type_actual_t T){
        return json_sigmatopdown_array_107((sigmatopdown_array_107_t)x);
}

actual_sigmatopdown_array_107_t actual_sigmatopdown_array_107(){
        actual_sigmatopdown_array_107_t new = (actual_sigmatopdown_array_107_t)safe_malloc(sizeof(struct actual_sigmatopdown_array_107_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_array_107_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_array_107_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_array_107_ptr);
 

 
        return new;
 };

sigmatopdown_array_107_t update_sigmatopdown_array_107(sigmatopdown_array_107_t x, uint32_t i, sigmatopdown__ent_adt_t v){
         sigmatopdown_array_107_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_sigmatopdown_array_107(x);
                      x->count--;};
        sigmatopdown__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

sigmatopdown_array_107_t upgrade_sigmatopdown_array_107(sigmatopdown_array_107_t x, uint32_t i, sigmatopdown__ent_adt_t v){
         sigmatopdown_array_107_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatopdown_array_107_s) + (newmax * sizeof(sigmatopdown__ent_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatopdown_array_107(x);} else {y = copy_sigmatopdown_array_107(x);
                      x->count--;};
        sigmatopdown__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}



void release_sigmatopdown_funtype_108(sigmatopdown_funtype_108_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_108_t copy_sigmatopdown_funtype_108(sigmatopdown_funtype_108_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdown_funtype_108(sigmatopdown_funtype_108_t x, sigmatopdown_funtype_108_t y){
        return false;}

char* json_sigmatopdown_funtype_108(sigmatopdown_funtype_108_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"sigmatopdown_funtype_108\""); return result;}


ordstruct_adt__ordstruct_adt_t f_sigmatopdown_closure_109(struct sigmatopdown_closure_109_s * closure, sigmatopdown_record_104_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_sigmatopdown_closure_109(bvar, closure->fvar_1); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_sigmatopdown_closure_109(struct sigmatopdown_closure_109_s * closure, sigmatopdown_record_104_t bvar){
        return h_sigmatopdown_closure_109(bvar, closure->fvar_1);}

extern ordstruct_adt__ordstruct_adt_t h_sigmatopdown_closure_109(sigmatopdown_record_104_t ivar_8, uint32_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        uint64_t ivar_45;
        sigmatopdown_array_66_t ivar_25;
        ivar_25 = (sigmatopdown_array_66_t)ivar_8->scaf;
        ivar_25->count++;
        sigmatopdown_funtype_59_t ivar_27;
        sigmatopdown_closure_110_t cl33602;
        cl33602 = new_sigmatopdown_closure_110();
        ivar_27 = (sigmatopdown_funtype_59_t)cl33602;
        ivar_45 = (uint64_t)sigmatopdown__scafcount((uint32_t)ivar_1, (sigmatopdown_array_66_t)ivar_25, (sigmatopdown_funtype_59_t)ivar_27, (uint32_t)ivar_1);
        mpz_ptr_t ivar_42;
        //copying to mpz from uint64;
        mpz_mk_set_ui(ivar_42, ivar_45);
        mpz_ptr_t ivar_43;
        uint64_t ivar_30;
        uint32_t ivar_32;
        uint8_t ivar_35;
        ivar_35 = (uint8_t)1;
        ivar_32 = (uint32_t)(ivar_1 + ivar_35);
        uint8_t ivar_33;
        ivar_33 = (uint8_t)sigmatopdown__num_non_terminals();
        ivar_30 = (uint64_t)((uint64_t)ivar_32 * (uint64_t)ivar_33);
        uint64_t ivar_31;
        ivar_31 = (uint64_t)ivar_8->depth;
        release_sigmatopdown_record_104(ivar_8);
        mpz_mk_set_ui(ivar_43, (uint64_t)ivar_30);
        mpz_sub_ui(ivar_43, ivar_43, (uint64_t)ivar_31);
        result = (ordstruct_adt__ordstruct_adt_t)lex2__lex2((mpz_ptr_t)ivar_42, (mpz_ptr_t)ivar_43);

        return result;
}

sigmatopdown_closure_109_t new_sigmatopdown_closure_109(void){
        static struct sigmatopdown_funtype_108_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatopdown_funtype_108_t, sigmatopdown_record_104_t))&f_sigmatopdown_closure_109, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatopdown_funtype_108_t, sigmatopdown_record_104_t))&m_sigmatopdown_closure_109, .rptr =  (void (*)(sigmatopdown_funtype_108_t))&release_sigmatopdown_closure_109, .cptr = (sigmatopdown_funtype_108_t (*)(sigmatopdown_funtype_108_t))&copy_sigmatopdown_closure_109};
        sigmatopdown_closure_109_t tmp = (sigmatopdown_closure_109_t) safe_malloc(sizeof(struct sigmatopdown_closure_109_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_109(sigmatopdown_funtype_108_t closure){
        sigmatopdown_closure_109_t x = (sigmatopdown_closure_109_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_109_t copy_sigmatopdown_closure_109(sigmatopdown_closure_109_t x){
        sigmatopdown_closure_109_t y = new_sigmatopdown_closure_109();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        if (x->htbl != NULL){
            sigmatopdown_funtype_108_htbl_t new_htbl = (sigmatopdown_funtype_108_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_108_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_108_hashentry_t * new_data = (sigmatopdown_funtype_108_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_108_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_108_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatopdown_closure_110(struct sigmatopdown_closure_110_s * closure, sigmatopdown__ent_adt_t bvar){
        bool_t result = h_sigmatopdown_closure_110(bvar); 
        return result;}

bool_t m_sigmatopdown_closure_110(struct sigmatopdown_closure_110_s * closure, sigmatopdown__ent_adt_t bvar){
        return h_sigmatopdown_closure_110(bvar);}

extern bool_t h_sigmatopdown_closure_110(sigmatopdown__ent_adt_t ivar_19){
        bool_t result;
        result = (bool_t)sigmatopdown__push_or_pendingp((sigmatopdown__ent_adt_t)ivar_19);

        return result;
}

sigmatopdown_closure_110_t new_sigmatopdown_closure_110(void){
        static struct sigmatopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&f_sigmatopdown_closure_110, .mptr = (bool_t (*)(sigmatopdown_funtype_59_t, sigmatopdown__ent_adt_t))&m_sigmatopdown_closure_110, .rptr =  (void (*)(sigmatopdown_funtype_59_t))&release_sigmatopdown_closure_110, .cptr = (sigmatopdown_funtype_59_t (*)(sigmatopdown_funtype_59_t))&copy_sigmatopdown_closure_110};
        sigmatopdown_closure_110_t tmp = (sigmatopdown_closure_110_t) safe_malloc(sizeof(struct sigmatopdown_closure_110_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_110(sigmatopdown_funtype_59_t closure){
        sigmatopdown_closure_110_t x = (sigmatopdown_closure_110_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_110_t copy_sigmatopdown_closure_110(sigmatopdown_closure_110_t x){
        sigmatopdown_closure_110_t y = new_sigmatopdown_closure_110();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatopdown_funtype_59_htbl_t new_htbl = (sigmatopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_59_hashentry_t * new_data = (sigmatopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatopdown_funtype_111(sigmatopdown_funtype_111_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_111_t copy_sigmatopdown_funtype_111(sigmatopdown_funtype_111_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatopdown_funtype_111(sigmatopdown_funtype_111_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatopdown_funtype_111_hashentry_t data = htbl->data[hashindex];
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

sigmatopdown_funtype_111_t dupdate_sigmatopdown_funtype_111(sigmatopdown_funtype_111_t a, uint8_t i, sigmatopdown__ent_adt_t v){
        sigmatopdown_funtype_111_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatopdown_funtype_111_htbl_t)safe_malloc(sizeof(struct sigmatopdown_funtype_111_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatopdown_funtype_111_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatopdown_funtype_111_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatopdown_funtype_111_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatopdown_funtype_111_hashentry_t * new_data = (sigmatopdown_funtype_111_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatopdown_funtype_111_hashentry_s));
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
                                new_data[new_loc].key = (uint8_t)data[j].key;
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (sigmatopdown__ent_adt_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_sigmatopdown_funtype_111(htbl, i, ihash);
        sigmatopdown_funtype_111_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (sigmatopdown__ent_adt_t)v; htbl->num_entries++;}
            else {sigmatopdown__ent_adt_t tempvalue;tempvalue = (sigmatopdown__ent_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (sigmatopdown__ent_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_sigmatopdown__ent_adt(tempvalue);};
        return a;

}

sigmatopdown_funtype_111_t update_sigmatopdown_funtype_111(sigmatopdown_funtype_111_t a, uint8_t i, sigmatopdown__ent_adt_t v){
        if (a->count == 1){
                return dupdate_sigmatopdown_funtype_111(a, i, v);
            } else {
                sigmatopdown_funtype_111_t x = copy_sigmatopdown_funtype_111(a);
                a->count--;
                return dupdate_sigmatopdown_funtype_111(x, i, v);
            }}

bool_t equal_sigmatopdown_funtype_111(sigmatopdown_funtype_111_t x, sigmatopdown_funtype_111_t y){
        return false;}

char* json_sigmatopdown_funtype_111(sigmatopdown_funtype_111_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"sigmatopdown_funtype_111\""); return result;}


sigmatopdown__ent_adt_t f_sigmatopdown_closure_112(struct sigmatopdown_closure_112_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        sigmatopdown_funtype_111_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatopdown_funtype_111(htbl, bvar, hash);
        sigmatopdown_funtype_111_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            sigmatopdown__ent_adt_t result;
            result = (sigmatopdown__ent_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_sigmatopdown_closure_112(bvar);};

return h_sigmatopdown_closure_112(bvar);}

sigmatopdown__ent_adt_t m_sigmatopdown_closure_112(struct sigmatopdown_closure_112_s * closure, uint8_t bvar){
        return h_sigmatopdown_closure_112(bvar);}

extern sigmatopdown__ent_adt_t h_sigmatopdown_closure_112(uint8_t ivar_9){
        sigmatopdown__ent_adt_t result;
        result = (sigmatopdown__ent_adt_t)sigmatopdown__pending();
        if (result != NULL) result->count++;

        return result;
}

sigmatopdown_closure_112_t new_sigmatopdown_closure_112(void){
        static struct sigmatopdown_funtype_111_ftbl_s ftbl = {.fptr = (sigmatopdown__ent_adt_t (*)(sigmatopdown_funtype_111_t, uint8_t))&f_sigmatopdown_closure_112, .mptr = (sigmatopdown__ent_adt_t (*)(sigmatopdown_funtype_111_t, uint8_t))&m_sigmatopdown_closure_112, .rptr =  (void (*)(sigmatopdown_funtype_111_t))&release_sigmatopdown_closure_112, .cptr = (sigmatopdown_funtype_111_t (*)(sigmatopdown_funtype_111_t))&copy_sigmatopdown_closure_112};
        sigmatopdown_closure_112_t tmp = (sigmatopdown_closure_112_t) safe_malloc(sizeof(struct sigmatopdown_closure_112_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_112(sigmatopdown_funtype_111_t closure){
        sigmatopdown_closure_112_t x = (sigmatopdown_closure_112_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_112_t copy_sigmatopdown_closure_112(sigmatopdown_closure_112_t x){
        sigmatopdown_closure_112_t y = new_sigmatopdown_closure_112();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatopdown_funtype_111_htbl_t new_htbl = (sigmatopdown_funtype_111_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_111_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_111_hashentry_t * new_data = (sigmatopdown_funtype_111_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_111_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_111_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatopdown_funtype_113(sigmatopdown_funtype_113_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdown_funtype_113_t copy_sigmatopdown_funtype_113(sigmatopdown_funtype_113_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatopdown_funtype_113(sigmatopdown_funtype_113_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatopdown_funtype_113_hashentry_t data = htbl->data[hashindex];
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

sigmatopdown_funtype_113_t dupdate_sigmatopdown_funtype_113(sigmatopdown_funtype_113_t a, uint32_t i, sigmatopdown_funtype_111_t v){
        sigmatopdown_funtype_113_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatopdown_funtype_113_htbl_t)safe_malloc(sizeof(struct sigmatopdown_funtype_113_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatopdown_funtype_113_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatopdown_funtype_113_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatopdown_funtype_113_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatopdown_funtype_113_hashentry_t * new_data = (sigmatopdown_funtype_113_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatopdown_funtype_113_hashentry_s));
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
                                new_data[new_loc].value = (sigmatopdown_funtype_111_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_sigmatopdown_funtype_113(htbl, i, ihash);
        sigmatopdown_funtype_113_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (sigmatopdown_funtype_111_t)v; htbl->num_entries++;}
            else {sigmatopdown_funtype_111_t tempvalue;tempvalue = (sigmatopdown_funtype_111_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (sigmatopdown_funtype_111_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_sigmatopdown_funtype_111(tempvalue);};
        return a;

}

sigmatopdown_funtype_113_t update_sigmatopdown_funtype_113(sigmatopdown_funtype_113_t a, uint32_t i, sigmatopdown_funtype_111_t v){
        if (a->count == 1){
                return dupdate_sigmatopdown_funtype_113(a, i, v);
            } else {
                sigmatopdown_funtype_113_t x = copy_sigmatopdown_funtype_113(a);
                a->count--;
                return dupdate_sigmatopdown_funtype_113(x, i, v);
            }}

bool_t equal_sigmatopdown_funtype_113(sigmatopdown_funtype_113_t x, sigmatopdown_funtype_113_t y){
        return false;}

char* json_sigmatopdown_funtype_113(sigmatopdown_funtype_113_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"sigmatopdown_funtype_113\""); return result;}


sigmatopdown_record_114_t new_sigmatopdown_record_114(void){
        sigmatopdown_record_114_t tmp = (sigmatopdown_record_114_t) safe_malloc(sizeof(struct sigmatopdown_record_114_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdown_record_114(sigmatopdown_record_114_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_funtype_113(x->scaf);
         release_sigmatopdown__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdown_record_114_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdown_record_114((sigmatopdown_record_114_t)x);
}

sigmatopdown_record_114_t copy_sigmatopdown_record_114(sigmatopdown_record_114_t x){
        sigmatopdown_record_114_t y = new_sigmatopdown_record_114();
        y->depth = (uint8_t)x->depth;
        y->lflag = (bool_t)x->lflag;
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatopdown_record_114(sigmatopdown_record_114_t x, sigmatopdown_record_114_t y){
        bool_t tmp = true;
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && x->lflag == y->lflag;
        tmp = tmp && equal_sigmatopdown_funtype_113(x->scaf, y->scaf);
        tmp = tmp && equal_sigmatopdown__ent_adt(x->stack, y->stack);
        return tmp;}

char * json_sigmatopdown_record_114(sigmatopdown_record_114_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(17);
         sprintf(fld0, "\"depth\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->depth));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"lflag\" : ");
        tmp[1] = safe_strcat(fld1, json_bool(x->lflag));
        char * fld2 = safe_malloc(16);
         sprintf(fld2, "\"scaf\" : ");
        tmp[2] = safe_strcat(fld2, json_sigmatopdown_funtype_113(x->scaf));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"stack\" : ");
        tmp[3] = safe_strcat(fld3, json_sigmatopdown__ent_adt(x->stack));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdown_record_114_ptr(pointer_t x, pointer_t y, actual_sigmatopdown_record_114_t T){
        return equal_sigmatopdown_record_114((sigmatopdown_record_114_t)x, (sigmatopdown_record_114_t)y);
}

char * json_sigmatopdown_record_114_ptr(pointer_t x, actual_sigmatopdown_record_114_t T){
        return json_sigmatopdown_record_114((sigmatopdown_record_114_t)x);
}

actual_sigmatopdown_record_114_t actual_sigmatopdown_record_114(){
        actual_sigmatopdown_record_114_t new = (actual_sigmatopdown_record_114_t)safe_malloc(sizeof(struct actual_sigmatopdown_record_114_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdown_record_114_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdown_record_114_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdown_record_114_ptr);
 

 
        return new;
 };

sigmatopdown_record_114_t update_sigmatopdown_record_114_depth(sigmatopdown_record_114_t x, uint8_t v){
        sigmatopdown_record_114_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_114(x); x->count--;};
        y->depth = (uint8_t)v;
        return y;}

sigmatopdown_record_114_t update_sigmatopdown_record_114_lflag(sigmatopdown_record_114_t x, bool_t v){
        sigmatopdown_record_114_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdown_record_114(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}

sigmatopdown_record_114_t update_sigmatopdown_record_114_scaf(sigmatopdown_record_114_t x, sigmatopdown_funtype_113_t v){
        sigmatopdown_record_114_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_sigmatopdown_funtype_113(x->scaf);};}
        else {y = copy_sigmatopdown_record_114(x); x->count--; y->scaf->count--;};
        y->scaf = (sigmatopdown_funtype_113_t)v;
        return y;}

sigmatopdown_record_114_t update_sigmatopdown_record_114_stack(sigmatopdown_record_114_t x, sigmatopdown__ent_adt_t v){
        sigmatopdown_record_114_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_sigmatopdown__ent_adt(x->stack);};}
        else {y = copy_sigmatopdown_record_114(x); x->count--; y->stack->count--;};
        y->stack = (sigmatopdown__ent_adt_t)v;
        return y;}




sigmatopdown_funtype_111_t f_sigmatopdown_closure_115(struct sigmatopdown_closure_115_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        sigmatopdown_funtype_113_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatopdown_funtype_113(htbl, bvar, hash);
        sigmatopdown_funtype_113_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            sigmatopdown_funtype_111_t result;
            result = (sigmatopdown_funtype_111_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_sigmatopdown_closure_115(bvar, closure->fvar_1, closure->fvar_2);};

return h_sigmatopdown_closure_115(bvar, closure->fvar_1, closure->fvar_2);}

sigmatopdown_funtype_111_t m_sigmatopdown_closure_115(struct sigmatopdown_closure_115_s * closure, uint32_t bvar){
        return h_sigmatopdown_closure_115(bvar, closure->fvar_1, closure->fvar_2);}

extern sigmatopdown_funtype_111_t h_sigmatopdown_closure_115(uint32_t ivar_22, uint32_t ivar_1, sigmatopdown_funtype_111_t ivar_5){
        sigmatopdown_funtype_111_t result;
        //copying to sigmatopdown_funtype_111 from sigmatopdown_funtype_111;
        result = (sigmatopdown_funtype_111_t)ivar_5;
        if (result != NULL) result->count++;

        return result;
}

sigmatopdown_closure_115_t new_sigmatopdown_closure_115(void){
        static struct sigmatopdown_funtype_113_ftbl_s ftbl = {.fptr = (sigmatopdown_funtype_111_t (*)(sigmatopdown_funtype_113_t, uint32_t))&f_sigmatopdown_closure_115, .mptr = (sigmatopdown_funtype_111_t (*)(sigmatopdown_funtype_113_t, uint32_t))&m_sigmatopdown_closure_115, .rptr =  (void (*)(sigmatopdown_funtype_113_t))&release_sigmatopdown_closure_115, .cptr = (sigmatopdown_funtype_113_t (*)(sigmatopdown_funtype_113_t))&copy_sigmatopdown_closure_115};
        sigmatopdown_closure_115_t tmp = (sigmatopdown_closure_115_t) safe_malloc(sizeof(struct sigmatopdown_closure_115_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdown_closure_115(sigmatopdown_funtype_113_t closure){
        sigmatopdown_closure_115_t x = (sigmatopdown_closure_115_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown_funtype_111(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdown_closure_115_t copy_sigmatopdown_closure_115(sigmatopdown_closure_115_t x){
        sigmatopdown_closure_115_t y = new_sigmatopdown_closure_115();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            sigmatopdown_funtype_113_htbl_t new_htbl = (sigmatopdown_funtype_113_htbl_t) safe_malloc(sizeof(struct sigmatopdown_funtype_113_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdown_funtype_113_hashentry_t * new_data = (sigmatopdown_funtype_113_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdown_funtype_113_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdown_funtype_113_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern uint8_t sigmatopdown__num_non_terminals(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint8_t)255;

        defined = true;};
        
        return result;
}

extern bool_t r_sigmatopdown__failp(sigmatopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatopdown__ent_adt_index;
        release_sigmatopdown__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_sigmatopdown__pendingp(sigmatopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatopdown__ent_adt_index;
        release_sigmatopdown__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_sigmatopdown__loopp(sigmatopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)2;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatopdown__ent_adt_index;
        release_sigmatopdown__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_sigmatopdown__goodp(sigmatopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)3;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatopdown__ent_adt_index;
        release_sigmatopdown__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_sigmatopdown__pushp(sigmatopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)4;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatopdown__ent_adt_index;
        release_sigmatopdown__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern sigmatopdown__ent_adt_t update_sigmatopdown__ent_adt_dep(sigmatopdown__ent_adt_t ivar_1, uint64_t ivar_7){
        sigmatopdown__ent_adt_t  result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->sigmatopdown__ent_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)0;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             sigmatopdown__fail_t ivar_8;
             //copying to sigmatopdown__fail from sigmatopdown__ent_adt;
             ivar_8 = (sigmatopdown__fail_t)ivar_1;
             if (ivar_8 != NULL) ivar_8->count++;
             release_sigmatopdown__ent_adt(ivar_1);
             result = (sigmatopdown__ent_adt_t)update_sigmatopdown__fail_dep(ivar_8, ivar_7);
} else {
        
             sigmatopdown__good_t ivar_12;
             //copying to sigmatopdown__good from sigmatopdown__ent_adt;
             ivar_12 = (sigmatopdown__good_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_sigmatopdown__ent_adt(ivar_1);
             result = (sigmatopdown__ent_adt_t)update_sigmatopdown__good_dep(ivar_12, ivar_7);
};

        
        return result;
}

extern uint64_t sigmatopdown__ent_adt_dep(sigmatopdown__ent_adt_t ivar_1){
        uint64_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->sigmatopdown__ent_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)0;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             sigmatopdown__fail_t ivar_2;
             //copying to sigmatopdown__fail from sigmatopdown__ent_adt;
             ivar_2 = (sigmatopdown__fail_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_sigmatopdown__ent_adt(ivar_1);
             result = (uint64_t)ivar_2->dep;
             release_sigmatopdown__fail(ivar_2);
} else {
        
             sigmatopdown__good_t ivar_6;
             //copying to sigmatopdown__good from sigmatopdown__ent_adt;
             ivar_6 = (sigmatopdown__good_t)ivar_1;
             if (ivar_6 != NULL) ivar_6->count++;
             release_sigmatopdown__ent_adt(ivar_1);
             result = (uint64_t)ivar_6->dep;
             release_sigmatopdown__good(ivar_6);
};

        
        return result;
}

extern sigmatopdown__good_t update_sigmatopdown__ent_adt_span(sigmatopdown__ent_adt_t ivar_1, uint32_t ivar_3){
        sigmatopdown__good_t  result;
        sigmatopdown__good_t ivar_2;
        //copying to sigmatopdown__good from sigmatopdown__ent_adt;
        ivar_2 = (sigmatopdown__good_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_sigmatopdown__ent_adt(ivar_1);
        result = (sigmatopdown__good_t)update_sigmatopdown__good_span(ivar_2, ivar_3);

        
        return result;
}

extern uint32_t sigmatopdown__ent_adt_span(sigmatopdown__ent_adt_t ivar_1){
        uint32_t  result;
        sigmatopdown__good_t ivar_2;
        //copying to sigmatopdown__good from sigmatopdown__ent_adt;
        ivar_2 = (sigmatopdown__good_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_sigmatopdown__ent_adt(ivar_1);
        result = (uint32_t)ivar_2->span;
        release_sigmatopdown__good(ivar_2);

        
        return result;
}

extern sigmatopdown__push_t update_sigmatopdown__ent_adt_pos(sigmatopdown__ent_adt_t ivar_1, uint32_t ivar_3){
        sigmatopdown__push_t  result;
        sigmatopdown__push_t ivar_2;
        //copying to sigmatopdown__push from sigmatopdown__ent_adt;
        ivar_2 = (sigmatopdown__push_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_sigmatopdown__ent_adt(ivar_1);
        result = (sigmatopdown__push_t)update_sigmatopdown__push_pos(ivar_2, ivar_3);

        
        return result;
}

extern uint32_t sigmatopdown__ent_adt_pos(sigmatopdown__ent_adt_t ivar_1){
        uint32_t  result;
        sigmatopdown__push_t ivar_2;
        //copying to sigmatopdown__push from sigmatopdown__ent_adt;
        ivar_2 = (sigmatopdown__push_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_sigmatopdown__ent_adt(ivar_1);
        result = (uint32_t)ivar_2->pos;
        release_sigmatopdown__push(ivar_2);

        
        return result;
}

extern sigmatopdown__push_t update_sigmatopdown__ent_adt_nt(sigmatopdown__ent_adt_t ivar_1, uint8_t ivar_3){
        sigmatopdown__push_t  result;
        sigmatopdown__push_t ivar_2;
        //copying to sigmatopdown__push from sigmatopdown__ent_adt;
        ivar_2 = (sigmatopdown__push_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_sigmatopdown__ent_adt(ivar_1);
        result = (sigmatopdown__push_t)update_sigmatopdown__push_nt(ivar_2, ivar_3);

        
        return result;
}

extern uint8_t sigmatopdown__ent_adt_nt(sigmatopdown__ent_adt_t ivar_1){
        uint8_t  result;
        sigmatopdown__push_t ivar_2;
        //copying to sigmatopdown__push from sigmatopdown__ent_adt;
        ivar_2 = (sigmatopdown__push_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_sigmatopdown__ent_adt(ivar_1);
        result = (uint8_t)ivar_2->nt;
        release_sigmatopdown__push(ivar_2);

        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatopdown__fail(uint64_t ivar_2){
        sigmatopdown__ent_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        sigmatopdown__fail_t tmp26608 = new_sigmatopdown__fail();;
        result = (sigmatopdown__ent_adt_t)tmp26608;
        tmp26608->sigmatopdown__ent_adt_index = (uint8_t)ivar_1;
        tmp26608->dep = (uint64_t)ivar_2;

        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatopdown__pending(void){
        sigmatopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        sigmatopdown__ent_adt_t tmp26614 = new_sigmatopdown__ent_adt();;
        result = (sigmatopdown__ent_adt_t)tmp26614;
        tmp26614->sigmatopdown__ent_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatopdown__loop(void){
        sigmatopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)2;
        sigmatopdown__ent_adt_t tmp26620 = new_sigmatopdown__ent_adt();;
        result = (sigmatopdown__ent_adt_t)tmp26620;
        tmp26620->sigmatopdown__ent_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatopdown__good(uint64_t ivar_2, uint32_t ivar_3){
        sigmatopdown__ent_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)3;
        sigmatopdown__good_t tmp26630 = new_sigmatopdown__good();;
        result = (sigmatopdown__ent_adt_t)tmp26630;
        tmp26630->sigmatopdown__ent_adt_index = (uint8_t)ivar_1;
        tmp26630->dep = (uint64_t)ivar_2;
        tmp26630->span = (uint32_t)ivar_3;

        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatopdown__push(uint32_t ivar_2, uint8_t ivar_3){
        sigmatopdown__ent_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)4;
        sigmatopdown__push_t tmp26640 = new_sigmatopdown__push();;
        result = (sigmatopdown__ent_adt_t)tmp26640;
        tmp26640->sigmatopdown__ent_adt_index = (uint8_t)ivar_1;
        tmp26640->pos = (uint32_t)ivar_2;
        tmp26640->nt = (uint8_t)ivar_3;

        
        return result;
}

extern sigmatopdown_funtype_4_t sigmatopdown__ent_ord(void){
        sigmatopdown_funtype_4_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

extern uint8_t sigmatopdown__ord__1(sigmatopdown__ent_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_7;
        ivar_1->count++;
        ivar_7 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_1);
        if (ivar_7){ 
             result = (uint8_t)0;
} else {
        
             bool_t ivar_11;
             ivar_1->count++;
             ivar_11 = (bool_t)r_sigmatopdown__pendingp((sigmatopdown__ent_adt_t)ivar_1);
             if (ivar_11){  
           release_sigmatopdown__ent_adt(ivar_1);
           result = (uint8_t)1;
} else {
             
           bool_t ivar_15;
           ivar_1->count++;
           ivar_15 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_1);
           if (ivar_15){   
           release_sigmatopdown__ent_adt(ivar_1);
           result = (uint8_t)2;
} else {
           
           bool_t ivar_27;
           ivar_1->count++;
           ivar_27 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_1);
           if (ivar_27){    
            result = (uint8_t)3;
} else {
           
            result = (uint8_t)4;
};
};
};
};

        
        return result;
}

extern bool_t sigmatopdown__subterm__1(sigmatopdown__ent_adt_t ivar_1, sigmatopdown__ent_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) equal_sigmatopdown__ent_adt(ivar_1, ivar_2);

        
        return result;
}

extern bool_t sigmatopdown__doublelessp__1(sigmatopdown__ent_adt_t ivar_1, sigmatopdown__ent_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) false;

        
        return result;
}

extern sigmatopdown_funtype_5_t sigmatopdown__reduce_nat__1(sigmatopdown_funtype_6_t ivar_1, mpz_ptr_t ivar_3, mpz_ptr_t ivar_4, sigmatopdown_funtype_8_t ivar_5, sigmatopdown_funtype_10_t ivar_7){
        sigmatopdown_funtype_5_t  result;
        sigmatopdown_closure_11_t cl26718;
        cl26718 = new_sigmatopdown_closure_11();
        cl26718->fvar_1 = (sigmatopdown_funtype_8_t)ivar_5;
        if (cl26718->fvar_1 != NULL) cl26718->fvar_1->count++;
        cl26718->fvar_2 = (sigmatopdown_funtype_10_t)ivar_7;
        if (cl26718->fvar_2 != NULL) cl26718->fvar_2->count++;
        mpz_set(cl26718->fvar_3, ivar_4);
        mpz_set(cl26718->fvar_4, ivar_3);
        cl26718->fvar_5 = (sigmatopdown_funtype_6_t)ivar_1;
        if (cl26718->fvar_5 != NULL) cl26718->fvar_5->count++;
        release_sigmatopdown_funtype_8(ivar_5);
        release_sigmatopdown_funtype_10(ivar_7);
        release_sigmatopdown_funtype_6(ivar_1);
        result = (sigmatopdown_funtype_5_t)cl26718;

        
        return result;
}

extern sigmatopdown_funtype_5_t sigmatopdown__REDUCE_nat__1(sigmatopdown_funtype_13_t ivar_1, sigmatopdown_funtype_5_t ivar_3, sigmatopdown_funtype_5_t ivar_5, sigmatopdown_funtype_15_t ivar_7, sigmatopdown_funtype_17_t ivar_9){
        sigmatopdown_funtype_5_t  result;
        sigmatopdown_closure_18_t cl26865;
        cl26865 = new_sigmatopdown_closure_18();
        cl26865->fvar_1 = (sigmatopdown_funtype_15_t)ivar_7;
        if (cl26865->fvar_1 != NULL) cl26865->fvar_1->count++;
        cl26865->fvar_2 = (sigmatopdown_funtype_17_t)ivar_9;
        if (cl26865->fvar_2 != NULL) cl26865->fvar_2->count++;
        cl26865->fvar_3 = (sigmatopdown_funtype_5_t)ivar_5;
        if (cl26865->fvar_3 != NULL) cl26865->fvar_3->count++;
        cl26865->fvar_4 = (sigmatopdown_funtype_5_t)ivar_3;
        if (cl26865->fvar_4 != NULL) cl26865->fvar_4->count++;
        cl26865->fvar_5 = (sigmatopdown_funtype_13_t)ivar_1;
        if (cl26865->fvar_5 != NULL) cl26865->fvar_5->count++;
        release_sigmatopdown_funtype_15(ivar_7);
        release_sigmatopdown_funtype_17(ivar_9);
        release_sigmatopdown_funtype_5(ivar_5);
        release_sigmatopdown_funtype_5(ivar_3);
        release_sigmatopdown_funtype_13(ivar_1);
        result = (sigmatopdown_funtype_5_t)cl26865;

        
        return result;
}

extern sigmatopdown_funtype_19_t sigmatopdown__reduce_ordinal__1(sigmatopdown_funtype_20_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_4, sigmatopdown_funtype_21_t ivar_5, sigmatopdown_funtype_22_t ivar_7){
        sigmatopdown_funtype_19_t  result;
        sigmatopdown_closure_23_t cl27016;
        cl27016 = new_sigmatopdown_closure_23();
        cl27016->fvar_1 = (sigmatopdown_funtype_21_t)ivar_5;
        if (cl27016->fvar_1 != NULL) cl27016->fvar_1->count++;
        cl27016->fvar_2 = (sigmatopdown_funtype_22_t)ivar_7;
        if (cl27016->fvar_2 != NULL) cl27016->fvar_2->count++;
        cl27016->fvar_3 = (ordstruct_adt__ordstruct_adt_t)ivar_4;
        if (cl27016->fvar_3 != NULL) cl27016->fvar_3->count++;
        cl27016->fvar_4 = (ordstruct_adt__ordstruct_adt_t)ivar_3;
        if (cl27016->fvar_4 != NULL) cl27016->fvar_4->count++;
        cl27016->fvar_5 = (sigmatopdown_funtype_20_t)ivar_1;
        if (cl27016->fvar_5 != NULL) cl27016->fvar_5->count++;
        release_sigmatopdown_funtype_21(ivar_5);
        release_sigmatopdown_funtype_22(ivar_7);
        release_ordstruct_adt__ordstruct_adt(ivar_4);
        release_ordstruct_adt__ordstruct_adt(ivar_3);
        release_sigmatopdown_funtype_20(ivar_1);
        result = (sigmatopdown_funtype_19_t)cl27016;

        
        return result;
}

extern sigmatopdown_funtype_19_t sigmatopdown__REDUCE_ordinal__1(sigmatopdown_funtype_24_t ivar_1, sigmatopdown_funtype_19_t ivar_3, sigmatopdown_funtype_19_t ivar_5, sigmatopdown_funtype_25_t ivar_7, sigmatopdown_funtype_26_t ivar_9){
        sigmatopdown_funtype_19_t  result;
        sigmatopdown_closure_27_t cl27231;
        cl27231 = new_sigmatopdown_closure_27();
        cl27231->fvar_1 = (sigmatopdown_funtype_25_t)ivar_7;
        if (cl27231->fvar_1 != NULL) cl27231->fvar_1->count++;
        cl27231->fvar_2 = (sigmatopdown_funtype_26_t)ivar_9;
        if (cl27231->fvar_2 != NULL) cl27231->fvar_2->count++;
        cl27231->fvar_3 = (sigmatopdown_funtype_19_t)ivar_5;
        if (cl27231->fvar_3 != NULL) cl27231->fvar_3->count++;
        cl27231->fvar_4 = (sigmatopdown_funtype_19_t)ivar_3;
        if (cl27231->fvar_4 != NULL) cl27231->fvar_4->count++;
        cl27231->fvar_5 = (sigmatopdown_funtype_24_t)ivar_1;
        if (cl27231->fvar_5 != NULL) cl27231->fvar_5->count++;
        release_sigmatopdown_funtype_25(ivar_7);
        release_sigmatopdown_funtype_26(ivar_9);
        release_sigmatopdown_funtype_19(ivar_5);
        release_sigmatopdown_funtype_19(ivar_3);
        release_sigmatopdown_funtype_24(ivar_1);
        result = (sigmatopdown_funtype_19_t)cl27231;

        
        return result;
}

extern bool_t r_sigmatopdown__epsilonp(sigmatopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatopdown__peg_adt_index;
        release_sigmatopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_sigmatopdown__failurep(sigmatopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatopdown__peg_adt_index;
        release_sigmatopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_sigmatopdown__anyp(sigmatopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)2;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatopdown__peg_adt_index;
        release_sigmatopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_sigmatopdown__terminalp(sigmatopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)3;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatopdown__peg_adt_index;
        release_sigmatopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_sigmatopdown__concatp(sigmatopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)4;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatopdown__peg_adt_index;
        release_sigmatopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_sigmatopdown__orp(sigmatopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)5;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatopdown__peg_adt_index;
        release_sigmatopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_sigmatopdown__andp(sigmatopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)6;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatopdown__peg_adt_index;
        release_sigmatopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_sigmatopdown__notp(sigmatopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)7;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatopdown__peg_adt_index;
        release_sigmatopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern sigmatopdown__any_t update_sigmatopdown__peg_adt_p(sigmatopdown__peg_adt_t ivar_1, sigmatopdown_funtype_29_t ivar_4){
        sigmatopdown__any_t  result;
        sigmatopdown__any_t ivar_3;
        //copying to sigmatopdown__any from sigmatopdown__peg_adt;
        ivar_3 = (sigmatopdown__any_t)ivar_1;
        if (ivar_3 != NULL) ivar_3->count++;
        release_sigmatopdown__peg_adt(ivar_1);
        result = (sigmatopdown__any_t)update_sigmatopdown__any_p(ivar_3, ivar_4);

        
        return result;
}

extern sigmatopdown_funtype_29_t sigmatopdown__peg_adt_p(sigmatopdown__peg_adt_t ivar_1){
        sigmatopdown_funtype_29_t  result;
        sigmatopdown__any_t ivar_3;
        //copying to sigmatopdown__any from sigmatopdown__peg_adt;
        ivar_3 = (sigmatopdown__any_t)ivar_1;
        if (ivar_3 != NULL) ivar_3->count++;
        release_sigmatopdown__peg_adt(ivar_1);
        result = (sigmatopdown_funtype_29_t)ivar_3->p;
        result->count++;
        release_sigmatopdown__any(ivar_3);

        
        return result;
}

extern sigmatopdown__terminal_t update_sigmatopdown__peg_adt_a(sigmatopdown__peg_adt_t ivar_1, uint8_t ivar_3){
        sigmatopdown__terminal_t  result;
        sigmatopdown__terminal_t ivar_2;
        //copying to sigmatopdown__terminal from sigmatopdown__peg_adt;
        ivar_2 = (sigmatopdown__terminal_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_sigmatopdown__peg_adt(ivar_1);
        result = (sigmatopdown__terminal_t)update_sigmatopdown__terminal_a(ivar_2, ivar_3);

        
        return result;
}

extern uint8_t sigmatopdown__peg_adt_a(sigmatopdown__peg_adt_t ivar_1){
        uint8_t  result;
        sigmatopdown__terminal_t ivar_2;
        //copying to sigmatopdown__terminal from sigmatopdown__peg_adt;
        ivar_2 = (sigmatopdown__terminal_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_sigmatopdown__peg_adt(ivar_1);
        result = (uint8_t)ivar_2->a;
        release_sigmatopdown__terminal(ivar_2);

        
        return result;
}

extern sigmatopdown__peg_adt_t update_sigmatopdown__peg_adt_e1(sigmatopdown__peg_adt_t ivar_1, uint8_t ivar_7){
        sigmatopdown__peg_adt_t  result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->sigmatopdown__peg_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)4;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             sigmatopdown__concat_t ivar_8;
             //copying to sigmatopdown__concat from sigmatopdown__peg_adt;
             ivar_8 = (sigmatopdown__concat_t)ivar_1;
             if (ivar_8 != NULL) ivar_8->count++;
             release_sigmatopdown__peg_adt(ivar_1);
             result = (sigmatopdown__peg_adt_t)update_sigmatopdown__concat_e1(ivar_8, ivar_7);
} else {
        
             sigmatopdown__choice_t ivar_12;
             //copying to sigmatopdown__choice from sigmatopdown__peg_adt;
             ivar_12 = (sigmatopdown__choice_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_sigmatopdown__peg_adt(ivar_1);
             result = (sigmatopdown__peg_adt_t)update_sigmatopdown__choice_e1(ivar_12, ivar_7);
};

        
        return result;
}

extern uint8_t sigmatopdown__peg_adt_e1(sigmatopdown__peg_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->sigmatopdown__peg_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)4;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             sigmatopdown__concat_t ivar_2;
             //copying to sigmatopdown__concat from sigmatopdown__peg_adt;
             ivar_2 = (sigmatopdown__concat_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_sigmatopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_2->e1;
             release_sigmatopdown__concat(ivar_2);
} else {
        
             sigmatopdown__choice_t ivar_6;
             //copying to sigmatopdown__choice from sigmatopdown__peg_adt;
             ivar_6 = (sigmatopdown__choice_t)ivar_1;
             if (ivar_6 != NULL) ivar_6->count++;
             release_sigmatopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_6->e1;
             release_sigmatopdown__choice(ivar_6);
};

        
        return result;
}

extern sigmatopdown__peg_adt_t update_sigmatopdown__peg_adt_e2(sigmatopdown__peg_adt_t ivar_1, uint8_t ivar_7){
        sigmatopdown__peg_adt_t  result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->sigmatopdown__peg_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)4;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             sigmatopdown__concat_t ivar_8;
             //copying to sigmatopdown__concat from sigmatopdown__peg_adt;
             ivar_8 = (sigmatopdown__concat_t)ivar_1;
             if (ivar_8 != NULL) ivar_8->count++;
             release_sigmatopdown__peg_adt(ivar_1);
             result = (sigmatopdown__peg_adt_t)update_sigmatopdown__concat_e2(ivar_8, ivar_7);
} else {
        
             sigmatopdown__choice_t ivar_12;
             //copying to sigmatopdown__choice from sigmatopdown__peg_adt;
             ivar_12 = (sigmatopdown__choice_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_sigmatopdown__peg_adt(ivar_1);
             result = (sigmatopdown__peg_adt_t)update_sigmatopdown__choice_e2(ivar_12, ivar_7);
};

        
        return result;
}

extern uint8_t sigmatopdown__peg_adt_e2(sigmatopdown__peg_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->sigmatopdown__peg_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)4;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             sigmatopdown__concat_t ivar_2;
             //copying to sigmatopdown__concat from sigmatopdown__peg_adt;
             ivar_2 = (sigmatopdown__concat_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_sigmatopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_2->e2;
             release_sigmatopdown__concat(ivar_2);
} else {
        
             sigmatopdown__choice_t ivar_6;
             //copying to sigmatopdown__choice from sigmatopdown__peg_adt;
             ivar_6 = (sigmatopdown__choice_t)ivar_1;
             if (ivar_6 != NULL) ivar_6->count++;
             release_sigmatopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_6->e2;
             release_sigmatopdown__choice(ivar_6);
};

        
        return result;
}

extern sigmatopdown__peg_adt_t update_sigmatopdown__peg_adt_e(sigmatopdown__peg_adt_t ivar_1, uint8_t ivar_7){
        sigmatopdown__peg_adt_t  result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->sigmatopdown__peg_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)6;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             sigmatopdown__check_t ivar_8;
             //copying to sigmatopdown__check from sigmatopdown__peg_adt;
             ivar_8 = (sigmatopdown__check_t)ivar_1;
             if (ivar_8 != NULL) ivar_8->count++;
             release_sigmatopdown__peg_adt(ivar_1);
             result = (sigmatopdown__peg_adt_t)update_sigmatopdown__check_e(ivar_8, ivar_7);
} else {
        
             sigmatopdown__neg_t ivar_12;
             //copying to sigmatopdown__neg from sigmatopdown__peg_adt;
             ivar_12 = (sigmatopdown__neg_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_sigmatopdown__peg_adt(ivar_1);
             result = (sigmatopdown__peg_adt_t)update_sigmatopdown__neg_e(ivar_12, ivar_7);
};

        
        return result;
}

extern uint8_t sigmatopdown__peg_adt_e(sigmatopdown__peg_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->sigmatopdown__peg_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)6;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             sigmatopdown__check_t ivar_2;
             //copying to sigmatopdown__check from sigmatopdown__peg_adt;
             ivar_2 = (sigmatopdown__check_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_sigmatopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_2->e;
             release_sigmatopdown__check(ivar_2);
} else {
        
             sigmatopdown__neg_t ivar_6;
             //copying to sigmatopdown__neg from sigmatopdown__peg_adt;
             ivar_6 = (sigmatopdown__neg_t)ivar_1;
             if (ivar_6 != NULL) ivar_6->count++;
             release_sigmatopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_6->e;
             release_sigmatopdown__neg(ivar_6);
};

        
        return result;
}

extern sigmatopdown__peg_adt_t sigmatopdown__epsilon(void){
        sigmatopdown__peg_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        sigmatopdown__peg_adt_t tmp27553 = new_sigmatopdown__peg_adt();;
        result = (sigmatopdown__peg_adt_t)tmp27553;
        tmp27553->sigmatopdown__peg_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern sigmatopdown__peg_adt_t sigmatopdown__failure(void){
        sigmatopdown__peg_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        sigmatopdown__peg_adt_t tmp27559 = new_sigmatopdown__peg_adt();;
        result = (sigmatopdown__peg_adt_t)tmp27559;
        tmp27559->sigmatopdown__peg_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern sigmatopdown__peg_adt_t sigmatopdown__any(sigmatopdown_funtype_29_t ivar_2){
        sigmatopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)2;
        sigmatopdown__any_t tmp27567 = new_sigmatopdown__any();;
        result = (sigmatopdown__peg_adt_t)tmp27567;
        tmp27567->sigmatopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp27567->p = (sigmatopdown_funtype_29_t)ivar_2;

        
        return result;
}

extern sigmatopdown__peg_adt_t sigmatopdown__terminal(uint8_t ivar_2){
        sigmatopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)3;
        sigmatopdown__terminal_t tmp27575 = new_sigmatopdown__terminal();;
        result = (sigmatopdown__peg_adt_t)tmp27575;
        tmp27575->sigmatopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp27575->a = (uint8_t)ivar_2;

        
        return result;
}

extern sigmatopdown__peg_adt_t sigmatopdown__concat(uint8_t ivar_2, uint8_t ivar_3){
        sigmatopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)4;
        sigmatopdown__concat_t tmp27585 = new_sigmatopdown__concat();;
        result = (sigmatopdown__peg_adt_t)tmp27585;
        tmp27585->sigmatopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp27585->e1 = (uint8_t)ivar_2;
        tmp27585->e2 = (uint8_t)ivar_3;

        
        return result;
}

extern sigmatopdown__peg_adt_t sigmatopdown__choice(uint8_t ivar_2, uint8_t ivar_3){
        sigmatopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)5;
        sigmatopdown__choice_t tmp27595 = new_sigmatopdown__choice();;
        result = (sigmatopdown__peg_adt_t)tmp27595;
        tmp27595->sigmatopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp27595->e1 = (uint8_t)ivar_2;
        tmp27595->e2 = (uint8_t)ivar_3;

        
        return result;
}

extern sigmatopdown__peg_adt_t sigmatopdown__check(uint8_t ivar_2){
        sigmatopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)6;
        sigmatopdown__check_t tmp27603 = new_sigmatopdown__check();;
        result = (sigmatopdown__peg_adt_t)tmp27603;
        tmp27603->sigmatopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp27603->e = (uint8_t)ivar_2;

        
        return result;
}

extern sigmatopdown__peg_adt_t sigmatopdown__neg(uint8_t ivar_2){
        sigmatopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)7;
        sigmatopdown__neg_t tmp27611 = new_sigmatopdown__neg();;
        result = (sigmatopdown__peg_adt_t)tmp27611;
        tmp27611->sigmatopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp27611->e = (uint8_t)ivar_2;

        
        return result;
}

extern sigmatopdown_funtype_36_t sigmatopdown__peg_ord(void){
        sigmatopdown_funtype_36_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

extern uint8_t sigmatopdown__ord__2(sigmatopdown__peg_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)r_sigmatopdown__epsilonp((sigmatopdown__peg_adt_t)ivar_1);
        if (ivar_3){ 
             release_sigmatopdown__peg_adt(ivar_1);
             result = (uint8_t)0;
} else {
        
             bool_t ivar_7;
             ivar_1->count++;
             ivar_7 = (bool_t)r_sigmatopdown__failurep((sigmatopdown__peg_adt_t)ivar_1);
             if (ivar_7){  
           release_sigmatopdown__peg_adt(ivar_1);
           result = (uint8_t)1;
} else {
             
           bool_t ivar_17;
           ivar_1->count++;
           ivar_17 = (bool_t)r_sigmatopdown__anyp((sigmatopdown__peg_adt_t)ivar_1);
           if (ivar_17){   
           result = (uint8_t)2;
} else {
           
           bool_t ivar_25;
           ivar_1->count++;
           ivar_25 = (bool_t)r_sigmatopdown__terminalp((sigmatopdown__peg_adt_t)ivar_1);
           if (ivar_25){    
            result = (uint8_t)3;
} else {
           
            bool_t ivar_37;
            ivar_1->count++;
            ivar_37 = (bool_t)r_sigmatopdown__concatp((sigmatopdown__peg_adt_t)ivar_1);
            if (ivar_37){     
             result = (uint8_t)4;
} else {
            
             bool_t ivar_49;
             ivar_1->count++;
             ivar_49 = (bool_t)r_sigmatopdown__orp((sigmatopdown__peg_adt_t)ivar_1);
             if (ivar_49){      
              result = (uint8_t)5;
} else {
             
              bool_t ivar_57;
              ivar_1->count++;
              ivar_57 = (bool_t)r_sigmatopdown__andp((sigmatopdown__peg_adt_t)ivar_1);
              if (ivar_57){       
               result = (uint8_t)6;
} else {
              
               result = (uint8_t)7;
};
};
};
};
};
};
};

        
        return result;
}

extern bool_t sigmatopdown__subterm__2(sigmatopdown__peg_adt_t ivar_1, sigmatopdown__peg_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) equal_sigmatopdown__peg_adt(ivar_1, ivar_2);

        
        return result;
}

extern bool_t sigmatopdown__doublelessp__2(sigmatopdown__peg_adt_t ivar_1, sigmatopdown__peg_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) false;

        
        return result;
}

extern sigmatopdown_funtype_37_t sigmatopdown__reduce_nat__2(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, sigmatopdown_funtype_38_t ivar_3, sigmatopdown_funtype_39_t ivar_6, sigmatopdown_funtype_41_t ivar_8, sigmatopdown_funtype_41_t ivar_10, sigmatopdown_funtype_39_t ivar_12, sigmatopdown_funtype_39_t ivar_14){
        sigmatopdown_funtype_37_t  result;
        sigmatopdown_closure_42_t cl27687;
        cl27687 = new_sigmatopdown_closure_42();
        cl27687->fvar_1 = (sigmatopdown_funtype_39_t)ivar_12;
        if (cl27687->fvar_1 != NULL) cl27687->fvar_1->count++;
        cl27687->fvar_2 = (sigmatopdown_funtype_39_t)ivar_14;
        if (cl27687->fvar_2 != NULL) cl27687->fvar_2->count++;
        cl27687->fvar_3 = (sigmatopdown_funtype_41_t)ivar_10;
        if (cl27687->fvar_3 != NULL) cl27687->fvar_3->count++;
        cl27687->fvar_4 = (sigmatopdown_funtype_41_t)ivar_8;
        if (cl27687->fvar_4 != NULL) cl27687->fvar_4->count++;
        cl27687->fvar_5 = (sigmatopdown_funtype_39_t)ivar_6;
        if (cl27687->fvar_5 != NULL) cl27687->fvar_5->count++;
        cl27687->fvar_6 = (sigmatopdown_funtype_38_t)ivar_3;
        if (cl27687->fvar_6 != NULL) cl27687->fvar_6->count++;
        mpz_set(cl27687->fvar_7, ivar_2);
        mpz_set(cl27687->fvar_8, ivar_1);
        release_sigmatopdown_funtype_39(ivar_12);
        release_sigmatopdown_funtype_39(ivar_14);
        release_sigmatopdown_funtype_41(ivar_10);
        release_sigmatopdown_funtype_41(ivar_8);
        release_sigmatopdown_funtype_39(ivar_6);
        release_sigmatopdown_funtype_38(ivar_3);
        result = (sigmatopdown_funtype_37_t)cl27687;

        
        return result;
}

extern sigmatopdown_funtype_37_t sigmatopdown__REDUCE_nat__2(sigmatopdown_funtype_37_t ivar_1, sigmatopdown_funtype_37_t ivar_3, sigmatopdown_funtype_44_t ivar_5, sigmatopdown_funtype_46_t ivar_8, sigmatopdown_funtype_48_t ivar_10, sigmatopdown_funtype_48_t ivar_12, sigmatopdown_funtype_46_t ivar_14, sigmatopdown_funtype_46_t ivar_16){
        sigmatopdown_funtype_37_t  result;
        sigmatopdown_closure_49_t cl27914;
        cl27914 = new_sigmatopdown_closure_49();
        cl27914->fvar_1 = (sigmatopdown_funtype_46_t)ivar_14;
        if (cl27914->fvar_1 != NULL) cl27914->fvar_1->count++;
        cl27914->fvar_2 = (sigmatopdown_funtype_46_t)ivar_16;
        if (cl27914->fvar_2 != NULL) cl27914->fvar_2->count++;
        cl27914->fvar_3 = (sigmatopdown_funtype_48_t)ivar_12;
        if (cl27914->fvar_3 != NULL) cl27914->fvar_3->count++;
        cl27914->fvar_4 = (sigmatopdown_funtype_48_t)ivar_10;
        if (cl27914->fvar_4 != NULL) cl27914->fvar_4->count++;
        cl27914->fvar_5 = (sigmatopdown_funtype_46_t)ivar_8;
        if (cl27914->fvar_5 != NULL) cl27914->fvar_5->count++;
        cl27914->fvar_6 = (sigmatopdown_funtype_44_t)ivar_5;
        if (cl27914->fvar_6 != NULL) cl27914->fvar_6->count++;
        cl27914->fvar_7 = (sigmatopdown_funtype_37_t)ivar_3;
        if (cl27914->fvar_7 != NULL) cl27914->fvar_7->count++;
        cl27914->fvar_8 = (sigmatopdown_funtype_37_t)ivar_1;
        if (cl27914->fvar_8 != NULL) cl27914->fvar_8->count++;
        release_sigmatopdown_funtype_46(ivar_14);
        release_sigmatopdown_funtype_46(ivar_16);
        release_sigmatopdown_funtype_48(ivar_12);
        release_sigmatopdown_funtype_48(ivar_10);
        release_sigmatopdown_funtype_46(ivar_8);
        release_sigmatopdown_funtype_44(ivar_5);
        release_sigmatopdown_funtype_37(ivar_3);
        release_sigmatopdown_funtype_37(ivar_1);
        result = (sigmatopdown_funtype_37_t)cl27914;

        
        return result;
}

extern sigmatopdown_funtype_50_t sigmatopdown__reduce_ordinal__2(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2, sigmatopdown_funtype_51_t ivar_3, sigmatopdown_funtype_52_t ivar_6, sigmatopdown_funtype_53_t ivar_8, sigmatopdown_funtype_53_t ivar_10, sigmatopdown_funtype_52_t ivar_12, sigmatopdown_funtype_52_t ivar_14){
        sigmatopdown_funtype_50_t  result;
        sigmatopdown_closure_54_t cl28117;
        cl28117 = new_sigmatopdown_closure_54();
        cl28117->fvar_1 = (sigmatopdown_funtype_52_t)ivar_12;
        if (cl28117->fvar_1 != NULL) cl28117->fvar_1->count++;
        cl28117->fvar_2 = (sigmatopdown_funtype_52_t)ivar_14;
        if (cl28117->fvar_2 != NULL) cl28117->fvar_2->count++;
        cl28117->fvar_3 = (sigmatopdown_funtype_53_t)ivar_10;
        if (cl28117->fvar_3 != NULL) cl28117->fvar_3->count++;
        cl28117->fvar_4 = (sigmatopdown_funtype_53_t)ivar_8;
        if (cl28117->fvar_4 != NULL) cl28117->fvar_4->count++;
        cl28117->fvar_5 = (sigmatopdown_funtype_52_t)ivar_6;
        if (cl28117->fvar_5 != NULL) cl28117->fvar_5->count++;
        cl28117->fvar_6 = (sigmatopdown_funtype_51_t)ivar_3;
        if (cl28117->fvar_6 != NULL) cl28117->fvar_6->count++;
        cl28117->fvar_7 = (ordstruct_adt__ordstruct_adt_t)ivar_2;
        if (cl28117->fvar_7 != NULL) cl28117->fvar_7->count++;
        cl28117->fvar_8 = (ordstruct_adt__ordstruct_adt_t)ivar_1;
        if (cl28117->fvar_8 != NULL) cl28117->fvar_8->count++;
        release_sigmatopdown_funtype_52(ivar_12);
        release_sigmatopdown_funtype_52(ivar_14);
        release_sigmatopdown_funtype_53(ivar_10);
        release_sigmatopdown_funtype_53(ivar_8);
        release_sigmatopdown_funtype_52(ivar_6);
        release_sigmatopdown_funtype_51(ivar_3);
        release_ordstruct_adt__ordstruct_adt(ivar_2);
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (sigmatopdown_funtype_50_t)cl28117;

        
        return result;
}

extern sigmatopdown_funtype_50_t sigmatopdown__REDUCE_ordinal__2(sigmatopdown_funtype_50_t ivar_1, sigmatopdown_funtype_50_t ivar_3, sigmatopdown_funtype_55_t ivar_5, sigmatopdown_funtype_56_t ivar_8, sigmatopdown_funtype_57_t ivar_10, sigmatopdown_funtype_57_t ivar_12, sigmatopdown_funtype_56_t ivar_14, sigmatopdown_funtype_56_t ivar_16){
        sigmatopdown_funtype_50_t  result;
        sigmatopdown_closure_58_t cl28448;
        cl28448 = new_sigmatopdown_closure_58();
        cl28448->fvar_1 = (sigmatopdown_funtype_56_t)ivar_14;
        if (cl28448->fvar_1 != NULL) cl28448->fvar_1->count++;
        cl28448->fvar_2 = (sigmatopdown_funtype_56_t)ivar_16;
        if (cl28448->fvar_2 != NULL) cl28448->fvar_2->count++;
        cl28448->fvar_3 = (sigmatopdown_funtype_57_t)ivar_12;
        if (cl28448->fvar_3 != NULL) cl28448->fvar_3->count++;
        cl28448->fvar_4 = (sigmatopdown_funtype_57_t)ivar_10;
        if (cl28448->fvar_4 != NULL) cl28448->fvar_4->count++;
        cl28448->fvar_5 = (sigmatopdown_funtype_56_t)ivar_8;
        if (cl28448->fvar_5 != NULL) cl28448->fvar_5->count++;
        cl28448->fvar_6 = (sigmatopdown_funtype_55_t)ivar_5;
        if (cl28448->fvar_6 != NULL) cl28448->fvar_6->count++;
        cl28448->fvar_7 = (sigmatopdown_funtype_50_t)ivar_3;
        if (cl28448->fvar_7 != NULL) cl28448->fvar_7->count++;
        cl28448->fvar_8 = (sigmatopdown_funtype_50_t)ivar_1;
        if (cl28448->fvar_8 != NULL) cl28448->fvar_8->count++;
        release_sigmatopdown_funtype_56(ivar_14);
        release_sigmatopdown_funtype_56(ivar_16);
        release_sigmatopdown_funtype_57(ivar_12);
        release_sigmatopdown_funtype_57(ivar_10);
        release_sigmatopdown_funtype_56(ivar_8);
        release_sigmatopdown_funtype_55(ivar_5);
        release_sigmatopdown_funtype_50(ivar_3);
        release_sigmatopdown_funtype_50(ivar_1);
        result = (sigmatopdown_funtype_50_t)cl28448;

        
        return result;
}

extern sigmatopdown_funtype_59_t sigmatopdown__good_good_entryp(uint32_t ivar_1, uint32_t ivar_2){
        sigmatopdown_funtype_59_t  result;
        sigmatopdown_closure_60_t cl28550;
        cl28550 = new_sigmatopdown_closure_60();
        cl28550->fvar_1 = (uint32_t)ivar_2;
        cl28550->fvar_2 = (uint32_t)ivar_1;
        result = (sigmatopdown_funtype_59_t)cl28550;

        
        return result;
}

extern sigmatopdown_funtype_59_t sigmatopdown__good_push_entryp(uint32_t ivar_1){
        sigmatopdown_funtype_59_t  result;
        sigmatopdown_closure_61_t cl28562;
        cl28562 = new_sigmatopdown_closure_61();
        cl28562->fvar_1 = (uint32_t)ivar_1;
        result = (sigmatopdown_funtype_59_t)cl28562;

        
        return result;
}

extern sigmatopdown_funtype_59_t sigmatopdown__fine_push_entryp(uint32_t ivar_1){
        sigmatopdown_funtype_59_t  result;
        sigmatopdown_closure_62_t cl28574;
        cl28574 = new_sigmatopdown_closure_62();
        cl28574->fvar_1 = (uint32_t)ivar_1;
        result = (sigmatopdown_funtype_59_t)cl28574;

        
        return result;
}

extern sigmatopdown_funtype_59_t sigmatopdown__nice_entryp(uint32_t ivar_1, uint32_t ivar_2){
        sigmatopdown_funtype_59_t  result;
        sigmatopdown_closure_63_t cl28592;
        cl28592 = new_sigmatopdown_closure_63();
        cl28592->fvar_1 = (uint32_t)ivar_2;
        cl28592->fvar_2 = (uint32_t)ivar_1;
        result = (sigmatopdown_funtype_59_t)cl28592;

        
        return result;
}

extern bool_t sigmatopdown__loop_or_pushp(sigmatopdown__ent_adt_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        ivar_1->count++;
        ivar_2 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_1);
        if (ivar_2){ 
             release_sigmatopdown__ent_adt(ivar_1);
             result = (bool_t) true;
} else {
        
             result = (bool_t)r_sigmatopdown__pushp((sigmatopdown__ent_adt_t)ivar_1);
};

        
        return result;
}

extern sigmatopdown_funtype_64_t sigmatopdown__instack(uint32_t ivar_1, sigmatopdown_array_66_t ivar_2){
        sigmatopdown_funtype_64_t  result;
        sigmatopdown_closure_67_t cl28634;
        cl28634 = new_sigmatopdown_closure_67();
        cl28634->fvar_1 = (sigmatopdown_array_66_t)ivar_2;
        if (cl28634->fvar_1 != NULL) cl28634->fvar_1->count++;
        cl28634->fvar_2 = (uint32_t)ivar_1;
        release_sigmatopdown_array_66(ivar_2);
        result = (sigmatopdown_funtype_64_t)cl28634;

        
        return result;
}

extern sigmatopdown_funtype_69_t sigmatopdown__successor(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_66_t ivar_3){
        sigmatopdown_funtype_69_t  result;
        sigmatopdown_closure_71_t cl28721;
        cl28721 = new_sigmatopdown_closure_71();
        cl28721->fvar_1 = (sigmatopdown_array_66_t)ivar_3;
        if (cl28721->fvar_1 != NULL) cl28721->fvar_1->count++;
        cl28721->fvar_2 = (uint32_t)ivar_1;
        cl28721->fvar_3 = (sigmatopdown__lang_spec_t)ivar_2;
        if (cl28721->fvar_3 != NULL) cl28721->fvar_3->count++;
        release_sigmatopdown_array_66(ivar_3);
        release_sigmatopdown__lang_spec(ivar_2);
        result = (sigmatopdown_funtype_69_t)cl28721;

        
        return result;
}

extern sigmatopdown_funtype_72_t sigmatopdown__sigma(uint32_t ivar_1, sigmatopdown_array_73_t ivar_2){
        sigmatopdown_funtype_72_t  result;
        sigmatopdown_closure_74_t cl28736;
        cl28736 = new_sigmatopdown_closure_74();
        cl28736->fvar_1 = (sigmatopdown_array_73_t)ivar_2;
        if (cl28736->fvar_1 != NULL) cl28736->fvar_1->count++;
        cl28736->fvar_2 = (uint32_t)ivar_1;
        release_sigmatopdown_array_73(ivar_2);
        result = (sigmatopdown_funtype_72_t)cl28736;

        
        return result;
}

extern uint64_t sigmatopdown__scafcount(uint32_t ivar_1, sigmatopdown_array_66_t ivar_2, sigmatopdown_funtype_59_t ivar_4, uint32_t ivar_6){
        uint64_t  result;
        type_actual_t ivar_36;
        ivar_36 = (type_actual_t)actual_sigmatopdown__ent_adt();
        sigmatopdown_funtype_72_t ivar_10;
        sigmatopdown_array_73_t ivar_46;
        uint32_t size28769;
        //copying to uint32 from uint32;
        size28769 = (uint32_t)ivar_1;
        size28769 += 1;
        ivar_46 = new_sigmatopdown_array_73(size28769);
        uint32_t ivar_14;
        for (uint32_t index28751 = 0; index28751 < size28769; index28751++){
             ivar_14 = (uint32_t)index28751;
             sigmatopdown_funtype_75_t ivar_23;
             sigmatopdown_funtype_76_t ivar_30;
             uint8_t ivar_39;
             ivar_39 = (uint8_t)sigmatopdown__num_non_terminals();
             uint32_t ivar_38;
             //copying to uint32 from uint8;
             ivar_38 = (uint32_t)ivar_39;
             ivar_30 = (sigmatopdown_funtype_76_t)arrayCount__count((type_actual_t)ivar_36, (uint32_t)ivar_38);
             ivar_4->count++;
             ivar_23 = (sigmatopdown_funtype_75_t)ivar_30->ftbl->fptr(ivar_30, ivar_4);
             ivar_30->ftbl->rptr(ivar_30);
             sigmatopdown_array_65_t ivar_41;
             ivar_41 = (sigmatopdown_array_65_t)ivar_2->elems[ivar_14];
             ivar_41->count++;
             mpz_mk_set_ui(ivar_46->elems[index28751], ivar_23->ftbl->fptr(ivar_23, ivar_41));
             ivar_23->ftbl->rptr(ivar_23);
        };
        release_sigmatopdown_funtype_59(ivar_4);
        release_sigmatopdown_array_66(ivar_2);
        ivar_10 = (sigmatopdown_funtype_72_t)sigmatopdown__sigma((uint32_t)ivar_1, (sigmatopdown_array_73_t)ivar_46);
        result = (uint64_t)mpz_get_ui(ivar_10->ftbl->fptr(ivar_10, ivar_6));
        ivar_10->ftbl->rptr(ivar_10);
        safe_free(ivar_36);

        
        return result;
}

extern uint64_t sigmatopdown__pushcount(uint32_t ivar_1, sigmatopdown_array_66_t ivar_2){
        uint64_t  result;
        sigmatopdown_funtype_59_t ivar_15;
        sigmatopdown_closure_77_t cl28781;
        cl28781 = new_sigmatopdown_closure_77();
        ivar_15 = (sigmatopdown_funtype_59_t)cl28781;
        result = (uint64_t)sigmatopdown__scafcount((uint32_t)ivar_1, (sigmatopdown_array_66_t)ivar_2, (sigmatopdown_funtype_59_t)ivar_15, (uint32_t)ivar_1);

        
        return result;
}

extern bool_t sigmatopdown__good_or_failp(sigmatopdown__ent_adt_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        ivar_1->count++;
        ivar_2 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_1);
        if (ivar_2){ 
             release_sigmatopdown__ent_adt(ivar_1);
             result = (bool_t) true;
} else {
        
             result = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_1);
};

        
        return result;
}

extern uint64_t sigmatopdown__gfcount(uint32_t ivar_1, sigmatopdown_array_66_t ivar_2){
        uint64_t  result;
        sigmatopdown_funtype_59_t ivar_16;
        sigmatopdown_closure_78_t cl28797;
        cl28797 = new_sigmatopdown_closure_78();
        ivar_16 = (sigmatopdown_funtype_59_t)cl28797;
        result = (uint64_t)sigmatopdown__scafcount((uint32_t)ivar_1, (sigmatopdown_array_66_t)ivar_2, (sigmatopdown_funtype_59_t)ivar_16, (uint32_t)ivar_1);

        
        return result;
}

extern sigmatopdown_funtype_79_t sigmatopdown__good_depthp(uint32_t ivar_1, sigmatopdown_array_66_t ivar_2){
        sigmatopdown_funtype_79_t  result;
        sigmatopdown_closure_80_t cl28807;
        cl28807 = new_sigmatopdown_closure_80();
        cl28807->fvar_1 = (sigmatopdown_array_66_t)ivar_2;
        if (cl28807->fvar_1 != NULL) cl28807->fvar_1->count++;
        cl28807->fvar_2 = (uint32_t)ivar_1;
        release_sigmatopdown_array_66(ivar_2);
        result = (sigmatopdown_funtype_79_t)cl28807;

        
        return result;
}

extern sigmatopdown_funtype_59_t sigmatopdown__good_stackp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, uint64_t ivar_3, sigmatopdown_array_66_t ivar_4){
        sigmatopdown_funtype_59_t  result;
        sigmatopdown_closure_81_t cl28874;
        cl28874 = new_sigmatopdown_closure_81();
        cl28874->fvar_1 = (sigmatopdown_array_66_t)ivar_4;
        if (cl28874->fvar_1 != NULL) cl28874->fvar_1->count++;
        cl28874->fvar_2 = (uint32_t)ivar_1;
        cl28874->fvar_3 = (sigmatopdown__lang_spec_t)ivar_2;
        if (cl28874->fvar_3 != NULL) cl28874->fvar_3->count++;
        cl28874->fvar_4 = (uint64_t)ivar_3;
        release_sigmatopdown_array_66(ivar_4);
        release_sigmatopdown__lang_spec(ivar_2);
        result = (sigmatopdown_funtype_59_t)cl28874;

        
        return result;
}

extern sigmatopdown_funtype_69_t sigmatopdown__mem_stackp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, uint64_t ivar_3, sigmatopdown_array_66_t ivar_4){
        sigmatopdown_funtype_69_t  result;
        sigmatopdown_closure_82_t cl28963;
        cl28963 = new_sigmatopdown_closure_82();
        cl28963->fvar_1 = (sigmatopdown_array_66_t)ivar_4;
        if (cl28963->fvar_1 != NULL) cl28963->fvar_1->count++;
        cl28963->fvar_2 = (uint32_t)ivar_1;
        cl28963->fvar_3 = (sigmatopdown__lang_spec_t)ivar_2;
        if (cl28963->fvar_3 != NULL) cl28963->fvar_3->count++;
        cl28963->fvar_4 = (uint64_t)ivar_3;
        release_sigmatopdown_array_66(ivar_4);
        release_sigmatopdown__lang_spec(ivar_2);
        result = (sigmatopdown_funtype_69_t)cl28963;

        
        return result;
}

extern bool_t sigmatopdown__push_or_pendingp(sigmatopdown__ent_adt_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        ivar_1->count++;
        ivar_2 = (bool_t)r_sigmatopdown__pushp((sigmatopdown__ent_adt_t)ivar_1);
        if (ivar_2){ 
             release_sigmatopdown__ent_adt(ivar_1);
             result = (bool_t) true;
} else {
        
             result = (bool_t)r_sigmatopdown__pendingp((sigmatopdown__ent_adt_t)ivar_1);
};

        
        return result;
}

extern sigmatopdown_funtype_59_t sigmatopdown__fine_stackp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, uint64_t ivar_3, sigmatopdown_array_66_t ivar_4){
        sigmatopdown_funtype_59_t  result;
        sigmatopdown_closure_83_t cl29035;
        cl29035 = new_sigmatopdown_closure_83();
        cl29035->fvar_1 = (sigmatopdown_array_66_t)ivar_4;
        if (cl29035->fvar_1 != NULL) cl29035->fvar_1->count++;
        cl29035->fvar_2 = (uint32_t)ivar_1;
        cl29035->fvar_3 = (sigmatopdown__lang_spec_t)ivar_2;
        if (cl29035->fvar_3 != NULL) cl29035->fvar_3->count++;
        cl29035->fvar_4 = (uint64_t)ivar_3;
        release_sigmatopdown_array_66(ivar_4);
        release_sigmatopdown__lang_spec(ivar_2);
        result = (sigmatopdown_funtype_59_t)cl29035;

        
        return result;
}

extern bool_t sigmatopdown__loop_readyp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_66_t ivar_3, uint32_t ivar_5, uint8_t ivar_6){
        bool_t  result;
        sigmatopdown__peg_adt_t ivar_7;
        ivar_7 = (sigmatopdown__peg_adt_t)ivar_2->elems[ivar_6];
        ivar_7->count++;
        release_sigmatopdown__lang_spec(ivar_2);
        bool_t ivar_77;
        ivar_7->count++;
        ivar_77 = (bool_t)r_sigmatopdown__concatp((sigmatopdown__peg_adt_t)ivar_7);
        if (ivar_77){ 
             uint8_t ivar_12;
             ivar_7->count++;
             ivar_12 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_7);
             uint8_t ivar_13;
             ivar_13 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_7);
             bool_t ivar_20;
             sigmatopdown__ent_adt_t ivar_33;
             sigmatopdown_array_65_t ivar_25;
             ivar_25 = (sigmatopdown_array_65_t)ivar_3->elems[ivar_5];
             ivar_25->count++;
             ivar_33 = (sigmatopdown__ent_adt_t)ivar_25->elems[ivar_12];
             ivar_33->count++;
             release_sigmatopdown_array_65(ivar_25);
             ivar_20 = (bool_t)sigmatopdown__loop_or_pushp((sigmatopdown__ent_adt_t)ivar_33);
             if (ivar_20){  
           release_sigmatopdown_array_66(ivar_3);
           result = (bool_t) true;
} else {
             
           bool_t ivar_34;
           sigmatopdown__ent_adt_t ivar_47;
           sigmatopdown_array_65_t ivar_39;
           ivar_39 = (sigmatopdown_array_65_t)ivar_3->elems[ivar_5];
           ivar_39->count++;
           ivar_47 = (sigmatopdown__ent_adt_t)ivar_39->elems[ivar_12];
           ivar_47->count++;
           release_sigmatopdown_array_65(ivar_39);
           ivar_34 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_47);
           if (ivar_34){   
           sigmatopdown__ent_adt_t ivar_74;
           sigmatopdown_array_65_t ivar_51;
           uint32_t ivar_71;
           uint32_t ivar_54;
           sigmatopdown__ent_adt_t ivar_66;
           sigmatopdown_array_65_t ivar_58;
           ivar_58 = (sigmatopdown_array_65_t)ivar_3->elems[ivar_5];
           ivar_58->count++;
           ivar_66 = (sigmatopdown__ent_adt_t)ivar_58->elems[ivar_12];
           ivar_66->count++;
           release_sigmatopdown_array_65(ivar_58);
           ivar_54 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_66);
           ivar_71 = (uint32_t)(ivar_5 + ivar_54);
           ivar_51 = (sigmatopdown_array_65_t)ivar_3->elems[ivar_71];
           ivar_51->count++;
           release_sigmatopdown_array_66(ivar_3);
           ivar_74 = (sigmatopdown__ent_adt_t)ivar_51->elems[ivar_13];
           ivar_74->count++;
           release_sigmatopdown_array_65(ivar_51);
           result = (bool_t)sigmatopdown__loop_or_pushp((sigmatopdown__ent_adt_t)ivar_74);
} else {
           
           release_sigmatopdown_array_66(ivar_3);
           result = (bool_t) false;
};
};
} else {
        
             bool_t ivar_131;
             ivar_7->count++;
             ivar_131 = (bool_t)r_sigmatopdown__orp((sigmatopdown__peg_adt_t)ivar_7);
             if (ivar_131){  
           uint8_t ivar_81;
           ivar_7->count++;
           ivar_81 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_7);
           uint8_t ivar_82;
           ivar_82 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_7);
           bool_t ivar_89;
           sigmatopdown__ent_adt_t ivar_102;
           sigmatopdown_array_65_t ivar_94;
           ivar_94 = (sigmatopdown_array_65_t)ivar_3->elems[ivar_5];
           ivar_94->count++;
           ivar_102 = (sigmatopdown__ent_adt_t)ivar_94->elems[ivar_81];
           ivar_102->count++;
           release_sigmatopdown_array_65(ivar_94);
           ivar_89 = (bool_t)sigmatopdown__loop_or_pushp((sigmatopdown__ent_adt_t)ivar_102);
           if (ivar_89){   
           release_sigmatopdown_array_66(ivar_3);
           result = (bool_t) true;
} else {
           
           bool_t ivar_103;
           sigmatopdown__ent_adt_t ivar_116;
           sigmatopdown_array_65_t ivar_108;
           ivar_108 = (sigmatopdown_array_65_t)ivar_3->elems[ivar_5];
           ivar_108->count++;
           ivar_116 = (sigmatopdown__ent_adt_t)ivar_108->elems[ivar_81];
           ivar_116->count++;
           release_sigmatopdown_array_65(ivar_108);
           ivar_103 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_116);
           if (ivar_103){    
            sigmatopdown__ent_adt_t ivar_128;
            sigmatopdown_array_65_t ivar_120;
            ivar_120 = (sigmatopdown_array_65_t)ivar_3->elems[ivar_5];
            ivar_120->count++;
            release_sigmatopdown_array_66(ivar_3);
            ivar_128 = (sigmatopdown__ent_adt_t)ivar_120->elems[ivar_82];
            ivar_128->count++;
            release_sigmatopdown_array_65(ivar_120);
            result = (bool_t)sigmatopdown__loop_or_pushp((sigmatopdown__ent_adt_t)ivar_128);
} else {
           
            release_sigmatopdown_array_66(ivar_3);
            result = (bool_t) false;
};
};
} else {
             
           bool_t ivar_151;
           ivar_7->count++;
           ivar_151 = (bool_t)r_sigmatopdown__andp((sigmatopdown__peg_adt_t)ivar_7);
           if (ivar_151){   
           uint8_t ivar_135;
           ivar_135 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_7);
           sigmatopdown__ent_adt_t ivar_150;
           sigmatopdown_array_65_t ivar_142;
           ivar_142 = (sigmatopdown_array_65_t)ivar_3->elems[ivar_5];
           ivar_142->count++;
           release_sigmatopdown_array_66(ivar_3);
           ivar_150 = (sigmatopdown__ent_adt_t)ivar_142->elems[ivar_135];
           ivar_150->count++;
           release_sigmatopdown_array_65(ivar_142);
           result = (bool_t)sigmatopdown__loop_or_pushp((sigmatopdown__ent_adt_t)ivar_150);
} else {
           
           bool_t ivar_171;
           ivar_7->count++;
           ivar_171 = (bool_t)r_sigmatopdown__notp((sigmatopdown__peg_adt_t)ivar_7);
           if (ivar_171){    
            uint8_t ivar_155;
            ivar_155 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_7);
            sigmatopdown__ent_adt_t ivar_170;
            sigmatopdown_array_65_t ivar_162;
            ivar_162 = (sigmatopdown_array_65_t)ivar_3->elems[ivar_5];
            ivar_162->count++;
            release_sigmatopdown_array_66(ivar_3);
            ivar_170 = (sigmatopdown__ent_adt_t)ivar_162->elems[ivar_155];
            ivar_170->count++;
            release_sigmatopdown_array_65(ivar_162);
            result = (bool_t)sigmatopdown__loop_or_pushp((sigmatopdown__ent_adt_t)ivar_170);
} else {
           
            release_sigmatopdown__peg_adt(ivar_7);
            release_sigmatopdown_array_66(ivar_3);
            result = (bool_t) false;
};
};
};
};

        
        return result;
}

extern sigmatopdown_funtype_85_t sigmatopdown__good_failp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3){
        sigmatopdown_funtype_85_t  result;
        sigmatopdown_closure_87_t cl29354;
        cl29354 = new_sigmatopdown_closure_87();
        cl29354->fvar_1 = (sigmatopdown_array_86_t)ivar_3;
        if (cl29354->fvar_1 != NULL) cl29354->fvar_1->count++;
        cl29354->fvar_2 = (uint32_t)ivar_1;
        cl29354->fvar_3 = (sigmatopdown__lang_spec_t)ivar_2;
        if (cl29354->fvar_3 != NULL) cl29354->fvar_3->count++;
        release_sigmatopdown_array_86(ivar_3);
        release_sigmatopdown__lang_spec(ivar_2);
        result = (sigmatopdown_funtype_85_t)cl29354;

        
        return result;
}

extern sigmatopdown_funtype_89_t sigmatopdown__good_loopp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2){
        sigmatopdown_funtype_89_t  result;
        sigmatopdown_closure_90_t cl29492;
        cl29492 = new_sigmatopdown_closure_90();
        cl29492->fvar_1 = (uint32_t)ivar_1;
        cl29492->fvar_2 = (sigmatopdown__lang_spec_t)ivar_2;
        if (cl29492->fvar_2 != NULL) cl29492->fvar_2->count++;
        release_sigmatopdown__lang_spec(ivar_2);
        result = (sigmatopdown_funtype_89_t)cl29492;

        
        return result;
}

extern sigmatopdown_funtype_92_t sigmatopdown__good_goodp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3){
        sigmatopdown_funtype_92_t  result;
        sigmatopdown_closure_93_t cl29735;
        cl29735 = new_sigmatopdown_closure_93();
        cl29735->fvar_1 = (sigmatopdown_array_86_t)ivar_3;
        if (cl29735->fvar_1 != NULL) cl29735->fvar_1->count++;
        cl29735->fvar_2 = (uint32_t)ivar_1;
        cl29735->fvar_3 = (sigmatopdown__lang_spec_t)ivar_2;
        if (cl29735->fvar_3 != NULL) cl29735->fvar_3->count++;
        release_sigmatopdown_array_86(ivar_3);
        release_sigmatopdown__lang_spec(ivar_2);
        result = (sigmatopdown_funtype_92_t)cl29735;

        
        return result;
}

extern sigmatopdown_funtype_95_t sigmatopdown__good_entryp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3){
        sigmatopdown_funtype_95_t  result;
        sigmatopdown_closure_96_t cl29864;
        cl29864 = new_sigmatopdown_closure_96();
        cl29864->fvar_1 = (uint32_t)ivar_1;
        cl29864->fvar_2 = (sigmatopdown__lang_spec_t)ivar_2;
        if (cl29864->fvar_2 != NULL) cl29864->fvar_2->count++;
        cl29864->fvar_3 = (sigmatopdown_array_86_t)ivar_3;
        if (cl29864->fvar_3 != NULL) cl29864->fvar_3->count++;
        release_sigmatopdown__lang_spec(ivar_2);
        release_sigmatopdown_array_86(ivar_3);
        result = (sigmatopdown_funtype_95_t)cl29864;

        
        return result;
}

extern sigmatopdown_funtype_95_t sigmatopdown__fine_entryp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3){
        sigmatopdown_funtype_95_t  result;
        sigmatopdown_closure_97_t cl29996;
        cl29996 = new_sigmatopdown_closure_97();
        cl29996->fvar_1 = (uint32_t)ivar_1;
        cl29996->fvar_2 = (sigmatopdown__lang_spec_t)ivar_2;
        if (cl29996->fvar_2 != NULL) cl29996->fvar_2->count++;
        cl29996->fvar_3 = (sigmatopdown_array_86_t)ivar_3;
        if (cl29996->fvar_3 != NULL) cl29996->fvar_3->count++;
        release_sigmatopdown__lang_spec(ivar_2);
        release_sigmatopdown_array_86(ivar_3);
        result = (sigmatopdown_funtype_95_t)cl29996;

        
        return result;
}

extern sigmatopdown_funtype_98_t sigmatopdown__good_tscaffoldp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3){
        sigmatopdown_funtype_98_t  result;
        sigmatopdown_closure_99_t cl30031;
        cl30031 = new_sigmatopdown_closure_99();
        cl30031->fvar_1 = (uint32_t)ivar_1;
        result = (sigmatopdown_funtype_98_t)cl30031;

        
        return result;
}

extern sigmatopdown_funtype_64_t sigmatopdown__good_rootp(uint32_t ivar_1, sigmatopdown_array_66_t ivar_2){
        sigmatopdown_funtype_64_t  result;
        sigmatopdown_closure_100_t cl30062;
        cl30062 = new_sigmatopdown_closure_100();
        cl30062->fvar_1 = (sigmatopdown_array_66_t)ivar_2;
        if (cl30062->fvar_1 != NULL) cl30062->fvar_1->count++;
        cl30062->fvar_2 = (uint32_t)ivar_1;
        release_sigmatopdown_array_66(ivar_2);
        result = (sigmatopdown_funtype_64_t)cl30062;

        
        return result;
}

extern sigmatopdown_funtype_101_t sigmatopdown__fine_scaffoldp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3){
        sigmatopdown_funtype_101_t  result;
        sigmatopdown_closure_102_t cl30129;
        cl30129 = new_sigmatopdown_closure_102();
        cl30129->fvar_1 = (sigmatopdown_array_86_t)ivar_3;
        if (cl30129->fvar_1 != NULL) cl30129->fvar_1->count++;
        cl30129->fvar_2 = (sigmatopdown__lang_spec_t)ivar_2;
        if (cl30129->fvar_2 != NULL) cl30129->fvar_2->count++;
        cl30129->fvar_3 = (uint32_t)ivar_1;
        release_sigmatopdown_array_86(ivar_3);
        release_sigmatopdown__lang_spec(ivar_2);
        result = (sigmatopdown_funtype_101_t)cl30129;

        
        return result;
}

extern bool_t sigmatopdown__emptyp(sigmatopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)sigmatopdown__ent_adt_nt((sigmatopdown__ent_adt_t)ivar_1);
        uint8_t ivar_3;
        ivar_3 = (uint8_t)sigmatopdown__num_non_terminals();
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern sigmatopdown_funtype_105_t sigmatopdown__step(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3, uint32_t ivar_4, uint8_t ivar_5){
        sigmatopdown_funtype_105_t  result;
        sigmatopdown_closure_106_t cl33508;
        cl33508 = new_sigmatopdown_closure_106();
        cl33508->fvar_1 = (uint32_t)ivar_1;
        cl33508->fvar_2 = (sigmatopdown_array_86_t)ivar_3;
        if (cl33508->fvar_2 != NULL) cl33508->fvar_2->count++;
        cl33508->fvar_3 = (sigmatopdown__lang_spec_t)ivar_2;
        if (cl33508->fvar_3 != NULL) cl33508->fvar_3->count++;
        release_sigmatopdown_array_86(ivar_3);
        release_sigmatopdown__lang_spec(ivar_2);
        result = (sigmatopdown_funtype_105_t)cl33508;

        
        return result;
}

extern sigmatopdown_funtype_108_t sigmatopdown__size(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3, uint32_t ivar_4, uint8_t ivar_5){
        sigmatopdown_funtype_108_t  result;
        sigmatopdown_closure_109_t cl33610;
        cl33610 = new_sigmatopdown_closure_109();
        cl33610->fvar_1 = (uint32_t)ivar_1;
        result = (sigmatopdown_funtype_108_t)cl33610;

        
        return result;
}

extern sigmatopdown_record_104_t sigmatopdown__parse(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3, uint32_t ivar_4, uint8_t ivar_5, sigmatopdown_record_104_t ivar_6){
        sigmatopdown_record_104_t  result;
        bool_t ivar_9;
        uint64_t ivar_10;
        ivar_10 = (uint64_t)ivar_6->depth;
        uint8_t ivar_11;
        ivar_11 = (uint8_t)0;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             release_sigmatopdown_array_86(ivar_3);
             release_sigmatopdown__lang_spec(ivar_2);
             //copying to sigmatopdown_record_104 from sigmatopdown_record_104;
             result = (sigmatopdown_record_104_t)ivar_6;
             if (result != NULL) result->count++;
             release_sigmatopdown_record_104(ivar_6);
} else {
        
             sigmatopdown_record_104_t ivar_52;
             sigmatopdown_funtype_105_t ivar_29;
             ivar_2->count++;
             ivar_3->count++;
             ivar_29 = (sigmatopdown_funtype_105_t)sigmatopdown__step((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatopdown_array_86_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
             ivar_52 = (sigmatopdown_record_104_t)ivar_29->ftbl->fptr(ivar_29, ivar_6);
             ivar_29->ftbl->rptr(ivar_29);
             result = (sigmatopdown_record_104_t)sigmatopdown__parse((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatopdown_array_86_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (sigmatopdown_record_104_t)ivar_52);
};

        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatopdown__doparse(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdown_array_86_t ivar_3, uint8_t ivar_4){
        sigmatopdown__ent_adt_t  result;
        /* pend */ sigmatopdown_funtype_111_t ivar_5;
        sigmatopdown_closure_112_t cl33840;
        cl33840 = new_sigmatopdown_closure_112();
        ivar_5 = (sigmatopdown_funtype_111_t)cl33840;
        sigmatopdown_record_114_t ivar_82;
        uint8_t ivar_16;
        ivar_16 = (uint8_t)1;
        bool_t ivar_17;
        ivar_17 = (bool_t) false;
        sigmatopdown_funtype_113_t ivar_45;
        sigmatopdown__ent_adt_t ivar_25;
        uint8_t ivar_32;
        ivar_32 = (uint8_t)0;
        uint32_t ivar_29;
        //copying to uint32 from uint8;
        ivar_29 = (uint32_t)ivar_32;
        uint8_t ivar_30;
        ivar_30 = (uint8_t)sigmatopdown__num_non_terminals();
        ivar_25 = (sigmatopdown__ent_adt_t)sigmatopdown__push((uint32_t)ivar_29, (uint8_t)ivar_30);
        sigmatopdown_funtype_113_t ivar_33;
        sigmatopdown_closure_115_t cl33862;
        cl33862 = new_sigmatopdown_closure_115();
        cl33862->fvar_1 = (uint32_t)ivar_1;
        cl33862->fvar_2 = (sigmatopdown_funtype_111_t)ivar_5;
        if (cl33862->fvar_2 != NULL) cl33862->fvar_2->count++;
        release_sigmatopdown_funtype_111(ivar_5);
        ivar_33 = (sigmatopdown_funtype_113_t)cl33862;
        uint32_t ivar_40;
        ivar_40 = (uint32_t)0;
        sigmatopdown_funtype_111_t ivar_34;
        ivar_34 = (sigmatopdown_funtype_111_t)ivar_33->ftbl->fptr(ivar_33, ivar_40);
        sigmatopdown_funtype_113_t ivar_41;
        sigmatopdown_funtype_111_t ivar_43;
        ivar_43 = NULL;
        ivar_41 = (sigmatopdown_funtype_113_t)update_sigmatopdown_funtype_113(ivar_33, ivar_40, ivar_43);
        if (ivar_43 != NULL) ivar_43->count--;
        sigmatopdown_funtype_111_t ivar_42;
        sigmatopdown_funtype_111_t ivar_37;
        sigmatopdown__ent_adt_t ivar_39;
        ivar_39 = NULL;
        ivar_37 = (sigmatopdown_funtype_111_t)update_sigmatopdown_funtype_111(ivar_34, ivar_4, ivar_39);
        if (ivar_39 != NULL) ivar_39->count--;
        ivar_42 = (sigmatopdown_funtype_111_t)update_sigmatopdown_funtype_111(ivar_37, ivar_4, ivar_25);
        if (ivar_25 != NULL) ivar_25->count--;
        ivar_45 = (sigmatopdown_funtype_113_t)update_sigmatopdown_funtype_113(ivar_41, ivar_40, ivar_42);
        if (ivar_42 != NULL) ivar_42->count--;
        sigmatopdown__ent_adt_t ivar_53;
        uint8_t ivar_52;
        ivar_52 = (uint8_t)0;
        uint32_t ivar_49;
        //copying to uint32 from uint8;
        ivar_49 = (uint32_t)ivar_52;
        ivar_53 = (sigmatopdown__ent_adt_t)sigmatopdown__push((uint32_t)ivar_49, (uint8_t)ivar_4);
        sigmatopdown_record_114_t tmp33896 = new_sigmatopdown_record_114();;
        ivar_82 = (sigmatopdown_record_114_t)tmp33896;
        tmp33896->depth = (uint8_t)ivar_16;
        tmp33896->lflag = (bool_t)ivar_17;
        tmp33896->scaf = (sigmatopdown_funtype_113_t)ivar_45;
        tmp33896->stack = (sigmatopdown__ent_adt_t)ivar_53;
        /* St */ sigmatopdown_record_104_t ivar_10;
        //copying to sigmatopdown_record_104 from sigmatopdown_record_114;
        {
         ivar_10 = new_sigmatopdown_record_104();
         uint32_t tmp33913;
         //copying to uint32 from uint32;
         tmp33913 = (uint32_t)ivar_1;
         tmp33913 += 1;
         ivar_10->scaf = new_sigmatopdown_array_66(tmp33913);
         for (uint32_t index_83 = 0; index_83 < tmp33913; index_83++){
                 uint32_t tmp33915;
                 tmp33915 = (uint32_t)255;
                 ivar_10->scaf->elems[index_83] = new_sigmatopdown_array_65(tmp33915);
                 for (uint32_t index_84 = 0; index_84 < tmp33915; index_84++){
                  ivar_10->scaf->elems[index_83]->elems[index_84] = (sigmatopdown__ent_adt_t)ivar_82->scaf->ftbl->fptr(ivar_82->scaf, index_83)->ftbl->fptr(ivar_82->scaf->ftbl->fptr(ivar_82->scaf, index_83), index_84);
                  if (ivar_10->scaf->elems[index_83]->elems[index_84] != NULL) ivar_10->scaf->elems[index_83]->elems[index_84]->count++;
                 };
         };
         ivar_10->depth = (uint64_t)ivar_82->depth;
         ivar_10->stack = (sigmatopdown__ent_adt_t)ivar_82->stack;
         if (ivar_10->stack != NULL) ivar_10->stack->count++;
         ivar_10->lflag = (bool_t)ivar_82->lflag;
        };
        release_sigmatopdown_record_114(ivar_82);
        sigmatopdown_array_65_t ivar_56;
        sigmatopdown_array_66_t ivar_60;
        sigmatopdown_record_104_t ivar_78;
        uint8_t ivar_77;
        ivar_77 = (uint8_t)0;
        uint32_t ivar_72;
        //copying to uint32 from uint8;
        ivar_72 = (uint32_t)ivar_77;
        ivar_78 = (sigmatopdown_record_104_t)sigmatopdown__parse((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatopdown_array_86_t)ivar_3, (uint32_t)ivar_72, (uint8_t)ivar_4, (sigmatopdown_record_104_t)ivar_10);
        ivar_60 = (sigmatopdown_array_66_t)ivar_78->scaf;
        ivar_60->count++;
        release_sigmatopdown_record_104(ivar_78);
        uint32_t ivar_80;
        ivar_80 = (uint32_t)0;
        ivar_56 = (sigmatopdown_array_65_t)ivar_60->elems[ivar_80];
        ivar_56->count++;
        release_sigmatopdown_array_66(ivar_60);
        result = (sigmatopdown__ent_adt_t)ivar_56->elems[ivar_4];
        result->count++;
        release_sigmatopdown_array_65(ivar_56);

        
        return result;
}