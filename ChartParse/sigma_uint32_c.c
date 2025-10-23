//Code generated using pvs2ir2c
#include "sigma_uint32_c.h"

void release_sigma_uint32_funtype_0(sigma_uint32_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigma_uint32_funtype_0_t copy_sigma_uint32_funtype_0(sigma_uint32_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigma_uint32_funtype_0(sigma_uint32_funtype_0_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigma_uint32_funtype_0_hashentry_t data = htbl->data[hashindex];
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

sigma_uint32_funtype_0_t dupdate_sigma_uint32_funtype_0(sigma_uint32_funtype_0_t a, uint32_t i, mpq_ptr_t v){
        sigma_uint32_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigma_uint32_funtype_0_htbl_t)safe_malloc(sizeof(struct sigma_uint32_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigma_uint32_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigma_uint32_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigma_uint32_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigma_uint32_funtype_0_hashentry_t * new_data = (sigma_uint32_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct sigma_uint32_funtype_0_hashentry_s));
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
                                mpq_set(new_data[new_loc].value, data[j].value);
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_sigma_uint32_funtype_0(htbl, i, ihash);
        sigma_uint32_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; mpq_set(htbl->data[hashindex].value, v); htbl->num_entries++;}
            else {mpq_ptr_t tempvalue;mpq_mk_set(tempvalue, htbl->data[hashindex].value);mpq_set(htbl->data[hashindex].value, v);};
        return a;

}

sigma_uint32_funtype_0_t update_sigma_uint32_funtype_0(sigma_uint32_funtype_0_t a, uint32_t i, mpq_ptr_t v){
        if (a->count == 1){
                return dupdate_sigma_uint32_funtype_0(a, i, v);
            } else {
                sigma_uint32_funtype_0_t x = copy_sigma_uint32_funtype_0(a);
                a->count--;
                return dupdate_sigma_uint32_funtype_0(x, i, v);
            }}

bool_t equal_sigma_uint32_funtype_0(sigma_uint32_funtype_0_t x, sigma_uint32_funtype_0_t y){
        return false;}

char* json_sigma_uint32_funtype_0(sigma_uint32_funtype_0_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"sigma_uint32_funtype_0\""); return result;}


mpq_ptr_t f_sigma_uint32_closure_1(struct sigma_uint32_closure_1_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        sigma_uint32_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigma_uint32_funtype_0(htbl, bvar, hash);
        sigma_uint32_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            mpq_ptr_t result;
            mpq_mk_set(result, entry.value);
            return result;}
        

        return h_sigma_uint32_closure_1(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);};

