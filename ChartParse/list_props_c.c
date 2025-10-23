//Code generated using pvs2ir2c
#include "list_props_c.h"

extern mpz_ptr_t list_props_mpq__length(list_adt__list_adt_t ivar_1){
        mpz_ptr_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)r_list_adt__nullp((list_adt__list_adt_t)ivar_1);
        if (ivar_3){ 
             release_list_adt__list_adt(ivar_1);
             result = safe_malloc(sizeof(mpz_t));
             mpz_init(result);
             mpz_mk_set_ui(result, 0);
} else {
        
             list_adt__list_adt_t ivar_8;
             ivar_8 = (list_adt__list_adt_t)list_adt__list_adt_cdr((list_adt__list_adt_t)ivar_1);
             mpz_ptr_t ivar_15;
             ivar_15 = (mpz_ptr_t)list_props_mpq__length((list_adt__list_adt_t)ivar_8);
             uint8_t ivar_16;
             ivar_16 = (uint8_t)1;
             mpz_mk_set_ui(result, (uint64_t)ivar_16);
             mpz_add(result, result, ivar_15);
};

        
        return result;
}

extern bool_t list_props_mpq__member(mpq_ptr_t ivar_1, list_adt__list_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_4;
        ivar_2->count++;
        ivar_4 = (bool_t)r_list_adt__nullp((list_adt__list_adt_t)ivar_2);
        if (ivar_4){ 
             release_list_adt__list_adt(ivar_2);
             result = (bool_t) false;
} else {
        
             mpq_ptr_t ivar_8;
             ivar_2->count++;
             ivar_8 = (mpq_ptr_t)list_adt__list_adt_car((list_adt__list_adt_t)ivar_2);
             list_adt__list_adt_t ivar_9;
             ivar_9 = (list_adt__list_adt_t)list_adt__list_adt_cdr((list_adt__list_adt_t)ivar_2);
             bool_t ivar_16;
             mpq_ptr_t ivar_18;
             //copying to mpq from mpq;
             mpq_mk_set(ivar_18, ivar_1);
             int64_t tmp1210 = mpq_cmp(ivar_18, ivar_8);
             ivar_16 = (tmp1210 == 0);
             if (ivar_16){  
           release_list_adt__list_adt(ivar_9);
           result = (bool_t) true;
} else {
             
           mpq_ptr_t ivar_24;
           //copying to mpq from mpq;
           mpq_mk_set(ivar_24, ivar_1);
           result = (bool_t)list_props_mpq__member(ivar_24, (list_adt__list_adt_t)ivar_9);
};
};

        
        return result;
}

extern mpq_ptr_t list_props_mpq__nth(list_adt__list_adt_t ivar_1, mpz_ptr_t ivar_2){
        mpq_ptr_t  result;
        bool_t ivar_6;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)0;
        int64_t tmp1213 = mpz_cmp_ui(ivar_2, ivar_8);
        ivar_6 = (tmp1213 == 0);
        if (ivar_6){ 
             result = (mpq_ptr_t)list_adt__list_adt_car((list_adt__list_adt_t)ivar_1);
} else {
        
             list_adt__list_adt_t ivar_22;
             ivar_22 = (list_adt__list_adt_t)list_adt__list_adt_cdr((list_adt__list_adt_t)ivar_1);
             mpz_ptr_t ivar_23;
             uint8_t ivar_19;
             ivar_19 = (uint8_t)1;
             mpz_mk_sub_ui(ivar_23, ivar_2, (uint64_t)ivar_19);
             result = (mpq_ptr_t)list_props_mpq__nth((list_adt__list_adt_t)ivar_22, ivar_23);
};

        
        return result;
}

extern list_adt__list_adt_t list_props_mpq__append(list_adt__list_adt_t ivar_1, list_adt__list_adt_t ivar_2){
        list_adt__list_adt_t  result;
        bool_t ivar_4;
        ivar_1->count++;
        ivar_4 = (bool_t)r_list_adt__nullp((list_adt__list_adt_t)ivar_1);
        if (ivar_4){ 
             release_list_adt__list_adt(ivar_1);
             //copying to list_adt__list_adt from list_adt__list_adt;
             result = (list_adt__list_adt_t)ivar_2;
             if (result != NULL) result->count++;
             release_list_adt__list_adt(ivar_2);
} else {
        
             mpq_ptr_t ivar_8;
             ivar_1->count++;
             ivar_8 = (mpq_ptr_t)list_adt__list_adt_car((list_adt__list_adt_t)ivar_1);
             list_adt__list_adt_t ivar_9;
             ivar_9 = (list_adt__list_adt_t)list_adt__list_adt_cdr((list_adt__list_adt_t)ivar_1);
             list_adt__T_t ivar_24;
             //copying to list_adt__T from mpq;
             ivar_24 = (list_adt__T_t)ivar_8;
             mpq_clear(ivar_8);
             list_adt__list_adt_t ivar_25;
             ivar_25 = (list_adt__list_adt_t)list_props_mpq__append((list_adt__list_adt_t)ivar_9, (list_adt__list_adt_t)ivar_2);
             result = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_24, (list_adt__list_adt_t)ivar_25);
};

        
        return result;
}

extern list_adt__list_adt_t list_props_mpq__reverse(list_adt__list_adt_t ivar_1){
        list_adt__list_adt_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)r_list_adt__nullp((list_adt__list_adt_t)ivar_1);
        if (ivar_3){ 
             //copying to list_adt__list_adt from list_adt__list_adt;
             result = (list_adt__list_adt_t)ivar_1;
             if (result != NULL) result->count++;
             release_list_adt__list_adt(ivar_1);
} else {
        
             mpq_ptr_t ivar_7;
             ivar_1->count++;
             ivar_7 = (mpq_ptr_t)list_adt__list_adt_car((list_adt__list_adt_t)ivar_1);
             list_adt__list_adt_t ivar_8;
             ivar_8 = (list_adt__list_adt_t)list_adt__list_adt_cdr((list_adt__list_adt_t)ivar_1);
             list_adt__list_adt_t ivar_26;
             ivar_26 = (list_adt__list_adt_t)list_props_mpq__reverse((list_adt__list_adt_t)ivar_8);
             list_adt__list_adt_t ivar_27;
             list_adt__T_t ivar_23;
             //copying to list_adt__T from mpq;
             ivar_23 = (list_adt__T_t)ivar_7;
             mpq_clear(ivar_7);
             list_adt__list_adt_t ivar_24;
             ivar_24 = (list_adt__list_adt_t)list_adt__null();
             if (ivar_24 != NULL) ivar_24->count++;
             ivar_27 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_23, (list_adt__list_adt_t)ivar_24);
             result = (list_adt__list_adt_t)list_props_mpq__append((list_adt__list_adt_t)ivar_26, (list_adt__list_adt_t)ivar_27);
};

        
        return result;
}