//Code generated using pvs2ir2c
#include "bv_int_defs_c.h"

void release_bv_int_defs_funtype_0(bv_int_defs_funtype_0_t x, mpz_ptr_t bv_int_defs__N){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

bv_int_defs_funtype_0_t copy_bv_int_defs_funtype_0(bv_int_defs_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_bv_int_defs_funtype_0(bv_int_defs_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        bv_int_defs_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp2699 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp2699 == 0);
        bool_t keymatch;
        int64_t tmp2700 = mpz_cmp(data.key, i);
        keymatch = (tmp2700 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                int64_t tmp2699 = mpz_cmp_ui(data.key, 0);
                keyzero = (tmp2699 == 0);

                int64_t tmp2700 = mpz_cmp(data.key, i);
                keymatch = (tmp2700 == 0);
                }
        return hashindex;
        }

bv_int_defs_funtype_0_t dupdate_bv_int_defs_funtype_0(bv_int_defs_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_int_defs__N){
        bv_int_defs_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (bv_int_defs_funtype_0_htbl_t)safe_malloc(sizeof(struct bv_int_defs_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (bv_int_defs_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct bv_int_defs_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        bv_int_defs_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                bv_int_defs_funtype_0_hashentry_t * new_data = (bv_int_defs_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct bv_int_defs_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp2701 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp2701 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp2702 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp2702 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp2703 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp2703 == 0);
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
        uint32_t hashindex = lookup_bv_int_defs_funtype_0(htbl, i, ihash);
        bv_int_defs_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp2704 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp2704 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

bv_int_defs_funtype_0_t update_bv_int_defs_funtype_0(bv_int_defs_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_int_defs__N){
        if (a->count == 1){
                return dupdate_bv_int_defs_funtype_0(a, i, v, bv_int_defs__N);
            } else {
                bv_int_defs_funtype_0_t x = copy_bv_int_defs_funtype_0(a);
                a->count--;
                return dupdate_bv_int_defs_funtype_0(x, i, v, bv_int_defs__N);
            }}

bool_t equal_bv_int_defs_funtype_0(bv_int_defs_funtype_0_t x, bv_int_defs_funtype_0_t y, mpz_ptr_t bv_int_defs__N){
        return false;}

char* json_bv_int_defs_funtype_0(bv_int_defs_funtype_0_t x, mpz_ptr_t bv_int_defs__N){char * result = safe_malloc(31); sprintf(result, "%s", "\"bv_int_defs_funtype_0\""); return result;}

mpz_ptr_t bv_int_defs__minint(mpz_ptr_t bv_int_defs__N){
        mpz_ptr_t  result;
        mpz_ptr_t ivar_1;
        mpz_ptr_t ivar_7;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)1;
        mpz_mk_sub_ui(ivar_7, bv_int_defs__N, (uint64_t)ivar_4);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_7);
        mpz_mk_set(result, ivar_1);
        mpz_neg(result, result);

        
        return result;
}

mpz_ptr_t bv_int_defs__maxint(mpz_ptr_t bv_int_defs__N){
        mpz_ptr_t  result;
        mpz_ptr_t ivar_1;
        mpz_ptr_t ivar_8;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)1;
        mpz_mk_sub_ui(ivar_8, bv_int_defs__N, (uint64_t)ivar_5);
        ivar_1 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_8);
        uint8_t ivar_2;
        ivar_2 = (uint8_t)1;
        mpz_mk_sub_ui(result, ivar_1, (uint64_t)ivar_2);

        
        return result;
}

bool_t bv_int_defs__in_rng_2s_comp(mpz_ptr_t bv_int_defs__N, mpz_ptr_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        mpz_ptr_t ivar_4;
        ivar_4 = (mpz_ptr_t)bv_int_defs__minint((mpz_ptr_t)bv_int_defs__N);
        int64_t tmp2685 = mpz_cmp(ivar_4, ivar_1);
        ivar_2 = (tmp2685 <= 0);
        if (ivar_2){ 
             mpz_ptr_t ivar_9;
             ivar_9 = (mpz_ptr_t)bv_int_defs__maxint((mpz_ptr_t)bv_int_defs__N);
             int64_t tmp2686 = mpz_cmp(ivar_1, ivar_9);
             result = (tmp2686 <= 0);
} else {
        
             result = (bool_t) false;
};

        
        return result;
}

mpz_ptr_t bv_int_defs__bv2int(mpz_ptr_t bv_int_defs__N, bv_int_defs_funtype_0_t ivar_1){
        mpz_ptr_t  result;
        bool_t ivar_3;
        mpz_ptr_t ivar_4;
        pvs2cerror("Non-executable theory: bv_nat", PVS2C_EXIT_ERROR);
        mpz_ptr_t ivar_5;
        mpz_ptr_t ivar_16;
        uint8_t ivar_13;
        ivar_13 = (uint8_t)1;
        mpz_mk_sub_ui(ivar_16, bv_int_defs__N, (uint64_t)ivar_13);
        ivar_5 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)ivar_16);
        int64_t tmp2705 = mpz_cmp(ivar_4, ivar_5);
        ivar_3 = (tmp2705 < 0);
        if (ivar_3){ 
             pvs2cerror("Non-executable theory: bv_nat", PVS2C_EXIT_ERROR);
} else {
        
             mpz_ptr_t ivar_26;
             pvs2cerror("Non-executable theory: bv_nat", PVS2C_EXIT_ERROR);
             mpz_ptr_t ivar_27;
             ivar_27 = (mpz_ptr_t)exp2__exp2((mpz_ptr_t)bv_int_defs__N);
             mpz_mk_sub(result, ivar_26, ivar_27);
};

        
        return result;
}

bv_int_defs_funtype_0_t bv_int_defs__int2bv(mpz_ptr_t bv_int_defs__N, mpz_ptr_t ivar_1){
        bv_int_defs_funtype_0_t  result;
        pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        
        return result;
}