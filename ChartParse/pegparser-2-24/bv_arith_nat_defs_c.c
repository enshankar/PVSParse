//Code generated using pvs2ir2c
#include "bv_arith_nat_defs_c.h"

void release_bv_arith_nat_defs_funtype_0(bv_arith_nat_defs_funtype_0_t x, mpz_ptr_t bv_arith_nat_defs__N){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

bv_arith_nat_defs_funtype_0_t copy_bv_arith_nat_defs_funtype_0(bv_arith_nat_defs_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_bv_arith_nat_defs_funtype_0(bv_arith_nat_defs_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        bv_arith_nat_defs_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp2631 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp2631 == 0);
        bool_t keymatch;
        int64_t tmp2632 = mpz_cmp(data.key, i);
        keymatch = (tmp2632 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                int64_t tmp2631 = mpz_cmp_ui(data.key, 0);
                keyzero = (tmp2631 == 0);

                int64_t tmp2632 = mpz_cmp(data.key, i);
                keymatch = (tmp2632 == 0);
                }
        return hashindex;
        }

bv_arith_nat_defs_funtype_0_t dupdate_bv_arith_nat_defs_funtype_0(bv_arith_nat_defs_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_arith_nat_defs__N){
        bv_arith_nat_defs_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (bv_arith_nat_defs_funtype_0_htbl_t)safe_malloc(sizeof(struct bv_arith_nat_defs_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (bv_arith_nat_defs_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct bv_arith_nat_defs_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        bv_arith_nat_defs_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                bv_arith_nat_defs_funtype_0_hashentry_t * new_data = (bv_arith_nat_defs_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct bv_arith_nat_defs_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp2633 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp2633 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp2634 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp2634 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp2635 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp2635 == 0);
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
        uint32_t hashindex = lookup_bv_arith_nat_defs_funtype_0(htbl, i, ihash);
        bv_arith_nat_defs_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp2636 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp2636 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

bv_arith_nat_defs_funtype_0_t update_bv_arith_nat_defs_funtype_0(bv_arith_nat_defs_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_arith_nat_defs__N){
        if (a->count == 1){
                return dupdate_bv_arith_nat_defs_funtype_0(a, i, v, bv_arith_nat_defs__N);
            } else {
                bv_arith_nat_defs_funtype_0_t x = copy_bv_arith_nat_defs_funtype_0(a);
                a->count--;
                return dupdate_bv_arith_nat_defs_funtype_0(x, i, v, bv_arith_nat_defs__N);
            }}

bool_t equal_bv_arith_nat_defs_funtype_0(bv_arith_nat_defs_funtype_0_t x, bv_arith_nat_defs_funtype_0_t y, mpz_ptr_t bv_arith_nat_defs__N){
        return false;}

char* json_bv_arith_nat_defs_funtype_0(bv_arith_nat_defs_funtype_0_t x, mpz_ptr_t bv_arith_nat_defs__N){char * result = safe_malloc(37); sprintf(result, "%s", "\"bv_arith_nat_defs_funtype_0\""); return result;}

bool_t bv_arith_nat_defs__lessp(mpz_ptr_t bv_arith_nat_defs__N, bv_arith_nat_defs_funtype_0_t ivar_1, bv_arith_nat_defs_funtype_0_t ivar_3){
        bool_t  result;
        mpz_ptr_t ivar_5;
        pvs2cerror("Non-executable theory: bv_nat", PVS2C_EXIT_ERROR);
        mpz_ptr_t ivar_6;
        pvs2cerror("Non-executable theory: bv_nat", PVS2C_EXIT_ERROR);
        int64_t tmp2637 = mpz_cmp(ivar_5, ivar_6);
        result = (tmp2637 < 0);

        
        return result;
}

bool_t bv_arith_nat_defs__lesseqp(mpz_ptr_t bv_arith_nat_defs__N, bv_arith_nat_defs_funtype_0_t ivar_1, bv_arith_nat_defs_funtype_0_t ivar_3){
        bool_t  result;
        mpz_ptr_t ivar_5;
        pvs2cerror("Non-executable theory: bv_nat", PVS2C_EXIT_ERROR);
        mpz_ptr_t ivar_6;
        pvs2cerror("Non-executable theory: bv_nat", PVS2C_EXIT_ERROR);
        int64_t tmp2644 = mpz_cmp(ivar_5, ivar_6);
        result = (tmp2644 <= 0);

        
        return result;
}

bool_t bv_arith_nat_defs__greaterp(mpz_ptr_t bv_arith_nat_defs__N, bv_arith_nat_defs_funtype_0_t ivar_1, bv_arith_nat_defs_funtype_0_t ivar_3){
        bool_t  result;
        mpz_ptr_t ivar_5;
        pvs2cerror("Non-executable theory: bv_nat", PVS2C_EXIT_ERROR);
        mpz_ptr_t ivar_6;
        pvs2cerror("Non-executable theory: bv_nat", PVS2C_EXIT_ERROR);
        int64_t tmp2651 = mpz_cmp(ivar_5, ivar_6);
        result = (tmp2651 > 0);

        
        return result;
}

bool_t bv_arith_nat_defs__greatereqp(mpz_ptr_t bv_arith_nat_defs__N, bv_arith_nat_defs_funtype_0_t ivar_1, bv_arith_nat_defs_funtype_0_t ivar_3){
        bool_t  result;
        mpz_ptr_t ivar_5;
        pvs2cerror("Non-executable theory: bv_nat", PVS2C_EXIT_ERROR);
        mpz_ptr_t ivar_6;
        pvs2cerror("Non-executable theory: bv_nat", PVS2C_EXIT_ERROR);
        int64_t tmp2658 = mpz_cmp(ivar_5, ivar_6);
        result = (tmp2658 >= 0);

        
        return result;
}

bv_arith_nat_defs_funtype_0_t bv_arith_nat_defs__plus__1(mpz_ptr_t bv_arith_nat_defs__N, bv_arith_nat_defs_funtype_0_t ivar_1, mpz_ptr_t ivar_2){
        bv_arith_nat_defs_funtype_0_t  result;
        pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        
        return result;
}

bv_arith_nat_defs_funtype_0_t bv_arith_nat_defs__difference(mpz_ptr_t bv_arith_nat_defs__N, bv_arith_nat_defs_funtype_0_t ivar_1, mpz_ptr_t ivar_3){
        bv_arith_nat_defs_funtype_0_t  result;
        mpz_ptr_t ivar_14;
        mpz_mk_set(ivar_14, ivar_3);
        mpz_neg(ivar_14, ivar_14);
        result = (bv_arith_nat_defs_funtype_0_t)bv_arith_nat_defs__plus__1((mpz_ptr_t)bv_arith_nat_defs__N, (bv_arith_nat_defs_funtype_0_t)ivar_1, (mpz_ptr_t)ivar_14);

        
        return result;
}

bv_arith_nat_defs_funtype_0_t bv_arith_nat_defs__plus__2(mpz_ptr_t bv_arith_nat_defs__N, bv_arith_nat_defs_funtype_0_t ivar_1, bv_arith_nat_defs_funtype_0_t ivar_2){
        bv_arith_nat_defs_funtype_0_t  result;
        pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        
        return result;
}

bv_arith_nat_defs_funtype_0_t bv_arith_nat_defs__times(mpz_ptr_t bv_arith_nat_defs__N, bv_arith_nat_defs_funtype_0_t ivar_1, bv_arith_nat_defs_funtype_0_t ivar_2){
        bv_arith_nat_defs_funtype_0_t  result;
        pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        
        return result;
}