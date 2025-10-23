//Code generated using pvs2ir2c
#include "test_HMAC_c.h"

void release_test_HMAC_funtype_0(test_HMAC_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

test_HMAC_funtype_0_t copy_test_HMAC_funtype_0(test_HMAC_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_test_HMAC_funtype_0(test_HMAC_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; test_HMAC_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp1484 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp1484 == 0);
        bool_t keymatch;
        int64_t tmp1485 = mpz_cmp(data.key, i);
        keymatch = (tmp1485 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp1484 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp1484 == 0);

        int64_t tmp1485 = mpz_cmp(data.key, i);
        keymatch = (tmp1485 == 0);
                }
        return hashindex;
        }

test_HMAC_funtype_0_t dupdate_test_HMAC_funtype_0(test_HMAC_funtype_0_t a, mpz_ptr_t i, uint32_t v){
        test_HMAC_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (test_HMAC_funtype_0_htbl_t)safe_malloc(sizeof(struct test_HMAC_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (test_HMAC_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct test_HMAC_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        test_HMAC_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                test_HMAC_funtype_0_hashentry_t * new_data = (test_HMAC_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct test_HMAC_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp1486 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp1486 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp1487 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp1487 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp1488 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp1488 == 0);
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
        uint32_t hashindex = lookup_test_HMAC_funtype_0(htbl, i, ihash);
        test_HMAC_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp1489 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp1489 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;tempvalue = (uint32_t)v;};
        return a;

}

test_HMAC_funtype_0_t update_test_HMAC_funtype_0(test_HMAC_funtype_0_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_test_HMAC_funtype_0(a, i, v);
            } else {
                test_HMAC_funtype_0_t x = copy_test_HMAC_funtype_0(a);
                x->count--;
                return dupdate_test_HMAC_funtype_0(x, i, v);
            }}

bool_t equal_test_HMAC_funtype_0(test_HMAC_funtype_0_t x, test_HMAC_funtype_0_t y){
        return false;}


test_HMAC_record_1_t new_test_HMAC_record_1(void){
        test_HMAC_record_1_t tmp = (test_HMAC_record_1_t) safe_malloc(sizeof(struct test_HMAC_record_1_s));
        tmp->count = 1;
        return tmp;}

void release_test_HMAC_record_1(test_HMAC_record_1_t x){
        x->count--;
        if (x->count <= 0){
         release_test_HMAC_funtype_0(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_test_HMAC_record_1_ptr(pointer_t x, type_actual_t T){
        release_test_HMAC_record_1((test_HMAC_record_1_t)x);
}

test_HMAC_record_1_t copy_test_HMAC_record_1(test_HMAC_record_1_t x){
        test_HMAC_record_1_t y = new_test_HMAC_record_1();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_test_HMAC_record_1(test_HMAC_record_1_t x, test_HMAC_record_1_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_test_HMAC_funtype_0(x->seq, y->seq);
        return tmp;}

bool_t equal_test_HMAC_record_1_ptr(pointer_t x, pointer_t y, actual_test_HMAC_record_1_t T){
        return equal_test_HMAC_record_1((test_HMAC_record_1_t)x, (test_HMAC_record_1_t)y);
}

actual_test_HMAC_record_1_t actual_test_HMAC_record_1(){
        actual_test_HMAC_record_1_t new = (actual_test_HMAC_record_1_t)safe_malloc(sizeof(struct actual_test_HMAC_record_1_s));
        new->equal_ptr = (equal_ptr_t)(*equal_test_HMAC_record_1_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_test_HMAC_record_1_ptr);
 

 
        return new;
 };

test_HMAC_record_1_t update_test_HMAC_record_1_length(test_HMAC_record_1_t x, mpz_ptr_t v){
        test_HMAC_record_1_t y;
        if (x->count == 1){y = x;}
        else {y = copy_test_HMAC_record_1(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

test_HMAC_record_1_t update_test_HMAC_record_1_seq(test_HMAC_record_1_t x, test_HMAC_funtype_0_t v){
        test_HMAC_record_1_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_test_HMAC_funtype_0(x->seq);};}
        else {y = copy_test_HMAC_record_1(x); x->count--; y->seq->count--;};
        y->seq = (test_HMAC_funtype_0_t)v;
        return y;}



extern bytestrings__bytestring_t test_HMAC__hexhmac16(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_14;
        bytestrings__bytestring_t ivar_8;
        ivar_8 = (bytestrings__bytestring_t)SHA256__hex2bytestring((bytestrings__bytestring_t)ivar_1);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_14 = (bytestrings__bytestring_t)ivar_8;
        ivar_14->count++;
        release_bytestrings__bytestring(ivar_8);
        bytestrings__bytestring_t ivar_15;
        bytestrings__bytestring_t ivar_11;
        ivar_11 = (bytestrings__bytestring_t)SHA256__hex2bytestring((bytestrings__bytestring_t)ivar_2);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_15 = (bytestrings__bytestring_t)ivar_11;
        ivar_15->count++;
        release_bytestrings__bytestring(ivar_11);
        uint8_t ivar_16;
        ivar_16 = (uint8_t)64;
        uint8_t ivar_17;
        ivar_17 = (uint8_t)16;
        bytestrings__bytestring_t ivar_13;
        ivar_13 = (bytestrings__bytestring_t)HMAC__hmac256((HMAC_record_3_t)ivar_14, (HMAC_record_3_t)ivar_15, (uint8_t)ivar_16, (uint8_t)ivar_17);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_13;
        result->count++;
        release_bytestrings__bytestring(ivar_13);

        return result;
}

extern bytestrings__bytestring_t test_HMAC__test16_0(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_20;
        test_HMAC_record_1_t ivar_10;
        uint32_t len1491 = 80;
        uint32_t characters1492[80] = {54, 102, 51, 53, 54, 50, 56, 100, 54, 53, 56, 49, 51, 52, 51, 53, 53, 51, 52, 98, 53, 100, 54, 55, 102, 98, 100, 98, 53, 52, 99, 98, 51, 51, 52, 48, 51, 100, 48, 52, 101, 56, 52, 51, 49, 48, 51, 101, 54, 51, 57, 57, 102, 56, 48, 54, 99, 98, 53, 100, 102, 57, 53, 102, 101, 98, 98, 100, 100, 54, 49, 50, 51, 54, 102, 51, 51, 50, 52, 53};
        stringliteral_t string1490 = mk_string(80, characters1492);
        ivar_10 = (test_HMAC_record_1_t)strings__make_string(len1491, string1490);
        test_HMAC_record_1_t ivar_8;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_8 = (test_HMAC_record_1_t)ivar_10;
        ivar_8->count++;
        release_test_HMAC_record_1(ivar_10);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_7;
        ivar_20->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_21;
        test_HMAC_record_1_t ivar_18;
        uint32_t len1494 = 256;
        uint32_t characters1495[256] = {55, 53, 50, 99, 102, 102, 53, 50, 101, 52, 98, 57, 48, 55, 54, 56, 53, 53, 56, 101, 53, 51, 54, 57, 101, 55, 53, 100, 57, 55, 99, 54, 57, 54, 52, 51, 53, 48, 57, 97, 53, 101, 53, 57, 48, 52, 101, 48, 97, 51, 56, 54, 99, 98, 101, 52, 100, 48, 57, 55, 48, 101, 102, 55, 51, 102, 57, 49, 56, 102, 54, 55, 53, 57, 52, 53, 97, 57, 97, 101, 102, 101, 50, 54, 100, 97, 101, 97, 50, 55, 53, 56, 55, 101, 56, 100, 99, 57, 48, 57, 100, 100, 53, 54, 102, 100, 48, 52, 54, 56, 56, 48, 53, 102, 56, 51, 52, 48, 51, 57, 98, 51, 52, 53, 102, 56, 53, 53, 99, 102, 101, 49, 57, 99, 52, 52, 98, 53, 53, 97, 102, 50, 52, 49, 102, 102, 102, 51, 102, 102, 99, 100, 56, 48, 52, 53, 99, 100, 53, 99, 50, 56, 56, 101, 54, 99, 52, 101, 50, 56, 52, 99, 51, 55, 50, 48, 53, 55, 48, 98, 53, 56, 101, 52, 100, 52, 55, 98, 56, 102, 101, 101, 101, 100, 99, 53, 50, 102, 100, 49, 52, 48, 49, 102, 54, 57, 56, 97, 50, 48, 57, 102, 99, 99, 102, 97, 51, 98, 52, 99, 48, 100, 57, 97, 55, 57, 55, 98, 48, 52, 54, 97, 50, 55, 53, 57, 102, 56, 50, 97, 53, 52, 99, 52, 49, 99, 99, 100, 55, 98, 53, 102, 53, 57, 50, 98};
        stringliteral_t string1493 = mk_string(256, characters1495);
        ivar_18 = (test_HMAC_record_1_t)strings__make_string(len1494, string1493);
        test_HMAC_record_1_t ivar_16;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_16 = (test_HMAC_record_1_t)ivar_18;
        ivar_16->count++;
        release_test_HMAC_record_1(ivar_18);
        bytestrings__bytestring_t ivar_15;
        ivar_15 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_16);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_15;
        ivar_21->count++;
        release_bytestrings__bytestring(ivar_15);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)test_HMAC__hexhmac16((bytestrings__bytestring_t)ivar_20, (bytestrings__bytestring_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_19;
        result->count++;
        release_bytestrings__bytestring(ivar_19);

        return result;
}

extern bytestrings__bytestring_t test_HMAC__test16_1(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_20;
        test_HMAC_record_1_t ivar_10;
        uint32_t len1499 = 80;
        uint32_t characters1500[80] = {49, 55, 98, 53, 50, 56, 53, 56, 101, 51, 101, 49, 51, 53, 98, 101, 52, 52, 52, 48, 100, 55, 100, 102, 48, 99, 97, 57, 57, 54, 102, 52, 49, 99, 99, 98, 55, 56, 98, 55, 100, 56, 99, 99, 49, 57, 50, 52, 100, 56, 51, 48, 102, 101, 56, 49, 101, 48, 102, 100, 50, 55, 57, 99, 49, 51, 49, 99, 101, 51, 53, 52, 54, 51, 48, 51, 101, 57, 53, 97};
        stringliteral_t string1498 = mk_string(80, characters1500);
        ivar_10 = (test_HMAC_record_1_t)strings__make_string(len1499, string1498);
        test_HMAC_record_1_t ivar_8;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_8 = (test_HMAC_record_1_t)ivar_10;
        ivar_8->count++;
        release_test_HMAC_record_1(ivar_10);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_7;
        ivar_20->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_21;
        test_HMAC_record_1_t ivar_18;
        uint32_t len1502 = 256;
        uint32_t characters1503[256] = {101, 48, 101, 102, 102, 48, 48, 102, 51, 99, 52, 54, 101, 57, 54, 99, 56, 100, 53, 98, 100, 49, 56, 49, 50, 56, 51, 101, 52, 54, 48, 53, 51, 52, 56, 101, 51, 102, 97, 49, 48, 98, 52, 55, 57, 52, 53, 100, 101, 51, 100, 99, 99, 49, 53, 57, 97, 101, 56, 54, 101, 55, 98, 100, 51, 102, 100, 98, 49, 51, 102, 50, 97, 100, 97, 50, 99, 51, 49, 51, 102, 99, 101, 54, 97, 54, 57, 101, 102, 97, 52, 57, 97, 52, 55, 48, 54, 56, 57, 98, 49, 101, 102, 48, 53, 97, 97, 98, 55, 55, 56, 97, 101, 49, 53, 100, 100, 51, 53, 102, 101, 54, 102, 100, 49, 101, 51, 97, 53, 57, 100, 51, 53, 49, 99, 54, 56, 99, 102, 56, 102, 48, 102, 102, 100, 57, 54, 56, 100, 55, 101, 55, 56, 98, 53, 55, 51, 55, 55, 97, 102, 99, 99, 57, 100, 99, 101, 51, 102, 97, 53, 100, 98, 49, 102, 48, 54, 102, 54, 57, 56, 53, 99, 52, 52, 49, 52, 99, 48, 102, 99, 99, 55, 56, 48, 48, 51, 48, 102, 52, 57, 102, 101, 102, 55, 57, 49, 97, 54, 99, 48, 56, 101, 100, 99, 50, 97, 51, 49, 49, 48, 56, 48, 99, 51, 55, 51, 102, 48, 48, 101, 52, 98, 50, 48, 52, 52, 97, 55, 57, 100, 56, 50, 56, 54, 48, 102, 48, 56, 55, 49, 98, 99, 50, 53, 57};
        stringliteral_t string1501 = mk_string(256, characters1503);
        ivar_18 = (test_HMAC_record_1_t)strings__make_string(len1502, string1501);
        test_HMAC_record_1_t ivar_16;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_16 = (test_HMAC_record_1_t)ivar_18;
        ivar_16->count++;
        release_test_HMAC_record_1(ivar_18);
        bytestrings__bytestring_t ivar_15;
        ivar_15 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_16);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_15;
        ivar_21->count++;
        release_bytestrings__bytestring(ivar_15);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)test_HMAC__hexhmac16((bytestrings__bytestring_t)ivar_20, (bytestrings__bytestring_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_19;
        result->count++;
        release_bytestrings__bytestring(ivar_19);

        return result;
}

extern bytestrings__bytestring_t test_HMAC__test16_2(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_20;
        test_HMAC_record_1_t ivar_10;
        uint32_t len1507 = 80;
        uint32_t characters1508[80] = {55, 99, 54, 55, 52, 49, 48, 101, 48, 97, 57, 101, 51, 100, 55, 97, 101, 52, 102, 51, 100, 48, 52, 101, 102, 102, 49, 99, 50, 55, 49, 54, 56, 57, 49, 101, 56, 50, 49, 99, 54, 101, 99, 49, 100, 99, 56, 50, 50, 49, 52, 50, 99, 101, 56, 100, 57, 57, 52, 57, 98, 49, 52, 52, 57, 97, 49, 97, 48, 51, 51, 97, 51, 53, 48, 102, 48, 98, 97, 56};
        stringliteral_t string1506 = mk_string(80, characters1508);
        ivar_10 = (test_HMAC_record_1_t)strings__make_string(len1507, string1506);
        test_HMAC_record_1_t ivar_8;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_8 = (test_HMAC_record_1_t)ivar_10;
        ivar_8->count++;
        release_test_HMAC_record_1(ivar_10);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_7;
        ivar_20->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_21;
        test_HMAC_record_1_t ivar_18;
        uint32_t len1510 = 256;
        uint32_t characters1511[256] = {98, 102, 100, 49, 54, 54, 55, 57, 51, 97, 98, 100, 99, 102, 102, 98, 98, 100, 53, 54, 100, 102, 55, 54, 57, 49, 53, 48, 100, 49, 52, 54, 54, 99, 49, 56, 97, 54, 55, 97, 102, 52, 53, 50, 99, 55, 101, 54, 55, 102, 56, 54, 101, 100, 55, 52, 49, 100, 49, 54, 51, 101, 98, 98, 100, 56, 55, 52, 98, 57, 100, 51, 51, 97, 57, 49, 100, 51, 54, 55, 49, 48, 57, 57, 54, 50, 48, 98, 54, 101, 100, 100, 98, 98, 100, 48, 102, 51, 49, 49, 49, 55, 49, 54, 52, 101, 98, 55, 51, 99, 97, 50, 48, 49, 100, 98, 53, 57, 102, 49, 54, 53, 48, 49, 51, 49, 99, 98, 101, 102, 53, 99, 55, 98, 49, 98, 98, 49, 52, 48, 56, 57, 102, 100, 50, 52, 100, 97, 50, 57, 49, 57, 50, 52, 49, 102, 99, 57, 51, 48, 51, 99, 48, 50, 100, 101, 102, 52, 50, 52, 101, 97, 56, 54, 49, 100, 56, 56, 54, 51, 54, 98, 98, 57, 48, 98, 49, 51, 101, 98, 99, 51, 56, 99, 102, 49, 55, 55, 102, 56, 97, 56, 98, 49, 51, 57, 101, 54, 56, 48, 56, 50, 102, 97, 52, 54, 98, 99, 102, 99, 52, 50, 56, 98, 100, 48, 53, 52, 99, 49, 98, 98, 55, 100, 100, 51, 101, 100, 55, 101, 57, 98, 56, 54, 101, 100, 55, 53, 49, 55, 51, 54, 98, 54, 99, 99};
        stringliteral_t string1509 = mk_string(256, characters1511);
        ivar_18 = (test_HMAC_record_1_t)strings__make_string(len1510, string1509);
        test_HMAC_record_1_t ivar_16;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_16 = (test_HMAC_record_1_t)ivar_18;
        ivar_16->count++;
        release_test_HMAC_record_1(ivar_18);
        bytestrings__bytestring_t ivar_15;
        ivar_15 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_16);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_15;
        ivar_21->count++;
        release_bytestrings__bytestring(ivar_15);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)test_HMAC__hexhmac16((bytestrings__bytestring_t)ivar_20, (bytestrings__bytestring_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_19;
        result->count++;
        release_bytestrings__bytestring(ivar_19);

        return result;
}

extern bytestrings__bytestring_t test_HMAC__test16_3(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_20;
        test_HMAC_record_1_t ivar_10;
        uint32_t len1515 = 80;
        uint32_t characters1516[80] = {98, 50, 99, 52, 53, 48, 49, 50, 56, 100, 48, 55, 52, 52, 52, 50, 49, 99, 51, 102, 51, 49, 102, 97, 98, 51, 55, 98, 98, 99, 100, 102, 98, 53, 97, 50, 102, 102, 50, 102, 98, 55, 48, 54, 100, 49, 102, 55, 101, 50, 51, 99, 52, 56, 56, 54, 57, 57, 50, 99, 55, 100, 50, 49, 53, 99, 54, 52, 56, 102, 102, 56, 101, 100, 98, 50, 101, 98, 53, 57};
        stringliteral_t string1514 = mk_string(80, characters1516);
        ivar_10 = (test_HMAC_record_1_t)strings__make_string(len1515, string1514);
        test_HMAC_record_1_t ivar_8;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_8 = (test_HMAC_record_1_t)ivar_10;
        ivar_8->count++;
        release_test_HMAC_record_1(ivar_10);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_7;
        ivar_20->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_21;
        test_HMAC_record_1_t ivar_18;
        uint32_t len1518 = 256;
        uint32_t characters1519[256] = {102, 54, 57, 56, 57, 101, 98, 98, 48, 55, 97, 97, 100, 97, 101, 101, 102, 57, 55, 48, 102, 48, 98, 53, 99, 101, 98, 56, 48, 54, 101, 99, 102, 102, 101, 55, 55, 99, 99, 50, 48, 102, 51, 99, 50, 50, 49, 97, 54, 54, 53, 57, 97, 57, 51, 49, 53, 100, 102, 102, 53, 56, 56, 49, 57, 54, 49, 57, 48, 48, 101, 54, 56, 101, 102, 99, 51, 50, 48, 48, 55, 53, 101, 100, 97, 102, 100, 56, 51, 100, 101, 51, 50, 48, 99, 54, 102, 49, 56, 102, 48, 56, 57, 50, 52, 56, 57, 97, 102, 54, 100, 57, 55, 97, 50, 101, 102, 102, 98, 50, 53, 50, 98, 55, 54, 98, 57, 50, 56, 52, 101, 98, 97, 102, 54, 100, 52, 50, 48, 56, 57, 99, 49, 101, 48, 97, 53, 99, 100, 53, 48, 57, 99, 50, 48, 98, 56, 54, 102, 102, 48, 54, 48, 100, 53, 51, 54, 50, 99, 49, 55, 54, 56, 102, 56, 57, 102, 97, 102, 97, 97, 102, 54, 53, 102, 49, 98, 48, 102, 101, 54, 53, 54, 98, 49, 54, 57, 50, 57, 56, 52, 97, 53, 54, 55, 101, 49, 50, 54, 48, 99, 55, 52, 57, 57, 48, 56, 53, 98, 55, 57, 102, 53, 102, 101, 55, 54, 56, 52, 55, 55, 57, 97, 50, 53, 56, 53, 53, 102, 50, 57, 49, 99, 53, 97, 49, 57, 50, 54, 51, 55, 49, 55, 55, 99, 52};
        stringliteral_t string1517 = mk_string(256, characters1519);
        ivar_18 = (test_HMAC_record_1_t)strings__make_string(len1518, string1517);
        test_HMAC_record_1_t ivar_16;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_16 = (test_HMAC_record_1_t)ivar_18;
        ivar_16->count++;
        release_test_HMAC_record_1(ivar_18);
        bytestrings__bytestring_t ivar_15;
        ivar_15 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_16);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_15;
        ivar_21->count++;
        release_bytestrings__bytestring(ivar_15);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)test_HMAC__hexhmac16((bytestrings__bytestring_t)ivar_20, (bytestrings__bytestring_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_19;
        result->count++;
        release_bytestrings__bytestring(ivar_19);

        return result;
}

extern bytestrings__bytestring_t test_HMAC__test16_4(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_20;
        test_HMAC_record_1_t ivar_10;
        uint32_t len1523 = 80;
        uint32_t characters1524[80] = {97, 55, 55, 52, 52, 51, 50, 49, 100, 55, 51, 57, 51, 56, 98, 56, 101, 101, 97, 49, 51, 55, 53, 52, 57, 48, 57, 48, 50, 57, 56, 56, 49, 98, 98, 100, 55, 50, 55, 52, 51, 57, 102, 101, 50, 55, 51, 49, 98, 49, 99, 54, 55, 98, 55, 48, 56, 51, 101, 98, 55, 98, 53, 100, 51, 51, 97, 100, 102, 99, 99, 97, 54, 53, 102, 53, 100, 49, 56, 57};
        stringliteral_t string1522 = mk_string(80, characters1524);
        ivar_10 = (test_HMAC_record_1_t)strings__make_string(len1523, string1522);
        test_HMAC_record_1_t ivar_8;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_8 = (test_HMAC_record_1_t)ivar_10;
        ivar_8->count++;
        release_test_HMAC_record_1(ivar_10);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_7;
        ivar_20->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_21;
        test_HMAC_record_1_t ivar_18;
        uint32_t len1526 = 256;
        uint32_t characters1527[256] = {55, 49, 50, 57, 57, 99, 97, 51, 100, 97, 102, 102, 50, 51, 51, 49, 48, 56, 50, 100, 98, 51, 55, 48, 98, 100, 102, 56, 99, 101, 101, 99, 50, 50, 55, 98, 55, 49, 98, 100, 99, 52, 57, 99, 51, 98, 49, 52, 100, 99, 51, 102, 100, 50, 49, 51, 100, 51, 98, 97, 56, 51, 101, 50, 48, 53, 56, 56, 50, 56, 102, 102, 99, 54, 52, 49, 52, 102, 100, 53, 97, 50, 99, 57, 57, 56, 57, 49, 101, 57, 99, 56, 53, 102, 51, 49, 54, 99, 53, 98, 57, 98, 100, 100, 56, 49, 48, 97, 48, 54, 55, 98, 52, 100, 102, 57, 55, 102, 55, 101, 52, 50, 54, 50, 97, 99, 102, 101, 101, 54, 52, 50, 101, 51, 48, 101, 100, 54, 53, 51, 52, 98, 52, 97, 48, 98, 51, 98, 51, 101, 97, 102, 53, 100, 48, 51, 102, 50, 98, 48, 52, 53, 99, 97, 53, 57, 56, 53, 101, 55, 98, 98, 52, 53, 99, 55, 53, 48, 51, 99, 100, 48, 51, 97, 102, 99, 54, 56, 102, 98, 101, 97, 57, 98, 99, 48, 57, 53, 55, 57, 49, 52, 49, 100, 53, 102, 98, 55, 99, 98, 101, 97, 54, 100, 55, 51, 50, 48, 56, 102, 99, 102, 57, 49, 51, 56, 51, 48, 55, 49, 53, 100, 102, 102, 57, 56, 52, 48, 49, 102, 54, 100, 55, 48, 56, 101, 102, 48, 48, 57, 98, 53, 98, 56, 99, 98};
        stringliteral_t string1525 = mk_string(256, characters1527);
        ivar_18 = (test_HMAC_record_1_t)strings__make_string(len1526, string1525);
        test_HMAC_record_1_t ivar_16;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_16 = (test_HMAC_record_1_t)ivar_18;
        ivar_16->count++;
        release_test_HMAC_record_1(ivar_18);
        bytestrings__bytestring_t ivar_15;
        ivar_15 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_16);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_15;
        ivar_21->count++;
        release_bytestrings__bytestring(ivar_15);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)test_HMAC__hexhmac16((bytestrings__bytestring_t)ivar_20, (bytestrings__bytestring_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_19;
        result->count++;
        release_bytestrings__bytestring(ivar_19);

        return result;
}

extern bytestrings__bytestring_t test_HMAC__test16_5(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_20;
        test_HMAC_record_1_t ivar_10;
        uint32_t len1531 = 80;
        uint32_t characters1532[80] = {55, 57, 53, 97, 48, 98, 97, 57, 98, 48, 50, 57, 56, 52, 99, 102, 99, 101, 53, 101, 55, 51, 57, 53, 102, 98, 57, 52, 100, 57, 56, 102, 99, 102, 49, 50, 97, 101, 53, 100, 98, 56, 97, 48, 54, 101, 50, 51, 57, 99, 57, 97, 100, 52, 51, 57, 98, 102, 52, 50, 101, 53, 50, 51, 101, 54, 53, 97, 51, 49, 99, 51, 98, 100, 102, 51, 53, 54, 99, 100};
        stringliteral_t string1530 = mk_string(80, characters1532);
        ivar_10 = (test_HMAC_record_1_t)strings__make_string(len1531, string1530);
        test_HMAC_record_1_t ivar_8;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_8 = (test_HMAC_record_1_t)ivar_10;
        ivar_8->count++;
        release_test_HMAC_record_1(ivar_10);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_7;
        ivar_20->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_21;
        test_HMAC_record_1_t ivar_18;
        uint32_t len1534 = 256;
        uint32_t characters1535[256] = {56, 98, 52, 97, 97, 50, 48, 100, 101, 54, 99, 49, 102, 48, 53, 49, 100, 49, 49, 97, 100, 53, 48, 98, 97, 50, 101, 52, 102, 99, 52, 102, 102, 49, 101, 99, 52, 55, 56, 52, 53, 53, 102, 57, 98, 53, 98, 57, 54, 102, 98, 57, 56, 57, 51, 100, 50, 97, 102, 99, 97, 57, 54, 57, 52, 48, 50, 48, 52, 52, 99, 49, 48, 49, 99, 99, 98, 55, 51, 99, 53, 48, 101, 50, 98, 50, 100, 102, 101, 101, 97, 101, 57, 54, 57, 48, 102, 98, 54, 52, 50, 50, 50, 97, 98, 57, 99, 57, 52, 102, 99, 100, 57, 52, 51, 48, 55, 56, 55, 56, 53, 102, 97, 56, 98, 101, 100, 57, 101, 49, 55, 52, 97, 98, 54, 51, 57, 48, 98, 98, 49, 54, 97, 50, 57, 99, 56, 49, 52, 54, 99, 98, 50, 102, 100, 54, 53, 97, 57, 56, 102, 52, 52, 100, 101, 55, 53, 50, 100, 54, 98, 48, 101, 52, 50, 102, 48, 97, 102, 50, 99, 51, 100, 102, 52, 102, 54, 53, 101, 49, 54, 50, 55, 52, 50, 100, 50, 48, 49, 99, 49, 98, 102, 53, 100, 50, 50, 98, 98, 101, 101, 49, 100, 97, 102, 56, 101, 102, 99, 51, 48, 100, 48, 99, 101, 52, 57, 49, 100, 102, 50, 54, 51, 50, 49, 55, 51, 98, 56, 97, 100, 57, 101, 57, 98, 50, 57, 98, 56, 49, 57, 99, 100, 56, 97, 99};
        stringliteral_t string1533 = mk_string(256, characters1535);
        ivar_18 = (test_HMAC_record_1_t)strings__make_string(len1534, string1533);
        test_HMAC_record_1_t ivar_16;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_16 = (test_HMAC_record_1_t)ivar_18;
        ivar_16->count++;
        release_test_HMAC_record_1(ivar_18);
        bytestrings__bytestring_t ivar_15;
        ivar_15 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_16);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_15;
        ivar_21->count++;
        release_bytestrings__bytestring(ivar_15);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)test_HMAC__hexhmac16((bytestrings__bytestring_t)ivar_20, (bytestrings__bytestring_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_19;
        result->count++;
        release_bytestrings__bytestring(ivar_19);

        return result;
}

extern bytestrings__bytestring_t test_HMAC__test16_6(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_20;
        test_HMAC_record_1_t ivar_10;
        uint32_t len1539 = 80;
        uint32_t characters1540[80] = {97, 97, 52, 49, 98, 53, 50, 50, 50, 101, 102, 100, 101, 97, 56, 56, 50, 99, 98, 101, 98, 100, 49, 49, 100, 51, 52, 51, 48, 48, 48, 101, 99, 50, 102, 102, 54, 98, 50, 102, 55, 98, 98, 102, 97, 55, 52, 54, 49, 53, 56, 101, 97, 53, 52, 102, 51, 50, 100, 53, 51, 52, 97, 101, 51, 49, 99, 55, 100, 51, 98, 55, 97, 53, 102, 99, 99, 51, 55, 51};
        stringliteral_t string1538 = mk_string(80, characters1540);
        ivar_10 = (test_HMAC_record_1_t)strings__make_string(len1539, string1538);
        test_HMAC_record_1_t ivar_8;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_8 = (test_HMAC_record_1_t)ivar_10;
        ivar_8->count++;
        release_test_HMAC_record_1(ivar_10);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_7;
        ivar_20->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_21;
        test_HMAC_record_1_t ivar_18;
        uint32_t len1542 = 256;
        uint32_t characters1543[256] = {51, 50, 55, 52, 97, 48, 51, 50, 54, 54, 56, 50, 98, 97, 53, 57, 100, 54, 99, 52, 55, 100, 98, 52, 49, 54, 52, 101, 51, 101, 57, 57, 51, 55, 98, 102, 97, 100, 52, 49, 57, 57, 99, 54, 53, 48, 55, 49, 48, 49, 101, 53, 51, 48, 53, 97, 101, 98, 55, 53, 100, 50, 98, 102, 50, 50, 101, 98, 54, 56, 53, 53, 56, 100, 53, 57, 52, 57, 54, 102, 52, 99, 51, 56, 57, 102, 100, 97, 48, 52, 54, 52, 53, 102, 48, 54, 55, 54, 54, 56, 55, 102, 54, 55, 53, 55, 102, 99, 54, 51, 49, 98, 53, 98, 99, 99, 57, 56, 99, 100, 57, 52, 55, 98, 99, 52, 100, 57, 102, 97, 101, 56, 100, 100, 98, 49, 52, 98, 98, 48, 57, 97, 55, 102, 49, 53, 102, 52, 50, 55, 48, 99, 49, 48, 53, 99, 49, 100, 101, 48, 98, 50, 53, 98, 98, 49, 97, 98, 102, 101, 98, 53, 50, 99, 101, 51, 57, 100, 51, 102, 57, 98, 97, 102, 50, 102, 101, 54, 99, 55, 48, 52, 101, 51, 102, 51, 54, 55, 48, 100, 52, 53, 56, 101, 57, 53, 100, 49, 53, 56, 56, 48, 55, 102, 49, 48, 101, 53, 51, 100, 53, 102, 54, 100, 49, 50, 50, 49, 97, 100, 100, 51, 51, 54, 102, 97, 57, 50, 49, 49, 101, 99, 99, 55, 97, 49, 99, 55, 54, 55, 98, 102, 99, 50, 56, 54};
        stringliteral_t string1541 = mk_string(256, characters1543);
        ivar_18 = (test_HMAC_record_1_t)strings__make_string(len1542, string1541);
        test_HMAC_record_1_t ivar_16;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_16 = (test_HMAC_record_1_t)ivar_18;
        ivar_16->count++;
        release_test_HMAC_record_1(ivar_18);
        bytestrings__bytestring_t ivar_15;
        ivar_15 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_16);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_15;
        ivar_21->count++;
        release_bytestrings__bytestring(ivar_15);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)test_HMAC__hexhmac16((bytestrings__bytestring_t)ivar_20, (bytestrings__bytestring_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_19;
        result->count++;
        release_bytestrings__bytestring(ivar_19);

        return result;
}

extern bytestrings__bytestring_t test_HMAC__test16_7(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_20;
        test_HMAC_record_1_t ivar_10;
        uint32_t len1547 = 80;
        uint32_t characters1548[80] = {97, 97, 97, 52, 52, 57, 57, 50, 51, 102, 48, 99, 100, 51, 101, 54, 97, 55, 101, 55, 52, 100, 57, 99, 53, 54, 97, 55, 101, 98, 54, 97, 51, 98, 52, 99, 51, 100, 101, 97, 57, 55, 101, 54, 97, 56, 52, 48, 48, 101, 53, 53, 49, 55, 102, 99, 102, 102, 53, 52, 101, 101, 52, 50, 49, 49, 98, 54, 52, 48, 50, 56, 48, 101, 101, 101, 52, 49, 53, 102};
        stringliteral_t string1546 = mk_string(80, characters1548);
        ivar_10 = (test_HMAC_record_1_t)strings__make_string(len1547, string1546);
        test_HMAC_record_1_t ivar_8;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_8 = (test_HMAC_record_1_t)ivar_10;
        ivar_8->count++;
        release_test_HMAC_record_1(ivar_10);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_7;
        ivar_20->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_21;
        test_HMAC_record_1_t ivar_18;
        uint32_t len1550 = 256;
        uint32_t characters1551[256] = {48, 52, 56, 54, 100, 50, 54, 52, 55, 101, 50, 99, 100, 102, 55, 98, 98, 97, 51, 54, 99, 56, 102, 51, 102, 102, 57, 101, 50, 57, 52, 49, 48, 48, 49, 99, 55, 48, 54, 101, 98, 49, 97, 52, 52, 99, 98, 100, 53, 56, 50, 102, 54, 51, 56, 101, 101, 55, 98, 101, 52, 52, 56, 50, 56, 57, 57, 99, 57, 99, 101, 48, 55, 98, 101, 52, 97, 99, 51, 56, 49, 100, 52, 52, 102, 97, 52, 54, 52, 57, 48, 48, 52, 55, 49, 56, 101, 51, 51, 97, 99, 50, 55, 51, 98, 49, 55, 48, 55, 98, 55, 52, 54, 100, 52, 54, 49, 97, 55, 51, 49, 57, 56, 54, 100, 49, 50, 99, 57, 51, 54, 53, 56, 102, 50, 49, 54, 57, 48, 56, 55, 55, 51, 97, 101, 101, 52, 54, 57, 48, 97, 102, 56, 101, 98, 48, 98, 101, 50, 55, 53, 101, 99, 101, 102, 49, 50, 50, 102, 55, 97, 99, 57, 99, 57, 52, 56, 53, 57, 53, 54, 57, 100, 50, 49, 98, 49, 102, 50, 98, 98, 50, 52, 97, 54, 56, 49, 51, 101, 101, 102, 49, 57, 101, 50, 56, 99, 97, 53, 54, 99, 53, 102, 49, 102, 55, 55, 54, 98, 52, 55, 52, 98, 54, 57, 97, 54, 49, 54, 53, 52, 49, 50, 98, 53, 102, 57, 55, 54, 54, 99, 55, 97, 53, 98, 54, 55, 53, 57, 52, 57, 49, 51, 56, 53, 99};
        stringliteral_t string1549 = mk_string(256, characters1551);
        ivar_18 = (test_HMAC_record_1_t)strings__make_string(len1550, string1549);
        test_HMAC_record_1_t ivar_16;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_16 = (test_HMAC_record_1_t)ivar_18;
        ivar_16->count++;
        release_test_HMAC_record_1(ivar_18);
        bytestrings__bytestring_t ivar_15;
        ivar_15 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_16);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_15;
        ivar_21->count++;
        release_bytestrings__bytestring(ivar_15);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)test_HMAC__hexhmac16((bytestrings__bytestring_t)ivar_20, (bytestrings__bytestring_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_19;
        result->count++;
        release_bytestrings__bytestring(ivar_19);

        return result;
}

extern bytestrings__bytestring_t test_HMAC__hexhmac32(bytestrings__bytestring_t ivar_1, bytestrings__bytestring_t ivar_2){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_14;
        bytestrings__bytestring_t ivar_8;
        ivar_8 = (bytestrings__bytestring_t)SHA256__hex2bytestring((bytestrings__bytestring_t)ivar_1);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_14 = (bytestrings__bytestring_t)ivar_8;
        ivar_14->count++;
        release_bytestrings__bytestring(ivar_8);
        bytestrings__bytestring_t ivar_15;
        bytestrings__bytestring_t ivar_11;
        ivar_11 = (bytestrings__bytestring_t)SHA256__hex2bytestring((bytestrings__bytestring_t)ivar_2);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_15 = (bytestrings__bytestring_t)ivar_11;
        ivar_15->count++;
        release_bytestrings__bytestring(ivar_11);
        uint8_t ivar_16;
        ivar_16 = (uint8_t)64;
        uint8_t ivar_17;
        ivar_17 = (uint8_t)32;
        bytestrings__bytestring_t ivar_13;
        ivar_13 = (bytestrings__bytestring_t)HMAC__hmac256((HMAC_record_3_t)ivar_14, (HMAC_record_3_t)ivar_15, (uint8_t)ivar_16, (uint8_t)ivar_17);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_13;
        result->count++;
        release_bytestrings__bytestring(ivar_13);

        return result;
}

extern bytestrings__bytestring_t test_HMAC__test32_0(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_20;
        test_HMAC_record_1_t ivar_10;
        uint32_t len1555 = 200;
        uint32_t characters1556[200] = {55, 50, 54, 51, 55, 52, 99, 52, 98, 56, 100, 102, 53, 49, 55, 53, 49, 48, 100, 98, 57, 49, 53, 57, 98, 55, 51, 48, 102, 57, 51, 52, 51, 49, 101, 48, 99, 100, 52, 54, 56, 100, 52, 102, 51, 56, 50, 49, 101, 97, 98, 48, 101, 100, 98, 57, 51, 97, 98, 100, 48, 102, 98, 97, 52, 54, 97, 98, 52, 102, 49, 101, 102, 51, 53, 100, 53, 52, 102, 101, 99, 51, 100, 56, 53, 102, 97, 56, 57, 101, 102, 55, 50, 102, 102, 51, 100, 51, 53, 102, 50, 50, 99, 102, 53, 97, 98, 54, 57, 101, 50, 48, 53, 99, 49, 48, 97, 102, 99, 100, 102, 52, 97, 97, 102, 49, 49, 51, 51, 56, 100, 98, 98, 49, 50, 48, 55, 51, 52, 55, 52, 102, 100, 100, 98, 53, 53, 54, 101, 54, 48, 98, 56, 101, 101, 53, 50, 102, 57, 49, 49, 54, 51, 98, 97, 51, 49, 52, 51, 48, 51, 101, 101, 48, 99, 57, 49, 48, 101, 54, 52, 101, 56, 55, 102, 98, 102, 51, 48, 50, 50, 49, 52, 101, 100, 98, 101, 51, 102, 50};
        stringliteral_t string1554 = mk_string(200, characters1556);
        ivar_10 = (test_HMAC_record_1_t)strings__make_string(len1555, string1554);
        test_HMAC_record_1_t ivar_8;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_8 = (test_HMAC_record_1_t)ivar_10;
        ivar_8->count++;
        release_test_HMAC_record_1(ivar_10);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_7;
        ivar_20->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_21;
        test_HMAC_record_1_t ivar_18;
        uint32_t len1558 = 256;
        uint32_t characters1559[256] = {97, 99, 57, 51, 57, 54, 53, 57, 100, 99, 53, 102, 54, 54, 56, 99, 57, 57, 54, 57, 99, 48, 53, 51, 48, 52, 50, 50, 101, 51, 52, 49, 55, 97, 52, 54, 50, 99, 56, 98, 54, 54, 53, 101, 56, 100, 98, 50, 53, 97, 56, 56, 51, 97, 54, 50, 53, 102, 55, 97, 97, 53, 57, 98, 56, 57, 99, 53, 97, 100, 48, 101, 99, 101, 53, 55, 49, 50, 99, 97, 49, 55, 52, 52, 50, 100, 49, 55, 57, 56, 99, 54, 100, 101, 97, 50, 53, 100, 56, 50, 99, 53, 100, 98, 50, 54, 48, 99, 98, 53, 57, 99, 55, 53, 97, 101, 54, 53, 48, 98, 101, 53, 54, 53, 54, 57, 99, 49, 98, 100, 50, 100, 54, 49, 50, 99, 99, 53, 55, 101, 55, 49, 51, 49, 53, 57, 49, 55, 102, 49, 49, 54, 98, 98, 102, 97, 54, 53, 97, 48, 97, 101, 98, 56, 97, 102, 55, 56, 52, 48, 101, 101, 56, 51, 100, 51, 101, 55, 49, 48, 49, 99, 53, 50, 99, 102, 54, 53, 50, 100, 50, 55, 55, 51, 53, 51, 49, 98, 55, 97, 54, 98, 100, 100, 54, 57, 48, 98, 56, 52, 54, 97, 55, 52, 49, 56, 49, 54, 99, 56, 54, 48, 56, 49, 57, 50, 55, 48, 53, 50, 50, 97, 53, 98, 48, 99, 100, 102, 97, 49, 100, 55, 51, 54, 99, 53, 48, 49, 99, 53, 56, 51, 100, 57, 49, 54};
        stringliteral_t string1557 = mk_string(256, characters1559);
        ivar_18 = (test_HMAC_record_1_t)strings__make_string(len1558, string1557);
        test_HMAC_record_1_t ivar_16;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_16 = (test_HMAC_record_1_t)ivar_18;
        ivar_16->count++;
        release_test_HMAC_record_1(ivar_18);
        bytestrings__bytestring_t ivar_15;
        ivar_15 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_16);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_15;
        ivar_21->count++;
        release_bytestrings__bytestring(ivar_15);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)test_HMAC__hexhmac32((bytestrings__bytestring_t)ivar_20, (bytestrings__bytestring_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_19;
        result->count++;
        release_bytestrings__bytestring(ivar_19);

        return result;
}

extern bytestrings__bytestring_t test_HMAC__test32_1(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_20;
        test_HMAC_record_1_t ivar_10;
        uint32_t len1563 = 200;
        uint32_t characters1564[200] = {101, 50, 52, 53, 98, 101, 57, 97, 57, 99, 56, 49, 48, 49, 50, 54, 51, 56, 51, 48, 97, 100, 51, 53, 49, 53, 99, 49, 99, 54, 99, 98, 102, 50, 56, 53, 97, 55, 101, 52, 98, 51, 54, 50, 101, 98, 99, 48, 54, 50, 99, 98, 56, 101, 55, 101, 55, 53, 101, 102, 53, 48, 101, 99, 52, 102, 51, 49, 53, 97, 57, 101, 48, 57, 100, 57, 50, 52, 51, 100, 55, 49, 48, 57, 57, 54, 50, 50, 53, 51, 102, 50, 54, 101, 50, 51, 102, 56, 52, 55, 101, 49, 97, 100, 101, 100, 102, 50, 56, 53, 49, 52, 48, 53, 48, 55, 54, 101, 50, 54, 97, 49, 102, 54, 57, 55, 48, 54, 50, 102, 48, 52, 56, 52, 51, 56, 102, 49, 102, 99, 50, 54, 102, 56, 48, 48, 50, 49, 102, 102, 100, 48, 57, 48, 54, 56, 56, 55, 54, 57, 55, 53, 101, 52, 99, 100, 97, 50, 101, 55, 56, 50, 54, 49, 100, 102, 56, 50, 102, 54, 55, 50, 97, 51, 57, 48, 102, 53, 51, 52, 54, 50, 56, 98, 97, 53, 56, 52, 57, 48};
        stringliteral_t string1562 = mk_string(200, characters1564);
        ivar_10 = (test_HMAC_record_1_t)strings__make_string(len1563, string1562);
        test_HMAC_record_1_t ivar_8;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_8 = (test_HMAC_record_1_t)ivar_10;
        ivar_8->count++;
        release_test_HMAC_record_1(ivar_10);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_7;
        ivar_20->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_21;
        test_HMAC_record_1_t ivar_18;
        uint32_t len1566 = 256;
        uint32_t characters1567[256] = {52, 50, 53, 51, 49, 53, 100, 100, 56, 101, 99, 99, 100, 49, 55, 97, 56, 52, 99, 49, 97, 97, 48, 48, 102, 102, 55, 50, 55, 54, 51, 102, 57, 57, 100, 100, 99, 98, 99, 50, 99, 51, 56, 49, 98, 56, 98, 50, 49, 53, 54, 55, 98, 50, 102, 56, 101, 50, 54, 51, 100, 49, 97, 50, 49, 48, 57, 56, 51, 100, 56, 56, 50, 54, 51, 97, 101, 51, 50, 102, 97, 55, 57, 56, 54, 99, 101, 100, 57, 102, 53, 57, 54, 102, 52, 101, 55, 98, 48, 53, 101, 53, 98, 55, 49, 100, 99, 56, 100, 101, 52, 57, 51, 48, 55, 51, 55, 51, 48, 56, 98, 57, 99, 52, 102, 99, 51, 100, 101, 102, 101, 55, 56, 51, 49, 57, 52, 100, 51, 99, 55, 56, 57, 97, 101, 53, 53, 98, 97, 53, 98, 51, 102, 55, 53, 54, 54, 53, 97, 55, 99, 50, 51, 101, 49, 49, 98, 54, 57, 97, 101, 56, 98, 99, 102, 98, 51, 98, 102, 48, 50, 48, 57, 53, 53, 100, 102, 102, 100, 55, 48, 53, 56, 57, 52, 97, 99, 102, 100, 55, 50, 97, 53, 98, 102, 56, 56, 53, 101, 55, 49, 52, 51, 102, 57, 56, 51, 48, 102, 49, 99, 48, 49, 48, 49, 55, 56, 100, 51, 55, 48, 54, 54, 50, 54, 56, 98, 56, 57, 48, 100, 101, 101, 55, 97, 49, 101, 53, 102, 54, 57, 99, 99, 99, 99, 49};
        stringliteral_t string1565 = mk_string(256, characters1567);
        ivar_18 = (test_HMAC_record_1_t)strings__make_string(len1566, string1565);
        test_HMAC_record_1_t ivar_16;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_16 = (test_HMAC_record_1_t)ivar_18;
        ivar_16->count++;
        release_test_HMAC_record_1(ivar_18);
        bytestrings__bytestring_t ivar_15;
        ivar_15 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_16);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_15;
        ivar_21->count++;
        release_bytestrings__bytestring(ivar_15);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)test_HMAC__hexhmac32((bytestrings__bytestring_t)ivar_20, (bytestrings__bytestring_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_19;
        result->count++;
        release_bytestrings__bytestring(ivar_19);

        return result;
}

extern bytestrings__bytestring_t test_HMAC__test32_2(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_20;
        test_HMAC_record_1_t ivar_10;
        uint32_t len1571 = 200;
        uint32_t characters1572[200] = {55, 101, 98, 55, 50, 102, 49, 49, 55, 98, 51, 57, 55, 99, 101, 102, 99, 102, 98, 52, 101, 55, 53, 97, 99, 101, 51, 98, 48, 56, 49, 55, 55, 54, 101, 52, 54, 98, 49, 51, 53, 50, 49, 101, 57, 51, 53, 53, 57, 100, 52, 53, 51, 101, 51, 50, 97, 98, 55, 52, 101, 98, 99, 48, 56, 53, 57, 98, 57, 97, 56, 100, 100, 52, 100, 49, 100, 51, 57, 48, 48, 48, 101, 98, 101, 57, 53, 102, 57, 56, 52, 100, 56, 48, 97, 51, 102, 53, 48, 48, 52, 100, 99, 57, 49, 97, 48, 53, 49, 100, 102, 98, 100, 102, 101, 57, 49, 57, 52, 102, 52, 102, 57, 97, 52, 56, 51, 101, 52, 101, 55, 57, 53, 53, 53, 55, 55, 102, 98, 48, 57, 51, 51, 52, 54, 52, 99, 54, 51, 101, 97, 101, 99, 55, 55, 49, 48, 52, 52, 100, 53, 57, 97, 98, 99, 51, 48, 50, 57, 97, 48, 55, 57, 53, 49, 57, 102, 56, 52, 54, 48, 97, 54, 57, 51, 98, 50, 53, 98, 52, 99, 101, 50, 48, 55, 97, 101, 57, 100, 57};
        stringliteral_t string1570 = mk_string(200, characters1572);
        ivar_10 = (test_HMAC_record_1_t)strings__make_string(len1571, string1570);
        test_HMAC_record_1_t ivar_8;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_8 = (test_HMAC_record_1_t)ivar_10;
        ivar_8->count++;
        release_test_HMAC_record_1(ivar_10);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_7;
        ivar_20->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_21;
        test_HMAC_record_1_t ivar_18;
        uint32_t len1574 = 256;
        uint32_t characters1575[256] = {52, 101, 54, 54, 49, 49, 97, 54, 100, 55, 54, 51, 57, 53, 102, 50, 98, 48, 101, 50, 51, 100, 99, 97, 102, 99, 99, 54, 55, 50, 99, 48, 57, 48, 101, 55, 99, 48, 48, 97, 53, 102, 98, 53, 101, 50, 51, 100, 51, 53, 49, 102, 49, 102, 53, 57, 97, 57, 98, 51, 100, 97, 48, 54, 52, 100, 48, 54, 54, 52, 49, 100, 50, 55, 53, 54, 49, 52, 54, 97, 54, 53, 54, 101, 57, 97, 98, 49, 52, 99, 99, 97, 57, 48, 101, 101, 55, 50, 102, 99, 53, 50, 101, 49, 50, 100, 52, 101, 49, 48, 99, 97, 52, 98, 97, 57, 50, 49, 55, 50, 48, 51, 98, 53, 57, 97, 54, 97, 50, 99, 52, 50, 50, 48, 57, 55, 97, 100, 101, 55, 102, 97, 101, 102, 51, 53, 101, 56, 54, 97, 55, 100, 50, 99, 53, 100, 51, 101, 97, 98, 101, 57, 57, 49, 97, 50, 99, 48, 50, 53, 97, 57, 51, 56, 97, 56, 97, 102, 56, 54, 54, 98, 102, 52, 54, 50, 101, 99, 48, 48, 50, 49, 53, 53, 101, 51, 101, 100, 49, 100, 53, 49, 53, 100, 54, 102, 48, 55, 56, 56, 49, 97, 53, 55, 51, 54, 56, 51, 99, 57, 97, 52, 55, 101, 53, 100, 55, 48, 53, 55, 97, 101, 50, 102, 48, 100, 56, 51, 53, 100, 99, 98, 55, 101, 97, 52, 101, 55, 97, 100, 57, 101, 51, 49, 98, 50};
        stringliteral_t string1573 = mk_string(256, characters1575);
        ivar_18 = (test_HMAC_record_1_t)strings__make_string(len1574, string1573);
        test_HMAC_record_1_t ivar_16;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_16 = (test_HMAC_record_1_t)ivar_18;
        ivar_16->count++;
        release_test_HMAC_record_1(ivar_18);
        bytestrings__bytestring_t ivar_15;
        ivar_15 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_16);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_15;
        ivar_21->count++;
        release_bytestrings__bytestring(ivar_15);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)test_HMAC__hexhmac32((bytestrings__bytestring_t)ivar_20, (bytestrings__bytestring_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_19;
        result->count++;
        release_bytestrings__bytestring(ivar_19);

        return result;
}

extern bytestrings__bytestring_t test_HMAC__test32_3(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_20;
        test_HMAC_record_1_t ivar_10;
        uint32_t len1579 = 200;
        uint32_t characters1580[200] = {49, 50, 55, 50, 48, 99, 102, 102, 48, 99, 97, 54, 52, 57, 102, 102, 50, 101, 49, 99, 57, 51, 53, 53, 99, 98, 97, 56, 48, 50, 48, 102, 99, 57, 54, 100, 98, 101, 48, 53, 97, 102, 57, 102, 98, 52, 98, 99, 48, 48, 56, 100, 56, 100, 56, 97, 99, 56, 100, 101, 101, 48, 102, 98, 55, 52, 49, 97, 97, 54, 55, 52, 101, 54, 54, 100, 101, 102, 49, 54, 99, 57, 97, 56, 100, 52, 101, 53, 50, 50, 56, 57, 97, 100, 50, 97, 50, 56, 51, 99, 56, 52, 49, 54, 53, 54, 50, 49, 99, 57, 97, 55, 98, 101, 100, 48, 52, 54, 100, 48, 97, 48, 53, 98, 53, 54, 100, 52, 51, 98, 100, 51, 53, 50, 102, 51, 101, 51, 48, 100, 52, 100, 52, 56, 53, 52, 97, 53, 48, 49, 102, 50, 52, 54, 52, 52, 48, 56, 55, 50, 52, 50, 49, 102, 53, 48, 53, 52, 98, 51, 99, 48, 99, 57, 49, 50, 52, 48, 48, 57, 54, 48, 51, 53, 53, 57, 55, 54, 51, 49, 98, 100, 49, 48, 97, 50, 102, 56, 99, 51};
        stringliteral_t string1578 = mk_string(200, characters1580);
        ivar_10 = (test_HMAC_record_1_t)strings__make_string(len1579, string1578);
        test_HMAC_record_1_t ivar_8;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_8 = (test_HMAC_record_1_t)ivar_10;
        ivar_8->count++;
        release_test_HMAC_record_1(ivar_10);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_7;
        ivar_20->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_21;
        test_HMAC_record_1_t ivar_18;
        uint32_t len1582 = 256;
        uint32_t characters1583[256] = {100, 101, 102, 56, 99, 57, 97, 99, 101, 101, 57, 100, 57, 102, 49, 57, 49, 52, 49, 57, 57, 56, 50, 53, 53, 49, 56, 48, 52, 97, 57, 97, 57, 52, 49, 49, 99, 55, 100, 49, 50, 52, 48, 98, 50, 50, 50, 52, 51, 100, 99, 51, 50, 102, 97, 53, 102, 101, 102, 50, 56, 98, 49, 49, 56, 51, 53, 51, 100, 99, 102, 102, 52, 101, 54, 101, 53, 97, 53, 100, 101, 98, 97, 101, 56, 102, 49, 100, 100, 51, 98, 97, 53, 97, 50, 99, 57, 50, 48, 50, 51, 97, 97, 52, 50, 53, 57, 56, 99, 57, 52, 50, 97, 54, 52, 50, 56, 55, 49, 97, 50, 98, 99, 100, 100, 57, 56, 57, 101, 98, 97, 52, 53, 50, 54, 99, 97, 50, 97, 49, 51, 48, 56, 102, 51, 55, 50, 50, 50, 97, 54, 57, 57, 99, 54, 48, 54, 57, 48, 54, 102, 55, 102, 99, 100, 52, 52, 52, 102, 102, 100, 98, 57, 48, 52, 50, 97, 56, 51, 52, 99, 55, 49, 54, 48, 50, 101, 55, 97, 57, 98, 101, 53, 101, 49, 49, 98, 49, 53, 57, 98, 52, 100, 100, 50, 97, 57, 56, 52, 49, 57, 100, 102, 49, 54, 102, 55, 52, 49, 57, 55, 99, 49, 48, 48, 98, 50, 54, 49, 98, 49, 57, 55, 97, 55, 98, 55, 101, 48, 99, 56, 99, 99, 49, 55, 56, 48, 49, 52, 99, 101, 57, 48, 50, 57, 55};
        stringliteral_t string1581 = mk_string(256, characters1583);
        ivar_18 = (test_HMAC_record_1_t)strings__make_string(len1582, string1581);
        test_HMAC_record_1_t ivar_16;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_16 = (test_HMAC_record_1_t)ivar_18;
        ivar_16->count++;
        release_test_HMAC_record_1(ivar_18);
        bytestrings__bytestring_t ivar_15;
        ivar_15 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_16);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_15;
        ivar_21->count++;
        release_bytestrings__bytestring(ivar_15);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)test_HMAC__hexhmac32((bytestrings__bytestring_t)ivar_20, (bytestrings__bytestring_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_19;
        result->count++;
        release_bytestrings__bytestring(ivar_19);

        return result;
}

extern bytestrings__bytestring_t test_HMAC__test32_4(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_20;
        test_HMAC_record_1_t ivar_10;
        uint32_t len1587 = 200;
        uint32_t characters1588[200] = {56, 51, 52, 56, 56, 97, 48, 53, 48, 51, 50, 57, 48, 53, 55, 53, 52, 99, 99, 56, 102, 99, 53, 54, 57, 100, 51, 55, 99, 97, 101, 48, 53, 102, 48, 99, 51, 55, 48, 100, 98, 54, 97, 99, 97, 97, 102, 99, 53, 54, 99, 97, 57, 97, 57, 51, 57, 56, 50, 97, 52, 54, 54, 57, 99, 99, 97, 98, 97, 54, 101, 51, 100, 49, 56, 52, 97, 49, 57, 100, 101, 52, 99, 101, 56, 48, 48, 98, 98, 54, 52, 51, 97, 51, 54, 48, 99, 49, 52, 53, 55, 50, 97, 101, 100, 98, 50, 50, 57, 55, 52, 102, 48, 99, 57, 54, 54, 98, 56, 53, 57, 100, 57, 49, 97, 100, 53, 100, 55, 49, 51, 98, 55, 97, 100, 57, 57, 57, 51, 53, 55, 57, 52, 100, 50, 50, 50, 50, 53, 55, 48, 97, 51, 49, 54, 55, 55, 51, 51, 97, 53, 51, 50, 101, 100, 97, 48, 98, 48, 101, 98, 49, 55, 53, 49, 48, 98, 99, 98, 53, 56, 49, 101, 52, 57, 57, 53, 52, 52, 48, 49, 48, 49, 97, 48, 48, 101, 101, 50, 101};
        stringliteral_t string1586 = mk_string(200, characters1588);
        ivar_10 = (test_HMAC_record_1_t)strings__make_string(len1587, string1586);
        test_HMAC_record_1_t ivar_8;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_8 = (test_HMAC_record_1_t)ivar_10;
        ivar_8->count++;
        release_test_HMAC_record_1(ivar_10);
        bytestrings__bytestring_t ivar_7;
        ivar_7 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_7;
        ivar_20->count++;
        release_bytestrings__bytestring(ivar_7);
        bytestrings__bytestring_t ivar_21;
        test_HMAC_record_1_t ivar_18;
        uint32_t len1590 = 256;
        uint32_t characters1591[256] = {98, 100, 49, 49, 55, 48, 97, 102, 57, 49, 102, 100, 98, 50, 49, 54, 48, 100, 98, 51, 53, 50, 50, 101, 49, 98, 99, 51, 98, 49, 97, 51, 52, 57, 100, 54, 101, 53, 48, 52, 55, 57, 57, 50, 48, 97, 99, 53, 100, 57, 98, 101, 100, 100, 56, 97, 49, 54, 97, 55, 56, 55, 97, 51, 99, 100, 99, 50, 98, 54, 100, 50, 52, 51, 57, 50, 102, 50, 53, 53, 53, 53, 99, 99, 50, 102, 50, 48, 98, 50, 98, 97, 57, 101, 54, 98, 52, 55, 100, 100, 99, 57, 54, 99, 102, 98, 100, 54, 100, 102, 54, 54, 57, 100, 56, 55, 52, 99, 101, 50, 49, 97, 55, 53, 56, 100, 51, 99, 102, 52, 55, 48, 52, 51, 54, 50, 101, 102, 55, 55, 56, 54, 100, 57, 48, 101, 100, 54, 55, 98, 48, 49, 98, 100, 57, 49, 50, 57, 57, 57, 53, 48, 48, 53, 56, 56, 56, 53, 97, 99, 99, 100, 100, 98, 99, 102, 52, 52, 101, 51, 52, 48, 101, 100, 52, 56, 48, 55, 56, 54, 52, 50, 49, 56, 54, 53, 51, 101, 101, 55, 102, 102, 55, 50, 49, 53, 97, 97, 49, 101, 49, 55, 54, 49, 53, 55, 97, 54, 49, 49, 102, 57, 51, 55, 52, 98, 57, 56, 52, 97, 100, 55, 102, 53, 51, 101, 97, 55, 48, 97, 98, 56, 49, 98, 101, 49, 51, 49, 48, 54, 50, 55, 49, 56, 98, 97};
        stringliteral_t string1589 = mk_string(256, characters1591);
        ivar_18 = (test_HMAC_record_1_t)strings__make_string(len1590, string1589);
        test_HMAC_record_1_t ivar_16;
        //copying to test_HMAC_record_1 from test_HMAC_record_1;
        ivar_16 = (test_HMAC_record_1_t)ivar_18;
        ivar_16->count++;
        release_test_HMAC_record_1(ivar_18);
        bytestrings__bytestring_t ivar_15;
        ivar_15 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_16);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_21 = (bytestrings__bytestring_t)ivar_15;
        ivar_21->count++;
        release_bytestrings__bytestring(ivar_15);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)test_HMAC__hexhmac32((bytestrings__bytestring_t)ivar_20, (bytestrings__bytestring_t)ivar_21);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_19;
        result->count++;
        release_bytestrings__bytestring(ivar_19);

        return result;
}