//Code generated using pvs2ir2c
#include "gen_strings_c.h"

void release_gen_strings_funtype_0(gen_strings_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

gen_strings_funtype_0_t copy_gen_strings_funtype_0(gen_strings_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_gen_strings_funtype_0(gen_strings_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; gen_strings_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp22112 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp22112 == 0);
        bool_t keymatch;
        int64_t tmp22113 = mpz_cmp(data.key, i);
        keymatch = (tmp22113 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp22112 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp22112 == 0);

        int64_t tmp22113 = mpz_cmp(data.key, i);
        keymatch = (tmp22113 == 0);
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
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp22114 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp22114 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp22115 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp22115 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp22116 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp22116 == 0);
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
        int64_t tmp22117 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp22117 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;tempvalue = (uint32_t)v;};
        return a;

}

gen_strings_funtype_0_t update_gen_strings_funtype_0(gen_strings_funtype_0_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_gen_strings_funtype_0(a, i, v);
            } else {
                gen_strings_funtype_0_t x = copy_gen_strings_funtype_0(a);
                x->count--;
                return dupdate_gen_strings_funtype_0(x, i, v);
            }}

bool_t equal_gen_strings_funtype_0(gen_strings_funtype_0_t x, gen_strings_funtype_0_t y){
        return false;}

void release_gen_strings_funtype_1(gen_strings_funtype_1_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

gen_strings_funtype_1_t copy_gen_strings_funtype_1(gen_strings_funtype_1_t x){return x->ftbl->cptr(x);}

uint32_t lookup_gen_strings_funtype_1(gen_strings_funtype_1_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; gen_strings_funtype_1_hashentry_t data = htbl->data[hashindex];
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
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;tempvalue = (uint32_t)v;};
        return a;

}

gen_strings_funtype_1_t update_gen_strings_funtype_1(gen_strings_funtype_1_t a, uint8_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_gen_strings_funtype_1(a, i, v);
            } else {
                gen_strings_funtype_1_t x = copy_gen_strings_funtype_1(a);
                x->count--;
                return dupdate_gen_strings_funtype_1(x, i, v);
            }}

bool_t equal_gen_strings_funtype_1(gen_strings_funtype_1_t x, gen_strings_funtype_1_t y){
        return false;}


uint32_t f_gen_strings_closure_2(struct gen_strings_closure_2_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        gen_strings_funtype_1_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_gen_strings_funtype_1(htbl, bvar, hash);
        gen_strings_funtype_1_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero && entry.keyhash != 0){
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
            gen_strings_funtype_1_htbl_t new_htbl = (gen_strings_funtype_1_htbl_t) safe_malloc(sizeof(gen_strings_funtype_1_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            gen_strings_funtype_1_hashentry_t * new_data = (gen_strings_funtype_1_hashentry_t *) safe_malloc(new_htbl->size * sizeof(gen_strings_funtype_1_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(gen_strings_funtype_1_hashentry_t)));
            new_htbl->data = new_data;
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
         int64_t tmp22120 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp22120 == 0);
        if (!keyzero && entry.keyhash != 0){
            uint32_t result;
            result = (uint32_t)entry.value;
            return result;}
        

        return h_gen_strings_closure_3(bvar, closure->fvar_1);};

return h_gen_strings_closure_3(bvar, closure->fvar_1);}

uint32_t m_gen_strings_closure_3(struct gen_strings_closure_3_s * closure, mpz_ptr_t bvar){
        return h_gen_strings_closure_3(bvar, closure->fvar_1);}

extern uint32_t h_gen_strings_closure_3(mpz_ptr_t ivar_12, gen_strings_funtype_1_t ivar_9){
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
        return tmp;}

