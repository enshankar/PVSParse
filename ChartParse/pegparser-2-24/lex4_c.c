//Code generated using pvs2ir2c
#include "lex4_c.h"

ordstruct_adt__ordstruct_adt_t lex4__lex4(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, mpz_ptr_t ivar_3, mpz_ptr_t ivar_4){
        ordstruct_adt__ordstruct_adt_t  result;
        bool_t ivar_5;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)0;
        int64_t tmp2006 = mpz_cmp_ui(ivar_1, ivar_7);
        ivar_5 = (tmp2006 == 0);
        if (ivar_5){ 
             result = (ordstruct_adt__ordstruct_adt_t)lex3__lex3((mpz_ptr_t)ivar_2, (mpz_ptr_t)ivar_3, (mpz_ptr_t)ivar_4);
} else {
        
             ordstruct_adt__ordstruct_adt_t ivar_55;
             uint8_t ivar_45;
             ivar_45 = (uint8_t)3;
             mpz_ptr_t ivar_41;
             //copying to mpz from uint8;
             mpz_mk_set_ui(ivar_41, ivar_45);
             ordstruct_adt__ordstruct_adt_t ivar_42;
             uint8_t ivar_39;
             ivar_39 = (uint8_t)2;
             mpz_ptr_t ivar_35;
             //copying to mpz from uint8;
             mpz_mk_set_ui(ivar_35, ivar_39);
             ordstruct_adt__ordstruct_adt_t ivar_36;
             uint8_t ivar_33;
             ivar_33 = (uint8_t)1;
             mpz_ptr_t ivar_29;
             //copying to mpz from uint8;
             mpz_mk_set_ui(ivar_29, ivar_33);
             ordstruct_adt__ordstruct_adt_t ivar_30;
             ivar_30 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__zero();
             if (ivar_30 != NULL) ivar_30->count++;
             ordstruct_adt__ordstruct_adt_t ivar_31;
             ivar_31 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__zero();
             if (ivar_31 != NULL) ivar_31->count++;
             ivar_36 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__add((mpz_ptr_t)ivar_29, (ordstruct_adt__ordstruct_adt_t)ivar_30, (ordstruct_adt__ordstruct_adt_t)ivar_31);
             ordstruct_adt__ordstruct_adt_t ivar_37;
             ivar_37 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__zero();
             if (ivar_37 != NULL) ivar_37->count++;
             ivar_42 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__add((mpz_ptr_t)ivar_35, (ordstruct_adt__ordstruct_adt_t)ivar_36, (ordstruct_adt__ordstruct_adt_t)ivar_37);
             ordstruct_adt__ordstruct_adt_t ivar_43;
             ivar_43 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__zero();
             if (ivar_43 != NULL) ivar_43->count++;
             ivar_55 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__add((mpz_ptr_t)ivar_41, (ordstruct_adt__ordstruct_adt_t)ivar_42, (ordstruct_adt__ordstruct_adt_t)ivar_43);
             ordstruct_adt__ordstruct_adt_t ivar_56;
             ivar_56 = (ordstruct_adt__ordstruct_adt_t)lex3__lex3((mpz_ptr_t)ivar_2, (mpz_ptr_t)ivar_3, (mpz_ptr_t)ivar_4);
             result = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__add((mpz_ptr_t)ivar_1, (ordstruct_adt__ordstruct_adt_t)ivar_55, (ordstruct_adt__ordstruct_adt_t)ivar_56);
};

        
        return result;
}