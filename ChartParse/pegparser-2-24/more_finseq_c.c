//Code generated using pvs2ir2c
#include "more_finseq_c.h"

void release_more_finseq_funtype_0(more_finseq_funtype_0_t x, type_actual_t more_finseq__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

more_finseq_funtype_0_t copy_more_finseq_funtype_0(more_finseq_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_more_finseq_funtype_0(more_finseq_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        more_finseq_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp1923 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp1923 == 0);
        bool_t keymatch;
        int64_t tmp1924 = mpz_cmp(data.key, i);
        keymatch = (tmp1924 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                int64_t tmp1923 = mpz_cmp_ui(data.key, 0);
                keyzero = (tmp1923 == 0);

                int64_t tmp1924 = mpz_cmp(data.key, i);
                keymatch = (tmp1924 == 0);
                }
        return hashindex;
        }

more_finseq_funtype_0_t dupdate_more_finseq_funtype_0(more_finseq_funtype_0_t a, mpz_ptr_t i, more_finseq__T_t v, type_actual_t more_finseq__T){
        more_finseq_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (more_finseq_funtype_0_htbl_t)safe_malloc(sizeof(struct more_finseq_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (more_finseq_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct more_finseq_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        more_finseq_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                more_finseq_funtype_0_hashentry_t * new_data = (more_finseq_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct more_finseq_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp1925 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp1925 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp1926 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp1926 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp1927 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp1927 == 0);
                                }
                                mpz_set(new_data[new_loc].key, data[j].key);
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (more_finseq__T_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = mpz_hash(i);
        uint32_t hashindex = lookup_more_finseq_funtype_0(htbl, i, ihash);
        more_finseq_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp1928 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp1928 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (more_finseq__T_t)v; htbl->num_entries++;}
            else {more_finseq__T_t tempvalue;tempvalue = (more_finseq__T_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (more_finseq__T_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)more_finseq__T->release_ptr(tempvalue, more_finseq__T);};
        return a;

}

more_finseq_funtype_0_t update_more_finseq_funtype_0(more_finseq_funtype_0_t a, mpz_ptr_t i, more_finseq__T_t v, type_actual_t more_finseq__T){
        if (a->count == 1){
                return dupdate_more_finseq_funtype_0(a, i, v, more_finseq__T);
            } else {
                more_finseq_funtype_0_t x = copy_more_finseq_funtype_0(a);
                a->count--;
                return dupdate_more_finseq_funtype_0(x, i, v, more_finseq__T);
            }}

bool_t equal_more_finseq_funtype_0(more_finseq_funtype_0_t x, more_finseq_funtype_0_t y, type_actual_t more_finseq__T){
        return false;}

char* json_more_finseq_funtype_0(more_finseq_funtype_0_t x, type_actual_t more_finseq__T){char * result = safe_malloc(31); sprintf(result, "%s", "\"more_finseq_funtype_0\""); return result;}


more_finseq__seq_t new_more_finseq__seq(void){
        more_finseq__seq_t tmp = (more_finseq__seq_t) safe_malloc(sizeof(struct more_finseq__seq_s));
        tmp->count = 1;
        return tmp;}

void release_more_finseq__seq(more_finseq__seq_t x, type_actual_t more_finseq__T){
        x->count--;
        if (x->count <= 0){
         release_more_finseq_funtype_0(x->seq, more_finseq__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_more_finseq__seq_ptr(pointer_t x, type_actual_t T){
        actual_more_finseq__seq_t actual = (actual_more_finseq__seq_t)T;
        type_actual_t more_finseq__T = actual->more_finseq__T;
        release_more_finseq__seq((more_finseq__seq_t)x, more_finseq__T);
}

more_finseq__seq_t copy_more_finseq__seq(more_finseq__seq_t x){
        more_finseq__seq_t y = new_more_finseq__seq();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_more_finseq__seq(more_finseq__seq_t x, more_finseq__seq_t y, type_actual_t more_finseq__T){
        bool_t tmp = true;tmp = tmp && (mpz_cmp(x->length, y->length) == 0);
        tmp = tmp && equal_more_finseq_funtype_0(x->seq, y->seq, more_finseq__T);
        return tmp;}

char * json_more_finseq__seq(more_finseq__seq_t x, type_actual_t more_finseq__T){
        char * tmp[2]; 
        char * fld0 = safe_malloc(18);
         sprintf(fld0, "\"length\" : ");
        tmp[0] = safe_strcat(fld0, json_mpz(x->length));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"seq\" : ");
        tmp[1] = safe_strcat(fld1, json_more_finseq_funtype_0(x->seq, more_finseq__T));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_more_finseq__seq_ptr(pointer_t x, pointer_t y, actual_more_finseq__seq_t T){
        actual_more_finseq__seq_t actual = (actual_more_finseq__seq_t)T;
        type_actual_t more_finseq__T = actual->more_finseq__T;
        return equal_more_finseq__seq((more_finseq__seq_t)x, (more_finseq__seq_t)y, more_finseq__T);
}

char * json_more_finseq__seq_ptr(pointer_t x, actual_more_finseq__seq_t T){
        actual_more_finseq__seq_t actual = (actual_more_finseq__seq_t)T;
        type_actual_t more_finseq__T = actual->more_finseq__T;
        return json_more_finseq__seq((more_finseq__seq_t)x, more_finseq__T);
}

actual_more_finseq__seq_t actual_more_finseq__seq(type_actual_t more_finseq__T){
        actual_more_finseq__seq_t new = (actual_more_finseq__seq_t)safe_malloc(sizeof(struct actual_more_finseq__seq_s));
        new->equal_ptr = (equal_ptr_t)(*equal_more_finseq__seq_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_more_finseq__seq_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_more_finseq__seq_ptr);
 

        new->more_finseq__T = more_finseq__T;
 
        return new;
 };

more_finseq__seq_t update_more_finseq__seq_length(more_finseq__seq_t x, mpz_ptr_t v){
        more_finseq__seq_t y;
        if (x->count == 1){y = x;}
        else {y = copy_more_finseq__seq(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

more_finseq__seq_t update_more_finseq__seq_seq(more_finseq__seq_t x, more_finseq_funtype_0_t v, type_actual_t more_finseq__T){
        more_finseq__seq_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_more_finseq_funtype_0(x->seq, more_finseq__T);};}
        else {y = copy_more_finseq__seq(x); x->count--; y->seq->count--;};
        y->seq = (more_finseq_funtype_0_t)v;
        return y;}



void release_more_finseq_funtype_2(more_finseq_funtype_2_t x, type_actual_t more_finseq__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

more_finseq_funtype_2_t copy_more_finseq_funtype_2(more_finseq_funtype_2_t x){return x->ftbl->cptr(x);}

bool_t equal_more_finseq_funtype_2(more_finseq_funtype_2_t x, more_finseq_funtype_2_t y, type_actual_t more_finseq__T){
        return false;}

char* json_more_finseq_funtype_2(more_finseq_funtype_2_t x, type_actual_t more_finseq__T){char * result = safe_malloc(31); sprintf(result, "%s", "\"more_finseq_funtype_2\""); return result;}

bool_t more_finseq__prefixp(type_actual_t more_finseq__T, more_finseq__seq_t ivar_1, more_finseq__seq_t ivar_2){
        bool_t  result;
        bool_t ivar_3;
        mpz_ptr_t ivar_5;
        ivar_5 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_5);
        mpz_set(ivar_5, ivar_1->length);
        release_more_finseq__seq(ivar_1, more_finseq__T);
        mpz_ptr_t ivar_6;
        ivar_6 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_6);
        mpz_set(ivar_6, ivar_2->length);
        release_more_finseq__seq(ivar_2, more_finseq__T);
        int64_t tmp1929 = mpz_cmp(ivar_5, ivar_6);
        ivar_3 = (tmp1929 <= 0);
        if (ivar_3){ 
             result = (bool_t)u_undef_quant_expr();
} else {
        
             result = (bool_t) false;
};

        
        return result;
}

bool_t more_finseq__prefix_closedp(type_actual_t more_finseq__T, more_finseq_funtype_2_t ivar_1){
        bool_t  result;
        result = (bool_t)u_undef_quant_expr();

        
        return result;
}