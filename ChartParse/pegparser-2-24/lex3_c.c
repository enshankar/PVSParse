//Code generated using pvs2ir2c
#include "lex3_c.h"

ordstruct_adt__ordstruct_adt_t lex3__lex3(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, mpz_ptr_t ivar_3){
        ordstruct_adt__ordstruct_adt_t  result;
        bool_t ivar_4;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)0;
        int64_t tmp2005 = mpz_cmp_ui(ivar_1, ivar_6);
        ivar_4 = (tmp2005 == 0);
        if (ivar_4){ 
             result = (ordstruct_adt__ordstruct_adt_t)lex2__lex2((mpz_ptr_t)ivar_2, (mpz_ptr_t)ivar_3);
} else {
        
             ordstruct_adt__ordstruct_adt_t ivar_41;
             uint8_t ivar_33;
             ivar_33 = (uint8_t)2;
             mpz_ptr_t ivar_29;
             //copying to mpz from uint8;
             mpz_mk_set_ui(ivar_29, ivar_33);
             ordstruct_adt__ordstruct_adt_t ivar_30;
             uint8_t ivar_27;
             ivar_27 = (uint8_t)2;
             mpz_ptr_t ivar_23;
             //copying to mpz from uint8;
             mpz_mk_set_ui(ivar_23, ivar_27);
             ordstruct_adt__ordstruct_adt_t ivar_24;
             ivar_24 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__zero();
             if (ivar_24 != NULL) ivar_24->count++;
             ordstruct_adt__ordstruct_adt_t ivar_25;
             ivar_25 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__zero();
             if (ivar_25 != NULL) ivar_25->count++;
             ivar_30 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__add((mpz_ptr_t)ivar_23, (ordstruct_adt__ordstruct_adt_t)ivar_24, (ordstruct_adt__ordstruct_adt_t)ivar_25);
             ordstruct_adt__ordstruct_adt_t ivar_31;
             ivar_31 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__zero();
             if (ivar_31 != NULL) ivar_31->count++;
             ivar_41 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__add((mpz_ptr_t)ivar_29, (ordstruct_adt__ordstruct_adt_t)ivar_30, (ordstruct_adt__ordstruct_adt_t)ivar_31);
             ordstruct_adt__ordstruct_adt_t ivar_42;
             ivar_42 = (ordstruct_adt__ordstruct_adt_t)lex2__lex2((mpz_ptr_t)ivar_2, (mpz_ptr_t)ivar_3);
             result = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__add((mpz_ptr_t)ivar_1, (ordstruct_adt__ordstruct_adt_t)ivar_41, (ordstruct_adt__ordstruct_adt_t)ivar_42);
};

        
        return result;
}