//Code generated using pvs2ir2c
#include "bit_c.h"

bool_t bit__b0(uint8_t ivar_1){
        bool_t  result;
        result = (bool_t) false;

        
        return result;
}

bool_t bit__b1(uint8_t ivar_1){
        bool_t  result;
        result = (bool_t) true;

        
        return result;
}

uint8_t bit__b2n(bool_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        //copying to bool from bool;
        ivar_2 = (bool_t)ivar_1;
        if (ivar_2){ 
             result = (uint8_t)1;
} else {
        
             result = (uint8_t)0;
};

        
        return result;
}

bool_t bit__n2b(uint8_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        result = (ivar_1 == ivar_3);

        
        return result;
}