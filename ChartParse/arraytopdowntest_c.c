//Code generated using pvs2ir2c
#include "arraytopdowntest_c.h"

void release_arraytopdowntest_funtype_0(arraytopdowntest_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdowntest_funtype_0_t copy_arraytopdowntest_funtype_0(arraytopdowntest_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_arraytopdowntest_funtype_0(arraytopdowntest_funtype_0_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        arraytopdowntest_funtype_0_hashentry_t data = htbl->data[hashindex];
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

arraytopdowntest_funtype_0_t dupdate_arraytopdowntest_funtype_0(arraytopdowntest_funtype_0_t a, uint8_t i, bool_t v){
        arraytopdowntest_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (arraytopdowntest_funtype_0_htbl_t)safe_malloc(sizeof(struct arraytopdowntest_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (arraytopdowntest_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct arraytopdowntest_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        arraytopdowntest_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                arraytopdowntest_funtype_0_hashentry_t * new_data = (arraytopdowntest_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct arraytopdowntest_funtype_0_hashentry_s));
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
        uint32_t hashindex = lookup_arraytopdowntest_funtype_0(htbl, i, ihash);
        arraytopdowntest_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

arraytopdowntest_funtype_0_t update_arraytopdowntest_funtype_0(arraytopdowntest_funtype_0_t a, uint8_t i, bool_t v){
        if (a->count == 1){
                return dupdate_arraytopdowntest_funtype_0(a, i, v);
            } else {
                arraytopdowntest_funtype_0_t x = copy_arraytopdowntest_funtype_0(a);
                a->count--;
                return dupdate_arraytopdowntest_funtype_0(x, i, v);
            }}

bool_t equal_arraytopdowntest_funtype_0(arraytopdowntest_funtype_0_t x, arraytopdowntest_funtype_0_t y){
        return false;}


bool_t f_arraytopdowntest_closure_1(struct arraytopdowntest_closure_1_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        arraytopdowntest_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_arraytopdowntest_funtype_0(htbl, bvar, hash);
        arraytopdowntest_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_arraytopdowntest_closure_1(bvar);};

return h_arraytopdowntest_closure_1(bvar);}

bool_t m_arraytopdowntest_closure_1(struct arraytopdowntest_closure_1_s * closure, uint8_t bvar){
        return h_arraytopdowntest_closure_1(bvar);}

extern bool_t h_arraytopdowntest_closure_1(uint8_t ivar_26){
        bool_t result;
        result = (bool_t)arraytopdowntest__digit((uint8_t)ivar_26);

        return result;
}

arraytopdowntest_closure_1_t new_arraytopdowntest_closure_1(void){
        static struct arraytopdowntest_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdowntest_funtype_0_t, uint8_t))&f_arraytopdowntest_closure_1, .mptr = (bool_t (*)(arraytopdowntest_funtype_0_t, uint8_t))&m_arraytopdowntest_closure_1, .rptr =  (void (*)(arraytopdowntest_funtype_0_t))&release_arraytopdowntest_closure_1, .cptr = (arraytopdowntest_funtype_0_t (*)(arraytopdowntest_funtype_0_t))&copy_arraytopdowntest_closure_1};
        arraytopdowntest_closure_1_t tmp = (arraytopdowntest_closure_1_t) safe_malloc(sizeof(struct arraytopdowntest_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdowntest_closure_1(arraytopdowntest_funtype_0_t closure){
        arraytopdowntest_closure_1_t x = (arraytopdowntest_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdowntest_closure_1_t copy_arraytopdowntest_closure_1(arraytopdowntest_closure_1_t x){
        arraytopdowntest_closure_1_t y = new_arraytopdowntest_closure_1();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            arraytopdowntest_funtype_0_htbl_t new_htbl = (arraytopdowntest_funtype_0_htbl_t) safe_malloc(sizeof(struct arraytopdowntest_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdowntest_funtype_0_hashentry_t * new_data = (arraytopdowntest_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdowntest_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdowntest_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_arraytopdowntest_closure_2(struct arraytopdowntest_closure_2_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        arraytopdowntest_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_arraytopdowntest_funtype_0(htbl, bvar, hash);
        arraytopdowntest_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_arraytopdowntest_closure_2(bvar);};

return h_arraytopdowntest_closure_2(bvar);}

bool_t m_arraytopdowntest_closure_2(struct arraytopdowntest_closure_2_s * closure, uint8_t bvar){
        return h_arraytopdowntest_closure_2(bvar);}

extern bool_t h_arraytopdowntest_closure_2(uint8_t ivar_238){
        bool_t result;
        result = (bool_t)arraytopdowntest__any((uint8_t)ivar_238);

        return result;
}

arraytopdowntest_closure_2_t new_arraytopdowntest_closure_2(void){
        static struct arraytopdowntest_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdowntest_funtype_0_t, uint8_t))&f_arraytopdowntest_closure_2, .mptr = (bool_t (*)(arraytopdowntest_funtype_0_t, uint8_t))&m_arraytopdowntest_closure_2, .rptr =  (void (*)(arraytopdowntest_funtype_0_t))&release_arraytopdowntest_closure_2, .cptr = (arraytopdowntest_funtype_0_t (*)(arraytopdowntest_funtype_0_t))&copy_arraytopdowntest_closure_2};
        arraytopdowntest_closure_2_t tmp = (arraytopdowntest_closure_2_t) safe_malloc(sizeof(struct arraytopdowntest_closure_2_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdowntest_closure_2(arraytopdowntest_funtype_0_t closure){
        arraytopdowntest_closure_2_t x = (arraytopdowntest_closure_2_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdowntest_closure_2_t copy_arraytopdowntest_closure_2(arraytopdowntest_closure_2_t x){
        arraytopdowntest_closure_2_t y = new_arraytopdowntest_closure_2();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            arraytopdowntest_funtype_0_htbl_t new_htbl = (arraytopdowntest_funtype_0_htbl_t) safe_malloc(sizeof(struct arraytopdowntest_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdowntest_funtype_0_hashentry_t * new_data = (arraytopdowntest_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdowntest_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdowntest_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


arraytopdown__peg_adt_t f_arraytopdowntest_closure_3(struct arraytopdowntest_closure_3_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        arraytopdown__lang_spec_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_arraytopdown__lang_spec(htbl, bvar, hash);
        arraytopdown__lang_spec_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            arraytopdown__peg_adt_t result;
            result = (arraytopdown__peg_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_arraytopdowntest_closure_3(bvar);};

return h_arraytopdowntest_closure_3(bvar);}

arraytopdown__peg_adt_t m_arraytopdowntest_closure_3(struct arraytopdowntest_closure_3_s * closure, uint8_t bvar){
        return h_arraytopdowntest_closure_3(bvar);}

extern arraytopdown__peg_adt_t h_arraytopdowntest_closure_3(uint8_t ivar_6){
        arraytopdown__peg_adt_t result;
        result = (arraytopdown__peg_adt_t)arraytopdowntest__pyaml((uint8_t)ivar_6);

        return result;
}

arraytopdowntest_closure_3_t new_arraytopdowntest_closure_3(void){
        static struct arraytopdown__lang_spec_ftbl_s ftbl = {.fptr = (arraytopdown__peg_adt_t (*)(arraytopdown__lang_spec_t, uint8_t))&f_arraytopdowntest_closure_3, .mptr = (arraytopdown__peg_adt_t (*)(arraytopdown__lang_spec_t, uint8_t))&m_arraytopdowntest_closure_3, .rptr =  (void (*)(arraytopdown__lang_spec_t))&release_arraytopdowntest_closure_3, .cptr = (arraytopdown__lang_spec_t (*)(arraytopdown__lang_spec_t))&copy_arraytopdowntest_closure_3};
        arraytopdowntest_closure_3_t tmp = (arraytopdowntest_closure_3_t) safe_malloc(sizeof(struct arraytopdowntest_closure_3_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdowntest_closure_3(arraytopdown__lang_spec_t closure){
        arraytopdowntest_closure_3_t x = (arraytopdowntest_closure_3_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdowntest_closure_3_t copy_arraytopdowntest_closure_3(arraytopdowntest_closure_3_t x){
        arraytopdowntest_closure_3_t y = new_arraytopdowntest_closure_3();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            arraytopdown__lang_spec_htbl_t new_htbl = (arraytopdown__lang_spec_htbl_t) safe_malloc(sizeof(struct arraytopdown__lang_spec_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown__lang_spec_hashentry_t * new_data = (arraytopdown__lang_spec_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown__lang_spec_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown__lang_spec_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


arraytopdown__peg_adt_t f_arraytopdowntest_closure_4(struct arraytopdowntest_closure_4_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        arraytopdown__lang_spec_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_arraytopdown__lang_spec(htbl, bvar, hash);
        arraytopdown__lang_spec_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            arraytopdown__peg_adt_t result;
            result = (arraytopdown__peg_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_arraytopdowntest_closure_4(bvar);};

return h_arraytopdowntest_closure_4(bvar);}

arraytopdown__peg_adt_t m_arraytopdowntest_closure_4(struct arraytopdowntest_closure_4_s * closure, uint8_t bvar){
        return h_arraytopdowntest_closure_4(bvar);}

extern arraytopdown__peg_adt_t h_arraytopdowntest_closure_4(uint8_t ivar_6){
        arraytopdown__peg_adt_t result;
        result = (arraytopdown__peg_adt_t)arraytopdowntest__pyaml((uint8_t)ivar_6);

        return result;
}

arraytopdowntest_closure_4_t new_arraytopdowntest_closure_4(void){
        static struct arraytopdown__lang_spec_ftbl_s ftbl = {.fptr = (arraytopdown__peg_adt_t (*)(arraytopdown__lang_spec_t, uint8_t))&f_arraytopdowntest_closure_4, .mptr = (arraytopdown__peg_adt_t (*)(arraytopdown__lang_spec_t, uint8_t))&m_arraytopdowntest_closure_4, .rptr =  (void (*)(arraytopdown__lang_spec_t))&release_arraytopdowntest_closure_4, .cptr = (arraytopdown__lang_spec_t (*)(arraytopdown__lang_spec_t))&copy_arraytopdowntest_closure_4};
        arraytopdowntest_closure_4_t tmp = (arraytopdowntest_closure_4_t) safe_malloc(sizeof(struct arraytopdowntest_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdowntest_closure_4(arraytopdown__lang_spec_t closure){
        arraytopdowntest_closure_4_t x = (arraytopdowntest_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdowntest_closure_4_t copy_arraytopdowntest_closure_4(arraytopdowntest_closure_4_t x){
        arraytopdowntest_closure_4_t y = new_arraytopdowntest_closure_4();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            arraytopdown__lang_spec_htbl_t new_htbl = (arraytopdown__lang_spec_htbl_t) safe_malloc(sizeof(struct arraytopdown__lang_spec_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown__lang_spec_hashentry_t * new_data = (arraytopdown__lang_spec_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown__lang_spec_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown__lang_spec_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


arraytopdown__peg_adt_t f_arraytopdowntest_closure_5(struct arraytopdowntest_closure_5_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        arraytopdown__lang_spec_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_arraytopdown__lang_spec(htbl, bvar, hash);
        arraytopdown__lang_spec_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            arraytopdown__peg_adt_t result;
            result = (arraytopdown__peg_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_arraytopdowntest_closure_5(bvar);};

return h_arraytopdowntest_closure_5(bvar);}

arraytopdown__peg_adt_t m_arraytopdowntest_closure_5(struct arraytopdowntest_closure_5_s * closure, uint8_t bvar){
        return h_arraytopdowntest_closure_5(bvar);}

extern arraytopdown__peg_adt_t h_arraytopdowntest_closure_5(uint8_t ivar_6){
        arraytopdown__peg_adt_t result;
        result = (arraytopdown__peg_adt_t)arraytopdowntest__pyaml((uint8_t)ivar_6);

        return result;
}

arraytopdowntest_closure_5_t new_arraytopdowntest_closure_5(void){
        static struct arraytopdown__lang_spec_ftbl_s ftbl = {.fptr = (arraytopdown__peg_adt_t (*)(arraytopdown__lang_spec_t, uint8_t))&f_arraytopdowntest_closure_5, .mptr = (arraytopdown__peg_adt_t (*)(arraytopdown__lang_spec_t, uint8_t))&m_arraytopdowntest_closure_5, .rptr =  (void (*)(arraytopdown__lang_spec_t))&release_arraytopdowntest_closure_5, .cptr = (arraytopdown__lang_spec_t (*)(arraytopdown__lang_spec_t))&copy_arraytopdowntest_closure_5};
        arraytopdowntest_closure_5_t tmp = (arraytopdowntest_closure_5_t) safe_malloc(sizeof(struct arraytopdowntest_closure_5_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdowntest_closure_5(arraytopdown__lang_spec_t closure){
        arraytopdowntest_closure_5_t x = (arraytopdowntest_closure_5_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdowntest_closure_5_t copy_arraytopdowntest_closure_5(arraytopdowntest_closure_5_t x){
        arraytopdowntest_closure_5_t y = new_arraytopdowntest_closure_5();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            arraytopdown__lang_spec_htbl_t new_htbl = (arraytopdown__lang_spec_htbl_t) safe_malloc(sizeof(struct arraytopdown__lang_spec_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown__lang_spec_hashentry_t * new_data = (arraytopdown__lang_spec_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown__lang_spec_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown__lang_spec_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


arraytopdown__peg_adt_t f_arraytopdowntest_closure_6(struct arraytopdowntest_closure_6_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        arraytopdown__lang_spec_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_arraytopdown__lang_spec(htbl, bvar, hash);
        arraytopdown__lang_spec_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            arraytopdown__peg_adt_t result;
            result = (arraytopdown__peg_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_arraytopdowntest_closure_6(bvar);};

return h_arraytopdowntest_closure_6(bvar);}

arraytopdown__peg_adt_t m_arraytopdowntest_closure_6(struct arraytopdowntest_closure_6_s * closure, uint8_t bvar){
        return h_arraytopdowntest_closure_6(bvar);}

extern arraytopdown__peg_adt_t h_arraytopdowntest_closure_6(uint8_t ivar_6){
        arraytopdown__peg_adt_t result;
        result = (arraytopdown__peg_adt_t)arraytopdowntest__pyaml((uint8_t)ivar_6);

        return result;
}

arraytopdowntest_closure_6_t new_arraytopdowntest_closure_6(void){
        static struct arraytopdown__lang_spec_ftbl_s ftbl = {.fptr = (arraytopdown__peg_adt_t (*)(arraytopdown__lang_spec_t, uint8_t))&f_arraytopdowntest_closure_6, .mptr = (arraytopdown__peg_adt_t (*)(arraytopdown__lang_spec_t, uint8_t))&m_arraytopdowntest_closure_6, .rptr =  (void (*)(arraytopdown__lang_spec_t))&release_arraytopdowntest_closure_6, .cptr = (arraytopdown__lang_spec_t (*)(arraytopdown__lang_spec_t))&copy_arraytopdowntest_closure_6};
        arraytopdowntest_closure_6_t tmp = (arraytopdowntest_closure_6_t) safe_malloc(sizeof(struct arraytopdowntest_closure_6_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdowntest_closure_6(arraytopdown__lang_spec_t closure){
        arraytopdowntest_closure_6_t x = (arraytopdowntest_closure_6_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdowntest_closure_6_t copy_arraytopdowntest_closure_6(arraytopdowntest_closure_6_t x){
        arraytopdowntest_closure_6_t y = new_arraytopdowntest_closure_6();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            arraytopdown__lang_spec_htbl_t new_htbl = (arraytopdown__lang_spec_htbl_t) safe_malloc(sizeof(struct arraytopdown__lang_spec_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown__lang_spec_hashentry_t * new_data = (arraytopdown__lang_spec_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown__lang_spec_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown__lang_spec_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_arraytopdowntest_funtype_7(arraytopdowntest_funtype_7_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdowntest_funtype_7_t copy_arraytopdowntest_funtype_7(arraytopdowntest_funtype_7_t x){return x->ftbl->cptr(x);}

uint32_t lookup_arraytopdowntest_funtype_7(arraytopdowntest_funtype_7_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        arraytopdowntest_funtype_7_hashentry_t data = htbl->data[hashindex];
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

arraytopdowntest_funtype_7_t dupdate_arraytopdowntest_funtype_7(arraytopdowntest_funtype_7_t a, uint8_t i, arraytopdown__ent_adt_t v){
        arraytopdowntest_funtype_7_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (arraytopdowntest_funtype_7_htbl_t)safe_malloc(sizeof(struct arraytopdowntest_funtype_7_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (arraytopdowntest_funtype_7_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct arraytopdowntest_funtype_7_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        arraytopdowntest_funtype_7_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                arraytopdowntest_funtype_7_hashentry_t * new_data = (arraytopdowntest_funtype_7_hashentry_t *)safe_malloc(new_size * sizeof(struct arraytopdowntest_funtype_7_hashentry_s));
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
                                new_data[new_loc].value = (arraytopdown__ent_adt_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_arraytopdowntest_funtype_7(htbl, i, ihash);
        arraytopdowntest_funtype_7_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (arraytopdown__ent_adt_t)v; htbl->num_entries++;}
            else {arraytopdown__ent_adt_t tempvalue;tempvalue = (arraytopdown__ent_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (arraytopdown__ent_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_arraytopdown__ent_adt(tempvalue);};
        return a;

}

arraytopdowntest_funtype_7_t update_arraytopdowntest_funtype_7(arraytopdowntest_funtype_7_t a, uint8_t i, arraytopdown__ent_adt_t v){
        if (a->count == 1){
                return dupdate_arraytopdowntest_funtype_7(a, i, v);
            } else {
                arraytopdowntest_funtype_7_t x = copy_arraytopdowntest_funtype_7(a);
                a->count--;
                return dupdate_arraytopdowntest_funtype_7(x, i, v);
            }}

bool_t equal_arraytopdowntest_funtype_7(arraytopdowntest_funtype_7_t x, arraytopdowntest_funtype_7_t y){
        return false;}


arraytopdown__ent_adt_t f_arraytopdowntest_closure_8(struct arraytopdowntest_closure_8_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        arraytopdowntest_funtype_7_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_arraytopdowntest_funtype_7(htbl, bvar, hash);
        arraytopdowntest_funtype_7_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            arraytopdown__ent_adt_t result;
            result = (arraytopdown__ent_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_arraytopdowntest_closure_8(bvar);};

return h_arraytopdowntest_closure_8(bvar);}

arraytopdown__ent_adt_t m_arraytopdowntest_closure_8(struct arraytopdowntest_closure_8_s * closure, uint8_t bvar){
        return h_arraytopdowntest_closure_8(bvar);}

extern arraytopdown__ent_adt_t h_arraytopdowntest_closure_8(uint8_t ivar_9){
        arraytopdown__ent_adt_t result;
        result = (arraytopdown__ent_adt_t)arraytopdown__pending();
        if (result != NULL) result->count++;

        return result;
}

arraytopdowntest_closure_8_t new_arraytopdowntest_closure_8(void){
        static struct arraytopdowntest_funtype_7_ftbl_s ftbl = {.fptr = (arraytopdown__ent_adt_t (*)(arraytopdowntest_funtype_7_t, uint8_t))&f_arraytopdowntest_closure_8, .mptr = (arraytopdown__ent_adt_t (*)(arraytopdowntest_funtype_7_t, uint8_t))&m_arraytopdowntest_closure_8, .rptr =  (void (*)(arraytopdowntest_funtype_7_t))&release_arraytopdowntest_closure_8, .cptr = (arraytopdowntest_funtype_7_t (*)(arraytopdowntest_funtype_7_t))&copy_arraytopdowntest_closure_8};
        arraytopdowntest_closure_8_t tmp = (arraytopdowntest_closure_8_t) safe_malloc(sizeof(struct arraytopdowntest_closure_8_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdowntest_closure_8(arraytopdowntest_funtype_7_t closure){
        arraytopdowntest_closure_8_t x = (arraytopdowntest_closure_8_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdowntest_closure_8_t copy_arraytopdowntest_closure_8(arraytopdowntest_closure_8_t x){
        arraytopdowntest_closure_8_t y = new_arraytopdowntest_closure_8();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            arraytopdowntest_funtype_7_htbl_t new_htbl = (arraytopdowntest_funtype_7_htbl_t) safe_malloc(sizeof(struct arraytopdowntest_funtype_7_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdowntest_funtype_7_hashentry_t * new_data = (arraytopdowntest_funtype_7_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdowntest_funtype_7_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdowntest_funtype_7_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_arraytopdowntest_funtype_9(arraytopdowntest_funtype_9_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdowntest_funtype_9_t copy_arraytopdowntest_funtype_9(arraytopdowntest_funtype_9_t x){return x->ftbl->cptr(x);}

uint32_t lookup_arraytopdowntest_funtype_9(arraytopdowntest_funtype_9_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        arraytopdowntest_funtype_9_hashentry_t data = htbl->data[hashindex];
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

arraytopdowntest_funtype_9_t dupdate_arraytopdowntest_funtype_9(arraytopdowntest_funtype_9_t a, uint8_t i, arraytopdowntest_funtype_7_t v){
        arraytopdowntest_funtype_9_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (arraytopdowntest_funtype_9_htbl_t)safe_malloc(sizeof(struct arraytopdowntest_funtype_9_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (arraytopdowntest_funtype_9_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct arraytopdowntest_funtype_9_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        arraytopdowntest_funtype_9_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                arraytopdowntest_funtype_9_hashentry_t * new_data = (arraytopdowntest_funtype_9_hashentry_t *)safe_malloc(new_size * sizeof(struct arraytopdowntest_funtype_9_hashentry_s));
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
                                new_data[new_loc].value = (arraytopdowntest_funtype_7_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_arraytopdowntest_funtype_9(htbl, i, ihash);
        arraytopdowntest_funtype_9_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (arraytopdowntest_funtype_7_t)v; htbl->num_entries++;}
            else {arraytopdowntest_funtype_7_t tempvalue;tempvalue = (arraytopdowntest_funtype_7_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (arraytopdowntest_funtype_7_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_arraytopdowntest_funtype_7(tempvalue);};
        return a;

}

arraytopdowntest_funtype_9_t update_arraytopdowntest_funtype_9(arraytopdowntest_funtype_9_t a, uint8_t i, arraytopdowntest_funtype_7_t v){
        if (a->count == 1){
                return dupdate_arraytopdowntest_funtype_9(a, i, v);
            } else {
                arraytopdowntest_funtype_9_t x = copy_arraytopdowntest_funtype_9(a);
                a->count--;
                return dupdate_arraytopdowntest_funtype_9(x, i, v);
            }}

bool_t equal_arraytopdowntest_funtype_9(arraytopdowntest_funtype_9_t x, arraytopdowntest_funtype_9_t y){
        return false;}


arraytopdowntest_record_10_t new_arraytopdowntest_record_10(void){
        arraytopdowntest_record_10_t tmp = (arraytopdowntest_record_10_t) safe_malloc(sizeof(struct arraytopdowntest_record_10_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdowntest_record_10(arraytopdowntest_record_10_t x){
        x->count--;
        if (x->count <= 0){
         release_arraytopdowntest_funtype_9(x->scaf);
         release_arraytopdown__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdowntest_record_10_ptr(pointer_t x, type_actual_t T){
        release_arraytopdowntest_record_10((arraytopdowntest_record_10_t)x);
}

arraytopdowntest_record_10_t copy_arraytopdowntest_record_10(arraytopdowntest_record_10_t x){
        arraytopdowntest_record_10_t y = new_arraytopdowntest_record_10();
        y->depth = (uint8_t)x->depth;
        y->lflag = (bool_t)x->lflag;
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->count = 1;
        return y;}

bool_t equal_arraytopdowntest_record_10(arraytopdowntest_record_10_t x, arraytopdowntest_record_10_t y){
        bool_t tmp = true;
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && x->lflag == y->lflag;
        tmp = tmp && equal_arraytopdowntest_funtype_9(x->scaf, y->scaf);
        tmp = tmp && equal_arraytopdown__ent_adt(x->stack, y->stack);
        return tmp;}

bool_t equal_arraytopdowntest_record_10_ptr(pointer_t x, pointer_t y, actual_arraytopdowntest_record_10_t T){
        return equal_arraytopdowntest_record_10((arraytopdowntest_record_10_t)x, (arraytopdowntest_record_10_t)y);
}

actual_arraytopdowntest_record_10_t actual_arraytopdowntest_record_10(){
        actual_arraytopdowntest_record_10_t new = (actual_arraytopdowntest_record_10_t)safe_malloc(sizeof(struct actual_arraytopdowntest_record_10_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdowntest_record_10_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdowntest_record_10_ptr);
 

 
        return new;
 };

arraytopdowntest_record_10_t update_arraytopdowntest_record_10_depth(arraytopdowntest_record_10_t x, uint8_t v){
        arraytopdowntest_record_10_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdowntest_record_10(x); x->count--;};
        y->depth = (uint8_t)v;
        return y;}

arraytopdowntest_record_10_t update_arraytopdowntest_record_10_lflag(arraytopdowntest_record_10_t x, bool_t v){
        arraytopdowntest_record_10_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdowntest_record_10(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}

arraytopdowntest_record_10_t update_arraytopdowntest_record_10_scaf(arraytopdowntest_record_10_t x, arraytopdowntest_funtype_9_t v){
        arraytopdowntest_record_10_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_arraytopdowntest_funtype_9(x->scaf);};}
        else {y = copy_arraytopdowntest_record_10(x); x->count--; y->scaf->count--;};
        y->scaf = (arraytopdowntest_funtype_9_t)v;
        return y;}

arraytopdowntest_record_10_t update_arraytopdowntest_record_10_stack(arraytopdowntest_record_10_t x, arraytopdown__ent_adt_t v){
        arraytopdowntest_record_10_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_arraytopdown__ent_adt(x->stack);};}
        else {y = copy_arraytopdowntest_record_10(x); x->count--; y->stack->count--;};
        y->stack = (arraytopdown__ent_adt_t)v;
        return y;}




arraytopdowntest_funtype_7_t f_arraytopdowntest_closure_11(struct arraytopdowntest_closure_11_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        arraytopdowntest_funtype_9_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_arraytopdowntest_funtype_9(htbl, bvar, hash);
        arraytopdowntest_funtype_9_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            arraytopdowntest_funtype_7_t result;
            result = (arraytopdowntest_funtype_7_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_arraytopdowntest_closure_11(bvar, closure->fvar_1);};

return h_arraytopdowntest_closure_11(bvar, closure->fvar_1);}

arraytopdowntest_funtype_7_t m_arraytopdowntest_closure_11(struct arraytopdowntest_closure_11_s * closure, uint8_t bvar){
        return h_arraytopdowntest_closure_11(bvar, closure->fvar_1);}

extern arraytopdowntest_funtype_7_t h_arraytopdowntest_closure_11(uint8_t ivar_20, arraytopdowntest_funtype_7_t ivar_6){
        arraytopdowntest_funtype_7_t result;
        //copying to arraytopdowntest_funtype_7 from arraytopdowntest_funtype_7;
        result = (arraytopdowntest_funtype_7_t)ivar_6;
        if (result != NULL) result->count++;

        return result;
}

arraytopdowntest_closure_11_t new_arraytopdowntest_closure_11(void){
        static struct arraytopdowntest_funtype_9_ftbl_s ftbl = {.fptr = (arraytopdowntest_funtype_7_t (*)(arraytopdowntest_funtype_9_t, uint8_t))&f_arraytopdowntest_closure_11, .mptr = (arraytopdowntest_funtype_7_t (*)(arraytopdowntest_funtype_9_t, uint8_t))&m_arraytopdowntest_closure_11, .rptr =  (void (*)(arraytopdowntest_funtype_9_t))&release_arraytopdowntest_closure_11, .cptr = (arraytopdowntest_funtype_9_t (*)(arraytopdowntest_funtype_9_t))&copy_arraytopdowntest_closure_11};
        arraytopdowntest_closure_11_t tmp = (arraytopdowntest_closure_11_t) safe_malloc(sizeof(struct arraytopdowntest_closure_11_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdowntest_closure_11(arraytopdowntest_funtype_9_t closure){
        arraytopdowntest_closure_11_t x = (arraytopdowntest_closure_11_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdowntest_funtype_7(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdowntest_closure_11_t copy_arraytopdowntest_closure_11(arraytopdowntest_closure_11_t x){
        arraytopdowntest_closure_11_t y = new_arraytopdowntest_closure_11();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            arraytopdowntest_funtype_9_htbl_t new_htbl = (arraytopdowntest_funtype_9_htbl_t) safe_malloc(sizeof(struct arraytopdowntest_funtype_9_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdowntest_funtype_9_hashentry_t * new_data = (arraytopdowntest_funtype_9_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdowntest_funtype_9_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdowntest_funtype_9_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


arraytopdowntest_array_12_t new_arraytopdowntest_array_12(uint32_t size){
        arraytopdowntest_array_12_t tmp = (arraytopdowntest_array_12_t) safe_malloc(sizeof(struct arraytopdowntest_array_12_s) + (size * sizeof(arraytopdowntest_funtype_7_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_arraytopdowntest_array_12(arraytopdowntest_array_12_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_arraytopdowntest_funtype_7(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_arraytopdowntest_array_12_ptr(pointer_t x, type_actual_t T){
        release_arraytopdowntest_array_12((arraytopdowntest_array_12_t)x);
}

arraytopdowntest_array_12_t copy_arraytopdowntest_array_12(arraytopdowntest_array_12_t x){
        arraytopdowntest_array_12_t tmp = new_arraytopdowntest_array_12(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_arraytopdowntest_array_12(arraytopdowntest_array_12_t x, arraytopdowntest_array_12_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_arraytopdowntest_funtype_7(x->elems[i], y->elems[i]);};
        return tmp;}

bool_t equal_arraytopdowntest_array_12_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_arraytopdowntest_array_12((arraytopdowntest_array_12_t)x, (arraytopdowntest_array_12_t)y);
}

actual_arraytopdowntest_array_12_t actual_arraytopdowntest_array_12(){
        actual_arraytopdowntest_array_12_t new = (actual_arraytopdowntest_array_12_t)safe_malloc(sizeof(struct actual_arraytopdowntest_array_12_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdowntest_array_12_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdowntest_array_12_ptr);
 

 
        return new;
 };

arraytopdowntest_array_12_t update_arraytopdowntest_array_12(arraytopdowntest_array_12_t x, uint32_t i, arraytopdowntest_funtype_7_t v){
         arraytopdowntest_array_12_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_arraytopdowntest_array_12(x);
                      x->count--;};
        arraytopdowntest_funtype_7_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_arraytopdowntest_funtype_7(yelems[i]);};
         yelems[i] = v;
         return y;}

arraytopdowntest_array_12_t upgrade_arraytopdowntest_array_12(arraytopdowntest_array_12_t x, uint32_t i, arraytopdowntest_funtype_7_t v){
         arraytopdowntest_array_12_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct arraytopdowntest_array_12_s) + (newmax * sizeof(arraytopdowntest_funtype_7_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_arraytopdowntest_array_12(x);} else {y = copy_arraytopdowntest_array_12(x);
                      x->count--;};
        arraytopdowntest_funtype_7_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_arraytopdowntest_funtype_7(yelems[i]);};
         yelems[i] = v;
         return y;}




arraytopdowntest_record_13_t new_arraytopdowntest_record_13(void){
        arraytopdowntest_record_13_t tmp = (arraytopdowntest_record_13_t) safe_malloc(sizeof(struct arraytopdowntest_record_13_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdowntest_record_13(arraytopdowntest_record_13_t x){
        x->count--;
        if (x->count <= 0){
         release_arraytopdowntest_array_12(x->scaf);
         release_arraytopdown__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdowntest_record_13_ptr(pointer_t x, type_actual_t T){
        release_arraytopdowntest_record_13((arraytopdowntest_record_13_t)x);
}

arraytopdowntest_record_13_t copy_arraytopdowntest_record_13(arraytopdowntest_record_13_t x){
        arraytopdowntest_record_13_t y = new_arraytopdowntest_record_13();
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->depth = (uint64_t)x->depth;
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->lflag = (bool_t)x->lflag;
        y->count = 1;
        return y;}

bool_t equal_arraytopdowntest_record_13(arraytopdowntest_record_13_t x, arraytopdowntest_record_13_t y){
        bool_t tmp = true;
        tmp = tmp && equal_arraytopdowntest_array_12(x->scaf, y->scaf);
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && equal_arraytopdown__ent_adt(x->stack, y->stack);
        tmp = tmp && x->lflag == y->lflag;
        return tmp;}

bool_t equal_arraytopdowntest_record_13_ptr(pointer_t x, pointer_t y, actual_arraytopdowntest_record_13_t T){
        return equal_arraytopdowntest_record_13((arraytopdowntest_record_13_t)x, (arraytopdowntest_record_13_t)y);
}

actual_arraytopdowntest_record_13_t actual_arraytopdowntest_record_13(){
        actual_arraytopdowntest_record_13_t new = (actual_arraytopdowntest_record_13_t)safe_malloc(sizeof(struct actual_arraytopdowntest_record_13_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdowntest_record_13_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdowntest_record_13_ptr);
 

 
        return new;
 };

arraytopdowntest_record_13_t update_arraytopdowntest_record_13_scaf(arraytopdowntest_record_13_t x, arraytopdowntest_array_12_t v){
        arraytopdowntest_record_13_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_arraytopdowntest_array_12(x->scaf);};}
        else {y = copy_arraytopdowntest_record_13(x); x->count--; y->scaf->count--;};
        y->scaf = (arraytopdowntest_array_12_t)v;
        return y;}

arraytopdowntest_record_13_t update_arraytopdowntest_record_13_depth(arraytopdowntest_record_13_t x, uint64_t v){
        arraytopdowntest_record_13_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdowntest_record_13(x); x->count--;};
        y->depth = (uint64_t)v;
        return y;}

arraytopdowntest_record_13_t update_arraytopdowntest_record_13_stack(arraytopdowntest_record_13_t x, arraytopdown__ent_adt_t v){
        arraytopdowntest_record_13_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_arraytopdown__ent_adt(x->stack);};}
        else {y = copy_arraytopdowntest_record_13(x); x->count--; y->stack->count--;};
        y->stack = (arraytopdown__ent_adt_t)v;
        return y;}

arraytopdowntest_record_13_t update_arraytopdowntest_record_13_lflag(arraytopdowntest_record_13_t x, bool_t v){
        arraytopdowntest_record_13_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdowntest_record_13(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}



void release_arraytopdowntest_funtype_14(arraytopdowntest_funtype_14_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdowntest_funtype_14_t copy_arraytopdowntest_funtype_14(arraytopdowntest_funtype_14_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdowntest_funtype_14(arraytopdowntest_funtype_14_t x, arraytopdowntest_funtype_14_t y){
        return false;}

extern bool_t arraytopdowntest__digit(uint8_t ivar_1){
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

extern bool_t arraytopdowntest__any(uint8_t ivar_1){
        bool_t  result;
        result = (bool_t) true;

        
        return result;
}

extern arraytopdown__peg_adt_t arraytopdowntest__pyaml(uint8_t ivar_1){
        arraytopdown__peg_adt_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             uint8_t ivar_9;
             ivar_9 = (uint8_t)1;
             uint8_t ivar_10;
             ivar_10 = (uint8_t)3;
             result = (arraytopdown__peg_adt_t)arraytopdown__choice((uint8_t)ivar_9, (uint8_t)ivar_10);
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
           result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_18, (uint8_t)ivar_19);
} else {
             
           bool_t ivar_20;
           uint8_t ivar_22;
           ivar_22 = (uint8_t)2;
           ivar_20 = (ivar_1 == ivar_22);
           if (ivar_20){   
           arraytopdowntest_funtype_0_t ivar_30;
           arraytopdowntest_closure_1_t cl5987;
           cl5987 = new_arraytopdowntest_closure_1();
           ivar_30 = (arraytopdowntest_funtype_0_t)cl5987;
           result = (arraytopdown__peg_adt_t)arraytopdown__any((arraytopdown_funtype_29_t)ivar_30);
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
            result = (arraytopdown__peg_adt_t)arraytopdown__choice((uint8_t)ivar_38, (uint8_t)ivar_39);
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
             result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_47, (uint8_t)ivar_48);
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
              result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_56, (uint8_t)ivar_57);
} else {
             
              bool_t ivar_58;
              uint8_t ivar_60;
              ivar_60 = (uint8_t)6;
              ivar_58 = (ivar_1 == ivar_60);
              if (ivar_58){       
               uint8_t ivar_64;
               ivar_64 = (uint8_t)123;
               result = (arraytopdown__peg_adt_t)arraytopdown__terminal((uint8_t)ivar_64);
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
                result = (arraytopdown__peg_adt_t)arraytopdown__choice((uint8_t)ivar_72, (uint8_t)ivar_73);
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
                 result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_81, (uint8_t)ivar_82);
} else {
                
                 bool_t ivar_83;
                 uint8_t ivar_85;
                 ivar_85 = (uint8_t)9;
                 ivar_83 = (ivar_1 == ivar_85);
                 if (ivar_83){          
                  uint8_t ivar_89;
                  ivar_89 = (uint8_t)32;
                  result = (arraytopdown__peg_adt_t)arraytopdown__terminal((uint8_t)ivar_89);
} else {
                 
                  bool_t ivar_90;
                  uint8_t ivar_92;
                  ivar_92 = (uint8_t)10;
                  ivar_90 = (ivar_1 == ivar_92);
                  if (ivar_90){           
                   result = (arraytopdown__peg_adt_t)arraytopdown__epsilon();
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
                    result = (arraytopdown__peg_adt_t)arraytopdown__choice((uint8_t)ivar_101, (uint8_t)ivar_102);
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
                     result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_110, (uint8_t)ivar_111);
} else {
                    
                     bool_t ivar_112;
                     uint8_t ivar_114;
                     ivar_114 = (uint8_t)13;
                     ivar_112 = (ivar_1 == ivar_114);
                     if (ivar_112){              
                      uint8_t ivar_118;
                      ivar_118 = (uint8_t)125;
                      result = (arraytopdown__peg_adt_t)arraytopdown__terminal((uint8_t)ivar_118);
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
                       result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_126, (uint8_t)ivar_127);
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
                        result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_135, (uint8_t)ivar_136);
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
                         result = (arraytopdown__peg_adt_t)arraytopdown__choice((uint8_t)ivar_144, (uint8_t)ivar_145);
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
                          result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_153, (uint8_t)ivar_154);
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
                           result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_162, (uint8_t)ivar_163);
} else {
                          
                           bool_t ivar_164;
                           uint8_t ivar_166;
                           ivar_166 = (uint8_t)19;
                           ivar_164 = (ivar_1 == ivar_166);
                           if (ivar_164){                    
                            uint8_t ivar_170;
                            ivar_170 = (uint8_t)39;
                            result = (arraytopdown__peg_adt_t)arraytopdown__terminal((uint8_t)ivar_170);
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
                             result = (arraytopdown__peg_adt_t)arraytopdown__choice((uint8_t)ivar_178, (uint8_t)ivar_179);
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
                              result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_187, (uint8_t)ivar_188);
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
                               result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_196, (uint8_t)ivar_197);
} else {
                              
                               bool_t ivar_198;
                               uint8_t ivar_200;
                               ivar_200 = (uint8_t)23;
                               ivar_198 = (ivar_1 == ivar_200);
                               if (ivar_198){                        
                                uint8_t ivar_204;
                                ivar_204 = (uint8_t)92;
                                result = (arraytopdown__peg_adt_t)arraytopdown__terminal((uint8_t)ivar_204);
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
                                 result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_212, (uint8_t)ivar_213);
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
                                  result = (arraytopdown__peg_adt_t)arraytopdown__choice((uint8_t)ivar_221, (uint8_t)ivar_222);
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
                                   result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_230, (uint8_t)ivar_231);
} else {
                                  
                                   bool_t ivar_232;
                                   uint8_t ivar_234;
                                   ivar_234 = (uint8_t)27;
                                   ivar_232 = (ivar_1 == ivar_234);
                                   if (ivar_232){                            
                                    arraytopdowntest_funtype_0_t ivar_242;
                                    arraytopdowntest_closure_2_t cl5988;
                                    cl5988 = new_arraytopdowntest_closure_2();
                                    ivar_242 = (arraytopdowntest_funtype_0_t)cl5988;
                                    result = (arraytopdown__peg_adt_t)arraytopdown__any((arraytopdown_funtype_29_t)ivar_242);
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
                                     result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_250, (uint8_t)ivar_251);
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
                                      result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_259, (uint8_t)ivar_260);
} else {
                                     
                                      bool_t ivar_261;
                                      uint8_t ivar_263;
                                      ivar_263 = (uint8_t)30;
                                      ivar_261 = (ivar_1 == ivar_263);
                                      if (ivar_261){                               
                                       uint8_t ivar_267;
                                       ivar_267 = (uint8_t)58;
                                       result = (arraytopdown__peg_adt_t)arraytopdown__terminal((uint8_t)ivar_267);
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
                                        result = (arraytopdown__peg_adt_t)arraytopdown__choice((uint8_t)ivar_275, (uint8_t)ivar_276);
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
                                         result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_284, (uint8_t)ivar_285);
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
                                          result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_293, (uint8_t)ivar_294);
} else {
                                         
                                          bool_t ivar_295;
                                          uint8_t ivar_297;
                                          ivar_297 = (uint8_t)34;
                                          ivar_295 = (ivar_1 == ivar_297);
                                          if (ivar_295){                                   
                                           uint8_t ivar_301;
                                           ivar_301 = (uint8_t)44;
                                           result = (arraytopdown__peg_adt_t)arraytopdown__terminal((uint8_t)ivar_301);
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
                                            result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_309, (uint8_t)ivar_310);
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
                                             result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_318, (uint8_t)ivar_319);
} else {
                                            
                                             bool_t ivar_320;
                                             uint8_t ivar_322;
                                             ivar_322 = (uint8_t)37;
                                             ivar_320 = (ivar_1 == ivar_322);
                                             if (ivar_320){                                      
                                              uint8_t ivar_326;
                                              ivar_326 = (uint8_t)91;
                                              result = (arraytopdown__peg_adt_t)arraytopdown__terminal((uint8_t)ivar_326);
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
                                               result = (arraytopdown__peg_adt_t)arraytopdown__choice((uint8_t)ivar_334, (uint8_t)ivar_335);
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
                                                result = (arraytopdown__peg_adt_t)arraytopdown__choice((uint8_t)ivar_343, (uint8_t)ivar_344);
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
                                                 result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_352, (uint8_t)ivar_353);
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
                                                  result = (arraytopdown__peg_adt_t)arraytopdown__choice((uint8_t)ivar_361, (uint8_t)ivar_362);
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
                                                   result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_370, (uint8_t)ivar_371);
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
                                                    result = (arraytopdown__peg_adt_t)arraytopdown__concat((uint8_t)ivar_379, (uint8_t)ivar_380);
} else {
                                                   
                                                    bool_t ivar_381;
                                                    uint8_t ivar_383;
                                                    ivar_383 = (uint8_t)44;
                                                    ivar_381 = (ivar_1 == ivar_383);
                                                    if (ivar_381){                                             
                                                     uint8_t ivar_387;
                                                     ivar_387 = (uint8_t)93;
                                                     result = (arraytopdown__peg_adt_t)arraytopdown__terminal((uint8_t)ivar_387);
} else {
                                                    
                                                     result = (arraytopdown__peg_adt_t)arraytopdown__epsilon();
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

extern bytestrings__bytestring_t arraytopdowntest__empty(uint8_t ivar_2){
        bytestrings__bytestring_t  result;
        strings__string_t ivar_6;
        uint32_t len5991 = 2;
        uint32_t characters5992[2] = {32, 32};
        stringliteral_t string5990 = mk_string(2, characters5992);
        ivar_6 = (strings__string_t)strings__make_string(len5991, string5990);
        result = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_6);

        
        return result;
}

extern bytestrings__bytestring_t arraytopdowntest__tok0(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    strings__string_t ivar_4;
        uint32_t len5995 = 7;
        uint32_t characters5996[7] = {39, 116, 111, 107, 101, 110, 39};
        stringliteral_t string5994 = mk_string(7, characters5996);
        ivar_4 = (strings__string_t)strings__make_string(len5995, string5994);
        result = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_4);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t arraytopdowntest__tok1(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    strings__string_t ivar_4;
        uint32_t len5999 = 9;
        uint32_t characters6000[9] = {39, 116, 111, 107, 101, 110, 769, 769, 39};
        stringliteral_t string5998 = mk_string(9, characters6000);
        ivar_4 = (strings__string_t)strings__make_string(len5999, string5998);
        result = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_4);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t arraytopdowntest__emptydict(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    strings__string_t ivar_4;
        uint32_t len6003 = 9;
        uint32_t characters6004[9] = {123, 32, 32, 32, 32, 32, 32, 125, 32};
        stringliteral_t string6002 = mk_string(9, characters6004);
        ivar_4 = (strings__string_t)strings__make_string(len6003, string6002);
        result = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_4);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t arraytopdowntest__obrace(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    strings__string_t ivar_4;
        uint32_t len6007 = 3;
        uint32_t characters6008[3] = {123, 32, 32};
        stringliteral_t string6006 = mk_string(3, characters6008);
        ivar_4 = (strings__string_t)strings__make_string(len6007, string6006);
        result = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_4);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t arraytopdowntest__cbrace(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    strings__string_t ivar_4;
        uint32_t len6011 = 3;
        uint32_t characters6012[3] = {125, 32, 32};
        stringliteral_t string6010 = mk_string(3, characters6012);
        ivar_4 = (strings__string_t)strings__make_string(len6011, string6010);
        result = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_4);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t arraytopdowntest__colon(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    strings__string_t ivar_4;
        uint32_t len6015 = 3;
        uint32_t characters6016[3] = {58, 32, 32};
        stringliteral_t string6014 = mk_string(3, characters6016);
        ivar_4 = (strings__string_t)strings__make_string(len6015, string6014);
        result = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_4);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t arraytopdowntest__emptydict2(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_4;
        ivar_4 = (bytestrings__bytestring_t)arraytopdowntest__obrace();
        if (ivar_4 != NULL) ivar_4->count++;
        bytestrings__bytestring_t ivar_5;
        ivar_5 = (bytestrings__bytestring_t)arraytopdowntest__cbrace();
        if (ivar_5 != NULL) ivar_5->count++;
        result = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_4, (bytestrings__bytestring_t)ivar_5);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t arraytopdowntest__dict1(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    bytestrings__bytestring_t ivar_19;
        bytestrings__bytestring_t ivar_16;
        bytestrings__bytestring_t ivar_13;
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)arraytopdowntest__obrace();
        if (ivar_10 != NULL) ivar_10->count++;
        bytestrings__bytestring_t ivar_11;
        ivar_11 = (bytestrings__bytestring_t)arraytopdowntest__tok0();
        if (ivar_11 != NULL) ivar_11->count++;
        ivar_13 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_10, (bytestrings__bytestring_t)ivar_11);
        bytestrings__bytestring_t ivar_14;
        ivar_14 = (bytestrings__bytestring_t)arraytopdowntest__colon();
        if (ivar_14 != NULL) ivar_14->count++;
        ivar_16 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_13, (bytestrings__bytestring_t)ivar_14);
        bytestrings__bytestring_t ivar_17;
        ivar_17 = (bytestrings__bytestring_t)arraytopdowntest__emptydict2();
        if (ivar_17 != NULL) ivar_17->count++;
        ivar_19 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_16, (bytestrings__bytestring_t)ivar_17);
        bytestrings__bytestring_t ivar_20;
        ivar_20 = (bytestrings__bytestring_t)arraytopdowntest__cbrace();
        if (ivar_20 != NULL) ivar_20->count++;
        result = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_19, (bytestrings__bytestring_t)ivar_20);

        defined = true;};
        
        return result;
}

extern arraytopdown__ent_adt_t arraytopdowntest__test0(void){
        arraytopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_18;
        ivar_18 = (uint8_t)2;
        uint32_t ivar_13;
        //copying to uint32 from uint8;
        ivar_13 = (uint32_t)ivar_18;
        arraytopdown__lang_spec_t ivar_14;
        arraytopdowntest_closure_3_t cl6017;
        cl6017 = new_arraytopdowntest_closure_3();
        ivar_14 = (arraytopdown__lang_spec_t)cl6017;
        bytestrings__bytestring_t ivar_15;
        uint8_t ivar_9;
        ivar_9 = (uint8_t)2;
        ivar_15 = (bytestrings__bytestring_t)arraytopdowntest__empty((uint8_t)ivar_9);
        uint8_t ivar_16;
        ivar_16 = (uint8_t)7;
        result = (arraytopdown__ent_adt_t)arraytopdown__doparse((uint32_t)ivar_13, (arraytopdown__lang_spec_t)ivar_14, (bytestrings__bytestring_t)ivar_15, (uint8_t)ivar_16);

        defined = true;};
        
        return result;
}

extern arraytopdown__ent_adt_t arraytopdowntest__test1(void){
        arraytopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_15;
        ivar_15 = (uint8_t)7;
        uint32_t ivar_10;
        //copying to uint32 from uint8;
        ivar_10 = (uint32_t)ivar_15;
        arraytopdown__lang_spec_t ivar_11;
        arraytopdowntest_closure_4_t cl6018;
        cl6018 = new_arraytopdowntest_closure_4();
        ivar_11 = (arraytopdown__lang_spec_t)cl6018;
        bytestrings__bytestring_t ivar_12;
        ivar_12 = (bytestrings__bytestring_t)arraytopdowntest__tok0();
        if (ivar_12 != NULL) ivar_12->count++;
        uint8_t ivar_13;
        ivar_13 = (uint8_t)17;
        result = (arraytopdown__ent_adt_t)arraytopdown__doparse((uint32_t)ivar_10, (arraytopdown__lang_spec_t)ivar_11, (bytestrings__bytestring_t)ivar_12, (uint8_t)ivar_13);

        defined = true;};
        
        return result;
}

extern arraytopdown__ent_adt_t arraytopdowntest__test11(void){
        arraytopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_15;
        ivar_15 = (uint8_t)9;
        uint32_t ivar_10;
        //copying to uint32 from uint8;
        ivar_10 = (uint32_t)ivar_15;
        arraytopdown__lang_spec_t ivar_11;
        arraytopdowntest_closure_5_t cl6019;
        cl6019 = new_arraytopdowntest_closure_5();
        ivar_11 = (arraytopdown__lang_spec_t)cl6019;
        bytestrings__bytestring_t ivar_12;
        ivar_12 = (bytestrings__bytestring_t)arraytopdowntest__tok1();
        if (ivar_12 != NULL) ivar_12->count++;
        uint8_t ivar_13;
        ivar_13 = (uint8_t)17;
        result = (arraytopdown__ent_adt_t)arraytopdown__doparse((uint32_t)ivar_10, (arraytopdown__lang_spec_t)ivar_11, (bytestrings__bytestring_t)ivar_12, (uint8_t)ivar_13);

        defined = true;};
        
        return result;
}

extern arraytopdown__ent_adt_t arraytopdowntest__test2(void){
        arraytopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_15;
        ivar_15 = (uint8_t)22;
        uint32_t ivar_10;
        //copying to uint32 from uint8;
        ivar_10 = (uint32_t)ivar_15;
        arraytopdown__lang_spec_t ivar_11;
        arraytopdowntest_closure_6_t cl6020;
        cl6020 = new_arraytopdowntest_closure_6();
        ivar_11 = (arraytopdown__lang_spec_t)cl6020;
        bytestrings__bytestring_t ivar_12;
        ivar_12 = (bytestrings__bytestring_t)arraytopdowntest__dict1();
        if (ivar_12 != NULL) ivar_12->count++;
        uint8_t ivar_13;
        ivar_13 = (uint8_t)0;
        result = (arraytopdown__ent_adt_t)arraytopdown__doparse((uint32_t)ivar_10, (arraytopdown__lang_spec_t)ivar_11, (bytestrings__bytestring_t)ivar_12, (uint8_t)ivar_13);

        defined = true;};
        
        return result;
}

extern arraytopdown__ent_adt_t arraytopdowntest__iparse(uint8_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3, uint8_t ivar_4, uint8_t ivar_5){
        arraytopdown__ent_adt_t  result;
        /* pend */ arraytopdowntest_funtype_7_t ivar_6;
        arraytopdowntest_closure_8_t cl6035;
        cl6035 = new_arraytopdowntest_closure_8();
        ivar_6 = (arraytopdowntest_funtype_7_t)cl6035;
        arraytopdowntest_record_10_t ivar_83;
        uint8_t ivar_14;
        ivar_14 = (uint8_t)1;
        bool_t ivar_15;
        ivar_15 = (bool_t) false;
        arraytopdowntest_funtype_9_t ivar_43;
        arraytopdown__ent_adt_t ivar_23;
        uint8_t ivar_30;
        ivar_30 = (uint8_t)0;
        uint32_t ivar_27;
        //copying to uint32 from uint8;
        ivar_27 = (uint32_t)ivar_30;
        uint8_t ivar_28;
        ivar_28 = (uint8_t)255;
        ivar_23 = (arraytopdown__ent_adt_t)arraytopdown__push((uint32_t)ivar_27, (uint8_t)ivar_28);
        arraytopdowntest_funtype_9_t ivar_31;
        arraytopdowntest_closure_11_t cl6036;
        cl6036 = new_arraytopdowntest_closure_11();
        cl6036->fvar_1 = (arraytopdowntest_funtype_7_t)ivar_6;
        if (cl6036->fvar_1 != NULL) cl6036->fvar_1->count++;
        release_arraytopdowntest_funtype_7(ivar_6);
        ivar_31 = (arraytopdowntest_funtype_9_t)cl6036;
        arraytopdowntest_funtype_7_t ivar_32;
        ivar_32 = (arraytopdowntest_funtype_7_t)ivar_31->ftbl->fptr(ivar_31, ivar_4);
        arraytopdowntest_funtype_9_t ivar_39;
        arraytopdowntest_funtype_7_t ivar_41;
        ivar_41 = NULL;
        ivar_39 = (arraytopdowntest_funtype_9_t)update_arraytopdowntest_funtype_9(ivar_31, ivar_4, ivar_41);
        if (ivar_41 != NULL) ivar_41->count--;
        arraytopdowntest_funtype_7_t ivar_40;
        arraytopdowntest_funtype_7_t ivar_35;
        arraytopdown__ent_adt_t ivar_37;
        ivar_37 = NULL;
        ivar_35 = (arraytopdowntest_funtype_7_t)update_arraytopdowntest_funtype_7(ivar_32, ivar_5, ivar_37);
        if (ivar_37 != NULL) ivar_37->count--;
        ivar_40 = (arraytopdowntest_funtype_7_t)update_arraytopdowntest_funtype_7(ivar_35, ivar_5, ivar_23);
        if (ivar_23 != NULL) ivar_23->count--;
        ivar_43 = (arraytopdowntest_funtype_9_t)update_arraytopdowntest_funtype_9(ivar_39, ivar_4, ivar_40);
        if (ivar_40 != NULL) ivar_40->count--;
        arraytopdown__ent_adt_t ivar_49;
        uint32_t ivar_47;
        //copying to uint32 from uint8;
        ivar_47 = (uint32_t)ivar_4;
        ivar_49 = (arraytopdown__ent_adt_t)arraytopdown__push((uint32_t)ivar_47, (uint8_t)ivar_5);
        arraytopdowntest_record_10_t tmp6037 = new_arraytopdowntest_record_10();;
        ivar_83 = (arraytopdowntest_record_10_t)tmp6037;
        tmp6037->depth = (uint8_t)ivar_14;
        tmp6037->lflag = (bool_t)ivar_15;
        tmp6037->scaf = (arraytopdowntest_funtype_9_t)ivar_43;
        tmp6037->stack = (arraytopdown__ent_adt_t)ivar_49;
        /* St */ arraytopdowntest_record_13_t ivar_10;
        //copying to arraytopdowntest_record_13 from arraytopdowntest_record_10;
        {
         ivar_10 = new_arraytopdowntest_record_13();
         uint32_t tmp6038;
         //copying to uint32 from uint8;
         tmp6038 = (uint32_t)ivar_1;
         tmp6038 += 1;
         ivar_10->scaf = new_arraytopdowntest_array_12(tmp6038);
         for (uint32_t index_84 = 0; index_84 < tmp6038; index_84++){
                 ivar_10->scaf->elems[index_84] = (arraytopdowntest_funtype_7_t)ivar_83->scaf->ftbl->fptr(ivar_83->scaf, index_84);
                 if (ivar_10->scaf->elems[index_84] != NULL) ivar_10->scaf->elems[index_84]->count++;
         };
         ivar_10->depth = (uint64_t)ivar_83->depth;
         ivar_10->stack = (arraytopdown__ent_adt_t)ivar_83->stack;
         if (ivar_10->stack != NULL) ivar_10->stack->count++;
         ivar_10->lflag = (bool_t)ivar_83->lflag;
        };
        release_arraytopdowntest_record_10(ivar_83);
        arraytopdowntest_funtype_7_t ivar_52;
        arraytopdowntest_array_12_t ivar_56;
        arraytopdowntest_record_13_t ivar_79;
        arraytopdowntest_funtype_14_t ivar_63;
        uint32_t ivar_73;
        //copying to uint32 from uint8;
        ivar_73 = (uint32_t)ivar_1;
        uint32_t ivar_76;
        //copying to uint32 from uint8;
        ivar_76 = (uint32_t)ivar_4;
        ivar_63 = (arraytopdowntest_funtype_14_t)arraytopdown__parse((uint32_t)ivar_73, (arraytopdown__lang_spec_t)ivar_2, (bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_76, (uint8_t)ivar_5);
        ivar_79 = (arraytopdowntest_record_13_t)ivar_63->ftbl->fptr(ivar_63, ivar_10);
        ivar_63->ftbl->rptr(ivar_63);
        ivar_56 = (arraytopdowntest_array_12_t)ivar_79->scaf;
        ivar_56->count++;
        release_arraytopdowntest_record_13(ivar_79);
        ivar_52 = (arraytopdowntest_funtype_7_t)ivar_56->elems[ivar_4];
        ivar_52->count++;
        release_arraytopdowntest_array_12(ivar_56);
        result = (arraytopdown__ent_adt_t)ivar_52->ftbl->fptr(ivar_52, ivar_5);
        ivar_52->ftbl->rptr(ivar_52);

        
        return result;
}