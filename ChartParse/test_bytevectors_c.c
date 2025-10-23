//Code generated using pvs2ir2c
#include "test_bytevectors_c.h"

void release_test_bytevectors_funtype_0(test_bytevectors_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

test_bytevectors_funtype_0_t copy_test_bytevectors_funtype_0(test_bytevectors_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_test_bytevectors_funtype_0(test_bytevectors_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; test_bytevectors_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp10984 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp10984 == 0);
        bool_t keymatch;
        int64_t tmp10985 = mpz_cmp(data.key, i);
        keymatch = (tmp10985 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp10984 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp10984 == 0);

        int64_t tmp10985 = mpz_cmp(data.key, i);
        keymatch = (tmp10985 == 0);
                }
        return hashindex;
        }

test_bytevectors_funtype_0_t dupdate_test_bytevectors_funtype_0(test_bytevectors_funtype_0_t a, mpz_ptr_t i, uint32_t v){
        test_bytevectors_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (test_bytevectors_funtype_0_htbl_t)safe_malloc(sizeof(struct test_bytevectors_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (test_bytevectors_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct test_bytevectors_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        test_bytevectors_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                test_bytevectors_funtype_0_hashentry_t * new_data = (test_bytevectors_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct test_bytevectors_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp10986 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp10986 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp10987 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp10987 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp10988 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp10988 == 0);
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
        uint32_t hashindex = lookup_test_bytevectors_funtype_0(htbl, i, ihash);
        test_bytevectors_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp10989 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp10989 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v; htbl->num_entries++;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint32_t)v;};
        return a;

}

test_bytevectors_funtype_0_t update_test_bytevectors_funtype_0(test_bytevectors_funtype_0_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_test_bytevectors_funtype_0(a, i, v);
            } else {
                test_bytevectors_funtype_0_t x = copy_test_bytevectors_funtype_0(a);
                a->count--;
                return dupdate_test_bytevectors_funtype_0(x, i, v);
            }}

bool_t equal_test_bytevectors_funtype_0(test_bytevectors_funtype_0_t x, test_bytevectors_funtype_0_t y){
        return false;}


test_bytevectors_record_1_t new_test_bytevectors_record_1(void){
        test_bytevectors_record_1_t tmp = (test_bytevectors_record_1_t) safe_malloc(sizeof(struct test_bytevectors_record_1_s));
        tmp->count = 1;
        return tmp;}

