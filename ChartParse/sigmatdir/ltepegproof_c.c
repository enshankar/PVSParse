//Code generated using pvs2ir2c
#include "ltepegproof_c.h"


ltepegproof__parsetree_adt_t new_ltepegproof__parsetree_adt(void){
        ltepegproof__parsetree_adt_t tmp = (ltepegproof__parsetree_adt_t) safe_malloc(sizeof(struct ltepegproof__parsetree_adt_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof__parsetree_adt(ltepegproof__parsetree_adt_t x){
switch (x->ltepegproof__parsetree_adt_index) {
case 0:  release_ltepegproof__zero((ltepegproof__zero_t) x); break;
case 1:  release_ltepegproof__one((ltepegproof__one_t) x); break;
case 2:  release_ltepegproof__two((ltepegproof__two_t) x); break;
}}

void release_ltepegproof__parsetree_adt_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof__parsetree_adt((ltepegproof__parsetree_adt_t)x);
}

ltepegproof__parsetree_adt_t copy_ltepegproof__parsetree_adt(ltepegproof__parsetree_adt_t x){
        ltepegproof__parsetree_adt_t y = new_ltepegproof__parsetree_adt();
        y->ltepegproof__parsetree_adt_index = (uint8_t)x->ltepegproof__parsetree_adt_index;
        y->count = 1;
        return y;}

bool_t equal_ltepegproof__parsetree_adt(ltepegproof__parsetree_adt_t x, ltepegproof__parsetree_adt_t y){
        bool_t tmp = x->ltepegproof__parsetree_adt_index == y->ltepegproof__parsetree_adt_index;
        switch  (x->ltepegproof__parsetree_adt_index) {
                case 0: tmp = tmp && equal_ltepegproof__zero((ltepegproof__zero_t) x, (ltepegproof__zero_t) y); break;
                case 1: tmp = tmp && equal_ltepegproof__one((ltepegproof__one_t) x, (ltepegproof__one_t) y); break;
                case 2: tmp = tmp && equal_ltepegproof__two((ltepegproof__two_t) x, (ltepegproof__two_t) y); break;
        }
        return tmp;
}

char * json_ltepegproof__parsetree_adt(ltepegproof__parsetree_adt_t x){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ constructor = %u", x->ltepegproof__parsetree_adt_index);
        switch  (x->ltepegproof__parsetree_adt_index) {
                case 0: tmp = safe_strcat(tmp, json_ltepegproof__zero((ltepegproof__zero_t) x)); break;
                case 1: tmp = safe_strcat(tmp, json_ltepegproof__one((ltepegproof__one_t) x)); break;
                case 2: tmp = safe_strcat(tmp, json_ltepegproof__two((ltepegproof__two_t) x)); break;
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_ltepegproof__parsetree_adt_ptr(pointer_t x, pointer_t y, actual_ltepegproof__parsetree_adt_t T){
        return equal_ltepegproof__parsetree_adt((ltepegproof__parsetree_adt_t)x, (ltepegproof__parsetree_adt_t)y);
}

char * json_ltepegproof__parsetree_adt_ptr(pointer_t x, actual_ltepegproof__parsetree_adt_t T){
        return json_ltepegproof__parsetree_adt((ltepegproof__parsetree_adt_t)x);
}

actual_ltepegproof__parsetree_adt_t actual_ltepegproof__parsetree_adt(){
        actual_ltepegproof__parsetree_adt_t new = (actual_ltepegproof__parsetree_adt_t)safe_malloc(sizeof(struct actual_ltepegproof__parsetree_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof__parsetree_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof__parsetree_adt_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof__parsetree_adt_ptr);
 

 
        return new;
 };

ltepegproof__parsetree_adt_t update_ltepegproof__parsetree_adt_ltepegproof__parsetree_adt_index(ltepegproof__parsetree_adt_t x, uint8_t v){
        ltepegproof__parsetree_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof__parsetree_adt(x); x->count--;};
        y->ltepegproof__parsetree_adt_index = (uint8_t)v;
        return y;}




ltepegproof__zero_t new_ltepegproof__zero(void){
        ltepegproof__zero_t tmp = (ltepegproof__zero_t) safe_malloc(sizeof(struct ltepegproof__zero_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof__zero(ltepegproof__zero_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__ent_adt(x->entry);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof__zero_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof__zero((ltepegproof__zero_t)x);
}

ltepegproof__zero_t copy_ltepegproof__zero(ltepegproof__zero_t x){
        ltepegproof__zero_t y = new_ltepegproof__zero();
        y->ltepegproof__parsetree_adt_index = (uint8_t)x->ltepegproof__parsetree_adt_index;
        y->entry = x->entry;
        if (y->entry != NULL){y->entry->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepegproof__zero(ltepegproof__zero_t x, ltepegproof__zero_t y){
        bool_t tmp = true;
        tmp = tmp && x->ltepegproof__parsetree_adt_index == y->ltepegproof__parsetree_adt_index;
        tmp = tmp && equal_ltepeg__ent_adt(x->entry, y->entry);
        return tmp;}

char * json_ltepegproof__zero(ltepegproof__zero_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(44);
         sprintf(fld0, "\"ltepegproof__parsetree_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ltepegproof__parsetree_adt_index));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"entry\" : ");
        tmp[1] = safe_strcat(fld1, json_ltepeg__ent_adt(x->entry));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof__zero_ptr(pointer_t x, pointer_t y, actual_ltepegproof__zero_t T){
        return equal_ltepegproof__zero((ltepegproof__zero_t)x, (ltepegproof__zero_t)y);
}

char * json_ltepegproof__zero_ptr(pointer_t x, actual_ltepegproof__zero_t T){
        return json_ltepegproof__zero((ltepegproof__zero_t)x);
}

actual_ltepegproof__zero_t actual_ltepegproof__zero(){
        actual_ltepegproof__zero_t new = (actual_ltepegproof__zero_t)safe_malloc(sizeof(struct actual_ltepegproof__zero_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof__zero_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof__zero_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof__zero_ptr);
 

 
        return new;
 };

ltepegproof__zero_t update_ltepegproof__zero_ltepegproof__parsetree_adt_index(ltepegproof__zero_t x, uint8_t v){
        ltepegproof__zero_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof__zero(x); x->count--;};
        y->ltepegproof__parsetree_adt_index = (uint8_t)v;
        return y;}

ltepegproof__zero_t update_ltepegproof__zero_entry(ltepegproof__zero_t x, ltepeg__ent_adt_t v){
        ltepegproof__zero_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->entry != NULL){release_ltepeg__ent_adt(x->entry);};}
        else {y = copy_ltepegproof__zero(x); x->count--; y->entry->count--;};
        y->entry = (ltepeg__ent_adt_t)v;
        return y;}




ltepegproof__one_t new_ltepegproof__one(void){
        ltepegproof__one_t tmp = (ltepegproof__one_t) safe_malloc(sizeof(struct ltepegproof__one_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof__one(ltepegproof__one_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__ent_adt(x->entry);
         release_ltepegproof__parsetree_adt(x->subone);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof__one_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof__one((ltepegproof__one_t)x);
}

ltepegproof__one_t copy_ltepegproof__one(ltepegproof__one_t x){
        ltepegproof__one_t y = new_ltepegproof__one();
        y->ltepegproof__parsetree_adt_index = (uint8_t)x->ltepegproof__parsetree_adt_index;
        y->entry = x->entry;
        if (y->entry != NULL){y->entry->count++;};
        y->subone = x->subone;
        if (y->subone != NULL){y->subone->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepegproof__one(ltepegproof__one_t x, ltepegproof__one_t y){
        bool_t tmp = true;
        tmp = tmp && x->ltepegproof__parsetree_adt_index == y->ltepegproof__parsetree_adt_index;
        tmp = tmp && equal_ltepeg__ent_adt(x->entry, y->entry);
        tmp = tmp && equal_ltepegproof__parsetree_adt(x->subone, y->subone);
        return tmp;}

char * json_ltepegproof__one(ltepegproof__one_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(44);
         sprintf(fld0, "\"ltepegproof__parsetree_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ltepegproof__parsetree_adt_index));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"entry\" : ");
        tmp[1] = safe_strcat(fld1, json_ltepeg__ent_adt(x->entry));
        char * fld2 = safe_malloc(18);
         sprintf(fld2, "\"subone\" : ");
        tmp[2] = safe_strcat(fld2, json_ltepegproof__parsetree_adt(x->subone));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof__one_ptr(pointer_t x, pointer_t y, actual_ltepegproof__one_t T){
        return equal_ltepegproof__one((ltepegproof__one_t)x, (ltepegproof__one_t)y);
}

char * json_ltepegproof__one_ptr(pointer_t x, actual_ltepegproof__one_t T){
        return json_ltepegproof__one((ltepegproof__one_t)x);
}

actual_ltepegproof__one_t actual_ltepegproof__one(){
        actual_ltepegproof__one_t new = (actual_ltepegproof__one_t)safe_malloc(sizeof(struct actual_ltepegproof__one_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof__one_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof__one_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof__one_ptr);
 

 
        return new;
 };

ltepegproof__one_t update_ltepegproof__one_ltepegproof__parsetree_adt_index(ltepegproof__one_t x, uint8_t v){
        ltepegproof__one_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof__one(x); x->count--;};
        y->ltepegproof__parsetree_adt_index = (uint8_t)v;
        return y;}

ltepegproof__one_t update_ltepegproof__one_entry(ltepegproof__one_t x, ltepeg__ent_adt_t v){
        ltepegproof__one_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->entry != NULL){release_ltepeg__ent_adt(x->entry);};}
        else {y = copy_ltepegproof__one(x); x->count--; y->entry->count--;};
        y->entry = (ltepeg__ent_adt_t)v;
        return y;}

ltepegproof__one_t update_ltepegproof__one_subone(ltepegproof__one_t x, ltepegproof__parsetree_adt_t v){
        ltepegproof__one_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->subone != NULL){release_ltepegproof__parsetree_adt(x->subone);};}
        else {y = copy_ltepegproof__one(x); x->count--; y->subone->count--;};
        y->subone = (ltepegproof__parsetree_adt_t)v;
        return y;}




ltepegproof__two_t new_ltepegproof__two(void){
        ltepegproof__two_t tmp = (ltepegproof__two_t) safe_malloc(sizeof(struct ltepegproof__two_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof__two(ltepegproof__two_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__ent_adt(x->entry);
         release_ltepegproof__parsetree_adt(x->subone);
         release_ltepegproof__parsetree_adt(x->subtwo);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof__two_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof__two((ltepegproof__two_t)x);
}

ltepegproof__two_t copy_ltepegproof__two(ltepegproof__two_t x){
        ltepegproof__two_t y = new_ltepegproof__two();
        y->ltepegproof__parsetree_adt_index = (uint8_t)x->ltepegproof__parsetree_adt_index;
        y->entry = x->entry;
        if (y->entry != NULL){y->entry->count++;};
        y->subone = x->subone;
        if (y->subone != NULL){y->subone->count++;};
        y->subtwo = x->subtwo;
        if (y->subtwo != NULL){y->subtwo->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepegproof__two(ltepegproof__two_t x, ltepegproof__two_t y){
        bool_t tmp = true;
        tmp = tmp && x->ltepegproof__parsetree_adt_index == y->ltepegproof__parsetree_adt_index;
        tmp = tmp && equal_ltepeg__ent_adt(x->entry, y->entry);
        tmp = tmp && equal_ltepegproof__parsetree_adt(x->subone, y->subone);
        tmp = tmp && equal_ltepegproof__parsetree_adt(x->subtwo, y->subtwo);
        return tmp;}

char * json_ltepegproof__two(ltepegproof__two_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(44);
         sprintf(fld0, "\"ltepegproof__parsetree_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ltepegproof__parsetree_adt_index));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"entry\" : ");
        tmp[1] = safe_strcat(fld1, json_ltepeg__ent_adt(x->entry));
        char * fld2 = safe_malloc(18);
         sprintf(fld2, "\"subone\" : ");
        tmp[2] = safe_strcat(fld2, json_ltepegproof__parsetree_adt(x->subone));
        char * fld3 = safe_malloc(18);
         sprintf(fld3, "\"subtwo\" : ");
        tmp[3] = safe_strcat(fld3, json_ltepegproof__parsetree_adt(x->subtwo));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof__two_ptr(pointer_t x, pointer_t y, actual_ltepegproof__two_t T){
        return equal_ltepegproof__two((ltepegproof__two_t)x, (ltepegproof__two_t)y);
}

char * json_ltepegproof__two_ptr(pointer_t x, actual_ltepegproof__two_t T){
        return json_ltepegproof__two((ltepegproof__two_t)x);
}

actual_ltepegproof__two_t actual_ltepegproof__two(){
        actual_ltepegproof__two_t new = (actual_ltepegproof__two_t)safe_malloc(sizeof(struct actual_ltepegproof__two_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof__two_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof__two_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof__two_ptr);
 

 
        return new;
 };

ltepegproof__two_t update_ltepegproof__two_ltepegproof__parsetree_adt_index(ltepegproof__two_t x, uint8_t v){
        ltepegproof__two_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof__two(x); x->count--;};
        y->ltepegproof__parsetree_adt_index = (uint8_t)v;
        return y;}

ltepegproof__two_t update_ltepegproof__two_entry(ltepegproof__two_t x, ltepeg__ent_adt_t v){
        ltepegproof__two_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->entry != NULL){release_ltepeg__ent_adt(x->entry);};}
        else {y = copy_ltepegproof__two(x); x->count--; y->entry->count--;};
        y->entry = (ltepeg__ent_adt_t)v;
        return y;}

ltepegproof__two_t update_ltepegproof__two_subone(ltepegproof__two_t x, ltepegproof__parsetree_adt_t v){
        ltepegproof__two_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->subone != NULL){release_ltepegproof__parsetree_adt(x->subone);};}
        else {y = copy_ltepegproof__two(x); x->count--; y->subone->count--;};
        y->subone = (ltepegproof__parsetree_adt_t)v;
        return y;}

ltepegproof__two_t update_ltepegproof__two_subtwo(ltepegproof__two_t x, ltepegproof__parsetree_adt_t v){
        ltepegproof__two_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->subtwo != NULL){release_ltepegproof__parsetree_adt(x->subtwo);};}
        else {y = copy_ltepegproof__two(x); x->count--; y->subtwo->count--;};
        y->subtwo = (ltepegproof__parsetree_adt_t)v;
        return y;}



void release_ltepegproof_funtype_4(ltepegproof_funtype_4_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_4_t copy_ltepegproof_funtype_4(ltepegproof_funtype_4_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_4(ltepegproof_funtype_4_t x, ltepegproof_funtype_4_t y){
        return false;}

char* json_ltepegproof_funtype_4(ltepegproof_funtype_4_t x){char * result = safe_malloc(31); sprintf(result, "%s", "\"ltepegproof_funtype_4\""); return result;}

void release_ltepegproof_funtype_5(ltepegproof_funtype_5_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_5_t copy_ltepegproof_funtype_5(ltepegproof_funtype_5_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_5(ltepegproof_funtype_5_t x, ltepegproof_funtype_5_t y){
        return false;}

char* json_ltepegproof_funtype_5(ltepegproof_funtype_5_t x){char * result = safe_malloc(31); sprintf(result, "%s", "\"ltepegproof_funtype_5\""); return result;}

void release_ltepegproof_funtype_6(ltepegproof_funtype_6_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_6_t copy_ltepegproof_funtype_6(ltepegproof_funtype_6_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_6(ltepegproof_funtype_6_t x, ltepegproof_funtype_6_t y){
        return false;}

char* json_ltepegproof_funtype_6(ltepegproof_funtype_6_t x){char * result = safe_malloc(31); sprintf(result, "%s", "\"ltepegproof_funtype_6\""); return result;}


ltepegproof_record_7_t new_ltepegproof_record_7(void){
        ltepegproof_record_7_t tmp = (ltepegproof_record_7_t) safe_malloc(sizeof(struct ltepegproof_record_7_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_7(ltepegproof_record_7_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__ent_adt(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_7_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_7((ltepegproof_record_7_t)x);
}

ltepegproof_record_7_t copy_ltepegproof_record_7(ltepegproof_record_7_t x){
        ltepegproof_record_7_t y = new_ltepegproof_record_7();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        mpz_set(y->project_2, x->project_2);
        y->count = 1;
        return y;}

bool_t equal_ltepegproof_record_7(ltepegproof_record_7_t x, ltepegproof_record_7_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepeg__ent_adt(x->project_1, y->project_1);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);
        return tmp;}

char * json_ltepegproof_record_7(ltepegproof_record_7_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof_record_7_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_7_t T){
        return equal_ltepegproof_record_7((ltepegproof_record_7_t)x, (ltepegproof_record_7_t)y);
}

char * json_ltepegproof_record_7_ptr(pointer_t x, actual_ltepegproof_record_7_t T){
        return json_ltepegproof_record_7((ltepegproof_record_7_t)x);
}

actual_ltepegproof_record_7_t actual_ltepegproof_record_7(){
        actual_ltepegproof_record_7_t new = (actual_ltepegproof_record_7_t)safe_malloc(sizeof(struct actual_ltepegproof_record_7_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_7_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_7_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_7_ptr);
 

 
        return new;
 };

ltepegproof_record_7_t update_ltepegproof_record_7_project_1(ltepegproof_record_7_t x, ltepeg__ent_adt_t v){
        ltepegproof_record_7_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepeg__ent_adt(x->project_1);};}
        else {y = copy_ltepegproof_record_7(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepeg__ent_adt_t)v;
        return y;}

ltepegproof_record_7_t update_ltepegproof_record_7_project_2(ltepegproof_record_7_t x, mpz_ptr_t v){
        ltepegproof_record_7_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_7(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}



void release_ltepegproof_funtype_8(ltepegproof_funtype_8_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_8_t copy_ltepegproof_funtype_8(ltepegproof_funtype_8_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_8(ltepegproof_funtype_8_t x, ltepegproof_funtype_8_t y){
        return false;}

char* json_ltepegproof_funtype_8(ltepegproof_funtype_8_t x){char * result = safe_malloc(31); sprintf(result, "%s", "\"ltepegproof_funtype_8\""); return result;}


ltepegproof_record_9_t new_ltepegproof_record_9(void){
        ltepegproof_record_9_t tmp = (ltepegproof_record_9_t) safe_malloc(sizeof(struct ltepegproof_record_9_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_9(ltepegproof_record_9_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__ent_adt(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_9_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_9((ltepegproof_record_9_t)x);
}

ltepegproof_record_9_t copy_ltepegproof_record_9(ltepegproof_record_9_t x){
        ltepegproof_record_9_t y = new_ltepegproof_record_9();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        mpz_set(y->project_2, x->project_2);
        mpz_set(y->project_3, x->project_3);
        y->count = 1;
        return y;}

bool_t equal_ltepegproof_record_9(ltepegproof_record_9_t x, ltepegproof_record_9_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepeg__ent_adt(x->project_1, y->project_1);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        return tmp;}

char * json_ltepegproof_record_9(ltepegproof_record_9_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_mpz(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof_record_9_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_9_t T){
        return equal_ltepegproof_record_9((ltepegproof_record_9_t)x, (ltepegproof_record_9_t)y);
}

char * json_ltepegproof_record_9_ptr(pointer_t x, actual_ltepegproof_record_9_t T){
        return json_ltepegproof_record_9((ltepegproof_record_9_t)x);
}

actual_ltepegproof_record_9_t actual_ltepegproof_record_9(){
        actual_ltepegproof_record_9_t new = (actual_ltepegproof_record_9_t)safe_malloc(sizeof(struct actual_ltepegproof_record_9_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_9_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_9_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_9_ptr);
 

 
        return new;
 };

ltepegproof_record_9_t update_ltepegproof_record_9_project_1(ltepegproof_record_9_t x, ltepeg__ent_adt_t v){
        ltepegproof_record_9_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepeg__ent_adt(x->project_1);};}
        else {y = copy_ltepegproof_record_9(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepeg__ent_adt_t)v;
        return y;}

ltepegproof_record_9_t update_ltepegproof_record_9_project_2(ltepegproof_record_9_t x, mpz_ptr_t v){
        ltepegproof_record_9_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_9(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}

ltepegproof_record_9_t update_ltepegproof_record_9_project_3(ltepegproof_record_9_t x, mpz_ptr_t v){
        ltepegproof_record_9_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_9(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}



void release_ltepegproof_funtype_10(ltepegproof_funtype_10_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_10_t copy_ltepegproof_funtype_10(ltepegproof_funtype_10_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_10(ltepegproof_funtype_10_t x, ltepegproof_funtype_10_t y){
        return false;}

char* json_ltepegproof_funtype_10(ltepegproof_funtype_10_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_10\""); return result;}


mpz_ptr_t f_ltepegproof_closure_11(struct ltepegproof_closure_11_s * closure, ltepegproof__parsetree_adt_t bvar){
        mpz_ptr_t result = h_ltepegproof_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

mpz_ptr_t m_ltepegproof_closure_11(struct ltepegproof_closure_11_s * closure, ltepegproof__parsetree_adt_t bvar){
        return h_ltepegproof_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern mpz_ptr_t h_ltepegproof_closure_11(ltepegproof__parsetree_adt_t ivar_8, ltepegproof_funtype_8_t ivar_3, ltepegproof_funtype_10_t ivar_5, ltepegproof_funtype_6_t ivar_1){
        mpz_ptr_t result;
        /* red */ ltepegproof_funtype_5_t ivar_9;
        ivar_1->count++;
        ivar_3->count++;
        ivar_5->count++;
        ivar_9 = (ltepegproof_funtype_5_t)ltepegproof__reduce_nat__1((ltepegproof_funtype_6_t)ivar_1, (ltepegproof_funtype_8_t)ivar_3, (ltepegproof_funtype_10_t)ivar_5);
        bool_t ivar_34;
        ivar_8->count++;
        ivar_34 = (bool_t)r_ltepegproof__zerop((ltepegproof__parsetree_adt_t)ivar_8);
        if (ivar_34){ 
             release_ltepegproof_funtype_5(ivar_9);
             ltepeg__ent_adt_t ivar_25;
             ivar_25 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_8);
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_25));
} else {
        
             bool_t ivar_58;
             ivar_8->count++;
             ivar_58 = (bool_t)r_ltepegproof__onep((ltepegproof__parsetree_adt_t)ivar_8);
             if (ivar_58){  
           ltepeg__ent_adt_t ivar_38;
           ivar_8->count++;
           ivar_38 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_8);
           ltepegproof__parsetree_adt_t ivar_39;
           ivar_39 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subone((ltepegproof__parsetree_adt_t)ivar_8);
           mpz_ptr_t ivar_57;
           mpz_mk_set(ivar_57, ivar_9->ftbl->fptr(ivar_9, ivar_39));
           ivar_9->ftbl->rptr(ivar_9);
           mpz_mk_set(result, ivar_3->ftbl->mptr(ivar_3, ivar_38, ivar_57));
} else {
             
           ltepeg__ent_adt_t ivar_62;
           ivar_8->count++;
           ivar_62 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_8);
           ltepegproof__parsetree_adt_t ivar_63;
           ivar_8->count++;
           ivar_63 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subone((ltepegproof__parsetree_adt_t)ivar_8);
           ltepegproof__parsetree_adt_t ivar_64;
           ivar_64 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subtwo((ltepegproof__parsetree_adt_t)ivar_8);
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

ltepegproof_closure_11_t new_ltepegproof_closure_11(void){
        static struct ltepegproof_funtype_5_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ltepegproof_funtype_5_t, ltepegproof__parsetree_adt_t))&f_ltepegproof_closure_11, .mptr = (mpz_ptr_t (*)(ltepegproof_funtype_5_t, ltepegproof__parsetree_adt_t))&m_ltepegproof_closure_11, .rptr =  (void (*)(ltepegproof_funtype_5_t))&release_ltepegproof_closure_11, .cptr = (ltepegproof_funtype_5_t (*)(ltepegproof_funtype_5_t))&copy_ltepegproof_closure_11};
        ltepegproof_closure_11_t tmp = (ltepegproof_closure_11_t) safe_malloc(sizeof(struct ltepegproof_closure_11_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegproof_closure_11(ltepegproof_funtype_5_t closure){
        ltepegproof_closure_11_t x = (ltepegproof_closure_11_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepegproof_funtype_8(x->fvar_1);
         release_ltepegproof_funtype_10(x->fvar_2);
         release_ltepegproof_funtype_6(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegproof_closure_11_t copy_ltepegproof_closure_11(ltepegproof_closure_11_t x){
        ltepegproof_closure_11_t y = new_ltepegproof_closure_11();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltepegproof_funtype_5_htbl_t new_htbl = (ltepegproof_funtype_5_htbl_t) safe_malloc(sizeof(struct ltepegproof_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegproof_funtype_5_hashentry_t * new_data = (ltepegproof_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegproof_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegproof_funtype_5_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepegproof_record_12_t new_ltepegproof_record_12(void){
        ltepegproof_record_12_t tmp = (ltepegproof_record_12_t) safe_malloc(sizeof(struct ltepegproof_record_12_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_12(ltepegproof_record_12_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__ent_adt(x->project_1);
         release_ltepegproof__parsetree_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_12_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_12((ltepegproof_record_12_t)x);
}

ltepegproof_record_12_t copy_ltepegproof_record_12(ltepegproof_record_12_t x){
        ltepegproof_record_12_t y = new_ltepegproof_record_12();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepegproof_record_12(ltepegproof_record_12_t x, ltepegproof_record_12_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepeg__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_ltepegproof__parsetree_adt(x->project_2, y->project_2);
        return tmp;}

char * json_ltepegproof_record_12(ltepegproof_record_12_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltepegproof__parsetree_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof_record_12_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_12_t T){
        return equal_ltepegproof_record_12((ltepegproof_record_12_t)x, (ltepegproof_record_12_t)y);
}

char * json_ltepegproof_record_12_ptr(pointer_t x, actual_ltepegproof_record_12_t T){
        return json_ltepegproof_record_12((ltepegproof_record_12_t)x);
}

actual_ltepegproof_record_12_t actual_ltepegproof_record_12(){
        actual_ltepegproof_record_12_t new = (actual_ltepegproof_record_12_t)safe_malloc(sizeof(struct actual_ltepegproof_record_12_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_12_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_12_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_12_ptr);
 

 
        return new;
 };

ltepegproof_record_12_t update_ltepegproof_record_12_project_1(ltepegproof_record_12_t x, ltepeg__ent_adt_t v){
        ltepegproof_record_12_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepeg__ent_adt(x->project_1);};}
        else {y = copy_ltepegproof_record_12(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepeg__ent_adt_t)v;
        return y;}

ltepegproof_record_12_t update_ltepegproof_record_12_project_2(ltepegproof_record_12_t x, ltepegproof__parsetree_adt_t v){
        ltepegproof_record_12_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltepegproof__parsetree_adt(x->project_2);};}
        else {y = copy_ltepegproof_record_12(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltepegproof__parsetree_adt_t)v;
        return y;}



void release_ltepegproof_funtype_13(ltepegproof_funtype_13_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_13_t copy_ltepegproof_funtype_13(ltepegproof_funtype_13_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_13(ltepegproof_funtype_13_t x, ltepegproof_funtype_13_t y){
        return false;}

char* json_ltepegproof_funtype_13(ltepegproof_funtype_13_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_13\""); return result;}


ltepegproof_record_14_t new_ltepegproof_record_14(void){
        ltepegproof_record_14_t tmp = (ltepegproof_record_14_t) safe_malloc(sizeof(struct ltepegproof_record_14_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_14(ltepegproof_record_14_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__ent_adt(x->project_1);
         release_ltepegproof__parsetree_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_14_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_14((ltepegproof_record_14_t)x);
}

ltepegproof_record_14_t copy_ltepegproof_record_14(ltepegproof_record_14_t x){
        ltepegproof_record_14_t y = new_ltepegproof_record_14();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        mpz_set(y->project_2, x->project_2);
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepegproof_record_14(ltepegproof_record_14_t x, ltepegproof_record_14_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepeg__ent_adt(x->project_1, y->project_1);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);
        tmp = tmp && equal_ltepegproof__parsetree_adt(x->project_3, y->project_3);
        return tmp;}

char * json_ltepegproof_record_14(ltepegproof_record_14_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ltepegproof__parsetree_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof_record_14_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_14_t T){
        return equal_ltepegproof_record_14((ltepegproof_record_14_t)x, (ltepegproof_record_14_t)y);
}

char * json_ltepegproof_record_14_ptr(pointer_t x, actual_ltepegproof_record_14_t T){
        return json_ltepegproof_record_14((ltepegproof_record_14_t)x);
}

actual_ltepegproof_record_14_t actual_ltepegproof_record_14(){
        actual_ltepegproof_record_14_t new = (actual_ltepegproof_record_14_t)safe_malloc(sizeof(struct actual_ltepegproof_record_14_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_14_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_14_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_14_ptr);
 

 
        return new;
 };

ltepegproof_record_14_t update_ltepegproof_record_14_project_1(ltepegproof_record_14_t x, ltepeg__ent_adt_t v){
        ltepegproof_record_14_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepeg__ent_adt(x->project_1);};}
        else {y = copy_ltepegproof_record_14(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepeg__ent_adt_t)v;
        return y;}

ltepegproof_record_14_t update_ltepegproof_record_14_project_2(ltepegproof_record_14_t x, mpz_ptr_t v){
        ltepegproof_record_14_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_14(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}

ltepegproof_record_14_t update_ltepegproof_record_14_project_3(ltepegproof_record_14_t x, ltepegproof__parsetree_adt_t v){
        ltepegproof_record_14_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ltepegproof__parsetree_adt(x->project_3);};}
        else {y = copy_ltepegproof_record_14(x); x->count--; y->project_3->count--;};
        y->project_3 = (ltepegproof__parsetree_adt_t)v;
        return y;}



void release_ltepegproof_funtype_15(ltepegproof_funtype_15_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_15_t copy_ltepegproof_funtype_15(ltepegproof_funtype_15_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_15(ltepegproof_funtype_15_t x, ltepegproof_funtype_15_t y){
        return false;}

char* json_ltepegproof_funtype_15(ltepegproof_funtype_15_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_15\""); return result;}


ltepegproof_record_16_t new_ltepegproof_record_16(void){
        ltepegproof_record_16_t tmp = (ltepegproof_record_16_t) safe_malloc(sizeof(struct ltepegproof_record_16_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_16(ltepegproof_record_16_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__ent_adt(x->project_1);
         release_ltepegproof__parsetree_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_16_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_16((ltepegproof_record_16_t)x);
}

ltepegproof_record_16_t copy_ltepegproof_record_16(ltepegproof_record_16_t x){
        ltepegproof_record_16_t y = new_ltepegproof_record_16();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        mpz_set(y->project_2, x->project_2);
        mpz_set(y->project_3, x->project_3);
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepegproof_record_16(ltepegproof_record_16_t x, ltepegproof_record_16_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepeg__ent_adt(x->project_1, y->project_1);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        tmp = tmp && equal_ltepegproof__parsetree_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltepegproof_record_16(ltepegproof_record_16_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_mpz(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_ltepegproof__parsetree_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof_record_16_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_16_t T){
        return equal_ltepegproof_record_16((ltepegproof_record_16_t)x, (ltepegproof_record_16_t)y);
}

char * json_ltepegproof_record_16_ptr(pointer_t x, actual_ltepegproof_record_16_t T){
        return json_ltepegproof_record_16((ltepegproof_record_16_t)x);
}

actual_ltepegproof_record_16_t actual_ltepegproof_record_16(){
        actual_ltepegproof_record_16_t new = (actual_ltepegproof_record_16_t)safe_malloc(sizeof(struct actual_ltepegproof_record_16_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_16_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_16_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_16_ptr);
 

 
        return new;
 };

ltepegproof_record_16_t update_ltepegproof_record_16_project_1(ltepegproof_record_16_t x, ltepeg__ent_adt_t v){
        ltepegproof_record_16_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepeg__ent_adt(x->project_1);};}
        else {y = copy_ltepegproof_record_16(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepeg__ent_adt_t)v;
        return y;}

ltepegproof_record_16_t update_ltepegproof_record_16_project_2(ltepegproof_record_16_t x, mpz_ptr_t v){
        ltepegproof_record_16_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_16(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}

ltepegproof_record_16_t update_ltepegproof_record_16_project_3(ltepegproof_record_16_t x, mpz_ptr_t v){
        ltepegproof_record_16_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_16(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}

ltepegproof_record_16_t update_ltepegproof_record_16_project_4(ltepegproof_record_16_t x, ltepegproof__parsetree_adt_t v){
        ltepegproof_record_16_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ltepegproof__parsetree_adt(x->project_4);};}
        else {y = copy_ltepegproof_record_16(x); x->count--; y->project_4->count--;};
        y->project_4 = (ltepegproof__parsetree_adt_t)v;
        return y;}



void release_ltepegproof_funtype_17(ltepegproof_funtype_17_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_17_t copy_ltepegproof_funtype_17(ltepegproof_funtype_17_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_17(ltepegproof_funtype_17_t x, ltepegproof_funtype_17_t y){
        return false;}

char* json_ltepegproof_funtype_17(ltepegproof_funtype_17_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_17\""); return result;}


mpz_ptr_t f_ltepegproof_closure_18(struct ltepegproof_closure_18_s * closure, ltepegproof__parsetree_adt_t bvar){
        mpz_ptr_t result = h_ltepegproof_closure_18(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

mpz_ptr_t m_ltepegproof_closure_18(struct ltepegproof_closure_18_s * closure, ltepegproof__parsetree_adt_t bvar){
        return h_ltepegproof_closure_18(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern mpz_ptr_t h_ltepegproof_closure_18(ltepegproof__parsetree_adt_t ivar_8, ltepegproof_funtype_15_t ivar_3, ltepegproof_funtype_17_t ivar_5, ltepegproof_funtype_13_t ivar_1){
        mpz_ptr_t result;
        /* red */ ltepegproof_funtype_5_t ivar_9;
        ivar_1->count++;
        ivar_3->count++;
        ivar_5->count++;
        ivar_9 = (ltepegproof_funtype_5_t)ltepegproof__REDUCE_nat__1((ltepegproof_funtype_13_t)ivar_1, (ltepegproof_funtype_15_t)ivar_3, (ltepegproof_funtype_17_t)ivar_5);
        bool_t ivar_36;
        ivar_8->count++;
        ivar_36 = (bool_t)r_ltepegproof__zerop((ltepegproof__parsetree_adt_t)ivar_8);
        if (ivar_36){ 
             release_ltepegproof_funtype_5(ivar_9);
             ltepeg__ent_adt_t ivar_25;
             ivar_8->count++;
             ivar_25 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_8);
             mpz_mk_set(result, ivar_1->ftbl->mptr(ivar_1, ivar_25, ivar_8));
} else {
        
             bool_t ivar_62;
             ivar_8->count++;
             ivar_62 = (bool_t)r_ltepegproof__onep((ltepegproof__parsetree_adt_t)ivar_8);
             if (ivar_62){  
           ltepeg__ent_adt_t ivar_40;
           ivar_8->count++;
           ivar_40 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_8);
           ltepegproof__parsetree_adt_t ivar_41;
           ivar_8->count++;
           ivar_41 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subone((ltepegproof__parsetree_adt_t)ivar_8);
           mpz_ptr_t ivar_60;
           mpz_mk_set(ivar_60, ivar_9->ftbl->fptr(ivar_9, ivar_41));
           ivar_9->ftbl->rptr(ivar_9);
           mpz_mk_set(result, ivar_3->ftbl->mptr(ivar_3, ivar_40, ivar_60, ivar_8));
} else {
             
           ltepeg__ent_adt_t ivar_66;
           ivar_8->count++;
           ivar_66 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_8);
           ltepegproof__parsetree_adt_t ivar_67;
           ivar_8->count++;
           ivar_67 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subone((ltepegproof__parsetree_adt_t)ivar_8);
           ltepegproof__parsetree_adt_t ivar_68;
           ivar_8->count++;
           ivar_68 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subtwo((ltepegproof__parsetree_adt_t)ivar_8);
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

ltepegproof_closure_18_t new_ltepegproof_closure_18(void){
        static struct ltepegproof_funtype_5_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ltepegproof_funtype_5_t, ltepegproof__parsetree_adt_t))&f_ltepegproof_closure_18, .mptr = (mpz_ptr_t (*)(ltepegproof_funtype_5_t, ltepegproof__parsetree_adt_t))&m_ltepegproof_closure_18, .rptr =  (void (*)(ltepegproof_funtype_5_t))&release_ltepegproof_closure_18, .cptr = (ltepegproof_funtype_5_t (*)(ltepegproof_funtype_5_t))&copy_ltepegproof_closure_18};
        ltepegproof_closure_18_t tmp = (ltepegproof_closure_18_t) safe_malloc(sizeof(struct ltepegproof_closure_18_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegproof_closure_18(ltepegproof_funtype_5_t closure){
        ltepegproof_closure_18_t x = (ltepegproof_closure_18_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepegproof_funtype_15(x->fvar_1);
         release_ltepegproof_funtype_17(x->fvar_2);
         release_ltepegproof_funtype_13(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegproof_closure_18_t copy_ltepegproof_closure_18(ltepegproof_closure_18_t x){
        ltepegproof_closure_18_t y = new_ltepegproof_closure_18();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltepegproof_funtype_5_htbl_t new_htbl = (ltepegproof_funtype_5_htbl_t) safe_malloc(sizeof(struct ltepegproof_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegproof_funtype_5_hashentry_t * new_data = (ltepegproof_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegproof_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegproof_funtype_5_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepegproof_funtype_19(ltepegproof_funtype_19_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_19_t copy_ltepegproof_funtype_19(ltepegproof_funtype_19_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_19(ltepegproof_funtype_19_t x, ltepegproof_funtype_19_t y){
        return false;}

char* json_ltepegproof_funtype_19(ltepegproof_funtype_19_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_19\""); return result;}

void release_ltepegproof_funtype_20(ltepegproof_funtype_20_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_20_t copy_ltepegproof_funtype_20(ltepegproof_funtype_20_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_20(ltepegproof_funtype_20_t x, ltepegproof_funtype_20_t y){
        return false;}

char* json_ltepegproof_funtype_20(ltepegproof_funtype_20_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_20\""); return result;}


ltepegproof_record_21_t new_ltepegproof_record_21(void){
        ltepegproof_record_21_t tmp = (ltepegproof_record_21_t) safe_malloc(sizeof(struct ltepegproof_record_21_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_21(ltepegproof_record_21_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__ent_adt(x->project_1);
         release_ordstruct_adt__ordstruct_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_21_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_21((ltepegproof_record_21_t)x);
}

ltepegproof_record_21_t copy_ltepegproof_record_21(ltepegproof_record_21_t x){
        ltepegproof_record_21_t y = new_ltepegproof_record_21();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepegproof_record_21(ltepegproof_record_21_t x, ltepegproof_record_21_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepeg__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_2, y->project_2);
        return tmp;}

char * json_ltepegproof_record_21(ltepegproof_record_21_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ordstruct_adt__ordstruct_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof_record_21_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_21_t T){
        return equal_ltepegproof_record_21((ltepegproof_record_21_t)x, (ltepegproof_record_21_t)y);
}

char * json_ltepegproof_record_21_ptr(pointer_t x, actual_ltepegproof_record_21_t T){
        return json_ltepegproof_record_21((ltepegproof_record_21_t)x);
}

actual_ltepegproof_record_21_t actual_ltepegproof_record_21(){
        actual_ltepegproof_record_21_t new = (actual_ltepegproof_record_21_t)safe_malloc(sizeof(struct actual_ltepegproof_record_21_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_21_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_21_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_21_ptr);
 

 
        return new;
 };

ltepegproof_record_21_t update_ltepegproof_record_21_project_1(ltepegproof_record_21_t x, ltepeg__ent_adt_t v){
        ltepegproof_record_21_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepeg__ent_adt(x->project_1);};}
        else {y = copy_ltepegproof_record_21(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepeg__ent_adt_t)v;
        return y;}

ltepegproof_record_21_t update_ltepegproof_record_21_project_2(ltepegproof_record_21_t x, ordstruct_adt__ordstruct_adt_t v){
        ltepegproof_record_21_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_2);};}
        else {y = copy_ltepegproof_record_21(x); x->count--; y->project_2->count--;};
        y->project_2 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}



void release_ltepegproof_funtype_22(ltepegproof_funtype_22_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_22_t copy_ltepegproof_funtype_22(ltepegproof_funtype_22_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_22(ltepegproof_funtype_22_t x, ltepegproof_funtype_22_t y){
        return false;}

char* json_ltepegproof_funtype_22(ltepegproof_funtype_22_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_22\""); return result;}


ltepegproof_record_23_t new_ltepegproof_record_23(void){
        ltepegproof_record_23_t tmp = (ltepegproof_record_23_t) safe_malloc(sizeof(struct ltepegproof_record_23_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_23(ltepegproof_record_23_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__ent_adt(x->project_1);
         release_ordstruct_adt__ordstruct_adt(x->project_2);
         release_ordstruct_adt__ordstruct_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_23_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_23((ltepegproof_record_23_t)x);
}

ltepegproof_record_23_t copy_ltepegproof_record_23(ltepegproof_record_23_t x){
        ltepegproof_record_23_t y = new_ltepegproof_record_23();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepegproof_record_23(ltepegproof_record_23_t x, ltepegproof_record_23_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepeg__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_2, y->project_2);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        return tmp;}

char * json_ltepegproof_record_23(ltepegproof_record_23_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ordstruct_adt__ordstruct_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ordstruct_adt__ordstruct_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof_record_23_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_23_t T){
        return equal_ltepegproof_record_23((ltepegproof_record_23_t)x, (ltepegproof_record_23_t)y);
}

char * json_ltepegproof_record_23_ptr(pointer_t x, actual_ltepegproof_record_23_t T){
        return json_ltepegproof_record_23((ltepegproof_record_23_t)x);
}

actual_ltepegproof_record_23_t actual_ltepegproof_record_23(){
        actual_ltepegproof_record_23_t new = (actual_ltepegproof_record_23_t)safe_malloc(sizeof(struct actual_ltepegproof_record_23_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_23_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_23_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_23_ptr);
 

 
        return new;
 };

ltepegproof_record_23_t update_ltepegproof_record_23_project_1(ltepegproof_record_23_t x, ltepeg__ent_adt_t v){
        ltepegproof_record_23_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepeg__ent_adt(x->project_1);};}
        else {y = copy_ltepegproof_record_23(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepeg__ent_adt_t)v;
        return y;}

ltepegproof_record_23_t update_ltepegproof_record_23_project_2(ltepegproof_record_23_t x, ordstruct_adt__ordstruct_adt_t v){
        ltepegproof_record_23_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_2);};}
        else {y = copy_ltepegproof_record_23(x); x->count--; y->project_2->count--;};
        y->project_2 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

ltepegproof_record_23_t update_ltepegproof_record_23_project_3(ltepegproof_record_23_t x, ordstruct_adt__ordstruct_adt_t v){
        ltepegproof_record_23_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_ltepegproof_record_23(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}



void release_ltepegproof_funtype_24(ltepegproof_funtype_24_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_24_t copy_ltepegproof_funtype_24(ltepegproof_funtype_24_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_24(ltepegproof_funtype_24_t x, ltepegproof_funtype_24_t y){
        return false;}

char* json_ltepegproof_funtype_24(ltepegproof_funtype_24_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_24\""); return result;}


ordstruct_adt__ordstruct_adt_t f_ltepegproof_closure_25(struct ltepegproof_closure_25_s * closure, ltepegproof__parsetree_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_ltepegproof_closure_25(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_ltepegproof_closure_25(struct ltepegproof_closure_25_s * closure, ltepegproof__parsetree_adt_t bvar){
        return h_ltepegproof_closure_25(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern ordstruct_adt__ordstruct_adt_t h_ltepegproof_closure_25(ltepegproof__parsetree_adt_t ivar_8, ltepegproof_funtype_22_t ivar_3, ltepegproof_funtype_24_t ivar_5, ltepegproof_funtype_20_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ ltepegproof_funtype_19_t ivar_9;
        ivar_1->count++;
        ivar_3->count++;
        ivar_5->count++;
        ivar_9 = (ltepegproof_funtype_19_t)ltepegproof__reduce_ordinal__1((ltepegproof_funtype_20_t)ivar_1, (ltepegproof_funtype_22_t)ivar_3, (ltepegproof_funtype_24_t)ivar_5);
        bool_t ivar_34;
        ivar_8->count++;
        ivar_34 = (bool_t)r_ltepegproof__zerop((ltepegproof__parsetree_adt_t)ivar_8);
        if (ivar_34){ 
             release_ltepegproof_funtype_19(ivar_9);
             ltepeg__ent_adt_t ivar_25;
             ivar_25 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_8);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_25);
} else {
        
             bool_t ivar_58;
             ivar_8->count++;
             ivar_58 = (bool_t)r_ltepegproof__onep((ltepegproof__parsetree_adt_t)ivar_8);
             if (ivar_58){  
           ltepeg__ent_adt_t ivar_38;
           ivar_8->count++;
           ivar_38 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_8);
           ltepegproof__parsetree_adt_t ivar_39;
           ivar_39 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subone((ltepegproof__parsetree_adt_t)ivar_8);
           ordstruct_adt__ordstruct_adt_t ivar_57;
           ivar_57 = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->fptr(ivar_9, ivar_39);
           ivar_9->ftbl->rptr(ivar_9);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_38, ivar_57);
} else {
             
           ltepeg__ent_adt_t ivar_62;
           ivar_8->count++;
           ivar_62 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_8);
           ltepegproof__parsetree_adt_t ivar_63;
           ivar_8->count++;
           ivar_63 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subone((ltepegproof__parsetree_adt_t)ivar_8);
           ltepegproof__parsetree_adt_t ivar_64;
           ivar_64 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subtwo((ltepegproof__parsetree_adt_t)ivar_8);
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

ltepegproof_closure_25_t new_ltepegproof_closure_25(void){
        static struct ltepegproof_funtype_19_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepegproof_funtype_19_t, ltepegproof__parsetree_adt_t))&f_ltepegproof_closure_25, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepegproof_funtype_19_t, ltepegproof__parsetree_adt_t))&m_ltepegproof_closure_25, .rptr =  (void (*)(ltepegproof_funtype_19_t))&release_ltepegproof_closure_25, .cptr = (ltepegproof_funtype_19_t (*)(ltepegproof_funtype_19_t))&copy_ltepegproof_closure_25};
        ltepegproof_closure_25_t tmp = (ltepegproof_closure_25_t) safe_malloc(sizeof(struct ltepegproof_closure_25_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegproof_closure_25(ltepegproof_funtype_19_t closure){
        ltepegproof_closure_25_t x = (ltepegproof_closure_25_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepegproof_funtype_22(x->fvar_1);
         release_ltepegproof_funtype_24(x->fvar_2);
         release_ltepegproof_funtype_20(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegproof_closure_25_t copy_ltepegproof_closure_25(ltepegproof_closure_25_t x){
        ltepegproof_closure_25_t y = new_ltepegproof_closure_25();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltepegproof_funtype_19_htbl_t new_htbl = (ltepegproof_funtype_19_htbl_t) safe_malloc(sizeof(struct ltepegproof_funtype_19_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegproof_funtype_19_hashentry_t * new_data = (ltepegproof_funtype_19_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegproof_funtype_19_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegproof_funtype_19_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepegproof_funtype_26(ltepegproof_funtype_26_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_26_t copy_ltepegproof_funtype_26(ltepegproof_funtype_26_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_26(ltepegproof_funtype_26_t x, ltepegproof_funtype_26_t y){
        return false;}

char* json_ltepegproof_funtype_26(ltepegproof_funtype_26_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_26\""); return result;}


ltepegproof_record_27_t new_ltepegproof_record_27(void){
        ltepegproof_record_27_t tmp = (ltepegproof_record_27_t) safe_malloc(sizeof(struct ltepegproof_record_27_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_27(ltepegproof_record_27_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__ent_adt(x->project_1);
         release_ordstruct_adt__ordstruct_adt(x->project_2);
         release_ltepegproof__parsetree_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_27_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_27((ltepegproof_record_27_t)x);
}

ltepegproof_record_27_t copy_ltepegproof_record_27(ltepegproof_record_27_t x){
        ltepegproof_record_27_t y = new_ltepegproof_record_27();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepegproof_record_27(ltepegproof_record_27_t x, ltepegproof_record_27_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepeg__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_2, y->project_2);
        tmp = tmp && equal_ltepegproof__parsetree_adt(x->project_3, y->project_3);
        return tmp;}

char * json_ltepegproof_record_27(ltepegproof_record_27_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ordstruct_adt__ordstruct_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ltepegproof__parsetree_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof_record_27_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_27_t T){
        return equal_ltepegproof_record_27((ltepegproof_record_27_t)x, (ltepegproof_record_27_t)y);
}

char * json_ltepegproof_record_27_ptr(pointer_t x, actual_ltepegproof_record_27_t T){
        return json_ltepegproof_record_27((ltepegproof_record_27_t)x);
}

actual_ltepegproof_record_27_t actual_ltepegproof_record_27(){
        actual_ltepegproof_record_27_t new = (actual_ltepegproof_record_27_t)safe_malloc(sizeof(struct actual_ltepegproof_record_27_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_27_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_27_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_27_ptr);
 

 
        return new;
 };

ltepegproof_record_27_t update_ltepegproof_record_27_project_1(ltepegproof_record_27_t x, ltepeg__ent_adt_t v){
        ltepegproof_record_27_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepeg__ent_adt(x->project_1);};}
        else {y = copy_ltepegproof_record_27(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepeg__ent_adt_t)v;
        return y;}

ltepegproof_record_27_t update_ltepegproof_record_27_project_2(ltepegproof_record_27_t x, ordstruct_adt__ordstruct_adt_t v){
        ltepegproof_record_27_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_2);};}
        else {y = copy_ltepegproof_record_27(x); x->count--; y->project_2->count--;};
        y->project_2 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

ltepegproof_record_27_t update_ltepegproof_record_27_project_3(ltepegproof_record_27_t x, ltepegproof__parsetree_adt_t v){
        ltepegproof_record_27_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ltepegproof__parsetree_adt(x->project_3);};}
        else {y = copy_ltepegproof_record_27(x); x->count--; y->project_3->count--;};
        y->project_3 = (ltepegproof__parsetree_adt_t)v;
        return y;}



void release_ltepegproof_funtype_28(ltepegproof_funtype_28_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_28_t copy_ltepegproof_funtype_28(ltepegproof_funtype_28_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_28(ltepegproof_funtype_28_t x, ltepegproof_funtype_28_t y){
        return false;}

char* json_ltepegproof_funtype_28(ltepegproof_funtype_28_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_28\""); return result;}


ltepegproof_record_29_t new_ltepegproof_record_29(void){
        ltepegproof_record_29_t tmp = (ltepegproof_record_29_t) safe_malloc(sizeof(struct ltepegproof_record_29_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_29(ltepegproof_record_29_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepeg__ent_adt(x->project_1);
         release_ordstruct_adt__ordstruct_adt(x->project_2);
         release_ordstruct_adt__ordstruct_adt(x->project_3);
         release_ltepegproof__parsetree_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_29_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_29((ltepegproof_record_29_t)x);
}

ltepegproof_record_29_t copy_ltepegproof_record_29(ltepegproof_record_29_t x){
        ltepegproof_record_29_t y = new_ltepegproof_record_29();
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

bool_t equal_ltepegproof_record_29(ltepegproof_record_29_t x, ltepegproof_record_29_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepeg__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_2, y->project_2);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        tmp = tmp && equal_ltepegproof__parsetree_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltepegproof_record_29(ltepegproof_record_29_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepeg__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ordstruct_adt__ordstruct_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ordstruct_adt__ordstruct_adt(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_ltepegproof__parsetree_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof_record_29_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_29_t T){
        return equal_ltepegproof_record_29((ltepegproof_record_29_t)x, (ltepegproof_record_29_t)y);
}

char * json_ltepegproof_record_29_ptr(pointer_t x, actual_ltepegproof_record_29_t T){
        return json_ltepegproof_record_29((ltepegproof_record_29_t)x);
}

actual_ltepegproof_record_29_t actual_ltepegproof_record_29(){
        actual_ltepegproof_record_29_t new = (actual_ltepegproof_record_29_t)safe_malloc(sizeof(struct actual_ltepegproof_record_29_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_29_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_29_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_29_ptr);
 

 
        return new;
 };

ltepegproof_record_29_t update_ltepegproof_record_29_project_1(ltepegproof_record_29_t x, ltepeg__ent_adt_t v){
        ltepegproof_record_29_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepeg__ent_adt(x->project_1);};}
        else {y = copy_ltepegproof_record_29(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepeg__ent_adt_t)v;
        return y;}

ltepegproof_record_29_t update_ltepegproof_record_29_project_2(ltepegproof_record_29_t x, ordstruct_adt__ordstruct_adt_t v){
        ltepegproof_record_29_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_2);};}
        else {y = copy_ltepegproof_record_29(x); x->count--; y->project_2->count--;};
        y->project_2 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

ltepegproof_record_29_t update_ltepegproof_record_29_project_3(ltepegproof_record_29_t x, ordstruct_adt__ordstruct_adt_t v){
        ltepegproof_record_29_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_ltepegproof_record_29(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

ltepegproof_record_29_t update_ltepegproof_record_29_project_4(ltepegproof_record_29_t x, ltepegproof__parsetree_adt_t v){
        ltepegproof_record_29_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ltepegproof__parsetree_adt(x->project_4);};}
        else {y = copy_ltepegproof_record_29(x); x->count--; y->project_4->count--;};
        y->project_4 = (ltepegproof__parsetree_adt_t)v;
        return y;}



void release_ltepegproof_funtype_30(ltepegproof_funtype_30_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_30_t copy_ltepegproof_funtype_30(ltepegproof_funtype_30_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_30(ltepegproof_funtype_30_t x, ltepegproof_funtype_30_t y){
        return false;}

char* json_ltepegproof_funtype_30(ltepegproof_funtype_30_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_30\""); return result;}


ordstruct_adt__ordstruct_adt_t f_ltepegproof_closure_31(struct ltepegproof_closure_31_s * closure, ltepegproof__parsetree_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_ltepegproof_closure_31(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_ltepegproof_closure_31(struct ltepegproof_closure_31_s * closure, ltepegproof__parsetree_adt_t bvar){
        return h_ltepegproof_closure_31(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern ordstruct_adt__ordstruct_adt_t h_ltepegproof_closure_31(ltepegproof__parsetree_adt_t ivar_8, ltepegproof_funtype_28_t ivar_3, ltepegproof_funtype_30_t ivar_5, ltepegproof_funtype_26_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ ltepegproof_funtype_19_t ivar_9;
        ivar_1->count++;
        ivar_3->count++;
        ivar_5->count++;
        ivar_9 = (ltepegproof_funtype_19_t)ltepegproof__REDUCE_ordinal__1((ltepegproof_funtype_26_t)ivar_1, (ltepegproof_funtype_28_t)ivar_3, (ltepegproof_funtype_30_t)ivar_5);
        bool_t ivar_36;
        ivar_8->count++;
        ivar_36 = (bool_t)r_ltepegproof__zerop((ltepegproof__parsetree_adt_t)ivar_8);
        if (ivar_36){ 
             release_ltepegproof_funtype_19(ivar_9);
             ltepeg__ent_adt_t ivar_25;
             ivar_8->count++;
             ivar_25 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_8);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->mptr(ivar_1, ivar_25, ivar_8);
} else {
        
             bool_t ivar_62;
             ivar_8->count++;
             ivar_62 = (bool_t)r_ltepegproof__onep((ltepegproof__parsetree_adt_t)ivar_8);
             if (ivar_62){  
           ltepeg__ent_adt_t ivar_40;
           ivar_8->count++;
           ivar_40 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_8);
           ltepegproof__parsetree_adt_t ivar_41;
           ivar_8->count++;
           ivar_41 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subone((ltepegproof__parsetree_adt_t)ivar_8);
           ordstruct_adt__ordstruct_adt_t ivar_60;
           ivar_60 = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->fptr(ivar_9, ivar_41);
           ivar_9->ftbl->rptr(ivar_9);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_40, ivar_60, ivar_8);
} else {
             
           ltepeg__ent_adt_t ivar_66;
           ivar_8->count++;
           ivar_66 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_8);
           ltepegproof__parsetree_adt_t ivar_67;
           ivar_8->count++;
           ivar_67 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subone((ltepegproof__parsetree_adt_t)ivar_8);
           ltepegproof__parsetree_adt_t ivar_68;
           ivar_8->count++;
           ivar_68 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subtwo((ltepegproof__parsetree_adt_t)ivar_8);
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

ltepegproof_closure_31_t new_ltepegproof_closure_31(void){
        static struct ltepegproof_funtype_19_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepegproof_funtype_19_t, ltepegproof__parsetree_adt_t))&f_ltepegproof_closure_31, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepegproof_funtype_19_t, ltepegproof__parsetree_adt_t))&m_ltepegproof_closure_31, .rptr =  (void (*)(ltepegproof_funtype_19_t))&release_ltepegproof_closure_31, .cptr = (ltepegproof_funtype_19_t (*)(ltepegproof_funtype_19_t))&copy_ltepegproof_closure_31};
        ltepegproof_closure_31_t tmp = (ltepegproof_closure_31_t) safe_malloc(sizeof(struct ltepegproof_closure_31_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegproof_closure_31(ltepegproof_funtype_19_t closure){
        ltepegproof_closure_31_t x = (ltepegproof_closure_31_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepegproof_funtype_28(x->fvar_1);
         release_ltepegproof_funtype_30(x->fvar_2);
         release_ltepegproof_funtype_26(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegproof_closure_31_t copy_ltepegproof_closure_31(ltepegproof_closure_31_t x){
        ltepegproof_closure_31_t y = new_ltepegproof_closure_31();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltepegproof_funtype_19_htbl_t new_htbl = (ltepegproof_funtype_19_htbl_t) safe_malloc(sizeof(struct ltepegproof_funtype_19_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegproof_funtype_19_hashentry_t * new_data = (ltepegproof_funtype_19_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegproof_funtype_19_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegproof_funtype_19_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepegproof__qstack_adt_t new_ltepegproof__qstack_adt(void){
        ltepegproof__qstack_adt_t tmp = (ltepegproof__qstack_adt_t) safe_malloc(sizeof(struct ltepegproof__qstack_adt_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof__qstack_adt(ltepegproof__qstack_adt_t x){
switch (x->ltepegproof__qstack_adt_index) {
case 1:  release_ltepegproof__qpush((ltepegproof__qpush_t) x); break;
}}

void release_ltepegproof__qstack_adt_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof__qstack_adt((ltepegproof__qstack_adt_t)x);
}

ltepegproof__qstack_adt_t copy_ltepegproof__qstack_adt(ltepegproof__qstack_adt_t x){
        ltepegproof__qstack_adt_t y = new_ltepegproof__qstack_adt();
        y->ltepegproof__qstack_adt_index = (uint8_t)x->ltepegproof__qstack_adt_index;
        y->count = 1;
        return y;}

bool_t equal_ltepegproof__qstack_adt(ltepegproof__qstack_adt_t x, ltepegproof__qstack_adt_t y){
        bool_t tmp = x->ltepegproof__qstack_adt_index == y->ltepegproof__qstack_adt_index;
        switch  (x->ltepegproof__qstack_adt_index) {
                case 1: tmp = tmp && equal_ltepegproof__qpush((ltepegproof__qpush_t) x, (ltepegproof__qpush_t) y); break;
        }
        return tmp;
}

char * json_ltepegproof__qstack_adt(ltepegproof__qstack_adt_t x){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ constructor = %u", x->ltepegproof__qstack_adt_index);
        switch  (x->ltepegproof__qstack_adt_index) {
                case 1: tmp = safe_strcat(tmp, json_ltepegproof__qpush((ltepegproof__qpush_t) x)); break;
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_ltepegproof__qstack_adt_ptr(pointer_t x, pointer_t y, actual_ltepegproof__qstack_adt_t T){
        return equal_ltepegproof__qstack_adt((ltepegproof__qstack_adt_t)x, (ltepegproof__qstack_adt_t)y);
}

char * json_ltepegproof__qstack_adt_ptr(pointer_t x, actual_ltepegproof__qstack_adt_t T){
        return json_ltepegproof__qstack_adt((ltepegproof__qstack_adt_t)x);
}

actual_ltepegproof__qstack_adt_t actual_ltepegproof__qstack_adt(){
        actual_ltepegproof__qstack_adt_t new = (actual_ltepegproof__qstack_adt_t)safe_malloc(sizeof(struct actual_ltepegproof__qstack_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof__qstack_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof__qstack_adt_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof__qstack_adt_ptr);
 

 
        return new;
 };

ltepegproof__qstack_adt_t update_ltepegproof__qstack_adt_ltepegproof__qstack_adt_index(ltepegproof__qstack_adt_t x, uint8_t v){
        ltepegproof__qstack_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof__qstack_adt(x); x->count--;};
        y->ltepegproof__qstack_adt_index = (uint8_t)v;
        return y;}




ltepegproof__qpush_t new_ltepegproof__qpush(void){
        ltepegproof__qpush_t tmp = (ltepegproof__qpush_t) safe_malloc(sizeof(struct ltepegproof__qpush_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof__qpush(ltepegproof__qpush_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepegproof__qstack_adt(x->qpop);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof__qpush_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof__qpush((ltepegproof__qpush_t)x);
}

ltepegproof__qpush_t copy_ltepegproof__qpush(ltepegproof__qpush_t x){
        ltepegproof__qpush_t y = new_ltepegproof__qpush();
        y->ltepegproof__qstack_adt_index = (uint8_t)x->ltepegproof__qstack_adt_index;
        y->nonterm = (uint8_t)x->nonterm;
        y->pos = (uint32_t)x->pos;
        y->qpop = x->qpop;
        if (y->qpop != NULL){y->qpop->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepegproof__qpush(ltepegproof__qpush_t x, ltepegproof__qpush_t y){
        bool_t tmp = true;
        tmp = tmp && x->ltepegproof__qstack_adt_index == y->ltepegproof__qstack_adt_index;
        tmp = tmp && x->nonterm == y->nonterm;
        tmp = tmp && x->pos == y->pos;
        tmp = tmp && equal_ltepegproof__qstack_adt(x->qpop, y->qpop);
        return tmp;}

char * json_ltepegproof__qpush(ltepegproof__qpush_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(41);
         sprintf(fld0, "\"ltepegproof__qstack_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->ltepegproof__qstack_adt_index));
        char * fld1 = safe_malloc(19);
         sprintf(fld1, "\"nonterm\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->nonterm));
        char * fld2 = safe_malloc(15);
         sprintf(fld2, "\"pos\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->pos));
        char * fld3 = safe_malloc(16);
         sprintf(fld3, "\"qpop\" : ");
        tmp[3] = safe_strcat(fld3, json_ltepegproof__qstack_adt(x->qpop));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof__qpush_ptr(pointer_t x, pointer_t y, actual_ltepegproof__qpush_t T){
        return equal_ltepegproof__qpush((ltepegproof__qpush_t)x, (ltepegproof__qpush_t)y);
}

char * json_ltepegproof__qpush_ptr(pointer_t x, actual_ltepegproof__qpush_t T){
        return json_ltepegproof__qpush((ltepegproof__qpush_t)x);
}

actual_ltepegproof__qpush_t actual_ltepegproof__qpush(){
        actual_ltepegproof__qpush_t new = (actual_ltepegproof__qpush_t)safe_malloc(sizeof(struct actual_ltepegproof__qpush_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof__qpush_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof__qpush_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof__qpush_ptr);
 

 
        return new;
 };

ltepegproof__qpush_t update_ltepegproof__qpush_ltepegproof__qstack_adt_index(ltepegproof__qpush_t x, uint8_t v){
        ltepegproof__qpush_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof__qpush(x); x->count--;};
        y->ltepegproof__qstack_adt_index = (uint8_t)v;
        return y;}

ltepegproof__qpush_t update_ltepegproof__qpush_nonterm(ltepegproof__qpush_t x, uint8_t v){
        ltepegproof__qpush_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof__qpush(x); x->count--;};
        y->nonterm = (uint8_t)v;
        return y;}

ltepegproof__qpush_t update_ltepegproof__qpush_pos(ltepegproof__qpush_t x, uint32_t v){
        ltepegproof__qpush_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof__qpush(x); x->count--;};
        y->pos = (uint32_t)v;
        return y;}

ltepegproof__qpush_t update_ltepegproof__qpush_qpop(ltepegproof__qpush_t x, ltepegproof__qstack_adt_t v){
        ltepegproof__qpush_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->qpop != NULL){release_ltepegproof__qstack_adt(x->qpop);};}
        else {y = copy_ltepegproof__qpush(x); x->count--; y->qpop->count--;};
        y->qpop = (ltepegproof__qstack_adt_t)v;
        return y;}



void release_ltepegproof_funtype_34(ltepegproof_funtype_34_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_34_t copy_ltepegproof_funtype_34(ltepegproof_funtype_34_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_34(ltepegproof_funtype_34_t x, ltepegproof_funtype_34_t y){
        return false;}

char* json_ltepegproof_funtype_34(ltepegproof_funtype_34_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_34\""); return result;}

void release_ltepegproof_funtype_35(ltepegproof_funtype_35_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_35_t copy_ltepegproof_funtype_35(ltepegproof_funtype_35_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_35(ltepegproof_funtype_35_t x, ltepegproof_funtype_35_t y){
        return false;}

char* json_ltepegproof_funtype_35(ltepegproof_funtype_35_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_35\""); return result;}


ltepegproof_record_36_t new_ltepegproof_record_36(void){
        ltepegproof_record_36_t tmp = (ltepegproof_record_36_t) safe_malloc(sizeof(struct ltepegproof_record_36_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_36(ltepegproof_record_36_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_36_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_36((ltepegproof_record_36_t)x);
}

ltepegproof_record_36_t copy_ltepegproof_record_36(ltepegproof_record_36_t x){
        ltepegproof_record_36_t y = new_ltepegproof_record_36();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        mpz_set(y->project_3, x->project_3);
        y->count = 1;
        return y;}

bool_t equal_ltepegproof_record_36(ltepegproof_record_36_t x, ltepegproof_record_36_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        return tmp;}

char * json_ltepegproof_record_36(ltepegproof_record_36_t x){
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

bool_t equal_ltepegproof_record_36_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_36_t T){
        return equal_ltepegproof_record_36((ltepegproof_record_36_t)x, (ltepegproof_record_36_t)y);
}

char * json_ltepegproof_record_36_ptr(pointer_t x, actual_ltepegproof_record_36_t T){
        return json_ltepegproof_record_36((ltepegproof_record_36_t)x);
}

actual_ltepegproof_record_36_t actual_ltepegproof_record_36(){
        actual_ltepegproof_record_36_t new = (actual_ltepegproof_record_36_t)safe_malloc(sizeof(struct actual_ltepegproof_record_36_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_36_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_36_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_36_ptr);
 

 
        return new;
 };

ltepegproof_record_36_t update_ltepegproof_record_36_project_1(ltepegproof_record_36_t x, uint8_t v){
        ltepegproof_record_36_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_36(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltepegproof_record_36_t update_ltepegproof_record_36_project_2(ltepegproof_record_36_t x, uint32_t v){
        ltepegproof_record_36_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_36(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

ltepegproof_record_36_t update_ltepegproof_record_36_project_3(ltepegproof_record_36_t x, mpz_ptr_t v){
        ltepegproof_record_36_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_36(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}



void release_ltepegproof_funtype_37(ltepegproof_funtype_37_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_37_t copy_ltepegproof_funtype_37(ltepegproof_funtype_37_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_37(ltepegproof_funtype_37_t x, ltepegproof_funtype_37_t y){
        return false;}

char* json_ltepegproof_funtype_37(ltepegproof_funtype_37_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_37\""); return result;}


mpz_ptr_t f_ltepegproof_closure_38(struct ltepegproof_closure_38_s * closure, ltepegproof__qstack_adt_t bvar){
        mpz_ptr_t result = h_ltepegproof_closure_38(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_ltepegproof_closure_38(struct ltepegproof_closure_38_s * closure, ltepegproof__qstack_adt_t bvar){
        return h_ltepegproof_closure_38(bvar, closure->fvar_1, closure->fvar_2);}

extern mpz_ptr_t h_ltepegproof_closure_38(ltepegproof__qstack_adt_t ivar_5, ltepegproof_funtype_37_t ivar_2, mpz_ptr_t ivar_1){
        mpz_ptr_t result;
        /* red */ ltepegproof_funtype_35_t ivar_6;
        ivar_2->count++;
        ivar_6 = (ltepegproof_funtype_35_t)ltepegproof__reduce_nat__2(ivar_1, (ltepegproof_funtype_37_t)ivar_2);
        bool_t ivar_18;
        ivar_5->count++;
        ivar_18 = (bool_t)r_ltepegproof__qemptyp((ltepegproof__qstack_adt_t)ivar_5);
        if (ivar_18){ 
             release_ltepegproof_funtype_35(ivar_6);
             release_ltepegproof__qstack_adt(ivar_5);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_1);
} else {
        
             uint8_t ivar_22;
             ivar_5->count++;
             ivar_22 = (uint8_t)ltepegproof__qstack_adt_nonterm((ltepegproof__qstack_adt_t)ivar_5);
             uint32_t ivar_23;
             ivar_5->count++;
             ivar_23 = (uint32_t)ltepegproof__qstack_adt_pos((ltepegproof__qstack_adt_t)ivar_5);
             ltepegproof__qstack_adt_t ivar_24;
             ivar_24 = (ltepegproof__qstack_adt_t)ltepegproof__qstack_adt_qpop((ltepegproof__qstack_adt_t)ivar_5);
             mpz_ptr_t ivar_47;
             mpz_mk_set(ivar_47, ivar_6->ftbl->fptr(ivar_6, ivar_24));
             ivar_6->ftbl->rptr(ivar_6);
             mpz_mk_set(result, ivar_2->ftbl->mptr(ivar_2, ivar_22, ivar_23, ivar_47));
};

        return result;
}

ltepegproof_closure_38_t new_ltepegproof_closure_38(void){
        static struct ltepegproof_funtype_35_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ltepegproof_funtype_35_t, ltepegproof__qstack_adt_t))&f_ltepegproof_closure_38, .mptr = (mpz_ptr_t (*)(ltepegproof_funtype_35_t, ltepegproof__qstack_adt_t))&m_ltepegproof_closure_38, .rptr =  (void (*)(ltepegproof_funtype_35_t))&release_ltepegproof_closure_38, .cptr = (ltepegproof_funtype_35_t (*)(ltepegproof_funtype_35_t))&copy_ltepegproof_closure_38};
        ltepegproof_closure_38_t tmp = (ltepegproof_closure_38_t) safe_malloc(sizeof(struct ltepegproof_closure_38_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_ltepegproof_closure_38(ltepegproof_funtype_35_t closure){
        ltepegproof_closure_38_t x = (ltepegproof_closure_38_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepegproof_funtype_37(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegproof_closure_38_t copy_ltepegproof_closure_38(ltepegproof_closure_38_t x){
        ltepegproof_closure_38_t y = new_ltepegproof_closure_38();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        mpz_set(y->fvar_2, x->fvar_2);
        if (x->htbl != NULL){
            ltepegproof_funtype_35_htbl_t new_htbl = (ltepegproof_funtype_35_htbl_t) safe_malloc(sizeof(struct ltepegproof_funtype_35_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegproof_funtype_35_hashentry_t * new_data = (ltepegproof_funtype_35_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegproof_funtype_35_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegproof_funtype_35_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepegproof_record_39_t new_ltepegproof_record_39(void){
        ltepegproof_record_39_t tmp = (ltepegproof_record_39_t) safe_malloc(sizeof(struct ltepegproof_record_39_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_39(ltepegproof_record_39_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepegproof__qstack_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_39_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_39((ltepegproof_record_39_t)x);
}

ltepegproof_record_39_t copy_ltepegproof_record_39(ltepegproof_record_39_t x){
        ltepegproof_record_39_t y = new_ltepegproof_record_39();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        mpz_set(y->project_3, x->project_3);
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepegproof_record_39(ltepegproof_record_39_t x, ltepegproof_record_39_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        tmp = tmp && equal_ltepegproof__qstack_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltepegproof_record_39(ltepegproof_record_39_t x){
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
        tmp[3] = safe_strcat(fld3, json_ltepegproof__qstack_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof_record_39_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_39_t T){
        return equal_ltepegproof_record_39((ltepegproof_record_39_t)x, (ltepegproof_record_39_t)y);
}

char * json_ltepegproof_record_39_ptr(pointer_t x, actual_ltepegproof_record_39_t T){
        return json_ltepegproof_record_39((ltepegproof_record_39_t)x);
}

actual_ltepegproof_record_39_t actual_ltepegproof_record_39(){
        actual_ltepegproof_record_39_t new = (actual_ltepegproof_record_39_t)safe_malloc(sizeof(struct actual_ltepegproof_record_39_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_39_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_39_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_39_ptr);
 

 
        return new;
 };

ltepegproof_record_39_t update_ltepegproof_record_39_project_1(ltepegproof_record_39_t x, uint8_t v){
        ltepegproof_record_39_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_39(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltepegproof_record_39_t update_ltepegproof_record_39_project_2(ltepegproof_record_39_t x, uint32_t v){
        ltepegproof_record_39_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_39(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

ltepegproof_record_39_t update_ltepegproof_record_39_project_3(ltepegproof_record_39_t x, mpz_ptr_t v){
        ltepegproof_record_39_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_39(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}

ltepegproof_record_39_t update_ltepegproof_record_39_project_4(ltepegproof_record_39_t x, ltepegproof__qstack_adt_t v){
        ltepegproof_record_39_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ltepegproof__qstack_adt(x->project_4);};}
        else {y = copy_ltepegproof_record_39(x); x->count--; y->project_4->count--;};
        y->project_4 = (ltepegproof__qstack_adt_t)v;
        return y;}



void release_ltepegproof_funtype_40(ltepegproof_funtype_40_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_40_t copy_ltepegproof_funtype_40(ltepegproof_funtype_40_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_40(ltepegproof_funtype_40_t x, ltepegproof_funtype_40_t y){
        return false;}

char* json_ltepegproof_funtype_40(ltepegproof_funtype_40_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_40\""); return result;}


mpz_ptr_t f_ltepegproof_closure_41(struct ltepegproof_closure_41_s * closure, ltepegproof__qstack_adt_t bvar){
        mpz_ptr_t result = h_ltepegproof_closure_41(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_ltepegproof_closure_41(struct ltepegproof_closure_41_s * closure, ltepegproof__qstack_adt_t bvar){
        return h_ltepegproof_closure_41(bvar, closure->fvar_1, closure->fvar_2);}

extern mpz_ptr_t h_ltepegproof_closure_41(ltepegproof__qstack_adt_t ivar_6, ltepegproof_funtype_40_t ivar_3, ltepegproof_funtype_35_t ivar_1){
        mpz_ptr_t result;
        /* red */ ltepegproof_funtype_35_t ivar_7;
        ivar_1->count++;
        ivar_3->count++;
        ivar_7 = (ltepegproof_funtype_35_t)ltepegproof__REDUCE_nat__2((ltepegproof_funtype_35_t)ivar_1, (ltepegproof_funtype_40_t)ivar_3);
        bool_t ivar_25;
        ivar_6->count++;
        ivar_25 = (bool_t)r_ltepegproof__qemptyp((ltepegproof__qstack_adt_t)ivar_6);
        if (ivar_25){ 
             release_ltepegproof_funtype_35(ivar_7);
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_6));
} else {
        
             uint8_t ivar_29;
             ivar_6->count++;
             ivar_29 = (uint8_t)ltepegproof__qstack_adt_nonterm((ltepegproof__qstack_adt_t)ivar_6);
             uint32_t ivar_30;
             ivar_6->count++;
             ivar_30 = (uint32_t)ltepegproof__qstack_adt_pos((ltepegproof__qstack_adt_t)ivar_6);
             ltepegproof__qstack_adt_t ivar_31;
             ivar_6->count++;
             ivar_31 = (ltepegproof__qstack_adt_t)ltepegproof__qstack_adt_qpop((ltepegproof__qstack_adt_t)ivar_6);
             mpz_ptr_t ivar_55;
             mpz_mk_set(ivar_55, ivar_7->ftbl->fptr(ivar_7, ivar_31));
             ivar_7->ftbl->rptr(ivar_7);
             mpz_mk_set(result, ivar_3->ftbl->mptr(ivar_3, ivar_29, ivar_30, ivar_55, ivar_6));
};

        return result;
}

ltepegproof_closure_41_t new_ltepegproof_closure_41(void){
        static struct ltepegproof_funtype_35_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(ltepegproof_funtype_35_t, ltepegproof__qstack_adt_t))&f_ltepegproof_closure_41, .mptr = (mpz_ptr_t (*)(ltepegproof_funtype_35_t, ltepegproof__qstack_adt_t))&m_ltepegproof_closure_41, .rptr =  (void (*)(ltepegproof_funtype_35_t))&release_ltepegproof_closure_41, .cptr = (ltepegproof_funtype_35_t (*)(ltepegproof_funtype_35_t))&copy_ltepegproof_closure_41};
        ltepegproof_closure_41_t tmp = (ltepegproof_closure_41_t) safe_malloc(sizeof(struct ltepegproof_closure_41_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegproof_closure_41(ltepegproof_funtype_35_t closure){
        ltepegproof_closure_41_t x = (ltepegproof_closure_41_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepegproof_funtype_40(x->fvar_1);
         release_ltepegproof_funtype_35(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegproof_closure_41_t copy_ltepegproof_closure_41(ltepegproof_closure_41_t x){
        ltepegproof_closure_41_t y = new_ltepegproof_closure_41();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ltepegproof_funtype_35_htbl_t new_htbl = (ltepegproof_funtype_35_htbl_t) safe_malloc(sizeof(struct ltepegproof_funtype_35_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegproof_funtype_35_hashentry_t * new_data = (ltepegproof_funtype_35_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegproof_funtype_35_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegproof_funtype_35_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepegproof_funtype_42(ltepegproof_funtype_42_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_42_t copy_ltepegproof_funtype_42(ltepegproof_funtype_42_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_42(ltepegproof_funtype_42_t x, ltepegproof_funtype_42_t y){
        return false;}

char* json_ltepegproof_funtype_42(ltepegproof_funtype_42_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_42\""); return result;}


ltepegproof_record_43_t new_ltepegproof_record_43(void){
        ltepegproof_record_43_t tmp = (ltepegproof_record_43_t) safe_malloc(sizeof(struct ltepegproof_record_43_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_43(ltepegproof_record_43_t x){
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt__ordstruct_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_43_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_43((ltepegproof_record_43_t)x);
}

ltepegproof_record_43_t copy_ltepegproof_record_43(ltepegproof_record_43_t x){
        ltepegproof_record_43_t y = new_ltepegproof_record_43();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepegproof_record_43(ltepegproof_record_43_t x, ltepegproof_record_43_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        return tmp;}

char * json_ltepegproof_record_43(ltepegproof_record_43_t x){
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

bool_t equal_ltepegproof_record_43_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_43_t T){
        return equal_ltepegproof_record_43((ltepegproof_record_43_t)x, (ltepegproof_record_43_t)y);
}

char * json_ltepegproof_record_43_ptr(pointer_t x, actual_ltepegproof_record_43_t T){
        return json_ltepegproof_record_43((ltepegproof_record_43_t)x);
}

actual_ltepegproof_record_43_t actual_ltepegproof_record_43(){
        actual_ltepegproof_record_43_t new = (actual_ltepegproof_record_43_t)safe_malloc(sizeof(struct actual_ltepegproof_record_43_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_43_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_43_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_43_ptr);
 

 
        return new;
 };

ltepegproof_record_43_t update_ltepegproof_record_43_project_1(ltepegproof_record_43_t x, uint8_t v){
        ltepegproof_record_43_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_43(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltepegproof_record_43_t update_ltepegproof_record_43_project_2(ltepegproof_record_43_t x, uint32_t v){
        ltepegproof_record_43_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_43(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

ltepegproof_record_43_t update_ltepegproof_record_43_project_3(ltepegproof_record_43_t x, ordstruct_adt__ordstruct_adt_t v){
        ltepegproof_record_43_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_ltepegproof_record_43(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}



void release_ltepegproof_funtype_44(ltepegproof_funtype_44_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_44_t copy_ltepegproof_funtype_44(ltepegproof_funtype_44_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_44(ltepegproof_funtype_44_t x, ltepegproof_funtype_44_t y){
        return false;}

char* json_ltepegproof_funtype_44(ltepegproof_funtype_44_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_44\""); return result;}


ordstruct_adt__ordstruct_adt_t f_ltepegproof_closure_45(struct ltepegproof_closure_45_s * closure, ltepegproof__qstack_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_ltepegproof_closure_45(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_ltepegproof_closure_45(struct ltepegproof_closure_45_s * closure, ltepegproof__qstack_adt_t bvar){
        return h_ltepegproof_closure_45(bvar, closure->fvar_1, closure->fvar_2);}

extern ordstruct_adt__ordstruct_adt_t h_ltepegproof_closure_45(ltepegproof__qstack_adt_t ivar_5, ltepegproof_funtype_44_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ ltepegproof_funtype_42_t ivar_6;
        ivar_1->count++;
        ivar_2->count++;
        ivar_6 = (ltepegproof_funtype_42_t)ltepegproof__reduce_ordinal__2((ordstruct_adt__ordstruct_adt_t)ivar_1, (ltepegproof_funtype_44_t)ivar_2);
        bool_t ivar_18;
        ivar_5->count++;
        ivar_18 = (bool_t)r_ltepegproof__qemptyp((ltepegproof__qstack_adt_t)ivar_5);
        if (ivar_18){ 
             release_ltepegproof_funtype_42(ivar_6);
             release_ltepegproof__qstack_adt(ivar_5);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1;
             if (result != NULL) result->count++;
} else {
        
             uint8_t ivar_22;
             ivar_5->count++;
             ivar_22 = (uint8_t)ltepegproof__qstack_adt_nonterm((ltepegproof__qstack_adt_t)ivar_5);
             uint32_t ivar_23;
             ivar_5->count++;
             ivar_23 = (uint32_t)ltepegproof__qstack_adt_pos((ltepegproof__qstack_adt_t)ivar_5);
             ltepegproof__qstack_adt_t ivar_24;
             ivar_24 = (ltepegproof__qstack_adt_t)ltepegproof__qstack_adt_qpop((ltepegproof__qstack_adt_t)ivar_5);
             ordstruct_adt__ordstruct_adt_t ivar_47;
             ivar_47 = (ordstruct_adt__ordstruct_adt_t)ivar_6->ftbl->fptr(ivar_6, ivar_24);
             ivar_6->ftbl->rptr(ivar_6);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_2->ftbl->mptr(ivar_2, ivar_22, ivar_23, ivar_47);
};

        return result;
}

ltepegproof_closure_45_t new_ltepegproof_closure_45(void){
        static struct ltepegproof_funtype_42_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepegproof_funtype_42_t, ltepegproof__qstack_adt_t))&f_ltepegproof_closure_45, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepegproof_funtype_42_t, ltepegproof__qstack_adt_t))&m_ltepegproof_closure_45, .rptr =  (void (*)(ltepegproof_funtype_42_t))&release_ltepegproof_closure_45, .cptr = (ltepegproof_funtype_42_t (*)(ltepegproof_funtype_42_t))&copy_ltepegproof_closure_45};
        ltepegproof_closure_45_t tmp = (ltepegproof_closure_45_t) safe_malloc(sizeof(struct ltepegproof_closure_45_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegproof_closure_45(ltepegproof_funtype_42_t closure){
        ltepegproof_closure_45_t x = (ltepegproof_closure_45_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepegproof_funtype_44(x->fvar_1);
         release_ordstruct_adt__ordstruct_adt(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegproof_closure_45_t copy_ltepegproof_closure_45(ltepegproof_closure_45_t x){
        ltepegproof_closure_45_t y = new_ltepegproof_closure_45();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ltepegproof_funtype_42_htbl_t new_htbl = (ltepegproof_funtype_42_htbl_t) safe_malloc(sizeof(struct ltepegproof_funtype_42_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegproof_funtype_42_hashentry_t * new_data = (ltepegproof_funtype_42_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegproof_funtype_42_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegproof_funtype_42_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepegproof_record_46_t new_ltepegproof_record_46(void){
        ltepegproof_record_46_t tmp = (ltepegproof_record_46_t) safe_malloc(sizeof(struct ltepegproof_record_46_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_46(ltepegproof_record_46_t x){
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt__ordstruct_adt(x->project_3);
         release_ltepegproof__qstack_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_46_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_46((ltepegproof_record_46_t)x);
}

ltepegproof_record_46_t copy_ltepegproof_record_46(ltepegproof_record_46_t x){
        ltepegproof_record_46_t y = new_ltepegproof_record_46();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepegproof_record_46(ltepegproof_record_46_t x, ltepegproof_record_46_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        tmp = tmp && equal_ltepegproof__qstack_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltepegproof_record_46(ltepegproof_record_46_t x){
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
        tmp[3] = safe_strcat(fld3, json_ltepegproof__qstack_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof_record_46_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_46_t T){
        return equal_ltepegproof_record_46((ltepegproof_record_46_t)x, (ltepegproof_record_46_t)y);
}

char * json_ltepegproof_record_46_ptr(pointer_t x, actual_ltepegproof_record_46_t T){
        return json_ltepegproof_record_46((ltepegproof_record_46_t)x);
}

actual_ltepegproof_record_46_t actual_ltepegproof_record_46(){
        actual_ltepegproof_record_46_t new = (actual_ltepegproof_record_46_t)safe_malloc(sizeof(struct actual_ltepegproof_record_46_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_46_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_46_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_46_ptr);
 

 
        return new;
 };

ltepegproof_record_46_t update_ltepegproof_record_46_project_1(ltepegproof_record_46_t x, uint8_t v){
        ltepegproof_record_46_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_46(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

ltepegproof_record_46_t update_ltepegproof_record_46_project_2(ltepegproof_record_46_t x, uint32_t v){
        ltepegproof_record_46_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_46(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

ltepegproof_record_46_t update_ltepegproof_record_46_project_3(ltepegproof_record_46_t x, ordstruct_adt__ordstruct_adt_t v){
        ltepegproof_record_46_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_ltepegproof_record_46(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

ltepegproof_record_46_t update_ltepegproof_record_46_project_4(ltepegproof_record_46_t x, ltepegproof__qstack_adt_t v){
        ltepegproof_record_46_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ltepegproof__qstack_adt(x->project_4);};}
        else {y = copy_ltepegproof_record_46(x); x->count--; y->project_4->count--;};
        y->project_4 = (ltepegproof__qstack_adt_t)v;
        return y;}



void release_ltepegproof_funtype_47(ltepegproof_funtype_47_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_47_t copy_ltepegproof_funtype_47(ltepegproof_funtype_47_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_47(ltepegproof_funtype_47_t x, ltepegproof_funtype_47_t y){
        return false;}

char* json_ltepegproof_funtype_47(ltepegproof_funtype_47_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_47\""); return result;}


ordstruct_adt__ordstruct_adt_t f_ltepegproof_closure_48(struct ltepegproof_closure_48_s * closure, ltepegproof__qstack_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_ltepegproof_closure_48(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_ltepegproof_closure_48(struct ltepegproof_closure_48_s * closure, ltepegproof__qstack_adt_t bvar){
        return h_ltepegproof_closure_48(bvar, closure->fvar_1, closure->fvar_2);}

extern ordstruct_adt__ordstruct_adt_t h_ltepegproof_closure_48(ltepegproof__qstack_adt_t ivar_6, ltepegproof_funtype_47_t ivar_3, ltepegproof_funtype_42_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ ltepegproof_funtype_42_t ivar_7;
        ivar_1->count++;
        ivar_3->count++;
        ivar_7 = (ltepegproof_funtype_42_t)ltepegproof__REDUCE_ordinal__2((ltepegproof_funtype_42_t)ivar_1, (ltepegproof_funtype_47_t)ivar_3);
        bool_t ivar_25;
        ivar_6->count++;
        ivar_25 = (bool_t)r_ltepegproof__qemptyp((ltepegproof__qstack_adt_t)ivar_6);
        if (ivar_25){ 
             release_ltepegproof_funtype_42(ivar_7);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_6);
} else {
        
             uint8_t ivar_29;
             ivar_6->count++;
             ivar_29 = (uint8_t)ltepegproof__qstack_adt_nonterm((ltepegproof__qstack_adt_t)ivar_6);
             uint32_t ivar_30;
             ivar_6->count++;
             ivar_30 = (uint32_t)ltepegproof__qstack_adt_pos((ltepegproof__qstack_adt_t)ivar_6);
             ltepegproof__qstack_adt_t ivar_31;
             ivar_6->count++;
             ivar_31 = (ltepegproof__qstack_adt_t)ltepegproof__qstack_adt_qpop((ltepegproof__qstack_adt_t)ivar_6);
             ordstruct_adt__ordstruct_adt_t ivar_55;
             ivar_55 = (ordstruct_adt__ordstruct_adt_t)ivar_7->ftbl->fptr(ivar_7, ivar_31);
             ivar_7->ftbl->rptr(ivar_7);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_29, ivar_30, ivar_55, ivar_6);
};

        return result;
}

ltepegproof_closure_48_t new_ltepegproof_closure_48(void){
        static struct ltepegproof_funtype_42_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepegproof_funtype_42_t, ltepegproof__qstack_adt_t))&f_ltepegproof_closure_48, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(ltepegproof_funtype_42_t, ltepegproof__qstack_adt_t))&m_ltepegproof_closure_48, .rptr =  (void (*)(ltepegproof_funtype_42_t))&release_ltepegproof_closure_48, .cptr = (ltepegproof_funtype_42_t (*)(ltepegproof_funtype_42_t))&copy_ltepegproof_closure_48};
        ltepegproof_closure_48_t tmp = (ltepegproof_closure_48_t) safe_malloc(sizeof(struct ltepegproof_closure_48_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegproof_closure_48(ltepegproof_funtype_42_t closure){
        ltepegproof_closure_48_t x = (ltepegproof_closure_48_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepegproof_funtype_47(x->fvar_1);
         release_ltepegproof_funtype_42(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegproof_closure_48_t copy_ltepegproof_closure_48(ltepegproof_closure_48_t x){
        ltepegproof_closure_48_t y = new_ltepegproof_closure_48();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ltepegproof_funtype_42_htbl_t new_htbl = (ltepegproof_funtype_42_htbl_t) safe_malloc(sizeof(struct ltepegproof_funtype_42_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegproof_funtype_42_hashentry_t * new_data = (ltepegproof_funtype_42_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegproof_funtype_42_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegproof_funtype_42_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepegproof_funtype_49(ltepegproof_funtype_49_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_49_t copy_ltepegproof_funtype_49(ltepegproof_funtype_49_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_49(ltepegproof_funtype_49_t x, ltepegproof_funtype_49_t y){
        return false;}

char* json_ltepegproof_funtype_49(ltepegproof_funtype_49_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_49\""); return result;}


ltepegproof_array_50_t new_ltepegproof_array_50(uint32_t size){
        ltepegproof_array_50_t tmp = (ltepegproof_array_50_t) safe_malloc(sizeof(struct ltepegproof_array_50_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_ltepegproof_array_50(ltepegproof_array_50_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_ltepegproof_array_50_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_array_50((ltepegproof_array_50_t)x);
}

ltepegproof_array_50_t copy_ltepegproof_array_50(ltepegproof_array_50_t x){
        ltepegproof_array_50_t tmp = new_ltepegproof_array_50(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_ltepegproof_array_50(ltepegproof_array_50_t x, ltepegproof_array_50_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_ltepegproof_array_50(ltepegproof_array_50_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint8(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltepegproof_array_50_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltepegproof_array_50((ltepegproof_array_50_t)x, (ltepegproof_array_50_t)y);
}

char * json_ltepegproof_array_50_ptr(pointer_t x, type_actual_t T){
        return json_ltepegproof_array_50((ltepegproof_array_50_t)x);
}

actual_ltepegproof_array_50_t actual_ltepegproof_array_50(){
        actual_ltepegproof_array_50_t new = (actual_ltepegproof_array_50_t)safe_malloc(sizeof(struct actual_ltepegproof_array_50_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_array_50_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_array_50_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_array_50_ptr);
 

 
        return new;
 };

ltepegproof_array_50_t update_ltepegproof_array_50(ltepegproof_array_50_t x, uint32_t i, uint8_t v){
        ltepegproof_array_50_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_ltepegproof_array_50(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

ltepegproof_array_50_t upgrade_ltepegproof_array_50(ltepegproof_array_50_t x, uint32_t i, uint8_t v){
        ltepegproof_array_50_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltepegproof_array_50_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltepegproof_array_50(x);}
           else {y = copy_ltepegproof_array_50(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




ltepegproof_array_51_t new_ltepegproof_array_51(uint32_t size){
        ltepegproof_array_51_t tmp = (ltepegproof_array_51_t) safe_malloc(sizeof(struct ltepegproof_array_51_s) + (size * sizeof(ltepeg__ent_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_ltepegproof_array_51(ltepegproof_array_51_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_ltepeg__ent_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_ltepegproof_array_51_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_array_51((ltepegproof_array_51_t)x);
}

ltepegproof_array_51_t copy_ltepegproof_array_51(ltepegproof_array_51_t x){
        ltepegproof_array_51_t tmp = new_ltepegproof_array_51(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ltepegproof_array_51(ltepegproof_array_51_t x, ltepegproof_array_51_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_ltepeg__ent_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_ltepegproof_array_51(ltepegproof_array_51_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_ltepeg__ent_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltepegproof_array_51_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltepegproof_array_51((ltepegproof_array_51_t)x, (ltepegproof_array_51_t)y);
}

char * json_ltepegproof_array_51_ptr(pointer_t x, type_actual_t T){
        return json_ltepegproof_array_51((ltepegproof_array_51_t)x);
}

actual_ltepegproof_array_51_t actual_ltepegproof_array_51(){
        actual_ltepegproof_array_51_t new = (actual_ltepegproof_array_51_t)safe_malloc(sizeof(struct actual_ltepegproof_array_51_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_array_51_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_array_51_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_array_51_ptr);
 

 
        return new;
 };

ltepegproof_array_51_t update_ltepegproof_array_51(ltepegproof_array_51_t x, uint32_t i, ltepeg__ent_adt_t v){
         ltepegproof_array_51_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ltepegproof_array_51(x);
                      x->count--;};
        ltepeg__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepeg__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

ltepegproof_array_51_t upgrade_ltepegproof_array_51(ltepegproof_array_51_t x, uint32_t i, ltepeg__ent_adt_t v){
         ltepegproof_array_51_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltepegproof_array_51_s) + (newmax * sizeof(ltepeg__ent_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltepegproof_array_51(x);} else {y = copy_ltepegproof_array_51(x);
                      x->count--;};
        ltepeg__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepeg__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}




ltepegproof_array_52_t new_ltepegproof_array_52(uint32_t size){
        ltepegproof_array_52_t tmp = (ltepegproof_array_52_t) safe_malloc(sizeof(struct ltepegproof_array_52_s) + (size * sizeof(ltepegproof_array_51_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_ltepegproof_array_52(ltepegproof_array_52_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_ltepegproof_array_51(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_ltepegproof_array_52_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_array_52((ltepegproof_array_52_t)x);
}

ltepegproof_array_52_t copy_ltepegproof_array_52(ltepegproof_array_52_t x){
        ltepegproof_array_52_t tmp = new_ltepegproof_array_52(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ltepegproof_array_52(ltepegproof_array_52_t x, ltepegproof_array_52_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_ltepegproof_array_51(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_ltepegproof_array_52(ltepegproof_array_52_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_ltepegproof_array_51(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltepegproof_array_52_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltepegproof_array_52((ltepegproof_array_52_t)x, (ltepegproof_array_52_t)y);
}

char * json_ltepegproof_array_52_ptr(pointer_t x, type_actual_t T){
        return json_ltepegproof_array_52((ltepegproof_array_52_t)x);
}

actual_ltepegproof_array_52_t actual_ltepegproof_array_52(){
        actual_ltepegproof_array_52_t new = (actual_ltepegproof_array_52_t)safe_malloc(sizeof(struct actual_ltepegproof_array_52_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_array_52_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_array_52_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_array_52_ptr);
 

 
        return new;
 };

ltepegproof_array_52_t update_ltepegproof_array_52(ltepegproof_array_52_t x, uint32_t i, ltepegproof_array_51_t v){
         ltepegproof_array_52_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ltepegproof_array_52(x);
                      x->count--;};
        ltepegproof_array_51_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepegproof_array_51(yelems[i]);};
         yelems[i] = v;
         return y;}

ltepegproof_array_52_t upgrade_ltepegproof_array_52(ltepegproof_array_52_t x, uint32_t i, ltepegproof_array_51_t v){
         ltepegproof_array_52_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltepegproof_array_52_s) + (newmax * sizeof(ltepegproof_array_51_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltepegproof_array_52(x);} else {y = copy_ltepegproof_array_52(x);
                      x->count--;};
        ltepegproof_array_51_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepegproof_array_51(yelems[i]);};
         yelems[i] = v;
         return y;}




bool_t f_ltepegproof_closure_53(struct ltepegproof_closure_53_s * closure, ltepegproof__qstack_adt_t bvar){
        bool_t result = h_ltepegproof_closure_53(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

bool_t m_ltepegproof_closure_53(struct ltepegproof_closure_53_s * closure, ltepegproof__qstack_adt_t bvar){
        return h_ltepegproof_closure_53(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern bool_t h_ltepegproof_closure_53(ltepegproof__qstack_adt_t ivar_7, ltepegproof_array_50_t ivar_3, uint32_t ivar_1, ltepegproof_array_52_t ivar_4, ltepeg__lang_spec_t ivar_2){
        bool_t result;
        bool_t ivar_70;
        ivar_7->count++;
        ivar_70 = (bool_t)r_ltepegproof__qpushp((ltepegproof__qstack_adt_t)ivar_7);
        if (ivar_70){ 
             uint8_t ivar_9;
             ivar_7->count++;
             ivar_9 = (uint8_t)ltepegproof__qstack_adt_nonterm((ltepegproof__qstack_adt_t)ivar_7);
             uint32_t ivar_10;
             ivar_7->count++;
             ivar_10 = (uint32_t)ltepegproof__qstack_adt_pos((ltepegproof__qstack_adt_t)ivar_7);
             ltepegproof__qstack_adt_t ivar_11;
             ivar_11 = (ltepegproof__qstack_adt_t)ltepegproof__qstack_adt_qpop((ltepegproof__qstack_adt_t)ivar_7);
             bool_t ivar_21;
             ivar_21 = (ivar_10 <= ivar_1);
             if (ivar_21){  
           bool_t ivar_26;
           bool_t ivar_28;
           ivar_11->count++;
           ivar_28 = (bool_t)ltepegproof__inqstack((uint8_t)ivar_9, (uint32_t)ivar_10, (ltepegproof__qstack_adt_t)ivar_11);
           ivar_26 = !ivar_28;
           if (ivar_26){   
           bool_t ivar_37;
           ltepeg__ent_adt_t ivar_50;
           ltepegproof_array_51_t ivar_42;
           ivar_42 = (ltepegproof_array_51_t)ivar_4->elems[ivar_10];
           ivar_42->count++;
           ivar_50 = (ltepeg__ent_adt_t)ivar_42->elems[ivar_9];
           ivar_50->count++;
           release_ltepegproof_array_51(ivar_42);
           ivar_37 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_50);
           if (ivar_37){    
            ltepegproof_funtype_49_t ivar_54;
            ivar_2->count++;
            ivar_3->count++;
            ivar_4->count++;
            ivar_54 = (ltepegproof_funtype_49_t)ltepegproof__good_qstackp((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepegproof_array_50_t)ivar_3, (ltepegproof_array_52_t)ivar_4);
            result = (bool_t)ivar_54->ftbl->fptr(ivar_54, ivar_11);
            ivar_54->ftbl->rptr(ivar_54);
} else {
           
            release_ltepegproof__qstack_adt(ivar_11);
            result = (bool_t) false;
};
} else {
           
           release_ltepegproof__qstack_adt(ivar_11);
           result = (bool_t) false;
};
} else {
             
           release_ltepegproof__qstack_adt(ivar_11);
           result = (bool_t) false;
};
} else {
        
             release_ltepegproof__qstack_adt(ivar_7);
             result = (bool_t) true;
};

        return result;
}

ltepegproof_closure_53_t new_ltepegproof_closure_53(void){
        static struct ltepegproof_funtype_49_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepegproof_funtype_49_t, ltepegproof__qstack_adt_t))&f_ltepegproof_closure_53, .mptr = (bool_t (*)(ltepegproof_funtype_49_t, ltepegproof__qstack_adt_t))&m_ltepegproof_closure_53, .rptr =  (void (*)(ltepegproof_funtype_49_t))&release_ltepegproof_closure_53, .cptr = (ltepegproof_funtype_49_t (*)(ltepegproof_funtype_49_t))&copy_ltepegproof_closure_53};
        ltepegproof_closure_53_t tmp = (ltepegproof_closure_53_t) safe_malloc(sizeof(struct ltepegproof_closure_53_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegproof_closure_53(ltepegproof_funtype_49_t closure){
        ltepegproof_closure_53_t x = (ltepegproof_closure_53_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepegproof_array_50(x->fvar_1);
         release_ltepegproof_array_52(x->fvar_3);
         release_ltepeg__lang_spec(x->fvar_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegproof_closure_53_t copy_ltepegproof_closure_53(ltepegproof_closure_53_t x){
        ltepegproof_closure_53_t y = new_ltepegproof_closure_53();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        if (x->htbl != NULL){
            ltepegproof_funtype_49_htbl_t new_htbl = (ltepegproof_funtype_49_htbl_t) safe_malloc(sizeof(struct ltepegproof_funtype_49_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegproof_funtype_49_hashentry_t * new_data = (ltepegproof_funtype_49_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegproof_funtype_49_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegproof_funtype_49_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepegproof_record_54_t new_ltepegproof_record_54(void){
        ltepegproof_record_54_t tmp = (ltepegproof_record_54_t) safe_malloc(sizeof(struct ltepegproof_record_54_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_54(ltepegproof_record_54_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepegproof__qstack_adt(x->project_1);
         release_ltepegproof__parsetree_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_54_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_54((ltepegproof_record_54_t)x);
}

ltepegproof_record_54_t copy_ltepegproof_record_54(ltepegproof_record_54_t x){
        ltepegproof_record_54_t y = new_ltepegproof_record_54();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = (uint32_t)x->project_3;
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepegproof_record_54(ltepegproof_record_54_t x, ltepegproof_record_54_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepegproof__qstack_adt(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && equal_ltepegproof__parsetree_adt(x->project_4, y->project_4);
        return tmp;}

char * json_ltepegproof_record_54(ltepegproof_record_54_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepegproof__qstack_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_ltepegproof__parsetree_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof_record_54_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_54_t T){
        return equal_ltepegproof_record_54((ltepegproof_record_54_t)x, (ltepegproof_record_54_t)y);
}

char * json_ltepegproof_record_54_ptr(pointer_t x, actual_ltepegproof_record_54_t T){
        return json_ltepegproof_record_54((ltepegproof_record_54_t)x);
}

actual_ltepegproof_record_54_t actual_ltepegproof_record_54(){
        actual_ltepegproof_record_54_t new = (actual_ltepegproof_record_54_t)safe_malloc(sizeof(struct actual_ltepegproof_record_54_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_54_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_54_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_54_ptr);
 

 
        return new;
 };

ltepegproof_record_54_t update_ltepegproof_record_54_project_1(ltepegproof_record_54_t x, ltepegproof__qstack_adt_t v){
        ltepegproof_record_54_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepegproof__qstack_adt(x->project_1);};}
        else {y = copy_ltepegproof_record_54(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepegproof__qstack_adt_t)v;
        return y;}

ltepegproof_record_54_t update_ltepegproof_record_54_project_2(ltepegproof_record_54_t x, uint8_t v){
        ltepegproof_record_54_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_54(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

ltepegproof_record_54_t update_ltepegproof_record_54_project_3(ltepegproof_record_54_t x, uint32_t v){
        ltepegproof_record_54_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_54(x); x->count--;};
        y->project_3 = (uint32_t)v;
        return y;}

ltepegproof_record_54_t update_ltepegproof_record_54_project_4(ltepegproof_record_54_t x, ltepegproof__parsetree_adt_t v){
        ltepegproof_record_54_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_ltepegproof__parsetree_adt(x->project_4);};}
        else {y = copy_ltepegproof_record_54(x); x->count--; y->project_4->count--;};
        y->project_4 = (ltepegproof__parsetree_adt_t)v;
        return y;}



void release_ltepegproof_funtype_55(ltepegproof_funtype_55_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_55_t copy_ltepegproof_funtype_55(ltepegproof_funtype_55_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_55(ltepegproof_funtype_55_t x, ltepegproof_funtype_55_t y){
        return false;}

char* json_ltepegproof_funtype_55(ltepegproof_funtype_55_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_55\""); return result;}


bool_t f_ltepegproof_closure_56(struct ltepegproof_closure_56_s * closure, ltepegproof_record_54_t bvar){
        ltepegproof__qstack_adt_t bvar_1;
        bvar_1 = (ltepegproof__qstack_adt_t)bvar->project_1;
        bvar->project_1->count++;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        uint32_t bvar_3;
        bvar_3 = (uint32_t)bvar->project_3;
        ltepegproof__parsetree_adt_t bvar_4;
        bvar_4 = (ltepegproof__parsetree_adt_t)bvar->project_4;
        bvar->project_4->count++;
        release_ltepegproof_record_54(bvar);
        bool_t result = h_ltepegproof_closure_56(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_ltepegproof__qstack_adt(bvar_1);
        release_ltepegproof__parsetree_adt(bvar_4);
        return result;}

bool_t m_ltepegproof_closure_56(struct ltepegproof_closure_56_s * closure, ltepegproof__qstack_adt_t bvar_1, uint8_t bvar_2, uint32_t bvar_3, ltepegproof__parsetree_adt_t bvar_4){
        return h_ltepegproof_closure_56(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_ltepegproof_closure_56(ltepegproof__qstack_adt_t ivar_5, uint8_t ivar_6, uint32_t ivar_7, ltepegproof__parsetree_adt_t ivar_8, ltepegproof_array_50_t ivar_3, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2){
        bool_t result;
        bool_t ivar_148;
        ivar_8->count++;
        ivar_148 = (bool_t)r_ltepegproof__zerop((ltepegproof__parsetree_adt_t)ivar_8);
        if (ivar_148){ 
             ltepeg__ent_adt_t ivar_10;
             ivar_10 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_8);
             ltepeg__prepeg_adt_t ivar_14;
             ivar_14 = (ltepeg__prepeg_adt_t)ivar_2->elems[ivar_6];
             ivar_14->count++;
             bool_t ivar_31;
             ivar_14->count++;
             ivar_31 = (bool_t)r_ltepeg__epsilonp((ltepeg__prepeg_adt_t)ivar_14);
             if (ivar_31){  
           release_ltepegproof__qstack_adt(ivar_5);
           release_ltepeg__prepeg_adt(ivar_14);
           ltepeg__ent_adt_t ivar_20;
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
           ivar_20 = (ltepeg__ent_adt_t)ltepeg__good((uint64_t)ivar_24, (uint32_t)ivar_25);
           result = (bool_t) equal_ltepeg__ent_adt(ivar_10, ivar_20);
} else {
             
           bool_t ivar_43;
           ivar_14->count++;
           ivar_43 = (bool_t)r_ltepeg__failurep((ltepeg__prepeg_adt_t)ivar_14);
           if (ivar_43){   
           release_ltepegproof__qstack_adt(ivar_5);
           release_ltepeg__prepeg_adt(ivar_14);
           ltepeg__ent_adt_t ivar_36;
           uint8_t ivar_41;
           ivar_41 = (uint8_t)0;
           uint64_t ivar_39;
           //copying to uint64 from uint8;
           ivar_39 = (uint64_t)ivar_41;
           ivar_36 = (ltepeg__ent_adt_t)ltepeg__fail((uint64_t)ivar_39);
           result = (bool_t) equal_ltepeg__ent_adt(ivar_10, ivar_36);
} else {
           
           bool_t ivar_89;
           ivar_14->count++;
           ivar_89 = (bool_t)r_ltepeg__anyp((ltepeg__prepeg_adt_t)ivar_14);
           if (ivar_89){    
            release_ltepegproof__qstack_adt(ivar_5);
            ltepegproof_funtype_57_t ivar_47;
            ivar_47 = (ltepegproof_funtype_57_t)ltepeg__prepeg_adt_p((ltepeg__prepeg_adt_t)ivar_14);
            bool_t ivar_53;
            bool_t ivar_54;
            ivar_54 = (ivar_7 < ivar_1);
            if (ivar_54){     
             uint8_t ivar_67;
             ivar_67 = (uint8_t)ivar_3->elems[ivar_7];
             ivar_53 = (bool_t)ivar_47->ftbl->fptr(ivar_47, ivar_67);
             ivar_47->ftbl->rptr(ivar_47);
} else {
            
             release_ltepegproof_funtype_57(ivar_47);
             ivar_53 = (bool_t) false;
};
            if (ivar_53){     
             ltepeg__ent_adt_t ivar_70;
             uint8_t ivar_79;
             ivar_79 = (uint8_t)0;
             uint64_t ivar_74;
             //copying to uint64 from uint8;
             ivar_74 = (uint64_t)ivar_79;
             uint8_t ivar_78;
             ivar_78 = (uint8_t)1;
             uint32_t ivar_75;
             //copying to uint32 from uint8;
             ivar_75 = (uint32_t)ivar_78;
             ivar_70 = (ltepeg__ent_adt_t)ltepeg__good((uint64_t)ivar_74, (uint32_t)ivar_75);
             result = (bool_t) equal_ltepeg__ent_adt(ivar_10, ivar_70);
} else {
            
             ltepeg__ent_adt_t ivar_82;
             uint8_t ivar_87;
             ivar_87 = (uint8_t)0;
             uint64_t ivar_85;
             //copying to uint64 from uint8;
             ivar_85 = (uint64_t)ivar_87;
             ivar_82 = (ltepeg__ent_adt_t)ltepeg__fail((uint64_t)ivar_85);
             result = (bool_t) equal_ltepeg__ent_adt(ivar_10, ivar_82);
};
} else {
           
            bool_t ivar_131;
            ivar_14->count++;
            ivar_131 = (bool_t)r_ltepeg__terminalp((ltepeg__prepeg_adt_t)ivar_14);
            if (ivar_131){     
             release_ltepegproof__qstack_adt(ivar_5);
             uint8_t ivar_93;
             ivar_93 = (uint8_t)ltepeg__prepeg_adt_a((ltepeg__prepeg_adt_t)ivar_14);
             bool_t ivar_97;
             bool_t ivar_98;
             ivar_98 = (ivar_7 < ivar_1);
             if (ivar_98){      
              uint8_t ivar_103;
              ivar_103 = (uint8_t)ivar_3->elems[ivar_7];
              ivar_97 = (ivar_103 == ivar_93);
} else {
             
              ivar_97 = (bool_t) false;
};
             if (ivar_97){      
              ltepeg__ent_adt_t ivar_112;
              uint8_t ivar_121;
              ivar_121 = (uint8_t)0;
              uint64_t ivar_116;
              //copying to uint64 from uint8;
              ivar_116 = (uint64_t)ivar_121;
              uint8_t ivar_120;
              ivar_120 = (uint8_t)1;
              uint32_t ivar_117;
              //copying to uint32 from uint8;
              ivar_117 = (uint32_t)ivar_120;
              ivar_112 = (ltepeg__ent_adt_t)ltepeg__good((uint64_t)ivar_116, (uint32_t)ivar_117);
              result = (bool_t) equal_ltepeg__ent_adt(ivar_10, ivar_112);
} else {
             
              ltepeg__ent_adt_t ivar_124;
              uint8_t ivar_129;
              ivar_129 = (uint8_t)0;
              uint64_t ivar_127;
              //copying to uint64 from uint8;
              ivar_127 = (uint64_t)ivar_129;
              ivar_124 = (ltepeg__ent_adt_t)ltepeg__fail((uint64_t)ivar_127);
              result = (bool_t) equal_ltepeg__ent_adt(ivar_10, ivar_124);
};
} else {
            
             release_ltepeg__prepeg_adt(ivar_14);
             bool_t ivar_135;
             ivar_135 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_10);
             if (ivar_135){      
              result = (bool_t)ltepegproof__inqstack((uint8_t)ivar_6, (uint32_t)ivar_7, (ltepegproof__qstack_adt_t)ivar_5);
} else {
             
              release_ltepegproof__qstack_adt(ivar_5);
              result = (bool_t) false;
};
};
};
};
};
} else {
        
             bool_t ivar_222;
             ivar_8->count++;
             ivar_222 = (bool_t)r_ltepegproof__onep((ltepegproof__parsetree_adt_t)ivar_8);
             if (ivar_222){  
           ltepeg__ent_adt_t ivar_152;
           ivar_8->count++;
           ivar_152 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_8);
           ltepegproof__parsetree_adt_t ivar_153;
           ivar_153 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subone((ltepegproof__parsetree_adt_t)ivar_8);
           ltepeg__prepeg_adt_t ivar_160;
           ivar_160 = (ltepeg__prepeg_adt_t)ivar_2->elems[ivar_6];
           ivar_160->count++;
           bool_t ivar_218;
           ivar_160->count++;
           ivar_218 = (bool_t)r_ltepeg__ltep((ltepeg__prepeg_adt_t)ivar_160);
           if (ivar_218){   
           uint8_t ivar_165;
           ivar_160->count++;
           ivar_165 = (uint8_t)ltepeg__prepeg_adt_fst((ltepeg__prepeg_adt_t)ivar_160);
           bool_t ivar_177;
           ltepegproof_funtype_55_t ivar_192;
           ivar_2->count++;
           ivar_3->count++;
           ivar_192 = (ltepegproof_funtype_55_t)ltepegproof__good_parsetreep((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepegproof_array_50_t)ivar_3);
           ltepegproof__qstack_adt_t ivar_201;
           ivar_201 = (ltepegproof__qstack_adt_t)ltepegproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (ltepegproof__qstack_adt_t)ivar_5);
           ivar_153->count++;
           ivar_177 = (bool_t)ivar_192->ftbl->mptr(ivar_192, ivar_201, ivar_165, ivar_7, ivar_153);
           ivar_192->ftbl->rptr(ivar_192);
           if (ivar_177){    
            bool_t ivar_205;
            ivar_205 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_152);
            if (ivar_205){     
             ltepeg__ent_adt_t ivar_215;
             ivar_215 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_153);
             result = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_215);
} else {
            
             release_ltepegproof__parsetree_adt(ivar_153);
             result = (bool_t) false;
};
} else {
           
            release_ltepegproof__parsetree_adt(ivar_153);
            release_ltepeg__ent_adt(ivar_152);
            result = (bool_t) false;
};
} else {
           
           release_ltepegproof__parsetree_adt(ivar_153);
           release_ltepegproof__qstack_adt(ivar_5);
           release_ltepeg__ent_adt(ivar_152);
           release_ltepeg__prepeg_adt(ivar_160);
           result = (bool_t) false;
};
} else {
             
           ltepeg__ent_adt_t ivar_226;
           ivar_8->count++;
           ivar_226 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_8);
           ltepegproof__parsetree_adt_t ivar_227;
           ivar_8->count++;
           ivar_227 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subone((ltepegproof__parsetree_adt_t)ivar_8);
           ltepegproof__parsetree_adt_t ivar_228;
           ivar_228 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subtwo((ltepegproof__parsetree_adt_t)ivar_8);
           ltepeg__prepeg_adt_t ivar_238;
           ivar_238 = (ltepeg__prepeg_adt_t)ivar_2->elems[ivar_6];
           ivar_238->count++;
           bool_t ivar_591;
           ivar_238->count++;
           ivar_591 = (bool_t)r_ltepeg__ltep((ltepeg__prepeg_adt_t)ivar_238);
           if (ivar_591){   
           uint8_t ivar_243;
           ivar_238->count++;
           ivar_243 = (uint8_t)ltepeg__prepeg_adt_fst((ltepeg__prepeg_adt_t)ivar_238);
           uint8_t ivar_244;
           ivar_238->count++;
           ivar_244 = (uint8_t)ltepeg__prepeg_adt_lthen((ltepeg__prepeg_adt_t)ivar_238);
           uint8_t ivar_245;
           ivar_245 = (uint8_t)ltepeg__prepeg_adt_lelse((ltepeg__prepeg_adt_t)ivar_238);
           bool_t ivar_255;
           ltepegproof_funtype_55_t ivar_270;
           ivar_2->count++;
           ivar_3->count++;
           ivar_270 = (ltepegproof_funtype_55_t)ltepegproof__good_parsetreep((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepegproof_array_50_t)ivar_3);
           ltepegproof__qstack_adt_t ivar_279;
           ivar_5->count++;
           ivar_279 = (ltepegproof__qstack_adt_t)ltepegproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (ltepegproof__qstack_adt_t)ivar_5);
           ivar_227->count++;
           ivar_255 = (bool_t)ivar_270->ftbl->mptr(ivar_270, ivar_279, ivar_243, ivar_7, ivar_227);
           ivar_270->ftbl->rptr(ivar_270);
           if (ivar_255){    
            bool_t ivar_283;
            ltepeg__ent_adt_t ivar_289;
            ivar_227->count++;
            ivar_289 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_227);
            ivar_283 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_289);
            if (ivar_283){     
             bool_t ivar_290;
             ltepegproof_funtype_58_t ivar_298;
             ivar_298 = (ltepegproof_funtype_58_t)ltepeg__good_good_entryp((uint32_t)ivar_1, (uint32_t)ivar_7);
             ltepeg__ent_adt_t ivar_305;
             ivar_227->count++;
             ivar_305 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_227);
             ivar_290 = (bool_t)ivar_298->ftbl->fptr(ivar_298, ivar_305);
             ivar_298->ftbl->rptr(ivar_298);
             if (ivar_290){      
              bool_t ivar_306;
              ltepegproof_funtype_55_t ivar_330;
              ivar_2->count++;
              ivar_3->count++;
              ivar_330 = (ltepegproof_funtype_55_t)ltepegproof__good_parsetreep((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepegproof_array_50_t)ivar_3);
              ltepegproof__qstack_adt_t ivar_339;
              ivar_339 = (ltepegproof__qstack_adt_t)ltepegproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (ltepegproof__qstack_adt_t)ivar_5);
              mpq_ptr_t ivar_343;
              uint32_t ivar_320;
              ltepeg__ent_adt_t ivar_326;
              ivar_227->count++;
              ivar_326 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_227);
              ivar_320 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_326);
              mpz_t tmp94846;
              mpz_init(tmp94846);
              mpz_set_ui(tmp94846, (uint64_t)ivar_7);
              mpz_add_ui(tmp94846, tmp94846, (uint64_t)ivar_320);
              mpq_mk_set_z(ivar_343, tmp94846);
              mpz_clear(tmp94846);
              uint32_t ivar_341;
              //copying to uint32 from mpq;
              ivar_341 = (uint32_t)mpq_get_ui(ivar_343);
              mpq_clear(ivar_343);
              ivar_228->count++;
              ivar_306 = (bool_t)ivar_330->ftbl->mptr(ivar_330, ivar_339, ivar_244, ivar_341, ivar_228);
              ivar_330->ftbl->rptr(ivar_330);
              if (ivar_306){       
               bool_t ivar_344;
               ltepeg__ent_adt_t ivar_350;
               ivar_228->count++;
               ivar_350 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_228);
               ivar_344 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_350);
               if (ivar_344){        
                bool_t ivar_351;
                ivar_226->count++;
                ivar_351 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_226);
                if (ivar_351){         
                 uint64_t ivar_356;
                 ivar_356 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_226);
                 mpz_ptr_t ivar_357;
                 uint8_t ivar_361;
                 ivar_361 = (uint8_t)1;
                 mpq_ptr_t ivar_362;
                 uint64_t ivar_383;
                 ltepeg__ent_adt_t ivar_370;
                 ivar_370 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_227);
                 ivar_383 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_370);
                 mpq_ptr_t ivar_378;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_378, ivar_383);
                 uint64_t ivar_382;
                 ltepeg__ent_adt_t ivar_376;
                 ivar_376 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_228);
                 ivar_382 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_376);
                 mpq_ptr_t ivar_379;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_379, ivar_382);
                 ivar_362 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_378, (mpq_ptr_t)ivar_379);
                 mpz_mk_set_q(ivar_357, ivar_362);
                 mpz_add_ui(ivar_357, ivar_357, ivar_361);
                 int64_t tmp94853 = mpz_cmp_ui(ivar_357, ivar_356);
                 result = (tmp94853 == 0);
} else {
                
                 release_ltepeg__ent_adt(ivar_226);
                 release_ltepegproof__parsetree_adt(ivar_228);
                 release_ltepegproof__parsetree_adt(ivar_227);
                 result = (bool_t) false;
};
} else {
               
                bool_t ivar_387;
                ltepeg__ent_adt_t ivar_393;
                ivar_228->count++;
                ivar_393 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_228);
                ivar_387 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_393);
                if (ivar_387){         
                 bool_t ivar_394;
                 ivar_226->count++;
                 ivar_394 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_226);
                 if (ivar_394){          
                  uint64_t ivar_399;
                  ivar_399 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_226);
                  mpz_ptr_t ivar_400;
                  uint8_t ivar_404;
                  ivar_404 = (uint8_t)1;
                  mpq_ptr_t ivar_405;
                  uint64_t ivar_426;
                  ltepeg__ent_adt_t ivar_413;
                  ivar_413 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_227);
                  ivar_426 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_413);
                  mpq_ptr_t ivar_421;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_421, ivar_426);
                  uint64_t ivar_425;
                  ltepeg__ent_adt_t ivar_419;
                  ivar_419 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_228);
                  ivar_425 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_419);
                  mpq_ptr_t ivar_422;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_422, ivar_425);
                  ivar_405 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_421, (mpq_ptr_t)ivar_422);
                  mpz_mk_set_q(ivar_400, ivar_405);
                  mpz_add_ui(ivar_400, ivar_400, ivar_404);
                  int64_t tmp94866 = mpz_cmp_ui(ivar_400, ivar_399);
                  result = (tmp94866 == 0);
} else {
                 
                  release_ltepeg__ent_adt(ivar_226);
                  release_ltepegproof__parsetree_adt(ivar_228);
                  release_ltepegproof__parsetree_adt(ivar_227);
                  result = (bool_t) false;
};
} else {
                
                 release_ltepegproof__parsetree_adt(ivar_227);
                 bool_t ivar_430;
                 ltepeg__ent_adt_t ivar_437;
                 ivar_437 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_228);
                 ivar_430 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_437);
                 if (ivar_430){          
                  result = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_226);
} else {
                 
                  release_ltepeg__ent_adt(ivar_226);
                  result = (bool_t) false;
};
};
};
} else {
              
               release_ltepeg__ent_adt(ivar_226);
               release_ltepegproof__parsetree_adt(ivar_228);
               release_ltepegproof__parsetree_adt(ivar_227);
               result = (bool_t) false;
};
} else {
             
              release_ltepegproof__parsetree_adt(ivar_228);
              release_ltepegproof__parsetree_adt(ivar_227);
              release_ltepegproof__qstack_adt(ivar_5);
              release_ltepeg__ent_adt(ivar_226);
              result = (bool_t) false;
};
} else {
            
             bool_t ivar_444;
             ltepeg__ent_adt_t ivar_450;
             ivar_227->count++;
             ivar_450 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_227);
             ivar_444 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_450);
             if (ivar_444){      
              bool_t ivar_451;
              ltepegproof_funtype_55_t ivar_466;
              ivar_2->count++;
              ivar_3->count++;
              ivar_466 = (ltepegproof_funtype_55_t)ltepegproof__good_parsetreep((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepegproof_array_50_t)ivar_3);
              ltepegproof__qstack_adt_t ivar_475;
              ivar_475 = (ltepegproof__qstack_adt_t)ltepegproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (ltepegproof__qstack_adt_t)ivar_5);
              ivar_228->count++;
              ivar_451 = (bool_t)ivar_466->ftbl->mptr(ivar_466, ivar_475, ivar_245, ivar_7, ivar_228);
              ivar_466->ftbl->rptr(ivar_466);
              if (ivar_451){       
               bool_t ivar_479;
               ltepeg__ent_adt_t ivar_485;
               ivar_228->count++;
               ivar_485 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_228);
               ivar_479 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_485);
               if (ivar_479){        
                bool_t ivar_486;
                ivar_226->count++;
                ivar_486 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_226);
                if (ivar_486){         
                 uint64_t ivar_491;
                 ivar_491 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_226);
                 mpz_ptr_t ivar_492;
                 uint8_t ivar_496;
                 ivar_496 = (uint8_t)1;
                 mpq_ptr_t ivar_497;
                 uint64_t ivar_518;
                 ltepeg__ent_adt_t ivar_505;
                 ivar_505 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_227);
                 ivar_518 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_505);
                 mpq_ptr_t ivar_513;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_513, ivar_518);
                 uint64_t ivar_517;
                 ltepeg__ent_adt_t ivar_511;
                 ivar_511 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_228);
                 ivar_517 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_511);
                 mpq_ptr_t ivar_514;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_514, ivar_517);
                 ivar_497 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_513, (mpq_ptr_t)ivar_514);
                 mpz_mk_set_q(ivar_492, ivar_497);
                 mpz_add_ui(ivar_492, ivar_492, ivar_496);
                 int64_t tmp94922 = mpz_cmp_ui(ivar_492, ivar_491);
                 result = (tmp94922 == 0);
} else {
                
                 release_ltepeg__ent_adt(ivar_226);
                 release_ltepegproof__parsetree_adt(ivar_228);
                 release_ltepegproof__parsetree_adt(ivar_227);
                 result = (bool_t) false;
};
} else {
               
                bool_t ivar_522;
                ltepeg__ent_adt_t ivar_528;
                ivar_228->count++;
                ivar_528 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_228);
                ivar_522 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_528);
                if (ivar_522){         
                 bool_t ivar_529;
                 ivar_226->count++;
                 ivar_529 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_226);
                 if (ivar_529){          
                  uint64_t ivar_534;
                  ivar_534 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_226);
                  mpz_ptr_t ivar_535;
                  uint8_t ivar_539;
                  ivar_539 = (uint8_t)1;
                  mpq_ptr_t ivar_540;
                  uint64_t ivar_561;
                  ltepeg__ent_adt_t ivar_548;
                  ivar_548 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_227);
                  ivar_561 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_548);
                  mpq_ptr_t ivar_556;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_556, ivar_561);
                  uint64_t ivar_560;
                  ltepeg__ent_adt_t ivar_554;
                  ivar_554 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_228);
                  ivar_560 = (uint64_t)ltepeg__ent_adt_dep((ltepeg__ent_adt_t)ivar_554);
                  mpq_ptr_t ivar_557;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_557, ivar_560);
                  ivar_540 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_556, (mpq_ptr_t)ivar_557);
                  mpz_mk_set_q(ivar_535, ivar_540);
                  mpz_add_ui(ivar_535, ivar_535, ivar_539);
                  int64_t tmp94935 = mpz_cmp_ui(ivar_535, ivar_534);
                  result = (tmp94935 == 0);
} else {
                 
                  release_ltepeg__ent_adt(ivar_226);
                  release_ltepegproof__parsetree_adt(ivar_228);
                  release_ltepegproof__parsetree_adt(ivar_227);
                  result = (bool_t) false;
};
} else {
                
                 release_ltepegproof__parsetree_adt(ivar_227);
                 bool_t ivar_565;
                 ltepeg__ent_adt_t ivar_572;
                 ivar_572 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_228);
                 ivar_565 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_572);
                 if (ivar_565){          
                  result = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_226);
} else {
                 
                  release_ltepeg__ent_adt(ivar_226);
                  result = (bool_t) false;
};
};
};
} else {
              
               release_ltepeg__ent_adt(ivar_226);
               release_ltepegproof__parsetree_adt(ivar_228);
               release_ltepegproof__parsetree_adt(ivar_227);
               result = (bool_t) false;
};
} else {
             
              release_ltepegproof__qstack_adt(ivar_5);
              release_ltepegproof__parsetree_adt(ivar_228);
              bool_t ivar_578;
              ltepeg__ent_adt_t ivar_585;
              ivar_585 = (ltepeg__ent_adt_t)ltepegproof__parsetree_adt_entry((ltepegproof__parsetree_adt_t)ivar_227);
              ivar_578 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_585);
              if (ivar_578){       
               result = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_226);
} else {
              
               release_ltepeg__ent_adt(ivar_226);
               result = (bool_t) false;
};
};
};
} else {
           
            release_ltepegproof__parsetree_adt(ivar_228);
            release_ltepegproof__parsetree_adt(ivar_227);
            release_ltepegproof__qstack_adt(ivar_5);
            release_ltepeg__ent_adt(ivar_226);
            result = (bool_t) false;
};
} else {
           
           release_ltepegproof__parsetree_adt(ivar_228);
           release_ltepegproof__parsetree_adt(ivar_227);
           release_ltepegproof__qstack_adt(ivar_5);
           release_ltepeg__ent_adt(ivar_226);
           release_ltepeg__prepeg_adt(ivar_238);
           result = (bool_t) false;
};
};
};

        return result;
}

ltepegproof_closure_56_t new_ltepegproof_closure_56(void){
        static struct ltepegproof_funtype_55_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepegproof_funtype_55_t, ltepegproof_record_54_t))&f_ltepegproof_closure_56, .mptr = (bool_t (*)(ltepegproof_funtype_55_t, ltepegproof__qstack_adt_t, uint8_t, uint32_t, ltepegproof__parsetree_adt_t))&m_ltepegproof_closure_56, .rptr =  (void (*)(ltepegproof_funtype_55_t))&release_ltepegproof_closure_56, .cptr = (ltepegproof_funtype_55_t (*)(ltepegproof_funtype_55_t))&copy_ltepegproof_closure_56};
        ltepegproof_closure_56_t tmp = (ltepegproof_closure_56_t) safe_malloc(sizeof(struct ltepegproof_closure_56_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegproof_closure_56(ltepegproof_funtype_55_t closure){
        ltepegproof_closure_56_t x = (ltepegproof_closure_56_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepegproof_array_50(x->fvar_1);
         release_ltepeg__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegproof_closure_56_t copy_ltepegproof_closure_56(ltepegproof_closure_56_t x){
        ltepegproof_closure_56_t y = new_ltepegproof_closure_56();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            ltepegproof_funtype_55_htbl_t new_htbl = (ltepegproof_funtype_55_htbl_t) safe_malloc(sizeof(struct ltepegproof_funtype_55_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegproof_funtype_55_hashentry_t * new_data = (ltepegproof_funtype_55_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegproof_funtype_55_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegproof_funtype_55_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepegproof_funtype_57(ltepegproof_funtype_57_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_57_t copy_ltepegproof_funtype_57(ltepegproof_funtype_57_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltepegproof_funtype_57(ltepegproof_funtype_57_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltepegproof_funtype_57_hashentry_t data = htbl->data[hashindex];
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

ltepegproof_funtype_57_t dupdate_ltepegproof_funtype_57(ltepegproof_funtype_57_t a, uint8_t i, bool_t v){
        ltepegproof_funtype_57_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltepegproof_funtype_57_htbl_t)safe_malloc(sizeof(struct ltepegproof_funtype_57_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltepegproof_funtype_57_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltepegproof_funtype_57_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltepegproof_funtype_57_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltepegproof_funtype_57_hashentry_t * new_data = (ltepegproof_funtype_57_hashentry_t *)safe_malloc(new_size * sizeof(struct ltepegproof_funtype_57_hashentry_s));
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
                                new_data[new_loc].value = (bool_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_ltepegproof_funtype_57(htbl, i, ihash);
        ltepegproof_funtype_57_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

ltepegproof_funtype_57_t update_ltepegproof_funtype_57(ltepegproof_funtype_57_t a, uint8_t i, bool_t v){
        if (a->count == 1){
                return dupdate_ltepegproof_funtype_57(a, i, v);
            } else {
                ltepegproof_funtype_57_t x = copy_ltepegproof_funtype_57(a);
                a->count--;
                return dupdate_ltepegproof_funtype_57(x, i, v);
            }}

bool_t equal_ltepegproof_funtype_57(ltepegproof_funtype_57_t x, ltepegproof_funtype_57_t y){
        return false;}

char* json_ltepegproof_funtype_57(ltepegproof_funtype_57_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_57\""); return result;}

void release_ltepegproof_funtype_58(ltepegproof_funtype_58_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_58_t copy_ltepegproof_funtype_58(ltepegproof_funtype_58_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_58(ltepegproof_funtype_58_t x, ltepegproof_funtype_58_t y){
        return false;}

char* json_ltepegproof_funtype_58(ltepegproof_funtype_58_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_58\""); return result;}


ltepegproof_record_59_t new_ltepegproof_record_59(void){
        ltepegproof_record_59_t tmp = (ltepegproof_record_59_t) safe_malloc(sizeof(struct ltepegproof_record_59_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_59(ltepegproof_record_59_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepegproof_array_52(x->scaf);
         release_ltepeg__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_59_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_59((ltepegproof_record_59_t)x);
}

ltepegproof_record_59_t copy_ltepegproof_record_59(ltepegproof_record_59_t x){
        ltepegproof_record_59_t y = new_ltepegproof_record_59();
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->depth = (uint64_t)x->depth;
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->lflag = (bool_t)x->lflag;
        y->count = 1;
        return y;}

bool_t equal_ltepegproof_record_59(ltepegproof_record_59_t x, ltepegproof_record_59_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepegproof_array_52(x->scaf, y->scaf);
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && equal_ltepeg__ent_adt(x->stack, y->stack);
        tmp = tmp && x->lflag == y->lflag;
        return tmp;}

char * json_ltepegproof_record_59(ltepegproof_record_59_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(16);
         sprintf(fld0, "\"scaf\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepegproof_array_52(x->scaf));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"depth\" : ");
        tmp[1] = safe_strcat(fld1, json_uint64(x->depth));
        char * fld2 = safe_malloc(17);
         sprintf(fld2, "\"stack\" : ");
        tmp[2] = safe_strcat(fld2, json_ltepeg__ent_adt(x->stack));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"lflag\" : ");
        tmp[3] = safe_strcat(fld3, json_bool(x->lflag));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof_record_59_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_59_t T){
        return equal_ltepegproof_record_59((ltepegproof_record_59_t)x, (ltepegproof_record_59_t)y);
}

char * json_ltepegproof_record_59_ptr(pointer_t x, actual_ltepegproof_record_59_t T){
        return json_ltepegproof_record_59((ltepegproof_record_59_t)x);
}

actual_ltepegproof_record_59_t actual_ltepegproof_record_59(){
        actual_ltepegproof_record_59_t new = (actual_ltepegproof_record_59_t)safe_malloc(sizeof(struct actual_ltepegproof_record_59_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_59_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_59_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_59_ptr);
 

 
        return new;
 };

ltepegproof_record_59_t update_ltepegproof_record_59_scaf(ltepegproof_record_59_t x, ltepegproof_array_52_t v){
        ltepegproof_record_59_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_ltepegproof_array_52(x->scaf);};}
        else {y = copy_ltepegproof_record_59(x); x->count--; y->scaf->count--;};
        y->scaf = (ltepegproof_array_52_t)v;
        return y;}

ltepegproof_record_59_t update_ltepegproof_record_59_depth(ltepegproof_record_59_t x, uint64_t v){
        ltepegproof_record_59_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_59(x); x->count--;};
        y->depth = (uint64_t)v;
        return y;}

ltepegproof_record_59_t update_ltepegproof_record_59_stack(ltepegproof_record_59_t x, ltepeg__ent_adt_t v){
        ltepegproof_record_59_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_ltepeg__ent_adt(x->stack);};}
        else {y = copy_ltepegproof_record_59(x); x->count--; y->stack->count--;};
        y->stack = (ltepeg__ent_adt_t)v;
        return y;}

ltepegproof_record_59_t update_ltepegproof_record_59_lflag(ltepegproof_record_59_t x, bool_t v){
        ltepegproof_record_59_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_59(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}




ltepegproof_record_60_t new_ltepegproof_record_60(void){
        ltepegproof_record_60_t tmp = (ltepegproof_record_60_t) safe_malloc(sizeof(struct ltepegproof_record_60_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_60(ltepegproof_record_60_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepegproof_record_59(x->project_1);
         release_ltepegproof__qstack_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_60_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_60((ltepegproof_record_60_t)x);
}

ltepegproof_record_60_t copy_ltepegproof_record_60(ltepegproof_record_60_t x){
        ltepegproof_record_60_t y = new_ltepegproof_record_60();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = (uint8_t)x->project_3;
        y->project_4 = (uint32_t)x->project_4;
        y->count = 1;
        return y;}

bool_t equal_ltepegproof_record_60(ltepegproof_record_60_t x, ltepegproof_record_60_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepegproof_record_59(x->project_1, y->project_1);
        tmp = tmp && equal_ltepegproof__qstack_adt(x->project_2, y->project_2);
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && x->project_4 == y->project_4;
        return tmp;}

char * json_ltepegproof_record_60(ltepegproof_record_60_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepegproof_record_59(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltepegproof__qstack_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_uint32(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof_record_60_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_60_t T){
        return equal_ltepegproof_record_60((ltepegproof_record_60_t)x, (ltepegproof_record_60_t)y);
}

char * json_ltepegproof_record_60_ptr(pointer_t x, actual_ltepegproof_record_60_t T){
        return json_ltepegproof_record_60((ltepegproof_record_60_t)x);
}

actual_ltepegproof_record_60_t actual_ltepegproof_record_60(){
        actual_ltepegproof_record_60_t new = (actual_ltepegproof_record_60_t)safe_malloc(sizeof(struct actual_ltepegproof_record_60_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_60_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_60_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_60_ptr);
 

 
        return new;
 };

ltepegproof_record_60_t update_ltepegproof_record_60_project_1(ltepegproof_record_60_t x, ltepegproof_record_59_t v){
        ltepegproof_record_60_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepegproof_record_59(x->project_1);};}
        else {y = copy_ltepegproof_record_60(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepegproof_record_59_t)v;
        return y;}

ltepegproof_record_60_t update_ltepegproof_record_60_project_2(ltepegproof_record_60_t x, ltepegproof__qstack_adt_t v){
        ltepegproof_record_60_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltepegproof__qstack_adt(x->project_2);};}
        else {y = copy_ltepegproof_record_60(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltepegproof__qstack_adt_t)v;
        return y;}

ltepegproof_record_60_t update_ltepegproof_record_60_project_3(ltepegproof_record_60_t x, uint8_t v){
        ltepegproof_record_60_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_60(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}

ltepegproof_record_60_t update_ltepegproof_record_60_project_4(ltepegproof_record_60_t x, uint32_t v){
        ltepegproof_record_60_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_60(x); x->count--;};
        y->project_4 = (uint32_t)v;
        return y;}



void release_ltepegproof_funtype_61(ltepegproof_funtype_61_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_61_t copy_ltepegproof_funtype_61(ltepegproof_funtype_61_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_61(ltepegproof_funtype_61_t x, ltepegproof_funtype_61_t y){
        return false;}

char* json_ltepegproof_funtype_61(ltepegproof_funtype_61_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_61\""); return result;}


ltepegproof__parsetree_adt_t f_ltepegproof_closure_62(struct ltepegproof_closure_62_s * closure, ltepegproof_record_60_t bvar){
        ltepegproof_record_59_t bvar_1;
        bvar_1 = (ltepegproof_record_59_t)bvar->project_1;
        bvar->project_1->count++;
        ltepegproof__qstack_adt_t bvar_2;
        bvar_2 = (ltepegproof__qstack_adt_t)bvar->project_2;
        bvar->project_2->count++;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        uint32_t bvar_4;
        bvar_4 = (uint32_t)bvar->project_4;
        release_ltepegproof_record_60(bvar);
        ltepegproof__parsetree_adt_t result = h_ltepegproof_closure_62(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        release_ltepegproof_record_59(bvar_1);
        release_ltepegproof__qstack_adt(bvar_2);
        return result;}

ltepegproof__parsetree_adt_t m_ltepegproof_closure_62(struct ltepegproof_closure_62_s * closure, ltepegproof_record_59_t bvar_1, ltepegproof__qstack_adt_t bvar_2, uint8_t bvar_3, uint32_t bvar_4){
        return h_ltepegproof_closure_62(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern ltepegproof__parsetree_adt_t h_ltepegproof_closure_62(ltepegproof_record_59_t ivar_8, ltepegproof__qstack_adt_t ivar_10, uint8_t ivar_11, uint32_t ivar_12, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepegproof_array_50_t ivar_3, uint8_t ivar_5, uint32_t ivar_4){
        ltepegproof__parsetree_adt_t result;
        ltepeg__prepeg_adt_t ivar_13;
        ivar_13 = (ltepeg__prepeg_adt_t)ivar_2->elems[ivar_11];
        ivar_13->count++;
        bool_t ivar_231;
        ivar_13->count++;
        ivar_231 = (bool_t)r_ltepeg__ltep((ltepeg__prepeg_adt_t)ivar_13);
        if (ivar_231){ 
             uint8_t ivar_18;
             ivar_13->count++;
             ivar_18 = (uint8_t)ltepeg__prepeg_adt_fst((ltepeg__prepeg_adt_t)ivar_13);
             uint8_t ivar_19;
             ivar_13->count++;
             ivar_19 = (uint8_t)ltepeg__prepeg_adt_lthen((ltepeg__prepeg_adt_t)ivar_13);
             uint8_t ivar_20;
             ivar_20 = (uint8_t)ltepeg__prepeg_adt_lelse((ltepeg__prepeg_adt_t)ivar_13);
             bool_t ivar_30;
             ltepeg__ent_adt_t ivar_44;
             ltepegproof_array_51_t ivar_34;
             ltepegproof_array_52_t ivar_38;
             ivar_38 = (ltepegproof_array_52_t)ivar_8->scaf;
             ivar_38->count++;
             ivar_34 = (ltepegproof_array_51_t)ivar_38->elems[ivar_12];
             ivar_34->count++;
             release_ltepegproof_array_52(ivar_38);
             ivar_44 = (ltepeg__ent_adt_t)ivar_34->elems[ivar_18];
             ivar_44->count++;
             release_ltepegproof_array_51(ivar_34);
             ivar_30 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_44);
             if (ivar_30){  
           /* E1 */ ltepegproof__parsetree_adt_t ivar_45;
           ltepegproof_funtype_61_t ivar_60;
           ivar_2->count++;
           ivar_3->count++;
           ivar_60 = (ltepegproof_funtype_61_t)ltepegproof__buildtree((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
           ltepegproof__qstack_adt_t ivar_75;
           ivar_10->count++;
           ivar_75 = (ltepegproof__qstack_adt_t)ltepegproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (ltepegproof__qstack_adt_t)ivar_10);
           ivar_8->count++;
           ivar_45 = (ltepegproof__parsetree_adt_t)ivar_60->ftbl->mptr(ivar_60, ivar_8, ivar_75, ivar_18, ivar_12);
           ivar_60->ftbl->rptr(ivar_60);
           /* E2 */ ltepegproof__parsetree_adt_t ivar_78;
           ltepegproof_funtype_61_t ivar_110;
           ivar_2->count++;
           ivar_3->count++;
           ivar_110 = (ltepegproof_funtype_61_t)ltepegproof__buildtree((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
           ltepegproof__qstack_adt_t ivar_125;
           ivar_125 = (ltepegproof__qstack_adt_t)ltepegproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (ltepegproof__qstack_adt_t)ivar_10);
           mpq_ptr_t ivar_128;
           uint32_t ivar_91;
           ltepeg__ent_adt_t ivar_105;
           ltepegproof_array_51_t ivar_95;
           ltepegproof_array_52_t ivar_99;
           ivar_99 = (ltepegproof_array_52_t)ivar_8->scaf;
           ivar_99->count++;
           ivar_95 = (ltepegproof_array_51_t)ivar_99->elems[ivar_12];
           ivar_95->count++;
           release_ltepegproof_array_52(ivar_99);
           ivar_105 = (ltepeg__ent_adt_t)ivar_95->elems[ivar_18];
           ivar_105->count++;
           release_ltepegproof_array_51(ivar_95);
           ivar_91 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_105);
           mpz_t tmp95334;
           mpz_init(tmp95334);
           mpz_set_ui(tmp95334, (uint64_t)ivar_12);
           mpz_add_ui(tmp95334, tmp95334, (uint64_t)ivar_91);
           mpq_mk_set_z(ivar_128, tmp95334);
           mpz_clear(tmp95334);
           uint32_t ivar_127;
           //copying to uint32 from mpq;
           ivar_127 = (uint32_t)mpq_get_ui(ivar_128);
           mpq_clear(ivar_128);
           ivar_8->count++;
           ivar_78 = (ltepegproof__parsetree_adt_t)ivar_110->ftbl->mptr(ivar_110, ivar_8, ivar_125, ivar_19, ivar_127);
           ivar_110->ftbl->rptr(ivar_110);
           ltepeg__ent_adt_t ivar_144;
           ltepegproof_array_51_t ivar_134;
           ltepegproof_array_52_t ivar_138;
           ivar_138 = (ltepegproof_array_52_t)ivar_8->scaf;
           ivar_138->count++;
           release_ltepegproof_record_59(ivar_8);
           ivar_134 = (ltepegproof_array_51_t)ivar_138->elems[ivar_12];
           ivar_134->count++;
           release_ltepegproof_array_52(ivar_138);
           ivar_144 = (ltepeg__ent_adt_t)ivar_134->elems[ivar_11];
           ivar_144->count++;
           release_ltepegproof_array_51(ivar_134);
           result = (ltepegproof__parsetree_adt_t)ltepegproof__two((ltepeg__ent_adt_t)ivar_144, (ltepegproof__parsetree_adt_t)ivar_45, (ltepegproof__parsetree_adt_t)ivar_78);
} else {
             
           /* E1 */ ltepegproof__parsetree_adt_t ivar_147;
           ltepegproof_funtype_61_t ivar_162;
           ivar_2->count++;
           ivar_3->count++;
           ivar_162 = (ltepegproof_funtype_61_t)ltepegproof__buildtree((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
           ltepegproof__qstack_adt_t ivar_177;
           ivar_10->count++;
           ivar_177 = (ltepegproof__qstack_adt_t)ltepegproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (ltepegproof__qstack_adt_t)ivar_10);
           ivar_8->count++;
           ivar_147 = (ltepegproof__parsetree_adt_t)ivar_162->ftbl->mptr(ivar_162, ivar_8, ivar_177, ivar_18, ivar_12);
           ivar_162->ftbl->rptr(ivar_162);
           /* E2 */ ltepegproof__parsetree_adt_t ivar_180;
           ltepegproof_funtype_61_t ivar_195;
           ivar_2->count++;
           ivar_3->count++;
           ivar_195 = (ltepegproof_funtype_61_t)ltepegproof__buildtree((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
           ltepegproof__qstack_adt_t ivar_210;
           ivar_210 = (ltepegproof__qstack_adt_t)ltepegproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (ltepegproof__qstack_adt_t)ivar_10);
           ivar_8->count++;
           ivar_180 = (ltepegproof__parsetree_adt_t)ivar_195->ftbl->mptr(ivar_195, ivar_8, ivar_210, ivar_20, ivar_12);
           ivar_195->ftbl->rptr(ivar_195);
           ltepeg__ent_adt_t ivar_228;
           ltepegproof_array_51_t ivar_218;
           ltepegproof_array_52_t ivar_222;
           ivar_222 = (ltepegproof_array_52_t)ivar_8->scaf;
           ivar_222->count++;
           release_ltepegproof_record_59(ivar_8);
           ivar_218 = (ltepegproof_array_51_t)ivar_222->elems[ivar_12];
           ivar_218->count++;
           release_ltepegproof_array_52(ivar_222);
           ivar_228 = (ltepeg__ent_adt_t)ivar_218->elems[ivar_11];
           ivar_228->count++;
           release_ltepegproof_array_51(ivar_218);
           result = (ltepegproof__parsetree_adt_t)ltepegproof__two((ltepeg__ent_adt_t)ivar_228, (ltepegproof__parsetree_adt_t)ivar_147, (ltepegproof__parsetree_adt_t)ivar_180);
};
} else {
        
             release_ltepeg__prepeg_adt(ivar_13);
             release_ltepegproof__qstack_adt(ivar_10);
             ltepeg__ent_adt_t ivar_248;
             ltepegproof_array_51_t ivar_238;
             ltepegproof_array_52_t ivar_242;
             ivar_242 = (ltepegproof_array_52_t)ivar_8->scaf;
             ivar_242->count++;
             release_ltepegproof_record_59(ivar_8);
             ivar_238 = (ltepegproof_array_51_t)ivar_242->elems[ivar_12];
             ivar_238->count++;
             release_ltepegproof_array_52(ivar_242);
             ivar_248 = (ltepeg__ent_adt_t)ivar_238->elems[ivar_11];
             ivar_248->count++;
             release_ltepegproof_array_51(ivar_238);
             result = (ltepegproof__parsetree_adt_t)ltepegproof__zero((ltepeg__ent_adt_t)ivar_248);
};

        return result;
}

ltepegproof_closure_62_t new_ltepegproof_closure_62(void){
        static struct ltepegproof_funtype_61_ftbl_s ftbl = {.fptr = (ltepegproof__parsetree_adt_t (*)(ltepegproof_funtype_61_t, ltepegproof_record_60_t))&f_ltepegproof_closure_62, .mptr = (ltepegproof__parsetree_adt_t (*)(ltepegproof_funtype_61_t, ltepegproof_record_59_t, ltepegproof__qstack_adt_t, uint8_t, uint32_t))&m_ltepegproof_closure_62, .rptr =  (void (*)(ltepegproof_funtype_61_t))&release_ltepegproof_closure_62, .cptr = (ltepegproof_funtype_61_t (*)(ltepegproof_funtype_61_t))&copy_ltepegproof_closure_62};
        ltepegproof_closure_62_t tmp = (ltepegproof_closure_62_t) safe_malloc(sizeof(struct ltepegproof_closure_62_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegproof_closure_62(ltepegproof_funtype_61_t closure){
        ltepegproof_closure_62_t x = (ltepegproof_closure_62_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg__lang_spec(x->fvar_2);
         release_ltepegproof_array_50(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegproof_closure_62_t copy_ltepegproof_closure_62(ltepegproof_closure_62_t x){
        ltepegproof_closure_62_t y = new_ltepegproof_closure_62();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = (uint8_t)x->fvar_4;
        y->fvar_5 = (uint32_t)x->fvar_5;
        if (x->htbl != NULL){
            ltepegproof_funtype_61_htbl_t new_htbl = (ltepegproof_funtype_61_htbl_t) safe_malloc(sizeof(struct ltepegproof_funtype_61_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegproof_funtype_61_hashentry_t * new_data = (ltepegproof_funtype_61_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegproof_funtype_61_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegproof_funtype_61_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepegproof_record_63_t new_ltepegproof_record_63(void){
        ltepegproof_record_63_t tmp = (ltepegproof_record_63_t) safe_malloc(sizeof(struct ltepegproof_record_63_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_63(ltepegproof_record_63_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepegproof_record_59(x->project_1);
         release_ltepegproof_array_52(x->project_2);
         release_ltepegproof__qstack_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_63_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_63((ltepegproof_record_63_t)x);
}

ltepegproof_record_63_t copy_ltepegproof_record_63(ltepegproof_record_63_t x){
        ltepegproof_record_63_t y = new_ltepegproof_record_63();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->project_4 = (uint8_t)x->project_4;
        y->project_5 = (uint32_t)x->project_5;
        y->count = 1;
        return y;}

bool_t equal_ltepegproof_record_63(ltepegproof_record_63_t x, ltepegproof_record_63_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepegproof_record_59(x->project_1, y->project_1);
        tmp = tmp && equal_ltepegproof_array_52(x->project_2, y->project_2);
        tmp = tmp && equal_ltepegproof__qstack_adt(x->project_3, y->project_3);
        tmp = tmp && x->project_4 == y->project_4;
        tmp = tmp && x->project_5 == y->project_5;
        return tmp;}

char * json_ltepegproof_record_63(ltepegproof_record_63_t x){
        char * tmp[5]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepegproof_record_59(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltepegproof_array_52(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ltepegproof__qstack_adt(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_uint8(x->project_4));
        char * fld4 = safe_malloc(21);
         sprintf(fld4, "\"project_5\" : ");
        tmp[4] = safe_strcat(fld4, json_uint32(x->project_5));
         char * result = json_list_with_sep(tmp, 5,  '{', ',', '}');
         for (uint32_t i = 0; i < 5; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof_record_63_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_63_t T){
        return equal_ltepegproof_record_63((ltepegproof_record_63_t)x, (ltepegproof_record_63_t)y);
}

char * json_ltepegproof_record_63_ptr(pointer_t x, actual_ltepegproof_record_63_t T){
        return json_ltepegproof_record_63((ltepegproof_record_63_t)x);
}

actual_ltepegproof_record_63_t actual_ltepegproof_record_63(){
        actual_ltepegproof_record_63_t new = (actual_ltepegproof_record_63_t)safe_malloc(sizeof(struct actual_ltepegproof_record_63_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_63_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_63_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_63_ptr);
 

 
        return new;
 };

ltepegproof_record_63_t update_ltepegproof_record_63_project_1(ltepegproof_record_63_t x, ltepegproof_record_59_t v){
        ltepegproof_record_63_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepegproof_record_59(x->project_1);};}
        else {y = copy_ltepegproof_record_63(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepegproof_record_59_t)v;
        return y;}

ltepegproof_record_63_t update_ltepegproof_record_63_project_2(ltepegproof_record_63_t x, ltepegproof_array_52_t v){
        ltepegproof_record_63_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltepegproof_array_52(x->project_2);};}
        else {y = copy_ltepegproof_record_63(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltepegproof_array_52_t)v;
        return y;}

ltepegproof_record_63_t update_ltepegproof_record_63_project_3(ltepegproof_record_63_t x, ltepegproof__qstack_adt_t v){
        ltepegproof_record_63_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ltepegproof__qstack_adt(x->project_3);};}
        else {y = copy_ltepegproof_record_63(x); x->count--; y->project_3->count--;};
        y->project_3 = (ltepegproof__qstack_adt_t)v;
        return y;}

ltepegproof_record_63_t update_ltepegproof_record_63_project_4(ltepegproof_record_63_t x, uint8_t v){
        ltepegproof_record_63_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_63(x); x->count--;};
        y->project_4 = (uint8_t)v;
        return y;}

ltepegproof_record_63_t update_ltepegproof_record_63_project_5(ltepegproof_record_63_t x, uint32_t v){
        ltepegproof_record_63_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_63(x); x->count--;};
        y->project_5 = (uint32_t)v;
        return y;}



void release_ltepegproof_funtype_64(ltepegproof_funtype_64_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_64_t copy_ltepegproof_funtype_64(ltepegproof_funtype_64_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_64(ltepegproof_funtype_64_t x, ltepegproof_funtype_64_t y){
        return false;}

char* json_ltepegproof_funtype_64(ltepegproof_funtype_64_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_64\""); return result;}


ltepegproof__parsetree_adt_t f_ltepegproof_closure_65(struct ltepegproof_closure_65_s * closure, ltepegproof_record_63_t bvar){
        ltepegproof_record_59_t bvar_1;
        bvar_1 = (ltepegproof_record_59_t)bvar->project_1;
        bvar->project_1->count++;
        ltepegproof_array_52_t bvar_2;
        bvar_2 = (ltepegproof_array_52_t)bvar->project_2;
        bvar->project_2->count++;
        ltepegproof__qstack_adt_t bvar_3;
        bvar_3 = (ltepegproof__qstack_adt_t)bvar->project_3;
        bvar->project_3->count++;
        uint8_t bvar_4;
        bvar_4 = (uint8_t)bvar->project_4;
        uint32_t bvar_5;
        bvar_5 = (uint32_t)bvar->project_5;
        release_ltepegproof_record_63(bvar);
        ltepegproof__parsetree_adt_t result = h_ltepegproof_closure_65(bvar_1, bvar_2, bvar_3, bvar_4, bvar_5, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        release_ltepegproof_record_59(bvar_1);
        release_ltepegproof_array_52(bvar_2);
        release_ltepegproof__qstack_adt(bvar_3);
        return result;}

ltepegproof__parsetree_adt_t m_ltepegproof_closure_65(struct ltepegproof_closure_65_s * closure, ltepegproof_record_59_t bvar_1, ltepegproof_array_52_t bvar_2, ltepegproof__qstack_adt_t bvar_3, uint8_t bvar_4, uint32_t bvar_5){
        return h_ltepegproof_closure_65(bvar_1, bvar_2, bvar_3, bvar_4, bvar_5, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern ltepegproof__parsetree_adt_t h_ltepegproof_closure_65(ltepegproof_record_59_t ivar_9, ltepegproof_array_52_t ivar_11, ltepegproof__qstack_adt_t ivar_13, uint8_t ivar_14, uint32_t ivar_15, uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepegproof_array_50_t ivar_3, uint8_t ivar_5, uint32_t ivar_4){
        ltepegproof__parsetree_adt_t result;
        bool_t ivar_16;
        ivar_13->count++;
        ivar_16 = (bool_t)ltepegproof__inqstack((uint8_t)ivar_14, (uint32_t)ivar_15, (ltepegproof__qstack_adt_t)ivar_13);
        if (ivar_16){ 
             release_ltepegproof_record_59(ivar_9);
             release_ltepegproof__qstack_adt(ivar_13);
             release_ltepegproof_array_52(ivar_11);
             ltepeg__ent_adt_t ivar_26;
             ivar_26 = (ltepeg__ent_adt_t)ltepeg__loop();
             if (ivar_26 != NULL) ivar_26->count++;
             result = (ltepegproof__parsetree_adt_t)ltepegproof__zero((ltepeg__ent_adt_t)ivar_26);
} else {
        
             ltepeg__prepeg_adt_t ivar_27;
             ivar_27 = (ltepeg__prepeg_adt_t)ivar_2->elems[ivar_14];
             ivar_27->count++;
             uint8_t ivar_32;
             ivar_27->count++;
             ivar_32 = (uint8_t)ltepeg__prepeg_adt_fst((ltepeg__prepeg_adt_t)ivar_27);
             uint8_t ivar_33;
             ivar_27->count++;
             ivar_33 = (uint8_t)ltepeg__prepeg_adt_lthen((ltepeg__prepeg_adt_t)ivar_27);
             uint8_t ivar_34;
             ivar_34 = (uint8_t)ltepeg__prepeg_adt_lelse((ltepeg__prepeg_adt_t)ivar_27);
             bool_t ivar_44;
             ltepeg__ent_adt_t ivar_58;
             ltepegproof_array_51_t ivar_48;
             ltepegproof_array_52_t ivar_52;
             ivar_52 = (ltepegproof_array_52_t)ivar_9->scaf;
             ivar_52->count++;
             ivar_48 = (ltepegproof_array_51_t)ivar_52->elems[ivar_15];
             ivar_48->count++;
             release_ltepegproof_array_52(ivar_52);
             ivar_58 = (ltepeg__ent_adt_t)ivar_48->elems[ivar_32];
             ivar_58->count++;
             release_ltepegproof_array_51(ivar_48);
             ivar_44 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_58);
             if (ivar_44){  
           ltepeg__ent_adt_t ivar_114;
           ivar_114 = (ltepeg__ent_adt_t)ltepeg__loop();
           if (ivar_114 != NULL) ivar_114->count++;
           ltepegproof__parsetree_adt_t ivar_115;
           ltepegproof_funtype_64_t ivar_93;
           ivar_2->count++;
           ivar_3->count++;
           ivar_93 = (ltepegproof_funtype_64_t)ltepegproof__buildloop((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
           ltepegproof_array_52_t ivar_109;
           ltepeg__ent_adt_t ivar_67;
           ivar_67 = (ltepeg__ent_adt_t)ltepeg__loop();
           if (ivar_67 != NULL) ivar_67->count++;
           ltepegproof_array_51_t ivar_69;
           ivar_69 = (ltepegproof_array_51_t)ivar_11->elems[ivar_15];
           ivar_69->count++;
           ltepegproof_array_52_t ivar_76;
           ltepegproof_array_51_t ivar_78;
           ivar_78 = NULL;
           ivar_76 = (ltepegproof_array_52_t)update_ltepegproof_array_52(ivar_11, ivar_15, ivar_78);
           if (ivar_78 != NULL) ivar_78->count--;
           ltepegproof_array_51_t ivar_77;
           ltepegproof_array_51_t ivar_72;
           ltepeg__ent_adt_t ivar_74;
           ivar_74 = NULL;
           ivar_72 = (ltepegproof_array_51_t)update_ltepegproof_array_51(ivar_69, ivar_14, ivar_74);
           if (ivar_74 != NULL) ivar_74->count--;
           ivar_77 = (ltepegproof_array_51_t)update_ltepegproof_array_51(ivar_72, ivar_14, ivar_67);
           if (ivar_67 != NULL) ivar_67->count--;
           ivar_109 = (ltepegproof_array_52_t)update_ltepegproof_array_52(ivar_76, ivar_15, ivar_77);
           if (ivar_77 != NULL) ivar_77->count--;
           ltepegproof__qstack_adt_t ivar_110;
           ivar_110 = (ltepegproof__qstack_adt_t)ltepegproof__qpush((uint8_t)ivar_14, (uint32_t)ivar_15, (ltepegproof__qstack_adt_t)ivar_13);
           ivar_115 = (ltepegproof__parsetree_adt_t)ivar_93->ftbl->mptr(ivar_93, ivar_9, ivar_109, ivar_110, ivar_32, ivar_15);
           ivar_93->ftbl->rptr(ivar_93);
           result = (ltepegproof__parsetree_adt_t)ltepegproof__one((ltepeg__ent_adt_t)ivar_114, (ltepegproof__parsetree_adt_t)ivar_115);
} else {
             
           bool_t ivar_116;
           ltepeg__ent_adt_t ivar_130;
           ltepegproof_array_51_t ivar_120;
           ltepegproof_array_52_t ivar_124;
           ivar_124 = (ltepegproof_array_52_t)ivar_9->scaf;
           ivar_124->count++;
           ivar_120 = (ltepegproof_array_51_t)ivar_124->elems[ivar_15];
           ivar_120->count++;
           release_ltepegproof_array_52(ivar_124);
           ivar_130 = (ltepeg__ent_adt_t)ivar_120->elems[ivar_32];
           ivar_130->count++;
           release_ltepegproof_array_51(ivar_120);
           ivar_116 = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_130);
           if (ivar_116){   
           ltepeg__ent_adt_t ivar_237;
           ivar_237 = (ltepeg__ent_adt_t)ltepeg__loop();
           if (ivar_237 != NULL) ivar_237->count++;
           ltepegproof__parsetree_adt_t ivar_238;
           ltepegproof_funtype_61_t ivar_148;
           ivar_2->count++;
           ivar_3->count++;
           ivar_148 = (ltepegproof_funtype_61_t)ltepegproof__buildtree((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
           ltepegproof__qstack_adt_t ivar_163;
           ivar_13->count++;
           ivar_163 = (ltepegproof__qstack_adt_t)ltepegproof__qpush((uint8_t)ivar_14, (uint32_t)ivar_15, (ltepegproof__qstack_adt_t)ivar_13);
           ivar_9->count++;
           ivar_238 = (ltepegproof__parsetree_adt_t)ivar_148->ftbl->mptr(ivar_148, ivar_9, ivar_163, ivar_32, ivar_15);
           ivar_148->ftbl->rptr(ivar_148);
           ltepegproof__parsetree_adt_t ivar_239;
           ltepegproof_funtype_64_t ivar_215;
           ivar_2->count++;
           ivar_3->count++;
           ivar_215 = (ltepegproof_funtype_64_t)ltepegproof__buildloop((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
           ltepegproof_array_52_t ivar_231;
           ltepeg__ent_adt_t ivar_172;
           ivar_172 = (ltepeg__ent_adt_t)ltepeg__loop();
           if (ivar_172 != NULL) ivar_172->count++;
           ltepegproof_array_51_t ivar_174;
           ivar_174 = (ltepegproof_array_51_t)ivar_11->elems[ivar_15];
           ivar_174->count++;
           ltepegproof_array_52_t ivar_181;
           ltepegproof_array_51_t ivar_183;
           ivar_183 = NULL;
           ivar_181 = (ltepegproof_array_52_t)update_ltepegproof_array_52(ivar_11, ivar_15, ivar_183);
           if (ivar_183 != NULL) ivar_183->count--;
           ltepegproof_array_51_t ivar_182;
           ltepegproof_array_51_t ivar_177;
           ltepeg__ent_adt_t ivar_179;
           ivar_179 = NULL;
           ivar_177 = (ltepegproof_array_51_t)update_ltepegproof_array_51(ivar_174, ivar_14, ivar_179);
           if (ivar_179 != NULL) ivar_179->count--;
           ivar_182 = (ltepegproof_array_51_t)update_ltepegproof_array_51(ivar_177, ivar_14, ivar_172);
           if (ivar_172 != NULL) ivar_172->count--;
           ivar_231 = (ltepegproof_array_52_t)update_ltepegproof_array_52(ivar_181, ivar_15, ivar_182);
           if (ivar_182 != NULL) ivar_182->count--;
           ltepegproof__qstack_adt_t ivar_232;
           ivar_232 = (ltepegproof__qstack_adt_t)ltepegproof__qpush((uint8_t)ivar_14, (uint32_t)ivar_15, (ltepegproof__qstack_adt_t)ivar_13);
           mpq_ptr_t ivar_235;
           uint32_t ivar_193;
           ltepeg__ent_adt_t ivar_207;
           ltepegproof_array_51_t ivar_197;
           ltepegproof_array_52_t ivar_201;
           ivar_201 = (ltepegproof_array_52_t)ivar_9->scaf;
           ivar_201->count++;
           ivar_197 = (ltepegproof_array_51_t)ivar_201->elems[ivar_15];
           ivar_197->count++;
           release_ltepegproof_array_52(ivar_201);
           ivar_207 = (ltepeg__ent_adt_t)ivar_197->elems[ivar_32];
           ivar_207->count++;
           release_ltepegproof_array_51(ivar_197);
           ivar_193 = (uint32_t)ltepeg__ent_adt_span((ltepeg__ent_adt_t)ivar_207);
           mpz_t tmp96002;
           mpz_init(tmp96002);
           mpz_set_ui(tmp96002, (uint64_t)ivar_15);
           mpz_add_ui(tmp96002, tmp96002, (uint64_t)ivar_193);
           mpq_mk_set_z(ivar_235, tmp96002);
           mpz_clear(tmp96002);
           uint32_t ivar_234;
           //copying to uint32 from mpq;
           ivar_234 = (uint32_t)mpq_get_ui(ivar_235);
           mpq_clear(ivar_235);
           ivar_239 = (ltepegproof__parsetree_adt_t)ivar_215->ftbl->mptr(ivar_215, ivar_9, ivar_231, ivar_232, ivar_33, ivar_234);
           ivar_215->ftbl->rptr(ivar_215);
           result = (ltepegproof__parsetree_adt_t)ltepegproof__two((ltepeg__ent_adt_t)ivar_237, (ltepegproof__parsetree_adt_t)ivar_238, (ltepegproof__parsetree_adt_t)ivar_239);
} else {
           
           ltepeg__ent_adt_t ivar_328;
           ivar_328 = (ltepeg__ent_adt_t)ltepeg__loop();
           if (ivar_328 != NULL) ivar_328->count++;
           ltepegproof__parsetree_adt_t ivar_329;
           ltepegproof_funtype_61_t ivar_257;
           ivar_2->count++;
           ivar_3->count++;
           ivar_257 = (ltepegproof_funtype_61_t)ltepegproof__buildtree((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
           ltepegproof__qstack_adt_t ivar_272;
           ivar_13->count++;
           ivar_272 = (ltepegproof__qstack_adt_t)ltepegproof__qpush((uint8_t)ivar_14, (uint32_t)ivar_15, (ltepegproof__qstack_adt_t)ivar_13);
           ivar_9->count++;
           ivar_329 = (ltepegproof__parsetree_adt_t)ivar_257->ftbl->mptr(ivar_257, ivar_9, ivar_272, ivar_32, ivar_15);
           ivar_257->ftbl->rptr(ivar_257);
           ltepegproof__parsetree_adt_t ivar_330;
           ltepegproof_funtype_64_t ivar_307;
           ivar_2->count++;
           ivar_3->count++;
           ivar_307 = (ltepegproof_funtype_64_t)ltepegproof__buildloop((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
           ltepegproof_array_52_t ivar_323;
           ltepeg__ent_adt_t ivar_281;
           ivar_281 = (ltepeg__ent_adt_t)ltepeg__loop();
           if (ivar_281 != NULL) ivar_281->count++;
           ltepegproof_array_51_t ivar_283;
           ivar_283 = (ltepegproof_array_51_t)ivar_11->elems[ivar_15];
           ivar_283->count++;
           ltepegproof_array_52_t ivar_290;
           ltepegproof_array_51_t ivar_292;
           ivar_292 = NULL;
           ivar_290 = (ltepegproof_array_52_t)update_ltepegproof_array_52(ivar_11, ivar_15, ivar_292);
           if (ivar_292 != NULL) ivar_292->count--;
           ltepegproof_array_51_t ivar_291;
           ltepegproof_array_51_t ivar_286;
           ltepeg__ent_adt_t ivar_288;
           ivar_288 = NULL;
           ivar_286 = (ltepegproof_array_51_t)update_ltepegproof_array_51(ivar_283, ivar_14, ivar_288);
           if (ivar_288 != NULL) ivar_288->count--;
           ivar_291 = (ltepegproof_array_51_t)update_ltepegproof_array_51(ivar_286, ivar_14, ivar_281);
           if (ivar_281 != NULL) ivar_281->count--;
           ivar_323 = (ltepegproof_array_52_t)update_ltepegproof_array_52(ivar_290, ivar_15, ivar_291);
           if (ivar_291 != NULL) ivar_291->count--;
           ltepegproof__qstack_adt_t ivar_324;
           ivar_324 = (ltepegproof__qstack_adt_t)ltepegproof__qpush((uint8_t)ivar_14, (uint32_t)ivar_15, (ltepegproof__qstack_adt_t)ivar_13);
           ivar_330 = (ltepegproof__parsetree_adt_t)ivar_307->ftbl->mptr(ivar_307, ivar_9, ivar_323, ivar_324, ivar_34, ivar_15);
           ivar_307->ftbl->rptr(ivar_307);
           result = (ltepegproof__parsetree_adt_t)ltepegproof__two((ltepeg__ent_adt_t)ivar_328, (ltepegproof__parsetree_adt_t)ivar_329, (ltepegproof__parsetree_adt_t)ivar_330);
};
};
};

        return result;
}

ltepegproof_closure_65_t new_ltepegproof_closure_65(void){
        static struct ltepegproof_funtype_64_ftbl_s ftbl = {.fptr = (ltepegproof__parsetree_adt_t (*)(ltepegproof_funtype_64_t, ltepegproof_record_63_t))&f_ltepegproof_closure_65, .mptr = (ltepegproof__parsetree_adt_t (*)(ltepegproof_funtype_64_t, ltepegproof_record_59_t, ltepegproof_array_52_t, ltepegproof__qstack_adt_t, uint8_t, uint32_t))&m_ltepegproof_closure_65, .rptr =  (void (*)(ltepegproof_funtype_64_t))&release_ltepegproof_closure_65, .cptr = (ltepegproof_funtype_64_t (*)(ltepegproof_funtype_64_t))&copy_ltepegproof_closure_65};
        ltepegproof_closure_65_t tmp = (ltepegproof_closure_65_t) safe_malloc(sizeof(struct ltepegproof_closure_65_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegproof_closure_65(ltepegproof_funtype_64_t closure){
        ltepegproof_closure_65_t x = (ltepegproof_closure_65_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepeg__lang_spec(x->fvar_2);
         release_ltepegproof_array_50(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegproof_closure_65_t copy_ltepegproof_closure_65(ltepegproof_closure_65_t x){
        ltepegproof_closure_65_t y = new_ltepegproof_closure_65();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = (uint8_t)x->fvar_4;
        y->fvar_5 = (uint32_t)x->fvar_5;
        if (x->htbl != NULL){
            ltepegproof_funtype_64_htbl_t new_htbl = (ltepegproof_funtype_64_htbl_t) safe_malloc(sizeof(struct ltepegproof_funtype_64_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegproof_funtype_64_hashentry_t * new_data = (ltepegproof_funtype_64_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegproof_funtype_64_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegproof_funtype_64_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepegproof_array_66_t new_ltepegproof_array_66(uint32_t size){
        ltepegproof_array_66_t tmp = (ltepegproof_array_66_t) safe_malloc(sizeof(struct ltepegproof_array_66_s) + (size * sizeof(ltepeg__ent_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_ltepegproof_array_66(ltepegproof_array_66_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_ltepeg__ent_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_ltepegproof_array_66_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_array_66((ltepegproof_array_66_t)x);
}

ltepegproof_array_66_t copy_ltepegproof_array_66(ltepegproof_array_66_t x){
        ltepegproof_array_66_t tmp = new_ltepegproof_array_66(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ltepegproof_array_66(ltepegproof_array_66_t x, ltepegproof_array_66_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_ltepeg__ent_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_ltepegproof_array_66(ltepegproof_array_66_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_ltepeg__ent_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltepegproof_array_66_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltepegproof_array_66((ltepegproof_array_66_t)x, (ltepegproof_array_66_t)y);
}

char * json_ltepegproof_array_66_ptr(pointer_t x, type_actual_t T){
        return json_ltepegproof_array_66((ltepegproof_array_66_t)x);
}

actual_ltepegproof_array_66_t actual_ltepegproof_array_66(){
        actual_ltepegproof_array_66_t new = (actual_ltepegproof_array_66_t)safe_malloc(sizeof(struct actual_ltepegproof_array_66_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_array_66_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_array_66_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_array_66_ptr);
 

 
        return new;
 };

ltepegproof_array_66_t update_ltepegproof_array_66(ltepegproof_array_66_t x, uint32_t i, ltepeg__ent_adt_t v){
         ltepegproof_array_66_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ltepegproof_array_66(x);
                      x->count--;};
        ltepeg__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepeg__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

ltepegproof_array_66_t upgrade_ltepegproof_array_66(ltepegproof_array_66_t x, uint32_t i, ltepeg__ent_adt_t v){
         ltepegproof_array_66_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltepegproof_array_66_s) + (newmax * sizeof(ltepeg__ent_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltepegproof_array_66(x);} else {y = copy_ltepegproof_array_66(x);
                      x->count--;};
        ltepeg__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepeg__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}




ltepegproof_record_67_t new_ltepegproof_record_67(void){
        ltepegproof_record_67_t tmp = (ltepegproof_record_67_t) safe_malloc(sizeof(struct ltepegproof_record_67_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegproof_record_67(ltepegproof_record_67_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepegproof_record_59(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegproof_record_67_ptr(pointer_t x, type_actual_t T){
        release_ltepegproof_record_67((ltepegproof_record_67_t)x);
}

ltepegproof_record_67_t copy_ltepegproof_record_67(ltepegproof_record_67_t x){
        ltepegproof_record_67_t y = new_ltepegproof_record_67();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = (uint32_t)x->project_3;
        y->count = 1;
        return y;}

bool_t equal_ltepegproof_record_67(ltepegproof_record_67_t x, ltepegproof_record_67_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepegproof_record_59(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        return tmp;}

char * json_ltepegproof_record_67(ltepegproof_record_67_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepegproof_record_59(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegproof_record_67_ptr(pointer_t x, pointer_t y, actual_ltepegproof_record_67_t T){
        return equal_ltepegproof_record_67((ltepegproof_record_67_t)x, (ltepegproof_record_67_t)y);
}

char * json_ltepegproof_record_67_ptr(pointer_t x, actual_ltepegproof_record_67_t T){
        return json_ltepegproof_record_67((ltepegproof_record_67_t)x);
}

actual_ltepegproof_record_67_t actual_ltepegproof_record_67(){
        actual_ltepegproof_record_67_t new = (actual_ltepegproof_record_67_t)safe_malloc(sizeof(struct actual_ltepegproof_record_67_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegproof_record_67_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegproof_record_67_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegproof_record_67_ptr);
 

 
        return new;
 };

ltepegproof_record_67_t update_ltepegproof_record_67_project_1(ltepegproof_record_67_t x, ltepegproof_record_59_t v){
        ltepegproof_record_67_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepegproof_record_59(x->project_1);};}
        else {y = copy_ltepegproof_record_67(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepegproof_record_59_t)v;
        return y;}

ltepegproof_record_67_t update_ltepegproof_record_67_project_2(ltepegproof_record_67_t x, uint8_t v){
        ltepegproof_record_67_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_67(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

ltepegproof_record_67_t update_ltepegproof_record_67_project_3(ltepegproof_record_67_t x, uint32_t v){
        ltepegproof_record_67_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegproof_record_67(x); x->count--;};
        y->project_3 = (uint32_t)v;
        return y;}



void release_ltepegproof_funtype_68(ltepegproof_funtype_68_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_68_t copy_ltepegproof_funtype_68(ltepegproof_funtype_68_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegproof_funtype_68(ltepegproof_funtype_68_t x, ltepegproof_funtype_68_t y){
        return false;}

char* json_ltepegproof_funtype_68(ltepegproof_funtype_68_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_68\""); return result;}


ltepegproof__parsetree_adt_t f_ltepegproof_closure_69(struct ltepegproof_closure_69_s * closure, ltepegproof_record_67_t bvar){
        ltepegproof_record_59_t bvar_1;
        bvar_1 = (ltepegproof_record_59_t)bvar->project_1;
        bvar->project_1->count++;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        uint32_t bvar_3;
        bvar_3 = (uint32_t)bvar->project_3;
        release_ltepegproof_record_67(bvar);
        ltepegproof__parsetree_adt_t result = h_ltepegproof_closure_69(bvar_1, bvar_2, bvar_3, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        release_ltepegproof_record_59(bvar_1);
        return result;}

ltepegproof__parsetree_adt_t m_ltepegproof_closure_69(struct ltepegproof_closure_69_s * closure, ltepegproof_record_59_t bvar_1, uint8_t bvar_2, uint32_t bvar_3){
        return h_ltepegproof_closure_69(bvar_1, bvar_2, bvar_3, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern ltepegproof__parsetree_adt_t h_ltepegproof_closure_69(ltepegproof_record_59_t ivar_8, uint8_t ivar_10, uint32_t ivar_11, uint32_t ivar_4, uint32_t ivar_1, uint8_t ivar_5, ltepegproof_array_50_t ivar_3, ltepeg__lang_spec_t ivar_2){
        ltepegproof__parsetree_adt_t result;
        bool_t ivar_12;
        ltepeg__ent_adt_t ivar_26;
        ltepegproof_array_51_t ivar_16;
        ltepegproof_array_52_t ivar_20;
        ivar_20 = (ltepegproof_array_52_t)ivar_8->scaf;
        ivar_20->count++;
        ivar_16 = (ltepegproof_array_51_t)ivar_20->elems[ivar_11];
        ivar_16->count++;
        release_ltepegproof_array_52(ivar_20);
        ivar_26 = (ltepeg__ent_adt_t)ivar_16->elems[ivar_10];
        ivar_26->count++;
        release_ltepegproof_array_51(ivar_16);
        ivar_12 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_26);
        if (ivar_12){ 
             /* pendfun */ ltepegproof_funtype_70_t ivar_27;
             ltepegproof_closure_71_t cl96293;
             cl96293 = new_ltepegproof_closure_71();
             ivar_27 = (ltepegproof_funtype_70_t)cl96293;
             /* A */ ltepegproof_funtype_72_t ivar_32;
             ltepegproof_closure_73_t cl96306;
             cl96306 = new_ltepegproof_closure_73();
             cl96306->fvar_1 = (uint32_t)ivar_1;
             cl96306->fvar_2 = (ltepegproof_funtype_70_t)ivar_27;
             if (cl96306->fvar_2 != NULL) cl96306->fvar_2->count++;
             release_ltepegproof_funtype_70(ivar_27);
             ivar_32 = (ltepegproof_funtype_72_t)cl96306;
             ltepegproof_funtype_64_t ivar_49;
             ivar_2->count++;
             ivar_3->count++;
             ivar_49 = (ltepegproof_funtype_64_t)ltepegproof__buildloop((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
             ltepegproof_array_52_t ivar_65;
             //copying to ltepegproof_array_52 from ltepegproof_funtype_72;
             uint32_t tmp96341;
             //copying to uint32 from uint32;
             tmp96341 = (uint32_t)ivar_1;
             tmp96341 += 1;
             ivar_65 = new_ltepegproof_array_52(tmp96341);
             for (uint32_t index_94 = 0; index_94 < tmp96341; index_94++){
           uint32_t tmp96343;
           tmp96343 = (uint32_t)255;
           ivar_65->elems[index_94] = new_ltepegproof_array_51(tmp96343);
           for (uint32_t index_95 = 0; index_95 < tmp96343; index_95++){
           ivar_65->elems[index_94]->elems[index_95] = (ltepeg__ent_adt_t)ivar_32->ftbl->fptr(ivar_32, index_94)->ftbl->fptr(ivar_32->ftbl->fptr(ivar_32, index_94), index_95);
           if (ivar_65->elems[index_94]->elems[index_95] != NULL) ivar_65->elems[index_94]->elems[index_95]->count++;
           };
             };
             release_ltepegproof_funtype_72(ivar_32);
             ltepegproof__qstack_adt_t ivar_66;
             ivar_66 = (ltepegproof__qstack_adt_t)ltepegproof__qempty();
             if (ivar_66 != NULL) ivar_66->count++;
             result = (ltepegproof__parsetree_adt_t)ivar_49->ftbl->mptr(ivar_49, ivar_8, ivar_65, ivar_66, ivar_10, ivar_11);
             ivar_49->ftbl->rptr(ivar_49);
} else {
        
             ltepegproof_funtype_61_t ivar_76;
             ivar_2->count++;
             ivar_3->count++;
             ivar_76 = (ltepegproof_funtype_61_t)ltepegproof__buildtree((uint32_t)ivar_1, (ltepeg__lang_spec_t)ivar_2, (ltepegproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
             ltepegproof__qstack_adt_t ivar_91;
             ivar_91 = (ltepegproof__qstack_adt_t)ltepegproof__qempty();
             if (ivar_91 != NULL) ivar_91->count++;
             result = (ltepegproof__parsetree_adt_t)ivar_76->ftbl->mptr(ivar_76, ivar_8, ivar_91, ivar_10, ivar_11);
             ivar_76->ftbl->rptr(ivar_76);
};

        return result;
}

ltepegproof_closure_69_t new_ltepegproof_closure_69(void){
        static struct ltepegproof_funtype_68_ftbl_s ftbl = {.fptr = (ltepegproof__parsetree_adt_t (*)(ltepegproof_funtype_68_t, ltepegproof_record_67_t))&f_ltepegproof_closure_69, .mptr = (ltepegproof__parsetree_adt_t (*)(ltepegproof_funtype_68_t, ltepegproof_record_59_t, uint8_t, uint32_t))&m_ltepegproof_closure_69, .rptr =  (void (*)(ltepegproof_funtype_68_t))&release_ltepegproof_closure_69, .cptr = (ltepegproof_funtype_68_t (*)(ltepegproof_funtype_68_t))&copy_ltepegproof_closure_69};
        ltepegproof_closure_69_t tmp = (ltepegproof_closure_69_t) safe_malloc(sizeof(struct ltepegproof_closure_69_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegproof_closure_69(ltepegproof_funtype_68_t closure){
        ltepegproof_closure_69_t x = (ltepegproof_closure_69_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepegproof_array_50(x->fvar_4);
         release_ltepeg__lang_spec(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegproof_closure_69_t copy_ltepegproof_closure_69(ltepegproof_closure_69_t x){
        ltepegproof_closure_69_t y = new_ltepegproof_closure_69();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = (uint8_t)x->fvar_3;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            ltepegproof_funtype_68_htbl_t new_htbl = (ltepegproof_funtype_68_htbl_t) safe_malloc(sizeof(struct ltepegproof_funtype_68_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegproof_funtype_68_hashentry_t * new_data = (ltepegproof_funtype_68_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegproof_funtype_68_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegproof_funtype_68_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepegproof_funtype_70(ltepegproof_funtype_70_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_70_t copy_ltepegproof_funtype_70(ltepegproof_funtype_70_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltepegproof_funtype_70(ltepegproof_funtype_70_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltepegproof_funtype_70_hashentry_t data = htbl->data[hashindex];
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

ltepegproof_funtype_70_t dupdate_ltepegproof_funtype_70(ltepegproof_funtype_70_t a, uint8_t i, ltepeg__ent_adt_t v){
        ltepegproof_funtype_70_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltepegproof_funtype_70_htbl_t)safe_malloc(sizeof(struct ltepegproof_funtype_70_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltepegproof_funtype_70_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltepegproof_funtype_70_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltepegproof_funtype_70_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltepegproof_funtype_70_hashentry_t * new_data = (ltepegproof_funtype_70_hashentry_t *)safe_malloc(new_size * sizeof(struct ltepegproof_funtype_70_hashentry_s));
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
                                new_data[new_loc].value = (ltepeg__ent_adt_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_ltepegproof_funtype_70(htbl, i, ihash);
        ltepegproof_funtype_70_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ltepeg__ent_adt_t)v; htbl->num_entries++;}
            else {ltepeg__ent_adt_t tempvalue;tempvalue = (ltepeg__ent_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ltepeg__ent_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ltepeg__ent_adt(tempvalue);};
        return a;

}

ltepegproof_funtype_70_t update_ltepegproof_funtype_70(ltepegproof_funtype_70_t a, uint8_t i, ltepeg__ent_adt_t v){
        if (a->count == 1){
                return dupdate_ltepegproof_funtype_70(a, i, v);
            } else {
                ltepegproof_funtype_70_t x = copy_ltepegproof_funtype_70(a);
                a->count--;
                return dupdate_ltepegproof_funtype_70(x, i, v);
            }}

bool_t equal_ltepegproof_funtype_70(ltepegproof_funtype_70_t x, ltepegproof_funtype_70_t y){
        return false;}

char* json_ltepegproof_funtype_70(ltepegproof_funtype_70_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_70\""); return result;}


ltepeg__ent_adt_t f_ltepegproof_closure_71(struct ltepegproof_closure_71_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        ltepegproof_funtype_70_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_ltepegproof_funtype_70(htbl, bvar, hash);
        ltepegproof_funtype_70_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            ltepeg__ent_adt_t result;
            result = (ltepeg__ent_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_ltepegproof_closure_71(bvar);};

return h_ltepegproof_closure_71(bvar);}

ltepeg__ent_adt_t m_ltepegproof_closure_71(struct ltepegproof_closure_71_s * closure, uint8_t bvar){
        return h_ltepegproof_closure_71(bvar);}

extern ltepeg__ent_adt_t h_ltepegproof_closure_71(uint8_t ivar_31){
        ltepeg__ent_adt_t result;
        result = (ltepeg__ent_adt_t)ltepeg__pending();
        if (result != NULL) result->count++;

        return result;
}

ltepegproof_closure_71_t new_ltepegproof_closure_71(void){
        static struct ltepegproof_funtype_70_ftbl_s ftbl = {.fptr = (ltepeg__ent_adt_t (*)(ltepegproof_funtype_70_t, uint8_t))&f_ltepegproof_closure_71, .mptr = (ltepeg__ent_adt_t (*)(ltepegproof_funtype_70_t, uint8_t))&m_ltepegproof_closure_71, .rptr =  (void (*)(ltepegproof_funtype_70_t))&release_ltepegproof_closure_71, .cptr = (ltepegproof_funtype_70_t (*)(ltepegproof_funtype_70_t))&copy_ltepegproof_closure_71};
        ltepegproof_closure_71_t tmp = (ltepegproof_closure_71_t) safe_malloc(sizeof(struct ltepegproof_closure_71_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegproof_closure_71(ltepegproof_funtype_70_t closure){
        ltepegproof_closure_71_t x = (ltepegproof_closure_71_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegproof_closure_71_t copy_ltepegproof_closure_71(ltepegproof_closure_71_t x){
        ltepegproof_closure_71_t y = new_ltepegproof_closure_71();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            ltepegproof_funtype_70_htbl_t new_htbl = (ltepegproof_funtype_70_htbl_t) safe_malloc(sizeof(struct ltepegproof_funtype_70_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegproof_funtype_70_hashentry_t * new_data = (ltepegproof_funtype_70_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegproof_funtype_70_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegproof_funtype_70_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepegproof_funtype_72(ltepegproof_funtype_72_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegproof_funtype_72_t copy_ltepegproof_funtype_72(ltepegproof_funtype_72_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltepegproof_funtype_72(ltepegproof_funtype_72_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltepegproof_funtype_72_hashentry_t data = htbl->data[hashindex];
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

ltepegproof_funtype_72_t dupdate_ltepegproof_funtype_72(ltepegproof_funtype_72_t a, uint32_t i, ltepegproof_funtype_70_t v){
        ltepegproof_funtype_72_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltepegproof_funtype_72_htbl_t)safe_malloc(sizeof(struct ltepegproof_funtype_72_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltepegproof_funtype_72_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltepegproof_funtype_72_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltepegproof_funtype_72_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltepegproof_funtype_72_hashentry_t * new_data = (ltepegproof_funtype_72_hashentry_t *)safe_malloc(new_size * sizeof(struct ltepegproof_funtype_72_hashentry_s));
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
                                new_data[new_loc].value = (ltepegproof_funtype_70_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_ltepegproof_funtype_72(htbl, i, ihash);
        ltepegproof_funtype_72_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ltepegproof_funtype_70_t)v; htbl->num_entries++;}
            else {ltepegproof_funtype_70_t tempvalue;tempvalue = (ltepegproof_funtype_70_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ltepegproof_funtype_70_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ltepegproof_funtype_70(tempvalue);};
        return a;

}

ltepegproof_funtype_72_t update_ltepegproof_funtype_72(ltepegproof_funtype_72_t a, uint32_t i, ltepegproof_funtype_70_t v){
        if (a->count == 1){
                return dupdate_ltepegproof_funtype_72(a, i, v);
            } else {
                ltepegproof_funtype_72_t x = copy_ltepegproof_funtype_72(a);
                a->count--;
                return dupdate_ltepegproof_funtype_72(x, i, v);
            }}

bool_t equal_ltepegproof_funtype_72(ltepegproof_funtype_72_t x, ltepegproof_funtype_72_t y){
        return false;}

char* json_ltepegproof_funtype_72(ltepegproof_funtype_72_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"ltepegproof_funtype_72\""); return result;}


ltepegproof_funtype_70_t f_ltepegproof_closure_73(struct ltepegproof_closure_73_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        ltepegproof_funtype_72_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_ltepegproof_funtype_72(htbl, bvar, hash);
        ltepegproof_funtype_72_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            ltepegproof_funtype_70_t result;
            result = (ltepegproof_funtype_70_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_ltepegproof_closure_73(bvar, closure->fvar_1, closure->fvar_2);};

return h_ltepegproof_closure_73(bvar, closure->fvar_1, closure->fvar_2);}

ltepegproof_funtype_70_t m_ltepegproof_closure_73(struct ltepegproof_closure_73_s * closure, uint32_t bvar){
        return h_ltepegproof_closure_73(bvar, closure->fvar_1, closure->fvar_2);}

extern ltepegproof_funtype_70_t h_ltepegproof_closure_73(uint32_t ivar_39, uint32_t ivar_1, ltepegproof_funtype_70_t ivar_27){
        ltepegproof_funtype_70_t result;
        //copying to ltepegproof_funtype_70 from ltepegproof_funtype_70;
        result = (ltepegproof_funtype_70_t)ivar_27;
        if (result != NULL) result->count++;

        return result;
}

ltepegproof_closure_73_t new_ltepegproof_closure_73(void){
        static struct ltepegproof_funtype_72_ftbl_s ftbl = {.fptr = (ltepegproof_funtype_70_t (*)(ltepegproof_funtype_72_t, uint32_t))&f_ltepegproof_closure_73, .mptr = (ltepegproof_funtype_70_t (*)(ltepegproof_funtype_72_t, uint32_t))&m_ltepegproof_closure_73, .rptr =  (void (*)(ltepegproof_funtype_72_t))&release_ltepegproof_closure_73, .cptr = (ltepegproof_funtype_72_t (*)(ltepegproof_funtype_72_t))&copy_ltepegproof_closure_73};
        ltepegproof_closure_73_t tmp = (ltepegproof_closure_73_t) safe_malloc(sizeof(struct ltepegproof_closure_73_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegproof_closure_73(ltepegproof_funtype_72_t closure){
        ltepegproof_closure_73_t x = (ltepegproof_closure_73_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepegproof_funtype_70(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegproof_closure_73_t copy_ltepegproof_closure_73(ltepegproof_closure_73_t x){
        ltepegproof_closure_73_t y = new_ltepegproof_closure_73();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ltepegproof_funtype_72_htbl_t new_htbl = (ltepegproof_funtype_72_htbl_t) safe_malloc(sizeof(struct ltepegproof_funtype_72_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegproof_funtype_72_hashentry_t * new_data = (ltepegproof_funtype_72_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegproof_funtype_72_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegproof_funtype_72_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern bool_t ltepegproof__defentp(ltepeg__ent_adt_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        ivar_1->count++;
        ivar_2 = (bool_t)r_ltepeg__failp((ltepeg__ent_adt_t)ivar_1);
        if (ivar_2){ 
             release_ltepeg__ent_adt(ivar_1);
             result = (bool_t) true;
} else {
        
             bool_t ivar_7;
             ivar_1->count++;
             ivar_7 = (bool_t)r_ltepeg__loopp((ltepeg__ent_adt_t)ivar_1);
             if (ivar_7){  
           release_ltepeg__ent_adt(ivar_1);
           result = (bool_t) true;
} else {
             
           result = (bool_t)r_ltepeg__goodp((ltepeg__ent_adt_t)ivar_1);
};
};

        
        return result;
}

extern bool_t r_ltepegproof__zerop(ltepegproof__parsetree_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltepegproof__parsetree_adt_index;
        release_ltepegproof__parsetree_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_ltepegproof__onep(ltepegproof__parsetree_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltepegproof__parsetree_adt_index;
        release_ltepegproof__parsetree_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_ltepegproof__twop(ltepegproof__parsetree_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)2;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltepegproof__parsetree_adt_index;
        release_ltepegproof__parsetree_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern ltepegproof__parsetree_adt_t update_ltepegproof__parsetree_adt_entry(ltepegproof__parsetree_adt_t ivar_1, ltepeg__ent_adt_t ivar_11){
        ltepegproof__parsetree_adt_t  result;
        bool_t ivar_13;
        uint32_t ivar_14;
        ivar_14 = (uint32_t)ivar_1->ltepegproof__parsetree_adt_index;
        uint32_t ivar_15;
        ivar_15 = (uint32_t)0;
        ivar_13 = (ivar_14 == ivar_15);
        if (ivar_13){ 
             ltepegproof__zero_t ivar_12;
             //copying to ltepegproof__zero from ltepegproof__parsetree_adt;
             ivar_12 = (ltepegproof__zero_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_ltepegproof__parsetree_adt(ivar_1);
             result = (ltepegproof__parsetree_adt_t)update_ltepegproof__zero_entry(ivar_12, ivar_11);
} else {
        
             bool_t ivar_17;
             uint32_t ivar_18;
             ivar_18 = (uint32_t)ivar_1->ltepegproof__parsetree_adt_index;
             uint32_t ivar_19;
             ivar_19 = (uint32_t)1;
             ivar_17 = (ivar_18 == ivar_19);
             if (ivar_17){  
           ltepegproof__one_t ivar_16;
           //copying to ltepegproof__one from ltepegproof__parsetree_adt;
           ivar_16 = (ltepegproof__one_t)ivar_1;
           if (ivar_16 != NULL) ivar_16->count++;
           release_ltepegproof__parsetree_adt(ivar_1);
           result = (ltepegproof__parsetree_adt_t)update_ltepegproof__one_entry(ivar_16, ivar_11);
} else {
             
           ltepegproof__two_t ivar_20;
           //copying to ltepegproof__two from ltepegproof__parsetree_adt;
           ivar_20 = (ltepegproof__two_t)ivar_1;
           if (ivar_20 != NULL) ivar_20->count++;
           release_ltepegproof__parsetree_adt(ivar_1);
           result = (ltepegproof__parsetree_adt_t)update_ltepegproof__two_entry(ivar_20, ivar_11);
};
};

        
        return result;
}

extern ltepeg__ent_adt_t ltepegproof__parsetree_adt_entry(ltepegproof__parsetree_adt_t ivar_1){
        ltepeg__ent_adt_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->ltepegproof__parsetree_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)0;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             ltepegproof__zero_t ivar_2;
             //copying to ltepegproof__zero from ltepegproof__parsetree_adt;
             ivar_2 = (ltepegproof__zero_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_ltepegproof__parsetree_adt(ivar_1);
             result = (ltepeg__ent_adt_t)ivar_2->entry;
             result->count++;
             release_ltepegproof__zero(ivar_2);
} else {
        
             bool_t ivar_7;
             uint32_t ivar_8;
             ivar_8 = (uint32_t)ivar_1->ltepegproof__parsetree_adt_index;
             uint32_t ivar_9;
             ivar_9 = (uint32_t)1;
             ivar_7 = (ivar_8 == ivar_9);
             if (ivar_7){  
           ltepegproof__one_t ivar_6;
           //copying to ltepegproof__one from ltepegproof__parsetree_adt;
           ivar_6 = (ltepegproof__one_t)ivar_1;
           if (ivar_6 != NULL) ivar_6->count++;
           release_ltepegproof__parsetree_adt(ivar_1);
           result = (ltepeg__ent_adt_t)ivar_6->entry;
           result->count++;
           release_ltepegproof__one(ivar_6);
} else {
             
           ltepegproof__two_t ivar_10;
           //copying to ltepegproof__two from ltepegproof__parsetree_adt;
           ivar_10 = (ltepegproof__two_t)ivar_1;
           if (ivar_10 != NULL) ivar_10->count++;
           release_ltepegproof__parsetree_adt(ivar_1);
           result = (ltepeg__ent_adt_t)ivar_10->entry;
           result->count++;
           release_ltepegproof__two(ivar_10);
};
};

        
        return result;
}

extern ltepegproof__parsetree_adt_t update_ltepegproof__parsetree_adt_subone(ltepegproof__parsetree_adt_t ivar_1, ltepegproof__parsetree_adt_t ivar_7){
        ltepegproof__parsetree_adt_t  result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->ltepegproof__parsetree_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)1;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             ltepegproof__one_t ivar_8;
             //copying to ltepegproof__one from ltepegproof__parsetree_adt;
             ivar_8 = (ltepegproof__one_t)ivar_1;
             if (ivar_8 != NULL) ivar_8->count++;
             release_ltepegproof__parsetree_adt(ivar_1);
             result = (ltepegproof__parsetree_adt_t)update_ltepegproof__one_subone(ivar_8, ivar_7);
} else {
        
             ltepegproof__two_t ivar_12;
             //copying to ltepegproof__two from ltepegproof__parsetree_adt;
             ivar_12 = (ltepegproof__two_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_ltepegproof__parsetree_adt(ivar_1);
             result = (ltepegproof__parsetree_adt_t)update_ltepegproof__two_subone(ivar_12, ivar_7);
};

        
        return result;
}

extern ltepegproof__parsetree_adt_t ltepegproof__parsetree_adt_subone(ltepegproof__parsetree_adt_t ivar_1){
        ltepegproof__parsetree_adt_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->ltepegproof__parsetree_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)1;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             ltepegproof__one_t ivar_2;
             //copying to ltepegproof__one from ltepegproof__parsetree_adt;
             ivar_2 = (ltepegproof__one_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_ltepegproof__parsetree_adt(ivar_1);
             result = (ltepegproof__parsetree_adt_t)ivar_2->subone;
             result->count++;
             release_ltepegproof__one(ivar_2);
} else {
        
             ltepegproof__two_t ivar_6;
             //copying to ltepegproof__two from ltepegproof__parsetree_adt;
             ivar_6 = (ltepegproof__two_t)ivar_1;
             if (ivar_6 != NULL) ivar_6->count++;
             release_ltepegproof__parsetree_adt(ivar_1);
             result = (ltepegproof__parsetree_adt_t)ivar_6->subone;
             result->count++;
             release_ltepegproof__two(ivar_6);
};

        
        return result;
}

extern ltepegproof__two_t update_ltepegproof__parsetree_adt_subtwo(ltepegproof__parsetree_adt_t ivar_1, ltepegproof__parsetree_adt_t ivar_3){
        ltepegproof__two_t  result;
        ltepegproof__two_t ivar_2;
        //copying to ltepegproof__two from ltepegproof__parsetree_adt;
        ivar_2 = (ltepegproof__two_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepegproof__parsetree_adt(ivar_1);
        result = (ltepegproof__two_t)update_ltepegproof__two_subtwo(ivar_2, ivar_3);

        
        return result;
}

extern ltepegproof__parsetree_adt_t ltepegproof__parsetree_adt_subtwo(ltepegproof__parsetree_adt_t ivar_1){
        ltepegproof__parsetree_adt_t  result;
        ltepegproof__two_t ivar_2;
        //copying to ltepegproof__two from ltepegproof__parsetree_adt;
        ivar_2 = (ltepegproof__two_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepegproof__parsetree_adt(ivar_1);
        result = (ltepegproof__parsetree_adt_t)ivar_2->subtwo;
        result->count++;
        release_ltepegproof__two(ivar_2);

        
        return result;
}

extern ltepegproof__parsetree_adt_t ltepegproof__zero(ltepeg__ent_adt_t ivar_2){
        ltepegproof__parsetree_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        ltepegproof__zero_t tmp92764 = new_ltepegproof__zero();;
        result = (ltepegproof__parsetree_adt_t)tmp92764;
        tmp92764->ltepegproof__parsetree_adt_index = (uint8_t)ivar_1;
        tmp92764->entry = (ltepeg__ent_adt_t)ivar_2;

        
        return result;
}

extern ltepegproof__parsetree_adt_t ltepegproof__one(ltepeg__ent_adt_t ivar_2, ltepegproof__parsetree_adt_t ivar_3){
        ltepegproof__parsetree_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        ltepegproof__one_t tmp92784 = new_ltepegproof__one();;
        result = (ltepegproof__parsetree_adt_t)tmp92784;
        tmp92784->ltepegproof__parsetree_adt_index = (uint8_t)ivar_1;
        tmp92784->entry = (ltepeg__ent_adt_t)ivar_2;
        tmp92784->subone = (ltepegproof__parsetree_adt_t)ivar_3;

        
        return result;
}

extern ltepegproof__parsetree_adt_t ltepegproof__two(ltepeg__ent_adt_t ivar_2, ltepegproof__parsetree_adt_t ivar_3, ltepegproof__parsetree_adt_t ivar_4){
        ltepegproof__parsetree_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)2;
        ltepegproof__two_t tmp92812 = new_ltepegproof__two();;
        result = (ltepegproof__parsetree_adt_t)tmp92812;
        tmp92812->ltepegproof__parsetree_adt_index = (uint8_t)ivar_1;
        tmp92812->entry = (ltepeg__ent_adt_t)ivar_2;
        tmp92812->subone = (ltepegproof__parsetree_adt_t)ivar_3;
        tmp92812->subtwo = (ltepegproof__parsetree_adt_t)ivar_4;

        
        return result;
}

extern ltepegproof_funtype_4_t ltepegproof__parsetree_ord(void){
        ltepegproof_funtype_4_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

extern uint8_t ltepegproof__ord__1(ltepegproof__parsetree_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_7;
        ivar_1->count++;
        ivar_7 = (bool_t)r_ltepegproof__zerop((ltepegproof__parsetree_adt_t)ivar_1);
        if (ivar_7){ 
             result = (uint8_t)0;
} else {
        
             bool_t ivar_19;
             ivar_1->count++;
             ivar_19 = (bool_t)r_ltepegproof__onep((ltepegproof__parsetree_adt_t)ivar_1);
             if (ivar_19){  
           result = (uint8_t)1;
} else {
             
           result = (uint8_t)2;
};
};

        
        return result;
}

extern bool_t ltepegproof__subterm__1(ltepegproof__parsetree_adt_t ivar_1, ltepegproof__parsetree_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_2->count++;
        ivar_3 = (bool_t) equal_ltepegproof__parsetree_adt(ivar_1, ivar_2);
        if (ivar_3){ 
             release_ltepegproof__parsetree_adt(ivar_1);
             release_ltepegproof__parsetree_adt(ivar_2);
             result = (bool_t) true;
} else {
        
             bool_t ivar_13;
             ivar_2->count++;
             ivar_13 = (bool_t)r_ltepegproof__zerop((ltepegproof__parsetree_adt_t)ivar_2);
             if (ivar_13){  
           release_ltepegproof__parsetree_adt(ivar_1);
           result = (bool_t) false;
} else {
             
           bool_t ivar_30;
           ivar_2->count++;
           ivar_30 = (bool_t)r_ltepegproof__onep((ltepegproof__parsetree_adt_t)ivar_2);
           if (ivar_30){   
           ltepegproof__parsetree_adt_t ivar_18;
           ivar_18 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subone((ltepegproof__parsetree_adt_t)ivar_2);
           result = (bool_t)ltepegproof__subterm__1((ltepegproof__parsetree_adt_t)ivar_1, (ltepegproof__parsetree_adt_t)ivar_18);
} else {
           
           ltepegproof__parsetree_adt_t ivar_35;
           ivar_2->count++;
           ivar_35 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subone((ltepegproof__parsetree_adt_t)ivar_2);
           ltepegproof__parsetree_adt_t ivar_36;
           ivar_36 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subtwo((ltepegproof__parsetree_adt_t)ivar_2);
           bool_t ivar_46;
           ivar_1->count++;
           ivar_46 = (bool_t)ltepegproof__subterm__1((ltepegproof__parsetree_adt_t)ivar_1, (ltepegproof__parsetree_adt_t)ivar_35);
           if (ivar_46){    
            release_ltepegproof__parsetree_adt(ivar_36);
            release_ltepegproof__parsetree_adt(ivar_1);
            result = (bool_t) true;
} else {
           
            result = (bool_t)ltepegproof__subterm__1((ltepegproof__parsetree_adt_t)ivar_1, (ltepegproof__parsetree_adt_t)ivar_36);
};
};
};
};

        
        return result;
}

extern bool_t ltepegproof__doublelessp__1(ltepegproof__parsetree_adt_t ivar_1, ltepegproof__parsetree_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_8;
        ivar_2->count++;
        ivar_8 = (bool_t)r_ltepegproof__zerop((ltepegproof__parsetree_adt_t)ivar_2);
        if (ivar_8){ 
             release_ltepegproof__parsetree_adt(ivar_1);
             result = (bool_t) false;
} else {
        
             bool_t ivar_31;
             ivar_2->count++;
             ivar_31 = (bool_t)r_ltepegproof__onep((ltepegproof__parsetree_adt_t)ivar_2);
             if (ivar_31){  
           ltepegproof__parsetree_adt_t ivar_13;
           ivar_13 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subone((ltepegproof__parsetree_adt_t)ivar_2);
           bool_t ivar_20;
           ivar_1->count++;
           ivar_13->count++;
           ivar_20 = (bool_t) equal_ltepegproof__parsetree_adt(ivar_1, ivar_13);
           if (ivar_20){   
           release_ltepegproof__parsetree_adt(ivar_13);
           release_ltepegproof__parsetree_adt(ivar_1);
           result = (bool_t) true;
} else {
           
           result = (bool_t)ltepegproof__doublelessp__1((ltepegproof__parsetree_adt_t)ivar_1, (ltepegproof__parsetree_adt_t)ivar_13);
};
} else {
             
           ltepegproof__parsetree_adt_t ivar_36;
           ivar_2->count++;
           ivar_36 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subone((ltepegproof__parsetree_adt_t)ivar_2);
           ltepegproof__parsetree_adt_t ivar_37;
           ivar_37 = (ltepegproof__parsetree_adt_t)ltepegproof__parsetree_adt_subtwo((ltepegproof__parsetree_adt_t)ivar_2);
           bool_t ivar_47;
           bool_t ivar_49;
           ivar_1->count++;
           ivar_36->count++;
           ivar_49 = (bool_t) equal_ltepegproof__parsetree_adt(ivar_1, ivar_36);
           if (ivar_49){   
           release_ltepegproof__parsetree_adt(ivar_36);
           ivar_47 = (bool_t) true;
} else {
           
           ivar_1->count++;
           ivar_47 = (bool_t)ltepegproof__doublelessp__1((ltepegproof__parsetree_adt_t)ivar_1, (ltepegproof__parsetree_adt_t)ivar_36);
};
           if (ivar_47){   
           release_ltepegproof__parsetree_adt(ivar_37);
           release_ltepegproof__parsetree_adt(ivar_1);
           result = (bool_t) true;
} else {
           
           bool_t ivar_60;
           ivar_1->count++;
           ivar_37->count++;
           ivar_60 = (bool_t) equal_ltepegproof__parsetree_adt(ivar_1, ivar_37);
           if (ivar_60){    
            release_ltepegproof__parsetree_adt(ivar_37);
            release_ltepegproof__parsetree_adt(ivar_1);
            result = (bool_t) true;
} else {
           
            result = (bool_t)ltepegproof__doublelessp__1((ltepegproof__parsetree_adt_t)ivar_1, (ltepegproof__parsetree_adt_t)ivar_37);
};
};
};
};

        
        return result;
}

extern ltepegproof_funtype_5_t ltepegproof__reduce_nat__1(ltepegproof_funtype_6_t ivar_1, ltepegproof_funtype_8_t ivar_3, ltepegproof_funtype_10_t ivar_5){
        ltepegproof_funtype_5_t  result;
        ltepegproof_closure_11_t cl93006;
        cl93006 = new_ltepegproof_closure_11();
        cl93006->fvar_1 = (ltepegproof_funtype_8_t)ivar_3;
        if (cl93006->fvar_1 != NULL) cl93006->fvar_1->count++;
        cl93006->fvar_2 = (ltepegproof_funtype_10_t)ivar_5;
        if (cl93006->fvar_2 != NULL) cl93006->fvar_2->count++;
        cl93006->fvar_3 = (ltepegproof_funtype_6_t)ivar_1;
        if (cl93006->fvar_3 != NULL) cl93006->fvar_3->count++;
        release_ltepegproof_funtype_8(ivar_3);
        release_ltepegproof_funtype_10(ivar_5);
        release_ltepegproof_funtype_6(ivar_1);
        result = (ltepegproof_funtype_5_t)cl93006;

        
        return result;
}

extern ltepegproof_funtype_5_t ltepegproof__REDUCE_nat__1(ltepegproof_funtype_13_t ivar_1, ltepegproof_funtype_15_t ivar_3, ltepegproof_funtype_17_t ivar_5){
        ltepegproof_funtype_5_t  result;
        ltepegproof_closure_18_t cl93218;
        cl93218 = new_ltepegproof_closure_18();
        cl93218->fvar_1 = (ltepegproof_funtype_15_t)ivar_3;
        if (cl93218->fvar_1 != NULL) cl93218->fvar_1->count++;
        cl93218->fvar_2 = (ltepegproof_funtype_17_t)ivar_5;
        if (cl93218->fvar_2 != NULL) cl93218->fvar_2->count++;
        cl93218->fvar_3 = (ltepegproof_funtype_13_t)ivar_1;
        if (cl93218->fvar_3 != NULL) cl93218->fvar_3->count++;
        release_ltepegproof_funtype_15(ivar_3);
        release_ltepegproof_funtype_17(ivar_5);
        release_ltepegproof_funtype_13(ivar_1);
        result = (ltepegproof_funtype_5_t)cl93218;

        
        return result;
}

extern ltepegproof_funtype_19_t ltepegproof__reduce_ordinal__1(ltepegproof_funtype_20_t ivar_1, ltepegproof_funtype_22_t ivar_3, ltepegproof_funtype_24_t ivar_5){
        ltepegproof_funtype_19_t  result;
        ltepegproof_closure_25_t cl93457;
        cl93457 = new_ltepegproof_closure_25();
        cl93457->fvar_1 = (ltepegproof_funtype_22_t)ivar_3;
        if (cl93457->fvar_1 != NULL) cl93457->fvar_1->count++;
        cl93457->fvar_2 = (ltepegproof_funtype_24_t)ivar_5;
        if (cl93457->fvar_2 != NULL) cl93457->fvar_2->count++;
        cl93457->fvar_3 = (ltepegproof_funtype_20_t)ivar_1;
        if (cl93457->fvar_3 != NULL) cl93457->fvar_3->count++;
        release_ltepegproof_funtype_22(ivar_3);
        release_ltepegproof_funtype_24(ivar_5);
        release_ltepegproof_funtype_20(ivar_1);
        result = (ltepegproof_funtype_19_t)cl93457;

        
        return result;
}

extern ltepegproof_funtype_19_t ltepegproof__REDUCE_ordinal__1(ltepegproof_funtype_26_t ivar_1, ltepegproof_funtype_28_t ivar_3, ltepegproof_funtype_30_t ivar_5){
        ltepegproof_funtype_19_t  result;
        ltepegproof_closure_31_t cl93766;
        cl93766 = new_ltepegproof_closure_31();
        cl93766->fvar_1 = (ltepegproof_funtype_28_t)ivar_3;
        if (cl93766->fvar_1 != NULL) cl93766->fvar_1->count++;
        cl93766->fvar_2 = (ltepegproof_funtype_30_t)ivar_5;
        if (cl93766->fvar_2 != NULL) cl93766->fvar_2->count++;
        cl93766->fvar_3 = (ltepegproof_funtype_26_t)ivar_1;
        if (cl93766->fvar_3 != NULL) cl93766->fvar_3->count++;
        release_ltepegproof_funtype_28(ivar_3);
        release_ltepegproof_funtype_30(ivar_5);
        release_ltepegproof_funtype_26(ivar_1);
        result = (ltepegproof_funtype_19_t)cl93766;

        
        return result;
}

extern bool_t r_ltepegproof__qemptyp(ltepegproof__qstack_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltepegproof__qstack_adt_index;
        release_ltepegproof__qstack_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_ltepegproof__qpushp(ltepegproof__qstack_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->ltepegproof__qstack_adt_index;
        release_ltepegproof__qstack_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern ltepegproof__qpush_t update_ltepegproof__qstack_adt_nonterm(ltepegproof__qstack_adt_t ivar_1, uint8_t ivar_3){
        ltepegproof__qpush_t  result;
        ltepegproof__qpush_t ivar_2;
        //copying to ltepegproof__qpush from ltepegproof__qstack_adt;
        ivar_2 = (ltepegproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepegproof__qstack_adt(ivar_1);
        result = (ltepegproof__qpush_t)update_ltepegproof__qpush_nonterm(ivar_2, ivar_3);

        
        return result;
}

extern uint8_t ltepegproof__qstack_adt_nonterm(ltepegproof__qstack_adt_t ivar_1){
        uint8_t  result;
        ltepegproof__qpush_t ivar_2;
        //copying to ltepegproof__qpush from ltepegproof__qstack_adt;
        ivar_2 = (ltepegproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepegproof__qstack_adt(ivar_1);
        result = (uint8_t)ivar_2->nonterm;
        release_ltepegproof__qpush(ivar_2);

        
        return result;
}

extern ltepegproof__qpush_t update_ltepegproof__qstack_adt_pos(ltepegproof__qstack_adt_t ivar_1, uint32_t ivar_3){
        ltepegproof__qpush_t  result;
        ltepegproof__qpush_t ivar_2;
        //copying to ltepegproof__qpush from ltepegproof__qstack_adt;
        ivar_2 = (ltepegproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepegproof__qstack_adt(ivar_1);
        result = (ltepegproof__qpush_t)update_ltepegproof__qpush_pos(ivar_2, ivar_3);

        
        return result;
}

extern uint32_t ltepegproof__qstack_adt_pos(ltepegproof__qstack_adt_t ivar_1){
        uint32_t  result;
        ltepegproof__qpush_t ivar_2;
        //copying to ltepegproof__qpush from ltepegproof__qstack_adt;
        ivar_2 = (ltepegproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepegproof__qstack_adt(ivar_1);
        result = (uint32_t)ivar_2->pos;
        release_ltepegproof__qpush(ivar_2);

        
        return result;
}

extern ltepegproof__qpush_t update_ltepegproof__qstack_adt_qpop(ltepegproof__qstack_adt_t ivar_1, ltepegproof__qstack_adt_t ivar_3){
        ltepegproof__qpush_t  result;
        ltepegproof__qpush_t ivar_2;
        //copying to ltepegproof__qpush from ltepegproof__qstack_adt;
        ivar_2 = (ltepegproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepegproof__qstack_adt(ivar_1);
        result = (ltepegproof__qpush_t)update_ltepegproof__qpush_qpop(ivar_2, ivar_3);

        
        return result;
}

extern ltepegproof__qstack_adt_t ltepegproof__qstack_adt_qpop(ltepegproof__qstack_adt_t ivar_1){
        ltepegproof__qstack_adt_t  result;
        ltepegproof__qpush_t ivar_2;
        //copying to ltepegproof__qpush from ltepegproof__qstack_adt;
        ivar_2 = (ltepegproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_ltepegproof__qstack_adt(ivar_1);
        result = (ltepegproof__qstack_adt_t)ivar_2->qpop;
        result->count++;
        release_ltepegproof__qpush(ivar_2);

        
        return result;
}

extern ltepegproof__qstack_adt_t ltepegproof__qempty(void){
        ltepegproof__qstack_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        ltepegproof__qstack_adt_t tmp94023 = new_ltepegproof__qstack_adt();;
        result = (ltepegproof__qstack_adt_t)tmp94023;
        tmp94023->ltepegproof__qstack_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern ltepegproof__qstack_adt_t ltepegproof__qpush(uint8_t ivar_2, uint32_t ivar_3, ltepegproof__qstack_adt_t ivar_4){
        ltepegproof__qstack_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        ltepegproof__qpush_t tmp94039 = new_ltepegproof__qpush();;
        result = (ltepegproof__qstack_adt_t)tmp94039;
        tmp94039->ltepegproof__qstack_adt_index = (uint8_t)ivar_1;
        tmp94039->nonterm = (uint8_t)ivar_2;
        tmp94039->pos = (uint32_t)ivar_3;
        tmp94039->qpop = (ltepegproof__qstack_adt_t)ivar_4;

        
        return result;
}

extern ltepegproof_funtype_34_t ltepegproof__qstack_ord(void){
        ltepegproof_funtype_34_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

extern uint8_t ltepegproof__ord__2(ltepegproof__qstack_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)r_ltepegproof__qemptyp((ltepegproof__qstack_adt_t)ivar_1);
        if (ivar_3){ 
             release_ltepegproof__qstack_adt(ivar_1);
             result = (uint8_t)0;
} else {
        
             result = (uint8_t)1;
};

        
        return result;
}

extern bool_t ltepegproof__subterm__2(ltepegproof__qstack_adt_t ivar_1, ltepegproof__qstack_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_2->count++;
        ivar_3 = (bool_t) equal_ltepegproof__qstack_adt(ivar_1, ivar_2);
        if (ivar_3){ 
             release_ltepegproof__qstack_adt(ivar_1);
             release_ltepegproof__qstack_adt(ivar_2);
             result = (bool_t) true;
} else {
        
             bool_t ivar_9;
             ivar_2->count++;
             ivar_9 = (bool_t)r_ltepegproof__qemptyp((ltepegproof__qstack_adt_t)ivar_2);
             if (ivar_9){  
           release_ltepegproof__qstack_adt(ivar_1);
           release_ltepegproof__qstack_adt(ivar_2);
           result = (bool_t) false;
} else {
             
           ltepegproof__qstack_adt_t ivar_15;
           ivar_15 = (ltepegproof__qstack_adt_t)ltepegproof__qstack_adt_qpop((ltepegproof__qstack_adt_t)ivar_2);
           result = (bool_t)ltepegproof__subterm__2((ltepegproof__qstack_adt_t)ivar_1, (ltepegproof__qstack_adt_t)ivar_15);
};
};

        
        return result;
}

extern bool_t ltepegproof__doublelessp__2(ltepegproof__qstack_adt_t ivar_1, ltepegproof__qstack_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_4;
        ivar_2->count++;
        ivar_4 = (bool_t)r_ltepegproof__qemptyp((ltepegproof__qstack_adt_t)ivar_2);
        if (ivar_4){ 
             release_ltepegproof__qstack_adt(ivar_1);
             release_ltepegproof__qstack_adt(ivar_2);
             result = (bool_t) false;
} else {
        
             ltepegproof__qstack_adt_t ivar_10;
             ivar_10 = (ltepegproof__qstack_adt_t)ltepegproof__qstack_adt_qpop((ltepegproof__qstack_adt_t)ivar_2);
             bool_t ivar_20;
             ivar_1->count++;
             ivar_10->count++;
             ivar_20 = (bool_t) equal_ltepegproof__qstack_adt(ivar_1, ivar_10);
             if (ivar_20){  
           release_ltepegproof__qstack_adt(ivar_10);
           release_ltepegproof__qstack_adt(ivar_1);
           result = (bool_t) true;
} else {
             
           result = (bool_t)ltepegproof__doublelessp__2((ltepegproof__qstack_adt_t)ivar_1, (ltepegproof__qstack_adt_t)ivar_10);
};
};

        
        return result;
}

extern ltepegproof_funtype_35_t ltepegproof__reduce_nat__2(mpz_ptr_t ivar_1, ltepegproof_funtype_37_t ivar_2){
        ltepegproof_funtype_35_t  result;
        ltepegproof_closure_38_t cl94142;
        cl94142 = new_ltepegproof_closure_38();
        cl94142->fvar_1 = (ltepegproof_funtype_37_t)ivar_2;
        if (cl94142->fvar_1 != NULL) cl94142->fvar_1->count++;
        mpz_set(cl94142->fvar_2, ivar_1);
        release_ltepegproof_funtype_37(ivar_2);
        result = (ltepegproof_funtype_35_t)cl94142;

        
        return result;
}

extern ltepegproof_funtype_35_t ltepegproof__REDUCE_nat__2(ltepegproof_funtype_35_t ivar_1, ltepegproof_funtype_40_t ivar_3){
        ltepegproof_funtype_35_t  result;
        ltepegproof_closure_41_t cl94232;
        cl94232 = new_ltepegproof_closure_41();
        cl94232->fvar_1 = (ltepegproof_funtype_40_t)ivar_3;
        if (cl94232->fvar_1 != NULL) cl94232->fvar_1->count++;
        cl94232->fvar_2 = (ltepegproof_funtype_35_t)ivar_1;
        if (cl94232->fvar_2 != NULL) cl94232->fvar_2->count++;
        release_ltepegproof_funtype_40(ivar_3);
        release_ltepegproof_funtype_35(ivar_1);
        result = (ltepegproof_funtype_35_t)cl94232;

        
        return result;
}

extern ltepegproof_funtype_42_t ltepegproof__reduce_ordinal__2(ordstruct_adt__ordstruct_adt_t ivar_1, ltepegproof_funtype_44_t ivar_2){
        ltepegproof_funtype_42_t  result;
        ltepegproof_closure_45_t cl94349;
        cl94349 = new_ltepegproof_closure_45();
        cl94349->fvar_1 = (ltepegproof_funtype_44_t)ivar_2;
        if (cl94349->fvar_1 != NULL) cl94349->fvar_1->count++;
        cl94349->fvar_2 = (ordstruct_adt__ordstruct_adt_t)ivar_1;
        if (cl94349->fvar_2 != NULL) cl94349->fvar_2->count++;
        release_ltepegproof_funtype_44(ivar_2);
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (ltepegproof_funtype_42_t)cl94349;

        
        return result;
}

extern ltepegproof_funtype_42_t ltepegproof__REDUCE_ordinal__2(ltepegproof_funtype_42_t ivar_1, ltepegproof_funtype_47_t ivar_3){
        ltepegproof_funtype_42_t  result;
        ltepegproof_closure_48_t cl94491;
        cl94491 = new_ltepegproof_closure_48();
        cl94491->fvar_1 = (ltepegproof_funtype_47_t)ivar_3;
        if (cl94491->fvar_1 != NULL) cl94491->fvar_1->count++;
        cl94491->fvar_2 = (ltepegproof_funtype_42_t)ivar_1;
        if (cl94491->fvar_2 != NULL) cl94491->fvar_2->count++;
        release_ltepegproof_funtype_47(ivar_3);
        release_ltepegproof_funtype_42(ivar_1);
        result = (ltepegproof_funtype_42_t)cl94491;

        
        return result;
}

extern bool_t ltepegproof__inqstack(uint8_t ivar_1, uint32_t ivar_2, ltepegproof__qstack_adt_t ivar_3){
        bool_t  result;
        bool_t ivar_36;
        ivar_3->count++;
        ivar_36 = (bool_t)r_ltepegproof__qpushp((ltepegproof__qstack_adt_t)ivar_3);
        if (ivar_36){ 
             uint8_t ivar_5;
             ivar_3->count++;
             ivar_5 = (uint8_t)ltepegproof__qstack_adt_nonterm((ltepegproof__qstack_adt_t)ivar_3);
             uint32_t ivar_6;
             ivar_3->count++;
             ivar_6 = (uint32_t)ltepegproof__qstack_adt_pos((ltepegproof__qstack_adt_t)ivar_3);
             ltepegproof__qstack_adt_t ivar_7;
             ivar_7 = (ltepegproof__qstack_adt_t)ltepegproof__qstack_adt_qpop((ltepegproof__qstack_adt_t)ivar_3);
             bool_t ivar_17;
             bool_t ivar_19;
             ivar_19 = (ivar_1 == ivar_5);
             if (ivar_19){  
           ivar_17 = (ivar_2 == ivar_6);
} else {
             
           ivar_17 = (bool_t) false;
};
             if (ivar_17){  
           release_ltepegproof__qstack_adt(ivar_7);
           result = (bool_t) true;
} else {
             
           result = (bool_t)ltepegproof__inqstack((uint8_t)ivar_1, (uint32_t)ivar_2, (ltepegproof__qstack_adt_t)ivar_7);
};
} else {
        
             release_ltepegproof__qstack_adt(ivar_3);
             result = (bool_t) false;
};

        
        return result;
}

extern mpz_ptr_t ltepegproof__stacksize(ltepegproof__qstack_adt_t ivar_1){
        mpz_ptr_t  result;
        bool_t ivar_21;
        ivar_1->count++;
        ivar_21 = (bool_t)r_ltepegproof__qpushp((ltepegproof__qstack_adt_t)ivar_1);
        if (ivar_21){ 
             ltepegproof__qstack_adt_t ivar_5;
             ivar_5 = (ltepegproof__qstack_adt_t)ltepegproof__qstack_adt_qpop((ltepegproof__qstack_adt_t)ivar_1);
             mpz_ptr_t ivar_15;
             ivar_15 = (mpz_ptr_t)ltepegproof__stacksize((ltepegproof__qstack_adt_t)ivar_5);
             uint8_t ivar_16;
             ivar_16 = (uint8_t)1;
             mpz_mk_set_ui(result, (uint64_t)ivar_16);
             mpz_add(result, result, ivar_15);
} else {
        
             release_ltepegproof__qstack_adt(ivar_1);
             result = safe_malloc(sizeof(mpz_t));
             mpz_init(result);
             mpz_mk_set_ui(result, 0);
};

        
        return result;
}

extern ltepegproof_funtype_49_t ltepegproof__good_qstackp(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepegproof_array_50_t ivar_3, ltepegproof_array_52_t ivar_4){
        ltepegproof_funtype_49_t  result;
        ltepegproof_closure_53_t cl94591;
        cl94591 = new_ltepegproof_closure_53();
        cl94591->fvar_1 = (ltepegproof_array_50_t)ivar_3;
        if (cl94591->fvar_1 != NULL) cl94591->fvar_1->count++;
        cl94591->fvar_2 = (uint32_t)ivar_1;
        cl94591->fvar_3 = (ltepegproof_array_52_t)ivar_4;
        if (cl94591->fvar_3 != NULL) cl94591->fvar_3->count++;
        cl94591->fvar_4 = (ltepeg__lang_spec_t)ivar_2;
        if (cl94591->fvar_4 != NULL) cl94591->fvar_4->count++;
        release_ltepegproof_array_52(ivar_4);
        release_ltepegproof_array_50(ivar_3);
        release_ltepeg__lang_spec(ivar_2);
        result = (ltepegproof_funtype_49_t)cl94591;

        
        return result;
}

extern ltepegproof_funtype_55_t ltepegproof__good_parsetreep(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepegproof_array_50_t ivar_3){
        ltepegproof_funtype_55_t  result;
        ltepegproof_closure_56_t cl94980;
        cl94980 = new_ltepegproof_closure_56();
        cl94980->fvar_1 = (ltepegproof_array_50_t)ivar_3;
        if (cl94980->fvar_1 != NULL) cl94980->fvar_1->count++;
        cl94980->fvar_2 = (uint32_t)ivar_1;
        cl94980->fvar_3 = (ltepeg__lang_spec_t)ivar_2;
        if (cl94980->fvar_3 != NULL) cl94980->fvar_3->count++;
        release_ltepegproof_array_50(ivar_3);
        release_ltepeg__lang_spec(ivar_2);
        result = (ltepegproof_funtype_55_t)cl94980;

        
        return result;
}

extern ltepegproof_funtype_61_t ltepegproof__buildtree(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepegproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5){
        ltepegproof_funtype_61_t  result;
        ltepegproof_closure_62_t cl95479;
        cl95479 = new_ltepegproof_closure_62();
        cl95479->fvar_1 = (uint32_t)ivar_1;
        cl95479->fvar_2 = (ltepeg__lang_spec_t)ivar_2;
        if (cl95479->fvar_2 != NULL) cl95479->fvar_2->count++;
        cl95479->fvar_3 = (ltepegproof_array_50_t)ivar_3;
        if (cl95479->fvar_3 != NULL) cl95479->fvar_3->count++;
        cl95479->fvar_4 = (uint8_t)ivar_5;
        cl95479->fvar_5 = (uint32_t)ivar_4;
        release_ltepeg__lang_spec(ivar_2);
        release_ltepegproof_array_50(ivar_3);
        result = (ltepegproof_funtype_61_t)cl95479;

        
        return result;
}

extern ltepegproof_funtype_64_t ltepegproof__buildloop(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepegproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5){
        ltepegproof_funtype_64_t  result;
        ltepegproof_closure_65_t cl96106;
        cl96106 = new_ltepegproof_closure_65();
        cl96106->fvar_1 = (uint32_t)ivar_1;
        cl96106->fvar_2 = (ltepeg__lang_spec_t)ivar_2;
        if (cl96106->fvar_2 != NULL) cl96106->fvar_2->count++;
        cl96106->fvar_3 = (ltepegproof_array_50_t)ivar_3;
        if (cl96106->fvar_3 != NULL) cl96106->fvar_3->count++;
        cl96106->fvar_4 = (uint8_t)ivar_5;
        cl96106->fvar_5 = (uint32_t)ivar_4;
        release_ltepeg__lang_spec(ivar_2);
        release_ltepegproof_array_50(ivar_3);
        result = (ltepegproof_funtype_64_t)cl96106;

        
        return result;
}

extern ltepegproof_funtype_68_t ltepegproof__buildproof(uint32_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepegproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5){
        ltepegproof_funtype_68_t  result;
        ltepegproof_closure_69_t cl96382;
        cl96382 = new_ltepegproof_closure_69();
        cl96382->fvar_1 = (uint32_t)ivar_4;
        cl96382->fvar_2 = (uint32_t)ivar_1;
        cl96382->fvar_3 = (uint8_t)ivar_5;
        cl96382->fvar_4 = (ltepegproof_array_50_t)ivar_3;
        if (cl96382->fvar_4 != NULL) cl96382->fvar_4->count++;
        cl96382->fvar_5 = (ltepeg__lang_spec_t)ivar_2;
        if (cl96382->fvar_5 != NULL) cl96382->fvar_5->count++;
        release_ltepegproof_array_50(ivar_3);
        release_ltepeg__lang_spec(ivar_2);
        result = (ltepegproof_funtype_68_t)cl96382;

        
        return result;
}