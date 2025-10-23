//Code generated using pvs2ir2c
#include "bv_arithmetic_defs_c.h"

void release_bv_arithmetic_defs_funtype_0(bv_arithmetic_defs_funtype_0_t x, mpz_ptr_t bv_arithmetic_defs__N){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

bv_arithmetic_defs_funtype_0_t copy_bv_arithmetic_defs_funtype_0(bv_arithmetic_defs_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_bv_arithmetic_defs_funtype_0(bv_arithmetic_defs_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        bv_arithmetic_defs_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp2712 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp2712 == 0);
        bool_t keymatch;
        int64_t tmp2713 = mpz_cmp(data.key, i);
        keymatch = (tmp2713 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                int64_t tmp2712 = mpz_cmp_ui(data.key, 0);
                keyzero = (tmp2712 == 0);

                int64_t tmp2713 = mpz_cmp(data.key, i);
                keymatch = (tmp2713 == 0);
                }
        return hashindex;
        }

bv_arithmetic_defs_funtype_0_t dupdate_bv_arithmetic_defs_funtype_0(bv_arithmetic_defs_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_arithmetic_defs__N){
        bv_arithmetic_defs_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (bv_arithmetic_defs_funtype_0_htbl_t)safe_malloc(sizeof(struct bv_arithmetic_defs_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (bv_arithmetic_defs_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct bv_arithmetic_defs_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        bv_arithmetic_defs_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                bv_arithmetic_defs_funtype_0_hashentry_t * new_data = (bv_arithmetic_defs_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct bv_arithmetic_defs_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp2714 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp2714 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp2715 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp2715 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp2716 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp2716 == 0);
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
        uint32_t hashindex = lookup_bv_arithmetic_defs_funtype_0(htbl, i, ihash);
        bv_arithmetic_defs_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp2717 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp2717 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

bv_arithmetic_defs_funtype_0_t update_bv_arithmetic_defs_funtype_0(bv_arithmetic_defs_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_arithmetic_defs__N){
        if (a->count == 1){
                return dupdate_bv_arithmetic_defs_funtype_0(a, i, v, bv_arithmetic_defs__N);
            } else {
                bv_arithmetic_defs_funtype_0_t x = copy_bv_arithmetic_defs_funtype_0(a);
                a->count--;
                return dupdate_bv_arithmetic_defs_funtype_0(x, i, v, bv_arithmetic_defs__N);
            }}

bool_t equal_bv_arithmetic_defs_funtype_0(bv_arithmetic_defs_funtype_0_t x, bv_arithmetic_defs_funtype_0_t y, mpz_ptr_t bv_arithmetic_defs__N){
        return false;}

char* json_bv_arithmetic_defs_funtype_0(bv_arithmetic_defs_funtype_0_t x, mpz_ptr_t bv_arithmetic_defs__N){char * result = safe_malloc(38); sprintf(result, "%s", "\"bv_arithmetic_defs_funtype_0\""); return result;}


bool_t f_bv_arithmetic_defs_closure_1(struct bv_arithmetic_defs_closure_1_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        bv_arithmetic_defs_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_bv_arithmetic_defs_funtype_0(htbl, bvar, hash);
        bv_arithmetic_defs_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp2883 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp2883 == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_bv_arithmetic_defs_closure_1(bvar, closure->fvar_1);};

return h_bv_arithmetic_defs_closure_1(bvar, closure->fvar_1);}

bool_t m_bv_arithmetic_defs_closure_1(struct bv_arithmetic_defs_closure_1_s * closure, mpz_ptr_t bvar){
        return h_bv_arithmetic_defs_closure_1(bvar, closure->fvar_1);}

bool_t h_bv_arithmetic_defs_closure_1(mpz_ptr_t ivar_10, mpz_ptr_t bv_arithmetic_defs__N){
        bool_t result;
        result = (bool_t) false;

        return result;
}

bv_arithmetic_defs_closure_1_t new_bv_arithmetic_defs_closure_1(void){
        static struct bv_arithmetic_defs_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(bv_arithmetic_defs_funtype_0_t, mpz_ptr_t))&f_bv_arithmetic_defs_closure_1, .mptr = (bool_t (*)(bv_arithmetic_defs_funtype_0_t, mpz_ptr_t))&m_bv_arithmetic_defs_closure_1, .rptr =  (void (*)(bv_arithmetic_defs_funtype_0_t))&release_bv_arithmetic_defs_closure_1, .cptr = (bv_arithmetic_defs_funtype_0_t (*)(bv_arithmetic_defs_funtype_0_t))&copy_bv_arithmetic_defs_closure_1};
        bv_arithmetic_defs_closure_1_t tmp = (bv_arithmetic_defs_closure_1_t) safe_malloc(sizeof(struct bv_arithmetic_defs_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        return tmp;}

void release_bv_arithmetic_defs_closure_1(bv_arithmetic_defs_funtype_0_t closure, mpz_ptr_t bv_arithmetic_defs__N){
        bv_arithmetic_defs_closure_1_t x = (bv_arithmetic_defs_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

bv_arithmetic_defs_closure_1_t copy_bv_arithmetic_defs_closure_1(bv_arithmetic_defs_closure_1_t x){
        bv_arithmetic_defs_closure_1_t y = new_bv_arithmetic_defs_closure_1();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        if (x->htbl != NULL){
            bv_arithmetic_defs_funtype_0_htbl_t new_htbl = (bv_arithmetic_defs_funtype_0_htbl_t) safe_malloc(sizeof(struct bv_arithmetic_defs_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            bv_arithmetic_defs_funtype_0_hashentry_t * new_data = (bv_arithmetic_defs_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct bv_arithmetic_defs_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct bv_arithmetic_defs_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

bv_arithmetic_defs_funtype_0_t bv_arithmetic_defs__difference__1(mpz_ptr_t bv_arithmetic_defs__N, bv_arithmetic_defs_funtype_0_t ivar_1){
        bv_arithmetic_defs_funtype_0_t  result;
        pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        
        return result;
}

bv_arithmetic_defs_funtype_0_t bv_arithmetic_defs__difference__2(mpz_ptr_t bv_arithmetic_defs__N, bv_arithmetic_defs_funtype_0_t ivar_1, bv_arithmetic_defs_funtype_0_t ivar_3){
        bv_arithmetic_defs_funtype_0_t  result;
        /* N */ mpz_ptr_t ivar_17;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_17, bv_arithmetic_defs__N);
        bv_arithmetic_defs_funtype_0_t ivar_20;
        ivar_20 = (bv_arithmetic_defs_funtype_0_t)bv_arithmetic_defs__difference__1((mpz_ptr_t)bv_arithmetic_defs__N, (bv_arithmetic_defs_funtype_0_t)ivar_3);
        result = (bv_arithmetic_defs_funtype_0_t)bv_arith_nat_defs__plus__2((mpz_ptr_t)ivar_17, (bv_arith_nat_defs_funtype_0_t)ivar_1, (bv_arith_nat_defs_funtype_0_t)ivar_20);

        
        return result;
}

bool_t bv_arithmetic_defs__overflow(mpz_ptr_t bv_arithmetic_defs__N, bv_arithmetic_defs_funtype_0_t ivar_1, bv_arithmetic_defs_funtype_0_t ivar_3){
        bool_t  result;
        bool_t ivar_5;
        mpz_ptr_t ivar_7;
        mpz_ptr_t ivar_9;
        /* N */ mpz_ptr_t ivar_13;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_13, bv_arithmetic_defs__N);
        ivar_1->count++;
        ivar_9 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_13, (bv_int_defs_funtype_0_t)ivar_1);
        mpz_ptr_t ivar_10;
        /* N */ mpz_ptr_t ivar_18;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_18, bv_arithmetic_defs__N);
        ivar_3->count++;
        ivar_10 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_18, (bv_int_defs_funtype_0_t)ivar_3);
        mpz_mk_add(ivar_7, ivar_10, ivar_9);
        mpz_ptr_t ivar_8;
        /* N */ mpz_ptr_t ivar_22;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_22, bv_arithmetic_defs__N);
        ivar_8 = (mpz_ptr_t)bv_int_defs__maxint((mpz_ptr_t)ivar_22);
        int64_t tmp2749 = mpz_cmp(ivar_7, ivar_8);
        ivar_5 = (tmp2749 > 0);
        if (ivar_5){ 
             release_bv_arithmetic_defs_funtype_0(ivar_3, bv_arithmetic_defs__N);
             release_bv_arithmetic_defs_funtype_0(ivar_1, bv_arithmetic_defs__N);
             result = (bool_t) true;
} else {
        
             mpz_ptr_t ivar_24;
             mpz_ptr_t ivar_26;
             /* N */ mpz_ptr_t ivar_30;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_30, bv_arithmetic_defs__N);
             ivar_26 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_30, (bv_int_defs_funtype_0_t)ivar_1);
             mpz_ptr_t ivar_27;
             /* N */ mpz_ptr_t ivar_35;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_35, bv_arithmetic_defs__N);
             ivar_27 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_35, (bv_int_defs_funtype_0_t)ivar_3);
             mpz_mk_add(ivar_24, ivar_27, ivar_26);
             mpz_ptr_t ivar_25;
             /* N */ mpz_ptr_t ivar_39;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_39, bv_arithmetic_defs__N);
             ivar_25 = (mpz_ptr_t)bv_int_defs__minint((mpz_ptr_t)ivar_39);
             int64_t tmp2750 = mpz_cmp(ivar_24, ivar_25);
             result = (tmp2750 < 0);
};

        
        return result;
}