return h_sigma_uint32_closure_1(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

mpq_ptr_t m_sigma_uint32_closure_1(struct sigma_uint32_closure_1_s * closure, uint32_t bvar){
        return h_sigma_uint32_closure_1(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern mpq_ptr_t h_sigma_uint32_closure_1(uint32_t ivar_6, mpz_ptr_t ivar_3, mpz_ptr_t ivar_4, sigma_uint32_funtype_0_t ivar_1){
        mpq_ptr_t result;
        bool_t ivar_7;
        bool_t ivar_8;
        int64_t tmp51368 = mpz_cmp_ui(ivar_3, ivar_6);
        ivar_8 = (tmp51368 < 0);
        if (ivar_8){ 
             ivar_7 = (bool_t) true;
} else {
        
             int64_t tmp51369 = mpz_cmp_ui(ivar_4, ivar_6);
             ivar_7 = (tmp51369 > 0);
};
        if (ivar_7){ 
             result = safe_malloc(sizeof(mpq_t));
             mpq_init(result);
             mpq_mk_set_ui(result, 0);
} else {
        
             mpq_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_6));
};

        return result;
}

sigma_uint32_closure_1_t new_sigma_uint32_closure_1(void){
        static struct sigma_uint32_funtype_0_ftbl_s ftbl = {.fptr = (mpq_ptr_t (*)(sigma_uint32_funtype_0_t, uint32_t))&f_sigma_uint32_closure_1, .mptr = (mpq_ptr_t (*)(sigma_uint32_funtype_0_t, uint32_t))&m_sigma_uint32_closure_1, .rptr =  (void (*)(sigma_uint32_funtype_0_t))&release_sigma_uint32_closure_1, .cptr = (sigma_uint32_funtype_0_t (*)(sigma_uint32_funtype_0_t))&copy_sigma_uint32_closure_1};
        sigma_uint32_closure_1_t tmp = (sigma_uint32_closure_1_t) safe_malloc(sizeof(struct sigma_uint32_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_sigma_uint32_closure_1(sigma_uint32_funtype_0_t closure){
        sigma_uint32_closure_1_t x = (sigma_uint32_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigma_uint32_funtype_0(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigma_uint32_closure_1_t copy_sigma_uint32_closure_1(sigma_uint32_closure_1_t x){
        sigma_uint32_closure_1_t y = new_sigma_uint32_closure_1();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        mpz_set(y->fvar_2, x->fvar_2);
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sigma_uint32_funtype_0_htbl_t new_htbl = (sigma_uint32_funtype_0_htbl_t) safe_malloc(sizeof(struct sigma_uint32_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigma_uint32_funtype_0_hashentry_t * new_data = (sigma_uint32_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigma_uint32_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigma_uint32_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern bool_t sigma_uint32__T_lowp(mpz_ptr_t ivar_1){
        bool_t  result;
        result = (bool_t)u_undef_quant_expr();

        
        return result;
}

extern bool_t sigma_uint32__T_highp(mpz_ptr_t ivar_1){
        bool_t  result;
        result = (bool_t)u_undef_quant_expr();

        
        return result;
}

extern mpq_ptr_t sigma_uint32__sigma(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, sigma_uint32_funtype_0_t ivar_3){
        mpq_ptr_t  result;
        bool_t ivar_5;
        int64_t tmp51354 = mpz_cmp(ivar_1, ivar_2);
        ivar_5 = (tmp51354 > 0);
        if (ivar_5){ 
             release_sigma_uint32_funtype_0(ivar_3);
             result = safe_malloc(sizeof(mpq_t));
             mpq_init(result);
             mpq_mk_set_ui(result, 0);
} else {
        
             mpq_ptr_t ivar_9;
             uint32_t ivar_15;
             //copying to uint32 from mpz;
             ivar_15 = (uint32_t)mpz_get_ui(ivar_2);
             mpq_mk_set(ivar_9, ivar_3->ftbl->fptr(ivar_3, ivar_15));
             mpq_ptr_t ivar_10;
             mpz_ptr_t ivar_24;
             uint8_t ivar_20;
             ivar_20 = (uint8_t)1;
             mpz_mk_sub_ui(ivar_24, ivar_2, (uint64_t)ivar_20);
             ivar_10 = (mpq_ptr_t)sigma_uint32__sigma(ivar_1, ivar_24, (sigma_uint32_funtype_0_t)ivar_3);
             mpq_mk_set(result, ivar_9);
             mpq_add(result, result, ivar_10);
};

        
        return result;
}

extern mpq_ptr_t sigma_uint32__old_sigma(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, sigma_uint32_funtype_0_t ivar_3){
        mpq_ptr_t  result;
        bool_t ivar_5;
        int64_t tmp51362 = mpz_cmp(ivar_1, ivar_2);
        ivar_5 = (tmp51362 > 0);
        if (ivar_5){ 
             release_sigma_uint32_funtype_0(ivar_3);
             result = safe_malloc(sizeof(mpq_t));
             mpq_init(result);
             mpq_mk_set_ui(result, 0);
} else {
        
             bool_t ivar_9;
             int64_t tmp51363 = mpz_cmp(ivar_2, ivar_1);
             ivar_9 = (tmp51363 == 0);
             if (ivar_9){  
           uint32_t ivar_17;
           //copying to uint32 from mpz;
           ivar_17 = (uint32_t)mpz_get_ui(ivar_1);
           mpz_clear(ivar_1);
           mpq_mk_set(result, ivar_3->ftbl->fptr(ivar_3, ivar_17));
           ivar_3->ftbl->rptr(ivar_3);
} else {
             
           mpq_ptr_t ivar_18;
           uint32_t ivar_24;
           //copying to uint32 from mpz;
           ivar_24 = (uint32_t)mpz_get_ui(ivar_2);
           mpq_mk_set(ivar_18, ivar_3->ftbl->fptr(ivar_3, ivar_24));
           mpq_ptr_t ivar_19;
           mpz_ptr_t ivar_33;
           uint8_t ivar_29;
           ivar_29 = (uint8_t)1;
           mpz_mk_sub_ui(ivar_33, ivar_2, (uint64_t)ivar_29);
           ivar_19 = (mpq_ptr_t)sigma_uint32__old_sigma(ivar_1, ivar_33, (sigma_uint32_funtype_0_t)ivar_3);
           mpq_mk_set(result, ivar_18);
           mpq_add(result, result, ivar_19);
};
};

        
        return result;
}

extern sigma_uint32_funtype_0_t sigma_uint32__restrict(sigma_uint32_funtype_0_t ivar_1, mpz_ptr_t ivar_3, mpz_ptr_t ivar_4){
        sigma_uint32_funtype_0_t  result;
        sigma_uint32_closure_1_t cl51370;
        cl51370 = new_sigma_uint32_closure_1();
        mpz_set(cl51370->fvar_1, ivar_3);
        mpz_set(cl51370->fvar_2, ivar_4);
        cl51370->fvar_3 = (sigma_uint32_funtype_0_t)ivar_1;
        if (cl51370->fvar_3 != NULL) cl51370->fvar_3->count++;
        release_sigma_uint32_funtype_0(ivar_1);
        result = (sigma_uint32_funtype_0_t)cl51370;

        
        return result;
}

extern mpq_ptr_t sigma_uint32__sum_it_def(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, sigma_uint32_funtype_0_t ivar_3, mpq_ptr_t ivar_5){
        mpq_ptr_t  result;
        bool_t ivar_6;
        int64_t tmp51377 = mpz_cmp(ivar_1, ivar_2);
        ivar_6 = (tmp51377 > 0);
        if (ivar_6){ 
             release_sigma_uint32_funtype_0(ivar_3);
             //copying to mpq from mpq;
             mpq_mk_set(result, ivar_5);
} else {
        
             mpz_ptr_t ivar_26;
             uint8_t ivar_15;
             ivar_15 = (uint8_t)1;
             mpz_mk_set_ui(ivar_26, (uint64_t)ivar_15);
             mpz_add(ivar_26, ivar_26, ivar_1);
             mpq_ptr_t ivar_30;
             mpq_ptr_t ivar_17;
             //copying to mpq from mpq;
             mpq_mk_set(ivar_17, ivar_5);
             mpq_ptr_t ivar_18;
             uint32_t ivar_23;
             //copying to uint32 from mpz;
             ivar_23 = (uint32_t)mpz_get_ui(ivar_1);
             mpz_clear(ivar_1);
             mpq_mk_set(ivar_18, ivar_3->ftbl->fptr(ivar_3, ivar_23));
             mpq_mk_set(ivar_30, ivar_17);
             mpq_add(ivar_30, ivar_30, ivar_18);
             result = (mpq_ptr_t)sigma_uint32__sum_it_def(ivar_26, ivar_2, (sigma_uint32_funtype_0_t)ivar_3, ivar_30);
};

        
        return result;
}

extern mpq_ptr_t sigma_uint32__sum_it(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, sigma_uint32_funtype_0_t ivar_3){
        mpq_ptr_t  result;
        uint8_t ivar_15;
        ivar_15 = (uint8_t)0;
        mpq_ptr_t ivar_13;
        //copying to mpq from uint8;
        mpq_mk_set_ui(ivar_13, ivar_15);
        result = (mpq_ptr_t)sigma_uint32__sum_it_def((mpz_ptr_t)ivar_1, (mpz_ptr_t)ivar_2, (sigma_uint32_funtype_0_t)ivar_3, (mpq_ptr_t)ivar_13);

        
        return result;
}

extern mpq_ptr_t sigma_uint32__sigma_it(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, sigma_uint32_funtype_0_t ivar_3){
        mpq_ptr_t  result;
        result = (mpq_ptr_t)sigma_uint32__sum_it((mpz_ptr_t)ivar_1, (mpz_ptr_t)ivar_2, (sigma_uint32_funtype_0_t)ivar_3);

        
        return result;
}