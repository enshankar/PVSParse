//Code generated using pvs2ir2c
#include "cstopdowntest_c.h"

void release_cstopdowntest_funtype_0(cstopdowntest_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdowntest_funtype_0_t copy_cstopdowntest_funtype_0(cstopdowntest_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdowntest_funtype_0(cstopdowntest_funtype_0_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdowntest_funtype_0_hashentry_t data = htbl->data[hashindex];
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

cstopdowntest_funtype_0_t dupdate_cstopdowntest_funtype_0(cstopdowntest_funtype_0_t a, uint8_t i, bool_t v){
        cstopdowntest_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdowntest_funtype_0_htbl_t)safe_malloc(sizeof(struct cstopdowntest_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdowntest_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdowntest_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdowntest_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdowntest_funtype_0_hashentry_t * new_data = (cstopdowntest_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdowntest_funtype_0_hashentry_s));
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
        uint32_t hashindex = lookup_cstopdowntest_funtype_0(htbl, i, ihash);
        cstopdowntest_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

cstopdowntest_funtype_0_t update_cstopdowntest_funtype_0(cstopdowntest_funtype_0_t a, uint8_t i, bool_t v){
        if (a->count == 1){
                return dupdate_cstopdowntest_funtype_0(a, i, v);
            } else {
                cstopdowntest_funtype_0_t x = copy_cstopdowntest_funtype_0(a);
                a->count--;
                return dupdate_cstopdowntest_funtype_0(x, i, v);
            }}

bool_t equal_cstopdowntest_funtype_0(cstopdowntest_funtype_0_t x, cstopdowntest_funtype_0_t y){
        return false;}

char* json_cstopdowntest_funtype_0(cstopdowntest_funtype_0_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"cstopdowntest_funtype_0\""); return result;}


bool_t f_cstopdowntest_closure_1(struct cstopdowntest_closure_1_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_0(htbl, bvar, hash);
        cstopdowntest_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_1(bvar);};

return h_cstopdowntest_closure_1(bvar);}

bool_t m_cstopdowntest_closure_1(struct cstopdowntest_closure_1_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_1(bvar);}

extern bool_t h_cstopdowntest_closure_1(uint8_t ivar_26){
        bool_t result;
        result = (bool_t)cstopdowntest__digit((uint8_t)ivar_26);

        return result;
}

cstopdowntest_closure_1_t new_cstopdowntest_closure_1(void){
        static struct cstopdowntest_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdowntest_funtype_0_t, uint8_t))&f_cstopdowntest_closure_1, .mptr = (bool_t (*)(cstopdowntest_funtype_0_t, uint8_t))&m_cstopdowntest_closure_1, .rptr =  (void (*)(cstopdowntest_funtype_0_t))&release_cstopdowntest_closure_1, .cptr = (cstopdowntest_funtype_0_t (*)(cstopdowntest_funtype_0_t))&copy_cstopdowntest_closure_1};
        cstopdowntest_closure_1_t tmp = (cstopdowntest_closure_1_t) safe_malloc(sizeof(struct cstopdowntest_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_1(cstopdowntest_funtype_0_t closure){
        cstopdowntest_closure_1_t x = (cstopdowntest_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_1_t copy_cstopdowntest_closure_1(cstopdowntest_closure_1_t x){
        cstopdowntest_closure_1_t y = new_cstopdowntest_closure_1();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdowntest_funtype_0_htbl_t new_htbl = (cstopdowntest_funtype_0_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_0_hashentry_t * new_data = (cstopdowntest_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_cstopdowntest_closure_2(struct cstopdowntest_closure_2_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_0(htbl, bvar, hash);
        cstopdowntest_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_2(bvar);};

return h_cstopdowntest_closure_2(bvar);}

bool_t m_cstopdowntest_closure_2(struct cstopdowntest_closure_2_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_2(bvar);}

extern bool_t h_cstopdowntest_closure_2(uint8_t ivar_238){
        bool_t result;
        result = (bool_t)cstopdowntest__any((uint8_t)ivar_238);

        return result;
}

cstopdowntest_closure_2_t new_cstopdowntest_closure_2(void){
        static struct cstopdowntest_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdowntest_funtype_0_t, uint8_t))&f_cstopdowntest_closure_2, .mptr = (bool_t (*)(cstopdowntest_funtype_0_t, uint8_t))&m_cstopdowntest_closure_2, .rptr =  (void (*)(cstopdowntest_funtype_0_t))&release_cstopdowntest_closure_2, .cptr = (cstopdowntest_funtype_0_t (*)(cstopdowntest_funtype_0_t))&copy_cstopdowntest_closure_2};
        cstopdowntest_closure_2_t tmp = (cstopdowntest_closure_2_t) safe_malloc(sizeof(struct cstopdowntest_closure_2_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_2(cstopdowntest_funtype_0_t closure){
        cstopdowntest_closure_2_t x = (cstopdowntest_closure_2_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_2_t copy_cstopdowntest_closure_2(cstopdowntest_closure_2_t x){
        cstopdowntest_closure_2_t y = new_cstopdowntest_closure_2();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdowntest_funtype_0_htbl_t new_htbl = (cstopdowntest_funtype_0_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_0_hashentry_t * new_data = (cstopdowntest_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_cstopdowntest_funtype_3(cstopdowntest_funtype_3_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdowntest_funtype_3_t copy_cstopdowntest_funtype_3(cstopdowntest_funtype_3_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdowntest_funtype_3(cstopdowntest_funtype_3_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdowntest_funtype_3_hashentry_t data = htbl->data[hashindex];
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

cstopdowntest_funtype_3_t dupdate_cstopdowntest_funtype_3(cstopdowntest_funtype_3_t a, uint8_t i, uint8_t v){
        cstopdowntest_funtype_3_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdowntest_funtype_3_htbl_t)safe_malloc(sizeof(struct cstopdowntest_funtype_3_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdowntest_funtype_3_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdowntest_funtype_3_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdowntest_funtype_3_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdowntest_funtype_3_hashentry_t * new_data = (cstopdowntest_funtype_3_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdowntest_funtype_3_hashentry_s));
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
                                new_data[new_loc].value = (uint8_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_cstopdowntest_funtype_3(htbl, i, ihash);
        cstopdowntest_funtype_3_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint8_t)v; htbl->num_entries++;}
            else {uint8_t tempvalue;tempvalue = (uint8_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint8_t)v;};
        return a;

}

cstopdowntest_funtype_3_t update_cstopdowntest_funtype_3(cstopdowntest_funtype_3_t a, uint8_t i, uint8_t v){
        if (a->count == 1){
                return dupdate_cstopdowntest_funtype_3(a, i, v);
            } else {
                cstopdowntest_funtype_3_t x = copy_cstopdowntest_funtype_3(a);
                a->count--;
                return dupdate_cstopdowntest_funtype_3(x, i, v);
            }}

bool_t equal_cstopdowntest_funtype_3(cstopdowntest_funtype_3_t x, cstopdowntest_funtype_3_t y){
        return false;}

char* json_cstopdowntest_funtype_3(cstopdowntest_funtype_3_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"cstopdowntest_funtype_3\""); return result;}


uint8_t f_cstopdowntest_closure_4(struct cstopdowntest_closure_4_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_3_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_3(htbl, bvar, hash);
        cstopdowntest_funtype_3_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_4(bvar);};

return h_cstopdowntest_closure_4(bvar);}

uint8_t m_cstopdowntest_closure_4(struct cstopdowntest_closure_4_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_4(bvar);}

extern uint8_t h_cstopdowntest_closure_4(uint8_t ivar_3){
        uint8_t result;
        result = (uint8_t)32;

        return result;
}

cstopdowntest_closure_4_t new_cstopdowntest_closure_4(void){
        static struct cstopdowntest_funtype_3_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&f_cstopdowntest_closure_4, .mptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&m_cstopdowntest_closure_4, .rptr =  (void (*)(cstopdowntest_funtype_3_t))&release_cstopdowntest_closure_4, .cptr = (cstopdowntest_funtype_3_t (*)(cstopdowntest_funtype_3_t))&copy_cstopdowntest_closure_4};
        cstopdowntest_closure_4_t tmp = (cstopdowntest_closure_4_t) safe_malloc(sizeof(struct cstopdowntest_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_4(cstopdowntest_funtype_3_t closure){
        cstopdowntest_closure_4_t x = (cstopdowntest_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_4_t copy_cstopdowntest_closure_4(cstopdowntest_closure_4_t x){
        cstopdowntest_closure_4_t y = new_cstopdowntest_closure_4();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdowntest_funtype_3_htbl_t new_htbl = (cstopdowntest_funtype_3_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_3_hashentry_t * new_data = (cstopdowntest_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_cstopdowntest_funtype_5(cstopdowntest_funtype_5_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdowntest_funtype_5_t copy_cstopdowntest_funtype_5(cstopdowntest_funtype_5_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdowntest_funtype_5(cstopdowntest_funtype_5_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdowntest_funtype_5_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp51068 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp51068 == 0);
        bool_t keymatch;
        int64_t tmp51069 = mpz_cmp(data.key, i);
        keymatch = (tmp51069 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                int64_t tmp51068 = mpz_cmp_ui(data.key, 0);
                keyzero = (tmp51068 == 0);

                int64_t tmp51069 = mpz_cmp(data.key, i);
                keymatch = (tmp51069 == 0);
                }
        return hashindex;
        }

cstopdowntest_funtype_5_t dupdate_cstopdowntest_funtype_5(cstopdowntest_funtype_5_t a, mpz_ptr_t i, uint8_t v){
        cstopdowntest_funtype_5_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdowntest_funtype_5_htbl_t)safe_malloc(sizeof(struct cstopdowntest_funtype_5_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdowntest_funtype_5_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdowntest_funtype_5_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdowntest_funtype_5_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdowntest_funtype_5_hashentry_t * new_data = (cstopdowntest_funtype_5_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdowntest_funtype_5_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp51070 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp51070 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp51071 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp51071 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp51072 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp51072 == 0);
                                }
                                mpz_set(new_data[new_loc].key, data[j].key);
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (uint8_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = mpz_hash(i);
        uint32_t hashindex = lookup_cstopdowntest_funtype_5(htbl, i, ihash);
        cstopdowntest_funtype_5_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp51073 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp51073 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint8_t)v; htbl->num_entries++;}
            else {uint8_t tempvalue;tempvalue = (uint8_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint8_t)v;};
        return a;

}

cstopdowntest_funtype_5_t update_cstopdowntest_funtype_5(cstopdowntest_funtype_5_t a, mpz_ptr_t i, uint8_t v){
        if (a->count == 1){
                return dupdate_cstopdowntest_funtype_5(a, i, v);
            } else {
                cstopdowntest_funtype_5_t x = copy_cstopdowntest_funtype_5(a);
                a->count--;
                return dupdate_cstopdowntest_funtype_5(x, i, v);
            }}

bool_t equal_cstopdowntest_funtype_5(cstopdowntest_funtype_5_t x, cstopdowntest_funtype_5_t y){
        return false;}

char* json_cstopdowntest_funtype_5(cstopdowntest_funtype_5_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"cstopdowntest_funtype_5\""); return result;}


cstopdowntest_record_6_t new_cstopdowntest_record_6(void){
        cstopdowntest_record_6_t tmp = (cstopdowntest_record_6_t) safe_malloc(sizeof(struct cstopdowntest_record_6_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdowntest_record_6(cstopdowntest_record_6_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdowntest_funtype_3(x->project_1);
         release_cstopdowntest_funtype_5(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdowntest_record_6_ptr(pointer_t x, type_actual_t T){
        release_cstopdowntest_record_6((cstopdowntest_record_6_t)x);
}

cstopdowntest_record_6_t copy_cstopdowntest_record_6(cstopdowntest_record_6_t x){
        cstopdowntest_record_6_t y = new_cstopdowntest_record_6();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_cstopdowntest_record_6(cstopdowntest_record_6_t x, cstopdowntest_record_6_t y){
        bool_t tmp = true;
        tmp = tmp && equal_cstopdowntest_funtype_3(x->project_1, y->project_1);
        tmp = tmp && equal_cstopdowntest_funtype_5(x->project_2, y->project_2);
        return tmp;}

char * json_cstopdowntest_record_6(cstopdowntest_record_6_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_cstopdowntest_funtype_3(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_cstopdowntest_funtype_5(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdowntest_record_6_ptr(pointer_t x, pointer_t y, actual_cstopdowntest_record_6_t T){
        return equal_cstopdowntest_record_6((cstopdowntest_record_6_t)x, (cstopdowntest_record_6_t)y);
}

char * json_cstopdowntest_record_6_ptr(pointer_t x, actual_cstopdowntest_record_6_t T){
        return json_cstopdowntest_record_6((cstopdowntest_record_6_t)x);
}

cstopdowntest_record_6_t update_cstopdowntest_record_6_project_1(cstopdowntest_record_6_t x, cstopdowntest_funtype_3_t v){
        cstopdowntest_record_6_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_cstopdowntest_funtype_3(x->project_1);};}
        else {y = copy_cstopdowntest_record_6(x); x->count--; y->project_1->count--;};
        y->project_1 = (cstopdowntest_funtype_3_t)v;
        return y;}

cstopdowntest_record_6_t update_cstopdowntest_record_6_project_2(cstopdowntest_record_6_t x, cstopdowntest_funtype_5_t v){
        cstopdowntest_record_6_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_cstopdowntest_funtype_5(x->project_2);};}
        else {y = copy_cstopdowntest_record_6(x); x->count--; y->project_2->count--;};
        y->project_2 = (cstopdowntest_funtype_5_t)v;
        return y;}



void release_cstopdowntest_funtype_7(cstopdowntest_funtype_7_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdowntest_funtype_7_t copy_cstopdowntest_funtype_7(cstopdowntest_funtype_7_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdowntest_funtype_7(cstopdowntest_funtype_7_t x, cstopdowntest_funtype_7_t y){
        return false;}

char* json_cstopdowntest_funtype_7(cstopdowntest_funtype_7_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"cstopdowntest_funtype_7\""); return result;}


cstopdowntest_funtype_5_t f_cstopdowntest_closure_8(struct cstopdowntest_closure_8_s * closure, cstopdowntest_record_6_t bvar){
        cstopdowntest_funtype_3_t bvar_1;
        bvar_1 = (cstopdowntest_funtype_3_t)bvar->project_1;
        bvar->project_1->count++;
        cstopdowntest_funtype_5_t bvar_2;
        bvar_2 = (cstopdowntest_funtype_5_t)bvar->project_2;
        bvar->project_2->count++;
        release_cstopdowntest_record_6(bvar);
        cstopdowntest_funtype_5_t result = h_cstopdowntest_closure_8(bvar_1, bvar_2, closure->fvar_1); 
        release_cstopdowntest_funtype_3(bvar_1);
        release_cstopdowntest_funtype_5(bvar_2);
        return result;}

cstopdowntest_funtype_5_t m_cstopdowntest_closure_8(struct cstopdowntest_closure_8_s * closure, cstopdowntest_funtype_3_t bvar_1, cstopdowntest_funtype_5_t bvar_2){
        return h_cstopdowntest_closure_8(bvar_1, bvar_2, closure->fvar_1);}

extern cstopdowntest_funtype_5_t h_cstopdowntest_closure_8(cstopdowntest_funtype_3_t ivar_26, cstopdowntest_funtype_5_t ivar_28, uint8_t ivar_1){
        cstopdowntest_funtype_5_t result;
        cstopdowntest_closure_9_t cl51076;
        cl51076 = new_cstopdowntest_closure_9();
        cl51076->fvar_1 = (uint8_t)ivar_1;
        cl51076->fvar_2 = (cstopdowntest_funtype_5_t)ivar_28;
        if (cl51076->fvar_2 != NULL) cl51076->fvar_2->count++;
        cl51076->fvar_3 = (cstopdowntest_funtype_3_t)ivar_26;
        if (cl51076->fvar_3 != NULL) cl51076->fvar_3->count++;
        release_cstopdowntest_funtype_3(ivar_26);
        release_cstopdowntest_funtype_5(ivar_28);
        result = (cstopdowntest_funtype_5_t)cl51076;

        return result;
}

cstopdowntest_closure_8_t new_cstopdowntest_closure_8(void){
        static struct cstopdowntest_funtype_7_ftbl_s ftbl = {.fptr = (cstopdowntest_funtype_5_t (*)(cstopdowntest_funtype_7_t, cstopdowntest_record_6_t))&f_cstopdowntest_closure_8, .mptr = (cstopdowntest_funtype_5_t (*)(cstopdowntest_funtype_7_t, cstopdowntest_funtype_3_t, cstopdowntest_funtype_5_t))&m_cstopdowntest_closure_8, .rptr =  (void (*)(cstopdowntest_funtype_7_t))&release_cstopdowntest_closure_8, .cptr = (cstopdowntest_funtype_7_t (*)(cstopdowntest_funtype_7_t))&copy_cstopdowntest_closure_8};
        cstopdowntest_closure_8_t tmp = (cstopdowntest_closure_8_t) safe_malloc(sizeof(struct cstopdowntest_closure_8_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_8(cstopdowntest_funtype_7_t closure){
        cstopdowntest_closure_8_t x = (cstopdowntest_closure_8_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_8_t copy_cstopdowntest_closure_8(cstopdowntest_closure_8_t x){
        cstopdowntest_closure_8_t y = new_cstopdowntest_closure_8();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint8_t)x->fvar_1;
        if (x->htbl != NULL){
            cstopdowntest_funtype_7_htbl_t new_htbl = (cstopdowntest_funtype_7_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_7_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_7_hashentry_t * new_data = (cstopdowntest_funtype_7_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_7_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_7_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_cstopdowntest_closure_9(struct cstopdowntest_closure_9_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_5_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_5(htbl, bvar, hash);
        cstopdowntest_funtype_5_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp51074 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp51074 == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_9(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);};

return h_cstopdowntest_closure_9(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

uint8_t m_cstopdowntest_closure_9(struct cstopdowntest_closure_9_s * closure, mpz_ptr_t bvar){
        return h_cstopdowntest_closure_9(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern uint8_t h_cstopdowntest_closure_9(mpz_ptr_t ivar_42, uint8_t ivar_1, cstopdowntest_funtype_5_t ivar_28, cstopdowntest_funtype_3_t ivar_26){
        uint8_t result;
        bool_t ivar_46;
        int64_t tmp51075 = mpz_cmp_ui(ivar_42, ivar_1);
        ivar_46 = (tmp51075 < 0);
        if (ivar_46){ 
             uint8_t ivar_54;
             //copying to uint8 from mpz;
             ivar_54 = (uint8_t)mpz_get_ui(ivar_42);
             mpz_clear(ivar_42);
             result = (uint8_t)ivar_26->ftbl->fptr(ivar_26, ivar_54);
} else {
        
             mpz_ptr_t ivar_70;
             mpz_mk_sub_ui(ivar_70, ivar_42, (uint64_t)ivar_1);
             result = (uint8_t)ivar_28->ftbl->fptr(ivar_28, ivar_70);
};

        return result;
}

cstopdowntest_closure_9_t new_cstopdowntest_closure_9(void){
        static struct cstopdowntest_funtype_5_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdowntest_funtype_5_t, mpz_ptr_t))&f_cstopdowntest_closure_9, .mptr = (uint8_t (*)(cstopdowntest_funtype_5_t, mpz_ptr_t))&m_cstopdowntest_closure_9, .rptr =  (void (*)(cstopdowntest_funtype_5_t))&release_cstopdowntest_closure_9, .cptr = (cstopdowntest_funtype_5_t (*)(cstopdowntest_funtype_5_t))&copy_cstopdowntest_closure_9};
        cstopdowntest_closure_9_t tmp = (cstopdowntest_closure_9_t) safe_malloc(sizeof(struct cstopdowntest_closure_9_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_9(cstopdowntest_funtype_5_t closure){
        cstopdowntest_closure_9_t x = (cstopdowntest_closure_9_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdowntest_funtype_5(x->fvar_2);
         release_cstopdowntest_funtype_3(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_9_t copy_cstopdowntest_closure_9(cstopdowntest_closure_9_t x){
        cstopdowntest_closure_9_t y = new_cstopdowntest_closure_9();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint8_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            cstopdowntest_funtype_5_htbl_t new_htbl = (cstopdowntest_funtype_5_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_5_hashentry_t * new_data = (cstopdowntest_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_5_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdowntest_record_10_t new_cstopdowntest_record_10(void){
        cstopdowntest_record_10_t tmp = (cstopdowntest_record_10_t) safe_malloc(sizeof(struct cstopdowntest_record_10_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdowntest_record_10(cstopdowntest_record_10_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdowntest_funtype_3(x->project_1);
         release_cstopdowntest_funtype_3(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdowntest_record_10_ptr(pointer_t x, type_actual_t T){
        release_cstopdowntest_record_10((cstopdowntest_record_10_t)x);
}

cstopdowntest_record_10_t copy_cstopdowntest_record_10(cstopdowntest_record_10_t x){
        cstopdowntest_record_10_t y = new_cstopdowntest_record_10();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_cstopdowntest_record_10(cstopdowntest_record_10_t x, cstopdowntest_record_10_t y){
        bool_t tmp = true;
        tmp = tmp && equal_cstopdowntest_funtype_3(x->project_1, y->project_1);
        tmp = tmp && equal_cstopdowntest_funtype_3(x->project_2, y->project_2);
        return tmp;}

char * json_cstopdowntest_record_10(cstopdowntest_record_10_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_cstopdowntest_funtype_3(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_cstopdowntest_funtype_3(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdowntest_record_10_ptr(pointer_t x, pointer_t y, actual_cstopdowntest_record_10_t T){
        return equal_cstopdowntest_record_10((cstopdowntest_record_10_t)x, (cstopdowntest_record_10_t)y);
}

char * json_cstopdowntest_record_10_ptr(pointer_t x, actual_cstopdowntest_record_10_t T){
        return json_cstopdowntest_record_10((cstopdowntest_record_10_t)x);
}

cstopdowntest_record_10_t update_cstopdowntest_record_10_project_1(cstopdowntest_record_10_t x, cstopdowntest_funtype_3_t v){
        cstopdowntest_record_10_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_cstopdowntest_funtype_3(x->project_1);};}
        else {y = copy_cstopdowntest_record_10(x); x->count--; y->project_1->count--;};
        y->project_1 = (cstopdowntest_funtype_3_t)v;
        return y;}

cstopdowntest_record_10_t update_cstopdowntest_record_10_project_2(cstopdowntest_record_10_t x, cstopdowntest_funtype_3_t v){
        cstopdowntest_record_10_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_cstopdowntest_funtype_3(x->project_2);};}
        else {y = copy_cstopdowntest_record_10(x); x->count--; y->project_2->count--;};
        y->project_2 = (cstopdowntest_funtype_3_t)v;
        return y;}



void release_cstopdowntest_funtype_11(cstopdowntest_funtype_11_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdowntest_funtype_11_t copy_cstopdowntest_funtype_11(cstopdowntest_funtype_11_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdowntest_funtype_11(cstopdowntest_funtype_11_t x, cstopdowntest_funtype_11_t y){
        return false;}

char* json_cstopdowntest_funtype_11(cstopdowntest_funtype_11_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"cstopdowntest_funtype_11\""); return result;}


uint8_t f_cstopdowntest_closure_12(struct cstopdowntest_closure_12_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_3_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_3(htbl, bvar, hash);
        cstopdowntest_funtype_3_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_12(bvar);};

return h_cstopdowntest_closure_12(bvar);}

uint8_t m_cstopdowntest_closure_12(struct cstopdowntest_closure_12_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_12(bvar);}

extern uint8_t h_cstopdowntest_closure_12(uint8_t ivar_5){
        uint8_t result;
        result = (uint8_t)cstopdowntest__obrace((uint8_t)ivar_5);

        return result;
}

cstopdowntest_closure_12_t new_cstopdowntest_closure_12(void){
        static struct cstopdowntest_funtype_3_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&f_cstopdowntest_closure_12, .mptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&m_cstopdowntest_closure_12, .rptr =  (void (*)(cstopdowntest_funtype_3_t))&release_cstopdowntest_closure_12, .cptr = (cstopdowntest_funtype_3_t (*)(cstopdowntest_funtype_3_t))&copy_cstopdowntest_closure_12};
        cstopdowntest_closure_12_t tmp = (cstopdowntest_closure_12_t) safe_malloc(sizeof(struct cstopdowntest_closure_12_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_12(cstopdowntest_funtype_3_t closure){
        cstopdowntest_closure_12_t x = (cstopdowntest_closure_12_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_12_t copy_cstopdowntest_closure_12(cstopdowntest_closure_12_t x){
        cstopdowntest_closure_12_t y = new_cstopdowntest_closure_12();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdowntest_funtype_3_htbl_t new_htbl = (cstopdowntest_funtype_3_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_3_hashentry_t * new_data = (cstopdowntest_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_cstopdowntest_closure_13(struct cstopdowntest_closure_13_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_3_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_3(htbl, bvar, hash);
        cstopdowntest_funtype_3_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_13(bvar);};

return h_cstopdowntest_closure_13(bvar);}

uint8_t m_cstopdowntest_closure_13(struct cstopdowntest_closure_13_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_13(bvar);}

extern uint8_t h_cstopdowntest_closure_13(uint8_t ivar_7){
        uint8_t result;
        result = (uint8_t)cstopdowntest__cbrace((uint8_t)ivar_7);

        return result;
}

cstopdowntest_closure_13_t new_cstopdowntest_closure_13(void){
        static struct cstopdowntest_funtype_3_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&f_cstopdowntest_closure_13, .mptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&m_cstopdowntest_closure_13, .rptr =  (void (*)(cstopdowntest_funtype_3_t))&release_cstopdowntest_closure_13, .cptr = (cstopdowntest_funtype_3_t (*)(cstopdowntest_funtype_3_t))&copy_cstopdowntest_closure_13};
        cstopdowntest_closure_13_t tmp = (cstopdowntest_closure_13_t) safe_malloc(sizeof(struct cstopdowntest_closure_13_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_13(cstopdowntest_funtype_3_t closure){
        cstopdowntest_closure_13_t x = (cstopdowntest_closure_13_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_13_t copy_cstopdowntest_closure_13(cstopdowntest_closure_13_t x){
        cstopdowntest_closure_13_t y = new_cstopdowntest_closure_13();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdowntest_funtype_3_htbl_t new_htbl = (cstopdowntest_funtype_3_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_3_hashentry_t * new_data = (cstopdowntest_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_cstopdowntest_closure_14(struct cstopdowntest_closure_14_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_3_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_3(htbl, bvar, hash);
        cstopdowntest_funtype_3_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_14(bvar);};

return h_cstopdowntest_closure_14(bvar);}

uint8_t m_cstopdowntest_closure_14(struct cstopdowntest_closure_14_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_14(bvar);}

extern uint8_t h_cstopdowntest_closure_14(uint8_t ivar_5){
        uint8_t result;
        result = (uint8_t)cstopdowntest__obrace((uint8_t)ivar_5);

        return result;
}

cstopdowntest_closure_14_t new_cstopdowntest_closure_14(void){
        static struct cstopdowntest_funtype_3_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&f_cstopdowntest_closure_14, .mptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&m_cstopdowntest_closure_14, .rptr =  (void (*)(cstopdowntest_funtype_3_t))&release_cstopdowntest_closure_14, .cptr = (cstopdowntest_funtype_3_t (*)(cstopdowntest_funtype_3_t))&copy_cstopdowntest_closure_14};
        cstopdowntest_closure_14_t tmp = (cstopdowntest_closure_14_t) safe_malloc(sizeof(struct cstopdowntest_closure_14_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_14(cstopdowntest_funtype_3_t closure){
        cstopdowntest_closure_14_t x = (cstopdowntest_closure_14_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_14_t copy_cstopdowntest_closure_14(cstopdowntest_closure_14_t x){
        cstopdowntest_closure_14_t y = new_cstopdowntest_closure_14();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdowntest_funtype_3_htbl_t new_htbl = (cstopdowntest_funtype_3_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_3_hashentry_t * new_data = (cstopdowntest_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_cstopdowntest_closure_15(struct cstopdowntest_closure_15_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_3_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_3(htbl, bvar, hash);
        cstopdowntest_funtype_3_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_15(bvar);};

return h_cstopdowntest_closure_15(bvar);}

uint8_t m_cstopdowntest_closure_15(struct cstopdowntest_closure_15_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_15(bvar);}

extern uint8_t h_cstopdowntest_closure_15(uint8_t ivar_10){
        uint8_t result;
        result = (uint8_t)cstopdowntest__tok0((uint8_t)ivar_10);

        return result;
}

cstopdowntest_closure_15_t new_cstopdowntest_closure_15(void){
        static struct cstopdowntest_funtype_3_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&f_cstopdowntest_closure_15, .mptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&m_cstopdowntest_closure_15, .rptr =  (void (*)(cstopdowntest_funtype_3_t))&release_cstopdowntest_closure_15, .cptr = (cstopdowntest_funtype_3_t (*)(cstopdowntest_funtype_3_t))&copy_cstopdowntest_closure_15};
        cstopdowntest_closure_15_t tmp = (cstopdowntest_closure_15_t) safe_malloc(sizeof(struct cstopdowntest_closure_15_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_15(cstopdowntest_funtype_3_t closure){
        cstopdowntest_closure_15_t x = (cstopdowntest_closure_15_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_15_t copy_cstopdowntest_closure_15(cstopdowntest_closure_15_t x){
        cstopdowntest_closure_15_t y = new_cstopdowntest_closure_15();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdowntest_funtype_3_htbl_t new_htbl = (cstopdowntest_funtype_3_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_3_hashentry_t * new_data = (cstopdowntest_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_cstopdowntest_closure_16(struct cstopdowntest_closure_16_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_3_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_3(htbl, bvar, hash);
        cstopdowntest_funtype_3_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_16(bvar);};

return h_cstopdowntest_closure_16(bvar);}

uint8_t m_cstopdowntest_closure_16(struct cstopdowntest_closure_16_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_16(bvar);}

extern uint8_t h_cstopdowntest_closure_16(uint8_t ivar_15){
        uint8_t result;
        result = (uint8_t)cstopdowntest__colon((uint8_t)ivar_15);

        return result;
}

cstopdowntest_closure_16_t new_cstopdowntest_closure_16(void){
        static struct cstopdowntest_funtype_3_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&f_cstopdowntest_closure_16, .mptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&m_cstopdowntest_closure_16, .rptr =  (void (*)(cstopdowntest_funtype_3_t))&release_cstopdowntest_closure_16, .cptr = (cstopdowntest_funtype_3_t (*)(cstopdowntest_funtype_3_t))&copy_cstopdowntest_closure_16};
        cstopdowntest_closure_16_t tmp = (cstopdowntest_closure_16_t) safe_malloc(sizeof(struct cstopdowntest_closure_16_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_16(cstopdowntest_funtype_3_t closure){
        cstopdowntest_closure_16_t x = (cstopdowntest_closure_16_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_16_t copy_cstopdowntest_closure_16(cstopdowntest_closure_16_t x){
        cstopdowntest_closure_16_t y = new_cstopdowntest_closure_16();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdowntest_funtype_3_htbl_t new_htbl = (cstopdowntest_funtype_3_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_3_hashentry_t * new_data = (cstopdowntest_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_cstopdowntest_closure_17(struct cstopdowntest_closure_17_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_3_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_3(htbl, bvar, hash);
        cstopdowntest_funtype_3_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_17(bvar);};

return h_cstopdowntest_closure_17(bvar);}

uint8_t m_cstopdowntest_closure_17(struct cstopdowntest_closure_17_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_17(bvar);}

extern uint8_t h_cstopdowntest_closure_17(uint8_t ivar_45){
        uint8_t result;
        cstopdowntest_funtype_3_t tmp51083;
        tmp51083 = (cstopdowntest_funtype_3_t)cstopdowntest__emptydict2();
        if (tmp51083 != NULL) tmp51083->count++;
        result = (uint8_t)tmp51083->ftbl->fptr(tmp51083, ivar_45);
        tmp51083->ftbl->rptr(tmp51083);

        return result;
}

cstopdowntest_closure_17_t new_cstopdowntest_closure_17(void){
        static struct cstopdowntest_funtype_3_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&f_cstopdowntest_closure_17, .mptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&m_cstopdowntest_closure_17, .rptr =  (void (*)(cstopdowntest_funtype_3_t))&release_cstopdowntest_closure_17, .cptr = (cstopdowntest_funtype_3_t (*)(cstopdowntest_funtype_3_t))&copy_cstopdowntest_closure_17};
        cstopdowntest_closure_17_t tmp = (cstopdowntest_closure_17_t) safe_malloc(sizeof(struct cstopdowntest_closure_17_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_17(cstopdowntest_funtype_3_t closure){
        cstopdowntest_closure_17_t x = (cstopdowntest_closure_17_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_17_t copy_cstopdowntest_closure_17(cstopdowntest_closure_17_t x){
        cstopdowntest_closure_17_t y = new_cstopdowntest_closure_17();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdowntest_funtype_3_htbl_t new_htbl = (cstopdowntest_funtype_3_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_3_hashentry_t * new_data = (cstopdowntest_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_cstopdowntest_closure_18(struct cstopdowntest_closure_18_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_3_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_3(htbl, bvar, hash);
        cstopdowntest_funtype_3_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_18(bvar);};

return h_cstopdowntest_closure_18(bvar);}

uint8_t m_cstopdowntest_closure_18(struct cstopdowntest_closure_18_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_18(bvar);}

extern uint8_t h_cstopdowntest_closure_18(uint8_t ivar_21){
        uint8_t result;
        result = (uint8_t)cstopdowntest__cbrace((uint8_t)ivar_21);

        return result;
}

cstopdowntest_closure_18_t new_cstopdowntest_closure_18(void){
        static struct cstopdowntest_funtype_3_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&f_cstopdowntest_closure_18, .mptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&m_cstopdowntest_closure_18, .rptr =  (void (*)(cstopdowntest_funtype_3_t))&release_cstopdowntest_closure_18, .cptr = (cstopdowntest_funtype_3_t (*)(cstopdowntest_funtype_3_t))&copy_cstopdowntest_closure_18};
        cstopdowntest_closure_18_t tmp = (cstopdowntest_closure_18_t) safe_malloc(sizeof(struct cstopdowntest_closure_18_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_18(cstopdowntest_funtype_3_t closure){
        cstopdowntest_closure_18_t x = (cstopdowntest_closure_18_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_18_t copy_cstopdowntest_closure_18(cstopdowntest_closure_18_t x){
        cstopdowntest_closure_18_t y = new_cstopdowntest_closure_18();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdowntest_funtype_3_htbl_t new_htbl = (cstopdowntest_funtype_3_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_3_hashentry_t * new_data = (cstopdowntest_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdowntest_array_19_t new_cstopdowntest_array_19(uint32_t size){
        cstopdowntest_array_19_t tmp = (cstopdowntest_array_19_t) safe_malloc(sizeof(struct cstopdowntest_array_19_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_cstopdowntest_array_19(cstopdowntest_array_19_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_cstopdowntest_array_19_ptr(pointer_t x, type_actual_t T){
        release_cstopdowntest_array_19((cstopdowntest_array_19_t)x);
}

cstopdowntest_array_19_t copy_cstopdowntest_array_19(cstopdowntest_array_19_t x){
        cstopdowntest_array_19_t tmp = new_cstopdowntest_array_19(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_cstopdowntest_array_19(cstopdowntest_array_19_t x, cstopdowntest_array_19_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_cstopdowntest_array_19(cstopdowntest_array_19_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint8(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_cstopdowntest_array_19_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_cstopdowntest_array_19((cstopdowntest_array_19_t)x, (cstopdowntest_array_19_t)y);
}

char * json_cstopdowntest_array_19_ptr(pointer_t x, type_actual_t T){
        return json_cstopdowntest_array_19((cstopdowntest_array_19_t)x);
}

cstopdowntest_array_19_t update_cstopdowntest_array_19(cstopdowntest_array_19_t x, uint32_t i, uint8_t v){
        cstopdowntest_array_19_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_cstopdowntest_array_19(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

cstopdowntest_array_19_t upgrade_cstopdowntest_array_19(cstopdowntest_array_19_t x, uint32_t i, uint8_t v){
        cstopdowntest_array_19_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct cstopdowntest_array_19_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_cstopdowntest_array_19(x);}
           else {y = copy_cstopdowntest_array_19(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}



void release_cstopdowntest_funtype_20(cstopdowntest_funtype_20_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdowntest_funtype_20_t copy_cstopdowntest_funtype_20(cstopdowntest_funtype_20_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdowntest_funtype_20(cstopdowntest_funtype_20_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdowntest_funtype_20_hashentry_t data = htbl->data[hashindex];
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

cstopdowntest_funtype_20_t dupdate_cstopdowntest_funtype_20(cstopdowntest_funtype_20_t a, uint8_t i, cstopdown__ent_adt_t v){
        cstopdowntest_funtype_20_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdowntest_funtype_20_htbl_t)safe_malloc(sizeof(struct cstopdowntest_funtype_20_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdowntest_funtype_20_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdowntest_funtype_20_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdowntest_funtype_20_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdowntest_funtype_20_hashentry_t * new_data = (cstopdowntest_funtype_20_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdowntest_funtype_20_hashentry_s));
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
                                new_data[new_loc].value = (cstopdown__ent_adt_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_cstopdowntest_funtype_20(htbl, i, ihash);
        cstopdowntest_funtype_20_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (cstopdown__ent_adt_t)v; htbl->num_entries++;}
            else {cstopdown__ent_adt_t tempvalue;tempvalue = (cstopdown__ent_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (cstopdown__ent_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_cstopdown__ent_adt(tempvalue);};
        return a;

}

cstopdowntest_funtype_20_t update_cstopdowntest_funtype_20(cstopdowntest_funtype_20_t a, uint8_t i, cstopdown__ent_adt_t v){
        if (a->count == 1){
                return dupdate_cstopdowntest_funtype_20(a, i, v);
            } else {
                cstopdowntest_funtype_20_t x = copy_cstopdowntest_funtype_20(a);
                a->count--;
                return dupdate_cstopdowntest_funtype_20(x, i, v);
            }}

bool_t equal_cstopdowntest_funtype_20(cstopdowntest_funtype_20_t x, cstopdowntest_funtype_20_t y){
        return false;}

char* json_cstopdowntest_funtype_20(cstopdowntest_funtype_20_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"cstopdowntest_funtype_20\""); return result;}

void release_cstopdowntest_funtype_21(cstopdowntest_funtype_21_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdowntest_funtype_21_t copy_cstopdowntest_funtype_21(cstopdowntest_funtype_21_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdowntest_funtype_21(cstopdowntest_funtype_21_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdowntest_funtype_21_hashentry_t data = htbl->data[hashindex];
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

cstopdowntest_funtype_21_t dupdate_cstopdowntest_funtype_21(cstopdowntest_funtype_21_t a, uint8_t i, cstopdowntest_funtype_20_t v){
        cstopdowntest_funtype_21_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdowntest_funtype_21_htbl_t)safe_malloc(sizeof(struct cstopdowntest_funtype_21_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdowntest_funtype_21_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdowntest_funtype_21_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdowntest_funtype_21_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdowntest_funtype_21_hashentry_t * new_data = (cstopdowntest_funtype_21_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdowntest_funtype_21_hashentry_s));
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
                                new_data[new_loc].value = (cstopdowntest_funtype_20_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_cstopdowntest_funtype_21(htbl, i, ihash);
        cstopdowntest_funtype_21_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (cstopdowntest_funtype_20_t)v; htbl->num_entries++;}
            else {cstopdowntest_funtype_20_t tempvalue;tempvalue = (cstopdowntest_funtype_20_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (cstopdowntest_funtype_20_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_cstopdowntest_funtype_20(tempvalue);};
        return a;

}

cstopdowntest_funtype_21_t update_cstopdowntest_funtype_21(cstopdowntest_funtype_21_t a, uint8_t i, cstopdowntest_funtype_20_t v){
        if (a->count == 1){
                return dupdate_cstopdowntest_funtype_21(a, i, v);
            } else {
                cstopdowntest_funtype_21_t x = copy_cstopdowntest_funtype_21(a);
                a->count--;
                return dupdate_cstopdowntest_funtype_21(x, i, v);
            }}

bool_t equal_cstopdowntest_funtype_21(cstopdowntest_funtype_21_t x, cstopdowntest_funtype_21_t y){
        return false;}

char* json_cstopdowntest_funtype_21(cstopdowntest_funtype_21_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"cstopdowntest_funtype_21\""); return result;}


cstopdowntest_record_22_t new_cstopdowntest_record_22(void){
        cstopdowntest_record_22_t tmp = (cstopdowntest_record_22_t) safe_malloc(sizeof(struct cstopdowntest_record_22_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdowntest_record_22(cstopdowntest_record_22_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdowntest_funtype_21(x->scaf);
         release_cstopdown__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdowntest_record_22_ptr(pointer_t x, type_actual_t T){
        release_cstopdowntest_record_22((cstopdowntest_record_22_t)x);
}

cstopdowntest_record_22_t copy_cstopdowntest_record_22(cstopdowntest_record_22_t x){
        cstopdowntest_record_22_t y = new_cstopdowntest_record_22();
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->depth = (uint64_t)x->depth;
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->lflag = (bool_t)x->lflag;
        y->count = 1;
        return y;}

bool_t equal_cstopdowntest_record_22(cstopdowntest_record_22_t x, cstopdowntest_record_22_t y){
        bool_t tmp = true;
        tmp = tmp && equal_cstopdowntest_funtype_21(x->scaf, y->scaf);
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && equal_cstopdown__ent_adt(x->stack, y->stack);
        tmp = tmp && x->lflag == y->lflag;
        return tmp;}

char * json_cstopdowntest_record_22(cstopdowntest_record_22_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(16);
         sprintf(fld0, "\"scaf\" : ");
        tmp[0] = safe_strcat(fld0, json_cstopdowntest_funtype_21(x->scaf));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"depth\" : ");
        tmp[1] = safe_strcat(fld1, json_uint64(x->depth));
        char * fld2 = safe_malloc(17);
         sprintf(fld2, "\"stack\" : ");
        tmp[2] = safe_strcat(fld2, json_cstopdown__ent_adt(x->stack));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"lflag\" : ");
        tmp[3] = safe_strcat(fld3, json_bool(x->lflag));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdowntest_record_22_ptr(pointer_t x, pointer_t y, actual_cstopdowntest_record_22_t T){
        return equal_cstopdowntest_record_22((cstopdowntest_record_22_t)x, (cstopdowntest_record_22_t)y);
}

char * json_cstopdowntest_record_22_ptr(pointer_t x, actual_cstopdowntest_record_22_t T){
        return json_cstopdowntest_record_22((cstopdowntest_record_22_t)x);
}

cstopdowntest_record_22_t update_cstopdowntest_record_22_scaf(cstopdowntest_record_22_t x, cstopdowntest_funtype_21_t v){
        cstopdowntest_record_22_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_cstopdowntest_funtype_21(x->scaf);};}
        else {y = copy_cstopdowntest_record_22(x); x->count--; y->scaf->count--;};
        y->scaf = (cstopdowntest_funtype_21_t)v;
        return y;}

cstopdowntest_record_22_t update_cstopdowntest_record_22_depth(cstopdowntest_record_22_t x, uint64_t v){
        cstopdowntest_record_22_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdowntest_record_22(x); x->count--;};
        y->depth = (uint64_t)v;
        return y;}

cstopdowntest_record_22_t update_cstopdowntest_record_22_stack(cstopdowntest_record_22_t x, cstopdown__ent_adt_t v){
        cstopdowntest_record_22_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_cstopdown__ent_adt(x->stack);};}
        else {y = copy_cstopdowntest_record_22(x); x->count--; y->stack->count--;};
        y->stack = (cstopdown__ent_adt_t)v;
        return y;}

cstopdowntest_record_22_t update_cstopdowntest_record_22_lflag(cstopdowntest_record_22_t x, bool_t v){
        cstopdowntest_record_22_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdowntest_record_22(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}




cstopdown__peg_adt_t f_cstopdowntest_closure_23(struct cstopdowntest_closure_23_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdown__lang_spec_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown__lang_spec(htbl, bvar, hash);
        cstopdown__lang_spec_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown__peg_adt_t result;
            result = (cstopdown__peg_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdowntest_closure_23(bvar);};

return h_cstopdowntest_closure_23(bvar);}

cstopdown__peg_adt_t m_cstopdowntest_closure_23(struct cstopdowntest_closure_23_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_23(bvar);}

extern cstopdown__peg_adt_t h_cstopdowntest_closure_23(uint8_t ivar_18){
        cstopdown__peg_adt_t result;
        result = (cstopdown__peg_adt_t)cstopdowntest__pyaml((uint8_t)ivar_18);

        return result;
}

cstopdowntest_closure_23_t new_cstopdowntest_closure_23(void){
        static struct cstopdown__lang_spec_ftbl_s ftbl = {.fptr = (cstopdown__peg_adt_t (*)(cstopdown__lang_spec_t, uint8_t))&f_cstopdowntest_closure_23, .mptr = (cstopdown__peg_adt_t (*)(cstopdown__lang_spec_t, uint8_t))&m_cstopdowntest_closure_23, .rptr =  (void (*)(cstopdown__lang_spec_t))&release_cstopdowntest_closure_23, .cptr = (cstopdown__lang_spec_t (*)(cstopdown__lang_spec_t))&copy_cstopdowntest_closure_23};
        cstopdowntest_closure_23_t tmp = (cstopdowntest_closure_23_t) safe_malloc(sizeof(struct cstopdowntest_closure_23_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_23(cstopdown__lang_spec_t closure){
        cstopdowntest_closure_23_t x = (cstopdowntest_closure_23_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_23_t copy_cstopdowntest_closure_23(cstopdowntest_closure_23_t x){
        cstopdowntest_closure_23_t y = new_cstopdowntest_closure_23();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdown__lang_spec_htbl_t new_htbl = (cstopdown__lang_spec_htbl_t) safe_malloc(sizeof(struct cstopdown__lang_spec_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown__lang_spec_hashentry_t * new_data = (cstopdown__lang_spec_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown__lang_spec_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown__lang_spec_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_cstopdowntest_closure_24(struct cstopdowntest_closure_24_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_3_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_3(htbl, bvar, hash);
        cstopdowntest_funtype_3_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_24(bvar);};

return h_cstopdowntest_closure_24(bvar);}

uint8_t m_cstopdowntest_closure_24(struct cstopdowntest_closure_24_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_24(bvar);}

extern uint8_t h_cstopdowntest_closure_24(uint8_t ivar_41){
        uint8_t result;
        cstopdowntest_funtype_3_t tmp51089;
        tmp51089 = (cstopdowntest_funtype_3_t)cstopdowntest__st2();
        if (tmp51089 != NULL) tmp51089->count++;
        result = (uint8_t)tmp51089->ftbl->fptr(tmp51089, ivar_41);
        tmp51089->ftbl->rptr(tmp51089);

        return result;
}

cstopdowntest_closure_24_t new_cstopdowntest_closure_24(void){
        static struct cstopdowntest_funtype_3_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&f_cstopdowntest_closure_24, .mptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&m_cstopdowntest_closure_24, .rptr =  (void (*)(cstopdowntest_funtype_3_t))&release_cstopdowntest_closure_24, .cptr = (cstopdowntest_funtype_3_t (*)(cstopdowntest_funtype_3_t))&copy_cstopdowntest_closure_24};
        cstopdowntest_closure_24_t tmp = (cstopdowntest_closure_24_t) safe_malloc(sizeof(struct cstopdowntest_closure_24_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_24(cstopdowntest_funtype_3_t closure){
        cstopdowntest_closure_24_t x = (cstopdowntest_closure_24_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_24_t copy_cstopdowntest_closure_24(cstopdowntest_closure_24_t x){
        cstopdowntest_closure_24_t y = new_cstopdowntest_closure_24();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdowntest_funtype_3_htbl_t new_htbl = (cstopdowntest_funtype_3_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_3_hashentry_t * new_data = (cstopdowntest_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_cstopdowntest_funtype_25(cstopdowntest_funtype_25_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdowntest_funtype_25_t copy_cstopdowntest_funtype_25(cstopdowntest_funtype_25_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdowntest_funtype_25(cstopdowntest_funtype_25_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdowntest_funtype_25_hashentry_t data = htbl->data[hashindex];
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

cstopdowntest_funtype_25_t dupdate_cstopdowntest_funtype_25(cstopdowntest_funtype_25_t a, uint32_t i, uint8_t v){
        cstopdowntest_funtype_25_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdowntest_funtype_25_htbl_t)safe_malloc(sizeof(struct cstopdowntest_funtype_25_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdowntest_funtype_25_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdowntest_funtype_25_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdowntest_funtype_25_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdowntest_funtype_25_hashentry_t * new_data = (cstopdowntest_funtype_25_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdowntest_funtype_25_hashentry_s));
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
                                new_data[new_loc].value = (uint8_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_cstopdowntest_funtype_25(htbl, i, ihash);
        cstopdowntest_funtype_25_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint8_t)v; htbl->num_entries++;}
            else {uint8_t tempvalue;tempvalue = (uint8_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint8_t)v;};
        return a;

}

cstopdowntest_funtype_25_t update_cstopdowntest_funtype_25(cstopdowntest_funtype_25_t a, uint32_t i, uint8_t v){
        if (a->count == 1){
                return dupdate_cstopdowntest_funtype_25(a, i, v);
            } else {
                cstopdowntest_funtype_25_t x = copy_cstopdowntest_funtype_25(a);
                a->count--;
                return dupdate_cstopdowntest_funtype_25(x, i, v);
            }}

bool_t equal_cstopdowntest_funtype_25(cstopdowntest_funtype_25_t x, cstopdowntest_funtype_25_t y){
        return false;}

char* json_cstopdowntest_funtype_25(cstopdowntest_funtype_25_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"cstopdowntest_funtype_25\""); return result;}


uint8_t f_cstopdowntest_closure_26(struct cstopdowntest_closure_26_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_25_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_25(htbl, bvar, hash);
        cstopdowntest_funtype_25_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_26(bvar, closure->fvar_1);};

return h_cstopdowntest_closure_26(bvar, closure->fvar_1);}

uint8_t m_cstopdowntest_closure_26(struct cstopdowntest_closure_26_s * closure, uint32_t bvar){
        return h_cstopdowntest_closure_26(bvar, closure->fvar_1);}

extern uint8_t h_cstopdowntest_closure_26(uint32_t ivar_39, cstopdowntest_funtype_3_t ivar_36){
        uint8_t result;
        uint8_t ivar_38;
        //copying to uint8 from uint32;
        ivar_38 = (uint8_t)ivar_39;
        result = (uint8_t)ivar_36->ftbl->fptr(ivar_36, ivar_38);

        return result;
}

cstopdowntest_closure_26_t new_cstopdowntest_closure_26(void){
        static struct cstopdowntest_funtype_25_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdowntest_funtype_25_t, uint32_t))&f_cstopdowntest_closure_26, .mptr = (uint8_t (*)(cstopdowntest_funtype_25_t, uint32_t))&m_cstopdowntest_closure_26, .rptr =  (void (*)(cstopdowntest_funtype_25_t))&release_cstopdowntest_closure_26, .cptr = (cstopdowntest_funtype_25_t (*)(cstopdowntest_funtype_25_t))&copy_cstopdowntest_closure_26};
        cstopdowntest_closure_26_t tmp = (cstopdowntest_closure_26_t) safe_malloc(sizeof(struct cstopdowntest_closure_26_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_26(cstopdowntest_funtype_25_t closure){
        cstopdowntest_closure_26_t x = (cstopdowntest_closure_26_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdowntest_funtype_3(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_26_t copy_cstopdowntest_closure_26(cstopdowntest_closure_26_t x){
        cstopdowntest_closure_26_t y = new_cstopdowntest_closure_26();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdowntest_funtype_25_htbl_t new_htbl = (cstopdowntest_funtype_25_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_25_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_25_hashentry_t * new_data = (cstopdowntest_funtype_25_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_25_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_25_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown__peg_adt_t f_cstopdowntest_closure_27(struct cstopdowntest_closure_27_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdown__lang_spec_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown__lang_spec(htbl, bvar, hash);
        cstopdown__lang_spec_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown__peg_adt_t result;
            result = (cstopdown__peg_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdowntest_closure_27(bvar);};

return h_cstopdowntest_closure_27(bvar);}

cstopdown__peg_adt_t m_cstopdowntest_closure_27(struct cstopdowntest_closure_27_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_27(bvar);}

extern cstopdown__peg_adt_t h_cstopdowntest_closure_27(uint8_t ivar_18){
        cstopdown__peg_adt_t result;
        result = (cstopdown__peg_adt_t)cstopdowntest__pyaml((uint8_t)ivar_18);

        return result;
}

cstopdowntest_closure_27_t new_cstopdowntest_closure_27(void){
        static struct cstopdown__lang_spec_ftbl_s ftbl = {.fptr = (cstopdown__peg_adt_t (*)(cstopdown__lang_spec_t, uint8_t))&f_cstopdowntest_closure_27, .mptr = (cstopdown__peg_adt_t (*)(cstopdown__lang_spec_t, uint8_t))&m_cstopdowntest_closure_27, .rptr =  (void (*)(cstopdown__lang_spec_t))&release_cstopdowntest_closure_27, .cptr = (cstopdown__lang_spec_t (*)(cstopdown__lang_spec_t))&copy_cstopdowntest_closure_27};
        cstopdowntest_closure_27_t tmp = (cstopdowntest_closure_27_t) safe_malloc(sizeof(struct cstopdowntest_closure_27_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_27(cstopdown__lang_spec_t closure){
        cstopdowntest_closure_27_t x = (cstopdowntest_closure_27_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_27_t copy_cstopdowntest_closure_27(cstopdowntest_closure_27_t x){
        cstopdowntest_closure_27_t y = new_cstopdowntest_closure_27();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdown__lang_spec_htbl_t new_htbl = (cstopdown__lang_spec_htbl_t) safe_malloc(sizeof(struct cstopdown__lang_spec_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown__lang_spec_hashentry_t * new_data = (cstopdown__lang_spec_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown__lang_spec_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown__lang_spec_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_cstopdowntest_closure_28(struct cstopdowntest_closure_28_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_3_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_3(htbl, bvar, hash);
        cstopdowntest_funtype_3_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_28(bvar);};

return h_cstopdowntest_closure_28(bvar);}

uint8_t m_cstopdowntest_closure_28(struct cstopdowntest_closure_28_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_28(bvar);}

extern uint8_t h_cstopdowntest_closure_28(uint8_t ivar_20){
        uint8_t result;
        result = (uint8_t)cstopdowntest__tok0((uint8_t)ivar_20);

        return result;
}

cstopdowntest_closure_28_t new_cstopdowntest_closure_28(void){
        static struct cstopdowntest_funtype_3_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&f_cstopdowntest_closure_28, .mptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&m_cstopdowntest_closure_28, .rptr =  (void (*)(cstopdowntest_funtype_3_t))&release_cstopdowntest_closure_28, .cptr = (cstopdowntest_funtype_3_t (*)(cstopdowntest_funtype_3_t))&copy_cstopdowntest_closure_28};
        cstopdowntest_closure_28_t tmp = (cstopdowntest_closure_28_t) safe_malloc(sizeof(struct cstopdowntest_closure_28_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_28(cstopdowntest_funtype_3_t closure){
        cstopdowntest_closure_28_t x = (cstopdowntest_closure_28_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_28_t copy_cstopdowntest_closure_28(cstopdowntest_closure_28_t x){
        cstopdowntest_closure_28_t y = new_cstopdowntest_closure_28();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdowntest_funtype_3_htbl_t new_htbl = (cstopdowntest_funtype_3_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_3_hashentry_t * new_data = (cstopdowntest_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_cstopdowntest_closure_29(struct cstopdowntest_closure_29_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_25_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_25(htbl, bvar, hash);
        cstopdowntest_funtype_25_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_29(bvar, closure->fvar_1);};

return h_cstopdowntest_closure_29(bvar, closure->fvar_1);}

uint8_t m_cstopdowntest_closure_29(struct cstopdowntest_closure_29_s * closure, uint32_t bvar){
        return h_cstopdowntest_closure_29(bvar, closure->fvar_1);}

extern uint8_t h_cstopdowntest_closure_29(uint32_t ivar_39, cstopdowntest_funtype_3_t ivar_36){
        uint8_t result;
        uint8_t ivar_38;
        //copying to uint8 from uint32;
        ivar_38 = (uint8_t)ivar_39;
        result = (uint8_t)ivar_36->ftbl->fptr(ivar_36, ivar_38);

        return result;
}

cstopdowntest_closure_29_t new_cstopdowntest_closure_29(void){
        static struct cstopdowntest_funtype_25_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdowntest_funtype_25_t, uint32_t))&f_cstopdowntest_closure_29, .mptr = (uint8_t (*)(cstopdowntest_funtype_25_t, uint32_t))&m_cstopdowntest_closure_29, .rptr =  (void (*)(cstopdowntest_funtype_25_t))&release_cstopdowntest_closure_29, .cptr = (cstopdowntest_funtype_25_t (*)(cstopdowntest_funtype_25_t))&copy_cstopdowntest_closure_29};
        cstopdowntest_closure_29_t tmp = (cstopdowntest_closure_29_t) safe_malloc(sizeof(struct cstopdowntest_closure_29_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_29(cstopdowntest_funtype_25_t closure){
        cstopdowntest_closure_29_t x = (cstopdowntest_closure_29_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdowntest_funtype_3(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_29_t copy_cstopdowntest_closure_29(cstopdowntest_closure_29_t x){
        cstopdowntest_closure_29_t y = new_cstopdowntest_closure_29();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdowntest_funtype_25_htbl_t new_htbl = (cstopdowntest_funtype_25_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_25_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_25_hashentry_t * new_data = (cstopdowntest_funtype_25_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_25_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_25_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown__peg_adt_t f_cstopdowntest_closure_30(struct cstopdowntest_closure_30_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdown__lang_spec_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown__lang_spec(htbl, bvar, hash);
        cstopdown__lang_spec_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown__peg_adt_t result;
            result = (cstopdown__peg_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdowntest_closure_30(bvar);};

return h_cstopdowntest_closure_30(bvar);}

cstopdown__peg_adt_t m_cstopdowntest_closure_30(struct cstopdowntest_closure_30_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_30(bvar);}

extern cstopdown__peg_adt_t h_cstopdowntest_closure_30(uint8_t ivar_18){
        cstopdown__peg_adt_t result;
        result = (cstopdown__peg_adt_t)cstopdowntest__pyaml((uint8_t)ivar_18);

        return result;
}

cstopdowntest_closure_30_t new_cstopdowntest_closure_30(void){
        static struct cstopdown__lang_spec_ftbl_s ftbl = {.fptr = (cstopdown__peg_adt_t (*)(cstopdown__lang_spec_t, uint8_t))&f_cstopdowntest_closure_30, .mptr = (cstopdown__peg_adt_t (*)(cstopdown__lang_spec_t, uint8_t))&m_cstopdowntest_closure_30, .rptr =  (void (*)(cstopdown__lang_spec_t))&release_cstopdowntest_closure_30, .cptr = (cstopdown__lang_spec_t (*)(cstopdown__lang_spec_t))&copy_cstopdowntest_closure_30};
        cstopdowntest_closure_30_t tmp = (cstopdowntest_closure_30_t) safe_malloc(sizeof(struct cstopdowntest_closure_30_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_30(cstopdown__lang_spec_t closure){
        cstopdowntest_closure_30_t x = (cstopdowntest_closure_30_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_30_t copy_cstopdowntest_closure_30(cstopdowntest_closure_30_t x){
        cstopdowntest_closure_30_t y = new_cstopdowntest_closure_30();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdown__lang_spec_htbl_t new_htbl = (cstopdown__lang_spec_htbl_t) safe_malloc(sizeof(struct cstopdown__lang_spec_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown__lang_spec_hashentry_t * new_data = (cstopdown__lang_spec_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown__lang_spec_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown__lang_spec_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_cstopdowntest_closure_31(struct cstopdowntest_closure_31_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_3_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_3(htbl, bvar, hash);
        cstopdowntest_funtype_3_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_31(bvar);};

return h_cstopdowntest_closure_31(bvar);}

uint8_t m_cstopdowntest_closure_31(struct cstopdowntest_closure_31_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_31(bvar);}

extern uint8_t h_cstopdowntest_closure_31(uint8_t ivar_20){
        uint8_t result;
        result = (uint8_t)cstopdowntest__tok1((uint8_t)ivar_20);

        return result;
}

cstopdowntest_closure_31_t new_cstopdowntest_closure_31(void){
        static struct cstopdowntest_funtype_3_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&f_cstopdowntest_closure_31, .mptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&m_cstopdowntest_closure_31, .rptr =  (void (*)(cstopdowntest_funtype_3_t))&release_cstopdowntest_closure_31, .cptr = (cstopdowntest_funtype_3_t (*)(cstopdowntest_funtype_3_t))&copy_cstopdowntest_closure_31};
        cstopdowntest_closure_31_t tmp = (cstopdowntest_closure_31_t) safe_malloc(sizeof(struct cstopdowntest_closure_31_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_31(cstopdowntest_funtype_3_t closure){
        cstopdowntest_closure_31_t x = (cstopdowntest_closure_31_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_31_t copy_cstopdowntest_closure_31(cstopdowntest_closure_31_t x){
        cstopdowntest_closure_31_t y = new_cstopdowntest_closure_31();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdowntest_funtype_3_htbl_t new_htbl = (cstopdowntest_funtype_3_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_3_hashentry_t * new_data = (cstopdowntest_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_cstopdowntest_closure_32(struct cstopdowntest_closure_32_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_25_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_25(htbl, bvar, hash);
        cstopdowntest_funtype_25_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_32(bvar, closure->fvar_1);};

return h_cstopdowntest_closure_32(bvar, closure->fvar_1);}

uint8_t m_cstopdowntest_closure_32(struct cstopdowntest_closure_32_s * closure, uint32_t bvar){
        return h_cstopdowntest_closure_32(bvar, closure->fvar_1);}

extern uint8_t h_cstopdowntest_closure_32(uint32_t ivar_39, cstopdowntest_funtype_3_t ivar_36){
        uint8_t result;
        uint8_t ivar_38;
        //copying to uint8 from uint32;
        ivar_38 = (uint8_t)ivar_39;
        result = (uint8_t)ivar_36->ftbl->fptr(ivar_36, ivar_38);

        return result;
}

cstopdowntest_closure_32_t new_cstopdowntest_closure_32(void){
        static struct cstopdowntest_funtype_25_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdowntest_funtype_25_t, uint32_t))&f_cstopdowntest_closure_32, .mptr = (uint8_t (*)(cstopdowntest_funtype_25_t, uint32_t))&m_cstopdowntest_closure_32, .rptr =  (void (*)(cstopdowntest_funtype_25_t))&release_cstopdowntest_closure_32, .cptr = (cstopdowntest_funtype_25_t (*)(cstopdowntest_funtype_25_t))&copy_cstopdowntest_closure_32};
        cstopdowntest_closure_32_t tmp = (cstopdowntest_closure_32_t) safe_malloc(sizeof(struct cstopdowntest_closure_32_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_32(cstopdowntest_funtype_25_t closure){
        cstopdowntest_closure_32_t x = (cstopdowntest_closure_32_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdowntest_funtype_3(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_32_t copy_cstopdowntest_closure_32(cstopdowntest_closure_32_t x){
        cstopdowntest_closure_32_t y = new_cstopdowntest_closure_32();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdowntest_funtype_25_htbl_t new_htbl = (cstopdowntest_funtype_25_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_25_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_25_hashentry_t * new_data = (cstopdowntest_funtype_25_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_25_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_25_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown__peg_adt_t f_cstopdowntest_closure_33(struct cstopdowntest_closure_33_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdown__lang_spec_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown__lang_spec(htbl, bvar, hash);
        cstopdown__lang_spec_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown__peg_adt_t result;
            result = (cstopdown__peg_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdowntest_closure_33(bvar);};

return h_cstopdowntest_closure_33(bvar);}

cstopdown__peg_adt_t m_cstopdowntest_closure_33(struct cstopdowntest_closure_33_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_33(bvar);}

extern cstopdown__peg_adt_t h_cstopdowntest_closure_33(uint8_t ivar_18){
        cstopdown__peg_adt_t result;
        result = (cstopdown__peg_adt_t)cstopdowntest__pyaml((uint8_t)ivar_18);

        return result;
}

cstopdowntest_closure_33_t new_cstopdowntest_closure_33(void){
        static struct cstopdown__lang_spec_ftbl_s ftbl = {.fptr = (cstopdown__peg_adt_t (*)(cstopdown__lang_spec_t, uint8_t))&f_cstopdowntest_closure_33, .mptr = (cstopdown__peg_adt_t (*)(cstopdown__lang_spec_t, uint8_t))&m_cstopdowntest_closure_33, .rptr =  (void (*)(cstopdown__lang_spec_t))&release_cstopdowntest_closure_33, .cptr = (cstopdown__lang_spec_t (*)(cstopdown__lang_spec_t))&copy_cstopdowntest_closure_33};
        cstopdowntest_closure_33_t tmp = (cstopdowntest_closure_33_t) safe_malloc(sizeof(struct cstopdowntest_closure_33_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_33(cstopdown__lang_spec_t closure){
        cstopdowntest_closure_33_t x = (cstopdowntest_closure_33_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_33_t copy_cstopdowntest_closure_33(cstopdowntest_closure_33_t x){
        cstopdowntest_closure_33_t y = new_cstopdowntest_closure_33();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdown__lang_spec_htbl_t new_htbl = (cstopdown__lang_spec_htbl_t) safe_malloc(sizeof(struct cstopdown__lang_spec_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown__lang_spec_hashentry_t * new_data = (cstopdown__lang_spec_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown__lang_spec_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown__lang_spec_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_cstopdowntest_closure_34(struct cstopdowntest_closure_34_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_3_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_3(htbl, bvar, hash);
        cstopdowntest_funtype_3_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_34(bvar);};

return h_cstopdowntest_closure_34(bvar);}

uint8_t m_cstopdowntest_closure_34(struct cstopdowntest_closure_34_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_34(bvar);}

extern uint8_t h_cstopdowntest_closure_34(uint8_t ivar_41){
        uint8_t result;
        cstopdowntest_funtype_3_t tmp51099;
        tmp51099 = (cstopdowntest_funtype_3_t)cstopdowntest__dict1();
        if (tmp51099 != NULL) tmp51099->count++;
        result = (uint8_t)tmp51099->ftbl->fptr(tmp51099, ivar_41);
        tmp51099->ftbl->rptr(tmp51099);

        return result;
}

cstopdowntest_closure_34_t new_cstopdowntest_closure_34(void){
        static struct cstopdowntest_funtype_3_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&f_cstopdowntest_closure_34, .mptr = (uint8_t (*)(cstopdowntest_funtype_3_t, uint8_t))&m_cstopdowntest_closure_34, .rptr =  (void (*)(cstopdowntest_funtype_3_t))&release_cstopdowntest_closure_34, .cptr = (cstopdowntest_funtype_3_t (*)(cstopdowntest_funtype_3_t))&copy_cstopdowntest_closure_34};
        cstopdowntest_closure_34_t tmp = (cstopdowntest_closure_34_t) safe_malloc(sizeof(struct cstopdowntest_closure_34_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_34(cstopdowntest_funtype_3_t closure){
        cstopdowntest_closure_34_t x = (cstopdowntest_closure_34_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_34_t copy_cstopdowntest_closure_34(cstopdowntest_closure_34_t x){
        cstopdowntest_closure_34_t y = new_cstopdowntest_closure_34();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdowntest_funtype_3_htbl_t new_htbl = (cstopdowntest_funtype_3_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_3_hashentry_t * new_data = (cstopdowntest_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_cstopdowntest_closure_35(struct cstopdowntest_closure_35_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_25_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_25(htbl, bvar, hash);
        cstopdowntest_funtype_25_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdowntest_closure_35(bvar, closure->fvar_1);};

return h_cstopdowntest_closure_35(bvar, closure->fvar_1);}

uint8_t m_cstopdowntest_closure_35(struct cstopdowntest_closure_35_s * closure, uint32_t bvar){
        return h_cstopdowntest_closure_35(bvar, closure->fvar_1);}

extern uint8_t h_cstopdowntest_closure_35(uint32_t ivar_39, cstopdowntest_funtype_3_t ivar_36){
        uint8_t result;
        uint8_t ivar_38;
        //copying to uint8 from uint32;
        ivar_38 = (uint8_t)ivar_39;
        result = (uint8_t)ivar_36->ftbl->fptr(ivar_36, ivar_38);

        return result;
}

cstopdowntest_closure_35_t new_cstopdowntest_closure_35(void){
        static struct cstopdowntest_funtype_25_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdowntest_funtype_25_t, uint32_t))&f_cstopdowntest_closure_35, .mptr = (uint8_t (*)(cstopdowntest_funtype_25_t, uint32_t))&m_cstopdowntest_closure_35, .rptr =  (void (*)(cstopdowntest_funtype_25_t))&release_cstopdowntest_closure_35, .cptr = (cstopdowntest_funtype_25_t (*)(cstopdowntest_funtype_25_t))&copy_cstopdowntest_closure_35};
        cstopdowntest_closure_35_t tmp = (cstopdowntest_closure_35_t) safe_malloc(sizeof(struct cstopdowntest_closure_35_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_35(cstopdowntest_funtype_25_t closure){
        cstopdowntest_closure_35_t x = (cstopdowntest_closure_35_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdowntest_funtype_3(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_35_t copy_cstopdowntest_closure_35(cstopdowntest_closure_35_t x){
        cstopdowntest_closure_35_t y = new_cstopdowntest_closure_35();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdowntest_funtype_25_htbl_t new_htbl = (cstopdowntest_funtype_25_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_25_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_25_hashentry_t * new_data = (cstopdowntest_funtype_25_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_25_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_25_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown__ent_adt_t f_cstopdowntest_closure_36(struct cstopdowntest_closure_36_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_20_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_20(htbl, bvar, hash);
        cstopdowntest_funtype_20_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown__ent_adt_t result;
            result = (cstopdown__ent_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdowntest_closure_36(bvar);};

return h_cstopdowntest_closure_36(bvar);}

cstopdown__ent_adt_t m_cstopdowntest_closure_36(struct cstopdowntest_closure_36_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_36(bvar);}

extern cstopdown__ent_adt_t h_cstopdowntest_closure_36(uint8_t ivar_7){
        cstopdown__ent_adt_t result;
        result = (cstopdown__ent_adt_t)cstopdown__pending();
        if (result != NULL) result->count++;

        return result;
}

cstopdowntest_closure_36_t new_cstopdowntest_closure_36(void){
        static struct cstopdowntest_funtype_20_ftbl_s ftbl = {.fptr = (cstopdown__ent_adt_t (*)(cstopdowntest_funtype_20_t, uint8_t))&f_cstopdowntest_closure_36, .mptr = (cstopdown__ent_adt_t (*)(cstopdowntest_funtype_20_t, uint8_t))&m_cstopdowntest_closure_36, .rptr =  (void (*)(cstopdowntest_funtype_20_t))&release_cstopdowntest_closure_36, .cptr = (cstopdowntest_funtype_20_t (*)(cstopdowntest_funtype_20_t))&copy_cstopdowntest_closure_36};
        cstopdowntest_closure_36_t tmp = (cstopdowntest_closure_36_t) safe_malloc(sizeof(struct cstopdowntest_closure_36_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_36(cstopdowntest_funtype_20_t closure){
        cstopdowntest_closure_36_t x = (cstopdowntest_closure_36_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_36_t copy_cstopdowntest_closure_36(cstopdowntest_closure_36_t x){
        cstopdowntest_closure_36_t y = new_cstopdowntest_closure_36();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdowntest_funtype_20_htbl_t new_htbl = (cstopdowntest_funtype_20_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_20_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_20_hashentry_t * new_data = (cstopdowntest_funtype_20_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_20_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_20_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_cstopdowntest_funtype_37(cstopdowntest_funtype_37_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdowntest_funtype_37_t copy_cstopdowntest_funtype_37(cstopdowntest_funtype_37_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdowntest_funtype_37(cstopdowntest_funtype_37_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdowntest_funtype_37_hashentry_t data = htbl->data[hashindex];
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

cstopdowntest_funtype_37_t dupdate_cstopdowntest_funtype_37(cstopdowntest_funtype_37_t a, uint32_t i, cstopdowntest_funtype_20_t v){
        cstopdowntest_funtype_37_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdowntest_funtype_37_htbl_t)safe_malloc(sizeof(struct cstopdowntest_funtype_37_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdowntest_funtype_37_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdowntest_funtype_37_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdowntest_funtype_37_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdowntest_funtype_37_hashentry_t * new_data = (cstopdowntest_funtype_37_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdowntest_funtype_37_hashentry_s));
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
                                new_data[new_loc].value = (cstopdowntest_funtype_20_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_cstopdowntest_funtype_37(htbl, i, ihash);
        cstopdowntest_funtype_37_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (cstopdowntest_funtype_20_t)v; htbl->num_entries++;}
            else {cstopdowntest_funtype_20_t tempvalue;tempvalue = (cstopdowntest_funtype_20_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (cstopdowntest_funtype_20_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_cstopdowntest_funtype_20(tempvalue);};
        return a;

}

cstopdowntest_funtype_37_t update_cstopdowntest_funtype_37(cstopdowntest_funtype_37_t a, uint32_t i, cstopdowntest_funtype_20_t v){
        if (a->count == 1){
                return dupdate_cstopdowntest_funtype_37(a, i, v);
            } else {
                cstopdowntest_funtype_37_t x = copy_cstopdowntest_funtype_37(a);
                a->count--;
                return dupdate_cstopdowntest_funtype_37(x, i, v);
            }}

bool_t equal_cstopdowntest_funtype_37(cstopdowntest_funtype_37_t x, cstopdowntest_funtype_37_t y){
        return false;}

char* json_cstopdowntest_funtype_37(cstopdowntest_funtype_37_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"cstopdowntest_funtype_37\""); return result;}


cstopdowntest_record_38_t new_cstopdowntest_record_38(void){
        cstopdowntest_record_38_t tmp = (cstopdowntest_record_38_t) safe_malloc(sizeof(struct cstopdowntest_record_38_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdowntest_record_38(cstopdowntest_record_38_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdowntest_funtype_37(x->scaf);
         release_cstopdown__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdowntest_record_38_ptr(pointer_t x, type_actual_t T){
        release_cstopdowntest_record_38((cstopdowntest_record_38_t)x);
}

cstopdowntest_record_38_t copy_cstopdowntest_record_38(cstopdowntest_record_38_t x){
        cstopdowntest_record_38_t y = new_cstopdowntest_record_38();
        y->depth = (uint8_t)x->depth;
        y->lflag = (bool_t)x->lflag;
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->count = 1;
        return y;}

bool_t equal_cstopdowntest_record_38(cstopdowntest_record_38_t x, cstopdowntest_record_38_t y){
        bool_t tmp = true;
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && x->lflag == y->lflag;
        tmp = tmp && equal_cstopdowntest_funtype_37(x->scaf, y->scaf);
        tmp = tmp && equal_cstopdown__ent_adt(x->stack, y->stack);
        return tmp;}

char * json_cstopdowntest_record_38(cstopdowntest_record_38_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(17);
         sprintf(fld0, "\"depth\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->depth));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"lflag\" : ");
        tmp[1] = safe_strcat(fld1, json_bool(x->lflag));
        char * fld2 = safe_malloc(16);
         sprintf(fld2, "\"scaf\" : ");
        tmp[2] = safe_strcat(fld2, json_cstopdowntest_funtype_37(x->scaf));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"stack\" : ");
        tmp[3] = safe_strcat(fld3, json_cstopdown__ent_adt(x->stack));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdowntest_record_38_ptr(pointer_t x, pointer_t y, actual_cstopdowntest_record_38_t T){
        return equal_cstopdowntest_record_38((cstopdowntest_record_38_t)x, (cstopdowntest_record_38_t)y);
}

char * json_cstopdowntest_record_38_ptr(pointer_t x, actual_cstopdowntest_record_38_t T){
        return json_cstopdowntest_record_38((cstopdowntest_record_38_t)x);
}

cstopdowntest_record_38_t update_cstopdowntest_record_38_depth(cstopdowntest_record_38_t x, uint8_t v){
        cstopdowntest_record_38_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdowntest_record_38(x); x->count--;};
        y->depth = (uint8_t)v;
        return y;}

cstopdowntest_record_38_t update_cstopdowntest_record_38_lflag(cstopdowntest_record_38_t x, bool_t v){
        cstopdowntest_record_38_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdowntest_record_38(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}

cstopdowntest_record_38_t update_cstopdowntest_record_38_scaf(cstopdowntest_record_38_t x, cstopdowntest_funtype_37_t v){
        cstopdowntest_record_38_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_cstopdowntest_funtype_37(x->scaf);};}
        else {y = copy_cstopdowntest_record_38(x); x->count--; y->scaf->count--;};
        y->scaf = (cstopdowntest_funtype_37_t)v;
        return y;}

cstopdowntest_record_38_t update_cstopdowntest_record_38_stack(cstopdowntest_record_38_t x, cstopdown__ent_adt_t v){
        cstopdowntest_record_38_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_cstopdown__ent_adt(x->stack);};}
        else {y = copy_cstopdowntest_record_38(x); x->count--; y->stack->count--;};
        y->stack = (cstopdown__ent_adt_t)v;
        return y;}




cstopdowntest_funtype_20_t f_cstopdowntest_closure_39(struct cstopdowntest_closure_39_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdowntest_funtype_37_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdowntest_funtype_37(htbl, bvar, hash);
        cstopdowntest_funtype_37_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdowntest_funtype_20_t result;
            result = (cstopdowntest_funtype_20_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdowntest_closure_39(bvar, closure->fvar_1);};

return h_cstopdowntest_closure_39(bvar, closure->fvar_1);}

cstopdowntest_funtype_20_t m_cstopdowntest_closure_39(struct cstopdowntest_closure_39_s * closure, uint32_t bvar){
        return h_cstopdowntest_closure_39(bvar, closure->fvar_1);}

extern cstopdowntest_funtype_20_t h_cstopdowntest_closure_39(uint32_t ivar_26, cstopdowntest_funtype_20_t ivar_4){
        cstopdowntest_funtype_20_t result;
        //copying to cstopdowntest_funtype_20 from cstopdowntest_funtype_20;
        result = (cstopdowntest_funtype_20_t)ivar_4;
        if (result != NULL) result->count++;

        return result;
}

cstopdowntest_closure_39_t new_cstopdowntest_closure_39(void){
        static struct cstopdowntest_funtype_37_ftbl_s ftbl = {.fptr = (cstopdowntest_funtype_20_t (*)(cstopdowntest_funtype_37_t, uint32_t))&f_cstopdowntest_closure_39, .mptr = (cstopdowntest_funtype_20_t (*)(cstopdowntest_funtype_37_t, uint32_t))&m_cstopdowntest_closure_39, .rptr =  (void (*)(cstopdowntest_funtype_37_t))&release_cstopdowntest_closure_39, .cptr = (cstopdowntest_funtype_37_t (*)(cstopdowntest_funtype_37_t))&copy_cstopdowntest_closure_39};
        cstopdowntest_closure_39_t tmp = (cstopdowntest_closure_39_t) safe_malloc(sizeof(struct cstopdowntest_closure_39_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_39(cstopdowntest_funtype_37_t closure){
        cstopdowntest_closure_39_t x = (cstopdowntest_closure_39_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdowntest_funtype_20(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_39_t copy_cstopdowntest_closure_39(cstopdowntest_closure_39_t x){
        cstopdowntest_closure_39_t y = new_cstopdowntest_closure_39();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdowntest_funtype_37_htbl_t new_htbl = (cstopdowntest_funtype_37_htbl_t) safe_malloc(sizeof(struct cstopdowntest_funtype_37_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdowntest_funtype_37_hashentry_t * new_data = (cstopdowntest_funtype_37_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdowntest_funtype_37_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdowntest_funtype_37_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdowntest_record_40_t new_cstopdowntest_record_40(void){
        cstopdowntest_record_40_t tmp = (cstopdowntest_record_40_t) safe_malloc(sizeof(struct cstopdowntest_record_40_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdowntest_record_40(cstopdowntest_record_40_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdowntest_funtype_37(x->scaf);
         release_cstopdown__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdowntest_record_40_ptr(pointer_t x, type_actual_t T){
        release_cstopdowntest_record_40((cstopdowntest_record_40_t)x);
}

cstopdowntest_record_40_t copy_cstopdowntest_record_40(cstopdowntest_record_40_t x){
        cstopdowntest_record_40_t y = new_cstopdowntest_record_40();
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->depth = (uint64_t)x->depth;
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->lflag = (bool_t)x->lflag;
        y->count = 1;
        return y;}

bool_t equal_cstopdowntest_record_40(cstopdowntest_record_40_t x, cstopdowntest_record_40_t y){
        bool_t tmp = true;
        tmp = tmp && equal_cstopdowntest_funtype_37(x->scaf, y->scaf);
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && equal_cstopdown__ent_adt(x->stack, y->stack);
        tmp = tmp && x->lflag == y->lflag;
        return tmp;}

char * json_cstopdowntest_record_40(cstopdowntest_record_40_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(16);
         sprintf(fld0, "\"scaf\" : ");
        tmp[0] = safe_strcat(fld0, json_cstopdowntest_funtype_37(x->scaf));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"depth\" : ");
        tmp[1] = safe_strcat(fld1, json_uint64(x->depth));
        char * fld2 = safe_malloc(17);
         sprintf(fld2, "\"stack\" : ");
        tmp[2] = safe_strcat(fld2, json_cstopdown__ent_adt(x->stack));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"lflag\" : ");
        tmp[3] = safe_strcat(fld3, json_bool(x->lflag));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdowntest_record_40_ptr(pointer_t x, pointer_t y, actual_cstopdowntest_record_40_t T){
        return equal_cstopdowntest_record_40((cstopdowntest_record_40_t)x, (cstopdowntest_record_40_t)y);
}

char * json_cstopdowntest_record_40_ptr(pointer_t x, actual_cstopdowntest_record_40_t T){
        return json_cstopdowntest_record_40((cstopdowntest_record_40_t)x);
}

cstopdowntest_record_40_t update_cstopdowntest_record_40_scaf(cstopdowntest_record_40_t x, cstopdowntest_funtype_37_t v){
        cstopdowntest_record_40_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_cstopdowntest_funtype_37(x->scaf);};}
        else {y = copy_cstopdowntest_record_40(x); x->count--; y->scaf->count--;};
        y->scaf = (cstopdowntest_funtype_37_t)v;
        return y;}

cstopdowntest_record_40_t update_cstopdowntest_record_40_depth(cstopdowntest_record_40_t x, uint64_t v){
        cstopdowntest_record_40_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdowntest_record_40(x); x->count--;};
        y->depth = (uint64_t)v;
        return y;}

cstopdowntest_record_40_t update_cstopdowntest_record_40_stack(cstopdowntest_record_40_t x, cstopdown__ent_adt_t v){
        cstopdowntest_record_40_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_cstopdown__ent_adt(x->stack);};}
        else {y = copy_cstopdowntest_record_40(x); x->count--; y->stack->count--;};
        y->stack = (cstopdown__ent_adt_t)v;
        return y;}

cstopdowntest_record_40_t update_cstopdowntest_record_40_lflag(cstopdowntest_record_40_t x, bool_t v){
        cstopdowntest_record_40_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdowntest_record_40(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}



void release_cstopdowntest_funtype_41(cstopdowntest_funtype_41_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdowntest_funtype_41_t copy_cstopdowntest_funtype_41(cstopdowntest_funtype_41_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdowntest_funtype_41(cstopdowntest_funtype_41_t x, cstopdowntest_funtype_41_t y){
        return false;}

char* json_cstopdowntest_funtype_41(cstopdowntest_funtype_41_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"cstopdowntest_funtype_41\""); return result;}


cstopdown__peg_adt_t f_cstopdowntest_closure_42(struct cstopdowntest_closure_42_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdown__lang_spec_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown__lang_spec(htbl, bvar, hash);
        cstopdown__lang_spec_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown__peg_adt_t result;
            result = (cstopdown__peg_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdowntest_closure_42(bvar);};

return h_cstopdowntest_closure_42(bvar);}

cstopdown__peg_adt_t m_cstopdowntest_closure_42(struct cstopdowntest_closure_42_s * closure, uint8_t bvar){
        return h_cstopdowntest_closure_42(bvar);}

extern cstopdown__peg_adt_t h_cstopdowntest_closure_42(uint8_t ivar_5){
        cstopdown__peg_adt_t result;
        result = (cstopdown__peg_adt_t)cstopdowntest__pyaml((uint8_t)ivar_5);

        return result;
}

cstopdowntest_closure_42_t new_cstopdowntest_closure_42(void){
        static struct cstopdown__lang_spec_ftbl_s ftbl = {.fptr = (cstopdown__peg_adt_t (*)(cstopdown__lang_spec_t, uint8_t))&f_cstopdowntest_closure_42, .mptr = (cstopdown__peg_adt_t (*)(cstopdown__lang_spec_t, uint8_t))&m_cstopdowntest_closure_42, .rptr =  (void (*)(cstopdown__lang_spec_t))&release_cstopdowntest_closure_42, .cptr = (cstopdown__lang_spec_t (*)(cstopdown__lang_spec_t))&copy_cstopdowntest_closure_42};
        cstopdowntest_closure_42_t tmp = (cstopdowntest_closure_42_t) safe_malloc(sizeof(struct cstopdowntest_closure_42_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdowntest_closure_42(cstopdown__lang_spec_t closure){
        cstopdowntest_closure_42_t x = (cstopdowntest_closure_42_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdowntest_closure_42_t copy_cstopdowntest_closure_42(cstopdowntest_closure_42_t x){
        cstopdowntest_closure_42_t y = new_cstopdowntest_closure_42();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdown__lang_spec_htbl_t new_htbl = (cstopdown__lang_spec_htbl_t) safe_malloc(sizeof(struct cstopdown__lang_spec_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown__lang_spec_hashentry_t * new_data = (cstopdown__lang_spec_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown__lang_spec_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown__lang_spec_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern bool_t cstopdowntest__digit(uint8_t ivar_1){
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

extern bool_t cstopdowntest__any(uint8_t ivar_1){
        bool_t  result;
        result = (bool_t) true;

        
        return result;
}

extern cstopdown__peg_adt_t cstopdowntest__pyaml(uint8_t ivar_1){
        cstopdown__peg_adt_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             uint8_t ivar_9;
             ivar_9 = (uint8_t)1;
             uint8_t ivar_10;
             ivar_10 = (uint8_t)3;
             result = (cstopdown__peg_adt_t)cstopdown__choice((uint8_t)ivar_9, (uint8_t)ivar_10);
} else {
        
             bool_t ivar_11;
             uint8_t ivar_13;
             ivar_13 = (uint8_t)1;
             ivar_11 = (ivar_1 == ivar_13);
             if (ivar_11){  
           uint8_t ivar_18;
           ivar_18 = (uint8_t)2;
           uint8_t ivar_19;
           ivar_19 = (uint8_t)1;
           result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_18, (uint8_t)ivar_19);
} else {
             
           bool_t ivar_20;
           uint8_t ivar_22;
           ivar_22 = (uint8_t)2;
           ivar_20 = (ivar_1 == ivar_22);
           if (ivar_20){   
           cstopdowntest_funtype_0_t ivar_30;
           cstopdowntest_closure_1_t cl51047;
           cl51047 = new_cstopdowntest_closure_1();
           ivar_30 = (cstopdowntest_funtype_0_t)cl51047;
           result = (cstopdown__peg_adt_t)cstopdown__any((cstopdown_funtype_1_t)ivar_30);
} else {
           
           bool_t ivar_31;
           uint8_t ivar_33;
           ivar_33 = (uint8_t)3;
           ivar_31 = (ivar_1 == ivar_33);
           if (ivar_31){    
            uint8_t ivar_38;
            ivar_38 = (uint8_t)4;
            uint8_t ivar_39;
            ivar_39 = (uint8_t)35;
            result = (cstopdown__peg_adt_t)cstopdown__choice((uint8_t)ivar_38, (uint8_t)ivar_39);
} else {
           
            bool_t ivar_40;
            uint8_t ivar_42;
            ivar_42 = (uint8_t)4;
            ivar_40 = (ivar_1 == ivar_42);
            if (ivar_40){     
             uint8_t ivar_47;
             ivar_47 = (uint8_t)5;
             uint8_t ivar_48;
             ivar_48 = (uint8_t)11;
             result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_47, (uint8_t)ivar_48);
} else {
            
             bool_t ivar_49;
             uint8_t ivar_51;
             ivar_51 = (uint8_t)5;
             ivar_49 = (ivar_1 == ivar_51);
             if (ivar_49){      
              uint8_t ivar_56;
              ivar_56 = (uint8_t)6;
              uint8_t ivar_57;
              ivar_57 = (uint8_t)7;
              result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_56, (uint8_t)ivar_57);
} else {
             
              bool_t ivar_58;
              uint8_t ivar_60;
              ivar_60 = (uint8_t)6;
              ivar_58 = (ivar_1 == ivar_60);
              if (ivar_58){       
               uint8_t ivar_64;
               ivar_64 = (uint8_t)123;
               result = (cstopdown__peg_adt_t)cstopdown__terminal((uint8_t)ivar_64);
} else {
              
               bool_t ivar_65;
               uint8_t ivar_67;
               ivar_67 = (uint8_t)7;
               ivar_65 = (ivar_1 == ivar_67);
               if (ivar_65){        
                uint8_t ivar_72;
                ivar_72 = (uint8_t)8;
                uint8_t ivar_73;
                ivar_73 = (uint8_t)10;
                result = (cstopdown__peg_adt_t)cstopdown__choice((uint8_t)ivar_72, (uint8_t)ivar_73);
} else {
               
                bool_t ivar_74;
                uint8_t ivar_76;
                ivar_76 = (uint8_t)8;
                ivar_74 = (ivar_1 == ivar_76);
                if (ivar_74){         
                 uint8_t ivar_81;
                 ivar_81 = (uint8_t)9;
                 uint8_t ivar_82;
                 ivar_82 = (uint8_t)7;
                 result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_81, (uint8_t)ivar_82);
} else {
                
                 bool_t ivar_83;
                 uint8_t ivar_85;
                 ivar_85 = (uint8_t)9;
                 ivar_83 = (ivar_1 == ivar_85);
                 if (ivar_83){          
                  uint8_t ivar_89;
                  ivar_89 = (uint8_t)32;
                  result = (cstopdown__peg_adt_t)cstopdown__terminal((uint8_t)ivar_89);
} else {
                 
                  bool_t ivar_90;
                  uint8_t ivar_92;
                  ivar_92 = (uint8_t)10;
                  ivar_90 = (ivar_1 == ivar_92);
                  if (ivar_90){           
                   result = (cstopdown__peg_adt_t)cstopdown__epsilon();
                   if (result != NULL) result->count++;
} else {
                  
                   bool_t ivar_94;
                   uint8_t ivar_96;
                   ivar_96 = (uint8_t)11;
                   ivar_94 = (ivar_1 == ivar_96);
                   if (ivar_94){            
                    uint8_t ivar_101;
                    ivar_101 = (uint8_t)12;
                    uint8_t ivar_102;
                    ivar_102 = (uint8_t)14;
                    result = (cstopdown__peg_adt_t)cstopdown__choice((uint8_t)ivar_101, (uint8_t)ivar_102);
} else {
                   
                    bool_t ivar_103;
                    uint8_t ivar_105;
                    ivar_105 = (uint8_t)12;
                    ivar_103 = (ivar_1 == ivar_105);
                    if (ivar_103){             
                     uint8_t ivar_110;
                     ivar_110 = (uint8_t)13;
                     uint8_t ivar_111;
                     ivar_111 = (uint8_t)7;
                     result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_110, (uint8_t)ivar_111);
} else {
                    
                     bool_t ivar_112;
                     uint8_t ivar_114;
                     ivar_114 = (uint8_t)13;
                     ivar_112 = (ivar_1 == ivar_114);
                     if (ivar_112){              
                      uint8_t ivar_118;
                      ivar_118 = (uint8_t)125;
                      result = (cstopdown__peg_adt_t)cstopdown__terminal((uint8_t)ivar_118);
} else {
                     
                      bool_t ivar_119;
                      uint8_t ivar_121;
                      ivar_121 = (uint8_t)14;
                      ivar_119 = (ivar_1 == ivar_121);
                      if (ivar_119){               
                       uint8_t ivar_126;
                       ivar_126 = (uint8_t)15;
                       uint8_t ivar_127;
                       ivar_127 = (uint8_t)31;
                       result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_126, (uint8_t)ivar_127);
} else {
                      
                       bool_t ivar_128;
                       uint8_t ivar_130;
                       ivar_130 = (uint8_t)15;
                       ivar_128 = (ivar_1 == ivar_130);
                       if (ivar_128){                
                        uint8_t ivar_135;
                        ivar_135 = (uint8_t)16;
                        uint8_t ivar_136;
                        ivar_136 = (uint8_t)28;
                        result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_135, (uint8_t)ivar_136);
} else {
                       
                        bool_t ivar_137;
                        uint8_t ivar_139;
                        ivar_139 = (uint8_t)16;
                        ivar_137 = (ivar_1 == ivar_139);
                        if (ivar_137){                 
                         uint8_t ivar_144;
                         ivar_144 = (uint8_t)1;
                         uint8_t ivar_145;
                         ivar_145 = (uint8_t)17;
                         result = (cstopdown__peg_adt_t)cstopdown__choice((uint8_t)ivar_144, (uint8_t)ivar_145);
} else {
                        
                         bool_t ivar_146;
                         uint8_t ivar_148;
                         ivar_148 = (uint8_t)17;
                         ivar_146 = (ivar_1 == ivar_148);
                         if (ivar_146){                  
                          uint8_t ivar_153;
                          ivar_153 = (uint8_t)18;
                          uint8_t ivar_154;
                          ivar_154 = (uint8_t)7;
                          result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_153, (uint8_t)ivar_154);
} else {
                         
                          bool_t ivar_155;
                          uint8_t ivar_157;
                          ivar_157 = (uint8_t)18;
                          ivar_155 = (ivar_1 == ivar_157);
                          if (ivar_155){                   
                           uint8_t ivar_162;
                           ivar_162 = (uint8_t)19;
                           uint8_t ivar_163;
                           ivar_163 = (uint8_t)25;
                           result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_162, (uint8_t)ivar_163);
} else {
                          
                           bool_t ivar_164;
                           uint8_t ivar_166;
                           ivar_166 = (uint8_t)19;
                           ivar_164 = (ivar_1 == ivar_166);
                           if (ivar_164){                    
                            uint8_t ivar_170;
                            ivar_170 = (uint8_t)39;
                            result = (cstopdown__peg_adt_t)cstopdown__terminal((uint8_t)ivar_170);
} else {
                           
                            bool_t ivar_171;
                            uint8_t ivar_173;
                            ivar_173 = (uint8_t)20;
                            ivar_171 = (ivar_1 == ivar_173);
                            if (ivar_171){                     
                             uint8_t ivar_178;
                             ivar_178 = (uint8_t)21;
                             uint8_t ivar_179;
                             ivar_179 = (uint8_t)25;
                             result = (cstopdown__peg_adt_t)cstopdown__choice((uint8_t)ivar_178, (uint8_t)ivar_179);
} else {
                            
                             bool_t ivar_180;
                             uint8_t ivar_182;
                             ivar_182 = (uint8_t)21;
                             ivar_180 = (ivar_1 == ivar_182);
                             if (ivar_180){                      
                              uint8_t ivar_187;
                              ivar_187 = (uint8_t)22;
                              uint8_t ivar_188;
                              ivar_188 = (uint8_t)20;
                              result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_187, (uint8_t)ivar_188);
} else {
                             
                              bool_t ivar_189;
                              uint8_t ivar_191;
                              ivar_191 = (uint8_t)22;
                              ivar_189 = (ivar_1 == ivar_191);
                              if (ivar_189){                       
                               uint8_t ivar_196;
                               ivar_196 = (uint8_t)23;
                               uint8_t ivar_197;
                               ivar_197 = (uint8_t)19;
                               result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_196, (uint8_t)ivar_197);
} else {
                              
                               bool_t ivar_198;
                               uint8_t ivar_200;
                               ivar_200 = (uint8_t)23;
                               ivar_198 = (ivar_1 == ivar_200);
                               if (ivar_198){                        
                                uint8_t ivar_204;
                                ivar_204 = (uint8_t)92;
                                result = (cstopdown__peg_adt_t)cstopdown__terminal((uint8_t)ivar_204);
} else {
                               
                                bool_t ivar_205;
                                uint8_t ivar_207;
                                ivar_207 = (uint8_t)24;
                                ivar_205 = (ivar_1 == ivar_207);
                                if (ivar_205){                         
                                 uint8_t ivar_212;
                                 ivar_212 = (uint8_t)19;
                                 uint8_t ivar_213;
                                 ivar_213 = (uint8_t)7;
                                 result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_212, (uint8_t)ivar_213);
} else {
                                
                                 bool_t ivar_214;
                                 uint8_t ivar_216;
                                 ivar_216 = (uint8_t)25;
                                 ivar_214 = (ivar_1 == ivar_216);
                                 if (ivar_214){                          
                                  uint8_t ivar_221;
                                  ivar_221 = (uint8_t)24;
                                  uint8_t ivar_222;
                                  ivar_222 = (uint8_t)26;
                                  result = (cstopdown__peg_adt_t)cstopdown__choice((uint8_t)ivar_221, (uint8_t)ivar_222);
} else {
                                 
                                  bool_t ivar_223;
                                  uint8_t ivar_225;
                                  ivar_225 = (uint8_t)26;
                                  ivar_223 = (ivar_1 == ivar_225);
                                  if (ivar_223){                           
                                   uint8_t ivar_230;
                                   ivar_230 = (uint8_t)27;
                                   uint8_t ivar_231;
                                   ivar_231 = (uint8_t)20;
                                   result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_230, (uint8_t)ivar_231);
} else {
                                  
                                   bool_t ivar_232;
                                   uint8_t ivar_234;
                                   ivar_234 = (uint8_t)27;
                                   ivar_232 = (ivar_1 == ivar_234);
                                   if (ivar_232){                            
                                    cstopdowntest_funtype_0_t ivar_242;
                                    cstopdowntest_closure_2_t cl51048;
                                    cl51048 = new_cstopdowntest_closure_2();
                                    ivar_242 = (cstopdowntest_funtype_0_t)cl51048;
                                    result = (cstopdown__peg_adt_t)cstopdown__any((cstopdown_funtype_1_t)ivar_242);
} else {
                                   
                                    bool_t ivar_243;
                                    uint8_t ivar_245;
                                    ivar_245 = (uint8_t)28;
                                    ivar_243 = (ivar_1 == ivar_245);
                                    if (ivar_243){                             
                                     uint8_t ivar_250;
                                     ivar_250 = (uint8_t)29;
                                     uint8_t ivar_251;
                                     ivar_251 = (uint8_t)0;
                                     result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_250, (uint8_t)ivar_251);
} else {
                                    
                                     bool_t ivar_252;
                                     uint8_t ivar_254;
                                     ivar_254 = (uint8_t)29;
                                     ivar_252 = (ivar_1 == ivar_254);
                                     if (ivar_252){                              
                                      uint8_t ivar_259;
                                      ivar_259 = (uint8_t)30;
                                      uint8_t ivar_260;
                                      ivar_260 = (uint8_t)7;
                                      result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_259, (uint8_t)ivar_260);
} else {
                                     
                                      bool_t ivar_261;
                                      uint8_t ivar_263;
                                      ivar_263 = (uint8_t)30;
                                      ivar_261 = (ivar_1 == ivar_263);
                                      if (ivar_261){                               
                                       uint8_t ivar_267;
                                       ivar_267 = (uint8_t)58;
                                       result = (cstopdown__peg_adt_t)cstopdown__terminal((uint8_t)ivar_267);
} else {
                                      
                                       bool_t ivar_268;
                                       uint8_t ivar_270;
                                       ivar_270 = (uint8_t)31;
                                       ivar_268 = (ivar_1 == ivar_270);
                                       if (ivar_268){                                
                                        uint8_t ivar_275;
                                        ivar_275 = (uint8_t)32;
                                        uint8_t ivar_276;
                                        ivar_276 = (uint8_t)12;
                                        result = (cstopdown__peg_adt_t)cstopdown__choice((uint8_t)ivar_275, (uint8_t)ivar_276);
} else {
                                       
                                        bool_t ivar_277;
                                        uint8_t ivar_279;
                                        ivar_279 = (uint8_t)32;
                                        ivar_277 = (ivar_1 == ivar_279);
                                        if (ivar_277){                                 
                                         uint8_t ivar_284;
                                         ivar_284 = (uint8_t)33;
                                         uint8_t ivar_285;
                                         ivar_285 = (uint8_t)14;
                                         result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_284, (uint8_t)ivar_285);
} else {
                                        
                                         bool_t ivar_286;
                                         uint8_t ivar_288;
                                         ivar_288 = (uint8_t)33;
                                         ivar_286 = (ivar_1 == ivar_288);
                                         if (ivar_286){                                  
                                          uint8_t ivar_293;
                                          ivar_293 = (uint8_t)34;
                                          uint8_t ivar_294;
                                          ivar_294 = (uint8_t)7;
                                          result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_293, (uint8_t)ivar_294);
} else {
                                         
                                          bool_t ivar_295;
                                          uint8_t ivar_297;
                                          ivar_297 = (uint8_t)34;
                                          ivar_295 = (ivar_1 == ivar_297);
                                          if (ivar_295){                                   
                                           uint8_t ivar_301;
                                           ivar_301 = (uint8_t)44;
                                           result = (cstopdown__peg_adt_t)cstopdown__terminal((uint8_t)ivar_301);
} else {
                                          
                                           bool_t ivar_302;
                                           uint8_t ivar_304;
                                           ivar_304 = (uint8_t)35;
                                           ivar_302 = (ivar_1 == ivar_304);
                                           if (ivar_302){                                    
                                            uint8_t ivar_309;
                                            ivar_309 = (uint8_t)36;
                                            uint8_t ivar_310;
                                            ivar_310 = (uint8_t)38;
                                            result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_309, (uint8_t)ivar_310);
} else {
                                           
                                            bool_t ivar_311;
                                            uint8_t ivar_313;
                                            ivar_313 = (uint8_t)36;
                                            ivar_311 = (ivar_1 == ivar_313);
                                            if (ivar_311){                                     
                                             uint8_t ivar_318;
                                             ivar_318 = (uint8_t)37;
                                             uint8_t ivar_319;
                                             ivar_319 = (uint8_t)7;
                                             result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_318, (uint8_t)ivar_319);
} else {
                                            
                                             bool_t ivar_320;
                                             uint8_t ivar_322;
                                             ivar_322 = (uint8_t)37;
                                             ivar_320 = (ivar_1 == ivar_322);
                                             if (ivar_320){                                      
                                              uint8_t ivar_326;
                                              ivar_326 = (uint8_t)91;
                                              result = (cstopdown__peg_adt_t)cstopdown__terminal((uint8_t)ivar_326);
} else {
                                             
                                              bool_t ivar_327;
                                              uint8_t ivar_329;
                                              ivar_329 = (uint8_t)38;
                                              ivar_327 = (ivar_1 == ivar_329);
                                              if (ivar_327){                                       
                                               uint8_t ivar_334;
                                               ivar_334 = (uint8_t)39;
                                               uint8_t ivar_335;
                                               ivar_335 = (uint8_t)43;
                                               result = (cstopdown__peg_adt_t)cstopdown__choice((uint8_t)ivar_334, (uint8_t)ivar_335);
} else {
                                              
                                               bool_t ivar_336;
                                               uint8_t ivar_338;
                                               ivar_338 = (uint8_t)39;
                                               ivar_336 = (ivar_1 == ivar_338);
                                               if (ivar_336){                                        
                                                uint8_t ivar_343;
                                                ivar_343 = (uint8_t)40;
                                                uint8_t ivar_344;
                                                ivar_344 = (uint8_t)10;
                                                result = (cstopdown__peg_adt_t)cstopdown__choice((uint8_t)ivar_343, (uint8_t)ivar_344);
} else {
                                               
                                                bool_t ivar_345;
                                                uint8_t ivar_347;
                                                ivar_347 = (uint8_t)40;
                                                ivar_345 = (ivar_1 == ivar_347);
                                                if (ivar_345){                                         
                                                 uint8_t ivar_352;
                                                 ivar_352 = (uint8_t)0;
                                                 uint8_t ivar_353;
                                                 ivar_353 = (uint8_t)41;
                                                 result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_352, (uint8_t)ivar_353);
} else {
                                                
                                                 bool_t ivar_354;
                                                 uint8_t ivar_356;
                                                 ivar_356 = (uint8_t)41;
                                                 ivar_354 = (ivar_1 == ivar_356);
                                                 if (ivar_354){                                          
                                                  uint8_t ivar_361;
                                                  ivar_361 = (uint8_t)42;
                                                  uint8_t ivar_362;
                                                  ivar_362 = (uint8_t)10;
                                                  result = (cstopdown__peg_adt_t)cstopdown__choice((uint8_t)ivar_361, (uint8_t)ivar_362);
} else {
                                                 
                                                  bool_t ivar_363;
                                                  uint8_t ivar_365;
                                                  ivar_365 = (uint8_t)42;
                                                  ivar_363 = (ivar_1 == ivar_365);
                                                  if (ivar_363){                                           
                                                   uint8_t ivar_370;
                                                   ivar_370 = (uint8_t)33;
                                                   uint8_t ivar_371;
                                                   ivar_371 = (uint8_t)40;
                                                   result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_370, (uint8_t)ivar_371);
} else {
                                                  
                                                   bool_t ivar_372;
                                                   uint8_t ivar_374;
                                                   ivar_374 = (uint8_t)43;
                                                   ivar_372 = (ivar_1 == ivar_374);
                                                   if (ivar_372){                                            
                                                    uint8_t ivar_379;
                                                    ivar_379 = (uint8_t)44;
                                                    uint8_t ivar_380;
                                                    ivar_380 = (uint8_t)7;
                                                    result = (cstopdown__peg_adt_t)cstopdown__concat((uint8_t)ivar_379, (uint8_t)ivar_380);
} else {
                                                   
                                                    bool_t ivar_381;
                                                    uint8_t ivar_383;
                                                    ivar_383 = (uint8_t)44;
                                                    ivar_381 = (ivar_1 == ivar_383);
                                                    if (ivar_381){                                             
                                                     uint8_t ivar_387;
                                                     ivar_387 = (uint8_t)93;
                                                     result = (cstopdown__peg_adt_t)cstopdown__terminal((uint8_t)ivar_387);
} else {
                                                    
                                                     result = (cstopdown__peg_adt_t)cstopdown__epsilon();
                                                     if (result != NULL) result->count++;
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
};

        
        return result;
}

extern cstopdowntest_funtype_3_t cstopdowntest__empty(uint8_t ivar_1){
        cstopdowntest_funtype_3_t  result;
        cstopdowntest_closure_4_t cl51051;
        cl51051 = new_cstopdowntest_closure_4();
        result = (cstopdowntest_funtype_3_t)cl51051;

        
        return result;
}

extern cstopdowntest_funtype_7_t cstopdowntest__cat(uint8_t ivar_1, mpz_ptr_t ivar_2){
        cstopdowntest_funtype_7_t  result;
        cstopdowntest_closure_8_t cl51077;
        cl51077 = new_cstopdowntest_closure_8();
        cl51077->fvar_1 = (uint8_t)ivar_1;
        result = (cstopdowntest_funtype_7_t)cl51077;

        
        return result;
}

extern uint8_t cstopdowntest__tok0(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)39;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)116;
} else {
             
           bool_t ivar_10;
           uint8_t ivar_12;
           ivar_12 = (uint8_t)2;
           ivar_10 = (ivar_1 == ivar_12);
           if (ivar_10){   
           result = (uint8_t)111;
} else {
           
           bool_t ivar_14;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)3;
           ivar_14 = (ivar_1 == ivar_16);
           if (ivar_14){    
            result = (uint8_t)107;
} else {
           
            bool_t ivar_18;
            uint8_t ivar_20;
            ivar_20 = (uint8_t)4;
            ivar_18 = (ivar_1 == ivar_20);
            if (ivar_18){     
             result = (uint8_t)101;
} else {
            
             bool_t ivar_22;
             uint8_t ivar_24;
             ivar_24 = (uint8_t)5;
             ivar_22 = (ivar_1 == ivar_24);
             if (ivar_22){      
              result = (uint8_t)110;
} else {
             
              result = (uint8_t)39;
};
};
};
};
};
};

        
        return result;
}

extern uint8_t cstopdowntest__tok1(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)39;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)116;
} else {
             
           bool_t ivar_10;
           uint8_t ivar_12;
           ivar_12 = (uint8_t)2;
           ivar_10 = (ivar_1 == ivar_12);
           if (ivar_10){   
           result = (uint8_t)111;
} else {
           
           bool_t ivar_14;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)3;
           ivar_14 = (ivar_1 == ivar_16);
           if (ivar_14){    
            result = (uint8_t)107;
} else {
           
            bool_t ivar_18;
            uint8_t ivar_20;
            ivar_20 = (uint8_t)4;
            ivar_18 = (ivar_1 == ivar_20);
            if (ivar_18){     
             result = (uint8_t)101;
} else {
            
             bool_t ivar_22;
             uint8_t ivar_24;
             ivar_24 = (uint8_t)5;
             ivar_22 = (ivar_1 == ivar_24);
             if (ivar_22){      
              result = (uint8_t)110;
} else {
             
              bool_t ivar_26;
              uint8_t ivar_28;
              ivar_28 = (uint8_t)6;
              ivar_26 = (ivar_1 == ivar_28);
              if (ivar_26){       
               result = (uint8_t)92;
} else {
              
               bool_t ivar_30;
               uint8_t ivar_32;
               ivar_32 = (uint8_t)7;
               ivar_30 = (ivar_1 == ivar_32);
               if (ivar_30){        
                result = (uint8_t)39;
} else {
               
                result = (uint8_t)39;
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

extern uint8_t cstopdowntest__emptydict(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)123;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)32;
} else {
             
           bool_t ivar_10;
           uint8_t ivar_12;
           ivar_12 = (uint8_t)2;
           ivar_10 = (ivar_1 == ivar_12);
           if (ivar_10){   
           result = (uint8_t)32;
} else {
           
           bool_t ivar_14;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)3;
           ivar_14 = (ivar_1 == ivar_16);
           if (ivar_14){    
            result = (uint8_t)32;
} else {
           
            bool_t ivar_18;
            uint8_t ivar_20;
            ivar_20 = (uint8_t)4;
            ivar_18 = (ivar_1 == ivar_20);
            if (ivar_18){     
             result = (uint8_t)32;
} else {
            
             bool_t ivar_22;
             uint8_t ivar_24;
             ivar_24 = (uint8_t)5;
             ivar_22 = (ivar_1 == ivar_24);
             if (ivar_22){      
              result = (uint8_t)32;
} else {
             
              bool_t ivar_26;
              uint8_t ivar_28;
              ivar_28 = (uint8_t)6;
              ivar_26 = (ivar_1 == ivar_28);
              if (ivar_26){       
               result = (uint8_t)32;
} else {
              
               bool_t ivar_30;
               uint8_t ivar_32;
               ivar_32 = (uint8_t)7;
               ivar_30 = (ivar_1 == ivar_32);
               if (ivar_30){        
                result = (uint8_t)125;
} else {
               
                result = (uint8_t)32;
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

extern uint8_t cstopdowntest__obrace(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)123;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)32;
} else {
             
           result = (uint8_t)32;
};
};

        
        return result;
}

extern uint8_t cstopdowntest__cbrace(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)125;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)32;
} else {
             
           result = (uint8_t)32;
};
};

        
        return result;
}

extern uint8_t cstopdowntest__colon(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)58;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)32;
} else {
             
           result = (uint8_t)32;
};
};

        
        return result;
}

extern cstopdowntest_funtype_3_t cstopdowntest__emptydict2(void){
        cstopdowntest_funtype_3_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    cstopdowntest_funtype_11_t ivar_17;
        uint8_t ivar_25;
        ivar_25 = (uint8_t)3;
        uint8_t ivar_28;
        ivar_28 = (uint8_t)3;
        mpz_ptr_t ivar_26;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_26, ivar_28);
        ivar_17 = (cstopdowntest_funtype_11_t)cstopdowntest__cat((uint8_t)ivar_25, (mpz_ptr_t)ivar_26);
        cstopdowntest_funtype_3_t ivar_29;
        cstopdowntest_closure_12_t cl51078;
        cl51078 = new_cstopdowntest_closure_12();
        ivar_29 = (cstopdowntest_funtype_3_t)cl51078;
        cstopdowntest_funtype_3_t ivar_30;
        cstopdowntest_closure_13_t cl51079;
        cl51079 = new_cstopdowntest_closure_13();
        ivar_30 = (cstopdowntest_funtype_3_t)cl51079;
        result = (cstopdowntest_funtype_3_t)ivar_17->ftbl->mptr(ivar_17, ivar_29, ivar_30);
        ivar_17->ftbl->rptr(ivar_17);

        defined = true;};
        
        return result;
}

extern cstopdowntest_funtype_3_t cstopdowntest__dict1(void){
        cstopdowntest_funtype_3_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    cstopdowntest_funtype_11_t ivar_101;
        uint8_t ivar_109;
        ivar_109 = (uint8_t)3;
        uint8_t ivar_112;
        ivar_112 = (uint8_t)19;
        mpz_ptr_t ivar_110;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_110, ivar_112);
        ivar_101 = (cstopdowntest_funtype_11_t)cstopdowntest__cat((uint8_t)ivar_109, (mpz_ptr_t)ivar_110);
        cstopdowntest_funtype_3_t ivar_113;
        cstopdowntest_closure_14_t cl51080;
        cl51080 = new_cstopdowntest_closure_14();
        ivar_113 = (cstopdowntest_funtype_3_t)cl51080;
        cstopdowntest_funtype_3_t ivar_114;
        cstopdowntest_funtype_11_t ivar_78;
        uint8_t ivar_86;
        ivar_86 = (uint8_t)7;
        uint8_t ivar_89;
        ivar_89 = (uint8_t)12;
        mpz_ptr_t ivar_87;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_87, ivar_89);
        ivar_78 = (cstopdowntest_funtype_11_t)cstopdowntest__cat((uint8_t)ivar_86, (mpz_ptr_t)ivar_87);
        cstopdowntest_funtype_3_t ivar_90;
        cstopdowntest_closure_15_t cl51081;
        cl51081 = new_cstopdowntest_closure_15();
        ivar_90 = (cstopdowntest_funtype_3_t)cl51081;
        cstopdowntest_funtype_3_t ivar_91;
        cstopdowntest_funtype_11_t ivar_55;
        uint8_t ivar_63;
        ivar_63 = (uint8_t)3;
        uint8_t ivar_66;
        ivar_66 = (uint8_t)9;
        mpz_ptr_t ivar_64;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_64, ivar_66);
        ivar_55 = (cstopdowntest_funtype_11_t)cstopdowntest__cat((uint8_t)ivar_63, (mpz_ptr_t)ivar_64);
        cstopdowntest_funtype_3_t ivar_67;
        cstopdowntest_closure_16_t cl51082;
        cl51082 = new_cstopdowntest_closure_16();
        ivar_67 = (cstopdowntest_funtype_3_t)cl51082;
        cstopdowntest_funtype_3_t ivar_68;
        cstopdowntest_funtype_11_t ivar_31;
        uint8_t ivar_39;
        ivar_39 = (uint8_t)6;
        uint8_t ivar_42;
        ivar_42 = (uint8_t)3;
        mpz_ptr_t ivar_40;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_40, ivar_42);
        ivar_31 = (cstopdowntest_funtype_11_t)cstopdowntest__cat((uint8_t)ivar_39, (mpz_ptr_t)ivar_40);
        cstopdowntest_funtype_3_t ivar_43;
        cstopdowntest_closure_17_t cl51084;
        cl51084 = new_cstopdowntest_closure_17();
        ivar_43 = (cstopdowntest_funtype_3_t)cl51084;
        cstopdowntest_funtype_3_t ivar_44;
        cstopdowntest_closure_18_t cl51085;
        cl51085 = new_cstopdowntest_closure_18();
        ivar_44 = (cstopdowntest_funtype_3_t)cl51085;
        ivar_68 = (cstopdowntest_funtype_3_t)ivar_31->ftbl->mptr(ivar_31, ivar_43, ivar_44);
        ivar_31->ftbl->rptr(ivar_31);
        ivar_91 = (cstopdowntest_funtype_3_t)ivar_55->ftbl->mptr(ivar_55, ivar_67, ivar_68);
        ivar_55->ftbl->rptr(ivar_55);
        ivar_114 = (cstopdowntest_funtype_3_t)ivar_78->ftbl->mptr(ivar_78, ivar_90, ivar_91);
        ivar_78->ftbl->rptr(ivar_78);
        result = (cstopdowntest_funtype_3_t)ivar_101->ftbl->mptr(ivar_101, ivar_113, ivar_114);
        ivar_101->ftbl->rptr(ivar_101);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t cstopdowntest__bdict1(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_6;
        ivar_6 = (uint8_t)22;
        uint32_t ivar_1;
        //copying to uint32 from uint8;
        ivar_1 = (uint32_t)ivar_6;
        cstopdowntest_array_19_t ivar_5;
        ivar_5 = (cstopdowntest_array_19_t)cstopdowntest__dict1();
        if (ivar_5 != NULL) ivar_5->count++;
        bytestrings__bytestring_t tmp51087 = new_bytestrings__bytestring();;
        result = (bytestrings__bytestring_t)tmp51087;
        tmp51087->length = (uint32_t)ivar_1;
        tmp51087->seq = (cstopdowntest_array_19_t)ivar_5;

        defined = true;};
        
        return result;
}

extern cstopdowntest_funtype_3_t cstopdowntest__st2(void){
        cstopdowntest_funtype_3_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_4;
        ivar_4 = (uint8_t)2;
        result = (cstopdowntest_funtype_3_t)cstopdowntest__empty((uint8_t)ivar_4);

        defined = true;};
        
        return result;
}

extern cstopdown__ent_adt_t cstopdowntest__test0(void){
        cstopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    cstopdowntest_funtype_20_t ivar_4;
        cstopdowntest_funtype_21_t ivar_10;
        cstopdowntest_record_22_t ivar_43;
        uint8_t ivar_42;
        ivar_42 = (uint8_t)2;
        uint32_t ivar_25;
        //copying to uint32 from uint8;
        ivar_25 = (uint32_t)ivar_42;
        cstopdown__lang_spec_t ivar_26;
        cstopdowntest_closure_23_t cl51088;
        cl51088 = new_cstopdowntest_closure_23();
        ivar_26 = (cstopdown__lang_spec_t)cl51088;
        cstopdowntest_funtype_3_t ivar_36;
        cstopdowntest_closure_24_t cl51090;
        cl51090 = new_cstopdowntest_closure_24();
        ivar_36 = (cstopdowntest_funtype_3_t)cl51090;
        cstopdowntest_funtype_25_t ivar_27;
        cstopdowntest_closure_26_t cl51091;
        cl51091 = new_cstopdowntest_closure_26();
        cl51091->fvar_1 = (cstopdowntest_funtype_3_t)ivar_36;
        if (cl51091->fvar_1 != NULL) cl51091->fvar_1->count++;
        release_cstopdowntest_funtype_3(ivar_36);
        ivar_27 = (cstopdowntest_funtype_25_t)cl51091;
        uint8_t ivar_28;
        ivar_28 = (uint8_t)7;
        ivar_43 = (cstopdowntest_record_22_t)cstopdown__doparse((uint32_t)ivar_25, (cstopdown__lang_spec_t)ivar_26, (cstopdown_funtype_72_t)ivar_27, (uint8_t)ivar_28);
        ivar_10 = (cstopdowntest_funtype_21_t)ivar_43->scaf;
        ivar_10->count++;
        release_cstopdowntest_record_22(ivar_43);
        uint8_t ivar_47;
        ivar_47 = (uint8_t)0;
        uint8_t ivar_46;
        //copying to uint8 from uint8;
        ivar_46 = (uint8_t)ivar_47;
        ivar_4 = (cstopdowntest_funtype_20_t)ivar_10->ftbl->fptr(ivar_10, ivar_46);
        ivar_10->ftbl->rptr(ivar_10);
        uint8_t ivar_48;
        ivar_48 = (uint8_t)7;
        result = (cstopdown__ent_adt_t)ivar_4->ftbl->fptr(ivar_4, ivar_48);
        ivar_4->ftbl->rptr(ivar_4);

        defined = true;};
        
        return result;
}

extern cstopdown__ent_adt_t cstopdowntest__test1(void){
        cstopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    cstopdowntest_funtype_20_t ivar_4;
        cstopdowntest_funtype_21_t ivar_10;
        cstopdowntest_record_22_t ivar_42;
        uint8_t ivar_41;
        ivar_41 = (uint8_t)7;
        uint32_t ivar_26;
        //copying to uint32 from uint8;
        ivar_26 = (uint32_t)ivar_41;
        cstopdown__lang_spec_t ivar_27;
        cstopdowntest_closure_27_t cl51092;
        cl51092 = new_cstopdowntest_closure_27();
        ivar_27 = (cstopdown__lang_spec_t)cl51092;
        cstopdowntest_funtype_3_t ivar_36;
        cstopdowntest_closure_28_t cl51093;
        cl51093 = new_cstopdowntest_closure_28();
        ivar_36 = (cstopdowntest_funtype_3_t)cl51093;
        cstopdowntest_funtype_25_t ivar_28;
        cstopdowntest_closure_29_t cl51094;
        cl51094 = new_cstopdowntest_closure_29();
        cl51094->fvar_1 = (cstopdowntest_funtype_3_t)ivar_36;
        if (cl51094->fvar_1 != NULL) cl51094->fvar_1->count++;
        release_cstopdowntest_funtype_3(ivar_36);
        ivar_28 = (cstopdowntest_funtype_25_t)cl51094;
        uint8_t ivar_29;
        ivar_29 = (uint8_t)17;
        ivar_42 = (cstopdowntest_record_22_t)cstopdown__doparse((uint32_t)ivar_26, (cstopdown__lang_spec_t)ivar_27, (cstopdown_funtype_72_t)ivar_28, (uint8_t)ivar_29);
        ivar_10 = (cstopdowntest_funtype_21_t)ivar_42->scaf;
        ivar_10->count++;
        release_cstopdowntest_record_22(ivar_42);
        uint8_t ivar_46;
        ivar_46 = (uint8_t)0;
        uint8_t ivar_45;
        //copying to uint8 from uint8;
        ivar_45 = (uint8_t)ivar_46;
        ivar_4 = (cstopdowntest_funtype_20_t)ivar_10->ftbl->fptr(ivar_10, ivar_45);
        ivar_10->ftbl->rptr(ivar_10);
        uint8_t ivar_47;
        ivar_47 = (uint8_t)17;
        result = (cstopdown__ent_adt_t)ivar_4->ftbl->fptr(ivar_4, ivar_47);
        ivar_4->ftbl->rptr(ivar_4);

        defined = true;};
        
        return result;
}

extern cstopdown__ent_adt_t cstopdowntest__test11(void){
        cstopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    cstopdowntest_funtype_20_t ivar_4;
        cstopdowntest_funtype_21_t ivar_10;
        cstopdowntest_record_22_t ivar_42;
        uint8_t ivar_41;
        ivar_41 = (uint8_t)9;
        uint32_t ivar_26;
        //copying to uint32 from uint8;
        ivar_26 = (uint32_t)ivar_41;
        cstopdown__lang_spec_t ivar_27;
        cstopdowntest_closure_30_t cl51095;
        cl51095 = new_cstopdowntest_closure_30();
        ivar_27 = (cstopdown__lang_spec_t)cl51095;
        cstopdowntest_funtype_3_t ivar_36;
        cstopdowntest_closure_31_t cl51096;
        cl51096 = new_cstopdowntest_closure_31();
        ivar_36 = (cstopdowntest_funtype_3_t)cl51096;
        cstopdowntest_funtype_25_t ivar_28;
        cstopdowntest_closure_32_t cl51097;
        cl51097 = new_cstopdowntest_closure_32();
        cl51097->fvar_1 = (cstopdowntest_funtype_3_t)ivar_36;
        if (cl51097->fvar_1 != NULL) cl51097->fvar_1->count++;
        release_cstopdowntest_funtype_3(ivar_36);
        ivar_28 = (cstopdowntest_funtype_25_t)cl51097;
        uint8_t ivar_29;
        ivar_29 = (uint8_t)17;
        ivar_42 = (cstopdowntest_record_22_t)cstopdown__doparse((uint32_t)ivar_26, (cstopdown__lang_spec_t)ivar_27, (cstopdown_funtype_72_t)ivar_28, (uint8_t)ivar_29);
        ivar_10 = (cstopdowntest_funtype_21_t)ivar_42->scaf;
        ivar_10->count++;
        release_cstopdowntest_record_22(ivar_42);
        uint8_t ivar_46;
        ivar_46 = (uint8_t)0;
        uint8_t ivar_45;
        //copying to uint8 from uint8;
        ivar_45 = (uint8_t)ivar_46;
        ivar_4 = (cstopdowntest_funtype_20_t)ivar_10->ftbl->fptr(ivar_10, ivar_45);
        ivar_10->ftbl->rptr(ivar_10);
        uint8_t ivar_47;
        ivar_47 = (uint8_t)17;
        result = (cstopdown__ent_adt_t)ivar_4->ftbl->fptr(ivar_4, ivar_47);
        ivar_4->ftbl->rptr(ivar_4);

        defined = true;};
        
        return result;
}

extern cstopdown__ent_adt_t cstopdowntest__test2(void){
        cstopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    cstopdowntest_funtype_20_t ivar_4;
        cstopdowntest_funtype_21_t ivar_10;
        cstopdowntest_record_22_t ivar_43;
        uint8_t ivar_42;
        ivar_42 = (uint8_t)22;
        uint32_t ivar_25;
        //copying to uint32 from uint8;
        ivar_25 = (uint32_t)ivar_42;
        cstopdown__lang_spec_t ivar_26;
        cstopdowntest_closure_33_t cl51098;
        cl51098 = new_cstopdowntest_closure_33();
        ivar_26 = (cstopdown__lang_spec_t)cl51098;
        cstopdowntest_funtype_3_t ivar_36;
        cstopdowntest_closure_34_t cl51100;
        cl51100 = new_cstopdowntest_closure_34();
        ivar_36 = (cstopdowntest_funtype_3_t)cl51100;
        cstopdowntest_funtype_25_t ivar_27;
        cstopdowntest_closure_35_t cl51101;
        cl51101 = new_cstopdowntest_closure_35();
        cl51101->fvar_1 = (cstopdowntest_funtype_3_t)ivar_36;
        if (cl51101->fvar_1 != NULL) cl51101->fvar_1->count++;
        release_cstopdowntest_funtype_3(ivar_36);
        ivar_27 = (cstopdowntest_funtype_25_t)cl51101;
        uint8_t ivar_28;
        ivar_28 = (uint8_t)0;
        ivar_43 = (cstopdowntest_record_22_t)cstopdown__doparse((uint32_t)ivar_25, (cstopdown__lang_spec_t)ivar_26, (cstopdown_funtype_72_t)ivar_27, (uint8_t)ivar_28);
        ivar_10 = (cstopdowntest_funtype_21_t)ivar_43->scaf;
        ivar_10->count++;
        release_cstopdowntest_record_22(ivar_43);
        uint8_t ivar_47;
        ivar_47 = (uint8_t)0;
        uint8_t ivar_46;
        //copying to uint8 from uint8;
        ivar_46 = (uint8_t)ivar_47;
        ivar_4 = (cstopdowntest_funtype_20_t)ivar_10->ftbl->fptr(ivar_10, ivar_46);
        ivar_10->ftbl->rptr(ivar_10);
        uint8_t ivar_48;
        ivar_48 = (uint8_t)0;
        result = (cstopdown__ent_adt_t)ivar_4->ftbl->fptr(ivar_4, ivar_48);
        ivar_4->ftbl->rptr(ivar_4);

        defined = true;};
        
        return result;
}

extern cstopdown__ent_adt_t cstopdowntest__bparse(cstopdown__lang_spec_t ivar_1, bytestrings__bytestring_t ivar_2, uint8_t ivar_3){
        cstopdown__ent_adt_t  result;
        /* pend */ cstopdowntest_funtype_20_t ivar_4;
        cstopdowntest_closure_36_t cl51117;
        cl51117 = new_cstopdowntest_closure_36();
        ivar_4 = (cstopdowntest_funtype_20_t)cl51117;
        /* len */ uint32_t ivar_8;
        ivar_8 = (uint32_t)ivar_2->length;
        /* str */ cstopdowntest_array_19_t ivar_10;
        ivar_10 = (cstopdowntest_array_19_t)ivar_2->seq;
        ivar_10->count++;
        release_bytestrings__bytestring(ivar_2);
        /* start */ uint8_t ivar_14;
        ivar_14 = (uint8_t)0;
        cstopdowntest_record_38_t ivar_98;
        uint8_t ivar_20;
        ivar_20 = (uint8_t)1;
        bool_t ivar_21;
        ivar_21 = (bool_t) false;
        cstopdowntest_funtype_37_t ivar_49;
        cstopdown__ent_adt_t ivar_29;
        uint8_t ivar_36;
        ivar_36 = (uint8_t)0;
        uint32_t ivar_33;
        //copying to uint32 from uint8;
        ivar_33 = (uint32_t)ivar_36;
        uint8_t ivar_34;
        ivar_34 = (uint8_t)cstopdown__num_non_terminals();
        ivar_29 = (cstopdown__ent_adt_t)cstopdown__push((uint32_t)ivar_33, (uint8_t)ivar_34);
        cstopdowntest_funtype_37_t ivar_37;
        cstopdowntest_closure_39_t cl51118;
        cl51118 = new_cstopdowntest_closure_39();
        cl51118->fvar_1 = (cstopdowntest_funtype_20_t)ivar_4;
        if (cl51118->fvar_1 != NULL) cl51118->fvar_1->count++;
        release_cstopdowntest_funtype_20(ivar_4);
        ivar_37 = (cstopdowntest_funtype_37_t)cl51118;
        uint32_t ivar_44;
        //copying to uint32 from uint8;
        ivar_44 = (uint32_t)ivar_14;
        cstopdowntest_funtype_20_t ivar_38;
        ivar_38 = (cstopdowntest_funtype_20_t)ivar_37->ftbl->fptr(ivar_37, ivar_44);
        cstopdowntest_funtype_37_t ivar_45;
        cstopdowntest_funtype_20_t ivar_47;
        ivar_47 = NULL;
        ivar_45 = (cstopdowntest_funtype_37_t)update_cstopdowntest_funtype_37(ivar_37, ivar_44, ivar_47);
        if (ivar_47 != NULL) ivar_47->count--;
        cstopdowntest_funtype_20_t ivar_46;
        cstopdowntest_funtype_20_t ivar_41;
        cstopdown__ent_adt_t ivar_43;
        ivar_43 = NULL;
        ivar_41 = (cstopdowntest_funtype_20_t)update_cstopdowntest_funtype_20(ivar_38, ivar_3, ivar_43);
        if (ivar_43 != NULL) ivar_43->count--;
        ivar_46 = (cstopdowntest_funtype_20_t)update_cstopdowntest_funtype_20(ivar_41, ivar_3, ivar_29);
        if (ivar_29 != NULL) ivar_29->count--;
        ivar_49 = (cstopdowntest_funtype_37_t)update_cstopdowntest_funtype_37(ivar_45, ivar_44, ivar_46);
        if (ivar_46 != NULL) ivar_46->count--;
        cstopdown__ent_adt_t ivar_55;
        uint32_t ivar_53;
        //copying to uint32 from uint8;
        ivar_53 = (uint32_t)ivar_14;
        ivar_55 = (cstopdown__ent_adt_t)cstopdown__push((uint32_t)ivar_53, (uint8_t)ivar_3);
        cstopdowntest_record_38_t tmp51119 = new_cstopdowntest_record_38();;
        ivar_98 = (cstopdowntest_record_38_t)tmp51119;
        tmp51119->depth = (uint8_t)ivar_20;
        tmp51119->lflag = (bool_t)ivar_21;
        tmp51119->scaf = (cstopdowntest_funtype_37_t)ivar_49;
        tmp51119->stack = (cstopdown__ent_adt_t)ivar_55;
        /* St */ cstopdowntest_record_40_t ivar_15;
        //copying to cstopdowntest_record_40 from cstopdowntest_record_38;
        {
         ivar_15 = new_cstopdowntest_record_40();
         ivar_15->scaf = (cstopdowntest_funtype_37_t)ivar_98->scaf;
         if (ivar_15->scaf != NULL) ivar_15->scaf->count++;
         ivar_15->depth = (uint64_t)ivar_98->depth;
         ivar_15->stack = (cstopdown__ent_adt_t)ivar_98->stack;
         if (ivar_15->stack != NULL) ivar_15->stack->count++;
         ivar_15->lflag = (bool_t)ivar_98->lflag;
        };
        release_cstopdowntest_record_38(ivar_98);
        cstopdowntest_funtype_20_t ivar_59;
        cstopdowntest_funtype_37_t ivar_65;
        cstopdowntest_record_40_t ivar_93;
        cstopdowntest_funtype_41_t ivar_75;
        cstopdowntest_funtype_25_t ivar_89;
        //copying to cstopdowntest_funtype_25 from cstopdowntest_array_19;
        ivar_89 = (cstopdowntest_funtype_25_t)ivar_10;
        if (ivar_89 != NULL) ivar_89->count++;
        release_cstopdowntest_array_19(ivar_10);
        uint32_t ivar_90;
        //copying to uint32 from uint8;
        ivar_90 = (uint32_t)ivar_14;
        ivar_75 = (cstopdowntest_funtype_41_t)cstopdown__parse((uint32_t)ivar_8, (cstopdown__lang_spec_t)ivar_1, (cstopdown_funtype_72_t)ivar_89, (uint32_t)ivar_90, (uint8_t)ivar_3);
        cstopdowntest_record_40_t ivar_92;
        //copying to cstopdowntest_record_40 from cstopdowntest_record_40;
        ivar_92 = (cstopdowntest_record_40_t)ivar_15;
        if (ivar_92 != NULL) ivar_92->count++;
        release_cstopdowntest_record_40(ivar_15);
        ivar_93 = (cstopdowntest_record_40_t)ivar_75->ftbl->fptr(ivar_75, ivar_92);
        ivar_75->ftbl->rptr(ivar_75);
        ivar_65 = (cstopdowntest_funtype_37_t)ivar_93->scaf;
        ivar_65->count++;
        release_cstopdowntest_record_40(ivar_93);
        uint32_t ivar_96;
        //copying to uint32 from uint8;
        ivar_96 = (uint32_t)ivar_14;
        ivar_59 = (cstopdowntest_funtype_20_t)ivar_65->ftbl->fptr(ivar_65, ivar_96);
        ivar_65->ftbl->rptr(ivar_65);
        result = (cstopdown__ent_adt_t)ivar_59->ftbl->fptr(ivar_59, ivar_3);
        ivar_59->ftbl->rptr(ivar_59);

        
        return result;
}

extern cstopdown__ent_adt_t cstopdowntest__btest1(void){
        cstopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    cstopdown__lang_spec_t ivar_9;
        cstopdowntest_closure_42_t cl51120;
        cl51120 = new_cstopdowntest_closure_42();
        ivar_9 = (cstopdown__lang_spec_t)cl51120;
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)cstopdowntest__bdict1();
        if (ivar_10 != NULL) ivar_10->count++;
        uint8_t ivar_11;
        ivar_11 = (uint8_t)0;
        result = (cstopdown__ent_adt_t)cstopdowntest__bparse((cstopdown__lang_spec_t)ivar_9, (bytestrings__bytestring_t)ivar_10, (uint8_t)ivar_11);

        defined = true;};
        
        return result;
}