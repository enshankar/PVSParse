//Code generated using pvs2ir2c
#include "sigmatdtest_c.h"

void release_sigmatdtest_funtype_0(sigmatdtest_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdtest_funtype_0_t copy_sigmatdtest_funtype_0(sigmatdtest_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatdtest_funtype_0(sigmatdtest_funtype_0_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatdtest_funtype_0_hashentry_t data = htbl->data[hashindex];
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

sigmatdtest_funtype_0_t dupdate_sigmatdtest_funtype_0(sigmatdtest_funtype_0_t a, uint8_t i, bool_t v){
        sigmatdtest_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatdtest_funtype_0_htbl_t)safe_malloc(sizeof(struct sigmatdtest_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatdtest_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatdtest_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatdtest_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatdtest_funtype_0_hashentry_t * new_data = (sigmatdtest_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatdtest_funtype_0_hashentry_s));
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
        uint32_t hashindex = lookup_sigmatdtest_funtype_0(htbl, i, ihash);
        sigmatdtest_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

sigmatdtest_funtype_0_t update_sigmatdtest_funtype_0(sigmatdtest_funtype_0_t a, uint8_t i, bool_t v){
        if (a->count == 1){
                return dupdate_sigmatdtest_funtype_0(a, i, v);
            } else {
                sigmatdtest_funtype_0_t x = copy_sigmatdtest_funtype_0(a);
                a->count--;
                return dupdate_sigmatdtest_funtype_0(x, i, v);
            }}

bool_t equal_sigmatdtest_funtype_0(sigmatdtest_funtype_0_t x, sigmatdtest_funtype_0_t y){
        return false;}

char* json_sigmatdtest_funtype_0(sigmatdtest_funtype_0_t x){char * result = safe_malloc(31); sprintf(result, "%s", "\"sigmatdtest_funtype_0\""); return result;}


bool_t f_sigmatdtest_closure_1(struct sigmatdtest_closure_1_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        sigmatdtest_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatdtest_funtype_0(htbl, bvar, hash);
        sigmatdtest_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_sigmatdtest_closure_1(bvar);};

return h_sigmatdtest_closure_1(bvar);}

bool_t m_sigmatdtest_closure_1(struct sigmatdtest_closure_1_s * closure, uint8_t bvar){
        return h_sigmatdtest_closure_1(bvar);}

extern bool_t h_sigmatdtest_closure_1(uint8_t ivar_26){
        bool_t result;
        result = (bool_t)sigmatdtest__digit((uint8_t)ivar_26);

        return result;
}

sigmatdtest_closure_1_t new_sigmatdtest_closure_1(void){
        static struct sigmatdtest_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatdtest_funtype_0_t, uint8_t))&f_sigmatdtest_closure_1, .mptr = (bool_t (*)(sigmatdtest_funtype_0_t, uint8_t))&m_sigmatdtest_closure_1, .rptr =  (void (*)(sigmatdtest_funtype_0_t))&release_sigmatdtest_closure_1, .cptr = (sigmatdtest_funtype_0_t (*)(sigmatdtest_funtype_0_t))&copy_sigmatdtest_closure_1};
        sigmatdtest_closure_1_t tmp = (sigmatdtest_closure_1_t) safe_malloc(sizeof(struct sigmatdtest_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdtest_closure_1(sigmatdtest_funtype_0_t closure){
        sigmatdtest_closure_1_t x = (sigmatdtest_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdtest_closure_1_t copy_sigmatdtest_closure_1(sigmatdtest_closure_1_t x){
        sigmatdtest_closure_1_t y = new_sigmatdtest_closure_1();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatdtest_funtype_0_htbl_t new_htbl = (sigmatdtest_funtype_0_htbl_t) safe_malloc(sizeof(struct sigmatdtest_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdtest_funtype_0_hashentry_t * new_data = (sigmatdtest_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdtest_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdtest_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatdtest_closure_2(struct sigmatdtest_closure_2_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        sigmatdtest_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatdtest_funtype_0(htbl, bvar, hash);
        sigmatdtest_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_sigmatdtest_closure_2(bvar);};

return h_sigmatdtest_closure_2(bvar);}

bool_t m_sigmatdtest_closure_2(struct sigmatdtest_closure_2_s * closure, uint8_t bvar){
        return h_sigmatdtest_closure_2(bvar);}

extern bool_t h_sigmatdtest_closure_2(uint8_t ivar_90){
        bool_t result;
        result = (bool_t)sigmatdtest__whitespace((uint8_t)ivar_90);

        return result;
}

sigmatdtest_closure_2_t new_sigmatdtest_closure_2(void){
        static struct sigmatdtest_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatdtest_funtype_0_t, uint8_t))&f_sigmatdtest_closure_2, .mptr = (bool_t (*)(sigmatdtest_funtype_0_t, uint8_t))&m_sigmatdtest_closure_2, .rptr =  (void (*)(sigmatdtest_funtype_0_t))&release_sigmatdtest_closure_2, .cptr = (sigmatdtest_funtype_0_t (*)(sigmatdtest_funtype_0_t))&copy_sigmatdtest_closure_2};
        sigmatdtest_closure_2_t tmp = (sigmatdtest_closure_2_t) safe_malloc(sizeof(struct sigmatdtest_closure_2_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdtest_closure_2(sigmatdtest_funtype_0_t closure){
        sigmatdtest_closure_2_t x = (sigmatdtest_closure_2_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdtest_closure_2_t copy_sigmatdtest_closure_2(sigmatdtest_closure_2_t x){
        sigmatdtest_closure_2_t y = new_sigmatdtest_closure_2();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatdtest_funtype_0_htbl_t new_htbl = (sigmatdtest_funtype_0_htbl_t) safe_malloc(sizeof(struct sigmatdtest_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdtest_funtype_0_hashentry_t * new_data = (sigmatdtest_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdtest_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdtest_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatdtest_closure_3(struct sigmatdtest_closure_3_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        sigmatdtest_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatdtest_funtype_0(htbl, bvar, hash);
        sigmatdtest_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_sigmatdtest_closure_3(bvar);};

return h_sigmatdtest_closure_3(bvar);}

bool_t m_sigmatdtest_closure_3(struct sigmatdtest_closure_3_s * closure, uint8_t bvar){
        return h_sigmatdtest_closure_3(bvar);}

extern bool_t h_sigmatdtest_closure_3(uint8_t ivar_244){
        bool_t result;
        result = (bool_t)sigmatdtest__any((uint8_t)ivar_244);

        return result;
}

sigmatdtest_closure_3_t new_sigmatdtest_closure_3(void){
        static struct sigmatdtest_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatdtest_funtype_0_t, uint8_t))&f_sigmatdtest_closure_3, .mptr = (bool_t (*)(sigmatdtest_funtype_0_t, uint8_t))&m_sigmatdtest_closure_3, .rptr =  (void (*)(sigmatdtest_funtype_0_t))&release_sigmatdtest_closure_3, .cptr = (sigmatdtest_funtype_0_t (*)(sigmatdtest_funtype_0_t))&copy_sigmatdtest_closure_3};
        sigmatdtest_closure_3_t tmp = (sigmatdtest_closure_3_t) safe_malloc(sizeof(struct sigmatdtest_closure_3_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdtest_closure_3(sigmatdtest_funtype_0_t closure){
        sigmatdtest_closure_3_t x = (sigmatdtest_closure_3_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdtest_closure_3_t copy_sigmatdtest_closure_3(sigmatdtest_closure_3_t x){
        sigmatdtest_closure_3_t y = new_sigmatdtest_closure_3();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatdtest_funtype_0_htbl_t new_htbl = (sigmatdtest_funtype_0_htbl_t) safe_malloc(sizeof(struct sigmatdtest_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdtest_funtype_0_hashentry_t * new_data = (sigmatdtest_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdtest_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdtest_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatdtest_closure_4(struct sigmatdtest_closure_4_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        sigmatdtest_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatdtest_funtype_0(htbl, bvar, hash);
        sigmatdtest_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_sigmatdtest_closure_4(bvar);};

return h_sigmatdtest_closure_4(bvar);}

bool_t m_sigmatdtest_closure_4(struct sigmatdtest_closure_4_s * closure, uint8_t bvar){
        return h_sigmatdtest_closure_4(bvar);}

extern bool_t h_sigmatdtest_closure_4(uint8_t ivar_87){
        bool_t result;
        result = (bool_t)sigmatdtest__whitespace((uint8_t)ivar_87);

        return result;
}

sigmatdtest_closure_4_t new_sigmatdtest_closure_4(void){
        static struct sigmatdtest_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatdtest_funtype_0_t, uint8_t))&f_sigmatdtest_closure_4, .mptr = (bool_t (*)(sigmatdtest_funtype_0_t, uint8_t))&m_sigmatdtest_closure_4, .rptr =  (void (*)(sigmatdtest_funtype_0_t))&release_sigmatdtest_closure_4, .cptr = (sigmatdtest_funtype_0_t (*)(sigmatdtest_funtype_0_t))&copy_sigmatdtest_closure_4};
        sigmatdtest_closure_4_t tmp = (sigmatdtest_closure_4_t) safe_malloc(sizeof(struct sigmatdtest_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdtest_closure_4(sigmatdtest_funtype_0_t closure){
        sigmatdtest_closure_4_t x = (sigmatdtest_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdtest_closure_4_t copy_sigmatdtest_closure_4(sigmatdtest_closure_4_t x){
        sigmatdtest_closure_4_t y = new_sigmatdtest_closure_4();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatdtest_funtype_0_htbl_t new_htbl = (sigmatdtest_funtype_0_htbl_t) safe_malloc(sizeof(struct sigmatdtest_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdtest_funtype_0_hashentry_t * new_data = (sigmatdtest_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdtest_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdtest_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatdtest_closure_5(struct sigmatdtest_closure_5_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        sigmatdtest_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatdtest_funtype_0(htbl, bvar, hash);
        sigmatdtest_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_sigmatdtest_closure_5(bvar);};

return h_sigmatdtest_closure_5(bvar);}

bool_t m_sigmatdtest_closure_5(struct sigmatdtest_closure_5_s * closure, uint8_t bvar){
        return h_sigmatdtest_closure_5(bvar);}

extern bool_t h_sigmatdtest_closure_5(uint8_t ivar_241){
        bool_t result;
        result = (bool_t)sigmatdtest__any((uint8_t)ivar_241);

        return result;
}

sigmatdtest_closure_5_t new_sigmatdtest_closure_5(void){
        static struct sigmatdtest_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatdtest_funtype_0_t, uint8_t))&f_sigmatdtest_closure_5, .mptr = (bool_t (*)(sigmatdtest_funtype_0_t, uint8_t))&m_sigmatdtest_closure_5, .rptr =  (void (*)(sigmatdtest_funtype_0_t))&release_sigmatdtest_closure_5, .cptr = (sigmatdtest_funtype_0_t (*)(sigmatdtest_funtype_0_t))&copy_sigmatdtest_closure_5};
        sigmatdtest_closure_5_t tmp = (sigmatdtest_closure_5_t) safe_malloc(sizeof(struct sigmatdtest_closure_5_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdtest_closure_5(sigmatdtest_funtype_0_t closure){
        sigmatdtest_closure_5_t x = (sigmatdtest_closure_5_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdtest_closure_5_t copy_sigmatdtest_closure_5(sigmatdtest_closure_5_t x){
        sigmatdtest_closure_5_t y = new_sigmatdtest_closure_5();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatdtest_funtype_0_htbl_t new_htbl = (sigmatdtest_funtype_0_htbl_t) safe_malloc(sizeof(struct sigmatdtest_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdtest_funtype_0_hashentry_t * new_data = (sigmatdtest_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdtest_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdtest_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatdtest_closure_6(struct sigmatdtest_closure_6_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        sigmatdtest_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatdtest_funtype_0(htbl, bvar, hash);
        sigmatdtest_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_sigmatdtest_closure_6(bvar);};

return h_sigmatdtest_closure_6(bvar);}

bool_t m_sigmatdtest_closure_6(struct sigmatdtest_closure_6_s * closure, uint8_t bvar){
        return h_sigmatdtest_closure_6(bvar);}

extern bool_t h_sigmatdtest_closure_6(uint8_t ivar_407){
        bool_t result;
        result = (bool_t)sigmatdtest__digit((uint8_t)ivar_407);

        return result;
}

sigmatdtest_closure_6_t new_sigmatdtest_closure_6(void){
        static struct sigmatdtest_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatdtest_funtype_0_t, uint8_t))&f_sigmatdtest_closure_6, .mptr = (bool_t (*)(sigmatdtest_funtype_0_t, uint8_t))&m_sigmatdtest_closure_6, .rptr =  (void (*)(sigmatdtest_funtype_0_t))&release_sigmatdtest_closure_6, .cptr = (sigmatdtest_funtype_0_t (*)(sigmatdtest_funtype_0_t))&copy_sigmatdtest_closure_6};
        sigmatdtest_closure_6_t tmp = (sigmatdtest_closure_6_t) safe_malloc(sizeof(struct sigmatdtest_closure_6_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdtest_closure_6(sigmatdtest_funtype_0_t closure){
        sigmatdtest_closure_6_t x = (sigmatdtest_closure_6_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdtest_closure_6_t copy_sigmatdtest_closure_6(sigmatdtest_closure_6_t x){
        sigmatdtest_closure_6_t y = new_sigmatdtest_closure_6();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatdtest_funtype_0_htbl_t new_htbl = (sigmatdtest_funtype_0_htbl_t) safe_malloc(sizeof(struct sigmatdtest_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdtest_funtype_0_hashentry_t * new_data = (sigmatdtest_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdtest_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdtest_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatdtest_array_7_t new_sigmatdtest_array_7(uint32_t size){
        sigmatdtest_array_7_t tmp = (sigmatdtest_array_7_t) safe_malloc(sizeof(struct sigmatdtest_array_7_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_sigmatdtest_array_7(sigmatdtest_array_7_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_sigmatdtest_array_7_ptr(pointer_t x, type_actual_t T){
        release_sigmatdtest_array_7((sigmatdtest_array_7_t)x);
}

sigmatdtest_array_7_t copy_sigmatdtest_array_7(sigmatdtest_array_7_t x){
        sigmatdtest_array_7_t tmp = new_sigmatdtest_array_7(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_sigmatdtest_array_7(sigmatdtest_array_7_t x, sigmatdtest_array_7_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_sigmatdtest_array_7(sigmatdtest_array_7_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint8(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatdtest_array_7_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatdtest_array_7((sigmatdtest_array_7_t)x, (sigmatdtest_array_7_t)y);
}

char * json_sigmatdtest_array_7_ptr(pointer_t x, type_actual_t T){
        return json_sigmatdtest_array_7((sigmatdtest_array_7_t)x);
}

actual_sigmatdtest_array_7_t actual_sigmatdtest_array_7(){
        actual_sigmatdtest_array_7_t new = (actual_sigmatdtest_array_7_t)safe_malloc(sizeof(struct actual_sigmatdtest_array_7_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdtest_array_7_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdtest_array_7_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdtest_array_7_ptr);
 

 
        return new;
 };

sigmatdtest_array_7_t update_sigmatdtest_array_7(sigmatdtest_array_7_t x, uint32_t i, uint8_t v){
        sigmatdtest_array_7_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_sigmatdtest_array_7(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

sigmatdtest_array_7_t upgrade_sigmatdtest_array_7(sigmatdtest_array_7_t x, uint32_t i, uint8_t v){
        sigmatdtest_array_7_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatdtest_array_7_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatdtest_array_7(x);}
           else {y = copy_sigmatdtest_array_7(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




sigmatdtest_record_8_t new_sigmatdtest_record_8(void){
        sigmatdtest_record_8_t tmp = (sigmatdtest_record_8_t) safe_malloc(sizeof(struct sigmatdtest_record_8_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdtest_record_8(sigmatdtest_record_8_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatdtest_array_7(x->project_1);
         release_sigmatdtest_array_7(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdtest_record_8_ptr(pointer_t x, type_actual_t T){
        release_sigmatdtest_record_8((sigmatdtest_record_8_t)x);
}

sigmatdtest_record_8_t copy_sigmatdtest_record_8(sigmatdtest_record_8_t x){
        sigmatdtest_record_8_t y = new_sigmatdtest_record_8();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatdtest_record_8(sigmatdtest_record_8_t x, sigmatdtest_record_8_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatdtest_array_7(x->project_1, y->project_1);
        tmp = tmp && equal_sigmatdtest_array_7(x->project_2, y->project_2);
        return tmp;}

char * json_sigmatdtest_record_8(sigmatdtest_record_8_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatdtest_array_7(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_sigmatdtest_array_7(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdtest_record_8_ptr(pointer_t x, pointer_t y, actual_sigmatdtest_record_8_t T){
        return equal_sigmatdtest_record_8((sigmatdtest_record_8_t)x, (sigmatdtest_record_8_t)y);
}

char * json_sigmatdtest_record_8_ptr(pointer_t x, actual_sigmatdtest_record_8_t T){
        return json_sigmatdtest_record_8((sigmatdtest_record_8_t)x);
}

actual_sigmatdtest_record_8_t actual_sigmatdtest_record_8(){
        actual_sigmatdtest_record_8_t new = (actual_sigmatdtest_record_8_t)safe_malloc(sizeof(struct actual_sigmatdtest_record_8_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdtest_record_8_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdtest_record_8_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdtest_record_8_ptr);
 

 
        return new;
 };

sigmatdtest_record_8_t update_sigmatdtest_record_8_project_1(sigmatdtest_record_8_t x, sigmatdtest_array_7_t v){
        sigmatdtest_record_8_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatdtest_array_7(x->project_1);};}
        else {y = copy_sigmatdtest_record_8(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatdtest_array_7_t)v;
        return y;}

sigmatdtest_record_8_t update_sigmatdtest_record_8_project_2(sigmatdtest_record_8_t x, sigmatdtest_array_7_t v){
        sigmatdtest_record_8_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_sigmatdtest_array_7(x->project_2);};}
        else {y = copy_sigmatdtest_record_8(x); x->count--; y->project_2->count--;};
        y->project_2 = (sigmatdtest_array_7_t)v;
        return y;}



void release_sigmatdtest_funtype_9(sigmatdtest_funtype_9_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdtest_funtype_9_t copy_sigmatdtest_funtype_9(sigmatdtest_funtype_9_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdtest_funtype_9(sigmatdtest_funtype_9_t x, sigmatdtest_funtype_9_t y){
        return false;}

char* json_sigmatdtest_funtype_9(sigmatdtest_funtype_9_t x){char * result = safe_malloc(31); sprintf(result, "%s", "\"sigmatdtest_funtype_9\""); return result;}


sigmatdtest_array_7_t f_sigmatdtest_closure_10(struct sigmatdtest_closure_10_s * closure, sigmatdtest_record_8_t bvar){
        sigmatdtest_array_7_t bvar_1;
        bvar_1 = (sigmatdtest_array_7_t)bvar->project_1;
        bvar->project_1->count++;
        sigmatdtest_array_7_t bvar_2;
        bvar_2 = (sigmatdtest_array_7_t)bvar->project_2;
        bvar->project_2->count++;
        release_sigmatdtest_record_8(bvar);
        sigmatdtest_array_7_t result = h_sigmatdtest_closure_10(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2); 
        release_sigmatdtest_array_7(bvar_1);
        release_sigmatdtest_array_7(bvar_2);
        return result;}

sigmatdtest_array_7_t m_sigmatdtest_closure_10(struct sigmatdtest_closure_10_s * closure, sigmatdtest_array_7_t bvar_1, sigmatdtest_array_7_t bvar_2){
        return h_sigmatdtest_closure_10(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2);}

extern sigmatdtest_array_7_t h_sigmatdtest_closure_10(sigmatdtest_array_7_t ivar_26, sigmatdtest_array_7_t ivar_27, uint8_t ivar_1, uint8_t ivar_2){
        sigmatdtest_array_7_t result;
        mpz_t ivar_38;
        mpz_init(ivar_38);
        uint32_t size39003;
        uint16_t ivar_37;
        uint8_t ivar_32;
        //copying to uint8 from uint8;
        ivar_32 = (uint8_t)ivar_1;
        uint8_t ivar_33;
        //copying to uint8 from uint8;
        ivar_33 = (uint8_t)ivar_2;
        ivar_37 = (uint16_t)(ivar_32 + ivar_33);
        uint8_t ivar_36;
        //copying to uint8 from uint16;
        ivar_36 = (uint8_t)ivar_37;
        uint8_t ivar_35;
        ivar_35 = (uint8_t)identity_uint8__I((uint8_t)ivar_36);
        //copying to uint32 from uint8;
        size39003 = (uint32_t)ivar_35;
        size39003 += 0;
        result = new_sigmatdtest_array_7(size39003);
        for (uint32_t index39000 = 0; index39000 < size39003; index39000++){
             mpz_t ivar_38;
             mpz_init(ivar_38);
             mpz_set_ui(ivar_38, index39000);
             bool_t ivar_42;
             int64_t tmp39001 = mpz_cmp_ui(ivar_38, ivar_1);
             ivar_42 = (tmp39001 < 0);
             if (ivar_42){  
           uint8_t ivar_49;
           //copying to uint8 from mpz;
           ivar_49 = (uint8_t)mpz_get_ui(ivar_38);
           mpz_clear(ivar_38);
           result->elems[index39000] = (uint8_t)ivar_26->elems[ivar_49];
} else {
             
           uint8_t ivar_59;
           mpz_t tmp39002;
           mpz_init(tmp39002);
           mpz_sub_ui(tmp39002, ivar_38, ivar_1);
           ivar_59 = (uint8_t) mpz_get_ui(tmp39002);
           mpz_clear(tmp39002);
           result->elems[index39000] = (uint8_t)ivar_27->elems[ivar_59];
};
        };
        release_sigmatdtest_array_7(ivar_27);
        release_sigmatdtest_array_7(ivar_26);

        return result;
}

sigmatdtest_closure_10_t new_sigmatdtest_closure_10(void){
        static struct sigmatdtest_funtype_9_ftbl_s ftbl = {.fptr = (sigmatdtest_array_7_t (*)(sigmatdtest_funtype_9_t, sigmatdtest_record_8_t))&f_sigmatdtest_closure_10, .mptr = (sigmatdtest_array_7_t (*)(sigmatdtest_funtype_9_t, sigmatdtest_array_7_t, sigmatdtest_array_7_t))&m_sigmatdtest_closure_10, .rptr =  (void (*)(sigmatdtest_funtype_9_t))&release_sigmatdtest_closure_10, .cptr = (sigmatdtest_funtype_9_t (*)(sigmatdtest_funtype_9_t))&copy_sigmatdtest_closure_10};
        sigmatdtest_closure_10_t tmp = (sigmatdtest_closure_10_t) safe_malloc(sizeof(struct sigmatdtest_closure_10_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdtest_closure_10(sigmatdtest_funtype_9_t closure){
        sigmatdtest_closure_10_t x = (sigmatdtest_closure_10_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdtest_closure_10_t copy_sigmatdtest_closure_10(sigmatdtest_closure_10_t x){
        sigmatdtest_closure_10_t y = new_sigmatdtest_closure_10();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint8_t)x->fvar_1;
        y->fvar_2 = (uint8_t)x->fvar_2;
        if (x->htbl != NULL){
            sigmatdtest_funtype_9_htbl_t new_htbl = (sigmatdtest_funtype_9_htbl_t) safe_malloc(sizeof(struct sigmatdtest_funtype_9_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdtest_funtype_9_hashentry_t * new_data = (sigmatdtest_funtype_9_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdtest_funtype_9_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdtest_funtype_9_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatdtest_array_11_t new_sigmatdtest_array_11(uint32_t size){
        sigmatdtest_array_11_t tmp = (sigmatdtest_array_11_t) safe_malloc(sizeof(struct sigmatdtest_array_11_s) + (size * sizeof(sigmatopdown__peg_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_sigmatdtest_array_11(sigmatdtest_array_11_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_sigmatopdown__peg_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_sigmatdtest_array_11_ptr(pointer_t x, type_actual_t T){
        release_sigmatdtest_array_11((sigmatdtest_array_11_t)x);
}

sigmatdtest_array_11_t copy_sigmatdtest_array_11(sigmatdtest_array_11_t x){
        sigmatdtest_array_11_t tmp = new_sigmatdtest_array_11(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_sigmatdtest_array_11(sigmatdtest_array_11_t x, sigmatdtest_array_11_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_sigmatopdown__peg_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_sigmatdtest_array_11(sigmatdtest_array_11_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_sigmatopdown__peg_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatdtest_array_11_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatdtest_array_11((sigmatdtest_array_11_t)x, (sigmatdtest_array_11_t)y);
}

char * json_sigmatdtest_array_11_ptr(pointer_t x, type_actual_t T){
        return json_sigmatdtest_array_11((sigmatdtest_array_11_t)x);
}

actual_sigmatdtest_array_11_t actual_sigmatdtest_array_11(){
        actual_sigmatdtest_array_11_t new = (actual_sigmatdtest_array_11_t)safe_malloc(sizeof(struct actual_sigmatdtest_array_11_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdtest_array_11_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdtest_array_11_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdtest_array_11_ptr);
 

 
        return new;
 };

sigmatdtest_array_11_t update_sigmatdtest_array_11(sigmatdtest_array_11_t x, uint32_t i, sigmatopdown__peg_adt_t v){
         sigmatdtest_array_11_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_sigmatdtest_array_11(x);
                      x->count--;};
        sigmatopdown__peg_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__peg_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

sigmatdtest_array_11_t upgrade_sigmatdtest_array_11(sigmatdtest_array_11_t x, uint32_t i, sigmatopdown__peg_adt_t v){
         sigmatdtest_array_11_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatdtest_array_11_s) + (newmax * sizeof(sigmatopdown__peg_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatdtest_array_11(x);} else {y = copy_sigmatdtest_array_11(x);
                      x->count--;};
        sigmatopdown__peg_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__peg_adt(yelems[i]);};
         yelems[i] = v;
         return y;}



void release_sigmatdtest_funtype_12(sigmatdtest_funtype_12_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdtest_funtype_12_t copy_sigmatdtest_funtype_12(sigmatdtest_funtype_12_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatdtest_funtype_12(sigmatdtest_funtype_12_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatdtest_funtype_12_hashentry_t data = htbl->data[hashindex];
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

sigmatdtest_funtype_12_t dupdate_sigmatdtest_funtype_12(sigmatdtest_funtype_12_t a, uint8_t i, sigmatopdown__ent_adt_t v){
        sigmatdtest_funtype_12_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatdtest_funtype_12_htbl_t)safe_malloc(sizeof(struct sigmatdtest_funtype_12_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatdtest_funtype_12_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatdtest_funtype_12_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatdtest_funtype_12_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatdtest_funtype_12_hashentry_t * new_data = (sigmatdtest_funtype_12_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatdtest_funtype_12_hashentry_s));
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
        uint32_t hashindex = lookup_sigmatdtest_funtype_12(htbl, i, ihash);
        sigmatdtest_funtype_12_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (sigmatopdown__ent_adt_t)v; htbl->num_entries++;}
            else {sigmatopdown__ent_adt_t tempvalue;tempvalue = (sigmatopdown__ent_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (sigmatopdown__ent_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_sigmatopdown__ent_adt(tempvalue);};
        return a;

}

sigmatdtest_funtype_12_t update_sigmatdtest_funtype_12(sigmatdtest_funtype_12_t a, uint8_t i, sigmatopdown__ent_adt_t v){
        if (a->count == 1){
                return dupdate_sigmatdtest_funtype_12(a, i, v);
            } else {
                sigmatdtest_funtype_12_t x = copy_sigmatdtest_funtype_12(a);
                a->count--;
                return dupdate_sigmatdtest_funtype_12(x, i, v);
            }}

bool_t equal_sigmatdtest_funtype_12(sigmatdtest_funtype_12_t x, sigmatdtest_funtype_12_t y){
        return false;}

char* json_sigmatdtest_funtype_12(sigmatdtest_funtype_12_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"sigmatdtest_funtype_12\""); return result;}


sigmatopdown__ent_adt_t f_sigmatdtest_closure_13(struct sigmatdtest_closure_13_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        sigmatdtest_funtype_12_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatdtest_funtype_12(htbl, bvar, hash);
        sigmatdtest_funtype_12_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            sigmatopdown__ent_adt_t result;
            result = (sigmatopdown__ent_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_sigmatdtest_closure_13(bvar);};

return h_sigmatdtest_closure_13(bvar);}

sigmatopdown__ent_adt_t m_sigmatdtest_closure_13(struct sigmatdtest_closure_13_s * closure, uint8_t bvar){
        return h_sigmatdtest_closure_13(bvar);}

extern sigmatopdown__ent_adt_t h_sigmatdtest_closure_13(uint8_t ivar_10){
        sigmatopdown__ent_adt_t result;
        result = (sigmatopdown__ent_adt_t)sigmatopdown__pending();
        if (result != NULL) result->count++;

        return result;
}

sigmatdtest_closure_13_t new_sigmatdtest_closure_13(void){
        static struct sigmatdtest_funtype_12_ftbl_s ftbl = {.fptr = (sigmatopdown__ent_adt_t (*)(sigmatdtest_funtype_12_t, uint8_t))&f_sigmatdtest_closure_13, .mptr = (sigmatopdown__ent_adt_t (*)(sigmatdtest_funtype_12_t, uint8_t))&m_sigmatdtest_closure_13, .rptr =  (void (*)(sigmatdtest_funtype_12_t))&release_sigmatdtest_closure_13, .cptr = (sigmatdtest_funtype_12_t (*)(sigmatdtest_funtype_12_t))&copy_sigmatdtest_closure_13};
        sigmatdtest_closure_13_t tmp = (sigmatdtest_closure_13_t) safe_malloc(sizeof(struct sigmatdtest_closure_13_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdtest_closure_13(sigmatdtest_funtype_12_t closure){
        sigmatdtest_closure_13_t x = (sigmatdtest_closure_13_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdtest_closure_13_t copy_sigmatdtest_closure_13(sigmatdtest_closure_13_t x){
        sigmatdtest_closure_13_t y = new_sigmatdtest_closure_13();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatdtest_funtype_12_htbl_t new_htbl = (sigmatdtest_funtype_12_htbl_t) safe_malloc(sizeof(struct sigmatdtest_funtype_12_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdtest_funtype_12_hashentry_t * new_data = (sigmatdtest_funtype_12_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdtest_funtype_12_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdtest_funtype_12_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatdtest_funtype_14(sigmatdtest_funtype_14_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdtest_funtype_14_t copy_sigmatdtest_funtype_14(sigmatdtest_funtype_14_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatdtest_funtype_14(sigmatdtest_funtype_14_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatdtest_funtype_14_hashentry_t data = htbl->data[hashindex];
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

sigmatdtest_funtype_14_t dupdate_sigmatdtest_funtype_14(sigmatdtest_funtype_14_t a, uint8_t i, sigmatdtest_funtype_12_t v){
        sigmatdtest_funtype_14_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatdtest_funtype_14_htbl_t)safe_malloc(sizeof(struct sigmatdtest_funtype_14_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatdtest_funtype_14_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatdtest_funtype_14_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatdtest_funtype_14_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatdtest_funtype_14_hashentry_t * new_data = (sigmatdtest_funtype_14_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatdtest_funtype_14_hashentry_s));
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
                                new_data[new_loc].value = (sigmatdtest_funtype_12_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_sigmatdtest_funtype_14(htbl, i, ihash);
        sigmatdtest_funtype_14_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (sigmatdtest_funtype_12_t)v; htbl->num_entries++;}
            else {sigmatdtest_funtype_12_t tempvalue;tempvalue = (sigmatdtest_funtype_12_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (sigmatdtest_funtype_12_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_sigmatdtest_funtype_12(tempvalue);};
        return a;

}

sigmatdtest_funtype_14_t update_sigmatdtest_funtype_14(sigmatdtest_funtype_14_t a, uint8_t i, sigmatdtest_funtype_12_t v){
        if (a->count == 1){
                return dupdate_sigmatdtest_funtype_14(a, i, v);
            } else {
                sigmatdtest_funtype_14_t x = copy_sigmatdtest_funtype_14(a);
                a->count--;
                return dupdate_sigmatdtest_funtype_14(x, i, v);
            }}

bool_t equal_sigmatdtest_funtype_14(sigmatdtest_funtype_14_t x, sigmatdtest_funtype_14_t y){
        return false;}

char* json_sigmatdtest_funtype_14(sigmatdtest_funtype_14_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"sigmatdtest_funtype_14\""); return result;}


sigmatdtest_record_15_t new_sigmatdtest_record_15(void){
        sigmatdtest_record_15_t tmp = (sigmatdtest_record_15_t) safe_malloc(sizeof(struct sigmatdtest_record_15_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdtest_record_15(sigmatdtest_record_15_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatdtest_funtype_14(x->scaf);
         release_sigmatopdown__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdtest_record_15_ptr(pointer_t x, type_actual_t T){
        release_sigmatdtest_record_15((sigmatdtest_record_15_t)x);
}

sigmatdtest_record_15_t copy_sigmatdtest_record_15(sigmatdtest_record_15_t x){
        sigmatdtest_record_15_t y = new_sigmatdtest_record_15();
        y->depth = (uint8_t)x->depth;
        y->lflag = (bool_t)x->lflag;
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatdtest_record_15(sigmatdtest_record_15_t x, sigmatdtest_record_15_t y){
        bool_t tmp = true;
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && x->lflag == y->lflag;
        tmp = tmp && equal_sigmatdtest_funtype_14(x->scaf, y->scaf);
        tmp = tmp && equal_sigmatopdown__ent_adt(x->stack, y->stack);
        return tmp;}

char * json_sigmatdtest_record_15(sigmatdtest_record_15_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(17);
         sprintf(fld0, "\"depth\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->depth));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"lflag\" : ");
        tmp[1] = safe_strcat(fld1, json_bool(x->lflag));
        char * fld2 = safe_malloc(16);
         sprintf(fld2, "\"scaf\" : ");
        tmp[2] = safe_strcat(fld2, json_sigmatdtest_funtype_14(x->scaf));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"stack\" : ");
        tmp[3] = safe_strcat(fld3, json_sigmatopdown__ent_adt(x->stack));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdtest_record_15_ptr(pointer_t x, pointer_t y, actual_sigmatdtest_record_15_t T){
        return equal_sigmatdtest_record_15((sigmatdtest_record_15_t)x, (sigmatdtest_record_15_t)y);
}

char * json_sigmatdtest_record_15_ptr(pointer_t x, actual_sigmatdtest_record_15_t T){
        return json_sigmatdtest_record_15((sigmatdtest_record_15_t)x);
}

actual_sigmatdtest_record_15_t actual_sigmatdtest_record_15(){
        actual_sigmatdtest_record_15_t new = (actual_sigmatdtest_record_15_t)safe_malloc(sizeof(struct actual_sigmatdtest_record_15_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdtest_record_15_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdtest_record_15_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdtest_record_15_ptr);
 

 
        return new;
 };

sigmatdtest_record_15_t update_sigmatdtest_record_15_depth(sigmatdtest_record_15_t x, uint8_t v){
        sigmatdtest_record_15_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdtest_record_15(x); x->count--;};
        y->depth = (uint8_t)v;
        return y;}

sigmatdtest_record_15_t update_sigmatdtest_record_15_lflag(sigmatdtest_record_15_t x, bool_t v){
        sigmatdtest_record_15_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdtest_record_15(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}

sigmatdtest_record_15_t update_sigmatdtest_record_15_scaf(sigmatdtest_record_15_t x, sigmatdtest_funtype_14_t v){
        sigmatdtest_record_15_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_sigmatdtest_funtype_14(x->scaf);};}
        else {y = copy_sigmatdtest_record_15(x); x->count--; y->scaf->count--;};
        y->scaf = (sigmatdtest_funtype_14_t)v;
        return y;}

sigmatdtest_record_15_t update_sigmatdtest_record_15_stack(sigmatdtest_record_15_t x, sigmatopdown__ent_adt_t v){
        sigmatdtest_record_15_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_sigmatopdown__ent_adt(x->stack);};}
        else {y = copy_sigmatdtest_record_15(x); x->count--; y->stack->count--;};
        y->stack = (sigmatopdown__ent_adt_t)v;
        return y;}




sigmatdtest_funtype_12_t f_sigmatdtest_closure_16(struct sigmatdtest_closure_16_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        sigmatdtest_funtype_14_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatdtest_funtype_14(htbl, bvar, hash);
        sigmatdtest_funtype_14_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            sigmatdtest_funtype_12_t result;
            result = (sigmatdtest_funtype_12_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_sigmatdtest_closure_16(bvar, closure->fvar_1, closure->fvar_2);};

return h_sigmatdtest_closure_16(bvar, closure->fvar_1, closure->fvar_2);}

sigmatdtest_funtype_12_t m_sigmatdtest_closure_16(struct sigmatdtest_closure_16_s * closure, uint8_t bvar){
        return h_sigmatdtest_closure_16(bvar, closure->fvar_1, closure->fvar_2);}

extern sigmatdtest_funtype_12_t h_sigmatdtest_closure_16(uint8_t ivar_23, uint8_t ivar_1, sigmatdtest_funtype_12_t ivar_6){
        sigmatdtest_funtype_12_t result;
        //copying to sigmatdtest_funtype_12 from sigmatdtest_funtype_12;
        result = (sigmatdtest_funtype_12_t)ivar_6;
        if (result != NULL) result->count++;

        return result;
}

sigmatdtest_closure_16_t new_sigmatdtest_closure_16(void){
        static struct sigmatdtest_funtype_14_ftbl_s ftbl = {.fptr = (sigmatdtest_funtype_12_t (*)(sigmatdtest_funtype_14_t, uint8_t))&f_sigmatdtest_closure_16, .mptr = (sigmatdtest_funtype_12_t (*)(sigmatdtest_funtype_14_t, uint8_t))&m_sigmatdtest_closure_16, .rptr =  (void (*)(sigmatdtest_funtype_14_t))&release_sigmatdtest_closure_16, .cptr = (sigmatdtest_funtype_14_t (*)(sigmatdtest_funtype_14_t))&copy_sigmatdtest_closure_16};
        sigmatdtest_closure_16_t tmp = (sigmatdtest_closure_16_t) safe_malloc(sizeof(struct sigmatdtest_closure_16_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdtest_closure_16(sigmatdtest_funtype_14_t closure){
        sigmatdtest_closure_16_t x = (sigmatdtest_closure_16_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatdtest_funtype_12(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdtest_closure_16_t copy_sigmatdtest_closure_16(sigmatdtest_closure_16_t x){
        sigmatdtest_closure_16_t y = new_sigmatdtest_closure_16();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint8_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            sigmatdtest_funtype_14_htbl_t new_htbl = (sigmatdtest_funtype_14_htbl_t) safe_malloc(sizeof(struct sigmatdtest_funtype_14_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdtest_funtype_14_hashentry_t * new_data = (sigmatdtest_funtype_14_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdtest_funtype_14_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdtest_funtype_14_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatdtest_array_17_t new_sigmatdtest_array_17(uint32_t size){
        sigmatdtest_array_17_t tmp = (sigmatdtest_array_17_t) safe_malloc(sizeof(struct sigmatdtest_array_17_s) + (size * sizeof(sigmatopdown__ent_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_sigmatdtest_array_17(sigmatdtest_array_17_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_sigmatopdown__ent_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_sigmatdtest_array_17_ptr(pointer_t x, type_actual_t T){
        release_sigmatdtest_array_17((sigmatdtest_array_17_t)x);
}

sigmatdtest_array_17_t copy_sigmatdtest_array_17(sigmatdtest_array_17_t x){
        sigmatdtest_array_17_t tmp = new_sigmatdtest_array_17(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_sigmatdtest_array_17(sigmatdtest_array_17_t x, sigmatdtest_array_17_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_sigmatopdown__ent_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_sigmatdtest_array_17(sigmatdtest_array_17_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_sigmatopdown__ent_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatdtest_array_17_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatdtest_array_17((sigmatdtest_array_17_t)x, (sigmatdtest_array_17_t)y);
}

char * json_sigmatdtest_array_17_ptr(pointer_t x, type_actual_t T){
        return json_sigmatdtest_array_17((sigmatdtest_array_17_t)x);
}

actual_sigmatdtest_array_17_t actual_sigmatdtest_array_17(){
        actual_sigmatdtest_array_17_t new = (actual_sigmatdtest_array_17_t)safe_malloc(sizeof(struct actual_sigmatdtest_array_17_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdtest_array_17_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdtest_array_17_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdtest_array_17_ptr);
 

 
        return new;
 };

sigmatdtest_array_17_t update_sigmatdtest_array_17(sigmatdtest_array_17_t x, uint32_t i, sigmatopdown__ent_adt_t v){
         sigmatdtest_array_17_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_sigmatdtest_array_17(x);
                      x->count--;};
        sigmatopdown__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

sigmatdtest_array_17_t upgrade_sigmatdtest_array_17(sigmatdtest_array_17_t x, uint32_t i, sigmatopdown__ent_adt_t v){
         sigmatdtest_array_17_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatdtest_array_17_s) + (newmax * sizeof(sigmatopdown__ent_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatdtest_array_17(x);} else {y = copy_sigmatdtest_array_17(x);
                      x->count--;};
        sigmatopdown__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}




sigmatdtest_array_18_t new_sigmatdtest_array_18(uint32_t size){
        sigmatdtest_array_18_t tmp = (sigmatdtest_array_18_t) safe_malloc(sizeof(struct sigmatdtest_array_18_s) + (size * sizeof(sigmatdtest_array_17_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_sigmatdtest_array_18(sigmatdtest_array_18_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_sigmatdtest_array_17(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_sigmatdtest_array_18_ptr(pointer_t x, type_actual_t T){
        release_sigmatdtest_array_18((sigmatdtest_array_18_t)x);
}

sigmatdtest_array_18_t copy_sigmatdtest_array_18(sigmatdtest_array_18_t x){
        sigmatdtest_array_18_t tmp = new_sigmatdtest_array_18(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_sigmatdtest_array_18(sigmatdtest_array_18_t x, sigmatdtest_array_18_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_sigmatdtest_array_17(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_sigmatdtest_array_18(sigmatdtest_array_18_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_sigmatdtest_array_17(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatdtest_array_18_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatdtest_array_18((sigmatdtest_array_18_t)x, (sigmatdtest_array_18_t)y);
}

char * json_sigmatdtest_array_18_ptr(pointer_t x, type_actual_t T){
        return json_sigmatdtest_array_18((sigmatdtest_array_18_t)x);
}

actual_sigmatdtest_array_18_t actual_sigmatdtest_array_18(){
        actual_sigmatdtest_array_18_t new = (actual_sigmatdtest_array_18_t)safe_malloc(sizeof(struct actual_sigmatdtest_array_18_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdtest_array_18_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdtest_array_18_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdtest_array_18_ptr);
 

 
        return new;
 };

sigmatdtest_array_18_t update_sigmatdtest_array_18(sigmatdtest_array_18_t x, uint32_t i, sigmatdtest_array_17_t v){
         sigmatdtest_array_18_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_sigmatdtest_array_18(x);
                      x->count--;};
        sigmatdtest_array_17_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatdtest_array_17(yelems[i]);};
         yelems[i] = v;
         return y;}

sigmatdtest_array_18_t upgrade_sigmatdtest_array_18(sigmatdtest_array_18_t x, uint32_t i, sigmatdtest_array_17_t v){
         sigmatdtest_array_18_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatdtest_array_18_s) + (newmax * sizeof(sigmatdtest_array_17_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatdtest_array_18(x);} else {y = copy_sigmatdtest_array_18(x);
                      x->count--;};
        sigmatdtest_array_17_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatdtest_array_17(yelems[i]);};
         yelems[i] = v;
         return y;}




sigmatdtest_record_19_t new_sigmatdtest_record_19(void){
        sigmatdtest_record_19_t tmp = (sigmatdtest_record_19_t) safe_malloc(sizeof(struct sigmatdtest_record_19_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdtest_record_19(sigmatdtest_record_19_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatdtest_array_18(x->scaf);
         release_sigmatopdown__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdtest_record_19_ptr(pointer_t x, type_actual_t T){
        release_sigmatdtest_record_19((sigmatdtest_record_19_t)x);
}

sigmatdtest_record_19_t copy_sigmatdtest_record_19(sigmatdtest_record_19_t x){
        sigmatdtest_record_19_t y = new_sigmatdtest_record_19();
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->depth = (uint64_t)x->depth;
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->lflag = (bool_t)x->lflag;
        y->count = 1;
        return y;}

bool_t equal_sigmatdtest_record_19(sigmatdtest_record_19_t x, sigmatdtest_record_19_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatdtest_array_18(x->scaf, y->scaf);
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->stack, y->stack);
        tmp = tmp && x->lflag == y->lflag;
        return tmp;}

char * json_sigmatdtest_record_19(sigmatdtest_record_19_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(16);
         sprintf(fld0, "\"scaf\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatdtest_array_18(x->scaf));
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

bool_t equal_sigmatdtest_record_19_ptr(pointer_t x, pointer_t y, actual_sigmatdtest_record_19_t T){
        return equal_sigmatdtest_record_19((sigmatdtest_record_19_t)x, (sigmatdtest_record_19_t)y);
}

char * json_sigmatdtest_record_19_ptr(pointer_t x, actual_sigmatdtest_record_19_t T){
        return json_sigmatdtest_record_19((sigmatdtest_record_19_t)x);
}

actual_sigmatdtest_record_19_t actual_sigmatdtest_record_19(){
        actual_sigmatdtest_record_19_t new = (actual_sigmatdtest_record_19_t)safe_malloc(sizeof(struct actual_sigmatdtest_record_19_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdtest_record_19_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdtest_record_19_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdtest_record_19_ptr);
 

 
        return new;
 };

sigmatdtest_record_19_t update_sigmatdtest_record_19_scaf(sigmatdtest_record_19_t x, sigmatdtest_array_18_t v){
        sigmatdtest_record_19_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_sigmatdtest_array_18(x->scaf);};}
        else {y = copy_sigmatdtest_record_19(x); x->count--; y->scaf->count--;};
        y->scaf = (sigmatdtest_array_18_t)v;
        return y;}

sigmatdtest_record_19_t update_sigmatdtest_record_19_depth(sigmatdtest_record_19_t x, uint64_t v){
        sigmatdtest_record_19_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdtest_record_19(x); x->count--;};
        y->depth = (uint64_t)v;
        return y;}

sigmatdtest_record_19_t update_sigmatdtest_record_19_stack(sigmatdtest_record_19_t x, sigmatopdown__ent_adt_t v){
        sigmatdtest_record_19_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_sigmatopdown__ent_adt(x->stack);};}
        else {y = copy_sigmatdtest_record_19(x); x->count--; y->stack->count--;};
        y->stack = (sigmatopdown__ent_adt_t)v;
        return y;}

sigmatdtest_record_19_t update_sigmatdtest_record_19_lflag(sigmatdtest_record_19_t x, bool_t v){
        sigmatdtest_record_19_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdtest_record_19(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}




sigmatopdown__ent_adt_t f_sigmatdtest_closure_20(struct sigmatdtest_closure_20_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        sigmatdtest_funtype_12_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatdtest_funtype_12(htbl, bvar, hash);
        sigmatdtest_funtype_12_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            sigmatopdown__ent_adt_t result;
            result = (sigmatopdown__ent_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_sigmatdtest_closure_20(bvar);};

return h_sigmatdtest_closure_20(bvar);}

sigmatopdown__ent_adt_t m_sigmatdtest_closure_20(struct sigmatdtest_closure_20_s * closure, uint8_t bvar){
        return h_sigmatdtest_closure_20(bvar);}

extern sigmatopdown__ent_adt_t h_sigmatdtest_closure_20(uint8_t ivar_41){
        sigmatopdown__ent_adt_t result;
        result = (sigmatopdown__ent_adt_t)sigmatopdown__pending();
        if (result != NULL) result->count++;

        return result;
}

sigmatdtest_closure_20_t new_sigmatdtest_closure_20(void){
        static struct sigmatdtest_funtype_12_ftbl_s ftbl = {.fptr = (sigmatopdown__ent_adt_t (*)(sigmatdtest_funtype_12_t, uint8_t))&f_sigmatdtest_closure_20, .mptr = (sigmatopdown__ent_adt_t (*)(sigmatdtest_funtype_12_t, uint8_t))&m_sigmatdtest_closure_20, .rptr =  (void (*)(sigmatdtest_funtype_12_t))&release_sigmatdtest_closure_20, .cptr = (sigmatdtest_funtype_12_t (*)(sigmatdtest_funtype_12_t))&copy_sigmatdtest_closure_20};
        sigmatdtest_closure_20_t tmp = (sigmatdtest_closure_20_t) safe_malloc(sizeof(struct sigmatdtest_closure_20_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdtest_closure_20(sigmatdtest_funtype_12_t closure){
        sigmatdtest_closure_20_t x = (sigmatdtest_closure_20_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdtest_closure_20_t copy_sigmatdtest_closure_20(sigmatdtest_closure_20_t x){
        sigmatdtest_closure_20_t y = new_sigmatdtest_closure_20();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatdtest_funtype_12_htbl_t new_htbl = (sigmatdtest_funtype_12_htbl_t) safe_malloc(sizeof(struct sigmatdtest_funtype_12_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdtest_funtype_12_hashentry_t * new_data = (sigmatdtest_funtype_12_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdtest_funtype_12_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdtest_funtype_12_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatdtest_funtype_21(sigmatdtest_funtype_21_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdtest_funtype_21_t copy_sigmatdtest_funtype_21(sigmatdtest_funtype_21_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatdtest_funtype_21(sigmatdtest_funtype_21_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatdtest_funtype_21_hashentry_t data = htbl->data[hashindex];
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

sigmatdtest_funtype_21_t dupdate_sigmatdtest_funtype_21(sigmatdtest_funtype_21_t a, uint32_t i, sigmatdtest_funtype_12_t v){
        sigmatdtest_funtype_21_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatdtest_funtype_21_htbl_t)safe_malloc(sizeof(struct sigmatdtest_funtype_21_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatdtest_funtype_21_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatdtest_funtype_21_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatdtest_funtype_21_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatdtest_funtype_21_hashentry_t * new_data = (sigmatdtest_funtype_21_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatdtest_funtype_21_hashentry_s));
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
                                new_data[new_loc].value = (sigmatdtest_funtype_12_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_sigmatdtest_funtype_21(htbl, i, ihash);
        sigmatdtest_funtype_21_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (sigmatdtest_funtype_12_t)v; htbl->num_entries++;}
            else {sigmatdtest_funtype_12_t tempvalue;tempvalue = (sigmatdtest_funtype_12_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (sigmatdtest_funtype_12_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_sigmatdtest_funtype_12(tempvalue);};
        return a;

}

sigmatdtest_funtype_21_t update_sigmatdtest_funtype_21(sigmatdtest_funtype_21_t a, uint32_t i, sigmatdtest_funtype_12_t v){
        if (a->count == 1){
                return dupdate_sigmatdtest_funtype_21(a, i, v);
            } else {
                sigmatdtest_funtype_21_t x = copy_sigmatdtest_funtype_21(a);
                a->count--;
                return dupdate_sigmatdtest_funtype_21(x, i, v);
            }}

bool_t equal_sigmatdtest_funtype_21(sigmatdtest_funtype_21_t x, sigmatdtest_funtype_21_t y){
        return false;}

char* json_sigmatdtest_funtype_21(sigmatdtest_funtype_21_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"sigmatdtest_funtype_21\""); return result;}


sigmatdtest_record_22_t new_sigmatdtest_record_22(void){
        sigmatdtest_record_22_t tmp = (sigmatdtest_record_22_t) safe_malloc(sizeof(struct sigmatdtest_record_22_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdtest_record_22(sigmatdtest_record_22_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatdtest_funtype_21(x->scaf);
         release_sigmatopdown__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdtest_record_22_ptr(pointer_t x, type_actual_t T){
        release_sigmatdtest_record_22((sigmatdtest_record_22_t)x);
}

sigmatdtest_record_22_t copy_sigmatdtest_record_22(sigmatdtest_record_22_t x){
        sigmatdtest_record_22_t y = new_sigmatdtest_record_22();
        y->depth = (uint8_t)x->depth;
        y->lflag = (bool_t)x->lflag;
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatdtest_record_22(sigmatdtest_record_22_t x, sigmatdtest_record_22_t y){
        bool_t tmp = true;
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && x->lflag == y->lflag;
        tmp = tmp && equal_sigmatdtest_funtype_21(x->scaf, y->scaf);
        tmp = tmp && equal_sigmatopdown__ent_adt(x->stack, y->stack);
        return tmp;}

char * json_sigmatdtest_record_22(sigmatdtest_record_22_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(17);
         sprintf(fld0, "\"depth\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->depth));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"lflag\" : ");
        tmp[1] = safe_strcat(fld1, json_bool(x->lflag));
        char * fld2 = safe_malloc(16);
         sprintf(fld2, "\"scaf\" : ");
        tmp[2] = safe_strcat(fld2, json_sigmatdtest_funtype_21(x->scaf));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"stack\" : ");
        tmp[3] = safe_strcat(fld3, json_sigmatopdown__ent_adt(x->stack));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdtest_record_22_ptr(pointer_t x, pointer_t y, actual_sigmatdtest_record_22_t T){
        return equal_sigmatdtest_record_22((sigmatdtest_record_22_t)x, (sigmatdtest_record_22_t)y);
}

char * json_sigmatdtest_record_22_ptr(pointer_t x, actual_sigmatdtest_record_22_t T){
        return json_sigmatdtest_record_22((sigmatdtest_record_22_t)x);
}

actual_sigmatdtest_record_22_t actual_sigmatdtest_record_22(){
        actual_sigmatdtest_record_22_t new = (actual_sigmatdtest_record_22_t)safe_malloc(sizeof(struct actual_sigmatdtest_record_22_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdtest_record_22_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdtest_record_22_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdtest_record_22_ptr);
 

 
        return new;
 };

sigmatdtest_record_22_t update_sigmatdtest_record_22_depth(sigmatdtest_record_22_t x, uint8_t v){
        sigmatdtest_record_22_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdtest_record_22(x); x->count--;};
        y->depth = (uint8_t)v;
        return y;}

sigmatdtest_record_22_t update_sigmatdtest_record_22_lflag(sigmatdtest_record_22_t x, bool_t v){
        sigmatdtest_record_22_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdtest_record_22(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}

sigmatdtest_record_22_t update_sigmatdtest_record_22_scaf(sigmatdtest_record_22_t x, sigmatdtest_funtype_21_t v){
        sigmatdtest_record_22_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_sigmatdtest_funtype_21(x->scaf);};}
        else {y = copy_sigmatdtest_record_22(x); x->count--; y->scaf->count--;};
        y->scaf = (sigmatdtest_funtype_21_t)v;
        return y;}

sigmatdtest_record_22_t update_sigmatdtest_record_22_stack(sigmatdtest_record_22_t x, sigmatopdown__ent_adt_t v){
        sigmatdtest_record_22_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_sigmatopdown__ent_adt(x->stack);};}
        else {y = copy_sigmatdtest_record_22(x); x->count--; y->stack->count--;};
        y->stack = (sigmatopdown__ent_adt_t)v;
        return y;}




sigmatdtest_funtype_12_t f_sigmatdtest_closure_23(struct sigmatdtest_closure_23_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        sigmatdtest_funtype_21_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatdtest_funtype_21(htbl, bvar, hash);
        sigmatdtest_funtype_21_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            sigmatdtest_funtype_12_t result;
            result = (sigmatdtest_funtype_12_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_sigmatdtest_closure_23(bvar, closure->fvar_1, closure->fvar_2);};

return h_sigmatdtest_closure_23(bvar, closure->fvar_1, closure->fvar_2);}

sigmatdtest_funtype_12_t m_sigmatdtest_closure_23(struct sigmatdtest_closure_23_s * closure, uint32_t bvar){
        return h_sigmatdtest_closure_23(bvar, closure->fvar_1, closure->fvar_2);}

extern sigmatdtest_funtype_12_t h_sigmatdtest_closure_23(uint32_t ivar_54, uint32_t ivar_14, sigmatdtest_funtype_12_t ivar_37){
        sigmatdtest_funtype_12_t result;
        //copying to sigmatdtest_funtype_12 from sigmatdtest_funtype_12;
        result = (sigmatdtest_funtype_12_t)ivar_37;
        if (result != NULL) result->count++;

        return result;
}

sigmatdtest_closure_23_t new_sigmatdtest_closure_23(void){
        static struct sigmatdtest_funtype_21_ftbl_s ftbl = {.fptr = (sigmatdtest_funtype_12_t (*)(sigmatdtest_funtype_21_t, uint32_t))&f_sigmatdtest_closure_23, .mptr = (sigmatdtest_funtype_12_t (*)(sigmatdtest_funtype_21_t, uint32_t))&m_sigmatdtest_closure_23, .rptr =  (void (*)(sigmatdtest_funtype_21_t))&release_sigmatdtest_closure_23, .cptr = (sigmatdtest_funtype_21_t (*)(sigmatdtest_funtype_21_t))&copy_sigmatdtest_closure_23};
        sigmatdtest_closure_23_t tmp = (sigmatdtest_closure_23_t) safe_malloc(sizeof(struct sigmatdtest_closure_23_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdtest_closure_23(sigmatdtest_funtype_21_t closure){
        sigmatdtest_closure_23_t x = (sigmatdtest_closure_23_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatdtest_funtype_12(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdtest_closure_23_t copy_sigmatdtest_closure_23(sigmatdtest_closure_23_t x){
        sigmatdtest_closure_23_t y = new_sigmatdtest_closure_23();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            sigmatdtest_funtype_21_htbl_t new_htbl = (sigmatdtest_funtype_21_htbl_t) safe_malloc(sizeof(struct sigmatdtest_funtype_21_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdtest_funtype_21_hashentry_t * new_data = (sigmatdtest_funtype_21_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdtest_funtype_21_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdtest_funtype_21_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatdtest_record_24_t new_sigmatdtest_record_24(void){
        sigmatdtest_record_24_t tmp = (sigmatdtest_record_24_t) safe_malloc(sizeof(struct sigmatdtest_record_24_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdtest_record_24(sigmatdtest_record_24_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatdtest_record_19(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdtest_record_24_ptr(pointer_t x, type_actual_t T){
        release_sigmatdtest_record_24((sigmatdtest_record_24_t)x);
}

sigmatdtest_record_24_t copy_sigmatdtest_record_24(sigmatdtest_record_24_t x){
        sigmatdtest_record_24_t y = new_sigmatdtest_record_24();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = (uint32_t)x->project_3;
        y->count = 1;
        return y;}

bool_t equal_sigmatdtest_record_24(sigmatdtest_record_24_t x, sigmatdtest_record_24_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatdtest_record_19(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        return tmp;}

char * json_sigmatdtest_record_24(sigmatdtest_record_24_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatdtest_record_19(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdtest_record_24_ptr(pointer_t x, pointer_t y, actual_sigmatdtest_record_24_t T){
        return equal_sigmatdtest_record_24((sigmatdtest_record_24_t)x, (sigmatdtest_record_24_t)y);
}

char * json_sigmatdtest_record_24_ptr(pointer_t x, actual_sigmatdtest_record_24_t T){
        return json_sigmatdtest_record_24((sigmatdtest_record_24_t)x);
}

actual_sigmatdtest_record_24_t actual_sigmatdtest_record_24(){
        actual_sigmatdtest_record_24_t new = (actual_sigmatdtest_record_24_t)safe_malloc(sizeof(struct actual_sigmatdtest_record_24_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdtest_record_24_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdtest_record_24_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdtest_record_24_ptr);
 

 
        return new;
 };

sigmatdtest_record_24_t update_sigmatdtest_record_24_project_1(sigmatdtest_record_24_t x, sigmatdtest_record_19_t v){
        sigmatdtest_record_24_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatdtest_record_19(x->project_1);};}
        else {y = copy_sigmatdtest_record_24(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatdtest_record_19_t)v;
        return y;}

sigmatdtest_record_24_t update_sigmatdtest_record_24_project_2(sigmatdtest_record_24_t x, uint8_t v){
        sigmatdtest_record_24_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdtest_record_24(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

sigmatdtest_record_24_t update_sigmatdtest_record_24_project_3(sigmatdtest_record_24_t x, uint32_t v){
        sigmatdtest_record_24_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdtest_record_24(x); x->count--;};
        y->project_3 = (uint32_t)v;
        return y;}



void release_sigmatdtest_funtype_25(sigmatdtest_funtype_25_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdtest_funtype_25_t copy_sigmatdtest_funtype_25(sigmatdtest_funtype_25_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdtest_funtype_25(sigmatdtest_funtype_25_t x, sigmatdtest_funtype_25_t y){
        return false;}

char* json_sigmatdtest_funtype_25(sigmatdtest_funtype_25_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"sigmatdtest_funtype_25\""); return result;}

extern bool_t sigmatdtest__digit(uint8_t ivar_1){
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

extern bool_t sigmatdtest__any(uint8_t ivar_1){
        bool_t  result;
        result = (bool_t) true;

        
        return result;
}

extern bool_t sigmatdtest__whitespace(uint8_t ivar_1){
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

extern sigmatopdown__peg_adt_t sigmatdtest__pyaml(uint8_t ivar_1){
        sigmatopdown__peg_adt_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             uint8_t ivar_9;
             ivar_9 = (uint8_t)1;
             uint8_t ivar_10;
             ivar_10 = (uint8_t)3;
             result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_9, (uint8_t)ivar_10);
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
           result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_18, (uint8_t)ivar_19);
} else {
             
           bool_t ivar_20;
           uint8_t ivar_22;
           ivar_22 = (uint8_t)2;
           ivar_20 = (ivar_1 == ivar_22);
           if (ivar_20){   
           sigmatdtest_funtype_0_t ivar_30;
           sigmatdtest_closure_1_t cl38865;
           cl38865 = new_sigmatdtest_closure_1();
           ivar_30 = (sigmatdtest_funtype_0_t)cl38865;
           result = (sigmatopdown__peg_adt_t)sigmatopdown__any((sigmatopdown_funtype_29_t)ivar_30);
} else {
           
           bool_t ivar_32;
           uint8_t ivar_34;
           ivar_34 = (uint8_t)3;
           ivar_32 = (ivar_1 == ivar_34);
           if (ivar_32){    
            uint8_t ivar_39;
            ivar_39 = (uint8_t)4;
            uint8_t ivar_40;
            ivar_40 = (uint8_t)35;
            result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_39, (uint8_t)ivar_40);
} else {
           
            bool_t ivar_41;
            uint8_t ivar_43;
            ivar_43 = (uint8_t)4;
            ivar_41 = (ivar_1 == ivar_43);
            if (ivar_41){     
             uint8_t ivar_48;
             ivar_48 = (uint8_t)5;
             uint8_t ivar_49;
             ivar_49 = (uint8_t)11;
             result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_48, (uint8_t)ivar_49);
} else {
            
             bool_t ivar_50;
             uint8_t ivar_52;
             ivar_52 = (uint8_t)5;
             ivar_50 = (ivar_1 == ivar_52);
             if (ivar_50){      
              uint8_t ivar_57;
              ivar_57 = (uint8_t)6;
              uint8_t ivar_58;
              ivar_58 = (uint8_t)7;
              result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_57, (uint8_t)ivar_58);
} else {
             
              bool_t ivar_59;
              uint8_t ivar_61;
              ivar_61 = (uint8_t)6;
              ivar_59 = (ivar_1 == ivar_61);
              if (ivar_59){       
               uint8_t ivar_65;
               ivar_65 = (uint8_t)123;
               result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_65);
} else {
              
               bool_t ivar_66;
               uint8_t ivar_68;
               ivar_68 = (uint8_t)7;
               ivar_66 = (ivar_1 == ivar_68);
               if (ivar_66){        
                uint8_t ivar_73;
                ivar_73 = (uint8_t)8;
                uint8_t ivar_74;
                ivar_74 = (uint8_t)10;
                result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_73, (uint8_t)ivar_74);
} else {
               
                bool_t ivar_75;
                uint8_t ivar_77;
                ivar_77 = (uint8_t)8;
                ivar_75 = (ivar_1 == ivar_77);
                if (ivar_75){         
                 uint8_t ivar_82;
                 ivar_82 = (uint8_t)9;
                 uint8_t ivar_83;
                 ivar_83 = (uint8_t)7;
                 result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_82, (uint8_t)ivar_83);
} else {
                
                 bool_t ivar_84;
                 uint8_t ivar_86;
                 ivar_86 = (uint8_t)9;
                 ivar_84 = (ivar_1 == ivar_86);
                 if (ivar_84){          
                  sigmatdtest_funtype_0_t ivar_94;
                  sigmatdtest_closure_2_t cl38873;
                  cl38873 = new_sigmatdtest_closure_2();
                  ivar_94 = (sigmatdtest_funtype_0_t)cl38873;
                  result = (sigmatopdown__peg_adt_t)sigmatopdown__any((sigmatopdown_funtype_29_t)ivar_94);
} else {
                 
                  bool_t ivar_96;
                  uint8_t ivar_98;
                  ivar_98 = (uint8_t)10;
                  ivar_96 = (ivar_1 == ivar_98);
                  if (ivar_96){           
                   result = (sigmatopdown__peg_adt_t)sigmatopdown__epsilon();
                   if (result != NULL) result->count++;
} else {
                  
                   bool_t ivar_100;
                   uint8_t ivar_102;
                   ivar_102 = (uint8_t)11;
                   ivar_100 = (ivar_1 == ivar_102);
                   if (ivar_100){            
                    uint8_t ivar_107;
                    ivar_107 = (uint8_t)12;
                    uint8_t ivar_108;
                    ivar_108 = (uint8_t)14;
                    result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_107, (uint8_t)ivar_108);
} else {
                   
                    bool_t ivar_109;
                    uint8_t ivar_111;
                    ivar_111 = (uint8_t)12;
                    ivar_109 = (ivar_1 == ivar_111);
                    if (ivar_109){             
                     uint8_t ivar_116;
                     ivar_116 = (uint8_t)13;
                     uint8_t ivar_117;
                     ivar_117 = (uint8_t)7;
                     result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_116, (uint8_t)ivar_117);
} else {
                    
                     bool_t ivar_118;
                     uint8_t ivar_120;
                     ivar_120 = (uint8_t)13;
                     ivar_118 = (ivar_1 == ivar_120);
                     if (ivar_118){              
                      uint8_t ivar_124;
                      ivar_124 = (uint8_t)125;
                      result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_124);
} else {
                     
                      bool_t ivar_125;
                      uint8_t ivar_127;
                      ivar_127 = (uint8_t)14;
                      ivar_125 = (ivar_1 == ivar_127);
                      if (ivar_125){               
                       uint8_t ivar_132;
                       ivar_132 = (uint8_t)15;
                       uint8_t ivar_133;
                       ivar_133 = (uint8_t)31;
                       result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_132, (uint8_t)ivar_133);
} else {
                      
                       bool_t ivar_134;
                       uint8_t ivar_136;
                       ivar_136 = (uint8_t)15;
                       ivar_134 = (ivar_1 == ivar_136);
                       if (ivar_134){                
                        uint8_t ivar_141;
                        ivar_141 = (uint8_t)16;
                        uint8_t ivar_142;
                        ivar_142 = (uint8_t)28;
                        result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_141, (uint8_t)ivar_142);
} else {
                       
                        bool_t ivar_143;
                        uint8_t ivar_145;
                        ivar_145 = (uint8_t)16;
                        ivar_143 = (ivar_1 == ivar_145);
                        if (ivar_143){                 
                         uint8_t ivar_150;
                         ivar_150 = (uint8_t)1;
                         uint8_t ivar_151;
                         ivar_151 = (uint8_t)17;
                         result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_150, (uint8_t)ivar_151);
} else {
                        
                         bool_t ivar_152;
                         uint8_t ivar_154;
                         ivar_154 = (uint8_t)17;
                         ivar_152 = (ivar_1 == ivar_154);
                         if (ivar_152){                  
                          uint8_t ivar_159;
                          ivar_159 = (uint8_t)18;
                          uint8_t ivar_160;
                          ivar_160 = (uint8_t)7;
                          result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_159, (uint8_t)ivar_160);
} else {
                         
                          bool_t ivar_161;
                          uint8_t ivar_163;
                          ivar_163 = (uint8_t)18;
                          ivar_161 = (ivar_1 == ivar_163);
                          if (ivar_161){                   
                           uint8_t ivar_168;
                           ivar_168 = (uint8_t)19;
                           uint8_t ivar_169;
                           ivar_169 = (uint8_t)25;
                           result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_168, (uint8_t)ivar_169);
} else {
                          
                           bool_t ivar_170;
                           uint8_t ivar_172;
                           ivar_172 = (uint8_t)19;
                           ivar_170 = (ivar_1 == ivar_172);
                           if (ivar_170){                    
                            uint8_t ivar_176;
                            ivar_176 = (uint8_t)39;
                            result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_176);
} else {
                           
                            bool_t ivar_177;
                            uint8_t ivar_179;
                            ivar_179 = (uint8_t)20;
                            ivar_177 = (ivar_1 == ivar_179);
                            if (ivar_177){                     
                             uint8_t ivar_184;
                             ivar_184 = (uint8_t)21;
                             uint8_t ivar_185;
                             ivar_185 = (uint8_t)25;
                             result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_184, (uint8_t)ivar_185);
} else {
                            
                             bool_t ivar_186;
                             uint8_t ivar_188;
                             ivar_188 = (uint8_t)21;
                             ivar_186 = (ivar_1 == ivar_188);
                             if (ivar_186){                      
                              uint8_t ivar_193;
                              ivar_193 = (uint8_t)22;
                              uint8_t ivar_194;
                              ivar_194 = (uint8_t)20;
                              result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_193, (uint8_t)ivar_194);
} else {
                             
                              bool_t ivar_195;
                              uint8_t ivar_197;
                              ivar_197 = (uint8_t)22;
                              ivar_195 = (ivar_1 == ivar_197);
                              if (ivar_195){                       
                               uint8_t ivar_202;
                               ivar_202 = (uint8_t)23;
                               uint8_t ivar_203;
                               ivar_203 = (uint8_t)19;
                               result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_202, (uint8_t)ivar_203);
} else {
                              
                               bool_t ivar_204;
                               uint8_t ivar_206;
                               ivar_206 = (uint8_t)23;
                               ivar_204 = (ivar_1 == ivar_206);
                               if (ivar_204){                        
                                uint8_t ivar_210;
                                ivar_210 = (uint8_t)92;
                                result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_210);
} else {
                               
                                bool_t ivar_211;
                                uint8_t ivar_213;
                                ivar_213 = (uint8_t)24;
                                ivar_211 = (ivar_1 == ivar_213);
                                if (ivar_211){                         
                                 uint8_t ivar_218;
                                 ivar_218 = (uint8_t)19;
                                 uint8_t ivar_219;
                                 ivar_219 = (uint8_t)7;
                                 result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_218, (uint8_t)ivar_219);
} else {
                                
                                 bool_t ivar_220;
                                 uint8_t ivar_222;
                                 ivar_222 = (uint8_t)25;
                                 ivar_220 = (ivar_1 == ivar_222);
                                 if (ivar_220){                          
                                  uint8_t ivar_227;
                                  ivar_227 = (uint8_t)24;
                                  uint8_t ivar_228;
                                  ivar_228 = (uint8_t)26;
                                  result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_227, (uint8_t)ivar_228);
} else {
                                 
                                  bool_t ivar_229;
                                  uint8_t ivar_231;
                                  ivar_231 = (uint8_t)26;
                                  ivar_229 = (ivar_1 == ivar_231);
                                  if (ivar_229){                           
                                   uint8_t ivar_236;
                                   ivar_236 = (uint8_t)27;
                                   uint8_t ivar_237;
                                   ivar_237 = (uint8_t)20;
                                   result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_236, (uint8_t)ivar_237);
} else {
                                  
                                   bool_t ivar_238;
                                   uint8_t ivar_240;
                                   ivar_240 = (uint8_t)27;
                                   ivar_238 = (ivar_1 == ivar_240);
                                   if (ivar_238){                            
                                    sigmatdtest_funtype_0_t ivar_248;
                                    sigmatdtest_closure_3_t cl38893;
                                    cl38893 = new_sigmatdtest_closure_3();
                                    ivar_248 = (sigmatdtest_funtype_0_t)cl38893;
                                    result = (sigmatopdown__peg_adt_t)sigmatopdown__any((sigmatopdown_funtype_29_t)ivar_248);
} else {
                                   
                                    bool_t ivar_250;
                                    uint8_t ivar_252;
                                    ivar_252 = (uint8_t)28;
                                    ivar_250 = (ivar_1 == ivar_252);
                                    if (ivar_250){                             
                                     uint8_t ivar_257;
                                     ivar_257 = (uint8_t)29;
                                     uint8_t ivar_258;
                                     ivar_258 = (uint8_t)0;
                                     result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_257, (uint8_t)ivar_258);
} else {
                                    
                                     bool_t ivar_259;
                                     uint8_t ivar_261;
                                     ivar_261 = (uint8_t)29;
                                     ivar_259 = (ivar_1 == ivar_261);
                                     if (ivar_259){                              
                                      uint8_t ivar_266;
                                      ivar_266 = (uint8_t)30;
                                      uint8_t ivar_267;
                                      ivar_267 = (uint8_t)7;
                                      result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_266, (uint8_t)ivar_267);
} else {
                                     
                                      bool_t ivar_268;
                                      uint8_t ivar_270;
                                      ivar_270 = (uint8_t)30;
                                      ivar_268 = (ivar_1 == ivar_270);
                                      if (ivar_268){                               
                                       uint8_t ivar_274;
                                       ivar_274 = (uint8_t)58;
                                       result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_274);
} else {
                                      
                                       bool_t ivar_275;
                                       uint8_t ivar_277;
                                       ivar_277 = (uint8_t)31;
                                       ivar_275 = (ivar_1 == ivar_277);
                                       if (ivar_275){                                
                                        uint8_t ivar_282;
                                        ivar_282 = (uint8_t)32;
                                        uint8_t ivar_283;
                                        ivar_283 = (uint8_t)12;
                                        result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_282, (uint8_t)ivar_283);
} else {
                                       
                                        bool_t ivar_284;
                                        uint8_t ivar_286;
                                        ivar_286 = (uint8_t)32;
                                        ivar_284 = (ivar_1 == ivar_286);
                                        if (ivar_284){                                 
                                         uint8_t ivar_291;
                                         ivar_291 = (uint8_t)33;
                                         uint8_t ivar_292;
                                         ivar_292 = (uint8_t)14;
                                         result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_291, (uint8_t)ivar_292);
} else {
                                        
                                         bool_t ivar_293;
                                         uint8_t ivar_295;
                                         ivar_295 = (uint8_t)33;
                                         ivar_293 = (ivar_1 == ivar_295);
                                         if (ivar_293){                                  
                                          uint8_t ivar_300;
                                          ivar_300 = (uint8_t)34;
                                          uint8_t ivar_301;
                                          ivar_301 = (uint8_t)7;
                                          result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_300, (uint8_t)ivar_301);
} else {
                                         
                                          bool_t ivar_302;
                                          uint8_t ivar_304;
                                          ivar_304 = (uint8_t)34;
                                          ivar_302 = (ivar_1 == ivar_304);
                                          if (ivar_302){                                   
                                           uint8_t ivar_308;
                                           ivar_308 = (uint8_t)44;
                                           result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_308);
} else {
                                          
                                           bool_t ivar_309;
                                           uint8_t ivar_311;
                                           ivar_311 = (uint8_t)35;
                                           ivar_309 = (ivar_1 == ivar_311);
                                           if (ivar_309){                                    
                                            uint8_t ivar_316;
                                            ivar_316 = (uint8_t)36;
                                            uint8_t ivar_317;
                                            ivar_317 = (uint8_t)38;
                                            result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_316, (uint8_t)ivar_317);
} else {
                                           
                                            bool_t ivar_318;
                                            uint8_t ivar_320;
                                            ivar_320 = (uint8_t)36;
                                            ivar_318 = (ivar_1 == ivar_320);
                                            if (ivar_318){                                     
                                             uint8_t ivar_325;
                                             ivar_325 = (uint8_t)37;
                                             uint8_t ivar_326;
                                             ivar_326 = (uint8_t)7;
                                             result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_325, (uint8_t)ivar_326);
} else {
                                            
                                             bool_t ivar_327;
                                             uint8_t ivar_329;
                                             ivar_329 = (uint8_t)37;
                                             ivar_327 = (ivar_1 == ivar_329);
                                             if (ivar_327){                                      
                                              uint8_t ivar_333;
                                              ivar_333 = (uint8_t)91;
                                              result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_333);
} else {
                                             
                                              bool_t ivar_334;
                                              uint8_t ivar_336;
                                              ivar_336 = (uint8_t)38;
                                              ivar_334 = (ivar_1 == ivar_336);
                                              if (ivar_334){                                       
                                               uint8_t ivar_341;
                                               ivar_341 = (uint8_t)39;
                                               uint8_t ivar_342;
                                               ivar_342 = (uint8_t)43;
                                               result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_341, (uint8_t)ivar_342);
} else {
                                              
                                               bool_t ivar_343;
                                               uint8_t ivar_345;
                                               ivar_345 = (uint8_t)39;
                                               ivar_343 = (ivar_1 == ivar_345);
                                               if (ivar_343){                                        
                                                uint8_t ivar_350;
                                                ivar_350 = (uint8_t)40;
                                                uint8_t ivar_351;
                                                ivar_351 = (uint8_t)10;
                                                result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_350, (uint8_t)ivar_351);
} else {
                                               
                                                bool_t ivar_352;
                                                uint8_t ivar_354;
                                                ivar_354 = (uint8_t)40;
                                                ivar_352 = (ivar_1 == ivar_354);
                                                if (ivar_352){                                         
                                                 uint8_t ivar_359;
                                                 ivar_359 = (uint8_t)0;
                                                 uint8_t ivar_360;
                                                 ivar_360 = (uint8_t)41;
                                                 result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_359, (uint8_t)ivar_360);
} else {
                                                
                                                 bool_t ivar_361;
                                                 uint8_t ivar_363;
                                                 ivar_363 = (uint8_t)41;
                                                 ivar_361 = (ivar_1 == ivar_363);
                                                 if (ivar_361){                                          
                                                  uint8_t ivar_368;
                                                  ivar_368 = (uint8_t)42;
                                                  uint8_t ivar_369;
                                                  ivar_369 = (uint8_t)10;
                                                  result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_368, (uint8_t)ivar_369);
} else {
                                                 
                                                  bool_t ivar_370;
                                                  uint8_t ivar_372;
                                                  ivar_372 = (uint8_t)42;
                                                  ivar_370 = (ivar_1 == ivar_372);
                                                  if (ivar_370){                                           
                                                   uint8_t ivar_377;
                                                   ivar_377 = (uint8_t)33;
                                                   uint8_t ivar_378;
                                                   ivar_378 = (uint8_t)40;
                                                   result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_377, (uint8_t)ivar_378);
} else {
                                                  
                                                   bool_t ivar_379;
                                                   uint8_t ivar_381;
                                                   ivar_381 = (uint8_t)43;
                                                   ivar_379 = (ivar_1 == ivar_381);
                                                   if (ivar_379){                                            
                                                    uint8_t ivar_386;
                                                    ivar_386 = (uint8_t)44;
                                                    uint8_t ivar_387;
                                                    ivar_387 = (uint8_t)7;
                                                    result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_386, (uint8_t)ivar_387);
} else {
                                                   
                                                    bool_t ivar_388;
                                                    uint8_t ivar_390;
                                                    ivar_390 = (uint8_t)44;
                                                    ivar_388 = (ivar_1 == ivar_390);
                                                    if (ivar_388){                                             
                                                     uint8_t ivar_394;
                                                     ivar_394 = (uint8_t)93;
                                                     result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_394);
} else {
                                                    
                                                     result = (sigmatopdown__peg_adt_t)sigmatopdown__epsilon();
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

extern sigmatopdown__peg_adt_t sigmatdtest__pjson(uint8_t ivar_1){
        sigmatopdown__peg_adt_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             uint8_t ivar_9;
             ivar_9 = (uint8_t)1;
             uint8_t ivar_10;
             ivar_10 = (uint8_t)3;
             result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_9, (uint8_t)ivar_10);
} else {
        
             bool_t ivar_11;
             uint8_t ivar_13;
             ivar_13 = (uint8_t)1;
             ivar_11 = (ivar_1 == ivar_13);
             if (ivar_11){  
           uint8_t ivar_18;
           ivar_18 = (uint8_t)46;
           uint8_t ivar_19;
           ivar_19 = (uint8_t)2;
           result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_18, (uint8_t)ivar_19);
} else {
             
           bool_t ivar_20;
           uint8_t ivar_22;
           ivar_22 = (uint8_t)2;
           ivar_20 = (ivar_1 == ivar_22);
           if (ivar_20){   
           uint8_t ivar_27;
           ivar_27 = (uint8_t)1;
           uint8_t ivar_28;
           ivar_28 = (uint8_t)7;
           result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_27, (uint8_t)ivar_28);
} else {
           
           bool_t ivar_29;
           uint8_t ivar_31;
           ivar_31 = (uint8_t)3;
           ivar_29 = (ivar_1 == ivar_31);
           if (ivar_29){    
            uint8_t ivar_36;
            ivar_36 = (uint8_t)4;
            uint8_t ivar_37;
            ivar_37 = (uint8_t)35;
            result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_36, (uint8_t)ivar_37);
} else {
           
            bool_t ivar_38;
            uint8_t ivar_40;
            ivar_40 = (uint8_t)4;
            ivar_38 = (ivar_1 == ivar_40);
            if (ivar_38){     
             uint8_t ivar_45;
             ivar_45 = (uint8_t)5;
             uint8_t ivar_46;
             ivar_46 = (uint8_t)11;
             result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_45, (uint8_t)ivar_46);
} else {
            
             bool_t ivar_47;
             uint8_t ivar_49;
             ivar_49 = (uint8_t)5;
             ivar_47 = (ivar_1 == ivar_49);
             if (ivar_47){      
              uint8_t ivar_54;
              ivar_54 = (uint8_t)6;
              uint8_t ivar_55;
              ivar_55 = (uint8_t)7;
              result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_54, (uint8_t)ivar_55);
} else {
             
              bool_t ivar_56;
              uint8_t ivar_58;
              ivar_58 = (uint8_t)6;
              ivar_56 = (ivar_1 == ivar_58);
              if (ivar_56){       
               uint8_t ivar_62;
               ivar_62 = (uint8_t)123;
               result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_62);
} else {
              
               bool_t ivar_63;
               uint8_t ivar_65;
               ivar_65 = (uint8_t)7;
               ivar_63 = (ivar_1 == ivar_65);
               if (ivar_63){        
                uint8_t ivar_70;
                ivar_70 = (uint8_t)8;
                uint8_t ivar_71;
                ivar_71 = (uint8_t)10;
                result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_70, (uint8_t)ivar_71);
} else {
               
                bool_t ivar_72;
                uint8_t ivar_74;
                ivar_74 = (uint8_t)8;
                ivar_72 = (ivar_1 == ivar_74);
                if (ivar_72){         
                 uint8_t ivar_79;
                 ivar_79 = (uint8_t)9;
                 uint8_t ivar_80;
                 ivar_80 = (uint8_t)7;
                 result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_79, (uint8_t)ivar_80);
} else {
                
                 bool_t ivar_81;
                 uint8_t ivar_83;
                 ivar_83 = (uint8_t)9;
                 ivar_81 = (ivar_1 == ivar_83);
                 if (ivar_81){          
                  sigmatdtest_funtype_0_t ivar_91;
                  sigmatdtest_closure_4_t cl38925;
                  cl38925 = new_sigmatdtest_closure_4();
                  ivar_91 = (sigmatdtest_funtype_0_t)cl38925;
                  result = (sigmatopdown__peg_adt_t)sigmatopdown__any((sigmatopdown_funtype_29_t)ivar_91);
} else {
                 
                  bool_t ivar_93;
                  uint8_t ivar_95;
                  ivar_95 = (uint8_t)10;
                  ivar_93 = (ivar_1 == ivar_95);
                  if (ivar_93){           
                   result = (sigmatopdown__peg_adt_t)sigmatopdown__epsilon();
                   if (result != NULL) result->count++;
} else {
                  
                   bool_t ivar_97;
                   uint8_t ivar_99;
                   ivar_99 = (uint8_t)11;
                   ivar_97 = (ivar_1 == ivar_99);
                   if (ivar_97){            
                    uint8_t ivar_104;
                    ivar_104 = (uint8_t)12;
                    uint8_t ivar_105;
                    ivar_105 = (uint8_t)14;
                    result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_104, (uint8_t)ivar_105);
} else {
                   
                    bool_t ivar_106;
                    uint8_t ivar_108;
                    ivar_108 = (uint8_t)12;
                    ivar_106 = (ivar_1 == ivar_108);
                    if (ivar_106){             
                     uint8_t ivar_113;
                     ivar_113 = (uint8_t)13;
                     uint8_t ivar_114;
                     ivar_114 = (uint8_t)7;
                     result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_113, (uint8_t)ivar_114);
} else {
                    
                     bool_t ivar_115;
                     uint8_t ivar_117;
                     ivar_117 = (uint8_t)13;
                     ivar_115 = (ivar_1 == ivar_117);
                     if (ivar_115){              
                      uint8_t ivar_121;
                      ivar_121 = (uint8_t)125;
                      result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_121);
} else {
                     
                      bool_t ivar_122;
                      uint8_t ivar_124;
                      ivar_124 = (uint8_t)14;
                      ivar_122 = (ivar_1 == ivar_124);
                      if (ivar_122){               
                       uint8_t ivar_129;
                       ivar_129 = (uint8_t)15;
                       uint8_t ivar_130;
                       ivar_130 = (uint8_t)31;
                       result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_129, (uint8_t)ivar_130);
} else {
                      
                       bool_t ivar_131;
                       uint8_t ivar_133;
                       ivar_133 = (uint8_t)15;
                       ivar_131 = (ivar_1 == ivar_133);
                       if (ivar_131){                
                        uint8_t ivar_138;
                        ivar_138 = (uint8_t)16;
                        uint8_t ivar_139;
                        ivar_139 = (uint8_t)28;
                        result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_138, (uint8_t)ivar_139);
} else {
                       
                        bool_t ivar_140;
                        uint8_t ivar_142;
                        ivar_142 = (uint8_t)16;
                        ivar_140 = (ivar_1 == ivar_142);
                        if (ivar_140){                 
                         uint8_t ivar_147;
                         ivar_147 = (uint8_t)1;
                         uint8_t ivar_148;
                         ivar_148 = (uint8_t)17;
                         result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_147, (uint8_t)ivar_148);
} else {
                        
                         bool_t ivar_149;
                         uint8_t ivar_151;
                         ivar_151 = (uint8_t)17;
                         ivar_149 = (ivar_1 == ivar_151);
                         if (ivar_149){                  
                          uint8_t ivar_156;
                          ivar_156 = (uint8_t)18;
                          uint8_t ivar_157;
                          ivar_157 = (uint8_t)7;
                          result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_156, (uint8_t)ivar_157);
} else {
                         
                          bool_t ivar_158;
                          uint8_t ivar_160;
                          ivar_160 = (uint8_t)18;
                          ivar_158 = (ivar_1 == ivar_160);
                          if (ivar_158){                   
                           uint8_t ivar_165;
                           ivar_165 = (uint8_t)19;
                           uint8_t ivar_166;
                           ivar_166 = (uint8_t)25;
                           result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_165, (uint8_t)ivar_166);
} else {
                          
                           bool_t ivar_167;
                           uint8_t ivar_169;
                           ivar_169 = (uint8_t)19;
                           ivar_167 = (ivar_1 == ivar_169);
                           if (ivar_167){                    
                            uint8_t ivar_173;
                            ivar_173 = (uint8_t)34;
                            result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_173);
} else {
                           
                            bool_t ivar_174;
                            uint8_t ivar_176;
                            ivar_176 = (uint8_t)20;
                            ivar_174 = (ivar_1 == ivar_176);
                            if (ivar_174){                     
                             uint8_t ivar_181;
                             ivar_181 = (uint8_t)21;
                             uint8_t ivar_182;
                             ivar_182 = (uint8_t)25;
                             result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_181, (uint8_t)ivar_182);
} else {
                            
                             bool_t ivar_183;
                             uint8_t ivar_185;
                             ivar_185 = (uint8_t)21;
                             ivar_183 = (ivar_1 == ivar_185);
                             if (ivar_183){                      
                              uint8_t ivar_190;
                              ivar_190 = (uint8_t)22;
                              uint8_t ivar_191;
                              ivar_191 = (uint8_t)20;
                              result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_190, (uint8_t)ivar_191);
} else {
                             
                              bool_t ivar_192;
                              uint8_t ivar_194;
                              ivar_194 = (uint8_t)22;
                              ivar_192 = (ivar_1 == ivar_194);
                              if (ivar_192){                       
                               uint8_t ivar_199;
                               ivar_199 = (uint8_t)23;
                               uint8_t ivar_200;
                               ivar_200 = (uint8_t)19;
                               result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_199, (uint8_t)ivar_200);
} else {
                              
                               bool_t ivar_201;
                               uint8_t ivar_203;
                               ivar_203 = (uint8_t)23;
                               ivar_201 = (ivar_1 == ivar_203);
                               if (ivar_201){                        
                                uint8_t ivar_207;
                                ivar_207 = (uint8_t)92;
                                result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_207);
} else {
                               
                                bool_t ivar_208;
                                uint8_t ivar_210;
                                ivar_210 = (uint8_t)24;
                                ivar_208 = (ivar_1 == ivar_210);
                                if (ivar_208){                         
                                 uint8_t ivar_215;
                                 ivar_215 = (uint8_t)19;
                                 uint8_t ivar_216;
                                 ivar_216 = (uint8_t)7;
                                 result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_215, (uint8_t)ivar_216);
} else {
                                
                                 bool_t ivar_217;
                                 uint8_t ivar_219;
                                 ivar_219 = (uint8_t)25;
                                 ivar_217 = (ivar_1 == ivar_219);
                                 if (ivar_217){                          
                                  uint8_t ivar_224;
                                  ivar_224 = (uint8_t)24;
                                  uint8_t ivar_225;
                                  ivar_225 = (uint8_t)26;
                                  result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_224, (uint8_t)ivar_225);
} else {
                                 
                                  bool_t ivar_226;
                                  uint8_t ivar_228;
                                  ivar_228 = (uint8_t)26;
                                  ivar_226 = (ivar_1 == ivar_228);
                                  if (ivar_226){                           
                                   uint8_t ivar_233;
                                   ivar_233 = (uint8_t)27;
                                   uint8_t ivar_234;
                                   ivar_234 = (uint8_t)20;
                                   result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_233, (uint8_t)ivar_234);
} else {
                                  
                                   bool_t ivar_235;
                                   uint8_t ivar_237;
                                   ivar_237 = (uint8_t)27;
                                   ivar_235 = (ivar_1 == ivar_237);
                                   if (ivar_235){                            
                                    sigmatdtest_funtype_0_t ivar_245;
                                    sigmatdtest_closure_5_t cl38945;
                                    cl38945 = new_sigmatdtest_closure_5();
                                    ivar_245 = (sigmatdtest_funtype_0_t)cl38945;
                                    result = (sigmatopdown__peg_adt_t)sigmatopdown__any((sigmatopdown_funtype_29_t)ivar_245);
} else {
                                   
                                    bool_t ivar_247;
                                    uint8_t ivar_249;
                                    ivar_249 = (uint8_t)28;
                                    ivar_247 = (ivar_1 == ivar_249);
                                    if (ivar_247){                             
                                     uint8_t ivar_254;
                                     ivar_254 = (uint8_t)29;
                                     uint8_t ivar_255;
                                     ivar_255 = (uint8_t)0;
                                     result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_254, (uint8_t)ivar_255);
} else {
                                    
                                     bool_t ivar_256;
                                     uint8_t ivar_258;
                                     ivar_258 = (uint8_t)29;
                                     ivar_256 = (ivar_1 == ivar_258);
                                     if (ivar_256){                              
                                      uint8_t ivar_263;
                                      ivar_263 = (uint8_t)30;
                                      uint8_t ivar_264;
                                      ivar_264 = (uint8_t)7;
                                      result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_263, (uint8_t)ivar_264);
} else {
                                     
                                      bool_t ivar_265;
                                      uint8_t ivar_267;
                                      ivar_267 = (uint8_t)30;
                                      ivar_265 = (ivar_1 == ivar_267);
                                      if (ivar_265){                               
                                       uint8_t ivar_271;
                                       ivar_271 = (uint8_t)58;
                                       result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_271);
} else {
                                      
                                       bool_t ivar_272;
                                       uint8_t ivar_274;
                                       ivar_274 = (uint8_t)31;
                                       ivar_272 = (ivar_1 == ivar_274);
                                       if (ivar_272){                                
                                        uint8_t ivar_279;
                                        ivar_279 = (uint8_t)32;
                                        uint8_t ivar_280;
                                        ivar_280 = (uint8_t)12;
                                        result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_279, (uint8_t)ivar_280);
} else {
                                       
                                        bool_t ivar_281;
                                        uint8_t ivar_283;
                                        ivar_283 = (uint8_t)32;
                                        ivar_281 = (ivar_1 == ivar_283);
                                        if (ivar_281){                                 
                                         uint8_t ivar_288;
                                         ivar_288 = (uint8_t)33;
                                         uint8_t ivar_289;
                                         ivar_289 = (uint8_t)14;
                                         result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_288, (uint8_t)ivar_289);
} else {
                                        
                                         bool_t ivar_290;
                                         uint8_t ivar_292;
                                         ivar_292 = (uint8_t)33;
                                         ivar_290 = (ivar_1 == ivar_292);
                                         if (ivar_290){                                  
                                          uint8_t ivar_297;
                                          ivar_297 = (uint8_t)34;
                                          uint8_t ivar_298;
                                          ivar_298 = (uint8_t)7;
                                          result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_297, (uint8_t)ivar_298);
} else {
                                         
                                          bool_t ivar_299;
                                          uint8_t ivar_301;
                                          ivar_301 = (uint8_t)34;
                                          ivar_299 = (ivar_1 == ivar_301);
                                          if (ivar_299){                                   
                                           uint8_t ivar_305;
                                           ivar_305 = (uint8_t)44;
                                           result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_305);
} else {
                                          
                                           bool_t ivar_306;
                                           uint8_t ivar_308;
                                           ivar_308 = (uint8_t)35;
                                           ivar_306 = (ivar_1 == ivar_308);
                                           if (ivar_306){                                    
                                            uint8_t ivar_313;
                                            ivar_313 = (uint8_t)17;
                                            uint8_t ivar_314;
                                            ivar_314 = (uint8_t)36;
                                            result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_313, (uint8_t)ivar_314);
} else {
                                           
                                            bool_t ivar_315;
                                            uint8_t ivar_317;
                                            ivar_317 = (uint8_t)36;
                                            ivar_315 = (ivar_1 == ivar_317);
                                            if (ivar_315){                                     
                                             uint8_t ivar_322;
                                             ivar_322 = (uint8_t)37;
                                             uint8_t ivar_323;
                                             ivar_323 = (uint8_t)39;
                                             result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_322, (uint8_t)ivar_323);
} else {
                                            
                                             bool_t ivar_324;
                                             uint8_t ivar_326;
                                             ivar_326 = (uint8_t)37;
                                             ivar_324 = (ivar_1 == ivar_326);
                                             if (ivar_324){                                      
                                              uint8_t ivar_331;
                                              ivar_331 = (uint8_t)38;
                                              uint8_t ivar_332;
                                              ivar_332 = (uint8_t)7;
                                              result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_331, (uint8_t)ivar_332);
} else {
                                             
                                              bool_t ivar_333;
                                              uint8_t ivar_335;
                                              ivar_335 = (uint8_t)38;
                                              ivar_333 = (ivar_1 == ivar_335);
                                              if (ivar_333){                                       
                                               uint8_t ivar_339;
                                               ivar_339 = (uint8_t)91;
                                               result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_339);
} else {
                                              
                                               bool_t ivar_340;
                                               uint8_t ivar_342;
                                               ivar_342 = (uint8_t)39;
                                               ivar_340 = (ivar_1 == ivar_342);
                                               if (ivar_340){                                        
                                                uint8_t ivar_347;
                                                ivar_347 = (uint8_t)40;
                                                uint8_t ivar_348;
                                                ivar_348 = (uint8_t)44;
                                                result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_347, (uint8_t)ivar_348);
} else {
                                               
                                                bool_t ivar_349;
                                                uint8_t ivar_351;
                                                ivar_351 = (uint8_t)40;
                                                ivar_349 = (ivar_1 == ivar_351);
                                                if (ivar_349){                                         
                                                 uint8_t ivar_356;
                                                 ivar_356 = (uint8_t)41;
                                                 uint8_t ivar_357;
                                                 ivar_357 = (uint8_t)7;
                                                 result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_356, (uint8_t)ivar_357);
} else {
                                                
                                                 bool_t ivar_358;
                                                 uint8_t ivar_360;
                                                 ivar_360 = (uint8_t)41;
                                                 ivar_358 = (ivar_1 == ivar_360);
                                                 if (ivar_358){                                          
                                                  uint8_t ivar_365;
                                                  ivar_365 = (uint8_t)0;
                                                  uint8_t ivar_366;
                                                  ivar_366 = (uint8_t)42;
                                                  result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_365, (uint8_t)ivar_366);
} else {
                                                 
                                                  bool_t ivar_367;
                                                  uint8_t ivar_369;
                                                  ivar_369 = (uint8_t)42;
                                                  ivar_367 = (ivar_1 == ivar_369);
                                                  if (ivar_367){                                           
                                                   uint8_t ivar_374;
                                                   ivar_374 = (uint8_t)43;
                                                   uint8_t ivar_375;
                                                   ivar_375 = (uint8_t)7;
                                                   result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_374, (uint8_t)ivar_375);
} else {
                                                  
                                                   bool_t ivar_376;
                                                   uint8_t ivar_378;
                                                   ivar_378 = (uint8_t)43;
                                                   ivar_376 = (ivar_1 == ivar_378);
                                                   if (ivar_376){                                            
                                                    uint8_t ivar_383;
                                                    ivar_383 = (uint8_t)33;
                                                    uint8_t ivar_384;
                                                    ivar_384 = (uint8_t)41;
                                                    result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_383, (uint8_t)ivar_384);
} else {
                                                   
                                                    bool_t ivar_385;
                                                    uint8_t ivar_387;
                                                    ivar_387 = (uint8_t)44;
                                                    ivar_385 = (ivar_1 == ivar_387);
                                                    if (ivar_385){                                             
                                                     uint8_t ivar_392;
                                                     ivar_392 = (uint8_t)45;
                                                     uint8_t ivar_393;
                                                     ivar_393 = (uint8_t)7;
                                                     result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_392, (uint8_t)ivar_393);
} else {
                                                    
                                                     bool_t ivar_394;
                                                     uint8_t ivar_396;
                                                     ivar_396 = (uint8_t)45;
                                                     ivar_394 = (ivar_1 == ivar_396);
                                                     if (ivar_394){                                              
                                                      uint8_t ivar_400;
                                                      ivar_400 = (uint8_t)93;
                                                      result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_400);
} else {
                                                     
                                                      bool_t ivar_401;
                                                      uint8_t ivar_403;
                                                      ivar_403 = (uint8_t)46;
                                                      ivar_401 = (ivar_1 == ivar_403);
                                                      if (ivar_401){                                               
                                                       sigmatdtest_funtype_0_t ivar_411;
                                                       sigmatdtest_closure_6_t cl38965;
                                                       cl38965 = new_sigmatdtest_closure_6();
                                                       ivar_411 = (sigmatdtest_funtype_0_t)cl38965;
                                                       result = (sigmatopdown__peg_adt_t)sigmatopdown__any((sigmatopdown_funtype_29_t)ivar_411);
} else {
                                                      
                                                       result = (sigmatopdown__peg_adt_t)sigmatopdown__epsilon();
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
};
};

        
        return result;
}

extern sigmatdtest_array_7_t sigmatdtest__empty(uint8_t ivar_1){
        sigmatdtest_array_7_t  result;
        uint32_t size38972;
        //copying to uint32 from uint8;
        size38972 = (uint32_t)ivar_1;
        size38972 += 0;
        result = new_sigmatdtest_array_7(size38972);
        uint8_t ivar_2;
        for (uint32_t index38971 = 0; index38971 < size38972; index38971++){
             ivar_2 = (uint8_t)index38971;
             result->elems[index38971] = (uint8_t)32;
        };

        
        return result;
}

extern sigmatdtest_funtype_9_t sigmatdtest__cat(uint8_t ivar_1, uint8_t ivar_2){
        sigmatdtest_funtype_9_t  result;
        sigmatdtest_closure_10_t cl39004;
        cl39004 = new_sigmatdtest_closure_10();
        cl39004->fvar_1 = (uint8_t)ivar_1;
        cl39004->fvar_2 = (uint8_t)ivar_2;
        result = (sigmatdtest_funtype_9_t)cl39004;

        
        return result;
}

extern uint8_t sigmatdtest__tok0(uint8_t ivar_1){
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

extern uint8_t sigmatdtest__tok1(uint8_t ivar_1){
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

extern uint8_t sigmatdtest__emptydict(uint8_t ivar_1){
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

extern uint8_t sigmatdtest__obrace(uint8_t ivar_1){
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

extern uint8_t sigmatdtest__cbrace(uint8_t ivar_1){
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

extern uint8_t sigmatdtest__colon(uint8_t ivar_1){
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

extern sigmatdtest_array_7_t sigmatdtest__emptydict2(void){
        sigmatdtest_array_7_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    sigmatdtest_funtype_9_t ivar_7;
        uint8_t ivar_12;
        ivar_12 = (uint8_t)3;
        uint8_t ivar_13;
        ivar_13 = (uint8_t)3;
        ivar_7 = (sigmatdtest_funtype_9_t)sigmatdtest__cat((uint8_t)ivar_12, (uint8_t)ivar_13);
        sigmatdtest_array_7_t ivar_26;
        ivar_26 = new_sigmatdtest_array_7(3);
        uint8_t ivar_3;
        for (uint32_t index39014 = 0; index39014 < 3; index39014++){
             ivar_3 = (uint8_t)index39014;
             ivar_26->elems[index39014] = (uint8_t)sigmatdtest__obrace((uint8_t)ivar_3);
        };
        sigmatdtest_array_7_t ivar_27;
        ivar_27 = new_sigmatdtest_array_7(3);
        uint8_t ivar_4;
        for (uint32_t index39015 = 0; index39015 < 3; index39015++){
             ivar_4 = (uint8_t)index39015;
             ivar_27->elems[index39015] = (uint8_t)sigmatdtest__cbrace((uint8_t)ivar_4);
        };
        result = (sigmatdtest_array_7_t)ivar_7->ftbl->mptr(ivar_7, ivar_26, ivar_27);
        ivar_7->ftbl->rptr(ivar_7);

        defined = true;};
        
        return result;
}

extern sigmatdtest_array_7_t sigmatdtest__dict1(void){
        sigmatdtest_array_7_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    sigmatdtest_funtype_9_t ivar_84;
        uint8_t ivar_89;
        ivar_89 = (uint8_t)3;
        uint8_t ivar_90;
        ivar_90 = (uint8_t)19;
        ivar_84 = (sigmatdtest_funtype_9_t)sigmatdtest__cat((uint8_t)ivar_89, (uint8_t)ivar_90);
        sigmatdtest_array_7_t ivar_103;
        ivar_103 = new_sigmatdtest_array_7(3);
        uint8_t ivar_3;
        for (uint32_t index39040 = 0; index39040 < 3; index39040++){
             ivar_3 = (uint8_t)index39040;
             ivar_103->elems[index39040] = (uint8_t)sigmatdtest__obrace((uint8_t)ivar_3);
        };
        sigmatdtest_array_7_t ivar_104;
        sigmatdtest_funtype_9_t ivar_61;
        uint8_t ivar_66;
        ivar_66 = (uint8_t)7;
        uint8_t ivar_67;
        ivar_67 = (uint8_t)12;
        ivar_61 = (sigmatdtest_funtype_9_t)sigmatdtest__cat((uint8_t)ivar_66, (uint8_t)ivar_67);
        sigmatdtest_array_7_t ivar_80;
        ivar_80 = new_sigmatdtest_array_7(7);
        uint8_t ivar_6;
        for (uint32_t index39045 = 0; index39045 < 7; index39045++){
             ivar_6 = (uint8_t)index39045;
             ivar_80->elems[index39045] = (uint8_t)sigmatdtest__tok0((uint8_t)ivar_6);
        };
        sigmatdtest_array_7_t ivar_81;
        sigmatdtest_funtype_9_t ivar_38;
        uint8_t ivar_43;
        ivar_43 = (uint8_t)3;
        uint8_t ivar_44;
        ivar_44 = (uint8_t)9;
        ivar_38 = (sigmatdtest_funtype_9_t)sigmatdtest__cat((uint8_t)ivar_43, (uint8_t)ivar_44);
        sigmatdtest_array_7_t ivar_57;
        ivar_57 = new_sigmatdtest_array_7(3);
        uint8_t ivar_9;
        for (uint32_t index39050 = 0; index39050 < 3; index39050++){
             ivar_9 = (uint8_t)index39050;
             ivar_57->elems[index39050] = (uint8_t)sigmatdtest__colon((uint8_t)ivar_9);
        };
        sigmatdtest_array_7_t ivar_58;
        sigmatdtest_funtype_9_t ivar_15;
        uint8_t ivar_20;
        ivar_20 = (uint8_t)6;
        uint8_t ivar_21;
        ivar_21 = (uint8_t)3;
        ivar_15 = (sigmatdtest_funtype_9_t)sigmatdtest__cat((uint8_t)ivar_20, (uint8_t)ivar_21);
        sigmatdtest_array_7_t ivar_34;
        ivar_34 = (sigmatdtest_array_7_t)sigmatdtest__emptydict2();
        if (ivar_34 != NULL) ivar_34->count++;
        sigmatdtest_array_7_t ivar_35;
        ivar_35 = new_sigmatdtest_array_7(3);
        uint8_t ivar_12;
        for (uint32_t index39055 = 0; index39055 < 3; index39055++){
             ivar_12 = (uint8_t)index39055;
             ivar_35->elems[index39055] = (uint8_t)sigmatdtest__cbrace((uint8_t)ivar_12);
        };
        ivar_58 = (sigmatdtest_array_7_t)ivar_15->ftbl->mptr(ivar_15, ivar_34, ivar_35);
        ivar_15->ftbl->rptr(ivar_15);
        ivar_81 = (sigmatdtest_array_7_t)ivar_38->ftbl->mptr(ivar_38, ivar_57, ivar_58);
        ivar_38->ftbl->rptr(ivar_38);
        ivar_104 = (sigmatdtest_array_7_t)ivar_61->ftbl->mptr(ivar_61, ivar_80, ivar_81);
        ivar_61->ftbl->rptr(ivar_61);
        result = (sigmatdtest_array_7_t)ivar_84->ftbl->mptr(ivar_84, ivar_103, ivar_104);
        ivar_84->ftbl->rptr(ivar_84);

        defined = true;};
        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatdtest__test0(void){
        sigmatopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_15;
        ivar_15 = (uint8_t)2;
        uint32_t ivar_10;
        //copying to uint32 from uint8;
        ivar_10 = (uint32_t)ivar_15;
        sigmatopdown__lang_spec_t ivar_11;
        ivar_11 = new_sigmatdtest_array_11(255);
        uint8_t ivar_5;
        for (uint32_t index39063 = 0; index39063 < 255; index39063++){
             ivar_5 = (uint8_t)index39063;
             ivar_11->elems[index39063] = (sigmatopdown__peg_adt_t)sigmatdtest__pyaml((uint8_t)ivar_5);
        };
        sigmatdtest_array_7_t ivar_12;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)2;
        ivar_12 = (sigmatdtest_array_7_t)sigmatdtest__empty((uint8_t)ivar_8);
        uint8_t ivar_13;
        ivar_13 = (uint8_t)7;
        result = (sigmatopdown__ent_adt_t)sigmatopdown__doparse((uint32_t)ivar_10, (sigmatopdown__lang_spec_t)ivar_11, (sigmatopdown_array_86_t)ivar_12, (uint8_t)ivar_13);

        defined = true;};
        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatdtest__test1(void){
        sigmatopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_13;
        ivar_13 = (uint8_t)7;
        uint32_t ivar_8;
        //copying to uint32 from uint8;
        ivar_8 = (uint32_t)ivar_13;
        sigmatopdown__lang_spec_t ivar_9;
        ivar_9 = new_sigmatdtest_array_11(255);
        uint8_t ivar_5;
        for (uint32_t index39072 = 0; index39072 < 255; index39072++){
             ivar_5 = (uint8_t)index39072;
             ivar_9->elems[index39072] = (sigmatopdown__peg_adt_t)sigmatdtest__pyaml((uint8_t)ivar_5);
        };
        sigmatdtest_array_7_t ivar_10;
        uint32_t size39076;
        //copying to uint32 from uint32;
        size39076 = (uint32_t)ivar_8;
        size39076 += 0;
        ivar_10 = new_sigmatdtest_array_7(size39076);
        uint8_t ivar_6;
        for (uint32_t index39075 = 0; index39075 < size39076; index39075++){
             ivar_6 = (uint8_t)index39075;
             ivar_10->elems[index39075] = (uint8_t)sigmatdtest__tok0((uint8_t)ivar_6);
        };
        uint8_t ivar_11;
        ivar_11 = (uint8_t)17;
        result = (sigmatopdown__ent_adt_t)sigmatopdown__doparse((uint32_t)ivar_8, (sigmatopdown__lang_spec_t)ivar_9, (sigmatopdown_array_86_t)ivar_10, (uint8_t)ivar_11);

        defined = true;};
        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatdtest__test11(void){
        sigmatopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_13;
        ivar_13 = (uint8_t)9;
        uint32_t ivar_8;
        //copying to uint32 from uint8;
        ivar_8 = (uint32_t)ivar_13;
        sigmatopdown__lang_spec_t ivar_9;
        ivar_9 = new_sigmatdtest_array_11(255);
        uint8_t ivar_5;
        for (uint32_t index39083 = 0; index39083 < 255; index39083++){
             ivar_5 = (uint8_t)index39083;
             ivar_9->elems[index39083] = (sigmatopdown__peg_adt_t)sigmatdtest__pyaml((uint8_t)ivar_5);
        };
        sigmatdtest_array_7_t ivar_10;
        uint32_t size39087;
        //copying to uint32 from uint32;
        size39087 = (uint32_t)ivar_8;
        size39087 += 0;
        ivar_10 = new_sigmatdtest_array_7(size39087);
        uint8_t ivar_6;
        for (uint32_t index39086 = 0; index39086 < size39087; index39086++){
             ivar_6 = (uint8_t)index39086;
             ivar_10->elems[index39086] = (uint8_t)sigmatdtest__tok1((uint8_t)ivar_6);
        };
        uint8_t ivar_11;
        ivar_11 = (uint8_t)17;
        result = (sigmatopdown__ent_adt_t)sigmatopdown__doparse((uint32_t)ivar_8, (sigmatopdown__lang_spec_t)ivar_9, (sigmatopdown_array_86_t)ivar_10, (uint8_t)ivar_11);

        defined = true;};
        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatdtest__test2(void){
        sigmatopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_12;
        ivar_12 = (uint8_t)22;
        uint32_t ivar_7;
        //copying to uint32 from uint8;
        ivar_7 = (uint32_t)ivar_12;
        sigmatopdown__lang_spec_t ivar_8;
        ivar_8 = new_sigmatdtest_array_11(255);
        uint8_t ivar_5;
        for (uint32_t index39094 = 0; index39094 < 255; index39094++){
             ivar_5 = (uint8_t)index39094;
             ivar_8->elems[index39094] = (sigmatopdown__peg_adt_t)sigmatdtest__pyaml((uint8_t)ivar_5);
        };
        sigmatdtest_array_7_t ivar_9;
        ivar_9 = (sigmatdtest_array_7_t)sigmatdtest__dict1();
        if (ivar_9 != NULL) ivar_9->count++;
        uint8_t ivar_10;
        ivar_10 = (uint8_t)0;
        result = (sigmatopdown__ent_adt_t)sigmatopdown__doparse((uint32_t)ivar_7, (sigmatopdown__lang_spec_t)ivar_8, (sigmatopdown_array_86_t)ivar_9, (uint8_t)ivar_10);

        defined = true;};
        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatdtest__iparse(uint8_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatdtest_array_7_t ivar_3, uint8_t ivar_4, uint8_t ivar_5){
        sigmatopdown__ent_adt_t  result;
        /* pend */ sigmatdtest_funtype_12_t ivar_6;
        sigmatdtest_closure_13_t cl39148;
        cl39148 = new_sigmatdtest_closure_13();
        ivar_6 = (sigmatdtest_funtype_12_t)cl39148;
        sigmatdtest_record_15_t ivar_79;
        uint8_t ivar_17;
        ivar_17 = (uint8_t)1;
        bool_t ivar_18;
        ivar_18 = (bool_t) false;
        sigmatdtest_funtype_14_t ivar_46;
        sigmatopdown__ent_adt_t ivar_26;
        uint8_t ivar_33;
        ivar_33 = (uint8_t)0;
        uint32_t ivar_30;
        //copying to uint32 from uint8;
        ivar_30 = (uint32_t)ivar_33;
        uint8_t ivar_31;
        ivar_31 = (uint8_t)sigmatopdown__num_non_terminals();
        ivar_26 = (sigmatopdown__ent_adt_t)sigmatopdown__push((uint32_t)ivar_30, (uint8_t)ivar_31);
        sigmatdtest_funtype_14_t ivar_34;
        sigmatdtest_closure_16_t cl39170;
        cl39170 = new_sigmatdtest_closure_16();
        cl39170->fvar_1 = (uint8_t)ivar_1;
        cl39170->fvar_2 = (sigmatdtest_funtype_12_t)ivar_6;
        if (cl39170->fvar_2 != NULL) cl39170->fvar_2->count++;
        release_sigmatdtest_funtype_12(ivar_6);
        ivar_34 = (sigmatdtest_funtype_14_t)cl39170;
        sigmatdtest_funtype_12_t ivar_35;
        ivar_35 = (sigmatdtest_funtype_12_t)ivar_34->ftbl->fptr(ivar_34, ivar_4);
        sigmatdtest_funtype_14_t ivar_42;
        sigmatdtest_funtype_12_t ivar_44;
        ivar_44 = NULL;
        ivar_42 = (sigmatdtest_funtype_14_t)update_sigmatdtest_funtype_14(ivar_34, ivar_4, ivar_44);
        if (ivar_44 != NULL) ivar_44->count--;
        sigmatdtest_funtype_12_t ivar_43;
        sigmatdtest_funtype_12_t ivar_38;
        sigmatopdown__ent_adt_t ivar_40;
        ivar_40 = NULL;
        ivar_38 = (sigmatdtest_funtype_12_t)update_sigmatdtest_funtype_12(ivar_35, ivar_5, ivar_40);
        if (ivar_40 != NULL) ivar_40->count--;
        ivar_43 = (sigmatdtest_funtype_12_t)update_sigmatdtest_funtype_12(ivar_38, ivar_5, ivar_26);
        if (ivar_26 != NULL) ivar_26->count--;
        ivar_46 = (sigmatdtest_funtype_14_t)update_sigmatdtest_funtype_14(ivar_42, ivar_4, ivar_43);
        if (ivar_43 != NULL) ivar_43->count--;
        sigmatopdown__ent_adt_t ivar_52;
        uint32_t ivar_50;
        //copying to uint32 from uint8;
        ivar_50 = (uint32_t)ivar_4;
        ivar_52 = (sigmatopdown__ent_adt_t)sigmatopdown__push((uint32_t)ivar_50, (uint8_t)ivar_5);
        sigmatdtest_record_15_t tmp39204 = new_sigmatdtest_record_15();;
        ivar_79 = (sigmatdtest_record_15_t)tmp39204;
        tmp39204->depth = (uint8_t)ivar_17;
        tmp39204->lflag = (bool_t)ivar_18;
        tmp39204->scaf = (sigmatdtest_funtype_14_t)ivar_46;
        tmp39204->stack = (sigmatopdown__ent_adt_t)ivar_52;
        /* St */ sigmatdtest_record_19_t ivar_11;
        //copying to sigmatdtest_record_19 from sigmatdtest_record_15;
        {
         ivar_11 = new_sigmatdtest_record_19();
         uint32_t tmp39225;
         //copying to uint32 from uint8;
         tmp39225 = (uint32_t)ivar_1;
         tmp39225 += 1;
         ivar_11->scaf = new_sigmatdtest_array_18(tmp39225);
         for (uint32_t index_80 = 0; index_80 < tmp39225; index_80++){
                 uint32_t tmp39227;
                 tmp39227 = (uint32_t)255;
                 ivar_11->scaf->elems[index_80] = new_sigmatdtest_array_17(tmp39227);
                 for (uint32_t index_81 = 0; index_81 < tmp39227; index_81++){
                  ivar_11->scaf->elems[index_80]->elems[index_81] = (sigmatopdown__ent_adt_t)ivar_79->scaf->ftbl->fptr(ivar_79->scaf, index_80)->ftbl->fptr(ivar_79->scaf->ftbl->fptr(ivar_79->scaf, index_80), index_81);
                  if (ivar_11->scaf->elems[index_80]->elems[index_81] != NULL) ivar_11->scaf->elems[index_80]->elems[index_81]->count++;
                 };
         };
         ivar_11->depth = (uint64_t)ivar_79->depth;
         ivar_11->stack = (sigmatopdown__ent_adt_t)ivar_79->stack;
         if (ivar_11->stack != NULL) ivar_11->stack->count++;
         ivar_11->lflag = (bool_t)ivar_79->lflag;
        };
        release_sigmatdtest_record_15(ivar_79);
        sigmatdtest_array_17_t ivar_55;
        sigmatdtest_array_18_t ivar_59;
        sigmatdtest_record_19_t ivar_75;
        uint32_t ivar_68;
        //copying to uint32 from uint8;
        ivar_68 = (uint32_t)ivar_1;
        uint32_t ivar_71;
        //copying to uint32 from uint8;
        ivar_71 = (uint32_t)ivar_4;
        ivar_75 = (sigmatdtest_record_19_t)sigmatopdown__parse((uint32_t)ivar_68, (sigmatopdown__lang_spec_t)ivar_2, (sigmatopdown_array_86_t)ivar_3, (uint32_t)ivar_71, (uint8_t)ivar_5, (sigmatopdown_record_104_t)ivar_11);
        ivar_59 = (sigmatdtest_array_18_t)ivar_75->scaf;
        ivar_59->count++;
        release_sigmatdtest_record_19(ivar_75);
        ivar_55 = (sigmatdtest_array_17_t)ivar_59->elems[ivar_4];
        ivar_55->count++;
        release_sigmatdtest_array_18(ivar_59);
        result = (sigmatopdown__ent_adt_t)ivar_55->elems[ivar_5];
        result->count++;
        release_sigmatdtest_array_17(ivar_55);

        
        return result;
}

extern sigmatdproof__parsetree_adt_t sigmatdtest__jsonparsefile(bytestrings__bytestring_t ivar_1){
        sigmatdproof__parsetree_adt_t  result;
        /* lf */ file__lifted_file_adt_t ivar_2;
        ivar_2 = (file__lifted_file_adt_t)file__open((bytestrings__bytestring_t)ivar_1);
        bool_t ivar_6;
        ivar_2->count++;
        ivar_6 = (bool_t)r_file__passp((file__lifted_file_adt_t)ivar_2);
        if (ivar_6){ 
             /* f */ file__file_t ivar_10;
             ivar_10 = (file__file_t)file__lifted_file_adt_contents((file__lifted_file_adt_t)ivar_2);
             /* fs */ uint32_t ivar_14;
             ivar_10->count++;
             ivar_14 = (uint32_t)file__file_size((file__file_t)ivar_10);
             /* fstr */ bytestrings__bytestring_t ivar_18;
             uint8_t ivar_36;
             ivar_36 = (uint8_t)0;
             uint32_t ivar_24;
             //copying to uint32 from uint8;
             ivar_24 = (uint32_t)ivar_36;
             ivar_10->count++;
             ivar_18 = (bytestrings__bytestring_t)file__getbytestring((file__file_t)ivar_10, (uint32_t)ivar_24, (uint32_t)ivar_14);
             /* pend */ sigmatdtest_funtype_12_t ivar_37;
             sigmatdtest_closure_20_t cl39349;
             cl39349 = new_sigmatdtest_closure_20();
             ivar_37 = (sigmatdtest_funtype_12_t)cl39349;
             sigmatdtest_record_22_t ivar_138;
             uint8_t ivar_48;
             ivar_48 = (uint8_t)1;
             bool_t ivar_49;
             ivar_49 = (bool_t) false;
             sigmatdtest_funtype_21_t ivar_77;
             sigmatopdown__ent_adt_t ivar_57;
             uint8_t ivar_64;
             ivar_64 = (uint8_t)0;
             uint32_t ivar_61;
             //copying to uint32 from uint8;
             ivar_61 = (uint32_t)ivar_64;
             uint8_t ivar_62;
             ivar_62 = (uint8_t)sigmatopdown__num_non_terminals();
             ivar_57 = (sigmatopdown__ent_adt_t)sigmatopdown__push((uint32_t)ivar_61, (uint8_t)ivar_62);
             sigmatdtest_funtype_21_t ivar_65;
             sigmatdtest_closure_23_t cl39371;
             cl39371 = new_sigmatdtest_closure_23();
             cl39371->fvar_1 = (uint32_t)ivar_14;
             cl39371->fvar_2 = (sigmatdtest_funtype_12_t)ivar_37;
             if (cl39371->fvar_2 != NULL) cl39371->fvar_2->count++;
             release_sigmatdtest_funtype_12(ivar_37);
             ivar_65 = (sigmatdtest_funtype_21_t)cl39371;
             uint32_t ivar_72;
             ivar_72 = (uint32_t)0;
             sigmatdtest_funtype_12_t ivar_66;
             ivar_66 = (sigmatdtest_funtype_12_t)ivar_65->ftbl->fptr(ivar_65, ivar_72);
             sigmatdtest_funtype_21_t ivar_73;
             sigmatdtest_funtype_12_t ivar_75;
             ivar_75 = NULL;
             ivar_73 = (sigmatdtest_funtype_21_t)update_sigmatdtest_funtype_21(ivar_65, ivar_72, ivar_75);
             if (ivar_75 != NULL) ivar_75->count--;
             sigmatdtest_funtype_12_t ivar_74;
             uint8_t ivar_68;
             ivar_68 = (uint8_t)0;
             sigmatdtest_funtype_12_t ivar_69;
             sigmatopdown__ent_adt_t ivar_71;
             ivar_71 = NULL;
             ivar_69 = (sigmatdtest_funtype_12_t)update_sigmatdtest_funtype_12(ivar_66, ivar_68, ivar_71);
             if (ivar_71 != NULL) ivar_71->count--;
             ivar_74 = (sigmatdtest_funtype_12_t)update_sigmatdtest_funtype_12(ivar_69, ivar_68, ivar_57);
             if (ivar_57 != NULL) ivar_57->count--;
             ivar_77 = (sigmatdtest_funtype_21_t)update_sigmatdtest_funtype_21(ivar_73, ivar_72, ivar_74);
             if (ivar_74 != NULL) ivar_74->count--;
             sigmatopdown__ent_adt_t ivar_85;
             uint8_t ivar_84;
             ivar_84 = (uint8_t)0;
             uint32_t ivar_81;
             //copying to uint32 from uint8;
             ivar_81 = (uint32_t)ivar_84;
             uint8_t ivar_82;
             ivar_82 = (uint8_t)0;
             ivar_85 = (sigmatopdown__ent_adt_t)sigmatopdown__push((uint32_t)ivar_81, (uint8_t)ivar_82);
             sigmatdtest_record_22_t tmp39405 = new_sigmatdtest_record_22();;
             ivar_138 = (sigmatdtest_record_22_t)tmp39405;
             tmp39405->depth = (uint8_t)ivar_48;
             tmp39405->lflag = (bool_t)ivar_49;
             tmp39405->scaf = (sigmatdtest_funtype_21_t)ivar_77;
             tmp39405->stack = (sigmatopdown__ent_adt_t)ivar_85;
             /* St */ sigmatdtest_record_19_t ivar_42;
             //copying to sigmatdtest_record_19 from sigmatdtest_record_22;
             {
          ivar_42 = new_sigmatdtest_record_19();
          uint32_t tmp39422;
          //copying to uint32 from uint32;
          tmp39422 = (uint32_t)ivar_14;
          tmp39422 += 1;
          ivar_42->scaf = new_sigmatdtest_array_18(tmp39422);
          for (uint32_t index_147 = 0; index_147 < tmp39422; index_147++){
                  uint32_t tmp39424;
                  tmp39424 = (uint32_t)255;
                  ivar_42->scaf->elems[index_147] = new_sigmatdtest_array_17(tmp39424);
                  for (uint32_t index_148 = 0; index_148 < tmp39424; index_148++){
                   ivar_42->scaf->elems[index_147]->elems[index_148] = (sigmatopdown__ent_adt_t)ivar_138->scaf->ftbl->fptr(ivar_138->scaf, index_147)->ftbl->fptr(ivar_138->scaf->ftbl->fptr(ivar_138->scaf, index_147), index_148);
                   if (ivar_42->scaf->elems[index_147]->elems[index_148] != NULL) ivar_42->scaf->elems[index_147]->elems[index_148]->count++;
                  };
          };
          ivar_42->depth = (uint64_t)ivar_138->depth;
          ivar_42->stack = (sigmatopdown__ent_adt_t)ivar_138->stack;
          if (ivar_42->stack != NULL) ivar_42->stack->count++;
          ivar_42->lflag = (bool_t)ivar_138->lflag;
             };
             release_sigmatdtest_record_22(ivar_138);
             sigmatdtest_funtype_25_t ivar_114;
             sigmatopdown__lang_spec_t ivar_128;
             ivar_128 = new_sigmatdtest_array_11(255);
             uint8_t ivar_122;
             for (uint32_t index39450 = 0; index39450 < 255; index39450++){
           ivar_122 = (uint8_t)index39450;
           ivar_128->elems[index39450] = (sigmatopdown__peg_adt_t)sigmatdtest__pjson((uint8_t)ivar_122);
             };
             sigmatdtest_array_7_t ivar_129;
             ivar_129 = (sigmatdtest_array_7_t)ivar_18->seq;
             ivar_129->count++;
             uint8_t ivar_133;
             ivar_133 = (uint8_t)0;
             uint32_t ivar_130;
             //copying to uint32 from uint8;
             ivar_130 = (uint32_t)ivar_133;
             uint8_t ivar_131;
             ivar_131 = (uint8_t)0;
             ivar_114 = (sigmatdtest_funtype_25_t)sigmatdproof__buildproof((uint32_t)ivar_14, (sigmatopdown__lang_spec_t)ivar_128, (sigmatdproof_array_50_t)ivar_129, (uint32_t)ivar_130, (uint8_t)ivar_131);
             sigmatdtest_record_19_t ivar_134;
             sigmatopdown__lang_spec_t ivar_102;
             ivar_102 = new_sigmatdtest_array_11(255);
             uint8_t ivar_96;
             for (uint32_t index39471 = 0; index39471 < 255; index39471++){
           ivar_96 = (uint8_t)index39471;
           ivar_102->elems[index39471] = (sigmatopdown__peg_adt_t)sigmatdtest__pjson((uint8_t)ivar_96);
             };
             sigmatdtest_array_7_t ivar_103;
             ivar_103 = (sigmatdtest_array_7_t)ivar_18->seq;
             ivar_103->count++;
             release_bytestrings__bytestring(ivar_18);
             uint8_t ivar_109;
             ivar_109 = (uint8_t)0;
             uint32_t ivar_104;
             //copying to uint32 from uint8;
             ivar_104 = (uint32_t)ivar_109;
             uint8_t ivar_105;
             ivar_105 = (uint8_t)0;
             ivar_134 = (sigmatdtest_record_19_t)sigmatopdown__parse((uint32_t)ivar_14, (sigmatopdown__lang_spec_t)ivar_102, (sigmatopdown_array_86_t)ivar_103, (uint32_t)ivar_104, (uint8_t)ivar_105, (sigmatopdown_record_104_t)ivar_42);
             uint8_t ivar_135;
             ivar_135 = (uint8_t)0;
             uint8_t ivar_137;
             ivar_137 = (uint8_t)0;
             uint32_t ivar_136;
             //copying to uint32 from uint8;
             ivar_136 = (uint32_t)ivar_137;
             result = (sigmatdproof__parsetree_adt_t)ivar_114->ftbl->mptr(ivar_114, ivar_134, ivar_135, ivar_136);
             ivar_114->ftbl->rptr(ivar_114);
} else {
        
             release_file__lifted_file_adt(ivar_2);
             sigmatopdown__ent_adt_t ivar_146;
             uint8_t ivar_144;
             ivar_144 = (uint8_t)0;
             uint64_t ivar_142;
             //copying to uint64 from uint8;
             ivar_142 = (uint64_t)ivar_144;
             ivar_146 = (sigmatopdown__ent_adt_t)sigmatopdown__fail((uint64_t)ivar_142);
             result = (sigmatdproof__parsetree_adt_t)sigmatdproof__zero((sigmatopdown__ent_adt_t)ivar_146);
};

        
        return result;
}