void release_test_bytevectors_record_1(test_bytevectors_record_1_t x){
        x->count--;
        if (x->count <= 0){
         release_test_bytevectors_funtype_0(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_test_bytevectors_record_1_ptr(pointer_t x, type_actual_t T){
        release_test_bytevectors_record_1((test_bytevectors_record_1_t)x);
}

test_bytevectors_record_1_t copy_test_bytevectors_record_1(test_bytevectors_record_1_t x){
        test_bytevectors_record_1_t y = new_test_bytevectors_record_1();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_test_bytevectors_record_1(test_bytevectors_record_1_t x, test_bytevectors_record_1_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_test_bytevectors_funtype_0(x->seq, y->seq);
        return tmp;}

bool_t equal_test_bytevectors_record_1_ptr(pointer_t x, pointer_t y, actual_test_bytevectors_record_1_t T){
        return equal_test_bytevectors_record_1((test_bytevectors_record_1_t)x, (test_bytevectors_record_1_t)y);
}

actual_test_bytevectors_record_1_t actual_test_bytevectors_record_1(){
        actual_test_bytevectors_record_1_t new = (actual_test_bytevectors_record_1_t)safe_malloc(sizeof(struct actual_test_bytevectors_record_1_s));
        new->equal_ptr = (equal_ptr_t)(*equal_test_bytevectors_record_1_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_test_bytevectors_record_1_ptr);
 

 
        return new;
 };

test_bytevectors_record_1_t update_test_bytevectors_record_1_length(test_bytevectors_record_1_t x, mpz_ptr_t v){
        test_bytevectors_record_1_t y;
        if (x->count == 1){y = x;}
        else {y = copy_test_bytevectors_record_1(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

test_bytevectors_record_1_t update_test_bytevectors_record_1_seq(test_bytevectors_record_1_t x, test_bytevectors_funtype_0_t v){
        test_bytevectors_record_1_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_test_bytevectors_funtype_0(x->seq);};}
        else {y = copy_test_bytevectors_record_1(x); x->count--; y->seq->count--;};
        y->seq = (test_bytevectors_funtype_0_t)v;
        return y;}



void release_test_bytevectors_funtype_2(test_bytevectors_funtype_2_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

test_bytevectors_funtype_2_t copy_test_bytevectors_funtype_2(test_bytevectors_funtype_2_t x){return x->ftbl->cptr(x);}

uint32_t lookup_test_bytevectors_funtype_2(test_bytevectors_funtype_2_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; test_bytevectors_funtype_2_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp10997 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp10997 == 0);
        bool_t keymatch;
        int64_t tmp10998 = mpz_cmp(data.key, i);
        keymatch = (tmp10998 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp10997 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp10997 == 0);

        int64_t tmp10998 = mpz_cmp(data.key, i);
        keymatch = (tmp10998 == 0);
                }
        return hashindex;
        }

test_bytevectors_funtype_2_t dupdate_test_bytevectors_funtype_2(test_bytevectors_funtype_2_t a, mpz_ptr_t i, uint8_t v){
        test_bytevectors_funtype_2_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (test_bytevectors_funtype_2_htbl_t)safe_malloc(sizeof(struct test_bytevectors_funtype_2_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (test_bytevectors_funtype_2_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct test_bytevectors_funtype_2_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        test_bytevectors_funtype_2_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                test_bytevectors_funtype_2_hashentry_t * new_data = (test_bytevectors_funtype_2_hashentry_t *)safe_malloc(new_size * sizeof(struct test_bytevectors_funtype_2_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp10999 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp10999 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp11000 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp11000 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp11001 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp11001 == 0);
                                }
                                mpz_set(new_data[new_loc].key, data[j].key);
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (uint8_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = mpz_hash(i);
        uint32_t hashindex = lookup_test_bytevectors_funtype_2(htbl, i, ihash);
        test_bytevectors_funtype_2_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp11002 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp11002 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint8_t)v; htbl->num_entries++;}
            else {uint8_t tempvalue;tempvalue = (uint8_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint8_t)v;};
        return a;

}

test_bytevectors_funtype_2_t update_test_bytevectors_funtype_2(test_bytevectors_funtype_2_t a, mpz_ptr_t i, uint8_t v){
        if (a->count == 1){
                return dupdate_test_bytevectors_funtype_2(a, i, v);
            } else {
                test_bytevectors_funtype_2_t x = copy_test_bytevectors_funtype_2(a);
                a->count--;
                return dupdate_test_bytevectors_funtype_2(x, i, v);
            }}

bool_t equal_test_bytevectors_funtype_2(test_bytevectors_funtype_2_t x, test_bytevectors_funtype_2_t y){
        return false;}


test_bytevectors_array_3_t new_test_bytevectors_array_3(uint32_t size){
        test_bytevectors_array_3_t tmp = (test_bytevectors_array_3_t) safe_malloc(sizeof(struct test_bytevectors_array_3_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_test_bytevectors_array_3(test_bytevectors_array_3_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_test_bytevectors_array_3_ptr(pointer_t x, type_actual_t T){
        release_test_bytevectors_array_3((test_bytevectors_array_3_t)x);
}

test_bytevectors_array_3_t copy_test_bytevectors_array_3(test_bytevectors_array_3_t x){
        test_bytevectors_array_3_t tmp = new_test_bytevectors_array_3(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_test_bytevectors_array_3(test_bytevectors_array_3_t x, test_bytevectors_array_3_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

bool_t equal_test_bytevectors_array_3_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_test_bytevectors_array_3((test_bytevectors_array_3_t)x, (test_bytevectors_array_3_t)y);
}

actual_test_bytevectors_array_3_t actual_test_bytevectors_array_3(){
        actual_test_bytevectors_array_3_t new = (actual_test_bytevectors_array_3_t)safe_malloc(sizeof(struct actual_test_bytevectors_array_3_s));
        new->equal_ptr = (equal_ptr_t)(*equal_test_bytevectors_array_3_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_test_bytevectors_array_3_ptr);
 

 
        return new;
 };

test_bytevectors_array_3_t update_test_bytevectors_array_3(test_bytevectors_array_3_t x, uint32_t i, uint8_t v){
        test_bytevectors_array_3_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_test_bytevectors_array_3(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

test_bytevectors_array_3_t upgrade_test_bytevectors_array_3(test_bytevectors_array_3_t x, uint32_t i, uint8_t v){
        test_bytevectors_array_3_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_malloc(sizeof(struct test_bytevectors_array_3_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_test_bytevectors_array_3(x);}
           else {y = copy_test_bytevectors_array_3(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




uint8_t f_test_bytevectors_closure_4(struct test_bytevectors_closure_4_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        test_bytevectors_funtype_2_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_test_bytevectors_funtype_2(htbl, bvar, hash);
        test_bytevectors_funtype_2_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp11003 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp11003 == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_test_bytevectors_closure_4(bvar, closure->fvar_1);};

return h_test_bytevectors_closure_4(bvar, closure->fvar_1);}

uint8_t m_test_bytevectors_closure_4(struct test_bytevectors_closure_4_s * closure, mpz_ptr_t bvar){
        return h_test_bytevectors_closure_4(bvar, closure->fvar_1);}

extern uint8_t h_test_bytevectors_closure_4(mpz_ptr_t ivar_55, test_bytevectors_funtype_2_t ivar_52){
        uint8_t result;
        mpz_ptr_t ivar_54;
        //copying to mpz from mpz;
        mpz_mk_set(ivar_54, ivar_55);
        mpz_clear(ivar_55);
        result = (uint8_t)ivar_52->ftbl->fptr(ivar_52, ivar_54);

        return result;
}

test_bytevectors_closure_4_t new_test_bytevectors_closure_4(void){
        static struct test_bytevectors_funtype_2_ftbl_s ftbl = {.fptr = (uint8_t (*)(test_bytevectors_funtype_2_t, mpz_ptr_t))&f_test_bytevectors_closure_4, .mptr = (uint8_t (*)(test_bytevectors_funtype_2_t, mpz_ptr_t))&m_test_bytevectors_closure_4, .rptr =  (void (*)(test_bytevectors_funtype_2_t))&release_test_bytevectors_closure_4, .cptr = (test_bytevectors_funtype_2_t (*)(test_bytevectors_funtype_2_t))&copy_test_bytevectors_closure_4};
        test_bytevectors_closure_4_t tmp = (test_bytevectors_closure_4_t) safe_malloc(sizeof(struct test_bytevectors_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_test_bytevectors_closure_4(test_bytevectors_funtype_2_t closure){
        test_bytevectors_closure_4_t x = (test_bytevectors_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
         release_test_bytevectors_funtype_2(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

test_bytevectors_closure_4_t copy_test_bytevectors_closure_4(test_bytevectors_closure_4_t x){
        test_bytevectors_closure_4_t y = new_test_bytevectors_closure_4();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            test_bytevectors_funtype_2_htbl_t new_htbl = (test_bytevectors_funtype_2_htbl_t) safe_malloc(sizeof(struct test_bytevectors_funtype_2_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            test_bytevectors_funtype_2_hashentry_t * new_data = (test_bytevectors_funtype_2_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct test_bytevectors_funtype_2_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct test_bytevectors_funtype_2_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern bytestrings__bytestring_t test_bytevectors__test1(uint32_t ivar_1){
        bytestrings__bytestring_t  result;
        /* str */ bytestrings__bytestring_t ivar_2;
        bytestrings__bytestring_t ivar_13;
        test_bytevectors_record_1_t ivar_11;
        uint32_t len10935 = 16;
        uint32_t characters10936[16] = {65, 66, 67, 68, 69, 70, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
        stringliteral_t string10934 = mk_string(16, characters10936);
        ivar_11 = (test_bytevectors_record_1_t)strings__make_string(len10935, string10934);
        strings__string_t ivar_9;
        //copying to strings__string from test_bytevectors_record_1;
        ivar_9 = (strings__string_t)ivar_11;
        if (ivar_9 != NULL) ivar_9->count++;
        release_test_bytevectors_record_1(ivar_11);
        bytestrings__bytestring_t ivar_8;
        ivar_8 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_9);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_13 = (bytestrings__bytestring_t)ivar_8;
        if (ivar_13 != NULL) ivar_13->count++;
        release_bytestrings__bytestring(ivar_8);
        bytestrings__bytestring_t ivar_12;
        ivar_12 = (bytestrings__bytestring_t)hex__hex2bytestring((bytestrings__bytestring_t)ivar_13);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_2 = (bytestrings__bytestring_t)ivar_12;
        if (ivar_2 != NULL) ivar_2->count++;
        release_bytestrings__bytestring(ivar_12);
        bytestrings__bytestring_t ivar_35;
        test_bytevectors_array_2_t ivar_15;
        /* n */ uint32_t ivar_24;
        bytestrings__bytestring_t ivar_23;
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_23 = (bytestrings__bytestring_t)ivar_2;
        if (ivar_23 != NULL) ivar_23->count++;
        ivar_24 = (uint32_t)ivar_23->length;
        test_bytevectors_array_2_t ivar_25;
        ivar_25 = (test_bytevectors_array_2_t)ivar_2->seq;
        ivar_25->count++;
        mpz_ptr_t ivar_27;
        //copying to mpz from uint32;
        mpz_mk_set_ui(ivar_27, ivar_1);
        test_bytevectors_array_2_t ivar_22;
        ivar_22 = (test_bytevectors_array_2_t)bytevectors__byvrightrotate((uint32_t)ivar_24, (bytevectors__byv_t)ivar_25, (mpz_ptr_t)ivar_27);
        //copying to test_bytevectors_array_2 from test_bytevectors_array_2;
        ivar_15 = (test_bytevectors_array_2_t)ivar_22;
        if (ivar_15 != NULL) ivar_15->count++;
        release_test_bytevectors_array_2(ivar_22);
        bytestrings__bytestring_t ivar_33;
        test_bytevectors_record_3_t ivar_30;
        test_bytevectors_array_2_t ivar_32;
        ivar_32 = NULL;
        ivar_30 = (test_bytevectors_record_3_t)update_bytestrings__bytestring_seq(ivar_2, ivar_32);
        if (ivar_32 != NULL) ivar_32->count--;
        ivar_33 = (bytestrings__bytestring_t)update_test_bytevectors_record_3_seq(ivar_30, ivar_15);
        if (ivar_15 != NULL) ivar_15->count--;
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_35 = (bytestrings__bytestring_t)ivar_33;
        if (ivar_35 != NULL) ivar_35->count++;
        release_bytestrings__bytestring(ivar_33);
        bytestrings__bytestring_t ivar_34;
        ivar_34 = (bytestrings__bytestring_t)hex__bytestring2hexstring((bytestrings__bytestring_t)ivar_35);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_34;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_34);

        
        return result;
}

extern bytestrings__bytestring_t test_bytevectors__test2(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    /* str1 */ bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_12;
        test_bytevectors_record_1_t ivar_10;
        uint32_t len10991 = 6;
        uint32_t characters10992[6] = {65, 66, 67, 68, 69, 70};
        stringliteral_t string10990 = mk_string(6, characters10992);
        ivar_10 = (test_bytevectors_record_1_t)strings__make_string(len10991, string10990);
        strings__string_t ivar_8;
        //copying to strings__string from test_bytevectors_record_1;
        ivar_8 = (strings__string_t)ivar_10;
        if (ivar_8 != NULL) ivar_8->count++;
        release_test_bytevectors_record_1(ivar_10);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_12 = (bytestrings__bytestring_t)ivar_7;
        if (ivar_12 != NULL) ivar_12->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_11;
        ivar_11 = (bytestrings__bytestring_t)hex__hex2bytestring((bytestrings__bytestring_t)ivar_12);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_1 = (bytestrings__bytestring_t)ivar_11;
        if (ivar_1 != NULL) ivar_1->count++;
        release_bytestrings__bytestring(ivar_11);
        /* str2 */ bytestrings__bytestring_t ivar_13;
        bytestrings__bytestring_t ivar_24;
        test_bytevectors_record_1_t ivar_22;
        uint32_t len10994 = 10;
        uint32_t characters10995[10] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
        stringliteral_t string10993 = mk_string(10, characters10995);
        ivar_22 = (test_bytevectors_record_1_t)strings__make_string(len10994, string10993);
        strings__string_t ivar_20;
        //copying to strings__string from test_bytevectors_record_1;
        ivar_20 = (strings__string_t)ivar_22;
        if (ivar_20 != NULL) ivar_20->count++;
        release_test_bytevectors_record_1(ivar_22);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_20);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_24 = (bytestrings__bytestring_t)ivar_19;
        if (ivar_24 != NULL) ivar_24->count++;
        release_bytestrings__bytestring(ivar_19);
        bytestrings__bytestring_t ivar_23;
        ivar_23 = (bytestrings__bytestring_t)hex__hex2bytestring((bytestrings__bytestring_t)ivar_24);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_13 = (bytestrings__bytestring_t)ivar_23;
        if (ivar_13 != NULL) ivar_13->count++;
        release_bytestrings__bytestring(ivar_23);
        bytestrings__bytestring_t ivar_59;
        mpq_ptr_t ivar_57;
        uint32_t ivar_45;
        bytestrings__bytestring_t ivar_47;
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_47 = (bytestrings__bytestring_t)ivar_1;
        if (ivar_47 != NULL) ivar_47->count++;
        ivar_45 = (uint32_t)ivar_47->length;
        uint32_t ivar_46;
        bytestrings__bytestring_t ivar_48;
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_48 = (bytestrings__bytestring_t)ivar_13;
        if (ivar_48 != NULL) ivar_48->count++;
        ivar_46 = (uint32_t)ivar_48->length;
        mpz_t tmp10996;
        mpz_init(tmp10996);
        mpz_set_ui(tmp10996, (uint64_t)ivar_45);
        mpz_add_ui(tmp10996, tmp10996, (uint64_t)ivar_46);
        mpq_mk_set_z(ivar_57, tmp10996);
        mpz_clear(tmp10996);
        /* n */ uint32_t ivar_50;
        //copying to uint32 from mpq;
        ivar_50 = (uint32_t)mpq_get_ui(ivar_57);
        mpq_clear(ivar_57);
        test_bytevectors_funtype_2_t ivar_52;
        /* m */ uint32_t ivar_38;
        bytestrings__bytestring_t ivar_36;
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_36 = (bytestrings__bytestring_t)ivar_1;
        if (ivar_36 != NULL) ivar_36->count++;
        ivar_38 = (uint32_t)ivar_36->length;
        /* n */ uint32_t ivar_39;
        bytestrings__bytestring_t ivar_37;
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_37 = (bytestrings__bytestring_t)ivar_13;
        if (ivar_37 != NULL) ivar_37->count++;
        ivar_39 = (uint32_t)ivar_37->length;
        test_bytevectors_array_3_t ivar_40;
        ivar_40 = (test_bytevectors_array_3_t)ivar_1->seq;
        ivar_40->count++;
        release_bytestrings__bytestring(ivar_1);
        test_bytevectors_array_3_t ivar_42;
        ivar_42 = (test_bytevectors_array_3_t)ivar_13->seq;
        ivar_42->count++;
        release_bytestrings__bytestring(ivar_13);
        test_bytevectors_funtype_2_t ivar_35;
        ivar_35 = (test_bytevectors_funtype_2_t)byvconcat__doubleplus((uint32_t)ivar_38, (uint32_t)ivar_39, (byvconcat_array_1_t)ivar_40, (byvconcat_array_1_t)ivar_42);
        //copying to test_bytevectors_funtype_2 from test_bytevectors_funtype_2;
        ivar_52 = (test_bytevectors_funtype_2_t)ivar_35;
        if (ivar_52 != NULL) ivar_52->count++;
        release_test_bytevectors_funtype_2(ivar_35);
        test_bytevectors_funtype_2_t ivar_51;
        test_bytevectors_closure_4_t cl11004;
        cl11004 = new_test_bytevectors_closure_4();
        cl11004->fvar_1 = (test_bytevectors_funtype_2_t)ivar_52;
        if (cl11004->fvar_1 != NULL) cl11004->fvar_1->count++;
        release_test_bytevectors_funtype_2(ivar_52);
        ivar_51 = (test_bytevectors_funtype_2_t)cl11004;
        bytestrings__bytestring_t ivar_44;
        ivar_44 = (bytestrings__bytestring_t)bytevectors__byv2bytestring((uint32_t)ivar_50, (bytevectors__byv_t)ivar_51);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_59 = (bytestrings__bytestring_t)ivar_44;
        if (ivar_59 != NULL) ivar_59->count++;
        release_bytestrings__bytestring(ivar_44);
        bytestrings__bytestring_t ivar_58;
        ivar_58 = (bytestrings__bytestring_t)hex__bytestring2hexstring((bytestrings__bytestring_t)ivar_59);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_58;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_58);

        defined = true;};
        
        return result;
}