bool_t bv_arithmetic_defs__bv_slt(mpz_ptr_t bv_arithmetic_defs__N, bv_arithmetic_defs_funtype_0_t ivar_1, bv_arithmetic_defs_funtype_0_t ivar_3){
        bool_t  result;
        mpz_ptr_t ivar_5;
        /* N */ mpz_ptr_t ivar_9;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_9, bv_arithmetic_defs__N);
        ivar_5 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_9, (bv_int_defs_funtype_0_t)ivar_1);
        mpz_ptr_t ivar_6;
        /* N */ mpz_ptr_t ivar_14;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_14, bv_arithmetic_defs__N);
        ivar_6 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_14, (bv_int_defs_funtype_0_t)ivar_3);
        int64_t tmp2763 = mpz_cmp(ivar_5, ivar_6);
        result = (tmp2763 < 0);

        
        return result;
}

bool_t bv_arithmetic_defs__bv_sle(mpz_ptr_t bv_arithmetic_defs__N, bv_arithmetic_defs_funtype_0_t ivar_1, bv_arithmetic_defs_funtype_0_t ivar_3){
        bool_t  result;
        mpz_ptr_t ivar_5;
        /* N */ mpz_ptr_t ivar_9;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_9, bv_arithmetic_defs__N);
        ivar_5 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_9, (bv_int_defs_funtype_0_t)ivar_1);
        mpz_ptr_t ivar_6;
        /* N */ mpz_ptr_t ivar_14;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_14, bv_arithmetic_defs__N);
        ivar_6 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_14, (bv_int_defs_funtype_0_t)ivar_3);
        int64_t tmp2776 = mpz_cmp(ivar_5, ivar_6);
        result = (tmp2776 <= 0);

        
        return result;
}

