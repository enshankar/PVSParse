//Code generated using pvs2ir2c
#include "lex2_c.h"

extern ordstruct_adt__ordstruct_adt_t lex2__lex2(mpz_t ivar_1, mpz_t ivar_2){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_3;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        int64_t tmp3584 = mpz_cmp_ui(ivar_1, ivar_5);
        ivar_3 = (tmp3584 == 0);
        if (ivar_3){ 
             bool_t ivar_7;
             uint8_t ivar_9;
             ivar_9 = (uint8_t)0;
             int64_t tmp3585 = mpz_cmp_ui(ivar_2, ivar_9);
             ivar_7 = (tmp3585 == 0);
             if (ivar_7){  
           result = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__zero();
           result->count++;
} else {
             
           ordstruct_adt__ordstruct_adt_t ivar_16;
           ivar_16 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__zero();
           ivar_16->count++;
           ordstruct_adt__ordstruct_adt_t ivar_17;
           ivar_17 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__zero();
           ivar_17->count++;
           ordstruct_adt__ordstruct_adt_t ivar_14;
           ivar_14 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__add(ivar_2, (ordstruct_adt__ordstruct_adt_t)ivar_16, (ordstruct_adt__ordstruct_adt_t)ivar_17);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           result = (ordstruct_adt__ordstruct_adt_t)ivar_14;
           result->count++;
           release_ordstruct_adt__ordstruct_adt(ivar_14);
};
} else {
        
             bool_t ivar_18;
             uint8_t ivar_20;
             ivar_20 = (uint8_t)0;
             int64_t tmp3586 = mpz_cmp_ui(ivar_2, ivar_20);
             ivar_18 = (tmp3586 == 0);
             if (ivar_18){  
           ordstruct_adt__ordstruct_adt_t ivar_36;
           uint8_t ivar_33;
           ivar_33 = (uint8_t)1;
           mpz_ptr_t ivar_29;
           //copying to mpz from uint8;
           mpz_mk_set_ui(ivar_29, ivar_33);
           ordstruct_adt__ordstruct_adt_t ivar_30;
           ivar_30 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__zero();
           ivar_30->count++;
           ordstruct_adt__ordstruct_adt_t ivar_31;
           ivar_31 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__zero();
           ivar_31->count++;
           ordstruct_adt__ordstruct_adt_t ivar_28;
           ivar_28 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__add(ivar_29, (ordstruct_adt__ordstruct_adt_t)ivar_30, (ordstruct_adt__ordstruct_adt_t)ivar_31);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           ivar_36 = (ordstruct_adt__ordstruct_adt_t)ivar_28;
           ivar_36->count++;
           release_ordstruct_adt__ordstruct_adt(ivar_28);
           ordstruct_adt__ordstruct_adt_t ivar_37;
           ivar_37 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__zero();
           ivar_37->count++;
           ordstruct_adt__ordstruct_adt_t ivar_34;
           ivar_34 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__add(ivar_1, (ordstruct_adt__ordstruct_adt_t)ivar_36, (ordstruct_adt__ordstruct_adt_t)ivar_37);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           result = (ordstruct_adt__ordstruct_adt_t)ivar_34;
           result->count++;
           release_ordstruct_adt__ordstruct_adt(ivar_34);
} else {
             
           ordstruct_adt__ordstruct_adt_t ivar_59;
           uint8_t ivar_49;
           ivar_49 = (uint8_t)1;
           mpz_ptr_t ivar_45;
           //copying to mpz from uint8;
           mpz_mk_set_ui(ivar_45, ivar_49);
           ordstruct_adt__ordstruct_adt_t ivar_46;
           ivar_46 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__zero();
           ivar_46->count++;
           ordstruct_adt__ordstruct_adt_t ivar_47;
           ivar_47 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__zero();
           ivar_47->count++;
           ordstruct_adt__ordstruct_adt_t ivar_44;
           ivar_44 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__add(ivar_45, (ordstruct_adt__ordstruct_adt_t)ivar_46, (ordstruct_adt__ordstruct_adt_t)ivar_47);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           ivar_59 = (ordstruct_adt__ordstruct_adt_t)ivar_44;
           ivar_59->count++;
           release_ordstruct_adt__ordstruct_adt(ivar_44);
           ordstruct_adt__ordstruct_adt_t ivar_60;
           ordstruct_adt__ordstruct_adt_t ivar_55;
           ivar_55 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__zero();
           ivar_55->count++;
           ordstruct_adt__ordstruct_adt_t ivar_56;
           ivar_56 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__zero();
           ivar_56->count++;
           ordstruct_adt__ordstruct_adt_t ivar_53;
           ivar_53 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__add(ivar_2, (ordstruct_adt__ordstruct_adt_t)ivar_55, (ordstruct_adt__ordstruct_adt_t)ivar_56);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           ivar_60 = (ordstruct_adt__ordstruct_adt_t)ivar_53;
           ivar_60->count++;
           release_ordstruct_adt__ordstruct_adt(ivar_53);
           ordstruct_adt__ordstruct_adt_t ivar_57;
           ivar_57 = (ordstruct_adt__ordstruct_adt_t)ordstruct_adt__add(ivar_1, (ordstruct_adt__ordstruct_adt_t)ivar_59, (ordstruct_adt__ordstruct_adt_t)ivar_60);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           result = (ordstruct_adt__ordstruct_adt_t)ivar_57;
           result->count++;
           release_ordstruct_adt__ordstruct_adt(ivar_57);
};
};

        return result;
}