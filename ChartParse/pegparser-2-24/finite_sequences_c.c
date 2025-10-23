//Code generated using pvs2ir2c
#include "finite_sequences_c.h"

void release_finite_sequences_funtype_0(finite_sequences_funtype_0_t x, type_actual_t finite_sequences__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

finite_sequences_funtype_0_t copy_finite_sequences_funtype_0(finite_sequences_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_finite_sequences_funtype_0(finite_sequences_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        finite_sequences_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp1851 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp1851 == 0);
        bool_t keymatch;
        int64_t tmp1852 = mpz_cmp(data.key, i);
        keymatch = (tmp1852 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                int64_t tmp1851 = mpz_cmp_ui(data.key, 0);
                keyzero = (tmp1851 == 0);

                int64_t tmp1852 = mpz_cmp(data.key, i);
                keymatch = (tmp1852 == 0);
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
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp1853 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp1853 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp1854 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp1854 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp1855 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp1855 == 0);
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
        int64_t tmp1856 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp1856 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (finite_sequences__T_t)v; htbl->num_entries++;}
            else {finite_sequences__T_t tempvalue;tempvalue = (finite_sequences__T_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (finite_sequences__T_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)finite_sequences__T->release_ptr(tempvalue, finite_sequences__T);};
        return a;

}

finite_sequences_funtype_0_t update_finite_sequences_funtype_0(finite_sequences_funtype_0_t a, mpz_ptr_t i, finite_sequences__T_t v, type_actual_t finite_sequences__T){
        if (a->count == 1){
                return dupdate_finite_sequences_funtype_0(a, i, v, finite_sequences__T);
            } else {
                finite_sequences_funtype_0_t x = copy_finite_sequences_funtype_0(a);
                a->count--;
                return dupdate_finite_sequences_funtype_0(x, i, v, finite_sequences__T);
            }}

bool_t equal_finite_sequences_funtype_0(finite_sequences_funtype_0_t x, finite_sequences_funtype_0_t y, type_actual_t finite_sequences__T){
        return false;}

char* json_finite_sequences_funtype_0(finite_sequences_funtype_0_t x, type_actual_t finite_sequences__T){char * result = safe_malloc(36); sprintf(result, "%s", "\"finite_sequences_funtype_0\""); return result;}


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
        bool_t tmp = true;tmp = tmp && (mpz_cmp(x->length, y->length) == 0);
        tmp = tmp && equal_finite_sequences_funtype_0(x->seq, y->seq, finite_sequences__T);
        return tmp;}

char * json_finite_sequences__finseq(finite_sequences__finseq_t x, type_actual_t finite_sequences__T){
        char * tmp[2]; 
        char * fld0 = safe_malloc(18);
         sprintf(fld0, "\"length\" : ");
        tmp[0] = safe_strcat(fld0, json_mpz(x->length));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"seq\" : ");
        tmp[1] = safe_strcat(fld1, json_finite_sequences_funtype_0(x->seq, finite_sequences__T));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_finite_sequences__finseq_ptr(pointer_t x, pointer_t y, actual_finite_sequences__finseq_t T){
        actual_finite_sequences__finseq_t actual = (actual_finite_sequences__finseq_t)T;
        type_actual_t finite_sequences__T = actual->finite_sequences__T;
        return equal_finite_sequences__finseq((finite_sequences__finseq_t)x, (finite_sequences__finseq_t)y, finite_sequences__T);
}

char * json_finite_sequences__finseq_ptr(pointer_t x, actual_finite_sequences__finseq_t T){
        actual_finite_sequences__finseq_t actual = (actual_finite_sequences__finseq_t)T;
        type_actual_t finite_sequences__T = actual->finite_sequences__T;
        return json_finite_sequences__finseq((finite_sequences__finseq_t)x, finite_sequences__T);
}

actual_finite_sequences__finseq_t actual_finite_sequences__finseq(type_actual_t finite_sequences__T){
        actual_finite_sequences__finseq_t new = (actual_finite_sequences__finseq_t)safe_malloc(sizeof(struct actual_finite_sequences__finseq_s));
        new->equal_ptr = (equal_ptr_t)(*equal_finite_sequences__finseq_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_finite_sequences__finseq_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_finite_sequences__finseq_ptr);
 

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
        uint32_t hashindex = ihash & mask;
        finite_sequences_funtype_2_hashentry_t data = htbl->data[hashindex];
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
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (finite_sequences__T_t)v; htbl->num_entries++;}
            else {finite_sequences__T_t tempvalue;tempvalue = (finite_sequences__T_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (finite_sequences__T_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)finite_sequences__T->release_ptr(tempvalue, finite_sequences__T);};
        return a;

}

