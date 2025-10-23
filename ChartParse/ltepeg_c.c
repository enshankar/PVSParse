//Code generated using pvs2ir2c
#include "ltepeg_c.h"


ltepeg__ent_adt_t new_ltepeg__ent_adt(void){
        ltepeg__ent_adt_t tmp = (ltepeg__ent_adt_t) safe_malloc(sizeof(struct ltepeg__ent_adt_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg__ent_adt(ltepeg__ent_adt_t x){
switch (x->ltepeg__ent_adt_index) {
case 0:  release_ltepeg__fail((ltepeg__fail_t) x); break;
case 3:  release_ltepeg__good((ltepeg__good_t) x); break;
case 4:  release_ltepeg__push((ltepeg__push_t) x); break;
}}

void release_ltepeg__ent_adt_ptr(pointer_t x, type_actual_t T){
        release_ltepeg__ent_adt((ltepeg__ent_adt_t)x);
}

ltepeg__ent_adt_t copy_ltepeg__ent_adt(ltepeg__ent_adt_t x){
        ltepeg__ent_adt_t y = new_ltepeg__ent_adt();
        y->ltepeg__ent_adt_index = (uint8_t)x->ltepeg__ent_adt_index;
        y->count = 1;
        return y;}

bool_t equal_ltepeg__ent_adt(ltepeg__ent_adt_t x, ltepeg__ent_adt_t y){
        bool_t tmp = x->ltepeg__ent_adt_index == y->ltepeg__ent_adt_index;
        switch  (x->ltepeg__ent_adt_index) {
                case 0: tmp = tmp && equal_ltepeg__fail((ltepeg__fail_t) x, (ltepeg__fail_t) y); break;
                case 3: tmp = tmp && equal_ltepeg__good((ltepeg__good_t) x, (ltepeg__good_t) y); break;
                case 4: tmp = tmp && equal_ltepeg__push((ltepeg__push_t) x, (ltepeg__push_t) y); break;
        }
        return tmp;
}

char * json_ltepeg__ent_adt(ltepeg__ent_adt_t x){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ constructor = %u", x->ltepeg__ent_adt_index);
        switch  (x->ltepeg__ent_adt_index) {
                case 0: tmp = safe_strcat(tmp, json_ltepeg__fail((ltepeg__fail_t) x)); break;
                case 3: tmp = safe_strcat(tmp, json_ltepeg__good((ltepeg__good_t) x)); break;
                case 4: tmp = safe_strcat(tmp, json_ltepeg__push((ltepeg__push_t) x)); break;
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_ltepeg__ent_adt_ptr(pointer_t x, pointer_t y, actual_ltepeg__ent_adt_t T){
        return equal_ltepeg__ent_adt((ltepeg__ent_adt_t)x, (ltepeg__ent_adt_t)y);
}

char * json_ltepeg__ent_adt_ptr(pointer_t x, actual_ltepeg__ent_adt_t T){
        return json_ltepeg__ent_adt((ltepeg__ent_adt_t)x);
}

actual_ltepeg__ent_adt_t actual_ltepeg__ent_adt(){
        actual_ltepeg__ent_adt_t new = (actual_ltepeg__ent_adt_t)safe_malloc(sizeof(struct actual_ltepeg__ent_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg__ent_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg__ent_adt_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg__ent_adt_ptr);
 

 
        return new;
 };

ltepeg__ent_adt_t update_ltepeg__ent_adt_ltepeg__ent_adt_index(ltepeg__ent_adt_t x, uint8_t v){
        ltepeg__ent_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg__ent_adt(x); x->count--;};
        y->ltepeg__ent_adt_index = (uint8_t)v;
        return y;}




ltepeg__fail_t new_ltepeg__fail(void){
        ltepeg__fail_t tmp = (ltepeg__fail_t) safe_malloc(sizeof(struct ltepeg__fail_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg__fail(ltepeg__fail_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg__fail_ptr(pointer_t x, type_actual_t T){
        release_ltepeg__fail((ltepeg__fail_t)x);
}

ltepeg__fail_t copy_ltepeg__fail(ltepeg__fail_t x){
        ltepeg__fail_t y = new_ltepeg__fail();
        y->ltepeg__ent_adt_index = (uint8_t)x->ltepeg__ent_adt_index;
        y->dep = (uint64_t)x->dep;
        y->count = 1;
        return y;}

bool_t equal_ltepeg__fail(ltepeg__fail_t x, ltepeg__fail_t y){
        bool_t tmp = true;
        tmp = tmp && x->ltepeg__ent_adt_index == y->ltepeg__ent_adt_index;
        tmp = tmp && x->dep == y->dep;
        return tmp;}

char * json_ltepeg__fail(ltepeg__fail_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(33);
         sprintf(fld0, "\"ltepeg__ent_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ltepeg__ent_adt_index));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"dep\" : ");
        tmp[1] = safe_strcat(fld1, json_uint64(x->dep));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg__fail_ptr(pointer_t x, pointer_t y, actual_ltepeg__fail_t T){
        return equal_ltepeg__fail((ltepeg__fail_t)x, (ltepeg__fail_t)y);
}

char * json_ltepeg__fail_ptr(pointer_t x, actual_ltepeg__fail_t T){
        return json_ltepeg__fail((ltepeg__fail_t)x);
}

actual_ltepeg__fail_t actual_ltepeg__fail(){
        actual_ltepeg__fail_t new = (actual_ltepeg__fail_t)safe_malloc(sizeof(struct actual_ltepeg__fail_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg__fail_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg__fail_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg__fail_ptr);
 

 
        return new;
 };

ltepeg__fail_t update_ltepeg__fail_ltepeg__ent_adt_index(ltepeg__fail_t x, uint8_t v){
        ltepeg__fail_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg__fail(x); x->count--;};
        y->ltepeg__ent_adt_index = (uint8_t)v;
        return y;}

ltepeg__fail_t update_ltepeg__fail_dep(ltepeg__fail_t x, uint64_t v){
        ltepeg__fail_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg__fail(x); x->count--;};
        y->dep = (uint64_t)v;
        return y;}




ltepeg__good_t new_ltepeg__good(void){
        ltepeg__good_t tmp = (ltepeg__good_t) safe_malloc(sizeof(struct ltepeg__good_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg__good(ltepeg__good_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg__good_ptr(pointer_t x, type_actual_t T){
        release_ltepeg__good((ltepeg__good_t)x);
}

ltepeg__good_t copy_ltepeg__good(ltepeg__good_t x){
        ltepeg__good_t y = new_ltepeg__good();
        y->ltepeg__ent_adt_index = (uint8_t)x->ltepeg__ent_adt_index;
        y->dep = (uint64_t)x->dep;
        y->span = (uint32_t)x->span;
        y->count = 1;
        return y;}

bool_t equal_ltepeg__good(ltepeg__good_t x, ltepeg__good_t y){
        bool_t tmp = true;
        tmp = tmp && x->ltepeg__ent_adt_index == y->ltepeg__ent_adt_index;
        tmp = tmp && x->dep == y->dep;
        tmp = tmp && x->span == y->span;
        return tmp;}

char * json_ltepeg__good(ltepeg__good_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(33);
         sprintf(fld0, "\"ltepeg__ent_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ltepeg__ent_adt_index));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"dep\" : ");
        tmp[1] = safe_strcat(fld1, json_uint64(x->dep));
        char * fld2 = safe_malloc(16);
         sprintf(fld2, "\"span\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->span));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg__good_ptr(pointer_t x, pointer_t y, actual_ltepeg__good_t T){
        return equal_ltepeg__good((ltepeg__good_t)x, (ltepeg__good_t)y);
}

char * json_ltepeg__good_ptr(pointer_t x, actual_ltepeg__good_t T){
        return json_ltepeg__good((ltepeg__good_t)x);
}

actual_ltepeg__good_t actual_ltepeg__good(){
        actual_ltepeg__good_t new = (actual_ltepeg__good_t)safe_malloc(sizeof(struct actual_ltepeg__good_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg__good_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg__good_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg__good_ptr);
 

 
        return new;
 };

ltepeg__good_t update_ltepeg__good_ltepeg__ent_adt_index(ltepeg__good_t x, uint8_t v){
        ltepeg__good_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg__good(x); x->count--;};
        y->ltepeg__ent_adt_index = (uint8_t)v;
        return y;}

ltepeg__good_t update_ltepeg__good_dep(ltepeg__good_t x, uint64_t v){
        ltepeg__good_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg__good(x); x->count--;};
        y->dep = (uint64_t)v;
        return y;}

ltepeg__good_t update_ltepeg__good_span(ltepeg__good_t x, uint32_t v){
        ltepeg__good_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg__good(x); x->count--;};
        y->span = (uint32_t)v;
        return y;}




ltepeg__push_t new_ltepeg__push(void){
        ltepeg__push_t tmp = (ltepeg__push_t) safe_malloc(sizeof(struct ltepeg__push_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg__push(ltepeg__push_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg__push_ptr(pointer_t x, type_actual_t T){
        release_ltepeg__push((ltepeg__push_t)x);
}

ltepeg__push_t copy_ltepeg__push(ltepeg__push_t x){
        ltepeg__push_t y = new_ltepeg__push();
        y->ltepeg__ent_adt_index = (uint8_t)x->ltepeg__ent_adt_index;
        y->pos = (uint32_t)x->pos;
        y->nt = (uint8_t)x->nt;
        y->count = 1;
        return y;}

bool_t equal_ltepeg__push(ltepeg__push_t x, ltepeg__push_t y){
        bool_t tmp = true;
        tmp = tmp && x->ltepeg__ent_adt_index == y->ltepeg__ent_adt_index;
        tmp = tmp && x->pos == y->pos;
        tmp = tmp && x->nt == y->nt;
        return tmp;}

char * json_ltepeg__push(ltepeg__push_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(33);
         sprintf(fld0, "\"ltepeg__ent_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ltepeg__ent_adt_index));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"pos\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->pos));
        char * fld2 = safe_malloc(14);
         sprintf(fld2, "\"nt\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->nt));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg__push_ptr(pointer_t x, pointer_t y, actual_ltepeg__push_t T){
        return equal_ltepeg__push((ltepeg__push_t)x, (ltepeg__push_t)y);
}

char * json_ltepeg__push_ptr(pointer_t x, actual_ltepeg__push_t T){
        return json_ltepeg__push((ltepeg__push_t)x);
}

actual_ltepeg__push_t actual_ltepeg__push(){
        actual_ltepeg__push_t new = (actual_ltepeg__push_t)safe_malloc(sizeof(struct actual_ltepeg__push_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg__push_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg__push_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg__push_ptr);
 

 
        return new;
 };

ltepeg__push_t update_ltepeg__push_ltepeg__ent_adt_index(ltepeg__push_t x, uint8_t v){
        ltepeg__push_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg__push(x); x->count--;};
        y->ltepeg__ent_adt_index = (uint8_t)v;
        return y;}

ltepeg__push_t update_ltepeg__push_pos(ltepeg__push_t x, uint32_t v){
        ltepeg__push_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg__push(x); x->count--;};
        y->pos = (uint32_t)v;
        return y;}

ltepeg__push_t update_ltepeg__push_nt(ltepeg__push_t x, uint8_t v){
        ltepeg__push_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg__push(x); x->count--;};
        y->nt = (uint8_t)v;
        return y;}



void release_ltepeg_funtype_4(ltepeg_funtype_4_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_4_t copy_ltepeg_funtype_4(ltepeg_funtype_4_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_4(ltepeg_funtype_4_t x, ltepeg_funtype_4_t y){
        return false;}

char* json_ltepeg_funtype_4(ltepeg_funtype_4_t x){char * result = safe_malloc(26); sprintf(result, "%s", "\"ltepeg_funtype_4\""); return result;}

void release_ltepeg_funtype_5(ltepeg_funtype_5_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_5_t copy_ltepeg_funtype_5(ltepeg_funtype_5_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_5(ltepeg_funtype_5_t x, ltepeg_funtype_5_t y){
        return false;}

char* json_ltepeg_funtype_5(ltepeg_funtype_5_t x){char * result = safe_malloc(26); sprintf(result, "%s", "\"ltepeg_funtype_5\""); return result;}

void release_ltepeg_funtype_6(ltepeg_funtype_6_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_6_t copy_ltepeg_funtype_6(ltepeg_funtype_6_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltepeg_funtype_6(ltepeg_funtype_6_htbl_t htbl, uint64_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltepeg_funtype_6_hashentry_t data = htbl->data[hashindex];
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

ltepeg_funtype_6_t dupdate_ltepeg_funtype_6(ltepeg_funtype_6_t a, uint64_t i, mpz_ptr_t v){
        ltepeg_funtype_6_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltepeg_funtype_6_htbl_t)safe_malloc(sizeof(struct ltepeg_funtype_6_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltepeg_funtype_6_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltepeg_funtype_6_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint64_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltepeg_funtype_6_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltepeg_funtype_6_hashentry_t * new_data = (ltepeg_funtype_6_hashentry_t *)safe_malloc(new_size * sizeof(struct ltepeg_funtype_6_hashentry_s));
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
        uint32_t hashindex = lookup_ltepeg_funtype_6(htbl, i, ihash);
        ltepeg_funtype_6_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint64_t)i; htbl->data[hashindex].keyhash = ihash; mpz_set(htbl->data[hashindex].value, v); htbl->num_entries++;}
            else {mpz_ptr_t tempvalue;mpz_mk_set(tempvalue, htbl->data[hashindex].value);mpz_set(htbl->data[hashindex].value, v);};
        return a;

}

ltepeg_funtype_6_t update_ltepeg_funtype_6(ltepeg_funtype_6_t a, uint64_t i, mpz_ptr_t v){
        if (a->count == 1){
                return dupdate_ltepeg_funtype_6(a, i, v);
            } else {
                ltepeg_funtype_6_t x = copy_ltepeg_funtype_6(a);
                a->count--;
                return dupdate_ltepeg_funtype_6(x, i, v);
            }}

bool_t equal_ltepeg_funtype_6(ltepeg_funtype_6_t x, ltepeg_funtype_6_t y){
        return false;}

char* json_ltepeg_funtype_6(ltepeg_funtype_6_t x){char * result = safe_malloc(26); sprintf(result, "%s", "\"ltepeg_funtype_6\""); return result;}


ltepeg_record_7_t new_ltepeg_record_7(void){
        ltepeg_record_7_t tmp = (ltepeg_record_7_t) safe_malloc(sizeof(struct ltepeg_record_7_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg_record_7(ltepeg_record_7_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg_record_7_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_record_7((ltepeg_record_7_t)x);
}

ltepeg_record_7_t copy_ltepeg_record_7(ltepeg_record_7_t x){
        ltepeg_record_7_t y = new_ltepeg_record_7();
        y->project_1 = (uint64_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->count = 1;
        return y;}

bool_t equal_ltepeg_record_7(ltepeg_record_7_t x, ltepeg_record_7_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

char * json_ltepeg_record_7(ltepeg_record_7_t x){
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

bool_t equal_ltepeg_record_7_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_7_t T){
        return equal_ltepeg_record_7((ltepeg_record_7_t)x, (ltepeg_record_7_t)y);
}

char * json_ltepeg_record_7_ptr(pointer_t x, actual_ltepeg_record_7_t T){
        return json_ltepeg_record_7((ltepeg_record_7_t)x);
}

actual_ltepeg_record_7_t actual_ltepeg_record_7(){
        actual_ltepeg_record_7_t new = (actual_ltepeg_record_7_t)safe_malloc(sizeof(struct actual_ltepeg_record_7_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_record_7_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_record_7_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_record_7_ptr);
 

 
        return new;
 };

ltepeg_record_7_t update_ltepeg_record_7_project_1(ltepeg_record_7_t x, uint64_t v){
        ltepeg_record_7_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_7(x); x->count--;};
        y->project_1 = (uint64_t)v;
        return y;}

ltepeg_record_7_t update_ltepeg_record_7_project_2(ltepeg_record_7_t x, uint32_t v){
        ltepeg_record_7_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_7(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}



void release_ltepeg_funtype_8(ltepeg_funtype_8_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_8_t copy_ltepeg_funtype_8(ltepeg_funtype_8_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_8(ltepeg_funtype_8_t x, ltepeg_funtype_8_t y){
        return false;}

char* json_ltepeg_funtype_8(ltepeg_funtype_8_t x){char * result = safe_malloc(26); sprintf(result, "%s", "\"ltepeg_funtype_8\""); return result;}


ltepeg_record_9_t new_ltepeg_record_9(void){
        ltepeg_record_9_t tmp = (ltepeg_record_9_t) safe_malloc(sizeof(struct ltepeg_record_9_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg_record_9(ltepeg_record_9_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg_record_9_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_record_9((ltepeg_record_9_t)x);
}

ltepeg_record_9_t copy_ltepeg_record_9(ltepeg_record_9_t x){
        ltepeg_record_9_t y = new_ltepeg_record_9();
        y->project_1 = (uint32_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->count = 1;
        return y;}

bool_t equal_ltepeg_record_9(ltepeg_record_9_t x, ltepeg_record_9_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

char * json_ltepeg_record_9(ltepeg_record_9_t x){
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

bool_t equal_ltepeg_record_9_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_9_t T){
        return equal_ltepeg_record_9((ltepeg_record_9_t)x, (ltepeg_record_9_t)y);
}

char * json_ltepeg_record_9_ptr(pointer_t x, actual_ltepeg_record_9_t T){
        return json_ltepeg_record_9((ltepeg_record_9_t)x);
}

actual_ltepeg_record_9_t actual_ltepeg_record_9(){
        actual_ltepeg_record_9_t new = (actual_ltepeg_record_9_t)safe_malloc(sizeof(struct actual_ltepeg_record_9_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_record_9_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_record_9_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_record_9_ptr);
 

 
        return new;
 };

ltepeg_record_9_t update_ltepeg_record_9_project_1(ltepeg_record_9_t x, uint32_t v){
        ltepeg_record_9_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_9(x); x->count--;};
        y->project_1 = (uint32_t)v;
        return y;}

ltepeg_record_9_t update_ltepeg_record_9_project_2(ltepeg_record_9_t x, uint8_t v){
        ltepeg_record_9_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_9(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}



void release_ltepeg_funtype_10(ltepeg_funtype_10_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_10_t copy_ltepeg_funtype_10(ltepeg_funtype_10_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_10(ltepeg_funtype_10_t x, ltepeg_funtype_10_t y){
        return false;}

char* json_ltepeg_funtype_10(ltepeg_funtype_10_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_10\""); return result;}


mpz_ptr_t f_ltepeg_closure_11(struct ltepeg_closure_11_s * closure, ltepeg__ent_adt_t bvar){
        mpz_ptr_t result = h_ltepeg_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

mpz_ptr_t m_ltepeg_closure_11(struct ltepeg_closure_11_s * closure, ltepeg__ent_adt_t bvar){
        return h_ltepeg_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern mpz_ptr_t h_ltepeg_closure_11(ltepeg__ent_adt_t ivar_10, ltepeg_funtype_8_t ivar_5, ltepeg_funtype_10_t ivar_7, mpz_ptr_t ivar_4, mpz_ptr_t ivar_3, ltepeg_funtype_6_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_40;
        ivar_10->count++;
        ivar_40 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_10);
        if (ivar_40){ 
             uint64_t ivar_31;
             ivar_31 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_10);
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_31));
} else {
        
             bool_t ivar_44;
             ivar_10->count++;
             ivar_44 = (bool_t)r_ltepeg__pendingp((ltepeg__ent_adt_t)ivar_10);
             if (ivar_44){  
           release_ltepeg__ent_adt(ivar_10);
           //copying to mpz from mpz;
           mpz_mk_set(result, ivar_3);
} else {
             
           bool_t ivar_48;
           ivar_10->count++;
           ivar_48 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_10);
           if (ivar_48){   
           release_ltepeg__ent_adt(ivar_10);
           //copying to mpz from mpz;
           mpz_mk_set(result, ivar_4);
} else {
           
           bool_t ivar_67;
           ivar_10->count++;
           ivar_67 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_10);
           if (ivar_67){    
            uint64_t ivar_52;
            ivar_10->count++;
            ivar_52 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_10);
            uint32_t ivar_53;
            ivar_53 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_10);
            mpz_mk_set(result, ivar_5->ftbl->mptr(ivar_5, ivar_52, ivar_53));
} else {
           
            uint32_t ivar_71;
            ivar_10->count++;
            ivar_71 = (uint32_t)ltepeg__ent_adt_pos((ltepeg__ent_adt_t)ivar_10);
            uint8_t ivar_72;
            ivar_72 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_10);
            mpz_mk_set(result, ivar_7->ftbl->mptr(ivar_7, ivar_71, ivar_72));
};
};
};
};

        return result;
}

ltepeg_closure_11_t new_ltepeg_closure_11(void){
        static struct ltepeg_funtype_5_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ltepeg_funtype_5_t, ltepeg__ent_adt_t))&f_ltepeg_closure_11, .mptr = (mpz_ptr_t (*)(ltepeg_funtype_5_t, ltepeg__ent_adt_t))&m_ltepeg_closure_11, .rptr =  (void (*)(ltepeg_funtype_5_t))&release_ltepeg_closure_11, .cptr = (ltepeg_funtype_5_t (*)(ltepeg_funtype_5_t))&copy_ltepeg_closure_11};
        ltepeg_closure_11_t tmp = (ltepeg_closure_11_t) safe_malloc(sizeof(struct ltepeg_closure_11_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_3);
        mpz_init(tmp->fvar_4);
        return tmp;}

void release_ltepeg_closure_11(ltepeg_funtype_5_t closure){
        ltepeg_closure_11_t x = (ltepeg_closure_11_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_funtype_8(x->fvar_1);
         release_ltepeg_funtype_10(x->fvar_2);
         release_ltepeg_funtype_6(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_11_t copy_ltepeg_closure_11(ltepeg_closure_11_t x){
        ltepeg_closure_11_t y = new_ltepeg_closure_11();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        mpz_set(y->fvar_3, x->fvar_3);
        mpz_set(y->fvar_4, x->fvar_4);
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            ltepeg_funtype_5_htbl_t new_htbl = (ltepeg_funtype_5_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_5_hashentry_t * new_data = (ltepeg_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_5_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepeg_record_12_t new_ltepeg_record_12(void){
        ltepeg_record_12_t tmp = (ltepeg_record_12_t) safe_malloc(sizeof(struct ltepeg_record_12_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg_record_12(ltepeg_record_12_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__ent_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg_record_12_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_record_12((ltepeg_record_12_t)x);
}

ltepeg_record_12_t copy_ltepeg_record_12(ltepeg_record_12_t x){
        ltepeg_record_12_t y = new_ltepeg_record_12();
        y->project_1 = (uint64_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepeg_record_12(ltepeg_record_12_t x, ltepeg_record_12_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_ltepeg__ent_adt(x->project_2, y->project_2);
        return tmp;}

char * json_ltepeg_record_12(ltepeg_record_12_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint64(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltepeg__ent_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg_record_12_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_12_t T){
        return equal_ltepeg_record_12((ltepeg_record_12_t)x, (ltepeg_record_12_t)y);
}

char * json_ltepeg_record_12_ptr(pointer_t x, actual_ltepeg_record_12_t T){
        return json_ltepeg_record_12((ltepeg_record_12_t)x);
}

actual_ltepeg_record_12_t actual_ltepeg_record_12(){
        actual_ltepeg_record_12_t new = (actual_ltepeg_record_12_t)safe_malloc(sizeof(struct actual_ltepeg_record_12_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_record_12_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_record_12_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_record_12_ptr);
 

 
        return new;
 };

ltepeg_record_12_t update_ltepeg_record_12_project_1(ltepeg_record_12_t x, uint64_t v){
        ltepeg_record_12_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_12(x); x->count--;};
        y->project_1 = (uint64_t)v;
        return y;}

ltepeg_record_12_t update_ltepeg_record_12_project_2(ltepeg_record_12_t x, ltepeg__ent_adt_t v){
        ltepeg_record_12_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltepeg__ent_adt(x->project_2);};}
        else {y = copy_ltepeg_record_12(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltepeg__ent_adt_t)v;
        return y;}



void release_ltepeg_funtype_13(ltepeg_funtype_13_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_13_t copy_ltepeg_funtype_13(ltepeg_funtype_13_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_13(ltepeg_funtype_13_t x, ltepeg_funtype_13_t y){
        return false;}

char* json_ltepeg_funtype_13(ltepeg_funtype_13_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_13\""); return result;}


ltepeg_record_14_t new_ltepeg_record_14(void){
        ltepeg_record_14_t tmp = (ltepeg_record_14_t) safe_malloc(sizeof(struct ltepeg_record_14_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg_record_14(ltepeg_record_14_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__ent_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg_record_14_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_record_14((ltepeg_record_14_t)x);
}

ltepeg_record_14_t copy_ltepeg_record_14(ltepeg_record_14_t x){
        ltepeg_record_14_t y = new_ltepeg_record_14();
        y->project_1 = (uint64_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepeg_record_14(ltepeg_record_14_t x, ltepeg_record_14_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_ltepeg__ent_adt(x->project_3, y->project_3);
        return tmp;}

char * json_ltepeg_record_14(ltepeg_record_14_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint64(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ltepeg__ent_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg_record_14_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_14_t T){
        return equal_ltepeg_record_14((ltepeg_record_14_t)x, (ltepeg_record_14_t)y);
}

char * json_ltepeg_record_14_ptr(pointer_t x, actual_ltepeg_record_14_t T){
        return json_ltepeg_record_14((ltepeg_record_14_t)x);
}

actual_ltepeg_record_14_t actual_ltepeg_record_14(){
        actual_ltepeg_record_14_t new = (actual_ltepeg_record_14_t)safe_malloc(sizeof(struct actual_ltepeg_record_14_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_record_14_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_record_14_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_record_14_ptr);
 

 
        return new;
 };

ltepeg_record_14_t update_ltepeg_record_14_project_1(ltepeg_record_14_t x, uint64_t v){
        ltepeg_record_14_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_14(x); x->count--;};
        y->project_1 = (uint64_t)v;
        return y;}

ltepeg_record_14_t update_ltepeg_record_14_project_2(ltepeg_record_14_t x, uint32_t v){
        ltepeg_record_14_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_14(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

ltepeg_record_14_t update_ltepeg_record_14_project_3(ltepeg_record_14_t x, ltepeg__ent_adt_t v){
        ltepeg_record_14_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ltepeg__ent_adt(x->project_3);};}
        else {y = copy_ltepeg_record_14(x); x->count--; y->project_3->count--;};
        y->project_3 = (ltepeg__ent_adt_t)v;
        return y;}



void release_ltepeg_funtype_15(ltepeg_funtype_15_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_15_t copy_ltepeg_funtype_15(ltepeg_funtype_15_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_15(ltepeg_funtype_15_t x, ltepeg_funtype_15_t y){
        return false;}

char* json_ltepeg_funtype_15(ltepeg_funtype_15_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_15\""); return result;}


ltepeg_record_16_t new_ltepeg_record_16(void){
        ltepeg_record_16_t tmp = (ltepeg_record_16_t) safe_malloc(sizeof(struct ltepeg_record_16_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg_record_16(ltepeg_record_16_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__ent_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg_record_16_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_record_16((ltepeg_record_16_t)x);
}

ltepeg_record_16_t copy_ltepeg_record_16(ltepeg_record_16_t x){
        ltepeg_record_16_t y = new_ltepeg_record_16();
        y->project_1 = (uint32_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepeg_record_16(ltepeg_record_16_t x, ltepeg_record_16_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_ltepeg__ent_adt(x->project_3, y->project_3);
        return tmp;}

char * json_ltepeg_record_16(ltepeg_record_16_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint32(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ltepeg__ent_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg_record_16_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_16_t T){
        return equal_ltepeg_record_16((ltepeg_record_16_t)x, (ltepeg_record_16_t)y);
}

char * json_ltepeg_record_16_ptr(pointer_t x, actual_ltepeg_record_16_t T){
        return json_ltepeg_record_16((ltepeg_record_16_t)x);
}

actual_ltepeg_record_16_t actual_ltepeg_record_16(){
        actual_ltepeg_record_16_t new = (actual_ltepeg_record_16_t)safe_malloc(sizeof(struct actual_ltepeg_record_16_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_record_16_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_record_16_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_record_16_ptr);
 

 
        return new;
 };

ltepeg_record_16_t update_ltepeg_record_16_project_1(ltepeg_record_16_t x, uint32_t v){
        ltepeg_record_16_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_16(x); x->count--;};
        y->project_1 = (uint32_t)v;
        return y;}

ltepeg_record_16_t update_ltepeg_record_16_project_2(ltepeg_record_16_t x, uint8_t v){
        ltepeg_record_16_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_16(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

ltepeg_record_16_t update_ltepeg_record_16_project_3(ltepeg_record_16_t x, ltepeg__ent_adt_t v){
        ltepeg_record_16_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ltepeg__ent_adt(x->project_3);};}
        else {y = copy_ltepeg_record_16(x); x->count--; y->project_3->count--;};
        y->project_3 = (ltepeg__ent_adt_t)v;
        return y;}



void release_ltepeg_funtype_17(ltepeg_funtype_17_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_17_t copy_ltepeg_funtype_17(ltepeg_funtype_17_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_17(ltepeg_funtype_17_t x, ltepeg_funtype_17_t y){
        return false;}

char* json_ltepeg_funtype_17(ltepeg_funtype_17_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_17\""); return result;}


mpz_ptr_t f_ltepeg_closure_18(struct ltepeg_closure_18_s * closure, ltepeg__ent_adt_t bvar){
        mpz_ptr_t result = h_ltepeg_closure_18(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

mpz_ptr_t m_ltepeg_closure_18(struct ltepeg_closure_18_s * closure, ltepeg__ent_adt_t bvar){
        return h_ltepeg_closure_18(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern mpz_ptr_t h_ltepeg_closure_18(ltepeg__ent_adt_t ivar_12, ltepeg_funtype_15_t ivar_7, ltepeg_funtype_17_t ivar_9, ltepeg_funtype_5_t ivar_5, ltepeg_funtype_5_t ivar_3, ltepeg_funtype_13_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_46;
        ivar_12->count++;
        ivar_46 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_12);
        if (ivar_46){ 
             uint64_t ivar_35;
             ivar_12->count++;
             ivar_35 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_12);
             mpz_mk_set(result, ivar_1->ftbl->mptr(ivar_1, ivar_35, ivar_12));
} else {
        
             bool_t ivar_55;
             ivar_12->count++;
             ivar_55 = (bool_t)r_ltepeg__pendingp((ltepeg__ent_adt_t)ivar_12);
             if (ivar_55){  
           mpz_mk_set(result, ivar_3->ftbl->fptr(ivar_3, ivar_12));
} else {
             
           bool_t ivar_64;
           ivar_12->count++;
           ivar_64 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_12);
           if (ivar_64){   
           mpz_mk_set(result, ivar_5->ftbl->fptr(ivar_5, ivar_12));
} else {
           
           bool_t ivar_85;
           ivar_12->count++;
           ivar_85 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_12);
           if (ivar_85){    
            uint64_t ivar_68;
            ivar_12->count++;
            ivar_68 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_12);
            uint32_t ivar_69;
            ivar_12->count++;
            ivar_69 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_12);
            mpz_mk_set(result, ivar_7->ftbl->mptr(ivar_7, ivar_68, ivar_69, ivar_12));
} else {
           
            uint32_t ivar_89;
            ivar_12->count++;
            ivar_89 = (uint32_t)ltepeg__ent_adt_pos((ltepeg__ent_adt_t)ivar_12);
            uint8_t ivar_90;
            ivar_12->count++;
            ivar_90 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_12);
            mpz_mk_set(result, ivar_9->ftbl->mptr(ivar_9, ivar_89, ivar_90, ivar_12));
};
};
};
};

        return result;
}

ltepeg_closure_18_t new_ltepeg_closure_18(void){
        static struct ltepeg_funtype_5_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ltepeg_funtype_5_t, ltepeg__ent_adt_t))&f_ltepeg_closure_18, .mptr = (mpz_ptr_t (*)(ltepeg_funtype_5_t, ltepeg__ent_adt_t))&m_ltepeg_closure_18, .rptr =  (void (*)(ltepeg_funtype_5_t))&release_ltepeg_closure_18, .cptr = (ltepeg_funtype_5_t (*)(ltepeg_funtype_5_t))&copy_ltepeg_closure_18};
        ltepeg_closure_18_t tmp = (ltepeg_closure_18_t) safe_malloc(sizeof(struct ltepeg_closure_18_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_18(ltepeg_funtype_5_t closure){
        ltepeg_closure_18_t x = (ltepeg_closure_18_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_funtype_15(x->fvar_1);
         release_ltepeg_funtype_17(x->fvar_2);
         release_ltepeg_funtype_5(x->fvar_3);
         release_ltepeg_funtype_5(x->fvar_4);
         release_ltepeg_funtype_13(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_18_t copy_ltepeg_closure_18(ltepeg_closure_18_t x){
        ltepeg_closure_18_t y = new_ltepeg_closure_18();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            ltepeg_funtype_5_htbl_t new_htbl = (ltepeg_funtype_5_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_5_hashentry_t * new_data = (ltepeg_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_5_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepeg_funtype_19(ltepeg_funtype_19_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_19_t copy_ltepeg_funtype_19(ltepeg_funtype_19_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_19(ltepeg_funtype_19_t x, ltepeg_funtype_19_t y){
        return false;}

char* json_ltepeg_funtype_19(ltepeg_funtype_19_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_19\""); return result;}

void release_ltepeg_funtype_20(ltepeg_funtype_20_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_20_t copy_ltepeg_funtype_20(ltepeg_funtype_20_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltepeg_funtype_20(ltepeg_funtype_20_htbl_t htbl, uint64_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltepeg_funtype_20_hashentry_t data = htbl->data[hashindex];
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

ltepeg_funtype_20_t dupdate_ltepeg_funtype_20(ltepeg_funtype_20_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v){
        ltepeg_funtype_20_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltepeg_funtype_20_htbl_t)safe_malloc(sizeof(struct ltepeg_funtype_20_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltepeg_funtype_20_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltepeg_funtype_20_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint64_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltepeg_funtype_20_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltepeg_funtype_20_hashentry_t * new_data = (ltepeg_funtype_20_hashentry_t *)safe_malloc(new_size * sizeof(struct ltepeg_funtype_20_hashentry_s));
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
        uint32_t hashindex = lookup_ltepeg_funtype_20(htbl, i, ihash);
        ltepeg_funtype_20_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint64_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v; htbl->num_entries++;}
            else {ordstruct_adt__ordstruct_adt_t tempvalue;tempvalue = (ordstruct_adt__ordstruct_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ordstruct_adt__ordstruct_adt(tempvalue);};
        return a;

}

ltepeg_funtype_20_t update_ltepeg_funtype_20(ltepeg_funtype_20_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v){
        if (a->count == 1){
                return dupdate_ltepeg_funtype_20(a, i, v);
            } else {
                ltepeg_funtype_20_t x = copy_ltepeg_funtype_20(a);
                a->count--;
                return dupdate_ltepeg_funtype_20(x, i, v);
            }}

bool_t equal_ltepeg_funtype_20(ltepeg_funtype_20_t x, ltepeg_funtype_20_t y){
        return false;}

char* json_ltepeg_funtype_20(ltepeg_funtype_20_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_20\""); return result;}

void release_ltepeg_funtype_21(ltepeg_funtype_21_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_21_t copy_ltepeg_funtype_21(ltepeg_funtype_21_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_21(ltepeg_funtype_21_t x, ltepeg_funtype_21_t y){
        return false;}

char* json_ltepeg_funtype_21(ltepeg_funtype_21_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_21\""); return result;}

void release_ltepeg_funtype_22(ltepeg_funtype_22_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_22_t copy_ltepeg_funtype_22(ltepeg_funtype_22_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_22(ltepeg_funtype_22_t x, ltepeg_funtype_22_t y){
        return false;}

char* json_ltepeg_funtype_22(ltepeg_funtype_22_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_22\""); return result;}


ordstruct_adt__ordstruct_adt_t f_ltepeg_closure_23(struct ltepeg_closure_23_s * closure, ltepeg__ent_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_ltepeg_closure_23(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_ltepeg_closure_23(struct ltepeg_closure_23_s * closure, ltepeg__ent_adt_t bvar){
        return h_ltepeg_closure_23(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern ordstruct_adt__ordstruct_adt_t h_ltepeg_closure_23(ltepeg__ent_adt_t ivar_10, ltepeg_funtype_21_t ivar_5, ltepeg_funtype_22_t ivar_7, ordstruct_adt__ordstruct_adt_t ivar_4, ordstruct_adt__ordstruct_adt_t ivar_3, ltepeg_funtype_20_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_40;
        ivar_10->count++;
        ivar_40 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_10);
        if (ivar_40){ 
             uint64_t ivar_31;
             ivar_31 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_10);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_31);
} else {
        
             bool_t ivar_44;
             ivar_10->count++;
             ivar_44 = (bool_t)r_ltepeg__pendingp((ltepeg__ent_adt_t)ivar_10);
             if (ivar_44){  
           release_ltepeg__ent_adt(ivar_10);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3;
           if (result != NULL) result->count++;
} else {
             
           bool_t ivar_48;
           ivar_10->count++;
           ivar_48 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_10);
           if (ivar_48){   
           release_ltepeg__ent_adt(ivar_10);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           result = (ordstruct_adt__ordstruct_adt_t)ivar_4;
           if (result != NULL) result->count++;
} else {
           
           bool_t ivar_67;
           ivar_10->count++;
           ivar_67 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_10);
           if (ivar_67){    
            uint64_t ivar_52;
            ivar_10->count++;
            ivar_52 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_10);
            uint32_t ivar_53;
            ivar_53 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_10);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_5->ftbl->mptr(ivar_5, ivar_52, ivar_53);
} else {
           
            uint32_t ivar_71;
            ivar_10->count++;
            ivar_71 = (uint32_t)ltepeg__ent_adt_pos((ltepeg__ent_adt_t)ivar_10);
            uint8_t ivar_72;
            ivar_72 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_10);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_7->ftbl->mptr(ivar_7, ivar_71, ivar_72);
};
};
};
};

        return result;
}

ltepeg_closure_23_t new_ltepeg_closure_23(void){
        static struct ltepeg_funtype_19_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepeg_funtype_19_t, ltepeg__ent_adt_t))&f_ltepeg_closure_23, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepeg_funtype_19_t, ltepeg__ent_adt_t))&m_ltepeg_closure_23, .rptr =  (void (*)(ltepeg_funtype_19_t))&release_ltepeg_closure_23, .cptr = (ltepeg_funtype_19_t (*)(ltepeg_funtype_19_t))&copy_ltepeg_closure_23};
        ltepeg_closure_23_t tmp = (ltepeg_closure_23_t) safe_malloc(sizeof(struct ltepeg_closure_23_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_23(ltepeg_funtype_19_t closure){
        ltepeg_closure_23_t x = (ltepeg_closure_23_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_funtype_21(x->fvar_1);
         release_ltepeg_funtype_22(x->fvar_2);
         release_ordstruct_adt__ordstruct_adt(x->fvar_3);
         release_ordstruct_adt__ordstruct_adt(x->fvar_4);
         release_ltepeg_funtype_20(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_23_t copy_ltepeg_closure_23(ltepeg_closure_23_t x){
        ltepeg_closure_23_t y = new_ltepeg_closure_23();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            ltepeg_funtype_19_htbl_t new_htbl = (ltepeg_funtype_19_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_19_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_19_hashentry_t * new_data = (ltepeg_funtype_19_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_19_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_19_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepeg_funtype_24(ltepeg_funtype_24_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_24_t copy_ltepeg_funtype_24(ltepeg_funtype_24_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_24(ltepeg_funtype_24_t x, ltepeg_funtype_24_t y){
        return false;}

char* json_ltepeg_funtype_24(ltepeg_funtype_24_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_24\""); return result;}

void release_ltepeg_funtype_25(ltepeg_funtype_25_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_25_t copy_ltepeg_funtype_25(ltepeg_funtype_25_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_25(ltepeg_funtype_25_t x, ltepeg_funtype_25_t y){
        return false;}

char* json_ltepeg_funtype_25(ltepeg_funtype_25_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_25\""); return result;}

void release_ltepeg_funtype_26(ltepeg_funtype_26_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_26_t copy_ltepeg_funtype_26(ltepeg_funtype_26_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_26(ltepeg_funtype_26_t x, ltepeg_funtype_26_t y){
        return false;}

char* json_ltepeg_funtype_26(ltepeg_funtype_26_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_26\""); return result;}


ordstruct_adt__ordstruct_adt_t f_ltepeg_closure_27(struct ltepeg_closure_27_s * closure, ltepeg__ent_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_ltepeg_closure_27(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_ltepeg_closure_27(struct ltepeg_closure_27_s * closure, ltepeg__ent_adt_t bvar){
        return h_ltepeg_closure_27(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern ordstruct_adt__ordstruct_adt_t h_ltepeg_closure_27(ltepeg__ent_adt_t ivar_12, ltepeg_funtype_25_t ivar_7, ltepeg_funtype_26_t ivar_9, ltepeg_funtype_19_t ivar_5, ltepeg_funtype_19_t ivar_3, ltepeg_funtype_24_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_46;
        ivar_12->count++;
        ivar_46 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_12);
        if (ivar_46){ 
             uint64_t ivar_35;
             ivar_12->count++;
             ivar_35 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_12);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->mptr(ivar_1, ivar_35, ivar_12);
} else {
        
             bool_t ivar_55;
             ivar_12->count++;
             ivar_55 = (bool_t)r_ltepeg__pendingp((ltepeg__ent_adt_t)ivar_12);
             if (ivar_55){  
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->fptr(ivar_3, ivar_12);
} else {
             
           bool_t ivar_64;
           ivar_12->count++;
           ivar_64 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_12);
           if (ivar_64){   
           result = (ordstruct_adt__ordstruct_adt_t)ivar_5->ftbl->fptr(ivar_5, ivar_12);
} else {
           
           bool_t ivar_85;
           ivar_12->count++;
           ivar_85 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_12);
           if (ivar_85){    
            uint64_t ivar_68;
            ivar_12->count++;
            ivar_68 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_12);
            uint32_t ivar_69;
            ivar_12->count++;
            ivar_69 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_12);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_7->ftbl->mptr(ivar_7, ivar_68, ivar_69, ivar_12);
} else {
           
            uint32_t ivar_89;
            ivar_12->count++;
            ivar_89 = (uint32_t)ltepeg__ent_adt_pos((ltepeg__ent_adt_t)ivar_12);
            uint8_t ivar_90;
            ivar_12->count++;
            ivar_90 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_12);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->mptr(ivar_9, ivar_89, ivar_90, ivar_12);
};
};
};
};

        return result;
}

ltepeg_closure_27_t new_ltepeg_closure_27(void){
        static struct ltepeg_funtype_19_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepeg_funtype_19_t, ltepeg__ent_adt_t))&f_ltepeg_closure_27, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepeg_funtype_19_t, ltepeg__ent_adt_t))&m_ltepeg_closure_27, .rptr =  (void (*)(ltepeg_funtype_19_t))&release_ltepeg_closure_27, .cptr = (ltepeg_funtype_19_t (*)(ltepeg_funtype_19_t))&copy_ltepeg_closure_27};
        ltepeg_closure_27_t tmp = (ltepeg_closure_27_t) safe_malloc(sizeof(struct ltepeg_closure_27_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_27(ltepeg_funtype_19_t closure){
        ltepeg_closure_27_t x = (ltepeg_closure_27_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_funtype_25(x->fvar_1);
         release_ltepeg_funtype_26(x->fvar_2);
         release_ltepeg_funtype_19(x->fvar_3);
         release_ltepeg_funtype_19(x->fvar_4);
         release_ltepeg_funtype_24(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_27_t copy_ltepeg_closure_27(ltepeg_closure_27_t x){
        ltepeg_closure_27_t y = new_ltepeg_closure_27();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            ltepeg_funtype_19_htbl_t new_htbl = (ltepeg_funtype_19_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_19_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_19_hashentry_t * new_data = (ltepeg_funtype_19_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_19_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_19_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepeg__prepeg_adt_t new_ltepeg__prepeg_adt(void){
        ltepeg__prepeg_adt_t tmp = (ltepeg__prepeg_adt_t) safe_malloc(sizeof(struct ltepeg__prepeg_adt_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg__prepeg_adt(ltepeg__prepeg_adt_t x){
switch (x->ltepeg__prepeg_adt_index) {
case 2:  release_ltepeg__any((ltepeg__any_t) x); break;
case 3:  release_ltepeg__terminal((ltepeg__terminal_t) x); break;
case 4:  release_ltepeg__lte((ltepeg__lte_t) x); break;
}}

void release_ltepeg__prepeg_adt_ptr(pointer_t x, type_actual_t T){
        release_ltepeg__prepeg_adt((ltepeg__prepeg_adt_t)x);
}

ltepeg__prepeg_adt_t copy_ltepeg__prepeg_adt(ltepeg__prepeg_adt_t x){
        ltepeg__prepeg_adt_t y = new_ltepeg__prepeg_adt();
        y->ltepeg__prepeg_adt_index = (uint8_t)x->ltepeg__prepeg_adt_index;
        y->count = 1;
        return y;}

bool_t equal_ltepeg__prepeg_adt(ltepeg__prepeg_adt_t x, ltepeg__prepeg_adt_t y){
        bool_t tmp = x->ltepeg__prepeg_adt_index == y->ltepeg__prepeg_adt_index;
        switch  (x->ltepeg__prepeg_adt_index) {
                case 2: tmp = tmp && equal_ltepeg__any((ltepeg__any_t) x, (ltepeg__any_t) y); break;
                case 3: tmp = tmp && equal_ltepeg__terminal((ltepeg__terminal_t) x, (ltepeg__terminal_t) y); break;
                case 4: tmp = tmp && equal_ltepeg__lte((ltepeg__lte_t) x, (ltepeg__lte_t) y); break;
        }
        return tmp;
}

char * json_ltepeg__prepeg_adt(ltepeg__prepeg_adt_t x){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ constructor = %u", x->ltepeg__prepeg_adt_index);
        switch  (x->ltepeg__prepeg_adt_index) {
                case 2: tmp = safe_strcat(tmp, json_ltepeg__any((ltepeg__any_t) x)); break;
                case 3: tmp = safe_strcat(tmp, json_ltepeg__terminal((ltepeg__terminal_t) x)); break;
                case 4: tmp = safe_strcat(tmp, json_ltepeg__lte((ltepeg__lte_t) x)); break;
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_ltepeg__prepeg_adt_ptr(pointer_t x, pointer_t y, actual_ltepeg__prepeg_adt_t T){
        return equal_ltepeg__prepeg_adt((ltepeg__prepeg_adt_t)x, (ltepeg__prepeg_adt_t)y);
}

char * json_ltepeg__prepeg_adt_ptr(pointer_t x, actual_ltepeg__prepeg_adt_t T){
        return json_ltepeg__prepeg_adt((ltepeg__prepeg_adt_t)x);
}

actual_ltepeg__prepeg_adt_t actual_ltepeg__prepeg_adt(){
        actual_ltepeg__prepeg_adt_t new = (actual_ltepeg__prepeg_adt_t)safe_malloc(sizeof(struct actual_ltepeg__prepeg_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg__prepeg_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg__prepeg_adt_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg__prepeg_adt_ptr);
 

 
        return new;
 };

ltepeg__prepeg_adt_t update_ltepeg__prepeg_adt_ltepeg__prepeg_adt_index(ltepeg__prepeg_adt_t x, uint8_t v){
        ltepeg__prepeg_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg__prepeg_adt(x); x->count--;};
        y->ltepeg__prepeg_adt_index = (uint8_t)v;
        return y;}



void release_ltepeg_funtype_29(ltepeg_funtype_29_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_29_t copy_ltepeg_funtype_29(ltepeg_funtype_29_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltepeg_funtype_29(ltepeg_funtype_29_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltepeg_funtype_29_hashentry_t data = htbl->data[hashindex];
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

ltepeg_funtype_29_t dupdate_ltepeg_funtype_29(ltepeg_funtype_29_t a, uint8_t i, bool_t v){
        ltepeg_funtype_29_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltepeg_funtype_29_htbl_t)safe_malloc(sizeof(struct ltepeg_funtype_29_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltepeg_funtype_29_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltepeg_funtype_29_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltepeg_funtype_29_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltepeg_funtype_29_hashentry_t * new_data = (ltepeg_funtype_29_hashentry_t *)safe_malloc(new_size * sizeof(struct ltepeg_funtype_29_hashentry_s));
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
        uint32_t hashindex = lookup_ltepeg_funtype_29(htbl, i, ihash);
        ltepeg_funtype_29_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

ltepeg_funtype_29_t update_ltepeg_funtype_29(ltepeg_funtype_29_t a, uint8_t i, bool_t v){
        if (a->count == 1){
                return dupdate_ltepeg_funtype_29(a, i, v);
            } else {
                ltepeg_funtype_29_t x = copy_ltepeg_funtype_29(a);
                a->count--;
                return dupdate_ltepeg_funtype_29(x, i, v);
            }}

bool_t equal_ltepeg_funtype_29(ltepeg_funtype_29_t x, ltepeg_funtype_29_t y){
        return false;}

char* json_ltepeg_funtype_29(ltepeg_funtype_29_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_29\""); return result;}


ltepeg__any_t new_ltepeg__any(void){
        ltepeg__any_t tmp = (ltepeg__any_t) safe_malloc(sizeof(struct ltepeg__any_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg__any(ltepeg__any_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg_funtype_29(x->p);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg__any_ptr(pointer_t x, type_actual_t T){
        release_ltepeg__any((ltepeg__any_t)x);
}

ltepeg__any_t copy_ltepeg__any(ltepeg__any_t x){
        ltepeg__any_t y = new_ltepeg__any();
        y->ltepeg__prepeg_adt_index = (uint8_t)x->ltepeg__prepeg_adt_index;
        y->p = x->p;
        if (y->p != NULL){y->p->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepeg__any(ltepeg__any_t x, ltepeg__any_t y){
        bool_t tmp = true;
        tmp = tmp && x->ltepeg__prepeg_adt_index == y->ltepeg__prepeg_adt_index;
        tmp = tmp && equal_ltepeg_funtype_29(x->p, y->p);
        return tmp;}

char * json_ltepeg__any(ltepeg__any_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(36);
         sprintf(fld0, "\"ltepeg__prepeg_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ltepeg__prepeg_adt_index));
        char * fld1 = safe_malloc(13);
         sprintf(fld1, "\"p\" : ");
        tmp[1] = safe_strcat(fld1, json_ltepeg_funtype_29(x->p));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg__any_ptr(pointer_t x, pointer_t y, actual_ltepeg__any_t T){
        return equal_ltepeg__any((ltepeg__any_t)x, (ltepeg__any_t)y);
}

char * json_ltepeg__any_ptr(pointer_t x, actual_ltepeg__any_t T){
        return json_ltepeg__any((ltepeg__any_t)x);
}

actual_ltepeg__any_t actual_ltepeg__any(){
        actual_ltepeg__any_t new = (actual_ltepeg__any_t)safe_malloc(sizeof(struct actual_ltepeg__any_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg__any_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg__any_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg__any_ptr);
 

 
        return new;
 };

ltepeg__any_t update_ltepeg__any_ltepeg__prepeg_adt_index(ltepeg__any_t x, uint8_t v){
        ltepeg__any_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg__any(x); x->count--;};
        y->ltepeg__prepeg_adt_index = (uint8_t)v;
        return y;}

ltepeg__any_t update_ltepeg__any_p(ltepeg__any_t x, ltepeg_funtype_29_t v){
        ltepeg__any_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->p != NULL){release_ltepeg_funtype_29(x->p);};}
        else {y = copy_ltepeg__any(x); x->count--; y->p->count--;};
        y->p = (ltepeg_funtype_29_t)v;
        return y;}




ltepeg__terminal_t new_ltepeg__terminal(void){
        ltepeg__terminal_t tmp = (ltepeg__terminal_t) safe_malloc(sizeof(struct ltepeg__terminal_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg__terminal(ltepeg__terminal_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg__terminal_ptr(pointer_t x, type_actual_t T){
        release_ltepeg__terminal((ltepeg__terminal_t)x);
}

ltepeg__terminal_t copy_ltepeg__terminal(ltepeg__terminal_t x){
        ltepeg__terminal_t y = new_ltepeg__terminal();
        y->ltepeg__prepeg_adt_index = (uint8_t)x->ltepeg__prepeg_adt_index;
        y->a = (uint8_t)x->a;
        y->count = 1;
        return y;}

bool_t equal_ltepeg__terminal(ltepeg__terminal_t x, ltepeg__terminal_t y){
        bool_t tmp = true;
        tmp = tmp && x->ltepeg__prepeg_adt_index == y->ltepeg__prepeg_adt_index;
        tmp = tmp && x->a == y->a;
        return tmp;}

char * json_ltepeg__terminal(ltepeg__terminal_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(36);
         sprintf(fld0, "\"ltepeg__prepeg_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ltepeg__prepeg_adt_index));
        char * fld1 = safe_malloc(13);
         sprintf(fld1, "\"a\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->a));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg__terminal_ptr(pointer_t x, pointer_t y, actual_ltepeg__terminal_t T){
        return equal_ltepeg__terminal((ltepeg__terminal_t)x, (ltepeg__terminal_t)y);
}

char * json_ltepeg__terminal_ptr(pointer_t x, actual_ltepeg__terminal_t T){
        return json_ltepeg__terminal((ltepeg__terminal_t)x);
}

actual_ltepeg__terminal_t actual_ltepeg__terminal(){
        actual_ltepeg__terminal_t new = (actual_ltepeg__terminal_t)safe_malloc(sizeof(struct actual_ltepeg__terminal_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg__terminal_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg__terminal_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg__terminal_ptr);
 

 
        return new;
 };

ltepeg__terminal_t update_ltepeg__terminal_ltepeg__prepeg_adt_index(ltepeg__terminal_t x, uint8_t v){
        ltepeg__terminal_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg__terminal(x); x->count--;};
        y->ltepeg__prepeg_adt_index = (uint8_t)v;
        return y;}

ltepeg__terminal_t update_ltepeg__terminal_a(ltepeg__terminal_t x, uint8_t v){
        ltepeg__terminal_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg__terminal(x); x->count--;};
        y->a = (uint8_t)v;
        return y;}




ltepeg__lte_t new_ltepeg__lte(void){
        ltepeg__lte_t tmp = (ltepeg__lte_t) safe_malloc(sizeof(struct ltepeg__lte_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg__lte(ltepeg__lte_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg__lte_ptr(pointer_t x, type_actual_t T){
        release_ltepeg__lte((ltepeg__lte_t)x);
}

ltepeg__lte_t copy_ltepeg__lte(ltepeg__lte_t x){
        ltepeg__lte_t y = new_ltepeg__lte();
        y->ltepeg__prepeg_adt_index = (uint8_t)x->ltepeg__prepeg_adt_index;
        y->fst = (uint8_t)x->fst;
        y->lthen = (uint8_t)x->lthen;
        y->lelse = (uint8_t)x->lelse;
        y->count = 1;
        return y;}

bool_t equal_ltepeg__lte(ltepeg__lte_t x, ltepeg__lte_t y){
        bool_t tmp = true;
        tmp = tmp && x->ltepeg__prepeg_adt_index == y->ltepeg__prepeg_adt_index;
        tmp = tmp && x->fst == y->fst;
        tmp = tmp && x->lthen == y->lthen;
        tmp = tmp && x->lelse == y->lelse;
        return tmp;}

char * json_ltepeg__lte(ltepeg__lte_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(36);
         sprintf(fld0, "\"ltepeg__prepeg_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ltepeg__prepeg_adt_index));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"fst\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->fst));
        char * fld2 = safe_malloc(17);
         sprintf(fld2, "\"lthen\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->lthen));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"lelse\" : ");
        tmp[3] = safe_strcat(fld3, json_uint8(x->lelse));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg__lte_ptr(pointer_t x, pointer_t y, actual_ltepeg__lte_t T){
        return equal_ltepeg__lte((ltepeg__lte_t)x, (ltepeg__lte_t)y);
}

char * json_ltepeg__lte_ptr(pointer_t x, actual_ltepeg__lte_t T){
        return json_ltepeg__lte((ltepeg__lte_t)x);
}

actual_ltepeg__lte_t actual_ltepeg__lte(){
        actual_ltepeg__lte_t new = (actual_ltepeg__lte_t)safe_malloc(sizeof(struct actual_ltepeg__lte_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg__lte_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg__lte_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg__lte_ptr);
 

 
        return new;
 };

ltepeg__lte_t update_ltepeg__lte_ltepeg__prepeg_adt_index(ltepeg__lte_t x, uint8_t v){
        ltepeg__lte_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg__lte(x); x->count--;};
        y->ltepeg__prepeg_adt_index = (uint8_t)v;
        return y;}

ltepeg__lte_t update_ltepeg__lte_fst(ltepeg__lte_t x, uint8_t v){
        ltepeg__lte_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg__lte(x); x->count--;};
        y->fst = (uint8_t)v;
        return y;}

ltepeg__lte_t update_ltepeg__lte_lthen(ltepeg__lte_t x, uint8_t v){
        ltepeg__lte_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg__lte(x); x->count--;};
        y->lthen = (uint8_t)v;
        return y;}

ltepeg__lte_t update_ltepeg__lte_lelse(ltepeg__lte_t x, uint8_t v){
        ltepeg__lte_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg__lte(x); x->count--;};
        y->lelse = (uint8_t)v;
        return y;}



void release_ltepeg_funtype_33(ltepeg_funtype_33_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_33_t copy_ltepeg_funtype_33(ltepeg_funtype_33_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_33(ltepeg_funtype_33_t x, ltepeg_funtype_33_t y){
        return false;}

char* json_ltepeg_funtype_33(ltepeg_funtype_33_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_33\""); return result;}

void release_ltepeg_funtype_34(ltepeg_funtype_34_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_34_t copy_ltepeg_funtype_34(ltepeg_funtype_34_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_34(ltepeg_funtype_34_t x, ltepeg_funtype_34_t y){
        return false;}

char* json_ltepeg_funtype_34(ltepeg_funtype_34_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_34\""); return result;}

void release_ltepeg_funtype_35(ltepeg_funtype_35_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_35_t copy_ltepeg_funtype_35(ltepeg_funtype_35_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_35(ltepeg_funtype_35_t x, ltepeg_funtype_35_t y){
        return false;}

char* json_ltepeg_funtype_35(ltepeg_funtype_35_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_35\""); return result;}

void release_ltepeg_funtype_36(ltepeg_funtype_36_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_36_t copy_ltepeg_funtype_36(ltepeg_funtype_36_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltepeg_funtype_36(ltepeg_funtype_36_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltepeg_funtype_36_hashentry_t data = htbl->data[hashindex];
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

ltepeg_funtype_36_t dupdate_ltepeg_funtype_36(ltepeg_funtype_36_t a, uint8_t i, mpz_ptr_t v){
        ltepeg_funtype_36_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltepeg_funtype_36_htbl_t)safe_malloc(sizeof(struct ltepeg_funtype_36_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltepeg_funtype_36_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltepeg_funtype_36_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltepeg_funtype_36_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltepeg_funtype_36_hashentry_t * new_data = (ltepeg_funtype_36_hashentry_t *)safe_malloc(new_size * sizeof(struct ltepeg_funtype_36_hashentry_s));
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
        uint32_t hashindex = lookup_ltepeg_funtype_36(htbl, i, ihash);
        ltepeg_funtype_36_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; mpz_set(htbl->data[hashindex].value, v); htbl->num_entries++;}
            else {mpz_ptr_t tempvalue;mpz_mk_set(tempvalue, htbl->data[hashindex].value);mpz_set(htbl->data[hashindex].value, v);};
        return a;

}

ltepeg_funtype_36_t update_ltepeg_funtype_36(ltepeg_funtype_36_t a, uint8_t i, mpz_ptr_t v){
        if (a->count == 1){
                return dupdate_ltepeg_funtype_36(a, i, v);
            } else {
                ltepeg_funtype_36_t x = copy_ltepeg_funtype_36(a);
                a->count--;
                return dupdate_ltepeg_funtype_36(x, i, v);
            }}

bool_t equal_ltepeg_funtype_36(ltepeg_funtype_36_t x, ltepeg_funtype_36_t y){
        return false;}

char* json_ltepeg_funtype_36(ltepeg_funtype_36_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_36\""); return result;}


ltepeg_record_37_t new_ltepeg_record_37(void){
        ltepeg_record_37_t tmp = (ltepeg_record_37_t) safe_malloc(sizeof(struct ltepeg_record_37_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg_record_37(ltepeg_record_37_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg_record_37_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_record_37((ltepeg_record_37_t)x);
}

ltepeg_record_37_t copy_ltepeg_record_37(ltepeg_record_37_t x){
        ltepeg_record_37_t y = new_ltepeg_record_37();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->count = 1;
        return y;}

bool_t equal_ltepeg_record_37(ltepeg_record_37_t x, ltepeg_record_37_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        return tmp;}

char * json_ltepeg_record_37(ltepeg_record_37_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg_record_37_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_37_t T){
        return equal_ltepeg_record_37((ltepeg_record_37_t)x, (ltepeg_record_37_t)y);
}

char * json_ltepeg_record_37_ptr(pointer_t x, actual_ltepeg_record_37_t T){
        return json_ltepeg_record_37((ltepeg_record_37_t)x);
}

actual_ltepeg_record_37_t actual_ltepeg_record_37(){
        actual_ltepeg_record_37_t new = (actual_ltepeg_record_37_t)safe_malloc(sizeof(struct actual_ltepeg_record_37_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_record_37_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_record_37_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_record_37_ptr);
 

 
        return new;
 };

ltepeg_record_37_t update_ltepeg_record_37_project_1(ltepeg_record_37_t x, uint8_t v){
        ltepeg_record_37_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_37(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltepeg_record_37_t update_ltepeg_record_37_project_2(ltepeg_record_37_t x, uint8_t v){
        ltepeg_record_37_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_37(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

ltepeg_record_37_t update_ltepeg_record_37_project_3(ltepeg_record_37_t x, uint8_t v){
        ltepeg_record_37_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_37(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}



void release_ltepeg_funtype_38(ltepeg_funtype_38_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_38_t copy_ltepeg_funtype_38(ltepeg_funtype_38_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_38(ltepeg_funtype_38_t x, ltepeg_funtype_38_t y){
        return false;}

char* json_ltepeg_funtype_38(ltepeg_funtype_38_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_38\""); return result;}


mpz_ptr_t f_ltepeg_closure_39(struct ltepeg_closure_39_s * closure, ltepeg__prepeg_adt_t bvar){
        mpz_ptr_t result = h_ltepeg_closure_39(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

mpz_ptr_t m_ltepeg_closure_39(struct ltepeg_closure_39_s * closure, ltepeg__prepeg_adt_t bvar){
        return h_ltepeg_closure_39(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern mpz_ptr_t h_ltepeg_closure_39(ltepeg__prepeg_adt_t ivar_11, ltepeg_funtype_36_t ivar_6, ltepeg_funtype_38_t ivar_8, ltepeg_funtype_35_t ivar_3, mpz_ptr_t ivar_2, mpz_ptr_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_33;
        ivar_11->count++;
        ivar_33 = (bool_t)r_ltepeg__epsilonp((ltepeg__prepeg_adt_t)ivar_11);
        if (ivar_33){ 
             release_ltepeg__prepeg_adt(ivar_11);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_1);
} else {
        
             bool_t ivar_37;
             ivar_11->count++;
             ivar_37 = (bool_t)r_ltepeg__failurep((ltepeg__prepeg_adt_t)ivar_11);
             if (ivar_37){  
           release_ltepeg__prepeg_adt(ivar_11);
           //copying to mpz from mpz;
           mpz_mk_set(result, ivar_2);
} else {
             
           bool_t ivar_53;
           ivar_11->count++;
           ivar_53 = (bool_t)r_ltepeg__anyp((ltepeg__prepeg_adt_t)ivar_11);
           if (ivar_53){   
           ltepeg_funtype_29_t ivar_41;
           ivar_41 = (ltepeg_funtype_29_t)ltepeg__prepeg_adt_p((ltepeg__prepeg_adt_t)ivar_11);
           mpz_mk_set(result, ivar_3->ftbl->fptr(ivar_3, ivar_41));
} else {
           
           bool_t ivar_66;
           ivar_11->count++;
           ivar_66 = (bool_t)r_ltepeg__terminalp((ltepeg__prepeg_adt_t)ivar_11);
           if (ivar_66){    
            uint8_t ivar_57;
            ivar_57 = (uint8_t)ltepeg__prepeg_adt_a((ltepeg__prepeg_adt_t)ivar_11);
            mpz_mk_set(result, ivar_6->ftbl->fptr(ivar_6, ivar_57));
} else {
           
            uint8_t ivar_70;
            ivar_11->count++;
            ivar_70 = (uint8_t)ltepeg__prepeg_adt_fst((ltepeg__prepeg_adt_t)ivar_11);
            uint8_t ivar_71;
            ivar_11->count++;
            ivar_71 = (uint8_t)ltepeg__prepeg_adt_lthen((ltepeg__prepeg_adt_t)ivar_11);
            uint8_t ivar_72;
            ivar_72 = (uint8_t)ltepeg__prepeg_adt_lelse((ltepeg__prepeg_adt_t)ivar_11);
            mpz_mk_set(result, ivar_8->ftbl->mptr(ivar_8, ivar_70, ivar_71, ivar_72));
};
};
};
};

        return result;
}

ltepeg_closure_39_t new_ltepeg_closure_39(void){
        static struct ltepeg_funtype_34_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ltepeg_funtype_34_t, ltepeg__prepeg_adt_t))&f_ltepeg_closure_39, .mptr = (mpz_ptr_t (*)(ltepeg_funtype_34_t, ltepeg__prepeg_adt_t))&m_ltepeg_closure_39, .rptr =  (void (*)(ltepeg_funtype_34_t))&release_ltepeg_closure_39, .cptr = (ltepeg_funtype_34_t (*)(ltepeg_funtype_34_t))&copy_ltepeg_closure_39};
        ltepeg_closure_39_t tmp = (ltepeg_closure_39_t) safe_malloc(sizeof(struct ltepeg_closure_39_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_4);
        mpz_init(tmp->fvar_5);
        return tmp;}

void release_ltepeg_closure_39(ltepeg_funtype_34_t closure){
        ltepeg_closure_39_t x = (ltepeg_closure_39_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_funtype_36(x->fvar_1);
         release_ltepeg_funtype_38(x->fvar_2);
         release_ltepeg_funtype_35(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_39_t copy_ltepeg_closure_39(ltepeg_closure_39_t x){
        ltepeg_closure_39_t y = new_ltepeg_closure_39();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        mpz_set(y->fvar_4, x->fvar_4);
        mpz_set(y->fvar_5, x->fvar_5);
        if (x->htbl != NULL){
            ltepeg_funtype_34_htbl_t new_htbl = (ltepeg_funtype_34_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_34_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_34_hashentry_t * new_data = (ltepeg_funtype_34_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_34_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_34_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepeg_record_40_t new_ltepeg_record_40(void){
        ltepeg_record_40_t tmp = (ltepeg_record_40_t) safe_malloc(sizeof(struct ltepeg_record_40_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg_record_40(ltepeg_record_40_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg_funtype_29(x->project_1);
         release_ltepeg__prepeg_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg_record_40_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_record_40((ltepeg_record_40_t)x);
}

ltepeg_record_40_t copy_ltepeg_record_40(ltepeg_record_40_t x){
        ltepeg_record_40_t y = new_ltepeg_record_40();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepeg_record_40(ltepeg_record_40_t x, ltepeg_record_40_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepeg_funtype_29(x->project_1, y->project_1);
        tmp = tmp && equal_ltepeg__prepeg_adt(x->project_2, y->project_2);
        return tmp;}

char * json_ltepeg_record_40(ltepeg_record_40_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepeg_funtype_29(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltepeg__prepeg_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg_record_40_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_40_t T){
        return equal_ltepeg_record_40((ltepeg_record_40_t)x, (ltepeg_record_40_t)y);
}

char * json_ltepeg_record_40_ptr(pointer_t x, actual_ltepeg_record_40_t T){
        return json_ltepeg_record_40((ltepeg_record_40_t)x);
}

actual_ltepeg_record_40_t actual_ltepeg_record_40(){
        actual_ltepeg_record_40_t new = (actual_ltepeg_record_40_t)safe_malloc(sizeof(struct actual_ltepeg_record_40_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_record_40_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_record_40_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_record_40_ptr);
 

 
        return new;
 };

ltepeg_record_40_t update_ltepeg_record_40_project_1(ltepeg_record_40_t x, ltepeg_funtype_29_t v){
        ltepeg_record_40_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepeg_funtype_29(x->project_1);};}
        else {y = copy_ltepeg_record_40(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepeg_funtype_29_t)v;
        return y;}

ltepeg_record_40_t update_ltepeg_record_40_project_2(ltepeg_record_40_t x, ltepeg__prepeg_adt_t v){
        ltepeg_record_40_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltepeg__prepeg_adt(x->project_2);};}
        else {y = copy_ltepeg_record_40(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltepeg__prepeg_adt_t)v;
        return y;}



void release_ltepeg_funtype_41(ltepeg_funtype_41_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_41_t copy_ltepeg_funtype_41(ltepeg_funtype_41_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_41(ltepeg_funtype_41_t x, ltepeg_funtype_41_t y){
        return false;}

char* json_ltepeg_funtype_41(ltepeg_funtype_41_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_41\""); return result;}


ltepeg_record_42_t new_ltepeg_record_42(void){
        ltepeg_record_42_t tmp = (ltepeg_record_42_t) safe_malloc(sizeof(struct ltepeg_record_42_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg_record_42(ltepeg_record_42_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__prepeg_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg_record_42_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_record_42((ltepeg_record_42_t)x);
}

ltepeg_record_42_t copy_ltepeg_record_42(ltepeg_record_42_t x){
        ltepeg_record_42_t y = new_ltepeg_record_42();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepeg_record_42(ltepeg_record_42_t x, ltepeg_record_42_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_ltepeg__prepeg_adt(x->project_2, y->project_2);
        return tmp;}

char * json_ltepeg_record_42(ltepeg_record_42_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltepeg__prepeg_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg_record_42_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_42_t T){
        return equal_ltepeg_record_42((ltepeg_record_42_t)x, (ltepeg_record_42_t)y);
}

char * json_ltepeg_record_42_ptr(pointer_t x, actual_ltepeg_record_42_t T){
        return json_ltepeg_record_42((ltepeg_record_42_t)x);
}

actual_ltepeg_record_42_t actual_ltepeg_record_42(){
        actual_ltepeg_record_42_t new = (actual_ltepeg_record_42_t)safe_malloc(sizeof(struct actual_ltepeg_record_42_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_record_42_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_record_42_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_record_42_ptr);
 

 
        return new;
 };

ltepeg_record_42_t update_ltepeg_record_42_project_1(ltepeg_record_42_t x, uint8_t v){
        ltepeg_record_42_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_42(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltepeg_record_42_t update_ltepeg_record_42_project_2(ltepeg_record_42_t x, ltepeg__prepeg_adt_t v){
        ltepeg_record_42_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltepeg__prepeg_adt(x->project_2);};}
        else {y = copy_ltepeg_record_42(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltepeg__prepeg_adt_t)v;
        return y;}



void release_ltepeg_funtype_43(ltepeg_funtype_43_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_43_t copy_ltepeg_funtype_43(ltepeg_funtype_43_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_43(ltepeg_funtype_43_t x, ltepeg_funtype_43_t y){
        return false;}

char* json_ltepeg_funtype_43(ltepeg_funtype_43_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_43\""); return result;}


ltepeg_record_44_t new_ltepeg_record_44(void){
        ltepeg_record_44_t tmp = (ltepeg_record_44_t) safe_malloc(sizeof(struct ltepeg_record_44_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg_record_44(ltepeg_record_44_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__prepeg_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg_record_44_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_record_44((ltepeg_record_44_t)x);
}

ltepeg_record_44_t copy_ltepeg_record_44(ltepeg_record_44_t x){
        ltepeg_record_44_t y = new_ltepeg_record_44();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepeg_record_44(ltepeg_record_44_t x, ltepeg_record_44_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && equal_ltepeg__prepeg_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltepeg_record_44(ltepeg_record_44_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_ltepeg__prepeg_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg_record_44_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_44_t T){
        return equal_ltepeg_record_44((ltepeg_record_44_t)x, (ltepeg_record_44_t)y);
}

char * json_ltepeg_record_44_ptr(pointer_t x, actual_ltepeg_record_44_t T){
        return json_ltepeg_record_44((ltepeg_record_44_t)x);
}

actual_ltepeg_record_44_t actual_ltepeg_record_44(){
        actual_ltepeg_record_44_t new = (actual_ltepeg_record_44_t)safe_malloc(sizeof(struct actual_ltepeg_record_44_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_record_44_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_record_44_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_record_44_ptr);
 

 
        return new;
 };

ltepeg_record_44_t update_ltepeg_record_44_project_1(ltepeg_record_44_t x, uint8_t v){
        ltepeg_record_44_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_44(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltepeg_record_44_t update_ltepeg_record_44_project_2(ltepeg_record_44_t x, uint8_t v){
        ltepeg_record_44_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_44(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

ltepeg_record_44_t update_ltepeg_record_44_project_3(ltepeg_record_44_t x, uint8_t v){
        ltepeg_record_44_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_44(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}

ltepeg_record_44_t update_ltepeg_record_44_project_4(ltepeg_record_44_t x, ltepeg__prepeg_adt_t v){
        ltepeg_record_44_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ltepeg__prepeg_adt(x->project_4);};}
        else {y = copy_ltepeg_record_44(x); x->count--; y->project_4->count--;};
        y->project_4 = (ltepeg__prepeg_adt_t)v;
        return y;}



void release_ltepeg_funtype_45(ltepeg_funtype_45_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_45_t copy_ltepeg_funtype_45(ltepeg_funtype_45_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_45(ltepeg_funtype_45_t x, ltepeg_funtype_45_t y){
        return false;}

char* json_ltepeg_funtype_45(ltepeg_funtype_45_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_45\""); return result;}


mpz_ptr_t f_ltepeg_closure_46(struct ltepeg_closure_46_s * closure, ltepeg__prepeg_adt_t bvar){
        mpz_ptr_t result = h_ltepeg_closure_46(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

mpz_ptr_t m_ltepeg_closure_46(struct ltepeg_closure_46_s * closure, ltepeg__prepeg_adt_t bvar){
        return h_ltepeg_closure_46(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern mpz_ptr_t h_ltepeg_closure_46(ltepeg__prepeg_adt_t ivar_13, ltepeg_funtype_43_t ivar_8, ltepeg_funtype_45_t ivar_10, ltepeg_funtype_41_t ivar_5, ltepeg_funtype_34_t ivar_3, ltepeg_funtype_34_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_42;
        ivar_13->count++;
        ivar_42 = (bool_t)r_ltepeg__epsilonp((ltepeg__prepeg_adt_t)ivar_13);
        if (ivar_42){ 
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_13));
} else {
        
             bool_t ivar_51;
             ivar_13->count++;
             ivar_51 = (bool_t)r_ltepeg__failurep((ltepeg__prepeg_adt_t)ivar_13);
             if (ivar_51){  
           mpz_mk_set(result, ivar_3->ftbl->fptr(ivar_3, ivar_13));
} else {
             
           bool_t ivar_69;
           ivar_13->count++;
           ivar_69 = (bool_t)r_ltepeg__anyp((ltepeg__prepeg_adt_t)ivar_13);
           if (ivar_69){   
           ltepeg_funtype_29_t ivar_55;
           ivar_13->count++;
           ivar_55 = (ltepeg_funtype_29_t)ltepeg__prepeg_adt_p((ltepeg__prepeg_adt_t)ivar_13);
           mpz_mk_set(result, ivar_5->ftbl->mptr(ivar_5, ivar_55, ivar_13));
} else {
           
           bool_t ivar_84;
           ivar_13->count++;
           ivar_84 = (bool_t)r_ltepeg__terminalp((ltepeg__prepeg_adt_t)ivar_13);
           if (ivar_84){    
            uint8_t ivar_73;
            ivar_13->count++;
            ivar_73 = (uint8_t)ltepeg__prepeg_adt_a((ltepeg__prepeg_adt_t)ivar_13);
            mpz_mk_set(result, ivar_8->ftbl->mptr(ivar_8, ivar_73, ivar_13));
} else {
           
            uint8_t ivar_88;
            ivar_13->count++;
            ivar_88 = (uint8_t)ltepeg__prepeg_adt_fst((ltepeg__prepeg_adt_t)ivar_13);
            uint8_t ivar_89;
            ivar_13->count++;
            ivar_89 = (uint8_t)ltepeg__prepeg_adt_lthen((ltepeg__prepeg_adt_t)ivar_13);
            uint8_t ivar_90;
            ivar_13->count++;
            ivar_90 = (uint8_t)ltepeg__prepeg_adt_lelse((ltepeg__prepeg_adt_t)ivar_13);
            mpz_mk_set(result, ivar_10->ftbl->mptr(ivar_10, ivar_88, ivar_89, ivar_90, ivar_13));
};
};
};
};

        return result;
}

ltepeg_closure_46_t new_ltepeg_closure_46(void){
        static struct ltepeg_funtype_34_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ltepeg_funtype_34_t, ltepeg__prepeg_adt_t))&f_ltepeg_closure_46, .mptr = (mpz_ptr_t (*)(ltepeg_funtype_34_t, ltepeg__prepeg_adt_t))&m_ltepeg_closure_46, .rptr =  (void (*)(ltepeg_funtype_34_t))&release_ltepeg_closure_46, .cptr = (ltepeg_funtype_34_t (*)(ltepeg_funtype_34_t))&copy_ltepeg_closure_46};
        ltepeg_closure_46_t tmp = (ltepeg_closure_46_t) safe_malloc(sizeof(struct ltepeg_closure_46_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_46(ltepeg_funtype_34_t closure){
        ltepeg_closure_46_t x = (ltepeg_closure_46_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_funtype_43(x->fvar_1);
         release_ltepeg_funtype_45(x->fvar_2);
         release_ltepeg_funtype_41(x->fvar_3);
         release_ltepeg_funtype_34(x->fvar_4);
         release_ltepeg_funtype_34(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_46_t copy_ltepeg_closure_46(ltepeg_closure_46_t x){
        ltepeg_closure_46_t y = new_ltepeg_closure_46();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            ltepeg_funtype_34_htbl_t new_htbl = (ltepeg_funtype_34_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_34_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_34_hashentry_t * new_data = (ltepeg_funtype_34_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_34_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_34_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepeg_funtype_47(ltepeg_funtype_47_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_47_t copy_ltepeg_funtype_47(ltepeg_funtype_47_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_47(ltepeg_funtype_47_t x, ltepeg_funtype_47_t y){
        return false;}

char* json_ltepeg_funtype_47(ltepeg_funtype_47_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_47\""); return result;}

void release_ltepeg_funtype_48(ltepeg_funtype_48_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_48_t copy_ltepeg_funtype_48(ltepeg_funtype_48_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_48(ltepeg_funtype_48_t x, ltepeg_funtype_48_t y){
        return false;}

char* json_ltepeg_funtype_48(ltepeg_funtype_48_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_48\""); return result;}

void release_ltepeg_funtype_49(ltepeg_funtype_49_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_49_t copy_ltepeg_funtype_49(ltepeg_funtype_49_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltepeg_funtype_49(ltepeg_funtype_49_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltepeg_funtype_49_hashentry_t data = htbl->data[hashindex];
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

ltepeg_funtype_49_t dupdate_ltepeg_funtype_49(ltepeg_funtype_49_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v){
        ltepeg_funtype_49_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltepeg_funtype_49_htbl_t)safe_malloc(sizeof(struct ltepeg_funtype_49_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltepeg_funtype_49_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltepeg_funtype_49_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltepeg_funtype_49_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltepeg_funtype_49_hashentry_t * new_data = (ltepeg_funtype_49_hashentry_t *)safe_malloc(new_size * sizeof(struct ltepeg_funtype_49_hashentry_s));
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
        uint32_t hashindex = lookup_ltepeg_funtype_49(htbl, i, ihash);
        ltepeg_funtype_49_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v; htbl->num_entries++;}
            else {ordstruct_adt__ordstruct_adt_t tempvalue;tempvalue = (ordstruct_adt__ordstruct_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ordstruct_adt__ordstruct_adt(tempvalue);};
        return a;

}

ltepeg_funtype_49_t update_ltepeg_funtype_49(ltepeg_funtype_49_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v){
        if (a->count == 1){
                return dupdate_ltepeg_funtype_49(a, i, v);
            } else {
                ltepeg_funtype_49_t x = copy_ltepeg_funtype_49(a);
                a->count--;
                return dupdate_ltepeg_funtype_49(x, i, v);
            }}

bool_t equal_ltepeg_funtype_49(ltepeg_funtype_49_t x, ltepeg_funtype_49_t y){
        return false;}

char* json_ltepeg_funtype_49(ltepeg_funtype_49_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_49\""); return result;}

void release_ltepeg_funtype_50(ltepeg_funtype_50_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_50_t copy_ltepeg_funtype_50(ltepeg_funtype_50_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_50(ltepeg_funtype_50_t x, ltepeg_funtype_50_t y){
        return false;}

char* json_ltepeg_funtype_50(ltepeg_funtype_50_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_50\""); return result;}


ordstruct_adt__ordstruct_adt_t f_ltepeg_closure_51(struct ltepeg_closure_51_s * closure, ltepeg__prepeg_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_ltepeg_closure_51(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_ltepeg_closure_51(struct ltepeg_closure_51_s * closure, ltepeg__prepeg_adt_t bvar){
        return h_ltepeg_closure_51(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern ordstruct_adt__ordstruct_adt_t h_ltepeg_closure_51(ltepeg__prepeg_adt_t ivar_11, ltepeg_funtype_49_t ivar_6, ltepeg_funtype_50_t ivar_8, ltepeg_funtype_48_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_33;
        ivar_11->count++;
        ivar_33 = (bool_t)r_ltepeg__epsilonp((ltepeg__prepeg_adt_t)ivar_11);
        if (ivar_33){ 
             release_ltepeg__prepeg_adt(ivar_11);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1;
             if (result != NULL) result->count++;
} else {
        
             bool_t ivar_37;
             ivar_11->count++;
             ivar_37 = (bool_t)r_ltepeg__failurep((ltepeg__prepeg_adt_t)ivar_11);
             if (ivar_37){  
           release_ltepeg__prepeg_adt(ivar_11);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           result = (ordstruct_adt__ordstruct_adt_t)ivar_2;
           if (result != NULL) result->count++;
} else {
             
           bool_t ivar_53;
           ivar_11->count++;
           ivar_53 = (bool_t)r_ltepeg__anyp((ltepeg__prepeg_adt_t)ivar_11);
           if (ivar_53){   
           ltepeg_funtype_29_t ivar_41;
           ivar_41 = (ltepeg_funtype_29_t)ltepeg__prepeg_adt_p((ltepeg__prepeg_adt_t)ivar_11);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->fptr(ivar_3, ivar_41);
} else {
           
           bool_t ivar_66;
           ivar_11->count++;
           ivar_66 = (bool_t)r_ltepeg__terminalp((ltepeg__prepeg_adt_t)ivar_11);
           if (ivar_66){    
            uint8_t ivar_57;
            ivar_57 = (uint8_t)ltepeg__prepeg_adt_a((ltepeg__prepeg_adt_t)ivar_11);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_6->ftbl->fptr(ivar_6, ivar_57);
} else {
           
            uint8_t ivar_70;
            ivar_11->count++;
            ivar_70 = (uint8_t)ltepeg__prepeg_adt_fst((ltepeg__prepeg_adt_t)ivar_11);
            uint8_t ivar_71;
            ivar_11->count++;
            ivar_71 = (uint8_t)ltepeg__prepeg_adt_lthen((ltepeg__prepeg_adt_t)ivar_11);
            uint8_t ivar_72;
            ivar_72 = (uint8_t)ltepeg__prepeg_adt_lelse((ltepeg__prepeg_adt_t)ivar_11);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_8->ftbl->mptr(ivar_8, ivar_70, ivar_71, ivar_72);
};
};
};
};

        return result;
}

ltepeg_closure_51_t new_ltepeg_closure_51(void){
        static struct ltepeg_funtype_47_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepeg_funtype_47_t, ltepeg__prepeg_adt_t))&f_ltepeg_closure_51, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepeg_funtype_47_t, ltepeg__prepeg_adt_t))&m_ltepeg_closure_51, .rptr =  (void (*)(ltepeg_funtype_47_t))&release_ltepeg_closure_51, .cptr = (ltepeg_funtype_47_t (*)(ltepeg_funtype_47_t))&copy_ltepeg_closure_51};
        ltepeg_closure_51_t tmp = (ltepeg_closure_51_t) safe_malloc(sizeof(struct ltepeg_closure_51_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_51(ltepeg_funtype_47_t closure){
        ltepeg_closure_51_t x = (ltepeg_closure_51_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_funtype_49(x->fvar_1);
         release_ltepeg_funtype_50(x->fvar_2);
         release_ltepeg_funtype_48(x->fvar_3);
         release_ordstruct_adt__ordstruct_adt(x->fvar_4);
         release_ordstruct_adt__ordstruct_adt(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_51_t copy_ltepeg_closure_51(ltepeg_closure_51_t x){
        ltepeg_closure_51_t y = new_ltepeg_closure_51();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            ltepeg_funtype_47_htbl_t new_htbl = (ltepeg_funtype_47_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_47_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_47_hashentry_t * new_data = (ltepeg_funtype_47_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_47_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_47_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepeg_funtype_52(ltepeg_funtype_52_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_52_t copy_ltepeg_funtype_52(ltepeg_funtype_52_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_52(ltepeg_funtype_52_t x, ltepeg_funtype_52_t y){
        return false;}

char* json_ltepeg_funtype_52(ltepeg_funtype_52_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_52\""); return result;}

void release_ltepeg_funtype_53(ltepeg_funtype_53_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_53_t copy_ltepeg_funtype_53(ltepeg_funtype_53_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_53(ltepeg_funtype_53_t x, ltepeg_funtype_53_t y){
        return false;}

char* json_ltepeg_funtype_53(ltepeg_funtype_53_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_53\""); return result;}

void release_ltepeg_funtype_54(ltepeg_funtype_54_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_54_t copy_ltepeg_funtype_54(ltepeg_funtype_54_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_54(ltepeg_funtype_54_t x, ltepeg_funtype_54_t y){
        return false;}

char* json_ltepeg_funtype_54(ltepeg_funtype_54_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_54\""); return result;}


ordstruct_adt__ordstruct_adt_t f_ltepeg_closure_55(struct ltepeg_closure_55_s * closure, ltepeg__prepeg_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_ltepeg_closure_55(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_ltepeg_closure_55(struct ltepeg_closure_55_s * closure, ltepeg__prepeg_adt_t bvar){
        return h_ltepeg_closure_55(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern ordstruct_adt__ordstruct_adt_t h_ltepeg_closure_55(ltepeg__prepeg_adt_t ivar_13, ltepeg_funtype_53_t ivar_8, ltepeg_funtype_54_t ivar_10, ltepeg_funtype_52_t ivar_5, ltepeg_funtype_47_t ivar_3, ltepeg_funtype_47_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_42;
        ivar_13->count++;
        ivar_42 = (bool_t)r_ltepeg__epsilonp((ltepeg__prepeg_adt_t)ivar_13);
        if (ivar_42){ 
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_13);
} else {
        
             bool_t ivar_51;
             ivar_13->count++;
             ivar_51 = (bool_t)r_ltepeg__failurep((ltepeg__prepeg_adt_t)ivar_13);
             if (ivar_51){  
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->fptr(ivar_3, ivar_13);
} else {
             
           bool_t ivar_69;
           ivar_13->count++;
           ivar_69 = (bool_t)r_ltepeg__anyp((ltepeg__prepeg_adt_t)ivar_13);
           if (ivar_69){   
           ltepeg_funtype_29_t ivar_55;
           ivar_13->count++;
           ivar_55 = (ltepeg_funtype_29_t)ltepeg__prepeg_adt_p((ltepeg__prepeg_adt_t)ivar_13);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_5->ftbl->mptr(ivar_5, ivar_55, ivar_13);
} else {
           
           bool_t ivar_84;
           ivar_13->count++;
           ivar_84 = (bool_t)r_ltepeg__terminalp((ltepeg__prepeg_adt_t)ivar_13);
           if (ivar_84){    
            uint8_t ivar_73;
            ivar_13->count++;
            ivar_73 = (uint8_t)ltepeg__prepeg_adt_a((ltepeg__prepeg_adt_t)ivar_13);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_8->ftbl->mptr(ivar_8, ivar_73, ivar_13);
} else {
           
            uint8_t ivar_88;
            ivar_13->count++;
            ivar_88 = (uint8_t)ltepeg__prepeg_adt_fst((ltepeg__prepeg_adt_t)ivar_13);
            uint8_t ivar_89;
            ivar_13->count++;
            ivar_89 = (uint8_t)ltepeg__prepeg_adt_lthen((ltepeg__prepeg_adt_t)ivar_13);
            uint8_t ivar_90;
            ivar_13->count++;
            ivar_90 = (uint8_t)ltepeg__prepeg_adt_lelse((ltepeg__prepeg_adt_t)ivar_13);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_10->ftbl->mptr(ivar_10, ivar_88, ivar_89, ivar_90, ivar_13);
};
};
};
};

        return result;
}

ltepeg_closure_55_t new_ltepeg_closure_55(void){
        static struct ltepeg_funtype_47_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepeg_funtype_47_t, ltepeg__prepeg_adt_t))&f_ltepeg_closure_55, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepeg_funtype_47_t, ltepeg__prepeg_adt_t))&m_ltepeg_closure_55, .rptr =  (void (*)(ltepeg_funtype_47_t))&release_ltepeg_closure_55, .cptr = (ltepeg_funtype_47_t (*)(ltepeg_funtype_47_t))&copy_ltepeg_closure_55};
        ltepeg_closure_55_t tmp = (ltepeg_closure_55_t) safe_malloc(sizeof(struct ltepeg_closure_55_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_55(ltepeg_funtype_47_t closure){
        ltepeg_closure_55_t x = (ltepeg_closure_55_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_funtype_53(x->fvar_1);
         release_ltepeg_funtype_54(x->fvar_2);
         release_ltepeg_funtype_52(x->fvar_3);
         release_ltepeg_funtype_47(x->fvar_4);
         release_ltepeg_funtype_47(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_55_t copy_ltepeg_closure_55(ltepeg_closure_55_t x){
        ltepeg_closure_55_t y = new_ltepeg_closure_55();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            ltepeg_funtype_47_htbl_t new_htbl = (ltepeg_funtype_47_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_47_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_47_hashentry_t * new_data = (ltepeg_funtype_47_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_47_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_47_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepeg_funtype_56(ltepeg_funtype_56_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_56_t copy_ltepeg_funtype_56(ltepeg_funtype_56_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_56(ltepeg_funtype_56_t x, ltepeg_funtype_56_t y){
        return false;}

char* json_ltepeg_funtype_56(ltepeg_funtype_56_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_56\""); return result;}


bool_t f_ltepeg_closure_57(struct ltepeg_closure_57_s * closure, ltepeg__ent_adt_t bvar){
        bool_t result = h_ltepeg_closure_57(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_ltepeg_closure_57(struct ltepeg_closure_57_s * closure, ltepeg__ent_adt_t bvar){
        return h_ltepeg_closure_57(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_ltepeg_closure_57(ltepeg__ent_adt_t ivar_4, uint32_t ivar_2, uint32_t ivar_1){
        bool_t result;
        mpq_ptr_t ivar_5;
        uint32_t ivar_8;
        ivar_8 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_4);
        mpz_t tmp88651;
        mpz_init(tmp88651);
        mpz_set_ui(tmp88651, (uint64_t)ivar_2);
        mpz_add_ui(tmp88651, tmp88651, (uint64_t)ivar_8);
        mpq_mk_set_z(ivar_5, tmp88651);
        mpz_clear(tmp88651);
        int64_t tmp88652 = mpq_cmp_ui(ivar_5, ivar_1, 1);
        result = (tmp88652 <= 0);

        return result;
}

ltepeg_closure_57_t new_ltepeg_closure_57(void){
        static struct ltepeg_funtype_56_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&f_ltepeg_closure_57, .mptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&m_ltepeg_closure_57, .rptr =  (void (*)(ltepeg_funtype_56_t))&release_ltepeg_closure_57, .cptr = (ltepeg_funtype_56_t (*)(ltepeg_funtype_56_t))&copy_ltepeg_closure_57};
        ltepeg_closure_57_t tmp = (ltepeg_closure_57_t) safe_malloc(sizeof(struct ltepeg_closure_57_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_57(ltepeg_funtype_56_t closure){
        ltepeg_closure_57_t x = (ltepeg_closure_57_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_57_t copy_ltepeg_closure_57(ltepeg_closure_57_t x){
        ltepeg_closure_57_t y = new_ltepeg_closure_57();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            ltepeg_funtype_56_htbl_t new_htbl = (ltepeg_funtype_56_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_56_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_56_hashentry_t * new_data = (ltepeg_funtype_56_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_ltepeg_closure_58(struct ltepeg_closure_58_s * closure, ltepeg__ent_adt_t bvar){
        bool_t result = h_ltepeg_closure_58(bvar, closure->fvar_1); 
        return result;}

bool_t m_ltepeg_closure_58(struct ltepeg_closure_58_s * closure, ltepeg__ent_adt_t bvar){
        return h_ltepeg_closure_58(bvar, closure->fvar_1);}

extern bool_t h_ltepeg_closure_58(ltepeg__ent_adt_t ivar_3, uint32_t ivar_1){
        bool_t result;
        bool_t ivar_4;
        ivar_3->count++;
        ivar_4 = (bool_t)r_ltepeg__pushp((ltepeg__ent_adt_t)ivar_3);
        if (ivar_4){ 
             bool_t ivar_9;
             uint32_t ivar_11;
             ivar_3->count++;
             ivar_11 = (uint32_t)ltepeg__ent_adt_pos((ltepeg__ent_adt_t)ivar_3);
             ivar_9 = (ivar_11 <= ivar_1);
             if (ivar_9){  
           uint8_t ivar_17;
           ivar_17 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_3);
           uint8_t ivar_18;
           ivar_18 = (uint8_t)ltepeg__num_non_terminals();
           result = (ivar_17 <= ivar_18);
} else {
             
           release_ltepeg__ent_adt(ivar_3);
           result = (bool_t) false;
};
} else {
        
             release_ltepeg__ent_adt(ivar_3);
             result = (bool_t) false;
};

        return result;
}

ltepeg_closure_58_t new_ltepeg_closure_58(void){
        static struct ltepeg_funtype_56_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&f_ltepeg_closure_58, .mptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&m_ltepeg_closure_58, .rptr =  (void (*)(ltepeg_funtype_56_t))&release_ltepeg_closure_58, .cptr = (ltepeg_funtype_56_t (*)(ltepeg_funtype_56_t))&copy_ltepeg_closure_58};
        ltepeg_closure_58_t tmp = (ltepeg_closure_58_t) safe_malloc(sizeof(struct ltepeg_closure_58_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_58(ltepeg_funtype_56_t closure){
        ltepeg_closure_58_t x = (ltepeg_closure_58_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_58_t copy_ltepeg_closure_58(ltepeg_closure_58_t x){
        ltepeg_closure_58_t y = new_ltepeg_closure_58();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        if (x->htbl != NULL){
            ltepeg_funtype_56_htbl_t new_htbl = (ltepeg_funtype_56_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_56_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_56_hashentry_t * new_data = (ltepeg_funtype_56_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_ltepeg_closure_59(struct ltepeg_closure_59_s * closure, ltepeg__ent_adt_t bvar){
        bool_t result = h_ltepeg_closure_59(bvar, closure->fvar_1); 
        return result;}

bool_t m_ltepeg_closure_59(struct ltepeg_closure_59_s * closure, ltepeg__ent_adt_t bvar){
        return h_ltepeg_closure_59(bvar, closure->fvar_1);}

extern bool_t h_ltepeg_closure_59(ltepeg__ent_adt_t ivar_3, uint32_t ivar_1){
        bool_t result;
        bool_t ivar_4;
        ltepeg_funtype_56_t ivar_9;
        ivar_9 = (ltepeg_funtype_56_t)ltepeg__good_push_entryp((uint32_t)ivar_1);
        ivar_3->count++;
        ivar_4 = (bool_t)ivar_9->ftbl->fptr(ivar_9, ivar_3);
        ivar_9->ftbl->rptr(ivar_9);
        if (ivar_4){ 
             uint8_t ivar_15;
             ivar_15 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_3);
             uint8_t ivar_16;
             ivar_16 = (uint8_t)ltepeg__num_non_terminals();
             result = (ivar_15 < ivar_16);
} else {
        
             release_ltepeg__ent_adt(ivar_3);
             result = (bool_t) false;
};

        return result;
}

ltepeg_closure_59_t new_ltepeg_closure_59(void){
        static struct ltepeg_funtype_56_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&f_ltepeg_closure_59, .mptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&m_ltepeg_closure_59, .rptr =  (void (*)(ltepeg_funtype_56_t))&release_ltepeg_closure_59, .cptr = (ltepeg_funtype_56_t (*)(ltepeg_funtype_56_t))&copy_ltepeg_closure_59};
        ltepeg_closure_59_t tmp = (ltepeg_closure_59_t) safe_malloc(sizeof(struct ltepeg_closure_59_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_59(ltepeg_funtype_56_t closure){
        ltepeg_closure_59_t x = (ltepeg_closure_59_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_59_t copy_ltepeg_closure_59(ltepeg_closure_59_t x){
        ltepeg_closure_59_t y = new_ltepeg_closure_59();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        if (x->htbl != NULL){
            ltepeg_funtype_56_htbl_t new_htbl = (ltepeg_funtype_56_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_56_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_56_hashentry_t * new_data = (ltepeg_funtype_56_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_ltepeg_closure_60(struct ltepeg_closure_60_s * closure, ltepeg__ent_adt_t bvar){
        bool_t result = h_ltepeg_closure_60(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_ltepeg_closure_60(struct ltepeg_closure_60_s * closure, ltepeg__ent_adt_t bvar){
        return h_ltepeg_closure_60(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_ltepeg_closure_60(ltepeg__ent_adt_t ivar_4, uint32_t ivar_2, uint32_t ivar_1){
        bool_t result;
        bool_t ivar_5;
        bool_t ivar_7;
        ivar_4->count++;
        ivar_7 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_4);
        if (ivar_7){ 
             ltepeg_funtype_56_t ivar_15;
             ivar_15 = (ltepeg_funtype_56_t)ltepeg__good_good_entryp((uint32_t)ivar_1, (uint32_t)ivar_2);
             ivar_4->count++;
             ivar_5 = (bool_t)ivar_15->ftbl->fptr(ivar_15, ivar_4);
             ivar_15->ftbl->rptr(ivar_15);
} else {
        
             ivar_5 = (bool_t) true;
};
        if (ivar_5){ 
             bool_t ivar_24;
             ivar_4->count++;
             ivar_24 = (bool_t)r_ltepeg__pushp((ltepeg__ent_adt_t)ivar_4);
             if (ivar_24){  
           ltepeg_funtype_56_t ivar_32;
           ivar_32 = (ltepeg_funtype_56_t)ltepeg__good_push_entryp((uint32_t)ivar_1);
           result = (bool_t)ivar_32->ftbl->fptr(ivar_32, ivar_4);
           ivar_32->ftbl->rptr(ivar_32);
} else {
             
           release_ltepeg__ent_adt(ivar_4);
           result = (bool_t) true;
};
} else {
        
             release_ltepeg__ent_adt(ivar_4);
             result = (bool_t) false;
};

        return result;
}

ltepeg_closure_60_t new_ltepeg_closure_60(void){
        static struct ltepeg_funtype_56_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&f_ltepeg_closure_60, .mptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&m_ltepeg_closure_60, .rptr =  (void (*)(ltepeg_funtype_56_t))&release_ltepeg_closure_60, .cptr = (ltepeg_funtype_56_t (*)(ltepeg_funtype_56_t))&copy_ltepeg_closure_60};
        ltepeg_closure_60_t tmp = (ltepeg_closure_60_t) safe_malloc(sizeof(struct ltepeg_closure_60_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_60(ltepeg_funtype_56_t closure){
        ltepeg_closure_60_t x = (ltepeg_closure_60_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_60_t copy_ltepeg_closure_60(ltepeg_closure_60_t x){
        ltepeg_closure_60_t y = new_ltepeg_closure_60();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            ltepeg_funtype_56_htbl_t new_htbl = (ltepeg_funtype_56_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_56_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_56_hashentry_t * new_data = (ltepeg_funtype_56_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepeg_funtype_61(ltepeg_funtype_61_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_61_t copy_ltepeg_funtype_61(ltepeg_funtype_61_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_61(ltepeg_funtype_61_t x, ltepeg_funtype_61_t y){
        return false;}

char* json_ltepeg_funtype_61(ltepeg_funtype_61_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_61\""); return result;}


ltepeg_array_62_t new_ltepeg_array_62(uint32_t size){
        ltepeg_array_62_t tmp = (ltepeg_array_62_t) safe_malloc(sizeof(struct ltepeg_array_62_s) + (size * sizeof(ltepeg__ent_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_ltepeg_array_62(ltepeg_array_62_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_ltepeg__ent_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_ltepeg_array_62_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_array_62((ltepeg_array_62_t)x);
}

ltepeg_array_62_t copy_ltepeg_array_62(ltepeg_array_62_t x){
        ltepeg_array_62_t tmp = new_ltepeg_array_62(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ltepeg_array_62(ltepeg_array_62_t x, ltepeg_array_62_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_ltepeg__ent_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_ltepeg_array_62(ltepeg_array_62_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_ltepeg__ent_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltepeg_array_62_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltepeg_array_62((ltepeg_array_62_t)x, (ltepeg_array_62_t)y);
}

char * json_ltepeg_array_62_ptr(pointer_t x, type_actual_t T){
        return json_ltepeg_array_62((ltepeg_array_62_t)x);
}

actual_ltepeg_array_62_t actual_ltepeg_array_62(){
        actual_ltepeg_array_62_t new = (actual_ltepeg_array_62_t)safe_malloc(sizeof(struct actual_ltepeg_array_62_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_array_62_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_array_62_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_array_62_ptr);
 

 
        return new;
 };

ltepeg_array_62_t update_ltepeg_array_62(ltepeg_array_62_t x, uint32_t i, ltepeg__ent_adt_t v){
         ltepeg_array_62_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ltepeg_array_62(x);
                      x->count--;};
        ltepeg__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepeg__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

ltepeg_array_62_t upgrade_ltepeg_array_62(ltepeg_array_62_t x, uint32_t i, ltepeg__ent_adt_t v){
         ltepeg_array_62_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltepeg_array_62_s) + (newmax * sizeof(ltepeg__ent_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltepeg_array_62(x);} else {y = copy_ltepeg_array_62(x);
                      x->count--;};
        ltepeg__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepeg__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}




ltepeg_array_63_t new_ltepeg_array_63(uint32_t size){
        ltepeg_array_63_t tmp = (ltepeg_array_63_t) safe_malloc(sizeof(struct ltepeg_array_63_s) + (size * sizeof(ltepeg_array_62_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_ltepeg_array_63(ltepeg_array_63_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_ltepeg_array_62(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_ltepeg_array_63_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_array_63((ltepeg_array_63_t)x);
}

ltepeg_array_63_t copy_ltepeg_array_63(ltepeg_array_63_t x){
        ltepeg_array_63_t tmp = new_ltepeg_array_63(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ltepeg_array_63(ltepeg_array_63_t x, ltepeg_array_63_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_ltepeg_array_62(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_ltepeg_array_63(ltepeg_array_63_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_ltepeg_array_62(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltepeg_array_63_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltepeg_array_63((ltepeg_array_63_t)x, (ltepeg_array_63_t)y);
}

char * json_ltepeg_array_63_ptr(pointer_t x, type_actual_t T){
        return json_ltepeg_array_63((ltepeg_array_63_t)x);
}

actual_ltepeg_array_63_t actual_ltepeg_array_63(){
        actual_ltepeg_array_63_t new = (actual_ltepeg_array_63_t)safe_malloc(sizeof(struct actual_ltepeg_array_63_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_array_63_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_array_63_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_array_63_ptr);
 

 
        return new;
 };

ltepeg_array_63_t update_ltepeg_array_63(ltepeg_array_63_t x, uint32_t i, ltepeg_array_62_t v){
         ltepeg_array_63_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ltepeg_array_63(x);
                      x->count--;};
        ltepeg_array_62_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepeg_array_62(yelems[i]);};
         yelems[i] = v;
         return y;}

ltepeg_array_63_t upgrade_ltepeg_array_63(ltepeg_array_63_t x, uint32_t i, ltepeg_array_62_t v){
         ltepeg_array_63_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltepeg_array_63_s) + (newmax * sizeof(ltepeg_array_62_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltepeg_array_63(x);} else {y = copy_ltepeg_array_63(x);
                      x->count--;};
        ltepeg_array_62_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepeg_array_62(yelems[i]);};
         yelems[i] = v;
         return y;}




bool_t f_ltepeg_closure_64(struct ltepeg_closure_64_s * closure, ltepeg_record_9_t bvar){
        uint32_t bvar_1;
        bvar_1 = (uint32_t)bvar->project_1;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        release_ltepeg_record_9(bvar);
        bool_t result = h_ltepeg_closure_64(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_ltepeg_closure_64(struct ltepeg_closure_64_s * closure, uint32_t bvar_1, uint8_t bvar_2){
        return h_ltepeg_closure_64(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2);}

extern bool_t h_ltepeg_closure_64(uint32_t ivar_5, uint8_t ivar_6, ltepeg_array_63_t ivar_2, uint32_t ivar_1){
        bool_t result;
        ltepeg__ent_adt_t ivar_18;
        ltepeg_array_62_t ivar_10;
        ivar_10 = (ltepeg_array_62_t)ivar_2->elems[ivar_5];
        ivar_10->count++;
        ivar_18 = (ltepeg__ent_adt_t)ivar_10->elems[ivar_6];
        ivar_18->count++;
        release_ltepeg_array_62(ivar_10);
        result = (bool_t)r_ltepeg__pushp((ltepeg__ent_adt_t)ivar_18);

        return result;
}

ltepeg_closure_64_t new_ltepeg_closure_64(void){
        static struct ltepeg_funtype_61_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_61_t, ltepeg_record_9_t))&f_ltepeg_closure_64, .mptr = (bool_t (*)(ltepeg_funtype_61_t, uint32_t, uint8_t))&m_ltepeg_closure_64, .rptr =  (void (*)(ltepeg_funtype_61_t))&release_ltepeg_closure_64, .cptr = (ltepeg_funtype_61_t (*)(ltepeg_funtype_61_t))&copy_ltepeg_closure_64};
        ltepeg_closure_64_t tmp = (ltepeg_closure_64_t) safe_malloc(sizeof(struct ltepeg_closure_64_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_64(ltepeg_funtype_61_t closure){
        ltepeg_closure_64_t x = (ltepeg_closure_64_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_array_63(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_64_t copy_ltepeg_closure_64(ltepeg_closure_64_t x){
        ltepeg_closure_64_t y = new_ltepeg_closure_64();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            ltepeg_funtype_61_htbl_t new_htbl = (ltepeg_funtype_61_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_61_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_61_hashentry_t * new_data = (ltepeg_funtype_61_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_61_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_61_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepeg_record_65_t new_ltepeg_record_65(void){
        ltepeg_record_65_t tmp = (ltepeg_record_65_t) safe_malloc(sizeof(struct ltepeg_record_65_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg_record_65(ltepeg_record_65_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__ent_adt(x->project_1);
         release_ltepeg__ent_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg_record_65_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_record_65((ltepeg_record_65_t)x);
}

ltepeg_record_65_t copy_ltepeg_record_65(ltepeg_record_65_t x){
        ltepeg_record_65_t y = new_ltepeg_record_65();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepeg_record_65(ltepeg_record_65_t x, ltepeg_record_65_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepeg__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_ltepeg__ent_adt(x->project_2, y->project_2);
        return tmp;}

char * json_ltepeg_record_65(ltepeg_record_65_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltepeg__ent_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg_record_65_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_65_t T){
        return equal_ltepeg_record_65((ltepeg_record_65_t)x, (ltepeg_record_65_t)y);
}

char * json_ltepeg_record_65_ptr(pointer_t x, actual_ltepeg_record_65_t T){
        return json_ltepeg_record_65((ltepeg_record_65_t)x);
}

actual_ltepeg_record_65_t actual_ltepeg_record_65(){
        actual_ltepeg_record_65_t new = (actual_ltepeg_record_65_t)safe_malloc(sizeof(struct actual_ltepeg_record_65_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_record_65_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_record_65_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_record_65_ptr);
 

 
        return new;
 };

ltepeg_record_65_t update_ltepeg_record_65_project_1(ltepeg_record_65_t x, ltepeg__ent_adt_t v){
        ltepeg_record_65_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepeg__ent_adt(x->project_1);};}
        else {y = copy_ltepeg_record_65(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepeg__ent_adt_t)v;
        return y;}

ltepeg_record_65_t update_ltepeg_record_65_project_2(ltepeg_record_65_t x, ltepeg__ent_adt_t v){
        ltepeg_record_65_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltepeg__ent_adt(x->project_2);};}
        else {y = copy_ltepeg_record_65(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltepeg__ent_adt_t)v;
        return y;}



void release_ltepeg_funtype_66(ltepeg_funtype_66_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_66_t copy_ltepeg_funtype_66(ltepeg_funtype_66_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_66(ltepeg_funtype_66_t x, ltepeg_funtype_66_t y){
        return false;}

char* json_ltepeg_funtype_66(ltepeg_funtype_66_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_66\""); return result;}


ltepeg__lang_spec_t new_ltepeg__lang_spec(uint32_t size){
        ltepeg__lang_spec_t tmp = (ltepeg__lang_spec_t) safe_malloc(sizeof(struct ltepeg__lang_spec_s) + (size * sizeof(ltepeg__prepeg_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_ltepeg__lang_spec(ltepeg__lang_spec_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_ltepeg__prepeg_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_ltepeg__lang_spec_ptr(pointer_t x, type_actual_t T){
        release_ltepeg__lang_spec((ltepeg__lang_spec_t)x);
}

ltepeg__lang_spec_t copy_ltepeg__lang_spec(ltepeg__lang_spec_t x){
        ltepeg__lang_spec_t tmp = new_ltepeg__lang_spec(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ltepeg__lang_spec(ltepeg__lang_spec_t x, ltepeg__lang_spec_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_ltepeg__prepeg_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_ltepeg__lang_spec(ltepeg__lang_spec_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_ltepeg__prepeg_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltepeg__lang_spec_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltepeg__lang_spec((ltepeg__lang_spec_t)x, (ltepeg__lang_spec_t)y);
}

char * json_ltepeg__lang_spec_ptr(pointer_t x, type_actual_t T){
        return json_ltepeg__lang_spec((ltepeg__lang_spec_t)x);
}

actual_ltepeg__lang_spec_t actual_ltepeg__lang_spec(){
        actual_ltepeg__lang_spec_t new = (actual_ltepeg__lang_spec_t)safe_malloc(sizeof(struct actual_ltepeg__lang_spec_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg__lang_spec_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg__lang_spec_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg__lang_spec_ptr);
 

 
        return new;
 };

ltepeg__lang_spec_t update_ltepeg__lang_spec(ltepeg__lang_spec_t x, uint32_t i, ltepeg__prepeg_adt_t v){
         ltepeg__lang_spec_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ltepeg__lang_spec(x);
                      x->count--;};
        ltepeg__prepeg_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepeg__prepeg_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

ltepeg__lang_spec_t upgrade_ltepeg__lang_spec(ltepeg__lang_spec_t x, uint32_t i, ltepeg__prepeg_adt_t v){
         ltepeg__lang_spec_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltepeg__lang_spec_s) + (newmax * sizeof(ltepeg__prepeg_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltepeg__lang_spec(x);} else {y = copy_ltepeg__lang_spec(x);
                      x->count--;};
        ltepeg__prepeg_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepeg__prepeg_adt(yelems[i]);};
         yelems[i] = v;
         return y;}




bool_t f_ltepeg_closure_68(struct ltepeg_closure_68_s * closure, ltepeg_record_65_t bvar){
        ltepeg__ent_adt_t bvar_1;
        bvar_1 = (ltepeg__ent_adt_t)bvar->project_1;
        bvar->project_1->count++;
        ltepeg__ent_adt_t bvar_2;
        bvar_2 = (ltepeg__ent_adt_t)bvar->project_2;
        bvar->project_2->count++;
        release_ltepeg_record_65(bvar);
        bool_t result = h_ltepeg_closure_68(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_ltepeg__ent_adt(bvar_1);
        release_ltepeg__ent_adt(bvar_2);
        return result;}

bool_t m_ltepeg_closure_68(struct ltepeg_closure_68_s * closure, ltepeg__ent_adt_t bvar_1, ltepeg__ent_adt_t bvar_2){
        return h_ltepeg_closure_68(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_ltepeg_closure_68(ltepeg__ent_adt_t ivar_6, ltepeg__ent_adt_t ivar_7, ltepeg_array_63_t ivar_3, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2){
        bool_t result;
        /* p1 */ uint32_t ivar_8;
        ivar_6->count++;
        ivar_8 = (uint32_t)ltepeg__ent_adt_pos((ltepeg__ent_adt_t)ivar_6);
        /* nt1 */ uint8_t ivar_12;
        ivar_12 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_6);
        /* p2 */ uint32_t ivar_16;
        ivar_7->count++;
        ivar_16 = (uint32_t)ltepeg__ent_adt_pos((ltepeg__ent_adt_t)ivar_7);
        /* nt2 */ uint8_t ivar_20;
        ivar_20 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_7);
        bool_t ivar_24;
        uint8_t ivar_27;
        ivar_27 = (uint8_t)ltepeg__num_non_terminals();
        ivar_24 = (ivar_12 >= ivar_27);
        if (ivar_24){ 
             result = (bool_t) true;
} else {
        
             ltepeg__prepeg_adt_t ivar_29;
             ivar_29 = (ltepeg__prepeg_adt_t)ivar_2->elems[ivar_12];
             ivar_29->count++;
             bool_t ivar_124;
             ivar_29->count++;
             ivar_124 = (bool_t)r_ltepeg__ltep((ltepeg__prepeg_adt_t)ivar_29);
             if (ivar_124){  
           uint8_t ivar_34;
           ivar_29->count++;
           ivar_34 = (uint8_t)ltepeg__prepeg_adt_fst((ltepeg__prepeg_adt_t)ivar_29);
           uint8_t ivar_35;
           ivar_29->count++;
           ivar_35 = (uint8_t)ltepeg__prepeg_adt_lthen((ltepeg__prepeg_adt_t)ivar_29);
           uint8_t ivar_36;
           ivar_36 = (uint8_t)ltepeg__prepeg_adt_lelse((ltepeg__prepeg_adt_t)ivar_29);
           bool_t ivar_46;
           bool_t ivar_48;
           ivar_48 = (ivar_16 == ivar_8);
           if (ivar_48){   
           ivar_46 = (ivar_20 == ivar_34);
} else {
           
           ivar_46 = (bool_t) false;
};
           if (ivar_46){   
           result = (bool_t) true;
} else {
           
           bool_t ivar_57;
           bool_t ivar_59;
           ltepeg__ent_adt_t ivar_72;
           ltepeg_array_62_t ivar_64;
           ivar_64 = (ltepeg_array_62_t)ivar_3->elems[ivar_8];
           ivar_64->count++;
           ivar_72 = (ltepeg__ent_adt_t)ivar_64->elems[ivar_34];
           ivar_72->count++;
           release_ltepeg_array_62(ivar_64);
           ivar_59 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_72);
           if (ivar_59){    
            bool_t ivar_73;
            ivar_73 = (ivar_20 == ivar_35);
            if (ivar_73){     
             mpq_ptr_t ivar_79;
             uint32_t ivar_81;
             ltepeg__ent_adt_t ivar_93;
             ltepeg_array_62_t ivar_85;
             ivar_85 = (ltepeg_array_62_t)ivar_3->elems[ivar_8];
             ivar_85->count++;
             ivar_93 = (ltepeg__ent_adt_t)ivar_85->elems[ivar_34];
             ivar_93->count++;
             release_ltepeg_array_62(ivar_85);
             ivar_81 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_93);
             mpz_t tmp88813;
             mpz_init(tmp88813);
             mpz_set_ui(tmp88813, (uint64_t)ivar_8);
             mpz_add_ui(tmp88813, tmp88813, (uint64_t)ivar_81);
             mpq_mk_set_z(ivar_79, tmp88813);
             mpz_clear(tmp88813);
             int64_t tmp88814 = mpq_cmp_ui(ivar_79, ivar_16, 1);
             ivar_57 = (tmp88814 == 0);
} else {
            
             ivar_57 = (bool_t) false;
};
} else {
           
            ivar_57 = (bool_t) false;
};
           if (ivar_57){    
            result = (bool_t) true;
} else {
           
            bool_t ivar_98;
            ltepeg__ent_adt_t ivar_111;
            ltepeg_array_62_t ivar_103;
            ivar_103 = (ltepeg_array_62_t)ivar_3->elems[ivar_8];
            ivar_103->count++;
            ivar_111 = (ltepeg__ent_adt_t)ivar_103->elems[ivar_34];
            ivar_111->count++;
            release_ltepeg_array_62(ivar_103);
            ivar_98 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_111);
            if (ivar_98){     
             bool_t ivar_112;
             ivar_112 = (ivar_20 == ivar_36);
             if (ivar_112){      
              result = (ivar_16 == ivar_8);
} else {
             
              result = (bool_t) false;
};
} else {
            
             result = (bool_t) false;
};
};
};
} else {
             
           release_ltepeg__prepeg_adt(ivar_29);
           result = (bool_t) false;
};
};

        return result;
}

ltepeg_closure_68_t new_ltepeg_closure_68(void){
        static struct ltepeg_funtype_66_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_66_t, ltepeg_record_65_t))&f_ltepeg_closure_68, .mptr = (bool_t (*)(ltepeg_funtype_66_t, ltepeg__ent_adt_t, ltepeg__ent_adt_t))&m_ltepeg_closure_68, .rptr =  (void (*)(ltepeg_funtype_66_t))&release_ltepeg_closure_68, .cptr = (ltepeg_funtype_66_t (*)(ltepeg_funtype_66_t))&copy_ltepeg_closure_68};
        ltepeg_closure_68_t tmp = (ltepeg_closure_68_t) safe_malloc(sizeof(struct ltepeg_closure_68_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_68(ltepeg_funtype_66_t closure){
        ltepeg_closure_68_t x = (ltepeg_closure_68_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_array_63(x->fvar_1);
         release_ltepeg__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_68_t copy_ltepeg_closure_68(ltepeg_closure_68_t x){
        ltepeg_closure_68_t y = new_ltepeg_closure_68();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltepeg_funtype_66_htbl_t new_htbl = (ltepeg_funtype_66_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_66_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_66_hashentry_t * new_data = (ltepeg_funtype_66_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_66_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_66_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepeg_funtype_69(ltepeg_funtype_69_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_69_t copy_ltepeg_funtype_69(ltepeg_funtype_69_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltepeg_funtype_69(ltepeg_funtype_69_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltepeg_funtype_69_hashentry_t data = htbl->data[hashindex];
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

ltepeg_funtype_69_t dupdate_ltepeg_funtype_69(ltepeg_funtype_69_t a, uint32_t i, mpz_ptr_t v){
        ltepeg_funtype_69_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltepeg_funtype_69_htbl_t)safe_malloc(sizeof(struct ltepeg_funtype_69_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltepeg_funtype_69_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltepeg_funtype_69_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltepeg_funtype_69_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltepeg_funtype_69_hashentry_t * new_data = (ltepeg_funtype_69_hashentry_t *)safe_malloc(new_size * sizeof(struct ltepeg_funtype_69_hashentry_s));
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
        uint32_t hashindex = lookup_ltepeg_funtype_69(htbl, i, ihash);
        ltepeg_funtype_69_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; mpz_set(htbl->data[hashindex].value, v); htbl->num_entries++;}
            else {mpz_ptr_t tempvalue;mpz_mk_set(tempvalue, htbl->data[hashindex].value);mpz_set(htbl->data[hashindex].value, v);};
        return a;

}

ltepeg_funtype_69_t update_ltepeg_funtype_69(ltepeg_funtype_69_t a, uint32_t i, mpz_ptr_t v){
        if (a->count == 1){
                return dupdate_ltepeg_funtype_69(a, i, v);
            } else {
                ltepeg_funtype_69_t x = copy_ltepeg_funtype_69(a);
                a->count--;
                return dupdate_ltepeg_funtype_69(x, i, v);
            }}

bool_t equal_ltepeg_funtype_69(ltepeg_funtype_69_t x, ltepeg_funtype_69_t y){
        return false;}

char* json_ltepeg_funtype_69(ltepeg_funtype_69_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_69\""); return result;}


ltepeg_array_70_t new_ltepeg_array_70(uint32_t size){
        ltepeg_array_70_t tmp = (ltepeg_array_70_t) safe_malloc(sizeof(struct ltepeg_array_70_s) + (size * sizeof(mpz_ptr_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_ltepeg_array_70(ltepeg_array_70_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_ltepeg_array_70_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_array_70((ltepeg_array_70_t)x);
}

ltepeg_array_70_t copy_ltepeg_array_70(ltepeg_array_70_t x){
        ltepeg_array_70_t tmp = new_ltepeg_array_70(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){mpz_set(tmp->elems[i], x->elems[i]);};
         return tmp;}

bool_t equal_ltepeg_array_70(ltepeg_array_70_t x, ltepeg_array_70_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        tmp = (mpz_cmp(x->elems[i], y->elems[i]) == 0);
        return tmp;}

char * json_ltepeg_array_70(ltepeg_array_70_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_mpz(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltepeg_array_70_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltepeg_array_70((ltepeg_array_70_t)x, (ltepeg_array_70_t)y);
}

char * json_ltepeg_array_70_ptr(pointer_t x, type_actual_t T){
        return json_ltepeg_array_70((ltepeg_array_70_t)x);
}

actual_ltepeg_array_70_t actual_ltepeg_array_70(){
        actual_ltepeg_array_70_t new = (actual_ltepeg_array_70_t)safe_malloc(sizeof(struct actual_ltepeg_array_70_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_array_70_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_array_70_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_array_70_ptr);
 

 
        return new;
 };

ltepeg_array_70_t update_ltepeg_array_70(ltepeg_array_70_t x, uint32_t i, mpz_t v){
        ltepeg_array_70_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_ltepeg_array_70(x );
                x->count--;};
        mpz_set(y->elems[i], v);
        return y;}

ltepeg_array_70_t upgrade_ltepeg_array_70(ltepeg_array_70_t x, uint32_t i, mpz_t v){
        ltepeg_array_70_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltepeg_array_70_s) + (newmax * sizeof(mpz_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltepeg_array_70(x);}
           else {y = copy_ltepeg_array_70(x );
                x->count--;};
        mpz_set(y->elems[i], v);
        return y;}




mpz_ptr_t f_ltepeg_closure_71(struct ltepeg_closure_71_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        ltepeg_funtype_69_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_ltepeg_funtype_69(htbl, bvar, hash);
        ltepeg_funtype_69_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            mpz_ptr_t result;
            mpz_mk_set(result, entry.value);
            return result;}
        

        return h_ltepeg_closure_71(bvar, closure->fvar_1, closure->fvar_2);};

return h_ltepeg_closure_71(bvar, closure->fvar_1, closure->fvar_2);}

mpz_ptr_t m_ltepeg_closure_71(struct ltepeg_closure_71_s * closure, uint32_t bvar){
        return h_ltepeg_closure_71(bvar, closure->fvar_1, closure->fvar_2);}

extern mpz_ptr_t h_ltepeg_closure_71(uint32_t ivar_4, ltepeg_array_70_t ivar_2, uint32_t ivar_1){
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
             ltepeg_funtype_69_t ivar_25;
             ivar_2->count++;
             ivar_25 = (ltepeg_funtype_69_t)ltepeg__sigma((uint32_t)ivar_1, (ltepeg_array_70_t)ivar_2);
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

ltepeg_closure_71_t new_ltepeg_closure_71(void){
        static struct ltepeg_funtype_69_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ltepeg_funtype_69_t, uint32_t))&f_ltepeg_closure_71, .mptr = (mpz_ptr_t (*)(ltepeg_funtype_69_t, uint32_t))&m_ltepeg_closure_71, .rptr =  (void (*)(ltepeg_funtype_69_t))&release_ltepeg_closure_71, .cptr = (ltepeg_funtype_69_t (*)(ltepeg_funtype_69_t))&copy_ltepeg_closure_71};
        ltepeg_closure_71_t tmp = (ltepeg_closure_71_t) safe_malloc(sizeof(struct ltepeg_closure_71_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_71(ltepeg_funtype_69_t closure){
        ltepeg_closure_71_t x = (ltepeg_closure_71_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_array_70(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_71_t copy_ltepeg_closure_71(ltepeg_closure_71_t x){
        ltepeg_closure_71_t y = new_ltepeg_closure_71();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            ltepeg_funtype_69_htbl_t new_htbl = (ltepeg_funtype_69_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_69_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_69_hashentry_t * new_data = (ltepeg_funtype_69_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_69_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_69_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepeg_funtype_72(ltepeg_funtype_72_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_72_t copy_ltepeg_funtype_72(ltepeg_funtype_72_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_72(ltepeg_funtype_72_t x, ltepeg_funtype_72_t y){
        return false;}

char* json_ltepeg_funtype_72(ltepeg_funtype_72_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_72\""); return result;}

void release_ltepeg_funtype_73(ltepeg_funtype_73_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_73_t copy_ltepeg_funtype_73(ltepeg_funtype_73_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_73(ltepeg_funtype_73_t x, ltepeg_funtype_73_t y){
        return false;}

char* json_ltepeg_funtype_73(ltepeg_funtype_73_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_73\""); return result;}


bool_t f_ltepeg_closure_74(struct ltepeg_closure_74_s * closure, ltepeg__ent_adt_t bvar){
        bool_t result = h_ltepeg_closure_74(bvar); 
        return result;}

bool_t m_ltepeg_closure_74(struct ltepeg_closure_74_s * closure, ltepeg__ent_adt_t bvar){
        return h_ltepeg_closure_74(bvar);}

extern bool_t h_ltepeg_closure_74(ltepeg__ent_adt_t ivar_19){
        bool_t result;
        result = (bool_t)r_ltepeg__pushp((ltepeg__ent_adt_t)ivar_19);

        return result;
}

ltepeg_closure_74_t new_ltepeg_closure_74(void){
        static struct ltepeg_funtype_56_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&f_ltepeg_closure_74, .mptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&m_ltepeg_closure_74, .rptr =  (void (*)(ltepeg_funtype_56_t))&release_ltepeg_closure_74, .cptr = (ltepeg_funtype_56_t (*)(ltepeg_funtype_56_t))&copy_ltepeg_closure_74};
        ltepeg_closure_74_t tmp = (ltepeg_closure_74_t) safe_malloc(sizeof(struct ltepeg_closure_74_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_74(ltepeg_funtype_56_t closure){
        ltepeg_closure_74_t x = (ltepeg_closure_74_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_74_t copy_ltepeg_closure_74(ltepeg_closure_74_t x){
        ltepeg_closure_74_t y = new_ltepeg_closure_74();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            ltepeg_funtype_56_htbl_t new_htbl = (ltepeg_funtype_56_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_56_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_56_hashentry_t * new_data = (ltepeg_funtype_56_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_ltepeg_closure_75(struct ltepeg_closure_75_s * closure, ltepeg__ent_adt_t bvar){
        bool_t result = h_ltepeg_closure_75(bvar); 
        return result;}

bool_t m_ltepeg_closure_75(struct ltepeg_closure_75_s * closure, ltepeg__ent_adt_t bvar){
        return h_ltepeg_closure_75(bvar);}

extern bool_t h_ltepeg_closure_75(ltepeg__ent_adt_t ivar_9){
        bool_t result;
        result = (bool_t)ltepeg__good_or_failp((ltepeg__ent_adt_t)ivar_9);

        return result;
}

ltepeg_closure_75_t new_ltepeg_closure_75(void){
        static struct ltepeg_funtype_56_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&f_ltepeg_closure_75, .mptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&m_ltepeg_closure_75, .rptr =  (void (*)(ltepeg_funtype_56_t))&release_ltepeg_closure_75, .cptr = (ltepeg_funtype_56_t (*)(ltepeg_funtype_56_t))&copy_ltepeg_closure_75};
        ltepeg_closure_75_t tmp = (ltepeg_closure_75_t) safe_malloc(sizeof(struct ltepeg_closure_75_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_75(ltepeg_funtype_56_t closure){
        ltepeg_closure_75_t x = (ltepeg_closure_75_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_75_t copy_ltepeg_closure_75(ltepeg_closure_75_t x){
        ltepeg_closure_75_t y = new_ltepeg_closure_75();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            ltepeg_funtype_56_htbl_t new_htbl = (ltepeg_funtype_56_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_56_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_56_hashentry_t * new_data = (ltepeg_funtype_56_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepeg_funtype_76(ltepeg_funtype_76_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_76_t copy_ltepeg_funtype_76(ltepeg_funtype_76_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltepeg_funtype_76(ltepeg_funtype_76_htbl_t htbl, uint64_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltepeg_funtype_76_hashentry_t data = htbl->data[hashindex];
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

ltepeg_funtype_76_t dupdate_ltepeg_funtype_76(ltepeg_funtype_76_t a, uint64_t i, bool_t v){
        ltepeg_funtype_76_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltepeg_funtype_76_htbl_t)safe_malloc(sizeof(struct ltepeg_funtype_76_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltepeg_funtype_76_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltepeg_funtype_76_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint64_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltepeg_funtype_76_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltepeg_funtype_76_hashentry_t * new_data = (ltepeg_funtype_76_hashentry_t *)safe_malloc(new_size * sizeof(struct ltepeg_funtype_76_hashentry_s));
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
        uint32_t hashindex = lookup_ltepeg_funtype_76(htbl, i, ihash);
        ltepeg_funtype_76_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint64_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

ltepeg_funtype_76_t update_ltepeg_funtype_76(ltepeg_funtype_76_t a, uint64_t i, bool_t v){
        if (a->count == 1){
                return dupdate_ltepeg_funtype_76(a, i, v);
            } else {
                ltepeg_funtype_76_t x = copy_ltepeg_funtype_76(a);
                a->count--;
                return dupdate_ltepeg_funtype_76(x, i, v);
            }}

bool_t equal_ltepeg_funtype_76(ltepeg_funtype_76_t x, ltepeg_funtype_76_t y){
        return false;}

char* json_ltepeg_funtype_76(ltepeg_funtype_76_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_76\""); return result;}


bool_t f_ltepeg_closure_77(struct ltepeg_closure_77_s * closure, uint64_t bvar){
if (closure->htbl != NULL){
        ltepeg_funtype_76_htbl_t htbl = closure->htbl;
        uint32_t hash = uint64_hash(bvar);
        uint32_t hashindex = lookup_ltepeg_funtype_76(htbl, bvar, hash);
        ltepeg_funtype_76_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_ltepeg_closure_77(bvar, closure->fvar_1, closure->fvar_2);};

return h_ltepeg_closure_77(bvar, closure->fvar_1, closure->fvar_2);}

bool_t m_ltepeg_closure_77(struct ltepeg_closure_77_s * closure, uint64_t bvar){
        return h_ltepeg_closure_77(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_ltepeg_closure_77(uint64_t ivar_5, ltepeg_array_63_t ivar_2, uint32_t ivar_1){
        bool_t result;
        uint64_t ivar_6;
        ivar_2->count++;
        ivar_6 = (uint64_t)ltepeg__pushcount((uint32_t)ivar_1, (ltepeg_array_63_t)ivar_2);
        result = (ivar_6 == ivar_5);

        return result;
}

ltepeg_closure_77_t new_ltepeg_closure_77(void){
        static struct ltepeg_funtype_76_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_76_t, uint64_t))&f_ltepeg_closure_77, .mptr = (bool_t (*)(ltepeg_funtype_76_t, uint64_t))&m_ltepeg_closure_77, .rptr =  (void (*)(ltepeg_funtype_76_t))&release_ltepeg_closure_77, .cptr = (ltepeg_funtype_76_t (*)(ltepeg_funtype_76_t))&copy_ltepeg_closure_77};
        ltepeg_closure_77_t tmp = (ltepeg_closure_77_t) safe_malloc(sizeof(struct ltepeg_closure_77_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_77(ltepeg_funtype_76_t closure){
        ltepeg_closure_77_t x = (ltepeg_closure_77_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_array_63(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_77_t copy_ltepeg_closure_77(ltepeg_closure_77_t x){
        ltepeg_closure_77_t y = new_ltepeg_closure_77();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            ltepeg_funtype_76_htbl_t new_htbl = (ltepeg_funtype_76_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_76_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_76_hashentry_t * new_data = (ltepeg_funtype_76_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_76_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_76_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_ltepeg_closure_78(struct ltepeg_closure_78_s * closure, ltepeg__ent_adt_t bvar){
        bool_t result = h_ltepeg_closure_78(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

bool_t m_ltepeg_closure_78(struct ltepeg_closure_78_s * closure, ltepeg__ent_adt_t bvar){
        return h_ltepeg_closure_78(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern bool_t h_ltepeg_closure_78(ltepeg__ent_adt_t ivar_7, ltepeg_array_63_t ivar_4, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, uint64_t ivar_3){
        bool_t result;
        bool_t ivar_8;
        uint8_t ivar_9;
        ivar_7->count++;
        ivar_9 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_7);
        uint8_t ivar_10;
        ivar_10 = (uint8_t)ltepeg__num_non_terminals();
        ivar_8 = (ivar_9 >= ivar_10);
        if (ivar_8){ 
             release_ltepeg__ent_adt(ivar_7);
             uint8_t ivar_16;
             ivar_16 = (uint8_t)0;
             result = (ivar_3 == ivar_16);
} else {
        
             /* entry */ ltepeg__ent_adt_t ivar_18;
             ltepeg_array_62_t ivar_24;
             uint32_t ivar_32;
             ivar_7->count++;
             ivar_32 = (uint32_t)ltepeg__ent_adt_pos((ltepeg__ent_adt_t)ivar_7);
             ivar_24 = (ltepeg_array_62_t)ivar_4->elems[ivar_32];
             ivar_24->count++;
             uint8_t ivar_33;
             ivar_7->count++;
             ivar_33 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_7);
             ivar_18 = (ltepeg__ent_adt_t)ivar_24->elems[ivar_33];
             ivar_18->count++;
             release_ltepeg_array_62(ivar_24);
             bool_t ivar_34;
             ltepeg_funtype_56_t ivar_39;
             ivar_39 = (ltepeg_funtype_56_t)ltepeg__good_push_entryp((uint32_t)ivar_1);
             ivar_18->count++;
             ivar_34 = (bool_t)ivar_39->ftbl->fptr(ivar_39, ivar_18);
             ivar_39->ftbl->rptr(ivar_39);
             if (ivar_34){  
           bool_t ivar_45;
           bool_t ivar_47;
           uint8_t ivar_49;
           ivar_18->count++;
           ivar_49 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_18);
           uint8_t ivar_50;
           ivar_50 = (uint8_t)ltepeg__num_non_terminals();
           ivar_47 = (ivar_49 == ivar_50);
           if (ivar_47){   
           release_ltepeg__ent_adt(ivar_7);
           ivar_45 = (bool_t) true;
} else {
           
           ltepeg_funtype_66_t ivar_59;
           ivar_2->count++;
           ivar_4->count++;
           ivar_59 = (ltepeg_funtype_66_t)ltepeg__successor((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepeg_array_63_t)ivar_4);
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
            ltepeg_funtype_56_t ivar_80;
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
            ivar_80 = (ltepeg_funtype_56_t)ltepeg__good_stackp((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (uint64_t)ivar_92, (ltepeg_array_63_t)ivar_4);
            result = (bool_t)ivar_80->ftbl->fptr(ivar_80, ivar_18);
            ivar_80->ftbl->rptr(ivar_80);
} else {
           
            release_ltepeg__ent_adt(ivar_18);
            result = (bool_t) false;
};
} else {
           
           release_ltepeg__ent_adt(ivar_18);
           result = (bool_t) false;
};
} else {
             
           release_ltepeg__ent_adt(ivar_18);
           release_ltepeg__ent_adt(ivar_7);
           result = (bool_t) false;
};
};

        return result;
}

ltepeg_closure_78_t new_ltepeg_closure_78(void){
        static struct ltepeg_funtype_56_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&f_ltepeg_closure_78, .mptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&m_ltepeg_closure_78, .rptr =  (void (*)(ltepeg_funtype_56_t))&release_ltepeg_closure_78, .cptr = (ltepeg_funtype_56_t (*)(ltepeg_funtype_56_t))&copy_ltepeg_closure_78};
        ltepeg_closure_78_t tmp = (ltepeg_closure_78_t) safe_malloc(sizeof(struct ltepeg_closure_78_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_78(ltepeg_funtype_56_t closure){
        ltepeg_closure_78_t x = (ltepeg_closure_78_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_array_63(x->fvar_1);
         release_ltepeg__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_78_t copy_ltepeg_closure_78(ltepeg_closure_78_t x){
        ltepeg_closure_78_t y = new_ltepeg_closure_78();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = (uint64_t)x->fvar_4;
        if (x->htbl != NULL){
            ltepeg_funtype_56_htbl_t new_htbl = (ltepeg_funtype_56_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_56_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_56_hashentry_t * new_data = (ltepeg_funtype_56_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_ltepeg_closure_79(struct ltepeg_closure_79_s * closure, ltepeg_record_65_t bvar){
        ltepeg__ent_adt_t bvar_1;
        bvar_1 = (ltepeg__ent_adt_t)bvar->project_1;
        bvar->project_1->count++;
        ltepeg__ent_adt_t bvar_2;
        bvar_2 = (ltepeg__ent_adt_t)bvar->project_2;
        bvar->project_2->count++;
        release_ltepeg_record_65(bvar);
        bool_t result = h_ltepeg_closure_79(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        release_ltepeg__ent_adt(bvar_1);
        release_ltepeg__ent_adt(bvar_2);
        return result;}

bool_t m_ltepeg_closure_79(struct ltepeg_closure_79_s * closure, ltepeg__ent_adt_t bvar_1, ltepeg__ent_adt_t bvar_2){
        return h_ltepeg_closure_79(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern bool_t h_ltepeg_closure_79(ltepeg__ent_adt_t ivar_7, ltepeg__ent_adt_t ivar_8, ltepeg_array_63_t ivar_4, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, uint64_t ivar_3){
        bool_t result;
        bool_t ivar_9;
        uint8_t ivar_10;
        ivar_8->count++;
        ivar_10 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_8);
        uint8_t ivar_11;
        ivar_11 = (uint8_t)ltepeg__num_non_terminals();
        ivar_9 = (ivar_10 >= ivar_11);
        if (ivar_9){ 
             release_ltepeg__ent_adt(ivar_7);
             release_ltepeg__ent_adt(ivar_8);
             result = (bool_t) false;
} else {
        
             bool_t ivar_16;
             ivar_7->count++;
             ivar_8->count++;
             ivar_16 = (bool_t) equal_ltepeg__ent_adt(ivar_7, ivar_8);
             if (ivar_16){  
           release_ltepeg__ent_adt(ivar_7);
           release_ltepeg__ent_adt(ivar_8);
           result = (bool_t) true;
} else {
             
           ltepeg_funtype_66_t ivar_40;
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
           ivar_40 = (ltepeg_funtype_66_t)ltepeg__mem_stackp((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (uint64_t)ivar_52, (ltepeg_array_63_t)ivar_4);
           ltepeg__ent_adt_t ivar_58;
           ltepeg_array_62_t ivar_28;
           uint32_t ivar_36;
           ivar_8->count++;
           ivar_36 = (uint32_t)ltepeg__ent_adt_pos((ltepeg__ent_adt_t)ivar_8);
           ivar_28 = (ltepeg_array_62_t)ivar_4->elems[ivar_36];
           ivar_28->count++;
           uint8_t ivar_37;
           ivar_37 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_8);
           ivar_58 = (ltepeg__ent_adt_t)ivar_28->elems[ivar_37];
           ivar_58->count++;
           release_ltepeg_array_62(ivar_28);
           result = (bool_t)ivar_40->ftbl->mptr(ivar_40, ivar_7, ivar_58);
           ivar_40->ftbl->rptr(ivar_40);
};
};

        return result;
}

ltepeg_closure_79_t new_ltepeg_closure_79(void){
        static struct ltepeg_funtype_66_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_66_t, ltepeg_record_65_t))&f_ltepeg_closure_79, .mptr = (bool_t (*)(ltepeg_funtype_66_t, ltepeg__ent_adt_t, ltepeg__ent_adt_t))&m_ltepeg_closure_79, .rptr =  (void (*)(ltepeg_funtype_66_t))&release_ltepeg_closure_79, .cptr = (ltepeg_funtype_66_t (*)(ltepeg_funtype_66_t))&copy_ltepeg_closure_79};
        ltepeg_closure_79_t tmp = (ltepeg_closure_79_t) safe_malloc(sizeof(struct ltepeg_closure_79_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_79(ltepeg_funtype_66_t closure){
        ltepeg_closure_79_t x = (ltepeg_closure_79_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_array_63(x->fvar_1);
         release_ltepeg__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_79_t copy_ltepeg_closure_79(ltepeg_closure_79_t x){
        ltepeg_closure_79_t y = new_ltepeg_closure_79();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = (uint64_t)x->fvar_4;
        if (x->htbl != NULL){
            ltepeg_funtype_66_htbl_t new_htbl = (ltepeg_funtype_66_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_66_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_66_hashentry_t * new_data = (ltepeg_funtype_66_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_66_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_66_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_ltepeg_closure_80(struct ltepeg_closure_80_s * closure, ltepeg__ent_adt_t bvar){
        bool_t result = h_ltepeg_closure_80(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

bool_t m_ltepeg_closure_80(struct ltepeg_closure_80_s * closure, ltepeg__ent_adt_t bvar){
        return h_ltepeg_closure_80(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern bool_t h_ltepeg_closure_80(ltepeg__ent_adt_t ivar_7, ltepeg_array_63_t ivar_4, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, uint64_t ivar_3){
        bool_t result;
        bool_t ivar_8;
        uint8_t ivar_9;
        ivar_7->count++;
        ivar_9 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_7);
        uint8_t ivar_10;
        ivar_10 = (uint8_t)ltepeg__num_non_terminals();
        ivar_8 = (ivar_9 >= ivar_10);
        if (ivar_8){ 
             release_ltepeg__ent_adt(ivar_7);
             result = (bool_t) true;
} else {
        
             /* rest */ ltepeg__ent_adt_t ivar_15;
             ltepeg_array_62_t ivar_21;
             uint32_t ivar_29;
             ivar_7->count++;
             ivar_29 = (uint32_t)ltepeg__ent_adt_pos((ltepeg__ent_adt_t)ivar_7);
             ivar_21 = (ltepeg_array_62_t)ivar_4->elems[ivar_29];
             ivar_21->count++;
             uint8_t ivar_30;
             ivar_7->count++;
             ivar_30 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_7);
             ivar_15 = (ltepeg__ent_adt_t)ivar_21->elems[ivar_30];
             ivar_15->count++;
             release_ltepeg_array_62(ivar_21);
             bool_t ivar_31;
             bool_t ivar_33;
             ltepeg_funtype_66_t ivar_38;
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
             ivar_38 = (ltepeg_funtype_66_t)ltepeg__mem_stackp((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (uint64_t)ivar_50, (ltepeg_array_63_t)ivar_4);
             ivar_7->count++;
             ivar_33 = (bool_t)ivar_38->ftbl->mptr(ivar_38, ivar_7, ivar_15);
             ivar_38->ftbl->rptr(ivar_38);
             ivar_31 = !ivar_33;
             if (ivar_31){  
           ltepeg_funtype_56_t ivar_76;
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
           ivar_76 = (ltepeg_funtype_56_t)ltepeg__fine_stackp((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (uint64_t)ivar_88, (ltepeg_array_63_t)ivar_4);
           ltepeg__ent_adt_t ivar_93;
           ltepeg_array_62_t ivar_64;
           uint32_t ivar_72;
           ivar_7->count++;
           ivar_72 = (uint32_t)ltepeg__ent_adt_pos((ltepeg__ent_adt_t)ivar_7);
           ivar_64 = (ltepeg_array_62_t)ivar_4->elems[ivar_72];
           ivar_64->count++;
           uint8_t ivar_73;
           ivar_73 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_7);
           ivar_93 = (ltepeg__ent_adt_t)ivar_64->elems[ivar_73];
           ivar_93->count++;
           release_ltepeg_array_62(ivar_64);
           result = (bool_t)ivar_76->ftbl->fptr(ivar_76, ivar_93);
           ivar_76->ftbl->rptr(ivar_76);
} else {
             
           release_ltepeg__ent_adt(ivar_7);
           result = (bool_t) false;
};
};

        return result;
}

ltepeg_closure_80_t new_ltepeg_closure_80(void){
        static struct ltepeg_funtype_56_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&f_ltepeg_closure_80, .mptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&m_ltepeg_closure_80, .rptr =  (void (*)(ltepeg_funtype_56_t))&release_ltepeg_closure_80, .cptr = (ltepeg_funtype_56_t (*)(ltepeg_funtype_56_t))&copy_ltepeg_closure_80};
        ltepeg_closure_80_t tmp = (ltepeg_closure_80_t) safe_malloc(sizeof(struct ltepeg_closure_80_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_80(ltepeg_funtype_56_t closure){
        ltepeg_closure_80_t x = (ltepeg_closure_80_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_array_63(x->fvar_1);
         release_ltepeg__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_80_t copy_ltepeg_closure_80(ltepeg_closure_80_t x){
        ltepeg_closure_80_t y = new_ltepeg_closure_80();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = (uint64_t)x->fvar_4;
        if (x->htbl != NULL){
            ltepeg_funtype_56_htbl_t new_htbl = (ltepeg_funtype_56_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_56_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_56_hashentry_t * new_data = (ltepeg_funtype_56_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepeg_record_81_t new_ltepeg_record_81(void){
        ltepeg_record_81_t tmp = (ltepeg_record_81_t) safe_malloc(sizeof(struct ltepeg_record_81_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg_record_81(ltepeg_record_81_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg_array_63(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg_record_81_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_record_81((ltepeg_record_81_t)x);
}

ltepeg_record_81_t copy_ltepeg_record_81(ltepeg_record_81_t x){
        ltepeg_record_81_t y = new_ltepeg_record_81();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->project_4 = (uint64_t)x->project_4;
        y->count = 1;
        return y;}

bool_t equal_ltepeg_record_81(ltepeg_record_81_t x, ltepeg_record_81_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepeg_array_63(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && x->project_4 == y->project_4;
        return tmp;}

char * json_ltepeg_record_81(ltepeg_record_81_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepeg_array_63(x->project_1));
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

bool_t equal_ltepeg_record_81_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_81_t T){
        return equal_ltepeg_record_81((ltepeg_record_81_t)x, (ltepeg_record_81_t)y);
}

char * json_ltepeg_record_81_ptr(pointer_t x, actual_ltepeg_record_81_t T){
        return json_ltepeg_record_81((ltepeg_record_81_t)x);
}

actual_ltepeg_record_81_t actual_ltepeg_record_81(){
        actual_ltepeg_record_81_t new = (actual_ltepeg_record_81_t)safe_malloc(sizeof(struct actual_ltepeg_record_81_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_record_81_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_record_81_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_record_81_ptr);
 

 
        return new;
 };

ltepeg_record_81_t update_ltepeg_record_81_project_1(ltepeg_record_81_t x, ltepeg_array_63_t v){
        ltepeg_record_81_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepeg_array_63(x->project_1);};}
        else {y = copy_ltepeg_record_81(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepeg_array_63_t)v;
        return y;}

ltepeg_record_81_t update_ltepeg_record_81_project_2(ltepeg_record_81_t x, uint32_t v){
        ltepeg_record_81_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_81(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

ltepeg_record_81_t update_ltepeg_record_81_project_3(ltepeg_record_81_t x, uint8_t v){
        ltepeg_record_81_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_81(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}

ltepeg_record_81_t update_ltepeg_record_81_project_4(ltepeg_record_81_t x, uint64_t v){
        ltepeg_record_81_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_81(x); x->count--;};
        y->project_4 = (uint64_t)v;
        return y;}



void release_ltepeg_funtype_82(ltepeg_funtype_82_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_82_t copy_ltepeg_funtype_82(ltepeg_funtype_82_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_82(ltepeg_funtype_82_t x, ltepeg_funtype_82_t y){
        return false;}

char* json_ltepeg_funtype_82(ltepeg_funtype_82_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_82\""); return result;}


ltepeg_array_83_t new_ltepeg_array_83(uint32_t size){
        ltepeg_array_83_t tmp = (ltepeg_array_83_t) safe_malloc(sizeof(struct ltepeg_array_83_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_ltepeg_array_83(ltepeg_array_83_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_ltepeg_array_83_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_array_83((ltepeg_array_83_t)x);
}

ltepeg_array_83_t copy_ltepeg_array_83(ltepeg_array_83_t x){
        ltepeg_array_83_t tmp = new_ltepeg_array_83(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_ltepeg_array_83(ltepeg_array_83_t x, ltepeg_array_83_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_ltepeg_array_83(ltepeg_array_83_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint8(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltepeg_array_83_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltepeg_array_83((ltepeg_array_83_t)x, (ltepeg_array_83_t)y);
}

char * json_ltepeg_array_83_ptr(pointer_t x, type_actual_t T){
        return json_ltepeg_array_83((ltepeg_array_83_t)x);
}

actual_ltepeg_array_83_t actual_ltepeg_array_83(){
        actual_ltepeg_array_83_t new = (actual_ltepeg_array_83_t)safe_malloc(sizeof(struct actual_ltepeg_array_83_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_array_83_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_array_83_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_array_83_ptr);
 

 
        return new;
 };

ltepeg_array_83_t update_ltepeg_array_83(ltepeg_array_83_t x, uint32_t i, uint8_t v){
        ltepeg_array_83_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_ltepeg_array_83(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

ltepeg_array_83_t upgrade_ltepeg_array_83(ltepeg_array_83_t x, uint32_t i, uint8_t v){
        ltepeg_array_83_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltepeg_array_83_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltepeg_array_83(x);}
           else {y = copy_ltepeg_array_83(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




bool_t f_ltepeg_closure_84(struct ltepeg_closure_84_s * closure, ltepeg_record_81_t bvar){
        ltepeg_array_63_t bvar_1;
        bvar_1 = (ltepeg_array_63_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        uint64_t bvar_4;
        bvar_4 = (uint64_t)bvar->project_4;
        release_ltepeg_record_81(bvar);
        bool_t result = h_ltepeg_closure_84(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_ltepeg_array_63(bvar_1);
        return result;}

bool_t m_ltepeg_closure_84(struct ltepeg_closure_84_s * closure, ltepeg_array_63_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4){
        return h_ltepeg_closure_84(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_ltepeg_closure_84(ltepeg_array_63_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, uint64_t ivar_10, ltepeg_array_83_t ivar_3, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2){
        bool_t result;
        ltepeg__prepeg_adt_t ivar_11;
        ivar_11 = (ltepeg__prepeg_adt_t)ivar_2->elems[ivar_9];
        ivar_11->count++;
        bool_t ivar_45;
        ivar_11->count++;
        ivar_45 = (bool_t)r_ltepeg__anyp((ltepeg__prepeg_adt_t)ivar_11);
        if (ivar_45){ 
             release_ltepeg_array_63(ivar_6);
             ltepeg_funtype_29_t ivar_16;
             ivar_16 = (ltepeg_funtype_29_t)ltepeg__prepeg_adt_p((ltepeg__prepeg_adt_t)ivar_11);
             bool_t ivar_22;
             bool_t ivar_24;
             ivar_24 = (ivar_8 == ivar_1);
             if (ivar_24){  
           release_ltepeg_funtype_29(ivar_16);
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
             ivar_72 = (bool_t)r_ltepeg__terminalp((ltepeg__prepeg_adt_t)ivar_11);
             if (ivar_72){  
           release_ltepeg_array_63(ivar_6);
           uint8_t ivar_49;
           ivar_49 = (uint8_t)ltepeg__prepeg_adt_a((ltepeg__prepeg_adt_t)ivar_11);
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
             
           bool_t ivar_259;
           ivar_11->count++;
           ivar_259 = (bool_t)r_ltepeg__ltep((ltepeg__prepeg_adt_t)ivar_11);
           if (ivar_259){   
           uint8_t ivar_76;
           ivar_11->count++;
           ivar_76 = (uint8_t)ltepeg__prepeg_adt_fst((ltepeg__prepeg_adt_t)ivar_11);
           uint8_t ivar_77;
           ivar_11->count++;
           ivar_77 = (uint8_t)ltepeg__prepeg_adt_lthen((ltepeg__prepeg_adt_t)ivar_11);
           uint8_t ivar_78;
           ivar_78 = (uint8_t)ltepeg__prepeg_adt_lelse((ltepeg__prepeg_adt_t)ivar_11);
           bool_t ivar_88;
           bool_t ivar_90;
           ltepeg__ent_adt_t ivar_103;
           ltepeg_array_62_t ivar_95;
           ivar_95 = (ltepeg_array_62_t)ivar_6->elems[ivar_8];
           ivar_95->count++;
           ivar_103 = (ltepeg__ent_adt_t)ivar_95->elems[ivar_76];
           ivar_103->count++;
           release_ltepeg_array_62(ivar_95);
           ivar_90 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_103);
           if (ivar_90){    
            bool_t ivar_104;
            ltepeg__ent_adt_t ivar_117;
            ltepeg_array_62_t ivar_109;
            ivar_109 = (ltepeg_array_62_t)ivar_6->elems[ivar_8];
            ivar_109->count++;
            ivar_117 = (ltepeg__ent_adt_t)ivar_109->elems[ivar_78];
            ivar_117->count++;
            release_ltepeg_array_62(ivar_109);
            ivar_104 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_117);
            if (ivar_104){     
             mpz_ptr_t ivar_119;
             uint8_t ivar_120;
             ivar_120 = (uint8_t)1;
             mpq_ptr_t ivar_121;
             uint64_t ivar_154;
             ltepeg__ent_adt_t ivar_135;
             ltepeg_array_62_t ivar_127;
             ivar_127 = (ltepeg_array_62_t)ivar_6->elems[ivar_8];
             ivar_127->count++;
             ivar_135 = (ltepeg__ent_adt_t)ivar_127->elems[ivar_76];
             ivar_135->count++;
             release_ltepeg_array_62(ivar_127);
             ivar_154 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_135);
             mpq_ptr_t ivar_149;
             //copying to mpq from uint64;
             mpq_mk_set_ui(ivar_149, ivar_154);
             uint64_t ivar_153;
             ltepeg__ent_adt_t ivar_147;
             ltepeg_array_62_t ivar_139;
             ivar_139 = (ltepeg_array_62_t)ivar_6->elems[ivar_8];
             ivar_139->count++;
             ivar_147 = (ltepeg__ent_adt_t)ivar_139->elems[ivar_78];
             ivar_147->count++;
             release_ltepeg_array_62(ivar_139);
             ivar_153 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_147);
             mpq_ptr_t ivar_150;
             //copying to mpq from uint64;
             mpq_mk_set_ui(ivar_150, ivar_153);
             ivar_121 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_149, (mpq_ptr_t)ivar_150);
             mpz_mk_set_q(ivar_119, ivar_121);
             mpz_add_ui(ivar_119, ivar_119, ivar_120);
             int64_t tmp89313 = mpz_cmp_ui(ivar_119, ivar_10);
             ivar_88 = (tmp89313 == 0);
} else {
            
             ivar_88 = (bool_t) false;
};
} else {
           
            ivar_88 = (bool_t) false;
};
           if (ivar_88){    
            release_ltepeg_array_63(ivar_6);
            result = (bool_t) true;
} else {
           
            bool_t ivar_159;
            ltepeg__ent_adt_t ivar_172;
            ltepeg_array_62_t ivar_164;
            ivar_164 = (ltepeg_array_62_t)ivar_6->elems[ivar_8];
            ivar_164->count++;
            ivar_172 = (ltepeg__ent_adt_t)ivar_164->elems[ivar_76];
            ivar_172->count++;
            release_ltepeg_array_62(ivar_164);
            ivar_159 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_172);
            if (ivar_159){     
             bool_t ivar_173;
             ltepeg__ent_adt_t ivar_201;
             ltepeg_array_62_t ivar_178;
             uint32_t ivar_198;
             uint32_t ivar_181;
             ltepeg__ent_adt_t ivar_193;
             ltepeg_array_62_t ivar_185;
             ivar_185 = (ltepeg_array_62_t)ivar_6->elems[ivar_8];
             ivar_185->count++;
             ivar_193 = (ltepeg__ent_adt_t)ivar_185->elems[ivar_76];
             ivar_193->count++;
             release_ltepeg_array_62(ivar_185);
             ivar_181 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_193);
             ivar_198 = (uint32_t)(ivar_8 + ivar_181);
             ivar_178 = (ltepeg_array_62_t)ivar_6->elems[ivar_198];
             ivar_178->count++;
             ivar_201 = (ltepeg__ent_adt_t)ivar_178->elems[ivar_77];
             ivar_201->count++;
             release_ltepeg_array_62(ivar_178);
             ivar_173 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_201);
             if (ivar_173){      
              mpz_ptr_t ivar_203;
              uint8_t ivar_204;
              ivar_204 = (uint8_t)1;
              mpq_ptr_t ivar_205;
              uint64_t ivar_253;
              ltepeg__ent_adt_t ivar_219;
              ltepeg_array_62_t ivar_211;
              ivar_211 = (ltepeg_array_62_t)ivar_6->elems[ivar_8];
              ivar_211->count++;
              ivar_219 = (ltepeg__ent_adt_t)ivar_211->elems[ivar_76];
              ivar_219->count++;
              release_ltepeg_array_62(ivar_211);
              ivar_253 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_219);
              mpq_ptr_t ivar_248;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_248, ivar_253);
              uint64_t ivar_252;
              ltepeg__ent_adt_t ivar_246;
              ltepeg_array_62_t ivar_223;
              uint32_t ivar_243;
              uint32_t ivar_226;
              ltepeg__ent_adt_t ivar_238;
              ltepeg_array_62_t ivar_230;
              ivar_230 = (ltepeg_array_62_t)ivar_6->elems[ivar_8];
              ivar_230->count++;
              ivar_238 = (ltepeg__ent_adt_t)ivar_230->elems[ivar_76];
              ivar_238->count++;
              release_ltepeg_array_62(ivar_230);
              ivar_226 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_238);
              ivar_243 = (uint32_t)(ivar_8 + ivar_226);
              ivar_223 = (ltepeg_array_62_t)ivar_6->elems[ivar_243];
              ivar_223->count++;
              release_ltepeg_array_63(ivar_6);
              ivar_246 = (ltepeg__ent_adt_t)ivar_223->elems[ivar_77];
              ivar_246->count++;
              release_ltepeg_array_62(ivar_223);
              ivar_252 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_246);
              mpq_ptr_t ivar_249;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_249, ivar_252);
              ivar_205 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_248, (mpq_ptr_t)ivar_249);
              mpz_mk_set_q(ivar_203, ivar_205);
              mpz_add_ui(ivar_203, ivar_203, ivar_204);
              int64_t tmp89359 = mpz_cmp_ui(ivar_203, ivar_10);
              result = (tmp89359 == 0);
} else {
             
              release_ltepeg_array_63(ivar_6);
              result = (bool_t) false;
};
} else {
            
             release_ltepeg_array_63(ivar_6);
             result = (bool_t) false;
};
};
} else {
           
           release_ltepeg_array_63(ivar_6);
           bool_t ivar_266;
           ivar_266 = (bool_t)r_ltepeg__failurep((ltepeg__prepeg_adt_t)ivar_11);
           if (ivar_266){    
            uint8_t ivar_264;
            ivar_264 = (uint8_t)0;
            result = (ivar_10 == ivar_264);
} else {
           
            result = (bool_t) false;
};
};
};
};

        return result;
}

ltepeg_closure_84_t new_ltepeg_closure_84(void){
        static struct ltepeg_funtype_82_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_82_t, ltepeg_record_81_t))&f_ltepeg_closure_84, .mptr = (bool_t (*)(ltepeg_funtype_82_t, ltepeg_array_63_t, uint32_t, uint8_t, uint64_t))&m_ltepeg_closure_84, .rptr =  (void (*)(ltepeg_funtype_82_t))&release_ltepeg_closure_84, .cptr = (ltepeg_funtype_82_t (*)(ltepeg_funtype_82_t))&copy_ltepeg_closure_84};
        ltepeg_closure_84_t tmp = (ltepeg_closure_84_t) safe_malloc(sizeof(struct ltepeg_closure_84_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_84(ltepeg_funtype_82_t closure){
        ltepeg_closure_84_t x = (ltepeg_closure_84_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_array_83(x->fvar_1);
         release_ltepeg__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_84_t copy_ltepeg_closure_84(ltepeg_closure_84_t x){
        ltepeg_closure_84_t y = new_ltepeg_closure_84();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltepeg_funtype_82_htbl_t new_htbl = (ltepeg_funtype_82_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_82_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_82_hashentry_t * new_data = (ltepeg_funtype_82_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_82_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_82_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepeg_record_85_t new_ltepeg_record_85(void){
        ltepeg_record_85_t tmp = (ltepeg_record_85_t) safe_malloc(sizeof(struct ltepeg_record_85_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg_record_85(ltepeg_record_85_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg_array_63(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg_record_85_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_record_85((ltepeg_record_85_t)x);
}

ltepeg_record_85_t copy_ltepeg_record_85(ltepeg_record_85_t x){
        ltepeg_record_85_t y = new_ltepeg_record_85();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->count = 1;
        return y;}

bool_t equal_ltepeg_record_85(ltepeg_record_85_t x, ltepeg_record_85_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepeg_array_63(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        return tmp;}

char * json_ltepeg_record_85(ltepeg_record_85_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepeg_array_63(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg_record_85_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_85_t T){
        return equal_ltepeg_record_85((ltepeg_record_85_t)x, (ltepeg_record_85_t)y);
}

char * json_ltepeg_record_85_ptr(pointer_t x, actual_ltepeg_record_85_t T){
        return json_ltepeg_record_85((ltepeg_record_85_t)x);
}

actual_ltepeg_record_85_t actual_ltepeg_record_85(){
        actual_ltepeg_record_85_t new = (actual_ltepeg_record_85_t)safe_malloc(sizeof(struct actual_ltepeg_record_85_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_record_85_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_record_85_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_record_85_ptr);
 

 
        return new;
 };

ltepeg_record_85_t update_ltepeg_record_85_project_1(ltepeg_record_85_t x, ltepeg_array_63_t v){
        ltepeg_record_85_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepeg_array_63(x->project_1);};}
        else {y = copy_ltepeg_record_85(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepeg_array_63_t)v;
        return y;}

ltepeg_record_85_t update_ltepeg_record_85_project_2(ltepeg_record_85_t x, uint32_t v){
        ltepeg_record_85_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_85(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

ltepeg_record_85_t update_ltepeg_record_85_project_3(ltepeg_record_85_t x, uint8_t v){
        ltepeg_record_85_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_85(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}



void release_ltepeg_funtype_86(ltepeg_funtype_86_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_86_t copy_ltepeg_funtype_86(ltepeg_funtype_86_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_86(ltepeg_funtype_86_t x, ltepeg_funtype_86_t y){
        return false;}

char* json_ltepeg_funtype_86(ltepeg_funtype_86_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_86\""); return result;}


bool_t f_ltepeg_closure_87(struct ltepeg_closure_87_s * closure, ltepeg_record_85_t bvar){
        ltepeg_array_63_t bvar_1;
        bvar_1 = (ltepeg_array_63_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        release_ltepeg_record_85(bvar);
        bool_t result = h_ltepeg_closure_87(bvar_1, bvar_2, bvar_3, closure->fvar_1, closure->fvar_2); 
        release_ltepeg_array_63(bvar_1);
        return result;}

bool_t m_ltepeg_closure_87(struct ltepeg_closure_87_s * closure, ltepeg_array_63_t bvar_1, uint32_t bvar_2, uint8_t bvar_3){
        return h_ltepeg_closure_87(bvar_1, bvar_2, bvar_3, closure->fvar_1, closure->fvar_2);}

extern bool_t h_ltepeg_closure_87(ltepeg_array_63_t ivar_5, uint32_t ivar_7, uint8_t ivar_8, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2){
        bool_t result;
        ltepeg__prepeg_adt_t ivar_9;
        ivar_9 = (ltepeg__prepeg_adt_t)ivar_2->elems[ivar_8];
        ivar_9->count++;
        bool_t ivar_113;
        ivar_9->count++;
        ivar_113 = (bool_t)r_ltepeg__ltep((ltepeg__prepeg_adt_t)ivar_9);
        if (ivar_113){ 
             uint8_t ivar_14;
             ivar_9->count++;
             ivar_14 = (uint8_t)ltepeg__prepeg_adt_fst((ltepeg__prepeg_adt_t)ivar_9);
             uint8_t ivar_15;
             ivar_9->count++;
             ivar_15 = (uint8_t)ltepeg__prepeg_adt_lthen((ltepeg__prepeg_adt_t)ivar_9);
             bool_t ivar_26;
             ltepeg__ent_adt_t ivar_39;
             ltepeg_array_62_t ivar_31;
             ivar_31 = (ltepeg_array_62_t)ivar_5->elems[ivar_7];
             ivar_31->count++;
             ivar_39 = (ltepeg__ent_adt_t)ivar_31->elems[ivar_14];
             ivar_39->count++;
             release_ltepeg_array_62(ivar_31);
             ivar_26 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_39);
             if (ivar_26){  
           release_ltepeg_array_63(ivar_5);
           result = (bool_t) true;
} else {
             
           bool_t ivar_40;
           bool_t ivar_42;
           ltepeg__ent_adt_t ivar_55;
           ltepeg_array_62_t ivar_47;
           ivar_47 = (ltepeg_array_62_t)ivar_5->elems[ivar_7];
           ivar_47->count++;
           ivar_55 = (ltepeg__ent_adt_t)ivar_47->elems[ivar_14];
           ivar_55->count++;
           release_ltepeg_array_62(ivar_47);
           ivar_42 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_55);
           if (ivar_42){   
           ltepeg__ent_adt_t ivar_82;
           ltepeg_array_62_t ivar_59;
           uint32_t ivar_79;
           uint32_t ivar_62;
           ltepeg__ent_adt_t ivar_74;
           ltepeg_array_62_t ivar_66;
           ivar_66 = (ltepeg_array_62_t)ivar_5->elems[ivar_7];
           ivar_66->count++;
           ivar_74 = (ltepeg__ent_adt_t)ivar_66->elems[ivar_14];
           ivar_74->count++;
           release_ltepeg_array_62(ivar_66);
           ivar_62 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_74);
           ivar_79 = (uint32_t)(ivar_7 + ivar_62);
           ivar_59 = (ltepeg_array_62_t)ivar_5->elems[ivar_79];
           ivar_59->count++;
           ivar_82 = (ltepeg__ent_adt_t)ivar_59->elems[ivar_15];
           ivar_82->count++;
           release_ltepeg_array_62(ivar_59);
           ivar_40 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_82);
} else {
           
           ivar_40 = (bool_t) false;
};
           if (ivar_40){   
           release_ltepeg_array_63(ivar_5);
           result = (bool_t) true;
} else {
           
           bool_t ivar_84;
           ltepeg__ent_adt_t ivar_97;
           ltepeg_array_62_t ivar_89;
           ivar_89 = (ltepeg_array_62_t)ivar_5->elems[ivar_7];
           ivar_89->count++;
           ivar_97 = (ltepeg__ent_adt_t)ivar_89->elems[ivar_14];
           ivar_97->count++;
           release_ltepeg_array_62(ivar_89);
           ivar_84 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_97);
           if (ivar_84){    
            ltepeg__ent_adt_t ivar_109;
            ltepeg_array_62_t ivar_101;
            ivar_101 = (ltepeg_array_62_t)ivar_5->elems[ivar_7];
            ivar_101->count++;
            release_ltepeg_array_63(ivar_5);
            ivar_109 = (ltepeg__ent_adt_t)ivar_101->elems[ivar_15];
            ivar_109->count++;
            release_ltepeg_array_62(ivar_101);
            result = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_109);
} else {
           
            release_ltepeg_array_63(ivar_5);
            result = (bool_t) false;
};
};
};
} else {
        
             release_ltepeg_array_63(ivar_5);
             release_ltepeg__prepeg_adt(ivar_9);
             result = (bool_t) false;
};

        return result;
}

ltepeg_closure_87_t new_ltepeg_closure_87(void){
        static struct ltepeg_funtype_86_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_86_t, ltepeg_record_85_t))&f_ltepeg_closure_87, .mptr = (bool_t (*)(ltepeg_funtype_86_t, ltepeg_array_63_t, uint32_t, uint8_t))&m_ltepeg_closure_87, .rptr =  (void (*)(ltepeg_funtype_86_t))&release_ltepeg_closure_87, .cptr = (ltepeg_funtype_86_t (*)(ltepeg_funtype_86_t))&copy_ltepeg_closure_87};
        ltepeg_closure_87_t tmp = (ltepeg_closure_87_t) safe_malloc(sizeof(struct ltepeg_closure_87_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_87(ltepeg_funtype_86_t closure){
        ltepeg_closure_87_t x = (ltepeg_closure_87_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg__lang_spec(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_87_t copy_ltepeg_closure_87(ltepeg_closure_87_t x){
        ltepeg_closure_87_t y = new_ltepeg_closure_87();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ltepeg_funtype_86_htbl_t new_htbl = (ltepeg_funtype_86_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_86_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_86_hashentry_t * new_data = (ltepeg_funtype_86_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_86_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_86_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepeg_record_88_t new_ltepeg_record_88(void){
        ltepeg_record_88_t tmp = (ltepeg_record_88_t) safe_malloc(sizeof(struct ltepeg_record_88_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg_record_88(ltepeg_record_88_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg_array_63(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg_record_88_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_record_88((ltepeg_record_88_t)x);
}

ltepeg_record_88_t copy_ltepeg_record_88(ltepeg_record_88_t x){
        ltepeg_record_88_t y = new_ltepeg_record_88();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->project_4 = (uint64_t)x->project_4;
        mpz_set(y->project_5, x->project_5);
        y->count = 1;
        return y;}

bool_t equal_ltepeg_record_88(ltepeg_record_88_t x, ltepeg_record_88_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepeg_array_63(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && x->project_4 == y->project_4;tmp = tmp && (mpz_cmp(x->project_5, y->project_5) == 0);
        return tmp;}

char * json_ltepeg_record_88(ltepeg_record_88_t x){
        char * tmp[5]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepeg_array_63(x->project_1));
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

bool_t equal_ltepeg_record_88_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_88_t T){
        return equal_ltepeg_record_88((ltepeg_record_88_t)x, (ltepeg_record_88_t)y);
}

char * json_ltepeg_record_88_ptr(pointer_t x, actual_ltepeg_record_88_t T){
        return json_ltepeg_record_88((ltepeg_record_88_t)x);
}

actual_ltepeg_record_88_t actual_ltepeg_record_88(){
        actual_ltepeg_record_88_t new = (actual_ltepeg_record_88_t)safe_malloc(sizeof(struct actual_ltepeg_record_88_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_record_88_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_record_88_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_record_88_ptr);
 

 
        return new;
 };

ltepeg_record_88_t update_ltepeg_record_88_project_1(ltepeg_record_88_t x, ltepeg_array_63_t v){
        ltepeg_record_88_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepeg_array_63(x->project_1);};}
        else {y = copy_ltepeg_record_88(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepeg_array_63_t)v;
        return y;}

ltepeg_record_88_t update_ltepeg_record_88_project_2(ltepeg_record_88_t x, uint32_t v){
        ltepeg_record_88_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_88(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

ltepeg_record_88_t update_ltepeg_record_88_project_3(ltepeg_record_88_t x, uint8_t v){
        ltepeg_record_88_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_88(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}

ltepeg_record_88_t update_ltepeg_record_88_project_4(ltepeg_record_88_t x, uint64_t v){
        ltepeg_record_88_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_88(x); x->count--;};
        y->project_4 = (uint64_t)v;
        return y;}

ltepeg_record_88_t update_ltepeg_record_88_project_5(ltepeg_record_88_t x, mpz_ptr_t v){
        ltepeg_record_88_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_88(x); x->count--;};
        mpz_set(y->project_5, v);
        return y;}



void release_ltepeg_funtype_89(ltepeg_funtype_89_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_89_t copy_ltepeg_funtype_89(ltepeg_funtype_89_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_89(ltepeg_funtype_89_t x, ltepeg_funtype_89_t y){
        return false;}

char* json_ltepeg_funtype_89(ltepeg_funtype_89_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_89\""); return result;}


bool_t f_ltepeg_closure_90(struct ltepeg_closure_90_s * closure, ltepeg_record_88_t bvar){
        ltepeg_array_63_t bvar_1;
        bvar_1 = (ltepeg_array_63_t)bvar->project_1;
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
        release_ltepeg_record_88(bvar);
        bool_t result = h_ltepeg_closure_90(bvar_1, bvar_2, bvar_3, bvar_4, bvar_5, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_ltepeg_array_63(bvar_1);
        release_mpz(bvar_5);
        return result;}

bool_t m_ltepeg_closure_90(struct ltepeg_closure_90_s * closure, ltepeg_array_63_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4, mpz_ptr_t bvar_5){
        return h_ltepeg_closure_90(bvar_1, bvar_2, bvar_3, bvar_4, bvar_5, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_ltepeg_closure_90(ltepeg_array_63_t ivar_9, uint32_t ivar_11, uint8_t ivar_12, uint64_t ivar_13, mpz_ptr_t ivar_14, ltepeg_array_83_t ivar_3, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2){
        bool_t result;
        ltepeg__prepeg_adt_t ivar_18;
        ivar_18 = (ltepeg__prepeg_adt_t)ivar_2->elems[ivar_12];
        ivar_18->count++;
        bool_t ivar_32;
        ivar_18->count++;
        ivar_32 = (bool_t)r_ltepeg__epsilonp((ltepeg__prepeg_adt_t)ivar_18);
        if (ivar_32){ 
             release_ltepeg_array_63(ivar_9);
             release_ltepeg__prepeg_adt(ivar_18);
             bool_t ivar_23;
             uint8_t ivar_26;
             ivar_26 = (uint8_t)0;
             int64_t tmp89556 = mpz_cmp_ui(ivar_14, ivar_26);
             ivar_23 = (tmp89556 == 0);
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
             ivar_63 = (bool_t)r_ltepeg__anyp((ltepeg__prepeg_adt_t)ivar_18);
             if (ivar_63){  
           release_ltepeg_array_63(ivar_9);
           ltepeg_funtype_29_t ivar_36;
           ivar_36 = (ltepeg_funtype_29_t)ltepeg__prepeg_adt_p((ltepeg__prepeg_adt_t)ivar_18);
           bool_t ivar_42;
           uint8_t ivar_45;
           ivar_45 = (uint8_t)1;
           int64_t tmp89561 = mpz_cmp_ui(ivar_14, ivar_45);
           ivar_42 = (tmp89561 == 0);
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
           
           release_ltepeg_funtype_29(ivar_36);
           result = (bool_t) false;
};
} else {
             
           bool_t ivar_90;
           ivar_18->count++;
           ivar_90 = (bool_t)r_ltepeg__terminalp((ltepeg__prepeg_adt_t)ivar_18);
           if (ivar_90){   
           release_ltepeg_array_63(ivar_9);
           uint8_t ivar_67;
           ivar_67 = (uint8_t)ltepeg__prepeg_adt_a((ltepeg__prepeg_adt_t)ivar_18);
           bool_t ivar_71;
           uint8_t ivar_74;
           ivar_74 = (uint8_t)1;
           int64_t tmp89564 = mpz_cmp_ui(ivar_14, ivar_74);
           ivar_71 = (tmp89564 == 0);
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
           
           bool_t ivar_277;
           ivar_18->count++;
           ivar_277 = (bool_t)r_ltepeg__ltep((ltepeg__prepeg_adt_t)ivar_18);
           if (ivar_277){    
            uint8_t ivar_94;
            ivar_18->count++;
            ivar_94 = (uint8_t)ltepeg__prepeg_adt_fst((ltepeg__prepeg_adt_t)ivar_18);
            uint8_t ivar_95;
            ivar_18->count++;
            ivar_95 = (uint8_t)ltepeg__prepeg_adt_lthen((ltepeg__prepeg_adt_t)ivar_18);
            uint8_t ivar_96;
            ivar_96 = (uint8_t)ltepeg__prepeg_adt_lelse((ltepeg__prepeg_adt_t)ivar_18);
            bool_t ivar_106;
            bool_t ivar_108;
            ltepeg__ent_adt_t ivar_121;
            ltepeg_array_62_t ivar_113;
            ivar_113 = (ltepeg_array_62_t)ivar_9->elems[ivar_11];
            ivar_113->count++;
            ivar_121 = (ltepeg__ent_adt_t)ivar_113->elems[ivar_94];
            ivar_121->count++;
            release_ltepeg_array_62(ivar_113);
            ivar_108 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_121);
            if (ivar_108){     
             bool_t ivar_122;
             ltepeg__ent_adt_t ivar_150;
             ltepeg_array_62_t ivar_127;
             uint32_t ivar_147;
             uint32_t ivar_130;
             ltepeg__ent_adt_t ivar_142;
             ltepeg_array_62_t ivar_134;
             ivar_134 = (ltepeg_array_62_t)ivar_9->elems[ivar_11];
             ivar_134->count++;
             ivar_142 = (ltepeg__ent_adt_t)ivar_134->elems[ivar_94];
             ivar_142->count++;
             release_ltepeg_array_62(ivar_134);
             ivar_130 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_142);
             ivar_147 = (uint32_t)(ivar_11 + ivar_130);
             ivar_127 = (ltepeg_array_62_t)ivar_9->elems[ivar_147];
             ivar_127->count++;
             ivar_150 = (ltepeg__ent_adt_t)ivar_127->elems[ivar_95];
             ivar_150->count++;
             release_ltepeg_array_62(ivar_127);
             ivar_122 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_150);
             if (ivar_122){      
              mpz_ptr_t ivar_152;
              uint8_t ivar_153;
              ivar_153 = (uint8_t)1;
              mpq_ptr_t ivar_154;
              uint64_t ivar_202;
              ltepeg__ent_adt_t ivar_168;
              ltepeg_array_62_t ivar_160;
              ivar_160 = (ltepeg_array_62_t)ivar_9->elems[ivar_11];
              ivar_160->count++;
              ivar_168 = (ltepeg__ent_adt_t)ivar_160->elems[ivar_94];
              ivar_168->count++;
              release_ltepeg_array_62(ivar_160);
              ivar_202 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_168);
              mpq_ptr_t ivar_197;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_197, ivar_202);
              uint64_t ivar_201;
              ltepeg__ent_adt_t ivar_195;
              ltepeg_array_62_t ivar_172;
              uint32_t ivar_192;
              uint32_t ivar_175;
              ltepeg__ent_adt_t ivar_187;
              ltepeg_array_62_t ivar_179;
              ivar_179 = (ltepeg_array_62_t)ivar_9->elems[ivar_11];
              ivar_179->count++;
              ivar_187 = (ltepeg__ent_adt_t)ivar_179->elems[ivar_94];
              ivar_187->count++;
              release_ltepeg_array_62(ivar_179);
              ivar_175 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_187);
              ivar_192 = (uint32_t)(ivar_11 + ivar_175);
              ivar_172 = (ltepeg_array_62_t)ivar_9->elems[ivar_192];
              ivar_172->count++;
              ivar_195 = (ltepeg__ent_adt_t)ivar_172->elems[ivar_95];
              ivar_195->count++;
              release_ltepeg_array_62(ivar_172);
              ivar_201 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_195);
              mpq_ptr_t ivar_198;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_198, ivar_201);
              ivar_154 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_197, (mpq_ptr_t)ivar_198);
              mpz_mk_set_q(ivar_152, ivar_154);
              mpz_add_ui(ivar_152, ivar_152, ivar_153);
              int64_t tmp89609 = mpz_cmp_ui(ivar_152, ivar_13);
              ivar_106 = (tmp89609 == 0);
} else {
             
              ivar_106 = (bool_t) false;
};
} else {
            
             ivar_106 = (bool_t) false;
};
            if (ivar_106){     
             release_ltepeg_array_63(ivar_9);
             result = (bool_t) true;
} else {
            
             bool_t ivar_207;
             ltepeg__ent_adt_t ivar_220;
             ltepeg_array_62_t ivar_212;
             ivar_212 = (ltepeg_array_62_t)ivar_9->elems[ivar_11];
             ivar_212->count++;
             ivar_220 = (ltepeg__ent_adt_t)ivar_212->elems[ivar_94];
             ivar_220->count++;
             release_ltepeg_array_62(ivar_212);
             ivar_207 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_220);
             if (ivar_207){      
              bool_t ivar_221;
              ltepeg__ent_adt_t ivar_234;
              ltepeg_array_62_t ivar_226;
              ivar_226 = (ltepeg_array_62_t)ivar_9->elems[ivar_11];
              ivar_226->count++;
              ivar_234 = (ltepeg__ent_adt_t)ivar_226->elems[ivar_96];
              ivar_234->count++;
              release_ltepeg_array_62(ivar_226);
              ivar_221 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_234);
              if (ivar_221){       
               mpz_ptr_t ivar_236;
               uint8_t ivar_237;
               ivar_237 = (uint8_t)1;
               mpq_ptr_t ivar_238;
               uint64_t ivar_271;
               ltepeg__ent_adt_t ivar_252;
               ltepeg_array_62_t ivar_244;
               ivar_244 = (ltepeg_array_62_t)ivar_9->elems[ivar_11];
               ivar_244->count++;
               ivar_252 = (ltepeg__ent_adt_t)ivar_244->elems[ivar_94];
               ivar_252->count++;
               release_ltepeg_array_62(ivar_244);
               ivar_271 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_252);
               mpq_ptr_t ivar_266;
               //copying to mpq from uint64;
               mpq_mk_set_ui(ivar_266, ivar_271);
               uint64_t ivar_270;
               ltepeg__ent_adt_t ivar_264;
               ltepeg_array_62_t ivar_256;
               ivar_256 = (ltepeg_array_62_t)ivar_9->elems[ivar_11];
               ivar_256->count++;
               release_ltepeg_array_63(ivar_9);
               ivar_264 = (ltepeg__ent_adt_t)ivar_256->elems[ivar_96];
               ivar_264->count++;
               release_ltepeg_array_62(ivar_256);
               ivar_270 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_264);
               mpq_ptr_t ivar_267;
               //copying to mpq from uint64;
               mpq_mk_set_ui(ivar_267, ivar_270);
               ivar_238 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_266, (mpq_ptr_t)ivar_267);
               mpz_mk_set_q(ivar_236, ivar_238);
               mpz_add_ui(ivar_236, ivar_236, ivar_237);
               int64_t tmp89641 = mpz_cmp_ui(ivar_236, ivar_13);
               result = (tmp89641 == 0);
} else {
              
               release_ltepeg_array_63(ivar_9);
               result = (bool_t) false;
};
} else {
             
              release_ltepeg_array_63(ivar_9);
              result = (bool_t) false;
};
};
} else {
           
            release_ltepeg_array_63(ivar_9);
            release_ltepeg__prepeg_adt(ivar_18);
            result = (bool_t) false;
};
};
};
};

        return result;
}

ltepeg_closure_90_t new_ltepeg_closure_90(void){
        static struct ltepeg_funtype_89_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_89_t, ltepeg_record_88_t))&f_ltepeg_closure_90, .mptr = (bool_t (*)(ltepeg_funtype_89_t, ltepeg_array_63_t, uint32_t, uint8_t, uint64_t, mpz_ptr_t))&m_ltepeg_closure_90, .rptr =  (void (*)(ltepeg_funtype_89_t))&release_ltepeg_closure_90, .cptr = (ltepeg_funtype_89_t (*)(ltepeg_funtype_89_t))&copy_ltepeg_closure_90};
        ltepeg_closure_90_t tmp = (ltepeg_closure_90_t) safe_malloc(sizeof(struct ltepeg_closure_90_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_90(ltepeg_funtype_89_t closure){
        ltepeg_closure_90_t x = (ltepeg_closure_90_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_array_83(x->fvar_1);
         release_ltepeg__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_90_t copy_ltepeg_closure_90(ltepeg_closure_90_t x){
        ltepeg_closure_90_t y = new_ltepeg_closure_90();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltepeg_funtype_89_htbl_t new_htbl = (ltepeg_funtype_89_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_89_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_89_hashentry_t * new_data = (ltepeg_funtype_89_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_89_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_89_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepeg_record_91_t new_ltepeg_record_91(void){
        ltepeg_record_91_t tmp = (ltepeg_record_91_t) safe_malloc(sizeof(struct ltepeg_record_91_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg_record_91(ltepeg_record_91_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg_array_63(x->project_1);
         release_ltepeg__ent_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg_record_91_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_record_91((ltepeg_record_91_t)x);
}

ltepeg_record_91_t copy_ltepeg_record_91(ltepeg_record_91_t x){
        ltepeg_record_91_t y = new_ltepeg_record_91();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepeg_record_91(ltepeg_record_91_t x, ltepeg_record_91_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepeg_array_63(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && equal_ltepeg__ent_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltepeg_record_91(ltepeg_record_91_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepeg_array_63(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_ltepeg__ent_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg_record_91_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_91_t T){
        return equal_ltepeg_record_91((ltepeg_record_91_t)x, (ltepeg_record_91_t)y);
}

char * json_ltepeg_record_91_ptr(pointer_t x, actual_ltepeg_record_91_t T){
        return json_ltepeg_record_91((ltepeg_record_91_t)x);
}

actual_ltepeg_record_91_t actual_ltepeg_record_91(){
        actual_ltepeg_record_91_t new = (actual_ltepeg_record_91_t)safe_malloc(sizeof(struct actual_ltepeg_record_91_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_record_91_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_record_91_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_record_91_ptr);
 

 
        return new;
 };

ltepeg_record_91_t update_ltepeg_record_91_project_1(ltepeg_record_91_t x, ltepeg_array_63_t v){
        ltepeg_record_91_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepeg_array_63(x->project_1);};}
        else {y = copy_ltepeg_record_91(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepeg_array_63_t)v;
        return y;}

ltepeg_record_91_t update_ltepeg_record_91_project_2(ltepeg_record_91_t x, uint32_t v){
        ltepeg_record_91_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_91(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

ltepeg_record_91_t update_ltepeg_record_91_project_3(ltepeg_record_91_t x, uint8_t v){
        ltepeg_record_91_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_91(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}

ltepeg_record_91_t update_ltepeg_record_91_project_4(ltepeg_record_91_t x, ltepeg__ent_adt_t v){
        ltepeg_record_91_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ltepeg__ent_adt(x->project_4);};}
        else {y = copy_ltepeg_record_91(x); x->count--; y->project_4->count--;};
        y->project_4 = (ltepeg__ent_adt_t)v;
        return y;}



void release_ltepeg_funtype_92(ltepeg_funtype_92_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_92_t copy_ltepeg_funtype_92(ltepeg_funtype_92_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_92(ltepeg_funtype_92_t x, ltepeg_funtype_92_t y){
        return false;}

char* json_ltepeg_funtype_92(ltepeg_funtype_92_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_92\""); return result;}


bool_t f_ltepeg_closure_93(struct ltepeg_closure_93_s * closure, ltepeg_record_91_t bvar){
        ltepeg_array_63_t bvar_1;
        bvar_1 = (ltepeg_array_63_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        ltepeg__ent_adt_t bvar_4;
        bvar_4 = (ltepeg__ent_adt_t)bvar->project_4;
        bvar->project_4->count++;
        release_ltepeg_record_91(bvar);
        bool_t result = h_ltepeg_closure_93(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_ltepeg_array_63(bvar_1);
        release_ltepeg__ent_adt(bvar_4);
        return result;}

bool_t m_ltepeg_closure_93(struct ltepeg_closure_93_s * closure, ltepeg_array_63_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, ltepeg__ent_adt_t bvar_4){
        return h_ltepeg_closure_93(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_ltepeg_closure_93(ltepeg_array_63_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, ltepeg__ent_adt_t ivar_10, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3){
        bool_t result;
        bool_t ivar_37;
        ivar_10->count++;
        ivar_37 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_10);
        if (ivar_37){ 
             uint64_t ivar_12;
             ivar_12 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_10);
             ltepeg_funtype_82_t ivar_23;
             ivar_2->count++;
             ivar_3->count++;
             ivar_23 = (ltepeg_funtype_82_t)ltepeg__good_failp((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepeg_array_83_t)ivar_3);
             result = (bool_t)ivar_23->ftbl->mptr(ivar_23, ivar_6, ivar_8, ivar_9, ivar_12);
             ivar_23->ftbl->rptr(ivar_23);
} else {
        
             bool_t ivar_53;
             ivar_10->count++;
             ivar_53 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_10);
             if (ivar_53){  
           release_ltepeg__ent_adt(ivar_10);
           ivar_2->count++;
           result = (bool_t)ltepeg__loop_readyp((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepeg_array_63_t)ivar_6, (uint32_t)ivar_8, (uint8_t)ivar_9);
} else {
             
           bool_t ivar_103;
           ivar_10->count++;
           ivar_103 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_10);
           if (ivar_103){   
           uint64_t ivar_57;
           ivar_10->count++;
           ivar_57 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_10);
           uint32_t ivar_58;
           ivar_58 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_10);
           bool_t ivar_65;
           int32_t ivar_68;
           ivar_68 = (int32_t)((uint64_t)ivar_1 - (uint64_t)ivar_8);
           if ((ivar_68 < 0)){    
            ivar_65 = false;
} else {
           
            ivar_65 = (ivar_58 <= (uint32_t)ivar_68);
};
           if (ivar_65){    
            ltepeg_funtype_89_t ivar_84;
            ivar_2->count++;
            ivar_3->count++;
            ivar_84 = (ltepeg_funtype_89_t)ltepeg__good_goodp((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepeg_array_83_t)ivar_3);
            mpz_ptr_t ivar_101;
            //copying to mpz from uint32;
            mpz_mk_set_ui(ivar_101, ivar_58);
            result = (bool_t)ivar_84->ftbl->mptr(ivar_84, ivar_6, ivar_8, ivar_9, ivar_57, ivar_101);
            ivar_84->ftbl->rptr(ivar_84);
} else {
           
            release_ltepeg_array_63(ivar_6);
            result = (bool_t) false;
};
} else {
           
           release_ltepeg_array_63(ivar_6);
           release_ltepeg__ent_adt(ivar_10);
           result = (bool_t) true;
};
};
};

        return result;
}

ltepeg_closure_93_t new_ltepeg_closure_93(void){
        static struct ltepeg_funtype_92_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_92_t, ltepeg_record_91_t))&f_ltepeg_closure_93, .mptr = (bool_t (*)(ltepeg_funtype_92_t, ltepeg_array_63_t, uint32_t, uint8_t, ltepeg__ent_adt_t))&m_ltepeg_closure_93, .rptr =  (void (*)(ltepeg_funtype_92_t))&release_ltepeg_closure_93, .cptr = (ltepeg_funtype_92_t (*)(ltepeg_funtype_92_t))&copy_ltepeg_closure_93};
        ltepeg_closure_93_t tmp = (ltepeg_closure_93_t) safe_malloc(sizeof(struct ltepeg_closure_93_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_93(ltepeg_funtype_92_t closure){
        ltepeg_closure_93_t x = (ltepeg_closure_93_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg__lang_spec(x->fvar_2);
         release_ltepeg_array_83(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_93_t copy_ltepeg_closure_93(ltepeg_closure_93_t x){
        ltepeg_closure_93_t y = new_ltepeg_closure_93();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltepeg_funtype_92_htbl_t new_htbl = (ltepeg_funtype_92_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_92_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_92_hashentry_t * new_data = (ltepeg_funtype_92_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_92_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_92_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_ltepeg_closure_94(struct ltepeg_closure_94_s * closure, ltepeg_record_91_t bvar){
        ltepeg_array_63_t bvar_1;
        bvar_1 = (ltepeg_array_63_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        ltepeg__ent_adt_t bvar_4;
        bvar_4 = (ltepeg__ent_adt_t)bvar->project_4;
        bvar->project_4->count++;
        release_ltepeg_record_91(bvar);
        bool_t result = h_ltepeg_closure_94(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_ltepeg_array_63(bvar_1);
        release_ltepeg__ent_adt(bvar_4);
        return result;}

bool_t m_ltepeg_closure_94(struct ltepeg_closure_94_s * closure, ltepeg_array_63_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, ltepeg__ent_adt_t bvar_4){
        return h_ltepeg_closure_94(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_ltepeg_closure_94(ltepeg_array_63_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, ltepeg__ent_adt_t ivar_10, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3){
        bool_t result;
        bool_t ivar_37;
        ivar_10->count++;
        ivar_37 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_10);
        if (ivar_37){ 
             uint64_t ivar_12;
             ivar_12 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_10);
             ltepeg_funtype_82_t ivar_23;
             ivar_2->count++;
             ivar_3->count++;
             ivar_23 = (ltepeg_funtype_82_t)ltepeg__good_failp((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepeg_array_83_t)ivar_3);
             result = (bool_t)ivar_23->ftbl->mptr(ivar_23, ivar_6, ivar_8, ivar_9, ivar_12);
             ivar_23->ftbl->rptr(ivar_23);
} else {
        
             bool_t ivar_53;
             ivar_10->count++;
             ivar_53 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_10);
             if (ivar_53){  
           release_ltepeg__ent_adt(ivar_10);
           release_ltepeg__ent_adt(ivar_10);
           ivar_2->count++;
           result = (bool_t)ltepeg__loop_readyp((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepeg_array_63_t)ivar_6, (uint32_t)ivar_8, (uint8_t)ivar_9);
} else {
             
           bool_t ivar_103;
           ivar_10->count++;
           ivar_103 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_10);
           if (ivar_103){   
           uint64_t ivar_57;
           ivar_10->count++;
           ivar_57 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_10);
           uint32_t ivar_58;
           ivar_58 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_10);
           bool_t ivar_65;
           int32_t ivar_68;
           ivar_68 = (int32_t)((uint64_t)ivar_1 - (uint64_t)ivar_8);
           if ((ivar_68 < 0)){    
            ivar_65 = false;
} else {
           
            ivar_65 = (ivar_58 <= (uint32_t)ivar_68);
};
           if (ivar_65){    
            ltepeg_funtype_89_t ivar_84;
            ivar_2->count++;
            ivar_3->count++;
            ivar_84 = (ltepeg_funtype_89_t)ltepeg__good_goodp((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepeg_array_83_t)ivar_3);
            mpz_ptr_t ivar_101;
            //copying to mpz from uint32;
            mpz_mk_set_ui(ivar_101, ivar_58);
            result = (bool_t)ivar_84->ftbl->mptr(ivar_84, ivar_6, ivar_8, ivar_9, ivar_57, ivar_101);
            ivar_84->ftbl->rptr(ivar_84);
} else {
           
            release_ltepeg_array_63(ivar_6);
            result = (bool_t) false;
};
} else {
           
           bool_t ivar_107;
           ivar_107 = (bool_t)r_ltepeg__pushp((ltepeg__ent_adt_t)ivar_10);
           if (ivar_107){    
            ltepeg__ent_adt_t ivar_123;
            ltepeg_array_62_t ivar_115;
            ivar_115 = (ltepeg_array_62_t)ivar_6->elems[ivar_8];
            ivar_115->count++;
            release_ltepeg_array_63(ivar_6);
            ivar_123 = (ltepeg__ent_adt_t)ivar_115->elems[ivar_9];
            ivar_123->count++;
            release_ltepeg_array_62(ivar_115);
            result = (bool_t)r_ltepeg__pendingp((ltepeg__ent_adt_t)ivar_123);
} else {
           
            release_ltepeg_array_63(ivar_6);
            result = (bool_t) false;
};
};
};
};

        return result;
}

ltepeg_closure_94_t new_ltepeg_closure_94(void){
        static struct ltepeg_funtype_92_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_92_t, ltepeg_record_91_t))&f_ltepeg_closure_94, .mptr = (bool_t (*)(ltepeg_funtype_92_t, ltepeg_array_63_t, uint32_t, uint8_t, ltepeg__ent_adt_t))&m_ltepeg_closure_94, .rptr =  (void (*)(ltepeg_funtype_92_t))&release_ltepeg_closure_94, .cptr = (ltepeg_funtype_92_t (*)(ltepeg_funtype_92_t))&copy_ltepeg_closure_94};
        ltepeg_closure_94_t tmp = (ltepeg_closure_94_t) safe_malloc(sizeof(struct ltepeg_closure_94_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_94(ltepeg_funtype_92_t closure){
        ltepeg_closure_94_t x = (ltepeg_closure_94_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg__lang_spec(x->fvar_2);
         release_ltepeg_array_83(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_94_t copy_ltepeg_closure_94(ltepeg_closure_94_t x){
        ltepeg_closure_94_t y = new_ltepeg_closure_94();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltepeg_funtype_92_htbl_t new_htbl = (ltepeg_funtype_92_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_92_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_92_hashentry_t * new_data = (ltepeg_funtype_92_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_92_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_92_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepeg_funtype_95(ltepeg_funtype_95_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_95_t copy_ltepeg_funtype_95(ltepeg_funtype_95_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_95(ltepeg_funtype_95_t x, ltepeg_funtype_95_t y){
        return false;}

char* json_ltepeg_funtype_95(ltepeg_funtype_95_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_95\""); return result;}


bool_t f_ltepeg_closure_96(struct ltepeg_closure_96_s * closure, ltepeg_array_63_t bvar){
        bool_t result = h_ltepeg_closure_96(bvar, closure->fvar_1); 
        return result;}

bool_t m_ltepeg_closure_96(struct ltepeg_closure_96_s * closure, ltepeg_array_63_t bvar){
        return h_ltepeg_closure_96(bvar, closure->fvar_1);}

extern bool_t h_ltepeg_closure_96(ltepeg_array_63_t ivar_6, uint32_t ivar_1){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}

ltepeg_closure_96_t new_ltepeg_closure_96(void){
        static struct ltepeg_funtype_95_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_95_t, ltepeg_array_63_t))&f_ltepeg_closure_96, .mptr = (bool_t (*)(ltepeg_funtype_95_t, ltepeg_array_63_t))&m_ltepeg_closure_96, .rptr =  (void (*)(ltepeg_funtype_95_t))&release_ltepeg_closure_96, .cptr = (ltepeg_funtype_95_t (*)(ltepeg_funtype_95_t))&copy_ltepeg_closure_96};
        ltepeg_closure_96_t tmp = (ltepeg_closure_96_t) safe_malloc(sizeof(struct ltepeg_closure_96_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_96(ltepeg_funtype_95_t closure){
        ltepeg_closure_96_t x = (ltepeg_closure_96_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_96_t copy_ltepeg_closure_96(ltepeg_closure_96_t x){
        ltepeg_closure_96_t y = new_ltepeg_closure_96();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        if (x->htbl != NULL){
            ltepeg_funtype_95_htbl_t new_htbl = (ltepeg_funtype_95_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_95_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_95_hashentry_t * new_data = (ltepeg_funtype_95_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_95_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_95_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_ltepeg_closure_97(struct ltepeg_closure_97_s * closure, ltepeg_record_9_t bvar){
        uint32_t bvar_1;
        bvar_1 = (uint32_t)bvar->project_1;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        release_ltepeg_record_9(bvar);
        bool_t result = h_ltepeg_closure_97(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_ltepeg_closure_97(struct ltepeg_closure_97_s * closure, uint32_t bvar_1, uint8_t bvar_2){
        return h_ltepeg_closure_97(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2);}

extern bool_t h_ltepeg_closure_97(uint32_t ivar_5, uint8_t ivar_6, ltepeg_array_63_t ivar_2, uint32_t ivar_1){
        bool_t result;
        bool_t ivar_7;
        ltepeg__ent_adt_t ivar_19;
        ltepeg_array_62_t ivar_11;
        ivar_11 = (ltepeg_array_62_t)ivar_2->elems[ivar_5];
        ivar_11->count++;
        ivar_19 = (ltepeg__ent_adt_t)ivar_11->elems[ivar_6];
        ivar_19->count++;
        release_ltepeg_array_62(ivar_11);
        ivar_7 = (bool_t)r_ltepeg__pendingp((ltepeg__ent_adt_t)ivar_19);
        result = !ivar_7;

        return result;
}

ltepeg_closure_97_t new_ltepeg_closure_97(void){
        static struct ltepeg_funtype_61_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_61_t, ltepeg_record_9_t))&f_ltepeg_closure_97, .mptr = (bool_t (*)(ltepeg_funtype_61_t, uint32_t, uint8_t))&m_ltepeg_closure_97, .rptr =  (void (*)(ltepeg_funtype_61_t))&release_ltepeg_closure_97, .cptr = (ltepeg_funtype_61_t (*)(ltepeg_funtype_61_t))&copy_ltepeg_closure_97};
        ltepeg_closure_97_t tmp = (ltepeg_closure_97_t) safe_malloc(sizeof(struct ltepeg_closure_97_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_97(ltepeg_funtype_61_t closure){
        ltepeg_closure_97_t x = (ltepeg_closure_97_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_array_63(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_97_t copy_ltepeg_closure_97(ltepeg_closure_97_t x){
        ltepeg_closure_97_t y = new_ltepeg_closure_97();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            ltepeg_funtype_61_htbl_t new_htbl = (ltepeg_funtype_61_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_61_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_61_hashentry_t * new_data = (ltepeg_funtype_61_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_61_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_61_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepeg_funtype_98(ltepeg_funtype_98_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_98_t copy_ltepeg_funtype_98(ltepeg_funtype_98_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_98(ltepeg_funtype_98_t x, ltepeg_funtype_98_t y){
        return false;}

char* json_ltepeg_funtype_98(ltepeg_funtype_98_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"ltepeg_funtype_98\""); return result;}


ltepeg_funtype_95_t f_ltepeg_closure_99(struct ltepeg_closure_99_s * closure, ltepeg_record_9_t bvar){
        uint32_t bvar_1;
        bvar_1 = (uint32_t)bvar->project_1;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        release_ltepeg_record_9(bvar);
        ltepeg_funtype_95_t result = h_ltepeg_closure_99(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

ltepeg_funtype_95_t m_ltepeg_closure_99(struct ltepeg_closure_99_s * closure, uint32_t bvar_1, uint8_t bvar_2){
        return h_ltepeg_closure_99(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern ltepeg_funtype_95_t h_ltepeg_closure_99(uint32_t ivar_7, uint8_t ivar_8, ltepeg_array_83_t ivar_3, ltepeg__lang_spec_t ivar_2, uint32_t ivar_1){
        ltepeg_funtype_95_t result;
        ltepeg_closure_100_t cl90042;
        cl90042 = new_ltepeg_closure_100();
        cl90042->fvar_1 = (uint32_t)ivar_7;
        cl90042->fvar_2 = (uint32_t)ivar_1;
        cl90042->fvar_3 = (uint8_t)ivar_8;
        cl90042->fvar_4 = (ltepeg__lang_spec_t)ivar_2;
        if (cl90042->fvar_4 != NULL) cl90042->fvar_4->count++;
        cl90042->fvar_5 = (ltepeg_array_83_t)ivar_3;
        if (cl90042->fvar_5 != NULL) cl90042->fvar_5->count++;
        result = (ltepeg_funtype_95_t)cl90042;

        return result;
}

ltepeg_closure_99_t new_ltepeg_closure_99(void){
        static struct ltepeg_funtype_98_ftbl_s ftbl = {.fptr = (ltepeg_funtype_95_t (*)(ltepeg_funtype_98_t, ltepeg_record_9_t))&f_ltepeg_closure_99, .mptr = (ltepeg_funtype_95_t (*)(ltepeg_funtype_98_t, uint32_t, uint8_t))&m_ltepeg_closure_99, .rptr =  (void (*)(ltepeg_funtype_98_t))&release_ltepeg_closure_99, .cptr = (ltepeg_funtype_98_t (*)(ltepeg_funtype_98_t))&copy_ltepeg_closure_99};
        ltepeg_closure_99_t tmp = (ltepeg_closure_99_t) safe_malloc(sizeof(struct ltepeg_closure_99_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_99(ltepeg_funtype_98_t closure){
        ltepeg_closure_99_t x = (ltepeg_closure_99_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_array_83(x->fvar_1);
         release_ltepeg__lang_spec(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_99_t copy_ltepeg_closure_99(ltepeg_closure_99_t x){
        ltepeg_closure_99_t y = new_ltepeg_closure_99();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = (uint32_t)x->fvar_3;
        if (x->htbl != NULL){
            ltepeg_funtype_98_htbl_t new_htbl = (ltepeg_funtype_98_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_98_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_98_hashentry_t * new_data = (ltepeg_funtype_98_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_98_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_98_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_ltepeg_closure_100(struct ltepeg_closure_100_s * closure, ltepeg_array_63_t bvar){
        bool_t result = h_ltepeg_closure_100(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

bool_t m_ltepeg_closure_100(struct ltepeg_closure_100_s * closure, ltepeg_array_63_t bvar){
        return h_ltepeg_closure_100(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern bool_t h_ltepeg_closure_100(ltepeg_array_63_t ivar_11, uint32_t ivar_7, uint32_t ivar_1, uint8_t ivar_8, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3){
        bool_t result;
        bool_t ivar_13;
        ltepeg_funtype_61_t ivar_19;
        ivar_11->count++;
        ivar_19 = (ltepeg_funtype_61_t)ltepeg__good_rootp((uint32_t)ivar_1, (ltepeg_array_63_t)ivar_11);
        ivar_13 = (bool_t)ivar_19->ftbl->mptr(ivar_19, ivar_7, ivar_8);
        ivar_19->ftbl->rptr(ivar_19);
        if (ivar_13){ 
             ltepeg_funtype_95_t ivar_33;
             ivar_2->count++;
             ivar_3->count++;
             ivar_33 = (ltepeg_funtype_95_t)ltepeg__good_tscaffoldp((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepeg_array_83_t)ivar_3);
             result = (bool_t)ivar_33->ftbl->fptr(ivar_33, ivar_11);
             ivar_33->ftbl->rptr(ivar_33);
} else {
        
             release_ltepeg_array_63(ivar_11);
             result = (bool_t) false;
};

        return result;
}

ltepeg_closure_100_t new_ltepeg_closure_100(void){
        static struct ltepeg_funtype_95_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_95_t, ltepeg_array_63_t))&f_ltepeg_closure_100, .mptr = (bool_t (*)(ltepeg_funtype_95_t, ltepeg_array_63_t))&m_ltepeg_closure_100, .rptr =  (void (*)(ltepeg_funtype_95_t))&release_ltepeg_closure_100, .cptr = (ltepeg_funtype_95_t (*)(ltepeg_funtype_95_t))&copy_ltepeg_closure_100};
        ltepeg_closure_100_t tmp = (ltepeg_closure_100_t) safe_malloc(sizeof(struct ltepeg_closure_100_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_100(ltepeg_funtype_95_t closure){
        ltepeg_closure_100_t x = (ltepeg_closure_100_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg__lang_spec(x->fvar_4);
         release_ltepeg_array_83(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_100_t copy_ltepeg_closure_100(ltepeg_closure_100_t x){
        ltepeg_closure_100_t y = new_ltepeg_closure_100();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = (uint8_t)x->fvar_3;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            ltepeg_funtype_95_htbl_t new_htbl = (ltepeg_funtype_95_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_95_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_95_hashentry_t * new_data = (ltepeg_funtype_95_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_95_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_95_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepeg_record_101_t new_ltepeg_record_101(void){
        ltepeg_record_101_t tmp = (ltepeg_record_101_t) safe_malloc(sizeof(struct ltepeg_record_101_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg_record_101(ltepeg_record_101_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg_array_63(x->scaf);
         release_ltepeg__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg_record_101_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_record_101((ltepeg_record_101_t)x);
}

ltepeg_record_101_t copy_ltepeg_record_101(ltepeg_record_101_t x){
        ltepeg_record_101_t y = new_ltepeg_record_101();
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->depth = (uint64_t)x->depth;
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->lflag = (bool_t)x->lflag;
        y->count = 1;
        return y;}

bool_t equal_ltepeg_record_101(ltepeg_record_101_t x, ltepeg_record_101_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepeg_array_63(x->scaf, y->scaf);
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && equal_ltepeg__ent_adt(x->stack, y->stack);
        tmp = tmp && x->lflag == y->lflag;
        return tmp;}

char * json_ltepeg_record_101(ltepeg_record_101_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(16);
         sprintf(fld0, "\"scaf\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepeg_array_63(x->scaf));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"depth\" : ");
        tmp[1] = safe_strcat(fld1, json_uint64(x->depth));
        char * fld2 = safe_malloc(17);
         sprintf(fld2, "\"stack\" : ");
        tmp[2] = safe_strcat(fld2, json_ltepeg__ent_adt(x->stack));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"lflag\" : ");
        tmp[3] = safe_strcat(fld3, json_bool(x->lflag));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg_record_101_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_101_t T){
        return equal_ltepeg_record_101((ltepeg_record_101_t)x, (ltepeg_record_101_t)y);
}

char * json_ltepeg_record_101_ptr(pointer_t x, actual_ltepeg_record_101_t T){
        return json_ltepeg_record_101((ltepeg_record_101_t)x);
}

actual_ltepeg_record_101_t actual_ltepeg_record_101(){
        actual_ltepeg_record_101_t new = (actual_ltepeg_record_101_t)safe_malloc(sizeof(struct actual_ltepeg_record_101_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_record_101_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_record_101_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_record_101_ptr);
 

 
        return new;
 };

ltepeg_record_101_t update_ltepeg_record_101_scaf(ltepeg_record_101_t x, ltepeg_array_63_t v){
        ltepeg_record_101_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_ltepeg_array_63(x->scaf);};}
        else {y = copy_ltepeg_record_101(x); x->count--; y->scaf->count--;};
        y->scaf = (ltepeg_array_63_t)v;
        return y;}

ltepeg_record_101_t update_ltepeg_record_101_depth(ltepeg_record_101_t x, uint64_t v){
        ltepeg_record_101_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_101(x); x->count--;};
        y->depth = (uint64_t)v;
        return y;}

ltepeg_record_101_t update_ltepeg_record_101_stack(ltepeg_record_101_t x, ltepeg__ent_adt_t v){
        ltepeg_record_101_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_ltepeg__ent_adt(x->stack);};}
        else {y = copy_ltepeg_record_101(x); x->count--; y->stack->count--;};
        y->stack = (ltepeg__ent_adt_t)v;
        return y;}

ltepeg_record_101_t update_ltepeg_record_101_lflag(ltepeg_record_101_t x, bool_t v){
        ltepeg_record_101_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_101(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}



void release_ltepeg_funtype_102(ltepeg_funtype_102_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_102_t copy_ltepeg_funtype_102(ltepeg_funtype_102_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_102(ltepeg_funtype_102_t x, ltepeg_funtype_102_t y){
        return false;}

char* json_ltepeg_funtype_102(ltepeg_funtype_102_t x){char * result = safe_malloc(28); sprintf(result, "%s", "\"ltepeg_funtype_102\""); return result;}


ltepeg_record_101_t f_ltepeg_closure_103(struct ltepeg_closure_103_s * closure, ltepeg_record_101_t bvar){
        ltepeg_record_101_t result = h_ltepeg_closure_103(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

ltepeg_record_101_t m_ltepeg_closure_103(struct ltepeg_closure_103_s * closure, ltepeg_record_101_t bvar){
        return h_ltepeg_closure_103(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern ltepeg_record_101_t h_ltepeg_closure_103(ltepeg_record_101_t ivar_9, uint32_t ivar_1, ltepeg_array_83_t ivar_3, ltepeg__lang_spec_t ivar_2){
        ltepeg_record_101_t result;
        /* scaf */ ltepeg_array_63_t ivar_12;
        ivar_12 = (ltepeg_array_63_t)ivar_9->scaf;
        ivar_12->count++;
        /* stack */ ltepeg__ent_adt_t ivar_17;
        ivar_17 = (ltepeg__ent_adt_t)ivar_9->stack;
        ivar_17->count++;
        /* depth */ uint64_t ivar_20;
        ivar_20 = (uint64_t)ivar_9->depth;
        bool_t ivar_26;
        ivar_17->count++;
        ivar_26 = (bool_t)ltepeg__emptyp((ltepeg__ent_adt_t)ivar_17);
        if (ivar_26){ 
             release_ltepeg_array_63(ivar_12);
             release_ltepeg__ent_adt(ivar_17);
             //copying to ltepeg_record_101 from ltepeg_record_101;
             result = (ltepeg_record_101_t)ivar_9;
             if (result != NULL) result->count++;
             release_ltepeg_record_101(ivar_9);
} else {
        
             /* pos */ uint32_t ivar_31;
             ivar_17->count++;
             ivar_31 = (uint32_t)ltepeg__ent_adt_pos((ltepeg__ent_adt_t)ivar_17);
             /* cur */ uint8_t ivar_35;
             ivar_17->count++;
             ivar_35 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_17);
             /* rest */ ltepeg__ent_adt_t ivar_39;
	     //	     printf("\nPos = %"PRIu32", NT = %"PRIu8"", ivar_31, ivar_35);
             ltepeg_array_62_t ivar_42;
             ivar_42 = (ltepeg_array_62_t)ivar_12->elems[ivar_31];
             ivar_42->count++;
             ivar_39 = (ltepeg__ent_adt_t)ivar_42->elems[ivar_35];
             ivar_39->count++;
             release_ltepeg_array_62(ivar_42);
             ltepeg__prepeg_adt_t ivar_49;
             ivar_49 = (ltepeg__prepeg_adt_t)ivar_2->elems[ivar_35];
             ivar_49->count++;
             bool_t ivar_95;
             ivar_49->count++;
             ivar_95 = (bool_t)r_ltepeg__epsilonp((ltepeg__prepeg_adt_t)ivar_49);
             if (ivar_95){  
           release_ltepeg__prepeg_adt(ivar_49);
           release_ltepeg_array_63(ivar_12);
           release_ltepeg__ent_adt(ivar_17);
           ltepeg__ent_adt_t ivar_55;
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
           ivar_55 = (ltepeg__ent_adt_t)ltepeg__good((uint64_t)ivar_61, (uint32_t)ivar_62);
           uint64_t ivar_57;
           uint8_t ivar_68;
           ivar_68 = (uint8_t)1;
           ivar_57 = (uint64_t)(ivar_20 - ivar_68);
           ltepeg_record_101_t ivar_85;
           ltepeg_array_63_t ivar_71;
           ivar_71 = (ltepeg_array_63_t)ivar_9->scaf;
           ivar_71->count++;
           ltepeg_record_101_t ivar_82;
           ltepeg_array_63_t ivar_84;
           ivar_84 = NULL;
           ivar_82 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_9, ivar_84);
           if (ivar_84 != NULL) ivar_84->count--;
           ltepeg_array_63_t ivar_83;
           ltepeg_array_62_t ivar_72;
           ivar_72 = (ltepeg_array_62_t)ivar_71->elems[ivar_31];
           ivar_72->count++;
           ltepeg_array_63_t ivar_79;
           ltepeg_array_62_t ivar_81;
           ivar_81 = NULL;
           ivar_79 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_71, ivar_31, ivar_81);
           if (ivar_81 != NULL) ivar_81->count--;
           ltepeg_array_62_t ivar_80;
           ltepeg_array_62_t ivar_75;
           ltepeg__ent_adt_t ivar_77;
           ivar_77 = NULL;
           ivar_75 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_72, ivar_35, ivar_77);
           if (ivar_77 != NULL) ivar_77->count--;
           ivar_80 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_75, ivar_35, ivar_55);
           if (ivar_55 != NULL) ivar_55->count--;
           ivar_83 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_79, ivar_31, ivar_80);
           if (ivar_80 != NULL) ivar_80->count--;
           ivar_85 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_82, ivar_83);
           if (ivar_83 != NULL) ivar_83->count--;
           ltepeg_record_101_t ivar_90;
           ltepeg_record_101_t ivar_87;
           ltepeg__ent_adt_t ivar_89;
           ivar_89 = NULL;
           ivar_87 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_85, ivar_89);
           if (ivar_89 != NULL) ivar_89->count--;
           ivar_90 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_87, ivar_39);
           if (ivar_39 != NULL) ivar_39->count--;
           result = (ltepeg_record_101_t)update_ltepeg_record_101_depth(ivar_90, ivar_57);
} else {
             
           bool_t ivar_136;
           ivar_49->count++;
           ivar_136 = (bool_t)r_ltepeg__failurep((ltepeg__prepeg_adt_t)ivar_49);
           if (ivar_136){   
           release_ltepeg__prepeg_adt(ivar_49);
           release_ltepeg_array_63(ivar_12);
           release_ltepeg__ent_adt(ivar_17);
           ltepeg__ent_adt_t ivar_100;
           uint8_t ivar_107;
           ivar_107 = (uint8_t)0;
           uint64_t ivar_105;
           //copying to uint64 from uint8;
           ivar_105 = (uint64_t)ivar_107;
           ivar_100 = (ltepeg__ent_adt_t)ltepeg__fail((uint64_t)ivar_105);
           uint64_t ivar_102;
           uint8_t ivar_109;
           ivar_109 = (uint8_t)1;
           ivar_102 = (uint64_t)(ivar_20 - ivar_109);
           ltepeg_record_101_t ivar_126;
           ltepeg_array_63_t ivar_112;
           ivar_112 = (ltepeg_array_63_t)ivar_9->scaf;
           ivar_112->count++;
           ltepeg_record_101_t ivar_123;
           ltepeg_array_63_t ivar_125;
           ivar_125 = NULL;
           ivar_123 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_9, ivar_125);
           if (ivar_125 != NULL) ivar_125->count--;
           ltepeg_array_63_t ivar_124;
           ltepeg_array_62_t ivar_113;
           ivar_113 = (ltepeg_array_62_t)ivar_112->elems[ivar_31];
           ivar_113->count++;
           ltepeg_array_63_t ivar_120;
           ltepeg_array_62_t ivar_122;
           ivar_122 = NULL;
           ivar_120 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_112, ivar_31, ivar_122);
           if (ivar_122 != NULL) ivar_122->count--;
           ltepeg_array_62_t ivar_121;
           ltepeg_array_62_t ivar_116;
           ltepeg__ent_adt_t ivar_118;
           ivar_118 = NULL;
           ivar_116 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_113, ivar_35, ivar_118);
           if (ivar_118 != NULL) ivar_118->count--;
           ivar_121 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_116, ivar_35, ivar_100);
           if (ivar_100 != NULL) ivar_100->count--;
           ivar_124 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_120, ivar_31, ivar_121);
           if (ivar_121 != NULL) ivar_121->count--;
           ivar_126 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_123, ivar_124);
           if (ivar_124 != NULL) ivar_124->count--;
           ltepeg_record_101_t ivar_131;
           ltepeg_record_101_t ivar_128;
           ltepeg__ent_adt_t ivar_130;
           ivar_130 = NULL;
           ivar_128 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_126, ivar_130);
           if (ivar_130 != NULL) ivar_130->count--;
           ivar_131 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_128, ivar_39);
           if (ivar_39 != NULL) ivar_39->count--;
           result = (ltepeg_record_101_t)update_ltepeg_record_101_depth(ivar_131, ivar_102);
} else {
           
           bool_t ivar_211;
           ivar_49->count++;
           ivar_211 = (bool_t)r_ltepeg__anyp((ltepeg__prepeg_adt_t)ivar_49);
           if (ivar_211){    
            release_ltepeg_array_63(ivar_12);
            release_ltepeg__ent_adt(ivar_17);
            ltepeg_funtype_29_t ivar_140;
            ivar_140 = (ltepeg_funtype_29_t)ltepeg__prepeg_adt_p((ltepeg__prepeg_adt_t)ivar_49);
            /* v */ ltepeg__ent_adt_t ivar_146;
            bool_t ivar_147;
            bool_t ivar_148;
            ivar_148 = (ivar_31 == ivar_1);
            if (ivar_148){     
             release_ltepeg_funtype_29(ivar_140);
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
             ivar_146 = (ltepeg__ent_adt_t)ltepeg__fail((uint64_t)ivar_167);
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
             ivar_146 = (ltepeg__ent_adt_t)ltepeg__good((uint64_t)ivar_173, (uint32_t)ivar_174);
};
            uint64_t ivar_182;
            uint8_t ivar_184;
            ivar_184 = (uint8_t)1;
            ivar_182 = (uint64_t)(ivar_20 - ivar_184);
            ltepeg_record_101_t ivar_201;
            ltepeg_array_63_t ivar_187;
            ivar_187 = (ltepeg_array_63_t)ivar_9->scaf;
            ivar_187->count++;
            ltepeg_record_101_t ivar_198;
            ltepeg_array_63_t ivar_200;
            ivar_200 = NULL;
            ivar_198 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_9, ivar_200);
            if (ivar_200 != NULL) ivar_200->count--;
            ltepeg_array_63_t ivar_199;
            ltepeg_array_62_t ivar_188;
            ivar_188 = (ltepeg_array_62_t)ivar_187->elems[ivar_31];
            ivar_188->count++;
            ltepeg_array_63_t ivar_195;
            ltepeg_array_62_t ivar_197;
            ivar_197 = NULL;
            ivar_195 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_187, ivar_31, ivar_197);
            if (ivar_197 != NULL) ivar_197->count--;
            ltepeg_array_62_t ivar_196;
            ltepeg_array_62_t ivar_191;
            ltepeg__ent_adt_t ivar_193;
            ivar_193 = NULL;
            ivar_191 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_188, ivar_35, ivar_193);
            if (ivar_193 != NULL) ivar_193->count--;
            ivar_196 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_191, ivar_35, ivar_146);
            if (ivar_146 != NULL) ivar_146->count--;
            ivar_199 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_195, ivar_31, ivar_196);
            if (ivar_196 != NULL) ivar_196->count--;
            ivar_201 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_198, ivar_199);
            if (ivar_199 != NULL) ivar_199->count--;
            ltepeg_record_101_t ivar_206;
            ltepeg_record_101_t ivar_203;
            ltepeg__ent_adt_t ivar_205;
            ivar_205 = NULL;
            ivar_203 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_201, ivar_205);
            if (ivar_205 != NULL) ivar_205->count--;
            ivar_206 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_203, ivar_39);
            if (ivar_39 != NULL) ivar_39->count--;
            result = (ltepeg_record_101_t)update_ltepeg_record_101_depth(ivar_206, ivar_182);
} else {
           
            bool_t ivar_280;
            ivar_49->count++;
            ivar_280 = (bool_t)r_ltepeg__terminalp((ltepeg__prepeg_adt_t)ivar_49);
            if (ivar_280){     
             release_ltepeg_array_63(ivar_12);
             release_ltepeg__ent_adt(ivar_17);
             uint8_t ivar_215;
             ivar_215 = (uint8_t)ltepeg__prepeg_adt_a((ltepeg__prepeg_adt_t)ivar_49);
             /* v */ ltepeg__ent_adt_t ivar_219;
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
              ivar_219 = (ltepeg__ent_adt_t)ltepeg__fail((uint64_t)ivar_236);
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
              ivar_219 = (ltepeg__ent_adt_t)ltepeg__good((uint64_t)ivar_242, (uint32_t)ivar_243);
};
             uint64_t ivar_251;
             uint8_t ivar_253;
             ivar_253 = (uint8_t)1;
             ivar_251 = (uint64_t)(ivar_20 - ivar_253);
             ltepeg_record_101_t ivar_270;
             ltepeg_array_63_t ivar_256;
             ivar_256 = (ltepeg_array_63_t)ivar_9->scaf;
             ivar_256->count++;
             ltepeg_record_101_t ivar_267;
             ltepeg_array_63_t ivar_269;
             ivar_269 = NULL;
             ivar_267 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_9, ivar_269);
             if (ivar_269 != NULL) ivar_269->count--;
             ltepeg_array_63_t ivar_268;
             ltepeg_array_62_t ivar_257;
             ivar_257 = (ltepeg_array_62_t)ivar_256->elems[ivar_31];
             ivar_257->count++;
             ltepeg_array_63_t ivar_264;
             ltepeg_array_62_t ivar_266;
             ivar_266 = NULL;
             ivar_264 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_256, ivar_31, ivar_266);
             if (ivar_266 != NULL) ivar_266->count--;
             ltepeg_array_62_t ivar_265;
             ltepeg_array_62_t ivar_260;
             ltepeg__ent_adt_t ivar_262;
             ivar_262 = NULL;
             ivar_260 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_257, ivar_35, ivar_262);
             if (ivar_262 != NULL) ivar_262->count--;
             ivar_265 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_260, ivar_35, ivar_219);
             if (ivar_219 != NULL) ivar_219->count--;
             ivar_268 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_264, ivar_31, ivar_265);
             if (ivar_265 != NULL) ivar_265->count--;
             ivar_270 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_267, ivar_268);
             if (ivar_268 != NULL) ivar_268->count--;
             ltepeg_record_101_t ivar_275;
             ltepeg_record_101_t ivar_272;
             ltepeg__ent_adt_t ivar_274;
             ivar_274 = NULL;
             ivar_272 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_270, ivar_274);
             if (ivar_274 != NULL) ivar_274->count--;
             ivar_275 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_272, ivar_39);
             if (ivar_39 != NULL) ivar_39->count--;
             result = (ltepeg_record_101_t)update_ltepeg_record_101_depth(ivar_275, ivar_251);
} else {
            
             uint8_t ivar_284;
             ivar_49->count++;
             ivar_284 = (uint8_t)ltepeg__prepeg_adt_fst((ltepeg__prepeg_adt_t)ivar_49);
             uint8_t ivar_285;
             ivar_49->count++;
             ivar_285 = (uint8_t)ltepeg__prepeg_adt_lthen((ltepeg__prepeg_adt_t)ivar_49);
             uint8_t ivar_286;
             ivar_286 = (uint8_t)ltepeg__prepeg_adt_lelse((ltepeg__prepeg_adt_t)ivar_49);
             ltepeg__ent_adt_t ivar_296;
             ltepeg_array_62_t ivar_299;
             ltepeg_array_63_t ivar_303;
             ivar_303 = (ltepeg_array_63_t)ivar_9->scaf;
             ivar_303->count++;
             ivar_299 = (ltepeg_array_62_t)ivar_303->elems[ivar_31];
             ivar_299->count++;
             release_ltepeg_array_63(ivar_303);
             ivar_296 = (ltepeg__ent_adt_t)ivar_299->elems[ivar_284];
             ivar_296->count++;
             release_ltepeg_array_62(ivar_299);
             bool_t ivar_512;
             ivar_296->count++;
             ivar_512 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_296);
             if (ivar_512){      
              uint64_t ivar_308;
              ivar_308 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_296);
              ltepeg__ent_adt_t ivar_312;
              ltepeg_array_62_t ivar_315;
              ivar_315 = (ltepeg_array_62_t)ivar_12->elems[ivar_31];
              ivar_315->count++;
              release_ltepeg_array_63(ivar_12);
              ivar_312 = (ltepeg__ent_adt_t)ivar_315->elems[ivar_286];
              ivar_312->count++;
              release_ltepeg_array_62(ivar_315);
              bool_t ivar_371;
              ivar_312->count++;
              ivar_371 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_312);
              if (ivar_371){       
               release_ltepeg__ent_adt(ivar_17);
               uint64_t ivar_322;
               ivar_322 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_312);
               ltepeg__ent_adt_t ivar_327;
               mpz_ptr_t ivar_342;
               mpq_ptr_t ivar_331;
               mpq_ptr_t ivar_336;
               //copying to mpq from uint64;
               mpq_mk_set_ui(ivar_336, ivar_308);
               mpq_ptr_t ivar_337;
               //copying to mpq from uint64;
               mpq_mk_set_ui(ivar_337, ivar_322);
               ivar_331 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_336, (mpq_ptr_t)ivar_337);
               uint8_t ivar_332;
               ivar_332 = (uint8_t)1;
               mpz_mk_set_q(ivar_342, ivar_331);
               mpz_add_ui(ivar_342, ivar_342, (uint64_t)ivar_332);
               uint64_t ivar_340;
               //copying to uint64 from mpz;
               ivar_340 = (uint64_t)mpz_get_ui(ivar_342);
               mpz_clear(ivar_342);
               ivar_327 = (ltepeg__ent_adt_t)ltepeg__fail((uint64_t)ivar_340);
               uint64_t ivar_329;
               uint8_t ivar_344;
               ivar_344 = (uint8_t)1;
               ivar_329 = (uint64_t)(ivar_20 - ivar_344);
               ltepeg_record_101_t ivar_361;
               ltepeg_array_63_t ivar_347;
               ivar_347 = (ltepeg_array_63_t)ivar_9->scaf;
               ivar_347->count++;
               ltepeg_record_101_t ivar_358;
               ltepeg_array_63_t ivar_360;
               ivar_360 = NULL;
               ivar_358 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_9, ivar_360);
               if (ivar_360 != NULL) ivar_360->count--;
               ltepeg_array_63_t ivar_359;
               ltepeg_array_62_t ivar_348;
               ivar_348 = (ltepeg_array_62_t)ivar_347->elems[ivar_31];
               ivar_348->count++;
               ltepeg_array_63_t ivar_355;
               ltepeg_array_62_t ivar_357;
               ivar_357 = NULL;
               ivar_355 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_347, ivar_31, ivar_357);
               if (ivar_357 != NULL) ivar_357->count--;
               ltepeg_array_62_t ivar_356;
               ltepeg_array_62_t ivar_351;
               ltepeg__ent_adt_t ivar_353;
               ivar_353 = NULL;
               ivar_351 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_348, ivar_35, ivar_353);
               if (ivar_353 != NULL) ivar_353->count--;
               ivar_356 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_351, ivar_35, ivar_327);
               if (ivar_327 != NULL) ivar_327->count--;
               ivar_359 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_355, ivar_31, ivar_356);
               if (ivar_356 != NULL) ivar_356->count--;
               ivar_361 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_358, ivar_359);
               if (ivar_359 != NULL) ivar_359->count--;
               ltepeg_record_101_t ivar_366;
               ltepeg_record_101_t ivar_363;
               ltepeg__ent_adt_t ivar_365;
               ivar_365 = NULL;
               ivar_363 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_361, ivar_365);
               if (ivar_365 != NULL) ivar_365->count--;
               ivar_366 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_363, ivar_39);
               if (ivar_39 != NULL) ivar_39->count--;
               result = (ltepeg_record_101_t)update_ltepeg_record_101_depth(ivar_366, ivar_329);
} else {
              
               bool_t ivar_430;
               ivar_312->count++;
               ivar_430 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_312);
               if (ivar_430){        
                release_ltepeg__ent_adt(ivar_17);
                uint64_t ivar_375;
                ivar_312->count++;
                ivar_375 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_312);
                uint32_t ivar_376;
                ivar_376 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_312);
                ltepeg__ent_adt_t ivar_384;
                mpz_ptr_t ivar_401;
                mpq_ptr_t ivar_389;
                mpq_ptr_t ivar_394;
                //copying to mpq from uint64;
                mpq_mk_set_ui(ivar_394, ivar_308);
                mpq_ptr_t ivar_395;
                //copying to mpq from uint64;
                mpq_mk_set_ui(ivar_395, ivar_375);
                ivar_389 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_394, (mpq_ptr_t)ivar_395);
                uint8_t ivar_390;
                ivar_390 = (uint8_t)1;
                mpz_mk_set_q(ivar_401, ivar_389);
                mpz_add_ui(ivar_401, ivar_401, (uint64_t)ivar_390);
                uint64_t ivar_398;
                //copying to uint64 from mpz;
                ivar_398 = (uint64_t)mpz_get_ui(ivar_401);
                mpz_clear(ivar_401);
                ivar_384 = (ltepeg__ent_adt_t)ltepeg__good((uint64_t)ivar_398, (uint32_t)ivar_376);
                uint64_t ivar_386;
                uint8_t ivar_403;
                ivar_403 = (uint8_t)1;
                ivar_386 = (uint64_t)(ivar_20 - ivar_403);
                ltepeg_record_101_t ivar_420;
                ltepeg_array_63_t ivar_406;
                ivar_406 = (ltepeg_array_63_t)ivar_9->scaf;
                ivar_406->count++;
                ltepeg_record_101_t ivar_417;
                ltepeg_array_63_t ivar_419;
                ivar_419 = NULL;
                ivar_417 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_9, ivar_419);
                if (ivar_419 != NULL) ivar_419->count--;
                ltepeg_array_63_t ivar_418;
                ltepeg_array_62_t ivar_407;
                ivar_407 = (ltepeg_array_62_t)ivar_406->elems[ivar_31];
                ivar_407->count++;
                ltepeg_array_63_t ivar_414;
                ltepeg_array_62_t ivar_416;
                ivar_416 = NULL;
                ivar_414 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_406, ivar_31, ivar_416);
                if (ivar_416 != NULL) ivar_416->count--;
                ltepeg_array_62_t ivar_415;
                ltepeg_array_62_t ivar_410;
                ltepeg__ent_adt_t ivar_412;
                ivar_412 = NULL;
                ivar_410 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_407, ivar_35, ivar_412);
                if (ivar_412 != NULL) ivar_412->count--;
                ivar_415 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_410, ivar_35, ivar_384);
                if (ivar_384 != NULL) ivar_384->count--;
                ivar_418 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_414, ivar_31, ivar_415);
                if (ivar_415 != NULL) ivar_415->count--;
                ivar_420 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_417, ivar_418);
                if (ivar_418 != NULL) ivar_418->count--;
                ltepeg_record_101_t ivar_425;
                ltepeg_record_101_t ivar_422;
                ltepeg__ent_adt_t ivar_424;
                ivar_424 = NULL;
                ivar_422 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_420, ivar_424);
                if (ivar_424 != NULL) ivar_424->count--;
                ivar_425 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_422, ivar_39);
                if (ivar_39 != NULL) ivar_39->count--;
                result = (ltepeg_record_101_t)update_ltepeg_record_101_depth(ivar_425, ivar_386);
} else {
               
                bool_t ivar_471;
                ivar_471 = (bool_t)r_ltepeg__pendingp((ltepeg__ent_adt_t)ivar_312);
                if (ivar_471){         
                 release_ltepeg__ent_adt(ivar_39);
                 ltepeg__ent_adt_t ivar_435;
                 ivar_435 = (ltepeg__ent_adt_t)ltepeg__push((uint32_t)ivar_31, (uint8_t)ivar_286);
                 uint64_t ivar_436;
                 uint8_t ivar_444;
                 ivar_444 = (uint8_t)1;
                 ivar_436 = (uint64_t)(ivar_20 + ivar_444);
                 ltepeg_record_101_t ivar_451;
                 ltepeg_record_101_t ivar_448;
                 ltepeg__ent_adt_t ivar_450;
                 ivar_450 = NULL;
                 ivar_448 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_9, ivar_450);
                 if (ivar_450 != NULL) ivar_450->count--;
                 ivar_451 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_448, ivar_435);
                 if (ivar_435 != NULL) ivar_435->count--;
                 ltepeg_record_101_t ivar_455;
                 ivar_455 = (ltepeg_record_101_t)update_ltepeg_record_101_depth(ivar_451, ivar_436);
                 ltepeg_array_63_t ivar_456;
                 ivar_456 = (ltepeg_array_63_t)ivar_455->scaf;
                 ivar_456->count++;
                 ltepeg_record_101_t ivar_467;
                 ltepeg_array_63_t ivar_469;
                 ivar_469 = NULL;
                 ivar_467 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_455, ivar_469);
                 if (ivar_469 != NULL) ivar_469->count--;
                 ltepeg_array_63_t ivar_468;
                 ltepeg_array_62_t ivar_457;
                 ivar_457 = (ltepeg_array_62_t)ivar_456->elems[ivar_31];
                 ivar_457->count++;
                 ltepeg_array_63_t ivar_464;
                 ltepeg_array_62_t ivar_466;
                 ivar_466 = NULL;
                 ivar_464 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_456, ivar_31, ivar_466);
                 if (ivar_466 != NULL) ivar_466->count--;
                 ltepeg_array_62_t ivar_465;
                 ltepeg_array_62_t ivar_460;
                 ltepeg__ent_adt_t ivar_462;
                 ivar_462 = NULL;
                 ivar_460 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_457, ivar_286, ivar_462);
                 if (ivar_462 != NULL) ivar_462->count--;
                 ivar_465 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_460, ivar_286, ivar_17);
                 if (ivar_17 != NULL) ivar_17->count--;
                 ivar_468 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_464, ivar_31, ivar_465);
                 if (ivar_465 != NULL) ivar_465->count--;
                 result = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_467, ivar_468);
                 if (ivar_468 != NULL) ivar_468->count--;
} else {
                
                 release_ltepeg__ent_adt(ivar_17);
                 ltepeg__ent_adt_t ivar_476;
                 ivar_476 = (ltepeg__ent_adt_t)ltepeg__loop();
                 if (ivar_476 != NULL) ivar_476->count++;
                 uint64_t ivar_477;
                 uint8_t ivar_481;
                 ivar_481 = (uint8_t)1;
                 ivar_477 = (uint64_t)(ivar_20 - ivar_481);
                 bool_t ivar_479;
                 ivar_479 = (bool_t) true;
                 ltepeg_record_101_t ivar_498;
                 ltepeg_array_63_t ivar_484;
                 ivar_484 = (ltepeg_array_63_t)ivar_9->scaf;
                 ivar_484->count++;
                 ltepeg_record_101_t ivar_495;
                 ltepeg_array_63_t ivar_497;
                 ivar_497 = NULL;
                 ivar_495 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_9, ivar_497);
                 if (ivar_497 != NULL) ivar_497->count--;
                 ltepeg_array_63_t ivar_496;
                 ltepeg_array_62_t ivar_485;
                 ivar_485 = (ltepeg_array_62_t)ivar_484->elems[ivar_31];
                 ivar_485->count++;
                 ltepeg_array_63_t ivar_492;
                 ltepeg_array_62_t ivar_494;
                 ivar_494 = NULL;
                 ivar_492 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_484, ivar_31, ivar_494);
                 if (ivar_494 != NULL) ivar_494->count--;
                 ltepeg_array_62_t ivar_493;
                 ltepeg_array_62_t ivar_488;
                 ltepeg__ent_adt_t ivar_490;
                 ivar_490 = NULL;
                 ivar_488 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_485, ivar_35, ivar_490);
                 if (ivar_490 != NULL) ivar_490->count--;
                 ivar_493 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_488, ivar_35, ivar_476);
                 if (ivar_476 != NULL) ivar_476->count--;
                 ivar_496 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_492, ivar_31, ivar_493);
                 if (ivar_493 != NULL) ivar_493->count--;
                 ivar_498 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_495, ivar_496);
                 if (ivar_496 != NULL) ivar_496->count--;
                 ltepeg_record_101_t ivar_502;
                 ivar_502 = (ltepeg_record_101_t)update_ltepeg_record_101_depth(ivar_498, ivar_477);
                 ltepeg_record_101_t ivar_507;
                 ltepeg_record_101_t ivar_504;
                 ltepeg__ent_adt_t ivar_506;
                 ivar_506 = NULL;
                 ivar_504 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_502, ivar_506);
                 if (ivar_506 != NULL) ivar_506->count--;
                 ivar_507 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_504, ivar_39);
                 if (ivar_39 != NULL) ivar_39->count--;
                 result = (ltepeg_record_101_t)update_ltepeg_record_101_lflag(ivar_507, ivar_479);
};
};
};
} else {
             
              release_ltepeg_array_63(ivar_12);
              bool_t ivar_746;
              ivar_296->count++;
              ivar_746 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_296);
              if (ivar_746){       
               release_ltepeg__ent_adt(ivar_17);
               uint64_t ivar_516;
               ivar_296->count++;
               ivar_516 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_296);
               uint32_t ivar_517;
               ivar_517 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_296);
               ltepeg__ent_adt_t ivar_524;
               ltepeg_array_62_t ivar_527;
               ltepeg_array_63_t ivar_534;
               ivar_534 = (ltepeg_array_63_t)ivar_9->scaf;
               ivar_534->count++;
               uint32_t ivar_537;
               ivar_537 = (uint32_t)(ivar_31 + ivar_517);
               ivar_527 = (ltepeg_array_62_t)ivar_534->elems[ivar_537];
               ivar_527->count++;
               release_ltepeg_array_63(ivar_534);
               ivar_524 = (ltepeg__ent_adt_t)ivar_527->elems[ivar_285];
               ivar_524->count++;
               release_ltepeg_array_62(ivar_527);
               bool_t ivar_588;
               ivar_524->count++;
               ivar_588 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_524);
               if (ivar_588){        
                uint64_t ivar_539;
                ivar_539 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_524);
                ltepeg__ent_adt_t ivar_544;
                mpz_ptr_t ivar_559;
                uint8_t ivar_548;
                ivar_548 = (uint8_t)1;
                mpq_ptr_t ivar_549;
                mpq_ptr_t ivar_553;
                //copying to mpq from uint64;
                mpq_mk_set_ui(ivar_553, ivar_516);
                mpq_ptr_t ivar_554;
                //copying to mpq from uint64;
                mpq_mk_set_ui(ivar_554, ivar_539);
                ivar_549 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_553, (mpq_ptr_t)ivar_554);
                mpz_mk_set_q(ivar_559, ivar_549);
                mpz_add_ui(ivar_559, ivar_559, ivar_548);
                uint64_t ivar_557;
                //copying to uint64 from mpz;
                ivar_557 = (uint64_t)mpz_get_ui(ivar_559);
                mpz_clear(ivar_559);
                ivar_544 = (ltepeg__ent_adt_t)ltepeg__fail((uint64_t)ivar_557);
                uint64_t ivar_546;
                uint8_t ivar_561;
                ivar_561 = (uint8_t)1;
                ivar_546 = (uint64_t)(ivar_20 - ivar_561);
                ltepeg_record_101_t ivar_578;
                ltepeg_array_63_t ivar_564;
                ivar_564 = (ltepeg_array_63_t)ivar_9->scaf;
                ivar_564->count++;
                ltepeg_record_101_t ivar_575;
                ltepeg_array_63_t ivar_577;
                ivar_577 = NULL;
                ivar_575 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_9, ivar_577);
                if (ivar_577 != NULL) ivar_577->count--;
                ltepeg_array_63_t ivar_576;
                ltepeg_array_62_t ivar_565;
                ivar_565 = (ltepeg_array_62_t)ivar_564->elems[ivar_31];
                ivar_565->count++;
                ltepeg_array_63_t ivar_572;
                ltepeg_array_62_t ivar_574;
                ivar_574 = NULL;
                ivar_572 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_564, ivar_31, ivar_574);
                if (ivar_574 != NULL) ivar_574->count--;
                ltepeg_array_62_t ivar_573;
                ltepeg_array_62_t ivar_568;
                ltepeg__ent_adt_t ivar_570;
                ivar_570 = NULL;
                ivar_568 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_565, ivar_35, ivar_570);
                if (ivar_570 != NULL) ivar_570->count--;
                ivar_573 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_568, ivar_35, ivar_544);
                if (ivar_544 != NULL) ivar_544->count--;
                ivar_576 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_572, ivar_31, ivar_573);
                if (ivar_573 != NULL) ivar_573->count--;
                ivar_578 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_575, ivar_576);
                if (ivar_576 != NULL) ivar_576->count--;
                ltepeg_record_101_t ivar_583;
                ltepeg_record_101_t ivar_580;
                ltepeg__ent_adt_t ivar_582;
                ivar_582 = NULL;
                ivar_580 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_578, ivar_582);
                if (ivar_582 != NULL) ivar_582->count--;
                ivar_583 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_580, ivar_39);
                if (ivar_39 != NULL) ivar_39->count--;
                result = (ltepeg_record_101_t)update_ltepeg_record_101_depth(ivar_583, ivar_546);
} else {
               
                bool_t ivar_652;
                ivar_524->count++;
                ivar_652 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_524);
                if (ivar_652){         
                 uint64_t ivar_592;
                 ivar_524->count++;
                 ivar_592 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_524);
                 uint32_t ivar_593;
                 ivar_593 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_524);
                 ltepeg__ent_adt_t ivar_601;
                 mpz_ptr_t ivar_623;
                 uint8_t ivar_606;
                 ivar_606 = (uint8_t)1;
                 mpq_ptr_t ivar_607;
                 mpq_ptr_t ivar_611;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_611, ivar_516);
                 mpq_ptr_t ivar_612;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_612, ivar_592);
                 ivar_607 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_611, (mpq_ptr_t)ivar_612);
                 mpz_mk_set_q(ivar_623, ivar_607);
                 mpz_add_ui(ivar_623, ivar_623, ivar_606);
                 uint64_t ivar_618;
                 //copying to uint64 from mpz;
                 ivar_618 = (uint64_t)mpz_get_ui(ivar_623);
                 mpz_clear(ivar_623);
                 mpq_ptr_t ivar_622;
                 mpz_t tmp91380;
                 mpz_init(tmp91380);
                 mpz_set_ui(tmp91380, (uint64_t)ivar_517);
                 mpz_add_ui(tmp91380, tmp91380, (uint64_t)ivar_593);
                 mpq_mk_set_z(ivar_622, tmp91380);
                 mpz_clear(tmp91380);
                 uint32_t ivar_619;
                 //copying to uint32 from mpq;
                 ivar_619 = (uint32_t)mpq_get_ui(ivar_622);
                 mpq_clear(ivar_622);
                 ivar_601 = (ltepeg__ent_adt_t)ltepeg__good((uint64_t)ivar_618, (uint32_t)ivar_619);
                 uint64_t ivar_603;
                 uint8_t ivar_625;
                 ivar_625 = (uint8_t)1;
                 ivar_603 = (uint64_t)(ivar_20 - ivar_625);
                 ltepeg_record_101_t ivar_642;
                 ltepeg_array_63_t ivar_628;
                 ivar_628 = (ltepeg_array_63_t)ivar_9->scaf;
                 ivar_628->count++;
                 ltepeg_record_101_t ivar_639;
                 ltepeg_array_63_t ivar_641;
                 ivar_641 = NULL;
                 ivar_639 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_9, ivar_641);
                 if (ivar_641 != NULL) ivar_641->count--;
                 ltepeg_array_63_t ivar_640;
                 ltepeg_array_62_t ivar_629;
                 ivar_629 = (ltepeg_array_62_t)ivar_628->elems[ivar_31];
                 ivar_629->count++;
                 ltepeg_array_63_t ivar_636;
                 ltepeg_array_62_t ivar_638;
                 ivar_638 = NULL;
                 ivar_636 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_628, ivar_31, ivar_638);
                 if (ivar_638 != NULL) ivar_638->count--;
                 ltepeg_array_62_t ivar_637;
                 ltepeg_array_62_t ivar_632;
                 ltepeg__ent_adt_t ivar_634;
                 ivar_634 = NULL;
                 ivar_632 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_629, ivar_35, ivar_634);
                 if (ivar_634 != NULL) ivar_634->count--;
                 ivar_637 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_632, ivar_35, ivar_601);
                 if (ivar_601 != NULL) ivar_601->count--;
                 ivar_640 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_636, ivar_31, ivar_637);
                 if (ivar_637 != NULL) ivar_637->count--;
                 ivar_642 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_639, ivar_640);
                 if (ivar_640 != NULL) ivar_640->count--;
                 ltepeg_record_101_t ivar_647;
                 ltepeg_record_101_t ivar_644;
                 ltepeg__ent_adt_t ivar_646;
                 ivar_646 = NULL;
                 ivar_644 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_642, ivar_646);
                 if (ivar_646 != NULL) ivar_646->count--;
                 ivar_647 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_644, ivar_39);
                 if (ivar_39 != NULL) ivar_39->count--;
                 result = (ltepeg_record_101_t)update_ltepeg_record_101_depth(ivar_647, ivar_603);
} else {
                
                 bool_t ivar_705;
                 ivar_705 = (bool_t)r_ltepeg__pendingp((ltepeg__ent_adt_t)ivar_524);
                 if (ivar_705){          
                  release_ltepeg__ent_adt(ivar_39);
                  ltepeg__ent_adt_t ivar_657;
                  mpq_ptr_t ivar_669;
                  mpz_t tmp91488;
                  mpz_init(tmp91488);
                  mpz_set_ui(tmp91488, (uint64_t)ivar_31);
                  mpz_add_ui(tmp91488, tmp91488, (uint64_t)ivar_517);
                  mpq_mk_set_z(ivar_669, tmp91488);
                  mpz_clear(tmp91488);
                  uint32_t ivar_666;
                  //copying to uint32 from mpq;
                  ivar_666 = (uint32_t)mpq_get_ui(ivar_669);
                  mpq_clear(ivar_669);
                  ivar_657 = (ltepeg__ent_adt_t)ltepeg__push((uint32_t)ivar_666, (uint8_t)ivar_285);
                  uint64_t ivar_658;
                  uint64_t ivar_670;
                  ivar_670 = (uint64_t)ivar_9->depth;
                  uint8_t ivar_671;
                  ivar_671 = (uint8_t)1;
                  ivar_658 = (uint64_t)(ivar_670 + ivar_671);
                  ltepeg__ent_adt_t ivar_659;
                  ivar_659 = (ltepeg__ent_adt_t)ivar_9->stack;
                  ivar_659->count++;
                  ltepeg_record_101_t ivar_682;
                  ltepeg_record_101_t ivar_679;
                  ltepeg__ent_adt_t ivar_681;
                  ivar_681 = NULL;
                  ivar_679 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_9, ivar_681);
                  if (ivar_681 != NULL) ivar_681->count--;
                  ivar_682 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_679, ivar_657);
                  if (ivar_657 != NULL) ivar_657->count--;
                  ltepeg_record_101_t ivar_686;
                  ivar_686 = (ltepeg_record_101_t)update_ltepeg_record_101_depth(ivar_682, ivar_658);
                  ltepeg_array_63_t ivar_687;
                  ivar_687 = (ltepeg_array_63_t)ivar_686->scaf;
                  ivar_687->count++;
                  ltepeg_record_101_t ivar_701;
                  ltepeg_array_63_t ivar_703;
                  ivar_703 = NULL;
                  ivar_701 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_686, ivar_703);
                  if (ivar_703 != NULL) ivar_703->count--;
                  ltepeg_array_63_t ivar_702;
                  uint32_t ivar_694;
                  ivar_694 = (uint32_t)(ivar_31 + ivar_517);
                  ltepeg_array_62_t ivar_688;
                  ivar_688 = (ltepeg_array_62_t)ivar_687->elems[ivar_694];
                  ivar_688->count++;
                  ltepeg_array_63_t ivar_698;
                  ltepeg_array_62_t ivar_700;
                  ivar_700 = NULL;
                  ivar_698 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_687, ivar_694, ivar_700);
                  if (ivar_700 != NULL) ivar_700->count--;
                  ltepeg_array_62_t ivar_699;
                  ltepeg_array_62_t ivar_691;
                  ltepeg__ent_adt_t ivar_693;
                  ivar_693 = NULL;
                  ivar_691 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_688, ivar_285, ivar_693);
                  if (ivar_693 != NULL) ivar_693->count--;
                  ivar_699 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_691, ivar_285, ivar_659);
                  if (ivar_659 != NULL) ivar_659->count--;
                  ivar_702 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_698, ivar_694, ivar_699);
                  if (ivar_699 != NULL) ivar_699->count--;
                  result = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_701, ivar_702);
                  if (ivar_702 != NULL) ivar_702->count--;
} else {
                 
                  ltepeg__ent_adt_t ivar_710;
                  ivar_710 = (ltepeg__ent_adt_t)ltepeg__loop();
                  if (ivar_710 != NULL) ivar_710->count++;
                  uint64_t ivar_711;
                  uint8_t ivar_715;
                  ivar_715 = (uint8_t)1;
                  ivar_711 = (uint64_t)(ivar_20 - ivar_715);
                  bool_t ivar_713;
                  ivar_713 = (bool_t) true;
                  ltepeg_record_101_t ivar_732;
                  ltepeg_array_63_t ivar_718;
                  ivar_718 = (ltepeg_array_63_t)ivar_9->scaf;
                  ivar_718->count++;
                  ltepeg_record_101_t ivar_729;
                  ltepeg_array_63_t ivar_731;
                  ivar_731 = NULL;
                  ivar_729 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_9, ivar_731);
                  if (ivar_731 != NULL) ivar_731->count--;
                  ltepeg_array_63_t ivar_730;
                  ltepeg_array_62_t ivar_719;
                  ivar_719 = (ltepeg_array_62_t)ivar_718->elems[ivar_31];
                  ivar_719->count++;
                  ltepeg_array_63_t ivar_726;
                  ltepeg_array_62_t ivar_728;
                  ivar_728 = NULL;
                  ivar_726 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_718, ivar_31, ivar_728);
                  if (ivar_728 != NULL) ivar_728->count--;
                  ltepeg_array_62_t ivar_727;
                  ltepeg_array_62_t ivar_722;
                  ltepeg__ent_adt_t ivar_724;
                  ivar_724 = NULL;
                  ivar_722 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_719, ivar_35, ivar_724);
                  if (ivar_724 != NULL) ivar_724->count--;
                  ivar_727 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_722, ivar_35, ivar_710);
                  if (ivar_710 != NULL) ivar_710->count--;
                  ivar_730 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_726, ivar_31, ivar_727);
                  if (ivar_727 != NULL) ivar_727->count--;
                  ivar_732 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_729, ivar_730);
                  if (ivar_730 != NULL) ivar_730->count--;
                  ltepeg_record_101_t ivar_736;
                  ivar_736 = (ltepeg_record_101_t)update_ltepeg_record_101_depth(ivar_732, ivar_711);
                  ltepeg_record_101_t ivar_741;
                  ltepeg_record_101_t ivar_738;
                  ltepeg__ent_adt_t ivar_740;
                  ivar_740 = NULL;
                  ivar_738 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_736, ivar_740);
                  if (ivar_740 != NULL) ivar_740->count--;
                  ivar_741 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_738, ivar_39);
                  if (ivar_39 != NULL) ivar_39->count--;
                  result = (ltepeg_record_101_t)update_ltepeg_record_101_lflag(ivar_741, ivar_713);
};
};
};
} else {
              
               bool_t ivar_787;
               ivar_787 = (bool_t)r_ltepeg__pendingp((ltepeg__ent_adt_t)ivar_296);
               if (ivar_787){        
                release_ltepeg__ent_adt(ivar_39);
                ltepeg__ent_adt_t ivar_751;
                ivar_751 = (ltepeg__ent_adt_t)ltepeg__push((uint32_t)ivar_31, (uint8_t)ivar_284);
                uint64_t ivar_752;
                uint8_t ivar_760;
                ivar_760 = (uint8_t)1;
                ivar_752 = (uint64_t)(ivar_20 + ivar_760);
                ltepeg_record_101_t ivar_767;
                ltepeg_record_101_t ivar_764;
                ltepeg__ent_adt_t ivar_766;
                ivar_766 = NULL;
                ivar_764 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_9, ivar_766);
                if (ivar_766 != NULL) ivar_766->count--;
                ivar_767 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_764, ivar_751);
                if (ivar_751 != NULL) ivar_751->count--;
                ltepeg_record_101_t ivar_771;
                ivar_771 = (ltepeg_record_101_t)update_ltepeg_record_101_depth(ivar_767, ivar_752);
                ltepeg_array_63_t ivar_772;
                ivar_772 = (ltepeg_array_63_t)ivar_771->scaf;
                ivar_772->count++;
                ltepeg_record_101_t ivar_783;
                ltepeg_array_63_t ivar_785;
                ivar_785 = NULL;
                ivar_783 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_771, ivar_785);
                if (ivar_785 != NULL) ivar_785->count--;
                ltepeg_array_63_t ivar_784;
                ltepeg_array_62_t ivar_773;
                ivar_773 = (ltepeg_array_62_t)ivar_772->elems[ivar_31];
                ivar_773->count++;
                ltepeg_array_63_t ivar_780;
                ltepeg_array_62_t ivar_782;
                ivar_782 = NULL;
                ivar_780 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_772, ivar_31, ivar_782);
                if (ivar_782 != NULL) ivar_782->count--;
                ltepeg_array_62_t ivar_781;
                ltepeg_array_62_t ivar_776;
                ltepeg__ent_adt_t ivar_778;
                ivar_778 = NULL;
                ivar_776 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_773, ivar_284, ivar_778);
                if (ivar_778 != NULL) ivar_778->count--;
                ivar_781 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_776, ivar_284, ivar_17);
                if (ivar_17 != NULL) ivar_17->count--;
                ivar_784 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_780, ivar_31, ivar_781);
                if (ivar_781 != NULL) ivar_781->count--;
                result = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_783, ivar_784);
                if (ivar_784 != NULL) ivar_784->count--;
} else {
               
                release_ltepeg__ent_adt(ivar_17);
                ltepeg__ent_adt_t ivar_792;
                ivar_792 = (ltepeg__ent_adt_t)ltepeg__loop();
                if (ivar_792 != NULL) ivar_792->count++;
                uint64_t ivar_793;
                uint8_t ivar_797;
                ivar_797 = (uint8_t)1;
                ivar_793 = (uint64_t)(ivar_20 - ivar_797);
                bool_t ivar_795;
                ivar_795 = (bool_t) true;
                ltepeg_record_101_t ivar_814;
                ltepeg_array_63_t ivar_800;
                ivar_800 = (ltepeg_array_63_t)ivar_9->scaf;
                ivar_800->count++;
                ltepeg_record_101_t ivar_811;
                ltepeg_array_63_t ivar_813;
                ivar_813 = NULL;
                ivar_811 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_9, ivar_813);
                if (ivar_813 != NULL) ivar_813->count--;
                ltepeg_array_63_t ivar_812;
                ltepeg_array_62_t ivar_801;
                ivar_801 = (ltepeg_array_62_t)ivar_800->elems[ivar_31];
                ivar_801->count++;
                ltepeg_array_63_t ivar_808;
                ltepeg_array_62_t ivar_810;
                ivar_810 = NULL;
                ivar_808 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_800, ivar_31, ivar_810);
                if (ivar_810 != NULL) ivar_810->count--;
                ltepeg_array_62_t ivar_809;
                ltepeg_array_62_t ivar_804;
                ltepeg__ent_adt_t ivar_806;
                ivar_806 = NULL;
                ivar_804 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_801, ivar_35, ivar_806);
                if (ivar_806 != NULL) ivar_806->count--;
                ivar_809 = (ltepeg_array_62_t)update_ltepeg_array_62(ivar_804, ivar_35, ivar_792);
                if (ivar_792 != NULL) ivar_792->count--;
                ivar_812 = (ltepeg_array_63_t)update_ltepeg_array_63(ivar_808, ivar_31, ivar_809);
                if (ivar_809 != NULL) ivar_809->count--;
                ivar_814 = (ltepeg_record_101_t)update_ltepeg_record_101_scaf(ivar_811, ivar_812);
                if (ivar_812 != NULL) ivar_812->count--;
                ltepeg_record_101_t ivar_818;
                ivar_818 = (ltepeg_record_101_t)update_ltepeg_record_101_depth(ivar_814, ivar_793);
                ltepeg_record_101_t ivar_823;
                ltepeg_record_101_t ivar_820;
                ltepeg__ent_adt_t ivar_822;
                ivar_822 = NULL;
                ivar_820 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_818, ivar_822);
                if (ivar_822 != NULL) ivar_822->count--;
                ivar_823 = (ltepeg_record_101_t)update_ltepeg_record_101_stack(ivar_820, ivar_39);
                if (ivar_39 != NULL) ivar_39->count--;
                result = (ltepeg_record_101_t)update_ltepeg_record_101_lflag(ivar_823, ivar_795);
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

ltepeg_closure_103_t new_ltepeg_closure_103(void){
        static struct ltepeg_funtype_102_ftbl_s ftbl = {.fptr = (ltepeg_record_101_t (*)(ltepeg_funtype_102_t, ltepeg_record_101_t))&f_ltepeg_closure_103, .mptr = (ltepeg_record_101_t (*)(ltepeg_funtype_102_t, ltepeg_record_101_t))&m_ltepeg_closure_103, .rptr =  (void (*)(ltepeg_funtype_102_t))&release_ltepeg_closure_103, .cptr = (ltepeg_funtype_102_t (*)(ltepeg_funtype_102_t))&copy_ltepeg_closure_103};
        ltepeg_closure_103_t tmp = (ltepeg_closure_103_t) safe_malloc(sizeof(struct ltepeg_closure_103_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_103(ltepeg_funtype_102_t closure){
        ltepeg_closure_103_t x = (ltepeg_closure_103_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_array_83(x->fvar_2);
         release_ltepeg__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_103_t copy_ltepeg_closure_103(ltepeg_closure_103_t x){
        ltepeg_closure_103_t y = new_ltepeg_closure_103();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltepeg_funtype_102_htbl_t new_htbl = (ltepeg_funtype_102_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_102_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_102_hashentry_t * new_data = (ltepeg_funtype_102_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_102_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_102_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepeg_array_104_t new_ltepeg_array_104(uint32_t size){
        ltepeg_array_104_t tmp = (ltepeg_array_104_t) safe_malloc(sizeof(struct ltepeg_array_104_s) + (size * sizeof(ltepeg__ent_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_ltepeg_array_104(ltepeg_array_104_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_ltepeg__ent_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_ltepeg_array_104_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_array_104((ltepeg_array_104_t)x);
}

ltepeg_array_104_t copy_ltepeg_array_104(ltepeg_array_104_t x){
        ltepeg_array_104_t tmp = new_ltepeg_array_104(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ltepeg_array_104(ltepeg_array_104_t x, ltepeg_array_104_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_ltepeg__ent_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_ltepeg_array_104(ltepeg_array_104_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_ltepeg__ent_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltepeg_array_104_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltepeg_array_104((ltepeg_array_104_t)x, (ltepeg_array_104_t)y);
}

char * json_ltepeg_array_104_ptr(pointer_t x, type_actual_t T){
        return json_ltepeg_array_104((ltepeg_array_104_t)x);
}

actual_ltepeg_array_104_t actual_ltepeg_array_104(){
        actual_ltepeg_array_104_t new = (actual_ltepeg_array_104_t)safe_malloc(sizeof(struct actual_ltepeg_array_104_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_array_104_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_array_104_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_array_104_ptr);
 

 
        return new;
 };

ltepeg_array_104_t update_ltepeg_array_104(ltepeg_array_104_t x, uint32_t i, ltepeg__ent_adt_t v){
         ltepeg_array_104_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ltepeg_array_104(x);
                      x->count--;};
        ltepeg__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepeg__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

ltepeg_array_104_t upgrade_ltepeg_array_104(ltepeg_array_104_t x, uint32_t i, ltepeg__ent_adt_t v){
         ltepeg_array_104_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltepeg_array_104_s) + (newmax * sizeof(ltepeg__ent_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltepeg_array_104(x);} else {y = copy_ltepeg_array_104(x);
                      x->count--;};
        ltepeg__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepeg__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}



void release_ltepeg_funtype_105(ltepeg_funtype_105_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_105_t copy_ltepeg_funtype_105(ltepeg_funtype_105_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepeg_funtype_105(ltepeg_funtype_105_t x, ltepeg_funtype_105_t y){
        return false;}

char* json_ltepeg_funtype_105(ltepeg_funtype_105_t x){char * result = safe_malloc(28); sprintf(result, "%s", "\"ltepeg_funtype_105\""); return result;}


ordstruct_adt__ordstruct_adt_t f_ltepeg_closure_106(struct ltepeg_closure_106_s * closure, ltepeg_record_101_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_ltepeg_closure_106(bvar, closure->fvar_1); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_ltepeg_closure_106(struct ltepeg_closure_106_s * closure, ltepeg_record_101_t bvar){
        return h_ltepeg_closure_106(bvar, closure->fvar_1);}

extern ordstruct_adt__ordstruct_adt_t h_ltepeg_closure_106(ltepeg_record_101_t ivar_8, uint32_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        uint64_t ivar_45;
        ltepeg_array_63_t ivar_25;
        ivar_25 = (ltepeg_array_63_t)ivar_8->scaf;
        ivar_25->count++;
        ltepeg_funtype_56_t ivar_27;
        ltepeg_closure_107_t cl92061;
        cl92061 = new_ltepeg_closure_107();
        ivar_27 = (ltepeg_funtype_56_t)cl92061;
        ivar_45 = (uint64_t)ltepeg__scafcount((uint32_t)ivar_1, (ltepeg_array_63_t)ivar_25, (ltepeg_funtype_56_t)ivar_27, (uint32_t)ivar_1);
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
        ivar_33 = (uint8_t)ltepeg__num_non_terminals();
        ivar_30 = (uint64_t)((uint64_t)ivar_32 * (uint64_t)ivar_33);
        uint64_t ivar_31;
        ivar_31 = (uint64_t)ivar_8->depth;
        release_ltepeg_record_101(ivar_8);
        mpz_mk_set_ui(ivar_43, (uint64_t)ivar_30);
        mpz_sub_ui(ivar_43, ivar_43, (uint64_t)ivar_31);
        result = (ordstruct_adt__ordstruct_adt_t)lex2__lex2((mpz_ptr_t)ivar_42, (mpz_ptr_t)ivar_43);

        return result;
}

ltepeg_closure_106_t new_ltepeg_closure_106(void){
        static struct ltepeg_funtype_105_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepeg_funtype_105_t, ltepeg_record_101_t))&f_ltepeg_closure_106, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepeg_funtype_105_t, ltepeg_record_101_t))&m_ltepeg_closure_106, .rptr =  (void (*)(ltepeg_funtype_105_t))&release_ltepeg_closure_106, .cptr = (ltepeg_funtype_105_t (*)(ltepeg_funtype_105_t))&copy_ltepeg_closure_106};
        ltepeg_closure_106_t tmp = (ltepeg_closure_106_t) safe_malloc(sizeof(struct ltepeg_closure_106_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_106(ltepeg_funtype_105_t closure){
        ltepeg_closure_106_t x = (ltepeg_closure_106_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_106_t copy_ltepeg_closure_106(ltepeg_closure_106_t x){
        ltepeg_closure_106_t y = new_ltepeg_closure_106();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        if (x->htbl != NULL){
            ltepeg_funtype_105_htbl_t new_htbl = (ltepeg_funtype_105_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_105_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_105_hashentry_t * new_data = (ltepeg_funtype_105_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_105_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_105_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_ltepeg_closure_107(struct ltepeg_closure_107_s * closure, ltepeg__ent_adt_t bvar){
        bool_t result = h_ltepeg_closure_107(bvar); 
        return result;}

bool_t m_ltepeg_closure_107(struct ltepeg_closure_107_s * closure, ltepeg__ent_adt_t bvar){
        return h_ltepeg_closure_107(bvar);}

extern bool_t h_ltepeg_closure_107(ltepeg__ent_adt_t ivar_19){
        bool_t result;
        result = (bool_t)ltepeg__push_or_pendingp((ltepeg__ent_adt_t)ivar_19);

        return result;
}

ltepeg_closure_107_t new_ltepeg_closure_107(void){
        static struct ltepeg_funtype_56_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&f_ltepeg_closure_107, .mptr = (bool_t (*)(ltepeg_funtype_56_t, ltepeg__ent_adt_t))&m_ltepeg_closure_107, .rptr =  (void (*)(ltepeg_funtype_56_t))&release_ltepeg_closure_107, .cptr = (ltepeg_funtype_56_t (*)(ltepeg_funtype_56_t))&copy_ltepeg_closure_107};
        ltepeg_closure_107_t tmp = (ltepeg_closure_107_t) safe_malloc(sizeof(struct ltepeg_closure_107_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_107(ltepeg_funtype_56_t closure){
        ltepeg_closure_107_t x = (ltepeg_closure_107_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_107_t copy_ltepeg_closure_107(ltepeg_closure_107_t x){
        ltepeg_closure_107_t y = new_ltepeg_closure_107();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            ltepeg_funtype_56_htbl_t new_htbl = (ltepeg_funtype_56_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_56_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_56_hashentry_t * new_data = (ltepeg_funtype_56_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_56_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepeg_funtype_108(ltepeg_funtype_108_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_108_t copy_ltepeg_funtype_108(ltepeg_funtype_108_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltepeg_funtype_108(ltepeg_funtype_108_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltepeg_funtype_108_hashentry_t data = htbl->data[hashindex];
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

ltepeg_funtype_108_t dupdate_ltepeg_funtype_108(ltepeg_funtype_108_t a, uint8_t i, ltepeg__ent_adt_t v){
        ltepeg_funtype_108_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltepeg_funtype_108_htbl_t)safe_malloc(sizeof(struct ltepeg_funtype_108_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltepeg_funtype_108_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltepeg_funtype_108_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltepeg_funtype_108_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltepeg_funtype_108_hashentry_t * new_data = (ltepeg_funtype_108_hashentry_t *)safe_malloc(new_size * sizeof(struct ltepeg_funtype_108_hashentry_s));
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
                                new_data[new_loc].value = (ltepeg__ent_adt_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_ltepeg_funtype_108(htbl, i, ihash);
        ltepeg_funtype_108_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ltepeg__ent_adt_t)v; htbl->num_entries++;}
            else {ltepeg__ent_adt_t tempvalue;tempvalue = (ltepeg__ent_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ltepeg__ent_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ltepeg__ent_adt(tempvalue);};
        return a;

}

ltepeg_funtype_108_t update_ltepeg_funtype_108(ltepeg_funtype_108_t a, uint8_t i, ltepeg__ent_adt_t v){
        if (a->count == 1){
                return dupdate_ltepeg_funtype_108(a, i, v);
            } else {
                ltepeg_funtype_108_t x = copy_ltepeg_funtype_108(a);
                a->count--;
                return dupdate_ltepeg_funtype_108(x, i, v);
            }}

bool_t equal_ltepeg_funtype_108(ltepeg_funtype_108_t x, ltepeg_funtype_108_t y){
        return false;}

char* json_ltepeg_funtype_108(ltepeg_funtype_108_t x){char * result = safe_malloc(28); sprintf(result, "%s", "\"ltepeg_funtype_108\""); return result;}


ltepeg__ent_adt_t f_ltepeg_closure_109(struct ltepeg_closure_109_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        ltepeg_funtype_108_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_ltepeg_funtype_108(htbl, bvar, hash);
        ltepeg_funtype_108_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            ltepeg__ent_adt_t result;
            result = (ltepeg__ent_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_ltepeg_closure_109(bvar);};

return h_ltepeg_closure_109(bvar);}

ltepeg__ent_adt_t m_ltepeg_closure_109(struct ltepeg_closure_109_s * closure, uint8_t bvar){
        return h_ltepeg_closure_109(bvar);}

extern ltepeg__ent_adt_t h_ltepeg_closure_109(uint8_t ivar_9){
        ltepeg__ent_adt_t result;
        result = (ltepeg__ent_adt_t)ltepeg__pending();
        if (result != NULL) result->count++;

        return result;
}

ltepeg_closure_109_t new_ltepeg_closure_109(void){
        static struct ltepeg_funtype_108_ftbl_s ftbl = {.fptr = (ltepeg__ent_adt_t (*)(ltepeg_funtype_108_t, uint8_t))&f_ltepeg_closure_109, .mptr = (ltepeg__ent_adt_t (*)(ltepeg_funtype_108_t, uint8_t))&m_ltepeg_closure_109, .rptr =  (void (*)(ltepeg_funtype_108_t))&release_ltepeg_closure_109, .cptr = (ltepeg_funtype_108_t (*)(ltepeg_funtype_108_t))&copy_ltepeg_closure_109};
        ltepeg_closure_109_t tmp = (ltepeg_closure_109_t) safe_malloc(sizeof(struct ltepeg_closure_109_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_109(ltepeg_funtype_108_t closure){
        ltepeg_closure_109_t x = (ltepeg_closure_109_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_109_t copy_ltepeg_closure_109(ltepeg_closure_109_t x){
        ltepeg_closure_109_t y = new_ltepeg_closure_109();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            ltepeg_funtype_108_htbl_t new_htbl = (ltepeg_funtype_108_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_108_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_108_hashentry_t * new_data = (ltepeg_funtype_108_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_108_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_108_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepeg_funtype_110(ltepeg_funtype_110_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepeg_funtype_110_t copy_ltepeg_funtype_110(ltepeg_funtype_110_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltepeg_funtype_110(ltepeg_funtype_110_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltepeg_funtype_110_hashentry_t data = htbl->data[hashindex];
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

ltepeg_funtype_110_t dupdate_ltepeg_funtype_110(ltepeg_funtype_110_t a, uint32_t i, ltepeg_funtype_108_t v){
        ltepeg_funtype_110_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltepeg_funtype_110_htbl_t)safe_malloc(sizeof(struct ltepeg_funtype_110_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltepeg_funtype_110_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltepeg_funtype_110_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltepeg_funtype_110_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltepeg_funtype_110_hashentry_t * new_data = (ltepeg_funtype_110_hashentry_t *)safe_malloc(new_size * sizeof(struct ltepeg_funtype_110_hashentry_s));
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
                                new_data[new_loc].value = (ltepeg_funtype_108_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_ltepeg_funtype_110(htbl, i, ihash);
        ltepeg_funtype_110_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ltepeg_funtype_108_t)v; htbl->num_entries++;}
            else {ltepeg_funtype_108_t tempvalue;tempvalue = (ltepeg_funtype_108_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ltepeg_funtype_108_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ltepeg_funtype_108(tempvalue);};
        return a;

}

ltepeg_funtype_110_t update_ltepeg_funtype_110(ltepeg_funtype_110_t a, uint32_t i, ltepeg_funtype_108_t v){
        if (a->count == 1){
                return dupdate_ltepeg_funtype_110(a, i, v);
            } else {
                ltepeg_funtype_110_t x = copy_ltepeg_funtype_110(a);
                a->count--;
                return dupdate_ltepeg_funtype_110(x, i, v);
            }}

bool_t equal_ltepeg_funtype_110(ltepeg_funtype_110_t x, ltepeg_funtype_110_t y){
        return false;}

char* json_ltepeg_funtype_110(ltepeg_funtype_110_t x){char * result = safe_malloc(28); sprintf(result, "%s", "\"ltepeg_funtype_110\""); return result;}


ltepeg_record_111_t new_ltepeg_record_111(void){
        ltepeg_record_111_t tmp = (ltepeg_record_111_t) safe_malloc(sizeof(struct ltepeg_record_111_s));
        tmp->count = 1;
        return tmp;}

void release_ltepeg_record_111(ltepeg_record_111_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg_funtype_110(x->scaf);
         release_ltepeg__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepeg_record_111_ptr(pointer_t x, type_actual_t T){
        release_ltepeg_record_111((ltepeg_record_111_t)x);
}

ltepeg_record_111_t copy_ltepeg_record_111(ltepeg_record_111_t x){
        ltepeg_record_111_t y = new_ltepeg_record_111();
        y->depth = (uint8_t)x->depth;
        y->lflag = (bool_t)x->lflag;
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepeg_record_111(ltepeg_record_111_t x, ltepeg_record_111_t y){
        bool_t tmp = true;
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && x->lflag == y->lflag;
        tmp = tmp && equal_ltepeg_funtype_110(x->scaf, y->scaf);
        tmp = tmp && equal_ltepeg__ent_adt(x->stack, y->stack);
        return tmp;}

char * json_ltepeg_record_111(ltepeg_record_111_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(17);
         sprintf(fld0, "\"depth\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->depth));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"lflag\" : ");
        tmp[1] = safe_strcat(fld1, json_bool(x->lflag));
        char * fld2 = safe_malloc(16);
         sprintf(fld2, "\"scaf\" : ");
        tmp[2] = safe_strcat(fld2, json_ltepeg_funtype_110(x->scaf));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"stack\" : ");
        tmp[3] = safe_strcat(fld3, json_ltepeg__ent_adt(x->stack));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepeg_record_111_ptr(pointer_t x, pointer_t y, actual_ltepeg_record_111_t T){
        return equal_ltepeg_record_111((ltepeg_record_111_t)x, (ltepeg_record_111_t)y);
}

char * json_ltepeg_record_111_ptr(pointer_t x, actual_ltepeg_record_111_t T){
        return json_ltepeg_record_111((ltepeg_record_111_t)x);
}

actual_ltepeg_record_111_t actual_ltepeg_record_111(){
        actual_ltepeg_record_111_t new = (actual_ltepeg_record_111_t)safe_malloc(sizeof(struct actual_ltepeg_record_111_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepeg_record_111_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepeg_record_111_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepeg_record_111_ptr);
 

 
        return new;
 };

ltepeg_record_111_t update_ltepeg_record_111_depth(ltepeg_record_111_t x, uint8_t v){
        ltepeg_record_111_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_111(x); x->count--;};
        y->depth = (uint8_t)v;
        return y;}

ltepeg_record_111_t update_ltepeg_record_111_lflag(ltepeg_record_111_t x, bool_t v){
        ltepeg_record_111_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepeg_record_111(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}

ltepeg_record_111_t update_ltepeg_record_111_scaf(ltepeg_record_111_t x, ltepeg_funtype_110_t v){
        ltepeg_record_111_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_ltepeg_funtype_110(x->scaf);};}
        else {y = copy_ltepeg_record_111(x); x->count--; y->scaf->count--;};
        y->scaf = (ltepeg_funtype_110_t)v;
        return y;}

ltepeg_record_111_t update_ltepeg_record_111_stack(ltepeg_record_111_t x, ltepeg__ent_adt_t v){
        ltepeg_record_111_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_ltepeg__ent_adt(x->stack);};}
        else {y = copy_ltepeg_record_111(x); x->count--; y->stack->count--;};
        y->stack = (ltepeg__ent_adt_t)v;
        return y;}




ltepeg_funtype_108_t f_ltepeg_closure_112(struct ltepeg_closure_112_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        ltepeg_funtype_110_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_ltepeg_funtype_110(htbl, bvar, hash);
        ltepeg_funtype_110_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            ltepeg_funtype_108_t result;
            result = (ltepeg_funtype_108_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_ltepeg_closure_112(bvar, closure->fvar_1, closure->fvar_2);};

return h_ltepeg_closure_112(bvar, closure->fvar_1, closure->fvar_2);}

ltepeg_funtype_108_t m_ltepeg_closure_112(struct ltepeg_closure_112_s * closure, uint32_t bvar){
        return h_ltepeg_closure_112(bvar, closure->fvar_1, closure->fvar_2);}

extern ltepeg_funtype_108_t h_ltepeg_closure_112(uint32_t ivar_22, uint32_t ivar_1, ltepeg_funtype_108_t ivar_5){
        ltepeg_funtype_108_t result;
        //copying to ltepeg_funtype_108 from ltepeg_funtype_108;
        result = (ltepeg_funtype_108_t)ivar_5;
        if (result != NULL) result->count++;

        return result;
}

ltepeg_closure_112_t new_ltepeg_closure_112(void){
        static struct ltepeg_funtype_110_ftbl_s ftbl = {.fptr = (ltepeg_funtype_108_t (*)(ltepeg_funtype_110_t, uint32_t))&f_ltepeg_closure_112, .mptr = (ltepeg_funtype_108_t (*)(ltepeg_funtype_110_t, uint32_t))&m_ltepeg_closure_112, .rptr =  (void (*)(ltepeg_funtype_110_t))&release_ltepeg_closure_112, .cptr = (ltepeg_funtype_110_t (*)(ltepeg_funtype_110_t))&copy_ltepeg_closure_112};
        ltepeg_closure_112_t tmp = (ltepeg_closure_112_t) safe_malloc(sizeof(struct ltepeg_closure_112_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepeg_closure_112(ltepeg_funtype_110_t closure){
        ltepeg_closure_112_t x = (ltepeg_closure_112_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg_funtype_108(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepeg_closure_112_t copy_ltepeg_closure_112(ltepeg_closure_112_t x){
        ltepeg_closure_112_t y = new_ltepeg_closure_112();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ltepeg_funtype_110_htbl_t new_htbl = (ltepeg_funtype_110_htbl_t) safe_malloc(sizeof(struct ltepeg_funtype_110_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepeg_funtype_110_hashentry_t * new_data = (ltepeg_funtype_110_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepeg_funtype_110_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepeg_funtype_110_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern uint8_t ltepeg__num_non_terminals(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint8_t)255;

        defined = true;};
        
        return result;
}

extern bool_t r_ltepeg__failp(ltepeg__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltepeg__ent_adt_index;
        release_ltepeg__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_ltepeg__pendingp(ltepeg__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltepeg__ent_adt_index;
        release_ltepeg__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_ltepeg__loopp(ltepeg__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)2;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltepeg__ent_adt_index;
        release_ltepeg__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_ltepeg__goodp(ltepeg__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)3;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltepeg__ent_adt_index;
        release_ltepeg__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_ltepeg__pushp(ltepeg__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)4;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltepeg__ent_adt_index;
        release_ltepeg__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern ltepeg__ent_adt_t update_ltepeg__ent_adt_dep(ltepeg__ent_adt_t ivar_1, uint64_t ivar_7){
        ltepeg__ent_adt_t  result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->ltepeg__ent_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)0;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             ltepeg__fail_t ivar_8;
             //copying to ltepeg__fail from ltepeg__ent_adt;
             ivar_8 = (ltepeg__fail_t)ivar_1;
             if (ivar_8 != NULL) ivar_8->count++;
             release_ltepeg__ent_adt(ivar_1);
             result = (ltepeg__ent_adt_t)update_ltepeg__fail_dep(ivar_8, ivar_7);
} else {
        
             ltepeg__good_t ivar_12;
             //copying to ltepeg__good from ltepeg__ent_adt;
             ivar_12 = (ltepeg__good_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_ltepeg__ent_adt(ivar_1);
             result = (ltepeg__ent_adt_t)update_ltepeg__good_dep(ivar_12, ivar_7);
};

        
        return result;
}

extern uint64_t ltepeg__ent_adt_dep(ltepeg__ent_adt_t ivar_1){
        uint64_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->ltepeg__ent_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)0;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             ltepeg__fail_t ivar_2;
             //copying to ltepeg__fail from ltepeg__ent_adt;
             ivar_2 = (ltepeg__fail_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_ltepeg__ent_adt(ivar_1);
             result = (uint64_t)ivar_2->dep;
             release_ltepeg__fail(ivar_2);
} else {
        
             ltepeg__good_t ivar_6;
             //copying to ltepeg__good from ltepeg__ent_adt;
             ivar_6 = (ltepeg__good_t)ivar_1;
             if (ivar_6 != NULL) ivar_6->count++;
             release_ltepeg__ent_adt(ivar_1);
             result = (uint64_t)ivar_6->dep;
             release_ltepeg__good(ivar_6);
};

        
        return result;
}

extern ltepeg__good_t update_ltepeg__ent_adt_span(ltepeg__ent_adt_t ivar_1, uint32_t ivar_3){
        ltepeg__good_t  result;
        ltepeg__good_t ivar_2;
        //copying to ltepeg__good from ltepeg__ent_adt;
        ivar_2 = (ltepeg__good_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepeg__ent_adt(ivar_1);
        result = (ltepeg__good_t)update_ltepeg__good_span(ivar_2, ivar_3);

        
        return result;
}

extern uint32_t ltepeg__ent_adt_span(ltepeg__ent_adt_t ivar_1){
        uint32_t  result;
        ltepeg__good_t ivar_2;
        //copying to ltepeg__good from ltepeg__ent_adt;
        ivar_2 = (ltepeg__good_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepeg__ent_adt(ivar_1);
        result = (uint32_t)ivar_2->span;
        release_ltepeg__good(ivar_2);

        
        return result;
}

extern ltepeg__push_t update_ltepeg__ent_adt_pos(ltepeg__ent_adt_t ivar_1, uint32_t ivar_3){
        ltepeg__push_t  result;
        ltepeg__push_t ivar_2;
        //copying to ltepeg__push from ltepeg__ent_adt;
        ivar_2 = (ltepeg__push_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepeg__ent_adt(ivar_1);
        result = (ltepeg__push_t)update_ltepeg__push_pos(ivar_2, ivar_3);

        
        return result;
}

extern uint32_t ltepeg__ent_adt_pos(ltepeg__ent_adt_t ivar_1){
        uint32_t  result;
        ltepeg__push_t ivar_2;
        //copying to ltepeg__push from ltepeg__ent_adt;
        ivar_2 = (ltepeg__push_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepeg__ent_adt(ivar_1);
        result = (uint32_t)ivar_2->pos;
        release_ltepeg__push(ivar_2);

        
        return result;
}

extern ltepeg__push_t update_ltepeg__ent_adt_nt(ltepeg__ent_adt_t ivar_1, uint8_t ivar_3){
        ltepeg__push_t  result;
        ltepeg__push_t ivar_2;
        //copying to ltepeg__push from ltepeg__ent_adt;
        ivar_2 = (ltepeg__push_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepeg__ent_adt(ivar_1);
        result = (ltepeg__push_t)update_ltepeg__push_nt(ivar_2, ivar_3);

        
        return result;
}

extern uint8_t ltepeg__ent_adt_nt(ltepeg__ent_adt_t ivar_1){
        uint8_t  result;
        ltepeg__push_t ivar_2;
        //copying to ltepeg__push from ltepeg__ent_adt;
        ivar_2 = (ltepeg__push_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepeg__ent_adt(ivar_1);
        result = (uint8_t)ivar_2->nt;
        release_ltepeg__push(ivar_2);

        
        return result;
}

extern ltepeg__ent_adt_t ltepeg__fail(uint64_t ivar_2){
        ltepeg__ent_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        ltepeg__fail_t tmp87081 = new_ltepeg__fail();;
        result = (ltepeg__ent_adt_t)tmp87081;
        tmp87081->ltepeg__ent_adt_index = (uint8_t)ivar_1;
        tmp87081->dep = (uint64_t)ivar_2;

        
        return result;
}

extern ltepeg__ent_adt_t ltepeg__pending(void){
        ltepeg__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        ltepeg__ent_adt_t tmp87087 = new_ltepeg__ent_adt();;
        result = (ltepeg__ent_adt_t)tmp87087;
        tmp87087->ltepeg__ent_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern ltepeg__ent_adt_t ltepeg__loop(void){
        ltepeg__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)2;
        ltepeg__ent_adt_t tmp87093 = new_ltepeg__ent_adt();;
        result = (ltepeg__ent_adt_t)tmp87093;
        tmp87093->ltepeg__ent_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern ltepeg__ent_adt_t ltepeg__good(uint64_t ivar_2, uint32_t ivar_3){
        ltepeg__ent_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)3;
        ltepeg__good_t tmp87103 = new_ltepeg__good();;
        result = (ltepeg__ent_adt_t)tmp87103;
        tmp87103->ltepeg__ent_adt_index = (uint8_t)ivar_1;
        tmp87103->dep = (uint64_t)ivar_2;
        tmp87103->span = (uint32_t)ivar_3;

        
        return result;
}

extern ltepeg__ent_adt_t ltepeg__push(uint32_t ivar_2, uint8_t ivar_3){
        ltepeg__ent_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)4;
        ltepeg__push_t tmp87113 = new_ltepeg__push();;
        result = (ltepeg__ent_adt_t)tmp87113;
        tmp87113->ltepeg__ent_adt_index = (uint8_t)ivar_1;
        tmp87113->pos = (uint32_t)ivar_2;
        tmp87113->nt = (uint8_t)ivar_3;

        
        return result;
}

extern ltepeg_funtype_4_t ltepeg__ent_ord(void){
        ltepeg_funtype_4_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

extern uint8_t ltepeg__ord__1(ltepeg__ent_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_7;
        ivar_1->count++;
        ivar_7 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_1);
        if (ivar_7){ 
             result = (uint8_t)0;
} else {
        
             bool_t ivar_11;
             ivar_1->count++;
             ivar_11 = (bool_t)r_ltepeg__pendingp((ltepeg__ent_adt_t)ivar_1);
             if (ivar_11){  
           release_ltepeg__ent_adt(ivar_1);
           result = (uint8_t)1;
} else {
             
           bool_t ivar_15;
           ivar_1->count++;
           ivar_15 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_1);
           if (ivar_15){   
           release_ltepeg__ent_adt(ivar_1);
           result = (uint8_t)2;
} else {
           
           bool_t ivar_27;
           ivar_1->count++;
           ivar_27 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_1);
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

extern bool_t ltepeg__subterm__1(ltepeg__ent_adt_t ivar_1, ltepeg__ent_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) equal_ltepeg__ent_adt(ivar_1, ivar_2);

        
        return result;
}

extern bool_t ltepeg__doublelessp__1(ltepeg__ent_adt_t ivar_1, ltepeg__ent_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) false;

        
        return result;
}

extern ltepeg_funtype_5_t ltepeg__reduce_nat__1(ltepeg_funtype_6_t ivar_1, mpz_ptr_t ivar_3, mpz_ptr_t ivar_4, ltepeg_funtype_8_t ivar_5, ltepeg_funtype_10_t ivar_7){
        ltepeg_funtype_5_t  result;
        ltepeg_closure_11_t cl87191;
        cl87191 = new_ltepeg_closure_11();
        cl87191->fvar_1 = (ltepeg_funtype_8_t)ivar_5;
        if (cl87191->fvar_1 != NULL) cl87191->fvar_1->count++;
        cl87191->fvar_2 = (ltepeg_funtype_10_t)ivar_7;
        if (cl87191->fvar_2 != NULL) cl87191->fvar_2->count++;
        mpz_set(cl87191->fvar_3, ivar_4);
        mpz_set(cl87191->fvar_4, ivar_3);
        cl87191->fvar_5 = (ltepeg_funtype_6_t)ivar_1;
        if (cl87191->fvar_5 != NULL) cl87191->fvar_5->count++;
        release_ltepeg_funtype_8(ivar_5);
        release_ltepeg_funtype_10(ivar_7);
        release_ltepeg_funtype_6(ivar_1);
        result = (ltepeg_funtype_5_t)cl87191;

        
        return result;
}

extern ltepeg_funtype_5_t ltepeg__REDUCE_nat__1(ltepeg_funtype_13_t ivar_1, ltepeg_funtype_5_t ivar_3, ltepeg_funtype_5_t ivar_5, ltepeg_funtype_15_t ivar_7, ltepeg_funtype_17_t ivar_9){
        ltepeg_funtype_5_t  result;
        ltepeg_closure_18_t cl87338;
        cl87338 = new_ltepeg_closure_18();
        cl87338->fvar_1 = (ltepeg_funtype_15_t)ivar_7;
        if (cl87338->fvar_1 != NULL) cl87338->fvar_1->count++;
        cl87338->fvar_2 = (ltepeg_funtype_17_t)ivar_9;
        if (cl87338->fvar_2 != NULL) cl87338->fvar_2->count++;
        cl87338->fvar_3 = (ltepeg_funtype_5_t)ivar_5;
        if (cl87338->fvar_3 != NULL) cl87338->fvar_3->count++;
        cl87338->fvar_4 = (ltepeg_funtype_5_t)ivar_3;
        if (cl87338->fvar_4 != NULL) cl87338->fvar_4->count++;
        cl87338->fvar_5 = (ltepeg_funtype_13_t)ivar_1;
        if (cl87338->fvar_5 != NULL) cl87338->fvar_5->count++;
        release_ltepeg_funtype_15(ivar_7);
        release_ltepeg_funtype_17(ivar_9);
        release_ltepeg_funtype_5(ivar_5);
        release_ltepeg_funtype_5(ivar_3);
        release_ltepeg_funtype_13(ivar_1);
        result = (ltepeg_funtype_5_t)cl87338;

        
        return result;
}

extern ltepeg_funtype_19_t ltepeg__reduce_ordinal__1(ltepeg_funtype_20_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_4, ltepeg_funtype_21_t ivar_5, ltepeg_funtype_22_t ivar_7){
        ltepeg_funtype_19_t  result;
        ltepeg_closure_23_t cl87489;
        cl87489 = new_ltepeg_closure_23();
        cl87489->fvar_1 = (ltepeg_funtype_21_t)ivar_5;
        if (cl87489->fvar_1 != NULL) cl87489->fvar_1->count++;
        cl87489->fvar_2 = (ltepeg_funtype_22_t)ivar_7;
        if (cl87489->fvar_2 != NULL) cl87489->fvar_2->count++;
        cl87489->fvar_3 = (ordstruct_adt__ordstruct_adt_t)ivar_4;
        if (cl87489->fvar_3 != NULL) cl87489->fvar_3->count++;
        cl87489->fvar_4 = (ordstruct_adt__ordstruct_adt_t)ivar_3;
        if (cl87489->fvar_4 != NULL) cl87489->fvar_4->count++;
        cl87489->fvar_5 = (ltepeg_funtype_20_t)ivar_1;
        if (cl87489->fvar_5 != NULL) cl87489->fvar_5->count++;
        release_ltepeg_funtype_21(ivar_5);
        release_ltepeg_funtype_22(ivar_7);
        release_ordstruct_adt__ordstruct_adt(ivar_4);
        release_ordstruct_adt__ordstruct_adt(ivar_3);
        release_ltepeg_funtype_20(ivar_1);
        result = (ltepeg_funtype_19_t)cl87489;

        
        return result;
}

extern ltepeg_funtype_19_t ltepeg__REDUCE_ordinal__1(ltepeg_funtype_24_t ivar_1, ltepeg_funtype_19_t ivar_3, ltepeg_funtype_19_t ivar_5, ltepeg_funtype_25_t ivar_7, ltepeg_funtype_26_t ivar_9){
        ltepeg_funtype_19_t  result;
        ltepeg_closure_27_t cl87704;
        cl87704 = new_ltepeg_closure_27();
        cl87704->fvar_1 = (ltepeg_funtype_25_t)ivar_7;
        if (cl87704->fvar_1 != NULL) cl87704->fvar_1->count++;
        cl87704->fvar_2 = (ltepeg_funtype_26_t)ivar_9;
        if (cl87704->fvar_2 != NULL) cl87704->fvar_2->count++;
        cl87704->fvar_3 = (ltepeg_funtype_19_t)ivar_5;
        if (cl87704->fvar_3 != NULL) cl87704->fvar_3->count++;
        cl87704->fvar_4 = (ltepeg_funtype_19_t)ivar_3;
        if (cl87704->fvar_4 != NULL) cl87704->fvar_4->count++;
        cl87704->fvar_5 = (ltepeg_funtype_24_t)ivar_1;
        if (cl87704->fvar_5 != NULL) cl87704->fvar_5->count++;
        release_ltepeg_funtype_25(ivar_7);
        release_ltepeg_funtype_26(ivar_9);
        release_ltepeg_funtype_19(ivar_5);
        release_ltepeg_funtype_19(ivar_3);
        release_ltepeg_funtype_24(ivar_1);
        result = (ltepeg_funtype_19_t)cl87704;

        
        return result;
}

extern bool_t r_ltepeg__epsilonp(ltepeg__prepeg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltepeg__prepeg_adt_index;
        release_ltepeg__prepeg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_ltepeg__failurep(ltepeg__prepeg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltepeg__prepeg_adt_index;
        release_ltepeg__prepeg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_ltepeg__anyp(ltepeg__prepeg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)2;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltepeg__prepeg_adt_index;
        release_ltepeg__prepeg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_ltepeg__terminalp(ltepeg__prepeg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)3;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltepeg__prepeg_adt_index;
        release_ltepeg__prepeg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_ltepeg__ltep(ltepeg__prepeg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)4;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltepeg__prepeg_adt_index;
        release_ltepeg__prepeg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern ltepeg__any_t update_ltepeg__prepeg_adt_p(ltepeg__prepeg_adt_t ivar_1, ltepeg_funtype_29_t ivar_4){
        ltepeg__any_t  result;
        ltepeg__any_t ivar_3;
        //copying to ltepeg__any from ltepeg__prepeg_adt;
        ivar_3 = (ltepeg__any_t)ivar_1;
        if (ivar_3 != NULL) ivar_3->count++;
        release_ltepeg__prepeg_adt(ivar_1);
        result = (ltepeg__any_t)update_ltepeg__any_p(ivar_3, ivar_4);

        
        return result;
}

extern ltepeg_funtype_29_t ltepeg__prepeg_adt_p(ltepeg__prepeg_adt_t ivar_1){
        ltepeg_funtype_29_t  result;
        ltepeg__any_t ivar_3;
        //copying to ltepeg__any from ltepeg__prepeg_adt;
        ivar_3 = (ltepeg__any_t)ivar_1;
        if (ivar_3 != NULL) ivar_3->count++;
        release_ltepeg__prepeg_adt(ivar_1);
        result = (ltepeg_funtype_29_t)ivar_3->p;
        result->count++;
        release_ltepeg__any(ivar_3);

        
        return result;
}

extern ltepeg__terminal_t update_ltepeg__prepeg_adt_a(ltepeg__prepeg_adt_t ivar_1, uint8_t ivar_3){
        ltepeg__terminal_t  result;
        ltepeg__terminal_t ivar_2;
        //copying to ltepeg__terminal from ltepeg__prepeg_adt;
        ivar_2 = (ltepeg__terminal_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepeg__prepeg_adt(ivar_1);
        result = (ltepeg__terminal_t)update_ltepeg__terminal_a(ivar_2, ivar_3);

        
        return result;
}

extern uint8_t ltepeg__prepeg_adt_a(ltepeg__prepeg_adt_t ivar_1){
        uint8_t  result;
        ltepeg__terminal_t ivar_2;
        //copying to ltepeg__terminal from ltepeg__prepeg_adt;
        ivar_2 = (ltepeg__terminal_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepeg__prepeg_adt(ivar_1);
        result = (uint8_t)ivar_2->a;
        release_ltepeg__terminal(ivar_2);

        
        return result;
}

extern ltepeg__lte_t update_ltepeg__prepeg_adt_fst(ltepeg__prepeg_adt_t ivar_1, uint8_t ivar_3){
        ltepeg__lte_t  result;
        ltepeg__lte_t ivar_2;
        //copying to ltepeg__lte from ltepeg__prepeg_adt;
        ivar_2 = (ltepeg__lte_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepeg__prepeg_adt(ivar_1);
        result = (ltepeg__lte_t)update_ltepeg__lte_fst(ivar_2, ivar_3);

        
        return result;
}

extern uint8_t ltepeg__prepeg_adt_fst(ltepeg__prepeg_adt_t ivar_1){
        uint8_t  result;
        ltepeg__lte_t ivar_2;
        //copying to ltepeg__lte from ltepeg__prepeg_adt;
        ivar_2 = (ltepeg__lte_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepeg__prepeg_adt(ivar_1);
        result = (uint8_t)ivar_2->fst;
        release_ltepeg__lte(ivar_2);

        
        return result;
}

extern ltepeg__lte_t update_ltepeg__prepeg_adt_lthen(ltepeg__prepeg_adt_t ivar_1, uint8_t ivar_3){
        ltepeg__lte_t  result;
        ltepeg__lte_t ivar_2;
        //copying to ltepeg__lte from ltepeg__prepeg_adt;
        ivar_2 = (ltepeg__lte_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepeg__prepeg_adt(ivar_1);
        result = (ltepeg__lte_t)update_ltepeg__lte_lthen(ivar_2, ivar_3);

        
        return result;
}

extern uint8_t ltepeg__prepeg_adt_lthen(ltepeg__prepeg_adt_t ivar_1){
        uint8_t  result;
        ltepeg__lte_t ivar_2;
        //copying to ltepeg__lte from ltepeg__prepeg_adt;
        ivar_2 = (ltepeg__lte_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepeg__prepeg_adt(ivar_1);
        result = (uint8_t)ivar_2->lthen;
        release_ltepeg__lte(ivar_2);

        
        return result;
}

extern ltepeg__lte_t update_ltepeg__prepeg_adt_lelse(ltepeg__prepeg_adt_t ivar_1, uint8_t ivar_3){
        ltepeg__lte_t  result;
        ltepeg__lte_t ivar_2;
        //copying to ltepeg__lte from ltepeg__prepeg_adt;
        ivar_2 = (ltepeg__lte_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepeg__prepeg_adt(ivar_1);
        result = (ltepeg__lte_t)update_ltepeg__lte_lelse(ivar_2, ivar_3);

        
        return result;
}

extern uint8_t ltepeg__prepeg_adt_lelse(ltepeg__prepeg_adt_t ivar_1){
        uint8_t  result;
        ltepeg__lte_t ivar_2;
        //copying to ltepeg__lte from ltepeg__prepeg_adt;
        ivar_2 = (ltepeg__lte_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepeg__prepeg_adt(ivar_1);
        result = (uint8_t)ivar_2->lelse;
        release_ltepeg__lte(ivar_2);

        
        return result;
}

extern ltepeg__prepeg_adt_t ltepeg__epsilon(void){
        ltepeg__prepeg_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        ltepeg__prepeg_adt_t tmp87990 = new_ltepeg__prepeg_adt();;
        result = (ltepeg__prepeg_adt_t)tmp87990;
        tmp87990->ltepeg__prepeg_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern ltepeg__prepeg_adt_t ltepeg__failure(void){
        ltepeg__prepeg_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        ltepeg__prepeg_adt_t tmp87996 = new_ltepeg__prepeg_adt();;
        result = (ltepeg__prepeg_adt_t)tmp87996;
        tmp87996->ltepeg__prepeg_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern ltepeg__prepeg_adt_t ltepeg__any(ltepeg_funtype_29_t ivar_2){
        ltepeg__prepeg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)2;
        ltepeg__any_t tmp88004 = new_ltepeg__any();;
        result = (ltepeg__prepeg_adt_t)tmp88004;
        tmp88004->ltepeg__prepeg_adt_index = (uint8_t)ivar_1;
        tmp88004->p = (ltepeg_funtype_29_t)ivar_2;

        
        return result;
}

extern ltepeg__prepeg_adt_t ltepeg__terminal(uint8_t ivar_2){
        ltepeg__prepeg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)3;
        ltepeg__terminal_t tmp88012 = new_ltepeg__terminal();;
        result = (ltepeg__prepeg_adt_t)tmp88012;
        tmp88012->ltepeg__prepeg_adt_index = (uint8_t)ivar_1;
        tmp88012->a = (uint8_t)ivar_2;

        
        return result;
}

extern ltepeg__prepeg_adt_t ltepeg__lte(uint8_t ivar_2, uint8_t ivar_3, uint8_t ivar_4){
        ltepeg__prepeg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)4;
        ltepeg__lte_t tmp88024 = new_ltepeg__lte();;
        result = (ltepeg__prepeg_adt_t)tmp88024;
        tmp88024->ltepeg__prepeg_adt_index = (uint8_t)ivar_1;
        tmp88024->fst = (uint8_t)ivar_2;
        tmp88024->lthen = (uint8_t)ivar_3;
        tmp88024->lelse = (uint8_t)ivar_4;

        
        return result;
}

extern ltepeg_funtype_33_t ltepeg__prepeg_ord(void){
        ltepeg_funtype_33_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

extern uint8_t ltepeg__ord__2(ltepeg__prepeg_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)r_ltepeg__epsilonp((ltepeg__prepeg_adt_t)ivar_1);
        if (ivar_3){ 
             release_ltepeg__prepeg_adt(ivar_1);
             result = (uint8_t)0;
} else {
        
             bool_t ivar_7;
             ivar_1->count++;
             ivar_7 = (bool_t)r_ltepeg__failurep((ltepeg__prepeg_adt_t)ivar_1);
             if (ivar_7){  
           release_ltepeg__prepeg_adt(ivar_1);
           result = (uint8_t)1;
} else {
             
           bool_t ivar_17;
           ivar_1->count++;
           ivar_17 = (bool_t)r_ltepeg__anyp((ltepeg__prepeg_adt_t)ivar_1);
           if (ivar_17){   
           result = (uint8_t)2;
} else {
           
           bool_t ivar_25;
           ivar_1->count++;
           ivar_25 = (bool_t)r_ltepeg__terminalp((ltepeg__prepeg_adt_t)ivar_1);
           if (ivar_25){    
            result = (uint8_t)3;
} else {
           
            result = (uint8_t)4;
};
};
};
};

        
        return result;
}

extern bool_t ltepeg__subterm__2(ltepeg__prepeg_adt_t ivar_1, ltepeg__prepeg_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) equal_ltepeg__prepeg_adt(ivar_1, ivar_2);

        
        return result;
}

extern bool_t ltepeg__doublelessp__2(ltepeg__prepeg_adt_t ivar_1, ltepeg__prepeg_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) false;

        
        return result;
}

extern ltepeg_funtype_34_t ltepeg__reduce_nat__2(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, ltepeg_funtype_35_t ivar_3, ltepeg_funtype_36_t ivar_6, ltepeg_funtype_38_t ivar_8){
        ltepeg_funtype_34_t  result;
        ltepeg_closure_39_t cl88091;
        cl88091 = new_ltepeg_closure_39();
        cl88091->fvar_1 = (ltepeg_funtype_36_t)ivar_6;
        if (cl88091->fvar_1 != NULL) cl88091->fvar_1->count++;
        cl88091->fvar_2 = (ltepeg_funtype_38_t)ivar_8;
        if (cl88091->fvar_2 != NULL) cl88091->fvar_2->count++;
        cl88091->fvar_3 = (ltepeg_funtype_35_t)ivar_3;
        if (cl88091->fvar_3 != NULL) cl88091->fvar_3->count++;
        mpz_set(cl88091->fvar_4, ivar_2);
        mpz_set(cl88091->fvar_5, ivar_1);
        release_ltepeg_funtype_36(ivar_6);
        release_ltepeg_funtype_38(ivar_8);
        release_ltepeg_funtype_35(ivar_3);
        result = (ltepeg_funtype_34_t)cl88091;

        
        return result;
}

extern ltepeg_funtype_34_t ltepeg__REDUCE_nat__2(ltepeg_funtype_34_t ivar_1, ltepeg_funtype_34_t ivar_3, ltepeg_funtype_41_t ivar_5, ltepeg_funtype_43_t ivar_8, ltepeg_funtype_45_t ivar_10){
        ltepeg_funtype_34_t  result;
        ltepeg_closure_46_t cl88235;
        cl88235 = new_ltepeg_closure_46();
        cl88235->fvar_1 = (ltepeg_funtype_43_t)ivar_8;
        if (cl88235->fvar_1 != NULL) cl88235->fvar_1->count++;
        cl88235->fvar_2 = (ltepeg_funtype_45_t)ivar_10;
        if (cl88235->fvar_2 != NULL) cl88235->fvar_2->count++;
        cl88235->fvar_3 = (ltepeg_funtype_41_t)ivar_5;
        if (cl88235->fvar_3 != NULL) cl88235->fvar_3->count++;
        cl88235->fvar_4 = (ltepeg_funtype_34_t)ivar_3;
        if (cl88235->fvar_4 != NULL) cl88235->fvar_4->count++;
        cl88235->fvar_5 = (ltepeg_funtype_34_t)ivar_1;
        if (cl88235->fvar_5 != NULL) cl88235->fvar_5->count++;
        release_ltepeg_funtype_43(ivar_8);
        release_ltepeg_funtype_45(ivar_10);
        release_ltepeg_funtype_41(ivar_5);
        release_ltepeg_funtype_34(ivar_3);
        release_ltepeg_funtype_34(ivar_1);
        result = (ltepeg_funtype_34_t)cl88235;

        
        return result;
}

extern ltepeg_funtype_47_t ltepeg__reduce_ordinal__2(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2, ltepeg_funtype_48_t ivar_3, ltepeg_funtype_49_t ivar_6, ltepeg_funtype_50_t ivar_8){
        ltepeg_funtype_47_t  result;
        ltepeg_closure_51_t cl88375;
        cl88375 = new_ltepeg_closure_51();
        cl88375->fvar_1 = (ltepeg_funtype_49_t)ivar_6;
        if (cl88375->fvar_1 != NULL) cl88375->fvar_1->count++;
        cl88375->fvar_2 = (ltepeg_funtype_50_t)ivar_8;
        if (cl88375->fvar_2 != NULL) cl88375->fvar_2->count++;
        cl88375->fvar_3 = (ltepeg_funtype_48_t)ivar_3;
        if (cl88375->fvar_3 != NULL) cl88375->fvar_3->count++;
        cl88375->fvar_4 = (ordstruct_adt__ordstruct_adt_t)ivar_2;
        if (cl88375->fvar_4 != NULL) cl88375->fvar_4->count++;
        cl88375->fvar_5 = (ordstruct_adt__ordstruct_adt_t)ivar_1;
        if (cl88375->fvar_5 != NULL) cl88375->fvar_5->count++;
        release_ltepeg_funtype_49(ivar_6);
        release_ltepeg_funtype_50(ivar_8);
        release_ltepeg_funtype_48(ivar_3);
        release_ordstruct_adt__ordstruct_adt(ivar_2);
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ltepeg_funtype_47_t)cl88375;

        
        return result;
}

extern ltepeg_funtype_47_t ltepeg__REDUCE_ordinal__2(ltepeg_funtype_47_t ivar_1, ltepeg_funtype_47_t ivar_3, ltepeg_funtype_52_t ivar_5, ltepeg_funtype_53_t ivar_8, ltepeg_funtype_54_t ivar_10){
        ltepeg_funtype_47_t  result;
        ltepeg_closure_55_t cl88587;
        cl88587 = new_ltepeg_closure_55();
        cl88587->fvar_1 = (ltepeg_funtype_53_t)ivar_8;
        if (cl88587->fvar_1 != NULL) cl88587->fvar_1->count++;
        cl88587->fvar_2 = (ltepeg_funtype_54_t)ivar_10;
        if (cl88587->fvar_2 != NULL) cl88587->fvar_2->count++;
        cl88587->fvar_3 = (ltepeg_funtype_52_t)ivar_5;
        if (cl88587->fvar_3 != NULL) cl88587->fvar_3->count++;
        cl88587->fvar_4 = (ltepeg_funtype_47_t)ivar_3;
        if (cl88587->fvar_4 != NULL) cl88587->fvar_4->count++;
        cl88587->fvar_5 = (ltepeg_funtype_47_t)ivar_1;
        if (cl88587->fvar_5 != NULL) cl88587->fvar_5->count++;
        release_ltepeg_funtype_53(ivar_8);
        release_ltepeg_funtype_54(ivar_10);
        release_ltepeg_funtype_52(ivar_5);
        release_ltepeg_funtype_47(ivar_3);
        release_ltepeg_funtype_47(ivar_1);
        result = (ltepeg_funtype_47_t)cl88587;

        
        return result;
}

extern ltepeg_funtype_56_t ltepeg__good_good_entryp(uint32_t ivar_1, uint32_t ivar_2){
        ltepeg_funtype_56_t  result;
        ltepeg_closure_57_t cl88653;
        cl88653 = new_ltepeg_closure_57();
        cl88653->fvar_1 = (uint32_t)ivar_2;
        cl88653->fvar_2 = (uint32_t)ivar_1;
        result = (ltepeg_funtype_56_t)cl88653;

        
        return result;
}

extern ltepeg_funtype_56_t ltepeg__good_push_entryp(uint32_t ivar_1){
        ltepeg_funtype_56_t  result;
        ltepeg_closure_58_t cl88665;
        cl88665 = new_ltepeg_closure_58();
        cl88665->fvar_1 = (uint32_t)ivar_1;
        result = (ltepeg_funtype_56_t)cl88665;

        
        return result;
}

extern ltepeg_funtype_56_t ltepeg__fine_push_entryp(uint32_t ivar_1){
        ltepeg_funtype_56_t  result;
        ltepeg_closure_59_t cl88677;
        cl88677 = new_ltepeg_closure_59();
        cl88677->fvar_1 = (uint32_t)ivar_1;
        result = (ltepeg_funtype_56_t)cl88677;

        
        return result;
}

extern ltepeg_funtype_56_t ltepeg__nice_entryp(uint32_t ivar_1, uint32_t ivar_2){
        ltepeg_funtype_56_t  result;
        ltepeg_closure_60_t cl88695;
        cl88695 = new_ltepeg_closure_60();
        cl88695->fvar_1 = (uint32_t)ivar_2;
        cl88695->fvar_2 = (uint32_t)ivar_1;
        result = (ltepeg_funtype_56_t)cl88695;

        
        return result;
}

extern bool_t ltepeg__loop_or_pushp(ltepeg__ent_adt_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        ivar_1->count++;
        ivar_2 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_1);
        if (ivar_2){ 
             release_ltepeg__ent_adt(ivar_1);
             result = (bool_t) true;
} else {
        
             result = (bool_t)r_ltepeg__pushp((ltepeg__ent_adt_t)ivar_1);
};

        
        return result;
}

extern ltepeg_funtype_61_t ltepeg__instack(uint32_t ivar_1, ltepeg_array_63_t ivar_2){
        ltepeg_funtype_61_t  result;
        ltepeg_closure_64_t cl88737;
        cl88737 = new_ltepeg_closure_64();
        cl88737->fvar_1 = (ltepeg_array_63_t)ivar_2;
        if (cl88737->fvar_1 != NULL) cl88737->fvar_1->count++;
        cl88737->fvar_2 = (uint32_t)ivar_1;
        release_ltepeg_array_63(ivar_2);
        result = (ltepeg_funtype_61_t)cl88737;

        
        return result;
}

extern ltepeg_funtype_66_t ltepeg__successor(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_63_t ivar_3){
        ltepeg_funtype_66_t  result;
        ltepeg_closure_68_t cl88824;
        cl88824 = new_ltepeg_closure_68();
        cl88824->fvar_1 = (ltepeg_array_63_t)ivar_3;
        if (cl88824->fvar_1 != NULL) cl88824->fvar_1->count++;
        cl88824->fvar_2 = (uint32_t)ivar_1;
        cl88824->fvar_3 = (ltepeg__lang_spec_t)ivar_2;
        if (cl88824->fvar_3 != NULL) cl88824->fvar_3->count++;
        release_ltepeg_array_63(ivar_3);
        release_ltepeg__lang_spec(ivar_2);
        result = (ltepeg_funtype_66_t)cl88824;

        
        return result;
}

extern ltepeg_funtype_69_t ltepeg__sigma(uint32_t ivar_1, ltepeg_array_70_t ivar_2){
        ltepeg_funtype_69_t  result;
        ltepeg_closure_71_t cl88839;
        cl88839 = new_ltepeg_closure_71();
        cl88839->fvar_1 = (ltepeg_array_70_t)ivar_2;
        if (cl88839->fvar_1 != NULL) cl88839->fvar_1->count++;
        cl88839->fvar_2 = (uint32_t)ivar_1;
        release_ltepeg_array_70(ivar_2);
        result = (ltepeg_funtype_69_t)cl88839;

        
        return result;
}

extern uint64_t ltepeg__scafcount(uint32_t ivar_1, ltepeg_array_63_t ivar_2, ltepeg_funtype_56_t ivar_4, uint32_t ivar_6){
        uint64_t  result;
        type_actual_t ivar_36;
        ivar_36 = (type_actual_t)actual_ltepeg__ent_adt();
        ltepeg_funtype_69_t ivar_10;
        ltepeg_array_70_t ivar_46;
        uint32_t size88872;
        //copying to uint32 from uint32;
        size88872 = (uint32_t)ivar_1;
        size88872 += 1;
        ivar_46 = new_ltepeg_array_70(size88872);
        uint32_t ivar_14;
        for (uint32_t index88854 = 0; index88854 < size88872; index88854++){
             ivar_14 = (uint32_t)index88854;
             ltepeg_funtype_72_t ivar_23;
             ltepeg_funtype_73_t ivar_30;
             uint8_t ivar_39;
             ivar_39 = (uint8_t)ltepeg__num_non_terminals();
             uint32_t ivar_38;
             //copying to uint32 from uint8;
             ivar_38 = (uint32_t)ivar_39;
             ivar_30 = (ltepeg_funtype_73_t)arrayCount__count((type_actual_t)ivar_36, (uint32_t)ivar_38);
             ivar_4->count++;
             ivar_23 = (ltepeg_funtype_72_t)ivar_30->ftbl->fptr(ivar_30, ivar_4);
             ivar_30->ftbl->rptr(ivar_30);
             ltepeg_array_62_t ivar_41;
             ivar_41 = (ltepeg_array_62_t)ivar_2->elems[ivar_14];
             ivar_41->count++;
             mpz_mk_set_ui(ivar_46->elems[index88854], ivar_23->ftbl->fptr(ivar_23, ivar_41));
             ivar_23->ftbl->rptr(ivar_23);
        };
        release_ltepeg_funtype_56(ivar_4);
        release_ltepeg_array_63(ivar_2);
        ivar_10 = (ltepeg_funtype_69_t)ltepeg__sigma((uint32_t)ivar_1, (ltepeg_array_70_t)ivar_46);
        result = (uint64_t)mpz_get_ui(ivar_10->ftbl->fptr(ivar_10, ivar_6));
        ivar_10->ftbl->rptr(ivar_10);
        safe_free(ivar_36);

        
        return result;
}

extern uint64_t ltepeg__pushcount(uint32_t ivar_1, ltepeg_array_63_t ivar_2){
        uint64_t  result;
        ltepeg_funtype_56_t ivar_15;
        ltepeg_closure_74_t cl88884;
        cl88884 = new_ltepeg_closure_74();
        ivar_15 = (ltepeg_funtype_56_t)cl88884;
        result = (uint64_t)ltepeg__scafcount((uint32_t)ivar_1, (ltepeg_array_63_t)ivar_2, (ltepeg_funtype_56_t)ivar_15, (uint32_t)ivar_1);

        
        return result;
}

extern bool_t ltepeg__good_or_failp(ltepeg__ent_adt_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        ivar_1->count++;
        ivar_2 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_1);
        if (ivar_2){ 
             release_ltepeg__ent_adt(ivar_1);
             result = (bool_t) true;
} else {
        
             result = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_1);
};

        
        return result;
}

extern uint64_t ltepeg__gfcount(uint32_t ivar_1, ltepeg_array_63_t ivar_2){
        uint64_t  result;
        ltepeg_funtype_56_t ivar_16;
        ltepeg_closure_75_t cl88900;
        cl88900 = new_ltepeg_closure_75();
        ivar_16 = (ltepeg_funtype_56_t)cl88900;
        result = (uint64_t)ltepeg__scafcount((uint32_t)ivar_1, (ltepeg_array_63_t)ivar_2, (ltepeg_funtype_56_t)ivar_16, (uint32_t)ivar_1);

        
        return result;
}

extern ltepeg_funtype_76_t ltepeg__good_depthp(uint32_t ivar_1, ltepeg_array_63_t ivar_2){
        ltepeg_funtype_76_t  result;
        ltepeg_closure_77_t cl88910;
        cl88910 = new_ltepeg_closure_77();
        cl88910->fvar_1 = (ltepeg_array_63_t)ivar_2;
        if (cl88910->fvar_1 != NULL) cl88910->fvar_1->count++;
        cl88910->fvar_2 = (uint32_t)ivar_1;
        release_ltepeg_array_63(ivar_2);
        result = (ltepeg_funtype_76_t)cl88910;

        
        return result;
}

extern ltepeg_funtype_56_t ltepeg__good_stackp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, uint64_t ivar_3, ltepeg_array_63_t ivar_4){
        ltepeg_funtype_56_t  result;
        ltepeg_closure_78_t cl88977;
        cl88977 = new_ltepeg_closure_78();
        cl88977->fvar_1 = (ltepeg_array_63_t)ivar_4;
        if (cl88977->fvar_1 != NULL) cl88977->fvar_1->count++;
        cl88977->fvar_2 = (uint32_t)ivar_1;
        cl88977->fvar_3 = (ltepeg__lang_spec_t)ivar_2;
        if (cl88977->fvar_3 != NULL) cl88977->fvar_3->count++;
        cl88977->fvar_4 = (uint64_t)ivar_3;
        release_ltepeg_array_63(ivar_4);
        release_ltepeg__lang_spec(ivar_2);
        result = (ltepeg_funtype_56_t)cl88977;

        
        return result;
}

extern ltepeg_funtype_66_t ltepeg__mem_stackp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, uint64_t ivar_3, ltepeg_array_63_t ivar_4){
        ltepeg_funtype_66_t  result;
        ltepeg_closure_79_t cl89066;
        cl89066 = new_ltepeg_closure_79();
        cl89066->fvar_1 = (ltepeg_array_63_t)ivar_4;
        if (cl89066->fvar_1 != NULL) cl89066->fvar_1->count++;
        cl89066->fvar_2 = (uint32_t)ivar_1;
        cl89066->fvar_3 = (ltepeg__lang_spec_t)ivar_2;
        if (cl89066->fvar_3 != NULL) cl89066->fvar_3->count++;
        cl89066->fvar_4 = (uint64_t)ivar_3;
        release_ltepeg_array_63(ivar_4);
        release_ltepeg__lang_spec(ivar_2);
        result = (ltepeg_funtype_66_t)cl89066;

        
        return result;
}

extern bool_t ltepeg__push_or_pendingp(ltepeg__ent_adt_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        ivar_1->count++;
        ivar_2 = (bool_t)r_ltepeg__pushp((ltepeg__ent_adt_t)ivar_1);
        if (ivar_2){ 
             release_ltepeg__ent_adt(ivar_1);
             result = (bool_t) true;
} else {
        
             result = (bool_t)r_ltepeg__pendingp((ltepeg__ent_adt_t)ivar_1);
};

        
        return result;
}

extern ltepeg_funtype_56_t ltepeg__fine_stackp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, uint64_t ivar_3, ltepeg_array_63_t ivar_4){
        ltepeg_funtype_56_t  result;
        ltepeg_closure_80_t cl89138;
        cl89138 = new_ltepeg_closure_80();
        cl89138->fvar_1 = (ltepeg_array_63_t)ivar_4;
        if (cl89138->fvar_1 != NULL) cl89138->fvar_1->count++;
        cl89138->fvar_2 = (uint32_t)ivar_1;
        cl89138->fvar_3 = (ltepeg__lang_spec_t)ivar_2;
        if (cl89138->fvar_3 != NULL) cl89138->fvar_3->count++;
        cl89138->fvar_4 = (uint64_t)ivar_3;
        release_ltepeg_array_63(ivar_4);
        release_ltepeg__lang_spec(ivar_2);
        result = (ltepeg_funtype_56_t)cl89138;

        
        return result;
}

extern bool_t ltepeg__loop_readyp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_63_t ivar_3, uint32_t ivar_5, uint8_t ivar_6){
        bool_t  result;
        ltepeg__prepeg_adt_t ivar_7;
        ivar_7 = (ltepeg__prepeg_adt_t)ivar_2->elems[ivar_6];
        ivar_7->count++;
        release_ltepeg__lang_spec(ivar_2);
        bool_t ivar_111;
        ivar_7->count++;
        ivar_111 = (bool_t)r_ltepeg__ltep((ltepeg__prepeg_adt_t)ivar_7);
        if (ivar_111){ 
             uint8_t ivar_12;
             ivar_7->count++;
             ivar_12 = (uint8_t)ltepeg__prepeg_adt_fst((ltepeg__prepeg_adt_t)ivar_7);
             uint8_t ivar_13;
             ivar_7->count++;
             ivar_13 = (uint8_t)ltepeg__prepeg_adt_lthen((ltepeg__prepeg_adt_t)ivar_7);
             uint8_t ivar_14;
             ivar_14 = (uint8_t)ltepeg__prepeg_adt_lelse((ltepeg__prepeg_adt_t)ivar_7);
             bool_t ivar_24;
             ltepeg__ent_adt_t ivar_37;
             ltepeg_array_62_t ivar_29;
             ivar_29 = (ltepeg_array_62_t)ivar_3->elems[ivar_5];
             ivar_29->count++;
             ivar_37 = (ltepeg__ent_adt_t)ivar_29->elems[ivar_12];
             ivar_37->count++;
             release_ltepeg_array_62(ivar_29);
             ivar_24 = (bool_t)ltepeg__loop_or_pushp((ltepeg__ent_adt_t)ivar_37);
             if (ivar_24){  
           release_ltepeg_array_63(ivar_3);
           result = (bool_t) true;
} else {
             
           bool_t ivar_38;
           bool_t ivar_40;
           ltepeg__ent_adt_t ivar_53;
           ltepeg_array_62_t ivar_45;
           ivar_45 = (ltepeg_array_62_t)ivar_3->elems[ivar_5];
           ivar_45->count++;
           ivar_53 = (ltepeg__ent_adt_t)ivar_45->elems[ivar_12];
           ivar_53->count++;
           release_ltepeg_array_62(ivar_45);
           ivar_40 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_53);
           if (ivar_40){   
           ltepeg__ent_adt_t ivar_80;
           ltepeg_array_62_t ivar_57;
           uint32_t ivar_77;
           uint32_t ivar_60;
           ltepeg__ent_adt_t ivar_72;
           ltepeg_array_62_t ivar_64;
           ivar_64 = (ltepeg_array_62_t)ivar_3->elems[ivar_5];
           ivar_64->count++;
           ivar_72 = (ltepeg__ent_adt_t)ivar_64->elems[ivar_12];
           ivar_72->count++;
           release_ltepeg_array_62(ivar_64);
           ivar_60 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_72);
           ivar_77 = (uint32_t)(ivar_5 + ivar_60);
           ivar_57 = (ltepeg_array_62_t)ivar_3->elems[ivar_77];
           ivar_57->count++;
           ivar_80 = (ltepeg__ent_adt_t)ivar_57->elems[ivar_13];
           ivar_80->count++;
           release_ltepeg_array_62(ivar_57);
           ivar_38 = (bool_t)ltepeg__loop_or_pushp((ltepeg__ent_adt_t)ivar_80);
} else {
           
           ivar_38 = (bool_t) false;
};
           if (ivar_38){   
           release_ltepeg_array_63(ivar_3);
           result = (bool_t) true;
} else {
           
           bool_t ivar_82;
           ltepeg__ent_adt_t ivar_95;
           ltepeg_array_62_t ivar_87;
           ivar_87 = (ltepeg_array_62_t)ivar_3->elems[ivar_5];
           ivar_87->count++;
           ivar_95 = (ltepeg__ent_adt_t)ivar_87->elems[ivar_12];
           ivar_95->count++;
           release_ltepeg_array_62(ivar_87);
           ivar_82 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_95);
           if (ivar_82){    
            ltepeg__ent_adt_t ivar_107;
            ltepeg_array_62_t ivar_99;
            ivar_99 = (ltepeg_array_62_t)ivar_3->elems[ivar_5];
            ivar_99->count++;
            release_ltepeg_array_63(ivar_3);
            ivar_107 = (ltepeg__ent_adt_t)ivar_99->elems[ivar_14];
            ivar_107->count++;
            release_ltepeg_array_62(ivar_99);
            result = (bool_t)ltepeg__loop_or_pushp((ltepeg__ent_adt_t)ivar_107);
} else {
           
            release_ltepeg_array_63(ivar_3);
            result = (bool_t) false;
};
};
};
} else {
        
             release_ltepeg__prepeg_adt(ivar_7);
             release_ltepeg_array_63(ivar_3);
             result = (bool_t) false;
};

        
        return result;
}

extern ltepeg_funtype_82_t ltepeg__good_failp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3){
        ltepeg_funtype_82_t  result;
        ltepeg_closure_84_t cl89366;
        cl89366 = new_ltepeg_closure_84();
        cl89366->fvar_1 = (ltepeg_array_83_t)ivar_3;
        if (cl89366->fvar_1 != NULL) cl89366->fvar_1->count++;
        cl89366->fvar_2 = (uint32_t)ivar_1;
        cl89366->fvar_3 = (ltepeg__lang_spec_t)ivar_2;
        if (cl89366->fvar_3 != NULL) cl89366->fvar_3->count++;
        release_ltepeg_array_83(ivar_3);
        release_ltepeg__lang_spec(ivar_2);
        result = (ltepeg_funtype_82_t)cl89366;

        
        return result;
}

extern ltepeg_funtype_86_t ltepeg__good_loopp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2){
        ltepeg_funtype_86_t  result;
        ltepeg_closure_87_t cl89475;
        cl89475 = new_ltepeg_closure_87();
        cl89475->fvar_1 = (uint32_t)ivar_1;
        cl89475->fvar_2 = (ltepeg__lang_spec_t)ivar_2;
        if (cl89475->fvar_2 != NULL) cl89475->fvar_2->count++;
        release_ltepeg__lang_spec(ivar_2);
        result = (ltepeg_funtype_86_t)cl89475;

        
        return result;
}

extern ltepeg_funtype_89_t ltepeg__good_goodp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3){
        ltepeg_funtype_89_t  result;
        ltepeg_closure_90_t cl89650;
        cl89650 = new_ltepeg_closure_90();
        cl89650->fvar_1 = (ltepeg_array_83_t)ivar_3;
        if (cl89650->fvar_1 != NULL) cl89650->fvar_1->count++;
        cl89650->fvar_2 = (uint32_t)ivar_1;
        cl89650->fvar_3 = (ltepeg__lang_spec_t)ivar_2;
        if (cl89650->fvar_3 != NULL) cl89650->fvar_3->count++;
        release_ltepeg_array_83(ivar_3);
        release_ltepeg__lang_spec(ivar_2);
        result = (ltepeg_funtype_89_t)cl89650;

        
        return result;
}

extern ltepeg_funtype_92_t ltepeg__good_entryp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3){
        ltepeg_funtype_92_t  result;
        ltepeg_closure_93_t cl89779;
        cl89779 = new_ltepeg_closure_93();
        cl89779->fvar_1 = (uint32_t)ivar_1;
        cl89779->fvar_2 = (ltepeg__lang_spec_t)ivar_2;
        if (cl89779->fvar_2 != NULL) cl89779->fvar_2->count++;
        cl89779->fvar_3 = (ltepeg_array_83_t)ivar_3;
        if (cl89779->fvar_3 != NULL) cl89779->fvar_3->count++;
        release_ltepeg__lang_spec(ivar_2);
        release_ltepeg_array_83(ivar_3);
        result = (ltepeg_funtype_92_t)cl89779;

        
        return result;
}

extern ltepeg_funtype_92_t ltepeg__fine_entryp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3){
        ltepeg_funtype_92_t  result;
        ltepeg_closure_94_t cl89911;
        cl89911 = new_ltepeg_closure_94();
        cl89911->fvar_1 = (uint32_t)ivar_1;
        cl89911->fvar_2 = (ltepeg__lang_spec_t)ivar_2;
        if (cl89911->fvar_2 != NULL) cl89911->fvar_2->count++;
        cl89911->fvar_3 = (ltepeg_array_83_t)ivar_3;
        if (cl89911->fvar_3 != NULL) cl89911->fvar_3->count++;
        release_ltepeg__lang_spec(ivar_2);
        release_ltepeg_array_83(ivar_3);
        result = (ltepeg_funtype_92_t)cl89911;

        
        return result;
}

extern ltepeg_funtype_95_t ltepeg__good_tscaffoldp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3){
        ltepeg_funtype_95_t  result;
        ltepeg_closure_96_t cl89946;
        cl89946 = new_ltepeg_closure_96();
        cl89946->fvar_1 = (uint32_t)ivar_1;
        result = (ltepeg_funtype_95_t)cl89946;

        
        return result;
}

extern ltepeg_funtype_61_t ltepeg__good_rootp(uint32_t ivar_1, ltepeg_array_63_t ivar_2){
        ltepeg_funtype_61_t  result;
        ltepeg_closure_97_t cl89977;
        cl89977 = new_ltepeg_closure_97();
        cl89977->fvar_1 = (ltepeg_array_63_t)ivar_2;
        if (cl89977->fvar_1 != NULL) cl89977->fvar_1->count++;
        cl89977->fvar_2 = (uint32_t)ivar_1;
        release_ltepeg_array_63(ivar_2);
        result = (ltepeg_funtype_61_t)cl89977;

        
        return result;
}

extern ltepeg_funtype_98_t ltepeg__fine_scaffoldp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3){
        ltepeg_funtype_98_t  result;
        ltepeg_closure_99_t cl90044;
        cl90044 = new_ltepeg_closure_99();
        cl90044->fvar_1 = (ltepeg_array_83_t)ivar_3;
        if (cl90044->fvar_1 != NULL) cl90044->fvar_1->count++;
        cl90044->fvar_2 = (ltepeg__lang_spec_t)ivar_2;
        if (cl90044->fvar_2 != NULL) cl90044->fvar_2->count++;
        cl90044->fvar_3 = (uint32_t)ivar_1;
        release_ltepeg_array_83(ivar_3);
        release_ltepeg__lang_spec(ivar_2);
        result = (ltepeg_funtype_98_t)cl90044;

        
        return result;
}

extern bool_t ltepeg__emptyp(ltepeg__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ltepeg__ent_adt_nt((ltepeg__ent_adt_t)ivar_1);
        uint8_t ivar_3;
        ivar_3 = (uint8_t)ltepeg__num_non_terminals();
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern ltepeg_funtype_102_t ltepeg__step(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3, uint32_t ivar_4, uint8_t ivar_5){
        ltepeg_funtype_102_t  result;
        ltepeg_closure_103_t cl91967;
        cl91967 = new_ltepeg_closure_103();
        cl91967->fvar_1 = (uint32_t)ivar_1;
        cl91967->fvar_2 = (ltepeg_array_83_t)ivar_3;
        if (cl91967->fvar_2 != NULL) cl91967->fvar_2->count++;
        cl91967->fvar_3 = (ltepeg__lang_spec_t)ivar_2;
        if (cl91967->fvar_3 != NULL) cl91967->fvar_3->count++;
        release_ltepeg_array_83(ivar_3);
        release_ltepeg__lang_spec(ivar_2);
        result = (ltepeg_funtype_102_t)cl91967;

        
        return result;
}

extern ltepeg_funtype_105_t ltepeg__size(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3, uint32_t ivar_4, uint8_t ivar_5){
        ltepeg_funtype_105_t  result;
        ltepeg_closure_106_t cl92069;
        cl92069 = new_ltepeg_closure_106();
        cl92069->fvar_1 = (uint32_t)ivar_1;
        result = (ltepeg_funtype_105_t)cl92069;

        
        return result;
}

extern ltepeg_record_101_t ltepeg__parse(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3, uint32_t ivar_4, uint8_t ivar_5, ltepeg_record_101_t ivar_6){
        ltepeg_record_101_t  result;
        bool_t ivar_9;
        uint64_t ivar_10;
        ivar_10 = (uint64_t)ivar_6->depth;
        uint8_t ivar_11;
        ivar_11 = (uint8_t)0;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             release_ltepeg_array_83(ivar_3);
             release_ltepeg__lang_spec(ivar_2);
             //copying to ltepeg_record_101 from ltepeg_record_101;
             result = (ltepeg_record_101_t)ivar_6;
             if (result != NULL) result->count++;
             release_ltepeg_record_101(ivar_6);
} else {
        
             ltepeg_record_101_t ivar_52;
             ltepeg_funtype_102_t ivar_29;
             ivar_2->count++;
             ivar_3->count++;
             ivar_29 = (ltepeg_funtype_102_t)ltepeg__step((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepeg_array_83_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
             ivar_52 = (ltepeg_record_101_t)ivar_29->ftbl->fptr(ivar_29, ivar_6);
             ivar_29->ftbl->rptr(ivar_29);
             result = (ltepeg_record_101_t)ltepeg__parse((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepeg_array_83_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltepeg_record_101_t)ivar_52);
};

        
        return result;
}

extern ltepeg__ent_adt_t ltepeg__doparse(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepeg_array_83_t ivar_3, uint8_t ivar_4){
        ltepeg__ent_adt_t  result;
        /* pend */ ltepeg_funtype_108_t ivar_5;
        ltepeg_closure_109_t cl92299;
        cl92299 = new_ltepeg_closure_109();
        ivar_5 = (ltepeg_funtype_108_t)cl92299;
        ltepeg_record_111_t ivar_82;
        uint8_t ivar_16;
        ivar_16 = (uint8_t)1;
        bool_t ivar_17;
        ivar_17 = (bool_t) false;
        ltepeg_funtype_110_t ivar_45;
        ltepeg__ent_adt_t ivar_25;
        uint8_t ivar_32;
        ivar_32 = (uint8_t)0;
        uint32_t ivar_29;
        //copying to uint32 from uint8;
        ivar_29 = (uint32_t)ivar_32;
        uint8_t ivar_30;
        ivar_30 = (uint8_t)ltepeg__num_non_terminals();
        ivar_25 = (ltepeg__ent_adt_t)ltepeg__push((uint32_t)ivar_29, (uint8_t)ivar_30);
        ltepeg_funtype_110_t ivar_33;
        ltepeg_closure_112_t cl92321;
        cl92321 = new_ltepeg_closure_112();
        cl92321->fvar_1 = (uint32_t)ivar_1;
        cl92321->fvar_2 = (ltepeg_funtype_108_t)ivar_5;
        if (cl92321->fvar_2 != NULL) cl92321->fvar_2->count++;
        release_ltepeg_funtype_108(ivar_5);
        ivar_33 = (ltepeg_funtype_110_t)cl92321;
        uint32_t ivar_40;
        ivar_40 = (uint32_t)0;
        ltepeg_funtype_108_t ivar_34;
        ivar_34 = (ltepeg_funtype_108_t)ivar_33->ftbl->fptr(ivar_33, ivar_40);
        ltepeg_funtype_110_t ivar_41;
        ltepeg_funtype_108_t ivar_43;
        ivar_43 = NULL;
        ivar_41 = (ltepeg_funtype_110_t)update_ltepeg_funtype_110(ivar_33, ivar_40, ivar_43);
        if (ivar_43 != NULL) ivar_43->count--;
        ltepeg_funtype_108_t ivar_42;
        ltepeg_funtype_108_t ivar_37;
        ltepeg__ent_adt_t ivar_39;
        ivar_39 = NULL;
        ivar_37 = (ltepeg_funtype_108_t)update_ltepeg_funtype_108(ivar_34, ivar_4, ivar_39);
        if (ivar_39 != NULL) ivar_39->count--;
        ivar_42 = (ltepeg_funtype_108_t)update_ltepeg_funtype_108(ivar_37, ivar_4, ivar_25);
        if (ivar_25 != NULL) ivar_25->count--;
        ivar_45 = (ltepeg_funtype_110_t)update_ltepeg_funtype_110(ivar_41, ivar_40, ivar_42);
        if (ivar_42 != NULL) ivar_42->count--;
        ltepeg__ent_adt_t ivar_53;
        uint8_t ivar_52;
        ivar_52 = (uint8_t)0;
        uint32_t ivar_49;
        //copying to uint32 from uint8;
        ivar_49 = (uint32_t)ivar_52;
        ivar_53 = (ltepeg__ent_adt_t)ltepeg__push((uint32_t)ivar_49, (uint8_t)ivar_4);
        ltepeg_record_111_t tmp92355 = new_ltepeg_record_111();;
        ivar_82 = (ltepeg_record_111_t)tmp92355;
        tmp92355->depth = (uint8_t)ivar_16;
        tmp92355->lflag = (bool_t)ivar_17;
        tmp92355->scaf = (ltepeg_funtype_110_t)ivar_45;
        tmp92355->stack = (ltepeg__ent_adt_t)ivar_53;
        /* St */ ltepeg_record_101_t ivar_10;
        //copying to ltepeg_record_101 from ltepeg_record_111;
        {
         ivar_10 = new_ltepeg_record_101();
         uint32_t tmp92372;
         //copying to uint32 from uint32;
         tmp92372 = (uint32_t)ivar_1;
         tmp92372 += 1;
         ivar_10->scaf = new_ltepeg_array_63(tmp92372);
         for (uint32_t index_83 = 0; index_83 < tmp92372; index_83++){
                 uint32_t tmp92374;
                 tmp92374 = (uint32_t)255;
                 ivar_10->scaf->elems[index_83] = new_ltepeg_array_62(tmp92374);
                 for (uint32_t index_84 = 0; index_84 < tmp92374; index_84++){
                  ivar_10->scaf->elems[index_83]->elems[index_84] = (ltepeg__ent_adt_t)ivar_82->scaf->ftbl->fptr(ivar_82->scaf, index_83)->ftbl->fptr(ivar_82->scaf->ftbl->fptr(ivar_82->scaf, index_83), index_84);
                  if (ivar_10->scaf->elems[index_83]->elems[index_84] != NULL) ivar_10->scaf->elems[index_83]->elems[index_84]->count++;
                 };
         };
         ivar_10->depth = (uint64_t)ivar_82->depth;
         ivar_10->stack = (ltepeg__ent_adt_t)ivar_82->stack;
         if (ivar_10->stack != NULL) ivar_10->stack->count++;
         ivar_10->lflag = (bool_t)ivar_82->lflag;
        };
        release_ltepeg_record_111(ivar_82);
        ltepeg_array_62_t ivar_56;
        ltepeg_array_63_t ivar_60;
        ltepeg_record_101_t ivar_78;
        uint8_t ivar_77;
        ivar_77 = (uint8_t)0;
        uint32_t ivar_72;
        //copying to uint32 from uint8;
        ivar_72 = (uint32_t)ivar_77;
        ivar_78 = (ltepeg_record_101_t)ltepeg__parse((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepeg_array_83_t)ivar_3, (uint32_t)ivar_72, (uint8_t)ivar_4, (ltepeg_record_101_t)ivar_10);
        ivar_60 = (ltepeg_array_63_t)ivar_78->scaf;
        ivar_60->count++;
        release_ltepeg_record_101(ivar_78);
        uint32_t ivar_80;
        ivar_80 = (uint32_t)0;
        ivar_56 = (ltepeg_array_62_t)ivar_60->elems[ivar_80];
        ivar_56->count++;
        release_ltepeg_array_63(ivar_60);
        result = (ltepeg__ent_adt_t)ivar_56->elems[ivar_4];
        result->count++;
        release_ltepeg_array_62(ivar_56);

        
        return result;
}