bool_t bv_arithmetic_defs__bv_sgt(mpz_ptr_t bv_arithmetic_defs__N, bv_arithmetic_defs_funtype_0_t ivar_1, bv_arithmetic_defs_funtype_0_t ivar_3){
        bool_t  result;
        mpz_ptr_t ivar_5;
        /* N */ mpz_ptr_t ivar_9;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_9, bv_arithmetic_defs__N);
        ivar_5 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_9, (bv_int_defs_funtype_0_t)ivar_1);
        mpz_ptr_t ivar_6;
        /* N */ mpz_ptr_t ivar_14;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_14, bv_arithmetic_defs__N);
        ivar_6 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_14, (bv_int_defs_funtype_0_t)ivar_3);
        int64_t tmp2789 = mpz_cmp(ivar_5, ivar_6);
        result = (tmp2789 > 0);

        
        return result;
}

bool_t bv_arithmetic_defs__bv_sge(mpz_ptr_t bv_arithmetic_defs__N, bv_arithmetic_defs_funtype_0_t ivar_1, bv_arithmetic_defs_funtype_0_t ivar_3){
        bool_t  result;
        mpz_ptr_t ivar_5;
        /* N */ mpz_ptr_t ivar_9;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_9, bv_arithmetic_defs__N);
        ivar_5 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_9, (bv_int_defs_funtype_0_t)ivar_1);
        mpz_ptr_t ivar_6;
        /* N */ mpz_ptr_t ivar_14;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_14, bv_arithmetic_defs__N);
        ivar_6 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_14, (bv_int_defs_funtype_0_t)ivar_3);
        int64_t tmp2802 = mpz_cmp(ivar_5, ivar_6);
        result = (tmp2802 >= 0);

        
        return result;
}