finite_sequences_funtype_2_t update_finite_sequences_funtype_2(finite_sequences_funtype_2_t a, uint8_t i, finite_sequences__T_t v, type_actual_t finite_sequences__T){
        if (a->count == 1){
                return dupdate_finite_sequences_funtype_2(a, i, v, finite_sequences__T);
            } else {
                finite_sequences_funtype_2_t x = copy_finite_sequences_funtype_2(a);
                a->count--;
                return dupdate_finite_sequences_funtype_2(x, i, v, finite_sequences__T);
            }}

bool_t equal_finite_sequences_funtype_2(finite_sequences_funtype_2_t x, finite_sequences_funtype_2_t y, type_actual_t finite_sequences__T){
        return false;}

char* json_finite_sequences_funtype_2(finite_sequences_funtype_2_t x, type_actual_t finite_sequences__T){char * result = safe_malloc(36); sprintf(result, "%s", "\"finite_sequences_funtype_2\""); return result;}


finite_sequences__T_t f_finite_sequences_closure_3(struct finite_sequences_closure_3_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        finite_sequences_funtype_2_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_finite_sequences_funtype_2(htbl, bvar, hash);
        finite_sequences_funtype_2_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            finite_sequences__T_t result;
            result = (finite_sequences__T_t)entry.value;
            return result;}
        

        return h_finite_sequences_closure_3(bvar, closure->fvar_1);};

return h_finite_sequences_closure_3(bvar, closure->fvar_1);}

finite_sequences__T_t m_finite_sequences_closure_3(struct finite_sequences_closure_3_s * closure, uint8_t bvar){
        return h_finite_sequences_closure_3(bvar, closure->fvar_1);}

