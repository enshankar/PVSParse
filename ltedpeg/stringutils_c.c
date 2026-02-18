//Code generated using pvs2ir2c
#include "stringutils_c.h"


stringutils_array_0_t new_stringutils_array_0(uint32_t size){
        stringutils_array_0_t tmp = (stringutils_array_0_t) safe_malloc(sizeof(struct stringutils_array_0_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_stringutils_array_0(stringutils_array_0_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_stringutils_array_0_ptr(pointer_t x, type_actual_t T){
        release_stringutils_array_0((stringutils_array_0_t)x);
}

stringutils_array_0_t copy_stringutils_array_0(stringutils_array_0_t x){
        stringutils_array_0_t tmp = new_stringutils_array_0(x->max);
        tmp->count = 1;
        tmp->size = x->max;
        for (uint32_t i = 0; i < x->max; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_stringutils_array_0(stringutils_array_0_t x, stringutils_array_0_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_stringutils_array_0(stringutils_array_0_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint8(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_stringutils_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_stringutils_array_0((stringutils_array_0_t)x, (stringutils_array_0_t)y);
}

char * json_stringutils_array_0_ptr(pointer_t x, type_actual_t T){
        return json_stringutils_array_0((stringutils_array_0_t)x);
}

actual_stringutils_array_0_t actual_stringutils_array_0(){
        actual_stringutils_array_0_t new = (actual_stringutils_array_0_t)safe_malloc(sizeof(struct actual_stringutils_array_0_s));
        new->equal_ptr = (equal_ptr_t)(*equal_stringutils_array_0_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_stringutils_array_0_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_stringutils_array_0_ptr);
 

 
        return new;
 };

stringutils_array_0_t update_stringutils_array_0(stringutils_array_0_t x, uint32_t i, uint8_t v){
        stringutils_array_0_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_stringutils_array_0(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

stringutils_array_0_t upgrade_stringutils_array_0(stringutils_array_0_t x, uint32_t i, uint8_t v){
        stringutils_array_0_t y;
        uint32_t xmax = x->max;
         if (x->count == 1 && i < xmax){y = x;}
           else if (i >= xmax){uint32_t newmax = ((xmax < UINT32_MAX/2) ? ((i < 2 * (xmax + 1)) ? 2 * (xmax + 1) : i + 1) : UINT32_MAX);
                y = safe_realloc(x, sizeof(struct stringutils_array_0_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;}
           else {y = copy_stringutils_array_0(x );
                x->count--;};
        ;
        return y;}




stringutils_record_1_t new_stringutils_record_1(void){
        stringutils_record_1_t tmp = (stringutils_record_1_t) safe_malloc(sizeof(struct stringutils_record_1_s));
        tmp->count = 1;
        return tmp;}

void release_stringutils_record_1(stringutils_record_1_t x){
        x->count--;
        if (x->count <= 0){
         release_stringutils_array_0((stringutils_array_0_t)x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_stringutils_record_1_ptr(pointer_t x, type_actual_t T){
        release_stringutils_record_1((stringutils_record_1_t)x);
}

stringutils_record_1_t copy_stringutils_record_1(stringutils_record_1_t x){
        stringutils_record_1_t y = new_stringutils_record_1();
        y->length = (uint32_t)x->length;
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_stringutils_record_1(stringutils_record_1_t x, stringutils_record_1_t y){
        bool_t tmp = true; tmp = tmp && x->length == y->length; tmp = tmp && equal_stringutils_array_0((stringutils_array_0_t)x->seq, (stringutils_array_0_t)y->seq);
        return tmp;}

char * json_stringutils_record_1(stringutils_record_1_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(18);
         sprintf(fld0, "\"length\" : ");
        tmp[0] = safe_strcat(fld0, json_uint32(x->length));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"seq\" : ");
        tmp[1] = safe_strcat(fld1, json_stringutils_array_0((stringutils_array_0_t)x->seq));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_stringutils_record_1_ptr(pointer_t x, pointer_t y, actual_stringutils_record_1_t T){
        return equal_stringutils_record_1((stringutils_record_1_t)x, (stringutils_record_1_t)y);
}

char * json_stringutils_record_1_ptr(pointer_t x, actual_stringutils_record_1_t T){
        return json_stringutils_record_1((stringutils_record_1_t)x);
}

actual_stringutils_record_1_t actual_stringutils_record_1(){
        actual_stringutils_record_1_t new = (actual_stringutils_record_1_t)safe_malloc(sizeof(struct actual_stringutils_record_1_s));
        new->equal_ptr = (equal_ptr_t)(*equal_stringutils_record_1_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_stringutils_record_1_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_stringutils_record_1_ptr);
 

 
        return new;
 };

stringutils_record_1_t update_stringutils_record_1_length(stringutils_record_1_t x, uint32_t v){
        stringutils_record_1_t y;
        if (x->count == 1){y = x;}
        else {y = copy_stringutils_record_1(x); x->count--;};
        y->length = (uint32_t)v;
        return y;}

stringutils_record_1_t update_stringutils_record_1_seq(stringutils_record_1_t x, stringutils_array_0_t v){
        stringutils_record_1_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_stringutils_array_0((stringutils_array_0_t)x->seq);};}
        else {y = copy_stringutils_record_1(x); x->count--; y->seq->count--;};
        y->seq = (stringutils_array_0_t)v;
        return y;}




stringutils_array_2_t new_stringutils_array_2(uint32_t size){
        stringutils_array_2_t tmp = (stringutils_array_2_t) safe_malloc(sizeof(struct stringutils_array_2_s) + (size * sizeof(mpq_ptr_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_stringutils_array_2(stringutils_array_2_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_stringutils_array_2_ptr(pointer_t x, type_actual_t T){
        release_stringutils_array_2((stringutils_array_2_t)x);
}

stringutils_array_2_t copy_stringutils_array_2(stringutils_array_2_t x){
        stringutils_array_2_t tmp = new_stringutils_array_2(x->max);
        tmp->count = 1;
        tmp->size = x->max;
        for (uint32_t i = 0; i < x->max; i++){ tmp->elems[i] = (mpq_ptr_t)safe_malloc(sizeof(mpq_t));
                mpq_init(tmp->elems[i]);
                if (i < x->size) mpq_set(tmp->elems[i], x->elems[i]);};
         return tmp;}

bool_t equal_stringutils_array_2(stringutils_array_2_t x, stringutils_array_2_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while  (i < x->size && tmp){tmp = (mpq_cmp(x->elems[i], y->elems[i]) == 0); i++;};
        return tmp;}

char * json_stringutils_array_2(stringutils_array_2_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_mpq(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_stringutils_array_2_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_stringutils_array_2((stringutils_array_2_t)x, (stringutils_array_2_t)y);
}

char * json_stringutils_array_2_ptr(pointer_t x, type_actual_t T){
        return json_stringutils_array_2((stringutils_array_2_t)x);
}

actual_stringutils_array_2_t actual_stringutils_array_2(){
        actual_stringutils_array_2_t new = (actual_stringutils_array_2_t)safe_malloc(sizeof(struct actual_stringutils_array_2_s));
        new->equal_ptr = (equal_ptr_t)(*equal_stringutils_array_2_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_stringutils_array_2_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_stringutils_array_2_ptr);
 

 
        return new;
 };

stringutils_array_2_t update_stringutils_array_2(stringutils_array_2_t x, uint32_t i, mpq_t v){
        stringutils_array_2_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_stringutils_array_2(x );
                x->count--;};
        mpq_set(y->elems[i], v);
        return y;}

stringutils_array_2_t upgrade_stringutils_array_2(stringutils_array_2_t x, uint32_t i, mpq_t v){
        stringutils_array_2_t y;
        uint32_t xmax = x->max;
         if (x->count == 1 && i < xmax){y = x;}
           else if (i >= xmax){uint32_t newmax = ((xmax < UINT32_MAX/2) ? ((i < 2 * (xmax + 1)) ? 2 * (xmax + 1) : i + 1) : UINT32_MAX);
                y = safe_realloc(x, sizeof(struct stringutils_array_2_s) + (newmax * sizeof(mpq_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;}
           else {y = copy_stringutils_array_2(x );
                x->count--;};
        ;
        return y;}




stringutils_record_3_t new_stringutils_record_3(void){
        stringutils_record_3_t tmp = (stringutils_record_3_t) safe_malloc(sizeof(struct stringutils_record_3_s));
        tmp->count = 1;
        return tmp;}

void release_stringutils_record_3(stringutils_record_3_t x){
        x->count--;
        if (x->count <= 0){
         release_stringutils_array_2((stringutils_array_2_t)x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_stringutils_record_3_ptr(pointer_t x, type_actual_t T){
        release_stringutils_record_3((stringutils_record_3_t)x);
}

stringutils_record_3_t copy_stringutils_record_3(stringutils_record_3_t x){
        stringutils_record_3_t y = new_stringutils_record_3();
        y->length = (uint8_t)x->length;
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_stringutils_record_3(stringutils_record_3_t x, stringutils_record_3_t y){
        bool_t tmp = true; tmp = tmp && x->length == y->length; tmp = tmp && equal_stringutils_array_2((stringutils_array_2_t)x->seq, (stringutils_array_2_t)y->seq);
        return tmp;}

char * json_stringutils_record_3(stringutils_record_3_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(18);
         sprintf(fld0, "\"length\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->length));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"seq\" : ");
        tmp[1] = safe_strcat(fld1, json_stringutils_array_2((stringutils_array_2_t)x->seq));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_stringutils_record_3_ptr(pointer_t x, pointer_t y, actual_stringutils_record_3_t T){
        return equal_stringutils_record_3((stringutils_record_3_t)x, (stringutils_record_3_t)y);
}

char * json_stringutils_record_3_ptr(pointer_t x, actual_stringutils_record_3_t T){
        return json_stringutils_record_3((stringutils_record_3_t)x);
}

actual_stringutils_record_3_t actual_stringutils_record_3(){
        actual_stringutils_record_3_t new = (actual_stringutils_record_3_t)safe_malloc(sizeof(struct actual_stringutils_record_3_s));
        new->equal_ptr = (equal_ptr_t)(*equal_stringutils_record_3_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_stringutils_record_3_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_stringutils_record_3_ptr);
 

 
        return new;
 };

stringutils_record_3_t update_stringutils_record_3_length(stringutils_record_3_t x, uint8_t v){
        stringutils_record_3_t y;
        if (x->count == 1){y = x;}
        else {y = copy_stringutils_record_3(x); x->count--;};
        y->length = (uint8_t)v;
        return y;}

stringutils_record_3_t update_stringutils_record_3_seq(stringutils_record_3_t x, stringutils_array_2_t v){
        stringutils_record_3_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_stringutils_array_2((stringutils_array_2_t)x->seq);};}
        else {y = copy_stringutils_record_3(x); x->count--; y->seq->count--;};
        y->seq = (stringutils_array_2_t)v;
        return y;}




stringutils_array_4_t new_stringutils_array_4(uint32_t size){
        stringutils_array_4_t tmp = (stringutils_array_4_t) safe_malloc(sizeof(struct stringutils_array_4_s) + (size * sizeof(bytestrings__bytestring_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_stringutils_array_4(stringutils_array_4_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_bytestrings__bytestring((bytestrings__bytestring_t)x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_stringutils_array_4_ptr(pointer_t x, type_actual_t T){
        release_stringutils_array_4((stringutils_array_4_t)x);
}

stringutils_array_4_t copy_stringutils_array_4(stringutils_array_4_t x){
        stringutils_array_4_t tmp = new_stringutils_array_4(x->max);
        tmp->count = 1;
        tmp->size = x->max;
        for (uint32_t i = 0; i < x->max; i++){tmp->elems[i] = x->elems[i];
                if (i < x->size) x->elems[i]->count++;};
         return tmp;}

bool_t equal_stringutils_array_4(stringutils_array_4_t x, stringutils_array_4_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_bytestrings__bytestring(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_stringutils_array_4(stringutils_array_4_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_bytestrings__bytestring(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_stringutils_array_4_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_stringutils_array_4((stringutils_array_4_t)x, (stringutils_array_4_t)y);
}

char * json_stringutils_array_4_ptr(pointer_t x, type_actual_t T){
        return json_stringutils_array_4((stringutils_array_4_t)x);
}

actual_stringutils_array_4_t actual_stringutils_array_4(){
        actual_stringutils_array_4_t new = (actual_stringutils_array_4_t)safe_malloc(sizeof(struct actual_stringutils_array_4_s));
        new->equal_ptr = (equal_ptr_t)(*equal_stringutils_array_4_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_stringutils_array_4_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_stringutils_array_4_ptr);
 

 
        return new;
 };

stringutils_array_4_t update_stringutils_array_4(stringutils_array_4_t x, uint32_t i, bytestrings__bytestring_t v){
         stringutils_array_4_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_stringutils_array_4(x);
                      x->count--;};
        bytestrings__bytestring_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_bytestrings__bytestring((bytestrings__bytestring_t)yelems[i]);};
         yelems[i] = v;
         return y;}

stringutils_array_4_t upgrade_stringutils_array_4(stringutils_array_4_t x, uint32_t i, bytestrings__bytestring_t v){
         stringutils_array_4_t y;
        uint32_t xmax = x->max;
        uint32_t xsize = x->size;
         if (x->count == 1 && i < xmax){y = x;}
                 else if (i >= xmax){
                            uint32_t newmax = ((xmax < UINT32_MAX/2)  ? ((i < 2 * (xmax + 1))  ? 2 * (xmax + 1) : i + 1) : UINT32_MAX);
                            y = safe_realloc(x, sizeof(struct stringutils_array_4_s) + (newmax * sizeof(bytestrings__bytestring_t)));
                            y->count = 1;
                            y->max = newmax;
                            for (uint32_t j = xsize; j < newmax; j++){y->elems[j] = NULL;};}
                         else {y = copy_stringutils_array_4(x);
                            x->count--;};
        bytestrings__bytestring_t * yelems = y->elems;
        if (v != NULL){v->count++;};
        y->size = xsize > i ? xsize : i + 1;
        if (i < xmax && yelems[i] != NULL){release_bytestrings__bytestring((bytestrings__bytestring_t)yelems[i]);};
         yelems[i] = v;
         return y;}




stringutils_record_5_t new_stringutils_record_5(void){
        stringutils_record_5_t tmp = (stringutils_record_5_t) safe_malloc(sizeof(struct stringutils_record_5_s));
        tmp->count = 1;
        return tmp;}

void release_stringutils_record_5(stringutils_record_5_t x){
        x->count--;
        if (x->count <= 0){
         release_stringutils_array_4((stringutils_array_4_t)x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_stringutils_record_5_ptr(pointer_t x, type_actual_t T){
        release_stringutils_record_5((stringutils_record_5_t)x);
}

stringutils_record_5_t copy_stringutils_record_5(stringutils_record_5_t x){
        stringutils_record_5_t y = new_stringutils_record_5();
        y->length = (uint32_t)x->length;
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_stringutils_record_5(stringutils_record_5_t x, stringutils_record_5_t y){
        bool_t tmp = true; tmp = tmp && x->length == y->length; tmp = tmp && equal_stringutils_array_4((stringutils_array_4_t)x->seq, (stringutils_array_4_t)y->seq);
        return tmp;}

char * json_stringutils_record_5(stringutils_record_5_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(18);
         sprintf(fld0, "\"length\" : ");
        tmp[0] = safe_strcat(fld0, json_uint32(x->length));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"seq\" : ");
        tmp[1] = safe_strcat(fld1, json_stringutils_array_4((stringutils_array_4_t)x->seq));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_stringutils_record_5_ptr(pointer_t x, pointer_t y, actual_stringutils_record_5_t T){
        return equal_stringutils_record_5((stringutils_record_5_t)x, (stringutils_record_5_t)y);
}

char * json_stringutils_record_5_ptr(pointer_t x, actual_stringutils_record_5_t T){
        return json_stringutils_record_5((stringutils_record_5_t)x);
}

actual_stringutils_record_5_t actual_stringutils_record_5(){
        actual_stringutils_record_5_t new = (actual_stringutils_record_5_t)safe_malloc(sizeof(struct actual_stringutils_record_5_s));
        new->equal_ptr = (equal_ptr_t)(*equal_stringutils_record_5_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_stringutils_record_5_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_stringutils_record_5_ptr);
 

 
        return new;
 };

stringutils_record_5_t update_stringutils_record_5_length(stringutils_record_5_t x, uint32_t v){
        stringutils_record_5_t y;
        if (x->count == 1){y = x;}
        else {y = copy_stringutils_record_5(x); x->count--;};
        y->length = (uint32_t)v;
        return y;}

stringutils_record_5_t update_stringutils_record_5_seq(stringutils_record_5_t x, stringutils_array_4_t v){
        stringutils_record_5_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_stringutils_array_4((stringutils_array_4_t)x->seq);};}
        else {y = copy_stringutils_record_5(x); x->count--; y->seq->count--;};
        y->seq = (stringutils_array_4_t)v;
        return y;}




stringutils_record_6_t new_stringutils_record_6(void){
        stringutils_record_6_t tmp = (stringutils_record_6_t) safe_malloc(sizeof(struct stringutils_record_6_s));
        tmp->count = 1;
        return tmp;}

void release_stringutils_record_6(stringutils_record_6_t x){
        x->count--;
        if (x->count <= 0){
         release_stringutils_array_4((stringutils_array_4_t)x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_stringutils_record_6_ptr(pointer_t x, type_actual_t T){
        release_stringutils_record_6((stringutils_record_6_t)x);
}

stringutils_record_6_t copy_stringutils_record_6(stringutils_record_6_t x){
        stringutils_record_6_t y = new_stringutils_record_6();
        y->length = (uint8_t)x->length;
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_stringutils_record_6(stringutils_record_6_t x, stringutils_record_6_t y){
        bool_t tmp = true; tmp = tmp && x->length == y->length; tmp = tmp && equal_stringutils_array_4((stringutils_array_4_t)x->seq, (stringutils_array_4_t)y->seq);
        return tmp;}

char * json_stringutils_record_6(stringutils_record_6_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(18);
         sprintf(fld0, "\"length\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->length));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"seq\" : ");
        tmp[1] = safe_strcat(fld1, json_stringutils_array_4((stringutils_array_4_t)x->seq));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_stringutils_record_6_ptr(pointer_t x, pointer_t y, actual_stringutils_record_6_t T){
        return equal_stringutils_record_6((stringutils_record_6_t)x, (stringutils_record_6_t)y);
}

char * json_stringutils_record_6_ptr(pointer_t x, actual_stringutils_record_6_t T){
        return json_stringutils_record_6((stringutils_record_6_t)x);
}

actual_stringutils_record_6_t actual_stringutils_record_6(){
        actual_stringutils_record_6_t new = (actual_stringutils_record_6_t)safe_malloc(sizeof(struct actual_stringutils_record_6_s));
        new->equal_ptr = (equal_ptr_t)(*equal_stringutils_record_6_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_stringutils_record_6_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_stringutils_record_6_ptr);
 

 
        return new;
 };

stringutils_record_6_t update_stringutils_record_6_length(stringutils_record_6_t x, uint8_t v){
        stringutils_record_6_t y;
        if (x->count == 1){y = x;}
        else {y = copy_stringutils_record_6(x); x->count--;};
        y->length = (uint8_t)v;
        return y;}

stringutils_record_6_t update_stringutils_record_6_seq(stringutils_record_6_t x, stringutils_array_4_t v){
        stringutils_record_6_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_stringutils_array_4((stringutils_array_4_t)x->seq);};}
        else {y = copy_stringutils_record_6(x); x->count--; y->seq->count--;};
        y->seq = (stringutils_array_4_t)v;
        return y;}



bool_t stringutils__digit(uint8_t ivar_1){
        bool_t  result;

        bool_t ivar_2;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)48;
        ivar_2 = (ivar_1 >= ivar_5);
        if (ivar_2){
             uint8_t ivar_8;
             ivar_8 = (uint8_t)57;
             result = (ivar_1 <= ivar_8);
        } else {
             result = (bool_t) false;};
        
        
        return result;
}

bool_t stringutils__any(uint8_t ivar_1){
        bool_t  result;

        result = (bool_t) true;
        
        
        return result;
}

bool_t stringutils__whitespace(uint8_t ivar_1){
        bool_t  result;

        bool_t ivar_2;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)32;
        ivar_2 = (ivar_1 == ivar_5);
        if (ivar_2){
             result = (bool_t) true;
        } else {
             bool_t ivar_7;
             uint8_t ivar_10;
             ivar_10 = (uint8_t)9;
             ivar_7 = (ivar_1 >= ivar_10);
             if (ivar_7){
           uint8_t ivar_13;
           ivar_13 = (uint8_t)13;
           result = (ivar_1 <= ivar_13);
             } else {
           result = (bool_t) false;};};
        
        
        return result;
}

bool_t stringutils__is_quote(uint8_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)34;
        result = (ivar_1 == ivar_3);
        
        
        return result;
}

bool_t stringutils__is_backslash(uint8_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)92;
        result = (ivar_1 == ivar_3);
        
        
        return result;
}

bool_t stringutils__is_slash(uint8_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)47;
        result = (ivar_1 == ivar_3);
        
        
        return result;
}

bool_t stringutils__is_t(uint8_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)116;
        result = (ivar_1 == ivar_3);
        
        
        return result;
}

bool_t stringutils__is_r(uint8_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)114;
        result = (ivar_1 == ivar_3);
        
        
        return result;
}

bool_t stringutils__is_f(uint8_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)102;
        result = (ivar_1 == ivar_3);
        
        
        return result;
}

bool_t stringutils__is_n(uint8_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)110;
        result = (ivar_1 == ivar_3);
        
        
        return result;
}

bool_t stringutils__is_b(uint8_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)98;
        result = (ivar_1 == ivar_3);
        
        
        return result;
}

bool_t stringutils__is_dot(uint8_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)46;
        result = (ivar_1 == ivar_3);
        
        
        return result;
}

bool_t stringutils__is_eE(uint8_t ivar_1){
        bool_t  result;

        bool_t ivar_2;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)69;
        ivar_2 = (ivar_1 == ivar_5);
        if (ivar_2){
             result = (bool_t) true;
        } else {
             uint8_t ivar_8;
             ivar_8 = (uint8_t)101;
             result = (ivar_1 == ivar_8);};
        
        
        return result;
}

bool_t stringutils__is_plus(uint8_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)43;
        result = (ivar_1 == ivar_3);
        
        
        return result;
}

bool_t stringutils__is_minus(uint8_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)45;
        result = (ivar_1 == ivar_3);
        
        
        return result;
}

bool_t stringutils__is_u(uint8_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)117;
        result = (ivar_1 == ivar_3);
        
        
        return result;
}

bool_t stringutils__is_e(uint8_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)101;
        result = (ivar_1 == ivar_3);
        
        
        return result;
}

bool_t stringutils__is_a(uint8_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)97;
        result = (ivar_1 == ivar_3);
        
        
        return result;
}

bool_t stringutils__is_l(uint8_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)108;
        result = (ivar_1 == ivar_3);
        
        
        return result;
}

bool_t stringutils__is_s(uint8_t ivar_1){
        bool_t  result;

        uint8_t ivar_3;
        ivar_3 = (uint8_t)115;
        result = (ivar_1 == ivar_3);
        
        
        return result;
}

bool_t stringutils__escapable(uint8_t ivar_1){
        bool_t  result;

        bool_t ivar_2;
        ivar_2 = (bool_t)stringutils__is_quote((uint8_t)ivar_1);
        if (ivar_2){
             result = (bool_t) true;
        } else {
             bool_t ivar_7;
             ivar_7 = (bool_t)stringutils__is_backslash((uint8_t)ivar_1);
             if (ivar_7){
           result = (bool_t) true;
             } else {
           bool_t ivar_12;
           ivar_12 = (bool_t)stringutils__is_slash((uint8_t)ivar_1);
           if (ivar_12){
           result = (bool_t) true;
           } else {
           bool_t ivar_17;
           ivar_17 = (bool_t)stringutils__is_b((uint8_t)ivar_1);
           if (ivar_17){
            result = (bool_t) true;
           } else {
            bool_t ivar_22;
            ivar_22 = (bool_t)stringutils__is_f((uint8_t)ivar_1);
            if (ivar_22){
             result = (bool_t) true;
            } else {
             bool_t ivar_27;
             ivar_27 = (bool_t)stringutils__is_n((uint8_t)ivar_1);
             if (ivar_27){
              result = (bool_t) true;
             } else {
              bool_t ivar_32;
              ivar_32 = (bool_t)stringutils__is_r((uint8_t)ivar_1);
              if (ivar_32){
               result = (bool_t) true;
              } else {
               result = (bool_t)stringutils__is_t((uint8_t)ivar_1);};};};};};};};
        
        
        return result;
}

uint8_t stringutils__escape_convert(uint8_t ivar_1){
        uint8_t  result;

        bool_t ivar_2;
        ivar_2 = (bool_t)stringutils__is_quote((uint8_t)ivar_1);
        if (ivar_2){
             result = (uint8_t)34;
        } else {
             bool_t ivar_6;
             ivar_6 = (bool_t)stringutils__is_backslash((uint8_t)ivar_1);
             if (ivar_6){
           result = (uint8_t)92;
             } else {
           bool_t ivar_10;
           ivar_10 = (bool_t)stringutils__is_slash((uint8_t)ivar_1);
           if (ivar_10){
           result = (uint8_t)47;
           } else {
           bool_t ivar_14;
           ivar_14 = (bool_t)stringutils__is_b((uint8_t)ivar_1);
           if (ivar_14){
            result = (uint8_t)8;
           } else {
            bool_t ivar_18;
            ivar_18 = (bool_t)stringutils__is_t((uint8_t)ivar_1);
            if (ivar_18){
             result = (uint8_t)9;
            } else {
             bool_t ivar_22;
             ivar_22 = (bool_t)stringutils__is_n((uint8_t)ivar_1);
             if (ivar_22){
              result = (uint8_t)10;
             } else {
              bool_t ivar_26;
              ivar_26 = (bool_t)stringutils__is_f((uint8_t)ivar_1);
              if (ivar_26){
               result = (uint8_t)12;
              } else {
               bool_t ivar_30;
               ivar_30 = (bool_t)stringutils__is_r((uint8_t)ivar_1);
               if (ivar_30){
                result = (uint8_t)13;
               } else {
                result = (uint8_t)0;};};};};};};};};
        
        
        return result;
}

bytestrings__bytestring_t stringutils__escape_char(uint8_t ivar_1){
        bytestrings__bytestring_t  result;

        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)34;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){
             uint32_t ivar_6;
             ivar_6 = (uint32_t)2;
             stringutils_array_0_t ivar_10;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)92;
             uint8_t ivar_9;
             ivar_9 = (uint8_t)34;
             ivar_10 = (stringutils_array_0_t)new_stringutils_array_0(2);
             ivar_10->elems[0]= ivar_8;
             ivar_10->elems[1]= ivar_9;
             stringutils_record_1_t tmp34071 = new_stringutils_record_1();;
             result = (bytestrings__bytestring_t)tmp34071;
             tmp34071->length = (uint32_t)ivar_6;
             tmp34071->seq = (stringutils_array_0_t)ivar_10;
        } else {
             bool_t ivar_11;
             uint8_t ivar_13;
             ivar_13 = (uint8_t)92;
             ivar_11 = (ivar_1 == ivar_13);
             if (ivar_11){
           uint32_t ivar_15;
           ivar_15 = (uint32_t)2;
           stringutils_array_0_t ivar_19;
           uint8_t ivar_17;
           ivar_17 = (uint8_t)92;
           uint8_t ivar_18;
           ivar_18 = (uint8_t)92;
           ivar_19 = (stringutils_array_0_t)new_stringutils_array_0(2);
           ivar_19->elems[0]= ivar_17;
           ivar_19->elems[1]= ivar_18;
           stringutils_record_1_t tmp34072 = new_stringutils_record_1();;
           result = (bytestrings__bytestring_t)tmp34072;
           tmp34072->length = (uint32_t)ivar_15;
           tmp34072->seq = (stringutils_array_0_t)ivar_19;
             } else {
           bool_t ivar_20;
           uint8_t ivar_22;
           ivar_22 = (uint8_t)8;
           ivar_20 = (ivar_1 == ivar_22);
           if (ivar_20){
           uint32_t ivar_24;
           ivar_24 = (uint32_t)2;
           stringutils_array_0_t ivar_28;
           uint8_t ivar_26;
           ivar_26 = (uint8_t)92;
           uint8_t ivar_27;
           ivar_27 = (uint8_t)98;
           ivar_28 = (stringutils_array_0_t)new_stringutils_array_0(2);
           ivar_28->elems[0]= ivar_26;
           ivar_28->elems[1]= ivar_27;
           stringutils_record_1_t tmp34073 = new_stringutils_record_1();;
           result = (bytestrings__bytestring_t)tmp34073;
           tmp34073->length = (uint32_t)ivar_24;
           tmp34073->seq = (stringutils_array_0_t)ivar_28;
           } else {
           bool_t ivar_29;
           uint8_t ivar_31;
           ivar_31 = (uint8_t)9;
           ivar_29 = (ivar_1 == ivar_31);
           if (ivar_29){
            uint32_t ivar_33;
            ivar_33 = (uint32_t)2;
            stringutils_array_0_t ivar_37;
            uint8_t ivar_35;
            ivar_35 = (uint8_t)92;
            uint8_t ivar_36;
            ivar_36 = (uint8_t)116;
            ivar_37 = (stringutils_array_0_t)new_stringutils_array_0(2);
            ivar_37->elems[0]= ivar_35;
            ivar_37->elems[1]= ivar_36;
            stringutils_record_1_t tmp34074 = new_stringutils_record_1();;
            result = (bytestrings__bytestring_t)tmp34074;
            tmp34074->length = (uint32_t)ivar_33;
            tmp34074->seq = (stringutils_array_0_t)ivar_37;
           } else {
            bool_t ivar_38;
            uint8_t ivar_40;
            ivar_40 = (uint8_t)10;
            ivar_38 = (ivar_1 == ivar_40);
            if (ivar_38){
             uint32_t ivar_42;
             ivar_42 = (uint32_t)2;
             stringutils_array_0_t ivar_46;
             uint8_t ivar_44;
             ivar_44 = (uint8_t)92;
             uint8_t ivar_45;
             ivar_45 = (uint8_t)110;
             ivar_46 = (stringutils_array_0_t)new_stringutils_array_0(2);
             ivar_46->elems[0]= ivar_44;
             ivar_46->elems[1]= ivar_45;
             stringutils_record_1_t tmp34075 = new_stringutils_record_1();;
             result = (bytestrings__bytestring_t)tmp34075;
             tmp34075->length = (uint32_t)ivar_42;
             tmp34075->seq = (stringutils_array_0_t)ivar_46;
            } else {
             bool_t ivar_47;
             uint8_t ivar_49;
             ivar_49 = (uint8_t)12;
             ivar_47 = (ivar_1 == ivar_49);
             if (ivar_47){
              uint32_t ivar_51;
              ivar_51 = (uint32_t)2;
              stringutils_array_0_t ivar_55;
              uint8_t ivar_53;
              ivar_53 = (uint8_t)92;
              uint8_t ivar_54;
              ivar_54 = (uint8_t)102;
              ivar_55 = (stringutils_array_0_t)new_stringutils_array_0(2);
              ivar_55->elems[0]= ivar_53;
              ivar_55->elems[1]= ivar_54;
              stringutils_record_1_t tmp34076 = new_stringutils_record_1();;
              result = (bytestrings__bytestring_t)tmp34076;
              tmp34076->length = (uint32_t)ivar_51;
              tmp34076->seq = (stringutils_array_0_t)ivar_55;
             } else {
              bool_t ivar_56;
              uint8_t ivar_58;
              ivar_58 = (uint8_t)13;
              ivar_56 = (ivar_1 == ivar_58);
              if (ivar_56){
               uint32_t ivar_60;
               ivar_60 = (uint32_t)2;
               stringutils_array_0_t ivar_64;
               uint8_t ivar_62;
               ivar_62 = (uint8_t)92;
               uint8_t ivar_63;
               ivar_63 = (uint8_t)114;
               ivar_64 = (stringutils_array_0_t)new_stringutils_array_0(2);
               ivar_64->elems[0]= ivar_62;
               ivar_64->elems[1]= ivar_63;
               stringutils_record_1_t tmp34077 = new_stringutils_record_1();;
               result = (bytestrings__bytestring_t)tmp34077;
               tmp34077->length = (uint32_t)ivar_60;
               tmp34077->seq = (stringutils_array_0_t)ivar_64;
              } else {
               uint32_t ivar_65;
               ivar_65 = (uint32_t)1;
               stringutils_array_0_t ivar_67;
               ivar_67 = (stringutils_array_0_t)new_stringutils_array_0(1);
               ivar_67->elems[0]= ivar_1;
               stringutils_record_1_t tmp34078 = new_stringutils_record_1();;
               result = (bytestrings__bytestring_t)tmp34078;
               tmp34078->length = (uint32_t)ivar_65;
               tmp34078->seq = (stringutils_array_0_t)ivar_67;};};};};};};};
        
        result->count++;
        return result;
}

bytestrings__bytestring_t stringutils__escape_string_inner(bytestrings__bytestring_t ivar_1, uint32_t ivar_2, bytestrings__bytestring_t ivar_4){
        bytestrings__bytestring_t  result;

        bool_t ivar_5;
        uint32_t ivar_7;
        ivar_7 = (uint32_t)ivar_1->length;
        ivar_5 = (ivar_2 >= ivar_7);
        if (ivar_5){
             release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
             //copying to bytestrings__bytestring from bytestrings__bytestring;
             result = (bytestrings__bytestring_t)ivar_4;
             if (result != NULL) result->count++;
             release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_4);
        } else {
             uint32_t ivar_32;
             uint8_t ivar_14;
             ivar_14 = (uint8_t)1;
             ivar_32 = (uint32_t)(ivar_2 + ivar_14);
             bytestrings__bytestring_t ivar_34;
             bytestrings__bytestring_t ivar_29;
             uint8_t ivar_26;
             ivar_1->count++;
             ivar_26 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_2);
             ivar_29 = (bytestrings__bytestring_t)stringutils__escape_char((uint8_t)ivar_26);
             ivar_34 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_4, (bytestrings__bytestring_t)ivar_29);
             result = (bytestrings__bytestring_t)stringutils__escape_string_inner((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_32, (bytestrings__bytestring_t)ivar_34);};
        
        result->count++;
        return result;
}

bytestrings__bytestring_t stringutils__escape_string(bytestrings__bytestring_t ivar_1){
        bytestrings__bytestring_t  result;

        uint8_t ivar_15;
        ivar_15 = (uint8_t)0;
        uint32_t ivar_11;
        //copying to uint32 from uint8;
        ivar_11 = (uint32_t)ivar_15;
        bytestrings__bytestring_t ivar_13;
        strings__string_t ivar_8;
        uint32_t len34082 = 0;
        uint32_t characters34083[0] = {};
        stringliteral_t string34081 = mk_string(0, characters34083);
        ivar_8 = (strings__string_t)strings__make_string(len34082, string34081);
        ivar_13 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        result = (bytestrings__bytestring_t)stringutils__escape_string_inner((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_11, (bytestrings__bytestring_t)ivar_13);
        
        result->count++;
        return result;
}

bool_t stringutils__escape_string_test_empty(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_9;
        strings__string_t ivar_7;
        uint32_t len34089 = 0;
        uint32_t characters34090[0] = {};
        stringliteral_t string34088 = mk_string(0, characters34090);
        ivar_7 = (strings__string_t)strings__make_string(len34089, string34088);
        ivar_9 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        ivar_1 = (bytestrings__bytestring_t)stringutils__escape_string((bytestrings__bytestring_t)ivar_9);
        bytestrings__bytestring_t ivar_2;
        strings__string_t ivar_13;
        uint32_t len34092 = 0;
        uint32_t characters34093[0] = {};
        stringliteral_t string34091 = mk_string(0, characters34093);
        ivar_13 = (strings__string_t)strings__make_string(len34092, string34091);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_13);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__escape_string_test_no_escape(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_9;
        strings__string_t ivar_7;
        uint32_t len34099 = 5;
        uint32_t characters34100[5] = {104, 101, 108, 108, 111};
        stringliteral_t string34098 = mk_string(5, characters34100);
        ivar_7 = (strings__string_t)strings__make_string(len34099, string34098);
        ivar_9 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        ivar_1 = (bytestrings__bytestring_t)stringutils__escape_string((bytestrings__bytestring_t)ivar_9);
        bytestrings__bytestring_t ivar_2;
        strings__string_t ivar_13;
        uint32_t len34102 = 5;
        uint32_t characters34103[5] = {104, 101, 108, 108, 111};
        stringliteral_t string34101 = mk_string(5, characters34103);
        ivar_13 = (strings__string_t)strings__make_string(len34102, string34101);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_13);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__escape_string_test_quote(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        stringutils_record_3_t ivar_12;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)1;
        stringutils_array_2_t ivar_7;
        mpq_ptr_t ivar_6;
        ivar_6 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_6);
        mpq_mk_set_ui(ivar_6, 34);
        ivar_7 = (stringutils_array_2_t)new_stringutils_array_2(1);
        ivar_7->elems[0]= ivar_6;
        stringutils_record_3_t tmp34114 = new_stringutils_record_3();;
        ivar_12 = (stringutils_record_3_t)tmp34114;
        tmp34114->length = (uint8_t)ivar_4;
        tmp34114->seq = (stringutils_array_2_t)ivar_7;
        bytestrings__bytestring_t ivar_10;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_10 = new_stringutils_record_1();
         ivar_10->length = (uint32_t)ivar_12->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_10->length;
         uint32_t tmp34115;
         //copying to uint32 from uint32;
         tmp34115 = (uint32_t)length8839;
         tmp34115 += 0;
         ivar_10->seq = new_stringutils_array_0(tmp34115);
         for (uint32_t index_31 = 0; index_31 < tmp34115; index_31++){
                 ivar_10->seq->elems[index_31] = (uint8_t)mpq_get_ui(ivar_12->seq->elems[index_31]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_10->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_12);
        ivar_1 = (bytestrings__bytestring_t)stringutils__escape_string((bytestrings__bytestring_t)ivar_10);
        bytestrings__bytestring_t ivar_2;
        bytestrings__bytestring_t ivar_26;
        strings__string_t ivar_18;
        uint32_t len34117 = 0;
        uint32_t characters34118[0] = {};
        stringliteral_t string34116 = mk_string(0, characters34118);
        ivar_18 = (strings__string_t)strings__make_string(len34117, string34116);
        ivar_26 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_18);
        stringutils_record_3_t ivar_29;
        uint8_t ivar_19;
        ivar_19 = (uint8_t)2;
        stringutils_array_2_t ivar_23;
        mpq_ptr_t ivar_21;
        ivar_21 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_21);
        mpq_mk_set_ui(ivar_21, 92);
        mpq_ptr_t ivar_22;
        ivar_22 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_22);
        mpq_mk_set_ui(ivar_22, 34);
        ivar_23 = (stringutils_array_2_t)new_stringutils_array_2(2);
        ivar_23->elems[0]= ivar_21;
        ivar_23->elems[1]= ivar_22;
        stringutils_record_3_t tmp34119 = new_stringutils_record_3();;
        ivar_29 = (stringutils_record_3_t)tmp34119;
        tmp34119->length = (uint8_t)ivar_19;
        tmp34119->seq = (stringutils_array_2_t)ivar_23;
        bytestrings__bytestring_t ivar_27;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_27 = new_stringutils_record_1();
         ivar_27->length = (uint32_t)ivar_29->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_27->length;
         uint32_t tmp34120;
         //copying to uint32 from uint32;
         tmp34120 = (uint32_t)length8839;
         tmp34120 += 0;
         ivar_27->seq = new_stringutils_array_0(tmp34120);
         for (uint32_t index_32 = 0; index_32 < tmp34120; index_32++){
                 ivar_27->seq->elems[index_32] = (uint8_t)mpq_get_ui(ivar_29->seq->elems[index_32]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_27->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_29);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_26, (bytestrings__bytestring_t)ivar_27);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__escape_string_test_backslash(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        stringutils_record_3_t ivar_12;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)1;
        stringutils_array_2_t ivar_7;
        mpq_ptr_t ivar_6;
        ivar_6 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_6);
        mpq_mk_set_ui(ivar_6, 92);
        ivar_7 = (stringutils_array_2_t)new_stringutils_array_2(1);
        ivar_7->elems[0]= ivar_6;
        stringutils_record_3_t tmp34131 = new_stringutils_record_3();;
        ivar_12 = (stringutils_record_3_t)tmp34131;
        tmp34131->length = (uint8_t)ivar_4;
        tmp34131->seq = (stringutils_array_2_t)ivar_7;
        bytestrings__bytestring_t ivar_10;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_10 = new_stringutils_record_1();
         ivar_10->length = (uint32_t)ivar_12->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_10->length;
         uint32_t tmp34132;
         //copying to uint32 from uint32;
         tmp34132 = (uint32_t)length8839;
         tmp34132 += 0;
         ivar_10->seq = new_stringutils_array_0(tmp34132);
         for (uint32_t index_31 = 0; index_31 < tmp34132; index_31++){
                 ivar_10->seq->elems[index_31] = (uint8_t)mpq_get_ui(ivar_12->seq->elems[index_31]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_10->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_12);
        ivar_1 = (bytestrings__bytestring_t)stringutils__escape_string((bytestrings__bytestring_t)ivar_10);
        bytestrings__bytestring_t ivar_2;
        bytestrings__bytestring_t ivar_26;
        strings__string_t ivar_18;
        uint32_t len34134 = 0;
        uint32_t characters34135[0] = {};
        stringliteral_t string34133 = mk_string(0, characters34135);
        ivar_18 = (strings__string_t)strings__make_string(len34134, string34133);
        ivar_26 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_18);
        stringutils_record_3_t ivar_29;
        uint8_t ivar_19;
        ivar_19 = (uint8_t)2;
        stringutils_array_2_t ivar_23;
        mpq_ptr_t ivar_21;
        ivar_21 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_21);
        mpq_mk_set_ui(ivar_21, 92);
        mpq_ptr_t ivar_22;
        ivar_22 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_22);
        mpq_mk_set_ui(ivar_22, 92);
        ivar_23 = (stringutils_array_2_t)new_stringutils_array_2(2);
        ivar_23->elems[0]= ivar_21;
        ivar_23->elems[1]= ivar_22;
        stringutils_record_3_t tmp34136 = new_stringutils_record_3();;
        ivar_29 = (stringutils_record_3_t)tmp34136;
        tmp34136->length = (uint8_t)ivar_19;
        tmp34136->seq = (stringutils_array_2_t)ivar_23;
        bytestrings__bytestring_t ivar_27;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_27 = new_stringutils_record_1();
         ivar_27->length = (uint32_t)ivar_29->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_27->length;
         uint32_t tmp34137;
         //copying to uint32 from uint32;
         tmp34137 = (uint32_t)length8839;
         tmp34137 += 0;
         ivar_27->seq = new_stringutils_array_0(tmp34137);
         for (uint32_t index_32 = 0; index_32 < tmp34137; index_32++){
                 ivar_27->seq->elems[index_32] = (uint8_t)mpq_get_ui(ivar_29->seq->elems[index_32]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_27->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_29);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_26, (bytestrings__bytestring_t)ivar_27);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__escape_string_test_backspace(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        stringutils_record_3_t ivar_12;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)1;
        stringutils_array_2_t ivar_7;
        mpq_ptr_t ivar_6;
        ivar_6 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_6);
        mpq_mk_set_ui(ivar_6, 8);
        ivar_7 = (stringutils_array_2_t)new_stringutils_array_2(1);
        ivar_7->elems[0]= ivar_6;
        stringutils_record_3_t tmp34148 = new_stringutils_record_3();;
        ivar_12 = (stringutils_record_3_t)tmp34148;
        tmp34148->length = (uint8_t)ivar_4;
        tmp34148->seq = (stringutils_array_2_t)ivar_7;
        bytestrings__bytestring_t ivar_10;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_10 = new_stringutils_record_1();
         ivar_10->length = (uint32_t)ivar_12->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_10->length;
         uint32_t tmp34149;
         //copying to uint32 from uint32;
         tmp34149 = (uint32_t)length8839;
         tmp34149 += 0;
         ivar_10->seq = new_stringutils_array_0(tmp34149);
         for (uint32_t index_31 = 0; index_31 < tmp34149; index_31++){
                 ivar_10->seq->elems[index_31] = (uint8_t)mpq_get_ui(ivar_12->seq->elems[index_31]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_10->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_12);
        ivar_1 = (bytestrings__bytestring_t)stringutils__escape_string((bytestrings__bytestring_t)ivar_10);
        bytestrings__bytestring_t ivar_2;
        bytestrings__bytestring_t ivar_26;
        strings__string_t ivar_18;
        uint32_t len34151 = 0;
        uint32_t characters34152[0] = {};
        stringliteral_t string34150 = mk_string(0, characters34152);
        ivar_18 = (strings__string_t)strings__make_string(len34151, string34150);
        ivar_26 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_18);
        stringutils_record_3_t ivar_29;
        uint8_t ivar_19;
        ivar_19 = (uint8_t)2;
        stringutils_array_2_t ivar_23;
        mpq_ptr_t ivar_21;
        ivar_21 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_21);
        mpq_mk_set_ui(ivar_21, 92);
        mpq_ptr_t ivar_22;
        ivar_22 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_22);
        mpq_mk_set_ui(ivar_22, 98);
        ivar_23 = (stringutils_array_2_t)new_stringutils_array_2(2);
        ivar_23->elems[0]= ivar_21;
        ivar_23->elems[1]= ivar_22;
        stringutils_record_3_t tmp34153 = new_stringutils_record_3();;
        ivar_29 = (stringutils_record_3_t)tmp34153;
        tmp34153->length = (uint8_t)ivar_19;
        tmp34153->seq = (stringutils_array_2_t)ivar_23;
        bytestrings__bytestring_t ivar_27;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_27 = new_stringutils_record_1();
         ivar_27->length = (uint32_t)ivar_29->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_27->length;
         uint32_t tmp34154;
         //copying to uint32 from uint32;
         tmp34154 = (uint32_t)length8839;
         tmp34154 += 0;
         ivar_27->seq = new_stringutils_array_0(tmp34154);
         for (uint32_t index_32 = 0; index_32 < tmp34154; index_32++){
                 ivar_27->seq->elems[index_32] = (uint8_t)mpq_get_ui(ivar_29->seq->elems[index_32]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_27->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_29);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_26, (bytestrings__bytestring_t)ivar_27);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__escape_string_test_tab(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        stringutils_record_3_t ivar_12;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)1;
        stringutils_array_2_t ivar_7;
        mpq_ptr_t ivar_6;
        ivar_6 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_6);
        mpq_mk_set_ui(ivar_6, 9);
        ivar_7 = (stringutils_array_2_t)new_stringutils_array_2(1);
        ivar_7->elems[0]= ivar_6;
        stringutils_record_3_t tmp34165 = new_stringutils_record_3();;
        ivar_12 = (stringutils_record_3_t)tmp34165;
        tmp34165->length = (uint8_t)ivar_4;
        tmp34165->seq = (stringutils_array_2_t)ivar_7;
        bytestrings__bytestring_t ivar_10;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_10 = new_stringutils_record_1();
         ivar_10->length = (uint32_t)ivar_12->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_10->length;
         uint32_t tmp34166;
         //copying to uint32 from uint32;
         tmp34166 = (uint32_t)length8839;
         tmp34166 += 0;
         ivar_10->seq = new_stringutils_array_0(tmp34166);
         for (uint32_t index_31 = 0; index_31 < tmp34166; index_31++){
                 ivar_10->seq->elems[index_31] = (uint8_t)mpq_get_ui(ivar_12->seq->elems[index_31]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_10->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_12);
        ivar_1 = (bytestrings__bytestring_t)stringutils__escape_string((bytestrings__bytestring_t)ivar_10);
        bytestrings__bytestring_t ivar_2;
        bytestrings__bytestring_t ivar_26;
        strings__string_t ivar_18;
        uint32_t len34168 = 0;
        uint32_t characters34169[0] = {};
        stringliteral_t string34167 = mk_string(0, characters34169);
        ivar_18 = (strings__string_t)strings__make_string(len34168, string34167);
        ivar_26 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_18);
        stringutils_record_3_t ivar_29;
        uint8_t ivar_19;
        ivar_19 = (uint8_t)2;
        stringutils_array_2_t ivar_23;
        mpq_ptr_t ivar_21;
        ivar_21 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_21);
        mpq_mk_set_ui(ivar_21, 92);
        mpq_ptr_t ivar_22;
        ivar_22 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_22);
        mpq_mk_set_ui(ivar_22, 116);
        ivar_23 = (stringutils_array_2_t)new_stringutils_array_2(2);
        ivar_23->elems[0]= ivar_21;
        ivar_23->elems[1]= ivar_22;
        stringutils_record_3_t tmp34170 = new_stringutils_record_3();;
        ivar_29 = (stringutils_record_3_t)tmp34170;
        tmp34170->length = (uint8_t)ivar_19;
        tmp34170->seq = (stringutils_array_2_t)ivar_23;
        bytestrings__bytestring_t ivar_27;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_27 = new_stringutils_record_1();
         ivar_27->length = (uint32_t)ivar_29->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_27->length;
         uint32_t tmp34171;
         //copying to uint32 from uint32;
         tmp34171 = (uint32_t)length8839;
         tmp34171 += 0;
         ivar_27->seq = new_stringutils_array_0(tmp34171);
         for (uint32_t index_32 = 0; index_32 < tmp34171; index_32++){
                 ivar_27->seq->elems[index_32] = (uint8_t)mpq_get_ui(ivar_29->seq->elems[index_32]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_27->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_29);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_26, (bytestrings__bytestring_t)ivar_27);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__escape_string_test_newline(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        stringutils_record_3_t ivar_12;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)1;
        stringutils_array_2_t ivar_7;
        mpq_ptr_t ivar_6;
        ivar_6 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_6);
        mpq_mk_set_ui(ivar_6, 10);
        ivar_7 = (stringutils_array_2_t)new_stringutils_array_2(1);
        ivar_7->elems[0]= ivar_6;
        stringutils_record_3_t tmp34182 = new_stringutils_record_3();;
        ivar_12 = (stringutils_record_3_t)tmp34182;
        tmp34182->length = (uint8_t)ivar_4;
        tmp34182->seq = (stringutils_array_2_t)ivar_7;
        bytestrings__bytestring_t ivar_10;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_10 = new_stringutils_record_1();
         ivar_10->length = (uint32_t)ivar_12->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_10->length;
         uint32_t tmp34183;
         //copying to uint32 from uint32;
         tmp34183 = (uint32_t)length8839;
         tmp34183 += 0;
         ivar_10->seq = new_stringutils_array_0(tmp34183);
         for (uint32_t index_31 = 0; index_31 < tmp34183; index_31++){
                 ivar_10->seq->elems[index_31] = (uint8_t)mpq_get_ui(ivar_12->seq->elems[index_31]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_10->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_12);
        ivar_1 = (bytestrings__bytestring_t)stringutils__escape_string((bytestrings__bytestring_t)ivar_10);
        bytestrings__bytestring_t ivar_2;
        bytestrings__bytestring_t ivar_26;
        strings__string_t ivar_18;
        uint32_t len34185 = 0;
        uint32_t characters34186[0] = {};
        stringliteral_t string34184 = mk_string(0, characters34186);
        ivar_18 = (strings__string_t)strings__make_string(len34185, string34184);
        ivar_26 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_18);
        stringutils_record_3_t ivar_29;
        uint8_t ivar_19;
        ivar_19 = (uint8_t)2;
        stringutils_array_2_t ivar_23;
        mpq_ptr_t ivar_21;
        ivar_21 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_21);
        mpq_mk_set_ui(ivar_21, 92);
        mpq_ptr_t ivar_22;
        ivar_22 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_22);
        mpq_mk_set_ui(ivar_22, 110);
        ivar_23 = (stringutils_array_2_t)new_stringutils_array_2(2);
        ivar_23->elems[0]= ivar_21;
        ivar_23->elems[1]= ivar_22;
        stringutils_record_3_t tmp34187 = new_stringutils_record_3();;
        ivar_29 = (stringutils_record_3_t)tmp34187;
        tmp34187->length = (uint8_t)ivar_19;
        tmp34187->seq = (stringutils_array_2_t)ivar_23;
        bytestrings__bytestring_t ivar_27;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_27 = new_stringutils_record_1();
         ivar_27->length = (uint32_t)ivar_29->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_27->length;
         uint32_t tmp34188;
         //copying to uint32 from uint32;
         tmp34188 = (uint32_t)length8839;
         tmp34188 += 0;
         ivar_27->seq = new_stringutils_array_0(tmp34188);
         for (uint32_t index_32 = 0; index_32 < tmp34188; index_32++){
                 ivar_27->seq->elems[index_32] = (uint8_t)mpq_get_ui(ivar_29->seq->elems[index_32]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_27->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_29);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_26, (bytestrings__bytestring_t)ivar_27);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__escape_string_test_formfeed(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        stringutils_record_3_t ivar_12;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)1;
        stringutils_array_2_t ivar_7;
        mpq_ptr_t ivar_6;
        ivar_6 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_6);
        mpq_mk_set_ui(ivar_6, 12);
        ivar_7 = (stringutils_array_2_t)new_stringutils_array_2(1);
        ivar_7->elems[0]= ivar_6;
        stringutils_record_3_t tmp34199 = new_stringutils_record_3();;
        ivar_12 = (stringutils_record_3_t)tmp34199;
        tmp34199->length = (uint8_t)ivar_4;
        tmp34199->seq = (stringutils_array_2_t)ivar_7;
        bytestrings__bytestring_t ivar_10;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_10 = new_stringutils_record_1();
         ivar_10->length = (uint32_t)ivar_12->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_10->length;
         uint32_t tmp34200;
         //copying to uint32 from uint32;
         tmp34200 = (uint32_t)length8839;
         tmp34200 += 0;
         ivar_10->seq = new_stringutils_array_0(tmp34200);
         for (uint32_t index_31 = 0; index_31 < tmp34200; index_31++){
                 ivar_10->seq->elems[index_31] = (uint8_t)mpq_get_ui(ivar_12->seq->elems[index_31]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_10->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_12);
        ivar_1 = (bytestrings__bytestring_t)stringutils__escape_string((bytestrings__bytestring_t)ivar_10);
        bytestrings__bytestring_t ivar_2;
        bytestrings__bytestring_t ivar_26;
        strings__string_t ivar_18;
        uint32_t len34202 = 0;
        uint32_t characters34203[0] = {};
        stringliteral_t string34201 = mk_string(0, characters34203);
        ivar_18 = (strings__string_t)strings__make_string(len34202, string34201);
        ivar_26 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_18);
        stringutils_record_3_t ivar_29;
        uint8_t ivar_19;
        ivar_19 = (uint8_t)2;
        stringutils_array_2_t ivar_23;
        mpq_ptr_t ivar_21;
        ivar_21 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_21);
        mpq_mk_set_ui(ivar_21, 92);
        mpq_ptr_t ivar_22;
        ivar_22 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_22);
        mpq_mk_set_ui(ivar_22, 102);
        ivar_23 = (stringutils_array_2_t)new_stringutils_array_2(2);
        ivar_23->elems[0]= ivar_21;
        ivar_23->elems[1]= ivar_22;
        stringutils_record_3_t tmp34204 = new_stringutils_record_3();;
        ivar_29 = (stringutils_record_3_t)tmp34204;
        tmp34204->length = (uint8_t)ivar_19;
        tmp34204->seq = (stringutils_array_2_t)ivar_23;
        bytestrings__bytestring_t ivar_27;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_27 = new_stringutils_record_1();
         ivar_27->length = (uint32_t)ivar_29->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_27->length;
         uint32_t tmp34205;
         //copying to uint32 from uint32;
         tmp34205 = (uint32_t)length8839;
         tmp34205 += 0;
         ivar_27->seq = new_stringutils_array_0(tmp34205);
         for (uint32_t index_32 = 0; index_32 < tmp34205; index_32++){
                 ivar_27->seq->elems[index_32] = (uint8_t)mpq_get_ui(ivar_29->seq->elems[index_32]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_27->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_29);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_26, (bytestrings__bytestring_t)ivar_27);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__escape_string_test_carriage_return(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        stringutils_record_3_t ivar_12;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)1;
        stringutils_array_2_t ivar_7;
        mpq_ptr_t ivar_6;
        ivar_6 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_6);
        mpq_mk_set_ui(ivar_6, 13);
        ivar_7 = (stringutils_array_2_t)new_stringutils_array_2(1);
        ivar_7->elems[0]= ivar_6;
        stringutils_record_3_t tmp34216 = new_stringutils_record_3();;
        ivar_12 = (stringutils_record_3_t)tmp34216;
        tmp34216->length = (uint8_t)ivar_4;
        tmp34216->seq = (stringutils_array_2_t)ivar_7;
        bytestrings__bytestring_t ivar_10;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_10 = new_stringutils_record_1();
         ivar_10->length = (uint32_t)ivar_12->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_10->length;
         uint32_t tmp34217;
         //copying to uint32 from uint32;
         tmp34217 = (uint32_t)length8839;
         tmp34217 += 0;
         ivar_10->seq = new_stringutils_array_0(tmp34217);
         for (uint32_t index_31 = 0; index_31 < tmp34217; index_31++){
                 ivar_10->seq->elems[index_31] = (uint8_t)mpq_get_ui(ivar_12->seq->elems[index_31]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_10->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_12);
        ivar_1 = (bytestrings__bytestring_t)stringutils__escape_string((bytestrings__bytestring_t)ivar_10);
        bytestrings__bytestring_t ivar_2;
        bytestrings__bytestring_t ivar_26;
        strings__string_t ivar_18;
        uint32_t len34219 = 0;
        uint32_t characters34220[0] = {};
        stringliteral_t string34218 = mk_string(0, characters34220);
        ivar_18 = (strings__string_t)strings__make_string(len34219, string34218);
        ivar_26 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_18);
        stringutils_record_3_t ivar_29;
        uint8_t ivar_19;
        ivar_19 = (uint8_t)2;
        stringutils_array_2_t ivar_23;
        mpq_ptr_t ivar_21;
        ivar_21 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_21);
        mpq_mk_set_ui(ivar_21, 92);
        mpq_ptr_t ivar_22;
        ivar_22 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_22);
        mpq_mk_set_ui(ivar_22, 114);
        ivar_23 = (stringutils_array_2_t)new_stringutils_array_2(2);
        ivar_23->elems[0]= ivar_21;
        ivar_23->elems[1]= ivar_22;
        stringutils_record_3_t tmp34221 = new_stringutils_record_3();;
        ivar_29 = (stringutils_record_3_t)tmp34221;
        tmp34221->length = (uint8_t)ivar_19;
        tmp34221->seq = (stringutils_array_2_t)ivar_23;
        bytestrings__bytestring_t ivar_27;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_27 = new_stringutils_record_1();
         ivar_27->length = (uint32_t)ivar_29->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_27->length;
         uint32_t tmp34222;
         //copying to uint32 from uint32;
         tmp34222 = (uint32_t)length8839;
         tmp34222 += 0;
         ivar_27->seq = new_stringutils_array_0(tmp34222);
         for (uint32_t index_32 = 0; index_32 < tmp34222; index_32++){
                 ivar_27->seq->elems[index_32] = (uint8_t)mpq_get_ui(ivar_29->seq->elems[index_32]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_27->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_29);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_26, (bytestrings__bytestring_t)ivar_27);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__escape_string_test_mixed_string(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        stringutils_record_3_t ivar_14;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)5;
        stringutils_array_2_t ivar_10;
        mpq_ptr_t ivar_5;
        ivar_5 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_5);
        mpq_mk_set_ui(ivar_5, 104);
        mpq_ptr_t ivar_6;
        ivar_6 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_6);
        mpq_mk_set_ui(ivar_6, 105);
        mpq_ptr_t ivar_7;
        ivar_7 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_7);
        mpq_mk_set_ui(ivar_7, 10);
        mpq_ptr_t ivar_8;
        ivar_8 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_8);
        mpq_mk_set_ui(ivar_8, 92);
        mpq_ptr_t ivar_9;
        ivar_9 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_9);
        mpq_mk_set_ui(ivar_9, 34);
        ivar_10 = (stringutils_array_2_t)new_stringutils_array_2(5);
        ivar_10->elems[0]= ivar_5;
        ivar_10->elems[1]= ivar_6;
        ivar_10->elems[2]= ivar_7;
        ivar_10->elems[3]= ivar_8;
        ivar_10->elems[4]= ivar_9;
        stringutils_record_3_t tmp34233 = new_stringutils_record_3();;
        ivar_14 = (stringutils_record_3_t)tmp34233;
        tmp34233->length = (uint8_t)ivar_4;
        tmp34233->seq = (stringutils_array_2_t)ivar_10;
        bytestrings__bytestring_t ivar_12;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_12 = new_stringutils_record_1();
         ivar_12->length = (uint32_t)ivar_14->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_12->length;
         uint32_t tmp34234;
         //copying to uint32 from uint32;
         tmp34234 = (uint32_t)length8839;
         tmp34234 += 0;
         ivar_12->seq = new_stringutils_array_0(tmp34234);
         for (uint32_t index_37 = 0; index_37 < tmp34234; index_37++){
                 ivar_12->seq->elems[index_37] = (uint8_t)mpq_get_ui(ivar_14->seq->elems[index_37]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_12->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_14);
        ivar_1 = (bytestrings__bytestring_t)stringutils__escape_string((bytestrings__bytestring_t)ivar_12);
        bytestrings__bytestring_t ivar_2;
        bytestrings__bytestring_t ivar_32;
        strings__string_t ivar_20;
        uint32_t len34236 = 0;
        uint32_t characters34237[0] = {};
        stringliteral_t string34235 = mk_string(0, characters34237);
        ivar_20 = (strings__string_t)strings__make_string(len34236, string34235);
        ivar_32 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_20);
        stringutils_record_3_t ivar_35;
        uint8_t ivar_21;
        ivar_21 = (uint8_t)8;
        stringutils_array_2_t ivar_30;
        mpq_ptr_t ivar_22;
        ivar_22 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_22);
        mpq_mk_set_ui(ivar_22, 104);
        mpq_ptr_t ivar_23;
        ivar_23 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_23);
        mpq_mk_set_ui(ivar_23, 105);
        mpq_ptr_t ivar_24;
        ivar_24 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_24);
        mpq_mk_set_ui(ivar_24, 92);
        mpq_ptr_t ivar_25;
        ivar_25 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_25);
        mpq_mk_set_ui(ivar_25, 110);
        mpq_ptr_t ivar_26;
        ivar_26 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_26);
        mpq_mk_set_ui(ivar_26, 92);
        mpq_ptr_t ivar_27;
        ivar_27 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_27);
        mpq_mk_set_ui(ivar_27, 92);
        mpq_ptr_t ivar_28;
        ivar_28 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_28);
        mpq_mk_set_ui(ivar_28, 92);
        mpq_ptr_t ivar_29;
        ivar_29 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_29);
        mpq_mk_set_ui(ivar_29, 34);
        ivar_30 = (stringutils_array_2_t)new_stringutils_array_2(8);
        ivar_30->elems[0]= ivar_22;
        ivar_30->elems[1]= ivar_23;
        ivar_30->elems[2]= ivar_24;
        ivar_30->elems[3]= ivar_25;
        ivar_30->elems[4]= ivar_26;
        ivar_30->elems[5]= ivar_27;
        ivar_30->elems[6]= ivar_28;
        ivar_30->elems[7]= ivar_29;
        stringutils_record_3_t tmp34238 = new_stringutils_record_3();;
        ivar_35 = (stringutils_record_3_t)tmp34238;
        tmp34238->length = (uint8_t)ivar_21;
        tmp34238->seq = (stringutils_array_2_t)ivar_30;
        bytestrings__bytestring_t ivar_33;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_33 = new_stringutils_record_1();
         ivar_33->length = (uint32_t)ivar_35->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_33->length;
         uint32_t tmp34239;
         //copying to uint32 from uint32;
         tmp34239 = (uint32_t)length8839;
         tmp34239 += 0;
         ivar_33->seq = new_stringutils_array_0(tmp34239);
         for (uint32_t index_38 = 0; index_38 < tmp34239; index_38++){
                 ivar_33->seq->elems[index_38] = (uint8_t)mpq_get_ui(ivar_35->seq->elems[index_38]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_33->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_35);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_32, (bytestrings__bytestring_t)ivar_33);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__escape_string_test_all_special_chars(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        stringutils_record_3_t ivar_16;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)7;
        stringutils_array_2_t ivar_12;
        mpq_ptr_t ivar_5;
        ivar_5 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_5);
        mpq_mk_set_ui(ivar_5, 34);
        mpq_ptr_t ivar_6;
        ivar_6 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_6);
        mpq_mk_set_ui(ivar_6, 8);
        mpq_ptr_t ivar_7;
        ivar_7 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_7);
        mpq_mk_set_ui(ivar_7, 9);
        mpq_ptr_t ivar_8;
        ivar_8 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_8);
        mpq_mk_set_ui(ivar_8, 10);
        mpq_ptr_t ivar_9;
        ivar_9 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_9);
        mpq_mk_set_ui(ivar_9, 12);
        mpq_ptr_t ivar_10;
        ivar_10 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_10);
        mpq_mk_set_ui(ivar_10, 13);
        mpq_ptr_t ivar_11;
        ivar_11 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_11);
        mpq_mk_set_ui(ivar_11, 92);
        ivar_12 = (stringutils_array_2_t)new_stringutils_array_2(7);
        ivar_12->elems[0]= ivar_5;
        ivar_12->elems[1]= ivar_6;
        ivar_12->elems[2]= ivar_7;
        ivar_12->elems[3]= ivar_8;
        ivar_12->elems[4]= ivar_9;
        ivar_12->elems[5]= ivar_10;
        ivar_12->elems[6]= ivar_11;
        stringutils_record_3_t tmp34250 = new_stringutils_record_3();;
        ivar_16 = (stringutils_record_3_t)tmp34250;
        tmp34250->length = (uint8_t)ivar_4;
        tmp34250->seq = (stringutils_array_2_t)ivar_12;
        bytestrings__bytestring_t ivar_14;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_14 = new_stringutils_record_1();
         ivar_14->length = (uint32_t)ivar_16->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_14->length;
         uint32_t tmp34251;
         //copying to uint32 from uint32;
         tmp34251 = (uint32_t)length8839;
         tmp34251 += 0;
         ivar_14->seq = new_stringutils_array_0(tmp34251);
         for (uint32_t index_47 = 0; index_47 < tmp34251; index_47++){
                 ivar_14->seq->elems[index_47] = (uint8_t)mpq_get_ui(ivar_16->seq->elems[index_47]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_14->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_16);
        ivar_1 = (bytestrings__bytestring_t)stringutils__escape_string((bytestrings__bytestring_t)ivar_14);
        bytestrings__bytestring_t ivar_2;
        bytestrings__bytestring_t ivar_42;
        strings__string_t ivar_22;
        uint32_t len34253 = 0;
        uint32_t characters34254[0] = {};
        stringliteral_t string34252 = mk_string(0, characters34254);
        ivar_22 = (strings__string_t)strings__make_string(len34253, string34252);
        ivar_42 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_22);
        stringutils_record_3_t ivar_45;
        uint8_t ivar_23;
        ivar_23 = (uint8_t)14;
        stringutils_array_2_t ivar_39;
        mpq_ptr_t ivar_25;
        ivar_25 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_25);
        mpq_mk_set_ui(ivar_25, 92);
        mpq_ptr_t ivar_26;
        ivar_26 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_26);
        mpq_mk_set_ui(ivar_26, 34);
        mpq_ptr_t ivar_27;
        ivar_27 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_27);
        mpq_mk_set_ui(ivar_27, 92);
        mpq_ptr_t ivar_28;
        ivar_28 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_28);
        mpq_mk_set_ui(ivar_28, 98);
        mpq_ptr_t ivar_29;
        ivar_29 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_29);
        mpq_mk_set_ui(ivar_29, 92);
        mpq_ptr_t ivar_30;
        ivar_30 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_30);
        mpq_mk_set_ui(ivar_30, 116);
        mpq_ptr_t ivar_31;
        ivar_31 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_31);
        mpq_mk_set_ui(ivar_31, 92);
        mpq_ptr_t ivar_32;
        ivar_32 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_32);
        mpq_mk_set_ui(ivar_32, 110);
        mpq_ptr_t ivar_33;
        ivar_33 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_33);
        mpq_mk_set_ui(ivar_33, 92);
        mpq_ptr_t ivar_34;
        ivar_34 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_34);
        mpq_mk_set_ui(ivar_34, 102);
        mpq_ptr_t ivar_35;
        ivar_35 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_35);
        mpq_mk_set_ui(ivar_35, 92);
        mpq_ptr_t ivar_36;
        ivar_36 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_36);
        mpq_mk_set_ui(ivar_36, 114);
        mpq_ptr_t ivar_37;
        ivar_37 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_37);
        mpq_mk_set_ui(ivar_37, 92);
        mpq_ptr_t ivar_38;
        ivar_38 = safe_malloc(sizeof(mpq_t));
        mpq_init(ivar_38);
        mpq_mk_set_ui(ivar_38, 92);
        ivar_39 = (stringutils_array_2_t)new_stringutils_array_2(14);
        ivar_39->elems[0]= ivar_25;
        ivar_39->elems[1]= ivar_26;
        ivar_39->elems[2]= ivar_27;
        ivar_39->elems[3]= ivar_28;
        ivar_39->elems[4]= ivar_29;
        ivar_39->elems[5]= ivar_30;
        ivar_39->elems[6]= ivar_31;
        ivar_39->elems[7]= ivar_32;
        ivar_39->elems[8]= ivar_33;
        ivar_39->elems[9]= ivar_34;
        ivar_39->elems[10]= ivar_35;
        ivar_39->elems[11]= ivar_36;
        ivar_39->elems[12]= ivar_37;
        ivar_39->elems[13]= ivar_38;
        stringutils_record_3_t tmp34255 = new_stringutils_record_3();;
        ivar_45 = (stringutils_record_3_t)tmp34255;
        tmp34255->length = (uint8_t)ivar_23;
        tmp34255->seq = (stringutils_array_2_t)ivar_39;
        bytestrings__bytestring_t ivar_43;
        //copying to bytestrings__bytestring from stringutils_record_3;
        {

         ivar_43 = new_stringutils_record_1();
         ivar_43->length = (uint32_t)ivar_45->length;
         uint32_t length8839;
         length8839 = (uint32_t)ivar_43->length;
         uint32_t tmp34256;
         //copying to uint32 from uint32;
         tmp34256 = (uint32_t)length8839;
         tmp34256 += 0;
         ivar_43->seq = new_stringutils_array_0(tmp34256);
         for (uint32_t index_48 = 0; index_48 < tmp34256; index_48++){
                 ivar_43->seq->elems[index_48] = (uint8_t)mpq_get_ui(ivar_45->seq->elems[index_48]);
         };
         stringutils_array_0_t seq8840;
         seq8840 = (stringutils_array_0_t)ivar_43->seq; };
        release_stringutils_record_3((stringutils_record_3_t)ivar_45);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_42, (bytestrings__bytestring_t)ivar_43);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