bv_arithmetic_defs_funtype_0_t bv_arithmetic_defs__bv_splus(mpz_ptr_t bv_arithmetic_defs__N, bv_arithmetic_defs_funtype_0_t ivar_1, bv_arithmetic_defs_funtype_0_t ivar_3){
        bv_arithmetic_defs_funtype_0_t  result;
        /* N */ mpz_ptr_t ivar_22;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_22, bv_arithmetic_defs__N);
        mpz_ptr_t ivar_23;
        mpz_ptr_t ivar_8;
        /* N */ mpz_ptr_t ivar_12;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_12, bv_arithmetic_defs__N);
        ivar_8 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_12, (bv_int_defs_funtype_0_t)ivar_1);
        mpz_ptr_t ivar_9;
        /* N */ mpz_ptr_t ivar_17;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_17, bv_arithmetic_defs__N);
        ivar_9 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_17, (bv_int_defs_funtype_0_t)ivar_3);
        mpz_mk_add(ivar_23, ivar_9, ivar_8);
        result = (bv_arithmetic_defs_funtype_0_t)bv_int_defs__int2bv((mpz_ptr_t)ivar_22, (mpz_ptr_t)ivar_23);

        
        return result;
}

bool_t bv_arithmetic_defs__mult_overflow(mpz_ptr_t bv_arithmetic_defs__N, bv_arithmetic_defs_funtype_0_t ivar_1, bv_arithmetic_defs_funtype_0_t ivar_3){
        bool_t  result;
        bool_t ivar_5;
        mpz_ptr_t ivar_7;
        mpz_ptr_t ivar_9;
        /* N */ mpz_ptr_t ivar_13;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_13, bv_arithmetic_defs__N);
        ivar_1->count++;
        ivar_9 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_13, (bv_int_defs_funtype_0_t)ivar_1);
        mpz_ptr_t ivar_10;
        /* N */ mpz_ptr_t ivar_18;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_18, bv_arithmetic_defs__N);
        ivar_3->count++;
        ivar_10 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_18, (bv_int_defs_funtype_0_t)ivar_3);
        mpz_mk_mul(ivar_7, ivar_10, ivar_9);
        mpz_ptr_t ivar_8;
        /* N */ mpz_ptr_t ivar_22;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_22, bv_arithmetic_defs__N);
        ivar_8 = (mpz_ptr_t)bv_int_defs__maxint((mpz_ptr_t)ivar_22);
        int64_t tmp2841 = mpz_cmp(ivar_7, ivar_8);
        ivar_5 = (tmp2841 > 0);
        if (ivar_5){ 
             release_bv_arithmetic_defs_funtype_0(ivar_3, bv_arithmetic_defs__N);
             release_bv_arithmetic_defs_funtype_0(ivar_1, bv_arithmetic_defs__N);
             result = (bool_t) true;
} else {
        
             mpz_ptr_t ivar_24;
             mpz_ptr_t ivar_26;
             /* N */ mpz_ptr_t ivar_30;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_30, bv_arithmetic_defs__N);
             ivar_26 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_30, (bv_int_defs_funtype_0_t)ivar_1);
             mpz_ptr_t ivar_27;
             /* N */ mpz_ptr_t ivar_35;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_35, bv_arithmetic_defs__N);
             ivar_27 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_35, (bv_int_defs_funtype_0_t)ivar_3);
             mpz_mk_mul(ivar_24, ivar_27, ivar_26);
             mpz_ptr_t ivar_25;
             /* N */ mpz_ptr_t ivar_39;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_39, bv_arithmetic_defs__N);
             ivar_25 = (mpz_ptr_t)bv_int_defs__minint((mpz_ptr_t)ivar_39);
             int64_t tmp2842 = mpz_cmp(ivar_24, ivar_25);
             result = (tmp2842 < 0);
};

        
        return result;
}

