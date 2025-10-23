//Code generated using pvs2ir2c
#include "filetest_c.h"

extern uint8_t filetest__test1(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    /* lf */ file__lifted_file_adt_t ivar_1;
        bytestrings__bytestring_t ivar_8;
        strings__string_t ivar_6;
        uint32_t len237589 = 71;
        uint32_t characters237590[71] = {47, 85, 115, 101, 114, 115, 47, 101, 50, 49, 54, 54, 48, 47, 115, 104, 97, 110, 107, 97, 114, 47, 112, 114, 111, 106, 101, 99, 116, 115, 47, 83, 97, 102, 101, 68, 111, 99, 115, 47, 80, 97, 114, 115, 108, 101, 121, 47, 67, 104, 97, 114, 116, 80, 97, 114, 115, 101, 47, 116, 101, 115, 116, 102, 105, 108, 101, 46, 116, 120, 116};
        stringliteral_t string237588 = mk_string(71, characters237590);
        ivar_6 = (strings__string_t)strings__make_string(len237589, string237588);
        ivar_8 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_6);
        ivar_1 = (file__lifted_file_adt_t)file__open((bytestrings__bytestring_t)ivar_8);
        bool_t ivar_9;
        ivar_1->count++;
        ivar_9 = (bool_t)r_file__passp((file__lifted_file_adt_t)ivar_1);
        if (ivar_9){ 
             /* f */ file__file_t ivar_13;
             ivar_13 = (file__file_t)file__lifted_file_adt_contents((file__lifted_file_adt_t)ivar_1);
             /* b */ bytestrings__bytestring_t ivar_21;
             strings__string_t ivar_25;
             uint32_t len237601 = 15;
             uint32_t characters237602[15] = {65, 100, 100, 32, 116, 111, 32, 116, 104, 101, 32, 101, 110, 100, 46};
             stringliteral_t string237600 = mk_string(15, characters237602);
             ivar_25 = (strings__string_t)strings__make_string(len237601, string237600);
             ivar_21 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_25);
             /* lff */ file__lifted_file_adt_t ivar_26;
             ivar_26 = (file__lifted_file_adt_t)file__append((file__file_t)ivar_13, (bytestrings__bytestring_t)ivar_21);
             bool_t ivar_32;
             ivar_26->count++;
             ivar_32 = (bool_t)r_file__passp((file__lifted_file_adt_t)ivar_26);
             if (ivar_32){  
           /* ff */ file__file_t ivar_36;
           ivar_26->count++;
           ivar_36 = (file__file_t)file__lifted_file_adt_contents((file__lifted_file_adt_t)ivar_26);
           /* ffs */ uint32_t ivar_40;
           ivar_36->count++;
           ivar_40 = (uint32_t)file__file_size((file__file_t)ivar_36);
           bool_t ivar_67;
           bool_t ivar_68;
           ivar_26->count++;
           ivar_68 = (bool_t)r_file__passp((file__lifted_file_adt_t)ivar_26);
           if (ivar_68){   
           uint32_t ivar_73;
           file__file_t ivar_80;
           ivar_26->count++;
           ivar_80 = (file__file_t)file__lifted_file_adt_contents((file__lifted_file_adt_t)ivar_26);
           ivar_73 = (uint32_t)file__file_size((file__file_t)ivar_80);
           uint8_t ivar_74;
           ivar_74 = (uint8_t)0;
           ivar_67 = (ivar_73 > ivar_74);
} else {
           
           ivar_67 = (bool_t) false;
};
           if (ivar_67){   
           file__file_t ivar_89;
           ivar_89 = (file__file_t)file__lifted_file_adt_contents((file__lifted_file_adt_t)ivar_26);
           uint8_t ivar_95;
           ivar_95 = (uint8_t)0;
           uint32_t ivar_90;
           //copying to uint32 from uint8;
           ivar_90 = (uint32_t)ivar_95;
           ivar_89->count++;
           result = (uint8_t)file__getbyte((file__file_t)ivar_89, (uint32_t)ivar_90);
} else {
           
           release_file__lifted_file_adt(ivar_26);
           result = (uint8_t)0;
};
} else {
             
           release_file__lifted_file_adt(ivar_26);
           result = (uint8_t)0;
};
} else {
        
             release_file__lifted_file_adt(ivar_1);
             result = (uint8_t)0;
};

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t filetest__test2(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    /* lf */ file__lifted_file_adt_t ivar_1;
        bytestrings__bytestring_t ivar_8;
        strings__string_t ivar_6;
        uint32_t len237637 = 71;
        uint32_t characters237638[71] = {47, 85, 115, 101, 114, 115, 47, 101, 50, 49, 54, 54, 48, 47, 115, 104, 97, 110, 107, 97, 114, 47, 112, 114, 111, 106, 101, 99, 116, 115, 47, 83, 97, 102, 101, 68, 111, 99, 115, 47, 80, 97, 114, 115, 108, 101, 121, 47, 67, 104, 97, 114, 116, 80, 97, 114, 115, 101, 47, 116, 101, 115, 116, 102, 105, 108, 101, 46, 116, 120, 116};
        stringliteral_t string237636 = mk_string(71, characters237638);
        ivar_6 = (strings__string_t)strings__make_string(len237637, string237636);
        ivar_8 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_6);
        ivar_1 = (file__lifted_file_adt_t)file__open((bytestrings__bytestring_t)ivar_8);
        bool_t ivar_9;
        ivar_1->count++;
        ivar_9 = (bool_t)r_file__passp((file__lifted_file_adt_t)ivar_1);
        if (ivar_9){ 
             /* f */ file__file_t ivar_13;
             ivar_13 = (file__file_t)file__lifted_file_adt_contents((file__lifted_file_adt_t)ivar_1);
             /* fs */ uint32_t ivar_17;
             ivar_13->count++;
             ivar_17 = (uint32_t)file__file_size((file__file_t)ivar_13);
             uint8_t ivar_38;
             ivar_38 = (uint8_t)0;
             uint32_t ivar_26;
             //copying to uint32 from uint8;
             ivar_26 = (uint32_t)ivar_38;
             ivar_13->count++;
             result = (bytestrings__bytestring_t)file__getbytestring((file__file_t)ivar_13, (uint32_t)ivar_26, (uint32_t)ivar_17);
} else {
        
             release_file__lifted_file_adt(ivar_1);
             strings__string_t ivar_42;
             uint32_t len237649 = 8;
             uint32_t characters237650[8] = {98, 97, 100, 32, 102, 105, 108, 101};
             stringliteral_t string237648 = mk_string(8, characters237650);
             ivar_42 = (strings__string_t)strings__make_string(len237649, string237648);
             result = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_42);
};

        defined = true;};
        
        return result;
}