//Code generated using pvs2ir2c
#include "bv_concat_def_c.h"

void release_bv_concat_def_funtype_0(bv_concat_def_funtype_0_t x, mpz_ptr_t bv_concat_def__n, mpz_ptr_t bv_concat_def__m){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

bv_concat_def_funtype_0_t copy_bv_concat_def_funtype_0(bv_concat_def_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_bv_concat_def_funtype_0(bv_concat_def_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        bv_concat_def_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp2549 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp2549 == 0);
        bool_t keymatch;
        int64_t tmp2550 = mpz_cmp(data.key, i);
        keymatch = (tmp2550 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                int64_t tmp2549 = mpz_cmp_ui(data.key, 0);
                keyzero = (tmp2549 == 0);

                int64_t tmp2550 = mpz_cmp(data.key, i);
                keymatch = (tmp2550 == 0);
                }
        return hashindex;
        }

bv_concat_def_funtype_0_t dupdate_bv_concat_def_funtype_0(bv_concat_def_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_concat_def__n, mpz_ptr_t bv_concat_def__m){
        bv_concat_def_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (bv_concat_def_funtype_0_htbl_t)safe_malloc(sizeof(struct bv_concat_def_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (bv_concat_def_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct bv_concat_def_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        bv_concat_def_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                bv_concat_def_funtype_0_hashentry_t * new_data = (bv_concat_def_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct bv_concat_def_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp2551 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp2551 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp2552 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp2552 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp2553 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp2553 == 0);
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
        uint32_t hashindex = lookup_bv_concat_def_funtype_0(htbl, i, ihash);
        bv_concat_def_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp2554 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp2554 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

bv_concat_def_funtype_0_t update_bv_concat_def_funtype_0(bv_concat_def_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_concat_def__n, mpz_ptr_t bv_concat_def__m){
        if (a->count == 1){
                return dupdate_bv_concat_def_funtype_0(a, i, v, bv_concat_def__n, bv_concat_def__m);
            } else {
                bv_concat_def_funtype_0_t x = copy_bv_concat_def_funtype_0(a);
                a->count--;
                return dupdate_bv_concat_def_funtype_0(x, i, v, bv_concat_def__n, bv_concat_def__m);
            }}

bool_t equal_bv_concat_def_funtype_0(bv_concat_def_funtype_0_t x, bv_concat_def_funtype_0_t y, mpz_ptr_t bv_concat_def__n, mpz_ptr_t bv_concat_def__m){
        return false;}

char* json_bv_concat_def_funtype_0(bv_concat_def_funtype_0_t x, mpz_ptr_t bv_concat_def__n, mpz_ptr_t bv_concat_def__m){char * result = safe_malloc(33); sprintf(result, "%s", "\"bv_concat_def_funtype_0\""); return result;}


bool_t f_bv_concat_def_closure_1(struct bv_concat_def_closure_1_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        bv_concat_def_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_bv_concat_def_funtype_0(htbl, bvar, hash);
        bv_concat_def_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp2555 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp2555 == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_bv_concat_def_closure_1(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);};

return h_bv_concat_def_closure_1(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

bool_t m_bv_concat_def_closure_1(struct bv_concat_def_closure_1_s * closure, mpz_ptr_t bvar){
        return h_bv_concat_def_closure_1(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

bool_t h_bv_concat_def_closure_1(mpz_ptr_t ivar_9, mpz_ptr_t bv_concat_def__m, mpz_ptr_t bv_concat_def__n, bv_concat_def_funtype_0_t ivar_3, bv_concat_def_funtype_0_t ivar_1){
        bool_t result;
        bool_t ivar_13;
        int64_t tmp2556 = mpz_cmp(ivar_9, bv_concat_def__m);
        ivar_13 = (tmp2556 < 0);
        if (ivar_13){ 
             result = (bool_t)ivar_3->ftbl->fptr(ivar_3, ivar_9);
} else {
        
             mpz_ptr_t ivar_29;
             mpz_mk_sub(ivar_29, ivar_9, bv_concat_def__m);
             result = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_29);
};

        return result;
}

bv_concat_def_closure_1_t new_bv_concat_def_closure_1(void){
        static struct bv_concat_def_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(bv_concat_def_funtype_0_t, mpz_ptr_t))&f_bv_concat_def_closure_1, .mptr = (bool_t (*)(bv_concat_def_funtype_0_t, mpz_ptr_t))&m_bv_concat_def_closure_1, .rptr =  (void (*)(bv_concat_def_funtype_0_t))&release_bv_concat_def_closure_1, .cptr = (bv_concat_def_funtype_0_t (*)(bv_concat_def_funtype_0_t))&copy_bv_concat_def_closure_1};
        bv_concat_def_closure_1_t tmp = (bv_concat_def_closure_1_t) safe_malloc(sizeof(struct bv_concat_def_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_bv_concat_def_closure_1(bv_concat_def_funtype_0_t closure, mpz_ptr_t bv_concat_def__n, mpz_ptr_t bv_concat_def__m){
        bv_concat_def_closure_1_t x = (bv_concat_def_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
         release_bv_concat_def_funtype_0(x->fvar_3, bv_concat_def__n, bv_concat_def__m);
         release_bv_concat_def_funtype_0(x->fvar_4, bv_concat_def__n, bv_concat_def__m);
        //printf("\nFreeing\n");
        safe_free(x);}}

bv_concat_def_closure_1_t copy_bv_concat_def_closure_1(bv_concat_def_closure_1_t x){
        bv_concat_def_closure_1_t y = new_bv_concat_def_closure_1();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        mpz_set(y->fvar_2, x->fvar_2);
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        if (x->htbl != NULL){
            bv_concat_def_funtype_0_htbl_t new_htbl = (bv_concat_def_funtype_0_htbl_t) safe_malloc(sizeof(struct bv_concat_def_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            bv_concat_def_funtype_0_hashentry_t * new_data = (bv_concat_def_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct bv_concat_def_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct bv_concat_def_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

bv_concat_def_funtype_0_t bv_concat_def__oh(mpz_ptr_t bv_concat_def__n, mpz_ptr_t bv_concat_def__m, bv_concat_def_funtype_0_t ivar_1, bv_concat_def_funtype_0_t ivar_3){
        bv_concat_def_funtype_0_t  result;
        bv_concat_def_closure_1_t cl2557;
        cl2557 = new_bv_concat_def_closure_1();
        mpz_set(cl2557->fvar_1, bv_concat_def__m);
        mpz_set(cl2557->fvar_2, bv_concat_def__n);
        cl2557->fvar_3 = (bv_concat_def_funtype_0_t)ivar_3;
        if (cl2557->fvar_3 != NULL) cl2557->fvar_3->count++;
        cl2557->fvar_4 = (bv_concat_def_funtype_0_t)ivar_1;
        if (cl2557->fvar_4 != NULL) cl2557->fvar_4->count++;
        release_bv_concat_def_funtype_0(ivar_3, bv_concat_def__n, bv_concat_def__m);
        release_bv_concat_def_funtype_0(ivar_1, bv_concat_def__n, bv_concat_def__m);
        result = (bv_concat_def_funtype_0_t)cl2557;

        
        return result;
}