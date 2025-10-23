//Code generated using pvs2ir2c
#include "rotate_c.h"


rotate_array_0_t new_rotate_array_0(uint32_t size){
        rotate_array_0_t tmp = (rotate_array_0_t) safe_malloc(sizeof(struct rotate_array_0_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_rotate_array_0(rotate_array_0_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_rotate_array_0_ptr(pointer_t x, type_actual_t T){
        release_rotate_array_0((rotate_array_0_t)x);
}

rotate_array_0_t copy_rotate_array_0(rotate_array_0_t x){
        rotate_array_0_t tmp = new_rotate_array_0(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_rotate_array_0(rotate_array_0_t x, rotate_array_0_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] = y->elems[i]); i++;};
        return tmp;}

bool_t equal_rotate_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_rotate_array_0((rotate_array_0_t)x, (rotate_array_0_t)y);
}

actual_rotate_array_0_t actual_rotate_array_0(){
        actual_rotate_array_0_t new = (actual_rotate_array_0_t)safe_malloc(sizeof(struct actual_rotate_array_0_s));
        new->equal_ptr = (equal_ptr_t)(*equal_rotate_array_0_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_rotate_array_0_ptr);
 

 
        return new;
 };

rotate_array_0_t update_rotate_array_0(rotate_array_0_t x, uint32_t i, uint8_t v){
        rotate_array_0_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_rotate_array_0(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

rotate_array_0_t upgrade_rotate_array_0(rotate_array_0_t x, uint32_t i, uint8_t v){
        rotate_array_0_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_malloc(sizeof(struct rotate_array_0_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_rotate_array_0(x);}
           else {y = copy_rotate_array_0(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}



extern uint8_t rotate__u8rightrotate(uint8_t ivar_1, uint8_t ivar_2){
        uint8_t result;
        uint8_t ivar_19;
        uint8_t ivar_12;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)8;
        ivar_12 = (uint8_t)(ivar_7 - ivar_2);
        ivar_19 = (uint8_t)integertypes__u8lshift((uint8_t)ivar_1, (uint8_t)ivar_12);
        uint8_t ivar_20;
        ivar_20 = (uint8_t)integertypes__u8rshift((uint8_t)ivar_1, (uint8_t)ivar_2);
        result = (uint8_t)integertypes__u8plus((uint8_t)ivar_19, (uint8_t)ivar_20);

        return result;
}

extern uint8_t rotate__test_u8rightrotate_0(void){
        uint8_t result;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)255;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)5;
        result = (uint8_t)rotate__u8rightrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint8_t rotate__test_u8rightrotate_1(void){
        uint8_t result;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)3;
        result = (uint8_t)rotate__u8rightrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint8_t rotate__test_u8rightrotate_2(void){
        uint8_t result;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)240;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)7;
        result = (uint8_t)rotate__u8rightrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint8_t rotate__test_u8rightrotate_3(void){
        uint8_t result;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)15;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)2;
        result = (uint8_t)rotate__u8rightrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint8_t rotate__test_u8rightrotate_4(void){
        uint8_t result;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)255;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)8;
        result = (uint8_t)rotate__u8rightrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint8_t rotate__test_u8rightrotate_5(void){
        uint8_t result;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)255;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        result = (uint8_t)rotate__u8rightrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint16_t rotate__u16rightrotate(uint16_t ivar_1, uint8_t ivar_2){
        uint16_t result;
        uint16_t ivar_19;
        uint8_t ivar_12;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)16;
        ivar_12 = (uint8_t)(ivar_7 - ivar_2);
        ivar_19 = (uint16_t)integertypes__u16lshift((uint16_t)ivar_1, (uint16_t)ivar_12);
        uint16_t ivar_20;
        ivar_20 = (uint16_t)integertypes__u16rshift((uint16_t)ivar_1, (uint16_t)ivar_2);
        result = (uint16_t)integertypes__u16plus((uint16_t)ivar_19, (uint16_t)ivar_20);

        return result;
}

extern uint16_t rotate__test_u16rightrotate_0(void){
        uint16_t result;
        uint16_t ivar_4;
        ivar_4 = (uint16_t)65535;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)15;
        result = (uint16_t)rotate__u16rightrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint16_t rotate__test_u16rightrotate_1(void){
        uint16_t result;
        uint16_t ivar_4;
        ivar_4 = (uint16_t)61680;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)13;
        result = (uint16_t)rotate__u16rightrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint16_t rotate__test_u16rightrotate_2(void){
        uint16_t result;
        uint16_t ivar_4;
        ivar_4 = (uint16_t)240;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)4;
        result = (uint16_t)rotate__u16rightrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint16_t rotate__test_u16rightrotate_3(void){
        uint16_t result;
        uint16_t ivar_4;
        ivar_4 = (uint16_t)3855;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)9;
        result = (uint16_t)rotate__u16rightrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint16_t rotate__test_u16rightrotate_4(void){
        uint16_t result;
        uint16_t ivar_4;
        ivar_4 = (uint16_t)3855;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)16;
        result = (uint16_t)rotate__u16rightrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint16_t rotate__test_u16rightrotate_5(void){
        uint16_t result;
        uint16_t ivar_4;
        ivar_4 = (uint16_t)3855;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        result = (uint16_t)rotate__u16rightrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint32_t rotate__u32rightrotate(uint32_t ivar_1, uint8_t ivar_2){
        uint32_t result;
        uint32_t ivar_19;
        uint8_t ivar_12;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)32;
        ivar_12 = (uint8_t)(ivar_7 - ivar_2);
        ivar_19 = (uint32_t)integertypes__u32lshift((uint32_t)ivar_1, (uint32_t)ivar_12);
        uint32_t ivar_20;
        ivar_20 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_2);
        result = (uint32_t)integertypes__u32plus((uint32_t)ivar_19, (uint32_t)ivar_20);

        return result;
}

