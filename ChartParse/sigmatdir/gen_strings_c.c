//Code generated using pvs2ir2c
#include "gen_strings_c.h"

void release_gen_strings_funtype_0(gen_strings_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

gen_strings_funtype_0_t copy_gen_strings_funtype_0(gen_strings_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_gen_strings_funtype_0(gen_strings_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        gen_strings_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp24070 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp24070 == 0);
        bool_t keymatch;
        int64_t tmp24071 = mpz_cmp(data.key, i);
        keymatch = (tmp24071 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                int64_t tmp24070 = mpz_cmp_ui(data.key, 0);
                keyzero = (tmp24070 == 0);

                int64_t tmp24071 = mpz_cmp(data.key, i);
                keymatch = (tmp24071 == 0);
                }
        return hashindex;
        }

gen_strings_funtype_0_t dupdate_gen_strings_funtype_0(gen_strings_funtype_0_t a, mpz_ptr_t i, uint32_t v){
        gen_strings_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (gen_strings_funtype_0_htbl_t)safe_malloc(sizeof(struct gen_strings_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (gen_strings_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct gen_strings_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        gen_strings_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                gen_strings_funtype_0_hashentry_t * new_data = (gen_strings_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct gen_strings_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp24072 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp24072 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp24073 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp24073 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp24074 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp24074 == 0);
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
        uint32_t hashindex = lookup_gen_strings_funtype_0(htbl, i, ihash);
        gen_strings_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp24075 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp24075 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v; htbl->num_entries++;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint32_t)v;};
        return a;

}

gen_strings_funtype_0_t update_gen_strings_funtype_0(gen_strings_funtype_0_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_gen_strings_funtype_0(a, i, v);
            } else {
                gen_strings_funtype_0_t x = copy_gen_strings_funtype_0(a);
                a->count--;
                return dupdate_gen_strings_funtype_0(x, i, v);
            }}

bool_t equal_gen_strings_funtype_0(gen_strings_funtype_0_t x, gen_strings_funtype_0_t y){
        return false;}

char* json_gen_strings_funtype_0(gen_strings_funtype_0_t x){char * result = safe_malloc(31); sprintf(result, "%s", "\"gen_strings_funtype_0\""); return result;}

void release_gen_strings_funtype_1(gen_strings_funtype_1_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

gen_strings_funtype_1_t copy_gen_strings_funtype_1(gen_strings_funtype_1_t x){return x->ftbl->cptr(x);}

uint32_t lookup_gen_strings_funtype_1(gen_strings_funtype_1_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        gen_strings_funtype_1_hashentry_t data = htbl->data[hashindex];
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

gen_strings_funtype_1_t dupdate_gen_strings_funtype_1(gen_strings_funtype_1_t a, uint8_t i, uint32_t v){
        gen_strings_funtype_1_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (gen_strings_funtype_1_htbl_t)safe_malloc(sizeof(struct gen_strings_funtype_1_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (gen_strings_funtype_1_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct gen_strings_funtype_1_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        gen_strings_funtype_1_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                gen_strings_funtype_1_hashentry_t * new_data = (gen_strings_funtype_1_hashentry_t *)safe_malloc(new_size * sizeof(struct gen_strings_funtype_1_hashentry_s));
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
                                new_data[new_loc].value = (uint32_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_gen_strings_funtype_1(htbl, i, ihash);
        gen_strings_funtype_1_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v; htbl->num_entries++;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint32_t)v;};
        return a;

}

gen_strings_funtype_1_t update_gen_strings_funtype_1(gen_strings_funtype_1_t a, uint8_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_gen_strings_funtype_1(a, i, v);
            } else {
                gen_strings_funtype_1_t x = copy_gen_strings_funtype_1(a);
                a->count--;
                return dupdate_gen_strings_funtype_1(x, i, v);
            }}

bool_t equal_gen_strings_funtype_1(gen_strings_funtype_1_t x, gen_strings_funtype_1_t y){
        return false;}

char* json_gen_strings_funtype_1(gen_strings_funtype_1_t x){char * result = safe_malloc(31); sprintf(result, "%s", "\"gen_strings_funtype_1\""); return result;}


uint32_t f_gen_strings_closure_2(struct gen_strings_closure_2_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        gen_strings_funtype_1_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_gen_strings_funtype_1(htbl, bvar, hash);
        gen_strings_funtype_1_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint32_t result;
            result = (uint32_t)entry.value;
            return result;}
        

        return h_gen_strings_closure_2(bvar);};

return h_gen_strings_closure_2(bvar);}

uint32_t m_gen_strings_closure_2(struct gen_strings_closure_2_s * closure, uint8_t bvar){
        return h_gen_strings_closure_2(bvar);}

extern uint32_t h_gen_strings_closure_2(uint8_t ivar_4){
        uint32_t result;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        result = (uint32_t) ivar_5;

        return result;
}

gen_strings_closure_2_t new_gen_strings_closure_2(void){
        static struct gen_strings_funtype_1_ftbl_s ftbl = {.fptr = (uint32_t (*)(gen_strings_funtype_1_t, uint8_t))&f_gen_strings_closure_2, .mptr = (uint32_t (*)(gen_strings_funtype_1_t, uint8_t))&m_gen_strings_closure_2, .rptr =  (void (*)(gen_strings_funtype_1_t))&release_gen_strings_closure_2, .cptr = (gen_strings_funtype_1_t (*)(gen_strings_funtype_1_t))&copy_gen_strings_closure_2};
        gen_strings_closure_2_t tmp = (gen_strings_closure_2_t) safe_malloc(sizeof(struct gen_strings_closure_2_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_gen_strings_closure_2(gen_strings_funtype_1_t closure){
        gen_strings_closure_2_t x = (gen_strings_closure_2_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

gen_strings_closure_2_t copy_gen_strings_closure_2(gen_strings_closure_2_t x){
        gen_strings_closure_2_t y = new_gen_strings_closure_2();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            gen_strings_funtype_1_htbl_t new_htbl = (gen_strings_funtype_1_htbl_t) safe_malloc(sizeof(struct gen_strings_funtype_1_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            gen_strings_funtype_1_hashentry_t * new_data = (gen_strings_funtype_1_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct gen_strings_funtype_1_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct gen_strings_funtype_1_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_gen_strings_closure_3(struct gen_strings_closure_3_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        gen_strings_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_gen_strings_funtype_0(htbl, bvar, hash);
        gen_strings_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp24084 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp24084 == 0);
        if (!keyzero || entry.keyhash != 0){
            uint32_t result;
            result = (uint32_t)entry.value;
            return result;}
        

        return h_gen_strings_closure_3(bvar, closure->fvar_1, closure->fvar_2);};

return h_gen_strings_closure_3(bvar, closure->fvar_1, closure->fvar_2);}

uint32_t m_gen_strings_closure_3(struct gen_strings_closure_3_s * closure, mpz_ptr_t bvar){
        return h_gen_strings_closure_3(bvar, closure->fvar_1, closure->fvar_2);}

extern uint32_t h_gen_strings_closure_3(mpz_ptr_t ivar_12, mpz_ptr_t ivar_1, gen_strings_funtype_1_t ivar_9){
        uint32_t result;
        uint32_t ivar_10;
        uint8_t ivar_11;
        //copying to uint8 from mpz;
        ivar_11 = (uint8_t)mpz_get_ui(ivar_12);
        ivar_10 = (uint32_t)ivar_9->ftbl->fptr(ivar_9, ivar_11);
        //copying to uint32 from uint32;
        result = (uint32_t)ivar_10;

        return result;
}

gen_strings_closure_3_t new_gen_strings_closure_3(void){
        static struct gen_strings_funtype_0_ftbl_s ftbl = {.fptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&f_gen_strings_closure_3, .mptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&m_gen_strings_closure_3, .rptr =  (void (*)(gen_strings_funtype_0_t))&release_gen_strings_closure_3, .cptr = (gen_strings_funtype_0_t (*)(gen_strings_funtype_0_t))&copy_gen_strings_closure_3};
        gen_strings_closure_3_t tmp = (gen_strings_closure_3_t) safe_malloc(sizeof(struct gen_strings_closure_3_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        return tmp;}

void release_gen_strings_closure_3(gen_strings_funtype_0_t closure){
        gen_strings_closure_3_t x = (gen_strings_closure_3_t)closure;
        x->count--;
        if (x->count <= 0){
         release_gen_strings_funtype_1(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

gen_strings_closure_3_t copy_gen_strings_closure_3(gen_strings_closure_3_t x){
        gen_strings_closure_3_t y = new_gen_strings_closure_3();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            gen_strings_funtype_0_htbl_t new_htbl = (gen_strings_funtype_0_htbl_t) safe_malloc(sizeof(struct gen_strings_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            gen_strings_funtype_0_hashentry_t * new_data = (gen_strings_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct gen_strings_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct gen_strings_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


gen_strings_record_4_t new_gen_strings_record_4(void){
        gen_strings_record_4_t tmp = (gen_strings_record_4_t) safe_malloc(sizeof(struct gen_strings_record_4_s));
        tmp->count = 1;
        return tmp;}

void release_gen_strings_record_4(gen_strings_record_4_t x){
        x->count--;
        if (x->count <= 0){
         release_gen_strings_funtype_0(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_gen_strings_record_4_ptr(pointer_t x, type_actual_t T){
        release_gen_strings_record_4((gen_strings_record_4_t)x);
}

gen_strings_record_4_t copy_gen_strings_record_4(gen_strings_record_4_t x){
        gen_strings_record_4_t y = new_gen_strings_record_4();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_gen_strings_record_4(gen_strings_record_4_t x, gen_strings_record_4_t y){
        bool_t tmp = true;tmp = tmp && (mpz_cmp(x->length, y->length) == 0);
        tmp = tmp && equal_gen_strings_funtype_0(x->seq, y->seq);
        return tmp;}

char * json_gen_strings_record_4(gen_strings_record_4_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(18);
         sprintf(fld0, "\"length\" : ");
        tmp[0] = safe_strcat(fld0, json_mpz(x->length));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"seq\" : ");
        tmp[1] = safe_strcat(fld1, json_gen_strings_funtype_0(x->seq));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_gen_strings_record_4_ptr(pointer_t x, pointer_t y, actual_gen_strings_record_4_t T){
        return equal_gen_strings_record_4((gen_strings_record_4_t)x, (gen_strings_record_4_t)y);
}

char * json_gen_strings_record_4_ptr(pointer_t x, actual_gen_strings_record_4_t T){
        return json_gen_strings_record_4((gen_strings_record_4_t)x);
}

actual_gen_strings_record_4_t actual_gen_strings_record_4(){
        actual_gen_strings_record_4_t new = (actual_gen_strings_record_4_t)safe_malloc(sizeof(struct actual_gen_strings_record_4_s));
        new->equal_ptr = (equal_ptr_t)(*equal_gen_strings_record_4_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_gen_strings_record_4_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_gen_strings_record_4_ptr);
 

 
        return new;
 };

gen_strings_record_4_t update_gen_strings_record_4_length(gen_strings_record_4_t x, mpz_ptr_t v){
        gen_strings_record_4_t y;
        if (x->count == 1){y = x;}
        else {y = copy_gen_strings_record_4(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

gen_strings_record_4_t update_gen_strings_record_4_seq(gen_strings_record_4_t x, gen_strings_funtype_0_t v){
        gen_strings_record_4_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_gen_strings_funtype_0(x->seq);};}
        else {y = copy_gen_strings_record_4(x); x->count--; y->seq->count--;};
        y->seq = (gen_strings_funtype_0_t)v;
        return y;}




uint32_t f_gen_strings_closure_5(struct gen_strings_closure_5_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        gen_strings_funtype_1_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_gen_strings_funtype_1(htbl, bvar, hash);
        gen_strings_funtype_1_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint32_t result;
            result = (uint32_t)entry.value;
            return result;}
        

        return h_gen_strings_closure_5(bvar, closure->fvar_1);};

return h_gen_strings_closure_5(bvar, closure->fvar_1);}

uint32_t m_gen_strings_closure_5(struct gen_strings_closure_5_s * closure, uint8_t bvar){
        return h_gen_strings_closure_5(bvar, closure->fvar_1);}

extern uint32_t h_gen_strings_closure_5(uint8_t ivar_5, uint32_t ivar_1){
        uint32_t result;
        //copying to uint32 from uint32;
        result = (uint32_t)ivar_1;

        return result;
}

gen_strings_closure_5_t new_gen_strings_closure_5(void){
        static struct gen_strings_funtype_1_ftbl_s ftbl = {.fptr = (uint32_t (*)(gen_strings_funtype_1_t, uint8_t))&f_gen_strings_closure_5, .mptr = (uint32_t (*)(gen_strings_funtype_1_t, uint8_t))&m_gen_strings_closure_5, .rptr =  (void (*)(gen_strings_funtype_1_t))&release_gen_strings_closure_5, .cptr = (gen_strings_funtype_1_t (*)(gen_strings_funtype_1_t))&copy_gen_strings_closure_5};
        gen_strings_closure_5_t tmp = (gen_strings_closure_5_t) safe_malloc(sizeof(struct gen_strings_closure_5_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_gen_strings_closure_5(gen_strings_funtype_1_t closure){
        gen_strings_closure_5_t x = (gen_strings_closure_5_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

gen_strings_closure_5_t copy_gen_strings_closure_5(gen_strings_closure_5_t x){
        gen_strings_closure_5_t y = new_gen_strings_closure_5();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        if (x->htbl != NULL){
            gen_strings_funtype_1_htbl_t new_htbl = (gen_strings_funtype_1_htbl_t) safe_malloc(sizeof(struct gen_strings_funtype_1_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            gen_strings_funtype_1_hashentry_t * new_data = (gen_strings_funtype_1_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct gen_strings_funtype_1_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct gen_strings_funtype_1_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_gen_strings_closure_6(struct gen_strings_closure_6_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        gen_strings_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_gen_strings_funtype_0(htbl, bvar, hash);
        gen_strings_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp24099 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp24099 == 0);
        if (!keyzero || entry.keyhash != 0){
            uint32_t result;
            result = (uint32_t)entry.value;
            return result;}
        

        return h_gen_strings_closure_6(bvar, closure->fvar_1, closure->fvar_2);};

return h_gen_strings_closure_6(bvar, closure->fvar_1, closure->fvar_2);}

uint32_t m_gen_strings_closure_6(struct gen_strings_closure_6_s * closure, mpz_ptr_t bvar){
        return h_gen_strings_closure_6(bvar, closure->fvar_1, closure->fvar_2);}

extern uint32_t h_gen_strings_closure_6(mpz_ptr_t ivar_11, mpz_ptr_t ivar_2, gen_strings_funtype_1_t ivar_8){
        uint32_t result;
        uint32_t ivar_9;
        uint8_t ivar_10;
        //copying to uint8 from mpz;
        ivar_10 = (uint8_t)mpz_get_ui(ivar_11);
        ivar_9 = (uint32_t)ivar_8->ftbl->fptr(ivar_8, ivar_10);
        //copying to uint32 from uint32;
        result = (uint32_t)ivar_9;

        return result;
}

gen_strings_closure_6_t new_gen_strings_closure_6(void){
        static struct gen_strings_funtype_0_ftbl_s ftbl = {.fptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&f_gen_strings_closure_6, .mptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&m_gen_strings_closure_6, .rptr =  (void (*)(gen_strings_funtype_0_t))&release_gen_strings_closure_6, .cptr = (gen_strings_funtype_0_t (*)(gen_strings_funtype_0_t))&copy_gen_strings_closure_6};
        gen_strings_closure_6_t tmp = (gen_strings_closure_6_t) safe_malloc(sizeof(struct gen_strings_closure_6_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        return tmp;}

void release_gen_strings_closure_6(gen_strings_funtype_0_t closure){
        gen_strings_closure_6_t x = (gen_strings_closure_6_t)closure;
        x->count--;
        if (x->count <= 0){
         release_gen_strings_funtype_1(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

gen_strings_closure_6_t copy_gen_strings_closure_6(gen_strings_closure_6_t x){
        gen_strings_closure_6_t y = new_gen_strings_closure_6();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            gen_strings_funtype_0_htbl_t new_htbl = (gen_strings_funtype_0_htbl_t) safe_malloc(sizeof(struct gen_strings_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            gen_strings_funtype_0_hashentry_t * new_data = (gen_strings_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct gen_strings_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct gen_strings_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_gen_strings_closure_7(struct gen_strings_closure_7_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        gen_strings_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_gen_strings_funtype_0(htbl, bvar, hash);
        gen_strings_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp24205 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp24205 == 0);
        if (!keyzero || entry.keyhash != 0){
            uint32_t result;
            result = (uint32_t)entry.value;
            return result;}
        

        return h_gen_strings_closure_7(bvar, closure->fvar_1, closure->fvar_2);};

return h_gen_strings_closure_7(bvar, closure->fvar_1, closure->fvar_2);}

uint32_t m_gen_strings_closure_7(struct gen_strings_closure_7_s * closure, mpz_ptr_t bvar){
        return h_gen_strings_closure_7(bvar, closure->fvar_1, closure->fvar_2);}

extern uint32_t h_gen_strings_closure_7(mpz_ptr_t ivar_14, mpz_ptr_t ivar_2, strings__string_t ivar_1){
        uint32_t result;
        ivar_1->count++;
        result = (uint32_t)gen_strings__get((strings__string_t)ivar_1, (mpz_ptr_t)ivar_14);

        return result;
}

gen_strings_closure_7_t new_gen_strings_closure_7(void){
        static struct gen_strings_funtype_0_ftbl_s ftbl = {.fptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&f_gen_strings_closure_7, .mptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&m_gen_strings_closure_7, .rptr =  (void (*)(gen_strings_funtype_0_t))&release_gen_strings_closure_7, .cptr = (gen_strings_funtype_0_t (*)(gen_strings_funtype_0_t))&copy_gen_strings_closure_7};
        gen_strings_closure_7_t tmp = (gen_strings_closure_7_t) safe_malloc(sizeof(struct gen_strings_closure_7_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        return tmp;}

void release_gen_strings_closure_7(gen_strings_funtype_0_t closure){
        gen_strings_closure_7_t x = (gen_strings_closure_7_t)closure;
        x->count--;
        if (x->count <= 0){
         release_strings__string(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

gen_strings_closure_7_t copy_gen_strings_closure_7(gen_strings_closure_7_t x){
        gen_strings_closure_7_t y = new_gen_strings_closure_7();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            gen_strings_funtype_0_htbl_t new_htbl = (gen_strings_funtype_0_htbl_t) safe_malloc(sizeof(struct gen_strings_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            gen_strings_funtype_0_hashentry_t * new_data = (gen_strings_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct gen_strings_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct gen_strings_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_gen_strings_closure_8(struct gen_strings_closure_8_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        gen_strings_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_gen_strings_funtype_0(htbl, bvar, hash);
        gen_strings_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp24254 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp24254 == 0);
        if (!keyzero || entry.keyhash != 0){
            uint32_t result;
            result = (uint32_t)entry.value;
            return result;}
        

        return h_gen_strings_closure_8(bvar, closure->fvar_1, closure->fvar_2);};

return h_gen_strings_closure_8(bvar, closure->fvar_1, closure->fvar_2);}

uint32_t m_gen_strings_closure_8(struct gen_strings_closure_8_s * closure, mpz_ptr_t bvar){
        return h_gen_strings_closure_8(bvar, closure->fvar_1, closure->fvar_2);}

extern uint32_t h_gen_strings_closure_8(mpz_ptr_t ivar_23, strings__string_t ivar_1, mpz_ptr_t ivar_2){
        uint32_t result;
        mpz_ptr_t ivar_35;
        mpz_mk_add(ivar_35, ivar_23, ivar_2);
        ivar_1->count++;
        result = (uint32_t)gen_strings__get((strings__string_t)ivar_1, (mpz_ptr_t)ivar_35);

        return result;
}

gen_strings_closure_8_t new_gen_strings_closure_8(void){
        static struct gen_strings_funtype_0_ftbl_s ftbl = {.fptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&f_gen_strings_closure_8, .mptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&m_gen_strings_closure_8, .rptr =  (void (*)(gen_strings_funtype_0_t))&release_gen_strings_closure_8, .cptr = (gen_strings_funtype_0_t (*)(gen_strings_funtype_0_t))&copy_gen_strings_closure_8};
        gen_strings_closure_8_t tmp = (gen_strings_closure_8_t) safe_malloc(sizeof(struct gen_strings_closure_8_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_gen_strings_closure_8(gen_strings_funtype_0_t closure){
        gen_strings_closure_8_t x = (gen_strings_closure_8_t)closure;
        x->count--;
        if (x->count <= 0){
         release_strings__string(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

gen_strings_closure_8_t copy_gen_strings_closure_8(gen_strings_closure_8_t x){
        gen_strings_closure_8_t y = new_gen_strings_closure_8();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        mpz_set(y->fvar_2, x->fvar_2);
        if (x->htbl != NULL){
            gen_strings_funtype_0_htbl_t new_htbl = (gen_strings_funtype_0_htbl_t) safe_malloc(sizeof(struct gen_strings_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            gen_strings_funtype_0_hashentry_t * new_data = (gen_strings_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct gen_strings_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct gen_strings_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern mpz_ptr_t gen_strings__length(strings__string_t ivar_1){
        mpz_ptr_t  result;
        result = safe_malloc(sizeof(mpz_t));
        mpz_init(result);
        mpz_set(result, ivar_1->length);
        release_strings__string(ivar_1);

        
        return result;
}

extern uint32_t gen_strings__get(strings__string_t ivar_1, mpz_ptr_t ivar_2){
        uint32_t  result;
        gen_strings_funtype_0_t ivar_8;
        ivar_8 = (gen_strings_funtype_0_t)ivar_1->seq;
        ivar_8->count++;
        result = (uint32_t)ivar_8->ftbl->fptr(ivar_8, ivar_2);
        ivar_8->ftbl->rptr(ivar_8);

        
        return result;
}

extern strings__string_t gen_strings__empty(void){
        strings__string_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_14;
        ivar_14 = (uint8_t)0;
        mpz_ptr_t ivar_1;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_1, ivar_14);
        gen_strings_funtype_1_t ivar_9;
        gen_strings_closure_2_t cl24083;
        cl24083 = new_gen_strings_closure_2();
        ivar_9 = (gen_strings_funtype_1_t)cl24083;
        gen_strings_funtype_0_t ivar_7;
        gen_strings_closure_3_t cl24085;
        cl24085 = new_gen_strings_closure_3();
        mpz_set(cl24085->fvar_1, ivar_1);
        cl24085->fvar_2 = (gen_strings_funtype_1_t)ivar_9;
        if (cl24085->fvar_2 != NULL) cl24085->fvar_2->count++;
        ivar_7 = (gen_strings_funtype_0_t)cl24085;
        gen_strings_record_4_t tmp24090 = new_gen_strings_record_4();;
        result = (strings__string_t)tmp24090;
        mpz_init(tmp24090->length);
        mpz_set(tmp24090->length, ivar_1);
        tmp24090->seq = (gen_strings_funtype_0_t)ivar_7;

        defined = true;};
        
        return result;
}

extern strings__string_t gen_strings__unit(uint32_t ivar_1){
        strings__string_t  result;
        uint8_t ivar_13;
        ivar_13 = (uint8_t)1;
        mpz_ptr_t ivar_2;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_2, ivar_13);
        gen_strings_funtype_1_t ivar_8;
        gen_strings_closure_5_t cl24098;
        cl24098 = new_gen_strings_closure_5();
        cl24098->fvar_1 = (uint32_t)ivar_1;
        ivar_8 = (gen_strings_funtype_1_t)cl24098;
        gen_strings_funtype_0_t ivar_6;
        gen_strings_closure_6_t cl24100;
        cl24100 = new_gen_strings_closure_6();
        mpz_set(cl24100->fvar_1, ivar_2);
        cl24100->fvar_2 = (gen_strings_funtype_1_t)ivar_8;
        if (cl24100->fvar_2 != NULL) cl24100->fvar_2->count++;
        ivar_6 = (gen_strings_funtype_0_t)cl24100;
        gen_strings_record_4_t tmp24105 = new_gen_strings_record_4();;
        result = (strings__string_t)tmp24105;
        mpz_init(tmp24105->length);
        mpz_set(tmp24105->length, ivar_2);
        tmp24105->seq = (gen_strings_funtype_0_t)ivar_6;

        
        return result;
}

extern mpz_ptr_t gen_strings__strdiff_rec(strings__string_t ivar_1, strings__string_t ivar_2, mpz_ptr_t ivar_3){
        mpz_ptr_t  result;
        bool_t ivar_26;
        bool_t ivar_27;
        mpz_ptr_t ivar_30;
        ivar_30 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_30);
        mpz_set(ivar_30, ivar_1->length);
        int64_t tmp24126 = mpz_cmp(ivar_3, ivar_30);
        ivar_27 = (tmp24126 == 0);
        if (ivar_27){ 
             ivar_26 = (bool_t) true;
} else {
        
             bool_t ivar_33;
             mpz_ptr_t ivar_36;
             ivar_36 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_36);
             mpz_set(ivar_36, ivar_2->length);
             int64_t tmp24127 = mpz_cmp(ivar_3, ivar_36);
             ivar_33 = (tmp24127 == 0);
             if (ivar_33){  
           ivar_26 = (bool_t) true;
} else {
             
           uint32_t ivar_39;
           ivar_1->count++;
           ivar_39 = (uint32_t)gen_strings__get((strings__string_t)ivar_1, (mpz_ptr_t)ivar_3);
           uint32_t ivar_40;
           ivar_2->count++;
           ivar_40 = (uint32_t)gen_strings__get((strings__string_t)ivar_2, (mpz_ptr_t)ivar_3);
           ivar_26 = (ivar_39 != ivar_40);
};
};
        if (ivar_26){ 
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_3);
             mpz_clear(ivar_3);
} else {
        
             mpz_ptr_t ivar_76;
             uint8_t ivar_71;
             ivar_71 = (uint8_t)1;
             mpz_mk_set_ui(ivar_76, (uint64_t)ivar_71);
             mpz_add(ivar_76, ivar_76, ivar_3);
             ivar_1->count++;
             ivar_2->count++;
             result = (mpz_ptr_t)gen_strings__strdiff_rec((strings__string_t)ivar_1, (strings__string_t)ivar_2, ivar_76);
};

        
        return result;
}

extern mpz_ptr_t gen_strings__strdiff(strings__string_t ivar_1, strings__string_t ivar_2){
        mpz_ptr_t  result;
        uint8_t ivar_44;
        ivar_44 = (uint8_t)0;
        mpz_ptr_t ivar_31;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_31, ivar_44);
        ivar_1->count++;
        ivar_2->count++;
        result = (mpz_ptr_t)gen_strings__strdiff_rec((strings__string_t)ivar_1, (strings__string_t)ivar_2, (mpz_ptr_t)ivar_31);

        
        return result;
}

extern int8_t gen_strings__strcmp(strings__string_t ivar_1, strings__string_t ivar_2){
        int8_t  result;
        /* i */ mpz_ptr_t ivar_3;
        ivar_1->count++;
        ivar_2->count++;
        ivar_3 = (mpz_ptr_t)gen_strings__strdiff((strings__string_t)ivar_1, (strings__string_t)ivar_2);
        bool_t ivar_42;
        mpq_ptr_t ivar_44;
        mpz_ptr_t ivar_55;
        ivar_55 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_55);
        mpz_set(ivar_55, ivar_1->length);
        mpq_ptr_t ivar_50;
        //copying to mpq from mpz;
        mpq_mk_set_z(ivar_50, ivar_55);
        mpz_clear(ivar_55);
        mpz_ptr_t ivar_54;
        ivar_54 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_54);
        mpz_set(ivar_54, ivar_2->length);
        mpq_ptr_t ivar_51;
        //copying to mpq from mpz;
        mpq_mk_set_z(ivar_51, ivar_54);
        mpz_clear(ivar_54);
        ivar_44 = (mpq_ptr_t)real_defs__min((mpq_ptr_t)ivar_50, (mpq_ptr_t)ivar_51);
        int64_t tmp24162 = mpq_cmp_z(ivar_44, ivar_3);
        ivar_42 = (tmp24162 == 0);
        if (ivar_42){ 
             bool_t ivar_57;
             mpz_ptr_t ivar_58;
             ivar_58 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_58);
             mpz_set(ivar_58, ivar_1->length);
             mpz_ptr_t ivar_59;
             ivar_59 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_59);
             mpz_set(ivar_59, ivar_2->length);
             int64_t tmp24163 = mpz_cmp(ivar_58, ivar_59);
             ivar_57 = (tmp24163 < 0);
             if (ivar_57){  
           release_strings__string(ivar_2);
           release_strings__string(ivar_1);
           result = (int8_t)-1;
} else {
             
           bool_t ivar_63;
           mpz_ptr_t ivar_64;
           ivar_64 = safe_malloc(sizeof(mpz_t));
           mpz_init(ivar_64);
           mpz_set(ivar_64, ivar_1->length);
           release_strings__string(ivar_1);
           mpz_ptr_t ivar_65;
           ivar_65 = safe_malloc(sizeof(mpz_t));
           mpz_init(ivar_65);
           mpz_set(ivar_65, ivar_2->length);
           release_strings__string(ivar_2);
           int64_t tmp24176 = mpz_cmp(ivar_64, ivar_65);
           ivar_63 = (tmp24176 > 0);
           if (ivar_63){   
           result = (int8_t)1;
} else {
           
           result = (int8_t)0;
};
};
} else {
        
             bool_t ivar_69;
             uint32_t ivar_70;
             uint32_t ivar_72;
             ivar_1->count++;
             ivar_72 = (uint32_t)gen_strings__get((strings__string_t)ivar_1, (mpz_ptr_t)ivar_3);
             ivar_70 = (uint32_t) ivar_72;
             uint32_t ivar_71;
             uint32_t ivar_80;
             ivar_2->count++;
             ivar_80 = (uint32_t)gen_strings__get((strings__string_t)ivar_2, (mpz_ptr_t)ivar_3);
             ivar_71 = (uint32_t) ivar_80;
             ivar_69 = (ivar_70 < ivar_71);
             if (ivar_69){  
           result = (int8_t)-1;
} else {
             
           result = (int8_t)1;
};
};

        
        return result;
}

extern strings__string_t gen_strings__prefix(strings__string_t ivar_1, mpz_ptr_t ivar_2){
        strings__string_t  result;
        bool_t ivar_4;
        mpz_ptr_t ivar_6;
        ivar_6 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_6);
        mpz_set(ivar_6, ivar_1->length);
        int64_t tmp24196 = mpz_cmp(ivar_2, ivar_6);
        ivar_4 = (tmp24196 == 0);
        if (ivar_4){ 
             //copying to strings__string from strings__string;
             result = (strings__string_t)ivar_1;
             if (result != NULL) result->count++;
             release_strings__string(ivar_1);
} else {
        
             gen_strings_funtype_0_t ivar_22;
             gen_strings_closure_7_t cl24214;
             cl24214 = new_gen_strings_closure_7();
             mpz_set(cl24214->fvar_1, ivar_2);
             cl24214->fvar_2 = (strings__string_t)ivar_1;
             if (cl24214->fvar_2 != NULL) cl24214->fvar_2->count++;
             release_strings__string(ivar_1);
             ivar_22 = (gen_strings_funtype_0_t)cl24214;
             gen_strings_record_4_t tmp24225 = new_gen_strings_record_4();;
             result = (strings__string_t)tmp24225;
             mpz_init(tmp24225->length);
             mpz_set(tmp24225->length, ivar_2);
             tmp24225->seq = (gen_strings_funtype_0_t)ivar_22;
};

        
        return result;
}

extern strings__string_t gen_strings__suffix(strings__string_t ivar_1, mpz_ptr_t ivar_2){
        strings__string_t  result;
        bool_t ivar_4;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)0;
        int64_t tmp24245 = mpz_cmp_ui(ivar_2, ivar_6);
        ivar_4 = (tmp24245 == 0);
        if (ivar_4){ 
             //copying to strings__string from strings__string;
             result = (strings__string_t)ivar_1;
             if (result != NULL) result->count++;
             release_strings__string(ivar_1);
} else {
        
             mpz_ptr_t ivar_12;
             mpz_ptr_t ivar_8;
             ivar_8 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_8);
             mpz_set(ivar_8, ivar_1->length);
             mpz_mk_sub(ivar_12, ivar_8, ivar_2);
             gen_strings_funtype_0_t ivar_37;
             gen_strings_closure_8_t cl24263;
             cl24263 = new_gen_strings_closure_8();
             cl24263->fvar_1 = (strings__string_t)ivar_1;
             if (cl24263->fvar_1 != NULL) cl24263->fvar_1->count++;
             mpz_set(cl24263->fvar_2, ivar_2);
             release_strings__string(ivar_1);
             ivar_37 = (gen_strings_funtype_0_t)cl24263;
             gen_strings_record_4_t tmp24274 = new_gen_strings_record_4();;
             result = (strings__string_t)tmp24274;
             mpz_init(tmp24274->length);
             mpz_set(tmp24274->length, ivar_12);
             tmp24274->seq = (gen_strings_funtype_0_t)ivar_37;
};

        
        return result;
}

extern strings__string_t gen_strings__substr(strings__string_t ivar_1, mpz_ptr_t ivar_2, mpz_ptr_t ivar_4){
        strings__string_t  result;
        strings__string_t ivar_18;
        ivar_1->count++;
        ivar_18 = (strings__string_t)gen_strings__suffix((strings__string_t)ivar_1, (mpz_ptr_t)ivar_2);
        mpz_ptr_t ivar_19;
        mpz_mk_sub(ivar_19, ivar_4, ivar_2);
        ivar_18->count++;
        result = (strings__string_t)gen_strings__prefix((strings__string_t)ivar_18, (mpz_ptr_t)ivar_19);

        
        return result;
}