uint32_t stringutils__first_printable_inner(bytestrings__bytestring_t ivar_1, uint32_t ivar_2){
        uint32_t  result;

        bool_t ivar_9;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)ivar_1->length;
        ivar_9 = (ivar_2 == ivar_11);
        if (ivar_9){
             release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
             //copying to uint32 from uint32;
             result = (uint32_t)ivar_2;
        } else {
             bool_t ivar_14;
             bool_t ivar_15;
             uint8_t ivar_24;
             ivar_1->count++;
             ivar_24 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_2);
             ivar_15 = (bool_t)stringutils__whitespace((uint8_t)ivar_24);
             ivar_14 = !ivar_15;
             if (ivar_14){
           release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
           //copying to uint32 from uint32;
           result = (uint32_t)ivar_2;
             } else {
           uint32_t ivar_33;
           uint8_t ivar_29;
           ivar_29 = (uint8_t)1;
           ivar_33 = (uint32_t)(ivar_2 + ivar_29);
           result = (uint32_t)stringutils__first_printable_inner((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_33);};};
        
        
        return result;
}

uint32_t stringutils__first_printable(bytestrings__bytestring_t ivar_1){
        uint32_t  result;

        uint8_t ivar_12;
        ivar_12 = (uint8_t)0;
        uint32_t ivar_8;
        //copying to uint32 from uint8;
        ivar_8 = (uint32_t)ivar_12;
        result = (uint32_t)stringutils__first_printable_inner((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_8);
        
        
        return result;
}

uint32_t stringutils__last_printable_inner(bytestrings__bytestring_t ivar_1, uint32_t ivar_2){
        uint32_t  result;

        bool_t ivar_9;
        uint8_t ivar_11;
        ivar_11 = (uint8_t)0;
        ivar_9 = (ivar_2 == ivar_11);
        if (ivar_9){
             release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
             result = (uint32_t)0;
        } else {
             bool_t ivar_13;
             bool_t ivar_14;
             uint8_t ivar_28;
             int32_t ivar_26;
             uint8_t ivar_19;
             ivar_19 = (uint8_t)1;
             ivar_26 = (int32_t)((uint64_t)ivar_2 - (uint64_t)ivar_19);
             uint32_t ivar_23;
             //copying to uint32 from int32;
             ivar_23 = (uint32_t)ivar_26;
             ivar_1->count++;
             ivar_28 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_23);
             ivar_14 = (bool_t)stringutils__whitespace((uint8_t)ivar_28);
             ivar_13 = !ivar_14;
             if (ivar_13){
           release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
           //copying to uint32 from uint32;
           result = (uint32_t)ivar_2;
             } else {
           int32_t ivar_41;
           uint8_t ivar_33;
           ivar_33 = (uint8_t)1;
           ivar_41 = (int32_t)((uint64_t)ivar_2 - (uint64_t)ivar_33);
           uint32_t ivar_37;
           //copying to uint32 from int32;
           ivar_37 = (uint32_t)ivar_41;
           result = (uint32_t)stringutils__last_printable_inner((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_37);};};
        
        
        return result;
}

uint32_t stringutils__last_printable(bytestrings__bytestring_t ivar_1){
        uint32_t  result;

        bool_t ivar_4;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)ivar_1->length;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)0;
        ivar_4 = (ivar_5 == ivar_6);
        if (ivar_4){
             release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
             result = (uint32_t)0;
        } else {
             uint32_t ivar_14;
             ivar_14 = (uint32_t)ivar_1->length;
             result = (uint32_t)stringutils__last_printable_inner((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_14);};
        
        
        return result;
}