extern uint32_t rotate__test_u32rightrotate_0(void){
        uint32_t result;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)4294967295;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)31;
        result = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint32_t rotate__test_u32rightrotate_1(void){
        uint32_t result;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)4042322160;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)23;
        result = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint32_t rotate__test_u32rightrotate_2(void){
        uint32_t result;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)15728880;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)14;
        result = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint32_t rotate__test_u32rightrotate_3(void){
        uint32_t result;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)252645135;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)9;
        result = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint32_t rotate__test_u32rightrotate_4(void){
        uint32_t result;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)252645135;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)32;
        result = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint32_t rotate__test_u32rightrotate_5(void){
        uint32_t result;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)252645135;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        result = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint64_t rotate__u64rightrotate(uint64_t ivar_1, uint8_t ivar_2){
        uint64_t result;
        uint64_t ivar_19;
        uint8_t ivar_12;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)64;
        ivar_12 = (uint8_t)(ivar_7 - ivar_2);
        ivar_19 = (uint64_t)integertypes__u64lshift((uint64_t)ivar_1, (uint64_t)ivar_12);
        uint64_t ivar_20;
        ivar_20 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_1, (uint64_t)ivar_2);
        result = (uint64_t)integertypes__u64plus((uint64_t)ivar_19, (uint64_t)ivar_20);

        return result;
}

