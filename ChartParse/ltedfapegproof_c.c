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
        y->nt = (uint8_t)x->nt;
        y->entry = x->entry;
        if (y->entry != NULL){y->entry->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof__zero(ltedfapegproof__zero_t x, ltedfapegproof__zero_t y){
        bool_t tmp = true;
        tmp = tmp && x->ltedfapegproof__parsetree_adt_index == y->ltedfapegproof__parsetree_adt_index;
        tmp = tmp && x->nt == y->nt;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->entry, y->entry);
        return tmp;}

char * json_ltedfapegproof__zero(ltedfapegproof__zero_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(47);
         sprintf(fld0, "\"ltedfapegproof__parsetree_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ltedfapegproof__parsetree_adt_index));
        char * fld1 = safe_malloc(14);
         sprintf(fld1, "\"nt\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->nt));
        char * fld2 = safe_malloc(17);
         sprintf(fld2, "\"entry\" : ");
        tmp[2] = safe_strcat(fld2, json_ltedfapeg__ent_adt(x->entry));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
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

ltedfapegproof__zero_t update_ltedfapegproof__zero_nt(ltedfapegproof__zero_t x, uint8_t v){
        ltedfapegproof__zero_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof__zero(x); x->count--;};
        y->nt = (uint8_t)v;
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
        y->nt = (uint8_t)x->nt;
        y->entry = x->entry;
        if (y->entry != NULL){y->entry->count++;};
        y->subone = x->subone;
        if (y->subone != NULL){y->subone->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof__one(ltedfapegproof__one_t x, ltedfapegproof__one_t y){
        bool_t tmp = true;
        tmp = tmp && x->ltedfapegproof__parsetree_adt_index == y->ltedfapegproof__parsetree_adt_index;
        tmp = tmp && x->nt == y->nt;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->entry, y->entry);
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->subone, y->subone);
        return tmp;}

char * json_ltedfapegproof__one(ltedfapegproof__one_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(47);
         sprintf(fld0, "\"ltedfapegproof__parsetree_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ltedfapegproof__parsetree_adt_index));
        char * fld1 = safe_malloc(14);
         sprintf(fld1, "\"nt\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->nt));
        char * fld2 = safe_malloc(17);
         sprintf(fld2, "\"entry\" : ");
        tmp[2] = safe_strcat(fld2, json_ltedfapeg__ent_adt(x->entry));
        char * fld3 = safe_malloc(18);
         sprintf(fld3, "\"subone\" : ");
        tmp[3] = safe_strcat(fld3, json_ltedfapegproof__parsetree_adt(x->subone));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
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

ltedfapegproof__one_t update_ltedfapegproof__one_nt(ltedfapegproof__one_t x, uint8_t v){
        ltedfapegproof__one_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof__one(x); x->count--;};
        y->nt = (uint8_t)v;
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
        y->nt = (uint8_t)x->nt;
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
        tmp = tmp && x->nt == y->nt;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->entry, y->entry);
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->subone, y->subone);
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->subtwo, y->subtwo);
        return tmp;}

char * json_ltedfapegproof__two(ltedfapegproof__two_t x){
        char * tmp[5]; 
        char * fld0 = safe_malloc(47);
         sprintf(fld0, "\"ltedfapegproof__parsetree_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ltedfapegproof__parsetree_adt_index));
        char * fld1 = safe_malloc(14);
         sprintf(fld1, "\"nt\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->nt));
        char * fld2 = safe_malloc(17);
         sprintf(fld2, "\"entry\" : ");
        tmp[2] = safe_strcat(fld2, json_ltedfapeg__ent_adt(x->entry));
        char * fld3 = safe_malloc(18);
         sprintf(fld3, "\"subone\" : ");
        tmp[3] = safe_strcat(fld3, json_ltedfapegproof__parsetree_adt(x->subone));
        char * fld4 = safe_malloc(18);
         sprintf(fld4, "\"subtwo\" : ");
        tmp[4] = safe_strcat(fld4, json_ltedfapegproof__parsetree_adt(x->subtwo));
         char * result = json_list_with_sep(tmp, 5,  '{', ',', '}');
         for (uint32_t i = 0; i < 5; i++) free(tmp[i]);
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

ltedfapegproof__two_t update_ltedfapegproof__two_nt(ltedfapegproof__two_t x, uint8_t v){
        ltedfapegproof__two_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof__two(x); x->count--;};
        y->nt = (uint8_t)v;
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


ltedfapegproof_record_6_t new_ltedfapegproof_record_6(void){
        ltedfapegproof_record_6_t tmp = (ltedfapegproof_record_6_t) safe_malloc(sizeof(struct ltedfapegproof_record_6_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_6(ltedfapegproof_record_6_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_6_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_6((ltedfapegproof_record_6_t)x);
}

ltedfapegproof_record_6_t copy_ltedfapegproof_record_6(ltedfapegproof_record_6_t x){
        ltedfapegproof_record_6_t y = new_ltedfapegproof_record_6();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_6(ltedfapegproof_record_6_t x, ltedfapegproof_record_6_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_2, y->project_2);
        return tmp;}

char * json_ltedfapegproof_record_6(ltedfapegproof_record_6_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltedfapeg__ent_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_6_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_6_t T){
        return equal_ltedfapegproof_record_6((ltedfapegproof_record_6_t)x, (ltedfapegproof_record_6_t)y);
}

char * json_ltedfapegproof_record_6_ptr(pointer_t x, actual_ltedfapegproof_record_6_t T){
        return json_ltedfapegproof_record_6((ltedfapegproof_record_6_t)x);
}

actual_ltedfapegproof_record_6_t actual_ltedfapegproof_record_6(){
        actual_ltedfapegproof_record_6_t new = (actual_ltedfapegproof_record_6_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_6_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_6_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_6_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_6_ptr);
 

 
        return new;
 };

ltedfapegproof_record_6_t update_ltedfapegproof_record_6_project_1(ltedfapegproof_record_6_t x, uint8_t v){
        ltedfapegproof_record_6_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_6(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_6_t update_ltedfapegproof_record_6_project_2(ltedfapegproof_record_6_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_6_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltedfapeg__ent_adt(x->project_2);};}
        else {y = copy_ltedfapegproof_record_6(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltedfapeg__ent_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_7(ltedfapegproof_funtype_7_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_7_t copy_ltedfapegproof_funtype_7(ltedfapegproof_funtype_7_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_7(ltedfapegproof_funtype_7_t x, ltedfapegproof_funtype_7_t y){
        return false;}

char* json_ltedfapegproof_funtype_7(ltedfapegproof_funtype_7_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"ltedfapegproof_funtype_7\""); return result;}


ltedfapegproof_record_8_t new_ltedfapegproof_record_8(void){
        ltedfapegproof_record_8_t tmp = (ltedfapegproof_record_8_t) safe_malloc(sizeof(struct ltedfapegproof_record_8_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_8(ltedfapegproof_record_8_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_8_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_8((ltedfapegproof_record_8_t)x);
}

ltedfapegproof_record_8_t copy_ltedfapegproof_record_8(ltedfapegproof_record_8_t x){
        ltedfapegproof_record_8_t y = new_ltedfapegproof_record_8();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        mpz_set(y->project_3, x->project_3);
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_8(ltedfapegproof_record_8_t x, ltedfapegproof_record_8_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_2, y->project_2);tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        return tmp;}

char * json_ltedfapegproof_record_8(ltedfapegproof_record_8_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltedfapeg__ent_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_mpz(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_8_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_8_t T){
        return equal_ltedfapegproof_record_8((ltedfapegproof_record_8_t)x, (ltedfapegproof_record_8_t)y);
}

char * json_ltedfapegproof_record_8_ptr(pointer_t x, actual_ltedfapegproof_record_8_t T){
        return json_ltedfapegproof_record_8((ltedfapegproof_record_8_t)x);
}

actual_ltedfapegproof_record_8_t actual_ltedfapegproof_record_8(){
        actual_ltedfapegproof_record_8_t new = (actual_ltedfapegproof_record_8_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_8_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_8_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_8_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_8_ptr);
 

 
        return new;
 };

ltedfapegproof_record_8_t update_ltedfapegproof_record_8_project_1(ltedfapegproof_record_8_t x, uint8_t v){
        ltedfapegproof_record_8_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_8(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_8_t update_ltedfapegproof_record_8_project_2(ltedfapegproof_record_8_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_8_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltedfapeg__ent_adt(x->project_2);};}
        else {y = copy_ltedfapegproof_record_8(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_8_t update_ltedfapegproof_record_8_project_3(ltedfapegproof_record_8_t x, mpz_ptr_t v){
        ltedfapegproof_record_8_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_8(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}



void release_ltedfapegproof_funtype_9(ltedfapegproof_funtype_9_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_9_t copy_ltedfapegproof_funtype_9(ltedfapegproof_funtype_9_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_9(ltedfapegproof_funtype_9_t x, ltedfapegproof_funtype_9_t y){
        return false;}

char* json_ltedfapegproof_funtype_9(ltedfapegproof_funtype_9_t x){char * result = safe_malloc(34); sprintf(result, "%s", "\"ltedfapegproof_funtype_9\""); return result;}


ltedfapegproof_record_10_t new_ltedfapegproof_record_10(void){
        ltedfapegproof_record_10_t tmp = (ltedfapegproof_record_10_t) safe_malloc(sizeof(struct ltedfapegproof_record_10_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_10(ltedfapegproof_record_10_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_10_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_10((ltedfapegproof_record_10_t)x);
}

ltedfapegproof_record_10_t copy_ltedfapegproof_record_10(ltedfapegproof_record_10_t x){
        ltedfapegproof_record_10_t y = new_ltedfapegproof_record_10();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        mpz_set(y->project_3, x->project_3);
        mpz_set(y->project_4, x->project_4);
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_10(ltedfapegproof_record_10_t x, ltedfapegproof_record_10_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_2, y->project_2);tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);tmp = tmp && (mpz_cmp(x->project_4, y->project_4) == 0);
        return tmp;}

char * json_ltedfapegproof_record_10(ltedfapegproof_record_10_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltedfapeg__ent_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_mpz(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_mpz(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_10_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_10_t T){
        return equal_ltedfapegproof_record_10((ltedfapegproof_record_10_t)x, (ltedfapegproof_record_10_t)y);
}

char * json_ltedfapegproof_record_10_ptr(pointer_t x, actual_ltedfapegproof_record_10_t T){
        return json_ltedfapegproof_record_10((ltedfapegproof_record_10_t)x);
}

actual_ltedfapegproof_record_10_t actual_ltedfapegproof_record_10(){
        actual_ltedfapegproof_record_10_t new = (actual_ltedfapegproof_record_10_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_10_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_10_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_10_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_10_ptr);
 

 
        return new;
 };

ltedfapegproof_record_10_t update_ltedfapegproof_record_10_project_1(ltedfapegproof_record_10_t x, uint8_t v){
        ltedfapegproof_record_10_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_10(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_10_t update_ltedfapegproof_record_10_project_2(ltedfapegproof_record_10_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_10_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltedfapeg__ent_adt(x->project_2);};}
        else {y = copy_ltedfapegproof_record_10(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_10_t update_ltedfapegproof_record_10_project_3(ltedfapegproof_record_10_t x, mpz_ptr_t v){
        ltedfapegproof_record_10_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_10(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}

ltedfapegproof_record_10_t update_ltedfapegproof_record_10_project_4(ltedfapegproof_record_10_t x, mpz_ptr_t v){
        ltedfapegproof_record_10_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_10(x); x->count--;};
        mpz_set(y->project_4, v);
        return y;}



void release_ltedfapegproof_funtype_11(ltedfapegproof_funtype_11_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_11_t copy_ltedfapegproof_funtype_11(ltedfapegproof_funtype_11_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_11(ltedfapegproof_funtype_11_t x, ltedfapegproof_funtype_11_t y){
        return false;}

char* json_ltedfapegproof_funtype_11(ltedfapegproof_funtype_11_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_11\""); return result;}


mpz_ptr_t f_ltedfapegproof_closure_12(struct ltedfapegproof_closure_12_s * closure, ltedfapegproof__parsetree_adt_t bvar){
        mpz_ptr_t result = h_ltedfapegproof_closure_12(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

mpz_ptr_t m_ltedfapegproof_closure_12(struct ltedfapegproof_closure_12_s * closure, ltedfapegproof__parsetree_adt_t bvar){
        return h_ltedfapegproof_closure_12(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

mpz_ptr_t h_ltedfapegproof_closure_12(ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_funtype_9_t ivar_3, ltedfapegproof_funtype_11_t ivar_5, ltedfapegproof_funtype_7_t ivar_1){
        mpz_ptr_t result;
        /* red */ ltedfapegproof_funtype_5_t ivar_9;
        ivar_1->count++;
        ivar_3->count++;
        ivar_5->count++;
        ivar_9 = (ltedfapegproof_funtype_5_t)ltedfapegproof__reduce_nat__1((ltedfapegproof_funtype_7_t)ivar_1, (ltedfapegproof_funtype_9_t)ivar_3, (ltedfapegproof_funtype_11_t)ivar_5);
        bool_t ivar_40;
        ivar_8->count++;
        ivar_40 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_8);
        if (ivar_40){ 
             release_ltedfapegproof_funtype_5(ivar_9);
             uint8_t ivar_25;
             ivar_8->count++;
             ivar_25 = (uint8_t)ltedfapegproof__parsetree_adt_nt((ltedfapegproof__parsetree_adt_t)ivar_8);
             ltedfapeg__ent_adt_t ivar_26;
             ivar_26 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
             mpz_mk_set(result, ivar_1->ftbl->mptr(ivar_1, ivar_25, ivar_26));
} else {
        
             bool_t ivar_70;
             ivar_8->count++;
             ivar_70 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_8);
             if (ivar_70){  
           uint8_t ivar_44;
           ivar_8->count++;
           ivar_44 = (uint8_t)ltedfapegproof__parsetree_adt_nt((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapeg__ent_adt_t ivar_45;
           ivar_8->count++;
           ivar_45 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_46;
           ivar_46 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           mpz_ptr_t ivar_69;
           mpz_mk_set(ivar_69, ivar_9->ftbl->fptr(ivar_9, ivar_46));
           ivar_9->ftbl->rptr(ivar_9);
           mpz_mk_set(result, ivar_3->ftbl->mptr(ivar_3, ivar_44, ivar_45, ivar_69));
} else {
             
           uint8_t ivar_74;
           ivar_8->count++;
           ivar_74 = (uint8_t)ltedfapegproof__parsetree_adt_nt((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapeg__ent_adt_t ivar_75;
           ivar_8->count++;
           ivar_75 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_76;
           ivar_8->count++;
           ivar_76 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_77;
           ivar_77 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subtwo((ltedfapegproof__parsetree_adt_t)ivar_8);
           mpz_ptr_t ivar_109;
           mpz_mk_set(ivar_109, ivar_9->ftbl->fptr(ivar_9, ivar_76));
           mpz_ptr_t ivar_110;
           mpz_mk_set(ivar_110, ivar_9->ftbl->fptr(ivar_9, ivar_77));
           ivar_9->ftbl->rptr(ivar_9);
           mpz_mk_set(result, ivar_5->ftbl->mptr(ivar_5, ivar_74, ivar_75, ivar_109, ivar_110));
};
};

        return result;
}

ltedfapegproof_closure_12_t new_ltedfapegproof_closure_12(void){
        static struct ltedfapegproof_funtype_5_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ltedfapegproof_funtype_5_t, ltedfapegproof__parsetree_adt_t))&f_ltedfapegproof_closure_12, .mptr = (mpz_ptr_t (*)(ltedfapegproof_funtype_5_t, ltedfapegproof__parsetree_adt_t))&m_ltedfapegproof_closure_12, .rptr =  (void (*)(ltedfapegproof_funtype_5_t))&release_ltedfapegproof_closure_12, .cptr = (ltedfapegproof_funtype_5_t (*)(ltedfapegproof_funtype_5_t))&copy_ltedfapegproof_closure_12};
        ltedfapegproof_closure_12_t tmp = (ltedfapegproof_closure_12_t) safe_malloc(sizeof(struct ltedfapegproof_closure_12_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_12(ltedfapegproof_funtype_5_t closure){
        ltedfapegproof_closure_12_t x = (ltedfapegproof_closure_12_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_9(x->fvar_1);
         release_ltedfapegproof_funtype_11(x->fvar_2);
         release_ltedfapegproof_funtype_7(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_12_t copy_ltedfapegproof_closure_12(ltedfapegproof_closure_12_t x){
        ltedfapegproof_closure_12_t y = new_ltedfapegproof_closure_12();
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


ltedfapegproof_record_13_t new_ltedfapegproof_record_13(void){
        ltedfapegproof_record_13_t tmp = (ltedfapegproof_record_13_t) safe_malloc(sizeof(struct ltedfapegproof_record_13_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_13(ltedfapegproof_record_13_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_2);
         release_ltedfapegproof__parsetree_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_13_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_13((ltedfapegproof_record_13_t)x);
}

ltedfapegproof_record_13_t copy_ltedfapegproof_record_13(ltedfapegproof_record_13_t x){
        ltedfapegproof_record_13_t y = new_ltedfapegproof_record_13();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_13(ltedfapegproof_record_13_t x, ltedfapegproof_record_13_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_2, y->project_2);
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->project_3, y->project_3);
        return tmp;}

char * json_ltedfapegproof_record_13(ltedfapegproof_record_13_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltedfapeg__ent_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ltedfapegproof__parsetree_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_13_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_13_t T){
        return equal_ltedfapegproof_record_13((ltedfapegproof_record_13_t)x, (ltedfapegproof_record_13_t)y);
}

char * json_ltedfapegproof_record_13_ptr(pointer_t x, actual_ltedfapegproof_record_13_t T){
        return json_ltedfapegproof_record_13((ltedfapegproof_record_13_t)x);
}

actual_ltedfapegproof_record_13_t actual_ltedfapegproof_record_13(){
        actual_ltedfapegproof_record_13_t new = (actual_ltedfapegproof_record_13_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_13_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_13_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_13_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_13_ptr);
 

 
        return new;
 };

ltedfapegproof_record_13_t update_ltedfapegproof_record_13_project_1(ltedfapegproof_record_13_t x, uint8_t v){
        ltedfapegproof_record_13_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_13(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_13_t update_ltedfapegproof_record_13_project_2(ltedfapegproof_record_13_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_13_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltedfapeg__ent_adt(x->project_2);};}
        else {y = copy_ltedfapegproof_record_13(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_13_t update_ltedfapegproof_record_13_project_3(ltedfapegproof_record_13_t x, ltedfapegproof__parsetree_adt_t v){
        ltedfapegproof_record_13_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ltedfapegproof__parsetree_adt(x->project_3);};}
        else {y = copy_ltedfapegproof_record_13(x); x->count--; y->project_3->count--;};
        y->project_3 = (ltedfapegproof__parsetree_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_14(ltedfapegproof_funtype_14_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_14_t copy_ltedfapegproof_funtype_14(ltedfapegproof_funtype_14_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_14(ltedfapegproof_funtype_14_t x, ltedfapegproof_funtype_14_t y){
        return false;}

char* json_ltedfapegproof_funtype_14(ltedfapegproof_funtype_14_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_14\""); return result;}


ltedfapegproof_record_15_t new_ltedfapegproof_record_15(void){
        ltedfapegproof_record_15_t tmp = (ltedfapegproof_record_15_t) safe_malloc(sizeof(struct ltedfapegproof_record_15_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_15(ltedfapegproof_record_15_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_2);
         release_ltedfapegproof__parsetree_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_15_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_15((ltedfapegproof_record_15_t)x);
}

ltedfapegproof_record_15_t copy_ltedfapegproof_record_15(ltedfapegproof_record_15_t x){
        ltedfapegproof_record_15_t y = new_ltedfapegproof_record_15();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        mpz_set(y->project_3, x->project_3);
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_15(ltedfapegproof_record_15_t x, ltedfapegproof_record_15_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_2, y->project_2);tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltedfapegproof_record_15(ltedfapegproof_record_15_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltedfapeg__ent_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_mpz(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_ltedfapegproof__parsetree_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_15_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_15_t T){
        return equal_ltedfapegproof_record_15((ltedfapegproof_record_15_t)x, (ltedfapegproof_record_15_t)y);
}

char * json_ltedfapegproof_record_15_ptr(pointer_t x, actual_ltedfapegproof_record_15_t T){
        return json_ltedfapegproof_record_15((ltedfapegproof_record_15_t)x);
}

actual_ltedfapegproof_record_15_t actual_ltedfapegproof_record_15(){
        actual_ltedfapegproof_record_15_t new = (actual_ltedfapegproof_record_15_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_15_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_15_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_15_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_15_ptr);
 

 
        return new;
 };

ltedfapegproof_record_15_t update_ltedfapegproof_record_15_project_1(ltedfapegproof_record_15_t x, uint8_t v){
        ltedfapegproof_record_15_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_15(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_15_t update_ltedfapegproof_record_15_project_2(ltedfapegproof_record_15_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_15_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltedfapeg__ent_adt(x->project_2);};}
        else {y = copy_ltedfapegproof_record_15(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_15_t update_ltedfapegproof_record_15_project_3(ltedfapegproof_record_15_t x, mpz_ptr_t v){
        ltedfapegproof_record_15_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_15(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}

ltedfapegproof_record_15_t update_ltedfapegproof_record_15_project_4(ltedfapegproof_record_15_t x, ltedfapegproof__parsetree_adt_t v){
        ltedfapegproof_record_15_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ltedfapegproof__parsetree_adt(x->project_4);};}
        else {y = copy_ltedfapegproof_record_15(x); x->count--; y->project_4->count--;};
        y->project_4 = (ltedfapegproof__parsetree_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_16(ltedfapegproof_funtype_16_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_16_t copy_ltedfapegproof_funtype_16(ltedfapegproof_funtype_16_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_16(ltedfapegproof_funtype_16_t x, ltedfapegproof_funtype_16_t y){
        return false;}

char* json_ltedfapegproof_funtype_16(ltedfapegproof_funtype_16_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_16\""); return result;}


ltedfapegproof_record_17_t new_ltedfapegproof_record_17(void){
        ltedfapegproof_record_17_t tmp = (ltedfapegproof_record_17_t) safe_malloc(sizeof(struct ltedfapegproof_record_17_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_17(ltedfapegproof_record_17_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_2);
         release_ltedfapegproof__parsetree_adt(x->project_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_17_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_17((ltedfapegproof_record_17_t)x);
}

ltedfapegproof_record_17_t copy_ltedfapegproof_record_17(ltedfapegproof_record_17_t x){
        ltedfapegproof_record_17_t y = new_ltedfapegproof_record_17();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        mpz_set(y->project_3, x->project_3);
        mpz_set(y->project_4, x->project_4);
        y->project_5 = x->project_5;
        if (y->project_5 != NULL){y->project_5->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_17(ltedfapegproof_record_17_t x, ltedfapegproof_record_17_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_2, y->project_2);tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);tmp = tmp && (mpz_cmp(x->project_4, y->project_4) == 0);
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->project_5, y->project_5);
        return tmp;}

char * json_ltedfapegproof_record_17(ltedfapegproof_record_17_t x){
        char * tmp[5]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltedfapeg__ent_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_mpz(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_mpz(x->project_4));
        char * fld4 = safe_malloc(21);
         sprintf(fld4, "\"project_5\" : ");
        tmp[4] = safe_strcat(fld4, json_ltedfapegproof__parsetree_adt(x->project_5));
         char * result = json_list_with_sep(tmp, 5,  '{', ',', '}');
         for (uint32_t i = 0; i < 5; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_17_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_17_t T){
        return equal_ltedfapegproof_record_17((ltedfapegproof_record_17_t)x, (ltedfapegproof_record_17_t)y);
}

char * json_ltedfapegproof_record_17_ptr(pointer_t x, actual_ltedfapegproof_record_17_t T){
        return json_ltedfapegproof_record_17((ltedfapegproof_record_17_t)x);
}

actual_ltedfapegproof_record_17_t actual_ltedfapegproof_record_17(){
        actual_ltedfapegproof_record_17_t new = (actual_ltedfapegproof_record_17_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_17_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_17_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_17_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_17_ptr);
 

 
        return new;
 };

ltedfapegproof_record_17_t update_ltedfapegproof_record_17_project_1(ltedfapegproof_record_17_t x, uint8_t v){
        ltedfapegproof_record_17_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_17(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_17_t update_ltedfapegproof_record_17_project_2(ltedfapegproof_record_17_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_17_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltedfapeg__ent_adt(x->project_2);};}
        else {y = copy_ltedfapegproof_record_17(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_17_t update_ltedfapegproof_record_17_project_3(ltedfapegproof_record_17_t x, mpz_ptr_t v){
        ltedfapegproof_record_17_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_17(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}

ltedfapegproof_record_17_t update_ltedfapegproof_record_17_project_4(ltedfapegproof_record_17_t x, mpz_ptr_t v){
        ltedfapegproof_record_17_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_17(x); x->count--;};
        mpz_set(y->project_4, v);
        return y;}

ltedfapegproof_record_17_t update_ltedfapegproof_record_17_project_5(ltedfapegproof_record_17_t x, ltedfapegproof__parsetree_adt_t v){
        ltedfapegproof_record_17_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_5 != NULL){release_ltedfapegproof__parsetree_adt(x->project_5);};}
        else {y = copy_ltedfapegproof_record_17(x); x->count--; y->project_5->count--;};
        y->project_5 = (ltedfapegproof__parsetree_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_18(ltedfapegproof_funtype_18_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_18_t copy_ltedfapegproof_funtype_18(ltedfapegproof_funtype_18_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_18(ltedfapegproof_funtype_18_t x, ltedfapegproof_funtype_18_t y){
        return false;}

char* json_ltedfapegproof_funtype_18(ltedfapegproof_funtype_18_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_18\""); return result;}


mpz_ptr_t f_ltedfapegproof_closure_19(struct ltedfapegproof_closure_19_s * closure, ltedfapegproof__parsetree_adt_t bvar){
        mpz_ptr_t result = h_ltedfapegproof_closure_19(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

mpz_ptr_t m_ltedfapegproof_closure_19(struct ltedfapegproof_closure_19_s * closure, ltedfapegproof__parsetree_adt_t bvar){
        return h_ltedfapegproof_closure_19(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

mpz_ptr_t h_ltedfapegproof_closure_19(ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_funtype_16_t ivar_3, ltedfapegproof_funtype_18_t ivar_5, ltedfapegproof_funtype_14_t ivar_1){
        mpz_ptr_t result;
        /* red */ ltedfapegproof_funtype_5_t ivar_9;
        ivar_1->count++;
        ivar_3->count++;
        ivar_5->count++;
        ivar_9 = (ltedfapegproof_funtype_5_t)ltedfapegproof__REDUCE_nat__1((ltedfapegproof_funtype_14_t)ivar_1, (ltedfapegproof_funtype_16_t)ivar_3, (ltedfapegproof_funtype_18_t)ivar_5);
        bool_t ivar_42;
        ivar_8->count++;
        ivar_42 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_8);
        if (ivar_42){ 
             release_ltedfapegproof_funtype_5(ivar_9);
             uint8_t ivar_25;
             ivar_8->count++;
             ivar_25 = (uint8_t)ltedfapegproof__parsetree_adt_nt((ltedfapegproof__parsetree_adt_t)ivar_8);
             ltedfapeg__ent_adt_t ivar_26;
             ivar_8->count++;
             ivar_26 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
             mpz_mk_set(result, ivar_1->ftbl->mptr(ivar_1, ivar_25, ivar_26, ivar_8));
} else {
        
             bool_t ivar_74;
             ivar_8->count++;
             ivar_74 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_8);
             if (ivar_74){  
           uint8_t ivar_46;
           ivar_8->count++;
           ivar_46 = (uint8_t)ltedfapegproof__parsetree_adt_nt((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapeg__ent_adt_t ivar_47;
           ivar_8->count++;
           ivar_47 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_48;
           ivar_8->count++;
           ivar_48 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           mpz_ptr_t ivar_72;
           mpz_mk_set(ivar_72, ivar_9->ftbl->fptr(ivar_9, ivar_48));
           ivar_9->ftbl->rptr(ivar_9);
           mpz_mk_set(result, ivar_3->ftbl->mptr(ivar_3, ivar_46, ivar_47, ivar_72, ivar_8));
} else {
             
           uint8_t ivar_78;
           ivar_8->count++;
           ivar_78 = (uint8_t)ltedfapegproof__parsetree_adt_nt((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapeg__ent_adt_t ivar_79;
           ivar_8->count++;
           ivar_79 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_80;
           ivar_8->count++;
           ivar_80 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_81;
           ivar_8->count++;
           ivar_81 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subtwo((ltedfapegproof__parsetree_adt_t)ivar_8);
           mpz_ptr_t ivar_114;
           mpz_mk_set(ivar_114, ivar_9->ftbl->fptr(ivar_9, ivar_80));
           mpz_ptr_t ivar_115;
           mpz_mk_set(ivar_115, ivar_9->ftbl->fptr(ivar_9, ivar_81));
           ivar_9->ftbl->rptr(ivar_9);
           mpz_mk_set(result, ivar_5->ftbl->mptr(ivar_5, ivar_78, ivar_79, ivar_114, ivar_115, ivar_8));
};
};

        return result;
}

ltedfapegproof_closure_19_t new_ltedfapegproof_closure_19(void){
        static struct ltedfapegproof_funtype_5_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ltedfapegproof_funtype_5_t, ltedfapegproof__parsetree_adt_t))&f_ltedfapegproof_closure_19, .mptr = (mpz_ptr_t (*)(ltedfapegproof_funtype_5_t, ltedfapegproof__parsetree_adt_t))&m_ltedfapegproof_closure_19, .rptr =  (void (*)(ltedfapegproof_funtype_5_t))&release_ltedfapegproof_closure_19, .cptr = (ltedfapegproof_funtype_5_t (*)(ltedfapegproof_funtype_5_t))&copy_ltedfapegproof_closure_19};
        ltedfapegproof_closure_19_t tmp = (ltedfapegproof_closure_19_t) safe_malloc(sizeof(struct ltedfapegproof_closure_19_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_19(ltedfapegproof_funtype_5_t closure){
        ltedfapegproof_closure_19_t x = (ltedfapegproof_closure_19_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_16(x->fvar_1);
         release_ltedfapegproof_funtype_18(x->fvar_2);
         release_ltedfapegproof_funtype_14(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_19_t copy_ltedfapegproof_closure_19(ltedfapegproof_closure_19_t x){
        ltedfapegproof_closure_19_t y = new_ltedfapegproof_closure_19();
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

void release_ltedfapegproof_funtype_20(ltedfapegproof_funtype_20_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_20_t copy_ltedfapegproof_funtype_20(ltedfapegproof_funtype_20_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_20(ltedfapegproof_funtype_20_t x, ltedfapegproof_funtype_20_t y){
        return false;}

char* json_ltedfapegproof_funtype_20(ltedfapegproof_funtype_20_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_20\""); return result;}

void release_ltedfapegproof_funtype_21(ltedfapegproof_funtype_21_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_21_t copy_ltedfapegproof_funtype_21(ltedfapegproof_funtype_21_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_21(ltedfapegproof_funtype_21_t x, ltedfapegproof_funtype_21_t y){
        return false;}

char* json_ltedfapegproof_funtype_21(ltedfapegproof_funtype_21_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_21\""); return result;}


ltedfapegproof_record_22_t new_ltedfapegproof_record_22(void){
        ltedfapegproof_record_22_t tmp = (ltedfapegproof_record_22_t) safe_malloc(sizeof(struct ltedfapegproof_record_22_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_22(ltedfapegproof_record_22_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_2);
         release_ordstruct_adt__ordstruct_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_22_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_22((ltedfapegproof_record_22_t)x);
}

ltedfapegproof_record_22_t copy_ltedfapegproof_record_22(ltedfapegproof_record_22_t x){
        ltedfapegproof_record_22_t y = new_ltedfapegproof_record_22();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_22(ltedfapegproof_record_22_t x, ltedfapegproof_record_22_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_2, y->project_2);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        return tmp;}

char * json_ltedfapegproof_record_22(ltedfapegproof_record_22_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltedfapeg__ent_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ordstruct_adt__ordstruct_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_22_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_22_t T){
        return equal_ltedfapegproof_record_22((ltedfapegproof_record_22_t)x, (ltedfapegproof_record_22_t)y);
}

char * json_ltedfapegproof_record_22_ptr(pointer_t x, actual_ltedfapegproof_record_22_t T){
        return json_ltedfapegproof_record_22((ltedfapegproof_record_22_t)x);
}

actual_ltedfapegproof_record_22_t actual_ltedfapegproof_record_22(){
        actual_ltedfapegproof_record_22_t new = (actual_ltedfapegproof_record_22_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_22_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_22_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_22_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_22_ptr);
 

 
        return new;
 };

ltedfapegproof_record_22_t update_ltedfapegproof_record_22_project_1(ltedfapegproof_record_22_t x, uint8_t v){
        ltedfapegproof_record_22_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_22(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_22_t update_ltedfapegproof_record_22_project_2(ltedfapegproof_record_22_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_22_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltedfapeg__ent_adt(x->project_2);};}
        else {y = copy_ltedfapegproof_record_22(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_22_t update_ltedfapegproof_record_22_project_3(ltedfapegproof_record_22_t x, ordstruct_adt__ordstruct_adt_t v){
        ltedfapegproof_record_22_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_ltedfapegproof_record_22(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_23(ltedfapegproof_funtype_23_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_23_t copy_ltedfapegproof_funtype_23(ltedfapegproof_funtype_23_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_23(ltedfapegproof_funtype_23_t x, ltedfapegproof_funtype_23_t y){
        return false;}

char* json_ltedfapegproof_funtype_23(ltedfapegproof_funtype_23_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_23\""); return result;}


ltedfapegproof_record_24_t new_ltedfapegproof_record_24(void){
        ltedfapegproof_record_24_t tmp = (ltedfapegproof_record_24_t) safe_malloc(sizeof(struct ltedfapegproof_record_24_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_24(ltedfapegproof_record_24_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_2);
         release_ordstruct_adt__ordstruct_adt(x->project_3);
         release_ordstruct_adt__ordstruct_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_24_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_24((ltedfapegproof_record_24_t)x);
}

ltedfapegproof_record_24_t copy_ltedfapegproof_record_24(ltedfapegproof_record_24_t x){
        ltedfapegproof_record_24_t y = new_ltedfapegproof_record_24();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_24(ltedfapegproof_record_24_t x, ltedfapegproof_record_24_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_2, y->project_2);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltedfapegproof_record_24(ltedfapegproof_record_24_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltedfapeg__ent_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ordstruct_adt__ordstruct_adt(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_ordstruct_adt__ordstruct_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_24_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_24_t T){
        return equal_ltedfapegproof_record_24((ltedfapegproof_record_24_t)x, (ltedfapegproof_record_24_t)y);
}

char * json_ltedfapegproof_record_24_ptr(pointer_t x, actual_ltedfapegproof_record_24_t T){
        return json_ltedfapegproof_record_24((ltedfapegproof_record_24_t)x);
}

actual_ltedfapegproof_record_24_t actual_ltedfapegproof_record_24(){
        actual_ltedfapegproof_record_24_t new = (actual_ltedfapegproof_record_24_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_24_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_24_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_24_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_24_ptr);
 

 
        return new;
 };

ltedfapegproof_record_24_t update_ltedfapegproof_record_24_project_1(ltedfapegproof_record_24_t x, uint8_t v){
        ltedfapegproof_record_24_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_24(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_24_t update_ltedfapegproof_record_24_project_2(ltedfapegproof_record_24_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_24_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltedfapeg__ent_adt(x->project_2);};}
        else {y = copy_ltedfapegproof_record_24(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_24_t update_ltedfapegproof_record_24_project_3(ltedfapegproof_record_24_t x, ordstruct_adt__ordstruct_adt_t v){
        ltedfapegproof_record_24_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_ltedfapegproof_record_24(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

ltedfapegproof_record_24_t update_ltedfapegproof_record_24_project_4(ltedfapegproof_record_24_t x, ordstruct_adt__ordstruct_adt_t v){
        ltedfapegproof_record_24_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_4);};}
        else {y = copy_ltedfapegproof_record_24(x); x->count--; y->project_4->count--;};
        y->project_4 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_25(ltedfapegproof_funtype_25_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_25_t copy_ltedfapegproof_funtype_25(ltedfapegproof_funtype_25_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_25(ltedfapegproof_funtype_25_t x, ltedfapegproof_funtype_25_t y){
        return false;}

char* json_ltedfapegproof_funtype_25(ltedfapegproof_funtype_25_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_25\""); return result;}


ordstruct_adt__ordstruct_adt_t f_ltedfapegproof_closure_26(struct ltedfapegproof_closure_26_s * closure, ltedfapegproof__parsetree_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_ltedfapegproof_closure_26(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_ltedfapegproof_closure_26(struct ltedfapegproof_closure_26_s * closure, ltedfapegproof__parsetree_adt_t bvar){
        return h_ltedfapegproof_closure_26(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

ordstruct_adt__ordstruct_adt_t h_ltedfapegproof_closure_26(ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_funtype_23_t ivar_3, ltedfapegproof_funtype_25_t ivar_5, ltedfapegproof_funtype_21_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ ltedfapegproof_funtype_20_t ivar_9;
        ivar_1->count++;
        ivar_3->count++;
        ivar_5->count++;
        ivar_9 = (ltedfapegproof_funtype_20_t)ltedfapegproof__reduce_ordinal__1((ltedfapegproof_funtype_21_t)ivar_1, (ltedfapegproof_funtype_23_t)ivar_3, (ltedfapegproof_funtype_25_t)ivar_5);
        bool_t ivar_40;
        ivar_8->count++;
        ivar_40 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_8);
        if (ivar_40){ 
             release_ltedfapegproof_funtype_20(ivar_9);
             uint8_t ivar_25;
             ivar_8->count++;
             ivar_25 = (uint8_t)ltedfapegproof__parsetree_adt_nt((ltedfapegproof__parsetree_adt_t)ivar_8);
             ltedfapeg__ent_adt_t ivar_26;
             ivar_26 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->mptr(ivar_1, ivar_25, ivar_26);
} else {
        
             bool_t ivar_70;
             ivar_8->count++;
             ivar_70 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_8);
             if (ivar_70){  
           uint8_t ivar_44;
           ivar_8->count++;
           ivar_44 = (uint8_t)ltedfapegproof__parsetree_adt_nt((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapeg__ent_adt_t ivar_45;
           ivar_8->count++;
           ivar_45 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_46;
           ivar_46 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           ordstruct_adt__ordstruct_adt_t ivar_69;
           ivar_69 = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->fptr(ivar_9, ivar_46);
           ivar_9->ftbl->rptr(ivar_9);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_44, ivar_45, ivar_69);
} else {
             
           uint8_t ivar_74;
           ivar_8->count++;
           ivar_74 = (uint8_t)ltedfapegproof__parsetree_adt_nt((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapeg__ent_adt_t ivar_75;
           ivar_8->count++;
           ivar_75 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_76;
           ivar_8->count++;
           ivar_76 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_77;
           ivar_77 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subtwo((ltedfapegproof__parsetree_adt_t)ivar_8);
           ordstruct_adt__ordstruct_adt_t ivar_109;
           ivar_109 = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->fptr(ivar_9, ivar_76);
           ordstruct_adt__ordstruct_adt_t ivar_110;
           ivar_110 = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->fptr(ivar_9, ivar_77);
           ivar_9->ftbl->rptr(ivar_9);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_5->ftbl->mptr(ivar_5, ivar_74, ivar_75, ivar_109, ivar_110);
};
};

        return result;
}

ltedfapegproof_closure_26_t new_ltedfapegproof_closure_26(void){
        static struct ltedfapegproof_funtype_20_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(ltedfapegproof_funtype_20_t, ltedfapegproof__parsetree_adt_t))&f_ltedfapegproof_closure_26, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(ltedfapegproof_funtype_20_t, ltedfapegproof__parsetree_adt_t))&m_ltedfapegproof_closure_26, .rptr =  (void (*)(ltedfapegproof_funtype_20_t))&release_ltedfapegproof_closure_26, .cptr = (ltedfapegproof_funtype_20_t (*)(ltedfapegproof_funtype_20_t))&copy_ltedfapegproof_closure_26};
        ltedfapegproof_closure_26_t tmp = (ltedfapegproof_closure_26_t) safe_malloc(sizeof(struct ltedfapegproof_closure_26_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_26(ltedfapegproof_funtype_20_t closure){
        ltedfapegproof_closure_26_t x = (ltedfapegproof_closure_26_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_23(x->fvar_1);
         release_ltedfapegproof_funtype_25(x->fvar_2);
         release_ltedfapegproof_funtype_21(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_26_t copy_ltedfapegproof_closure_26(ltedfapegproof_closure_26_t x){
        ltedfapegproof_closure_26_t y = new_ltedfapegproof_closure_26();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_20_htbl_t new_htbl = (ltedfapegproof_funtype_20_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_20_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_20_hashentry_t * new_data = (ltedfapegproof_funtype_20_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_20_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_20_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltedfapegproof_funtype_27(ltedfapegproof_funtype_27_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_27_t copy_ltedfapegproof_funtype_27(ltedfapegproof_funtype_27_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_27(ltedfapegproof_funtype_27_t x, ltedfapegproof_funtype_27_t y){
        return false;}

char* json_ltedfapegproof_funtype_27(ltedfapegproof_funtype_27_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_27\""); return result;}


ltedfapegproof_record_28_t new_ltedfapegproof_record_28(void){
        ltedfapegproof_record_28_t tmp = (ltedfapegproof_record_28_t) safe_malloc(sizeof(struct ltedfapegproof_record_28_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_28(ltedfapegproof_record_28_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_2);
         release_ordstruct_adt__ordstruct_adt(x->project_3);
         release_ltedfapegproof__parsetree_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_28_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_28((ltedfapegproof_record_28_t)x);
}

ltedfapegproof_record_28_t copy_ltedfapegproof_record_28(ltedfapegproof_record_28_t x){
        ltedfapegproof_record_28_t y = new_ltedfapegproof_record_28();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_28(ltedfapegproof_record_28_t x, ltedfapegproof_record_28_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_2, y->project_2);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltedfapegproof_record_28(ltedfapegproof_record_28_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltedfapeg__ent_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ordstruct_adt__ordstruct_adt(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_ltedfapegproof__parsetree_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_28_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_28_t T){
        return equal_ltedfapegproof_record_28((ltedfapegproof_record_28_t)x, (ltedfapegproof_record_28_t)y);
}

char * json_ltedfapegproof_record_28_ptr(pointer_t x, actual_ltedfapegproof_record_28_t T){
        return json_ltedfapegproof_record_28((ltedfapegproof_record_28_t)x);
}

actual_ltedfapegproof_record_28_t actual_ltedfapegproof_record_28(){
        actual_ltedfapegproof_record_28_t new = (actual_ltedfapegproof_record_28_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_28_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_28_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_28_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_28_ptr);
 

 
        return new;
 };

ltedfapegproof_record_28_t update_ltedfapegproof_record_28_project_1(ltedfapegproof_record_28_t x, uint8_t v){
        ltedfapegproof_record_28_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_28(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_28_t update_ltedfapegproof_record_28_project_2(ltedfapegproof_record_28_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_28_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltedfapeg__ent_adt(x->project_2);};}
        else {y = copy_ltedfapegproof_record_28(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_28_t update_ltedfapegproof_record_28_project_3(ltedfapegproof_record_28_t x, ordstruct_adt__ordstruct_adt_t v){
        ltedfapegproof_record_28_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_ltedfapegproof_record_28(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

ltedfapegproof_record_28_t update_ltedfapegproof_record_28_project_4(ltedfapegproof_record_28_t x, ltedfapegproof__parsetree_adt_t v){
        ltedfapegproof_record_28_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ltedfapegproof__parsetree_adt(x->project_4);};}
        else {y = copy_ltedfapegproof_record_28(x); x->count--; y->project_4->count--;};
        y->project_4 = (ltedfapegproof__parsetree_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_29(ltedfapegproof_funtype_29_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_29_t copy_ltedfapegproof_funtype_29(ltedfapegproof_funtype_29_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_29(ltedfapegproof_funtype_29_t x, ltedfapegproof_funtype_29_t y){
        return false;}

char* json_ltedfapegproof_funtype_29(ltedfapegproof_funtype_29_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_29\""); return result;}


ltedfapegproof_record_30_t new_ltedfapegproof_record_30(void){
        ltedfapegproof_record_30_t tmp = (ltedfapegproof_record_30_t) safe_malloc(sizeof(struct ltedfapegproof_record_30_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_30(ltedfapegproof_record_30_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapeg__ent_adt(x->project_2);
         release_ordstruct_adt__ordstruct_adt(x->project_3);
         release_ordstruct_adt__ordstruct_adt(x->project_4);
         release_ltedfapegproof__parsetree_adt(x->project_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_30_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_30((ltedfapegproof_record_30_t)x);
}

ltedfapegproof_record_30_t copy_ltedfapegproof_record_30(ltedfapegproof_record_30_t x){
        ltedfapegproof_record_30_t y = new_ltedfapegproof_record_30();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->project_5 = x->project_5;
        if (y->project_5 != NULL){y->project_5->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_30(ltedfapegproof_record_30_t x, ltedfapegproof_record_30_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->project_2, y->project_2);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_4, y->project_4);
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->project_5, y->project_5);
        return tmp;}

char * json_ltedfapegproof_record_30(ltedfapegproof_record_30_t x){
        char * tmp[5]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltedfapeg__ent_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ordstruct_adt__ordstruct_adt(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_ordstruct_adt__ordstruct_adt(x->project_4));
        char * fld4 = safe_malloc(21);
         sprintf(fld4, "\"project_5\" : ");
        tmp[4] = safe_strcat(fld4, json_ltedfapegproof__parsetree_adt(x->project_5));
         char * result = json_list_with_sep(tmp, 5,  '{', ',', '}');
         for (uint32_t i = 0; i < 5; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_30_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_30_t T){
        return equal_ltedfapegproof_record_30((ltedfapegproof_record_30_t)x, (ltedfapegproof_record_30_t)y);
}

char * json_ltedfapegproof_record_30_ptr(pointer_t x, actual_ltedfapegproof_record_30_t T){
        return json_ltedfapegproof_record_30((ltedfapegproof_record_30_t)x);
}

actual_ltedfapegproof_record_30_t actual_ltedfapegproof_record_30(){
        actual_ltedfapegproof_record_30_t new = (actual_ltedfapegproof_record_30_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_30_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_30_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_30_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_30_ptr);
 

 
        return new;
 };

ltedfapegproof_record_30_t update_ltedfapegproof_record_30_project_1(ltedfapegproof_record_30_t x, uint8_t v){
        ltedfapegproof_record_30_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_30(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_30_t update_ltedfapegproof_record_30_project_2(ltedfapegproof_record_30_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_30_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltedfapeg__ent_adt(x->project_2);};}
        else {y = copy_ltedfapegproof_record_30(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_30_t update_ltedfapegproof_record_30_project_3(ltedfapegproof_record_30_t x, ordstruct_adt__ordstruct_adt_t v){
        ltedfapegproof_record_30_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_ltedfapegproof_record_30(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

ltedfapegproof_record_30_t update_ltedfapegproof_record_30_project_4(ltedfapegproof_record_30_t x, ordstruct_adt__ordstruct_adt_t v){
        ltedfapegproof_record_30_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_4);};}
        else {y = copy_ltedfapegproof_record_30(x); x->count--; y->project_4->count--;};
        y->project_4 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

ltedfapegproof_record_30_t update_ltedfapegproof_record_30_project_5(ltedfapegproof_record_30_t x, ltedfapegproof__parsetree_adt_t v){
        ltedfapegproof_record_30_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_5 != NULL){release_ltedfapegproof__parsetree_adt(x->project_5);};}
        else {y = copy_ltedfapegproof_record_30(x); x->count--; y->project_5->count--;};
        y->project_5 = (ltedfapegproof__parsetree_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_31(ltedfapegproof_funtype_31_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_31_t copy_ltedfapegproof_funtype_31(ltedfapegproof_funtype_31_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_31(ltedfapegproof_funtype_31_t x, ltedfapegproof_funtype_31_t y){
        return false;}

char* json_ltedfapegproof_funtype_31(ltedfapegproof_funtype_31_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_31\""); return result;}


ordstruct_adt__ordstruct_adt_t f_ltedfapegproof_closure_32(struct ltedfapegproof_closure_32_s * closure, ltedfapegproof__parsetree_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_ltedfapegproof_closure_32(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_ltedfapegproof_closure_32(struct ltedfapegproof_closure_32_s * closure, ltedfapegproof__parsetree_adt_t bvar){
        return h_ltedfapegproof_closure_32(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

ordstruct_adt__ordstruct_adt_t h_ltedfapegproof_closure_32(ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_funtype_29_t ivar_3, ltedfapegproof_funtype_31_t ivar_5, ltedfapegproof_funtype_27_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ ltedfapegproof_funtype_20_t ivar_9;
        ivar_1->count++;
        ivar_3->count++;
        ivar_5->count++;
        ivar_9 = (ltedfapegproof_funtype_20_t)ltedfapegproof__REDUCE_ordinal__1((ltedfapegproof_funtype_27_t)ivar_1, (ltedfapegproof_funtype_29_t)ivar_3, (ltedfapegproof_funtype_31_t)ivar_5);
        bool_t ivar_42;
        ivar_8->count++;
        ivar_42 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_8);
        if (ivar_42){ 
             release_ltedfapegproof_funtype_20(ivar_9);
             uint8_t ivar_25;
             ivar_8->count++;
             ivar_25 = (uint8_t)ltedfapegproof__parsetree_adt_nt((ltedfapegproof__parsetree_adt_t)ivar_8);
             ltedfapeg__ent_adt_t ivar_26;
             ivar_8->count++;
             ivar_26 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->mptr(ivar_1, ivar_25, ivar_26, ivar_8);
} else {
        
             bool_t ivar_74;
             ivar_8->count++;
             ivar_74 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_8);
             if (ivar_74){  
           uint8_t ivar_46;
           ivar_8->count++;
           ivar_46 = (uint8_t)ltedfapegproof__parsetree_adt_nt((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapeg__ent_adt_t ivar_47;
           ivar_8->count++;
           ivar_47 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_48;
           ivar_8->count++;
           ivar_48 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           ordstruct_adt__ordstruct_adt_t ivar_72;
           ivar_72 = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->fptr(ivar_9, ivar_48);
           ivar_9->ftbl->rptr(ivar_9);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_46, ivar_47, ivar_72, ivar_8);
} else {
             
           uint8_t ivar_78;
           ivar_8->count++;
           ivar_78 = (uint8_t)ltedfapegproof__parsetree_adt_nt((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapeg__ent_adt_t ivar_79;
           ivar_8->count++;
           ivar_79 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_80;
           ivar_8->count++;
           ivar_80 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_81;
           ivar_8->count++;
           ivar_81 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subtwo((ltedfapegproof__parsetree_adt_t)ivar_8);
           ordstruct_adt__ordstruct_adt_t ivar_114;
           ivar_114 = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->fptr(ivar_9, ivar_80);
           ordstruct_adt__ordstruct_adt_t ivar_115;
           ivar_115 = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->fptr(ivar_9, ivar_81);
           ivar_9->ftbl->rptr(ivar_9);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_5->ftbl->mptr(ivar_5, ivar_78, ivar_79, ivar_114, ivar_115, ivar_8);
};
};

        return result;
}

ltedfapegproof_closure_32_t new_ltedfapegproof_closure_32(void){
        static struct ltedfapegproof_funtype_20_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(ltedfapegproof_funtype_20_t, ltedfapegproof__parsetree_adt_t))&f_ltedfapegproof_closure_32, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(ltedfapegproof_funtype_20_t, ltedfapegproof__parsetree_adt_t))&m_ltedfapegproof_closure_32, .rptr =  (void (*)(ltedfapegproof_funtype_20_t))&release_ltedfapegproof_closure_32, .cptr = (ltedfapegproof_funtype_20_t (*)(ltedfapegproof_funtype_20_t))&copy_ltedfapegproof_closure_32};
        ltedfapegproof_closure_32_t tmp = (ltedfapegproof_closure_32_t) safe_malloc(sizeof(struct ltedfapegproof_closure_32_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_32(ltedfapegproof_funtype_20_t closure){
        ltedfapegproof_closure_32_t x = (ltedfapegproof_closure_32_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_29(x->fvar_1);
         release_ltedfapegproof_funtype_31(x->fvar_2);
         release_ltedfapegproof_funtype_27(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_32_t copy_ltedfapegproof_closure_32(ltedfapegproof_closure_32_t x){
        ltedfapegproof_closure_32_t y = new_ltedfapegproof_closure_32();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_20_htbl_t new_htbl = (ltedfapegproof_funtype_20_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_20_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_20_hashentry_t * new_data = (ltedfapegproof_funtype_20_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_20_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_20_hashentry_s)));
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



void release_ltedfapegproof_funtype_35(ltedfapegproof_funtype_35_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_35_t copy_ltedfapegproof_funtype_35(ltedfapegproof_funtype_35_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_35(ltedfapegproof_funtype_35_t x, ltedfapegproof_funtype_35_t y){
        return false;}

char* json_ltedfapegproof_funtype_35(ltedfapegproof_funtype_35_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_35\""); return result;}

void release_ltedfapegproof_funtype_36(ltedfapegproof_funtype_36_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_36_t copy_ltedfapegproof_funtype_36(ltedfapegproof_funtype_36_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_36(ltedfapegproof_funtype_36_t x, ltedfapegproof_funtype_36_t y){
        return false;}

char* json_ltedfapegproof_funtype_36(ltedfapegproof_funtype_36_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_36\""); return result;}


ltedfapegproof_record_37_t new_ltedfapegproof_record_37(void){
        ltedfapegproof_record_37_t tmp = (ltedfapegproof_record_37_t) safe_malloc(sizeof(struct ltedfapegproof_record_37_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_37(ltedfapegproof_record_37_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_37_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_37((ltedfapegproof_record_37_t)x);
}

ltedfapegproof_record_37_t copy_ltedfapegproof_record_37(ltedfapegproof_record_37_t x){
        ltedfapegproof_record_37_t y = new_ltedfapegproof_record_37();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        mpz_set(y->project_3, x->project_3);
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_37(ltedfapegproof_record_37_t x, ltedfapegproof_record_37_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        return tmp;}

char * json_ltedfapegproof_record_37(ltedfapegproof_record_37_t x){
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

bool_t equal_ltedfapegproof_record_37_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_37_t T){
        return equal_ltedfapegproof_record_37((ltedfapegproof_record_37_t)x, (ltedfapegproof_record_37_t)y);
}

char * json_ltedfapegproof_record_37_ptr(pointer_t x, actual_ltedfapegproof_record_37_t T){
        return json_ltedfapegproof_record_37((ltedfapegproof_record_37_t)x);
}

actual_ltedfapegproof_record_37_t actual_ltedfapegproof_record_37(){
        actual_ltedfapegproof_record_37_t new = (actual_ltedfapegproof_record_37_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_37_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_37_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_37_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_37_ptr);
 

 
        return new;
 };

ltedfapegproof_record_37_t update_ltedfapegproof_record_37_project_1(ltedfapegproof_record_37_t x, uint8_t v){
        ltedfapegproof_record_37_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_37(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_37_t update_ltedfapegproof_record_37_project_2(ltedfapegproof_record_37_t x, uint32_t v){
        ltedfapegproof_record_37_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_37(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

ltedfapegproof_record_37_t update_ltedfapegproof_record_37_project_3(ltedfapegproof_record_37_t x, mpz_ptr_t v){
        ltedfapegproof_record_37_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_37(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}



void release_ltedfapegproof_funtype_38(ltedfapegproof_funtype_38_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_38_t copy_ltedfapegproof_funtype_38(ltedfapegproof_funtype_38_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_38(ltedfapegproof_funtype_38_t x, ltedfapegproof_funtype_38_t y){
        return false;}

char* json_ltedfapegproof_funtype_38(ltedfapegproof_funtype_38_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_38\""); return result;}


mpz_ptr_t f_ltedfapegproof_closure_39(struct ltedfapegproof_closure_39_s * closure, ltedfapegproof__qstack_adt_t bvar){
        mpz_ptr_t result = h_ltedfapegproof_closure_39(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_ltedfapegproof_closure_39(struct ltedfapegproof_closure_39_s * closure, ltedfapegproof__qstack_adt_t bvar){
        return h_ltedfapegproof_closure_39(bvar, closure->fvar_1, closure->fvar_2);}

mpz_ptr_t h_ltedfapegproof_closure_39(ltedfapegproof__qstack_adt_t ivar_5, ltedfapegproof_funtype_38_t ivar_2, mpz_ptr_t ivar_1){
        mpz_ptr_t result;
        /* red */ ltedfapegproof_funtype_36_t ivar_6;
        ivar_2->count++;
        ivar_6 = (ltedfapegproof_funtype_36_t)ltedfapegproof__reduce_nat__2(ivar_1, (ltedfapegproof_funtype_38_t)ivar_2);
        bool_t ivar_18;
        ivar_5->count++;
        ivar_18 = (bool_t)r_ltedfapegproof__qemptyp((ltedfapegproof__qstack_adt_t)ivar_5);
        if (ivar_18){ 
             release_ltedfapegproof_funtype_36(ivar_6);
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

ltedfapegproof_closure_39_t new_ltedfapegproof_closure_39(void){
        static struct ltedfapegproof_funtype_36_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ltedfapegproof_funtype_36_t, ltedfapegproof__qstack_adt_t))&f_ltedfapegproof_closure_39, .mptr = (mpz_ptr_t (*)(ltedfapegproof_funtype_36_t, ltedfapegproof__qstack_adt_t))&m_ltedfapegproof_closure_39, .rptr =  (void (*)(ltedfapegproof_funtype_36_t))&release_ltedfapegproof_closure_39, .cptr = (ltedfapegproof_funtype_36_t (*)(ltedfapegproof_funtype_36_t))&copy_ltedfapegproof_closure_39};
        ltedfapegproof_closure_39_t tmp = (ltedfapegproof_closure_39_t) safe_malloc(sizeof(struct ltedfapegproof_closure_39_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_ltedfapegproof_closure_39(ltedfapegproof_funtype_36_t closure){
        ltedfapegproof_closure_39_t x = (ltedfapegproof_closure_39_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_38(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_39_t copy_ltedfapegproof_closure_39(ltedfapegproof_closure_39_t x){
        ltedfapegproof_closure_39_t y = new_ltedfapegproof_closure_39();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        mpz_set(y->fvar_2, x->fvar_2);
        if (x->htbl != NULL){
            ltedfapegproof_funtype_36_htbl_t new_htbl = (ltedfapegproof_funtype_36_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_36_hashentry_t * new_data = (ltedfapegproof_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltedfapegproof_record_40_t new_ltedfapegproof_record_40(void){
        ltedfapegproof_record_40_t tmp = (ltedfapegproof_record_40_t) safe_malloc(sizeof(struct ltedfapegproof_record_40_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_40(ltedfapegproof_record_40_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof__qstack_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_40_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_40((ltedfapegproof_record_40_t)x);
}

ltedfapegproof_record_40_t copy_ltedfapegproof_record_40(ltedfapegproof_record_40_t x){
        ltedfapegproof_record_40_t y = new_ltedfapegproof_record_40();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        mpz_set(y->project_3, x->project_3);
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_40(ltedfapegproof_record_40_t x, ltedfapegproof_record_40_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        tmp = tmp && equal_ltedfapegproof__qstack_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltedfapegproof_record_40(ltedfapegproof_record_40_t x){
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

bool_t equal_ltedfapegproof_record_40_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_40_t T){
        return equal_ltedfapegproof_record_40((ltedfapegproof_record_40_t)x, (ltedfapegproof_record_40_t)y);
}

char * json_ltedfapegproof_record_40_ptr(pointer_t x, actual_ltedfapegproof_record_40_t T){
        return json_ltedfapegproof_record_40((ltedfapegproof_record_40_t)x);
}

actual_ltedfapegproof_record_40_t actual_ltedfapegproof_record_40(){
        actual_ltedfapegproof_record_40_t new = (actual_ltedfapegproof_record_40_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_40_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_40_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_40_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_40_ptr);
 

 
        return new;
 };

ltedfapegproof_record_40_t update_ltedfapegproof_record_40_project_1(ltedfapegproof_record_40_t x, uint8_t v){
        ltedfapegproof_record_40_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_40(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_40_t update_ltedfapegproof_record_40_project_2(ltedfapegproof_record_40_t x, uint32_t v){
        ltedfapegproof_record_40_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_40(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

ltedfapegproof_record_40_t update_ltedfapegproof_record_40_project_3(ltedfapegproof_record_40_t x, mpz_ptr_t v){
        ltedfapegproof_record_40_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_40(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}

ltedfapegproof_record_40_t update_ltedfapegproof_record_40_project_4(ltedfapegproof_record_40_t x, ltedfapegproof__qstack_adt_t v){
        ltedfapegproof_record_40_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ltedfapegproof__qstack_adt(x->project_4);};}
        else {y = copy_ltedfapegproof_record_40(x); x->count--; y->project_4->count--;};
        y->project_4 = (ltedfapegproof__qstack_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_41(ltedfapegproof_funtype_41_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_41_t copy_ltedfapegproof_funtype_41(ltedfapegproof_funtype_41_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_41(ltedfapegproof_funtype_41_t x, ltedfapegproof_funtype_41_t y){
        return false;}

char* json_ltedfapegproof_funtype_41(ltedfapegproof_funtype_41_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_41\""); return result;}


mpz_ptr_t f_ltedfapegproof_closure_42(struct ltedfapegproof_closure_42_s * closure, ltedfapegproof__qstack_adt_t bvar){
        mpz_ptr_t result = h_ltedfapegproof_closure_42(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_ltedfapegproof_closure_42(struct ltedfapegproof_closure_42_s * closure, ltedfapegproof__qstack_adt_t bvar){
        return h_ltedfapegproof_closure_42(bvar, closure->fvar_1, closure->fvar_2);}

mpz_ptr_t h_ltedfapegproof_closure_42(ltedfapegproof__qstack_adt_t ivar_6, ltedfapegproof_funtype_41_t ivar_3, ltedfapegproof_funtype_36_t ivar_1){
        mpz_ptr_t result;
        /* red */ ltedfapegproof_funtype_36_t ivar_7;
        ivar_1->count++;
        ivar_3->count++;
        ivar_7 = (ltedfapegproof_funtype_36_t)ltedfapegproof__REDUCE_nat__2((ltedfapegproof_funtype_36_t)ivar_1, (ltedfapegproof_funtype_41_t)ivar_3);
        bool_t ivar_25;
        ivar_6->count++;
        ivar_25 = (bool_t)r_ltedfapegproof__qemptyp((ltedfapegproof__qstack_adt_t)ivar_6);
        if (ivar_25){ 
             release_ltedfapegproof_funtype_36(ivar_7);
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

ltedfapegproof_closure_42_t new_ltedfapegproof_closure_42(void){
        static struct ltedfapegproof_funtype_36_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ltedfapegproof_funtype_36_t, ltedfapegproof__qstack_adt_t))&f_ltedfapegproof_closure_42, .mptr = (mpz_ptr_t (*)(ltedfapegproof_funtype_36_t, ltedfapegproof__qstack_adt_t))&m_ltedfapegproof_closure_42, .rptr =  (void (*)(ltedfapegproof_funtype_36_t))&release_ltedfapegproof_closure_42, .cptr = (ltedfapegproof_funtype_36_t (*)(ltedfapegproof_funtype_36_t))&copy_ltedfapegproof_closure_42};
        ltedfapegproof_closure_42_t tmp = (ltedfapegproof_closure_42_t) safe_malloc(sizeof(struct ltedfapegproof_closure_42_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_42(ltedfapegproof_funtype_36_t closure){
        ltedfapegproof_closure_42_t x = (ltedfapegproof_closure_42_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_41(x->fvar_1);
         release_ltedfapegproof_funtype_36(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_42_t copy_ltedfapegproof_closure_42(ltedfapegproof_closure_42_t x){
        ltedfapegproof_closure_42_t y = new_ltedfapegproof_closure_42();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_36_htbl_t new_htbl = (ltedfapegproof_funtype_36_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_36_hashentry_t * new_data = (ltedfapegproof_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltedfapegproof_funtype_43(ltedfapegproof_funtype_43_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_43_t copy_ltedfapegproof_funtype_43(ltedfapegproof_funtype_43_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_43(ltedfapegproof_funtype_43_t x, ltedfapegproof_funtype_43_t y){
        return false;}

char* json_ltedfapegproof_funtype_43(ltedfapegproof_funtype_43_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_43\""); return result;}


ltedfapegproof_record_44_t new_ltedfapegproof_record_44(void){
        ltedfapegproof_record_44_t tmp = (ltedfapegproof_record_44_t) safe_malloc(sizeof(struct ltedfapegproof_record_44_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_44(ltedfapegproof_record_44_t x){
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt__ordstruct_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_44_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_44((ltedfapegproof_record_44_t)x);
}

ltedfapegproof_record_44_t copy_ltedfapegproof_record_44(ltedfapegproof_record_44_t x){
        ltedfapegproof_record_44_t y = new_ltedfapegproof_record_44();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_44(ltedfapegproof_record_44_t x, ltedfapegproof_record_44_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        return tmp;}

char * json_ltedfapegproof_record_44(ltedfapegproof_record_44_t x){
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

bool_t equal_ltedfapegproof_record_44_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_44_t T){
        return equal_ltedfapegproof_record_44((ltedfapegproof_record_44_t)x, (ltedfapegproof_record_44_t)y);
}

char * json_ltedfapegproof_record_44_ptr(pointer_t x, actual_ltedfapegproof_record_44_t T){
        return json_ltedfapegproof_record_44((ltedfapegproof_record_44_t)x);
}

actual_ltedfapegproof_record_44_t actual_ltedfapegproof_record_44(){
        actual_ltedfapegproof_record_44_t new = (actual_ltedfapegproof_record_44_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_44_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_44_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_44_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_44_ptr);
 

 
        return new;
 };

ltedfapegproof_record_44_t update_ltedfapegproof_record_44_project_1(ltedfapegproof_record_44_t x, uint8_t v){
        ltedfapegproof_record_44_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_44(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_44_t update_ltedfapegproof_record_44_project_2(ltedfapegproof_record_44_t x, uint32_t v){
        ltedfapegproof_record_44_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_44(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

ltedfapegproof_record_44_t update_ltedfapegproof_record_44_project_3(ltedfapegproof_record_44_t x, ordstruct_adt__ordstruct_adt_t v){
        ltedfapegproof_record_44_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_ltedfapegproof_record_44(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_45(ltedfapegproof_funtype_45_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_45_t copy_ltedfapegproof_funtype_45(ltedfapegproof_funtype_45_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_45(ltedfapegproof_funtype_45_t x, ltedfapegproof_funtype_45_t y){
        return false;}

char* json_ltedfapegproof_funtype_45(ltedfapegproof_funtype_45_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_45\""); return result;}


ordstruct_adt__ordstruct_adt_t f_ltedfapegproof_closure_46(struct ltedfapegproof_closure_46_s * closure, ltedfapegproof__qstack_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_ltedfapegproof_closure_46(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_ltedfapegproof_closure_46(struct ltedfapegproof_closure_46_s * closure, ltedfapegproof__qstack_adt_t bvar){
        return h_ltedfapegproof_closure_46(bvar, closure->fvar_1, closure->fvar_2);}

ordstruct_adt__ordstruct_adt_t h_ltedfapegproof_closure_46(ltedfapegproof__qstack_adt_t ivar_5, ltedfapegproof_funtype_45_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ ltedfapegproof_funtype_43_t ivar_6;
        ivar_1->count++;
        ivar_2->count++;
        ivar_6 = (ltedfapegproof_funtype_43_t)ltedfapegproof__reduce_ordinal__2((ordstruct_adt__ordstruct_adt_t)ivar_1, (ltedfapegproof_funtype_45_t)ivar_2);
        bool_t ivar_18;
        ivar_5->count++;
        ivar_18 = (bool_t)r_ltedfapegproof__qemptyp((ltedfapegproof__qstack_adt_t)ivar_5);
        if (ivar_18){ 
             release_ltedfapegproof_funtype_43(ivar_6);
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

ltedfapegproof_closure_46_t new_ltedfapegproof_closure_46(void){
        static struct ltedfapegproof_funtype_43_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(ltedfapegproof_funtype_43_t, ltedfapegproof__qstack_adt_t))&f_ltedfapegproof_closure_46, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(ltedfapegproof_funtype_43_t, ltedfapegproof__qstack_adt_t))&m_ltedfapegproof_closure_46, .rptr =  (void (*)(ltedfapegproof_funtype_43_t))&release_ltedfapegproof_closure_46, .cptr = (ltedfapegproof_funtype_43_t (*)(ltedfapegproof_funtype_43_t))&copy_ltedfapegproof_closure_46};
        ltedfapegproof_closure_46_t tmp = (ltedfapegproof_closure_46_t) safe_malloc(sizeof(struct ltedfapegproof_closure_46_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_46(ltedfapegproof_funtype_43_t closure){
        ltedfapegproof_closure_46_t x = (ltedfapegproof_closure_46_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_45(x->fvar_1);
         release_ordstruct_adt__ordstruct_adt(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_46_t copy_ltedfapegproof_closure_46(ltedfapegproof_closure_46_t x){
        ltedfapegproof_closure_46_t y = new_ltedfapegproof_closure_46();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_43_htbl_t new_htbl = (ltedfapegproof_funtype_43_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_43_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_43_hashentry_t * new_data = (ltedfapegproof_funtype_43_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_43_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_43_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltedfapegproof_record_47_t new_ltedfapegproof_record_47(void){
        ltedfapegproof_record_47_t tmp = (ltedfapegproof_record_47_t) safe_malloc(sizeof(struct ltedfapegproof_record_47_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_47(ltedfapegproof_record_47_t x){
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt__ordstruct_adt(x->project_3);
         release_ltedfapegproof__qstack_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_47_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_47((ltedfapegproof_record_47_t)x);
}

ltedfapegproof_record_47_t copy_ltedfapegproof_record_47(ltedfapegproof_record_47_t x){
        ltedfapegproof_record_47_t y = new_ltedfapegproof_record_47();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_47(ltedfapegproof_record_47_t x, ltedfapegproof_record_47_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        tmp = tmp && equal_ltedfapegproof__qstack_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltedfapegproof_record_47(ltedfapegproof_record_47_t x){
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

bool_t equal_ltedfapegproof_record_47_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_47_t T){
        return equal_ltedfapegproof_record_47((ltedfapegproof_record_47_t)x, (ltedfapegproof_record_47_t)y);
}

char * json_ltedfapegproof_record_47_ptr(pointer_t x, actual_ltedfapegproof_record_47_t T){
        return json_ltedfapegproof_record_47((ltedfapegproof_record_47_t)x);
}

actual_ltedfapegproof_record_47_t actual_ltedfapegproof_record_47(){
        actual_ltedfapegproof_record_47_t new = (actual_ltedfapegproof_record_47_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_47_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_47_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_47_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_47_ptr);
 

 
        return new;
 };

ltedfapegproof_record_47_t update_ltedfapegproof_record_47_project_1(ltedfapegproof_record_47_t x, uint8_t v){
        ltedfapegproof_record_47_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_47(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltedfapegproof_record_47_t update_ltedfapegproof_record_47_project_2(ltedfapegproof_record_47_t x, uint32_t v){
        ltedfapegproof_record_47_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_47(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

ltedfapegproof_record_47_t update_ltedfapegproof_record_47_project_3(ltedfapegproof_record_47_t x, ordstruct_adt__ordstruct_adt_t v){
        ltedfapegproof_record_47_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_ltedfapegproof_record_47(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

ltedfapegproof_record_47_t update_ltedfapegproof_record_47_project_4(ltedfapegproof_record_47_t x, ltedfapegproof__qstack_adt_t v){
        ltedfapegproof_record_47_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ltedfapegproof__qstack_adt(x->project_4);};}
        else {y = copy_ltedfapegproof_record_47(x); x->count--; y->project_4->count--;};
        y->project_4 = (ltedfapegproof__qstack_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_48(ltedfapegproof_funtype_48_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_48_t copy_ltedfapegproof_funtype_48(ltedfapegproof_funtype_48_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_48(ltedfapegproof_funtype_48_t x, ltedfapegproof_funtype_48_t y){
        return false;}

char* json_ltedfapegproof_funtype_48(ltedfapegproof_funtype_48_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_48\""); return result;}


ordstruct_adt__ordstruct_adt_t f_ltedfapegproof_closure_49(struct ltedfapegproof_closure_49_s * closure, ltedfapegproof__qstack_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_ltedfapegproof_closure_49(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_ltedfapegproof_closure_49(struct ltedfapegproof_closure_49_s * closure, ltedfapegproof__qstack_adt_t bvar){
        return h_ltedfapegproof_closure_49(bvar, closure->fvar_1, closure->fvar_2);}

ordstruct_adt__ordstruct_adt_t h_ltedfapegproof_closure_49(ltedfapegproof__qstack_adt_t ivar_6, ltedfapegproof_funtype_48_t ivar_3, ltedfapegproof_funtype_43_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ ltedfapegproof_funtype_43_t ivar_7;
        ivar_1->count++;
        ivar_3->count++;
        ivar_7 = (ltedfapegproof_funtype_43_t)ltedfapegproof__REDUCE_ordinal__2((ltedfapegproof_funtype_43_t)ivar_1, (ltedfapegproof_funtype_48_t)ivar_3);
        bool_t ivar_25;
        ivar_6->count++;
        ivar_25 = (bool_t)r_ltedfapegproof__qemptyp((ltedfapegproof__qstack_adt_t)ivar_6);
        if (ivar_25){ 
             release_ltedfapegproof_funtype_43(ivar_7);
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

ltedfapegproof_closure_49_t new_ltedfapegproof_closure_49(void){
        static struct ltedfapegproof_funtype_43_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(ltedfapegproof_funtype_43_t, ltedfapegproof__qstack_adt_t))&f_ltedfapegproof_closure_49, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(ltedfapegproof_funtype_43_t, ltedfapegproof__qstack_adt_t))&m_ltedfapegproof_closure_49, .rptr =  (void (*)(ltedfapegproof_funtype_43_t))&release_ltedfapegproof_closure_49, .cptr = (ltedfapegproof_funtype_43_t (*)(ltedfapegproof_funtype_43_t))&copy_ltedfapegproof_closure_49};
        ltedfapegproof_closure_49_t tmp = (ltedfapegproof_closure_49_t) safe_malloc(sizeof(struct ltedfapegproof_closure_49_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_49(ltedfapegproof_funtype_43_t closure){
        ltedfapegproof_closure_49_t x = (ltedfapegproof_closure_49_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_48(x->fvar_1);
         release_ltedfapegproof_funtype_43(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_49_t copy_ltedfapegproof_closure_49(ltedfapegproof_closure_49_t x){
        ltedfapegproof_closure_49_t y = new_ltedfapegproof_closure_49();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_43_htbl_t new_htbl = (ltedfapegproof_funtype_43_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_43_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_43_hashentry_t * new_data = (ltedfapegproof_funtype_43_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_43_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_43_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltedfapegproof_funtype_50(ltedfapegproof_funtype_50_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_50_t copy_ltedfapegproof_funtype_50(ltedfapegproof_funtype_50_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_50(ltedfapegproof_funtype_50_t x, ltedfapegproof_funtype_50_t y){
        return false;}

char* json_ltedfapegproof_funtype_50(ltedfapegproof_funtype_50_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_50\""); return result;}


ltedfapegproof_array_51_t new_ltedfapegproof_array_51(uint32_t size){
        ltedfapegproof_array_51_t tmp = (ltedfapegproof_array_51_t) safe_malloc(sizeof(struct ltedfapegproof_array_51_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_ltedfapegproof_array_51(ltedfapegproof_array_51_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_ltedfapegproof_array_51_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_array_51((ltedfapegproof_array_51_t)x);
}

ltedfapegproof_array_51_t copy_ltedfapegproof_array_51(ltedfapegproof_array_51_t x){
        ltedfapegproof_array_51_t tmp = new_ltedfapegproof_array_51(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_ltedfapegproof_array_51(ltedfapegproof_array_51_t x, ltedfapegproof_array_51_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_ltedfapegproof_array_51(ltedfapegproof_array_51_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint8(x->elems[i]);};
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

ltedfapegproof_array_51_t update_ltedfapegproof_array_51(ltedfapegproof_array_51_t x, uint32_t i, uint8_t v){
        ltedfapegproof_array_51_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_ltedfapegproof_array_51(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

ltedfapegproof_array_51_t upgrade_ltedfapegproof_array_51(ltedfapegproof_array_51_t x, uint32_t i, uint8_t v){
        ltedfapegproof_array_51_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltedfapegproof_array_51_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltedfapegproof_array_51(x);}
           else {y = copy_ltedfapegproof_array_51(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




ltedfapegproof_array_52_t new_ltedfapegproof_array_52(uint32_t size){
        ltedfapegproof_array_52_t tmp = (ltedfapegproof_array_52_t) safe_malloc(sizeof(struct ltedfapegproof_array_52_s) + (size * sizeof(ltedfapeg__ent_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_ltedfapegproof_array_52(ltedfapegproof_array_52_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_ltedfapeg__ent_adt(x->elems[i]);};
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
        while (i < x->size && tmp){tmp = equal_ltedfapeg__ent_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_ltedfapegproof_array_52(ltedfapegproof_array_52_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_ltedfapeg__ent_adt(x->elems[i]);};
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

ltedfapegproof_array_52_t update_ltedfapegproof_array_52(ltedfapegproof_array_52_t x, uint32_t i, ltedfapeg__ent_adt_t v){
         ltedfapegproof_array_52_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ltedfapegproof_array_52(x);
                      x->count--;};
        ltedfapeg__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltedfapeg__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

ltedfapegproof_array_52_t upgrade_ltedfapegproof_array_52(ltedfapegproof_array_52_t x, uint32_t i, ltedfapeg__ent_adt_t v){
         ltedfapegproof_array_52_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltedfapegproof_array_52_s) + (newmax * sizeof(ltedfapeg__ent_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltedfapegproof_array_52(x);} else {y = copy_ltedfapegproof_array_52(x);
                      x->count--;};
        ltedfapeg__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltedfapeg__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}




ltedfapegproof_array_53_t new_ltedfapegproof_array_53(uint32_t size){
        ltedfapegproof_array_53_t tmp = (ltedfapegproof_array_53_t) safe_malloc(sizeof(struct ltedfapegproof_array_53_s) + (size * sizeof(ltedfapegproof_array_52_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_ltedfapegproof_array_53(ltedfapegproof_array_53_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_ltedfapegproof_array_52(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_ltedfapegproof_array_53_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_array_53((ltedfapegproof_array_53_t)x);
}

ltedfapegproof_array_53_t copy_ltedfapegproof_array_53(ltedfapegproof_array_53_t x){
        ltedfapegproof_array_53_t tmp = new_ltedfapegproof_array_53(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ltedfapegproof_array_53(ltedfapegproof_array_53_t x, ltedfapegproof_array_53_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_ltedfapegproof_array_52(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_ltedfapegproof_array_53(ltedfapegproof_array_53_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_ltedfapegproof_array_52(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltedfapegproof_array_53_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltedfapegproof_array_53((ltedfapegproof_array_53_t)x, (ltedfapegproof_array_53_t)y);
}

char * json_ltedfapegproof_array_53_ptr(pointer_t x, type_actual_t T){
        return json_ltedfapegproof_array_53((ltedfapegproof_array_53_t)x);
}

actual_ltedfapegproof_array_53_t actual_ltedfapegproof_array_53(){
        actual_ltedfapegproof_array_53_t new = (actual_ltedfapegproof_array_53_t)safe_malloc(sizeof(struct actual_ltedfapegproof_array_53_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_array_53_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_array_53_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_array_53_ptr);
 

 
        return new;
 };

ltedfapegproof_array_53_t update_ltedfapegproof_array_53(ltedfapegproof_array_53_t x, uint32_t i, ltedfapegproof_array_52_t v){
         ltedfapegproof_array_53_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ltedfapegproof_array_53(x);
                      x->count--;};
        ltedfapegproof_array_52_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltedfapegproof_array_52(yelems[i]);};
         yelems[i] = v;
         return y;}

ltedfapegproof_array_53_t upgrade_ltedfapegproof_array_53(ltedfapegproof_array_53_t x, uint32_t i, ltedfapegproof_array_52_t v){
         ltedfapegproof_array_53_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltedfapegproof_array_53_s) + (newmax * sizeof(ltedfapegproof_array_52_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltedfapegproof_array_53(x);} else {y = copy_ltedfapegproof_array_53(x);
                      x->count--;};
        ltedfapegproof_array_52_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltedfapegproof_array_52(yelems[i]);};
         yelems[i] = v;
         return y;}




bool_t f_ltedfapegproof_closure_54(struct ltedfapegproof_closure_54_s * closure, ltedfapegproof__qstack_adt_t bvar){
        bool_t result = h_ltedfapegproof_closure_54(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

bool_t m_ltedfapegproof_closure_54(struct ltedfapegproof_closure_54_s * closure, ltedfapegproof__qstack_adt_t bvar){
        return h_ltedfapegproof_closure_54(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

bool_t h_ltedfapegproof_closure_54(ltedfapegproof__qstack_adt_t ivar_7, ltedfapegproof_array_51_t ivar_3, ltedfapegproof_array_53_t ivar_4, ltedfapeg__lang_spec_t ivar_2, uint32_t ivar_1){
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
           ltedfapegproof_array_52_t ivar_42;
           ivar_42 = (ltedfapegproof_array_52_t)ivar_4->elems[ivar_10];
           ivar_42->count++;
           ivar_50 = (ltedfapeg__ent_adt_t)ivar_42->elems[ivar_9];
           ivar_50->count++;
           release_ltedfapegproof_array_52(ivar_42);
           ivar_37 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_50);
           if (ivar_37){    
            ltedfapegproof_funtype_50_t ivar_54;
            ivar_2->count++;
            ivar_3->count++;
            ivar_4->count++;
            ivar_54 = (ltedfapegproof_funtype_50_t)ltedfapegproof__good_qstackp((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3, (ltedfapegproof_array_53_t)ivar_4);
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

ltedfapegproof_closure_54_t new_ltedfapegproof_closure_54(void){
        static struct ltedfapegproof_funtype_50_ftbl_s ftbl = {.fptr = (bool_t (*)(ltedfapegproof_funtype_50_t, ltedfapegproof__qstack_adt_t))&f_ltedfapegproof_closure_54, .mptr = (bool_t (*)(ltedfapegproof_funtype_50_t, ltedfapegproof__qstack_adt_t))&m_ltedfapegproof_closure_54, .rptr =  (void (*)(ltedfapegproof_funtype_50_t))&release_ltedfapegproof_closure_54, .cptr = (ltedfapegproof_funtype_50_t (*)(ltedfapegproof_funtype_50_t))&copy_ltedfapegproof_closure_54};
        ltedfapegproof_closure_54_t tmp = (ltedfapegproof_closure_54_t) safe_malloc(sizeof(struct ltedfapegproof_closure_54_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_54(ltedfapegproof_funtype_50_t closure){
        ltedfapegproof_closure_54_t x = (ltedfapegproof_closure_54_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_array_51(x->fvar_1);
         release_ltedfapegproof_array_53(x->fvar_2);
         release_ltedfapeg__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_54_t copy_ltedfapegproof_closure_54(ltedfapegproof_closure_54_t x){
        ltedfapegproof_closure_54_t y = new_ltedfapegproof_closure_54();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = (uint32_t)x->fvar_4;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_50_htbl_t new_htbl = (ltedfapegproof_funtype_50_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_50_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_50_hashentry_t * new_data = (ltedfapegproof_funtype_50_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_50_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_50_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltedfapegproof_record_55_t new_ltedfapegproof_record_55(void){
        ltedfapegproof_record_55_t tmp = (ltedfapegproof_record_55_t) safe_malloc(sizeof(struct ltedfapegproof_record_55_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_55(ltedfapegproof_record_55_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof__qstack_adt(x->project_1);
         release_ltedfapegproof__parsetree_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_55_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_55((ltedfapegproof_record_55_t)x);
}

ltedfapegproof_record_55_t copy_ltedfapegproof_record_55(ltedfapegproof_record_55_t x){
        ltedfapegproof_record_55_t y = new_ltedfapegproof_record_55();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = (uint32_t)x->project_3;
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_55(ltedfapegproof_record_55_t x, ltedfapegproof_record_55_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltedfapegproof__qstack_adt(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && equal_ltedfapegproof__parsetree_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltedfapegproof_record_55(ltedfapegproof_record_55_t x){
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

bool_t equal_ltedfapegproof_record_55_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_55_t T){
        return equal_ltedfapegproof_record_55((ltedfapegproof_record_55_t)x, (ltedfapegproof_record_55_t)y);
}

char * json_ltedfapegproof_record_55_ptr(pointer_t x, actual_ltedfapegproof_record_55_t T){
        return json_ltedfapegproof_record_55((ltedfapegproof_record_55_t)x);
}

actual_ltedfapegproof_record_55_t actual_ltedfapegproof_record_55(){
        actual_ltedfapegproof_record_55_t new = (actual_ltedfapegproof_record_55_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_55_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_55_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_55_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_55_ptr);
 

 
        return new;
 };

ltedfapegproof_record_55_t update_ltedfapegproof_record_55_project_1(ltedfapegproof_record_55_t x, ltedfapegproof__qstack_adt_t v){
        ltedfapegproof_record_55_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltedfapegproof__qstack_adt(x->project_1);};}
        else {y = copy_ltedfapegproof_record_55(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltedfapegproof__qstack_adt_t)v;
        return y;}

ltedfapegproof_record_55_t update_ltedfapegproof_record_55_project_2(ltedfapegproof_record_55_t x, uint8_t v){
        ltedfapegproof_record_55_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_55(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

ltedfapegproof_record_55_t update_ltedfapegproof_record_55_project_3(ltedfapegproof_record_55_t x, uint32_t v){
        ltedfapegproof_record_55_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_55(x); x->count--;};
        y->project_3 = (uint32_t)v;
        return y;}

ltedfapegproof_record_55_t update_ltedfapegproof_record_55_project_4(ltedfapegproof_record_55_t x, ltedfapegproof__parsetree_adt_t v){
        ltedfapegproof_record_55_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ltedfapegproof__parsetree_adt(x->project_4);};}
        else {y = copy_ltedfapegproof_record_55(x); x->count--; y->project_4->count--;};
        y->project_4 = (ltedfapegproof__parsetree_adt_t)v;
        return y;}



void release_ltedfapegproof_funtype_56(ltedfapegproof_funtype_56_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_56_t copy_ltedfapegproof_funtype_56(ltedfapegproof_funtype_56_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_56(ltedfapegproof_funtype_56_t x, ltedfapegproof_funtype_56_t y){
        return false;}

char* json_ltedfapegproof_funtype_56(ltedfapegproof_funtype_56_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_56\""); return result;}


bool_t f_ltedfapegproof_closure_57(struct ltedfapegproof_closure_57_s * closure, ltedfapegproof_record_55_t bvar){
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
        release_ltedfapegproof_record_55(bvar);
        bool_t result = h_ltedfapegproof_closure_57(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_ltedfapegproof__qstack_adt(bvar_1);
        release_ltedfapegproof__parsetree_adt(bvar_4);
        return result;}

bool_t m_ltedfapegproof_closure_57(struct ltedfapegproof_closure_57_s * closure, ltedfapegproof__qstack_adt_t bvar_1, uint8_t bvar_2, uint32_t bvar_3, ltedfapegproof__parsetree_adt_t bvar_4){
        return h_ltedfapegproof_closure_57(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

bool_t h_ltedfapegproof_closure_57(ltedfapegproof__qstack_adt_t ivar_5, uint8_t ivar_6, uint32_t ivar_7, ltedfapegproof__parsetree_adt_t ivar_8, ltedfapegproof_array_51_t ivar_3, uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2){
        bool_t result;
        bool_t ivar_155;
        ivar_8->count++;
        ivar_155 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_8);
        if (ivar_155){ 
             uint8_t ivar_10;
             ivar_8->count++;
             ivar_10 = (uint8_t)ltedfapegproof__parsetree_adt_nt((ltedfapegproof__parsetree_adt_t)ivar_8);
             ltedfapeg__ent_adt_t ivar_11;
             ivar_11 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
             bool_t ivar_18;
             ivar_18 = (ivar_10 == ivar_6);
             if (ivar_18){  
           ltedfapeg__prepeg_adt_t ivar_23;
           ivar_23 = (ltedfapeg__prepeg_adt_t)ivar_2->elems[ivar_6];
           ivar_23->count++;
           bool_t ivar_40;
           ivar_23->count++;
           ivar_40 = (bool_t)r_ltedfapeg__epsilonp((ltedfapeg__prepeg_adt_t)ivar_23);
           if (ivar_40){   
           release_ltedfapegproof__qstack_adt(ivar_5);
           release_ltedfapeg__prepeg_adt(ivar_23);
           ltedfapeg__ent_adt_t ivar_29;
           uint8_t ivar_38;
           ivar_38 = (uint8_t)0;
           uint64_t ivar_33;
           //copying to uint64 from uint8;
           ivar_33 = (uint64_t)ivar_38;
           uint8_t ivar_37;
           ivar_37 = (uint8_t)0;
           uint32_t ivar_34;
           //copying to uint32 from uint8;
           ivar_34 = (uint32_t)ivar_37;
           ivar_29 = (ltedfapeg__ent_adt_t)ltedfapeg__good((uint64_t)ivar_33, (uint32_t)ivar_34);
           result = (bool_t) equal_ltedfapeg__ent_adt(ivar_11, ivar_29);
} else {
           
           bool_t ivar_52;
           ivar_23->count++;
           ivar_52 = (bool_t)r_ltedfapeg__failurep((ltedfapeg__prepeg_adt_t)ivar_23);
           if (ivar_52){    
            release_ltedfapegproof__qstack_adt(ivar_5);
            release_ltedfapeg__prepeg_adt(ivar_23);
            ltedfapeg__ent_adt_t ivar_45;
            uint8_t ivar_50;
            ivar_50 = (uint8_t)0;
            uint64_t ivar_48;
            //copying to uint64 from uint8;
            ivar_48 = (uint64_t)ivar_50;
            ivar_45 = (ltedfapeg__ent_adt_t)ltedfapeg__fail((uint64_t)ivar_48);
            result = (bool_t) equal_ltedfapeg__ent_adt(ivar_11, ivar_45);
} else {
           
            bool_t ivar_95;
            ivar_23->count++;
            ivar_95 = (bool_t)r_ltedfapeg__anyp((ltedfapeg__prepeg_adt_t)ivar_23);
            if (ivar_95){     
             release_ltedfapegproof__qstack_adt(ivar_5);
             dfa__dfa_t ivar_56;
             ivar_56 = (dfa__dfa_t)ltedfapeg__prepeg_adt_dfa((ltedfapeg__prepeg_adt_t)ivar_23);
             /* res */ dfa__dfaResult_adt_t ivar_60;
             ivar_3->count++;
             ivar_60 = (dfa__dfaResult_adt_t)dfa__DfaParse((dfa__dfa_t)ivar_56, (uint32_t)ivar_1, (dfa_array_17_t)ivar_3, (uint32_t)ivar_7);
             bool_t ivar_70;
             ivar_60->count++;
             ivar_70 = (bool_t)r_dfa__successp((dfa__dfaResult_adt_t)ivar_60);
             if (ivar_70){      
              ltedfapeg__ent_adt_t ivar_75;
              uint8_t ivar_85;
              ivar_85 = (uint8_t)0;
              uint64_t ivar_82;
              //copying to uint64 from uint8;
              ivar_82 = (uint64_t)ivar_85;
              uint32_t ivar_83;
              ivar_83 = (uint32_t)dfa__dfaResult_adt_span((dfa__dfaResult_adt_t)ivar_60);
              ivar_75 = (ltedfapeg__ent_adt_t)ltedfapeg__good((uint64_t)ivar_82, (uint32_t)ivar_83);
              result = (bool_t) equal_ltedfapeg__ent_adt(ivar_11, ivar_75);
} else {
             
              release_dfa__dfaResult_adt(ivar_60);
              ltedfapeg__ent_adt_t ivar_88;
              uint8_t ivar_93;
              ivar_93 = (uint8_t)0;
              uint64_t ivar_91;
              //copying to uint64 from uint8;
              ivar_91 = (uint64_t)ivar_93;
              ivar_88 = (ltedfapeg__ent_adt_t)ltedfapeg__fail((uint64_t)ivar_91);
              result = (bool_t) equal_ltedfapeg__ent_adt(ivar_11, ivar_88);
};
} else {
            
             bool_t ivar_137;
             ivar_23->count++;
             ivar_137 = (bool_t)r_ltedfapeg__terminalp((ltedfapeg__prepeg_adt_t)ivar_23);
             if (ivar_137){      
              release_ltedfapegproof__qstack_adt(ivar_5);
              uint8_t ivar_99;
              ivar_99 = (uint8_t)ltedfapeg__prepeg_adt_a((ltedfapeg__prepeg_adt_t)ivar_23);
              bool_t ivar_103;
              bool_t ivar_104;
              ivar_104 = (ivar_7 < ivar_1);
              if (ivar_104){       
               uint8_t ivar_109;
               ivar_109 = (uint8_t)ivar_3->elems[ivar_7];
               ivar_103 = (ivar_109 == ivar_99);
} else {
              
               ivar_103 = (bool_t) false;
};
              if (ivar_103){       
               ltedfapeg__ent_adt_t ivar_118;
               uint8_t ivar_127;
               ivar_127 = (uint8_t)0;
               uint64_t ivar_122;
               //copying to uint64 from uint8;
               ivar_122 = (uint64_t)ivar_127;
               uint8_t ivar_126;
               ivar_126 = (uint8_t)1;
               uint32_t ivar_123;
               //copying to uint32 from uint8;
               ivar_123 = (uint32_t)ivar_126;
               ivar_118 = (ltedfapeg__ent_adt_t)ltedfapeg__good((uint64_t)ivar_122, (uint32_t)ivar_123);
               result = (bool_t) equal_ltedfapeg__ent_adt(ivar_11, ivar_118);
} else {
              
               ltedfapeg__ent_adt_t ivar_130;
               uint8_t ivar_135;
               ivar_135 = (uint8_t)0;
               uint64_t ivar_133;
               //copying to uint64 from uint8;
               ivar_133 = (uint64_t)ivar_135;
               ivar_130 = (ltedfapeg__ent_adt_t)ltedfapeg__fail((uint64_t)ivar_133);
               result = (bool_t) equal_ltedfapeg__ent_adt(ivar_11, ivar_130);
};
} else {
             
              release_ltedfapeg__prepeg_adt(ivar_23);
              bool_t ivar_141;
              ivar_141 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_11);
              if (ivar_141){       
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
             
           release_ltedfapeg__ent_adt(ivar_11);
           release_ltedfapegproof__qstack_adt(ivar_5);
           result = (bool_t) false;
};
} else {
        
             bool_t ivar_239;
             ivar_8->count++;
             ivar_239 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_8);
             if (ivar_239){  
           uint8_t ivar_159;
           ivar_8->count++;
           ivar_159 = (uint8_t)ltedfapegproof__parsetree_adt_nt((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapeg__ent_adt_t ivar_160;
           ivar_8->count++;
           ivar_160 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_161;
           ivar_161 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapeg__prepeg_adt_t ivar_171;
           ivar_171 = (ltedfapeg__prepeg_adt_t)ivar_2->elems[ivar_6];
           ivar_171->count++;
           bool_t ivar_235;
           ivar_171->count++;
           ivar_235 = (bool_t)r_ltedfapeg__ltep((ltedfapeg__prepeg_adt_t)ivar_171);
           if (ivar_235){   
           uint8_t ivar_176;
           ivar_171->count++;
           ivar_176 = (uint8_t)ltedfapeg__prepeg_adt_fst((ltedfapeg__prepeg_adt_t)ivar_171);
           bool_t ivar_188;
           ltedfapegproof_funtype_56_t ivar_203;
           ivar_2->count++;
           ivar_3->count++;
           ivar_203 = (ltedfapegproof_funtype_56_t)ltedfapegproof__good_parsetreep((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3);
           ltedfapegproof__qstack_adt_t ivar_212;
           ivar_212 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (ltedfapegproof__qstack_adt_t)ivar_5);
           ivar_161->count++;
           ivar_188 = (bool_t)ivar_203->ftbl->mptr(ivar_203, ivar_212, ivar_176, ivar_7, ivar_161);
           ivar_203->ftbl->rptr(ivar_203);
           if (ivar_188){    
            bool_t ivar_216;
            ivar_216 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_160);
            if (ivar_216){     
             bool_t ivar_221;
             ltedfapeg__ent_adt_t ivar_228;
             ivar_228 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_161);
             ivar_221 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_228);
             if (ivar_221){      
              result = (ivar_159 == ivar_6);
} else {
             
              result = (bool_t) false;
};
} else {
            
             release_ltedfapegproof__parsetree_adt(ivar_161);
             result = (bool_t) false;
};
} else {
           
            release_ltedfapeg__ent_adt(ivar_160);
            release_ltedfapegproof__parsetree_adt(ivar_161);
            result = (bool_t) false;
};
} else {
           
           release_ltedfapegproof__parsetree_adt(ivar_161);
           release_ltedfapegproof__qstack_adt(ivar_5);
           release_ltedfapeg__ent_adt(ivar_160);
           release_ltedfapeg__prepeg_adt(ivar_171);
           result = (bool_t) false;
};
} else {
             
           uint8_t ivar_243;
           ivar_8->count++;
           ivar_243 = (uint8_t)ltedfapegproof__parsetree_adt_nt((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapeg__ent_adt_t ivar_244;
           ivar_8->count++;
           ivar_244 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_245;
           ivar_8->count++;
           ivar_245 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapegproof__parsetree_adt_t ivar_246;
           ivar_246 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subtwo((ltedfapegproof__parsetree_adt_t)ivar_8);
           ltedfapeg__prepeg_adt_t ivar_259;
           ivar_259 = (ltedfapeg__prepeg_adt_t)ivar_2->elems[ivar_6];
           ivar_259->count++;
           bool_t ivar_618;
           ivar_259->count++;
           ivar_618 = (bool_t)r_ltedfapeg__ltep((ltedfapeg__prepeg_adt_t)ivar_259);
           if (ivar_618){   
           uint8_t ivar_264;
           ivar_259->count++;
           ivar_264 = (uint8_t)ltedfapeg__prepeg_adt_fst((ltedfapeg__prepeg_adt_t)ivar_259);
           uint8_t ivar_265;
           ivar_259->count++;
           ivar_265 = (uint8_t)ltedfapeg__prepeg_adt_lthen((ltedfapeg__prepeg_adt_t)ivar_259);
           uint8_t ivar_266;
           ivar_266 = (uint8_t)ltedfapeg__prepeg_adt_lelse((ltedfapeg__prepeg_adt_t)ivar_259);
           bool_t ivar_276;
           ltedfapegproof_funtype_56_t ivar_291;
           ivar_2->count++;
           ivar_3->count++;
           ivar_291 = (ltedfapegproof_funtype_56_t)ltedfapegproof__good_parsetreep((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3);
           ltedfapegproof__qstack_adt_t ivar_300;
           ivar_5->count++;
           ivar_300 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (ltedfapegproof__qstack_adt_t)ivar_5);
           ivar_245->count++;
           ivar_276 = (bool_t)ivar_291->ftbl->mptr(ivar_291, ivar_300, ivar_264, ivar_7, ivar_245);
           ivar_291->ftbl->rptr(ivar_291);
           if (ivar_276){    
            bool_t ivar_304;
            bool_t ivar_306;
            ltedfapeg__ent_adt_t ivar_312;
            ivar_245->count++;
            ivar_312 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_245);
            ivar_306 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_312);
            if (ivar_306){     
             bool_t ivar_313;
             ltedfapegproof_funtype_58_t ivar_321;
             ivar_321 = (ltedfapegproof_funtype_58_t)ltedfapeg__good_good_entryp((uint32_t)ivar_1, (uint32_t)ivar_7);
             ltedfapeg__ent_adt_t ivar_328;
             ivar_245->count++;
             ivar_328 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_245);
             ivar_313 = (bool_t)ivar_321->ftbl->fptr(ivar_321, ivar_328);
             ivar_321->ftbl->rptr(ivar_321);
             if (ivar_313){      
              bool_t ivar_329;
              ltedfapegproof_funtype_56_t ivar_353;
              ivar_2->count++;
              ivar_3->count++;
              ivar_353 = (ltedfapegproof_funtype_56_t)ltedfapegproof__good_parsetreep((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3);
              ltedfapegproof__qstack_adt_t ivar_362;
              ivar_362 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (ltedfapegproof__qstack_adt_t)ivar_5);
              uint64_t ivar_366;
              uint32_t ivar_343;
              ltedfapeg__ent_adt_t ivar_349;
              ivar_245->count++;
              ivar_349 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_245);
              ivar_343 = (uint32_t)ltedfapeg__ent_adt_span((ltedfapeg__ent_adt_t)ivar_349);
              ivar_366 = (uint64_t)(ivar_7 + ivar_343);
              uint32_t ivar_364;
              //copying to uint32 from uint64;
              ivar_364 = (uint32_t)ivar_366;
              ivar_246->count++;
              ivar_329 = (bool_t)ivar_353->ftbl->mptr(ivar_353, ivar_362, ivar_265, ivar_364, ivar_246);
              ivar_353->ftbl->rptr(ivar_353);
              if (ivar_329){       
               bool_t ivar_367;
               ltedfapeg__ent_adt_t ivar_373;
               ivar_246->count++;
               ivar_373 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_246);
               ivar_367 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_373);
               if (ivar_367){        
                bool_t ivar_374;
                ivar_244->count++;
                ivar_374 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_244);
                if (ivar_374){         
                 uint64_t ivar_379;
                 ivar_379 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_244);
                 mpz_ptr_t ivar_380;
                 uint8_t ivar_384;
                 ivar_384 = (uint8_t)1;
                 mpq_ptr_t ivar_385;
                 uint64_t ivar_406;
                 ltedfapeg__ent_adt_t ivar_393;
                 ivar_393 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_245);
                 ivar_406 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_393);
                 mpq_ptr_t ivar_401;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_401, ivar_406);
                 uint64_t ivar_405;
                 ltedfapeg__ent_adt_t ivar_399;
                 ivar_399 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_246);
                 ivar_405 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_399);
                 mpq_ptr_t ivar_402;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_402, ivar_405);
                 ivar_385 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_401, (mpq_ptr_t)ivar_402);
                 mpz_mk_set_q(ivar_380, ivar_385);
                 mpz_add_ui(ivar_380, ivar_380, ivar_384);
                 int64_t tmp42481 = mpz_cmp_ui(ivar_380, ivar_379);
                 ivar_304 = (tmp42481 == 0);
} else {
                
                 release_ltedfapeg__ent_adt(ivar_244);
                 release_ltedfapegproof__parsetree_adt(ivar_246);
                 release_ltedfapegproof__parsetree_adt(ivar_245);
                 ivar_304 = (bool_t) false;
};
} else {
               
                bool_t ivar_410;
                ltedfapeg__ent_adt_t ivar_416;
                ivar_246->count++;
                ivar_416 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_246);
                ivar_410 = (bool_t)r_ltedfapeg__failp((ltedfapeg__ent_adt_t)ivar_416);
                if (ivar_410){         
                 bool_t ivar_417;
                 ivar_244->count++;
                 ivar_417 = (bool_t)r_ltedfapeg__failp((ltedfapeg__ent_adt_t)ivar_244);
                 if (ivar_417){          
                  uint64_t ivar_422;
                  ivar_422 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_244);
                  mpz_ptr_t ivar_423;
                  uint8_t ivar_427;
                  ivar_427 = (uint8_t)1;
                  mpq_ptr_t ivar_428;
                  uint64_t ivar_449;
                  ltedfapeg__ent_adt_t ivar_436;
                  ivar_436 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_245);
                  ivar_449 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_436);
                  mpq_ptr_t ivar_444;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_444, ivar_449);
                  uint64_t ivar_448;
                  ltedfapeg__ent_adt_t ivar_442;
                  ivar_442 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_246);
                  ivar_448 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_442);
                  mpq_ptr_t ivar_445;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_445, ivar_448);
                  ivar_428 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_444, (mpq_ptr_t)ivar_445);
                  mpz_mk_set_q(ivar_423, ivar_428);
                  mpz_add_ui(ivar_423, ivar_423, ivar_427);
                  int64_t tmp42482 = mpz_cmp_ui(ivar_423, ivar_422);
                  ivar_304 = (tmp42482 == 0);
} else {
                 
                  release_ltedfapeg__ent_adt(ivar_244);
                  release_ltedfapegproof__parsetree_adt(ivar_246);
                  release_ltedfapegproof__parsetree_adt(ivar_245);
                  ivar_304 = (bool_t) false;
};
} else {
                
                 release_ltedfapegproof__parsetree_adt(ivar_245);
                 bool_t ivar_453;
                 ltedfapeg__ent_adt_t ivar_460;
                 ivar_460 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_246);
                 ivar_453 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_460);
                 if (ivar_453){          
                  ivar_304 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_244);
} else {
                 
                  release_ltedfapeg__ent_adt(ivar_244);
                  ivar_304 = (bool_t) false;
};
};
};
} else {
              
               release_ltedfapeg__ent_adt(ivar_244);
               release_ltedfapegproof__parsetree_adt(ivar_246);
               release_ltedfapegproof__parsetree_adt(ivar_245);
               ivar_304 = (bool_t) false;
};
} else {
             
              release_ltedfapegproof__parsetree_adt(ivar_246);
              release_ltedfapegproof__parsetree_adt(ivar_245);
              release_ltedfapegproof__qstack_adt(ivar_5);
              release_ltedfapeg__ent_adt(ivar_244);
              ivar_304 = (bool_t) false;
};
} else {
            
             bool_t ivar_467;
             ltedfapeg__ent_adt_t ivar_473;
             ivar_245->count++;
             ivar_473 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_245);
             ivar_467 = (bool_t)r_ltedfapeg__failp((ltedfapeg__ent_adt_t)ivar_473);
             if (ivar_467){      
              bool_t ivar_474;
              ltedfapegproof_funtype_56_t ivar_489;
              ivar_2->count++;
              ivar_3->count++;
              ivar_489 = (ltedfapegproof_funtype_56_t)ltedfapegproof__good_parsetreep((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3);
              ltedfapegproof__qstack_adt_t ivar_498;
              ivar_498 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (ltedfapegproof__qstack_adt_t)ivar_5);
              ivar_246->count++;
              ivar_474 = (bool_t)ivar_489->ftbl->mptr(ivar_489, ivar_498, ivar_266, ivar_7, ivar_246);
              ivar_489->ftbl->rptr(ivar_489);
              if (ivar_474){       
               bool_t ivar_502;
               ltedfapeg__ent_adt_t ivar_508;
               ivar_246->count++;
               ivar_508 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_246);
               ivar_502 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_508);
               if (ivar_502){        
                bool_t ivar_509;
                ivar_244->count++;
                ivar_509 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_244);
                if (ivar_509){         
                 uint64_t ivar_514;
                 ivar_514 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_244);
                 mpz_ptr_t ivar_515;
                 uint8_t ivar_519;
                 ivar_519 = (uint8_t)1;
                 mpq_ptr_t ivar_520;
                 uint64_t ivar_541;
                 ltedfapeg__ent_adt_t ivar_528;
                 ivar_528 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_245);
                 ivar_541 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_528);
                 mpq_ptr_t ivar_536;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_536, ivar_541);
                 uint64_t ivar_540;
                 ltedfapeg__ent_adt_t ivar_534;
                 ivar_534 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_246);
                 ivar_540 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_534);
                 mpq_ptr_t ivar_537;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_537, ivar_540);
                 ivar_520 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_536, (mpq_ptr_t)ivar_537);
                 mpz_mk_set_q(ivar_515, ivar_520);
                 mpz_add_ui(ivar_515, ivar_515, ivar_519);
                 int64_t tmp42483 = mpz_cmp_ui(ivar_515, ivar_514);
                 ivar_304 = (tmp42483 == 0);
} else {
                
                 release_ltedfapeg__ent_adt(ivar_244);
                 release_ltedfapegproof__parsetree_adt(ivar_246);
                 release_ltedfapegproof__parsetree_adt(ivar_245);
                 ivar_304 = (bool_t) false;
};
} else {
               
                bool_t ivar_545;
                ltedfapeg__ent_adt_t ivar_551;
                ivar_246->count++;
                ivar_551 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_246);
                ivar_545 = (bool_t)r_ltedfapeg__failp((ltedfapeg__ent_adt_t)ivar_551);
                if (ivar_545){         
                 bool_t ivar_552;
                 ivar_244->count++;
                 ivar_552 = (bool_t)r_ltedfapeg__failp((ltedfapeg__ent_adt_t)ivar_244);
                 if (ivar_552){          
                  uint64_t ivar_557;
                  ivar_557 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_244);
                  mpz_ptr_t ivar_558;
                  uint8_t ivar_562;
                  ivar_562 = (uint8_t)1;
                  mpq_ptr_t ivar_563;
                  uint64_t ivar_584;
                  ltedfapeg__ent_adt_t ivar_571;
                  ivar_571 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_245);
                  ivar_584 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_571);
                  mpq_ptr_t ivar_579;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_579, ivar_584);
                  uint64_t ivar_583;
                  ltedfapeg__ent_adt_t ivar_577;
                  ivar_577 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_246);
                  ivar_583 = (uint64_t)ltedfapeg__ent_adt_dep((ltedfapeg__ent_adt_t)ivar_577);
                  mpq_ptr_t ivar_580;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_580, ivar_583);
                  ivar_563 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_579, (mpq_ptr_t)ivar_580);
                  mpz_mk_set_q(ivar_558, ivar_563);
                  mpz_add_ui(ivar_558, ivar_558, ivar_562);
                  int64_t tmp42484 = mpz_cmp_ui(ivar_558, ivar_557);
                  ivar_304 = (tmp42484 == 0);
} else {
                 
                  release_ltedfapeg__ent_adt(ivar_244);
                  release_ltedfapegproof__parsetree_adt(ivar_246);
                  release_ltedfapegproof__parsetree_adt(ivar_245);
                  ivar_304 = (bool_t) false;
};
} else {
                
                 release_ltedfapegproof__parsetree_adt(ivar_245);
                 bool_t ivar_588;
                 ltedfapeg__ent_adt_t ivar_595;
                 ivar_595 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_246);
                 ivar_588 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_595);
                 if (ivar_588){          
                  ivar_304 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_244);
} else {
                 
                  release_ltedfapeg__ent_adt(ivar_244);
                  ivar_304 = (bool_t) false;
};
};
};
} else {
              
               release_ltedfapeg__ent_adt(ivar_244);
               release_ltedfapegproof__parsetree_adt(ivar_246);
               release_ltedfapegproof__parsetree_adt(ivar_245);
               ivar_304 = (bool_t) false;
};
} else {
             
              release_ltedfapegproof__qstack_adt(ivar_5);
              release_ltedfapegproof__parsetree_adt(ivar_246);
              bool_t ivar_601;
              ltedfapeg__ent_adt_t ivar_608;
              ivar_608 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_245);
              ivar_601 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_608);
              if (ivar_601){       
               ivar_304 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_244);
} else {
              
               release_ltedfapeg__ent_adt(ivar_244);
               ivar_304 = (bool_t) false;
};
};
};
            if (ivar_304){     
             result = (ivar_243 == ivar_6);
} else {
            
             result = (bool_t) false;
};
} else {
           
            release_ltedfapegproof__parsetree_adt(ivar_246);
            release_ltedfapegproof__parsetree_adt(ivar_245);
            release_ltedfapegproof__qstack_adt(ivar_5);
            release_ltedfapeg__ent_adt(ivar_244);
            result = (bool_t) false;
};
} else {
           
           release_ltedfapegproof__parsetree_adt(ivar_246);
           release_ltedfapegproof__parsetree_adt(ivar_245);
           release_ltedfapegproof__qstack_adt(ivar_5);
           release_ltedfapeg__ent_adt(ivar_244);
           release_ltedfapeg__prepeg_adt(ivar_259);
           result = (bool_t) false;
};
};
};

        return result;
}

ltedfapegproof_closure_57_t new_ltedfapegproof_closure_57(void){
        static struct ltedfapegproof_funtype_56_ftbl_s ftbl = {.fptr = (bool_t (*)(ltedfapegproof_funtype_56_t, ltedfapegproof_record_55_t))&f_ltedfapegproof_closure_57, .mptr = (bool_t (*)(ltedfapegproof_funtype_56_t, ltedfapegproof__qstack_adt_t, uint8_t, uint32_t, ltedfapegproof__parsetree_adt_t))&m_ltedfapegproof_closure_57, .rptr =  (void (*)(ltedfapegproof_funtype_56_t))&release_ltedfapegproof_closure_57, .cptr = (ltedfapegproof_funtype_56_t (*)(ltedfapegproof_funtype_56_t))&copy_ltedfapegproof_closure_57};
        ltedfapegproof_closure_57_t tmp = (ltedfapegproof_closure_57_t) safe_malloc(sizeof(struct ltedfapegproof_closure_57_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_57(ltedfapegproof_funtype_56_t closure){
        ltedfapegproof_closure_57_t x = (ltedfapegproof_closure_57_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_array_51(x->fvar_1);
         release_ltedfapeg__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_57_t copy_ltedfapegproof_closure_57(ltedfapegproof_closure_57_t x){
        ltedfapegproof_closure_57_t y = new_ltedfapegproof_closure_57();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_56_htbl_t new_htbl = (ltedfapegproof_funtype_56_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_56_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_56_hashentry_t * new_data = (ltedfapegproof_funtype_56_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_56_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_56_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltedfapegproof_funtype_58(ltedfapegproof_funtype_58_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_58_t copy_ltedfapegproof_funtype_58(ltedfapegproof_funtype_58_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_58(ltedfapegproof_funtype_58_t x, ltedfapegproof_funtype_58_t y){
        return false;}

char* json_ltedfapegproof_funtype_58(ltedfapegproof_funtype_58_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_58\""); return result;}


ltedfapegproof_record_59_t new_ltedfapegproof_record_59(void){
        ltedfapegproof_record_59_t tmp = (ltedfapegproof_record_59_t) safe_malloc(sizeof(struct ltedfapegproof_record_59_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_59(ltedfapegproof_record_59_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_array_53(x->scaf);
         release_ltedfapeg__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_59_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_59((ltedfapegproof_record_59_t)x);
}

ltedfapegproof_record_59_t copy_ltedfapegproof_record_59(ltedfapegproof_record_59_t x){
        ltedfapegproof_record_59_t y = new_ltedfapegproof_record_59();
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->depth = (uint64_t)x->depth;
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->lflag = (bool_t)x->lflag;
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_59(ltedfapegproof_record_59_t x, ltedfapegproof_record_59_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltedfapegproof_array_53(x->scaf, y->scaf);
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->stack, y->stack);
        tmp = tmp && x->lflag == y->lflag;
        return tmp;}

char * json_ltedfapegproof_record_59(ltedfapegproof_record_59_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(16);
         sprintf(fld0, "\"scaf\" : ");
        tmp[0] = safe_strcat(fld0, json_ltedfapegproof_array_53(x->scaf));
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

ltedfapegproof_record_59_t update_ltedfapegproof_record_59_scaf(ltedfapegproof_record_59_t x, ltedfapegproof_array_53_t v){
        ltedfapegproof_record_59_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_ltedfapegproof_array_53(x->scaf);};}
        else {y = copy_ltedfapegproof_record_59(x); x->count--; y->scaf->count--;};
        y->scaf = (ltedfapegproof_array_53_t)v;
        return y;}

ltedfapegproof_record_59_t update_ltedfapegproof_record_59_depth(ltedfapegproof_record_59_t x, uint64_t v){
        ltedfapegproof_record_59_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_59(x); x->count--;};
        y->depth = (uint64_t)v;
        return y;}

ltedfapegproof_record_59_t update_ltedfapegproof_record_59_stack(ltedfapegproof_record_59_t x, ltedfapeg__ent_adt_t v){
        ltedfapegproof_record_59_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_ltedfapeg__ent_adt(x->stack);};}
        else {y = copy_ltedfapegproof_record_59(x); x->count--; y->stack->count--;};
        y->stack = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegproof_record_59_t update_ltedfapegproof_record_59_lflag(ltedfapegproof_record_59_t x, bool_t v){
        ltedfapegproof_record_59_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_59(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}




ltedfapegproof_record_60_t new_ltedfapegproof_record_60(void){
        ltedfapegproof_record_60_t tmp = (ltedfapegproof_record_60_t) safe_malloc(sizeof(struct ltedfapegproof_record_60_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegproof_record_60(ltedfapegproof_record_60_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_record_59(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegproof_record_60_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegproof_record_60((ltedfapegproof_record_60_t)x);
}

ltedfapegproof_record_60_t copy_ltedfapegproof_record_60(ltedfapegproof_record_60_t x){
        ltedfapegproof_record_60_t y = new_ltedfapegproof_record_60();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = (uint32_t)x->project_3;
        y->count = 1;
        return y;}

bool_t equal_ltedfapegproof_record_60(ltedfapegproof_record_60_t x, ltedfapegproof_record_60_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltedfapegproof_record_59(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        return tmp;}

char * json_ltedfapegproof_record_60(ltedfapegproof_record_60_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltedfapegproof_record_59(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltedfapegproof_record_60_ptr(pointer_t x, pointer_t y, actual_ltedfapegproof_record_60_t T){
        return equal_ltedfapegproof_record_60((ltedfapegproof_record_60_t)x, (ltedfapegproof_record_60_t)y);
}

char * json_ltedfapegproof_record_60_ptr(pointer_t x, actual_ltedfapegproof_record_60_t T){
        return json_ltedfapegproof_record_60((ltedfapegproof_record_60_t)x);
}

actual_ltedfapegproof_record_60_t actual_ltedfapegproof_record_60(){
        actual_ltedfapegproof_record_60_t new = (actual_ltedfapegproof_record_60_t)safe_malloc(sizeof(struct actual_ltedfapegproof_record_60_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegproof_record_60_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegproof_record_60_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegproof_record_60_ptr);
 

 
        return new;
 };

ltedfapegproof_record_60_t update_ltedfapegproof_record_60_project_1(ltedfapegproof_record_60_t x, ltedfapegproof_record_59_t v){
        ltedfapegproof_record_60_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltedfapegproof_record_59(x->project_1);};}
        else {y = copy_ltedfapegproof_record_60(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltedfapegproof_record_59_t)v;
        return y;}

ltedfapegproof_record_60_t update_ltedfapegproof_record_60_project_2(ltedfapegproof_record_60_t x, uint8_t v){
        ltedfapegproof_record_60_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_60(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

ltedfapegproof_record_60_t update_ltedfapegproof_record_60_project_3(ltedfapegproof_record_60_t x, uint32_t v){
        ltedfapegproof_record_60_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegproof_record_60(x); x->count--;};
        y->project_3 = (uint32_t)v;
        return y;}



void release_ltedfapegproof_funtype_61(ltedfapegproof_funtype_61_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_61_t copy_ltedfapegproof_funtype_61(ltedfapegproof_funtype_61_t x){return x->ftbl->cptr(x);}

bool_t equal_ltedfapegproof_funtype_61(ltedfapegproof_funtype_61_t x, ltedfapegproof_funtype_61_t y){
        return false;}

char* json_ltedfapegproof_funtype_61(ltedfapegproof_funtype_61_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_61\""); return result;}


ltedfapegproof__parsetree_adt_t f_ltedfapegproof_closure_62(struct ltedfapegproof_closure_62_s * closure, ltedfapegproof_record_60_t bvar){
        ltedfapegproof_record_59_t bvar_1;
        bvar_1 = (ltedfapegproof_record_59_t)bvar->project_1;
        bvar->project_1->count++;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        uint32_t bvar_3;
        bvar_3 = (uint32_t)bvar->project_3;
        release_ltedfapegproof_record_60(bvar);
        ltedfapegproof__parsetree_adt_t result = h_ltedfapegproof_closure_62(bvar_1, bvar_2, bvar_3, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        release_ltedfapegproof_record_59(bvar_1);
        return result;}

ltedfapegproof__parsetree_adt_t m_ltedfapegproof_closure_62(struct ltedfapegproof_closure_62_s * closure, ltedfapegproof_record_59_t bvar_1, uint8_t bvar_2, uint32_t bvar_3){
        return h_ltedfapegproof_closure_62(bvar_1, bvar_2, bvar_3, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

ltedfapegproof__parsetree_adt_t h_ltedfapegproof_closure_62(ltedfapegproof_record_59_t ivar_8, uint8_t ivar_10, uint32_t ivar_11, uint8_t ivar_5, uint32_t ivar_4, ltedfapegproof_array_51_t ivar_3, ltedfapeg__lang_spec_t ivar_2, uint32_t ivar_1){
        ltedfapegproof__parsetree_adt_t result;
        bool_t ivar_12;
        ltedfapeg__ent_adt_t ivar_26;
        ltedfapegproof_array_52_t ivar_16;
        ltedfapegproof_array_53_t ivar_20;
        ivar_20 = (ltedfapegproof_array_53_t)ivar_8->scaf;
        ivar_20->count++;
        ivar_16 = (ltedfapegproof_array_52_t)ivar_20->elems[ivar_11];
        ivar_16->count++;
        release_ltedfapegproof_array_53(ivar_20);
        ivar_26 = (ltedfapeg__ent_adt_t)ivar_16->elems[ivar_10];
        ivar_26->count++;
        release_ltedfapegproof_array_52(ivar_16);
        ivar_12 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_26);
        if (ivar_12){ 
             /* pendfun */ ltedfapegproof_funtype_63_t ivar_27;
             ltedfapegproof_closure_64_t cl42670;
             cl42670 = new_ltedfapegproof_closure_64();
             ivar_27 = (ltedfapegproof_funtype_63_t)cl42670;
             /* A */ ltedfapegproof_funtype_65_t ivar_32;
             ltedfapegproof_closure_66_t cl42671;
             cl42671 = new_ltedfapegproof_closure_66();
             cl42671->fvar_1 = (uint32_t)ivar_1;
             cl42671->fvar_2 = (ltedfapegproof_funtype_63_t)ivar_27;
             if (cl42671->fvar_2 != NULL) cl42671->fvar_2->count++;
             release_ltedfapegproof_funtype_63(ivar_27);
             ivar_32 = (ltedfapegproof_funtype_65_t)cl42671;
             ltedfapegproof_array_53_t ivar_60;
             //copying to ltedfapegproof_array_53 from ltedfapegproof_funtype_65;
             uint32_t tmp42672;
             //copying to uint32 from uint32;
             tmp42672 = (uint32_t)ivar_1;
             tmp42672 += 1;
             ivar_60 = new_ltedfapegproof_array_53(tmp42672);
             for (uint32_t index_85 = 0; index_85 < tmp42672; index_85++){
           uint32_t tmp42673;
           tmp42673 = (uint32_t)255;
           ivar_60->elems[index_85] = new_ltedfapegproof_array_52(tmp42673);
           for (uint32_t index_86 = 0; index_86 < tmp42673; index_86++){
           ivar_60->elems[index_85]->elems[index_86] = (ltedfapeg__ent_adt_t)ivar_32->ftbl->fptr(ivar_32, index_85)->ftbl->fptr(ivar_32->ftbl->fptr(ivar_32, index_85), index_86);
           if (ivar_60->elems[index_85]->elems[index_86] != NULL) ivar_60->elems[index_85]->elems[index_86]->count++;
           };
             };
             release_ltedfapegproof_funtype_65(ivar_32);
             ltedfapegproof__qstack_adt_t ivar_62;
             ivar_62 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qempty();
             if (ivar_62 != NULL) ivar_62->count++;
             ivar_2->count++;
             ivar_3->count++;
             result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildloop((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_59_t)ivar_8, (ltedfapegproof_array_53_t)ivar_60, (ltedfapegproof__qstack_adt_t)ivar_62, (uint8_t)ivar_10, (uint32_t)ivar_11);
} else {
        
             ltedfapegproof__qstack_adt_t ivar_82;
             ivar_82 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qempty();
             if (ivar_82 != NULL) ivar_82->count++;
             ivar_2->count++;
             ivar_3->count++;
             result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildtree((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_59_t)ivar_8, (ltedfapegproof__qstack_adt_t)ivar_82, (uint8_t)ivar_10, (uint32_t)ivar_11);
};

        return result;
}

ltedfapegproof_closure_62_t new_ltedfapegproof_closure_62(void){
        static struct ltedfapegproof_funtype_61_ftbl_s ftbl = {.fptr = (ltedfapegproof__parsetree_adt_t (*)(ltedfapegproof_funtype_61_t, ltedfapegproof_record_60_t))&f_ltedfapegproof_closure_62, .mptr = (ltedfapegproof__parsetree_adt_t (*)(ltedfapegproof_funtype_61_t, ltedfapegproof_record_59_t, uint8_t, uint32_t))&m_ltedfapegproof_closure_62, .rptr =  (void (*)(ltedfapegproof_funtype_61_t))&release_ltedfapegproof_closure_62, .cptr = (ltedfapegproof_funtype_61_t (*)(ltedfapegproof_funtype_61_t))&copy_ltedfapegproof_closure_62};
        ltedfapegproof_closure_62_t tmp = (ltedfapegproof_closure_62_t) safe_malloc(sizeof(struct ltedfapegproof_closure_62_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_62(ltedfapegproof_funtype_61_t closure){
        ltedfapegproof_closure_62_t x = (ltedfapegproof_closure_62_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_array_51(x->fvar_3);
         release_ltedfapeg__lang_spec(x->fvar_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_62_t copy_ltedfapegproof_closure_62(ltedfapegproof_closure_62_t x){
        ltedfapegproof_closure_62_t y = new_ltedfapegproof_closure_62();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint8_t)x->fvar_1;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = (uint32_t)x->fvar_5;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_61_htbl_t new_htbl = (ltedfapegproof_funtype_61_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_61_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_61_hashentry_t * new_data = (ltedfapegproof_funtype_61_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_61_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_61_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltedfapegproof_funtype_63(ltedfapegproof_funtype_63_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_63_t copy_ltedfapegproof_funtype_63(ltedfapegproof_funtype_63_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltedfapegproof_funtype_63(ltedfapegproof_funtype_63_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltedfapegproof_funtype_63_hashentry_t data = htbl->data[hashindex];
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

ltedfapegproof_funtype_63_t dupdate_ltedfapegproof_funtype_63(ltedfapegproof_funtype_63_t a, uint8_t i, ltedfapeg__ent_adt_t v){
        ltedfapegproof_funtype_63_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltedfapegproof_funtype_63_htbl_t)safe_malloc(sizeof(struct ltedfapegproof_funtype_63_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltedfapegproof_funtype_63_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltedfapegproof_funtype_63_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltedfapegproof_funtype_63_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltedfapegproof_funtype_63_hashentry_t * new_data = (ltedfapegproof_funtype_63_hashentry_t *)safe_malloc(new_size * sizeof(struct ltedfapegproof_funtype_63_hashentry_s));
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
        uint32_t hashindex = lookup_ltedfapegproof_funtype_63(htbl, i, ihash);
        ltedfapegproof_funtype_63_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ltedfapeg__ent_adt_t)v; htbl->num_entries++;}
            else {ltedfapeg__ent_adt_t tempvalue;tempvalue = (ltedfapeg__ent_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ltedfapeg__ent_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ltedfapeg__ent_adt(tempvalue);};
        return a;

}

ltedfapegproof_funtype_63_t update_ltedfapegproof_funtype_63(ltedfapegproof_funtype_63_t a, uint8_t i, ltedfapeg__ent_adt_t v){
        if (a->count == 1){
                return dupdate_ltedfapegproof_funtype_63(a, i, v);
            } else {
                ltedfapegproof_funtype_63_t x = copy_ltedfapegproof_funtype_63(a);
                a->count--;
                return dupdate_ltedfapegproof_funtype_63(x, i, v);
            }}

bool_t equal_ltedfapegproof_funtype_63(ltedfapegproof_funtype_63_t x, ltedfapegproof_funtype_63_t y){
        return false;}

char* json_ltedfapegproof_funtype_63(ltedfapegproof_funtype_63_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_63\""); return result;}


ltedfapeg__ent_adt_t f_ltedfapegproof_closure_64(struct ltedfapegproof_closure_64_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        ltedfapegproof_funtype_63_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_ltedfapegproof_funtype_63(htbl, bvar, hash);
        ltedfapegproof_funtype_63_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            ltedfapeg__ent_adt_t result;
            result = (ltedfapeg__ent_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_ltedfapegproof_closure_64(bvar);};

return h_ltedfapegproof_closure_64(bvar);}

ltedfapeg__ent_adt_t m_ltedfapegproof_closure_64(struct ltedfapegproof_closure_64_s * closure, uint8_t bvar){
        return h_ltedfapegproof_closure_64(bvar);}

ltedfapeg__ent_adt_t h_ltedfapegproof_closure_64(uint8_t ivar_31){
        ltedfapeg__ent_adt_t result;
        result = (ltedfapeg__ent_adt_t)ltedfapeg__pending();
        if (result != NULL) result->count++;

        return result;
}

ltedfapegproof_closure_64_t new_ltedfapegproof_closure_64(void){
        static struct ltedfapegproof_funtype_63_ftbl_s ftbl = {.fptr = (ltedfapeg__ent_adt_t (*)(ltedfapegproof_funtype_63_t, uint8_t))&f_ltedfapegproof_closure_64, .mptr = (ltedfapeg__ent_adt_t (*)(ltedfapegproof_funtype_63_t, uint8_t))&m_ltedfapegproof_closure_64, .rptr =  (void (*)(ltedfapegproof_funtype_63_t))&release_ltedfapegproof_closure_64, .cptr = (ltedfapegproof_funtype_63_t (*)(ltedfapegproof_funtype_63_t))&copy_ltedfapegproof_closure_64};
        ltedfapegproof_closure_64_t tmp = (ltedfapegproof_closure_64_t) safe_malloc(sizeof(struct ltedfapegproof_closure_64_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_64(ltedfapegproof_funtype_63_t closure){
        ltedfapegproof_closure_64_t x = (ltedfapegproof_closure_64_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_64_t copy_ltedfapegproof_closure_64(ltedfapegproof_closure_64_t x){
        ltedfapegproof_closure_64_t y = new_ltedfapegproof_closure_64();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            ltedfapegproof_funtype_63_htbl_t new_htbl = (ltedfapegproof_funtype_63_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_63_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_63_hashentry_t * new_data = (ltedfapegproof_funtype_63_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_63_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_63_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltedfapegproof_funtype_65(ltedfapegproof_funtype_65_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegproof_funtype_65_t copy_ltedfapegproof_funtype_65(ltedfapegproof_funtype_65_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltedfapegproof_funtype_65(ltedfapegproof_funtype_65_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltedfapegproof_funtype_65_hashentry_t data = htbl->data[hashindex];
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

ltedfapegproof_funtype_65_t dupdate_ltedfapegproof_funtype_65(ltedfapegproof_funtype_65_t a, uint32_t i, ltedfapegproof_funtype_63_t v){
        ltedfapegproof_funtype_65_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltedfapegproof_funtype_65_htbl_t)safe_malloc(sizeof(struct ltedfapegproof_funtype_65_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltedfapegproof_funtype_65_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltedfapegproof_funtype_65_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltedfapegproof_funtype_65_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltedfapegproof_funtype_65_hashentry_t * new_data = (ltedfapegproof_funtype_65_hashentry_t *)safe_malloc(new_size * sizeof(struct ltedfapegproof_funtype_65_hashentry_s));
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
                                new_data[new_loc].value = (ltedfapegproof_funtype_63_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_ltedfapegproof_funtype_65(htbl, i, ihash);
        ltedfapegproof_funtype_65_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ltedfapegproof_funtype_63_t)v; htbl->num_entries++;}
            else {ltedfapegproof_funtype_63_t tempvalue;tempvalue = (ltedfapegproof_funtype_63_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ltedfapegproof_funtype_63_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ltedfapegproof_funtype_63(tempvalue);};
        return a;

}

ltedfapegproof_funtype_65_t update_ltedfapegproof_funtype_65(ltedfapegproof_funtype_65_t a, uint32_t i, ltedfapegproof_funtype_63_t v){
        if (a->count == 1){
                return dupdate_ltedfapegproof_funtype_65(a, i, v);
            } else {
                ltedfapegproof_funtype_65_t x = copy_ltedfapegproof_funtype_65(a);
                a->count--;
                return dupdate_ltedfapegproof_funtype_65(x, i, v);
            }}

bool_t equal_ltedfapegproof_funtype_65(ltedfapegproof_funtype_65_t x, ltedfapegproof_funtype_65_t y){
        return false;}

char* json_ltedfapegproof_funtype_65(ltedfapegproof_funtype_65_t x){char * result = safe_malloc(35); sprintf(result, "%s", "\"ltedfapegproof_funtype_65\""); return result;}


ltedfapegproof_funtype_63_t f_ltedfapegproof_closure_66(struct ltedfapegproof_closure_66_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        ltedfapegproof_funtype_65_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_ltedfapegproof_funtype_65(htbl, bvar, hash);
        ltedfapegproof_funtype_65_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            ltedfapegproof_funtype_63_t result;
            result = (ltedfapegproof_funtype_63_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_ltedfapegproof_closure_66(bvar, closure->fvar_1, closure->fvar_2);};

return h_ltedfapegproof_closure_66(bvar, closure->fvar_1, closure->fvar_2);}

ltedfapegproof_funtype_63_t m_ltedfapegproof_closure_66(struct ltedfapegproof_closure_66_s * closure, uint32_t bvar){
        return h_ltedfapegproof_closure_66(bvar, closure->fvar_1, closure->fvar_2);}

ltedfapegproof_funtype_63_t h_ltedfapegproof_closure_66(uint32_t ivar_39, uint32_t ivar_1, ltedfapegproof_funtype_63_t ivar_27){
        ltedfapegproof_funtype_63_t result;
        //copying to ltedfapegproof_funtype_63 from ltedfapegproof_funtype_63;
        result = (ltedfapegproof_funtype_63_t)ivar_27;
        if (result != NULL) result->count++;

        return result;
}

ltedfapegproof_closure_66_t new_ltedfapegproof_closure_66(void){
        static struct ltedfapegproof_funtype_65_ftbl_s ftbl = {.fptr = (ltedfapegproof_funtype_63_t (*)(ltedfapegproof_funtype_65_t, uint32_t))&f_ltedfapegproof_closure_66, .mptr = (ltedfapegproof_funtype_63_t (*)(ltedfapegproof_funtype_65_t, uint32_t))&m_ltedfapegproof_closure_66, .rptr =  (void (*)(ltedfapegproof_funtype_65_t))&release_ltedfapegproof_closure_66, .cptr = (ltedfapegproof_funtype_65_t (*)(ltedfapegproof_funtype_65_t))&copy_ltedfapegproof_closure_66};
        ltedfapegproof_closure_66_t tmp = (ltedfapegproof_closure_66_t) safe_malloc(sizeof(struct ltedfapegproof_closure_66_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegproof_closure_66(ltedfapegproof_funtype_65_t closure){
        ltedfapegproof_closure_66_t x = (ltedfapegproof_closure_66_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltedfapegproof_funtype_63(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegproof_closure_66_t copy_ltedfapegproof_closure_66(ltedfapegproof_closure_66_t x){
        ltedfapegproof_closure_66_t y = new_ltedfapegproof_closure_66();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ltedfapegproof_funtype_65_htbl_t new_htbl = (ltedfapegproof_funtype_65_htbl_t) safe_malloc(sizeof(struct ltedfapegproof_funtype_65_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegproof_funtype_65_hashentry_t * new_data = (ltedfapegproof_funtype_65_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegproof_funtype_65_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegproof_funtype_65_hashentry_s)));
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

ltedfapegproof__parsetree_adt_t update_ltedfapegproof__parsetree_adt_nt(ltedfapegproof__parsetree_adt_t ivar_1, uint8_t ivar_11){
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
             result = (ltedfapegproof__parsetree_adt_t)update_ltedfapegproof__zero_nt(ivar_12, ivar_11);
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
           result = (ltedfapegproof__parsetree_adt_t)update_ltedfapegproof__one_nt(ivar_16, ivar_11);
} else {
             
           ltedfapegproof__two_t ivar_20;
           //copying to ltedfapegproof__two from ltedfapegproof__parsetree_adt;
           ivar_20 = (ltedfapegproof__two_t)ivar_1;
           if (ivar_20 != NULL) ivar_20->count++;
           release_ltedfapegproof__parsetree_adt(ivar_1);
           result = (ltedfapegproof__parsetree_adt_t)update_ltedfapegproof__two_nt(ivar_20, ivar_11);
};
};

        
        return result;
}

uint8_t ltedfapegproof__parsetree_adt_nt(ltedfapegproof__parsetree_adt_t ivar_1){
        uint8_t  result;
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
             result = (uint8_t)ivar_2->nt;
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
           result = (uint8_t)ivar_6->nt;
           release_ltedfapegproof__one(ivar_6);
} else {
             
           ltedfapegproof__two_t ivar_10;
           //copying to ltedfapegproof__two from ltedfapegproof__parsetree_adt;
           ivar_10 = (ltedfapegproof__two_t)ivar_1;
           if (ivar_10 != NULL) ivar_10->count++;
           release_ltedfapegproof__parsetree_adt(ivar_1);
           result = (uint8_t)ivar_10->nt;
           release_ltedfapegproof__two(ivar_10);
};
};

        
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

ltedfapegproof__parsetree_adt_t ltedfapegproof__zero(uint8_t ivar_2, ltedfapeg__ent_adt_t ivar_3){
        ltedfapegproof__parsetree_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        ltedfapegproof__zero_t tmp42217 = new_ltedfapegproof__zero();;
        result = (ltedfapegproof__parsetree_adt_t)tmp42217;
        tmp42217->ltedfapegproof__parsetree_adt_index = (uint8_t)ivar_1;
        tmp42217->nt = (uint8_t)ivar_2;
        tmp42217->entry = (ltedfapeg__ent_adt_t)ivar_3;

        
        return result;
}

ltedfapegproof__parsetree_adt_t ltedfapegproof__one(uint8_t ivar_2, ltedfapeg__ent_adt_t ivar_3, ltedfapegproof__parsetree_adt_t ivar_4){
        ltedfapegproof__parsetree_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        ltedfapegproof__one_t tmp42218 = new_ltedfapegproof__one();;
        result = (ltedfapegproof__parsetree_adt_t)tmp42218;
        tmp42218->ltedfapegproof__parsetree_adt_index = (uint8_t)ivar_1;
        tmp42218->nt = (uint8_t)ivar_2;
        tmp42218->entry = (ltedfapeg__ent_adt_t)ivar_3;
        tmp42218->subone = (ltedfapegproof__parsetree_adt_t)ivar_4;

        
        return result;
}

ltedfapegproof__parsetree_adt_t ltedfapegproof__two(uint8_t ivar_2, ltedfapeg__ent_adt_t ivar_3, ltedfapegproof__parsetree_adt_t ivar_4, ltedfapegproof__parsetree_adt_t ivar_5){
        ltedfapegproof__parsetree_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)2;
        ltedfapegproof__two_t tmp42219 = new_ltedfapegproof__two();;
        result = (ltedfapegproof__parsetree_adt_t)tmp42219;
        tmp42219->ltedfapegproof__parsetree_adt_index = (uint8_t)ivar_1;
        tmp42219->nt = (uint8_t)ivar_2;
        tmp42219->entry = (ltedfapeg__ent_adt_t)ivar_3;
        tmp42219->subone = (ltedfapegproof__parsetree_adt_t)ivar_4;
        tmp42219->subtwo = (ltedfapegproof__parsetree_adt_t)ivar_5;

        
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
        bool_t ivar_11;
        ivar_1->count++;
        ivar_11 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_1);
        if (ivar_11){ 
             release_ltedfapegproof__parsetree_adt(ivar_1);
             result = (uint8_t)0;
} else {
        
             bool_t ivar_27;
             ivar_1->count++;
             ivar_27 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_1);
             if (ivar_27){  
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
        
             bool_t ivar_17;
             ivar_2->count++;
             ivar_17 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_2);
             if (ivar_17){  
           release_ltedfapegproof__parsetree_adt(ivar_1);
           release_ltedfapegproof__parsetree_adt(ivar_2);
           result = (bool_t) false;
} else {
             
           bool_t ivar_38;
           ivar_2->count++;
           ivar_38 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_2);
           if (ivar_38){   
           ltedfapegproof__parsetree_adt_t ivar_23;
           ivar_23 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_2);
           result = (bool_t)ltedfapegproof__subterm__1((ltedfapegproof__parsetree_adt_t)ivar_1, (ltedfapegproof__parsetree_adt_t)ivar_23);
} else {
           
           ltedfapegproof__parsetree_adt_t ivar_44;
           ivar_2->count++;
           ivar_44 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_2);
           ltedfapegproof__parsetree_adt_t ivar_45;
           ivar_45 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subtwo((ltedfapegproof__parsetree_adt_t)ivar_2);
           bool_t ivar_58;
           ivar_1->count++;
           ivar_58 = (bool_t)ltedfapegproof__subterm__1((ltedfapegproof__parsetree_adt_t)ivar_1, (ltedfapegproof__parsetree_adt_t)ivar_44);
           if (ivar_58){    
            release_ltedfapegproof__parsetree_adt(ivar_45);
            release_ltedfapegproof__parsetree_adt(ivar_1);
            result = (bool_t) true;
} else {
           
            result = (bool_t)ltedfapegproof__subterm__1((ltedfapegproof__parsetree_adt_t)ivar_1, (ltedfapegproof__parsetree_adt_t)ivar_45);
};
};
};
};

        
        return result;
}

bool_t ltedfapegproof__doublelessp__1(ltedfapegproof__parsetree_adt_t ivar_1, ltedfapegproof__parsetree_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_12;
        ivar_2->count++;
        ivar_12 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_2);
        if (ivar_12){ 
             release_ltedfapegproof__parsetree_adt(ivar_1);
             release_ltedfapegproof__parsetree_adt(ivar_2);
             result = (bool_t) false;
} else {
        
             bool_t ivar_39;
             ivar_2->count++;
             ivar_39 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_2);
             if (ivar_39){  
           ltedfapegproof__parsetree_adt_t ivar_18;
           ivar_18 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_2);
           bool_t ivar_28;
           ivar_1->count++;
           ivar_18->count++;
           ivar_28 = (bool_t) equal_ltedfapegproof__parsetree_adt(ivar_1, ivar_18);
           if (ivar_28){   
           release_ltedfapegproof__parsetree_adt(ivar_18);
           release_ltedfapegproof__parsetree_adt(ivar_1);
           result = (bool_t) true;
} else {
           
           result = (bool_t)ltedfapegproof__doublelessp__1((ltedfapegproof__parsetree_adt_t)ivar_1, (ltedfapegproof__parsetree_adt_t)ivar_18);
};
} else {
             
           ltedfapegproof__parsetree_adt_t ivar_45;
           ivar_2->count++;
           ivar_45 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_2);
           ltedfapegproof__parsetree_adt_t ivar_46;
           ivar_46 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subtwo((ltedfapegproof__parsetree_adt_t)ivar_2);
           bool_t ivar_59;
           bool_t ivar_61;
           ivar_1->count++;
           ivar_45->count++;
           ivar_61 = (bool_t) equal_ltedfapegproof__parsetree_adt(ivar_1, ivar_45);
           if (ivar_61){   
           release_ltedfapegproof__parsetree_adt(ivar_45);
           ivar_59 = (bool_t) true;
} else {
           
           ivar_1->count++;
           ivar_59 = (bool_t)ltedfapegproof__doublelessp__1((ltedfapegproof__parsetree_adt_t)ivar_1, (ltedfapegproof__parsetree_adt_t)ivar_45);
};
           if (ivar_59){   
           release_ltedfapegproof__parsetree_adt(ivar_46);
           release_ltedfapegproof__parsetree_adt(ivar_1);
           result = (bool_t) true;
} else {
           
           bool_t ivar_72;
           ivar_1->count++;
           ivar_46->count++;
           ivar_72 = (bool_t) equal_ltedfapegproof__parsetree_adt(ivar_1, ivar_46);
           if (ivar_72){    
            release_ltedfapegproof__parsetree_adt(ivar_46);
            release_ltedfapegproof__parsetree_adt(ivar_1);
            result = (bool_t) true;
} else {
           
            result = (bool_t)ltedfapegproof__doublelessp__1((ltedfapegproof__parsetree_adt_t)ivar_1, (ltedfapegproof__parsetree_adt_t)ivar_46);
};
};
};
};

        
        return result;
}

ltedfapegproof_funtype_5_t ltedfapegproof__reduce_nat__1(ltedfapegproof_funtype_7_t ivar_1, ltedfapegproof_funtype_9_t ivar_3, ltedfapegproof_funtype_11_t ivar_5){
        ltedfapegproof_funtype_5_t  result;
        ltedfapegproof_closure_12_t cl42251;
        cl42251 = new_ltedfapegproof_closure_12();
        cl42251->fvar_1 = (ltedfapegproof_funtype_9_t)ivar_3;
        if (cl42251->fvar_1 != NULL) cl42251->fvar_1->count++;
        cl42251->fvar_2 = (ltedfapegproof_funtype_11_t)ivar_5;
        if (cl42251->fvar_2 != NULL) cl42251->fvar_2->count++;
        cl42251->fvar_3 = (ltedfapegproof_funtype_7_t)ivar_1;
        if (cl42251->fvar_3 != NULL) cl42251->fvar_3->count++;
        release_ltedfapegproof_funtype_9(ivar_3);
        release_ltedfapegproof_funtype_11(ivar_5);
        release_ltedfapegproof_funtype_7(ivar_1);
        result = (ltedfapegproof_funtype_5_t)cl42251;

        
        return result;
}

ltedfapegproof_funtype_5_t ltedfapegproof__REDUCE_nat__1(ltedfapegproof_funtype_14_t ivar_1, ltedfapegproof_funtype_16_t ivar_3, ltedfapegproof_funtype_18_t ivar_5){
        ltedfapegproof_funtype_5_t  result;
        ltedfapegproof_closure_19_t cl42289;
        cl42289 = new_ltedfapegproof_closure_19();
        cl42289->fvar_1 = (ltedfapegproof_funtype_16_t)ivar_3;
        if (cl42289->fvar_1 != NULL) cl42289->fvar_1->count++;
        cl42289->fvar_2 = (ltedfapegproof_funtype_18_t)ivar_5;
        if (cl42289->fvar_2 != NULL) cl42289->fvar_2->count++;
        cl42289->fvar_3 = (ltedfapegproof_funtype_14_t)ivar_1;
        if (cl42289->fvar_3 != NULL) cl42289->fvar_3->count++;
        release_ltedfapegproof_funtype_16(ivar_3);
        release_ltedfapegproof_funtype_18(ivar_5);
        release_ltedfapegproof_funtype_14(ivar_1);
        result = (ltedfapegproof_funtype_5_t)cl42289;

        
        return result;
}

ltedfapegproof_funtype_20_t ltedfapegproof__reduce_ordinal__1(ltedfapegproof_funtype_21_t ivar_1, ltedfapegproof_funtype_23_t ivar_3, ltedfapegproof_funtype_25_t ivar_5){
        ltedfapegproof_funtype_20_t  result;
        ltedfapegproof_closure_26_t cl42318;
        cl42318 = new_ltedfapegproof_closure_26();
        cl42318->fvar_1 = (ltedfapegproof_funtype_23_t)ivar_3;
        if (cl42318->fvar_1 != NULL) cl42318->fvar_1->count++;
        cl42318->fvar_2 = (ltedfapegproof_funtype_25_t)ivar_5;
        if (cl42318->fvar_2 != NULL) cl42318->fvar_2->count++;
        cl42318->fvar_3 = (ltedfapegproof_funtype_21_t)ivar_1;
        if (cl42318->fvar_3 != NULL) cl42318->fvar_3->count++;
        release_ltedfapegproof_funtype_23(ivar_3);
        release_ltedfapegproof_funtype_25(ivar_5);
        release_ltedfapegproof_funtype_21(ivar_1);
        result = (ltedfapegproof_funtype_20_t)cl42318;

        
        return result;
}

ltedfapegproof_funtype_20_t ltedfapegproof__REDUCE_ordinal__1(ltedfapegproof_funtype_27_t ivar_1, ltedfapegproof_funtype_29_t ivar_3, ltedfapegproof_funtype_31_t ivar_5){
        ltedfapegproof_funtype_20_t  result;
        ltedfapegproof_closure_32_t cl42356;
        cl42356 = new_ltedfapegproof_closure_32();
        cl42356->fvar_1 = (ltedfapegproof_funtype_29_t)ivar_3;
        if (cl42356->fvar_1 != NULL) cl42356->fvar_1->count++;
        cl42356->fvar_2 = (ltedfapegproof_funtype_31_t)ivar_5;
        if (cl42356->fvar_2 != NULL) cl42356->fvar_2->count++;
        cl42356->fvar_3 = (ltedfapegproof_funtype_27_t)ivar_1;
        if (cl42356->fvar_3 != NULL) cl42356->fvar_3->count++;
        release_ltedfapegproof_funtype_29(ivar_3);
        release_ltedfapegproof_funtype_31(ivar_5);
        release_ltedfapegproof_funtype_27(ivar_1);
        result = (ltedfapegproof_funtype_20_t)cl42356;

        
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
        ltedfapegproof__qstack_adt_t tmp42364 = new_ltedfapegproof__qstack_adt();;
        result = (ltedfapegproof__qstack_adt_t)tmp42364;
        tmp42364->ltedfapegproof__qstack_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

ltedfapegproof__qstack_adt_t ltedfapegproof__qpush(uint8_t ivar_2, uint32_t ivar_3, ltedfapegproof__qstack_adt_t ivar_4){
        ltedfapegproof__qstack_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        ltedfapegproof__qpush_t tmp42365 = new_ltedfapegproof__qpush();;
        result = (ltedfapegproof__qstack_adt_t)tmp42365;
        tmp42365->ltedfapegproof__qstack_adt_index = (uint8_t)ivar_1;
        tmp42365->nonterm = (uint8_t)ivar_2;
        tmp42365->pos = (uint32_t)ivar_3;
        tmp42365->qpop = (ltedfapegproof__qstack_adt_t)ivar_4;

        
        return result;
}

ltedfapegproof_funtype_35_t ltedfapegproof__qstack_ord(void){
        ltedfapegproof_funtype_35_t  static  result;

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

ltedfapegproof_funtype_36_t ltedfapegproof__reduce_nat__2(mpz_ptr_t ivar_1, ltedfapegproof_funtype_38_t ivar_2){
        ltedfapegproof_funtype_36_t  result;
        ltedfapegproof_closure_39_t cl42379;
        cl42379 = new_ltedfapegproof_closure_39();
        cl42379->fvar_1 = (ltedfapegproof_funtype_38_t)ivar_2;
        if (cl42379->fvar_1 != NULL) cl42379->fvar_1->count++;
        mpz_set(cl42379->fvar_2, ivar_1);
        release_ltedfapegproof_funtype_38(ivar_2);
        result = (ltedfapegproof_funtype_36_t)cl42379;

        
        return result;
}

ltedfapegproof_funtype_36_t ltedfapegproof__REDUCE_nat__2(ltedfapegproof_funtype_36_t ivar_1, ltedfapegproof_funtype_41_t ivar_3){
        ltedfapegproof_funtype_36_t  result;
        ltedfapegproof_closure_42_t cl42393;
        cl42393 = new_ltedfapegproof_closure_42();
        cl42393->fvar_1 = (ltedfapegproof_funtype_41_t)ivar_3;
        if (cl42393->fvar_1 != NULL) cl42393->fvar_1->count++;
        cl42393->fvar_2 = (ltedfapegproof_funtype_36_t)ivar_1;
        if (cl42393->fvar_2 != NULL) cl42393->fvar_2->count++;
        release_ltedfapegproof_funtype_41(ivar_3);
        release_ltedfapegproof_funtype_36(ivar_1);
        result = (ltedfapegproof_funtype_36_t)cl42393;

        
        return result;
}

ltedfapegproof_funtype_43_t ltedfapegproof__reduce_ordinal__2(ordstruct_adt__ordstruct_adt_t ivar_1, ltedfapegproof_funtype_45_t ivar_2){
        ltedfapegproof_funtype_43_t  result;
        ltedfapegproof_closure_46_t cl42404;
        cl42404 = new_ltedfapegproof_closure_46();
        cl42404->fvar_1 = (ltedfapegproof_funtype_45_t)ivar_2;
        if (cl42404->fvar_1 != NULL) cl42404->fvar_1->count++;
        cl42404->fvar_2 = (ordstruct_adt__ordstruct_adt_t)ivar_1;
        if (cl42404->fvar_2 != NULL) cl42404->fvar_2->count++;
        release_ltedfapegproof_funtype_45(ivar_2);
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ltedfapegproof_funtype_43_t)cl42404;

        
        return result;
}

ltedfapegproof_funtype_43_t ltedfapegproof__REDUCE_ordinal__2(ltedfapegproof_funtype_43_t ivar_1, ltedfapegproof_funtype_48_t ivar_3){
        ltedfapegproof_funtype_43_t  result;
        ltedfapegproof_closure_49_t cl42418;
        cl42418 = new_ltedfapegproof_closure_49();
        cl42418->fvar_1 = (ltedfapegproof_funtype_48_t)ivar_3;
        if (cl42418->fvar_1 != NULL) cl42418->fvar_1->count++;
        cl42418->fvar_2 = (ltedfapegproof_funtype_43_t)ivar_1;
        if (cl42418->fvar_2 != NULL) cl42418->fvar_2->count++;
        release_ltedfapegproof_funtype_48(ivar_3);
        release_ltedfapegproof_funtype_43(ivar_1);
        result = (ltedfapegproof_funtype_43_t)cl42418;

        
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

ltedfapegproof_funtype_50_t ltedfapegproof__good_qstackp(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_51_t ivar_3, ltedfapegproof_array_53_t ivar_4){
        ltedfapegproof_funtype_50_t  result;
        ltedfapegproof_closure_54_t cl42427;
        cl42427 = new_ltedfapegproof_closure_54();
        cl42427->fvar_1 = (ltedfapegproof_array_51_t)ivar_3;
        if (cl42427->fvar_1 != NULL) cl42427->fvar_1->count++;
        cl42427->fvar_2 = (ltedfapegproof_array_53_t)ivar_4;
        if (cl42427->fvar_2 != NULL) cl42427->fvar_2->count++;
        cl42427->fvar_3 = (ltedfapeg__lang_spec_t)ivar_2;
        if (cl42427->fvar_3 != NULL) cl42427->fvar_3->count++;
        cl42427->fvar_4 = (uint32_t)ivar_1;
        release_ltedfapegproof_array_53(ivar_4);
        release_ltedfapegproof_array_51(ivar_3);
        release_ltedfapeg__lang_spec(ivar_2);
        result = (ltedfapegproof_funtype_50_t)cl42427;

        
        return result;
}

ltedfapegproof_funtype_56_t ltedfapegproof__good_parsetreep(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_51_t ivar_3){
        ltedfapegproof_funtype_56_t  result;
        ltedfapegproof_closure_57_t cl42485;
        cl42485 = new_ltedfapegproof_closure_57();
        cl42485->fvar_1 = (ltedfapegproof_array_51_t)ivar_3;
        if (cl42485->fvar_1 != NULL) cl42485->fvar_1->count++;
        cl42485->fvar_2 = (uint32_t)ivar_1;
        cl42485->fvar_3 = (ltedfapeg__lang_spec_t)ivar_2;
        if (cl42485->fvar_3 != NULL) cl42485->fvar_3->count++;
        release_ltedfapegproof_array_51(ivar_3);
        release_ltedfapeg__lang_spec(ivar_2);
        result = (ltedfapegproof_funtype_56_t)cl42485;

        
        return result;
}

ltedfapegproof__parsetree_adt_t ltedfapegproof__buildtree(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_51_t ivar_3, uint32_t ivar_4, uint8_t ivar_5, ltedfapegproof_record_59_t ivar_6, ltedfapegproof__qstack_adt_t ivar_8, uint8_t ivar_9, uint32_t ivar_10){
        ltedfapegproof__parsetree_adt_t  result;
        ltedfapeg__prepeg_adt_t ivar_11;
        ivar_11 = (ltedfapeg__prepeg_adt_t)ivar_2->elems[ivar_9];
        ivar_11->count++;
        bool_t ivar_214;
        ivar_11->count++;
        ivar_214 = (bool_t)r_ltedfapeg__ltep((ltedfapeg__prepeg_adt_t)ivar_11);
        if (ivar_214){ 
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
             ltedfapegproof_array_52_t ivar_32;
             ltedfapegproof_array_53_t ivar_36;
             ivar_36 = (ltedfapegproof_array_53_t)ivar_6->scaf;
             ivar_36->count++;
             ivar_32 = (ltedfapegproof_array_52_t)ivar_36->elems[ivar_10];
             ivar_32->count++;
             release_ltedfapegproof_array_53(ivar_36);
             ivar_42 = (ltedfapeg__ent_adt_t)ivar_32->elems[ivar_16];
             ivar_42->count++;
             release_ltedfapegproof_array_52(ivar_32);
             ivar_28 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_42);
             if (ivar_28){  
           /* E1 */ ltedfapegproof__parsetree_adt_t ivar_43;
           ltedfapegproof__qstack_adt_t ivar_68;
           ivar_8->count++;
           ivar_68 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_9, (uint32_t)ivar_10, (ltedfapegproof__qstack_adt_t)ivar_8);
           ivar_2->count++;
           ivar_3->count++;
           ivar_6->count++;
           ivar_43 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildtree((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_59_t)ivar_6, (ltedfapegproof__qstack_adt_t)ivar_68, (uint8_t)ivar_16, (uint32_t)ivar_10);
           /* E2 */ ltedfapegproof__parsetree_adt_t ivar_71;
           ltedfapegproof__qstack_adt_t ivar_113;
           ivar_113 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_9, (uint32_t)ivar_10, (ltedfapegproof__qstack_adt_t)ivar_8);
           uint64_t ivar_117;
           uint32_t ivar_89;
           ltedfapeg__ent_adt_t ivar_103;
           ltedfapegproof_array_52_t ivar_93;
           ltedfapegproof_array_53_t ivar_97;
           ivar_97 = (ltedfapegproof_array_53_t)ivar_6->scaf;
           ivar_97->count++;
           ivar_93 = (ltedfapegproof_array_52_t)ivar_97->elems[ivar_10];
           ivar_93->count++;
           release_ltedfapegproof_array_53(ivar_97);
           ivar_103 = (ltedfapeg__ent_adt_t)ivar_93->elems[ivar_16];
           ivar_103->count++;
           release_ltedfapegproof_array_52(ivar_93);
           ivar_89 = (uint32_t)ltedfapeg__ent_adt_span((ltedfapeg__ent_adt_t)ivar_103);
           ivar_117 = (uint64_t)(ivar_10 + ivar_89);
           uint32_t ivar_115;
           //copying to uint32 from uint64;
           ivar_115 = (uint32_t)ivar_117;
           ivar_6->count++;
           ivar_71 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildtree((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_59_t)ivar_6, (ltedfapegproof__qstack_adt_t)ivar_113, (uint8_t)ivar_17, (uint32_t)ivar_115);
           ltedfapeg__ent_adt_t ivar_135;
           ltedfapegproof_array_52_t ivar_124;
           ltedfapegproof_array_53_t ivar_128;
           ivar_128 = (ltedfapegproof_array_53_t)ivar_6->scaf;
           ivar_128->count++;
           release_ltedfapegproof_record_59(ivar_6);
           ivar_124 = (ltedfapegproof_array_52_t)ivar_128->elems[ivar_10];
           ivar_124->count++;
           release_ltedfapegproof_array_53(ivar_128);
           ivar_135 = (ltedfapeg__ent_adt_t)ivar_124->elems[ivar_9];
           ivar_135->count++;
           release_ltedfapegproof_array_52(ivar_124);
           result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__two((uint8_t)ivar_9, (ltedfapeg__ent_adt_t)ivar_135, (ltedfapegproof__parsetree_adt_t)ivar_43, (ltedfapegproof__parsetree_adt_t)ivar_71);
} else {
             
           /* E1 */ ltedfapegproof__parsetree_adt_t ivar_138;
           ltedfapegproof__qstack_adt_t ivar_163;
           ivar_8->count++;
           ivar_163 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_9, (uint32_t)ivar_10, (ltedfapegproof__qstack_adt_t)ivar_8);
           ivar_2->count++;
           ivar_3->count++;
           ivar_6->count++;
           ivar_138 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildtree((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_59_t)ivar_6, (ltedfapegproof__qstack_adt_t)ivar_163, (uint8_t)ivar_16, (uint32_t)ivar_10);
           /* E2 */ ltedfapegproof__parsetree_adt_t ivar_166;
           ltedfapegproof__qstack_adt_t ivar_191;
           ivar_191 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_9, (uint32_t)ivar_10, (ltedfapegproof__qstack_adt_t)ivar_8);
           ivar_6->count++;
           ivar_166 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildtree((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_59_t)ivar_6, (ltedfapegproof__qstack_adt_t)ivar_191, (uint8_t)ivar_18, (uint32_t)ivar_10);
           ltedfapeg__ent_adt_t ivar_211;
           ltedfapegproof_array_52_t ivar_200;
           ltedfapegproof_array_53_t ivar_204;
           ivar_204 = (ltedfapegproof_array_53_t)ivar_6->scaf;
           ivar_204->count++;
           release_ltedfapegproof_record_59(ivar_6);
           ivar_200 = (ltedfapegproof_array_52_t)ivar_204->elems[ivar_10];
           ivar_200->count++;
           release_ltedfapegproof_array_53(ivar_204);
           ivar_211 = (ltedfapeg__ent_adt_t)ivar_200->elems[ivar_9];
           ivar_211->count++;
           release_ltedfapegproof_array_52(ivar_200);
           result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__two((uint8_t)ivar_9, (ltedfapeg__ent_adt_t)ivar_211, (ltedfapegproof__parsetree_adt_t)ivar_138, (ltedfapegproof__parsetree_adt_t)ivar_166);
};
} else {
        
             release_ltedfapegproof_array_51(ivar_3);
             release_ltedfapeg__lang_spec(ivar_2);
             release_ltedfapegproof__qstack_adt(ivar_8);
             release_ltedfapeg__prepeg_adt(ivar_11);
             ltedfapeg__ent_adt_t ivar_233;
             ltedfapegproof_array_52_t ivar_222;
             ltedfapegproof_array_53_t ivar_226;
             ivar_226 = (ltedfapegproof_array_53_t)ivar_6->scaf;
             ivar_226->count++;
             release_ltedfapegproof_record_59(ivar_6);
             ivar_222 = (ltedfapegproof_array_52_t)ivar_226->elems[ivar_10];
             ivar_222->count++;
             release_ltedfapegproof_array_53(ivar_226);
             ivar_233 = (ltedfapeg__ent_adt_t)ivar_222->elems[ivar_9];
             ivar_233->count++;
             release_ltedfapegproof_array_52(ivar_222);
             result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__zero((uint8_t)ivar_9, (ltedfapeg__ent_adt_t)ivar_233);
};

        
        return result;
}

ltedfapegproof__parsetree_adt_t ltedfapegproof__buildloop(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_51_t ivar_3, uint32_t ivar_4, uint8_t ivar_5, ltedfapegproof_record_59_t ivar_6, ltedfapegproof_array_53_t ivar_8, ltedfapegproof__qstack_adt_t ivar_10, uint8_t ivar_11, uint32_t ivar_12){
        ltedfapegproof__parsetree_adt_t  result;
        bool_t ivar_13;
        ivar_10->count++;
        ivar_13 = (bool_t)ltedfapegproof__inqstack((uint8_t)ivar_11, (uint32_t)ivar_12, (ltedfapegproof__qstack_adt_t)ivar_10);
        if (ivar_13){ 
             release_ltedfapegproof_record_59(ivar_6);
             release_ltedfapegproof_array_51(ivar_3);
             release_ltedfapeg__lang_spec(ivar_2);
             release_ltedfapegproof__qstack_adt(ivar_10);
             release_ltedfapegproof_array_53(ivar_8);
             ltedfapeg__ent_adt_t ivar_25;
             ivar_25 = (ltedfapeg__ent_adt_t)ltedfapeg__loop();
             if (ivar_25 != NULL) ivar_25->count++;
             result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__zero((uint8_t)ivar_11, (ltedfapeg__ent_adt_t)ivar_25);
} else {
        
             ltedfapeg__prepeg_adt_t ivar_26;
             ivar_26 = (ltedfapeg__prepeg_adt_t)ivar_2->elems[ivar_11];
             ivar_26->count++;
             uint8_t ivar_31;
             ivar_26->count++;
             ivar_31 = (uint8_t)ltedfapeg__prepeg_adt_fst((ltedfapeg__prepeg_adt_t)ivar_26);
             uint8_t ivar_32;
             ivar_26->count++;
             ivar_32 = (uint8_t)ltedfapeg__prepeg_adt_lthen((ltedfapeg__prepeg_adt_t)ivar_26);
             uint8_t ivar_33;
             ivar_33 = (uint8_t)ltedfapeg__prepeg_adt_lelse((ltedfapeg__prepeg_adt_t)ivar_26);
             bool_t ivar_43;
             ltedfapeg__ent_adt_t ivar_57;
             ltedfapegproof_array_52_t ivar_47;
             ltedfapegproof_array_53_t ivar_51;
             ivar_51 = (ltedfapegproof_array_53_t)ivar_6->scaf;
             ivar_51->count++;
             ivar_47 = (ltedfapegproof_array_52_t)ivar_51->elems[ivar_12];
             ivar_47->count++;
             release_ltedfapegproof_array_53(ivar_51);
             ivar_57 = (ltedfapeg__ent_adt_t)ivar_47->elems[ivar_31];
             ivar_57->count++;
             release_ltedfapegproof_array_52(ivar_47);
             ivar_43 = (bool_t)r_ltedfapeg__loopp((ltedfapeg__ent_adt_t)ivar_57);
             if (ivar_43){  
           ltedfapeg__ent_adt_t ivar_109;
           ivar_109 = (ltedfapeg__ent_adt_t)ltedfapeg__loop();
           if (ivar_109 != NULL) ivar_109->count++;
           ltedfapegproof__parsetree_adt_t ivar_110;
           ltedfapegproof_array_53_t ivar_102;
           ltedfapeg__ent_adt_t ivar_72;
           ivar_72 = (ltedfapeg__ent_adt_t)ltedfapeg__loop();
           if (ivar_72 != NULL) ivar_72->count++;
           ltedfapegproof_array_52_t ivar_74;
           ivar_74 = (ltedfapegproof_array_52_t)ivar_8->elems[ivar_12];
           ivar_74->count++;
           ltedfapegproof_array_53_t ivar_81;
           ltedfapegproof_array_52_t ivar_83;
           ivar_83 = NULL;
           ivar_81 = (ltedfapegproof_array_53_t)update_ltedfapegproof_array_53(ivar_8, ivar_12, ivar_83);
           if (ivar_83 != NULL) ivar_83->count--;
           ltedfapegproof_array_52_t ivar_82;
           ltedfapegproof_array_52_t ivar_77;
           ltedfapeg__ent_adt_t ivar_79;
           ivar_79 = NULL;
           ivar_77 = (ltedfapegproof_array_52_t)update_ltedfapegproof_array_52(ivar_74, ivar_11, ivar_79);
           if (ivar_79 != NULL) ivar_79->count--;
           ivar_82 = (ltedfapegproof_array_52_t)update_ltedfapegproof_array_52(ivar_77, ivar_11, ivar_72);
           if (ivar_72 != NULL) ivar_72->count--;
           ivar_102 = (ltedfapegproof_array_53_t)update_ltedfapegproof_array_53(ivar_81, ivar_12, ivar_82);
           if (ivar_82 != NULL) ivar_82->count--;
           ltedfapegproof__qstack_adt_t ivar_104;
           ivar_104 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (ltedfapegproof__qstack_adt_t)ivar_10);
           ivar_110 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildloop((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_59_t)ivar_6, (ltedfapegproof_array_53_t)ivar_102, (ltedfapegproof__qstack_adt_t)ivar_104, (uint8_t)ivar_31, (uint32_t)ivar_12);
           result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__one((uint8_t)ivar_11, (ltedfapeg__ent_adt_t)ivar_109, (ltedfapegproof__parsetree_adt_t)ivar_110);
} else {
             
           bool_t ivar_111;
           ltedfapeg__ent_adt_t ivar_125;
           ltedfapegproof_array_52_t ivar_115;
           ltedfapegproof_array_53_t ivar_119;
           ivar_119 = (ltedfapegproof_array_53_t)ivar_6->scaf;
           ivar_119->count++;
           ivar_115 = (ltedfapegproof_array_52_t)ivar_119->elems[ivar_12];
           ivar_115->count++;
           release_ltedfapegproof_array_53(ivar_119);
           ivar_125 = (ltedfapeg__ent_adt_t)ivar_115->elems[ivar_31];
           ivar_125->count++;
           release_ltedfapegproof_array_52(ivar_115);
           ivar_111 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_125);
           if (ivar_111){   
           ltedfapeg__ent_adt_t ivar_224;
           ivar_224 = (ltedfapeg__ent_adt_t)ltedfapeg__loop();
           if (ivar_224 != NULL) ivar_224->count++;
           ltedfapegproof__parsetree_adt_t ivar_225;
           ltedfapegproof__qstack_adt_t ivar_154;
           ivar_10->count++;
           ivar_154 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (ltedfapegproof__qstack_adt_t)ivar_10);
           ivar_2->count++;
           ivar_3->count++;
           ivar_6->count++;
           ivar_225 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildtree((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_59_t)ivar_6, (ltedfapegproof__qstack_adt_t)ivar_154, (uint8_t)ivar_31, (uint32_t)ivar_12);
           ltedfapegproof__parsetree_adt_t ivar_226;
           ltedfapegproof_array_53_t ivar_215;
           ltedfapeg__ent_adt_t ivar_168;
           ivar_168 = (ltedfapeg__ent_adt_t)ltedfapeg__loop();
           if (ivar_168 != NULL) ivar_168->count++;
           ltedfapegproof_array_52_t ivar_170;
           ivar_170 = (ltedfapegproof_array_52_t)ivar_8->elems[ivar_12];
           ivar_170->count++;
           ltedfapegproof_array_53_t ivar_177;
           ltedfapegproof_array_52_t ivar_179;
           ivar_179 = NULL;
           ivar_177 = (ltedfapegproof_array_53_t)update_ltedfapegproof_array_53(ivar_8, ivar_12, ivar_179);
           if (ivar_179 != NULL) ivar_179->count--;
           ltedfapegproof_array_52_t ivar_178;
           ltedfapegproof_array_52_t ivar_173;
           ltedfapeg__ent_adt_t ivar_175;
           ivar_175 = NULL;
           ivar_173 = (ltedfapegproof_array_52_t)update_ltedfapegproof_array_52(ivar_170, ivar_11, ivar_175);
           if (ivar_175 != NULL) ivar_175->count--;
           ivar_178 = (ltedfapegproof_array_52_t)update_ltedfapegproof_array_52(ivar_173, ivar_11, ivar_168);
           if (ivar_168 != NULL) ivar_168->count--;
           ivar_215 = (ltedfapegproof_array_53_t)update_ltedfapegproof_array_53(ivar_177, ivar_12, ivar_178);
           if (ivar_178 != NULL) ivar_178->count--;
           ltedfapegproof__qstack_adt_t ivar_217;
           ivar_217 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (ltedfapegproof__qstack_adt_t)ivar_10);
           uint64_t ivar_221;
           uint32_t ivar_189;
           ltedfapeg__ent_adt_t ivar_203;
           ltedfapegproof_array_52_t ivar_193;
           ltedfapegproof_array_53_t ivar_197;
           ivar_197 = (ltedfapegproof_array_53_t)ivar_6->scaf;
           ivar_197->count++;
           ivar_193 = (ltedfapegproof_array_52_t)ivar_197->elems[ivar_12];
           ivar_193->count++;
           release_ltedfapegproof_array_53(ivar_197);
           ivar_203 = (ltedfapeg__ent_adt_t)ivar_193->elems[ivar_31];
           ivar_203->count++;
           release_ltedfapegproof_array_52(ivar_193);
           ivar_189 = (uint32_t)ltedfapeg__ent_adt_span((ltedfapeg__ent_adt_t)ivar_203);
           ivar_221 = (uint64_t)(ivar_12 + ivar_189);
           uint32_t ivar_219;
           //copying to uint32 from uint64;
           ivar_219 = (uint32_t)ivar_221;
           ivar_226 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildloop((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_59_t)ivar_6, (ltedfapegproof_array_53_t)ivar_215, (ltedfapegproof__qstack_adt_t)ivar_217, (uint8_t)ivar_32, (uint32_t)ivar_219);
           result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__two((uint8_t)ivar_11, (ltedfapeg__ent_adt_t)ivar_224, (ltedfapegproof__parsetree_adt_t)ivar_225, (ltedfapegproof__parsetree_adt_t)ivar_226);
} else {
           
           ltedfapeg__ent_adt_t ivar_306;
           ivar_306 = (ltedfapeg__ent_adt_t)ltedfapeg__loop();
           if (ivar_306 != NULL) ivar_306->count++;
           ltedfapegproof__parsetree_adt_t ivar_307;
           ltedfapegproof__qstack_adt_t ivar_255;
           ivar_10->count++;
           ivar_255 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (ltedfapegproof__qstack_adt_t)ivar_10);
           ivar_2->count++;
           ivar_3->count++;
           ivar_6->count++;
           ivar_307 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildtree((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_59_t)ivar_6, (ltedfapegproof__qstack_adt_t)ivar_255, (uint8_t)ivar_31, (uint32_t)ivar_12);
           ltedfapegproof__parsetree_adt_t ivar_308;
           ltedfapegproof_array_53_t ivar_299;
           ltedfapeg__ent_adt_t ivar_269;
           ivar_269 = (ltedfapeg__ent_adt_t)ltedfapeg__loop();
           if (ivar_269 != NULL) ivar_269->count++;
           ltedfapegproof_array_52_t ivar_271;
           ivar_271 = (ltedfapegproof_array_52_t)ivar_8->elems[ivar_12];
           ivar_271->count++;
           ltedfapegproof_array_53_t ivar_278;
           ltedfapegproof_array_52_t ivar_280;
           ivar_280 = NULL;
           ivar_278 = (ltedfapegproof_array_53_t)update_ltedfapegproof_array_53(ivar_8, ivar_12, ivar_280);
           if (ivar_280 != NULL) ivar_280->count--;
           ltedfapegproof_array_52_t ivar_279;
           ltedfapegproof_array_52_t ivar_274;
           ltedfapeg__ent_adt_t ivar_276;
           ivar_276 = NULL;
           ivar_274 = (ltedfapegproof_array_52_t)update_ltedfapegproof_array_52(ivar_271, ivar_11, ivar_276);
           if (ivar_276 != NULL) ivar_276->count--;
           ivar_279 = (ltedfapegproof_array_52_t)update_ltedfapegproof_array_52(ivar_274, ivar_11, ivar_269);
           if (ivar_269 != NULL) ivar_269->count--;
           ivar_299 = (ltedfapegproof_array_53_t)update_ltedfapegproof_array_53(ivar_278, ivar_12, ivar_279);
           if (ivar_279 != NULL) ivar_279->count--;
           ltedfapegproof__qstack_adt_t ivar_301;
           ivar_301 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (ltedfapegproof__qstack_adt_t)ivar_10);
           ivar_308 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildloop((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_59_t)ivar_6, (ltedfapegproof_array_53_t)ivar_299, (ltedfapegproof__qstack_adt_t)ivar_301, (uint8_t)ivar_33, (uint32_t)ivar_12);
           result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__two((uint8_t)ivar_11, (ltedfapeg__ent_adt_t)ivar_306, (ltedfapegproof__parsetree_adt_t)ivar_307, (ltedfapegproof__parsetree_adt_t)ivar_308);
};
};
};

        
        return result;
}

ltedfapegproof_funtype_61_t ltedfapegproof__buildproof(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_51_t ivar_3, uint32_t ivar_4, uint8_t ivar_5){
        ltedfapegproof_funtype_61_t  result;
        ltedfapegproof_closure_62_t cl42674;
        cl42674 = new_ltedfapegproof_closure_62();
        cl42674->fvar_1 = (uint8_t)ivar_5;
        cl42674->fvar_2 = (uint32_t)ivar_4;
        cl42674->fvar_3 = (ltedfapegproof_array_51_t)ivar_3;
        if (cl42674->fvar_3 != NULL) cl42674->fvar_3->count++;
        cl42674->fvar_4 = (ltedfapeg__lang_spec_t)ivar_2;
        if (cl42674->fvar_4 != NULL) cl42674->fvar_4->count++;
        cl42674->fvar_5 = (uint32_t)ivar_1;
        release_ltedfapegproof_array_51(ivar_3);
        release_ltedfapeg__lang_spec(ivar_2);
        result = (ltedfapegproof_funtype_61_t)cl42674;

        
        return result;
}

bool_t ltedfapegproof__allgoodentriesp(ltedfapegproof__parsetree_adt_t ivar_1){
        bool_t  result;
        bool_t ivar_14;
        ivar_1->count++;
        ivar_14 = (bool_t)r_ltedfapegproof__zerop((ltedfapegproof__parsetree_adt_t)ivar_1);
        if (ivar_14){ 
             ltedfapeg__ent_adt_t ivar_4;
             ivar_4 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_1);
             result = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_4);
} else {
        
             bool_t ivar_39;
             ivar_1->count++;
             ivar_39 = (bool_t)r_ltedfapegproof__onep((ltedfapegproof__parsetree_adt_t)ivar_1);
             if (ivar_39){  
           ltedfapeg__ent_adt_t ivar_19;
           ivar_1->count++;
           ivar_19 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_1);
           ltedfapegproof__parsetree_adt_t ivar_20;
           ivar_20 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_1);
           bool_t ivar_30;
           ivar_30 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_19);
           if (ivar_30){   
           result = (bool_t)ltedfapegproof__allgoodentriesp((ltedfapegproof__parsetree_adt_t)ivar_20);
} else {
           
           release_ltedfapegproof__parsetree_adt(ivar_20);
           result = (bool_t) false;
};
} else {
             
           ltedfapeg__ent_adt_t ivar_44;
           ivar_1->count++;
           ivar_44 = (ltedfapeg__ent_adt_t)ltedfapegproof__parsetree_adt_entry((ltedfapegproof__parsetree_adt_t)ivar_1);
           ltedfapegproof__parsetree_adt_t ivar_45;
           ivar_1->count++;
           ivar_45 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subone((ltedfapegproof__parsetree_adt_t)ivar_1);
           ltedfapegproof__parsetree_adt_t ivar_46;
           ivar_46 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__parsetree_adt_subtwo((ltedfapegproof__parsetree_adt_t)ivar_1);
           bool_t ivar_59;
           ivar_59 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_44);
           if (ivar_59){   
           bool_t ivar_64;
           ivar_64 = (bool_t)ltedfapegproof__allgoodentriesp((ltedfapegproof__parsetree_adt_t)ivar_45);
           if (ivar_64){    
            result = (bool_t)ltedfapegproof__allgoodentriesp((ltedfapegproof__parsetree_adt_t)ivar_46);
} else {
           
            release_ltedfapegproof__parsetree_adt(ivar_46);
            result = (bool_t) false;
};
} else {
           
           release_ltedfapegproof__parsetree_adt(ivar_46);
           release_ltedfapegproof__parsetree_adt(ivar_45);
           result = (bool_t) false;
};
};
};

        
        return result;
}

ltedfapegproof__parsetree_adt_t ltedfapegproof__buildast(uint32_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegproof_array_51_t ivar_3, uint32_t ivar_4, uint8_t ivar_5, ltedfapegproof_record_59_t ivar_6, ltedfapegproof__qstack_adt_t ivar_8, uint8_t ivar_9, uint32_t ivar_10){
        ltedfapegproof__parsetree_adt_t  result;
        ltedfapeg__prepeg_adt_t ivar_11;
        ivar_11 = (ltedfapeg__prepeg_adt_t)ivar_2->elems[ivar_9];
        ivar_11->count++;
        bool_t ivar_165;
        ivar_11->count++;
        ivar_165 = (bool_t)r_ltedfapeg__ltep((ltedfapeg__prepeg_adt_t)ivar_11);
        if (ivar_165){ 
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
             ltedfapegproof_array_52_t ivar_32;
             ltedfapegproof_array_53_t ivar_36;
             ivar_36 = (ltedfapegproof_array_53_t)ivar_6->scaf;
             ivar_36->count++;
             ivar_32 = (ltedfapegproof_array_52_t)ivar_36->elems[ivar_10];
             ivar_32->count++;
             release_ltedfapegproof_array_53(ivar_36);
             ivar_42 = (ltedfapeg__ent_adt_t)ivar_32->elems[ivar_16];
             ivar_42->count++;
             release_ltedfapegproof_array_52(ivar_32);
             ivar_28 = (bool_t)r_ltedfapeg__goodp((ltedfapeg__ent_adt_t)ivar_42);
             if (ivar_28){  
           /* E1 */ ltedfapegproof__parsetree_adt_t ivar_43;
           ltedfapegproof__qstack_adt_t ivar_68;
           ivar_8->count++;
           ivar_68 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_9, (uint32_t)ivar_10, (ltedfapegproof__qstack_adt_t)ivar_8);
           ivar_2->count++;
           ivar_3->count++;
           ivar_6->count++;
           ivar_43 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildast((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_59_t)ivar_6, (ltedfapegproof__qstack_adt_t)ivar_68, (uint8_t)ivar_16, (uint32_t)ivar_10);
           /* E2 */ ltedfapegproof__parsetree_adt_t ivar_71;
           ltedfapegproof__qstack_adt_t ivar_113;
           ivar_113 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_9, (uint32_t)ivar_10, (ltedfapegproof__qstack_adt_t)ivar_8);
           uint64_t ivar_117;
           uint32_t ivar_89;
           ltedfapeg__ent_adt_t ivar_103;
           ltedfapegproof_array_52_t ivar_93;
           ltedfapegproof_array_53_t ivar_97;
           ivar_97 = (ltedfapegproof_array_53_t)ivar_6->scaf;
           ivar_97->count++;
           ivar_93 = (ltedfapegproof_array_52_t)ivar_97->elems[ivar_10];
           ivar_93->count++;
           release_ltedfapegproof_array_53(ivar_97);
           ivar_103 = (ltedfapeg__ent_adt_t)ivar_93->elems[ivar_16];
           ivar_103->count++;
           release_ltedfapegproof_array_52(ivar_93);
           ivar_89 = (uint32_t)ltedfapeg__ent_adt_span((ltedfapeg__ent_adt_t)ivar_103);
           ivar_117 = (uint64_t)(ivar_10 + ivar_89);
           uint32_t ivar_115;
           //copying to uint32 from uint64;
           ivar_115 = (uint32_t)ivar_117;
           ivar_6->count++;
           ivar_71 = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildast((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_59_t)ivar_6, (ltedfapegproof__qstack_adt_t)ivar_113, (uint8_t)ivar_17, (uint32_t)ivar_115);
           ltedfapeg__ent_adt_t ivar_135;
           ltedfapegproof_array_52_t ivar_124;
           ltedfapegproof_array_53_t ivar_128;
           ivar_128 = (ltedfapegproof_array_53_t)ivar_6->scaf;
           ivar_128->count++;
           release_ltedfapegproof_record_59(ivar_6);
           ivar_124 = (ltedfapegproof_array_52_t)ivar_128->elems[ivar_10];
           ivar_124->count++;
           release_ltedfapegproof_array_53(ivar_128);
           ivar_135 = (ltedfapeg__ent_adt_t)ivar_124->elems[ivar_9];
           ivar_135->count++;
           release_ltedfapegproof_array_52(ivar_124);
           result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__two((uint8_t)ivar_9, (ltedfapeg__ent_adt_t)ivar_135, (ltedfapegproof__parsetree_adt_t)ivar_43, (ltedfapegproof__parsetree_adt_t)ivar_71);
} else {
             
           ltedfapegproof__qstack_adt_t ivar_162;
           ivar_162 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qpush((uint8_t)ivar_9, (uint32_t)ivar_10, (ltedfapegproof__qstack_adt_t)ivar_8);
           result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__buildast((uint32_t)ivar_1, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapegproof_array_51_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5, (ltedfapegproof_record_59_t)ivar_6, (ltedfapegproof__qstack_adt_t)ivar_162, (uint8_t)ivar_18, (uint32_t)ivar_10);
};
} else {
        
             release_ltedfapegproof_array_51(ivar_3);
             release_ltedfapeg__lang_spec(ivar_2);
             release_ltedfapegproof__qstack_adt(ivar_8);
             release_ltedfapeg__prepeg_adt(ivar_11);
             ltedfapeg__ent_adt_t ivar_184;
             ltedfapegproof_array_52_t ivar_173;
             ltedfapegproof_array_53_t ivar_177;
             ivar_177 = (ltedfapegproof_array_53_t)ivar_6->scaf;
             ivar_177->count++;
             release_ltedfapegproof_record_59(ivar_6);
             ivar_173 = (ltedfapegproof_array_52_t)ivar_177->elems[ivar_10];
             ivar_173->count++;
             release_ltedfapegproof_array_53(ivar_177);
             ivar_184 = (ltedfapeg__ent_adt_t)ivar_173->elems[ivar_9];
             ivar_184->count++;
             release_ltedfapegproof_array_52(ivar_173);
             result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__zero((uint8_t)ivar_9, (ltedfapeg__ent_adt_t)ivar_184);
};

        
        return result;
}