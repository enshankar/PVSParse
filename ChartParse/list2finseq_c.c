//Code generated using pvs2ir2c
#include "list2finseq_c.h"

void release_list2finseq_uint32_funtype_0(list2finseq_uint32_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

list2finseq_uint32_funtype_0_t copy_list2finseq_uint32_funtype_0(list2finseq_uint32_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_list2finseq_uint32_funtype_0(list2finseq_uint32_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        list2finseq_uint32_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp1289 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp1289 == 0);
        bool_t keymatch;
        int64_t tmp1290 = mpz_cmp(data.key, i);
        keymatch = (tmp1290 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                int64_t tmp1289 = mpz_cmp_ui(data.key, 0);
                keyzero = (tmp1289 == 0);

                int64_t tmp1290 = mpz_cmp(data.key, i);
                keymatch = (tmp1290 == 0);
                }
        return hashindex;
        }

list2finseq_uint32_funtype_0_t dupdate_list2finseq_uint32_funtype_0(list2finseq_uint32_funtype_0_t a, mpz_ptr_t i, uint32_t v){
        list2finseq_uint32_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (list2finseq_uint32_funtype_0_htbl_t)safe_malloc(sizeof(struct list2finseq_uint32_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (list2finseq_uint32_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct list2finseq_uint32_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        list2finseq_uint32_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                list2finseq_uint32_funtype_0_hashentry_t * new_data = (list2finseq_uint32_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct list2finseq_uint32_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp1291 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp1291 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp1292 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp1292 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp1293 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp1293 == 0);
                                }
                                mpz_set(new_data[new_loc].key, data[j].key);
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (uint32_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = mpz_hash(i);
        uint32_t hashindex = lookup_list2finseq_uint32_funtype_0(htbl, i, ihash);
        list2finseq_uint32_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp1294 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp1294 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v; htbl->num_entries++;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint32_t)v;};
        return a;

}

list2finseq_uint32_funtype_0_t update_list2finseq_uint32_funtype_0(list2finseq_uint32_funtype_0_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_list2finseq_uint32_funtype_0(a, i, v);
            } else {
                list2finseq_uint32_funtype_0_t x = copy_list2finseq_uint32_funtype_0(a);
                a->count--;
                return dupdate_list2finseq_uint32_funtype_0(x, i, v);
            }}

bool_t equal_list2finseq_uint32_funtype_0(list2finseq_uint32_funtype_0_t x, list2finseq_uint32_funtype_0_t y){
        return false;}

char* json_list2finseq_uint32_funtype_0(list2finseq_uint32_funtype_0_t x){char * result = safe_malloc(38); sprintf(result, "%s", "\"list2finseq_uint32_funtype_0\""); return result;}


list2finseq_uint32_record_1_t new_list2finseq_uint32_record_1(void){
        list2finseq_uint32_record_1_t tmp = (list2finseq_uint32_record_1_t) safe_malloc(sizeof(struct list2finseq_uint32_record_1_s));
        tmp->count = 1;
        return tmp;}

void release_list2finseq_uint32_record_1(list2finseq_uint32_record_1_t x){
        x->count--;
        if (x->count <= 0){
         release_list2finseq_uint32_funtype_0(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_list2finseq_uint32_record_1_ptr(pointer_t x, type_actual_t T){
        release_list2finseq_uint32_record_1((list2finseq_uint32_record_1_t)x);
}

list2finseq_uint32_record_1_t copy_list2finseq_uint32_record_1(list2finseq_uint32_record_1_t x){
        list2finseq_uint32_record_1_t y = new_list2finseq_uint32_record_1();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_list2finseq_uint32_record_1(list2finseq_uint32_record_1_t x, list2finseq_uint32_record_1_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_list2finseq_uint32_funtype_0(x->seq, y->seq);
        return tmp;}

char * json_list2finseq_uint32_record_1(list2finseq_uint32_record_1_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(18);
         sprintf(fld0, "\"length\" : ");
        tmp[0] = safe_strcat(fld0, json_mpz(x->length));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"seq\" : ");
        tmp[1] = safe_strcat(fld1, json_list2finseq_uint32_funtype_0(x->seq));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_list2finseq_uint32_record_1_ptr(pointer_t x, pointer_t y, actual_list2finseq_uint32_record_1_t T){
        return equal_list2finseq_uint32_record_1((list2finseq_uint32_record_1_t)x, (list2finseq_uint32_record_1_t)y);
}

char * json_list2finseq_uint32_record_1_ptr(pointer_t x, actual_list2finseq_uint32_record_1_t T){
        return json_list2finseq_uint32_record_1((list2finseq_uint32_record_1_t)x);
}

list2finseq_uint32_record_1_t update_list2finseq_uint32_record_1_length(list2finseq_uint32_record_1_t x, mpz_ptr_t v){
        list2finseq_uint32_record_1_t y;
        if (x->count == 1){y = x;}
        else {y = copy_list2finseq_uint32_record_1(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

list2finseq_uint32_record_1_t update_list2finseq_uint32_record_1_seq(list2finseq_uint32_record_1_t x, list2finseq_uint32_funtype_0_t v){
        list2finseq_uint32_record_1_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_list2finseq_uint32_funtype_0(x->seq);};}
        else {y = copy_list2finseq_uint32_record_1(x); x->count--; y->seq->count--;};
        y->seq = (list2finseq_uint32_funtype_0_t)v;
        return y;}



void release_list2finseq_uint32_funtype_2(list2finseq_uint32_funtype_2_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

list2finseq_uint32_funtype_2_t copy_list2finseq_uint32_funtype_2(list2finseq_uint32_funtype_2_t x){return x->ftbl->cptr(x);}

bool_t equal_list2finseq_uint32_funtype_2(list2finseq_uint32_funtype_2_t x, list2finseq_uint32_funtype_2_t y){
        return false;}

char* json_list2finseq_uint32_funtype_2(list2finseq_uint32_funtype_2_t x){char * result = safe_malloc(38); sprintf(result, "%s", "\"list2finseq_uint32_funtype_2\""); return result;}


list2finseq_uint32_record_1_t f_list2finseq_uint32_closure_3(struct list2finseq_uint32_closure_3_s * closure, list_adt__list_adt_t bvar){
        list2finseq_uint32_record_1_t result = h_list2finseq_uint32_closure_3(bvar); 
        return result;}

list2finseq_uint32_record_1_t m_list2finseq_uint32_closure_3(struct list2finseq_uint32_closure_3_s * closure, list_adt__list_adt_t bvar){
        return h_list2finseq_uint32_closure_3(bvar);}

extern list2finseq_uint32_record_1_t h_list2finseq_uint32_closure_3(list_adt__list_adt_t ivar_5){
        list2finseq_uint32_record_1_t result;
        mpz_ptr_t ivar_17;
        ivar_5->count++;
        ivar_17 = (mpz_ptr_t)list_props_mpq__length((list_adt__list_adt_t)ivar_5);
        list2finseq_uint32_funtype_0_t ivar_35;
        list2finseq_uint32_closure_4_t cl1298;
        cl1298 = new_list2finseq_uint32_closure_4();
        cl1298->fvar_1 = (list_adt__list_adt_t)ivar_5;
        if (cl1298->fvar_1 != NULL) cl1298->fvar_1->count++;
        release_list_adt__list_adt(ivar_5);
        ivar_35 = (list2finseq_uint32_funtype_0_t)cl1298;
        list2finseq_uint32_record_1_t tmp1299 = new_list2finseq_uint32_record_1();;
        result = (list2finseq_uint32_record_1_t)tmp1299;
        mpz_init(tmp1299->length);
        mpz_set(tmp1299->length, ivar_17);
        mpz_clear(ivar_17);
        tmp1299->seq = (list2finseq_uint32_funtype_0_t)ivar_35;

        return result;
}

list2finseq_uint32_closure_3_t new_list2finseq_uint32_closure_3(void){
        static struct list2finseq_uint32_funtype_2_ftbl_s ftbl = {.fptr = (list2finseq_uint32_record_1_t (*)(list2finseq_uint32_funtype_2_t, list_adt__list_adt_t))&f_list2finseq_uint32_closure_3, .mptr = (list2finseq_uint32_record_1_t (*)(list2finseq_uint32_funtype_2_t, list_adt__list_adt_t))&m_list2finseq_uint32_closure_3, .rptr =  (void (*)(list2finseq_uint32_funtype_2_t))&release_list2finseq_uint32_closure_3, .cptr = (list2finseq_uint32_funtype_2_t (*)(list2finseq_uint32_funtype_2_t))&copy_list2finseq_uint32_closure_3};
        list2finseq_uint32_closure_3_t tmp = (list2finseq_uint32_closure_3_t) safe_malloc(sizeof(struct list2finseq_uint32_closure_3_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_list2finseq_uint32_closure_3(list2finseq_uint32_funtype_2_t closure){
        list2finseq_uint32_closure_3_t x = (list2finseq_uint32_closure_3_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

list2finseq_uint32_closure_3_t copy_list2finseq_uint32_closure_3(list2finseq_uint32_closure_3_t x){
        list2finseq_uint32_closure_3_t y = new_list2finseq_uint32_closure_3();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            list2finseq_uint32_funtype_2_htbl_t new_htbl = (list2finseq_uint32_funtype_2_htbl_t) safe_malloc(sizeof(struct list2finseq_uint32_funtype_2_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            list2finseq_uint32_funtype_2_hashentry_t * new_data = (list2finseq_uint32_funtype_2_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct list2finseq_uint32_funtype_2_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct list2finseq_uint32_funtype_2_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_list2finseq_uint32_closure_4(struct list2finseq_uint32_closure_4_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        list2finseq_uint32_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_list2finseq_uint32_funtype_0(htbl, bvar, hash);
        list2finseq_uint32_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp1296 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp1296 == 0);
        if (!keyzero || entry.keyhash != 0){
            uint32_t result;
            result = (uint32_t)entry.value;
            return result;}
        

        return h_list2finseq_uint32_closure_4(bvar, closure->fvar_1);};

return h_list2finseq_uint32_closure_4(bvar, closure->fvar_1);}

uint32_t m_list2finseq_uint32_closure_4(struct list2finseq_uint32_closure_4_s * closure, mpz_ptr_t bvar){
        return h_list2finseq_uint32_closure_4(bvar, closure->fvar_1);}

extern uint32_t h_list2finseq_uint32_closure_4(mpz_ptr_t ivar_26, list_adt__list_adt_t ivar_5){
        uint32_t result;
        ivar_5->count++;
        mpz_clear(tmp1297);

        return result;
}

list2finseq_uint32_closure_4_t new_list2finseq_uint32_closure_4(void){
        static struct list2finseq_uint32_funtype_0_ftbl_s ftbl = {.fptr = (uint32_t (*)(list2finseq_uint32_funtype_0_t, mpz_ptr_t))&f_list2finseq_uint32_closure_4, .mptr = (uint32_t (*)(list2finseq_uint32_funtype_0_t, mpz_ptr_t))&m_list2finseq_uint32_closure_4, .rptr =  (void (*)(list2finseq_uint32_funtype_0_t))&release_list2finseq_uint32_closure_4, .cptr = (list2finseq_uint32_funtype_0_t (*)(list2finseq_uint32_funtype_0_t))&copy_list2finseq_uint32_closure_4};
        list2finseq_uint32_closure_4_t tmp = (list2finseq_uint32_closure_4_t) safe_malloc(sizeof(struct list2finseq_uint32_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_list2finseq_uint32_closure_4(list2finseq_uint32_funtype_0_t closure){
        list2finseq_uint32_closure_4_t x = (list2finseq_uint32_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
         release_list_adt__list_adt(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

list2finseq_uint32_closure_4_t copy_list2finseq_uint32_closure_4(list2finseq_uint32_closure_4_t x){
        list2finseq_uint32_closure_4_t y = new_list2finseq_uint32_closure_4();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            list2finseq_uint32_funtype_0_htbl_t new_htbl = (list2finseq_uint32_funtype_0_htbl_t) safe_malloc(sizeof(struct list2finseq_uint32_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            list2finseq_uint32_funtype_0_hashentry_t * new_data = (list2finseq_uint32_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct list2finseq_uint32_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct list2finseq_uint32_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_list2finseq_uint32_funtype_5(list2finseq_uint32_funtype_5_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

list2finseq_uint32_funtype_5_t copy_list2finseq_uint32_funtype_5(list2finseq_uint32_funtype_5_t x){return x->ftbl->cptr(x);}

bool_t equal_list2finseq_uint32_funtype_5(list2finseq_uint32_funtype_5_t x, list2finseq_uint32_funtype_5_t y){
        return false;}

char* json_list2finseq_uint32_funtype_5(list2finseq_uint32_funtype_5_t x){char * result = safe_malloc(38); sprintf(result, "%s", "\"list2finseq_uint32_funtype_5\""); return result;}


list_adt__list_adt_t f_list2finseq_uint32_closure_6(struct list2finseq_uint32_closure_6_s * closure, list2finseq_uint32_record_1_t bvar){
        list_adt__list_adt_t result = h_list2finseq_uint32_closure_6(bvar); 
        return result;}

list_adt__list_adt_t m_list2finseq_uint32_closure_6(struct list2finseq_uint32_closure_6_s * closure, list2finseq_uint32_record_1_t bvar){
        return h_list2finseq_uint32_closure_6(bvar);}

extern list_adt__list_adt_t h_list2finseq_uint32_closure_6(list2finseq_uint32_record_1_t ivar_5){
        list_adt__list_adt_t result;
        mpz_ptr_t ivar_13;
        ivar_13 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_13);
        mpz_set(ivar_13, ivar_5->length);
        result = (list_adt__list_adt_t)list2finseq_uint32__finseq2list_rec((list2finseq_uint32_record_1_t)ivar_5, (mpz_ptr_t)ivar_13);

        return result;
}

list2finseq_uint32_closure_6_t new_list2finseq_uint32_closure_6(void){
        static struct list2finseq_uint32_funtype_5_ftbl_s ftbl = {.fptr = (list_adt__list_adt_t (*)(list2finseq_uint32_funtype_5_t, list2finseq_uint32_record_1_t))&f_list2finseq_uint32_closure_6, .mptr = (list_adt__list_adt_t (*)(list2finseq_uint32_funtype_5_t, list2finseq_uint32_record_1_t))&m_list2finseq_uint32_closure_6, .rptr =  (void (*)(list2finseq_uint32_funtype_5_t))&release_list2finseq_uint32_closure_6, .cptr = (list2finseq_uint32_funtype_5_t (*)(list2finseq_uint32_funtype_5_t))&copy_list2finseq_uint32_closure_6};
        list2finseq_uint32_closure_6_t tmp = (list2finseq_uint32_closure_6_t) safe_malloc(sizeof(struct list2finseq_uint32_closure_6_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_list2finseq_uint32_closure_6(list2finseq_uint32_funtype_5_t closure){
        list2finseq_uint32_closure_6_t x = (list2finseq_uint32_closure_6_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

list2finseq_uint32_closure_6_t copy_list2finseq_uint32_closure_6(list2finseq_uint32_closure_6_t x){
        list2finseq_uint32_closure_6_t y = new_list2finseq_uint32_closure_6();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            list2finseq_uint32_funtype_5_htbl_t new_htbl = (list2finseq_uint32_funtype_5_htbl_t) safe_malloc(sizeof(struct list2finseq_uint32_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            list2finseq_uint32_funtype_5_hashentry_t * new_data = (list2finseq_uint32_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct list2finseq_uint32_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct list2finseq_uint32_funtype_5_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern list2finseq_uint32_funtype_2_t list2finseq_uint32__list2finseq(void){
        list2finseq_uint32_funtype_2_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    list2finseq_uint32_funtype_2_t ivar_1;
        ivar_1 = (list2finseq_uint32_funtype_2_t)list2finseq_uint32__list2finseq();
        if (ivar_1 != NULL) ivar_1->count++;
        list2finseq_uint32_funtype_2_t ivar_2;
        list2finseq_uint32_closure_3_t cl1300;
        cl1300 = new_list2finseq_uint32_closure_3();
        ivar_2 = (list2finseq_uint32_funtype_2_t)cl1300;
        result = (list2finseq_uint32_funtype_2_t) equal_list2finseq_uint32_funtype_2(ivar_1, ivar_2);

        defined = true;};
        
        return result;
}

extern list_adt__list_adt_t list2finseq_uint32__finseq2list_rec(list2finseq_uint32_record_1_t ivar_1, mpz_ptr_t ivar_3){
        list_adt__list_adt_t  result;
        bool_t ivar_6;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)0;
        int64_t tmp1311 = mpz_cmp_ui(ivar_3, ivar_8);
        ivar_6 = (tmp1311 == 0);
        if (ivar_6){ 
             release_list2finseq_uint32_record_1(ivar_1);
             result = (list_adt__list_adt_t)list_adt__null();
             if (result != NULL) result->count++;
} else {
        
             uint32_t ivar_41;
             list2finseq_uint32_funtype_0_t ivar_22;
             ivar_22 = (list2finseq_uint32_funtype_0_t)ivar_1->seq;
             ivar_22->count++;
             mpz_ptr_t ivar_25;
             mpz_ptr_t ivar_13;
             ivar_13 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_13);
             mpz_set(ivar_13, ivar_1->length);
             mpz_mk_sub(ivar_25, ivar_13, ivar_3);
             ivar_41 = (uint32_t)ivar_22->ftbl->fptr(ivar_22, ivar_25);
             ivar_22->ftbl->rptr(ivar_22);
             list_adt__T_t ivar_38;
             //copying to list_adt__T from uint32;
             ivar_38 = (list_adt__T_t)ivar_41;
             list_adt__list_adt_t ivar_39;
             mpz_ptr_t ivar_34;
             uint8_t ivar_29;
             ivar_29 = (uint8_t)1;
             mpz_mk_sub_ui(ivar_34, ivar_3, (uint64_t)ivar_29);
             ivar_39 = (list_adt__list_adt_t)list2finseq_uint32__finseq2list_rec((list2finseq_uint32_record_1_t)ivar_1, ivar_34);
             result = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_38, (list_adt__list_adt_t)ivar_39);
};

        
        return result;
}

extern list2finseq_uint32_funtype_5_t list2finseq_uint32__finseq2list(void){
        list2finseq_uint32_funtype_5_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    list2finseq_uint32_funtype_5_t ivar_1;
        ivar_1 = (list2finseq_uint32_funtype_5_t)list2finseq_uint32__finseq2list();
        if (ivar_1 != NULL) ivar_1->count++;
        list2finseq_uint32_funtype_5_t ivar_2;
        list2finseq_uint32_closure_6_t cl1322;
        cl1322 = new_list2finseq_uint32_closure_6();
        ivar_2 = (list2finseq_uint32_funtype_5_t)cl1322;
        result = (list2finseq_uint32_funtype_5_t) equal_list2finseq_uint32_funtype_5(ivar_1, ivar_2);

        defined = true;};
        
        return result;
}