extern uint64_t rotate__test_u64rightrotate_0(void){
        uint64_t result;
        uint64_t ivar_4;
        ivar_4 = (uint64_t)72057594037927935;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)63;
        result = (uint64_t)rotate__u64rightrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint64_t rotate__test_u64rightrotate_1(void){
        uint64_t result;
        uint64_t ivar_4;
        ivar_4 = (uint64_t)1148682822604615920;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)43;
        result = (uint64_t)rotate__u64rightrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint64_t rotate__test_u64rightrotate_2(void){
        uint64_t result;
        uint64_t ivar_4;
        ivar_4 = (uint64_t)67555029245030640;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)24;
        result = (uint64_t)rotate__u64rightrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint64_t rotate__test_u64rightrotate_3(void){
        uint64_t result;
        uint64_t ivar_4;
        ivar_4 = (uint64_t)1085102596360827120;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)9;
        result = (uint64_t)rotate__u64rightrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint64_t rotate__test_u64rightrotate_4(void){
        uint64_t result;
        uint64_t ivar_4;
        ivar_4 = (uint64_t)1085102596360827120;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)64;
        result = (uint64_t)rotate__u64rightrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern uint64_t rotate__test_u64rightrotate_5(void){
        uint64_t result;
        uint64_t ivar_4;
        ivar_4 = (uint64_t)1085102596360827120;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        result = (uint64_t)rotate__u64rightrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        return result;
}

extern bytestrings__bytestring_t rotate__u8tobytestring(uint8_t ivar_1){
        bytestrings__bytestring_t result;
        uint32_t ivar_2;
        ivar_2 = (uint32_t)1;
        rotate_array_0_t ivar_6;
        uint32_t size1363;
        //copying to uint32 from uint32;
        size1363 = (uint32_t)ivar_2;
        size1363 += 0;
        ivar_6 = new_rotate_array_0(size1363);
        uint8_t ivar_5;
        for (uint32_t index1362 = 0; index1362 < size1363; index1362++){
             ivar_5 = (uint8_t)index1362;
             //copying to uint8 from uint8;
             ivar_6->elems[index1362] = (uint8_t)ivar_1;
        };
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_2;
        result->seq = (rotate_array_0_t)ivar_6;

        return result;
}