bv_arithmetic_defs_funtype_0_t bv_arithmetic_defs__bv_stimes(mpz_ptr_t bv_arithmetic_defs__N, bv_arithmetic_defs_funtype_0_t ivar_1, bv_arithmetic_defs_funtype_0_t ivar_3){
        bv_arithmetic_defs_funtype_0_t  result;
        /* N */ mpz_ptr_t ivar_22;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_22, bv_arithmetic_defs__N);
        mpz_ptr_t ivar_23;
        mpz_ptr_t ivar_8;
        /* N */ mpz_ptr_t ivar_12;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_12, bv_arithmetic_defs__N);
        ivar_8 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_12, (bv_int_defs_funtype_0_t)ivar_1);
        mpz_ptr_t ivar_9;
        /* N */ mpz_ptr_t ivar_17;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_17, bv_arithmetic_defs__N);
        ivar_9 = (mpz_ptr_t)bv_int_defs__bv2int((mpz_ptr_t)ivar_17, (bv_int_defs_funtype_0_t)ivar_3);
        mpz_mk_mul(ivar_23, ivar_9, ivar_8);
        result = (bv_arithmetic_defs_funtype_0_t)bv_int_defs__int2bv((mpz_ptr_t)ivar_22, (mpz_ptr_t)ivar_23);

        
        return result;
}

bv_arithmetic_defs_funtype_0_t bv_arithmetic_defs__nat2bv_rec(mpz_ptr_t bv_arithmetic_defs__N, mpz_ptr_t ivar_1, bv_arithmetic_defs_funtype_0_t ivar_5, mpz_ptr_t ivar_7){
        bv_arithmetic_defs_funtype_0_t  result;
        /* nbv */ bv_arithmetic_defs_funtype_0_t ivar_9;
        bool_t ivar_14;
        mpz_ptr_t ivar_15;
        pvs2cerror("Non-executable theory: mod", PVS2C_EXIT_ERROR);
        uint8_t ivar_16;
        ivar_16 = (uint8_t)1;
        int64_t tmp2872 = mpz_cmp_ui(ivar_15, ivar_16);
        ivar_14 = (tmp2872 == 0);
        ivar_9 = (bv_arithmetic_defs_funtype_0_t)update_bv_arithmetic_defs_funtype_0(ivar_5, ivar_7, ivar_14, bv_arithmetic_defs__N);
        bool_t ivar_27;
        uint8_t ivar_29;
        ivar_29 = (uint8_t)0;
        int64_t tmp2873 = mpz_cmp_ui(ivar_7, ivar_29);
        ivar_27 = (tmp2873 == 0);
        if (ivar_27){ 
             //copying to bv_arithmetic_defs_funtype_0 from bv_arithmetic_defs_funtype_0;
             result = (bv_arithmetic_defs_funtype_0_t)ivar_9;
             if (result != NULL) result->count++;
             release_bv_arithmetic_defs_funtype_0(ivar_9, bv_arithmetic_defs__N);
} else {
        
             mpz_ptr_t ivar_44;
             uint8_t ivar_37;
             ivar_37 = (uint8_t)2;
             mpz_mk_fdiv_q_ui(ivar_44, ivar_1, ivar_37);
             mpz_ptr_t ivar_50;
             uint8_t ivar_40;
             ivar_40 = (uint8_t)1;
             mpz_mk_sub_ui(ivar_50, ivar_7, (uint64_t)ivar_40);
             result = (bv_arithmetic_defs_funtype_0_t)bv_arithmetic_defs__nat2bv_rec(bv_arithmetic_defs__N, ivar_44, (bv_arithmetic_defs_funtype_0_t)ivar_9, ivar_50);
};

        
        return result;
}

bv_arithmetic_defs_funtype_0_t bv_arithmetic_defs__bv(mpz_ptr_t bv_arithmetic_defs__N, mpz_ptr_t ivar_1){
        bv_arithmetic_defs_funtype_0_t  result;
        bv_arithmetic_defs_funtype_0_t ivar_22;
        bv_arithmetic_defs_closure_1_t cl2884;
        cl2884 = new_bv_arithmetic_defs_closure_1();
        mpz_set(cl2884->fvar_1, bv_arithmetic_defs__N);
        ivar_22 = (bv_arithmetic_defs_funtype_0_t)cl2884;
        mpz_ptr_t ivar_24;
        uint8_t ivar_12;
        ivar_12 = (uint8_t)1;
        mpz_mk_sub_ui(ivar_24, bv_arithmetic_defs__N, (uint64_t)ivar_12);
        result = (bv_arithmetic_defs_funtype_0_t)bv_arithmetic_defs__nat2bv_rec((mpz_ptr_t)bv_arithmetic_defs__N, (mpz_ptr_t)ivar_1, (bv_arithmetic_defs_funtype_0_t)ivar_22, (mpz_ptr_t)ivar_24);

        
        return result;
}