bytestrings__bytestring_t stringutils__trim_str(bytestrings__bytestring_t ivar_1){
        bytestrings__bytestring_t  result;

        /* start_pos */ uint32_t ivar_2;
        ivar_1->count++;
        ivar_2 = (uint32_t)stringutils__first_printable((bytestrings__bytestring_t)ivar_1);
        /* end_pos */ uint32_t ivar_10;
        ivar_1->count++;
        ivar_10 = (uint32_t)stringutils__last_printable((bytestrings__bytestring_t)ivar_1);
        bool_t ivar_18;
        uint32_t ivar_19;
        ivar_19 = (uint32_t)ivar_1->length;
        uint8_t ivar_20;
        ivar_20 = (uint8_t)1;
        ivar_18 = (ivar_19 < ivar_20);
        if (ivar_18){
             //copying to bytestrings__bytestring from bytestrings__bytestring;
             result = (bytestrings__bytestring_t)ivar_1;
             if (result != NULL) result->count++;
             release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
        } else {
             result = (bytestrings__bytestring_t)bytestrings__substr((bytestrings__bytestring_t)ivar_1, (uint32_t)ivar_2, (uint32_t)ivar_10);};
        
        result->count++;
        return result;
}

bool_t stringutils__trim_str_test0(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_9;
        strings__string_t ivar_7;
        uint32_t len34262 = 5;
        uint32_t characters34263[5] = {32, 102, 111, 111, 32};
        stringliteral_t string34261 = mk_string(5, characters34263);
        ivar_7 = (strings__string_t)strings__make_string(len34262, string34261);
        ivar_9 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        ivar_1 = (bytestrings__bytestring_t)stringutils__trim_str((bytestrings__bytestring_t)ivar_9);
        bytestrings__bytestring_t ivar_2;
        strings__string_t ivar_13;
        uint32_t len34265 = 3;
        uint32_t characters34266[3] = {102, 111, 111};
        stringliteral_t string34264 = mk_string(3, characters34266);
        ivar_13 = (strings__string_t)strings__make_string(len34265, string34264);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_13);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__trim_str_test1(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_9;
        strings__string_t ivar_7;
        uint32_t len34272 = 1;
        uint32_t characters34273[1] = {32};
        stringliteral_t string34271 = mk_string(1, characters34273);
        ivar_7 = (strings__string_t)strings__make_string(len34272, string34271);
        ivar_9 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        ivar_1 = (bytestrings__bytestring_t)stringutils__trim_str((bytestrings__bytestring_t)ivar_9);
        bytestrings__bytestring_t ivar_2;
        strings__string_t ivar_13;
        uint32_t len34275 = 0;
        uint32_t characters34276[0] = {};
        stringliteral_t string34274 = mk_string(0, characters34276);
        ivar_13 = (strings__string_t)strings__make_string(len34275, string34274);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_13);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__trim_str_test2(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_9;
        strings__string_t ivar_7;
        uint32_t len34282 = 6;
        uint32_t characters34283[6] = {102, 32, 111, 32, 111, 32};
        stringliteral_t string34281 = mk_string(6, characters34283);
        ivar_7 = (strings__string_t)strings__make_string(len34282, string34281);
        ivar_9 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        ivar_1 = (bytestrings__bytestring_t)stringutils__trim_str((bytestrings__bytestring_t)ivar_9);
        bytestrings__bytestring_t ivar_2;
        strings__string_t ivar_13;
        uint32_t len34285 = 5;
        uint32_t characters34286[5] = {102, 32, 111, 32, 111};
        stringliteral_t string34284 = mk_string(5, characters34286);
        ivar_13 = (strings__string_t)strings__make_string(len34285, string34284);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_13);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__trim_str_test3(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_9;
        strings__string_t ivar_7;
        uint32_t len34292 = 0;
        uint32_t characters34293[0] = {};
        stringliteral_t string34291 = mk_string(0, characters34293);
        ivar_7 = (strings__string_t)strings__make_string(len34292, string34291);
        ivar_9 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        ivar_1 = (bytestrings__bytestring_t)stringutils__trim_str((bytestrings__bytestring_t)ivar_9);
        bytestrings__bytestring_t ivar_2;
        strings__string_t ivar_13;
        uint32_t len34295 = 0;
        uint32_t characters34296[0] = {};
        stringliteral_t string34294 = mk_string(0, characters34296);
        ivar_13 = (strings__string_t)strings__make_string(len34295, string34294);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_13);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__trim_str_test4(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_9;
        strings__string_t ivar_7;
        uint32_t len34302 = 4;
        uint32_t characters34303[4] = {32, 102, 111, 111};
        stringliteral_t string34301 = mk_string(4, characters34303);
        ivar_7 = (strings__string_t)strings__make_string(len34302, string34301);
        ivar_9 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        ivar_1 = (bytestrings__bytestring_t)stringutils__trim_str((bytestrings__bytestring_t)ivar_9);
        bytestrings__bytestring_t ivar_2;
        strings__string_t ivar_13;
        uint32_t len34305 = 3;
        uint32_t characters34306[3] = {102, 111, 111};
        stringliteral_t string34304 = mk_string(3, characters34306);
        ivar_13 = (strings__string_t)strings__make_string(len34305, string34304);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_13);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__trim_str_test5(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_9;
        strings__string_t ivar_7;
        uint32_t len34312 = 3;
        uint32_t characters34313[3] = {102, 111, 111};
        stringliteral_t string34311 = mk_string(3, characters34313);
        ivar_7 = (strings__string_t)strings__make_string(len34312, string34311);
        ivar_9 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        ivar_1 = (bytestrings__bytestring_t)stringutils__trim_str((bytestrings__bytestring_t)ivar_9);
        bytestrings__bytestring_t ivar_2;
        strings__string_t ivar_13;
        uint32_t len34315 = 3;
        uint32_t characters34316[3] = {102, 111, 111};
        stringliteral_t string34314 = mk_string(3, characters34316);
        ivar_13 = (strings__string_t)strings__make_string(len34315, string34314);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_13);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__trim_str_test6(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_9;
        strings__string_t ivar_7;
        uint32_t len34322 = 1;
        uint32_t characters34323[1] = {49};
        stringliteral_t string34321 = mk_string(1, characters34323);
        ivar_7 = (strings__string_t)strings__make_string(len34322, string34321);
        ivar_9 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        ivar_1 = (bytestrings__bytestring_t)stringutils__trim_str((bytestrings__bytestring_t)ivar_9);
        bytestrings__bytestring_t ivar_2;
        strings__string_t ivar_13;
        uint32_t len34325 = 1;
        uint32_t characters34326[1] = {49};
        stringliteral_t string34324 = mk_string(1, characters34326);
        ivar_13 = (strings__string_t)strings__make_string(len34325, string34324);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_13);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bytestrings__bytestring_t stringutils__join_inner(bytestrings__bytestring_t ivar_1, stringutils_record_5_t ivar_2, uint32_t ivar_3, bytestrings__bytestring_t ivar_4){
        bytestrings__bytestring_t  result;

        bool_t ivar_5;
        uint32_t ivar_7;
        ivar_7 = (uint32_t)ivar_2->length;
        ivar_5 = (ivar_3 >= ivar_7);
        if (ivar_5){
             release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_1);
             release_stringutils_record_5((stringutils_record_5_t)ivar_2);
             //copying to bytestrings__bytestring from bytestrings__bytestring;
             result = (bytestrings__bytestring_t)ivar_4;
             if (result != NULL) result->count++;
             release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_4);
        } else {
             bool_t ivar_10;
             uint8_t ivar_12;
             ivar_12 = (uint8_t)0;
             ivar_10 = (ivar_3 == ivar_12);
             if (ivar_10){
           release_bytestrings__bytestring((bytestrings__bytestring_t)ivar_4);
           uint32_t ivar_33;
           uint8_t ivar_19;
           ivar_19 = (uint8_t)1;
           ivar_33 = (uint32_t)(ivar_3 + ivar_19);
           bytestrings__bytestring_t ivar_34;
           stringutils_array_4_t ivar_23;
           stringutils_array_4_t ivar_28;
           ivar_28 = (stringutils_array_4_t)ivar_2->seq;
           ivar_28->count++;
           //copying to stringutils_array_4 from stringutils_array_4;
           ivar_23 = (stringutils_array_4_t)ivar_28;
           if (ivar_23 != NULL) ivar_23->count++;
           release_stringutils_array_4((stringutils_array_4_t)ivar_28);
           ivar_34 = (bytestrings__bytestring_t)ivar_23->elems[ivar_3];
           ivar_34->count++;
           release_stringutils_array_4((stringutils_array_4_t)ivar_23);
           result = (bytestrings__bytestring_t)stringutils__join_inner((bytestrings__bytestring_t)ivar_1, (stringutils_record_5_t)ivar_2, (uint32_t)ivar_33, (bytestrings__bytestring_t)ivar_34);
             } else {
           uint32_t ivar_64;
           uint8_t ivar_40;
           ivar_40 = (uint8_t)1;
           ivar_64 = (uint32_t)(ivar_3 + ivar_40);
           bytestrings__bytestring_t ivar_65;
           bytestrings__bytestring_t ivar_59;
           ivar_1->count++;
           ivar_59 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_4, (bytestrings__bytestring_t)ivar_1);
           bytestrings__bytestring_t ivar_60;
           stringutils_array_4_t ivar_51;
           stringutils_array_4_t ivar_56;
           ivar_56 = (stringutils_array_4_t)ivar_2->seq;
           ivar_56->count++;
           //copying to stringutils_array_4 from stringutils_array_4;
           ivar_51 = (stringutils_array_4_t)ivar_56;
           if (ivar_51 != NULL) ivar_51->count++;
           release_stringutils_array_4((stringutils_array_4_t)ivar_56);
           ivar_60 = (bytestrings__bytestring_t)ivar_51->elems[ivar_3];
           ivar_60->count++;
           release_stringutils_array_4((stringutils_array_4_t)ivar_51);
           ivar_65 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_59, (bytestrings__bytestring_t)ivar_60);
           result = (bytestrings__bytestring_t)stringutils__join_inner((bytestrings__bytestring_t)ivar_1, (stringutils_record_5_t)ivar_2, (uint32_t)ivar_64, (bytestrings__bytestring_t)ivar_65);};};
        
        result->count++;
        return result;
}

