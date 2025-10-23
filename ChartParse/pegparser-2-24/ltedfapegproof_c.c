//Code generated using pvs2ir2c
#include "ltedfapegproof_c.h"


ltedfapegproof__parsetree_adt_t new_ltedfapegproof__parsetree_adt(void){
        ltedfapegproof__parsetree_adt_t tmp = (ltedfapegproof__parsetree_adt_t) safe_malloc(sizeof(struct ltedfapegproof__parsetree_adt_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof__parsetree_adt(ltedfapegproof__parsetree_adt_t x){
switch (x->ltedfapegproof__parsetree_adt_index) {
case 0:  release_ltedfapegproof__zero((ltedfapegproof__zero_t) x); break;
case 1:  release_ltedfapegproof__one((ltedfapegproof__one_t) x); break;
case 2:  release_ltedfapegproof__two((ltedfapegproof__two_t) x); break;
}}

void release_ltedfapegproof__parsetree_adt_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof__parsetree_adt((ltedfapegproof__parsetree_adt_t)x);
}

ltedfapegproof__parsetree_adt_t copy_ltedfapegproof__parsetree_adt(ltedfapegproof__parsetree_adt_t x){
        ltedfapegproof__parsetree_adt_t y = new_ltedfapegproof__parsetree_adt();
        y->ltedfapegproof__parsetree_adt_index = (uint8_t)x->ltedfapegproof__parsetree_adt_index;
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof__parsetree_adt(ltedfapegproof__parsetree_adt_t x, ltedfapegproof__parsetree_adt_t y){
        bool_t tmp = x->ltedfapegproof__parsetree_adt_index == y->ltedfapegproof__parsetree_adt_index;
        switch  (x->ltedfapegproof__parsetree_adt_index) {
                case 0: tmp = tmp && equal_ltedfapegproof__zero((ltedfapegproof__zero_t) x, (ltedfapegproof__zero_t) y); break;
                case 1: tmp = tmp && equal_ltedfapegproof__one((ltedfapegproof__one_t) x, (ltedfapegproof__one_t) y); break;
                case 2: tmp = tmp && equal_ltedfapegproof__two((ltedfapegproof__two_t) x, (ltedfapegproof__two_t) y); break;
        }
        return tmp;
}

char * json_ltedfapegproof__parsetree_adt(ltedfapegproof__parsetree_adt_t x){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ \"constructor\" = %u,", x->ltedfapegproof__parsetree_adt_index);
        switch  (x->ltedfapegproof__parsetree_adt_index) {
                case 0: tmp = safe_strcat(tmp, json_ltedfapegproof__zero((ltedfapegproof__zero_t) x)); break;
                case 1: tmp = safe_strcat(tmp, json_ltedfapegproof__one((ltedfapegproof__one_t) x)); break;
                case 2: tmp = safe_strcat(tmp, json_ltedfapegproof__two((ltedfapegproof__two_t) x)); break;
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_ltedfapegproof__parsetree_adt_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof__parsetree_adt_t T){
        return equal_ltedfapegproof__parsetree_adt((ltedfapegproof__parsetree_adt_t)x, (ltedfapegproof__parsetree_adt_t)y);
}

char * json_ltedfapegproof__parsetree_adt_ptr(pointer_t x, actual_ltedfapegproof__parsetree_adt_t T){
        return json_ltedfapegproof__parsetree_adt((ltedfapegproof__parsetree_adt_t)x);
}

actual_ltedfapegproof__parsetree_adt_t actual_ltedfapegproof__parsetree_adt(){
        actual_ltedfapegproof__parsetree_adt_t new = (actual_ltedfapegproof__parsetree_adt_t)safe_malloc(sizeof(struct actual_ltedfapegproof__parsetree_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof__parsetree_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof__parsetree_adt_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof__parsetree_adt_ptr);
 

 
        return new;
 };

ltedfapegproof__parsetree_adt_t update_ltedfapegproof__parsetree_adt_ltedfapegproof__parsetree_adt_index(ltedfapegproof__parsetree_adt_t x, uint8_t v){
        ltedfapegproof__parsetree_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof__parsetree_adt(x); x->count--;};
        y->ltedfapegproof__parsetree_adt_index = (uint8_t)v;
        return y;}




ltedfapegproof__zero_t new_ltedfapegproof__zero(void){
        ltedfapegproof__zero_t tmp = (ltedfapegproof__zero_t) safe_malloc(sizeof(struct ltedfapegproof__zero_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof__zero(ltedfapegproof__zero_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->entry);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof__zero_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof__zero((ltedfapegproof__zero_t)x);
}

ltedfapegproof__zero_t copy_ltedfapegproof__zero(ltedfapegproof__zero_t x){
        ltedfapegproof__zero_t y = new_ltedfapegproof__zero();
        y->ltedfapegproof__parsetree_adt_index = (uint8_t)x->ltedfapegproof__parsetree_adt_index;
        y->entry = x->entry;
        if (y->entry != NULL){y->entry->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof__zero(ltedfapegproof__zero_t x, ltedfapegproof__zero_t y){
        bool_t tmp = true;
        tmp = tmp && x->ltedfapegproof__parsetree_adt_index == y->ltedfapegproof__parsetree_adt_index;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->entry, y->entry);
        return tmp;}

char * json_ltedfapegproof__zero(ltedfapegproof__zero_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(47);
         sprintf(fld0, "\"ltedfapegproof__parsetree_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ltedfapegproof__parsetree_adt_index));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"entry\" : ");
        tmp[1] = safe_strcat(fld1, json_ltedfapeg__ent_adt(x->entry));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof__zero_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof__zero_t T){
        return equal_ltedfapegproof__zero((ltedfapegproof__zero_t)x, (ltedfapegproof__zero_t)y);
}

char * json_ltedfapegproof__zero_ptr(pointer_t x, actual_ltedfapegproof__zero_t T){
        return json_ltedfapegproof__zero((ltedfapegproof__zero_t)x);
}

actual_ltedfapegproof__zero_t actual_ltedfapegproof__zero(){
        actual_ltedfapegproof__zero_t new = (actual_ltedfapegproof__zero_t)safe_malloc(sizeof(struct actual_ltedfapegproof__zero_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof__zero_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof__zero_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof__zero_ptr);
 

 
        return new;
 };

ltedfapegproof__zero_t update_ltedfapegproof__zero_ltedfapegproof__parsetree_adt_index(ltedfapegproof__zero_t x, uint8_t v){
        ltedfapegproof__zero_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof__zero(x); x->count--;};
        y->ltedfapegproof__parsetree_adt_index = (uint8_t)v;
        return y;}

ltedfapegproof__zero_t update_ltedfapegproof__zero_entry(ltedfapegproof__zero_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof__zero_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->entry != NULL){release_ltedfapeg__ent_adt(x->entry);};}
        else {y = copy_ltedfapegproof__zero(x); x->count--; y->entry->count--;};
        y->entry = (ltedfapeg__ent_adt_t)v;
        return y;}




ltedfapegproof__one_t new_ltedfapegproof__one(void){
        ltedfapegproof__one_t tmp = (ltedfapegproof__one_t) safe_malloc(sizeof(struct ltedfapegproof__one_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof__one(ltedfapegproof__one_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->entry);
         release_ltedfapegproof__parsetree_adt(x->subone);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof__one_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof__one((ltedfapegproof__one_t)x);
}

ltedfapegproof__one_t copy_ltedfapegproof__one(ltedfapegproof__one_t x){
        ltedfapegproof__one_t y = new_ltedfapegproof__one();
        y->ltedfapegproof__parsetree_adt_index = (uint8_t)x->ltedfapegproof__parsetree_adt_index;
        y->entry = x->entry;
        if (y->entry != NULL){y->entry->count++;};
        y->subone = x->subone;
        if (y->subone != NULL){y->subone->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof__one(ltedfapegproof__one_t x, ltedfapegproof__one_t y){
        bool_t tmp = true;
        tmp = tmp && x->ltedfapegproof__parsetree_adt_index == y->ltedfapegproof__parsetree_adt_index;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->entry, y->entry);
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->subone, y->subone);
        return tmp;}

char * json_ltedfapegproof__one(ltedfapegproof__one_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(47);
         sprintf(fld0, "\"ltedfapegproof__parsetree_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ltedfapegproof__parsetree_adt_index));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"entry\" : ");
        tmp[1] = safe_strcat(fld1, json_ltedfapeg__ent_adt(x->entry));
        char * fld2 = safe_malloc(18);
         sprintf(fld2, "\"subone\" : ");
        tmp[2] = safe_strcat(fld2, json_ltedfapegproof__parsetree_adt(x->subone));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof__one_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof__one_t T){
        return equal_ltedfapegproof__one((ltedfapegproof__one_t)x, (ltedfapegproof__one_t)y);
}

char * json_ltedfapegproof__one_ptr(pointer_t x, actual_ltedfapegproof__one_t T){
        return json_ltedfapegproof__one((ltedfapegproof__one_t)x);
}

actual_ltedfapegproof__one_t actual_ltedfapegproof__one(){
        actual_ltedfapegproof__one_t new = (actual_ltedfapegproof__one_t)safe_malloc(sizeof(struct actual_ltedfapegproof__one_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof__one_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof__one_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof__one_ptr);
 

 
        return new;
 };

ltedfapegproof__one_t update_ltedfapegproof__one_ltedfapegproof__parsetree_adt_index(ltedfapegproof__one_t x, uint8_t v){
        ltedfapegproof__one_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof__one(x); x->count--;};
        y->ltedfapegproof__parsetree_adt_index = (uint8_t)v;
        return y;}

ltedfapegproof__one_t update_ltedfapegproof__one_entry(ltedfapegproof__one_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof__one_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->entry != NULL){release_ltedfapeg__ent_adt(x->entry);};}
        else {y = copy_ltedfapegproof__one(x); x->count--; y->entry->count--;};
        y->entry = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof__one_t update_ltedfapegproof__one_subone(ltedfapegproof__one_t x, ltedfapegproof__parsetree_adt_t v){
        ltedfapegproof__one_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->subone != NULL){release_ltedfapegproof__parsetree_adt(x->subone);};}
        else {y = copy_ltedfapegproof__one(x); x->count--; y->subone->count--;};
        y->subone = (ltedfapegproof__parsetree_adt_t)v;
        return y;}




ltedfapegproof__two_t new_ltedfapegproof__two(void){
        ltedfapegproof__two_t tmp = (ltedfapegproof__two_t) safe_malloc(sizeof(struct ltedfapegproof__two_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof__two(ltedfapegproof__two_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->entry);
         release_ltedfapegproof__parsetree_adt(x->subone);
         release_ltedfapegproof__parsetree_adt(x->subtwo);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof__two_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof__two((ltedfapegproof__two_t)x);
}

ltedfapegproof__two_t copy_ltedfapegproof__two(ltedfapegproof__two_t x){
        ltedfapegproof__two_t y = new_ltedfapegproof__two();
        y->ltedfapegproof__parsetree_adt_index = (uint8_t)x->ltedfapegproof__parsetree_adt_index;
        y->entry = x->entry;
        if (y->entry != NULL){y->entry->count++;};
        y->subone = x->subone;
        if (y->subone != NULL){y->subone->count++;};
        y->subtwo = x->subtwo;
        if (y->subtwo != NULL){y->subtwo->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof__two(ltedfapegproof__two_t x, ltedfapegproof__two_t y){
        bool_t tmp = true;
        tmp = tmp && x->ltedfapegproof__parsetree_adt_index == y->ltedfapegproof__parsetree_adt_index;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->entry, y->entry);
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->subone, y->subone);
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->subtwo, y->subtwo);
        return tmp;}

char * json_ltedfapegproof__two(ltedfapegproof__two_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(47);
         sprintf(fld0, "\"ltedfapegproof__parsetree_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ltedfapegproof__parsetree_adt_index));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"entry\" : ");
        tmp[1] = safe_strcat(fld1, json_ltedfapeg__ent_adt(x->entry));
        char * fld2 = safe_malloc(18);
         sprintf(fld2, "\"subone\" : ");
        tmp[2] = safe_strcat(fld2, json_ltedfapegproof__parsetree_adt(x->subone));
        char * fld3 = safe_malloc(18);
         sprintf(fld3, "\"subtwo\" : ");
        tmp[3] = safe_strcat(fld3, json_ltedfapegproof__parsetree_adt(x->subtwo));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof__two_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof__two_t T){
        return equal_ltedfapegproof__two((ltedfapegproof__two_t)x, (ltedfapegproof__two_t)y);
}

char * json_ltedfapegproof__two_ptr(pointer_t x, actual_ltedfapegproof__two_t T){
        return json_ltedfapegproof__two((ltedfapegproof__two_t)x);
}

actual_ltedfapegproof__two_t actual_ltedfapegproof__two(){
        actual_ltedfapegproof__two_t new = (actual_ltedfapegproof__two_t)safe_malloc(sizeof(struct actual_ltedfapegproof__two_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof__two_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof__two_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof__two_ptr);
 

 
        return new;
 };

ltedfapegproof__two_t update_ltedfapegproof__two_ltedfapegproof__parsetree_adt_index(ltedfapegproof__two_t x, uint8_t v){
        ltedfapegproof__two_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof__two(x); x->count--;};
        y->ltedfapegproof__parsetree_adt_index = (uint8_t)v;
        return y;}

ltedfapegproof__two_t update_ltedfapegproof__two_entry(ltedfapegproof__two_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof__two_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->entry != NULL){release_ltedfapeg__ent_adt(x->entry);};}
        else {y = copy_ltedfapegproof__two(x); x->count--; y->entry->count--;};
        y->entry = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof__two_t update_ltedfapegproof__two_subone(ltedfapegproof__two_t x, ltedfapegproof__parsetree_adt_t v){
        ltedfapegproof__two_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->subone != NULL){release_ltedfapegproof__parsetree_adt(x->subone);};}
        else {y = copy_ltedfapegproof__two(x); x->count--; y->subone->count--;};
        y->subone = (ltedfapegproof__parsetree_adt_t)v;
        return y;}

ltedfapegproof__two_t update_ltedfapegproof__two_subtwo(ltedfapegproof__two_t x, ltedfapegproof__parsetree_adt_t v){
        ltedfapegproof__two_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->subtwo != NULL){release_ltedfapegproof__parsetree_adt(x->subtwo);};}
        else {y = copy_ltedfapegproof__two(x); x->count--; y->subtwo->count--;};
        y->subtwo = (ltedfapegproof__parsetree_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_4(ltedfapegproof_funtype_4_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_4_t copy_ltedfapegproof_funtype_4(ltedfapegproof_funtype_4_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_4(ltedfapegproof_funtype_4_t x, ltedfapegproof_funtype_4_t y){
        return false;}

char* json_ltedfapegproof_funtype_4(ltedfapegproof_funtype_4_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"ltedfapegproof_funtype_4\""); return result;}

void release_ltedfapegproof_funtype_5(ltedfapegproof_funtype_5_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_5_t copy_ltedfapegproof_funtype_5(ltedfapegproof_funtype_5_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_5(ltedfapegproof_funtype_5_t x, ltedfapegproof_funtype_5_t y){
        return false;}

char* json_ltedfapegproof_funtype_5(ltedfapegproof_funtype_5_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"ltedfapegproof_funtype_5\""); return result;}

void release_ltedfapegproof_funtype_6(ltedfapegproof_funtype_6_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_6_t copy_ltedfapegproof_funtype_6(ltedfapegproof_funtype_6_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_6(ltedfapegproof_funtype_6_t x, ltedfapegproof_funtype_6_t y){
        return false;}

char* json_ltedfapegproof_funtype_6(ltedfapegproof_funtype_6_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"ltedfapegproof_funtype_6\""); return result;}


ltedfapegproof_record_7_t new_ltedfapegproof_record_7(void){
        ltedfapegproof_record_7_t tmp = (ltedfapegproof_record_7_t) safe_malloc(sizeof(struct ltedfapegproof_record_7_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_7(ltedfapegproof_record_7_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_7_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_7((ltedfapegproof_record_7_t)x);
}

ltedfapegproof_record_7_t copy_ltedfapegproof_record_7(ltedfapegproof_record_7_t x){
        ltedfapegproof_record_7_t y = new_ltedfapegproof_record_7();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        mpz_set(y->project_2, x->project_2);
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_7(ltedfapegproof_record_7_t x, ltedfapegproof_record_7_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_1, y->project_1);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);
        return tmp;}

char * json_ltedfapegproof_record_7(ltedfapegproof_record_7_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltedfapeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_7_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_7_t T){
        return equal_ltedfapegproof_record_7((ltedfapegproof_record_7_t)x, (ltedfapegproof_record_7_t)y);
}

char * json_ltedfapegproof_record_7_ptr(pointer_t x, actual_ltedfapegproof_record_7_t T){
        return json_ltedfapegproof_record_7((ltedfapegproof_record_7_t)x);
}

actual_ltedfapegproof_record_7_t actual_ltedfapegproof_record_7(){
        actual_ltedfapegproof_record_7_t new = (actual_ltedfapegproof_record_7_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_7_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_7_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_7_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_7_ptr);
 

 
        return new;
 };

ltedfapegproof_record_7_t update_ltedfapegproof_record_7_project_1(ltedfapegproof_record_7_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_7_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltedfapeg__ent_adt(x->project_1);};}
        else {y = copy_ltedfapegproof_record_7(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_7_t update_ltedfapegproof_record_7_project_2(ltedfapegproof_record_7_t x, mpz_ptr_t v){
        ltedfapegproof_record_7_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_7(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}



void release_ltedfapegproof_funtype_8(ltedfapegproof_funtype_8_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_8_t copy_ltedfapegproof_funtype_8(ltedfapegproof_funtype_8_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_8(ltedfapegproof_funtype_8_t x, ltedfapegproof_funtype_8_t y){
        return false;}

char* json_ltedfapegproof_funtype_8(ltedfapegproof_funtype_8_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"ltedfapegproof_funtype_8\""); return result;}


ltedfapegproof_record_9_t new_ltedfapegproof_record_9(void){
        ltedfapegproof_record_9_t tmp = (ltedfapegproof_record_9_t) safe_malloc(sizeof(struct ltedfapegproof_record_9_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_9(ltedfapegproof_record_9_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_9_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_9((ltedfapegproof_record_9_t)x);
}

ltedfapegproof_record_9_t copy_ltedfapegproof_record_9(ltedfapegproof_record_9_t x){
        ltedfapegproof_record_9_t y = new_ltedfapegproof_record_9();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        mpz_set(y->project_2, x->project_2);
        mpz_set(y->project_3, x->project_3);
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_9(ltedfapegproof_record_9_t x, ltedfapegproof_record_9_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_1, y->project_1);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        return tmp;}

char * json_ltedfapegproof_record_9(ltedfapegproof_record_9_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltedfapeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_mpz(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_9_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_9_t T){
        return equal_ltedfapegproof_record_9((ltedfapegproof_record_9_t)x, (ltedfapegproof_record_9_t)y);
}

char * json_ltedfapegproof_record_9_ptr(pointer_t x, actual_ltedfapegproof_record_9_t T){
        return json_ltedfapegproof_record_9((ltedfapegproof_record_9_t)x);
}

actual_ltedfapegproof_record_9_t actual_ltedfapegproof_record_9(){
        actual_ltedfapegproof_record_9_t new = (actual_ltedfapegproof_record_9_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_9_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_9_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_9_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_9_ptr);
 

 
        return new;
 };

ltedfapegproof_record_9_t update_ltedfapegproof_record_9_project_1(ltedfapegproof_record_9_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_9_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltedfapeg__ent_adt(x->project_1);};}
        else {y = copy_ltedfapegproof_record_9(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_9_t update_ltedfapegproof_record_9_project_2(ltedfapegproof_record_9_t x, mpz_ptr_t v){
        ltedfapegproof_record_9_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_9(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}

ltedfapegproof_record_9_t update_ltedfapegproof_record_9_project_3(ltedfapegproof_record_9_t x, mpz_ptr_t v){
        ltedfapegproof_record_9_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_9(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}



void release_ltedfapegproof_funtype_10(ltedfapegproof_funtype_10_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_10_t copy_ltedfapegproof_funtype_10(ltedfapegproof_funtype_10_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_10(ltedfapegproof_funtype_10_t x, ltedfapegproof_funtype_10_t y){
        return false;}

char* json_ltedfapegproof_funtype_10(ltedfapegproof_funtype_10_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_10\""); return result;}


mpz_ptr_t f_ltedfapegproof_closure_11(struct ltedfapegproof_closure_11_s * closure, ltedfapegproof__parsetree_adt_t bvar){
        mpz_ptr_t result = h_ltedfapegproof_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

mpz_ptr_t m_ltedfapegproof_closure_11(struct ltedfapegproof_closure_11_s * closure, ltedfapegproof__parsetree_adt_t bvar){
        return h_ltedfapegproof_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

mpz_ptr_t h_ltedfapegproof_closure_11(ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_funtype_8_t ivar_3, ltedfapegproof_funtype_10_t ivar_5, ltedfapegproof_funtype_6_t ivar_1){
        mpz_ptr_t result;
        /* red */ ltedfapegproof_funtype_5_t ivar_9;
        ivar_1->count++;
        ivar_3->count++;
        ivar_5->count++;
        ivar_9 = (ltedfapegproof_funtype_5_t)ltedfapegproof__reduce_nat__1((ltedfapegproof_funtype_6_t)ivar_1, (ltedfapegproof_funtype_8_t)ivar_3, (ltedfapegproof_funtype_10_t)ivar_5);
        bool_t ivar_34;
        ivar_8->count++;
        ivar_34 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_8);
        if (ivar_34){ 
             release_ltedfapegproof_funtype_5(ivar_9);
             ltedfapeg__ent_adt_t ivar_25;
             ivar_25 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_25));
} else {
        
             bool_t ivar_58;
             ivar_8->count++;
             ivar_58 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_8);
             if (ivar_58){  
           ltedfapeg__ent_adt_t ivar_38;
           ivar_8->count++;
           ivar_38 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_39;
           ivar_39 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           mpz_ptr_t ivar_57;
           mpz_mk_set(ivar_57, ivar_9->ftbl->fptr(ivar_9, ivar_39));
           ivar_9->ftbl->rptr(ivar_9);
           mpz_mk_set(result, ivar_3->ftbl->mptr(ivar_3, ivar_38, ivar_57));
} else {
             
           ltedfapeg__ent_adt_t ivar_62;
           ivar_8->count++;
           ivar_62 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_63;
           ivar_8->count++;
           ivar_63 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_64;
           ivar_64 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subtwo((ltedfapegproof__parsetree_adt_t)ivar_8);
           mpz_ptr_t ivar_91;
           mpz_mk_set(ivar_91, ivar_9->ftbl->fptr(ivar_9, ivar_63));
           mpz_ptr_t ivar_92;
           mpz_mk_set(ivar_92, ivar_9->ftbl->fptr(ivar_9, ivar_64));
           ivar_9->ftbl->rptr(ivar_9);
           mpz_mk_set(result, ivar_5->ftbl->mptr(ivar_5, ivar_62, ivar_91, ivar_92));
};
};

        return result;
}

ltedfapegproof_closure_11_t new_ltedfapegproof_closure_11(void){
        static struct ltedfapegproof_funtype_5_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ltedfapegproof_funtype_5_t, ltedfapegproof__parsetree_adt_t))&f_ltedfapegproof_closure_11, .mptr = (mpz_ptr_t (*)(ltedfapegproof_funtype_5_t, ltedfapegproof__parsetree_adt_t))&m_ltedfapegproof_closure_11, .rptr =  (void (*)(ltedfapegproof_funtype_5_t))&release_ltedfapegproof_closure_11, .cptr = (ltedfapegproof_funtype_5_t (*)(ltedfapegproof_funtype_5_t))&copy_ltedfapegproof_closure_11};
        ltedfapegproof_closure_11_t tmp = (ltedfapegproof_closure_11_t) safe_malloc(sizeof(struct ltedfapegproof_closure_11_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_11(ltedfapegproof_funtype_5_t closure){
        ltedfapegproof_closure_11_t x = (ltedfapegproof_closure_11_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_8(x->fvar_1);
         release_ltedfapegproof_funtype_10(x->fvar_2);
         release_ltedfapegproof_funtype_6(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_11_t copy_ltedfapegproof_closure_11(ltedfapegproof_closure_11_t x){
        ltedfapegproof_closure_11_t y = new_ltedfapegproof_closure_11();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_5_htbl_t new_htbl = (ltedfapegproof_funtype_5_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_5_hashentry_t * new_data = (ltedfapegproof_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_5_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltedfapegproof_record_12_t new_ltedfapegproof_record_12(void){
        ltedfapegproof_record_12_t tmp = (ltedfapegproof_record_12_t) safe_malloc(sizeof(struct ltedfapegproof_record_12_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_12(ltedfapegproof_record_12_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_1);
         release_ltedfapegproof__parsetree_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_12_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_12((ltedfapegproof_record_12_t)x);
}

ltedfapegproof_record_12_t copy_ltedfapegproof_record_12(ltedfapegproof_record_12_t x){
        ltedfapegproof_record_12_t y = new_ltedfapegproof_record_12();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_12(ltedfapegproof_record_12_t x, ltedfapegproof_record_12_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->project_2, y->project_2);
        return tmp;}

char * json_ltedfapegproof_record_12(ltedfapegproof_record_12_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltedfapeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltedfapegproof__parsetree_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_12_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_12_t T){
        return equal_ltedfapegproof_record_12((ltedfapegproof_record_12_t)x, (ltedfapegproof_record_12_t)y);
}

char * json_ltedfapegproof_record_12_ptr(pointer_t x, actual_ltedfapegproof_record_12_t T){
        return json_ltedfapegproof_record_12((ltedfapegproof_record_12_t)x);
}

actual_ltedfapegproof_record_12_t actual_ltedfapegproof_record_12(){
        actual_ltedfapegproof_record_12_t new = (actual_ltedfapegproof_record_12_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_12_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_12_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_12_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_12_ptr);
 

 
        return new;
 };

ltedfapegproof_record_12_t update_ltedfapegproof_record_12_project_1(ltedfapegproof_record_12_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_12_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltedfapeg__ent_adt(x->project_1);};}
        else {y = copy_ltedfapegproof_record_12(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_12_t update_ltedfapegproof_record_12_project_2(ltedfapegproof_record_12_t x, ltedfapegproof__parsetree_adt_t v){
        ltedfapegproof_record_12_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltedfapegproof__parsetree_adt(x->project_2);};}
        else {y = copy_ltedfapegproof_record_12(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltedfapegproof__parsetree_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_13(ltedfapegproof_funtype_13_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_13_t copy_ltedfapegproof_funtype_13(ltedfapegproof_funtype_13_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_13(ltedfapegproof_funtype_13_t x, ltedfapegproof_funtype_13_t y){
        return false;}

char* json_ltedfapegproof_funtype_13(ltedfapegproof_funtype_13_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_13\""); return result;}


ltedfapegproof_record_14_t new_ltedfapegproof_record_14(void){
        ltedfapegproof_record_14_t tmp = (ltedfapegproof_record_14_t) safe_malloc(sizeof(struct ltedfapegproof_record_14_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_14(ltedfapegproof_record_14_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_1);
         release_ltedfapegproof__parsetree_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_14_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_14((ltedfapegproof_record_14_t)x);
}

ltedfapegproof_record_14_t copy_ltedfapegproof_record_14(ltedfapegproof_record_14_t x){
        ltedfapegproof_record_14_t y = new_ltedfapegproof_record_14();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        mpz_set(y->project_2, x->project_2);
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_14(ltedfapegproof_record_14_t x, ltedfapegproof_record_14_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_1, y->project_1);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->project_3, y->project_3);
        return tmp;}

char * json_ltedfapegproof_record_14(ltedfapegproof_record_14_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltedfapeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ltedfapegproof__parsetree_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_14_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_14_t T){
        return equal_ltedfapegproof_record_14((ltedfapegproof_record_14_t)x, (ltedfapegproof_record_14_t)y);
}

char * json_ltedfapegproof_record_14_ptr(pointer_t x, actual_ltedfapegproof_record_14_t T){
        return json_ltedfapegproof_record_14((ltedfapegproof_record_14_t)x);
}

actual_ltedfapegproof_record_14_t actual_ltedfapegproof_record_14(){
        actual_ltedfapegproof_record_14_t new = (actual_ltedfapegproof_record_14_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_14_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_14_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_14_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_14_ptr);
 

 
        return new;
 };

ltedfapegproof_record_14_t update_ltedfapegproof_record_14_project_1(ltedfapegproof_record_14_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_14_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltedfapeg__ent_adt(x->project_1);};}
        else {y = copy_ltedfapegproof_record_14(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_14_t update_ltedfapegproof_record_14_project_2(ltedfapegproof_record_14_t x, mpz_ptr_t v){
        ltedfapegproof_record_14_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_14(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}

ltedfapegproof_record_14_t update_ltedfapegproof_record_14_project_3(ltedfapegproof_record_14_t x, ltedfapegproof__parsetree_adt_t v){
        ltedfapegproof_record_14_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ltedfapegproof__parsetree_adt(x->project_3);};}
        else {y = copy_ltedfapegproof_record_14(x); x->count--; y->project_3->count--;};
        y->project_3 = (ltedfapegproof__parsetree_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_15(ltedfapegproof_funtype_15_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_15_t copy_ltedfapegproof_funtype_15(ltedfapegproof_funtype_15_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_15(ltedfapegproof_funtype_15_t x, ltedfapegproof_funtype_15_t y){
        return false;}

char* json_ltedfapegproof_funtype_15(ltedfapegproof_funtype_15_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_15\""); return result;}


ltedfapegproof_record_16_t new_ltedfapegproof_record_16(void){
        ltedfapegproof_record_16_t tmp = (ltedfapegproof_record_16_t) safe_malloc(sizeof(struct ltedfapegproof_record_16_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_16(ltedfapegproof_record_16_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_1);
         release_ltedfapegproof__parsetree_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_16_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_16((ltedfapegproof_record_16_t)x);
}

ltedfapegproof_record_16_t copy_ltedfapegproof_record_16(ltedfapegproof_record_16_t x){
        ltedfapegproof_record_16_t y = new_ltedfapegproof_record_16();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        mpz_set(y->project_2, x->project_2);
        mpz_set(y->project_3, x->project_3);
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_16(ltedfapegproof_record_16_t x, ltedfapegproof_record_16_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_1, y->project_1);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltedfapegproof_record_16(ltedfapegproof_record_16_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltedfapeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_mpz(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_ltedfapegproof__parsetree_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_16_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_16_t T){
        return equal_ltedfapegproof_record_16((ltedfapegproof_record_16_t)x, (ltedfapegproof_record_16_t)y);
}

char * json_ltedfapegproof_record_16_ptr(pointer_t x, actual_ltedfapegproof_record_16_t T){
        return json_ltedfapegproof_record_16((ltedfapegproof_record_16_t)x);
}

actual_ltedfapegproof_record_16_t actual_ltedfapegproof_record_16(){
        actual_ltedfapegproof_record_16_t new = (actual_ltedfapegproof_record_16_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_16_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_16_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_16_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_16_ptr);
 

 
        return new;
 };

ltedfapegproof_record_16_t update_ltedfapegproof_record_16_project_1(ltedfapegproof_record_16_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_16_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltedfapeg__ent_adt(x->project_1);};}
        else {y = copy_ltedfapegproof_record_16(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_16_t update_ltedfapegproof_record_16_project_2(ltedfapegproof_record_16_t x, mpz_ptr_t v){
        ltedfapegproof_record_16_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_16(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}

ltedfapegproof_record_16_t update_ltedfapegproof_record_16_project_3(ltedfapegproof_record_16_t x, mpz_ptr_t v){
        ltedfapegproof_record_16_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_16(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}

ltedfapegproof_record_16_t update_ltedfapegproof_record_16_project_4(ltedfapegproof_record_16_t x, ltedfapegproof__parsetree_adt_t v){
        ltedfapegproof_record_16_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ltedfapegproof__parsetree_adt(x->project_4);};}
        else {y = copy_ltedfapegproof_record_16(x); x->count--; y->project_4->count--;};
        y->project_4 = (ltedfapegproof__parsetree_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_17(ltedfapegproof_funtype_17_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_17_t copy_ltedfapegproof_funtype_17(ltedfapegproof_funtype_17_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_17(ltedfapegproof_funtype_17_t x, ltedfapegproof_funtype_17_t y){
        return false;}

char* json_ltedfapegproof_funtype_17(ltedfapegproof_funtype_17_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_17\""); return result;}


mpz_ptr_t f_ltedfapegproof_closure_18(struct ltedfapegproof_closure_18_s * closure, ltedfapegproof__parsetree_adt_t bvar){
        mpz_ptr_t result = h_ltedfapegproof_closure_18(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

mpz_ptr_t m_ltedfapegproof_closure_18(struct ltedfapegproof_closure_18_s * closure, ltedfapegproof__parsetree_adt_t bvar){
        return h_ltedfapegproof_closure_18(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

mpz_ptr_t h_ltedfapegproof_closure_18(ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_funtype_15_t ivar_3, ltedfapegproof_funtype_17_t ivar_5, ltedfapegproof_funtype_13_t ivar_1){
        mpz_ptr_t result;
        /* red */ ltedfapegproof_funtype_5_t ivar_9;
        ivar_1->count++;
        ivar_3->count++;
        ivar_5->count++;
        ivar_9 = (ltedfapegproof_funtype_5_t)ltedfapegproof__REDUCE_nat__1((ltedfapegproof_funtype_13_t)ivar_1, (ltedfapegproof_funtype_15_t)ivar_3, (ltedfapegproof_funtype_17_t)ivar_5);
        bool_t ivar_36;
        ivar_8->count++;
        ivar_36 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_8);
        if (ivar_36){ 
             release_ltedfapegproof_funtype_5(ivar_9);
             ltedfapeg__ent_adt_t ivar_25;
             ivar_8->count++;
             ivar_25 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
             mpz_mk_set(result, ivar_1->ftbl->mptr(ivar_1, ivar_25, ivar_8));
} else {
        
             bool_t ivar_62;
             ivar_8->count++;
             ivar_62 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_8);
             if (ivar_62){  
           ltedfapeg__ent_adt_t ivar_40;
           ivar_8->count++;
           ivar_40 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_41;
           ivar_8->count++;
           ivar_41 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           mpz_ptr_t ivar_60;
           mpz_mk_set(ivar_60, ivar_9->ftbl->fptr(ivar_9, ivar_41));
           ivar_9->ftbl->rptr(ivar_9);
           mpz_mk_set(result, ivar_3->ftbl->mptr(ivar_3, ivar_40, ivar_60, ivar_8));
} else {
             
           ltedfapeg__ent_adt_t ivar_66;
           ivar_8->count++;
           ivar_66 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_67;
           ivar_8->count++;
           ivar_67 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_68;
           ivar_8->count++;
           ivar_68 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subtwo((ltedfapegproof__parsetree_adt_t)ivar_8);
           mpz_ptr_t ivar_96;
           mpz_mk_set(ivar_96, ivar_9->ftbl->fptr(ivar_9, ivar_67));
           mpz_ptr_t ivar_97;
           mpz_mk_set(ivar_97, ivar_9->ftbl->fptr(ivar_9, ivar_68));
           ivar_9->ftbl->rptr(ivar_9);
           mpz_mk_set(result, ivar_5->ftbl->mptr(ivar_5, ivar_66, ivar_96, ivar_97, ivar_8));
};
};

        return result;
}

ltedfapegproof_closure_18_t new_ltedfapegproof_closure_18(void){
        static struct ltedfapegproof_funtype_5_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ltedfapegproof_funtype_5_t, ltedfapegproof__parsetree_adt_t))&f_ltedfapegproof_closure_18, .mptr = (mpz_ptr_t (*)(ltedfapegproof_funtype_5_t, ltedfapegproof__parsetree_adt_t))&m_ltedfapegproof_closure_18, .rptr =  (void (*)(ltedfapegproof_funtype_5_t))&release_ltedfapegproof_closure_18, .cptr = (ltedfapegproof_funtype_5_t (*)(ltedfapegproof_funtype_5_t))&copy_ltedfapegproof_closure_18};
        ltedfapegproof_closure_18_t tmp = (ltedfapegproof_closure_18_t) safe_malloc(sizeof(struct ltedfapegproof_closure_18_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_18(ltedfapegproof_funtype_5_t closure){
        ltedfapegproof_closure_18_t x = (ltedfapegproof_closure_18_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_15(x->fvar_1);
         release_ltedfapegproof_funtype_17(x->fvar_2);
         release_ltedfapegproof_funtype_13(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_18_t copy_ltedfapegproof_closure_18(ltedfapegproof_closure_18_t x){
        ltedfapegproof_closure_18_t y = new_ltedfapegproof_closure_18();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_5_htbl_t new_htbl = (ltedfapegproof_funtype_5_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_5_hashentry_t * new_data = (ltedfapegproof_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_5_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltedfapegproof_funtype_19(ltedfapegproof_funtype_19_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_19_t copy_ltedfapegproof_funtype_19(ltedfapegproof_funtype_19_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_19(ltedfapegproof_funtype_19_t x, ltedfapegproof_funtype_19_t y){
        return false;}

char* json_ltedfapegproof_funtype_19(ltedfapegproof_funtype_19_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_19\""); return result;}

void release_ltedfapegproof_funtype_20(ltedfapegproof_funtype_20_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_20_t copy_ltedfapegproof_funtype_20(ltedfapegproof_funtype_20_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_20(ltedfapegproof_funtype_20_t x, ltedfapegproof_funtype_20_t y){
        return false;}

char* json_ltedfapegproof_funtype_20(ltedfapegproof_funtype_20_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_20\""); return result;}


ltedfapegproof_record_21_t new_ltedfapegproof_record_21(void){
        ltedfapegproof_record_21_t tmp = (ltedfapegproof_record_21_t) safe_malloc(sizeof(struct ltedfapegproof_record_21_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_21(ltedfapegproof_record_21_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_1);
         release_ordstruct_adt__ordstruct_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_21_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_21((ltedfapegproof_record_21_t)x);
}

ltedfapegproof_record_21_t copy_ltedfapegproof_record_21(ltedfapegproof_record_21_t x){
        ltedfapegproof_record_21_t y = new_ltedfapegproof_record_21();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_21(ltedfapegproof_record_21_t x, ltedfapegproof_record_21_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_2, y->project_2);
        return tmp;}

char * json_ltedfapegproof_record_21(ltedfapegproof_record_21_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltedfapeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ordstruct_adt__ordstruct_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_21_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_21_t T){
        return equal_ltedfapegproof_record_21((ltedfapegproof_record_21_t)x, (ltedfapegproof_record_21_t)y);
}

char * json_ltedfapegproof_record_21_ptr(pointer_t x, actual_ltedfapegproof_record_21_t T){
        return json_ltedfapegproof_record_21((ltedfapegproof_record_21_t)x);
}

actual_ltedfapegproof_record_21_t actual_ltedfapegproof_record_21(){
        actual_ltedfapegproof_record_21_t new = (actual_ltedfapegproof_record_21_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_21_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_21_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_21_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_21_ptr);
 

 
        return new;
 };

ltedfapegproof_record_21_t update_ltedfapegproof_record_21_project_1(ltedfapegproof_record_21_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_21_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltedfapeg__ent_adt(x->project_1);};}
        else {y = copy_ltedfapegproof_record_21(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_21_t update_ltedfapegproof_record_21_project_2(ltedfapegproof_record_21_t x, ordstruct_adt__ordstruct_adt_t v){
        ltedfapegproof_record_21_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_2);};}
        else {y = copy_ltedfapegproof_record_21(x); x->count--; y->project_2->count--;};
        y->project_2 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_22(ltedfapegproof_funtype_22_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_22_t copy_ltedfapegproof_funtype_22(ltedfapegproof_funtype_22_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_22(ltedfapegproof_funtype_22_t x, ltedfapegproof_funtype_22_t y){
        return false;}

char* json_ltedfapegproof_funtype_22(ltedfapegproof_funtype_22_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_22\""); return result;}


ltedfapegproof_record_23_t new_ltedfapegproof_record_23(void){
        ltedfapegproof_record_23_t tmp = (ltedfapegproof_record_23_t) safe_malloc(sizeof(struct ltedfapegproof_record_23_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_23(ltedfapegproof_record_23_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_1);
         release_ordstruct_adt__ordstruct_adt(x->project_2);
         release_ordstruct_adt__ordstruct_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_23_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_23((ltedfapegproof_record_23_t)x);
}

ltedfapegproof_record_23_t copy_ltedfapegproof_record_23(ltedfapegproof_record_23_t x){
        ltedfapegproof_record_23_t y = new_ltedfapegproof_record_23();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_23(ltedfapegproof_record_23_t x, ltedfapegproof_record_23_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_2, y->project_2);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        return tmp;}

char * json_ltedfapegproof_record_23(ltedfapegproof_record_23_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltedfapeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ordstruct_adt__ordstruct_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ordstruct_adt__ordstruct_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_23_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_23_t T){
        return equal_ltedfapegproof_record_23((ltedfapegproof_record_23_t)x, (ltedfapegproof_record_23_t)y);
}

char * json_ltedfapegproof_record_23_ptr(pointer_t x, actual_ltedfapegproof_record_23_t T){
        return json_ltedfapegproof_record_23((ltedfapegproof_record_23_t)x);
}

actual_ltedfapegproof_record_23_t actual_ltedfapegproof_record_23(){
        actual_ltedfapegproof_record_23_t new = (actual_ltedfapegproof_record_23_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_23_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_23_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_23_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_23_ptr);
 

 
        return new;
 };

ltedfapegproof_record_23_t update_ltedfapegproof_record_23_project_1(ltedfapegproof_record_23_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_23_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltedfapeg__ent_adt(x->project_1);};}
        else {y = copy_ltedfapegproof_record_23(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_23_t update_ltedfapegproof_record_23_project_2(ltedfapegproof_record_23_t x, ordstruct_adt__ordstruct_adt_t v){
        ltedfapegproof_record_23_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_2);};}
        else {y = copy_ltedfapegproof_record_23(x); x->count--; y->project_2->count--;};
        y->project_2 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

ltedfapegproof_record_23_t update_ltedfapegproof_record_23_project_3(ltedfapegproof_record_23_t x, ordstruct_adt__ordstruct_adt_t v){
        ltedfapegproof_record_23_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_ltedfapegproof_record_23(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_24(ltedfapegproof_funtype_24_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_24_t copy_ltedfapegproof_funtype_24(ltedfapegproof_funtype_24_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_24(ltedfapegproof_funtype_24_t x, ltedfapegproof_funtype_24_t y){
        return false;}

char* json_ltedfapegproof_funtype_24(ltedfapegproof_funtype_24_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_24\""); return result;}


ordstruct_adt__ordstruct_adt_t f_ltedfapegproof_closure_25(struct ltedfapegproof_closure_25_s * closure, ltedfapegproof__parsetree_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_ltedfapegproof_closure_25(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_ltedfapegproof_closure_25(struct ltedfapegproof_closure_25_s * closure, ltedfapegproof__parsetree_adt_t bvar){
        return h_ltedfapegproof_closure_25(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

ordstruct_adt__ordstruct_adt_t h_ltedfapegproof_closure_25(ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_funtype_22_t ivar_3, ltedfapegproof_funtype_24_t ivar_5, ltedfapegproof_funtype_20_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ ltedfapegproof_funtype_19_t ivar_9;
        ivar_1->count++;
        ivar_3->count++;
        ivar_5->count++;
        ivar_9 = (ltedfapegproof_funtype_19_t)ltedfapegproof__reduce_ordinal__1((ltedfapegproof_funtype_20_t)ivar_1, (ltedfapegproof_funtype_22_t)ivar_3, (ltedfapegproof_funtype_24_t)ivar_5);
        bool_t ivar_34;
        ivar_8->count++;
        ivar_34 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_8);
        if (ivar_34){ 
             release_ltedfapegproof_funtype_19(ivar_9);
             ltedfapeg__ent_adt_t ivar_25;
             ivar_25 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_25);
} else {
        
             bool_t ivar_58;
             ivar_8->count++;
             ivar_58 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_8);
             if (ivar_58){  
           ltedfapeg__ent_adt_t ivar_38;
           ivar_8->count++;
           ivar_38 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_39;
           ivar_39 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           ordstruct_adt__ordstruct_adt_t ivar_57;
           ivar_57 = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->fptr(ivar_9, ivar_39);
           ivar_9->ftbl->rptr(ivar_9);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_38, ivar_57);
} else {
             
           ltedfapeg__ent_adt_t ivar_62;
           ivar_8->count++;
           ivar_62 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_63;
           ivar_8->count++;
           ivar_63 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_64;
           ivar_64 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subtwo((ltedfapegproof__parsetree_adt_t)ivar_8);
           ordstruct_adt__ordstruct_adt_t ivar_91;
           ivar_91 = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->fptr(ivar_9, ivar_63);
           ordstruct_adt__ordstruct_adt_t ivar_92;
           ivar_92 = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->fptr(ivar_9, ivar_64);
           ivar_9->ftbl->rptr(ivar_9);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_5->ftbl->mptr(ivar_5, ivar_62, ivar_91, ivar_92);
};
};

        return result;
}

ltedfapegproof_closure_25_t new_ltedfapegproof_closure_25(void){
        static struct ltedfapegproof_funtype_19_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(ltedfapegproof_funtype_19_t, ltedfapegproof__parsetree_adt_t))&f_ltedfapegproof_closure_25, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(ltedfapegproof_funtype_19_t, ltedfapegproof__parsetree_adt_t))&m_ltedfapegproof_closure_25, .rptr =  (void (*)(ltedfapegproof_funtype_19_t))&release_ltedfapegproof_closure_25, .cptr = (ltedfapegproof_funtype_19_t (*)(ltedfapegproof_funtype_19_t))&copy_ltedfapegproof_closure_25};
        ltedfapegproof_closure_25_t tmp = (ltedfapegproof_closure_25_t) safe_malloc(sizeof(struct ltedfapegproof_closure_25_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_25(ltedfapegproof_funtype_19_t closure){
        ltedfapegproof_closure_25_t x = (ltedfapegproof_closure_25_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_22(x->fvar_1);
         release_ltedfapegproof_funtype_24(x->fvar_2);
         release_ltedfapegproof_funtype_20(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_25_t copy_ltedfapegproof_closure_25(ltedfapegproof_closure_25_t x){
        ltedfapegproof_closure_25_t y = new_ltedfapegproof_closure_25();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_19_htbl_t new_htbl = (ltedfapegproof_funtype_19_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_19_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_19_hashentry_t * new_data = (ltedfapegproof_funtype_19_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_19_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_19_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltedfapegproof_funtype_26(ltedfapegproof_funtype_26_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_26_t copy_ltedfapegproof_funtype_26(ltedfapegproof_funtype_26_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_26(ltedfapegproof_funtype_26_t x, ltedfapegproof_funtype_26_t y){
        return false;}

char* json_ltedfapegproof_funtype_26(ltedfapegproof_funtype_26_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_26\""); return result;}


ltedfapegproof_record_27_t new_ltedfapegproof_record_27(void){
        ltedfapegproof_record_27_t tmp = (ltedfapegproof_record_27_t) safe_malloc(sizeof(struct ltedfapegproof_record_27_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_27(ltedfapegproof_record_27_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_1);
         release_ordstruct_adt__ordstruct_adt(x->project_2);
         release_ltedfapegproof__parsetree_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_27_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_27((ltedfapegproof_record_27_t)x);
}

ltedfapegproof_record_27_t copy_ltedfapegproof_record_27(ltedfapegproof_record_27_t x){
        ltedfapegproof_record_27_t y = new_ltedfapegproof_record_27();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_27(ltedfapegproof_record_27_t x, ltedfapegproof_record_27_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_2, y->project_2);
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->project_3, y->project_3);
        return tmp;}

char * json_ltedfapegproof_record_27(ltedfapegproof_record_27_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltedfapeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ordstruct_adt__ordstruct_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ltedfapegproof__parsetree_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_27_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_27_t T){
        return equal_ltedfapegproof_record_27((ltedfapegproof_record_27_t)x, (ltedfapegproof_record_27_t)y);
}

char * json_ltedfapegproof_record_27_ptr(pointer_t x, actual_ltedfapegproof_record_27_t T){
        return json_ltedfapegproof_record_27((ltedfapegproof_record_27_t)x);
}

actual_ltedfapegproof_record_27_t actual_ltedfapegproof_record_27(){
        actual_ltedfapegproof_record_27_t new = (actual_ltedfapegproof_record_27_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_27_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_27_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_27_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_27_ptr);
 

 
        return new;
 };

ltedfapegproof_record_27_t update_ltedfapegproof_record_27_project_1(ltedfapegproof_record_27_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_27_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltedfapeg__ent_adt(x->project_1);};}
        else {y = copy_ltedfapegproof_record_27(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_27_t update_ltedfapegproof_record_27_project_2(ltedfapegproof_record_27_t x, ordstruct_adt__ordstruct_adt_t v){
        ltedfapegproof_record_27_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_2);};}
        else {y = copy_ltedfapegproof_record_27(x); x->count--; y->project_2->count--;};
        y->project_2 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

ltedfapegproof_record_27_t update_ltedfapegproof_record_27_project_3(ltedfapegproof_record_27_t x, ltedfapegproof__parsetree_adt_t v){
        ltedfapegproof_record_27_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ltedfapegproof__parsetree_adt(x->project_3);};}
        else {y = copy_ltedfapegproof_record_27(x); x->count--; y->project_3->count--;};
        y->project_3 = (ltedfapegproof__parsetree_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_28(ltedfapegproof_funtype_28_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_28_t copy_ltedfapegproof_funtype_28(ltedfapegproof_funtype_28_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_28(ltedfapegproof_funtype_28_t x, ltedfapegproof_funtype_28_t y){
        return false;}

char* json_ltedfapegproof_funtype_28(ltedfapegproof_funtype_28_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_28\""); return result;}


ltedfapegproof_record_29_t new_ltedfapegproof_record_29(void){
        ltedfapegproof_record_29_t tmp = (ltedfapegproof_record_29_t) safe_malloc(sizeof(struct ltedfapegproof_record_29_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_29(ltedfapegproof_record_29_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_1);
         release_ordstruct_adt__ordstruct_adt(x->project_2);
         release_ordstruct_adt__ordstruct_adt(x->project_3);
         release_ltedfapegproof__parsetree_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_29_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_29((ltedfapegproof_record_29_t)x);
}

ltedfapegproof_record_29_t copy_ltedfapegproof_record_29(ltedfapegproof_record_29_t x){
        ltedfapegproof_record_29_t y = new_ltedfapegproof_record_29();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_29(ltedfapegproof_record_29_t x, ltedfapegproof_record_29_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_2, y->project_2);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltedfapegproof_record_29(ltedfapegproof_record_29_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltedfapeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ordstruct_adt__ordstruct_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ordstruct_adt__ordstruct_adt(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_ltedfapegproof__parsetree_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_29_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_29_t T){
        return equal_ltedfapegproof_record_29((ltedfapegproof_record_29_t)x, (ltedfapegproof_record_29_t)y);
}

char * json_ltedfapegproof_record_29_ptr(pointer_t x, actual_ltedfapegproof_record_29_t T){
        return json_ltedfapegproof_record_29((ltedfapegproof_record_29_t)x);
}

actual_ltedfapegproof_record_29_t actual_ltedfapegproof_record_29(){
        actual_ltedfapegproof_record_29_t new = (actual_ltedfapegproof_record_29_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_29_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_29_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_29_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_29_ptr);
 

 
        return new;
 };

ltedfapegproof_record_29_t update_ltedfapegproof_record_29_project_1(ltedfapegproof_record_29_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_29_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltedfapeg__ent_adt(x->project_1);};}
        else {y = copy_ltedfapegproof_record_29(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_29_t update_ltedfapegproof_record_29_project_2(ltedfapegproof_record_29_t x, ordstruct_adt__ordstruct_adt_t v){
        ltedfapegproof_record_29_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_2);};}
        else {y = copy_ltedfapegproof_record_29(x); x->count--; y->project_2->count--;};
        y->project_2 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

ltedfapegproof_record_29_t update_ltedfapegproof_record_29_project_3(ltedfapegproof_record_29_t x, ordstruct_adt__ordstruct_adt_t v){
        ltedfapegproof_record_29_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_ltedfapegproof_record_29(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

ltedfapegproof_record_29_t update_ltedfapegproof_record_29_project_4(ltedfapegproof_record_29_t x, ltedfapegproof__parsetree_adt_t v){
        ltedfapegproof_record_29_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ltedfapegproof__parsetree_adt(x->project_4);};}
        else {y = copy_ltedfapegproof_record_29(x); x->count--; y->project_4->count--;};
        y->project_4 = (ltedfapegproof__parsetree_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_30(ltedfapegproof_funtype_30_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_30_t copy_ltedfapegproof_funtype_30(ltedfapegproof_funtype_30_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_30(ltedfapegproof_funtype_30_t x, ltedfapegproof_funtype_30_t y){
        return false;}

char* json_ltedfapegproof_funtype_30(ltedfapegproof_funtype_30_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_30\""); return result;}


ordstruct_adt__ordstruct_adt_t f_ltedfapegproof_closure_31(struct ltedfapegproof_closure_31_s * closure, ltedfapegproof__parsetree_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_ltedfapegproof_closure_31(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_ltedfapegproof_closure_31(struct ltedfapegproof_closure_31_s * closure, ltedfapegproof__parsetree_adt_t bvar){
        return h_ltedfapegproof_closure_31(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

ordstruct_adt__ordstruct_adt_t h_ltedfapegproof_closure_31(ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_funtype_28_t ivar_3, ltedfapegproof_funtype_30_t ivar_5, ltedfapegproof_funtype_26_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ ltedfapegproof_funtype_19_t ivar_9;
        ivar_1->count++;
        ivar_3->count++;
        ivar_5->count++;
        ivar_9 = (ltedfapegproof_funtype_19_t)ltedfapegproof__REDUCE_ordinal__1((ltedfapegproof_funtype_26_t)ivar_1, (ltedfapegproof_funtype_28_t)ivar_3, (ltedfapegproof_funtype_30_t)ivar_5);
        bool_t ivar_36;
        ivar_8->count++;
        ivar_36 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_8);
        if (ivar_36){ 
             release_ltedfapegproof_funtype_19(ivar_9);
             ltedfapeg__ent_adt_t ivar_25;
             ivar_8->count++;
             ivar_25 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->mptr(ivar_1, ivar_25, ivar_8);
} else {
        
             bool_t ivar_62;
             ivar_8->count++;
             ivar_62 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_8);
             if (ivar_62){  
           ltedfapeg__ent_adt_t ivar_40;
           ivar_8->count++;
           ivar_40 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_41;
           ivar_8->count++;
           ivar_41 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           ordstruct_adt__ordstruct_adt_t ivar_60;
           ivar_60 = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->fptr(ivar_9, ivar_41);
           ivar_9->ftbl->rptr(ivar_9);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_40, ivar_60, ivar_8);
} else {
             
           ltedfapeg__ent_adt_t ivar_66;
           ivar_8->count++;
           ivar_66 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_67;
           ivar_8->count++;
           ivar_67 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_68;
           ivar_8->count++;
           ivar_68 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subtwo((ltedfapegproof__parsetree_adt_t)ivar_8);
           ordstruct_adt__ordstruct_adt_t ivar_96;
           ivar_96 = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->fptr(ivar_9, ivar_67);
           ordstruct_adt__ordstruct_adt_t ivar_97;
           ivar_97 = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->fptr(ivar_9, ivar_68);
           ivar_9->ftbl->rptr(ivar_9);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_5->ftbl->mptr(ivar_5, ivar_66, ivar_96, ivar_97, ivar_8);
};
};

        return result;
}

ltedfapegproof_closure_31_t new_ltedfapegproof_closure_31(void){
        static struct ltedfapegproof_funtype_19_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(ltedfapegproof_funtype_19_t, ltedfapegproof__parsetree_adt_t))&f_ltedfapegproof_closure_31, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(ltedfapegproof_funtype_19_t, ltedfapegproof__parsetree_adt_t))&m_ltedfapegproof_closure_31, .rptr =  (void (*)(ltedfapegproof_funtype_19_t))&release_ltedfapegproof_closure_31, .cptr = (ltedfapegproof_funtype_19_t (*)(ltedfapegproof_funtype_19_t))&copy_ltedfapegproof_closure_31};
        ltedfapegproof_closure_31_t tmp = (ltedfapegproof_closure_31_t) safe_malloc(sizeof(struct ltedfapegproof_closure_31_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_31(ltedfapegproof_funtype_19_t closure){
        ltedfapegproof_closure_31_t x = (ltedfapegproof_closure_31_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_28(x->fvar_1);
         release_ltedfapegproof_funtype_30(x->fvar_2);
         release_ltedfapegproof_funtype_26(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_31_t copy_ltedfapegproof_closure_31(ltedfapegproof_closure_31_t x){
        ltedfapegproof_closure_31_t y = new_ltedfapegproof_closure_31();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_19_htbl_t new_htbl = (ltedfapegproof_funtype_19_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_19_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_19_hashentry_t * new_data = (ltedfapegproof_funtype_19_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_19_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_19_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltedfapegproof__qstack_adt_t new_ltedfapegproof__qstack_adt(void){
        ltedfapegproof__qstack_adt_t tmp = (ltedfapegproof__qstack_adt_t) safe_malloc(sizeof(struct ltedfapegproof__qstack_adt_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof__qstack_adt(ltedfapegproof__qstack_adt_t x){
switch (x->ltedfapegproof__qstack_adt_index) {
case 1:  release_ltedfapegproof__qpush((ltedfapegproof__qpush_t) x); break;
}}

void release_ltedfapegproof__qstack_adt_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof__qstack_adt((ltedfapegproof__qstack_adt_t)x);
}

ltedfapegproof__qstack_adt_t copy_ltedfapegproof__qstack_adt(ltedfapegproof__qstack_adt_t x){
        ltedfapegproof__qstack_adt_t y = new_ltedfapegproof__qstack_adt();
        y->ltedfapegproof__qstack_adt_index = (uint8_t)x->ltedfapegproof__qstack_adt_index;
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof__qstack_adt(ltedfapegproof__qstack_adt_t x, ltedfapegproof__qstack_adt_t y){
        bool_t tmp = x->ltedfapegproof__qstack_adt_index == y->ltedfapegproof__qstack_adt_index;
        switch  (x->ltedfapegproof__qstack_adt_index) {
                case 1: tmp = tmp && equal_ltedfapegproof__qpush((ltedfapegproof__qpush_t) x, (ltedfapegproof__qpush_t) y); break;
        }
        return tmp;
}

char * json_ltedfapegproof__qstack_adt(ltedfapegproof__qstack_adt_t x){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ \"constructor\" = %u,", x->ltedfapegproof__qstack_adt_index);
        switch  (x->ltedfapegproof__qstack_adt_index) {
                case 1: tmp = safe_strcat(tmp, json_ltedfapegproof__qpush((ltedfapegproof__qpush_t) x)); break;
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_ltedfapegproof__qstack_adt_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof__qstack_adt_t T){
        return equal_ltedfapegproof__qstack_adt((ltedfapegproof__qstack_adt_t)x, (ltedfapegproof__qstack_adt_t)y);
}

char * json_ltedfapegproof__qstack_adt_ptr(pointer_t x, actual_ltedfapegproof__qstack_adt_t T){
        return json_ltedfapegproof__qstack_adt((ltedfapegproof__qstack_adt_t)x);
}

actual_ltedfapegproof__qstack_adt_t actual_ltedfapegproof__qstack_adt(){
        actual_ltedfapegproof__qstack_adt_t new = (actual_ltedfapegproof__qstack_adt_t)safe_malloc(sizeof(struct actual_ltedfapegproof__qstack_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof__qstack_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof__qstack_adt_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof__qstack_adt_ptr);
 

 
        return new;
 };

ltedfapegproof__qstack_adt_t update_ltedfapegproof__qstack_adt_ltedfapegproof__qstack_adt_index(ltedfapegproof__qstack_adt_t x, uint8_t v){
        ltedfapegproof__qstack_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof__qstack_adt(x); x->count--;};
        y->ltedfapegproof__qstack_adt_index = (uint8_t)v;
        return y;}




ltedfapegproof__qpush_t new_ltedfapegproof__qpush(void){
        ltedfapegproof__qpush_t tmp = (ltedfapegproof__qpush_t) safe_malloc(sizeof(struct ltedfapegproof__qpush_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof__qpush(ltedfapegproof__qpush_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof__qstack_adt(x->qpop);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof__qpush_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof__qpush((ltedfapegproof__qpush_t)x);
}

ltedfapegproof__qpush_t copy_ltedfapegproof__qpush(ltedfapegproof__qpush_t x){
        ltedfapegproof__qpush_t y = new_ltedfapegproof__qpush();
        y->ltedfapegproof__qstack_adt_index = (uint8_t)x->ltedfapegproof__qstack_adt_index;
        y->nonterm = (uint8_t)x->nonterm;
        y->pos = (uint32_t)x->pos;
        y->qpop = x->qpop;
        if (y->qpop != NULL){y->qpop->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof__qpush(ltedfapegproof__qpush_t x, ltedfapegproof__qpush_t y){
        bool_t tmp = true;
        tmp = tmp && x->ltedfapegproof__qstack_adt_index == y->ltedfapegproof__qstack_adt_index;
        tmp = tmp && x->nonterm == y->nonterm;
        tmp = tmp && x->pos == y->pos;
        tmp = tmp && equal_ltedfapegproof__qstack_adt(x->qpop, y->qpop);
        return tmp;}

char * json_ltedfapegproof__qpush(ltedfapegproof__qpush_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(44);
         sprintf(fld0, "\"ltedfapegproof__qstack_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ltedfapegproof__qstack_adt_index));
        char * fld1 = safe_malloc(19);
         sprintf(fld1, "\"nonterm\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->nonterm));
        char * fld2 = safe_malloc(15);
         sprintf(fld2, "\"pos\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->pos));
        char * fld3 = safe_malloc(16);
         sprintf(fld3, "\"qpop\" : ");
        tmp[3] = safe_strcat(fld3, json_ltedfapegproof__qstack_adt(x->qpop));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof__qpush_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof__qpush_t T){
        return equal_ltedfapegproof__qpush((ltedfapegproof__qpush_t)x, (ltedfapegproof__qpush_t)y);
}

char * json_ltedfapegproof__qpush_ptr(pointer_t x, actual_ltedfapegproof__qpush_t T){
        return json_ltedfapegproof__qpush((ltedfapegproof__qpush_t)x);
}

actual_ltedfapegproof__qpush_t actual_ltedfapegproof__qpush(){
        actual_ltedfapegproof__qpush_t new = (actual_ltedfapegproof__qpush_t)safe_malloc(sizeof(struct actual_ltedfapegproof__qpush_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof__qpush_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof__qpush_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof__qpush_ptr);
 

 
        return new;
 };

ltedfapegproof__qpush_t update_ltedfapegproof__qpush_ltedfapegproof__qstack_adt_index(ltedfapegproof__qpush_t x, uint8_t v){
        ltedfapegproof__qpush_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof__qpush(x); x->count--;};
        y->ltedfapegproof__qstack_adt_index = (uint8_t)v;
        return y;}

ltedfapegproof__qpush_t update_ltedfapegproof__qpush_nonterm(ltedfapegproof__qpush_t x, uint8_t v){
        ltedfapegproof__qpush_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof__qpush(x); x->count--;};
        y->nonterm = (uint8_t)v;
        return y;}

ltedfapegproof__qpush_t update_ltedfapegproof__qpush_pos(ltedfapegproof__qpush_t x, uint32_t v){
        ltedfapegproof__qpush_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof__qpush(x); x->count--;};
        y->pos = (uint32_t)v;
        return y;}

ltedfapegproof__qpush_t update_ltedfapegproof__qpush_qpop(ltedfapegproof__qpush_t x, ltedfapegproof__qstack_adt_t v){
        ltedfapegproof__qpush_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->qpop != NULL){release_ltedfapegproof__qstack_adt(x->qpop);};}
        else {y = copy_ltedfapegproof__qpush(x); x->count--; y->qpop->count--;};
        y->qpop = (ltedfapegproof__qstack_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_34(ltedfapegproof_funtype_34_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_34_t copy_ltedfapegproof_funtype_34(ltedfapegproof_funtype_34_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_34(ltedfapegproof_funtype_34_t x, ltedfapegproof_funtype_34_t y){
        return false;}

char* json_ltedfapegproof_funtype_34(ltedfapegproof_funtype_34_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_34\""); return result;}

void release_ltedfapegproof_funtype_35(ltedfapegproof_funtype_35_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_35_t copy_ltedfapegproof_funtype_35(ltedfapegproof_funtype_35_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_35(ltedfapegproof_funtype_35_t x, ltedfapegproof_funtype_35_t y){
        return false;}

char* json_ltedfapegproof_funtype_35(ltedfapegproof_funtype_35_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_35\""); return result;}


ltedfapegproof_record_36_t new_ltedfapegproof_record_36(void){
        ltedfapegproof_record_36_t tmp = (ltedfapegproof_record_36_t) safe_malloc(sizeof(struct ltedfapegproof_record_36_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_36(ltedfapegproof_record_36_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_36_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_36((ltedfapegproof_record_36_t)x);
}

ltedfapegproof_record_36_t copy_ltedfapegproof_record_36(ltedfapegproof_record_36_t x){
        ltedfapegproof_record_36_t y = new_ltedfapegproof_record_36();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        mpz_set(y->project_3, x->project_3);
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_36(ltedfapegproof_record_36_t x, ltedfapegproof_record_36_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        return tmp;}

char * json_ltedfapegproof_record_36(ltedfapegproof_record_36_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_mpz(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_36_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_36_t T){
        return equal_ltedfapegproof_record_36((ltedfapegproof_record_36_t)x, (ltedfapegproof_record_36_t)y);
}

char * json_ltedfapegproof_record_36_ptr(pointer_t x, actual_ltedfapegproof_record_36_t T){
        return json_ltedfapegproof_record_36((ltedfapegproof_record_36_t)x);
}

actual_ltedfapegproof_record_36_t actual_ltedfapegproof_record_36(){
        actual_ltedfapegproof_record_36_t new = (actual_ltedfapegproof_record_36_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_36_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_36_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_36_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_36_ptr);
 

 
        return new;
 };

ltedfapegproof_record_36_t update_ltedfapegproof_record_36_project_1(ltedfapegproof_record_36_t x, uint8_t v){
        ltedfapegproof_record_36_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_36(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_36_t update_ltedfapegproof_record_36_project_2(ltedfapegproof_record_36_t x, uint32_t v){
        ltedfapegproof_record_36_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_36(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

ltedfapegproof_record_36_t update_ltedfapegproof_record_36_project_3(ltedfapegproof_record_36_t x, mpz_ptr_t v){
        ltedfapegproof_record_36_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_36(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}



void release_ltedfapegproof_funtype_37(ltedfapegproof_funtype_37_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_37_t copy_ltedfapegproof_funtype_37(ltedfapegproof_funtype_37_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_37(ltedfapegproof_funtype_37_t x, ltedfapegproof_funtype_37_t y){
        return false;}

char* json_ltedfapegproof_funtype_37(ltedfapegproof_funtype_37_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_37\""); return result;}


mpz_ptr_t f_ltedfapegproof_closure_38(struct ltedfapegproof_closure_38_s * closure, ltedfapegproof__qstack_adt_t bvar){
        mpz_ptr_t result = h_ltedfapegproof_closure_38(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_ltedfapegproof_closure_38(struct ltedfapegproof_closure_38_s * closure, ltedfapegproof__qstack_adt_t bvar){
        return h_ltedfapegproof_closure_38(bvar, closure->fvar_1, closure->fvar_2);}

mpz_ptr_t h_ltedfapegproof_closure_38(ltedfapegproof__qstack_adt_t ivar_5, ltedfapegproof_funtype_37_t ivar_2, mpz_ptr_t ivar_1){
        mpz_ptr_t result;
        /* red */ ltedfapegproof_funtype_35_t ivar_6;
        ivar_2->count++;
        ivar_6 = (ltedfapegproof_funtype_35_t)ltedfapegproof__reduce_nat__2(ivar_1, (ltedfapegproof_funtype_37_t)ivar_2);
        bool_t ivar_18;
        ivar_5->count++;
        ivar_18 = (bool_t)r_ltedfapegproof__qemptyp((ltedfapegproof__qstack_adt_t)ivar_5);
        if (ivar_18){ 
             release_ltedfapegproof_funtype_35(ivar_6);
             release_ltedfapegproof__qstack_adt(ivar_5);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_1);
} else {
        
             uint8_t ivar_22;
             ivar_5->count++;
             ivar_22 = (uint8_t)ltedfapegproof__qstack_adt_nonterm((ltedfapegproof__qstack_adt_t)ivar_5);
             uint32_t ivar_23;
             ivar_5->count++;
             ivar_23 = (uint32_t)ltedfapegproof__qstack_adt_pos((ltedfapegproof__qstack_adt_t)ivar_5);
             ltedfapegproof__qstack_adt_t ivar_24;
             ivar_24 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qstack_adt_qpop((ltedfapegproof__qstack_adt_t)ivar_5);
             mpz_ptr_t ivar_47;
             mpz_mk_set(ivar_47, ivar_6->ftbl->fptr(ivar_6, ivar_24));
             ivar_6->ftbl->rptr(ivar_6);
             mpz_mk_set(result, ivar_2->ftbl->mptr(ivar_2, ivar_22, ivar_23, ivar_47));
};

        return result;
}

ltedfapegproof_closure_38_t new_ltedfapegproof_closure_38(void){
        static struct ltedfapegproof_funtype_35_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ltedfapegproof_funtype_35_t, ltedfapegproof__qstack_adt_t))&f_ltedfapegproof_closure_38, .mptr = (mpz_ptr_t (*)(ltedfapegproof_funtype_35_t, ltedfapegproof__qstack_adt_t))&m_ltedfapegproof_closure_38, .rptr =  (void (*)(ltedfapegproof_funtype_35_t))&release_ltedfapegproof_closure_38, .cptr = (ltedfapegproof_funtype_35_t (*)(ltedfapegproof_funtype_35_t))&copy_ltedfapegproof_closure_38};
        ltedfapegproof_closure_38_t tmp = (ltedfapegproof_closure_38_t) safe_malloc(sizeof(struct ltedfapegproof_closure_38_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_ltedfapegproof_closure_38(ltedfapegproof_funtype_35_t closure){
        ltedfapegproof_closure_38_t x = (ltedfapegproof_closure_38_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_37(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_38_t copy_ltedfapegproof_closure_38(ltedfapegproof_closure_38_t x){
        ltedfapegproof_closure_38_t y = new_ltedfapegproof_closure_38();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        mpz_set(y->fvar_2, x->fvar_2);
        if (x->htbl != NULL){
            ltedfapegproof_funtype_35_htbl_t new_htbl = (ltedfapegproof_funtype_35_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_35_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_35_hashentry_t * new_data = (ltedfapegproof_funtype_35_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_35_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_35_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltedfapegproof_record_39_t new_ltedfapegproof_record_39(void){
        ltedfapegproof_record_39_t tmp = (ltedfapegproof_record_39_t) safe_malloc(sizeof(struct ltedfapegproof_record_39_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_39(ltedfapegproof_record_39_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof__qstack_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_39_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_39((ltedfapegproof_record_39_t)x);
}

ltedfapegproof_record_39_t copy_ltedfapegproof_record_39(ltedfapegproof_record_39_t x){
        ltedfapegproof_record_39_t y = new_ltedfapegproof_record_39();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        mpz_set(y->project_3, x->project_3);
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_39(ltedfapegproof_record_39_t x, ltedfapegproof_record_39_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        tmp = tmp && equal_ltedfapegproof__qstack_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltedfapegproof_record_39(ltedfapegproof_record_39_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_mpz(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_ltedfapegproof__qstack_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_39_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_39_t T){
        return equal_ltedfapegproof_record_39((ltedfapegproof_record_39_t)x, (ltedfapegproof_record_39_t)y);
}

char * json_ltedfapegproof_record_39_ptr(pointer_t x, actual_ltedfapegproof_record_39_t T){
        return json_ltedfapegproof_record_39((ltedfapegproof_record_39_t)x);
}

actual_ltedfapegproof_record_39_t actual_ltedfapegproof_record_39(){
        actual_ltedfapegproof_record_39_t new = (actual_ltedfapegproof_record_39_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_39_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_39_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_39_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_39_ptr);
 

 
        return new;
 };

ltedfapegproof_record_39_t update_ltedfapegproof_record_39_project_1(ltedfapegproof_record_39_t x, uint8_t v){
        ltedfapegproof_record_39_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_39(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_39_t update_ltedfapegproof_record_39_project_2(ltedfapegproof_record_39_t x, uint32_t v){
        ltedfapegproof_record_39_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_39(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

ltedfapegproof_record_39_t update_ltedfapegproof_record_39_project_3(ltedfapegproof_record_39_t x, mpz_ptr_t v){
        ltedfapegproof_record_39_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_39(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}

ltedfapegproof_record_39_t update_ltedfapegproof_record_39_project_4(ltedfapegproof_record_39_t x, ltedfapegproof__qstack_adt_t v){
        ltedfapegproof_record_39_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ltedfapegproof__qstack_adt(x->project_4);};}
        else {y = copy_ltedfapegproof_record_39(x); x->count--; y->project_4->count--;};
        y->project_4 = (ltedfapegproof__qstack_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_40(ltedfapegproof_funtype_40_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_40_t copy_ltedfapegproof_funtype_40(ltedfapegproof_funtype_40_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_40(ltedfapegproof_funtype_40_t x, ltedfapegproof_funtype_40_t y){
        return false;}

char* json_ltedfapegproof_funtype_40(ltedfapegproof_funtype_40_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_40\""); return result;}


mpz_ptr_t f_ltedfapegproof_closure_41(struct ltedfapegproof_closure_41_s * closure, ltedfapegproof__qstack_adt_t bvar){
        mpz_ptr_t result = h_ltedfapegproof_closure_41(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_ltedfapegproof_closure_41(struct ltedfapegproof_closure_41_s * closure, ltedfapegproof__qstack_adt_t bvar){
        return h_ltedfapegproof_closure_41(bvar, closure->fvar_1, closure->fvar_2);}

mpz_ptr_t h_ltedfapegproof_closure_41(ltedfapegproof__qstack_adt_t ivar_6, ltedfapegproof_funtype_40_t ivar_3, ltedfapegproof_funtype_35_t ivar_1){
        mpz_ptr_t result;
        /* red */ ltedfapegproof_funtype_35_t ivar_7;
        ivar_1->count++;
        ivar_3->count++;
        ivar_7 = (ltedfapegproof_funtype_35_t)ltedfapegproof__REDUCE_nat__2((ltedfapegproof_funtype_35_t)ivar_1, (ltedfapegproof_funtype_40_t)ivar_3);
        bool_t ivar_25;
        ivar_6->count++;
        ivar_25 = (bool_t)r_ltedfapegproof__qemptyp((ltedfapegproof__qstack_adt_t)ivar_6);
        if (ivar_25){ 
             release_ltedfapegproof_funtype_35(ivar_7);
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_6));
} else {
        
             uint8_t ivar_29;
             ivar_6->count++;
             ivar_29 = (uint8_t)ltedfapegproof__qstack_adt_nonterm((ltedfapegproof__qstack_adt_t)ivar_6);
             uint32_t ivar_30;
             ivar_6->count++;
             ivar_30 = (uint32_t)ltedfapegproof__qstack_adt_pos((ltedfapegproof__qstack_adt_t)ivar_6);
             ltedfapegproof__qstack_adt_t ivar_31;
             ivar_6->count++;
             ivar_31 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qstack_adt_qpop((ltedfapegproof__qstack_adt_t)ivar_6);
             mpz_ptr_t ivar_55;
             mpz_mk_set(ivar_55, ivar_7->ftbl->fptr(ivar_7, ivar_31));
             ivar_7->ftbl->rptr(ivar_7);
             mpz_mk_set(result, ivar_3->ftbl->mptr(ivar_3, ivar_29, ivar_30, ivar_55, ivar_6));
};

        return result;
}

ltedfapegproof_closure_41_t new_ltedfapegproof_closure_41(void){
        static struct ltedfapegproof_funtype_35_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ltedfapegproof_funtype_35_t, ltedfapegproof__qstack_adt_t))&f_ltedfapegproof_closure_41, .mptr = (mpz_ptr_t (*)(ltedfapegproof_funtype_35_t, ltedfapegproof__qstack_adt_t))&m_ltedfapegproof_closure_41, .rptr =  (void (*)(ltedfapegproof_funtype_35_t))&release_ltedfapegproof_closure_41, .cptr = (ltedfapegproof_funtype_35_t (*)(ltedfapegproof_funtype_35_t))&copy_ltedfapegproof_closure_41};
        ltedfapegproof_closure_41_t tmp = (ltedfapegproof_closure_41_t) safe_malloc(sizeof(struct ltedfapegproof_closure_41_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_41(ltedfapegproof_funtype_35_t closure){
        ltedfapegproof_closure_41_t x = (ltedfapegproof_closure_41_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_40(x->fvar_1);
         release_ltedfapegproof_funtype_35(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_41_t copy_ltedfapegproof_closure_41(ltedfapegproof_closure_41_t x){
        ltedfapegproof_closure_41_t y = new_ltedfapegproof_closure_41();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_35_htbl_t new_htbl = (ltedfapegproof_funtype_35_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_35_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_35_hashentry_t * new_data = (ltedfapegproof_funtype_35_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_35_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_35_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltedfapegproof_funtype_42(ltedfapegproof_funtype_42_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_42_t copy_ltedfapegproof_funtype_42(ltedfapegproof_funtype_42_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_42(ltedfapegproof_funtype_42_t x, ltedfapegproof_funtype_42_t y){
        return false;}

char* json_ltedfapegproof_funtype_42(ltedfapegproof_funtype_42_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_42\""); return result;}


ltedfapegproof_record_43_t new_ltedfapegproof_record_43(void){
        ltedfapegproof_record_43_t tmp = (ltedfapegproof_record_43_t) safe_malloc(sizeof(struct ltedfapegproof_record_43_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_43(ltedfapegproof_record_43_t x){
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt__ordstruct_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_43_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_43((ltedfapegproof_record_43_t)x);
}

ltedfapegproof_record_43_t copy_ltedfapegproof_record_43(ltedfapegproof_record_43_t x){
        ltedfapegproof_record_43_t y = new_ltedfapegproof_record_43();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_43(ltedfapegproof_record_43_t x, ltedfapegproof_record_43_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        return tmp;}

char * json_ltedfapegproof_record_43(ltedfapegproof_record_43_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ordstruct_adt__ordstruct_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_43_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_43_t T){
        return equal_ltedfapegproof_record_43((ltedfapegproof_record_43_t)x, (ltedfapegproof_record_43_t)y);
}

char * json_ltedfapegproof_record_43_ptr(pointer_t x, actual_ltedfapegproof_record_43_t T){
        return json_ltedfapegproof_record_43((ltedfapegproof_record_43_t)x);
}

actual_ltedfapegproof_record_43_t actual_ltedfapegproof_record_43(){
        actual_ltedfapegproof_record_43_t new = (actual_ltedfapegproof_record_43_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_43_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_43_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_43_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_43_ptr);
 

 
        return new;
 };

ltedfapegproof_record_43_t update_ltedfapegproof_record_43_project_1(ltedfapegproof_record_43_t x, uint8_t v){
        ltedfapegproof_record_43_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_43(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_43_t update_ltedfapegproof_record_43_project_2(ltedfapegproof_record_43_t x, uint32_t v){
        ltedfapegproof_record_43_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_43(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

ltedfapegproof_record_43_t update_ltedfapegproof_record_43_project_3(ltedfapegproof_record_43_t x, ordstruct_adt__ordstruct_adt_t v){
        ltedfapegproof_record_43_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_ltedfapegproof_record_43(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_44(ltedfapegproof_funtype_44_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_44_t copy_ltedfapegproof_funtype_44(ltedfapegproof_funtype_44_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_44(ltedfapegproof_funtype_44_t x, ltedfapegproof_funtype_44_t y){
        return false;}

char* json_ltedfapegproof_funtype_44(ltedfapegproof_funtype_44_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_44\""); return result;}


ordstruct_adt__ordstruct_adt_t f_ltedfapegproof_closure_45(struct ltedfapegproof_closure_45_s * closure, ltedfapegproof__qstack_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_ltedfapegproof_closure_45(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_ltedfapegproof_closure_45(struct ltedfapegproof_closure_45_s * closure, ltedfapegproof__qstack_adt_t bvar){
        return h_ltedfapegproof_closure_45(bvar, closure->fvar_1, closure->fvar_2);}

ordstruct_adt__ordstruct_adt_t h_ltedfapegproof_closure_45(ltedfapegproof__qstack_adt_t ivar_5, ltedfapegproof_funtype_44_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ ltedfapegproof_funtype_42_t ivar_6;
        ivar_1->count++;
        ivar_2->count++;
        ivar_6 = (ltedfapegproof_funtype_42_t)ltedfapegproof__reduce_ordinal__2((ordstruct_adt__ordstruct_adt_t)ivar_1, (ltedfapegproof_funtype_44_t)ivar_2);
        bool_t ivar_18;
        ivar_5->count++;
        ivar_18 = (bool_t)r_ltedfapegproof__qemptyp((ltedfapegproof__qstack_adt_t)ivar_5);
        if (ivar_18){ 
             release_ltedfapegproof_funtype_42(ivar_6);
             release_ltedfapegproof__qstack_adt(ivar_5);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1;
             if (result != NULL) result->count++;
} else {
        
             uint8_t ivar_22;
             ivar_5->count++;
             ivar_22 = (uint8_t)ltedfapegproof__qstack_adt_nonterm((ltedfapegproof__qstack_adt_t)ivar_5);
             uint32_t ivar_23;
             ivar_5->count++;
             ivar_23 = (uint32_t)ltedfapegproof__qstack_adt_pos((ltedfapegproof__qstack_adt_t)ivar_5);
             ltedfapegproof__qstack_adt_t ivar_24;
             ivar_24 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qstack_adt_qpop((ltedfapegproof__qstack_adt_t)ivar_5);
             ordstruct_adt__ordstruct_adt_t ivar_47;
             ivar_47 = (ordstruct_adt__ordstruct_adt_t)ivar_6->ftbl->fptr(ivar_6, ivar_24);
             ivar_6->ftbl->rptr(ivar_6);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_2->ftbl->mptr(ivar_2, ivar_22, ivar_23, ivar_47);
};

        return result;
}

ltedfapegproof_closure_45_t new_ltedfapegproof_closure_45(void){
        static struct ltedfapegproof_funtype_42_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(ltedfapegproof_funtype_42_t, ltedfapegproof__qstack_adt_t))&f_ltedfapegproof_closure_45, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(ltedfapegproof_funtype_42_t, ltedfapegproof__qstack_adt_t))&m_ltedfapegproof_closure_45, .rptr =  (void (*)(ltedfapegproof_funtype_42_t))&release_ltedfapegproof_closure_45, .cptr = (ltedfapegproof_funtype_42_t (*)(ltedfapegproof_funtype_42_t))&copy_ltedfapegproof_closure_45};
        ltedfapegproof_closure_45_t tmp = (ltedfapegproof_closure_45_t) safe_malloc(sizeof(struct ltedfapegproof_closure_45_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_45(ltedfapegproof_funtype_42_t closure){
        ltedfapegproof_closure_45_t x = (ltedfapegproof_closure_45_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_44(x->fvar_1);
         release_ordstruct_adt__ordstruct_adt(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_45_t copy_ltedfapegproof_closure_45(ltedfapegproof_closure_45_t x){
        ltedfapegproof_closure_45_t y = new_ltedfapegproof_closure_45();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_42_htbl_t new_htbl = (ltedfapegproof_funtype_42_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_42_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_42_hashentry_t * new_data = (ltedfapegproof_funtype_42_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_42_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_42_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltedfapegproof_record_46_t new_ltedfapegproof_record_46(void){
        ltedfapegproof_record_46_t tmp = (ltedfapegproof_record_46_t) safe_malloc(sizeof(struct ltedfapegproof_record_46_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_46(ltedfapegproof_record_46_t x){
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt__ordstruct_adt(x->project_3);
         release_ltedfapegproof__qstack_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_46_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_46((ltedfapegproof_record_46_t)x);
}

ltedfapegproof_record_46_t copy_ltedfapegproof_record_46(ltedfapegproof_record_46_t x){
        ltedfapegproof_record_46_t y = new_ltedfapegproof_record_46();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_46(ltedfapegproof_record_46_t x, ltedfapegproof_record_46_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        tmp = tmp && equal_ltedfapegproof__qstack_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltedfapegproof_record_46(ltedfapegproof_record_46_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ordstruct_adt__ordstruct_adt(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_ltedfapegproof__qstack_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_46_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_46_t T){
        return equal_ltedfapegproof_record_46((ltedfapegproof_record_46_t)x, (ltedfapegproof_record_46_t)y);
}

char * json_ltedfapegproof_record_46_ptr(pointer_t x, actual_ltedfapegproof_record_46_t T){
        return json_ltedfapegproof_record_46((ltedfapegproof_record_46_t)x);
}

actual_ltedfapegproof_record_46_t actual_ltedfapegproof_record_46(){
        actual_ltedfapegproof_record_46_t new = (actual_ltedfapegproof_record_46_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_46_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_46_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_46_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_46_ptr);
 

 
        return new;
 };

ltedfapegproof_record_46_t update_ltedfapegproof_record_46_project_1(ltedfapegproof_record_46_t x, uint8_t v){
        ltedfapegproof_record_46_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_46(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_46_t update_ltedfapegproof_record_46_project_2(ltedfapegproof_record_46_t x, uint32_t v){
        ltedfapegproof_record_46_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_46(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

ltedfapegproof_record_46_t update_ltedfapegproof_record_46_project_3(ltedfapegproof_record_46_t x, ordstruct_adt__ordstruct_adt_t v){
        ltedfapegproof_record_46_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_ltedfapegproof_record_46(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

ltedfapegproof_record_46_t update_ltedfapegproof_record_46_project_4(ltedfapegproof_record_46_t x, ltedfapegproof__qstack_adt_t v){
        ltedfapegproof_record_46_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ltedfapegproof__qstack_adt(x->project_4);};}
        else {y = copy_ltedfapegproof_record_46(x); x->count--; y->project_4->count--;};
        y->project_4 = (ltedfapegproof__qstack_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_47(ltedfapegproof_funtype_47_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_47_t copy_ltedfapegproof_funtype_47(ltedfapegproof_funtype_47_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_47(ltedfapegproof_funtype_47_t x, ltedfapegproof_funtype_47_t y){
        return false;}

char* json_ltedfapegproof_funtype_47(ltedfapegproof_funtype_47_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_47\""); return result;}


ordstruct_adt__ordstruct_adt_t f_ltedfapegproof_closure_48(struct ltedfapegproof_closure_48_s * closure, ltedfapegproof__qstack_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_ltedfapegproof_closure_48(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_ltedfapegproof_closure_48(struct ltedfapegproof_closure_48_s * closure, ltedfapegproof__qstack_adt_t bvar){
        return h_ltedfapegproof_closure_48(bvar, closure->fvar_1, closure->fvar_2);}

ordstruct_adt__ordstruct_adt_t h_ltedfapegproof_closure_48(ltedfapegproof__qstack_adt_t ivar_6, ltedfapegproof_funtype_47_t ivar_3, ltedfapegproof_funtype_42_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ ltedfapegproof_funtype_42_t ivar_7;
        ivar_1->count++;
        ivar_3->count++;
        ivar_7 = (ltedfapegproof_funtype_42_t)ltedfapegproof__REDUCE_ordinal__2((ltedfapegproof_funtype_42_t)ivar_1, (ltedfapegproof_funtype_47_t)ivar_3);
        bool_t ivar_25;
        ivar_6->count++;
        ivar_25 = (bool_t)r_ltedfapegproof__qemptyp((ltedfapegproof__qstack_adt_t)ivar_6);
        if (ivar_25){ 
             release_ltedfapegproof_funtype_42(ivar_7);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_6);
} else {
        
             uint8_t ivar_29;
             ivar_6->count++;
             ivar_29 = (uint8_t)ltedfapegproof__qstack_adt_nonterm((ltedfapegproof__qstack_adt_t)ivar_6);
             uint32_t ivar_30;
             ivar_6->count++;
             ivar_30 = (uint32_t)ltedfapegproof__qstack_adt_pos((ltedfapegproof__qstack_adt_t)ivar_6);
             ltedfapegproof__qstack_adt_t ivar_31;
             ivar_6->count++;
             ivar_31 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qstack_adt_qpop((ltedfapegproof__qstack_adt_t)ivar_6);
             ordstruct_adt__ordstruct_adt_t ivar_55;
             ivar_55 = (ordstruct_adt__ordstruct_adt_t)ivar_7->ftbl->fptr(ivar_7, ivar_31);
             ivar_7->ftbl->rptr(ivar_7);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_29, ivar_30, ivar_55, ivar_6);
};

        return result;
}

ltedfapegproof_closure_48_t new_ltedfapegproof_closure_48(void){
        static struct ltedfapegproof_funtype_42_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(ltedfapegproof_funtype_42_t, ltedfapegproof__qstack_adt_t))&f_ltedfapegproof_closure_48, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(ltedfapegproof_funtype_42_t, ltedfapegproof__qstack_adt_t))&m_ltedfapegproof_closure_48, .rptr =  (void (*)(ltedfapegproof_funtype_42_t))&release_ltedfapegproof_closure_48, .cptr = (ltedfapegproof_funtype_42_t (*)(ltedfapegproof_funtype_42_t))&copy_ltedfapegproof_closure_48};
        ltedfapegproof_closure_48_t tmp = (ltedfapegproof_closure_48_t) safe_malloc(sizeof(struct ltedfapegproof_closure_48_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_48(ltedfapegproof_funtype_42_t closure){
        ltedfapegproof_closure_48_t x = (ltedfapegproof_closure_48_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_47(x->fvar_1);
         release_ltedfapegproof_funtype_42(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_48_t copy_ltedfapegproof_closure_48(ltedfapegproof_closure_48_t x){
        ltedfapegproof_closure_48_t y = new_ltedfapegproof_closure_48();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_42_htbl_t new_htbl = (ltedfapegproof_funtype_42_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_42_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_42_hashentry_t * new_data = (ltedfapegproof_funtype_42_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_42_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_42_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltedfapegproof_funtype_49(ltedfapegproof_funtype_49_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_49_t copy_ltedfapegproof_funtype_49(ltedfapegproof_funtype_49_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_49(ltedfapegproof_funtype_49_t x, ltedfapegproof_funtype_49_t y){
        return false;}

char* json_ltedfapegproof_funtype_49(ltedfapegproof_funtype_49_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_49\""); return result;}


ltedfapegproof_array_50_t new_ltedfapegproof_array_50(uint32_t size){
        ltedfapegproof_array_50_t tmp = (ltedfapegproof_array_50_t) safe_malloc(sizeof(struct ltedfapegproof_array_50_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_ltedfapegproof_array_50(ltedfapegproof_array_50_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_ltedfapegproof_array_50_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_array_50((ltedfapegproof_array_50_t)x);
}

ltedfapegproof_array_50_t copy_ltedfapegproof_array_50(ltedfapegproof_array_50_t x){
        ltedfapegproof_array_50_t tmp = new_ltedfapegproof_array_50(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_ltedfapegproof_array_50(ltedfapegproof_array_50_t x, ltedfapegproof_array_50_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_ltedfapegproof_array_50(ltedfapegproof_array_50_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint8(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltedfapegproof_array_50_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltedfapegproof_array_50((ltedfapegproof_array_50_t)x, (ltedfapegproof_array_50_t)y);
}

char * json_ltedfapegproof_array_50_ptr(pointer_t x, type_actual_t T){
        return json_ltedfapegproof_array_50((ltedfapegproof_array_50_t)x);
}

actual_ltedfapegproof_array_50_t actual_ltedfapegproof_array_50(){
        actual_ltedfapegproof_array_50_t new = (actual_ltedfapegproof_array_50_t)safe_malloc(sizeof(struct actual_ltedfapegproof_array_50_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_array_50_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_array_50_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_array_50_ptr);
 

 
        return new;
 };

ltedfapegproof_array_50_t update_ltedfapegproof_array_50(ltedfapegproof_array_50_t x, uint32_t i, uint8_t v){
        ltedfapegproof_array_50_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_ltedfapegproof_array_50(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

ltedfapegproof_array_50_t upgrade_ltedfapegproof_array_50(ltedfapegproof_array_50_t x, uint32_t i, uint8_t v){
        ltedfapegproof_array_50_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltedfapegproof_array_50_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltedfapegproof_array_50(x);}
           else {y = copy_ltedfapegproof_array_50(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




ltedfapegproof_array_51_t new_ltedfapegproof_array_51(uint32_t size){
        ltedfapegproof_array_51_t tmp = (ltedfapegproof_array_51_t) safe_malloc(sizeof(struct ltedfapegproof_array_51_s) + (size * sizeof(ltedfapeg__ent_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_ltedfapegproof_array_51(ltedfapegproof_array_51_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_ltedfapeg__ent_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_ltedfapegproof_array_51_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_array_51((ltedfapegproof_array_51_t)x);
}

ltedfapegproof_array_51_t copy_ltedfapegproof_array_51(ltedfapegproof_array_51_t x){
        ltedfapegproof_array_51_t tmp = new_ltedfapegproof_array_51(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ltedfapegproof_array_51(ltedfapegproof_array_51_t x, ltedfapegproof_array_51_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_ltedfapeg__ent_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_ltedfapegproof_array_51(ltedfapegproof_array_51_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_ltedfapeg__ent_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltedfapegproof_array_51_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltedfapegproof_array_51((ltedfapegproof_array_51_t)x, (ltedfapegproof_array_51_t)y);
}

char * json_ltedfapegproof_array_51_ptr(pointer_t x, type_actual_t T){
        return json_ltedfapegproof_array_51((ltedfapegproof_array_51_t)x);
}

actual_ltedfapegproof_array_51_t actual_ltedfapegproof_array_51(){
        actual_ltedfapegproof_array_51_t new = (actual_ltedfapegproof_array_51_t)safe_malloc(sizeof(struct actual_ltedfapegproof_array_51_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_array_51_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_array_51_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_array_51_ptr);
 

 
        return new;
 };

ltedfapegproof_array_51_t update_ltedfapegproof_array_51(ltedfapegproof_array_51_t x, uint32_t i, ltedfapeg__ent_adt_t v){
         ltedfapegproof_array_51_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ltedfapegproof_array_51(x);
                      x->count--;};
        ltedfapeg__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltedfapeg__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

ltedfapegproof_array_51_t upgrade_ltedfapegproof_array_51(ltedfapegproof_array_51_t x, uint32_t i, ltedfapeg__ent_adt_t v){
         ltedfapegproof_array_51_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltedfapegproof_array_51_s) + (newmax * sizeof(ltedfapeg__ent_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltedfapegproof_array_51(x);} else {y = copy_ltedfapegproof_array_51(x);
                      x->count--;};
        ltedfapeg__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltedfapeg__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}




ltedfapegproof_array_52_t new_ltedfapegproof_array_52(uint32_t size){
        ltedfapegproof_array_52_t tmp = (ltedfapegproof_array_52_t) safe_malloc(sizeof(struct ltedfapegproof_array_52_s) + (size * sizeof(ltedfapegproof_array_51_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_ltedfapegproof_array_52(ltedfapegproof_array_52_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_ltedfapegproof_array_51(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_ltedfapegproof_array_52_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_array_52((ltedfapegproof_array_52_t)x);
}

ltedfapegproof_array_52_t copy_ltedfapegproof_array_52(ltedfapegproof_array_52_t x){
        ltedfapegproof_array_52_t tmp = new_ltedfapegproof_array_52(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ltedfapegproof_array_52(ltedfapegproof_array_52_t x, ltedfapegproof_array_52_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_ltedfapegproof_array_51(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_ltedfapegproof_array_52(ltedfapegproof_array_52_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_ltedfapegproof_array_51(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltedfapegproof_array_52_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltedfapegproof_array_52((ltedfapegproof_array_52_t)x, (ltedfapegproof_array_52_t)y);
}

char * json_ltedfapegproof_array_52_ptr(pointer_t x, type_actual_t T){
        return json_ltedfapegproof_array_52((ltedfapegproof_array_52_t)x);
}

actual_ltedfapegproof_array_52_t actual_ltedfapegproof_array_52(){
        actual_ltedfapegproof_array_52_t new = (actual_ltedfapegproof_array_52_t)safe_malloc(sizeof(struct actual_ltedfapegproof_array_52_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_array_52_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_array_52_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_array_52_ptr);
 

 
        return new;
 };

ltedfapegproof_array_52_t update_ltedfapegproof_array_52(ltedfapegproof_array_52_t x, uint32_t i, ltedfapegproof_array_51_t v){
         ltedfapegproof_array_52_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ltedfapegproof_array_52(x);
                      x->count--;};
        ltedfapegproof_array_51_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltedfapegproof_array_51(yelems[i]);};
         yelems[i] = v;
         return y;}

ltedfapegproof_array_52_t upgrade_ltedfapegproof_array_52(ltedfapegproof_array_52_t x, uint32_t i, ltedfapegproof_array_51_t v){
         ltedfapegproof_array_52_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltedfapegproof_array_52_s) + (newmax * sizeof(ltedfapegproof_array_51_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltedfapegproof_array_52(x);} else {y = copy_ltedfapegproof_array_52(x);
                      x->count--;};
        ltedfapegproof_array_51_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltedfapegproof_array_51(yelems[i]);};
         yelems[i] = v;
         return y;}




bool_t f_ltedfapegproof_closure_53(struct ltedfapegproof_closure_53_s * closure, ltedfapegproof__qstack_adt_t bvar){
        bool_t result = h_ltedfapegproof_closure_53(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

bool_t m_ltedfapegproof_closure_53(struct ltedfapegproof_closure_53_s * closure, ltedfapegproof__qstack_adt_t bvar){
        return h_ltedfapegproof_closure_53(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

bool_t h_ltedfapegproof_closure_53(ltedfapegproof__qstack_adt_t ivar_7, ltedfapegproof_array_50_t ivar_3, uint32_t ivar_1, ltedfapegproof_array_52_t ivar_4, ltedfapeg__lang_spec_t ivar_2){
        bool_t result;
        bool_t ivar_70;
        ivar_7->count++;
        ivar_70 = (bool_t)r_ltedfapegproof__qpushp((ltedfapegproof__qstack_adt_t)ivar_7);
        if (ivar_70){ 
             uint8_t ivar_9;
             ivar_7->count++;
             ivar_9 = (uint8_t)ltedfapegproof__qstack_adt_nonterm((ltedfapegproof__qstack_adt_t)ivar_7);
             uint32_t ivar_10;
             ivar_7->count++;
             ivar_10 = (uint32_t)ltedfapegproof__qstack_adt_pos((ltedfapegproof__qstack_adt_t)ivar_7);
             ltedfapegproof__qstack_adt_t ivar_11;
             ivar_11 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qstack_adt_qpop((ltedfapegproof__qstack_adt_t)ivar_7);
             bool_t ivar_21;
             ivar_21 = (ivar_10 <= ivar_1);
             if (ivar_21){  
           bool_t ivar_26;
           bool_t ivar_28;
           ivar_11->count++;
           ivar_28 = (bool_t)ltedfapegproof__inqstack((uint8_t)ivar_9, (uint32_t)ivar_10, (ltedfapegproof__qstack_adt_t)ivar_11);
           ivar_26 = !ivar_28;
           if (ivar_26){   
           bool_t ivar_37;
           ltedfapeg__ent_adt_t ivar_50;
           ltedfapegproof_array_51_t ivar_42;
           ivar_42 = (ltedfapegproof_array_51_t)ivar_4->elems[ivar_10];
           ivar_42->count++;
           ivar_50 = (ltedfapeg__ent_adt_t)ivar_42->elems[ivar_9];
           ivar_50->count++;
           release_ltedfapegproof_array_51(ivar_42);
           ivar_37 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_50);
           if (ivar_37){    
            ltedfapegproof_funtype_49_t ivar_54;
            ivar_2->count++;
            ivar_3->count++;
            ivar_4->count++;
            ivar_54 = (ltedfapegproof_funtype_49_t)ltedfapegproof__good_qstackp((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_50_t)ivar_3, (ltedfapegproof_array_52_t)ivar_4);
            result = (bool_t)ivar_54->ftbl->fptr(ivar_54, ivar_11);
            ivar_54->ftbl->rptr(ivar_54);
} else {
           
            release_ltedfapegproof__qstack_adt(ivar_11);
            result = (bool_t) false;
};
} else {
           
           release_ltedfapegproof__qstack_adt(ivar_11);
           result = (bool_t) false;
};
} else {
             
           release_ltedfapegproof__qstack_adt(ivar_11);
           result = (bool_t) false;
};
} else {
        
             release_ltedfapegproof__qstack_adt(ivar_7);
             result = (bool_t) true;
};

        return result;
}

ltedfapegproof_closure_53_t new_ltedfapegproof_closure_53(void){
        static struct ltedfapegproof_funtype_49_ftbl_s ftbl = {.fptr = (bool_t (*)(ltedfapegproof_funtype_49_t, ltedfapegproof__qstack_adt_t))&f_ltedfapegproof_closure_53, .mptr = (bool_t (*)(ltedfapegproof_funtype_49_t, ltedfapegproof__qstack_adt_t))&m_ltedfapegproof_closure_53, .rptr =  (void (*)(ltedfapegproof_funtype_49_t))&release_ltedfapegproof_closure_53, .cptr = (ltedfapegproof_funtype_49_t (*)(ltedfapegproof_funtype_49_t))&copy_ltedfapegproof_closure_53};
        ltedfapegproof_closure_53_t tmp = (ltedfapegproof_closure_53_t) safe_malloc(sizeof(struct ltedfapegproof_closure_53_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_53(ltedfapegproof_funtype_49_t closure){
        ltedfapegproof_closure_53_t x = (ltedfapegproof_closure_53_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_array_50(x->fvar_1);
         release_ltedfapegproof_array_52(x->fvar_3);
         release_ltedfapeg__lang_spec(x->fvar_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_53_t copy_ltedfapegproof_closure_53(ltedfapegproof_closure_53_t x){
        ltedfapegproof_closure_53_t y = new_ltedfapegproof_closure_53();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_49_htbl_t new_htbl = (ltedfapegproof_funtype_49_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_49_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_49_hashentry_t * new_data = (ltedfapegproof_funtype_49_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_49_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_49_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltedfapegproof_record_54_t new_ltedfapegproof_record_54(void){
        ltedfapegproof_record_54_t tmp = (ltedfapegproof_record_54_t) safe_malloc(sizeof(struct ltedfapegproof_record_54_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_54(ltedfapegproof_record_54_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof__qstack_adt(x->project_1);
         release_ltedfapegproof__parsetree_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_54_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_54((ltedfapegproof_record_54_t)x);
}

ltedfapegproof_record_54_t copy_ltedfapegproof_record_54(ltedfapegproof_record_54_t x){
        ltedfapegproof_record_54_t y = new_ltedfapegproof_record_54();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = (uint32_t)x->project_3;
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_54(ltedfapegproof_record_54_t x, ltedfapegproof_record_54_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltedfapegproof__qstack_adt(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltedfapegproof_record_54(ltedfapegproof_record_54_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltedfapegproof__qstack_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_ltedfapegproof__parsetree_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_54_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_54_t T){
        return equal_ltedfapegproof_record_54((ltedfapegproof_record_54_t)x, (ltedfapegproof_record_54_t)y);
}

char * json_ltedfapegproof_record_54_ptr(pointer_t x, actual_ltedfapegproof_record_54_t T){
        return json_ltedfapegproof_record_54((ltedfapegproof_record_54_t)x);
}

actual_ltedfapegproof_record_54_t actual_ltedfapegproof_record_54(){
        actual_ltedfapegproof_record_54_t new = (actual_ltedfapegproof_record_54_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_54_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_54_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_54_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_54_ptr);
 

 
        return new;
 };

ltedfapegproof_record_54_t update_ltedfapegproof_record_54_project_1(ltedfapegproof_record_54_t x, ltedfapegproof__qstack_adt_t v){
        ltedfapegproof_record_54_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltedfapegproof__qstack_adt(x->project_1);};}
        else {y = copy_ltedfapegproof_record_54(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltedfapegproof__qstack_adt_t)v;
        return y;}

ltedfapegproof_record_54_t update_ltedfapegproof_record_54_project_2(ltedfapegproof_record_54_t x, uint8_t v){
        ltedfapegproof_record_54_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_54(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

ltedfapegproof_record_54_t update_ltedfapegproof_record_54_project_3(ltedfapegproof_record_54_t x, uint32_t v){
        ltedfapegproof_record_54_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_54(x); x->count--;};
        y->project_3 = (uint32_t)v;
        return y;}

ltedfapegproof_record_54_t update_ltedfapegproof_record_54_project_4(ltedfapegproof_record_54_t x, ltedfapegproof__parsetree_adt_t v){
        ltedfapegproof_record_54_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ltedfapegproof__parsetree_adt(x->project_4);};}
        else {y = copy_ltedfapegproof_record_54(x); x->count--; y->project_4->count--;};
        y->project_4 = (ltedfapegproof__parsetree_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_55(ltedfapegproof_funtype_55_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_55_t copy_ltedfapegproof_funtype_55(ltedfapegproof_funtype_55_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_55(ltedfapegproof_funtype_55_t x, ltedfapegproof_funtype_55_t y){
        return false;}

char* json_ltedfapegproof_funtype_55(ltedfapegproof_funtype_55_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_55\""); return result;}


bool_t f_ltedfapegproof_closure_56(struct ltedfapegproof_closure_56_s * closure, ltedfapegproof_record_54_t bvar){
        ltedfapegproof__qstack_adt_t bvar_1;
        bvar_1 = (ltedfapegproof__qstack_adt_t)bvar->project_1;
        bvar->project_1->count++;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        uint32_t bvar_3;
        bvar_3 = (uint32_t)bvar->project_3;
        ltedfapegproof__parsetree_adt_t bvar_4;
        bvar_4 = (ltedfapegproof__parsetree_adt_t)bvar->project_4;
        bvar->project_4->count++;
        release_ltedfapegproof_record_54(bvar);
        bool_t result = h_ltedfapegproof_closure_56(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_ltedfapegproof__qstack_adt(bvar_1);
        release_ltedfapegproof__parsetree_adt(bvar_4);
        return result;}

bool_t m_ltedfapegproof_closure_56(struct ltedfapegproof_closure_56_s * closure, ltedfapegproof__qstack_adt_t bvar_1, uint8_t bvar_2, uint32_t bvar_3, ltedfapegproof__parsetree_adt_t bvar_4){
        return h_ltedfapegproof_closure_56(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

bool_t h_ltedfapegproof_closure_56(ltedfapegproof__qstack_adt_t ivar_5, uint8_t ivar_6, uint32_t ivar_7, ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_array_50_t ivar_3, uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2){
        bool_t result;
        bool_t ivar_145;
        ivar_8->count++;
        ivar_145 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_8);
        if (ivar_145){ 
             ltedfapeg__ent_adt_t ivar_10;
             ivar_10 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
             ltedfapeg__prepeg_adt_t ivar_14;
             ivar_14 = (ltedfapeg__prepeg_adt_t)ivar_2->elems[ivar_6];
             ivar_14->count++;
             bool_t ivar_31;
             ivar_14->count++;
             ivar_31 = (bool_t)r_ltedfapeg__epsilonp((ltedfapeg__prepeg_adt_t)ivar_14);
             if (ivar_31){  
           release_ltedfapegproof__qstack_adt(ivar_5);
           release_ltedfapeg__prepeg_adt(ivar_14);
           ltedfapeg__ent_adt_t ivar_20;
           uint8_t ivar_29;
           ivar_29 = (uint8_t)0;
           uint64_t ivar_24;
           //copying to uint64 from uint8;
           ivar_24 = (uint64_t)ivar_29;
           uint8_t ivar_28;
           ivar_28 = (uint8_t)0;
           uint32_t ivar_25;
           //copying to uint32 from uint8;
           ivar_25 = (uint32_t)ivar_28;
           ivar_20 = (ltedfapeg__ent_adt_t)ltedfapeg__good((uint64_t)ivar_24, (uint32_t)ivar_25);
           result = (bool_t) equal_ltedfapeg__ent_adt(ivar_10, ivar_20);
} else {
             
           bool_t ivar_43;
           ivar_14->count++;
           ivar_43 = (bool_t)r_ltedfapeg__failurep((ltedfapeg__prepeg_adt_t)ivar_14);
           if (ivar_43){   
           release_ltedfapegproof__qstack_adt(ivar_5);
           release_ltedfapeg__prepeg_adt(ivar_14);
           ltedfapeg__ent_adt_t ivar_36;
           uint8_t ivar_41;
           ivar_41 = (uint8_t)0;
           uint64_t ivar_39;
           //copying to uint64 from uint8;
           ivar_39 = (uint64_t)ivar_41;
           ivar_36 = (ltedfapeg__ent_adt_t)ltedfapeg__fail((uint64_t)ivar_39);
           result = (bool_t) equal_ltedfapeg__ent_adt(ivar_10, ivar_36);
} else {
           
           bool_t ivar_86;
           ivar_14->count++;
           ivar_86 = (bool_t)r_ltedfapeg__anyp((ltedfapeg__prepeg_adt_t)ivar_14);
           if (ivar_86){    
            release_ltedfapegproof__qstack_adt(ivar_5);
            dfa__dfa_t ivar_47;
            ivar_47 = (dfa__dfa_t)ltedfapeg__prepeg_adt_dfa((ltedfapeg__prepeg_adt_t)ivar_14);
            /* res */ dfa__dfaResult_adt_t ivar_51;
            ivar_3->count++;
            ivar_51 = (dfa__dfaResult_adt_t)dfa__DfaParse((dfa__dfa_t)ivar_47, (uint32_t)ivar_1, (dfa_array_17_t)ivar_3, (uint32_t)ivar_7);
            bool_t ivar_61;
            ivar_51->count++;
            ivar_61 = (bool_t)r_dfa__successp((dfa__dfaResult_adt_t)ivar_51);
            if (ivar_61){     
             ltedfapeg__ent_adt_t ivar_66;
             uint8_t ivar_76;
             ivar_76 = (uint8_t)0;
             uint64_t ivar_73;
             //copying to uint64 from uint8;
             ivar_73 = (uint64_t)ivar_76;
             uint32_t ivar_74;
             ivar_74 = (uint32_t)dfa__dfaResult_adt_span((dfa__dfaResult_adt_t)ivar_51);
             ivar_66 = (ltedfapeg__ent_adt_t)ltedfapeg__good((uint64_t)ivar_73, (uint32_t)ivar_74);
             result = (bool_t) equal_ltedfapeg__ent_adt(ivar_10, ivar_66);
} else {
            
             release_dfa__dfaResult_adt(ivar_51);
             ltedfapeg__ent_adt_t ivar_79;
             uint8_t ivar_84;
             ivar_84 = (uint8_t)0;
             uint64_t ivar_82;
             //copying to uint64 from uint8;
             ivar_82 = (uint64_t)ivar_84;
             ivar_79 = (ltedfapeg__ent_adt_t)ltedfapeg__fail((uint64_t)ivar_82);
             result = (bool_t) equal_ltedfapeg__ent_adt(ivar_10, ivar_79);
};
} else {
           
            bool_t ivar_128;
            ivar_14->count++;
            ivar_128 = (bool_t)r_ltedfapeg__terminalp((ltedfapeg__prepeg_adt_t)ivar_14);
            if (ivar_128){     
             release_ltedfapegproof__qstack_adt(ivar_5);
             uint8_t ivar_90;
             ivar_90 = (uint8_t)ltedfapeg__prepeg_adt_a((ltedfapeg__prepeg_adt_t)ivar_14);
             bool_t ivar_94;
             bool_t ivar_95;
             ivar_95 = (ivar_7 < ivar_1);
             if (ivar_95){      
              uint8_t ivar_100;
              ivar_100 = (uint8_t)ivar_3->elems[ivar_7];
              ivar_94 = (ivar_100 == ivar_90);
} else {
             
              ivar_94 = (bool_t) false;
};
             if (ivar_94){      
              ltedfapeg__ent_adt_t ivar_109;
              uint8_t ivar_118;
              ivar_118 = (uint8_t)0;
              uint64_t ivar_113;
              //copying to uint64 from uint8;
              ivar_113 = (uint64_t)ivar_118;
              uint8_t ivar_117;
              ivar_117 = (uint8_t)1;
              uint32_t ivar_114;
              //copying to uint32 from uint8;
              ivar_114 = (uint32_t)ivar_117;
              ivar_109 = (ltedfapeg__ent_adt_t)ltedfapeg__good((uint64_t)ivar_113, (uint32_t)ivar_114);
              result = (bool_t) equal_ltedfapeg__ent_adt(ivar_10, ivar_109);
} else {
             
              ltedfapeg__ent_adt_t ivar_121;
              uint8_t ivar_126;
              ivar_126 = (uint8_t)0;
              uint64_t ivar_124;
              //copying to uint64 from uint8;
              ivar_124 = (uint64_t)ivar_126;
              ivar_121 = (ltedfapeg__ent_adt_t)ltedfapeg__fail((uint64_t)ivar_124);
              result = (bool_t) equal_ltedfapeg__ent_adt(ivar_10, ivar_121);
};
} else {
            
             release_ltedfapeg__prepeg_adt(ivar_14);
             bool_t ivar_132;
             ivar_132 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_10);
             if (ivar_132){      
              result = (bool_t)ltedfapegproof__inqstack((uint8_t)ivar_6, (uint32_t)ivar_7, (ltedfapegproof__qstack_adt_t)ivar_5);
} else {
             
              release_ltedfapegproof__qstack_adt(ivar_5);
              result = (bool_t) false;
};
};
};
};
};
} else {
        
             bool_t ivar_219;
             ivar_8->count++;
             ivar_219 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_8);
             if (ivar_219){  
           ltedfapeg__ent_adt_t ivar_149;
           ivar_8->count++;
           ivar_149 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_150;
           ivar_150 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapeg__prepeg_adt_t ivar_157;
           ivar_157 = (ltedfapeg__prepeg_adt_t)ivar_2->elems[ivar_6];
           ivar_157->count++;
           bool_t ivar_215;
           ivar_157->count++;
           ivar_215 = (bool_t)r_ltedfapeg__ltep((ltedfapeg__prepeg_adt_t)ivar_157);
           if (ivar_215){   
           uint8_t ivar_162;
           ivar_157->count++;
           ivar_162 = (uint8_t)ltedfapeg__prepeg_adt_fst((ltedfapeg__prepeg_adt_t)ivar_157);
           bool_t ivar_174;
           ltedfapegproof_funtype_55_t ivar_189;
           ivar_2->count++;
           ivar_3->count++;
           ivar_189 = (ltedfapegproof_funtype_55_t)ltedfapegproof__good_parsetreep((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_50_t)ivar_3);
           ltedfapegproof__qstack_adt_t ivar_198;
           ivar_198 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (ltedfapegproof__qstack_adt_t)ivar_5);
           ivar_150->count++;
           ivar_174 = (bool_t)ivar_189->ftbl->mptr(ivar_189, ivar_198, ivar_162, ivar_7, ivar_150);
           ivar_189->ftbl->rptr(ivar_189);
           if (ivar_174){    
            bool_t ivar_202;
            ivar_202 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_149);
            if (ivar_202){     
             ltedfapeg__ent_adt_t ivar_212;
             ivar_212 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_150);
             result = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_212);
} else {
            
             release_ltedfapegproof__parsetree_adt(ivar_150);
             result = (bool_t) false;
};
} else {
           
            release_ltedfapegproof__parsetree_adt(ivar_150);
            release_ltedfapeg__ent_adt(ivar_149);
            result = (bool_t) false;
};
} else {
           
           release_ltedfapegproof__parsetree_adt(ivar_150);
           release_ltedfapegproof__qstack_adt(ivar_5);
           release_ltedfapeg__ent_adt(ivar_149);
           release_ltedfapeg__prepeg_adt(ivar_157);
           result = (bool_t) false;
};
} else {
             
           ltedfapeg__ent_adt_t ivar_223;
           ivar_8->count++;
           ivar_223 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_224;
           ivar_8->count++;
           ivar_224 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_225;
           ivar_225 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subtwo((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapeg__prepeg_adt_t ivar_235;
           ivar_235 = (ltedfapeg__prepeg_adt_t)ivar_2->elems[ivar_6];
           ivar_235->count++;
           bool_t ivar_588;
           ivar_235->count++;
           ivar_588 = (bool_t)r_ltedfapeg__ltep((ltedfapeg__prepeg_adt_t)ivar_235);
           if (ivar_588){   
           uint8_t ivar_240;
           ivar_235->count++;
           ivar_240 = (uint8_t)ltedfapeg__prepeg_adt_fst((ltedfapeg__prepeg_adt_t)ivar_235);
           uint8_t ivar_241;
           ivar_235->count++;
           ivar_241 = (uint8_t)ltedfapeg__prepeg_adt_lthen((ltedfapeg__prepeg_adt_t)ivar_235);
           uint8_t ivar_242;
           ivar_242 = (uint8_t)ltedfapeg__prepeg_adt_lelse((ltedfapeg__prepeg_adt_t)ivar_235);
           bool_t ivar_252;
           ltedfapegproof_funtype_55_t ivar_267;
           ivar_2->count++;
           ivar_3->count++;
           ivar_267 = (ltedfapegproof_funtype_55_t)ltedfapegproof__good_parsetreep((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_50_t)ivar_3);
           ltedfapegproof__qstack_adt_t ivar_276;
           ivar_5->count++;
           ivar_276 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (ltedfapegproof__qstack_adt_t)ivar_5);
           ivar_224->count++;
           ivar_252 = (bool_t)ivar_267->ftbl->mptr(ivar_267, ivar_276, ivar_240, ivar_7, ivar_224);
           ivar_267->ftbl->rptr(ivar_267);
           if (ivar_252){    
            bool_t ivar_280;
            ltedfapeg__ent_adt_t ivar_286;
            ivar_224->count++;
            ivar_286 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_224);
            ivar_280 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_286);
            if (ivar_280){     
             bool_t ivar_287;
             ltedfapegproof_funtype_57_t ivar_295;
             ivar_295 = (ltedfapegproof_funtype_57_t)ltedfapeg__good_good_entryp((uint32_t)ivar_1, (uint32_t)ivar_7);
             ltedfapeg__ent_adt_t ivar_302;
             ivar_224->count++;
             ivar_302 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_224);
             ivar_287 = (bool_t)ivar_295->ftbl->fptr(ivar_295, ivar_302);
             ivar_295->ftbl->rptr(ivar_295);
             if (ivar_287){      
              bool_t ivar_303;
              ltedfapegproof_funtype_55_t ivar_327;
              ivar_2->count++;
              ivar_3->count++;
              ivar_327 = (ltedfapegproof_funtype_55_t)ltedfapegproof__good_parsetreep((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_50_t)ivar_3);
              ltedfapegproof__qstack_adt_t ivar_336;
              ivar_336 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (ltedfapegproof__qstack_adt_t)ivar_5);
              uint64_t ivar_340;
              uint32_t ivar_317;
              ltedfapeg__ent_adt_t ivar_323;
              ivar_224->count++;
              ivar_323 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_224);
              ivar_317 = (uint32_t)ltedfapeg__ent_adt_span((ltedfapeg__ent_adt_t)ivar_323);
              ivar_340 = (uint64_t)(ivar_7 + ivar_317);
              uint32_t ivar_338;
              //copying to uint32 from uint64;
              ivar_338 = (uint32_t)ivar_340;
              ivar_225->count++;
              ivar_303 = (bool_t)ivar_327->ftbl->mptr(ivar_327, ivar_336, ivar_241, ivar_338, ivar_225);
              ivar_327->ftbl->rptr(ivar_327);
              if (ivar_303){       
               bool_t ivar_341;
               ltedfapeg__ent_adt_t ivar_347;
               ivar_225->count++;
               ivar_347 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_225);
               ivar_341 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_347);
               if (ivar_341){        
                bool_t ivar_348;
                ivar_223->count++;
                ivar_348 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_223);
                if (ivar_348){         
                 uint64_t ivar_353;
                 ivar_353 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_223);
                 mpz_ptr_t ivar_354;
                 uint8_t ivar_358;
                 ivar_358 = (uint8_t)1;
                 mpq_ptr_t ivar_359;
                 uint64_t ivar_380;
                 ltedfapeg__ent_adt_t ivar_367;
                 ivar_367 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_224);
                 ivar_380 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_367);
                 mpq_ptr_t ivar_375;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_375, ivar_380);
                 uint64_t ivar_379;
                 ltedfapeg__ent_adt_t ivar_373;
                 ivar_373 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_225);
                 ivar_379 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_373);
                 mpq_ptr_t ivar_376;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_376, ivar_379);
                 ivar_359 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_375, (mpq_ptr_t)ivar_376);
                 mpz_mk_set_q(ivar_354, ivar_359);
                 mpz_add_ui(ivar_354, ivar_354, ivar_358);
                 int64_t tmp5967 = mpz_cmp_ui(ivar_354, ivar_353);
                 result = (tmp5967 == 0);
} else {
                
                 release_ltedfapeg__ent_adt(ivar_223);
                 release_ltedfapegproof__parsetree_adt(ivar_225);
                 release_ltedfapegproof__parsetree_adt(ivar_224);
                 result = (bool_t) false;
};
} else {
               
                bool_t ivar_384;
                ltedfapeg__ent_adt_t ivar_390;
                ivar_225->count++;
                ivar_390 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_225);
                ivar_384 = (bool_t)r_ltedfapeg__failp((ltedfapeg__ent_adt_t)ivar_390);
                if (ivar_384){         
                 bool_t ivar_391;
                 ivar_223->count++;
                 ivar_391 = (bool_t)r_ltedfapeg__failp((ltedfapeg__ent_adt_t)ivar_223);
                 if (ivar_391){          
                  uint64_t ivar_396;
                  ivar_396 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_223);
                  mpz_ptr_t ivar_397;
                  uint8_t ivar_401;
                  ivar_401 = (uint8_t)1;
                  mpq_ptr_t ivar_402;
                  uint64_t ivar_423;
                  ltedfapeg__ent_adt_t ivar_410;
                  ivar_410 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_224);
                  ivar_423 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_410);
                  mpq_ptr_t ivar_418;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_418, ivar_423);
                  uint64_t ivar_422;
                  ltedfapeg__ent_adt_t ivar_416;
                  ivar_416 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_225);
                  ivar_422 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_416);
                  mpq_ptr_t ivar_419;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_419, ivar_422);
                  ivar_402 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_418, (mpq_ptr_t)ivar_419);
                  mpz_mk_set_q(ivar_397, ivar_402);
                  mpz_add_ui(ivar_397, ivar_397, ivar_401);
                  int64_t tmp5968 = mpz_cmp_ui(ivar_397, ivar_396);
                  result = (tmp5968 == 0);
} else {
                 
                  release_ltedfapeg__ent_adt(ivar_223);
                  release_ltedfapegproof__parsetree_adt(ivar_225);
                  release_ltedfapegproof__parsetree_adt(ivar_224);
                  result = (bool_t) false;
};
} else {
                
                 release_ltedfapegproof__parsetree_adt(ivar_224);
                 bool_t ivar_427;
                 ltedfapeg__ent_adt_t ivar_434;
                 ivar_434 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_225);
                 ivar_427 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_434);
                 if (ivar_427){          
                  result = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_223);
} else {
                 
                  release_ltedfapeg__ent_adt(ivar_223);
                  result = (bool_t) false;
};
};
};
} else {
              
               release_ltedfapeg__ent_adt(ivar_223);
               release_ltedfapegproof__parsetree_adt(ivar_225);
               release_ltedfapegproof__parsetree_adt(ivar_224);
               result = (bool_t) false;
};
} else {
             
              release_ltedfapegproof__parsetree_adt(ivar_225);
              release_ltedfapegproof__parsetree_adt(ivar_224);
              release_ltedfapegproof__qstack_adt(ivar_5);
              release_ltedfapeg__ent_adt(ivar_223);
              result = (bool_t) false;
};
} else {
            
             bool_t ivar_441;
             ltedfapeg__ent_adt_t ivar_447;
             ivar_224->count++;
             ivar_447 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_224);
             ivar_441 = (bool_t)r_ltedfapeg__failp((ltedfapeg__ent_adt_t)ivar_447);
             if (ivar_441){      
              bool_t ivar_448;
              ltedfapegproof_funtype_55_t ivar_463;
              ivar_2->count++;
              ivar_3->count++;
              ivar_463 = (ltedfapegproof_funtype_55_t)ltedfapegproof__good_parsetreep((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_50_t)ivar_3);
              ltedfapegproof__qstack_adt_t ivar_472;
              ivar_472 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (ltedfapegproof__qstack_adt_t)ivar_5);
              ivar_225->count++;
              ivar_448 = (bool_t)ivar_463->ftbl->mptr(ivar_463, ivar_472, ivar_242, ivar_7, ivar_225);
              ivar_463->ftbl->rptr(ivar_463);
              if (ivar_448){       
               bool_t ivar_476;
               ltedfapeg__ent_adt_t ivar_482;
               ivar_225->count++;
               ivar_482 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_225);
               ivar_476 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_482);
               if (ivar_476){        
                bool_t ivar_483;
                ivar_223->count++;
                ivar_483 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_223);
                if (ivar_483){         
                 uint64_t ivar_488;
                 ivar_488 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_223);
                 mpz_ptr_t ivar_489;
                 uint8_t ivar_493;
                 ivar_493 = (uint8_t)1;
                 mpq_ptr_t ivar_494;
                 uint64_t ivar_515;
                 ltedfapeg__ent_adt_t ivar_502;
                 ivar_502 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_224);
                 ivar_515 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_502);
                 mpq_ptr_t ivar_510;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_510, ivar_515);
                 uint64_t ivar_514;
                 ltedfapeg__ent_adt_t ivar_508;
                 ivar_508 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_225);
                 ivar_514 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_508);
                 mpq_ptr_t ivar_511;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_511, ivar_514);
                 ivar_494 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_510, (mpq_ptr_t)ivar_511);
                 mpz_mk_set_q(ivar_489, ivar_494);
                 mpz_add_ui(ivar_489, ivar_489, ivar_493);
                 int64_t tmp5969 = mpz_cmp_ui(ivar_489, ivar_488);
                 result = (tmp5969 == 0);
} else {
                
                 release_ltedfapeg__ent_adt(ivar_223);
                 release_ltedfapegproof__parsetree_adt(ivar_225);
                 release_ltedfapegproof__parsetree_adt(ivar_224);
                 result = (bool_t) false;
};
} else {
               
                bool_t ivar_519;
                ltedfapeg__ent_adt_t ivar_525;
                ivar_225->count++;
                ivar_525 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_225);
                ivar_519 = (bool_t)r_ltedfapeg__failp((ltedfapeg__ent_adt_t)ivar_525);
                if (ivar_519){         
                 bool_t ivar_526;
                 ivar_223->count++;
                 ivar_526 = (bool_t)r_ltedfapeg__failp((ltedfapeg__ent_adt_t)ivar_223);
                 if (ivar_526){          
                  uint64_t ivar_531;
                  ivar_531 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_223);
                  mpz_ptr_t ivar_532;
                  uint8_t ivar_536;
                  ivar_536 = (uint8_t)1;
                  mpq_ptr_t ivar_537;
                  uint64_t ivar_558;
                  ltedfapeg__ent_adt_t ivar_545;
                  ivar_545 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_224);
                  ivar_558 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_545);
                  mpq_ptr_t ivar_553;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_553, ivar_558);
                  uint64_t ivar_557;
                  ltedfapeg__ent_adt_t ivar_551;
                  ivar_551 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_225);
                  ivar_557 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_551);
                  mpq_ptr_t ivar_554;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_554, ivar_557);
                  ivar_537 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_553, (mpq_ptr_t)ivar_554);
                  mpz_mk_set_q(ivar_532, ivar_537);
                  mpz_add_ui(ivar_532, ivar_532, ivar_536);
                  int64_t tmp5970 = mpz_cmp_ui(ivar_532, ivar_531);
                  result = (tmp5970 == 0);
} else {
                 
                  release_ltedfapeg__ent_adt(ivar_223);
                  release_ltedfapegproof__parsetree_adt(ivar_225);
                  release_ltedfapegproof__parsetree_adt(ivar_224);
                  result = (bool_t) false;
};
} else {
                
                 release_ltedfapegproof__parsetree_adt(ivar_224);
                 bool_t ivar_562;
                 ltedfapeg__ent_adt_t ivar_569;
                 ivar_569 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_225);
                 ivar_562 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_569);
                 if (ivar_562){          
                  result = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_223);
} else {
                 
                  release_ltedfapeg__ent_adt(ivar_223);
                  result = (bool_t) false;
};
};
};
} else {
              
               release_ltedfapeg__ent_adt(ivar_223);
               release_ltedfapegproof__parsetree_adt(ivar_225);
               release_ltedfapegproof__parsetree_adt(ivar_224);
               result = (bool_t) false;
};
} else {
             
              release_ltedfapegproof__qstack_adt(ivar_5);
              release_ltedfapegproof__parsetree_adt(ivar_225);
              bool_t ivar_575;
              ltedfapeg__ent_adt_t ivar_582;
              ivar_582 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_224);
              ivar_575 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_582);
              if (ivar_575){       
               result = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_223);
} else {
              
               release_ltedfapeg__ent_adt(ivar_223);
               result = (bool_t) false;
};
};
};
} else {
           
            release_ltedfapegproof__parsetree_adt(ivar_225);
            release_ltedfapegproof__parsetree_adt(ivar_224);
            release_ltedfapegproof__qstack_adt(ivar_5);
            release_ltedfapeg__ent_adt(ivar_223);
            result = (bool_t) false;
};
} else {
           
           release_ltedfapegproof__parsetree_adt(ivar_225);
           release_ltedfapegproof__parsetree_adt(ivar_224);
           release_ltedfapegproof__qstack_adt(ivar_5);
           release_ltedfapeg__ent_adt(ivar_223);
           release_ltedfapeg__prepeg_adt(ivar_235);
           result = (bool_t) false;
};
};
};

        return result;
}

ltedfapegproof_closure_56_t new_ltedfapegproof_closure_56(void){
        static struct ltedfapegproof_funtype_55_ftbl_s ftbl = {.fptr = (bool_t (*)(ltedfapegproof_funtype_55_t, ltedfapegproof_record_54_t))&f_ltedfapegproof_closure_56, .mptr = (bool_t (*)(ltedfapegproof_funtype_55_t, ltedfapegproof__qstack_adt_t, uint8_t, uint32_t, ltedfapegproof__parsetree_adt_t))&m_ltedfapegproof_closure_56, .rptr =  (void (*)(ltedfapegproof_funtype_55_t))&release_ltedfapegproof_closure_56, .cptr = (ltedfapegproof_funtype_55_t (*)(ltedfapegproof_funtype_55_t))&copy_ltedfapegproof_closure_56};
        ltedfapegproof_closure_56_t tmp = (ltedfapegproof_closure_56_t) safe_malloc(sizeof(struct ltedfapegproof_closure_56_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_56(ltedfapegproof_funtype_55_t closure){
        ltedfapegproof_closure_56_t x = (ltedfapegproof_closure_56_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_array_50(x->fvar_1);
         release_ltedfapeg__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_56_t copy_ltedfapegproof_closure_56(ltedfapegproof_closure_56_t x){
        ltedfapegproof_closure_56_t y = new_ltedfapegproof_closure_56();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_55_htbl_t new_htbl = (ltedfapegproof_funtype_55_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_55_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_55_hashentry_t * new_data = (ltedfapegproof_funtype_55_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_55_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_55_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltedfapegproof_funtype_57(ltedfapegproof_funtype_57_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_57_t copy_ltedfapegproof_funtype_57(ltedfapegproof_funtype_57_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_57(ltedfapegproof_funtype_57_t x, ltedfapegproof_funtype_57_t y){
        return false;}

char* json_ltedfapegproof_funtype_57(ltedfapegproof_funtype_57_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_57\""); return result;}


ltedfapegproof_record_58_t new_ltedfapegproof_record_58(void){
        ltedfapegproof_record_58_t tmp = (ltedfapegproof_record_58_t) safe_malloc(sizeof(struct ltedfapegproof_record_58_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_58(ltedfapegproof_record_58_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_array_52(x->scaf);
         release_ltedfapeg__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_58_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_58((ltedfapegproof_record_58_t)x);
}

ltedfapegproof_record_58_t copy_ltedfapegproof_record_58(ltedfapegproof_record_58_t x){
        ltedfapegproof_record_58_t y = new_ltedfapegproof_record_58();
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->depth = (uint64_t)x->depth;
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->lflag = (bool_t)x->lflag;
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_58(ltedfapegproof_record_58_t x, ltedfapegproof_record_58_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltedfapegproof_array_52(x->scaf, y->scaf);
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->stack, y->stack);
        tmp = tmp && x->lflag == y->lflag;
        return tmp;}

char * json_ltedfapegproof_record_58(ltedfapegproof_record_58_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(16);
         sprintf(fld0, "\"scaf\" : ");
        tmp[0] = safe_strcat(fld0, json_ltedfapegproof_array_52(x->scaf));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"depth\" : ");
        tmp[1] = safe_strcat(fld1, json_uint64(x->depth));
        char * fld2 = safe_malloc(17);
         sprintf(fld2, "\"stack\" : ");
        tmp[2] = safe_strcat(fld2, json_ltedfapeg__ent_adt(x->stack));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"lflag\" : ");
        tmp[3] = safe_strcat(fld3, json_bool(x->lflag));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_58_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_58_t T){
        return equal_ltedfapegproof_record_58((ltedfapegproof_record_58_t)x, (ltedfapegproof_record_58_t)y);
}

char * json_ltedfapegproof_record_58_ptr(pointer_t x, actual_ltedfapegproof_record_58_t T){
        return json_ltedfapegproof_record_58((ltedfapegproof_record_58_t)x);
}

actual_ltedfapegproof_record_58_t actual_ltedfapegproof_record_58(){
        actual_ltedfapegproof_record_58_t new = (actual_ltedfapegproof_record_58_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_58_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_58_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_58_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_58_ptr);
 

 
        return new;
 };

ltedfapegproof_record_58_t update_ltedfapegproof_record_58_scaf(ltedfapegproof_record_58_t x, ltedfapegproof_array_52_t v){
        ltedfapegproof_record_58_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_ltedfapegproof_array_52(x->scaf);};}
        else {y = copy_ltedfapegproof_record_58(x); x->count--; y->scaf->count--;};
        y->scaf = (ltedfapegproof_array_52_t)v;
        return y;}

ltedfapegproof_record_58_t update_ltedfapegproof_record_58_depth(ltedfapegproof_record_58_t x, uint64_t v){
        ltedfapegproof_record_58_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_58(x); x->count--;};
        y->depth = (uint64_t)v;
        return y;}

ltedfapegproof_record_58_t update_ltedfapegproof_record_58_stack(ltedfapegproof_record_58_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_58_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_ltedfapeg__ent_adt(x->stack);};}
        else {y = copy_ltedfapegproof_record_58(x); x->count--; y->stack->count--;};
        y->stack = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_58_t update_ltedfapegproof_record_58_lflag(ltedfapegproof_record_58_t x, bool_t v){
        ltedfapegproof_record_58_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_58(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}




ltedfapegproof_record_59_t new_ltedfapegproof_record_59(void){
        ltedfapegproof_record_59_t tmp = (ltedfapegproof_record_59_t) safe_malloc(sizeof(struct ltedfapegproof_record_59_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_59(ltedfapegproof_record_59_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_record_58(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_59_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_59((ltedfapegproof_record_59_t)x);
}

ltedfapegproof_record_59_t copy_ltedfapegproof_record_59(ltedfapegproof_record_59_t x){
        ltedfapegproof_record_59_t y = new_ltedfapegproof_record_59();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = (uint32_t)x->project_3;
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_59(ltedfapegproof_record_59_t x, ltedfapegproof_record_59_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltedfapegproof_record_58(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        return tmp;}

char * json_ltedfapegproof_record_59(ltedfapegproof_record_59_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltedfapegproof_record_58(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_59_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_59_t T){
        return equal_ltedfapegproof_record_59((ltedfapegproof_record_59_t)x, (ltedfapegproof_record_59_t)y);
}

char * json_ltedfapegproof_record_59_ptr(pointer_t x, actual_ltedfapegproof_record_59_t T){
        return json_ltedfapegproof_record_59((ltedfapegproof_record_59_t)x);
}

actual_ltedfapegproof_record_59_t actual_ltedfapegproof_record_59(){
        actual_ltedfapegproof_record_59_t new = (actual_ltedfapegproof_record_59_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_59_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_59_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_59_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_59_ptr);
 

 
        return new;
 };

ltedfapegproof_record_59_t update_ltedfapegproof_record_59_project_1(ltedfapegproof_record_59_t x, ltedfapegproof_record_58_t v){
        ltedfapegproof_record_59_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltedfapegproof_record_58(x->project_1);};}
        else {y = copy_ltedfapegproof_record_59(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltedfapegproof_record_58_t)v;
        return y;}

ltedfapegproof_record_59_t update_ltedfapegproof_record_59_project_2(ltedfapegproof_record_59_t x, uint8_t v){
        ltedfapegproof_record_59_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_59(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

ltedfapegproof_record_59_t update_ltedfapegproof_record_59_project_3(ltedfapegproof_record_59_t x, uint32_t v){
        ltedfapegproof_record_59_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_59(x); x->count--;};
        y->project_3 = (uint32_t)v;
        return y;}



void release_ltedfapegproof_funtype_60(ltedfapegproof_funtype_60_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_60_t copy_ltedfapegproof_funtype_60(ltedfapegproof_funtype_60_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_60(ltedfapegproof_funtype_60_t x, ltedfapegproof_funtype_60_t y){
        return false;}

char* json_ltedfapegproof_funtype_60(ltedfapegproof_funtype_60_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_60\""); return result;}


ltedfapegproof__parsetree_adt_t f_ltedfapegproof_closure_61(struct ltedfapegproof_closure_61_s * closure, ltedfapegproof_record_59_t bvar){
        ltedfapegproof_record_58_t bvar_1;
        bvar_1 = (ltedfapegproof_record_58_t)bvar->project_1;
        bvar->project_1->count++;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        uint32_t bvar_3;
        bvar_3 = (uint32_t)bvar->project_3;
        release_ltedfapegproof_record_59(bvar);
        ltedfapegproof__parsetree_adt_t result = h_ltedfapegproof_closure_61(bvar_1, bvar_2, bvar_3, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        release_ltedfapegproof_record_58(bvar_1);
        return result;}

ltedfapegproof__parsetree_adt_t m_ltedfapegproof_closure_61(struct ltedfapegproof_closure_61_s * closure, ltedfapegproof_record_58_t bvar_1, uint8_t bvar_2, uint32_t bvar_3){
        return h_ltedfapegproof_closure_61(bvar_1, bvar_2, bvar_3, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

ltedfapegproof__parsetree_adt_t h_ltedfapegproof_closure_61(ltedfapegproof_record_58_t ivar_8, uint8_t ivar_10, uint32_t ivar_11, uint32_t ivar_1, uint8_t ivar_5, uint32_t ivar_4, ltedfapegproof_array_50_t ivar_3, ltedfapeg__lang_spec_t ivar_2){
        ltedfapegproof__parsetree_adt_t result;
        bool_t ivar_12;
        ltedfapeg__ent_adt_t ivar_26;
        ltedfapegproof_array_51_t ivar_16;
        ltedfapegproof_array_52_t ivar_20;
        ivar_20 = (ltedfapegproof_array_52_t)ivar_8->scaf;
        ivar_20->count++;
        ivar_16 = (ltedfapegproof_array_51_t)ivar_20->elems[ivar_11];
        ivar_16->count++;
        release_ltedfapegproof_array_52(ivar_20);
        ivar_26 = (ltedfapeg__ent_adt_t)ivar_16->elems[ivar_10];
        ivar_26->count++;
        release_ltedfapegproof_array_51(ivar_16);
        ivar_12 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_26);
        if (ivar_12){ 
             /* pendfun */ ltedfapegproof_funtype_62_t ivar_27;
             ltedfapegproof_closure_63_t cl6156;
             cl6156 = new_ltedfapegproof_closure_63();
             ivar_27 = (ltedfapegproof_funtype_62_t)cl6156;
             /* A */ ltedfapegproof_funtype_64_t ivar_32;
             ltedfapegproof_closure_65_t cl6157;
             cl6157 = new_ltedfapegproof_closure_65();
             cl6157->fvar_1 = (uint32_t)ivar_1;
             cl6157->fvar_2 = (ltedfapegproof_funtype_62_t)ivar_27;
             if (cl6157->fvar_2 != NULL) cl6157->fvar_2->count++;
             release_ltedfapegproof_funtype_62(ivar_27);
             ivar_32 = (ltedfapegproof_funtype_64_t)cl6157;
             ltedfapegproof_array_52_t ivar_58;
             //copying to ltedfapegproof_array_52 from ltedfapegproof_funtype_64;
             uint32_t tmp6158;
             //copying to uint32 from uint32;
             tmp6158 = (uint32_t)ivar_1;
             tmp6158 += 1;
             ivar_58 = new_ltedfapegproof_array_52(tmp6158);
             for (uint32_t index_83 = 0; index_83 < tmp6158; index_83++){
           uint32_t tmp6159;
           tmp6159 = (uint32_t)255;
           ivar_58->elems[index_83] = new_ltedfapegproof_array_51(tmp6159);
           for (uint32_t index_84 = 0; index_84 < tmp6159; index_84++){
           ivar_58->elems[index_83]->elems[index_84] = (ltedfapeg__ent_adt_t)ivar_32->ftbl->fptr(ivar_32, index_83)->ftbl->fptr(ivar_32->ftbl->fptr(ivar_32, index_83), index_84);
           if (ivar_58->elems[index_83]->elems[index_84] != NULL) ivar_58->elems[index_83]->elems[index_84]->count++;
           };
             };
             release_ltedfapegproof_funtype_64(ivar_32);
             ltedfapegproof__qstack_adt_t ivar_60;
             ivar_60 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qempty();
             if (ivar_60 != NULL) ivar_60->count++;
             ivar_2->count++;
             ivar_3->count++;
             result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildloop((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_58_t)ivar_8, (ltedfapegproof_array_52_t)ivar_58, (ltedfapegproof__qstack_adt_t)ivar_60, (uint8_t)ivar_10, (uint32_t)ivar_11);
} else {
        
             ltedfapegproof__qstack_adt_t ivar_80;
             ivar_80 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qempty();
             if (ivar_80 != NULL) ivar_80->count++;
             ivar_2->count++;
             ivar_3->count++;
             result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildtree((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_58_t)ivar_8, (ltedfapegproof__qstack_adt_t)ivar_80, (uint8_t)ivar_10, (uint32_t)ivar_11);
};

        return result;
}

ltedfapegproof_closure_61_t new_ltedfapegproof_closure_61(void){
        static struct ltedfapegproof_funtype_60_ftbl_s ftbl = {.fptr = (ltedfapegproof__parsetree_adt_t (*)(ltedfapegproof_funtype_60_t, ltedfapegproof_record_59_t))&f_ltedfapegproof_closure_61, .mptr = (ltedfapegproof__parsetree_adt_t (*)(ltedfapegproof_funtype_60_t, ltedfapegproof_record_58_t, uint8_t, uint32_t))&m_ltedfapegproof_closure_61, .rptr =  (void (*)(ltedfapegproof_funtype_60_t))&release_ltedfapegproof_closure_61, .cptr = (ltedfapegproof_funtype_60_t (*)(ltedfapegproof_funtype_60_t))&copy_ltedfapegproof_closure_61};
        ltedfapegproof_closure_61_t tmp = (ltedfapegproof_closure_61_t) safe_malloc(sizeof(struct ltedfapegproof_closure_61_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_61(ltedfapegproof_funtype_60_t closure){
        ltedfapegproof_closure_61_t x = (ltedfapegproof_closure_61_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_array_50(x->fvar_4);
         release_ltedfapeg__lang_spec(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_61_t copy_ltedfapegproof_closure_61(ltedfapegproof_closure_61_t x){
        ltedfapegproof_closure_61_t y = new_ltedfapegproof_closure_61();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint8_t)x->fvar_2;
        y->fvar_3 = (uint32_t)x->fvar_3;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_60_htbl_t new_htbl = (ltedfapegproof_funtype_60_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_60_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_60_hashentry_t * new_data = (ltedfapegproof_funtype_60_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_60_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_60_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltedfapegproof_funtype_62(ltedfapegproof_funtype_62_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_62_t copy_ltedfapegproof_funtype_62(ltedfapegproof_funtype_62_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltedfapegproof_funtype_62(ltedfapegproof_funtype_62_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltedfapegproof_funtype_62_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        keyzero = (data.key == 0);
        bool_t keymatch;
        keymatch = (data.key == i);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                keyzero = (data.key == 0);

                keymatch = (data.key == i);
                }
        return hashindex;
        }

ltedfapegproof_funtype_62_t dupdate_ltedfapegproof_funtype_62(ltedfapegproof_funtype_62_t a, uint8_t i, ltedfapeg__ent_adt_t v){
        ltedfapegproof_funtype_62_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltedfapegproof_funtype_62_htbl_t)safe_malloc(sizeof(struct ltedfapegproof_funtype_62_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltedfapegproof_funtype_62_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltedfapegproof_funtype_62_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltedfapegproof_funtype_62_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltedfapegproof_funtype_62_hashentry_t * new_data = (ltedfapegproof_funtype_62_hashentry_t *)safe_malloc(new_size * sizeof(struct ltedfapegproof_funtype_62_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        keyzero = (data[j].key == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                keyzero = (new_data[new_loc].key == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        keyzero = (new_data[new_loc].key == 0);
                                }
                                new_data[new_loc].key = (uint8_t)data[j].key;
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (ltedfapeg__ent_adt_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_ltedfapegproof_funtype_62(htbl, i, ihash);
        ltedfapegproof_funtype_62_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ltedfapeg__ent_adt_t)v; htbl->num_entries++;}
            else {ltedfapeg__ent_adt_t tempvalue;tempvalue = (ltedfapeg__ent_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ltedfapeg__ent_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ltedfapeg__ent_adt(tempvalue);};
        return a;

}

ltedfapegproof_funtype_62_t update_ltedfapegproof_funtype_62(ltedfapegproof_funtype_62_t a, uint8_t i, ltedfapeg__ent_adt_t v){
        if (a->count == 1){
                return dupdate_ltedfapegproof_funtype_62(a, i, v);
            } else {
                ltedfapegproof_funtype_62_t x = copy_ltedfapegproof_funtype_62(a);
                a->count--;
                return dupdate_ltedfapegproof_funtype_62(x, i, v);
            }}

bool_t equal_ltedfapegproof_funtype_62(ltedfapegproof_funtype_62_t x, ltedfapegproof_funtype_62_t y){
        return false;}

char* json_ltedfapegproof_funtype_62(ltedfapegproof_funtype_62_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_62\""); return result;}


ltedfapeg__ent_adt_t f_ltedfapegproof_closure_63(struct ltedfapegproof_closure_63_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        ltedfapegproof_funtype_62_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_ltedfapegproof_funtype_62(htbl, bvar, hash);
        ltedfapegproof_funtype_62_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            ltedfapeg__ent_adt_t result;
            result = (ltedfapeg__ent_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_ltedfapegproof_closure_63(bvar);};

return h_ltedfapegproof_closure_63(bvar);}

ltedfapeg__ent_adt_t m_ltedfapegproof_closure_63(struct ltedfapegproof_closure_63_s * closure, uint8_t bvar){
        return h_ltedfapegproof_closure_63(bvar);}

ltedfapeg__ent_adt_t h_ltedfapegproof_closure_63(uint8_t ivar_31){
        ltedfapeg__ent_adt_t result;
        result = (ltedfapeg__ent_adt_t)ltedfapeg__pending();
        if (result != NULL) result->count++;

        return result;
}

ltedfapegproof_closure_63_t new_ltedfapegproof_closure_63(void){
        static struct ltedfapegproof_funtype_62_ftbl_s ftbl = {.fptr = (ltedfapeg__ent_adt_t (*)(ltedfapegproof_funtype_62_t, uint8_t))&f_ltedfapegproof_closure_63, .mptr = (ltedfapeg__ent_adt_t (*)(ltedfapegproof_funtype_62_t, uint8_t))&m_ltedfapegproof_closure_63, .rptr =  (void (*)(ltedfapegproof_funtype_62_t))&release_ltedfapegproof_closure_63, .cptr = (ltedfapegproof_funtype_62_t (*)(ltedfapegproof_funtype_62_t))&copy_ltedfapegproof_closure_63};
        ltedfapegproof_closure_63_t tmp = (ltedfapegproof_closure_63_t) safe_malloc(sizeof(struct ltedfapegproof_closure_63_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_63(ltedfapegproof_funtype_62_t closure){
        ltedfapegproof_closure_63_t x = (ltedfapegproof_closure_63_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_63_t copy_ltedfapegproof_closure_63(ltedfapegproof_closure_63_t x){
        ltedfapegproof_closure_63_t y = new_ltedfapegproof_closure_63();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            ltedfapegproof_funtype_62_htbl_t new_htbl = (ltedfapegproof_funtype_62_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_62_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_62_hashentry_t * new_data = (ltedfapegproof_funtype_62_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_62_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_62_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltedfapegproof_funtype_64(ltedfapegproof_funtype_64_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_64_t copy_ltedfapegproof_funtype_64(ltedfapegproof_funtype_64_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltedfapegproof_funtype_64(ltedfapegproof_funtype_64_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltedfapegproof_funtype_64_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        keyzero = (data.key == 0);
        bool_t keymatch;
        keymatch = (data.key == i);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                keyzero = (data.key == 0);

                keymatch = (data.key == i);
                }
        return hashindex;
        }

ltedfapegproof_funtype_64_t dupdate_ltedfapegproof_funtype_64(ltedfapegproof_funtype_64_t a, uint32_t i, ltedfapegproof_funtype_62_t v){
        ltedfapegproof_funtype_64_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltedfapegproof_funtype_64_htbl_t)safe_malloc(sizeof(struct ltedfapegproof_funtype_64_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltedfapegproof_funtype_64_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltedfapegproof_funtype_64_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltedfapegproof_funtype_64_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltedfapegproof_funtype_64_hashentry_t * new_data = (ltedfapegproof_funtype_64_hashentry_t *)safe_malloc(new_size * sizeof(struct ltedfapegproof_funtype_64_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        keyzero = (data[j].key == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                keyzero = (new_data[new_loc].key == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        keyzero = (new_data[new_loc].key == 0);
                                }
                                new_data[new_loc].key = (uint32_t)data[j].key;
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (ltedfapegproof_funtype_62_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_ltedfapegproof_funtype_64(htbl, i, ihash);
        ltedfapegproof_funtype_64_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ltedfapegproof_funtype_62_t)v; htbl->num_entries++;}
            else {ltedfapegproof_funtype_62_t tempvalue;tempvalue = (ltedfapegproof_funtype_62_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ltedfapegproof_funtype_62_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ltedfapegproof_funtype_62(tempvalue);};
        return a;

}

ltedfapegproof_funtype_64_t update_ltedfapegproof_funtype_64(ltedfapegproof_funtype_64_t a, uint32_t i, ltedfapegproof_funtype_62_t v){
        if (a->count == 1){
                return dupdate_ltedfapegproof_funtype_64(a, i, v);
            } else {
                ltedfapegproof_funtype_64_t x = copy_ltedfapegproof_funtype_64(a);
                a->count--;
                return dupdate_ltedfapegproof_funtype_64(x, i, v);
            }}

bool_t equal_ltedfapegproof_funtype_64(ltedfapegproof_funtype_64_t x, ltedfapegproof_funtype_64_t y){
        return false;}

char* json_ltedfapegproof_funtype_64(ltedfapegproof_funtype_64_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_64\""); return result;}


ltedfapegproof_funtype_62_t f_ltedfapegproof_closure_65(struct ltedfapegproof_closure_65_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        ltedfapegproof_funtype_64_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_ltedfapegproof_funtype_64(htbl, bvar, hash);
        ltedfapegproof_funtype_64_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            ltedfapegproof_funtype_62_t result;
            result = (ltedfapegproof_funtype_62_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_ltedfapegproof_closure_65(bvar, closure->fvar_1, closure->fvar_2);};

return h_ltedfapegproof_closure_65(bvar, closure->fvar_1, closure->fvar_2);}

ltedfapegproof_funtype_62_t m_ltedfapegproof_closure_65(struct ltedfapegproof_closure_65_s * closure, uint32_t bvar){
        return h_ltedfapegproof_closure_65(bvar, closure->fvar_1, closure->fvar_2);}

ltedfapegproof_funtype_62_t h_ltedfapegproof_closure_65(uint32_t ivar_39, uint32_t ivar_1, ltedfapegproof_funtype_62_t ivar_27){
        ltedfapegproof_funtype_62_t result;
        //copying to ltedfapegproof_funtype_62 from ltedfapegproof_funtype_62;
        result = (ltedfapegproof_funtype_62_t)ivar_27;
        if (result != NULL) result->count++;

        return result;
}

ltedfapegproof_closure_65_t new_ltedfapegproof_closure_65(void){
        static struct ltedfapegproof_funtype_64_ftbl_s ftbl = {.fptr = (ltedfapegproof_funtype_62_t (*)(ltedfapegproof_funtype_64_t, uint32_t))&f_ltedfapegproof_closure_65, .mptr = (ltedfapegproof_funtype_62_t (*)(ltedfapegproof_funtype_64_t, uint32_t))&m_ltedfapegproof_closure_65, .rptr =  (void (*)(ltedfapegproof_funtype_64_t))&release_ltedfapegproof_closure_65, .cptr = (ltedfapegproof_funtype_64_t (*)(ltedfapegproof_funtype_64_t))&copy_ltedfapegproof_closure_65};
        ltedfapegproof_closure_65_t tmp = (ltedfapegproof_closure_65_t) safe_malloc(sizeof(struct ltedfapegproof_closure_65_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_65(ltedfapegproof_funtype_64_t closure){
        ltedfapegproof_closure_65_t x = (ltedfapegproof_closure_65_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_62(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_65_t copy_ltedfapegproof_closure_65(ltedfapegproof_closure_65_t x){
        ltedfapegproof_closure_65_t y = new_ltedfapegproof_closure_65();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_64_htbl_t new_htbl = (ltedfapegproof_funtype_64_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_64_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_64_hashentry_t * new_data = (ltedfapegproof_funtype_64_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_64_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_64_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

bool_t ltedfapegproof__defentp(ltedfapeg__ent_adt_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        ivar_1->count++;
        ivar_2 = (bool_t)r_ltedfapeg__failp((ltedfapeg__ent_adt_t)ivar_1);
        if (ivar_2){ 
             release_ltedfapeg__ent_adt(ivar_1);
             result = (bool_t) true;
} else {
        
             bool_t ivar_7;
             ivar_1->count++;
             ivar_7 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_1);
             if (ivar_7){  
           release_ltedfapeg__ent_adt(ivar_1);
           result = (bool_t) true;
} else {
             
           result = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_1);
};
};

        
        return result;
}

bool_t r_ltedfapegproof__zerop(ltedfapegproof__parsetree_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltedfapegproof__parsetree_adt_index;
        release_ltedfapegproof__parsetree_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

bool_t r_ltedfapegproof__onep(ltedfapegproof__parsetree_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltedfapegproof__parsetree_adt_index;
        release_ltedfapegproof__parsetree_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

bool_t r_ltedfapegproof__twop(ltedfapegproof__parsetree_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)2;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltedfapegproof__parsetree_adt_index;
        release_ltedfapegproof__parsetree_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

ltedfapegproof__parsetree_adt_t update_ltedfapegproof__parsetree_adt_entry(ltedfapegproof__parsetree_adt_t ivar_1, ltedfapeg__ent_adt_t ivar_11){
        ltedfapegproof__parsetree_adt_t  result;
        bool_t ivar_13;
        uint32_t ivar_14;
        ivar_14 = (uint32_t)ivar_1->ltedfapegproof__parsetree_adt_index;
        uint32_t ivar_15;
        ivar_15 = (uint32_t)0;
        ivar_13 = (ivar_14 == ivar_15);
        if (ivar_13){ 
             ltedfapegproof__zero_t ivar_12;
             //copying to ltedfapegproof__zero from ltedfapegproof__parsetree_adt;
             ivar_12 = (ltedfapegproof__zero_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_ltedfapegproof__parsetree_adt(ivar_1);
             result = (ltedfapegproof__parsetree_adt_t)update_ltedfapegproof__zero_entry(ivar_12, ivar_11);
} else {
        
             bool_t ivar_17;
             uint32_t ivar_18;
             ivar_18 = (uint32_t)ivar_1->ltedfapegproof__parsetree_adt_index;
             uint32_t ivar_19;
             ivar_19 = (uint32_t)1;
             ivar_17 = (ivar_18 == ivar_19);
             if (ivar_17){  
           ltedfapegproof__one_t ivar_16;
           //copying to ltedfapegproof__one from ltedfapegproof__parsetree_adt;
           ivar_16 = (ltedfapegproof__one_t)ivar_1;
           if (ivar_16 != NULL) ivar_16->count++;
           release_ltedfapegproof__parsetree_adt(ivar_1);
           result = (ltedfapegproof__parsetree_adt_t)update_ltedfapegproof__one_entry(ivar_16, ivar_11);
} else {
             
           ltedfapegproof__two_t ivar_20;
           //copying to ltedfapegproof__two from ltedfapegproof__parsetree_adt;
           ivar_20 = (ltedfapegproof__two_t)ivar_1;
           if (ivar_20 != NULL) ivar_20->count++;
           release_ltedfapegproof__parsetree_adt(ivar_1);
           result = (ltedfapegproof__parsetree_adt_t)update_ltedfapegproof__two_entry(ivar_20, ivar_11);
};
};

        
        return result;
}

ltedfapeg__ent_adt_t ltedfapegproof__parsetree_adt_entry(ltedfapegproof__parsetree_adt_t ivar_1){
        ltedfapeg__ent_adt_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->ltedfapegproof__parsetree_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)0;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             ltedfapegproof__zero_t ivar_2;
             //copying to ltedfapegproof__zero from ltedfapegproof__parsetree_adt;
             ivar_2 = (ltedfapegproof__zero_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_ltedfapegproof__parsetree_adt(ivar_1);
             result = (ltedfapeg__ent_adt_t)ivar_2->entry;
             result->count++;
             release_ltedfapegproof__zero(ivar_2);
} else {
        
             bool_t ivar_7;
             uint32_t ivar_8;
             ivar_8 = (uint32_t)ivar_1->ltedfapegproof__parsetree_adt_index;
             uint32_t ivar_9;
             ivar_9 = (uint32_t)1;
             ivar_7 = (ivar_8 == ivar_9);
             if (ivar_7){  
           ltedfapegproof__one_t ivar_6;
           //copying to ltedfapegproof__one from ltedfapegproof__parsetree_adt;
           ivar_6 = (ltedfapegproof__one_t)ivar_1;
           if (ivar_6 != NULL) ivar_6->count++;
           release_ltedfapegproof__parsetree_adt(ivar_1);
           result = (ltedfapeg__ent_adt_t)ivar_6->entry;
           result->count++;
           release_ltedfapegproof__one(ivar_6);
} else {
             
           ltedfapegproof__two_t ivar_10;
           //copying to ltedfapegproof__two from ltedfapegproof__parsetree_adt;
           ivar_10 = (ltedfapegproof__two_t)ivar_1;
           if (ivar_10 != NULL) ivar_10->count++;
           release_ltedfapegproof__parsetree_adt(ivar_1);
           result = (ltedfapeg__ent_adt_t)ivar_10->entry;
           result->count++;
           release_ltedfapegproof__two(ivar_10);
};
};

        
        return result;
}

ltedfapegproof__parsetree_adt_t update_ltedfapegproof__parsetree_adt_subone(ltedfapegproof__parsetree_adt_t ivar_1, ltedfapegproof__parsetree_adt_t ivar_7){
        ltedfapegproof__parsetree_adt_t  result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->ltedfapegproof__parsetree_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)1;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             ltedfapegproof__one_t ivar_8;
             //copying to ltedfapegproof__one from ltedfapegproof__parsetree_adt;
             ivar_8 = (ltedfapegproof__one_t)ivar_1;
             if (ivar_8 != NULL) ivar_8->count++;
             release_ltedfapegproof__parsetree_adt(ivar_1);
             result = (ltedfapegproof__parsetree_adt_t)update_ltedfapegproof__one_subone(ivar_8, ivar_7);
} else {
        
             ltedfapegproof__two_t ivar_12;
             //copying to ltedfapegproof__two from ltedfapegproof__parsetree_adt;
             ivar_12 = (ltedfapegproof__two_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_ltedfapegproof__parsetree_adt(ivar_1);
             result = (ltedfapegproof__parsetree_adt_t)update_ltedfapegproof__two_subone(ivar_12, ivar_7);
};

        
        return result;
}

ltedfapegproof__parsetree_adt_t ltedfapegproof__parsetree_adt_subone(ltedfapegproof__parsetree_adt_t ivar_1){
        ltedfapegproof__parsetree_adt_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->ltedfapegproof__parsetree_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)1;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             ltedfapegproof__one_t ivar_2;
             //copying to ltedfapegproof__one from ltedfapegproof__parsetree_adt;
             ivar_2 = (ltedfapegproof__one_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_ltedfapegproof__parsetree_adt(ivar_1);
             result = (ltedfapegproof__parsetree_adt_t)ivar_2->subone;
             result->count++;
             release_ltedfapegproof__one(ivar_2);
} else {
        
             ltedfapegproof__two_t ivar_6;
             //copying to ltedfapegproof__two from ltedfapegproof__parsetree_adt;
             ivar_6 = (ltedfapegproof__two_t)ivar_1;
             if (ivar_6 != NULL) ivar_6->count++;
             release_ltedfapegproof__parsetree_adt(ivar_1);
             result = (ltedfapegproof__parsetree_adt_t)ivar_6->subone;
             result->count++;
             release_ltedfapegproof__two(ivar_6);
};

        
        return result;
}

ltedfapegproof__two_t update_ltedfapegproof__parsetree_adt_subtwo(ltedfapegproof__parsetree_adt_t ivar_1, ltedfapegproof__parsetree_adt_t ivar_3){
        ltedfapegproof__two_t  result;
        ltedfapegproof__two_t ivar_2;
        //copying to ltedfapegproof__two from ltedfapegproof__parsetree_adt;
        ivar_2 = (ltedfapegproof__two_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltedfapegproof__parsetree_adt(ivar_1);
        result = (ltedfapegproof__two_t)update_ltedfapegproof__two_subtwo(ivar_2, ivar_3);

        
        return result;
}

ltedfapegproof__parsetree_adt_t ltedfapegproof__parsetree_adt_subtwo(ltedfapegproof__parsetree_adt_t ivar_1){
        ltedfapegproof__parsetree_adt_t  result;
        ltedfapegproof__two_t ivar_2;
        //copying to ltedfapegproof__two from ltedfapegproof__parsetree_adt;
        ivar_2 = (ltedfapegproof__two_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltedfapegproof__parsetree_adt(ivar_1);
        result = (ltedfapegproof__parsetree_adt_t)ivar_2->subtwo;
        result->count++;
        release_ltedfapegproof__two(ivar_2);

        
        return result;
}

ltedfapegproof__parsetree_adt_t ltedfapegproof__zero(ltedfapeg__ent_adt_t ivar_2){
        ltedfapegproof__parsetree_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        ltedfapegproof__zero_t tmp5745 = new_ltedfapegproof__zero();;
        result = (ltedfapegproof__parsetree_adt_t)tmp5745;
        tmp5745->ltedfapegproof__parsetree_adt_index = (uint8_t)ivar_1;
        tmp5745->entry = (ltedfapeg__ent_adt_t)ivar_2;

        
        return result;
}

ltedfapegproof__parsetree_adt_t ltedfapegproof__one(ltedfapeg__ent_adt_t ivar_2, ltedfapegproof__parsetree_adt_t ivar_3){
        ltedfapegproof__parsetree_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        ltedfapegproof__one_t tmp5746 = new_ltedfapegproof__one();;
        result = (ltedfapegproof__parsetree_adt_t)tmp5746;
        tmp5746->ltedfapegproof__parsetree_adt_index = (uint8_t)ivar_1;
        tmp5746->entry = (ltedfapeg__ent_adt_t)ivar_2;
        tmp5746->subone = (ltedfapegproof__parsetree_adt_t)ivar_3;

        
        return result;
}

ltedfapegproof__parsetree_adt_t ltedfapegproof__two(ltedfapeg__ent_adt_t ivar_2, ltedfapegproof__parsetree_adt_t ivar_3, ltedfapegproof__parsetree_adt_t ivar_4){
        ltedfapegproof__parsetree_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)2;
        ltedfapegproof__two_t tmp5747 = new_ltedfapegproof__two();;
        result = (ltedfapegproof__parsetree_adt_t)tmp5747;
        tmp5747->ltedfapegproof__parsetree_adt_index = (uint8_t)ivar_1;
        tmp5747->entry = (ltedfapeg__ent_adt_t)ivar_2;
        tmp5747->subone = (ltedfapegproof__parsetree_adt_t)ivar_3;
        tmp5747->subtwo = (ltedfapegproof__parsetree_adt_t)ivar_4;

        
        return result;
}

ltedfapegproof_funtype_4_t ltedfapegproof__parsetree_ord(void){
        ltedfapegproof_funtype_4_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

uint8_t ltedfapegproof__ord__1(ltedfapegproof__parsetree_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_7;
        ivar_1->count++;
        ivar_7 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_1);
        if (ivar_7){ 
             release_ltedfapegproof__parsetree_adt(ivar_1);
             result = (uint8_t)0;
} else {
        
             bool_t ivar_19;
             ivar_1->count++;
             ivar_19 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_1);
             if (ivar_19){  
           result = (uint8_t)1;
} else {
             
           result = (uint8_t)2;
};
};

        
        return result;
}

bool_t ltedfapegproof__subterm__1(ltedfapegproof__parsetree_adt_t ivar_1, ltedfapegproof__parsetree_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_2->count++;
        ivar_3 = (bool_t) equal_ltedfapegproof__parsetree_adt(ivar_1, ivar_2);
        if (ivar_3){ 
             release_ltedfapegproof__parsetree_adt(ivar_1);
             release_ltedfapegproof__parsetree_adt(ivar_2);
             result = (bool_t) true;
} else {
        
             bool_t ivar_13;
             ivar_2->count++;
             ivar_13 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_2);
             if (ivar_13){  
           release_ltedfapegproof__parsetree_adt(ivar_1);
           release_ltedfapegproof__parsetree_adt(ivar_2);
           result = (bool_t) false;
} else {
             
           bool_t ivar_30;
           ivar_2->count++;
           ivar_30 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_2);
           if (ivar_30){   
           ltedfapegproof__parsetree_adt_t ivar_18;
           ivar_18 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_2);
           result = (bool_t)ltedfapegproof__subterm__1((ltedfapegproof__parsetree_adt_t)ivar_1, (ltedfapegproof__parsetree_adt_t)ivar_18);
} else {
           
           ltedfapegproof__parsetree_adt_t ivar_35;
           ivar_2->count++;
           ivar_35 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_2);
           ltedfapegproof__parsetree_adt_t ivar_36;
           ivar_36 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subtwo((ltedfapegproof__parsetree_adt_t)ivar_2);
           bool_t ivar_46;
           ivar_1->count++;
           ivar_46 = (bool_t)ltedfapegproof__subterm__1((ltedfapegproof__parsetree_adt_t)ivar_1, (ltedfapegproof__parsetree_adt_t)ivar_35);
           if (ivar_46){    
            release_ltedfapegproof__parsetree_adt(ivar_36);
            release_ltedfapegproof__parsetree_adt(ivar_1);
            result = (bool_t) true;
} else {
           
            result = (bool_t)ltedfapegproof__subterm__1((ltedfapegproof__parsetree_adt_t)ivar_1, (ltedfapegproof__parsetree_adt_t)ivar_36);
};
};
};
};

        
        return result;
}

bool_t ltedfapegproof__doublelessp__1(ltedfapegproof__parsetree_adt_t ivar_1, ltedfapegproof__parsetree_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_8;
        ivar_2->count++;
        ivar_8 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_2);
        if (ivar_8){ 
             release_ltedfapegproof__parsetree_adt(ivar_1);
             release_ltedfapegproof__parsetree_adt(ivar_2);
             result = (bool_t) false;
} else {
        
             bool_t ivar_31;
             ivar_2->count++;
             ivar_31 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_2);
             if (ivar_31){  
           ltedfapegproof__parsetree_adt_t ivar_13;
           ivar_13 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_2);
           bool_t ivar_20;
           ivar_1->count++;
           ivar_13->count++;
           ivar_20 = (bool_t) equal_ltedfapegproof__parsetree_adt(ivar_1, ivar_13);
           if (ivar_20){   
           release_ltedfapegproof__parsetree_adt(ivar_13);
           release_ltedfapegproof__parsetree_adt(ivar_1);
           result = (bool_t) true;
} else {
           
           result = (bool_t)ltedfapegproof__doublelessp__1((ltedfapegproof__parsetree_adt_t)ivar_1, (ltedfapegproof__parsetree_adt_t)ivar_13);
};
} else {
             
           ltedfapegproof__parsetree_adt_t ivar_36;
           ivar_2->count++;
           ivar_36 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_2);
           ltedfapegproof__parsetree_adt_t ivar_37;
           ivar_37 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subtwo((ltedfapegproof__parsetree_adt_t)ivar_2);
           bool_t ivar_47;
           bool_t ivar_49;
           ivar_1->count++;
           ivar_36->count++;
           ivar_49 = (bool_t) equal_ltedfapegproof__parsetree_adt(ivar_1, ivar_36);
           if (ivar_49){   
           release_ltedfapegproof__parsetree_adt(ivar_36);
           ivar_47 = (bool_t) true;
} else {
           
           ivar_1->count++;
           ivar_47 = (bool_t)ltedfapegproof__doublelessp__1((ltedfapegproof__parsetree_adt_t)ivar_1, (ltedfapegproof__parsetree_adt_t)ivar_36);
};
           if (ivar_47){   
           release_ltedfapegproof__parsetree_adt(ivar_37);
           release_ltedfapegproof__parsetree_adt(ivar_1);
           result = (bool_t) true;
} else {
           
           bool_t ivar_60;
           ivar_1->count++;
           ivar_37->count++;
           ivar_60 = (bool_t) equal_ltedfapegproof__parsetree_adt(ivar_1, ivar_37);
           if (ivar_60){    
            release_ltedfapegproof__parsetree_adt(ivar_37);
            release_ltedfapegproof__parsetree_adt(ivar_1);
            result = (bool_t) true;
} else {
           
            result = (bool_t)ltedfapegproof__doublelessp__1((ltedfapegproof__parsetree_adt_t)ivar_1, (ltedfapegproof__parsetree_adt_t)ivar_37);
};
};
};
};

        
        return result;
}

ltedfapegproof_funtype_5_t ltedfapegproof__reduce_nat__1(ltedfapegproof_funtype_6_t ivar_1, ltedfapegproof_funtype_8_t ivar_3, ltedfapegproof_funtype_10_t ivar_5){
        ltedfapegproof_funtype_5_t  result;
        ltedfapegproof_closure_11_t cl5767;
        cl5767 = new_ltedfapegproof_closure_11();
        cl5767->fvar_1 = (ltedfapegproof_funtype_8_t)ivar_3;
        if (cl5767->fvar_1 != NULL) cl5767->fvar_1->count++;
        cl5767->fvar_2 = (ltedfapegproof_funtype_10_t)ivar_5;
        if (cl5767->fvar_2 != NULL) cl5767->fvar_2->count++;
        cl5767->fvar_3 = (ltedfapegproof_funtype_6_t)ivar_1;
        if (cl5767->fvar_3 != NULL) cl5767->fvar_3->count++;
        release_ltedfapegproof_funtype_8(ivar_3);
        release_ltedfapegproof_funtype_10(ivar_5);
        release_ltedfapegproof_funtype_6(ivar_1);
        result = (ltedfapegproof_funtype_5_t)cl5767;

        
        return result;
}

ltedfapegproof_funtype_5_t ltedfapegproof__REDUCE_nat__1(ltedfapegproof_funtype_13_t ivar_1, ltedfapegproof_funtype_15_t ivar_3, ltedfapegproof_funtype_17_t ivar_5){
        ltedfapegproof_funtype_5_t  result;
        ltedfapegproof_closure_18_t cl5796;
        cl5796 = new_ltedfapegproof_closure_18();
        cl5796->fvar_1 = (ltedfapegproof_funtype_15_t)ivar_3;
        if (cl5796->fvar_1 != NULL) cl5796->fvar_1->count++;
        cl5796->fvar_2 = (ltedfapegproof_funtype_17_t)ivar_5;
        if (cl5796->fvar_2 != NULL) cl5796->fvar_2->count++;
        cl5796->fvar_3 = (ltedfapegproof_funtype_13_t)ivar_1;
        if (cl5796->fvar_3 != NULL) cl5796->fvar_3->count++;
        release_ltedfapegproof_funtype_15(ivar_3);
        release_ltedfapegproof_funtype_17(ivar_5);
        release_ltedfapegproof_funtype_13(ivar_1);
        result = (ltedfapegproof_funtype_5_t)cl5796;

        
        return result;
}

ltedfapegproof_funtype_19_t ltedfapegproof__reduce_ordinal__1(ltedfapegproof_funtype_20_t ivar_1, ltedfapegproof_funtype_22_t ivar_3, ltedfapegproof_funtype_24_t ivar_5){
        ltedfapegproof_funtype_19_t  result;
        ltedfapegproof_closure_25_t cl5813;
        cl5813 = new_ltedfapegproof_closure_25();
        cl5813->fvar_1 = (ltedfapegproof_funtype_22_t)ivar_3;
        if (cl5813->fvar_1 != NULL) cl5813->fvar_1->count++;
        cl5813->fvar_2 = (ltedfapegproof_funtype_24_t)ivar_5;
        if (cl5813->fvar_2 != NULL) cl5813->fvar_2->count++;
        cl5813->fvar_3 = (ltedfapegproof_funtype_20_t)ivar_1;
        if (cl5813->fvar_3 != NULL) cl5813->fvar_3->count++;
        release_ltedfapegproof_funtype_22(ivar_3);
        release_ltedfapegproof_funtype_24(ivar_5);
        release_ltedfapegproof_funtype_20(ivar_1);
        result = (ltedfapegproof_funtype_19_t)cl5813;

        
        return result;
}

ltedfapegproof_funtype_19_t ltedfapegproof__REDUCE_ordinal__1(ltedfapegproof_funtype_26_t ivar_1, ltedfapegproof_funtype_28_t ivar_3, ltedfapegproof_funtype_30_t ivar_5){
        ltedfapegproof_funtype_19_t  result;
        ltedfapegproof_closure_31_t cl5842;
        cl5842 = new_ltedfapegproof_closure_31();
        cl5842->fvar_1 = (ltedfapegproof_funtype_28_t)ivar_3;
        if (cl5842->fvar_1 != NULL) cl5842->fvar_1->count++;
        cl5842->fvar_2 = (ltedfapegproof_funtype_30_t)ivar_5;
        if (cl5842->fvar_2 != NULL) cl5842->fvar_2->count++;
        cl5842->fvar_3 = (ltedfapegproof_funtype_26_t)ivar_1;
        if (cl5842->fvar_3 != NULL) cl5842->fvar_3->count++;
        release_ltedfapegproof_funtype_28(ivar_3);
        release_ltedfapegproof_funtype_30(ivar_5);
        release_ltedfapegproof_funtype_26(ivar_1);
        result = (ltedfapegproof_funtype_19_t)cl5842;

        
        return result;
}

bool_t r_ltedfapegproof__qemptyp(ltedfapegproof__qstack_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltedfapegproof__qstack_adt_index;
        release_ltedfapegproof__qstack_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

bool_t r_ltedfapegproof__qpushp(ltedfapegproof__qstack_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltedfapegproof__qstack_adt_index;
        release_ltedfapegproof__qstack_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

ltedfapegproof__qpush_t update_ltedfapegproof__qstack_adt_nonterm(ltedfapegproof__qstack_adt_t ivar_1, uint8_t ivar_3){
        ltedfapegproof__qpush_t  result;
        ltedfapegproof__qpush_t ivar_2;
        //copying to ltedfapegproof__qpush from ltedfapegproof__qstack_adt;
        ivar_2 = (ltedfapegproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltedfapegproof__qstack_adt(ivar_1);
        result = (ltedfapegproof__qpush_t)update_ltedfapegproof__qpush_nonterm(ivar_2, ivar_3);

        
        return result;
}

uint8_t ltedfapegproof__qstack_adt_nonterm(ltedfapegproof__qstack_adt_t ivar_1){
        uint8_t  result;
        ltedfapegproof__qpush_t ivar_2;
        //copying to ltedfapegproof__qpush from ltedfapegproof__qstack_adt;
        ivar_2 = (ltedfapegproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltedfapegproof__qstack_adt(ivar_1);
        result = (uint8_t)ivar_2->nonterm;
        release_ltedfapegproof__qpush(ivar_2);

        
        return result;
}

ltedfapegproof__qpush_t update_ltedfapegproof__qstack_adt_pos(ltedfapegproof__qstack_adt_t ivar_1, uint32_t ivar_3){
        ltedfapegproof__qpush_t  result;
        ltedfapegproof__qpush_t ivar_2;
        //copying to ltedfapegproof__qpush from ltedfapegproof__qstack_adt;
        ivar_2 = (ltedfapegproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltedfapegproof__qstack_adt(ivar_1);
        result = (ltedfapegproof__qpush_t)update_ltedfapegproof__qpush_pos(ivar_2, ivar_3);

        
        return result;
}

uint32_t ltedfapegproof__qstack_adt_pos(ltedfapegproof__qstack_adt_t ivar_1){
        uint32_t  result;
        ltedfapegproof__qpush_t ivar_2;
        //copying to ltedfapegproof__qpush from ltedfapegproof__qstack_adt;
        ivar_2 = (ltedfapegproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltedfapegproof__qstack_adt(ivar_1);
        result = (uint32_t)ivar_2->pos;
        release_ltedfapegproof__qpush(ivar_2);

        
        return result;
}

ltedfapegproof__qpush_t update_ltedfapegproof__qstack_adt_qpop(ltedfapegproof__qstack_adt_t ivar_1, ltedfapegproof__qstack_adt_t ivar_3){
        ltedfapegproof__qpush_t  result;
        ltedfapegproof__qpush_t ivar_2;
        //copying to ltedfapegproof__qpush from ltedfapegproof__qstack_adt;
        ivar_2 = (ltedfapegproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltedfapegproof__qstack_adt(ivar_1);
        result = (ltedfapegproof__qpush_t)update_ltedfapegproof__qpush_qpop(ivar_2, ivar_3);

        
        return result;
}

ltedfapegproof__qstack_adt_t ltedfapegproof__qstack_adt_qpop(ltedfapegproof__qstack_adt_t ivar_1){
        ltedfapegproof__qstack_adt_t  result;
        ltedfapegproof__qpush_t ivar_2;
        //copying to ltedfapegproof__qpush from ltedfapegproof__qstack_adt;
        ivar_2 = (ltedfapegproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltedfapegproof__qstack_adt(ivar_1);
        result = (ltedfapegproof__qstack_adt_t)ivar_2->qpop;
        result->count++;
        release_ltedfapegproof__qpush(ivar_2);

        
        return result;
}

ltedfapegproof__qstack_adt_t ltedfapegproof__qempty(void){
        ltedfapegproof__qstack_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        ltedfapegproof__qstack_adt_t tmp5850 = new_ltedfapegproof__qstack_adt();;
        result = (ltedfapegproof__qstack_adt_t)tmp5850;
        tmp5850->ltedfapegproof__qstack_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

ltedfapegproof__qstack_adt_t ltedfapegproof__qpush(uint8_t ivar_2, uint32_t ivar_3, ltedfapegproof__qstack_adt_t ivar_4){
        ltedfapegproof__qstack_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        ltedfapegproof__qpush_t tmp5851 = new_ltedfapegproof__qpush();;
        result = (ltedfapegproof__qstack_adt_t)tmp5851;
        tmp5851->ltedfapegproof__qstack_adt_index = (uint8_t)ivar_1;
        tmp5851->nonterm = (uint8_t)ivar_2;
        tmp5851->pos = (uint32_t)ivar_3;
        tmp5851->qpop = (ltedfapegproof__qstack_adt_t)ivar_4;

        
        return result;
}

ltedfapegproof_funtype_34_t ltedfapegproof__qstack_ord(void){
        ltedfapegproof_funtype_34_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

uint8_t ltedfapegproof__ord__2(ltedfapegproof__qstack_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)r_ltedfapegproof__qemptyp((ltedfapegproof__qstack_adt_t)ivar_1);
        if (ivar_3){ 
             result = (uint8_t)0;
} else {
        
             result = (uint8_t)1;
};

        
        return result;
}

bool_t ltedfapegproof__subterm__2(ltedfapegproof__qstack_adt_t ivar_1, ltedfapegproof__qstack_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_2->count++;
        ivar_3 = (bool_t) equal_ltedfapegproof__qstack_adt(ivar_1, ivar_2);
        if (ivar_3){ 
             release_ltedfapegproof__qstack_adt(ivar_1);
             release_ltedfapegproof__qstack_adt(ivar_2);
             result = (bool_t) true;
} else {
        
             bool_t ivar_9;
             ivar_2->count++;
             ivar_9 = (bool_t)r_ltedfapegproof__qemptyp((ltedfapegproof__qstack_adt_t)ivar_2);
             if (ivar_9){  
           release_ltedfapegproof__qstack_adt(ivar_1);
           release_ltedfapegproof__qstack_adt(ivar_2);
           result = (bool_t) false;
} else {
             
           ltedfapegproof__qstack_adt_t ivar_15;
           ivar_15 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qstack_adt_qpop((ltedfapegproof__qstack_adt_t)ivar_2);
           result = (bool_t)ltedfapegproof__subterm__2((ltedfapegproof__qstack_adt_t)ivar_1, (ltedfapegproof__qstack_adt_t)ivar_15);
};
};

        
        return result;
}

bool_t ltedfapegproof__doublelessp__2(ltedfapegproof__qstack_adt_t ivar_1, ltedfapegproof__qstack_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_4;
        ivar_2->count++;
        ivar_4 = (bool_t)r_ltedfapegproof__qemptyp((ltedfapegproof__qstack_adt_t)ivar_2);
        if (ivar_4){ 
             release_ltedfapegproof__qstack_adt(ivar_1);
             release_ltedfapegproof__qstack_adt(ivar_2);
             result = (bool_t) false;
} else {
        
             ltedfapegproof__qstack_adt_t ivar_10;
             ivar_10 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qstack_adt_qpop((ltedfapegproof__qstack_adt_t)ivar_2);
             bool_t ivar_20;
             ivar_1->count++;
             ivar_10->count++;
             ivar_20 = (bool_t) equal_ltedfapegproof__qstack_adt(ivar_1, ivar_10);
             if (ivar_20){  
           release_ltedfapegproof__qstack_adt(ivar_10);
           release_ltedfapegproof__qstack_adt(ivar_1);
           result = (bool_t) true;
} else {
             
           result = (bool_t)ltedfapegproof__doublelessp__2((ltedfapegproof__qstack_adt_t)ivar_1, (ltedfapegproof__qstack_adt_t)ivar_10);
};
};

        
        return result;
}

ltedfapegproof_funtype_35_t ltedfapegproof__reduce_nat__2(mpz_ptr_t ivar_1, ltedfapegproof_funtype_37_t ivar_2){
        ltedfapegproof_funtype_35_t  result;
        ltedfapegproof_closure_38_t cl5865;
        cl5865 = new_ltedfapegproof_closure_38();
        cl5865->fvar_1 = (ltedfapegproof_funtype_37_t)ivar_2;
        if (cl5865->fvar_1 != NULL) cl5865->fvar_1->count++;
        mpz_set(cl5865->fvar_2, ivar_1);
        release_ltedfapegproof_funtype_37(ivar_2);
        result = (ltedfapegproof_funtype_35_t)cl5865;

        
        return result;
}

ltedfapegproof_funtype_35_t ltedfapegproof__REDUCE_nat__2(ltedfapegproof_funtype_35_t ivar_1, ltedfapegproof_funtype_40_t ivar_3){
        ltedfapegproof_funtype_35_t  result;
        ltedfapegproof_closure_41_t cl5879;
        cl5879 = new_ltedfapegproof_closure_41();
        cl5879->fvar_1 = (ltedfapegproof_funtype_40_t)ivar_3;
        if (cl5879->fvar_1 != NULL) cl5879->fvar_1->count++;
        cl5879->fvar_2 = (ltedfapegproof_funtype_35_t)ivar_1;
        if (cl5879->fvar_2 != NULL) cl5879->fvar_2->count++;
        release_ltedfapegproof_funtype_40(ivar_3);
        release_ltedfapegproof_funtype_35(ivar_1);
        result = (ltedfapegproof_funtype_35_t)cl5879;

        
        return result;
}

ltedfapegproof_funtype_42_t ltedfapegproof__reduce_ordinal__2(ordstruct_adt__ordstruct_adt_t ivar_1, ltedfapegproof_funtype_44_t ivar_2){
        ltedfapegproof_funtype_42_t  result;
        ltedfapegproof_closure_45_t cl5890;
        cl5890 = new_ltedfapegproof_closure_45();
        cl5890->fvar_1 = (ltedfapegproof_funtype_44_t)ivar_2;
        if (cl5890->fvar_1 != NULL) cl5890->fvar_1->count++;
        cl5890->fvar_2 = (ordstruct_adt__ordstruct_adt_t)ivar_1;
        if (cl5890->fvar_2 != NULL) cl5890->fvar_2->count++;
        release_ltedfapegproof_funtype_44(ivar_2);
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ltedfapegproof_funtype_42_t)cl5890;

        
        return result;
}

ltedfapegproof_funtype_42_t ltedfapegproof__REDUCE_ordinal__2(ltedfapegproof_funtype_42_t ivar_1, ltedfapegproof_funtype_47_t ivar_3){
        ltedfapegproof_funtype_42_t  result;
        ltedfapegproof_closure_48_t cl5904;
        cl5904 = new_ltedfapegproof_closure_48();
        cl5904->fvar_1 = (ltedfapegproof_funtype_47_t)ivar_3;
        if (cl5904->fvar_1 != NULL) cl5904->fvar_1->count++;
        cl5904->fvar_2 = (ltedfapegproof_funtype_42_t)ivar_1;
        if (cl5904->fvar_2 != NULL) cl5904->fvar_2->count++;
        release_ltedfapegproof_funtype_47(ivar_3);
        release_ltedfapegproof_funtype_42(ivar_1);
        result = (ltedfapegproof_funtype_42_t)cl5904;

        
        return result;
}

bool_t ltedfapegproof__inqstack(uint8_t ivar_1, uint32_t ivar_2, ltedfapegproof__qstack_adt_t ivar_3){
        bool_t  result;
        bool_t ivar_36;
        ivar_3->count++;
        ivar_36 = (bool_t)r_ltedfapegproof__qpushp((ltedfapegproof__qstack_adt_t)ivar_3);
        if (ivar_36){ 
             uint8_t ivar_5;
             ivar_3->count++;
             ivar_5 = (uint8_t)ltedfapegproof__qstack_adt_nonterm((ltedfapegproof__qstack_adt_t)ivar_3);
             uint32_t ivar_6;
             ivar_3->count++;
             ivar_6 = (uint32_t)ltedfapegproof__qstack_adt_pos((ltedfapegproof__qstack_adt_t)ivar_3);
             ltedfapegproof__qstack_adt_t ivar_7;
             ivar_7 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qstack_adt_qpop((ltedfapegproof__qstack_adt_t)ivar_3);
             bool_t ivar_17;
             bool_t ivar_19;
             ivar_19 = (ivar_1 == ivar_5);
             if (ivar_19){  
           ivar_17 = (ivar_2 == ivar_6);
} else {
             
           ivar_17 = (bool_t) false;
};
             if (ivar_17){  
           release_ltedfapegproof__qstack_adt(ivar_7);
           result = (bool_t) true;
} else {
             
           result = (bool_t)ltedfapegproof__inqstack((uint8_t)ivar_1, (uint32_t)ivar_2, (ltedfapegproof__qstack_adt_t)ivar_7);
};
} else {
        
             release_ltedfapegproof__qstack_adt(ivar_3);
             result = (bool_t) false;
};

        
        return result;
}

mpz_ptr_t ltedfapegproof__stacksize(ltedfapegproof__qstack_adt_t ivar_1){
        mpz_ptr_t  result;
        bool_t ivar_21;
        ivar_1->count++;
        ivar_21 = (bool_t)r_ltedfapegproof__qpushp((ltedfapegproof__qstack_adt_t)ivar_1);
        if (ivar_21){ 
             ltedfapegproof__qstack_adt_t ivar_5;
             ivar_5 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qstack_adt_qpop((ltedfapegproof__qstack_adt_t)ivar_1);
             mpz_ptr_t ivar_15;
             ivar_15 = (mpz_ptr_t)ltedfapegproof__stacksize((ltedfapegproof__qstack_adt_t)ivar_5);
             uint8_t ivar_16;
             ivar_16 = (uint8_t)1;
             mpz_mk_set_ui(result, (uint64_t)ivar_16);
             mpz_add(result, result, ivar_15);
} else {
        
             release_ltedfapegproof__qstack_adt(ivar_1);
             result = safe_malloc(sizeof(mpz_t));
             mpz_init(result);
             mpz_mk_set_ui(result, 0);
};

        
        return result;
}

ltedfapegproof_funtype_49_t ltedfapegproof__good_qstackp(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_50_t ivar_3, ltedfapegproof_array_52_t ivar_4){
        ltedfapegproof_funtype_49_t  result;
        ltedfapegproof_closure_53_t cl5913;
        cl5913 = new_ltedfapegproof_closure_53();
        cl5913->fvar_1 = (ltedfapegproof_array_50_t)ivar_3;
        if (cl5913->fvar_1 != NULL) cl5913->fvar_1->count++;
        cl5913->fvar_2 = (uint32_t)ivar_1;
        cl5913->fvar_3 = (ltedfapegproof_array_52_t)ivar_4;
        if (cl5913->fvar_3 != NULL) cl5913->fvar_3->count++;
        cl5913->fvar_4 = (ltedfapeg__lang_spec_t)ivar_2;
        if (cl5913->fvar_4 != NULL) cl5913->fvar_4->count++;
        release_ltedfapegproof_array_52(ivar_4);
        release_ltedfapegproof_array_50(ivar_3);
        release_ltedfapeg__lang_spec(ivar_2);
        result = (ltedfapegproof_funtype_49_t)cl5913;

        
        return result;
}

ltedfapegproof_funtype_55_t ltedfapegproof__good_parsetreep(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_50_t ivar_3){
        ltedfapegproof_funtype_55_t  result;
        ltedfapegproof_closure_56_t cl5971;
        cl5971 = new_ltedfapegproof_closure_56();
        cl5971->fvar_1 = (ltedfapegproof_array_50_t)ivar_3;
        if (cl5971->fvar_1 != NULL) cl5971->fvar_1->count++;
        cl5971->fvar_2 = (uint32_t)ivar_1;
        cl5971->fvar_3 = (ltedfapeg__lang_spec_t)ivar_2;
        if (cl5971->fvar_3 != NULL) cl5971->fvar_3->count++;
        release_ltedfapegproof_array_50(ivar_3);
        release_ltedfapeg__lang_spec(ivar_2);
        result = (ltedfapegproof_funtype_55_t)cl5971;

        
        return result;
}

ltedfapegproof__parsetree_adt_t ltedfapegproof__buildtree(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5, ltedfapegproof_record_58_t ivar_6, ltedfapegproof__qstack_adt_t ivar_8, uint8_t ivar_9, uint32_t ivar_10){
        ltedfapegproof__parsetree_adt_t  result;
        ltedfapeg__prepeg_adt_t ivar_11;
        ivar_11 = (ltedfapeg__prepeg_adt_t)ivar_2->elems[ivar_9];
        ivar_11->count++;
        bool_t ivar_210;
        ivar_11->count++;
        ivar_210 = (bool_t)r_ltedfapeg__ltep((ltedfapeg__prepeg_adt_t)ivar_11);
        if (ivar_210){ 
             uint8_t ivar_16;
             ivar_11->count++;
             ivar_16 = (uint8_t)ltedfapeg__prepeg_adt_fst((ltedfapeg__prepeg_adt_t)ivar_11);
             uint8_t ivar_17;
             ivar_11->count++;
             ivar_17 = (uint8_t)ltedfapeg__prepeg_adt_lthen((ltedfapeg__prepeg_adt_t)ivar_11);
             uint8_t ivar_18;
             ivar_18 = (uint8_t)ltedfapeg__prepeg_adt_lelse((ltedfapeg__prepeg_adt_t)ivar_11);
             bool_t ivar_28;
             ltedfapeg__ent_adt_t ivar_42;
             ltedfapegproof_array_51_t ivar_32;
             ltedfapegproof_array_52_t ivar_36;
             ivar_36 = (ltedfapegproof_array_52_t)ivar_6->scaf;
             ivar_36->count++;
             ivar_32 = (ltedfapegproof_array_51_t)ivar_36->elems[ivar_10];
             ivar_32->count++;
             release_ltedfapegproof_array_52(ivar_36);
             ivar_42 = (ltedfapeg__ent_adt_t)ivar_32->elems[ivar_16];
             ivar_42->count++;
             release_ltedfapegproof_array_51(ivar_32);
             ivar_28 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_42);
             if (ivar_28){  
           /* E1 */ ltedfapegproof__parsetree_adt_t ivar_43;
           ltedfapegproof__qstack_adt_t ivar_68;
           ivar_8->count++;
           ivar_68 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_9, (uint32_t)ivar_10, (ltedfapegproof__qstack_adt_t)ivar_8);
           ivar_2->count++;
           ivar_3->count++;
           ivar_6->count++;
           ivar_43 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildtree((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_58_t)ivar_6, (ltedfapegproof__qstack_adt_t)ivar_68, (uint8_t)ivar_16, (uint32_t)ivar_10);
           /* E2 */ ltedfapegproof__parsetree_adt_t ivar_71;
           ltedfapegproof__qstack_adt_t ivar_113;
           ivar_113 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_9, (uint32_t)ivar_10, (ltedfapegproof__qstack_adt_t)ivar_8);
           uint64_t ivar_117;
           uint32_t ivar_89;
           ltedfapeg__ent_adt_t ivar_103;
           ltedfapegproof_array_51_t ivar_93;
           ltedfapegproof_array_52_t ivar_97;
           ivar_97 = (ltedfapegproof_array_52_t)ivar_6->scaf;
           ivar_97->count++;
           ivar_93 = (ltedfapegproof_array_51_t)ivar_97->elems[ivar_10];
           ivar_93->count++;
           release_ltedfapegproof_array_52(ivar_97);
           ivar_103 = (ltedfapeg__ent_adt_t)ivar_93->elems[ivar_16];
           ivar_103->count++;
           release_ltedfapegproof_array_51(ivar_93);
           ivar_89 = (uint32_t)ltedfapeg__ent_adt_span((ltedfapeg__ent_adt_t)ivar_103);
           ivar_117 = (uint64_t)(ivar_10 + ivar_89);
           uint32_t ivar_115;
           //copying to uint32 from uint64;
           ivar_115 = (uint32_t)ivar_117;
           ivar_6->count++;
           ivar_71 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildtree((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_58_t)ivar_6, (ltedfapegproof__qstack_adt_t)ivar_113, (uint8_t)ivar_17, (uint32_t)ivar_115);
           ltedfapeg__ent_adt_t ivar_133;
           ltedfapegproof_array_51_t ivar_123;
           ltedfapegproof_array_52_t ivar_127;
           ivar_127 = (ltedfapegproof_array_52_t)ivar_6->scaf;
           ivar_127->count++;
           release_ltedfapegproof_record_58(ivar_6);
           ivar_123 = (ltedfapegproof_array_51_t)ivar_127->elems[ivar_10];
           ivar_123->count++;
           release_ltedfapegproof_array_52(ivar_127);
           ivar_133 = (ltedfapeg__ent_adt_t)ivar_123->elems[ivar_9];
           ivar_133->count++;
           release_ltedfapegproof_array_51(ivar_123);
           result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__two((ltedfapeg__ent_adt_t)ivar_133, (ltedfapegproof__parsetree_adt_t)ivar_43, (ltedfapegproof__parsetree_adt_t)ivar_71);
} else {
             
           /* E1 */ ltedfapegproof__parsetree_adt_t ivar_136;
           ltedfapegproof__qstack_adt_t ivar_161;
           ivar_8->count++;
           ivar_161 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_9, (uint32_t)ivar_10, (ltedfapegproof__qstack_adt_t)ivar_8);
           ivar_2->count++;
           ivar_3->count++;
           ivar_6->count++;
           ivar_136 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildtree((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_58_t)ivar_6, (ltedfapegproof__qstack_adt_t)ivar_161, (uint8_t)ivar_16, (uint32_t)ivar_10);
           /* E2 */ ltedfapegproof__parsetree_adt_t ivar_164;
           ltedfapegproof__qstack_adt_t ivar_189;
           ivar_189 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_9, (uint32_t)ivar_10, (ltedfapegproof__qstack_adt_t)ivar_8);
           ivar_6->count++;
           ivar_164 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildtree((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_58_t)ivar_6, (ltedfapegproof__qstack_adt_t)ivar_189, (uint8_t)ivar_18, (uint32_t)ivar_10);
           ltedfapeg__ent_adt_t ivar_207;
           ltedfapegproof_array_51_t ivar_197;
           ltedfapegproof_array_52_t ivar_201;
           ivar_201 = (ltedfapegproof_array_52_t)ivar_6->scaf;
           ivar_201->count++;
           release_ltedfapegproof_record_58(ivar_6);
           ivar_197 = (ltedfapegproof_array_51_t)ivar_201->elems[ivar_10];
           ivar_197->count++;
           release_ltedfapegproof_array_52(ivar_201);
           ivar_207 = (ltedfapeg__ent_adt_t)ivar_197->elems[ivar_9];
           ivar_207->count++;
           release_ltedfapegproof_array_51(ivar_197);
           result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__two((ltedfapeg__ent_adt_t)ivar_207, (ltedfapegproof__parsetree_adt_t)ivar_136, (ltedfapegproof__parsetree_adt_t)ivar_164);
};
} else {
        
             release_ltedfapegproof_array_50(ivar_3);
             release_ltedfapeg__lang_spec(ivar_2);
             release_ltedfapegproof__qstack_adt(ivar_8);
             release_ltedfapeg__prepeg_adt(ivar_11);
             ltedfapeg__ent_adt_t ivar_227;
             ltedfapegproof_array_51_t ivar_217;
             ltedfapegproof_array_52_t ivar_221;
             ivar_221 = (ltedfapegproof_array_52_t)ivar_6->scaf;
             ivar_221->count++;
             release_ltedfapegproof_record_58(ivar_6);
             ivar_217 = (ltedfapegproof_array_51_t)ivar_221->elems[ivar_10];
             ivar_217->count++;
             release_ltedfapegproof_array_52(ivar_221);
             ivar_227 = (ltedfapeg__ent_adt_t)ivar_217->elems[ivar_9];
             ivar_227->count++;
             release_ltedfapegproof_array_51(ivar_217);
             result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__zero((ltedfapeg__ent_adt_t)ivar_227);
};

        
        return result;
}

ltedfapegproof__parsetree_adt_t ltedfapegproof__buildloop(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5, ltedfapegproof_record_58_t ivar_6, ltedfapegproof_array_52_t ivar_8, ltedfapegproof__qstack_adt_t ivar_10, uint8_t ivar_11, uint32_t ivar_12){
        ltedfapegproof__parsetree_adt_t  result;
        bool_t ivar_13;
        ivar_10->count++;
        ivar_13 = (bool_t)ltedfapegproof__inqstack((uint8_t)ivar_11, (uint32_t)ivar_12, (ltedfapegproof__qstack_adt_t)ivar_10);
        if (ivar_13){ 
             release_ltedfapegproof_array_52(ivar_8);
             release_ltedfapegproof__qstack_adt(ivar_10);
             release_ltedfapeg__lang_spec(ivar_2);
             release_ltedfapegproof_array_50(ivar_3);
             release_ltedfapegproof_record_58(ivar_6);
             ltedfapeg__ent_adt_t ivar_23;
             ivar_23 = (ltedfapeg__ent_adt_t)ltedfapeg__loop();
             if (ivar_23 != NULL) ivar_23->count++;
             result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__zero((ltedfapeg__ent_adt_t)ivar_23);
} else {
        
             ltedfapeg__prepeg_adt_t ivar_24;
             ivar_24 = (ltedfapeg__prepeg_adt_t)ivar_2->elems[ivar_11];
             ivar_24->count++;
             uint8_t ivar_29;
             ivar_24->count++;
             ivar_29 = (uint8_t)ltedfapeg__prepeg_adt_fst((ltedfapeg__prepeg_adt_t)ivar_24);
             uint8_t ivar_30;
             ivar_24->count++;
             ivar_30 = (uint8_t)ltedfapeg__prepeg_adt_lthen((ltedfapeg__prepeg_adt_t)ivar_24);
             uint8_t ivar_31;
             ivar_31 = (uint8_t)ltedfapeg__prepeg_adt_lelse((ltedfapeg__prepeg_adt_t)ivar_24);
             bool_t ivar_41;
             ltedfapeg__ent_adt_t ivar_55;
             ltedfapegproof_array_51_t ivar_45;
             ltedfapegproof_array_52_t ivar_49;
             ivar_49 = (ltedfapegproof_array_52_t)ivar_6->scaf;
             ivar_49->count++;
             ivar_45 = (ltedfapegproof_array_51_t)ivar_49->elems[ivar_12];
             ivar_45->count++;
             release_ltedfapegproof_array_52(ivar_49);
             ivar_55 = (ltedfapeg__ent_adt_t)ivar_45->elems[ivar_29];
             ivar_55->count++;
             release_ltedfapegproof_array_51(ivar_45);
             ivar_41 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_55);
             if (ivar_41){  
           ltedfapeg__ent_adt_t ivar_105;
           ivar_105 = (ltedfapeg__ent_adt_t)ltedfapeg__loop();
           if (ivar_105 != NULL) ivar_105->count++;
           ltedfapegproof__parsetree_adt_t ivar_106;
           ltedfapegproof_array_52_t ivar_99;
           ltedfapeg__ent_adt_t ivar_69;
           ivar_69 = (ltedfapeg__ent_adt_t)ltedfapeg__loop();
           if (ivar_69 != NULL) ivar_69->count++;
           ltedfapegproof_array_51_t ivar_71;
           ivar_71 = (ltedfapegproof_array_51_t)ivar_8->elems[ivar_12];
           ivar_71->count++;
           ltedfapegproof_array_52_t ivar_78;
           ltedfapegproof_array_51_t ivar_80;
           ivar_80 = NULL;
           ivar_78 = (ltedfapegproof_array_52_t)update_ltedfapegproof_array_52(ivar_8, ivar_12, ivar_80);
           if (ivar_80 != NULL) ivar_80->count--;
           ltedfapegproof_array_51_t ivar_79;
           ltedfapegproof_array_51_t ivar_74;
           ltedfapeg__ent_adt_t ivar_76;
           ivar_76 = NULL;
           ivar_74 = (ltedfapegproof_array_51_t)update_ltedfapegproof_array_51(ivar_71, ivar_11, ivar_76);
           if (ivar_76 != NULL) ivar_76->count--;
           ivar_79 = (ltedfapegproof_array_51_t)update_ltedfapegproof_array_51(ivar_74, ivar_11, ivar_69);
           if (ivar_69 != NULL) ivar_69->count--;
           ivar_99 = (ltedfapegproof_array_52_t)update_ltedfapegproof_array_52(ivar_78, ivar_12, ivar_79);
           if (ivar_79 != NULL) ivar_79->count--;
           ltedfapegproof__qstack_adt_t ivar_101;
           ivar_101 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (ltedfapegproof__qstack_adt_t)ivar_10);
           ivar_106 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildloop((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_58_t)ivar_6, (ltedfapegproof_array_52_t)ivar_99, (ltedfapegproof__qstack_adt_t)ivar_101, (uint8_t)ivar_29, (uint32_t)ivar_12);
           result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__one((ltedfapeg__ent_adt_t)ivar_105, (ltedfapegproof__parsetree_adt_t)ivar_106);
} else {
             
           bool_t ivar_107;
           ltedfapeg__ent_adt_t ivar_121;
           ltedfapegproof_array_51_t ivar_111;
           ltedfapegproof_array_52_t ivar_115;
           ivar_115 = (ltedfapegproof_array_52_t)ivar_6->scaf;
           ivar_115->count++;
           ivar_111 = (ltedfapegproof_array_51_t)ivar_115->elems[ivar_12];
           ivar_111->count++;
           release_ltedfapegproof_array_52(ivar_115);
           ivar_121 = (ltedfapeg__ent_adt_t)ivar_111->elems[ivar_29];
           ivar_121->count++;
           release_ltedfapegproof_array_51(ivar_111);
           ivar_107 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_121);
           if (ivar_107){   
           ltedfapeg__ent_adt_t ivar_218;
           ivar_218 = (ltedfapeg__ent_adt_t)ltedfapeg__loop();
           if (ivar_218 != NULL) ivar_218->count++;
           ltedfapegproof__parsetree_adt_t ivar_219;
           ltedfapegproof__qstack_adt_t ivar_149;
           ivar_10->count++;
           ivar_149 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (ltedfapegproof__qstack_adt_t)ivar_10);
           ivar_2->count++;
           ivar_3->count++;
           ivar_6->count++;
           ivar_219 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildtree((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_58_t)ivar_6, (ltedfapegproof__qstack_adt_t)ivar_149, (uint8_t)ivar_29, (uint32_t)ivar_12);
           ltedfapegproof__parsetree_adt_t ivar_220;
           ltedfapegproof_array_52_t ivar_210;
           ltedfapeg__ent_adt_t ivar_163;
           ivar_163 = (ltedfapeg__ent_adt_t)ltedfapeg__loop();
           if (ivar_163 != NULL) ivar_163->count++;
           ltedfapegproof_array_51_t ivar_165;
           ivar_165 = (ltedfapegproof_array_51_t)ivar_8->elems[ivar_12];
           ivar_165->count++;
           ltedfapegproof_array_52_t ivar_172;
           ltedfapegproof_array_51_t ivar_174;
           ivar_174 = NULL;
           ivar_172 = (ltedfapegproof_array_52_t)update_ltedfapegproof_array_52(ivar_8, ivar_12, ivar_174);
           if (ivar_174 != NULL) ivar_174->count--;
           ltedfapegproof_array_51_t ivar_173;
           ltedfapegproof_array_51_t ivar_168;
           ltedfapeg__ent_adt_t ivar_170;
           ivar_170 = NULL;
           ivar_168 = (ltedfapegproof_array_51_t)update_ltedfapegproof_array_51(ivar_165, ivar_11, ivar_170);
           if (ivar_170 != NULL) ivar_170->count--;
           ivar_173 = (ltedfapegproof_array_51_t)update_ltedfapegproof_array_51(ivar_168, ivar_11, ivar_163);
           if (ivar_163 != NULL) ivar_163->count--;
           ivar_210 = (ltedfapegproof_array_52_t)update_ltedfapegproof_array_52(ivar_172, ivar_12, ivar_173);
           if (ivar_173 != NULL) ivar_173->count--;
           ltedfapegproof__qstack_adt_t ivar_212;
           ivar_212 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (ltedfapegproof__qstack_adt_t)ivar_10);
           uint64_t ivar_216;
           uint32_t ivar_184;
           ltedfapeg__ent_adt_t ivar_198;
           ltedfapegproof_array_51_t ivar_188;
           ltedfapegproof_array_52_t ivar_192;
           ivar_192 = (ltedfapegproof_array_52_t)ivar_6->scaf;
           ivar_192->count++;
           ivar_188 = (ltedfapegproof_array_51_t)ivar_192->elems[ivar_12];
           ivar_188->count++;
           release_ltedfapegproof_array_52(ivar_192);
           ivar_198 = (ltedfapeg__ent_adt_t)ivar_188->elems[ivar_29];
           ivar_198->count++;
           release_ltedfapegproof_array_51(ivar_188);
           ivar_184 = (uint32_t)ltedfapeg__ent_adt_span((ltedfapeg__ent_adt_t)ivar_198);
           ivar_216 = (uint64_t)(ivar_12 + ivar_184);
           uint32_t ivar_214;
           //copying to uint32 from uint64;
           ivar_214 = (uint32_t)ivar_216;
           ivar_220 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildloop((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_58_t)ivar_6, (ltedfapegproof_array_52_t)ivar_210, (ltedfapegproof__qstack_adt_t)ivar_212, (uint8_t)ivar_30, (uint32_t)ivar_214);
           result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__two((ltedfapeg__ent_adt_t)ivar_218, (ltedfapegproof__parsetree_adt_t)ivar_219, (ltedfapegproof__parsetree_adt_t)ivar_220);
} else {
           
           ltedfapeg__ent_adt_t ivar_298;
           ivar_298 = (ltedfapeg__ent_adt_t)ltedfapeg__loop();
           if (ivar_298 != NULL) ivar_298->count++;
           ltedfapegproof__parsetree_adt_t ivar_299;
           ltedfapegproof__qstack_adt_t ivar_248;
           ivar_10->count++;
           ivar_248 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (ltedfapegproof__qstack_adt_t)ivar_10);
           ivar_2->count++;
           ivar_3->count++;
           ivar_6->count++;
           ivar_299 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildtree((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_58_t)ivar_6, (ltedfapegproof__qstack_adt_t)ivar_248, (uint8_t)ivar_29, (uint32_t)ivar_12);
           ltedfapegproof__parsetree_adt_t ivar_300;
           ltedfapegproof_array_52_t ivar_292;
           ltedfapeg__ent_adt_t ivar_262;
           ivar_262 = (ltedfapeg__ent_adt_t)ltedfapeg__loop();
           if (ivar_262 != NULL) ivar_262->count++;
           ltedfapegproof_array_51_t ivar_264;
           ivar_264 = (ltedfapegproof_array_51_t)ivar_8->elems[ivar_12];
           ivar_264->count++;
           ltedfapegproof_array_52_t ivar_271;
           ltedfapegproof_array_51_t ivar_273;
           ivar_273 = NULL;
           ivar_271 = (ltedfapegproof_array_52_t)update_ltedfapegproof_array_52(ivar_8, ivar_12, ivar_273);
           if (ivar_273 != NULL) ivar_273->count--;
           ltedfapegproof_array_51_t ivar_272;
           ltedfapegproof_array_51_t ivar_267;
           ltedfapeg__ent_adt_t ivar_269;
           ivar_269 = NULL;
           ivar_267 = (ltedfapegproof_array_51_t)update_ltedfapegproof_array_51(ivar_264, ivar_11, ivar_269);
           if (ivar_269 != NULL) ivar_269->count--;
           ivar_272 = (ltedfapegproof_array_51_t)update_ltedfapegproof_array_51(ivar_267, ivar_11, ivar_262);
           if (ivar_262 != NULL) ivar_262->count--;
           ivar_292 = (ltedfapegproof_array_52_t)update_ltedfapegproof_array_52(ivar_271, ivar_12, ivar_272);
           if (ivar_272 != NULL) ivar_272->count--;
           ltedfapegproof__qstack_adt_t ivar_294;
           ivar_294 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (ltedfapegproof__qstack_adt_t)ivar_10);
           ivar_300 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildloop((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_58_t)ivar_6, (ltedfapegproof_array_52_t)ivar_292, (ltedfapegproof__qstack_adt_t)ivar_294, (uint8_t)ivar_31, (uint32_t)ivar_12);
           result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__two((ltedfapeg__ent_adt_t)ivar_298, (ltedfapegproof__parsetree_adt_t)ivar_299, (ltedfapegproof__parsetree_adt_t)ivar_300);
};
};
};

        
        return result;
}

ltedfapegproof_funtype_60_t ltedfapegproof__buildproof(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5){
        ltedfapegproof_funtype_60_t  result;
        ltedfapegproof_closure_61_t cl6160;
        cl6160 = new_ltedfapegproof_closure_61();
        cl6160->fvar_1 = (uint32_t)ivar_1;
        cl6160->fvar_2 = (uint8_t)ivar_5;
        cl6160->fvar_3 = (uint32_t)ivar_4;
        cl6160->fvar_4 = (ltedfapegproof_array_50_t)ivar_3;
        if (cl6160->fvar_4 != NULL) cl6160->fvar_4->count++;
        cl6160->fvar_5 = (ltedfapeg__lang_spec_t)ivar_2;
        if (cl6160->fvar_5 != NULL) cl6160->fvar_5->count++;
        release_ltedfapegproof_array_50(ivar_3);
        release_ltedfapeg__lang_spec(ivar_2);
        result = (ltedfapegproof_funtype_60_t)cl6160;

        
        return result;
}

bool_t ltedfapegproof__allgoodentriesp(ltedfapegproof__parsetree_adt_t ivar_1){
        bool_t  result;
        bool_t ivar_10;
        ivar_1->count++;
        ivar_10 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_1);
        if (ivar_10){ 
             ltedfapeg__ent_adt_t ivar_3;
             ivar_3 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_1);
             result = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_3);
} else {
        
             bool_t ivar_31;
             ivar_1->count++;
             ivar_31 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_1);
             if (ivar_31){  
           ltedfapeg__ent_adt_t ivar_14;
           ivar_1->count++;
           ivar_14 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_1);
           ltedfapegproof__parsetree_adt_t ivar_15;
           ivar_15 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_1);
           bool_t ivar_22;
           ivar_22 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_14);
           if (ivar_22){   
           result = (bool_t)ltedfapegproof__allgoodentriesp((ltedfapegproof__parsetree_adt_t)ivar_15);
} else {
           
           release_ltedfapegproof__parsetree_adt(ivar_15);
           result = (bool_t) false;
};
} else {
             
           ltedfapeg__ent_adt_t ivar_35;
           ivar_1->count++;
           ivar_35 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_1);
           ltedfapegproof__parsetree_adt_t ivar_36;
           ivar_1->count++;
           ivar_36 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_1);
           ltedfapegproof__parsetree_adt_t ivar_37;
           ivar_37 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subtwo((ltedfapegproof__parsetree_adt_t)ivar_1);
           bool_t ivar_47;
           ivar_47 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_35);
           if (ivar_47){   
           bool_t ivar_52;
           ivar_52 = (bool_t)ltedfapegproof__allgoodentriesp((ltedfapegproof__parsetree_adt_t)ivar_36);
           if (ivar_52){    
            result = (bool_t)ltedfapegproof__allgoodentriesp((ltedfapegproof__parsetree_adt_t)ivar_37);
} else {
           
            release_ltedfapegproof__parsetree_adt(ivar_37);
            result = (bool_t) false;
};
} else {
           
           release_ltedfapegproof__parsetree_adt(ivar_37);
           release_ltedfapegproof__parsetree_adt(ivar_36);
           result = (bool_t) false;
};
};
};

        
        return result;
}