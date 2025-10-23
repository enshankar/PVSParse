//Code generated using pvs2ir2c
#include "rotate_c.h"

void release_rotate_funtype_0(rotate_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

rotate_funtype_0_t copy_rotate_funtype_0(rotate_funtype_0_t x){return x->ftbl->cptr(x);}

bool_t equal_rotate_funtype_0(rotate_funtype_0_t x, rotate_funtype_0_t y){
        return false;}

char* json_rotate_funtype_0(rotate_funtype_0_t x){char * result = safe_malloc(26); sprintf(result, "%s", "\"rotate_funtype_0\""); return result;}


bytestrings__bytestring_t f_rotate_closure_1(struct rotate_closure_1_s * closure, bytestrings__bytestring_t bvar){
        bytestrings__bytestring_t result = h_rotate_closure_1(bvar, closure->fvar_1); 
        return result;}

bytestrings__bytestring_t m_rotate_closure_1(struct rotate_closure_1_s * closure, bytestrings__bytestring_t bvar){
        return h_rotate_closure_1(bvar, closure->fvar_1);}

extern bytestrings__bytestring_t h_rotate_closure_1(bytestrings__bytestring_t ivar_3, uint8_t ivar_1){
        bytestrings__bytestring_t result;
        uint32_t ivar_5;
        //copying to uint32 from uint8;
        ivar_5 = (uint32_t)ivar_1;
        rotate_array_2_t ivar_20;
        uint32_t size199199;
        //copying to uint32 from uint32;
        size199199 = (uint32_t)ivar_5;
        size199199 += 0;
        ivar_20 = new_rotate_array_2(size199199);
        uint8_t ivar_8;
        for (uint32_t index199194 = 0; index199194 < size199199; index199194++){
             ivar_8 = (uint8_t)index199194;
             bool_t ivar_9;
             uint32_t ivar_11;
             ivar_11 = (uint32_t)ivar_3->length;
             ivar_9 = (ivar_8 < ivar_11);
             if (ivar_9){  
           rotate_array_2_t ivar_17;
           ivar_17 = (rotate_array_2_t)ivar_3->seq;
           ivar_17->count++;
           uint32_t ivar_19;
           //copying to uint32 from uint8;
           ivar_19 = (uint32_t)ivar_8;
           ivar_20->elems[index199194] = (uint8_t)ivar_17->elems[ivar_19];
           release_rotate_array_2(ivar_17);
} else {
             
           ivar_20->elems[index199194] = (uint8_t)0;
};
        };
        release_bytestrings__bytestring(ivar_3);
        rotate_record_3_t tmp199204 = new_rotate_record_3();;
        result = (bytestrings__bytestring_t)tmp199204;
        tmp199204->length = (uint32_t)ivar_5;
        tmp199204->seq = (rotate_array_2_t)ivar_20;

        return result;
}

rotate_closure_1_t new_rotate_closure_1(void){
        static struct rotate_funtype_0_ftbl_s ftbl = {.fptr = (bytestrings__bytestring_t (*)(rotate_funtype_0_t, bytestrings__bytestring_t))&f_rotate_closure_1, .mptr = (bytestrings__bytestring_t (*)(rotate_funtype_0_t, bytestrings__bytestring_t))&m_rotate_closure_1, .rptr =  (void (*)(rotate_funtype_0_t))&release_rotate_closure_1, .cptr = (rotate_funtype_0_t (*)(rotate_funtype_0_t))&copy_rotate_closure_1};
        rotate_closure_1_t tmp = (rotate_closure_1_t) safe_malloc(sizeof(struct rotate_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_rotate_closure_1(rotate_funtype_0_t closure){
        rotate_closure_1_t x = (rotate_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

rotate_closure_1_t copy_rotate_closure_1(rotate_closure_1_t x){
        rotate_closure_1_t y = new_rotate_closure_1();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint8_t)x->fvar_1;
        if (x->htbl != NULL){
            rotate_funtype_0_htbl_t new_htbl = (rotate_funtype_0_htbl_t) safe_malloc(sizeof(struct rotate_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            rotate_funtype_0_hashentry_t * new_data = (rotate_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct rotate_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct rotate_funtype_0_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


rotate_array_2_t new_rotate_array_2(uint32_t size){
        rotate_array_2_t tmp = (rotate_array_2_t) safe_malloc(sizeof(struct rotate_array_2_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_rotate_array_2(rotate_array_2_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_rotate_array_2_ptr(pointer_t x, type_actual_t T){
        release_rotate_array_2((rotate_array_2_t)x);
}

rotate_array_2_t copy_rotate_array_2(rotate_array_2_t x){
        rotate_array_2_t tmp = new_rotate_array_2(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_rotate_array_2(rotate_array_2_t x, rotate_array_2_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_rotate_array_2(rotate_array_2_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint8(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_rotate_array_2_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_rotate_array_2((rotate_array_2_t)x, (rotate_array_2_t)y);
}

char * json_rotate_array_2_ptr(pointer_t x, type_actual_t T){
        return json_rotate_array_2((rotate_array_2_t)x);
}

actual_rotate_array_2_t actual_rotate_array_2(){
        actual_rotate_array_2_t new = (actual_rotate_array_2_t)safe_malloc(sizeof(struct actual_rotate_array_2_s));
        new->equal_ptr = (equal_ptr_t)(*equal_rotate_array_2_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_rotate_array_2_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_rotate_array_2_ptr);
 

 
        return new;
 };

rotate_array_2_t update_rotate_array_2(rotate_array_2_t x, uint32_t i, uint8_t v){
        rotate_array_2_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_rotate_array_2(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

rotate_array_2_t upgrade_rotate_array_2(rotate_array_2_t x, uint32_t i, uint8_t v){
        rotate_array_2_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct rotate_array_2_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_rotate_array_2(x);}
           else {y = copy_rotate_array_2(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




rotate_record_3_t new_rotate_record_3(void){
        rotate_record_3_t tmp = (rotate_record_3_t) safe_malloc(sizeof(struct rotate_record_3_s));
        tmp->count = 1;
        return tmp;}

void release_rotate_record_3(rotate_record_3_t x){
        x->count--;
        if (x->count <= 0){
         release_rotate_array_2(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_rotate_record_3_ptr(pointer_t x, type_actual_t T){
        release_rotate_record_3((rotate_record_3_t)x);
}

rotate_record_3_t copy_rotate_record_3(rotate_record_3_t x){
        rotate_record_3_t y = new_rotate_record_3();
        y->length = (uint32_t)x->length;
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_rotate_record_3(rotate_record_3_t x, rotate_record_3_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_rotate_array_2(x->seq, y->seq);
        return tmp;}

char * json_rotate_record_3(rotate_record_3_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(18);
         sprintf(fld0, "\"length\" : ");
        tmp[0] = safe_strcat(fld0, json_uint32(x->length));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"seq\" : ");
        tmp[1] = safe_strcat(fld1, json_rotate_array_2(x->seq));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_rotate_record_3_ptr(pointer_t x, pointer_t y, actual_rotate_record_3_t T){
        return equal_rotate_record_3((rotate_record_3_t)x, (rotate_record_3_t)y);
}

char * json_rotate_record_3_ptr(pointer_t x, actual_rotate_record_3_t T){
        return json_rotate_record_3((rotate_record_3_t)x);
}

actual_rotate_record_3_t actual_rotate_record_3(){
        actual_rotate_record_3_t new = (actual_rotate_record_3_t)safe_malloc(sizeof(struct actual_rotate_record_3_s));
        new->equal_ptr = (equal_ptr_t)(*equal_rotate_record_3_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_rotate_record_3_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_rotate_record_3_ptr);
 

 
        return new;
 };

rotate_record_3_t update_rotate_record_3_length(rotate_record_3_t x, uint32_t v){
        rotate_record_3_t y;
        if (x->count == 1){y = x;}
        else {y = copy_rotate_record_3(x); x->count--;};
        y->length = (uint32_t)v;
        return y;}

rotate_record_3_t update_rotate_record_3_seq(rotate_record_3_t x, rotate_array_2_t v){
        rotate_record_3_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_rotate_array_2(x->seq);};}
        else {y = copy_rotate_record_3(x); x->count--; y->seq->count--;};
        y->seq = (rotate_array_2_t)v;
        return y;}




rotate_record_4_t new_rotate_record_4(void){
        rotate_record_4_t tmp = (rotate_record_4_t) safe_malloc(sizeof(struct rotate_record_4_s));
        tmp->count = 1;
        return tmp;}

void release_rotate_record_4(rotate_record_4_t x){
        x->count--;
        if (x->count <= 0){
         release_bytestrings__bytestring(x->project_1);
         release_bytestrings__bytestring(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_rotate_record_4_ptr(pointer_t x, type_actual_t T){
        release_rotate_record_4((rotate_record_4_t)x);
}

rotate_record_4_t copy_rotate_record_4(rotate_record_4_t x){
        rotate_record_4_t y = new_rotate_record_4();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_rotate_record_4(rotate_record_4_t x, rotate_record_4_t y){
        bool_t tmp = true;
        tmp = tmp && equal_bytestrings__bytestring(x->project_1, y->project_1);
        tmp = tmp && equal_bytestrings__bytestring(x->project_2, y->project_2);
        return tmp;}

char * json_rotate_record_4(rotate_record_4_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_bytestrings__bytestring(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_bytestrings__bytestring(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_rotate_record_4_ptr(pointer_t x, pointer_t y, actual_rotate_record_4_t T){
        return equal_rotate_record_4((rotate_record_4_t)x, (rotate_record_4_t)y);
}

char * json_rotate_record_4_ptr(pointer_t x, actual_rotate_record_4_t T){
        return json_rotate_record_4((rotate_record_4_t)x);
}

actual_rotate_record_4_t actual_rotate_record_4(){
        actual_rotate_record_4_t new = (actual_rotate_record_4_t)safe_malloc(sizeof(struct actual_rotate_record_4_s));
        new->equal_ptr = (equal_ptr_t)(*equal_rotate_record_4_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_rotate_record_4_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_rotate_record_4_ptr);
 

 
        return new;
 };

rotate_record_4_t update_rotate_record_4_project_1(rotate_record_4_t x, bytestrings__bytestring_t v){
        rotate_record_4_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_bytestrings__bytestring(x->project_1);};}
        else {y = copy_rotate_record_4(x); x->count--; y->project_1->count--;};
        y->project_1 = (bytestrings__bytestring_t)v;
        return y;}

rotate_record_4_t update_rotate_record_4_project_2(rotate_record_4_t x, bytestrings__bytestring_t v){
        rotate_record_4_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_bytestrings__bytestring(x->project_2);};}
        else {y = copy_rotate_record_4(x); x->count--; y->project_2->count--;};
        y->project_2 = (bytestrings__bytestring_t)v;
        return y;}



void release_rotate_funtype_5(rotate_funtype_5_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

rotate_funtype_5_t copy_rotate_funtype_5(rotate_funtype_5_t x){return x->ftbl->cptr(x);}

bool_t equal_rotate_funtype_5(rotate_funtype_5_t x, rotate_funtype_5_t y){
        return false;}

char* json_rotate_funtype_5(rotate_funtype_5_t x){char * result = safe_malloc(26); sprintf(result, "%s", "\"rotate_funtype_5\""); return result;}


bytestrings__bytestring_t f_rotate_closure_6(struct rotate_closure_6_s * closure, rotate_record_4_t bvar){
        bytestrings__bytestring_t bvar_1;
        bvar_1 = (bytestrings__bytestring_t)bvar->project_1;
        bvar->project_1->count++;
        bytestrings__bytestring_t bvar_2;
        bvar_2 = (bytestrings__bytestring_t)bvar->project_2;
        bvar->project_2->count++;
        release_rotate_record_4(bvar);
        bytestrings__bytestring_t result = h_rotate_closure_6(bvar_1, bvar_2, closure->fvar_1); 
        release_bytestrings__bytestring(bvar_1);
        release_bytestrings__bytestring(bvar_2);
        return result;}

bytestrings__bytestring_t m_rotate_closure_6(struct rotate_closure_6_s * closure, bytestrings__bytestring_t bvar_1, bytestrings__bytestring_t bvar_2){
        return h_rotate_closure_6(bvar_1, bvar_2, closure->fvar_1);}

extern bytestrings__bytestring_t h_rotate_closure_6(bytestrings__bytestring_t ivar_3, bytestrings__bytestring_t ivar_4, uint8_t ivar_1){
        bytestrings__bytestring_t result;
        uint32_t ivar_6;
        //copying to uint32 from uint8;
        ivar_6 = (uint32_t)ivar_1;
        rotate_array_2_t ivar_27;
        uint32_t size199289;
        //copying to uint32 from uint32;
        size199289 = (uint32_t)ivar_6;
        size199289 += 0;
        ivar_27 = new_rotate_array_2(size199289);
        uint8_t ivar_9;
        for (uint32_t index199280 = 0; index199280 < size199289; index199280++){
             ivar_9 = (uint8_t)index199280;
             uint8_t ivar_25;
             rotate_array_2_t ivar_15;
             ivar_15 = (rotate_array_2_t)ivar_3->seq;
             ivar_15->count++;
             uint32_t ivar_17;
             //copying to uint32 from uint8;
             ivar_17 = (uint32_t)ivar_9;
             ivar_25 = (uint8_t)ivar_15->elems[ivar_17];
             release_rotate_array_2(ivar_15);
             uint8_t ivar_26;
             rotate_array_2_t ivar_21;
             ivar_21 = (rotate_array_2_t)ivar_4->seq;
             ivar_21->count++;
             uint32_t ivar_23;
             //copying to uint32 from uint8;
             ivar_23 = (uint32_t)ivar_9;
             ivar_26 = (uint8_t)ivar_21->elems[ivar_23];
             release_rotate_array_2(ivar_21);
             ivar_27->elems[index199280] = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_25, (uint8_t)ivar_26);
        };
        release_bytestrings__bytestring(ivar_4);
        release_bytestrings__bytestring(ivar_3);
        rotate_record_3_t tmp199294 = new_rotate_record_3();;
        result = (bytestrings__bytestring_t)tmp199294;
        tmp199294->length = (uint32_t)ivar_6;
        tmp199294->seq = (rotate_array_2_t)ivar_27;

        return result;
}

rotate_closure_6_t new_rotate_closure_6(void){
        static struct rotate_funtype_5_ftbl_s ftbl = {.fptr = (bytestrings__bytestring_t (*)(rotate_funtype_5_t, rotate_record_4_t))&f_rotate_closure_6, .mptr = (bytestrings__bytestring_t (*)(rotate_funtype_5_t, bytestrings__bytestring_t, bytestrings__bytestring_t))&m_rotate_closure_6, .rptr =  (void (*)(rotate_funtype_5_t))&release_rotate_closure_6, .cptr = (rotate_funtype_5_t (*)(rotate_funtype_5_t))&copy_rotate_closure_6};
        rotate_closure_6_t tmp = (rotate_closure_6_t) safe_malloc(sizeof(struct rotate_closure_6_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_rotate_closure_6(rotate_funtype_5_t closure){
        rotate_closure_6_t x = (rotate_closure_6_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

rotate_closure_6_t copy_rotate_closure_6(rotate_closure_6_t x){
        rotate_closure_6_t y = new_rotate_closure_6();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint8_t)x->fvar_1;
        if (x->htbl != NULL){
            rotate_funtype_5_htbl_t new_htbl = (rotate_funtype_5_htbl_t) safe_malloc(sizeof(struct rotate_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            rotate_funtype_5_hashentry_t * new_data = (rotate_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct rotate_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct rotate_funtype_5_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern uint8_t rotate__u8rightrotate(uint8_t ivar_1, uint8_t ivar_2){
        uint8_t  result;
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
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_4;
        ivar_4 = (uint8_t)255;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)5;
        result = (uint8_t)rotate__u8rightrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint8_t rotate__test_u8rightrotate_1(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)3;
        result = (uint8_t)rotate__u8rightrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint8_t rotate__test_u8rightrotate_2(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_4;
        ivar_4 = (uint8_t)240;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)7;
        result = (uint8_t)rotate__u8rightrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint8_t rotate__test_u8rightrotate_3(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_4;
        ivar_4 = (uint8_t)15;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)2;
        result = (uint8_t)rotate__u8rightrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint8_t rotate__test_u8rightrotate_4(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_4;
        ivar_4 = (uint8_t)255;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)8;
        result = (uint8_t)rotate__u8rightrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint8_t rotate__test_u8rightrotate_5(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_4;
        ivar_4 = (uint8_t)255;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        result = (uint8_t)rotate__u8rightrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint16_t rotate__u16rightrotate(uint16_t ivar_1, uint8_t ivar_2){
        uint16_t  result;
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
        uint16_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint16_t ivar_4;
        ivar_4 = (uint16_t)65535;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)15;
        result = (uint16_t)rotate__u16rightrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint16_t rotate__test_u16rightrotate_1(void){
        uint16_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint16_t ivar_4;
        ivar_4 = (uint16_t)61680;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)13;
        result = (uint16_t)rotate__u16rightrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint16_t rotate__test_u16rightrotate_2(void){
        uint16_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_7;
        ivar_7 = (uint8_t)240;
        uint16_t ivar_4;
        //copying to uint16 from uint8;
        ivar_4 = (uint16_t)ivar_7;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)4;
        result = (uint16_t)rotate__u16rightrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint16_t rotate__test_u16rightrotate_3(void){
        uint16_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint16_t ivar_4;
        ivar_4 = (uint16_t)3855;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)9;
        result = (uint16_t)rotate__u16rightrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint16_t rotate__test_u16rightrotate_4(void){
        uint16_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint16_t ivar_4;
        ivar_4 = (uint16_t)3855;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)16;
        result = (uint16_t)rotate__u16rightrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint16_t rotate__test_u16rightrotate_5(void){
        uint16_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint16_t ivar_4;
        ivar_4 = (uint16_t)3855;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        result = (uint16_t)rotate__u16rightrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint32_t rotate__u32rightrotate(uint32_t ivar_1, uint8_t ivar_2){
        uint32_t  result;
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
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_4;
        ivar_4 = (uint32_t)4294967295;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)31;
        result = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint32_t rotate__test_u32rightrotate_1(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_4;
        ivar_4 = (uint32_t)4042322160;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)23;
        result = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint32_t rotate__test_u32rightrotate_2(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_4;
        ivar_4 = (uint32_t)15728880;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)14;
        result = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint32_t rotate__test_u32rightrotate_3(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_4;
        ivar_4 = (uint32_t)252645135;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)9;
        result = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint32_t rotate__test_u32rightrotate_4(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_4;
        ivar_4 = (uint32_t)252645135;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)32;
        result = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint32_t rotate__test_u32rightrotate_5(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_4;
        ivar_4 = (uint32_t)252645135;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        result = (uint32_t)rotate__u32rightrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint64_t rotate__u64rightrotate(uint64_t ivar_1, uint8_t ivar_2){
        uint64_t  result;
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
        uint64_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_4;
        ivar_4 = (uint64_t)72057594037927935;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)63;
        result = (uint64_t)rotate__u64rightrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint64_t rotate__test_u64rightrotate_1(void){
        uint64_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_4;
        ivar_4 = (uint64_t)1148682822604615920;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)43;
        result = (uint64_t)rotate__u64rightrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint64_t rotate__test_u64rightrotate_2(void){
        uint64_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_4;
        ivar_4 = (uint64_t)67555029245030640;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)24;
        result = (uint64_t)rotate__u64rightrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint64_t rotate__test_u64rightrotate_3(void){
        uint64_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_4;
        ivar_4 = (uint64_t)1085102596360827120;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)9;
        result = (uint64_t)rotate__u64rightrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint64_t rotate__test_u64rightrotate_4(void){
        uint64_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_4;
        ivar_4 = (uint64_t)1085102596360827120;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)64;
        result = (uint64_t)rotate__u64rightrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint64_t rotate__test_u64rightrotate_5(void){
        uint64_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_4;
        ivar_4 = (uint64_t)1085102596360827120;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        result = (uint64_t)rotate__u64rightrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint8_t rotate__u8leftrotate(uint8_t ivar_1, uint8_t ivar_2){
        uint8_t  result;
        uint8_t ivar_19;
        ivar_19 = (uint8_t)integertypes__u8lshift((uint8_t)ivar_1, (uint8_t)ivar_2);
        uint8_t ivar_20;
        uint8_t ivar_17;
        uint8_t ivar_12;
        ivar_12 = (uint8_t)8;
        ivar_17 = (uint8_t)(ivar_12 - ivar_2);
        ivar_20 = (uint8_t)integertypes__u8rshift((uint8_t)ivar_1, (uint8_t)ivar_17);
        result = (uint8_t)integertypes__u8plus((uint8_t)ivar_19, (uint8_t)ivar_20);

        
        return result;
}

extern uint8_t rotate__test_u8leftrotate_0(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_4;
        ivar_4 = (uint8_t)255;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)5;
        result = (uint8_t)rotate__u8leftrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint8_t rotate__test_u8leftrotate_1(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)3;
        result = (uint8_t)rotate__u8leftrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint8_t rotate__test_u8leftrotate_2(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_4;
        ivar_4 = (uint8_t)240;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)7;
        result = (uint8_t)rotate__u8leftrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint8_t rotate__test_u8leftrotate_3(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_4;
        ivar_4 = (uint8_t)15;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)2;
        result = (uint8_t)rotate__u8leftrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint8_t rotate__test_u8leftrotate_4(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_4;
        ivar_4 = (uint8_t)255;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)8;
        result = (uint8_t)rotate__u8leftrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint8_t rotate__test_u8leftrotate_5(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_4;
        ivar_4 = (uint8_t)255;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        result = (uint8_t)rotate__u8leftrotate((uint8_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint16_t rotate__u16leftrotate(uint16_t ivar_1, uint8_t ivar_2){
        uint16_t  result;
        uint16_t ivar_19;
        ivar_19 = (uint16_t)integertypes__u16lshift((uint16_t)ivar_1, (uint16_t)ivar_2);
        uint16_t ivar_20;
        uint8_t ivar_17;
        uint8_t ivar_12;
        ivar_12 = (uint8_t)16;
        ivar_17 = (uint8_t)(ivar_12 - ivar_2);
        ivar_20 = (uint16_t)integertypes__u16rshift((uint16_t)ivar_1, (uint16_t)ivar_17);
        result = (uint16_t)integertypes__u16plus((uint16_t)ivar_19, (uint16_t)ivar_20);

        
        return result;
}

extern uint16_t rotate__test_u16leftrotate_0(void){
        uint16_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint16_t ivar_4;
        ivar_4 = (uint16_t)65535;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)15;
        result = (uint16_t)rotate__u16leftrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint16_t rotate__test_u16leftrotate_1(void){
        uint16_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint16_t ivar_4;
        ivar_4 = (uint16_t)61680;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)13;
        result = (uint16_t)rotate__u16leftrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint16_t rotate__test_u16leftrotate_2(void){
        uint16_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_7;
        ivar_7 = (uint8_t)240;
        uint16_t ivar_4;
        //copying to uint16 from uint8;
        ivar_4 = (uint16_t)ivar_7;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)4;
        result = (uint16_t)rotate__u16leftrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint16_t rotate__test_u16leftrotate_3(void){
        uint16_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint16_t ivar_4;
        ivar_4 = (uint16_t)3855;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)9;
        result = (uint16_t)rotate__u16leftrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint16_t rotate__test_u16leftrotate_4(void){
        uint16_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint16_t ivar_4;
        ivar_4 = (uint16_t)3855;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)16;
        result = (uint16_t)rotate__u16leftrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint16_t rotate__test_u16leftrotate_5(void){
        uint16_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint16_t ivar_4;
        ivar_4 = (uint16_t)3855;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        result = (uint16_t)rotate__u16leftrotate((uint16_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint32_t rotate__u32leftrotate(uint32_t ivar_1, uint8_t ivar_2){
        uint32_t  result;
        uint32_t ivar_19;
        ivar_19 = (uint32_t)integertypes__u32lshift((uint32_t)ivar_1, (uint32_t)ivar_2);
        uint32_t ivar_20;
        uint8_t ivar_17;
        uint8_t ivar_12;
        ivar_12 = (uint8_t)32;
        ivar_17 = (uint8_t)(ivar_12 - ivar_2);
        ivar_20 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_17);
        result = (uint32_t)integertypes__u32plus((uint32_t)ivar_19, (uint32_t)ivar_20);

        
        return result;
}

extern uint32_t rotate__test_u32leftrotate_0(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_4;
        ivar_4 = (uint32_t)4294967295;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)31;
        result = (uint32_t)rotate__u32leftrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint32_t rotate__test_u32leftrotate_1(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_4;
        ivar_4 = (uint32_t)4042322160;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)23;
        result = (uint32_t)rotate__u32leftrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint32_t rotate__test_u32leftrotate_2(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_4;
        ivar_4 = (uint32_t)15728880;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)14;
        result = (uint32_t)rotate__u32leftrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint32_t rotate__test_u32leftrotate_3(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_4;
        ivar_4 = (uint32_t)252645135;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)9;
        result = (uint32_t)rotate__u32leftrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint32_t rotate__test_u32leftrotate_4(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_4;
        ivar_4 = (uint32_t)252645135;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)32;
        result = (uint32_t)rotate__u32leftrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint32_t rotate__test_u32leftrotate_5(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_4;
        ivar_4 = (uint32_t)252645135;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        result = (uint32_t)rotate__u32leftrotate((uint32_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint64_t rotate__u64leftrotate(uint64_t ivar_1, uint8_t ivar_2){
        uint64_t  result;
        uint64_t ivar_19;
        ivar_19 = (uint64_t)integertypes__u64lshift((uint64_t)ivar_1, (uint64_t)ivar_2);
        uint64_t ivar_20;
        uint8_t ivar_17;
        uint8_t ivar_12;
        ivar_12 = (uint8_t)64;
        ivar_17 = (uint8_t)(ivar_12 - ivar_2);
        ivar_20 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_1, (uint64_t)ivar_17);
        result = (uint64_t)integertypes__u64plus((uint64_t)ivar_19, (uint64_t)ivar_20);

        
        return result;
}

extern uint64_t rotate__test_u64leftrotate_0(void){
        uint64_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_4;
        ivar_4 = (uint64_t)72057594037927935;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)63;
        result = (uint64_t)rotate__u64leftrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint64_t rotate__test_u64leftrotate_1(void){
        uint64_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_4;
        ivar_4 = (uint64_t)1148682822604615920;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)43;
        result = (uint64_t)rotate__u64leftrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint64_t rotate__test_u64leftrotate_2(void){
        uint64_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_4;
        ivar_4 = (uint64_t)67555029245030640;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)24;
        result = (uint64_t)rotate__u64leftrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint64_t rotate__test_u64leftrotate_3(void){
        uint64_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_4;
        ivar_4 = (uint64_t)1085102596360827120;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)9;
        result = (uint64_t)rotate__u64leftrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint64_t rotate__test_u64leftrotate_4(void){
        uint64_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_4;
        ivar_4 = (uint64_t)1085102596360827120;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)64;
        result = (uint64_t)rotate__u64leftrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern uint64_t rotate__test_u64leftrotate_5(void){
        uint64_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_4;
        ivar_4 = (uint64_t)1085102596360827120;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)0;
        result = (uint64_t)rotate__u64leftrotate((uint64_t)ivar_4, (uint8_t)ivar_5);

        defined = true;};
        
        return result;
}

extern rotate_funtype_0_t rotate__padright(uint8_t ivar_1){
        rotate_funtype_0_t  result;
        rotate_closure_1_t cl199205;
        cl199205 = new_rotate_closure_1();
        cl199205->fvar_1 = (uint8_t)ivar_1;
        result = (rotate_funtype_0_t)cl199205;

        
        return result;
}

extern rotate_funtype_5_t rotate__lbytesXOR(uint8_t ivar_1){
        rotate_funtype_5_t  result;
        rotate_closure_6_t cl199295;
        cl199295 = new_rotate_closure_6();
        cl199295->fvar_1 = (uint8_t)ivar_1;
        result = (rotate_funtype_5_t)cl199295;

        
        return result;
}

extern bytestrings__bytestring_t rotate__nbytes(uint8_t ivar_1, uint8_t ivar_2){
        bytestrings__bytestring_t  result;
        uint32_t ivar_4;
        //copying to uint32 from uint8;
        ivar_4 = (uint32_t)ivar_2;
        rotate_array_2_t ivar_9;
        uint32_t size199307;
        //copying to uint32 from uint32;
        size199307 = (uint32_t)ivar_4;
        size199307 += 0;
        ivar_9 = new_rotate_array_2(size199307);
        uint8_t ivar_7;
        for (uint32_t index199306 = 0; index199306 < size199307; index199306++){
             ivar_7 = (uint8_t)index199306;
             //copying to uint8 from uint8;
             ivar_9->elems[index199306] = (uint8_t)ivar_1;
        };
        rotate_record_3_t tmp199312 = new_rotate_record_3();;
        result = (bytestrings__bytestring_t)tmp199312;
        tmp199312->length = (uint32_t)ivar_4;
        tmp199312->seq = (rotate_array_2_t)ivar_9;

        
        return result;
}

extern bytestrings__bytestring_t rotate__u8tobytestring(uint8_t ivar_1){
        bytestrings__bytestring_t  result;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)1;
        uint32_t ivar_2;
        //copying to uint32 from uint8;
        ivar_2 = (uint32_t)ivar_8;
        rotate_array_2_t ivar_7;
        uint32_t size199321;
        //copying to uint32 from uint32;
        size199321 = (uint32_t)ivar_2;
        size199321 += 0;
        ivar_7 = new_rotate_array_2(size199321);
        uint8_t ivar_5;
        for (uint32_t index199320 = 0; index199320 < size199321; index199320++){
             ivar_5 = (uint8_t)index199320;
             //copying to uint8 from uint8;
             ivar_7->elems[index199320] = (uint8_t)ivar_1;
        };
        rotate_record_3_t tmp199326 = new_rotate_record_3();;
        result = (bytestrings__bytestring_t)tmp199326;
        tmp199326->length = (uint32_t)ivar_2;
        tmp199326->seq = (rotate_array_2_t)ivar_7;

        
        return result;
}

extern bytestrings__bytestring_t rotate__test_u8tobytestring_0(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_3;
        ivar_3 = (uint8_t)255;
        result = (bytestrings__bytestring_t)rotate__u8tobytestring((uint8_t)ivar_3);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t rotate__test_u8tobytestring_1(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_3;
        ivar_3 = (uint8_t)15;
        result = (bytestrings__bytestring_t)rotate__u8tobytestring((uint8_t)ivar_3);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t rotate__test_u8tobytestring_2(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_3;
        ivar_3 = (uint8_t)240;
        result = (bytestrings__bytestring_t)rotate__u8tobytestring((uint8_t)ivar_3);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t rotate__test_u8tobytestring_3(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        result = (bytestrings__bytestring_t)rotate__u8tobytestring((uint8_t)ivar_3);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t rotate__u16tobytestring(uint16_t ivar_1){
        bytestrings__bytestring_t  result;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)2;
        uint32_t ivar_2;
        //copying to uint32 from uint8;
        ivar_2 = (uint32_t)ivar_26;
        rotate_array_2_t ivar_25;
        uint32_t size199359;
        //copying to uint32 from uint32;
        size199359 = (uint32_t)ivar_2;
        size199359 += 0;
        ivar_25 = new_rotate_array_2(size199359);
        uint8_t ivar_5;
        for (uint32_t index199358 = 0; index199358 < size199359; index199358++){
             ivar_5 = (uint8_t)index199358;
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
           ivar_25->elems[index199358] = (uint8_t)integertypes__u16rem((uint16_t)ivar_18, (uint16_t)ivar_19);
} else {
             
           uint16_t ivar_24;
           ivar_24 = (uint16_t)256;
           ivar_25->elems[index199358] = (uint8_t)integertypes__u16rem((uint16_t)ivar_1, (uint16_t)ivar_24);
};
        };
        rotate_record_3_t tmp199364 = new_rotate_record_3();;
        result = (bytestrings__bytestring_t)tmp199364;
        tmp199364->length = (uint32_t)ivar_2;
        tmp199364->seq = (rotate_array_2_t)ivar_25;

        
        return result;
}

extern bytestrings__bytestring_t rotate__test_u16tobytestring_0(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint16_t ivar_3;
        ivar_3 = (uint16_t)65535;
        result = (bytestrings__bytestring_t)rotate__u16tobytestring((uint16_t)ivar_3);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t rotate__test_u16tobytestring_1(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint16_t ivar_3;
        ivar_3 = (uint16_t)3855;
        result = (bytestrings__bytestring_t)rotate__u16tobytestring((uint16_t)ivar_3);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t rotate__test_u16tobytestring_2(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint16_t ivar_3;
        ivar_3 = (uint16_t)61455;
        result = (bytestrings__bytestring_t)rotate__u16tobytestring((uint16_t)ivar_3);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t rotate__test_u16tobytestring_3(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_5;
        ivar_5 = (uint8_t)255;
        uint16_t ivar_3;
        //copying to uint16 from uint8;
        ivar_3 = (uint16_t)ivar_5;
        result = (bytestrings__bytestring_t)rotate__u16tobytestring((uint16_t)ivar_3);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t rotate__u32tobytestring(uint32_t ivar_1){
        bytestrings__bytestring_t  result;
        uint8_t ivar_62;
        ivar_62 = (uint8_t)4;
        uint32_t ivar_2;
        //copying to uint32 from uint8;
        ivar_2 = (uint32_t)ivar_62;
        rotate_array_2_t ivar_61;
        uint32_t size199397;
        //copying to uint32 from uint32;
        size199397 = (uint32_t)ivar_2;
        size199397 += 0;
        ivar_61 = new_rotate_array_2(size199397);
        uint8_t ivar_5;
        for (uint32_t index199396 = 0; index199396 < size199397; index199396++){
             ivar_5 = (uint8_t)index199396;
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)0;
             ivar_6 = (ivar_5 == ivar_8);
             if (ivar_6){  
           uint32_t ivar_18;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)24;
           ivar_18 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_16);
           uint16_t ivar_21;
           ivar_21 = (uint16_t)256;
           uint32_t ivar_19;
           //copying to uint32 from uint16;
           ivar_19 = (uint32_t)ivar_21;
           ivar_61->elems[index199396] = (uint8_t)integertypes__u32rem((uint32_t)ivar_18, (uint32_t)ivar_19);
} else {
             
           bool_t ivar_22;
           uint8_t ivar_24;
           ivar_24 = (uint8_t)1;
           ivar_22 = (ivar_5 == ivar_24);
           if (ivar_22){   
           uint32_t ivar_34;
           uint8_t ivar_32;
           ivar_32 = (uint8_t)16;
           ivar_34 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_32);
           uint16_t ivar_37;
           ivar_37 = (uint16_t)256;
           uint32_t ivar_35;
           //copying to uint32 from uint16;
           ivar_35 = (uint32_t)ivar_37;
           ivar_61->elems[index199396] = (uint8_t)integertypes__u32rem((uint32_t)ivar_34, (uint32_t)ivar_35);
} else {
           
           bool_t ivar_38;
           uint8_t ivar_40;
           ivar_40 = (uint8_t)2;
           ivar_38 = (ivar_5 == ivar_40);
           if (ivar_38){    
            uint32_t ivar_50;
            uint8_t ivar_48;
            ivar_48 = (uint8_t)8;
            ivar_50 = (uint32_t)integertypes__u32rshift((uint32_t)ivar_1, (uint32_t)ivar_48);
            uint16_t ivar_53;
            ivar_53 = (uint16_t)256;
            uint32_t ivar_51;
            //copying to uint32 from uint16;
            ivar_51 = (uint32_t)ivar_53;
            ivar_61->elems[index199396] = (uint8_t)integertypes__u32rem((uint32_t)ivar_50, (uint32_t)ivar_51);
} else {
           
            uint16_t ivar_60;
            ivar_60 = (uint16_t)256;
            uint32_t ivar_58;
            //copying to uint32 from uint16;
            ivar_58 = (uint32_t)ivar_60;
            ivar_61->elems[index199396] = (uint8_t)integertypes__u32rem((uint32_t)ivar_1, (uint32_t)ivar_58);
};
};
};
        };
        rotate_record_3_t tmp199402 = new_rotate_record_3();;
        result = (bytestrings__bytestring_t)tmp199402;
        tmp199402->length = (uint32_t)ivar_2;
        tmp199402->seq = (rotate_array_2_t)ivar_61;

        
        return result;
}

extern bytestrings__bytestring_t rotate__test_u32tobytestring_0(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_3;
        ivar_3 = (uint32_t)4294967295;
        result = (bytestrings__bytestring_t)rotate__u32tobytestring((uint32_t)ivar_3);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t rotate__test_u32tobytestring_1(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_3;
        ivar_3 = (uint32_t)252645135;
        result = (bytestrings__bytestring_t)rotate__u32tobytestring((uint32_t)ivar_3);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t rotate__test_u32tobytestring_2(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_3;
        ivar_3 = (uint32_t)4027576335;
        result = (bytestrings__bytestring_t)rotate__u32tobytestring((uint32_t)ivar_3);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t rotate__test_u32tobytestring_3(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_3;
        ivar_3 = (uint32_t)16711935;
        result = (bytestrings__bytestring_t)rotate__u32tobytestring((uint32_t)ivar_3);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t rotate__u64tobytestring(uint64_t ivar_1){
        bytestrings__bytestring_t  result;
        uint8_t ivar_126;
        ivar_126 = (uint8_t)8;
        uint32_t ivar_2;
        //copying to uint32 from uint8;
        ivar_2 = (uint32_t)ivar_126;
        rotate_array_2_t ivar_125;
        uint32_t size199435;
        //copying to uint32 from uint32;
        size199435 = (uint32_t)ivar_2;
        size199435 += 0;
        ivar_125 = new_rotate_array_2(size199435);
        uint8_t ivar_5;
        for (uint32_t index199434 = 0; index199434 < size199435; index199434++){
             ivar_5 = (uint8_t)index199434;
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)0;
             ivar_6 = (ivar_5 == ivar_8);
             if (ivar_6){  
           uint64_t ivar_18;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)56;
           ivar_18 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_1, (uint64_t)ivar_16);
           uint16_t ivar_21;
           ivar_21 = (uint16_t)256;
           uint64_t ivar_19;
           //copying to uint64 from uint16;
           ivar_19 = (uint64_t)ivar_21;
           ivar_125->elems[index199434] = (uint8_t)integertypes__u64rem((uint64_t)ivar_18, (uint64_t)ivar_19);
} else {
             
           bool_t ivar_22;
           uint8_t ivar_24;
           ivar_24 = (uint8_t)1;
           ivar_22 = (ivar_5 == ivar_24);
           if (ivar_22){   
           uint64_t ivar_34;
           uint8_t ivar_32;
           ivar_32 = (uint8_t)48;
           ivar_34 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_1, (uint64_t)ivar_32);
           uint16_t ivar_37;
           ivar_37 = (uint16_t)256;
           uint64_t ivar_35;
           //copying to uint64 from uint16;
           ivar_35 = (uint64_t)ivar_37;
           ivar_125->elems[index199434] = (uint8_t)integertypes__u64rem((uint64_t)ivar_34, (uint64_t)ivar_35);
} else {
           
           bool_t ivar_38;
           uint8_t ivar_40;
           ivar_40 = (uint8_t)2;
           ivar_38 = (ivar_5 == ivar_40);
           if (ivar_38){    
            uint64_t ivar_50;
            uint8_t ivar_48;
            ivar_48 = (uint8_t)40;
            ivar_50 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_1, (uint64_t)ivar_48);
            uint16_t ivar_53;
            ivar_53 = (uint16_t)256;
            uint64_t ivar_51;
            //copying to uint64 from uint16;
            ivar_51 = (uint64_t)ivar_53;
            ivar_125->elems[index199434] = (uint8_t)integertypes__u64rem((uint64_t)ivar_50, (uint64_t)ivar_51);
} else {
           
            bool_t ivar_54;
            uint8_t ivar_56;
            ivar_56 = (uint8_t)3;
            ivar_54 = (ivar_5 == ivar_56);
            if (ivar_54){     
             uint64_t ivar_66;
             uint8_t ivar_64;
             ivar_64 = (uint8_t)32;
             ivar_66 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_1, (uint64_t)ivar_64);
             uint16_t ivar_69;
             ivar_69 = (uint16_t)256;
             uint64_t ivar_67;
             //copying to uint64 from uint16;
             ivar_67 = (uint64_t)ivar_69;
             ivar_125->elems[index199434] = (uint8_t)integertypes__u64rem((uint64_t)ivar_66, (uint64_t)ivar_67);
} else {
            
             bool_t ivar_70;
             uint8_t ivar_72;
             ivar_72 = (uint8_t)4;
             ivar_70 = (ivar_5 == ivar_72);
             if (ivar_70){      
              uint64_t ivar_82;
              uint8_t ivar_80;
              ivar_80 = (uint8_t)24;
              ivar_82 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_1, (uint64_t)ivar_80);
              uint16_t ivar_85;
              ivar_85 = (uint16_t)256;
              uint64_t ivar_83;
              //copying to uint64 from uint16;
              ivar_83 = (uint64_t)ivar_85;
              ivar_125->elems[index199434] = (uint8_t)integertypes__u64rem((uint64_t)ivar_82, (uint64_t)ivar_83);
} else {
             
              bool_t ivar_86;
              uint8_t ivar_88;
              ivar_88 = (uint8_t)5;
              ivar_86 = (ivar_5 == ivar_88);
              if (ivar_86){       
               uint64_t ivar_98;
               uint8_t ivar_96;
               ivar_96 = (uint8_t)16;
               ivar_98 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_1, (uint64_t)ivar_96);
               uint16_t ivar_101;
               ivar_101 = (uint16_t)256;
               uint64_t ivar_99;
               //copying to uint64 from uint16;
               ivar_99 = (uint64_t)ivar_101;
               ivar_125->elems[index199434] = (uint8_t)integertypes__u64rem((uint64_t)ivar_98, (uint64_t)ivar_99);
} else {
              
               bool_t ivar_102;
               uint8_t ivar_104;
               ivar_104 = (uint8_t)6;
               ivar_102 = (ivar_5 == ivar_104);
               if (ivar_102){        
                uint64_t ivar_114;
                uint8_t ivar_112;
                ivar_112 = (uint8_t)8;
                ivar_114 = (uint64_t)integertypes__u64rshift((uint64_t)ivar_1, (uint64_t)ivar_112);
                uint16_t ivar_117;
                ivar_117 = (uint16_t)256;
                uint64_t ivar_115;
                //copying to uint64 from uint16;
                ivar_115 = (uint64_t)ivar_117;
                ivar_125->elems[index199434] = (uint8_t)integertypes__u64rem((uint64_t)ivar_114, (uint64_t)ivar_115);
} else {
               
                uint16_t ivar_124;
                ivar_124 = (uint16_t)256;
                uint64_t ivar_122;
                //copying to uint64 from uint16;
                ivar_122 = (uint64_t)ivar_124;
                ivar_125->elems[index199434] = (uint8_t)integertypes__u64rem((uint64_t)ivar_1, (uint64_t)ivar_122);
};
};
};
};
};
};
};
        };
        rotate_record_3_t tmp199440 = new_rotate_record_3();;
        result = (bytestrings__bytestring_t)tmp199440;
        tmp199440->length = (uint32_t)ivar_2;
        tmp199440->seq = (rotate_array_2_t)ivar_125;

        
        return result;
}

extern bytestrings__bytestring_t rotate__test_u64tobytestring_0(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_17;
        uint64_t ivar_12;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)4294967295;
        uint64_t ivar_7;
        //copying to uint64 from uint32;
        ivar_7 = (uint64_t)ivar_10;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)32;
        ivar_12 = (uint64_t)integertypes__u64lshift((uint64_t)ivar_7, (uint64_t)ivar_8);
        uint32_t ivar_15;
        ivar_15 = (uint32_t)4294967295;
        uint64_t ivar_13;
        //copying to uint64 from uint32;
        ivar_13 = (uint64_t)ivar_15;
        ivar_17 = (uint64_t)integertypes__u64plus((uint64_t)ivar_12, (uint64_t)ivar_13);
        result = (bytestrings__bytestring_t)rotate__u64tobytestring((uint64_t)ivar_17);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t rotate__test_u64tobytestring_1(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_3;
        ivar_3 = (uint64_t)1034834473200;
        result = (bytestrings__bytestring_t)rotate__u64tobytestring((uint64_t)ivar_3);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t rotate__test_u64tobytestring_2(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_3;
        ivar_3 = (uint64_t)16496952672000;
        result = (bytestrings__bytestring_t)rotate__u64tobytestring((uint64_t)ivar_3);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t rotate__test_u64tobytestring_3(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint64_t ivar_3;
        ivar_3 = (uint64_t)68452085775;
        result = (bytestrings__bytestring_t)rotate__u64tobytestring((uint64_t)ivar_3);

        defined = true;};
        
        return result;
}