extern bytestrings__bytestring_t rotate__test_u8tobytestring_0(void){
        bytestrings__bytestring_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)255;
        bytestrings__bytestring_t ivar_2;
        ivar_2 = (bytestrings__bytestring_t)rotate__u8tobytestring((uint8_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_2;
        result->count++;
        release_bytestrings__bytestring(ivar_2);

        return result;
}

extern bytestrings__bytestring_t rotate__test_u8tobytestring_1(void){
        bytestrings__bytestring_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)15;
        bytestrings__bytestring_t ivar_2;
        ivar_2 = (bytestrings__bytestring_t)rotate__u8tobytestring((uint8_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_2;
        result->count++;
        release_bytestrings__bytestring(ivar_2);

        return result;
}

extern bytestrings__bytestring_t rotate__test_u8tobytestring_2(void){
        bytestrings__bytestring_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)240;
        bytestrings__bytestring_t ivar_2;
        ivar_2 = (bytestrings__bytestring_t)rotate__u8tobytestring((uint8_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_2;
        result->count++;
        release_bytestrings__bytestring(ivar_2);

        return result;
}

extern bytestrings__bytestring_t rotate__test_u8tobytestring_3(void){
        bytestrings__bytestring_t result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        bytestrings__bytestring_t ivar_2;
        ivar_2 = (bytestrings__bytestring_t)rotate__u8tobytestring((uint8_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_2;
        result->count++;
        release_bytestrings__bytestring(ivar_2);

        return result;
}

extern bytestrings__bytestring_t rotate__u16tobytestring(uint16_t ivar_1){
        bytestrings__bytestring_t result;
        uint32_t ivar_2;
        ivar_2 = (uint32_t)2;
        rotate_array_0_t ivar_25;
        uint32_t size1366;
        //copying to uint32 from uint32;
        size1366 = (uint32_t)ivar_2;
        size1366 += 0;
        ivar_25 = new_rotate_array_0(size1366);
        uint8_t ivar_5;
        for (uint32_t index1365 = 0; index1365 < size1366; index1365++){
             ivar_5 = (uint8_t)index1365;
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)0;
             ivar_6 = (ivar_5 == ivar_8);
             if (ivar_6){  
           uint16_t ivar_18;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)8;
           ivar_18 = (uint16_t)integertypes__u16rshift((uint16_t)ivar_1, (uint16_t)ivar_16);
           uint16_t ivar_19;
           ivar_19 = (uint16_t)256;
           uint16_t ivar_17;
           ivar_17 = (uint16_t)integertypes__u16rem((uint16_t)ivar_18, (uint16_t)ivar_19);
           //copying to uint8 from uint16;
           ivar_25->elems[index1365] = (uint8_t)ivar_17;
} else {
             
           uint16_t ivar_24;
           ivar_24 = (uint16_t)256;
           uint16_t ivar_22;
           ivar_22 = (uint16_t)integertypes__u16rem((uint16_t)ivar_1, (uint16_t)ivar_24);
           //copying to uint8 from uint16;
           ivar_25->elems[index1365] = (uint8_t)ivar_22;
};
        };
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_2;
        result->seq = (rotate_array_0_t)ivar_25;

        return result;
}

extern bytestrings__bytestring_t rotate__test_u16tobytestring_0(void){
        bytestrings__bytestring_t result;
        uint16_t ivar_3;
        ivar_3 = (uint16_t)65535;
        bytestrings__bytestring_t ivar_2;
        ivar_2 = (bytestrings__bytestring_t)rotate__u16tobytestring((uint16_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_2;
        result->count++;
        release_bytestrings__bytestring(ivar_2);

        return result;
}

extern bytestrings__bytestring_t rotate__test_u16tobytestring_1(void){
        bytestrings__bytestring_t result;
        uint16_t ivar_3;
        ivar_3 = (uint16_t)3855;
        bytestrings__bytestring_t ivar_2;
        ivar_2 = (bytestrings__bytestring_t)rotate__u16tobytestring((uint16_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_2;
        result->count++;
        release_bytestrings__bytestring(ivar_2);

        return result;
}

extern bytestrings__bytestring_t rotate__test_u16tobytestring_2(void){
        bytestrings__bytestring_t result;
        uint16_t ivar_3;
        ivar_3 = (uint16_t)61455;
        bytestrings__bytestring_t ivar_2;
        ivar_2 = (bytestrings__bytestring_t)rotate__u16tobytestring((uint16_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_2;
        result->count++;
        release_bytestrings__bytestring(ivar_2);

        return result;
}

extern bytestrings__bytestring_t rotate__test_u16tobytestring_3(void){
        bytestrings__bytestring_t result;
        uint16_t ivar_3;
        ivar_3 = (uint16_t)255;
        bytestrings__bytestring_t ivar_2;
        ivar_2 = (bytestrings__bytestring_t)rotate__u16tobytestring((uint16_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_2;
        result->count++;
        release_bytestrings__bytestring(ivar_2);

        return result;
}

extern bytestrings__bytestring_t rotate__u32tobytestring(uint32_t ivar_1){
        bytestrings__bytestring_t result;
        uint32_t ivar_2;
        ivar_2 = (uint32_t)4;
        rotate_array_0_t ivar_53;
        uint32_t size1369;
        //copying to uint32 from uint32;
        size1369 = (uint32_t)ivar_2;
        size1369 += 0;
        ivar_53 = new_rotate_array_0(size1369);
        uint8_t ivar_5;
        for (uint32_t index1368 = 0; index1368 < size1369; index1368++){
             ivar_5 = (uint8_t)index1368;
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)0;
             ivar_6 = (ivar_5 == ivar_8);
             if (ivar_6){  
           uint32_t ivar_18;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)24;
           ivar_18 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_16);
           uint32_t ivar_19;
           ivar_19 = (uint32_t)256;
           uint32_t ivar_17;
           ivar_17 = (uint32_t)integertypes__u32rem((uint32_t)ivar_18, (uint32_t)ivar_19);
           //copying to uint8 from uint32;
           ivar_53->elems[index1368] = (uint8_t)ivar_17;
} else {
             
           bool_t ivar_20;
           uint8_t ivar_22;
           ivar_22 = (uint8_t)1;
           ivar_20 = (ivar_5 == ivar_22);
           if (ivar_20){   
           uint32_t ivar_32;
           uint8_t ivar_30;
           ivar_30 = (uint8_t)16;
           ivar_32 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_30);
           uint32_t ivar_33;
           ivar_33 = (uint32_t)256;
           uint32_t ivar_31;
           ivar_31 = (uint32_t)integertypes__u32rem((uint32_t)ivar_32, (uint32_t)ivar_33);
           //copying to uint8 from uint32;
           ivar_53->elems[index1368] = (uint8_t)ivar_31;
} else {
           
           bool_t ivar_34;
           uint8_t ivar_36;
           ivar_36 = (uint8_t)2;
           ivar_34 = (ivar_5 == ivar_36);
           if (ivar_34){    
            uint32_t ivar_46;
            uint8_t ivar_44;
            ivar_44 = (uint8_t)8;
            ivar_46 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_44);
            uint32_t ivar_47;
            ivar_47 = (uint32_t)256;
            uint32_t ivar_45;
            ivar_45 = (uint32_t)integertypes__u32rem((uint32_t)ivar_46, (uint32_t)ivar_47);
            //copying to uint8 from uint32;
            ivar_53->elems[index1368] = (uint8_t)ivar_45;
} else {
           
            uint32_t ivar_52;
            ivar_52 = (uint32_t)256;
            uint32_t ivar_50;
            ivar_50 = (uint32_t)integertypes__u32rem((uint32_t)ivar_1, (uint32_t)ivar_52);
            //copying to uint8 from uint32;
            ivar_53->elems[index1368] = (uint8_t)ivar_50;
};
};
};
        };
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_2;
        result->seq = (rotate_array_0_t)ivar_53;

        return result;
}

extern bytestrings__bytestring_t rotate__test_u32tobytestring_0(void){
        bytestrings__bytestring_t result;
        uint32_t ivar_3;
        ivar_3 = (uint32_t)4294967295;
        bytestrings__bytestring_t ivar_2;
        ivar_2 = (bytestrings__bytestring_t)rotate__u32tobytestring((uint32_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_2;
        result->count++;
        release_bytestrings__bytestring(ivar_2);

        return result;
}

extern bytestrings__bytestring_t rotate__test_u32tobytestring_1(void){
        bytestrings__bytestring_t result;
        uint32_t ivar_3;
        ivar_3 = (uint32_t)252645135;
        bytestrings__bytestring_t ivar_2;
        ivar_2 = (bytestrings__bytestring_t)rotate__u32tobytestring((uint32_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_2;
        result->count++;
        release_bytestrings__bytestring(ivar_2);

        return result;
}

extern bytestrings__bytestring_t rotate__test_u32tobytestring_2(void){
        bytestrings__bytestring_t result;
        uint32_t ivar_3;
        ivar_3 = (uint32_t)4027576335;
        bytestrings__bytestring_t ivar_2;
        ivar_2 = (bytestrings__bytestring_t)rotate__u32tobytestring((uint32_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_2;
        result->count++;
        release_bytestrings__bytestring(ivar_2);

        return result;
}

extern bytestrings__bytestring_t rotate__test_u32tobytestring_3(void){
        bytestrings__bytestring_t result;
        uint32_t ivar_3;
        ivar_3 = (uint32_t)16711935;
        bytestrings__bytestring_t ivar_2;
        ivar_2 = (bytestrings__bytestring_t)rotate__u32tobytestring((uint32_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_2;
        result->count++;
        release_bytestrings__bytestring(ivar_2);

        return result;
}

extern bytestrings__bytestring_t rotate__u64tobytestring(uint64_t ivar_1){
        bytestrings__bytestring_t result;
        uint32_t ivar_2;
        ivar_2 = (uint32_t)8;
        rotate_array_0_t ivar_109;
        uint32_t size1372;
        //copying to uint32 from uint32;
        size1372 = (uint32_t)ivar_2;
        size1372 += 0;
        ivar_109 = new_rotate_array_0(size1372);
        uint8_t ivar_5;
        for (uint32_t index1371 = 0; index1371 < size1372; index1371++){
             ivar_5 = (uint8_t)index1371;
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)0;
             ivar_6 = (ivar_5 == ivar_8);
             if (ivar_6){  
           uint64_t ivar_18;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)56;
           ivar_18 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_1, (uint64_t)ivar_16);
           uint64_t ivar_19;
           ivar_19 = (uint64_t)256;
           uint64_t ivar_17;
           ivar_17 = (uint64_t)integertypes__u64rem((uint64_t)ivar_18, (uint64_t)ivar_19);
           //copying to uint8 from uint64;
           ivar_109->elems[index1371] = (uint8_t)ivar_17;
} else {
             
           bool_t ivar_20;
           uint8_t ivar_22;
           ivar_22 = (uint8_t)1;
           ivar_20 = (ivar_5 == ivar_22);
           if (ivar_20){   
           uint64_t ivar_32;
           uint8_t ivar_30;
           ivar_30 = (uint8_t)48;
           ivar_32 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_1, (uint64_t)ivar_30);
           uint64_t ivar_33;
           ivar_33 = (uint64_t)256;
           uint64_t ivar_31;
           ivar_31 = (uint64_t)integertypes__u64rem((uint64_t)ivar_32, (uint64_t)ivar_33);
           //copying to uint8 from uint64;
           ivar_109->elems[index1371] = (uint8_t)ivar_31;
} else {
           
           bool_t ivar_34;
           uint8_t ivar_36;
           ivar_36 = (uint8_t)2;
           ivar_34 = (ivar_5 == ivar_36);
           if (ivar_34){    
            uint64_t ivar_46;
            uint8_t ivar_44;
            ivar_44 = (uint8_t)40;
            ivar_46 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_1, (uint64_t)ivar_44);
            uint64_t ivar_47;
            ivar_47 = (uint64_t)256;
            uint64_t ivar_45;
            ivar_45 = (uint64_t)integertypes__u64rem((uint64_t)ivar_46, (uint64_t)ivar_47);
            //copying to uint8 from uint64;
            ivar_109->elems[index1371] = (uint8_t)ivar_45;
} else {
           
            bool_t ivar_48;
            uint8_t ivar_50;
            ivar_50 = (uint8_t)3;
            ivar_48 = (ivar_5 == ivar_50);
            if (ivar_48){     
             uint64_t ivar_60;
             uint8_t ivar_58;
             ivar_58 = (uint8_t)32;
             ivar_60 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_1, (uint64_t)ivar_58);
             uint64_t ivar_61;
             ivar_61 = (uint64_t)256;
             uint64_t ivar_59;
             ivar_59 = (uint64_t)integertypes__u64rem((uint64_t)ivar_60, (uint64_t)ivar_61);
             //copying to uint8 from uint64;
             ivar_109->elems[index1371] = (uint8_t)ivar_59;
} else {
            
             bool_t ivar_62;
             uint8_t ivar_64;
             ivar_64 = (uint8_t)4;
             ivar_62 = (ivar_5 == ivar_64);
             if (ivar_62){      
              uint64_t ivar_74;
              uint8_t ivar_72;
              ivar_72 = (uint8_t)24;
              ivar_74 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_1, (uint64_t)ivar_72);
              uint64_t ivar_75;
              ivar_75 = (uint64_t)256;
              uint64_t ivar_73;
              ivar_73 = (uint64_t)integertypes__u64rem((uint64_t)ivar_74, (uint64_t)ivar_75);
              //copying to uint8 from uint64;
              ivar_109->elems[index1371] = (uint8_t)ivar_73;
} else {
             
              bool_t ivar_76;
              uint8_t ivar_78;
              ivar_78 = (uint8_t)5;
              ivar_76 = (ivar_5 == ivar_78);
              if (ivar_76){       
               uint64_t ivar_88;
               uint8_t ivar_86;
               ivar_86 = (uint8_t)16;
               ivar_88 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_1, (uint64_t)ivar_86);
               uint64_t ivar_89;
               ivar_89 = (uint64_t)256;
               uint64_t ivar_87;
               ivar_87 = (uint64_t)integertypes__u64rem((uint64_t)ivar_88, (uint64_t)ivar_89);
               //copying to uint8 from uint64;
               ivar_109->elems[index1371] = (uint8_t)ivar_87;
} else {
              
               bool_t ivar_90;
               uint8_t ivar_92;
               ivar_92 = (uint8_t)6;
               ivar_90 = (ivar_5 == ivar_92);
               if (ivar_90){        
                uint64_t ivar_102;
                uint8_t ivar_100;
                ivar_100 = (uint8_t)8;
                ivar_102 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_1, (uint64_t)ivar_100);
                uint64_t ivar_103;
                ivar_103 = (uint64_t)256;
                uint64_t ivar_101;
                ivar_101 = (uint64_t)integertypes__u64rem((uint64_t)ivar_102, (uint64_t)ivar_103);
                //copying to uint8 from uint64;
                ivar_109->elems[index1371] = (uint8_t)ivar_101;
} else {
               
                uint64_t ivar_108;
                ivar_108 = (uint64_t)256;
                uint64_t ivar_106;
                ivar_106 = (uint64_t)integertypes__u64rem((uint64_t)ivar_1, (uint64_t)ivar_108);
                //copying to uint8 from uint64;
                ivar_109->elems[index1371] = (uint8_t)ivar_106;
};
};
};
};
};
};
};
        };
        result = (bytestrings__bytestring_t)new_bytestrings__bytestring();;
        result->length = (uint32_t)ivar_2;
        result->seq = (rotate_array_0_t)ivar_109;

        return result;
}

extern bytestrings__bytestring_t rotate__test_u64tobytestring_0(void){
        bytestrings__bytestring_t result;
        uint64_t ivar_13;
        uint64_t ivar_10;
        uint64_t ivar_7;
        ivar_7 = (uint64_t)4294967295;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)32;
        ivar_10 = (uint64_t)integertypes__u64lshift((uint64_t)ivar_7, (uint64_t)ivar_8);
        uint64_t ivar_11;
        ivar_11 = (uint64_t)4294967295;
        ivar_13 = (uint64_t)integertypes__u64plus((uint64_t)ivar_10, (uint64_t)ivar_11);
        bytestrings__bytestring_t ivar_12;
        ivar_12 = (bytestrings__bytestring_t)rotate__u64tobytestring((uint64_t)ivar_13);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_12;
        result->count++;
        release_bytestrings__bytestring(ivar_12);

        return result;
}

extern bytestrings__bytestring_t rotate__test_u64tobytestring_1(void){
        bytestrings__bytestring_t result;
        uint64_t ivar_3;
        ivar_3 = (uint64_t)1034834473200;
        bytestrings__bytestring_t ivar_2;
        ivar_2 = (bytestrings__bytestring_t)rotate__u64tobytestring((uint64_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_2;
        result->count++;
        release_bytestrings__bytestring(ivar_2);

        return result;
}

extern bytestrings__bytestring_t rotate__test_u64tobytestring_2(void){
        bytestrings__bytestring_t result;
        uint64_t ivar_3;
        ivar_3 = (uint64_t)16496952672000;
        bytestrings__bytestring_t ivar_2;
        ivar_2 = (bytestrings__bytestring_t)rotate__u64tobytestring((uint64_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_2;
        result->count++;
        release_bytestrings__bytestring(ivar_2);

        return result;
}

extern bytestrings__bytestring_t rotate__test_u64tobytestring_3(void){
        bytestrings__bytestring_t result;
        uint64_t ivar_3;
        ivar_3 = (uint64_t)68452085775;
        bytestrings__bytestring_t ivar_2;
        ivar_2 = (bytestrings__bytestring_t)rotate__u64tobytestring((uint64_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_2;
        result->count++;
        release_bytestrings__bytestring(ivar_2);

        return result;
}