finite_sequences__T_t h_finite_sequences_closure_3(uint8_t ivar_4, type_actual_t finite_sequences__T){
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
            finite_sequences_funtype_2_htbl_t new_htbl = (finite_sequences_funtype_2_htbl_t) safe_malloc(sizeof(struct finite_sequences_funtype_2_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            finite_sequences_funtype_2_hashentry_t * new_data = (finite_sequences_funtype_2_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct finite_sequences_funtype_2_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct finite_sequences_funtype_2_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
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
         int64_t tmp1858 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp1858 == 0);
        if (!keyzero || entry.keyhash != 0){
            finite_sequences__T_t result;
            result = (finite_sequences__T_t)entry.value;
            return result;}
        

        return h_finite_sequences_closure_4(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);};

return h_finite_sequences_closure_4(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

finite_sequences__T_t m_finite_sequences_closure_4(struct finite_sequences_closure_4_s * closure, mpz_ptr_t bvar){
        return h_finite_sequences_closure_4(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

finite_sequences__T_t h_finite_sequences_closure_4(mpz_ptr_t ivar_15, mpz_ptr_t ivar_1, type_actual_t finite_sequences__T, finite_sequences_funtype_2_t ivar_12){
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
        mpz_init(tmp->fvar_1);
        return tmp;}

void release_finite_sequences_closure_4(finite_sequences_funtype_0_t closure, type_actual_t finite_sequences__T){
        finite_sequences_closure_4_t x = (finite_sequences_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
         release_finite_sequences_funtype_2(x->fvar_3, finite_sequences__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

finite_sequences_closure_4_t copy_finite_sequences_closure_4(finite_sequences_closure_4_t x){
        finite_sequences_closure_4_t y = new_finite_sequences_closure_4();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        y->fvar_2 = (type_actual_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            finite_sequences_funtype_0_htbl_t new_htbl = (finite_sequences_funtype_0_htbl_t) safe_malloc(sizeof(struct finite_sequences_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            finite_sequences_funtype_0_hashentry_t * new_data = (finite_sequences_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct finite_sequences_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct finite_sequences_funtype_0_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_finite_sequences_funtype_5(finite_sequences_funtype_5_t x, type_actual_t finite_sequences__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

finite_sequences_funtype_5_t copy_finite_sequences_funtype_5(finite_sequences_funtype_5_t x){return x->ftbl->cptr(x);}

bool_t equal_finite_sequences_funtype_5(finite_sequences_funtype_5_t x, finite_sequences_funtype_5_t y, type_actual_t finite_sequences__T){
        return false;}

char* json_finite_sequences_funtype_5(finite_sequences_funtype_5_t x, type_actual_t finite_sequences__T){char * result = safe_malloc(36); sprintf(result, "%s", "\"finite_sequences_funtype_5\""); return result;}

void release_finite_sequences_funtype_6(finite_sequences_funtype_6_t x, type_actual_t finite_sequences__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

finite_sequences_funtype_6_t copy_finite_sequences_funtype_6(finite_sequences_funtype_6_t x){return x->ftbl->cptr(x);}

bool_t equal_finite_sequences_funtype_6(finite_sequences_funtype_6_t x, finite_sequences_funtype_6_t y, type_actual_t finite_sequences__T){
        return false;}

char* json_finite_sequences_funtype_6(finite_sequences_funtype_6_t x, type_actual_t finite_sequences__T){char * result = safe_malloc(36); sprintf(result, "%s", "\"finite_sequences_funtype_6\""); return result;}


bool_t f_finite_sequences_closure_7(struct finite_sequences_closure_7_s * closure, finite_sequences__finseq_t bvar){
        bool_t result = h_finite_sequences_closure_7(bvar); 
        return result;}

bool_t m_finite_sequences_closure_7(struct finite_sequences_closure_7_s * closure, finite_sequences__finseq_t bvar){
        return h_finite_sequences_closure_7(bvar);}

bool_t h_finite_sequences_closure_7(finite_sequences__finseq_t ivar_4){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}

finite_sequences_closure_7_t new_finite_sequences_closure_7(void){
        static struct finite_sequences_funtype_5_ftbl_s ftbl = {.fptr = (bool_t (*)(finite_sequences_funtype_5_t, finite_sequences__finseq_t))&f_finite_sequences_closure_7, .mptr = (bool_t (*)(finite_sequences_funtype_5_t, finite_sequences__finseq_t))&m_finite_sequences_closure_7, .rptr =  (void (*)(finite_sequences_funtype_5_t))&release_finite_sequences_closure_7, .cptr = (finite_sequences_funtype_5_t (*)(finite_sequences_funtype_5_t))&copy_finite_sequences_closure_7};
        finite_sequences_closure_7_t tmp = (finite_sequences_closure_7_t) safe_malloc(sizeof(struct finite_sequences_closure_7_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_finite_sequences_closure_7(finite_sequences_funtype_5_t closure, type_actual_t finite_sequences__T){
        finite_sequences_closure_7_t x = (finite_sequences_closure_7_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

finite_sequences_closure_7_t copy_finite_sequences_closure_7(finite_sequences_closure_7_t x){
        finite_sequences_closure_7_t y = new_finite_sequences_closure_7();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            finite_sequences_funtype_5_htbl_t new_htbl = (finite_sequences_funtype_5_htbl_t) safe_malloc(sizeof(struct finite_sequences_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            finite_sequences_funtype_5_hashentry_t * new_data = (finite_sequences_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct finite_sequences_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct finite_sequences_funtype_5_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_finite_sequences_closure_8(struct finite_sequences_closure_8_s * closure, finite_sequences__finseq_t bvar){
        bool_t result = h_finite_sequences_closure_8(bvar); 
        return result;}

bool_t m_finite_sequences_closure_8(struct finite_sequences_closure_8_s * closure, finite_sequences__finseq_t bvar){
        return h_finite_sequences_closure_8(bvar);}

bool_t h_finite_sequences_closure_8(finite_sequences__finseq_t ivar_4){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}

finite_sequences_closure_8_t new_finite_sequences_closure_8(void){
        static struct finite_sequences_funtype_5_ftbl_s ftbl = {.fptr = (bool_t (*)(finite_sequences_funtype_5_t, finite_sequences__finseq_t))&f_finite_sequences_closure_8, .mptr = (bool_t (*)(finite_sequences_funtype_5_t, finite_sequences__finseq_t))&m_finite_sequences_closure_8, .rptr =  (void (*)(finite_sequences_funtype_5_t))&release_finite_sequences_closure_8, .cptr = (finite_sequences_funtype_5_t (*)(finite_sequences_funtype_5_t))&copy_finite_sequences_closure_8};
        finite_sequences_closure_8_t tmp = (finite_sequences_closure_8_t) safe_malloc(sizeof(struct finite_sequences_closure_8_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_finite_sequences_closure_8(finite_sequences_funtype_5_t closure, type_actual_t finite_sequences__T){
        finite_sequences_closure_8_t x = (finite_sequences_closure_8_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

finite_sequences_closure_8_t copy_finite_sequences_closure_8(finite_sequences_closure_8_t x){
        finite_sequences_closure_8_t y = new_finite_sequences_closure_8();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            finite_sequences_funtype_5_htbl_t new_htbl = (finite_sequences_funtype_5_htbl_t) safe_malloc(sizeof(struct finite_sequences_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            finite_sequences_funtype_5_hashentry_t * new_data = (finite_sequences_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct finite_sequences_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct finite_sequences_funtype_5_hashentry_s)));
            new_htbl->data = new_data;;
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
         int64_t tmp1876 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp1876 == 0);
        if (!keyzero || entry.keyhash != 0){
            finite_sequences__T_t result;
            result = (finite_sequences__T_t)entry.value;
            return result;}
        

        return h_finite_sequences_closure_9(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);};

return h_finite_sequences_closure_9(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

finite_sequences__T_t m_finite_sequences_closure_9(struct finite_sequences_closure_9_s * closure, mpz_ptr_t bvar){
        return h_finite_sequences_closure_9(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

finite_sequences__T_t h_finite_sequences_closure_9(mpz_ptr_t ivar_13, mpz_ptr_t ivar_5, mpz_ptr_t ivar_3, type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_2, finite_sequences__finseq_t ivar_1){
        finite_sequences__T_t result;
        bool_t ivar_14;
        int64_t tmp1877 = mpz_cmp(ivar_13, ivar_3);
        ivar_14 = (tmp1877 < 0);
        if (ivar_14){ 
             finite_sequences_funtype_0_t ivar_22;
             ivar_22 = (finite_sequences_funtype_0_t)ivar_1->seq;
             ivar_22->count++;
             result = (finite_sequences__T_t)ivar_22->ftbl->fptr(ivar_22, ivar_13);
             ivar_22->ftbl->rptr(ivar_22);
} else {
        
             finite_sequences_funtype_0_t ivar_32;
             ivar_32 = (finite_sequences_funtype_0_t)ivar_2->seq;
             ivar_32->count++;
             mpz_ptr_t ivar_34;
             mpz_mk_sub(ivar_34, ivar_13, ivar_3);
             result = (finite_sequences__T_t)ivar_32->ftbl->fptr(ivar_32, ivar_34);
             ivar_32->ftbl->rptr(ivar_32);
};

        return result;
}

finite_sequences_closure_9_t new_finite_sequences_closure_9(void){
        static struct finite_sequences_funtype_0_ftbl_s ftbl = {.fptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&f_finite_sequences_closure_9, .mptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&m_finite_sequences_closure_9, .rptr =  (void (*)(finite_sequences_funtype_0_t))&release_finite_sequences_closure_9, .cptr = (finite_sequences_funtype_0_t (*)(finite_sequences_funtype_0_t))&copy_finite_sequences_closure_9};
        finite_sequences_closure_9_t tmp = (finite_sequences_closure_9_t) safe_malloc(sizeof(struct finite_sequences_closure_9_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_finite_sequences_closure_9(finite_sequences_funtype_0_t closure, type_actual_t finite_sequences__T){
        finite_sequences_closure_9_t x = (finite_sequences_closure_9_t)closure;
        x->count--;
        if (x->count <= 0){
         release_finite_sequences__finseq(x->fvar_4, finite_sequences__T);
         release_finite_sequences__finseq(x->fvar_5, finite_sequences__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

finite_sequences_closure_9_t copy_finite_sequences_closure_9(finite_sequences_closure_9_t x){
        finite_sequences_closure_9_t y = new_finite_sequences_closure_9();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        mpz_set(y->fvar_2, x->fvar_2);
        y->fvar_3 = (type_actual_t)x->fvar_3;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            finite_sequences_funtype_0_htbl_t new_htbl = (finite_sequences_funtype_0_htbl_t) safe_malloc(sizeof(struct finite_sequences_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            finite_sequences_funtype_0_hashentry_t * new_data = (finite_sequences_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct finite_sequences_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct finite_sequences_funtype_0_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


finite_sequences_record_10_t new_finite_sequences_record_10(void){
        finite_sequences_record_10_t tmp = (finite_sequences_record_10_t) safe_malloc(sizeof(struct finite_sequences_record_10_s));
        tmp->count = 1;
        return tmp;}

void release_finite_sequences_record_10(finite_sequences_record_10_t x, type_actual_t finite_sequences__T){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_finite_sequences_record_10_ptr(pointer_t x, type_actual_t T){
        actual_finite_sequences_record_10_t actual = (actual_finite_sequences_record_10_t)T;
        type_actual_t finite_sequences__T = actual->finite_sequences__T;
        release_finite_sequences_record_10((finite_sequences_record_10_t)x, finite_sequences__T);
}

finite_sequences_record_10_t copy_finite_sequences_record_10(finite_sequences_record_10_t x){
        finite_sequences_record_10_t y = new_finite_sequences_record_10();
        mpz_set(y->project_1, x->project_1);
        mpz_set(y->project_2, x->project_2);
        y->count = 1;
        return y;}

bool_t equal_finite_sequences_record_10(finite_sequences_record_10_t x, finite_sequences_record_10_t y, type_actual_t finite_sequences__T){
        bool_t tmp = true;tmp = tmp && (mpz_cmp(x->project_1, y->project_1) == 0);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);
        return tmp;}

char * json_finite_sequences_record_10(finite_sequences_record_10_t x, type_actual_t finite_sequences__T){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_mpz(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_finite_sequences_record_10_ptr(pointer_t x, pointer_t y, actual_finite_sequences_record_10_t T){
        actual_finite_sequences_record_10_t actual = (actual_finite_sequences_record_10_t)T;
        type_actual_t finite_sequences__T = actual->finite_sequences__T;
        return equal_finite_sequences_record_10((finite_sequences_record_10_t)x, (finite_sequences_record_10_t)y, finite_sequences__T);
}

char * json_finite_sequences_record_10_ptr(pointer_t x, actual_finite_sequences_record_10_t T){
        actual_finite_sequences_record_10_t actual = (actual_finite_sequences_record_10_t)T;
        type_actual_t finite_sequences__T = actual->finite_sequences__T;
        return json_finite_sequences_record_10((finite_sequences_record_10_t)x, finite_sequences__T);
}

actual_finite_sequences_record_10_t actual_finite_sequences_record_10(type_actual_t finite_sequences__T){
        actual_finite_sequences_record_10_t new = (actual_finite_sequences_record_10_t)safe_malloc(sizeof(struct actual_finite_sequences_record_10_s));
        new->equal_ptr = (equal_ptr_t)(*equal_finite_sequences_record_10_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_finite_sequences_record_10_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_finite_sequences_record_10_ptr);
 

        new->finite_sequences__T = finite_sequences__T;
 
        return new;
 };

finite_sequences_record_10_t update_finite_sequences_record_10_project_1(finite_sequences_record_10_t x, mpz_ptr_t v){
        finite_sequences_record_10_t y;
        if (x->count == 1){y = x;}
        else {y = copy_finite_sequences_record_10(x); x->count--;};
        mpz_set(y->project_1, v);
        return y;}

finite_sequences_record_10_t update_finite_sequences_record_10_project_2(finite_sequences_record_10_t x, mpz_ptr_t v){
        finite_sequences_record_10_t y;
        if (x->count == 1){y = x;}
        else {y = copy_finite_sequences_record_10(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}




finite_sequences__T_t f_finite_sequences_closure_11(struct finite_sequences_closure_11_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        finite_sequences_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_finite_sequences_funtype_0(htbl, bvar, hash);
        finite_sequences_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp1895 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp1895 == 0);
        if (!keyzero || entry.keyhash != 0){
            finite_sequences__T_t result;
            result = (finite_sequences__T_t)entry.value;
            return result;}
        

        return h_finite_sequences_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);};

return h_finite_sequences_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

finite_sequences__T_t m_finite_sequences_closure_11(struct finite_sequences_closure_11_s * closure, mpz_ptr_t bvar){
        return h_finite_sequences_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

finite_sequences__T_t h_finite_sequences_closure_11(mpz_ptr_t ivar_42, mpz_ptr_t ivar_19, mpz_ptr_t ivar_3, type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1){
        finite_sequences__T_t result;
        finite_sequences_funtype_0_t ivar_50;
        ivar_50 = (finite_sequences_funtype_0_t)ivar_1->seq;
        ivar_50->count++;
        mpz_ptr_t ivar_52;
        mpz_mk_add(ivar_52, ivar_3, ivar_42);
        result = (finite_sequences__T_t)ivar_50->ftbl->fptr(ivar_50, ivar_52);
        ivar_50->ftbl->rptr(ivar_50);

        return result;
}

finite_sequences_closure_11_t new_finite_sequences_closure_11(void){
        static struct finite_sequences_funtype_0_ftbl_s ftbl = {.fptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&f_finite_sequences_closure_11, .mptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&m_finite_sequences_closure_11, .rptr =  (void (*)(finite_sequences_funtype_0_t))&release_finite_sequences_closure_11, .cptr = (finite_sequences_funtype_0_t (*)(finite_sequences_funtype_0_t))&copy_finite_sequences_closure_11};
        finite_sequences_closure_11_t tmp = (finite_sequences_closure_11_t) safe_malloc(sizeof(struct finite_sequences_closure_11_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_finite_sequences_closure_11(finite_sequences_funtype_0_t closure, type_actual_t finite_sequences__T){
        finite_sequences_closure_11_t x = (finite_sequences_closure_11_t)closure;
        x->count--;
        if (x->count <= 0){
         release_finite_sequences__finseq(x->fvar_4, finite_sequences__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

finite_sequences_closure_11_t copy_finite_sequences_closure_11(finite_sequences_closure_11_t x){
        finite_sequences_closure_11_t y = new_finite_sequences_closure_11();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        mpz_set(y->fvar_2, x->fvar_2);
        y->fvar_3 = (type_actual_t)x->fvar_3;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        if (x->htbl != NULL){
            finite_sequences_funtype_0_htbl_t new_htbl = (finite_sequences_funtype_0_htbl_t) safe_malloc(sizeof(struct finite_sequences_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            finite_sequences_funtype_0_hashentry_t * new_data = (finite_sequences_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct finite_sequences_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct finite_sequences_funtype_0_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


finite_sequences__T_t f_finite_sequences_closure_12(struct finite_sequences_closure_12_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        finite_sequences_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_finite_sequences_funtype_0(htbl, bvar, hash);
        finite_sequences_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp1913 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp1913 == 0);
        if (!keyzero || entry.keyhash != 0){
            finite_sequences__T_t result;
            result = (finite_sequences__T_t)entry.value;
            return result;}
        

        return h_finite_sequences_closure_12(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);};

return h_finite_sequences_closure_12(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

finite_sequences__T_t m_finite_sequences_closure_12(struct finite_sequences_closure_12_s * closure, mpz_ptr_t bvar){
        return h_finite_sequences_closure_12(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

finite_sequences__T_t h_finite_sequences_closure_12(mpz_ptr_t ivar_39, mpz_ptr_t ivar_19, mpz_ptr_t ivar_3, type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1){
        finite_sequences__T_t result;
        finite_sequences_funtype_0_t ivar_47;
        ivar_47 = (finite_sequences_funtype_0_t)ivar_1->seq;
        ivar_47->count++;
        mpz_ptr_t ivar_49;
        mpz_mk_add(ivar_49, ivar_3, ivar_39);
        result = (finite_sequences__T_t)ivar_47->ftbl->fptr(ivar_47, ivar_49);
        ivar_47->ftbl->rptr(ivar_47);

        return result;
}

finite_sequences_closure_12_t new_finite_sequences_closure_12(void){
        static struct finite_sequences_funtype_0_ftbl_s ftbl = {.fptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&f_finite_sequences_closure_12, .mptr = (finite_sequences__T_t (*)(finite_sequences_funtype_0_t, mpz_ptr_t))&m_finite_sequences_closure_12, .rptr =  (void (*)(finite_sequences_funtype_0_t))&release_finite_sequences_closure_12, .cptr = (finite_sequences_funtype_0_t (*)(finite_sequences_funtype_0_t))&copy_finite_sequences_closure_12};
        finite_sequences_closure_12_t tmp = (finite_sequences_closure_12_t) safe_malloc(sizeof(struct finite_sequences_closure_12_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_1);
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_finite_sequences_closure_12(finite_sequences_funtype_0_t closure, type_actual_t finite_sequences__T){
        finite_sequences_closure_12_t x = (finite_sequences_closure_12_t)closure;
        x->count--;
        if (x->count <= 0){
         release_finite_sequences__finseq(x->fvar_4, finite_sequences__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

finite_sequences_closure_12_t copy_finite_sequences_closure_12(finite_sequences_closure_12_t x){
        finite_sequences_closure_12_t y = new_finite_sequences_closure_12();
        y->ftbl = x->ftbl;

        mpz_set(y->fvar_1, x->fvar_1);
        mpz_set(y->fvar_2, x->fvar_2);
        y->fvar_3 = (type_actual_t)x->fvar_3;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        if (x->htbl != NULL){
            finite_sequences_funtype_0_htbl_t new_htbl = (finite_sequences_funtype_0_htbl_t) safe_malloc(sizeof(struct finite_sequences_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            finite_sequences_funtype_0_hashentry_t * new_data = (finite_sequences_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct finite_sequences_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct finite_sequences_funtype_0_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

finite_sequences__finseq_t finite_sequences__empty_seq(type_actual_t finite_sequences__T){
        finite_sequences__finseq_t  result;
        uint8_t ivar_17;
        ivar_17 = (uint8_t)0;
        mpz_ptr_t ivar_1;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_1, ivar_17);
        finite_sequences_funtype_2_t ivar_12;
        finite_sequences_closure_3_t cl1857;
        cl1857 = new_finite_sequences_closure_3();
        cl1857->fvar_1 = (type_actual_t)finite_sequences__T;
        ivar_12 = (finite_sequences_funtype_2_t)cl1857;
        finite_sequences_funtype_0_t ivar_10;
        finite_sequences_closure_4_t cl1859;
        cl1859 = new_finite_sequences_closure_4();
        mpz_set(cl1859->fvar_1, ivar_1);
        cl1859->fvar_2 = (type_actual_t)finite_sequences__T;
        cl1859->fvar_3 = (finite_sequences_funtype_2_t)ivar_12;
        if (cl1859->fvar_3 != NULL) cl1859->fvar_3->count++;
        ivar_10 = (finite_sequences_funtype_0_t)cl1859;
        finite_sequences__finseq_t tmp1860 = new_finite_sequences__finseq();;
        result = (finite_sequences__finseq_t)tmp1860;
        mpz_init(tmp1860->length);
        mpz_set(tmp1860->length, ivar_1);
        tmp1860->seq = (finite_sequences_funtype_0_t)ivar_10;

        
        return result;
}

finite_sequences_funtype_0_t finite_sequences__finseq_appl(type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1){
        finite_sequences_funtype_0_t  result;
        result = (finite_sequences_funtype_0_t)ivar_1->seq;
        result->count++;
        release_finite_sequences__finseq(ivar_1, finite_sequences__T);

        
        return result;
}

finite_sequences_funtype_5_t finite_sequences__every(type_actual_t finite_sequences__T, finite_sequences_funtype_6_t ivar_1){
        finite_sequences_funtype_5_t  result;
        finite_sequences_closure_7_t cl1864;
        cl1864 = new_finite_sequences_closure_7();
        result = (finite_sequences_funtype_5_t)cl1864;

        
        return result;
}

finite_sequences_funtype_5_t finite_sequences__some(type_actual_t finite_sequences__T, finite_sequences_funtype_6_t ivar_1){
        finite_sequences_funtype_5_t  result;
        finite_sequences_closure_8_t cl1867;
        cl1867 = new_finite_sequences_closure_8();
        result = (finite_sequences_funtype_5_t)cl1867;

        
        return result;
}

finite_sequences__finseq_t finite_sequences__oh(type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1, finite_sequences__finseq_t ivar_2){
        finite_sequences__finseq_t  result;
        /* l1 */ mpz_ptr_t ivar_3;
        ivar_3 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_3);
        mpz_set(ivar_3, ivar_1->length);
        /* lsum */ mpz_ptr_t ivar_5;
        mpz_ptr_t ivar_7;
        ivar_7 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_7);
        mpz_set(ivar_7, ivar_2->length);
        mpz_mk_add(ivar_5, ivar_7, ivar_3);
        finite_sequences_funtype_0_t ivar_35;
        finite_sequences_closure_9_t cl1878;
        cl1878 = new_finite_sequences_closure_9();
        mpz_set(cl1878->fvar_1, ivar_5);
        mpz_set(cl1878->fvar_2, ivar_3);
        cl1878->fvar_3 = (type_actual_t)finite_sequences__T;
        cl1878->fvar_4 = (finite_sequences__finseq_t)ivar_2;
        if (cl1878->fvar_4 != NULL) cl1878->fvar_4->count++;
        cl1878->fvar_5 = (finite_sequences__finseq_t)ivar_1;
        if (cl1878->fvar_5 != NULL) cl1878->fvar_5->count++;
        release_finite_sequences__finseq(ivar_1, finite_sequences__T);
        release_finite_sequences__finseq(ivar_2, finite_sequences__T);
        ivar_35 = (finite_sequences_funtype_0_t)cl1878;
        finite_sequences__finseq_t tmp1879 = new_finite_sequences__finseq();;
        result = (finite_sequences__finseq_t)tmp1879;
        mpz_init(tmp1879->length);
        mpz_set(tmp1879->length, ivar_5);
        tmp1879->seq = (finite_sequences_funtype_0_t)ivar_35;

        
        return result;
}

finite_sequences__finseq_t finite_sequences__caret(type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1, finite_sequences_record_10_t ivar_2){
        finite_sequences__finseq_t  result;
        /* m */ mpz_ptr_t ivar_3;
        ivar_3 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_3);
        mpz_set(ivar_3, ivar_2->project_1);
        /* n */ mpz_ptr_t ivar_5;
        ivar_5 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_5);
        mpz_set(ivar_5, ivar_2->project_2);
        release_finite_sequences_record_10(ivar_2, finite_sequences__T);
        bool_t ivar_7;
        bool_t ivar_8;
        int64_t tmp1893 = mpz_cmp(ivar_3, ivar_5);
        ivar_8 = (tmp1893 > 0);
        if (ivar_8){ 
             ivar_7 = (bool_t) true;
} else {
        
             mpz_ptr_t ivar_14;
             ivar_14 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_14);
             mpz_set(ivar_14, ivar_1->length);
             int64_t tmp1894 = mpz_cmp(ivar_3, ivar_14);
             ivar_7 = (tmp1894 >= 0);
};
        if (ivar_7){ 
             release_finite_sequences__finseq(ivar_1, finite_sequences__T);
             result = (finite_sequences__finseq_t)finite_sequences__empty_seq((type_actual_t)finite_sequences__T);
} else {
        
             /* len */ mpz_ptr_t ivar_19;
             mpz_ptr_t ivar_38;
             mpz_ptr_t ivar_22;
             mpz_mk_sub(ivar_22, ivar_5, ivar_3);
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
             ivar_28 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_28);
             mpz_set(ivar_28, ivar_1->length);
             mpz_mk_sub(ivar_37, ivar_28, ivar_3);
             mpq_ptr_t ivar_34;
             //copying to mpq from mpz;
             mpq_mk_set_z(ivar_34, ivar_37);
             mpz_clear(ivar_37);
             mpz_mk_set_q(ivar_19, real_defs__min((mpq_ptr_t)ivar_33, (mpq_ptr_t)ivar_34));
             finite_sequences_funtype_0_t ivar_53;
             finite_sequences_closure_11_t cl1896;
             cl1896 = new_finite_sequences_closure_11();
             mpz_set(cl1896->fvar_1, ivar_19);
             mpz_set(cl1896->fvar_2, ivar_3);
             cl1896->fvar_3 = (type_actual_t)finite_sequences__T;
             cl1896->fvar_4 = (finite_sequences__finseq_t)ivar_1;
             if (cl1896->fvar_4 != NULL) cl1896->fvar_4->count++;
             release_finite_sequences__finseq(ivar_1, finite_sequences__T);
             ivar_53 = (finite_sequences_funtype_0_t)cl1896;
             finite_sequences__finseq_t tmp1897 = new_finite_sequences__finseq();;
             result = (finite_sequences__finseq_t)tmp1897;
             mpz_init(tmp1897->length);
             mpz_set(tmp1897->length, ivar_19);
             tmp1897->seq = (finite_sequences_funtype_0_t)ivar_53;
};

        
        return result;
}

finite_sequences__finseq_t finite_sequences__doublecaret(type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1, finite_sequences_record_10_t ivar_2){
        finite_sequences__finseq_t  result;
        /* m */ mpz_ptr_t ivar_3;
        ivar_3 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_3);
        mpz_set(ivar_3, ivar_2->project_1);
        /* n */ mpz_ptr_t ivar_5;
        ivar_5 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_5);
        mpz_set(ivar_5, ivar_2->project_2);
        release_finite_sequences_record_10(ivar_2, finite_sequences__T);
        bool_t ivar_7;
        bool_t ivar_8;
        int64_t tmp1911 = mpz_cmp(ivar_3, ivar_5);
        ivar_8 = (tmp1911 >= 0);
        if (ivar_8){ 
             ivar_7 = (bool_t) true;
} else {
        
             mpz_ptr_t ivar_14;
             ivar_14 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_14);
             mpz_set(ivar_14, ivar_1->length);
             int64_t tmp1912 = mpz_cmp(ivar_3, ivar_14);
             ivar_7 = (tmp1912 >= 0);
};
        if (ivar_7){ 
             release_finite_sequences__finseq(ivar_1, finite_sequences__T);
             result = (finite_sequences__finseq_t)finite_sequences__empty_seq((type_actual_t)finite_sequences__T);
} else {
        
             /* len */ mpz_ptr_t ivar_19;
             mpz_ptr_t ivar_35;
             mpz_mk_sub(ivar_35, ivar_5, ivar_3);
             mpq_ptr_t ivar_30;
             //copying to mpq from mpz;
             mpq_mk_set_z(ivar_30, ivar_35);
             mpz_clear(ivar_35);
             mpz_ptr_t ivar_34;
             mpz_ptr_t ivar_25;
             ivar_25 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_25);
             mpz_set(ivar_25, ivar_1->length);
             mpz_mk_sub(ivar_34, ivar_25, ivar_3);
             mpq_ptr_t ivar_31;
             //copying to mpq from mpz;
             mpq_mk_set_z(ivar_31, ivar_34);
             mpz_clear(ivar_34);
             mpz_mk_set_q(ivar_19, real_defs__min((mpq_ptr_t)ivar_30, (mpq_ptr_t)ivar_31));
             finite_sequences_funtype_0_t ivar_50;
             finite_sequences_closure_12_t cl1914;
             cl1914 = new_finite_sequences_closure_12();
             mpz_set(cl1914->fvar_1, ivar_19);
             mpz_set(cl1914->fvar_2, ivar_3);
             cl1914->fvar_3 = (type_actual_t)finite_sequences__T;
             cl1914->fvar_4 = (finite_sequences__finseq_t)ivar_1;
             if (cl1914->fvar_4 != NULL) cl1914->fvar_4->count++;
             release_finite_sequences__finseq(ivar_1, finite_sequences__T);
             ivar_50 = (finite_sequences_funtype_0_t)cl1914;
             finite_sequences__finseq_t tmp1915 = new_finite_sequences__finseq();;
             result = (finite_sequences__finseq_t)tmp1915;
             mpz_init(tmp1915->length);
             mpz_set(tmp1915->length, ivar_19);
             tmp1915->seq = (finite_sequences_funtype_0_t)ivar_50;
};

        
        return result;
}

finite_sequences__T_t finite_sequences__extract1(type_actual_t finite_sequences__T, finite_sequences__finseq_t ivar_1){
        finite_sequences__T_t  result;
        finite_sequences_funtype_0_t ivar_6;
        ivar_6 = (finite_sequences_funtype_0_t)ivar_1->seq;
        ivar_6->count++;
        uint8_t ivar_9;
        ivar_9 = (uint8_t)0;
        mpz_ptr_t ivar_8;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_8, ivar_9);
        result = (finite_sequences__T_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
        ivar_6->ftbl->rptr(ivar_6);

        
        return result;
}