//Code generated using pvs2ir2c
#include "cstring_test_c.h"


record_0_t new_record_0(void){
        record_0_t tmp = (record_0_t) safe_malloc(sizeof(struct record_0_s));
        tmp->count = 1;
        return tmp;}

void release_record_0(record_0_t x){
switch (x->record_0_index) {
case 0:  release_character_adt_char((character_adt_char_t) x); break;
}}

record_0_t copy_record_0(record_0_t x){
        record_0_t y = new_record_0();
        y->character_adt_character_adt_index = (uint8_t)x->character_adt_character_adt_index;
        y->count = 1;
        return y;}

bool_t equal_record_0(record_0_t x, record_0_t y){
        bool_t tmp = x->record_0_index == y->record_0_index;
        switch  (x->record_0_index) {
                case 0: tmp = tmp && equal_character_adt_char((character_adt_char_t) x, (character_adt_char_t) y); break;
        }
        return tmp;
}

record_0_t update_record_0_character_adt_character_adt_index(record_0_t x, uint8_t v){
        record_0_t y;
        if (x->count == 1){y = x;}
        else {y = copy_record_0(x); x->count--;};
        y->character_adt_character_adt_index = (uint8_t)v;
        return y;}



void release_cstring_test_funtype_1(cstring_test_funtype_1_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

cstring_test_funtype_1_t copy_cstring_test_funtype_1(cstring_test_funtype_1_t x){return x->ftbl->cptr(x);}


cstring_test_record_2_t new_cstring_test_record_2(void){
        cstring_test_record_2_t tmp = (cstring_test_record_2_t) safe_malloc(sizeof(struct cstring_test_record_2_s));
        tmp->count = 1;
        return tmp;}

void release_cstring_test_record_2(cstring_test_record_2_t x){
        x->count--;
        if (x->count <= 0){
         release_cstring_test_funtype_1(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstring_test_record_2_t copy_cstring_test_record_2(cstring_test_record_2_t x){
        cstring_test_record_2_t y = new_cstring_test_record_2();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_cstring_test_record_2(cstring_test_record_2_t x, cstring_test_record_2_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_cstring_test_funtype_1(x->seq, y->seq);
        return tmp;}

cstring_test_record_2_t update_cstring_test_record_2_length(cstring_test_record_2_t x, mpz_t v){
        cstring_test_record_2_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstring_test_record_2(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

cstring_test_record_2_t update_cstring_test_record_2_seq(cstring_test_record_2_t x, cstring_test_funtype_1_t v){
        cstring_test_record_2_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_cstring_test_funtype_1(x->seq);};}
        else {y = copy_cstring_test_record_2(x); x->count--; y->seq->count--;};
        y->seq = (cstring_test_funtype_1_t)v;
        return y;}



void release_cstring_test_funtype_3(cstring_test_funtype_3_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

cstring_test_funtype_3_t copy_cstring_test_funtype_3(cstring_test_funtype_3_t x){return x->ftbl->cptr(x);}

extern cstring_cstring_t cstring_test_A(void){
        cstring_cstring_t result;
        finite_sequences_finseq_t ivar_91;
        /* T */ type_actual_t ivar_85;
        ivar_85 = (type_actual_t)actual_#<ir-typename >;
        list_adt_list_adt_t ivar_86;
        /* T */ type_actual_t ivar_80;
        ivar_80 = (type_actual_t)actual_#<ir-typename >;
        character_adt_character_adt_t ivar_83;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)97;
        character_adt_character_adt_t ivar_6;
        ivar_6 = (character_adt_character_adt_t)character_adt_char((uint8_t)ivar_7);
        //copying to character_adt_character_adt from character_adt_character_adt;
        ivar_83 = (character_adt_character_adt_t)ivar_6;
        ivar_83->count++;
        release_character_adt_character_adt(ivar_6);
        list_adt_T_t ivar_81;
        //copying to list_adt_T from character_adt_character_adt;
        ivar_81 = (nil_t)ivar_83;
        release_record_0(ivar_83);
        list_adt_list_adt_t ivar_82;
        /* T */ type_actual_t ivar_75;
        ivar_75 = (type_actual_t)actual_#<ir-typename >;
        record_0_t ivar_78;
        uint8_t ivar_12;
        ivar_12 = (uint8_t)98;
        record_0_t ivar_11;
        ivar_11 = (record_0_t)character_adt_char((uint8_t)ivar_12);
        //copying to record_0 from record_0;
        ivar_78 = (record_0_t)ivar_11;
        ivar_78->count++;
        release_record_0(ivar_11);
        list_adt_T_t ivar_76;
        //copying to list_adt_T from record_0;
        ivar_76 = (nil_t)ivar_78;
        release_record_0(ivar_78);
        list_adt_list_adt_t ivar_77;
        /* T */ type_actual_t ivar_70;
        ivar_70 = (type_actual_t)actual_#<ir-typename >;
        record_0_t ivar_73;
        uint8_t ivar_17;
        ivar_17 = (uint8_t)99;
        record_0_t ivar_16;
        ivar_16 = (record_0_t)character_adt_char((uint8_t)ivar_17);
        //copying to record_0 from record_0;
        ivar_73 = (record_0_t)ivar_16;
        ivar_73->count++;
        release_record_0(ivar_16);
        list_adt_T_t ivar_71;
        //copying to list_adt_T from record_0;
        ivar_71 = (nil_t)ivar_73;
        release_record_0(ivar_73);
        list_adt_list_adt_t ivar_72;
        /* T */ type_actual_t ivar_65;
        ivar_65 = (type_actual_t)actual_#<ir-typename >;
        record_0_t ivar_68;
        uint8_t ivar_22;
        ivar_22 = (uint8_t)100;
        record_0_t ivar_21;
        ivar_21 = (record_0_t)character_adt_char((uint8_t)ivar_22);
        //copying to record_0 from record_0;
        ivar_68 = (record_0_t)ivar_21;
        ivar_68->count++;
        release_record_0(ivar_21);
        list_adt_T_t ivar_66;
        //copying to list_adt_T from record_0;
        ivar_66 = (nil_t)ivar_68;
        release_record_0(ivar_68);
        list_adt_list_adt_t ivar_67;
        /* T */ type_actual_t ivar_60;
        ivar_60 = (type_actual_t)actual_#<ir-typename >;
        record_0_t ivar_63;
        uint8_t ivar_27;
        ivar_27 = (uint8_t)49;
        record_0_t ivar_26;
        ivar_26 = (record_0_t)character_adt_char((uint8_t)ivar_27);
        //copying to record_0 from record_0;
        ivar_63 = (record_0_t)ivar_26;
        ivar_63->count++;
        release_record_0(ivar_26);
        list_adt_T_t ivar_61;
        //copying to list_adt_T from record_0;
        ivar_61 = (nil_t)ivar_63;
        release_record_0(ivar_63);
        list_adt_list_adt_t ivar_62;
        /* T */ type_actual_t ivar_55;
        ivar_55 = (type_actual_t)actual_#<ir-typename >;
        record_0_t ivar_58;
        uint8_t ivar_32;
        ivar_32 = (uint8_t)50;
        record_0_t ivar_31;
        ivar_31 = (record_0_t)character_adt_char((uint8_t)ivar_32);
        //copying to record_0 from record_0;
        ivar_58 = (record_0_t)ivar_31;
        ivar_58->count++;
        release_record_0(ivar_31);
        list_adt_T_t ivar_56;
        //copying to list_adt_T from record_0;
        ivar_56 = (nil_t)ivar_58;
        release_record_0(ivar_58);
        list_adt_list_adt_t ivar_57;
        /* T */ type_actual_t ivar_50;
        ivar_50 = (type_actual_t)actual_#<ir-typename >;
        record_0_t ivar_53;
        uint8_t ivar_37;
        ivar_37 = (uint8_t)51;
        record_0_t ivar_36;
        ivar_36 = (record_0_t)character_adt_char((uint8_t)ivar_37);
        //copying to record_0 from record_0;
        ivar_53 = (record_0_t)ivar_36;
        ivar_53->count++;
        release_record_0(ivar_36);
        list_adt_T_t ivar_51;
        //copying to list_adt_T from record_0;
        ivar_51 = (nil_t)ivar_53;
        release_record_0(ivar_53);
        list_adt_list_adt_t ivar_52;
        /* T */ type_actual_t ivar_45;
        ivar_45 = (type_actual_t)actual_#<ir-typename >;
        record_0_t ivar_48;
        uint8_t ivar_42;
        ivar_42 = (uint8_t)52;
        record_0_t ivar_41;
        ivar_41 = (record_0_t)character_adt_char((uint8_t)ivar_42);
        //copying to record_0 from record_0;
        ivar_48 = (record_0_t)ivar_41;
        ivar_48->count++;
        release_record_0(ivar_41);
        list_adt_T_t ivar_46;
        //copying to list_adt_T from record_0;
        ivar_46 = (nil_t)ivar_48;
        release_record_0(ivar_48);
        list_adt_list_adt_t ivar_47;
        /* T */ type_actual_t ivar_43;
        ivar_43 = (type_actual_t)actual_#<ir-typename >;
        ivar_47 = (list_adt_list_adt_t)list_adt_null();
        list_adt_list_adt_t ivar_44;
        ivar_44 = (list_adt_list_adt_t)list_adt_cons((list_adt_T_t)ivar_45, (list_adt_list_adt_t)ivar_46);
        //copying to list_adt_list_adt from list_adt_list_adt;
        ivar_52 = (list_adt_list_adt_t)ivar_44;
        ivar_52->count++;
        release_list_adt_list_adt(ivar_44);
        list_adt_list_adt_t ivar_49;
        ivar_49 = (list_adt_list_adt_t)list_adt_cons((list_adt_T_t)ivar_50, (list_adt_list_adt_t)ivar_51);
        //copying to list_adt_list_adt from list_adt_list_adt;
        ivar_57 = (list_adt_list_adt_t)ivar_49;
        ivar_57->count++;
        release_list_adt_list_adt(ivar_49);
        list_adt_list_adt_t ivar_54;
        ivar_54 = (list_adt_list_adt_t)list_adt_cons((list_adt_T_t)ivar_55, (list_adt_list_adt_t)ivar_56);
        //copying to list_adt_list_adt from list_adt_list_adt;
        ivar_62 = (list_adt_list_adt_t)ivar_54;
        ivar_62->count++;
        release_list_adt_list_adt(ivar_54);
        list_adt_list_adt_t ivar_59;
        ivar_59 = (list_adt_list_adt_t)list_adt_cons((list_adt_T_t)ivar_60, (list_adt_list_adt_t)ivar_61);
        //copying to list_adt_list_adt from list_adt_list_adt;
        ivar_67 = (list_adt_list_adt_t)ivar_59;
        ivar_67->count++;
        release_list_adt_list_adt(ivar_59);
        list_adt_list_adt_t ivar_64;
        ivar_64 = (list_adt_list_adt_t)list_adt_cons((list_adt_T_t)ivar_65, (list_adt_list_adt_t)ivar_66);
        //copying to list_adt_list_adt from list_adt_list_adt;
        ivar_72 = (list_adt_list_adt_t)ivar_64;
        ivar_72->count++;
        release_list_adt_list_adt(ivar_64);
        list_adt_list_adt_t ivar_69;
        ivar_69 = (list_adt_list_adt_t)list_adt_cons((list_adt_T_t)ivar_70, (list_adt_list_adt_t)ivar_71);
        //copying to list_adt_list_adt from list_adt_list_adt;
        ivar_77 = (list_adt_list_adt_t)ivar_69;
        ivar_77->count++;
        release_list_adt_list_adt(ivar_69);
        list_adt_list_adt_t ivar_74;
        ivar_74 = (list_adt_list_adt_t)list_adt_cons((list_adt_T_t)ivar_75, (list_adt_list_adt_t)ivar_76);
        //copying to list_adt_list_adt from list_adt_list_adt;
        ivar_82 = (list_adt_list_adt_t)ivar_74;
        ivar_82->count++;
        release_list_adt_list_adt(ivar_74);
        list_adt_list_adt_t ivar_79;
        ivar_79 = (list_adt_list_adt_t)list_adt_cons((list_adt_T_t)ivar_80, (list_adt_list_adt_t)ivar_81);
        //copying to list_adt_list_adt from list_adt_list_adt;
        ivar_86 = (list_adt_list_adt_t)ivar_79;
        ivar_86->count++;
        release_list_adt_list_adt(ivar_79);
        finite_sequences_finseq_t ivar_84;
        ivar_84 = (finite_sequences_finseq_t)list2finseq_list2finseq((type_actual_t)ivar_85, (list_adt_list_adt_t)ivar_86);
        //copying to finite_sequences_finseq from finite_sequences_finseq;
        ivar_91 = (finite_sequences_finseq_t)ivar_84;
        ivar_91->count++;
        release_finite_sequences_finseq(ivar_84, finite_sequences_T);
        strings_string_t ivar_88;
        //copying to strings_string from finite_sequences_finseq;
        ivar_88 = new_cstring_test_record_2();
        mpz_mk_set(ivar_88->length, ivar_91->length);
        ivar_88->seq = (cstring_test_funtype_1_t)ivar_91->seq;
        ivar_88->seq->count++;
        release_finite_sequences_finseq(ivar_91, finite_sequences_T);
        cstring_cstring_t ivar_87;
        ivar_87 = (cstring_cstring_t)cstring_mk_cstring((strings_string_t)ivar_88);
        //copying to cstring_cstring from cstring_cstring;
        result = (cstring_cstring_t)ivar_87;

        return result;
}

extern cstring_cstring_t cstring_test_B(void){
        cstring_cstring_t result;
        finite_sequences_finseq_t ivar_90;
        /* T */ type_actual_t ivar_85;
        ivar_85 = (type_actual_t)actual_#<ir-typename >;
        list_adt_list_adt_t ivar_86;
        /* T */ type_actual_t ivar_80;
        ivar_80 = (type_actual_t)actual_#<ir-typename >;
        record_0_t ivar_83;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)101;
        record_0_t ivar_6;
        ivar_6 = (record_0_t)character_adt_char((uint8_t)ivar_7);
        //copying to record_0 from record_0;
        ivar_83 = (record_0_t)ivar_6;
        ivar_83->count++;
        release_record_0(ivar_6);
        list_adt_T_t ivar_81;
        //copying to list_adt_T from record_0;
        ivar_81 = (nil_t)ivar_83;
        release_record_0(ivar_83);
        list_adt_list_adt_t ivar_82;
        /* T */ type_actual_t ivar_75;
        ivar_75 = (type_actual_t)actual_#<ir-typename >;
        record_0_t ivar_78;
        uint8_t ivar_12;
        ivar_12 = (uint8_t)102;
        record_0_t ivar_11;
        ivar_11 = (record_0_t)character_adt_char((uint8_t)ivar_12);
        //copying to record_0 from record_0;
        ivar_78 = (record_0_t)ivar_11;
        ivar_78->count++;
        release_record_0(ivar_11);
        list_adt_T_t ivar_76;
        //copying to list_adt_T from record_0;
        ivar_76 = (nil_t)ivar_78;
        release_record_0(ivar_78);
        list_adt_list_adt_t ivar_77;
        /* T */ type_actual_t ivar_70;
        ivar_70 = (type_actual_t)actual_#<ir-typename >;
        record_0_t ivar_73;
        uint8_t ivar_17;
        ivar_17 = (uint8_t)103;
        record_0_t ivar_16;
        ivar_16 = (record_0_t)character_adt_char((uint8_t)ivar_17);
        //copying to record_0 from record_0;
        ivar_73 = (record_0_t)ivar_16;
        ivar_73->count++;
        release_record_0(ivar_16);
        list_adt_T_t ivar_71;
        //copying to list_adt_T from record_0;
        ivar_71 = (nil_t)ivar_73;
        release_record_0(ivar_73);
        list_adt_list_adt_t ivar_72;
        /* T */ type_actual_t ivar_65;
        ivar_65 = (type_actual_t)actual_#<ir-typename >;
        record_0_t ivar_68;
        uint8_t ivar_22;
        ivar_22 = (uint8_t)104;
        record_0_t ivar_21;
        ivar_21 = (record_0_t)character_adt_char((uint8_t)ivar_22);
        //copying to record_0 from record_0;
        ivar_68 = (record_0_t)ivar_21;
        ivar_68->count++;
        release_record_0(ivar_21);
        list_adt_T_t ivar_66;
        //copying to list_adt_T from record_0;
        ivar_66 = (nil_t)ivar_68;
        release_record_0(ivar_68);
        list_adt_list_adt_t ivar_67;
        /* T */ type_actual_t ivar_60;
        ivar_60 = (type_actual_t)actual_#<ir-typename >;
        record_0_t ivar_63;
        uint8_t ivar_27;
        ivar_27 = (uint8_t)53;
        record_0_t ivar_26;
        ivar_26 = (record_0_t)character_adt_char((uint8_t)ivar_27);
        //copying to record_0 from record_0;
        ivar_63 = (record_0_t)ivar_26;
        ivar_63->count++;
        release_record_0(ivar_26);
        list_adt_T_t ivar_61;
        //copying to list_adt_T from record_0;
        ivar_61 = (nil_t)ivar_63;
        release_record_0(ivar_63);
        list_adt_list_adt_t ivar_62;
        /* T */ type_actual_t ivar_55;
        ivar_55 = (type_actual_t)actual_#<ir-typename >;
        record_0_t ivar_58;
        uint8_t ivar_32;
        ivar_32 = (uint8_t)54;
        record_0_t ivar_31;
        ivar_31 = (record_0_t)character_adt_char((uint8_t)ivar_32);
        //copying to record_0 from record_0;
        ivar_58 = (record_0_t)ivar_31;
        ivar_58->count++;
        release_record_0(ivar_31);
        list_adt_T_t ivar_56;
        //copying to list_adt_T from record_0;
        ivar_56 = (nil_t)ivar_58;
        release_record_0(ivar_58);
        list_adt_list_adt_t ivar_57;
        /* T */ type_actual_t ivar_50;
        ivar_50 = (type_actual_t)actual_#<ir-typename >;
        record_0_t ivar_53;
        uint8_t ivar_37;
        ivar_37 = (uint8_t)55;
        record_0_t ivar_36;
        ivar_36 = (record_0_t)character_adt_char((uint8_t)ivar_37);
        //copying to record_0 from record_0;
        ivar_53 = (record_0_t)ivar_36;
        ivar_53->count++;
        release_record_0(ivar_36);
        list_adt_T_t ivar_51;
        //copying to list_adt_T from record_0;
        ivar_51 = (nil_t)ivar_53;
        release_record_0(ivar_53);
        list_adt_list_adt_t ivar_52;
        /* T */ type_actual_t ivar_45;
        ivar_45 = (type_actual_t)actual_#<ir-typename >;
        record_0_t ivar_48;
        uint8_t ivar_42;
        ivar_42 = (uint8_t)56;
        record_0_t ivar_41;
        ivar_41 = (record_0_t)character_adt_char((uint8_t)ivar_42);
        //copying to record_0 from record_0;
        ivar_48 = (record_0_t)ivar_41;
        ivar_48->count++;
        release_record_0(ivar_41);
        list_adt_T_t ivar_46;
        //copying to list_adt_T from record_0;
        ivar_46 = (nil_t)ivar_48;
        release_record_0(ivar_48);
        list_adt_list_adt_t ivar_47;
        /* T */ type_actual_t ivar_43;
        ivar_43 = (type_actual_t)actual_#<ir-typename >;
        ivar_47 = (list_adt_list_adt_t)list_adt_null();
        list_adt_list_adt_t ivar_44;
        ivar_44 = (list_adt_list_adt_t)list_adt_cons((list_adt_T_t)ivar_45, (list_adt_list_adt_t)ivar_46);
        //copying to list_adt_list_adt from list_adt_list_adt;
        ivar_52 = (list_adt_list_adt_t)ivar_44;
        ivar_52->count++;
        release_list_adt_list_adt(ivar_44);
        list_adt_list_adt_t ivar_49;
        ivar_49 = (list_adt_list_adt_t)list_adt_cons((list_adt_T_t)ivar_50, (list_adt_list_adt_t)ivar_51);
        //copying to list_adt_list_adt from list_adt_list_adt;
        ivar_57 = (list_adt_list_adt_t)ivar_49;
        ivar_57->count++;
        release_list_adt_list_adt(ivar_49);
        list_adt_list_adt_t ivar_54;
        ivar_54 = (list_adt_list_adt_t)list_adt_cons((list_adt_T_t)ivar_55, (list_adt_list_adt_t)ivar_56);
        //copying to list_adt_list_adt from list_adt_list_adt;
        ivar_62 = (list_adt_list_adt_t)ivar_54;
        ivar_62->count++;
        release_list_adt_list_adt(ivar_54);
        list_adt_list_adt_t ivar_59;
        ivar_59 = (list_adt_list_adt_t)list_adt_cons((list_adt_T_t)ivar_60, (list_adt_list_adt_t)ivar_61);
        //copying to list_adt_list_adt from list_adt_list_adt;
        ivar_67 = (list_adt_list_adt_t)ivar_59;
        ivar_67->count++;
        release_list_adt_list_adt(ivar_59);
        list_adt_list_adt_t ivar_64;
        ivar_64 = (list_adt_list_adt_t)list_adt_cons((list_adt_T_t)ivar_65, (list_adt_list_adt_t)ivar_66);
        //copying to list_adt_list_adt from list_adt_list_adt;
        ivar_72 = (list_adt_list_adt_t)ivar_64;
        ivar_72->count++;
        release_list_adt_list_adt(ivar_64);
        list_adt_list_adt_t ivar_69;
        ivar_69 = (list_adt_list_adt_t)list_adt_cons((list_adt_T_t)ivar_70, (list_adt_list_adt_t)ivar_71);
        //copying to list_adt_list_adt from list_adt_list_adt;
        ivar_77 = (list_adt_list_adt_t)ivar_69;
        ivar_77->count++;
        release_list_adt_list_adt(ivar_69);
        list_adt_list_adt_t ivar_74;
        ivar_74 = (list_adt_list_adt_t)list_adt_cons((list_adt_T_t)ivar_75, (list_adt_list_adt_t)ivar_76);
        //copying to list_adt_list_adt from list_adt_list_adt;
        ivar_82 = (list_adt_list_adt_t)ivar_74;
        ivar_82->count++;
        release_list_adt_list_adt(ivar_74);
        list_adt_list_adt_t ivar_79;
        ivar_79 = (list_adt_list_adt_t)list_adt_cons((list_adt_T_t)ivar_80, (list_adt_list_adt_t)ivar_81);
        //copying to list_adt_list_adt from list_adt_list_adt;
        ivar_86 = (list_adt_list_adt_t)ivar_79;
        ivar_86->count++;
        release_list_adt_list_adt(ivar_79);
        finite_sequences_finseq_t ivar_84;
        ivar_84 = (finite_sequences_finseq_t)list2finseq_list2finseq((type_actual_t)ivar_85, (list_adt_list_adt_t)ivar_86);
        //copying to finite_sequences_finseq from finite_sequences_finseq;
        ivar_90 = (finite_sequences_finseq_t)ivar_84;
        ivar_90->count++;
        release_finite_sequences_finseq(ivar_84, finite_sequences_T);
        cstring_test_record_2_t ivar_88;
        //copying to cstring_test_record_2 from finite_sequences_finseq;
        ivar_88 = new_cstring_test_record_2();
        mpz_mk_set(ivar_88->length, ivar_90->length);
        ivar_88->seq = (cstring_test_funtype_1_t)ivar_90->seq;
        ivar_88->seq->count++;
        release_finite_sequences_finseq(ivar_90, finite_sequences_T);
        cstring_cstring_t ivar_87;
        ivar_87 = (cstring_cstring_t)cstring_mk_cstring((strings_string_t)ivar_88);
        //copying to cstring_cstring from cstring_cstring;
        result = (cstring_cstring_t)ivar_87;

        return result;
}

extern uint8_t cstring_test_test_code(void){
        uint8_t result;
        cstring_cchar_t ivar_23;
        cstring_cstring_t ivar_5;
        ivar_5 = (cstring_cstring_t)cstring_test_A();
        uint8_t ivar_21;
        ivar_21 = (uint8_t)0;
        uint16_t ivar_6;
        //copying to uint16 from uint8;
        ivar_6 = (uint16_t)ivar_21;
        cstring_cchar_t ivar_4;
        ivar_4 = (cstring_cchar_t)cstring_char((cstring_cstring_t)ivar_5, (uint16_t)ivar_6);
        //copying to cstring_cchar from cstring_cchar;
        ivar_23 = (cstring_cchar_t)ivar_4;
        result = (uint8_t)cstring_code((cstring_cchar_t)ivar_23);

        return result;
}

extern cstring_cstring_t cstring_test_test_empty(void){
        cstring_cstring_t result;
        result = (cstring_cstring_t)cstring_empty();

        return result;
}

extern uint16_t cstring_test_test_length(void){
        uint16_t result;
        cstring_cstring_t ivar_3;
        ivar_3 = (cstring_cstring_t)cstring_test_A();
        result = (uint16_t)cstring_length((cstring_cstring_t)ivar_3);

        return result;
}

extern cstring_cstring_t cstring_test_test_concat(void){
        cstring_cstring_t result;
        cstring_cstring_t ivar_4;
        ivar_4 = (cstring_cstring_t)cstring_test_A();
        cstring_cstring_t ivar_5;
        ivar_5 = (cstring_cstring_t)cstring_test_B();
        cstring_cstring_t ivar_3;
        ivar_3 = (cstring_cstring_t)cstring_plus((cstring_cstring_t)ivar_4, (cstring_cstring_t)ivar_5);
        //copying to cstring_cstring from cstring_cstring;
        result = (cstring_cstring_t)ivar_3;

        return result;
}

extern uint16_t cstring_test_test_strdiff(void){
        uint16_t result;
        cstring_cstring_t ivar_4;
        ivar_4 = (cstring_cstring_t)cstring_test_A();
        cstring_cstring_t ivar_5;
        ivar_5 = (cstring_cstring_t)cstring_test_test_concat();
        mpz_ptr_t ivar_3;
        ivar_3 = (mpz_ptr_t)cstring_strdiff((cstring_cstring_t)ivar_4, (cstring_cstring_t)ivar_5);
        //copying to uint16 from mpz;
        result = (uint16_t)mpz_get_ui(ivar_3);
        mpz_clear(ivar_3);

        return result;
}

extern int8_t cstring_test_test_strcmp(void){
        int8_t result;
        cstring_cstring_t ivar_4;
        ivar_4 = (cstring_cstring_t)cstring_test_test_concat();
        cstring_cstring_t ivar_5;
        ivar_5 = (cstring_cstring_t)cstring_test_A();
        result = (int8_t)cstring_strcmp((cstring_cstring_t)ivar_4, (cstring_cstring_t)ivar_5);

        return result;
}

extern int8_t cstring_test_test_substr(void){
        int8_t result;
        cstring_cstring_t ivar_37;
        cstring_cstring_t ivar_7;
        ivar_7 = (cstring_cstring_t)cstring_test_test_concat();
        uint8_t ivar_35;
        ivar_35 = (uint8_t)8;
        uint16_t ivar_8;
        //copying to uint16 from uint8;
        ivar_8 = (uint16_t)ivar_35;
        uint8_t ivar_34;
        ivar_34 = (uint8_t)16;
        uint16_t ivar_12;
        //copying to uint16 from uint8;
        ivar_12 = (uint16_t)ivar_34;
        cstring_cstring_t ivar_6;
        ivar_6 = (cstring_cstring_t)cstring_substr((cstring_cstring_t)ivar_7, (uint16_t)ivar_8, (uint16_t)ivar_12);
        //copying to cstring_cstring from cstring_cstring;
        ivar_37 = (cstring_cstring_t)ivar_6;
        cstring_cstring_t ivar_38;
        ivar_38 = (cstring_cstring_t)cstring_test_B();
        result = (int8_t)cstring_strcmp((cstring_cstring_t)ivar_37, (cstring_cstring_t)ivar_38);

        return result;
}