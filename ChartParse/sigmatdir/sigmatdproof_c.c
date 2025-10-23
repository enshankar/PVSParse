//Code generated using pvs2ir2c
#include "sigmatdproof_c.h"


sigmatdproof__parsetree_adt_t new_sigmatdproof__parsetree_adt(void){
        sigmatdproof__parsetree_adt_t tmp = (sigmatdproof__parsetree_adt_t) safe_malloc(sizeof(struct sigmatdproof__parsetree_adt_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof__parsetree_adt(sigmatdproof__parsetree_adt_t x){
switch (x->sigmatdproof__parsetree_adt_index) {
case 0:  release_sigmatdproof__zero((sigmatdproof__zero_t) x); break;
case 1:  release_sigmatdproof__one((sigmatdproof__one_t) x); break;
case 2:  release_sigmatdproof__two((sigmatdproof__two_t) x); break;
}}

void release_sigmatdproof__parsetree_adt_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof__parsetree_adt((sigmatdproof__parsetree_adt_t)x);
}

sigmatdproof__parsetree_adt_t copy_sigmatdproof__parsetree_adt(sigmatdproof__parsetree_adt_t x){
        sigmatdproof__parsetree_adt_t y = new_sigmatdproof__parsetree_adt();
        y->sigmatdproof__parsetree_adt_index = (uint8_t)x->sigmatdproof__parsetree_adt_index;
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof__parsetree_adt(sigmatdproof__parsetree_adt_t x, sigmatdproof__parsetree_adt_t y){
        bool_t tmp = x->sigmatdproof__parsetree_adt_index == y->sigmatdproof__parsetree_adt_index;
        switch  (x->sigmatdproof__parsetree_adt_index) {
                case 0: tmp = tmp && equal_sigmatdproof__zero((sigmatdproof__zero_t) x, (sigmatdproof__zero_t) y); break;
                case 1: tmp = tmp && equal_sigmatdproof__one((sigmatdproof__one_t) x, (sigmatdproof__one_t) y); break;
                case 2: tmp = tmp && equal_sigmatdproof__two((sigmatdproof__two_t) x, (sigmatdproof__two_t) y); break;
        }
        return tmp;
}

char * json_sigmatdproof__parsetree_adt(sigmatdproof__parsetree_adt_t x){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ constructor = %u", x->sigmatdproof__parsetree_adt_index);
        switch  (x->sigmatdproof__parsetree_adt_index) {
                case 0: tmp = safe_strcat(tmp, json_sigmatdproof__zero((sigmatdproof__zero_t) x)); break;
                case 1: tmp = safe_strcat(tmp, json_sigmatdproof__one((sigmatdproof__one_t) x)); break;
                case 2: tmp = safe_strcat(tmp, json_sigmatdproof__two((sigmatdproof__two_t) x)); break;
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_sigmatdproof__parsetree_adt_ptr(pointer_t x, pointer_t y, actual_sigmatdproof__parsetree_adt_t T){
        return equal_sigmatdproof__parsetree_adt((sigmatdproof__parsetree_adt_t)x, (sigmatdproof__parsetree_adt_t)y);
}

char * json_sigmatdproof__parsetree_adt_ptr(pointer_t x, actual_sigmatdproof__parsetree_adt_t T){
        return json_sigmatdproof__parsetree_adt((sigmatdproof__parsetree_adt_t)x);
}

actual_sigmatdproof__parsetree_adt_t actual_sigmatdproof__parsetree_adt(){
        actual_sigmatdproof__parsetree_adt_t new = (actual_sigmatdproof__parsetree_adt_t)safe_malloc(sizeof(struct actual_sigmatdproof__parsetree_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof__parsetree_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof__parsetree_adt_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof__parsetree_adt_ptr);
 

 
        return new;
 };

sigmatdproof__parsetree_adt_t update_sigmatdproof__parsetree_adt_sigmatdproof__parsetree_adt_index(sigmatdproof__parsetree_adt_t x, uint8_t v){
        sigmatdproof__parsetree_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof__parsetree_adt(x); x->count--;};
        y->sigmatdproof__parsetree_adt_index = (uint8_t)v;
        return y;}




sigmatdproof__zero_t new_sigmatdproof__zero(void){
        sigmatdproof__zero_t tmp = (sigmatdproof__zero_t) safe_malloc(sizeof(struct sigmatdproof__zero_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof__zero(sigmatdproof__zero_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__ent_adt(x->entry);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof__zero_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof__zero((sigmatdproof__zero_t)x);
}

sigmatdproof__zero_t copy_sigmatdproof__zero(sigmatdproof__zero_t x){
        sigmatdproof__zero_t y = new_sigmatdproof__zero();
        y->sigmatdproof__parsetree_adt_index = (uint8_t)x->sigmatdproof__parsetree_adt_index;
        y->entry = x->entry;
        if (y->entry != NULL){y->entry->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof__zero(sigmatdproof__zero_t x, sigmatdproof__zero_t y){
        bool_t tmp = true;
        tmp = tmp && x->sigmatdproof__parsetree_adt_index == y->sigmatdproof__parsetree_adt_index;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->entry, y->entry);
        return tmp;}

char * json_sigmatdproof__zero(sigmatdproof__zero_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(45);
         sprintf(fld0, "\"sigmatdproof__parsetree_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->sigmatdproof__parsetree_adt_index));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"entry\" : ");
        tmp[1] = safe_strcat(fld1, json_sigmatopdown__ent_adt(x->entry));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof__zero_ptr(pointer_t x, pointer_t y, actual_sigmatdproof__zero_t T){
        return equal_sigmatdproof__zero((sigmatdproof__zero_t)x, (sigmatdproof__zero_t)y);
}

char * json_sigmatdproof__zero_ptr(pointer_t x, actual_sigmatdproof__zero_t T){
        return json_sigmatdproof__zero((sigmatdproof__zero_t)x);
}

actual_sigmatdproof__zero_t actual_sigmatdproof__zero(){
        actual_sigmatdproof__zero_t new = (actual_sigmatdproof__zero_t)safe_malloc(sizeof(struct actual_sigmatdproof__zero_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof__zero_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof__zero_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof__zero_ptr);
 

 
        return new;
 };

sigmatdproof__zero_t update_sigmatdproof__zero_sigmatdproof__parsetree_adt_index(sigmatdproof__zero_t x, uint8_t v){
        sigmatdproof__zero_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof__zero(x); x->count--;};
        y->sigmatdproof__parsetree_adt_index = (uint8_t)v;
        return y;}

sigmatdproof__zero_t update_sigmatdproof__zero_entry(sigmatdproof__zero_t x, sigmatopdown__ent_adt_t v){
        sigmatdproof__zero_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->entry != NULL){release_sigmatopdown__ent_adt(x->entry);};}
        else {y = copy_sigmatdproof__zero(x); x->count--; y->entry->count--;};
        y->entry = (sigmatopdown__ent_adt_t)v;
        return y;}




sigmatdproof__one_t new_sigmatdproof__one(void){
        sigmatdproof__one_t tmp = (sigmatdproof__one_t) safe_malloc(sizeof(struct sigmatdproof__one_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof__one(sigmatdproof__one_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__ent_adt(x->entry);
         release_sigmatdproof__parsetree_adt(x->subone);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof__one_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof__one((sigmatdproof__one_t)x);
}

sigmatdproof__one_t copy_sigmatdproof__one(sigmatdproof__one_t x){
        sigmatdproof__one_t y = new_sigmatdproof__one();
        y->sigmatdproof__parsetree_adt_index = (uint8_t)x->sigmatdproof__parsetree_adt_index;
        y->entry = x->entry;
        if (y->entry != NULL){y->entry->count++;};
        y->subone = x->subone;
        if (y->subone != NULL){y->subone->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof__one(sigmatdproof__one_t x, sigmatdproof__one_t y){
        bool_t tmp = true;
        tmp = tmp && x->sigmatdproof__parsetree_adt_index == y->sigmatdproof__parsetree_adt_index;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->entry, y->entry);
        tmp = tmp && equal_sigmatdproof__parsetree_adt(x->subone, y->subone);
        return tmp;}

char * json_sigmatdproof__one(sigmatdproof__one_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(45);
         sprintf(fld0, "\"sigmatdproof__parsetree_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->sigmatdproof__parsetree_adt_index));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"entry\" : ");
        tmp[1] = safe_strcat(fld1, json_sigmatopdown__ent_adt(x->entry));
        char * fld2 = safe_malloc(18);
         sprintf(fld2, "\"subone\" : ");
        tmp[2] = safe_strcat(fld2, json_sigmatdproof__parsetree_adt(x->subone));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof__one_ptr(pointer_t x, pointer_t y, actual_sigmatdproof__one_t T){
        return equal_sigmatdproof__one((sigmatdproof__one_t)x, (sigmatdproof__one_t)y);
}

char * json_sigmatdproof__one_ptr(pointer_t x, actual_sigmatdproof__one_t T){
        return json_sigmatdproof__one((sigmatdproof__one_t)x);
}

actual_sigmatdproof__one_t actual_sigmatdproof__one(){
        actual_sigmatdproof__one_t new = (actual_sigmatdproof__one_t)safe_malloc(sizeof(struct actual_sigmatdproof__one_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof__one_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof__one_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof__one_ptr);
 

 
        return new;
 };

sigmatdproof__one_t update_sigmatdproof__one_sigmatdproof__parsetree_adt_index(sigmatdproof__one_t x, uint8_t v){
        sigmatdproof__one_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof__one(x); x->count--;};
        y->sigmatdproof__parsetree_adt_index = (uint8_t)v;
        return y;}

sigmatdproof__one_t update_sigmatdproof__one_entry(sigmatdproof__one_t x, sigmatopdown__ent_adt_t v){
        sigmatdproof__one_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->entry != NULL){release_sigmatopdown__ent_adt(x->entry);};}
        else {y = copy_sigmatdproof__one(x); x->count--; y->entry->count--;};
        y->entry = (sigmatopdown__ent_adt_t)v;
        return y;}

sigmatdproof__one_t update_sigmatdproof__one_subone(sigmatdproof__one_t x, sigmatdproof__parsetree_adt_t v){
        sigmatdproof__one_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->subone != NULL){release_sigmatdproof__parsetree_adt(x->subone);};}
        else {y = copy_sigmatdproof__one(x); x->count--; y->subone->count--;};
        y->subone = (sigmatdproof__parsetree_adt_t)v;
        return y;}




sigmatdproof__two_t new_sigmatdproof__two(void){
        sigmatdproof__two_t tmp = (sigmatdproof__two_t) safe_malloc(sizeof(struct sigmatdproof__two_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof__two(sigmatdproof__two_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__ent_adt(x->entry);
         release_sigmatdproof__parsetree_adt(x->subone);
         release_sigmatdproof__parsetree_adt(x->subtwo);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof__two_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof__two((sigmatdproof__two_t)x);
}

sigmatdproof__two_t copy_sigmatdproof__two(sigmatdproof__two_t x){
        sigmatdproof__two_t y = new_sigmatdproof__two();
        y->sigmatdproof__parsetree_adt_index = (uint8_t)x->sigmatdproof__parsetree_adt_index;
        y->entry = x->entry;
        if (y->entry != NULL){y->entry->count++;};
        y->subone = x->subone;
        if (y->subone != NULL){y->subone->count++;};
        y->subtwo = x->subtwo;
        if (y->subtwo != NULL){y->subtwo->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof__two(sigmatdproof__two_t x, sigmatdproof__two_t y){
        bool_t tmp = true;
        tmp = tmp && x->sigmatdproof__parsetree_adt_index == y->sigmatdproof__parsetree_adt_index;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->entry, y->entry);
        tmp = tmp && equal_sigmatdproof__parsetree_adt(x->subone, y->subone);
        tmp = tmp && equal_sigmatdproof__parsetree_adt(x->subtwo, y->subtwo);
        return tmp;}

char * json_sigmatdproof__two(sigmatdproof__two_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(45);
         sprintf(fld0, "\"sigmatdproof__parsetree_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->sigmatdproof__parsetree_adt_index));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"entry\" : ");
        tmp[1] = safe_strcat(fld1, json_sigmatopdown__ent_adt(x->entry));
        char * fld2 = safe_malloc(18);
         sprintf(fld2, "\"subone\" : ");
        tmp[2] = safe_strcat(fld2, json_sigmatdproof__parsetree_adt(x->subone));
        char * fld3 = safe_malloc(18);
         sprintf(fld3, "\"subtwo\" : ");
        tmp[3] = safe_strcat(fld3, json_sigmatdproof__parsetree_adt(x->subtwo));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof__two_ptr(pointer_t x, pointer_t y, actual_sigmatdproof__two_t T){
        return equal_sigmatdproof__two((sigmatdproof__two_t)x, (sigmatdproof__two_t)y);
}

char * json_sigmatdproof__two_ptr(pointer_t x, actual_sigmatdproof__two_t T){
        return json_sigmatdproof__two((sigmatdproof__two_t)x);
}

actual_sigmatdproof__two_t actual_sigmatdproof__two(){
        actual_sigmatdproof__two_t new = (actual_sigmatdproof__two_t)safe_malloc(sizeof(struct actual_sigmatdproof__two_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof__two_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof__two_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof__two_ptr);
 

 
        return new;
 };

sigmatdproof__two_t update_sigmatdproof__two_sigmatdproof__parsetree_adt_index(sigmatdproof__two_t x, uint8_t v){
        sigmatdproof__two_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof__two(x); x->count--;};
        y->sigmatdproof__parsetree_adt_index = (uint8_t)v;
        return y;}

sigmatdproof__two_t update_sigmatdproof__two_entry(sigmatdproof__two_t x, sigmatopdown__ent_adt_t v){
        sigmatdproof__two_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->entry != NULL){release_sigmatopdown__ent_adt(x->entry);};}
        else {y = copy_sigmatdproof__two(x); x->count--; y->entry->count--;};
        y->entry = (sigmatopdown__ent_adt_t)v;
        return y;}

sigmatdproof__two_t update_sigmatdproof__two_subone(sigmatdproof__two_t x, sigmatdproof__parsetree_adt_t v){
        sigmatdproof__two_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->subone != NULL){release_sigmatdproof__parsetree_adt(x->subone);};}
        else {y = copy_sigmatdproof__two(x); x->count--; y->subone->count--;};
        y->subone = (sigmatdproof__parsetree_adt_t)v;
        return y;}

sigmatdproof__two_t update_sigmatdproof__two_subtwo(sigmatdproof__two_t x, sigmatdproof__parsetree_adt_t v){
        sigmatdproof__two_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->subtwo != NULL){release_sigmatdproof__parsetree_adt(x->subtwo);};}
        else {y = copy_sigmatdproof__two(x); x->count--; y->subtwo->count--;};
        y->subtwo = (sigmatdproof__parsetree_adt_t)v;
        return y;}



void release_sigmatdproof_funtype_4(sigmatdproof_funtype_4_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_4_t copy_sigmatdproof_funtype_4(sigmatdproof_funtype_4_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_4(sigmatdproof_funtype_4_t x, sigmatdproof_funtype_4_t y){
        return false;}

char* json_sigmatdproof_funtype_4(sigmatdproof_funtype_4_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"sigmatdproof_funtype_4\""); return result;}

void release_sigmatdproof_funtype_5(sigmatdproof_funtype_5_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_5_t copy_sigmatdproof_funtype_5(sigmatdproof_funtype_5_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_5(sigmatdproof_funtype_5_t x, sigmatdproof_funtype_5_t y){
        return false;}

char* json_sigmatdproof_funtype_5(sigmatdproof_funtype_5_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"sigmatdproof_funtype_5\""); return result;}

void release_sigmatdproof_funtype_6(sigmatdproof_funtype_6_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_6_t copy_sigmatdproof_funtype_6(sigmatdproof_funtype_6_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_6(sigmatdproof_funtype_6_t x, sigmatdproof_funtype_6_t y){
        return false;}

char* json_sigmatdproof_funtype_6(sigmatdproof_funtype_6_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"sigmatdproof_funtype_6\""); return result;}


sigmatdproof_record_7_t new_sigmatdproof_record_7(void){
        sigmatdproof_record_7_t tmp = (sigmatdproof_record_7_t) safe_malloc(sizeof(struct sigmatdproof_record_7_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_7(sigmatdproof_record_7_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__ent_adt(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_7_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_7((sigmatdproof_record_7_t)x);
}

sigmatdproof_record_7_t copy_sigmatdproof_record_7(sigmatdproof_record_7_t x){
        sigmatdproof_record_7_t y = new_sigmatdproof_record_7();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        mpz_set(y->project_2, x->project_2);
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof_record_7(sigmatdproof_record_7_t x, sigmatdproof_record_7_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->project_1, y->project_1);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);
        return tmp;}

char * json_sigmatdproof_record_7(sigmatdproof_record_7_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdown__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof_record_7_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_7_t T){
        return equal_sigmatdproof_record_7((sigmatdproof_record_7_t)x, (sigmatdproof_record_7_t)y);
}

char * json_sigmatdproof_record_7_ptr(pointer_t x, actual_sigmatdproof_record_7_t T){
        return json_sigmatdproof_record_7((sigmatdproof_record_7_t)x);
}

actual_sigmatdproof_record_7_t actual_sigmatdproof_record_7(){
        actual_sigmatdproof_record_7_t new = (actual_sigmatdproof_record_7_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_7_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_7_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_7_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_7_ptr);
 

 
        return new;
 };

sigmatdproof_record_7_t update_sigmatdproof_record_7_project_1(sigmatdproof_record_7_t x, sigmatopdown__ent_adt_t v){
        sigmatdproof_record_7_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatopdown__ent_adt(x->project_1);};}
        else {y = copy_sigmatdproof_record_7(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatopdown__ent_adt_t)v;
        return y;}

sigmatdproof_record_7_t update_sigmatdproof_record_7_project_2(sigmatdproof_record_7_t x, mpz_ptr_t v){
        sigmatdproof_record_7_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_7(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}



void release_sigmatdproof_funtype_8(sigmatdproof_funtype_8_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_8_t copy_sigmatdproof_funtype_8(sigmatdproof_funtype_8_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_8(sigmatdproof_funtype_8_t x, sigmatdproof_funtype_8_t y){
        return false;}

char* json_sigmatdproof_funtype_8(sigmatdproof_funtype_8_t x){char * result = safe_malloc(32); sprintf(result, "%s", "\"sigmatdproof_funtype_8\""); return result;}


sigmatdproof_record_9_t new_sigmatdproof_record_9(void){
        sigmatdproof_record_9_t tmp = (sigmatdproof_record_9_t) safe_malloc(sizeof(struct sigmatdproof_record_9_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_9(sigmatdproof_record_9_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__ent_adt(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_9_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_9((sigmatdproof_record_9_t)x);
}

sigmatdproof_record_9_t copy_sigmatdproof_record_9(sigmatdproof_record_9_t x){
        sigmatdproof_record_9_t y = new_sigmatdproof_record_9();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        mpz_set(y->project_2, x->project_2);
        mpz_set(y->project_3, x->project_3);
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof_record_9(sigmatdproof_record_9_t x, sigmatdproof_record_9_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->project_1, y->project_1);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        return tmp;}

char * json_sigmatdproof_record_9(sigmatdproof_record_9_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdown__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_mpz(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof_record_9_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_9_t T){
        return equal_sigmatdproof_record_9((sigmatdproof_record_9_t)x, (sigmatdproof_record_9_t)y);
}

char * json_sigmatdproof_record_9_ptr(pointer_t x, actual_sigmatdproof_record_9_t T){
        return json_sigmatdproof_record_9((sigmatdproof_record_9_t)x);
}

actual_sigmatdproof_record_9_t actual_sigmatdproof_record_9(){
        actual_sigmatdproof_record_9_t new = (actual_sigmatdproof_record_9_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_9_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_9_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_9_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_9_ptr);
 

 
        return new;
 };

sigmatdproof_record_9_t update_sigmatdproof_record_9_project_1(sigmatdproof_record_9_t x, sigmatopdown__ent_adt_t v){
        sigmatdproof_record_9_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatopdown__ent_adt(x->project_1);};}
        else {y = copy_sigmatdproof_record_9(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatopdown__ent_adt_t)v;
        return y;}

sigmatdproof_record_9_t update_sigmatdproof_record_9_project_2(sigmatdproof_record_9_t x, mpz_ptr_t v){
        sigmatdproof_record_9_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_9(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}

sigmatdproof_record_9_t update_sigmatdproof_record_9_project_3(sigmatdproof_record_9_t x, mpz_ptr_t v){
        sigmatdproof_record_9_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_9(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}



void release_sigmatdproof_funtype_10(sigmatdproof_funtype_10_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_10_t copy_sigmatdproof_funtype_10(sigmatdproof_funtype_10_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_10(sigmatdproof_funtype_10_t x, sigmatdproof_funtype_10_t y){
        return false;}

char* json_sigmatdproof_funtype_10(sigmatdproof_funtype_10_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_10\""); return result;}


mpz_ptr_t f_sigmatdproof_closure_11(struct sigmatdproof_closure_11_s * closure, sigmatdproof__parsetree_adt_t bvar){
        mpz_ptr_t result = h_sigmatdproof_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

mpz_ptr_t m_sigmatdproof_closure_11(struct sigmatdproof_closure_11_s * closure, sigmatdproof__parsetree_adt_t bvar){
        return h_sigmatdproof_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern mpz_ptr_t h_sigmatdproof_closure_11(sigmatdproof__parsetree_adt_t ivar_8, sigmatdproof_funtype_8_t ivar_3, sigmatdproof_funtype_10_t ivar_5, sigmatdproof_funtype_6_t ivar_1){
        mpz_ptr_t result;
        /* red */ sigmatdproof_funtype_5_t ivar_9;
        ivar_1->count++;
        ivar_3->count++;
        ivar_5->count++;
        ivar_9 = (sigmatdproof_funtype_5_t)sigmatdproof__reduce_nat__1((sigmatdproof_funtype_6_t)ivar_1, (sigmatdproof_funtype_8_t)ivar_3, (sigmatdproof_funtype_10_t)ivar_5);
        bool_t ivar_34;
        ivar_8->count++;
        ivar_34 = (bool_t)r_sigmatdproof__zerop((sigmatdproof__parsetree_adt_t)ivar_8);
        if (ivar_34){ 
             release_sigmatdproof_funtype_5(ivar_9);
             sigmatopdown__ent_adt_t ivar_25;
             ivar_25 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_8);
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_25));
} else {
        
             bool_t ivar_58;
             ivar_8->count++;
             ivar_58 = (bool_t)r_sigmatdproof__onep((sigmatdproof__parsetree_adt_t)ivar_8);
             if (ivar_58){  
           sigmatopdown__ent_adt_t ivar_38;
           ivar_8->count++;
           ivar_38 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_8);
           sigmatdproof__parsetree_adt_t ivar_39;
           ivar_39 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subone((sigmatdproof__parsetree_adt_t)ivar_8);
           mpz_ptr_t ivar_57;
           mpz_mk_set(ivar_57, ivar_9->ftbl->fptr(ivar_9, ivar_39));
           ivar_9->ftbl->rptr(ivar_9);
           mpz_mk_set(result, ivar_3->ftbl->mptr(ivar_3, ivar_38, ivar_57));
} else {
             
           sigmatopdown__ent_adt_t ivar_62;
           ivar_8->count++;
           ivar_62 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_8);
           sigmatdproof__parsetree_adt_t ivar_63;
           ivar_8->count++;
           ivar_63 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subone((sigmatdproof__parsetree_adt_t)ivar_8);
           sigmatdproof__parsetree_adt_t ivar_64;
           ivar_64 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subtwo((sigmatdproof__parsetree_adt_t)ivar_8);
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

sigmatdproof_closure_11_t new_sigmatdproof_closure_11(void){
        static struct sigmatdproof_funtype_5_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(sigmatdproof_funtype_5_t, sigmatdproof__parsetree_adt_t))&f_sigmatdproof_closure_11, .mptr = (mpz_ptr_t (*)(sigmatdproof_funtype_5_t, sigmatdproof__parsetree_adt_t))&m_sigmatdproof_closure_11, .rptr =  (void (*)(sigmatdproof_funtype_5_t))&release_sigmatdproof_closure_11, .cptr = (sigmatdproof_funtype_5_t (*)(sigmatdproof_funtype_5_t))&copy_sigmatdproof_closure_11};
        sigmatdproof_closure_11_t tmp = (sigmatdproof_closure_11_t) safe_malloc(sizeof(struct sigmatdproof_closure_11_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdproof_closure_11(sigmatdproof_funtype_5_t closure){
        sigmatdproof_closure_11_t x = (sigmatdproof_closure_11_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof_funtype_8(x->fvar_1);
         release_sigmatdproof_funtype_10(x->fvar_2);
         release_sigmatdproof_funtype_6(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdproof_closure_11_t copy_sigmatdproof_closure_11(sigmatdproof_closure_11_t x){
        sigmatdproof_closure_11_t y = new_sigmatdproof_closure_11();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sigmatdproof_funtype_5_htbl_t new_htbl = (sigmatdproof_funtype_5_htbl_t) safe_malloc(sizeof(struct sigmatdproof_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdproof_funtype_5_hashentry_t * new_data = (sigmatdproof_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdproof_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdproof_funtype_5_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatdproof_record_12_t new_sigmatdproof_record_12(void){
        sigmatdproof_record_12_t tmp = (sigmatdproof_record_12_t) safe_malloc(sizeof(struct sigmatdproof_record_12_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_12(sigmatdproof_record_12_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__ent_adt(x->project_1);
         release_sigmatdproof__parsetree_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_12_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_12((sigmatdproof_record_12_t)x);
}

sigmatdproof_record_12_t copy_sigmatdproof_record_12(sigmatdproof_record_12_t x){
        sigmatdproof_record_12_t y = new_sigmatdproof_record_12();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof_record_12(sigmatdproof_record_12_t x, sigmatdproof_record_12_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_sigmatdproof__parsetree_adt(x->project_2, y->project_2);
        return tmp;}

char * json_sigmatdproof_record_12(sigmatdproof_record_12_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdown__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_sigmatdproof__parsetree_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof_record_12_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_12_t T){
        return equal_sigmatdproof_record_12((sigmatdproof_record_12_t)x, (sigmatdproof_record_12_t)y);
}

char * json_sigmatdproof_record_12_ptr(pointer_t x, actual_sigmatdproof_record_12_t T){
        return json_sigmatdproof_record_12((sigmatdproof_record_12_t)x);
}

actual_sigmatdproof_record_12_t actual_sigmatdproof_record_12(){
        actual_sigmatdproof_record_12_t new = (actual_sigmatdproof_record_12_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_12_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_12_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_12_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_12_ptr);
 

 
        return new;
 };

sigmatdproof_record_12_t update_sigmatdproof_record_12_project_1(sigmatdproof_record_12_t x, sigmatopdown__ent_adt_t v){
        sigmatdproof_record_12_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatopdown__ent_adt(x->project_1);};}
        else {y = copy_sigmatdproof_record_12(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatopdown__ent_adt_t)v;
        return y;}

sigmatdproof_record_12_t update_sigmatdproof_record_12_project_2(sigmatdproof_record_12_t x, sigmatdproof__parsetree_adt_t v){
        sigmatdproof_record_12_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_sigmatdproof__parsetree_adt(x->project_2);};}
        else {y = copy_sigmatdproof_record_12(x); x->count--; y->project_2->count--;};
        y->project_2 = (sigmatdproof__parsetree_adt_t)v;
        return y;}



void release_sigmatdproof_funtype_13(sigmatdproof_funtype_13_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_13_t copy_sigmatdproof_funtype_13(sigmatdproof_funtype_13_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_13(sigmatdproof_funtype_13_t x, sigmatdproof_funtype_13_t y){
        return false;}

char* json_sigmatdproof_funtype_13(sigmatdproof_funtype_13_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_13\""); return result;}


sigmatdproof_record_14_t new_sigmatdproof_record_14(void){
        sigmatdproof_record_14_t tmp = (sigmatdproof_record_14_t) safe_malloc(sizeof(struct sigmatdproof_record_14_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_14(sigmatdproof_record_14_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__ent_adt(x->project_1);
         release_sigmatdproof__parsetree_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_14_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_14((sigmatdproof_record_14_t)x);
}

sigmatdproof_record_14_t copy_sigmatdproof_record_14(sigmatdproof_record_14_t x){
        sigmatdproof_record_14_t y = new_sigmatdproof_record_14();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        mpz_set(y->project_2, x->project_2);
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof_record_14(sigmatdproof_record_14_t x, sigmatdproof_record_14_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->project_1, y->project_1);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);
        tmp = tmp && equal_sigmatdproof__parsetree_adt(x->project_3, y->project_3);
        return tmp;}

char * json_sigmatdproof_record_14(sigmatdproof_record_14_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdown__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_sigmatdproof__parsetree_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof_record_14_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_14_t T){
        return equal_sigmatdproof_record_14((sigmatdproof_record_14_t)x, (sigmatdproof_record_14_t)y);
}

char * json_sigmatdproof_record_14_ptr(pointer_t x, actual_sigmatdproof_record_14_t T){
        return json_sigmatdproof_record_14((sigmatdproof_record_14_t)x);
}

actual_sigmatdproof_record_14_t actual_sigmatdproof_record_14(){
        actual_sigmatdproof_record_14_t new = (actual_sigmatdproof_record_14_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_14_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_14_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_14_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_14_ptr);
 

 
        return new;
 };

sigmatdproof_record_14_t update_sigmatdproof_record_14_project_1(sigmatdproof_record_14_t x, sigmatopdown__ent_adt_t v){
        sigmatdproof_record_14_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatopdown__ent_adt(x->project_1);};}
        else {y = copy_sigmatdproof_record_14(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatopdown__ent_adt_t)v;
        return y;}

sigmatdproof_record_14_t update_sigmatdproof_record_14_project_2(sigmatdproof_record_14_t x, mpz_ptr_t v){
        sigmatdproof_record_14_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_14(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}

sigmatdproof_record_14_t update_sigmatdproof_record_14_project_3(sigmatdproof_record_14_t x, sigmatdproof__parsetree_adt_t v){
        sigmatdproof_record_14_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_sigmatdproof__parsetree_adt(x->project_3);};}
        else {y = copy_sigmatdproof_record_14(x); x->count--; y->project_3->count--;};
        y->project_3 = (sigmatdproof__parsetree_adt_t)v;
        return y;}



void release_sigmatdproof_funtype_15(sigmatdproof_funtype_15_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_15_t copy_sigmatdproof_funtype_15(sigmatdproof_funtype_15_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_15(sigmatdproof_funtype_15_t x, sigmatdproof_funtype_15_t y){
        return false;}

char* json_sigmatdproof_funtype_15(sigmatdproof_funtype_15_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_15\""); return result;}


sigmatdproof_record_16_t new_sigmatdproof_record_16(void){
        sigmatdproof_record_16_t tmp = (sigmatdproof_record_16_t) safe_malloc(sizeof(struct sigmatdproof_record_16_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_16(sigmatdproof_record_16_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__ent_adt(x->project_1);
         release_sigmatdproof__parsetree_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_16_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_16((sigmatdproof_record_16_t)x);
}

sigmatdproof_record_16_t copy_sigmatdproof_record_16(sigmatdproof_record_16_t x){
        sigmatdproof_record_16_t y = new_sigmatdproof_record_16();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        mpz_set(y->project_2, x->project_2);
        mpz_set(y->project_3, x->project_3);
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof_record_16(sigmatdproof_record_16_t x, sigmatdproof_record_16_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->project_1, y->project_1);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        tmp = tmp && equal_sigmatdproof__parsetree_adt(x->project_4, y->project_4);
        return tmp;}

char * json_sigmatdproof_record_16(sigmatdproof_record_16_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdown__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_mpz(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_sigmatdproof__parsetree_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof_record_16_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_16_t T){
        return equal_sigmatdproof_record_16((sigmatdproof_record_16_t)x, (sigmatdproof_record_16_t)y);
}

char * json_sigmatdproof_record_16_ptr(pointer_t x, actual_sigmatdproof_record_16_t T){
        return json_sigmatdproof_record_16((sigmatdproof_record_16_t)x);
}

actual_sigmatdproof_record_16_t actual_sigmatdproof_record_16(){
        actual_sigmatdproof_record_16_t new = (actual_sigmatdproof_record_16_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_16_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_16_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_16_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_16_ptr);
 

 
        return new;
 };

sigmatdproof_record_16_t update_sigmatdproof_record_16_project_1(sigmatdproof_record_16_t x, sigmatopdown__ent_adt_t v){
        sigmatdproof_record_16_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatopdown__ent_adt(x->project_1);};}
        else {y = copy_sigmatdproof_record_16(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatopdown__ent_adt_t)v;
        return y;}

sigmatdproof_record_16_t update_sigmatdproof_record_16_project_2(sigmatdproof_record_16_t x, mpz_ptr_t v){
        sigmatdproof_record_16_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_16(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}

sigmatdproof_record_16_t update_sigmatdproof_record_16_project_3(sigmatdproof_record_16_t x, mpz_ptr_t v){
        sigmatdproof_record_16_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_16(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}

sigmatdproof_record_16_t update_sigmatdproof_record_16_project_4(sigmatdproof_record_16_t x, sigmatdproof__parsetree_adt_t v){
        sigmatdproof_record_16_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_sigmatdproof__parsetree_adt(x->project_4);};}
        else {y = copy_sigmatdproof_record_16(x); x->count--; y->project_4->count--;};
        y->project_4 = (sigmatdproof__parsetree_adt_t)v;
        return y;}



void release_sigmatdproof_funtype_17(sigmatdproof_funtype_17_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_17_t copy_sigmatdproof_funtype_17(sigmatdproof_funtype_17_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_17(sigmatdproof_funtype_17_t x, sigmatdproof_funtype_17_t y){
        return false;}

char* json_sigmatdproof_funtype_17(sigmatdproof_funtype_17_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_17\""); return result;}


mpz_ptr_t f_sigmatdproof_closure_18(struct sigmatdproof_closure_18_s * closure, sigmatdproof__parsetree_adt_t bvar){
        mpz_ptr_t result = h_sigmatdproof_closure_18(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

mpz_ptr_t m_sigmatdproof_closure_18(struct sigmatdproof_closure_18_s * closure, sigmatdproof__parsetree_adt_t bvar){
        return h_sigmatdproof_closure_18(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern mpz_ptr_t h_sigmatdproof_closure_18(sigmatdproof__parsetree_adt_t ivar_8, sigmatdproof_funtype_15_t ivar_3, sigmatdproof_funtype_17_t ivar_5, sigmatdproof_funtype_13_t ivar_1){
        mpz_ptr_t result;
        /* red */ sigmatdproof_funtype_5_t ivar_9;
        ivar_1->count++;
        ivar_3->count++;
        ivar_5->count++;
        ivar_9 = (sigmatdproof_funtype_5_t)sigmatdproof__REDUCE_nat__1((sigmatdproof_funtype_13_t)ivar_1, (sigmatdproof_funtype_15_t)ivar_3, (sigmatdproof_funtype_17_t)ivar_5);
        bool_t ivar_36;
        ivar_8->count++;
        ivar_36 = (bool_t)r_sigmatdproof__zerop((sigmatdproof__parsetree_adt_t)ivar_8);
        if (ivar_36){ 
             release_sigmatdproof_funtype_5(ivar_9);
             sigmatopdown__ent_adt_t ivar_25;
             ivar_8->count++;
             ivar_25 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_8);
             mpz_mk_set(result, ivar_1->ftbl->mptr(ivar_1, ivar_25, ivar_8));
} else {
        
             bool_t ivar_62;
             ivar_8->count++;
             ivar_62 = (bool_t)r_sigmatdproof__onep((sigmatdproof__parsetree_adt_t)ivar_8);
             if (ivar_62){  
           sigmatopdown__ent_adt_t ivar_40;
           ivar_8->count++;
           ivar_40 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_8);
           sigmatdproof__parsetree_adt_t ivar_41;
           ivar_8->count++;
           ivar_41 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subone((sigmatdproof__parsetree_adt_t)ivar_8);
           mpz_ptr_t ivar_60;
           mpz_mk_set(ivar_60, ivar_9->ftbl->fptr(ivar_9, ivar_41));
           ivar_9->ftbl->rptr(ivar_9);
           mpz_mk_set(result, ivar_3->ftbl->mptr(ivar_3, ivar_40, ivar_60, ivar_8));
} else {
             
           sigmatopdown__ent_adt_t ivar_66;
           ivar_8->count++;
           ivar_66 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_8);
           sigmatdproof__parsetree_adt_t ivar_67;
           ivar_8->count++;
           ivar_67 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subone((sigmatdproof__parsetree_adt_t)ivar_8);
           sigmatdproof__parsetree_adt_t ivar_68;
           ivar_8->count++;
           ivar_68 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subtwo((sigmatdproof__parsetree_adt_t)ivar_8);
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

sigmatdproof_closure_18_t new_sigmatdproof_closure_18(void){
        static struct sigmatdproof_funtype_5_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(sigmatdproof_funtype_5_t, sigmatdproof__parsetree_adt_t))&f_sigmatdproof_closure_18, .mptr = (mpz_ptr_t (*)(sigmatdproof_funtype_5_t, sigmatdproof__parsetree_adt_t))&m_sigmatdproof_closure_18, .rptr =  (void (*)(sigmatdproof_funtype_5_t))&release_sigmatdproof_closure_18, .cptr = (sigmatdproof_funtype_5_t (*)(sigmatdproof_funtype_5_t))&copy_sigmatdproof_closure_18};
        sigmatdproof_closure_18_t tmp = (sigmatdproof_closure_18_t) safe_malloc(sizeof(struct sigmatdproof_closure_18_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdproof_closure_18(sigmatdproof_funtype_5_t closure){
        sigmatdproof_closure_18_t x = (sigmatdproof_closure_18_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof_funtype_15(x->fvar_1);
         release_sigmatdproof_funtype_17(x->fvar_2);
         release_sigmatdproof_funtype_13(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdproof_closure_18_t copy_sigmatdproof_closure_18(sigmatdproof_closure_18_t x){
        sigmatdproof_closure_18_t y = new_sigmatdproof_closure_18();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sigmatdproof_funtype_5_htbl_t new_htbl = (sigmatdproof_funtype_5_htbl_t) safe_malloc(sizeof(struct sigmatdproof_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdproof_funtype_5_hashentry_t * new_data = (sigmatdproof_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdproof_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdproof_funtype_5_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatdproof_funtype_19(sigmatdproof_funtype_19_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_19_t copy_sigmatdproof_funtype_19(sigmatdproof_funtype_19_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_19(sigmatdproof_funtype_19_t x, sigmatdproof_funtype_19_t y){
        return false;}

char* json_sigmatdproof_funtype_19(sigmatdproof_funtype_19_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_19\""); return result;}

void release_sigmatdproof_funtype_20(sigmatdproof_funtype_20_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_20_t copy_sigmatdproof_funtype_20(sigmatdproof_funtype_20_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_20(sigmatdproof_funtype_20_t x, sigmatdproof_funtype_20_t y){
        return false;}

char* json_sigmatdproof_funtype_20(sigmatdproof_funtype_20_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_20\""); return result;}


sigmatdproof_record_21_t new_sigmatdproof_record_21(void){
        sigmatdproof_record_21_t tmp = (sigmatdproof_record_21_t) safe_malloc(sizeof(struct sigmatdproof_record_21_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_21(sigmatdproof_record_21_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__ent_adt(x->project_1);
         release_ordstruct_adt__ordstruct_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_21_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_21((sigmatdproof_record_21_t)x);
}

sigmatdproof_record_21_t copy_sigmatdproof_record_21(sigmatdproof_record_21_t x){
        sigmatdproof_record_21_t y = new_sigmatdproof_record_21();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof_record_21(sigmatdproof_record_21_t x, sigmatdproof_record_21_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_2, y->project_2);
        return tmp;}

char * json_sigmatdproof_record_21(sigmatdproof_record_21_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdown__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ordstruct_adt__ordstruct_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof_record_21_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_21_t T){
        return equal_sigmatdproof_record_21((sigmatdproof_record_21_t)x, (sigmatdproof_record_21_t)y);
}

char * json_sigmatdproof_record_21_ptr(pointer_t x, actual_sigmatdproof_record_21_t T){
        return json_sigmatdproof_record_21((sigmatdproof_record_21_t)x);
}

actual_sigmatdproof_record_21_t actual_sigmatdproof_record_21(){
        actual_sigmatdproof_record_21_t new = (actual_sigmatdproof_record_21_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_21_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_21_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_21_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_21_ptr);
 

 
        return new;
 };

sigmatdproof_record_21_t update_sigmatdproof_record_21_project_1(sigmatdproof_record_21_t x, sigmatopdown__ent_adt_t v){
        sigmatdproof_record_21_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatopdown__ent_adt(x->project_1);};}
        else {y = copy_sigmatdproof_record_21(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatopdown__ent_adt_t)v;
        return y;}

sigmatdproof_record_21_t update_sigmatdproof_record_21_project_2(sigmatdproof_record_21_t x, ordstruct_adt__ordstruct_adt_t v){
        sigmatdproof_record_21_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_2);};}
        else {y = copy_sigmatdproof_record_21(x); x->count--; y->project_2->count--;};
        y->project_2 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}



void release_sigmatdproof_funtype_22(sigmatdproof_funtype_22_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_22_t copy_sigmatdproof_funtype_22(sigmatdproof_funtype_22_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_22(sigmatdproof_funtype_22_t x, sigmatdproof_funtype_22_t y){
        return false;}

char* json_sigmatdproof_funtype_22(sigmatdproof_funtype_22_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_22\""); return result;}


sigmatdproof_record_23_t new_sigmatdproof_record_23(void){
        sigmatdproof_record_23_t tmp = (sigmatdproof_record_23_t) safe_malloc(sizeof(struct sigmatdproof_record_23_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_23(sigmatdproof_record_23_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__ent_adt(x->project_1);
         release_ordstruct_adt__ordstruct_adt(x->project_2);
         release_ordstruct_adt__ordstruct_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_23_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_23((sigmatdproof_record_23_t)x);
}

sigmatdproof_record_23_t copy_sigmatdproof_record_23(sigmatdproof_record_23_t x){
        sigmatdproof_record_23_t y = new_sigmatdproof_record_23();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof_record_23(sigmatdproof_record_23_t x, sigmatdproof_record_23_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_2, y->project_2);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        return tmp;}

char * json_sigmatdproof_record_23(sigmatdproof_record_23_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdown__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ordstruct_adt__ordstruct_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ordstruct_adt__ordstruct_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof_record_23_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_23_t T){
        return equal_sigmatdproof_record_23((sigmatdproof_record_23_t)x, (sigmatdproof_record_23_t)y);
}

char * json_sigmatdproof_record_23_ptr(pointer_t x, actual_sigmatdproof_record_23_t T){
        return json_sigmatdproof_record_23((sigmatdproof_record_23_t)x);
}

actual_sigmatdproof_record_23_t actual_sigmatdproof_record_23(){
        actual_sigmatdproof_record_23_t new = (actual_sigmatdproof_record_23_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_23_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_23_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_23_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_23_ptr);
 

 
        return new;
 };

sigmatdproof_record_23_t update_sigmatdproof_record_23_project_1(sigmatdproof_record_23_t x, sigmatopdown__ent_adt_t v){
        sigmatdproof_record_23_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatopdown__ent_adt(x->project_1);};}
        else {y = copy_sigmatdproof_record_23(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatopdown__ent_adt_t)v;
        return y;}

sigmatdproof_record_23_t update_sigmatdproof_record_23_project_2(sigmatdproof_record_23_t x, ordstruct_adt__ordstruct_adt_t v){
        sigmatdproof_record_23_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_2);};}
        else {y = copy_sigmatdproof_record_23(x); x->count--; y->project_2->count--;};
        y->project_2 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

sigmatdproof_record_23_t update_sigmatdproof_record_23_project_3(sigmatdproof_record_23_t x, ordstruct_adt__ordstruct_adt_t v){
        sigmatdproof_record_23_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_sigmatdproof_record_23(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}



void release_sigmatdproof_funtype_24(sigmatdproof_funtype_24_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_24_t copy_sigmatdproof_funtype_24(sigmatdproof_funtype_24_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_24(sigmatdproof_funtype_24_t x, sigmatdproof_funtype_24_t y){
        return false;}

char* json_sigmatdproof_funtype_24(sigmatdproof_funtype_24_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_24\""); return result;}


ordstruct_adt__ordstruct_adt_t f_sigmatdproof_closure_25(struct sigmatdproof_closure_25_s * closure, sigmatdproof__parsetree_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_sigmatdproof_closure_25(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_sigmatdproof_closure_25(struct sigmatdproof_closure_25_s * closure, sigmatdproof__parsetree_adt_t bvar){
        return h_sigmatdproof_closure_25(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern ordstruct_adt__ordstruct_adt_t h_sigmatdproof_closure_25(sigmatdproof__parsetree_adt_t ivar_8, sigmatdproof_funtype_22_t ivar_3, sigmatdproof_funtype_24_t ivar_5, sigmatdproof_funtype_20_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ sigmatdproof_funtype_19_t ivar_9;
        ivar_1->count++;
        ivar_3->count++;
        ivar_5->count++;
        ivar_9 = (sigmatdproof_funtype_19_t)sigmatdproof__reduce_ordinal__1((sigmatdproof_funtype_20_t)ivar_1, (sigmatdproof_funtype_22_t)ivar_3, (sigmatdproof_funtype_24_t)ivar_5);
        bool_t ivar_34;
        ivar_8->count++;
        ivar_34 = (bool_t)r_sigmatdproof__zerop((sigmatdproof__parsetree_adt_t)ivar_8);
        if (ivar_34){ 
             release_sigmatdproof_funtype_19(ivar_9);
             sigmatopdown__ent_adt_t ivar_25;
             ivar_25 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_8);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_25);
} else {
        
             bool_t ivar_58;
             ivar_8->count++;
             ivar_58 = (bool_t)r_sigmatdproof__onep((sigmatdproof__parsetree_adt_t)ivar_8);
             if (ivar_58){  
           sigmatopdown__ent_adt_t ivar_38;
           ivar_8->count++;
           ivar_38 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_8);
           sigmatdproof__parsetree_adt_t ivar_39;
           ivar_39 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subone((sigmatdproof__parsetree_adt_t)ivar_8);
           ordstruct_adt__ordstruct_adt_t ivar_57;
           ivar_57 = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->fptr(ivar_9, ivar_39);
           ivar_9->ftbl->rptr(ivar_9);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_38, ivar_57);
} else {
             
           sigmatopdown__ent_adt_t ivar_62;
           ivar_8->count++;
           ivar_62 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_8);
           sigmatdproof__parsetree_adt_t ivar_63;
           ivar_8->count++;
           ivar_63 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subone((sigmatdproof__parsetree_adt_t)ivar_8);
           sigmatdproof__parsetree_adt_t ivar_64;
           ivar_64 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subtwo((sigmatdproof__parsetree_adt_t)ivar_8);
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

sigmatdproof_closure_25_t new_sigmatdproof_closure_25(void){
        static struct sigmatdproof_funtype_19_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatdproof_funtype_19_t, sigmatdproof__parsetree_adt_t))&f_sigmatdproof_closure_25, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatdproof_funtype_19_t, sigmatdproof__parsetree_adt_t))&m_sigmatdproof_closure_25, .rptr =  (void (*)(sigmatdproof_funtype_19_t))&release_sigmatdproof_closure_25, .cptr = (sigmatdproof_funtype_19_t (*)(sigmatdproof_funtype_19_t))&copy_sigmatdproof_closure_25};
        sigmatdproof_closure_25_t tmp = (sigmatdproof_closure_25_t) safe_malloc(sizeof(struct sigmatdproof_closure_25_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdproof_closure_25(sigmatdproof_funtype_19_t closure){
        sigmatdproof_closure_25_t x = (sigmatdproof_closure_25_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof_funtype_22(x->fvar_1);
         release_sigmatdproof_funtype_24(x->fvar_2);
         release_sigmatdproof_funtype_20(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdproof_closure_25_t copy_sigmatdproof_closure_25(sigmatdproof_closure_25_t x){
        sigmatdproof_closure_25_t y = new_sigmatdproof_closure_25();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sigmatdproof_funtype_19_htbl_t new_htbl = (sigmatdproof_funtype_19_htbl_t) safe_malloc(sizeof(struct sigmatdproof_funtype_19_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdproof_funtype_19_hashentry_t * new_data = (sigmatdproof_funtype_19_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdproof_funtype_19_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdproof_funtype_19_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatdproof_funtype_26(sigmatdproof_funtype_26_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_26_t copy_sigmatdproof_funtype_26(sigmatdproof_funtype_26_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_26(sigmatdproof_funtype_26_t x, sigmatdproof_funtype_26_t y){
        return false;}

char* json_sigmatdproof_funtype_26(sigmatdproof_funtype_26_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_26\""); return result;}


sigmatdproof_record_27_t new_sigmatdproof_record_27(void){
        sigmatdproof_record_27_t tmp = (sigmatdproof_record_27_t) safe_malloc(sizeof(struct sigmatdproof_record_27_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_27(sigmatdproof_record_27_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__ent_adt(x->project_1);
         release_ordstruct_adt__ordstruct_adt(x->project_2);
         release_sigmatdproof__parsetree_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_27_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_27((sigmatdproof_record_27_t)x);
}

sigmatdproof_record_27_t copy_sigmatdproof_record_27(sigmatdproof_record_27_t x){
        sigmatdproof_record_27_t y = new_sigmatdproof_record_27();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof_record_27(sigmatdproof_record_27_t x, sigmatdproof_record_27_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_2, y->project_2);
        tmp = tmp && equal_sigmatdproof__parsetree_adt(x->project_3, y->project_3);
        return tmp;}

char * json_sigmatdproof_record_27(sigmatdproof_record_27_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdown__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ordstruct_adt__ordstruct_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_sigmatdproof__parsetree_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof_record_27_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_27_t T){
        return equal_sigmatdproof_record_27((sigmatdproof_record_27_t)x, (sigmatdproof_record_27_t)y);
}

char * json_sigmatdproof_record_27_ptr(pointer_t x, actual_sigmatdproof_record_27_t T){
        return json_sigmatdproof_record_27((sigmatdproof_record_27_t)x);
}

actual_sigmatdproof_record_27_t actual_sigmatdproof_record_27(){
        actual_sigmatdproof_record_27_t new = (actual_sigmatdproof_record_27_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_27_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_27_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_27_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_27_ptr);
 

 
        return new;
 };

sigmatdproof_record_27_t update_sigmatdproof_record_27_project_1(sigmatdproof_record_27_t x, sigmatopdown__ent_adt_t v){
        sigmatdproof_record_27_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatopdown__ent_adt(x->project_1);};}
        else {y = copy_sigmatdproof_record_27(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatopdown__ent_adt_t)v;
        return y;}

sigmatdproof_record_27_t update_sigmatdproof_record_27_project_2(sigmatdproof_record_27_t x, ordstruct_adt__ordstruct_adt_t v){
        sigmatdproof_record_27_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_2);};}
        else {y = copy_sigmatdproof_record_27(x); x->count--; y->project_2->count--;};
        y->project_2 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

sigmatdproof_record_27_t update_sigmatdproof_record_27_project_3(sigmatdproof_record_27_t x, sigmatdproof__parsetree_adt_t v){
        sigmatdproof_record_27_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_sigmatdproof__parsetree_adt(x->project_3);};}
        else {y = copy_sigmatdproof_record_27(x); x->count--; y->project_3->count--;};
        y->project_3 = (sigmatdproof__parsetree_adt_t)v;
        return y;}



void release_sigmatdproof_funtype_28(sigmatdproof_funtype_28_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_28_t copy_sigmatdproof_funtype_28(sigmatdproof_funtype_28_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_28(sigmatdproof_funtype_28_t x, sigmatdproof_funtype_28_t y){
        return false;}

char* json_sigmatdproof_funtype_28(sigmatdproof_funtype_28_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_28\""); return result;}


sigmatdproof_record_29_t new_sigmatdproof_record_29(void){
        sigmatdproof_record_29_t tmp = (sigmatdproof_record_29_t) safe_malloc(sizeof(struct sigmatdproof_record_29_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_29(sigmatdproof_record_29_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__ent_adt(x->project_1);
         release_ordstruct_adt__ordstruct_adt(x->project_2);
         release_ordstruct_adt__ordstruct_adt(x->project_3);
         release_sigmatdproof__parsetree_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_29_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_29((sigmatdproof_record_29_t)x);
}

sigmatdproof_record_29_t copy_sigmatdproof_record_29(sigmatdproof_record_29_t x){
        sigmatdproof_record_29_t y = new_sigmatdproof_record_29();
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

bool_t equal_sigmatdproof_record_29(sigmatdproof_record_29_t x, sigmatdproof_record_29_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_2, y->project_2);
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        tmp = tmp && equal_sigmatdproof__parsetree_adt(x->project_4, y->project_4);
        return tmp;}

char * json_sigmatdproof_record_29(sigmatdproof_record_29_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdown__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ordstruct_adt__ordstruct_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_ordstruct_adt__ordstruct_adt(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_sigmatdproof__parsetree_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof_record_29_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_29_t T){
        return equal_sigmatdproof_record_29((sigmatdproof_record_29_t)x, (sigmatdproof_record_29_t)y);
}

char * json_sigmatdproof_record_29_ptr(pointer_t x, actual_sigmatdproof_record_29_t T){
        return json_sigmatdproof_record_29((sigmatdproof_record_29_t)x);
}

actual_sigmatdproof_record_29_t actual_sigmatdproof_record_29(){
        actual_sigmatdproof_record_29_t new = (actual_sigmatdproof_record_29_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_29_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_29_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_29_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_29_ptr);
 

 
        return new;
 };

sigmatdproof_record_29_t update_sigmatdproof_record_29_project_1(sigmatdproof_record_29_t x, sigmatopdown__ent_adt_t v){
        sigmatdproof_record_29_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatopdown__ent_adt(x->project_1);};}
        else {y = copy_sigmatdproof_record_29(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatopdown__ent_adt_t)v;
        return y;}

sigmatdproof_record_29_t update_sigmatdproof_record_29_project_2(sigmatdproof_record_29_t x, ordstruct_adt__ordstruct_adt_t v){
        sigmatdproof_record_29_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_2);};}
        else {y = copy_sigmatdproof_record_29(x); x->count--; y->project_2->count--;};
        y->project_2 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

sigmatdproof_record_29_t update_sigmatdproof_record_29_project_3(sigmatdproof_record_29_t x, ordstruct_adt__ordstruct_adt_t v){
        sigmatdproof_record_29_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_sigmatdproof_record_29(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

sigmatdproof_record_29_t update_sigmatdproof_record_29_project_4(sigmatdproof_record_29_t x, sigmatdproof__parsetree_adt_t v){
        sigmatdproof_record_29_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_sigmatdproof__parsetree_adt(x->project_4);};}
        else {y = copy_sigmatdproof_record_29(x); x->count--; y->project_4->count--;};
        y->project_4 = (sigmatdproof__parsetree_adt_t)v;
        return y;}



void release_sigmatdproof_funtype_30(sigmatdproof_funtype_30_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_30_t copy_sigmatdproof_funtype_30(sigmatdproof_funtype_30_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_30(sigmatdproof_funtype_30_t x, sigmatdproof_funtype_30_t y){
        return false;}

char* json_sigmatdproof_funtype_30(sigmatdproof_funtype_30_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_30\""); return result;}


ordstruct_adt__ordstruct_adt_t f_sigmatdproof_closure_31(struct sigmatdproof_closure_31_s * closure, sigmatdproof__parsetree_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_sigmatdproof_closure_31(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_sigmatdproof_closure_31(struct sigmatdproof_closure_31_s * closure, sigmatdproof__parsetree_adt_t bvar){
        return h_sigmatdproof_closure_31(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern ordstruct_adt__ordstruct_adt_t h_sigmatdproof_closure_31(sigmatdproof__parsetree_adt_t ivar_8, sigmatdproof_funtype_28_t ivar_3, sigmatdproof_funtype_30_t ivar_5, sigmatdproof_funtype_26_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ sigmatdproof_funtype_19_t ivar_9;
        ivar_1->count++;
        ivar_3->count++;
        ivar_5->count++;
        ivar_9 = (sigmatdproof_funtype_19_t)sigmatdproof__REDUCE_ordinal__1((sigmatdproof_funtype_26_t)ivar_1, (sigmatdproof_funtype_28_t)ivar_3, (sigmatdproof_funtype_30_t)ivar_5);
        bool_t ivar_36;
        ivar_8->count++;
        ivar_36 = (bool_t)r_sigmatdproof__zerop((sigmatdproof__parsetree_adt_t)ivar_8);
        if (ivar_36){ 
             release_sigmatdproof_funtype_19(ivar_9);
             sigmatopdown__ent_adt_t ivar_25;
             ivar_8->count++;
             ivar_25 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_8);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->mptr(ivar_1, ivar_25, ivar_8);
} else {
        
             bool_t ivar_62;
             ivar_8->count++;
             ivar_62 = (bool_t)r_sigmatdproof__onep((sigmatdproof__parsetree_adt_t)ivar_8);
             if (ivar_62){  
           sigmatopdown__ent_adt_t ivar_40;
           ivar_8->count++;
           ivar_40 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_8);
           sigmatdproof__parsetree_adt_t ivar_41;
           ivar_8->count++;
           ivar_41 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subone((sigmatdproof__parsetree_adt_t)ivar_8);
           ordstruct_adt__ordstruct_adt_t ivar_60;
           ivar_60 = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->fptr(ivar_9, ivar_41);
           ivar_9->ftbl->rptr(ivar_9);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_40, ivar_60, ivar_8);
} else {
             
           sigmatopdown__ent_adt_t ivar_66;
           ivar_8->count++;
           ivar_66 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_8);
           sigmatdproof__parsetree_adt_t ivar_67;
           ivar_8->count++;
           ivar_67 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subone((sigmatdproof__parsetree_adt_t)ivar_8);
           sigmatdproof__parsetree_adt_t ivar_68;
           ivar_8->count++;
           ivar_68 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subtwo((sigmatdproof__parsetree_adt_t)ivar_8);
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

sigmatdproof_closure_31_t new_sigmatdproof_closure_31(void){
        static struct sigmatdproof_funtype_19_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatdproof_funtype_19_t, sigmatdproof__parsetree_adt_t))&f_sigmatdproof_closure_31, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatdproof_funtype_19_t, sigmatdproof__parsetree_adt_t))&m_sigmatdproof_closure_31, .rptr =  (void (*)(sigmatdproof_funtype_19_t))&release_sigmatdproof_closure_31, .cptr = (sigmatdproof_funtype_19_t (*)(sigmatdproof_funtype_19_t))&copy_sigmatdproof_closure_31};
        sigmatdproof_closure_31_t tmp = (sigmatdproof_closure_31_t) safe_malloc(sizeof(struct sigmatdproof_closure_31_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdproof_closure_31(sigmatdproof_funtype_19_t closure){
        sigmatdproof_closure_31_t x = (sigmatdproof_closure_31_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof_funtype_28(x->fvar_1);
         release_sigmatdproof_funtype_30(x->fvar_2);
         release_sigmatdproof_funtype_26(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdproof_closure_31_t copy_sigmatdproof_closure_31(sigmatdproof_closure_31_t x){
        sigmatdproof_closure_31_t y = new_sigmatdproof_closure_31();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sigmatdproof_funtype_19_htbl_t new_htbl = (sigmatdproof_funtype_19_htbl_t) safe_malloc(sizeof(struct sigmatdproof_funtype_19_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdproof_funtype_19_hashentry_t * new_data = (sigmatdproof_funtype_19_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdproof_funtype_19_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdproof_funtype_19_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatdproof__qstack_adt_t new_sigmatdproof__qstack_adt(void){
        sigmatdproof__qstack_adt_t tmp = (sigmatdproof__qstack_adt_t) safe_malloc(sizeof(struct sigmatdproof__qstack_adt_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof__qstack_adt(sigmatdproof__qstack_adt_t x){
switch (x->sigmatdproof__qstack_adt_index) {
case 1:  release_sigmatdproof__qpush((sigmatdproof__qpush_t) x); break;
}}

void release_sigmatdproof__qstack_adt_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof__qstack_adt((sigmatdproof__qstack_adt_t)x);
}

sigmatdproof__qstack_adt_t copy_sigmatdproof__qstack_adt(sigmatdproof__qstack_adt_t x){
        sigmatdproof__qstack_adt_t y = new_sigmatdproof__qstack_adt();
        y->sigmatdproof__qstack_adt_index = (uint8_t)x->sigmatdproof__qstack_adt_index;
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof__qstack_adt(sigmatdproof__qstack_adt_t x, sigmatdproof__qstack_adt_t y){
        bool_t tmp = x->sigmatdproof__qstack_adt_index == y->sigmatdproof__qstack_adt_index;
        switch  (x->sigmatdproof__qstack_adt_index) {
                case 1: tmp = tmp && equal_sigmatdproof__qpush((sigmatdproof__qpush_t) x, (sigmatdproof__qpush_t) y); break;
        }
        return tmp;
}

char * json_sigmatdproof__qstack_adt(sigmatdproof__qstack_adt_t x){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ constructor = %u", x->sigmatdproof__qstack_adt_index);
        switch  (x->sigmatdproof__qstack_adt_index) {
                case 1: tmp = safe_strcat(tmp, json_sigmatdproof__qpush((sigmatdproof__qpush_t) x)); break;
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_sigmatdproof__qstack_adt_ptr(pointer_t x, pointer_t y, actual_sigmatdproof__qstack_adt_t T){
        return equal_sigmatdproof__qstack_adt((sigmatdproof__qstack_adt_t)x, (sigmatdproof__qstack_adt_t)y);
}

char * json_sigmatdproof__qstack_adt_ptr(pointer_t x, actual_sigmatdproof__qstack_adt_t T){
        return json_sigmatdproof__qstack_adt((sigmatdproof__qstack_adt_t)x);
}

actual_sigmatdproof__qstack_adt_t actual_sigmatdproof__qstack_adt(){
        actual_sigmatdproof__qstack_adt_t new = (actual_sigmatdproof__qstack_adt_t)safe_malloc(sizeof(struct actual_sigmatdproof__qstack_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof__qstack_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof__qstack_adt_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof__qstack_adt_ptr);
 

 
        return new;
 };

sigmatdproof__qstack_adt_t update_sigmatdproof__qstack_adt_sigmatdproof__qstack_adt_index(sigmatdproof__qstack_adt_t x, uint8_t v){
        sigmatdproof__qstack_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof__qstack_adt(x); x->count--;};
        y->sigmatdproof__qstack_adt_index = (uint8_t)v;
        return y;}




sigmatdproof__qpush_t new_sigmatdproof__qpush(void){
        sigmatdproof__qpush_t tmp = (sigmatdproof__qpush_t) safe_malloc(sizeof(struct sigmatdproof__qpush_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof__qpush(sigmatdproof__qpush_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof__qstack_adt(x->qpop);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof__qpush_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof__qpush((sigmatdproof__qpush_t)x);
}

sigmatdproof__qpush_t copy_sigmatdproof__qpush(sigmatdproof__qpush_t x){
        sigmatdproof__qpush_t y = new_sigmatdproof__qpush();
        y->sigmatdproof__qstack_adt_index = (uint8_t)x->sigmatdproof__qstack_adt_index;
        y->nonterm = (uint8_t)x->nonterm;
        y->pos = (uint32_t)x->pos;
        y->qpop = x->qpop;
        if (y->qpop != NULL){y->qpop->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof__qpush(sigmatdproof__qpush_t x, sigmatdproof__qpush_t y){
        bool_t tmp = true;
        tmp = tmp && x->sigmatdproof__qstack_adt_index == y->sigmatdproof__qstack_adt_index;
        tmp = tmp && x->nonterm == y->nonterm;
        tmp = tmp && x->pos == y->pos;
        tmp = tmp && equal_sigmatdproof__qstack_adt(x->qpop, y->qpop);
        return tmp;}

char * json_sigmatdproof__qpush(sigmatdproof__qpush_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(42);
         sprintf(fld0, "\"sigmatdproof__qstack_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->sigmatdproof__qstack_adt_index));
        char * fld1 = safe_malloc(19);
         sprintf(fld1, "\"nonterm\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->nonterm));
        char * fld2 = safe_malloc(15);
         sprintf(fld2, "\"pos\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->pos));
        char * fld3 = safe_malloc(16);
         sprintf(fld3, "\"qpop\" : ");
        tmp[3] = safe_strcat(fld3, json_sigmatdproof__qstack_adt(x->qpop));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof__qpush_ptr(pointer_t x, pointer_t y, actual_sigmatdproof__qpush_t T){
        return equal_sigmatdproof__qpush((sigmatdproof__qpush_t)x, (sigmatdproof__qpush_t)y);
}

char * json_sigmatdproof__qpush_ptr(pointer_t x, actual_sigmatdproof__qpush_t T){
        return json_sigmatdproof__qpush((sigmatdproof__qpush_t)x);
}

actual_sigmatdproof__qpush_t actual_sigmatdproof__qpush(){
        actual_sigmatdproof__qpush_t new = (actual_sigmatdproof__qpush_t)safe_malloc(sizeof(struct actual_sigmatdproof__qpush_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof__qpush_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof__qpush_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof__qpush_ptr);
 

 
        return new;
 };

sigmatdproof__qpush_t update_sigmatdproof__qpush_sigmatdproof__qstack_adt_index(sigmatdproof__qpush_t x, uint8_t v){
        sigmatdproof__qpush_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof__qpush(x); x->count--;};
        y->sigmatdproof__qstack_adt_index = (uint8_t)v;
        return y;}

sigmatdproof__qpush_t update_sigmatdproof__qpush_nonterm(sigmatdproof__qpush_t x, uint8_t v){
        sigmatdproof__qpush_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof__qpush(x); x->count--;};
        y->nonterm = (uint8_t)v;
        return y;}

sigmatdproof__qpush_t update_sigmatdproof__qpush_pos(sigmatdproof__qpush_t x, uint32_t v){
        sigmatdproof__qpush_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof__qpush(x); x->count--;};
        y->pos = (uint32_t)v;
        return y;}

sigmatdproof__qpush_t update_sigmatdproof__qpush_qpop(sigmatdproof__qpush_t x, sigmatdproof__qstack_adt_t v){
        sigmatdproof__qpush_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->qpop != NULL){release_sigmatdproof__qstack_adt(x->qpop);};}
        else {y = copy_sigmatdproof__qpush(x); x->count--; y->qpop->count--;};
        y->qpop = (sigmatdproof__qstack_adt_t)v;
        return y;}



void release_sigmatdproof_funtype_34(sigmatdproof_funtype_34_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_34_t copy_sigmatdproof_funtype_34(sigmatdproof_funtype_34_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_34(sigmatdproof_funtype_34_t x, sigmatdproof_funtype_34_t y){
        return false;}

char* json_sigmatdproof_funtype_34(sigmatdproof_funtype_34_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_34\""); return result;}

void release_sigmatdproof_funtype_35(sigmatdproof_funtype_35_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_35_t copy_sigmatdproof_funtype_35(sigmatdproof_funtype_35_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_35(sigmatdproof_funtype_35_t x, sigmatdproof_funtype_35_t y){
        return false;}

char* json_sigmatdproof_funtype_35(sigmatdproof_funtype_35_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_35\""); return result;}


sigmatdproof_record_36_t new_sigmatdproof_record_36(void){
        sigmatdproof_record_36_t tmp = (sigmatdproof_record_36_t) safe_malloc(sizeof(struct sigmatdproof_record_36_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_36(sigmatdproof_record_36_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_36_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_36((sigmatdproof_record_36_t)x);
}

sigmatdproof_record_36_t copy_sigmatdproof_record_36(sigmatdproof_record_36_t x){
        sigmatdproof_record_36_t y = new_sigmatdproof_record_36();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        mpz_set(y->project_3, x->project_3);
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof_record_36(sigmatdproof_record_36_t x, sigmatdproof_record_36_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        return tmp;}

char * json_sigmatdproof_record_36(sigmatdproof_record_36_t x){
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

bool_t equal_sigmatdproof_record_36_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_36_t T){
        return equal_sigmatdproof_record_36((sigmatdproof_record_36_t)x, (sigmatdproof_record_36_t)y);
}

char * json_sigmatdproof_record_36_ptr(pointer_t x, actual_sigmatdproof_record_36_t T){
        return json_sigmatdproof_record_36((sigmatdproof_record_36_t)x);
}

actual_sigmatdproof_record_36_t actual_sigmatdproof_record_36(){
        actual_sigmatdproof_record_36_t new = (actual_sigmatdproof_record_36_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_36_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_36_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_36_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_36_ptr);
 

 
        return new;
 };

sigmatdproof_record_36_t update_sigmatdproof_record_36_project_1(sigmatdproof_record_36_t x, uint8_t v){
        sigmatdproof_record_36_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_36(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

sigmatdproof_record_36_t update_sigmatdproof_record_36_project_2(sigmatdproof_record_36_t x, uint32_t v){
        sigmatdproof_record_36_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_36(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

sigmatdproof_record_36_t update_sigmatdproof_record_36_project_3(sigmatdproof_record_36_t x, mpz_ptr_t v){
        sigmatdproof_record_36_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_36(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}



void release_sigmatdproof_funtype_37(sigmatdproof_funtype_37_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_37_t copy_sigmatdproof_funtype_37(sigmatdproof_funtype_37_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_37(sigmatdproof_funtype_37_t x, sigmatdproof_funtype_37_t y){
        return false;}

char* json_sigmatdproof_funtype_37(sigmatdproof_funtype_37_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_37\""); return result;}


mpz_ptr_t f_sigmatdproof_closure_38(struct sigmatdproof_closure_38_s * closure, sigmatdproof__qstack_adt_t bvar){
        mpz_ptr_t result = h_sigmatdproof_closure_38(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_sigmatdproof_closure_38(struct sigmatdproof_closure_38_s * closure, sigmatdproof__qstack_adt_t bvar){
        return h_sigmatdproof_closure_38(bvar, closure->fvar_1, closure->fvar_2);}

extern mpz_ptr_t h_sigmatdproof_closure_38(sigmatdproof__qstack_adt_t ivar_5, sigmatdproof_funtype_37_t ivar_2, mpz_ptr_t ivar_1){
        mpz_ptr_t result;
        /* red */ sigmatdproof_funtype_35_t ivar_6;
        ivar_2->count++;
        ivar_6 = (sigmatdproof_funtype_35_t)sigmatdproof__reduce_nat__2(ivar_1, (sigmatdproof_funtype_37_t)ivar_2);
        bool_t ivar_18;
        ivar_5->count++;
        ivar_18 = (bool_t)r_sigmatdproof__qemptyp((sigmatdproof__qstack_adt_t)ivar_5);
        if (ivar_18){ 
             release_sigmatdproof_funtype_35(ivar_6);
             release_sigmatdproof__qstack_adt(ivar_5);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_1);
} else {
        
             uint8_t ivar_22;
             ivar_5->count++;
             ivar_22 = (uint8_t)sigmatdproof__qstack_adt_nonterm((sigmatdproof__qstack_adt_t)ivar_5);
             uint32_t ivar_23;
             ivar_5->count++;
             ivar_23 = (uint32_t)sigmatdproof__qstack_adt_pos((sigmatdproof__qstack_adt_t)ivar_5);
             sigmatdproof__qstack_adt_t ivar_24;
             ivar_24 = (sigmatdproof__qstack_adt_t)sigmatdproof__qstack_adt_qpop((sigmatdproof__qstack_adt_t)ivar_5);
             mpz_ptr_t ivar_47;
             mpz_mk_set(ivar_47, ivar_6->ftbl->fptr(ivar_6, ivar_24));
             ivar_6->ftbl->rptr(ivar_6);
             mpz_mk_set(result, ivar_2->ftbl->mptr(ivar_2, ivar_22, ivar_23, ivar_47));
};

        return result;
}

sigmatdproof_closure_38_t new_sigmatdproof_closure_38(void){
        static struct sigmatdproof_funtype_35_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(sigmatdproof_funtype_35_t, sigmatdproof__qstack_adt_t))&f_sigmatdproof_closure_38, .mptr = (mpz_ptr_t (*)(sigmatdproof_funtype_35_t, sigmatdproof__qstack_adt_t))&m_sigmatdproof_closure_38, .rptr =  (void (*)(sigmatdproof_funtype_35_t))&release_sigmatdproof_closure_38, .cptr = (sigmatdproof_funtype_35_t (*)(sigmatdproof_funtype_35_t))&copy_sigmatdproof_closure_38};
        sigmatdproof_closure_38_t tmp = (sigmatdproof_closure_38_t) safe_malloc(sizeof(struct sigmatdproof_closure_38_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_sigmatdproof_closure_38(sigmatdproof_funtype_35_t closure){
        sigmatdproof_closure_38_t x = (sigmatdproof_closure_38_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof_funtype_37(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdproof_closure_38_t copy_sigmatdproof_closure_38(sigmatdproof_closure_38_t x){
        sigmatdproof_closure_38_t y = new_sigmatdproof_closure_38();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        mpz_set(y->fvar_2, x->fvar_2);
        if (x->htbl != NULL){
            sigmatdproof_funtype_35_htbl_t new_htbl = (sigmatdproof_funtype_35_htbl_t) safe_malloc(sizeof(struct sigmatdproof_funtype_35_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdproof_funtype_35_hashentry_t * new_data = (sigmatdproof_funtype_35_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdproof_funtype_35_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdproof_funtype_35_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatdproof_record_39_t new_sigmatdproof_record_39(void){
        sigmatdproof_record_39_t tmp = (sigmatdproof_record_39_t) safe_malloc(sizeof(struct sigmatdproof_record_39_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_39(sigmatdproof_record_39_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof__qstack_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_39_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_39((sigmatdproof_record_39_t)x);
}

sigmatdproof_record_39_t copy_sigmatdproof_record_39(sigmatdproof_record_39_t x){
        sigmatdproof_record_39_t y = new_sigmatdproof_record_39();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        mpz_set(y->project_3, x->project_3);
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof_record_39(sigmatdproof_record_39_t x, sigmatdproof_record_39_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;tmp = tmp && (mpz_cmp(x->project_3, y->project_3) == 0);
        tmp = tmp && equal_sigmatdproof__qstack_adt(x->project_4, y->project_4);
        return tmp;}

char * json_sigmatdproof_record_39(sigmatdproof_record_39_t x){
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
        tmp[3] = safe_strcat(fld3, json_sigmatdproof__qstack_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof_record_39_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_39_t T){
        return equal_sigmatdproof_record_39((sigmatdproof_record_39_t)x, (sigmatdproof_record_39_t)y);
}

char * json_sigmatdproof_record_39_ptr(pointer_t x, actual_sigmatdproof_record_39_t T){
        return json_sigmatdproof_record_39((sigmatdproof_record_39_t)x);
}

actual_sigmatdproof_record_39_t actual_sigmatdproof_record_39(){
        actual_sigmatdproof_record_39_t new = (actual_sigmatdproof_record_39_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_39_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_39_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_39_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_39_ptr);
 

 
        return new;
 };

sigmatdproof_record_39_t update_sigmatdproof_record_39_project_1(sigmatdproof_record_39_t x, uint8_t v){
        sigmatdproof_record_39_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_39(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

sigmatdproof_record_39_t update_sigmatdproof_record_39_project_2(sigmatdproof_record_39_t x, uint32_t v){
        sigmatdproof_record_39_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_39(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

sigmatdproof_record_39_t update_sigmatdproof_record_39_project_3(sigmatdproof_record_39_t x, mpz_ptr_t v){
        sigmatdproof_record_39_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_39(x); x->count--;};
        mpz_set(y->project_3, v);
        return y;}

sigmatdproof_record_39_t update_sigmatdproof_record_39_project_4(sigmatdproof_record_39_t x, sigmatdproof__qstack_adt_t v){
        sigmatdproof_record_39_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_sigmatdproof__qstack_adt(x->project_4);};}
        else {y = copy_sigmatdproof_record_39(x); x->count--; y->project_4->count--;};
        y->project_4 = (sigmatdproof__qstack_adt_t)v;
        return y;}



void release_sigmatdproof_funtype_40(sigmatdproof_funtype_40_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_40_t copy_sigmatdproof_funtype_40(sigmatdproof_funtype_40_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_40(sigmatdproof_funtype_40_t x, sigmatdproof_funtype_40_t y){
        return false;}

char* json_sigmatdproof_funtype_40(sigmatdproof_funtype_40_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_40\""); return result;}


mpz_ptr_t f_sigmatdproof_closure_41(struct sigmatdproof_closure_41_s * closure, sigmatdproof__qstack_adt_t bvar){
        mpz_ptr_t result = h_sigmatdproof_closure_41(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

mpz_ptr_t m_sigmatdproof_closure_41(struct sigmatdproof_closure_41_s * closure, sigmatdproof__qstack_adt_t bvar){
        return h_sigmatdproof_closure_41(bvar, closure->fvar_1, closure->fvar_2);}

extern mpz_ptr_t h_sigmatdproof_closure_41(sigmatdproof__qstack_adt_t ivar_6, sigmatdproof_funtype_40_t ivar_3, sigmatdproof_funtype_35_t ivar_1){
        mpz_ptr_t result;
        /* red */ sigmatdproof_funtype_35_t ivar_7;
        ivar_1->count++;
        ivar_3->count++;
        ivar_7 = (sigmatdproof_funtype_35_t)sigmatdproof__REDUCE_nat__2((sigmatdproof_funtype_35_t)ivar_1, (sigmatdproof_funtype_40_t)ivar_3);
        bool_t ivar_25;
        ivar_6->count++;
        ivar_25 = (bool_t)r_sigmatdproof__qemptyp((sigmatdproof__qstack_adt_t)ivar_6);
        if (ivar_25){ 
             release_sigmatdproof_funtype_35(ivar_7);
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_6));
} else {
        
             uint8_t ivar_29;
             ivar_6->count++;
             ivar_29 = (uint8_t)sigmatdproof__qstack_adt_nonterm((sigmatdproof__qstack_adt_t)ivar_6);
             uint32_t ivar_30;
             ivar_6->count++;
             ivar_30 = (uint32_t)sigmatdproof__qstack_adt_pos((sigmatdproof__qstack_adt_t)ivar_6);
             sigmatdproof__qstack_adt_t ivar_31;
             ivar_6->count++;
             ivar_31 = (sigmatdproof__qstack_adt_t)sigmatdproof__qstack_adt_qpop((sigmatdproof__qstack_adt_t)ivar_6);
             mpz_ptr_t ivar_55;
             mpz_mk_set(ivar_55, ivar_7->ftbl->fptr(ivar_7, ivar_31));
             ivar_7->ftbl->rptr(ivar_7);
             mpz_mk_set(result, ivar_3->ftbl->mptr(ivar_3, ivar_29, ivar_30, ivar_55, ivar_6));
};

        return result;
}

sigmatdproof_closure_41_t new_sigmatdproof_closure_41(void){
        static struct sigmatdproof_funtype_35_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(sigmatdproof_funtype_35_t, sigmatdproof__qstack_adt_t))&f_sigmatdproof_closure_41, .mptr = (mpz_ptr_t (*)(sigmatdproof_funtype_35_t, sigmatdproof__qstack_adt_t))&m_sigmatdproof_closure_41, .rptr =  (void (*)(sigmatdproof_funtype_35_t))&release_sigmatdproof_closure_41, .cptr = (sigmatdproof_funtype_35_t (*)(sigmatdproof_funtype_35_t))&copy_sigmatdproof_closure_41};
        sigmatdproof_closure_41_t tmp = (sigmatdproof_closure_41_t) safe_malloc(sizeof(struct sigmatdproof_closure_41_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdproof_closure_41(sigmatdproof_funtype_35_t closure){
        sigmatdproof_closure_41_t x = (sigmatdproof_closure_41_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof_funtype_40(x->fvar_1);
         release_sigmatdproof_funtype_35(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdproof_closure_41_t copy_sigmatdproof_closure_41(sigmatdproof_closure_41_t x){
        sigmatdproof_closure_41_t y = new_sigmatdproof_closure_41();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            sigmatdproof_funtype_35_htbl_t new_htbl = (sigmatdproof_funtype_35_htbl_t) safe_malloc(sizeof(struct sigmatdproof_funtype_35_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdproof_funtype_35_hashentry_t * new_data = (sigmatdproof_funtype_35_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdproof_funtype_35_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdproof_funtype_35_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatdproof_funtype_42(sigmatdproof_funtype_42_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_42_t copy_sigmatdproof_funtype_42(sigmatdproof_funtype_42_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_42(sigmatdproof_funtype_42_t x, sigmatdproof_funtype_42_t y){
        return false;}

char* json_sigmatdproof_funtype_42(sigmatdproof_funtype_42_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_42\""); return result;}


sigmatdproof_record_43_t new_sigmatdproof_record_43(void){
        sigmatdproof_record_43_t tmp = (sigmatdproof_record_43_t) safe_malloc(sizeof(struct sigmatdproof_record_43_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_43(sigmatdproof_record_43_t x){
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt__ordstruct_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_43_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_43((sigmatdproof_record_43_t)x);
}

sigmatdproof_record_43_t copy_sigmatdproof_record_43(sigmatdproof_record_43_t x){
        sigmatdproof_record_43_t y = new_sigmatdproof_record_43();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof_record_43(sigmatdproof_record_43_t x, sigmatdproof_record_43_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        return tmp;}

char * json_sigmatdproof_record_43(sigmatdproof_record_43_t x){
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

bool_t equal_sigmatdproof_record_43_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_43_t T){
        return equal_sigmatdproof_record_43((sigmatdproof_record_43_t)x, (sigmatdproof_record_43_t)y);
}

char * json_sigmatdproof_record_43_ptr(pointer_t x, actual_sigmatdproof_record_43_t T){
        return json_sigmatdproof_record_43((sigmatdproof_record_43_t)x);
}

actual_sigmatdproof_record_43_t actual_sigmatdproof_record_43(){
        actual_sigmatdproof_record_43_t new = (actual_sigmatdproof_record_43_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_43_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_43_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_43_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_43_ptr);
 

 
        return new;
 };

sigmatdproof_record_43_t update_sigmatdproof_record_43_project_1(sigmatdproof_record_43_t x, uint8_t v){
        sigmatdproof_record_43_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_43(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

sigmatdproof_record_43_t update_sigmatdproof_record_43_project_2(sigmatdproof_record_43_t x, uint32_t v){
        sigmatdproof_record_43_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_43(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

sigmatdproof_record_43_t update_sigmatdproof_record_43_project_3(sigmatdproof_record_43_t x, ordstruct_adt__ordstruct_adt_t v){
        sigmatdproof_record_43_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_sigmatdproof_record_43(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}



void release_sigmatdproof_funtype_44(sigmatdproof_funtype_44_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_44_t copy_sigmatdproof_funtype_44(sigmatdproof_funtype_44_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_44(sigmatdproof_funtype_44_t x, sigmatdproof_funtype_44_t y){
        return false;}

char* json_sigmatdproof_funtype_44(sigmatdproof_funtype_44_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_44\""); return result;}


ordstruct_adt__ordstruct_adt_t f_sigmatdproof_closure_45(struct sigmatdproof_closure_45_s * closure, sigmatdproof__qstack_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_sigmatdproof_closure_45(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_sigmatdproof_closure_45(struct sigmatdproof_closure_45_s * closure, sigmatdproof__qstack_adt_t bvar){
        return h_sigmatdproof_closure_45(bvar, closure->fvar_1, closure->fvar_2);}

extern ordstruct_adt__ordstruct_adt_t h_sigmatdproof_closure_45(sigmatdproof__qstack_adt_t ivar_5, sigmatdproof_funtype_44_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ sigmatdproof_funtype_42_t ivar_6;
        ivar_1->count++;
        ivar_2->count++;
        ivar_6 = (sigmatdproof_funtype_42_t)sigmatdproof__reduce_ordinal__2((ordstruct_adt__ordstruct_adt_t)ivar_1, (sigmatdproof_funtype_44_t)ivar_2);
        bool_t ivar_18;
        ivar_5->count++;
        ivar_18 = (bool_t)r_sigmatdproof__qemptyp((sigmatdproof__qstack_adt_t)ivar_5);
        if (ivar_18){ 
             release_sigmatdproof_funtype_42(ivar_6);
             release_sigmatdproof__qstack_adt(ivar_5);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1;
             if (result != NULL) result->count++;
} else {
        
             uint8_t ivar_22;
             ivar_5->count++;
             ivar_22 = (uint8_t)sigmatdproof__qstack_adt_nonterm((sigmatdproof__qstack_adt_t)ivar_5);
             uint32_t ivar_23;
             ivar_5->count++;
             ivar_23 = (uint32_t)sigmatdproof__qstack_adt_pos((sigmatdproof__qstack_adt_t)ivar_5);
             sigmatdproof__qstack_adt_t ivar_24;
             ivar_24 = (sigmatdproof__qstack_adt_t)sigmatdproof__qstack_adt_qpop((sigmatdproof__qstack_adt_t)ivar_5);
             ordstruct_adt__ordstruct_adt_t ivar_47;
             ivar_47 = (ordstruct_adt__ordstruct_adt_t)ivar_6->ftbl->fptr(ivar_6, ivar_24);
             ivar_6->ftbl->rptr(ivar_6);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_2->ftbl->mptr(ivar_2, ivar_22, ivar_23, ivar_47);
};

        return result;
}

sigmatdproof_closure_45_t new_sigmatdproof_closure_45(void){
        static struct sigmatdproof_funtype_42_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatdproof_funtype_42_t, sigmatdproof__qstack_adt_t))&f_sigmatdproof_closure_45, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatdproof_funtype_42_t, sigmatdproof__qstack_adt_t))&m_sigmatdproof_closure_45, .rptr =  (void (*)(sigmatdproof_funtype_42_t))&release_sigmatdproof_closure_45, .cptr = (sigmatdproof_funtype_42_t (*)(sigmatdproof_funtype_42_t))&copy_sigmatdproof_closure_45};
        sigmatdproof_closure_45_t tmp = (sigmatdproof_closure_45_t) safe_malloc(sizeof(struct sigmatdproof_closure_45_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdproof_closure_45(sigmatdproof_funtype_42_t closure){
        sigmatdproof_closure_45_t x = (sigmatdproof_closure_45_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof_funtype_44(x->fvar_1);
         release_ordstruct_adt__ordstruct_adt(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdproof_closure_45_t copy_sigmatdproof_closure_45(sigmatdproof_closure_45_t x){
        sigmatdproof_closure_45_t y = new_sigmatdproof_closure_45();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            sigmatdproof_funtype_42_htbl_t new_htbl = (sigmatdproof_funtype_42_htbl_t) safe_malloc(sizeof(struct sigmatdproof_funtype_42_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdproof_funtype_42_hashentry_t * new_data = (sigmatdproof_funtype_42_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdproof_funtype_42_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdproof_funtype_42_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatdproof_record_46_t new_sigmatdproof_record_46(void){
        sigmatdproof_record_46_t tmp = (sigmatdproof_record_46_t) safe_malloc(sizeof(struct sigmatdproof_record_46_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_46(sigmatdproof_record_46_t x){
        x->count--;
        if (x->count <= 0){
         release_ordstruct_adt__ordstruct_adt(x->project_3);
         release_sigmatdproof__qstack_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_46_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_46((sigmatdproof_record_46_t)x);
}

sigmatdproof_record_46_t copy_sigmatdproof_record_46(sigmatdproof_record_46_t x){
        sigmatdproof_record_46_t y = new_sigmatdproof_record_46();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof_record_46(sigmatdproof_record_46_t x, sigmatdproof_record_46_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_ordstruct_adt__ordstruct_adt(x->project_3, y->project_3);
        tmp = tmp && equal_sigmatdproof__qstack_adt(x->project_4, y->project_4);
        return tmp;}

char * json_sigmatdproof_record_46(sigmatdproof_record_46_t x){
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
        tmp[3] = safe_strcat(fld3, json_sigmatdproof__qstack_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof_record_46_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_46_t T){
        return equal_sigmatdproof_record_46((sigmatdproof_record_46_t)x, (sigmatdproof_record_46_t)y);
}

char * json_sigmatdproof_record_46_ptr(pointer_t x, actual_sigmatdproof_record_46_t T){
        return json_sigmatdproof_record_46((sigmatdproof_record_46_t)x);
}

actual_sigmatdproof_record_46_t actual_sigmatdproof_record_46(){
        actual_sigmatdproof_record_46_t new = (actual_sigmatdproof_record_46_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_46_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_46_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_46_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_46_ptr);
 

 
        return new;
 };

sigmatdproof_record_46_t update_sigmatdproof_record_46_project_1(sigmatdproof_record_46_t x, uint8_t v){
        sigmatdproof_record_46_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_46(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

sigmatdproof_record_46_t update_sigmatdproof_record_46_project_2(sigmatdproof_record_46_t x, uint32_t v){
        sigmatdproof_record_46_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_46(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

sigmatdproof_record_46_t update_sigmatdproof_record_46_project_3(sigmatdproof_record_46_t x, ordstruct_adt__ordstruct_adt_t v){
        sigmatdproof_record_46_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_ordstruct_adt__ordstruct_adt(x->project_3);};}
        else {y = copy_sigmatdproof_record_46(x); x->count--; y->project_3->count--;};
        y->project_3 = (ordstruct_adt__ordstruct_adt_t)v;
        return y;}

sigmatdproof_record_46_t update_sigmatdproof_record_46_project_4(sigmatdproof_record_46_t x, sigmatdproof__qstack_adt_t v){
        sigmatdproof_record_46_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_sigmatdproof__qstack_adt(x->project_4);};}
        else {y = copy_sigmatdproof_record_46(x); x->count--; y->project_4->count--;};
        y->project_4 = (sigmatdproof__qstack_adt_t)v;
        return y;}



void release_sigmatdproof_funtype_47(sigmatdproof_funtype_47_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_47_t copy_sigmatdproof_funtype_47(sigmatdproof_funtype_47_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_47(sigmatdproof_funtype_47_t x, sigmatdproof_funtype_47_t y){
        return false;}

char* json_sigmatdproof_funtype_47(sigmatdproof_funtype_47_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_47\""); return result;}


ordstruct_adt__ordstruct_adt_t f_sigmatdproof_closure_48(struct sigmatdproof_closure_48_s * closure, sigmatdproof__qstack_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_sigmatdproof_closure_48(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_sigmatdproof_closure_48(struct sigmatdproof_closure_48_s * closure, sigmatdproof__qstack_adt_t bvar){
        return h_sigmatdproof_closure_48(bvar, closure->fvar_1, closure->fvar_2);}

extern ordstruct_adt__ordstruct_adt_t h_sigmatdproof_closure_48(sigmatdproof__qstack_adt_t ivar_6, sigmatdproof_funtype_47_t ivar_3, sigmatdproof_funtype_42_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        /* red */ sigmatdproof_funtype_42_t ivar_7;
        ivar_1->count++;
        ivar_3->count++;
        ivar_7 = (sigmatdproof_funtype_42_t)sigmatdproof__REDUCE_ordinal__2((sigmatdproof_funtype_42_t)ivar_1, (sigmatdproof_funtype_47_t)ivar_3);
        bool_t ivar_25;
        ivar_6->count++;
        ivar_25 = (bool_t)r_sigmatdproof__qemptyp((sigmatdproof__qstack_adt_t)ivar_6);
        if (ivar_25){ 
             release_sigmatdproof_funtype_42(ivar_7);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_6);
} else {
        
             uint8_t ivar_29;
             ivar_6->count++;
             ivar_29 = (uint8_t)sigmatdproof__qstack_adt_nonterm((sigmatdproof__qstack_adt_t)ivar_6);
             uint32_t ivar_30;
             ivar_6->count++;
             ivar_30 = (uint32_t)sigmatdproof__qstack_adt_pos((sigmatdproof__qstack_adt_t)ivar_6);
             sigmatdproof__qstack_adt_t ivar_31;
             ivar_6->count++;
             ivar_31 = (sigmatdproof__qstack_adt_t)sigmatdproof__qstack_adt_qpop((sigmatdproof__qstack_adt_t)ivar_6);
             ordstruct_adt__ordstruct_adt_t ivar_55;
             ivar_55 = (ordstruct_adt__ordstruct_adt_t)ivar_7->ftbl->fptr(ivar_7, ivar_31);
             ivar_7->ftbl->rptr(ivar_7);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->mptr(ivar_3, ivar_29, ivar_30, ivar_55, ivar_6);
};

        return result;
}

sigmatdproof_closure_48_t new_sigmatdproof_closure_48(void){
        static struct sigmatdproof_funtype_42_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatdproof_funtype_42_t, sigmatdproof__qstack_adt_t))&f_sigmatdproof_closure_48, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(sigmatdproof_funtype_42_t, sigmatdproof__qstack_adt_t))&m_sigmatdproof_closure_48, .rptr =  (void (*)(sigmatdproof_funtype_42_t))&release_sigmatdproof_closure_48, .cptr = (sigmatdproof_funtype_42_t (*)(sigmatdproof_funtype_42_t))&copy_sigmatdproof_closure_48};
        sigmatdproof_closure_48_t tmp = (sigmatdproof_closure_48_t) safe_malloc(sizeof(struct sigmatdproof_closure_48_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdproof_closure_48(sigmatdproof_funtype_42_t closure){
        sigmatdproof_closure_48_t x = (sigmatdproof_closure_48_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof_funtype_47(x->fvar_1);
         release_sigmatdproof_funtype_42(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdproof_closure_48_t copy_sigmatdproof_closure_48(sigmatdproof_closure_48_t x){
        sigmatdproof_closure_48_t y = new_sigmatdproof_closure_48();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            sigmatdproof_funtype_42_htbl_t new_htbl = (sigmatdproof_funtype_42_htbl_t) safe_malloc(sizeof(struct sigmatdproof_funtype_42_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdproof_funtype_42_hashentry_t * new_data = (sigmatdproof_funtype_42_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdproof_funtype_42_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdproof_funtype_42_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatdproof_funtype_49(sigmatdproof_funtype_49_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_49_t copy_sigmatdproof_funtype_49(sigmatdproof_funtype_49_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_49(sigmatdproof_funtype_49_t x, sigmatdproof_funtype_49_t y){
        return false;}

char* json_sigmatdproof_funtype_49(sigmatdproof_funtype_49_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_49\""); return result;}


sigmatdproof_array_50_t new_sigmatdproof_array_50(uint32_t size){
        sigmatdproof_array_50_t tmp = (sigmatdproof_array_50_t) safe_malloc(sizeof(struct sigmatdproof_array_50_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_sigmatdproof_array_50(sigmatdproof_array_50_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_sigmatdproof_array_50_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_array_50((sigmatdproof_array_50_t)x);
}

sigmatdproof_array_50_t copy_sigmatdproof_array_50(sigmatdproof_array_50_t x){
        sigmatdproof_array_50_t tmp = new_sigmatdproof_array_50(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_sigmatdproof_array_50(sigmatdproof_array_50_t x, sigmatdproof_array_50_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_sigmatdproof_array_50(sigmatdproof_array_50_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint8(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatdproof_array_50_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatdproof_array_50((sigmatdproof_array_50_t)x, (sigmatdproof_array_50_t)y);
}

char * json_sigmatdproof_array_50_ptr(pointer_t x, type_actual_t T){
        return json_sigmatdproof_array_50((sigmatdproof_array_50_t)x);
}

actual_sigmatdproof_array_50_t actual_sigmatdproof_array_50(){
        actual_sigmatdproof_array_50_t new = (actual_sigmatdproof_array_50_t)safe_malloc(sizeof(struct actual_sigmatdproof_array_50_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_array_50_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_array_50_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_array_50_ptr);
 

 
        return new;
 };

sigmatdproof_array_50_t update_sigmatdproof_array_50(sigmatdproof_array_50_t x, uint32_t i, uint8_t v){
        sigmatdproof_array_50_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_sigmatdproof_array_50(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

sigmatdproof_array_50_t upgrade_sigmatdproof_array_50(sigmatdproof_array_50_t x, uint32_t i, uint8_t v){
        sigmatdproof_array_50_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatdproof_array_50_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatdproof_array_50(x);}
           else {y = copy_sigmatdproof_array_50(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




sigmatdproof_array_51_t new_sigmatdproof_array_51(uint32_t size){
        sigmatdproof_array_51_t tmp = (sigmatdproof_array_51_t) safe_malloc(sizeof(struct sigmatdproof_array_51_s) + (size * sizeof(sigmatopdown__ent_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_sigmatdproof_array_51(sigmatdproof_array_51_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_sigmatopdown__ent_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_sigmatdproof_array_51_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_array_51((sigmatdproof_array_51_t)x);
}

sigmatdproof_array_51_t copy_sigmatdproof_array_51(sigmatdproof_array_51_t x){
        sigmatdproof_array_51_t tmp = new_sigmatdproof_array_51(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_sigmatdproof_array_51(sigmatdproof_array_51_t x, sigmatdproof_array_51_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_sigmatopdown__ent_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_sigmatdproof_array_51(sigmatdproof_array_51_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_sigmatopdown__ent_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatdproof_array_51_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatdproof_array_51((sigmatdproof_array_51_t)x, (sigmatdproof_array_51_t)y);
}

char * json_sigmatdproof_array_51_ptr(pointer_t x, type_actual_t T){
        return json_sigmatdproof_array_51((sigmatdproof_array_51_t)x);
}

actual_sigmatdproof_array_51_t actual_sigmatdproof_array_51(){
        actual_sigmatdproof_array_51_t new = (actual_sigmatdproof_array_51_t)safe_malloc(sizeof(struct actual_sigmatdproof_array_51_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_array_51_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_array_51_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_array_51_ptr);
 

 
        return new;
 };

sigmatdproof_array_51_t update_sigmatdproof_array_51(sigmatdproof_array_51_t x, uint32_t i, sigmatopdown__ent_adt_t v){
         sigmatdproof_array_51_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_sigmatdproof_array_51(x);
                      x->count--;};
        sigmatopdown__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

sigmatdproof_array_51_t upgrade_sigmatdproof_array_51(sigmatdproof_array_51_t x, uint32_t i, sigmatopdown__ent_adt_t v){
         sigmatdproof_array_51_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatdproof_array_51_s) + (newmax * sizeof(sigmatopdown__ent_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatdproof_array_51(x);} else {y = copy_sigmatdproof_array_51(x);
                      x->count--;};
        sigmatopdown__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}




sigmatdproof_array_52_t new_sigmatdproof_array_52(uint32_t size){
        sigmatdproof_array_52_t tmp = (sigmatdproof_array_52_t) safe_malloc(sizeof(struct sigmatdproof_array_52_s) + (size * sizeof(sigmatdproof_array_51_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_sigmatdproof_array_52(sigmatdproof_array_52_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_sigmatdproof_array_51(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_sigmatdproof_array_52_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_array_52((sigmatdproof_array_52_t)x);
}

sigmatdproof_array_52_t copy_sigmatdproof_array_52(sigmatdproof_array_52_t x){
        sigmatdproof_array_52_t tmp = new_sigmatdproof_array_52(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_sigmatdproof_array_52(sigmatdproof_array_52_t x, sigmatdproof_array_52_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_sigmatdproof_array_51(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_sigmatdproof_array_52(sigmatdproof_array_52_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_sigmatdproof_array_51(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatdproof_array_52_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatdproof_array_52((sigmatdproof_array_52_t)x, (sigmatdproof_array_52_t)y);
}

char * json_sigmatdproof_array_52_ptr(pointer_t x, type_actual_t T){
        return json_sigmatdproof_array_52((sigmatdproof_array_52_t)x);
}

actual_sigmatdproof_array_52_t actual_sigmatdproof_array_52(){
        actual_sigmatdproof_array_52_t new = (actual_sigmatdproof_array_52_t)safe_malloc(sizeof(struct actual_sigmatdproof_array_52_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_array_52_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_array_52_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_array_52_ptr);
 

 
        return new;
 };

sigmatdproof_array_52_t update_sigmatdproof_array_52(sigmatdproof_array_52_t x, uint32_t i, sigmatdproof_array_51_t v){
         sigmatdproof_array_52_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_sigmatdproof_array_52(x);
                      x->count--;};
        sigmatdproof_array_51_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatdproof_array_51(yelems[i]);};
         yelems[i] = v;
         return y;}

sigmatdproof_array_52_t upgrade_sigmatdproof_array_52(sigmatdproof_array_52_t x, uint32_t i, sigmatdproof_array_51_t v){
         sigmatdproof_array_52_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatdproof_array_52_s) + (newmax * sizeof(sigmatdproof_array_51_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatdproof_array_52(x);} else {y = copy_sigmatdproof_array_52(x);
                      x->count--;};
        sigmatdproof_array_51_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatdproof_array_51(yelems[i]);};
         yelems[i] = v;
         return y;}




bool_t f_sigmatdproof_closure_53(struct sigmatdproof_closure_53_s * closure, sigmatdproof__qstack_adt_t bvar){
        bool_t result = h_sigmatdproof_closure_53(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

bool_t m_sigmatdproof_closure_53(struct sigmatdproof_closure_53_s * closure, sigmatdproof__qstack_adt_t bvar){
        return h_sigmatdproof_closure_53(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern bool_t h_sigmatdproof_closure_53(sigmatdproof__qstack_adt_t ivar_7, sigmatdproof_array_50_t ivar_3, uint32_t ivar_1, sigmatdproof_array_52_t ivar_4, sigmatopdown__lang_spec_t ivar_2){
        bool_t result;
        bool_t ivar_70;
        ivar_7->count++;
        ivar_70 = (bool_t)r_sigmatdproof__qpushp((sigmatdproof__qstack_adt_t)ivar_7);
        if (ivar_70){ 
             uint8_t ivar_9;
             ivar_7->count++;
             ivar_9 = (uint8_t)sigmatdproof__qstack_adt_nonterm((sigmatdproof__qstack_adt_t)ivar_7);
             uint32_t ivar_10;
             ivar_7->count++;
             ivar_10 = (uint32_t)sigmatdproof__qstack_adt_pos((sigmatdproof__qstack_adt_t)ivar_7);
             sigmatdproof__qstack_adt_t ivar_11;
             ivar_11 = (sigmatdproof__qstack_adt_t)sigmatdproof__qstack_adt_qpop((sigmatdproof__qstack_adt_t)ivar_7);
             bool_t ivar_21;
             ivar_21 = (ivar_10 <= ivar_1);
             if (ivar_21){  
           bool_t ivar_26;
           bool_t ivar_28;
           ivar_11->count++;
           ivar_28 = (bool_t)sigmatdproof__inqstack((uint8_t)ivar_9, (uint32_t)ivar_10, (sigmatdproof__qstack_adt_t)ivar_11);
           ivar_26 = !ivar_28;
           if (ivar_26){   
           bool_t ivar_37;
           sigmatopdown__ent_adt_t ivar_50;
           sigmatdproof_array_51_t ivar_42;
           ivar_42 = (sigmatdproof_array_51_t)ivar_4->elems[ivar_10];
           ivar_42->count++;
           ivar_50 = (sigmatopdown__ent_adt_t)ivar_42->elems[ivar_9];
           ivar_50->count++;
           release_sigmatdproof_array_51(ivar_42);
           ivar_37 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_50);
           if (ivar_37){    
            sigmatdproof_funtype_49_t ivar_54;
            ivar_2->count++;
            ivar_3->count++;
            ivar_4->count++;
            ivar_54 = (sigmatdproof_funtype_49_t)sigmatdproof__good_qstackp((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (sigmatdproof_array_52_t)ivar_4);
            result = (bool_t)ivar_54->ftbl->fptr(ivar_54, ivar_11);
            ivar_54->ftbl->rptr(ivar_54);
} else {
           
            release_sigmatdproof__qstack_adt(ivar_11);
            result = (bool_t) false;
};
} else {
           
           release_sigmatdproof__qstack_adt(ivar_11);
           result = (bool_t) false;
};
} else {
             
           release_sigmatdproof__qstack_adt(ivar_11);
           result = (bool_t) false;
};
} else {
        
             release_sigmatdproof__qstack_adt(ivar_7);
             result = (bool_t) true;
};

        return result;
}

sigmatdproof_closure_53_t new_sigmatdproof_closure_53(void){
        static struct sigmatdproof_funtype_49_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatdproof_funtype_49_t, sigmatdproof__qstack_adt_t))&f_sigmatdproof_closure_53, .mptr = (bool_t (*)(sigmatdproof_funtype_49_t, sigmatdproof__qstack_adt_t))&m_sigmatdproof_closure_53, .rptr =  (void (*)(sigmatdproof_funtype_49_t))&release_sigmatdproof_closure_53, .cptr = (sigmatdproof_funtype_49_t (*)(sigmatdproof_funtype_49_t))&copy_sigmatdproof_closure_53};
        sigmatdproof_closure_53_t tmp = (sigmatdproof_closure_53_t) safe_malloc(sizeof(struct sigmatdproof_closure_53_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdproof_closure_53(sigmatdproof_funtype_49_t closure){
        sigmatdproof_closure_53_t x = (sigmatdproof_closure_53_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof_array_50(x->fvar_1);
         release_sigmatdproof_array_52(x->fvar_3);
         release_sigmatopdown__lang_spec(x->fvar_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdproof_closure_53_t copy_sigmatdproof_closure_53(sigmatdproof_closure_53_t x){
        sigmatdproof_closure_53_t y = new_sigmatdproof_closure_53();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        if (x->htbl != NULL){
            sigmatdproof_funtype_49_htbl_t new_htbl = (sigmatdproof_funtype_49_htbl_t) safe_malloc(sizeof(struct sigmatdproof_funtype_49_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdproof_funtype_49_hashentry_t * new_data = (sigmatdproof_funtype_49_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdproof_funtype_49_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdproof_funtype_49_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatdproof_record_54_t new_sigmatdproof_record_54(void){
        sigmatdproof_record_54_t tmp = (sigmatdproof_record_54_t) safe_malloc(sizeof(struct sigmatdproof_record_54_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_54(sigmatdproof_record_54_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof__qstack_adt(x->project_1);
         release_sigmatdproof__parsetree_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_54_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_54((sigmatdproof_record_54_t)x);
}

sigmatdproof_record_54_t copy_sigmatdproof_record_54(sigmatdproof_record_54_t x){
        sigmatdproof_record_54_t y = new_sigmatdproof_record_54();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = (uint32_t)x->project_3;
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof_record_54(sigmatdproof_record_54_t x, sigmatdproof_record_54_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatdproof__qstack_adt(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && equal_sigmatdproof__parsetree_adt(x->project_4, y->project_4);
        return tmp;}

char * json_sigmatdproof_record_54(sigmatdproof_record_54_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatdproof__qstack_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_sigmatdproof__parsetree_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof_record_54_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_54_t T){
        return equal_sigmatdproof_record_54((sigmatdproof_record_54_t)x, (sigmatdproof_record_54_t)y);
}

char * json_sigmatdproof_record_54_ptr(pointer_t x, actual_sigmatdproof_record_54_t T){
        return json_sigmatdproof_record_54((sigmatdproof_record_54_t)x);
}

actual_sigmatdproof_record_54_t actual_sigmatdproof_record_54(){
        actual_sigmatdproof_record_54_t new = (actual_sigmatdproof_record_54_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_54_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_54_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_54_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_54_ptr);
 

 
        return new;
 };

sigmatdproof_record_54_t update_sigmatdproof_record_54_project_1(sigmatdproof_record_54_t x, sigmatdproof__qstack_adt_t v){
        sigmatdproof_record_54_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatdproof__qstack_adt(x->project_1);};}
        else {y = copy_sigmatdproof_record_54(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatdproof__qstack_adt_t)v;
        return y;}

sigmatdproof_record_54_t update_sigmatdproof_record_54_project_2(sigmatdproof_record_54_t x, uint8_t v){
        sigmatdproof_record_54_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_54(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

sigmatdproof_record_54_t update_sigmatdproof_record_54_project_3(sigmatdproof_record_54_t x, uint32_t v){
        sigmatdproof_record_54_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_54(x); x->count--;};
        y->project_3 = (uint32_t)v;
        return y;}

sigmatdproof_record_54_t update_sigmatdproof_record_54_project_4(sigmatdproof_record_54_t x, sigmatdproof__parsetree_adt_t v){
        sigmatdproof_record_54_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_sigmatdproof__parsetree_adt(x->project_4);};}
        else {y = copy_sigmatdproof_record_54(x); x->count--; y->project_4->count--;};
        y->project_4 = (sigmatdproof__parsetree_adt_t)v;
        return y;}



void release_sigmatdproof_funtype_55(sigmatdproof_funtype_55_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_55_t copy_sigmatdproof_funtype_55(sigmatdproof_funtype_55_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_55(sigmatdproof_funtype_55_t x, sigmatdproof_funtype_55_t y){
        return false;}

char* json_sigmatdproof_funtype_55(sigmatdproof_funtype_55_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_55\""); return result;}


bool_t f_sigmatdproof_closure_56(struct sigmatdproof_closure_56_s * closure, sigmatdproof_record_54_t bvar){
        sigmatdproof__qstack_adt_t bvar_1;
        bvar_1 = (sigmatdproof__qstack_adt_t)bvar->project_1;
        bvar->project_1->count++;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        uint32_t bvar_3;
        bvar_3 = (uint32_t)bvar->project_3;
        sigmatdproof__parsetree_adt_t bvar_4;
        bvar_4 = (sigmatdproof__parsetree_adt_t)bvar->project_4;
        bvar->project_4->count++;
        release_sigmatdproof_record_54(bvar);
        bool_t result = h_sigmatdproof_closure_56(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_sigmatdproof__qstack_adt(bvar_1);
        release_sigmatdproof__parsetree_adt(bvar_4);
        return result;}

bool_t m_sigmatdproof_closure_56(struct sigmatdproof_closure_56_s * closure, sigmatdproof__qstack_adt_t bvar_1, uint8_t bvar_2, uint32_t bvar_3, sigmatdproof__parsetree_adt_t bvar_4){
        return h_sigmatdproof_closure_56(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_sigmatdproof_closure_56(sigmatdproof__qstack_adt_t ivar_5, uint8_t ivar_6, uint32_t ivar_7, sigmatdproof__parsetree_adt_t ivar_8, sigmatdproof_array_50_t ivar_3, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2){
        bool_t result;
        bool_t ivar_148;
        ivar_8->count++;
        ivar_148 = (bool_t)r_sigmatdproof__zerop((sigmatdproof__parsetree_adt_t)ivar_8);
        if (ivar_148){ 
             sigmatopdown__ent_adt_t ivar_10;
             ivar_10 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_8);
             sigmatopdown__peg_adt_t ivar_14;
             ivar_14 = (sigmatopdown__peg_adt_t)ivar_2->elems[ivar_6];
             ivar_14->count++;
             bool_t ivar_31;
             ivar_14->count++;
             ivar_31 = (bool_t)r_sigmatopdown__epsilonp((sigmatopdown__peg_adt_t)ivar_14);
             if (ivar_31){  
           release_sigmatdproof__qstack_adt(ivar_5);
           release_sigmatopdown__peg_adt(ivar_14);
           sigmatopdown__ent_adt_t ivar_20;
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
           ivar_20 = (sigmatopdown__ent_adt_t)sigmatopdown__good((uint64_t)ivar_24, (uint32_t)ivar_25);
           result = (bool_t) equal_sigmatopdown__ent_adt(ivar_10, ivar_20);
} else {
             
           bool_t ivar_43;
           ivar_14->count++;
           ivar_43 = (bool_t)r_sigmatopdown__failurep((sigmatopdown__peg_adt_t)ivar_14);
           if (ivar_43){   
           release_sigmatdproof__qstack_adt(ivar_5);
           release_sigmatopdown__peg_adt(ivar_14);
           sigmatopdown__ent_adt_t ivar_36;
           uint8_t ivar_41;
           ivar_41 = (uint8_t)0;
           uint64_t ivar_39;
           //copying to uint64 from uint8;
           ivar_39 = (uint64_t)ivar_41;
           ivar_36 = (sigmatopdown__ent_adt_t)sigmatopdown__fail((uint64_t)ivar_39);
           result = (bool_t) equal_sigmatopdown__ent_adt(ivar_10, ivar_36);
} else {
           
           bool_t ivar_89;
           ivar_14->count++;
           ivar_89 = (bool_t)r_sigmatopdown__anyp((sigmatopdown__peg_adt_t)ivar_14);
           if (ivar_89){    
            release_sigmatdproof__qstack_adt(ivar_5);
            sigmatdproof_funtype_57_t ivar_47;
            ivar_47 = (sigmatdproof_funtype_57_t)sigmatopdown__peg_adt_p((sigmatopdown__peg_adt_t)ivar_14);
            bool_t ivar_53;
            bool_t ivar_54;
            ivar_54 = (ivar_7 < ivar_1);
            if (ivar_54){     
             uint8_t ivar_67;
             ivar_67 = (uint8_t)ivar_3->elems[ivar_7];
             ivar_53 = (bool_t)ivar_47->ftbl->fptr(ivar_47, ivar_67);
             ivar_47->ftbl->rptr(ivar_47);
} else {
            
             release_sigmatdproof_funtype_57(ivar_47);
             ivar_53 = (bool_t) false;
};
            if (ivar_53){     
             sigmatopdown__ent_adt_t ivar_70;
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
             ivar_70 = (sigmatopdown__ent_adt_t)sigmatopdown__good((uint64_t)ivar_74, (uint32_t)ivar_75);
             result = (bool_t) equal_sigmatopdown__ent_adt(ivar_10, ivar_70);
} else {
            
             sigmatopdown__ent_adt_t ivar_82;
             uint8_t ivar_87;
             ivar_87 = (uint8_t)0;
             uint64_t ivar_85;
             //copying to uint64 from uint8;
             ivar_85 = (uint64_t)ivar_87;
             ivar_82 = (sigmatopdown__ent_adt_t)sigmatopdown__fail((uint64_t)ivar_85);
             result = (bool_t) equal_sigmatopdown__ent_adt(ivar_10, ivar_82);
};
} else {
           
            bool_t ivar_131;
            ivar_14->count++;
            ivar_131 = (bool_t)r_sigmatopdown__terminalp((sigmatopdown__peg_adt_t)ivar_14);
            if (ivar_131){     
             release_sigmatdproof__qstack_adt(ivar_5);
             uint8_t ivar_93;
             ivar_93 = (uint8_t)sigmatopdown__peg_adt_a((sigmatopdown__peg_adt_t)ivar_14);
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
              sigmatopdown__ent_adt_t ivar_112;
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
              ivar_112 = (sigmatopdown__ent_adt_t)sigmatopdown__good((uint64_t)ivar_116, (uint32_t)ivar_117);
              result = (bool_t) equal_sigmatopdown__ent_adt(ivar_10, ivar_112);
} else {
             
              sigmatopdown__ent_adt_t ivar_124;
              uint8_t ivar_129;
              ivar_129 = (uint8_t)0;
              uint64_t ivar_127;
              //copying to uint64 from uint8;
              ivar_127 = (uint64_t)ivar_129;
              ivar_124 = (sigmatopdown__ent_adt_t)sigmatopdown__fail((uint64_t)ivar_127);
              result = (bool_t) equal_sigmatopdown__ent_adt(ivar_10, ivar_124);
};
} else {
            
             release_sigmatopdown__peg_adt(ivar_14);
             bool_t ivar_135;
             ivar_135 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_10);
             if (ivar_135){      
              result = (bool_t)sigmatdproof__inqstack((uint8_t)ivar_6, (uint32_t)ivar_7, (sigmatdproof__qstack_adt_t)ivar_5);
} else {
             
              release_sigmatdproof__qstack_adt(ivar_5);
              result = (bool_t) false;
};
};
};
};
};
} else {
        
             bool_t ivar_546;
             ivar_8->count++;
             ivar_546 = (bool_t)r_sigmatdproof__onep((sigmatdproof__parsetree_adt_t)ivar_8);
             if (ivar_546){  
           sigmatopdown__ent_adt_t ivar_152;
           ivar_8->count++;
           ivar_152 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_8);
           sigmatdproof__parsetree_adt_t ivar_153;
           ivar_153 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subone((sigmatdproof__parsetree_adt_t)ivar_8);
           sigmatopdown__peg_adt_t ivar_160;
           ivar_160 = (sigmatopdown__peg_adt_t)ivar_2->elems[ivar_6];
           ivar_160->count++;
           bool_t ivar_266;
           ivar_160->count++;
           ivar_266 = (bool_t)r_sigmatopdown__notp((sigmatopdown__peg_adt_t)ivar_160);
           if (ivar_266){   
           uint8_t ivar_165;
           ivar_165 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_160);
           bool_t ivar_169;
           sigmatdproof_funtype_55_t ivar_184;
           ivar_2->count++;
           ivar_3->count++;
           ivar_184 = (sigmatdproof_funtype_55_t)sigmatdproof__good_parsetreep((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3);
           sigmatdproof__qstack_adt_t ivar_193;
           ivar_193 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (sigmatdproof__qstack_adt_t)ivar_5);
           ivar_153->count++;
           ivar_169 = (bool_t)ivar_184->ftbl->mptr(ivar_184, ivar_193, ivar_165, ivar_7, ivar_153);
           ivar_184->ftbl->rptr(ivar_184);
           if (ivar_169){    
            bool_t ivar_197;
            ivar_152->count++;
            ivar_197 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_152);
            if (ivar_197){     
             bool_t ivar_201;
             sigmatopdown__ent_adt_t ivar_208;
             ivar_153->count++;
             ivar_208 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_153);
             ivar_201 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_208);
             if (ivar_201){      
              bool_t ivar_209;
              uint32_t ivar_211;
              ivar_152->count++;
              ivar_211 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_152);
              uint8_t ivar_212;
              ivar_212 = (uint8_t)0;
              ivar_209 = (ivar_211 == ivar_212);
              if (ivar_209){       
               uint64_t ivar_217;
               ivar_217 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_152);
               mpz_ptr_t ivar_218;
               uint8_t ivar_222;
               ivar_222 = (uint8_t)1;
               uint64_t ivar_223;
               sigmatopdown__ent_adt_t ivar_229;
               ivar_229 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_153);
               ivar_223 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_229);
               mpz_mk_set_ui(ivar_218, (uint64_t)ivar_222);
               mpz_add_ui(ivar_218, ivar_218, (uint64_t)ivar_223);
               int64_t tmp36363 = mpz_cmp_ui(ivar_218, ivar_217);
               result = (tmp36363 == 0);
} else {
              
               release_sigmatdproof__parsetree_adt(ivar_153);
               release_sigmatopdown__ent_adt(ivar_152);
               result = (bool_t) false;
};
} else {
             
              release_sigmatdproof__parsetree_adt(ivar_153);
              release_sigmatopdown__ent_adt(ivar_152);
              result = (bool_t) false;
};
} else {
            
             bool_t ivar_234;
             ivar_152->count++;
             ivar_234 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_152);
             if (ivar_234){      
              bool_t ivar_238;
              sigmatopdown__ent_adt_t ivar_245;
              ivar_153->count++;
              ivar_245 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_153);
              ivar_238 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_245);
              if (ivar_238){       
               uint64_t ivar_246;
               ivar_246 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_152);
               mpz_ptr_t ivar_247;
               uint8_t ivar_251;
               ivar_251 = (uint8_t)1;
               uint64_t ivar_252;
               sigmatopdown__ent_adt_t ivar_258;
               ivar_258 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_153);
               ivar_252 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_258);
               mpz_mk_set_ui(ivar_247, (uint64_t)ivar_251);
               mpz_add_ui(ivar_247, ivar_247, (uint64_t)ivar_252);
               int64_t tmp36376 = mpz_cmp_ui(ivar_247, ivar_246);
               result = (tmp36376 == 0);
} else {
              
               release_sigmatdproof__parsetree_adt(ivar_153);
               release_sigmatopdown__ent_adt(ivar_152);
               result = (bool_t) false;
};
} else {
             
              release_sigmatdproof__parsetree_adt(ivar_153);
              result = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_152);
};
};
} else {
           
            release_sigmatdproof__parsetree_adt(ivar_153);
            release_sigmatopdown__ent_adt(ivar_152);
            result = (bool_t) false;
};
} else {
           
           bool_t ivar_380;
           ivar_160->count++;
           ivar_380 = (bool_t)r_sigmatopdown__andp((sigmatopdown__peg_adt_t)ivar_160);
           if (ivar_380){    
            uint8_t ivar_270;
            ivar_270 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_160);
            bool_t ivar_274;
            sigmatdproof_funtype_55_t ivar_289;
            ivar_2->count++;
            ivar_3->count++;
            ivar_289 = (sigmatdproof_funtype_55_t)sigmatdproof__good_parsetreep((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3);
            sigmatdproof__qstack_adt_t ivar_298;
            ivar_298 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (sigmatdproof__qstack_adt_t)ivar_5);
            ivar_153->count++;
            ivar_274 = (bool_t)ivar_289->ftbl->mptr(ivar_289, ivar_298, ivar_270, ivar_7, ivar_153);
            ivar_289->ftbl->rptr(ivar_289);
            if (ivar_274){     
             bool_t ivar_302;
             ivar_152->count++;
             ivar_302 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_152);
             if (ivar_302){      
              bool_t ivar_306;
              sigmatopdown__ent_adt_t ivar_313;
              ivar_153->count++;
              ivar_313 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_153);
              ivar_306 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_313);
              if (ivar_306){       
               bool_t ivar_314;
               uint32_t ivar_316;
               ivar_152->count++;
               ivar_316 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_152);
               uint8_t ivar_317;
               ivar_317 = (uint8_t)0;
               ivar_314 = (ivar_316 == ivar_317);
               if (ivar_314){        
                uint64_t ivar_322;
                ivar_322 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_152);
                mpz_ptr_t ivar_323;
                uint8_t ivar_327;
                ivar_327 = (uint8_t)1;
                uint64_t ivar_328;
                sigmatopdown__ent_adt_t ivar_334;
                ivar_334 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_153);
                ivar_328 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_334);
                mpz_mk_set_ui(ivar_323, (uint64_t)ivar_327);
                mpz_add_ui(ivar_323, ivar_323, (uint64_t)ivar_328);
                int64_t tmp36412 = mpz_cmp_ui(ivar_323, ivar_322);
                result = (tmp36412 == 0);
} else {
               
                release_sigmatdproof__parsetree_adt(ivar_153);
                release_sigmatopdown__ent_adt(ivar_152);
                result = (bool_t) false;
};
} else {
              
               release_sigmatdproof__parsetree_adt(ivar_153);
               release_sigmatopdown__ent_adt(ivar_152);
               result = (bool_t) false;
};
} else {
             
              bool_t ivar_339;
              ivar_152->count++;
              ivar_339 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_152);
              if (ivar_339){       
               bool_t ivar_343;
               sigmatopdown__ent_adt_t ivar_350;
               ivar_153->count++;
               ivar_350 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_153);
               ivar_343 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_350);
               if (ivar_343){        
                uint64_t ivar_351;
                ivar_351 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_152);
                mpz_ptr_t ivar_352;
                uint8_t ivar_356;
                ivar_356 = (uint8_t)1;
                uint64_t ivar_357;
                sigmatopdown__ent_adt_t ivar_363;
                ivar_363 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_153);
                ivar_357 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_363);
                mpz_mk_set_ui(ivar_352, (uint64_t)ivar_356);
                mpz_add_ui(ivar_352, ivar_352, (uint64_t)ivar_357);
                int64_t tmp36425 = mpz_cmp_ui(ivar_352, ivar_351);
                result = (tmp36425 == 0);
} else {
               
                release_sigmatdproof__parsetree_adt(ivar_153);
                release_sigmatopdown__ent_adt(ivar_152);
                result = (bool_t) false;
};
} else {
              
               bool_t ivar_367;
               ivar_367 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_152);
               if (ivar_367){        
                sigmatopdown__ent_adt_t ivar_377;
                ivar_377 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_153);
                result = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_377);
} else {
               
                release_sigmatdproof__parsetree_adt(ivar_153);
                result = (bool_t) false;
};
};
};
} else {
            
             release_sigmatdproof__parsetree_adt(ivar_153);
             release_sigmatopdown__ent_adt(ivar_152);
             result = (bool_t) false;
};
} else {
           
            bool_t ivar_461;
            ivar_160->count++;
            ivar_461 = (bool_t)r_sigmatopdown__concatp((sigmatopdown__peg_adt_t)ivar_160);
            if (ivar_461){     
             uint8_t ivar_384;
             ivar_160->count++;
             ivar_384 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_160);
             bool_t ivar_392;
             sigmatdproof_funtype_55_t ivar_407;
             ivar_2->count++;
             ivar_3->count++;
             ivar_407 = (sigmatdproof_funtype_55_t)sigmatdproof__good_parsetreep((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3);
             sigmatdproof__qstack_adt_t ivar_416;
             ivar_416 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (sigmatdproof__qstack_adt_t)ivar_5);
             ivar_153->count++;
             ivar_392 = (bool_t)ivar_407->ftbl->mptr(ivar_407, ivar_416, ivar_384, ivar_7, ivar_153);
             ivar_407->ftbl->rptr(ivar_407);
             if (ivar_392){      
              bool_t ivar_420;
              ivar_152->count++;
              ivar_420 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_152);
              if (ivar_420){       
               bool_t ivar_424;
               sigmatopdown__ent_adt_t ivar_431;
               ivar_153->count++;
               ivar_431 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_153);
               ivar_424 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_431);
               if (ivar_424){        
                uint64_t ivar_432;
                ivar_432 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_152);
                mpz_ptr_t ivar_433;
                uint8_t ivar_437;
                ivar_437 = (uint8_t)1;
                uint64_t ivar_438;
                sigmatopdown__ent_adt_t ivar_444;
                ivar_444 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_153);
                ivar_438 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_444);
                mpz_mk_set_ui(ivar_433, (uint64_t)ivar_437);
                mpz_add_ui(ivar_433, ivar_433, (uint64_t)ivar_438);
                int64_t tmp36463 = mpz_cmp_ui(ivar_433, ivar_432);
                result = (tmp36463 == 0);
} else {
               
                release_sigmatdproof__parsetree_adt(ivar_153);
                release_sigmatopdown__ent_adt(ivar_152);
                result = (bool_t) false;
};
} else {
              
               bool_t ivar_448;
               ivar_448 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_152);
               if (ivar_448){        
                sigmatopdown__ent_adt_t ivar_458;
                ivar_458 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_153);
                result = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_458);
} else {
               
                release_sigmatdproof__parsetree_adt(ivar_153);
                result = (bool_t) false;
};
};
} else {
             
              release_sigmatdproof__parsetree_adt(ivar_153);
              release_sigmatopdown__ent_adt(ivar_152);
              result = (bool_t) false;
};
} else {
            
             bool_t ivar_542;
             ivar_160->count++;
             ivar_542 = (bool_t)r_sigmatopdown__orp((sigmatopdown__peg_adt_t)ivar_160);
             if (ivar_542){      
              uint8_t ivar_465;
              ivar_160->count++;
              ivar_465 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_160);
              bool_t ivar_473;
              sigmatdproof_funtype_55_t ivar_488;
              ivar_2->count++;
              ivar_3->count++;
              ivar_488 = (sigmatdproof_funtype_55_t)sigmatdproof__good_parsetreep((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3);
              sigmatdproof__qstack_adt_t ivar_497;
              ivar_497 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (sigmatdproof__qstack_adt_t)ivar_5);
              ivar_153->count++;
              ivar_473 = (bool_t)ivar_488->ftbl->mptr(ivar_488, ivar_497, ivar_465, ivar_7, ivar_153);
              ivar_488->ftbl->rptr(ivar_488);
              if (ivar_473){       
               bool_t ivar_501;
               ivar_152->count++;
               ivar_501 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_152);
               if (ivar_501){        
                bool_t ivar_505;
                sigmatopdown__ent_adt_t ivar_512;
                ivar_153->count++;
                ivar_512 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_153);
                ivar_505 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_512);
                if (ivar_505){         
                 uint64_t ivar_513;
                 ivar_513 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_152);
                 mpz_ptr_t ivar_514;
                 uint8_t ivar_518;
                 ivar_518 = (uint8_t)1;
                 uint64_t ivar_519;
                 sigmatopdown__ent_adt_t ivar_525;
                 ivar_525 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_153);
                 ivar_519 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_525);
                 mpz_mk_set_ui(ivar_514, (uint64_t)ivar_518);
                 mpz_add_ui(ivar_514, ivar_514, (uint64_t)ivar_519);
                 int64_t tmp36501 = mpz_cmp_ui(ivar_514, ivar_513);
                 result = (tmp36501 == 0);
} else {
                
                 release_sigmatdproof__parsetree_adt(ivar_153);
                 release_sigmatopdown__ent_adt(ivar_152);
                 result = (bool_t) false;
};
} else {
               
                bool_t ivar_529;
                ivar_529 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_152);
                if (ivar_529){         
                 sigmatopdown__ent_adt_t ivar_539;
                 ivar_539 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_153);
                 result = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_539);
} else {
                
                 release_sigmatdproof__parsetree_adt(ivar_153);
                 result = (bool_t) false;
};
};
} else {
              
               release_sigmatdproof__parsetree_adt(ivar_153);
               release_sigmatopdown__ent_adt(ivar_152);
               result = (bool_t) false;
};
} else {
             
              release_sigmatdproof__parsetree_adt(ivar_153);
              release_sigmatdproof__qstack_adt(ivar_5);
              release_sigmatopdown__ent_adt(ivar_152);
              release_sigmatopdown__peg_adt(ivar_160);
              result = (bool_t) false;
};
};
};
};
} else {
             
           sigmatopdown__ent_adt_t ivar_550;
           ivar_8->count++;
           ivar_550 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_8);
           sigmatdproof__parsetree_adt_t ivar_551;
           ivar_8->count++;
           ivar_551 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subone((sigmatdproof__parsetree_adt_t)ivar_8);
           sigmatdproof__parsetree_adt_t ivar_552;
           ivar_552 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subtwo((sigmatdproof__parsetree_adt_t)ivar_8);
           sigmatopdown__peg_adt_t ivar_562;
           ivar_562 = (sigmatopdown__peg_adt_t)ivar_2->elems[ivar_6];
           ivar_562->count++;
           bool_t ivar_806;
           ivar_562->count++;
           ivar_806 = (bool_t)r_sigmatopdown__concatp((sigmatopdown__peg_adt_t)ivar_562);
           if (ivar_806){   
           uint8_t ivar_567;
           ivar_562->count++;
           ivar_567 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_562);
           uint8_t ivar_568;
           ivar_568 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_562);
           bool_t ivar_575;
           sigmatdproof_funtype_55_t ivar_590;
           ivar_2->count++;
           ivar_3->count++;
           ivar_590 = (sigmatdproof_funtype_55_t)sigmatdproof__good_parsetreep((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3);
           sigmatdproof__qstack_adt_t ivar_599;
           ivar_5->count++;
           ivar_599 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (sigmatdproof__qstack_adt_t)ivar_5);
           ivar_551->count++;
           ivar_575 = (bool_t)ivar_590->ftbl->mptr(ivar_590, ivar_599, ivar_567, ivar_7, ivar_551);
           ivar_590->ftbl->rptr(ivar_590);
           if (ivar_575){    
            bool_t ivar_603;
            sigmatopdown__ent_adt_t ivar_610;
            ivar_551->count++;
            ivar_610 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_551);
            ivar_603 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_610);
            if (ivar_603){     
             bool_t ivar_611;
             sigmatdproof_funtype_58_t ivar_619;
             ivar_619 = (sigmatdproof_funtype_58_t)sigmatopdown__good_good_entryp((uint32_t)ivar_1, (uint32_t)ivar_7);
             sigmatopdown__ent_adt_t ivar_626;
             ivar_551->count++;
             ivar_626 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_551);
             ivar_611 = (bool_t)ivar_619->ftbl->fptr(ivar_619, ivar_626);
             ivar_619->ftbl->rptr(ivar_619);
             if (ivar_611){      
              bool_t ivar_627;
              ivar_550->count++;
              ivar_627 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_550);
              if (ivar_627){       
               bool_t ivar_631;
               sigmatopdown__ent_adt_t ivar_638;
               ivar_552->count++;
               ivar_638 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_552);
               ivar_631 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_638);
               if (ivar_631){        
                bool_t ivar_639;
                sigmatdproof_funtype_55_t ivar_663;
                ivar_2->count++;
                ivar_3->count++;
                ivar_663 = (sigmatdproof_funtype_55_t)sigmatdproof__good_parsetreep((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3);
                sigmatdproof__qstack_adt_t ivar_672;
                ivar_672 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (sigmatdproof__qstack_adt_t)ivar_5);
                mpq_ptr_t ivar_676;
                uint32_t ivar_653;
                sigmatopdown__ent_adt_t ivar_659;
                ivar_551->count++;
                ivar_659 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_551);
                ivar_653 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_659);
                mpz_t tmp36584;
                mpz_init(tmp36584);
                mpz_set_ui(tmp36584, (uint64_t)ivar_7);
                mpz_add_ui(tmp36584, tmp36584, (uint64_t)ivar_653);
                mpq_mk_set_z(ivar_676, tmp36584);
                mpz_clear(tmp36584);
                uint32_t ivar_674;
                //copying to uint32 from mpq;
                ivar_674 = (uint32_t)mpq_get_ui(ivar_676);
                mpq_clear(ivar_676);
                ivar_552->count++;
                ivar_639 = (bool_t)ivar_663->ftbl->mptr(ivar_663, ivar_672, ivar_568, ivar_674, ivar_552);
                ivar_663->ftbl->rptr(ivar_663);
                if (ivar_639){         
                 uint64_t ivar_677;
                 ivar_677 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_550);
                 mpz_ptr_t ivar_678;
                 uint8_t ivar_682;
                 ivar_682 = (uint8_t)1;
                 mpq_ptr_t ivar_683;
                 uint64_t ivar_704;
                 sigmatopdown__ent_adt_t ivar_691;
                 ivar_691 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_551);
                 ivar_704 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_691);
                 mpq_ptr_t ivar_699;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_699, ivar_704);
                 uint64_t ivar_703;
                 sigmatopdown__ent_adt_t ivar_697;
                 ivar_697 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_552);
                 ivar_703 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_697);
                 mpq_ptr_t ivar_700;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_700, ivar_703);
                 ivar_683 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_699, (mpq_ptr_t)ivar_700);
                 mpz_mk_set_q(ivar_678, ivar_683);
                 mpz_add_ui(ivar_678, ivar_678, ivar_682);
                 int64_t tmp36589 = mpz_cmp_ui(ivar_678, ivar_677);
                 result = (tmp36589 == 0);
} else {
                
                 release_sigmatopdown__ent_adt(ivar_550);
                 release_sigmatdproof__parsetree_adt(ivar_552);
                 release_sigmatdproof__parsetree_adt(ivar_551);
                 result = (bool_t) false;
};
} else {
               
                release_sigmatdproof__parsetree_adt(ivar_552);
                release_sigmatdproof__parsetree_adt(ivar_551);
                release_sigmatdproof__qstack_adt(ivar_5);
                release_sigmatopdown__ent_adt(ivar_550);
                result = (bool_t) false;
};
} else {
              
               bool_t ivar_709;
               ivar_550->count++;
               ivar_709 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_550);
               if (ivar_709){        
                bool_t ivar_713;
                sigmatopdown__ent_adt_t ivar_720;
                ivar_552->count++;
                ivar_720 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_552);
                ivar_713 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_720);
                if (ivar_713){         
                 bool_t ivar_721;
                 sigmatdproof_funtype_55_t ivar_745;
                 ivar_2->count++;
                 ivar_3->count++;
                 ivar_745 = (sigmatdproof_funtype_55_t)sigmatdproof__good_parsetreep((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3);
                 sigmatdproof__qstack_adt_t ivar_754;
                 ivar_754 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (sigmatdproof__qstack_adt_t)ivar_5);
                 mpq_ptr_t ivar_758;
                 uint32_t ivar_735;
                 sigmatopdown__ent_adt_t ivar_741;
                 ivar_551->count++;
                 ivar_741 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_551);
                 ivar_735 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_741);
                 mpz_t tmp36629;
                 mpz_init(tmp36629);
                 mpz_set_ui(tmp36629, (uint64_t)ivar_7);
                 mpz_add_ui(tmp36629, tmp36629, (uint64_t)ivar_735);
                 mpq_mk_set_z(ivar_758, tmp36629);
                 mpz_clear(tmp36629);
                 uint32_t ivar_756;
                 //copying to uint32 from mpq;
                 ivar_756 = (uint32_t)mpq_get_ui(ivar_758);
                 mpq_clear(ivar_758);
                 ivar_552->count++;
                 ivar_721 = (bool_t)ivar_745->ftbl->mptr(ivar_745, ivar_754, ivar_568, ivar_756, ivar_552);
                 ivar_745->ftbl->rptr(ivar_745);
                 if (ivar_721){          
                  uint64_t ivar_759;
                  ivar_759 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_550);
                  mpz_ptr_t ivar_760;
                  uint8_t ivar_764;
                  ivar_764 = (uint8_t)1;
                  mpq_ptr_t ivar_765;
                  uint64_t ivar_786;
                  sigmatopdown__ent_adt_t ivar_773;
                  ivar_773 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_551);
                  ivar_786 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_773);
                  mpq_ptr_t ivar_781;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_781, ivar_786);
                  uint64_t ivar_785;
                  sigmatopdown__ent_adt_t ivar_779;
                  ivar_779 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_552);
                  ivar_785 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_779);
                  mpq_ptr_t ivar_782;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_782, ivar_785);
                  ivar_765 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_781, (mpq_ptr_t)ivar_782);
                  mpz_mk_set_q(ivar_760, ivar_765);
                  mpz_add_ui(ivar_760, ivar_760, ivar_764);
                  int64_t tmp36634 = mpz_cmp_ui(ivar_760, ivar_759);
                  result = (tmp36634 == 0);
} else {
                 
                  release_sigmatopdown__ent_adt(ivar_550);
                  release_sigmatdproof__parsetree_adt(ivar_552);
                  release_sigmatdproof__parsetree_adt(ivar_551);
                  result = (bool_t) false;
};
} else {
                
                 release_sigmatdproof__parsetree_adt(ivar_552);
                 release_sigmatdproof__parsetree_adt(ivar_551);
                 release_sigmatdproof__qstack_adt(ivar_5);
                 release_sigmatopdown__ent_adt(ivar_550);
                 result = (bool_t) false;
};
} else {
               
                release_sigmatdproof__qstack_adt(ivar_5);
                release_sigmatdproof__parsetree_adt(ivar_551);
                bool_t ivar_791;
                ivar_791 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_550);
                if (ivar_791){         
                 sigmatopdown__ent_adt_t ivar_801;
                 ivar_801 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_552);
                 result = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_801);
} else {
                
                 release_sigmatdproof__parsetree_adt(ivar_552);
                 result = (bool_t) false;
};
};
};
} else {
             
              release_sigmatdproof__parsetree_adt(ivar_552);
              release_sigmatdproof__parsetree_adt(ivar_551);
              release_sigmatdproof__qstack_adt(ivar_5);
              release_sigmatopdown__ent_adt(ivar_550);
              result = (bool_t) false;
};
} else {
            
             release_sigmatdproof__parsetree_adt(ivar_552);
             release_sigmatdproof__parsetree_adt(ivar_551);
             release_sigmatdproof__qstack_adt(ivar_5);
             release_sigmatopdown__ent_adt(ivar_550);
             result = (bool_t) false;
};
} else {
           
            release_sigmatdproof__parsetree_adt(ivar_552);
            release_sigmatdproof__parsetree_adt(ivar_551);
            release_sigmatdproof__qstack_adt(ivar_5);
            release_sigmatopdown__ent_adt(ivar_550);
            result = (bool_t) false;
};
} else {
           
           bool_t ivar_1012;
           ivar_562->count++;
           ivar_1012 = (bool_t)r_sigmatopdown__orp((sigmatopdown__peg_adt_t)ivar_562);
           if (ivar_1012){    
            uint8_t ivar_810;
            ivar_562->count++;
            ivar_810 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_562);
            uint8_t ivar_811;
            ivar_811 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_562);
            bool_t ivar_818;
            sigmatdproof_funtype_55_t ivar_833;
            ivar_2->count++;
            ivar_3->count++;
            ivar_833 = (sigmatdproof_funtype_55_t)sigmatdproof__good_parsetreep((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3);
            sigmatdproof__qstack_adt_t ivar_842;
            ivar_5->count++;
            ivar_842 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (sigmatdproof__qstack_adt_t)ivar_5);
            ivar_551->count++;
            ivar_818 = (bool_t)ivar_833->ftbl->mptr(ivar_833, ivar_842, ivar_810, ivar_7, ivar_551);
            ivar_833->ftbl->rptr(ivar_833);
            if (ivar_818){     
             bool_t ivar_846;
             sigmatopdown__ent_adt_t ivar_853;
             ivar_551->count++;
             ivar_853 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_551);
             ivar_846 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_853);
             if (ivar_846){      
              bool_t ivar_854;
              ivar_550->count++;
              ivar_854 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_550);
              if (ivar_854){       
               bool_t ivar_858;
               sigmatopdown__ent_adt_t ivar_865;
               ivar_552->count++;
               ivar_865 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_552);
               ivar_858 = (bool_t)r_sigmatopdown__goodp((sigmatopdown__ent_adt_t)ivar_865);
               if (ivar_858){        
                bool_t ivar_866;
                sigmatdproof_funtype_55_t ivar_881;
                ivar_2->count++;
                ivar_3->count++;
                ivar_881 = (sigmatdproof_funtype_55_t)sigmatdproof__good_parsetreep((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3);
                sigmatdproof__qstack_adt_t ivar_890;
                ivar_890 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (sigmatdproof__qstack_adt_t)ivar_5);
                ivar_552->count++;
                ivar_866 = (bool_t)ivar_881->ftbl->mptr(ivar_881, ivar_890, ivar_811, ivar_7, ivar_552);
                ivar_881->ftbl->rptr(ivar_881);
                if (ivar_866){         
                 uint64_t ivar_894;
                 ivar_894 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_550);
                 mpz_ptr_t ivar_895;
                 uint8_t ivar_899;
                 ivar_899 = (uint8_t)1;
                 mpq_ptr_t ivar_900;
                 uint64_t ivar_921;
                 sigmatopdown__ent_adt_t ivar_908;
                 ivar_908 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_551);
                 ivar_921 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_908);
                 mpq_ptr_t ivar_916;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_916, ivar_921);
                 uint64_t ivar_920;
                 sigmatopdown__ent_adt_t ivar_914;
                 ivar_914 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_552);
                 ivar_920 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_914);
                 mpq_ptr_t ivar_917;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_917, ivar_920);
                 ivar_900 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_916, (mpq_ptr_t)ivar_917);
                 mpz_mk_set_q(ivar_895, ivar_900);
                 mpz_add_ui(ivar_895, ivar_895, ivar_899);
                 int64_t tmp36731 = mpz_cmp_ui(ivar_895, ivar_894);
                 result = (tmp36731 == 0);
} else {
                
                 release_sigmatopdown__ent_adt(ivar_550);
                 release_sigmatdproof__parsetree_adt(ivar_552);
                 release_sigmatdproof__parsetree_adt(ivar_551);
                 result = (bool_t) false;
};
} else {
               
                release_sigmatdproof__parsetree_adt(ivar_552);
                release_sigmatdproof__qstack_adt(ivar_5);
                release_sigmatopdown__ent_adt(ivar_550);
                release_sigmatdproof__parsetree_adt(ivar_551);
                result = (bool_t) false;
};
} else {
              
               bool_t ivar_926;
               ivar_550->count++;
               ivar_926 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_550);
               if (ivar_926){        
                bool_t ivar_930;
                sigmatopdown__ent_adt_t ivar_937;
                ivar_552->count++;
                ivar_937 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_552);
                ivar_930 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_937);
                if (ivar_930){         
                 bool_t ivar_938;
                 sigmatdproof_funtype_55_t ivar_953;
                 ivar_2->count++;
                 ivar_3->count++;
                 ivar_953 = (sigmatdproof_funtype_55_t)sigmatdproof__good_parsetreep((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3);
                 sigmatdproof__qstack_adt_t ivar_962;
                 ivar_962 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_6, (uint32_t)ivar_7, (sigmatdproof__qstack_adt_t)ivar_5);
                 ivar_552->count++;
                 ivar_938 = (bool_t)ivar_953->ftbl->mptr(ivar_953, ivar_962, ivar_811, ivar_7, ivar_552);
                 ivar_953->ftbl->rptr(ivar_953);
                 if (ivar_938){          
                  uint64_t ivar_966;
                  ivar_966 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_550);
                  mpz_ptr_t ivar_967;
                  uint8_t ivar_971;
                  ivar_971 = (uint8_t)1;
                  mpq_ptr_t ivar_972;
                  uint64_t ivar_993;
                  sigmatopdown__ent_adt_t ivar_980;
                  ivar_980 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_551);
                  ivar_993 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_980);
                  mpq_ptr_t ivar_988;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_988, ivar_993);
                  uint64_t ivar_992;
                  sigmatopdown__ent_adt_t ivar_986;
                  ivar_986 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_552);
                  ivar_992 = (uint64_t)sigmatopdown__ent_adt_dep((sigmatopdown__ent_adt_t)ivar_986);
                  mpq_ptr_t ivar_989;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_989, ivar_992);
                  ivar_972 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_988, (mpq_ptr_t)ivar_989);
                  mpz_mk_set_q(ivar_967, ivar_972);
                  mpz_add_ui(ivar_967, ivar_967, ivar_971);
                  int64_t tmp36773 = mpz_cmp_ui(ivar_967, ivar_966);
                  result = (tmp36773 == 0);
} else {
                 
                  release_sigmatopdown__ent_adt(ivar_550);
                  release_sigmatdproof__parsetree_adt(ivar_552);
                  release_sigmatdproof__parsetree_adt(ivar_551);
                  result = (bool_t) false;
};
} else {
                
                 release_sigmatdproof__parsetree_adt(ivar_552);
                 release_sigmatdproof__qstack_adt(ivar_5);
                 release_sigmatopdown__ent_adt(ivar_550);
                 release_sigmatdproof__parsetree_adt(ivar_551);
                 result = (bool_t) false;
};
} else {
               
                release_sigmatdproof__parsetree_adt(ivar_551);
                release_sigmatdproof__qstack_adt(ivar_5);
                bool_t ivar_998;
                ivar_998 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_550);
                if (ivar_998){         
                 sigmatopdown__ent_adt_t ivar_1008;
                 ivar_1008 = (sigmatopdown__ent_adt_t)sigmatdproof__parsetree_adt_entry((sigmatdproof__parsetree_adt_t)ivar_552);
                 result = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_1008);
} else {
                
                 release_sigmatdproof__parsetree_adt(ivar_552);
                 result = (bool_t) false;
};
};
};
} else {
             
              release_sigmatdproof__parsetree_adt(ivar_552);
              release_sigmatdproof__qstack_adt(ivar_5);
              release_sigmatopdown__ent_adt(ivar_550);
              release_sigmatdproof__parsetree_adt(ivar_551);
              result = (bool_t) false;
};
} else {
            
             release_sigmatdproof__parsetree_adt(ivar_552);
             release_sigmatdproof__qstack_adt(ivar_5);
             release_sigmatopdown__ent_adt(ivar_550);
             release_sigmatdproof__parsetree_adt(ivar_551);
             result = (bool_t) false;
};
} else {
           
            release_sigmatdproof__parsetree_adt(ivar_552);
            release_sigmatdproof__qstack_adt(ivar_5);
            release_sigmatopdown__ent_adt(ivar_550);
            release_sigmatdproof__parsetree_adt(ivar_551);
            release_sigmatopdown__peg_adt(ivar_562);
            result = (bool_t) false;
};
};
};
};

        return result;
}

sigmatdproof_closure_56_t new_sigmatdproof_closure_56(void){
        static struct sigmatdproof_funtype_55_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatdproof_funtype_55_t, sigmatdproof_record_54_t))&f_sigmatdproof_closure_56, .mptr = (bool_t (*)(sigmatdproof_funtype_55_t, sigmatdproof__qstack_adt_t, uint8_t, uint32_t, sigmatdproof__parsetree_adt_t))&m_sigmatdproof_closure_56, .rptr =  (void (*)(sigmatdproof_funtype_55_t))&release_sigmatdproof_closure_56, .cptr = (sigmatdproof_funtype_55_t (*)(sigmatdproof_funtype_55_t))&copy_sigmatdproof_closure_56};
        sigmatdproof_closure_56_t tmp = (sigmatdproof_closure_56_t) safe_malloc(sizeof(struct sigmatdproof_closure_56_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdproof_closure_56(sigmatdproof_funtype_55_t closure){
        sigmatdproof_closure_56_t x = (sigmatdproof_closure_56_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof_array_50(x->fvar_1);
         release_sigmatopdown__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdproof_closure_56_t copy_sigmatdproof_closure_56(sigmatdproof_closure_56_t x){
        sigmatdproof_closure_56_t y = new_sigmatdproof_closure_56();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            sigmatdproof_funtype_55_htbl_t new_htbl = (sigmatdproof_funtype_55_htbl_t) safe_malloc(sizeof(struct sigmatdproof_funtype_55_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdproof_funtype_55_hashentry_t * new_data = (sigmatdproof_funtype_55_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdproof_funtype_55_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdproof_funtype_55_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatdproof_funtype_57(sigmatdproof_funtype_57_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_57_t copy_sigmatdproof_funtype_57(sigmatdproof_funtype_57_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatdproof_funtype_57(sigmatdproof_funtype_57_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatdproof_funtype_57_hashentry_t data = htbl->data[hashindex];
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

sigmatdproof_funtype_57_t dupdate_sigmatdproof_funtype_57(sigmatdproof_funtype_57_t a, uint8_t i, bool_t v){
        sigmatdproof_funtype_57_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatdproof_funtype_57_htbl_t)safe_malloc(sizeof(struct sigmatdproof_funtype_57_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatdproof_funtype_57_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatdproof_funtype_57_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatdproof_funtype_57_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatdproof_funtype_57_hashentry_t * new_data = (sigmatdproof_funtype_57_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatdproof_funtype_57_hashentry_s));
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
        uint32_t hashindex = lookup_sigmatdproof_funtype_57(htbl, i, ihash);
        sigmatdproof_funtype_57_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

sigmatdproof_funtype_57_t update_sigmatdproof_funtype_57(sigmatdproof_funtype_57_t a, uint8_t i, bool_t v){
        if (a->count == 1){
                return dupdate_sigmatdproof_funtype_57(a, i, v);
            } else {
                sigmatdproof_funtype_57_t x = copy_sigmatdproof_funtype_57(a);
                a->count--;
                return dupdate_sigmatdproof_funtype_57(x, i, v);
            }}

bool_t equal_sigmatdproof_funtype_57(sigmatdproof_funtype_57_t x, sigmatdproof_funtype_57_t y){
        return false;}

char* json_sigmatdproof_funtype_57(sigmatdproof_funtype_57_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_57\""); return result;}

void release_sigmatdproof_funtype_58(sigmatdproof_funtype_58_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_58_t copy_sigmatdproof_funtype_58(sigmatdproof_funtype_58_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_58(sigmatdproof_funtype_58_t x, sigmatdproof_funtype_58_t y){
        return false;}

char* json_sigmatdproof_funtype_58(sigmatdproof_funtype_58_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_58\""); return result;}


sigmatdproof_record_59_t new_sigmatdproof_record_59(void){
        sigmatdproof_record_59_t tmp = (sigmatdproof_record_59_t) safe_malloc(sizeof(struct sigmatdproof_record_59_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_59(sigmatdproof_record_59_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof_array_52(x->scaf);
         release_sigmatopdown__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_59_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_59((sigmatdproof_record_59_t)x);
}

sigmatdproof_record_59_t copy_sigmatdproof_record_59(sigmatdproof_record_59_t x){
        sigmatdproof_record_59_t y = new_sigmatdproof_record_59();
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->depth = (uint64_t)x->depth;
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->lflag = (bool_t)x->lflag;
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof_record_59(sigmatdproof_record_59_t x, sigmatdproof_record_59_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatdproof_array_52(x->scaf, y->scaf);
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->stack, y->stack);
        tmp = tmp && x->lflag == y->lflag;
        return tmp;}

char * json_sigmatdproof_record_59(sigmatdproof_record_59_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(16);
         sprintf(fld0, "\"scaf\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatdproof_array_52(x->scaf));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"depth\" : ");
        tmp[1] = safe_strcat(fld1, json_uint64(x->depth));
        char * fld2 = safe_malloc(17);
         sprintf(fld2, "\"stack\" : ");
        tmp[2] = safe_strcat(fld2, json_sigmatopdown__ent_adt(x->stack));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"lflag\" : ");
        tmp[3] = safe_strcat(fld3, json_bool(x->lflag));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof_record_59_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_59_t T){
        return equal_sigmatdproof_record_59((sigmatdproof_record_59_t)x, (sigmatdproof_record_59_t)y);
}

char * json_sigmatdproof_record_59_ptr(pointer_t x, actual_sigmatdproof_record_59_t T){
        return json_sigmatdproof_record_59((sigmatdproof_record_59_t)x);
}

actual_sigmatdproof_record_59_t actual_sigmatdproof_record_59(){
        actual_sigmatdproof_record_59_t new = (actual_sigmatdproof_record_59_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_59_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_59_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_59_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_59_ptr);
 

 
        return new;
 };

sigmatdproof_record_59_t update_sigmatdproof_record_59_scaf(sigmatdproof_record_59_t x, sigmatdproof_array_52_t v){
        sigmatdproof_record_59_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_sigmatdproof_array_52(x->scaf);};}
        else {y = copy_sigmatdproof_record_59(x); x->count--; y->scaf->count--;};
        y->scaf = (sigmatdproof_array_52_t)v;
        return y;}

sigmatdproof_record_59_t update_sigmatdproof_record_59_depth(sigmatdproof_record_59_t x, uint64_t v){
        sigmatdproof_record_59_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_59(x); x->count--;};
        y->depth = (uint64_t)v;
        return y;}

sigmatdproof_record_59_t update_sigmatdproof_record_59_stack(sigmatdproof_record_59_t x, sigmatopdown__ent_adt_t v){
        sigmatdproof_record_59_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_sigmatopdown__ent_adt(x->stack);};}
        else {y = copy_sigmatdproof_record_59(x); x->count--; y->stack->count--;};
        y->stack = (sigmatopdown__ent_adt_t)v;
        return y;}

sigmatdproof_record_59_t update_sigmatdproof_record_59_lflag(sigmatdproof_record_59_t x, bool_t v){
        sigmatdproof_record_59_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_59(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}




sigmatdproof_record_60_t new_sigmatdproof_record_60(void){
        sigmatdproof_record_60_t tmp = (sigmatdproof_record_60_t) safe_malloc(sizeof(struct sigmatdproof_record_60_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_60(sigmatdproof_record_60_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof_record_59(x->project_1);
         release_sigmatdproof__qstack_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_60_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_60((sigmatdproof_record_60_t)x);
}

sigmatdproof_record_60_t copy_sigmatdproof_record_60(sigmatdproof_record_60_t x){
        sigmatdproof_record_60_t y = new_sigmatdproof_record_60();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->project_3 = (uint8_t)x->project_3;
        y->project_4 = (uint32_t)x->project_4;
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof_record_60(sigmatdproof_record_60_t x, sigmatdproof_record_60_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatdproof_record_59(x->project_1, y->project_1);
        tmp = tmp && equal_sigmatdproof__qstack_adt(x->project_2, y->project_2);
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && x->project_4 == y->project_4;
        return tmp;}

char * json_sigmatdproof_record_60(sigmatdproof_record_60_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatdproof_record_59(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_sigmatdproof__qstack_adt(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_uint32(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof_record_60_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_60_t T){
        return equal_sigmatdproof_record_60((sigmatdproof_record_60_t)x, (sigmatdproof_record_60_t)y);
}

char * json_sigmatdproof_record_60_ptr(pointer_t x, actual_sigmatdproof_record_60_t T){
        return json_sigmatdproof_record_60((sigmatdproof_record_60_t)x);
}

actual_sigmatdproof_record_60_t actual_sigmatdproof_record_60(){
        actual_sigmatdproof_record_60_t new = (actual_sigmatdproof_record_60_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_60_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_60_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_60_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_60_ptr);
 

 
        return new;
 };

sigmatdproof_record_60_t update_sigmatdproof_record_60_project_1(sigmatdproof_record_60_t x, sigmatdproof_record_59_t v){
        sigmatdproof_record_60_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatdproof_record_59(x->project_1);};}
        else {y = copy_sigmatdproof_record_60(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatdproof_record_59_t)v;
        return y;}

sigmatdproof_record_60_t update_sigmatdproof_record_60_project_2(sigmatdproof_record_60_t x, sigmatdproof__qstack_adt_t v){
        sigmatdproof_record_60_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_sigmatdproof__qstack_adt(x->project_2);};}
        else {y = copy_sigmatdproof_record_60(x); x->count--; y->project_2->count--;};
        y->project_2 = (sigmatdproof__qstack_adt_t)v;
        return y;}

sigmatdproof_record_60_t update_sigmatdproof_record_60_project_3(sigmatdproof_record_60_t x, uint8_t v){
        sigmatdproof_record_60_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_60(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}

sigmatdproof_record_60_t update_sigmatdproof_record_60_project_4(sigmatdproof_record_60_t x, uint32_t v){
        sigmatdproof_record_60_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_60(x); x->count--;};
        y->project_4 = (uint32_t)v;
        return y;}



void release_sigmatdproof_funtype_61(sigmatdproof_funtype_61_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_61_t copy_sigmatdproof_funtype_61(sigmatdproof_funtype_61_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_61(sigmatdproof_funtype_61_t x, sigmatdproof_funtype_61_t y){
        return false;}

char* json_sigmatdproof_funtype_61(sigmatdproof_funtype_61_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_61\""); return result;}


sigmatdproof__parsetree_adt_t f_sigmatdproof_closure_62(struct sigmatdproof_closure_62_s * closure, sigmatdproof_record_60_t bvar){
        sigmatdproof_record_59_t bvar_1;
        bvar_1 = (sigmatdproof_record_59_t)bvar->project_1;
        bvar->project_1->count++;
        sigmatdproof__qstack_adt_t bvar_2;
        bvar_2 = (sigmatdproof__qstack_adt_t)bvar->project_2;
        bvar->project_2->count++;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        uint32_t bvar_4;
        bvar_4 = (uint32_t)bvar->project_4;
        release_sigmatdproof_record_60(bvar);
        sigmatdproof__parsetree_adt_t result = h_sigmatdproof_closure_62(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        release_sigmatdproof_record_59(bvar_1);
        release_sigmatdproof__qstack_adt(bvar_2);
        return result;}

sigmatdproof__parsetree_adt_t m_sigmatdproof_closure_62(struct sigmatdproof_closure_62_s * closure, sigmatdproof_record_59_t bvar_1, sigmatdproof__qstack_adt_t bvar_2, uint8_t bvar_3, uint32_t bvar_4){
        return h_sigmatdproof_closure_62(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern sigmatdproof__parsetree_adt_t h_sigmatdproof_closure_62(sigmatdproof_record_59_t ivar_8, sigmatdproof__qstack_adt_t ivar_10, uint8_t ivar_11, uint32_t ivar_12, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatdproof_array_50_t ivar_3, uint8_t ivar_5, uint32_t ivar_4){
        sigmatdproof__parsetree_adt_t result;
        sigmatopdown__peg_adt_t ivar_13;
        ivar_13 = (sigmatopdown__peg_adt_t)ivar_2->elems[ivar_11];
        ivar_13->count++;
        bool_t ivar_70;
        ivar_13->count++;
        ivar_70 = (bool_t)r_sigmatopdown__notp((sigmatopdown__peg_adt_t)ivar_13);
        if (ivar_70){ 
             uint8_t ivar_18;
             ivar_18 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_13);
             sigmatopdown__ent_adt_t ivar_68;
             sigmatdproof_array_51_t ivar_26;
             sigmatdproof_array_52_t ivar_30;
             ivar_30 = (sigmatdproof_array_52_t)ivar_8->scaf;
             ivar_30->count++;
             ivar_26 = (sigmatdproof_array_51_t)ivar_30->elems[ivar_12];
             ivar_26->count++;
             release_sigmatdproof_array_52(ivar_30);
             ivar_68 = (sigmatopdown__ent_adt_t)ivar_26->elems[ivar_11];
             ivar_68->count++;
             release_sigmatdproof_array_51(ivar_26);
             sigmatdproof__parsetree_adt_t ivar_69;
             sigmatdproof_funtype_61_t ivar_49;
             ivar_2->count++;
             ivar_3->count++;
             ivar_49 = (sigmatdproof_funtype_61_t)sigmatdproof__buildtree((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
             sigmatdproof__qstack_adt_t ivar_64;
             ivar_64 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (sigmatdproof__qstack_adt_t)ivar_10);
             ivar_69 = (sigmatdproof__parsetree_adt_t)ivar_49->ftbl->mptr(ivar_49, ivar_8, ivar_64, ivar_18, ivar_12);
             ivar_49->ftbl->rptr(ivar_49);
             result = (sigmatdproof__parsetree_adt_t)sigmatdproof__one((sigmatopdown__ent_adt_t)ivar_68, (sigmatdproof__parsetree_adt_t)ivar_69);
} else {
        
             bool_t ivar_126;
             ivar_13->count++;
             ivar_126 = (bool_t)r_sigmatopdown__andp((sigmatopdown__peg_adt_t)ivar_13);
             if (ivar_126){  
           uint8_t ivar_74;
           ivar_74 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_13);
           sigmatopdown__ent_adt_t ivar_124;
           sigmatdproof_array_51_t ivar_82;
           sigmatdproof_array_52_t ivar_86;
           ivar_86 = (sigmatdproof_array_52_t)ivar_8->scaf;
           ivar_86->count++;
           ivar_82 = (sigmatdproof_array_51_t)ivar_86->elems[ivar_12];
           ivar_82->count++;
           release_sigmatdproof_array_52(ivar_86);
           ivar_124 = (sigmatopdown__ent_adt_t)ivar_82->elems[ivar_11];
           ivar_124->count++;
           release_sigmatdproof_array_51(ivar_82);
           sigmatdproof__parsetree_adt_t ivar_125;
           sigmatdproof_funtype_61_t ivar_105;
           ivar_2->count++;
           ivar_3->count++;
           ivar_105 = (sigmatdproof_funtype_61_t)sigmatdproof__buildtree((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
           sigmatdproof__qstack_adt_t ivar_120;
           ivar_120 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (sigmatdproof__qstack_adt_t)ivar_10);
           ivar_125 = (sigmatdproof__parsetree_adt_t)ivar_105->ftbl->mptr(ivar_105, ivar_8, ivar_120, ivar_74, ivar_12);
           ivar_105->ftbl->rptr(ivar_105);
           result = (sigmatdproof__parsetree_adt_t)sigmatdproof__one((sigmatopdown__ent_adt_t)ivar_124, (sigmatdproof__parsetree_adt_t)ivar_125);
} else {
             
           bool_t ivar_302;
           ivar_13->count++;
           ivar_302 = (bool_t)r_sigmatopdown__concatp((sigmatopdown__peg_adt_t)ivar_13);
           if (ivar_302){   
           uint8_t ivar_130;
           ivar_13->count++;
           ivar_130 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_13);
           uint8_t ivar_131;
           ivar_131 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_13);
           bool_t ivar_138;
           sigmatopdown__ent_adt_t ivar_152;
           sigmatdproof_array_51_t ivar_142;
           sigmatdproof_array_52_t ivar_146;
           ivar_146 = (sigmatdproof_array_52_t)ivar_8->scaf;
           ivar_146->count++;
           ivar_142 = (sigmatdproof_array_51_t)ivar_146->elems[ivar_12];
           ivar_142->count++;
           release_sigmatdproof_array_52(ivar_146);
           ivar_152 = (sigmatopdown__ent_adt_t)ivar_142->elems[ivar_130];
           ivar_152->count++;
           release_sigmatdproof_array_51(ivar_142);
           ivar_138 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_152);
           if (ivar_138){    
            sigmatopdown__ent_adt_t ivar_199;
            sigmatdproof_array_51_t ivar_157;
            sigmatdproof_array_52_t ivar_161;
            ivar_161 = (sigmatdproof_array_52_t)ivar_8->scaf;
            ivar_161->count++;
            ivar_157 = (sigmatdproof_array_51_t)ivar_161->elems[ivar_12];
            ivar_157->count++;
            release_sigmatdproof_array_52(ivar_161);
            ivar_199 = (sigmatopdown__ent_adt_t)ivar_157->elems[ivar_11];
            ivar_199->count++;
            release_sigmatdproof_array_51(ivar_157);
            sigmatdproof__parsetree_adt_t ivar_200;
            sigmatdproof_funtype_61_t ivar_180;
            ivar_2->count++;
            ivar_3->count++;
            ivar_180 = (sigmatdproof_funtype_61_t)sigmatdproof__buildtree((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
            sigmatdproof__qstack_adt_t ivar_195;
            ivar_195 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (sigmatdproof__qstack_adt_t)ivar_10);
            ivar_200 = (sigmatdproof__parsetree_adt_t)ivar_180->ftbl->mptr(ivar_180, ivar_8, ivar_195, ivar_130, ivar_12);
            ivar_180->ftbl->rptr(ivar_180);
            result = (sigmatdproof__parsetree_adt_t)sigmatdproof__one((sigmatopdown__ent_adt_t)ivar_199, (sigmatdproof__parsetree_adt_t)ivar_200);
} else {
           
            /* E1 */ sigmatdproof__parsetree_adt_t ivar_201;
            sigmatdproof_funtype_61_t ivar_216;
            ivar_2->count++;
            ivar_3->count++;
            ivar_216 = (sigmatdproof_funtype_61_t)sigmatdproof__buildtree((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
            sigmatdproof__qstack_adt_t ivar_231;
            ivar_10->count++;
            ivar_231 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (sigmatdproof__qstack_adt_t)ivar_10);
            ivar_8->count++;
            ivar_201 = (sigmatdproof__parsetree_adt_t)ivar_216->ftbl->mptr(ivar_216, ivar_8, ivar_231, ivar_130, ivar_12);
            ivar_216->ftbl->rptr(ivar_216);
            sigmatopdown__ent_adt_t ivar_299;
            sigmatdproof_array_51_t ivar_239;
            sigmatdproof_array_52_t ivar_243;
            ivar_243 = (sigmatdproof_array_52_t)ivar_8->scaf;
            ivar_243->count++;
            ivar_239 = (sigmatdproof_array_51_t)ivar_243->elems[ivar_12];
            ivar_239->count++;
            release_sigmatdproof_array_52(ivar_243);
            ivar_299 = (sigmatopdown__ent_adt_t)ivar_239->elems[ivar_11];
            ivar_299->count++;
            release_sigmatdproof_array_51(ivar_239);
            sigmatdproof__parsetree_adt_t ivar_301;
            sigmatdproof_funtype_61_t ivar_279;
            ivar_2->count++;
            ivar_3->count++;
            ivar_279 = (sigmatdproof_funtype_61_t)sigmatdproof__buildtree((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
            sigmatdproof__qstack_adt_t ivar_294;
            ivar_294 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (sigmatdproof__qstack_adt_t)ivar_10);
            mpq_ptr_t ivar_297;
            uint32_t ivar_260;
            sigmatopdown__ent_adt_t ivar_274;
            sigmatdproof_array_51_t ivar_264;
            sigmatdproof_array_52_t ivar_268;
            ivar_268 = (sigmatdproof_array_52_t)ivar_8->scaf;
            ivar_268->count++;
            ivar_264 = (sigmatdproof_array_51_t)ivar_268->elems[ivar_12];
            ivar_264->count++;
            release_sigmatdproof_array_52(ivar_268);
            ivar_274 = (sigmatopdown__ent_adt_t)ivar_264->elems[ivar_130];
            ivar_274->count++;
            release_sigmatdproof_array_51(ivar_264);
            ivar_260 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_274);
            mpz_t tmp37467;
            mpz_init(tmp37467);
            mpz_set_ui(tmp37467, (uint64_t)ivar_12);
            mpz_add_ui(tmp37467, tmp37467, (uint64_t)ivar_260);
            mpq_mk_set_z(ivar_297, tmp37467);
            mpz_clear(tmp37467);
            uint32_t ivar_296;
            //copying to uint32 from mpq;
            ivar_296 = (uint32_t)mpq_get_ui(ivar_297);
            mpq_clear(ivar_297);
            ivar_301 = (sigmatdproof__parsetree_adt_t)ivar_279->ftbl->mptr(ivar_279, ivar_8, ivar_294, ivar_131, ivar_296);
            ivar_279->ftbl->rptr(ivar_279);
            result = (sigmatdproof__parsetree_adt_t)sigmatdproof__two((sigmatopdown__ent_adt_t)ivar_299, (sigmatdproof__parsetree_adt_t)ivar_201, (sigmatdproof__parsetree_adt_t)ivar_301);
};
} else {
           
           bool_t ivar_459;
           ivar_13->count++;
           ivar_459 = (bool_t)r_sigmatopdown__orp((sigmatopdown__peg_adt_t)ivar_13);
           if (ivar_459){    
            uint8_t ivar_306;
            ivar_13->count++;
            ivar_306 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_13);
            uint8_t ivar_307;
            ivar_307 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_13);
            bool_t ivar_314;
            sigmatopdown__ent_adt_t ivar_328;
            sigmatdproof_array_51_t ivar_318;
            sigmatdproof_array_52_t ivar_322;
            ivar_322 = (sigmatdproof_array_52_t)ivar_8->scaf;
            ivar_322->count++;
            ivar_318 = (sigmatdproof_array_51_t)ivar_322->elems[ivar_12];
            ivar_318->count++;
            release_sigmatdproof_array_52(ivar_322);
            ivar_328 = (sigmatopdown__ent_adt_t)ivar_318->elems[ivar_306];
            ivar_328->count++;
            release_sigmatdproof_array_51(ivar_318);
            ivar_314 = (bool_t)r_sigmatopdown__failp((sigmatopdown__ent_adt_t)ivar_328);
            if (ivar_314){     
             sigmatopdown__ent_adt_t ivar_408;
             sigmatdproof_array_51_t ivar_334;
             sigmatdproof_array_52_t ivar_338;
             ivar_338 = (sigmatdproof_array_52_t)ivar_8->scaf;
             ivar_338->count++;
             ivar_334 = (sigmatdproof_array_51_t)ivar_338->elems[ivar_12];
             ivar_334->count++;
             release_sigmatdproof_array_52(ivar_338);
             ivar_408 = (sigmatopdown__ent_adt_t)ivar_334->elems[ivar_11];
             ivar_408->count++;
             release_sigmatdproof_array_51(ivar_334);
             sigmatdproof__parsetree_adt_t ivar_409;
             sigmatdproof_funtype_61_t ivar_357;
             ivar_2->count++;
             ivar_3->count++;
             ivar_357 = (sigmatdproof_funtype_61_t)sigmatdproof__buildtree((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
             sigmatdproof__qstack_adt_t ivar_372;
             ivar_10->count++;
             ivar_372 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (sigmatdproof__qstack_adt_t)ivar_10);
             ivar_8->count++;
             ivar_409 = (sigmatdproof__parsetree_adt_t)ivar_357->ftbl->mptr(ivar_357, ivar_8, ivar_372, ivar_306, ivar_12);
             ivar_357->ftbl->rptr(ivar_357);
             sigmatdproof__parsetree_adt_t ivar_410;
             sigmatdproof_funtype_61_t ivar_389;
             ivar_2->count++;
             ivar_3->count++;
             ivar_389 = (sigmatdproof_funtype_61_t)sigmatdproof__buildtree((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
             sigmatdproof__qstack_adt_t ivar_404;
             ivar_404 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (sigmatdproof__qstack_adt_t)ivar_10);
             ivar_410 = (sigmatdproof__parsetree_adt_t)ivar_389->ftbl->mptr(ivar_389, ivar_8, ivar_404, ivar_307, ivar_12);
             ivar_389->ftbl->rptr(ivar_389);
             result = (sigmatdproof__parsetree_adt_t)sigmatdproof__two((sigmatopdown__ent_adt_t)ivar_408, (sigmatdproof__parsetree_adt_t)ivar_409, (sigmatdproof__parsetree_adt_t)ivar_410);
} else {
            
             sigmatopdown__ent_adt_t ivar_457;
             sigmatdproof_array_51_t ivar_415;
             sigmatdproof_array_52_t ivar_419;
             ivar_419 = (sigmatdproof_array_52_t)ivar_8->scaf;
             ivar_419->count++;
             ivar_415 = (sigmatdproof_array_51_t)ivar_419->elems[ivar_12];
             ivar_415->count++;
             release_sigmatdproof_array_52(ivar_419);
             ivar_457 = (sigmatopdown__ent_adt_t)ivar_415->elems[ivar_11];
             ivar_457->count++;
             release_sigmatdproof_array_51(ivar_415);
             sigmatdproof__parsetree_adt_t ivar_458;
             sigmatdproof_funtype_61_t ivar_438;
             ivar_2->count++;
             ivar_3->count++;
             ivar_438 = (sigmatdproof_funtype_61_t)sigmatdproof__buildtree((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
             sigmatdproof__qstack_adt_t ivar_453;
             ivar_453 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_11, (uint32_t)ivar_12, (sigmatdproof__qstack_adt_t)ivar_10);
             ivar_458 = (sigmatdproof__parsetree_adt_t)ivar_438->ftbl->mptr(ivar_438, ivar_8, ivar_453, ivar_306, ivar_12);
             ivar_438->ftbl->rptr(ivar_438);
             result = (sigmatdproof__parsetree_adt_t)sigmatdproof__one((sigmatopdown__ent_adt_t)ivar_457, (sigmatdproof__parsetree_adt_t)ivar_458);
};
} else {
           
            release_sigmatopdown__peg_adt(ivar_13);
            release_sigmatdproof__qstack_adt(ivar_10);
            sigmatopdown__ent_adt_t ivar_476;
            sigmatdproof_array_51_t ivar_466;
            sigmatdproof_array_52_t ivar_470;
            ivar_470 = (sigmatdproof_array_52_t)ivar_8->scaf;
            ivar_470->count++;
            release_sigmatdproof_record_59(ivar_8);
            ivar_466 = (sigmatdproof_array_51_t)ivar_470->elems[ivar_12];
            ivar_466->count++;
            release_sigmatdproof_array_52(ivar_470);
            ivar_476 = (sigmatopdown__ent_adt_t)ivar_466->elems[ivar_11];
            ivar_476->count++;
            release_sigmatdproof_array_51(ivar_466);
            result = (sigmatdproof__parsetree_adt_t)sigmatdproof__zero((sigmatopdown__ent_adt_t)ivar_476);
};
};
};
};

        return result;
}

sigmatdproof_closure_62_t new_sigmatdproof_closure_62(void){
        static struct sigmatdproof_funtype_61_ftbl_s ftbl = {.fptr = (sigmatdproof__parsetree_adt_t (*)(sigmatdproof_funtype_61_t, sigmatdproof_record_60_t))&f_sigmatdproof_closure_62, .mptr = (sigmatdproof__parsetree_adt_t (*)(sigmatdproof_funtype_61_t, sigmatdproof_record_59_t, sigmatdproof__qstack_adt_t, uint8_t, uint32_t))&m_sigmatdproof_closure_62, .rptr =  (void (*)(sigmatdproof_funtype_61_t))&release_sigmatdproof_closure_62, .cptr = (sigmatdproof_funtype_61_t (*)(sigmatdproof_funtype_61_t))&copy_sigmatdproof_closure_62};
        sigmatdproof_closure_62_t tmp = (sigmatdproof_closure_62_t) safe_malloc(sizeof(struct sigmatdproof_closure_62_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdproof_closure_62(sigmatdproof_funtype_61_t closure){
        sigmatdproof_closure_62_t x = (sigmatdproof_closure_62_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__lang_spec(x->fvar_2);
         release_sigmatdproof_array_50(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdproof_closure_62_t copy_sigmatdproof_closure_62(sigmatdproof_closure_62_t x){
        sigmatdproof_closure_62_t y = new_sigmatdproof_closure_62();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = (uint8_t)x->fvar_4;
        y->fvar_5 = (uint32_t)x->fvar_5;
        if (x->htbl != NULL){
            sigmatdproof_funtype_61_htbl_t new_htbl = (sigmatdproof_funtype_61_htbl_t) safe_malloc(sizeof(struct sigmatdproof_funtype_61_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdproof_funtype_61_hashentry_t * new_data = (sigmatdproof_funtype_61_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdproof_funtype_61_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdproof_funtype_61_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatdproof_record_63_t new_sigmatdproof_record_63(void){
        sigmatdproof_record_63_t tmp = (sigmatdproof_record_63_t) safe_malloc(sizeof(struct sigmatdproof_record_63_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_63(sigmatdproof_record_63_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof_record_59(x->project_1);
         release_sigmatdproof_array_52(x->project_2);
         release_sigmatdproof__qstack_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_63_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_63((sigmatdproof_record_63_t)x);
}

sigmatdproof_record_63_t copy_sigmatdproof_record_63(sigmatdproof_record_63_t x){
        sigmatdproof_record_63_t y = new_sigmatdproof_record_63();
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

bool_t equal_sigmatdproof_record_63(sigmatdproof_record_63_t x, sigmatdproof_record_63_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatdproof_record_59(x->project_1, y->project_1);
        tmp = tmp && equal_sigmatdproof_array_52(x->project_2, y->project_2);
        tmp = tmp && equal_sigmatdproof__qstack_adt(x->project_3, y->project_3);
        tmp = tmp && x->project_4 == y->project_4;
        tmp = tmp && x->project_5 == y->project_5;
        return tmp;}

char * json_sigmatdproof_record_63(sigmatdproof_record_63_t x){
        char * tmp[5]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatdproof_record_59(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_sigmatdproof_array_52(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_sigmatdproof__qstack_adt(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_uint8(x->project_4));
        char * fld4 = safe_malloc(21);
         sprintf(fld4, "\"project_5\" : ");
        tmp[4] = safe_strcat(fld4, json_uint32(x->project_5));
         char * result = json_list_with_sep(tmp, 5,  '{', ',', '}');
         for (uint32_t i = 0; i < 5; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof_record_63_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_63_t T){
        return equal_sigmatdproof_record_63((sigmatdproof_record_63_t)x, (sigmatdproof_record_63_t)y);
}

char * json_sigmatdproof_record_63_ptr(pointer_t x, actual_sigmatdproof_record_63_t T){
        return json_sigmatdproof_record_63((sigmatdproof_record_63_t)x);
}

actual_sigmatdproof_record_63_t actual_sigmatdproof_record_63(){
        actual_sigmatdproof_record_63_t new = (actual_sigmatdproof_record_63_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_63_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_63_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_63_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_63_ptr);
 

 
        return new;
 };

sigmatdproof_record_63_t update_sigmatdproof_record_63_project_1(sigmatdproof_record_63_t x, sigmatdproof_record_59_t v){
        sigmatdproof_record_63_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatdproof_record_59(x->project_1);};}
        else {y = copy_sigmatdproof_record_63(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatdproof_record_59_t)v;
        return y;}

sigmatdproof_record_63_t update_sigmatdproof_record_63_project_2(sigmatdproof_record_63_t x, sigmatdproof_array_52_t v){
        sigmatdproof_record_63_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_sigmatdproof_array_52(x->project_2);};}
        else {y = copy_sigmatdproof_record_63(x); x->count--; y->project_2->count--;};
        y->project_2 = (sigmatdproof_array_52_t)v;
        return y;}

sigmatdproof_record_63_t update_sigmatdproof_record_63_project_3(sigmatdproof_record_63_t x, sigmatdproof__qstack_adt_t v){
        sigmatdproof_record_63_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_sigmatdproof__qstack_adt(x->project_3);};}
        else {y = copy_sigmatdproof_record_63(x); x->count--; y->project_3->count--;};
        y->project_3 = (sigmatdproof__qstack_adt_t)v;
        return y;}

sigmatdproof_record_63_t update_sigmatdproof_record_63_project_4(sigmatdproof_record_63_t x, uint8_t v){
        sigmatdproof_record_63_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_63(x); x->count--;};
        y->project_4 = (uint8_t)v;
        return y;}

sigmatdproof_record_63_t update_sigmatdproof_record_63_project_5(sigmatdproof_record_63_t x, uint32_t v){
        sigmatdproof_record_63_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_63(x); x->count--;};
        y->project_5 = (uint32_t)v;
        return y;}



void release_sigmatdproof_funtype_64(sigmatdproof_funtype_64_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_64_t copy_sigmatdproof_funtype_64(sigmatdproof_funtype_64_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_64(sigmatdproof_funtype_64_t x, sigmatdproof_funtype_64_t y){
        return false;}

char* json_sigmatdproof_funtype_64(sigmatdproof_funtype_64_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_64\""); return result;}


sigmatdproof__parsetree_adt_t f_sigmatdproof_closure_65(struct sigmatdproof_closure_65_s * closure, sigmatdproof_record_63_t bvar){
        sigmatdproof_record_59_t bvar_1;
        bvar_1 = (sigmatdproof_record_59_t)bvar->project_1;
        bvar->project_1->count++;
        sigmatdproof_array_52_t bvar_2;
        bvar_2 = (sigmatdproof_array_52_t)bvar->project_2;
        bvar->project_2->count++;
        sigmatdproof__qstack_adt_t bvar_3;
        bvar_3 = (sigmatdproof__qstack_adt_t)bvar->project_3;
        bvar->project_3->count++;
        uint8_t bvar_4;
        bvar_4 = (uint8_t)bvar->project_4;
        uint32_t bvar_5;
        bvar_5 = (uint32_t)bvar->project_5;
        release_sigmatdproof_record_63(bvar);
        sigmatdproof__parsetree_adt_t result = h_sigmatdproof_closure_65(bvar_1, bvar_2, bvar_3, bvar_4, bvar_5, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        release_sigmatdproof_record_59(bvar_1);
        release_sigmatdproof_array_52(bvar_2);
        release_sigmatdproof__qstack_adt(bvar_3);
        return result;}

sigmatdproof__parsetree_adt_t m_sigmatdproof_closure_65(struct sigmatdproof_closure_65_s * closure, sigmatdproof_record_59_t bvar_1, sigmatdproof_array_52_t bvar_2, sigmatdproof__qstack_adt_t bvar_3, uint8_t bvar_4, uint32_t bvar_5){
        return h_sigmatdproof_closure_65(bvar_1, bvar_2, bvar_3, bvar_4, bvar_5, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern sigmatdproof__parsetree_adt_t h_sigmatdproof_closure_65(sigmatdproof_record_59_t ivar_9, sigmatdproof_array_52_t ivar_11, sigmatdproof__qstack_adt_t ivar_13, uint8_t ivar_14, uint32_t ivar_15, uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatdproof_array_50_t ivar_3, uint8_t ivar_5, uint32_t ivar_4){
        sigmatdproof__parsetree_adt_t result;
        bool_t ivar_16;
        ivar_13->count++;
        ivar_16 = (bool_t)sigmatdproof__inqstack((uint8_t)ivar_14, (uint32_t)ivar_15, (sigmatdproof__qstack_adt_t)ivar_13);
        if (ivar_16){ 
             release_sigmatdproof__qstack_adt(ivar_13);
             release_sigmatdproof_array_52(ivar_11);
             release_sigmatdproof_record_59(ivar_9);
             sigmatopdown__ent_adt_t ivar_26;
             ivar_26 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
             if (ivar_26 != NULL) ivar_26->count++;
             result = (sigmatdproof__parsetree_adt_t)sigmatdproof__zero((sigmatopdown__ent_adt_t)ivar_26);
} else {
        
             sigmatopdown__peg_adt_t ivar_27;
             ivar_27 = (sigmatopdown__peg_adt_t)ivar_2->elems[ivar_14];
             ivar_27->count++;
             bool_t ivar_93;
             ivar_27->count++;
             ivar_93 = (bool_t)r_sigmatopdown__notp((sigmatopdown__peg_adt_t)ivar_27);
             if (ivar_93){  
           uint8_t ivar_32;
           ivar_32 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_27);
           sigmatopdown__ent_adt_t ivar_91;
           ivar_91 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
           if (ivar_91 != NULL) ivar_91->count++;
           sigmatdproof__parsetree_adt_t ivar_92;
           sigmatdproof_funtype_64_t ivar_70;
           ivar_2->count++;
           ivar_3->count++;
           ivar_70 = (sigmatdproof_funtype_64_t)sigmatdproof__buildloop((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
           sigmatdproof_array_52_t ivar_86;
           sigmatopdown__ent_adt_t ivar_44;
           ivar_44 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
           if (ivar_44 != NULL) ivar_44->count++;
           sigmatdproof_array_51_t ivar_46;
           ivar_46 = (sigmatdproof_array_51_t)ivar_11->elems[ivar_15];
           ivar_46->count++;
           sigmatdproof_array_52_t ivar_53;
           sigmatdproof_array_51_t ivar_55;
           ivar_55 = NULL;
           ivar_53 = (sigmatdproof_array_52_t)update_sigmatdproof_array_52(ivar_11, ivar_15, ivar_55);
           if (ivar_55 != NULL) ivar_55->count--;
           sigmatdproof_array_51_t ivar_54;
           sigmatdproof_array_51_t ivar_49;
           sigmatopdown__ent_adt_t ivar_51;
           ivar_51 = NULL;
           ivar_49 = (sigmatdproof_array_51_t)update_sigmatdproof_array_51(ivar_46, ivar_14, ivar_51);
           if (ivar_51 != NULL) ivar_51->count--;
           ivar_54 = (sigmatdproof_array_51_t)update_sigmatdproof_array_51(ivar_49, ivar_14, ivar_44);
           if (ivar_44 != NULL) ivar_44->count--;
           ivar_86 = (sigmatdproof_array_52_t)update_sigmatdproof_array_52(ivar_53, ivar_15, ivar_54);
           if (ivar_54 != NULL) ivar_54->count--;
           sigmatdproof__qstack_adt_t ivar_87;
           ivar_87 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_14, (uint32_t)ivar_15, (sigmatdproof__qstack_adt_t)ivar_13);
           ivar_92 = (sigmatdproof__parsetree_adt_t)ivar_70->ftbl->mptr(ivar_70, ivar_9, ivar_86, ivar_87, ivar_32, ivar_15);
           ivar_70->ftbl->rptr(ivar_70);
           result = (sigmatdproof__parsetree_adt_t)sigmatdproof__one((sigmatopdown__ent_adt_t)ivar_91, (sigmatdproof__parsetree_adt_t)ivar_92);
} else {
             
           bool_t ivar_158;
           ivar_27->count++;
           ivar_158 = (bool_t)r_sigmatopdown__andp((sigmatopdown__peg_adt_t)ivar_27);
           if (ivar_158){   
           uint8_t ivar_97;
           ivar_97 = (uint8_t)sigmatopdown__peg_adt_e((sigmatopdown__peg_adt_t)ivar_27);
           sigmatopdown__ent_adt_t ivar_156;
           ivar_156 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
           if (ivar_156 != NULL) ivar_156->count++;
           sigmatdproof__parsetree_adt_t ivar_157;
           sigmatdproof_funtype_64_t ivar_135;
           ivar_2->count++;
           ivar_3->count++;
           ivar_135 = (sigmatdproof_funtype_64_t)sigmatdproof__buildloop((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
           sigmatdproof_array_52_t ivar_151;
           sigmatopdown__ent_adt_t ivar_109;
           ivar_109 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
           if (ivar_109 != NULL) ivar_109->count++;
           sigmatdproof_array_51_t ivar_111;
           ivar_111 = (sigmatdproof_array_51_t)ivar_11->elems[ivar_15];
           ivar_111->count++;
           sigmatdproof_array_52_t ivar_118;
           sigmatdproof_array_51_t ivar_120;
           ivar_120 = NULL;
           ivar_118 = (sigmatdproof_array_52_t)update_sigmatdproof_array_52(ivar_11, ivar_15, ivar_120);
           if (ivar_120 != NULL) ivar_120->count--;
           sigmatdproof_array_51_t ivar_119;
           sigmatdproof_array_51_t ivar_114;
           sigmatopdown__ent_adt_t ivar_116;
           ivar_116 = NULL;
           ivar_114 = (sigmatdproof_array_51_t)update_sigmatdproof_array_51(ivar_111, ivar_14, ivar_116);
           if (ivar_116 != NULL) ivar_116->count--;
           ivar_119 = (sigmatdproof_array_51_t)update_sigmatdproof_array_51(ivar_114, ivar_14, ivar_109);
           if (ivar_109 != NULL) ivar_109->count--;
           ivar_151 = (sigmatdproof_array_52_t)update_sigmatdproof_array_52(ivar_118, ivar_15, ivar_119);
           if (ivar_119 != NULL) ivar_119->count--;
           sigmatdproof__qstack_adt_t ivar_152;
           ivar_152 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_14, (uint32_t)ivar_15, (sigmatdproof__qstack_adt_t)ivar_13);
           ivar_157 = (sigmatdproof__parsetree_adt_t)ivar_135->ftbl->mptr(ivar_135, ivar_9, ivar_151, ivar_152, ivar_97, ivar_15);
           ivar_135->ftbl->rptr(ivar_135);
           result = (sigmatdproof__parsetree_adt_t)sigmatdproof__one((sigmatopdown__ent_adt_t)ivar_156, (sigmatdproof__parsetree_adt_t)ivar_157);
} else {
           
           bool_t ivar_351;
           ivar_27->count++;
           ivar_351 = (bool_t)r_sigmatopdown__concatp((sigmatopdown__peg_adt_t)ivar_27);
           if (ivar_351){    
            uint8_t ivar_162;
            ivar_27->count++;
            ivar_162 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_27);
            uint8_t ivar_163;
            ivar_163 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_27);
            bool_t ivar_170;
            sigmatopdown__ent_adt_t ivar_184;
            sigmatdproof_array_51_t ivar_174;
            sigmatdproof_array_52_t ivar_178;
            ivar_178 = (sigmatdproof_array_52_t)ivar_9->scaf;
            ivar_178->count++;
            ivar_174 = (sigmatdproof_array_51_t)ivar_178->elems[ivar_15];
            ivar_174->count++;
            release_sigmatdproof_array_52(ivar_178);
            ivar_184 = (sigmatopdown__ent_adt_t)ivar_174->elems[ivar_162];
            ivar_184->count++;
            release_sigmatdproof_array_51(ivar_174);
            ivar_170 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_184);
            if (ivar_170){     
             sigmatopdown__ent_adt_t ivar_240;
             ivar_240 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
             if (ivar_240 != NULL) ivar_240->count++;
             sigmatdproof__parsetree_adt_t ivar_241;
             sigmatdproof_funtype_64_t ivar_219;
             ivar_2->count++;
             ivar_3->count++;
             ivar_219 = (sigmatdproof_funtype_64_t)sigmatdproof__buildloop((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
             sigmatdproof_array_52_t ivar_235;
             sigmatopdown__ent_adt_t ivar_193;
             ivar_193 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
             if (ivar_193 != NULL) ivar_193->count++;
             sigmatdproof_array_51_t ivar_195;
             ivar_195 = (sigmatdproof_array_51_t)ivar_11->elems[ivar_15];
             ivar_195->count++;
             sigmatdproof_array_52_t ivar_202;
             sigmatdproof_array_51_t ivar_204;
             ivar_204 = NULL;
             ivar_202 = (sigmatdproof_array_52_t)update_sigmatdproof_array_52(ivar_11, ivar_15, ivar_204);
             if (ivar_204 != NULL) ivar_204->count--;
             sigmatdproof_array_51_t ivar_203;
             sigmatdproof_array_51_t ivar_198;
             sigmatopdown__ent_adt_t ivar_200;
             ivar_200 = NULL;
             ivar_198 = (sigmatdproof_array_51_t)update_sigmatdproof_array_51(ivar_195, ivar_14, ivar_200);
             if (ivar_200 != NULL) ivar_200->count--;
             ivar_203 = (sigmatdproof_array_51_t)update_sigmatdproof_array_51(ivar_198, ivar_14, ivar_193);
             if (ivar_193 != NULL) ivar_193->count--;
             ivar_235 = (sigmatdproof_array_52_t)update_sigmatdproof_array_52(ivar_202, ivar_15, ivar_203);
             if (ivar_203 != NULL) ivar_203->count--;
             sigmatdproof__qstack_adt_t ivar_236;
             ivar_236 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_14, (uint32_t)ivar_15, (sigmatdproof__qstack_adt_t)ivar_13);
             ivar_241 = (sigmatdproof__parsetree_adt_t)ivar_219->ftbl->mptr(ivar_219, ivar_9, ivar_235, ivar_236, ivar_162, ivar_15);
             ivar_219->ftbl->rptr(ivar_219);
             result = (sigmatdproof__parsetree_adt_t)sigmatdproof__one((sigmatopdown__ent_adt_t)ivar_240, (sigmatdproof__parsetree_adt_t)ivar_241);
} else {
            
             sigmatopdown__ent_adt_t ivar_348;
             ivar_348 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
             if (ivar_348 != NULL) ivar_348->count++;
             sigmatdproof__parsetree_adt_t ivar_349;
             sigmatdproof_funtype_61_t ivar_259;
             ivar_2->count++;
             ivar_3->count++;
             ivar_259 = (sigmatdproof_funtype_61_t)sigmatdproof__buildtree((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
             sigmatdproof__qstack_adt_t ivar_274;
             ivar_13->count++;
             ivar_274 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_14, (uint32_t)ivar_15, (sigmatdproof__qstack_adt_t)ivar_13);
             ivar_9->count++;
             ivar_349 = (sigmatdproof__parsetree_adt_t)ivar_259->ftbl->mptr(ivar_259, ivar_9, ivar_274, ivar_162, ivar_15);
             ivar_259->ftbl->rptr(ivar_259);
             sigmatdproof__parsetree_adt_t ivar_350;
             sigmatdproof_funtype_64_t ivar_326;
             ivar_2->count++;
             ivar_3->count++;
             ivar_326 = (sigmatdproof_funtype_64_t)sigmatdproof__buildloop((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
             sigmatdproof_array_52_t ivar_342;
             sigmatopdown__ent_adt_t ivar_283;
             ivar_283 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
             if (ivar_283 != NULL) ivar_283->count++;
             sigmatdproof_array_51_t ivar_285;
             ivar_285 = (sigmatdproof_array_51_t)ivar_11->elems[ivar_15];
             ivar_285->count++;
             sigmatdproof_array_52_t ivar_292;
             sigmatdproof_array_51_t ivar_294;
             ivar_294 = NULL;
             ivar_292 = (sigmatdproof_array_52_t)update_sigmatdproof_array_52(ivar_11, ivar_15, ivar_294);
             if (ivar_294 != NULL) ivar_294->count--;
             sigmatdproof_array_51_t ivar_293;
             sigmatdproof_array_51_t ivar_288;
             sigmatopdown__ent_adt_t ivar_290;
             ivar_290 = NULL;
             ivar_288 = (sigmatdproof_array_51_t)update_sigmatdproof_array_51(ivar_285, ivar_14, ivar_290);
             if (ivar_290 != NULL) ivar_290->count--;
             ivar_293 = (sigmatdproof_array_51_t)update_sigmatdproof_array_51(ivar_288, ivar_14, ivar_283);
             if (ivar_283 != NULL) ivar_283->count--;
             ivar_342 = (sigmatdproof_array_52_t)update_sigmatdproof_array_52(ivar_292, ivar_15, ivar_293);
             if (ivar_293 != NULL) ivar_293->count--;
             sigmatdproof__qstack_adt_t ivar_343;
             ivar_343 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_14, (uint32_t)ivar_15, (sigmatdproof__qstack_adt_t)ivar_13);
             mpq_ptr_t ivar_346;
             uint32_t ivar_304;
             sigmatopdown__ent_adt_t ivar_318;
             sigmatdproof_array_51_t ivar_308;
             sigmatdproof_array_52_t ivar_312;
             ivar_312 = (sigmatdproof_array_52_t)ivar_9->scaf;
             ivar_312->count++;
             ivar_308 = (sigmatdproof_array_51_t)ivar_312->elems[ivar_15];
             ivar_308->count++;
             release_sigmatdproof_array_52(ivar_312);
             ivar_318 = (sigmatopdown__ent_adt_t)ivar_308->elems[ivar_162];
             ivar_318->count++;
             release_sigmatdproof_array_51(ivar_308);
             ivar_304 = (uint32_t)sigmatopdown__ent_adt_span((sigmatopdown__ent_adt_t)ivar_318);
             mpz_t tmp38395;
             mpz_init(tmp38395);
             mpz_set_ui(tmp38395, (uint64_t)ivar_15);
             mpz_add_ui(tmp38395, tmp38395, (uint64_t)ivar_304);
             mpq_mk_set_z(ivar_346, tmp38395);
             mpz_clear(tmp38395);
             uint32_t ivar_345;
             //copying to uint32 from mpq;
             ivar_345 = (uint32_t)mpq_get_ui(ivar_346);
             mpq_clear(ivar_346);
             ivar_350 = (sigmatdproof__parsetree_adt_t)ivar_326->ftbl->mptr(ivar_326, ivar_9, ivar_342, ivar_343, ivar_163, ivar_345);
             ivar_326->ftbl->rptr(ivar_326);
             result = (sigmatdproof__parsetree_adt_t)sigmatdproof__two((sigmatopdown__ent_adt_t)ivar_348, (sigmatdproof__parsetree_adt_t)ivar_349, (sigmatdproof__parsetree_adt_t)ivar_350);
};
} else {
           
            uint8_t ivar_355;
            ivar_27->count++;
            ivar_355 = (uint8_t)sigmatopdown__peg_adt_e1((sigmatopdown__peg_adt_t)ivar_27);
            uint8_t ivar_356;
            ivar_356 = (uint8_t)sigmatopdown__peg_adt_e2((sigmatopdown__peg_adt_t)ivar_27);
            bool_t ivar_363;
            sigmatopdown__ent_adt_t ivar_377;
            sigmatdproof_array_51_t ivar_367;
            sigmatdproof_array_52_t ivar_371;
            ivar_371 = (sigmatdproof_array_52_t)ivar_9->scaf;
            ivar_371->count++;
            ivar_367 = (sigmatdproof_array_51_t)ivar_371->elems[ivar_15];
            ivar_367->count++;
            release_sigmatdproof_array_52(ivar_371);
            ivar_377 = (sigmatopdown__ent_adt_t)ivar_367->elems[ivar_355];
            ivar_377->count++;
            release_sigmatdproof_array_51(ivar_367);
            ivar_363 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_377);
            if (ivar_363){     
             sigmatopdown__ent_adt_t ivar_433;
             ivar_433 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
             if (ivar_433 != NULL) ivar_433->count++;
             sigmatdproof__parsetree_adt_t ivar_434;
             sigmatdproof_funtype_64_t ivar_412;
             ivar_2->count++;
             ivar_3->count++;
             ivar_412 = (sigmatdproof_funtype_64_t)sigmatdproof__buildloop((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
             sigmatdproof_array_52_t ivar_428;
             sigmatopdown__ent_adt_t ivar_386;
             ivar_386 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
             if (ivar_386 != NULL) ivar_386->count++;
             sigmatdproof_array_51_t ivar_388;
             ivar_388 = (sigmatdproof_array_51_t)ivar_11->elems[ivar_15];
             ivar_388->count++;
             sigmatdproof_array_52_t ivar_395;
             sigmatdproof_array_51_t ivar_397;
             ivar_397 = NULL;
             ivar_395 = (sigmatdproof_array_52_t)update_sigmatdproof_array_52(ivar_11, ivar_15, ivar_397);
             if (ivar_397 != NULL) ivar_397->count--;
             sigmatdproof_array_51_t ivar_396;
             sigmatdproof_array_51_t ivar_391;
             sigmatopdown__ent_adt_t ivar_393;
             ivar_393 = NULL;
             ivar_391 = (sigmatdproof_array_51_t)update_sigmatdproof_array_51(ivar_388, ivar_14, ivar_393);
             if (ivar_393 != NULL) ivar_393->count--;
             ivar_396 = (sigmatdproof_array_51_t)update_sigmatdproof_array_51(ivar_391, ivar_14, ivar_386);
             if (ivar_386 != NULL) ivar_386->count--;
             ivar_428 = (sigmatdproof_array_52_t)update_sigmatdproof_array_52(ivar_395, ivar_15, ivar_396);
             if (ivar_396 != NULL) ivar_396->count--;
             sigmatdproof__qstack_adt_t ivar_429;
             ivar_429 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_14, (uint32_t)ivar_15, (sigmatdproof__qstack_adt_t)ivar_13);
             ivar_434 = (sigmatdproof__parsetree_adt_t)ivar_412->ftbl->mptr(ivar_412, ivar_9, ivar_428, ivar_429, ivar_355, ivar_15);
             ivar_412->ftbl->rptr(ivar_412);
             result = (sigmatdproof__parsetree_adt_t)sigmatdproof__one((sigmatopdown__ent_adt_t)ivar_433, (sigmatdproof__parsetree_adt_t)ivar_434);
} else {
            
             sigmatopdown__ent_adt_t ivar_523;
             ivar_523 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
             if (ivar_523 != NULL) ivar_523->count++;
             sigmatdproof__parsetree_adt_t ivar_524;
             sigmatdproof_funtype_61_t ivar_452;
             ivar_2->count++;
             ivar_3->count++;
             ivar_452 = (sigmatdproof_funtype_61_t)sigmatdproof__buildtree((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
             sigmatdproof__qstack_adt_t ivar_467;
             ivar_13->count++;
             ivar_467 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_14, (uint32_t)ivar_15, (sigmatdproof__qstack_adt_t)ivar_13);
             ivar_9->count++;
             ivar_524 = (sigmatdproof__parsetree_adt_t)ivar_452->ftbl->mptr(ivar_452, ivar_9, ivar_467, ivar_355, ivar_15);
             ivar_452->ftbl->rptr(ivar_452);
             sigmatdproof__parsetree_adt_t ivar_525;
             sigmatdproof_funtype_64_t ivar_502;
             ivar_2->count++;
             ivar_3->count++;
             ivar_502 = (sigmatdproof_funtype_64_t)sigmatdproof__buildloop((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
             sigmatdproof_array_52_t ivar_518;
             sigmatopdown__ent_adt_t ivar_476;
             ivar_476 = (sigmatopdown__ent_adt_t)sigmatopdown__loop();
             if (ivar_476 != NULL) ivar_476->count++;
             sigmatdproof_array_51_t ivar_478;
             ivar_478 = (sigmatdproof_array_51_t)ivar_11->elems[ivar_15];
             ivar_478->count++;
             sigmatdproof_array_52_t ivar_485;
             sigmatdproof_array_51_t ivar_487;
             ivar_487 = NULL;
             ivar_485 = (sigmatdproof_array_52_t)update_sigmatdproof_array_52(ivar_11, ivar_15, ivar_487);
             if (ivar_487 != NULL) ivar_487->count--;
             sigmatdproof_array_51_t ivar_486;
             sigmatdproof_array_51_t ivar_481;
             sigmatopdown__ent_adt_t ivar_483;
             ivar_483 = NULL;
             ivar_481 = (sigmatdproof_array_51_t)update_sigmatdproof_array_51(ivar_478, ivar_14, ivar_483);
             if (ivar_483 != NULL) ivar_483->count--;
             ivar_486 = (sigmatdproof_array_51_t)update_sigmatdproof_array_51(ivar_481, ivar_14, ivar_476);
             if (ivar_476 != NULL) ivar_476->count--;
             ivar_518 = (sigmatdproof_array_52_t)update_sigmatdproof_array_52(ivar_485, ivar_15, ivar_486);
             if (ivar_486 != NULL) ivar_486->count--;
             sigmatdproof__qstack_adt_t ivar_519;
             ivar_519 = (sigmatdproof__qstack_adt_t)sigmatdproof__qpush((uint8_t)ivar_14, (uint32_t)ivar_15, (sigmatdproof__qstack_adt_t)ivar_13);
             ivar_525 = (sigmatdproof__parsetree_adt_t)ivar_502->ftbl->mptr(ivar_502, ivar_9, ivar_518, ivar_519, ivar_356, ivar_15);
             ivar_502->ftbl->rptr(ivar_502);
             result = (sigmatdproof__parsetree_adt_t)sigmatdproof__two((sigmatopdown__ent_adt_t)ivar_523, (sigmatdproof__parsetree_adt_t)ivar_524, (sigmatdproof__parsetree_adt_t)ivar_525);
};
};
};
};
};

        return result;
}

sigmatdproof_closure_65_t new_sigmatdproof_closure_65(void){
        static struct sigmatdproof_funtype_64_ftbl_s ftbl = {.fptr = (sigmatdproof__parsetree_adt_t (*)(sigmatdproof_funtype_64_t, sigmatdproof_record_63_t))&f_sigmatdproof_closure_65, .mptr = (sigmatdproof__parsetree_adt_t (*)(sigmatdproof_funtype_64_t, sigmatdproof_record_59_t, sigmatdproof_array_52_t, sigmatdproof__qstack_adt_t, uint8_t, uint32_t))&m_sigmatdproof_closure_65, .rptr =  (void (*)(sigmatdproof_funtype_64_t))&release_sigmatdproof_closure_65, .cptr = (sigmatdproof_funtype_64_t (*)(sigmatdproof_funtype_64_t))&copy_sigmatdproof_closure_65};
        sigmatdproof_closure_65_t tmp = (sigmatdproof_closure_65_t) safe_malloc(sizeof(struct sigmatdproof_closure_65_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdproof_closure_65(sigmatdproof_funtype_64_t closure){
        sigmatdproof_closure_65_t x = (sigmatdproof_closure_65_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdown__lang_spec(x->fvar_2);
         release_sigmatdproof_array_50(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdproof_closure_65_t copy_sigmatdproof_closure_65(sigmatdproof_closure_65_t x){
        sigmatdproof_closure_65_t y = new_sigmatdproof_closure_65();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = (uint8_t)x->fvar_4;
        y->fvar_5 = (uint32_t)x->fvar_5;
        if (x->htbl != NULL){
            sigmatdproof_funtype_64_htbl_t new_htbl = (sigmatdproof_funtype_64_htbl_t) safe_malloc(sizeof(struct sigmatdproof_funtype_64_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdproof_funtype_64_hashentry_t * new_data = (sigmatdproof_funtype_64_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdproof_funtype_64_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdproof_funtype_64_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatdproof_array_66_t new_sigmatdproof_array_66(uint32_t size){
        sigmatdproof_array_66_t tmp = (sigmatdproof_array_66_t) safe_malloc(sizeof(struct sigmatdproof_array_66_s) + (size * sizeof(sigmatopdown__ent_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_sigmatdproof_array_66(sigmatdproof_array_66_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_sigmatopdown__ent_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_sigmatdproof_array_66_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_array_66((sigmatdproof_array_66_t)x);
}

sigmatdproof_array_66_t copy_sigmatdproof_array_66(sigmatdproof_array_66_t x){
        sigmatdproof_array_66_t tmp = new_sigmatdproof_array_66(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_sigmatdproof_array_66(sigmatdproof_array_66_t x, sigmatdproof_array_66_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_sigmatopdown__ent_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_sigmatdproof_array_66(sigmatdproof_array_66_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_sigmatopdown__ent_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatdproof_array_66_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatdproof_array_66((sigmatdproof_array_66_t)x, (sigmatdproof_array_66_t)y);
}

char * json_sigmatdproof_array_66_ptr(pointer_t x, type_actual_t T){
        return json_sigmatdproof_array_66((sigmatdproof_array_66_t)x);
}

actual_sigmatdproof_array_66_t actual_sigmatdproof_array_66(){
        actual_sigmatdproof_array_66_t new = (actual_sigmatdproof_array_66_t)safe_malloc(sizeof(struct actual_sigmatdproof_array_66_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_array_66_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_array_66_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_array_66_ptr);
 

 
        return new;
 };

sigmatdproof_array_66_t update_sigmatdproof_array_66(sigmatdproof_array_66_t x, uint32_t i, sigmatopdown__ent_adt_t v){
         sigmatdproof_array_66_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_sigmatdproof_array_66(x);
                      x->count--;};
        sigmatopdown__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

sigmatdproof_array_66_t upgrade_sigmatdproof_array_66(sigmatdproof_array_66_t x, uint32_t i, sigmatopdown__ent_adt_t v){
         sigmatdproof_array_66_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatdproof_array_66_s) + (newmax * sizeof(sigmatopdown__ent_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatdproof_array_66(x);} else {y = copy_sigmatdproof_array_66(x);
                      x->count--;};
        sigmatopdown__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}




sigmatdproof_record_67_t new_sigmatdproof_record_67(void){
        sigmatdproof_record_67_t tmp = (sigmatdproof_record_67_t) safe_malloc(sizeof(struct sigmatdproof_record_67_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatdproof_record_67(sigmatdproof_record_67_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof_record_59(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatdproof_record_67_ptr(pointer_t x, type_actual_t T){
        release_sigmatdproof_record_67((sigmatdproof_record_67_t)x);
}

sigmatdproof_record_67_t copy_sigmatdproof_record_67(sigmatdproof_record_67_t x){
        sigmatdproof_record_67_t y = new_sigmatdproof_record_67();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = (uint32_t)x->project_3;
        y->count = 1;
        return y;}

bool_t equal_sigmatdproof_record_67(sigmatdproof_record_67_t x, sigmatdproof_record_67_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatdproof_record_59(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        return tmp;}

char * json_sigmatdproof_record_67(sigmatdproof_record_67_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatdproof_record_59(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatdproof_record_67_ptr(pointer_t x, pointer_t y, actual_sigmatdproof_record_67_t T){
        return equal_sigmatdproof_record_67((sigmatdproof_record_67_t)x, (sigmatdproof_record_67_t)y);
}

char * json_sigmatdproof_record_67_ptr(pointer_t x, actual_sigmatdproof_record_67_t T){
        return json_sigmatdproof_record_67((sigmatdproof_record_67_t)x);
}

actual_sigmatdproof_record_67_t actual_sigmatdproof_record_67(){
        actual_sigmatdproof_record_67_t new = (actual_sigmatdproof_record_67_t)safe_malloc(sizeof(struct actual_sigmatdproof_record_67_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatdproof_record_67_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatdproof_record_67_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatdproof_record_67_ptr);
 

 
        return new;
 };

sigmatdproof_record_67_t update_sigmatdproof_record_67_project_1(sigmatdproof_record_67_t x, sigmatdproof_record_59_t v){
        sigmatdproof_record_67_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatdproof_record_59(x->project_1);};}
        else {y = copy_sigmatdproof_record_67(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatdproof_record_59_t)v;
        return y;}

sigmatdproof_record_67_t update_sigmatdproof_record_67_project_2(sigmatdproof_record_67_t x, uint8_t v){
        sigmatdproof_record_67_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_67(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

sigmatdproof_record_67_t update_sigmatdproof_record_67_project_3(sigmatdproof_record_67_t x, uint32_t v){
        sigmatdproof_record_67_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatdproof_record_67(x); x->count--;};
        y->project_3 = (uint32_t)v;
        return y;}



void release_sigmatdproof_funtype_68(sigmatdproof_funtype_68_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_68_t copy_sigmatdproof_funtype_68(sigmatdproof_funtype_68_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatdproof_funtype_68(sigmatdproof_funtype_68_t x, sigmatdproof_funtype_68_t y){
        return false;}

char* json_sigmatdproof_funtype_68(sigmatdproof_funtype_68_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_68\""); return result;}


sigmatdproof__parsetree_adt_t f_sigmatdproof_closure_69(struct sigmatdproof_closure_69_s * closure, sigmatdproof_record_67_t bvar){
        sigmatdproof_record_59_t bvar_1;
        bvar_1 = (sigmatdproof_record_59_t)bvar->project_1;
        bvar->project_1->count++;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        uint32_t bvar_3;
        bvar_3 = (uint32_t)bvar->project_3;
        release_sigmatdproof_record_67(bvar);
        sigmatdproof__parsetree_adt_t result = h_sigmatdproof_closure_69(bvar_1, bvar_2, bvar_3, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        release_sigmatdproof_record_59(bvar_1);
        return result;}

sigmatdproof__parsetree_adt_t m_sigmatdproof_closure_69(struct sigmatdproof_closure_69_s * closure, sigmatdproof_record_59_t bvar_1, uint8_t bvar_2, uint32_t bvar_3){
        return h_sigmatdproof_closure_69(bvar_1, bvar_2, bvar_3, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern sigmatdproof__parsetree_adt_t h_sigmatdproof_closure_69(sigmatdproof_record_59_t ivar_8, uint8_t ivar_10, uint32_t ivar_11, uint32_t ivar_4, uint32_t ivar_1, uint8_t ivar_5, sigmatdproof_array_50_t ivar_3, sigmatopdown__lang_spec_t ivar_2){
        sigmatdproof__parsetree_adt_t result;
        bool_t ivar_12;
        sigmatopdown__ent_adt_t ivar_26;
        sigmatdproof_array_51_t ivar_16;
        sigmatdproof_array_52_t ivar_20;
        ivar_20 = (sigmatdproof_array_52_t)ivar_8->scaf;
        ivar_20->count++;
        ivar_16 = (sigmatdproof_array_51_t)ivar_20->elems[ivar_11];
        ivar_16->count++;
        release_sigmatdproof_array_52(ivar_20);
        ivar_26 = (sigmatopdown__ent_adt_t)ivar_16->elems[ivar_10];
        ivar_26->count++;
        release_sigmatdproof_array_51(ivar_16);
        ivar_12 = (bool_t)r_sigmatopdown__loopp((sigmatopdown__ent_adt_t)ivar_26);
        if (ivar_12){ 
             /* pendfun */ sigmatdproof_funtype_70_t ivar_27;
             sigmatdproof_closure_71_t cl38768;
             cl38768 = new_sigmatdproof_closure_71();
             ivar_27 = (sigmatdproof_funtype_70_t)cl38768;
             /* A */ sigmatdproof_funtype_72_t ivar_32;
             sigmatdproof_closure_73_t cl38781;
             cl38781 = new_sigmatdproof_closure_73();
             cl38781->fvar_1 = (uint32_t)ivar_1;
             cl38781->fvar_2 = (sigmatdproof_funtype_70_t)ivar_27;
             if (cl38781->fvar_2 != NULL) cl38781->fvar_2->count++;
             release_sigmatdproof_funtype_70(ivar_27);
             ivar_32 = (sigmatdproof_funtype_72_t)cl38781;
             sigmatdproof_funtype_64_t ivar_49;
             ivar_2->count++;
             ivar_3->count++;
             ivar_49 = (sigmatdproof_funtype_64_t)sigmatdproof__buildloop((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
             sigmatdproof_array_52_t ivar_65;
             //copying to sigmatdproof_array_52 from sigmatdproof_funtype_72;
             uint32_t tmp38816;
             //copying to uint32 from uint32;
             tmp38816 = (uint32_t)ivar_1;
             tmp38816 += 1;
             ivar_65 = new_sigmatdproof_array_52(tmp38816);
             for (uint32_t index_94 = 0; index_94 < tmp38816; index_94++){
           uint32_t tmp38818;
           tmp38818 = (uint32_t)255;
           ivar_65->elems[index_94] = new_sigmatdproof_array_51(tmp38818);
           for (uint32_t index_95 = 0; index_95 < tmp38818; index_95++){
           ivar_65->elems[index_94]->elems[index_95] = (sigmatopdown__ent_adt_t)ivar_32->ftbl->fptr(ivar_32, index_94)->ftbl->fptr(ivar_32->ftbl->fptr(ivar_32, index_94), index_95);
           if (ivar_65->elems[index_94]->elems[index_95] != NULL) ivar_65->elems[index_94]->elems[index_95]->count++;
           };
             };
             release_sigmatdproof_funtype_72(ivar_32);
             sigmatdproof__qstack_adt_t ivar_66;
             ivar_66 = (sigmatdproof__qstack_adt_t)sigmatdproof__qempty();
             if (ivar_66 != NULL) ivar_66->count++;
             result = (sigmatdproof__parsetree_adt_t)ivar_49->ftbl->mptr(ivar_49, ivar_8, ivar_65, ivar_66, ivar_10, ivar_11);
             ivar_49->ftbl->rptr(ivar_49);
} else {
        
             sigmatdproof_funtype_61_t ivar_76;
             ivar_2->count++;
             ivar_3->count++;
             ivar_76 = (sigmatdproof_funtype_61_t)sigmatdproof__buildtree((uint32_t)ivar_1, (sigmatopdown__lang_spec_t)ivar_2, (sigmatdproof_array_50_t)ivar_3, (uint32_t)ivar_4, (uint8_t)ivar_5);
             sigmatdproof__qstack_adt_t ivar_91;
             ivar_91 = (sigmatdproof__qstack_adt_t)sigmatdproof__qempty();
             if (ivar_91 != NULL) ivar_91->count++;
             result = (sigmatdproof__parsetree_adt_t)ivar_76->ftbl->mptr(ivar_76, ivar_8, ivar_91, ivar_10, ivar_11);
             ivar_76->ftbl->rptr(ivar_76);
};

        return result;
}

sigmatdproof_closure_69_t new_sigmatdproof_closure_69(void){
        static struct sigmatdproof_funtype_68_ftbl_s ftbl = {.fptr = (sigmatdproof__parsetree_adt_t (*)(sigmatdproof_funtype_68_t, sigmatdproof_record_67_t))&f_sigmatdproof_closure_69, .mptr = (sigmatdproof__parsetree_adt_t (*)(sigmatdproof_funtype_68_t, sigmatdproof_record_59_t, uint8_t, uint32_t))&m_sigmatdproof_closure_69, .rptr =  (void (*)(sigmatdproof_funtype_68_t))&release_sigmatdproof_closure_69, .cptr = (sigmatdproof_funtype_68_t (*)(sigmatdproof_funtype_68_t))&copy_sigmatdproof_closure_69};
        sigmatdproof_closure_69_t tmp = (sigmatdproof_closure_69_t) safe_malloc(sizeof(struct sigmatdproof_closure_69_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdproof_closure_69(sigmatdproof_funtype_68_t closure){
        sigmatdproof_closure_69_t x = (sigmatdproof_closure_69_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof_array_50(x->fvar_4);
         release_sigmatopdown__lang_spec(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdproof_closure_69_t copy_sigmatdproof_closure_69(sigmatdproof_closure_69_t x){
        sigmatdproof_closure_69_t y = new_sigmatdproof_closure_69();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = (uint8_t)x->fvar_3;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            sigmatdproof_funtype_68_htbl_t new_htbl = (sigmatdproof_funtype_68_htbl_t) safe_malloc(sizeof(struct sigmatdproof_funtype_68_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdproof_funtype_68_hashentry_t * new_data = (sigmatdproof_funtype_68_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdproof_funtype_68_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdproof_funtype_68_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatdproof_funtype_70(sigmatdproof_funtype_70_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_70_t copy_sigmatdproof_funtype_70(sigmatdproof_funtype_70_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatdproof_funtype_70(sigmatdproof_funtype_70_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatdproof_funtype_70_hashentry_t data = htbl->data[hashindex];
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

sigmatdproof_funtype_70_t dupdate_sigmatdproof_funtype_70(sigmatdproof_funtype_70_t a, uint8_t i, sigmatopdown__ent_adt_t v){
        sigmatdproof_funtype_70_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatdproof_funtype_70_htbl_t)safe_malloc(sizeof(struct sigmatdproof_funtype_70_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatdproof_funtype_70_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatdproof_funtype_70_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatdproof_funtype_70_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatdproof_funtype_70_hashentry_t * new_data = (sigmatdproof_funtype_70_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatdproof_funtype_70_hashentry_s));
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
                                new_data[new_loc].value = (sigmatopdown__ent_adt_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_sigmatdproof_funtype_70(htbl, i, ihash);
        sigmatdproof_funtype_70_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (sigmatopdown__ent_adt_t)v; htbl->num_entries++;}
            else {sigmatopdown__ent_adt_t tempvalue;tempvalue = (sigmatopdown__ent_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (sigmatopdown__ent_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_sigmatopdown__ent_adt(tempvalue);};
        return a;

}

sigmatdproof_funtype_70_t update_sigmatdproof_funtype_70(sigmatdproof_funtype_70_t a, uint8_t i, sigmatopdown__ent_adt_t v){
        if (a->count == 1){
                return dupdate_sigmatdproof_funtype_70(a, i, v);
            } else {
                sigmatdproof_funtype_70_t x = copy_sigmatdproof_funtype_70(a);
                a->count--;
                return dupdate_sigmatdproof_funtype_70(x, i, v);
            }}

bool_t equal_sigmatdproof_funtype_70(sigmatdproof_funtype_70_t x, sigmatdproof_funtype_70_t y){
        return false;}

char* json_sigmatdproof_funtype_70(sigmatdproof_funtype_70_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_70\""); return result;}


sigmatopdown__ent_adt_t f_sigmatdproof_closure_71(struct sigmatdproof_closure_71_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        sigmatdproof_funtype_70_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatdproof_funtype_70(htbl, bvar, hash);
        sigmatdproof_funtype_70_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            sigmatopdown__ent_adt_t result;
            result = (sigmatopdown__ent_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_sigmatdproof_closure_71(bvar);};

return h_sigmatdproof_closure_71(bvar);}

sigmatopdown__ent_adt_t m_sigmatdproof_closure_71(struct sigmatdproof_closure_71_s * closure, uint8_t bvar){
        return h_sigmatdproof_closure_71(bvar);}

extern sigmatopdown__ent_adt_t h_sigmatdproof_closure_71(uint8_t ivar_31){
        sigmatopdown__ent_adt_t result;
        result = (sigmatopdown__ent_adt_t)sigmatopdown__pending();
        if (result != NULL) result->count++;

        return result;
}

sigmatdproof_closure_71_t new_sigmatdproof_closure_71(void){
        static struct sigmatdproof_funtype_70_ftbl_s ftbl = {.fptr = (sigmatopdown__ent_adt_t (*)(sigmatdproof_funtype_70_t, uint8_t))&f_sigmatdproof_closure_71, .mptr = (sigmatopdown__ent_adt_t (*)(sigmatdproof_funtype_70_t, uint8_t))&m_sigmatdproof_closure_71, .rptr =  (void (*)(sigmatdproof_funtype_70_t))&release_sigmatdproof_closure_71, .cptr = (sigmatdproof_funtype_70_t (*)(sigmatdproof_funtype_70_t))&copy_sigmatdproof_closure_71};
        sigmatdproof_closure_71_t tmp = (sigmatdproof_closure_71_t) safe_malloc(sizeof(struct sigmatdproof_closure_71_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdproof_closure_71(sigmatdproof_funtype_70_t closure){
        sigmatdproof_closure_71_t x = (sigmatdproof_closure_71_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdproof_closure_71_t copy_sigmatdproof_closure_71(sigmatdproof_closure_71_t x){
        sigmatdproof_closure_71_t y = new_sigmatdproof_closure_71();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatdproof_funtype_70_htbl_t new_htbl = (sigmatdproof_funtype_70_htbl_t) safe_malloc(sizeof(struct sigmatdproof_funtype_70_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdproof_funtype_70_hashentry_t * new_data = (sigmatdproof_funtype_70_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdproof_funtype_70_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdproof_funtype_70_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatdproof_funtype_72(sigmatdproof_funtype_72_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatdproof_funtype_72_t copy_sigmatdproof_funtype_72(sigmatdproof_funtype_72_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatdproof_funtype_72(sigmatdproof_funtype_72_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatdproof_funtype_72_hashentry_t data = htbl->data[hashindex];
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

sigmatdproof_funtype_72_t dupdate_sigmatdproof_funtype_72(sigmatdproof_funtype_72_t a, uint32_t i, sigmatdproof_funtype_70_t v){
        sigmatdproof_funtype_72_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatdproof_funtype_72_htbl_t)safe_malloc(sizeof(struct sigmatdproof_funtype_72_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatdproof_funtype_72_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatdproof_funtype_72_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatdproof_funtype_72_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatdproof_funtype_72_hashentry_t * new_data = (sigmatdproof_funtype_72_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatdproof_funtype_72_hashentry_s));
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
                                new_data[new_loc].value = (sigmatdproof_funtype_70_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_sigmatdproof_funtype_72(htbl, i, ihash);
        sigmatdproof_funtype_72_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (sigmatdproof_funtype_70_t)v; htbl->num_entries++;}
            else {sigmatdproof_funtype_70_t tempvalue;tempvalue = (sigmatdproof_funtype_70_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (sigmatdproof_funtype_70_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_sigmatdproof_funtype_70(tempvalue);};
        return a;

}

sigmatdproof_funtype_72_t update_sigmatdproof_funtype_72(sigmatdproof_funtype_72_t a, uint32_t i, sigmatdproof_funtype_70_t v){
        if (a->count == 1){
                return dupdate_sigmatdproof_funtype_72(a, i, v);
            } else {
                sigmatdproof_funtype_72_t x = copy_sigmatdproof_funtype_72(a);
                a->count--;
                return dupdate_sigmatdproof_funtype_72(x, i, v);
            }}

bool_t equal_sigmatdproof_funtype_72(sigmatdproof_funtype_72_t x, sigmatdproof_funtype_72_t y){
        return false;}

char* json_sigmatdproof_funtype_72(sigmatdproof_funtype_72_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"sigmatdproof_funtype_72\""); return result;}


sigmatdproof_funtype_70_t f_sigmatdproof_closure_73(struct sigmatdproof_closure_73_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        sigmatdproof_funtype_72_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatdproof_funtype_72(htbl, bvar, hash);
        sigmatdproof_funtype_72_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            sigmatdproof_funtype_70_t result;
            result = (sigmatdproof_funtype_70_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_sigmatdproof_closure_73(bvar, closure->fvar_1, closure->fvar_2);};

return h_sigmatdproof_closure_73(bvar, closure->fvar_1, closure->fvar_2);}

sigmatdproof_funtype_70_t m_sigmatdproof_closure_73(struct sigmatdproof_closure_73_s * closure, uint32_t bvar){
        return h_sigmatdproof_closure_73(bvar, closure->fvar_1, closure->fvar_2);}

extern sigmatdproof_funtype_70_t h_sigmatdproof_closure_73(uint32_t ivar_39, uint32_t ivar_1, sigmatdproof_funtype_70_t ivar_27){
        sigmatdproof_funtype_70_t result;
        //copying to sigmatdproof_funtype_70 from sigmatdproof_funtype_70;
        result = (sigmatdproof_funtype_70_t)ivar_27;
        if (result != NULL) result->count++;

        return result;
}

sigmatdproof_closure_73_t new_sigmatdproof_closure_73(void){
        static struct sigmatdproof_funtype_72_ftbl_s ftbl = {.fptr = (sigmatdproof_funtype_70_t (*)(sigmatdproof_funtype_72_t, uint32_t))&f_sigmatdproof_closure_73, .mptr = (sigmatdproof_funtype_70_t (*)(sigmatdproof_funtype_72_t, uint32_t))&m_sigmatdproof_closure_73, .rptr =  (void (*)(sigmatdproof_funtype_72_t))&release_sigmatdproof_closure_73, .cptr = (sigmatdproof_funtype_72_t (*)(sigmatdproof_funtype_72_t))&copy_sigmatdproof_closure_73};
        sigmatdproof_closure_73_t tmp = (sigmatdproof_closure_73_t) safe_malloc(sizeof(struct sigmatdproof_closure_73_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatdproof_closure_73(sigmatdproof_funtype_72_t closure){
        sigmatdproof_closure_73_t x = (sigmatdproof_closure_73_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatdproof_funtype_70(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatdproof_closure_73_t copy_sigmatdproof_closure_73(sigmatdproof_closure_73_t x){
        sigmatdproof_closure_73_t y = new_sigmatdproof_closure_73();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            sigmatdproof_funtype_72_htbl_t new_htbl = (sigmatdproof_funtype_72_htbl_t) safe_malloc(sizeof(struct sigmatdproof_funtype_72_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatdproof_funtype_72_hashentry_t * new_data = (sigmatdproof_funtype_72_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatdproof_funtype_72_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatdproof_funtype_72_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern bool_t r_sigmatdproof__zerop(sigmatdproof__parsetree_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatdproof__parsetree_adt_index;
        release_sigmatdproof__parsetree_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_sigmatdproof__onep(sigmatdproof__parsetree_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatdproof__parsetree_adt_index;
        release_sigmatdproof__parsetree_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_sigmatdproof__twop(sigmatdproof__parsetree_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)2;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatdproof__parsetree_adt_index;
        release_sigmatdproof__parsetree_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern sigmatdproof__parsetree_adt_t update_sigmatdproof__parsetree_adt_entry(sigmatdproof__parsetree_adt_t ivar_1, sigmatopdown__ent_adt_t ivar_11){
        sigmatdproof__parsetree_adt_t  result;
        bool_t ivar_13;
        uint32_t ivar_14;
        ivar_14 = (uint32_t)ivar_1->sigmatdproof__parsetree_adt_index;
        uint32_t ivar_15;
        ivar_15 = (uint32_t)0;
        ivar_13 = (ivar_14 == ivar_15);
        if (ivar_13){ 
             sigmatdproof__zero_t ivar_12;
             //copying to sigmatdproof__zero from sigmatdproof__parsetree_adt;
             ivar_12 = (sigmatdproof__zero_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_sigmatdproof__parsetree_adt(ivar_1);
             result = (sigmatdproof__parsetree_adt_t)update_sigmatdproof__zero_entry(ivar_12, ivar_11);
} else {
        
             bool_t ivar_17;
             uint32_t ivar_18;
             ivar_18 = (uint32_t)ivar_1->sigmatdproof__parsetree_adt_index;
             uint32_t ivar_19;
             ivar_19 = (uint32_t)1;
             ivar_17 = (ivar_18 == ivar_19);
             if (ivar_17){  
           sigmatdproof__one_t ivar_16;
           //copying to sigmatdproof__one from sigmatdproof__parsetree_adt;
           ivar_16 = (sigmatdproof__one_t)ivar_1;
           if (ivar_16 != NULL) ivar_16->count++;
           release_sigmatdproof__parsetree_adt(ivar_1);
           result = (sigmatdproof__parsetree_adt_t)update_sigmatdproof__one_entry(ivar_16, ivar_11);
} else {
             
           sigmatdproof__two_t ivar_20;
           //copying to sigmatdproof__two from sigmatdproof__parsetree_adt;
           ivar_20 = (sigmatdproof__two_t)ivar_1;
           if (ivar_20 != NULL) ivar_20->count++;
           release_sigmatdproof__parsetree_adt(ivar_1);
           result = (sigmatdproof__parsetree_adt_t)update_sigmatdproof__two_entry(ivar_20, ivar_11);
};
};

        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatdproof__parsetree_adt_entry(sigmatdproof__parsetree_adt_t ivar_1){
        sigmatopdown__ent_adt_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->sigmatdproof__parsetree_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)0;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             sigmatdproof__zero_t ivar_2;
             //copying to sigmatdproof__zero from sigmatdproof__parsetree_adt;
             ivar_2 = (sigmatdproof__zero_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_sigmatdproof__parsetree_adt(ivar_1);
             result = (sigmatopdown__ent_adt_t)ivar_2->entry;
             result->count++;
             release_sigmatdproof__zero(ivar_2);
} else {
        
             bool_t ivar_7;
             uint32_t ivar_8;
             ivar_8 = (uint32_t)ivar_1->sigmatdproof__parsetree_adt_index;
             uint32_t ivar_9;
             ivar_9 = (uint32_t)1;
             ivar_7 = (ivar_8 == ivar_9);
             if (ivar_7){  
           sigmatdproof__one_t ivar_6;
           //copying to sigmatdproof__one from sigmatdproof__parsetree_adt;
           ivar_6 = (sigmatdproof__one_t)ivar_1;
           if (ivar_6 != NULL) ivar_6->count++;
           release_sigmatdproof__parsetree_adt(ivar_1);
           result = (sigmatopdown__ent_adt_t)ivar_6->entry;
           result->count++;
           release_sigmatdproof__one(ivar_6);
} else {
             
           sigmatdproof__two_t ivar_10;
           //copying to sigmatdproof__two from sigmatdproof__parsetree_adt;
           ivar_10 = (sigmatdproof__two_t)ivar_1;
           if (ivar_10 != NULL) ivar_10->count++;
           release_sigmatdproof__parsetree_adt(ivar_1);
           result = (sigmatopdown__ent_adt_t)ivar_10->entry;
           result->count++;
           release_sigmatdproof__two(ivar_10);
};
};

        
        return result;
}

extern sigmatdproof__parsetree_adt_t update_sigmatdproof__parsetree_adt_subone(sigmatdproof__parsetree_adt_t ivar_1, sigmatdproof__parsetree_adt_t ivar_7){
        sigmatdproof__parsetree_adt_t  result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->sigmatdproof__parsetree_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)1;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             sigmatdproof__one_t ivar_8;
             //copying to sigmatdproof__one from sigmatdproof__parsetree_adt;
             ivar_8 = (sigmatdproof__one_t)ivar_1;
             if (ivar_8 != NULL) ivar_8->count++;
             release_sigmatdproof__parsetree_adt(ivar_1);
             result = (sigmatdproof__parsetree_adt_t)update_sigmatdproof__one_subone(ivar_8, ivar_7);
} else {
        
             sigmatdproof__two_t ivar_12;
             //copying to sigmatdproof__two from sigmatdproof__parsetree_adt;
             ivar_12 = (sigmatdproof__two_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_sigmatdproof__parsetree_adt(ivar_1);
             result = (sigmatdproof__parsetree_adt_t)update_sigmatdproof__two_subone(ivar_12, ivar_7);
};

        
        return result;
}

extern sigmatdproof__parsetree_adt_t sigmatdproof__parsetree_adt_subone(sigmatdproof__parsetree_adt_t ivar_1){
        sigmatdproof__parsetree_adt_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->sigmatdproof__parsetree_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)1;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             sigmatdproof__one_t ivar_2;
             //copying to sigmatdproof__one from sigmatdproof__parsetree_adt;
             ivar_2 = (sigmatdproof__one_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_sigmatdproof__parsetree_adt(ivar_1);
             result = (sigmatdproof__parsetree_adt_t)ivar_2->subone;
             result->count++;
             release_sigmatdproof__one(ivar_2);
} else {
        
             sigmatdproof__two_t ivar_6;
             //copying to sigmatdproof__two from sigmatdproof__parsetree_adt;
             ivar_6 = (sigmatdproof__two_t)ivar_1;
             if (ivar_6 != NULL) ivar_6->count++;
             release_sigmatdproof__parsetree_adt(ivar_1);
             result = (sigmatdproof__parsetree_adt_t)ivar_6->subone;
             result->count++;
             release_sigmatdproof__two(ivar_6);
};

        
        return result;
}

extern sigmatdproof__two_t update_sigmatdproof__parsetree_adt_subtwo(sigmatdproof__parsetree_adt_t ivar_1, sigmatdproof__parsetree_adt_t ivar_3){
        sigmatdproof__two_t  result;
        sigmatdproof__two_t ivar_2;
        //copying to sigmatdproof__two from sigmatdproof__parsetree_adt;
        ivar_2 = (sigmatdproof__two_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_sigmatdproof__parsetree_adt(ivar_1);
        result = (sigmatdproof__two_t)update_sigmatdproof__two_subtwo(ivar_2, ivar_3);

        
        return result;
}

extern sigmatdproof__parsetree_adt_t sigmatdproof__parsetree_adt_subtwo(sigmatdproof__parsetree_adt_t ivar_1){
        sigmatdproof__parsetree_adt_t  result;
        sigmatdproof__two_t ivar_2;
        //copying to sigmatdproof__two from sigmatdproof__parsetree_adt;
        ivar_2 = (sigmatdproof__two_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_sigmatdproof__parsetree_adt(ivar_1);
        result = (sigmatdproof__parsetree_adt_t)ivar_2->subtwo;
        result->count++;
        release_sigmatdproof__two(ivar_2);

        
        return result;
}

extern sigmatdproof__parsetree_adt_t sigmatdproof__zero(sigmatopdown__ent_adt_t ivar_2){
        sigmatdproof__parsetree_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        sigmatdproof__zero_t tmp34299 = new_sigmatdproof__zero();;
        result = (sigmatdproof__parsetree_adt_t)tmp34299;
        tmp34299->sigmatdproof__parsetree_adt_index = (uint8_t)ivar_1;
        tmp34299->entry = (sigmatopdown__ent_adt_t)ivar_2;

        
        return result;
}

extern sigmatdproof__parsetree_adt_t sigmatdproof__one(sigmatopdown__ent_adt_t ivar_2, sigmatdproof__parsetree_adt_t ivar_3){
        sigmatdproof__parsetree_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        sigmatdproof__one_t tmp34319 = new_sigmatdproof__one();;
        result = (sigmatdproof__parsetree_adt_t)tmp34319;
        tmp34319->sigmatdproof__parsetree_adt_index = (uint8_t)ivar_1;
        tmp34319->entry = (sigmatopdown__ent_adt_t)ivar_2;
        tmp34319->subone = (sigmatdproof__parsetree_adt_t)ivar_3;

        
        return result;
}

extern sigmatdproof__parsetree_adt_t sigmatdproof__two(sigmatopdown__ent_adt_t ivar_2, sigmatdproof__parsetree_adt_t ivar_3, sigmatdproof__parsetree_adt_t ivar_4){
        sigmatdproof__parsetree_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)2;
        sigmatdproof__two_t tmp34347 = new_sigmatdproof__two();;
        result = (sigmatdproof__parsetree_adt_t)tmp34347;
        tmp34347->sigmatdproof__parsetree_adt_index = (uint8_t)ivar_1;
        tmp34347->entry = (sigmatopdown__ent_adt_t)ivar_2;
        tmp34347->subone = (sigmatdproof__parsetree_adt_t)ivar_3;
        tmp34347->subtwo = (sigmatdproof__parsetree_adt_t)ivar_4;

        
        return result;
}

extern sigmatdproof_funtype_4_t sigmatdproof__parsetree_ord(void){
        sigmatdproof_funtype_4_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

extern uint8_t sigmatdproof__ord__1(sigmatdproof__parsetree_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_7;
        ivar_1->count++;
        ivar_7 = (bool_t)r_sigmatdproof__zerop((sigmatdproof__parsetree_adt_t)ivar_1);
        if (ivar_7){ 
             result = (uint8_t)0;
} else {
        
             bool_t ivar_19;
             ivar_1->count++;
             ivar_19 = (bool_t)r_sigmatdproof__onep((sigmatdproof__parsetree_adt_t)ivar_1);
             if (ivar_19){  
           result = (uint8_t)1;
} else {
             
           result = (uint8_t)2;
};
};

        
        return result;
}

extern bool_t sigmatdproof__subterm__1(sigmatdproof__parsetree_adt_t ivar_1, sigmatdproof__parsetree_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_2->count++;
        ivar_3 = (bool_t) equal_sigmatdproof__parsetree_adt(ivar_1, ivar_2);
        if (ivar_3){ 
             release_sigmatdproof__parsetree_adt(ivar_1);
             release_sigmatdproof__parsetree_adt(ivar_2);
             result = (bool_t) true;
} else {
        
             bool_t ivar_13;
             ivar_2->count++;
             ivar_13 = (bool_t)r_sigmatdproof__zerop((sigmatdproof__parsetree_adt_t)ivar_2);
             if (ivar_13){  
           release_sigmatdproof__parsetree_adt(ivar_1);
           result = (bool_t) false;
} else {
             
           bool_t ivar_30;
           ivar_2->count++;
           ivar_30 = (bool_t)r_sigmatdproof__onep((sigmatdproof__parsetree_adt_t)ivar_2);
           if (ivar_30){   
           sigmatdproof__parsetree_adt_t ivar_18;
           ivar_18 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subone((sigmatdproof__parsetree_adt_t)ivar_2);
           result = (bool_t)sigmatdproof__subterm__1((sigmatdproof__parsetree_adt_t)ivar_1, (sigmatdproof__parsetree_adt_t)ivar_18);
} else {
           
           sigmatdproof__parsetree_adt_t ivar_35;
           ivar_2->count++;
           ivar_35 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subone((sigmatdproof__parsetree_adt_t)ivar_2);
           sigmatdproof__parsetree_adt_t ivar_36;
           ivar_36 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subtwo((sigmatdproof__parsetree_adt_t)ivar_2);
           bool_t ivar_46;
           ivar_1->count++;
           ivar_46 = (bool_t)sigmatdproof__subterm__1((sigmatdproof__parsetree_adt_t)ivar_1, (sigmatdproof__parsetree_adt_t)ivar_35);
           if (ivar_46){    
            release_sigmatdproof__parsetree_adt(ivar_36);
            release_sigmatdproof__parsetree_adt(ivar_1);
            result = (bool_t) true;
} else {
           
            result = (bool_t)sigmatdproof__subterm__1((sigmatdproof__parsetree_adt_t)ivar_1, (sigmatdproof__parsetree_adt_t)ivar_36);
};
};
};
};

        
        return result;
}

extern bool_t sigmatdproof__doublelessp__1(sigmatdproof__parsetree_adt_t ivar_1, sigmatdproof__parsetree_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_8;
        ivar_2->count++;
        ivar_8 = (bool_t)r_sigmatdproof__zerop((sigmatdproof__parsetree_adt_t)ivar_2);
        if (ivar_8){ 
             release_sigmatdproof__parsetree_adt(ivar_1);
             result = (bool_t) false;
} else {
        
             bool_t ivar_31;
             ivar_2->count++;
             ivar_31 = (bool_t)r_sigmatdproof__onep((sigmatdproof__parsetree_adt_t)ivar_2);
             if (ivar_31){  
           sigmatdproof__parsetree_adt_t ivar_13;
           ivar_13 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subone((sigmatdproof__parsetree_adt_t)ivar_2);
           bool_t ivar_20;
           ivar_1->count++;
           ivar_13->count++;
           ivar_20 = (bool_t) equal_sigmatdproof__parsetree_adt(ivar_1, ivar_13);
           if (ivar_20){   
           release_sigmatdproof__parsetree_adt(ivar_13);
           release_sigmatdproof__parsetree_adt(ivar_1);
           result = (bool_t) true;
} else {
           
           result = (bool_t)sigmatdproof__doublelessp__1((sigmatdproof__parsetree_adt_t)ivar_1, (sigmatdproof__parsetree_adt_t)ivar_13);
};
} else {
             
           sigmatdproof__parsetree_adt_t ivar_36;
           ivar_2->count++;
           ivar_36 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subone((sigmatdproof__parsetree_adt_t)ivar_2);
           sigmatdproof__parsetree_adt_t ivar_37;
           ivar_37 = (sigmatdproof__parsetree_adt_t)sigmatdproof__parsetree_adt_subtwo((sigmatdproof__parsetree_adt_t)ivar_2);
           bool_t ivar_47;
           bool_t ivar_49;
           ivar_1->count++;
           ivar_36->count++;
           ivar_49 = (bool_t) equal_sigmatdproof__parsetree_adt(ivar_1, ivar_36);
           if (ivar_49){   
           release_sigmatdproof__parsetree_adt(ivar_36);
           ivar_47 = (bool_t) true;
} else {
           
           ivar_1->count++;
           ivar_47 = (bool_t)sigmatdproof__doublelessp__1((sigmatdproof__parsetree_adt_t)ivar_1, (sigmatdproof__parsetree_adt_t)ivar_36);
};
           if (ivar_47){   
           release_sigmatdproof__parsetree_adt(ivar_37);
           release_sigmatdproof__parsetree_adt(ivar_1);
           result = (bool_t) true;
} else {
           
           bool_t ivar_60;
           ivar_1->count++;
           ivar_37->count++;
           ivar_60 = (bool_t) equal_sigmatdproof__parsetree_adt(ivar_1, ivar_37);
           if (ivar_60){    
            release_sigmatdproof__parsetree_adt(ivar_37);
            release_sigmatdproof__parsetree_adt(ivar_1);
            result = (bool_t) true;
} else {
           
            result = (bool_t)sigmatdproof__doublelessp__1((sigmatdproof__parsetree_adt_t)ivar_1, (sigmatdproof__parsetree_adt_t)ivar_37);
};
};
};
};

        
        return result;
}

extern sigmatdproof_funtype_5_t sigmatdproof__reduce_nat__1(sigmatdproof_funtype_6_t ivar_1, sigmatdproof_funtype_8_t ivar_3, sigmatdproof_funtype_10_t ivar_5){
        sigmatdproof_funtype_5_t  result;
        sigmatdproof_closure_11_t cl34541;
        cl34541 = new_sigmatdproof_closure_11();
        cl34541->fvar_1 = (sigmatdproof_funtype_8_t)ivar_3;
        if (cl34541->fvar_1 != NULL) cl34541->fvar_1->count++;
        cl34541->fvar_2 = (sigmatdproof_funtype_10_t)ivar_5;
        if (cl34541->fvar_2 != NULL) cl34541->fvar_2->count++;
        cl34541->fvar_3 = (sigmatdproof_funtype_6_t)ivar_1;
        if (cl34541->fvar_3 != NULL) cl34541->fvar_3->count++;
        release_sigmatdproof_funtype_8(ivar_3);
        release_sigmatdproof_funtype_10(ivar_5);
        release_sigmatdproof_funtype_6(ivar_1);
        result = (sigmatdproof_funtype_5_t)cl34541;

        
        return result;
}

extern sigmatdproof_funtype_5_t sigmatdproof__REDUCE_nat__1(sigmatdproof_funtype_13_t ivar_1, sigmatdproof_funtype_15_t ivar_3, sigmatdproof_funtype_17_t ivar_5){
        sigmatdproof_funtype_5_t  result;
        sigmatdproof_closure_18_t cl34753;
        cl34753 = new_sigmatdproof_closure_18();
        cl34753->fvar_1 = (sigmatdproof_funtype_15_t)ivar_3;
        if (cl34753->fvar_1 != NULL) cl34753->fvar_1->count++;
        cl34753->fvar_2 = (sigmatdproof_funtype_17_t)ivar_5;
        if (cl34753->fvar_2 != NULL) cl34753->fvar_2->count++;
        cl34753->fvar_3 = (sigmatdproof_funtype_13_t)ivar_1;
        if (cl34753->fvar_3 != NULL) cl34753->fvar_3->count++;
        release_sigmatdproof_funtype_15(ivar_3);
        release_sigmatdproof_funtype_17(ivar_5);
        release_sigmatdproof_funtype_13(ivar_1);
        result = (sigmatdproof_funtype_5_t)cl34753;

        
        return result;
}

extern sigmatdproof_funtype_19_t sigmatdproof__reduce_ordinal__1(sigmatdproof_funtype_20_t ivar_1, sigmatdproof_funtype_22_t ivar_3, sigmatdproof_funtype_24_t ivar_5){
        sigmatdproof_funtype_19_t  result;
        sigmatdproof_closure_25_t cl34992;
        cl34992 = new_sigmatdproof_closure_25();
        cl34992->fvar_1 = (sigmatdproof_funtype_22_t)ivar_3;
        if (cl34992->fvar_1 != NULL) cl34992->fvar_1->count++;
        cl34992->fvar_2 = (sigmatdproof_funtype_24_t)ivar_5;
        if (cl34992->fvar_2 != NULL) cl34992->fvar_2->count++;
        cl34992->fvar_3 = (sigmatdproof_funtype_20_t)ivar_1;
        if (cl34992->fvar_3 != NULL) cl34992->fvar_3->count++;
        release_sigmatdproof_funtype_22(ivar_3);
        release_sigmatdproof_funtype_24(ivar_5);
        release_sigmatdproof_funtype_20(ivar_1);
        result = (sigmatdproof_funtype_19_t)cl34992;

        
        return result;
}

extern sigmatdproof_funtype_19_t sigmatdproof__REDUCE_ordinal__1(sigmatdproof_funtype_26_t ivar_1, sigmatdproof_funtype_28_t ivar_3, sigmatdproof_funtype_30_t ivar_5){
        sigmatdproof_funtype_19_t  result;
        sigmatdproof_closure_31_t cl35301;
        cl35301 = new_sigmatdproof_closure_31();
        cl35301->fvar_1 = (sigmatdproof_funtype_28_t)ivar_3;
        if (cl35301->fvar_1 != NULL) cl35301->fvar_1->count++;
        cl35301->fvar_2 = (sigmatdproof_funtype_30_t)ivar_5;
        if (cl35301->fvar_2 != NULL) cl35301->fvar_2->count++;
        cl35301->fvar_3 = (sigmatdproof_funtype_26_t)ivar_1;
        if (cl35301->fvar_3 != NULL) cl35301->fvar_3->count++;
        release_sigmatdproof_funtype_28(ivar_3);
        release_sigmatdproof_funtype_30(ivar_5);
        release_sigmatdproof_funtype_26(ivar_1);
        result = (sigmatdproof_funtype_19_t)cl35301;

        
        return result;
}

extern bool_t r_sigmatdproof__qemptyp(sigmatdproof__qstack_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatdproof__qstack_adt_index;
        release_sigmatdproof__qstack_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_sigmatdproof__qpushp(sigmatdproof__qstack_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->sigmatdproof__qstack_adt_index;
        release_sigmatdproof__qstack_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern sigmatdproof__qpush_t update_sigmatdproof__qstack_adt_nonterm(sigmatdproof__qstack_adt_t ivar_1, uint8_t ivar_3){
        sigmatdproof__qpush_t  result;
        sigmatdproof__qpush_t ivar_2;
        //copying to sigmatdproof__qpush from sigmatdproof__qstack_adt;
        ivar_2 = (sigmatdproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_sigmatdproof__qstack_adt(ivar_1);
        result = (sigmatdproof__qpush_t)update_sigmatdproof__qpush_nonterm(ivar_2, ivar_3);

        
        return result;
}

extern uint8_t sigmatdproof__qstack_adt_nonterm(sigmatdproof__qstack_adt_t ivar_1){
        uint8_t  result;
        sigmatdproof__qpush_t ivar_2;
        //copying to sigmatdproof__qpush from sigmatdproof__qstack_adt;
        ivar_2 = (sigmatdproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_sigmatdproof__qstack_adt(ivar_1);
        result = (uint8_t)ivar_2->nonterm;
        release_sigmatdproof__qpush(ivar_2);

        
        return result;
}

extern sigmatdproof__qpush_t update_sigmatdproof__qstack_adt_pos(sigmatdproof__qstack_adt_t ivar_1, uint32_t ivar_3){
        sigmatdproof__qpush_t  result;
        sigmatdproof__qpush_t ivar_2;
        //copying to sigmatdproof__qpush from sigmatdproof__qstack_adt;
        ivar_2 = (sigmatdproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_sigmatdproof__qstack_adt(ivar_1);
        result = (sigmatdproof__qpush_t)update_sigmatdproof__qpush_pos(ivar_2, ivar_3);

        
        return result;
}

extern uint32_t sigmatdproof__qstack_adt_pos(sigmatdproof__qstack_adt_t ivar_1){
        uint32_t  result;
        sigmatdproof__qpush_t ivar_2;
        //copying to sigmatdproof__qpush from sigmatdproof__qstack_adt;
        ivar_2 = (sigmatdproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_sigmatdproof__qstack_adt(ivar_1);
        result = (uint32_t)ivar_2->pos;
        release_sigmatdproof__qpush(ivar_2);

        
        return result;
}

extern sigmatdproof__qpush_t update_sigmatdproof__qstack_adt_qpop(sigmatdproof__qstack_adt_t ivar_1, sigmatdproof__qstack_adt_t ivar_3){
        sigmatdproof__qpush_t  result;
        sigmatdproof__qpush_t ivar_2;
        //copying to sigmatdproof__qpush from sigmatdproof__qstack_adt;
        ivar_2 = (sigmatdproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_sigmatdproof__qstack_adt(ivar_1);
        result = (sigmatdproof__qpush_t)update_sigmatdproof__qpush_qpop(ivar_2, ivar_3);

        
        return result;
}

extern sigmatdproof__qstack_adt_t sigmatdproof__qstack_adt_qpop(sigmatdproof__qstack_adt_t ivar_1){
        sigmatdproof__qstack_adt_t  result;
        sigmatdproof__qpush_t ivar_2;
        //copying to sigmatdproof__qpush from sigmatdproof__qstack_adt;
        ivar_2 = (sigmatdproof__qpush_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_sigmatdproof__qstack_adt(ivar_1);
        result = (sigmatdproof__qstack_adt_t)ivar_2->qpop;
        result->count++;
        release_sigmatdproof__qpush(ivar_2);

        
        return result;
}

extern sigmatdproof__qstack_adt_t sigmatdproof__qempty(void){
        sigmatdproof__qstack_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        sigmatdproof__qstack_adt_t tmp35558 = new_sigmatdproof__qstack_adt();;
        result = (sigmatdproof__qstack_adt_t)tmp35558;
        tmp35558->sigmatdproof__qstack_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern sigmatdproof__qstack_adt_t sigmatdproof__qpush(uint8_t ivar_2, uint32_t ivar_3, sigmatdproof__qstack_adt_t ivar_4){
        sigmatdproof__qstack_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        sigmatdproof__qpush_t tmp35574 = new_sigmatdproof__qpush();;
        result = (sigmatdproof__qstack_adt_t)tmp35574;
        tmp35574->sigmatdproof__qstack_adt_index = (uint8_t)ivar_1;
        tmp35574->nonterm = (uint8_t)ivar_2;
        tmp35574->pos = (uint32_t)ivar_3;
        tmp35574->qpop = (sigmatdproof__qstack_adt_t)ivar_4;

        
        return result;
}

extern sigmatdproof_funtype_34_t sigmatdproof__qstack_ord(void){
        sigmatdproof_funtype_34_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

extern uint8_t sigmatdproof__ord__2(sigmatdproof__qstack_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)r_sigmatdproof__qemptyp((sigmatdproof__qstack_adt_t)ivar_1);
        if (ivar_3){ 
             release_sigmatdproof__qstack_adt(ivar_1);
             result = (uint8_t)0;
} else {
        
             result = (uint8_t)1;
};

        
        return result;
}

extern bool_t sigmatdproof__subterm__2(sigmatdproof__qstack_adt_t ivar_1, sigmatdproof__qstack_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_2->count++;
        ivar_3 = (bool_t) equal_sigmatdproof__qstack_adt(ivar_1, ivar_2);
        if (ivar_3){ 
             release_sigmatdproof__qstack_adt(ivar_1);
             release_sigmatdproof__qstack_adt(ivar_2);
             result = (bool_t) true;
} else {
        
             bool_t ivar_9;
             ivar_2->count++;
             ivar_9 = (bool_t)r_sigmatdproof__qemptyp((sigmatdproof__qstack_adt_t)ivar_2);
             if (ivar_9){  
           release_sigmatdproof__qstack_adt(ivar_1);
           release_sigmatdproof__qstack_adt(ivar_2);
           result = (bool_t) false;
} else {
             
           sigmatdproof__qstack_adt_t ivar_15;
           ivar_15 = (sigmatdproof__qstack_adt_t)sigmatdproof__qstack_adt_qpop((sigmatdproof__qstack_adt_t)ivar_2);
           result = (bool_t)sigmatdproof__subterm__2((sigmatdproof__qstack_adt_t)ivar_1, (sigmatdproof__qstack_adt_t)ivar_15);
};
};

        
        return result;
}

extern bool_t sigmatdproof__doublelessp__2(sigmatdproof__qstack_adt_t ivar_1, sigmatdproof__qstack_adt_t ivar_2){
        bool_t  result;
        bool_t ivar_4;
        ivar_2->count++;
        ivar_4 = (bool_t)r_sigmatdproof__qemptyp((sigmatdproof__qstack_adt_t)ivar_2);
        if (ivar_4){ 
             release_sigmatdproof__qstack_adt(ivar_1);
             release_sigmatdproof__qstack_adt(ivar_2);
             result = (bool_t) false;
} else {
        
             sigmatdproof__qstack_adt_t ivar_10;
             ivar_10 = (sigmatdproof__qstack_adt_t)sigmatdproof__qstack_adt_qpop((sigmatdproof__qstack_adt_t)ivar_2);
             bool_t ivar_20;
             ivar_1->count++;
             ivar_10->count++;
             ivar_20 = (bool_t) equal_sigmatdproof__qstack_adt(ivar_1, ivar_10);
             if (ivar_20){  
           release_sigmatdproof__qstack_adt(ivar_10);
           release_sigmatdproof__qstack_adt(ivar_1);
           result = (bool_t) true;
} else {
             
           result = (bool_t)sigmatdproof__doublelessp__2((sigmatdproof__qstack_adt_t)ivar_1, (sigmatdproof__qstack_adt_t)ivar_10);
};
};

        
        return result;
}

extern sigmatdproof_funtype_35_t sigmatdproof__reduce_nat__2(mpz_ptr_t ivar_1, sigmatdproof_funtype_37_t ivar_2){
        sigmatdproof_funtype_35_t  result;
        sigmatdproof_closure_38_t cl35677;
        cl35677 = new_sigmatdproof_closure_38();
        cl35677->fvar_1 = (sigmatdproof_funtype_37_t)ivar_2;
        if (cl35677->fvar_1 != NULL) cl35677->fvar_1->count++;
        mpz_set(cl35677->fvar_2, ivar_1);
        release_sigmatdproof_funtype_37(ivar_2);
        result = (sigmatdproof_funtype_35_t)cl35677;

        
        return result;
}

extern sigmatdproof_funtype_35_t sigmatdproof__REDUCE_nat__2(sigmatdproof_funtype_35_t ivar_1, sigmatdproof_funtype_40_t ivar_3){
        sigmatdproof_funtype_35_t  result;
        sigmatdproof_closure_41_t cl35767;
        cl35767 = new_sigmatdproof_closure_41();
        cl35767->fvar_1 = (sigmatdproof_funtype_40_t)ivar_3;
        if (cl35767->fvar_1 != NULL) cl35767->fvar_1->count++;
        cl35767->fvar_2 = (sigmatdproof_funtype_35_t)ivar_1;
        if (cl35767->fvar_2 != NULL) cl35767->fvar_2->count++;
        release_sigmatdproof_funtype_40(ivar_3);
        release_sigmatdproof_funtype_35(ivar_1);
        result = (sigmatdproof_funtype_35_t)cl35767;

        
        return result;
}

extern sigmatdproof_funtype_42_t sigmatdproof__reduce_ordinal__2(ordstruct_adt__ordstruct_adt_t ivar_1, sigmatdproof_funtype_44_t ivar_2){
        sigmatdproof_funtype_42_t  result;
        sigmatdproof_closure_45_t cl35884;
        cl35884 = new_sigmatdproof_closure_45();
        cl35884->fvar_1 = (sigmatdproof_funtype_44_t)ivar_2;
        if (cl35884->fvar_1 != NULL) cl35884->fvar_1->count++;
        cl35884->fvar_2 = (ordstruct_adt__ordstruct_adt_t)ivar_1;
        if (cl35884->fvar_2 != NULL) cl35884->fvar_2->count++;
        release_sigmatdproof_funtype_44(ivar_2);
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (sigmatdproof_funtype_42_t)cl35884;

        
        return result;
}

extern sigmatdproof_funtype_42_t sigmatdproof__REDUCE_ordinal__2(sigmatdproof_funtype_42_t ivar_1, sigmatdproof_funtype_47_t ivar_3){
        sigmatdproof_funtype_42_t  result;
        sigmatdproof_closure_48_t cl36026;
        cl36026 = new_sigmatdproof_closure_48();
        cl36026->fvar_1 = (sigmatdproof_funtype_47_t)ivar_3;
        if (cl36026->fvar_1 != NULL) cl36026->fvar_1->count++;
        cl36026->fvar_2 = (sigmatdproof_funtype_42_t)ivar_1;
        if (cl36026->fvar_2 != NULL) cl36026->fvar_2->count++;
        release_sigmatdproof_funtype_47(ivar_3);
        release_sigmatdproof_funtype_42(ivar_1);
        result = (sigmatdproof_funtype_42_t)cl36026;

        
        return result;
}

extern bool_t sigmatdproof__inqstack(uint8_t ivar_1, uint32_t ivar_2, sigmatdproof__qstack_adt_t ivar_3){
        bool_t  result;
        bool_t ivar_36;
        ivar_3->count++;
        ivar_36 = (bool_t)r_sigmatdproof__qpushp((sigmatdproof__qstack_adt_t)ivar_3);
        if (ivar_36){ 
             uint8_t ivar_5;
             ivar_3->count++;
             ivar_5 = (uint8_t)sigmatdproof__qstack_adt_nonterm((sigmatdproof__qstack_adt_t)ivar_3);
             uint32_t ivar_6;
             ivar_3->count++;
             ivar_6 = (uint32_t)sigmatdproof__qstack_adt_pos((sigmatdproof__qstack_adt_t)ivar_3);
             sigmatdproof__qstack_adt_t ivar_7;
             ivar_7 = (sigmatdproof__qstack_adt_t)sigmatdproof__qstack_adt_qpop((sigmatdproof__qstack_adt_t)ivar_3);
             bool_t ivar_17;
             bool_t ivar_19;
             ivar_19 = (ivar_1 == ivar_5);
             if (ivar_19){  
           ivar_17 = (ivar_2 == ivar_6);
} else {
             
           ivar_17 = (bool_t) false;
};
             if (ivar_17){  
           release_sigmatdproof__qstack_adt(ivar_7);
           result = (bool_t) true;
} else {
             
           result = (bool_t)sigmatdproof__inqstack((uint8_t)ivar_1, (uint32_t)ivar_2, (sigmatdproof__qstack_adt_t)ivar_7);
};
} else {
        
             release_sigmatdproof__qstack_adt(ivar_3);
             result = (bool_t) false;
};

        
        return result;
}

extern mpz_ptr_t sigmatdproof__stacksize(sigmatdproof__qstack_adt_t ivar_1){
        mpz_ptr_t  result;
        bool_t ivar_21;
        ivar_1->count++;
        ivar_21 = (bool_t)r_sigmatdproof__qpushp((sigmatdproof__qstack_adt_t)ivar_1);
        if (ivar_21){ 
             sigmatdproof__qstack_adt_t ivar_5;
             ivar_5 = (sigmatdproof__qstack_adt_t)sigmatdproof__qstack_adt_qpop((sigmatdproof__qstack_adt_t)ivar_1);
             mpz_ptr_t ivar_15;
             ivar_15 = (mpz_ptr_t)sigmatdproof__stacksize((sigmatdproof__qstack_adt_t)ivar_5);
             uint8_t ivar_16;
             ivar_16 = (uint8_t)1;
             mpz_mk_set_ui(result, (uint64_t)ivar_16);
             mpz_add(result, result, ivar_15);
} else {
        
             release_sigmatdproof__qstack_adt(ivar_1);
             result = safe_malloc(sizeof(mpz_t));
             mpz_init(result);
             mpz_mk_set_ui(result, 0);
};

        
        return result;
}

extern sigmatdproof_funtype_49_t sigmatdproof__good_qstackp(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatdproof_array_50_t ivar_3, sigmatdproof_array_52_t ivar_4){
        sigmatdproof_funtype_49_t  result;
        sigmatdproof_closure_53_t cl36126;
        cl36126 = new_sigmatdproof_closure_53();
        cl36126->fvar_1 = (sigmatdproof_array_50_t)ivar_3;
        if (cl36126->fvar_1 != NULL) cl36126->fvar_1->count++;
        cl36126->fvar_2 = (uint32_t)ivar_1;
        cl36126->fvar_3 = (sigmatdproof_array_52_t)ivar_4;
        if (cl36126->fvar_3 != NULL) cl36126->fvar_3->count++;
        cl36126->fvar_4 = (sigmatopdown__lang_spec_t)ivar_2;
        if (cl36126->fvar_4 != NULL) cl36126->fvar_4->count++;
        release_sigmatdproof_array_52(ivar_4);
        release_sigmatdproof_array_50(ivar_3);
        release_sigmatopdown__lang_spec(ivar_2);
        result = (sigmatdproof_funtype_49_t)cl36126;

        
        return result;
}

extern sigmatdproof_funtype_55_t sigmatdproof__good_parsetreep(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatdproof_array_50_t ivar_3){
        sigmatdproof_funtype_55_t  result;
        sigmatdproof_closure_56_t cl36822;
        cl36822 = new_sigmatdproof_closure_56();
        cl36822->fvar_1 = (sigmatdproof_array_50_t)ivar_3;
        if (cl36822->fvar_1 != NULL) cl36822->fvar_1->count++;
        cl36822->fvar_2 = (uint32_t)ivar_1;
        cl36822->fvar_3 = (sigmatopdown__lang_spec_t)ivar_2;
        if (cl36822->fvar_3 != NULL) cl36822->fvar_3->count++;
        release_sigmatdproof_array_50(ivar_3);
        release_sigmatopdown__lang_spec(ivar_2);
        result = (sigmatdproof_funtype_55_t)cl36822;

        
        return result;
}

extern sigmatdproof_funtype_61_t sigmatdproof__buildtree(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatdproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5){
        sigmatdproof_funtype_61_t  result;
        sigmatdproof_closure_62_t cl37654;
        cl37654 = new_sigmatdproof_closure_62();
        cl37654->fvar_1 = (uint32_t)ivar_1;
        cl37654->fvar_2 = (sigmatopdown__lang_spec_t)ivar_2;
        if (cl37654->fvar_2 != NULL) cl37654->fvar_2->count++;
        cl37654->fvar_3 = (sigmatdproof_array_50_t)ivar_3;
        if (cl37654->fvar_3 != NULL) cl37654->fvar_3->count++;
        cl37654->fvar_4 = (uint8_t)ivar_5;
        cl37654->fvar_5 = (uint32_t)ivar_4;
        release_sigmatopdown__lang_spec(ivar_2);
        release_sigmatdproof_array_50(ivar_3);
        result = (sigmatdproof_funtype_61_t)cl37654;

        
        return result;
}

extern sigmatdproof_funtype_64_t sigmatdproof__buildloop(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatdproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5){
        sigmatdproof_funtype_64_t  result;
        sigmatdproof_closure_65_t cl38581;
        cl38581 = new_sigmatdproof_closure_65();
        cl38581->fvar_1 = (uint32_t)ivar_1;
        cl38581->fvar_2 = (sigmatopdown__lang_spec_t)ivar_2;
        if (cl38581->fvar_2 != NULL) cl38581->fvar_2->count++;
        cl38581->fvar_3 = (sigmatdproof_array_50_t)ivar_3;
        if (cl38581->fvar_3 != NULL) cl38581->fvar_3->count++;
        cl38581->fvar_4 = (uint8_t)ivar_5;
        cl38581->fvar_5 = (uint32_t)ivar_4;
        release_sigmatopdown__lang_spec(ivar_2);
        release_sigmatdproof_array_50(ivar_3);
        result = (sigmatdproof_funtype_64_t)cl38581;

        
        return result;
}

extern sigmatdproof_funtype_68_t sigmatdproof__buildproof(uint32_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatdproof_array_50_t ivar_3, uint32_t ivar_4, uint8_t ivar_5){
        sigmatdproof_funtype_68_t  result;
        sigmatdproof_closure_69_t cl38857;
        cl38857 = new_sigmatdproof_closure_69();
        cl38857->fvar_1 = (uint32_t)ivar_4;
        cl38857->fvar_2 = (uint32_t)ivar_1;
        cl38857->fvar_3 = (uint8_t)ivar_5;
        cl38857->fvar_4 = (sigmatdproof_array_50_t)ivar_3;
        if (cl38857->fvar_4 != NULL) cl38857->fvar_4->count++;
        cl38857->fvar_5 = (sigmatopdown__lang_spec_t)ivar_2;
        if (cl38857->fvar_5 != NULL) cl38857->fvar_5->count++;
        release_sigmatdproof_array_50(ivar_3);
        release_sigmatopdown__lang_spec(ivar_2);
        result = (sigmatdproof_funtype_68_t)cl38857;

        
        return result;
}