bytestrings__bytestring_t stringutils__join(bytestrings__bytestring_t ivar_1, stringutils_record_5_t ivar_2){
        bytestrings__bytestring_t  result;

        uint8_t ivar_17;
        ivar_17 = (uint8_t)0;
        uint32_t ivar_14;
        //copying to uint32 from uint8;
        ivar_14 = (uint32_t)ivar_17;
        bytestrings__bytestring_t ivar_15;
        strings__string_t ivar_10;
        uint32_t len34354 = 0;
        uint32_t characters34355[0] = {};
        stringliteral_t string34353 = mk_string(0, characters34355);
        ivar_10 = (strings__string_t)strings__make_string(len34354, string34353);
        ivar_15 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_10);
        result = (bytestrings__bytestring_t)stringutils__join_inner((bytestrings__bytestring_t)ivar_1, (stringutils_record_5_t)ivar_2, (uint32_t)ivar_14, (bytestrings__bytestring_t)ivar_15);
        
        result->count++;
        return result;
}

bool_t stringutils__join_test0(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        type_actual_t ivar_9;
        ivar_9 = (type_actual_t)actual_bytestrings__bytestring();
        bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_12;
        strings__string_t ivar_8;
        uint32_t len34367 = 1;
        uint32_t characters34368[1] = {44};
        stringliteral_t string34366 = mk_string(1, characters34368);
        ivar_8 = (strings__string_t)strings__make_string(len34367, string34366);
        ivar_12 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        stringutils_record_5_t ivar_13;
        ivar_13 = (stringutils_record_5_t)array_sequences__empty_aseq((type_actual_t)ivar_9);
        ivar_1 = (bytestrings__bytestring_t)stringutils__join((bytestrings__bytestring_t)ivar_12, (stringutils_record_5_t)ivar_13);
        bytestrings__bytestring_t ivar_2;
        strings__string_t ivar_17;
        uint32_t len34370 = 0;
        uint32_t characters34371[0] = {};
        stringliteral_t string34369 = mk_string(0, characters34371);
        ivar_17 = (strings__string_t)strings__make_string(len34370, string34369);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_17);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__join_test1(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_17;
        strings__string_t ivar_8;
        uint32_t len34385 = 1;
        uint32_t characters34386[1] = {44};
        stringliteral_t string34384 = mk_string(1, characters34386);
        ivar_8 = (strings__string_t)strings__make_string(len34385, string34384);
        ivar_17 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        stringutils_record_6_t ivar_20;
        uint8_t ivar_9;
        ivar_9 = (uint8_t)1;
        stringutils_array_4_t ivar_15;
        bytestrings__bytestring_t ivar_10;
        strings__string_t ivar_14;
        uint32_t len34388 = 1;
        uint32_t characters34389[1] = {97};
        stringliteral_t string34387 = mk_string(1, characters34389);
        ivar_14 = (strings__string_t)strings__make_string(len34388, string34387);
        ivar_10 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_14);
        ivar_15 = (stringutils_array_4_t)new_stringutils_array_4(1);
        ivar_15->elems[0]= ivar_10;
        stringutils_record_6_t tmp34390 = new_stringutils_record_6();;
        ivar_20 = (stringutils_record_6_t)tmp34390;
        tmp34390->length = (uint8_t)ivar_9;
        tmp34390->seq = (stringutils_array_4_t)ivar_15;
        stringutils_record_5_t ivar_18;
        //copying to stringutils_record_5 from stringutils_record_6;
        {

         ivar_18 = new_stringutils_record_5();
         ivar_18->length = (uint32_t)ivar_20->length;
         uint32_t length34380;
         length34380 = (uint32_t)ivar_18->length;
         ivar_18->seq = (stringutils_array_4_t)ivar_20->seq;
         if (ivar_18->seq != NULL) ivar_18->seq->count++;
         stringutils_array_4_t seq34381;
         seq34381 = (stringutils_array_4_t)ivar_18->seq; };
        release_stringutils_record_6((stringutils_record_6_t)ivar_20);
        ivar_1 = (bytestrings__bytestring_t)stringutils__join((bytestrings__bytestring_t)ivar_17, (stringutils_record_5_t)ivar_18);
        bytestrings__bytestring_t ivar_2;
        strings__string_t ivar_24;
        uint32_t len34392 = 1;
        uint32_t characters34393[1] = {97};
        stringliteral_t string34391 = mk_string(1, characters34393);
        ivar_24 = (strings__string_t)strings__make_string(len34392, string34391);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_24);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__join_test2(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_22;
        strings__string_t ivar_8;
        uint32_t len34409 = 1;
        uint32_t characters34410[1] = {44};
        stringliteral_t string34408 = mk_string(1, characters34410);
        ivar_8 = (strings__string_t)strings__make_string(len34409, string34408);
        ivar_22 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        stringutils_record_6_t ivar_25;
        uint8_t ivar_9;
        ivar_9 = (uint8_t)2;
        stringutils_array_4_t ivar_20;
        bytestrings__bytestring_t ivar_10;
        strings__string_t ivar_15;
        uint32_t len34412 = 1;
        uint32_t characters34413[1] = {97};
        stringliteral_t string34411 = mk_string(1, characters34413);
        ivar_15 = (strings__string_t)strings__make_string(len34412, string34411);
        ivar_10 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_15);
        bytestrings__bytestring_t ivar_11;
        strings__string_t ivar_19;
        uint32_t len34415 = 1;
        uint32_t characters34416[1] = {98};
        stringliteral_t string34414 = mk_string(1, characters34416);
        ivar_19 = (strings__string_t)strings__make_string(len34415, string34414);
        ivar_11 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_19);
        ivar_20 = (stringutils_array_4_t)new_stringutils_array_4(2);
        ivar_20->elems[0]= ivar_10;
        ivar_20->elems[1]= ivar_11;
        stringutils_record_6_t tmp34417 = new_stringutils_record_6();;
        ivar_25 = (stringutils_record_6_t)tmp34417;
        tmp34417->length = (uint8_t)ivar_9;
        tmp34417->seq = (stringutils_array_4_t)ivar_20;
        stringutils_record_5_t ivar_23;
        //copying to stringutils_record_5 from stringutils_record_6;
        {

         ivar_23 = new_stringutils_record_5();
         ivar_23->length = (uint32_t)ivar_25->length;
         uint32_t length34404;
         length34404 = (uint32_t)ivar_23->length;
         ivar_23->seq = (stringutils_array_4_t)ivar_25->seq;
         if (ivar_23->seq != NULL) ivar_23->seq->count++;
         stringutils_array_4_t seq34405;
         seq34405 = (stringutils_array_4_t)ivar_23->seq; };
        release_stringutils_record_6((stringutils_record_6_t)ivar_25);
        ivar_1 = (bytestrings__bytestring_t)stringutils__join((bytestrings__bytestring_t)ivar_22, (stringutils_record_5_t)ivar_23);
        bytestrings__bytestring_t ivar_2;
        strings__string_t ivar_29;
        uint32_t len34419 = 3;
        uint32_t characters34420[3] = {97, 44, 98};
        stringliteral_t string34418 = mk_string(3, characters34420);
        ivar_29 = (strings__string_t)strings__make_string(len34419, string34418);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_29);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}

