//Code generated using pvs2ir2c
#include "character_adt_c.h"


character_adt__character_adt_t new_character_adt__character_adt(void){
        character_adt__character_adt_t tmp = (character_adt__character_adt_t) safe_malloc(sizeof(struct character_adt__character_adt_s));
        tmp->count = 1;
        return tmp;}

void release_character_adt__character_adt(character_adt__character_adt_t x){
switch (x->character_adt__character_adt_index) {
case 0:  release_character_adt__char((character_adt__char_t) x); break;
}}

void release_character_adt__character_adt_ptr(pointer_t x, type_actual_t T){
        release_character_adt__character_adt((character_adt__character_adt_t)x);
}

character_adt__character_adt_t copy_character_adt__character_adt(character_adt__character_adt_t x){
        character_adt__character_adt_t y = new_character_adt__character_adt();
        y->character_adt__character_adt_index = (uint8_t)x->character_adt__character_adt_index;
        y->count = 1;
        return y;}

bool_t equal_character_adt__character_adt(character_adt__character_adt_t x, character_adt__character_adt_t y){
        bool_t tmp = x->character_adt__character_adt_index == y->character_adt__character_adt_index;
        switch  (x->character_adt__character_adt_index) {
                case 0: tmp = tmp && equal_character_adt__char((character_adt__char_t) x, (character_adt__char_t) y); break;
        }
        return tmp;
}

