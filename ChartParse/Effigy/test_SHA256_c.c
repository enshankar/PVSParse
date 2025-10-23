//Code generated using pvs2ir2c
#include "test_SHA256_c.h"

void release_test_SHA256_funtype_0(test_SHA256_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

test_SHA256_funtype_0_t copy_test_SHA256_funtype_0(test_SHA256_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_test_SHA256_funtype_0(test_SHA256_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; test_SHA256_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp1324 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp1324 == 0);
        bool_t keymatch;
        int64_t tmp1325 = mpz_cmp(data.key, i);
        keymatch = (tmp1325 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp1324 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp1324 == 0);

        int64_t tmp1325 = mpz_cmp(data.key, i);
        keymatch = (tmp1325 == 0);
                }
        return hashindex;
        }

test_SHA256_funtype_0_t dupdate_test_SHA256_funtype_0(test_SHA256_funtype_0_t a, mpz_ptr_t i, uint32_t v){
        test_SHA256_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (test_SHA256_funtype_0_htbl_t)safe_malloc(sizeof(struct test_SHA256_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (test_SHA256_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct test_SHA256_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        test_SHA256_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                test_SHA256_funtype_0_hashentry_t * new_data = (test_SHA256_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct test_SHA256_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp1326 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp1326 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp1327 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp1327 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp1328 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp1328 == 0);
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
        uint32_t hashindex = lookup_test_SHA256_funtype_0(htbl, i, ihash);
        test_SHA256_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp1329 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp1329 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;tempvalue = (uint32_t)v;};
        return a;

}

test_SHA256_funtype_0_t update_test_SHA256_funtype_0(test_SHA256_funtype_0_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_test_SHA256_funtype_0(a, i, v);
            } else {
                test_SHA256_funtype_0_t x = copy_test_SHA256_funtype_0(a);
                x->count--;
                return dupdate_test_SHA256_funtype_0(x, i, v);
            }}

bool_t equal_test_SHA256_funtype_0(test_SHA256_funtype_0_t x, test_SHA256_funtype_0_t y){
        return false;}


test_SHA256_record_1_t new_test_SHA256_record_1(void){
        test_SHA256_record_1_t tmp = (test_SHA256_record_1_t) safe_malloc(sizeof(struct test_SHA256_record_1_s));
        tmp->count = 1;
        return tmp;}

void release_test_SHA256_record_1(test_SHA256_record_1_t x){
        x->count--;
        if (x->count <= 0){
         release_test_SHA256_funtype_0(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_test_SHA256_record_1_ptr(pointer_t x, type_actual_t T){
        release_test_SHA256_record_1((test_SHA256_record_1_t)x);
}

test_SHA256_record_1_t copy_test_SHA256_record_1(test_SHA256_record_1_t x){
        test_SHA256_record_1_t y = new_test_SHA256_record_1();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_test_SHA256_record_1(test_SHA256_record_1_t x, test_SHA256_record_1_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_test_SHA256_funtype_0(x->seq, y->seq);
        return tmp;}

bool_t equal_test_SHA256_record_1_ptr(pointer_t x, pointer_t y, actual_test_SHA256_record_1_t T){
        return equal_test_SHA256_record_1((test_SHA256_record_1_t)x, (test_SHA256_record_1_t)y);
}

actual_test_SHA256_record_1_t actual_test_SHA256_record_1(){
        actual_test_SHA256_record_1_t new = (actual_test_SHA256_record_1_t)safe_malloc(sizeof(struct actual_test_SHA256_record_1_s));
        new->equal_ptr = (equal_ptr_t)(*equal_test_SHA256_record_1_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_test_SHA256_record_1_ptr);
 

 
        return new;
 };

test_SHA256_record_1_t update_test_SHA256_record_1_length(test_SHA256_record_1_t x, mpz_ptr_t v){
        test_SHA256_record_1_t y;
        if (x->count == 1){y = x;}
        else {y = copy_test_SHA256_record_1(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

test_SHA256_record_1_t update_test_SHA256_record_1_seq(test_SHA256_record_1_t x, test_SHA256_funtype_0_t v){
        test_SHA256_record_1_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_test_SHA256_funtype_0(x->seq);};}
        else {y = copy_test_SHA256_record_1(x); x->count--; y->seq->count--;};
        y->seq = (test_SHA256_funtype_0_t)v;
        return y;}



extern bytestrings__bytestring_t test_SHA256__test1(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_11;
        test_SHA256_record_1_t ivar_9;
        uint32_t len1331 = 2;
        uint32_t characters1332[2] = {48, 48};
        stringliteral_t string1330 = mk_string(2, characters1332);
        ivar_9 = (test_SHA256_record_1_t)strings__make_string(len1331, string1330);
        test_SHA256_record_1_t ivar_7;
        //copying to test_SHA256_record_1 from test_SHA256_record_1;
        ivar_7 = (test_SHA256_record_1_t)ivar_9;
        ivar_7->count++;
        release_test_SHA256_record_1(ivar_9);
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_6;
        ivar_11->count++;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)SHA256__hexsha256message((SHA256_record_4_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_10;
        result->count++;
        release_bytestrings__bytestring(ivar_10);

        return result;
}

extern bytestrings__bytestring_t test_SHA256__test2(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_11;
        test_SHA256_record_1_t ivar_9;
        uint32_t len1335 = 2;
        uint32_t characters1336[2] = {100, 51};
        stringliteral_t string1334 = mk_string(2, characters1336);
        ivar_9 = (test_SHA256_record_1_t)strings__make_string(len1335, string1334);
        test_SHA256_record_1_t ivar_7;
        //copying to test_SHA256_record_1 from test_SHA256_record_1;
        ivar_7 = (test_SHA256_record_1_t)ivar_9;
        ivar_7->count++;
        release_test_SHA256_record_1(ivar_9);
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_6;
        ivar_11->count++;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)SHA256__hexsha256message((SHA256_record_4_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_10;
        result->count++;
        release_bytestrings__bytestring(ivar_10);

        return result;
}

extern bytestrings__bytestring_t test_SHA256__test3(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_11;
        test_SHA256_record_1_t ivar_9;
        uint32_t len1339 = 4;
        uint32_t characters1340[4] = {49, 49, 97, 102};
        stringliteral_t string1338 = mk_string(4, characters1340);
        ivar_9 = (test_SHA256_record_1_t)strings__make_string(len1339, string1338);
        test_SHA256_record_1_t ivar_7;
        //copying to test_SHA256_record_1 from test_SHA256_record_1;
        ivar_7 = (test_SHA256_record_1_t)ivar_9;
        ivar_7->count++;
        release_test_SHA256_record_1(ivar_9);
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_6;
        ivar_11->count++;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)SHA256__hexsha256message((SHA256_record_4_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_10;
        result->count++;
        release_bytestrings__bytestring(ivar_10);

        return result;
}

extern bytestrings__bytestring_t test_SHA256__test4(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_11;
        test_SHA256_record_1_t ivar_9;
        uint32_t len1343 = 6;
        uint32_t characters1344[6] = {98, 52, 49, 57, 48, 101};
        stringliteral_t string1342 = mk_string(6, characters1344);
        ivar_9 = (test_SHA256_record_1_t)strings__make_string(len1343, string1342);
        test_SHA256_record_1_t ivar_7;
        //copying to test_SHA256_record_1 from test_SHA256_record_1;
        ivar_7 = (test_SHA256_record_1_t)ivar_9;
        ivar_7->count++;
        release_test_SHA256_record_1(ivar_9);
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_6;
        ivar_11->count++;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)SHA256__hexsha256message((SHA256_record_4_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_10;
        result->count++;
        release_bytestrings__bytestring(ivar_10);

        return result;
}

extern bytestrings__bytestring_t test_SHA256__test5(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_11;
        test_SHA256_record_1_t ivar_9;
        uint32_t len1347 = 8;
        uint32_t characters1348[8] = {55, 52, 98, 97, 50, 53, 50, 49};
        stringliteral_t string1346 = mk_string(8, characters1348);
        ivar_9 = (test_SHA256_record_1_t)strings__make_string(len1347, string1346);
        test_SHA256_record_1_t ivar_7;
        //copying to test_SHA256_record_1 from test_SHA256_record_1;
        ivar_7 = (test_SHA256_record_1_t)ivar_9;
        ivar_7->count++;
        release_test_SHA256_record_1(ivar_9);
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_6;
        ivar_11->count++;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)SHA256__hexsha256message((SHA256_record_4_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_10;
        result->count++;
        release_bytestrings__bytestring(ivar_10);

        return result;
}

extern bytestrings__bytestring_t test_SHA256__test6(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_11;
        test_SHA256_record_1_t ivar_9;
        uint32_t len1351 = 10;
        uint32_t characters1352[10] = {99, 50, 57, 57, 50, 48, 57, 54, 56, 50};
        stringliteral_t string1350 = mk_string(10, characters1352);
        ivar_9 = (test_SHA256_record_1_t)strings__make_string(len1351, string1350);
        test_SHA256_record_1_t ivar_7;
        //copying to test_SHA256_record_1 from test_SHA256_record_1;
        ivar_7 = (test_SHA256_record_1_t)ivar_9;
        ivar_7->count++;
        release_test_SHA256_record_1(ivar_9);
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_6;
        ivar_11->count++;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)SHA256__hexsha256message((SHA256_record_4_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_10;
        result->count++;
        release_bytestrings__bytestring(ivar_10);

        return result;
}

extern bytestrings__bytestring_t test_SHA256__test7(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_11;
        test_SHA256_record_1_t ivar_9;
        uint32_t len1355 = 12;
        uint32_t characters1356[12] = {101, 49, 100, 99, 55, 50, 52, 100, 53, 54, 50, 49};
        stringliteral_t string1354 = mk_string(12, characters1356);
        ivar_9 = (test_SHA256_record_1_t)strings__make_string(len1355, string1354);
        test_SHA256_record_1_t ivar_7;
        //copying to test_SHA256_record_1 from test_SHA256_record_1;
        ivar_7 = (test_SHA256_record_1_t)ivar_9;
        ivar_7->count++;
        release_test_SHA256_record_1(ivar_9);
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_6;
        ivar_11->count++;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)SHA256__hexsha256message((SHA256_record_4_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_10;
        result->count++;
        release_bytestrings__bytestring(ivar_10);

        return result;
}

extern bytestrings__bytestring_t test_SHA256__test8(void){
        bytestrings__bytestring_t result;
        bytestrings__bytestring_t ivar_11;
        test_SHA256_record_1_t ivar_9;
        uint32_t len1359 = 14;
        uint32_t characters1360[14] = {48, 54, 101, 48, 55, 54, 102, 53, 97, 52, 52, 50, 100, 53};
        stringliteral_t string1358 = mk_string(14, characters1360);
        ivar_9 = (test_SHA256_record_1_t)strings__make_string(len1359, string1358);
        test_SHA256_record_1_t ivar_7;
        //copying to test_SHA256_record_1 from test_SHA256_record_1;
        ivar_7 = (test_SHA256_record_1_t)ivar_9;
        ivar_7->count++;
        release_test_SHA256_record_1(ivar_9);
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_6;
        ivar_11->count++;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_10;
        ivar_10 = (bytestrings__bytestring_t)SHA256__hexsha256message((SHA256_record_4_t)ivar_11);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_10;
        result->count++;
        release_bytestrings__bytestring(ivar_10);

        return result;
}