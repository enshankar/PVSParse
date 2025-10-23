//Code generated using pvs2ir2c
#include "bv_c.h"

void release_bv_funtype_0(bv_funtype_0_t x, mpz_ptr_t N){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

bv_funtype_0_t copy_bv_funtype_0(bv_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_bv_funtype_0(bv_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; bv_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp22393 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp22393 == 0);
        bool_t keymatch;
        int64_t tmp22394 = mpz_cmp(data.key, i);
        keymatch = (tmp22394 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp22393 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp22393 == 0);

        int64_t tmp22394 = mpz_cmp(data.key, i);
        keymatch = (tmp22394 == 0);
                }
        return hashindex;
        }

bv_funtype_0_t dupdate_bv_funtype_0(bv_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t N){
        bv_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (bv_funtype_0_htbl_t)safe_malloc(sizeof(struct bv_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (bv_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct bv_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        bv_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                bv_funtype_0_hashentry_t * new_data = (bv_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct bv_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp22395 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp22395 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp22396 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp22396 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp22397 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp22397 == 0);
                                }
                                mpz_set(new_data[new_loc].key, data[j].key);
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (bool_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = mpz_hash(i);
        uint32_t hashindex = lookup_bv_funtype_0(htbl, i, ihash);
        bv_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp22398 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp22398 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;tempvalue = (bool_t)v;};
        return a;

}

bv_funtype_0_t update_bv_funtype_0(bv_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t N){
        if (a->count == 1){
                return dupdate_bv_funtype_0(a, i, v, N);
            } else {
                bv_funtype_0_t x = copy_bv_funtype_0(a);
                x->count--;
                return dupdate_bv_funtype_0(x, i, v, N);
            }}

bool_t equal_bv_funtype_0(bv_funtype_0_t x, bv_funtype_0_t y, mpz_ptr_t N){
        return false;}


bool_t f_bv_closure_1(struct bv_closure_1_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        bv_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_bv_funtype_0(htbl, bvar, hash);
        bv_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp22399 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp22399 == 0);
        if (!keyzero && entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_bv_closure_1(bvar, closure->fvar_1);};

return h_bv_closure_1(bvar, closure->fvar_1);}

bool_t m_bv_closure_1(struct bv_closure_1_s * closure, mpz_ptr_t bvar){
        return h_bv_closure_1(bvar, closure->fvar_1);}

extern bool_t h_bv_closure_1(mpz_ptr_t ivar_3, bool_t ivar_1){
        bool_t result;
        //copying to bool from bool;
        result = (bool_t)ivar_1;

        return result;
}

bv_closure_1_t new_bv_closure_1(void){
        static struct bv_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(bv_funtype_0_t, mpz_ptr_t))&f_bv_closure_1, .mptr = (bool_t (*)(bv_funtype_0_t, mpz_ptr_t))&m_bv_closure_1, .rptr =  (void (*)(bv_funtype_0_t))&release_bv_closure_1, .cptr = (bv_funtype_0_t (*)(bv_funtype_0_t))&copy_bv_closure_1};
        bv_closure_1_t tmp = (bv_closure_1_t) safe_malloc(sizeof(struct bv_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_bv_closure_1(bv_funtype_0_t closure, mpz_ptr_t N){
        bv_closure_1_t x = (bv_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

bv_closure_1_t copy_bv_closure_1(bv_closure_1_t x){
        bv_closure_1_t y = new_bv_closure_1();
        y->ftbl = x->ftbl;

        y->fvar_1 = (bool_t)x->fvar_1;
        if (x->htbl != NULL){
            bv_funtype_0_htbl_t new_htbl = (bv_funtype_0_htbl_t) safe_malloc(sizeof(bv_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            bv_funtype_0_hashentry_t * new_data = (bv_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(bv_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(bv_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern bool_t bv__bvec0(mpz_ptr_t N, mpz_ptr_t ivar_1){
        bool_t result;
        result = (bool_t) false;

        return result;
}

extern bool_t bv__bvec1(mpz_ptr_t N, mpz_ptr_t ivar_1){
        bool_t result;
        result = (bool_t) true;

        return result;
}

extern bv_funtype_0_t bv__fill(mpz_ptr_t N, bool_t ivar_1){
        bv_funtype_0_t result;
        bv_closure_1_t cl22400;
        cl22400 = new_bv_closure_1();
        cl22400->fvar_1 = (bool_t)ivar_1;
        result = (bv_funtype_0_t)cl22400;

        return result;
}

extern bool_t bv__caret(mpz_ptr_t N, bv_funtype_0_t ivar_1, mpz_ptr_t ivar_2){
        bool_t result;
        bv_funtype_0_t ivar_5;
        //copying to bv_funtype_0 from bv_funtype_0;
        ivar_5 = (bv_funtype_0_t)ivar_1;
        ivar_5->count++;
        release_bv_funtype_0(ivar_1, N);
        mpz_ptr_t ivar_6;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_6, ivar_2);
        mpz_clear(ivar_2);
        result = (bool_t)ivar_5->ftbl->fptr(ivar_5, ivar_6);
        ivar_5->ftbl->rptr(ivar_5);

        return result;
}