void release_gen_strings_closure_3(gen_strings_funtype_0_t closure){
        gen_strings_closure_3_t x = (gen_strings_closure_3_t)closure;
        x->count--;
        if (x->count <= 0){
         release_gen_strings_funtype_1(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

gen_strings_closure_3_t copy_gen_strings_closure_3(gen_strings_closure_3_t x){
        gen_strings_closure_3_t y = new_gen_strings_closure_3();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            gen_strings_funtype_0_htbl_t new_htbl = (gen_strings_funtype_0_htbl_t) safe_malloc(sizeof(gen_strings_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            gen_strings_funtype_0_hashentry_t * new_data = (gen_strings_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(gen_strings_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(gen_strings_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_gen_strings_closure_4(struct gen_strings_closure_4_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        gen_strings_funtype_1_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_gen_strings_funtype_1(htbl, bvar, hash);
        gen_strings_funtype_1_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero && entry.keyhash != 0){
            uint32_t result;
            result = (uint32_t)entry.value;
            return result;}
        

        return h_gen_strings_closure_4(bvar, closure->fvar_1);};

return h_gen_strings_closure_4(bvar, closure->fvar_1);}

uint32_t m_gen_strings_closure_4(struct gen_strings_closure_4_s * closure, uint8_t bvar){
        return h_gen_strings_closure_4(bvar, closure->fvar_1);}

extern uint32_t h_gen_strings_closure_4(uint8_t ivar_5, uint32_t ivar_1){
        uint32_t result;
        //copying to uint32 from uint32;
        result = (uint32_t)ivar_1;

        return result;
}

gen_strings_closure_4_t new_gen_strings_closure_4(void){
        static struct gen_strings_funtype_1_ftbl_s ftbl = {.fptr = (uint32_t (*)(gen_strings_funtype_1_t, uint8_t))&f_gen_strings_closure_4, .mptr = (uint32_t (*)(gen_strings_funtype_1_t, uint8_t))&m_gen_strings_closure_4, .rptr =  (void (*)(gen_strings_funtype_1_t))&release_gen_strings_closure_4, .cptr = (gen_strings_funtype_1_t (*)(gen_strings_funtype_1_t))&copy_gen_strings_closure_4};
        gen_strings_closure_4_t tmp = (gen_strings_closure_4_t) safe_malloc(sizeof(struct gen_strings_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_gen_strings_closure_4(gen_strings_funtype_1_t closure){
        gen_strings_closure_4_t x = (gen_strings_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

gen_strings_closure_4_t copy_gen_strings_closure_4(gen_strings_closure_4_t x){
        gen_strings_closure_4_t y = new_gen_strings_closure_4();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        if (x->htbl != NULL){
            gen_strings_funtype_1_htbl_t new_htbl = (gen_strings_funtype_1_htbl_t) safe_malloc(sizeof(gen_strings_funtype_1_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            gen_strings_funtype_1_hashentry_t * new_data = (gen_strings_funtype_1_hashentry_t *) safe_malloc(new_htbl->size * sizeof(gen_strings_funtype_1_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(gen_strings_funtype_1_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_gen_strings_closure_5(struct gen_strings_closure_5_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        gen_strings_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_gen_strings_funtype_0(htbl, bvar, hash);
        gen_strings_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp22124 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp22124 == 0);
        if (!keyzero && entry.keyhash != 0){
            uint32_t result;
            result = (uint32_t)entry.value;
            return result;}
        

        return h_gen_strings_closure_5(bvar, closure->fvar_1);};

return h_gen_strings_closure_5(bvar, closure->fvar_1);}

uint32_t m_gen_strings_closure_5(struct gen_strings_closure_5_s * closure, mpz_ptr_t bvar){
        return h_gen_strings_closure_5(bvar, closure->fvar_1);}

extern uint32_t h_gen_strings_closure_5(mpz_ptr_t ivar_11, gen_strings_funtype_1_t ivar_8){
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

gen_strings_closure_5_t new_gen_strings_closure_5(void){
        static struct gen_strings_funtype_0_ftbl_s ftbl = {.fptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&f_gen_strings_closure_5, .mptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&m_gen_strings_closure_5, .rptr =  (void (*)(gen_strings_funtype_0_t))&release_gen_strings_closure_5, .cptr = (gen_strings_funtype_0_t (*)(gen_strings_funtype_0_t))&copy_gen_strings_closure_5};
        gen_strings_closure_5_t tmp = (gen_strings_closure_5_t) safe_malloc(sizeof(struct gen_strings_closure_5_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_gen_strings_closure_5(gen_strings_funtype_0_t closure){
        gen_strings_closure_5_t x = (gen_strings_closure_5_t)closure;
        x->count--;
        if (x->count <= 0){
         release_gen_strings_funtype_1(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

gen_strings_closure_5_t copy_gen_strings_closure_5(gen_strings_closure_5_t x){
        gen_strings_closure_5_t y = new_gen_strings_closure_5();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            gen_strings_funtype_0_htbl_t new_htbl = (gen_strings_funtype_0_htbl_t) safe_malloc(sizeof(gen_strings_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            gen_strings_funtype_0_hashentry_t * new_data = (gen_strings_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(gen_strings_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(gen_strings_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
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
         int64_t tmp22165 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp22165 == 0);
        if (!keyzero && entry.keyhash != 0){
            uint32_t result;
            result = (uint32_t)entry.value;
            return result;}
        

        return h_gen_strings_closure_6(bvar, closure->fvar_1);};

return h_gen_strings_closure_6(bvar, closure->fvar_1);}

uint32_t m_gen_strings_closure_6(struct gen_strings_closure_6_s * closure, mpz_ptr_t bvar){
        return h_gen_strings_closure_6(bvar, closure->fvar_1);}

extern uint32_t h_gen_strings_closure_6(mpz_ptr_t ivar_14, strings__string_t ivar_1){
        uint32_t result;
        strings__string_t ivar_19;
        //copying to strings__string from strings__string;
        ivar_19 = (strings__string_t)ivar_1;
        ivar_19->count++;
        mpz_ptr_t ivar_20;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_20, ivar_14);
        mpz_clear(ivar_14);
        uint32_t ivar_18;
        ivar_18 = (uint32_t)gen_strings__get((strings__string_t)ivar_19, (mpz_ptr_t)ivar_20);
        //copying to uint32 from uint32;
        result = (uint32_t)ivar_18;

        return result;
}

gen_strings_closure_6_t new_gen_strings_closure_6(void){
        static struct gen_strings_funtype_0_ftbl_s ftbl = {.fptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&f_gen_strings_closure_6, .mptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&m_gen_strings_closure_6, .rptr =  (void (*)(gen_strings_funtype_0_t))&release_gen_strings_closure_6, .cptr = (gen_strings_funtype_0_t (*)(gen_strings_funtype_0_t))&copy_gen_strings_closure_6};
        gen_strings_closure_6_t tmp = (gen_strings_closure_6_t) safe_malloc(sizeof(struct gen_strings_closure_6_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_gen_strings_closure_6(gen_strings_funtype_0_t closure){
        gen_strings_closure_6_t x = (gen_strings_closure_6_t)closure;
        x->count--;
        if (x->count <= 0){
         release_strings__string(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

gen_strings_closure_6_t copy_gen_strings_closure_6(gen_strings_closure_6_t x){
        gen_strings_closure_6_t y = new_gen_strings_closure_6();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            gen_strings_funtype_0_htbl_t new_htbl = (gen_strings_funtype_0_htbl_t) safe_malloc(sizeof(gen_strings_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            gen_strings_funtype_0_hashentry_t * new_data = (gen_strings_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(gen_strings_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(gen_strings_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
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
         int64_t tmp22167 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp22167 == 0);
        if (!keyzero && entry.keyhash != 0){
            uint32_t result;
            result = (uint32_t)entry.value;
            return result;}
        

        return h_gen_strings_closure_7(bvar, closure->fvar_1);};

return h_gen_strings_closure_7(bvar, closure->fvar_1);}

uint32_t m_gen_strings_closure_7(struct gen_strings_closure_7_s * closure, mpz_ptr_t bvar){
        return h_gen_strings_closure_7(bvar, closure->fvar_1);}

extern uint32_t h_gen_strings_closure_7(mpz_ptr_t ivar_27, gen_strings_funtype_0_t ivar_24){
        uint32_t result;
        uint32_t ivar_25;
        mpz_ptr_t ivar_26;
        ivar_26 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_26);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_26, ivar_27);
        ivar_25 = (uint32_t)ivar_24->ftbl->fptr(ivar_24, ivar_26);
        //copying to uint32 from uint32;
        result = (uint32_t)ivar_25;

        return result;
}

gen_strings_closure_7_t new_gen_strings_closure_7(void){
        static struct gen_strings_funtype_0_ftbl_s ftbl = {.fptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&f_gen_strings_closure_7, .mptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&m_gen_strings_closure_7, .rptr =  (void (*)(gen_strings_funtype_0_t))&release_gen_strings_closure_7, .cptr = (gen_strings_funtype_0_t (*)(gen_strings_funtype_0_t))&copy_gen_strings_closure_7};
        gen_strings_closure_7_t tmp = (gen_strings_closure_7_t) safe_malloc(sizeof(struct gen_strings_closure_7_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_gen_strings_closure_7(gen_strings_funtype_0_t closure){
        gen_strings_closure_7_t x = (gen_strings_closure_7_t)closure;
        x->count--;
        if (x->count <= 0){
         release_gen_strings_funtype_0(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

gen_strings_closure_7_t copy_gen_strings_closure_7(gen_strings_closure_7_t x){
        gen_strings_closure_7_t y = new_gen_strings_closure_7();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            gen_strings_funtype_0_htbl_t new_htbl = (gen_strings_funtype_0_htbl_t) safe_malloc(sizeof(gen_strings_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            gen_strings_funtype_0_hashentry_t * new_data = (gen_strings_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(gen_strings_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(gen_strings_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
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
         int64_t tmp22179 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp22179 == 0);
        if (!keyzero && entry.keyhash != 0){
            uint32_t result;
            result = (uint32_t)entry.value;
            return result;}
        

        return h_gen_strings_closure_8(bvar, closure->fvar_1, closure->fvar_2);};

return h_gen_strings_closure_8(bvar, closure->fvar_1, closure->fvar_2);}

uint32_t m_gen_strings_closure_8(struct gen_strings_closure_8_s * closure, mpz_ptr_t bvar){
        return h_gen_strings_closure_8(bvar, closure->fvar_1, closure->fvar_2);}

extern uint32_t h_gen_strings_closure_8(mpz_ptr_t ivar_15, mpz_ptr_t ivar_2, strings__string_t ivar_1){
        uint32_t result;
        strings__string_t ivar_22;
        //copying to strings__string from strings__string;
        ivar_22 = (strings__string_t)ivar_1;
        ivar_22->count++;
        mpz_ptr_t ivar_26;
        mpz_ptr_t ivar_18;
        ivar_18 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_18);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_18, ivar_2);
        mpz_ptr_t ivar_19;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_19, ivar_15);
        mpz_clear(ivar_15);
        mpz_mk_add(ivar_26, ivar_19, ivar_18);
        mpz_ptr_t ivar_23;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_23, ivar_26);
        mpz_clear(ivar_26);
        uint32_t ivar_21;
        ivar_21 = (uint32_t)gen_strings__get((strings__string_t)ivar_22, (mpz_ptr_t)ivar_23);
        //copying to uint32 from uint32;
        result = (uint32_t)ivar_21;

        return result;
}

gen_strings_closure_8_t new_gen_strings_closure_8(void){
        static struct gen_strings_funtype_0_ftbl_s ftbl = {.fptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&f_gen_strings_closure_8, .mptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&m_gen_strings_closure_8, .rptr =  (void (*)(gen_strings_funtype_0_t))&release_gen_strings_closure_8, .cptr = (gen_strings_funtype_0_t (*)(gen_strings_funtype_0_t))&copy_gen_strings_closure_8};
        gen_strings_closure_8_t tmp = (gen_strings_closure_8_t) safe_malloc(sizeof(struct gen_strings_closure_8_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        return tmp;}

void release_gen_strings_closure_8(gen_strings_funtype_0_t closure){
        gen_strings_closure_8_t x = (gen_strings_closure_8_t)closure;
        x->count--;
        if (x->count <= 0){
         release_strings__string(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

gen_strings_closure_8_t copy_gen_strings_closure_8(gen_strings_closure_8_t x){
        gen_strings_closure_8_t y = new_gen_strings_closure_8();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            gen_strings_funtype_0_htbl_t new_htbl = (gen_strings_funtype_0_htbl_t) safe_malloc(sizeof(gen_strings_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            gen_strings_funtype_0_hashentry_t * new_data = (gen_strings_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(gen_strings_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(gen_strings_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_gen_strings_closure_9(struct gen_strings_closure_9_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        gen_strings_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_gen_strings_funtype_0(htbl, bvar, hash);
        gen_strings_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp22181 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp22181 == 0);
        if (!keyzero && entry.keyhash != 0){
            uint32_t result;
            result = (uint32_t)entry.value;
            return result;}
        

        return h_gen_strings_closure_9(bvar, closure->fvar_1);};

return h_gen_strings_closure_9(bvar, closure->fvar_1);}

uint32_t m_gen_strings_closure_9(struct gen_strings_closure_9_s * closure, mpz_ptr_t bvar){
        return h_gen_strings_closure_9(bvar, closure->fvar_1);}

extern uint32_t h_gen_strings_closure_9(mpz_ptr_t ivar_32, gen_strings_funtype_0_t ivar_29){
        uint32_t result;
        uint32_t ivar_30;
        mpz_ptr_t ivar_31;
        ivar_31 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_31);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_31, ivar_32);
        ivar_30 = (uint32_t)ivar_29->ftbl->fptr(ivar_29, ivar_31);
        //copying to uint32 from uint32;
        result = (uint32_t)ivar_30;

        return result;
}

gen_strings_closure_9_t new_gen_strings_closure_9(void){
        static struct gen_strings_funtype_0_ftbl_s ftbl = {.fptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&f_gen_strings_closure_9, .mptr = (uint32_t (*)(gen_strings_funtype_0_t, mpz_ptr_t))&m_gen_strings_closure_9, .rptr =  (void (*)(gen_strings_funtype_0_t))&release_gen_strings_closure_9, .cptr = (gen_strings_funtype_0_t (*)(gen_strings_funtype_0_t))&copy_gen_strings_closure_9};
        gen_strings_closure_9_t tmp = (gen_strings_closure_9_t) safe_malloc(sizeof(struct gen_strings_closure_9_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_gen_strings_closure_9(gen_strings_funtype_0_t closure){
        gen_strings_closure_9_t x = (gen_strings_closure_9_t)closure;
        x->count--;
        if (x->count <= 0){
         release_gen_strings_funtype_0(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

gen_strings_closure_9_t copy_gen_strings_closure_9(gen_strings_closure_9_t x){
        gen_strings_closure_9_t y = new_gen_strings_closure_9();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            gen_strings_funtype_0_htbl_t new_htbl = (gen_strings_funtype_0_htbl_t) safe_malloc(sizeof(gen_strings_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            gen_strings_funtype_0_hashentry_t * new_data = (gen_strings_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(gen_strings_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(gen_strings_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern mpz_ptr_t gen_strings__length(strings__string_t ivar_1){
        mpz_ptr_t result;
        strings__string_t ivar_2;
        //copying to strings__string from strings__string;
        ivar_2 = (strings__string_t)ivar_1;
        ivar_2->count++;
        release_strings__string(ivar_1);
        result = safe_malloc(sizeof(mpz_t));
        mpz_init(result);
        mpz_set(result, ivar_2->length);
        release_strings__string(ivar_2);

        return result;
}

extern uint32_t gen_strings__get(strings__string_t ivar_1, mpz_ptr_t ivar_2){
        uint32_t result;
        gen_strings_funtype_0_t ivar_8;
        strings__string_t ivar_9;
        //copying to strings__string from strings__string;
        ivar_9 = (strings__string_t)ivar_1;
        ivar_9->count++;
        release_strings__string(ivar_1);
        ivar_8 = (gen_strings_funtype_0_t)ivar_9->seq;
        ivar_8->count++;
        release_strings__string(ivar_9);
        mpz_ptr_t ivar_10;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_10, ivar_2);
        mpz_clear(ivar_2);
        uint32_t ivar_5;
        ivar_5 = (uint32_t)ivar_8->ftbl->fptr(ivar_8, ivar_10);
        ivar_8->ftbl->rptr(ivar_8);
        //copying to uint32 from uint32;
        result = (uint32_t)ivar_5;

        return result;
}

extern strings__string_t gen_strings__empty(void){
        strings__string_t result;
        uint8_t ivar_14;
        ivar_14 = (uint8_t)0;
        mpz_ptr_t ivar_1;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_1, ivar_14);
        gen_strings_funtype_1_t ivar_9;
        gen_strings_closure_2_t cl22119;
        cl22119 = new_gen_strings_closure_2();
        ivar_9 = (gen_strings_funtype_1_t)cl22119;
        gen_strings_funtype_0_t ivar_7;
        gen_strings_closure_3_t cl22121;
        cl22121 = new_gen_strings_closure_3();
        cl22121->fvar_1 = (gen_strings_funtype_1_t)ivar_9;
        cl22121->fvar_1->count++;
        ivar_7 = (gen_strings_funtype_0_t)cl22121;
        result = (strings__string_t)new_strings__string();;
        mpz_init(result->length);
        mpz_set(result->length, ivar_1);
        mpz_clear(ivar_1);
        result->seq = (gen_strings_funtype_0_t)ivar_7;

        return result;
}

extern strings__string_t gen_strings__unit(uint32_t ivar_1){
        strings__string_t result;
        uint8_t ivar_13;
        ivar_13 = (uint8_t)1;
        mpz_ptr_t ivar_2;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_2, ivar_13);
        gen_strings_funtype_1_t ivar_8;
        gen_strings_closure_4_t cl22123;
        cl22123 = new_gen_strings_closure_4();
        cl22123->fvar_1 = (uint32_t)ivar_1;
        ivar_8 = (gen_strings_funtype_1_t)cl22123;
        gen_strings_funtype_0_t ivar_6;
        gen_strings_closure_5_t cl22125;
        cl22125 = new_gen_strings_closure_5();
        cl22125->fvar_1 = (gen_strings_funtype_1_t)ivar_8;
        cl22125->fvar_1->count++;
        ivar_6 = (gen_strings_funtype_0_t)cl22125;
        result = (strings__string_t)new_strings__string();;
        mpz_init(result->length);
        mpz_set(result->length, ivar_2);
        mpz_clear(ivar_2);
        result->seq = (gen_strings_funtype_0_t)ivar_6;

        return result;
}

extern mpz_ptr_t gen_strings__strdiff_rec(strings__string_t ivar_1, strings__string_t ivar_2, mpz_ptr_t ivar_3){
        mpz_ptr_t result;
        bool_t ivar_4;
        bool_t ivar_5;
        mpz_ptr_t ivar_7;
        ivar_7 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_7);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_7, ivar_3);
        mpz_ptr_t ivar_8;
        strings__string_t ivar_9;
        //copying to strings__string from strings__string;
        ivar_9 = (strings__string_t)ivar_1;
        ivar_9->count++;
        ivar_8 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_8);
        mpz_set(ivar_8, ivar_9->length);
        release_strings__string(ivar_9);
        int64_t tmp22136 = mpz_cmp(ivar_7, ivar_8);
        ivar_5 = (tmp22136 == 0);
        bool_t ivar_6;
        bool_t ivar_11;
        mpz_ptr_t ivar_13;
        ivar_13 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_13);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_13, ivar_3);
        mpz_ptr_t ivar_14;
        strings__string_t ivar_15;
        //copying to strings__string from strings__string;
        ivar_15 = (strings__string_t)ivar_2;
        ivar_15->count++;
        ivar_14 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_14);
        mpz_set(ivar_14, ivar_15->length);
        release_strings__string(ivar_15);
        int64_t tmp22137 = mpz_cmp(ivar_13, ivar_14);
        ivar_11 = (tmp22137 == 0);
        bool_t ivar_12;
        uint32_t ivar_17;
        strings__string_t ivar_22;
        //copying to strings__string from strings__string;
        ivar_22 = (strings__string_t)ivar_1;
        ivar_22->count++;
        mpz_ptr_t ivar_23;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_23, ivar_3);
        uint32_t ivar_21;
        ivar_21 = (uint32_t)gen_strings__get((strings__string_t)ivar_22, (mpz_ptr_t)ivar_23);
        //copying to uint32 from uint32;
        ivar_17 = (uint32_t)ivar_21;
        uint32_t ivar_18;
        strings__string_t ivar_28;
        //copying to strings__string from strings__string;
        ivar_28 = (strings__string_t)ivar_2;
        ivar_28->count++;
        mpz_ptr_t ivar_29;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_29, ivar_3);
        uint32_t ivar_27;
        ivar_27 = (uint32_t)gen_strings__get((strings__string_t)ivar_28, (mpz_ptr_t)ivar_29);
        //copying to uint32 from uint32;
        ivar_18 = (uint32_t)ivar_27;
        ivar_12 = (ivar_17 != ivar_18);
        ivar_6 = ivar_11 || ivar_12;
        ivar_4 = ivar_5 || ivar_6;
        if (ivar_4){ 
             release_strings__string(ivar_2);
             release_strings__string(ivar_1);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_3);
             mpz_clear(ivar_3);
} else {
        
             strings__string_t ivar_41;
             //copying to strings__string from strings__string;
             ivar_41 = (strings__string_t)ivar_1;
             ivar_41->count++;
             release_strings__string(ivar_1);
             strings__string_t ivar_42;
             //copying to strings__string from strings__string;
             ivar_42 = (strings__string_t)ivar_2;
             ivar_42->count++;
             release_strings__string(ivar_2);
             mpz_ptr_t ivar_45;
             mpz_ptr_t ivar_37;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_37, ivar_3);
             mpz_clear(ivar_3);
             uint8_t ivar_38;
             ivar_38 = (uint8_t)1;
             mpz_mk_set_ui(ivar_45, (uint64_t)ivar_38);
             mpz_add(ivar_45, ivar_45, ivar_37);
             mpz_ptr_t ivar_43;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_43, ivar_45);
             mpz_clear(ivar_45);
             result = (mpz_ptr_t)gen_strings__strdiff_rec((strings__string_t)ivar_41, (strings__string_t)ivar_42, ivar_43);
};

        return result;
}

extern mpz_ptr_t gen_strings__strdiff(strings__string_t ivar_1, strings__string_t ivar_2){
        mpz_ptr_t result;
        strings__string_t ivar_7;
        //copying to strings__string from strings__string;
        ivar_7 = (strings__string_t)ivar_1;
        ivar_7->count++;
        release_strings__string(ivar_1);
        strings__string_t ivar_8;
        //copying to strings__string from strings__string;
        ivar_8 = (strings__string_t)ivar_2;
        ivar_8->count++;
        release_strings__string(ivar_2);
        uint8_t ivar_11;
        ivar_11 = (uint8_t)0;
        mpz_ptr_t ivar_9;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_9, ivar_11);
        result = (mpz_ptr_t)gen_strings__strdiff_rec((strings__string_t)ivar_7, (strings__string_t)ivar_8, (mpz_ptr_t)ivar_9);

        return result;
}

extern int8_t gen_strings__strcmp(strings__string_t ivar_1, strings__string_t ivar_2){
        int8_t result;
        /* i */ mpz_ptr_t ivar_3;
        strings__string_t ivar_7;
        //copying to strings__string from strings__string;
        ivar_7 = (strings__string_t)ivar_1;
        ivar_7->count++;
        strings__string_t ivar_8;
        //copying to strings__string from strings__string;
        ivar_8 = (strings__string_t)ivar_2;
        ivar_8->count++;
        ivar_3 = (mpz_ptr_t)gen_strings__strdiff((strings__string_t)ivar_7, (strings__string_t)ivar_8);
        bool_t ivar_9;
        mpz_ptr_t ivar_10;
        ivar_10 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_10);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_10, ivar_3);
        mpq_ptr_t ivar_11;
        mpz_ptr_t ivar_22;
        strings__string_t ivar_14;
        //copying to strings__string from strings__string;
        ivar_14 = (strings__string_t)ivar_1;
        ivar_14->count++;
        ivar_22 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_22);
        mpz_set(ivar_22, ivar_14->length);
        release_strings__string(ivar_14);
        mpq_ptr_t ivar_17;
        //copying to mpq from mpz;
        mpq_mk_set_z(ivar_17, ivar_22);
        mpz_clear(ivar_22);
        mpz_ptr_t ivar_21;
        strings__string_t ivar_15;
        //copying to strings__string from strings__string;
        ivar_15 = (strings__string_t)ivar_2;
        ivar_15->count++;
        ivar_21 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_21);
        mpz_set(ivar_21, ivar_15->length);
        release_strings__string(ivar_15);
        mpq_ptr_t ivar_18;
        //copying to mpq from mpz;
        mpq_mk_set_z(ivar_18, ivar_21);
        mpz_clear(ivar_21);
        ivar_11 = (mpq_ptr_t)real_defs__min((mpq_ptr_t)ivar_17, (mpq_ptr_t)ivar_18);
        int64_t tmp22152 = mpq_cmp_z(ivar_11, ivar_10);
        ivar_9 = (tmp22152 == 0);
        if (ivar_9){ 
             bool_t ivar_24;
             mpz_ptr_t ivar_25;
             strings__string_t ivar_27;
             //copying to strings__string from strings__string;
             ivar_27 = (strings__string_t)ivar_1;
             ivar_27->count++;
             ivar_25 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_25);
             mpz_set(ivar_25, ivar_27->length);
             release_strings__string(ivar_27);
             mpz_ptr_t ivar_26;
             strings__string_t ivar_28;
             //copying to strings__string from strings__string;
             ivar_28 = (strings__string_t)ivar_2;
             ivar_28->count++;
             ivar_26 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_26);
             mpz_set(ivar_26, ivar_28->length);
             release_strings__string(ivar_28);
             int64_t tmp22153 = mpz_cmp(ivar_25, ivar_26);
             ivar_24 = (tmp22153 < 0);
             if (ivar_24){  
           release_strings__string(ivar_2);
           release_strings__string(ivar_1);
           result = (int8_t)-1;
} else {
             
           bool_t ivar_30;
           mpz_ptr_t ivar_31;
           strings__string_t ivar_33;
           //copying to strings__string from strings__string;
           ivar_33 = (strings__string_t)ivar_1;
           ivar_33->count++;
           release_strings__string(ivar_1);
           ivar_31 = safe_malloc(sizeof(mpz_t));
           mpz_init(ivar_31);
           mpz_set(ivar_31, ivar_33->length);
           release_strings__string(ivar_33);
           mpz_ptr_t ivar_32;
           strings__string_t ivar_34;
           //copying to strings__string from strings__string;
           ivar_34 = (strings__string_t)ivar_2;
           ivar_34->count++;
           release_strings__string(ivar_2);
           ivar_32 = safe_malloc(sizeof(mpz_t));
           mpz_init(ivar_32);
           mpz_set(ivar_32, ivar_34->length);
           release_strings__string(ivar_34);
           int64_t tmp22154 = mpz_cmp(ivar_31, ivar_32);
           ivar_30 = (tmp22154 > 0);
           if (ivar_30){   
           result = (int8_t)1;
} else {
           
           result = (int8_t)0;
};
};
} else {
        
             bool_t ivar_36;
             uint32_t ivar_37;
             uint32_t ivar_39;
             strings__string_t ivar_43;
             //copying to strings__string from strings__string;
             ivar_43 = (strings__string_t)ivar_1;
             ivar_43->count++;
             release_strings__string(ivar_1);
             mpz_ptr_t ivar_44;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_44, ivar_3);
             uint32_t ivar_42;
             ivar_42 = (uint32_t)gen_strings__get((strings__string_t)ivar_43, (mpz_ptr_t)ivar_44);
             //copying to uint32 from uint32;
             ivar_39 = (uint32_t)ivar_42;
             ivar_37 = (uint32_t) ivar_39;
             uint32_t ivar_38;
             uint32_t ivar_47;
             strings__string_t ivar_51;
             //copying to strings__string from strings__string;
             ivar_51 = (strings__string_t)ivar_2;
             ivar_51->count++;
             release_strings__string(ivar_2);
             mpz_ptr_t ivar_52;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_52, ivar_3);
             mpz_clear(ivar_3);
             uint32_t ivar_50;
             ivar_50 = (uint32_t)gen_strings__get((strings__string_t)ivar_51, (mpz_ptr_t)ivar_52);
             //copying to uint32 from uint32;
             ivar_47 = (uint32_t)ivar_50;
             ivar_38 = (uint32_t) ivar_47;
             ivar_36 = (ivar_37 < ivar_38);
             if (ivar_36){  
           result = (int8_t)-1;
} else {
             
           result = (int8_t)1;
};
};

        return result;
}

extern strings__string_t gen_strings__prefix(strings__string_t ivar_1, mpz_ptr_t ivar_2){
        strings__string_t result;
        bool_t ivar_4;
        mpz_ptr_t ivar_5;
        ivar_5 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_5);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_5, ivar_2);
        mpz_ptr_t ivar_6;
        strings__string_t ivar_7;
        //copying to strings__string from strings__string;
        ivar_7 = (strings__string_t)ivar_1;
        ivar_7->count++;
        ivar_6 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_6);
        mpz_set(ivar_6, ivar_7->length);
        release_strings__string(ivar_7);
        int64_t tmp22164 = mpz_cmp(ivar_5, ivar_6);
        ivar_4 = (tmp22164 == 0);
        if (ivar_4){ 
             //copying to strings__string from strings__string;
             result = (strings__string_t)ivar_1;
             result->count++;
             release_strings__string(ivar_1);
} else {
        
             mpz_ptr_t ivar_9;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_9, ivar_2);
             mpz_clear(ivar_2);
             gen_strings_funtype_0_t ivar_24;
             gen_strings_closure_6_t cl22166;
             cl22166 = new_gen_strings_closure_6();
             cl22166->fvar_1 = (strings__string_t)ivar_1;
             cl22166->fvar_1->count++;
             release_strings__string(ivar_1);
             ivar_24 = (gen_strings_funtype_0_t)cl22166;
             gen_strings_funtype_0_t ivar_22;
             gen_strings_closure_7_t cl22168;
             cl22168 = new_gen_strings_closure_7();
             cl22168->fvar_1 = (gen_strings_funtype_0_t)ivar_24;
             cl22168->fvar_1->count++;
             ivar_22 = (gen_strings_funtype_0_t)cl22168;
             result = (strings__string_t)new_strings__string();;
             mpz_init(result->length);
             mpz_set(result->length, ivar_9);
             mpz_clear(ivar_9);
             result->seq = (gen_strings_funtype_0_t)ivar_22;
};

        return result;
}

extern strings__string_t gen_strings__suffix(strings__string_t ivar_1, mpz_ptr_t ivar_2){
        strings__string_t result;
        bool_t ivar_4;
        mpz_ptr_t ivar_5;
        ivar_5 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_5);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_5, ivar_2);
        uint8_t ivar_6;
        ivar_6 = (uint8_t)0;
        int64_t tmp22178 = mpz_cmp_ui(ivar_5, ivar_6);
        ivar_4 = (tmp22178 == 0);
        if (ivar_4){ 
             //copying to strings__string from strings__string;
             result = (strings__string_t)ivar_1;
             result->count++;
             release_strings__string(ivar_1);
} else {
        
             mpz_ptr_t ivar_34;
             mpz_ptr_t ivar_8;
             strings__string_t ivar_10;
             //copying to strings__string from strings__string;
             ivar_10 = (strings__string_t)ivar_1;
             ivar_10->count++;
             ivar_8 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_8);
             mpz_set(ivar_8, ivar_10->length);
             release_strings__string(ivar_10);
             mpz_ptr_t ivar_9;
             ivar_9 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_9);
             //copying to mpz from mpz;
             mpz_mk_set(ivar_9, ivar_2);
             mpz_mk_sub(ivar_34, ivar_8, ivar_9);
             mpz_ptr_t ivar_12;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_12, ivar_34);
             mpz_clear(ivar_34);
             gen_strings_funtype_0_t ivar_29;
             gen_strings_closure_8_t cl22180;
             cl22180 = new_gen_strings_closure_8();
             mpz_set(cl22180->fvar_1, ivar_2);
             cl22180->fvar_2 = (strings__string_t)ivar_1;
             cl22180->fvar_2->count++;
             release_strings__string(ivar_1);
             ivar_29 = (gen_strings_funtype_0_t)cl22180;
             gen_strings_funtype_0_t ivar_27;
             gen_strings_closure_9_t cl22182;
             cl22182 = new_gen_strings_closure_9();
             cl22182->fvar_1 = (gen_strings_funtype_0_t)ivar_29;
             cl22182->fvar_1->count++;
             ivar_27 = (gen_strings_funtype_0_t)cl22182;
             result = (strings__string_t)new_strings__string();;
             mpz_init(result->length);
             mpz_set(result->length, ivar_12);
             mpz_clear(ivar_12);
             result->seq = (gen_strings_funtype_0_t)ivar_27;
};

        return result;
}

extern strings__string_t gen_strings__substr(strings__string_t ivar_1, mpz_ptr_t ivar_2, mpz_ptr_t ivar_4){
        strings__string_t result;
        strings__string_t ivar_24;
        strings__string_t ivar_11;
        //copying to strings__string from strings__string;
        ivar_11 = (strings__string_t)ivar_1;
        ivar_11->count++;
        release_strings__string(ivar_1);
        mpz_ptr_t ivar_12;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_12, ivar_2);
        strings__string_t ivar_10;
        ivar_10 = (strings__string_t)gen_strings__suffix((strings__string_t)ivar_11, (mpz_ptr_t)ivar_12);
        //copying to strings__string from strings__string;
        ivar_24 = (strings__string_t)ivar_10;
        ivar_24->count++;
        release_strings__string(ivar_10);
        strings__string_t ivar_18;
        //copying to strings__string from strings__string;
        ivar_18 = (strings__string_t)ivar_24;
        ivar_18->count++;
        release_strings__string(ivar_24);
        mpz_ptr_t ivar_23;
        mpz_ptr_t ivar_14;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_14, ivar_4);
        mpz_clear(ivar_4);
        mpz_ptr_t ivar_15;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_15, ivar_2);
        mpz_clear(ivar_2);
        mpz_mk_sub(ivar_23, ivar_14, ivar_15);
        mpz_ptr_t ivar_19;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_19, ivar_23);
        mpz_clear(ivar_23);
        strings__string_t ivar_17;
        ivar_17 = (strings__string_t)gen_strings__prefix((strings__string_t)ivar_18, (mpz_ptr_t)ivar_19);
        //copying to strings__string from strings__string;
        result = (strings__string_t)ivar_17;
        result->count++;
        release_strings__string(ivar_17);

        return result;
}