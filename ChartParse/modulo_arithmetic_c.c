//Code generated using pvs2ir2c
#include "modulo_arithmetic_c.h"

void release_modulo_arithmetic_funtype_0(modulo_arithmetic_funtype_0_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

modulo_arithmetic_funtype_0_t copy_modulo_arithmetic_funtype_0(modulo_arithmetic_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_modulo_arithmetic_funtype_0(modulo_arithmetic_funtype_0_htbl_t htbl, mpz_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; modulo_arithmetic_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp4123 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp4123 == 0);
        bool_t keymatch;
        int64_t tmp4124 = mpz_cmp(data.key, i);
        keymatch = (tmp4124 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp4123 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp4123 == 0);

        int64_t tmp4124 = mpz_cmp(data.key, i);
        keymatch = (tmp4124 == 0);
                }
        return hashindex;
        }

modulo_arithmetic_funtype_0_t dupdate_modulo_arithmetic_funtype_0(modulo_arithmetic_funtype_0_t a, mpz_t i, mpz_t v){
        modulo_arithmetic_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (modulo_arithmetic_funtype_0_htbl_t)safe_malloc(sizeof(struct modulo_arithmetic_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (modulo_arithmetic_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct modulo_arithmetic_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        modulo_arithmetic_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                modulo_arithmetic_funtype_0_hashentry_t * new_data = (modulo_arithmetic_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct modulo_arithmetic_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp4125 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp4125 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp4126 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp4126 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp4127 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp4127 == 0);
                                }
                                mpz_set(new_data[new_loc].key, data[j].key);
                                new_data[new_loc].keyhash = keyhash;
                                mpz_set(new_data[new_loc].value, data[j].value);
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = mpz_hash(i);
        uint32_t hashindex = lookup_modulo_arithmetic_funtype_0(htbl, i, ihash);
        modulo_arithmetic_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp4128 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp4128 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; mpz_set(htbl->data[hashindex].value, v);}
            else {mpz_ptr_t tempvalue;mpz_mk_set(tempvalue, htbl->data[hashindex].value);mpz_set(tempvalue, v);};
        return a;

}

modulo_arithmetic_funtype_0_t update_modulo_arithmetic_funtype_0(modulo_arithmetic_funtype_0_t a, mpz_t i, mpz_t v){
        if (a->count == 1){
                return dupdate_modulo_arithmetic_funtype_0(a, i, v);
            } else {
                modulo_arithmetic_funtype_0_t x = copy_modulo_arithmetic_funtype_0(a);
                x->count--;
                return dupdate_modulo_arithmetic_funtype_0(x, i, v);
            }}

modulo_arithmetic_funtype_0_t equal_modulo_arithmetic_funtype_0(modulo_arithmetic_funtype_0_t x, modulo_arithmetic_funtype_0_t y){
        return false;}


mpz_ptr_t f_modulo_arithmetic_closure_1(struct modulo_arithmetic_closure_1_s * closure, mpz_t bvar){
if (closure->htbl != NULL){
        modulo_arithmetic_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_modulo_arithmetic_funtype_0(htbl, bvar, hash);
        modulo_arithmetic_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp4129 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp4129 == 0);
        if (!keyzero && entry.keyhash != 0){
            mpz_ptr_t result;
            mpz_mk_set(result, entry.value);
            return result;}
        return h_modulo_arithmetic_closure_1(bvar, closure->fvar_1);};

return h_modulo_arithmetic_closure_1(bvar, closure->fvar_1);}

mpz_ptr_t m_modulo_arithmetic_closure_1(struct modulo_arithmetic_closure_1_s * closure, mpz_t bvar){
        return h_modulo_arithmetic_closure_1(bvar, closure->fvar_1);}

extern mpz_ptr_t h_modulo_arithmetic_closure_1(mpz_t ivar_4, mpz_t ivar_1){
        mpz_ptr_t result;
        mpz_mk_fdiv_r(result, ivar_4, ivar_1);

        return result;
}

modulo_arithmetic_closure_1_t new_modulo_arithmetic_closure_1(void){
        static struct modulo_arithmetic_funtype_0_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(modulo_arithmetic_funtype_0_t, mpz_t))&f_modulo_arithmetic_closure_1, .mptr = (mpz_ptr_t (*)(modulo_arithmetic_funtype_0_t, mpz_t))&m_modulo_arithmetic_closure_1, .rptr =  (void (*)(modulo_arithmetic_funtype_0_t))&release_modulo_arithmetic_closure_1, .cptr = (modulo_arithmetic_funtype_0_t (*)(modulo_arithmetic_funtype_0_t))&copy_modulo_arithmetic_closure_1};
        modulo_arithmetic_closure_1_t tmp = (modulo_arithmetic_closure_1_t) safe_malloc(sizeof(struct modulo_arithmetic_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        return tmp;}

void release_modulo_arithmetic_closure_1(modulo_arithmetic_funtype_0_t closure){
        modulo_arithmetic_closure_1_t x = (modulo_arithmetic_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

modulo_arithmetic_closure_1_t copy_modulo_arithmetic_closure_1(modulo_arithmetic_closure_1_t x){
        modulo_arithmetic_closure_1_t y = new_modulo_arithmetic_closure_1();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        if (x->htbl != NULL){
            modulo_arithmetic_funtype_0_htbl_t new_htbl = (modulo_arithmetic_funtype_0_htbl_t) safe_malloc(sizeof(modulo_arithmetic_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            modulo_arithmetic_funtype_0_hashentry_t * new_data = (modulo_arithmetic_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(modulo_arithmetic_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(modulo_arithmetic_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern modulo_arithmetic_funtype_0_t modulo_arithmetic__rem(mpz_t ivar_1){
        modulo_arithmetic_funtype_0_t result;
        modulo_arithmetic_closure_1_t cl4130;
        cl4130 = new_modulo_arithmetic_closure_1();
        mpz_set(cl4130->fvar_1, ivar_1);
        result = (modulo_arithmetic_funtype_0_t)cl4130;

        return result;
}