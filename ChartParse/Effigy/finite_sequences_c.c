//Code generated using pvs2ir2c
#include "finite_sequences_c.h"

void release_finite_sequences_funtype_0(finite_sequences_funtype_0_t x, type_actual_t finite_sequences__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

finite_sequences_funtype_0_t copy_finite_sequences_funtype_0(finite_sequences_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_finite_sequences_funtype_0(finite_sequences_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; finite_sequences_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp21986 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp21986 == 0);
        bool_t keymatch;
        int64_t tmp21987 = mpz_cmp(data.key, i);
        keymatch = (tmp21987 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp21986 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp21986 == 0);

        int64_t tmp21987 = mpz_cmp(data.key, i);
        keymatch = (tmp21987 == 0);
                }
        return hashindex;
        }

finite_sequences_funtype_0_t dupdate_finite_sequences_funtype_0(finite_sequences_funtype_0_t a, mpz_ptr_t i, finite_sequences__T_t v, type_actual_t finite_sequences__T){
        finite_sequences_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (finite_sequences_funtype_0_htbl_t)safe_malloc(sizeof(struct finite_sequences_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (finite_sequences_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct finite_sequences_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        finite_sequences_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                finite_sequences_funtype_0_hashentry_t * new_data = (finite_sequences_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct finite_sequences_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp21988 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp21988 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp21989 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp21989 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp21990 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp21990 == 0);
                                }
                                mpz_set(new_data[new_loc].key, data[j].key);
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (finite_sequences__T_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = mpz_hash(i);
        uint32_t hashindex = lookup_finite_sequences_funtype_0(htbl, i, ihash);
        finite_sequences_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp21991 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp21991 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (finite_sequences__T_t)v;}
            else {finite_sequences__T_t tempvalue;tempvalue = (finite_sequences__T_t)htbl->data[hashindex].value;tempvalue = (finite_sequences__T_t)v;finite_sequences__T->release_ptr(tempvalue, finite_sequences__T);};
        return a;

}

finite_sequences_funtype_0_t update_finite_sequences_funtype_0(finite_sequences_funtype_0_t a, mpz_ptr_t i, finite_sequences__T_t v, type_actual_t finite_sequences__T){
        if (a->count == 1){
                return dupdate_finite_sequences_funtype_0(a, i, v, finite_sequences__T);
            } else {
                finite_sequences_funtype_0_t x = copy_finite_sequences_funtype_0(a);
                x->count--;
                return dupdate_finite_sequences_funtype_0(x, i, v, finite_sequences__T);
            }}

bool_t equal_finite_sequences_funtype_0(finite_sequences_funtype_0_t x, finite_sequences_funtype_0_t y, type_actual_t finite_sequences__T){
        return false;}


finite_sequences__finseq_t new_finite_sequences__finseq(void){
        finite_sequences__finseq_t tmp = (finite_sequences__finseq_t) safe_malloc(sizeof(struct finite_sequences__finseq_s));
        tmp->count = 1;
        return tmp;}

void release_finite_sequences__finseq(finite_sequences__finseq_t x, type_actual_t finite_sequences__T){
        x->count--;
        if (x->count <= 0){
         release_finite_sequences_funtype_0(x->seq, finite_sequences__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_finite_sequences__finseq_ptr(pointer_t x, type_actual_t T){
        actual_finite_sequences__finseq_t actual = (actual_finite_sequences__finseq_t)T;
        type_actual_t finite_sequences__T = actual->finite_sequences__T;
        release_finite_sequences__finseq((finite_sequences__finseq_t)x, finite_sequences__T);
}

finite_sequences__finseq_t copy_finite_sequences__finseq(finite_sequences__finseq_t x){
        finite_sequences__finseq_t y = new_finite_sequences__finseq();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_finite_sequences__finseq(finite_sequences__finseq_t x, finite_sequences__finseq_t y, type_actual_t finite_sequences__T){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_finite_sequences_funtype_0(x->seq, y->seq, finite_sequences__T);
        return tmp;}

bool_t equal_finite_sequences__finseq_ptr(pointer_t x, pointer_t y, actual_finite_sequences__finseq_t T){
        actual_finite_sequences__finseq_t actual = (actual_finite_sequences__finseq_t)T;
        type_actual_t finite_sequences__T = actual->finite_sequences__T;
        return equal_finite_sequences__finseq((finite_sequences__finseq_t)x, (finite_sequences__finseq_t)y, finite_sequences__T);
}

actual_finite_sequences__finseq_t actual_finite_sequences__finseq(type_actual_t finite_sequences__T){
        actual_finite_sequences__finseq_t new = (actual_finite_sequences__finseq_t)safe_malloc(sizeof(struct actual_finite_sequences__finseq_s));
        new->equal_ptr = (equal_ptr_t)(*equal_finite_sequences__finseq_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_finite_sequences__finseq_ptr);
 

        new->finite_sequences__T = finite_sequences__T;
 
        return new;
 };

finite_sequences__finseq_t update_finite_sequences__finseq_length(finite_sequences__finseq_t x, mpz_ptr_t v){
        finite_sequences__finseq_t y;
        if (x->count == 1){y = x;}
        else {y = copy_finite_sequences__finseq(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

finite_sequences__finseq_t update_finite_sequences__finseq_seq(finite_sequences__finseq_t x, finite_sequences_funtype_0_t v, type_actual_t finite_sequences__T){
        finite_sequences__finseq_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_finite_sequences_funtype_0(x->seq, finite_sequences__T);};}
        else {y = copy_finite_sequences__finseq(x); x->count--; y->seq->count--;};
        y->seq = (finite_sequences_funtype_0_t)v;
        return y;}



void release_finite_sequences_funtype_2(finite_sequences_funtype_2_t x, type_actual_t finite_sequences__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

finite_sequences_funtype_2_t copy_finite_sequences_funtype_2(finite_sequences_funtype_2_t x){return x->ftbl->cptr(x);}

uint32_t lookup_finite_sequences_funtype_2(finite_sequences_funtype_2_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; finite_sequences_funtype_2_hashentry_t data = htbl->data[hashindex];
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

finite_sequences_funtype_2_t dupdate_finite_sequences_funtype_2(finite_sequences_funtype_2_t a, uint8_t i, finite_sequences__T_t v, type_actual_t finite_sequences__T){
        finite_sequences_funtype_2_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (finite_sequences_funtype_2_htbl_t)safe_malloc(sizeof(struct finite_sequences_funtype_2_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (finite_sequences_funtype_2_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct finite_sequences_funtype_2_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        finite_sequences_funtype_2_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                finite_sequences_funtype_2_hashentry_t * new_data = (finite_sequences_funtype_2_hashentry_t *)safe_malloc(new_size * sizeof(struct finite_sequences_funtype_2_hashentry_s));
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
                                new_data[new_loc].value = (finite_sequences__T_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_finite_sequences_funtype_2(htbl, i, ihash);
        finite_sequences_funtype_2_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (finite_sequences__T_t)v;}
            else {finite_sequences__T_t tempvalue;tempvalue = (finite_sequences__T_t)htbl->data[hashindex].value;tempvalue = (finite_sequences__T_t)v;finite_sequences__T->release_ptr(tempvalue, finite_sequences__T);};
        return a;

}

finite_sequences_funtype_2_t update_finite_sequences_funtype_2(finite_sequences_funtype_2_t a, uint8_t i, finite_sequences__T_t v, type_actual_t finite_sequences__T){
        if (a->count == 1){
                return dupdate_finite_sequences_funtype_2(a, i, v, finite_sequences__T);
            } else {
                finite_sequences_funtype_2_t x = copy_finite_sequences_funtype_2(a);
                x->count--;
                return dupdate_finite_sequences_funtype_2(x, i, v, finite_sequences__T);
            }}

bool_t equal_finite_sequences_funtype_2(finite_sequences_funtype_2_t x, finite_sequences_funtype_2_t y, type_actual_t finite_sequences__T){
        return false;}


finite_sequences__T_t f_finite_sequences_closure_3(struct finite_sequences_closure_3_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        finite_sequences_funtype_2_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_finite_sequences_funtype_2(htbl, bvar, hash);
        finite_sequences_funtype_2_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero && entry.keyhash != 0){
            finite_sequences__T_t result;
            result = (finite_sequences__T_t)entry.value;
            return result;}
        

        return h_finite_sequences_closure_3(bvar, closure->fvar_1);};

return h_finite_sequences_closure_3(bvar, closure->fvar_1);}

finite_sequences__T_t m_finite_sequences_closure_3(struct finite_sequences_closure_3_s * closure, uint8_t bvar){
        return h_finite_sequences_closure_3(bvar, closure->fvar_1);}

extern finite_sequences__T_t h_finite_sequences_closure_3(uint8_t ivar_4, type_actual_t finite_sequences__T){
        finite_sequences__T_t result;
        pvs2cerror("Non-executable theory: epsilons", PVS2C_EXIT_ERROR);

        return result;
}

finite_sequences_closure_3_t new_finite_sequences_closure_3(void){
        static struct finite_sequences_funtype_2_ftbl_s ftbl = {.fptr = (finite_sequences__T_t (*)(finite_sequences_funtype_2_t, uint8_t))&f_finite_sequences_closure_3, .mptr = (finite_sequences__T_t (*)(finite_sequences_funtype_2_t, uint8_t))&m_finite_sequences_closure_3, .rptr =  (void (*)(finite_sequences_funtype_2_t))&release_finite_sequences_closure_3, .cptr = (finite_sequences_funtype_2_t (*)(finite_sequences_funtype_2_t))&copy_finite_sequences_closure_3};
        finite_sequences_closure_3_t tmp = (finite_sequences_closure_3_t) safe_malloc(sizeof(struct finite_sequences_closure_3_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_finite_sequences_closure_3(finite_sequences_funtype_2_t closure, type_actual_t finite_sequences__T){
        finite_sequences_closure_3_t x = (finite_sequences_closure_3_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

finite_sequences_closure_3_t copy_finite_sequences_closure_3(finite_sequences_closure_3_t x){
        finite_sequences_closure_3_t y = new_finite_sequences_closure_3();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        if (x->htbl != NULL){
            finite_sequences_funtype_2_htbl_t new_htbl = (finite_sequences_funtype_2_htbl_t) safe_malloc(sizeof(finite_sequences_funtype_2_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            finite_sequences_funtype_2_hashentry_t * new_data = (finite_sequences_funtype_2_hashentry_t *) safe_malloc(new_htbl->size * sizeof(finite_sequences_funtype_2_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(finite_sequences_funtype_2_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


finite_sequences__T_t f_finite_sequences_closure_4(struct finite_sequences_closure_4_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        finite_sequences_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_finite_sequences_funtype_0(htbl, bvar, hash);
        finite_sequences_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp21993 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp21993 == 0);
        if (!keyzero && entry.keyhash != 0){
            finite_sequences__T_t result;
            result = (finite_sequences__T_t)entry.value;
            return result;}
        

        return h_finite_sequences_closure_4(bvar, closure->fvar_1, closure->fvar_2);};

return h_finite_sequences_closure_4(bvar, closure->fvar_1, closure->fvar_2);}

finite_sequences__T_t m_finite_sequences_closure_4(struct finite_sequences_closure_4_s * closure, mpz_ptr_t bvar){
        return h_finite_sequences_closure_4(bvar, closure->fvar_1, closure->fvar_2);}

extern finite_sequences__T_t h_finite_sequences_closure_4(mpz_ptr_t ivar_15, finite_sequences_funtype_2_t ivar_12, type_actual_t finite_sequences__T){
        finite_sequences__T_t result;
        finite_sequences__T_t ivar_13;
        uint8_t ivar_14;
        //copying to uint8 from mpz;
        ivar_14 = (uint8_t)mpz_get_ui(ivar_15);
        ivar_13 = (finite_sequences__T_t)ivar_12->ftbl->fptr(ivar_12, ivar_14);
        //copying to finite_sequences__T from finite_sequences__T;
        result = (finite_sequences__T_t)ivar_13;

        return result;
}

finite_sequences_closure_4_t new_finite_sequences_closure_4(void){
        static struct finite_sequences_funtype_0_ftbl_s ftbl = {.fptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&f_finite_sequences_closure_4, .mptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&m_finite_sequences_closure_4, .rptr =  (void (*)(finite_sequences_funtype_0_t))&release_finite_sequences_closure_4, .cptr = (finite_sequences_funtype_0_t (*)(finite_sequences_funtype_0_t))&copy_finite_sequences_closure_4};
        finite_sequences_closure_4_t tmp = (finite_sequences_closure_4_t) safe_malloc(sizeof(struct finite_sequences_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_finite_sequences_closure_4(finite_sequences_funtype_0_t closure, type_actual_t finite_sequences__T){
        finite_sequences_closure_4_t x = (finite_sequences_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
         release_finite_sequences_funtype_2(x->fvar_1, finite_sequences__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

finite_sequences_closure_4_t copy_finite_sequences_closure_4(finite_sequences_closure_4_t x){
        finite_sequences_closure_4_t y = new_finite_sequences_closure_4();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        if (x->htbl != NULL){
            finite_sequences_funtype_0_htbl_t new_htbl = (finite_sequences_funtype_0_htbl_t) safe_malloc(sizeof(finite_sequences_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            finite_sequences_funtype_0_hashentry_t * new_data = (finite_sequences_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(finite_sequences_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(finite_sequences_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


finite_sequences__T_t f_finite_sequences_closure_5(struct finite_sequences_closure_5_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        finite_sequences_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_finite_sequences_funtype_0(htbl, bvar, hash);
        finite_sequences_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp22002 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp22002 == 0);
        if (!keyzero && entry.keyhash != 0){
            finite_sequences__T_t result;
            result = (finite_sequences__T_t)entry.value;
            return result;}
        

        return h_finite_sequences_closure_5(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);};

return h_finite_sequences_closure_5(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

finite_sequences__T_t m_finite_sequences_closure_5(struct finite_sequences_closure_5_s * closure, mpz_ptr_t bvar){
        return h_finite_sequences_closure_5(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern finite_sequences__T_t h_finite_sequences_closure_5(mpz_ptr_t ivar_13, mpz_ptr_t ivar_3, type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_2, finite_sequences__finseq_t ivar_1){
        finite_sequences__T_t result;
        bool_t ivar_14;
        mpz_ptr_t ivar_15;
        ivar_15 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_15);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_15, ivar_13);
        mpz_ptr_t ivar_16;
        ivar_16 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_16);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_16, ivar_3);
        int64_t tmp22003 = mpz_cmp(ivar_15, ivar_16);
        ivar_14 = (tmp22003 < 0);
        if (ivar_14){ 
             finite_sequences_funtype_0_t ivar_22;
             finite_sequences__finseq_t ivar_23;
             //copying to finite_sequences__finseq from finite_sequences__finseq;
             ivar_23 = (finite_sequences__finseq_t)ivar_1;
             ivar_23->count++;
             ivar_22 = (finite_sequences_funtype_0_t)ivar_23->seq;
             ivar_22->count++;
             release_finite_sequences__finseq(ivar_23, finite_sequences__T);
             mpz_ptr_t ivar_24;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_24, ivar_13);
             mpz_clear(ivar_13);
             result = (finite_sequences__T_t)ivar_22->ftbl->fptr(ivar_22, ivar_24);
             ivar_22->ftbl->rptr(ivar_22);
} else {
        
             finite_sequences_funtype_0_t ivar_32;
             finite_sequences__finseq_t ivar_33;
             //copying to finite_sequences__finseq from finite_sequences__finseq;
             ivar_33 = (finite_sequences__finseq_t)ivar_2;
             ivar_33->count++;
             ivar_32 = (finite_sequences_funtype_0_t)ivar_33->seq;
             ivar_32->count++;
             release_finite_sequences__finseq(ivar_33, finite_sequences__T);
             mpz_ptr_t ivar_35;
             mpz_ptr_t ivar_26;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_26, ivar_13);
             mpz_clear(ivar_13);
             mpz_ptr_t ivar_27;
             ivar_27 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_27);
             //copying to mpz from mpz;
             mpz_mk_set(ivar_27, ivar_3);
             mpz_mk_sub(ivar_35, ivar_26, ivar_27);
             mpz_ptr_t ivar_34;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_34, ivar_35);
             mpz_clear(ivar_35);
             result = (finite_sequences__T_t)ivar_32->ftbl->fptr(ivar_32, ivar_34);
             ivar_32->ftbl->rptr(ivar_32);
};

        return result;
}

finite_sequences_closure_5_t new_finite_sequences_closure_5(void){
        static struct finite_sequences_funtype_0_ftbl_s ftbl = {.fptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&f_finite_sequences_closure_5, .mptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&m_finite_sequences_closure_5, .rptr =  (void (*)(finite_sequences_funtype_0_t))&release_finite_sequences_closure_5, .cptr = (finite_sequences_funtype_0_t (*)(finite_sequences_funtype_0_t))&copy_finite_sequences_closure_5};
        finite_sequences_closure_5_t tmp = (finite_sequences_closure_5_t) safe_malloc(sizeof(struct finite_sequences_closure_5_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        return tmp;}

void release_finite_sequences_closure_5(finite_sequences_funtype_0_t closure, type_actual_t finite_sequences__T){
        finite_sequences_closure_5_t x = (finite_sequences_closure_5_t)closure;
        x->count--;
        if (x->count <= 0){
         release_finite_sequences__finseq(x->fvar_3, finite_sequences__T);
         release_finite_sequences__finseq(x->fvar_4, finite_sequences__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

finite_sequences_closure_5_t copy_finite_sequences_closure_5(finite_sequences_closure_5_t x){
        finite_sequences_closure_5_t y = new_finite_sequences_closure_5();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        if (x->htbl != NULL){
            finite_sequences_funtype_0_htbl_t new_htbl = (finite_sequences_funtype_0_htbl_t) safe_malloc(sizeof(finite_sequences_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            finite_sequences_funtype_0_hashentry_t * new_data = (finite_sequences_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(finite_sequences_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(finite_sequences_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


finite_sequences__T_t f_finite_sequences_closure_6(struct finite_sequences_closure_6_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        finite_sequences_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_finite_sequences_funtype_0(htbl, bvar, hash);
        finite_sequences_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp22005 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp22005 == 0);
        if (!keyzero && entry.keyhash != 0){
            finite_sequences__T_t result;
            result = (finite_sequences__T_t)entry.value;
            return result;}
        

        return h_finite_sequences_closure_6(bvar, closure->fvar_1, closure->fvar_2);};

return h_finite_sequences_closure_6(bvar, closure->fvar_1, closure->fvar_2);}

finite_sequences__T_t m_finite_sequences_closure_6(struct finite_sequences_closure_6_s * closure, mpz_ptr_t bvar){
        return h_finite_sequences_closure_6(bvar, closure->fvar_1, closure->fvar_2);}

extern finite_sequences__T_t h_finite_sequences_closure_6(mpz_ptr_t ivar_41, finite_sequences_funtype_0_t ivar_38, type_actual_t finite_sequences__T){
        finite_sequences__T_t result;
        finite_sequences__T_t ivar_39;
        mpz_ptr_t ivar_40;
        ivar_40 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_40);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_40, ivar_41);
        ivar_39 = (finite_sequences__T_t)ivar_38->ftbl->fptr(ivar_38, ivar_40);
        //copying to finite_sequences__T from finite_sequences__T;
        result = (finite_sequences__T_t)ivar_39;

        return result;
}

finite_sequences_closure_6_t new_finite_sequences_closure_6(void){
        static struct finite_sequences_funtype_0_ftbl_s ftbl = {.fptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&f_finite_sequences_closure_6, .mptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&m_finite_sequences_closure_6, .rptr =  (void (*)(finite_sequences_funtype_0_t))&release_finite_sequences_closure_6, .cptr = (finite_sequences_funtype_0_t (*)(finite_sequences_funtype_0_t))&copy_finite_sequences_closure_6};
        finite_sequences_closure_6_t tmp = (finite_sequences_closure_6_t) safe_malloc(sizeof(struct finite_sequences_closure_6_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_finite_sequences_closure_6(finite_sequences_funtype_0_t closure, type_actual_t finite_sequences__T){
        finite_sequences_closure_6_t x = (finite_sequences_closure_6_t)closure;
        x->count--;
        if (x->count <= 0){
         release_finite_sequences_funtype_0(x->fvar_1, finite_sequences__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

finite_sequences_closure_6_t copy_finite_sequences_closure_6(finite_sequences_closure_6_t x){
        finite_sequences_closure_6_t y = new_finite_sequences_closure_6();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        if (x->htbl != NULL){
            finite_sequences_funtype_0_htbl_t new_htbl = (finite_sequences_funtype_0_htbl_t) safe_malloc(sizeof(finite_sequences_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            finite_sequences_funtype_0_hashentry_t * new_data = (finite_sequences_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(finite_sequences_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(finite_sequences_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


finite_sequences_record_7_t new_finite_sequences_record_7(void){
        finite_sequences_record_7_t tmp = (finite_sequences_record_7_t) safe_malloc(sizeof(struct finite_sequences_record_7_s));
        tmp->count = 1;
        return tmp;}

void release_finite_sequences_record_7(finite_sequences_record_7_t x, type_actual_t finite_sequences__T){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_finite_sequences_record_7_ptr(pointer_t x, type_actual_t T){
        actual_finite_sequences_record_7_t actual = (actual_finite_sequences_record_7_t)T;
        type_actual_t finite_sequences__T = actual->finite_sequences__T;
        release_finite_sequences_record_7((finite_sequences_record_7_t)x, finite_sequences__T);
}

finite_sequences_record_7_t copy_finite_sequences_record_7(finite_sequences_record_7_t x){
        finite_sequences_record_7_t y = new_finite_sequences_record_7();
        mpz_set(y->project_1, x->project_1);
        mpz_set(y->project_2, x->project_2);
        y->count = 1;
        return y;}

bool_t equal_finite_sequences_record_7(finite_sequences_record_7_t x, finite_sequences_record_7_t y, type_actual_t finite_sequences__T){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

bool_t equal_finite_sequences_record_7_ptr(pointer_t x, pointer_t y, actual_finite_sequences_record_7_t T){
        actual_finite_sequences_record_7_t actual = (actual_finite_sequences_record_7_t)T;
        type_actual_t finite_sequences__T = actual->finite_sequences__T;
        return equal_finite_sequences_record_7((finite_sequences_record_7_t)x, (finite_sequences_record_7_t)y, finite_sequences__T);
}

actual_finite_sequences_record_7_t actual_finite_sequences_record_7(type_actual_t finite_sequences__T){
        actual_finite_sequences_record_7_t new = (actual_finite_sequences_record_7_t)safe_malloc(sizeof(struct actual_finite_sequences_record_7_s));
        new->equal_ptr = (equal_ptr_t)(*equal_finite_sequences_record_7_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_finite_sequences_record_7_ptr);
 

        new->finite_sequences__T = finite_sequences__T;
 
        return new;
 };

finite_sequences_record_7_t update_finite_sequences_record_7_project_1(finite_sequences_record_7_t x, mpz_ptr_t v){
        finite_sequences_record_7_t y;
        if (x->count == 1){y = x;}
        else {y = copy_finite_sequences_record_7(x); x->count--;};
        mpz_set(y->project_1, v);
        return y;}

finite_sequences_record_7_t update_finite_sequences_record_7_project_2(finite_sequences_record_7_t x, mpz_ptr_t v){
        finite_sequences_record_7_t y;
        if (x->count == 1){y = x;}
        else {y = copy_finite_sequences_record_7(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}




finite_sequences__T_t f_finite_sequences_closure_8(struct finite_sequences_closure_8_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        finite_sequences_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_finite_sequences_funtype_0(htbl, bvar, hash);
        finite_sequences_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp22014 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp22014 == 0);
        if (!keyzero && entry.keyhash != 0){
            finite_sequences__T_t result;
            result = (finite_sequences__T_t)entry.value;
            return result;}
        

        return h_finite_sequences_closure_8(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);};

return h_finite_sequences_closure_8(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

finite_sequences__T_t m_finite_sequences_closure_8(struct finite_sequences_closure_8_s * closure, mpz_ptr_t bvar){
        return h_finite_sequences_closure_8(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern finite_sequences__T_t h_finite_sequences_closure_8(mpz_ptr_t ivar_42, mpz_ptr_t ivar_3, type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1){
        finite_sequences__T_t result;
        finite_sequences_funtype_0_t ivar_50;
        finite_sequences__finseq_t ivar_51;
        //copying to finite_sequences__finseq from finite_sequences__finseq;
        ivar_51 = (finite_sequences__finseq_t)ivar_1;
        ivar_51->count++;
        ivar_50 = (finite_sequences_funtype_0_t)ivar_51->seq;
        ivar_50->count++;
        release_finite_sequences__finseq(ivar_51, finite_sequences__T);
        mpz_ptr_t ivar_53;
        mpz_ptr_t ivar_44;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_44, ivar_42);
        mpz_clear(ivar_42);
        mpz_ptr_t ivar_45;
        ivar_45 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_45);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_45, ivar_3);
        mpz_mk_add(ivar_53, ivar_45, ivar_44);
        mpz_ptr_t ivar_52;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_52, ivar_53);
        mpz_clear(ivar_53);
        result = (finite_sequences__T_t)ivar_50->ftbl->fptr(ivar_50, ivar_52);
        ivar_50->ftbl->rptr(ivar_50);

        return result;
}

finite_sequences_closure_8_t new_finite_sequences_closure_8(void){
        static struct finite_sequences_funtype_0_ftbl_s ftbl = {.fptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&f_finite_sequences_closure_8, .mptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&m_finite_sequences_closure_8, .rptr =  (void (*)(finite_sequences_funtype_0_t))&release_finite_sequences_closure_8, .cptr = (finite_sequences_funtype_0_t (*)(finite_sequences_funtype_0_t))&copy_finite_sequences_closure_8};
        finite_sequences_closure_8_t tmp = (finite_sequences_closure_8_t) safe_malloc(sizeof(struct finite_sequences_closure_8_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        return tmp;}

void release_finite_sequences_closure_8(finite_sequences_funtype_0_t closure, type_actual_t finite_sequences__T){
        finite_sequences_closure_8_t x = (finite_sequences_closure_8_t)closure;
        x->count--;
        if (x->count <= 0){
         release_finite_sequences__finseq(x->fvar_3, finite_sequences__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

finite_sequences_closure_8_t copy_finite_sequences_closure_8(finite_sequences_closure_8_t x){
        finite_sequences_closure_8_t y = new_finite_sequences_closure_8();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            finite_sequences_funtype_0_htbl_t new_htbl = (finite_sequences_funtype_0_htbl_t) safe_malloc(sizeof(finite_sequences_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            finite_sequences_funtype_0_hashentry_t * new_data = (finite_sequences_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(finite_sequences_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(finite_sequences_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


finite_sequences__T_t f_finite_sequences_closure_9(struct finite_sequences_closure_9_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        finite_sequences_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_finite_sequences_funtype_0(htbl, bvar, hash);
        finite_sequences_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp22016 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp22016 == 0);
        if (!keyzero && entry.keyhash != 0){
            finite_sequences__T_t result;
            result = (finite_sequences__T_t)entry.value;
            return result;}
        

        return h_finite_sequences_closure_9(bvar, closure->fvar_1, closure->fvar_2);};

return h_finite_sequences_closure_9(bvar, closure->fvar_1, closure->fvar_2);}

finite_sequences__T_t m_finite_sequences_closure_9(struct finite_sequences_closure_9_s * closure, mpz_ptr_t bvar){
        return h_finite_sequences_closure_9(bvar, closure->fvar_1, closure->fvar_2);}

extern finite_sequences__T_t h_finite_sequences_closure_9(mpz_ptr_t ivar_59, finite_sequences_funtype_0_t ivar_56, type_actual_t finite_sequences__T){
        finite_sequences__T_t result;
        finite_sequences__T_t ivar_57;
        mpz_ptr_t ivar_58;
        ivar_58 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_58);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_58, ivar_59);
        ivar_57 = (finite_sequences__T_t)ivar_56->ftbl->fptr(ivar_56, ivar_58);
        //copying to finite_sequences__T from finite_sequences__T;
        result = (finite_sequences__T_t)ivar_57;

        return result;
}

finite_sequences_closure_9_t new_finite_sequences_closure_9(void){
        static struct finite_sequences_funtype_0_ftbl_s ftbl = {.fptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&f_finite_sequences_closure_9, .mptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&m_finite_sequences_closure_9, .rptr =  (void (*)(finite_sequences_funtype_0_t))&release_finite_sequences_closure_9, .cptr = (finite_sequences_funtype_0_t (*)(finite_sequences_funtype_0_t))&copy_finite_sequences_closure_9};
        finite_sequences_closure_9_t tmp = (finite_sequences_closure_9_t) safe_malloc(sizeof(struct finite_sequences_closure_9_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_finite_sequences_closure_9(finite_sequences_funtype_0_t closure, type_actual_t finite_sequences__T){
        finite_sequences_closure_9_t x = (finite_sequences_closure_9_t)closure;
        x->count--;
        if (x->count <= 0){
         release_finite_sequences_funtype_0(x->fvar_1, finite_sequences__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

finite_sequences_closure_9_t copy_finite_sequences_closure_9(finite_sequences_closure_9_t x){
        finite_sequences_closure_9_t y = new_finite_sequences_closure_9();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        if (x->htbl != NULL){
            finite_sequences_funtype_0_htbl_t new_htbl = (finite_sequences_funtype_0_htbl_t) safe_malloc(sizeof(finite_sequences_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            finite_sequences_funtype_0_hashentry_t * new_data = (finite_sequences_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(finite_sequences_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(finite_sequences_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


finite_sequences__T_t f_finite_sequences_closure_10(struct finite_sequences_closure_10_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        finite_sequences_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_finite_sequences_funtype_0(htbl, bvar, hash);
        finite_sequences_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp22025 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp22025 == 0);
        if (!keyzero && entry.keyhash != 0){
            finite_sequences__T_t result;
            result = (finite_sequences__T_t)entry.value;
            return result;}
        

        return h_finite_sequences_closure_10(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);};

return h_finite_sequences_closure_10(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

finite_sequences__T_t m_finite_sequences_closure_10(struct finite_sequences_closure_10_s * closure, mpz_ptr_t bvar){
        return h_finite_sequences_closure_10(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern finite_sequences__T_t h_finite_sequences_closure_10(mpz_ptr_t ivar_39, mpz_ptr_t ivar_3, type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1){
        finite_sequences__T_t result;
        finite_sequences_funtype_0_t ivar_47;
        finite_sequences__finseq_t ivar_48;
        //copying to finite_sequences__finseq from finite_sequences__finseq;
        ivar_48 = (finite_sequences__finseq_t)ivar_1;
        ivar_48->count++;
        ivar_47 = (finite_sequences_funtype_0_t)ivar_48->seq;
        ivar_47->count++;
        release_finite_sequences__finseq(ivar_48, finite_sequences__T);
        mpz_ptr_t ivar_50;
        mpz_ptr_t ivar_41;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_41, ivar_39);
        mpz_clear(ivar_39);
        mpz_ptr_t ivar_42;
        ivar_42 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_42);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_42, ivar_3);
        mpz_mk_add(ivar_50, ivar_42, ivar_41);
        mpz_ptr_t ivar_49;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_49, ivar_50);
        mpz_clear(ivar_50);
        result = (finite_sequences__T_t)ivar_47->ftbl->fptr(ivar_47, ivar_49);
        ivar_47->ftbl->rptr(ivar_47);

        return result;
}

finite_sequences_closure_10_t new_finite_sequences_closure_10(void){
        static struct finite_sequences_funtype_0_ftbl_s ftbl = {.fptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&f_finite_sequences_closure_10, .mptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&m_finite_sequences_closure_10, .rptr =  (void (*)(finite_sequences_funtype_0_t))&release_finite_sequences_closure_10, .cptr = (finite_sequences_funtype_0_t (*)(finite_sequences_funtype_0_t))&copy_finite_sequences_closure_10};
        finite_sequences_closure_10_t tmp = (finite_sequences_closure_10_t) safe_malloc(sizeof(struct finite_sequences_closure_10_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        return tmp;}

void release_finite_sequences_closure_10(finite_sequences_funtype_0_t closure, type_actual_t finite_sequences__T){
        finite_sequences_closure_10_t x = (finite_sequences_closure_10_t)closure;
        x->count--;
        if (x->count <= 0){
         release_finite_sequences__finseq(x->fvar_3, finite_sequences__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

finite_sequences_closure_10_t copy_finite_sequences_closure_10(finite_sequences_closure_10_t x){
        finite_sequences_closure_10_t y = new_finite_sequences_closure_10();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            finite_sequences_funtype_0_htbl_t new_htbl = (finite_sequences_funtype_0_htbl_t) safe_malloc(sizeof(finite_sequences_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            finite_sequences_funtype_0_hashentry_t * new_data = (finite_sequences_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(finite_sequences_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(finite_sequences_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


finite_sequences__T_t f_finite_sequences_closure_11(struct finite_sequences_closure_11_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        finite_sequences_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_finite_sequences_funtype_0(htbl, bvar, hash);
        finite_sequences_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp22027 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp22027 == 0);
        if (!keyzero && entry.keyhash != 0){
            finite_sequences__T_t result;
            result = (finite_sequences__T_t)entry.value;
            return result;}
        

        return h_finite_sequences_closure_11(bvar, closure->fvar_1, closure->fvar_2);};

return h_finite_sequences_closure_11(bvar, closure->fvar_1, closure->fvar_2);}

finite_sequences__T_t m_finite_sequences_closure_11(struct finite_sequences_closure_11_s * closure, mpz_ptr_t bvar){
        return h_finite_sequences_closure_11(bvar, closure->fvar_1, closure->fvar_2);}

extern finite_sequences__T_t h_finite_sequences_closure_11(mpz_ptr_t ivar_56, finite_sequences_funtype_0_t ivar_53, type_actual_t finite_sequences__T){
        finite_sequences__T_t result;
        finite_sequences__T_t ivar_54;
        mpz_ptr_t ivar_55;
        ivar_55 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_55);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_55, ivar_56);
        ivar_54 = (finite_sequences__T_t)ivar_53->ftbl->fptr(ivar_53, ivar_55);
        //copying to finite_sequences__T from finite_sequences__T;
        result = (finite_sequences__T_t)ivar_54;

        return result;
}

finite_sequences_closure_11_t new_finite_sequences_closure_11(void){
        static struct finite_sequences_funtype_0_ftbl_s ftbl = {.fptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&f_finite_sequences_closure_11, .mptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&m_finite_sequences_closure_11, .rptr =  (void (*)(finite_sequences_funtype_0_t))&release_finite_sequences_closure_11, .cptr = (finite_sequences_funtype_0_t (*)(finite_sequences_funtype_0_t))&copy_finite_sequences_closure_11};
        finite_sequences_closure_11_t tmp = (finite_sequences_closure_11_t) safe_malloc(sizeof(struct finite_sequences_closure_11_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_finite_sequences_closure_11(finite_sequences_funtype_0_t closure, type_actual_t finite_sequences__T){
        finite_sequences_closure_11_t x = (finite_sequences_closure_11_t)closure;
        x->count--;
        if (x->count <= 0){
         release_finite_sequences_funtype_0(x->fvar_1, finite_sequences__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

finite_sequences_closure_11_t copy_finite_sequences_closure_11(finite_sequences_closure_11_t x){
        finite_sequences_closure_11_t y = new_finite_sequences_closure_11();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (type_actual_t)x->fvar_2;
        if (x->htbl != NULL){
            finite_sequences_funtype_0_htbl_t new_htbl = (finite_sequences_funtype_0_htbl_t) safe_malloc(sizeof(finite_sequences_funtype_0_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            finite_sequences_funtype_0_hashentry_t * new_data = (finite_sequences_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(finite_sequences_funtype_0_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(finite_sequences_funtype_0_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern finite_sequences__finseq_t finite_sequences__empty_seq(type_actual_t finite_sequences__T){
        finite_sequences__finseq_t result;
        uint8_t ivar_17;
        ivar_17 = (uint8_t)0;
        mpz_ptr_t ivar_1;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_1, ivar_17);
        finite_sequences_funtype_2_t ivar_12;
        finite_sequences_closure_3_t cl21992;
        cl21992 = new_finite_sequences_closure_3();
        cl21992->fvar_1 = (type_actual_t)finite_sequences__T;
        ivar_12 = (finite_sequences_funtype_2_t)cl21992;
        finite_sequences_funtype_0_t ivar_10;
        finite_sequences_closure_4_t cl21994;
        cl21994 = new_finite_sequences_closure_4();
        cl21994->fvar_1 = (finite_sequences_funtype_2_t)ivar_12;
        cl21994->fvar_1->count++;
        cl21994->fvar_2 = (type_actual_t)finite_sequences__T;
        ivar_10 = (finite_sequences_funtype_0_t)cl21994;
        result = (finite_sequences__finseq_t)new_finite_sequences__finseq();;
        mpz_init(result->length);
        mpz_set(result->length, ivar_1);
        mpz_clear(ivar_1);
        result->seq = (finite_sequences_funtype_0_t)ivar_10;

        return result;
}

extern finite_sequences_funtype_0_t finite_sequences__finseq_appl(type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1){
        finite_sequences_funtype_0_t result;
        finite_sequences__finseq_t ivar_4;
        //copying to finite_sequences__finseq from finite_sequences__finseq;
        ivar_4 = (finite_sequences__finseq_t)ivar_1;
        ivar_4->count++;
        release_finite_sequences__finseq(ivar_1, finite_sequences__T);
        result = (finite_sequences_funtype_0_t)ivar_4->seq;
        result->count++;
        release_finite_sequences__finseq(ivar_4, finite_sequences__T);

        return result;
}

extern finite_sequences__finseq_t finite_sequences__oh(type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1, finite_sequences__finseq_t ivar_2){
        finite_sequences__finseq_t result;
        /* l1 */ mpz_ptr_t ivar_3;
        finite_sequences__finseq_t ivar_4;
        //copying to finite_sequences__finseq from finite_sequences__finseq;
        ivar_4 = (finite_sequences__finseq_t)ivar_1;
        ivar_4->count++;
        ivar_3 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_3);
        mpz_set(ivar_3, ivar_4->length);
        release_finite_sequences__finseq(ivar_4, finite_sequences__T);
        /* lsum */ mpz_ptr_t ivar_5;
        mpz_ptr_t ivar_6;
        ivar_6 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_6);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_6, ivar_3);
        mpz_ptr_t ivar_7;
        finite_sequences__finseq_t ivar_8;
        //copying to finite_sequences__finseq from finite_sequences__finseq;
        ivar_8 = (finite_sequences__finseq_t)ivar_2;
        ivar_8->count++;
        ivar_7 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_7);
        mpz_set(ivar_7, ivar_8->length);
        release_finite_sequences__finseq(ivar_8, finite_sequences__T);
        mpz_mk_add(ivar_5, ivar_7, ivar_6);
        mpz_ptr_t ivar_10;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_10, ivar_5);
        mpz_clear(ivar_5);
        finite_sequences_funtype_0_t ivar_38;
        finite_sequences_closure_5_t cl22004;
        cl22004 = new_finite_sequences_closure_5();
        mpz_set(cl22004->fvar_1, ivar_3);
        cl22004->fvar_2 = (type_actual_t)finite_sequences__T;
        cl22004->fvar_3 = (finite_sequences__finseq_t)ivar_2;
        cl22004->fvar_3->count++;
        cl22004->fvar_4 = (finite_sequences__finseq_t)ivar_1;
        cl22004->fvar_4->count++;
        release_finite_sequences__finseq(ivar_1, finite_sequences__T);
        release_finite_sequences__finseq(ivar_2, finite_sequences__T);
        ivar_38 = (finite_sequences_funtype_0_t)cl22004;
        finite_sequences_funtype_0_t ivar_36;
        finite_sequences_closure_6_t cl22006;
        cl22006 = new_finite_sequences_closure_6();
        cl22006->fvar_1 = (finite_sequences_funtype_0_t)ivar_38;
        cl22006->fvar_1->count++;
        cl22006->fvar_2 = (type_actual_t)finite_sequences__T;
        ivar_36 = (finite_sequences_funtype_0_t)cl22006;
        result = (finite_sequences__finseq_t)new_finite_sequences__finseq();;
        mpz_init(result->length);
        mpz_set(result->length, ivar_10);
        mpz_clear(ivar_10);
        result->seq = (finite_sequences_funtype_0_t)ivar_36;

        return result;
}

extern finite_sequences__finseq_t finite_sequences__caret(type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1, finite_sequences_record_7_t ivar_2){
        finite_sequences__finseq_t result;
        /* m */ mpz_ptr_t ivar_3;
        finite_sequences_record_7_t ivar_4;
        //copying to finite_sequences_record_7 from finite_sequences_record_7;
        ivar_4 = (finite_sequences_record_7_t)ivar_2;
        ivar_4->count++;
        ivar_3 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_3);
        mpz_set(ivar_3, ivar_4->project_1);
        release_finite_sequences_record_7(ivar_4, finite_sequences__T);
        /* n */ mpz_ptr_t ivar_5;
        finite_sequences_record_7_t ivar_6;
        //copying to finite_sequences_record_7 from finite_sequences_record_7;
        ivar_6 = (finite_sequences_record_7_t)ivar_2;
        ivar_6->count++;
        release_finite_sequences_record_7(ivar_2, finite_sequences__T);
        ivar_5 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_5);
        mpz_set(ivar_5, ivar_6->project_2);
        release_finite_sequences_record_7(ivar_6, finite_sequences__T);
        bool_t ivar_7;
        bool_t ivar_8;
        mpz_ptr_t ivar_10;
        ivar_10 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_10);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_10, ivar_3);
        mpz_ptr_t ivar_11;
        ivar_11 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_11);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_11, ivar_5);
        int64_t tmp22012 = mpz_cmp(ivar_10, ivar_11);
        ivar_8 = (tmp22012 > 0);
        bool_t ivar_9;
        mpz_ptr_t ivar_13;
        ivar_13 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_13);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_13, ivar_3);
        mpz_ptr_t ivar_14;
        finite_sequences__finseq_t ivar_15;
        //copying to finite_sequences__finseq from finite_sequences__finseq;
        ivar_15 = (finite_sequences__finseq_t)ivar_1;
        ivar_15->count++;
        ivar_14 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_14);
        mpz_set(ivar_14, ivar_15->length);
        release_finite_sequences__finseq(ivar_15, finite_sequences__T);
        int64_t tmp22013 = mpz_cmp(ivar_13, ivar_14);
        ivar_9 = (tmp22013 >= 0);
        ivar_7 = ivar_8 || ivar_9;
        if (ivar_7){ 
             release_finite_sequences__finseq(ivar_1, finite_sequences__T);
             /* T */ type_actual_t ivar_18;
             ivar_18 = (type_actual_t)finite_sequences__T;
             result = (finite_sequences__finseq_t)finite_sequences__empty_seq((type_actual_t)ivar_18);
} else {
        
             /* len */ mpz_ptr_t ivar_19;
             mpz_ptr_t ivar_38;
             mpz_ptr_t ivar_22;
             mpz_ptr_t ivar_24;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_24, ivar_5);
             mpz_clear(ivar_5);
             mpz_ptr_t ivar_25;
             ivar_25 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_25);
             //copying to mpz from mpz;
             mpz_mk_set(ivar_25, ivar_3);
             mpz_mk_sub(ivar_22, ivar_24, ivar_25);
             uint8_t ivar_23;
             ivar_23 = (uint8_t)1;
             mpz_mk_set_ui(ivar_38, (uint64_t)ivar_23);
             mpz_add(ivar_38, ivar_38, ivar_22);
             mpq_ptr_t ivar_33;
             //copying to mpq from mpz;
             mpq_mk_set_z(ivar_33, ivar_38);
             mpz_clear(ivar_38);
             mpz_ptr_t ivar_37;
             mpz_ptr_t ivar_28;
             finite_sequences__finseq_t ivar_30;
             //copying to finite_sequences__finseq from finite_sequences__finseq;
             ivar_30 = (finite_sequences__finseq_t)ivar_1;
             ivar_30->count++;
             ivar_28 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_28);
             mpz_set(ivar_28, ivar_30->length);
             release_finite_sequences__finseq(ivar_30, finite_sequences__T);
             mpz_ptr_t ivar_29;
             ivar_29 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_29);
             //copying to mpz from mpz;
             mpz_mk_set(ivar_29, ivar_3);
             mpz_mk_sub(ivar_37, ivar_28, ivar_29);
             mpq_ptr_t ivar_34;
             //copying to mpq from mpz;
             mpq_mk_set_z(ivar_34, ivar_37);
             mpz_clear(ivar_37);
             mpq_ptr_t ivar_32;
             ivar_32 = (mpq_ptr_t)real_defs__min((mpq_ptr_t)ivar_33, (mpq_ptr_t)ivar_34);
             //copying to mpz from mpq;
             mpz_mk_set_q(ivar_19, ivar_32);
             mpq_clear(ivar_32);
             mpz_ptr_t ivar_39;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_39, ivar_19);
             mpz_clear(ivar_19);
             finite_sequences_funtype_0_t ivar_56;
             finite_sequences_closure_8_t cl22015;
             cl22015 = new_finite_sequences_closure_8();
             mpz_set(cl22015->fvar_1, ivar_3);
             cl22015->fvar_2 = (type_actual_t)finite_sequences__T;
             cl22015->fvar_3 = (finite_sequences__finseq_t)ivar_1;
             cl22015->fvar_3->count++;
             release_finite_sequences__finseq(ivar_1, finite_sequences__T);
             ivar_56 = (finite_sequences_funtype_0_t)cl22015;
             finite_sequences_funtype_0_t ivar_54;
             finite_sequences_closure_9_t cl22017;
             cl22017 = new_finite_sequences_closure_9();
             cl22017->fvar_1 = (finite_sequences_funtype_0_t)ivar_56;
             cl22017->fvar_1->count++;
             cl22017->fvar_2 = (type_actual_t)finite_sequences__T;
             ivar_54 = (finite_sequences_funtype_0_t)cl22017;
             result = (finite_sequences__finseq_t)new_finite_sequences__finseq();;
             mpz_init(result->length);
             mpz_set(result->length, ivar_39);
             mpz_clear(ivar_39);
             result->seq = (finite_sequences_funtype_0_t)ivar_54;
};

        return result;
}

extern finite_sequences__finseq_t finite_sequences__doublecaret(type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1, finite_sequences_record_7_t ivar_2){
        finite_sequences__finseq_t result;
        /* m */ mpz_ptr_t ivar_3;
        finite_sequences_record_7_t ivar_4;
        //copying to finite_sequences_record_7 from finite_sequences_record_7;
        ivar_4 = (finite_sequences_record_7_t)ivar_2;
        ivar_4->count++;
        ivar_3 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_3);
        mpz_set(ivar_3, ivar_4->project_1);
        release_finite_sequences_record_7(ivar_4, finite_sequences__T);
        /* n */ mpz_ptr_t ivar_5;
        finite_sequences_record_7_t ivar_6;
        //copying to finite_sequences_record_7 from finite_sequences_record_7;
        ivar_6 = (finite_sequences_record_7_t)ivar_2;
        ivar_6->count++;
        release_finite_sequences_record_7(ivar_2, finite_sequences__T);
        ivar_5 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_5);
        mpz_set(ivar_5, ivar_6->project_2);
        release_finite_sequences_record_7(ivar_6, finite_sequences__T);
        bool_t ivar_7;
        bool_t ivar_8;
        mpz_ptr_t ivar_10;
        ivar_10 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_10);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_10, ivar_3);
        mpz_ptr_t ivar_11;
        ivar_11 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_11);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_11, ivar_5);
        int64_t tmp22023 = mpz_cmp(ivar_10, ivar_11);
        ivar_8 = (tmp22023 >= 0);
        bool_t ivar_9;
        mpz_ptr_t ivar_13;
        ivar_13 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_13);
        //copying to mpz from mpz;
        mpz_mk_set(ivar_13, ivar_3);
        mpz_ptr_t ivar_14;
        finite_sequences__finseq_t ivar_15;
        //copying to finite_sequences__finseq from finite_sequences__finseq;
        ivar_15 = (finite_sequences__finseq_t)ivar_1;
        ivar_15->count++;
        ivar_14 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_14);
        mpz_set(ivar_14, ivar_15->length);
        release_finite_sequences__finseq(ivar_15, finite_sequences__T);
        int64_t tmp22024 = mpz_cmp(ivar_13, ivar_14);
        ivar_9 = (tmp22024 >= 0);
        ivar_7 = ivar_8 || ivar_9;
        if (ivar_7){ 
             release_finite_sequences__finseq(ivar_1, finite_sequences__T);
             /* T */ type_actual_t ivar_18;
             ivar_18 = (type_actual_t)finite_sequences__T;
             result = (finite_sequences__finseq_t)finite_sequences__empty_seq((type_actual_t)ivar_18);
} else {
        
             /* len */ mpz_ptr_t ivar_19;
             mpz_ptr_t ivar_35;
             mpz_ptr_t ivar_22;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_22, ivar_5);
             mpz_clear(ivar_5);
             mpz_ptr_t ivar_23;
             ivar_23 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_23);
             //copying to mpz from mpz;
             mpz_mk_set(ivar_23, ivar_3);
             mpz_mk_sub(ivar_35, ivar_22, ivar_23);
             mpq_ptr_t ivar_30;
             //copying to mpq from mpz;
             mpq_mk_set_z(ivar_30, ivar_35);
             mpz_clear(ivar_35);
             mpz_ptr_t ivar_34;
             mpz_ptr_t ivar_25;
             finite_sequences__finseq_t ivar_27;
             //copying to finite_sequences__finseq from finite_sequences__finseq;
             ivar_27 = (finite_sequences__finseq_t)ivar_1;
             ivar_27->count++;
             ivar_25 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_25);
             mpz_set(ivar_25, ivar_27->length);
             release_finite_sequences__finseq(ivar_27, finite_sequences__T);
             mpz_ptr_t ivar_26;
             ivar_26 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_26);
             //copying to mpz from mpz;
             mpz_mk_set(ivar_26, ivar_3);
             mpz_mk_sub(ivar_34, ivar_25, ivar_26);
             mpq_ptr_t ivar_31;
             //copying to mpq from mpz;
             mpq_mk_set_z(ivar_31, ivar_34);
             mpz_clear(ivar_34);
             mpq_ptr_t ivar_29;
             ivar_29 = (mpq_ptr_t)real_defs__min((mpq_ptr_t)ivar_30, (mpq_ptr_t)ivar_31);
             //copying to mpz from mpq;
             mpz_mk_set_q(ivar_19, ivar_29);
             mpq_clear(ivar_29);
             mpz_ptr_t ivar_36;
             //copying to mpz from mpz;
             mpz_mk_set(ivar_36, ivar_19);
             mpz_clear(ivar_19);
             finite_sequences_funtype_0_t ivar_53;
             finite_sequences_closure_10_t cl22026;
             cl22026 = new_finite_sequences_closure_10();
             mpz_set(cl22026->fvar_1, ivar_3);
             cl22026->fvar_2 = (type_actual_t)finite_sequences__T;
             cl22026->fvar_3 = (finite_sequences__finseq_t)ivar_1;
             cl22026->fvar_3->count++;
             release_finite_sequences__finseq(ivar_1, finite_sequences__T);
             ivar_53 = (finite_sequences_funtype_0_t)cl22026;
             finite_sequences_funtype_0_t ivar_51;
             finite_sequences_closure_11_t cl22028;
             cl22028 = new_finite_sequences_closure_11();
             cl22028->fvar_1 = (finite_sequences_funtype_0_t)ivar_53;
             cl22028->fvar_1->count++;
             cl22028->fvar_2 = (type_actual_t)finite_sequences__T;
             ivar_51 = (finite_sequences_funtype_0_t)cl22028;
             result = (finite_sequences__finseq_t)new_finite_sequences__finseq();;
             mpz_init(result->length);
             mpz_set(result->length, ivar_36);
             mpz_clear(ivar_36);
             result->seq = (finite_sequences_funtype_0_t)ivar_51;
};

        return result;
}

extern finite_sequences__T_t finite_sequences__extract1(type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1){
        finite_sequences__T_t result;
        finite_sequences_funtype_0_t ivar_6;
        finite_sequences__finseq_t ivar_7;
        //copying to finite_sequences__finseq from finite_sequences__finseq;
        ivar_7 = (finite_sequences__finseq_t)ivar_1;
        ivar_7->count++;
        release_finite_sequences__finseq(ivar_1, finite_sequences__T);
        ivar_6 = (finite_sequences_funtype_0_t)ivar_7->seq;
        ivar_6->count++;
        release_finite_sequences__finseq(ivar_7, finite_sequences__T);
        uint8_t ivar_9;
        ivar_9 = (uint8_t)0;
        mpz_ptr_t ivar_8;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_8, ivar_9);
        result = (finite_sequences__T_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
        ivar_6->ftbl->rptr(ivar_6);

        return result;
}