char * json_character_adt__character_adt(character_adt__character_adt_t x){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ \"constructor\" = %u,", x->character_adt__character_adt_index);
        switch  (x->character_adt__character_adt_index) {
                case 0: tmp = safe_strcat(tmp, json_character_adt__char((character_adt__char_t) x)); break;
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_character_adt__character_adt_ptr(pointer_t x, pointer_t y, actual_character_adt__character_adt_t T){
        return equal_character_adt__character_adt((character_adt__character_adt_t)x, (character_adt__character_adt_t)y);
}

char * json_character_adt__character_adt_ptr(pointer_t x, actual_character_adt__character_adt_t T){
        return json_character_adt__character_adt((character_adt__character_adt_t)x);
}

actual_character_adt__character_adt_t actual_character_adt__character_adt(){
        actual_character_adt__character_adt_t new = (actual_character_adt__character_adt_t)safe_malloc(sizeof(struct actual_character_adt__character_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_character_adt__character_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_character_adt__character_adt_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_character_adt__character_adt_ptr);
 

 
        return new;
 };

character_adt__character_adt_t update_character_adt__character_adt_character_adt__character_adt_index(character_adt__character_adt_t x, uint8_t v){
        character_adt__character_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_character_adt__character_adt(x); x->count--;};
        y->character_adt__character_adt_index = (uint8_t)v;
        return y;}




character_adt__char_t new_character_adt__char(void){
        character_adt__char_t tmp = (character_adt__char_t) safe_malloc(sizeof(struct character_adt__char_s));
        tmp->count = 1;
        return tmp;}

void release_character_adt__char(character_adt__char_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_character_adt__char_ptr(pointer_t x, type_actual_t T){
        release_character_adt__char((character_adt__char_t)x);
}

character_adt__char_t copy_character_adt__char(character_adt__char_t x){
        character_adt__char_t y = new_character_adt__char();
        y->character_adt__character_adt_index = (uint8_t)x->character_adt__character_adt_index;
        y->code = (uint32_t)x->code;
        y->count = 1;
        return y;}

bool_t equal_character_adt__char(character_adt__char_t x, character_adt__char_t y){
        bool_t tmp = true;
        tmp = tmp && x->character_adt__character_adt_index == y->character_adt__character_adt_index;
        tmp = tmp && x->code == y->code;
        return tmp;}

char * json_character_adt__char(character_adt__char_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(46);
         sprintf(fld0, "\"character_adt__character_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->character_adt__character_adt_index));
        char * fld1 = safe_malloc(16);
         sprintf(fld1, "\"code\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->code));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_character_adt__char_ptr(pointer_t x, pointer_t y, actual_character_adt__char_t T){
        return equal_character_adt__char((character_adt__char_t)x, (character_adt__char_t)y);
}

char * json_character_adt__char_ptr(pointer_t x, actual_character_adt__char_t T){
        return json_character_adt__char((character_adt__char_t)x);
}

actual_character_adt__char_t actual_character_adt__char(){
        actual_character_adt__char_t new = (actual_character_adt__char_t)safe_malloc(sizeof(struct actual_character_adt__char_s));
        new->equal_ptr = (equal_ptr_t)(*equal_character_adt__char_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_character_adt__char_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_character_adt__char_ptr);
 

 
        return new;
 };

character_adt__char_t update_character_adt__char_character_adt__character_adt_index(character_adt__char_t x, uint8_t v){
        character_adt__char_t y;
        if (x->count == 1){y = x;}
        else {y = copy_character_adt__char(x); x->count--;};
        y->character_adt__character_adt_index = (uint8_t)v;
        return y;}

character_adt__char_t update_character_adt__char_code(character_adt__char_t x, uint32_t v){
        character_adt__char_t y;
        if (x->count == 1){y = x;}
        else {y = copy_character_adt__char(x); x->count--;};
        y->code = (uint32_t)v;
        return y;}



void release_character_adt_funtype_2(character_adt_funtype_2_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

character_adt_funtype_2_t copy_character_adt_funtype_2(character_adt_funtype_2_t x){return x->ftbl->cptr(x);}

bool_t equal_character_adt_funtype_2(character_adt_funtype_2_t x, character_adt_funtype_2_t y){
        return false;}

char* json_character_adt_funtype_2(character_adt_funtype_2_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"character_adt_funtype_2\""); return result;}

void release_character_adt_funtype_3(character_adt_funtype_3_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

character_adt_funtype_3_t copy_character_adt_funtype_3(character_adt_funtype_3_t x){return x->ftbl->cptr(x);}

bool_t equal_character_adt_funtype_3(character_adt_funtype_3_t x, character_adt_funtype_3_t y){
        return false;}

char* json_character_adt_funtype_3(character_adt_funtype_3_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"character_adt_funtype_3\""); return result;}

void release_character_adt_funtype_4(character_adt_funtype_4_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

character_adt_funtype_4_t copy_character_adt_funtype_4(character_adt_funtype_4_t x){return x->ftbl->cptr(x);}

uint32_t lookup_character_adt_funtype_4(character_adt_funtype_4_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        character_adt_funtype_4_hashentry_t data = htbl->data[hashindex];
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

character_adt_funtype_4_t dupdate_character_adt_funtype_4(character_adt_funtype_4_t a, uint32_t i, mpz_ptr_t v){
        character_adt_funtype_4_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (character_adt_funtype_4_htbl_t)safe_malloc(sizeof(struct character_adt_funtype_4_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (character_adt_funtype_4_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct character_adt_funtype_4_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        character_adt_funtype_4_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                character_adt_funtype_4_hashentry_t * new_data = (character_adt_funtype_4_hashentry_t *)safe_malloc(new_size * sizeof(struct character_adt_funtype_4_hashentry_s));
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
        uint32_t hashindex = lookup_character_adt_funtype_4(htbl, i, ihash);
        character_adt_funtype_4_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; mpz_set(htbl->data[hashindex].value, v); htbl->num_entries++;}
            else {mpz_ptr_t tempvalue;mpz_mk_set(tempvalue, htbl->data[hashindex].value);mpz_set(htbl->data[hashindex].value, v);};
        return a;

}

character_adt_funtype_4_t update_character_adt_funtype_4(character_adt_funtype_4_t a, uint32_t i, mpz_ptr_t v){
        if (a->count == 1){
                return dupdate_character_adt_funtype_4(a, i, v);
            } else {
                character_adt_funtype_4_t x = copy_character_adt_funtype_4(a);
                a->count--;
                return dupdate_character_adt_funtype_4(x, i, v);
            }}

bool_t equal_character_adt_funtype_4(character_adt_funtype_4_t x, character_adt_funtype_4_t y){
        return false;}

char* json_character_adt_funtype_4(character_adt_funtype_4_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"character_adt_funtype_4\""); return result;}


mpz_ptr_t f_character_adt_closure_5(struct character_adt_closure_5_s * closure, uint32_t bvar){
        mpz_ptr_t result = h_character_adt_closure_5(bvar, closure->fvar_1); 
        return result;}

mpz_ptr_t m_character_adt_closure_5(struct character_adt_closure_5_s * closure, uint32_t bvar){
        return h_character_adt_closure_5(bvar, closure->fvar_1);}

mpz_ptr_t h_character_adt_closure_5(uint32_t ivar_4, character_adt_funtype_4_t ivar_1){
        mpz_ptr_t result;
        uint32_t ivar_15;
        ivar_15 = (uint32_t) ivar_4;
        mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_15));

        return result;
}

character_adt_closure_5_t new_character_adt_closure_5(void){
        static struct character_adt_funtype_3_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(character_adt_funtype_3_t, uint32_t))&f_character_adt_closure_5, .mptr = (mpz_ptr_t (*)(character_adt_funtype_3_t, uint32_t))&m_character_adt_closure_5, .rptr =  (void (*)(character_adt_funtype_3_t))&release_character_adt_closure_5, .cptr = (character_adt_funtype_3_t (*)(character_adt_funtype_3_t))&copy_character_adt_closure_5};
        character_adt_closure_5_t tmp = (character_adt_closure_5_t) safe_malloc(sizeof(struct character_adt_closure_5_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_character_adt_closure_5(character_adt_funtype_3_t closure){
        character_adt_closure_5_t x = (character_adt_closure_5_t)closure;
        x->count--;
        if (x->count <= 0){
         release_character_adt_funtype_4(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

character_adt_closure_5_t copy_character_adt_closure_5(character_adt_closure_5_t x){
        character_adt_closure_5_t y = new_character_adt_closure_5();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            character_adt_funtype_3_htbl_t new_htbl = (character_adt_funtype_3_htbl_t) safe_malloc(sizeof(struct character_adt_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            character_adt_funtype_3_hashentry_t * new_data = (character_adt_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct character_adt_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct character_adt_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


character_adt_record_6_t new_character_adt_record_6(void){
        character_adt_record_6_t tmp = (character_adt_record_6_t) safe_malloc(sizeof(struct character_adt_record_6_s));
        tmp->count = 1;
        return tmp;}

void release_character_adt_record_6(character_adt_record_6_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_character_adt_record_6_ptr(pointer_t x, type_actual_t T){
        release_character_adt_record_6((character_adt_record_6_t)x);
}

character_adt_record_6_t copy_character_adt_record_6(character_adt_record_6_t x){
        character_adt_record_6_t y = new_character_adt_record_6();
        y->project_1 = (uint32_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->count = 1;
        return y;}

bool_t equal_character_adt_record_6(character_adt_record_6_t x, character_adt_record_6_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

char * json_character_adt_record_6(character_adt_record_6_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint32(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_character_adt_record_6_ptr(pointer_t x, pointer_t y, actual_character_adt_record_6_t T){
        return equal_character_adt_record_6((character_adt_record_6_t)x, (character_adt_record_6_t)y);
}

char * json_character_adt_record_6_ptr(pointer_t x, actual_character_adt_record_6_t T){
        return json_character_adt_record_6((character_adt_record_6_t)x);
}

actual_character_adt_record_6_t actual_character_adt_record_6(){
        actual_character_adt_record_6_t new = (actual_character_adt_record_6_t)safe_malloc(sizeof(struct actual_character_adt_record_6_s));
        new->equal_ptr = (equal_ptr_t)(*equal_character_adt_record_6_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_character_adt_record_6_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_character_adt_record_6_ptr);
 

 
        return new;
 };

character_adt_record_6_t update_character_adt_record_6_project_1(character_adt_record_6_t x, uint32_t v){
        character_adt_record_6_t y;
        if (x->count == 1){y = x;}
        else {y = copy_character_adt_record_6(x); x->count--;};
        y->project_1 = (uint32_t)v;
        return y;}

character_adt_record_6_t update_character_adt_record_6_project_2(character_adt_record_6_t x, uint32_t v){
        character_adt_record_6_t y;
        if (x->count == 1){y = x;}
        else {y = copy_character_adt_record_6(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}



void release_character_adt_funtype_7(character_adt_funtype_7_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

character_adt_funtype_7_t copy_character_adt_funtype_7(character_adt_funtype_7_t x){return x->ftbl->cptr(x);}

bool_t equal_character_adt_funtype_7(character_adt_funtype_7_t x, character_adt_funtype_7_t y){
        return false;}

char* json_character_adt_funtype_7(character_adt_funtype_7_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"character_adt_funtype_7\""); return result;}


mpz_ptr_t f_character_adt_closure_8(struct character_adt_closure_8_s * closure, uint32_t bvar){
        mpz_ptr_t result = h_character_adt_closure_8(bvar, closure->fvar_1); 
        return result;}

mpz_ptr_t m_character_adt_closure_8(struct character_adt_closure_8_s * closure, uint32_t bvar){
        return h_character_adt_closure_8(bvar, closure->fvar_1);}

mpz_ptr_t h_character_adt_closure_8(uint32_t ivar_4, character_adt_funtype_7_t ivar_1){
        mpz_ptr_t result;
        uint32_t ivar_15;
        ivar_15 = (uint32_t) ivar_4;
        mpz_mk_set(result, ivar_1->ftbl->mptr(ivar_1, ivar_15, ivar_4));

        return result;
}

character_adt_closure_8_t new_character_adt_closure_8(void){
        static struct character_adt_funtype_3_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(character_adt_funtype_3_t, uint32_t))&f_character_adt_closure_8, .mptr = (mpz_ptr_t (*)(character_adt_funtype_3_t, uint32_t))&m_character_adt_closure_8, .rptr =  (void (*)(character_adt_funtype_3_t))&release_character_adt_closure_8, .cptr = (character_adt_funtype_3_t (*)(character_adt_funtype_3_t))&copy_character_adt_closure_8};
        character_adt_closure_8_t tmp = (character_adt_closure_8_t) safe_malloc(sizeof(struct character_adt_closure_8_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_character_adt_closure_8(character_adt_funtype_3_t closure){
        character_adt_closure_8_t x = (character_adt_closure_8_t)closure;
        x->count--;
        if (x->count <= 0){
         release_character_adt_funtype_7(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

character_adt_closure_8_t copy_character_adt_closure_8(character_adt_closure_8_t x){
        character_adt_closure_8_t y = new_character_adt_closure_8();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            character_adt_funtype_3_htbl_t new_htbl = (character_adt_funtype_3_htbl_t) safe_malloc(sizeof(struct character_adt_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            character_adt_funtype_3_hashentry_t * new_data = (character_adt_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct character_adt_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct character_adt_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_character_adt_funtype_9(character_adt_funtype_9_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

character_adt_funtype_9_t copy_character_adt_funtype_9(character_adt_funtype_9_t x){return x->ftbl->cptr(x);}

bool_t equal_character_adt_funtype_9(character_adt_funtype_9_t x, character_adt_funtype_9_t y){
        return false;}

char* json_character_adt_funtype_9(character_adt_funtype_9_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"character_adt_funtype_9\""); return result;}

void release_character_adt_funtype_10(character_adt_funtype_10_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

character_adt_funtype_10_t copy_character_adt_funtype_10(character_adt_funtype_10_t x){return x->ftbl->cptr(x);}

uint32_t lookup_character_adt_funtype_10(character_adt_funtype_10_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        character_adt_funtype_10_hashentry_t data = htbl->data[hashindex];
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

character_adt_funtype_10_t dupdate_character_adt_funtype_10(character_adt_funtype_10_t a, uint32_t i, ordstruct_adt__ordstruct_adt_t v){
        character_adt_funtype_10_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (character_adt_funtype_10_htbl_t)safe_malloc(sizeof(struct character_adt_funtype_10_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (character_adt_funtype_10_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct character_adt_funtype_10_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        character_adt_funtype_10_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                character_adt_funtype_10_hashentry_t * new_data = (character_adt_funtype_10_hashentry_t *)safe_malloc(new_size * sizeof(struct character_adt_funtype_10_hashentry_s));
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
        uint32_t hashindex = lookup_character_adt_funtype_10(htbl, i, ihash);
        character_adt_funtype_10_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v; htbl->num_entries++;}
            else {ordstruct_adt__ordstruct_adt_t tempvalue;tempvalue = (ordstruct_adt__ordstruct_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ordstruct_adt__ordstruct_adt(tempvalue);};
        return a;

}

character_adt_funtype_10_t update_character_adt_funtype_10(character_adt_funtype_10_t a, uint32_t i, ordstruct_adt__ordstruct_adt_t v){
        if (a->count == 1){
                return dupdate_character_adt_funtype_10(a, i, v);
            } else {
                character_adt_funtype_10_t x = copy_character_adt_funtype_10(a);
                a->count--;
                return dupdate_character_adt_funtype_10(x, i, v);
            }}

bool_t equal_character_adt_funtype_10(character_adt_funtype_10_t x, character_adt_funtype_10_t y){
        return false;}

char* json_character_adt_funtype_10(character_adt_funtype_10_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"character_adt_funtype_10\""); return result;}


ordstruct_adt__ordstruct_adt_t f_character_adt_closure_11(struct character_adt_closure_11_s * closure, uint32_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_character_adt_closure_11(bvar, closure->fvar_1); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_character_adt_closure_11(struct character_adt_closure_11_s * closure, uint32_t bvar){
        return h_character_adt_closure_11(bvar, closure->fvar_1);}

ordstruct_adt__ordstruct_adt_t h_character_adt_closure_11(uint32_t ivar_4, character_adt_funtype_10_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        uint32_t ivar_15;
        ivar_15 = (uint32_t) ivar_4;
        result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_15);

        return result;
}

character_adt_closure_11_t new_character_adt_closure_11(void){
        static struct character_adt_funtype_9_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(character_adt_funtype_9_t, uint32_t))&f_character_adt_closure_11, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(character_adt_funtype_9_t, uint32_t))&m_character_adt_closure_11, .rptr =  (void (*)(character_adt_funtype_9_t))&release_character_adt_closure_11, .cptr = (character_adt_funtype_9_t (*)(character_adt_funtype_9_t))&copy_character_adt_closure_11};
        character_adt_closure_11_t tmp = (character_adt_closure_11_t) safe_malloc(sizeof(struct character_adt_closure_11_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_character_adt_closure_11(character_adt_funtype_9_t closure){
        character_adt_closure_11_t x = (character_adt_closure_11_t)closure;
        x->count--;
        if (x->count <= 0){
         release_character_adt_funtype_10(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

character_adt_closure_11_t copy_character_adt_closure_11(character_adt_closure_11_t x){
        character_adt_closure_11_t y = new_character_adt_closure_11();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            character_adt_funtype_9_htbl_t new_htbl = (character_adt_funtype_9_htbl_t) safe_malloc(sizeof(struct character_adt_funtype_9_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            character_adt_funtype_9_hashentry_t * new_data = (character_adt_funtype_9_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct character_adt_funtype_9_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct character_adt_funtype_9_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_character_adt_funtype_12(character_adt_funtype_12_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

character_adt_funtype_12_t copy_character_adt_funtype_12(character_adt_funtype_12_t x){return x->ftbl->cptr(x);}

bool_t equal_character_adt_funtype_12(character_adt_funtype_12_t x, character_adt_funtype_12_t y){
        return false;}

char* json_character_adt_funtype_12(character_adt_funtype_12_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"character_adt_funtype_12\""); return result;}


ordstruct_adt__ordstruct_adt_t f_character_adt_closure_13(struct character_adt_closure_13_s * closure, uint32_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_character_adt_closure_13(bvar, closure->fvar_1); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_character_adt_closure_13(struct character_adt_closure_13_s * closure, uint32_t bvar){
        return h_character_adt_closure_13(bvar, closure->fvar_1);}

ordstruct_adt__ordstruct_adt_t h_character_adt_closure_13(uint32_t ivar_4, character_adt_funtype_12_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        uint32_t ivar_15;
        ivar_15 = (uint32_t) ivar_4;
        result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->mptr(ivar_1, ivar_15, ivar_4);

        return result;
}

character_adt_closure_13_t new_character_adt_closure_13(void){
        static struct character_adt_funtype_9_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(character_adt_funtype_9_t, uint32_t))&f_character_adt_closure_13, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(character_adt_funtype_9_t, uint32_t))&m_character_adt_closure_13, .rptr =  (void (*)(character_adt_funtype_9_t))&release_character_adt_closure_13, .cptr = (character_adt_funtype_9_t (*)(character_adt_funtype_9_t))&copy_character_adt_closure_13};
        character_adt_closure_13_t tmp = (character_adt_closure_13_t) safe_malloc(sizeof(struct character_adt_closure_13_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_character_adt_closure_13(character_adt_funtype_9_t closure){
        character_adt_closure_13_t x = (character_adt_closure_13_t)closure;
        x->count--;
        if (x->count <= 0){
         release_character_adt_funtype_12(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

character_adt_closure_13_t copy_character_adt_closure_13(character_adt_closure_13_t x){
        character_adt_closure_13_t y = new_character_adt_closure_13();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            character_adt_funtype_9_htbl_t new_htbl = (character_adt_funtype_9_htbl_t) safe_malloc(sizeof(struct character_adt_funtype_9_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            character_adt_funtype_9_hashentry_t * new_data = (character_adt_funtype_9_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct character_adt_funtype_9_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct character_adt_funtype_9_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

bool_t r_character_adt__charp(character_adt__character_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->character_adt__character_adt_index;
        release_character_adt__character_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

character_adt__char_t update_character_adt__character_adt_code(character_adt__character_adt_t ivar_1, uint32_t ivar_3){
        character_adt__char_t  result;
        character_adt__char_t ivar_2;
        //copying to character_adt__char from character_adt__character_adt;
        ivar_2 = (character_adt__char_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_character_adt__character_adt(ivar_1);
        result = (character_adt__char_t)update_character_adt__char_code(ivar_2, ivar_3);

        
        return result;
}

uint32_t character_adt__character_adt_code(character_adt__character_adt_t ivar_1){
        uint32_t  result;
        character_adt__char_t ivar_2;
        //copying to character_adt__char from character_adt__character_adt;
        ivar_2 = (character_adt__char_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_character_adt__character_adt(ivar_1);
        result = (uint32_t)ivar_2->code;
        release_character_adt__char(ivar_2);

        
        return result;
}

character_adt__character_adt_t character_adt__char(uint32_t ivar_2){
        character_adt__character_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        character_adt__char_t tmp2054 = new_character_adt__char();;
        result = (character_adt__character_adt_t)tmp2054;
        tmp2054->character_adt__character_adt_index = (uint8_t)ivar_1;
        tmp2054->code = (uint32_t)ivar_2;

        
        return result;
}

character_adt_funtype_2_t character_adt__character_ord(void){
        character_adt_funtype_2_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

uint8_t character_adt__ord(uint32_t ivar_1){
        uint8_t  result;
        result = (uint8_t)0;

        
        return result;
}

bool_t character_adt__subterm(uint32_t ivar_1, uint32_t ivar_2){
        bool_t  result;
        result = (ivar_1 == ivar_2);

        
        return result;
}

bool_t character_adt__doublelessp(uint32_t ivar_1, uint32_t ivar_2){
        bool_t  result;
        result = (bool_t) false;

        
        return result;
}

character_adt_funtype_3_t character_adt__reduce_nat(character_adt_funtype_4_t ivar_1){
        character_adt_funtype_3_t  result;
        character_adt_closure_5_t cl2057;
        cl2057 = new_character_adt_closure_5();
        cl2057->fvar_1 = (character_adt_funtype_4_t)ivar_1;
        if (cl2057->fvar_1 != NULL) cl2057->fvar_1->count++;
        release_character_adt_funtype_4(ivar_1);
        result = (character_adt_funtype_3_t)cl2057;

        
        return result;
}

character_adt_funtype_3_t character_adt__REDUCE_nat(character_adt_funtype_7_t ivar_1){
        character_adt_funtype_3_t  result;
        character_adt_closure_8_t cl2065;
        cl2065 = new_character_adt_closure_8();
        cl2065->fvar_1 = (character_adt_funtype_7_t)ivar_1;
        if (cl2065->fvar_1 != NULL) cl2065->fvar_1->count++;
        release_character_adt_funtype_7(ivar_1);
        result = (character_adt_funtype_3_t)cl2065;

        
        return result;
}

character_adt_funtype_9_t character_adt__reduce_ordinal(character_adt_funtype_10_t ivar_1){
        character_adt_funtype_9_t  result;
        character_adt_closure_11_t cl2067;
        cl2067 = new_character_adt_closure_11();
        cl2067->fvar_1 = (character_adt_funtype_10_t)ivar_1;
        if (cl2067->fvar_1 != NULL) cl2067->fvar_1->count++;
        release_character_adt_funtype_10(ivar_1);
        result = (character_adt_funtype_9_t)cl2067;

        
        return result;
}

character_adt_funtype_9_t character_adt__REDUCE_ordinal(character_adt_funtype_12_t ivar_1){
        character_adt_funtype_9_t  result;
        character_adt_closure_13_t cl2075;
        cl2075 = new_character_adt_closure_13();
        cl2075->fvar_1 = (character_adt_funtype_12_t)ivar_1;
        if (cl2075->fvar_1 != NULL) cl2075->fvar_1->count++;
        release_character_adt_funtype_12(ivar_1);
        result = (character_adt_funtype_9_t)cl2075;

        
        return result;
}