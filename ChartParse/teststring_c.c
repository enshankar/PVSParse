//Code generated using pvs2ir2c
#include "teststring_c.h"

void release_teststring_funtype_0(teststring_funtype_0_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

teststring_funtype_0_t copy_teststring_funtype_0(teststring_funtype_0_t x){return x->ftbl->cptr(x);}


teststring_record_1_t new_teststring_record_1(void){
        teststring_record_1_t tmp = (teststring_record_1_t) safe_malloc(sizeof(struct teststring_record_1_s));
        tmp->count = 1;
        return tmp;}

void release_teststring_record_1(teststring_record_1_t x){
        x->count--;
        if (x->count <= 0){
         release_teststring_funtype_0(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

teststring_record_1_t copy_teststring_record_1(teststring_record_1_t x){
        teststring_record_1_t y = new_teststring_record_1();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_teststring_record_1(teststring_record_1_t x, teststring_record_1_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_teststring_funtype_0(x->seq, y->seq);
        return tmp;}

teststring_record_1_t update_teststring_record_1_length(teststring_record_1_t x, mpz_t v){
        teststring_record_1_t y;
        if (x->count == 1){y = x;}
        else {y = copy_teststring_record_1(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

teststring_record_1_t update_teststring_record_1_seq(teststring_record_1_t x, teststring_funtype_0_t v){
        teststring_record_1_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_teststring_funtype_0(x->seq);};}
        else {y = copy_teststring_record_1(x); x->count--; y->seq->count--;};
        y->seq = (teststring_funtype_0_t)v;
        return y;}



extern string_t teststring_teststring(void){
        string_t result;
        string_t result = (string_t)mk_string("test");

        return result;
}

extern uint8_t teststring_test1(void){
        uint8_t result;
        char_t ivar_10;
        /* T */ type_actual_t ivar_4;
        ivar_4 = (type_actual_t)actual_#<ir-chartype >;
        string_t ivar_6;
        string_t ivar_6 = (string_t)mk_string("A");
        finite_sequences_finseq_t ivar_5;
        //copying to finite_sequences_finseq from string;
        ivar_5 = (teststring_record_1_t)ivar_6;
        ivar_5->count++;
        char_t ivar_3;
        ivar_3 = (char_t)finite_sequences_extract1((finite_sequences_closure_15_t)ivar_4, (finite_sequences_finseq_t)ivar_5);
        //copying to char from char;
        ivar_10 = (char_t)ivar_3;
        char_t ivar_8;
        //copying to char from char;
        ivar_8 = (char_t)ivar_10;
        result = (uint8_t)character_adt_character_adt_code((character_adt_character_adt_t)ivar_8);

        return result;
}

extern char_t teststring_test2(void){
        char_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)33;
        char_t ivar_2;
        ivar_2 = (char_t)character_adt_char((uint8_t)ivar_3);
        //copying to char from char;
        result = (char_t)ivar_2;

        return result;
}

extern mpz_ptr_t teststring_test3(void){
        mpz_ptr_t result;
        string_t ivar_1;
        ivar_1 = (string_t)teststring_teststring();
        result = safe_malloc(sizeof(mpz_t));
        mpz_init(result);
        mpz_set(result, nil);
        release_string(ivar_1);

        return result;
}