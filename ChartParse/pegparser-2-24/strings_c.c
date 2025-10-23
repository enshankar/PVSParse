//Code generated using pvs2ir2c
#include "strings_c.h"

void release_strings_funtype_0(strings_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

strings_funtype_0_t copy_strings_funtype_0(strings_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_strings_funtype_0(strings_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        strings_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp2087 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp2087 == 0);
        bool_t keymatch;
        int64_t tmp2088 = mpz_cmp(data.key, i);
        keymatch = (tmp2088 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                int64_t tmp2087 = mpz_cmp_ui(data.key, 0);
                keyzero = (tmp2087 == 0);

                int64_t tmp2088 = mpz_cmp(data.key, i);
                keymatch = (tmp2088 == 0);
                }
        return hashindex;
        }

strings_funtype_0_t dupdate_strings_funtype_0(strings_funtype_0_t a, mpz_ptr_t i, uint32_t v){
        strings_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (strings_funtype_0_htbl_t)safe_malloc(sizeof(struct strings_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (strings_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct strings_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        strings_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                strings_funtype_0_hashentry_t * new_data = (strings_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct strings_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp2089 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp2089 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp2090 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp2090 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp2091 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp2091 == 0);
                                }
                                mpz_set(new_data[new_loc].key, data[j].key);
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (uint32_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = mpz_hash(i);
        uint32_t hashindex = lookup_strings_funtype_0(htbl, i, ihash);
        strings_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp2092 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp2092 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v; htbl->num_entries++;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint32_t)v;};
        return a;

}

strings_funtype_0_t update_strings_funtype_0(strings_funtype_0_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_strings_funtype_0(a, i, v);
            } else {
                strings_funtype_0_t x = copy_strings_funtype_0(a);
                a->count--;
                return dupdate_strings_funtype_0(x, i, v);
            }}

bool_t equal_strings_funtype_0(strings_funtype_0_t x, strings_funtype_0_t y){
        return false;}

char* json_strings_funtype_0(strings_funtype_0_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"strings_funtype_0\""); return result;}


strings__string_t new_strings__string(void){
        strings__string_t tmp = (strings__string_t) safe_malloc(sizeof(struct strings__string_s));
        tmp->count = 1;
        return tmp;}