bool_t stringutils__join_test3(void){
        bool_t  static  result;

        static bool_t defined = false;
        if (!defined){
            
        bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_27;
        strings__string_t ivar_8;
        uint32_t len34438 = 2;
        uint32_t characters34439[2] = {44, 32};
        stringliteral_t string34437 = mk_string(2, characters34439);
        ivar_8 = (strings__string_t)strings__make_string(len34438, string34437);
        ivar_27 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_8);
        stringutils_record_6_t ivar_30;
        uint8_t ivar_9;
        ivar_9 = (uint8_t)3;
        stringutils_array_4_t ivar_25;
        bytestrings__bytestring_t ivar_10;
        strings__string_t ivar_16;
        uint32_t len34441 = 1;
        uint32_t characters34442[1] = {97};
        stringliteral_t string34440 = mk_string(1, characters34442);
        ivar_16 = (strings__string_t)strings__make_string(len34441, string34440);
        ivar_10 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_16);
        bytestrings__bytestring_t ivar_11;
        strings__string_t ivar_20;
        uint32_t len34444 = 1;
        uint32_t characters34445[1] = {98};
        stringliteral_t string34443 = mk_string(1, characters34445);
        ivar_20 = (strings__string_t)strings__make_string(len34444, string34443);
        ivar_11 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_20);
        bytestrings__bytestring_t ivar_12;
        strings__string_t ivar_24;
        uint32_t len34447 = 1;
        uint32_t characters34448[1] = {99};
        stringliteral_t string34446 = mk_string(1, characters34448);
        ivar_24 = (strings__string_t)strings__make_string(len34447, string34446);
        ivar_12 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_24);
        ivar_25 = (stringutils_array_4_t)new_stringutils_array_4(3);
        ivar_25->elems[0]= ivar_10;
        ivar_25->elems[1]= ivar_11;
        ivar_25->elems[2]= ivar_12;
        stringutils_record_6_t tmp34449 = new_stringutils_record_6();;
        ivar_30 = (stringutils_record_6_t)tmp34449;
        tmp34449->length = (uint8_t)ivar_9;
        tmp34449->seq = (stringutils_array_4_t)ivar_25;
        stringutils_record_5_t ivar_28;
        //copying to stringutils_record_5 from stringutils_record_6;
        {

         ivar_28 = new_stringutils_record_5();
         ivar_28->length = (uint32_t)ivar_30->length;
         uint32_t length34433;
         length34433 = (uint32_t)ivar_28->length;
         ivar_28->seq = (stringutils_array_4_t)ivar_30->seq;
         if (ivar_28->seq != NULL) ivar_28->seq->count++;
         stringutils_array_4_t seq34434;
         seq34434 = (stringutils_array_4_t)ivar_28->seq; };
        release_stringutils_record_6((stringutils_record_6_t)ivar_30);
        ivar_1 = (bytestrings__bytestring_t)stringutils__join((bytestrings__bytestring_t)ivar_27, (stringutils_record_5_t)ivar_28);
        bytestrings__bytestring_t ivar_2;
        strings__string_t ivar_34;
        uint32_t len34451 = 7;
        uint32_t characters34452[7] = {97, 44, 32, 98, 44, 32, 99};
        stringliteral_t string34450 = mk_string(7, characters34452);
        ivar_34 = (strings__string_t)strings__make_string(len34451, string34450);
        ivar_2 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_34);
        result = (bool_t) equal_bytestrings__bytestring(ivar_1, ivar_2);
        defined = true;};
        
        
        return result;
}