//Code generated using pvs2ir2c
#include "ltepegtest_c.h"

void release_ltepegtest_funtype_0(ltepegtest_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegtest_funtype_0_t copy_ltepegtest_funtype_0(ltepegtest_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltepegtest_funtype_0(ltepegtest_funtype_0_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltepegtest_funtype_0_hashentry_t data = htbl->data[hashindex];
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

ltepegtest_funtype_0_t dupdate_ltepegtest_funtype_0(ltepegtest_funtype_0_t a, uint8_t i, bool_t v){
        ltepegtest_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltepegtest_funtype_0_htbl_t)safe_malloc(sizeof(struct ltepegtest_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltepegtest_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltepegtest_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltepegtest_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltepegtest_funtype_0_hashentry_t * new_data = (ltepegtest_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct ltepegtest_funtype_0_hashentry_s));
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
        uint32_t hashindex = lookup_ltepegtest_funtype_0(htbl, i, ihash);
        ltepegtest_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

ltepegtest_funtype_0_t update_ltepegtest_funtype_0(ltepegtest_funtype_0_t a, uint8_t i, bool_t v){
        if (a->count == 1){
                return dupdate_ltepegtest_funtype_0(a, i, v);
            } else {
                ltepegtest_funtype_0_t x = copy_ltepegtest_funtype_0(a);
                a->count--;
                return dupdate_ltepegtest_funtype_0(x, i, v);
            }}

bool_t equal_ltepegtest_funtype_0(ltepegtest_funtype_0_t x, ltepegtest_funtype_0_t y){
        return false;}

char* json_ltepegtest_funtype_0(ltepegtest_funtype_0_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"ltepegtest_funtype_0\""); return result;}


bool_t f_ltepegtest_closure_1(struct ltepegtest_closure_1_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        ltepegtest_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_ltepegtest_funtype_0(htbl, bvar, hash);
        ltepegtest_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_ltepegtest_closure_1(bvar);};

return h_ltepegtest_closure_1(bvar);}

bool_t m_ltepegtest_closure_1(struct ltepegtest_closure_1_s * closure, uint8_t bvar){
        return h_ltepegtest_closure_1(bvar);}

extern bool_t h_ltepegtest_closure_1(uint8_t ivar_195){
        bool_t result;
        result = (bool_t)ltepegtest__whitespace((uint8_t)ivar_195);

        return result;
}

ltepegtest_closure_1_t new_ltepegtest_closure_1(void){
        static struct ltepegtest_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepegtest_funtype_0_t, uint8_t))&f_ltepegtest_closure_1, .mptr = (bool_t (*)(ltepegtest_funtype_0_t, uint8_t))&m_ltepegtest_closure_1, .rptr =  (void (*)(ltepegtest_funtype_0_t))&release_ltepegtest_closure_1, .cptr = (ltepegtest_funtype_0_t (*)(ltepegtest_funtype_0_t))&copy_ltepegtest_closure_1};
        ltepegtest_closure_1_t tmp = (ltepegtest_closure_1_t) safe_malloc(sizeof(struct ltepegtest_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegtest_closure_1(ltepegtest_funtype_0_t closure){
        ltepegtest_closure_1_t x = (ltepegtest_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegtest_closure_1_t copy_ltepegtest_closure_1(ltepegtest_closure_1_t x){
        ltepegtest_closure_1_t y = new_ltepegtest_closure_1();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            ltepegtest_funtype_0_htbl_t new_htbl = (ltepegtest_funtype_0_htbl_t) safe_malloc(sizeof(struct ltepegtest_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegtest_funtype_0_hashentry_t * new_data = (ltepegtest_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegtest_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegtest_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_ltepegtest_closure_2(struct ltepegtest_closure_2_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        ltepegtest_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_ltepegtest_funtype_0(htbl, bvar, hash);
        ltepegtest_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_ltepegtest_closure_2(bvar);};

return h_ltepegtest_closure_2(bvar);}

bool_t m_ltepegtest_closure_2(struct ltepegtest_closure_2_s * closure, uint8_t bvar){
        return h_ltepegtest_closure_2(bvar);}

extern bool_t h_ltepegtest_closure_2(uint8_t ivar_207){
        bool_t result;
        result = (bool_t)ltepegtest__digit((uint8_t)ivar_207);

        return result;
}

ltepegtest_closure_2_t new_ltepegtest_closure_2(void){
        static struct ltepegtest_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepegtest_funtype_0_t, uint8_t))&f_ltepegtest_closure_2, .mptr = (bool_t (*)(ltepegtest_funtype_0_t, uint8_t))&m_ltepegtest_closure_2, .rptr =  (void (*)(ltepegtest_funtype_0_t))&release_ltepegtest_closure_2, .cptr = (ltepegtest_funtype_0_t (*)(ltepegtest_funtype_0_t))&copy_ltepegtest_closure_2};
        ltepegtest_closure_2_t tmp = (ltepegtest_closure_2_t) safe_malloc(sizeof(struct ltepegtest_closure_2_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegtest_closure_2(ltepegtest_funtype_0_t closure){
        ltepegtest_closure_2_t x = (ltepegtest_closure_2_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegtest_closure_2_t copy_ltepegtest_closure_2(ltepegtest_closure_2_t x){
        ltepegtest_closure_2_t y = new_ltepegtest_closure_2();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            ltepegtest_funtype_0_htbl_t new_htbl = (ltepegtest_funtype_0_htbl_t) safe_malloc(sizeof(struct ltepegtest_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegtest_funtype_0_hashentry_t * new_data = (ltepegtest_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegtest_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegtest_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_ltepegtest_closure_3(struct ltepegtest_closure_3_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        ltepegtest_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_ltepegtest_funtype_0(htbl, bvar, hash);
        ltepegtest_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_ltepegtest_closure_3(bvar);};

return h_ltepegtest_closure_3(bvar);}

bool_t m_ltepegtest_closure_3(struct ltepegtest_closure_3_s * closure, uint8_t bvar){
        return h_ltepegtest_closure_3(bvar);}

extern bool_t h_ltepegtest_closure_3(uint8_t ivar_219){
        bool_t result;
        result = (bool_t)ltepegtest__any((uint8_t)ivar_219);

        return result;
}

ltepegtest_closure_3_t new_ltepegtest_closure_3(void){
        static struct ltepegtest_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(ltepegtest_funtype_0_t, uint8_t))&f_ltepegtest_closure_3, .mptr = (bool_t (*)(ltepegtest_funtype_0_t, uint8_t))&m_ltepegtest_closure_3, .rptr =  (void (*)(ltepegtest_funtype_0_t))&release_ltepegtest_closure_3, .cptr = (ltepegtest_funtype_0_t (*)(ltepegtest_funtype_0_t))&copy_ltepegtest_closure_3};
        ltepegtest_closure_3_t tmp = (ltepegtest_closure_3_t) safe_malloc(sizeof(struct ltepegtest_closure_3_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegtest_closure_3(ltepegtest_funtype_0_t closure){
        ltepegtest_closure_3_t x = (ltepegtest_closure_3_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegtest_closure_3_t copy_ltepegtest_closure_3(ltepegtest_closure_3_t x){
        ltepegtest_closure_3_t y = new_ltepegtest_closure_3();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            ltepegtest_funtype_0_htbl_t new_htbl = (ltepegtest_funtype_0_htbl_t) safe_malloc(sizeof(struct ltepegtest_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegtest_funtype_0_hashentry_t * new_data = (ltepegtest_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegtest_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegtest_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepegtest_array_4_t new_ltepegtest_array_4(uint32_t size){
        ltepegtest_array_4_t tmp = (ltepegtest_array_4_t) safe_malloc(sizeof(struct ltepegtest_array_4_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_ltepegtest_array_4(ltepegtest_array_4_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_ltepegtest_array_4_ptr(pointer_t x, type_actual_t T){
        release_ltepegtest_array_4((ltepegtest_array_4_t)x);
}

ltepegtest_array_4_t copy_ltepegtest_array_4(ltepegtest_array_4_t x){
        ltepegtest_array_4_t tmp = new_ltepegtest_array_4(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_ltepegtest_array_4(ltepegtest_array_4_t x, ltepegtest_array_4_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_ltepegtest_array_4(ltepegtest_array_4_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint8(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltepegtest_array_4_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltepegtest_array_4((ltepegtest_array_4_t)x, (ltepegtest_array_4_t)y);
}

char * json_ltepegtest_array_4_ptr(pointer_t x, type_actual_t T){
        return json_ltepegtest_array_4((ltepegtest_array_4_t)x);
}

actual_ltepegtest_array_4_t actual_ltepegtest_array_4(){
        actual_ltepegtest_array_4_t new = (actual_ltepegtest_array_4_t)safe_malloc(sizeof(struct actual_ltepegtest_array_4_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegtest_array_4_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegtest_array_4_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegtest_array_4_ptr);
 

 
        return new;
 };

ltepegtest_array_4_t update_ltepegtest_array_4(ltepegtest_array_4_t x, uint32_t i, uint8_t v){
        ltepegtest_array_4_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_ltepegtest_array_4(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

ltepegtest_array_4_t upgrade_ltepegtest_array_4(ltepegtest_array_4_t x, uint32_t i, uint8_t v){
        ltepegtest_array_4_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltepegtest_array_4_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltepegtest_array_4(x);}
           else {y = copy_ltepegtest_array_4(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




ltepegtest_record_5_t new_ltepegtest_record_5(void){
        ltepegtest_record_5_t tmp = (ltepegtest_record_5_t) safe_malloc(sizeof(struct ltepegtest_record_5_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegtest_record_5(ltepegtest_record_5_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepegtest_array_4(x->project_1);
         release_ltepegtest_array_4(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegtest_record_5_ptr(pointer_t x, type_actual_t T){
        release_ltepegtest_record_5((ltepegtest_record_5_t)x);
}

ltepegtest_record_5_t copy_ltepegtest_record_5(ltepegtest_record_5_t x){
        ltepegtest_record_5_t y = new_ltepegtest_record_5();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepegtest_record_5(ltepegtest_record_5_t x, ltepegtest_record_5_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepegtest_array_4(x->project_1, y->project_1);
        tmp = tmp && equal_ltepegtest_array_4(x->project_2, y->project_2);
        return tmp;}

char * json_ltepegtest_record_5(ltepegtest_record_5_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepegtest_array_4(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_ltepegtest_array_4(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegtest_record_5_ptr(pointer_t x, pointer_t y, actual_ltepegtest_record_5_t T){
        return equal_ltepegtest_record_5((ltepegtest_record_5_t)x, (ltepegtest_record_5_t)y);
}

char * json_ltepegtest_record_5_ptr(pointer_t x, actual_ltepegtest_record_5_t T){
        return json_ltepegtest_record_5((ltepegtest_record_5_t)x);
}

actual_ltepegtest_record_5_t actual_ltepegtest_record_5(){
        actual_ltepegtest_record_5_t new = (actual_ltepegtest_record_5_t)safe_malloc(sizeof(struct actual_ltepegtest_record_5_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegtest_record_5_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegtest_record_5_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegtest_record_5_ptr);
 

 
        return new;
 };

ltepegtest_record_5_t update_ltepegtest_record_5_project_1(ltepegtest_record_5_t x, ltepegtest_array_4_t v){
        ltepegtest_record_5_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepegtest_array_4(x->project_1);};}
        else {y = copy_ltepegtest_record_5(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepegtest_array_4_t)v;
        return y;}

ltepegtest_record_5_t update_ltepegtest_record_5_project_2(ltepegtest_record_5_t x, ltepegtest_array_4_t v){
        ltepegtest_record_5_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_ltepegtest_array_4(x->project_2);};}
        else {y = copy_ltepegtest_record_5(x); x->count--; y->project_2->count--;};
        y->project_2 = (ltepegtest_array_4_t)v;
        return y;}



void release_ltepegtest_funtype_6(ltepegtest_funtype_6_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegtest_funtype_6_t copy_ltepegtest_funtype_6(ltepegtest_funtype_6_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegtest_funtype_6(ltepegtest_funtype_6_t x, ltepegtest_funtype_6_t y){
        return false;}

char* json_ltepegtest_funtype_6(ltepegtest_funtype_6_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"ltepegtest_funtype_6\""); return result;}


ltepegtest_array_4_t f_ltepegtest_closure_7(struct ltepegtest_closure_7_s * closure, ltepegtest_record_5_t bvar){
        ltepegtest_array_4_t bvar_1;
        bvar_1 = (ltepegtest_array_4_t)bvar->project_1;
        bvar->project_1->count++;
        ltepegtest_array_4_t bvar_2;
        bvar_2 = (ltepegtest_array_4_t)bvar->project_2;
        bvar->project_2->count++;
        release_ltepegtest_record_5(bvar);
        ltepegtest_array_4_t result = h_ltepegtest_closure_7(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2); 
        release_ltepegtest_array_4(bvar_1);
        release_ltepegtest_array_4(bvar_2);
        return result;}

ltepegtest_array_4_t m_ltepegtest_closure_7(struct ltepegtest_closure_7_s * closure, ltepegtest_array_4_t bvar_1, ltepegtest_array_4_t bvar_2){
        return h_ltepegtest_closure_7(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2);}

extern ltepegtest_array_4_t h_ltepegtest_closure_7(ltepegtest_array_4_t ivar_26, ltepegtest_array_4_t ivar_27, uint8_t ivar_1, uint8_t ivar_2){
        ltepegtest_array_4_t result;
        mpz_t ivar_38;
        mpz_init(ivar_38);
        uint32_t size96462;
        uint16_t ivar_37;
        uint8_t ivar_32;
        //copying to uint8 from uint8;
        ivar_32 = (uint8_t)ivar_1;
        uint8_t ivar_33;
        //copying to uint8 from uint8;
        ivar_33 = (uint8_t)ivar_2;
        ivar_37 = (uint16_t)(ivar_32 + ivar_33);
        uint8_t ivar_36;
        //copying to uint8 from uint16;
        ivar_36 = (uint8_t)ivar_37;
        uint8_t ivar_35;
        ivar_35 = (uint8_t)identity_uint8__I((uint8_t)ivar_36);
        //copying to uint32 from uint8;
        size96462 = (uint32_t)ivar_35;
        size96462 += 0;
        result = new_ltepegtest_array_4(size96462);
        for (uint32_t index96459 = 0; index96459 < size96462; index96459++){
             mpz_t ivar_38;
             mpz_init(ivar_38);
             mpz_set_ui(ivar_38, index96459);
             bool_t ivar_42;
             int64_t tmp96460 = mpz_cmp_ui(ivar_38, ivar_1);
             ivar_42 = (tmp96460 < 0);
             if (ivar_42){  
           uint8_t ivar_49;
           //copying to uint8 from mpz;
           ivar_49 = (uint8_t)mpz_get_ui(ivar_38);
           mpz_clear(ivar_38);
           result->elems[index96459] = (uint8_t)ivar_26->elems[ivar_49];
} else {
             
           uint8_t ivar_59;
           mpz_t tmp96461;
           mpz_init(tmp96461);
           mpz_sub_ui(tmp96461, ivar_38, ivar_1);
           ivar_59 = (uint8_t) mpz_get_ui(tmp96461);
           mpz_clear(tmp96461);
           result->elems[index96459] = (uint8_t)ivar_27->elems[ivar_59];
};
        };
        release_ltepegtest_array_4(ivar_27);
        release_ltepegtest_array_4(ivar_26);

        return result;
}

ltepegtest_closure_7_t new_ltepegtest_closure_7(void){
        static struct ltepegtest_funtype_6_ftbl_s ftbl = {.fptr = (ltepegtest_array_4_t (*)(ltepegtest_funtype_6_t, ltepegtest_record_5_t))&f_ltepegtest_closure_7, .mptr = (ltepegtest_array_4_t (*)(ltepegtest_funtype_6_t, ltepegtest_array_4_t, ltepegtest_array_4_t))&m_ltepegtest_closure_7, .rptr =  (void (*)(ltepegtest_funtype_6_t))&release_ltepegtest_closure_7, .cptr = (ltepegtest_funtype_6_t (*)(ltepegtest_funtype_6_t))&copy_ltepegtest_closure_7};
        ltepegtest_closure_7_t tmp = (ltepegtest_closure_7_t) safe_malloc(sizeof(struct ltepegtest_closure_7_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegtest_closure_7(ltepegtest_funtype_6_t closure){
        ltepegtest_closure_7_t x = (ltepegtest_closure_7_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegtest_closure_7_t copy_ltepegtest_closure_7(ltepegtest_closure_7_t x){
        ltepegtest_closure_7_t y = new_ltepegtest_closure_7();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint8_t)x->fvar_1;
        y->fvar_2 = (uint8_t)x->fvar_2;
        if (x->htbl != NULL){
            ltepegtest_funtype_6_htbl_t new_htbl = (ltepegtest_funtype_6_htbl_t) safe_malloc(sizeof(struct ltepegtest_funtype_6_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegtest_funtype_6_hashentry_t * new_data = (ltepegtest_funtype_6_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegtest_funtype_6_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegtest_funtype_6_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepegtest_funtype_8(ltepegtest_funtype_8_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegtest_funtype_8_t copy_ltepegtest_funtype_8(ltepegtest_funtype_8_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltepegtest_funtype_8(ltepegtest_funtype_8_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltepegtest_funtype_8_hashentry_t data = htbl->data[hashindex];
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

ltepegtest_funtype_8_t dupdate_ltepegtest_funtype_8(ltepegtest_funtype_8_t a, uint8_t i, ltepeg__ent_adt_t v){
        ltepegtest_funtype_8_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltepegtest_funtype_8_htbl_t)safe_malloc(sizeof(struct ltepegtest_funtype_8_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltepegtest_funtype_8_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltepegtest_funtype_8_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltepegtest_funtype_8_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltepegtest_funtype_8_hashentry_t * new_data = (ltepegtest_funtype_8_hashentry_t *)safe_malloc(new_size * sizeof(struct ltepegtest_funtype_8_hashentry_s));
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
        uint32_t hashindex = lookup_ltepegtest_funtype_8(htbl, i, ihash);
        ltepegtest_funtype_8_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ltepeg__ent_adt_t)v; htbl->num_entries++;}
            else {ltepeg__ent_adt_t tempvalue;tempvalue = (ltepeg__ent_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ltepeg__ent_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ltepeg__ent_adt(tempvalue);};
        return a;

}

ltepegtest_funtype_8_t update_ltepegtest_funtype_8(ltepegtest_funtype_8_t a, uint8_t i, ltepeg__ent_adt_t v){
        if (a->count == 1){
                return dupdate_ltepegtest_funtype_8(a, i, v);
            } else {
                ltepegtest_funtype_8_t x = copy_ltepegtest_funtype_8(a);
                a->count--;
                return dupdate_ltepegtest_funtype_8(x, i, v);
            }}

bool_t equal_ltepegtest_funtype_8(ltepegtest_funtype_8_t x, ltepegtest_funtype_8_t y){
        return false;}

char* json_ltepegtest_funtype_8(ltepegtest_funtype_8_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"ltepegtest_funtype_8\""); return result;}


ltepeg__ent_adt_t f_ltepegtest_closure_9(struct ltepegtest_closure_9_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        ltepegtest_funtype_8_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_ltepegtest_funtype_8(htbl, bvar, hash);
        ltepegtest_funtype_8_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            ltepeg__ent_adt_t result;
            result = (ltepeg__ent_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_ltepegtest_closure_9(bvar);};

return h_ltepegtest_closure_9(bvar);}

ltepeg__ent_adt_t m_ltepegtest_closure_9(struct ltepegtest_closure_9_s * closure, uint8_t bvar){
        return h_ltepegtest_closure_9(bvar);}

extern ltepeg__ent_adt_t h_ltepegtest_closure_9(uint8_t ivar_10){
        ltepeg__ent_adt_t result;
        result = (ltepeg__ent_adt_t)ltepeg__pending();
        if (result != NULL) result->count++;

        return result;
}

ltepegtest_closure_9_t new_ltepegtest_closure_9(void){
        static struct ltepegtest_funtype_8_ftbl_s ftbl = {.fptr = (ltepeg__ent_adt_t (*)(ltepegtest_funtype_8_t, uint8_t))&f_ltepegtest_closure_9, .mptr = (ltepeg__ent_adt_t (*)(ltepegtest_funtype_8_t, uint8_t))&m_ltepegtest_closure_9, .rptr =  (void (*)(ltepegtest_funtype_8_t))&release_ltepegtest_closure_9, .cptr = (ltepegtest_funtype_8_t (*)(ltepegtest_funtype_8_t))&copy_ltepegtest_closure_9};
        ltepegtest_closure_9_t tmp = (ltepegtest_closure_9_t) safe_malloc(sizeof(struct ltepegtest_closure_9_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegtest_closure_9(ltepegtest_funtype_8_t closure){
        ltepegtest_closure_9_t x = (ltepegtest_closure_9_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegtest_closure_9_t copy_ltepegtest_closure_9(ltepegtest_closure_9_t x){
        ltepegtest_closure_9_t y = new_ltepegtest_closure_9();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            ltepegtest_funtype_8_htbl_t new_htbl = (ltepegtest_funtype_8_htbl_t) safe_malloc(sizeof(struct ltepegtest_funtype_8_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegtest_funtype_8_hashentry_t * new_data = (ltepegtest_funtype_8_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegtest_funtype_8_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegtest_funtype_8_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepegtest_funtype_10(ltepegtest_funtype_10_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegtest_funtype_10_t copy_ltepegtest_funtype_10(ltepegtest_funtype_10_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltepegtest_funtype_10(ltepegtest_funtype_10_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltepegtest_funtype_10_hashentry_t data = htbl->data[hashindex];
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

ltepegtest_funtype_10_t dupdate_ltepegtest_funtype_10(ltepegtest_funtype_10_t a, uint8_t i, ltepegtest_funtype_8_t v){
        ltepegtest_funtype_10_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltepegtest_funtype_10_htbl_t)safe_malloc(sizeof(struct ltepegtest_funtype_10_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltepegtest_funtype_10_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltepegtest_funtype_10_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltepegtest_funtype_10_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltepegtest_funtype_10_hashentry_t * new_data = (ltepegtest_funtype_10_hashentry_t *)safe_malloc(new_size * sizeof(struct ltepegtest_funtype_10_hashentry_s));
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
                                new_data[new_loc].value = (ltepegtest_funtype_8_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_ltepegtest_funtype_10(htbl, i, ihash);
        ltepegtest_funtype_10_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ltepegtest_funtype_8_t)v; htbl->num_entries++;}
            else {ltepegtest_funtype_8_t tempvalue;tempvalue = (ltepegtest_funtype_8_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ltepegtest_funtype_8_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ltepegtest_funtype_8(tempvalue);};
        return a;

}

ltepegtest_funtype_10_t update_ltepegtest_funtype_10(ltepegtest_funtype_10_t a, uint8_t i, ltepegtest_funtype_8_t v){
        if (a->count == 1){
                return dupdate_ltepegtest_funtype_10(a, i, v);
            } else {
                ltepegtest_funtype_10_t x = copy_ltepegtest_funtype_10(a);
                a->count--;
                return dupdate_ltepegtest_funtype_10(x, i, v);
            }}

bool_t equal_ltepegtest_funtype_10(ltepegtest_funtype_10_t x, ltepegtest_funtype_10_t y){
        return false;}

char* json_ltepegtest_funtype_10(ltepegtest_funtype_10_t x){char * result = safe_malloc(31); sprintf(result, "%s", "\"ltepegtest_funtype_10\""); return result;}


ltepegtest_record_11_t new_ltepegtest_record_11(void){
        ltepegtest_record_11_t tmp = (ltepegtest_record_11_t) safe_malloc(sizeof(struct ltepegtest_record_11_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegtest_record_11(ltepegtest_record_11_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepegtest_funtype_10(x->scaf);
         release_ltepeg__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegtest_record_11_ptr(pointer_t x, type_actual_t T){
        release_ltepegtest_record_11((ltepegtest_record_11_t)x);
}

ltepegtest_record_11_t copy_ltepegtest_record_11(ltepegtest_record_11_t x){
        ltepegtest_record_11_t y = new_ltepegtest_record_11();
        y->depth = (uint8_t)x->depth;
        y->lflag = (bool_t)x->lflag;
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepegtest_record_11(ltepegtest_record_11_t x, ltepegtest_record_11_t y){
        bool_t tmp = true;
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && x->lflag == y->lflag;
        tmp = tmp && equal_ltepegtest_funtype_10(x->scaf, y->scaf);
        tmp = tmp && equal_ltepeg__ent_adt(x->stack, y->stack);
        return tmp;}

char * json_ltepegtest_record_11(ltepegtest_record_11_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(17);
         sprintf(fld0, "\"depth\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->depth));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"lflag\" : ");
        tmp[1] = safe_strcat(fld1, json_bool(x->lflag));
        char * fld2 = safe_malloc(16);
         sprintf(fld2, "\"scaf\" : ");
        tmp[2] = safe_strcat(fld2, json_ltepegtest_funtype_10(x->scaf));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"stack\" : ");
        tmp[3] = safe_strcat(fld3, json_ltepeg__ent_adt(x->stack));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegtest_record_11_ptr(pointer_t x, pointer_t y, actual_ltepegtest_record_11_t T){
        return equal_ltepegtest_record_11((ltepegtest_record_11_t)x, (ltepegtest_record_11_t)y);
}

char * json_ltepegtest_record_11_ptr(pointer_t x, actual_ltepegtest_record_11_t T){
        return json_ltepegtest_record_11((ltepegtest_record_11_t)x);
}

actual_ltepegtest_record_11_t actual_ltepegtest_record_11(){
        actual_ltepegtest_record_11_t new = (actual_ltepegtest_record_11_t)safe_malloc(sizeof(struct actual_ltepegtest_record_11_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegtest_record_11_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegtest_record_11_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegtest_record_11_ptr);
 

 
        return new;
 };

ltepegtest_record_11_t update_ltepegtest_record_11_depth(ltepegtest_record_11_t x, uint8_t v){
        ltepegtest_record_11_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegtest_record_11(x); x->count--;};
        y->depth = (uint8_t)v;
        return y;}

ltepegtest_record_11_t update_ltepegtest_record_11_lflag(ltepegtest_record_11_t x, bool_t v){
        ltepegtest_record_11_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegtest_record_11(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}

ltepegtest_record_11_t update_ltepegtest_record_11_scaf(ltepegtest_record_11_t x, ltepegtest_funtype_10_t v){
        ltepegtest_record_11_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_ltepegtest_funtype_10(x->scaf);};}
        else {y = copy_ltepegtest_record_11(x); x->count--; y->scaf->count--;};
        y->scaf = (ltepegtest_funtype_10_t)v;
        return y;}

ltepegtest_record_11_t update_ltepegtest_record_11_stack(ltepegtest_record_11_t x, ltepeg__ent_adt_t v){
        ltepegtest_record_11_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_ltepeg__ent_adt(x->stack);};}
        else {y = copy_ltepegtest_record_11(x); x->count--; y->stack->count--;};
        y->stack = (ltepeg__ent_adt_t)v;
        return y;}




ltepegtest_funtype_8_t f_ltepegtest_closure_12(struct ltepegtest_closure_12_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        ltepegtest_funtype_10_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_ltepegtest_funtype_10(htbl, bvar, hash);
        ltepegtest_funtype_10_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            ltepegtest_funtype_8_t result;
            result = (ltepegtest_funtype_8_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_ltepegtest_closure_12(bvar, closure->fvar_1, closure->fvar_2);};

return h_ltepegtest_closure_12(bvar, closure->fvar_1, closure->fvar_2);}

ltepegtest_funtype_8_t m_ltepegtest_closure_12(struct ltepegtest_closure_12_s * closure, uint8_t bvar){
        return h_ltepegtest_closure_12(bvar, closure->fvar_1, closure->fvar_2);}

extern ltepegtest_funtype_8_t h_ltepegtest_closure_12(uint8_t ivar_23, uint8_t ivar_1, ltepegtest_funtype_8_t ivar_6){
        ltepegtest_funtype_8_t result;
        //copying to ltepegtest_funtype_8 from ltepegtest_funtype_8;
        result = (ltepegtest_funtype_8_t)ivar_6;
        if (result != NULL) result->count++;

        return result;
}

ltepegtest_closure_12_t new_ltepegtest_closure_12(void){
        static struct ltepegtest_funtype_10_ftbl_s ftbl = {.fptr = (ltepegtest_funtype_8_t (*)(ltepegtest_funtype_10_t, uint8_t))&f_ltepegtest_closure_12, .mptr = (ltepegtest_funtype_8_t (*)(ltepegtest_funtype_10_t, uint8_t))&m_ltepegtest_closure_12, .rptr =  (void (*)(ltepegtest_funtype_10_t))&release_ltepegtest_closure_12, .cptr = (ltepegtest_funtype_10_t (*)(ltepegtest_funtype_10_t))&copy_ltepegtest_closure_12};
        ltepegtest_closure_12_t tmp = (ltepegtest_closure_12_t) safe_malloc(sizeof(struct ltepegtest_closure_12_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegtest_closure_12(ltepegtest_funtype_10_t closure){
        ltepegtest_closure_12_t x = (ltepegtest_closure_12_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepegtest_funtype_8(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegtest_closure_12_t copy_ltepegtest_closure_12(ltepegtest_closure_12_t x){
        ltepegtest_closure_12_t y = new_ltepegtest_closure_12();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint8_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ltepegtest_funtype_10_htbl_t new_htbl = (ltepegtest_funtype_10_htbl_t) safe_malloc(sizeof(struct ltepegtest_funtype_10_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegtest_funtype_10_hashentry_t * new_data = (ltepegtest_funtype_10_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegtest_funtype_10_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegtest_funtype_10_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepegtest_array_13_t new_ltepegtest_array_13(uint32_t size){
        ltepegtest_array_13_t tmp = (ltepegtest_array_13_t) safe_malloc(sizeof(struct ltepegtest_array_13_s) + (size * sizeof(ltepeg__ent_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_ltepegtest_array_13(ltepegtest_array_13_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_ltepeg__ent_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_ltepegtest_array_13_ptr(pointer_t x, type_actual_t T){
        release_ltepegtest_array_13((ltepegtest_array_13_t)x);
}

ltepegtest_array_13_t copy_ltepegtest_array_13(ltepegtest_array_13_t x){
        ltepegtest_array_13_t tmp = new_ltepegtest_array_13(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ltepegtest_array_13(ltepegtest_array_13_t x, ltepegtest_array_13_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_ltepeg__ent_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_ltepegtest_array_13(ltepegtest_array_13_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_ltepeg__ent_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltepegtest_array_13_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltepegtest_array_13((ltepegtest_array_13_t)x, (ltepegtest_array_13_t)y);
}

char * json_ltepegtest_array_13_ptr(pointer_t x, type_actual_t T){
        return json_ltepegtest_array_13((ltepegtest_array_13_t)x);
}

actual_ltepegtest_array_13_t actual_ltepegtest_array_13(){
        actual_ltepegtest_array_13_t new = (actual_ltepegtest_array_13_t)safe_malloc(sizeof(struct actual_ltepegtest_array_13_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegtest_array_13_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegtest_array_13_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegtest_array_13_ptr);
 

 
        return new;
 };

ltepegtest_array_13_t update_ltepegtest_array_13(ltepegtest_array_13_t x, uint32_t i, ltepeg__ent_adt_t v){
         ltepegtest_array_13_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ltepegtest_array_13(x);
                      x->count--;};
        ltepeg__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepeg__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

ltepegtest_array_13_t upgrade_ltepegtest_array_13(ltepegtest_array_13_t x, uint32_t i, ltepeg__ent_adt_t v){
         ltepegtest_array_13_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltepegtest_array_13_s) + (newmax * sizeof(ltepeg__ent_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltepegtest_array_13(x);} else {y = copy_ltepegtest_array_13(x);
                      x->count--;};
        ltepeg__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepeg__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}




ltepegtest_array_14_t new_ltepegtest_array_14(uint32_t size){
        ltepegtest_array_14_t tmp = (ltepegtest_array_14_t) safe_malloc(sizeof(struct ltepegtest_array_14_s) + (size * sizeof(ltepegtest_array_13_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_ltepegtest_array_14(ltepegtest_array_14_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_ltepegtest_array_13(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_ltepegtest_array_14_ptr(pointer_t x, type_actual_t T){
        release_ltepegtest_array_14((ltepegtest_array_14_t)x);
}

ltepegtest_array_14_t copy_ltepegtest_array_14(ltepegtest_array_14_t x){
        ltepegtest_array_14_t tmp = new_ltepegtest_array_14(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ltepegtest_array_14(ltepegtest_array_14_t x, ltepegtest_array_14_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_ltepegtest_array_13(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_ltepegtest_array_14(ltepegtest_array_14_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_ltepegtest_array_13(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltepegtest_array_14_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltepegtest_array_14((ltepegtest_array_14_t)x, (ltepegtest_array_14_t)y);
}

char * json_ltepegtest_array_14_ptr(pointer_t x, type_actual_t T){
        return json_ltepegtest_array_14((ltepegtest_array_14_t)x);
}

actual_ltepegtest_array_14_t actual_ltepegtest_array_14(){
        actual_ltepegtest_array_14_t new = (actual_ltepegtest_array_14_t)safe_malloc(sizeof(struct actual_ltepegtest_array_14_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegtest_array_14_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegtest_array_14_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegtest_array_14_ptr);
 

 
        return new;
 };

ltepegtest_array_14_t update_ltepegtest_array_14(ltepegtest_array_14_t x, uint32_t i, ltepegtest_array_13_t v){
         ltepegtest_array_14_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ltepegtest_array_14(x);
                      x->count--;};
        ltepegtest_array_13_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepegtest_array_13(yelems[i]);};
         yelems[i] = v;
         return y;}

ltepegtest_array_14_t upgrade_ltepegtest_array_14(ltepegtest_array_14_t x, uint32_t i, ltepegtest_array_13_t v){
         ltepegtest_array_14_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltepegtest_array_14_s) + (newmax * sizeof(ltepegtest_array_13_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltepegtest_array_14(x);} else {y = copy_ltepegtest_array_14(x);
                      x->count--;};
        ltepegtest_array_13_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepegtest_array_13(yelems[i]);};
         yelems[i] = v;
         return y;}




ltepegtest_record_15_t new_ltepegtest_record_15(void){
        ltepegtest_record_15_t tmp = (ltepegtest_record_15_t) safe_malloc(sizeof(struct ltepegtest_record_15_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegtest_record_15(ltepegtest_record_15_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepegtest_array_14(x->scaf);
         release_ltepeg__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegtest_record_15_ptr(pointer_t x, type_actual_t T){
        release_ltepegtest_record_15((ltepegtest_record_15_t)x);
}

ltepegtest_record_15_t copy_ltepegtest_record_15(ltepegtest_record_15_t x){
        ltepegtest_record_15_t y = new_ltepegtest_record_15();
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->depth = (uint64_t)x->depth;
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->lflag = (bool_t)x->lflag;
        y->count = 1;
        return y;}

bool_t equal_ltepegtest_record_15(ltepegtest_record_15_t x, ltepegtest_record_15_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepegtest_array_14(x->scaf, y->scaf);
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && equal_ltepeg__ent_adt(x->stack, y->stack);
        tmp = tmp && x->lflag == y->lflag;
        return tmp;}

char * json_ltepegtest_record_15(ltepegtest_record_15_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(16);
         sprintf(fld0, "\"scaf\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepegtest_array_14(x->scaf));
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

bool_t equal_ltepegtest_record_15_ptr(pointer_t x, pointer_t y, actual_ltepegtest_record_15_t T){
        return equal_ltepegtest_record_15((ltepegtest_record_15_t)x, (ltepegtest_record_15_t)y);
}

char * json_ltepegtest_record_15_ptr(pointer_t x, actual_ltepegtest_record_15_t T){
        return json_ltepegtest_record_15((ltepegtest_record_15_t)x);
}

actual_ltepegtest_record_15_t actual_ltepegtest_record_15(){
        actual_ltepegtest_record_15_t new = (actual_ltepegtest_record_15_t)safe_malloc(sizeof(struct actual_ltepegtest_record_15_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegtest_record_15_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegtest_record_15_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegtest_record_15_ptr);
 

 
        return new;
 };

ltepegtest_record_15_t update_ltepegtest_record_15_scaf(ltepegtest_record_15_t x, ltepegtest_array_14_t v){
        ltepegtest_record_15_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_ltepegtest_array_14(x->scaf);};}
        else {y = copy_ltepegtest_record_15(x); x->count--; y->scaf->count--;};
        y->scaf = (ltepegtest_array_14_t)v;
        return y;}

ltepegtest_record_15_t update_ltepegtest_record_15_depth(ltepegtest_record_15_t x, uint64_t v){
        ltepegtest_record_15_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegtest_record_15(x); x->count--;};
        y->depth = (uint64_t)v;
        return y;}

ltepegtest_record_15_t update_ltepegtest_record_15_stack(ltepegtest_record_15_t x, ltepeg__ent_adt_t v){
        ltepegtest_record_15_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_ltepeg__ent_adt(x->stack);};}
        else {y = copy_ltepegtest_record_15(x); x->count--; y->stack->count--;};
        y->stack = (ltepeg__ent_adt_t)v;
        return y;}

ltepegtest_record_15_t update_ltepegtest_record_15_lflag(ltepegtest_record_15_t x, bool_t v){
        ltepegtest_record_15_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegtest_record_15(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}




ltepeg__ent_adt_t f_ltepegtest_closure_16(struct ltepegtest_closure_16_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        ltepegtest_funtype_8_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_ltepegtest_funtype_8(htbl, bvar, hash);
        ltepegtest_funtype_8_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            ltepeg__ent_adt_t result;
            result = (ltepeg__ent_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_ltepegtest_closure_16(bvar);};

return h_ltepegtest_closure_16(bvar);}

ltepeg__ent_adt_t m_ltepegtest_closure_16(struct ltepegtest_closure_16_s * closure, uint8_t bvar){
        return h_ltepegtest_closure_16(bvar);}

extern ltepeg__ent_adt_t h_ltepegtest_closure_16(uint8_t ivar_41){
        ltepeg__ent_adt_t result;
        result = (ltepeg__ent_adt_t)ltepeg__pending();
        if (result != NULL) result->count++;

        return result;
}

ltepegtest_closure_16_t new_ltepegtest_closure_16(void){
        static struct ltepegtest_funtype_8_ftbl_s ftbl = {.fptr = (ltepeg__ent_adt_t (*)(ltepegtest_funtype_8_t, uint8_t))&f_ltepegtest_closure_16, .mptr = (ltepeg__ent_adt_t (*)(ltepegtest_funtype_8_t, uint8_t))&m_ltepegtest_closure_16, .rptr =  (void (*)(ltepegtest_funtype_8_t))&release_ltepegtest_closure_16, .cptr = (ltepegtest_funtype_8_t (*)(ltepegtest_funtype_8_t))&copy_ltepegtest_closure_16};
        ltepegtest_closure_16_t tmp = (ltepegtest_closure_16_t) safe_malloc(sizeof(struct ltepegtest_closure_16_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegtest_closure_16(ltepegtest_funtype_8_t closure){
        ltepegtest_closure_16_t x = (ltepegtest_closure_16_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegtest_closure_16_t copy_ltepegtest_closure_16(ltepegtest_closure_16_t x){
        ltepegtest_closure_16_t y = new_ltepegtest_closure_16();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            ltepegtest_funtype_8_htbl_t new_htbl = (ltepegtest_funtype_8_htbl_t) safe_malloc(sizeof(struct ltepegtest_funtype_8_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegtest_funtype_8_hashentry_t * new_data = (ltepegtest_funtype_8_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegtest_funtype_8_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegtest_funtype_8_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_ltepegtest_funtype_17(ltepegtest_funtype_17_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegtest_funtype_17_t copy_ltepegtest_funtype_17(ltepegtest_funtype_17_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltepegtest_funtype_17(ltepegtest_funtype_17_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltepegtest_funtype_17_hashentry_t data = htbl->data[hashindex];
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

ltepegtest_funtype_17_t dupdate_ltepegtest_funtype_17(ltepegtest_funtype_17_t a, uint32_t i, ltepegtest_funtype_8_t v){
        ltepegtest_funtype_17_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltepegtest_funtype_17_htbl_t)safe_malloc(sizeof(struct ltepegtest_funtype_17_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltepegtest_funtype_17_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltepegtest_funtype_17_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltepegtest_funtype_17_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltepegtest_funtype_17_hashentry_t * new_data = (ltepegtest_funtype_17_hashentry_t *)safe_malloc(new_size * sizeof(struct ltepegtest_funtype_17_hashentry_s));
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
                                new_data[new_loc].value = (ltepegtest_funtype_8_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_ltepegtest_funtype_17(htbl, i, ihash);
        ltepegtest_funtype_17_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ltepegtest_funtype_8_t)v; htbl->num_entries++;}
            else {ltepegtest_funtype_8_t tempvalue;tempvalue = (ltepegtest_funtype_8_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ltepegtest_funtype_8_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ltepegtest_funtype_8(tempvalue);};
        return a;

}

ltepegtest_funtype_17_t update_ltepegtest_funtype_17(ltepegtest_funtype_17_t a, uint32_t i, ltepegtest_funtype_8_t v){
        if (a->count == 1){
                return dupdate_ltepegtest_funtype_17(a, i, v);
            } else {
                ltepegtest_funtype_17_t x = copy_ltepegtest_funtype_17(a);
                a->count--;
                return dupdate_ltepegtest_funtype_17(x, i, v);
            }}

bool_t equal_ltepegtest_funtype_17(ltepegtest_funtype_17_t x, ltepegtest_funtype_17_t y){
        return false;}

char* json_ltepegtest_funtype_17(ltepegtest_funtype_17_t x){char * result = safe_malloc(31); sprintf(result, "%s", "\"ltepegtest_funtype_17\""); return result;}


ltepegtest_record_18_t new_ltepegtest_record_18(void){
        ltepegtest_record_18_t tmp = (ltepegtest_record_18_t) safe_malloc(sizeof(struct ltepegtest_record_18_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegtest_record_18(ltepegtest_record_18_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepegtest_funtype_17(x->scaf);
         release_ltepeg__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegtest_record_18_ptr(pointer_t x, type_actual_t T){
        release_ltepegtest_record_18((ltepegtest_record_18_t)x);
}

ltepegtest_record_18_t copy_ltepegtest_record_18(ltepegtest_record_18_t x){
        ltepegtest_record_18_t y = new_ltepegtest_record_18();
        y->depth = (uint8_t)x->depth;
        y->lflag = (bool_t)x->lflag;
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->count = 1;
        return y;}

bool_t equal_ltepegtest_record_18(ltepegtest_record_18_t x, ltepegtest_record_18_t y){
        bool_t tmp = true;
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && x->lflag == y->lflag;
        tmp = tmp && equal_ltepegtest_funtype_17(x->scaf, y->scaf);
        tmp = tmp && equal_ltepeg__ent_adt(x->stack, y->stack);
        return tmp;}

char * json_ltepegtest_record_18(ltepegtest_record_18_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(17);
         sprintf(fld0, "\"depth\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->depth));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"lflag\" : ");
        tmp[1] = safe_strcat(fld1, json_bool(x->lflag));
        char * fld2 = safe_malloc(16);
         sprintf(fld2, "\"scaf\" : ");
        tmp[2] = safe_strcat(fld2, json_ltepegtest_funtype_17(x->scaf));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"stack\" : ");
        tmp[3] = safe_strcat(fld3, json_ltepeg__ent_adt(x->stack));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegtest_record_18_ptr(pointer_t x, pointer_t y, actual_ltepegtest_record_18_t T){
        return equal_ltepegtest_record_18((ltepegtest_record_18_t)x, (ltepegtest_record_18_t)y);
}

char * json_ltepegtest_record_18_ptr(pointer_t x, actual_ltepegtest_record_18_t T){
        return json_ltepegtest_record_18((ltepegtest_record_18_t)x);
}

actual_ltepegtest_record_18_t actual_ltepegtest_record_18(){
        actual_ltepegtest_record_18_t new = (actual_ltepegtest_record_18_t)safe_malloc(sizeof(struct actual_ltepegtest_record_18_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegtest_record_18_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegtest_record_18_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegtest_record_18_ptr);
 

 
        return new;
 };

ltepegtest_record_18_t update_ltepegtest_record_18_depth(ltepegtest_record_18_t x, uint8_t v){
        ltepegtest_record_18_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegtest_record_18(x); x->count--;};
        y->depth = (uint8_t)v;
        return y;}

ltepegtest_record_18_t update_ltepegtest_record_18_lflag(ltepegtest_record_18_t x, bool_t v){
        ltepegtest_record_18_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegtest_record_18(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}

ltepegtest_record_18_t update_ltepegtest_record_18_scaf(ltepegtest_record_18_t x, ltepegtest_funtype_17_t v){
        ltepegtest_record_18_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_ltepegtest_funtype_17(x->scaf);};}
        else {y = copy_ltepegtest_record_18(x); x->count--; y->scaf->count--;};
        y->scaf = (ltepegtest_funtype_17_t)v;
        return y;}

ltepegtest_record_18_t update_ltepegtest_record_18_stack(ltepegtest_record_18_t x, ltepeg__ent_adt_t v){
        ltepegtest_record_18_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_ltepeg__ent_adt(x->stack);};}
        else {y = copy_ltepegtest_record_18(x); x->count--; y->stack->count--;};
        y->stack = (ltepeg__ent_adt_t)v;
        return y;}




ltepegtest_funtype_8_t f_ltepegtest_closure_19(struct ltepegtest_closure_19_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        ltepegtest_funtype_17_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_ltepegtest_funtype_17(htbl, bvar, hash);
        ltepegtest_funtype_17_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            ltepegtest_funtype_8_t result;
            result = (ltepegtest_funtype_8_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_ltepegtest_closure_19(bvar, closure->fvar_1, closure->fvar_2);};

return h_ltepegtest_closure_19(bvar, closure->fvar_1, closure->fvar_2);}

ltepegtest_funtype_8_t m_ltepegtest_closure_19(struct ltepegtest_closure_19_s * closure, uint32_t bvar){
        return h_ltepegtest_closure_19(bvar, closure->fvar_1, closure->fvar_2);}

extern ltepegtest_funtype_8_t h_ltepegtest_closure_19(uint32_t ivar_54, uint32_t ivar_14, ltepegtest_funtype_8_t ivar_37){
        ltepegtest_funtype_8_t result;
        //copying to ltepegtest_funtype_8 from ltepegtest_funtype_8;
        result = (ltepegtest_funtype_8_t)ivar_37;
        if (result != NULL) result->count++;

        return result;
}

ltepegtest_closure_19_t new_ltepegtest_closure_19(void){
        static struct ltepegtest_funtype_17_ftbl_s ftbl = {.fptr = (ltepegtest_funtype_8_t (*)(ltepegtest_funtype_17_t, uint32_t))&f_ltepegtest_closure_19, .mptr = (ltepegtest_funtype_8_t (*)(ltepegtest_funtype_17_t, uint32_t))&m_ltepegtest_closure_19, .rptr =  (void (*)(ltepegtest_funtype_17_t))&release_ltepegtest_closure_19, .cptr = (ltepegtest_funtype_17_t (*)(ltepegtest_funtype_17_t))&copy_ltepegtest_closure_19};
        ltepegtest_closure_19_t tmp = (ltepegtest_closure_19_t) safe_malloc(sizeof(struct ltepegtest_closure_19_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltepegtest_closure_19(ltepegtest_funtype_17_t closure){
        ltepegtest_closure_19_t x = (ltepegtest_closure_19_t)closure;
        x->count--;
        if (x->count <= 0){
         release_ltepegtest_funtype_8(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

ltepegtest_closure_19_t copy_ltepegtest_closure_19(ltepegtest_closure_19_t x){
        ltepegtest_closure_19_t y = new_ltepegtest_closure_19();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            ltepegtest_funtype_17_htbl_t new_htbl = (ltepegtest_funtype_17_htbl_t) safe_malloc(sizeof(struct ltepegtest_funtype_17_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltepegtest_funtype_17_hashentry_t * new_data = (ltepegtest_funtype_17_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltepegtest_funtype_17_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltepegtest_funtype_17_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltepegtest_record_20_t new_ltepegtest_record_20(void){
        ltepegtest_record_20_t tmp = (ltepegtest_record_20_t) safe_malloc(sizeof(struct ltepegtest_record_20_s));
        tmp->count = 1;
        return tmp;}

void release_ltepegtest_record_20(ltepegtest_record_20_t x){
        x->count--;
        if (x->count <= 0){
         release_ltepegtest_record_15(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltepegtest_record_20_ptr(pointer_t x, type_actual_t T){
        release_ltepegtest_record_20((ltepegtest_record_20_t)x);
}

ltepegtest_record_20_t copy_ltepegtest_record_20(ltepegtest_record_20_t x){
        ltepegtest_record_20_t y = new_ltepegtest_record_20();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = (uint32_t)x->project_3;
        y->count = 1;
        return y;}

bool_t equal_ltepegtest_record_20(ltepegtest_record_20_t x, ltepegtest_record_20_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltepegtest_record_15(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        return tmp;}

char * json_ltepegtest_record_20(ltepegtest_record_20_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_ltepegtest_record_15(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_ltepegtest_record_20_ptr(pointer_t x, pointer_t y, actual_ltepegtest_record_20_t T){
        return equal_ltepegtest_record_20((ltepegtest_record_20_t)x, (ltepegtest_record_20_t)y);
}

char * json_ltepegtest_record_20_ptr(pointer_t x, actual_ltepegtest_record_20_t T){
        return json_ltepegtest_record_20((ltepegtest_record_20_t)x);
}

actual_ltepegtest_record_20_t actual_ltepegtest_record_20(){
        actual_ltepegtest_record_20_t new = (actual_ltepegtest_record_20_t)safe_malloc(sizeof(struct actual_ltepegtest_record_20_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegtest_record_20_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegtest_record_20_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegtest_record_20_ptr);
 

 
        return new;
 };

ltepegtest_record_20_t update_ltepegtest_record_20_project_1(ltepegtest_record_20_t x, ltepegtest_record_15_t v){
        ltepegtest_record_20_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_ltepegtest_record_15(x->project_1);};}
        else {y = copy_ltepegtest_record_20(x); x->count--; y->project_1->count--;};
        y->project_1 = (ltepegtest_record_15_t)v;
        return y;}

ltepegtest_record_20_t update_ltepegtest_record_20_project_2(ltepegtest_record_20_t x, uint8_t v){
        ltepegtest_record_20_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegtest_record_20(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

ltepegtest_record_20_t update_ltepegtest_record_20_project_3(ltepegtest_record_20_t x, uint32_t v){
        ltepegtest_record_20_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltepegtest_record_20(x); x->count--;};
        y->project_3 = (uint32_t)v;
        return y;}



void release_ltepegtest_funtype_21(ltepegtest_funtype_21_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltepegtest_funtype_21_t copy_ltepegtest_funtype_21(ltepegtest_funtype_21_t x){return x->ftbl->cptr(x);}

bool_t equal_ltepegtest_funtype_21(ltepegtest_funtype_21_t x, ltepegtest_funtype_21_t y){
        return false;}

char* json_ltepegtest_funtype_21(ltepegtest_funtype_21_t x){char * result = safe_malloc(31); sprintf(result, "%s", "\"ltepegtest_funtype_21\""); return result;}


ltepegtest_array_22_t new_ltepegtest_array_22(uint32_t size){
        ltepegtest_array_22_t tmp = (ltepegtest_array_22_t) safe_malloc(sizeof(struct ltepegtest_array_22_s) + (size * sizeof(ltepeg__prepeg_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_ltepegtest_array_22(ltepegtest_array_22_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_ltepeg__prepeg_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_ltepegtest_array_22_ptr(pointer_t x, type_actual_t T){
        release_ltepegtest_array_22((ltepegtest_array_22_t)x);
}

ltepegtest_array_22_t copy_ltepegtest_array_22(ltepegtest_array_22_t x){
        ltepegtest_array_22_t tmp = new_ltepegtest_array_22(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ltepegtest_array_22(ltepegtest_array_22_t x, ltepegtest_array_22_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_ltepeg__prepeg_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_ltepegtest_array_22(ltepegtest_array_22_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_ltepeg__prepeg_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltepegtest_array_22_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltepegtest_array_22((ltepegtest_array_22_t)x, (ltepegtest_array_22_t)y);
}

char * json_ltepegtest_array_22_ptr(pointer_t x, type_actual_t T){
        return json_ltepegtest_array_22((ltepegtest_array_22_t)x);
}

actual_ltepegtest_array_22_t actual_ltepegtest_array_22(){
        actual_ltepegtest_array_22_t new = (actual_ltepegtest_array_22_t)safe_malloc(sizeof(struct actual_ltepegtest_array_22_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltepegtest_array_22_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltepegtest_array_22_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltepegtest_array_22_ptr);
 

 
        return new;
 };

ltepegtest_array_22_t update_ltepegtest_array_22(ltepegtest_array_22_t x, uint32_t i, ltepeg__prepeg_adt_t v){
         ltepegtest_array_22_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ltepegtest_array_22(x);
                      x->count--;};
        ltepeg__prepeg_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepeg__prepeg_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

ltepegtest_array_22_t upgrade_ltepegtest_array_22(ltepegtest_array_22_t x, uint32_t i, ltepeg__prepeg_adt_t v){
         ltepegtest_array_22_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltepegtest_array_22_s) + (newmax * sizeof(ltepeg__prepeg_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltepegtest_array_22(x);} else {y = copy_ltepegtest_array_22(x);
                      x->count--;};
        ltepeg__prepeg_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltepeg__prepeg_adt(yelems[i]);};
         yelems[i] = v;
         return y;}



extern bool_t ltepegtest__digit(uint8_t ivar_1){
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
        
             result = (bool_t) false;
};

        
        return result;
}

extern bool_t ltepegtest__any(uint8_t ivar_1){
        bool_t  result;
        result = (bool_t) true;

        
        return result;
}

extern bool_t ltepegtest__whitespace(uint8_t ivar_1){
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
             
           result = (bool_t) false;
};
};

        
        return result;
}

extern ltepeg__prepeg_adt_t ltepegtest__ljson(uint8_t ivar_1){
        ltepeg__prepeg_adt_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             uint8_t ivar_10;
             ivar_10 = (uint8_t)18;
             uint8_t ivar_11;
             ivar_11 = (uint8_t)1;
             uint8_t ivar_12;
             ivar_12 = (uint8_t)2;
             result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_10, (uint8_t)ivar_11, (uint8_t)ivar_12);
} else {
        
             bool_t ivar_13;
             uint8_t ivar_15;
             ivar_15 = (uint8_t)1;
             ivar_13 = (ivar_1 == ivar_15);
             if (ivar_13){  
           uint8_t ivar_21;
           ivar_21 = (uint8_t)18;
           uint8_t ivar_22;
           ivar_22 = (uint8_t)1;
           uint8_t ivar_23;
           ivar_23 = (uint8_t)3;
           result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_21, (uint8_t)ivar_22, (uint8_t)ivar_23);
} else {
             
           bool_t ivar_24;
           uint8_t ivar_26;
           ivar_26 = (uint8_t)2;
           ivar_24 = (ivar_1 == ivar_26);
           if (ivar_24){   
           uint8_t ivar_32;
           ivar_32 = (uint8_t)27;
           uint8_t ivar_33;
           ivar_33 = (uint8_t)4;
           uint8_t ivar_34;
           ivar_34 = (uint8_t)6;
           result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_32, (uint8_t)ivar_33, (uint8_t)ivar_34);
} else {
           
           bool_t ivar_35;
           uint8_t ivar_37;
           ivar_37 = (uint8_t)3;
           ivar_35 = (ivar_1 == ivar_37);
           if (ivar_35){    
            uint8_t ivar_43;
            ivar_43 = (uint8_t)17;
            uint8_t ivar_44;
            ivar_44 = (uint8_t)3;
            uint8_t ivar_45;
            ivar_45 = (uint8_t)34;
            result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_43, (uint8_t)ivar_44, (uint8_t)ivar_45);
} else {
           
            bool_t ivar_46;
            uint8_t ivar_48;
            ivar_48 = (uint8_t)4;
            ivar_46 = (ivar_1 == ivar_48);
            if (ivar_46){     
             uint8_t ivar_54;
             ivar_54 = (uint8_t)28;
             uint8_t ivar_55;
             ivar_55 = (uint8_t)34;
             uint8_t ivar_56;
             ivar_56 = (uint8_t)5;
             result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_54, (uint8_t)ivar_55, (uint8_t)ivar_56);
} else {
            
             bool_t ivar_57;
             uint8_t ivar_59;
             ivar_59 = (uint8_t)5;
             ivar_57 = (ivar_1 == ivar_59);
             if (ivar_57){      
              uint8_t ivar_65;
              ivar_65 = (uint8_t)7;
              uint8_t ivar_66;
              ivar_66 = (uint8_t)11;
              uint8_t ivar_67;
              ivar_67 = (uint8_t)33;
              result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_65, (uint8_t)ivar_66, (uint8_t)ivar_67);
} else {
             
              bool_t ivar_68;
              uint8_t ivar_70;
              ivar_70 = (uint8_t)6;
              ivar_68 = (ivar_1 == ivar_70);
              if (ivar_68){       
               uint8_t ivar_76;
               ivar_76 = (uint8_t)7;
               uint8_t ivar_77;
               ivar_77 = (uint8_t)34;
               uint8_t ivar_78;
               ivar_78 = (uint8_t)10;
               result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_76, (uint8_t)ivar_77, (uint8_t)ivar_78);
} else {
              
               bool_t ivar_79;
               uint8_t ivar_81;
               ivar_81 = (uint8_t)7;
               ivar_79 = (ivar_1 == ivar_81);
               if (ivar_79){        
                uint8_t ivar_87;
                ivar_87 = (uint8_t)24;
                uint8_t ivar_88;
                ivar_88 = (uint8_t)8;
                uint8_t ivar_89;
                ivar_89 = (uint8_t)33;
                result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_87, (uint8_t)ivar_88, (uint8_t)ivar_89);
} else {
               
                bool_t ivar_90;
                uint8_t ivar_92;
                ivar_92 = (uint8_t)8;
                ivar_90 = (ivar_1 == ivar_92);
                if (ivar_90){         
                 uint8_t ivar_98;
                 ivar_98 = (uint8_t)24;
                 uint8_t ivar_99;
                 ivar_99 = (uint8_t)3;
                 uint8_t ivar_100;
                 ivar_100 = (uint8_t)9;
                 result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_98, (uint8_t)ivar_99, (uint8_t)ivar_100);
} else {
                
                 bool_t ivar_101;
                 uint8_t ivar_103;
                 ivar_103 = (uint8_t)9;
                 ivar_101 = (ivar_1 == ivar_103);
                 if (ivar_101){          
                  uint8_t ivar_109;
                  ivar_109 = (uint8_t)19;
                  uint8_t ivar_110;
                  ivar_110 = (uint8_t)8;
                  uint8_t ivar_111;
                  ivar_111 = (uint8_t)33;
                  result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_109, (uint8_t)ivar_110, (uint8_t)ivar_111);
} else {
                 
                  bool_t ivar_112;
                  uint8_t ivar_114;
                  ivar_114 = (uint8_t)10;
                  ivar_112 = (ivar_1 == ivar_114);
                  if (ivar_112){           
                   uint8_t ivar_120;
                   ivar_120 = (uint8_t)29;
                   uint8_t ivar_121;
                   ivar_121 = (uint8_t)14;
                   uint8_t ivar_122;
                   ivar_122 = (uint8_t)33;
                   result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_120, (uint8_t)ivar_121, (uint8_t)ivar_122);
} else {
                  
                   bool_t ivar_123;
                   uint8_t ivar_125;
                   ivar_125 = (uint8_t)11;
                   ivar_123 = (ivar_1 == ivar_125);
                   if (ivar_123){            
                    uint8_t ivar_131;
                    ivar_131 = (uint8_t)32;
                    uint8_t ivar_132;
                    ivar_132 = (uint8_t)12;
                    uint8_t ivar_133;
                    ivar_133 = (uint8_t)33;
                    result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_131, (uint8_t)ivar_132, (uint8_t)ivar_133);
} else {
                   
                    bool_t ivar_134;
                    uint8_t ivar_136;
                    ivar_136 = (uint8_t)12;
                    ivar_134 = (ivar_1 == ivar_136);
                    if (ivar_134){             
                     uint8_t ivar_142;
                     ivar_142 = (uint8_t)0;
                     uint8_t ivar_143;
                     ivar_143 = (uint8_t)13;
                     uint8_t ivar_144;
                     ivar_144 = (uint8_t)33;
                     result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_142, (uint8_t)ivar_143, (uint8_t)ivar_144);
} else {
                    
                     bool_t ivar_145;
                     uint8_t ivar_147;
                     ivar_147 = (uint8_t)13;
                     ivar_145 = (ivar_1 == ivar_147);
                     if (ivar_145){              
                      uint8_t ivar_153;
                      ivar_153 = (uint8_t)31;
                      uint8_t ivar_154;
                      ivar_154 = (uint8_t)4;
                      uint8_t ivar_155;
                      ivar_155 = (uint8_t)28;
                      result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_153, (uint8_t)ivar_154, (uint8_t)ivar_155);
} else {
                     
                      bool_t ivar_156;
                      uint8_t ivar_158;
                      ivar_158 = (uint8_t)14;
                      ivar_156 = (ivar_1 == ivar_158);
                      if (ivar_156){               
                       uint8_t ivar_164;
                       ivar_164 = (uint8_t)30;
                       uint8_t ivar_165;
                       ivar_165 = (uint8_t)3;
                       uint8_t ivar_166;
                       ivar_166 = (uint8_t)16;
                       result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_164, (uint8_t)ivar_165, (uint8_t)ivar_166);
} else {
                      
                       bool_t ivar_167;
                       uint8_t ivar_169;
                       ivar_169 = (uint8_t)15;
                       ivar_167 = (ivar_1 == ivar_169);
                       if (ivar_167){                
                        uint8_t ivar_175;
                        ivar_175 = (uint8_t)31;
                        uint8_t ivar_176;
                        ivar_176 = (uint8_t)16;
                        uint8_t ivar_177;
                        ivar_177 = (uint8_t)30;
                        result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_175, (uint8_t)ivar_176, (uint8_t)ivar_177);
} else {
                       
                        bool_t ivar_178;
                        uint8_t ivar_180;
                        ivar_180 = (uint8_t)16;
                        ivar_178 = (ivar_1 == ivar_180);
                        if (ivar_178){                 
                         uint8_t ivar_186;
                         ivar_186 = (uint8_t)0;
                         uint8_t ivar_187;
                         ivar_187 = (uint8_t)15;
                         uint8_t ivar_188;
                         ivar_188 = (uint8_t)33;
                         result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_186, (uint8_t)ivar_187, (uint8_t)ivar_188);
} else {
                        
                         bool_t ivar_189;
                         uint8_t ivar_191;
                         ivar_191 = (uint8_t)17;
                         ivar_189 = (ivar_1 == ivar_191);
                         if (ivar_189){                  
                          ltepegtest_funtype_0_t ivar_199;
                          ltepegtest_closure_1_t cl96405;
                          cl96405 = new_ltepegtest_closure_1();
                          ivar_199 = (ltepegtest_funtype_0_t)cl96405;
                          result = (ltepeg__prepeg_adt_t)ltepeg__any((ltepeg_funtype_29_t)ivar_199);
} else {
                         
                          bool_t ivar_201;
                          uint8_t ivar_203;
                          ivar_203 = (uint8_t)18;
                          ivar_201 = (ivar_1 == ivar_203);
                          if (ivar_201){                   
                           ltepegtest_funtype_0_t ivar_211;
                           ltepegtest_closure_2_t cl96407;
                           cl96407 = new_ltepegtest_closure_2();
                           ivar_211 = (ltepegtest_funtype_0_t)cl96407;
                           result = (ltepeg__prepeg_adt_t)ltepeg__any((ltepeg_funtype_29_t)ivar_211);
} else {
                          
                           bool_t ivar_213;
                           uint8_t ivar_215;
                           ivar_215 = (uint8_t)19;
                           ivar_213 = (ivar_1 == ivar_215);
                           if (ivar_213){                    
                            ltepegtest_funtype_0_t ivar_223;
                            ltepegtest_closure_3_t cl96409;
                            cl96409 = new_ltepegtest_closure_3();
                            ivar_223 = (ltepegtest_funtype_0_t)cl96409;
                            result = (ltepeg__prepeg_adt_t)ltepeg__any((ltepeg_funtype_29_t)ivar_223);
} else {
                           
                            bool_t ivar_225;
                            uint8_t ivar_227;
                            ivar_227 = (uint8_t)20;
                            ivar_225 = (ivar_1 == ivar_227);
                            if (ivar_225){                     
                             uint8_t ivar_231;
                             ivar_231 = (uint8_t)123;
                             result = (ltepeg__prepeg_adt_t)ltepeg__terminal((uint8_t)ivar_231);
} else {
                            
                             bool_t ivar_232;
                             uint8_t ivar_234;
                             ivar_234 = (uint8_t)21;
                             ivar_232 = (ivar_1 == ivar_234);
                             if (ivar_232){                      
                              uint8_t ivar_238;
                              ivar_238 = (uint8_t)125;
                              result = (ltepeg__prepeg_adt_t)ltepeg__terminal((uint8_t)ivar_238);
} else {
                             
                              bool_t ivar_239;
                              uint8_t ivar_241;
                              ivar_241 = (uint8_t)22;
                              ivar_239 = (ivar_1 == ivar_241);
                              if (ivar_239){                       
                               uint8_t ivar_245;
                               ivar_245 = (uint8_t)91;
                               result = (ltepeg__prepeg_adt_t)ltepeg__terminal((uint8_t)ivar_245);
} else {
                              
                               bool_t ivar_246;
                               uint8_t ivar_248;
                               ivar_248 = (uint8_t)23;
                               ivar_246 = (ivar_1 == ivar_248);
                               if (ivar_246){                        
                                uint8_t ivar_252;
                                ivar_252 = (uint8_t)93;
                                result = (ltepeg__prepeg_adt_t)ltepeg__terminal((uint8_t)ivar_252);
} else {
                               
                                bool_t ivar_253;
                                uint8_t ivar_255;
                                ivar_255 = (uint8_t)24;
                                ivar_253 = (ivar_1 == ivar_255);
                                if (ivar_253){                         
                                 uint8_t ivar_259;
                                 ivar_259 = (uint8_t)34;
                                 result = (ltepeg__prepeg_adt_t)ltepeg__terminal((uint8_t)ivar_259);
} else {
                                
                                 bool_t ivar_260;
                                 uint8_t ivar_262;
                                 ivar_262 = (uint8_t)25;
                                 ivar_260 = (ivar_1 == ivar_262);
                                 if (ivar_260){                          
                                  uint8_t ivar_266;
                                  ivar_266 = (uint8_t)44;
                                  result = (ltepeg__prepeg_adt_t)ltepeg__terminal((uint8_t)ivar_266);
} else {
                                 
                                  bool_t ivar_267;
                                  uint8_t ivar_269;
                                  ivar_269 = (uint8_t)26;
                                  ivar_267 = (ivar_1 == ivar_269);
                                  if (ivar_267){                           
                                   uint8_t ivar_273;
                                   ivar_273 = (uint8_t)58;
                                   result = (ltepeg__prepeg_adt_t)ltepeg__terminal((uint8_t)ivar_273);
} else {
                                  
                                   bool_t ivar_274;
                                   uint8_t ivar_276;
                                   ivar_276 = (uint8_t)27;
                                   ivar_274 = (ivar_1 == ivar_276);
                                   if (ivar_274){                            
                                    uint8_t ivar_282;
                                    ivar_282 = (uint8_t)20;
                                    uint8_t ivar_283;
                                    ivar_283 = (uint8_t)3;
                                    uint8_t ivar_284;
                                    ivar_284 = (uint8_t)33;
                                    result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_282, (uint8_t)ivar_283, (uint8_t)ivar_284);
} else {
                                   
                                    bool_t ivar_285;
                                    uint8_t ivar_287;
                                    ivar_287 = (uint8_t)28;
                                    ivar_285 = (ivar_1 == ivar_287);
                                    if (ivar_285){                             
                                     uint8_t ivar_293;
                                     ivar_293 = (uint8_t)21;
                                     uint8_t ivar_294;
                                     ivar_294 = (uint8_t)3;
                                     uint8_t ivar_295;
                                     ivar_295 = (uint8_t)33;
                                     result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_293, (uint8_t)ivar_294, (uint8_t)ivar_295);
} else {
                                    
                                     bool_t ivar_296;
                                     uint8_t ivar_298;
                                     ivar_298 = (uint8_t)29;
                                     ivar_296 = (ivar_1 == ivar_298);
                                     if (ivar_296){                              
                                      uint8_t ivar_304;
                                      ivar_304 = (uint8_t)22;
                                      uint8_t ivar_305;
                                      ivar_305 = (uint8_t)3;
                                      uint8_t ivar_306;
                                      ivar_306 = (uint8_t)33;
                                      result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_304, (uint8_t)ivar_305, (uint8_t)ivar_306);
} else {
                                     
                                      bool_t ivar_307;
                                      uint8_t ivar_309;
                                      ivar_309 = (uint8_t)30;
                                      ivar_307 = (ivar_1 == ivar_309);
                                      if (ivar_307){                               
                                       uint8_t ivar_315;
                                       ivar_315 = (uint8_t)23;
                                       uint8_t ivar_316;
                                       ivar_316 = (uint8_t)3;
                                       uint8_t ivar_317;
                                       ivar_317 = (uint8_t)33;
                                       result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_315, (uint8_t)ivar_316, (uint8_t)ivar_317);
} else {
                                      
                                       bool_t ivar_318;
                                       uint8_t ivar_320;
                                       ivar_320 = (uint8_t)31;
                                       ivar_318 = (ivar_1 == ivar_320);
                                       if (ivar_318){                                
                                        uint8_t ivar_326;
                                        ivar_326 = (uint8_t)25;
                                        uint8_t ivar_327;
                                        ivar_327 = (uint8_t)3;
                                        uint8_t ivar_328;
                                        ivar_328 = (uint8_t)33;
                                        result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_326, (uint8_t)ivar_327, (uint8_t)ivar_328);
} else {
                                       
                                        bool_t ivar_329;
                                        uint8_t ivar_331;
                                        ivar_331 = (uint8_t)32;
                                        ivar_329 = (ivar_1 == ivar_331);
                                        if (ivar_329){                                 
                                         uint8_t ivar_337;
                                         ivar_337 = (uint8_t)26;
                                         uint8_t ivar_338;
                                         ivar_338 = (uint8_t)3;
                                         uint8_t ivar_339;
                                         ivar_339 = (uint8_t)33;
                                         result = (ltepeg__prepeg_adt_t)ltepeg__lte((uint8_t)ivar_337, (uint8_t)ivar_338, (uint8_t)ivar_339);
} else {
                                        
                                         bool_t ivar_340;
                                         uint8_t ivar_342;
                                         ivar_342 = (uint8_t)33;
                                         ivar_340 = (ivar_1 == ivar_342);
                                         if (ivar_340){                                  
                                          result = (ltepeg__prepeg_adt_t)ltepeg__failure();
                                          if (result != NULL) result->count++;
} else {
                                         
                                          result = (ltepeg__prepeg_adt_t)ltepeg__epsilon();
                                          if (result != NULL) result->count++;
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};
};

        
        return result;
}

extern ltepegtest_array_4_t ltepegtest__empty(uint8_t ivar_1){
        ltepegtest_array_4_t  result;
        uint32_t size96431;
        //copying to uint32 from uint8;
        size96431 = (uint32_t)ivar_1;
        size96431 += 0;
        result = new_ltepegtest_array_4(size96431);
        uint8_t ivar_2;
        for (uint32_t index96430 = 0; index96430 < size96431; index96430++){
             ivar_2 = (uint8_t)index96430;
             result->elems[index96430] = (uint8_t)32;
        };

        
        return result;
}

extern ltepegtest_funtype_6_t ltepegtest__cat(uint8_t ivar_1, uint8_t ivar_2){
        ltepegtest_funtype_6_t  result;
        ltepegtest_closure_7_t cl96463;
        cl96463 = new_ltepegtest_closure_7();
        cl96463->fvar_1 = (uint8_t)ivar_1;
        cl96463->fvar_2 = (uint8_t)ivar_2;
        result = (ltepegtest_funtype_6_t)cl96463;

        
        return result;
}

extern uint8_t ltepegtest__tok0(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)39;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)116;
} else {
             
           bool_t ivar_10;
           uint8_t ivar_12;
           ivar_12 = (uint8_t)2;
           ivar_10 = (ivar_1 == ivar_12);
           if (ivar_10){   
           result = (uint8_t)111;
} else {
           
           bool_t ivar_14;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)3;
           ivar_14 = (ivar_1 == ivar_16);
           if (ivar_14){    
            result = (uint8_t)107;
} else {
           
            bool_t ivar_18;
            uint8_t ivar_20;
            ivar_20 = (uint8_t)4;
            ivar_18 = (ivar_1 == ivar_20);
            if (ivar_18){     
             result = (uint8_t)101;
} else {
            
             bool_t ivar_22;
             uint8_t ivar_24;
             ivar_24 = (uint8_t)5;
             ivar_22 = (ivar_1 == ivar_24);
             if (ivar_22){      
              result = (uint8_t)110;
} else {
             
              result = (uint8_t)39;
};
};
};
};
};
};

        
        return result;
}

extern uint8_t ltepegtest__tok1(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)39;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)116;
} else {
             
           bool_t ivar_10;
           uint8_t ivar_12;
           ivar_12 = (uint8_t)2;
           ivar_10 = (ivar_1 == ivar_12);
           if (ivar_10){   
           result = (uint8_t)111;
} else {
           
           bool_t ivar_14;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)3;
           ivar_14 = (ivar_1 == ivar_16);
           if (ivar_14){    
            result = (uint8_t)107;
} else {
           
            bool_t ivar_18;
            uint8_t ivar_20;
            ivar_20 = (uint8_t)4;
            ivar_18 = (ivar_1 == ivar_20);
            if (ivar_18){     
             result = (uint8_t)101;
} else {
            
             bool_t ivar_22;
             uint8_t ivar_24;
             ivar_24 = (uint8_t)5;
             ivar_22 = (ivar_1 == ivar_24);
             if (ivar_22){      
              result = (uint8_t)110;
} else {
             
              bool_t ivar_26;
              uint8_t ivar_28;
              ivar_28 = (uint8_t)6;
              ivar_26 = (ivar_1 == ivar_28);
              if (ivar_26){       
               result = (uint8_t)92;
} else {
              
               bool_t ivar_30;
               uint8_t ivar_32;
               ivar_32 = (uint8_t)7;
               ivar_30 = (ivar_1 == ivar_32);
               if (ivar_30){        
                result = (uint8_t)39;
} else {
               
                result = (uint8_t)39;
};
};
};
};
};
};
};
};

        
        return result;
}

extern uint8_t ltepegtest__emptydict(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)123;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)32;
} else {
             
           bool_t ivar_10;
           uint8_t ivar_12;
           ivar_12 = (uint8_t)2;
           ivar_10 = (ivar_1 == ivar_12);
           if (ivar_10){   
           result = (uint8_t)32;
} else {
           
           bool_t ivar_14;
           uint8_t ivar_16;
           ivar_16 = (uint8_t)3;
           ivar_14 = (ivar_1 == ivar_16);
           if (ivar_14){    
            result = (uint8_t)32;
} else {
           
            bool_t ivar_18;
            uint8_t ivar_20;
            ivar_20 = (uint8_t)4;
            ivar_18 = (ivar_1 == ivar_20);
            if (ivar_18){     
             result = (uint8_t)32;
} else {
            
             bool_t ivar_22;
             uint8_t ivar_24;
             ivar_24 = (uint8_t)5;
             ivar_22 = (ivar_1 == ivar_24);
             if (ivar_22){      
              result = (uint8_t)32;
} else {
             
              bool_t ivar_26;
              uint8_t ivar_28;
              ivar_28 = (uint8_t)6;
              ivar_26 = (ivar_1 == ivar_28);
              if (ivar_26){       
               result = (uint8_t)32;
} else {
              
               bool_t ivar_30;
               uint8_t ivar_32;
               ivar_32 = (uint8_t)7;
               ivar_30 = (ivar_1 == ivar_32);
               if (ivar_30){        
                result = (uint8_t)125;
} else {
               
                result = (uint8_t)32;
};
};
};
};
};
};
};
};

        
        return result;
}

extern uint8_t ltepegtest__obrace(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)123;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)32;
} else {
             
           result = (uint8_t)32;
};
};

        
        return result;
}

extern uint8_t ltepegtest__cbrace(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)125;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)32;
} else {
             
           result = (uint8_t)32;
};
};

        
        return result;
}

extern uint8_t ltepegtest__colon(uint8_t ivar_1){
        uint8_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             result = (uint8_t)58;
} else {
        
             bool_t ivar_6;
             uint8_t ivar_8;
             ivar_8 = (uint8_t)1;
             ivar_6 = (ivar_1 == ivar_8);
             if (ivar_6){  
           result = (uint8_t)32;
} else {
             
           result = (uint8_t)32;
};
};

        
        return result;
}

extern ltepegtest_array_4_t ltepegtest__emptydict2(void){
        ltepegtest_array_4_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    ltepegtest_funtype_6_t ivar_7;
        uint8_t ivar_12;
        ivar_12 = (uint8_t)3;
        uint8_t ivar_13;
        ivar_13 = (uint8_t)3;
        ivar_7 = (ltepegtest_funtype_6_t)ltepegtest__cat((uint8_t)ivar_12, (uint8_t)ivar_13);
        ltepegtest_array_4_t ivar_26;
        ivar_26 = new_ltepegtest_array_4(3);
        uint8_t ivar_3;
        for (uint32_t index96473 = 0; index96473 < 3; index96473++){
             ivar_3 = (uint8_t)index96473;
             ivar_26->elems[index96473] = (uint8_t)ltepegtest__obrace((uint8_t)ivar_3);
        };
        ltepegtest_array_4_t ivar_27;
        ivar_27 = new_ltepegtest_array_4(3);
        uint8_t ivar_4;
        for (uint32_t index96474 = 0; index96474 < 3; index96474++){
             ivar_4 = (uint8_t)index96474;
             ivar_27->elems[index96474] = (uint8_t)ltepegtest__cbrace((uint8_t)ivar_4);
        };
        result = (ltepegtest_array_4_t)ivar_7->ftbl->mptr(ivar_7, ivar_26, ivar_27);
        ivar_7->ftbl->rptr(ivar_7);

        defined = true;};
        
        return result;
}

extern ltepegtest_array_4_t ltepegtest__dict1(void){
        ltepegtest_array_4_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    ltepegtest_funtype_6_t ivar_84;
        uint8_t ivar_89;
        ivar_89 = (uint8_t)3;
        uint8_t ivar_90;
        ivar_90 = (uint8_t)19;
        ivar_84 = (ltepegtest_funtype_6_t)ltepegtest__cat((uint8_t)ivar_89, (uint8_t)ivar_90);
        ltepegtest_array_4_t ivar_103;
        ivar_103 = new_ltepegtest_array_4(3);
        uint8_t ivar_3;
        for (uint32_t index96499 = 0; index96499 < 3; index96499++){
             ivar_3 = (uint8_t)index96499;
             ivar_103->elems[index96499] = (uint8_t)ltepegtest__obrace((uint8_t)ivar_3);
        };
        ltepegtest_array_4_t ivar_104;
        ltepegtest_funtype_6_t ivar_61;
        uint8_t ivar_66;
        ivar_66 = (uint8_t)7;
        uint8_t ivar_67;
        ivar_67 = (uint8_t)12;
        ivar_61 = (ltepegtest_funtype_6_t)ltepegtest__cat((uint8_t)ivar_66, (uint8_t)ivar_67);
        ltepegtest_array_4_t ivar_80;
        ivar_80 = new_ltepegtest_array_4(7);
        uint8_t ivar_6;
        for (uint32_t index96504 = 0; index96504 < 7; index96504++){
             ivar_6 = (uint8_t)index96504;
             ivar_80->elems[index96504] = (uint8_t)ltepegtest__tok0((uint8_t)ivar_6);
        };
        ltepegtest_array_4_t ivar_81;
        ltepegtest_funtype_6_t ivar_38;
        uint8_t ivar_43;
        ivar_43 = (uint8_t)3;
        uint8_t ivar_44;
        ivar_44 = (uint8_t)9;
        ivar_38 = (ltepegtest_funtype_6_t)ltepegtest__cat((uint8_t)ivar_43, (uint8_t)ivar_44);
        ltepegtest_array_4_t ivar_57;
        ivar_57 = new_ltepegtest_array_4(3);
        uint8_t ivar_9;
        for (uint32_t index96509 = 0; index96509 < 3; index96509++){
             ivar_9 = (uint8_t)index96509;
             ivar_57->elems[index96509] = (uint8_t)ltepegtest__colon((uint8_t)ivar_9);
        };
        ltepegtest_array_4_t ivar_58;
        ltepegtest_funtype_6_t ivar_15;
        uint8_t ivar_20;
        ivar_20 = (uint8_t)6;
        uint8_t ivar_21;
        ivar_21 = (uint8_t)3;
        ivar_15 = (ltepegtest_funtype_6_t)ltepegtest__cat((uint8_t)ivar_20, (uint8_t)ivar_21);
        ltepegtest_array_4_t ivar_34;
        ivar_34 = (ltepegtest_array_4_t)ltepegtest__emptydict2();
        if (ivar_34 != NULL) ivar_34->count++;
        ltepegtest_array_4_t ivar_35;
        ivar_35 = new_ltepegtest_array_4(3);
        uint8_t ivar_12;
        for (uint32_t index96514 = 0; index96514 < 3; index96514++){
             ivar_12 = (uint8_t)index96514;
             ivar_35->elems[index96514] = (uint8_t)ltepegtest__cbrace((uint8_t)ivar_12);
        };
        ivar_58 = (ltepegtest_array_4_t)ivar_15->ftbl->mptr(ivar_15, ivar_34, ivar_35);
        ivar_15->ftbl->rptr(ivar_15);
        ivar_81 = (ltepegtest_array_4_t)ivar_38->ftbl->mptr(ivar_38, ivar_57, ivar_58);
        ivar_38->ftbl->rptr(ivar_38);
        ivar_104 = (ltepegtest_array_4_t)ivar_61->ftbl->mptr(ivar_61, ivar_80, ivar_81);
        ivar_61->ftbl->rptr(ivar_61);
        result = (ltepegtest_array_4_t)ivar_84->ftbl->mptr(ivar_84, ivar_103, ivar_104);
        ivar_84->ftbl->rptr(ivar_84);

        defined = true;};
        
        return result;
}

extern ltepeg__ent_adt_t ltepegtest__iparse(uint8_t ivar_1, ltepeg__lang_spec_t ivar_2, ltepegtest_array_4_t ivar_3, uint8_t ivar_4, uint8_t ivar_5){
        ltepeg__ent_adt_t  result;
        /* pend */ ltepegtest_funtype_8_t ivar_6;
        ltepegtest_closure_9_t cl96565;
        cl96565 = new_ltepegtest_closure_9();
        ivar_6 = (ltepegtest_funtype_8_t)cl96565;
        ltepegtest_record_11_t ivar_79;
        uint8_t ivar_17;
        ivar_17 = (uint8_t)1;
        bool_t ivar_18;
        ivar_18 = (bool_t) false;
        ltepegtest_funtype_10_t ivar_46;
        ltepeg__ent_adt_t ivar_26;
        uint8_t ivar_33;
        ivar_33 = (uint8_t)0;
        uint32_t ivar_30;
        //copying to uint32 from uint8;
        ivar_30 = (uint32_t)ivar_33;
        uint8_t ivar_31;
        ivar_31 = (uint8_t)ltepeg__num_non_terminals();
        ivar_26 = (ltepeg__ent_adt_t)ltepeg__push((uint32_t)ivar_30, (uint8_t)ivar_31);
        ltepegtest_funtype_10_t ivar_34;
        ltepegtest_closure_12_t cl96587;
        cl96587 = new_ltepegtest_closure_12();
        cl96587->fvar_1 = (uint8_t)ivar_1;
        cl96587->fvar_2 = (ltepegtest_funtype_8_t)ivar_6;
        if (cl96587->fvar_2 != NULL) cl96587->fvar_2->count++;
        release_ltepegtest_funtype_8(ivar_6);
        ivar_34 = (ltepegtest_funtype_10_t)cl96587;
        ltepegtest_funtype_8_t ivar_35;
        ivar_35 = (ltepegtest_funtype_8_t)ivar_34->ftbl->fptr(ivar_34, ivar_4);
        ltepegtest_funtype_10_t ivar_42;
        ltepegtest_funtype_8_t ivar_44;
        ivar_44 = NULL;
        ivar_42 = (ltepegtest_funtype_10_t)update_ltepegtest_funtype_10(ivar_34, ivar_4, ivar_44);
        if (ivar_44 != NULL) ivar_44->count--;
        ltepegtest_funtype_8_t ivar_43;
        ltepegtest_funtype_8_t ivar_38;
        ltepeg__ent_adt_t ivar_40;
        ivar_40 = NULL;
        ivar_38 = (ltepegtest_funtype_8_t)update_ltepegtest_funtype_8(ivar_35, ivar_5, ivar_40);
        if (ivar_40 != NULL) ivar_40->count--;
        ivar_43 = (ltepegtest_funtype_8_t)update_ltepegtest_funtype_8(ivar_38, ivar_5, ivar_26);
        if (ivar_26 != NULL) ivar_26->count--;
        ivar_46 = (ltepegtest_funtype_10_t)update_ltepegtest_funtype_10(ivar_42, ivar_4, ivar_43);
        if (ivar_43 != NULL) ivar_43->count--;
        ltepeg__ent_adt_t ivar_52;
        uint32_t ivar_50;
        //copying to uint32 from uint8;
        ivar_50 = (uint32_t)ivar_4;
        ivar_52 = (ltepeg__ent_adt_t)ltepeg__push((uint32_t)ivar_50, (uint8_t)ivar_5);
        ltepegtest_record_11_t tmp96621 = new_ltepegtest_record_11();;
        ivar_79 = (ltepegtest_record_11_t)tmp96621;
        tmp96621->depth = (uint8_t)ivar_17;
        tmp96621->lflag = (bool_t)ivar_18;
        tmp96621->scaf = (ltepegtest_funtype_10_t)ivar_46;
        tmp96621->stack = (ltepeg__ent_adt_t)ivar_52;
        /* St */ ltepegtest_record_15_t ivar_11;
        //copying to ltepegtest_record_15 from ltepegtest_record_11;
        {
         ivar_11 = new_ltepegtest_record_15();
         uint32_t tmp96642;
         //copying to uint32 from uint8;
         tmp96642 = (uint32_t)ivar_1;
         tmp96642 += 1;
         ivar_11->scaf = new_ltepegtest_array_14(tmp96642);
         for (uint32_t index_80 = 0; index_80 < tmp96642; index_80++){
                 uint32_t tmp96644;
                 tmp96644 = (uint32_t)255;
                 ivar_11->scaf->elems[index_80] = new_ltepegtest_array_13(tmp96644);
                 for (uint32_t index_81 = 0; index_81 < tmp96644; index_81++){
                  ivar_11->scaf->elems[index_80]->elems[index_81] = (ltepeg__ent_adt_t)ivar_79->scaf->ftbl->fptr(ivar_79->scaf, index_80)->ftbl->fptr(ivar_79->scaf->ftbl->fptr(ivar_79->scaf, index_80), index_81);
                  if (ivar_11->scaf->elems[index_80]->elems[index_81] != NULL) ivar_11->scaf->elems[index_80]->elems[index_81]->count++;
                 };
         };
         ivar_11->depth = (uint64_t)ivar_79->depth;
         ivar_11->stack = (ltepeg__ent_adt_t)ivar_79->stack;
         if (ivar_11->stack != NULL) ivar_11->stack->count++;
         ivar_11->lflag = (bool_t)ivar_79->lflag;
        };
        release_ltepegtest_record_11(ivar_79);
        ltepegtest_array_13_t ivar_55;
        ltepegtest_array_14_t ivar_59;
        ltepegtest_record_15_t ivar_75;
        uint32_t ivar_68;
        //copying to uint32 from uint8;
        ivar_68 = (uint32_t)ivar_1;
        uint32_t ivar_71;
        //copying to uint32 from uint8;
        ivar_71 = (uint32_t)ivar_4;
        ivar_75 = (ltepegtest_record_15_t)ltepeg__parse((uint32_t)ivar_68, (ltepeg__lang_spec_t)ivar_2, (ltepeg_array_83_t)ivar_3, (uint32_t)ivar_71, (uint8_t)ivar_5, (ltepeg_record_101_t)ivar_11);
        ivar_59 = (ltepegtest_array_14_t)ivar_75->scaf;
        ivar_59->count++;
        release_ltepegtest_record_15(ivar_75);
        ivar_55 = (ltepegtest_array_13_t)ivar_59->elems[ivar_4];
        ivar_55->count++;
        release_ltepegtest_array_14(ivar_59);
        result = (ltepeg__ent_adt_t)ivar_55->elems[ivar_5];
        result->count++;
        release_ltepegtest_array_13(ivar_55);

        
        return result;
}

extern ltepegproof__parsetree_adt_t ltepegtest__jsonparsefile(bytestrings__bytestring_t ivar_1){
        ltepegproof__parsetree_adt_t  result;
        /* lf */ file__lifted_file_adt_t ivar_2;
        ivar_2 = (file__lifted_file_adt_t)file__open((bytestrings__bytestring_t)ivar_1);
        bool_t ivar_6;
        ivar_2->count++;
        ivar_6 = (bool_t)r_file__passp((file__lifted_file_adt_t)ivar_2);
        if (ivar_6){ 
             /* f */ file__file_t ivar_10;
             ivar_10 = (file__file_t)file__lifted_file_adt_contents((file__lifted_file_adt_t)ivar_2);
             /* fs */ uint32_t ivar_14;
             ivar_10->count++;
             ivar_14 = (uint32_t)file__file_size((file__file_t)ivar_10);
             /* fstr */ bytestrings__bytestring_t ivar_18;
             uint8_t ivar_36;
             ivar_36 = (uint8_t)0;
             uint32_t ivar_24;
             //copying to uint32 from uint8;
             ivar_24 = (uint32_t)ivar_36;
             ivar_10->count++;
             ivar_18 = (bytestrings__bytestring_t)file__getbytestring((file__file_t)ivar_10, (uint32_t)ivar_24, (uint32_t)ivar_14);
             /* pend */ ltepegtest_funtype_8_t ivar_37;
             ltepegtest_closure_16_t cl96766;
             cl96766 = new_ltepegtest_closure_16();
             ivar_37 = (ltepegtest_funtype_8_t)cl96766;
             ltepegtest_record_18_t ivar_138;
             uint8_t ivar_48;
             ivar_48 = (uint8_t)1;
             bool_t ivar_49;
             ivar_49 = (bool_t) false;
             ltepegtest_funtype_17_t ivar_77;
             ltepeg__ent_adt_t ivar_57;
             uint8_t ivar_64;
             ivar_64 = (uint8_t)0;
             uint32_t ivar_61;
             //copying to uint32 from uint8;
             ivar_61 = (uint32_t)ivar_64;
             uint8_t ivar_62;
             ivar_62 = (uint8_t)ltepeg__num_non_terminals();
             ivar_57 = (ltepeg__ent_adt_t)ltepeg__push((uint32_t)ivar_61, (uint8_t)ivar_62);
             ltepegtest_funtype_17_t ivar_65;
             ltepegtest_closure_19_t cl96788;
             cl96788 = new_ltepegtest_closure_19();
             cl96788->fvar_1 = (uint32_t)ivar_14;
             cl96788->fvar_2 = (ltepegtest_funtype_8_t)ivar_37;
             if (cl96788->fvar_2 != NULL) cl96788->fvar_2->count++;
             release_ltepegtest_funtype_8(ivar_37);
             ivar_65 = (ltepegtest_funtype_17_t)cl96788;
             uint32_t ivar_72;
             ivar_72 = (uint32_t)0;
             ltepegtest_funtype_8_t ivar_66;
             ivar_66 = (ltepegtest_funtype_8_t)ivar_65->ftbl->fptr(ivar_65, ivar_72);
             ltepegtest_funtype_17_t ivar_73;
             ltepegtest_funtype_8_t ivar_75;
             ivar_75 = NULL;
             ivar_73 = (ltepegtest_funtype_17_t)update_ltepegtest_funtype_17(ivar_65, ivar_72, ivar_75);
             if (ivar_75 != NULL) ivar_75->count--;
             ltepegtest_funtype_8_t ivar_74;
             uint8_t ivar_68;
             ivar_68 = (uint8_t)0;
             ltepegtest_funtype_8_t ivar_69;
             ltepeg__ent_adt_t ivar_71;
             ivar_71 = NULL;
             ivar_69 = (ltepegtest_funtype_8_t)update_ltepegtest_funtype_8(ivar_66, ivar_68, ivar_71);
             if (ivar_71 != NULL) ivar_71->count--;
             ivar_74 = (ltepegtest_funtype_8_t)update_ltepegtest_funtype_8(ivar_69, ivar_68, ivar_57);
             if (ivar_57 != NULL) ivar_57->count--;
             ivar_77 = (ltepegtest_funtype_17_t)update_ltepegtest_funtype_17(ivar_73, ivar_72, ivar_74);
             if (ivar_74 != NULL) ivar_74->count--;
             ltepeg__ent_adt_t ivar_85;
             uint8_t ivar_84;
             ivar_84 = (uint8_t)0;
             uint32_t ivar_81;
             //copying to uint32 from uint8;
             ivar_81 = (uint32_t)ivar_84;
             uint8_t ivar_82;
             ivar_82 = (uint8_t)0;
             ivar_85 = (ltepeg__ent_adt_t)ltepeg__push((uint32_t)ivar_81, (uint8_t)ivar_82);
             ltepegtest_record_18_t tmp96822 = new_ltepegtest_record_18();;
             ivar_138 = (ltepegtest_record_18_t)tmp96822;
             tmp96822->depth = (uint8_t)ivar_48;
             tmp96822->lflag = (bool_t)ivar_49;
             tmp96822->scaf = (ltepegtest_funtype_17_t)ivar_77;
             tmp96822->stack = (ltepeg__ent_adt_t)ivar_85;
             /* St */ ltepegtest_record_15_t ivar_42;
             //copying to ltepegtest_record_15 from ltepegtest_record_18;
             {
          ivar_42 = new_ltepegtest_record_15();
          uint32_t tmp96839;
          //copying to uint32 from uint32;
          tmp96839 = (uint32_t)ivar_14;
          tmp96839 += 1;
          ivar_42->scaf = new_ltepegtest_array_14(tmp96839);
          for (uint32_t index_147 = 0; index_147 < tmp96839; index_147++){
                  uint32_t tmp96841;
                  tmp96841 = (uint32_t)255;
                  ivar_42->scaf->elems[index_147] = new_ltepegtest_array_13(tmp96841);
                  for (uint32_t index_148 = 0; index_148 < tmp96841; index_148++){
                   ivar_42->scaf->elems[index_147]->elems[index_148] = (ltepeg__ent_adt_t)ivar_138->scaf->ftbl->fptr(ivar_138->scaf, index_147)->ftbl->fptr(ivar_138->scaf->ftbl->fptr(ivar_138->scaf, index_147), index_148);
                   if (ivar_42->scaf->elems[index_147]->elems[index_148] != NULL) ivar_42->scaf->elems[index_147]->elems[index_148]->count++;
                  };
          };
          ivar_42->depth = (uint64_t)ivar_138->depth;
          ivar_42->stack = (ltepeg__ent_adt_t)ivar_138->stack;
          if (ivar_42->stack != NULL) ivar_42->stack->count++;
          ivar_42->lflag = (bool_t)ivar_138->lflag;
             };
             release_ltepegtest_record_18(ivar_138);
             ltepegtest_funtype_21_t ivar_114;
             ltepeg__lang_spec_t ivar_128;
             ivar_128 = new_ltepegtest_array_22(255);
             uint8_t ivar_122;
             for (uint32_t index96869 = 0; index96869 < 255; index96869++){
           ivar_122 = (uint8_t)index96869;
           ivar_128->elems[index96869] = (ltepeg__prepeg_adt_t)ltepegtest__ljson((uint8_t)ivar_122);
             };
             ltepegtest_array_4_t ivar_129;
             ivar_129 = (ltepegtest_array_4_t)ivar_18->seq;
             ivar_129->count++;
             uint8_t ivar_133;
             ivar_133 = (uint8_t)0;
             uint32_t ivar_130;
             //copying to uint32 from uint8;
             ivar_130 = (uint32_t)ivar_133;
             uint8_t ivar_131;
             ivar_131 = (uint8_t)0;
             ivar_114 = (ltepegtest_funtype_21_t)ltepegproof__buildproof((uint32_t)ivar_14, (ltepeg__lang_spec_t)ivar_128, (ltepegproof_array_50_t)ivar_129, (uint32_t)ivar_130, (uint8_t)ivar_131);
             ltepegtest_record_15_t ivar_134;
             ltepeg__lang_spec_t ivar_102;
             ivar_102 = new_ltepegtest_array_22(255);
             uint8_t ivar_96;
             for (uint32_t index96890 = 0; index96890 < 255; index96890++){
           ivar_96 = (uint8_t)index96890;
           ivar_102->elems[index96890] = (ltepeg__prepeg_adt_t)ltepegtest__ljson((uint8_t)ivar_96);
             };
             ltepegtest_array_4_t ivar_103;
             ivar_103 = (ltepegtest_array_4_t)ivar_18->seq;
             ivar_103->count++;
             release_bytestrings__bytestring(ivar_18);
             uint8_t ivar_109;
             ivar_109 = (uint8_t)0;
             uint32_t ivar_104;
             //copying to uint32 from uint8;
             ivar_104 = (uint32_t)ivar_109;
             uint8_t ivar_105;
             ivar_105 = (uint8_t)0;
	     ivar_134 = (ltepegtest_record_15_t)ltepeg__parse((uint32_t)ivar_14, (ltepeg__lang_spec_t)ivar_102, (ltepeg_array_83_t)ivar_103, (uint32_t)ivar_104, (uint8_t)ivar_105, (ltepeg_record_101_t)ivar_42);
             uint8_t ivar_135;
             ivar_135 = (uint8_t)0;
             uint8_t ivar_137;
             ivar_137 = (uint8_t)0;
             uint32_t ivar_136;
             //copying to uint32 from uint8;
             ivar_136 = (uint32_t)ivar_137;
	     result = (ltepegproof__parsetree_adt_t)ivar_114->ftbl->mptr(ivar_114, ivar_134, ivar_135, ivar_136);
             ivar_114->ftbl->rptr(ivar_114);
} else {
        
             release_file__lifted_file_adt(ivar_2);
             ltepeg__ent_adt_t ivar_146;
             uint8_t ivar_144;
             ivar_144 = (uint8_t)0;
             uint64_t ivar_142;
             //copying to uint64 from uint8;
             ivar_142 = (uint64_t)ivar_144;
             ivar_146 = (ltepeg__ent_adt_t)ltepeg__fail((uint64_t)ivar_142);
             result = (ltepegproof__parsetree_adt_t)ltepegproof__zero((ltepeg__ent_adt_t)ivar_146);
};

        
        return result;
}