void release_strings__string(strings__string_t x){
        x->count--;
        if (x->count <= 0){
         release_strings_funtype_0(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_strings__string_ptr(pointer_t x, type_actual_t T){
        release_strings__string((strings__string_t)x);
}

strings__string_t copy_strings__string(strings__string_t x){
        strings__string_t y = new_strings__string();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_strings__string(strings__string_t x, strings__string_t y){
        bool_t tmp = true;tmp = tmp && (mpz_cmp(x->length, y->length) == 0);
        tmp = tmp && equal_strings_funtype_0(x->seq, y->seq);
        return tmp;}

char * json_strings__string(strings__string_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(18);
         sprintf(fld0, "\"length\" : ");
        tmp[0] = safe_strcat(fld0, json_mpz(x->length));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"seq\" : ");
        tmp[1] = safe_strcat(fld1, json_strings_funtype_0(x->seq));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_strings__string_ptr(pointer_t x, pointer_t y, actual_strings__string_t T){
        return equal_strings__string((strings__string_t)x, (strings__string_t)y);
}

char * json_strings__string_ptr(pointer_t x, actual_strings__string_t T){
        return json_strings__string((strings__string_t)x);
}

actual_strings__string_t actual_strings__string(){
        actual_strings__string_t new = (actual_strings__string_t)safe_malloc(sizeof(struct actual_strings__string_s));
        new->equal_ptr = (equal_ptr_t)(*equal_strings__string_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_strings__string_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_strings__string_ptr);
 

 
        return new;
 };

strings__string_t update_strings__string_length(strings__string_t x, mpz_ptr_t v){
        strings__string_t y;
        if (x->count == 1){y = x;}
        else {y = copy_strings__string(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

strings__string_t update_strings__string_seq(strings__string_t x, strings_funtype_0_t v){
        strings__string_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_strings_funtype_0(x->seq);};}
        else {y = copy_strings__string(x); x->count--; y->seq->count--;};
        y->seq = (strings_funtype_0_t)v;
        return y;}




strings_array_2_t new_strings_array_2(uint32_t size){
        strings_array_2_t tmp = (strings_array_2_t) safe_malloc(sizeof(struct strings_array_2_s) + (size * sizeof(uint32_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_strings_array_2(strings_array_2_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_strings_array_2_ptr(pointer_t x, type_actual_t T){
        release_strings_array_2((strings_array_2_t)x);
}

strings_array_2_t copy_strings_array_2(strings_array_2_t x){
        strings_array_2_t tmp = new_strings_array_2(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint32_t)x->elems[i];};
         return tmp;}

bool_t equal_strings_array_2(strings_array_2_t x, strings_array_2_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_strings_array_2(strings_array_2_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint32(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_strings_array_2_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_strings_array_2((strings_array_2_t)x, (strings_array_2_t)y);
}

char * json_strings_array_2_ptr(pointer_t x, type_actual_t T){
        return json_strings_array_2((strings_array_2_t)x);
}

actual_strings_array_2_t actual_strings_array_2(){
        actual_strings_array_2_t new = (actual_strings_array_2_t)safe_malloc(sizeof(struct actual_strings_array_2_s));
        new->equal_ptr = (equal_ptr_t)(*equal_strings_array_2_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_strings_array_2_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_strings_array_2_ptr);
 

 
        return new;
 };

strings_array_2_t update_strings_array_2(strings_array_2_t x, uint32_t i, uint32_t v){
        strings_array_2_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_strings_array_2(x );
                x->count--;};
        y->elems[i] = (uint32_t)v;
        return y;}

strings_array_2_t upgrade_strings_array_2(strings_array_2_t x, uint32_t i, uint32_t v){
        strings_array_2_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct strings_array_2_s) + (newmax * sizeof(uint32_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_strings_array_2(x);}
           else {y = copy_strings_array_2(x );
                x->count--;};
        y->elems[i] = (uint32_t)v;
        return y;}



void release_strings_funtype_3(strings_funtype_3_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

strings_funtype_3_t copy_strings_funtype_3(strings_funtype_3_t x){return x->ftbl->cptr(x);}

uint32_t lookup_strings_funtype_3(strings_funtype_3_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        strings_funtype_3_hashentry_t data = htbl->data[hashindex];
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

strings_funtype_3_t dupdate_strings_funtype_3(strings_funtype_3_t a, uint32_t i, uint32_t v){
        strings_funtype_3_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (strings_funtype_3_htbl_t)safe_malloc(sizeof(struct strings_funtype_3_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (strings_funtype_3_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct strings_funtype_3_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        strings_funtype_3_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                strings_funtype_3_hashentry_t * new_data = (strings_funtype_3_hashentry_t *)safe_malloc(new_size * sizeof(struct strings_funtype_3_hashentry_s));
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
                                new_data[new_loc].value = (uint32_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_strings_funtype_3(htbl, i, ihash);
        strings_funtype_3_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v; htbl->num_entries++;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint32_t)v;};
        return a;

}

strings_funtype_3_t update_strings_funtype_3(strings_funtype_3_t a, uint32_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_strings_funtype_3(a, i, v);
            } else {
                strings_funtype_3_t x = copy_strings_funtype_3(a);
                a->count--;
                return dupdate_strings_funtype_3(x, i, v);
            }}

bool_t equal_strings_funtype_3(strings_funtype_3_t x, strings_funtype_3_t y){
        return false;}

char* json_strings_funtype_3(strings_funtype_3_t x){char * result = safe_malloc(27); sprintf(result, "%s", "\"strings_funtype_3\""); return result;}


uint32_t f_strings_closure_4(struct strings_closure_4_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        strings_funtype_3_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_strings_funtype_3(htbl, bvar, hash);
        strings_funtype_3_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint32_t result;
            result = (uint32_t)entry.value;
            return result;}
        

        return h_strings_closure_4(bvar, closure->fvar_1, closure->fvar_2);};

return h_strings_closure_4(bvar, closure->fvar_1, closure->fvar_2);}

uint32_t m_strings_closure_4(struct strings_closure_4_s * closure, uint32_t bvar){
        return h_strings_closure_4(bvar, closure->fvar_1, closure->fvar_2);}

uint32_t h_strings_closure_4(uint32_t ivar_7, strings_array_2_t ivar_2, uint32_t ivar_1){
        uint32_t result;
        result = (uint32_t)ivar_2->elems[ivar_7];

        return result;
}

strings_closure_4_t new_strings_closure_4(void){
        static struct strings_funtype_3_ftbl_s ftbl = {.fptr = (uint32_t (*)(strings_funtype_3_t, uint32_t))&f_strings_closure_4, .mptr = (uint32_t (*)(strings_funtype_3_t, uint32_t))&m_strings_closure_4, .rptr =  (void (*)(strings_funtype_3_t))&release_strings_closure_4, .cptr = (strings_funtype_3_t (*)(strings_funtype_3_t))&copy_strings_closure_4};
        strings_closure_4_t tmp = (strings_closure_4_t) safe_malloc(sizeof(struct strings_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_strings_closure_4(strings_funtype_3_t closure){
        strings_closure_4_t x = (strings_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
         release_strings_array_2(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

strings_closure_4_t copy_strings_closure_4(strings_closure_4_t x){
        strings_closure_4_t y = new_strings_closure_4();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            strings_funtype_3_htbl_t new_htbl = (strings_funtype_3_htbl_t) safe_malloc(sizeof(struct strings_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            strings_funtype_3_hashentry_t * new_data = (strings_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct strings_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct strings_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_strings_closure_5(struct strings_closure_5_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        strings_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_strings_funtype_0(htbl, bvar, hash);
        strings_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp2094 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp2094 == 0);
        if (!keyzero || entry.keyhash != 0){
            uint32_t result;
            result = (uint32_t)entry.value;
            return result;}
        

        return h_strings_closure_5(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);};

return h_strings_closure_5(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

uint32_t m_strings_closure_5(struct strings_closure_5_s * closure, mpz_ptr_t bvar){
        return h_strings_closure_5(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

uint32_t h_strings_closure_5(mpz_ptr_t ivar_17, mpz_ptr_t ivar_4, uint32_t ivar_1, strings_funtype_3_t ivar_14){
        uint32_t result;
        uint32_t ivar_15;
        uint32_t ivar_16;
        //copying to uint32 from mpz;
        ivar_16 = (uint32_t)mpz_get_ui(ivar_17);
        ivar_15 = (uint32_t)ivar_14->ftbl->fptr(ivar_14, ivar_16);
        //copying to uint32 from uint32;
        result = (uint32_t)ivar_15;

        return result;
}

strings_closure_5_t new_strings_closure_5(void){
        static struct strings_funtype_0_ftbl_s ftbl = {.fptr = (uint32_t (*)(strings_funtype_0_t, mpz_ptr_t))&f_strings_closure_5, .mptr = (uint32_t (*)(strings_funtype_0_t, mpz_ptr_t))&m_strings_closure_5, .rptr =  (void (*)(strings_funtype_0_t))&release_strings_closure_5, .cptr = (strings_funtype_0_t (*)(strings_funtype_0_t))&copy_strings_closure_5};
        strings_closure_5_t tmp = (strings_closure_5_t) safe_malloc(sizeof(struct strings_closure_5_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        return tmp;}

void release_strings_closure_5(strings_funtype_0_t closure){
        strings_closure_5_t x = (strings_closure_5_t)closure;
        x->count--;
        if (x->count <= 0){
         release_strings_funtype_3(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

strings_closure_5_t copy_strings_closure_5(strings_closure_5_t x){
        strings_closure_5_t y = new_strings_closure_5();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            strings_funtype_0_htbl_t new_htbl = (strings_funtype_0_htbl_t) safe_malloc(sizeof(struct strings_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            strings_funtype_0_hashentry_t * new_data = (strings_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct strings_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct strings_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

strings__string_t strings__make_string(uint32_t ivar_1, strings_array_2_t ivar_2){
        strings__string_t  result;
        mpz_ptr_t ivar_4;
        //copying to mpz from uint32;
        mpz_mk_set_ui(ivar_4, ivar_1);
        strings_funtype_3_t ivar_14;
        strings_closure_4_t cl2093;
        cl2093 = new_strings_closure_4();
        cl2093->fvar_1 = (strings_array_2_t)ivar_2;
        if (cl2093->fvar_1 != NULL) cl2093->fvar_1->count++;
        cl2093->fvar_2 = (uint32_t)ivar_1;
        release_strings_array_2(ivar_2);
        ivar_14 = (strings_funtype_3_t)cl2093;
        strings_funtype_0_t ivar_12;
        strings_closure_5_t cl2095;
        cl2095 = new_strings_closure_5();
        mpz_set(cl2095->fvar_1, ivar_4);
        cl2095->fvar_2 = (uint32_t)ivar_1;
        cl2095->fvar_3 = (strings_funtype_3_t)ivar_14;
        if (cl2095->fvar_3 != NULL) cl2095->fvar_3->count++;
        ivar_12 = (strings_funtype_0_t)cl2095;
        strings__string_t tmp2096 = new_strings__string();;
        result = (strings__string_t)tmp2096;
        mpz_init(tmp2096->length);
        mpz_set(tmp2096->length, ivar_4);
        tmp2096->seq = (strings_funtype_0_t)ivar_12;

        
        return result;
}