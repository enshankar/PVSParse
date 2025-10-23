//Code generated using pvs2ir2c
#include "test_string_c.h"

extern strings__string_t test_string__string4(void){
        strings__string_t result;
        uint32_t len1006 = 6;
        uint32_t characters1007[6] = {65, 66, 67, 49, 50, 51};
        stringliteral_t string1005 = mk_string(6, characters1007);
        result = (strings__string_t)strings__make_string(len1006, string1005);

        return result;
}

extern strings__string_t test_string__string5(void){
        strings__string_t result;
        uint32_t len1009 = 6;
        uint32_t characters1010[6] = {945, 946, 947, 807, 112, 117};
        stringliteral_t string1008 = mk_string(6, characters1010);
        result = (strings__string_t)strings__make_string(len1009, string1008);

        return result;
}