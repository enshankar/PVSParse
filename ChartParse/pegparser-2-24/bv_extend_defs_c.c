//Code generated using pvs2ir2c
#include "bv_extend_defs_c.h"

void release_bv_extend_defs_funtype_0(bv_extend_defs_funtype_0_t x, mpz_ptr_t bv_extend_defs__N){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

bv_extend_defs_funtype_0_t copy_bv_extend_defs_funtype_0(bv_extend_defs_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_bv_extend_defs_funtype_0(bv_extend_defs_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        bv_extend_defs_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp2899 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp2899 == 0);
        bool_t keymatch;
        int64_t tmp2900 = mpz_cmp(data.key, i);
        keymatch = (tmp2900 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                int64_t tmp2899 = mpz_cmp_ui(data.key, 0);
                keyzero = (tmp2899 == 0);

                int64_t tmp2900 = mpz_cmp(data.key, i);
                keymatch = (tmp2900 == 0);
                }
        return hashindex;
        }

bv_extend_defs_funtype_0_t dupdate_bv_extend_defs_funtype_0(bv_extend_defs_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_extend_defs__N){
        bv_extend_defs_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (bv_extend_defs_funtype_0_htbl_t)safe_malloc(sizeof(struct bv_extend_defs_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (bv_extend_defs_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct bv_extend_defs_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        bv_extend_defs_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                bv_extend_defs_funtype_0_hashentry_t * new_data = (bv_extend_defs_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct bv_extend_defs_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp2901 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp2901 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp2902 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp2902 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp2903 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp2903 == 0);
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
        uint32_t hashindex = lookup_bv_extend_defs_funtype_0(htbl, i, ihash);
        bv_extend_defs_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp2904 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp2904 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

bv_extend_defs_funtype_0_t update_bv_extend_defs_funtype_0(bv_extend_defs_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_extend_defs__N){
        if (a->count == 1){
                return dupdate_bv_extend_defs_funtype_0(a, i, v, bv_extend_defs__N);
            } else {
                bv_extend_defs_funtype_0_t x = copy_bv_extend_defs_funtype_0(a);
                a->count--;
                return dupdate_bv_extend_defs_funtype_0(x, i, v, bv_extend_defs__N);
            }}

bool_t equal_bv_extend_defs_funtype_0(bv_extend_defs_funtype_0_t x, bv_extend_defs_funtype_0_t y, mpz_ptr_t bv_extend_defs__N){
        return false;}

char* json_bv_extend_defs_funtype_0(bv_extend_defs_funtype_0_t x, mpz_ptr_t bv_extend_defs__N){char * result = safe_malloc(34); sprintf(result, "%s", "\"bv_extend_defs_funtype_0\""); return result;}

void release_bv_extend_defs_funtype_1(bv_extend_defs_funtype_1_t x, mpz_ptr_t bv_extend_defs__N){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

bv_extend_defs_funtype_1_t copy_bv_extend_defs_funtype_1(bv_extend_defs_funtype_1_t x){return x->ftbl->cptr(x);}

bool_t equal_bv_extend_defs_funtype_1(bv_extend_defs_funtype_1_t x, bv_extend_defs_funtype_1_t y, mpz_ptr_t bv_extend_defs__N){
        return false;}

char* json_bv_extend_defs_funtype_1(bv_extend_defs_funtype_1_t x, mpz_ptr_t bv_extend_defs__N){char * result = safe_malloc(34); sprintf(result, "%s", "\"bv_extend_defs_funtype_1\""); return result;}


bv_extend_defs_funtype_0_t f_bv_extend_defs_closure_2(struct bv_extend_defs_closure_2_s * closure, bv_extend_defs_funtype_0_t bvar){
        bv_extend_defs_funtype_0_t result = h_bv_extend_defs_closure_2(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bv_extend_defs_funtype_0_t m_bv_extend_defs_closure_2(struct bv_extend_defs_closure_2_s * closure, bv_extend_defs_funtype_0_t bvar){
        return h_bv_extend_defs_closure_2(bvar, closure->fvar_1, closure->fvar_2);}

bv_extend_defs_funtype_0_t h_bv_extend_defs_closure_2(bv_extend_defs_funtype_0_t ivar_5, mpz_ptr_t ivar_1, mpz_ptr_t bv_extend_defs__N){
        bv_extend_defs_funtype_0_t result;
        /* n */ mpz_ptr_t ivar_34;
        mpz_ptr_t ivar_31;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_31, ivar_1);
        mpz_ptr_t ivar_32;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_32, bv_extend_defs__N);
        mpz_mk_sub(ivar_34, ivar_31, ivar_32);
        /* m */ mpz_ptr_t ivar_35;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_35, bv_extend_defs__N);
        bv_extend_defs_funtype_0_t ivar_36;
        /* N */ mpz_ptr_t ivar_20;
        mpz_ptr_t ivar_17;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_17, ivar_1);
        mpz_ptr_t ivar_18;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_18, bv_extend_defs__N);
        mpz_mk_sub(ivar_20, ivar_17, ivar_18);
        bool_t ivar_21;
        ivar_21 = (bool_t) false;
        ivar_36 = (bv_extend_defs_funtype_0_t)bv__fill((mpz_ptr_t)ivar_20, (bool_t)ivar_21);
        result = (bv_extend_defs_funtype_0_t)bv_concat_def__oh((mpz_ptr_t)ivar_34, (mpz_ptr_t)ivar_35, (bv_concat_def_funtype_0_t)ivar_36, (bv_concat_def_funtype_0_t)ivar_5);

        return result;
}

bv_extend_defs_closure_2_t new_bv_extend_defs_closure_2(void){
        static struct bv_extend_defs_funtype_1_ftbl_s ftbl = {.fptr = (bv_extend_defs_funtype_0_t (*)(bv_extend_defs_funtype_1_t, bv_extend_defs_funtype_0_t))&f_bv_extend_defs_closure_2, .mptr = (bv_extend_defs_funtype_0_t (*)(bv_extend_defs_funtype_1_t, bv_extend_defs_funtype_0_t))&m_bv_extend_defs_closure_2, .rptr =  (void (*)(bv_extend_defs_funtype_1_t))&release_bv_extend_defs_closure_2, .cptr = (bv_extend_defs_funtype_1_t (*)(bv_extend_defs_funtype_1_t))&copy_bv_extend_defs_closure_2};
        bv_extend_defs_closure_2_t tmp = (bv_extend_defs_closure_2_t) safe_malloc(sizeof(struct bv_extend_defs_closure_2_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_bv_extend_defs_closure_2(bv_extend_defs_funtype_1_t closure, mpz_ptr_t bv_extend_defs__N){
        bv_extend_defs_closure_2_t x = (bv_extend_defs_closure_2_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

bv_extend_defs_closure_2_t copy_bv_extend_defs_closure_2(bv_extend_defs_closure_2_t x){
        bv_extend_defs_closure_2_t y = new_bv_extend_defs_closure_2();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        mpz_set(y->fvar_2, x->fvar_2);
        if (x->htbl != NULL){
            bv_extend_defs_funtype_1_htbl_t new_htbl = (bv_extend_defs_funtype_1_htbl_t) safe_malloc(sizeof(struct bv_extend_defs_funtype_1_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            bv_extend_defs_funtype_1_hashentry_t * new_data = (bv_extend_defs_funtype_1_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct bv_extend_defs_funtype_1_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct bv_extend_defs_funtype_1_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bv_extend_defs_funtype_0_t f_bv_extend_defs_closure_3(struct bv_extend_defs_closure_3_s * closure, bv_extend_defs_funtype_0_t bvar){
        bv_extend_defs_funtype_0_t result = h_bv_extend_defs_closure_3(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bv_extend_defs_funtype_0_t m_bv_extend_defs_closure_3(struct bv_extend_defs_closure_3_s * closure, bv_extend_defs_funtype_0_t bvar){
        return h_bv_extend_defs_closure_3(bvar, closure->fvar_1, closure->fvar_2);}

bv_extend_defs_funtype_0_t h_bv_extend_defs_closure_3(bv_extend_defs_funtype_0_t ivar_5, mpz_ptr_t ivar_1, mpz_ptr_t bv_extend_defs__N){
        bv_extend_defs_funtype_0_t result;
        /* n */ mpz_ptr_t ivar_44;
        mpz_ptr_t ivar_41;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_41, ivar_1);
        mpz_ptr_t ivar_42;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_42, bv_extend_defs__N);
        mpz_mk_sub(ivar_44, ivar_41, ivar_42);
        /* m */ mpz_ptr_t ivar_45;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_45, bv_extend_defs__N);
        bv_extend_defs_funtype_0_t ivar_46;
        /* N */ mpz_ptr_t ivar_30;
        mpz_ptr_t ivar_27;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_27, ivar_1);
        mpz_ptr_t ivar_28;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_28, bv_extend_defs__N);
        mpz_mk_sub(ivar_30, ivar_27, ivar_28);
        bool_t ivar_31;
        /* N */ mpz_ptr_t ivar_22;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_22, bv_extend_defs__N);
        mpz_ptr_t ivar_25;
        uint8_t ivar_19;
        ivar_19 = (uint8_t)1;
        mpz_mk_sub_ui(ivar_25, bv_extend_defs__N, (uint64_t)ivar_19);
        ivar_5->count++;
        ivar_31 = (bool_t)bv__caret((mpz_ptr_t)ivar_22, (bv_funtype_0_t)ivar_5, (mpz_ptr_t)ivar_25);
        ivar_46 = (bv_extend_defs_funtype_0_t)bv__fill((mpz_ptr_t)ivar_30, (bool_t)ivar_31);
        result = (bv_extend_defs_funtype_0_t)bv_concat_def__oh((mpz_ptr_t)ivar_44, (mpz_ptr_t)ivar_45, (bv_concat_def_funtype_0_t)ivar_46, (bv_concat_def_funtype_0_t)ivar_5);

        return result;
}

bv_extend_defs_closure_3_t new_bv_extend_defs_closure_3(void){
        static struct bv_extend_defs_funtype_1_ftbl_s ftbl = {.fptr = (bv_extend_defs_funtype_0_t (*)(bv_extend_defs_funtype_1_t, bv_extend_defs_funtype_0_t))&f_bv_extend_defs_closure_3, .mptr = (bv_extend_defs_funtype_0_t (*)(bv_extend_defs_funtype_1_t, bv_extend_defs_funtype_0_t))&m_bv_extend_defs_closure_3, .rptr =  (void (*)(bv_extend_defs_funtype_1_t))&release_bv_extend_defs_closure_3, .cptr = (bv_extend_defs_funtype_1_t (*)(bv_extend_defs_funtype_1_t))&copy_bv_extend_defs_closure_3};
        bv_extend_defs_closure_3_t tmp = (bv_extend_defs_closure_3_t) safe_malloc(sizeof(struct bv_extend_defs_closure_3_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_bv_extend_defs_closure_3(bv_extend_defs_funtype_1_t closure, mpz_ptr_t bv_extend_defs__N){
        bv_extend_defs_closure_3_t x = (bv_extend_defs_closure_3_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

bv_extend_defs_closure_3_t copy_bv_extend_defs_closure_3(bv_extend_defs_closure_3_t x){
        bv_extend_defs_closure_3_t y = new_bv_extend_defs_closure_3();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        mpz_set(y->fvar_2, x->fvar_2);
        if (x->htbl != NULL){
            bv_extend_defs_funtype_1_htbl_t new_htbl = (bv_extend_defs_funtype_1_htbl_t) safe_malloc(sizeof(struct bv_extend_defs_funtype_1_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            bv_extend_defs_funtype_1_hashentry_t * new_data = (bv_extend_defs_funtype_1_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct bv_extend_defs_funtype_1_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct bv_extend_defs_funtype_1_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bv_extend_defs_funtype_0_t f_bv_extend_defs_closure_4(struct bv_extend_defs_closure_4_s * closure, bv_extend_defs_funtype_0_t bvar){
        bv_extend_defs_funtype_0_t result = h_bv_extend_defs_closure_4(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bv_extend_defs_funtype_0_t m_bv_extend_defs_closure_4(struct bv_extend_defs_closure_4_s * closure, bv_extend_defs_funtype_0_t bvar){
        return h_bv_extend_defs_closure_4(bvar, closure->fvar_1, closure->fvar_2);}

bv_extend_defs_funtype_0_t h_bv_extend_defs_closure_4(bv_extend_defs_funtype_0_t ivar_5, mpz_ptr_t ivar_1, mpz_ptr_t bv_extend_defs__N){
        bv_extend_defs_funtype_0_t result;
        /* n */ mpz_ptr_t ivar_34;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_34, bv_extend_defs__N);
        /* m */ mpz_ptr_t ivar_35;
        mpz_ptr_t ivar_31;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_31, ivar_1);
        mpz_ptr_t ivar_32;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_32, bv_extend_defs__N);
        mpz_mk_sub(ivar_35, ivar_31, ivar_32);
        bv_extend_defs_funtype_0_t ivar_38;
        /* N */ mpz_ptr_t ivar_20;
        mpz_ptr_t ivar_17;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_17, ivar_1);
        mpz_ptr_t ivar_18;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_18, bv_extend_defs__N);
        mpz_mk_sub(ivar_20, ivar_17, ivar_18);
        bool_t ivar_21;
        ivar_21 = (bool_t) false;
        ivar_38 = (bv_extend_defs_funtype_0_t)bv__fill((mpz_ptr_t)ivar_20, (bool_t)ivar_21);
        result = (bv_extend_defs_funtype_0_t)bv_concat_def__oh((mpz_ptr_t)ivar_34, (mpz_ptr_t)ivar_35, (bv_concat_def_funtype_0_t)ivar_5, (bv_concat_def_funtype_0_t)ivar_38);

        return result;
}

bv_extend_defs_closure_4_t new_bv_extend_defs_closure_4(void){
        static struct bv_extend_defs_funtype_1_ftbl_s ftbl = {.fptr = (bv_extend_defs_funtype_0_t (*)(bv_extend_defs_funtype_1_t, bv_extend_defs_funtype_0_t))&f_bv_extend_defs_closure_4, .mptr = (bv_extend_defs_funtype_0_t (*)(bv_extend_defs_funtype_1_t, bv_extend_defs_funtype_0_t))&m_bv_extend_defs_closure_4, .rptr =  (void (*)(bv_extend_defs_funtype_1_t))&release_bv_extend_defs_closure_4, .cptr = (bv_extend_defs_funtype_1_t (*)(bv_extend_defs_funtype_1_t))&copy_bv_extend_defs_closure_4};
        bv_extend_defs_closure_4_t tmp = (bv_extend_defs_closure_4_t) safe_malloc(sizeof(struct bv_extend_defs_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_bv_extend_defs_closure_4(bv_extend_defs_funtype_1_t closure, mpz_ptr_t bv_extend_defs__N){
        bv_extend_defs_closure_4_t x = (bv_extend_defs_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

bv_extend_defs_closure_4_t copy_bv_extend_defs_closure_4(bv_extend_defs_closure_4_t x){
        bv_extend_defs_closure_4_t y = new_bv_extend_defs_closure_4();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        mpz_set(y->fvar_2, x->fvar_2);
        if (x->htbl != NULL){
            bv_extend_defs_funtype_1_htbl_t new_htbl = (bv_extend_defs_funtype_1_htbl_t) safe_malloc(sizeof(struct bv_extend_defs_funtype_1_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            bv_extend_defs_funtype_1_hashentry_t * new_data = (bv_extend_defs_funtype_1_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct bv_extend_defs_funtype_1_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct bv_extend_defs_funtype_1_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bv_extend_defs_funtype_0_t f_bv_extend_defs_closure_5(struct bv_extend_defs_closure_5_s * closure, bv_extend_defs_funtype_0_t bvar){
        bv_extend_defs_funtype_0_t result = h_bv_extend_defs_closure_5(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bv_extend_defs_funtype_0_t m_bv_extend_defs_closure_5(struct bv_extend_defs_closure_5_s * closure, bv_extend_defs_funtype_0_t bvar){
        return h_bv_extend_defs_closure_5(bvar, closure->fvar_1, closure->fvar_2);}

bv_extend_defs_funtype_0_t h_bv_extend_defs_closure_5(bv_extend_defs_funtype_0_t ivar_5, mpz_ptr_t ivar_1, mpz_ptr_t bv_extend_defs__N){
        bv_extend_defs_funtype_0_t result;
        /* n */ mpz_ptr_t ivar_42;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_42, bv_extend_defs__N);
        /* m */ mpz_ptr_t ivar_43;
        mpz_ptr_t ivar_39;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_39, ivar_1);
        mpz_ptr_t ivar_40;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_40, bv_extend_defs__N);
        mpz_mk_sub(ivar_43, ivar_39, ivar_40);
        bv_extend_defs_funtype_0_t ivar_46;
        /* N */ mpz_ptr_t ivar_28;
        mpz_ptr_t ivar_25;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_25, ivar_1);
        mpz_ptr_t ivar_26;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_26, bv_extend_defs__N);
        mpz_mk_sub(ivar_28, ivar_25, ivar_26);
        bool_t ivar_29;
        /* N */ mpz_ptr_t ivar_19;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_19, bv_extend_defs__N);
        uint8_t ivar_23;
        ivar_23 = (uint8_t)0;
        mpz_ptr_t ivar_22;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_22, ivar_23);
        ivar_5->count++;
        ivar_29 = (bool_t)bv__caret((mpz_ptr_t)ivar_19, (bv_funtype_0_t)ivar_5, (mpz_ptr_t)ivar_22);
        ivar_46 = (bv_extend_defs_funtype_0_t)bv__fill((mpz_ptr_t)ivar_28, (bool_t)ivar_29);
        result = (bv_extend_defs_funtype_0_t)bv_concat_def__oh((mpz_ptr_t)ivar_42, (mpz_ptr_t)ivar_43, (bv_concat_def_funtype_0_t)ivar_5, (bv_concat_def_funtype_0_t)ivar_46);

        return result;
}

bv_extend_defs_closure_5_t new_bv_extend_defs_closure_5(void){
        static struct bv_extend_defs_funtype_1_ftbl_s ftbl = {.fptr = (bv_extend_defs_funtype_0_t (*)(bv_extend_defs_funtype_1_t, bv_extend_defs_funtype_0_t))&f_bv_extend_defs_closure_5, .mptr = (bv_extend_defs_funtype_0_t (*)(bv_extend_defs_funtype_1_t, bv_extend_defs_funtype_0_t))&m_bv_extend_defs_closure_5, .rptr =  (void (*)(bv_extend_defs_funtype_1_t))&release_bv_extend_defs_closure_5, .cptr = (bv_extend_defs_funtype_1_t (*)(bv_extend_defs_funtype_1_t))&copy_bv_extend_defs_closure_5};
        bv_extend_defs_closure_5_t tmp = (bv_extend_defs_closure_5_t) safe_malloc(sizeof(struct bv_extend_defs_closure_5_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_bv_extend_defs_closure_5(bv_extend_defs_funtype_1_t closure, mpz_ptr_t bv_extend_defs__N){
        bv_extend_defs_closure_5_t x = (bv_extend_defs_closure_5_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

bv_extend_defs_closure_5_t copy_bv_extend_defs_closure_5(bv_extend_defs_closure_5_t x){
        bv_extend_defs_closure_5_t y = new_bv_extend_defs_closure_5();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        mpz_set(y->fvar_2, x->fvar_2);
        if (x->htbl != NULL){
            bv_extend_defs_funtype_1_htbl_t new_htbl = (bv_extend_defs_funtype_1_htbl_t) safe_malloc(sizeof(struct bv_extend_defs_funtype_1_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            bv_extend_defs_funtype_1_hashentry_t * new_data = (bv_extend_defs_funtype_1_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct bv_extend_defs_funtype_1_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct bv_extend_defs_funtype_1_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bv_extend_defs_funtype_0_t f_bv_extend_defs_closure_6(struct bv_extend_defs_closure_6_s * closure, bv_extend_defs_funtype_0_t bvar){
        bv_extend_defs_funtype_0_t result = h_bv_extend_defs_closure_6(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

bv_extend_defs_funtype_0_t m_bv_extend_defs_closure_6(struct bv_extend_defs_closure_6_s * closure, bv_extend_defs_funtype_0_t bvar){
        return h_bv_extend_defs_closure_6(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

bv_extend_defs_funtype_0_t h_bv_extend_defs_closure_6(bv_extend_defs_funtype_0_t ivar_6, mpz_ptr_t ivar_1, mpz_ptr_t bv_extend_defs__N, bool_t ivar_2){
        bv_extend_defs_funtype_0_t result;
        /* n */ mpz_ptr_t ivar_35;
        mpz_ptr_t ivar_32;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_32, ivar_1);
        mpz_ptr_t ivar_33;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_33, bv_extend_defs__N);
        mpz_mk_sub(ivar_35, ivar_32, ivar_33);
        /* m */ mpz_ptr_t ivar_36;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_36, bv_extend_defs__N);
        bv_extend_defs_funtype_0_t ivar_37;
        /* N */ mpz_ptr_t ivar_21;
        mpz_ptr_t ivar_18;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_18, ivar_1);
        mpz_ptr_t ivar_19;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_19, bv_extend_defs__N);
        mpz_mk_sub(ivar_21, ivar_18, ivar_19);
        ivar_37 = (bv_extend_defs_funtype_0_t)bv__fill((mpz_ptr_t)ivar_21, (bool_t)ivar_2);
        result = (bv_extend_defs_funtype_0_t)bv_concat_def__oh((mpz_ptr_t)ivar_35, (mpz_ptr_t)ivar_36, (bv_concat_def_funtype_0_t)ivar_37, (bv_concat_def_funtype_0_t)ivar_6);

        return result;
}

bv_extend_defs_closure_6_t new_bv_extend_defs_closure_6(void){
        static struct bv_extend_defs_funtype_1_ftbl_s ftbl = {.fptr = (bv_extend_defs_funtype_0_t (*)(bv_extend_defs_funtype_1_t, bv_extend_defs_funtype_0_t))&f_bv_extend_defs_closure_6, .mptr = (bv_extend_defs_funtype_0_t (*)(bv_extend_defs_funtype_1_t, bv_extend_defs_funtype_0_t))&m_bv_extend_defs_closure_6, .rptr =  (void (*)(bv_extend_defs_funtype_1_t))&release_bv_extend_defs_closure_6, .cptr = (bv_extend_defs_funtype_1_t (*)(bv_extend_defs_funtype_1_t))&copy_bv_extend_defs_closure_6};
        bv_extend_defs_closure_6_t tmp = (bv_extend_defs_closure_6_t) safe_malloc(sizeof(struct bv_extend_defs_closure_6_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_bv_extend_defs_closure_6(bv_extend_defs_funtype_1_t closure, mpz_ptr_t bv_extend_defs__N){
        bv_extend_defs_closure_6_t x = (bv_extend_defs_closure_6_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

bv_extend_defs_closure_6_t copy_bv_extend_defs_closure_6(bv_extend_defs_closure_6_t x){
        bv_extend_defs_closure_6_t y = new_bv_extend_defs_closure_6();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        mpz_set(y->fvar_2, x->fvar_2);
        y->fvar_3 = (bool_t)x->fvar_3;
        if (x->htbl != NULL){
            bv_extend_defs_funtype_1_htbl_t new_htbl = (bv_extend_defs_funtype_1_htbl_t) safe_malloc(sizeof(struct bv_extend_defs_funtype_1_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            bv_extend_defs_funtype_1_hashentry_t * new_data = (bv_extend_defs_funtype_1_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct bv_extend_defs_funtype_1_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct bv_extend_defs_funtype_1_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bv_extend_defs_funtype_0_t f_bv_extend_defs_closure_7(struct bv_extend_defs_closure_7_s * closure, bv_extend_defs_funtype_0_t bvar){
        bv_extend_defs_funtype_0_t result = h_bv_extend_defs_closure_7(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

bv_extend_defs_funtype_0_t m_bv_extend_defs_closure_7(struct bv_extend_defs_closure_7_s * closure, bv_extend_defs_funtype_0_t bvar){
        return h_bv_extend_defs_closure_7(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

bv_extend_defs_funtype_0_t h_bv_extend_defs_closure_7(bv_extend_defs_funtype_0_t ivar_6, mpz_ptr_t ivar_1, mpz_ptr_t bv_extend_defs__N, bool_t ivar_2){
        bv_extend_defs_funtype_0_t result;
        /* n */ mpz_ptr_t ivar_35;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_35, bv_extend_defs__N);
        /* m */ mpz_ptr_t ivar_36;
        mpz_ptr_t ivar_32;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_32, ivar_1);
        mpz_ptr_t ivar_33;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_33, bv_extend_defs__N);
        mpz_mk_sub(ivar_36, ivar_32, ivar_33);
        bv_extend_defs_funtype_0_t ivar_39;
        /* N */ mpz_ptr_t ivar_21;
        mpz_ptr_t ivar_18;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_18, ivar_1);
        mpz_ptr_t ivar_19;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_19, bv_extend_defs__N);
        mpz_mk_sub(ivar_21, ivar_18, ivar_19);
        ivar_39 = (bv_extend_defs_funtype_0_t)bv__fill((mpz_ptr_t)ivar_21, (bool_t)ivar_2);
        result = (bv_extend_defs_funtype_0_t)bv_concat_def__oh((mpz_ptr_t)ivar_35, (mpz_ptr_t)ivar_36, (bv_concat_def_funtype_0_t)ivar_6, (bv_concat_def_funtype_0_t)ivar_39);

        return result;
}

bv_extend_defs_closure_7_t new_bv_extend_defs_closure_7(void){
        static struct bv_extend_defs_funtype_1_ftbl_s ftbl = {.fptr = (bv_extend_defs_funtype_0_t (*)(bv_extend_defs_funtype_1_t, bv_extend_defs_funtype_0_t))&f_bv_extend_defs_closure_7, .mptr = (bv_extend_defs_funtype_0_t (*)(bv_extend_defs_funtype_1_t, bv_extend_defs_funtype_0_t))&m_bv_extend_defs_closure_7, .rptr =  (void (*)(bv_extend_defs_funtype_1_t))&release_bv_extend_defs_closure_7, .cptr = (bv_extend_defs_funtype_1_t (*)(bv_extend_defs_funtype_1_t))&copy_bv_extend_defs_closure_7};
        bv_extend_defs_closure_7_t tmp = (bv_extend_defs_closure_7_t) safe_malloc(sizeof(struct bv_extend_defs_closure_7_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_bv_extend_defs_closure_7(bv_extend_defs_funtype_1_t closure, mpz_ptr_t bv_extend_defs__N){
        bv_extend_defs_closure_7_t x = (bv_extend_defs_closure_7_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

bv_extend_defs_closure_7_t copy_bv_extend_defs_closure_7(bv_extend_defs_closure_7_t x){
        bv_extend_defs_closure_7_t y = new_bv_extend_defs_closure_7();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        mpz_set(y->fvar_2, x->fvar_2);
        y->fvar_3 = (bool_t)x->fvar_3;
        if (x->htbl != NULL){
            bv_extend_defs_funtype_1_htbl_t new_htbl = (bv_extend_defs_funtype_1_htbl_t) safe_malloc(sizeof(struct bv_extend_defs_funtype_1_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            bv_extend_defs_funtype_1_hashentry_t * new_data = (bv_extend_defs_funtype_1_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct bv_extend_defs_funtype_1_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct bv_extend_defs_funtype_1_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

bv_extend_defs_funtype_1_t bv_extend_defs__zero_extend(mpz_ptr_t bv_extend_defs__N, mpz_ptr_t ivar_1){
        bv_extend_defs_funtype_1_t  result;
        bv_extend_defs_closure_2_t cl2905;
        cl2905 = new_bv_extend_defs_closure_2();
        mpz_set(cl2905->fvar_1, ivar_1);
        mpz_set(cl2905->fvar_2, bv_extend_defs__N);
        result = (bv_extend_defs_funtype_1_t)cl2905;

        
        return result;
}

bv_extend_defs_funtype_1_t bv_extend_defs__sign_extend(mpz_ptr_t bv_extend_defs__N, mpz_ptr_t ivar_1){
        bv_extend_defs_funtype_1_t  result;
        bv_extend_defs_closure_3_t cl2922;
        cl2922 = new_bv_extend_defs_closure_3();
        mpz_set(cl2922->fvar_1, ivar_1);
        mpz_set(cl2922->fvar_2, bv_extend_defs__N);
        result = (bv_extend_defs_funtype_1_t)cl2922;

        
        return result;
}

bv_extend_defs_funtype_1_t bv_extend_defs__zero_extend_lsend(mpz_ptr_t bv_extend_defs__N, mpz_ptr_t ivar_1){
        bv_extend_defs_funtype_1_t  result;
        bv_extend_defs_closure_4_t cl2937;
        cl2937 = new_bv_extend_defs_closure_4();
        mpz_set(cl2937->fvar_1, ivar_1);
        mpz_set(cl2937->fvar_2, bv_extend_defs__N);
        result = (bv_extend_defs_funtype_1_t)cl2937;

        
        return result;
}

bv_extend_defs_funtype_1_t bv_extend_defs__lsb_extend(mpz_ptr_t bv_extend_defs__N, mpz_ptr_t ivar_1){
        bv_extend_defs_funtype_1_t  result;
        bv_extend_defs_closure_5_t cl2954;
        cl2954 = new_bv_extend_defs_closure_5();
        mpz_set(cl2954->fvar_1, ivar_1);
        mpz_set(cl2954->fvar_2, bv_extend_defs__N);
        result = (bv_extend_defs_funtype_1_t)cl2954;

        
        return result;
}

bv_extend_defs_funtype_1_t bv_extend_defs__pad_left(mpz_ptr_t bv_extend_defs__N, mpz_ptr_t ivar_1, bool_t ivar_2){
        bv_extend_defs_funtype_1_t  result;
        bv_extend_defs_closure_6_t cl2969;
        cl2969 = new_bv_extend_defs_closure_6();
        mpz_set(cl2969->fvar_1, ivar_1);
        mpz_set(cl2969->fvar_2, bv_extend_defs__N);
        cl2969->fvar_3 = (bool_t)ivar_2;
        result = (bv_extend_defs_funtype_1_t)cl2969;

        
        return result;
}

bv_extend_defs_funtype_1_t bv_extend_defs__pad_right(mpz_ptr_t bv_extend_defs__N, mpz_ptr_t ivar_1, bool_t ivar_2){
        bv_extend_defs_funtype_1_t  result;
        bv_extend_defs_closure_7_t cl2984;
        cl2984 = new_bv_extend_defs_closure_7();
        mpz_set(cl2984->fvar_1, ivar_1);
        mpz_set(cl2984->fvar_2, bv_extend_defs__N);
        cl2984->fvar_3 = (bool_t)ivar_2;
        result = (bv_extend_defs_funtype_1_t)cl2984;

        
        return result;
}